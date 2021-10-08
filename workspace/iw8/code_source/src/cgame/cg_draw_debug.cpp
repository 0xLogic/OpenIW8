/*
==============
CG_DrawDebug_DrawCenterLines
==============
*/

void __fastcall CG_DrawDebug_DrawCenterLines(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawCenterLines@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::DrawDebugOverlays
==============
*/

void __fastcall CgDrawDebug::DrawDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum)
{
  ?DrawDebugOverlays@CgDrawDebug@@QEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_DrawDebug_Infils
==============
*/

void __fastcall CG_DrawDebug_Infils(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_Infils@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_PlayerFootstep
==============
*/

void __fastcall CG_DrawDebug_PlayerFootstep(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?CG_DrawDebug_PlayerFootstep@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CG_DrawWaterMark
==============
*/

void __fastcall CG_DrawWaterMark(const LocalClientNum_t localClientNum)
{
  ?CG_DrawWaterMark@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintMyChangesDebug
==============
*/

double __fastcall CgDrawDebug::PrintMyChangesDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintMyChangesDebug@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawViewmodelAnimList
==============
*/

void __fastcall CG_DrawDebug_DrawViewmodelAnimList(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawViewmodelAnimList@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_UpdateInput
==============
*/

void __fastcall CG_DrawDebug_UpdateInput(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_UpdateInput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawAnims
==============
*/

bool __fastcall CG_DrawDebug_DrawAnims(LocalClientNum_t localClientNum, int handle, float yPos)
{
  return ?CG_DrawDebug_DrawAnims@@YA_NW4LocalClientNum_t@@HM@Z(localClientNum, handle, yPos);
}

/*
==============
CG_DrawDebug_DrawBulletFireLog
==============
*/

void __fastcall CG_DrawDebug_DrawBulletFireLog(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawBulletFireLog@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DebugDraw_ShowXModelRanking
==============
*/

void __fastcall CG_DebugDraw_ShowXModelRanking(const LocalClientNum_t localClientNum)
{
  ?CG_DebugDraw_ShowXModelRanking@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawLogQueue
==============
*/

void __fastcall CG_DrawDebug_DrawLogQueue(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawLogQueue@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_GetOffhandWeapon
==============
*/

int __fastcall CG_DrawDebug_GetOffhandWeapon(const cg_t *cgameGlob, char *outBuffer, int bufferSize, int sizeUsed)
{
  return ?CG_DrawDebug_GetOffhandWeapon@@YAHPEBVcg_t@@PEADHH@Z(cgameGlob, outBuffer, bufferSize, sizeUsed);
}

/*
==============
CgDrawDebug::PrintReplayTime
==============
*/

double __fastcall CgDrawDebug::PrintReplayTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintReplayTime@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CG_DrawDebug_CharacterController
==============
*/

void __fastcall CG_DrawDebug_CharacterController(LocalClientNum_t localClientNum, const int entNum, float *yPos)
{
  ?CG_DrawDebug_CharacterController@@YAXW4LocalClientNum_t@@HAEAM@Z(localClientNum, entNum, yPos);
}

/*
==============
CG_DrawDebug_DrawLadder
==============
*/

void __fastcall CG_DrawDebug_DrawLadder(LocalClientNum_t localClientNum, CgDebugDrawLadderType eType)
{
  ?CG_DrawDebug_DrawLadder@@YAXW4LocalClientNum_t@@W4CgDebugDrawLadderType@@@Z(localClientNum, eType);
}

/*
==============
XAnimTreeCountCustomNode
==============
*/

void __fastcall XAnimTreeCountCustomNode(XAnimTree *tree, unsigned __int16 infoIndex, int *numCustomNodes, int *numAnimInfoNodes)
{
  ?XAnimTreeCountCustomNode@@YAXPEAUXAnimTree@@GPEAH1@Z(tree, infoIndex, numCustomNodes, numAnimInfoNodes);
}

/*
==============
CG_DrawDebug_DrawViewKickLog
==============
*/

void __fastcall CG_DrawDebug_DrawViewKickLog(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawViewKickLog@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintSystemTime
==============
*/

double __fastcall CgDrawDebug::PrintSystemTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintSystemTime@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebug::CornerPrintCaption
==============
*/

double __fastcall CgDrawDebug::CornerPrintCaption(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, float labelWidth, const char *text, const vec4_t *color)
{
  double result; 

  *(float *)&result = ?CornerPrintCaption@CgDrawDebug@@QEBAMPEBUScreenPlacement@@MMMPEBDAEBTvec4_t@@@Z(this, sP, posX, posY, labelWidth, text, color);
  return result;
}

/*
==============
CgDrawDebug::PrintBuildName
==============
*/

double __fastcall CgDrawDebug::PrintBuildName(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintBuildName@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CG_DrawDebug_DrawGameETCounts
==============
*/

void __fastcall CG_DrawDebug_DrawGameETCounts(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawGameETCounts@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_PlayerBullet
==============
*/

void __fastcall CG_DrawDebug_PlayerBullet(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?CG_DrawDebug_PlayerBullet@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CG_DrawDebug_GetSharedPWFlags
==============
*/

int __fastcall CG_DrawDebug_GetSharedPWFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  return ?CG_DrawDebug_GetSharedPWFlags@@YAHPEBUplayerState_s@@PEADH@Z(ps, outBuffer, bufferSize);
}

/*
==============
CG_DrawDebug_DrawSpawnGroupLoot
==============
*/

void __fastcall CG_DrawDebug_DrawSpawnGroupLoot(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawSpawnGroupLoot@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintFrontendSceneDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintFrontendSceneDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintFrontendSceneDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebug::GetCornerFarRight
==============
*/

double __fastcall CgDrawDebug::GetCornerFarRight(CgDrawDebug *this, const ScreenPlacement *scrPlace)
{
  double result; 

  *(float *)&result = ?GetCornerFarRight@CgDrawDebug@@QEBAMPEBUScreenPlacement@@@Z(this, scrPlace);
  return result;
}

/*
==============
CG_DrawDebug_DrawFontTest
==============
*/

void __fastcall CG_DrawDebug_DrawFontTest(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawFontTest@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawBoneVisibility
==============
*/

void __fastcall CG_DrawDebug_DrawBoneVisibility(LocalClientNum_t localClientNum, const int entNum, float *yPos)
{
  ?CG_DrawDebug_DrawBoneVisibility@@YAXW4LocalClientNum_t@@HAEAM@Z(localClientNum, entNum, yPos);
}

/*
==============
CG_DrawDebug_DrawXAnimLodInfoGlobal
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimLodInfoGlobal(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawXAnimLodInfoGlobal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintScriptableDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintScriptableDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintScriptableDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawLineOfSightLatency
==============
*/

void __fastcall CG_DrawDebug_DrawLineOfSightLatency(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawLineOfSightLatency@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::DrawFullScreenDebugOverlays
==============
*/

void __fastcall CgDrawDebug::DrawFullScreenDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum)
{
  ?DrawFullScreenDebugOverlays@CgDrawDebug@@QEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_DrawDebug_GetSharedPMFlags
==============
*/

int __fastcall CG_DrawDebug_GetSharedPMFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  return ?CG_DrawDebug_GetSharedPMFlags@@YAHPEBUplayerState_s@@PEADH@Z(ps, outBuffer, bufferSize);
}

/*
==============
CG_DrawDebug_DrawXAnimLodInfo
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimLodInfo(const LocalClientNum_t localClientNum, int entityNum, CgDebugDrawAnimLodInfoType infoType)
{
  ?CG_DrawDebug_DrawXAnimLodInfo@@YAXW4LocalClientNum_t@@HW4CgDebugDrawAnimLodInfoType@@@Z(localClientNum, entityNum, infoType);
}

/*
==============
CgDrawDebug::PrintViewpos
==============
*/

double __fastcall CgDrawDebug::PrintViewpos(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintViewpos@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CG_DrawDebug_UpdateMantleMotionPathExport
==============
*/

void __fastcall CG_DrawDebug_UpdateMantleMotionPathExport(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_UpdateMantleMotionPathExport@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_Player_ViewValues
==============
*/

void __fastcall CG_DrawDebug_Player_ViewValues(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_Player_ViewValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_GetXAnimLodColor
==============
*/

void __fastcall CG_DrawDebug_GetXAnimLodColor(int lod, vec4_t *outColor)
{
  ?CG_DrawDebug_GetXAnimLodColor@@YAXHAEATvec4_t@@@Z(lod, outColor);
}

/*
==============
CgDrawDebug::CornerPrint
==============
*/

double __fastcall CgDrawDebug::CornerPrint(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, float labelWidth, const char *text, const char *label, const vec4_t *color)
{
  double result; 

  *(float *)&result = ?CornerPrint@CgDrawDebug@@QEBAMPEBUScreenPlacement@@MMMPEBD1AEBTvec4_t@@@Z(this, sP, posX, posY, labelWidth, text, label, color);
  return result;
}

/*
==============
PrintRenderStat
==============
*/

double __fastcall PrintRenderStat(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width, const char *label, int val, int maxVal, int peakVal, float hiThresholdPercent, float medThresholdPercent)
{
  double result; 

  *(float *)&result = ?PrintRenderStat@@YAMPEBVCgDrawDebug@@PEBUScreenPlacement@@MMMPEBDHHHMM@Z(draw, scrPlace, x, y, width, label, val, maxVal, peakVal, hiThresholdPercent, medThresholdPercent);
  return result;
}

/*
==============
CgDrawDebug::PrintWallRunDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintWallRunDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintWallRunDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebug::PrintPerformanceInfo
==============
*/

double __fastcall CgDrawDebug::PrintPerformanceInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintPerformanceInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebug::PrintNoGameModeUpperRightDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintNoGameModeUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, float posY)
{
  double result; 

  *(float *)&result = ?PrintNoGameModeUpperRightDebugInfo@CgDrawDebug@@QEBAMW4LocalClientNum_t@@M@Z(this, localClientNum, posY);
  return result;
}

/*
==============
CG_DrawInputLatencyDeviceOverlay
==============
*/

void __fastcall CG_DrawInputLatencyDeviceOverlay(LocalClientNum_t localClientNum)
{
  ?CG_DrawInputLatencyDeviceOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawBoneVisibility
==============
*/

void __fastcall CG_DrawDebug_DrawBoneVisibility(const ScreenPlacement *scrPlace, const char *text, const int maxChars, const float startX, const float startY, const vec4_t *color, int *rowIndex, int *columnIndex, float *maxY)
{
  ?CG_DrawDebug_DrawBoneVisibility@@YAXPEBUScreenPlacement@@PEBDHMMAEBTvec4_t@@AEAH3AEAM@Z(scrPlace, text, maxChars, startX, startY, color, rowIndex, columnIndex, maxY);
}

/*
==============
CgDrawDebug::PrintNativeScriptDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintNativeScriptDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintNativeScriptDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawButtonBits
==============
*/

void __fastcall CG_DrawDebug_DrawButtonBits(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawButtonBits@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawFPSGraphs
==============
*/

void CG_DrawDebug_DrawFPSGraphs(void)
{
  ?CG_DrawDebug_DrawFPSGraphs@@YAXXZ();
}

/*
==============
CG_DrawDebug_Player
==============
*/

void __fastcall CG_DrawDebug_Player(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_Player@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawFileReadHistoryOverlay
==============
*/

void __fastcall CG_DrawDebug_DrawFileReadHistoryOverlay(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawFileReadHistoryOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_GetOffhandGestureFlags
==============
*/

int __fastcall CG_DrawDebug_GetOffhandGestureFlags(const playerState_s *ps, char *outBuffer, int bufferSize, int sizeUsed)
{
  return ?CG_DrawDebug_GetOffhandGestureFlags@@YAHPEBUplayerState_s@@PEADHH@Z(ps, outBuffer, bufferSize, sizeUsed);
}

/*
==============
CG_DrawDebug_GetOffhandState
==============
*/

int __fastcall CG_DrawDebug_GetOffhandState(const cg_t *cgameGlob, const playerState_s *ps, char *outBuffer, int bufferSize, int sizeUsed)
{
  return ?CG_DrawDebug_GetOffhandState@@YAHPEBVcg_t@@PEBUplayerState_s@@PEADHH@Z(cgameGlob, ps, outBuffer, bufferSize, sizeUsed);
}

/*
==============
CG_DrawDebug_DrawXAnimUsageGlobal
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimUsageGlobal(const LocalClientNum_t localClientNum, bool ismax)
{
  ?CG_DrawDebug_DrawXAnimUsageGlobal@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, ismax);
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo(char *buffer, const int BUFFERSIZE, int *bufferPos, const char *baseColor, const characterInfo_t *const ci, const playerState_s *ps, const int handle, AnimScriptDebugMode mode)
{
  ?CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo@@YAXPEADHPEAHPEBDQEBUcharacterInfo_t@@PEBUplayerState_s@@HW4AnimScriptDebugMode@@@Z(buffer, BUFFERSIZE, bufferPos, baseColor, ci, ps, handle, mode);
}

/*
==============
CgDrawDebug::CornerPrintNoLabel
==============
*/

double __fastcall CgDrawDebug::CornerPrintNoLabel(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, const char *text, const vec4_t *color)
{
  double result; 

  *(float *)&result = ?CornerPrintNoLabel@CgDrawDebug@@QEBAMPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@@Z(this, sP, posX, posY, text, color);
  return result;
}

/*
==============
CG_DrawDebug_DrawSkydive
==============
*/

void __fastcall CG_DrawDebug_DrawSkydive(LocalClientNum_t localClientNum, const bool verbose)
{
  ?CG_DrawDebug_DrawSkydive@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, verbose);
}

/*
==============
CgDrawDebug::PrintCamAndMovementInfo
==============
*/

double __fastcall CgDrawDebug::PrintCamAndMovementInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintCamAndMovementInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CG_DrawDebug_DrawInputContext
==============
*/

void __fastcall CG_DrawDebug_DrawInputContext(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawInputContext@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintCinematicInfo
==============
*/

double __fastcall CgDrawDebug::PrintCinematicInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintCinematicInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_GetSharedPLFlags
==============
*/

int __fastcall CG_DrawDebug_GetSharedPLFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  return ?CG_DrawDebug_GetSharedPLFlags@@YAHPEBUplayerState_s@@PEADH@Z(ps, outBuffer, bufferSize);
}

/*
==============
CG_DrawDebug_PlayerASM_ExecutionOverlay
==============
*/

void __fastcall CG_DrawDebug_PlayerASM_ExecutionOverlay(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_PlayerASM_ExecutionOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_ResetInput
==============
*/

void __fastcall CG_DrawDebug_ResetInput(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_ResetInput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintFrontEndSceneCamDebug
==============
*/

double __fastcall CgDrawDebug::PrintFrontEndSceneCamDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintFrontEndSceneCamDebug@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_GetSharedPOFlags
==============
*/

int __fastcall CG_DrawDebug_GetSharedPOFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  return ?CG_DrawDebug_GetSharedPOFlags@@YAHPEBUplayerState_s@@PEADH@Z(ps, outBuffer, bufferSize);
}

/*
==============
CG_DebugInfils_DrawParent
==============
*/

void __fastcall CG_DebugInfils_DrawParent(LocalClientNum_t localClientNum, const centity_t *cent, int *parentIds, int *numParents)
{
  ?CG_DebugInfils_DrawParent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEAH2@Z(localClientNum, cent, parentIds, numParents);
}

/*
==============
CG_DrawDebug_DrawCharacterHitBox
==============
*/

void __fastcall CG_DrawDebug_DrawCharacterHitBox(LocalClientNum_t localClientNum, int entnum)
{
  ?CG_DrawDebug_DrawCharacterHitBox@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entnum);
}

/*
==============
CG_DrawDebug_DrawViewmodelSwimDragInfo
==============
*/

void __fastcall CG_DrawDebug_DrawViewmodelSwimDragInfo(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawViewmodelSwimDragInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawSvProfile
==============
*/

void __fastcall CG_DrawDebug_DrawSvProfile(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawSvProfile@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintFastfileDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintFastfileDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintFastfileDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_Player_InterpolatePs
==============
*/

void __fastcall CG_DrawDebug_Player_InterpolatePs(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_Player_InterpolatePs@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawXAnimUsage
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimUsage(const LocalClientNum_t localClientNum, int entityNum, bool ismax)
{
  ?CG_DrawDebug_DrawXAnimUsage@@YAXW4LocalClientNum_t@@H_N@Z(localClientNum, entityNum, ismax);
}

/*
==============
CG_DrawDebug_DrawViewmodelInfo
==============
*/

void __fastcall CG_DrawDebug_DrawViewmodelInfo(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawViewmodelInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::GetCornerLabelWidth
==============
*/

double __fastcall CgDrawDebug::GetCornerLabelWidth(CgDrawDebug *this, const char *label)
{
  double result; 

  *(float *)&result = ?GetCornerLabelWidth@CgDrawDebug@@QEBAMPEBD@Z(this, label);
  return result;
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_Client
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo_Client(LocalClientNum_t localClientNum, float requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  ?CG_DrawDebug_PlayerAnimScriptInfo_Client@@YAXW4LocalClientNum_t@@MHW4AnimScriptDebugMode@@@Z(localClientNum, requestedYPos, handle, eventsMode);
}

/*
==============
CgDrawDebug::PrintEventProfile
==============
*/

double __fastcall CgDrawDebug::PrintEventProfile(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintEventProfile@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawBones
==============
*/

void __fastcall CG_DrawDebug_DrawBones(const LocalClientNum_t localClientNum, bool shouldDrawBindPose, CgDebugDrawBonesType eType, const char *nameFilter, int entityNum)
{
  ?CG_DrawDebug_DrawBones@@YAXW4LocalClientNum_t@@_NW4CgDebugDrawBonesType@@PEBDH@Z(localClientNum, shouldDrawBindPose, eType, nameFilter, entityNum);
}

/*
==============
CG_DrawDebug_DrawPerformanceWarnings
==============
*/

void __fastcall CG_DrawDebug_DrawPerformanceWarnings(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawPerformanceWarnings@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawScriptedAnims
==============
*/

void __fastcall CG_DrawDebug_DrawScriptedAnims(LocalClientNum_t localClientNum, float *yPos)
{
  ?CG_DrawDebug_DrawScriptedAnims@@YAXW4LocalClientNum_t@@AEAM@Z(localClientNum, yPos);
}

/*
==============
CgDrawDebug::PrintClientTaskDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintClientTaskDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintClientTaskDebugInfo@CgDrawDebug@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawBallistics
==============
*/

void __fastcall CG_DrawDebug_DrawBallistics(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawBallistics@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebug::PrintFrontendUpperRightDebugInfo
==============
*/

double __fastcall CgDrawDebug::PrintFrontendUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, float posY)
{
  double result; 

  *(float *)&result = ?PrintFrontendUpperRightDebugInfo@CgDrawDebug@@QEBAMW4LocalClientNum_t@@M@Z(this, localClientNum, posY);
  return result;
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo(LocalClientNum_t localClientNum, float requestedYPos, const characterInfo_t *ci, const playerState_s *ps, int handle, AnimScriptDebugMode mode, AnimScriptDebugMode eventsMode)
{
  ?CG_DrawDebug_PlayerAnimScriptInfo@@YAXW4LocalClientNum_t@@MPEBUcharacterInfo_t@@PEBUplayerState_s@@HW4AnimScriptDebugMode@@3@Z(localClientNum, requestedYPos, ci, ps, handle, mode, eventsMode);
}

/*
==============
CG_DebugDraw_DrawAnimWeightsGraph
==============
*/

void __fastcall CG_DebugDraw_DrawAnimWeightsGraph(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  const dvar_t *v8; 
  int integer; 
  DebugBufferGraph *v11; 
  _QWORD *v17; 
  int v18; 
  DebugBufferGraph *v19; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  __int64 v28; 
  char v29; 
  int v33; 
  float v34; 
  vec2_t origin; 
  XAnimTreeDebugNode dbgNodes; 

  v8 = DVARINT_cg_dumpAnims;
  if ( !DVARINT_cg_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( integer == -1 )
  {
    v33 = g_cgDebugVisualWeightsGraphEntNum;
    if ( g_cgDebugVisualWeightsGraphEntNum != -1 )
      v33 = -1;
    g_cgDebugVisualWeightsGraphEntNum = v33;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+18B8h+var_38], xmm6
      vmovaps [rsp+18B8h+var_48], xmm7
    }
    v11 = &g_animDebugWeightGraph;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm6, xmm0, cs:__real@3a83126f
    }
    timeLast_0 = Sys_Milliseconds();
    if ( g_cgDebugVisualWeightsGraphEntNum == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@42c80000
        vmovss  xmm7, cs:__real@44228000
      }
      v17 = &unk_150F42BA8;
      v18 = 0;
      __asm { vmovaps [rsp+18B8h+var_58], xmm8 }
      v19 = &g_animDebugWeightGraph;
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vmovss  dword ptr [rsp+18B8h+origin], xmm0
      }
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+18B8h+var_1880], xmm8
          vcvtsi2ss xmm0, xmm0, ebp
          vsubss  xmm0, xmm7, xmm0
          vmovss  dword ptr [rsp+18B8h+origin+4], xmm0
        }
        CG_InitDebugBufferData(v19, &origin, 700, 65, (const char *)&queryFormat.fmt + 3, 256, 1, v34);
        CG_SetDebugBufferBorderColor(v19, 0x80u, 0x80u, 0x80u, 0xC0u);
        v18 += 75;
        *(v17 - 1) = 0i64;
        v19 = (DebugBufferGraph *)((char *)v19 + 6120);
        *v17 = 0i64;
        *((_DWORD *)v17 + 3) = 0;
        v17 += 765;
      }
      while ( v18 < 600 );
      __asm { vmovaps xmm8, [rsp+18B8h+var_58] }
      g_cgDebugVisualWeightsGraphEntNum = integer;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( integer != localClientNum || LocalClientGlobals->renderingThirdPerson )
      ClientDObj = Com_GetClientDObj(integer, localClientNum);
    else
      ClientDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
    if ( ClientDObj && ClientDObj->tree )
    {
      unk_150F42BB0 = 0;
      unk_150F44398 = 0;
      unk_150F45B80 = 0;
      unk_150F47368 = 0;
      unk_150F48B50 = 0;
      unk_150F4A338 = 0;
      unk_150F4BB20 = 0;
      unk_150F4D308 = 0;
      if ( !CL_Pause_IsGamePaused() )
      {
        XAnimGetDebugVisualAnimWeights(ClientDObj->tree, ClientDObj->tree->children, &dbgNodes);
        __asm { vmovaps xmm2, xmm6; dTime }
        CG_DrawDebug_AnimGraphsGatherData_r(&dbgNodes, 0, *(float *)&_XMM2_8);
      }
      __asm { vmovss  xmm7, cs:__real@3f99999a }
      _RBX = (char *)&unk_150F42BB4;
      v28 = 8i64;
      do
      {
        if ( !CL_Pause_IsGamePaused() && !*(_RBX - 4) )
        {
          v29 = 0;
          if ( *(_QWORD *)(_RBX - 20) )
          {
            __asm
            {
              vmovaps xmm2, xmm6; dTime
              vxorps  xmm1, xmm1, xmm1; data
            }
            CG_AddDebugBufferData(v11, *(float *)&_XMM1_8, *(float *)&_XMM2_8);
          }
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rbx]
            vcomiss xmm0, xmm7
            vmovss  dword ptr [rbx], xmm0
          }
          if ( !v29 )
          {
            __asm
            {
              vxorps  xmm3, xmm3, xmm3; initDTime
              vxorps  xmm2, xmm2, xmm2; initValue
            }
            CG_ClearDebugBufferData(v11, 0, *(float *)&_XMM2_8, *(float *)&_XMM3_8);
            *(_QWORD *)(_RBX - 20) = 0i64;
            *(_QWORD *)(_RBX - 12) = 0i64;
          }
        }
        if ( *(_QWORD *)(_RBX - 20) )
          CG_DebugBufferDraw(v11);
        v11 = (DebugBufferGraph *)((char *)v11 + 6120);
        _RBX += 6120;
        --v28;
      }
      while ( v28 );
    }
    __asm
    {
      vmovaps xmm6, [rsp+18B8h+var_38]
      vmovaps xmm7, [rsp+18B8h+var_48]
    }
  }
}

/*
==============
CG_DebugDraw_ShowXModelRanking
==============
*/
void CG_DebugDraw_ShowXModelRanking(const LocalClientNum_t localClientNum)
{
  trStatistics_t *CurrentStatTracker; 
  const ScreenPlacement *v9; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v23; 
  unsigned int numVerts; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int numTris; 
  float xa; 
  float xb; 
  __int64 x; 
  float xc; 
  float xd; 
  float ya; 
  float yb; 
  __int64 y; 
  float yc; 
  float yd; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  float scalea; 
  float scaleb; 
  __int64 scale; 
  float scalec; 
  float scaled; 
  vec4_t *color; 
  __int64 style; 
  __int64 v52; 
  int v53; 
  int v54; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  char dest[1024]; 

  if ( rg.showXModelRanking )
  {
    CurrentStatTracker = R_GetCurrentStatTracker();
    if ( CurrentStatTracker )
    {
      __asm
      {
        vmovaps [rsp+4F8h+var_38], xmm6
        vmovaps [rsp+4F8h+var_48], xmm7
        vmovaps [rsp+4F8h+var_58], xmm8
        vmovaps [rsp+4F8h+var_68], xmm9
        vmovss  xmm7, cs:__real@3e19999a
        vmovaps xmm2, xmm7; scale
      }
      scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
      v9 = scrPlace;
      font = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
      R_TextHeight(font);
      Com_sprintf(dest, 0x400ui64, "Top %2u XModels %s", CurrentStatTracker->numXModelStats, r_showXModelRankingTypes[rg.showXModelRanking]);
      __asm
      {
        vmovss  xmm0, cs:__real@c3d70000
        vmovss  xmm8, cs:__real@c1c80000
        vmovss  [rsp+4F8h+scale], xmm7
        vmovss  [rsp+4F8h+y], xmm0
        vmovss  [rsp+4F8h+x], xmm8
      }
      UI_DrawText(scrPlace, dest, 1024, font, xa, ya, 1, 3, scalea, &colorLtCyan, 7);
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vcvtsi2ss xmm9, xmm9, ebx
        vsubss  xmm6, xmm9, cs:__real@43d70000
      }
      Com_sprintf(dest, 0x400ui64, "%60.60s %3s %7.7s %7.7s %7.7s %7.7s %9.9s %9.9s %9.9s", "Model", "LOD", "InstNum", "Verts", "Tris", "Surfs", "TotVert", "TotTri", "UVBPgNum");
      __asm
      {
        vmovss  [rsp+4F8h+scale], xmm7
        vmovss  [rsp+4F8h+y], xmm6
        vmovss  [rsp+4F8h+x], xmm8
      }
      UI_DrawText(scrPlace, dest, 1024, font, xb, yb, 1, 3, scaleb, &colorLtCyan, 7);
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v53 = 0;
      v18 = 0;
      v54 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      __asm { vaddss  xmm6, xmm6, xmm9 }
      if ( CurrentStatTracker->numXModelStats )
      {
        do
        {
          v23 = v21;
          numVerts = CurrentStatTracker->rankedXModelStats[v23].numVerts;
          v25 = (numVerts + 63) >> 6;
          LODWORD(v52) = v25;
          LODWORD(style) = CurrentStatTracker->rankedXModelStats[v23].numInstances * CurrentStatTracker->rankedXModelStats[v23].numTris;
          LODWORD(color) = numVerts * CurrentStatTracker->rankedXModelStats[v23].numInstances;
          LODWORD(scale) = CurrentStatTracker->rankedXModelStats[v23].numSurfs;
          LODWORD(vertAlign) = CurrentStatTracker->rankedXModelStats[v23].numTris;
          LODWORD(horzAlign) = numVerts;
          LODWORD(y) = CurrentStatTracker->rankedXModelStats[v23].numInstances;
          LODWORD(x) = CurrentStatTracker->rankedXModelStats[v23].lod;
          Com_sprintf(dest, 0x400ui64, "%60.60s %3d %7d %7d %7d %7d %9d %9d %9u", CurrentStatTracker->rankedXModelStats[v23].name, x, y, horzAlign, vertAlign, scale, color, style, v52);
          __asm
          {
            vmovss  [rsp+4F8h+scale], xmm7
            vmovss  [rsp+4F8h+y], xmm6
            vmovss  [rsp+4F8h+x], xmm8
          }
          UI_DrawText(scrPlace, dest, 1024, font, xc, yc, 1, 3, scalec, &colorWhite, 7);
          ++v21;
          v26 = CurrentStatTracker->rankedXModelStats[v23].numVerts;
          numTris = CurrentStatTracker->rankedXModelStats[v23].numTris;
          v17 += v26;
          v19 += CurrentStatTracker->rankedXModelStats[v23].numSurfs;
          v18 += numTris;
          __asm { vaddss  xmm6, xmm6, xmm9 }
          v20 += v26 * CurrentStatTracker->rankedXModelStats[v23].numInstances;
          v15 = numTris * CurrentStatTracker->rankedXModelStats[v23].numInstances + v53;
          v16 = v25 + v54;
          v53 = v15;
          v54 += v25;
        }
        while ( v21 < CurrentStatTracker->numXModelStats );
        v9 = scrPlace;
      }
      LODWORD(v52) = v16;
      LODWORD(style) = v15;
      LODWORD(color) = v20;
      LODWORD(scale) = v19;
      LODWORD(vertAlign) = v18;
      LODWORD(horzAlign) = v17;
      Com_sprintf(dest, 0x400ui64, "%60.60s %3d %7d %7d %7d %7d %9d %9d %9u", "Sum of above", 0i64, 0i64, horzAlign, vertAlign, scale, color, style, v52);
      __asm
      {
        vmovss  [rsp+4F8h+scale], xmm7
        vaddss  xmm0, xmm9, xmm6
        vmovss  [rsp+4F8h+y], xmm0
        vmovss  [rsp+4F8h+x], xmm8
      }
      UI_DrawText(v9, dest, 1024, font, xd, yd, 1, 3, scaled, &colorWhite, 7);
      __asm
      {
        vmovaps xmm9, [rsp+4F8h+var_68]
        vmovaps xmm8, [rsp+4F8h+var_58]
        vmovaps xmm7, [rsp+4F8h+var_48]
        vmovaps xmm6, [rsp+4F8h+var_38]
      }
    }
  }
}

/*
==============
CG_DebugInfils_DrawParent
==============
*/
void CG_DebugInfils_DrawParent(LocalClientNum_t localClientNum, const centity_t *cent, int *parentIds, int *numParents)
{
  int v8; 
  centity_t *Entity; 
  vec3_t end; 
  tmat43_t<vec3_t> parentAxis; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 11139, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !parentIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 11140, ASSERT_TYPE_ASSERT, "(parentIds)", (const char *)&queryFormat, "parentIds") )
    __debugbreak();
  if ( *numParents < 100 )
  {
    v8 = *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF;
    if ( v8 )
    {
      Entity = CG_GetEntity(localClientNum, v8 - 1);
      if ( (Entity->flags & 1) != 0 )
      {
        if ( CG_Entity_GetParentAxis(localClientNum, cent->nextState.number, &cent->nextState.clientLinkInfo, Entity, &parentAxis) )
        {
          __asm
          {
            vmovss  xmm3, cs:INFIL_DEBUG_PARENT_AXIS_LENGTH
            vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+parentAxis+18h]
            vaddss  xmm1, xmm0, dword ptr [rsp+0B8h+parentAxis+24h]
            vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+parentAxis+1Ch]
            vaddss  xmm0, xmm2, dword ptr [rsp+0B8h+parentAxis+28h]
            vmovss  dword ptr [rsp+0B8h+end], xmm1
            vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+parentAxis+20h]
            vaddss  xmm2, xmm1, dword ptr [rsp+0B8h+parentAxis+2Ch]
            vmovss  dword ptr [rsp+0B8h+end+8], xmm2
            vmovss  dword ptr [rsp+0B8h+end+4], xmm0
          }
          CG_DebugLine(&parentAxis.m[3], &end, &colorWhite, 0, 0);
          parentIds[(*numParents)++] = (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF) - 1;
        }
        CG_DebugInfils_DrawParent(localClientNum, Entity, parentIds, numParents);
      }
    }
  }
}

/*
==============
CG_DrawColorLegends
==============
*/

float __fastcall CG_DrawColorLegends(const ScreenPlacement *scrPlace, double x, double y, double xScale, float yScale, const char *title, const ColorLegend *colorLegends, int colorLegendsCount)
{
  GfxFont *smallDevFont; 
  __int64 v36; 
  const char *s; 
  float v64; 
  float v65; 
  float v66; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@41200000
  }
  smallDevFont = cls.smallDevFont;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, [rsp+0E8h+yScale]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmulss  xmm13, xmm3, xmm6
    vmovaps xmm11, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm7, xmm1
    vmulss  xmm12, xmm10, xmm6
  }
  R_TextHeight(smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm10
    vsubss  xmm5, xmm4, xmm12
    vmulss  xmm14, xmm5, cs:__real@3f000000
    vmovaps xmm3, xmm11; xScale
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+0E8h+var_C8], xmm10
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v64, title, &colorLtBlue, 5, cls.smallDevFont);
  v36 = colorLegendsCount;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, xmm9
    vaddss  xmm8, xmm1, cs:__real@40a00000
    vaddss  xmm6, xmm7, xmm6
  }
  if ( colorLegendsCount > 0 )
  {
    __asm { vaddss  xmm7, xmm6, cs:__real@41700000 }
    do
    {
      s = colorLegends->text;
      __asm
      {
        vaddss  xmm2, xmm14, xmm8; y
        vmovaps xmm3, xmm13; width
        vmovaps xmm1, xmm6; x
        vmovss  [rsp+0E8h+var_C8], xmm12
      }
      CG_Draw2DRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v65, 1, 1, colorLegends->color, cgMedia.whiteMaterial);
      __asm
      {
        vmovaps xmm3, xmm11; xScale
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm7; x
        vmovss  [rsp+0E8h+var_C8], xmm10
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v66, s, &colorWhite, 5, cls.smallDevFont);
      ++colorLegends;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm8, xmm8, xmm0
      }
      --v36;
    }
    while ( v36 );
  }
  __asm { vmovaps xmm14, [rsp+0E8h+var_98] }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vsubss  xmm0, xmm8, xmm9
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebugShaderOverlay
==============
*/
void CG_DrawDebugShaderOverlay(LocalClientNum_t localClientNum)
{
  int integer; 
  unsigned int v13; 
  char *v14; 
  int v15; 
  ColorLegend *p_scrPlace_8; 
  char *v17; 
  unsigned int v26; 
  char *v27; 
  int v28; 
  char *v30; 
  const ScreenPlacement *v32; 
  const char *v33; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  char *v43; 
  ColorLegend *colorLegends; 
  int colorLegendsCount; 
  ScreenPlacement *scrPlace; 
  ColorLegend scrPlace_8; 
  ColorLegend v48; 
  vec4_t *v49; 
  const char *v50; 
  vec4_t *v51; 
  const char *v52; 
  vec4_t *v53; 
  const char *v54; 
  vec4_t *v55; 
  char *v56; 
  char dest[63]; 
  char v58; 
  char v59[64]; 
  char v60[64]; 
  char v61[64]; 
  char v62[64]; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RAX = ScrPlace_GetActivePlacement(localClientNum);
  scrPlace = (ScreenPlacement *)_RAX;
  __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  integer = r_debugShaderMaterial->current.integer;
  __asm
  {
    vmovss  xmm7, dword ptr [rax+28h]
    vaddss  xmm8, xmm0, cs:__real@41a00000
  }
  if ( integer != 30 )
  {
    if ( integer == 38 )
    {
      _RBX = r_debugShaderTemperatureBandsValues;
      if ( !r_debugShaderTemperatureBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovups xmm0, xmmword ptr [rbx+28h] }
      v26 = 0;
      v27 = &v58;
      __asm { vmovups xmmword ptr [rsp+250h+scrPlace+8], xmm0 }
      v28 = 0;
      _RSI = &scrPlace_8;
      v30 = dest;
      do
      {
        if ( v28 >= 4 )
        {
          _EDI = 1500;
        }
        else
        {
          if ( (unsigned int)v28 >= 4 )
          {
            LODWORD(colorLegends) = 4;
            LODWORD(v43) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, colorLegends) )
              __debugbreak();
          }
          __asm { vcvttss2si edi, dword ptr [rsi] }
        }
        LODWORD(fmt) = _EDI;
        Com_sprintf(v30, 0x40ui64, "Temperature [F] %d - %d", v26, fmt);
        *v27 = 0;
        ++v28;
        v27 += 64;
        v30 += 64;
        _RSI = (ColorLegend *)((char *)_RSI + 4);
        v26 = _EDI;
      }
      while ( v28 < 5 );
      v32 = scrPlace;
      v48.color = &colorBlue;
      v48.text = dest;
      v49 = &colorCyan;
      v50 = v59;
      v51 = &colorGreen;
      v52 = v60;
      v53 = &colorYellow;
      v54 = v61;
      v55 = &colorRed;
      v56 = v62;
      colorLegendsCount = 5;
      v33 = "temperature bands";
    }
    else
    {
      if ( integer != 31 )
        goto LABEL_30;
      colorLegendsCount = 4;
      v48.color = &colorOrange;
      v32 = _RAX;
      v48.text = "Diffuse too dark";
      v49 = &colorTeal;
      v50 = "Diffuse too bright";
      v51 = &colorBlue;
      v52 = "Specular too bright";
      v53 = &colorMagenta;
      v54 = "Bad metal";
      v33 = "PBR correctness";
    }
    __asm
    {
      vmovss  xmm3, cs:__real@3f333333; xScale
      vmovaps xmm2, xmm8; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+250h+fmt], xmm3
    }
    CG_DrawColorLegends(v32, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtb, v33, &v48, colorLegendsCount);
    goto LABEL_30;
  }
  _RBX = r_debugShaderGlossinessBandsValues;
  __asm { vmovaps xmmword ptr [rsp+250h+var_38+8], xmm6 }
  if ( !r_debugShaderGlossinessBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+28h]
    vmovss  xmm6, cs:__real@437f0000
  }
  v13 = 0;
  v14 = &v58;
  __asm { vmovups xmmword ptr [rsp+250h+scrPlace+8], xmm0 }
  v15 = 0;
  p_scrPlace_8 = &scrPlace_8;
  v17 = dest;
  do
  {
    if ( v15 >= 4 )
    {
      _EDI = 255;
    }
    else
    {
      if ( (unsigned int)v15 >= 4 )
      {
        LODWORD(colorLegends) = 4;
        LODWORD(v43) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, colorLegends) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsi]
        vcvttss2si edi, xmm1
      }
    }
    LODWORD(fmt) = _EDI;
    Com_sprintf(v17, 0x40ui64, "Gloss %d - %d", v13, fmt);
    *v14 = 0;
    ++v15;
    v14 += 64;
    v17 += 64;
    p_scrPlace_8 = (ColorLegend *)((char *)p_scrPlace_8 + 4);
    v13 = _EDI;
  }
  while ( v15 < 5 );
  __asm { vmovss  xmm3, cs:__real@3f333333; xScale }
  v48.color = &colorBlue;
  v48.text = dest;
  v49 = &colorCyan;
  v50 = v59;
  v51 = &colorGreen;
  v52 = v60;
  v53 = &colorYellow;
  v54 = v61;
  v55 = &colorRed;
  v56 = v62;
  __asm
  {
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+250h+fmt], xmm3
  }
  CG_DrawColorLegends(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta, "glossiness bands", &v48, 5);
  __asm { vmovaps xmm6, xmmword ptr [rsp+250h+var_38+8] }
LABEL_30:
  _R11 = &v64;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_DrawDebug_AnimGraphsGatherData_r
==============
*/

void __fastcall CG_DrawDebug_AnimGraphsGatherData_r(XAnimTreeDebugNode *debugNodes, int nodeIndex, double dTime)
{
  int v4; 
  char v8; 
  int firstChildIndex; 
  __int64 v11; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  v4 = 0;
  __asm { vmovaps xmm6, xmm2 }
  _RDI = &debugNodes[nodeIndex];
  v8 = *((_BYTE *)_RDI + 88);
  if ( (v8 & 0x40) == 0 && (v8 & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3ba3d70a
      vcomiss xmm0, dword ptr [rdi+8]
    }
  }
  if ( _RDI->numChildrenWithLeafOrCustomNodeBelow > 0 )
  {
    firstChildIndex = _RDI->firstChildIndex;
    if ( _RDI->numChildren > 0 )
    {
      do
      {
        v11 = firstChildIndex;
        if ( (*((_BYTE *)&debugNodes[v11] + 88) & 0x20) != 0 )
        {
          __asm { vmovaps xmm2, xmm6; dTime }
          CG_DrawDebug_AnimGraphsGatherData_r(debugNodes, firstChildIndex, *(float *)&_XMM2);
        }
        firstChildIndex = debugNodes[v11].nextSiblingIndex;
        ++v4;
      }
      while ( v4 < _RDI->numChildren );
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
CG_DrawDebug_BuildWeaponPatternWeightsString
==============
*/
void CG_DrawDebug_BuildWeaponPatternWeightsString(const cg_t *cgameGlob, const BgWeaponMap *weaponMap, const playerState_s *ps, const WeaponDef *weapDef, char *strBuffer, int strBufferLength, const bool firstPrint)
{
  int v13; 
  char v21; 
  int v27; 
  char *v28; 
  int numWeaponOffsetPatterns; 
  const WeaponDef *v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  WeaponOffsetPatternDescription *v35; 
  int v37; 
  char *fmt; 
  __int64 v39; 
  double v40; 
  double v41; 
  double v42; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9429, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9430, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9431, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9432, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !strBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9433, ASSERT_TYPE_ASSERT, "(strBuffer)", (const char *)&queryFormat, "strBuffer") )
    __debugbreak();
  if ( strBufferLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9434, ASSERT_TYPE_ASSERT, "(strBufferLength > 0)", (const char *)&queryFormat, "strBufferLength > 0") )
    __debugbreak();
  v13 = 0;
  if ( !firstPrint )
    goto LABEL_30;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = BG_GetCrouchProneBlendMap(ps);
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm2, cs:__real@3f800000; max
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm0, xmm1, cs:__real@3f800000; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vcvtss2sd xmm8, xmm0, xmm0 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1218, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = BG_GetCrouchProneBlendMap(ps);
  __asm
  {
    vcomiss xmm0, cs:__real@3f000000
    vmulss  xmm3, xmm0, xmm6
  }
  if ( !v21 )
    __asm { vsubss  xmm3, xmm6, xmm3 }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm3; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovsd  [rsp+0A8h+var_60], xmm8
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+0A8h+var_68], xmm0
  }
  LODWORD(v39) = ps->weapCommon.weaponOffsetHoldFireFastBlendTime;
  LODWORD(fmt) = ps->weapState[0].weaponFireTime;
  v13 = Com_sprintf_truncate(strBuffer, strBufferLength, "^7ST: ^5%d ^7FT: ^5%d ^7FBT: ^5%d ^7SBT: ^5%d ^7ABT: ^5%d ^3CF: ^7%.2f ^3PF: ^7%.2f", (unsigned int)ps->serverTimeInterpolated, fmt, v39, ps->weapCommon.weaponOffsetHoldFireSlowBlendTime, ps->weapCommon.weaponOffsetAdsBlendTime, v41, v42);
  __asm
  {
    vmovaps xmm8, [rsp+0A8h+var_58]
    vmovaps xmm6, [rsp+0A8h+var_48]
  }
  if ( v13 <= 0 )
  {
    *strBuffer = 0;
  }
  else
  {
LABEL_30:
    v27 = strBufferLength - v13;
    v28 = &strBuffer[v13];
    if ( strBufferLength - v13 > 0 )
    {
      numWeaponOffsetPatterns = FIRST_LINE_PATTERN_COUNT;
      v30 = weapDef;
      if ( weapDef->numWeaponOffsetPatterns < FIRST_LINE_PATTERN_COUNT )
        numWeaponOffsetPatterns = weapDef->numWeaponOffsetPatterns;
      v31 = numWeaponOffsetPatterns;
      if ( firstPrint )
        v31 = 0;
      if ( !firstPrint )
        numWeaponOffsetPatterns = weapDef->numWeaponOffsetPatterns;
      v32 = v31;
      v33 = numWeaponOffsetPatterns - 1;
      if ( v31 > v33 )
      {
LABEL_42:
        I_strcat(v28, v27, "\n");
      }
      else
      {
        v34 = v31;
        while ( 1 )
        {
          v35 = &v30->weaponOffsetPatterns[v34];
          *(double *)&_XMM0 = BG_WeaponOffsets_GetCurveFraction(weaponMap, ps, ps->serverTimeInterpolated, v30, v35);
          __asm
          {
            vcvtss2sd xmm1, xmm0, xmm0
            vmovsd  [rsp+0A8h+var_80], xmm1
          }
          v37 = Com_sprintf_truncate(v28, v27, " ^3P%d[%s]: ^7%.4f", (unsigned int)v31, s_weaponOffsetBlendCurveDebugNames[v35->curveType], v40);
          if ( v37 <= 0 )
            break;
          v27 -= v37;
          v28 += v37;
          if ( v27 <= 0 )
            return;
          v30 = weapDef;
          ++v31;
          ++v32;
          ++v34;
          if ( v32 > v33 )
            goto LABEL_42;
        }
        *v28 = 0;
      }
    }
  }
}

/*
==============
CG_DrawDebug_CharacterController
==============
*/
void CG_DrawDebug_CharacterController(LocalClientNum_t localClientNum, const int entNum, float *yPos)
{
  centity_t *Entity; 
  char v21; 
  CgWeaponMap *Instance; 
  bool v23; 
  const cpose_t *PoseExtended; 
  const cpose_t *ViewModelPoseForHand; 
  const char *v34; 
  const char *v75; 
  const char *v77; 
  const char *v78; 
  const char *v127; 
  const ScreenPlacement *ActivePlacement; 
  char *fmt; 
  float fmta; 
  double y; 
  float ya; 
  double horzAlign; 
  double vertAlign; 
  double v185; 
  float v186; 
  vec4_t *color; 
  double style; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  double v194; 
  double v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  double v208; 
  double v209; 
  double v210; 
  double v211; 
  double v212; 
  double v213; 
  double v214; 
  double v215; 
  double v216; 
  double v217; 
  double v218; 
  double v219; 
  double v220; 
  double v221; 
  double v222; 
  double v223; 
  double v224; 
  double v225; 
  double v226; 
  double v227; 
  double v228; 
  double v229; 
  vec3_t v265; 
  vec3_t v266; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  char dest[2048]; 

  if ( (unsigned int)entNum <= 0x7FF )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    _R14 = Entity;
    if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
    {
      __asm
      {
        vmovaps [rsp+0C00h+var_40], xmm6
        vmovaps [rsp+0C00h+var_50], xmm7
        vmovaps [rsp+0C00h+var_60], xmm8
        vmovaps [rsp+0C00h+var_70], xmm9
        vmovaps [rsp+0C00h+var_80], xmm10
        vmovaps [rsp+0C00h+var_90], xmm11
        vmovaps [rsp+0C00h+var_A0], xmm12
        vmovaps [rsp+0C00h+var_B0], xmm13
        vmovaps [rsp+0C00h+var_C0], xmm14
        vmovaps [rsp+0C00h+var_D0], xmm15
      }
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5338, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      _R12 = CG_GetCharacterInfo(_RDI, entNum);
      if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5341, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      CgTrajectory::InterpolateEntityAngles(_RDI, _R14, &outAngles);
      CG_GetPoseOrigin(&_R14->pose, &outOrigin);
      __asm { vxorps  xmm6, xmm6, xmm6 }
      v21 = 0;
      __asm
      {
        vmovss  dword ptr [rbp+9B0h+var_910], xmm6
        vmovss  dword ptr [rbp+9B0h+var_910+4], xmm6
        vmovss  dword ptr [rbp+9B0h+var_910+8], xmm6
        vmovss  dword ptr [rbp+9B0h+var_920], xmm6
        vmovss  dword ptr [rbp+9B0h+var_920+4], xmm6
        vmovss  dword ptr [rbp+9B0h+var_920+8], xmm6
      }
      v23 = 0;
      if ( entNum == _RDI->predictedPlayerState.clientNum && !_RDI->renderingThirdPerson )
      {
        Instance = CgWeaponMap::GetInstance(localClientNum);
        if ( !BG_IsThirdPersonMode(Instance, &_RDI->predictedPlayerState) && !CG_Camera_Transition_IsHidingViewmodel(localClientNum) )
          v23 = 1;
      }
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm11, xmm11, xmm11
        vxorps  xmm1, xmm1, xmm1
      }
      if ( v23 )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, 2114, 1);
        _RBX = PoseExtended;
        __asm { vxorps  xmm1, xmm1, xmm1 }
        if ( PoseExtended )
        {
          v21 = 1;
          CG_GetPoseOrigin(PoseExtended, &v265);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+38h]
            vmovss  xmm9, dword ptr [rbx+48h]
            vmovss  xmm8, dword ptr [rbx+4Ch]
            vmovss  xmm7, dword ptr [rbx+50h]
            vmovss  xmm11, dword ptr [rdi+3Ch]
            vmovss  xmm10, dword ptr [rdi+40h]
            vmovss  dword ptr [rbp+9B0h+var_A30], xmm0
          }
          ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, WEAPON_HAND_DEFAULT);
          CG_GetPoseOrigin(ViewModelPoseForHand, &v266);
          __asm { vmovss  xmm1, dword ptr [rbp+9B0h+var_A30] }
        }
      }
      v34 = "not swinging";
      __asm
      {
        vmovss  xmm0, dword ptr [r12+0B28h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A30], xmm0
        vmovss  xmm0, dword ptr [r12+0B24h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A28], xmm0
        vmovss  xmm0, dword ptr [r12+0B20h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A20], xmm0
        vmovss  xmm0, dword ptr [r12+0B1Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A18], xmm0
        vmovss  xmm0, dword ptr [r12+0B18h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm12, dword ptr [r12+808h]
        vmovss  xmm13, dword ptr [r12+0B34h]
        vmovss  xmm14, dword ptr [r12+0B30h]
        vmovss  xmm15, dword ptr [r12+0B2Ch]
        vmovsd  [rbp+9B0h+var_A10], xmm0
        vmovss  xmm0, dword ptr [r12+0B14h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A08], xmm0
        vmovss  xmm0, dword ptr [r12+0B10h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_A00], xmm0
        vmovss  xmm0, dword ptr [r12+0B0Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9F8], xmm0
        vmovss  xmm0, dword ptr [r12+0B08h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9F0], xmm0
        vmovss  xmm0, dword ptr [r12+0B04h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9E8], xmm0
        vmovss  xmm0, dword ptr [r12+0B00h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9E0], xmm0
        vmovss  xmm0, dword ptr [r12+0AFCh]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9D8], xmm0
        vmovss  xmm0, dword ptr [r12+0AD0h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9D0], xmm0
        vmovss  xmm0, dword ptr [r12+0AD4h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9C8], xmm0
        vmovss  xmm0, dword ptr [r12+858h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9C0], xmm0
        vmovss  xmm0, dword ptr [r12+860h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9B8], xmm0
        vmovss  xmm0, dword ptr [r12+800h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9B0], xmm0
        vmovss  xmm0, dword ptr [r12+0B40h]
        vcvtss2sd xmm0, xmm0, xmm0
      }
      v75 = "not swinging";
      __asm
      {
        vmovsd  [rbp+9B0h+var_9A0], xmm0
        vmovss  xmm0, dword ptr [r12+0B3Ch]
      }
      if ( _R12->torso.yawing )
        v75 = (char *)&queryFormat.fmt + 3;
      v77 = "not swinging";
      v78 = "not swinging";
      __asm { vcvtss2sd xmm0, xmm0, xmm0 }
      if ( _R12->torso.pitching )
        v77 = (char *)&queryFormat.fmt + 3;
      __asm
      {
        vmovsd  [rbp+9B0h+var_998], xmm0
        vmovss  xmm0, dword ptr [r12+0B38h]
      }
      if ( _R12->legs.yawing )
        v78 = (char *)&queryFormat.fmt + 3;
      __asm
      {
        vcvtss2sd xmm12, xmm12, xmm12
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_9A8], xmm12
      }
      if ( _R12->legs.pitching )
        v34 = (char *)&queryFormat.fmt + 3;
      __asm
      {
        vcvtss2sd xmm13, xmm13, xmm13
        vcvtss2sd xmm14, xmm14, xmm14
        vcvtss2sd xmm15, xmm15, xmm15
        vmovsd  xmm12, [rbp+9B0h+var_A30]
        vmovss  xmm2, dword ptr [rbp+9B0h+outAngles]
        vmovss  xmm3, dword ptr [r12+9C8h]
        vmovss  xmm4, dword ptr [r12+9C4h]
        vmovss  xmm5, dword ptr [r12+9C0h]
        vmovss  xmm6, dword ptr [r14+50h]
        vmovsd  [rbp+9B0h+var_990], xmm0
        vmovsd  [rsp+0C00h+var_A40], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A28]
        vmovsd  [rsp+0C00h+var_A48], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A20]
        vmovsd  [rsp+0C00h+var_A50], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A18]
        vmovsd  [rsp+0C00h+var_A58], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A10]
        vmovsd  [rsp+0C00h+var_A60], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A08]
        vmovsd  [rsp+0C00h+var_A68], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_A00]
        vmovsd  [rsp+0C00h+var_A70], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9F8]
        vmovsd  [rsp+0C00h+var_A78], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9F0]
        vcvtss2sd xmm0, xmm7, xmm7
        vmovss  xmm7, dword ptr [r14+4Ch]
        vmovsd  [rbp+9B0h+var_988], xmm0
        vcvtss2sd xmm0, xmm8, xmm8
        vmovss  xmm8, dword ptr [r14+48h]
        vmovsd  [rbp+9B0h+var_980], xmm0
        vcvtss2sd xmm0, xmm9, xmm9
        vmovss  xmm9, dword ptr [rbp+9B0h+outOrigin+8]
        vmovsd  [rbp+9B0h+var_978], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_920+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_970], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_920+4]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_968], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_920]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_960], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_910+8]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_958], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_910+4]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_950], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+var_910]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rbp+9B0h+var_948], xmm0
        vcvtss2sd xmm0, xmm10, xmm10
        vmovss  xmm10, dword ptr [rbp+9B0h+outOrigin+4]
        vmovsd  [rbp+9B0h+var_940], xmm0
        vcvtss2sd xmm0, xmm11, xmm11
        vmovss  xmm11, dword ptr [rbp+9B0h+outOrigin]
        vmovsd  [rsp+0C00h+var_A80], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9E8]
        vmovsd  [rbp+9B0h+var_938], xmm0
        vcvtss2sd xmm0, xmm1, xmm1
        vmovss  xmm1, dword ptr [rbp+9B0h+outAngles+4]
        vmovsd  [rbp+9B0h+var_930], xmm0
        vmovss  xmm0, dword ptr [rbp+9B0h+outAngles+8]
        vmovsd  [rsp+0C00h+var_A88], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9E0]
      }
      v127 = "false";
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C00h+var_A90], xmm12
      }
      if ( v21 )
        v127 = "true";
      __asm
      {
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vcvtss2sd xmm6, xmm6, xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vcvtss2sd xmm10, xmm10, xmm10
        vcvtss2sd xmm11, xmm11, xmm11
        vmovsd  xmm12, [rbp+9B0h+var_9D8]
        vmovsd  [rsp+0C00h+var_A98], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9D0]
        vmovsd  [rsp+0C00h+var_AA0], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9C8]
        vmovsd  [rsp+0C00h+var_AA8], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9C0]
        vmovsd  [rsp+0C00h+var_AB8], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9B8]
        vmovsd  [rsp+0C00h+var_AC8], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9B0]
        vmovsd  [rsp+0C00h+var_AD8], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9A8]
        vmovsd  [rsp+0C00h+var_AE8], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_9A0]
        vmovsd  [rsp+0C00h+var_AF0], xmm13
        vmovsd  [rsp+0C00h+var_AF8], xmm14
        vmovsd  [rsp+0C00h+var_B00], xmm15
        vmovsd  [rsp+0C00h+var_B08], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_998]
        vmovsd  [rsp+0C00h+var_B10], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_990]
        vmovsd  [rsp+0C00h+var_B18], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_988]
        vmovsd  [rsp+0C00h+var_B20], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_980]
        vmovsd  [rsp+0C00h+var_B28], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_978]
        vmovsd  [rsp+0C00h+var_B30], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_970]
        vmovsd  [rsp+0C00h+var_B38], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_968]
        vmovsd  [rsp+0C00h+var_B40], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_960]
        vmovsd  [rsp+0C00h+var_B48], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_958]
        vmovsd  [rsp+0C00h+var_B50], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_950]
        vmovsd  [rsp+0C00h+var_B58], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_948]
        vmovsd  [rsp+0C00h+var_B60], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_940]
        vmovsd  [rsp+0C00h+var_B68], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_938]
        vmovsd  [rsp+0C00h+var_B70], xmm12
        vmovsd  xmm12, [rbp+9B0h+var_930]
        vmovsd  [rsp+0C00h+var_B78], xmm12
        vmovsd  [rsp+0C00h+var_B88], xmm0
        vmovsd  [rsp+0C00h+var_B90], xmm1
        vmovsd  [rsp+0C00h+var_B98], xmm2
        vmovsd  [rsp+0C00h+var_BA0], xmm3
        vmovsd  [rsp+0C00h+var_BA8], xmm4
        vmovsd  qword ptr [rsp+0C00h+style], xmm5
        vmovsd  [rsp+0C00h+color], xmm6
        vmovsd  [rsp+0C00h+var_BC0], xmm7
        vmovsd  qword ptr [rsp+0C00h+vertAlign], xmm8
        vmovsd  qword ptr [rsp+0C00h+horzAlign], xmm9
        vmovsd  qword ptr [rsp+0C00h+y], xmm10
        vmovsd  [rsp+0C00h+fmt], xmm11
      }
      Com_sprintf_truncate(dest, 0x800ui64, "entnum: %d pose origin: (%.2f, %.2f, %.2f) pose angles: (P:%.2f Y:%.2f R:%.2f) player angles: (P:%.2f Y:%.2f R:%.2f) ent angles: (P:%.2f Y:%.2f R:%.2f)\nlegs active: %s ps origin: (%.2f, %.2f, %.2f) vm origin: (%.2f, %.2f, %.2f) legs pose origin: (%.2f, %.2f, %.2f) legs pose angles: (P:%.2f Y:%.2f R:%.2f)\ntag origin offset: (%.2f, %.2f, %.2f) tag origin angles: (P:%.2f Y:%.2f R:%.2f) legs: (P:%.2f %s Y:%.2f %s) torso: (P:%.2f %s Y:%.2f %s)\nwaist P: %.2f torso P: %.2f back low: (P:%.2f Y:%.2f R:%.2f) back mid: (P:%.2f Y:%.2f R:%.2f) back up: (P:%.2f Y:%.2f R:%.2f) pelvis: (P:%.2f Y:%.2f R:%.2f)\n", (unsigned int)entNum, *(double *)&fmt, y, horzAlign, vertAlign, v185, *(double *)&color, style, v189, v190, v191, v192, v193, v127, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v34, v213, v78, v214, v77, v215, v75, v216, v217, v218, v219, v220, v221, v222, v223, v224, v225, v226, v227, v228, v229);
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm { vmovss  xmm0, cs:DEBUG_TEXT_SCALE_2 }
      _RBX = yPos;
      __asm
      {
        vmovss  dword ptr [rsp+0C00h+var_BC0], xmm0
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+0C00h+y], xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rsp+0C00h+fmt], xmm1
      }
      UI_DrawText(ActivePlacement, dest, 2048, cls.smallDevFont, fmta, ya, 1, 1, v186, &colorWhite, 3);
      __asm
      {
        vmovss  xmm0, cs:TEXT_HEIGHT
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovaps xmm15, [rsp+0C00h+var_D0]
        vmovaps xmm14, [rsp+0C00h+var_C0]
        vmovaps xmm13, [rsp+0C00h+var_B0]
        vmovaps xmm12, [rsp+0C00h+var_A0]
        vmovaps xmm11, [rsp+0C00h+var_90]
        vmovaps xmm10, [rsp+0C00h+var_80]
        vmovaps xmm9, [rsp+0C00h+var_70]
        vmovaps xmm8, [rsp+0C00h+var_60]
        vmovaps xmm7, [rsp+0C00h+var_50]
        vmovaps xmm6, [rsp+0C00h+var_40]
        vmovss  dword ptr [rbx], xmm1
      }
    }
  }
}

/*
==============
CG_DrawDebug_CornerPrintScale
==============
*/

float __fastcall CG_DrawDebug_CornerPrintScale(const ScreenPlacement *sP, double posX, double posY, double labelWidth, const char *text, const char *label, const vec4_t *color, const float scaleX, const float scaleY, const float scaleLine, const bool forceNoLabel)
{
  const dvar_t *v17; 
  float v42; 
  float v43; 
  float v44; 
  char v47; 
  void *retaddr; 

  _R11 = &retaddr;
  v17 = DVARBOOL_cg_drawFPSLabels;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm1
  }
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( !v17->current.enabled || forceNoLabel )
  {
    __asm
    {
      vmovss  xmm0, [rsp+98h+scaleY]
      vmovss  xmm3, [rsp+98h+scaleX]; xScale
      vmovaps xmm2, xmm9; y
      vmovaps xmm1, xmm6; x
      vmovss  [rsp+98h+var_78], xmm0
    }
    CG_DrawDevString(sP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v44, text, color, 6, cls.smallDevFont);
  }
  else
  {
    __asm
    {
      vmovss  xmm3, [rsp+98h+scaleX]; xScale
      vmovaps [rsp+98h+var_38], xmm8
      vsubss  xmm8, xmm6, xmm7
      vmovss  xmm7, [rsp+98h+scaleY]
      vmovaps xmm2, xmm9; y
      vmovaps xmm1, xmm8; x
      vmovss  [rsp+98h+var_78], xmm7
    }
    CG_DrawDevString(sP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v42, text, color, 6, cls.smallDevFont);
    __asm
    {
      vmovss  xmm3, [rsp+98h+scaleX]; xScale
      vmovaps xmm2, xmm9; y
      vmovaps xmm1, xmm8; x
      vmovss  [rsp+98h+var_78], xmm7
      vmovaps xmm8, [rsp+98h+var_38]
    }
    CG_DrawDevString(sP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v43, label, &colorWhiteFaded, 5, cls.smallDevFont);
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, [rsp+98h+scaleLine]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_DrawAnims
==============
*/

bool __fastcall CG_DrawDebug_DrawAnims(LocalClientNum_t localClientNum, int handle, double yPos)
{
  signed __int64 v3; 
  void *v8; 
  int v12; 
  int v13; 
  unsigned int v14; 
  DObj *ClientDObj; 
  const DObj *v16; 
  centity_t *v17; 
  centity_t *Pose; 
  const char *v19; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  bool v26; 
  entityState_t *p_nextState; 
  scr_string_t AnimsetName; 
  const char *v29; 
  const char *v52; 
  float xa; 
  __int64 x; 
  float xb; 
  __int64 xc; 
  float v58; 
  double v59; 
  float v60; 
  __int64 v61; 
  double horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  float v66; 
  float v67; 
  __int64 v68; 
  int animState; 
  vec3_t outState; 
  int animEntry; 
  __int64 v72; 
  char buffer[12288]; 
  char v78; 

  v8 = alloca(v3);
  v72 = -2i64;
  __asm
  {
    vmovaps [rsp+3108h+var_38], xmm6
    vmovaps [rsp+3108h+var_48], xmm7
    vmovaps [rsp+3108h+var_58], xmm8
    vmovaps [rsp+3108h+var_68], xmm9
    vmovaps xmm9, xmm2
  }
  v12 = 0;
  v13 = 0;
  v14 = handle - 2117;
  if ( handle < 2048 || v14 <= 0x17F )
    v13 = handle;
  ClientDObj = Com_GetClientDObj(v13, localClientNum);
  v16 = ClientDObj;
  if ( ClientDObj )
  {
    v17 = NULL;
    if ( handle >= 2048 )
    {
      if ( v14 > 0x17F )
        goto LABEL_8;
      Pose = (centity_t *)CG_ClientModel_GetPose(localClientNum, v14);
    }
    else
    {
      Pose = CG_GetEntity(localClientNum, handle);
      v17 = Pose;
      if ( !Pose || (Pose->flags & 1) == 0 )
        goto LABEL_8;
    }
    _RBX = Pose;
    if ( Pose )
    {
      CG_GetPoseOrigin(&Pose->pose, &outState);
      __asm
      {
        vmovss  xmm4, dword ptr [rbx+50h]
        vcvtss2sd xmm4, xmm4, xmm4
        vmovss  xmm5, dword ptr [rbx+4Ch]
        vcvtss2sd xmm5, xmm5, xmm5
        vmovss  xmm0, dword ptr [rbx+48h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm1, [rsp+3108h+var_3098]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovss  xmm2, dword ptr [rsp+3108h+outState+4]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovss  xmm3, dword ptr [rsp+3108h+outState]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+3108h+var_30C8], xmm4
        vmovsd  qword ptr [rsp+3108h+vertAlign], xmm5
        vmovsd  qword ptr [rsp+3108h+horzAlign], xmm0
        vmovsd  [rsp+3108h+var_30E0], xmm1
        vmovsd  qword ptr [rsp+3108h+x], xmm2
        vmovq   r9, xmm3
      }
      v52 = j_va("client %d, entnum %d: (%.1f,%.1f,%.1f), (%.1f,%.1f,%.1f)\n", (unsigned int)localClientNum, (unsigned int)handle, _R9, xc, v61, horzAligna, vertAligna, v68);
      DObjDisplayAnimToBuffer(v16, v52, buffer, 12288);
      memset(&outState, 0, sizeof(outState));
LABEL_9:
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm
      {
        vmovss  xmm7, cs:__real@3e4ccccd
        vmovaps xmm2, xmm7; scale
      }
      FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm0, cs:__real@3e3851ec
        vmovss  dword ptr [rsp+3108h+var_30C8], xmm0
        vmovss  dword ptr [rsp+3108h+var_30E0], xmm9
        vxorps  xmm8, xmm8, xmm8
        vmovss  [rsp+3108h+x], xmm8
      }
      UI_DrawText(ActivePlacement, buffer, 12288, FontHandle, xa, v58, 1, 1, v66, &colorWhite, 3);
      if ( v17 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
        {
          v26 = &v17->nextState == NULL;
          p_nextState = &v17->nextState;
          animState = -1;
          if ( !v26 && (*(_BYTE *)&p_nextState->animInfo.selectAnim & 1) != 0 )
          {
            AnimsetName = BG_AnimationState_GetAnimsetName(p_nextState);
            if ( AnimsetName )
            {
              if ( ((p_nextState->eType - 12) & 0xFFFD) != 0 )
              {
                BG_AnimationState_GetState(p_nextState, &animState, &animEntry);
                *(_QWORD *)outState.v = 0i64;
                BG_Animset_GetStateInfoByIndex(AnimsetName, animState, (AnimsetState **)&outState);
                LOBYTE(v12) = *(_DWORD *)(*(_QWORD *)outState.v + 40i64) != 0;
                v29 = SL_ConvertToString((scr_string_t)**(_DWORD **)outState.v);
                if ( v29 )
                {
                  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.waistPitchPacked);
                  __asm { vcvtss2sd xmm6, xmm0, xmm0 }
                  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.torsoPitchPacked);
                  __asm { vcvtss2sd xmm1, xmm0, xmm0 }
                  LODWORD(vertAlign) = v12;
                  __asm
                  {
                    vmovsd  qword ptr [rsp+3108h+horzAlign], xmm6
                    vmovsd  [rsp+3108h+var_30E0], xmm1
                  }
                  LODWORD(x) = animState;
                  Com_sprintf(buffer, 0x3000ui64, "state=%s (%d) torsopitch=%.2f waist pitch=%.2f HasAimSet=%d", v29, x, v59, horzAlign, vertAlign);
                  __asm
                  {
                    vaddss  xmm0, xmm9, cs:__real@438c0000
                    vmovss  dword ptr [rsp+3108h+var_30C8], xmm7
                    vmovss  dword ptr [rsp+3108h+var_30E0], xmm0
                    vmovss  [rsp+3108h+x], xmm8
                  }
                  UI_DrawText(ActivePlacement, buffer, 12288, FontHandle, xb, v60, 1, 1, v67, &colorWhite, 3);
                }
              }
            }
          }
        }
      }
      LOBYTE(ClientDObj) = 1;
      goto LABEL_18;
    }
LABEL_8:
    v19 = j_va("client %d, entnum %d:\n", (unsigned int)localClientNum, (unsigned int)handle);
    DObjDisplayAnimToBuffer(v16, v19, buffer, 12288);
    goto LABEL_9;
  }
LABEL_18:
  _R11 = &v78;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return (char)ClientDObj;
}

/*
==============
CG_DrawDebug_DrawBallistics
==============
*/
void CG_DrawDebug_DrawBallistics(LocalClientNum_t localClientNum)
{
  CgBallistics *System; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    System = CgBallistics::GetSystem(LOCAL_CLIENT_0);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6147, ASSERT_TYPE_ASSERT, "(ballisticsSystem)", (const char *)&queryFormat, "ballisticsSystem") )
      __debugbreak();
    CgBallistics::DrawDebugOverlay(System);
  }
}

/*
==============
CG_DrawDebug_DrawBone
==============
*/
void CG_DrawDebug_DrawBone(const DObj *obj, const centity_t *cent, int modelIndex, scr_string_t boneName, XBoneInfo **boneInfoArray, const vec4_t *boneColor)
{
  DObjAnimMat *RotTransArray; 
  unsigned __int8 index[8]; 
  vec3_t outOrigin; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v16; 
  tmat33_t<vec3_t> axis; 

  index[0] = -2;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10527, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10528, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !boneInfoArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10529, ASSERT_TYPE_ASSERT, "(boneInfoArray)", (const char *)&queryFormat, "boneInfoArray") )
    __debugbreak();
  if ( DObjGetBoneIndexFromStartModel(obj, boneName, modelIndex, index) && index[0] != 0xFF )
  {
    if ( (modelIndex < 0 || modelIndex >= obj->numModels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10536, ASSERT_TYPE_ASSERT, "(modelIndex >= 0 && modelIndex < obj->numModels)", (const char *)&queryFormat, "modelIndex >= 0 && modelIndex < obj->numModels") )
      __debugbreak();
    if ( !bitarray_base<bitarray<256>>::testBit(&obj->ignoreCollision, modelIndex) )
    {
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v16);
      bitarray_base<bitarray<256>>::setBit(&v16, index[0]);
      CG_LocationTraceDobjCalcPose(obj, &cent->pose, (DObjPartBits *)&v16);
      RotTransArray = DObjGetRotTransArray(obj);
      if ( RotTransArray )
      {
        _RBX = boneInfoArray[index[0]];
        QuatToAxis(&RotTransArray[index[0]].quat, &axis);
        if ( CG_DObjGetWorldBonePos(&cent->pose, obj, index[0], &outOrigin) )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vucomiss xmm0, dword ptr [rbx+0Ch]
          }
          if ( _RBX )
            CG_DebugBoxOriented(&outOrigin, &_RBX->bounds, &axis, boneColor, 1, 0);
        }
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawBoneVisibility
==============
*/
void CG_DrawDebug_DrawBoneVisibility(const ScreenPlacement *scrPlace, const char *text, const int maxChars, const float startX, const float startY, const vec4_t *color, int *rowIndex, int *columnIndex, float *maxY)
{
  float v20; 
  float v21; 
  float v22; 

  _RAX = maxY;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, cs:ROW_HEIGHT
    vaddss  xmm1, xmm3, cs:ROW_HEIGHT
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
    vmulss  xmm2, xmm0, cs:COLUMN_OFFSET
    vmaxss  xmm0, xmm1, dword ptr [rax]
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm0, cs:DEBUG_TEXT_SCALE_1
    vmovss  [rsp+68h+var_28], xmm0
    vmovss  [rsp+68h+var_40], xmm3
    vmovss  [rsp+68h+var_48], xmm2
  }
  UI_DrawText(scrPlace, text, maxChars, cls.smallDevFont, v20, v21, 1, 1, v22, color, 3);
  if ( ++*rowIndex >= MAX_ROWS )
  {
    *rowIndex = 0;
    ++*columnIndex;
  }
}

/*
==============
CG_DrawDebug_DrawBoneVisibility
==============
*/
void CG_DrawDebug_DrawBoneVisibility(LocalClientNum_t localClientNum, const int entNum, float *yPos)
{
  const DObj *ClientDObj; 
  const DObj *v8; 
  int v9; 
  int v10; 
  const ScreenPlacement *ActivePlacement; 
  unsigned int v12; 
  int v13; 
  const ScreenPlacement *i; 
  unsigned __int8 numBones; 
  __int64 v24; 
  const char *BoneName; 
  const char *v26; 
  float fmt; 
  float fmta; 
  float ya; 
  __int64 y; 
  float yb; 
  __int64 horzAlign; 
  float v40; 
  float v41; 
  unsigned int v42; 
  int v43; 
  int NumModels; 
  ScreenPlacement *scrPlace; 
  const XModel *Model; 
  DObjPartBits partBits; 
  char dest[1024]; 

  _RBP = yPos;
  ClientDObj = Com_GetClientDObj(entNum, localClientNum);
  v8 = ClientDObj;
  if ( ClientDObj )
  {
    v9 = 0;
    v10 = 0;
    NumModels = DObjGetNumModels(ClientDObj);
    DObjGetHidePartBits(v8, &partBits);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v12 = 0;
    scrPlace = (ScreenPlacement *)ActivePlacement;
    v13 = 0;
    v42 = 0;
    v43 = 0;
    for ( i = ActivePlacement; v13 < NumModels; v42 = v12 )
    {
      Model = DObjGetModel(v8, v13);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5298, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      Com_sprintf(dest, 0x400ui64, "^2Model %2d: ^7%-50s\n", (unsigned int)v13, Model->name);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm4, xmm0, cs:ROW_HEIGHT
        vaddss  xmm0, xmm4, cs:ROW_HEIGHT
        vmaxss  xmm1, xmm0, dword ptr [rbp+0]
        vmovss  xmm0, cs:DEBUG_TEXT_SCALE_1
        vmovss  [rsp+4F8h+var_4B8], xmm0
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, edi
        vmulss  xmm3, xmm2, cs:COLUMN_OFFSET
        vmovss  dword ptr [rbp+0], xmm1
        vmovss  [rsp+4F8h+y], xmm4
        vmovss  dword ptr [rsp+4F8h+fmt], xmm3
      }
      UI_DrawText(i, dest, 1024, cls.smallDevFont, fmt, ya, 1, 1, v40, &colorWhite, 3);
      if ( ++v9 >= MAX_ROWS )
      {
        v9 = 0;
        ++v10;
      }
      numBones = Model->numBones;
      if ( numBones )
      {
        _R13 = yPos;
        v24 = numBones;
        do
        {
          BoneName = DObjGetBoneName(v8, v12);
          if ( v12 >= 0x100 )
          {
            LODWORD(horzAlign) = 256;
            LODWORD(y) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", y, horzAlign) )
              __debugbreak();
          }
          v26 = "^1Hidden";
          if ( ((0x80000000 >> (v12 & 0x1F)) & partBits.array[(unsigned __int64)v12 >> 5]) == 0 )
            v26 = "^2Visible";
          Com_sprintf(dest, 0x400ui64, "^7%-3d: %-25s - %7s\n", v12, BoneName, v26);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, esi
            vmulss  xmm4, xmm0, cs:ROW_HEIGHT
            vaddss  xmm0, xmm4, cs:ROW_HEIGHT
            vmaxss  xmm1, xmm0, dword ptr [r13+0]
            vmovss  xmm0, cs:DEBUG_TEXT_SCALE_1
            vmovss  [rsp+4F8h+var_4B8], xmm0
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, edi
            vmulss  xmm3, xmm2, cs:COLUMN_OFFSET
            vmovss  dword ptr [r13+0], xmm1
            vmovss  [rsp+4F8h+y], xmm4
            vmovss  dword ptr [rsp+4F8h+fmt], xmm3
          }
          UI_DrawText(scrPlace, dest, 1024, cls.smallDevFont, fmta, yb, 1, 1, v41, &colorWhite, 3);
          if ( ++v9 >= MAX_ROWS )
          {
            v9 = 0;
            ++v10;
          }
          ++v12;
          --v24;
        }
        while ( v24 );
        v13 = v43;
        v12 = v42;
        _RBP = yPos;
        numBones = Model->numBones;
        i = scrPlace;
      }
      ++v13;
      v12 += numBones;
      v43 = v13;
    }
  }
}

/*
==============
CG_DrawDebug_DrawBones
==============
*/
void CG_DrawDebug_DrawBones(const LocalClientNum_t localClientNum, bool shouldDrawBindPose, CgDebugDrawBonesType eType, const char *nameFilter, int entityNum)
{
  const char *v16; 
  const DObj *ClientDObj; 
  const DObj *v18; 
  int v19; 
  int v20; 
  unsigned int v22; 
  int v23; 
  DObjClientPartBits *v24; 
  __int64 v25; 
  __int64 v26; 
  DObjClientPartBits *v27; 
  unsigned int v28; 
  unsigned __int64 v29; 
  char v30; 
  cg_t *LocalClientGlobals; 
  int v36; 
  int *v37; 
  int v46; 
  char v60; 
  DObjClientPartBits *v62; 
  unsigned __int64 v63; 
  char v64; 
  const char *BoneName; 
  const char *v66; 
  char v92; 
  int v100; 
  int v102; 
  unsigned __int16 OriginalNonDuplicate; 
  int ParentOrDuplicate; 
  const vec4_t *v105; 
  const char *v106; 
  char *v121; 
  __int64 fromServer; 
  __int64 v140; 
  __int64 v141; 
  __int64 v142; 
  int v144; 
  int boneIndex; 
  playerState_s *p_predictedPlayerState; 
  cpose_t *pose; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t outOrg; 
  DObjPartBits partBits; 
  vec3_t end; 
  vec3_t v155; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> v157; 
  DObjClientPartBits v158; 
  tmat33_t<vec3_t> v159; 
  tmat33_t<vec3_t> v160; 
  DObjBoneParentMap outParentMap; 
  int boneIndices[4096]; 
  char _Buffer[128]; 

  v16 = nameFilter;
  *(_QWORD *)outOrg.v = nameFilter;
  ClientDObj = Com_GetClientDObj(entityNum, localClientNum);
  v18 = ClientDObj;
  if ( !ClientDObj )
  {
    Com_Printf(0, "Entity %i is not a dynamic object.\n", (unsigned int)entityNum);
    Dvar_SetInt_Internal(DVARINT_cg_drawDebugBones, 2047);
    return;
  }
  v144 = DObjNumBones(ClientDObj);
  v19 = v144;
  v20 = DObjNumClientOnlyBones(v18);
  pose = (cpose_t *)CG_GetPose(localClientNum, entityNum);
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5548, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm { vmovss  xmm2, cs:__real@3f51b3f2 }
  v22 = 0;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  boneIndex = 0;
  __asm { vmovss  [rsp+6700h+var_66A0], xmm2 }
  if ( !v144 )
  {
    if ( !v20 )
      return;
    boneIndex = 0x8000;
  }
  v23 = v144;
  __asm
  {
    vmovaps [rsp+6700h+var_40], xmm6
    vmovaps [rsp+6700h+var_50], xmm7
    vmovaps [rsp+6700h+var_60], xmm8
    vmovaps [rsp+6700h+var_B0], xmm13
    vmovaps [rsp+6700h+var_C0], xmm14
    vmovaps [rsp+6700h+var_D0], xmm15
  }
  if ( v20 > 0 )
    v23 = v20 + v144;
  if ( eType == CG_DEBUG_DRAW_BONES_IK )
  {
    XAnimIKDebug_GetAllBonesPartbits(v18, &partBits);
    v24 = &v158;
    v25 = 8i64;
    do
    {
      *(_QWORD *)v24->array = 0i64;
      *(_QWORD *)&v24->array[2] = 0i64;
      *(_QWORD *)&v24->array[4] = 0i64;
      v24 = (DObjClientPartBits *)((char *)v24 + 64);
      *(_QWORD *)&v24[-1].array[14] = 0i64;
      *(_QWORD *)&v24[-1].array[16] = 0i64;
      *(_QWORD *)&v24[-1].array[18] = 0i64;
      *(_QWORD *)&v24[-1].array[20] = 0i64;
      *(_QWORD *)&v24[-1].array[22] = 0i64;
      --v25;
    }
    while ( v25 );
    v158.array[0] = partBits.array[0];
    v158.array[1] = partBits.array[1];
    v158.array[2] = partBits.array[2];
    v158.array[3] = partBits.array[3];
    v158.array[4] = partBits.array[4];
    v158.array[5] = partBits.array[5];
    v158.array[6] = partBits.array[6];
    v158.array[7] = partBits.array[7];
    goto LABEL_29;
  }
  if ( eType != CG_DEBUG_DRAW_BONES_PROC )
  {
    if ( eType == CG_DEBUG_DRAW_BONES_PHYSICS )
    {
      XAnimProdDebug_GetAllPhysicsPartBits(v18, &v158);
      goto LABEL_29;
    }
    v26 = 8i64;
    if ( eType == CG_DEBUG_DRAW_BONES_CLIENT_ONLY )
    {
      v27 = &v158;
      do
      {
        *(_QWORD *)v27->array = 0i64;
        *(_QWORD *)&v27->array[2] = 0i64;
        *(_QWORD *)&v27->array[4] = 0i64;
        v27 = (DObjClientPartBits *)((char *)v27 + 64);
        *(_QWORD *)&v27[-1].array[14] = 0i64;
        *(_QWORD *)&v27[-1].array[16] = 0i64;
        *(_QWORD *)&v27[-1].array[18] = 0i64;
        *(_QWORD *)&v27[-1].array[20] = 0i64;
        *(_QWORD *)&v27[-1].array[22] = 0i64;
        --v26;
      }
      while ( v26 );
      v28 = v144;
      if ( v144 >= v23 )
        goto LABEL_28;
      do
      {
        if ( v28 >= 0x1000 )
        {
          LODWORD(v142) = 4096;
          LODWORD(v141) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v141, v142) )
            __debugbreak();
        }
        v29 = (unsigned __int64)v28 >> 5;
        v30 = v28++ & 0x1F;
        v158.array[v29] |= 0x80000000 >> v30;
      }
      while ( (int)v28 < v23 );
    }
    else
    {
      v62 = &v158;
      if ( eType )
      {
        do
        {
          *(_QWORD *)v62->array = -1i64;
          *(_QWORD *)&v62->array[2] = -1i64;
          *(_QWORD *)&v62->array[4] = -1i64;
          v62 = (DObjClientPartBits *)((char *)v62 + 64);
          *(_QWORD *)&v62[-1].array[14] = -1i64;
          *(_QWORD *)&v62[-1].array[16] = -1i64;
          *(_QWORD *)&v62[-1].array[18] = -1i64;
          *(_QWORD *)&v62[-1].array[20] = -1i64;
          *(_QWORD *)&v62[-1].array[22] = -1i64;
          --v26;
        }
        while ( v26 );
        goto LABEL_29;
      }
      do
      {
        *(_QWORD *)v62->array = 0i64;
        *(_QWORD *)&v62->array[2] = 0i64;
        *(_QWORD *)&v62->array[4] = 0i64;
        v62 = (DObjClientPartBits *)((char *)v62 + 64);
        *(_QWORD *)&v62[-1].array[14] = 0i64;
        *(_QWORD *)&v62[-1].array[16] = 0i64;
        *(_QWORD *)&v62[-1].array[18] = 0i64;
        *(_QWORD *)&v62[-1].array[20] = 0i64;
        *(_QWORD *)&v62[-1].array[22] = 0i64;
        --v26;
      }
      while ( v26 );
      if ( v144 <= 0 )
        goto LABEL_29;
      do
      {
        if ( v22 >= 0x1000 )
        {
          LODWORD(v142) = 4096;
          LODWORD(v141) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v141, v142) )
            __debugbreak();
        }
        v63 = (unsigned __int64)v22 >> 5;
        v64 = v22++ & 0x1F;
        v158.array[v63] |= 0x80000000 >> v64;
      }
      while ( (int)v22 < v144 );
    }
    v19 = v144;
    v16 = *(const char **)outOrg.v;
LABEL_28:
    v22 = 0;
    goto LABEL_29;
  }
  XAnimProcDebug_GetAllTargetBonesPartBits(v18, &v158);
LABEL_29:
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm13, dword ptr [rax+6944h]
    vmovss  xmm14, dword ptr [rax+6948h]
    vmovss  xmm15, dword ptr [rax+694Ch]
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v36 = 0;
  if ( v23 > 0 )
  {
    v37 = boneIndices;
    do
      *v37++ = v36++;
    while ( v36 < v23 );
  }
  CG_DObjCalcBones(pose, v18, v19, boneIndices);
  __asm
  {
    vmovss  xmm8, cs:__real@41f00000
    vmovss  xmm7, cs:__real@3d4ccccd
    vmovss  xmm6, cs:__real@3ae56042
  }
  if ( v23 > 0 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+6700h+var_70], xmm9
      vmovss  xmm9, dword ptr [rbp+6600h+outOrg+8]
      vmovaps [rsp+6700h+var_80], xmm10
      vmovss  xmm10, dword ptr [rbp+6600h+outOrg+4]
      vmovaps [rsp+6700h+var_90], xmm11
      vmovss  xmm11, dword ptr [rbp+6600h+outOrg]
      vmovaps [rsp+6700h+var_A0], xmm12
      vmovss  xmm12, cs:__real@80000000
    }
    do
    {
      if ( v22 >= 0x1000 )
      {
        LODWORD(v140) = 4096;
        LODWORD(fromServer) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, v140) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v22 & 0x1F)) & v158.array[(unsigned __int64)v22 >> 5]) != 0 )
      {
        v46 = v22;
        if ( (int)v22 >= v19 )
          v46 = v22 | 0x8000;
        CG_DObjGetWorldBoneMatrix(pose, v18, v46, &outTagMat, &outOrigin);
        _RAX = p_predictedPlayerState;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+30h]
          vsubss  xmm3, xmm0, dword ptr [rsp+6700h+outOrigin]
          vmovss  xmm1, dword ptr [rax+34h]
          vsubss  xmm2, xmm1, dword ptr [rsp+6700h+outOrigin+4]
          vmovss  xmm0, dword ptr [rax+38h]
          vsubss  xmm4, xmm0, dword ptr [rbp+6600h+outOrigin+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcomiss xmm1, cs:__real@41f00000
        }
        if ( v60 )
          __asm { vmovaps xmm6, xmm7 }
        else
          __asm { vmulss  xmm6, xmm1, xmm6 }
        BoneName = DObjGetBoneName(v18, v46);
        v66 = BoneName;
        if ( eType == CG_DEBUG_DRAW_BONES_TAGS && !I_stristr(BoneName, "tag_") || v16 && *v16 && !I_stristr(v66, v16) )
        {
          v19 = v144;
          __asm { vmovss  xmm6, cs:__real@3ae56042 }
        }
        else
        {
          __asm { vmovaps xmm3, xmm6; size }
          CL_AddOrientedDebugStar(&outOrigin, &outTagMat, &colorGreen, *(float *)&_XMM3, 0, 0);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+6700h+outOrigin]
            vmovss  xmm1, dword ptr [rsp+6700h+outOrigin+4]
          }
          v19 = v144;
          __asm
          {
            vsubss  xmm7, xmm0, xmm11
            vmovss  xmm0, dword ptr [rbp+6600h+outOrigin+8]
            vsubss  xmm4, xmm1, xmm10
            vsubss  xmm6, xmm0, xmm9
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm12
            vblendvps xmm0, xmm1, xmm8, xmm0
            vdivss  xmm5, xmm8, xmm0
            vmulss  xmm0, xmm5, xmm4
            vmulss  xmm1, xmm5, xmm7
            vmovss  xmm7, cs:__real@3d4ccccd
            vmulss  xmm2, xmm1, xmm13
            vmulss  xmm3, xmm0, xmm14
            vmulss  xmm0, xmm5, xmm6
            vmovss  xmm6, cs:__real@3ae56042
            vmulss  xmm1, xmm0, xmm15
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, [rsp+6700h+var_66A0]
          }
          if ( !(v60 | v92) )
          {
            __asm { vmovss  [rsp+6700h+var_66A0], xmm2 }
            boneIndex = v46;
          }
        }
      }
      ++v22;
    }
    while ( (int)v22 < v23 );
    __asm
    {
      vmovss  xmm8, cs:__real@41f00000
      vmovaps xmm12, [rsp+6700h+var_A0]
      vmovaps xmm11, [rsp+6700h+var_90]
      vmovaps xmm10, [rsp+6700h+var_80]
      vmovaps xmm9, [rsp+6700h+var_70]
    }
  }
  DObjBuildBoneParentMap(v18, &outParentMap);
  __asm
  {
    vmovaps xmm15, [rsp+6700h+var_D0]
    vmovaps xmm14, [rsp+6700h+var_C0]
  }
  v100 = 0;
  __asm { vmovaps xmm13, [rsp+6700h+var_B0] }
  if ( v23 > 0 )
  {
    do
    {
      v102 = v100;
      if ( v100 >= v19 )
        v102 = v100 | 0x8000;
      if ( (v102 & 0x8000) == 0 )
      {
        if ( (unsigned int)v102 >= 0x1000 )
        {
          LODWORD(v140) = 4096;
          LODWORD(fromServer) = v102;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, v140) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v102 & 0x1F)) & v158.array[(unsigned __int64)(unsigned int)v102 >> 5]) != 0 )
        {
          CG_DObjGetWorldBoneMatrix(pose, v18, v102, &outTagMat, &outOrigin);
          if ( (v102 < 0 || (unsigned int)v102 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v102, "signed", v102) )
            __debugbreak();
          OriginalNonDuplicate = DObjBoneParentMap_GetOriginalNonDuplicate(&outParentMap, (unsigned __int16)v102);
          ParentOrDuplicate = DObjBoneParentMap_GetParentOrDuplicate(&outParentMap, OriginalNonDuplicate);
          if ( ParentOrDuplicate != 255 )
          {
            CG_DObjGetWorldBoneMatrix(pose, v18, ParentOrDuplicate, &v159, &end);
            v105 = &colorWhite;
            if ( (v102 & 0x8000) != 0 )
              v105 = &colorYellowHeat;
            if ( v102 == boneIndex )
              v105 = &colorGreen;
            CL_AddDebugLine(&outOrigin, &end, v105, 0, 0, 0);
            if ( shouldDrawBindPose )
            {
              CG_DObjGetWorldBoneBindMatrix(pose, v18, ParentOrDuplicate, &v160, &v155);
              CG_DObjGetWorldBoneBindMatrix(pose, v18, v102, &v157, &start);
              CL_AddDebugLine(&start, &v155, &colorRed, 0, 0, 0);
            }
          }
          v19 = v144;
        }
      }
      ++v100;
    }
    while ( v100 < v23 );
  }
  v106 = DObjGetBoneName(v18, boneIndex);
  if ( !v106 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5704, ASSERT_TYPE_ASSERT, "(boneName != 0)", (const char *)&queryFormat, "boneName != NULL") )
    __debugbreak();
  CG_DObjGetWorldBoneMatrix(pose, v18, boneIndex, &outTagMat, &outOrigin);
  _RDI = p_predictedPlayerState;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vsubss  xmm3, xmm0, dword ptr [rsp+6700h+outOrigin]
    vmovss  xmm1, dword ptr [rdi+34h]
    vsubss  xmm2, xmm1, dword ptr [rsp+6700h+outOrigin+4]
    vmovss  xmm0, dword ptr [rdi+38h]
    vsubss  xmm4, xmm0, dword ptr [rbp+6600h+outOrigin+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomiss xmm1, xmm8
  }
  if ( v60 )
    __asm { vmovaps xmm6, xmm7 }
  else
    __asm { vmulss  xmm6, xmm1, xmm6 }
  v121 = (char *)v106;
  if ( (boneIndex & 0x8000) != 0 )
  {
    j_snprintf(_Buffer, 0x80ui64, "*%s", v106);
    v121 = _Buffer;
  }
  __asm { vmovaps xmm2, xmm6; scale }
  CL_AddDebugString(&outOrigin, &colorGreen, *(float *)&_XMM2, v121, 0, 1);
  __asm { vmovaps xmm6, [rsp+6700h+var_40] }
  if ( shouldDrawBindPose )
  {
    CG_DObjGetWorldBoneBindMatrix(pose, v18, boneIndex, &v157, &start);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+30h]
      vsubss  xmm3, xmm0, dword ptr [rbp+6600h+start]
      vmovss  xmm1, dword ptr [rdi+34h]
      vsubss  xmm2, xmm1, dword ptr [rbp+6600h+start+4]
      vmovss  xmm0, dword ptr [rdi+38h]
      vsubss  xmm4, xmm0, dword ptr [rbp+6600h+start+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcomiss xmm1, xmm8
    }
    if ( !v60 )
      __asm { vmulss  xmm7, xmm1, cs:__real@3ae56042 }
    __asm { vmovaps xmm2, xmm7; scale }
    CL_AddDebugString(&start, &colorRed, *(float *)&_XMM2, v106, 0, 1);
    CL_AddDebugLine(&outOrigin, &start, &colorYellow, 0, 0, 0);
  }
  __asm
  {
    vmovaps xmm8, [rsp+6700h+var_60]
    vmovaps xmm7, [rsp+6700h+var_50]
  }
  if ( eType == CG_DEBUG_DRAW_BONES_IK )
    XAnimNode_IKAntiSlide_DrawDebug(v18);
}

/*
==============
CG_DrawDebug_DrawBspVersion
==============
*/
void CG_DrawDebug_DrawBspVersion()
{
  GfxFont *FontHandle; 
  const struct tm *v11; 
  const char *v12; 
  bool v13; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v23; 
  const dvar_t *v27; 
  const dvar_t *v31; 
  const dvar_t *v36; 
  const dvar_t *v41; 
  float fmt; 
  float fmta; 
  float y; 
  float ya; 
  float v52; 
  float v53; 
  vec4_t v54; 
  vec4_t color; 
  char Buffer[1024]; 

  if ( comWorld.name && *comWorld.name && (comWorld.changeListInfo.changeListNumber || comWorld.changeListInfo.userName && *comWorld.changeListInfo.userName) )
  {
    _RBX = DVARFLT_cg_drawBSPVersionFontScale;
    __asm
    {
      vmovaps [rsp+4F8h+var_28], xmm6
      vmovaps [rsp+4F8h+var_38], xmm7
      vmovaps [rsp+4F8h+var_48], xmm8
      vmovaps [rsp+4F8h+var_58], xmm9
      vmovaps [rsp+4F8h+var_68], xmm10
    }
    if ( !DVARFLT_cg_drawBSPVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBSPVersionFontScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+28h]
      vmovups xmm0, cs:__xmm@3f3333333f8000003f3333333ecccccd
      vmovups xmm1, cs:__xmm@3f333333000000000000000000000000
      vmovups xmmword ptr [rsp+4F8h+var_498], xmm0
      vmovups xmmword ptr [rsp+4F8h+var_488], xmm1
    }
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4306, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm10; scale }
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, *(float *)&_XMM2);
    v11 = Com_LocalTimeFromUTC(comWorld.changeListInfo.time);
    strftime(Buffer, 0x400ui64, "%x %H:%M", v11);
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    if ( CL_TransientsWorldMP_IsActive() )
    {
      v12 = (char *)&queryFormat.fmt + 3;
      v13 = comWorld.proxyLODQuality < 0;
      if ( v13 | CL_TransientsWorldMP_AnyMissingModels() )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f19999a
          vmovss  xmm1, cs:__real@3f666666
          vmovss  dword ptr [rsp+4F8h+var_498], xmm0
          vmovss  dword ptr [rsp+4F8h+var_498+4], xmm1
        }
        v12 = "(MISSING PROXY MODELS - RECOMPILE D3DBSP)     ";
      }
      v16 = "Unknown";
      if ( comWorld.proxyLODQuality == -1 )
      {
        v17 = "Recompile";
      }
      else if ( comWorld.proxyLODQuality )
      {
        v17 = "Unknown";
        if ( comWorld.proxyLODQuality == 1 )
          v17 = "Fast";
      }
      else
      {
        v17 = "Default";
      }
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        v18 = "OK";
        if ( (rgp.world->draw.compressedSunShadowParams.flags & 2) != 0 )
          v18 = "STR";
      }
      else
      {
        v18 = "ERR";
      }
      if ( comWorld.bakeQuality )
      {
        switch ( comWorld.bakeQuality )
        {
          case 1u:
            v16 = "Fast";
            break;
          case 2u:
            v16 = "Full";
            break;
          case 3u:
            v16 = "Extra";
            break;
        }
      }
      else
      {
        v16 = "Debug";
      }
      v19 = j_va("%s[BSP: %s CL %i %s %s, Bake Quality: %s, CSM: %s, proxyLOD Quality: %s]", v12, cls.m_activeGameMapName, comWorld.changeListInfo.changeListNumber, comWorld.changeListInfo.userName, Buffer, v16, v18, v17);
    }
    else
    {
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        v20 = "OK";
        if ( (rgp.world->draw.compressedSunShadowParams.flags & 2) != 0 )
          v20 = "STR";
      }
      else
      {
        v20 = "ERR";
      }
      if ( comWorld.bakeQuality )
      {
        switch ( comWorld.bakeQuality )
        {
          case 1u:
            v21 = "Fast";
            break;
          case 2u:
            v21 = "Full";
            break;
          case 3u:
            v21 = "Extra";
            break;
          default:
            v21 = "Unknown";
            break;
        }
      }
      else
      {
        v21 = "Debug";
      }
      v19 = j_va("[BSP: %s CL %i %s %s, Bake Quality: %s, CSM: %s]", cls.m_activeGameMapName, comWorld.changeListInfo.changeListNumber, comWorld.changeListInfo.userName, Buffer, v21, v20);
    }
    __asm { vmovaps xmm3, xmm10; scale }
    v23 = v19;
    UI_TextWidth(v19, 0, FontHandle, *(float *)&_XMM3);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vmovaps xmm1, xmm10; scale
      vcvtsi2ss xmm9, xmm9, eax
    }
    UI_TextHeight(FontHandle, *(float *)&_XMM1);
    v27 = DVARFLT_cg_drawBspVersionY;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
    }
    if ( !DVARFLT_cg_drawBspVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    __asm { vaddss  xmm0, xmm7, dword ptr [rbx+28h] }
    v31 = DVARFLT_cg_drawBspVersionX;
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm8, xmm6, xmm0
    }
    if ( !DVARFLT_cg_drawBspVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    __asm
    {
      vaddss  xmm0, xmm9, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+4F8h+var_4B8], xmm10
      vsubss  xmm1, xmm6, xmm0
      vmovss  [rsp+4F8h+y], xmm8
      vmovss  dword ptr [rsp+4F8h+fmt], xmm1
    }
    UI_DrawText(&scrPlaceFullUnsafe, v23, 0x7FFFFFFF, FontHandle, fmt, y, 3, 3, v52, &color, 0);
    v36 = DVARFLT_cg_drawBspVersionY;
    __asm { vmovaps xmm8, [rsp+4F8h+var_48] }
    if ( !DVARFLT_cg_drawBspVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm7, xmm6
      vsubss  xmm7, xmm0, dword ptr [rbx+28h]
    }
    v41 = DVARFLT_cg_drawBspVersionX;
    if ( !DVARFLT_cg_drawBspVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    __asm
    {
      vmovss  dword ptr [rsp+4F8h+var_4B8], xmm10
      vxorps  xmm0, xmm9, xmm6
      vsubss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  [rsp+4F8h+y], xmm7
      vmovss  dword ptr [rsp+4F8h+fmt], xmm1
    }
    UI_DrawText(&scrPlaceFullUnsafe, v23, 0x7FFFFFFF, FontHandle, fmta, ya, 3, 3, v53, &v54, 0);
    __asm
    {
      vmovaps xmm10, [rsp+4F8h+var_68]
      vmovaps xmm9, [rsp+4F8h+var_58]
      vmovaps xmm7, [rsp+4F8h+var_38]
      vmovaps xmm6, [rsp+4F8h+var_28]
    }
  }
}

/*
==============
CG_DrawDebug_DrawBulletFireLog
==============
*/
void CG_DrawDebug_DrawBulletFireLog(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int v8; 
  const DebugBulletFireInfoEntry *Entry; 
  __int64 v12; 
  int v13; 
  const char *v16; 
  bool v25; 
  bool v27; 
  bool v28; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v59; 
  GfxFont *FontHandle; 
  char *fmta; 
  char *fmtb; 
  float fmtc; 
  double ya; 
  double yb; 
  float yc; 
  double horzAligna; 
  double horzAlignb; 
  double vertAligna; 
  double vertAlignb; 
  double v79; 
  double v80; 
  float v81; 
  vec4_t *color; 
  double style; 
  double v84; 
  double v85; 
  double v86; 
  int NumEntries; 
  cg_t *v88; 
  char dest[65536]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v88 = LocalClientGlobals;
    CG_DebugBulletFireLog_Compact(LocalClientGlobals->time);
    Com_sprintf(dest, 0x10000ui64, "^3BULLET FIRE LOG\n");
    v8 = 0;
    NumEntries = CG_DebugBulletFireLog_GetNumEntries();
    if ( NumEntries > 0 )
    {
      __asm
      {
        vmovaps [rsp+10108h+var_48], xmm7
        vmovaps [rsp+10108h+var_58], xmm8
        vmovaps [rsp+10108h+var_78], xmm10
        vmovss  xmm10, cs:__real@3a83126f
        vmovaps [rsp+10108h+var_38], xmm6
        vmovaps [rsp+10108h+var_68], xmm9
      }
      do
      {
        Entry = CG_DebugBulletFireLog_GetEntry(v8);
        _RSI = (unsigned int *)Entry;
        if ( (!Entry || !Entry->isUsed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6069, ASSERT_TYPE_ASSERT, "(entry && entry->isUsed)", (const char *)&queryFormat, "entry && entry->isUsed") )
          __debugbreak();
        v12 = -1i64;
        do
          ++v12;
        while ( dest[v12] );
        v13 = 0x10000 - v12;
        if ( 0x10000 - (int)v12 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6073, ASSERT_TYPE_ASSERT, "(remainingBuffer >= 2)", (const char *)&queryFormat, "remainingBuffer >= 2") )
          __debugbreak();
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)(_RSI + 17));
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = vectopitch((const vec3_t *)(_RSI + 17));
        __asm { vmovaps xmm8, xmm0 }
        if ( *((_BYTE *)_RSI + 157) )
        {
          __asm { vmovaps xmm2, xmm10; epsilon }
          v25 = VecNCompareCustomEpsilon((const float *)_RSI + 14, (const float *)_RSI + 33, *(float *)&_XMM2, 3);
          __asm { vmovaps xmm2, xmm10; epsilon }
          v27 = v25;
          v28 = VecNCompareCustomEpsilon((const float *)_RSI + 17, (const float *)_RSI + 36, *(float *)&_XMM2, 3);
          if ( v27 && v28 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rsi+40h]
              vmovss  xmm3, dword ptr [rsi+3Ch]
              vmovss  xmm4, dword ptr [rsi+38h]
              vcvtss2sd xmm0, xmm7, xmm7
              vmovsd  [rsp+10108h+var_100C8], xmm0
              vcvtss2sd xmm1, xmm8, xmm8
              vmovsd  qword ptr [rsp+10108h+vertAlign], xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  qword ptr [rsp+10108h+horzAlign], xmm2
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm4, xmm4, xmm4
              vmovsd  qword ptr [rsp+10108h+y], xmm3
              vmovsd  [rsp+10108h+fmt], xmm4
            }
            Com_sprintf(&dest[(int)v12], v13, "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^2Server fired a matching bullet.\n", *_RSI, *(double *)&fmta, ya, horzAligna, vertAligna, v79);
          }
          else
          {
            *(double *)&_XMM0 = vectoyaw((const vec2_t *)_RSI + 18);
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = vectopitch((const vec3_t *)_RSI + 12);
            __asm
            {
              vmovss  xmm3, dword ptr [rsi+8Ch]
              vmovss  xmm4, dword ptr [rsi+88h]
              vmovss  xmm9, dword ptr [rsi+38h]
              vcvtss2sd xmm2, xmm0, xmm0
              vmovss  xmm0, dword ptr [rsi+84h]
              vcvtss2sd xmm5, xmm7, xmm7
              vmovss  xmm7, dword ptr [rsi+40h]
              vcvtss2sd xmm1, xmm6, xmm6
              vmovsd  [rsp+10108h+var_100A0], xmm1
              vmovsd  [rsp+10108h+var_100A8], xmm2
              vcvtss2sd xmm6, xmm8, xmm8
              vmovss  xmm8, dword ptr [rsi+3Ch]
              vcvtss2sd xmm3, xmm3, xmm3
              vmovsd  [rsp+10108h+var_100B0], xmm3
              vcvtss2sd xmm4, xmm4, xmm4
              vmovsd  qword ptr [rsp+10108h+style], xmm4
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+10108h+color], xmm0
              vmovsd  [rsp+10108h+var_100C8], xmm5
              vmovsd  qword ptr [rsp+10108h+vertAlign], xmm6
              vcvtss2sd xmm7, xmm7, xmm7
              vmovsd  qword ptr [rsp+10108h+horzAlign], xmm7
              vcvtss2sd xmm8, xmm8, xmm8
              vcvtss2sd xmm9, xmm9, xmm9
              vmovsd  qword ptr [rsp+10108h+y], xmm8
              vmovsd  [rsp+10108h+fmt], xmm9
            }
            Com_sprintf(&dest[(int)v12], v13, "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^1Server fired mismatching bullet. ^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f\n", *_RSI, *(double *)&fmtb, yb, horzAlignb, vertAlignb, v80, *(double *)&color, style, v84, v85, v86);
          }
          LocalClientGlobals = v88;
        }
        else
        {
          v16 = "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^1Waiting for server to fire for %d ms.\n";
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+3Ch]
            vmovss  xmm2, dword ptr [rsi+38h]
          }
          if ( (int)(LocalClientGlobals->time - *_RSI) <= SERVER_WAIT_DURATION_MAX )
            v16 = "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^3Waiting for server to fire for %d ms.\n";
          __asm
          {
            vcvtss2sd xmm4, xmm8, xmm0
            vmovss  xmm0, dword ptr [rsi+40h]
            vcvtss2sd xmm3, xmm7, xmm7
            vmovsd  [rsp+10108h+var_100C8], xmm3
            vmovsd  qword ptr [rsp+10108h+vertAlign], xmm4
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  qword ptr [rsp+10108h+horzAlign], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  qword ptr [rsp+10108h+y], xmm1
            vmovsd  [rsp+10108h+fmt], xmm2
          }
          Com_sprintf(&dest[(int)v12], v13, v16);
        }
        ++v8;
      }
      while ( v8 < NumEntries );
      __asm
      {
        vmovaps xmm10, [rsp+10108h+var_78]
        vmovaps xmm9, [rsp+10108h+var_68]
        vmovaps xmm8, [rsp+10108h+var_58]
        vmovaps xmm7, [rsp+10108h+var_48]
        vmovaps xmm6, [rsp+10108h+var_38]
      }
    }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    __asm { vmovss  xmm2, cs:MY_SCALE_1; scale }
    v59 = ActivePlacement;
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:MY_SCALE_1
      vmovss  xmm1, cs:MY_X_1
      vmovss  dword ptr [rsp+10108h+var_100C8], xmm0
      vmovss  xmm0, cs:MY_Y
      vmovss  [rsp+10108h+y], xmm0
      vmovss  dword ptr [rsp+10108h+fmt], xmm1
    }
    UI_DrawText(v59, dest, 0x10000, FontHandle, fmtc, yc, 1, 1, v81, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawButtonBits
==============
*/
void CG_DrawDebug_DrawButtonBits(LocalClientNum_t localClientNum)
{
  __int64 v7; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  signed __int64 buttons; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  __int64 v46; 
  int v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  __int64 v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  __int64 v76; 
  __int64 v77; 
  unsigned int v78; 
  int v79; 
  __int64 v80; 
  int v81; 
  __int64 v82; 
  int v83; 
  __int64 v84; 
  int v85; 
  __int64 v86; 
  int v87; 
  __int64 v88; 
  int v89; 
  __int64 v90; 
  int v91; 
  __int64 v92; 
  int v93; 
  __int64 v94; 
  int v95; 
  __int64 v96; 
  int v97; 
  __int64 v98; 
  int v99; 
  __int64 v100; 
  int v101; 
  __int64 v102; 
  int v103; 
  __int64 v104; 
  int v105; 
  __int64 v106; 
  int v107; 
  __int64 v108; 
  int v109; 
  unsigned int v110; 
  int v111; 
  __int64 v112; 
  int v113; 
  __int64 v114; 
  int v115; 
  __int64 v116; 
  int v117; 
  __int64 v118; 
  int v119; 
  __int64 v120; 
  int v121; 
  __int64 v122; 
  int v123; 
  int v124; 
  __int64 v125; 
  int v126; 
  int v127; 
  int v128; 
  __int64 v129; 
  int v130; 
  int v131; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  usercmd_s ucmd; 
  char dest[2048]; 
  char v146; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
  font = UI_GetFontHandle(scrPlace, 1, *(float *)&_XMM2);
  v7 = Com_sprintf(dest, 0x800ui64, "ButtonBits\n");
  memset_0(&ucmd, 0, sizeof(ucmd));
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
  buttons = ucmd.buttons;
  v11 = 55;
  v12 = 55i64;
  if ( (ucmd.buttons & 1) != 0 )
    v12 = 50i64;
  v13 = Com_sprintf(&dest[v7], 2048 - (int)v7, "^%cBUTTON_ATTACK\n", v12) + v7;
  v14 = 55i64;
  if ( (buttons & 2) != 0 )
    v14 = 50i64;
  v15 = Com_sprintf(&dest[v13], 2048 - v13, "^%cBUTTON_SPRINT\n", v14) + v13;
  v16 = 55;
  if ( (buttons & 4) != 0 )
    v16 = 50;
  v17 = Com_sprintf(&dest[v15], 2048 - v15, "^%cBUTTON_MELEE\n", v16) + v15;
  v18 = 55i64;
  if ( (buttons & 8) != 0 )
    v18 = 50i64;
  v19 = Com_sprintf(&dest[v17], 2048 - v17, "^%cBUTTON_ACTIVATE\n", v18) + v17;
  v20 = 55i64;
  if ( (buttons & 0x10) != 0 )
    v20 = 50i64;
  v21 = Com_sprintf(&dest[v19], 2048 - v19, "^%cBUTTON_RELOAD\n", v20) + v19;
  v22 = 55i64;
  if ( (buttons & 0x20) != 0 )
    v22 = 50i64;
  v23 = Com_sprintf(&dest[v21], 2048 - v21, "^%cBUTTON_USE_RELOAD\n", v22) + v21;
  v24 = 55i64;
  if ( (buttons & 0x40) != 0 )
    v24 = 50i64;
  v25 = Com_sprintf(&dest[v23], 2048 - v23, "^%cBUTTON_PRONE\n", v24) + v23;
  v26 = 55i64;
  if ( (buttons & 0x80u) != 0i64 )
    v26 = 50i64;
  v27 = Com_sprintf(&dest[v25], 2048 - v25, "^%cBUTTON_CROUCH\n", v26) + v25;
  v28 = 55;
  if ( (buttons & 0x100) != 0 )
    v28 = 50;
  v29 = Com_sprintf(&dest[v27], 2048 - v27, "^%cBUTTON_JUMP\n", v28) + v27;
  v30 = 55i64;
  if ( (buttons & 0x200) != 0 )
    v30 = 50i64;
  v31 = Com_sprintf(&dest[v29], 2048 - v29, "^%cBUTTON_ADS\n", v30) + v29;
  v32 = 55i64;
  if ( (buttons & 0x400) != 0 )
    v32 = 50i64;
  v33 = Com_sprintf(&dest[v31], 2048 - v31, "^%cBUTTON_TEMPSTANCE\n", v32) + v31;
  v34 = 55i64;
  if ( (buttons & 0x800) != 0 )
    v34 = 50i64;
  v35 = Com_sprintf(&dest[v33], 2048 - v33, "^%cBUTTON_BREATH\n", v34) + v33;
  v36 = 55i64;
  if ( (buttons & 0x1000) != 0 )
    v36 = 50i64;
  v37 = Com_sprintf(&dest[v35], 2048 - v35, "^%cBUTTON_FRAG\n", v36) + v35;
  v38 = 55i64;
  if ( (buttons & 0x2000) != 0 )
    v38 = 50i64;
  v39 = Com_sprintf(&dest[v37], 2048 - v37, "^%cBUTTON_OFFHANDSECONDARY\n", v38) + v37;
  v40 = 55i64;
  if ( (buttons & 0x4000) != 0 )
    v40 = 50i64;
  v41 = Com_sprintf(&dest[v39], 2048 - v39, "^%cBUTTON_CONFIRM_LOCATION\n", v40) + v39;
  v42 = 55i64;
  if ( (buttons & 0x8000) != 0 )
    v42 = 50i64;
  v43 = Com_sprintf(&dest[v41], 2048 - v41, "^%cBUTTON_CANCEL_LOCATION\n", v42) + v41;
  v44 = 55i64;
  if ( (buttons & 0x10000) != 0 )
    v44 = 50i64;
  v45 = Com_sprintf(&dest[v43], 2048 - v43, "^%cBUTTON_NIGHTVISION\n", v44) + v43;
  v46 = 55i64;
  if ( (buttons & 0x20000) != 0 )
    v46 = 50i64;
  v47 = Com_sprintf(&dest[v45], 2048 - v45, "^%cBUTTON_THROW\n", v46) + v45;
  v48 = 55i64;
  if ( (buttons & 0x40000) != 0 )
    v48 = 50i64;
  v49 = Com_sprintf(&dest[v47], 2048 - v47, "^%cBUTTON_REMOTECONTROL\n", v48) + v47;
  v50 = 55i64;
  if ( (buttons & 0x80000) != 0 )
    v50 = 50i64;
  v51 = Com_sprintf(&dest[v49], 2048 - v49, "^%cBUTTON_OFFHAND_CANCEL\n", v50) + v49;
  v52 = 55i64;
  if ( (buttons & 0x100000) != 0 )
    v52 = 50i64;
  v53 = Com_sprintf(&dest[v51], 2048 - v51, "^%cBUTTON_SKYDIVE_CAM_TOGGLE\n", v52) + v51;
  v54 = 55i64;
  if ( (buttons & 0x200000) != 0 )
    v54 = 50i64;
  v55 = Com_sprintf(&dest[v53], 2048 - v53, "^%cBUTTON_ADS_TOGGLE\n", v54) + v53;
  v56 = 55i64;
  if ( (buttons & 0x400000) != 0 )
    v56 = 50i64;
  v57 = Com_sprintf(&dest[v55], 2048 - v55, "^%cBUTTON_SLIDE\n", v56) + v55;
  v58 = 55i64;
  if ( (buttons & 0x800000) != 0 )
    v58 = 50i64;
  v59 = Com_sprintf(&dest[v57], 2048 - v57, "^%cBUTTON_TALK\n", v58) + v57;
  v60 = 55i64;
  if ( (buttons & 0x1000000) != 0 )
    v60 = 50i64;
  v61 = Com_sprintf(&dest[v59], 2048 - v59, "^%cBUTTON_THROTTLE\n", v60) + v59;
  v62 = 55i64;
  if ( (buttons & 0x2000000) != 0 )
    v62 = 50i64;
  v63 = Com_sprintf(&dest[v61], 2048 - v61, "^%cBUTTON_ZOOM\n", v62) + v61;
  v64 = 55i64;
  if ( (buttons & 0x4000000) != 0 )
    v64 = 50i64;
  v65 = Com_sprintf(&dest[v63], 2048 - v63, "^%cBUTTON_CENTER_VIEW\n", v64) + v63;
  v66 = 55i64;
  if ( (buttons & 0x8000000) != 0 )
    v66 = 50i64;
  v67 = Com_sprintf(&dest[v65], 2048 - v65, "^%cBUTTON_VEH_SWITCH_SEAT\n", v66) + v65;
  v68 = 55i64;
  if ( (buttons & 0x10000000) != 0 )
    v68 = 50i64;
  v69 = Com_sprintf(&dest[v67], 2048 - v67, "^%cBUTTON_CURSORHINT_USED\n", v68) + v67;
  v70 = 55i64;
  if ( (buttons & 0x40000000) != 0 )
    v70 = 50i64;
  v71 = Com_sprintf(&dest[v69], 2048 - v69, "^%cBUTTON_CURSORHINT\n", v70) + v69;
  v72 = 55i64;
  if ( (buttons & 0x80000000) != 0 )
    v72 = 50i64;
  Com_sprintf(&dest[v71], 2048 - v71, "^%cBUTTON_TAUNT\n", v72);
  __asm
  {
    vmovss  xmm7, cs:__real@3e4ccccd
    vmovss  xmm6, cs:__real@41c80000
    vmovss  dword ptr [rsp+9D0h+var_990], xmm7
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+9D0h+var_9A8], xmm6
    vmovss  [rsp+9D0h+var_9B0], xmm0
  }
  UI_DrawText(scrPlace, dest, 2048, font, v136, v138, 1, 1, v140, &colorWhite, 3);
  v76 = 55i64;
  if ( (buttons & 0x100000000i64) != 0 )
    v76 = 50i64;
  v77 = Com_sprintf(dest, 0x800ui64, "^%cBUTTON_SPECIAL\n", v76);
  v78 = 55;
  if ( (buttons & 0x200000000i64) != 0 )
    v78 = 50;
  v79 = Com_sprintf(&dest[v77], 2048 - (int)v77, "^%cBUTTON_HYBRID_TOGGLE\n", v78) + v77;
  v80 = 55i64;
  if ( (buttons & 0x400000000i64) != 0 )
    v80 = 50i64;
  v81 = Com_sprintf(&dest[v79], 2048 - v79, "^%cBUTTON_IS_JOGGING_ANIMATION\n", v80) + v79;
  v82 = 55i64;
  if ( (buttons & 0x800000000i64) != 0 )
    v82 = 50i64;
  v83 = Com_sprintf(&dest[v81], 2048 - v81, "^%cBUTTON_PLAYER_NEAR_COLLISION\n", v82) + v81;
  v84 = 55i64;
  if ( (buttons & 0x1000000000i64) != 0 )
    v84 = 50i64;
  v85 = Com_sprintf(&dest[v83], 2048 - v83, "^%cBUTTON_STANCE\n", v84) + v83;
  v86 = 55i64;
  if ( (buttons & 0x2000000000i64) != 0 )
    v86 = 50i64;
  v87 = Com_sprintf(&dest[v85], 2048 - v85, "^%cBUTTON_SPRINT_RELOAD_CANCEL\n", v86) + v85;
  v88 = 55i64;
  if ( (buttons & 0x4000000000i64) != 0 )
    v88 = 50i64;
  v89 = Com_sprintf(&dest[v87], 2048 - v87, "^%cBUTTON_LADDER_SLIDE_DOWN\n", v88) + v87;
  v90 = 55i64;
  if ( (buttons & 0x8000000000i64) != 0 )
    v90 = 50i64;
  v91 = Com_sprintf(&dest[v89], 2048 - v89, "^%cBUTTON_CONTROL_LOCK_MOVE\n", v90) + v89;
  v92 = 55i64;
  if ( (buttons & 0x10000000000i64) != 0 )
    v92 = 50i64;
  v93 = Com_sprintf(&dest[v91], 2048 - v91, "^%cBUTTON_FLY_UP\n", v92) + v91;
  v94 = 55i64;
  if ( (buttons & 0x20000000000i64) != 0 )
    v94 = 50i64;
  v95 = Com_sprintf(&dest[v93], 2048 - v93, "^%cBUTTON_FLY_DOWN\n", v94) + v93;
  v96 = 55i64;
  if ( (buttons & 0x40000000000i64) != 0 )
    v96 = 50i64;
  v97 = Com_sprintf(&dest[v95], 2048 - v95, "^%cBUTTON_WEAP_CYCLE\n", v96) + v95;
  v98 = 55i64;
  if ( (buttons & 0x80000000000i64) != 0 )
    v98 = 50i64;
  v99 = Com_sprintf(&dest[v97], 2048 - v97, "^%cBUTTON_MOUNT\n", v98) + v97;
  v100 = 55i64;
  if ( (buttons & 0x100000000000i64) != 0 )
    v100 = 50i64;
  v101 = Com_sprintf(&dest[v99], 2048 - v99, "^%cBUTTON_INSPECT\n", v100) + v99;
  v102 = 55i64;
  if ( (buttons & 0x400000000000i64) != 0 )
    v102 = 50i64;
  v103 = Com_sprintf(&dest[v101], 2048 - v101, "^%cBUTTON_SPRINT_HOLD\n", v102) + v101;
  v104 = 55i64;
  if ( (buttons & 0x800000000000i64) != 0 )
    v104 = 50i64;
  v105 = Com_sprintf(&dest[v103], 2048 - v103, "^%cBUTTON_SUPER_SPRINT\n", v104) + v103;
  v106 = 55i64;
  if ( (buttons & 0x1000000000000i64) != 0 )
    v106 = 50i64;
  v107 = Com_sprintf(&dest[v105], 2048 - v105, "^%cBUTTON_FOLLOW_OFF\n", v106) + v105;
  v108 = 55i64;
  if ( (buttons & 0x2000000000000i64) != 0 )
    v108 = 50i64;
  v109 = Com_sprintf(&dest[v107], 2048 - v107, "^%cBUTTON_FOLLOW_NEXT\n", v108) + v107;
  v110 = 55;
  if ( (buttons & 0x4000000000000i64) != 0 )
    v110 = 50;
  v111 = Com_sprintf(&dest[v109], 2048 - v109, "^%cBUTTON_FOLLOW_PREV\n", v110) + v109;
  v112 = 55i64;
  if ( (buttons & 0x8000000000000i64) != 0 )
    v112 = 50i64;
  v113 = Com_sprintf(&dest[v111], 2048 - v111, "^%cBUTTON_FROM_GAMEPAD\n", v112) + v111;
  v114 = 55i64;
  if ( (buttons & 0x10000000000000i64) != 0 )
    v114 = 50i64;
  v115 = Com_sprintf(&dest[v113], 2048 - v113, "^%cBUTTON_HOLD_GRENADE\n", v114) + v113;
  v116 = 55i64;
  if ( (buttons & 0x20000000000000i64) != 0 )
    v116 = 50i64;
  v117 = Com_sprintf(&dest[v115], 2048 - v115, "^%cBUTTON_VEH_CAM_RECENTER\n", v116) + v115;
  v118 = 55i64;
  if ( (buttons & 0x40000000000000i64) != 0 )
    v118 = 50i64;
  v119 = Com_sprintf(&dest[v117], 2048 - v117, "^%cBUTTON_SLIDE_AND_STAND\n", v118) + v117;
  v120 = 55i64;
  if ( (buttons & 0x80000000000000i64) != 0 )
    v120 = 50i64;
  v121 = Com_sprintf(&dest[v119], 2048 - v119, "^%cBUTTON_MOUNT_STICKY_CFG\n", v120) + v119;
  v122 = 55i64;
  if ( (buttons & 0x3000) != 0 )
    v122 = 50i64;
  v123 = Com_sprintf(&dest[v121], 2048 - v121, "^%cBUTTON_ANY_OFFHAND\n", v122) + v121;
  v124 = Com_sprintf(&dest[v123], 2048 - v123, "^%cBUTTON_ANY_SWIM_UP\n", v28) + v123;
  v125 = 55i64;
  if ( (buttons & 0x480) != 0 )
    v125 = 50i64;
  v126 = Com_sprintf(&dest[v124], 2048 - v124, "^%cBUTTON_ANY_SWIM_DOWN\n", v125) + v124;
  v127 = Com_sprintf(&dest[v126], 2048 - v126, "^%cBUTTON_HYBRID_TOGGLE\n", v78) + v126;
  v128 = Com_sprintf(&dest[v127], 2048 - v127, "^%cBUTTON_THERMAL_TOGGLE\n", v16) + v127;
  v129 = 55i64;
  if ( (buttons & 0x100000000000000i64) != 0 )
    v129 = 50i64;
  v130 = Com_sprintf(&dest[v128], 2048 - v128, "^%cBUTTON_STAND_TO_PRONE\n", v129) + v128;
  if ( buttons < 0 )
    v11 = 50;
  v131 = Com_sprintf(&dest[v130], 2048 - v130, "^%cBUTTON_CONFIRM_LOCATION_ALT\n", v11);
  Com_sprintf(&dest[v131 + v130], 2048 - (v131 + v130), "^%cBUTTON_AUTO_SPRINT\n", v110);
  __asm
  {
    vmovss  xmm0, cs:__real@43480000
    vmovss  dword ptr [rsp+9D0h+var_990], xmm7
    vmovss  [rsp+9D0h+var_9A8], xmm6
    vmovss  [rsp+9D0h+var_9B0], xmm0
  }
  UI_DrawText(scrPlace, dest, 2048, font, v137, v139, 1, 1, v141, &colorWhite, 3);
  _R11 = &v146;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_DrawDebug_DrawCenterLines
==============
*/
void CG_DrawDebug_DrawCenterLines(LocalClientNum_t localClientNum)
{
  const dvar_t *v10; 
  const dvar_t *v14; 
  int ControllerFromClient; 
  const dvar_t *v39; 
  int i; 
  const dvar_t *v46; 
  const dvar_t *v63; 
  int j; 
  const dvar_t *v67; 
  int k; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float lineWidth; 
  float lineWidtha; 
  float lineWidthb; 
  float lineWidthc; 
  float lineWidthd; 
  float c; 
  float s; 
  vec4_t color; 

  v10 = DVARINT_cg_drawCenterLines;
  if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer )
  {
    __asm
    {
      vmovaps [rsp+128h+var_38], xmm6
      vmovaps [rsp+128h+var_48], xmm7
      vmovaps [rsp+128h+var_58], xmm8
      vmovaps [rsp+128h+var_68], xmm9
      vmovaps [rsp+128h+var_78], xmm10
      vmovaps [rsp+128h+var_88], xmm11
      vmovaps [rsp+128h+var_A8], xmm13
    }
    _RDI = ScrPlace_GetActivePlacement(localClientNum);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10719, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
      __debugbreak();
    __asm { vmovss  xmm7, cs:__real@3f000000 }
    v14 = DVARINT_cg_drawCenterLines;
    __asm
    {
      vmulss  xmm8, xmm7, dword ptr [rdi+24h]
      vmulss  xmm6, xmm7, dword ptr [rdi+20h]
    }
    if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    _EAX = v14->current.integer;
    _ECX = 2;
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vaddss  xmm3, xmm6, xmm11
      vblendvps xmm6, xmm6, xmm3, xmm2
      vsubss  xmm3, xmm8, xmm11
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm2, xmm8, xmm3, xmm2; p1y
      vmovss  xmm3, dword ptr [rdi+20h]; p2x
      vmovss  [rsp+128h+lineWidth], xmm11
      vxorps  xmm1, xmm1, xmm1; p1x
      vmovss  dword ptr [rsp+128h+fmt], xmm2
      vmovss  [rsp+128h+c], xmm2
    }
    CG_Draw2DLine(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, lineWidth, 5, 5, &colorGreen, cgMedia.whiteMaterial);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+24h]
      vmovss  [rsp+128h+lineWidth], xmm11
      vmovaps xmm3, xmm6; p2x
      vxorps  xmm2, xmm2, xmm2; p1y
      vmovaps xmm1, xmm6; p1x
      vmovss  dword ptr [rsp+128h+fmt], xmm0
      vmovss  [rsp+128h+c], xmm6
    }
    CG_Draw2DLine(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, lineWidtha, 5, 5, &colorGreen, cgMedia.whiteMaterial);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    *(double *)&_XMM0 = GamerProfile_GetMouseMonitorDistanceCoef(ControllerFromClient);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+20h]
      vdivss  xmm1, xmm2, dword ptr [rdi+24h]
    }
    v39 = DVARINT_cg_drawCenterLines;
    __asm
    {
      vmulss  xmm10, xmm7, dword ptr [rdi+24h]
      vdivss  xmm1, xmm7, xmm1
      vmulss  xmm13, xmm1, xmm0
      vmulss  xmm9, xmm7, xmm2
    }
    if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
      __debugbreak();
    __asm { vmovaps [rsp+128h+var_98], xmm12 }
    Dvar_CheckFrontendServerThread(v39);
    if ( v39->current.integer == 3 )
    {
      __asm { vmovss  xmm12, cs:__real@3ccccccd }
      for ( i = 1; i <= 21; ++i )
      {
        v46 = DVARBOOL_cl_mouseAdsUseMonitorDistance;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
        }
        _RAX = &colorMdGreen;
        if ( (i & 1) != 0 )
          _RAX = &colorGreen;
        __asm
        {
          vmulss  xmm6, xmm0, xmm12
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsp+128h+var_D0], xmm0
        }
        if ( !DVARBOOL_cl_mouseAdsUseMonitorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_mouseAdsUseMonitorDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v46);
        if ( v46->current.enabled && i == 21 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
            vmovups xmmword ptr [rsp+128h+var_D0], xmm0
            vmovaps xmm6, xmm13
          }
        }
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rdi+20h]
          vmulss  xmm2, xmm6, dword ptr [rdi+24h]
          vaddss  xmm6, xmm2, xmm10
          vsubss  xmm1, xmm9, xmm0; p1x
          vsubss  xmm7, xmm10, xmm2
          vmovss  [rsp+128h+lineWidth], xmm11
          vmovaps xmm3, xmm1; p2x
          vmovaps xmm2, xmm7; p1y
          vmovss  dword ptr [rsp+128h+fmt], xmm6
          vaddss  xmm8, xmm0, xmm9
        }
        CG_Draw2DLine(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, lineWidthb, 5, 5, &color, cgMedia.whiteMaterial);
        __asm
        {
          vmovss  [rsp+128h+lineWidth], xmm11
          vmovaps xmm3, xmm8; p2x
          vmovaps xmm2, xmm7; p1y
          vmovaps xmm1, xmm8; p1x
          vmovss  dword ptr [rsp+128h+fmt], xmm6
        }
        CG_Draw2DLine(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, lineWidthc, 5, 5, &color, cgMedia.whiteMaterial);
      }
    }
    else
    {
      v63 = DVARINT_cg_drawCenterLines;
      if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.integer == 4 )
      {
        __asm
        {
          vmovss  xmm12, cs:__real@3dc90fdb
          vmovaps [rsp+128h+var_B8], xmm14
          vmovss  xmm14, cs:__real@3ccccccd
        }
        for ( j = 1; j <= 25; ++j )
        {
          v67 = DVARBOOL_cl_mouseAdsUseMonitorDistance;
          __asm { vmulss  xmm2, xmm14, dword ptr [rdi+20h] }
          _RAX = &colorMdGreen;
          __asm { vxorps  xmm1, xmm1, xmm1 }
          if ( (j & 1) != 0 )
            _RAX = &colorGreen;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, ebp
            vmulss  xmm6, xmm2, xmm1
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+128h+var_D0], xmm0
          }
          if ( !DVARBOOL_cl_mouseAdsUseMonitorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_mouseAdsUseMonitorDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v67);
          if ( v67->current.enabled && j == 25 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
              vmulss  xmm6, xmm13, dword ptr [rdi+20h]
              vmovups xmmword ptr [rsp+128h+var_D0], xmm0
            }
          }
          __asm
          {
            vxorps  xmm7, xmm7, xmm7
            vmovaps xmm8, xmm6
          }
          for ( k = 1; k <= 64; ++k )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ebx
              vmulss  xmm0, xmm0, xmm12; radians
            }
            FastSinCos(*(const float *)&_XMM0, &s, &c);
            __asm
            {
              vmulss  xmm2, xmm6, [rsp+128h+s]
              vmulss  xmm1, xmm6, [rsp+128h+c]
              vaddss  xmm0, xmm1, xmm10
              vmovss  [rsp+128h+s], xmm2
              vmovss  [rsp+128h+c], xmm1
              vaddss  xmm3, xmm2, xmm9; p2x
              vmovss  [rsp+128h+lineWidth], xmm11
              vaddss  xmm2, xmm8, xmm10; p1y
              vaddss  xmm1, xmm7, xmm9; p1x
              vmovss  dword ptr [rsp+128h+fmt], xmm0
            }
            CG_Draw2DLine(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, lineWidthd, 5, 5, &color, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm7, [rsp+128h+s]
              vmovss  xmm8, [rsp+128h+c]
            }
          }
        }
        __asm { vmovaps xmm14, [rsp+128h+var_B8] }
      }
    }
    __asm
    {
      vmovaps xmm12, [rsp+128h+var_98]
      vmovaps xmm9, [rsp+128h+var_68]
      vmovaps xmm8, [rsp+128h+var_58]
      vmovaps xmm7, [rsp+128h+var_48]
      vmovaps xmm6, [rsp+128h+var_38]
      vmovaps xmm10, [rsp+128h+var_78]
      vmovaps xmm11, [rsp+128h+var_88]
      vmovaps xmm13, [rsp+128h+var_A8]
    }
  }
}

/*
==============
CG_DrawDebug_DrawCharacterHitBox
==============
*/
void CG_DrawDebug_DrawCharacterHitBox(LocalClientNum_t localClientNum, int entnum)
{
  const dvar_t *v2; 
  const DObj *v5; 
  unsigned int v6; 
  unsigned int v7; 
  const XModel *Model; 
  unsigned int numBones; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  __int32 v16; 
  __int32 v17; 
  __int32 v18; 
  vec4_t *v19; 
  vec4_t *boneColor; 
  vec4_t *boneColora; 
  Bounds *collBounds; 
  int NumModels; 
  DObj *obj; 
  centity_t *cent; 
  XBoneInfo *boneInfo[254]; 

  v2 = DVARINT_cg_debugDrawHitBox;
  if ( DVARINT_cg_debugDrawHitBox )
  {
    Dvar_CheckFrontendServerThread(DVARINT_cg_debugDrawHitBox);
    if ( v2->current.integer )
    {
      cent = CG_GetEntity(localClientNum, entnum);
      if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10654, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( BG_IsCharacterEntity(&cent->nextState) )
      {
        obj = Com_GetClientDObj(entnum, localClientNum);
        v5 = obj;
        if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10660, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
          __debugbreak();
        DObjGetBoneInfo(obj, boneInfo);
        NumModels = DObjGetNumModels(obj);
        v6 = NumModels;
        if ( !NumModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10665, ASSERT_TYPE_ASSERT, "(modelCount > 0)", (const char *)&queryFormat, "modelCount > 0") )
          __debugbreak();
        v7 = 0;
        if ( NumModels )
        {
          do
          {
            Model = DObjGetModel(v5, v7);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10670, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            numBones = Model->numBones;
            v10 = 0;
            if ( Model->numBones )
            {
              v11 = 0i64;
              v12 = 0i64;
              do
              {
                v13 = Model->partClassification[v12];
                if ( v13 >= 0x16u )
                {
                  LODWORD(collBounds) = 22;
                  LODWORD(boneColor) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10678, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", boneColor, collBounds) )
                    __debugbreak();
                }
                if ( v13 )
                {
                  v14 = DVARINT_cg_debugDrawHitBox;
                  if ( !DVARINT_cg_debugDrawHitBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawHitBox") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v14);
                  if ( v14->current.integer == 1 )
                    goto LABEL_31;
                  v15 = DVARINT_cg_debugDrawHitBox;
                  if ( !DVARINT_cg_debugDrawHitBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawHitBox") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v15);
                  if ( CG_DrawDebug_GetHitLocGroup(v13) == v15->current.integer )
                  {
LABEL_31:
                    v16 = CG_DrawDebug_GetHitLocGroup(v13) - 2;
                    if ( v16 )
                    {
                      v17 = v16 - 1;
                      if ( v17 )
                      {
                        v18 = v17 - 1;
                        if ( v18 )
                        {
                          if ( v18 == 1 )
                            v19 = &colorGreen;
                          else
                            v19 = &colorWhite;
                        }
                        else
                        {
                          v19 = &colorBlue;
                        }
                      }
                      else
                      {
                        v19 = &colorYellow;
                      }
                    }
                    else
                    {
                      v19 = &colorRed;
                    }
                    if ( v10 >= Model->numBones )
                    {
                      LODWORD(collBounds) = Model->numBones;
                      LODWORD(boneColor) = v10;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( model->numBones )", "boneIndex doesn't index model->numBones\n\t%i not in [0, %i)", boneColor, collBounds) )
                        __debugbreak();
                    }
                    if ( !Model->boneNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 174, ASSERT_TYPE_ASSERT, "(model->boneNames)", (const char *)&queryFormat, "model->boneNames") )
                      __debugbreak();
                    HIDWORD(collBounds) = 0;
                    boneColora = v19;
                    v5 = obj;
                    CG_DrawDebug_DrawBone(obj, cent, v7, Model->boneNames[v11], boneInfo, boneColora);
                  }
                  else
                  {
                    v5 = obj;
                  }
                }
                ++v10;
                ++v12;
                ++v11;
              }
              while ( v10 < numBones );
              v6 = NumModels;
            }
            ++v7;
          }
          while ( v7 < v6 );
        }
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawClutterInfo
==============
*/

void __fastcall CG_DrawDebug_DrawClutterInfo(double _XMM0_8, double _XMM1_8)
{
  signed __int64 v2; 
  void *v13; 
  unsigned int v16; 
  const GfxClutterCollectionGPUData **ClutterCollectionGPUDataBuffer; 
  GfxWorldStaticModels *p_smodels; 
  unsigned int clutterCollectionCount; 
  unsigned int *v51; 
  const dvar_t *v52; 
  std::_Ref_fn<<lambda_ccab88d376c46b8802cb87209bb62334> > v53; 
  __int64 v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v63; 
  unsigned int *v64; 
  __int64 v65; 
  GfxClutterCollection *clutterCollections; 
  __int64 v67; 
  const StDiskTerrainSurface *v68; 
  const StTerrainClutterLayer *v69; 
  const StreamKey *streamKey; 
  unsigned int v75; 
  unsigned int ClutterTilesInstanceCount; 
  char v78; 
  int integer; 
  int v80; 
  const char *v92; 
  const char *v95; 
  const char *v98; 
  const char *v101; 
  const char *v104; 
  const char *v111; 
  unsigned int ReactiveMotionClutterLayerCount; 
  const char *v122; 
  unsigned int DebugClutterInstanceCount; 
  const char *v126; 
  const char *v129; 
  const char *v132; 
  const char *v140; 
  const char *v148; 
  const char *v156; 
  float fmta; 
  char *fmt; 
  float fmtb; 
  __int64 forceColor; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  float colord; 
  float colore; 
  float colorf; 
  float colorg; 
  float colorh; 
  float colori; 
  float colorj; 
  float colork; 
  float colorl; 
  float colorm; 
  float colorn; 
  float coloro; 
  float colorp; 
  float colorq; 
  float colorr; 
  float colors; 
  unsigned int v193; 
  unsigned int ClutterLayerBitmaskSizeBytes; 
  unsigned int v195; 
  int v196; 
  unsigned int v197; 
  unsigned int v198; 
  unsigned int v199; 
  int v200; 
  unsigned int maxInstanceCount; 
  const StTerrain *terrain; 
  CG_DrawDebug_DrawClutterInfo::__l23::<lambda_b155f55f8211a5fe8ee52b9cfc91046f> _Pred; 
  unsigned int *v204; 
  GfxWorldStaticModels *v205; 
  CG_DrawDebug_DrawClutterInfo::__l23::<lambda_ccab88d376c46b8802cb87209bb62334> _Val; 
  base_vec2_t<unsigned int> tileCount; 
  vec4_t setColor; 
  base_vec2_t<unsigned int> v209; 
  vec2_t coords; 
  base_vec2_t<unsigned int> tileStart; 
  unsigned int _First[4]; 
  char v223; 

  v13 = alloca(v2);
  __asm
  {
    vmovaps [rsp+11B0h+var_30], xmm6
    vmovaps [rsp+11B0h+var_50], xmm8
    vmovaps [rsp+11B0h+var_60], xmm9
    vmovaps [rsp+11B0h+var_70], xmm10
    vmovaps [rsp+11B0h+var_80], xmm11
    vmovaps [rsp+11B0h+var_90], xmm12
    vmovaps [rsp+11B0h+var_A0], xmm13
    vmovaps [rsp+11B0h+var_B0], xmm14
    vmovaps [rsp+11B0h+var_C0], xmm15
  }
  if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4043, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@40c00000
    vmovss  xmm9, cs:__real@3f000000
    vmovss  dword ptr [rsp+11B0h+color], xmm8
  }
  v16 = 0;
  __asm
  {
    vmovaps xmm2, xmm9; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Clutter Debug Info", &colorWhite, 0, 0, color, 1);
  __asm
  {
    vmovss  xmm11, cs:__real@43220000
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm11; x
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Generated Instances", &colorWhite, 0, 0, colora, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@436d0000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Sampled Instances", &colorWhite, 0, 0, colorb, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@43a10000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Max Instances", &colorWhite, 0, 0, colorc, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@43c40000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Instance Memory", &colorWhite, 0, 0, colord, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@43e20000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Bitmask Memory", &colorWhite, 0, 0, colore, 1);
  __asm
  {
    vmovss  xmm1, cs:__real@44000000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm9; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, "Total Memory", &colorWhite, 0, 0, colorf, 1);
  ClutterCollectionGPUDataBuffer = (const GfxClutterCollectionGPUData **)R_ST_GetClutterCollectionGPUDataBuffer();
  p_smodels = &rgp.world->smodels;
  _Pred.clutterCollectionGPUData = ClutterCollectionGPUDataBuffer;
  v205 = &rgp.world->smodels;
  clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
  if ( clutterCollectionCount > 0x400 )
  {
    Com_PrintWarning(14, "Too many clutter layers for debug overlay. Only the first %i of %i will be shown", 1024i64, clutterCollectionCount);
    clutterCollectionCount = 1024;
  }
  _RCX = 0i64;
  if ( clutterCollectionCount )
  {
    if ( clutterCollectionCount >= 0x10 )
    {
      __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
      _EDX = 8;
      do
      {
        _RAX = _EDX - 4;
        __asm
        {
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rcx*4+10B0h+_First], xmm1
          vmovd   xmm0, eax
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rax*4+10B0h+_First], xmm1
        }
        _RAX = _EDX;
        _RCX = (unsigned int)(_RCX + 16);
        __asm
        {
          vmovd   xmm0, edx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rax*4+10B0h+_First], xmm1
        }
        _RAX = _EDX + 4;
        _EDX += 16;
        __asm
        {
          vmovd   xmm0, eax
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [rbp+rax*4+10B0h+_First], xmm1
        }
      }
      while ( (unsigned int)_RCX < (clutterCollectionCount & 0xFFFFFFF0) );
    }
    if ( (unsigned int)_RCX < clutterCollectionCount )
    {
      v51 = &_First[(unsigned int)_RCX];
      do
      {
        *v51++ = _RCX;
        LODWORD(_RCX) = _RCX + 1;
      }
      while ( (unsigned int)_RCX < clutterCollectionCount );
    }
  }
  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4098, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  v52 = DVARINT_cg_drawClutterInfo;
  if ( !DVARINT_cg_drawClutterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClutterInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  switch ( v52->current.integer )
  {
    case 2:
      std::_Sort_unchecked_unsigned_int____lambda_b155f55f8211a5fe8ee52b9cfc91046f___(_First, &_First[clutterCollectionCount], clutterCollectionCount, (CG_DrawDebug_DrawClutterInfo::__l23::<lambda_b155f55f8211a5fe8ee52b9cfc91046f>)&_Pred);
      break;
    case 3:
      std::_Sort_unchecked_unsigned_int____lambda_f78a4aa79aa46f25887ebe1372c35f61___(_First, &_First[clutterCollectionCount], clutterCollectionCount, (CG_DrawDebug_DrawClutterInfo::__l23::<lambda_f78a4aa79aa46f25887ebe1372c35f61>)p_smodels);
      break;
    case 4:
      std::_Sort_unchecked_unsigned_int____lambda_91a3956b5fce515d87e1b2cf6d5f9306___(_First, &_First[clutterCollectionCount], clutterCollectionCount, (CG_DrawDebug_DrawClutterInfo::__l23::<lambda_91a3956b5fce515d87e1b2cf6d5f9306>)p_smodels);
      break;
    case 5:
      *(_QWORD *)setColor.v = p_smodels;
      *(_QWORD *)&setColor.xyz.z = &terrain;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+10B0h+setColor]
        vmovdqa xmmword ptr [rbp+10B0h+setColor], xmm0
      }
      v53._Fn = std::_Pass_fn__lambda_ccab88d376c46b8802cb87209bb62334__0_(&_Val)._Fn;
      std::_Sort_unchecked_unsigned_int___std::_Ref_fn__lambda_ccab88d376c46b8802cb87209bb62334_____(_First, &_First[v54], v54, (std::_Ref_fn<<lambda_ccab88d376c46b8802cb87209bb62334> >)v53._Fn->smodels);
      break;
  }
  v197 = 0;
  v55 = 0;
  v195 = 0;
  v56 = 0;
  v198 = 0;
  v57 = 0;
  v196 = 0;
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm13, cs:__real@41000000
    vmovss  xmm14, cs:__real@40e00000
    vmovss  xmm15, cs:__real@440f0000
    vmovss  xmm12, cs:__real@35800000
  }
  if ( clutterCollectionCount )
  {
    v63 = clutterCollectionCount - 32;
    __asm { vmovaps [rsp+11B0h+var_40], xmm7 }
    if ( (int)(clutterCollectionCount - 32) < 0 )
      v63 = 0;
    v200 = v63;
    v64 = _First;
    v204 = _First;
    do
    {
      v65 = *v64;
      clutterCollections = p_smodels->clutterCollections;
      v67 = (__int64)&p_smodels->models[p_smodels->collections[clutterCollections[v65].smodelCollectionIndex].smodelIndex];
      v68 = &terrain->surfaces[clutterCollections[v65].terrainSurfaceIndex];
      v69 = &v68->clutterLayers[clutterCollections[v65].clutterLayerIndex];
      streamKey = v68->clutterSampleBitmask.streamKey;
      _Val.smodels = **(const GfxWorldStaticModels ***)v67;
      maxInstanceCount = clutterCollections[v65].maxInstanceCount;
      v193 = HIDWORD(_Pred.clutterCollectionGPUData[v65]);
      if ( !streamKey || Stream_GenericIsSafeToUse(streamKey) )
        ClutterLayerBitmaskSizeBytes = R_ST_GetClutterLayerBitmaskSizeBytes(v69);
      else
        ClutterLayerBitmaskSizeBytes = 0;
      __asm
      {
        vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.scaleWithoutFovScale; r_globals_t rg
        vmovss  xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.biasWithoutFovScale; r_globals_t rg
      }
      _XMM0_8 = XModelGetLodOutDist(*(const XModel **)v67);
      __asm { vsubss  xmm1, xmm0, xmm6 }
      _Val.terrain = NULL;
      __asm { vdivss  xmm6, xmm1, xmm7 }
      coords = R_ST_GetCameraCoords(&rg.correctedLodParms.origin, &v68->objToWld);
      __asm { vmovaps xmm2, xmm6; drawDistance }
      R_ST_GetClutterTilesCovered(&coords, &v69->layerSize, *(const float *)&_XMM2, &v69->tileSizeUV, &tileStart, (base_vec2_t<unsigned int> *)&_Val.terrain);
      v197 += v193;
      v196 += ClutterLayerBitmaskSizeBytes;
      v75 = (LODWORD(_Val.terrain) * HIDWORD(_Val.terrain)) << 11;
      v198 += v75;
      tileCount = 0i64;
      v199 = 0;
      if ( (*(_BYTE *)(v67 + 8) & 8) != 0 && R_ReactiveMotion_UsesClutterPass(0) )
      {
        __asm { vminss  xmm2, xmm6, cs:?rg@@3Ur_globals_t@@A.vertexDeformCutOffDist; drawDistance }
        v209 = 0i64;
        R_ST_GetClutterTilesCovered(&coords, &v69->layerSize, *(const float *)&_XMM2, &v69->tileSizeUV, &v209, &tileCount);
        ClutterTilesInstanceCount = R_ST_GetClutterTilesInstanceCount(v68, v69, &v209, &tileCount);
        v195 += ClutterTilesInstanceCount;
        v78 = 1;
        v199 = ClutterTilesInstanceCount;
      }
      else
      {
        v78 = 0;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovups xmmword ptr [rbp+10B0h+setColor], xmm0
      }
      integer = clutterCollectionCount - 1;
      if ( r_st_clutterLayerSelected->current.integer < (signed int)(clutterCollectionCount - 1) )
        integer = r_st_clutterLayerSelected->current.integer;
      if ( v16 == integer )
      {
        R_ST_SelectClutterCollection(v65);
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          vmovups xmmword ptr [rbp+10B0h+setColor], xmm0
        }
      }
      if ( !R_ST_ClutterCollectionEnabled(v65) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+10B0h+setColor]
          vmulps  xmm1, xmm0, cs:__xmm@3f0000003f0000003f0000003f000000
          vmovups xmmword ptr [rbp+10B0h+setColor], xmm1
        }
      }
      v80 = integer - 16;
      if ( v200 < v80 )
        v80 = v200;
      if ( v80 < 0 )
        v80 = 0;
      if ( v16 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", (int)v16, "unsigned", v16) )
        __debugbreak();
      if ( (int)v16 >= v80 && v16 < v80 + 32 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vaddss  xmm2, xmm0, xmm10
          vsubss  xmm2, xmm2, xmm1
          vmulss  xmm6, xmm2, xmm13
          vmovaps xmm2, xmm6; y
          vmovaps xmm3, xmm15; width
          vxorps  xmm1, xmm1, xmm1; x
          vmovss  dword ptr [rsp+11B0h+fmt], xmm14
        }
        CG_Draw2DRect(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 8, &colorBlackFaded, cgMedia.whiteMaterial);
        __asm { vaddss  xmm6, xmm6, xmm9 }
        v92 = j_va("%u:", (unsigned int)v65);
        __asm
        {
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm10; x
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v92, &setColor, 0, 0, colorg, 1);
        v95 = j_va("%s:", (const char *)_Val.smodels);
        __asm
        {
          vmovss  xmm1, cs:__real@41400000; x
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v95, &setColor, 0, 0, colorh, 1);
        if ( v78 )
          v98 = j_va("%u [%u RMC]", v193, v199);
        else
          v98 = j_va("%u", v193);
        __asm
        {
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm11; x
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v98, &setColor, 0, 0, colori, 1);
        if ( v78 )
        {
          LODWORD(forceColor) = tileCount.v[1];
          LODWORD(fmt) = tileCount.v[0];
          v101 = j_va("%u (%ux%u [%ux%u RMC] tiles)", v75, LODWORD(_Val.terrain), HIDWORD(_Val.terrain), fmt, forceColor);
        }
        else
        {
          v101 = j_va("%u (%ux%u tiles)", v75, LODWORD(_Val.terrain), HIDWORD(_Val.terrain));
        }
        __asm
        {
          vmovss  xmm1, cs:__real@436d0000; x
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v101, &setColor, 0, 0, colorj, 1);
        v104 = j_va("%u", maxInstanceCount);
        __asm
        {
          vmovss  xmm1, cs:__real@43a10000; x
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v104, &setColor, 0, 0, colork, 1);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm12
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   rdx, xmm1
        }
        v111 = j_va("%.2fMB", _RDX);
        __asm
        {
          vmovss  xmm1, cs:__real@43e20000; x
          vmovss  dword ptr [rsp+11B0h+color], xmm8
          vmovaps xmm2, xmm6; y
        }
        CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v111, &setColor, 0, 0, colorl, 1);
      }
      ++v16;
      p_smodels = v205;
      v64 = ++v204;
    }
    while ( v16 < clutterCollectionCount );
    v55 = v195;
    v56 = v197;
    v57 = v198;
    __asm { vmovaps xmm7, [rsp+11B0h+var_40] }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm2, xmm0, xmm10
    vmulss  xmm2, xmm2, xmm13; y
    vmovaps xmm3, xmm15; width
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+11B0h+fmt], xmm14
    vaddss  xmm6, xmm2, xmm9
  }
  CG_Draw2DRect(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 1, 8, &colorBlackFaded, cgMedia.whiteMaterial);
  ReactiveMotionClutterLayerCount = R_ReactiveMotion_GetReactiveMotionClutterLayerCount(0);
  v122 = j_va("Totals: [%u RMC Layers]", ReactiveMotionClutterLayerCount);
  __asm
  {
    vmovss  xmm1, cs:__real@41400000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v122, &colorWhite, 0, 0, colorm, 1);
  DebugClutterInstanceCount = R_ReactiveMotion_GetDebugClutterInstanceCount(0);
  v126 = j_va("%u [%u of %u RMC]", v56, DebugClutterInstanceCount, v55);
  __asm
  {
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm11; x
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v126, &colorWhite, 0, 0, colorn, 1);
  v129 = j_va("%u", v57);
  __asm
  {
    vmovss  xmm1, cs:__real@436d0000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v129, &colorWhite, 0, 0, coloro, 1);
  v132 = j_va("%u", p_smodels->clutterInstancePool.size);
  __asm
  {
    vmovss  xmm1, cs:__real@43a10000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v132, &colorWhite, 0, 0, colorp, 1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm12
    vcvtss2sd xmm1, xmm2, xmm2
    vmovq   rdx, xmm1
  }
  v140 = j_va("%.2fMB", _RDX);
  __asm
  {
    vmovss  xmm1, cs:__real@43c40000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v140, &colorWhite, 0, 0, colorq, 1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm12
    vcvtss2sd xmm1, xmm2, xmm2
    vmovq   rdx, xmm1
  }
  v148 = j_va("%.2fMB", _RDX);
  __asm
  {
    vmovss  xmm1, cs:__real@43e20000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v148, &colorWhite, 0, 0, colorr, 1);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm3, xmm0, xmm12
    vcvtss2sd xmm1, xmm3, xmm3
    vmovq   rdx, xmm1
  }
  v156 = j_va("%.2fMB", _RDX);
  __asm
  {
    vmovss  xmm1, cs:__real@44000000; x
    vmovss  dword ptr [rsp+11B0h+color], xmm8
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(&scrPlaceFull, *(float *)&_XMM1, *(float *)&_XMM2, v156, &colorWhite, 0, 0, colors, 1);
  _R11 = &v223;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
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
CG_DrawDebug_DrawDynamiclightsetLights
==============
*/
void CG_DrawDebug_DrawDynamiclightsetLights(LocalClientNum_t localClientNum)
{
  __int64 integer; 
  GfxWorld *world; 
  __int64 v8; 
  cg_t *LocalClientGlobals; 
  GfxWorld *v13; 
  int v14; 
  GfxDynamicLightsetBFData *basisFunctions; 
  unsigned int v18; 
  __int64 v22; 
  char v24; 
  __int64 lightIndex; 
  vec3_t *p_colorGammaSrgb; 
  __int64 v27; 
  GfxDynamicLight *v28; 
  float fmt; 
  int v34[4]; 
  vec3_t colorGammaSrgb; 
  vec3_t outOrg; 
  void *retaddr; 

  _R11 = &retaddr;
  integer = r_dlsDebugLightsetRender->current.integer;
  if ( (_DWORD)integer != -1 )
  {
    world = rgp.world;
    v8 = integer;
    if ( rgp.world->dynamicLightset.basisFunctions[integer].bfType == GFX_BF_DLS )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovaps xmmword ptr [r11-28h], xmm6
        vmovaps xmmword ptr [r11-38h], xmm7
        vxorps  xmm6, xmm6, xmm6
        vmovss  dword ptr [rsp+0C8h+colorGammaSrgb+8], xmm6
        vmovss  [rsp+0C8h+var_88], xmm0
        vmovss  [rsp+0C8h+var_84], xmm0
        vmovss  [rsp+0C8h+var_80], xmm0
        vmovss  dword ptr [rsp+0C8h+colorGammaSrgb], xmm0
        vmovss  dword ptr [rsp+0C8h+colorGammaSrgb+4], xmm0
        vmovaps xmmword ptr [r11-48h], xmm8
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7401, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      _RAX = r_debugDrawLightsDrawRadius;
      v13 = rgp.world;
      v14 = 0;
      basisFunctions = world->dynamicLightset.basisFunctions;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
      _RAX = r_debugDrawLightsDrawDetailRadius;
      v18 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      __asm
      {
        vmulss  xmm7, xmm0, xmm0
        vmovss  xmm1, dword ptr [rax+28h]
        vmulss  xmm8, xmm1, xmm1
      }
      if ( basisFunctions[v8].numRec )
      {
        while ( 1 )
        {
          v22 = v14 + basisFunctions[v8].startRec;
          _RCX = (__int64)&world->dynamicLightset.basisFunctionLights[v22];
          __asm { vcomiss xmm6, dword ptr [rcx+0Ch] }
          if ( __CFADD__(world->dynamicLightset.basisFunctionLights, 28 * v22) )
            goto LABEL_11;
          __asm { vcomiss xmm6, dword ptr [rcx+10h] }
          if ( __CFADD__(world->dynamicLightset.basisFunctionLights, 28 * v22) )
            goto LABEL_11;
          __asm { vcomiss xmm6, dword ptr [rcx+14h] }
          if ( __CFADD__(world->dynamicLightset.basisFunctionLights, 28 * v22) )
LABEL_11:
            v24 = 1;
          else
            v24 = 0;
          lightIndex = *(unsigned int *)(_RCX + 24);
          p_colorGammaSrgb = (vec3_t *)v34;
          if ( (unsigned int)lightIndex < v18 )
          {
            if ( !v24 )
              p_colorGammaSrgb = &colorGammaSrgb;
            v28 = (GfxDynamicLight *)&v13->primaryLights[lightIndex];
          }
          else
          {
            if ( !v24 )
              p_colorGammaSrgb = &colorGammaSrgb;
            v27 = (unsigned int)lightIndex - v18;
            LODWORD(lightIndex) = 0;
            v28 = &scene.dynamicSpotLight[v27];
          }
          __asm
          {
            vmovaps xmm3, xmm7; drawRadiusSquared
            vmovss  dword ptr [rsp+0C8h+fmt], xmm8
          }
          CG_DrawDebug_DrawLight(&v28->lightCommon, p_colorGammaSrgb, &outOrg, *(float *)&_XMM3, fmt, lightIndex, 1);
          basisFunctions = world->dynamicLightset.basisFunctions;
          if ( ++v14 >= (unsigned int)basisFunctions[v8].numRec )
            break;
          v13 = rgp.world;
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+0C8h+var_28]
        vmovaps xmm7, [rsp+0C8h+var_38]
        vmovaps xmm8, [rsp+0C8h+var_48]
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawEntityWorkersOverlay
==============
*/

void __fastcall CG_DrawDebug_DrawEntityWorkersOverlay(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  const dvar_t *v12; 
  const CgEntityWorkerProfileHistory *ProfileData; 
  const ScreenPlacement *ActivePlacement; 
  unsigned int frameCount; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v31; 
  float *v32; 
  __int64 v41; 
  const char *EntityTypeName; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  float fmtc; 
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
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  vec4_t color; 
  vec4_t v217; 
  vec4_t v218; 
  int v219[32]; 
  int v220[29]; 
  char v221; 
  int v222[32]; 
  int v223[32]; 
  char dest[1024]; 

  v12 = DVARBOOL_cg_drawEntityWorkers;
  if ( !DVARBOOL_cg_drawEntityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawEntityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    ProfileData = CG_EntityWorkers_GetProfileData(localClientNum);
    if ( ProfileData->frameCount )
    {
      __asm
      {
        vmovaps [rsp+750h+var_20], xmm6
        vmovaps [rsp+750h+var_30], xmm7
        vmovaps [rsp+750h+var_40], xmm8
        vmovaps [rsp+750h+var_50], xmm9
        vmovaps [rsp+750h+var_60], xmm10
        vmovaps [rsp+750h+var_70], xmm11
        vmovaps [rsp+750h+var_80], xmm12
        vmovaps [rsp+750h+var_90], xmm13
        vmovaps [rsp+750h+var_A0], xmm14
        vmovaps [rsp+750h+var_B0], xmm15
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7831, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@00800000
        vmovss  xmm10, cs:__real@7f7fffff
        vmovss  [rsp+750h+var_700], xmm0
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm11, xmm11, xmm11
        vxorps  xmm12, xmm12, xmm12
        vxorps  xmm13, xmm13, xmm13
        vmovaps xmm14, xmm10
        vmovaps xmm15, xmm0
      }
      memset_0(v220, 0, sizeof(v220));
      memset_0(v219, 0, 0x74ui64);
      memset_0(v223, 0, 0x74ui64);
      memset_0(v222, 0, 0x74ui64);
      frameCount = ProfileData->frameCount;
      v28 = 0;
      v29 = 29i64;
      if ( frameCount )
      {
        _R9 = &ProfileData->frames[0].avgWorkerTime;
        v31 = frameCount;
        do
        {
          v32 = _R9 - 301;
          __asm
          {
            vmovss  xmm4, dword ptr [r9+0Ch]
            vmovss  xmm2, dword ptr [r9+4]
            vmovss  xmm3, dword ptr [r9+8]
            vaddss  xmm6, xmm6, dword ptr [r9]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vminss  xmm10, xmm2, xmm10
            vaddss  xmm11, xmm11, xmm0
          }
          _RDX = 0i64;
          __asm { vmaxss  xmm0, xmm3, xmm10 }
          _R11 = (char *)_R9 - &v221;
          v41 = 29i64;
          __asm
          {
            vmovss  [rsp+750h+var_700], xmm0
            vaddss  xmm7, xmm7, xmm2
            vaddss  xmm8, xmm8, xmm3
            vaddss  xmm13, xmm13, xmm4
            vaddss  xmm12, xmm12, xmm1
            vminss  xmm14, xmm4, xmm14
            vmaxss  xmm15, xmm4, xmm15
          }
          do
          {
            if ( *(_WORD *)v32 )
            {
              ++v222[_RDX];
              _RCX = &v220[_RDX];
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vaddss  xmm1, xmm0, dword ptr [rcx]
                vmovss  xmm0, dword ptr [rcx+r11]
                vmovss  dword ptr [rcx], xmm1
                vaddss  xmm1, xmm0, [rbp+rdx+650h+var_6C0]
                vmovss  [rbp+rdx+650h+var_6C0], xmm1
              }
            }
            v32 = (float *)((char *)v32 + 2);
            ++_RDX;
            --v41;
          }
          while ( v41 );
          _R9 += 306;
          --v31;
        }
        while ( v31 );
      }
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15
      }
      _RCX = 0i64;
      __asm
      {
        vdivss  xmm1, xmm3, xmm0
        vmulss  xmm0, xmm6, xmm1
        vmulss  xmm6, xmm7, xmm1
        vmovss  [rsp+750h+var_6FC], xmm0
        vmulss  xmm0, xmm8, xmm1
        vmulss  xmm7, xmm11, xmm1
        vmulss  xmm11, xmm12, xmm1
        vmovaps xmm12, [rsp+750h+var_80]
        vmovss  [rsp+750h+var_6F8], xmm0
        vmovss  [rsp+750h+var_6F4], xmm6
        vmulss  xmm13, xmm13, xmm1
      }
      do
      {
        if ( v222[_RCX] )
        {
          __asm
          {
            vmovss  xmm2, [rbp+rcx+650h+var_640]
            vcomiss xmm2, xmm9
            vmovss  xmm0, [rbp+rcx+650h+var_6C0]
            vdivss  xmm1, xmm0, xmm2
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmovss  [rbp+rcx+650h+var_540], xmm1
            vdivss  xmm1, xmm3, xmm0
            vmulss  xmm0, xmm1, xmm2
            vmulss  xmm1, xmm1, [rbp+rcx+650h+var_6C0]
            vmovss  [rbp+rcx+650h+var_6C0], xmm1
            vmovss  [rbp+rcx+650h+var_640], xmm0
          }
        }
        ++_RCX;
        --v29;
      }
      while ( v29 );
      __asm
      {
        vmovss  xmm8, cs:__real@3f333333
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm9; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "Entity Workers Profile", color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm0, [rsp+750h+var_6FC]
        vcvtss2sd xmm3, xmm11, xmm11
        vcvtss2sd xmm2, xmm7, xmm7
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+750h+fmt], xmm0
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Workers %.3f\tEnts %.3f\tAvg %.3f", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
      __asm
      {
        vmovss  xmm2, cs:__real@41700000; y
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgMin %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm7, cs:__real@41c80000
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm11, [rsp+750h+var_6F8]
        vmovss  xmm6, cs:xAvgOffsetFull
        vcvtss2sd xmm2, xmm11, xmm11
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgMax %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vsubss  xmm0, xmm11, [rsp+750h+var_6F4]
        vaddss  xmm6, xmm6, cs:xAvgOffsetFull
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgSpread %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vcvtss2sd xmm2, xmm10, xmm10
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Min %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm7, cs:__real@420c0000
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm11, [rsp+750h+var_700]
        vmovss  xmm6, cs:xAvgOffsetFull
        vcvtss2sd xmm2, xmm11, xmm11
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Max %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vaddss  xmm6, xmm6, cs:xAvgOffsetFull
        vsubss  xmm0, xmm11, xmm10
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Spread %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vcvtss2sd xmm2, xmm13, xmm13
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Dev Avg %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm7, cs:__real@42340000
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm6, cs:xAvgOffsetFull
        vcvtss2sd xmm2, xmm14, xmm14
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Min %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vaddss  xmm6, xmm6, cs:xAvgOffsetFull
        vcvtss2sd xmm2, xmm15, xmm15
        vmovq   r8, xmm2
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Max %.3f", *(double *)&_XMM2);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, dest, color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm7, cs:__real@42700000
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, "Type", color_3, 5, cls.smallDevFont);
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f19999a3f19999a3f19999a
        vmovups xmm1, cs:__xmm@3f8000003f4ccccd3f4ccccd3f4ccccd
        vmovss  xmm6, cs:xEntityOffset
        vmovups xmmword ptr [rsp+750h+var_6F0], xmm0
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmmword ptr [rbp+650h+var_6D0], xmm0
        vmovups xmmword ptr [rsp+750h+var_6E0], xmm1
      }
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "%d Sum", 0i64);
      __asm
      {
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, dest, &color, 5, cls.smallDevFont);
      __asm
      {
        vaddss  xmm6, xmm6, cs:xAvgOffsetCompact
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, "Avg", &v217, 5, cls.smallDevFont);
      __asm
      {
        vaddss  xmm1, xmm6, cs:xAvgOffsetCompact; x
        vmovaps xmm3, xmm8; xScale
        vmovaps xmm2, xmm7; y
        vmovss  dword ptr [rsp+750h+fmt], xmm8
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmto, "Count", &v218, 5, cls.smallDevFont);
      __asm
      {
        vmovss  xmm7, cs:__real@428c0000
        vmovss  xmm10, cs:__real@41200000
        vmovaps xmm15, [rsp+750h+var_B0]
      }
      _RDI = 0i64;
      __asm
      {
        vmovaps xmm14, [rsp+750h+var_A0]
        vmovaps xmm13, [rsp+750h+var_90]
        vmovaps xmm11, [rsp+750h+var_70]
      }
      do
      {
        EntityTypeName = BG_GetEntityTypeName((const entityType_s)v28);
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%2d %s", v28, EntityTypeName);
        __asm
        {
          vmovaps xmm3, xmm8; xScale
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm9; x
          vmovss  dword ptr [rsp+750h+fmt], xmm8
        }
        CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, dest, color_3, 5, cls.smallDevFont);
        __asm
        {
          vmovss  xmm2, [rbp+rdi+650h+var_6C0]
          vmovss  xmm6, cs:xEntityOffset
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.3f", *(double *)&_XMM2);
        __asm
        {
          vmovaps xmm3, xmm8; xScale
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm6; x
          vmovss  dword ptr [rsp+750h+fmt], xmm8
        }
        CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtq, dest, &color, 5, cls.smallDevFont);
        __asm
        {
          vmovss  xmm2, [rbp+rdi+650h+var_540]
          vaddss  xmm6, xmm6, cs:xAvgOffsetCompact
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.3f", *(double *)&_XMM2);
        __asm
        {
          vmovaps xmm3, xmm8; xScale
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm6; x
          vmovss  dword ptr [rsp+750h+fmt], xmm8
        }
        CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtr, dest, &v217, 5, cls.smallDevFont);
        __asm
        {
          vmovss  xmm2, [rbp+rdi+650h+var_640]
          vaddss  xmm6, xmm6, cs:xAvgOffsetCompact
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.1f", *(double *)&_XMM2);
        __asm
        {
          vmovaps xmm3, xmm8; xScale
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm6; x
          vmovss  dword ptr [rsp+750h+fmt], xmm8
        }
        CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmts, dest, &v218, 5, cls.smallDevFont);
        __asm { vaddss  xmm7, xmm7, xmm10 }
        ++v28;
        _RDI += 4i64;
      }
      while ( v28 < 0x1D );
      __asm
      {
        vmovaps xmm10, [rsp+750h+var_60]
        vmovaps xmm9, [rsp+750h+var_50]
        vmovaps xmm8, [rsp+750h+var_40]
        vmovaps xmm7, [rsp+750h+var_30]
        vmovaps xmm6, [rsp+750h+var_20]
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawFPSGraphs
==============
*/

void __fastcall CG_DrawDebug_DrawFPSGraphs(double _XMM0_8)
{
  const dvar_t *v4; 
  int integer; 
  const volatile ServerProfileTimes *v21; 
  float targetMS; 
  float targetMSa; 
  float v35; 
  float v36; 
  vec2_t origin; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  v4 = DVARINT_cg_drawFPSGraphs;
  if ( !DVARINT_cg_drawFPSGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSGraphs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( (unsigned int)(integer - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7527, ASSERT_TYPE_ASSERT, "(mode == FpsGraph::drawFPSGraphModes::Client || mode == FpsGraph::drawFPSGraphModes::Server || mode == FpsGraph::drawFPSGraphModes::Both)", (const char *)&queryFormat, "mode == FpsGraph::drawFPSGraphModes::Client || mode == FpsGraph::drawFPSGraphModes::Server || mode == FpsGraph::drawFPSGraphModes::Both") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm7, cs:__real@43390000
    vmovss  xmm8, cs:__real@43160000
    vmovss  dword ptr [rsp+88h+origin], xmm6
    vmovss  dword ptr [rsp+88h+origin+4], xmm7
  }
  if ( ((integer - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( !FpsGraph::IsInitialized(&s_clientFpsGraph) || DVARINT_cg_drawFPSGraphs->modified )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@42800000
        vmovss  xmm1, cs:__real@41855555
        vmovss  [rsp+88h+var_50], xmm0
        vmovss  [rsp+88h+targetMS], xmm1
      }
      FpsGraph::InitGraph(&s_clientFpsGraph, &origin, 600, 150, 240, "Client frame time", targetMS, v35);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+origin+4]
      vsubss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rsp+88h+origin]
      vsubss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, xmm6
      vcvttss2si ecx, xmm1; x
      vcvttss2si edx, xmm2; y
    }
    DevGui_DrawBox(_ECX, _EDX, 680, 185, CONTRASTY_BOX_COLOR.array);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsp+88h+origin+4]
      vmovss  dword ptr [rsp+88h+origin+4], xmm1
    }
    FpsGraph::AddTimeSample(&s_clientFpsGraph);
    FpsGraph::DrawGraph(&s_clientFpsGraph);
  }
  if ( (unsigned int)(integer - 2) <= 1 )
  {
    if ( !FpsGraph::IsInitialized(&s_serverFpsGraph) || DVARINT_cg_drawFPSGraphs->modified )
    {
      if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+88h+var_50], xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, cs:?cls@@3UClStatic@@A.m_serverFrameDuration; ClStatic cls
        vmovss  [rsp+88h+targetMS], xmm0
      }
      FpsGraph::InitGraph(&s_serverFpsGraph, &origin, 600, 150, 180, "Server frame time", targetMSa, v36);
    }
    if ( Com_IsAnyLocalServerRunning() )
    {
      _RAX = SV_GetProfileTimes();
      v21 = _RAX;
      if ( _RAX->debugFrameNumber != s_lastServerDebugFrameNumber )
      {
        __asm { vmovss  xmm1, dword ptr [rax+14h]; milliseconds }
        FpsGraph::AddTimeMS(&s_serverFpsGraph, *(float *)&_XMM1);
        s_lastServerDebugFrameNumber = v21->debugFrameNumber;
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+origin+4]
      vsubss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rsp+88h+origin]
      vsubss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, xmm6
      vcvttss2si ecx, xmm1; x
      vcvttss2si edx, xmm2; y
    }
    DevGui_DrawBox(_ECX, _EDX, 680, 185, CONTRASTY_BOX_COLOR.array);
    FpsGraph::DrawGraph(&s_serverFpsGraph);
  }
  if ( DVARINT_cg_drawFPSGraphs->modified )
    Dvar_ClearModified(DVARINT_cg_drawFPSGraphs);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
CG_DrawDebug_DrawFileReadHistoryOverlay
==============
*/
void CG_DrawDebug_DrawFileReadHistoryOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  FileStreamReadHistory *History; 
  FastCriticalSection *p_m_readHistoryLock; 
  __int64 m_readHistoryStartIndex; 
  __int64 v18; 
  __int64 v19; 
  bool v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  bool v28; 
  char *FileName; 
  int v30; 
  const char *v31; 
  const dvar_t *v32; 
  int integer; 
  bool v34; 
  char v35; 
  const char *v36; 
  const char *v37; 
  const dvar_t *v38; 
  const char *string; 
  const char *v40; 
  const dvar_t *v41; 
  int v42; 
  const dvar_t *v43; 
  int v44; 
  char v46; 
  float fmt; 
  __int64 y; 
  float ya; 
  __int64 horzAlign; 
  float scale; 
  __int64 style; 
  __int64 v57; 
  int v58; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  FileStreamReadHistory *v61; 
  FastCriticalSection *v62; 
  __int64 v63[3]; 
  char dest[1024]; 

  v5 = DCONST_DVARBOOL_fileStream_drawReadHistory;
  if ( !DCONST_DVARBOOL_fileStream_drawReadHistory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    _RBX = DCONST_DVARFLT_fileStream_drawReadHistoryFontSize;
    __asm
    {
      vmovaps [rsp+528h+var_38], xmm6
      vmovaps [rsp+528h+var_48], xmm7
      vmovaps [rsp+528h+var_58], xmm8
      vmovaps [rsp+528h+var_68], xmm9
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm6, xmm6, xmm6
    }
    if ( !DCONST_DVARFLT_fileStream_drawReadHistoryFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFontSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+28h]
      vmovaps xmm2, xmm8; scale
    }
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovaps xmm1, xmm8; scale }
    font = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
    UI_TextHeight(font, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, eax
    }
    v58 = 0;
    v63[0] = (__int64)"^3";
    v63[1] = (__int64)"^5";
    History = FileStream_GetReadHistory();
    v61 = History;
    p_m_readHistoryLock = &History->m_readHistoryLock;
    v62 = &History->m_readHistoryLock;
    Sys_LockRead(&History->m_readHistoryLock);
    if ( History->m_readHistoryLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 144, ASSERT_TYPE_ASSERT, "(m_readHistoryLock.readCount > 0)", "%s\n\tRead history should be locked for reading.", "m_readHistoryLock.readCount > 0") )
      __debugbreak();
    if ( History->m_readHistoryStartIndex >= 0x32 )
    {
      LODWORD(horzAlign) = 50;
      LODWORD(y) = History->m_readHistoryStartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( m_readHistoryStartIndex ) < (unsigned)( ( sizeof( *array_counter( m_readHistoryData ) ) + 0 ) )", "m_readHistoryStartIndex doesn't index ARRAY_COUNT( m_readHistoryData )\n\t%i not in [0, %i)", y, horzAlign) )
        __debugbreak();
    }
    m_readHistoryStartIndex = History->m_readHistoryStartIndex;
    if ( (_DWORD)m_readHistoryStartIndex == History->m_readHistoryEndIndex )
      v18 = 0i64;
    else
      v18 = (__int64)&History->m_readHistoryData[m_readHistoryStartIndex];
    v19 = 0i64;
    if ( v18 )
    {
      while ( 1 )
      {
        v20 = 0;
        if ( p_m_readHistoryLock->readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 152, ASSERT_TYPE_ASSERT, "(m_readHistoryLock.readCount > 0)", "%s\n\tRead history should be locked for reading.", "m_readHistoryLock.readCount > 0") )
          __debugbreak();
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 153, ASSERT_TYPE_ASSERT, "(readHistoryData)", (const char *)&queryFormat, "readHistoryData") )
          __debugbreak();
        v21 = truncate_cast<unsigned int,__int64>((v18 - (__int64)History - 8) / 48);
        v22 = v21;
        if ( v21 >= 0x32 )
        {
          LODWORD(horzAlign) = 50;
          LODWORD(y) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 156, ASSERT_TYPE_ASSERT, "(unsigned)( currentIndex ) < (unsigned)( ( sizeof( *array_counter( m_readHistoryData ) ) + 0 ) )", "currentIndex doesn't index ARRAY_COUNT( m_readHistoryData )\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v23 = ((v22 + 1) * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
        v24 = v22 + 1 - 50 * ((v23 + (((unsigned __int64)(v22 + 1) - v23) >> 1)) >> 5);
        if ( (_DWORD)v24 == History->m_readHistoryEndIndex )
          v25 = 0i64;
        else
          v25 = (__int64)&History->m_readHistoryData[(unsigned int)v24];
        v26 = *(_DWORD *)v18;
        v27 = *(_QWORD *)(v18 + 8);
        v28 = v25 && v27 + *(_QWORD *)(v18 + 16) == *(_QWORD *)(v25 + 8) || v19 && *(_QWORD *)(v19 + 8) + *(_QWORD *)(v19 + 16) == v27;
        if ( FileStream_FileIsOpen((FileStreamFileID)v26) )
          FileName = FileStream_GetFileName((FileStreamFileID)v26);
        else
          FileName = j_va("%d", v26);
        v30 = *(_DWORD *)(v18 + 28);
        v31 = FileName;
        if ( v30 != -1 )
          v30 -= *(_DWORD *)(v18 + 24);
        v32 = DCONST_DVARINT_fileStream_drawReadHistoryHighlightTimeMs;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryHighlightTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryHighlightTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        integer = v32->current.integer;
        v34 = integer == 0;
        if ( integer > 0 )
        {
          if ( v30 > integer )
            goto LABEL_49;
          v34 = integer == 0;
        }
        if ( !v34 || v30 <= *(_DWORD *)(v18 + 32) )
        {
          v35 = 0;
          goto LABEL_51;
        }
LABEL_49:
        v35 = 1;
LABEL_51:
        v36 = "^7";
        if ( v35 )
          v36 = "^1";
        v37 = "^7";
        if ( v28 )
          v37 = "^2";
        LODWORD(v57) = *(_DWORD *)(v18 + 32);
        LODWORD(style) = v30;
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s%s%s, Offset: %s%zd%s, Size: %zd, Time: %s%d ms%s, Estimated Time: %d ms\n", (const char *)v63[v58], v31, "^7", v37, *(_QWORD *)(v18 + 8), "^7", *(_QWORD *)(v18 + 16), v36, style, "^7", v57);
        v38 = DCONST_DVARSTR_fileStream_drawReadHistoryFilterName;
        if ( !DCONST_DVARSTR_fileStream_drawReadHistoryFilterName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterName") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        string = v38->current.string;
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8033, ASSERT_TYPE_ASSERT, "(filterName)", (const char *)&queryFormat, "filterName") )
          __debugbreak();
        if ( *string )
        {
          v40 = FileStream_GetFileName((FileStreamFileID)v26);
          v20 = strstr_0(v40, string) == NULL;
        }
        v41 = DCONST_DVARINT_fileStream_drawReadHistoryFilterFileStreamTrack;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryFilterFileStreamTrack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterFileStreamTrack") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        v42 = v41->current.integer;
        if ( v42 < 8 && *(_DWORD *)(v18 + 40) != v42 )
          v20 = 1;
        v43 = DCONST_DVARINT_fileStream_drawReadHistoryFilterTimeMs;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryFilterTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        v44 = v43->current.integer;
        if ( v44 > 0 && v30 < v44 )
          goto LABEL_84;
        if ( v20 )
          goto LABEL_84;
        _RBP = scrPlace;
        __asm
        {
          vmovss  [rsp+528h+scale], xmm8
          vmovss  [rsp+528h+y], xmm6
          vmovss  dword ptr [rsp+528h+fmt], xmm7
        }
        UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, fmt, ya, 1, 1, scale, &colorWhite, 3);
        __asm
        {
          vaddss  xmm6, xmm6, xmm9
          vcomiss xmm6, dword ptr [rbp+34h]
        }
        if ( v46 | v34 )
        {
LABEL_84:
          if ( v25 )
          {
            if ( *(_DWORD *)v18 != *(_DWORD *)v25 )
              v58 = ((_BYTE)v58 - 1) & 1;
          }
          History = v61;
          v19 = v18;
          v18 = v25;
          p_m_readHistoryLock = &v61->m_readHistoryLock;
          if ( v25 )
            continue;
        }
        p_m_readHistoryLock = v62;
        break;
      }
    }
    Sys_UnlockRead(p_m_readHistoryLock);
    __asm
    {
      vmovaps xmm9, [rsp+528h+var_68]
      vmovaps xmm8, [rsp+528h+var_58]
      vmovaps xmm7, [rsp+528h+var_48]
      vmovaps xmm6, [rsp+528h+var_38]
    }
  }
}

/*
==============
CG_DrawDebug_DrawFontTest
==============
*/
void CG_DrawDebug_DrawFontTest(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v11; 
  GfxFont *v14; 
  GfxFont *v17; 
  GfxFont *v20; 
  GfxFont *v23; 
  GfxFont *v26; 
  GfxFont *v29; 
  GfxFont *v32; 
  float x; 
  float xa; 
  float xb; 
  float xc; 
  float xd; 
  float xe; 
  float xf; 
  float xg; 
  float xh; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  char dest[512]; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@3ecccccd
    vmovaps xmm2, xmm7; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 1, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", FontHandle->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@41200000
    vmovss  xmm6, cs:__real@c1c80000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, FontHandle, x, v46, 1, 1, v55, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v11 = UI_GetFontHandle(ActivePlacement, 2, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v11->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@420c0000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v11, xa, v47, 1, 1, v56, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v14 = UI_GetFontHandle(ActivePlacement, 3, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v14->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@42700000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v14, xb, v48, 1, 1, v57, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v17 = UI_GetFontHandle(ActivePlacement, 4, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v17->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@42aa0000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v17, xc, v49, 1, 1, v58, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v20 = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v20->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@42dc0000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v20, xd, v50, 1, 1, v59, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v23 = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v23->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@43070000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v23, xe, v51, 1, 1, v60, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v26 = UI_GetFontHandle(ActivePlacement, 8, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v26->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@43200000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v26, xf, v52, 1, 1, v61, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v29 = UI_GetFontHandle(ActivePlacement, 9, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v29->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@43390000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v29, xg, v53, 1, 1, v62, &colorWhite, 3);
  __asm { vmovaps xmm2, xmm7; scale }
  v32 = UI_GetFontHandle(ActivePlacement, 10, *(float *)&_XMM2);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v32->fontName, strButtons);
  __asm
  {
    vmovss  xmm0, cs:__real@43520000
    vmovss  [rsp+298h+var_258], xmm7
    vmovss  [rsp+298h+var_270], xmm0
    vmovss  [rsp+298h+x], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v32, xh, v54, 1, 1, v63, &colorWhite, 3);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_DrawDebug_DrawFxText
==============
*/
void CG_DrawDebug_DrawFxText(LocalClientNum_t localClientNum, const char *text, vec2_t *inOutProfilePos)
{
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float y; 
  float v14; 
  float v15; 

  _RDI = inOutProfilePos;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5428, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm0, cs:MY_TEXTSIZE
    vmovss  xmm1, dword ptr [rdi]
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+68h+y], xmm0
    vmovss  dword ptr [rsp+68h+fmt], xmm1
  }
  CL_DrawText(ActivePlacement, text, 0x7FFFFFFF, cls.smallDevFont, fmt, y, 1, 1, v14, v15, &colorWhiteFaded, 0);
  __asm
  {
    vmovss  xmm0, cs:FX_PROFILE_LINE_HEIGHT
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
  }
}

/*
==============
CG_DrawDebug_DrawGameETCounts
==============
*/
void CG_DrawDebug_DrawGameETCounts(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *smallDevFont; 
  const ScreenPlacement *v7; 
  int v8; 
  int v10; 
  int v18; 
  const char *v20; 
  bool v21; 
  int v22; 
  const char *v28; 
  int v29; 
  bool v31; 
  int v32; 
  float x; 
  double xa; 
  float xb; 
  float ya; 
  __int64 y; 
  double yb; 
  double yc; 
  float yd; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  double vertAlignb; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  float scaleb; 
  __int64 scale; 
  __int64 scalea; 
  float scalec; 
  vec4_t *color; 
  vec4_t *colora; 
  char dest[2048]; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm { vmovss  xmm0, cs:MY_SCALE2 }
  smallDevFont = cls.smallDevFont;
  __asm
  {
    vmovss  xmm1, cs:MY_LABEL_X
    vmovss  [rsp+898h+scale], xmm0
    vmovss  xmm0, cs:MY_LABEL_Y
    vmovss  [rsp+898h+y], xmm0
    vmovss  [rsp+898h+x], xmm1
  }
  v7 = ActivePlacement;
  UI_DrawText(ActivePlacement, "Entity Counts", 2048, cls.smallDevFont, x, ya, 2, 1, scaleb, &colorWhite, 3);
  if ( G_LogDebugEntInfoResults() )
  {
    __asm { vmovaps [rsp+898h+var_28], xmm6 }
    v8 = Com_sprintf(dest, 0x800ui64, "           (current)                   (max witnessed)\n");
    __asm { vmovss  xmm6, cs:__real@42c80000 }
    v10 = Com_sprintf(&dest[v8], 2048 - v8, "=========================================================\n") + v8;
    _RBX = &g_debugEntInfoSummary[0].countHighest;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm2, dword ptr [rbx+8]
        vmulss  xmm1, xmm0, xmm6
        vcvtss2sd xmm3, xmm1, xmm1
        vmovsd  qword ptr [rsp+898h+vertAlign], xmm3
        vmulss  xmm0, xmm2, xmm6
        vcvtss2sd xmm1, xmm0, xmm0
      }
      LODWORD(horzAlign) = *_RBX;
      LODWORD(y) = *(_RBX - 1);
      __asm { vmovsd  qword ptr [rsp+898h+x], xmm1 }
      v10 += Com_sprintf(&dest[v10], 2048 - v10, " %-20s -%3.0f%%  %4i        ^7%4i,%3.0f%%^7\n", *(const char **)(_RBX - 3), xa, y, horzAlign, vertAlignb);
      _RBX += 8;
    }
    while ( (__int64)_RBX <= (__int64)&g_debugEntInfoSummary[29].countHighest );
    v18 = Com_sprintf(&dest[v10], 2048 - v10, "---------------------------------------\n");
    __asm { vmovss  xmm0, cs:?g_debugEntInfoSummary@@3PAUDebugInfoEntLogEntry@@A.percentHighest+3C0h; DebugInfoEntLogEntry near * g_debugEntInfoSummary }
    v20 = "^1";
    v21 = __CFADD__(v18, v10);
    v22 = v18 + v10;
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm2, xmm1, xmm1
      vmovss  xmm1, cs:?g_debugEntInfoSummary@@3PAUDebugInfoEntLogEntry@@A.percent+3C0h; DebugInfoEntLogEntry near * g_debugEntInfoSummary
      vcomiss xmm1, cs:__real@3f733333
      vmulss  xmm0, xmm1, xmm6
      vcvtss2sd xmm3, xmm0, xmm0
    }
    if ( v21 )
    {
      __asm { vcomiss xmm1, cs:__real@3f400000 }
      v28 = "^3";
      if ( v21 )
        v28 = "^7";
    }
    else
    {
      v28 = "^1";
    }
    __asm { vmovsd  [rsp+898h+color], xmm2 }
    LODWORD(scale) = g_debugEntInfoSummary[30].countHighest;
    LODWORD(vertAlign) = g_debugEntInfoSummary[30].limit;
    LODWORD(horzAlign) = g_debugEntInfoSummary[30].count;
    __asm { vmovsd  qword ptr [rsp+898h+y], xmm3 }
    v29 = Com_sprintf(&dest[v22], 2048 - v22, " %-20s -%s%3.0f%%  %4i^7/%4i   ^7%4i,%3.0f%%^7\n", g_debugEntInfoSummary[30].name, v28, yb, horzAlign, vertAlign, scale, *(double *)&color);
    __asm { vmovss  xmm0, cs:?g_debugEntInfoSummary@@3PAUDebugInfoEntLogEntry@@A.percentHighest+3E0h; DebugInfoEntLogEntry near * g_debugEntInfoSummary }
    v31 = __CFADD__(v29, v22);
    v32 = v29 + v22;
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm2, xmm1, xmm1
      vmovss  xmm1, cs:?g_debugEntInfoSummary@@3PAUDebugInfoEntLogEntry@@A.percent+3E0h; DebugInfoEntLogEntry near * g_debugEntInfoSummary
      vcomiss xmm1, cs:__real@3f733333
      vmulss  xmm0, xmm1, xmm6
      vmovaps xmm6, [rsp+898h+var_28]
      vcvtss2sd xmm3, xmm0, xmm0
    }
    if ( v31 )
    {
      __asm { vcomiss xmm1, cs:__real@3f400000 }
      v20 = "^3";
      if ( v31 )
        v20 = "^7";
    }
    __asm { vmovsd  [rsp+898h+color], xmm2 }
    LODWORD(scalea) = g_debugEntInfoSummary[31].countHighest;
    LODWORD(vertAligna) = g_debugEntInfoSummary[31].limit;
    LODWORD(horzAligna) = g_debugEntInfoSummary[31].count;
    __asm { vmovsd  qword ptr [rsp+898h+y], xmm3 }
    Com_sprintf(&dest[v32], 2048 - v32, " %-20s -%s%3.0f%%  %4i^7/%4i   ^7%4i,%3.0f%%^7\n", g_debugEntInfoSummary[31].name, v20, yc, horzAligna, vertAligna, scalea, *(double *)&colora);
    __asm
    {
      vmovss  xmm0, cs:MY_SCALE1
      vmovss  xmm1, cs:MY_X_0
      vmovss  [rsp+898h+scale], xmm0
      vmovss  xmm0, cs:MY_Y_1
      vmovss  [rsp+898h+y], xmm0
      vmovss  [rsp+898h+x], xmm1
    }
    UI_DrawText(v7, dest, 2048, smallDevFont, xb, yd, 1, 1, scalec, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawInputContext
==============
*/

void __fastcall CG_DrawDebug_DrawInputContext(LocalClientNum_t localClientNum, double _XMM1_8)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int64 v6; 
  InputContext ActiveInputContext; 
  unsigned int v8; 
  __int64 v9; 
  InputContext v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  float v43; 
  float v44; 
  float v45; 
  char dest[2048]; 

  CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; scale }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 1, *(float *)&_XMM2);
  v6 = Com_sprintf(dest, 0x800ui64, "InputContexts\n");
  ActiveInputContext = CL_Keys_GetActiveInputContext(localClientNum);
  v8 = 55;
  v9 = 55i64;
  if ( ActiveInputContext == (VEC3_POINTER|BYTE_VALUE) )
    v9 = 50i64;
  v10 = ActiveInputContext;
  v11 = Com_sprintf(&dest[v6], 2048 - (int)v6, "^%cInputContext::GLOBAL\n", v9) + v6;
  v12 = 55i64;
  if ( v10 == VEC3_VALUE )
    v12 = 50i64;
  v13 = Com_sprintf(&dest[v11], 2048 - v11, "^%cInputContext::COMMON\n", v12) + v11;
  v14 = 55i64;
  if ( v10 == FLOAT_VALUE )
    v14 = 50i64;
  v15 = Com_sprintf(&dest[v13], 2048 - v13, "^%cInputContext::COMMON_SP\n", v14) + v13;
  v16 = 55i64;
  if ( v10 == FLOAT_POINTER )
    v16 = 50i64;
  v17 = Com_sprintf(&dest[v15], 2048 - v15, "^%cInputContext::COMMON_MP\n", v16) + v15;
  v18 = 55i64;
  if ( v10 == (VEC3_POINTER|FLOAT_POINTER) )
    v18 = 50i64;
  v19 = Com_sprintf(&dest[v17], 2048 - v17, "^%cInputContext::COMMON_BR\n", v18) + v17;
  v20 = 55i64;
  if ( v10 == BYTE_VALUE )
    v20 = 50i64;
  v21 = Com_sprintf(&dest[v19], 2048 - v19, "^%cInputContext::ONFOOT\n", v20) + v19;
  v22 = 55i64;
  if ( v10 == INVALID )
    v22 = 50i64;
  v23 = Com_sprintf(&dest[v21], 2048 - v21, "^%cInputContext::ONFOOT_SP\n", v22) + v21;
  v24 = 55i64;
  if ( v10 == BOOL_VALUE )
    v24 = 50i64;
  v25 = Com_sprintf(&dest[v23], 2048 - v23, "^%cInputContext::ONFOOT_MP\n", v24) + v23;
  v26 = 55i64;
  if ( v10 == (STRUCT_POINTER|INT_VALUE) )
    v26 = 50i64;
  v27 = Com_sprintf(&dest[v25], 2048 - v25, "^%cInputContext::ONFOOT_BR\n", v26) + v25;
  v28 = 55i64;
  if ( v10 == VEC3_POINTER )
    v28 = 50i64;
  v29 = Com_sprintf(&dest[v27], 2048 - v27, "^%cInputContext::MENU\n", v28) + v27;
  v30 = 55i64;
  if ( v10 == INT_VALUE )
    v30 = 50i64;
  v31 = Com_sprintf(&dest[v29], 2048 - v29, "^%cInputContext::VEHICLE_FLYING\n", v30) + v29;
  v32 = 55i64;
  if ( v10 == BYTE_POINTER )
    v32 = 50i64;
  v33 = Com_sprintf(&dest[v31], 2048 - v31, "^%cInputContext::VEHICLE_GROUND\n", v32) + v31;
  v34 = 55i64;
  if ( v10 == STRUCT_POINTER )
    v34 = 50i64;
  v35 = Com_sprintf(&dest[v33], 2048 - v33, "^%cInputContext::CODCASTER\n", v34) + v33;
  v36 = 55i64;
  if ( v10 == (VEC3_POINTER|INT_VALUE) )
    v36 = 50i64;
  v37 = Com_sprintf(&dest[v35], 2048 - v35, "^%cInputContext::CODCASTER_AERIALCAM\n", v36) + v35;
  v38 = 55i64;
  if ( v10 == (STRUCT_POINTER|BYTE_VALUE) )
    v38 = 50i64;
  v39 = Com_sprintf(&dest[v37], 2048 - v37, "^%cInputContext::CODCASTER_FREECAM\n", v38) + v37;
  if ( v10 == (STRUCT_POINTER|FLOAT_POINTER) )
    v8 = 50;
  Com_sprintf(&dest[v39], 2048 - v39, "^%cInputContext::INVALID\n", v8);
  __asm
  {
    vmovss  xmm0, cs:__real@3e4ccccd
    vmovss  [rsp+888h+var_848], xmm0
    vmovss  xmm0, cs:__real@41c80000
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+888h+var_860], xmm0
    vmovss  [rsp+888h+var_868], xmm1
  }
  UI_DrawText(ActivePlacement, dest, 2048, FontHandle, v43, v44, 1, 1, v45, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawLGVDebugOverlay
==============
*/
void CG_DrawDebug_DrawLGVDebugOverlay(LocalClientNum_t localClientNum)
{
  const LightGridVolumesMaxUsageStats *UsageStats; 
  GfxFont *font; 
  __int64 v15; 
  const char *s; 
  GfxFont *smallDevFont; 
  const char *v35; 
  GfxFont *v39; 
  const char *v43; 
  GfxFont *v47; 
  const char *v51; 
  GfxFont *v55; 
  const char *v59; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( r_lgvDebugOverlay->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
      vmovaps xmmword ptr [r11-38h], xmm9
    }
    _RSI = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+2Ch]
      vaddss  xmm6, xmm0, cs:__real@41a00000
      vmovss  xmm7, dword ptr [rax+28h]
    }
    UsageStats = R_LGV_GetUsageStats();
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm3
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v66, "LightGridVolumes:", &colorGreen, 5, cls.smallDevFont);
    __asm { vaddss  xmm7, xmm7, cs:__real@41200000 }
    font = cls.smallDevFont;
    v15 = 78i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    if ( rg.useLightGridVolumes )
      v15 = 89i64;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    s = j_va("Enabled: %c", v15);
    __asm
    {
      vmovss  xmm9, cs:__real@3f333333
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm9
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v67, s, &colorWhite, 5, font);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm9
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v68, "High Watermarks", &colorWhite, 5, cls.smallDevFont);
    __asm { vaddss  xmm7, xmm7, cs:__real@41200000 }
    smallDevFont = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v35 = j_va("Packing 3d: %u / %u", UsageStats->packing3dHighWatermark, 16i64);
    __asm
    {
      vmovss  [rsp+88h+var_68], xmm9
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v69, v35, &colorWhite, 5, smallDevFont);
    v39 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v43 = j_va("Volumes: %u / %u", UsageStats->volumesUsed, 0x4000i64);
    __asm
    {
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm9
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v70, v43, &colorWhite, 5, v39);
    v47 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v51 = j_va("Probes: %u", UsageStats->volumeProbesUsed);
    __asm
    {
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm9
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v51, &colorWhite, 5, v47);
    v55 = cls.smallDevFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    v59 = j_va("History: %u / %u", UsageStats->historyEntriesUsed, 49152i64);
    __asm
    {
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  [rsp+88h+var_68], xmm9
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v72, v59, &colorWhite, 5, v55);
    __asm
    {
      vmovaps xmm9, [rsp+88h+var_38]
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm6, [rsp+88h+var_18]
    }
  }
}

/*
==============
CG_DrawDebug_DrawLadder
==============
*/
void CG_DrawDebug_DrawLadder(LocalClientNum_t localClientNum, CgDebugDrawLadderType eType)
{
  cg_t *LocalClientGlobals; 
  BgStatic *ActiveStatics; 
  unsigned int clientNum; 
  CgStatic *v7; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v9; 
  const DObj *viewModelDObj; 
  unsigned int XAnimIndex; 
  unsigned int animationNumber; 
  unsigned int animsetIndex; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ActiveStatics = BgStatic::GetActiveStatics();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v7 = (CgStatic *)ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(v7, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)v7->GetClientInfo(v7, clientNum);
  v9 = CharacterInfo;
  if ( eType == CG_DEBUG_DRAW_LADDER_VM && BG_HasLadderHand(&LocalClientGlobals->predictedPlayerState) )
  {
    viewModelDObj = LocalClientGlobals->m_weaponHand[1].viewModelDObj;
    XAnimIndex = 376;
  }
  else
  {
    if ( !PlayerASM_IsEnabled() )
      return;
    viewModelDObj = Com_GetClientDObj(LocalClientGlobals->predictedPlayerState.clientNum, localClientNum);
    if ( eType == CG_DEBUG_DRAW_LADDER_LEGS )
    {
      animationNumber = v9->legs.animationNumber;
      animsetIndex = v9->legs.animsetIndex;
    }
    else
    {
      animationNumber = v9->torso.animationNumber;
      animsetIndex = v9->torso.animsetIndex;
    }
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(animsetIndex, animationNumber);
  }
  if ( viewModelDObj )
  {
    if ( XAnimIsCustomNodeByName(viewModelDObj->tree->anims, XAnimIndex, scr_const.xanimLadderClimb) )
      XAnimLadderClimb_DrawDebug(viewModelDObj, XAnimIndex);
  }
}

/*
==============
CG_DrawDebug_DrawLight
==============
*/

void __fastcall CG_DrawDebug_DrawLight(const GfxLight *light, const vec3_t *colorGammaSrgb, const vec3_t *cameraPos, double drawRadiusSquared, float drawRadiusDetailSquared, int lightIndex, bool forceDraw)
{
  int integer; 
  unsigned int type; 
  bool v41; 
  int v42; 
  bool v43; 
  char v97; 
  char v98; 
  const char *v127; 
  char v128; 
  char v129; 
  bool v144; 
  const char *v145; 
  char v157; 
  unsigned __int8 v173; 
  char v185; 
  bool v186; 
  __int64 v258; 
  int duration; 
  double durationa; 
  double durationb; 
  double durationc; 
  int durationd; 
  int duratione; 
  vec4_t *v276; 
  vec4_t color; 
  vec3_t origin; 
  vec3_t center; 
  vec3_t v282; 
  vec3_t start; 
  vec3_t end; 
  char dest[128]; 
  char string[2048]; 
  char v291; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm10, cs:__real@3f800000
    vmovss  dword ptr [rsp+9B0h+color], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vxorps  xmm11, xmm11, xmm11
    vmovss  dword ptr [rsp+9B0h+color+8], xmm0
    vmovss  [rsp+9B0h+var_96C], xmm11
    vmovss  dword ptr [rsp+9B0h+color+4], xmm1
    vmovss  dword ptr [rsp+9B0h+color+0Ch], xmm10
    vmovaps xmm5, xmm3
  }
  _RBX = light;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( !forceDraw )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+38h]
      vsubss  xmm3, xmm0, dword ptr [r8]
      vmovss  xmm1, dword ptr [rcx+3Ch]
      vsubss  xmm2, xmm1, dword ptr [r8+4]
      vmovss  xmm0, dword ptr [rcx+40h]
      vsubss  xmm4, xmm0, dword ptr [r8+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm5
      vmovss  xmm0, cs:__real@3f8147ae
      vcomiss xmm0, dword ptr [rcx+44h]
    }
    if ( (light->flags & 0x10) != 0 )
      goto LABEL_73;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+18h]
      vmaxss  xmm1, xmm0, dword ptr [rcx+14h]
      vmaxss  xmm2, xmm1, dword ptr [rcx+1Ch]
      vmulss  xmm3, xmm2, dword ptr [rcx+10h]
      vucomiss xmm3, xmm9
    }
    if ( (light->flags & 0x10) == 0 )
    {
      if ( frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo )
        __asm { vcomiss xmm9, dword ptr [rbx+8] }
      goto LABEL_73;
    }
    if ( r_debugDrawLightsFilterShadowCasters && (unsigned __int8)(light->type - 2) <= 1u )
    {
      integer = r_debugDrawLightsFilterShadowCasters->current.integer;
      if ( integer )
      {
        if ( integer == 2 )
        {
          if ( !light->canUseShadowMap || light->needsDynamicShadows )
            goto LABEL_73;
        }
        else if ( integer == 3 && (!light->canUseShadowMap || !light->needsDynamicShadows) )
        {
          goto LABEL_73;
        }
      }
      else if ( light->canUseShadowMap )
      {
        goto LABEL_73;
      }
    }
  }
  __asm
  {
    vmovaps xmmword ptr [rsp+9B0h+var_28+8], xmm6
    vmovaps [rsp+9B0h+var_38+8], xmm7
    vmovaps [rsp+9B0h+var_48+8], xmm8
  }
  CG_DebugStar(&light->origin, &color, 0, 0);
  type = _RBX->type;
  v41 = type < 2;
  v42 = type - 2;
  if ( v42 )
  {
    v43 = v42 == 0;
    if ( v42 == 1 )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+44h]; radius }
      CG_DebugSphere(&_RBX->origin, *(float *)&_XMM1, &color, v42, 0);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  xmm1, dword ptr [rbx+28h]
      vxorps  xmm6, xmm0, xmm2
      vmovss  xmm0, dword ptr [rbx+24h]
      vxorps  xmm7, xmm0, xmm2
      vxorps  xmm11, xmm1, xmm2
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm11, xmm11
      vaddss  xmm2, xmm3, xmm1
      vsubss  xmm0, xmm2, xmm10
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3b03126f
    }
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7011, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( coneDir ))", (const char *)&queryFormat, "Vec3IsNormalized( coneDir )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+44h]
      vmovss  xmm5, dword ptr [rbx+58h]
      vmovss  xmm4, dword ptr [rbx+54h]
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      vmovss  xmm6, dword ptr [rbx+5Ch]
      vmovss  dword ptr [rsp+9B0h+origin], xmm1
      vmulss  xmm2, xmm7, xmm8
      vaddss  xmm0, xmm2, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rsp+9B0h+origin+4], xmm0
      vmovss  xmm0, dword ptr [rbx+64h]
      vmulss  xmm7, xmm8, xmm8
      vmulss  xmm1, xmm11, xmm8
      vaddss  xmm2, xmm1, dword ptr [rbx+40h]
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+9B0h+origin+8], xmm2
      vdivss  xmm2, xmm7, xmm1
      vsubss  xmm3, xmm2, xmm7
      vsqrtss xmm0, xmm3, xmm3
      vmovss  [rsp+9B0h+var_96C], xmm0
      vmovss  xmm0, dword ptr [rbx+60h]
      vmulss  xmm0, xmm0, xmm0
      vdivss  xmm1, xmm7, xmm0
      vsubss  xmm2, xmm1, xmm7
      vsqrtss xmm3, xmm2, xmm2; radiusFar
      vmulss  xmm4, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm4, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm2, xmm2, xmm2; radiusNear
      vmovss  [rsp+9B0h+duration], xmm8
    }
    CG_DebugSphericalSectorFrustum(&origin, &_RBX->dir, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&duration, &color, 1, 0);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vsubss  xmm3, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vsubss  xmm2, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+40h]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, [rbp+8B0h+drawRadiusDetailSquared]
  }
  if ( v43 )
  {
    memset_0(string, 0, sizeof(string));
    memset_0(dest, 0, sizeof(dest));
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]; X
      vmovss  xmm11, cs:__real@3b4d2e1c
      vcomiss xmm0, xmm11
      vmovss  xmm7, dword ptr [rbx+18h]
      vmovss  xmm8, dword ptr [rbx+1Ch]
      vmovss  xmm6, cs:__real@414eb852
    }
    if ( v97 | v98 )
    {
      __asm { vmulss  xmm0, xmm0, xmm6 }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm0, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vcomiss xmm7, xmm11
      vmovss  [rsp+9B0h+var_970], xmm0
      vmovaps xmmword ptr [rsp+9B0h+var_88+8], xmm15
    }
    if ( v97 | v98 )
    {
      __asm { vmulss  xmm15, xmm7, xmm6 }
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
        vsubss  xmm15, xmm1, cs:__real@3d6147ae
      }
    }
    __asm { vcomiss xmm8, xmm11 }
    if ( v97 | v98 )
    {
      __asm { vmulss  xmm8, xmm8, xmm6 }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3ed55555; Y
        vmovaps xmm0, xmm8; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm8, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vcomiss xmm9, dword ptr [rbx+70h]
      vmovss  xmm11, dword ptr [rbx+10h]
      vmovaps xmm6, xmm10
    }
    if ( v97 )
    {
      _RAX = r_lightIntensityAutoScaleMax;
      __asm
      {
        vdivss  xmm0, xmm10, cs:?rg@@3Ur_globals_t@@A.tonemapStaticExposureLinear; val
        vmovss  xmm2, dword ptr [rax+28h]; max
      }
      _RAX = r_lightIntensityAutoScaleMin;
      __asm { vmovss  xmm1, dword ptr [rax+28h]; min }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm10, dword ptr [rbx+70h]
        vmulss  xmm0, xmm0, dword ptr [rax+28h]
        vmulss  xmm2, xmm0, dword ptr [rbx+70h]
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm11, xmm11, xmm6
      }
    }
    if ( lightIndex )
    {
      Com_sprintf(dest, 0x80ui64, "P(%d) ", (unsigned int)lightIndex);
      I_strcat(string, 0x800ui64, dest);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+44h]
      vcvtss2sd xmm0, xmm0, xmm0
    }
    v127 = "OM";
    if ( _RBX->type == 2 )
      v127 = "SP";
    __asm { vmovsd  qword ptr [rsp+9B0h+duration], xmm0 }
    Com_sprintf(dest, 0x80ui64, "%s R:%.0f ", v127, durationa);
    I_strcat(string, 0x800ui64, dest);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+54h]
      vmovss  xmm2, dword ptr [rbx+58h]
      vmovss  xmm3, dword ptr [rbx+5Ch]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vcomiss xmm0, xmm10
    }
    if ( !(v128 | v129) )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x80ui64, "BL:%.0f ", *(double *)&_XMM3);
      I_strcat(string, 0x800ui64, dest);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+50h]
      vcomiss xmm0, xmm10
    }
    if ( !(v128 | v129) )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x80ui64, "BR:%.0f ", *(double *)&_XMM3);
      I_strcat(string, 0x800ui64, dest);
    }
    if ( _RBX->isVolumetric )
    {
      Com_sprintf(dest, 0x80ui64, "%s ", "V");
      I_strcat(string, 0x800ui64, dest);
    }
    v144 = _RBX->canUseShadowMap == 0;
    if ( _RBX->canUseShadowMap )
    {
      v145 = "SH";
      if ( _RBX->needsDynamicShadows )
        v145 = "SH+D";
      Com_sprintf(dest, 0x80ui64, "%s ", v145);
      I_strcat(string, 0x800ui64, dest);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+80h]
        vucomiss xmm0, xmm9
      }
      if ( !v144 )
      {
        __asm
        {
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x80ui64, "SA:%.2f ", *(double *)&_XMM3);
        I_strcat(string, 0x800ui64, dest);
      }
    }
    __asm
    {
      vucomiss xmm11, xmm9
      vmovss  xmm7, cs:__real@3b04d490
    }
    if ( !v144 )
    {
      __asm
      {
        vmovss  xmm2, [rsp+9B0h+var_970]
        vmaxss  xmm0, xmm15, xmm2
        vmaxss  xmm1, xmm0, xmm8
        vucomiss xmm1, xmm9
        vcvtss2sd xmm0, xmm8, xmm8
        vcvtss2sd xmm3, xmm2, xmm2
        vcvtss2sd xmm1, xmm15, xmm15
        vmovsd  [rsp+9B0h+var_988], xmm0
        vmovq   r9, xmm3
        vmovsd  qword ptr [rsp+9B0h+duration], xmm1
      }
      Com_sprintf(dest, 0x80ui64, "C:(%.2f,%.2f,%.2f) ", *(double *)&_XMM3, durationb, *(double *)&v276);
      I_strcat(string, 0x800ui64, dest);
      __asm
      {
        vucomiss xmm6, xmm10
        vmovss  xmm0, dword ptr [rbx+10h]
        vmulss  xmm1, xmm0, xmm7
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      if ( v157 )
      {
        Com_sprintf(dest, 0x80ui64, "I:%.2f ", *(double *)&_XMM3);
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  qword ptr [rsp+9B0h+duration], xmm0
        }
        Com_sprintf(dest, 0x80ui64, "I:%.2f*%.2f ", *(double *)&_XMM3, durationc);
      }
      I_strcat(string, 0x800ui64, dest);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vucomiss xmm0, xmm9
      vmovaps xmm15, xmmword ptr [rsp+9B0h+var_88+8]
    }
    if ( !v144 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x80ui64, "UV:%.2f ", *(double *)&_XMM3);
      I_strcat(string, 0x800ui64, dest);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vucomiss xmm0, xmm9
    }
    if ( !v144 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x80ui64, "IR:%.2f ", *(double *)&_XMM3);
      I_strcat(string, 0x800ui64, dest);
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vmovss  [rsp+9B0h+duration], xmm0
    }
    CG_DebugStarWithText(&_RBX->origin, &color, &color, string, *(float *)&durationd, 0);
    v173 = _RBX->type;
    if ( _RBX->type == 2 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+54h]
        vmovss  xmm2, dword ptr [rbx+58h]
        vmovss  xmm4, dword ptr [rbx+5Ch]
        vmovss  xmm3, [rsp+9B0h+var_96C]; radiusFar
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rbx+44h]
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm2, xmm2, xmm2; radiusNear
        vmovss  [rsp+9B0h+duration], xmm0
      }
      CG_DebugSphericalSectorFrustum(&origin, &_RBX->dir, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&duratione, &colorRedHeat, 1, 0);
      v173 = _RBX->type;
    }
    v186 = v173 == 2;
    v185 = v173 - 2;
    if ( v186 || v185 == 1 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+58h]
        vmovss  xmm7, dword ptr [rbx+54h]
        vmovss  xmm8, dword ptr [rbx+5Ch]
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, cs:__real@3c23d70a
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm0
      }
      if ( !v186 && v185 != 1 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+50h]; radius
          vcomiss xmm2, xmm0
        }
        if ( !v186 && v185 != 1 )
        {
          __asm
          {
            vmovss  xmm5, dword ptr [rbx+38h]
            vmovss  xmm4, dword ptr [rbx+3Ch]
            vmovss  xmm3, dword ptr [rbx+40h]
            vsubss  xmm0, xmm5, xmm7
            vsubss  xmm1, xmm4, xmm6
            vmovss  dword ptr [rbp+8B0h+start], xmm0
            vmovss  dword ptr [rbp+8B0h+start+4], xmm1
            vsubss  xmm0, xmm3, xmm8
            vaddss  xmm1, xmm5, xmm7
            vmovss  dword ptr [rbp+8B0h+start+8], xmm0
            vmovss  dword ptr [rbp+8B0h+end], xmm1
            vaddss  xmm0, xmm4, xmm6
            vaddss  xmm1, xmm3, xmm8
            vmovss  dword ptr [rbp+8B0h+end+4], xmm0
            vmovss  dword ptr [rbp+8B0h+end+8], xmm1
          }
          CG_DebugCapsule(&start, &end, *(float *)&_XMM2, &color, 1, 0);
          __asm
          {
            vmovss  xmm5, dword ptr [rbx+58h]
            vmovss  xmm4, dword ptr [rbx+54h]
            vmovss  xmm6, dword ptr [rbx+5Ch]
            vmulss  xmm0, xmm5, xmm5
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm10, xmm0
            vmovss  xmm3, dword ptr [rbx+50h]
            vdivss  xmm2, xmm10, xmm0
            vmulss  xmm0, xmm4, xmm2
            vmulss  xmm4, xmm0, xmm3
            vmulss  xmm1, xmm5, xmm2
            vmulss  xmm0, xmm6, xmm2
            vmovss  xmm2, dword ptr [rbp+8B0h+start+4]
            vmulss  xmm5, xmm1, xmm3
            vmovss  xmm1, dword ptr [rbp+8B0h+start]
            vmulss  xmm3, xmm0, xmm3
            vsubss  xmm0, xmm1, xmm4
            vsubss  xmm1, xmm2, xmm5
            vmovss  dword ptr [rsp+9B0h+center], xmm0
            vmovss  xmm0, dword ptr [rbp+8B0h+start+8]
            vsubss  xmm2, xmm0, xmm3
            vmovss  dword ptr [rsp+9B0h+center+8], xmm2
            vmovss  dword ptr [rsp+9B0h+var_93C], xmm4
            vmovss  dword ptr [rsp+9B0h+var_93C+4], xmm5
            vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm3
            vmovss  dword ptr [rsp+9B0h+center+4], xmm1
          }
          CG_DebugLine(&center, &start, &color, 1, 0);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+9B0h+var_93C]
            vaddss  xmm1, xmm0, dword ptr [rbp+8B0h+end]
            vmovss  xmm2, dword ptr [rsp+9B0h+var_93C+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+8B0h+end+4]
            vmovss  dword ptr [rsp+9B0h+var_93C], xmm1
            vmovss  xmm1, dword ptr [rsp+9B0h+var_93C+8]
            vaddss  xmm2, xmm1, dword ptr [rbp+8B0h+end+8]
            vmovss  dword ptr [rsp+9B0h+var_93C+8], xmm2
            vmovss  dword ptr [rsp+9B0h+var_93C+4], xmm0
          }
          CG_DebugLine(&end, &v282, &color, 1, 0);
          CG_DebugLine(&start, &end, &color, 1, 0);
          __asm
          {
            vmovss  xmm4, dword ptr [rbx+54h]
            vmovss  xmm6, dword ptr [rbx+58h]
            vmovss  xmm5, dword ptr [rbx+5Ch]
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm0, xmm2, xmm2
            vmulss  xmm3, xmm0, cs:__real@3d800000
            vmovss  xmm0, cs:__real@40000000
            vxorps  xmm1, xmm1, xmm1
            vcvttss2si rcx, xmm3
            vcvtsi2ss xmm1, xmm1, rax
            vdivss  xmm2, xmm0, xmm1
            vmovss  xmm1, dword ptr [rbp+8B0h+start]
            vmovss  xmm0, dword ptr [rbp+8B0h+start+4]
            vmovss  dword ptr [rsp+9B0h+center], xmm1
            vmovss  xmm1, dword ptr [rbp+8B0h+start+8]
            vmovss  dword ptr [rsp+9B0h+center+8], xmm1
            vmovss  dword ptr [rsp+9B0h+center+4], xmm0
            vmulss  xmm7, xmm4, xmm2
            vmulss  xmm6, xmm6, xmm2
            vmulss  xmm8, xmm5, xmm2
          }
          v258 = (unsigned int)(2 * _RCX + 1);
          do
          {
            __asm { vmovss  xmm1, dword ptr [rbx+50h]; radius }
            CG_DebugCircle(&center, *(float *)&_XMM1, &_RBX->bulbLength, &color, 1, 0);
            __asm
            {
              vaddss  xmm1, xmm7, dword ptr [rsp+9B0h+center]
              vaddss  xmm0, xmm6, dword ptr [rsp+9B0h+center+4]
              vaddss  xmm2, xmm8, dword ptr [rsp+9B0h+center+8]
              vmovss  dword ptr [rsp+9B0h+center], xmm1
              vmovss  dword ptr [rsp+9B0h+center+4], xmm0
              vmovss  dword ptr [rsp+9B0h+center+8], xmm2
            }
            --v258;
          }
          while ( v258 );
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+9B0h+var_38+8]
    vmovaps xmm6, xmmword ptr [rsp+9B0h+var_28+8]
    vmovaps xmm8, [rsp+9B0h+var_48+8]
  }
LABEL_73:
  _R11 = &v291;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_DrawDebug_DrawLights
==============
*/
void CG_DrawDebug_DrawLights(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  int integer; 
  bool v15; 
  unsigned int lightIndex; 
  unsigned int v18; 
  __int64 v19; 
  GfxLight *v20; 
  unsigned int flags; 
  int v22; 
  bool ShouldDrawLight; 
  bool IsPrimaryLightLoaded; 
  int v25; 
  int v26; 
  bool v30; 
  volatile int v32; 
  _BOOL8 v35; 
  int v36; 
  int v37; 
  bool v38; 
  volatile int v48; 
  _BOOL8 v50; 
  int v51; 
  int v52; 
  bool v53; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float v71; 
  float v73; 
  vec3_t result; 
  vec3_t outOrg; 
  vec3_t colorGammaSrgb; 
  vec3_t v77; 
  vec3_t v78; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( r_debugDrawLights && r_debugDrawLights->current.integer )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7292, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _RAX = r_debugDrawLightsDrawRadius;
    v8 = r_debugDrawLights;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
    _RAX = r_debugDrawLightsDrawDetailRadius;
    integer = r_debugDrawLights->current.integer;
    __asm
    {
      vmulss  xmm8, xmm0, xmm0
      vmovss  xmm1, dword ptr [rax+28h]
      vmulss  xmm9, xmm1, xmm1
    }
    v15 = ((integer - 2) & 0xFFFFFFFC) == 0 && integer != 4;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( integer == 1 || v15 )
    {
      lightIndex = 0;
      v18 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      if ( v18 )
      {
        v19 = 0i64;
        do
        {
          v20 = &rgp.world->primaryLights[v19];
          flags = v20->flags;
          if ( (flags & 2) != 0 )
            v22 = 1;
          else
            v22 = (flags & 4) != 0 ? 3 : 0;
          ShouldDrawLight = CG_DrawDebug_ShouldDrawLight((DbgLightType)v22);
          if ( ShouldDrawLight )
          {
            IsPrimaryLightLoaded = R_IsPrimaryLightLoaded(frontEndDataOut, lightIndex);
            v25 = r_debugDrawTransientLights->current.integer;
            if ( !v25 )
              goto LABEL_24;
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 == 1 )
                ShouldDrawLight = !IsPrimaryLightLoaded;
            }
            else
            {
              ShouldDrawLight = IsPrimaryLightLoaded;
            }
            if ( ShouldDrawLight )
            {
LABEL_24:
              _RAX = CG_DrawDebug_GetLightColor(&result, v20, (DbgLightType)v22);
              __asm { vmovsd  xmm0, qword ptr [rax] }
              colorGammaSrgb.v[2] = _RAX->v[2];
              _RAX = r_debugDrawLightsDrawRadius;
              __asm
              {
                vmovsd  qword ptr [rbp+0A0h+colorGammaSrgb], xmm0
                vucomiss xmm7, dword ptr [rax+28h]
              }
              v30 = v38;
              __asm
              {
                vmovaps xmm3, xmm8; drawRadiusSquared
                vmovss  dword ptr [rsp+1A0h+fmt], xmm9
              }
              CG_DrawDebug_DrawLight(v20, &colorGammaSrgb, &outOrg, *(double *)&_XMM3, fmt, lightIndex, v30);
            }
          }
          ++lightIndex;
          ++v19;
        }
        while ( lightIndex < v18 );
        v8 = r_debugDrawLights;
      }
    }
    if ( integer == 1 || ((v8->current.integer - 4) & 0xFFFFFFFD) == 0 )
    {
      v32 = 0;
      __asm
      {
        vmovaps [rsp+1A0h+var_38+8], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      if ( scene.dynamicSpotLightCount > 0 )
      {
        _RBX = &scene.dynamicSpotLight[0].lightCommon.colorLinearSrgb.v[2];
        do
        {
          v35 = ((_DWORD)_RBX[20] & 1) == 0;
          v36 = 2 * v35 + 2;
          v37 = r_debugDrawLights->current.integer;
          switch ( v37 )
          {
            case 1:
              goto $LN290_0;
            case 2:
              v38 = v36 == 0;
              goto LABEL_38;
            case 4:
              v38 = v36 == 2;
              goto LABEL_38;
            case 6:
              v38 = v36 == 4;
LABEL_38:
              if ( v38 )
              {
$LN290_0:
                __asm
                {
                  vmovups ymm0, cs:__ymm@3f8000003f80000000000000000000003f8000003f8000003f8000003f800000; jumptable 0000000141C59102 case 1
                  vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
                  vmovups [rbp+0A0h+var_F0], ymm0
                  vmovups [rbp+0A0h+var_D0], xmm1
                  vmovss  [rbp+0A0h+var_C0], xmm7
                  vmovss  [rbp+0A0h+var_BC], xmm6
                  vmovss  [rbp+0A0h+var_B8], xmm7
                }
                if ( v37 == 1 )
                {
                  _RAX = 3 * v35;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+rax*8+0A0h+var_F0+18h]
                    vmovss  xmm1, dword ptr [rbp+rax*8+0A0h+var_F0+1Ch]
                    vmovss  [rsp+1A0h+var_160], xmm0
                    vmovss  xmm0, dword ptr [rbp+rax*8+0A0h+var_D0]
                  }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx-8]
                    vmovss  xmm1, dword ptr [rbx-4]
                    vmovss  [rsp+1A0h+var_160], xmm0
                    vmovss  xmm0, dword ptr [rbx]
                  }
                }
                __asm
                {
                  vmovss  dword ptr [rsp+1A0h+var_158], xmm0
                  vmovss  dword ptr [rsp+44h], xmm1
                  vmovsd  xmm0, qword ptr [rsp+1A0h+var_160]
                  vmovaps xmm3, xmm8; drawRadiusSquared
                  vmovsd  qword ptr [rbp+0A0h+var_110], xmm0
                  vmovss  dword ptr [rsp+1A0h+fmt], xmm9
                }
                v77.v[2] = v71;
                CG_DrawDebug_DrawLight((const GfxLight *)(_RBX - 7), &v77, &outOrg, *(double *)&_XMM3, fmta, 0, 0);
              }
              break;
            default:
              break;
          }
          ++v32;
          _RBX += 76;
        }
        while ( v32 < scene.dynamicSpotLightCount );
      }
      v48 = 0;
      if ( scene.dynamicOmniLightCount > 0 )
      {
        _RBX = &scene.dynamicOmniLight[0].lightCommon.colorLinearSrgb.v[2];
        do
        {
          v50 = ((_DWORD)_RBX[20] & 1) == 0;
          v51 = 2 * v50 + 2;
          v52 = r_debugDrawLights->current.integer;
          switch ( v52 )
          {
            case 1:
              goto $LN291;
            case 2:
              v53 = v51 == 0;
              goto LABEL_50;
            case 4:
              v53 = v51 == 2;
              goto LABEL_50;
            case 6:
              v53 = v51 == 4;
LABEL_50:
              if ( v53 )
              {
$LN291:
                __asm
                {
                  vmovups ymm0, cs:__ymm@3f8000003f80000000000000000000003f8000003f8000003f8000003f800000; jumptable 0000000141C59225 case 1
                  vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
                  vmovups [rbp+0A0h+var_B0], ymm0
                  vmovups [rbp+0A0h+var_90], xmm1
                  vmovss  [rbp+0A0h+var_80], xmm7
                  vmovss  [rbp+0A0h+var_7C], xmm6
                  vmovss  [rbp+0A0h+var_78], xmm7
                }
                if ( v52 == 1 )
                {
                  _RAX = 3 * v50;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+rax*8+0A0h+var_B0+18h]
                    vmovss  xmm1, dword ptr [rbp+rax*8+0A0h+var_B0+1Ch]
                    vmovss  [rsp+1A0h+var_150], xmm0
                    vmovss  xmm0, dword ptr [rbp+rax*8+0A0h+var_90]
                  }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx-8]
                    vmovss  xmm1, dword ptr [rbx-4]
                    vmovss  [rsp+1A0h+var_150], xmm0
                    vmovss  xmm0, dword ptr [rbx]
                  }
                }
                __asm
                {
                  vmovss  dword ptr [rsp+1A0h+var_148], xmm0
                  vmovss  dword ptr [rsp+54h], xmm1
                  vmovsd  xmm0, qword ptr [rsp+1A0h+var_150]
                  vmovaps xmm3, xmm8; drawRadiusSquared
                  vmovsd  qword ptr [rbp+0A0h+var_100], xmm0
                  vmovss  dword ptr [rsp+1A0h+fmt], xmm9
                }
                v78.v[2] = v73;
                CG_DrawDebug_DrawLight((const GfxLight *)(_RBX - 7), &v78, &outOrg, *(double *)&_XMM3, fmtb, 0, 0);
              }
              break;
            default:
              break;
          }
          ++v48;
          _RBX += 76;
        }
        while ( v48 < scene.dynamicOmniLightCount );
      }
      __asm { vmovaps xmm6, [rsp+1A0h+var_38+8] }
    }
    __asm
    {
      vmovaps xmm7, [rsp+1A0h+var_48+8]
      vmovaps xmm8, [rsp+1A0h+var_58+8]
      vmovaps xmm9, [rsp+1A0h+var_68+8]
    }
  }
}

/*
==============
CG_DrawDebug_DrawLineOfSightLatency
==============
*/

void __fastcall CG_DrawDebug_DrawLineOfSightLatency(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const dvar_t *v9; 
  int integer; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const cpose_t *Pose; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  DObjAnimMat *RotTransArray; 
  const vec4_t *v58; 
  char v67; 
  char v68; 
  const char *v98; 
  __int64 v102; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t lineStart; 
  vec3_t center; 
  vec3_t outOrigin; 
  vec3_t xyz; 
  tmat33_t<vec3_t> forward; 
  tmat33_t<vec3_t> axis; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v117; 
  char v118; 
  tmat33_t<vec3_t> outTagMat; 

  v9 = DVARINT_cg_drawLOSLatency;
  inOutIndex[0] = -2;
  if ( !DVARINT_cg_drawLOSLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLOSLatency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( integer >= 0 )
  {
    Entity = CG_GetEntity(localClientNum, integer);
    if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
    {
      ClientDObj = Com_GetClientDObj(integer, localClientNum);
      if ( !ClientDObj )
      {
        Com_Printf(0, "CG_DrawDebug_DrawLineOfSightLatency: Entity %i is not a dynamic object.\n", (unsigned int)integer);
        Dvar_SetInt_Internal(DVARINT_cg_drawLOSLatency, -1);
        return;
      }
      Pose = CG_GetPose(localClientNum, integer);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5901, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      _R15 = CG_GetLocalClientGlobals(localClientNum);
      if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5904, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( DObjGetBoneIndexInternal_46(ClientDObj, scr_const.j_head, inOutIndex, &modelIndex) )
      {
        __asm
        {
          vmovaps [rsp+1C0h+var_50], xmm8
          vmovaps [rsp+1C0h+var_60], xmm9
        }
        if ( CG_IsPlayerEntityNumber(&_R15->predictedPlayerState, integer) )
        {
          if ( !_R15->renderingThirdPerson )
          {
            Instance = CgWeaponMap::GetInstance(localClientNum);
            if ( !BG_IsThirdPersonMode(Instance, &_R15->predictedPlayerState) )
            {
LABEL_39:
              __asm
              {
                vmovaps xmm8, [rsp+1C0h+var_50]
                vmovaps xmm9, [rsp+1C0h+var_60]
              }
              return;
            }
          }
          CG_GetPlayerViewOrigin(localClientNum, &_R15->predictedPlayerState, &outOrigin);
          Handler = CgHandler::getHandler(localClientNum);
          BG_GetPlayerViewDirection(&_R15->predictedPlayerState, forward.m, &forward.m[1], &forward.m[2], Handler, 0);
          __asm
          {
            vmovss  xmm8, dword ptr [r15+44h]
            vmovss  xmm9, dword ptr [r15+48h]
          }
        }
        else
        {
          _R14 = CG_GetCharacterInfo(_R15, integer);
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5935, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          if ( !_R14->infoValid )
            goto LABEL_39;
          CG_CalcEyePoint(localClientNum, integer, &outOrigin);
          CG_GetViewDirection(localClientNum, integer, forward.m, &forward.m[1], &forward.m[2]);
          __asm
          {
            vmovss  xmm0, dword ptr [r14+0A10h]
            vmulss  xmm0, xmm0, cs:__real@3c8efa35
          }
          *(double *)&_XMM0 = j___libm_sse2_sincosf_(v24, v23, v25, v26);
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, dword ptr [r14+147Ch]
            vshufps xmm1, xmm0, xmm0, 1
            vmulss  xmm8, xmm1, xmm2
            vmulss  xmm9, xmm0, xmm2
          }
        }
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v117);
        bitarray_base<bitarray<256>>::setBit(&v117, inOutIndex[0]);
        CG_LocationTraceDobjCalcPose(ClientDObj, Pose, (DObjPartBits *)&v117);
        if ( CG_DObjGetWorldBoneMatrix(Pose, ClientDObj, inOutIndex[0], &outTagMat, &lineStart) )
        {
          __asm
          {
            vmovaps [rsp+1C0h+var_30], xmm6
            vmovaps [rsp+1C0h+var_40], xmm7
            vmovaps [rsp+1C0h+var_80], xmm11
          }
          _RBX = (char *)DObjGetBoneInfoForBoneIndex(ClientDObj, inOutIndex[0]);
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5965, ASSERT_TYPE_ASSERT, "(boneInfo)", (const char *)&queryFormat, "boneInfo") )
            __debugbreak();
          RotTransArray = DObjGetRotTransArray(ClientDObj);
          QuatToAxis(&RotTransArray[inOutIndex[0]].quat, &axis);
          if ( _RBX == &v118 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
            __debugbreak();
          __asm
          {
            vmovss  xmm4, dword ptr [rbx]
            vmovss  xmm5, dword ptr [rbx+4]
            vmovss  xmm6, dword ptr [rbx+8]
            vmulss  xmm1, xmm4, dword ptr [rbp+0C0h+axis]
            vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+axis+0Ch]
            vmovss  xmm7, cs:__real@3f400000
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+axis+18h]
            vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+axis+10h]
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, dword ptr [rsp+1C0h+lineStart]
            vmulss  xmm1, xmm4, dword ptr [rbp+0C0h+axis+4]
            vmovss  dword ptr [rsp+1C0h+lineStart], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+axis+1Ch]
            vmulss  xmm0, xmm5, dword ptr [rbp+0C0h+axis+14h]
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, dword ptr [rsp+1C0h+lineStart+4]
            vmulss  xmm1, xmm4, dword ptr [rbp+0C0h+axis+8]
            vmovss  dword ptr [rsp+1C0h+lineStart+4], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+axis+20h]
            vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+4]
            vaddss  xmm3, xmm2, xmm1
            vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin]
            vaddss  xmm4, xmm3, dword ptr [rsp+1C0h+lineStart+8]
            vmovss  dword ptr [rsp+1C0h+center], xmm1
            vmovaps xmm1, xmm7; radius
            vmovss  dword ptr [rsp+1C0h+lineStart+8], xmm4
            vmovss  dword ptr [rsp+1C0h+center+4], xmm0
            vmovss  dword ptr [rsp+1C0h+center+8], xmm4
          }
          CG_DebugSphere(&outOrigin, *(float *)&_XMM1, &colorWhite, 0, 0);
          __asm { vmovss  xmm11, cs:__real@3e19999a }
          v58 = &colorGreen;
          __asm { vmovaps xmm3, xmm11; size }
          CL_AddOrientedDebugStar(&outOrigin, &forward, &colorGreen, *(float *)&_XMM3, 0, 0);
          __asm { vmovss  xmm2, cs:__real@3dcccccd; scale }
          CL_AddDebugString(&outOrigin, &colorWhite, *(float *)&_XMM2, "eye", 0, 1);
          __asm { vmovaps xmm1, xmm7; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorMagenta, 0, 0);
          __asm { vmovaps xmm3, xmm11; size }
          CL_AddOrientedDebugStar(&center, &forward, &colorGreen, *(float *)&_XMM3, 0, 0);
          __asm { vmovaps xmm1, xmm7; radius }
          CG_DebugSphere(&lineStart, *(float *)&_XMM1, &colorYellow, 0, 0);
          __asm { vmovaps xmm3, xmm11; size }
          CL_AddOrientedDebugStar(&lineStart, &outTagMat, &colorGreen, *(float *)&_XMM3, 0, 0);
          __asm { vmovss  xmm2, cs:__real@3dcccccd; scale }
          CL_AddDebugString(&lineStart, &colorYellow, *(float *)&_XMM2, "j_head", 0, 1);
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead, "cg_drawLOSLatencyShowOptimalHead") )
          {
            __asm { vmovaps [rsp+1C0h+var_70], xmm10 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawLOSLatencyThreshold, "cg_drawLOSLatencyThreshold");
            __asm { vmulss  xmm7, xmm0, cs:__real@3a83126f }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawLOSLatencyTolerance, "cg_drawLOSLatencyTolerance");
            __asm
            {
              vmulss  xmm6, xmm0, cs:__real@3a83126f
              vmovss  xmm2, dword ptr [rsp+1C0h+lineStart]
              vmovss  xmm5, dword ptr [rsp+1C0h+center+8]
              vmulss  xmm1, xmm8, xmm7
              vaddss  xmm4, xmm1, dword ptr [rsp+1C0h+center]
              vmulss  xmm0, xmm9, xmm7
              vaddss  xmm1, xmm0, dword ptr [rsp+1C0h+center+4]
              vmovss  xmm0, dword ptr [rsp+1C0h+lineStart+4]
              vmovss  dword ptr [rsp+1C0h+xyz+4], xmm1
              vsubss  xmm1, xmm0, xmm1
              vmulss  xmm3, xmm1, dword ptr [rbp+0C0h+right+4]
              vsubss  xmm0, xmm2, xmm4
              vmulss  xmm1, xmm0, dword ptr [rbp+0C0h+right]
              vmovss  xmm2, dword ptr [rsp+1C0h+lineStart+8]
              vsubss  xmm0, xmm2, xmm5
              vmovss  dword ptr [rsp+1C0h+xyz], xmm4
              vaddss  xmm4, xmm3, xmm1
              vmulss  xmm1, xmm0, dword ptr [rbp+0C0h+right+8]
              vaddss  xmm3, xmm4, xmm1
              vxorps  xmm10, xmm3, cs:__xmm@80000000800000008000000080000000
              vmulss  xmm0, xmm9, xmm6
              vmulss  xmm2, xmm0, xmm0
              vandps  xmm0, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vmulss  xmm4, xmm8, xmm6
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vcomiss xmm0, xmm3
              vmovss  dword ptr [rbp+0C0h+xyz+8], xmm5
              vxorps  xmm7, xmm7, xmm7
            }
            if ( !v67 )
            {
              __asm { vcomiss xmm3, xmm7 }
              if ( !(v67 | v68) )
                v58 = &colorRed;
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_sprintThreshhold, "player_sprintThreshhold");
            __asm
            {
              vcvtss2sd xmm1, xmm10, xmm10
              vmovq   rdx, xmm1
              vmulss  xmm6, xmm0, xmm6
            }
            v98 = j_va("%.2f", _RDX);
            __asm { vmovaps xmm2, xmm11; scale }
            CL_AddDebugString(&xyz, &colorBlue, *(float *)&_XMM2, v98, 0, 1);
            __asm
            {
              vmulss  xmm6, xmm6, cs:__real@3eaaaaab
              vmovaps xmm10, [rsp+1C0h+var_70]
            }
            v102 = 3i64;
            do
            {
              __asm
              {
                vaddss  xmm7, xmm7, xmm6
                vmovaps xmm1, xmm7; radius
              }
              CG_DebugSphere(&xyz, *(float *)&_XMM1, v58, 0, 0);
              --v102;
            }
            while ( v102 );
          }
          __asm
          {
            vmovaps xmm6, [rsp+1C0h+var_30]
            vmovaps xmm7, [rsp+1C0h+var_40]
            vmovaps xmm11, [rsp+1C0h+var_80]
          }
        }
        goto LABEL_39;
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawLogQueue
==============
*/
void CG_DrawDebug_DrawLogQueue(LocalClientNum_t localClientNum)
{
  DebugLogQueueManager *Instance; 

  Instance = DebugLogQueueManager::GetInstance();
  DebugLogQueueManager::Update(Instance);
}

/*
==============
CG_DrawDebug_DrawMemoryDebugOverlays
==============
*/
void CG_DrawDebug_DrawMemoryDebugOverlays(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v5; 
  int v6; 

  v1 = DVARINT_cg_drawBudgetBars;
  if ( !DVARINT_cg_drawBudgetBars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBudgetBars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( integer )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7701, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
      __debugbreak();
    MemBudget_HUD_Draw(ActivePlacement, integer);
  }
  else
  {
    v5 = DVARINT_cg_drawIWMem;
    if ( !DVARINT_cg_drawIWMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawIWMem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = v5->current.integer;
    if ( v6 == 1 )
    {
      IWMem_HUD_DrawUsageBars(localClientNum);
    }
    else if ( v6 == 2 )
    {
      IWMem_HUD_DrawHierarchy(localClientNum);
    }
  }
}

/*
==============
CG_DrawDebug_DrawPerformanceWarnings
==============
*/
void CG_DrawDebug_DrawPerformanceWarnings(LocalClientNum_t localClientNum)
{
  int v13; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *smallDevFont; 
  int v20; 
  int v21; 
  int v22; 
  __int64 v30; 
  statmonitor_s *v31; 
  Material *v32; 
  int v48; 
  int v49; 
  __int64 v50; 
  statmonitor_s *v51; 
  Material *v52; 
  int v68; 
  __int64 v69; 
  statmonitor_s *v70; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  int horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  float material; 
  float materiala; 
  float materialb; 
  float materialc; 
  ScopedCriticalSection v96; 
  char v97; 
  void *retaddr; 
  int count; 
  statmonitor_s *array; 

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
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  ScopedCriticalSection::ScopedCriticalSection(&v96, CRITSECT_STATMON, SCOPED_CRITSECT_NORMAL);
  v13 = Sys_Milliseconds();
  if ( dword_150F50B8C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_150F50B8C);
    if ( dword_150F50B8C == -1 )
    {
      blinkLastMS = v13;
      j__Init_thread_footer(&dword_150F50B8C);
    }
  }
  _ER14 = v13 + blinkTimer - blinkLastMS;
  blinkTimer = _ER14;
  blinkLastMS = v13;
  if ( _ER14 >= 500 )
  {
    _ER14 %= 500;
    blinkTimer = _ER14;
  }
  StatMon_GetStatsArray((const statmonitor_s **)&array, &count);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  smallDevFont = cls.smallDevFont;
  __asm
  {
    vmovss  xmm11, cs:__real@40000000
    vmovaps xmm10, xmm11
    vmovss  xmm6, cs:__real@43480000
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  __asm
  {
    vmovss  xmm13, cs:__real@41900000
    vmovss  xmm14, cs:__real@41800000
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm8, cs:__real@41a00000
    vmovss  xmm12, cs:__real@3e955555
    vmovss  xmm9, cs:__real@3e555555
    vmovss  xmm7, cs:__real@41200000
  }
  v30 = (unsigned int)count;
  if ( count > 0 )
  {
    v31 = array;
    do
    {
      if ( v31->endtime >= v13 )
      {
        if ( v31->smClass == STATMON_CLASS_WARNING )
          ++v21;
        else
          ++v22;
      }
      ++v31;
      --v30;
    }
    while ( v30 );
    if ( v21 > 0 )
    {
      v32 = Material_RegisterHandle("statmon_warn", IMAGE_TRACK_DEBUG);
      if ( v32 )
      {
        __asm { vmovd   xmm1, r14d }
        _ECX = 250;
        __asm
        {
          vmovd   xmm0, ecx
          vpcmpgtd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm14, xmm13, xmm2; w
          vmovd   xmm1, r14d
          vmovd   xmm0, ecx
          vpcmpgtd xmm2, xmm0, xmm1
          vxorps  xmm0, xmm0, xmm0
          vblendvps xmm0, xmm0, xmm15, xmm2
          vmovss  [rsp+158h+arg_10], xmm0
          vsubss  xmm2, xmm6, xmm0; y
          vsubss  xmm1, xmm11, xmm0; x
          vmovss  [rsp+158h+arg_10], xmm3
          vmovss  [rsp+158h+var_138], xmm3
        }
        UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v82, 1, 1, &colorWhite, v32);
        __asm { vmovaps xmm10, xmm8 }
      }
      __asm
      {
        vmovss  dword ptr [rsp+158h+material], xmm12
        vmovss  xmm0, cs:__real@43570000
        vmovss  [rsp+158h+horzAlign], xmm0
        vmovss  [rsp+158h+var_138], xmm10
      }
      UI_DrawText(ActivePlacement, "Warnings", 16, smallDevFont, v83, *(float *)&horzAlign, 1, 1, material, &colorRed, 3);
      __asm { vmovss  xmm6, cs:__real@43610000 }
      v48 = 0;
      v49 = count;
      if ( count > 0 )
      {
        v50 = 0i64;
        v51 = array;
        do
        {
          if ( v51[v50].endtime >= v13 && v51[v50].smClass == STATMON_CLASS_WARNING )
          {
            __asm
            {
              vmovss  dword ptr [rsp+158h+material], xmm9
              vmovss  [rsp+158h+horzAlign], xmm6
              vmovss  [rsp+158h+var_138], xmm8
            }
            UI_DrawText(ActivePlacement, v51[v48].description, 256, smallDevFont, v84, *(float *)&horzAligna, 1, 1, materiala, &colorWhite, 3);
            __asm { vaddss  xmm6, xmm6, xmm7 }
            v49 = count;
            v51 = array;
          }
          ++v48;
          ++v50;
        }
        while ( v48 < v49 );
        v20 = 0;
      }
      __asm { vaddss  xmm6, xmm6, cs:__real@c1200000 }
    }
  }
  if ( v22 > 0 )
  {
    v52 = Material_RegisterHandle("statmon_budget", IMAGE_TRACK_DEBUG);
    if ( v52 )
    {
      __asm { vmovd   xmm1, r14d }
      _ECX = 250;
      __asm
      {
        vmovd   xmm0, ecx
        vpcmpgtd xmm2, xmm0, xmm1
        vblendvps xmm3, xmm14, xmm13, xmm2; w
        vmovd   xmm1, r14d
        vmovd   xmm0, ecx
        vpcmpgtd xmm2, xmm0, xmm1
        vxorps  xmm0, xmm0, xmm0
        vblendvps xmm0, xmm0, xmm15, xmm2
        vmovss  [rsp+158h+arg_10], xmm0
        vsubss  xmm2, xmm6, xmm0; y
        vsubss  xmm1, xmm11, xmm0; x
        vmovss  [rsp+158h+arg_10], xmm3
        vmovss  [rsp+158h+var_138], xmm3
      }
      UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v85, 1, 1, &colorWhite, v52);
      __asm { vmovaps xmm11, xmm8 }
    }
    __asm
    {
      vaddss  xmm6, xmm6, cs:__real@41700000
      vmovss  dword ptr [rsp+158h+material], xmm12
      vmovss  [rsp+158h+horzAlign], xmm6
      vmovss  [rsp+158h+var_138], xmm11
    }
    UI_DrawText(ActivePlacement, "Budgets", 16, smallDevFont, v86, *(float *)&horzAlignb, 1, 1, materialb, &colorRed, 3);
    __asm { vaddss  xmm6, xmm6, xmm7 }
    v68 = count;
    if ( count > 0 )
    {
      v69 = 0i64;
      v70 = array;
      do
      {
        if ( v70[v69].endtime >= v13 && v70[v69].smClass == STATMON_CLASS_BUDGET )
        {
          __asm
          {
            vmovss  dword ptr [rsp+158h+material], xmm9
            vmovss  [rsp+158h+horzAlign], xmm6
            vmovss  [rsp+158h+var_138], xmm8
          }
          UI_DrawText(ActivePlacement, v70[v20].description, 256, smallDevFont, v87, *(float *)&horzAlignc, 1, 1, materialc, &colorWhite, 3);
          __asm { vaddss  xmm6, xmm6, xmm7 }
          v68 = count;
          v70 = array;
        }
        ++v20;
        ++v69;
      }
      while ( v20 < v68 );
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v96);
  _R11 = &v97;
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
CG_DrawDebug_DrawScriptedAnims
==============
*/
void CG_DrawDebug_DrawScriptedAnims(LocalClientNum_t localClientNum, float *yPos)
{
  __int64 v5; 
  const dvar_t *v7; 
  cg_t *LocalClientGlobals; 
  int *entityNums; 
  int v12; 
  __int64 v13; 
  __int64 v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  unsigned int v18; 
  DObj *v19; 
  const XModel *Model; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  char *fmt; 
  float fmta; 
  __int64 y; 
  float ya; 
  __int64 horzAlign; 
  float v38; 
  int v39; 
  int *v40; 
  char dest[1024]; 

  v5 = localClientNum;
  _R12 = yPos;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5183, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v7 = DVARBOOL_cg_dumpScriptedAnims;
  if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5196, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v39 = 0;
    if ( LocalClientGlobals->scriptedAnimDebug.entCount > 0 )
    {
      entityNums = LocalClientGlobals->scriptedAnimDebug.entityNums;
      __asm
      {
        vmovaps [rsp+4E8h+var_48], xmm6
        vmovss  xmm6, cs:__real@3e4ccccd
        vmovaps [rsp+4E8h+var_58], xmm7
        vmovss  xmm7, cs:__real@3e3851ec
      }
      v12 = 2533 * v5;
      v13 = v5;
      __asm { vmovaps [rsp+4E8h+var_68], xmm8 }
      v40 = LocalClientGlobals->scriptedAnimDebug.entityNums;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      do
      {
        v15 = *entityNums;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(horzAlign) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(horzAlign) = CgEntitySystem::ms_allocatedCount;
          LODWORD(y) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v13] )
        {
          LODWORD(horzAlign) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", horzAlign) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[v13];
        if ( (unsigned int)v15 >= 0x800 )
        {
          LODWORD(horzAlign) = 2048;
          LODWORD(y) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v17 = v15;
        if ( (v16->m_entities[v15].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5208, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( (unsigned int)v15 > 0x9E4 )
        {
          LODWORD(horzAlign) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(horzAlign) = 2;
          LODWORD(y) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)(v12 + v15) >= 0x13CA )
        {
          LODWORD(horzAlign) = v12 + v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", horzAlign) )
            __debugbreak();
        }
        v18 = clientObjMap[v12 + (int)v15];
        if ( clientObjMap[v12 + (int)v15] )
        {
          if ( v18 >= (unsigned int)s_objCount )
          {
            LODWORD(horzAlign) = clientObjMap[v12 + (int)v15];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", horzAlign) )
              __debugbreak();
          }
          v19 = (DObj *)s_objBuf[v18];
          if ( v19 && DObjGetNumModels(v19) > 0 )
          {
            Model = DObjGetModel(v19, 0);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5214, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            CG_DrawDebug_DrawScriptedAnimsDrawBones(LocalClientGlobals, v15, v19);
            if ( v16->m_entities[v17].nextState.eType == ET_SCRIPTMOVER )
            {
              LODWORD(horzAlign) = v16->m_entities[v17].nextState.lerp.u.anonymous.data[4];
              LODWORD(fmt) = v16->m_entities[v17].nextState.otherEntityNum;
              Com_sprintf(dest, 0x400ui64, "Playing scripted anim on entity %d. Other Ent: %d Model: %s Anim Start Time: %d", (unsigned int)v15, fmt, Model->name, horzAlign);
            }
            else
            {
              LODWORD(fmt) = v16->m_entities[v17].nextState.otherEntityNum;
              Com_sprintf(dest, 0x400ui64, "Playing scripted anim on entity %d. Other Ent: %d Model: %s", (unsigned int)v15, fmt, Model->name);
            }
            __asm { vmovaps xmm2, xmm6; scale }
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v5);
            FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm0, dword ptr [r12]
              vmovss  [rsp+4E8h+var_4A8], xmm7
              vmovss  [rsp+4E8h+y], xmm0
              vmovss  dword ptr [rsp+4E8h+fmt], xmm8
            }
            UI_DrawText(ActivePlacement, dest, 1024, FontHandle, fmta, ya, 1, 1, v38, &colorWhite, 3);
            __asm
            {
              vmovss  xmm0, cs:Y_HEADER_INCREMENT
              vaddss  xmm1, xmm0, dword ptr [r12]
            }
            v12 = 2533 * v5;
            __asm { vmovss  dword ptr [r12], xmm1 }
          }
        }
        __asm { vmovss  xmm2, dword ptr [r12]; yPos }
        CG_DrawDebug_DrawAnims((LocalClientNum_t)v5, v15, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm0, cs:Y_ANIM_TREE_INCREMENT
          vaddss  xmm1, xmm0, dword ptr [r12]
        }
        entityNums = v40 + 1;
        ++v39;
        __asm { vmovss  dword ptr [r12], xmm1 }
        ++v40;
        v13 = v5;
      }
      while ( v39 < LocalClientGlobals->scriptedAnimDebug.entCount );
      __asm
      {
        vmovaps xmm8, [rsp+4E8h+var_68]
        vmovaps xmm7, [rsp+4E8h+var_58]
        vmovaps xmm6, [rsp+4E8h+var_48]
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawScriptedAnimsDrawBones
==============
*/
void CG_DrawDebug_DrawScriptedAnimsDrawBones(const cg_t *cgameGlob, const int entNum, DObj *obj)
{
  centity_t *Entity; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outOrigin; 
  vec3_t point; 
  tmat33_t<vec3_t> outTagMat; 
  char dest[256]; 

  __asm { vmovaps [rsp+1C0h+var_30], xmm6 }
  Entity = CG_GetEntity((const LocalClientNum_t)cgameGlob->localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5130, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  inOutIndex[0] = -2;
  __asm { vmovss  xmm6, cs:__real@3e3851ec }
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_origin, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_origin [%d]", (unsigned int)entNum);
    __asm { vmovss  xmm2, cs:dword_147FA2E88; length }
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&_XMM2, 0, dword_150F50B90);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmovss  dword ptr [rsp+1C0h+point], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      vaddss  xmm2, xmm0, cs:dword_147FA2E8C
      vmovss  dword ptr [rsp+1C0h+point+8], xmm2
      vmovaps xmm2, xmm6; scale
      vmovss  dword ptr [rsp+1C0h+point+4], xmm1
    }
    CG_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_player, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_player [%d]", (unsigned int)entNum);
    __asm { vmovss  xmm2, cs:dword_147FA2E88; length }
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&_XMM2, 0, dword_150F50B90);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmovss  dword ptr [rsp+1C0h+point], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      vaddss  xmm2, xmm0, cs:dword_147FA2E8C
      vmovss  dword ptr [rsp+1C0h+point+8], xmm2
      vmovaps xmm2, xmm6; scale
      vmovss  dword ptr [rsp+1C0h+point+4], xmm1
    }
    CG_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_camera, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_camera [%d]", (unsigned int)entNum);
    __asm { vmovss  xmm2, cs:dword_147FA2E88; length }
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&_XMM2, 0, dword_150F50B90);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmovss  dword ptr [rsp+1C0h+point], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      vaddss  xmm2, xmm0, cs:dword_147FA2E8C
      vmovss  dword ptr [rsp+1C0h+point+8], xmm2
      vmovaps xmm2, xmm6; scale
      vmovss  dword ptr [rsp+1C0h+point+4], xmm1
    }
    CG_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_camera_scripted [%d]", (unsigned int)entNum);
    __asm { vmovss  xmm2, cs:dword_147FA2E88; length }
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&_XMM2, 0, dword_150F50B90);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmovss  dword ptr [rsp+1C0h+point], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      vaddss  xmm3, xmm0, cs:dword_147FA2E8C
      vmovaps xmm2, xmm6; scale
      vmovss  dword ptr [rsp+1C0h+point+8], xmm3
      vmovss  dword ptr [rsp+1C0h+point+4], xmm1
    }
    CG_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 0, dword_150F50B90);
  }
  __asm { vmovaps xmm6, [rsp+1C0h+var_30] }
}

/*
==============
CG_DrawDebug_DrawSkydive
==============
*/
void CG_DrawDebug_DrawSkydive(LocalClientNum_t localClientNum, const bool verbose)
{
  cg_t *LocalClientGlobals; 
  unsigned __int8 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  char *v19; 
  int v34; 
  SkydiveSoundType CurrentSoundType; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v133; 
  GfxFont *FontHandle; 
  char *fmt; 
  char *fmta; 
  float fmtb; 
  double y; 
  float ya; 
  double horzAlign; 
  double vertAlign; 
  double v145; 
  float v146; 
  vec4_t *color; 
  double style; 
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
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char dest[2048]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    Com_sprintf(dest, 0x800ui64, "^3SKYDIVE DEBUG\n");
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    _RDI = &LocalClientGlobals->predictedPlayerState;
    v15 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0];
    if ( v15 >= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6174, ASSERT_TYPE_ASSERT, "(unsigned)( sds.state ) < (unsigned)( SkydiveState::Count )", "sds.state doesn't index SkydiveState::Count\n\t%i not in [0, %i)", v15, 7) )
      __debugbreak();
    v16 = -1i64;
    v17 = -1i64;
    do
      ++v17;
    while ( dest[v17] );
    v18 = 2048 - (int)v17;
    v19 = &dest[(int)v17];
    Com_sprintf(v19, v18, " ^7State: ^5%s\n", g_skydiveStateNames[(unsigned __int8)_RDI->skydivePlayerState.state[0]]);
    _RSI = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6182, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (unsigned __int8)(_RDI->skydivePlayerState.state[0] - 1) > 5u )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+0BA1C8h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(v19, v18, " ^7Base Jump Height Check: ^5%.2f inches away from the ground\n", *(double *)&_XMM3);
    }
    else
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+40h]
        vmovss  xmm4, dword ptr [rdi+3Ch]
        vmulss  xmm1, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm0, xmm5, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm3, xmm1, xmm0
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm1, dword ptr [rdi+44h]
        vaddss  xmm0, xmm3, xmm2
        vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm3, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm3, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vmovss  [rsp+0A08h+var_93C], xmm3
        vmovss  [rsp+0A08h+var_940], xmm2
      }
      do
        ++v16;
      while ( dest[v16] );
      v34 = 2048 - v16;
      if ( verbose )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1DCh]
          vmovaps [rsp+0A08h+var_28], xmm6
          vmovaps [rsp+0A08h+var_38], xmm7
          vmovaps [rsp+0A08h+var_48], xmm8
          vmovaps [rsp+0A08h+var_58], xmm9
          vmovaps [rsp+0A08h+var_68], xmm10
          vmovaps [rsp+0A08h+var_78], xmm11
          vmovaps [rsp+0A08h+var_88], xmm12
          vmovaps [rsp+0A08h+var_98], xmm13
          vxorps  xmm7, xmm7, xmm7
          vmovaps [rsp+0A08h+var_A8], xmm14
          vmovaps [rsp+0A08h+var_B8], xmm15
          vmovss  dword ptr [rsp+0A08h+angles], xmm7
          vmovss  dword ptr [rsp+0A08h+angles+4], xmm0
          vmovss  dword ptr [rsp+0A08h+angles+8], xmm7
        }
        AnglesToAxis(&angles, &axis);
        __asm
        {
          vmovss  xmm5, dword ptr [rdi+40h]
          vmovss  xmm6, dword ptr [rdi+3Ch]
          vmulss  xmm1, xmm5, dword ptr [rsp+0A08h+axis+4]
          vmulss  xmm0, xmm6, dword ptr [rsp+0A08h+axis]
          vmovss  xmm4, dword ptr [rdi+44h]
          vaddss  xmm0, xmm1, xmm0
          vmulss  xmm1, xmm0, dword ptr [rsp+0A08h+axis+4]
          vsubss  xmm2, xmm5, xmm1
          vmulss  xmm3, xmm2, dword ptr [rsp+0A08h+axis+10h]
          vmovss  [rsp+0A08h+var_944], xmm0
          vmulss  xmm0, xmm0, dword ptr [rsp+0A08h+axis]
          vsubss  xmm1, xmm6, xmm0
          vmulss  xmm2, xmm1, dword ptr [rsp+0A08h+axis+0Ch]
          vaddss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm5, xmm5
          vmovss  [rsp+0A08h+var_948], xmm0
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm11, xmm2, xmm2
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm9, xmm9, xmm9
          vxorps  xmm10, xmm10, xmm10
        }
        CurrentSoundType = CG_SkydiveGetCurrentSoundType(_RDI);
        if ( CurrentSoundType == 1 )
        {
          __asm
          {
            vmovss  xmm7, dword ptr [rsi+0BA180h]
            vmovss  xmm8, dword ptr [rsi+0BA184h]
            vmovss  xmm9, dword ptr [rsi+0BA188h]
            vmovss  xmm10, dword ptr [rsi+0BA18Ch]
          }
        }
        else if ( CurrentSoundType == 2 )
        {
          __asm
          {
            vmovss  xmm7, dword ptr [rsi+0BA194h]
            vmovss  xmm8, dword ptr [rsi+0BA198h]
            vmovss  xmm9, dword ptr [rsi+0BA19Ch]
            vmovss  xmm10, dword ptr [rsi+0BA1A0h]
          }
        }
        *(double *)&_XMM0 = BG_Skydive_CalculateEffectiveVerticalDragCoefficient(_RDI);
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A08h+var_928], xmm0
        }
        *(double *)&_XMM0 = BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(_RDI);
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A08h+var_920], xmm0
          vmovss  xmm0, dword ptr [rdi+2F64h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A08h+var_918], xmm0
          vmovss  xmm0, dword ptr [rdi+2F5Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A08h+var_910], xmm0
          vmovss  xmm0, dword ptr [rdi+1D8h]
          vmulss  xmm6, xmm0, cs:__real@3b360b61
        }
        *(double *)&_XMM0 = BG_Skydive_GetTrackedThrottleValue(_RDI);
        __asm
        {
          vaddss  xmm2, xmm6, cs:__real@3f000000
          vmovss  xmm4, [rsp+0A08h+var_948]
          vmovss  xmm5, [rsp+0A08h+var_940]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A08h+var_908], xmm0
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm3, xmm1, xmm2, 1
          vmovsd  xmm2, cs:__real@3fad17466da29aca
          vcvtss2sd xmm0, xmm8, xmm8
          vmovsd  [rsp+0A08h+var_938], xmm0
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+0A08h+var_930], xmm0
          vsubss  xmm0, xmm6, xmm3
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmovss  xmm3, cs:__real@3cd013a9
          vcvtss2sd xmm13, xmm1, xmm1
          vmulss  xmm0, xmm11, xmm3
          vcvtss2sd xmm12, xmm0, xmm0
          vmulss  xmm0, xmm4, xmm3
          vcvtss2sd xmm1, xmm11, xmm11
          vmulsd  xmm11, xmm1, xmm2
          vcvtss2sd xmm1, xmm4, xmm4
          vmovss  xmm4, [rsp+0A08h+var_944]
          vcvtss2sd xmm15, xmm9, xmm9
          vmulsd  xmm9, xmm1, xmm2
          vcvtss2sd xmm1, xmm4, xmm4
          vmulsd  xmm7, xmm1, xmm2
          vcvtss2sd xmm14, xmm10, xmm10
          vmovsd  [rsp+0A08h+var_958], xmm14
          vmovsd  [rsp+0A08h+var_960], xmm15
          vcvtss2sd xmm10, xmm0, xmm0
          vmulss  xmm0, xmm4, xmm3
          vcvtss2sd xmm8, xmm0, xmm0
          vmulss  xmm0, xmm5, xmm3
          vcvtss2sd xmm6, xmm0, xmm0
          vcvtss2sd xmm1, xmm5, xmm5
          vmulsd  xmm5, xmm1, xmm2
          vmovss  xmm1, [rsp+0A08h+var_93C]
          vmulss  xmm0, xmm1, xmm3
          vcvtss2sd xmm1, xmm1, xmm1
          vmulsd  xmm3, xmm1, xmm2
          vmovsd  xmm1, [rsp+0A08h+var_930]
          vmovsd  xmm2, [rsp+0A08h+var_928]
          vcvtss2sd xmm4, xmm0, xmm0
          vmovsd  xmm0, [rsp+0A08h+var_938]
          vmovsd  [rsp+0A08h+var_968], xmm0
          vmovsd  xmm0, [rsp+0A08h+var_920]
          vmovsd  [rsp+0A08h+var_970], xmm1
          vmovsd  xmm1, [rsp+0A08h+var_918]
          vmovsd  [rsp+0A08h+var_978], xmm2
          vmovsd  xmm2, [rsp+0A08h+var_910]
          vmovsd  [rsp+0A08h+var_980], xmm0
          vmovsd  xmm0, [rsp+0A08h+var_908]
          vmovsd  [rsp+0A08h+var_988], xmm1
          vmovsd  [rsp+0A08h+var_990], xmm2
          vmovsd  [rsp+0A08h+var_998], xmm13
          vmovsd  [rsp+0A08h+var_9A0], xmm0
          vmovsd  [rsp+0A08h+var_9A8], xmm12
          vmovsd  [rsp+0A08h+var_9B0], xmm11
          vmovsd  qword ptr [rsp+0A08h+style], xmm10
          vmovsd  [rsp+0A08h+color], xmm9
          vmovsd  [rsp+0A08h+var_9C8], xmm8
          vmovsd  qword ptr [rsp+0A08h+vertAlign], xmm7
          vmovsd  qword ptr [rsp+0A08h+horzAlign], xmm6
          vmovsd  qword ptr [rsp+0A08h+y], xmm5
          vmovq   r9, xmm3
          vmovsd  [rsp+0A08h+fmt], xmm4
        }
        Com_sprintf(&dest[(int)v16], v34, " ^7Ground Speed: ^5%.0f mph - %.1f meters/second\n ^7Fall Speed: ^5%.0f mph - %.1f meters/second\n ^7Forward Speed: ^5%.0f mph - %.1f meters/second (sign indicates direction)\n ^7Side Speed: ^5%.0f mph - %.1f meters/second (sign indicates direction)\n ^73D Speed: ^5%.0f mph - %.1f meters/second\n ^7Throttle: ^5%.2f\n ^7Pitch: ^5%.2f degrees\n ^7Model Pitch: ^5%f (normalized to [-1, 1] range)\n ^7Model Roll: ^5%f (normalized to [-1, 1] range)\n ^7Horizontal Drag Coefficient: ^5%.3f\n ^7Vertical Drag Coefficient: ^5%.3f\n ^7Ambient Volume: ^5%.2f\n ^7Ambient Pitch: ^5%.2f\n ^7High Speed Volume: ^5%.2f\n ^7High Speed Pitch: ^5%.2f\n", *(double *)&_XMM3, *(double *)&fmt, y, horzAlign, vertAlign, v145, *(double *)&color, style, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160);
        __asm
        {
          vmovaps xmm15, [rsp+0A08h+var_B8]
          vmovaps xmm14, [rsp+0A08h+var_A8]
          vmovaps xmm13, [rsp+0A08h+var_98]
          vmovaps xmm12, [rsp+0A08h+var_88]
          vmovaps xmm11, [rsp+0A08h+var_78]
          vmovaps xmm10, [rsp+0A08h+var_68]
          vmovaps xmm9, [rsp+0A08h+var_58]
          vmovaps xmm8, [rsp+0A08h+var_48]
          vmovaps xmm7, [rsp+0A08h+var_38]
          vmovaps xmm6, [rsp+0A08h+var_28]
        }
      }
      else
      {
        __asm
        {
          vcvtss2sd xmm0, xmm2, xmm2
          vmulsd  xmm2, xmm0, cs:__real@3fad17466da29aca
          vcvtss2sd xmm0, xmm3, xmm3
          vmulsd  xmm3, xmm0, cs:__real@3fad17466da29aca
          vmovq   r9, xmm3
          vmovsd  [rsp+0A08h+fmt], xmm2
        }
        Com_sprintf(&dest[(int)v16], v34, " ^7Ground Speed: ^5%.0f mph\n ^7Fall Speed: ^5%.0f mph\n", *(double *)&_XMM3, *(double *)&fmta);
      }
    }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    __asm { vmovss  xmm2, cs:MY_SCALE_2; scale }
    v133 = ActivePlacement;
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:MY_SCALE_2
      vmovss  xmm1, cs:MY_X_2
      vmovss  dword ptr [rsp+0A08h+var_9C8], xmm0
      vmovss  xmm0, cs:MY_Y_0
      vmovss  [rsp+0A08h+y], xmm0
      vmovss  dword ptr [rsp+0A08h+fmt], xmm1
    }
    UI_DrawText(v133, dest, 2048, FontHandle, fmtb, ya, 1, 1, v146, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawSoundOverlay
==============
*/

void __fastcall CG_DrawDebug_DrawSoundOverlay(const ScreenPlacement *scrPlace, __int64 a2, double _XMM2_8)
{
  const dvar_t *v7; 
  __int64 integer; 
  int SoundOverlay; 
  __int64 v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  const char *v14; 
  const char *v20; 
  unsigned int v23; 
  const char *v26; 
  const char *v27; 
  __int64 v32; 
  char *aliasName; 
  __int64 forceColor; 
  __int64 shadow; 
  __int64 shadowa; 
  float v48; 
  float v49; 
  __int64 v50; 
  __int64 v51; 
  float v52; 
  __int64 adjust; 
  __int64 v54; 
  int cpu[4]; 
  snd_overlay_info_t info[64]; 

  v7 = DVARINT_snd_drawInfo;
  if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_drawInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  SoundOverlay = SND_GetSoundOverlay((snd_overlay_type_t)integer, info, 64, cpu);
  v11 = SoundOverlay;
  if ( SoundOverlay > 0 )
  {
    v12 = DVARINT_snd_drawInfo;
    v13 = integer - 5;
    __asm
    {
      vmovaps [rsp+0D0D8h+var_38], xmm6
      vmovaps [rsp+0D0D8h+var_48], xmm7
      vmovaps [rsp+0D0D8h+var_58], xmm8
      vmovaps [rsp+0D0D8h+var_68], xmm9
    }
    if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
      __debugbreak();
    v14 = j_va("Listing Active Sounds of Type: %s", *(const char **)(v12->domain.integer64.max + 8 * integer));
    __asm
    {
      vmovss  xmm7, cs:__real@41200000
      vmovss  xmm8, cs:__real@c1f00000
      vmovss  dword ptr [rsp+0D0D8h+var_D0A0], xmm7
      vxorps  xmm2, xmm2, xmm2; y
      vmovaps xmm1, xmm8; x
      vxorps  xmm9, xmm9, xmm9
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v14, &colorWhite, 0, 1, v48, 0);
    v20 = j_va("CPU: ^3%%%i ", (unsigned int)cpu[0]);
    __asm
    {
      vmovss  dword ptr [rsp+0D0D8h+var_D0A0], xmm7
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm8; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v20, &colorWhite, 0, 1, v49, 0);
    v23 = 0;
    __asm { vmovss  xmm6, cs:__real@41a00000 }
    if ( v11 > 0 )
    {
      _RBX = &info[0].isFiltered;
      do
      {
        if ( *((_BYTE *)_RBX - 784) )
        {
          v27 = "^7";
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  xmm1, dword ptr [rbx-0Ch]
            vmovss  xmm2, dword ptr [rbx-10h]
          }
          if ( *_RBX )
            v27 = "^3";
          __asm
          {
            vcomiss xmm0, xmm9
            vcvtss2sd xmm1, xmm1, xmm1
          }
          if ( *_RBX )
            v27 = "^1";
          v32 = (int)v23;
          __asm { vcvtss2sd xmm2, xmm2, xmm2 }
          aliasName = info[v32].aliasName;
          if ( v13 > 3 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-4]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0D0D8h+var_D090], xmm0
            }
            LODWORD(adjust) = *(_RBX - 2);
            __asm
            {
              vmovsd  [rsp+0D0D8h+var_D0A0], xmm1
              vmovsd  qword ptr [rsp+0D0D8h+shadow], xmm2
            }
            v26 = j_va("%2i %s(%s)^7 %s -> %s ^7v^3%04.2f ^7rv^3%04.2f ^7dst^3%5i ^7pit^3%04.2f", v23, v27, info[v32].entchannel, aliasName, &info[v32], shadowa, v51, adjust, v54);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+10h]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0D0D8h+var_D0A0], xmm0
              vmovsd  qword ptr [rsp+0D0D8h+shadow], xmm1
              vmovsd  qword ptr [rsp+0D0D8h+forceColor], xmm2
            }
            v26 = j_va("%2i %.12s(%.20s)^7 %s ^7v^3%04.2f ^7rv^3%04.2f ^7vm^3%04.2f ^7%s %s", v23, v27, info[v32].volMod, aliasName, forceColor, shadow, v50, info[v32].vfCurve, info[v32].speakerMap);
          }
        }
        else
        {
          v26 = j_va("%2i", v23);
        }
        __asm
        {
          vmovss  dword ptr [rsp+0D0D8h+var_D0A0], xmm7
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm8; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v26, &colorWhite, 0, 1, v52, 0);
        ++v23;
        _RBX += 208;
        __asm { vaddss  xmm6, xmm6, xmm7 }
        --v11;
      }
      while ( v11 );
    }
    __asm
    {
      vmovaps xmm8, [rsp+0D0D8h+var_58]
      vmovaps xmm7, [rsp+0D0D8h+var_48]
      vmovaps xmm6, [rsp+0D0D8h+var_38]
      vmovaps xmm9, [rsp+0D0D8h+var_68]
    }
  }
}

/*
==============
CG_DrawDebug_DrawSpawnGroupLoot
==============
*/
void CG_DrawDebug_DrawSpawnGroupLoot(LocalClientNum_t localClientNum)
{
  const dvar_t *v8; 
  int integer; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  MapEnts *mapEnts; 
  int v17; 
  const BG_SpawnGroup_Loot_Table *v18; 
  int v19; 
  __int64 v20; 
  __int64 v30; 
  unsigned __int8 setForZoneDefault; 
  __int64 v42; 
  unsigned __int8 cacheSetForZoneDefault; 
  const char *v47; 
  int v53; 
  __int64 v54; 
  const SpawnGroupPoint *v55; 
  vec3_t *zoneCenter; 
  __int64 v60; 
  int v61; 
  int v62; 
  int v63; 
  __int64 v64; 
  vec3_t point; 
  vec3_t viewPos; 

  __asm { vmovaps [rsp+108h+var_38], xmm6 }
  v8 = DVARINT_cg_debugDrawSpawnGroupLoot;
  if ( !DVARINT_cg_debugDrawSpawnGroupLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawSpawnGroupLoot") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+108h+var_48], xmm7
    vmovaps [rsp+108h+var_58], xmm8
  }
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rax+699Ch]
      vmovss  xmm7, dword ptr [rax+69A0h]
      vmovss  xmm8, dword ptr [rax+69A4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rax+59680h]
      vmovss  xmm7, dword ptr [rax+59684h]
      vmovss  xmm8, dword ptr [rax+59688h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+108h+var_C8], xmm6
    vmovss  dword ptr [rsp+108h+viewPos+8], xmm8
    vmovss  dword ptr [rsp+108h+viewPos+4], xmm7
    vmovss  dword ptr [rsp+108h+viewPos], xmm6
  }
  if ( (v61 & 0x7F800000) != 2139095040 )
  {
    __asm { vmovss  dword ptr [rsp+108h+var_C8], xmm7 }
    if ( (v62 & 0x7F800000) != 2139095040 )
    {
      __asm { vmovss  dword ptr [rsp+108h+var_C8], xmm8 }
      if ( (v63 & 0x7F800000) != 2139095040 )
      {
        LootTable = ScriptableCl_GetLootTable(localClientNum);
        mapEnts = cm.mapEnts;
        v17 = 0;
        v18 = LootTable;
        v19 = 0;
        if ( cm.mapEnts->spawnGroupLoot.zoneCount )
        {
          __asm { vmovaps [rsp+108h+var_68], xmm9 }
          v20 = 0i64;
          __asm
          {
            vmovss  xmm9, cs:__real@49742400
            vmovaps [rsp+108h+var_78], xmm10
          }
          _RBP = 0i64;
          __asm
          {
            vmovss  xmm10, cs:__real@3e99999a
            vmovaps [rsp+108h+var_88], xmm11
            vmovss  xmm11, cs:__real@41200000
            vmovaps [rsp+108h+var_98], xmm12
            vmovss  xmm12, cs:__real@c0a00000
          }
          v64 = 0i64;
          do
          {
            _RBX = mapEnts->spawnGroupLoot.zones;
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+rbp+20h]
              vmovss  dword ptr [rsp+108h+point], xmm1
              vmovss  xmm3, dword ptr [rbx+rbp+24h]
              vmovss  dword ptr [rsp+108h+point+4], xmm3
              vmovss  xmm0, dword ptr [rbx+rbp+28h]
              vmovss  dword ptr [rsp+108h+point+8], xmm0
            }
            if ( _RBX[_RBP].pointCount )
            {
              v30 = 0i64;
              do
              {
                CG_DrawDebug_DrawSpawnGroup_Loot_Point(localClientNum, integer, &viewPos, _RBX[_RBP].points[v30], &mapEnts->spawnGroupLoot.points[_RBX[_RBP].points[v30]], &point);
                ++v30;
                mapEnts = cm.mapEnts;
                ++v17;
              }
              while ( v17 < _RBX[_RBP].pointCount );
              __asm
              {
                vmovss  xmm3, dword ptr [rsp+108h+point+4]
                vmovss  xmm1, dword ptr [rsp+108h+point]
              }
              v20 = v64;
            }
            if ( integer <= 1 || v19 == -1 )
            {
              v17 = 0;
            }
            else
            {
              __asm
              {
                vsubss  xmm2, xmm6, xmm1
                vsubss  xmm0, xmm7, xmm3
                vsubss  xmm3, xmm8, dword ptr [rsp+108h+point+8]
                vmulss  xmm1, xmm0, xmm0
                vmulss  xmm0, xmm2, xmm2
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm2, xmm2, xmm1
                vcomiss xmm2, xmm9
              }
              if ( (unsigned int)v19 >= 0x3E8 )
              {
                LODWORD(v60) = 1000;
                LODWORD(zoneCenter) = v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6706, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( 1000 )", "zoneIndex doesn't index SPAWNGROUP_LOOT_MAX_ZONES\n\t%i not in [0, %i)", zoneCenter, v60) )
                  __debugbreak();
              }
              setForZoneDefault = v18->setForZone[v20];
              if ( !setForZoneDefault )
              {
                setForZoneDefault = v18->setForZoneDefault;
                if ( !setForZoneDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6708, ASSERT_TYPE_ASSERT, "(lootSetIndex != 0)", (const char *)&queryFormat, "lootSetIndex != SPAWNGROUP_LOOT_SET_NONE") )
                  __debugbreak();
              }
              v42 = setForZoneDefault;
              cacheSetForZoneDefault = v18->cacheSetForZone[v64];
              if ( !cacheSetForZoneDefault )
              {
                cacheSetForZoneDefault = v18->cacheSetForZoneDefault;
                if ( !cacheSetForZoneDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6711, ASSERT_TYPE_ASSERT, "(cacheSetIndex != 0)", (const char *)&queryFormat, "cacheSetIndex != SPAWNGROUP_LOOT_SET_NONE") )
                  __debugbreak();
              }
              __asm { vaddss  xmm1, xmm11, dword ptr [rsp+108h+point+8] }
              v17 = 0;
              __asm
              {
                vmovss  dword ptr [rsp+108h+point+8], xmm1
                vmovaps xmm2, xmm10; scale
              }
              CG_DebugString(&point, &colorWhite, *(float *)&_XMM2, v18->sets[v42].name, 0, 0);
              __asm
              {
                vaddss  xmm1, xmm12, dword ptr [rsp+108h+point+8]
                vmovss  dword ptr [rsp+108h+point+8], xmm1
              }
              v47 = j_va("%d%% points %d%% clusters %d%% caches", v18->sets[v42].chancePoint, v18->sets[v42].chanceCluster, v18->sets[cacheSetForZoneDefault].chanceLootCache);
              __asm { vmovaps xmm2, xmm10; scale }
              CG_DebugString(&point, &colorWhite, *(float *)&_XMM2, v47, 0, 0);
              mapEnts = cm.mapEnts;
              v20 = v64;
            }
            ++v20;
            ++v19;
            ++_RBP;
            v64 = v20;
          }
          while ( v19 < mapEnts->spawnGroupLoot.zoneCount );
          __asm
          {
            vmovaps xmm12, [rsp+108h+var_98]
            vmovaps xmm11, [rsp+108h+var_88]
            vmovaps xmm10, [rsp+108h+var_78]
            vmovaps xmm9, [rsp+108h+var_68]
          }
        }
        v53 = 0;
        if ( mapEnts->spawnGroupLoot.pointCount )
        {
          v54 = 0i64;
          do
          {
            v55 = &mapEnts->spawnGroupLoot.points[v54];
            if ( !v55->zone )
            {
              CG_DrawDebug_DrawSpawnGroup_Loot_Point(localClientNum, integer, &viewPos, v53, v55, NULL);
              mapEnts = cm.mapEnts;
            }
            ++v53;
            ++v54;
          }
          while ( v53 < mapEnts->spawnGroupLoot.pointCount );
        }
        ScriptableCl_Debug_DrawLoot(localClientNum);
      }
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_48]
    vmovaps xmm6, [rsp+108h+var_38]
  }
}

/*
==============
CG_DrawDebug_DrawSpawnGroup_Loot_Point
==============
*/
void CG_DrawDebug_DrawSpawnGroup_Loot_Point(LocalClientNum_t localClientNum, int drawMode, const vec3_t *viewPos, int pointIndex, const SpawnGroupPoint *point, const vec3_t *zoneCenter)
{
  unsigned __int16 cluster; 
  const vec4_t *v31; 
  unsigned __int16 clusterCount; 
  char v38; 
  const char *v39; 
  char NodeError; 
  const vec4_t *v46; 
  vec3_t *v47; 
  vec3_t *p_start; 
  __int64 v70; 
  __int64 fromServer; 
  __int64 v72; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v76; 
  vec3_t v77; 
  vec3_t v78; 
  vec3_t v79; 
  vec3_t v80; 
  vec3_t v81; 
  __int64 v83; 
  char v84; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = &v83;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  _RBX = point;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm7, dword ptr [rbx+8]
    vsubss  xmm3, xmm0, xmm5
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [r8+8]
    vmulss  xmm2, xmm1, xmm1
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm9, xmm3, xmm0
    vcomiss xmm9, cs:__real@4d5693a4
  }
  if ( (unsigned __int64)&v70 != _security_cookie )
    goto LABEL_31;
  cluster = point->cluster;
  __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
  switch ( cluster )
  {
    case 0xFFFD:
      __asm { vmovss  xmm8, cs:__real@42480000 }
      v31 = &colorPurple;
      break;
    case 0xFFFC:
      __asm { vmovss  xmm8, cs:__real@42480000 }
      v31 = &colorRed;
      break;
    case 0xFFFB:
      __asm { vmovss  xmm8, cs:__real@42480000 }
      v31 = &colorGreen;
      break;
    default:
      __asm { vmovss  xmm8, cs:__real@40a00000 }
      if ( cluster == 0xFFFE )
      {
        v31 = &colorRed;
      }
      else if ( cluster == 0xFFFF )
      {
        v31 = &colorLtGrey;
      }
      else
      {
        __asm { vcomiss xmm9, cs:__real@48742400 }
        v31 = &colorWhite;
        clusterCount = cm.mapEnts->spawnGroupLoot.clusterCount;
        if ( cluster >= clusterCount )
        {
          LODWORD(v72) = clusterCount;
          LODWORD(fromServer) = cluster;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6581, ASSERT_TYPE_ASSERT, "(unsigned)( point->cluster ) < (unsigned)( cm.mapEnts->spawnGroupLoot.clusterCount )", "point->cluster doesn't index cm.mapEnts->spawnGroupLoot.clusterCount\n\t%i not in [0, %i)", fromServer, v72) )
            __debugbreak();
        }
        CL_AddDebugLine(&point->origin, &cm.mapEnts->spawnGroupLoot.clusters[point->cluster].bounds.midPoint, &colorWhite, 0, 0, 0);
        __asm
        {
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm6, dword ptr [rbx+4]
          vmovss  xmm7, dword ptr [rbx+8]
        }
      }
      break;
  }
  __asm
  {
    vaddss  xmm0, xmm7, xmm8
    vmovss  dword ptr [rsp+130h+end+8], xmm0
    vmovss  dword ptr [rsp+130h+end], xmm5
    vmovss  dword ptr [rsp+130h+end+4], xmm6
  }
  CL_AddDebugLine(&point->origin, &end, v31, 0, 0, 0);
  __asm
  {
    vcomiss xmm9, cs:__real@48742400
    vmovaps xmm8, xmmword ptr [rsp+130h+var_58+8]
  }
  if ( v38 )
  {
    v39 = j_va("%d", (unsigned int)pointIndex);
    __asm { vmovss  xmm2, cs:__real@3e99999a; scale }
    CG_DebugString(&end, v31, *(float *)&_XMM2, v39, 0, 0);
  }
  NodeError = BG_SpawnGroup_Loot_GetNodeError(pointIndex);
  if ( NodeError )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+130h+end]
      vmovss  xmm1, dword ptr [rsp+130h+end+4]
      vmovss  dword ptr [rsp+130h+var_C8], xmm0
      vmovss  xmm0, dword ptr [rsp+130h+end+8]
      vaddss  xmm2, xmm0, cs:__real@453b8000
      vmovss  dword ptr [rsp+130h+var_C8+8], xmm2
      vmovss  dword ptr [rsp+130h+var_C8+4], xmm1
    }
    switch ( NodeError )
    {
      case 1:
        CL_AddDebugLine(&end, &v76, &colorRed, 0, 0, 0);
        __asm { vcomiss xmm9, cs:__real@48742400 }
        if ( v38 )
        {
          __asm { vmovss  xmm7, cs:__real@41000000 }
          _ECX = point->cluster;
          __asm
          {
            vmovss  xmm4, dword ptr [rbx+8]
            vmovss  xmm6, dword ptr [rbx]
            vmovss  xmm5, dword ptr [rbx+4]
            vmovd   xmm0, ecx
            vaddss  xmm3, xmm7, xmm4
          }
          _EAX = 65533;
          __asm
          {
            vmovd   xmm1, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm4, xmm4, xmm3, xmm2
            vaddss  xmm3, xmm7, xmm6
            vsubss  xmm2, xmm5, xmm7
            vsubss  xmm0, xmm6, xmm7
            vmovss  dword ptr [rbp+30h+var_A8], xmm0
            vmovss  dword ptr [rbp+30h+var_98], xmm0
            vsubss  xmm0, xmm4, xmm7
            vaddss  xmm1, xmm5, xmm7
            vmovss  dword ptr [rbp+30h+var_88+8], xmm0
            vaddss  xmm0, xmm4, xmm7
            vmovss  dword ptr [rbp+30h+var_78+8], xmm0
            vmovss  dword ptr [rsp+130h+start], xmm3
            vmovss  dword ptr [rsp+130h+start+4], xmm2
            vmovss  dword ptr [rsp+130h+start+8], xmm4
            vmovss  dword ptr [rsp+130h+var_B8], xmm3
            vmovss  dword ptr [rsp+130h+var_B8+4], xmm1
            vmovss  dword ptr [rbp+30h+var_B8+8], xmm4
            vmovss  dword ptr [rbp+30h+var_A8+4], xmm1
            vmovss  dword ptr [rbp+30h+var_A8+8], xmm4
            vmovss  dword ptr [rbp+30h+var_98+4], xmm2
            vmovss  dword ptr [rbp+30h+var_98+8], xmm4
            vmovss  dword ptr [rbp+30h+var_88], xmm3
            vmovss  dword ptr [rbp+30h+var_88+4], xmm2
            vmovss  dword ptr [rbp+30h+var_78], xmm3
            vmovss  dword ptr [rbp+30h+var_78+4], xmm2
            vmovss  [rsp+130h+var_F0], xmm4
          }
          CL_AddDebugLine(&start, &v77, &colorRed, 0, 0, 0);
          CL_AddDebugLine(&v77, &v78, &colorRed, 0, 0, 0);
          CL_AddDebugLine(&v78, &v79, &colorRed, 0, 0, 0);
          CL_AddDebugLine(&v79, &start, &colorRed, 0, 0, 0);
          CL_AddDebugLine(&start, &v80, &colorRed, 0, 0, 0);
          v46 = &colorRed;
          v47 = &v81;
          p_start = &start;
          goto LABEL_27;
        }
        break;
      case 2:
        v46 = &colorOrange;
        v47 = &v76;
        p_start = &end;
        goto LABEL_27;
      case 3:
        v46 = &colorYellow;
        v47 = &v76;
        p_start = &end;
LABEL_27:
        CL_AddDebugLine(p_start, v47, v46, 0, 0, 0);
        break;
    }
  }
  if ( drawMode > 1 && zoneCenter )
    CL_AddDebugLine(&point->origin, zoneCenter, &colorWhite, 0, 0, 0);
LABEL_31:
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo
==============
*/

void __fastcall CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo(const ScreenPlacement *scrPlace, GfxFont *const font, double fontScale, double x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  unsigned int FlattenedImageCount; 
  const char *v28; 
  const char *FlattenedImageOverlayHeader; 
  const dvar_t *v45; 
  unsigned int unsignedInt; 
  unsigned int v51; 
  int v58; 
  int v63; 
  bool v64; 
  const char *CombinedMapOverlayHeader; 
  const dvar_t *v102; 
  unsigned int v104; 
  char v113; 
  char v114; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  vec4_t v163; 
  vec4_t v164; 
  unsigned int lenOut; 
  unsigned int v166[3]; 
  char text[1024]; 
  char v168; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  _R12 = color;
  _R13 = shadowColor;
  _R15 = scrPlace;
  __asm
  {
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm12, xmm3
  }
  FlattenedImageCount = R_ST_DebugGetFlattenedImageCount();
  v28 = j_va("Material and Layer Mask Texture Stats (%u textures):", FlattenedImageCount);
  __asm { vmovaps xmm3, xmm9; scale }
  FlattenedImageOverlayHeader = R_ST_DebugGetFlattenedImageOverlayHeader(&lenOut);
  UI_TextWidth(FlattenedImageOverlayHeader, 0, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r13+0]
    vmovss  xmm11, cs:__real@3f933333
    vmovss  xmm8, [rbp+470h+arg_28]
    vmovss  xmm3, [rbp+470h+arg_20]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm11
    vmovups xmm0, xmmword ptr [r12]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups [rsp+570h+var_528+8], xmm0
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, v28, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v147, font, v155, &v164, &v163);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r13+0]
    vaddss  xmm6, xmm8, [rbp+470h+arg_20]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm0
    vmovups [rsp+570h+var_528+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, FlattenedImageOverlayHeader, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v148, font, v156, &v163, &v164);
  v45 = DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+34h]
    vmulss  xmm15, xmm0, cs:__real@3f19999a
    vaddss  xmm6, xmm6, xmm8
    vmovaps xmm13, xmm6
  }
  if ( !DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoMaterialLayerScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  unsignedInt = v45->current.unsignedInt;
  v51 = 0;
  __asm { vmovaps xmm7, xmm6 }
  R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(text, 0x400u);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm14, xmm0, xmm11
  }
  if ( unsignedInt < R_ST_DebugGetFlattenedImageCount() )
  {
    __asm { vmovss  xmm11, cs:__real@3fa00000 }
    v58 = 1;
    do
    {
      R_ST_DebugPopulateFlattenedImageInfoString(unsignedInt, text, 0x400u);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups xmm1, xmmword ptr [r13+0]
        vmovss  dword ptr [rsp+570h+var_538], xmm9
        vmovss  dword ptr [rsp+570h+var_548], xmm8
        vmovaps xmm3, xmm6
        vmovaps xmm2, xmm10
        vmovss  dword ptr [rsp+570h+fmt], xmm14
        vmovups xmmword ptr [rsp+570h+var_518+8], xmm0
        vmovups [rsp+570h+var_528+8], xmm1
      }
      CG_DrawDebug_DrawTextWithBackground(_R15, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v149, font, v157, &v163, &v164);
      __asm { vmovaps xmm3, xmm9; scale }
      v63 = UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
      v64 = v63 <= v51;
      __asm { vaddss  xmm6, xmm6, xmm8 }
      if ( v63 > (int)v51 )
        v51 = v63;
      __asm
      {
        vcomiss xmm6, xmm15
        vmaxss  xmm7, xmm7, xmm6
      }
      if ( !v64 )
      {
        if ( v58 >= 2 )
          break;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm1, xmm0, xmm11
          vcvttss2si eax, xmm1
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, eax
          vaddss  xmm10, xmm10, xmm2
          vmovaps xmm6, xmm13
        }
        ++v58;
      }
      ++unsignedInt;
    }
    while ( unsignedInt < R_ST_DebugGetFlattenedImageCount() );
    __asm { vmovss  xmm11, cs:__real@3f933333 }
  }
  R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  __asm
  {
    vmovss  xmm13, cs:__real@35800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm13
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  Com_sprintf(text, 0x400ui64, "Material/Mask Image memory usage: %.1f MB", *(double *)&_XMM3);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r12]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm11
    vmovups xmm0, xmmword ptr [r13+0]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovss  dword ptr [rsp+570h+fmt], xmm2
    vmovaps xmm2, xmm12
    vmovaps xmm3, xmm7
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm1
    vmovups [rsp+570h+var_528+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v150, font, v158, &v163, &v164);
  __asm
  {
    vmulss  xmm10, xmm8, cs:__real@40000000
    vaddss  xmm0, xmm7, xmm8
    vaddss  xmm6, xmm0, xmm10
    vmovaps xmm3, xmm9; scale
  }
  CombinedMapOverlayHeader = R_ST_DebugGetCombinedMapOverlayHeader(v166);
  UI_TextWidth(CombinedMapOverlayHeader, 0, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r12]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm11
    vmovups xmm0, xmmword ptr [r13+0]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm1
    vmovups [rsp+570h+var_528+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, "Combined Map Image Stats:", *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v151, font, v159, &v163, &v164);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r13+0]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vaddss  xmm6, xmm6, xmm8
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm0
    vmovups [rsp+570h+var_528+8], xmm1
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm12
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, CombinedMapOverlayHeader, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v152, font, v160, &v163, &v164);
  v102 = DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll;
  __asm { vaddss  xmm6, xmm6, xmm8 }
  if ( !DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoCombinedMapScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v102);
  v104 = v102->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(text, 0x400u);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm11
  }
  for ( ; v104 < R_ST_DebugGetTerrainSurfaceCount(); ++v104 )
  {
    R_ST_DebugPopulateCombinedMapImageInfoString(v104, text, 0x400u);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r13+0]
      vmovss  dword ptr [rsp+570h+var_538], xmm9
      vmovss  dword ptr [rsp+570h+var_548], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm12
      vmovss  dword ptr [rsp+570h+fmt], xmm7
      vmovups xmmword ptr [rsp+570h+var_518+8], xmm0
      vmovups [rsp+570h+var_528+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(_R15, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v153, font, v161, &v163, &v164);
    __asm
    {
      vaddss  xmm6, xmm6, xmm8
      vaddss  xmm0, xmm10, xmm6
      vcomiss xmm0, dword ptr [r15+34h]
    }
    if ( !(v113 | v114) )
      break;
  }
  R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm13
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(text, 0x400ui64, "Combined Map memory usage: %.1f MB", *(double *)&_XMM3);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r12]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm11
    vmovups xmm0, xmmword ptr [r13+0]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+570h+fmt], xmm4
    vmovups xmmword ptr [rsp+570h+var_518+8], xmm1
    vmovups [rsp+570h+var_528+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R15, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v154, font, v162, &v163, &v164);
  _R11 = &v168;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainGeoInfo
==============
*/

void __fastcall CG_DrawDebug_DrawSuperTerrainGeoInfo(const vec3_t *dpvsCamPos, const ScreenPlacement *scrPlace, GfxFont *const font, double fontScale, float x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  unsigned int TerrainSurfaceCount; 
  const char *v27; 
  const char *RenderedMeshGeoOverlayHeader; 
  const dvar_t *v45; 
  unsigned int unsignedInt; 
  ST_DebugAssetRenderAvailability v53; 
  char v59; 
  char v60; 
  const char *v67; 
  __int64 v68; 
  const char *v69; 
  __int64 v70; 
  unsigned int v81; 
  const char *v82; 
  const char *StreamedMeshGeoOverlayHeader; 
  const char *v84; 
  __int64 v85; 
  const dvar_t *v99; 
  unsigned int v101; 
  ST_DebugAssetRenderAvailability v107; 
  const char *v118; 
  const char *v119; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  unsigned int totalMemory; 
  vec4_t v162; 
  vec4_t v163; 
  unsigned int lenOut; 
  unsigned int totalNodesMissing; 
  unsigned int totalIdealNodesRendered; 
  unsigned int outTotalNodesStreamed; 
  unsigned int v168[4]; 
  char text[1024]; 
  char v170; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovss  xmm0, dword ptr [rdx+34h]
    vmulss  xmm12, xmm0, cs:__real@3f19999a
  }
  _R13 = color;
  _R15 = shadowColor;
  _R14 = scrPlace;
  __asm { vmovaps xmm9, xmm3 }
  TerrainSurfaceCount = R_ST_DebugGetTerrainSurfaceCount();
  v27 = j_va("Rendered Mesh Geo info, ignoring occlusion and frustum culling (%u surfaces):", TerrainSurfaceCount);
  __asm { vmovaps xmm3, xmm9; scale }
  RenderedMeshGeoOverlayHeader = R_ST_DebugGetRenderedMeshGeoOverlayHeader(&lenOut);
  UI_TextWidth(RenderedMeshGeoOverlayHeader, lenOut, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r15]
    vmovss  xmm14, cs:__real@3f933333
    vmovss  xmm8, [rbp+470h+arg_30]
    vmovss  xmm10, [rbp+470h+arg_20]
    vmovss  xmm3, [rbp+470h+arg_28]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm14
    vmovups xmm0, xmmword ptr [r13+0]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups [rsp+570h+var_518+8], xmm0
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, v27, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v145, font, v153, &v163, &v162);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmm1, xmmword ptr [r15]
    vaddss  xmm6, xmm8, [rbp+470h+arg_28]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm0
    vmovups [rsp+570h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, RenderedMeshGeoOverlayHeader, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v146, font, v154, &v162, &v163);
  v45 = DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll;
  __asm { vaddss  xmm6, xmm6, xmm8 }
  if ( !DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoRenderedGeoScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  unsignedInt = v45->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString(text, 0x400u);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm11, xmm0, xmm14
  }
  if ( unsignedInt < R_ST_DebugGetTerrainSurfaceCount() )
  {
    __asm { vmulss  xmm7, xmm8, cs:__real@40000000 }
    do
    {
      v53 = R_ST_DebugPopulateRenderedMeshGeoInfoString(dpvsCamPos, unsignedInt, text, 0x400u);
      _RAX = R_ST_DebugGetColorFromAvailablity(v53);
      __asm
      {
        vmovups xmm1, xmmword ptr [r15]
        vmovaps xmm3, xmm6
        vmovaps xmm2, xmm10
        vmovups xmm0, xmmword ptr [rax]
        vmovss  dword ptr [rsp+570h+var_538], xmm9
        vmovss  dword ptr [rsp+570h+var_548], xmm8
        vmovss  dword ptr [rsp+570h+fmt], xmm11
        vmovups xmmword ptr [rsp+570h+var_508+8], xmm0
        vmovups [rsp+570h+var_518+8], xmm1
      }
      CG_DrawDebug_DrawTextWithBackground(_R14, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v147, font, v155, &v162, &v163);
      __asm
      {
        vaddss  xmm6, xmm6, xmm8
        vaddss  xmm0, xmm7, xmm6
        vcomiss xmm0, xmm12
      }
      if ( !(v59 | v60) )
        break;
      ++unsignedInt;
    }
    while ( unsignedInt < R_ST_DebugGetTerrainSurfaceCount() );
  }
  R_ST_DebugGetTotalRenderedMeshGeoMemory(dpvsCamPos, &totalMemory, &totalIdealNodesRendered, &totalNodesMissing);
  __asm
  {
    vmovss  xmm12, cs:__real@35800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm12
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  v67 = j_va("Total ideally rendered nodes: %u  Total missing nodes: %u  Total memory: %.1f mb\n", totalIdealNodesRendered, totalNodesMissing, _R9);
  v68 = -1i64;
  v69 = v67;
  v70 = -1i64;
  do
    ++v70;
  while ( v67[v70] );
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(v67, v70, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r13+0]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm14
    vmovups xmm0, xmmword ptr [r15]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovss  dword ptr [rsp+570h+fmt], xmm2
    vmovaps xmm2, xmm10
    vmovaps xmm3, xmm6
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm1
    vmovups [rsp+570h+var_518+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, v69, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v148, font, v156, &v162, &v163);
  __asm
  {
    vmulss  xmm0, xmm8, cs:__real@40400000
    vaddss  xmm6, xmm6, xmm0
  }
  v81 = R_ST_DebugGetTerrainSurfaceCount();
  v82 = j_va("Streamed Mesh Geo info (%u surfaces):", v81);
  StreamedMeshGeoOverlayHeader = R_ST_DebugGetStreamedMeshGeoOverlayHeader(v168);
  v84 = StreamedMeshGeoOverlayHeader;
  v85 = -1i64;
  do
    ++v85;
  while ( StreamedMeshGeoOverlayHeader[v85] );
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(StreamedMeshGeoOverlayHeader, v85, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r13+0]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, xmm14
    vmovups xmm0, xmmword ptr [r15]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm1
    vmovups [rsp+570h+var_518+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, v82, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v149, font, v157, &v162, &v163);
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+570h+fmt], xmm7
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm0
    vmovups [rsp+570h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, v84, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v150, font, v158, &v162, &v163);
  v99 = DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll;
  __asm { vaddss  xmm6, xmm6, xmm8 }
  if ( !DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoStreamedGeoScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  v101 = v99->current.unsignedInt;
  R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString(text, 0x400u);
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm11, xmm0, xmm14
  }
  if ( v101 < R_ST_DebugGetTerrainSurfaceCount() )
  {
    __asm { vmulss  xmm7, xmm8, cs:__real@40000000 }
    do
    {
      v107 = R_ST_DebugPopulateStreamedMeshGeoInfoString(v101, text, 0x400u);
      _RAX = R_ST_DebugGetColorFromAvailablity(v107);
      __asm
      {
        vmovups xmm1, xmmword ptr [r15]
        vmovaps xmm3, xmm6
        vmovaps xmm2, xmm10
        vmovups xmm0, xmmword ptr [rax]
        vmovss  dword ptr [rsp+570h+var_538], xmm9
        vmovss  dword ptr [rsp+570h+var_548], xmm8
        vmovss  dword ptr [rsp+570h+fmt], xmm11
        vmovups xmmword ptr [rsp+570h+var_508+8], xmm0
        vmovups [rsp+570h+var_518+8], xmm1
      }
      CG_DrawDebug_DrawTextWithBackground(_R14, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v151, font, v159, &v162, &v163);
      __asm
      {
        vaddss  xmm6, xmm6, xmm8
        vaddss  xmm0, xmm7, xmm6
        vcomiss xmm0, dword ptr [r14+34h]
      }
      if ( !(v59 | v60) )
        break;
      ++v101;
    }
    while ( v101 < R_ST_DebugGetTerrainSurfaceCount() );
  }
  R_ST_DebugGetTotalStreamedMeshGeoMemory(&totalMemory, &outTotalNodesStreamed);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm12
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  v118 = j_va("Total nodes: %u  Total memory: %.1f MB\n", outTotalNodesStreamed, _R8);
  v119 = v118;
  do
    ++v68;
  while ( v118[v68] );
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(v118, v68, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r13+0]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm14
    vmovups xmm0, xmmword ptr [r15]
    vmovss  dword ptr [rsp+570h+var_538], xmm9
    vmovss  dword ptr [rsp+570h+var_548], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+570h+fmt], xmm4
    vmovups xmmword ptr [rsp+570h+var_508+8], xmm1
    vmovups [rsp+570h+var_518+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_R14, v119, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v152, font, v160, &v162, &v163);
  _R11 = &v170;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, xmmword ptr [r11-88h]
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo
==============
*/

void __fastcall CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo(const ScreenPlacement *scrPlace, GfxFont *const font, double fontScale, double x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  const char *v22; 
  const char *HeightCutoutLmapOverlayHeader; 
  const char *v24; 
  __int64 v25; 
  const dvar_t *v40; 
  unsigned int unsignedInt; 
  ST_DebugAssetRenderAvailability v48; 
  char v54; 
  char v55; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  vec4_t v114; 
  vec4_t v115; 
  char text[1024]; 
  char v117; 
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
  }
  _R15 = color;
  _RDI = scrPlace;
  _R14 = shadowColor;
  __asm
  {
    vmovaps xmm11, xmm3
    vmovaps xmm10, xmm2
  }
  v22 = j_va("Height, Cutout, and Light maps stats:");
  HeightCutoutLmapOverlayHeader = R_ST_DebugGetHeightCutoutLmapOverlayHeader();
  v24 = HeightCutoutLmapOverlayHeader;
  v25 = -1i64;
  do
    ++v25;
  while ( HeightCutoutLmapOverlayHeader[v25] );
  __asm { vmovaps xmm3, xmm10; scale }
  UI_TextWidth(HeightCutoutLmapOverlayHeader, v25, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r14]
    vmovss  xmm9, [rbp+410h+arg_28]
    vmovss  xmm3, [rbp+410h+arg_20]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, cs:__real@3f933333
    vmovups xmm0, xmmword ptr [r15]
    vmovss  dword ptr [rsp+510h+var_4D8], xmm10
    vmovss  dword ptr [rsp+510h+var_4E8], xmm9
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+510h+fmt], xmm7
    vmovups [rsp+510h+var_4C8+8], xmm0
    vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_RDI, v22, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v102, font, v108, &v115, &v114);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmm1, xmmword ptr [r14]
    vaddss  xmm6, xmm9, [rbp+410h+arg_20]
    vmovss  dword ptr [rsp+510h+var_4D8], xmm10
    vmovss  dword ptr [rsp+510h+var_4E8], xmm9
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+510h+fmt], xmm7
    vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm0
    vmovups [rsp+510h+var_4C8+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_RDI, v24, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v103, font, v109, &v114, &v115);
  v40 = DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll;
  __asm { vaddss  xmm6, xmm6, xmm9 }
  if ( !DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoHeightCutoutLmapScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  unsignedInt = v40->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString(text, 0x400u);
  __asm { vmovaps xmm3, xmm10; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm8, xmm0, cs:__real@3f933333
  }
  if ( unsignedInt < R_ST_DebugGetTerrainSurfaceCount() )
  {
    __asm { vmulss  xmm7, xmm9, cs:__real@40800000 }
    do
    {
      v48 = R_ST_DebugPopulateHeightCutoutLmapImageInfoString(unsignedInt, text, 0x400u);
      _RAX = R_ST_DebugGetColorFromAvailablity(v48);
      __asm
      {
        vmovups xmm1, xmmword ptr [r14]
        vmovaps xmm3, xmm6
        vmovaps xmm2, xmm11
        vmovups xmm0, xmmword ptr [rax]
        vmovss  dword ptr [rsp+510h+var_4D8], xmm10
        vmovss  dword ptr [rsp+510h+var_4E8], xmm9
        vmovss  dword ptr [rsp+510h+fmt], xmm8
        vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm0
        vmovups [rsp+510h+var_4C8+8], xmm1
      }
      CG_DrawDebug_DrawTextWithBackground(_RDI, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v104, font, v110, &v114, &v115);
      __asm
      {
        vaddss  xmm6, xmm6, xmm9
        vaddss  xmm0, xmm7, xmm6
        vcomiss xmm0, dword ptr [rdi+34h]
      }
      if ( !(v54 | v55) )
        break;
      ++unsignedInt;
    }
    while ( unsignedInt < R_ST_DebugGetTerrainSurfaceCount() );
  }
  R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  __asm
  {
    vmovss  xmm7, cs:__real@35800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm7
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  Com_sprintf(text, 0x400ui64, "Current streamed height map memory usage: %.1f MB", *(double *)&_XMM3);
  __asm { vmovaps xmm3, xmm10; scale }
  UI_TextWidth(text, 1024, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r15]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm8, xmm0, cs:__real@3f933333
    vmovups xmm0, xmmword ptr [r14]
    vmovss  dword ptr [rsp+510h+var_4D8], xmm10
    vmovss  dword ptr [rsp+510h+var_4E8], xmm9
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+510h+fmt], xmm8
    vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm1
    vmovups [rsp+510h+var_4C8+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(_RDI, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v105, font, v111, &v114, &v115);
  __asm { vaddss  xmm6, xmm6, xmm9 }
  R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(text, 0x400ui64, "Current streamed cutout map memory usage: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmm1, xmmword ptr [r14]
    vmovss  dword ptr [rsp+510h+var_4D8], xmm10
    vmovss  dword ptr [rsp+510h+var_4E8], xmm9
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+510h+fmt], xmm8
    vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm0
    vmovups [rsp+510h+var_4C8+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(_RDI, text, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v106, font, v112, &v114, &v115);
  R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(text, 0x400ui64, "Current streamed lightmap memory usage:   %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmm1, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+510h+var_4B8+8], xmm0
    vmovups [rsp+510h+var_4C8+8], xmm1
    vmovss  dword ptr [rsp+510h+var_4D8], xmm10
    vmovss  dword ptr [rsp+510h+var_4E8], xmm9
    vaddss  xmm3, xmm6, xmm9
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+510h+fmt], xmm8
  }
  CG_DrawDebug_DrawTextWithBackground(_RDI, text, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v107, font, v113, &v114, &v115);
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainInfo
==============
*/
void CG_DrawDebug_DrawSuperTerrainInfo(const LocalClientNum_t localClientNum)
{
  const vec4_t *ColorFromAvailablity; 
  const dvar_t *v8; 
  int integer; 
  cg_t *LocalClientGlobals; 
  GfxFont *FontHandle; 
  const dvar_t *v17; 
  GfxFont *v18; 
  const dvar_t *v21; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  vec4_t v52; 
  vec4_t v53; 
  vec3_t outOrg; 

  ColorFromAvailablity = R_ST_DebugGetColorFromAvailablity(ST_DEBUG_OK_TO_RENDER);
  v8 = DVARINT_cg_drawTerrainStreamingInfo;
  _RBP = ColorFromAvailablity;
  if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( R_ST_IsLoaded() )
  {
    _RDI = DVARFLT_cg_drawTerrainStreamingInfoScale;
    __asm
    {
      vmovaps [rsp+0E8h+var_28], xmm6
      vmovaps [rsp+0E8h+var_38], xmm7
      vmovaps [rsp+0E8h+var_48], xmm8
      vmovaps [rsp+0E8h+var_58], xmm9
    }
    if ( !DVARFLT_cg_drawTerrainStreamingInfoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vmovups xmm9, cs:__xmm@3ecccccd000000000000000000000000
    }
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3998, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm6; scale }
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 5, *(float *)&_XMM2);
    v17 = DVARINT_cg_drawTerrainStreamingInfoPosX;
    v18 = FontHandle;
    if ( !DVARINT_cg_drawTerrainStreamingInfoPosX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoPosX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, dword ptr [rsi+28h]
    }
    v21 = DVARINT_cg_drawTerrainStreamingInfoPosY;
    if ( !DVARINT_cg_drawTerrainStreamingInfoPosY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoPosY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, dword ptr [rsi+28h]
      vmovaps xmm1, xmm6; scale
    }
    UI_TextHeight(v18, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3fa00000
    }
    switch ( integer )
    {
      case 1:
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovss  dword ptr [rsp+0E8h+var_B8], xmm1
          vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
          vmovaps xmm3, xmm6
          vmovss  dword ptr [rsp+0E8h+fmt], xmm8
          vmovdqa [rsp+0E8h+var_98], xmm9
          vmovups [rsp+0E8h+var_88], xmm0
        }
        CG_DrawDebug_DrawSuperTerrainStreamingOverview(&outOrg, &scrPlaceFullUnsafe, v18, *(const float *)&_XMM3, fmt, v46, v50, &v53, &v52);
        break;
      case 2:
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovss  dword ptr [rsp+0E8h+var_C0], xmm1
          vmovaps xmm3, xmm8
          vmovaps xmm2, xmm6
          vmovss  dword ptr [rsp+0E8h+fmt], xmm7
          vmovdqa [rsp+0E8h+var_88], xmm9
          vmovups [rsp+0E8h+var_98], xmm0
        }
        CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo(&scrPlaceFullUnsafe, v18, *(double *)&_XMM2, *(double *)&_XMM3, fmta, v47, &v52, &v53);
        break;
      case 3:
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovss  dword ptr [rsp+0E8h+var_B8], xmm1
          vmovss  dword ptr [rsp+0E8h+var_C0], xmm7
          vmovaps xmm3, xmm6
          vmovss  dword ptr [rsp+0E8h+fmt], xmm8
          vmovdqa [rsp+0E8h+var_88], xmm9
          vmovups [rsp+0E8h+var_98], xmm0
        }
        CG_DrawDebug_DrawSuperTerrainGeoInfo(&outOrg, &scrPlaceFullUnsafe, v18, *(double *)&_XMM3, fmtb, v48, v51, &v52, &v53);
        break;
      case 4:
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vmovss  dword ptr [rsp+0E8h+var_C0], xmm1
          vmovaps xmm3, xmm8
          vmovaps xmm2, xmm6
          vmovss  dword ptr [rsp+0E8h+fmt], xmm7
          vmovdqa [rsp+0E8h+var_88], xmm9
          vmovups [rsp+0E8h+var_98], xmm0
        }
        CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo(&scrPlaceFullUnsafe, v18, *(double *)&_XMM2, *(double *)&_XMM3, fmtc, v49, &v52, &v53);
        break;
      default:
        if ( integer )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4024, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented code") )
            __debugbreak();
        }
        break;
    }
    __asm
    {
      vmovaps xmm8, [rsp+0E8h+var_48]
      vmovaps xmm7, [rsp+0E8h+var_38]
      vmovaps xmm6, [rsp+0E8h+var_28]
      vmovaps xmm9, [rsp+0E8h+var_58]
    }
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainStreamingOverview
==============
*/

void __fastcall CG_DrawDebug_DrawSuperTerrainStreamingOverview(const vec3_t *dpvsCamPos, const ScreenPlacement *scrPlace, GfxFont *const font, double fontScale, float x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  unsigned int TerrainSurfaceCount; 
  unsigned int TotalHeightmapImageCurrentMemoryUsage; 
  unsigned int TotalCutoutmapImageCurrentMemoryUsage; 
  unsigned int v50; 
  unsigned int TotalFlattenedImageMemoryUsage; 
  unsigned int TotalCombinedMapImageCurrentMemoryUsage; 
  unsigned int FlattenedImageCount; 
  unsigned int TotalLightmapCount; 
  float missingGeo; 
  float missingGeoa; 
  float missingGeob; 
  float missingGeoc; 
  float missingGeod; 
  float missingGeoe; 
  float missingGeof; 
  float missingGeog; 
  float missingGeoh; 
  float missingGeoi; 
  float missingGeoj; 
  float missingGeok; 
  unsigned int *missingGeol; 
  float missingGeom; 
  float missingGeon; 
  float missingGeoo; 
  float missingGeop; 
  float missingGeoq; 
  float missingGeor; 
  float missingGeos; 
  unsigned int *missingGeot; 
  float missingGeou; 
  float missingGeov; 
  float missingGeow; 
  float missingGeox; 
  float missingGeoy; 
  float missingGeoz; 
  float missingGeoba; 
  float missingGeobb; 
  float missingGeobc; 
  float missingGeobd; 
  float missingGeobe; 
  float missingGeobf; 
  float missingGeobg; 
  float missingGeobh; 
  float v285; 
  float v286; 
  float v287; 
  float v288; 
  float v289; 
  float v290; 
  float v291; 
  float v292; 
  float v293; 
  float v294; 
  float v295; 
  float v296; 
  __int64 v297; 
  float v298; 
  float v299; 
  float v300; 
  float v301; 
  float v302; 
  float v303; 
  float v304; 
  double v305; 
  float v306; 
  float v307; 
  float v308; 
  float v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  float v314; 
  float v315; 
  float v316; 
  float v317; 
  float v318; 
  float v319; 
  float v320; 
  float v321; 
  float v322; 
  float v323; 
  float v324; 
  float v325; 
  float v326; 
  float v327; 
  float v328; 
  float v329; 
  float v330; 
  float v331; 
  float v332; 
  float v333; 
  float v334; 
  float v335; 
  float v336; 
  float v337; 
  float v338; 
  float v339; 
  float v340; 
  float v341; 
  float v342; 
  float v343; 
  float v344; 
  float v345; 
  float v346; 
  float v347; 
  float v348; 
  float v349; 
  float v350; 
  float v351; 
  float v352; 
  vec4_t v353; 
  vec4_t v354; 
  unsigned int outTotalMemory; 
  unsigned int outTotalNodesStreamed; 
  unsigned int outAvg; 
  unsigned int outMax; 
  unsigned int outMin; 
  float v360; 
  float v361; 
  float v362; 
  unsigned int totalNodesMissing; 
  unsigned int surfaceErrors; 
  unsigned int surfaceWarns; 
  unsigned int missingHeights; 
  unsigned int missingCutouts; 
  unsigned int v368; 
  unsigned int totalIdealNodesRendered; 
  unsigned int totalMemory; 
  char dest[1024]; 
  char v372; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  _R12 = color;
  _R15 = shadowColor;
  __asm { vmovaps xmm9, xmm3 }
  v23 = j_va("Super Terrain Streaming Stats Overview:");
  v24 = v23;
  v25 = -1i64;
  do
    ++v25;
  while ( v23[v25] );
  __asm { vmovaps xmm3, xmm9; scale }
  UI_TextWidth(v23, v25, font, *(float *)&_XMM3);
  __asm
  {
    vmovups xmm1, xmmword ptr [r12]
    vmovss  xmm8, [rbp+460h+arg_30]
    vmovss  xmm11, [rbp+460h+arg_20]
    vmovss  xmm3, [rbp+460h+arg_28]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm10, xmm0, cs:__real@3fdccccc
    vmovups xmm0, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups [rsp+560h+var_518+8], xmm1
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v24, *(float *)&_XMM2, *(float *)&_XMM3, missingGeo, v285, font, v320, &v354, &v353);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vaddss  xmm6, xmm8, [rbp+460h+arg_28]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoa, v286, font, v321, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  TerrainSurfaceCount = R_ST_DebugGetTerrainSurfaceCount();
  Com_sprintf(dest, 0x400ui64, "Number of terrain surfaces: %u", TerrainSurfaceCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeob, v287, font, v322, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalStreamedMeshGeoMemory(&outTotalMemory, &outTotalNodesStreamed);
  TotalHeightmapImageCurrentMemoryUsage = R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  TotalCutoutmapImageCurrentMemoryUsage = R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  v50 = TotalCutoutmapImageCurrentMemoryUsage + R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage() + TotalHeightmapImageCurrentMemoryUsage;
  TotalFlattenedImageMemoryUsage = R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  TotalCombinedMapImageCurrentMemoryUsage = R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, "Current streamed memory: %u MB", (outTotalMemory + TotalFlattenedImageMemoryUsage + v50 + TotalCombinedMapImageCurrentMemoryUsage) >> 20);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoc, v288, font, v323, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeod, v289, font, v324, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  FlattenedImageCount = R_ST_DebugGetFlattenedImageCount();
  Com_sprintf(dest, 0x400ui64, "Layer mask and material textures (%u)", FlattenedImageCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoe, v290, font, v325, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  __asm
  {
    vmovss  xmm7, cs:__real@35800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm7
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeof, v291, font, v326, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeog, v292, font, v327, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x400ui64, "'Combined Map' memory usage: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoh, v293, font, v328, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoi, v294, font, v329, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetHeightmapPixelSizeStats(&outMin, &outMax, &outAvg);
  Com_sprintf(dest, 0x400ui64, "Height map stats:");
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoj, v295, font, v330, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeok, v296, font, v331, &v353, &v354);
  LODWORD(v297) = outAvg;
  LODWORD(missingGeol) = outMax;
  __asm { vaddss  xmm6, xmm6, xmm8 }
  Com_sprintf(dest, 0x400ui64, " - pixel size: min(%u) max(%u) avg(%u)", outMin, missingGeol, v297);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeom, v298, font, v332, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeon, v299, font, v333, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x400ui64, "Cutout map current memory: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoo, v300, font, v334, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeop, v301, font, v335, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetLightmapDensityStatsUnitPerPixel(&v362, &v361, &v360);
  Com_sprintf(dest, 0x400ui64, "Lightmap stats:");
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoq, v302, font, v336, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  TotalLightmapCount = R_ST_DebugGetTotalLightmapCount();
  Com_sprintf(dest, 0x400ui64, " - %u terrain surfaces have lightmaps", TotalLightmapCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeor, v303, font, v337, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeos, v304, font, v338, &v353, &v354);
  __asm
  {
    vmovss  xmm0, [rbp+460h+var_4DC]
    vmovss  xmm3, [rbp+460h+var_4D4]
    vmovss  xmm1, [rbp+460h+var_4D8]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+560h+var_538], xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+560h+missingGeo], xmm1
    vaddss  xmm6, xmm6, xmm8
  }
  Com_sprintf(dest, 0x400ui64, " - density (in/px): min(%.0f) max(%.0f) avg(%.0f)", *(double *)&_XMM3, *(double *)&missingGeot, v305);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeou, v306, font, v339, &v353, &v354);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vaddss  xmm6, xmm6, xmm8
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeov, v307, font, v340, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  Com_sprintf(dest, 0x400ui64, "Geometry stats:");
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeow, v308, font, v341, &v353, &v354);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
    vaddss  xmm6, xmm6, xmm8
  }
  Com_sprintf(dest, 0x400ui64, "- current memory: %.1f MB", *(double *)&_XMM3);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeox, v309, font, v342, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  Com_sprintf(dest, 0x400ui64, "- current node count: %u", outTotalNodesStreamed);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoy, v310, font, v343, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  R_ST_DebugGetTotalRenderedMeshGeoMemory(dpvsCamPos, &totalMemory, &totalIdealNodesRendered, &totalNodesMissing);
  Com_sprintf(dest, 0x400ui64, "- missing node count: %u", totalNodesMissing);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoz, v311, font, v344, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  Com_sprintf(dest, 0x400ui64, "- current node count: %u", outTotalNodesStreamed);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovss  dword ptr [rsp+560h+var_528], xmm9
    vmovss  dword ptr [rsp+560h+var_538], xmm8
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
    vmovups [rsp+560h+var_518+8], xmm1
  }
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeoba, v312, font, v345, &v353, &v354);
  __asm { vaddss  xmm6, xmm6, xmm8 }
  if ( R_ST_DebugGetSurfaceRenderingAvailabilityStats(&surfaceWarns, &surfaceErrors, &missingHeights, &missingCutouts, &v368) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobb, v313, font, v346, &v353, &v354);
    __asm { vaddss  xmm6, xmm6, xmm8 }
    Com_sprintf(dest, 0x400ui64, "Lack of resources for super terrain:");
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobc, v314, font, v347, &v353, &v354);
    __asm { vaddss  xmm6, xmm6, xmm8 }
    Com_sprintf(dest, 0x400ui64, "- %u surfaces cannot draw, and are being dropped", surfaceErrors);
    _RAX = R_ST_DebugGetColorFromAvailablity(ST_DEBUG_CANNOT_RENDER);
    __asm
    {
      vmovups xmm1, xmmword ptr [r15]
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovups xmm0, xmmword ptr [rax]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobd, v315, font, v348, &v353, &v354);
    __asm { vaddss  xmm6, xmm6, xmm8 }
    Com_sprintf(dest, 0x400ui64, "- %u surfaces cannot draw, but are not currently in view", surfaceWarns);
    _RAX = R_ST_DebugGetColorFromAvailablity(ST_DEBUG_RENDER_WARNING);
    __asm
    {
      vmovups xmm1, xmmword ptr [r15]
      vmovups [rsp+560h+var_518+8], xmm1
      vmovups xmm0, xmmword ptr [rax]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobe, v316, font, v349, &v353, &v354);
    __asm { vaddss  xmm6, xmm6, xmm8 }
    Com_sprintf(dest, 0x400ui64, "- %u missing heightmaps", missingHeights);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobf, v317, font, v350, &v353, &v354);
    __asm { vaddss  xmm6, xmm6, xmm8 }
    Com_sprintf(dest, 0x400ui64, "- %u missing cutout maps", missingCutouts);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobg, v318, font, v351, &v353, &v354);
    Com_sprintf(dest, 0x400ui64, "- %u missing base LoD geo", v368);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmm1, xmmword ptr [r15]
      vmovss  dword ptr [rsp+560h+var_528], xmm9
      vmovss  dword ptr [rsp+560h+var_538], xmm8
      vaddss  xmm3, xmm6, xmm8
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+560h+missingGeo], xmm10
      vmovups xmmword ptr [rsp+560h+var_508+8], xmm0
      vmovups [rsp+560h+var_518+8], xmm1
    }
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, *(float *)&_XMM2, *(float *)&_XMM3, missingGeobh, v319, font, v352, &v353, &v354);
  }
  _R11 = &v372;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
CG_DrawDebug_DrawSvProfile
==============
*/
void CG_DrawDebug_DrawSvProfile(LocalClientNum_t localClientNum)
{
  __int64 v10; 
  char *v37; 
  __int64 v38; 
  GfxFont *font; 
  const char *s; 
  GfxFont *smallDevFont; 
  const char *v45; 
  GfxFont *v49; 
  const char *v50; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  SvProfileDrawFrame result; 
  char v68; 
  char v69; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RAX = SV_Profile_GetDrawFrame(&result);
  _RDX = &v68;
  v10 = 9i64;
  do
  {
    _RDX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (SvProfileDrawFrame *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v10;
  }
  while ( v10 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovss  xmm7, cs:__real@3f19999a
  }
  _RSI = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm8, dword ptr [rax+28h]
    vmovss  xmm6, dword ptr [rax+2Ch]
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
    vmovss  [rsp+0A88h+var_A68], xmm7
  }
  CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v61, "SvProfile (Smoothed)", &colorGreen, 5, cls.smallDevFont);
  __asm
  {
    vaddss  xmm9, xmm8, cs:__real@42c80000
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+0A88h+var_A68], xmm7
  }
  CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v62, "Count", &colorGreen, 5, cls.smallDevFont);
  __asm
  {
    vaddss  xmm10, xmm8, cs:__real@43020000
    vmovaps xmm3, xmm7; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm10; x
    vmovss  [rsp+0A88h+var_A68], xmm7
  }
  CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v63, "Time(us)", &colorGreen, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm6, xmm6, xmm0
  }
  v37 = &v69;
  v38 = 52i64;
  do
  {
    font = cls.smallDevFont;
    s = j_va((const char *)&queryFormat, *((_QWORD *)v37 - 2));
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
      vmovss  [rsp+0A88h+var_A68], xmm7
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v64, s, &colorWhite, 5, font);
    smallDevFont = cls.smallDevFont;
    v45 = j_va("%u", *((unsigned int *)v37 - 2));
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  [rsp+0A88h+var_A68], xmm7
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v65, v45, &colorWhite, 5, smallDevFont);
    v49 = cls.smallDevFont;
    v50 = j_va("%lu", *(_QWORD *)v37);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  [rsp+0A88h+var_A68], xmm7
    }
    CG_DrawDevString(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v66, v50, &colorWhite, 5, v49);
    v37 += 24;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm6, xmm6, xmm0
    }
    --v38;
  }
  while ( v38 );
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DrawDebug_DrawTextWithBackground
==============
*/

void __fastcall CG_DrawDebug_DrawTextWithBackground(const ScreenPlacement *scrPlace, const char *text, double x, double y, const float origRectW, const float origRectH, GfxFont *const font, const float fontScale, const vec4_t *shadowColor, const vec4_t *color)
{
  __int64 v32; 
  float fmt; 
  float fmta; 
  int horzAlign; 
  float material; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
    vmovss  xmm1, [rsp+0E8h+arg_28]
    vsubss  xmm9, xmm1, cs:rectHeightOffset
    vmovaps xmm11, xmm3
    vsubss  xmm0, xmm11, cs:rectHeightOffset
    vmovss  xmm3, cs:rectWidthOffset
    vsubss  xmm7, xmm0, xmm1
    vmulss  xmm0, xmm3, cs:__real@40000000
    vaddss  xmm8, xmm0, [rsp+0E8h+arg_20]
    vmovaps xmm10, xmm2
    vsubss  xmm6, xmm2, xmm3
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3568, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm8; width
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+0E8h+fmt], xmm9
  }
  CG_Draw2DRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, shadowColor, cgMedia.whiteMaterial);
  if ( text )
  {
    v32 = -1i64;
    do
      ++v32;
    while ( text[v32] );
    __asm
    {
      vmovss  xmm0, [rsp+0E8h+arg_38]
      vmovss  dword ptr [rsp+0E8h+material], xmm0
      vmovss  [rsp+0E8h+horzAlign], xmm11
      vmovss  dword ptr [rsp+0E8h+fmt], xmm10
    }
    UI_DrawText(scrPlace, text, v32, font, fmta, *(float *)&horzAlign, 1, 1, material, color, 0);
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_DrawDebug_DrawTransientQueueOverlay
==============
*/

void __fastcall CG_DrawDebug_DrawTransientQueueOverlay(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const dvar_t *v8; 
  const dvar_t *v10; 
  const ScreenPlacement *ActivePlacement; 
  CL_TransientsCollisionMP_PriorityMode PriorityMode; 
  CL_TransientsCommonMP_PrioritizationFlags PrioritizationFlags; 
  char v23; 
  char *s; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  float fmt; 
  float fmta; 
  char dest[1024]; 

  v8 = DCONST_DVARBOOL_cg_drawTransientQueue;
  if ( DCONST_DVARBOOL_cg_drawTransientQueue )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_cg_drawTransientQueue);
    if ( v8->current.enabled )
    {
      v10 = DCONST_DVARINT_cg_drawTransientQueueXPos;
      __asm
      {
        vmovaps [rsp+4A8h+var_18], xmm6
        vmovaps [rsp+4A8h+var_28], xmm7
        vmovaps [rsp+4A8h+var_38], xmm8
        vmovaps [rsp+4A8h+var_48], xmm9
      }
      if ( !DCONST_DVARINT_cg_drawTransientQueueXPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientQueueXPos") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vcvtsi2ss xmm8, xmm8, dword ptr [rbx+28h]
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7738, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      PriorityMode = CL_TransientsCollisionMP_GetPriorityMode();
      __asm
      {
        vmovss  xmm7, cs:__real@3f000000
        vmovaps xmm3, xmm7; xScale
        vxorps  xmm2, xmm2, xmm2; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+4A8h+fmt], xmm7
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, priorityModeNames[PriorityMode], &colorWhite, 5, cls.smallDevFont);
      R_TextHeight(cls.smallDevFont);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
        vmulss  xmm9, xmm6, xmm7
      }
      PrioritizationFlags = CL_TransientsCommonMP_GetPrioritizationFlags();
      v23 = PrioritizationFlags;
      if ( PrioritizationFlags )
      {
        v25 = (char *)&queryFormat.fmt + 3;
        v26 = (char *)&queryFormat.fmt + 3;
        if ( (v23 & 4) != 0 )
          v26 = "N";
        v27 = (char *)&queryFormat.fmt + 3;
        if ( (v23 & 2) != 0 )
          v27 = "D";
        if ( (v23 & 1) != 0 )
          v25 = (const char *)&EdgeOctree_BucketFlagsMask[3];
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "CommonMP Flags: %s%s%s", v25, v27, v26);
        s = dest;
      }
      else
      {
        s = "CommonMP Flags: <none>";
      }
      __asm
      {
        vmovaps xmm3, xmm7; xScale
        vmovaps xmm2, xmm9; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+4A8h+fmt], xmm7
      }
      CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, s, &colorWhite, 5, cls.smallDevFont);
      R_TextHeight(cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm6, xmm0, xmm6
      }
      R_TextHeight(cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm2, xmm0, xmm6
        vmulss  xmm2, xmm2, xmm7; y
        vmovaps xmm1, xmm8; x
      }
      CL_TransientsMP_DebugDrawQueue(ActivePlacement, *(const float *)&_XMM1, *(const float *)&_XMM2);
      __asm
      {
        vmovaps xmm9, [rsp+4A8h+var_48]
        vmovaps xmm8, [rsp+4A8h+var_38]
        vmovaps xmm7, [rsp+4A8h+var_28]
        vmovaps xmm6, [rsp+4A8h+var_18]
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawVersion
==============
*/
void CG_DrawDebug_DrawVersion()
{
  GfxFont *FontHandle; 
  const char *BuildVersion; 
  const dvar_t *v17; 
  const dvar_t *v21; 
  const char *v26; 
  const dvar_t *v27; 
  const dvar_t *v31; 
  const char *v34; 
  float fmt; 
  float fmta; 
  float y; 
  float ya; 
  float v45; 
  float v46; 
  vec4_t color; 
  vec4_t v48; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3489, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
    __debugbreak();
  _RBX = DVARFLT_cg_drawVersionFontScale;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f3333333f8000003f3333333ecccccd
    vmovups xmm1, cs:__xmm@3f333333000000000000000000000000
    vmovups xmmword ptr [rsp+0F8h+var_88], xmm0
    vmovups xmmword ptr [rsp+0F8h+var_98], xmm1
  }
  if ( !DVARFLT_cg_drawVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionFontScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovaps xmm2, xmm8; scale
  }
  FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, *(float *)&_XMM2);
  BuildVersion = Com_GetBuildVersion();
  __asm { vmovaps xmm3, xmm8; scale }
  UI_TextWidth(BuildVersion, 0, FontHandle, *(float *)&_XMM3);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovaps xmm1, xmm8; scale
    vcvtsi2ss xmm10, xmm10, eax
  }
  UI_TextHeight(FontHandle, *(float *)&_XMM1);
  v17 = DVARFLT_cg_drawVersionY;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
  }
  if ( !DVARFLT_cg_drawVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  __asm { vaddss  xmm0, xmm7, dword ptr [rbx+28h] }
  v21 = DVARFLT_cg_drawVersionX;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm9, xmm6, xmm0
  }
  if ( !DVARFLT_cg_drawVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  __asm
  {
    vaddss  xmm0, xmm10, dword ptr [rbx+28h]
    vsubss  xmm6, xmm6, xmm0
  }
  v26 = Com_GetBuildVersion();
  __asm
  {
    vmovss  [rsp+0F8h+var_B8], xmm8
    vmovss  [rsp+0F8h+y], xmm9
    vmovss  dword ptr [rsp+0F8h+fmt], xmm6
  }
  UI_DrawText(&scrPlaceFullUnsafe, v26, 0x7FFFFFFF, FontHandle, fmt, y, 3, 3, v45, &color, 0);
  v27 = DVARFLT_cg_drawVersionY;
  if ( !DVARFLT_cg_drawVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm7, xmm6
    vsubss  xmm7, xmm0, dword ptr [rbx+28h]
  }
  v31 = DVARFLT_cg_drawVersionX;
  if ( !DVARFLT_cg_drawVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  __asm
  {
    vxorps  xmm0, xmm10, xmm6
    vsubss  xmm6, xmm0, dword ptr [rbx+28h]
  }
  v34 = Com_GetBuildVersion();
  __asm
  {
    vmovss  [rsp+0F8h+var_B8], xmm8
    vmovss  [rsp+0F8h+y], xmm7
    vmovss  dword ptr [rsp+0F8h+fmt], xmm6
  }
  UI_DrawText(&scrPlaceFullUnsafe, v34, 0x7FFFFFFF, FontHandle, fmta, ya, 3, 3, v46, &v48, 0);
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_DrawDebug_DrawViewKickLog
==============
*/
void CG_DrawDebug_DrawViewKickLog(LocalClientNum_t localClientNum)
{
  const ClActiveClient *Client; 
  int CmdNumber; 
  DebugLogQueueManager *Instance; 
  const dvar_t *v37; 
  float *viewKickMax; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  float v48; 
  float viewKickMin; 
  float viewKickScale; 
  usercmd_s ucmd; 
  char dest[1024]; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm8, dword ptr [rax+11E8h] }
  memset_0(&ucmd, 0, sizeof(ucmd));
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
  BG_GetDamageViewKickScaleValues(&_RBX->predictedPlayerState, &ucmd, &viewKickScale, &viewKickMin, &v48);
  __asm
  {
    vmovss  xmm0, [rsp+5B8h+viewKickScale]
    vmulss  xmm0, xmm0, cs:__real@42c80000; val
    vmovss  xmm2, [rsp+5B8h+var_568]; max
    vmovss  xmm1, [rsp+5B8h+viewKickMin]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, [rsp+5B8h+viewKickScale]
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm0, xmm2, cs:__real@42480000; val
    vmovss  xmm2, [rsp+5B8h+var_568]; max
    vcvtss2sd xmm7, xmm1, xmm1
    vmovss  xmm1, [rsp+5B8h+viewKickMin]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, [rsp+5B8h+viewKickScale]
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm0, xmm2, cs:__real@41c80000; val
    vmovss  xmm2, [rsp+5B8h+var_568]; max
    vcvtss2sd xmm6, xmm1, xmm1
    vmovss  xmm1, [rsp+5B8h+viewKickMin]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm4, [rsp+5B8h+var_568]
    vmulss  xmm1, xmm0, xmm8
    vmovss  xmm0, [rsp+5B8h+viewKickMin]
    vmovsd  [rsp+5B8h+var_570], xmm7
    vcvtss2sd xmm2, xmm1, xmm1
    vmovss  xmm1, [rsp+5B8h+viewKickScale]
    vmovsd  [rsp+5B8h+var_578], xmm6
    vmovsd  [rsp+5B8h+var_580], xmm2
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+5B8h+var_588], xmm4
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm8, xmm8
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+5B8h+var_590], xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+5B8h+viewKickMax], xmm1
  }
  Com_sprintf(dest, 0x400ui64, "^3Player kick scale: ^4%.2f ^3bg_viewKickScale: ^4%.2f ^3bg_viewKickMin: ^4%.2f ^3bg_viewKickMax: ^4%.2f ^3Kick for 25 dmg: ^4%.2f ^3Kick for 50 dmg: ^4%.2f ^3Kick for 100 dmg: ^4%.2f", *(double *)&_XMM3, *(double *)&viewKickMax, v43, v44, v45, v46, v47);
  Instance = DebugLogQueueManager::GetInstance();
  DebugLogQueueManager::SetInfoLineText(Instance, DEBUG_LOG_CAT_BEGIN, dest);
  v37 = DVARBOOL_debugViewKickLog;
  if ( !DVARBOOL_debugViewKickLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugViewKickLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  DebugLogQueueManager::SetVisibility(Instance, DEBUG_LOG_CAT_BEGIN, v37->current.enabled);
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_DrawDebug_DrawViewmodelAnimList
==============
*/
void CG_DrawDebug_DrawViewmodelAnimList(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v6; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  PlayerWeaponAnimArrays *p_m_weaponAnimArrays; 
  const char ***v15; 
  int v16; 
  const char *v18; 
  const char *v19; 
  const char **v20; 
  __int64 v21; 
  const char *v22; 
  char v23; 
  __int64 v24; 
  char v25; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float y; 
  float ya; 
  float v38; 
  float v39; 
  int destPos[4]; 
  char dest[4096]; 
  char v45; 

  v6 = alloca(v1);
  __asm
  {
    vmovaps [rsp+10D8h+var_38], xmm6
    vmovaps [rsp+10D8h+var_48], xmm7
    vmovaps [rsp+10D8h+var_58], xmm8
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm6, cs:__real@3e428f5c
    vmovaps xmm2, xmm6; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  p_m_weaponAnimArrays = &LocalClientGlobals->m_weaponAnimArrays;
  if ( !p_m_weaponAnimArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10321, ASSERT_TYPE_ASSERT, "(weaponAnimArrays)", (const char *)&queryFormat, "weaponAnimArrays") )
    __debugbreak();
  __asm { vmovss  xmm8, cs:__real@43700000 }
  destPos[0] = 0;
  v15 = (const char ***)&p_m_weaponAnimArrays->normalAnimArray[236];
  v16 = 236;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    v18 = "<empty>";
    v19 = "<empty>";
    if ( *v15 )
      v18 = **v15;
    v20 = v15[622];
    if ( !v20 || (v19 = *v20) != NULL && *v19 )
    {
      v21 = 0x7FFFFFFFi64;
      v22 = v19;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v23 = v22[v18 - v19];
        v24 = v21;
        v25 = *v22++;
        --v21;
        if ( !v24 )
          break;
        if ( v23 != v25 )
        {
          LODWORD(fmt) = v16;
          Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "%d: %s, %s\n", fmt, v18, v19);
          goto LABEL_20;
        }
      }
      while ( v23 );
    }
    LODWORD(fmt) = v16;
    Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "%d: %s\n", fmt, v18);
LABEL_20:
    if ( v16 > 0 && v16 == 125 * (v16 / 125) )
    {
      __asm
      {
        vmovss  [rsp+10D8h+var_1098], xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
      }
      destPos[0] = v16 % 125;
      __asm
      {
        vmovss  [rsp+10D8h+y], xmm7
        vmovss  dword ptr [rsp+10D8h+fmt], xmm1
      }
      UI_DrawText(ActivePlacement, dest, 4096, FontHandle, fmta, y, 1, 1, v38, &colorWhite, 3);
    }
    ++v16;
    ++v15;
  }
  while ( v16 < 608 );
  __asm
  {
    vmovss  xmm0, cs:__real@43f00000
    vmovss  [rsp+10D8h+var_1098], xmm6
    vmovss  [rsp+10D8h+y], xmm7
    vmovss  dword ptr [rsp+10D8h+fmt], xmm0
  }
  UI_DrawText(ActivePlacement, dest, 4096, FontHandle, fmtb, ya, 1, 1, v39, &colorWhite, 3);
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_DrawDebug_DrawViewmodelInfo
==============
*/
void CG_DrawDebug_DrawViewmodelInfo(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v12; 
  __int64 v13; 
  const WeaponDef *v14; 
  int FrequencyIndex; 
  int v16; 
  const playerState_s *p_predictedPlayerState; 
  bool v31; 
  bool isWeaponDefault; 
  int EquippedWeaponIndex; 
  __int64 v34; 
  BOOL dualWielding; 
  XModel *WeaponModels; 
  const char *name; 
  Weapon *v40; 
  double ADSZoomLevelFraction; 
  const char *v42; 
  unsigned __int16 weaponIdx; 
  char *v44; 
  __int64 v45; 
  int v46; 
  int OffhandState; 
  const dvar_t *v48; 
  char *v49; 
  int v50; 
  int v51; 
  __int64 v52; 
  const char *WeaponName; 
  __int64 v54; 
  int v67; 
  int v68; 
  XModel *gogglesModel; 
  const char *v81; 
  XModel *handModel; 
  const char *v83; 
  Weapon *v84; 
  CgHandler *Handler; 
  int v102; 
  int v103; 
  int weapAnim; 
  const char **p_name; 
  const char *v166; 
  const char **v167; 
  const char *v168; 
  char v194; 
  __int64 v197; 
  __int64 v200; 
  cg_t *v201; 
  __int64 currentState; 
  __int64 v207; 
  unsigned int v208; 
  int v209; 
  __int64 v210; 
  unsigned int *p_index; 
  const char *p_animState; 
  int v213; 
  __int64 v214; 
  int v216; 
  const char *NameFromIndex; 
  const char *v220; 
  int v221; 
  __int64 v222; 
  const char *v226; 
  const char *v227; 
  const char *v230; 
  const char *v233; 
  unsigned int v243; 
  const char *p_weaponState; 
  __int64 v245; 
  int v246; 
  const dvar_t *v247; 
  int v248; 
  int v249; 
  const ClipAmmo *ClipAmmoPtrConst; 
  CgHandler *v254; 
  const playerState_s *v255; 
  const WeaponHeat *v256; 
  __int64 v258; 
  unsigned int ShotCountForRecoil; 
  int v260; 
  const DObj **p_viewModelDObj; 
  const char **v262; 
  __int64 v263; 
  __int64 v264; 
  playerState_s *v265; 
  BgWeaponMap *v266; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v268; 
  __int16 viewlocked_entNum; 
  int v270; 
  unsigned int v271; 
  unsigned int v272; 
  const DObj *v273; 
  __int64 v274; 
  CgEntitySystem *v275; 
  __int64 v277; 
  const char *v291; 
  char *fmt; 
  char *fmta; 
  float fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtb; 
  char *fmtf; 
  float fmtg; 
  __int64 isUsingDetonator; 
  double isUsingDetonatorb; 
  double isUsingDetonatorc; 
  __int64 isUsingDetonatora; 
  __int64 isUsingDetonatord; 
  float isUsingDetonatore; 
  __int64 isUsingCensorshipWorldModel; 
  __int64 isUsingCensorshipWorldModela; 
  __int64 isUsingCensorshipWorldModelb; 
  double vertAligna; 
  double vertAlignb; 
  __int64 vertAlign; 
  __int64 vertAlignc; 
  __int64 scale; 
  float scalea; 
  vec4_t *colora; 
  vec4_t *colorb; 
  vec4_t *color; 
  double stylea; 
  __int64 style; 
  double v333; 
  double v334; 
  __int64 v335; 
  double v336; 
  double v337; 
  const char *v338; 
  __int64 v339; 
  double v340; 
  double v341; 
  double v342; 
  __int64 v343; 
  double v344; 
  double v345; 
  double v346; 
  double v347; 
  double v348; 
  double v349; 
  double v350; 
  double v351; 
  double v352; 
  double v353; 
  double v354; 
  double v355; 
  double v356; 
  double v357; 
  double v358; 
  double v359; 
  double v360; 
  double v361; 
  double v362; 
  double v363; 
  double v364; 
  double v365; 
  double v366; 
  double v367; 
  double v368; 
  double v369; 
  double v370; 
  double v371; 
  double v372; 
  double v373; 
  double v374; 
  double v375; 
  double v376; 
  double v377; 
  double v378; 
  double v379; 
  double v380; 
  double v381; 
  double v382; 
  bool v383; 
  int v384; 
  int v385; 
  ClientFov result; 
  Weapon *r_weapon; 
  const char *v389; 
  float v390; 
  BgWeaponMap *weaponMap; 
  cg_t *cgameGlob; 
  __int64 v393; 
  __int64 v394; 
  WeaponHand *m_weaponHand; 
  BobCycle v397; 
  playerState_s *ps; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  __int64 v420; 
  AmmoStore v421; 
  AmmoStore r_clipIndex; 
  GfxScopeInfo settingOut; 
  float outZoomLevelWeights; 
  float outBlendWeights[6]; 
  bool outAnimMissing[4]; 
  char v429; 
  char strBuffer[5]; 
  char v431[1019]; 
  char dest[1024]; 
  char output[1024]; 
  char v434[1024]; 
  char buffer[8192]; 
  char v436[1024]; 
  char v437[1024]; 
  char v438[1024]; 
  char v449; 

  v12 = alloca(v1);
  v420 = -2i64;
  __asm
  {
    vmovaps [rsp+4160h+var_30], xmm6
    vmovaps [rsp+4160h+var_40], xmm7
    vmovaps [rsp+4160h+var_50], xmm8
    vmovaps [rsp+4160h+var_60], xmm9
    vmovaps [rsp+4160h+var_70], xmm10
    vmovaps [rsp+4160h+var_80], xmm11
    vmovaps [rsp+4160h+var_90], xmm12
    vmovaps [rsp+4160h+var_A0], xmm13
    vmovaps [rsp+4160h+var_B0], xmm14
    vmovaps [rsp+4160h+var_C0], xmm15
  }
  v13 = localClientNum;
  v14 = NULL;
  FrequencyIndex = 0;
  *(_DWORD *)outAnimMissing = 0;
  v16 = 0;
  v384 = 0;
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  _RDI = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  _EAX = 9;
  __asm
  {
    vmovd   xmm1, eax
    vmovd   xmm0, dword ptr [rdi+28h]
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm2, cs:__real@3e23d70a
    vmovss  xmm1, cs:__real@3e4ccccd
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  [rbp+3F10h+var_3F38], xmm0
  }
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  cgameGlob = _R15;
  p_predictedPlayerState = &_R15->predictedPlayerState;
  ps = &_R15->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[v13];
  r_weapon = (Weapon *)BG_GetViewmodelWeapon(weaponMap, p_predictedPlayerState);
  LODWORD(v393) = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, p_predictedPlayerState);
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v13);
  __asm { vmovss  xmm2, [rbp+3F10h+var_3F38]; scale }
  font = UI_GetFontHandle(scrPlace, 6, *(float *)&_XMM2);
  v31 = _R15 != (cg_t *)-8i64 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu));
  v383 = v31;
  isWeaponDefault = _R15->playerWeaponInfo.isWeaponDefault;
  if ( !r_weapon->weaponIdx )
    goto LABEL_35;
  v14 = BG_WeaponDef(r_weapon, v31);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( _R15 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
    goto LABEL_32;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( _R15 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !r_weapon->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, p_predictedPlayerState, r_weapon), EquippedWeaponIndex < 0) || (v34 = EquippedWeaponIndex, (cg_t *)((char *)_R15 + 4 * v34) == (cg_t *)-1548i64) )
LABEL_32:
    dualWielding = 0;
  else
    dualWielding = _R15->predictedPlayerState.weapEquippedData[v34].dualWielding;
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, r_weapon, 1, isWeaponDefault, dualWielding, 0, 0);
  FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, p_predictedPlayerState, 0);
  *(_DWORD *)outAnimMissing = FrequencyIndex;
  *(double *)&_XMM0 = BG_AdvancedIdle_GetTime(weaponMap, p_predictedPlayerState, 0);
  __asm { vmovaps xmm7, xmm0 }
  v16 = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, p_predictedPlayerState, 1);
  v384 = v16;
  *(double *)&_XMM0 = BG_AdvancedIdle_GetTime(weaponMap, p_predictedPlayerState, 1);
  __asm { vmovaps xmm8, xmm0 }
  if ( WeaponModels )
    name = WeaponModels->name;
  else
LABEL_35:
    name = "none";
  _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  __asm
  {
    vmovsd  xmm10, qword ptr [rax]
    vmovsd  [rbp+3F10h+var_3F40], xmm10
  }
  result.baseFovAdjustment = _RAX->baseFovAdjustment;
  __asm { vmovsd  qword ptr [rbp+3F10h+result.finalFov], xmm10 }
  v40 = r_weapon;
  ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(weaponMap, p_predictedPlayerState, r_weapon, v383, _R15->predictedPlayerState.serverTimeInterpolated);
  BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, &outZoomLevelWeights);
  v42 = "UNKNOWN";
  switch ( _R15->footstepEventType )
  {
    case EV_NONE:
      v42 = "NONE";
      break;
    case EV_FOOTSTEP_SUPERSPRINT:
      v42 = "SUPERSPRINT";
      break;
    case EV_FOOTSTEP_SPRINT:
      v42 = "SPRINT";
      break;
    case EV_FOOTSTEP_RUN:
      v42 = "RUN";
      break;
    case EV_FOOTSTEP_WALK:
      v42 = "WALK";
      break;
    case EV_FOOTSTEP_CREEP:
      v42 = "CREEP";
      break;
    case EV_FOOTSTEP_PRONE:
      v42 = "PRONE";
      break;
    default:
      break;
  }
  if ( v40->weaponCamo >= BG_Camo_GetCamoCount() )
  {
    LODWORD(isUsingCensorshipWorldModel) = BG_Camo_GetCamoCount();
    LODWORD(isUsingDetonator) = v40->weaponCamo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9607, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponCamo ) < (unsigned)( BG_Camo_GetCamoCount() )", "r_weapon.weaponCamo doesn't index BG_Camo_GetCamoCount()\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  BobCycle::UnpackBobCycle(&v397, (const int (*)[2])_R15->predictedPlayerState.packedBobCycle);
  weaponIdx = _R15->gestureWeapInfo.offhandGestureWeapon.weaponIdx;
  if ( weaponIdx )
    BG_GetWeaponName(&_R15->gestureWeapInfo.offhandGestureWeapon, output, 0x400u);
  v44 = output;
  if ( !weaponIdx )
    v44 = "none";
  v45 = 55i64;
  if ( weaponIdx )
    v45 = 50i64;
  v46 = Com_sprintf(dest, 0x400ui64, "^7Offhand Gesture Weapon: ^%c%s\n", v45, v44);
  OffhandState = CG_DrawDebug_GetOffhandState(_R15, &_R15->predictedPlayerState, dest, 1024, v46);
  CG_DrawDebug_GetOffhandGestureFlags(&_R15->predictedPlayerState, dest, 1024, OffhandState);
  v48 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( v48->current.integer == 9 )
  {
    BG_GetWeaponName(r_weapon, v434, 0x400u);
    Com_sprintf(buffer, 0x2000ui64, "^7Weapon: ^2%s^7 - ^5%s\n", v434, name);
    BG_GetWeaponName(&_R15->weaponSelect, v436, 0x400u);
    v49 = v434;
    do
    {
      v50 = (unsigned __int8)v49[9216];
      v51 = (unsigned __int8)*v49 - v50;
      if ( v51 )
        break;
      ++v49;
    }
    while ( v50 );
    if ( v51 )
    {
      v52 = -1i64;
      do
        ++v52;
      while ( buffer[v52] );
      WeaponName = BG_GetWeaponName(&_R15->weaponSelect, v434, 0x400u);
      Com_sprintf(&buffer[(int)v52], 0x2000 - (int)v52, "^7Select: ^2%s\n", WeaponName);
    }
    v54 = -1i64;
    do
      ++v54;
    while ( buffer[v54] );
    __asm
    {
      vcvtss2sd xmm12, xmm8, xmm8
      vcvtss2sd xmm13, xmm7, xmm7
      vmovss  xmm14, dword ptr [r15+662Ch]
      vcvtss2sd xmm14, xmm14, xmm14
    }
    _RDI = DCONST_DVARMPFLT_bg_gunBobMax;
    if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, [rbp+3F10h+var_3F28.amplitudeRatioGun]
      vcvtss2sd xmm11, xmm1, xmm1
    }
    _RDI = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, [rbp+3F10h+var_3F28.amplitudeRatio]
      vcvtss2sd xmm6, xmm1, xmm1
    }
    v67 = v397.maxGeneration + 1;
    v68 = v397.generation + 1;
    __asm
    {
      vmovss  xmm7, [rbp+3F10h+var_3CF8]
      vcvtss2sd xmm7, xmm7, xmm7
      vmovss  xmm8, [rbp+3F10h+var_3CFC]
      vcvtss2sd xmm8, xmm8, xmm8
      vmovss  xmm9, [rbp+3F10h+outZoomLevelWeights]
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm10, xmm10, xmm10
    }
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
    __asm { vcvtss2sd xmm1, xmm0, xmm0 }
    _RCX = cgameGlob;
    __asm
    {
      vmovss  xmm2, dword ptr [rcx+738h]
      vcvtss2sd xmm2, xmm2, xmm2
    }
    gogglesModel = cgameGlob->playerWeaponInfo.gogglesModel;
    if ( gogglesModel )
      v81 = gogglesModel->name;
    else
      v81 = "none";
    handModel = cgameGlob->playerWeaponInfo.handModel;
    if ( handModel )
      v83 = handModel->name;
    else
      v83 = "none";
    __asm
    {
      vmovsd  [rsp+4160h+var_4098], xmm12
      vmovsd  [rsp+4160h+var_40A8], xmm13
      vmovsd  [rsp+4160h+var_40C0], xmm14
      vmovsd  [rsp+4160h+var_40C8], xmm11
      vmovsd  [rsp+4160h+var_40D0], xmm6
      vmovsd  [rsp+4160h+var_40F0], xmm7
      vmovsd  [rsp+4160h+var_40F8], xmm8
      vmovsd  [rsp+4160h+var_4100], xmm9
      vmovsd  [rsp+4160h+var_4108], xmm10
      vmovsd  qword ptr [rsp+4160h+style], xmm1
      vmovsd  [rsp+4160h+color], xmm2
    }
    LODWORD(isUsingCensorshipWorldModel) = cgameGlob->time;
    LODWORD(isUsingDetonator) = cgameGlob->predictedPlayerState.weapCommon.offhandUseTime;
    LODWORD(fmt) = cgameGlob->predictedPlayerState.weapCommon.offhandGestureFireTime;
    Com_sprintf(&buffer[(int)v54], 0x2000 - (int)v54, "%s^7Offhand Gesture Fire Time: %d Use Time: %d Current Time: %d\n^7Hands: ^5%s\t\t^7Goggles: ^5%s\t\t^7ADS: ^5%.2f  ^7ADS (Not Reloading): ^5%.2f  ^7FOV: ^5%.0f ^7Zoom Weights [0]: ^5%.2f ^7[1]: ^5%.2f ^7[2]: ^5%.2f^7\n^7ViewBob Stride: ^5%i/%i^7, Cycle: ^5%i^7, Amp: ^5%0.2f^7, Gun Amp: ^5%0.2f^7, Step Wgt: ^5%.2f^7, Step Typ: ^5%s^7\n^7Idle1-Freq: ^5%d ^7Idle1-Time: ^5%.4f ^7Idle2-Freq: ^5%d ^7Idle2-Time: ^5%.4f\n^7---Anims---\n^3", dest, fmt, isUsingDetonator, isUsingCensorshipWorldModel, v83, v81, *(double *)&colora, stylea, v333, v336, v340, v344, v68, v67, v397.animCycle, v350, v352, v354, v42, FrequencyIndex, v357, v16, v360);
  }
  else
  {
    v84 = r_weapon;
    BG_GetWeaponName(r_weapon, v438, 0x400u);
    BG_GetWeaponName(&_R15->weaponSelect, v437, 0x400u);
    strcpy(strBuffer, "none");
    memset_0(v431, 0, sizeof(v431));
    memset_0(output, 0, sizeof(output));
    if ( v84->weaponIdx )
    {
      CG_DrawDebug_BuildWeaponPatternWeightsString(_R15, weaponMap, &_R15->predictedPlayerState, v14, strBuffer, 1024, 1);
      CG_DrawDebug_BuildWeaponPatternWeightsString(_R15, weaponMap, &_R15->predictedPlayerState, v14, output, 1024, 0);
    }
    if ( *(_DWORD *)_R15->scopeToggleInfo.state >= 7u )
    {
      LODWORD(isUsingCensorshipWorldModel) = 7;
      LODWORD(isUsingDetonator) = *(_DWORD *)_R15->scopeToggleInfo.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9671, ASSERT_TYPE_ASSERT, "(unsigned)( scopeToggleInfo.state ) < (unsigned)( ( sizeof( *array_counter( s_scopeToggleStateNames ) ) + 0 ) )", "scopeToggleInfo.state doesn't index ARRAY_COUNT( s_scopeToggleStateNames )\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
        __debugbreak();
    }
    memset_0(&settingOut, 0, sizeof(settingOut));
    __asm { vmovss  xmm6, dword ptr [r15+738h] }
    Handler = CgHandler::getHandler(localClientNum);
    _RBX = &_R15->scopeToggleInfo.fractionInfo;
    __asm { vmovss  dword ptr [rsp+4160h+fmt], xmm6 }
    BG_GetScopeLensSettings(Handler, &_R15->predictedPlayerState, v84, v383, fmtc, &_R15->scopeToggleInfo.fractionInfo, &settingOut);
    if ( CG_View_ShouldRenderGunAtDifferentFov(_R15, &_R15->predictedPlayerState) )
    {
      _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_DepthHack, 0);
      __asm { vmovsd  xmm6, qword ptr [rax] }
      result.baseFovAdjustment = _RAX->baseFovAdjustment;
      __asm { vmovsd  qword ptr [rbp+3F10h+result.finalFov], xmm6 }
    }
    else
    {
      __asm { vmovaps xmm6, xmm10 }
    }
    __asm
    {
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm9, xmm7, xmm7
      vmovss  xmm10, dword ptr [r15+662Ch]
      vcvtss2sd xmm10, xmm10, xmm10
    }
    _RDI = DCONST_DVARMPFLT_bg_gunBobMax;
    if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, [rbp+3F10h+var_3F28.amplitudeRatioGun]
      vcvtss2sd xmm7, xmm1, xmm1
    }
    _RDI = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, [rbp+3F10h+var_3F28.amplitudeRatio]
      vcvtss2sd xmm11, xmm1, xmm1
    }
    v102 = v397.maxGeneration + 1;
    v103 = v397.generation + 1;
    __asm
    {
      vmovss  xmm12, [rbp+3F10h+settingOut.scopeFadeInfo.fadeOutFrac+8]
      vcvtss2sd xmm12, xmm12, xmm12
      vmovss  xmm13, [rbp+3F10h+settingOut.scopeFadeInfo.fadeInFrac+8]
      vcvtss2sd xmm13, xmm13, xmm13
      vmovss  xmm14, [rbp+3F10h+settingOut.scopeFadeInfo.fadeOutFrac]
      vcvtss2sd xmm14, xmm14, xmm14
      vmovss  xmm15, [rbp+3F10h+settingOut.scopeFadeInfo.fadeInFrac]
      vcvtss2sd xmm15, xmm15, xmm15
      vmovss  xmm0, dword ptr [rbx]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3F30], xmm0
    }
    _RDI = cgameGlob;
    v389 = s_scopeToggleStateNames[*(int *)cgameGlob->scopeToggleInfo.state];
    weapAnim = cgameGlob->predictedPlayerState.weapState[0].weapAnim;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3E68], xmm0
      vmovss  xmm2, dword ptr [rdi+48h]
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rbp+3F10h+var_3F08], xmm0
      vmovss  xmm0, dword ptr [rdi+44h]
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3F00], xmm1
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rbp+3F10h+var_3EF8], xmm0
      vmovss  xmm0, dword ptr [rdi+2BCh]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EF0], xmm0
      vmovss  xmm0, dword ptr [rdi+2B8h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EE8], xmm0
      vmovss  xmm0, dword ptr [rdi+2B4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EE0], xmm0
      vmovss  xmm0, dword ptr [rdi+0C4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3ED8], xmm0
      vmovss  xmm0, dword ptr [rdi+0C0h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3ED0], xmm0
      vmovss  xmm0, dword ptr [rdi+0BCh]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EC8], xmm0
      vmovss  xmm0, dword ptr [rdi+290h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EC0], xmm0
      vmovss  xmm0, dword ptr [rdi+28Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EB8], xmm0
      vmovss  xmm0, dword ptr [rdi+288h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EB0], xmm0
      vmovss  xmm0, dword ptr [rdi+1E8h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EA8], xmm0
      vmovss  xmm0, dword ptr [rdi+1E4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3EA0], xmm0
      vmovss  xmm0, dword ptr [rdi+1E0h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3E98], xmm0
    }
    v390 = *(float *)&cgameGlob->predictedPlayerState.viewHeightTarget;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1F0h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3E90], xmm0
      vmovss  xmm0, [rbp+3F10h+var_3CF8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3E88], xmm0
      vmovss  xmm0, [rbp+3F10h+var_3CFC]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3E80], xmm0
      vmovss  xmm0, [rbp+3F10h+outZoomLevelWeights]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rbp+3F10h+result.finalFov], xmm0
      vmovss  xmm0, dword ptr [rbp+3F10h+var_3F40]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+3F10h+var_3F40], xmm0
      vcvtss2sd xmm6, xmm6, xmm6
    }
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(weaponMap, &cgameGlob->predictedPlayerState);
    __asm
    {
      vcvtss2sd xmm3, xmm0, xmm0
      vmovss  xmm4, dword ptr [rdi+738h]
      vcvtss2sd xmm4, xmm4, xmm4
    }
    p_name = &_RDI->playerWeaponInfo.gogglesModel->name;
    if ( p_name )
      v166 = *p_name;
    else
      v166 = "none";
    v167 = &_RDI->playerWeaponInfo.handModel->name;
    if ( v167 )
      v168 = *v167;
    else
      v168 = "none";
    __asm
    {
      vmovsd  [rsp+4160h+var_3F98], xmm8
      vmovsd  [rsp+4160h+var_3FA8], xmm9
      vmovsd  [rsp+4160h+var_3FC0], xmm10
      vmovsd  [rsp+4160h+var_3FC8], xmm7
      vmovsd  [rsp+4160h+var_3FD0], xmm11
      vmovsd  [rsp+4160h+var_3FF0], xmm12
      vmovsd  [rsp+4160h+var_3FF8], xmm13
      vmovsd  [rsp+4160h+var_4000], xmm14
      vmovsd  [rsp+4160h+var_4008], xmm15
      vmovsd  xmm0, [rbp+3F10h+var_3F30]
      vmovsd  [rsp+4160h+var_4010], xmm0
      vmovsd  xmm0, [rbp+3F10h+var_3E68]
      vmovsd  [rsp+4160h+var_4040], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3F08]
      vmovsd  [rsp+4160h+var_4048], xmm1
      vmovsd  xmm2, [rbp+3F10h+var_3F00]
      vmovsd  [rsp+4160h+var_4050], xmm2
      vmovsd  xmm0, [rbp+3F10h+var_3EF8]
      vmovsd  [rsp+4160h+var_4058], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3EF0]
      vmovsd  [rsp+4160h+var_4060], xmm1
      vmovsd  xmm2, [rbp+3F10h+var_3EE8]
      vmovsd  [rsp+4160h+var_4068], xmm2
      vmovsd  xmm0, [rbp+3F10h+var_3EE0]
      vmovsd  [rsp+4160h+var_4070], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3ED8]
      vmovsd  [rsp+4160h+var_4078], xmm1
      vmovsd  xmm2, [rbp+3F10h+var_3ED0]
      vmovsd  [rsp+4160h+var_4080], xmm2
      vmovsd  xmm0, [rbp+3F10h+var_3EC8]
      vmovsd  [rsp+4160h+var_4088], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3EC0]
      vmovsd  [rsp+4160h+var_4090], xmm1
      vmovsd  xmm2, [rbp+3F10h+var_3EB8]
      vmovsd  [rsp+4160h+var_4098], xmm2
      vmovsd  xmm0, [rbp+3F10h+var_3EB0]
      vmovsd  [rsp+4160h+var_40A0], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3EA8]
      vmovsd  [rsp+4160h+var_40A8], xmm1
      vmovsd  xmm2, [rbp+3F10h+var_3EA0]
      vmovsd  [rsp+4160h+var_40B0], xmm2
      vmovsd  xmm0, [rbp+3F10h+var_3E98]
      vmovsd  [rsp+4160h+var_40B8], xmm0
      vmovsd  xmm1, [rbp+3F10h+var_3E90]
      vmovsd  [rsp+4160h+var_40C8], xmm1
      vmovsd  xmm0, [rbp+3F10h+var_3E88]
      vmovsd  [rsp+4160h+var_40D0], xmm0
      vmovsd  xmm2, [rbp+3F10h+var_3E80]
      vmovsd  [rsp+4160h+var_40D8], xmm2
      vmovsd  xmm1, qword ptr [rbp+3F10h+result.finalFov]
      vmovsd  [rsp+4160h+var_40E0], xmm1
      vmovsd  xmm0, [rbp+3F10h+var_3F40]
      vmovsd  [rsp+4160h+var_40E8], xmm0
      vmovsd  [rsp+4160h+var_40F0], xmm6
      vmovsd  [rsp+4160h+var_40F8], xmm3
      vmovsd  [rsp+4160h+var_4100], xmm4
    }
    Com_sprintf(buffer, 0x2000ui64, "^7Weapon: ^2%s^7 - ^5%s\n^7Select: ^2%s\n%s^7Offhand Gesture Fire Time: %d Use Time: %d Current Time: %d\n^7Hands: ^5%s\t\t^7Goggles: ^5%s\t\t^7ADS: ^5%.2f  ^7ADS (Not Reloading): ^5%.2f ^7Weapon FOV: ^5%.2f ^7FOV: ^5%.0f ^7Zoom Weights [0]: ^5%.2f ^7[1]: ^5%.2f ^7[2]: ^5%.2f^7\n^7ViewHeight: ^5Current: %.2f ^7Target: ^5%d ^7ViewAngles: (^5%.2f, %.2f, %.2f^7) ^7LinkAngles: (^5%.2f, %.2f, %.2f^7) ^7delta_angles: (^5%.2f, %.2f, %.2f^7) ^7worldUpAngles: (^5%.2f %.2f %.2f^7) velocity: ^5%0005.1f^7 : (^5%.2f, %.2f, %.2f^7) \n^7Right Hand Anim: ^5%d ^7Right Hand Anim With Toggle Bit: ^5%d\n%s%s^7Toggle Scope Anim State: ^5%s ^7Scope Fraction: ^5%.4f ^7Scope 1 Fade In: ^5%.4f ^7Fade Out: ^5%.4f ^7Scope 2 Fade In: ^5%.4f ^7Fade Out: ^5%.4f\n^7ViewBob Stride: ^5%i/%i^7, Cycle: ^5%i^7, Amp: ^5%0.2f^7, Gun Amp: ^5%0.2f^7, Step Wgt: ^5%.2f^7, Step Typ: ^5%s^7\n^7Idle1-Freq: ^5%d ^7Idle1-Time: ^5%.4f ^7Idle2-Freq: ^5%d ^7Idle2-Time: ^5%.4f\n^7---Anims---\n^3", v438, name, v437, dest, _RDI->predictedPlayerState.weapCommon.offhandGestureFireTime, _RDI->predictedPlayerState.weapCommon.offhandUseTime, _RDI->time, v168, v166, v337, v341, v345, v347, v348, v349, v351, v353, v390, v355, v356, v358, v359, v361, v362, v363, v364, v365, v366, v367, v368, v369, v370, v371, v372, weapAnim & 0xFFFFFF7F, weapAnim, strBuffer, output, v389, v373, v374, v375, v376, v377, v103, v102, v397.animCycle, v378, v379, v380, v42, *(_DWORD *)outAnimMissing, v381, v384, v382);
    __asm { vxorps  xmm15, xmm15, xmm15 }
  }
  _RDI = DVARFLT_com_viewAnimCameraRotationScale;
  if ( !DVARFLT_com_viewAnimCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraRotationScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  _RDI = DVARFLT_com_viewAnimCameraTranslationScale;
  if ( !DVARFLT_com_viewAnimCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraTranslationScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vmovss  xmm0, cs:__real@3f800000
    vucomiss xmm6, xmm0
  }
  if ( !v194 )
    goto LABEL_108;
  __asm { vucomiss xmm1, xmm0 }
  if ( !v194 )
  {
LABEL_108:
    v197 = -1i64;
    do
      ++v197;
    while ( buffer[v197] );
    __asm
    {
      vcvtss2sd xmm0, xmm1, xmm1
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+4160h+fmt], xmm0
      vmovq   r9, xmm3
    }
    Com_sprintf(&buffer[(int)v197], 0x2000 - (int)v197, "^7com_viewAnimCameraRotationScale: ^1%.2fx^7com_viewAnimCameraTranslationScale: ^1%.2fx\n", *(double *)&_XMM3, *(double *)&fmtd);
  }
  if ( r_weapon->weaponIdx )
  {
    v200 = -1i64;
    do
      ++v200;
    while ( buffer[v200] );
    v201 = cgameGlob;
    currentState = cgameGlob->predictedPlayerState.demeanorState.currentState;
    if ( (_DWORD)currentState == cgameGlob->predictedPlayerState.demeanorState.targetState )
    {
      Com_sprintf(&buffer[(int)v200], 0x2000 - (int)v200, "^7Demeanor: ^5%s\n", s_demeanorStateNames[cgameGlob->predictedPlayerState.demeanorState.targetState]);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  qword ptr [rsp+4160h+isUsingDetonator], xmm2
      }
      Com_sprintf(&buffer[(int)v200], 0x2000 - (int)v200, "^7Demeanor: ^5%s -> %s %.3f\n", s_demeanorStateNames[currentState], s_demeanorStateNames[cgameGlob->predictedPlayerState.demeanorState.targetState], isUsingDetonatorb);
    }
    v207 = -1i64;
    do
      ++v207;
    while ( buffer[v207] );
    v208 = 0;
    v209 = v393;
    v210 = (int)v393;
    *(_QWORD *)&result.finalFov = (int)v393;
    p_index = &v201->predictedPlayerState.gestureState.gestures[0].index;
    p_animState = (const char *)&v201->gestureInfo.gestures[0][(int)v393].animState;
    v389 = p_animState;
    do
    {
      v213 = v209;
      v214 = v210;
      if ( v210 >= 0 )
      {
        _RBX = p_animState;
        do
        {
          v216 = *(_DWORD *)_RBX;
          if ( *(_DWORD *)_RBX )
          {
            NameFromIndex = BG_Gesture_GetNameFromIndex(*p_index);
            v216 = *(_DWORD *)_RBX;
          }
          else
          {
            NameFromIndex = "none";
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-14h]
            vcvtss2sd xmm0, xmm0, xmm0
          }
          v220 = "<ERROR>";
          if ( NameFromIndex )
            v220 = NameFromIndex;
          v221 = 76;
          if ( !v213 )
            v221 = 82;
          __asm { vmovsd  qword ptr [rsp+4160h+vertAlign], xmm0 }
          LODWORD(fmta) = v221;
          Com_sprintf(&buffer[(int)v207], 0x2000 - (int)v207, "^7Gesture[%d](%c): ^5%s(%s) %.3f  ", v208, fmta, s_gestureAnimationStateNames[v216], v220, vertAligna);
          v222 = -1i64;
          do
            ++v222;
          while ( buffer[v222] );
          LODWORD(v207) = v222;
          --v213;
          _RBX -= 76;
          --v214;
        }
        while ( v214 >= 0 );
        p_animState = v389;
        v210 = *(_QWORD *)&result.finalFov;
      }
      Com_sprintf(&buffer[(int)v207], 0x2000 - (int)v207, "\n");
      v207 = -1i64;
      do
        ++v207;
      while ( buffer[v207] );
      ++v208;
      p_animState += 152;
      v389 = p_animState;
      p_index += 8;
      v209 = v393;
    }
    while ( v208 < 2 );
    _R14 = cgameGlob;
    CG_CalcSlopeAnimBlendWeights(cgameGlob, cgameGlob->prevWalkGroup, outBlendWeights, outAnimMissing);
    __asm
    {
      vmovss  xmm6, [rbp+3F10h+var_3CE0]
      vcvtss2sd xmm6, xmm6, xmm6
    }
    v226 = "^5";
    v227 = "^5";
    if ( v429 )
      v227 = "^8";
    __asm
    {
      vmovss  xmm5, [rbp+3F10h+var_3CE4]
      vcvtss2sd xmm5, xmm5, xmm5
    }
    v230 = "^5";
    if ( outAnimMissing[3] )
      v230 = "^8";
    __asm
    {
      vmovss  xmm4, [rbp+3F10h+var_3CE8]
      vcvtss2sd xmm4, xmm4, xmm4
    }
    v233 = "^5";
    if ( outAnimMissing[2] )
      v233 = "^8";
    __asm
    {
      vmovss  xmm2, [rbp+3F10h+var_3CEC]
      vcvtss2sd xmm2, xmm2, xmm2
    }
    if ( outAnimMissing[1] )
      v226 = "^8";
    __asm
    {
      vmovss  xmm0, [rbp+3F10h+outBlendWeights]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [r14+6620h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [r14+6624h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+4160h+var_40F8], xmm6
    }
    v338 = v227;
    __asm
    {
      vmovsd  [rsp+4160h+var_4108], xmm5
      vmovsd  [rsp+4160h+color], xmm4
      vmovsd  qword ptr [rsp+4160h+vertAlign], xmm2
      vmovsd  qword ptr [rsp+4160h+isUsingDetonator], xmm0
      vmovsd  [rsp+4160h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(&buffer[(int)v207], 0x2000 - (int)v207, "^7Slope: ^5%.3f^7, Stairs: ^5%.3f^7 | Weight Flat ^5%.2f^7, SlUp %s%.2f^7, SlDn %s%.2f^7, StUp %s%.2f^7, StDn: %s%.2f^7\n", *(double *)&_XMM3, *(double *)&fmte, isUsingDetonatorc, v226, vertAlignb, v233, *(double *)&colorb, v230, v334, v338, v342);
    v243 = 0;
    v385 = 0;
    if ( v210 >= 0 )
    {
      v393 = 64i64;
      p_weaponState = (const char *)&_R14->predictedPlayerState.weapState[0].weaponState;
      v389 = (const char *)&_R14->predictedPlayerState.weapState[0].weaponState;
      m_weaponHand = _R14->m_weaponHand;
      v394 = v210 + 1;
      v245 = 64i64;
      do
      {
        if ( v243 >= 2 )
        {
          LODWORD(isUsingCensorshipWorldModela) = 2;
          LODWORD(isUsingDetonatora) = v243;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
            __debugbreak();
        }
        LODWORD(v390) = BG_GetSprintOutInterruptRemaining(weaponMap, &_R14->predictedPlayerState);
        v246 = 0;
        v247 = DVARBOOL_killswitch_rechamber_fix_enabled;
        if ( !DVARBOOL_killswitch_rechamber_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_rechamber_fix_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v247);
        if ( v247->current.enabled )
        {
          v246 = 0;
          if ( *((_DWORD *)p_weaponState + 3) - _R14->predictedPlayerState.serverTime > 0 )
            v246 = *((_DWORD *)p_weaponState + 3) - _R14->predictedPlayerState.serverTime;
        }
        v248 = 0;
        v249 = 0;
        _RAX = BG_AmmoStoreForWeapon(&v421, r_weapon, v383);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+3F10h+r_clipIndex.weapon.weaponIdx], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rbp+3F10h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
        }
        ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(&_R14->predictedPlayerState, &r_clipIndex);
        if ( ClipAmmoPtrConst )
        {
          v248 = *(_DWORD *)&ClipAmmoPtrConst->clipIndex.weapon.weaponAttachments[v245 + 2];
          v249 = *(_DWORD *)((char *)&ClipAmmoPtrConst->clipIndex.weapon.weaponIdx + v245);
        }
        v254 = CgHandler::getHandler(localClientNum);
        v255 = &_R14->predictedPlayerState;
        v256 = v254->GetPlayerWeaponHeat(v254, &_R14->predictedPlayerState, r_weapon, (PlayerHandIndex)v243);
        *(double *)&_XMM0 = BG_Heat_GetHeat(v256, r_weapon, v383, _R14->predictedPlayerState.serverTime);
        __asm { vmovaps xmm6, xmm0 }
        v258 = -1i64;
        do
          ++v258;
        while ( buffer[v258] );
        ShotCountForRecoil = BG_GetShotCountForRecoil(v255);
        __asm { vcvtss2sd xmm0, xmm6, xmm6 }
        v260 = 76;
        if ( !v385 )
          v260 = 82;
        __asm { vmovsd  [rsp+4160h+var_40F0], xmm0 }
        LODWORD(v343) = v249;
        LODWORD(v339) = v248;
        LODWORD(v335) = ShotCountForRecoil;
        LODWORD(style) = *((_DWORD *)v389 + 4);
        LODWORD(color) = v246;
        *(float *)&scale = v390;
        LODWORD(vertAlign) = *((_DWORD *)v389 - 5);
        LODWORD(isUsingCensorshipWorldModela) = *((_DWORD *)v389 - 3);
        LODWORD(isUsingDetonatora) = *((_DWORD *)v389 - 4);
        LODWORD(fmtb) = v260;
        Com_sprintf(&buffer[(int)v258], 0x2000 - (int)v258, "^6%s(%c) : time %i, delay %i, jitter %i, sprntIntr %i, rechmbrBlk %i, shot %i, shotRecoil %i, mag %i, chamber %i, heat %.2f\n^7", s_weaponStateNames[*(int *)v389], fmtb, isUsingDetonatora, isUsingCensorshipWorldModela, vertAlign, scale, color, style, v335, v339, v343, v346);
        p_viewModelDObj = (const DObj **)&m_weaponHand->viewModelDObj;
        v262 = &m_weaponHand->rocketModel->name;
        if ( v262 )
        {
          v263 = -1i64;
          do
            ++v263;
          while ( buffer[v263] );
          Com_sprintf(&buffer[(int)v263], 0x2000 - (int)v263, "^7Rocket: ^5%s\n^3", *v262);
        }
        v264 = -1i64;
        do
          ++v264;
        while ( buffer[v264] );
        DObjDisplayAnimToBuffer(*p_viewModelDObj, (const char *)&queryFormat.fmt + 3, &buffer[(int)v264], 0x2000 - v264);
        v265 = ps;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v266 = weaponMap;
        if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        ViewmodelWeapon = BG_GetViewmodelWeapon(v266, v265);
        v268 = BG_WeaponDef(ViewmodelWeapon, 0);
        _R14 = cgameGlob;
        if ( v268->weapClass == WEAPCLASS_TURRET && v268->useTurretViewmodelAnims )
        {
          viewlocked_entNum = cgameGlob->predictedPlayerState.viewlocked_entNum;
          if ( viewlocked_entNum != 2047 )
          {
            v270 = viewlocked_entNum;
            if ( (unsigned int)viewlocked_entNum > 0x9E4 )
            {
              LODWORD(isUsingCensorshipWorldModela) = viewlocked_entNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", isUsingCensorshipWorldModela) )
                __debugbreak();
            }
            if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(isUsingCensorshipWorldModela) = 2;
              LODWORD(isUsingDetonatora) = localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
                __debugbreak();
            }
            v271 = 2533 * localClientNum + v270;
            if ( v271 >= 0x13CA )
            {
              LODWORD(isUsingCensorshipWorldModela) = v271;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", isUsingCensorshipWorldModela) )
                __debugbreak();
            }
            v272 = clientObjMap[v271];
            if ( v272 )
            {
              if ( v272 >= (unsigned int)s_objCount )
              {
                LODWORD(isUsingCensorshipWorldModela) = v272;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", isUsingCensorshipWorldModela) )
                  __debugbreak();
              }
              v273 = (const DObj *)s_objBuf[v272];
              if ( v273 )
              {
                v274 = _R14->predictedPlayerState.viewlocked_entNum;
                if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
                {
                  LODWORD(isUsingCensorshipWorldModela) = localClientNum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isUsingCensorshipWorldModela) )
                    __debugbreak();
                }
                if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
                {
                  LODWORD(isUsingCensorshipWorldModela) = CgEntitySystem::ms_allocatedCount;
                  LODWORD(isUsingDetonatora) = localClientNum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
                    __debugbreak();
                }
                if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
                {
                  LODWORD(isUsingCensorshipWorldModela) = localClientNum;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isUsingCensorshipWorldModela) )
                    __debugbreak();
                }
                v275 = CgEntitySystem::ms_entitySystemArray[localClientNum];
                if ( (unsigned int)v274 >= 0x800 )
                {
                  LODWORD(isUsingCensorshipWorldModela) = 2048;
                  LODWORD(isUsingDetonatora) = v274;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
                    __debugbreak();
                }
                _RBX = (__int64)&v275->m_entities[v274];
                if ( (*(_BYTE *)(_RBX + 648) & 1) != 0 )
                {
                  v277 = -1i64;
                  do
                    ++v277;
                  while ( buffer[v277] );
                  CG_GetPoseOrigin((const cpose_t *)_RBX, (vec3_t *)&result);
                  __asm
                  {
                    vmovss  xmm4, dword ptr [rbx+50h]
                    vcvtss2sd xmm4, xmm4, xmm4
                    vmovss  xmm5, dword ptr [rbx+4Ch]
                    vcvtss2sd xmm5, xmm5, xmm5
                    vmovss  xmm0, dword ptr [rbx+48h]
                    vcvtss2sd xmm0, xmm0, xmm0
                    vmovss  xmm1, [rbp+3F10h+result.baseFovAdjustment]
                    vcvtss2sd xmm1, xmm1, xmm1
                    vmovss  xmm3, [rbp+3F10h+result.baseFov]
                    vcvtss2sd xmm3, xmm3, xmm3
                    vmovss  xmm2, [rbp+3F10h+result.finalFov]
                    vcvtss2sd xmm2, xmm2, xmm2
                    vmovsd  qword ptr [rsp+4160h+vertAlign], xmm4
                    vmovsd  qword ptr [rsp+4160h+isUsingCensorshipWorldModel], xmm5
                    vmovsd  qword ptr [rsp+4160h+isUsingDetonator], xmm0
                    vmovsd  [rsp+4160h+fmt], xmm1
                    vmovq   r9, xmm3
                    vmovq   r8, xmm2
                  }
                  v291 = j_va("\n\nclient %d: (%.1f,%.1f,%.1f), (%.1f,%.1f,%.1f)\n", (unsigned int)localClientNum, _R8, _R9, fmtf, isUsingDetonatord, isUsingCensorshipWorldModelb, vertAlignc);
                  DObjDisplayAnimToBuffer(v273, v291, &buffer[(int)v277], 0x2000 - v277);
                  memset(&result, 0, sizeof(result));
                }
              }
            }
          }
        }
        v243 = ++v385;
        v245 = v393 + 4;
        v393 += 4i64;
        m_weaponHand = (WeaponHand *)(p_viewModelDObj + 5);
        p_weaponState = v389 + 80;
        v389 += 80;
        --v394;
      }
      while ( v394 );
    }
  }
  __asm
  {
    vmovss  xmm0, [rbp+3F10h+var_3F38]
    vmovss  [rsp+4160h+scale], xmm0
    vmovss  xmm0, cs:__real@41a00000
    vmovss  dword ptr [rsp+4160h+isUsingDetonator], xmm0
    vmovss  dword ptr [rsp+4160h+fmt], xmm15
  }
  UI_DrawText(scrPlace, buffer, 0x2000, font, fmtg, isUsingDetonatore, 1, 1, scalea, &colorWhite, 3);
  _R11 = &v449;
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
CG_DrawDebug_DrawViewmodelSwimDragInfo
==============
*/
void CG_DrawDebug_DrawViewmodelSwimDragInfo(LocalClientNum_t localClientNum)
{
  char v25; 
  vec3_t forward; 
  vec3_t up; 
  vec4_t color; 
  char v32; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-18h], xmm6 }
  _RBX = DCONST_DVARFLT_player_swimDragHandLookAtOffset;
  if ( !DCONST_DVARFLT_player_swimDragHandLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimDragHandLookAtOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  AngleVectors(&_RBX->predictedPlayerState.viewangles, &forward, NULL, &up);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsp+98h+forward]
    vaddss  xmm2, xmm1, dword ptr [rbx+38h]
    vmulss  xmm1, xmm6, dword ptr [rsp+98h+forward+4]
    vmovss  dword ptr [rsp+98h+forward], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+3Ch]
    vmulss  xmm1, xmm6, dword ptr [rsp+98h+forward+8]
    vmovss  dword ptr [rsp+98h+forward+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+98h+forward+8], xmm2
  }
  CL_AddDebugLine(&_RBX->predictedPlayerState.origin, &forward, &colorOrange, 0, 0, 0);
  CL_AddDebugLine(&_RBX->predictedPlayerState.origin, &_RBX->lastDragPosition, &colorRed, 0, 0, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+67580h]
    vsubss  xmm2, xmm0, dword ptr [rbx+38h]
    vmovss  xmm1, dword ptr [rbx+67584h]
    vsubss  xmm3, xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm0, dword ptr [rbx+67588h]
    vsubss  xmm4, xmm0, dword ptr [rbx+40h]
    vmulss  xmm1, xmm3, dword ptr [rsp+98h+up+4]
    vmulss  xmm2, xmm2, dword ptr [rsp+98h+up]
    vmulss  xmm0, xmm4, dword ptr [rsp+98h+up+8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm4, xmm1
  }
  if ( v25 )
    __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
  else
    __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
  __asm { vmovups xmmword ptr [rsp+98h+color], xmm0 }
  CL_AddDebugLine(&forward, &_RBX->lastDragPosition, &color, 0, 0, 0);
  _R11 = &v32;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CG_DrawDebug_DrawWorldUpDisplay
==============
*/
void CG_DrawDebug_DrawWorldUpDisplay(LocalClientNum_t localClientNum)
{
  const dvar_t *v6; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  CgHandler *Handler; 
  int m_movingPlatformEntity; 
  centity_t *Entity; 
  CgAntiLag *Instance; 
  int serverTime; 
  int clientNum; 
  bool v50; 
  bool v57; 
  const vec4_t *v60; 
  const vec4_t *v62; 
  const vec4_t *v65; 
  _BOOL8 v68; 
  bool IsPlayerZeroG; 
  bool IsPlayerZeroGWalking; 
  int pm_type; 
  __int64 v108; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  double forceColor; 
  double forceColora; 
  double forceColorb; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  vec3_t outUp; 
  vec3_t up; 
  vec3_t outAngles; 
  WorldUpReferenceFrame v149; 
  BgAntiLagEntityInfo outInfo; 
  char dest[256]; 

  v6 = DVARBOOL_moverDebug;
  if ( !DVARBOOL_moverDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moverDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals )
    {
      __asm
      {
        vmovaps [rsp+2C0h+var_30], xmm6
        vmovaps [rsp+2C0h+var_40], xmm7
        vmovaps [rsp+2C0h+var_50], xmm8
        vmovaps [rsp+2C0h+var_60], xmm9
        vmovaps [rsp+2C0h+var_70], xmm10
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10833, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      Com_sprintf(dest, 0x100ui64, "World Up Debug");
      __asm
      {
        vmovss  xmm6, cs:__real@41000000
        vmovss  xmm1, cs:__real@40000000; x
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm2, xmm6; y
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, v128, 0);
      _RSI = &LocalClientGlobals->predictedPlayerState;
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v149, &LocalClientGlobals->predictedPlayerState, Handler);
      WorldUpReferenceFrame::GetAngles(&v149, &outAngles);
      BGMovingPlatformClient::ResolvePlatformUp(&LocalClientGlobals->movingPlatforms, &LocalClientGlobals->predictedPlayerState, &outUp);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1C0h+var_240.m_axis+18h]
        vmovss  xmm1, dword ptr [rbp+1C0h+var_240.m_axis+1Ch]
        vmulss  xmm3, xmm0, dword ptr [rsp+2C0h+outUp]
        vmulss  xmm2, xmm1, dword ptr [rsp+2C0h+outUp+4]
        vmovss  xmm0, dword ptr [rbp+1C0h+var_240.m_axis+20h]
        vmulss  xmm1, xmm0, dword ptr [rsp+2C0h+outUp+8]
      }
      m_movingPlatformEntity = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
      __asm
      {
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm10, xmm4, xmm1
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm8, xmm8, xmm8
      }
      if ( BGMovingPlatforms::IsMovingPlatform(_RSI->movingPlatforms.m_movingPlatformEntity) )
      {
        Entity = CG_GetEntity(localClientNum, m_movingPlatformEntity);
        AngleVectors(&Entity->pose.angles, NULL, NULL, &up);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+var_240.m_axis+18h]
          vmovss  xmm1, dword ptr [rbp+1C0h+var_240.m_axis+1Ch]
          vmulss  xmm3, xmm0, dword ptr [rsp+2C0h+up]
          vmulss  xmm2, xmm1, dword ptr [rsp+2C0h+up+4]
          vmovss  xmm0, dword ptr [rbp+1C0h+var_240.m_axis+20h]
          vmulss  xmm1, xmm0, dword ptr [rsp+2C0h+up+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm9, xmm4, xmm1
        }
        Instance = CgAntiLag::GetInstance(localClientNum);
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10884, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
          __debugbreak();
        serverTime = _RSI->serverTime;
        clientNum = _RSI->clientNum;
        outInfo.boneInfo.boneList.m_usedSize = 0;
        outInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(Instance, clientNum, m_movingPlatformEntity, 8u, serverTime, &outInfo);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+outInfo.velocity]
          vmovss  xmm1, dword ptr [rbp+1C0h+outInfo.velocity+4]
          vmulss  xmm2, xmm1, xmm1
          vmulss  xmm3, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbp+1C0h+outInfo.velocity+8]
          vmulss  xmm1, xmm0, xmm0
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vsqrtss xmm8, xmm2, xmm2
        }
      }
      Com_sprintf(dest, 0x100ui64, "Mover ID (Client):\t\t\t\t\t%d", (unsigned int)_RSI->movingPlatforms.m_movingPlatformEntity);
      __asm
      {
        vmovss  xmm7, cs:__real@40800000
        vmovss  xmm2, cs:__real@41800000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v129, 0);
      Com_sprintf(dest, 0x100ui64, "Mover ID (Server):\t\t\t\t\t%d", (unsigned int)g_serverMoverDebugMoverID);
      __asm
      {
        vmovss  xmm2, cs:__real@41c00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v130, 0);
      v50 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xDu);
      Com_sprintf(dest, 0x100ui64, "Mover Push:\t\t\t\t\t\t\t%d", v50);
      __asm
      {
        vmovss  xmm2, cs:__real@42000000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v131, 0);
      __asm
      {
        vcvtss2sd xmm3, xmm8, xmm8
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Mover Speed:\t\t\t\t\t\t\t%f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, cs:__real@42200000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v132, 0);
      v57 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xFu);
      Com_sprintf(dest, 0x100ui64, "Mover Track:\t\t\t\t\t\t\t%d", v57);
      __asm
      {
        vmovss  xmm2, cs:__real@42400000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v133, 0);
      v60 = &colorRed;
      __asm { vmovaps xmm8, [rsp+2C0h+var_50] }
      if ( g_serverMoverDebugSkeletonMismatch )
      {
        Com_sprintf(dest, 0x100ui64, "Mover Sub Skeletal Mismatch:\t\t%d", (unsigned int)g_serverMoverDebugSkeletonMismatch);
        v62 = &colorRed;
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Mover Sub Skeletal Mismatch:\t\t%d", 0i64);
        v62 = &colorWhite;
      }
      __asm
      {
        vmovss  xmm2, cs:__real@42600000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v62, 0, 1, v134, 0);
      if ( g_serverMoverDebugRigidBodyMismatch )
      {
        Com_sprintf(dest, 0x100ui64, "Mover Rigid Body Mismatch:\t\t%d", (unsigned int)g_serverMoverDebugRigidBodyMismatch);
        v65 = &colorRed;
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Mover Rigid Body Mismatch:\t\t%d", 0i64);
        v65 = &colorWhite;
      }
      __asm
      {
        vmovss  xmm2, cs:__real@42800000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v65, 0, 1, v135, 0);
      if ( g_serverMoverWorldUpInvalid )
      {
        v68 = g_serverMoverWorldUpInvalid;
      }
      else
      {
        v60 = &colorWhite;
        v68 = 0i64;
      }
      Com_sprintf(dest, 0x100ui64, "Mover World Up Invalid:\t\t\t%d", v68);
      __asm
      {
        vmovss  xmm2, cs:__real@42900000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v60, 0, 1, v136, 0);
      Com_sprintf(dest, 0x100ui64, "World Up Ent Num:\t\t\t\t\t\t%d", (unsigned int)_RSI->worldUpRefEnt);
      __asm
      {
        vmovss  xmm2, cs:__real@42a00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v137, 0);
      __asm
      {
        vcvtss2sd xmm3, xmm9, xmm9
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "World Up To Mover Dot:\t\t\t\t%f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, cs:__real@42b00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v138, 0);
      __asm
      {
        vcvtss2sd xmm3, xmm10, xmm10
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "World Up To Pmove Platform Up Dot:\t%f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, cs:__real@42c00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v139, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+2B4h]
        vmovss  xmm3, dword ptr [rsi+2ACh]
        vmovss  xmm1, dword ptr [rsi+2B0h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+2C0h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2C0h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Wrold Up Player State Angles:\t\t\t%f %f %f", *(double *)&_XMM3, *(double *)&fmt, forceColor);
      __asm
      {
        vmovss  xmm2, cs:__real@42d00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v140, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+2C0h+outAngles+8]
        vmovss  xmm3, dword ptr [rsp+2C0h+outAngles]
        vmovss  xmm1, dword ptr [rsp+2C0h+outAngles+4]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+2C0h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2C0h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "World Up Total Angles:\t\t\t\t%f %f %f", *(double *)&_XMM3, *(double *)&fmta, forceColora);
      __asm
      {
        vmovss  xmm2, cs:__real@42e00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v141, 0);
      IsPlayerZeroG = BG_IsPlayerZeroG(_RSI);
      Com_sprintf(dest, 0x100ui64, "Zero G. Active:\t\t\t\t\t\t%d", IsPlayerZeroG);
      __asm
      {
        vmovss  xmm2, cs:__real@42f00000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v142, 0);
      IsPlayerZeroGWalking = BG_IsPlayerZeroGWalking(_RSI);
      Com_sprintf(dest, 0x100ui64, "Zero G. Walking:\t\t\t\t\t\t%d", IsPlayerZeroGWalking);
      __asm
      {
        vmovss  xmm2, cs:__real@43000000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v143, 0);
      pm_type = _RSI->pm_type;
      __asm
      {
        vmovaps xmm10, [rsp+2C0h+var_70]
        vmovaps xmm9, [rsp+2C0h+var_60]
      }
      if ( pm_type == 1 || (v108 = 0i64, pm_type == 8) )
        v108 = 1i64;
      Com_sprintf(dest, 0x100ui64, "Player Linked:\t\t\t\t\t\t%d", v108);
      __asm
      {
        vmovss  xmm2, cs:__real@43080000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v144, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+288h]
        vmovss  xmm3, dword ptr [rsi+280h]
        vmovss  xmm1, dword ptr [rsi+284h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+2C0h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+2C0h+fmt], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Player Link Angles:\t\t\t\t\t%f %f %f", *(double *)&_XMM3, *(double *)&fmtb, forceColorb);
      __asm
      {
        vmovss  xmm2, cs:__real@43100000; y
        vmovss  [rsp+2C0h+var_288], xmm6
        vmovaps xmm1, xmm7; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v145, 0);
      __asm
      {
        vmovaps xmm7, [rsp+2C0h+var_40]
        vmovaps xmm6, [rsp+2C0h+var_30]
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawXAnimLodInfo
==============
*/
void CG_DrawDebug_DrawXAnimLodInfo(const LocalClientNum_t localClientNum, int entityNum, CgDebugDrawAnimLodInfoType infoType)
{
  DObj *ClientDObj; 
  const DObj *v8; 
  const XAnimTree *tree; 
  const cpose_t *PoseExtended; 
  __int32 v31; 
  __int32 v32; 
  __int32 v33; 
  double v47; 
  float v48; 
  double duration; 
  vec3_t outOrigin; 
  vec4_t color; 
  char dest[128]; 

  ClientDObj = Com_GetClientDObj(entityNum, localClientNum);
  v8 = ClientDObj;
  if ( ClientDObj )
  {
    tree = ClientDObj->tree;
    if ( ClientDObj->tree )
    {
      if ( XAnimTreeHasLods(ClientDObj->tree) )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, entityNum, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        *(double *)&_XMM0 = XAnimGetClientLodFloat(v8);
        __asm
        {
          vmovups xmm3, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow
          vmovups xmm2, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          vmovups xmm1, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
          vcvttss2si eax, xmm0
          vmovaps xmm5, xmm0
          vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
        }
        if ( (_BYTE)_EAX )
        {
          if ( (unsigned __int8)_EAX == 1 )
          {
            __asm { vmovups xmm4, xmm1 }
          }
          else if ( (unsigned __int8)_EAX == 2 )
          {
            __asm { vmovups xmm4, xmm3 }
          }
          else
          {
            __asm { vmovups xmm4, xmm2 }
          }
        }
        else
        {
          __asm { vmovups xmm4, xmm0 }
        }
        if ( (_BYTE)_EAX )
        {
          if ( (unsigned __int8)_EAX == 1 )
            __asm { vmovups xmm2, xmm3 }
        }
        else
        {
          __asm { vmovups xmm2, xmm1 }
        }
        dest[0] = 0;
        __asm
        {
          vsubps  xmm3, xmm2, xmm4
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edx
          vsubss  xmm1, xmm5, xmm0
          vmovaps xmm2, xmm1
          vshufps xmm2, xmm2, xmm2, 0
          vmulps  xmm0, xmm3, xmm2
          vmovss  xmm2, dword ptr [rsp+108h+outOrigin+8]
          vaddps  xmm1, xmm0, xmm4
          vaddss  xmm0, xmm2, cs:__real@42700000
          vmovss  dword ptr [rsp+108h+outOrigin+8], xmm0
          vmovups xmmword ptr [rsp+108h+color], xmm1
        }
        v31 = infoType - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( !v33 )
            {
              CG_DebugStar(&outOrigin, &color, 0, 0);
              return;
            }
            if ( v33 == 1 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, cs:__real@3a83126f
                vcvtss2sd xmm2, xmm1, xmm1
                vcvtss2sd xmm3, xmm5, xmm5
                vmovsd  qword ptr [rsp+108h+duration], xmm2
                vmovq   r9, xmm3
              }
              Com_sprintf(dest, 0x80ui64, "%.2f g:%d t:%.2f d:%d", *(double *)&_XMM3, SHIBYTE(tree->lodState.goalLod), duration, tree->lodState.distance);
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtss2sd xmm3, xmm5, xmm5
              vcvtsi2sd xmm0, xmm0, eax
              vmovq   r9, xmm3
              vmovsd  [rsp+108h+var_E8], xmm0
            }
            Com_sprintf(dest, 0x80ui64, "%.2f %.0f", *(double *)&_XMM3, v47);
          }
        }
        else
        {
          __asm
          {
            vcvtss2sd xmm3, xmm5, xmm5
            vmovq   r9, xmm3
          }
          Com_sprintf(dest, 0x80ui64, "%.2f", *(double *)&_XMM3);
        }
        __asm
        {
          vmovss  xmm0, cs:__real@3f400000
          vmovss  dword ptr [rsp+108h+var_E8], xmm0
        }
        CG_DebugStarWithText(&outOrigin, &color, &color, dest, v48, 0);
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawXAnimLodInfoGlobal
==============
*/
void CG_DrawDebug_DrawXAnimLodInfoGlobal(const LocalClientNum_t localClientNum)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const dvar_t *v9; 
  int integer; 
  int v12; 
  __int64 v14; 
  CgEntitySystem *v17; 
  __int64 ignoreArbitraryUp; 
  __int64 v47; 
  int v48[4]; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t right; 

  v6 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler((LocalClientNum_t)v6);
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_GetPlayerEyePosition(CgWeaponMap::ms_instance[v6], &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
  BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, &forward, &right, NULL, Handler, 0);
  v9 = DCONST_DVARINT_cg_drawDebugAnimLodInfo;
  if ( !DCONST_DVARINT_cg_drawDebugAnimLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( integer > 0 )
  {
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm7
      vmovaps [rsp+108h+var_58], xmm8
      vmovss  xmm8, cs:__real@3a83126f
      vmovaps [rsp+108h+var_68], xmm9
    }
    v12 = 0;
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+108h+var_78], xmm10
    }
    v14 = 0i64;
    __asm
    {
      vmovss  xmm10, cs:__real@80000000
      vmovaps [rsp+108h+var_38], xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v47) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v47) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v47) = CgEntitySystem::ms_allocatedCount;
        LODWORD(ignoreArbitraryUp) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", ignoreArbitraryUp, v47) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v6] )
      {
        LODWORD(v47) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v47) )
          __debugbreak();
      }
      v17 = CgEntitySystem::ms_entitySystemArray[v6];
      if ( (unsigned int)v12 >= 0x800 )
      {
        LODWORD(v47) = 2048;
        LODWORD(ignoreArbitraryUp) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUp, v47) )
          __debugbreak();
      }
      if ( (v17->m_entities[v14].flags & 1) != 0 )
      {
        if ( Handler->GetEntityOrigin(Handler, v12, (vec3_t *)v48) )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+var_C8]
            vsubss  xmm4, xmm0, dword ptr [rsp+108h+outOrigin]
            vmovss  xmm1, [rsp+108h+var_C4]
            vsubss  xmm5, xmm1, dword ptr [rsp+108h+outOrigin+4]
            vmovss  xmm0, [rsp+108h+var_C0]
            vsubss  xmm6, xmm0, dword ptr [rsp+108h+outOrigin+8]
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm8
            vsqrtss xmm1, xmm1, xmm1
            vcmpless xmm0, xmm1, xmm10
            vblendvps xmm0, xmm1, xmm9, xmm0
            vdivss  xmm1, xmm9, xmm0
            vmulss  xmm0, xmm4, xmm1
            vmulss  xmm2, xmm5, xmm1
            vmulss  xmm3, xmm6, xmm1
            vmulss  xmm1, xmm0, dword ptr [rsp+108h+forward]
            vmulss  xmm0, xmm2, dword ptr [rsp+108h+forward+4]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, dword ptr [rsp+108h+forward+8]
            vaddss  xmm3, xmm2, xmm1
            vcomiss xmm3, xmm7
          }
          CG_DrawDebug_DrawXAnimLodInfo((const LocalClientNum_t)v6, v12, (CgDebugDrawAnimLodInfoType)integer);
        }
      }
      ++v12;
      ++v14;
    }
    while ( v12 < 2048 );
    __asm
    {
      vmovaps xmm10, [rsp+108h+var_78]
      vmovaps xmm9, [rsp+108h+var_68]
      vmovaps xmm8, [rsp+108h+var_58]
      vmovaps xmm7, [rsp+108h+var_48]
      vmovaps xmm6, [rsp+108h+var_38]
    }
  }
}

/*
==============
CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo
==============
*/

void __fastcall CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float v10; 
  float v11; 
  float v12; 
  int bufferPos[4]; 
  char buffer[4096]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    bufferPos[0] = 0;
    __asm { vmovaps [rsp+1098h+var_18], xmm6 }
    XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer(buffer, bufferPos, 0x1000ui64);
    __asm
    {
      vmovss  xmm6, cs:__real@3e800000
      vmovaps xmm2, xmm6; scale
    }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, cs:__real@41a00000
      vmovss  [rsp+1098h+var_1058], xmm6
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+1098h+var_1070], xmm0
      vmovss  [rsp+1098h+var_1078], xmm1
    }
    UI_DrawText(ActivePlacement, buffer, 4096, FontHandle, v10, v11, 1, 1, v12, &colorWhite, 3);
    __asm { vmovaps xmm6, [rsp+1098h+var_18] }
  }
}

/*
==============
CG_DrawDebug_DrawXAnimUsage
==============
*/
void CG_DrawDebug_DrawXAnimUsage(const LocalClientNum_t localClientNum, int entityNum, bool ismax)
{
  __int64 v3; 
  DObj *ClientDObj; 
  XAnimTree **p_tree; 
  XAnimTree *tree; 
  const cpose_t *Pose; 
  int info_usage; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  __int64 v20; 
  const char *v21; 
  int numCustomNodes; 
  int numAnimInfoNodes; 
  vec3_t outOrigin; 

  v3 = entityNum;
  numCustomNodes = 0;
  numAnimInfoNodes = 0;
  ClientDObj = Com_GetClientDObj(entityNum, localClientNum);
  p_tree = &ClientDObj->tree;
  if ( ClientDObj )
  {
    tree = ClientDObj->tree;
    if ( tree )
    {
      if ( tree->info_usage )
      {
        Pose = CG_GetPose(localClientNum, v3);
        if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2069, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        CG_GetPoseOrigin(Pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+78h+outOrigin+8]
          vaddss  xmm1, xmm0, cs:__real@42900000
        }
        info_usage = (*p_tree)->info_usage;
        __asm { vmovss  dword ptr [rsp+78h+outOrigin+8], xmm1 }
        if ( info_usage >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2074, ASSERT_TYPE_ASSERT, "(numAnims < 256)", "%s\n\tMax number of used anims reached for entity %d", "numAnims < XANIM_BYTE_MAX", v3) )
          __debugbreak();
        XAnimTreeCountCustomNode(*p_tree, (*p_tree)->children, &numCustomNodes, &numAnimInfoNodes);
        v13 = numCustomNodes;
        v14 = numAnimInfoNodes;
        v15 = info_usage;
        LOBYTE(v16) = numCustomNodes;
        LOBYTE(v17) = numAnimInfoNodes;
        if ( g_maxNumAnims[v3] > (unsigned __int8)info_usage )
          v15 = g_maxNumAnims[v3];
        v18 = g_maxNumCustomNodes[v3];
        g_maxNumAnims[v3] = v15;
        if ( v18 > (unsigned __int8)v13 )
          LOBYTE(v16) = v18;
        v19 = g_maxNumAnimInfoNodes[v3];
        g_maxNumCustomNodes[v3] = v16;
        if ( v19 > (unsigned __int8)v14 )
          LOBYTE(v17) = v19;
        g_maxNumAnimInfoNodes[v3] = v17;
        if ( ismax )
        {
          v17 = (unsigned __int8)v17;
          v16 = (unsigned __int8)v16;
          v20 = v15;
        }
        else
        {
          v17 = v14;
          v16 = v13;
          v20 = (unsigned int)info_usage;
        }
        v21 = j_va("%i anims, %i custom, %i anim info", v20, v16, v17);
        __asm { vmovss  xmm2, cs:__real@3f000000; scale }
        CL_AddDebugString(&outOrigin, &colorGreen, *(float *)&_XMM2, v21, 0, 1);
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawXAnimUsageGlobal
==============
*/
void CG_DrawDebug_DrawXAnimUsageGlobal(const LocalClientNum_t localClientNum, bool ismax)
{
  int v3; 
  __int64 v5; 
  CgEntitySystem **v6; 
  CgEntitySystem *v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = 0;
  v5 = 0i64;
  v6 = &CgEntitySystem::ms_entitySystemArray[localClientNum];
  do
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v9) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v9) )
        __debugbreak();
    }
    if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v8) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !*v6 )
    {
      LODWORD(v9) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
        __debugbreak();
    }
    v7 = *v6;
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v7->m_entities[v5].flags & 1) != 0 )
      CG_DrawDebug_DrawXAnimUsage(localClientNum, v3, ismax);
    ++v3;
    ++v5;
  }
  while ( v3 < 2048 );
}

/*
==============
CG_DrawDebug_GetHitLocGroup
==============
*/
__int64 CG_DrawDebug_GetHitLocGroup(unsigned __int8 bonePartClassification)
{
  __int64 result; 

  switch ( bonePartClassification )
  {
    case 1u:
    case 2u:
      result = 2i64;
      break;
    case 3u:
    case 4u:
    case 5u:
      result = 3i64;
      break;
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
      result = 4i64;
      break;
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
      result = 5i64;
      break;
    default:
      result = 6i64;
      break;
  }
  return result;
}

/*
==============
CG_DrawDebug_GetLightColor
==============
*/
vec3_t *CG_DrawDebug_GetLightColor(vec3_t *result, const GfxLight *light, DbgLightType type)
{
  bool v7; 
  __m256i v10; 

  __asm
  {
    vmovups ymm0, cs:__ymm@3f8000003f80000000000000000000003f8000003f8000003f8000003f800000
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vxorps  xmm2, xmm2, xmm2
    vmovups [rsp+58h+var_58], ymm0
  }
  v7 = r_debugDrawLights->current.integer == 1;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_28], xmm2
    vmovss  [rsp+58h+var_24], xmm0
    vmovss  [rsp+58h+var_20], xmm2
    vmovups [rsp+58h+var_38], xmm1
  }
  if ( v7 )
  {
    LODWORD(result->v[0]) = v10.m256i_i32[3 * type];
    LODWORD(result->v[1]) = v10.m256i_i32[3 * type + 1];
    LODWORD(result->v[2]) = v10.m256i_i32[3 * type + 2];
  }
  else
  {
    *result = light->colorLinearSrgb;
  }
  return result;
}

/*
==============
CG_DrawDebug_GetOffhandGestureFlags
==============
*/
__int64 CG_DrawDebug_GetOffhandGestureFlags(const playerState_s *ps, char *outBuffer, int bufferSize, int sizeUsed)
{
  __int64 v4; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 

  v4 = sizeUsed;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9316, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9317, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  if ( (int)v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9318, ASSERT_TYPE_ASSERT, "(sizeUsed >= 0)", (const char *)&queryFormat, "sizeUsed >= 0") )
    __debugbreak();
  v8 = Com_sprintf(&outBuffer[v4], bufferSize - (int)v4, "^7Offhand Flags:") + v4;
  v9 = 55;
  v10 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 1) != 0 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v8], bufferSize - v8, " ^%cUSE", v10) + v8;
  v12 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 2) != 0 )
    v12 = 50i64;
  v13 = Com_sprintf(&outBuffer[v11], bufferSize - v11, " ^%cIN", v12) + v11;
  v14 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 4) != 0 )
    v14 = 50i64;
  v15 = Com_sprintf(&outBuffer[v13], bufferSize - v13, " ^%cHLD", v14) + v13;
  v16 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 8) != 0 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v15], bufferSize - v15, " ^%cFIR", v16) + v15;
  v18 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 0x10) != 0 )
    v18 = 50i64;
  v19 = Com_sprintf(&outBuffer[v17], bufferSize - v17, " ^%cPUT", v18) + v17;
  v20 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 0x20) != 0 )
    v20 = 50i64;
  v21 = Com_sprintf(&outBuffer[v19], bufferSize - v19, " ^%cDET", v20) + v19;
  v22 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 0x40) != 0 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v21], bufferSize - v21, " ^%cSWU", v22) + v21;
  v24 = 55i64;
  if ( SLOBYTE(ps->weapCommon.offhandGestureFlags) < 0 )
    v24 = 50i64;
  v25 = Com_sprintf(&outBuffer[v23], bufferSize - v23, " ^%cSWL", v24) + v23;
  v26 = 55i64;
  if ( (ps->weapCommon.offhandGestureFlags & 0x100) != 0 )
    v26 = 50i64;
  v27 = Com_sprintf(&outBuffer[v25], bufferSize - v25, " ^%cSWA", v26) + v25;
  if ( (ps->weapCommon.offhandGestureFlags & 0x200) != 0 )
    v9 = 50;
  v28 = Com_sprintf(&outBuffer[v27], bufferSize - v27, " ^%cOVE", v9) + v27;
  return (unsigned int)(v28 + Com_sprintf(&outBuffer[v28], bufferSize - v28, "\n"));
}

/*
==============
CG_DrawDebug_GetOffhandState
==============
*/
__int64 CG_DrawDebug_GetOffhandState(const cg_t *cgameGlob, const playerState_s *ps, char *outBuffer, int bufferSize, int sizeUsed)
{
  ClientOffhandGestureWeapInfo *p_gestureWeapInfo; 
  CgWeaponMap *Instance; 
  unsigned int GestureIdxForWeapon; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9351, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9352, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( sizeUsed < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9353, ASSERT_TYPE_ASSERT, "(sizeUsed >= 0)", (const char *)&queryFormat, "sizeUsed >= 0") )
    __debugbreak();
  p_gestureWeapInfo = &cgameGlob->gestureWeapInfo;
  if ( cgameGlob->gestureWeapInfo.offhandGestureWeapon.weaponIdx )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9365, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    GestureIdxForWeapon = BG_Offhand_GetGestureIdxForWeapon(ps, Instance, &p_gestureWeapInfo->offhandGestureWeapon, 0, OHGT_THROW);
    v11 = BG_Offhand_GetGestureIdxForWeapon(ps, Instance, &p_gestureWeapInfo->offhandGestureWeapon, 0, OHGT_PULLBACK);
    v12 = BG_Offhand_GetGestureIdxForWeapon(ps, Instance, &p_gestureWeapInfo->offhandGestureWeapon, 0, OHGT_DETONATE);
    v13 = BG_Offhand_GetGestureIdxForWeapon(ps, Instance, &p_gestureWeapInfo->offhandGestureWeapon, 0, OHGT_WEAPON);
    BG_Gesture_IsPlayingByIndex(ps, GestureIdxForWeapon, NULL);
    BG_Gesture_IsPlayingByIndex(ps, v11, NULL);
    BG_Gesture_IsPlayingByIndex(ps, v12, NULL);
    BG_Gesture_IsPlayingByIndex(ps, v13, NULL);
  }
  return (unsigned int)(sizeUsed + Com_sprintf(&outBuffer[sizeUsed], bufferSize - sizeUsed, "^7Offhand Gesture State: ^%cTHRW ^%cPULL ^%cDETN ^%cSCRW\n"));
}

/*
==============
CG_DrawDebug_GetOffhandWeapon
==============
*/
__int64 CG_DrawDebug_GetOffhandWeapon(const cg_t *cgameGlob, char *outBuffer, int bufferSize, int sizeUsed)
{
  __int64 v4; 
  ClientOffhandGestureWeapInfo *p_gestureWeapInfo; 
  unsigned __int16 weaponIdx; 
  __int64 v10; 
  char *v11; 
  char output[1024]; 

  v4 = sizeUsed;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9392, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (int)v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9393, ASSERT_TYPE_ASSERT, "(sizeUsed >= 0)", (const char *)&queryFormat, "sizeUsed >= 0") )
    __debugbreak();
  p_gestureWeapInfo = &cgameGlob->gestureWeapInfo;
  weaponIdx = cgameGlob->gestureWeapInfo.offhandGestureWeapon.weaponIdx;
  if ( weaponIdx )
    BG_GetWeaponName(&p_gestureWeapInfo->offhandGestureWeapon, output, 0x400u);
  v10 = 55i64;
  v11 = output;
  if ( !weaponIdx )
    v11 = "none";
  if ( weaponIdx )
    v10 = 50i64;
  return (unsigned int)(v4 + Com_sprintf(&outBuffer[v4], bufferSize - (int)v4, "^7Offhand Gesture Weapon: ^%c%s\n", v10, v11));
}

/*
==============
CG_DrawDebug_GetSharedPLFlags
==============
*/
__int64 CG_DrawDebug_GetSharedPLFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 

  v3 = bufferSize;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10192, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10193, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "PLinkFlags\n");
  v7 = 55;
  v8 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 1) != 0 )
    v8 = 50i64;
  v9 = Com_sprintf(&outBuffer[v6], (int)v3 - v6, "^%cANGLES_LOCKED\n", v8) + v6;
  v10 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 2) != 0 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v9], (int)v3 - v9, "^%cUSES_OFFSET\n", v10) + v9;
  v12 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 )
    v12 = 50i64;
  v13 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cWEAPONVIEW_ONLY\n", v12) + v11;
  v14 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 8) != 0 )
    v14 = 50i64;
  v15 = Com_sprintf(&outBuffer[v13], (int)v3 - v13, "^%cFIXED_ZNEAR_DISTANT\n", v14) + v13;
  v16 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 0x10) != 0 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v15], (int)v3 - v15, "^%cFIXED_ZNEAR_CLOSE\n", v16) + v15;
  v18 = 55i64;
  if ( (ps->linkFlags.m_flags[0] & 0x20) != 0 )
    v18 = 50i64;
  v19 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cREMOTE_TAG_ANGLES\n", v18) + v17;
  if ( (ps->linkFlags.m_flags[0] & 0x40) != 0 )
    v7 = 50;
  return (unsigned int)(v19 + Com_sprintf(&outBuffer[v19], (int)v3 - v19, "^%cUSE_TAG_CAMERA_SCRIPTED\n", v7));
}

/*
==============
CG_DrawDebug_GetSharedPMFlags
==============
*/
__int64 CG_DrawDebug_GetSharedPMFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 
  bool v57; 
  __int64 v58; 
  int v59; 
  bool v60; 
  __int64 v61; 
  int v62; 
  bool v63; 
  __int64 v64; 
  int v65; 
  bool v66; 
  __int64 v67; 
  int v68; 
  bool v69; 
  __int64 v70; 
  int v71; 
  bool v72; 
  __int64 v73; 
  int v74; 
  bool v75; 
  __int64 v76; 
  int v77; 
  bool v78; 
  __int64 v79; 
  int v80; 
  bool v81; 
  __int64 v82; 
  int v83; 
  bool v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  int v88; 
  bool v89; 
  __int64 v90; 
  int v91; 
  bool v92; 
  __int64 v93; 
  int v94; 
  bool v95; 
  __int64 v96; 
  int v97; 
  bool v98; 
  __int64 v99; 
  int v100; 
  bool v101; 
  __int64 v102; 
  int v103; 
  bool v104; 
  __int64 v105; 
  int v106; 
  bool v107; 
  __int64 v108; 
  int v109; 
  bool v110; 
  __int64 v111; 
  int v112; 
  bool v113; 
  __int64 v114; 
  int v115; 
  bool v116; 
  __int64 v117; 
  int v118; 
  bool v119; 
  __int64 v120; 
  int v121; 
  bool v122; 
  __int64 v123; 
  int v124; 
  bool v125; 
  __int64 v126; 
  int v127; 
  bool v128; 
  __int64 v129; 
  int v130; 
  bool v131; 
  __int64 v132; 
  int v133; 
  __int64 v134; 
  int v135; 
  bool v136; 
  __int64 v137; 
  int v138; 
  bool v139; 
  __int64 v140; 
  int v141; 
  bool v142; 
  __int64 v143; 
  int v144; 
  bool v145; 
  __int64 v146; 
  int v147; 
  bool v148; 
  __int64 v149; 
  int v150; 
  bool v151; 
  __int64 v152; 
  int v153; 
  bool v154; 
  __int64 v155; 
  int v156; 
  bool v157; 
  __int64 v158; 
  int v159; 
  bool v160; 
  __int64 v161; 
  int v162; 
  bool v163; 
  __int64 v164; 
  int v165; 
  __int64 v166; 
  int v167; 
  bool v168; 
  __int64 v169; 
  int v170; 
  bool v171; 
  __int64 v172; 
  int v173; 
  bool v174; 
  __int64 v175; 
  int v176; 

  v3 = bufferSize;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9955, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9956, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "PMoveFlags\n");
  p_pm_flags = &ps->pm_flags;
  v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cPRONE\n", v10) + v6;
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 1u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cDUCKED\n", v13) + v11;
  v15 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 2u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cPRONE_FORCED\n", v16) + v14;
  v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 3u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cDUCKED_FORCED\n", v19) + v17;
  v21 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 4u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cSTAND_FORCED\n", v22) + v20;
  v24 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x36u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cDIRECT_STAND_TO_PRONE\n", v25) + v23;
  v27 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 5u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cMANTLE\n", v28) + v26;
  v30 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cLADDER\n", v31) + v29;
  v33 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 7u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cSLOPE\n", v34) + v32;
  v36 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 8u);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cSTAIRS\n", v37) + v35;
  v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cSIGHT_AIMING\n", v40) + v38;
  v42 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xAu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cBACKWARDS_RUN\n", v43) + v41;
  v45 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xBu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cWALKING\n", v46) + v44;
  v48 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xCu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cTIME_HARDLANDING\n", v49) + v47;
  v51 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xDu);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cTIME_KNOCKBACK\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xEu);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cPRONEMOVE_OVERRIDDEN\n", v55) + v53;
  v57 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0xFu);
  v58 = 55i64;
  if ( v57 )
    v58 = 50i64;
  v59 = Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cRESPAWNED\n", v58) + v56;
  v60 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x10u);
  v61 = 55i64;
  if ( v60 )
    v61 = 50i64;
  v62 = Com_sprintf(&outBuffer[v59], (int)v3 - v59, "^%cFROZEN\n", v61) + v59;
  v63 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x11u);
  v64 = 55i64;
  if ( v63 )
    v64 = 50i64;
  v65 = Com_sprintf(&outBuffer[v62], (int)v3 - v62, "^%cLOOK_FROZEN\n", v64) + v62;
  v66 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x12u);
  v67 = 55i64;
  if ( v66 )
    v67 = 50i64;
  v68 = Com_sprintf(&outBuffer[v65], (int)v3 - v65, "^%cLADDER_FALL\n", v67) + v65;
  v69 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x13u);
  v70 = 55i64;
  if ( v69 )
    v70 = 50i64;
  v71 = Com_sprintf(&outBuffer[v68], (int)v3 - v68, "^%cJUMPING\n", v70) + v68;
  v72 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x14u);
  v73 = 55i64;
  if ( v72 )
    v73 = 50i64;
  v74 = Com_sprintf(&outBuffer[v71], (int)v3 - v71, "^%cSPRINTING\n", v73) + v71;
  v75 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x15u);
  v76 = 55i64;
  if ( v75 )
    v76 = 50i64;
  v77 = Com_sprintf(&outBuffer[v74], (int)v3 - v74, "^%cSHELLSHOCKED\n", v76) + v74;
  v78 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x16u);
  v79 = 55i64;
  if ( v78 )
    v79 = 50i64;
  v80 = Com_sprintf(&outBuffer[v77], (int)v3 - v77, "^%cMELEE_CHARGE\n", v79) + v77;
  v81 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x17u);
  v82 = 55i64;
  if ( v81 )
    v82 = 50i64;
  v83 = Com_sprintf(&outBuffer[v80], (int)v3 - v80, "^%cMELEE_FIRE_BLOCKED_EXECUTION\n", v82) + v80;
  v84 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x18u);
  v85 = 55i64;
  if ( v84 )
    v85 = 50i64;
  v86 = Com_sprintf(&outBuffer[v83], (int)v3 - v83, "^%cMELEE_FIRE_PENDING\n", v85) + v83;
  v54 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x19u);
  v87 = 55i64;
  if ( !v54 )
    v87 = 50i64;
  v88 = Com_sprintf(&outBuffer[v86], (int)v3 - v86, "^%cNO_SPRINT\n", v87) + v86;
  v89 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Au);
  v90 = 55i64;
  if ( v89 )
    v90 = 50i64;
  v91 = Com_sprintf(&outBuffer[v88], (int)v3 - v88, "^%cNO_JUMP\n", v90) + v88;
  v92 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Bu);
  v93 = 55i64;
  if ( v92 )
    v93 = 50i64;
  v94 = Com_sprintf(&outBuffer[v91], (int)v3 - v91, "^%cNO_JOG\n", v93) + v91;
  v95 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Cu);
  v96 = 55i64;
  if ( v95 )
    v96 = 50i64;
  v97 = Com_sprintf(&outBuffer[v94], (int)v3 - v94, "^%cREMOTE_CONTROLLING\n", v96) + v94;
  v98 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Du);
  v99 = 55i64;
  if ( v98 )
    v99 = 50i64;
  v100 = Com_sprintf(&outBuffer[v97], (int)v3 - v97, "^%cSLIDE\n", v99) + v97;
  v101 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Eu);
  v102 = 55i64;
  if ( v101 )
    v102 = 50i64;
  v103 = Com_sprintf(&outBuffer[v100], (int)v3 - v100, "^%cWALLRUN\n", v102) + v100;
  v104 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x1Fu);
  v105 = 55i64;
  if ( v104 )
    v105 = 50i64;
  v106 = Com_sprintf(&outBuffer[v103], (int)v3 - v103, "^%cLEAPING\n", v105) + v103;
  v107 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x20u);
  v108 = 55i64;
  if ( v107 )
    v108 = 50i64;
  v109 = Com_sprintf(&outBuffer[v106], (int)v3 - v106, "^%cNO_MOVEMENT\n", v108) + v106;
  v110 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x21u);
  v111 = 55i64;
  if ( v110 )
    v111 = 50i64;
  v112 = Com_sprintf(&outBuffer[v109], (int)v3 - v109, "^%cNO_STAND\n", v111) + v109;
  v113 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x22u);
  v114 = 55i64;
  if ( v113 )
    v114 = 50i64;
  v115 = Com_sprintf(&outBuffer[v112], (int)v3 - v112, "^%cNO_CROUCH\n", v114) + v112;
  v116 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x23u);
  v117 = 55i64;
  if ( v116 )
    v117 = 50i64;
  v118 = Com_sprintf(&outBuffer[v115], (int)v3 - v115, "^%cNO_PRONE\n", v117) + v115;
  v119 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x24u);
  v120 = 55i64;
  if ( v119 )
    v120 = 50i64;
  v121 = Com_sprintf(&outBuffer[v118], (int)v3 - v118, "^%cNO_MANTLE\n", v120) + v118;
  v122 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x25u);
  v123 = 55i64;
  if ( v122 )
    v123 = 50i64;
  v124 = Com_sprintf(&outBuffer[v121], (int)v3 - v121, "^%cNO_FIRE\n", v123) + v121;
  v125 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x26u);
  v126 = 55i64;
  if ( v125 )
    v126 = 50i64;
  v127 = Com_sprintf(&outBuffer[v124], (int)v3 - v124, "^%cNO_MELEE\n", v126) + v124;
  v128 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x27u);
  v129 = 55i64;
  if ( v128 )
    v129 = 50i64;
  v130 = Com_sprintf(&outBuffer[v127], (int)v3 - v127, "^%cNO_MOUNT_TOP\n", v129) + v127;
  v131 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x28u);
  v132 = 55i64;
  if ( v131 )
    v132 = 50i64;
  v133 = Com_sprintf(&outBuffer[v130], (int)v3 - v130, "^%cNO_MOUNT_SIDE\n", v132) + v130;
  v54 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x29u);
  v134 = 55i64;
  if ( !v54 )
    v134 = 50i64;
  v135 = Com_sprintf(&outBuffer[v133], (int)v3 - v133, "^%cKNOCKBACK\n", v134) + v133;
  v136 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Au);
  v137 = 55i64;
  if ( v136 )
    v137 = 50i64;
  v138 = Com_sprintf(&outBuffer[v135], (int)v3 - v135, "^%cZERO_G\n", v137) + v135;
  v139 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Bu);
  v140 = 55i64;
  if ( v139 )
    v140 = 50i64;
  v141 = Com_sprintf(&outBuffer[v138], (int)v3 - v138, "^%cLIMITED_MOVEMENT\n", v140) + v138;
  v142 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Cu);
  v143 = 55i64;
  if ( v142 )
    v143 = 50i64;
  v144 = Com_sprintf(&outBuffer[v141], (int)v3 - v141, "^%cTHIRD_PERSON_VEHICLE_VIEW\n", v143) + v141;
  v145 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Du);
  v146 = 55i64;
  if ( v145 )
    v146 = 50i64;
  v147 = Com_sprintf(&outBuffer[v144], (int)v3 - v144, "^%cSPRINT_ADS\n", v146) + v144;
  v148 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Eu);
  v149 = 55i64;
  if ( v148 )
    v149 = 50i64;
  v150 = Com_sprintf(&outBuffer[v147], (int)v3 - v147, "^%cPARACHUTE\n", v149) + v147;
  v151 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x2Fu);
  v152 = 55i64;
  if ( v151 )
    v152 = 50i64;
  v153 = Com_sprintf(&outBuffer[v150], (int)v3 - v150, "^%cSKYDIVE_BEGIN_FREEFALL\n", v152) + v150;
  v154 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x30u);
  v155 = 55i64;
  if ( v154 )
    v155 = 50i64;
  v156 = Com_sprintf(&outBuffer[v153], (int)v3 - v153, "^%cSKYDIVE_DEPLOY_PARACHUTE\n", v155) + v153;
  v157 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x31u);
  v158 = 55i64;
  if ( v157 )
    v158 = 50i64;
  v159 = Com_sprintf(&outBuffer[v156], (int)v3 - v156, "^%cSKYDIVE_FORCE_3RD_PERSON\n", v158) + v156;
  v160 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x32u);
  v161 = 55i64;
  if ( v160 )
    v161 = 50i64;
  v162 = Com_sprintf(&outBuffer[v159], (int)v3 - v159, "^%cSKYDIVE_ENABLE_FREEFALL_DEPLOY\n", v161) + v159;
  v163 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x33u);
  v164 = 55i64;
  if ( v163 )
    v164 = 50i64;
  v165 = Com_sprintf(&outBuffer[v162], (int)v3 - v162, "^%cSKYDIVE_ENABLE_BASE_JUMP_DEPLOY\n", v164) + v162;
  v54 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x34u);
  v166 = 55i64;
  if ( !v54 )
    v166 = 50i64;
  v167 = Com_sprintf(&outBuffer[v165], (int)v3 - v165, "^%cSKYDIVE_ENABLE_BASE_JUMPING\n", v166) + v165;
  v168 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x35u);
  v169 = 55i64;
  if ( v168 )
    v169 = 50i64;
  v170 = Com_sprintf(&outBuffer[v167], (int)v3 - v167, "^%cNO_SUPERSPRINT\n", v169) + v167;
  v171 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x37u);
  v172 = 55i64;
  if ( v171 )
    v172 = 50i64;
  v173 = Com_sprintf(&outBuffer[v170], (int)v3 - v170, "^%cPRONE_TO_SPRINT\n", v172) + v170;
  v174 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x38u);
  v175 = 55i64;
  if ( v174 )
    v175 = 50i64;
  v176 = Com_sprintf(&outBuffer[v173], (int)v3 - v173, "^%cPENDING_HYBRID_SCOPE_TOGGLE\n", v175) + v173;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x39u) )
    v9 = 50;
  return (unsigned int)(v176 + Com_sprintf(&outBuffer[v176], (int)v3 - v176, "^%cCAN_TOGGLE_NVG\n", v9));
}

/*
==============
CG_DrawDebug_GetSharedPOFlags
==============
*/
__int64 CG_DrawDebug_GetSharedPOFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 
  bool v57; 
  __int64 v58; 
  int v59; 
  bool v60; 
  __int64 v61; 
  int v62; 
  bool v63; 
  __int64 v64; 
  int v65; 
  bool v66; 
  __int64 v67; 
  int v68; 
  bool v69; 
  __int64 v70; 
  int v71; 
  bool v72; 
  __int64 v73; 
  int v74; 
  bool v75; 
  __int64 v76; 
  int v77; 
  bool v78; 
  __int64 v79; 
  int v80; 
  bool v81; 
  __int64 v82; 
  int v83; 
  bool v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  int v88; 
  bool v89; 
  __int64 v90; 
  int v91; 
  bool v92; 
  __int64 v93; 
  int v94; 
  bool v95; 
  __int64 v96; 
  int v97; 
  bool v98; 
  __int64 v99; 
  int v100; 
  bool v101; 
  __int64 v102; 
  int v103; 

  v3 = bufferSize;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10132, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10133, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "POtherFlags\n");
  p_otherFlags = &ps->otherFlags;
  v8 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cINVULNERABLE\n", v10) + v6;
  v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 1u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cREMOTE_EYES\n", v13) + v11;
  v15 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 2u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cLASER_ALTVIEW\n", v16) + v14;
  v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 3u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cTHERMAL_VISION\n", v19) + v17;
  v21 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 4u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cTHERMAL_VISION_OVERLAY_FOF\n", v22) + v20;
  v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 5u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cREMOTE_CAMERA_SOUNDS\n", v25) + v23;
  v27 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 6u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cALT_SCENE_REAR_VIEW\n", v28) + v26;
  v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 7u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cALT_SCENE_TAG_VIEW\n", v31) + v29;
  v33 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 8u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cSHIELD_ATTACHED_TO_WORLD_MODEL\n", v34) + v32;
  v36 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 9u);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cDONT_LERP_VIEWANGLES\n", v37) + v35;
  v39 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 9u);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cDONT_LERP_VIEWANGLES\n", v40) + v38;
  v42 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xBu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cLASTSTAND\n", v43) + v41;
  v45 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xCu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cTHERMAL_VISION_SHADOW_OFF\n", v46) + v44;
  v48 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xDu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cPLATFORM_PUSH\n", v49) + v47;
  v51 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xEu);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cPLATFORM_ALTERNATE_COLLISION\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xFu);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cPLATFORM_TRACK_TILT\n", v55) + v53;
  v57 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x10u);
  v58 = 55i64;
  if ( v57 )
    v58 = 50i64;
  v59 = Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cVIEW_ANGLES_MOVE\n", v58) + v56;
  v60 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x11u);
  v61 = 55i64;
  if ( v60 )
    v61 = 50i64;
  v62 = Com_sprintf(&outBuffer[v59], (int)v3 - v59, "^%cWAS_ON_GROUND\n", v61) + v59;
  v63 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x12u);
  v64 = 55i64;
  if ( v63 )
    v64 = 50i64;
  v65 = Com_sprintf(&outBuffer[v62], (int)v3 - v62, "^%cCONTEXT_LEAN_MOVE_COMPLETE\n", v64) + v62;
  v66 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x13u);
  v67 = 55i64;
  if ( v66 )
    v67 = 50i64;
  v68 = Com_sprintf(&outBuffer[v65], (int)v3 - v65, "^%cENABLE_CHARGE_MELEE_HUD\n", v67) + v65;
  v69 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x14u);
  v70 = 55i64;
  if ( v69 )
    v70 = 50i64;
  v71 = Com_sprintf(&outBuffer[v68], (int)v3 - v68, "^%cDEPLOY_EQUIP_VALID\n", v70) + v68;
  v72 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x15u);
  v73 = 55i64;
  if ( v72 )
    v73 = 50i64;
  v74 = Com_sprintf(&outBuffer[v71], (int)v3 - v71, "^%cDEPLOY_EQUIP_OVERHEAD_OBSTRUCTION\n", v73) + v71;
  v75 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x16u);
  v76 = 55i64;
  if ( v75 )
    v76 = 50i64;
  v77 = Com_sprintf(&outBuffer[v74], (int)v3 - v74, "^%cDEPLOY_EQUIP_HIDE_FX\n", v76) + v74;
  v78 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x17u);
  v79 = 55i64;
  if ( v78 )
    v79 = 50i64;
  v80 = Com_sprintf(&outBuffer[v77], (int)v3 - v77, "^%cTURRET_FIRING\n", v79) + v77;
  v81 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x18u);
  v82 = 55i64;
  if ( v81 )
    v82 = 50i64;
  v83 = Com_sprintf(&outBuffer[v80], (int)v3 - v80, "^%cTURRET_REMOTE\n", v82) + v80;
  v84 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x19u);
  v85 = 55i64;
  if ( v84 )
    v85 = 50i64;
  v86 = Com_sprintf(&outBuffer[v83], (int)v3 - v83, "^%cPAIN_VISION\n", v85) + v83;
  v54 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
  v87 = 55i64;
  if ( !v54 )
    v87 = 50i64;
  v88 = Com_sprintf(&outBuffer[v86], (int)v3 - v86, "^%cSIMPLE_HEIGHT_LERP\n", v87) + v86;
  v89 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Bu);
  v90 = 55i64;
  if ( v89 )
    v90 = 50i64;
  v91 = Com_sprintf(&outBuffer[v88], (int)v3 - v88, "^%cVEHICLE_ANIMS_ENABLED\n", v90) + v88;
  v92 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Cu);
  v93 = 55i64;
  if ( v92 )
    v93 = 50i64;
  v94 = Com_sprintf(&outBuffer[v91], (int)v3 - v91, "^%cVEHICLE_ANIMS_HIDE_HELD_WEAPON\n", v93) + v91;
  v95 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Du);
  v96 = 55i64;
  if ( v95 )
    v96 = 50i64;
  v97 = Com_sprintf(&outBuffer[v94], (int)v3 - v94, "^%cVEHICLE_ANIMS_HIDE_STOWED_WEAPON\n", v96) + v94;
  v98 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Eu);
  v99 = 55i64;
  if ( v98 )
    v99 = 50i64;
  v100 = Com_sprintf(&outBuffer[v97], (int)v3 - v97, "^%cUSING_DETONATOR\n", v99) + v97;
  v101 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Fu);
  v102 = 55i64;
  if ( v101 )
    v102 = 50i64;
  v103 = Com_sprintf(&outBuffer[v100], (int)v3 - v100, "^%cDEV_UFO\n", v102) + v100;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x20u) )
    v9 = 50;
  return (unsigned int)(v103 + Com_sprintf(&outBuffer[v103], (int)v3 - v103, "^%cVIEWMODEL_DEV_UFO\n", v9));
}

/*
==============
CG_DrawDebug_GetSharedPWFlags
==============
*/
__int64 CG_DrawDebug_GetSharedPWFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 
  bool v57; 
  __int64 v58; 
  int v59; 
  bool v60; 
  __int64 v61; 
  int v62; 
  bool v63; 
  __int64 v64; 
  int v65; 
  bool v66; 
  __int64 v67; 
  int v68; 
  bool v69; 
  __int64 v70; 
  int v71; 
  bool v72; 
  __int64 v73; 
  int v74; 
  bool v75; 
  __int64 v76; 
  int v77; 
  bool v78; 
  __int64 v79; 
  int v80; 
  bool v81; 
  __int64 v82; 
  int v83; 
  bool v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  int v88; 
  bool v89; 
  __int64 v90; 
  int v91; 
  bool v92; 
  __int64 v93; 
  int v94; 
  bool v95; 
  __int64 v96; 
  int v97; 
  bool v98; 
  __int64 v99; 
  int v100; 
  bool v101; 
  __int64 v102; 
  int v103; 
  bool v104; 
  __int64 v105; 
  int v106; 
  bool v107; 
  __int64 v108; 
  int v109; 
  bool v110; 
  __int64 v111; 
  int v112; 
  bool v113; 
  __int64 v114; 
  int v115; 
  bool v116; 
  __int64 v117; 
  int v118; 
  bool v119; 
  __int64 v120; 
  int v121; 
  bool v122; 
  __int64 v123; 
  int v124; 
  bool v125; 
  __int64 v126; 
  int v127; 
  bool v128; 
  __int64 v129; 
  int v130; 
  bool v131; 
  __int64 v132; 
  int v133; 
  __int64 v134; 
  int v135; 
  bool v136; 
  __int64 v137; 
  int v138; 
  bool v139; 
  __int64 v140; 
  int v141; 
  bool v142; 
  __int64 v143; 
  int v144; 
  bool v145; 
  __int64 v146; 
  int v147; 
  bool v148; 
  __int64 v149; 
  int v150; 
  bool v151; 
  __int64 v152; 
  int v153; 
  bool v154; 
  __int64 v155; 
  int v156; 
  bool v157; 
  __int64 v158; 
  int v159; 
  bool v160; 
  __int64 v161; 
  int v162; 

  v3 = bufferSize;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10054, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10055, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "PWeaponFlags\n");
  p_weapFlags = &ps->weapCommon.weapFlags;
  v8 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cRELOAD\n", v10) + v6;
  v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 1u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cUSING_OFFHAND\n", v13) + v11;
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 2u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cHOLDING_BREATH\n", v16) + v14;
  v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 3u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cFRIENDLY_FIRE\n", v19) + v17;
  v21 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 4u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cENEMY_FIRE\n", v22) + v20;
  v24 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 5u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cNO_ADS\n", v25) + v23;
  v27 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 7u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cUSING_NIGHTVISION\n", v28) + v26;
  v30 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 9u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cBLOCK_NIGHTVISION\n", v31) + v29;
  v33 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 8u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cUSING_ALT_NVG_LIGHT\n", v34) + v32;
  v36 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xAu);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cDISABLE_WEAPONS\n", v37) + v35;
  v39 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xBu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cTRIGGER_LEFT_FIRE\n", v40) + v38;
  v42 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xCu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cTRIGGER_DOUBLE_FIRE\n", v43) + v41;
  v45 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xDu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cUSING_RECOILSCALE\n", v46) + v44;
  v48 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xEu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cDISABLE_WEAPON_SWAPPING\n", v49) + v47;
  v51 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0xFu);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cDISABLE_OFFHAND_WEAPONS\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x10u);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cBLAST_IMPACT\n", v55) + v53;
  v57 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u);
  v58 = 55i64;
  if ( v57 )
    v58 = 50i64;
  v59 = Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cUSE_ALTERNATE\n", v58) + v56;
  v60 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x12u);
  v61 = 55i64;
  if ( v60 )
    v61 = 50i64;
  v62 = Com_sprintf(&outBuffer[v59], (int)v3 - v59, "^%cDISABLE_WEAPON_PICKUP\n", v61) + v59;
  v63 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x13u);
  v64 = 55i64;
  if ( v63 )
    v64 = 50i64;
  v65 = Com_sprintf(&outBuffer[v62], (int)v3 - v62, "^%cDISABLE_AUTO_RELOAD\n", v64) + v62;
  v66 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x14u);
  v67 = 55i64;
  if ( v66 )
    v67 = 50i64;
  v68 = Com_sprintf(&outBuffer[v65], (int)v3 - v65, "^%cINSTANT_SWITCH_CAMO\n", v67) + v65;
  v69 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x15u);
  v70 = 55i64;
  if ( v69 )
    v70 = 50i64;
  v71 = Com_sprintf(&outBuffer[v68], (int)v3 - v68, "^%cSWITCHING_PRIMARIES\n", v70) + v68;
  v72 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x16u);
  v73 = 55i64;
  if ( v72 )
    v73 = 50i64;
  v74 = Com_sprintf(&outBuffer[v71], (int)v3 - v71, "^%cSWITCHING_TO_MELEE_OVERRIDE\n", v73) + v71;
  v75 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x17u);
  v76 = 55i64;
  if ( v75 )
    v76 = 50i64;
  v77 = Com_sprintf(&outBuffer[v74], (int)v3 - v74, "^%cPAUSE_WEAPON_STATE\n", v76) + v74;
  v78 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x18u);
  v79 = 55i64;
  if ( v78 )
    v79 = 50i64;
  v80 = Com_sprintf(&outBuffer[v77], (int)v3 - v77, "^%cSWITCH_IMMEDIATE\n", v79) + v77;
  v81 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x19u);
  v82 = 55i64;
  if ( v81 )
    v82 = 50i64;
  v83 = Com_sprintf(&outBuffer[v80], (int)v3 - v80, "^%cDISABLE_OFFHAND_SECONDARY\n", v82) + v80;
  v84 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x29u);
  v85 = 55i64;
  if ( v84 )
    v85 = 50i64;
  v86 = Com_sprintf(&outBuffer[v83], (int)v3 - v83, "^%cDISABLE_OFFHAND_PRIMARY\n", v85) + v83;
  v54 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x33u);
  v87 = 55i64;
  if ( !v54 )
    v87 = 50i64;
  v88 = Com_sprintf(&outBuffer[v86], (int)v3 - v86, "^%cDISABLE_OFFHAND_THROWBACK\n", v87) + v86;
  v89 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Au);
  v90 = 55i64;
  if ( v89 )
    v90 = 50i64;
  v91 = Com_sprintf(&outBuffer[v88], (int)v3 - v88, "^%cNO_RELOAD\n", v90) + v88;
  v92 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
  v93 = 55i64;
  if ( v92 )
    v93 = 50i64;
  v94 = Com_sprintf(&outBuffer[v91], (int)v3 - v91, "^%cTRIGGER_LEFT_ALT_FIRE\n", v93) + v91;
  v95 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Cu);
  v96 = 55i64;
  if ( v95 )
    v96 = 50i64;
  v97 = Com_sprintf(&outBuffer[v94], (int)v3 - v94, "^%cTRIGGER_LEFT_ALT_FIRE_SWITCH\n", v96) + v94;
  v98 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Du);
  v99 = 55i64;
  if ( v98 )
    v99 = 50i64;
  v100 = Com_sprintf(&outBuffer[v97], (int)v3 - v97, "^%cLAST_SHOT_WAS_ALT_FIRE\n", v99) + v97;
  v101 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Eu);
  v102 = 55i64;
  if ( v101 )
    v102 = 50i64;
  v103 = Com_sprintf(&outBuffer[v100], (int)v3 - v100, "^%cOFFHAND_IS_PRIMARY\n", v102) + v100;
  v104 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Fu);
  v105 = 55i64;
  if ( v104 )
    v105 = 50i64;
  v106 = Com_sprintf(&outBuffer[v103], (int)v3 - v103, "^%cDISABLE_OFFHANDSHIELD\n", v105) + v103;
  v107 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x20u);
  v108 = 55i64;
  if ( v107 )
    v108 = 50i64;
  v109 = Com_sprintf(&outBuffer[v106], (int)v3 - v106, "^%cADS_IDLE_YAW_NEGATIVE\n", v108) + v106;
  v110 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x21u);
  v111 = 55i64;
  if ( v110 )
    v111 = 50i64;
  v112 = Com_sprintf(&outBuffer[v109], (int)v3 - v109, "^%cADS_IDLE_PITCH_NEGATIVE\n", v111) + v109;
  v113 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x22u);
  v114 = 55i64;
  if ( v113 )
    v114 = 50i64;
  v115 = Com_sprintf(&outBuffer[v112], (int)v3 - v112, "^%cMELEE_OVERRIDE_ACTIVE\n", v114) + v112;
  v116 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x23u);
  v117 = 55i64;
  if ( v116 )
    v117 = 50i64;
  v118 = Com_sprintf(&outBuffer[v115], (int)v3 - v115, "^%cEXECUTION_STATE_ACTIVE\n", v117) + v115;
  v119 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x24u);
  v120 = 55i64;
  if ( v119 )
    v120 = 50i64;
  v121 = Com_sprintf(&outBuffer[v118], (int)v3 - v118, "^%cTRIGGER_SCRIPT_OFFHAND\n", v120) + v118;
  v122 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x25u);
  v123 = 55i64;
  if ( v122 )
    v123 = 50i64;
  v124 = Com_sprintf(&outBuffer[v121], (int)v3 - v121, "^%cCANCEL_RELOAD\n", v123) + v121;
  v125 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x26u);
  v126 = 55i64;
  if ( v125 )
    v126 = 50i64;
  v127 = Com_sprintf(&outBuffer[v124], (int)v3 - v124, "^%cALTERNATE_MELEE\n", v126) + v124;
  v128 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x27u);
  v129 = 55i64;
  if ( v128 )
    v129 = 50i64;
  v130 = Com_sprintf(&outBuffer[v127], (int)v3 - v127, "^%cPENDING_ALT_MODE_CHANGE\n", v129) + v127;
  v131 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x28u);
  v132 = 55i64;
  if ( v131 )
    v132 = 50i64;
  v133 = Com_sprintf(&outBuffer[v130], (int)v3 - v130, "^%cSTARTED_WEAPON_CHANGE\n", v132) + v130;
  v54 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Au);
  v134 = 55i64;
  if ( !v54 )
    v134 = 50i64;
  v135 = Com_sprintf(&outBuffer[v133], (int)v3 - v133, "^%cVIEWMODEL_SCRIPTED\n", v134) + v133;
  v136 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Bu);
  v137 = 55i64;
  if ( v136 )
    v137 = 50i64;
  v138 = Com_sprintf(&outBuffer[v135], (int)v3 - v135, "^%cDISABLE_TURRET_DISMOUNT\n", v137) + v135;
  v139 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Cu);
  v140 = 55i64;
  if ( v139 )
    v140 = 50i64;
  v141 = Com_sprintf(&outBuffer[v138], (int)v3 - v138, "^%cNEEDS_ADS_RECOIL_RESET\n", v140) + v138;
  v142 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Du);
  v143 = 55i64;
  if ( v142 )
    v143 = 50i64;
  v144 = Com_sprintf(&outBuffer[v141], (int)v3 - v141, "^%cWEAPON_OFFSET_HOLD_FIRE_SLOW_BLEND_ACTIVE\n", v143) + v141;
  v145 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Eu);
  v146 = 55i64;
  if ( v145 )
    v146 = 50i64;
  v147 = Com_sprintf(&outBuffer[v144], (int)v3 - v144, "^%cWEAPON_OFFSET_HOLD_FIRE_FAST_BLEND_ACTIVE\n", v146) + v144;
  v148 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x2Fu);
  v149 = 55i64;
  if ( v148 )
    v149 = 50i64;
  v150 = Com_sprintf(&outBuffer[v147], (int)v3 - v147, "^%cWEAPON_OFFSET_ADS_BLEND_ACTIVE\n", v149) + v147;
  v151 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x30u);
  v152 = 55i64;
  if ( v151 )
    v152 = 50i64;
  v153 = Com_sprintf(&outBuffer[v150], (int)v3 - v150, "^%cWEAPON_OFFSET_ADS_BLEND_DISABLED\n", v152) + v150;
  v154 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x31u);
  v155 = 55i64;
  if ( v154 )
    v155 = 50i64;
  v156 = Com_sprintf(&outBuffer[v153], (int)v3 - v153, "^%cWEAPON_OFFSET_SUSTAINED_FIRE_ACTIVE\n", v155) + v153;
  v157 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x32u);
  v158 = 55i64;
  if ( v157 )
    v158 = 50i64;
  v159 = Com_sprintf(&outBuffer[v156], (int)v3 - v156, "^%cUSING_LADDER\n", v158) + v156;
  v160 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 6u);
  v161 = 55i64;
  if ( v160 )
    v161 = 50i64;
  v162 = Com_sprintf(&outBuffer[v159], (int)v3 - v159, "^%cNO_LADDER_ADS\n", v161) + v159;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x34u) )
    v9 = 50;
  return (unsigned int)(v162 + Com_sprintf(&outBuffer[v162], (int)v3 - v162, "^%cRELOAD_DISABLED\n", v9));
}

/*
==============
CG_DrawDebug_GetXAnimLodColor
==============
*/
void CG_DrawDebug_GetXAnimLodColor(int lod, vec4_t *outColor)
{
  int v2; 

  if ( lod )
  {
    v2 = lod - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow
          vmovups xmmword ptr [rdx], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
          vmovups xmmword ptr [rdx], xmm0
        }
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
        vmovups xmmword ptr [rdx], xmm0
      }
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmovups xmmword ptr [rdx], xmm0
    }
  }
}

/*
==============
CG_DrawDebug_Infils
==============
*/
void CG_DrawDebug_Infils(LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  int v8; 
  const dvar_t *v13; 
  int integer; 
  CgStatic *LocalClientStatics; 
  const cg_t *v16; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v19; 
  const char *v24; 
  __int64 v28; 
  int linkEnt; 
  centity_t *v30; 
  const centity_t *v31; 
  int v32; 
  int *v33; 
  __int64 v35; 
  const char *v36; 
  int numParents; 
  vec3_t point; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  int parentIds[100]; 

  v5 = DCONST_DVARBOOL_cg_debugInfil;
  if ( !DCONST_DVARBOOL_cg_debugInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals )
    {
      v8 = 0;
      __asm
      {
        vmovaps [rsp+290h+var_30], xmm6
        vmovss  xmm6, cs:__real@41200000
        vmovaps [rsp+290h+var_40], xmm7
        vmovss  xmm7, cs:__real@3f000000
        vmovaps [rsp+290h+var_50], xmm8
        vmovss  xmm8, cs:__real@3e4ccccd
        vmovaps [rsp+290h+var_60], xmm9
        vmovss  xmm9, cs:__real@428c0000
      }
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v8 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
          __asm
          {
            vmovaps xmm8, [rsp+290h+var_50]
            vmovaps xmm7, [rsp+290h+var_40]
            vmovaps xmm6, [rsp+290h+var_30]
            vmovaps xmm9, [rsp+290h+var_60]
          }
          return;
        }
        v13 = DCONST_DVARINT_cg_debugInfil_Character;
        if ( !DCONST_DVARINT_cg_debugInfil_Character && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfil_Character") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        integer = v13->current.integer;
        if ( integer < 0 || integer == v8 )
        {
          LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
          v16 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          CharacterInfo = CG_GetCharacterInfo(v16, v8);
          if ( CharacterInfo )
          {
            if ( CharacterInfo->infoValid )
            {
              Entity = CG_GetEntity(localClientNum, v8);
              v19 = Entity;
              if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) && !CG_Entity_IsNoDraw(localClientNum, &v19->nextState, NULL) )
                break;
            }
          }
        }
LABEL_35:
        ++v8;
      }
      AnglesToAxis(&v19->pose.angles, &axis);
      CG_GetPoseOrigin(&v19->pose, &outOrigin);
      __asm { vmovss  xmm2, cs:INFIL_DEBUG_AXIS_LENGTH; length }
      CG_DebugAxis(&axis, &outOrigin, *(float *)&_XMM2, 0, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+290h+outOrigin]
        vmovss  xmm1, dword ptr [rsp+290h+outOrigin+4]
        vaddss  xmm2, xmm9, dword ptr [rsp+290h+outOrigin+8]
        vmovss  dword ptr [rsp+290h+point], xmm0
        vmovss  dword ptr [rsp+290h+point+4], xmm1
        vmovss  dword ptr [rsp+290h+point+8], xmm2
      }
      v24 = j_va("%d", (unsigned int)v19->nextState.number);
      __asm { vmovaps xmm2, xmm7; scale }
      CG_DebugString(&point, &colorWhite, *(float *)&_XMM2, v24, 0, 0);
      numParents = 0;
      if ( LocalClientGlobals->clientNum == v8 )
      {
        AnglesToAxis(&LocalClientGlobals->predictedPlayerState.linkAngles, &axis);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_thirdPerson, "bg_thirdPerson") )
        {
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [rsp+290h+point+8]
            vmovaps xmm2, xmm8; scale
            vmovss  dword ptr [rsp+290h+point+8], xmm1
          }
          CG_DebugString(&point, &colorRed, *(float *)&_XMM2, "Debug 3P client will be incorrect in infil.", 0, 0);
        }
        v28 = numParents;
        linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
        ++numParents;
        parentIds[v28] = linkEnt;
        if ( (__int16)linkEnt <= 0 )
          goto LABEL_32;
        v30 = CG_GetEntity(localClientNum, linkEnt);
        if ( (v30->flags & 1) == 0 )
          goto LABEL_32;
        v31 = v30;
      }
      else
      {
        v31 = v19;
      }
      CG_DebugInfils_DrawParent(localClientNum, v31, parentIds, &numParents);
LABEL_32:
      v32 = 0;
      if ( numParents > 0 )
      {
        v33 = parentIds;
        do
        {
          __asm { vaddss  xmm1, xmm6, dword ptr [rsp+290h+point+8] }
          v35 = (unsigned int)*v33;
          __asm { vmovss  dword ptr [rsp+290h+point+8], xmm1 }
          v36 = j_va("%d", v35);
          __asm { vmovaps xmm2, xmm7; scale }
          CG_DebugString(&point, &colorWhite, *(float *)&_XMM2, v36, 0, 0);
          ++v32;
          ++v33;
        }
        while ( v32 < numParents );
      }
      goto LABEL_35;
    }
  }
}

/*
==============
CG_DrawDebug_MyChangesActionBeginCallback
==============
*/
void CG_DrawDebug_MyChangesActionBeginCallback()
{
  s_debugZoneStarted = 1;
}

/*
==============
CG_DrawDebug_MyChangesActionEndCallback
==============
*/
void CG_DrawDebug_MyChangesActionEndCallback()
{
  s_debugZoneStarted = 0;
}

/*
==============
CG_DrawDebug_MyChangesActionReloadCallback
==============
*/
void CG_DrawDebug_MyChangesActionReloadCallback()
{
  MyChangesAction v0; 

  v0 = s_debugZoneLoadAction;
  if ( s_debugZoneLoadAction == ASSET_MYCHANGES_RELOAD )
    v0 = ASSET_MYCHANGES_HOTLOAD;
  s_debugZoneLoadAction = v0;
}

/*
==============
CG_DrawDebug_MyChangesActionReportCallback
==============
*/
void CG_DrawDebug_MyChangesActionReportCallback(const XAssetType type, const char *name, const MyChangesAction action)
{
  MyChangesAction v4; 
  const char *MyChanges_ActionMessage; 
  __time64_t Time; 

  v4 = s_debugZoneLoadAction;
  if ( (unsigned __int8)action > (unsigned __int8)s_debugZoneLoadAction )
    v4 = action;
  s_debugZoneLoadAction = v4;
  MyChanges_ActionMessage = DB_GetMyChanges_ActionMessage(action);
  Com_PrintWarning(13, "[mychanges] Asset (%s) Action : %s\n", name, MyChanges_ActionMessage);
  Time = _time64(NULL);
  _RAX = _localtime64(&Time);
  __asm { vmovups ymm0, ymmword ptr [rax] }
  LODWORD(_RAX) = _RAX->tm_isdst;
  __asm { vmovups ymmword ptr cs:s_debugZoneAssetLoadTime.tm_sec, ymm0 }
  s_debugZoneAssetLoadTime.tm_isdst = (int)_RAX;
}

/*
==============
CG_DrawDebug_OverlayTitle
==============
*/

void __fastcall CG_DrawDebug_OverlayTitle(double _XMM0_8)
{
  const dvar_t *v4; 
  const char *string; 
  __int64 v6; 
  const dvar_t *v13; 
  GfxFont *FontHandle; 
  float fmt; 
  float y; 
  float v25; 
  vec4_t expandedColor; 

  v4 = DVARSTR_cg_drawTitleString;
  if ( !DVARSTR_cg_drawTitleString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleString") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  string = v4->current.string;
  v6 = -1i64;
  do
    ++v6;
  while ( string[v6] );
  if ( v6 )
  {
    _RBX = DVARFLT_cg_drawTitleX;
    __asm
    {
      vmovaps [rsp+0B8h+var_18], xmm6
      vmovaps [rsp+0B8h+var_28], xmm7
      vmovaps [rsp+0B8h+var_38], xmm8
    }
    if ( !DVARFLT_cg_drawTitleX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DVARFLT_cg_drawTitleY;
    if ( !DVARFLT_cg_drawTitleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_cg_drawTitleSize;
    if ( !DVARFLT_cg_drawTitleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v13 = DVARCLR_cg_drawTitleColor;
    if ( !DVARCLR_cg_drawTitleColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 763, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    Dvar_GetUnpackedColor(v13, &expandedColor);
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8507, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, cs:__real@3f155555; scale
      vmovaps xmm1, xmm6; scale
    }
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 0, *(float *)&_XMM2);
    UI_TextHeight(FontHandle, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  [rsp+0B8h+var_78], xmm6
      vaddss  xmm1, xmm0, xmm7
      vmovss  [rsp+0B8h+y], xmm1
      vmovss  dword ptr [rsp+0B8h+fmt], xmm8
    }
    UI_DrawText(&scrPlaceFullUnsafe, string, 0x7FFFFFFF, FontHandle, fmt, y, 4, 4, v25, &expandedColor, 3);
    __asm
    {
      vmovaps xmm8, [rsp+0B8h+var_38]
      vmovaps xmm7, [rsp+0B8h+var_28]
      vmovaps xmm6, [rsp+0B8h+var_18]
    }
  }
}

/*
==============
CG_DrawDebug_Player
==============
*/
void CG_DrawDebug_Player(LocalClientNum_t localClientNum)
{
  CG_DrawDebug_PlayerVignettePrint(localClientNum, "update link", 1u);
}

/*
==============
CG_DrawDebug_PlayerASM_ExecutionOverlay
==============
*/
void CG_DrawDebug_PlayerASM_ExecutionOverlay(LocalClientNum_t localClientNum)
{
  const dvar_t *v14; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const dvar_t *v19; 
  int v20; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v36; 
  __int64 v37; 
  __int64 v39; 
  float fmt; 
  float y; 
  float v60; 
  void *retaddr; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 

  _R11 = &retaddr;
  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && localClientNum == LOCAL_CLIENT_0 )
  {
    _RBX = DCONST_DVARFLT_playerasm_debugExecutionTextScale;
    __asm { vmovaps xmmword ptr [r11-0A8h], xmm12 }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugExecutionTextScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm12, dword ptr [rbx+28h] }
    v14 = DCONST_DVARINT_playerasm_debugExecutionTextFont;
    if ( !DCONST_DVARINT_playerasm_debugExecutionTextFont && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugExecutionTextFont") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    integer = v14->current.integer;
    __asm { vmovss  xmm2, cs:__real@3f800000; scale }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, integer, *(float *)&_XMM2);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      v19 = DVARINT_playerasm_debugMode;
      if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = v19->current.integer;
      if ( v20 )
      {
        __asm
        {
          vmovaps [rsp+138h+var_48], xmm6
          vmovaps [rsp+138h+var_58], xmm7
          vmovaps [rsp+138h+var_68], xmm8
          vmovaps [rsp+138h+var_78], xmm9
          vmovaps [rsp+138h+var_88], xmm10
          vmovaps [rsp+138h+var_98], xmm11
          vmovaps [rsp+138h+var_B8], xmm13
          vmovaps [rsp+138h+var_C8], xmm14
          vmovaps [rsp+138h+var_D8], xmm15
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm9, xmm9, xmm9
        }
        Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_debugExecutionOffsetY, "playerasm_debugExecutionOffsetY");
        __asm
        {
          vxorps  xmm11, xmm11, xmm11
          vcvtsi2ss xmm11, xmm11, eax
        }
        Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_debugExecutionOffsetX, "playerasm_debugExecutionOffsetX");
        __asm
        {
          vxorps  xmm14, xmm14, xmm14
          vcvtsi2ss xmm14, xmm14, eax
        }
        if ( v20 == 2 )
        {
          v27 = 1;
          v28 = 1;
        }
        else
        {
          v27 = 0;
          v28 = v20 != 1;
        }
        v72 = v27;
        v73 = v28;
        Sys_EnterCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
        __asm
        {
          vmovss  xmm10, cs:__real@430c0000
          vmovss  xmm13, cs:__real@432f0000
          vmovss  xmm15, cs:__real@43660000
        }
        do
        {
          v32 = 0;
          v33 = v27;
          v74 = 0;
          if ( BgPlayer_Asm::ms_debugExecutionBuffer[v33].count )
          {
            __asm { vmovaps xmm7, xmm8 }
            _ER12 = 0;
            do
            {
              if ( !v32 || (v36 = v33 * 10324 + 1032i64 * v32, v37 = v33 * 10324 + 1032i64 * (v32 - 1), *(int *)((char *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].time + v37) != *(int *)((char *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].time + v36)) || *(_DWORD *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v37 + 1024] != *(_DWORD *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v36 + 1024] )
              {
                _EDI = 0;
                v39 = 1032i64 * v32;
                __asm { vaddss  xmm6, xmm14, xmm7 }
                do
                {
                  __asm
                  {
                    vmovss  [rsp+138h+var_F8], xmm12
                    vmovd   xmm1, r12d
                    vmovd   xmm0, edi
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm10, xmm8, xmm2
                    vaddss  xmm1, xmm0, xmm9
                    vaddss  xmm3, xmm1, xmm11
                    vmovss  [rsp+138h+y], xmm3
                    vmovss  dword ptr [rsp+138h+fmt], xmm6
                  }
                  UI_DrawText(ActivePlacement, (const char *)BgPlayer_Asm::ms_debugExecutionBuffer + v39 + v33 * 10324, 1024, FontHandle, fmt, y, 1, 1, v60, &colorWhite, 3);
                  ++_EDI;
                  v39 += 5160i64;
                }
                while ( _EDI < 2 );
                v32 = v74;
                __asm { vaddss  xmm7, xmm7, xmm13 }
              }
              v74 = ++v32;
            }
            while ( v32 < BgPlayer_Asm::ms_debugExecutionBuffer[v33].count );
            v27 = v72;
            v28 = v73;
          }
          ++v27;
          BgPlayer_Asm::ms_debugExecutionBuffer[v33].count = 0;
          v72 = v27;
          __asm { vmovaps xmm9, xmm15 }
        }
        while ( v27 <= v28 );
        Sys_LeaveCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
        __asm
        {
          vmovaps xmm15, [rsp+138h+var_D8]
          vmovaps xmm14, [rsp+138h+var_C8]
          vmovaps xmm13, [rsp+138h+var_B8]
          vmovaps xmm11, [rsp+138h+var_98]
          vmovaps xmm10, [rsp+138h+var_88]
          vmovaps xmm9, [rsp+138h+var_78]
          vmovaps xmm8, [rsp+138h+var_68]
          vmovaps xmm7, [rsp+138h+var_58]
          vmovaps xmm6, [rsp+138h+var_48]
        }
      }
    }
    __asm { vmovaps xmm12, [rsp+138h+var_A8] }
  }
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo(LocalClientNum_t localClientNum, double requestedYPos, const characterInfo_t *ci, const playerState_s *ps, int handle, AnimScriptDebugMode mode, AnimScriptDebugMode eventsMode)
{
  signed __int64 v7; 
  void *v14; 
  int v15; 
  LocalClientNum_t v16; 
  const playerState_s *v17; 
  const dvar_t *v20; 
  ScreenPlacement *v25; 
  AnimScriptDebugMode v27; 
  const char *v29; 
  const char *v36; 
  ScreenPlacement *v40; 
  GfxFont *v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v45; 
  unsigned int v46; 
  bool IsEnabled; 
  cg_t *LocalClientGlobals; 
  int v53; 
  AnimScriptDebugMode v54; 
  const PlayerASM_DebugAnimEventInfoEntry *Entry; 
  const PlayerASM_DebugAnimEventInfoEntry *v56; 
  unsigned int v57; 
  events_t *p_events; 
  unsigned int v59; 
  PlayerAnimStringItem *v60; 
  char v61; 
  bool v62; 
  const char *v63; 
  const char *v64; 
  const char *v65; 
  BgStatic *ActiveStatics; 
  __int64 v67; 
  __int64 suitAnimIndex; 
  __int64 v69; 
  __int64 Int_Internal_DebugName; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  bool v74; 
  const PlayerAnimScriptItem *v75; 
  const PlayerAnimEntry *AnimationForIndex; 
  const char *v77; 
  __int64 v78; 
  const PlayerAnimScriptItem *v79; 
  const PlayerAnimEntry *v80; 
  const char *v81; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float ya; 
  float yb; 
  __int64 y; 
  float yc; 
  __int64 horzAlign; 
  float v95; 
  float v96; 
  float v97; 
  int bufferPos; 
  int destPos; 
  LocalClientNum_t NumEntries; 
  int v101; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  const playerState_s *v105; 
  char buffer[6144]; 
  char dest[6144]; 

  v14 = alloca(v7);
  __asm { vmovaps [rsp+3130h+var_50], xmm6 }
  v15 = handle;
  v16 = localClientNum;
  NumEntries = localClientNum;
  v17 = ps;
  v105 = ps;
  v101 = handle;
  __asm { vmovaps xmm6, xmm1 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && handle >= 0 )
  {
    v20 = DCONST_DVARINT_animscript_debug_yoffset;
    __asm { vmovaps [rsp+3130h+var_80], xmm9 }
    if ( !DCONST_DVARINT_animscript_debug_yoffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_yoffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vaddss  xmm9, xmm0, xmm6
    }
    if ( !Com_GetClientDObj(handle, v16) || !ci || ci->usingAnimState )
      goto LABEL_75;
    __asm
    {
      vmovaps [rsp+3130h+var_70], xmm8
      vmovaps [rsp+3130h+var_90], xmm10
      vmovss  xmm2, cs:__real@3e800000; scale
    }
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(v16);
    v25 = scrPlace;
    font = UI_GetFontHandle(scrPlace, 6, *(float *)&_XMM2);
    __asm { vmovss  xmm2, cs:__real@41700000 }
    v27 = mode;
    _EBX = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_animscript_debug_show_conditions, "animscript_debug_show_conditions");
    v29 = "SERVER";
    _EAX = 0;
    __asm { vmovd   xmm1, eax }
    dest[0] = 0;
    destPos = 0;
    __asm
    {
      vmovd   xmm0, ebx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@42c80000
      vblendvps xmm0, xmm1, xmm2, xmm3
    }
    if ( mode == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
      v29 = "CLIENT";
    v36 = "^5";
    if ( mode == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
      v36 = "^1";
    __asm { vmovss  [rsp+3130h+var_30C0], xmm0 }
    Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "%s%s CONDITIONALS%s %d: \n", v36, v29, "^7", handle);
    __asm
    {
      vmovss  xmm8, cs:__real@3e0f5c29
      vmovss  [rsp+3130h+var_30F0], xmm8
      vxorps  xmm10, xmm10, xmm10
      vmovss  [rsp+3130h+y], xmm9
      vmovss  dword ptr [rsp+3130h+fmt], xmm10
    }
    UI_DrawText(v25, dest, 6144, font, fmt, ya, 1, 1, v95, &colorWhite, 3);
    if ( _EBX )
    {
      __asm { vaddss  xmm6, xmm9, cs:__real@40e00000 }
      v40 = scrPlace;
      v41 = font;
      v42 = 0;
      __asm { vmovaps [rsp+3130h+var_60], xmm7 }
      v43 = 0;
      __asm { vmovss  xmm7, cs:__real@43220000 }
      v45 = 14;
      do
      {
        v46 = 63;
        dest[0] = 0;
        destPos = 0;
        if ( v45 < 63 )
          v46 = v45;
        BG_Animation_PrintCIConditionals(ci, v42, v46, dest, 6144, &destPos, "^7");
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmovss  [rsp+3130h+var_30F0], xmm8
          vmulss  xmm1, xmm0, xmm7
          vmovss  [rsp+3130h+y], xmm6
          vmovss  dword ptr [rsp+3130h+fmt], xmm1
        }
        UI_DrawText(v40, dest, 6144, v41, fmta, yb, 1, 1, v96, &colorWhite, 3);
        v42 += 14;
        v45 += 14;
        ++v43;
      }
      while ( v43 < 5 );
      v15 = v101;
      v16 = NumEntries;
      v17 = v105;
      v27 = mode;
      __asm { vmovaps xmm7, [rsp+3130h+var_60] }
    }
    buffer[0] = 0;
    bufferPos = 0;
    IsEnabled = PlayerASM_IsEnabled();
    __asm { vmovaps xmm8, [rsp+3130h+var_70] }
    if ( IsEnabled )
    {
      CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo(buffer, 6144, &bufferPos, "^7", ci, v17, v15, v27);
      LocalClientGlobals = CG_GetLocalClientGlobals(v16);
      BG_PlayerASM_DebugAnimEventLog_Compact(LocalClientGlobals->time);
      Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%sANIM EVENTS: %s\n", "^2", "^3");
      NumEntries = BG_PlayerASM_DebugAnimEventLog_GetNumEntries();
      destPos = 0;
      v53 = 0;
      if ( NumEntries > LOCAL_CLIENT_0 )
      {
        v54 = eventsMode;
        while ( 1 )
        {
          Entry = BG_PlayerASM_DebugAnimEventLog_GetEntry(v53);
          v56 = Entry;
          if ( (!Entry || !Entry->isUsed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4812, ASSERT_TYPE_ASSERT, "(entry && entry->isUsed)", (const char *)&queryFormat, "entry && entry->isUsed") )
            __debugbreak();
          if ( v54 == ANIM_SCRIPT_DEBUG_MODE_BOTH )
            break;
          if ( v56->isServer )
          {
            if ( v54 == ANIM_SCRIPT_DEBUG_MODE_SERVER )
              break;
          }
          else if ( v54 == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
          {
            break;
          }
LABEL_50:
          destPos = ++v53;
          if ( v53 >= NumEntries )
            goto LABEL_51;
        }
        if ( v56 == (const PlayerASM_DebugAnimEventInfoEntry *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 994, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
          __debugbreak();
        v57 = 0;
        p_events = &v56->events;
        while ( !p_events->events[0] )
        {
          ++v57;
          p_events = (events_t *)((char *)p_events + 4);
          if ( v57 >= 8 )
            goto LABEL_50;
        }
        v59 = 0;
        v60 = s_animEventTypesStr_0;
        v61 = 0;
        do
        {
          if ( Com_BitCheckAssert(v56->events.events, v59, 32) )
          {
            v62 = Com_BitCheckAssert(v56->events.force, v59, 32);
            v63 = (char *)&queryFormat.fmt + 3;
            if ( v62 )
              v63 = " [forced]";
            v64 = "C";
            v65 = "       ";
            if ( v56->isServer )
              v64 = "S";
            if ( v61 )
              v65 = ", ";
            Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%s[%s]: %s%s", v65, v64, v60->string, v63);
            v61 = 1;
          }
          ++v59;
          ++v60;
        }
        while ( v59 < 0x5C );
        v54 = eventsMode;
        v53 = destPos;
        if ( eventsMode == ANIM_SCRIPT_DEBUG_MODE_BOTH )
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "\n");
        goto LABEL_50;
      }
LABEL_51:
      Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%s\n\n", "^7");
    }
    else
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      v67 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4850, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      suitAnimIndex = ci->playerAnim.suitAnimIndex;
      v69 = *(_QWORD *)(v67 + 8 * suitAnimIndex);
      if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4855, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
        __debugbreak();
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_animscript_debug_legs, "animscript_debug_legs");
      v71 = Dvar_GetInt_Internal_DebugName(DVARINT_animscript_debug_torso, "animscript_debug_torso");
      v72 = v71;
      if ( (int)Int_Internal_DebugName < 0 && v71 < 0 )
        goto LABEL_74;
      Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%sSELECTED ANIMATIONS%s: \n", "^2", "^7");
      if ( (int)Int_Internal_DebugName >= 0 )
      {
        if ( (unsigned int)Int_Internal_DebugName >= *(_DWORD *)(v69 + 12) )
        {
          LODWORD(horzAlign) = *(_DWORD *)(v69 + 12);
          LODWORD(y) = Int_Internal_DebugName;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4869, ASSERT_TYPE_ASSERT, "(unsigned)( scriptItemIndexLegs ) < (unsigned)( playerAnim->scriptItemCount )", "scriptItemIndexLegs doesn't index playerAnim->scriptItemCount\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v73 = *(_QWORD *)(v69 + 72);
        v74 = *(_DWORD *)(v73 + 24 * Int_Internal_DebugName + 4) == 0;
        v75 = (const PlayerAnimScriptItem *)(v73 + 24 * Int_Internal_DebugName);
        if ( !v74 )
        {
          AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(v75->commands->animIndex, (SuitAnimType)suitAnimIndex);
          v77 = SL_ConvertToString(AnimationForIndex->animName);
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "LEGS->%s'%s'%s: \n", "^1", v77, "^7");
          BG_Animation_PrintScriptItemConditionals(v75, buffer, 6144, &bufferPos, "^7");
        }
      }
      if ( (int)v72 >= 0 && (ci->playerAnim.torsoAnim & 0xFFFFEFFF) != 0 )
      {
        if ( (unsigned int)v72 >= *(_DWORD *)(v69 + 12) )
        {
          LODWORD(horzAlign) = *(_DWORD *)(v69 + 12);
          LODWORD(y) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4884, ASSERT_TYPE_ASSERT, "(unsigned)( scriptItemIndexTorso ) < (unsigned)( playerAnim->scriptItemCount )", "scriptItemIndexTorso doesn't index playerAnim->scriptItemCount\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v78 = *(_QWORD *)(v69 + 72);
        v74 = *(_DWORD *)(v78 + 24 * v72 + 4) == 0;
        v79 = (const PlayerAnimScriptItem *)(v78 + 24 * v72);
        if ( !v74 )
        {
          v80 = BG_AnimationMP_GetAnimationForIndex(v79->commands->animIndex, (SuitAnimType)suitAnimIndex);
          v81 = SL_ConvertToString(v80->animName);
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "TORSO->%s'%s'%s: \n", "^3", v81, "^7");
          BG_Animation_PrintScriptItemConditionals(v79, buffer, 6144, &bufferPos, "^7");
        }
      }
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3e3851ec
      vaddss  xmm1, xmm9, [rsp+3130h+var_30C0]
      vmovss  [rsp+3130h+var_30F0], xmm0
      vmovss  [rsp+3130h+y], xmm1
      vmovss  dword ptr [rsp+3130h+fmt], xmm10
    }
    UI_DrawText(scrPlace, buffer, 6144, font, fmtb, yc, 1, 1, v97, &colorWhite, 3);
LABEL_74:
    __asm { vmovaps xmm10, [rsp+3130h+var_90] }
LABEL_75:
    __asm { vmovaps xmm9, [rsp+3130h+var_80] }
  }
  __asm { vmovaps xmm6, [rsp+3130h+var_50] }
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo
==============
*/
void CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo(char *buffer, const int BUFFERSIZE, int *bufferPos, const char *baseColor, const characterInfo_t *const ci, const playerState_s *ps, const int handle, AnimScriptDebugMode mode)
{
  bool v12; 
  const char *v13; 
  const characterInfo_t *v14; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned int Anim; 
  unsigned int Animset; 
  const Animset *AnimsetByIndex; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v32; 
  const char *v33; 
  __int64 v37; 
  double v38; 
  __int64 v39; 
  __int64 v40; 
  const char *v41; 
  unsigned int outAnimEntry; 
  const char *v43; 
  AnimsetAnim *ppOutAnim; 
  AnimsetAlias *ppOutAlias; 
  AnimsetState *outState; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v12 = mode == ANIM_SCRIPT_DEBUG_MODE_SERVER;
  v13 = "^3";
  v14 = ci;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm7, cs:__real@36000000
  }
  v20 = BUFFERSIZE;
  if ( !v12 )
    v13 = "^1";
  v21 = 0i64;
  v43 = v13;
  do
  {
    Anim = BG_PlayerASM_GetAnim(v14, (const PlayerASM_AnimSlot)(unsigned __int8)v21);
    if ( Anim )
    {
      Animset = BG_PlayerASM_GetAnimset(v14);
      BG_PlayerASM_UnpackAnim(Animset, Anim, (unsigned int *)&mode, &outAnimEntry);
      AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(Animset);
      if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4695, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
        __debugbreak();
      if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4696, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
        __debugbreak();
      if ( !(_DWORD)v21 )
      {
        LODWORD(v40) = 0x4000;
        LODWORD(v39) = LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw);
        Com_sprintfPos_truncate(buffer, v20, bufferPos, "ANIMSET: %s%s%s  (%4d/%4d)\n", "^5", AnimsetByIndex->name, baseColor, v39, v40);
      }
      if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, mode, outAnimEntry) )
      {
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, mode, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
        if ( BG_Animset_GetStateInfoByIndex(AnimsetByIndex, mode, &outState) )
        {
          v25 = SL_ConvertToString(ppOutAnim->name);
          v26 = SL_ConvertToString(ppOutAlias->name);
          v27 = SL_ConvertToString(outState->name);
          v41 = v25;
          v28 = "SUB";
          v13 = v43;
          if ( !(_DWORD)v21 )
            v28 = "PRIMARY";
          LODWORD(v37) = Anim;
          Com_sprintfPos_truncate(buffer, v20, bufferPos, "%s[%d]:%s state: %s'%s', %salias: %s'%s', %sanim: %s'%s'%s ", v28, v37, "^;", v43, v27, "^;", v43, v26, "^;", v43, v41, baseColor);
          if ( CG_IsPlayerEntityNumber(ps, handle) )
          {
            if ( ps->animState.slot[v21].m_Timer == 0x7FFFF )
            {
              __asm { vmovaps xmm0, xmm6 }
            }
            else
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rcx
                vmulss  xmm0, xmm0, xmm7
              }
            }
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0F8h+var_C8], xmm0
            }
            LODWORD(v37) = ps->animState.slot[v21].m_Timer;
            Com_sprintfPos_truncate(buffer, v20, bufferPos, "%s(%.3d, %.3f)%s\n", "^2", v37, v38, baseColor);
            v14 = ci;
          }
          else
          {
            Com_sprintfPos_truncate(buffer, v20, bufferPos, "\n");
            v14 = ci;
          }
        }
        else
        {
          v13 = v43;
        }
      }
      else
      {
        v13 = v43;
        v32 = "SUB";
        if ( !(_DWORD)v21 )
          v32 = "PRIMARY";
        Com_sprintfPos_truncate(buffer, v20, bufferPos, "%s->%s'%s'%s: \n", v32, v43, "none", baseColor);
      }
    }
    else
    {
      v33 = "SUB";
      if ( !(_DWORD)v21 )
        v33 = "PRIMARY";
      Com_sprintfPos_truncate(buffer, v20, bufferPos, "%s->%s'%s'%s: \n", v33, v13, "none", baseColor);
    }
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < 2 );
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_Client
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo_Client(LocalClientNum_t localClientNum, double requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  CgStatic *ActiveStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v11; 
  cg_t *LocalClientGlobals; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
  {
    ActiveStatics = (CgStatic *)BgStatic::GetActiveStatics();
    if ( ActiveStatics->IsClient(ActiveStatics) )
      CharacterInfo = CgStatic::GetCharacterInfo(ActiveStatics, handle);
    else
      CharacterInfo = (const characterInfo_t *)ActiveStatics->GetClientInfo(ActiveStatics, handle);
    v11 = CharacterInfo;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovaps xmm1, xmm6; requestedYPos }
    CG_DrawDebug_PlayerAnimScriptInfo(localClientNum, *(float *)&_XMM1, v11, &LocalClientGlobals->predictedPlayerState, handle, ANIM_SCRIPT_DEBUG_MODE_CLIENT, eventsMode);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_DrawDebug_PlayerBullet
==============
*/
void CG_DrawDebug_PlayerBullet(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v5; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  Physics_WorldId v20; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned __int8 *WeaponPriorityMap; 
  bool HasHit; 
  unsigned __int8 v30; 
  unsigned __int64 v31; 
  char v32; 
  const vec4_t *v34; 
  int RaycastHitRef; 
  unsigned __int8 RefSubSystem; 
  unsigned __int16 RefId; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  hknpShape **v46; 
  __int64 v47; 
  const char *v48; 
  const char *v51; 
  unsigned int RaycastHitBodyId; 
  unsigned int RaycastHitShapeKey; 
  unsigned int v55; 
  hknpShape **v56; 
  __int64 v57; 
  const char *NameForShape; 
  DObj *ClientDObj; 
  const char **v65; 
  const char **v66; 
  const char *v67; 
  const ScriptableDef *Def; 
  const char *v71; 
  unsigned __int16 v78; 
  unsigned __int16 v79; 
  __int64 v80; 
  DynEntityClient *v81; 
  const char *v82; 
  int EntityNum; 
  DObj *v86; 
  const char **v87; 
  const char **v88; 
  const char *v89; 
  DObj *DObj; 
  const char **v93; 
  const char **v94; 
  const char *v95; 
  __int64 forceColor; 
  __int64 shadow; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  DynEntityBasis basisOut[4]; 
  unsigned __int16 clientIdOut; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t outOrg; 
  vec3_t end; 
  vec3_t pos; 
  hknpShape *shapes[8]; 

  v5 = DCONST_DVARBOOL_debugDrawPlayerBulletCollision;
  v7 = localClientNum;
  if ( !DCONST_DVARBOOL_debugDrawPlayerBulletCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugDrawPlayerBulletCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+160h+var_40], xmm6
      vmovaps [rsp+160h+var_50], xmm7
      vmovaps [rsp+160h+var_60], xmm8
    }
    Physics_WaitForAllCommandsToFinish();
    _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    __asm
    {
      vmovss  xmm6, dword ptr [rax+6944h]
      vmovss  xmm7, dword ptr [rax+6948h]
      vmovss  xmm8, dword ptr [rax+694Ch]
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm3, cs:rayDist_0
      vmulss  xmm0, xmm3, xmm6
      vaddss  xmm1, xmm0, dword ptr [rbp+60h+outOrg]
      vmulss  xmm2, xmm3, xmm7
      vaddss  xmm0, xmm2, dword ptr [rbp+60h+outOrg+4]
      vmovss  dword ptr [rbp+60h+end], xmm1
      vmulss  xmm1, xmm3, xmm8
      vaddss  xmm2, xmm1, dword ptr [rbp+60h+outOrg+8]
    }
    v20 = 3 * v7 + 4;
    __asm
    {
      vmovss  dword ptr [rbp+60h+end+8], xmm2
      vmovss  dword ptr [rbp+60h+end+4], xmm0
    }
    ClosestResult = PhysicsQuery_GetClosestResult(v20);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(ClosestResult, WeaponPriorityMap);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    __asm { vmovss  [rsp+160h+extendedData.collisionBuffer], xmm0 }
    extendedData.contents = 8397235;
    Physics_Raycast(v20, &outOrg, &end, &extendedData, ClosestResult);
    __asm
    {
      vmovss  xmm6, cs:__real@41000000
      vmovss  [rsp+160h+var_128], xmm6
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Player Bullet Collision:", &colorWhite, 0, 1, v102, 0);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
    __asm { vmovaps xmm8, [rsp+160h+var_60] }
    if ( HasHit )
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &pos);
      __asm { vmovss  xmm1, cs:__real@40800000; radius }
      CG_DebugSphere(&pos, *(float *)&_XMM1, &colorWhite, 0, 1);
      v30 = ((int)HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
      v31 = 0x8000001000000001ui64;
      if ( _bittest64((const __int64 *)&v31, v30) )
        v32 = 1;
      else
        v32 = 0;
      __asm
      {
        vmovss  xmm2, cs:__real@41800000; y
        vmovss  [rsp+160h+var_128], xmm6
      }
      v34 = &colorWhite;
      if ( v32 )
        v34 = &colorRed;
      __asm { vmovaps xmm1, xmm6; x }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, s_surfaceTypeNames[v30], v34, 0, 1, v103, 0);
      __asm { vmovss  xmm7, cs:__real@41c00000 }
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
      Physics_GetRefSystem(RaycastHitRef);
      RefSubSystem = Physics_GetRefSubSystem(RaycastHitRef);
      RefId = Physics_GetRefId(RaycastHitRef);
      switch ( 0x40000000u )
      {
        case 0u:
          __asm
          {
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          switch ( RefSubSystem )
          {
            case 0u:
              __asm { vmovss  [rsp+160h+var_128], xmm6 }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Primary World Geometry From Radiant", &colorWhite, 0, 1, v110, 0);
              v51 = "If there is a bad surface type, either the wrong material is being used, or the material has an invalid surf type";
              __asm { vmovss  [rsp+160h+var_128], xmm6 }
LABEL_29:
              __asm { vmovss  xmm2, cs:__real@42000000; y }
LABEL_30:
              __asm { vmovaps xmm1, xmm6; x }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v51, &colorWhite, 0, 1, v107, 0);
              goto LABEL_31;
            case 1u:
              __asm { vmovss  [rsp+160h+var_128], xmm6 }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Static Model", &colorWhite, 0, 1, v108, 0);
              __asm { vmovss  xmm7, cs:__real@42000000 }
              RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
              RaycastHitShapeKey = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
              v55 = Physics_DecodeShapeKeyIntoShapes(v20, RaycastHitBodyId, RaycastHitShapeKey, (const hknpShape **)shapes);
              if ( v55 )
              {
                v56 = shapes;
                v57 = v55;
                do
                {
                  NameForShape = StaticModels_Debug_GetNameForShape(*v56);
                  if ( NameForShape )
                  {
                    __asm
                    {
                      vmovss  [rsp+160h+var_128], xmm6
                      vmovaps xmm2, xmm7; y
                      vmovaps xmm1, xmm6; x
                    }
                    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, NameForShape, &colorWhite, 0, 1, v109, 0);
                    __asm { vaddss  xmm7, xmm7, xmm6 }
                  }
                  ++v56;
                  --v57;
                }
                while ( v57 );
              }
              break;
            case 2u:
              __asm { vmovss  [rsp+160h+var_128], xmm6 }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Patch Collision", &colorWhite, 0, 1, v105, 0);
              __asm { vmovss  xmm7, cs:__real@42000000 }
              v43 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
              v44 = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
              v45 = Physics_DecodeShapeKeyIntoShapes(v20, v43, v44, (const hknpShape **)shapes);
              if ( v45 )
              {
                v46 = shapes;
                v47 = v45;
                do
                {
                  v48 = PatchCollision_Debug_GetNameForShape(*v46);
                  if ( v48 )
                  {
                    __asm
                    {
                      vmovss  [rsp+160h+var_128], xmm6
                      vmovaps xmm2, xmm7; y
                      vmovaps xmm1, xmm6; x
                    }
                    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v48, &colorWhite, 0, 1, v106, 0);
                    __asm { vaddss  xmm7, xmm7, xmm6 }
                  }
                  ++v46;
                  --v47;
                }
                while ( v47 );
              }
              break;
            default:
              __asm { vmovss  [rsp+160h+var_128], xmm6 }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Unknown World Geo", &colorWhite, 0, 1, v104, 0);
LABEL_31:
              __asm
              {
                vmovaps xmm6, [rsp+160h+var_40]
                vmovaps xmm7, [rsp+160h+var_50]
              }
              return;
          }
          v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7
          }
          goto LABEL_30;
        case 1u:
          DynEnt_GetBasisAndDynEntClientId(RefId, basisOut, &clientIdOut);
          if ( basisOut[0] == DYNENT_BASIS_BRUSH )
          {
            __asm
            {
              vmovss  [rsp+160h+var_128], xmm6
              vmovaps xmm2, xmm7; y
              vmovaps xmm1, xmm6; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "DynEnt using Brush geo", &colorWhite, 0, 1, v113, 0);
            __asm
            {
              vmovss  xmm2, cs:__real@42000000; y
              vmovss  [rsp+160h+var_128], xmm6
              vmovaps xmm1, xmm6; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "If there is a bad surface type, either the wrong material is being used for the brush, or the material has an invalid surf type", &colorWhite, 0, 1, v114, 0);
            __asm { vmovss  xmm7, cs:__real@42200000 }
            v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          else if ( basisOut[0] )
          {
            v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          else
          {
            v78 = clientIdOut;
            if ( (unsigned int)v7 >= 2 )
            {
              LODWORD(shadow) = 2;
              LODWORD(forceColor) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v79 = g_dynEntClientEntsAllocCount[v7][0];
            if ( v78 >= v79 )
            {
              LODWORD(shadow) = v79;
              LODWORD(forceColor) = v78;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v80 = v7;
            if ( !g_dynEntClientLists[v80][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v81 = &g_dynEntClientLists[v80][0][v78];
            if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8880, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            v82 = j_va("DynEnt using Model geo from model %s", v81->activeModel->name);
            __asm
            {
              vmovss  [rsp+160h+var_128], xmm6
              vmovaps xmm2, xmm7; y
              vmovaps xmm1, xmm6; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v82, &colorWhite, 0, 1, v115, 0);
            __asm { vmovss  xmm7, cs:__real@42000000 }
            v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          goto LABEL_79;
        case 4u:
          ClientDObj = Com_GetClientDObj(RefId, (LocalClientNum_t)v7);
          if ( ClientDObj && ClientDObj->numModels && (v65 = (const char **)*ClientDObj->models) != NULL )
          {
            v66 = (const char **)v65[78];
            if ( v66 )
              v67 = j_va("Entity From model %s with physicsasset %s", *v65, *v66);
            else
              v67 = j_va("Entity From model %s with physicsasset %s", *v65, "Unknown");
          }
          else
          {
            v67 = "Entity From Unknown model/physicsAsset";
          }
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v67, &colorWhite, 0, 1, v111, 0);
          v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type.";
          __asm { vmovss  [rsp+160h+var_128], xmm6 }
          goto LABEL_29;
        case 6u:
          EntityNum = Physics_GetEntityNum(RaycastHitRef);
          v86 = Com_GetClientDObj(EntityNum, (LocalClientNum_t)v7);
          if ( v86 && v86->numModels && (v87 = (const char **)*v86->models) != NULL )
          {
            v88 = (const char **)v87[78];
            if ( v88 )
              v89 = j_va("Ragdoll From model %s with physicsasset %s", *v87, *v88);
            else
              v89 = j_va("Ragdoll From model %s with physicsasset %s", *v87, "Unknown");
          }
          else
          {
            v89 = "Ragdoll From Unknown model/physicsAsset";
          }
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v89, &colorWhite, 0, 1, v116, 0);
          v51 = "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.";
          __asm { vmovss  [rsp+160h+var_128], xmm6 }
          goto LABEL_29;
        case 8u:
          Def = ScriptableCl_GetDef((const LocalClientNum_t)v7, RaycastHitRef & 0x3FFFFF);
          if ( Def )
            v71 = j_va("Scriptable Collision from %s", Def->name);
          else
            v71 = "Scriptable Collision from unknown scriptable";
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v71, &colorWhite, 0, 1, v112, 0);
          v51 = "If there is a bad surface type, either the wrong material is being used for the colmap, or the material has an invalid surf type";
          __asm { vmovss  [rsp+160h+var_128], xmm6 }
          goto LABEL_29;
        case 0xAu:
          DObj = CG_ClientModel_GetDObj((const LocalClientNum_t)v7, RefId);
          if ( DObj && DObj->numModels && (v93 = (const char **)*DObj->models) != NULL )
          {
            v94 = (const char **)v93[78];
            if ( v94 )
              v95 = j_va("ClientModel From model %s with physicsasset %s", *v93, *v94);
            else
              v95 = j_va("ClientModel From model %s with physicsasset %s", *v93, "Unknown");
          }
          else
          {
            v95 = "ClientModel From Unknown model/physicsAsset";
          }
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v95, &colorWhite, 0, 1, v117, 0);
          v51 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          __asm { vmovss  [rsp+160h+var_128], xmm6 }
          goto LABEL_29;
        default:
          v51 = "Unexpected Source";
LABEL_79:
          __asm
          {
            vmovss  [rsp+160h+var_128], xmm6
            vmovaps xmm2, xmm7
          }
          goto LABEL_30;
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  [rsp+160h+var_128], xmm6
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "No ground found", &colorWhite, 0, 1, v118, 0);
    goto LABEL_31;
  }
}

/*
==============
CG_DrawDebug_PlayerFootstep
==============
*/
void CG_DrawDebug_PlayerFootstep(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  float v9; 
  float v10; 
  __int32 v20; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned __int8 v27; 
  unsigned __int64 v28; 
  char v29; 
  const vec4_t *v31; 
  int RaycastHitRef; 
  Physics_RefSystem RefSystem; 
  unsigned __int8 RefSubSystem; 
  unsigned __int16 RefId; 
  const ScriptableDef *Def; 
  const char *v40; 
  DObj *ClientDObj; 
  const char **v46; 
  const char **v47; 
  const char *v48; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  hknpShape **v59; 
  __int64 v60; 
  const char *v61; 
  unsigned int RaycastHitBodyId; 
  unsigned int RaycastHitShapeKey; 
  unsigned int v66; 
  hknpShape **v67; 
  __int64 v68; 
  const char *NameForShape; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t start; 
  vec3_t pos; 
  vec3_t end; 
  hknpShape *shapes[8]; 

  v4 = DCONST_DVARBOOL_debugDrawPlayerFootstepCollision;
  if ( !DCONST_DVARBOOL_debugDrawPlayerFootstepCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugDrawPlayerFootstepCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm { vmovaps [rsp+150h+var_40], xmm6 }
    Physics_WaitForAllCommandsToFinish();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    _RDI = &LocalClientGlobals->predictedPlayerEntity->nextState.lerp.pos;
    if ( LocalClientGlobals->predictedPlayerEntity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      v9 = _RDI->trBase.v[1];
      v10 = _RDI->trBase.v[0];
      *(_QWORD *)pos.v = &start;
      LODWORD(start.v[2]) = s_trbase_aab_Z ^ LODWORD(v9) ^ LODWORD(_RDI->trBase.v[2]);
      LODWORD(start.v[1]) = s_trbase_aab_Y ^ LODWORD(v10) ^ LODWORD(v9);
      LODWORD(start.v[0]) = LODWORD(v10) ^ ~s_trbase_aab_X;
      __asm { vmovss  xmm0, dword ptr [rsp+150h+start] }
      memset(&pos, 0, 8ui64);
      __asm { vmovss  dword ptr [rbp+50h+pos], xmm0 }
      if ( (LODWORD(pos.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_61;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+150h+start+4]
        vmovss  dword ptr [rbp+50h+pos], xmm0
      }
      if ( (LODWORD(pos.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_61;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+50h+start+8]
        vmovss  dword ptr [rbp+50h+pos], xmm0
      }
      if ( (LODWORD(pos.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_61:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
        __asm { vmovss  xmm0, dword ptr [rbp+50h+start+8] }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rsp+150h+start], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  dword ptr [rsp+150h+start+4], xmm1
        vmovss  xmm0, dword ptr [rdi+14h]
      }
    }
    __asm
    {
      vaddss  xmm2, xmm0, cs:__real@42800000
      vmovss  xmm0, dword ptr [rsp+150h+start]
      vmovss  xmm1, dword ptr [rsp+150h+start+4]
      vmovss  dword ptr [rbp+50h+end], xmm0
      vsubss  xmm0, xmm2, cs:__real@43000000
    }
    v20 = 3 * localClientNum + 2;
    __asm
    {
      vmovss  dword ptr [rbp+50h+end+8], xmm0
      vmovss  dword ptr [rbp+50h+start+8], xmm2
      vmovss  dword ptr [rbp+50h+end+4], xmm1
    }
    ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v20);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    __asm { vmovss  [rsp+150h+extendedData.collisionBuffer], xmm0 }
    extendedData.contents = 65553;
    Physics_Raycast((Physics_WorldId)v20, &start, &end, &extendedData, ClosestResult);
    __asm
    {
      vmovss  xmm6, cs:__real@41000000
      vmovss  [rsp+150h+var_118], xmm6
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Player Footstep Collision:", &colorWhite, 0, 1, v80, 0);
    if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@41800000; y
        vmovss  [rsp+150h+var_118], xmm6
        vmovaps xmm1, xmm6; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "No ground found", &colorWhite, 0, 1, v95, 0);
      goto LABEL_55;
    }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &pos);
    __asm { vmovss  xmm1, cs:__real@40800000; radius }
    CG_DebugSphere(&pos, *(float *)&_XMM1, &colorWhite, 0, 1);
    v27 = ((int)HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
    v28 = 0x8000001000000001ui64;
    if ( _bittest64((const __int64 *)&v28, v27) )
      v29 = 1;
    else
      v29 = 0;
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  [rsp+150h+var_118], xmm6
    }
    v31 = &colorWhite;
    if ( v29 )
      v31 = &colorRed;
    __asm { vmovaps xmm1, xmm6; x }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, s_surfaceTypeNames[v27], v31, 0, 1, v81, 0);
    RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
    RefSystem = Physics_GetRefSystem(RaycastHitRef);
    RefSubSystem = Physics_GetRefSubSystem(RaycastHitRef);
    RefId = Physics_GetRefId(RaycastHitRef);
    if ( RefSystem )
    {
      if ( RefSystem == Physics_RefSystem_CEntities )
      {
        ClientDObj = Com_GetClientDObj(RefId, localClientNum);
        if ( ClientDObj && ClientDObj->numModels && (v46 = (const char **)*ClientDObj->models) != NULL )
        {
          v47 = (const char **)v46[78];
          if ( v47 )
            v48 = j_va("Entity From model %s with physicsasset %s", *v46, *v47);
          else
            v48 = j_va("Entity From model %s with physicsasset %s", *v46, "Unknown");
        }
        else
        {
          v48 = "Entity From Unknown model/physicsAsset";
        }
        __asm
        {
          vmovss  xmm2, cs:__real@41c00000; y
          vmovss  [rsp+150h+var_118], xmm6
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v48, &colorWhite, 0, 1, v85, 0);
        __asm
        {
          vmovss  xmm2, cs:__real@42000000; y
          vmovss  [rsp+150h+var_118], xmm6
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.", &colorWhite, 0, 1, v86, 0);
      }
      else if ( RefSystem == Physics_RefSystem_Scriptable )
      {
        Def = ScriptableCl_GetDef(localClientNum, RaycastHitRef & 0x3FFFFF);
        if ( Def )
          v40 = j_va("Scriptable Collision from %s", Def->name);
        else
          v40 = "Scriptable Collision from unknown scriptable";
        __asm
        {
          vmovss  xmm2, cs:__real@41c00000; y
          vmovss  [rsp+150h+var_118], xmm6
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v40, &colorWhite, 0, 1, v83, 0);
        __asm
        {
          vmovss  xmm2, cs:__real@42000000; y
          vmovss  [rsp+150h+var_118], xmm6
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "If there is a bad surface type, either the wrong material is being used for the colmap, or the material has an invalid surf type", &colorWhite, 0, 1, v84, 0);
      }
      else
      {
        __asm
        {
          vmovss  xmm2, cs:__real@41c00000; y
          vmovss  [rsp+150h+var_118], xmm6
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Unexpected Source", &colorWhite, 0, 1, v82, 0);
      }
      goto LABEL_55;
    }
    __asm
    {
      vmovss  xmm2, cs:__real@41c00000; y
      vmovaps xmm1, xmm6; x
    }
    if ( !RefSubSystem )
    {
      __asm { vmovss  [rsp+150h+var_118], xmm6 }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Primary World Geometry From Radiant", &colorWhite, 0, 1, v93, 0);
      __asm
      {
        vmovss  xmm2, cs:__real@42000000; y
        vmovss  [rsp+150h+var_118], xmm6
        vmovaps xmm1, xmm6; x
      }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "If there is a bad surface type, either the wrong material is being used, or the material has an invalid surf type", &colorWhite, 0, 1, v94, 0);
      goto LABEL_55;
    }
    __asm { vmovaps [rsp+150h+var_50], xmm7 }
    if ( RefSubSystem == 1 )
    {
      __asm { vmovss  [rsp+150h+var_118], xmm6 }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Static Model", &colorWhite, 0, 1, v90, 0);
      __asm { vmovss  xmm7, cs:__real@42000000 }
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      RaycastHitShapeKey = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
      v66 = Physics_DecodeShapeKeyIntoShapes((Physics_WorldId)v20, RaycastHitBodyId, RaycastHitShapeKey, (const hknpShape **)shapes);
      if ( v66 )
      {
        v67 = shapes;
        v68 = v66;
        do
        {
          NameForShape = StaticModels_Debug_GetNameForShape(*v67);
          if ( NameForShape )
          {
            __asm
            {
              vmovss  [rsp+150h+var_118], xmm6
              vmovaps xmm2, xmm7; y
              vmovaps xmm1, xmm6; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, NameForShape, &colorWhite, 0, 1, v91, 0);
            __asm { vaddss  xmm7, xmm7, xmm6 }
          }
          ++v67;
          --v68;
        }
        while ( v68 );
      }
    }
    else
    {
      if ( RefSubSystem != 2 )
      {
        __asm { vmovss  [rsp+150h+var_118], xmm6 }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Unknown World Geo", &colorWhite, 0, 1, v87, 0);
LABEL_54:
        __asm { vmovaps xmm7, [rsp+150h+var_50] }
LABEL_55:
        __asm { vmovaps xmm6, [rsp+150h+var_40] }
        return;
      }
      __asm { vmovss  [rsp+150h+var_118], xmm6 }
      CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "Patch Collision", &colorWhite, 0, 1, v88, 0);
      __asm { vmovss  xmm7, cs:__real@42000000 }
      v56 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      v57 = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
      v58 = Physics_DecodeShapeKeyIntoShapes((Physics_WorldId)v20, v56, v57, (const hknpShape **)shapes);
      if ( v58 )
      {
        v59 = shapes;
        v60 = v58;
        do
        {
          v61 = PatchCollision_Debug_GetNameForShape(*v59);
          if ( v61 )
          {
            __asm
            {
              vmovss  [rsp+150h+var_118], xmm6
              vmovaps xmm2, xmm7; y
              vmovaps xmm1, xmm6; x
            }
            CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v61, &colorWhite, 0, 1, v89, 0);
            __asm { vaddss  xmm7, xmm7, xmm6 }
          }
          ++v59;
          --v60;
        }
        while ( v60 );
      }
    }
    __asm
    {
      vmovss  [rsp+150h+var_118], xmm6
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm6; x
    }
    CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.", &colorWhite, 0, 1, v92, 0);
    goto LABEL_54;
  }
}

/*
==============
CG_DrawDebug_PlayerVignettePrint
==============
*/
void CG_DrawDebug_PlayerVignettePrint(LocalClientNum_t localClientNum, const char *uniqueString, unsigned int flags)
{
  cg_t *LocalClientGlobals; 
  __int16 linkEnt; 
  const char *tagName; 
  cg_t *v11; 
  const char *modelName; 
  bool v13; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const XModel *Model; 
  vec3_t angles; 
  vec3_t linkTagOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 

  if ( !uniqueString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 11285, ASSERT_TYPE_ASSERT, "(uniqueString)", (const char *)&queryFormat, "uniqueString") )
    __debugbreak();
  if ( BG_DrawDebug_PlayerVignetteActive(flags) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0E8h+angles], xmm0
      vmovss  dword ptr [rsp+0E8h+angles+4], xmm0
      vmovss  dword ptr [rsp+0E8h+angles+8], xmm0
      vmovss  dword ptr [rsp+0E8h+var_88], xmm0
      vmovss  dword ptr [rsp+0E8h+var_88+4], xmm0
      vmovss  dword ptr [rsp+0E8h+var_88+8], xmm0
    }
    linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
    tagName = "notag";
    v11 = LocalClientGlobals;
    modelName = "nomodel";
    v13 = 0;
    if ( linkEnt != 2047 )
    {
      v13 = 1;
      Entity = CG_GetEntity(localClientNum, linkEnt);
      _RBX = &Entity->pose;
      if ( (Entity->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
        if ( ClientDObj )
        {
          if ( CG_DObjGetWorldTagMatrix(_RBX, ClientDObj, scr_const.tag_player, &outTagMat, &outOrigin) )
          {
            tagName = "tag_player";
            Model = DObjGetModel(ClientDObj, 0);
            if ( Model )
              modelName = Model->name;
          }
          AxisToAngles(&outTagMat, &angles);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin]
            vmovss  xmm1, dword ptr [rsp+0E8h+outOrigin+4]
            vmovss  dword ptr [rsp+0E8h+var_88], xmm0
            vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin+8]
            vmovss  dword ptr [rsp+0E8h+var_88+8], xmm0
            vmovss  dword ptr [rsp+0E8h+var_88+4], xmm1
          }
        }
        else
        {
          CG_GetPoseOrigin(_RBX, &linkTagOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+48h]
            vmovss  dword ptr [rsp+0E8h+angles], xmm0
            vmovss  xmm1, dword ptr [rbx+4Ch]
            vmovss  dword ptr [rsp+0E8h+angles+4], xmm1
            vmovss  xmm0, dword ptr [rbx+50h]
            vmovss  dword ptr [rsp+0E8h+angles+8], xmm0
          }
        }
      }
    }
    BG_DrawDebug_PlayerVignettePrint(&v11->predictedPlayerState, 1, uniqueString, flags, v13, v11->time, modelName, tagName, &linkTagOrigin, &angles);
  }
}

/*
==============
CG_DrawDebug_Player_InterpolatePs
==============
*/
void CG_DrawDebug_Player_InterpolatePs(LocalClientNum_t localClientNum)
{
  bool v3; 
  double v13; 
  double v14; 
  double v15; 

  if ( BG_DrawDebug_PlayerVignetteActive(1) )
  {
    _RBX = CG_GetLocalClientGlobals(localClientNum);
    v3 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->nextPs->otherFlags, ACTIVE, 9u);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20Ch]
      vmovss  xmm1, dword ptr [rbx+208h]
      vmovss  xmm3, dword ptr [rbx+200h]
      vmovss  xmm2, dword ptr [rbx+204h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_18], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+48h+var_20], xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+48h+var_28], xmm2
    }
    Com_Printf(19, "[Vignette] Interpolate PS: Lock View %d, Clamp Base %.3f %.3f, Clamp Range %.3f %.3f\n", v3, *(double *)&_XMM3, v13, v14, v15);
  }
}

/*
==============
CG_DrawDebug_Player_ViewValues
==============
*/
void CG_DrawDebug_Player_ViewValues(LocalClientNum_t localClientNum)
{
  double v11; 

  if ( BG_DrawDebug_PlayerVignetteActive(1) )
  {
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm3, dword ptr [rax+178C4h]
      vmovss  xmm2, dword ptr [rax+178C0h]
      vmovss  xmm0, dword ptr [rax+178C8h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+38h+var_18], xmm0
    }
    Com_Printf(19, "[Vignette] Client View: refAng %.3f %.3f %.3f\n", *(double *)&_XMM2, *(double *)&_XMM3, v11);
  }
}

/*
==============
CG_DrawDebug_PrintFPS
==============
*/

float __fastcall CG_DrawDebug_PrintFPS(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, float y, float width, float minTimeMSec, float maxTimeMSec, float totalMSec, float totalFrameMSec, float varianceMSec, int fpsMin, int fpsMax, int fps, int fpsFrame, vec4_t *outColor)
{
  const dvar_t *v29; 
  const char *v46; 
  XB3ConsoleType XB3ConsoleType; 
  int integer; 
  int v79; 
  int v80; 
  const char *v81; 
  GfxColorimetry DisplayColorimetry; 
  const char *v83; 
  const dvar_t *v84; 
  const dvar_t *v88; 
  const dvar_t *v93; 
  const char *v94; 
  const char *v101; 
  const char *v119; 
  const char *v120; 
  const char *v121; 
  char *fmta; 
  char *fmt; 
  char *fmtb; 
  char *label; 
  char *labela; 
  char *labelb; 
  const vec4_t *color; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  vec3_t outOrg; 
  char v163; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmm12, xmm3
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 761, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 762, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  v29 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  __asm
  {
    vmovss  xmm9, [rsp+108h+width]
    vmovss  xmm10, cs:__real@3f4ccccd
    vmovss  xmm7, cs:__real@3f400000
  }
  if ( v29->current.integer < 4 )
  {
    __asm { vmovss  xmm8, [rsp+108h+y] }
  }
  else
  {
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+178C0h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm4, dword ptr [rdi+178C4h]
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm3, dword ptr [rsp+108h+outOrg+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+108h+outOrg+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm1, dword ptr [rsp+108h+outOrg]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+108h+label], xmm0
      vmovsd  [rsp+108h+fmt], xmm4
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v46 = j_va("(%.1f %.1f %.1f) : (%.1f %.1f)", _RDX, _R8, _R9, fmta, labela);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovss  xmm6, [rsp+108h+y]
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v46, " viewpos", &colorWhite, v147, v152, v157, 0);
    __asm { vaddss  xmm8, xmm6, xmm0 }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+108h+fps]
    vsubss  xmm1, xmm0, cs:__real@42700000
    vmulss  xmm3, xmm1, cs:__real@3dcccccd
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm0, xmm3, xmm2; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    vsubss  xmm2, xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
  }
  _R15 = outColor;
  __asm
  {
    vmovss  dword ptr [r15], xmm4
    vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
    vsubss  xmm2, xmm1, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr cs:?colorRed@@3Tvec4_t@@B+4; vec4_t const colorRed
    vmovss  dword ptr [r15+4], xmm4
    vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
    vsubss  xmm1, xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr cs:?colorRed@@3Tvec4_t@@B+8; vec4_t const colorRed
    vmovss  dword ptr [r15+8], xmm3
    vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
    vsubss  xmm1, xmm0, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr cs:?colorRed@@3Tvec4_t@@B+0Ch; vec4_t const colorRed
    vmovss  dword ptr [r15+0Ch], xmm3
  }
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  integer = r_mode->current.integer;
  if ( integer )
  {
    v79 = integer - 1;
    if ( v79 )
    {
      v80 = v79 - 1;
      if ( v80 )
      {
        if ( v80 == 1 )
        {
          if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
          {
            v81 = "3840@2K";
            goto LABEL_25;
          }
        }
        else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
        {
          v81 = "3840";
          goto LABEL_25;
        }
      }
      else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
      {
        v81 = "3840@1K";
        goto LABEL_25;
      }
    }
    v81 = "1080";
  }
  else
  {
    v81 = "1080@900";
  }
LABEL_25:
  DisplayColorimetry = R_GetDisplayColorimetry();
  v83 = "HDR";
  if ( !R_IsColorimetryHDR(DisplayColorimetry) )
    v83 = (char *)&queryFormat.fmt + 3;
  if ( rg.sceneResDynamic )
  {
    v84 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v84);
    LODWORD(label) = v84->current.integer;
    j_sprintf_s(Buffer, 0x20ui64, " FPS[%s%s/%d]", v81, v83, label);
  }
  else
  {
    j_sprintf_s(Buffer, 0x20ui64, " FPS[%s%s]", v81, v83);
  }
  if ( rg.sceneResNative )
  {
    _EDI = vidConfig.displayWidth;
    _EBX = vidConfig.displayHeight;
  }
  else if ( rg.sceneResDynamic )
  {
    _RBX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v88 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v88);
    _RAX = v88->current.unsignedInt;
    __asm
    {
      vcvttss2si edi, dword ptr [rbx+rax*8]
      vcvttss2si ebx, dword ptr [rbx+rax*8+4]
    }
  }
  else
  {
    _EDI = vidConfig.sceneWidth;
    _EBX = vidConfig.sceneHeight;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm11, xmm0, cs:__real@358637bd
  }
  v93 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v93);
  if ( v93->current.integer < 2 )
  {
    v121 = j_va("%i | F%i", (unsigned int)fps, (unsigned int)fpsFrame);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm8; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v121, Buffer, outColor, v151, v156, v161, 0);
    __asm
    {
      vaddss  xmm6, xmm8, xmm0
      vcvtss2sd xmm3, xmm11, xmm11
      vmovq   r9, xmm3
    }
    v119 = j_va("(%i %i) %.2f Mpx", _EDI, _EBX, _R9);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
    }
    color = outColor;
    v120 = " Scene Res";
  }
  else
  {
    LODWORD(fmt) = fpsFrame;
    v94 = j_va("(%i - %i) %i | F%i", (unsigned int)fpsMin, (unsigned int)fpsMax, (unsigned int)fps, fmt);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm8; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v94, Buffer, outColor, v148, v153, v158, 0);
    __asm
    {
      vaddss  xmm6, xmm8, xmm0
      vcvtss2sd xmm3, xmm11, xmm11
      vmovq   r9, xmm3
    }
    v101 = j_va("(%i %i) %.2f Mpx", _EDI, _EBX, _R9);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v101, " Scene Res", outColor, v149, v154, v159, 0);
    __asm
    {
      vaddss  xmm6, xmm6, xmm0
      vmovss  xmm4, [rsp+108h+totalFrameMSec]
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm5, [rsp+108h+totalMSec]
      vcvtss2sd xmm5, xmm5, xmm5
      vmovss  xmm3, [rsp+108h+varianceMSec]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, [rsp+108h+maxTimeMSec]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm1, [rsp+108h+minTimeMSec]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+108h+label], xmm4
      vmovsd  [rsp+108h+fmt], xmm5
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v119 = j_va("(%2.1f - %2.1f, %2.1f) %3.2f | F%3.2f", _RDX, _R8, _R9, fmtb, labelb);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm7
      vmovss  [rsp+108h+var_D0], xmm7
    }
    color = &colorWhite;
    v120 = " cg ms/frame";
  }
  __asm
  {
    vmovaps xmm3, xmm9; labelWidth
    vmovaps xmm2, xmm6; posY
    vmovaps xmm1, xmm12; posX
  }
  CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v119, v120, color, v150, v155, v160, 0);
  __asm { vaddss  xmm0, xmm6, xmm0 }
  _R11 = &v163;
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
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintMemoryBudgetStats
==============
*/

float __fastcall CG_DrawDebug_PrintMemoryBudgetStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  signed __int64 v5; 
  void *v11; 
  const dvar_t *v22; 
  unsigned int v26; 
  const char *v27; 
  const vec4_t *color; 
  const dvar_t *v32; 
  const char *v33; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  __int64 v39; 
  const char *v40; 
  const vec4_t *v41; 
  const dvar_t *v44; 
  __int64 v45; 
  bool IsActive; 
  __int64 MinimumDesiredFreeShipMem; 
  __int64 v49; 
  int v50; 
  const char *v52; 
  const char *v53; 
  const char *label; 
  const dvar_t *v58; 
  __int64 MemreportTotalBudget; 
  const char *v60; 
  __int64 MemreportLevelFastfileBudget; 
  const char *v66; 
  const dvar_t *v70; 
  unsigned __int64 v71; 
  unsigned __int64 v72; 
  const char *v73; 
  const vec4_t *v74; 
  const dvar_t *v78; 
  bool enabled; 
  const dvar_t *v80; 
  const MemBudget_PollArray *CurrentBudgets; 
  unsigned int v82; 
  __int64 *v83; 
  MemBudget_PollArray *p_readings; 
  __int64 v85; 
  __int64 v86; 
  char v87; 
  unsigned __int8 ParentPollType; 
  __int64 v89; 
  char *v90; 
  const char *v91; 
  const char *v92; 
  const char *PollTypeName; 
  const char *v94; 
  const vec4_t *v95; 
  float fmt; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  vec4_t v130; 
  MemBudget_PollData outPoll; 
  __int64 v132[4]; 
  int v133; 
  __int16 v134; 

  v11 = alloca(v5);
  __asm
  {
    vmovaps [rsp+4118h+var_58], xmm6
    vmovaps [rsp+4118h+var_78], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1327, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1328, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  if ( MemBudget_Poll_FramesSinceLastUpdate() <= 0x3C )
  {
    __asm
    {
      vmovaps [rsp+4118h+var_68], xmm7
      vmovaps [rsp+4118h+var_88], xmm9
      vmovaps [rsp+4118h+var_98], xmm10
    }
    MemBudget_Poll_GetLastUpdateForHUD(&outPoll);
    v22 = DCONST_DVARBOOL_cg_drawStreamAOFSizes;
    if ( !DCONST_DVARBOOL_cg_drawStreamAOFSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamAOFSizes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm
    {
      vmovss  xmm9, [rsp+4118h+arg_20]
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  xmm7, cs:__real@3f400000
    }
    if ( v22->current.enabled )
    {
      v26 = ((unsigned __int64)outPoll.readings.pollValues[8] >> 20) + ((unsigned __int64)outPoll.readings.pollValues[9] >> 20);
      v27 = j_va("%umb/%umb", (unsigned __int64)outPoll.readings.pollValues[7] >> 20, v26);
      __asm
      {
        vmovss  [rsp+4118h+var_40D0], xmm10
        vmovss  [rsp+4118h+var_40D8], xmm7
        vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
      }
      color = &colorWhite;
      if ( v26 < 0x64 )
        color = &colorRed;
      __asm
      {
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v27, " Stm Alw/Opt+Free", color, v107, v115, v123, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    v32 = DCONST_DVARBOOL_cg_drawFFCLTSizes;
    if ( !DCONST_DVARBOOL_cg_drawFFCLTSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFFCLTSizes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      v33 = j_va("%umb/%umb/%umb", (unsigned __int64)outPoll.readings.pollValues[18] >> 20, (unsigned __int64)outPoll.readings.pollValues[19] >> 20, (unsigned __int64)(outPoll.readings.pollValues[26] + outPoll.readings.pollValues[28] + outPoll.readings.pollValues[29] + outPoll.readings.pollValues[27]) >> 20);
      __asm
      {
        vmovss  [rsp+4118h+var_40D0], xmm10
        vmovss  [rsp+4118h+var_40D8], xmm7
        vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v33, " FF Common/Level/Transient", &colorWhite, v108, v116, v124, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
    {
      v37 = DVARBOOL_db_forceUHDImageFlags;
      if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      if ( !v37->current.enabled )
      {
        v38 = DCONST_DVARBOOL_cg_drawXB3FreeTest;
        if ( !DCONST_DVARBOOL_cg_drawXB3FreeTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawXB3FreeTest") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        if ( v38->current.enabled )
        {
          v39 = MemBudget_Project_GetFreeXB3MemTest() / 0x100000;
          v40 = j_va("%dmb", (unsigned int)v39);
          v41 = &colorWhite;
          if ( (int)v39 < 300 )
            v41 = &colorRed;
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm8; posX
            vmovss  dword ptr [rsp+4118h+fmt], xmm9
          }
          CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v40, " XB3 Free Test", v41);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        v44 = DCONST_DVARBOOL_cg_drawXB3FreeShip;
        if ( !DCONST_DVARBOOL_cg_drawXB3FreeShip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawXB3FreeShip") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        if ( v44->current.enabled )
        {
          v45 = MemBudget_Project_GetFreeXB3MemShip() / 0x100000;
          IsActive = CL_TransientsWorldMP_IsActive();
          MinimumDesiredFreeShipMem = MemBudget_Project_GetMinimumDesiredFreeShipMem(IsActive);
          _RCX = &colorWhite;
          v49 = MinimumDesiredFreeShipMem / 0x100000;
          v50 = v49;
          if ( (int)v45 < (int)v49 )
            _RCX = &colorRed;
          __asm { vmovups xmm0, xmmword ptr [rcx] }
          v52 = "%dmb (>%d)";
          if ( (int)v45 < (int)v49 )
            v52 = "%dmb (<%d)";
          __asm { vmovups xmmword ptr [rsp+4118h+var_40B8], xmm0 }
          v53 = j_va(v52, (unsigned int)v45, (unsigned int)v49);
          __asm
          {
            vmovss  [rsp+4118h+var_40D0], xmm10
            vmovss  [rsp+4118h+var_40D8], xmm7
            vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
          }
          label = " XB3 Free Ship (GOOD)";
          __asm { vmovaps xmm3, xmm9; labelWidth }
          if ( (int)v45 < v50 )
            label = " XB3 Free Ship (BAD)";
          __asm
          {
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm8; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v53, label, &v130, v109, v117, v125, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        v58 = DCONST_DVARBOOL_cg_drawMemreportBudget;
        if ( !DCONST_DVARBOOL_cg_drawMemreportBudget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMemreportBudget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v58);
        if ( v58->current.enabled )
        {
          MemreportTotalBudget = MemBudget_Project_GetMemreportTotalBudget();
          v60 = j_va("%dmb", MemreportTotalBudget / 0x100000);
          __asm
          {
            vmovss  [rsp+4118h+var_40D0], xmm10
            vmovss  [rsp+4118h+var_40D8], xmm7
            vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
            vmovaps xmm3, xmm9; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm8; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v60, " Memreport Total Budget", &colorWhite, v110, v118, v126, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          MemreportLevelFastfileBudget = MemBudget_Project_GetMemreportLevelFastfileBudget();
          v66 = j_va("%dmb", MemreportLevelFastfileBudget / 0x100000);
          __asm
          {
            vmovss  [rsp+4118h+var_40D0], xmm10
            vmovss  [rsp+4118h+var_40D8], xmm7
            vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
            vmovaps xmm3, xmm9; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm8; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v66, " Memreport Level Fastfile", &colorWhite, v111, v119, v127, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
      }
    }
    v70 = DCONST_DVARBOOL_cg_drawTransientWorldSizes;
    if ( !DCONST_DVARBOOL_cg_drawTransientWorldSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientWorldSizes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    if ( v70->current.enabled && CL_TransientsWorldMP_IsActive() )
    {
      v71 = outPoll.readings.pollValues[27];
      v72 = CL_TransientsWorldMP_GetBudgetBytes() >> 20;
      v73 = j_va("%dmb/%dmb", (unsigned int)(v71 >> 20), (unsigned int)v72);
      __asm
      {
        vmovss  [rsp+4118h+var_40D0], xmm10
        vmovss  [rsp+4118h+var_40D8], xmm7
        vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
      }
      v74 = &colorWhite;
      if ( (int)v72 < 100 )
        v74 = &colorRed;
      __asm
      {
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v73, " MPWorld Used/Budget", v74, v112, v120, v128, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    v78 = DCONST_DVARBOOL_cg_drawBudgets;
    if ( !DCONST_DVARBOOL_cg_drawBudgets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBudgets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    enabled = v78->current.enabled;
    v80 = DCONST_DVARBOOL_cg_drawOverbudget;
    if ( !DCONST_DVARBOOL_cg_drawOverbudget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawOverbudget") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v80);
    if ( v80->current.enabled || enabled )
    {
      memset(v132, 0, sizeof(v132));
      v133 = 0;
      v134 = 0;
      CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
      *(_QWORD *)v130.v = CurrentBudgets;
      v82 = 0;
      v83 = v132;
      p_readings = &outPoll.readings;
      do
      {
        v85 = p_readings->pollValues[0];
        v86 = CurrentBudgets->pollValues[(unsigned __int8)v82];
        v87 = v86 && v85 > v86;
        ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)(unsigned __int8)v82);
        if ( ParentPollType != 38 )
          v87 |= *((_BYTE *)v132 + ParentPollType);
        *(_BYTE *)v83 = v87;
        if ( enabled || v87 )
        {
          v89 = v85 / 0x100000;
          if ( v86 )
            v90 = j_va("%dmb/%dmb", (unsigned int)v89, v86 / 0x100000);
          else
            v90 = j_va("%dmb", (unsigned int)v89);
          v91 = v90;
          v92 = "Budget";
          if ( v87 )
            v92 = "OVERBUDGET";
          PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v82);
          v94 = j_va(" %s %s", PollTypeName, v92);
          v95 = &colorWhite;
          __asm
          {
            vmovss  [rsp+4118h+var_40D0], xmm10
            vmovss  [rsp+4118h+var_40D8], xmm7
            vmovss  dword ptr [rsp+4118h+var_40E0], xmm7
          }
          if ( v87 )
            v95 = &colorRed;
          __asm
          {
            vmovaps xmm3, xmm9; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm8; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v91, v94, v95, v113, v121, v129, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        CurrentBudgets = *(const MemBudget_PollArray **)v130.v;
        ++v82;
        p_readings = (MemBudget_PollArray *)((char *)p_readings + 8);
        v83 = (__int64 *)((char *)v83 + 1);
      }
      while ( v82 < 0x26 );
    }
    __asm
    {
      vmovaps xmm10, [rsp+4118h+var_98]
      vmovaps xmm9, [rsp+4118h+var_88]
      vmovaps xmm7, [rsp+4118h+var_68]
      vmovaps xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f400000
      vmovss  xmm0, cs:__real@3f4ccccd
      vmovss  xmm3, [rsp+4118h+arg_20]; labelWidth
      vmovss  [rsp+4118h+var_40D0], xmm0
      vmovss  [rsp+4118h+var_40D8], xmm2
      vmovss  dword ptr [rsp+4118h+var_40E0], xmm2
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "Budgets", " Waiting for poll", &colorRed, v106, v114, v122, 0);
    __asm { vaddss  xmm0, xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+4118h+var_58]
    vmovaps xmm8, [rsp+4118h+var_78]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintMemoryStats
==============
*/

float __fastcall CG_DrawDebug_PrintMemoryStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  unsigned __int64 DevMemorySize; 
  unsigned int v23; 
  const char *v24; 
  const dvar_t *v31; 
  __int64 v38; 
  __int64 CommitSize; 
  const char *v40; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1253, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1254, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, [rsp+0B8h+width]
    vmovss  xmm9, cs:__real@3f4ccccd
    vmovss  xmm7, cs:__real@3f400000
  }
  if ( CL_TransientsWorldMP_IsActive() && !Com_FrontEnd_IsInFrontEnd() && Com_IsAnyLocalServerRunning() )
  {
    __asm
    {
      vmovss  [rsp+0B8h+var_70], xmm9
      vmovss  [rsp+0B8h+var_78], xmm7
      vmovss  [rsp+0B8h+var_80], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "TRWORLD STM WARNING", " LISTEN SERVER", &colorRed, v52, v58, v64, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  DevMemorySize = Mem_Paged_GetDevMemorySize();
  v23 = truncate_cast<unsigned int,unsigned __int64>(DevMemorySize >> 20);
  if ( v23 )
  {
    v24 = j_va("%dmb", v23);
    __asm
    {
      vmovss  [rsp+0B8h+var_70], xmm9
      vmovss  [rsp+0B8h+var_78], xmm7
      vmovss  [rsp+0B8h+var_80], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v24, " addt'l title mem", &colorLtBlue, v53, v59, v65, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  if ( Physics_GetDebugMemorySize() )
  {
    __asm
    {
      vmovss  [rsp+0B8h+var_70], xmm9
      vmovss  [rsp+0B8h+var_78], xmm7
      vmovss  [rsp+0B8h+var_80], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "PHYSICS DEBUG", " ENABLED", &colorLtBlue, v54, v60, v66, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
  {
    v31 = DVARBOOL_db_forceUHDImageFlags;
    if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled )
    {
      __asm
      {
        vmovss  [rsp+0B8h+var_70], xmm9
        vmovss  [rsp+0B8h+var_78], xmm7
        vmovss  [rsp+0B8h+var_80], xmm7
        vmovaps xmm3, xmm8; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm10; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "ENABLED", " FORCE UHD VFX IMAGES", &colorLtBlue, v55, v61, v67, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
  }
  if ( IWMem_HasHadInternalError() )
  {
    __asm
    {
      vmovss  [rsp+0B8h+var_70], xmm9
      vmovss  [rsp+0B8h+var_78], xmm7
      vmovss  [rsp+0B8h+var_80], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "IWMEM", " INTERNAL ERROR", &colorRed, v56, v62, v68, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  v38 = R_RT_GetCommitSizeMax() / 0x100000;
  CommitSize = R_RT_GetCommitSize();
  v40 = j_va("%umb/%umb", CommitSize / 0x100000, (unsigned int)v38);
  __asm
  {
    vmovss  [rsp+0B8h+var_70], xmm9
    vmovss  [rsp+0B8h+var_78], xmm7
    vmovss  [rsp+0B8h+var_80], xmm7
    vmovaps xmm3, xmm8; labelWidth
    vmovaps xmm2, xmm6; posY
    vmovaps xmm1, xmm10; posX
  }
  *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v40, " RT Total/Max", &colorWhite, v57, v63, v69, 0);
  _R11 = &v70;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vaddss  xmm0, xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintMessageRate
==============
*/

float __fastcall CG_DrawDebug_PrintMessageRate(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, float y, float width)
{
  __int64 v10; 
  unsigned __int8 ActiveGameMode; 
  int v12; 
  unsigned int v13; 
  ClConnection *v14; 
  unsigned int m_numPacketsReceived; 
  signed int v16; 
  const vec4_t *v17; 
  const char *v18; 
  char *label; 
  char *labela; 
  vec4_t *color; 
  vec4_t *colora; 
  float v34; 
  float v35; 
  float v36; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps xmm7, xmm3
  }
  v10 = localClientNum;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
  {
    if ( (unsigned int)v10 >= 2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, 2) )
        __debugbreak();
      LODWORD(colora) = 2;
      LODWORD(labela) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", labela, colora) )
        __debugbreak();
    }
    if ( clientUIActives[v10].frontEndSceneState[0] || CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v10) != CA_ACTIVE )
    {
      __asm { vmovss  xmm0, [rsp+98h+y] }
    }
    else
    {
      __asm { vmovaps [rsp+98h+var_28], xmm6 }
      v12 = Sys_Milliseconds();
      v13 = v12 - s_lastMsgPerSecDisplayTime;
      if ( v12 - s_lastMsgPerSecDisplayTime <= 1000 )
        goto LABEL_28;
      if ( (unsigned int)v10 >= 2 )
      {
        LODWORD(color) = 2;
        LODWORD(label) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", label, color) )
          __debugbreak();
      }
      if ( ClConnection::ms_connections[v10] )
        goto LABEL_18;
      if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
      if ( ClConnection::ms_connections[v10] )
      {
LABEL_18:
        if ( (unsigned int)v10 >= LODWORD(cl_maxLocalClients) )
        {
          *(float *)&color = cl_maxLocalClients;
          LODWORD(label) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", label, color) )
            __debugbreak();
        }
        if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
          __debugbreak();
        if ( !ClConnection::ms_connections[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
          __debugbreak();
        v14 = ClConnection::ms_connections[v10];
        s_lastMsgPerSecDisplayTime = v12;
        m_numPacketsReceived = v14->m_numPacketsReceived;
        LODWORD(v14) = 1000 * (m_numPacketsReceived - s_lastNumPacketsReceived);
        s_lastNumPacketsReceived = m_numPacketsReceived;
        v16 = (unsigned int)v14 / v13;
        s_msgsPerSec = v16;
      }
      else
      {
LABEL_28:
        v16 = s_msgsPerSec;
      }
      if ( v16 < 20 )
      {
        v17 = &colorYellow;
        if ( v16 < 10 )
          v17 = &colorRed;
      }
      else
      {
        v17 = &colorGreen;
      }
      v18 = j_va("%d", (unsigned int)v16);
      __asm
      {
        vmovss  xmm1, cs:__real@3f400000
        vmovss  xmm0, cs:__real@3f4ccccd
        vmovss  xmm6, [rsp+98h+y]
        vmovss  xmm3, [rsp+98h+width]; labelWidth
        vmovss  [rsp+98h+var_50], xmm0
        vmovss  [rsp+98h+var_58], xmm1
        vmovss  [rsp+98h+var_60], xmm1
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm7; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v18, " msgs/sec", v17, v34, v35, v36, 0);
      __asm
      {
        vaddss  xmm0, xmm6, xmm0
        vmovaps xmm6, [rsp+98h+var_28]
      }
    }
    __asm { vmovaps xmm7, [rsp+98h+var_38] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+98h+y]
      vmovaps xmm7, [rsp+98h+var_38]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintMisc
==============
*/

float __fastcall CG_DrawDebug_PrintMisc(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, float y, float width)
{
  const dvar_t *v13; 
  int FreeDObjCount; 
  unsigned int MaxDObjCount; 
  const char *v21; 
  const dvar_t *v26; 
  int TreeCurrentMemUsage; 
  int TreeMaxMemUsage; 
  const char *v29; 
  const char *v34; 
  const char *v39; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  int outNumAnimInfos; 
  int outAnimInfoUsage; 
  int outAnimInfoMaxUsage; 
  int outCustomNodeUsage; 
  int outCustomNodeMaxUsage[20]; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v13 = DVARINT_cg_drawFPS;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm3
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vmovss  xmm8, [rsp+0D8h+width]
    vmovss  xmm9, cs:__real@3f4ccccd
    vmovss  xmm7, cs:__real@3f400000
  }
  if ( v13->current.integer < 2 )
  {
    __asm { vmovss  xmm6, [rsp+0D8h+y] }
  }
  else
  {
    FreeDObjCount = Com_GetFreeDObjCount();
    MaxDObjCount = Com_GetMaxDObjCount();
    v21 = j_va("%i/%i", MaxDObjCount - FreeDObjCount, MaxDObjCount);
    __asm
    {
      vmovss  xmm2, [rsp+0D8h+y]; posY
      vmovss  [rsp+0D8h+var_90], xmm9
      vmovss  [rsp+0D8h+var_98], xmm7
      vmovss  [rsp+0D8h+var_A0], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm1, xmm10; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v21, " used DObjs", &colorWhite, v54, v58, v62, 0);
    __asm { vaddss  xmm6, xmm0, [rsp+0D8h+y] }
  }
  v26 = DCONST_DVARBOOL_xanim_drawMemoryStats;
  if ( !DCONST_DVARBOOL_xanim_drawMemoryStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawMemoryStats") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    TreeCurrentMemUsage = XAnimGetTreeCurrentMemUsage(&outAnimInfoUsage, &outCustomNodeUsage);
    TreeMaxMemUsage = XAnimGetTreeMaxMemUsage(&outAnimInfoMaxUsage, outCustomNodeMaxUsage);
    XAnimGetNumAllocatedAnimNodes(&outNumAnimInfos, (int *)&y);
    LODWORD(fmt) = outNumAnimInfos;
    v29 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(outAnimInfoUsage / 1024), (unsigned int)(outAnimInfoMaxUsage / 1024), (unsigned int)(100 * outAnimInfoUsage / outAnimInfoMaxUsage), fmt);
    __asm
    {
      vmovss  [rsp+0D8h+var_90], xmm9
      vmovss  [rsp+0D8h+var_98], xmm7
      vmovss  [rsp+0D8h+var_A0], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v29, " xaniminfo nodes", &colorWhite, v55, v59, v63, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    *(float *)&fmta = y;
    v34 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(outCustomNodeUsage / 1024), (unsigned int)(outCustomNodeMaxUsage[0] / 1024), (unsigned int)(100 * outCustomNodeUsage / outCustomNodeMaxUsage[0]), fmta);
    __asm
    {
      vmovss  [rsp+0D8h+var_90], xmm9
      vmovss  [rsp+0D8h+var_98], xmm7
      vmovss  [rsp+0D8h+var_A0], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v34, " xanim custom nodes", &colorWhite, v56, v60, v64, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    LODWORD(fmtb) = LODWORD(y) + outNumAnimInfos;
    v39 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(TreeCurrentMemUsage / 1024), (unsigned int)(TreeMaxMemUsage / 1024), (unsigned int)(100 * TreeCurrentMemUsage / TreeMaxMemUsage), fmtb);
    __asm
    {
      vmovss  [rsp+0D8h+var_90], xmm9
      vmovss  [rsp+0D8h+var_98], xmm7
      vmovss  [rsp+0D8h+var_A0], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v39, " xanim total nodes", &colorWhite, v57, v61, v65, 0);
    __asm { vaddss  xmm0, xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintPerfStats
==============
*/

float __fastcall CG_DrawDebug_PrintPerfStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  const dvar_t *v18; 
  CgDrawDebug *v20; 
  GfxPrimStatTotals *v24; 
  const vec4_t *v25; 
  int integer; 
  const char **v32; 
  unsigned int v38; 
  unsigned int *p_fxIndexCount; 
  __int64 v43; 
  bool v51; 
  bool v52; 
  const char *v59; 
  CgDrawDebug *v63; 
  int *p_primCount; 
  char *v69; 
  const char **v70; 
  unsigned int v73; 
  int v74; 
  __int64 v75; 
  const vec4_t *v80; 
  int v81; 
  unsigned int v88; 
  unsigned int v89; 
  const vec4_t *v93; 
  const char **v101; 
  unsigned int v107; 
  unsigned int *v108; 
  const vec4_t *v121; 
  const vec4_t *v126; 
  char v141; 
  char v142; 
  __int64 v159; 
  const vec4_t *BudgetLimitColor; 
  char *v220; 
  const char **v221; 
  unsigned int *v222; 
  char *v225; 
  char v228; 
  char v229; 
  unsigned int v230; 
  const vec4_t *v235; 
  char v242; 
  char v243; 
  const vec4_t *v248; 
  unsigned int v255; 
  int v256; 
  __int64 v257; 
  const vec4_t *v262; 
  int v263; 
  char v270; 
  char v271; 
  const vec4_t *v276; 
  char v283; 
  char v284; 
  const vec4_t *v289; 
  char v296; 
  char v297; 
  const vec4_t *v302; 
  unsigned int v309; 
  int v310; 
  __int64 v311; 
  const vec4_t *v315; 
  int v316; 
  int v325; 
  int v326; 
  int v327; 
  int v328; 
  int v329; 
  int v330; 
  unsigned int v331; 
  unsigned int *v332; 
  int v333; 
  signed int v334; 
  unsigned int v335; 
  ScreenPlacement *v336; 
  CgDrawDebug *v337; 
  unsigned int *v338; 
  const dvar_t *v373; 
  GfxDrawListType v377; 
  unsigned int *v380; 
  unsigned int v383; 
  int v384; 
  int v385; 
  int v386; 
  int v387; 
  unsigned int v388; 
  const char *DrawListTypeName; 
  const dvar_t *v390; 
  __int64 v396; 
  char *p_viewIndexCount; 
  __int64 v427; 
  const char **v428; 
  const vec4_t *v429; 
  float fmtb; 
  float fmtc; 
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
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  char *fmt; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float fmtbf; 
  float fmtbg; 
  float fmtbh; 
  float fmtbi; 
  float fmtbj; 
  char *fmta; 
  char *text; 
  char *texta; 
  vec4_t *color; 
  int maxVala; 
  int maxValb; 
  int maxValc; 
  int maxVald; 
  int maxVale; 
  int maxValf; 
  int maxValg; 
  int maxValh; 
  int maxVali; 
  int maxValj; 
  int maxValk; 
  int maxVall; 
  int maxValm; 
  int maxValn; 
  int maxValo; 
  int maxValp; 
  int maxValq; 
  int maxValr; 
  int maxVals; 
  int maxValt; 
  int maxValu; 
  int maxValv; 
  int maxValw; 
  int maxValx; 
  int maxValy; 
  int maxValz; 
  int maxValba; 
  int maxValbb; 
  int maxValbc; 
  int maxValbd; 
  int maxValbe; 
  __int64 maxVal; 
  int maxValbf; 
  int peakVala; 
  int peakValb; 
  int peakValc; 
  int peakVald; 
  int peakVale; 
  int peakValf; 
  int peakValg; 
  int peakValh; 
  int peakVali; 
  int peakValj; 
  int peakValk; 
  int peakVall; 
  int peakValm; 
  int peakValn; 
  int peakValo; 
  int peakValp; 
  int peakValq; 
  int peakValr; 
  int peakVals; 
  int peakValt; 
  int peakValu; 
  int peakValv; 
  int peakValw; 
  int peakValx; 
  int peakValy; 
  int peakValz; 
  int peakValba; 
  int peakValbb; 
  int peakValbc; 
  int peakValbd; 
  int peakValbe; 
  __int64 peakVal; 
  int peakValbf; 
  float hiThresholdPercentb; 
  float hiThresholdPercentc; 
  float hiThresholdPercentd; 
  float hiThresholdPercente; 
  float hiThresholdPercentf; 
  float hiThresholdPercentg; 
  float hiThresholdPercenth; 
  float hiThresholdPercenti; 
  float hiThresholdPercentj; 
  float hiThresholdPercentk; 
  float hiThresholdPercentl; 
  float hiThresholdPercentm; 
  float hiThresholdPercentn; 
  float hiThresholdPercento; 
  float hiThresholdPercentp; 
  float hiThresholdPercentq; 
  float hiThresholdPercentr; 
  float hiThresholdPercents; 
  float hiThresholdPercentt; 
  float hiThresholdPercentu; 
  float hiThresholdPercentv; 
  float hiThresholdPercentw; 
  float hiThresholdPercentx; 
  float hiThresholdPercenty; 
  float hiThresholdPercentz; 
  float hiThresholdPercentba; 
  float hiThresholdPercentbb; 
  float hiThresholdPercentbc; 
  float hiThresholdPercentbd; 
  float hiThresholdPercentbe; 
  float hiThresholdPercentbf; 
  float hiThresholdPercentbg; 
  float hiThresholdPercentbh; 
  float hiThresholdPercentbi; 
  float hiThresholdPercentbj; 
  float hiThresholdPercentbk; 
  float hiThresholdPercentbl; 
  float hiThresholdPercentbm; 
  float hiThresholdPercentbn; 
  float hiThresholdPercentbo; 
  float hiThresholdPercentbp; 
  float hiThresholdPercentbq; 
  __int64 hiThresholdPercent; 
  float hiThresholdPercentbr; 
  float hiThresholdPercentbs; 
  float hiThresholdPercentbt; 
  float hiThresholdPercentbu; 
  float hiThresholdPercentbv; 
  float hiThresholdPercentbw; 
  float hiThresholdPercentbx; 
  float hiThresholdPercentby; 
  float hiThresholdPercentbz; 
  float hiThresholdPercenta; 
  float forceNoLabel; 
  float forceNoLabela; 
  float forceNoLabelb; 
  float forceNoLabelc; 
  float forceNoLabeld; 
  float forceNoLabele; 
  float forceNoLabelf; 
  float forceNoLabelg; 
  float forceNoLabelh; 
  float forceNoLabeli; 
  float forceNoLabelj; 
  float forceNoLabelk; 
  float forceNoLabell; 
  float forceNoLabelm; 
  float forceNoLabeln; 
  float forceNoLabelo; 
  float forceNoLabelp; 
  float forceNoLabelq; 
  float forceNoLabelr; 
  float forceNoLabels; 
  int val; 
  char *vala; 
  int valb; 
  unsigned int *valc; 
  GfxPrimStatTotals *CurrentStatTracker; 
  char *v630; 
  int v631; 
  int v632; 
  __int64 v633; 
  __int64 v634; 
  int v635; 
  int v636; 
  unsigned int stats; 
  unsigned int *p_shadowIndexCount; 
  ScreenPlacement *scrPlacea; 
  GfxPrimStatTotals outTotals; 
  __int64 v642[5]; 
  char labelWidth[256]; 
  char dest[64]; 
  char v652; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v18 = DVARINT_cg_drawFPS;
  scrPlacea = (ScreenPlacement *)scrPlace;
  v20 = (CgDrawDebug *)draw;
  __asm
  {
    vmovss  [rsp+310h+var_2A0], xmm3
    vmovaps xmm6, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm15, xmm3
  }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer >= 3 )
  {
    CurrentStatTracker = (GfxPrimStatTotals *)R_GetCurrentStatTracker();
    v24 = CurrentStatTracker;
    if ( CurrentStatTracker )
    {
      __asm
      {
        vmovaps xmmword ptr [rsp+310h+var_68+8], xmm7
        vmovaps [rsp+310h+var_78+8], xmm8
        vmovaps xmmword ptr [rsp+310h+var_98+8], xmm10
        vmovaps [rsp+310h+var_A8+8], xmm11
        vmovaps [rsp+310h+var_B8+8], xmm12
        vmovaps [rsp+310h+var_C8+8], xmm13
      }
      RB_Stats_GatherPrimStatTotals(&outTotals);
      v25 = &colorRed;
      __asm
      {
        vmovss  xmm8, [rbp+210h+width]
        vmovss  xmm10, cs:__real@3f4ccccd
        vmovss  xmm7, cs:__real@3f400000
      }
      *CurrentStatTracker = outTotals;
      integer = r_gpShowStats->current.integer;
      if ( !integer )
      {
LABEL_94:
        if ( r_showStats->current.integer )
        {
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, "-Render Stats-", &colorGreenFaded);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          R_GetSurfPosStats(&stats);
          v325 = 0;
          v326 = 0;
          v327 = 0;
          v328 = 0;
          v329 = 0;
          v330 = 0;
          v331 = 0;
          p_shadowIndexCount = &CurrentStatTracker[19].shadowIndexCount;
          v332 = &CurrentStatTracker[19].shadowIndexCount;
          v333 = 0;
          do
          {
            v334 = v332[89];
            v333 += *(v332 - 89);
            v326 += v334;
            v325 += *v332;
            v327 += v332[267];
            v335 = v332[445];
            if ( v331 - 24 <= 0x28 )
            {
              v330 += v335;
            }
            else
            {
              v328 += v332[356];
              v329 += v335;
            }
            if ( (int)v332[178] < v334 )
              v332[178] = v334;
            ++v331;
            ++v332;
          }
          while ( v331 < 0x59 );
          v635 = v327;
          v336 = scrPlacea;
          v631 = v325;
          v337 = (CgDrawDebug *)draw;
          valb = v333;
          v338 = p_shadowIndexCount;
          if ( (signed int)CurrentStatTracker[126].viewIndexCount < v326 )
            CurrentStatTracker[126].viewIndexCount = v326;
          __asm
          {
            vmovss  xmm11, cs:__real@3f666666
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, " Skinned cache", CurrentStatTracker[1].geoIndexCount, 11796480, CurrentStatTracker[1].fxIndexCount, hiThresholdPercentbg, forceNoLabel);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmto, " Dynamic surfs", stats, 0x40000, -1, hiThresholdPercentbh, forceNoLabela);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, " SModelSurfs", CurrentStatTracker[1].viewIndexCount, -1, -1, hiThresholdPercentbi, forceNoLabelb);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          if ( r_showTriCounts->current.enabled )
          {
            __asm
            {
              vmovss  [rsp+310h+forceNoLabel], xmm7
              vmovss  [rsp+310h+hiThresholdPercent], xmm11
              vmovaps xmm3, xmm6; y
              vmovaps xmm2, xmm9; x
              vmovss  dword ptr [rsp+310h+fmt], xmm8
            }
            PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtq, " XModelTris", CurrentStatTracker[1].shadowIndexCount, -1, -1, hiThresholdPercentbj, forceNoLabelc);
            __asm { vaddss  xmm6, xmm6, xmm0 }
          }
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtr, " BSPSurfsSource", valb, -1, -1, hiThresholdPercentbk, forceNoLabeld);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmts, " BSPSurfsEmitted", v631, 0x10000, -1, hiThresholdPercentbl, forceNoLabele);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtt, " BSPSurfsLimit", v326, 0x10000, CurrentStatTracker[126].viewIndexCount, hiThresholdPercentbm, forceNoLabelf);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtu, " BSPIndirectArgs", v635, 0x10000, -1, hiThresholdPercentbn, forceNoLabelg);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtv, " BSPPrepassBatches", v328, -1, -1, hiThresholdPercentbo, forceNoLabelh);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtw, " BSPForwardBatches", v329, -1, -1, hiThresholdPercentbp, forceNoLabeli);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          *(double *)&_XMM0 = PrintRenderStat(draw, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtx, " BSPShadowBatches", v330, -1, -1, hiThresholdPercentbq, forceNoLabelj);
          __asm { vaddss  xmm13, xmm6, xmm0 }
          if ( r_showStats->current.integer >= 2 )
          {
            __asm { vsubss  xmm12, xmm9, cs:__real@437a0000 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%-35s %-5s %-5s %-5s %-5s %-5s %-5s %-5s", "BSP Drawlist", "  Src", " Emit", "Limit", " Peak", " Args", "Prepa", "Batch");
            v373 = DVARBOOL_cg_drawFPSLabels;
            if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v373);
            __asm
            {
              vmovaps xmm3, xmm7; xScale
              vmovaps xmm2, xmm15; y
              vmovaps xmm1, xmm12; x
              vmovss  dword ptr [rsp+310h+fmt], xmm7
            }
            CG_DrawDevString(v336, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmty, labelWidth, &colorGreenFaded, 6, cls.smallDevFont);
            v377 = DRAWLIST_FIRST;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
            }
            v380 = &CurrentStatTracker[108].shadowIndexCount;
            v632 = 0;
            __asm { vmulss  xmm1, xmm0, xmm10 }
            valc = &CurrentStatTracker[108].shadowIndexCount;
            __asm { vaddss  xmm6, xmm1, xmm15 }
            do
            {
              v636 = *(v380 - 445);
              if ( v636 > 0 )
              {
                v383 = *v380;
                v384 = *(v380 - 89);
                v385 = *(v380 - 178);
                v386 = *(v380 - 267);
                v387 = *(v380 - 356);
                v388 = *(v380 - 534);
                DrawListTypeName = R_GetDrawListTypeName(v377);
                LODWORD(hiThresholdPercent) = v383;
                LODWORD(peakVal) = v384;
                LODWORD(maxVal) = v385;
                LODWORD(color) = v386;
                LODWORD(text) = v387;
                LODWORD(fmt) = v636;
                Com_sprintf<256>((char (*)[256])labelWidth, "%-35s %5d %5d %5d %5d %5d %5d %5d", DrawListTypeName, v388, fmt, text, color, maxVal, peakVal, hiThresholdPercent);
                v390 = DVARBOOL_cg_drawFPSLabels;
                if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v390);
                __asm
                {
                  vmovaps xmm3, xmm7; xScale
                  vmovaps xmm2, xmm6; y
                  vmovaps xmm1, xmm12; x
                  vmovss  dword ptr [rsp+310h+fmt], xmm7
                }
                CG_DrawDevString(v336, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtz, labelWidth, &colorWhite, 6, cls.smallDevFont);
                v377 = v632;
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                }
                v380 = valc;
                __asm
                {
                  vmulss  xmm1, xmm0, xmm10
                  vaddss  xmm6, xmm6, xmm1
                }
              }
              ++v377;
              ++v380;
              v632 = v377;
              valc = v380;
            }
            while ( (unsigned int)v377 < DRAWLIST_BACKEND_COUNT );
            v338 = p_shadowIndexCount;
            v337 = (CgDrawDebug *)draw;
          }
          *(_QWORD *)&CurrentStatTracker[1].viewIndexCount = 0i64;
          v396 = 89i64;
          do
          {
            *(v338 - 89) = 0;
            *v338 = 0;
            v338[89] = 0;
            v338[267] = 0;
            v338[356] = 0;
            v338[445] = 0;
            ++v338;
            --v396;
          }
          while ( v396 );
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vmovaps xmm3, xmm13; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtba, " Tris - fx", (signed int)CurrentStatTracker->fxIndexCount / 3, -1, -1, hiThresholdPercentbr, forceNoLabelk);
          __asm
          {
            vaddss  xmm6, xmm13, xmm0
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbb, "-Lights-", &colorGreenFaded);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbc, " Primary lights", CurrentStatTracker[126].shadowIndexCount, -1, -1, hiThresholdPercentbs, forceNoLabell);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbd, " Disabled", CurrentStatTracker[126].primCount, -1, -1, hiThresholdPercentbt, forceNoLabelm);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbe, " Offloaded", CurrentStatTracker[127].geoIndexCount, -1, -1, hiThresholdPercentbu, forceNoLabeln);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbf, " Need dyn shadow", CurrentStatTracker[127].shadowIndexCount, -1, -1, hiThresholdPercentbv, forceNoLabelo);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbg, " Need static shadow", CurrentStatTracker[127].primCount, -1, -1, hiThresholdPercentbw, forceNoLabelp);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbh, " Dynamic omnis", CurrentStatTracker[127].fxIndexCount, -1, -1, hiThresholdPercentbx, forceNoLabelq);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbi, " Dynamic spots", CurrentStatTracker[127].viewIndexCount, -1, -1, hiThresholdPercentby, forceNoLabelr);
          __asm
          {
            vmovss  [rsp+310h+forceNoLabel], xmm7
            vmovss  [rsp+310h+hiThresholdPercent], xmm11
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; y
            vmovaps xmm2, xmm9; x
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          PrintRenderStat(v337, v336, *(float *)&_XMM2, *(float *)&_XMM3, fmtbj, " Shadowmaps count", CurrentStatTracker[128].geoIndexCount, -1, -1, hiThresholdPercentbz, forceNoLabels);
          v642[0] = (__int64)"draw worker";
          p_viewIndexCount = (char *)&CurrentStatTracker[128].viewIndexCount;
          v427 = 4i64;
          v642[1] = (__int64)"async2D";
          v428 = (const char **)v642;
          v642[2] = (__int64)"compute frontend";
          v642[3] = (__int64)"compute backend";
          __asm { vaddss  xmm6, xmm6, xmm0 }
          do
          {
            LODWORD(texta) = *((_DWORD *)p_viewIndexCount + 2);
            LODWORD(fmta) = *(_DWORD *)p_viewIndexCount;
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i pages - %i/%i descs", *((unsigned int *)p_viewIndexCount - 1), *((unsigned int *)p_viewIndexCount + 1), fmta, texta);
            Com_sprintf<64>((char (*)[64])dest, "Desc heap %s highest", *v428);
            v429 = &colorWhite;
            __asm { vmovss  [rsp+310h+hiThresholdPercent], xmm10 }
            if ( p_viewIndexCount[12] )
              v429 = &colorRed;
            __asm
            {
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(v336, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, dest, v429, *(const float *)&maxValbf, *(const float *)&peakValbf, hiThresholdPercenta, 0);
            p_viewIndexCount += 20;
            ++v428;
            __asm { vaddss  xmm6, xmm6, xmm0 }
            --v427;
          }
          while ( v427 );
        }
        else
        {
          v24[126].viewIndexCount = 0;
        }
        __asm
        {
          vmovaps xmm12, [rsp+310h+var_B8+8]
          vmovaps xmm11, [rsp+310h+var_A8+8]
          vmovaps xmm10, xmmword ptr [rsp+310h+var_98+8]
          vmovaps xmm8, [rsp+310h+var_78+8]
          vmovaps xmm7, xmmword ptr [rsp+310h+var_68+8]
          vmovaps xmm13, [rsp+310h+var_C8+8]
        }
        goto LABEL_127;
      }
      __asm { vmovaps [rsp+310h+var_D8+8], xmm14 }
      if ( integer == 1 )
      {
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm9; posX
          vmovss  dword ptr [rsp+310h+fmt], xmm8
        }
        CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, "-GPU Pipeline Stats-", &colorLtBlue);
        v32 = g_gpPassNames;
        __asm
        {
          vmovsd  xmm13, qword ptr cs:__xmm@7fffffffffffffff7fffffffffffffff
          vmovsd  xmm14, cs:__real@3cb0000000000000
          vmovsd  xmm11, cs:__real@3fd6666666666666
          vmovsd  xmm12, cs:__real@3eb33333ae147df4
          vmovsd  xmm15, cs:__real@3fe24f80753002ee
        }
        v38 = 0;
        p_fxIndexCount = &CurrentStatTracker[132].fxIndexCount;
        __asm { vaddss  xmm6, xmm6, xmm0 }
        while ( 1 )
        {
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, *v32, &colorPurple);
          v43 = *p_fxIndexCount;
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r8d
            vaddss  xmm6, xmm6, xmm0
          }
          if ( v38 )
          {
            __asm
            {
              vmulsd  xmm0, xmm1, xmm12
              vcomisd xmm0, xmm15
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v43, 873813i64);
            v59 = " GP Tris";
          }
          else
          {
            __asm
            {
              vmulsd  xmm0, xmm1, cs:__real@3e9999999999999a
              vcomisd xmm0, cs:__real@3fd86a0000000000
              vcomisd xmm0, cs:__real@3fcd4c0000000000
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v43, 2621440i64);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Tris (Prepass)", &colorWhite, *(const float *)&maxVala, *(const float *)&peakVala, hiThresholdPercentb, 0);
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2sd xmm1, xmm1, dword ptr [rbx]
              vaddss  xmm6, xmm6, xmm0
              vandpd  xmm0, xmm1, xmm13
              vcomisd xmm0, xmm14
            }
            if ( v51 || v52 )
            {
              v25 = &colorPink;
            }
            else
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, r8d
                vdivsd  xmm1, xmm0, xmm1
                vcomisd xmm1, cs:__real@3fe199999999999a
              }
              if ( v51 || v52 )
              {
                __asm { vcomisd xmm1, xmm11 }
                v25 = &colorYellow;
                if ( v51 || v52 )
                  v25 = &colorWhite;
              }
              else
              {
                v25 = &colorRed;
              }
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", p_fxIndexCount[10], 873813i64);
            v59 = " GP Tris (Lit Pass)";
          }
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, v59, v25, *(const float *)&maxValb, *(const float *)&peakValb, hiThresholdPercentc, 0);
          ++v38;
          ++p_fxIndexCount;
          ++v32;
          __asm { vaddss  xmm6, xmm6, xmm0 }
          if ( v38 >= 2 )
            break;
          v25 = &colorRed;
        }
        v63 = (CgDrawDebug *)draw;
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm9; posX
          vmovss  dword ptr [rsp+310h+fmt], xmm8
        }
        CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, "-Unified Geo Buffer Stats-", &colorLtBlue);
        __asm
        {
          vmovsd  xmm12, cs:__real@4057c00000000000
          vmovsd  xmm11, cs:__real@4055400000000000
        }
        v633 = 3i64;
        p_primCount = (int *)&CurrentStatTracker[142].primCount;
        v69 = (char *)((char *)g_unifiedBufferPhysPageMemLimit - (char *)CurrentStatTracker);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        v70 = g_unifiedBufferNames;
        do
        {
          Com_sprintf<256>((char (*)[256])labelWidth, "-%s-", *v70);
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption(v63, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmte, labelWidth, &colorMdCyan);
          v73 = *(int *)((char *)p_primCount + (_QWORD)v69 - 2856);
          v74 = *(p_primCount - 6);
          v51 = __CFSHR__(v73, 10);
          v75 = v73 >> 10;
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r9
            vaddss  xmm6, xmm6, xmm0
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v51 || (_DWORD)v75 == 0 )
          {
            v80 = &colorPink;
          }
          else
          {
            v81 = (v74 >> 31) & 0x3FF;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, eax
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( __CFSHR__(v81 + v74, 10) || v74 / 1024 == 0 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v80 = &colorYellow;
              if ( __CFSHR__(v81 + v74, 10) || v74 / 1024 == 0 )
                v80 = &colorWhite;
            }
            else
            {
              v80 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)(v74 / 1024), v75);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Buffer Memory", v80, *(const float *)&maxValc, *(const float *)&peakValc, hiThresholdPercentd, 0);
          v88 = *(int *)((char *)p_primCount + (_QWORD)v69 - 2856);
          v51 = __CFSHR__(v88, 10);
          v89 = v88 >> 10;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, rcx
            vaddss  xmm6, xmm6, xmm0
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v51 || v89 == 0 )
          {
            v93 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, eax
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( __CFSHR__(((*p_primCount >> 31) & 0x3FF) + *p_primCount, 10) || *p_primCount / 1024 == 0 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v93 = &colorYellow;
              if ( __CFSHR__(((*p_primCount >> 31) & 0x3FF) + *p_primCount, 10) || *p_primCount / 1024 == 0 )
                v93 = &colorWhite;
            }
            else
            {
              v93 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)(*p_primCount / 1024), v89);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Memory Watermark", v93, *(const float *)&maxVald, *(const float *)&peakVald, hiThresholdPercente, 0);
          v63 = (CgDrawDebug *)draw;
          ++v70;
          ++p_primCount;
          v52 = v633-- == 1;
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        while ( !v52 );
        __asm { vmovss  xmm15, [rsp+310h+var_2A0] }
        v20 = (CgDrawDebug *)draw;
      }
      else
      {
        if ( integer != 2 )
        {
LABEL_93:
          __asm { vmovaps xmm14, [rsp+310h+var_D8+8] }
          goto LABEL_94;
        }
        __asm
        {
          vaddss  xmm9, xmm9, cs:__real@c37a0000
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm9; posX
          vmovss  dword ptr [rsp+310h+fmt], xmm8
        }
        CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, "-GPU Pipeline Stats-", &colorLtBlue);
        v101 = g_gpPassNames;
        __asm
        {
          vmovsd  xmm13, qword ptr cs:__xmm@7fffffffffffffff7fffffffffffffff
          vmovsd  xmm14, cs:__real@3cb0000000000000
          vmovsd  xmm12, cs:__real@3fe199999999999a
          vmovsd  xmm11, cs:__real@3fd6666666666666
          vmovsd  xmm15, cs:__real@4144000000000000
        }
        v107 = 0;
        val = 0;
        v108 = &CurrentStatTracker[132].fxIndexCount;
        __asm { vaddss  xmm6, xmm6, xmm0 }
        do
        {
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, *v101, &colorPurple);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          if ( v107 )
          {
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *v108, 2621440i64);
            __asm
            {
              vmovsd  xmm3, cs:__real@3fe24f80753002ee; hiThreshold
              vmovsd  xmm2, cs:__real@3fd4820083400348; medThreshold
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, ebx; val
              vmovaps xmm1, xmm15; maxVal
            }
            BudgetLimitColor = GetBudgetLimitColor(*(const long double *)&_XMM0, *(const long double *)&_XMM1, *(const long double *)&_XMM2, *(const long double *)&_XMM3);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Tris", BudgetLimitColor, *(const float *)&maxVall, *(const float *)&peakVall, hiThresholdPercentm, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[2], 0x40000i64);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Clusters", &colorWhite, *(const float *)&maxValm, *(const float *)&peakValm, hiThresholdPercentn, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[4], v108[6]);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, *(const float *)&maxValn, *(const float *)&peakValn, hiThresholdPercento, 0);
            v159 = v108[8];
          }
          else
          {
            __asm
            {
              vmovaps xmm3, xmm6; posY
              vmovaps xmm2, xmm9; posX
              vmovss  dword ptr [rsp+310h+fmt], xmm8
            }
            *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmth, "Prepass", &colorLtBlue);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *v108, 2621440i64);
            __asm
            {
              vmovsd  xmm3, cs:__real@3fd86a0000000000; hiThreshold
              vmovsd  xmm2, cs:__real@3fcd4c0000000000; medThreshold
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, ebx; val
              vmovaps xmm1, xmm15; maxVal
            }
            v121 = GetBudgetLimitColor(*(const long double *)&_XMM0, *(const long double *)&_XMM1, *(const long double *)&_XMM2, *(const long double *)&_XMM3);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Tris", v121, *(const float *)&maxVale, *(const float *)&peakVale, hiThresholdPercentf, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[2], 0x40000i64);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
            }
            v126 = &colorWhite;
            __asm
            {
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Clusters", &colorWhite, *(const float *)&maxValf, *(const float *)&peakValf, hiThresholdPercentg, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[4], v108[6]);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, *(const float *)&maxValg, *(const float *)&peakValg, hiThresholdPercenth, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[8], v108[22]);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batches Drawn/Total", &colorWhite, *(const float *)&maxValh, *(const float *)&peakValh, hiThresholdPercenti, 0);
            __asm
            {
              vaddss  xmm6, xmm6, xmm0
              vmovaps xmm3, xmm6; posY
              vmovaps xmm2, xmm9; posX
              vmovss  dword ptr [rsp+310h+fmt], xmm8
            }
            CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmti, "Lit Pass", &colorLtBlue);
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2sd xmm1, xmm1, dword ptr [rsi]
              vaddss  xmm6, xmm6, xmm0
              vandpd  xmm0, xmm1, xmm13
              vcomisd xmm0, xmm14
            }
            if ( v141 | v142 )
            {
              v126 = &colorPink;
            }
            else
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2sd xmm0, xmm0, r8d
                vdivsd  xmm1, xmm0, xmm1
                vcomisd xmm1, xmm12
              }
              if ( v141 | v142 )
              {
                __asm { vcomisd xmm1, xmm11 }
                if ( !(v141 | v142) )
                  v126 = &colorYellow;
              }
              else
              {
                v126 = &colorRed;
              }
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[10], 873813i64);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Tris", v126, *(const float *)&maxVali, *(const float *)&peakVali, hiThresholdPercentj, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[12], 0x40000i64);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Clusters", &colorWhite, *(const float *)&maxValj, *(const float *)&peakValj, hiThresholdPercentk, 0);
            __asm { vaddss  xmm6, xmm6, xmm0 }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[14], v108[16]);
            __asm
            {
              vmovss  [rsp+310h+hiThresholdPercent], xmm10
              vmovss  [rsp+310h+peakVal], xmm7
              vmovss  [rsp+310h+maxVal], xmm7
              vmovaps xmm3, xmm8; labelWidth
              vmovaps xmm2, xmm6; posY
              vmovaps xmm1, xmm9; posX
            }
            CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, *(const float *)&maxValk, *(const float *)&peakValk, hiThresholdPercentl, 0);
            v159 = v108[18];
          }
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v159, v108[22]);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batches Drawn/Total", &colorWhite, *(const float *)&maxValo, *(const float *)&peakValo, hiThresholdPercentp, 0);
          __asm
          {
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, "---", &colorLtBlue);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[20], 0x10000i64);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP SubMeshes", &colorWhite, *(const float *)&maxValp, *(const float *)&peakValp, hiThresholdPercentq, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[22], 0x4000i64);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Batches", &colorWhite, *(const float *)&maxValq, *(const float *)&peakValq, hiThresholdPercentr, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[24], g_gpTypedSurfLimits[2]);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Static Surfs", &colorWhite, *(const float *)&maxValr, *(const float *)&peakValr, hiThresholdPercents, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[26], g_gpTypedSurfLimits[0]);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Rigid Surfs", &colorWhite, *(const float *)&maxVals, *(const float *)&peakVals, hiThresholdPercentt, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[28], g_gpTypedSurfLimits[1]);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Skinned Surfs", &colorWhite, *(const float *)&maxValt, *(const float *)&peakValt, hiThresholdPercentu, 0);
          __asm { vaddss  xmm6, xmm6, xmm0 }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v108[30], 0x10000i64);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " GP Surfs Total", &colorWhite, *(const float *)&maxValu, *(const float *)&peakValu, hiThresholdPercentv, 0);
          v107 = val + 1;
          ++v108;
          ++v101;
          val = v107;
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        while ( v107 < 2 );
        __asm
        {
          vaddss  xmm9, xmm9, cs:__real@437a0000
          vmovss  xmm15, [rsp+310h+var_2A0]
          vmovaps xmm3, xmm15; posY
          vmovaps xmm2, xmm9; posX
          vmovss  dword ptr [rsp+310h+fmt], xmm8
        }
        *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(v20, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, "-Unified Geo Buffer Stats-", &colorLtBlue);
        __asm { vaddss  xmm6, xmm0, xmm15 }
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[138].shadowIndexCount, 0xFFFFi64);
        __asm
        {
          vmovss  [rsp+310h+hiThresholdPercent], xmm10
          vmovss  [rsp+310h+peakVal], xmm7
          vmovss  [rsp+310h+maxVal], xmm7
          vmovaps xmm3, xmm8; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm9; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " UGB Resident XSurfs", &colorWhite, *(const float *)&maxValv, *(const float *)&peakValv, hiThresholdPercentw, 0);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[138].primCount, 0xFFFFi64);
        __asm
        {
          vmovss  [rsp+310h+hiThresholdPercent], xmm10
          vmovss  [rsp+310h+peakVal], xmm7
          vmovss  [rsp+310h+maxVal], xmm7
          vmovaps xmm3, xmm8; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm9; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " UGB Delta XSurfs", &colorWhite, *(const float *)&maxValw, *(const float *)&peakValw, hiThresholdPercentx, 0);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[139].geoIndexCount, 0xFFFFi64);
        __asm
        {
          vmovss  [rsp+310h+hiThresholdPercent], xmm10
          vmovss  [rsp+310h+peakVal], xmm7
          vmovss  [rsp+310h+maxVal], xmm7
          vmovaps xmm3, xmm8; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm9; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " UGB XSurfs", &colorWhite, *(const float *)&maxValx, *(const float *)&peakValx, hiThresholdPercenty, 0);
        v220 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
        v221 = g_unifiedBufferNames;
        v630 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
        v222 = &CurrentStatTracker[140].viewIndexCount;
        __asm
        {
          vaddss  xmm6, xmm6, xmm0
          vmovsd  xmm12, cs:__real@4057c00000000000
          vmovsd  xmm11, cs:__real@4055400000000000
        }
        v634 = 3i64;
        vala = (char *)((char *)g_unifiedBufferPhysPageLimit - (char *)CurrentStatTracker);
        v225 = (char *)((char *)g_unifiedBufferPhysPageMemLimit - (char *)CurrentStatTracker);
        do
        {
          Com_sprintf<256>((char (*)[256])labelWidth, "-%s-", *v221);
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+310h+fmt], xmm8
          }
          CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, labelWidth, &colorMdCyan);
          v230 = *(unsigned int *)((char *)v222 + (_QWORD)v220 - 2808);
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, rax
            vaddss  xmm6, xmm6, xmm0
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v228 | v229 )
          {
            v235 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, r8d
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( v228 | v229 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v235 = &colorYellow;
              if ( v228 | v229 )
                v235 = &colorWhite;
            }
            else
            {
              v235 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v222[3], v230);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Virt Pages In Use", v235, *(const float *)&maxValy, *(const float *)&peakValy, hiThresholdPercentz, 0);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm6, xmm6, xmm0
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v242 | v243 )
          {
            v248 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, dword ptr [rbx]
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( v242 | v243 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v248 = &colorYellow;
              if ( v242 | v243 )
                v248 = &colorWhite;
            }
            else
            {
              v248 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *v222, *(unsigned int *)((char *)v222 + (_QWORD)vala - 2808));
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Pages In Use", v248, *(const float *)&maxValz, *(const float *)&peakValz, hiThresholdPercentba, 0);
          v255 = *(unsigned int *)((char *)v222 + (_QWORD)v225 - 2808);
          v256 = v222[6];
          v51 = __CFSHR__(v255, 10);
          v257 = v255 >> 10;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r9
            vaddss  xmm6, xmm6, xmm0
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v51 || (_DWORD)v257 == 0 )
          {
            v262 = &colorPink;
          }
          else
          {
            v263 = (v256 >> 31) & 0x3FF;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, eax
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( __CFSHR__(v263 + v256, 10) || v256 / 1024 == 0 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v262 = &colorYellow;
              if ( __CFSHR__(v263 + v256, 10) || v256 / 1024 == 0 )
                v262 = &colorWhite;
            }
            else
            {
              v262 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)(v256 / 1024), v257);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Buffer Memory", v262, *(const float *)&maxValba, *(const float *)&peakValba, hiThresholdPercentbb, 0);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm6, xmm6, xmm0
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v270 | v271 )
          {
            v276 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, r8d
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( v270 | v271 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v276 = &colorYellow;
              if ( v270 | v271 )
                v276 = &colorWhite;
            }
            else
            {
              v276 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *(v222 - 6), *(unsigned int *)((char *)v222 + (_QWORD)v630 - 2808));
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Allocated Virt Pages", v276, *(const float *)&maxValbb, *(const float *)&peakValbb, hiThresholdPercentbc, 0);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm6, xmm6, xmm0
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v283 | v284 )
          {
            v289 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, r8d
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( v283 | v284 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v289 = &colorYellow;
              if ( v283 | v284 )
                v289 = &colorWhite;
            }
            else
            {
              v289 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *(v222 - 3), *(unsigned int *)((char *)v222 + (_QWORD)v630 - 2808));
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Virt Pages Paged In", v289, *(const float *)&maxValbc, *(const float *)&peakValbc, hiThresholdPercentbd, 0);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm6, xmm6, xmm0
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v296 | v297 )
          {
            v302 = &colorPink;
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, r8d
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( v296 | v297 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v302 = &colorYellow;
              if ( v296 | v297 )
                v302 = &colorWhite;
            }
            else
            {
              v302 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v222[9], *(unsigned int *)((char *)v222 + (_QWORD)vala - 2808));
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Page Watermark", v302, *(const float *)&maxValbd, *(const float *)&peakValbd, hiThresholdPercentbe, 0);
          v309 = *(unsigned int *)((char *)v222 + (_QWORD)v225 - 2808);
          v310 = v222[12];
          v51 = __CFSHR__(v309, 10);
          v311 = v309 >> 10;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r9
            vaddss  xmm6, xmm6, xmm0
            vandpd  xmm0, xmm1, xmm13
            vcomisd xmm0, xmm14
          }
          if ( v51 || (_DWORD)v311 == 0 )
          {
            v315 = &colorPink;
          }
          else
          {
            v316 = (v310 >> 31) & 0x3FF;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, eax
              vdivsd  xmm1, xmm0, xmm1
              vcomisd xmm1, xmm12
            }
            if ( __CFSHR__(v316 + v310, 10) || v310 / 1024 == 0 )
            {
              __asm { vcomisd xmm1, xmm11 }
              v315 = &colorYellow;
              if ( __CFSHR__(v316 + v310, 10) || v310 / 1024 == 0 )
                v315 = &colorWhite;
            }
            else
            {
              v315 = &colorRed;
            }
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)(v310 / 1024), v311);
          __asm
          {
            vmovss  [rsp+310h+hiThresholdPercent], xmm10
            vmovss  [rsp+310h+peakVal], xmm7
            vmovss  [rsp+310h+maxVal], xmm7
            vmovaps xmm3, xmm8; labelWidth
            vmovaps xmm2, xmm6; posY
            vmovaps xmm1, xmm9; posX
          }
          CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, labelWidth, " Phys Memory Watermark", v315, *(const float *)&maxValbe, *(const float *)&peakValbe, hiThresholdPercentbf, 0);
          v220 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
          ++v221;
          ++v222;
          v52 = v634-- == 1;
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        while ( !v52 );
        v20 = (CgDrawDebug *)draw;
      }
      v24 = CurrentStatTracker;
      goto LABEL_93;
    }
  }
LABEL_127:
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v652;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-68h]
    vmovaps xmm15, xmmword ptr [r11-0C8h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintRtStats
==============
*/

float __fastcall CG_DrawDebug_PrintRtStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  const char *v25; 
  const char *v29; 
  const char *v33; 
  const char *v38; 
  const char *v42; 
  float v53; 
  char *v54; 
  char *v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  R_RT_Tracking_DebugDrawStats outDebugDrawStats; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  if ( R_RT_Tracking_AsyncGetDebugDrawStats(&outDebugDrawStats) )
  {
    __asm
    {
      vmovaps [rsp+168h+var_38], xmm7
      vmovaps [rsp+168h+var_58], xmm9
      vmovss  xmm9, [rsp+168h+width]
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+168h+var_148], xmm9
      vmovaps [rsp+168h+var_68], xmm10
    }
    CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v53, "-RT Stats-", &colorGreenFaded);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  [rsp+168h+var_120], xmm10
      vmovss  [rsp+168h+var_128], xmm7
      vmovss  [rsp+168h+var_130], xmm7
      vaddss  xmm6, xmm6, xmm0
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "val/min/max/avg", (const char *)&queryFormat.fmt + 3, &colorWhiteFaded, v56, v62, v68, 0);
    LODWORD(v54) = outDebugDrawStats.m_surfaces.m_avg;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v25 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_surfaces.m_val, outDebugDrawStats.m_surfaces.m_min, outDebugDrawStats.m_surfaces.m_max, v54);
    __asm
    {
      vmovss  [rsp+168h+var_120], xmm10
      vmovss  [rsp+168h+var_128], xmm7
      vmovss  [rsp+168h+var_130], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v25, " surfaces", &colorWhite, v57, v63, v69, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( outDebugDrawStats.m_committedMB.m_val || __PAIR64__(outDebugDrawStats.m_committedMB.m_min, 0) != outDebugDrawStats.m_committedMB.m_max || outDebugDrawStats.m_committedMB.m_avg )
    {
      LODWORD(v55) = outDebugDrawStats.m_committedMB.m_avg;
      v29 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_committedMB.m_val, outDebugDrawStats.m_committedMB.m_min, outDebugDrawStats.m_committedMB.m_max, v55);
      __asm
      {
        vmovss  [rsp+168h+var_120], xmm10
        vmovss  [rsp+168h+var_128], xmm7
        vmovss  [rsp+168h+var_130], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v29, " MB commit", &colorWhite, v58, v64, v70, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    if ( outDebugDrawStats.m_heapReservedMB && (outDebugDrawStats.m_heapCommittedMB.m_val || __PAIR64__(outDebugDrawStats.m_heapCommittedMB.m_min, 0) != outDebugDrawStats.m_heapCommittedMB.m_max || outDebugDrawStats.m_heapCommittedMB.m_avg) )
    {
      LODWORD(v55) = outDebugDrawStats.m_heapCommittedMB.m_avg;
      v33 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_heapCommittedMB.m_val, outDebugDrawStats.m_heapCommittedMB.m_min, outDebugDrawStats.m_heapCommittedMB.m_max, v55);
      __asm
      {
        vmovss  [rsp+168h+var_120], xmm10
        vmovss  [rsp+168h+var_128], xmm7
        vmovss  [rsp+168h+var_130], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v33, " MB heap commit", &colorWhite, v59, v65, v71, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v38 = j_va("%4d", outDebugDrawStats.m_heapReservedMB);
      __asm
      {
        vmovss  [rsp+168h+var_120], xmm10
        vmovss  [rsp+168h+var_128], xmm7
        vmovss  [rsp+168h+var_130], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v38, " MB heap reserve", &colorWhite, v60, v66, v72, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    if ( outDebugDrawStats.m_deadCommittedMB.m_val || __PAIR64__(outDebugDrawStats.m_deadCommittedMB.m_min, 0) != outDebugDrawStats.m_deadCommittedMB.m_max || outDebugDrawStats.m_deadCommittedMB.m_avg )
    {
      LODWORD(v55) = outDebugDrawStats.m_deadCommittedMB.m_avg;
      v42 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_deadCommittedMB.m_val, outDebugDrawStats.m_deadCommittedMB.m_min, outDebugDrawStats.m_deadCommittedMB.m_max, v55);
      __asm
      {
        vmovss  [rsp+168h+var_120], xmm10
        vmovss  [rsp+168h+var_128], xmm7
        vmovss  [rsp+168h+var_130], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm8; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v42, " MB dead commit", &colorWhite, v61, v67, v73, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    __asm
    {
      vmovaps xmm10, [rsp+168h+var_68]
      vmovaps xmm9, [rsp+168h+var_58]
      vmovaps xmm7, [rsp+168h+var_38]
    }
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+168h+var_28]
    vmovaps xmm8, [rsp+168h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintServerProfile
==============
*/

float __fastcall CG_DrawDebug_PrintServerProfile(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, float y, float width)
{
  unsigned int m_serverFrameDuration; 
  char v22; 
  char v27; 
  const vec4_t *v29; 
  const vec4_t *v30; 
  const dvar_t *v34; 
  const char *v50; 
  const char *v73; 
  const char *v96; 
  const char *v111; 
  const char *v132; 
  const char *v146; 
  const char *v151; 
  const char *v169; 
  const char *v189; 
  char *fmt; 
  float fmta; 
  char *fmtb; 
  float fmtc; 
  char *fmtd; 
  float fmte; 
  float fmtf; 
  char *fmtg; 
  float fmth; 
  char *fmti; 
  float fmtj; 
  char *text; 
  char *texta; 
  char *textb; 
  char *textc; 
  char *label; 
  char *labela; 
  vec4_t *color; 
  float colora; 
  float colorb; 
  float colorc; 
  __int64 v215; 
  float v216; 
  float v217; 
  float v218; 
  float v219; 
  float v220; 
  float v221; 

  __asm
  {
    vmovaps [rsp+128h+var_C8], xmm15
    vmovaps xmm15, xmm3
  }
  if ( Com_IsAnyLocalServerRunning() && CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
  {
    if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
      __debugbreak();
    m_serverFrameDuration = cls.m_serverFrameDuration;
    _RAX = SV_GetProfileTimes();
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RBX = (unsigned int *)_RAX;
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vcomiss xmm1, xmm0
    }
    if ( v22 | v27 )
    {
      __asm { vmovss  xmm0, [rsp+128h+y] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rax] }
      v29 = &colorRed;
      v30 = &colorRed;
      __asm
      {
        vmovaps [rsp+128h+var_B8], xmm14
        vxorps  xmm14, xmm14, xmm14
        vcvtsi2ss xmm14, xmm14, r14d
        vcomiss xmm14, xmm0
        vmovss  xmm0, dword ptr [rax+2Ch]
      }
      v34 = DVARINT_cg_drawFPS;
      if ( !v22 )
        v30 = &colorWhite;
      __asm { vcomiss xmm14, xmm0 }
      if ( !v22 )
        v29 = &colorWhite;
      if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
        __debugbreak();
      __asm
      {
        vmovaps [rsp+128h+var_38], xmm6
        vmovaps [rsp+128h+var_48], xmm7
      }
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.integer < 2 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
        }
        v169 = j_va("%.0f (%i)", _RDX, m_serverFrameDuration);
        __asm
        {
          vmovss  xmm7, [rsp+128h+width]
          vmovss  xmm3, [rsp+128h+y]; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm7
        }
        *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v169, " server ms", v30);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vaddss  xmm6, xmm0, [rsp+128h+y]
          vmovss  xmm0, dword ptr [rbx+44h]
          vsubss  xmm2, xmm1, xmm0
          vmovss  xmm1, dword ptr [rbx+5Ch]
          vsubss  xmm0, xmm2, xmm1
          vmovss  xmm2, dword ptr [rbx+5Ch]
          vcvtss2sd xmm4, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vcvtss2sd xmm3, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm0, xmm0
          vmovq   rdx, xmm1
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+128h+fmt], xmm4
        }
        v189 = j_va("%.2f (%.2f %.2f %.2f)", _RDX, _R8, _R9, fmti);
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm7
        }
        CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, v189, " vm ms", v29);
        __asm { vaddss  xmm0, xmm6, xmm0 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+20h]
          vmovss  xmm7, cs:__real@3f800000
          vmovaps [rsp+128h+var_58], xmm8
          vmaxss  xmm1, xmm0, xmm7
          vmovss  xmm0, dword ptr [rbx+24h]
          vmovss  xmm2, dword ptr [rbx]
          vdivss  xmm1, xmm0, xmm1
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vcvtss2sd xmm4, xmm1, xmm1
          vmovss  xmm1, dword ptr [rbx+8]
          vmovaps [rsp+128h+var_68], xmm9
          vcvtss2sd xmm3, xmm2, xmm2
          vmovaps [rsp+128h+var_78], xmm10
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm0, xmm0
          vmovaps [rsp+128h+var_88], xmm11
          vmovq   rdx, xmm1
          vmovaps [rsp+128h+var_98], xmm12
        }
        LODWORD(text) = m_serverFrameDuration;
        __asm
        {
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+128h+fmt], xmm4
          vmovaps [rsp+128h+var_A8], xmm13
        }
        v50 = j_va("(%.0f-%.0f) %.2f: %.2f (%i)", _RDX, _R8, _R9, fmt, text);
        __asm
        {
          vmovss  xmm13, [rsp+128h+width]
          vmovss  xmm3, [rsp+128h+y]; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm13
        }
        *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v50, " sv ms/frame", v30);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+28h]
          vaddss  xmm8, xmm0, [rsp+128h+y]
          vmaxss  xmm2, xmm1, xmm7
          vdivss  xmm7, xmm7, xmm2
          vmulss  xmm12, xmm7, dword ptr [rbx+38h]
          vmulss  xmm1, xmm7, dword ptr [rbx+3Ch]
          vmulss  xmm0, xmm7, dword ptr [rbx+40h]
          vcvtss2sd xmm4, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vcvtss2sd xmm5, xmm1, xmm1
          vmovss  xmm1, dword ptr [rbx+34h]
          vcvtss2sd xmm3, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+30h]
          vcvtss2sd xmm2, xmm1, xmm1
          vmovsd  [rsp+128h+label], xmm4
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+128h+text], xmm5
          vcvtss2sd xmm6, xmm12, xmm12
          vmovq   rdx, xmm1
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+128h+fmt], xmm6
        }
        v73 = j_va("(%.2f-%.2f) %.2f (%.2f: %.2f-%.2f)", _RDX, _R8, _R9, fmtb, texta, label);
        __asm
        {
          vmovaps xmm3, xmm8; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm13
        }
        CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v73, " vm frame ms", v29);
        __asm
        {
          vmulss  xmm11, xmm7, dword ptr [rbx+48h]
          vmulss  xmm2, xmm7, dword ptr [rbx+54h]
          vmulss  xmm1, xmm7, dword ptr [rbx+58h]
          vmulss  xmm9, xmm7, dword ptr [rbx+60h]
          vaddss  xmm10, xmm8, xmm0
          vmovss  xmm0, dword ptr [rbx+5Ch]
          vcvtss2sd xmm4, xmm0, xmm0
          vcvtss2sd xmm8, xmm9, xmm9
          vcvtss2sd xmm5, xmm1, xmm1
          vcvtss2sd xmm6, xmm2, xmm2
          vcvtss2sd xmm7, xmm11, xmm11
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  xmm1, dword ptr [rbx+50h]
          vmovsd  [rsp+128h+var_E8], xmm8
          vmovsd  [rsp+128h+color], xmm4
          vcvtss2sd xmm3, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+4Ch]
          vcvtss2sd xmm2, xmm1, xmm1
          vmovsd  [rsp+128h+label], xmm5
          vcvtss2sd xmm1, xmm0, xmm0
          vmovq   rdx, xmm1
          vmovsd  [rsp+128h+text], xmm6
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+128h+fmt], xmm7
        }
        v96 = j_va("(%.2f-%.2f) %.2f (%.2f: %.2f-%.2f) (%.2f: %.2f)", _RDX, _R8, _R9, fmtd, textb, labela, color, v215);
        __asm
        {
          vmovaps xmm3, xmm10; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm13
        }
        CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v96, " vm builtin ms", v29);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+2Ch]
          vmovss  xmm1, dword ptr [rbx+44h]
          vsubss  xmm3, xmm2, xmm1
          vmovss  xmm1, dword ptr [rbx+5Ch]
          vaddss  xmm6, xmm10, xmm0
          vsubss  xmm0, xmm12, xmm11
          vsubss  xmm2, xmm0, xmm9
          vsubss  xmm0, xmm3, xmm1
          vcvtss2sd xmm1, xmm0, xmm0
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   rdx, xmm1
          vmovq   r8, xmm2
        }
        v111 = j_va("%.2f: %.2f", _RDX, _R8);
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm15; posX
          vmovss  dword ptr [rsp+128h+fmt], xmm13
        }
        CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v111, " vm only ms", v29);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+68h]
          vaddss  xmm6, xmm6, xmm0
          vmovss  xmm0, dword ptr [rbx+64h]
          vaddss  xmm2, xmm1, xmm0
          vaddss  xmm0, xmm2, dword ptr [rbx+6Ch]
          vaddss  xmm0, xmm0, dword ptr [rbx+70h]
          vmovss  xmm1, dword ptr [rbx+70h]
          vcvtss2sd xmm5, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+6Ch]
          vcvtss2sd xmm4, xmm1, xmm1
          vmovss  xmm1, dword ptr [rbx+68h]
          vcvtss2sd xmm3, xmm0, xmm0
          vmovss  xmm0, dword ptr [rbx+64h]
          vcvtss2sd xmm2, xmm1, xmm1
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+128h+text], xmm5
          vmovq   rdx, xmm1
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+128h+fmt], xmm4
        }
        v132 = j_va("(%.0f %.0f %.0f %.0f) %.2f", _RDX, _R8, _R9, fmtg, textc);
        __asm
        {
          vmovss  xmm8, cs:__real@3f400000
          vmovss  xmm7, cs:__real@3f4ccccd
          vmovss  [rsp+128h+var_E0], xmm7
          vmovss  dword ptr [rsp+128h+var_E8], xmm8
          vmovss  dword ptr [rsp+128h+color], xmm8
          vmovaps xmm3, xmm13; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm15; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v132, " sv wait", &colorWhite, colora, v216, v219, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+4]
          vcvtss2sd xmm2, xmm1, xmm1
          vaddss  xmm6, xmm6, xmm0
          vmovss  xmm0, dword ptr [rbx+4]
          vdivss  xmm3, xmm14, xmm0
          vcvtss2sd xmm1, xmm3, xmm3
          vmovq   rdx, xmm1
          vmovq   r8, xmm2
        }
        v146 = j_va("(%.2f) %.2f", _RDX, _R8);
        __asm
        {
          vmovss  [rsp+128h+var_E0], xmm7
          vmovss  dword ptr [rsp+128h+var_E8], xmm8
          vmovss  dword ptr [rsp+128h+color], xmm8
          vmovaps xmm3, xmm13; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm15; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v146, " wall clock", &colorWhite, colorb, v217, v220, 0);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        v151 = j_va("(%d -%3d) %3d", _RBX[30], _RBX[31], _RBX[29]);
        __asm
        {
          vmovss  [rsp+128h+var_E0], xmm7
          vmovss  dword ptr [rsp+128h+var_E8], xmm8
          vmovss  dword ptr [rsp+128h+color], xmm8
          vmovaps xmm3, xmm13; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm15; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v151, " anim calls", &colorWhite, colorc, v218, v221, 0);
        __asm
        {
          vmovaps xmm13, [rsp+128h+var_A8]
          vmovaps xmm12, [rsp+128h+var_98]
          vmovaps xmm11, [rsp+128h+var_88]
          vmovaps xmm10, [rsp+128h+var_78]
          vmovaps xmm9, [rsp+128h+var_68]
          vmovaps xmm8, [rsp+128h+var_58]
          vaddss  xmm0, xmm6, xmm0
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+128h+var_48]
        vmovaps xmm6, [rsp+128h+var_38]
        vmovaps xmm14, [rsp+128h+var_B8]
      }
    }
    __asm { vmovaps xmm15, [rsp+128h+var_C8] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+128h+y]
      vmovaps xmm15, [rsp+128h+var_C8]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintStreamReadStats
==============
*/

float __fastcall CG_DrawDebug_PrintStreamReadStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  const dvar_t *v13; 
  const char *v22; 
  const char *v33; 
  const dvar_t *v37; 
  const char *v42; 
  const dvar_t *v46; 
  const char *ProfileDebugText; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  StreamReadStats result; 
  char v73; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
  }
  v13 = DVARBOOL_stream_showReadStats;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm11, xmm2
  }
  if ( !DVARBOOL_stream_showReadStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showReadStats") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vmovss  xmm9, [rsp+108h+width]
    vmovss  xmm10, cs:__real@3f4ccccd
    vmovss  xmm8, cs:__real@3f400000
  }
  if ( v13->current.enabled )
  {
    __asm { vmovaps [rsp+108h+var_48], xmm7 }
    _RAX = Stream_Read_GetStats(&result);
    __asm
    {
      vmovups xmm7, xmmword ptr [rax]
      vmovd   edx, xmm7
      vmovups xmmword ptr [rsp+108h+result.averageSizePerRead], xmm7
    }
    v22 = j_va("%u bytes", _RDX);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v22, " Stm avg size/read", &colorWhite, v59, v63, v67, 0);
    __asm
    {
      vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
      vcvtss2sd xmm2, xmm1, xmm1
      vshufps xmm7, xmm7, xmm7, 55h ; 'U'
      vcvtss2sd xmm1, xmm7, xmm7
      vmovq   rdx, xmm1
      vmovq   r8, xmm2
      vaddss  xmm6, xmm6, xmm0
    }
    v33 = j_va("issued: %.2f success: %.2f", _RDX, _R8);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v33, " Stm multi-rd ratio", &colorWhite, v60, v64, v68, 0);
    v37 = DVARBOOL_stream_readFavorSeekOrder;
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_48]
      vaddss  xmm6, xmm6, xmm0
    }
    if ( !DVARBOOL_stream_readFavorSeekOrder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readFavorSeekOrder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      __asm
      {
        vmovss  xmm1, [rsp+108h+result.seekOrderItemQueueIssuePercent]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v42 = j_va("issued: %.2f%%", _RDX);
      __asm
      {
        vmovss  [rsp+108h+var_C0], xmm10
        vmovss  [rsp+108h+var_C8], xmm8
        vmovss  [rsp+108h+var_D0], xmm8
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v42, " Stm seek order queue", &colorWhite, v61, v65, v69, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
  }
  v46 = DVARBOOL_stream_showReadProfile;
  if ( !DVARBOOL_stream_showReadProfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showReadProfile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.enabled )
  {
    ProfileDebugText = Stream_Read_GetProfileDebugText();
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm10
      vmovss  [rsp+108h+var_C8], xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, ProfileDebugText, " Stm read status %", &colorWhite, v62, v66, v70, 0);
    __asm { vaddss  xmm0, xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm9, xmmword ptr [r11-58h]
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintStreamer
==============
*/

float __fastcall CG_DrawDebug_PrintStreamer(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  const dvar_t *v16; 
  const ScreenPlacement *v17; 
  const char *v23; 
  const dvar_t *v29; 
  bool enabled; 
  const dvar_t *v31; 
  bool v32; 
  char v42; 
  bool v43; 
  const vec4_t *v45; 
  bool CanStreamMore; 
  const vec4_t *color; 
  const vec4_t *v60; 
  unsigned __int64 wantedMeshMemory; 
  const vec4_t *v71; 
  bool v80; 
  const dvar_t *v85; 
  const char *v86; 
  const dvar_t *v90; 
  unsigned __int64 Count; 
  unsigned __int64 v92; 
  unsigned __int64 v93; 
  unsigned __int64 v94; 
  unsigned __int64 v95; 
  unsigned __int64 v96; 
  const vec4_t *v97; 
  const char *v98; 
  unsigned __int64 v99; 
  const char *v103; 
  const vec4_t *v104; 
  const char *v109; 
  const vec4_t *v110; 
  const char *v116; 
  const vec4_t *v117; 
  const char *v121; 
  const vec4_t *v122; 
  const dvar_t *v127; 
  __int32 v131; 
  const char *v132; 
  GfxFont *FontHandle; 
  const char *v144; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  char *label; 
  float labela; 
  float labelb; 
  int vertAligne; 
  int vertAlignf; 
  int vertAlign; 
  int vertAligng; 
  int vertAlignh; 
  int vertAligni; 
  int vertAligna; 
  int vertAlignb; 
  int vertAlignj; 
  int vertAlignc; 
  int vertAlignd; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  float v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  StreamFrontendMemoryStats outStats; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  v16 = DCONST_DVARBOOL_cg_drawImageStreamQuality;
  v17 = scrPlace;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmm12, xmm2
    vmovaps xmm9, xmm3
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawImageStreamQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  __asm
  {
    vmovss  xmm10, [rbp+0F0h+width]
    vmovss  xmm11, cs:__real@3f4ccccd
    vmovss  xmm7, cs:__real@3f400000
  }
  if ( v16->current.enabled )
  {
    if ( Stream_IsEnabled() )
    {
      if ( Stream_IsYielding() )
      {
        v23 = "Primer: ";
        if ( !Stream_Primer_IsRunning() )
          v23 = "Yielding: ";
      }
      else if ( Stream_LoadSync_IsActive() )
      {
        v23 = "Load sync: ";
      }
      else
      {
        v23 = "Cannot stream more: ";
        if ( Stream_CanStreamMore() )
          v23 = (char *)&queryFormat.fmt + 3;
      }
    }
    else
    {
      v23 = "Disabled: ";
    }
    *(double *)&_XMM0 = Stream_LoadQuality_Image();
    __asm { vcomiss xmm0, cs:__real@5f7fffc0 }
    if ( v42 )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm0, xmm0
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x20ui64, "%.4f", *(double *)&_XMM3);
    }
    else
    {
      Com_sprintf(dest, 0x20ui64, "max");
    }
    Com_sprintf<64>((char (*)[64])&outStats, "%s%s", v23, dest);
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, (const char *)&outStats, " Streaming Quality", &colorWhite, *(const float *)&vertAligne, v173, v186, 0);
    __asm { vaddss  xmm9, xmm9, xmm0 }
  }
  v29 = DCONST_DVARBOOL_cg_drawWantedImageMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedImageMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedImageMem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  enabled = v29->current.enabled;
  v31 = DCONST_DVARBOOL_cg_drawWantedStreamMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedStreamMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedStreamMem") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1F0h+var_48+8], xmm6
    vmovaps [rsp+1F0h+var_68+8], xmm8
  }
  Dvar_CheckFrontendServerThread(v31);
  v32 = v31->current.enabled;
  if ( enabled || v32 )
  {
    __asm
    {
      vmovaps [rsp+1F0h+var_B8+8], xmm13
      vmovaps [rsp+1F0h+var_C8+8], xmm14
    }
    Stream_GetMemoryStats(&outStats);
    __asm { vmovss  xmm8, cs:__real@5f800000 }
    if ( outStats.wantedImageMemory )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, rax
      }
      if ( (outStats.wantedImageMemory & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm6, xmm6, xmm8 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (outStats.surplusImageMemory & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm8 }
      __asm { vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000 }
    }
    __asm
    {
      vmovss  xmm13, cs:__real@35800000
      vmulss  xmm0, xmm6, xmm13
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", *(double *)&_XMM2);
    __asm
    {
      vxorps  xmm14, xmm14, xmm14
      vcomiss xmm6, xmm14
    }
    v45 = &colorGreen;
    if ( v42 | v43 || (CanStreamMore = Stream_CanStreamMore(), v42 = 0, v43 = !CanStreamMore, CanStreamMore) )
    {
      __asm { vcomiss xmm6, xmm14 }
      color = &colorGreen;
      if ( !(v42 | v43) )
        color = &colorWhite;
    }
    else
    {
      color = &colorRed;
    }
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " Wanted Image Mem", color, *(const float *)&vertAlignf, v174, v187, 0);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm9, xmm9, xmm0
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( (outStats.wantedImageMemory & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm8 }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (outStats.surplusImageMemory & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm8 }
    __asm
    {
      vsubss  xmm6, xmm1, xmm0
      vmulss  xmm0, xmm6, xmm13
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", *(double *)&_XMM2);
    v60 = &colorGreen;
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vcomiss xmm6, xmm14
      vmovaps xmm3, xmm10; labelWidth
    }
    if ( !(v42 | v43) )
      v60 = &colorRed;
    __asm
    {
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " Combined Image Mem", v60, *(const float *)&vertAlign, v175, v188, 0);
    __asm
    {
      vmovaps xmm14, [rsp+1F0h+var_C8+8]
      vaddss  xmm9, xmm9, xmm0
    }
    if ( !v32 )
      goto LABEL_62;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (outStats.wantedMeshMemory & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm8 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm13
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", *(double *)&_XMM2);
    wantedMeshMemory = outStats.wantedMeshMemory;
    if ( outStats.wantedMeshMemory )
    {
      if ( !Stream_CanStreamMore() )
      {
        v71 = &colorRed;
        goto LABEL_53;
      }
      wantedMeshMemory = outStats.wantedMeshMemory;
    }
    v71 = &colorGreen;
    if ( wantedMeshMemory )
      v71 = &colorWhite;
LABEL_53:
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " Wanted Mesh Mem", v71, *(const float *)&vertAligng, v176, v189, 0);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm6, xmm9, xmm0
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( (outStats.wantedGenericMemory & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm8 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm13
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", *(double *)&_XMM2);
    v80 = outStats.wantedGenericMemory == 0;
    if ( outStats.wantedGenericMemory )
    {
      if ( !Stream_CanStreamMore() )
      {
        v45 = &colorRed;
LABEL_61:
        __asm
        {
          vmovss  [rsp+1F0h+var_1A8], xmm11
          vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
          vmovss  [rsp+1F0h+vertAlign], xmm7
          vmovaps xmm3, xmm10; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm12; posX
        }
        *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " Wanted Generic Mem", v45, *(const float *)&vertAlignh, v177, v190, 0);
        __asm { vaddss  xmm9, xmm6, xmm0 }
LABEL_62:
        __asm { vmovaps xmm13, [rsp+1F0h+var_B8+8] }
        goto LABEL_63;
      }
      v80 = outStats.wantedGenericMemory == 0;
    }
    if ( !v80 )
      v45 = &colorWhite;
    goto LABEL_61;
  }
LABEL_63:
  v85 = DVARBOOL_cg_drawStreamMemoryInfo;
  if ( !DVARBOOL_cg_drawStreamMemoryInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamMemoryInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.enabled )
  {
    Stream_Alloc_GetMemInfo((StreamMemInfo *)dest);
    LODWORD(label) = *(_QWORD *)&dest[8] >> 20;
    LODWORD(fmt) = *(_QWORD *)dest >> 20;
    v86 = j_va("Tex:%umb Mesh:%umb Gen:%umb FreeCPU+GPU:%umb+%umb", (unsigned int)(*(_QWORD *)&dest[16] >> 20), (unsigned int)(*(_QWORD *)&dest[24] >> 20), (unsigned int)(*(_QWORD *)&dest[32] >> 20), fmt, label);
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(v17, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v86, " Stm Mem", &colorWhite, *(const float *)&vertAligni, v178, v191, 0);
    __asm { vaddss  xmm9, xmm9, xmm0 }
  }
  v90 = DCONST_DVARBOOL_cg_drawFileStreamStatus;
  if ( !DCONST_DVARBOOL_cg_drawFileStreamStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFileStreamStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  if ( v90->current.enabled )
  {
    Count = FileStreamTrack_GetCount(FILE_STREAM_TRACK_FASTFILE);
    v92 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_STREAM);
    v93 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_PRIMER);
    v94 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_XPAK);
    v95 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_SOUND);
    __asm { vmovss  [rsp+1F0h+var_1A8], xmm11 }
    v96 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_BINK);
    v97 = &colorRed;
    __asm { vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7 }
    v98 = &s_barInText[-3 * Count + 300];
    v99 = Count + v92 + v93 + v94 + v95 + v96;
    __asm { vmovss  [rsp+1F0h+vertAlign], xmm7 }
    if ( Count == v99 )
      v97 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v98 )
      v98 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    __asm
    {
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm9; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v98, " Fastfile Read", v97, *(const float *)&vertAligna, v179, v192, 0);
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
    }
    v103 = &s_barInText[-3 * v92 + 300];
    v104 = &colorRed;
    v43 = v92 == v99;
    v17 = scrPlace;
    __asm { vaddss  xmm6, xmm9, xmm0 }
    if ( v43 )
      v104 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v103 )
      v103 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    __asm
    {
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v103, " Stream Read", v104, *(const float *)&vertAlignb, v180, v193, 0);
    v109 = &s_barInText[-3 * v93 + 300];
    v110 = &colorRed;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( v93 == v99 )
      v110 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v109 )
      v109 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v109, " Primer Read", v110, *(const float *)&vertAlignj, v181, v194, 0);
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
      vmovss  [rsp+1F0h+vertAlign], xmm7
      vaddss  xmm6, xmm6, xmm0
    }
    v116 = &s_barInText[-3 * v95 + 300];
    v117 = &colorRed;
    __asm { vmovaps xmm3, xmm10; labelWidth }
    if ( v95 == v99 )
      v117 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v116 )
      v116 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    __asm
    {
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v116, " Sound Read", v117, *(const float *)&vertAlignc, v182, v195, 0);
    v121 = &s_barInText[-3 * v96 + 300];
    __asm
    {
      vmovss  [rsp+1F0h+var_1A8], xmm11
      vmovss  dword ptr [rsp+1F0h+var_1B0], xmm7
    }
    v122 = &colorRed;
    __asm { vmovss  [rsp+1F0h+vertAlign], xmm7 }
    if ( v96 == v99 )
      v122 = &colorWhite;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v121 )
      v121 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    __asm
    {
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm12; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v121, " Bink Read", v122, *(const float *)&vertAlignd, v183, v196, 0);
    __asm { vaddss  xmm9, xmm6, xmm0 }
  }
  v127 = DCONST_DVARBOOL_cg_drawAlwaysloadedWarnings;
  __asm
  {
    vmovaps xmm12, [rsp+1F0h+var_A8+8]
    vmovaps xmm11, [rsp+1F0h+var_98+8]
    vmovaps xmm10, [rsp+1F0h+var_88+8]
  }
  if ( !DCONST_DVARBOOL_cg_drawAlwaysloadedWarnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawAlwaysloadedWarnings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v127);
  if ( v127->current.enabled )
  {
    v131 = Stream_GetForcedState() - 1;
    if ( !v131 )
    {
      v132 = "TimedOut";
      goto LABEL_101;
    }
    if ( v131 == 1 )
    {
      v132 = "EvictedForMemPaged";
LABEL_101:
      __asm
      {
        vmovss  xmm8, cs:__real@3f19999a
        vmovaps xmm2, xmm8; scale
        vmovaps xmm3, xmm8; scale
      }
      FontHandle = UI_GetFontHandle(v17, 4, *(float *)&_XMM2);
      UI_TextWidth("Alwaysloaded/Forced Stream Fail", 0, FontHandle, *(float *)&_XMM3);
      __asm
      {
        vmovss  xmm7, cs:__real@43a00000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmovss  xmm0, cs:__real@41f00000
        vsubss  xmm2, xmm7, xmm1
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm8
        vmovss  dword ptr [rsp+1F0h+label], xmm0
        vmovss  dword ptr [rsp+1F0h+fmt], xmm2
      }
      UI_DrawText(v17, "Alwaysloaded/Forced Stream Fail", 0x7FFFFFFF, FontHandle, fmta, labela, 1, 1, v184, &colorRed, 0);
      __asm { vmovaps xmm3, xmm8; scale }
      v144 = j_va("Low Memory Warning (%s)", v132);
      UI_TextWidth(v144, 0, FontHandle, *(float *)&_XMM3);
      __asm
      {
        vmovss  dword ptr [rsp+1F0h+var_1B0], xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmovss  xmm0, cs:__real@42700000
        vsubss  xmm2, xmm7, xmm1
        vmovss  dword ptr [rsp+1F0h+label], xmm0
        vmovss  dword ptr [rsp+1F0h+fmt], xmm2
      }
      UI_DrawText(v17, v144, 0x7FFFFFFF, FontHandle, fmtb, labelb, 1, 1, v185, &colorRed, 0);
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+1F0h+var_68+8]
    vmovaps xmm6, [rsp+1F0h+var_48+8]
    vmovaps xmm0, xmm9
    vmovaps xmm7, [rsp+1F0h+var_58+8]
    vmovaps xmm9, [rsp+1F0h+var_78+8]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_PrintTransientCommonBudgets
==============
*/

float __fastcall CG_DrawDebug_PrintTransientCommonBudgets(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  const dvar_t *v15; 
  const char *v22; 
  const char *v35; 
  const char *v45; 
  const char *v55; 
  const char *v65; 
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
  float v89; 
  float v90; 
  float v91; 

  __asm
  {
    vmovaps [rsp+0C8h+var_18], xmm6
    vmovaps [rsp+0C8h+var_68], xmm11
    vmovaps xmm11, xmm2
    vmovaps xmm6, xmm3
  }
  if ( CL_TransientsCommonMP_IsEnabled() )
  {
    v15 = DCONST_DVARBOOL_cl_transientCommon_drawBudgets;
    if ( !DCONST_DVARBOOL_cl_transientCommon_drawBudgets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCommon_drawBudgets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_28], xmm7
        vmovaps [rsp+0C8h+var_38], xmm8
        vmovaps [rsp+0C8h+var_48], xmm9
        vmovaps [rsp+0C8h+var_58], xmm10
      }
      CL_TransientsCommonMP_GetViewArmsMemoryCost();
      __asm
      {
        vmovss  xmm9, cs:__real@35800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm0, xmm0, xmm9
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   rdx, xmm1
      }
      v22 = j_va("%3.1f", _RDX);
      __asm
      {
        vmovss  xmm10, cs:__real@3f400000
        vmovss  xmm8, cs:__real@3f4ccccd
        vmovss  xmm7, [rsp+0C8h+width]
        vmovss  [rsp+0C8h+var_80], xmm8
        vmovss  [rsp+0C8h+var_88], xmm10
        vmovss  [rsp+0C8h+var_90], xmm10
        vmovaps xmm3, xmm7; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v22, " VIEW HANDS", &colorWhite, v77, v82, v87, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      CL_TransientsCommonMP_GetViewWeaponMemoryCost();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v35 = j_va("%3.1f", _RDX);
      __asm
      {
        vmovss  [rsp+0C8h+var_80], xmm8
        vmovss  [rsp+0C8h+var_88], xmm10
        vmovss  [rsp+0C8h+var_90], xmm10
        vmovaps xmm3, xmm7; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v35, " VIEW WEAPONS", &colorWhite, v78, v83, v88, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      CL_TransientsCommonMP_GetBodyMemoryCost();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v45 = j_va("%3.1f", _RDX);
      __asm
      {
        vmovss  [rsp+0C8h+var_80], xmm8
        vmovss  [rsp+0C8h+var_88], xmm10
        vmovss  [rsp+0C8h+var_90], xmm10
        vmovaps xmm3, xmm7; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v45, " BODIES", &colorWhite, v79, v84, v89, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      CL_TransientsCommonMP_GetHeadMemoryCost();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v55 = j_va("%3.1f", _RDX);
      __asm
      {
        vmovss  [rsp+0C8h+var_80], xmm8
        vmovss  [rsp+0C8h+var_88], xmm10
        vmovss  [rsp+0C8h+var_90], xmm10
        vmovaps xmm3, xmm7; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v55, " HEADS", &colorWhite, v80, v85, v90, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      CL_TransientsCommonMP_GetWorldWeaponMemoryCost();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v65 = j_va("%3.1f", _RDX);
      __asm
      {
        vmovss  [rsp+0C8h+var_80], xmm8
        vmovss  [rsp+0C8h+var_88], xmm10
        vmovss  [rsp+0C8h+var_90], xmm10
        vmovaps xmm3, xmm7; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm11; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v65, " WORLD WEAPONS", &colorWhite, v81, v86, v91, 0);
      __asm
      {
        vmovaps xmm10, [rsp+0C8h+var_58]
        vmovaps xmm9, [rsp+0C8h+var_48]
        vmovaps xmm8, [rsp+0C8h+var_38]
        vmovaps xmm7, [rsp+0C8h+var_28]
        vaddss  xmm0, xmm6, xmm0
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_18]
    vmovaps xmm11, [rsp+0C8h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_ResetInput
==============
*/

void __fastcall CG_DrawDebug_ResetInput(LocalClientNum_t localClientNum)
{
  CG_DrawDebugInput_Reset(localClientNum);
}

/*
==============
CG_DrawDebug_ShouldDrawLight
==============
*/
bool CG_DrawDebug_ShouldDrawLight(DbgLightType type)
{
  bool result; 

  switch ( r_debugDrawLights->current.integer )
  {
    case 1:
      result = 1;
      break;
    case 2:
      result = type == LIGHTTYPE_PRIMARY_STATIC;
      break;
    case 3:
      result = type == LIGHTTYPE_PRIMARY_SCRIPTED_STATIC;
      break;
    case 4:
      result = type == LIGHTTYPE_PRIMARY_SCRIPTED_MOVING;
      break;
    case 5:
      result = type == LIGHTTYPE_PRIMARY_LOCAL_SCRIPTABLES;
      break;
    case 6:
      result = type == LIGHTTYPE_VFX;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
CG_DrawDebug_TaskGraphStats
==============
*/

float __fastcall CG_DrawDebug_TaskGraphStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  __int64 v24; 
  unsigned int v26; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  char *label[2]; 
  R_TG_DebugStats outStats; 
  char dest[64]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  if ( R_TG_GetStats(&outStats) )
  {
    label[0] = "  gfx";
    label[1] = "  async";
    __asm
    {
      vmovaps [rsp+1A0h+var_68+8], xmm7
      vmovaps [rsp+1A0h+var_88+8], xmm9
      vmovss  xmm9, [rbp+0A0h+width]
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+1A0h+var_180], xmm9
      vmovaps [rsp+1A0h+var_98+8], xmm10
    }
    CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v93, "-Task Graph-", &colorLtBlue);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.taskCount);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " task nodes", &colorWhite, v96, v111, v126, 0);
    v24 = 0i64;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( outStats.queueCount > 1 )
    {
      v26 = 0;
      do
      {
        Com_sprintf<64>((char (*)[64])dest, "%u", outStats.taskQueueCount[v26]);
        __asm
        {
          vmovss  [rsp+1A0h+var_158], xmm10
          vmovss  [rsp+1A0h+var_160], xmm7
          vmovss  [rsp+1A0h+var_168], xmm7
          vmovaps xmm3, xmm9; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm8; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, label[v26++], &colorWhite, v97, v112, v127, 0);
        __asm { vaddss  xmm6, xmm6, xmm0 }
      }
      while ( v26 < outStats.queueCount );
    }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.resourceCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " resources", &colorWhite, v98, v113, v128, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.heapCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " heaps", &colorWhite, v99, v114, v129, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%lumb", outStats.memoryUsage >> 20);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " heap memory", &colorWhite, v100, v115, v130, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " permutations", &colorWhite, v101, v116, v131, 0);
    __asm
    {
      vmovss  dword ptr [rsp+1A0h+var_180], xmm9
      vaddss  xmm6, xmm6, xmm0
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
    }
    CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v94, "-Permutation-", &colorLtBlue);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationIndex);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " index", &colorWhite, v102, v117, v132, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationTaskCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " tasks", &colorWhite, v103, v118, v133, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( outStats.queueCount > 1 )
    {
      do
      {
        Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationTaskQueueCount[v24]);
        __asm
        {
          vmovss  [rsp+1A0h+var_158], xmm10
          vmovss  [rsp+1A0h+var_160], xmm7
          vmovss  [rsp+1A0h+var_168], xmm7
          vmovaps xmm3, xmm9; labelWidth
          vmovaps xmm2, xmm6; posY
          vmovaps xmm1, xmm8; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, label[v24], &colorWhite, v104, v119, v134, 0);
        v24 = (unsigned int)(v24 + 1);
        __asm { vaddss  xmm6, xmm6, xmm0 }
      }
      while ( (unsigned int)v24 < outStats.queueCount );
    }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " barriers", &colorWhite, v105, v120, v135, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierAliasingCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, "  aliasing", &colorWhite, v106, v121, v136, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierDecompressCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, "  decompress", &colorWhite, v107, v122, v137, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierElementCount);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, "  elements", &colorWhite, v108, v123, v138, 0);
    __asm
    {
      vaddss  xmm6, xmm6, xmm0
      vmovss  dword ptr [rsp+1A0h+var_180], xmm9
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
    }
    CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v95, "-Perf-", &colorLtBlue);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%uus", outStats.renderCpuTimeUs);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " render cpu", &colorWhite, v109, v124, v139, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Com_sprintf<64>((char (*)[64])dest, "%ums", outStats.compileTimeMs);
    __asm
    {
      vmovss  [rsp+1A0h+var_158], xmm10
      vmovss  [rsp+1A0h+var_160], xmm7
      vmovss  [rsp+1A0h+var_168], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm8; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " compile", &colorWhite, v110, v125, v140, 0);
    __asm
    {
      vmovaps xmm10, [rsp+1A0h+var_98+8]
      vmovaps xmm9, [rsp+1A0h+var_88+8]
      vmovaps xmm7, [rsp+1A0h+var_68+8]
      vaddss  xmm0, xmm6, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+1A0h+var_58+8]
    vmovaps xmm8, [rsp+1A0h+var_78+8]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebug_UpdateDebugBonesClosestEntity
==============
*/
void CG_DrawDebug_UpdateDebugBonesClosestEntity(const LocalClientNum_t localClientNum, const vec3_t *viewPos)
{
  __int64 v6; 
  int v8; 
  __int16 *v9; 
  int v10; 
  unsigned int v12; 
  const cpose_t *Pose; 
  const cpose_t *v14; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v44; 
  __int64 v45; 
  int v46[4]; 
  __int64 v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = viewPos;
  v6 = localClientNum;
  __asm { vmovss  xmm7, cs:__real@4cbebc20 }
  Dvar_SetBoolFromSource(DVARBOOL_cg_drawDebugBonesClosest, 0, DVAR_SOURCE_EXTERNAL);
  v8 = 1;
  v9 = &clientObjMap[2533 * v6 + 1];
  v10 = 2533 * v6;
  __asm { vmovsd  xmm6, cs:__real@3f30000000000000 }
  do
  {
    if ( (unsigned int)v8 > 0x9E4 )
    {
      LODWORD(v45) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v45) )
        __debugbreak();
    }
    if ( (unsigned int)v6 >= 2 )
    {
      LODWORD(v45) = 2;
      LODWORD(v44) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v44, v45) )
        __debugbreak();
    }
    if ( (unsigned int)(v10 + v8) >= 0x13CA )
    {
      LODWORD(v45) = v10 + v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v45) )
        __debugbreak();
    }
    v12 = *v9;
    if ( *v9 )
    {
      if ( v12 >= (unsigned int)s_objCount )
      {
        LODWORD(v45) = *v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v45) )
          __debugbreak();
      }
      if ( s_objBuf[v12] )
      {
        Pose = CG_GetPose((LocalClientNum_t)v6, v8);
        v14 = Pose;
        if ( Pose )
        {
          if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v14->origin.Get_origin, v14);
          FunctionPointer_origin(&v14->origin.origin.origin, (vec3_t *)v46);
          if ( v14->isPosePrecise )
          {
            __asm
            {
              vmovd   xmm0, [rsp+0A8h+var_68]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  [rsp+0A8h+var_68], xmm2
              vmovd   xmm0, [rsp+0A8h+var_64]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm4, xmm1, xmm1
              vmovss  [rsp+0A8h+var_64], xmm4
              vmovd   xmm0, [rsp+0A8h+var_60]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm5, xmm1, xmm1
              vmovss  [rsp+0A8h+var_60], xmm5
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm5, [rsp+0A8h+var_60]
              vmovss  xmm4, [rsp+0A8h+var_64]
              vmovss  xmm2, [rsp+0A8h+var_68]
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r15]
            vsubss  xmm3, xmm0, xmm2
            vmovss  xmm1, dword ptr [r15+4]
            vsubss  xmm2, xmm1, xmm4
            vmovss  xmm0, dword ptr [r15+8]
            vsubss  xmm4, xmm0, xmm5
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm7
          }
          memset(v46, 0, 0xCui64);
        }
      }
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 2048 );
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
CG_DrawDebug_UpdateInput
==============
*/

void __fastcall CG_DrawDebug_UpdateInput(LocalClientNum_t localClientNum)
{
  CG_DrawDebugInput_Update(localClientNum);
}

/*
==============
CG_DrawDebug_UpdateMantleMotionPathExport
==============
*/
void CG_DrawDebug_UpdateMantleMotionPathExport(LocalClientNum_t localClientNum)
{
  const dvar_t *v4; 
  CgHandler *Handler; 
  const dvar_t *v7; 
  bool enabled; 
  const dvar_t *v9; 
  bool v10; 
  const dvar_t *v18; 
  const dvar_t *v22; 
  const dvar_t *v26; 
  MantleMotionPathParams params; 

  v4 = DVARBOOL_mantle_export_run;
  if ( !DVARBOOL_mantle_export_run && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_run") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0C0h+var_20], xmm6
      vmovaps [rsp+0C0h+var_30], xmm7
      vmovaps [rsp+0C0h+var_40], xmm8
    }
    Dvar_SetBool_Internal(DVARBOOL_mantle_export_run, 0);
    *((_DWORD *)&params.endPosOffset + 3) = 0;
    *(_DWORD *)(&params.drawDebug + 1) = 0;
    *(&params.drawDebug + 5) = 0;
    Handler = CgHandler::getHandler(localClientNum);
    v7 = DVARBOOL_mantle_export_isLadder;
    params.bgHandler = Handler;
    params.drawDebug = 0;
    if ( !DVARBOOL_mantle_export_isLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_isLadder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    enabled = v7->current.enabled;
    v9 = DVARBOOL_mantle_export_isover;
    params.isLadder = enabled;
    if ( !DVARBOOL_mantle_export_isover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_isover") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v9->current.enabled;
    _RBX = DVARFLT_mantle_export_height;
    params.isOver = v10;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+57h+params.startPos], xmm6
      vmovss  dword ptr [rbp+57h+params.startPos+4], xmm6
      vmovss  dword ptr [rbp+57h+params.startPos+8], xmm6
    }
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DVARFLT_mantle_export_ledge_dist;
    if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_mantle_export_ledge_dist;
    __asm
    {
      vmovss  dword ptr [rbp+57h+params.ledgeOffset], xmm0
      vmovss  dword ptr [rbp+57h+params.ledgeOffset+4], xmm6
      vmovss  dword ptr [rbp+57h+params.ledgeOffset+8], xmm7
    }
    if ( params.isLadder )
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      v18 = DCONST_DVARFLT_mantle_ladder_over_dist;
      if ( !DCONST_DVARFLT_mantle_ladder_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_over_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      __asm { vaddss  xmm7, xmm7, dword ptr [rbx+28h] }
      _RBX = DVARFLT_mantle_export_over_speed;
      if ( !DVARFLT_mantle_export_over_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm8, dword ptr [rbx+28h] }
      v22 = DCONST_DVARFLT_mantle_ladder_down_dist;
      __asm
      {
        vmovss  dword ptr [rbp+57h+params.endPosOffset], xmm7
        vmovss  dword ptr [rbp+57h+params.endPosOffset+4], xmm6
        vmovss  dword ptr [rbp+57h+params.endPosOffset+8], xmm6
      }
      if ( !DCONST_DVARFLT_mantle_ladder_down_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_down_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+params.endPosOffset+8]
        vsubss  xmm1, xmm0, dword ptr [rbx+28h]
        vmovss  dword ptr [rbp+57h+params.endPosOffset+8], xmm1
      }
    }
    else if ( params.isOver )
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      v26 = DVARFLT_mantle_export_over_dist;
      if ( !DVARFLT_mantle_export_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      __asm { vaddss  xmm7, xmm7, dword ptr [rbx+28h] }
      _RBX = DVARFLT_mantle_export_over_speed;
      if ( !DVARFLT_mantle_export_over_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+28h]
        vmovss  dword ptr [rbp+57h+params.endPosOffset], xmm7
        vmovss  dword ptr [rbp+57h+params.endPosOffset+4], xmm6
        vmovss  dword ptr [rbp+57h+params.endPosOffset+8], xmm6
      }
    }
    else
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DVARFLT_mantle_export_on_speed;
      if ( !DVARFLT_mantle_export_on_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_on_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+28h]
        vmovss  xmm0, dword ptr [rbp+57h+params.ledgeOffset]
        vmovss  xmm1, dword ptr [rbp+57h+params.ledgeOffset+4]
        vmovss  dword ptr [rbp+57h+params.endPosOffset], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+params.ledgeOffset+8]
        vmovss  dword ptr [rbp+57h+params.endPosOffset+8], xmm0
        vmovss  dword ptr [rbp+57h+params.endPosOffset+4], xmm1
      }
    }
    _RBX = DVARFLT_mantle_export_height;
    __asm { vmovaps xmm6, [rsp+0C0h+var_20] }
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]; height
      vmovaps xmm3, xmm8; speed2D
      vmovaps xmm1, xmm7; distance2D
    }
    Mantle_DumpMotionPath(&params, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
    __asm
    {
      vmovaps xmm8, [rsp+0C0h+var_40]
      vmovaps xmm7, [rsp+0C0h+var_30]
    }
  }
}

/*
==============
CG_DrawInputLatencyDeviceOverlay
==============
*/
void CG_DrawInputLatencyDeviceOverlay(LocalClientNum_t localClientNum)
{
  float v13; 
  vec4_t color; 

  if ( ClActiveClient::GetClient(localClientNum)->m_latencyDeviceState )
    __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
  else
    __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
  __asm { vmovups xmmword ptr [rsp+78h+var_28], xmm0 }
  _RAX = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; width
    vmovss  xmm0, dword ptr [rax+34h]
    vaddss  xmm1, xmm0, dword ptr [rax+2Ch]
    vmovss  xmm0, dword ptr [rax+30h]
    vsubss  xmm2, xmm1, xmm3
    vaddss  xmm1, xmm0, dword ptr [rax+28h]
    vmulss  xmm2, xmm2, cs:__real@3f000000; y
    vsubss  xmm4, xmm1, xmm3
    vmulss  xmm1, xmm4, cs:__real@3f000000; x
    vmovss  [rsp+78h+var_58], xmm3
  }
  CG_Draw2DRect(_RAX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v13, 1, 1, &color, cgMedia.whiteMaterial);
}

/*
==============
CG_DrawWaterMark
==============
*/

void __fastcall CG_DrawWaterMark(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  const ScreenPlacement *ActivePlacement; 
  float v15; 
  float v16; 
  float v17; 

  if ( cl_waterMarkEnabled->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f4ccccd
      vmovss  xmm2, cs:__real@43b40000; y
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovaps xmm3, xmm6; xScale
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  [rsp+68h+var_48], xmm6
    }
    CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v15, "Confidential", &s_waterMarkColor, 5, cls.bigDevFont);
    __asm
    {
      vmovss  xmm2, cs:__real@43be0000; y
      vmovaps xmm3, xmm6; xScale
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  [rsp+68h+var_48], xmm6
    }
    CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v16, cl_waterMarkText->current.string, &s_waterMarkColor, 5, cls.bigDevFont);
    __asm
    {
      vmovss  xmm2, cs:__real@43c80000; y
      vmovaps xmm3, xmm6; xScale
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  [rsp+68h+var_48], xmm6
    }
    CG_DrawDevString(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v17, "Do Not Distribute", &s_waterMarkColor, 5, cls.bigDevFont);
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
  }
}

/*
==============
CgDrawDebug::CornerPrint
==============
*/

float __fastcall CgDrawDebug::CornerPrint(CgDrawDebug *this, const ScreenPlacement *sP, double posX, double posY, float labelWidth, const char *text, const char *label, const vec4_t *color)
{
  float v16; 
  float v17; 
  float v18; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f400000
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm1
    vmovss  [rsp+68h+var_30], xmm1
    vmovaps xmm4, xmm3
    vmovss  xmm3, [rsp+68h+labelWidth]; labelWidth
    vmovaps xmm5, xmm2
    vmovaps xmm2, xmm4; posY
    vmovaps xmm1, xmm5; posX
  }
  return CG_DrawDebug_CornerPrintScale(sP, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, text, label, color, v16, v17, v18, 0);
}

/*
==============
CgDrawDebug::CornerPrintCaption
==============
*/

float __fastcall CgDrawDebug::CornerPrintCaption(CgDrawDebug *this, const ScreenPlacement *sP, double posX, double posY, float labelWidth, const char *text, const vec4_t *color)
{
  const dvar_t *v10; 
  float fmt; 
  int align; 

  v10 = DVARBOOL_cg_drawFPSLabels;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vmovss  xmm3, cs:__real@3f400000; xScale
    vmovaps xmm2, xmm6; y
  }
  if ( v10->current.enabled )
  {
    __asm { vsubss  xmm1, xmm7, [rsp+78h+labelWidth] }
    align = 7;
  }
  else
  {
    align = 6;
    __asm { vmovaps xmm1, xmm7; x }
  }
  __asm { vmovss  dword ptr [rsp+78h+fmt], xmm3 }
  CG_DrawDevString(sP, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, color, align, cls.smallDevFont);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3f4ccccd
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::CornerPrintNoLabel
==============
*/

float __fastcall CgDrawDebug::CornerPrintNoLabel(CgDrawDebug *this, const ScreenPlacement *sP, double posX, double posY, const char *text, const vec4_t *color)
{
  float v14; 
  float v15; 
  float v16; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f400000
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm1
    vmovss  [rsp+68h+var_30], xmm1
    vmovaps xmm4, xmm3
    vmovaps xmm5, xmm2
    vxorps  xmm3, xmm3, xmm3; labelWidth
    vmovaps xmm2, xmm4; posY
    vmovaps xmm1, xmm5; posX
  }
  return CG_DrawDebug_CornerPrintScale(sP, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, text, NULL, color, v14, v15, v16, 1);
}

/*
==============
CgDrawDebug::DrawDebugOverlays
==============
*/

void __fastcall CgDrawDebug::DrawDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum, double _XMM2_8)
{
  __int64 v10; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v17; 
  cg_t *LocalClientGlobals; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  Material *whiteMaterial; 
  const ScreenPlacement *v37; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  int integer; 
  const DObj *ClientDObj; 
  const cpose_t *Pose; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  int v49; 
  DObj *v50; 
  const cpose_t *v51; 
  const dvar_t *v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  const DObj *v56; 
  const cpose_t *v57; 
  const dvar_t *v58; 
  __int64 v59; 
  DObj *v60; 
  const cpose_t *v61; 
  const dvar_t *v62; 
  bool v63; 
  const dvar_t *v64; 
  const dvar_t *v65; 
  cg_t *v66; 
  const dvar_t *v67; 
  cg_t *v68; 
  cg_t *v69; 
  const dvar_t *v70; 
  int v71; 
  const dvar_t *v72; 
  CgDebugDrawBonesType v73; 
  const dvar_t *v74; 
  const char *string; 
  const dvar_t *v76; 
  const dvar_t *v77; 
  const dvar_t *v78; 
  int v79; 
  cg_t *v80; 
  BgStatic *ActiveStatics; 
  unsigned int clientNum; 
  CgStatic *v83; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v85; 
  const DObj *viewModelDObj; 
  unsigned int XAnimIndex; 
  unsigned int animationNumber; 
  unsigned int animsetIndex; 
  const dvar_t *v90; 
  const dvar_t *v91; 
  char v110; 
  const dvar_t *v112; 
  const dvar_t *v115; 
  const dvar_t *v116; 
  const dvar_t *v117; 
  const dvar_t *v118; 
  const dvar_t *v119; 
  const dvar_t *v120; 
  const dvar_t *v121; 
  const dvar_t *v122; 
  const dvar_t *v123; 
  const dvar_t *v124; 
  const dvar_t *v125; 
  const dvar_t *v126; 
  const ScreenPlacement *v136; 
  __int64 v137; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  vec3_t forward; 
  vec4_t color; 
  vec4_t v154; 

  v10 = localClientNum;
  if ( CG_DrawHits_IsActiveForAnyType(localClientNum) )
    return;
  __asm
  {
    vmovaps [rsp+130h+var_70], xmm9
    vmovaps [rsp+130h+var_80], xmm10
  }
  Stream_Debug_DrawDebugOverlays((LocalClientNum_t)v10);
  v12 = DVARINT_cg_drawFPSGraphs;
  if ( !DVARINT_cg_drawFPSGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSGraphs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer )
    CG_DrawDebug_DrawFPSGraphs();
  v13 = DVARBOOL_cg_drawrumbledebug;
  if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    CG_Rumble_DrawDebug((LocalClientNum_t)v10);
  v14 = DCONST_DVARBOOL_player_debugHealth;
  if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
    __debugbreak();
  __asm { vmovaps [rsp+130h+var_40], xmm6 }
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vmovss  xmm10, cs:__real@42c80000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v14->current.enabled )
  {
    v17 = DCONST_DVARBOOL_player_debugHealth;
    __asm
    {
      vmovaps [rsp+130h+var_50], xmm7
      vmovaps [rsp+130h+var_60], xmm8
    }
    if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( !v17->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5476, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_player_debugHealth, \"player_debugHealth\" ))", (const char *)&queryFormat, "Dconst_GetBool( player_debugHealth )") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( LocalClientGlobals->predictedPlayerState.stats[0] && LocalClientGlobals->predictedPlayerState.stats[2] )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, edx
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm7; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm8, xmm0 }
    }
    else
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
    material = cgMedia.whiteMaterial;
    __asm { vmovups xmmword ptr [rbp+30h+var_B0], xmm0 }
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v10);
    __asm
    {
      vmovss  xmm6, cs:__real@41200000
      vmovss  [rsp+130h+var_E0], xmm7
      vmovss  [rsp+130h+var_E8], xmm7
      vmovss  dword ptr [rsp+130h+var_F0], xmm9
      vmovss  dword ptr [rsp+130h+var_F8], xmm9
      vmovaps xmm3, xmm10; w
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm6; x
      vmovss  dword ptr [rsp+130h+fmt], xmm6
    }
    CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, v144, v146, v148, v150, &color, material);
    __asm { vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000 }
    whiteMaterial = cgMedia.whiteMaterial;
    __asm { vmovups xmmword ptr [rbp+30h+var_B0], xmm0 }
    v37 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v10);
    __asm
    {
      vmovss  [rsp+130h+var_E0], xmm7
      vmovss  [rsp+130h+var_E8], xmm8
      vmovss  dword ptr [rsp+130h+var_F0], xmm9
      vmovss  dword ptr [rsp+130h+var_F8], xmm9
      vmulss  xmm3, xmm8, xmm10; w
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm6; x
      vmovss  dword ptr [rsp+130h+fmt], xmm6
    }
    CL_DrawStretchPic(v37, *(float *)&_XMM1, *(float *)&_XMM2_8, *(float *)&_XMM3, fmta, 1, 1, v145, v147, v149, v151, &color, whiteMaterial);
    __asm
    {
      vmovaps xmm8, [rsp+130h+var_60]
      vmovaps xmm7, [rsp+130h+var_50]
    }
  }
  this->DrawAnimationOverlays(this, (const LocalClientNum_t)v10);
  v41 = DVARBOOL_cg_drawDebugEntitiesLoD;
  if ( !DVARBOOL_cg_drawDebugEntitiesLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugEntitiesLoD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
    this->DrawEntitiesLoD(this, (const LocalClientNum_t)v10);
  v42 = DCONST_DVARINT_xanim_drawEntityDynamicBones;
  if ( !DCONST_DVARINT_xanim_drawEntityDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.integer >= 0 )
  {
    v43 = DCONST_DVARINT_xanim_drawEntityDynamicBones;
    if ( !DCONST_DVARINT_xanim_drawEntityDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBones") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    integer = v43->current.integer;
    ClientDObj = Com_GetClientDObj(integer, (LocalClientNum_t)v10);
    if ( ClientDObj )
    {
      Pose = CG_GetPose((LocalClientNum_t)v10, integer);
      XAnimDebugDrawDynamicBones(ClientDObj, Pose);
    }
  }
  v47 = DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents;
  if ( !DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBoneAudioEvents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  if ( v47->current.integer >= 0 )
  {
    v48 = DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents;
    if ( !DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBoneAudioEvents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    v49 = v48->current.integer;
    v50 = Com_GetClientDObj(v49, (LocalClientNum_t)v10);
    if ( v50 )
    {
      v51 = CG_GetPose((LocalClientNum_t)v10, v49);
      XAnimDebugDrawDynamicBoneAudioEvents(v50, v51);
    }
  }
  v52 = DCONST_DVARBOOL_xanim_drawViewModelDynamicBones;
  if ( !DCONST_DVARBOOL_xanim_drawViewModelDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewModelDynamicBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v53 = 2048;
  if ( v52->current.enabled )
  {
    v54 = 2048;
    v55 = 2i64;
    do
    {
      v56 = Com_GetClientDObj(v54, (LocalClientNum_t)v10);
      if ( v56 )
      {
        v57 = CG_GetPose((LocalClientNum_t)v10, v54);
        XAnimDebugDrawDynamicBones(v56, v57);
      }
      ++v54;
      --v55;
    }
    while ( v55 );
  }
  v58 = DCONST_DVARBOOL_xanim_drawViewmodelDynamicBoneAudioEvents;
  if ( !DCONST_DVARBOOL_xanim_drawViewmodelDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewmodelDynamicBoneAudioEvents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
  {
    v59 = 2i64;
    do
    {
      v60 = Com_GetClientDObj(v53, (LocalClientNum_t)v10);
      if ( v60 )
      {
        v61 = CG_GetPose((LocalClientNum_t)v10, v53);
        XAnimDebugDrawDynamicBoneAudioEvents(v60, v61);
      }
      ++v53;
      --v59;
    }
    while ( v59 );
  }
  v62 = DVARBOOL_cg_drawDebugMaxAnimUsage;
  if ( !DVARBOOL_cg_drawDebugMaxAnimUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugMaxAnimUsage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  if ( v62->current.enabled )
  {
    v63 = 1;
LABEL_76:
    CG_DrawDebug_DrawXAnimUsageGlobal((const LocalClientNum_t)v10, v63);
    goto LABEL_77;
  }
  v64 = DVARBOOL_cg_drawDebugAnimUsage;
  if ( !DVARBOOL_cg_drawDebugAnimUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimUsage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  if ( v64->current.enabled )
  {
    v63 = 0;
    goto LABEL_76;
  }
LABEL_77:
  v65 = DCONST_DVARINT_cg_drawDebugAnimLodInfo;
  if ( !DCONST_DVARINT_cg_drawDebugAnimLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  if ( v65->current.integer )
    CG_DrawDebug_DrawXAnimLodInfoGlobal((const LocalClientNum_t)v10);
  AimAssist_DrawDebugOverlay((LocalClientNum_t)v10);
  v66 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  Shake::DebugDraw(&v66->viewShake, (const LocalClientNum_t)v10);
  AdvancedSwayState::DebugDrawText(&v66->vmMotionState, (const LocalClientNum_t)v10);
  v67 = DVARBOOL_cg_drawDebugBonesClosest;
  if ( !DVARBOOL_cg_drawDebugBonesClosest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesClosest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v67->current.enabled )
  {
    v68 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
    RefdefView_GetOrg(&v68->refdef.view, (vec3_t *)&color);
    CG_DrawDebug_UpdateDebugBonesClosestEntity((const LocalClientNum_t)v10, (const vec3_t *)&color);
  }
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(vertAlign) = 2;
    LODWORD(horzAlign) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", horzAlign, vertAlign) )
      __debugbreak();
  }
  v69 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  ParticleManager::DebugDraw(&g_particleManager[v10], v69->time);
  v70 = DVARINT_cg_drawDebugBones;
  if ( !DVARINT_cg_drawDebugBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  v71 = v70->current.integer;
  if ( v71 != 2047 && v71 >= 0 )
  {
    v72 = DVARINT_cg_drawDebugBonesType;
    if ( !DVARINT_cg_drawDebugBonesType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    v73 = v72->current.integer;
    v74 = DVARSTR_cg_drawDebugBonesNameFilter;
    if ( !DVARSTR_cg_drawDebugBonesNameFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesNameFilter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    string = v74->current.string;
    v76 = DVARBOOL_cg_drawDebugBonesBind;
    if ( !DVARBOOL_cg_drawDebugBonesBind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesBind") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v76);
    CG_DrawDebug_DrawBones((const LocalClientNum_t)v10, v76->current.enabled, v73, string, v71);
  }
  v77 = DVARINT_cg_drawDebugLadder;
  if ( !DVARINT_cg_drawDebugLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugLadder") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v77);
  if ( v77->current.integer <= 0 )
    goto LABEL_126;
  v78 = DVARINT_cg_drawDebugLadder;
  if ( !DVARINT_cg_drawDebugLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugLadder") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  v79 = v78->current.integer;
  v80 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  ActiveStatics = BgStatic::GetActiveStatics();
  clientNum = v80->predictedPlayerState.clientNum;
  v83 = (CgStatic *)ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(v83, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)v83->GetClientInfo(v83, clientNum);
  v85 = CharacterInfo;
  if ( v79 == 3 && BG_HasLadderHand(&v80->predictedPlayerState) )
  {
    viewModelDObj = v80->m_weaponHand[1].viewModelDObj;
    XAnimIndex = 376;
    goto LABEL_123;
  }
  if ( PlayerASM_IsEnabled() )
  {
    viewModelDObj = Com_GetClientDObj(v80->predictedPlayerState.clientNum, (LocalClientNum_t)v10);
    if ( v79 == 1 )
    {
      animationNumber = v85->legs.animationNumber;
      animsetIndex = v85->legs.animsetIndex;
    }
    else
    {
      animationNumber = v85->torso.animationNumber;
      animsetIndex = v85->torso.animsetIndex;
    }
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(animsetIndex, animationNumber);
LABEL_123:
    if ( viewModelDObj && XAnimIsCustomNodeByName(viewModelDObj->tree->anims, XAnimIndex, scr_const.xanimLadderClimb) )
      XAnimLadderClimb_DrawDebug(viewModelDObj, XAnimIndex);
  }
LABEL_126:
  v90 = DVARBOOL_cg_drawDebugDoors;
  if ( !DVARBOOL_cg_drawDebugDoors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugDoors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  if ( v90->current.enabled )
    CG_Door_DrawDebug((const LocalClientNum_t)v10);
  v91 = DVARBOOL_cg_debugDrawHandDragInfo;
  if ( !DVARBOOL_cg_debugDrawHandDragInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawHandDragInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v91);
  if ( v91->current.enabled )
  {
    _RBX = DCONST_DVARFLT_player_swimDragHandLookAtOffset;
    if ( !DCONST_DVARFLT_player_swimDragHandLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimDragHandLookAtOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
    AngleVectors(&_RBX->predictedPlayerState.viewangles, &forward, NULL, (vec3_t *)&color);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsp+130h+forward]
      vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      vmulss  xmm0, xmm6, dword ptr [rsp+130h+forward+4]
      vmovss  dword ptr [rsp+130h+forward], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmulss  xmm0, xmm6, dword ptr [rsp+130h+forward+8]
      vmovss  dword ptr [rsp+130h+forward+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+40h]
      vmovss  dword ptr [rsp+130h+forward+8], xmm1
    }
    CL_AddDebugLine(&_RBX->predictedPlayerState.origin, &forward, &colorOrange, 0, 0, 0);
    CL_AddDebugLine(&_RBX->predictedPlayerState.origin, &_RBX->lastDragPosition, &colorRed, 0, 0, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+67580h]
      vsubss  xmm2, xmm0, dword ptr [rbx+38h]
      vmovss  xmm1, dword ptr [rbx+67584h]
      vmovss  xmm0, dword ptr [rbx+67588h]
      vsubss  xmm3, xmm1, dword ptr [rbx+3Ch]
      vsubss  xmm4, xmm0, dword ptr [rbx+40h]
      vmulss  xmm2, xmm2, dword ptr [rbp+30h+var_B0]
      vmulss  xmm1, xmm3, dword ptr [rbp+30h+var_B0+4]
      vmulss  xmm0, xmm4, dword ptr [rbp+30h+var_B0+8]
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm4, xmm3, xmm0
      vcomiss xmm4, xmm9
    }
    if ( v110 )
      __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
    else
      __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
    __asm { vmovups xmmword ptr [rbp+30h+var_A0], xmm0 }
    CL_AddDebugLine(&forward, &_RBX->lastDragPosition, &v154, 0, 0, 0);
  }
  v112 = DVARINT_cg_debugDrawSpawnGroupLoot;
  __asm
  {
    vmovaps xmm9, [rsp+130h+var_70]
    vmovaps xmm6, [rsp+130h+var_40]
  }
  if ( !DVARINT_cg_debugDrawSpawnGroupLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawSpawnGroupLoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v112);
  if ( v112->current.integer > 0 )
    CG_DrawDebug_DrawSpawnGroupLoot((LocalClientNum_t)v10);
  v115 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
  if ( DCONST_DVARINT_cg_drawDebugAudioClientTriggers )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_cg_drawDebugAudioClientTriggers);
    if ( v115->current.integer > 0 )
      CG_DrawTriggerAudioState((const LocalClientNum_t)v10);
  }
  v116 = DCONST_DVARBOOL_cg_playerbreath_debug;
  if ( !DCONST_DVARBOOL_cg_playerbreath_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerbreath_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v116);
  if ( v116->current.enabled )
    CG_DrawPlayerBreathState((const LocalClientNum_t)v10);
  v117 = DCONST_DVARINT_snd_submix_debug_draw;
  if ( DCONST_DVARINT_snd_submix_debug_draw )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_submix_debug_draw);
    if ( v117->current.integer )
      SND_SubmixDebugDrawHUD((LocalClientNum_t)v10);
  }
  v118 = DCONST_DVARBOOL_snd_drawWeaponRefl;
  if ( DCONST_DVARBOOL_snd_drawWeaponRefl )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_drawWeaponRefl);
    if ( v118->current.enabled )
      SND_DrawWeapReflOverlay((LocalClientNum_t)v10);
  }
  v119 = DCONST_DVARINT_snd_debugPropagation;
  if ( DCONST_DVARINT_snd_debugPropagation )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_debugPropagation);
    if ( v119->current.integer > 0 )
      SND_DrawPropagationDebug((LocalClientNum_t)v10);
  }
  v120 = DCONST_DVARINT_snd_occlusionDebug;
  if ( DCONST_DVARINT_snd_occlusionDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_occlusionDebug);
    if ( v120->current.integer > 0 )
      SND_DrawOcclusionDebug((LocalClientNum_t)v10);
  }
  v121 = DCONST_DVARINT_snd_fullOcclusionDebug;
  if ( DCONST_DVARINT_snd_fullOcclusionDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_fullOcclusionDebug);
    if ( v121->current.integer > 0 )
      CG_DrawFullOcclusionDebug((LocalClientNum_t)v10);
  }
  v122 = DCONST_DVARBOOL_snd_bankDetailStreamingDebug;
  if ( DCONST_DVARBOOL_snd_bankDetailStreamingDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_bankDetailStreamingDebug);
    if ( v122->current.enabled )
      SND_BankDetailStream_Debug((LocalClientNum_t)v10);
  }
  v123 = DCONST_DVARBOOL_voice_drawDebug;
  if ( DCONST_DVARBOOL_voice_drawDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_voice_drawDebug);
    if ( v123->current.enabled )
      Voice_DrawDebug((LocalClientNum_t)v10);
  }
  v124 = DVARINT_cg_drawVisionSetMode;
  if ( !DVARINT_cg_drawVisionSetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVisionSetMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v124);
  if ( v124->current.integer > 0 )
  {
    v125 = DVARINT_cg_drawVisionSetMode;
    if ( !DVARINT_cg_drawVisionSetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVisionSetMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v125);
    CG_VisionSetDebugDraw((const LocalClientNum_t)v10, (visionSetPrintMode_t)v125->current.integer);
  }
  CG_DrawDebugCinematicCamera((LocalClientNum_t)v10);
  CG_DrawDebug_DrawLights((LocalClientNum_t)v10);
  CG_DrawDebug_DrawDynamiclightsetLights((LocalClientNum_t)v10);
  CG_DrawDebug_DrawLGVDebugOverlay((LocalClientNum_t)v10);
  CG_DrawDebug_DrawMemoryDebugOverlays((const LocalClientNum_t)v10);
  if ( DevGui_IsActive() )
    CG_DrawDebugShaderOverlay((LocalClientNum_t)v10);
  v126 = DVARBOOL_cg_inputLatencyDevice;
  if ( !DVARBOOL_cg_inputLatencyDevice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_inputLatencyDevice") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v126);
  if ( v126->current.enabled )
  {
    if ( ClActiveClient::GetClient((const LocalClientNum_t)v10)->m_latencyDeviceState )
      __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
    else
      __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
    __asm { vmovups xmmword ptr [rbp+30h+var_A0], xmm0 }
    _RAX = ScrPlace_GetActivePlacement((const LocalClientNum_t)v10);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+34h]
      vaddss  xmm1, xmm0, dword ptr [rax+2Ch]
      vmovss  xmm0, dword ptr [rax+30h]
      vsubss  xmm2, xmm1, xmm10
      vaddss  xmm1, xmm0, dword ptr [rax+28h]
      vmulss  xmm2, xmm2, cs:__real@3f000000; y
      vsubss  xmm4, xmm1, xmm10
      vmulss  xmm1, xmm4, cs:__real@3f000000; x
      vmovaps xmm3, xmm10; width
      vmovss  dword ptr [rsp+130h+fmt], xmm10
    }
    CG_Draw2DRect(_RAX, *(float *)&_XMM1, *(float *)&_XMM2_8, *(float *)&_XMM3, fmtb, 1, 1, &v154, cgMedia.whiteMaterial);
  }
  v136 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v10);
  CL_Streaming_DrawOverlay(v136);
  CG_DrawDebug_DrawTransientQueueOverlay((const LocalClientNum_t)v10, v137, _XMM2_8);
  CG_DrawDebug_DrawEntityWorkersOverlay((const LocalClientNum_t)v10, *(double *)&_XMM1);
  CG_DrawDebug_DrawFileReadHistoryOverlay((const LocalClientNum_t)v10);
  __asm { vmovaps xmm10, [rsp+130h+var_80] }
}

/*
==============
CgDrawDebug::DrawFullScreenDebugOverlays
==============
*/
void CgDrawDebug::DrawFullScreenDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum, double a3, double a4)
{
  double v5; 
  __int64 v9; 
  CgDrawDebug *v10; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v12; 
  const ScreenPlacement *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int integer; 
  const dvar_t *v20; 
  __int64 v21; 
  const dvar_t *v22; 
  const scrContext_t *v23; 
  unsigned int MaxChildScriptVars; 
  unsigned int NumChildScriptVars; 
  const char *v26; 
  unsigned int MaxParentScriptVars; 
  unsigned int NumParentScriptVars; 
  const char *v33; 
  unsigned int NumScriptThreads; 
  const char *v37; 
  unsigned int StringUsage; 
  const char *v41; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const ScreenPlacement *v46; 
  int v51; 
  char **v52; 
  bool v57; 
  cg_t *LocalClientGlobals; 
  double v65; 
  __int64 forceColor; 
  __int64 shadow; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  vec2_t inOutProfilePos; 
  ScriptableBg_DrawDebugInfo outOrg; 
  char *outInfoStrings[26]; 
  char dest[256]; 

  v9 = localClientNum;
  v10 = this;
  if ( !Sys_IsRenderThread() )
  {
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8960, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    v12 = DVARBOOL_cg_drawVersion;
    v13 = ActivePlacement;
    if ( !DVARBOOL_cg_drawVersion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      CG_DrawDebug_DrawVersion();
    v14 = DVARBOOL_cg_drawBspVersion;
    if ( !DVARBOOL_cg_drawBspVersion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      CG_DrawDebug_DrawBspVersion();
    v15 = DVARINT_cg_drawTerrainStreamingInfo;
    if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer > 0 )
      CG_DrawDebug_DrawSuperTerrainInfo((const LocalClientNum_t)v9);
    v16 = DVARINT_cg_drawClutterInfo;
    if ( !DVARINT_cg_drawClutterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClutterInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer )
      CG_DrawDebug_DrawClutterInfo(*(double *)&_XMM0, v5);
    R_DecalVolumes_DrawOverlay((LocalClientNum_t)v9);
    CG_DebugDraw_DrawAnimWeightsGraph((LocalClientNum_t)v9, v5, a3, a4);
    v10->DrawGameMsgWindows(v10, (const LocalClientNum_t)v9, v13);
    integer = fx_mark_profile->current.integer;
    if ( integer <= 0 )
    {
      Particle_DrawProfiler((LocalClientNum_t)v9);
      v20 = DVARINT_snd_drawInfo;
      if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_drawInfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.integer )
      {
        CG_DrawDebug_DrawSoundOverlay(v13, v21, a3);
      }
      else
      {
        CG_DrawDebug_PlayerFootstep((LocalClientNum_t)v9, v13);
        CG_DrawDebug_PlayerBullet((LocalClientNum_t)v9, v13);
        Stream_Debug_DrawXPakHeatMap();
        Stream_Debug_DrawCameraVelocity((LocalClientNum_t)v9, v13);
        v22 = DVARBOOL_cg_drawScriptUsageServer;
        if ( !DVARBOOL_cg_drawScriptUsageServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawScriptUsageServer") )
          __debugbreak();
        __asm
        {
          vmovaps [rsp+2C8h+var_48], xmm6
          vmovaps [rsp+2C8h+var_58], xmm7
        }
        Dvar_CheckFrontendServerThread(v22);
        if ( v22->current.enabled )
        {
          v23 = ScriptContext_Server();
          MaxChildScriptVars = Scr_GetMaxChildScriptVars(v23);
          NumChildScriptVars = Scr_GetNumChildScriptVars(v23);
          v26 = j_va("child total: %d/%d", NumChildScriptVars, MaxChildScriptVars);
          __asm
          {
            vmovss  xmm7, cs:__real@41600000
            vmovss  xmm6, cs:__real@43960000
            vmovss  xmm2, cs:__real@42a80000; y
            vmovss  [rsp+2C8h+var_290], xmm7
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(v13, *(float *)&_XMM1, *(float *)&_XMM2, v26, &colorWhite, 1, 1, v68, 1);
          MaxParentScriptVars = Scr_GetMaxParentScriptVars(v23);
          NumParentScriptVars = Scr_GetNumParentScriptVars(v23);
          v33 = j_va("parent total: %d/%d", NumParentScriptVars, MaxParentScriptVars);
          __asm
          {
            vmovss  xmm2, cs:__real@42c40000; y
            vmovss  [rsp+2C8h+var_290], xmm7
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(v13, *(float *)&_XMM1, *(float *)&_XMM2, v33, &colorWhite, 1, 1, v69, 1);
          NumScriptThreads = Scr_GetNumScriptThreads(v23);
          v37 = j_va("num threads: %d", NumScriptThreads);
          __asm
          {
            vmovss  xmm2, cs:__real@42e00000; y
            vmovss  [rsp+2C8h+var_290], xmm7
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(v13, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorWhite, 1, 1, v70, 1);
          StringUsage = Scr_GetStringUsage();
          v41 = j_va("string usage: %d", StringUsage);
          __asm
          {
            vmovss  xmm2, cs:__real@42fc0000; y
            vmovss  [rsp+2C8h+var_290], xmm7
            vmovaps xmm1, xmm6; x
          }
          CG_DrawStringExt(v13, *(float *)&_XMM1, *(float *)&_XMM2, v41, &colorWhite, 1, 1, v71, 1);
        }
        v44 = DVARBOOL_cg_drawrumbledebug;
        if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        if ( v44->current.enabled )
          CG_Rumble_DrawDebug((LocalClientNum_t)v9);
        CgAntiLag::DrawDebug((LocalClientNum_t)v9);
        CG_DrawDebug_DrawWorldUpDisplay((LocalClientNum_t)v9);
        v45 = DVARBOOL_entitySpawnDebug;
        if ( !DVARBOOL_entitySpawnDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entitySpawnDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        if ( v45->current.enabled && CG_GetLocalClientGlobals((const LocalClientNum_t)v9) )
        {
          v46 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
          if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10948, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
            __debugbreak();
          Com_sprintf(dest, 0x100ui64, "World Up Debug");
          __asm
          {
            vmovss  xmm7, cs:__real@41000000
            vmovss  xmm1, cs:__real@40000000; x
            vmovss  [rsp+2C8h+var_290], xmm7
            vmovaps xmm2, xmm7; y
          }
          CG_DrawStringExt(v46, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorYellow, 0, 1, v72, 0);
          __asm { vmovss  xmm6, cs:__real@41800000 }
          inOutProfilePos.v[0] = 0.0;
          G_DebugGetSpawnedEntityList(25, outInfoStrings, (int *)&inOutProfilePos);
          v51 = 0;
          if ( SLODWORD(inOutProfilePos.v[0]) > 0 )
          {
            __asm { vmovaps [rsp+2C8h+var_68], xmm8 }
            v52 = outInfoStrings;
            __asm { vmovss  xmm8, cs:__real@40800000 }
            do
            {
              Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, *v52);
              __asm
              {
                vmovss  [rsp+2C8h+var_290], xmm7
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm8; x
              }
              CG_DrawStringExt(v46, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v73, 0);
              ++v51;
              ++v52;
              __asm { vaddss  xmm6, xmm6, xmm7 }
            }
            while ( v51 < SLODWORD(inOutProfilePos.v[0]) );
            v10 = this;
            __asm { vmovaps xmm8, [rsp+2C8h+var_68] }
          }
        }
        CG_ModelPreviewerDrawInfo((LocalClientNum_t)v9, v13);
        CG_CreateFx_DrawInfo((LocalClientNum_t)v9, v13);
        v57 = Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING);
        __asm
        {
          vmovaps xmm7, [rsp+2C8h+var_58]
          vmovaps xmm6, [rsp+2C8h+var_48]
        }
        if ( v57 )
        {
          if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
          {
            LODWORD(shadow) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
              __debugbreak();
          }
          if ( (unsigned int)v9 >= CgClientSideEffectsSystem::ms_allocatedCount )
          {
            LODWORD(shadow) = CgClientSideEffectsSystem::ms_allocatedCount;
            LODWORD(forceColor) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v9] )
          {
            LODWORD(shadow) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", shadow) )
              __debugbreak();
          }
          CgClientSideEffectsSystem::Draw3D(CgClientSideEffectsSystem::ms_cseSystemArray[v9], v13);
        }
        WorldCollision_Debug_Draw(v13);
        StaticModels_Debug_Draw(v13);
        PatchCollision_Debug_Draw(v13);
        Physics_DrawDebug(v13);
        DynEnt_DrawDebug((LocalClientNum_t)v9, v13);
        Cloth_Debug_SetRefDecoder(CG_Cloth_ConvertRefToString);
        Cloth_Debug_SetRefEntNumDecoder(CG_Cloth_ConvertRefToEntNum);
        Cloth_Debug_Draw(v13);
        CG_ClientModel_DebugDraw(v13);
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg.viewPos);
        _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+6944h]
          vmovss  [rsp+2C8h+var_25C], xmm0
          vmovss  xmm1, dword ptr [rax+6948h]
          vmovss  [rsp+2C8h+var_258], xmm1
          vmovss  xmm0, dword ptr [rax+694Ch]
          vmovss  [rsp+2C8h+var_254], xmm0
        }
        ScriptableBg_DrawDebug(v13, &outOrg);
        CG_Event_Debug_Draw(v13);
        CG_Edge_DrawDebug((const LocalClientNum_t)v9);
        if ( glass_debug->current.enabled )
          CG_Glass_DrawDebug((LocalClientNum_t)v9);
        CL_Cameraman_DrawDebugInformation((LocalClientNum_t)v9, v13);
        CG_VehicleHelicopter_DebugDraw((LocalClientNum_t)v9, v13);
        v65 = ((double (__fastcall *)(CgDrawDebug *, _QWORD, const ScreenPlacement *))v10->PrintUpperRightDebugInfo)(v10, (unsigned int)v9, v13);
        CG_DrawDebug_OverlayTitle(v65);
        v10->DrawTransientOverlays(v10, (const LocalClientNum_t)v9);
        CG_DebugDraw_ShowXModelRanking((const LocalClientNum_t)v9);
        CG_CalloutMarkerPing_DebugDraw((const LocalClientNum_t)v9);
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:FX_PROFILE_LINE_HEIGHT
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+2C8h+inOutProfilePos], xmm0
        vmovss  dword ptr [rsp+2C8h+inOutProfilePos+4], xmm1
      }
      FX_DrawMarkProfile((LocalClientNum_t)(integer - 1), CG_DrawDebug_DrawFxText, &inOutProfilePos);
    }
  }
}

/*
==============
GetBudgetLimitColor
==============
*/

vec4_t *__fastcall GetBudgetLimitColor(double val, double maxVal, double medThreshold, double hiThreshold)
{
  char v4; 
  char v5; 
  vec4_t *result; 

  __asm
  {
    vandpd  xmm4, xmm1, cs:__xmm@7fffffffffffffff7fffffffffffffff
    vcomisd xmm4, cs:__real@3cb0000000000000
  }
  if ( v4 | v5 )
    return &colorPink;
  __asm
  {
    vdivsd  xmm0, xmm0, xmm1
    vcomisd xmm0, xmm3
  }
  if ( !(v4 | v5) )
    return &colorRed;
  __asm { vcomisd xmm0, xmm2 }
  result = &colorYellow;
  if ( v4 | v5 )
    return &colorWhite;
  return result;
}

/*
==============
CgDrawDebug::GetCornerFarRight
==============
*/
float CgDrawDebug::GetCornerFarRight(CgDrawDebug *this, const ScreenPlacement *scrPlace)
{
  const char *v4; 

  _RDI = scrPlace;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    _RBX = DVARVEC2_cg_debugInfoCornerOffsetMP;
    if ( DVARVEC2_cg_debugInfoCornerOffsetMP )
      goto LABEL_8;
    v4 = "cg_debugInfoCornerOffsetMP";
  }
  else
  {
    _RBX = DVARVEC2_cg_debugInfoCornerOffsetSP;
    if ( DVARVEC2_cg_debugInfoCornerOffsetSP )
      goto LABEL_8;
    v4 = "cg_debugInfoCornerOffsetSP";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  xmm2, dword ptr [rbx+28h]
    vsubss  xmm1, xmm0, dword ptr [rdi+28h]
    vaddss  xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::GetCornerLabelWidth
==============
*/
float CgDrawDebug::GetCornerLabelWidth(CgDrawDebug *this, const char *label)
{
  const dvar_t *v3; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  R_TextWidth(label, 0, cls.smallDevFont);
  v3 = DCONST_DVARFLT_cg_small_dev_string_fontscale;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  if ( !DCONST_DVARFLT_cg_small_dev_string_fontscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_small_dev_string_fontscale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3f400000
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintBuildName
==============
*/

float __fastcall CgDrawDebug::PrintBuildName(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  const dvar_t *v6; 
  float v18; 
  float v19; 
  float v20; 

  v6 = DVARBOOL_cg_drawBuildName;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !DVARBOOL_cg_drawBuildName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBuildName") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm2, cs:__real@3f400000
      vmovss  xmm1, cs:__real@3f4ccccd
      vmovss  [rsp+78h+var_30], xmm1
      vmovss  [rsp+78h+var_38], xmm2
      vmovss  [rsp+78h+var_40], xmm2
      vxorps  xmm3, xmm3, xmm3; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, "1-game_test.exe", (const char *)&queryFormat.fmt + 3, &colorWhite, v18, v19, v20, 0);
    __asm { vaddss  xmm0, xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintCamAndMovementInfo
==============
*/

float __fastcall CgDrawDebug::PrintCamAndMovementInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  const dvar_t *v20; 
  int integer; 
  float baseFovAdjustment; 
  char *v43; 
  const dvar_t *v44; 
  const char *v45; 
  int m_movingPlatformEntity_low; 
  const cpose_t *Pose; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  char v63; 
  char v64; 
  const char *v85; 
  char *v98; 
  const dvar_t *v99; 
  const dvar_t *v110; 
  char *v124; 
  const dvar_t *v125; 
  char *v137; 
  const dvar_t *v138; 
  char *v155; 
  const dvar_t *v156; 
  const char *v170; 
  __int64 v174; 
  const char *v181; 
  int v185; 
  const char *v186; 
  const dvar_t *v194; 
  const char *v202; 
  const char *v235; 
  char *v236; 
  const dvar_t *v237; 
  const char *v239; 
  char *v255; 
  const dvar_t *v256; 
  const char *v257; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  float fmtc; 
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
  float s; 
  float sa; 
  float sb; 
  float sc; 
  float sd; 
  CgDrawDebug *v293; 
  CgDrawDebug *v294; 
  CgDrawDebug *v295; 
  CgDrawDebug *v296; 
  vec4_t v299; 
  vec3_t outOrigin; 
  vec4_t color; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-78h], xmm8 }
  _RBX = scrPlace;
  __asm { vmovaps xmm8, xmm3 }
  if ( bg_lastParsedWeaponIndex )
  {
    v20 = DVARINT_cg_drawCamAndMovementInfo;
    if ( !DVARINT_cg_drawCamAndMovementInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCamAndMovementInfo") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+188h+var_58], xmm6
      vmovaps [rsp+188h+var_68], xmm7
      vmovaps [rsp+188h+var_88], xmm9
    }
    Dvar_CheckFrontendServerThread(v20);
    integer = v20->current.integer;
    if ( integer == 1 )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, _RBX);
      __asm { vmovaps xmm9, xmm0 }
      _R13 = CG_GetLocalClientGlobals(localClientNum);
      _RAX = CG_GetViewFovBySpace((ClientFov *)&v299, localClientNum, CG_FovSpace_Scene, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+44h]
        vmovss  xmm1, dword ptr [r13+48h]
        vmulss  xmm2, xmm0, xmm0
        vmovsd  xmm3, qword ptr [rax]
      }
      baseFovAdjustment = _RAX->baseFovAdjustment;
      __asm
      {
        vmovss  xmm0, dword ptr [r13+4Ch]
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm4, xmm2, xmm1
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm0, xmm4
        vsqrtss xmm2, xmm1, xmm1
        vsqrtss xmm0, xmm4, xmm4
        vmovsd  qword ptr [rsp+188h+var_128], xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm0, xmm0
      }
      v299.v[2] = baseFovAdjustment;
      __asm
      {
        vmovq   r8, xmm2
        vmovq   r9, xmm3
        vmovq   rdx, xmm1
      }
      v43 = j_va("Vel: %5.2f Vel3D: %5.2f FOV: %4.2f \n", _RDX, _R8, _R9);
      v44 = DVARBOOL_cg_drawFPSLabels;
      v45 = v43;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      __asm
      {
        vmovss  xmm3, cs:__real@3f400000; xScale
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+188h+fmt], xmm3
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v45, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3f4ccccd
        vaddss  xmm8, xmm8, xmm1
      }
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&_R13->predictedPlayerState.movingPlatforms) )
      {
        m_movingPlatformEntity_low = SLOWORD(_R13->predictedPlayerState.movingPlatforms.m_movingPlatformEntity);
        if ( (CG_GetEntity(localClientNum, m_movingPlatformEntity_low)->flags & 1) != 0 )
        {
          Pose = CG_GetPose(localClientNum, m_movingPlatformEntity_low);
          if ( !Pose )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2718, ASSERT_TYPE_ASSERT, "(moverPose)", (const char *)&queryFormat, "moverPose") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 567, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
          }
          if ( !Pose->prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
            __debugbreak();
          FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(Pose->prevOrigin.Get_prevOrigin, Pose);
          FunctionPointer_prevOrigin(&Pose->prevOrigin.prevOrigin, (vec3_t *)&v299);
          CG_GetPoseOrigin(Pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+188h+outOrigin]
            vsubss  xmm3, xmm0, dword ptr [rsp+188h+var_128]
            vmovss  xmm1, dword ptr [rsp+188h+outOrigin+4]
            vsubss  xmm4, xmm1, dword ptr [rsp+188h+var_128+4]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r13+65E4h]
            vmulss  xmm2, xmm0, cs:__real@3a83126f
            vcvtss2sd xmm1, xmm2, xmm2
            vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
          }
          if ( !(v63 | v64) )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vdivss  xmm2, xmm0, xmm2
              vmovss  xmm0, dword ptr [rsp+188h+outOrigin+8]
              vsubss  xmm1, xmm0, dword ptr [rsp+188h+var_128+8]
              vmulss  xmm4, xmm2, xmm4
              vmulss  xmm5, xmm1, xmm2
              vmulss  xmm6, xmm2, xmm3
              vmulss  xmm1, xmm4, xmm4
              vcvtss2sd xmm3, xmm4, xmm4
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm4, xmm1, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm4, xmm4, xmm1
              vsqrtss xmm0, xmm4, xmm4
              vcvtss2sd xmm1, xmm0, xmm0
              vcvtss2sd xmm2, xmm6, xmm6
              vcvtss2sd xmm7, xmm5, xmm5
              vmovq   rdx, xmm1
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovsd  [rsp+188h+fmt], xmm7
            }
            v85 = j_va("Mover Speed: %6.2f Mover Velocity: %8.2f %8.2f %8.2f\n", _RDX, _R8, _R9, fmta);
            __asm
            {
              vmovaps xmm3, xmm8; posY
              vmovaps xmm2, xmm9; posX
            }
            CgDrawDebug::CornerPrintNoLabel(this, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, v85, &colorWhite);
            __asm { vaddss  xmm8, xmm8, xmm0 }
          }
        }
      }
    }
    else if ( integer >= 2 )
    {
      __asm
      {
        vmovaps [rsp+188h+var_98], xmm10
        vmovaps [rsp+188h+var_A8], xmm11
        vmovaps [rsp+188h+var_B8], xmm12
        vmovaps [rsp+188h+var_C8], xmm13
        vmovaps [rsp+188h+var_D8], xmm14
        vmovaps [rsp+188h+var_E8], xmm15
      }
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, _RBX);
      __asm { vmovaps xmm12, xmm0 }
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm1, dword ptr [rax+44h]
        vmovss  xmm2, dword ptr [rax+48h]
        vmulss  xmm3, xmm1, xmm1
        vmulss  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm3, xmm2
        vsqrtss xmm1, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v98 = j_va("Velocity 2d: %5.2f \n", _RDX);
      v99 = DVARBOOL_cg_drawFPSLabels;
      v293 = (CgDrawDebug *)v98;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v99);
      __asm
      {
        vmovss  xmm10, cs:__real@3f400000
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm8; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, (const char *)v293, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vmovss  xmm11, cs:__real@3f4ccccd
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, xmm11
        vaddss  xmm13, xmm8, xmm0
      }
      if ( !BG_GetSuitDef(_RDI->predictedPlayerState.suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2760, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      _RAX = CG_GetViewFovBySpace((ClientFov *)&v299, localClientNum, CG_FovSpace_Scene, 0);
      v110 = DCONST_DVARMPBOOL_fovUseTimeBasedBlends;
      __asm { vmovsd  xmm9, qword ptr [rax] }
      v299.v[2] = _RAX->baseFovAdjustment;
      __asm { vmovsd  qword ptr [rsp+188h+var_128], xmm9 }
      if ( !DCONST_DVARMPBOOL_fovUseTimeBasedBlends && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovUseTimeBasedBlends") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v110);
      *(double *)&_XMM0 = CG_View_GetClientAspectRatio(localClientNum);
      __asm
      {
        vmovaps xmm8, xmm0
        vmulss  xmm0, xmm9, cs:__real@3c0efa35; X
      }
      *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm0, cs:__real@3faaaaab; X
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm14, xmm0, cs:__real@42e52ee0
        vmulss  xmm1, xmm6, xmm8
        vmulss  xmm0, xmm1, xmm10; X
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm7, xmm0, cs:__real@42e52ee0
        vcvtss2sd xmm2, xmm9, xmm9
        vcvtss2sd xmm1, xmm8, xmm8
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v124 = j_va("AspectRatio: %2.2f legacy FOV: %5.2f\n", _RDX, _R8);
      v125 = DVARBOOL_cg_drawFPSLabels;
      v294 = (CgDrawDebug *)v124;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v125);
      __asm
      {
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm13; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, (const char *)v294, &colorLtCyan, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm6, xmm13, xmm1
        vcvtss2sd xmm1, xmm7, xmm7
        vcvtss2sd xmm2, xmm14, xmm14
        vmovq   rdx, xmm1
        vmovq   r8, xmm2
      }
      v137 = j_va("horz Fov: %5.2f horz Fov (16:9): %5.2f\n", _RDX, _R8);
      v138 = DVARBOOL_cg_drawFPSLabels;
      v295 = (CgDrawDebug *)v137;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v138);
      __asm
      {
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, (const char *)v295, &colorLtCyan, 6, cls.smallDevFont);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+1E8h]
        vmovss  xmm2, dword ptr [rdi+1E4h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm6, xmm6, xmm1
        vmovss  xmm1, dword ptr [rdi+1E0h]
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   rdx, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v155 = j_va("View Angles (%5.2f, %5.2f, %5.2f) \n", _RDX, _R8, _R9);
      v156 = DVARBOOL_cg_drawFPSLabels;
      v296 = (CgDrawDebug *)v155;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v156);
      __asm
      {
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, (const char *)v296, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vmovss  xmm13, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm15, xmm6, xmm1
      }
      if ( integer == 3 )
      {
        *(double *)&_XMM0 = CL_GetMaxPitchSpeed(localClientNum);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = CL_GetMaxYawSpeed(localClientNum);
        __asm
        {
          vcvtss2sd xmm2, xmm0, xmm0
          vcvtss2sd xmm1, xmm6, xmm6
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
        }
        v170 = j_va("Max Rotation Speed: Pitch %5.4f, Yaw %5.4f) \n", _RDX, _R8);
        __asm
        {
          vmovaps xmm3, xmm15; posY
          vmovaps xmm2, xmm12; posX
        }
        CgDrawDebug::CornerPrintNoLabel(this, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, v170, &colorLtGrey);
        __asm { vaddss  xmm6, xmm15, xmm0 }
        *(_QWORD *)outOrigin.v = ClActiveClient::GetClient(localClientNum);
        v174 = *(_QWORD *)outOrigin.v;
        __asm
        {
          vmovss  xmm2, dword ptr [rax+1CCh]
          vmovss  xmm1, dword ptr [rax+1C8h]
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
        }
        v181 = j_va("Accumulated Input: Pitch %5.4f, Yaw %5.4f) \n", _RDX, _R8);
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm12; posX
        }
        CgDrawDebug::CornerPrintNoLabel(this, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, v181, &colorLtGrey);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        v185 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_accumulatedInputExpirationTime, "cl_accumulatedInputExpirationTime") - *(_DWORD *)(v174 + 464);
        if ( v185 < 0 )
          v185 = 0;
        v186 = j_va("RESET TIME: %d \n", (unsigned int)v185);
        if ( v185 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, r14d
            vmulss  xmm0, xmm1, cs:__real@3ea8f5c3
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, ebp
            vcomiss xmm2, xmm0
            vmulss  xmm0, xmm1, cs:__real@3f28f5c3
            vcomiss xmm0, xmm2
          }
          _RCX = &colorYellow;
        }
        else
        {
          _RCX = &colorRed;
        }
        v194 = DVARBOOL_cg_drawFPSLabels;
        __asm
        {
          vmovups xmm0, xmmword ptr [rcx]
          vmovups xmmword ptr [rsp+188h+var_108], xmm0
        }
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v194);
        __asm
        {
          vmovaps xmm3, xmm10; xScale
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm12; x
          vmovss  dword ptr [rsp+188h+fmt], xmm10
        }
        CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v186, &color, 6, cls.smallDevFont);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm11
          vaddss  xmm6, xmm6, xmm1
        }
        v202 = j_va("Shellshock: start: %d duration: %d\n", (unsigned int)_RDI->shellshock.startTime, (unsigned int)_RDI->shellshock.duration);
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm12; posX
        }
        *(double *)&_XMM0 = CgDrawDebug::CornerPrintNoLabel(this, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, v202, &colorWhite);
        __asm { vaddss  xmm15, xmm6, xmm0 }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput, "cl_accumulateShellshockedMouseInput") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->predictedPlayerState.pm_flags, ACTIVE, 0x15u) )
        {
          __asm
          {
            vmovss  xmm1, cs:__real@3f000000
            vmulss  xmm7, xmm1, dword ptr [rbx+20h]
            vmulss  xmm8, xmm1, dword ptr [rbx+24h]
            vmovss  dword ptr [rsp+188h+var_138], xmm7
            vmovss  [rsp+188h+var_130], xmm8
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxAccumulatedMouseInput, "cl_maxAccumulatedMouseInput");
          __asm
          {
            vmovaps xmm1, xmm0
            vmovss  xmm0, dword ptr [rbx+24h]
            vcomiss xmm0, xmm1
          }
          if ( v63 | v64 )
          {
            __asm
            {
              vdivss  xmm0, xmm0, xmm1
              vmulss  xmm14, xmm0, xmm11
            }
          }
          else
          {
            __asm { vmovaps xmm14, xmm13 }
          }
          __asm
          {
            vmulss  xmm0, xmm14, xmm1
            vsubss  xmm6, xmm7, xmm0
            vaddss  xmm9, xmm0, xmm7
            vaddss  xmm7, xmm0, [rsp+188h+var_130]
            vsubss  xmm8, xmm8, xmm0
            vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
            vmovss  dword ptr [rsp+188h+s], xmm13
            vmovaps xmm3, xmm9; p2x
            vmovaps xmm2, xmm8; p1y
            vmovaps xmm1, xmm6; p1x
            vmovss  dword ptr [rsp+188h+fmt], xmm8
            vmovups xmmword ptr [rsp+188h+var_128], xmm0
          }
          CG_Draw2DLine(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, s, 5, 5, &v299, cgMedia.whiteMaterial);
          __asm
          {
            vmovss  dword ptr [rsp+188h+s], xmm13
            vmovaps xmm3, xmm6; p2x
            vmovaps xmm2, xmm8; p1y
            vmovaps xmm1, xmm6; p1x
            vmovss  dword ptr [rsp+188h+fmt], xmm7
          }
          CG_Draw2DLine(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, sa, 5, 5, &v299, cgMedia.whiteMaterial);
          __asm
          {
            vmovss  dword ptr [rsp+188h+s], xmm13
            vmovaps xmm3, xmm9; p2x
            vmovaps xmm2, xmm7; p1y
            vmovaps xmm1, xmm6; p1x
            vmovss  dword ptr [rsp+188h+fmt], xmm7
          }
          CG_Draw2DLine(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, sb, 5, 5, &v299, cgMedia.whiteMaterial);
          __asm
          {
            vmovss  dword ptr [rsp+188h+s], xmm13
            vmovaps xmm3, xmm9; p2x
            vmovaps xmm2, xmm8; p1y
            vmovaps xmm1, xmm9; p1x
            vmovss  dword ptr [rsp+188h+fmt], xmm7
          }
          CG_Draw2DLine(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, sc, 5, 5, &v299, cgMedia.whiteMaterial);
          __asm
          {
            vmovss  xmm2, [rsp+188h+var_130]; p1y
            vmovss  xmm1, dword ptr [rsp+188h+var_138]; p1x
            vaddss  xmm0, xmm2, dword ptr [rax+1C8h]
            vaddss  xmm3, xmm1, dword ptr [rax+1CCh]
            vmulss  xmm4, xmm0, xmm14
            vmovss  dword ptr [rsp+188h+s], xmm13
            vmulss  xmm3, xmm3, xmm14; p2x
            vmovss  dword ptr [rsp+188h+fmt], xmm4
          }
          CG_Draw2DLine(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, sd, 5, 5, &colorYellow, cgMedia.whiteMaterial);
        }
      }
      v235 = "false";
      if ( _RDI->refdef.radialMotionBlur.enabled )
        v235 = "true";
      v236 = j_va("Radial Motion Blur Enabled: %s \n", v235);
      v237 = DVARBOOL_cg_drawFPSLabels;
      __asm { vmovaps xmm14, [rsp+188h+var_D8] }
      v239 = v236;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v237);
      __asm
      {
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm15; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, v239, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vsubss  xmm0, xmm13, dword ptr [rdi+1784Ch]
        vmovaps xmm13, [rsp+188h+var_C8]
        vaddss  xmm6, xmm15, xmm1
        vmovss  xmm1, dword ptr [rdi+17850h]
        vmovaps xmm15, [rsp+188h+var_E8]
      }
      if ( !_RDI->refdef.radialMotionBlur.enabled )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
        }
      }
      __asm
      {
        vcvtss2sd xmm2, xmm1, xmm1
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   rdx, xmm1
        vmovq   r8, xmm2
      }
      v255 = j_va("Blur Fade Radius: %1.4f Strength: %1.4f \n", _RDX, _R8);
      v256 = DVARBOOL_cg_drawFPSLabels;
      v257 = v255;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v256);
      __asm
      {
        vmovaps xmm3, xmm10; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+188h+fmt], xmm10
      }
      CG_DrawDevString(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, v257, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vmovaps xmm12, [rsp+188h+var_B8]
        vmovaps xmm10, [rsp+188h+var_98]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm11
        vmovaps xmm11, [rsp+188h+var_A8]
        vaddss  xmm8, xmm6, xmm1
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+188h+var_88]
      vmovaps xmm7, [rsp+188h+var_68]
      vmovaps xmm6, [rsp+188h+var_58]
    }
  }
  __asm
  {
    vmovaps xmm0, xmm8
    vmovaps xmm8, [rsp+188h+var_78]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintCinematicInfo
==============
*/

float __fastcall CgDrawDebug::PrintCinematicInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v15; 
  GfxColorimetry DisplayColorimetry; 
  const dvar_t *v28; 
  const char *v42; 
  const dvar_t *v43; 
  const dvar_t *v52; 
  const dvar_t *v61; 
  const dvar_t *v70; 
  bool IsColorimetryHDR; 
  const char *v80; 
  __int32 v81; 
  __int32 v82; 
  __int32 v83; 
  const char *v84; 
  const dvar_t *v85; 
  const dvar_t *v99; 
  const dvar_t *v113; 
  unsigned int BinkTotalFrames; 
  unsigned int BinkFrameNum; 
  const dvar_t *v124; 
  unsigned int frameCount; 
  __int64 v133; 
  unsigned int v139; 
  __int64 v140; 
  __int64 v162; 
  __int64 v173; 
  const dvar_t *v175; 
  const dvar_t *v190; 
  const dvar_t *v199; 
  __int64 v206; 
  const dvar_t *v209; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  float fmtc; 
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
  bool hdr; 
  unsigned int outTimeInMsec; 
  float framerate; 
  unsigned int height; 
  unsigned int width[4]; 
  CinematicPlaybackStats stats; 
  char dest[256]; 
  char outName[256]; 
  char outFlagsString[256]; 
  char v250[256]; 
  char outString[256]; 

  __asm { vmovaps [rsp+0B10h+var_D0], xmm15 }
  v15 = DVARBOOL_cg_drawCinematicInfo;
  __asm { vmovaps xmm15, xmm3 }
  if ( !DVARBOOL_cg_drawCinematicInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCinematicInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled && R_Cinematic_GetFilenameAndTimeInMsec(outName, 0x100ui64, &outTimeInMsec) && R_Cinematic_GetVideoInfo(width, &height, &framerate, &hdr) && R_Cinematic_GetOpenFlagsString(outFlagsString, 0x100ui64) && R_Cinematic_GetPlaybackFlagsString(v250, 0x100ui64) && R_Cinematic_GetStateString(outString, 0x100ui64) )
  {
    __asm
    {
      vmovaps [rsp+0B10h+var_40], xmm6
      vmovaps [rsp+0B10h+var_50], xmm7
      vmovaps [rsp+0B10h+var_60], xmm8
      vmovaps [rsp+0B10h+var_70], xmm9
      vmovaps [rsp+0B10h+var_80], xmm10
      vmovaps [rsp+0B10h+var_90], xmm11
      vmovaps [rsp+0B10h+var_B0], xmm13
    }
    DisplayColorimetry = R_GetDisplayColorimetry();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm10, xmm0, cs:__real@3a83126f
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rbx
    }
    if ( (__int64)(__rdtsc() - R_Cinematic_GetVideoStartTime()) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm1, xmm0, cs:__real@3f50624dd2f1a9fc
      vcvtsd2ss xmm11, xmm1, xmm1
    }
    Com_sprintf<256>((char (*)[256])dest, "Video: %s", outName);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v28 = DVARBOOL_cg_drawFPSLabels;
    __asm
    {
      vmovss  xmm7, cs:__real@40a00000
      vsubss  xmm6, xmm0, xmm7
    }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    __asm
    {
      vmovss  xmm13, cs:__real@3f400000
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm15; y
      vmovaps xmm1, xmm6; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vmovss  xmm8, cs:__real@3f4ccccd
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, xmm8
      vaddss  xmm6, xmm15, xmm0
      vmovss  xmm0, [rsp+0B10h+framerate]
      vcvtss2sd xmm0, xmm0, xmm0
    }
    v42 = (char *)&queryFormat.fmt + 3;
    if ( hdr )
      v42 = " HDR";
    __asm { vmovsd  [rsp+0B10h+fmt], xmm0 }
    Com_sprintf<256>((char (*)[256])dest, "Info: %u x %u @ %.0f%s", width[0], height, fmta, v42);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v43 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm6, xmm1
    }
    Com_sprintf<256>((char (*)[256])dest, "Open Flags: %s", outFlagsString);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v52 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm6, xmm1
    }
    Com_sprintf<256>((char (*)[256])dest, "Playback Flags: %s", v250);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v61 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm6, xmm1
    }
    Com_sprintf<256>((char (*)[256])dest, "State: %s", outString);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v70 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm9, xmm6, xmm1
    }
    IsColorimetryHDR = R_IsColorimetryHDR(DisplayColorimetry);
    v80 = "SDR";
    if ( IsColorimetryHDR )
      v80 = "HDR";
    if ( DisplayColorimetry )
    {
      v81 = DisplayColorimetry - 1;
      if ( v81 )
      {
        v82 = v81 - 1;
        if ( v82 )
        {
          v83 = v82 - 1;
          if ( v83 )
          {
            if ( v83 == 1 )
              v84 = "HSRGB";
            else
              v84 = "UNKNOWN";
          }
          else
          {
            v84 = "BT2020_PQ";
          }
        }
        else
        {
          v84 = "BT709_BT709";
        }
      }
      else
      {
        v84 = "BT709_BT1886";
      }
    }
    else
    {
      v84 = "BT709_SRGB";
    }
    Com_sprintf<256>((char (*)[256])dest, "Screen: %s (%s)", v84, v80);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v85 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm6, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v85);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm9; y
      vmovaps xmm1, xmm6; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm9, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (R_Cinematic_GetMemoryUsed() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_sprintf<256>((char (*)[256])dest, "Memory: %.3f MB", *(double *)&_XMM2);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v99 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v99);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vsubss  xmm2, xmm10, xmm11
      vcvtss2sd xmm3, xmm2, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvtss2sd xmm2, xmm10, xmm10
      vmulss  xmm1, xmm0, xmm8
      vmovq   r8, xmm2
      vmovq   r9, xmm3
      vaddss  xmm6, xmm6, xmm1
    }
    Com_sprintf<256>((char (*)[256])dest, "Video Time: %.3f (%6.3f)", *(double *)&_XMM2, *(double *)&_XMM3);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v113 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v113);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm6, xmm1
    }
    BinkTotalFrames = R_Cinematic_GetBinkTotalFrames();
    BinkFrameNum = R_Cinematic_GetBinkFrameNum();
    Com_sprintf<256>((char (*)[256])dest, "Video Frame: %u / %u", BinkFrameNum, BinkTotalFrames);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v124 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm9, xmm0, xmm7 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v124);
    __asm
    {
      vmovaps xmm3, xmm13; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+0B10h+fmt], xmm13
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, dest, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm15, xmm6, xmm1
    }
    R_Cinematic_GetPlaybackStats(&stats);
    if ( stats.frameCount )
    {
      __asm
      {
        vmovaps [rsp+0B10h+var_A0], xmm12
        vmovaps [rsp+0B10h+var_C0], xmm14
      }
      frameCount = stats.frameCount;
      if ( stats.frameCount > 0x3C )
        frameCount = 60;
      v133 = 0i64;
      __asm
      {
        vxorps  xmm12, xmm12, xmm12
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm14, xmm14, xmm14
        vxorps  xmm6, xmm6, xmm6
      }
      if ( frameCount >= 4 )
      {
        _RCX = &stats.frames[1].renderSelfTime;
        v139 = ((frameCount - 4) >> 2) + 1;
        v140 = v139;
        v133 = 4 * v139;
        do
        {
          __asm
          {
            vmaxss  xmm1, xmm6, dword ptr [rcx-14h]
            vmovss  xmm6, dword ptr [rcx+14h]
            vmovss  xmm4, dword ptr [rcx+10h]
            vmovss  xmm10, dword ptr [rcx-18h]
            vmovss  xmm7, dword ptr [rcx-4]
            vmovss  xmm9, dword ptr [rcx]
          }
          _RCX += 20;
          __asm
          {
            vmaxss  xmm0, xmm10, xmm3
            vmovss  xmm3, dword ptr [rcx-2Ch]
            vmaxss  xmm2, xmm7, xmm0
            vmaxss  xmm0, xmm9, xmm1
            vmaxss  xmm5, xmm4, xmm2
            vmaxss  xmm8, xmm6, xmm0
            vaddss  xmm0, xmm10, xmm12
            vaddss  xmm1, xmm0, xmm7
            vaddss  xmm0, xmm14, dword ptr [rcx-64h]
            vaddss  xmm2, xmm1, xmm4
            vmovss  xmm4, dword ptr [rcx-28h]
            vaddss  xmm12, xmm2, xmm3
            vaddss  xmm1, xmm0, xmm9
            vaddss  xmm2, xmm1, xmm6
            vaddss  xmm14, xmm2, xmm4
            vmaxss  xmm3, xmm3, xmm5
            vmaxss  xmm6, xmm4, xmm8
          }
          --v140;
        }
        while ( v140 );
        __asm
        {
          vmovss  xmm7, cs:__real@40a00000
          vmovss  xmm8, cs:__real@3f4ccccd
        }
      }
      if ( (unsigned int)v133 < frameCount )
      {
        _RDX = &stats.frames[v133];
        v162 = frameCount - (unsigned int)v133;
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx]
            vmovss  xmm1, dword ptr [rdx+4]
          }
          ++_RDX;
          __asm
          {
            vaddss  xmm12, xmm12, xmm0
            vmaxss  xmm3, xmm0, xmm3
            vaddss  xmm14, xmm14, xmm1
            vmaxss  xmm6, xmm1, xmm6
          }
          --v162;
        }
        while ( v162 );
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vdivss  xmm2, xmm0, xmm1
        vmulss  xmm0, xmm2, xmm12
        vmulss  xmm10, xmm14, xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v173 = (stats.frameCount - 1) % 0x3C;
      Com_sprintf<256>((char (*)[256])dest, "RB Overall Time: %6.3f (%6.3f)", *(double *)&_XMM2, *(double *)&_XMM3);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v175 = DVARBOOL_cg_drawFPSLabels;
      __asm
      {
        vmovaps xmm14, [rsp+0B10h+var_C0]
        vmovaps xmm12, [rsp+0B10h+var_A0]
        vsubss  xmm9, xmm0, xmm7
      }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v175);
      __asm
      {
        vmovaps xmm3, xmm13; xScale
        vmovaps xmm2, xmm15; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+0B10h+fmt], xmm13
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, dest, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtss2sd xmm3, xmm6, xmm6
        vcvtss2sd xmm2, xmm10, xmm10
        vmulss  xmm1, xmm0, xmm8
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vaddss  xmm9, xmm15, xmm1
      }
      Com_sprintf<256>((char (*)[256])dest, "RB Update Time: %6.3f (%6.3f)", *(double *)&_XMM2, *(double *)&_XMM3);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v190 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm6, xmm0, xmm7 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v190);
      __asm
      {
        vmovaps xmm3, xmm13; xScale
        vmovaps xmm2, xmm9; y
        vmovaps xmm1, xmm6; x
        vmovss  dword ptr [rsp+0B10h+fmt], xmm13
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, dest, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm6, xmm9, xmm1
      }
      Com_sprintf<256>((char (*)[256])dest, "Skips: %u", stats.totalFrameSkips);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v199 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm9, xmm0, xmm7 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v199);
      __asm
      {
        vmovaps xmm3, xmm13; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm9; x
        vmovss  dword ptr [rsp+0B10h+fmt], xmm13
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, dest, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
      v206 = 32i64;
      __asm { vmulss  xmm1, xmm0, xmm8 }
      if ( stats.frames[v173].ioActive )
        v206 = 42i64;
      __asm { vaddss  xmm6, xmm6, xmm1 }
      Com_sprintf<256>((char (*)[256])dest, "IO: %u%%%c", stats.frames[v173].ioFullPercent, v206);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v209 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm7, xmm0, xmm7 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v209);
      __asm
      {
        vmovaps xmm3, xmm13; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm7; x
        vmovss  dword ptr [rsp+0B10h+fmt], xmm13
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, dest, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm15, xmm6, xmm1
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+0B10h+var_90]
      vmovaps xmm10, [rsp+0B10h+var_80]
      vmovaps xmm9, [rsp+0B10h+var_70]
      vmovaps xmm8, [rsp+0B10h+var_60]
      vmovaps xmm7, [rsp+0B10h+var_50]
      vmovaps xmm6, [rsp+0B10h+var_40]
      vmovaps xmm13, [rsp+0B10h+var_B0]
    }
  }
  __asm
  {
    vmovaps xmm0, xmm15
    vmovaps xmm15, [rsp+0B10h+var_D0]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintClientTaskDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintClientTaskDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v7; 
  const dvar_t *v11; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int outBufferWatermarmark[4]; 
  char dest[64]; 

  __asm { vmovaps [rsp+108h+var_48], xmm7 }
  v7 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    v11 = DVARBOOL_cg_drawClientTasks;
    if ( !DVARBOOL_cg_drawClientTasks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientTasks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && Com_IsAnyLocalServerRunning() )
    {
      SV_Game_GetDebugClientTaskInfo(outBufferWatermarmark);
      if ( outBufferWatermarmark[0] )
      {
        __asm { vmovaps [rsp+108h+var_38], xmm6 }
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
        __asm { vmovaps xmm6, xmm0 }
        Com_sprintf(dest, 0x40ui64, "%i", outBufferWatermarmark[0]);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovss  xmm1, cs:__real@3f400000
          vmovaps xmm4, xmm0
          vmovss  xmm0, cs:__real@3f4ccccd
          vmovss  [rsp+108h+var_C0], xmm0
          vmovss  [rsp+108h+var_C8], xmm1
          vmovss  [rsp+108h+var_D0], xmm1
          vmovaps xmm3, xmm6; labelWidth
          vmovaps xmm2, xmm7; posY
          vmovaps xmm1, xmm4; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " cl task buf", &colorWhite, v23, v24, v25, 0);
        __asm
        {
          vmovaps xmm6, [rsp+108h+var_38]
          vaddss  xmm7, xmm7, xmm0
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+108h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintEventProfile
==============
*/

float __fastcall CgDrawDebug::PrintEventProfile(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const char *text; 
  int v30; 
  int *v32; 
  int v35; 
  bool v37; 
  bool v38; 
  __int64 v40; 
  __int64 v41; 
  __int64 *v43; 
  __int64 v44; 
  const char *v51; 
  const char *v59; 
  int v64; 
  int *v65; 
  __int64 v66; 
  int v68; 
  bool v69; 
  bool v70; 
  __int64 v72; 
  __int64 v73; 
  int *v76; 
  const char *v86; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  __int64 v122; 
  __int64 v123; 
  int v124; 
  __int64 Src; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmm6, xmm3
  }
  if ( profile2->current.integer == 3 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
    }
    Src = 0i64;
    v126 = 0i64;
    v127 = 0i64;
    v128 = 0i64;
    v129 = 0i64;
    v122 = -1i64;
    v123 = -1i64;
    v124 = -1;
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm9, cs:__real@3f400000
      vmovss  xmm12, cs:__real@3f4ccccd
      vmovss  [rsp+150h+var_108], xmm12
      vmovss  [rsp+150h+var_110], xmm9
      vmovss  [rsp+150h+var_118], xmm9
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
      vmovaps xmm11, xmm0
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, v100, v107, v114, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    text = j_va((const char *)&queryFormat, "Event Average");
    __asm
    {
      vmovss  [rsp+150h+var_108], xmm12
      vmovss  [rsp+150h+var_110], xmm9
      vmovss  [rsp+150h+var_118], xmm9
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, text, "    ", &colorWhite, v101, v108, v115, 0);
    __asm
    {
      vmovsd  xmm7, cs:__real@3fb99999a0000000
      vaddss  xmm8, xmm6, xmm0
    }
    v30 = 0;
    _R12 = g_perfEventTime;
    v32 = g_perfEventNum;
    do
    {
      if ( *v32 )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [r12]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, eax
        }
        v35 = 0;
        __asm { vdivsd  xmm6, xmm0, xmm1 }
        v37 = 0;
        v38 = 1;
        _RSI = 0i64;
        while ( 1 )
        {
          __asm { vcomisd xmm6, xmm7 }
          if ( !v37 )
          {
            __asm { vcomisd xmm6, [rbp+rsi*8+50h+Src] }
            if ( !v38 )
              break;
          }
          ++v35;
          v37 = (unsigned __int64)++_RSI < 5;
          v38 = (unsigned __int64)_RSI <= 5;
          if ( _RSI >= 5 )
            goto LABEL_12;
        }
        if ( v35 + 1 < 5 )
        {
          v40 = v35;
          v41 = 4 - v35;
          memmove_0(&v126 + v35, &Src + v35, 8 * v41);
          memmove_0((char *)&v122 + 4 * v40 + 4, (char *)&v122 + 4 * v40, 4 * v41);
        }
        __asm { vmovsd  [rbp+rsi*8+50h+Src], xmm6 }
        *((_DWORD *)&v122 + _RSI) = v30;
      }
LABEL_12:
      ++v30;
      ++v32;
      ++_R12;
    }
    while ( v30 < 227 );
    _RDI = &Src;
    v43 = &v122;
    v44 = 5i64;
    _R15 = g_perfEventMax;
    do
    {
      _RAX = *(int *)v43;
      if ( (int)_RAX >= 0 )
      {
        __asm
        {
          vmovsd  xmm3, qword ptr [r15+rax*8]
          vmovsd  xmm2, qword ptr [rdi]
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        v51 = j_va("%24.24s / % 5.1f / % 5.1f", s_bgEventNames[_RAX], _R8, _R9);
        __asm
        {
          vmovss  [rsp+150h+var_108], xmm12
          vmovss  [rsp+150h+var_110], xmm9
          vmovss  [rsp+150h+var_118], xmm9
          vmovaps xmm3, xmm10; labelWidth
          vmovaps xmm2, xmm8; posY
          vmovaps xmm1, xmm11; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v51, "    ", &colorWhite, v102, v109, v116, 0);
        __asm { vaddss  xmm8, xmm8, xmm0 }
      }
      v43 = (__int64 *)((char *)v43 + 4);
      ++_RDI;
      --v44;
    }
    while ( v44 );
    v122 = -1i64;
    __asm
    {
      vmovss  [rsp+150h+var_108], xmm12
      vmovss  [rsp+150h+var_110], xmm9
      vmovss  [rsp+150h+var_118], xmm9
    }
    Src = 0i64;
    v126 = 0i64;
    v127 = 0i64;
    v128 = 0i64;
    v129 = 0i64;
    __asm
    {
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm8; posY
      vmovaps xmm1, xmm11; posX
    }
    v123 = -1i64;
    v124 = -1;
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, v103, v110, v117, 0);
    __asm { vaddss  xmm6, xmm8, xmm0 }
    v59 = j_va((const char *)&queryFormat, "Event Max");
    __asm
    {
      vmovss  [rsp+150h+var_108], xmm12
      vmovss  [rsp+150h+var_110], xmm9
      vmovss  [rsp+150h+var_118], xmm9
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v59, "    ", &colorWhite, v104, v111, v118, 0);
    __asm { vaddss  xmm8, xmm6, xmm0 }
    v64 = 0;
    v65 = g_perfEventNum;
    v66 = 5i64;
    do
    {
      if ( *v65 )
      {
        __asm { vmovsd  xmm6, qword ptr [r15] }
        v68 = 0;
        v69 = 0;
        v70 = 1;
        _RSI = 0i64;
        while ( 1 )
        {
          __asm { vcomisd xmm6, xmm7 }
          if ( !v69 )
          {
            __asm { vcomisd xmm6, [rbp+rsi*8+50h+Src] }
            if ( !v70 )
              break;
          }
          ++v68;
          v69 = (unsigned __int64)++_RSI < 5;
          v70 = (unsigned __int64)_RSI <= 5;
          if ( _RSI >= 5 )
            goto LABEL_27;
        }
        if ( v68 + 1 < 5 )
        {
          v72 = v68;
          v73 = 4 - v68;
          memmove_0(&v126 + v68, &Src + v68, 8 * v73);
          memmove_0((char *)&v122 + 4 * v72 + 4, (char *)&v122 + 4 * v72, 4 * v73);
        }
        __asm { vmovsd  [rbp+rsi*8+50h+Src], xmm6 }
        *((_DWORD *)&v122 + _RSI) = v64;
      }
LABEL_27:
      ++v64;
      ++v65;
      ++_R15;
    }
    while ( v64 < 227 );
    _RDI = &Src;
    __asm { vmovaps xmm7, [rsp+150h+var_58+8] }
    v76 = (int *)&v122;
    do
    {
      if ( *v76 >= 0 )
      {
        __asm { vmovsd  xmm3, qword ptr [rdi] }
        _RDX = *v76;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vmovq   r9, xmm3
          vcvtsi2sd xmm1, xmm1, dword ptr [rax+rdx*4]
        }
        _RAX = g_perfEventTime;
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+rdx*8]
          vdivsd  xmm2, xmm0, xmm1
          vmovq   r8, xmm2
        }
        v86 = j_va("%24.24s / % 5.1f / % 5.1f", s_bgEventNames[_RDX], _R8, _R9);
        __asm
        {
          vmovss  [rsp+150h+var_108], xmm12
          vmovss  [rsp+150h+var_110], xmm9
          vmovss  [rsp+150h+var_118], xmm9
          vmovaps xmm3, xmm10; labelWidth
          vmovaps xmm2, xmm8; posY
          vmovaps xmm1, xmm11; posX
        }
        CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v86, "    ", &colorWhite, v105, v112, v119, 0);
        __asm { vaddss  xmm8, xmm8, xmm0 }
      }
      ++v76;
      ++_RDI;
      --v66;
    }
    while ( v66 );
    __asm
    {
      vmovss  [rsp+150h+var_108], xmm12
      vmovss  [rsp+150h+var_110], xmm9
      vmovss  [rsp+150h+var_118], xmm9
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm8; posY
      vmovaps xmm1, xmm11; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, v106, v113, v120, 0);
    __asm
    {
      vmovaps xmm12, [rsp+150h+var_A8+8]
      vmovaps xmm11, [rsp+150h+var_98+8]
      vmovaps xmm10, [rsp+150h+var_88+8]
      vmovaps xmm9, [rsp+150h+var_78+8]
      vaddss  xmm0, xmm8, xmm0
      vmovaps xmm8, [rsp+150h+var_68+8]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+150h+var_48+8] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintFastfileDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintFastfileDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v11; 
  const dvar_t *v19; 
  unsigned int YieldTimeout; 
  unsigned int YieldTimeProgress; 
  const char *WorkPeriodStateName; 
  const dvar_t *v29; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  const dvar_t *v46; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  unsigned int stringIndex; 
  unsigned int outModelCount[3]; 
  char stringbuffer[128]; 
  char dest[128]; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v11 = DVARBOOL_cg_drawFastfileDebugInfo;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DVARBOOL_cg_drawFastfileDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFastfileDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  __asm
  {
    vmovss  xmm8, cs:__real@40a00000
    vmovss  xmm9, cs:__real@3f400000
    vmovss  xmm10, cs:__real@3f4ccccd
  }
  if ( v11->current.enabled )
  {
    stringIndex = 0;
    while ( Com_FastFile_GetDebugString(&stringIndex, stringbuffer, 0x80u) )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v19 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm7, xmm0, xmm8 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      __asm
      {
        vmovaps xmm3, xmm9; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm7; x
        vmovss  dword ptr [rsp+208h+fmt], xmm9
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, stringbuffer, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm6, xmm6, xmm1
      }
    }
    dest[0] = 0;
    if ( CL_TransientsMP_IsYielding() )
    {
      YieldTimeout = CL_TransientsMP_GetYieldTimeout();
      YieldTimeProgress = CL_TransientsMP_GetYieldTimeProgress();
      Com_sprintf_truncate<128>((char (*)[128])dest, " Yield %i\\%i", YieldTimeProgress, YieldTimeout);
    }
    WorkPeriodStateName = DB_GetWorkPeriodStateName();
    Com_sprintf_truncate<128>((char (*)[128])stringbuffer, "DB:%s%s", WorkPeriodStateName, dest);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v29 = DVARBOOL_cg_drawFPSLabels;
    __asm { vsubss  xmm7, xmm0, xmm8 }
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    __asm
    {
      vmovaps xmm3, xmm9; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm7; x
      vmovss  dword ptr [rsp+208h+fmt], xmm9
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, stringbuffer, &colorWhite, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm6, xmm6, xmm1
    }
  }
  v36 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.integer )
  {
    v37 = DCONST_DVARBOOL_cl_streaming_drawPendingLoads;
    if ( !DCONST_DVARBOOL_cl_streaming_drawPendingLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_drawPendingLoads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      CL_Streaming_GetPendingRequestedAssets(outModelCount, &stringIndex);
      Com_sprintf_truncate<128>((char (*)[128])dest, "ClStreaming:%4um%4ui", outModelCount[0], stringIndex);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v38 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm7, xmm0, xmm8 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      __asm
      {
        vmovaps xmm3, xmm9; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm7; x
        vmovss  dword ptr [rsp+208h+fmt], xmm9
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, dest, &colorWhite, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm6, xmm6, xmm1
      }
    }
  }
  __asm { vmovaps xmm3, xmm6; y }
  *(double *)&_XMM0 = CgDrawDebug::PrintMyChangesDebug(this, localClientNum, scrPlace, *(float *)&_XMM3);
  v46 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.integer )
  {
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
    __asm
    {
      vmovaps xmm3, xmm7; y
      vmovaps xmm2, xmm6; x
      vmovss  dword ptr [rsp+208h+fmt], xmm0
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintStreamer(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtc);
  }
  else
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintFrontEndSceneCamDebug
==============
*/

float __fastcall CgDrawDebug::PrintFrontEndSceneCamDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __int64 v13; 
  const dvar_t *v19; 
  const dvar_t *v30; 
  float fmt; 
  float fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *s; 
  char *sa; 
  int align; 
  int aligna; 
  int alignb; 
  int alignc; 
  float font; 
  float fonta; 
  float fontb; 
  float fontc; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  vec3_t outOrg; 
  __int64 v105; 
  char dest[64]; 
  char v107; 
  void *retaddr; 

  _RAX = &retaddr;
  v105 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmm6, xmm3
  }
  v13 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v13].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3382, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  if ( Com_FrontEndScene_FreeCamEnabled() )
  {
    _RBP = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " camera angles");
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm8, cs:__real@40a00000
      vsubss  xmm9, xmm0, xmm8
    }
    v19 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  dword ptr [rsp+168h+fmt], xmm7
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "FrontEnd Scene FREE CAM", &colorYellow, 6, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm9, cs:__real@3f4ccccd
      vmulss  xmm0, xmm0, xmm9
      vaddss  xmm6, xmm6, xmm0
    }
    if ( _RBP->predictedPlayerState.pm_type == 3 )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm { vsubss  xmm8, xmm0, xmm8 }
      v30 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      __asm
      {
        vmovss  dword ptr [rsp+168h+fmt], xmm7
        vmovaps xmm3, xmm7; xScale
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm8; x
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, "  UFO Enabled", &colorYellow, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm6, xmm6, xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+40h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbp+3Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rbp+38h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+168h+s], xmm0
      vmovsd  [rsp+168h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x40ui64, "%.1f %.1f %.1f", *(double *)&_XMM3, *(double *)&fmtb, *(double *)&s);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  [rsp+168h+var_120], xmm9
      vmovss  dword ptr [rsp+168h+font], xmm7
      vmovss  [rsp+168h+align], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " player pos", &colorWhite, *(const float *)&align, font, v100, 0);
    __asm
    {
      vaddss  xmm6, xmm6, xmm0
      vmovss  xmm1, dword ptr [rbp+1E4h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rbp+1E0h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+168h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x40ui64, "p%.1f y%.1f", *(double *)&_XMM3, *(double *)&fmtc);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  [rsp+168h+var_120], xmm9
      vmovss  dword ptr [rsp+168h+font], xmm7
      vmovss  [rsp+168h+align], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " player angles", &colorWhite, *(const float *)&aligna, fonta, v101, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    RefdefView_GetOrg(&_RBP->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+168h+outOrg+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rsp+168h+outOrg+4]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rsp+168h+outOrg]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+168h+s], xmm0
      vmovsd  [rsp+168h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x40ui64, "(%.1f %.1f %.1f)", *(double *)&_XMM3, *(double *)&fmtd, *(double *)&sa);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  [rsp+168h+var_120], xmm9
      vmovss  dword ptr [rsp+168h+font], xmm7
      vmovss  [rsp+168h+align], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " camera org", &colorWhite, *(const float *)&alignb, fontb, v102, 0);
    __asm
    {
      vaddss  xmm6, xmm6, xmm0
      vmovss  xmm1, dword ptr [rbp+178C4h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rbp+178C0h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+168h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x40ui64, "(p%.1f y%.1f)", *(double *)&_XMM3, *(double *)&fmte);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  [rsp+168h+var_120], xmm9
      vmovss  dword ptr [rsp+168h+font], xmm7
      vmovss  [rsp+168h+align], xmm7
      vmovaps xmm3, xmm10; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " camera angles", &colorWhite, *(const float *)&alignc, fontc, v103, 0);
    __asm { vaddss  xmm0, xmm6, xmm0 }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v107;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintFrontendSceneDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintFrontendSceneDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v11; 
  const char *StateDebugName; 
  const vec4_t *v19; 
  const vec4_t *color; 
  const char *v30; 
  __int64 v35; 
  const char *v36; 
  const vec4_t *v37; 
  const char *inited; 
  const vec4_t *v43; 
  bool v51; 
  const vec4_t *v54; 
  const char *v57; 
  int v62; 
  unsigned int v65; 
  const dvar_t *v66; 
  const char *v67; 
  char v73; 
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
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  unsigned int outModelCount[4]; 
  unsigned int outImageCount; 

  v11 = DVARBOOL_cg_drawFrontendSceneDebugInfo;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !DVARBOOL_cg_drawFrontendSceneDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFrontendSceneDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovaps [rsp+0F8h+var_58], xmm8
      vmovaps [rsp+0F8h+var_68], xmm9
    }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " FrontendScene");
    __asm { vmovaps xmm9, xmm0 }
    StateDebugName = Com_FrontEndScene_GetStateDebugName();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  xmm8, cs:__real@3f4ccccd
    }
    v19 = &colorWhite;
    __asm
    {
      vmovss  [rsp+0F8h+var_B0], xmm8
      vmovss  [rsp+0F8h+var_B8], xmm7
      vmovss  [rsp+0F8h+var_C0], xmm7
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm0; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, StateDebugName, " FrontendScene", &colorWhite, v78, v84, v90, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( Com_FrontEndScene_IsNoRenderStreaming() || Com_FrontEndScene_IsRenderableStreaming() )
    {
      __asm
      {
        vmovaps [rsp+0F8h+var_78], xmm10
        vmovaps [rsp+0F8h+var_88], xmm11
      }
      CL_Streaming_GetPendingRequestedAssets(outModelCount, &outImageCount);
      color = &colorWhite;
      if ( outImageCount )
        color = &colorRed;
      v30 = j_va("%d clstreaming assets");
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovss  [rsp+0F8h+var_B0], xmm8
        vmovss  [rsp+0F8h+var_B8], xmm7
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm0; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v30, " FrontendScene", color, v79, v85, v91, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v35 = (unsigned int)CL_UIStreaming_TouchedAssetsMissing();
      v36 = j_va("%d ui assets", v35);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovss  [rsp+0F8h+var_B0], xmm8
        vmovss  [rsp+0F8h+var_B8], xmm7
        vmovss  [rsp+0F8h+var_C0], xmm7
      }
      v37 = &colorWhite;
      __asm { vmovaps xmm3, xmm9; labelWidth }
      if ( (_DWORD)v35 )
        v37 = &colorRed;
      __asm
      {
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm0; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v36, " FrontendScene", v37, v80, v86, v92, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      inited = Stream_LevelInit_DebugStateString();
      v43 = &colorWhite;
      if ( !Stream_LevelInit_IsDone() )
        v43 = &colorRed;
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovss  [rsp+0F8h+var_B0], xmm8
        vmovss  [rsp+0F8h+var_B8], xmm7
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm0; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, inited, " FrontendScene", v43, v81, v87, v93, 0);
      __asm { vaddss  xmm10, xmm6, xmm0 }
      *(double *)&_XMM0 = Stream_LoadQuality_Image();
      __asm { vmovaps xmm11, xmm0 }
      _RBX = DVARFLT_stream_syncFrontend_imageQuality;
      if ( !DVARFLT_stream_syncFrontend_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncFrontend_imageQuality") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v51 = !CL_UIStreaming_StreamedEnough();
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vcvtss2sd xmm1, xmm11, xmm11
      }
      v54 = &colorWhite;
      __asm
      {
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      if ( v51 )
        v54 = &colorRed;
      v57 = j_va("%.4f / %.4f Streaming Quality", _RDX, _R8);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovss  [rsp+0F8h+var_B0], xmm8
        vmovss  [rsp+0F8h+var_B8], xmm7
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm10; posY
        vmovaps xmm1, xmm0; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v57, " FrontendScene", v54, v82, v88, v94, 0);
      __asm { vaddss  xmm6, xmm10, xmm0 }
      LODWORD(v57) = Com_FrontEndScene_GetStateToggleTime();
      v62 = Sys_Milliseconds();
      __asm
      {
        vmovaps xmm11, [rsp+0F8h+var_88]
        vmovaps xmm10, [rsp+0F8h+var_78]
      }
      v65 = v62 - (_DWORD)v57;
      v66 = DCONST_DVARINT_frontEndSceneRenderStreamingTimeout;
      if ( !DCONST_DVARINT_frontEndSceneRenderStreamingTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndSceneRenderStreamingTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      v67 = j_va("%d / %d Frontend Timeout", v65, v66->current.unsignedInt);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovss  [rsp+0F8h+var_B0], xmm8
        vmovss  [rsp+0F8h+var_B8], xmm7
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm2, xmm1, xmm8
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, r15d
        vcomiss xmm3, xmm2
        vmovss  [rsp+0F8h+var_C0], xmm7
      }
      if ( !(v73 | v51) )
        v19 = &colorRed;
      __asm
      {
        vmovaps xmm3, xmm9; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm0; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v67, " FrontendScene", v19, v83, v89, v95, 0);
      __asm { vaddss  xmm0, xmm6, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm
    {
      vmovaps xmm8, [rsp+0F8h+var_58]
      vmovaps xmm7, [rsp+0F8h+var_48]
      vmovaps xmm9, [rsp+0F8h+var_68]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintFrontendUpperRightDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintFrontendUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, double posY)
{
  const ScreenPlacement *ActivePlacement; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( Com_FrontEndScene_IsActive() && CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
  {
    __asm { vmovaps xmm3, xmm6; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintPerformanceInfo(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintFrontEndSceneCamDebug(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm { vmovaps xmm3, xmm6; y }
  *(double *)&_XMM0 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm0; y }
  *(double *)&_XMM0 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
  __asm { vmovaps xmm6, xmm0 }
  Stream_Debug_DrawXPakHeatMap();
  CG_DrawDebug_DrawMemoryDebugOverlays(localClientNum);
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintMyChangesDebug
==============
*/

float __fastcall CgDrawDebug::PrintMyChangesDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v12; 
  const dvar_t *v17; 
  GfxFont *FontHandle; 
  const char *v25; 
  int v26; 
  bool v28; 
  const char *MyChangesIconDirective; 
  const char *v30; 
  int v47; 
  const dvar_t *v48; 
  const dvar_t *v50; 
  const ParticleSystem *CurrentSystem; 
  const ParticleSystem *v57; 
  const dvar_t *v58; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float ya; 
  float yb; 
  const vec4_t *horzAlign; 
  float fonta; 
  float fontb; 
  GfxFont *font; 
  char dstString[8]; 
  vec4_t color; 
  vec4_t v86; 
  char dest[128]; 

  __asm { vmovaps [rsp+1D8h+var_98], xmm10 }
  v12 = DVARBOOL_cg_drawMyChangesDebugInfo;
  __asm { vmovaps xmm10, xmm3 }
  if ( !DVARBOOL_cg_drawMyChangesDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMyChangesDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+1D8h+var_58], xmm6
      vmovaps [rsp+1D8h+var_68], xmm7
      vmovaps [rsp+1D8h+var_A8], xmm11
    }
    if ( !DB_GetMyChangesReportCallback() )
      DB_SetMyChangesReportCallback(CG_DrawDebug_MyChangesActionReportCallback);
    if ( !DB_GetMyChangesReloadCallback() )
      DB_SetMyChangesReloadCallback(CG_DrawDebug_MyChangesActionReloadCallback);
    if ( !DB_GetMyChangesBeginCallback() || !DB_GetMyChangesEndCallback() )
      DB_SetMyChangesProgressCallback(CG_DrawDebug_MyChangesActionBeginCallback, CG_DrawDebug_MyChangesActionEndCallback);
    v17 = DVARBOOL_cg_drawVersion;
    __asm
    {
      vmovaps [rsp+1D8h+var_78], xmm8
      vmovss  xmm11, cs:__real@40a00000
    }
    if ( !DVARBOOL_cg_drawVersion )
      goto LABEL_29;
    Dvar_CheckFrontendServerThread(DVARBOOL_cg_drawVersion);
    if ( !v17->current.enabled )
      goto LABEL_29;
    __asm { vmovaps [rsp+1D8h+var_B8], xmm12 }
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3216, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    _RBX = DVARFLT_cg_drawVersionFontScale;
    if ( !DVARFLT_cg_drawVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionFontScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm12, xmm0, cs:__real@3fc00000
      vmovaps xmm2, xmm12; scale
    }
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, *(float *)&_XMM2);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f333333000000000000000000000000
      vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rsp+1D8h+var_160], xmm0
      vmovups xmmword ptr [rsp+1D8h+color], xmm1
    }
    if ( s_debugZoneStarted )
    {
      v25 = "Building MyChanges ...";
    }
    else
    {
      if ( g_debugZoneUpdateTime <= 0 )
        goto LABEL_28;
      v26 = Sys_Milliseconds();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vcomiss xmm0, xmm11
      }
      v28 = __CFADD__((unsigned int)((unsigned __int64)(274877907i64 * (v26 - g_debugZoneUpdateTime)) >> 32) >> 31, (int)((unsigned __int64)(274877907i64 * (v26 - g_debugZoneUpdateTime)) >> 32) >> 6);
      MyChangesIconDirective = DB_GetMyChangesIconDirective(s_debugZoneLoadAction, &color);
      UI_ReplaceDirective(localClientNum, MyChangesIconDirective, dstString, 4ui64, 0);
      v30 = v28 ? DB_GetMyChanges_ActionMessage(s_debugZoneLoadAction) : (char *)&queryFormat.fmt + 3;
      LODWORD(fmt) = s_debugZoneAssetLoadTime.tm_sec;
      v25 = j_va("%s %02d:%02d:%02d %s", v30, (unsigned int)s_debugZoneAssetLoadTime.tm_hour, (unsigned int)s_debugZoneAssetLoadTime.tm_min, fmt, dstString);
      if ( !v25 )
        goto LABEL_28;
    }
    __asm
    {
      vmovaps xmm3, xmm12; scale
      vmovaps [rsp+1D8h+var_88], xmm9
    }
    UI_TextWidth(v25, 0, FontHandle, *(float *)&_XMM3);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm1, xmm12; scale
      vcvtsi2ss xmm6, xmm6, eax
    }
    UI_TextHeight(FontHandle, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, eax
    }
    Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawVersionX, "cg_drawVersionX");
    __asm
    {
      vsubss  xmm9, xmm6, xmm0
      vxorps  xmm6, xmm8, cs:__xmm@80000000800000008000000080000000
    }
    Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawVersionY, "cg_drawVersionY");
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vsubss  xmm6, xmm1, xmm8
      vaddss  xmm0, xmm6, cs:__real@3f800000
      vaddss  xmm1, xmm9, cs:__real@3f800000
      vmovss  dword ptr [rsp+1D8h+font], xmm12
      vmovss  [rsp+1D8h+y], xmm0
      vmovss  dword ptr [rsp+1D8h+fmt], xmm1
    }
    UI_DrawText(&scrPlaceFullUnsafe, v25, 0x7FFFFFFF, FontHandle, fmta, ya, 3, 3, fonta, &v86, 0);
    __asm
    {
      vmovss  dword ptr [rsp+1D8h+font], xmm12
      vmovss  [rsp+1D8h+y], xmm6
      vmovss  dword ptr [rsp+1D8h+fmt], xmm9
    }
    UI_DrawText(&scrPlaceFullUnsafe, v25, 0x7FFFFFFF, FontHandle, fmtb, yb, 3, 3, fontb, &color, 0);
    __asm { vmovaps xmm9, [rsp+1D8h+var_88] }
LABEL_28:
    __asm { vmovaps xmm12, [rsp+1D8h+var_B8] }
LABEL_29:
    __asm
    {
      vmovss  xmm6, cs:__real@3f400000
      vmovss  xmm7, cs:__real@3f4ccccd
    }
    if ( g_lastParticleToolTweakTime > 0 )
    {
      v47 = (Sys_Milliseconds() - g_lastParticleToolTweakTime) / 1000;
      if ( v47 >= 60 )
      {
        Com_sprintf(dest, 0x80ui64, "ParticleTweak: %i m old", (unsigned int)(v47 / 60));
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v50 = DVARBOOL_cg_drawFPSLabels;
        __asm { vsubss  xmm8, xmm0, xmm11 }
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v50);
        font = cls.smallDevFont;
        horzAlign = &colorYellow;
      }
      else
      {
        Com_sprintf(dest, 0x80ui64, "ParticleTweak: %i s old", (unsigned int)v47);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v48 = DVARBOOL_cg_drawFPSLabels;
        __asm { vsubss  xmm8, xmm0, xmm11 }
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v48);
        font = cls.smallDevFont;
        horzAlign = &colorGreen;
      }
      __asm
      {
        vmovaps xmm3, xmm6; xScale
        vmovaps xmm2, xmm10; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+1D8h+fmt], xmm6
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, dest, horzAlign, 6, font);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm10, xmm10, xmm1
      }
    }
    CurrentSystem = Particle_ToolGetCurrentSystem(localClientNum);
    v57 = CurrentSystem;
    if ( CurrentSystem )
    {
      if ( !CurrentSystem->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      Com_sprintf(dest, 0x80ui64, "ParticleTweak: %s", v57->m_pSystemDef->name);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v58 = DVARBOOL_cg_drawFPSLabels;
      __asm { vsubss  xmm8, xmm0, xmm11 }
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      __asm
      {
        vmovaps xmm3, xmm6; xScale
        vmovaps xmm2, xmm10; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+1D8h+fmt], xmm6
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, dest, &colorYellow, 6, cls.smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm10, xmm10, xmm1
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+1D8h+var_A8]
      vmovaps xmm8, [rsp+1D8h+var_78]
      vmovaps xmm7, [rsp+1D8h+var_68]
      vmovaps xmm6, [rsp+1D8h+var_58]
    }
  }
  __asm
  {
    vmovaps xmm0, xmm10
    vmovaps xmm10, [rsp+1D8h+var_98]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintNativeScriptDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintNativeScriptDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm { vmovaps xmm0, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintNoGameModeUpperRightDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintNoGameModeUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, double posY)
{
  const ScreenPlacement *ActivePlacement; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
    vmovaps xmm3, xmm6; y
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  *(double *)&_XMM0 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm0; y }
  *(double *)&_XMM0 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, ActivePlacement, *(float *)&_XMM3);
  __asm { vmovaps xmm6, xmm0 }
  Stream_Debug_DrawXPakHeatMap();
  CG_DrawDebug_DrawMemoryDebugOverlays(localClientNum);
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintPerformanceInfo
==============
*/

float __fastcall CgDrawDebug::PrintPerformanceInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v15; 
  const dvar_t *v18; 
  const dvar_t *v44; 
  const char *v47; 
  const dvar_t *v53; 
  const char *v57; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fpsMax; 
  float fpsMaxa; 
  float fpsMaxb; 
  float fpsMaxc; 
  float fps; 
  float isFullFrameTime; 
  float isFullFrameTimea; 
  float isFullFrameTimeb; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float forceNoLabel; 
  float mBytesPerSec; 
  int v96; 
  int v97; 
  int fpsFrame; 
  int v99; 
  int v100; 
  int fpsMin; 
  float varianceMSec; 
  float pTotalMSec; 
  float totalMSec; 
  float maxTimeMSec; 
  float minTimeMSec; 
  CgDrawDebug *v107; 
  const ScreenPlacement *v108; 
  __m256i v109; 
  float *p_mBytesPerSec; 
  __int64 v111; 
  stdext::inplace_function<void __cdecl(char const *),64,16> output; 
  vec4_t outColor; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  v111 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmm6, xmm3
  }
  v15 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer )
  {
    CG_Draw_GetDetailedFPSTime(&minTimeMSec, &maxTimeMSec, &totalMSec, &varianceMSec, &fpsMin, &v100, &v99, 0);
    CG_Draw_GetFPS(&fpsFrame, &pTotalMSec, 1);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
    __asm
    {
      vmovaps xmm8, xmm0
      vmovss  [rbp+100h+mBytesPerSec], xmm0
      vmovss  [rbp+100h+var_178], xmm6
      vmovss  [rbp+100h+var_170], xmm7
    }
    v108 = scrPlace;
    v107 = this;
    v18 = DVARBOOL_stream_showGenericUsage;
    if ( !DVARBOOL_stream_showGenericUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showGenericUsage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      v109.m256i_i64[0] = (__int64)&v96;
      v109.m256i_i64[1] = (__int64)&v107;
      v109.m256i_i64[2] = (__int64)&v108;
      v109.m256i_i64[3] = (__int64)&v97;
      p_mBytesPerSec = &mBytesPerSec;
      __asm
      {
        vmovups ymm0, [rbp+100h+var_130]
        vmovups ymmword ptr [rbp+100h+output.m_Data._Space], ymm0
        vmovsd  xmm1, [rbp+100h+var_110]
        vmovsd  qword ptr [rbp+100h+output.m_Data._Space+20h], xmm1
      }
      output.m_ManagerFctPtr = stdext::inplace_function<void (char const *),64,16>::manage<_lambda_26b7cd888723198c4f703f1fcc9ca585_>;
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::invoke<_lambda_26b7cd888723198c4f703f1fcc9ca585_>;
      Stream_Debug_GetGenericUsageSummaryText(&output);
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
      if ( output.m_ManagerFctPtr )
        output.m_ManagerFctPtr(&output.m_Data, NULL, Destroy);
      output.m_ManagerFctPtr = NULL;
    }
    __asm
    {
      vmovss  xmm0, [rbp+100h+varianceMSec]
      vmovss  dword ptr [rsp+200h+forceNoLabel], xmm0
      vmovss  xmm1, [rbp+100h+pTotalMSec]
      vmovss  [rsp+200h+var_1B8], xmm1
      vmovss  xmm0, [rbp+100h+totalMSec]
      vmovss  [rsp+200h+var_1C0], xmm0
      vmovss  xmm1, [rbp+100h+maxTimeMSec]
      vmovss  dword ptr [rsp+200h+isFullFrameTime], xmm1
      vmovss  xmm0, [rbp+100h+minTimeMSec]
      vmovss  dword ptr [rsp+200h+fps], xmm0
      vmovss  dword ptr [rsp+200h+fpsMax], xmm8
      vmovss  xmm1, [rbp+100h+var_178]
      vmovss  dword ptr [rsp+200h+fmt], xmm1
      vmovaps xmm3, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintFPS(localClientNum, this, scrPlace, *(double *)&_XMM3, fmt, fpsMax, fps, isFullFrameTime, v88, v91, forceNoLabel, fpsMin, v100, v99, fpsFrame, &outColor);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fpsMax], xmm8
      vmovss  dword ptr [rsp+200h+fmt], xmm0
      vmovaps xmm3, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintMessageRate(localClientNum, this, scrPlace, *(double *)&_XMM3, fmta, fpsMaxa);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fpsMax], xmm8
      vmovss  dword ptr [rsp+200h+fmt], xmm0
      vmovaps xmm3, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintServerProfile(localClientNum, this, scrPlace, *(double *)&_XMM3, fmtb, fpsMaxb);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintMemoryStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtc);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintMemoryBudgetStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtd);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintTransientCommonBudgets(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmte);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_TaskGraphStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtf);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintPerfStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtg);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm0; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintRtStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmth);
    __asm
    {
      vmovss  dword ptr [rsp+200h+fpsMax], xmm8
      vmovss  dword ptr [rsp+200h+fmt], xmm0
      vmovaps xmm3, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintMisc(localClientNum, this, scrPlace, *(double *)&_XMM3, fmti, fpsMaxc);
    __asm { vmovaps xmm6, xmm0 }
    v44 = DVARINT_cg_drawFPS;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    __asm
    {
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  xmm9, cs:__real@3f400000
    }
    if ( v44->current.integer >= 3 )
    {
      v47 = j_va("%u / %u / %u ", cmdbufHandoffStats[0], cmdbufHandoffStats[1], cmdbufHandoffStats[2]);
      __asm
      {
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  [rsp+200h+var_1C0], xmm9
        vmovss  dword ptr [rsp+200h+isFullFrameTime], xmm9
        vmovaps xmm3, xmm8; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm7; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v47, " (cmdbufs/handoffs/stalls)", &colorWhite, isFullFrameTimea, v89, v92, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    __asm
    {
      vmovss  dword ptr [rsp+200h+fmt], xmm8
      vmovaps xmm3, xmm6; y
      vmovaps xmm2, xmm7; x
    }
    *(float *)&_XMM0 = CG_DrawDebug_PrintStreamReadStats(this, scrPlace, *(double *)&_XMM2, *(double *)&_XMM3, fmtj);
    __asm { vmovaps xmm6, xmm0 }
    v53 = DCONST_DVARBOOL_fileStream_showReadSpeeds;
    if ( !DCONST_DVARBOOL_fileStream_showReadSpeeds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_showReadSpeeds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    if ( v53->current.enabled )
    {
      FileStream_GetStreamPerfDataAndClearAfterMinTime(NULL, &mBytesPerSec);
      __asm
      {
        vmovss  xmm1, [rbp+100h+mBytesPerSec]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v57 = j_va("%.1f mb/s", _RDX);
      __asm
      {
        vmovss  [rsp+200h+var_1B8], xmm10
        vmovss  [rsp+200h+var_1C0], xmm9
        vmovss  dword ptr [rsp+200h+isFullFrameTime], xmm9
        vmovaps xmm3, xmm8; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm7; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v57, " Read Bandwidth", &colorWhite, isFullFrameTimeb, v90, v93, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
  }
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
}

/*
==============
PrintRenderStat
==============
*/

float __fastcall PrintRenderStat(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width, const char *label, int val, int maxVal, int peakVal)
{
  const vec4_t *color; 
  float result; 
  float v28; 
  float v29; 
  float v30; 
  char dest[256]; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( peakVal < 0 )
  {
    if ( maxVal < 0 )
      Com_sprintf<256>((char (*)[256])dest, "%d", (unsigned int)val);
    else
      Com_sprintf<256>((char (*)[256])dest, "%d/%d", (unsigned int)val, (unsigned int)maxVal);
  }
  else
  {
    Com_sprintf<256>((char (*)[256])dest, "(%d) %d/%d", (unsigned int)peakVal, (unsigned int)val, maxVal);
  }
  if ( maxVal == -1 )
  {
    color = &colorWhite;
  }
  else
  {
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2sd xmm3, xmm3, ebx
      vandpd  xmm0, xmm3, cs:__xmm@7fffffffffffffff7fffffffffffffff
      vcomisd xmm0, cs:__real@3cb0000000000000
    }
    color = &colorPink;
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f400000
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  [rsp+1A8h+var_160], xmm0
    vmovss  [rsp+1A8h+var_168], xmm3
    vmovss  [rsp+1A8h+var_170], xmm3
    vmovss  xmm3, [rsp+1A8h+width]; labelWidth
    vmovaps xmm2, xmm7; posY
    vmovaps xmm1, xmm6; posX
  }
  result = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, label, color, v28, v29, v30, 0);
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
CgDrawDebug::PrintReplayTime
==============
*/

float __fastcall CgDrawDebug::PrintReplayTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  const dvar_t *v12; 
  int Time; 
  int v18; 
  int EndTime; 
  unsigned int v20; 
  int v21; 
  int MsgSizeMax; 
  int MsgSizeCurrent; 
  const vec4_t *color; 
  const char *v39; 
  const char *v46; 
  float fmt; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 

  v12 = DVARBOOL_replay_time;
  __asm
  {
    vmovaps [rsp+0D8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !DVARBOOL_replay_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled && Com_IsAnyLocalServerRunning() )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm7
      vmovaps [rsp+0D8h+var_48], xmm8
      vmovaps [rsp+0D8h+var_58], xmm9
      vmovaps [rsp+0D8h+var_68], xmm10
      vmovaps [rsp+0D8h+var_78], xmm11
    }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm9, xmm0 }
    Time = G_Main_GetTime();
    v18 = (Time - SV_Demo_GetStartTime()) / 1000;
    EndTime = SV_Demo_GetEndTime();
    v20 = (int)((unsigned __int64)(274877907i64 * (EndTime - SV_Demo_GetStartTime())) >> 32) >> 6;
    v21 = (v20 >> 31) + v20;
    MsgSizeMax = SV_Demo_GetMsgSizeMax();
    MsgSizeCurrent = SV_Demo_GetMsgSizeCurrent();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+0D8h+fmt], xmm0
      vmovaps xmm11, xmm0
    }
    *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "-Game-", &colorGreenFaded);
    color = &colorWhite;
    __asm
    {
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  xmm8, cs:__real@3f400000
      vaddss  xmm7, xmm6, xmm0
    }
    if ( v18 > 0 && v21 > 0 )
    {
      if ( MsgSizeMax )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, r15d
          vcvtsi2ss xmm0, xmm0, esi
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, cs:__real@42c80000
          vcomiss xmm2, cs:MY_MSGSIZEPERCENT_THRESHOLD
          vcvtss2sd xmm2, xmm2, xmm2
        }
        if ( v18 >= v21 )
        {
          __asm { vmovq   r8, xmm2 }
          v39 = j_va("%i, %0.1f%%", (unsigned int)v21, *(double *)&_XMM2);
        }
        else
        {
          __asm
          {
            vmovaps xmm3, xmm2
            vmovq   r9, xmm3
          }
          v39 = j_va("%i / %i, %0.1f%%", (unsigned int)v18, (unsigned int)v21, _R9);
        }
      }
      else if ( v18 >= v21 )
      {
        v39 = j_va("%i", (unsigned int)v21);
      }
      else
      {
        v39 = j_va("%i / %i", (unsigned int)v18, (unsigned int)v21);
      }
      __asm
      {
        vmovss  [rsp+0D8h+var_90], xmm10
        vmovss  [rsp+0D8h+var_98], xmm8
        vmovss  [rsp+0D8h+var_A0], xmm8
        vmovaps xmm3, xmm11; labelWidth
        vmovaps xmm2, xmm7; posY
        vmovaps xmm1, xmm9; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v39, " replay time", &colorWhite, v58, v60, v62, 0);
      __asm { vaddss  xmm7, xmm7, xmm0 }
    }
    __asm { vmovaps xmm11, [rsp+0D8h+var_78] }
    if ( MY_PRINT_BUFFERINFO )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " replay buffer");
      __asm { vmovaps xmm6, xmm0 }
      v46 = j_va("%ik / %ik", (unsigned int)(MsgSizeCurrent / 1024), (unsigned int)(MsgSizeMax / 1024));
      __asm
      {
        vmovss  [rsp+0D8h+var_90], xmm10
        vmovss  [rsp+0D8h+var_98], xmm8
        vmovss  [rsp+0D8h+var_A0], xmm8
        vmovaps xmm3, xmm6; labelWidth
      }
      if ( MsgSizeCurrent >= MsgSizeMax )
        color = &colorOrange;
      __asm
      {
        vmovaps xmm2, xmm7; posY
        vmovaps xmm1, xmm9; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v46, " replay buffer", color, v59, v61, v63, 0);
      __asm { vaddss  xmm7, xmm7, xmm0 }
    }
    __asm
    {
      vmovaps xmm10, [rsp+0D8h+var_68]
      vmovaps xmm9, [rsp+0D8h+var_58]
      vmovaps xmm8, [rsp+0D8h+var_48]
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+0D8h+var_38]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+0D8h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintScriptableDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintScriptableDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v7; 
  const dvar_t *v11; 
  char *fmt; 
  char *label; 
  vec4_t *color; 
  float v26; 
  float v27; 
  float v28; 
  char dest[64]; 

  __asm { vmovaps [rsp+0F8h+var_48], xmm7 }
  v7 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.integer )
    goto LABEL_10;
  v11 = DVARBOOL_cg_drawScriptableLimits;
  if ( !DVARBOOL_cg_drawScriptableLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawScriptableLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
    __asm { vmovaps xmm6, xmm0 }
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(color) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(label) = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(fmt) = g_scriptableWorldCounts.runtimePartCount;
    Com_sprintf(dest, 0x40ui64, "%iri %irp %is %it", g_scriptableWorldCounts.runtimeInstanceCount, fmt, label, color);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm1, cs:__real@3f400000
      vmovaps xmm4, xmm0
      vmovss  xmm0, cs:__real@3f4ccccd
      vmovss  [rsp+0F8h+var_B0], xmm0
      vmovss  [rsp+0F8h+var_B8], xmm1
      vmovss  [rsp+0F8h+var_C0], xmm1
      vmovaps xmm3, xmm6; labelWidth
      vmovaps xmm2, xmm7; posY
      vmovaps xmm1, xmm4; posX
    }
    *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, dest, " sbl counts", &colorWhite, v26, v27, v28, 0);
    __asm
    {
      vmovaps xmm6, [rsp+0F8h+var_38]
      vaddss  xmm0, xmm0, xmm7
    }
  }
  else
  {
LABEL_10:
    __asm { vmovaps xmm0, xmm7 }
  }
  __asm { vmovaps xmm7, [rsp+0F8h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintSystemTime
==============
*/

float __fastcall CgDrawDebug::PrintSystemTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v10; 
  unsigned int v16; 
  const char *v17; 
  const volatile ServerProfileTimes *ProfileTimes; 
  const char *v25; 
  unsigned int v29; 
  const char *v30; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  char v56; 

  v10 = DVARBOOL_cg_drawSystemTime;
  __asm
  {
    vmovaps [rsp+0B8h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !DVARBOOL_cg_drawSystemTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSystemTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_28], xmm7
      vmovaps [rsp+0B8h+var_38], xmm8
      vmovaps [rsp+0B8h+var_48], xmm9
      vmovaps [rsp+0B8h+var_58], xmm10
    }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " server time");
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm9, xmm0 }
    v16 = Sys_Milliseconds();
    v17 = j_va("%i", v16);
    __asm
    {
      vmovss  xmm7, cs:__real@3f400000
      vmovss  xmm10, cs:__real@3f4ccccd
      vmovss  [rsp+0B8h+var_70], xmm10
      vmovss  [rsp+0B8h+var_78], xmm7
      vmovss  [rsp+0B8h+var_80], xmm7
      vmovaps xmm3, xmm8; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm9; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v17, " system time", &colorWhite, v42, v45, v48, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( Com_IsAnyLocalServerRunning() )
    {
      ProfileTimes = SV_GetProfileTimes();
      v25 = j_va("%i", (unsigned int)ProfileTimes->serverTime);
      __asm
      {
        vmovss  [rsp+0B8h+var_70], xmm10
        vmovss  [rsp+0B8h+var_78], xmm7
        vmovss  [rsp+0B8h+var_80], xmm7
        vmovaps xmm3, xmm8; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm9; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v25, " server time", &colorWhite, v43, v46, v49, 0);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    v29 = Com_CSVGetRowIndex();
    if ( v29 )
    {
      v30 = j_va("%i", v29);
      __asm
      {
        vmovss  [rsp+0B8h+var_70], xmm10
        vmovss  [rsp+0B8h+var_78], xmm7
        vmovss  [rsp+0B8h+var_80], xmm7
        vmovaps xmm3, xmm8; labelWidth
        vmovaps xmm2, xmm6; posY
        vmovaps xmm1, xmm9; posX
      }
      CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v30, " CSV row", &colorWhite, v44, v47, v50, 0);
      __asm { vaddss  xmm0, xmm6, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm
    {
      vmovaps xmm9, [rsp+0B8h+var_48]
      vmovaps xmm8, [rsp+0B8h+var_38]
      vmovaps xmm7, [rsp+0B8h+var_28]
      vmovaps xmm10, [rsp+0B8h+var_58]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v56;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintViewpos
==============
*/

float __fastcall CgDrawDebug::PrintViewpos(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  const dvar_t *v15; 
  cg_t *LocalClientGlobals; 
  const char *v28; 
  const char *v44; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  vec3_t outOrg; 
  __int64 v63; 
  vec3_t angles; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm6, xmm3
  }
  v15 = DVARBOOL_cg_drawViewpos;
  if ( !DVARBOOL_cg_drawViewpos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawViewpos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
    __asm { vmovaps xmm9, xmm0 }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+108h+outOrg+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+108h+outOrg+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm1, dword ptr [rsp+108h+outOrg]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v28 = j_va("Position (%.0f %.0f %.0f) \n", _RDX, _R8, _R9);
    __asm
    {
      vmovss  xmm7, cs:__real@3f4ccccd
      vmovss  [rsp+108h+var_C0], xmm7
      vmovss  xmm8, cs:__real@3f400000
      vmovss  [rsp+108h+var_C8], xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v28, cls.m_activeGameMapName, &colorWhite, v56, v58, v60, 0);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    AxisToAngles(&LocalClientGlobals->refdef.view.axis, &angles);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+108h+angles+8]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+108h+angles+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm1, dword ptr [rsp+108h+angles]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v44 = j_va("Angles (%.0f %.0f %.0f) \n", _RDX, _R8, _R9);
    __asm
    {
      vmovss  [rsp+108h+var_C0], xmm7
      vmovss  [rsp+108h+var_C8], xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovaps xmm3, xmm9; labelWidth
      vmovaps xmm2, xmm6; posY
      vmovaps xmm1, xmm10; posX
    }
    CG_DrawDebug_CornerPrintScale(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v44, cls.m_activeGameMapName, &colorWhite, v57, v59, v61, 0);
    __asm { vaddss  xmm0, xmm6, xmm0 }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebug::PrintWallRunDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintWallRunDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm { vmovaps xmm0, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
XAnimTreeCountCustomNode
==============
*/
void XAnimTreeCountCustomNode(XAnimTree *tree, unsigned __int16 infoIndex, int *numCustomNodes, int *numAnimInfoNodes)
{
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 children; 
  XAnimInfo *v10; 
  unsigned __int16 next; 

  if ( infoIndex )
  {
    AnimInfo = XAnimGetAnimInfo(infoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2005, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    if ( !XAnimShouldIgnoreClientOnlyNode(tree, AnimInfo) && !AnimInfo->animToModel )
    {
      SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2019, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
        ++*numCustomNodes;
      else
        ++*numAnimInfoNodes;
      children = AnimInfo->children;
      if ( children )
      {
        do
        {
          v10 = XAnimGetAnimInfo(children);
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2034, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
            __debugbreak();
          next = v10->next;
          XAnimTreeCountCustomNode(tree, children, numCustomNodes, numAnimInfoNodes);
          children = next;
        }
        while ( next );
      }
    }
  }
}

