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
void CG_DebugDraw_DrawAnimWeightsGraph(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  int v4; 
  DebugBufferGraph *v5; 
  float v6; 
  float v7; 
  _QWORD *v8; 
  int v9; 
  DebugBufferGraph *v10; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  float *v13; 
  __int64 v14; 
  float v15; 
  int v16; 
  vec2_t origin; 
  XAnimTreeDebugNode dbgNodes; 

  v1 = DVARINT_cg_dumpAnims;
  if ( !DVARINT_cg_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( integer == -1 )
  {
    v16 = g_cgDebugVisualWeightsGraphEntNum;
    if ( g_cgDebugVisualWeightsGraphEntNum != -1 )
      v16 = -1;
    g_cgDebugVisualWeightsGraphEntNum = v16;
  }
  else
  {
    v4 = Sys_Milliseconds();
    v5 = &g_animDebugWeightGraph;
    v7 = (float)(v4 - timeLast_0) * 0.001;
    v6 = v7;
    timeLast_0 = v4;
    if ( g_cgDebugVisualWeightsGraphEntNum == -1 )
    {
      v8 = &unk_150F42BA8;
      v9 = 0;
      v10 = &g_animDebugWeightGraph;
      origin.v[0] = FLOAT_100_0;
      do
      {
        origin.v[1] = 650.0 - (float)v9;
        CG_InitDebugBufferData(v10, &origin, 700, 65, (const char *)&queryFormat.fmt + 3, 256, 1, 1.0);
        CG_SetDebugBufferBorderColor(v10, 0x80u, 0x80u, 0x80u, 0xC0u);
        v9 += 75;
        *(v8 - 1) = 0i64;
        v10 = (DebugBufferGraph *)((char *)v10 + 6120);
        *v8 = 0i64;
        *((_DWORD *)v8 + 3) = 0;
        v8 += 765;
      }
      while ( v9 < 600 );
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
        CG_DrawDebug_AnimGraphsGatherData_r(&dbgNodes, 0, v7);
      }
      v13 = (float *)&unk_150F42BB4;
      v14 = 8i64;
      do
      {
        if ( !CL_Pause_IsGamePaused() && !*((_BYTE *)v13 - 4) )
        {
          if ( *(_QWORD *)(v13 - 5) )
            CG_AddDebugBufferData(v5, 0.0, v6);
          v15 = v6 + *v13;
          *v13 = v15;
          if ( v15 >= 1.2 )
          {
            CG_ClearDebugBufferData(v5, 0, 0.0, 0.0);
            *(_QWORD *)(v13 - 5) = 0i64;
            *(_QWORD *)(v13 - 3) = 0i64;
          }
        }
        if ( *(_QWORD *)(v13 - 5) )
          CG_DebugBufferDraw(v5);
        v5 = (DebugBufferGraph *)((char *)v5 + 6120);
        v13 += 1530;
        --v14;
      }
      while ( v14 );
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
  const ScreenPlacement *v3; 
  int v4; 
  float v5; 
  __int128 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  __int128 v14; 
  __int64 v15; 
  unsigned int numVerts; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int numTris; 
  __int128 v20; 
  __int64 x; 
  __int64 y; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  __int64 scale; 
  vec4_t *color; 
  __int64 style; 
  __int64 v28; 
  int v29; 
  int v30; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  char dest[1024]; 

  if ( rg.showXModelRanking )
  {
    CurrentStatTracker = R_GetCurrentStatTracker();
    if ( CurrentStatTracker )
    {
      scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
      v3 = scrPlace;
      font = UI_GetFontHandle(scrPlace, 5, 0.15000001);
      v4 = R_TextHeight(font) / 2;
      Com_sprintf(dest, 0x400ui64, "Top %2u XModels %s", CurrentStatTracker->numXModelStats, r_showXModelRankingTypes[rg.showXModelRanking]);
      UI_DrawText(scrPlace, dest, 1024, font, -25.0, -430.0, 1, 3, 0.15000001, &colorLtCyan, 7);
      v6 = 0i64;
      v5 = (float)v4;
      *(float *)&v6 = (float)v4 - 430.0;
      Com_sprintf(dest, 0x400ui64, "%60.60s %3s %7.7s %7.7s %7.7s %7.7s %9.9s %9.9s %9.9s", "Model", "LOD", "InstNum", "Verts", "Tris", "Surfs", "TotVert", "TotTri", "UVBPgNum");
      UI_DrawText(scrPlace, dest, 1024, font, -25.0, *(float *)&v6, 1, 3, 0.15000001, &colorLtCyan, 7);
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v29 = 0;
      v10 = 0;
      v30 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      *(float *)&v6 = *(float *)&v6 + (float)v4;
      v14 = v6;
      if ( CurrentStatTracker->numXModelStats )
      {
        do
        {
          v15 = v13;
          numVerts = CurrentStatTracker->rankedXModelStats[v15].numVerts;
          v17 = (numVerts + 63) >> 6;
          LODWORD(v28) = v17;
          LODWORD(style) = CurrentStatTracker->rankedXModelStats[v15].numInstances * CurrentStatTracker->rankedXModelStats[v15].numTris;
          LODWORD(color) = numVerts * CurrentStatTracker->rankedXModelStats[v15].numInstances;
          LODWORD(scale) = CurrentStatTracker->rankedXModelStats[v15].numSurfs;
          LODWORD(vertAlign) = CurrentStatTracker->rankedXModelStats[v15].numTris;
          LODWORD(horzAlign) = numVerts;
          LODWORD(y) = CurrentStatTracker->rankedXModelStats[v15].numInstances;
          LODWORD(x) = CurrentStatTracker->rankedXModelStats[v15].lod;
          Com_sprintf(dest, 0x400ui64, "%60.60s %3d %7d %7d %7d %7d %9d %9d %9u", CurrentStatTracker->rankedXModelStats[v15].name, x, y, horzAlign, vertAlign, scale, color, style, v28);
          UI_DrawText(scrPlace, dest, 1024, font, -25.0, *(float *)&v14, 1, 3, 0.15000001, &colorWhite, 7);
          ++v13;
          v18 = CurrentStatTracker->rankedXModelStats[v15].numVerts;
          numTris = CurrentStatTracker->rankedXModelStats[v15].numTris;
          v9 += v18;
          v11 += CurrentStatTracker->rankedXModelStats[v15].numSurfs;
          v10 += numTris;
          v20 = v14;
          *(float *)&v20 = *(float *)&v14 + v5;
          v14 = v20;
          v12 += v18 * CurrentStatTracker->rankedXModelStats[v15].numInstances;
          v7 = numTris * CurrentStatTracker->rankedXModelStats[v15].numInstances + v29;
          v8 = v17 + v30;
          v29 = v7;
          v30 += v17;
        }
        while ( v13 < CurrentStatTracker->numXModelStats );
        v3 = scrPlace;
      }
      LODWORD(v28) = v8;
      LODWORD(style) = v7;
      LODWORD(color) = v12;
      LODWORD(scale) = v11;
      LODWORD(vertAlign) = v10;
      LODWORD(horzAlign) = v9;
      Com_sprintf(dest, 0x400ui64, "%60.60s %3d %7d %7d %7d %7d %9d %9d %9u", "Sum of above", 0i64, 0i64, horzAlign, vertAlign, scale, color, style, v28);
      UI_DrawText(v3, dest, 1024, font, -25.0, v5 + *(float *)&v14, 1, 3, 0.15000001, &colorWhite, 7);
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
          end.v[0] = (float)(INFIL_DEBUG_PARENT_AXIS_LENGTH * parentAxis.m[2].v[0]) + parentAxis.m[3].v[0];
          end.v[2] = (float)(INFIL_DEBUG_PARENT_AXIS_LENGTH * parentAxis.m[2].v[2]) + parentAxis.m[3].v[2];
          end.v[1] = (float)(INFIL_DEBUG_PARENT_AXIS_LENGTH * parentAxis.m[2].v[1]) + parentAxis.m[3].v[1];
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
float CG_DrawColorLegends(const ScreenPlacement *scrPlace, float x, float y, float xScale, float yScale, const char *title, const ColorLegend *colorLegends, int colorLegendsCount)
{
  float v9; 
  __int64 v10; 
  __int128 v11; 
  __int128 v12; 
  const char *s; 
  __int128 v15; 

  v9 = (float)((float)((float)R_TextHeight(cls.smallDevFont) * yScale) - (float)(yScale * 10.0)) * 0.5;
  v10 = colorLegendsCount;
  v11 = 0i64;
  *(float *)&v11 = (float)((float)CG_DrawDevString(scrPlace, x, y, xScale, yScale, title, &colorLtBlue, 5, cls.smallDevFont) + y) + 5.0;
  v12 = v11;
  if ( colorLegendsCount > 0 )
  {
    do
    {
      s = colorLegends->text;
      CG_Draw2DRect(scrPlace, x + 10.0, v9 + *(float *)&v12, xScale * 10.0, yScale * 10.0, 1, 1, colorLegends->color, cgMedia.whiteMaterial);
      ++colorLegends;
      v15 = v12;
      *(float *)&v15 = *(float *)&v12 + (float)CG_DrawDevString(scrPlace, (float)(x + 10.0) + 15.0, *(float *)&v12, xScale, yScale, s, &colorWhite, 5, cls.smallDevFont);
      v12 = v15;
      --v10;
    }
    while ( v10 );
  }
  return *(float *)&v12 - y;
}

/*
==============
CG_DrawDebugShaderOverlay
==============
*/
void CG_DrawDebugShaderOverlay(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  int integer; 
  float v3; 
  float v4; 
  const dvar_t *v5; 
  unsigned int v6; 
  char *v7; 
  int v8; 
  float *p_scrPlace_8; 
  char *v10; 
  int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  char *v14; 
  int v15; 
  float *v16; 
  char *v17; 
  int v18; 
  char *fmt; 
  char *v20; 
  ColorLegend *colorLegends; 
  ScreenPlacement *scrPlace; 
  DvarValue scrPlace_8; 
  ColorLegend v24; 
  vec4_t *v25; 
  const char *v26; 
  vec4_t *v27; 
  const char *v28; 
  vec4_t *v29; 
  const char *v30; 
  vec4_t *v31; 
  char *v32; 
  char dest[63]; 
  char v34; 
  char v35[64]; 
  char v36[64]; 
  char v37[64]; 
  char v38[64]; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  scrPlace = (ScreenPlacement *)ActivePlacement;
  integer = r_debugShaderMaterial->current.integer;
  v3 = ActivePlacement->virtualViewableMin.v[0];
  v4 = ActivePlacement->virtualViewableMin.v[1] + 20.0;
  switch ( integer )
  {
    case 30:
      v5 = r_debugShaderGlossinessBandsValues;
      if ( !r_debugShaderGlossinessBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      v6 = 0;
      v7 = &v34;
      scrPlace_8 = v5->current;
      v8 = 0;
      p_scrPlace_8 = (float *)&scrPlace_8;
      v10 = dest;
      do
      {
        if ( v8 >= 4 )
        {
          v11 = 255;
        }
        else
        {
          if ( (unsigned int)v8 >= 4 )
          {
            LODWORD(colorLegends) = 4;
            LODWORD(v20) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, colorLegends) )
              __debugbreak();
          }
          v11 = (int)(float)(255.0 * *p_scrPlace_8);
        }
        LODWORD(fmt) = v11;
        Com_sprintf(v10, 0x40ui64, "Gloss %d - %d", v6, fmt);
        *v7 = 0;
        ++v8;
        v7 += 64;
        v10 += 64;
        ++p_scrPlace_8;
        v6 = v11;
      }
      while ( v8 < 5 );
      v24.color = &colorBlue;
      v24.text = dest;
      v25 = &colorCyan;
      v26 = v35;
      v27 = &colorGreen;
      v28 = v36;
      v29 = &colorYellow;
      v30 = v37;
      v31 = &colorRed;
      v32 = v38;
      CG_DrawColorLegends(scrPlace, v3, v4, 0.69999999, 0.69999999, "glossiness bands", &v24, 5);
      break;
    case 38:
      v12 = r_debugShaderTemperatureBandsValues;
      if ( !r_debugShaderTemperatureBandsValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = 0;
      v14 = &v34;
      scrPlace_8 = v12->current;
      v15 = 0;
      v16 = (float *)&scrPlace_8;
      v17 = dest;
      do
      {
        if ( v15 >= 4 )
        {
          v18 = 1500;
        }
        else
        {
          if ( (unsigned int)v15 >= 4 )
          {
            LODWORD(colorLegends) = 4;
            LODWORD(v20) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, colorLegends) )
              __debugbreak();
          }
          v18 = (int)*v16;
        }
        LODWORD(fmt) = v18;
        Com_sprintf(v17, 0x40ui64, "Temperature [F] %d - %d", v13, fmt);
        *v14 = 0;
        ++v15;
        v14 += 64;
        v17 += 64;
        ++v16;
        v13 = v18;
      }
      while ( v15 < 5 );
      v24.color = &colorBlue;
      v24.text = dest;
      v25 = &colorCyan;
      v26 = v35;
      v27 = &colorGreen;
      v28 = v36;
      v29 = &colorYellow;
      v30 = v37;
      v31 = &colorRed;
      v32 = v38;
      CG_DrawColorLegends(scrPlace, v3, v4, 0.69999999, 0.69999999, "temperature bands", &v24, 5);
      break;
    case 31:
      v24.color = &colorOrange;
      v24.text = "Diffuse too dark";
      v25 = &colorTeal;
      v26 = "Diffuse too bright";
      v27 = &colorBlue;
      v28 = "Specular too bright";
      v29 = &colorMagenta;
      v30 = "Bad metal";
      CG_DrawColorLegends(ActivePlacement, v3, v4, 0.69999999, 0.69999999, "PBR correctness", &v24, 4);
      break;
  }
}

/*
==============
CG_DrawDebug_AnimGraphsGatherData_r
==============
*/
void CG_DrawDebug_AnimGraphsGatherData_r(XAnimTreeDebugNode *debugNodes, int nodeIndex, float dTime)
{
  int v3; 
  XAnimTreeDebugNode *v5; 
  char v6; 
  const char *animName; 
  void **v8; 
  int v9; 
  float v10; 
  __int64 v11; 
  DebugBufferGraph *v12; 
  char v13; 
  unsigned __int8 v14; 
  int firstChildIndex; 
  __int64 v16; 
  unsigned __int8 color[4]; 
  vec2_t pos; 

  v3 = 0;
  v5 = &debugNodes[nodeIndex];
  v6 = *((_BYTE *)v5 + 88);
  if ( (v6 & 0x40) == 0 && (v6 & 2) != 0 && v5->globalWeight > 0.0049999999 && (v6 & 4) == 0 )
  {
    animName = v5->animName;
    v8 = (void **)&unk_150F42BA8;
    v9 = 0;
    do
    {
      if ( *(v8 - 1) == animName && *v8 == v5->nodeId )
        break;
      ++v9;
      v8 += 765;
    }
    while ( (__int64)v8 < (__int64)&unk_150F4EAE8 );
    if ( v9 != 8 )
      goto LABEL_36;
    v10 = FLOAT_N1_0;
    if ( !unk_150F42BA0 && unk_150F42BB4 > -1.0 )
    {
      v10 = unk_150F42BB4;
      v9 = 0;
    }
    if ( !unk_150F44388 && unk_150F4439C > v10 )
    {
      v10 = unk_150F4439C;
      v9 = 1;
    }
    if ( !unk_150F45B70 && unk_150F45B84 > v10 )
    {
      v10 = unk_150F45B84;
      v9 = 2;
    }
    if ( !unk_150F47358 && unk_150F4736C > v10 )
    {
      v10 = unk_150F4736C;
      v9 = 3;
    }
    if ( !unk_150F48B40 && unk_150F48B54 > v10 )
    {
      v10 = unk_150F48B54;
      v9 = 4;
    }
    if ( !unk_150F4A328 && unk_150F4A33C > v10 )
    {
      v10 = unk_150F4A33C;
      v9 = 5;
    }
    if ( !unk_150F4BB10 && unk_150F4BB24 > v10 )
    {
      v10 = unk_150F4BB24;
      v9 = 6;
    }
    if ( !unk_150F4D2F8 && unk_150F4D30C > v10 )
      v9 = 7;
    if ( v9 == 8 )
    {
      *(_DWORD *)color = -16776961;
      DevGui_DrawFont(810, 350, color, "!!! NOT ALL ANIMS SHOWN !!!");
    }
    else
    {
LABEL_36:
      v11 = 6120i64 * v9;
      if ( *(const char **)((char *)&g_animDebugWeightGraph + v11 + 6096) == animName && *(void **)((char *)&g_animDebugWeightGraph + v11 + 6104) == v5->nodeId )
      {
        v12 = (DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11);
      }
      else
      {
        *(_QWORD *)((char *)&g_animDebugWeightGraph + v11 + 6096) = animName;
        v12 = (DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11);
        *(_QWORD *)((char *)&g_animDebugWeightGraph + v11 + 6104) = v5->nodeId;
        CG_SetDebugBufferLabel((DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11), v5->animName);
        pos.v[0] = FLOAT_810_0;
        pos.v[1] = 613.0 - (float)(75 * v9);
        CG_SetDebugBufferLabelPosition((DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11), &pos);
        v13 = *((_BYTE *)v5 + 88) & 4;
        v14 = 0;
        if ( !v13 )
          v14 = -1;
        CG_SetDebugBufferGraphColor((DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11), -(v13 != 0), v14, -(v13 != 0), 0xFFu);
        CG_ClearDebugBufferData((DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11), 0, 0.0, 0.0);
        CG_AddDebugBufferData((DebugBufferGraph *)((char *)&g_animDebugWeightGraph + v11), 0.0, dTime);
      }
      CG_AddDebugBufferData(v12, v5->globalWeight, dTime);
      *((_BYTE *)&g_animDebugWeightGraph + v11 + 6112) = 1;
      *(_DWORD *)((char *)&g_animDebugWeightGraph + v11 + 6116) = 0;
    }
  }
  if ( v5->numChildrenWithLeafOrCustomNodeBelow > 0 )
  {
    firstChildIndex = v5->firstChildIndex;
    if ( v5->numChildren > 0 )
    {
      do
      {
        v16 = firstChildIndex;
        if ( (*((_BYTE *)&debugNodes[v16] + 88) & 0x20) != 0 )
          CG_DrawDebug_AnimGraphsGatherData_r(debugNodes, firstChildIndex, dTime);
        firstChildIndex = debugNodes[v16].nextSiblingIndex;
        ++v3;
      }
      while ( v3 < v5->numChildren );
    }
  }
}

/*
==============
CG_DrawDebug_BuildWeaponPatternWeightsString
==============
*/
void CG_DrawDebug_BuildWeaponPatternWeightsString(const cg_t *cgameGlob, const BgWeaponMap *weaponMap, const playerState_s *ps, const WeaponDef *weapDef, char *strBuffer, int strBufferLength, const bool firstPrint)
{
  int v10; 
  double CrouchProneBlendMap; 
  double v12; 
  double v13; 
  double v14; 
  float v15; 
  double v16; 
  int v17; 
  char *v18; 
  int numWeaponOffsetPatterns; 
  const WeaponDef *v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  WeaponOffsetPatternDescription *v25; 
  double CurveFraction; 
  int v27; 
  char *fmt; 
  __int64 v29; 

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
  v10 = 0;
  if ( !firstPrint )
    goto LABEL_30;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CrouchProneBlendMap = BG_GetCrouchProneBlendMap(ps);
  v12 = I_fclamp((float)(*(float *)&CrouchProneBlendMap * 2.0) - 1.0, 0.0, 1.0);
  v13 = *(float *)&v12;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1218, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = BG_GetCrouchProneBlendMap(ps);
  v15 = *(float *)&v14 * 2.0;
  if ( *(float *)&v14 >= 0.5 )
    v15 = 2.0 - v15;
  v16 = I_fclamp(v15, 0.0, 1.0);
  LODWORD(v29) = ps->weapCommon.weaponOffsetHoldFireFastBlendTime;
  LODWORD(fmt) = ps->weapState[0].weaponFireTime;
  v10 = Com_sprintf_truncate(strBuffer, strBufferLength, "^7ST: ^5%d ^7FT: ^5%d ^7FBT: ^5%d ^7SBT: ^5%d ^7ABT: ^5%d ^3CF: ^7%.2f ^3PF: ^7%.2f", (unsigned int)ps->serverTimeInterpolated, fmt, v29, ps->weapCommon.weaponOffsetHoldFireSlowBlendTime, ps->weapCommon.weaponOffsetAdsBlendTime, *(float *)&v16, v13);
  if ( v10 <= 0 )
  {
    *strBuffer = 0;
  }
  else
  {
LABEL_30:
    v17 = strBufferLength - v10;
    v18 = &strBuffer[v10];
    if ( strBufferLength - v10 > 0 )
    {
      numWeaponOffsetPatterns = FIRST_LINE_PATTERN_COUNT;
      v20 = weapDef;
      if ( weapDef->numWeaponOffsetPatterns < FIRST_LINE_PATTERN_COUNT )
        numWeaponOffsetPatterns = weapDef->numWeaponOffsetPatterns;
      v21 = numWeaponOffsetPatterns;
      if ( firstPrint )
        v21 = 0;
      if ( !firstPrint )
        numWeaponOffsetPatterns = weapDef->numWeaponOffsetPatterns;
      v22 = v21;
      v23 = numWeaponOffsetPatterns - 1;
      if ( v21 > v23 )
      {
LABEL_42:
        I_strcat(v18, v17, "\n");
      }
      else
      {
        v24 = v21;
        while ( 1 )
        {
          v25 = &v20->weaponOffsetPatterns[v24];
          CurveFraction = BG_WeaponOffsets_GetCurveFraction(weaponMap, ps, ps->serverTimeInterpolated, v20, v25);
          v27 = Com_sprintf_truncate(v18, v17, " ^3P%d[%s]: ^7%.4f", (unsigned int)v21, s_weaponOffsetBlendCurveDebugNames[v25->curveType], *(float *)&CurveFraction);
          if ( v27 <= 0 )
            break;
          v17 -= v27;
          v18 += v27;
          if ( v17 <= 0 )
            return;
          v20 = weapDef;
          ++v21;
          ++v22;
          ++v24;
          if ( v22 > v23 )
            goto LABEL_42;
        }
        *v18 = 0;
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
  const centity_t *v6; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  char v9; 
  CgWeaponMap *Instance; 
  bool v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  const cpose_t *PoseExtended; 
  float *p_eType; 
  const cpose_t *ViewModelPoseForHand; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const ScreenPlacement *ActivePlacement; 
  float v27; 
  vec3_t v29; 
  vec3_t v30; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  char dest[2048]; 

  if ( (unsigned int)entNum <= 0x7FF )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    v6 = Entity;
    if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5338, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5341, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      CgTrajectory::InterpolateEntityAngles(LocalClientGlobals, v6, &outAngles);
      CG_GetPoseOrigin(&v6->pose, &outOrigin);
      v9 = 0;
      v30.v[0] = 0.0;
      v30.v[1] = 0.0;
      v30.v[2] = 0.0;
      v29.v[0] = 0.0;
      v29.v[1] = 0.0;
      v29.v[2] = 0.0;
      v11 = 0;
      if ( entNum == LocalClientGlobals->predictedPlayerState.clientNum && !LocalClientGlobals->renderingThirdPerson )
      {
        Instance = CgWeaponMap::GetInstance(localClientNum);
        if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) && !CG_Camera_Transition_IsHidingViewmodel(localClientNum) )
          v11 = 1;
      }
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      if ( v11 )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, 2114, 1);
        p_eType = (float *)&PoseExtended->eType;
        v17 = 0.0;
        if ( PoseExtended )
        {
          v9 = 1;
          CG_GetPoseOrigin(PoseExtended, &v29);
          v14 = p_eType[18];
          v13 = p_eType[19];
          v12 = p_eType[20];
          v16 = LocalClientGlobals->predictedPlayerState.origin.v[1];
          v15 = LocalClientGlobals->predictedPlayerState.origin.v[2];
          v27 = LocalClientGlobals->predictedPlayerState.origin.v[0];
          ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, WEAPON_HAND_DEFAULT);
          CG_GetPoseOrigin(ViewModelPoseForHand, &v30);
          v17 = v27;
        }
      }
      v21 = "not swinging";
      v22 = "not swinging";
      if ( CharacterInfo->torso.yawing )
        v22 = (char *)&queryFormat.fmt + 3;
      v23 = "not swinging";
      v24 = "not swinging";
      if ( CharacterInfo->torso.pitching )
        v23 = (char *)&queryFormat.fmt + 3;
      if ( CharacterInfo->legs.yawing )
        v24 = (char *)&queryFormat.fmt + 3;
      if ( CharacterInfo->legs.pitching )
        v21 = (char *)&queryFormat.fmt + 3;
      v25 = "false";
      if ( v9 )
        v25 = "true";
      Com_sprintf_truncate(dest, 0x800ui64, "entnum: %d pose origin: (%.2f, %.2f, %.2f) pose angles: (P:%.2f Y:%.2f R:%.2f) player angles: (P:%.2f Y:%.2f R:%.2f) ent angles: (P:%.2f Y:%.2f R:%.2f)\nlegs active: %s ps origin: (%.2f, %.2f, %.2f) vm origin: (%.2f, %.2f, %.2f) legs pose origin: (%.2f, %.2f, %.2f) legs pose angles: (P:%.2f Y:%.2f R:%.2f)\ntag origin offset: (%.2f, %.2f, %.2f) tag origin angles: (P:%.2f Y:%.2f R:%.2f) legs: (P:%.2f %s Y:%.2f %s) torso: (P:%.2f %s Y:%.2f %s)\nwaist P: %.2f torso P: %.2f back low: (P:%.2f Y:%.2f R:%.2f) back mid: (P:%.2f Y:%.2f R:%.2f) back up: (P:%.2f Y:%.2f R:%.2f) pelvis: (P:%.2f Y:%.2f R:%.2f)\n", (unsigned int)entNum, outOrigin.v[0], outOrigin.v[1], outOrigin.v[2], v6->pose.angles.v[0], v6->pose.angles.v[1], v6->pose.angles.v[2], CharacterInfo->playerAngles.v[0], CharacterInfo->playerAngles.v[1], CharacterInfo->playerAngles.v[2], outAngles.v[0], outAngles.v[1], outAngles.v[2], v25, v17, v16, v15, v30.v[0], v30.v[1], v30.v[2], v29.v[0], v29.v[1], v29.v[2], v14, v13, v12, CharacterInfo->control.tag_origin_offset.v[0], CharacterInfo->control.tag_origin_offset.v[1], CharacterInfo->control.tag_origin_offset.v[2], CharacterInfo->control.tag_origin_angles.v[0], CharacterInfo->control.tag_origin_angles.v[1], CharacterInfo->control.tag_origin_angles.v[2], CharacterInfo->legs.pitchAngle, v21, CharacterInfo->legs.yawAngle, v24, CharacterInfo->torso.pitchAngle, v23, CharacterInfo->torso.yawAngle, v22, CharacterInfo->fWaistPitch, CharacterInfo->fTorsoPitch, CharacterInfo->control.angles[0].v[0], CharacterInfo->control.angles[0].v[1], CharacterInfo->control.angles[0].v[2], CharacterInfo->control.angles[1].v[0], CharacterInfo->control.angles[1].v[1], CharacterInfo->control.angles[1].v[2], CharacterInfo->control.angles[2].v[0], CharacterInfo->control.angles[2].v[1], CharacterInfo->control.angles[2].v[2], CharacterInfo->control.angles[3].v[0], CharacterInfo->control.angles[3].v[1], CharacterInfo->control.angles[3].v[2]);
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      UI_DrawText(ActivePlacement, dest, 2048, cls.smallDevFont, 0.0, *yPos, 1, 1, DEBUG_TEXT_SCALE_2, &colorWhite, 3);
      *yPos = TEXT_HEIGHT + *yPos;
    }
  }
}

/*
==============
CG_DrawDebug_CornerPrintScale
==============
*/
float CG_DrawDebug_CornerPrintScale(const ScreenPlacement *sP, float posX, float posY, float labelWidth, const char *text, const char *label, const vec4_t *color, const float scaleX, const float scaleY, const float scaleLine, const bool forceNoLabel)
{
  const dvar_t *v11; 
  int v13; 
  int v14; 

  v11 = DVARBOOL_cg_drawFPSLabels;
  if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled || forceNoLabel )
  {
    v14 = CG_DrawDevString(sP, posX, posY, scaleX, scaleY, text, color, 6, cls.smallDevFont);
  }
  else
  {
    v13 = CG_DrawDevString(sP, posX - labelWidth, posY, scaleX, scaleY, text, color, 6, cls.smallDevFont);
    v14 = CG_DrawDevString(sP, posX - labelWidth, posY, scaleX, scaleY, label, &colorWhiteFaded, 5, cls.smallDevFont);
    if ( v13 > v14 )
      v14 = v13;
  }
  return (float)v14 * scaleLine;
}

/*
==============
CG_DrawDebug_DrawAnims
==============
*/
bool CG_DrawDebug_DrawAnims(LocalClientNum_t localClientNum, int handle, float yPos)
{
  signed __int64 v3; 
  void *v4; 
  int v7; 
  int v8; 
  unsigned int v9; 
  DObj *ClientDObj; 
  const DObj *v11; 
  centity_t *v12; 
  centity_t *Pose; 
  const char *v14; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  bool v17; 
  entityState_t *p_nextState; 
  scr_string_t AnimsetName; 
  const char *v20; 
  double v21; 
  double v22; 
  double v23; 
  float *p_eType; 
  const char *v25; 
  __int64 x; 
  __int64 vertAlign; 
  int animState; 
  vec3_t outState; 
  int animEntry; 
  __int64 v32; 
  char buffer[12288]; 

  v4 = alloca(v3);
  v32 = -2i64;
  v7 = 0;
  v8 = 0;
  v9 = handle - 2117;
  if ( handle < 2048 || v9 <= 0x17F )
    v8 = handle;
  ClientDObj = Com_GetClientDObj(v8, localClientNum);
  v11 = ClientDObj;
  if ( ClientDObj )
  {
    v12 = NULL;
    if ( handle >= 2048 )
    {
      if ( v9 > 0x17F )
        goto LABEL_8;
      Pose = (centity_t *)CG_ClientModel_GetPose(localClientNum, v9);
    }
    else
    {
      Pose = CG_GetEntity(localClientNum, handle);
      v12 = Pose;
      if ( !Pose || (Pose->flags & 1) == 0 )
        goto LABEL_8;
    }
    p_eType = (float *)&Pose->pose.eType;
    if ( Pose )
    {
      CG_GetPoseOrigin(&Pose->pose, &outState);
      v25 = j_va("client %d, entnum %d: (%.1f,%.1f,%.1f), (%.1f,%.1f,%.1f)\n", (unsigned int)localClientNum, (unsigned int)handle, outState.v[0], outState.v[1], outState.v[2], p_eType[18], p_eType[19], p_eType[20]);
      DObjDisplayAnimToBuffer(v11, v25, buffer, 12288);
      memset(&outState, 0, sizeof(outState));
LABEL_9:
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.2);
      UI_DrawText(ActivePlacement, buffer, 12288, FontHandle, 0.0, yPos, 1, 1, 0.18000001, &colorWhite, 3);
      if ( v12 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
        {
          v17 = &v12->nextState == NULL;
          p_nextState = &v12->nextState;
          animState = -1;
          if ( !v17 && (*(_BYTE *)&p_nextState->animInfo.selectAnim & 1) != 0 )
          {
            AnimsetName = BG_AnimationState_GetAnimsetName(p_nextState);
            if ( AnimsetName )
            {
              if ( ((p_nextState->eType - 12) & 0xFFFD) != 0 )
              {
                BG_AnimationState_GetState(p_nextState, &animState, &animEntry);
                *(_QWORD *)outState.v = 0i64;
                BG_Animset_GetStateInfoByIndex(AnimsetName, animState, (AnimsetState **)&outState);
                LOBYTE(v7) = *(_DWORD *)(*(_QWORD *)outState.v + 40i64) != 0;
                v20 = SL_ConvertToString((scr_string_t)**(_DWORD **)outState.v);
                if ( v20 )
                {
                  v21 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.waistPitchPacked);
                  v22 = *(float *)&v21;
                  v23 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.torsoPitchPacked);
                  LODWORD(vertAlign) = v7;
                  LODWORD(x) = animState;
                  Com_sprintf(buffer, 0x3000ui64, "state=%s (%d) torsopitch=%.2f waist pitch=%.2f HasAimSet=%d", v20, x, *(float *)&v23, v22, vertAlign);
                  UI_DrawText(ActivePlacement, buffer, 12288, FontHandle, 0.0, yPos + 280.0, 1, 1, 0.2, &colorWhite, 3);
                }
              }
            }
          }
        }
      }
      LOBYTE(ClientDObj) = 1;
      return (char)ClientDObj;
    }
LABEL_8:
    v14 = j_va("client %d, entnum %d:\n", (unsigned int)localClientNum, (unsigned int)handle);
    DObjDisplayAnimToBuffer(v11, v14, buffer, 12288);
    goto LABEL_9;
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
void CG_DrawDebug_DrawBone(const DObj *obj, const centity_t *cent, int modelIndex, scr_string_t boneName, XBoneInfo **boneInfoArray, const vec4_t *boneColor, const Bounds *collBounds)
{
  DObjAnimMat *RotTransArray; 
  XBoneInfo *v12; 
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
        v12 = boneInfoArray[index[0]];
        QuatToAxis(&RotTransArray[index[0]].quat, &axis);
        if ( CG_DObjGetWorldBonePos(&cent->pose, obj, index[0], &outOrigin) )
        {
          if ( v12->bounds.halfSize.v[0] == 0.0 && v12->bounds.halfSize.v[1] == 0.0 && v12->bounds.halfSize.v[2] == 0.0 )
            v12 = (XBoneInfo *)collBounds;
          if ( v12 )
            CG_DebugBoxOriented(&outOrigin, &v12->bounds, &axis, boneColor, 1, 0);
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
  __int128 v9; 
  float v10; 

  v9 = 0i64;
  v10 = (float)*rowIndex * ROW_HEIGHT;
  *(float *)&v9 = v10 + ROW_HEIGHT;
  _XMM1 = v9;
  *(float *)&v9 = (float)*columnIndex * COLUMN_OFFSET;
  __asm { vmaxss  xmm0, xmm1, dword ptr [rax] }
  *maxY = *(float *)&_XMM0;
  UI_DrawText(scrPlace, text, maxChars, cls.smallDevFont, *(float *)&v9, v10, 1, 1, DEBUG_TEXT_SCALE_1, color, 3);
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
  float *v4; 
  const DObj *ClientDObj; 
  const DObj *v6; 
  int v7; 
  int v8; 
  const ScreenPlacement *ActivePlacement; 
  unsigned int v10; 
  int v11; 
  const ScreenPlacement *i; 
  __int128 v13; 
  float v14; 
  unsigned __int8 numBones; 
  __int64 v18; 
  const char *BoneName; 
  const char *v20; 
  __int128 v21; 
  float v22; 
  __int64 y; 
  __int64 horzAlign; 
  float v27; 
  float v28; 
  unsigned int v29; 
  int v30; 
  int NumModels; 
  ScreenPlacement *scrPlace; 
  const XModel *Model; 
  DObjPartBits partBits; 
  char dest[1024]; 

  v4 = yPos;
  ClientDObj = Com_GetClientDObj(entNum, localClientNum);
  v6 = ClientDObj;
  if ( ClientDObj )
  {
    v7 = 0;
    v8 = 0;
    NumModels = DObjGetNumModels(ClientDObj);
    DObjGetHidePartBits(v6, &partBits);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v10 = 0;
    scrPlace = (ScreenPlacement *)ActivePlacement;
    v11 = 0;
    v29 = 0;
    v30 = 0;
    for ( i = ActivePlacement; v11 < NumModels; v29 = v10 )
    {
      Model = DObjGetModel(v6, v11);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5298, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      Com_sprintf(dest, 0x400ui64, "^2Model %2d: ^7%-50s\n", (unsigned int)v11, Model->name);
      v13 = 0i64;
      v14 = (float)v7 * ROW_HEIGHT;
      *(float *)&v13 = v14 + ROW_HEIGHT;
      _XMM0 = v13;
      __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+0] }
      v27 = DEBUG_TEXT_SCALE_1;
      *(float *)&v13 = (float)v8 * COLUMN_OFFSET;
      *v4 = *(float *)&_XMM1;
      UI_DrawText(i, dest, 1024, cls.smallDevFont, *(float *)&v13, v14, 1, 1, v27, &colorWhite, 3);
      if ( ++v7 >= MAX_ROWS )
      {
        v7 = 0;
        ++v8;
      }
      numBones = Model->numBones;
      if ( numBones )
      {
        v18 = numBones;
        do
        {
          BoneName = DObjGetBoneName(v6, v10);
          if ( v10 >= 0x100 )
          {
            LODWORD(horzAlign) = 256;
            LODWORD(y) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", y, horzAlign) )
              __debugbreak();
          }
          v20 = "^1Hidden";
          if ( ((0x80000000 >> (v10 & 0x1F)) & partBits.array[(unsigned __int64)v10 >> 5]) == 0 )
            v20 = "^2Visible";
          Com_sprintf(dest, 0x400ui64, "^7%-3d: %-25s - %7s\n", v10, BoneName, v20);
          v21 = 0i64;
          v22 = (float)v7 * ROW_HEIGHT;
          *(float *)&v21 = v22 + ROW_HEIGHT;
          _XMM0 = v21;
          __asm { vmaxss  xmm1, xmm0, dword ptr [r13+0] }
          v28 = DEBUG_TEXT_SCALE_1;
          *(float *)&v21 = (float)v8 * COLUMN_OFFSET;
          *yPos = *(float *)&_XMM1;
          UI_DrawText(scrPlace, dest, 1024, cls.smallDevFont, *(float *)&v21, v22, 1, 1, v28, &colorWhite, 3);
          if ( ++v7 >= MAX_ROWS )
          {
            v7 = 0;
            ++v8;
          }
          ++v10;
          --v18;
        }
        while ( v18 );
        v11 = v30;
        v10 = v29;
        v4 = yPos;
        numBones = Model->numBones;
        i = scrPlace;
      }
      ++v11;
      v10 += numBones;
      v30 = v11;
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
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  const char *v13; 
  const DObj *ClientDObj; 
  const DObj *v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  DObjClientPartBits *v20; 
  __int64 v21; 
  __int64 v22; 
  DObjClientPartBits *v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  char v26; 
  cg_t *LocalClientGlobals; 
  float v28; 
  float v29; 
  float v30; 
  cg_t *v31; 
  int v32; 
  int *v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  int v40; 
  float v41; 
  float v42; 
  DObjClientPartBits *v43; 
  unsigned __int64 v44; 
  char v45; 
  const char *BoneName; 
  const char *v47; 
  __int128 v48; 
  int i; 
  int v53; 
  unsigned __int16 OriginalNonDuplicate; 
  int ParentOrDuplicate; 
  const vec4_t *v56; 
  const char *v57; 
  float v58; 
  float v59; 
  char *v60; 
  float v61; 
  __int64 fromServer; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  int v67; 
  int boneIndex; 
  float v70; 
  playerState_s *p_predictedPlayerState; 
  cpose_t *pose; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t outOrg; 
  DObjPartBits partBits; 
  vec3_t end; 
  vec3_t v78; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> v80; 
  DObjClientPartBits v81; 
  tmat33_t<vec3_t> v82; 
  tmat33_t<vec3_t> v83; 
  DObjBoneParentMap outParentMap; 
  int boneIndices[4096]; 
  char _Buffer[128]; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  __int128 v93; 

  v13 = nameFilter;
  *(_QWORD *)outOrg.v = nameFilter;
  ClientDObj = Com_GetClientDObj(entityNum, localClientNum);
  v15 = ClientDObj;
  if ( !ClientDObj )
  {
    Com_Printf(0, "Entity %i is not a dynamic object.\n", (unsigned int)entityNum);
    Dvar_SetInt_Internal(DVARINT_cg_drawDebugBones, 2047);
    return;
  }
  v67 = DObjNumBones(ClientDObj);
  v16 = v67;
  v17 = DObjNumClientOnlyBones(v15);
  pose = (cpose_t *)CG_GetPose(localClientNum, entityNum);
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5548, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v18 = 0;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  boneIndex = 0;
  v70 = FLOAT_0_819152;
  if ( !v67 )
  {
    if ( !v17 )
      return;
    boneIndex = 0x8000;
  }
  v19 = v67;
  v89 = v9;
  v88 = v10;
  v87 = v11;
  if ( v17 > 0 )
    v19 = v17 + v67;
  if ( eType == CG_DEBUG_DRAW_BONES_IK )
  {
    XAnimIKDebug_GetAllBonesPartbits(v15, &partBits);
    v20 = &v81;
    v21 = 8i64;
    do
    {
      *(_QWORD *)v20->array = 0i64;
      *(_QWORD *)&v20->array[2] = 0i64;
      *(_QWORD *)&v20->array[4] = 0i64;
      v20 = (DObjClientPartBits *)((char *)v20 + 64);
      *(_QWORD *)&v20[-1].array[14] = 0i64;
      *(_QWORD *)&v20[-1].array[16] = 0i64;
      *(_QWORD *)&v20[-1].array[18] = 0i64;
      *(_QWORD *)&v20[-1].array[20] = 0i64;
      *(_QWORD *)&v20[-1].array[22] = 0i64;
      --v21;
    }
    while ( v21 );
    v81.array[0] = partBits.array[0];
    v81.array[1] = partBits.array[1];
    v81.array[2] = partBits.array[2];
    v81.array[3] = partBits.array[3];
    v81.array[4] = partBits.array[4];
    v81.array[5] = partBits.array[5];
    v81.array[6] = partBits.array[6];
    v81.array[7] = partBits.array[7];
    goto LABEL_29;
  }
  if ( eType != CG_DEBUG_DRAW_BONES_PROC )
  {
    if ( eType == CG_DEBUG_DRAW_BONES_PHYSICS )
    {
      XAnimProdDebug_GetAllPhysicsPartBits(v15, &v81);
      goto LABEL_29;
    }
    v22 = 8i64;
    if ( eType == CG_DEBUG_DRAW_BONES_CLIENT_ONLY )
    {
      v23 = &v81;
      do
      {
        *(_QWORD *)v23->array = 0i64;
        *(_QWORD *)&v23->array[2] = 0i64;
        *(_QWORD *)&v23->array[4] = 0i64;
        v23 = (DObjClientPartBits *)((char *)v23 + 64);
        *(_QWORD *)&v23[-1].array[14] = 0i64;
        *(_QWORD *)&v23[-1].array[16] = 0i64;
        *(_QWORD *)&v23[-1].array[18] = 0i64;
        *(_QWORD *)&v23[-1].array[20] = 0i64;
        *(_QWORD *)&v23[-1].array[22] = 0i64;
        --v22;
      }
      while ( v22 );
      v24 = v67;
      if ( v67 >= v19 )
        goto LABEL_28;
      do
      {
        if ( v24 >= 0x1000 )
        {
          LODWORD(v65) = 4096;
          LODWORD(v64) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v64, v65) )
            __debugbreak();
        }
        v25 = (unsigned __int64)v24 >> 5;
        v26 = v24++ & 0x1F;
        v81.array[v25] |= 0x80000000 >> v26;
      }
      while ( (int)v24 < v19 );
    }
    else
    {
      v43 = &v81;
      if ( eType )
      {
        do
        {
          *(_QWORD *)v43->array = -1i64;
          *(_QWORD *)&v43->array[2] = -1i64;
          *(_QWORD *)&v43->array[4] = -1i64;
          v43 = (DObjClientPartBits *)((char *)v43 + 64);
          *(_QWORD *)&v43[-1].array[14] = -1i64;
          *(_QWORD *)&v43[-1].array[16] = -1i64;
          *(_QWORD *)&v43[-1].array[18] = -1i64;
          *(_QWORD *)&v43[-1].array[20] = -1i64;
          *(_QWORD *)&v43[-1].array[22] = -1i64;
          --v22;
        }
        while ( v22 );
        goto LABEL_29;
      }
      do
      {
        *(_QWORD *)v43->array = 0i64;
        *(_QWORD *)&v43->array[2] = 0i64;
        *(_QWORD *)&v43->array[4] = 0i64;
        v43 = (DObjClientPartBits *)((char *)v43 + 64);
        *(_QWORD *)&v43[-1].array[14] = 0i64;
        *(_QWORD *)&v43[-1].array[16] = 0i64;
        *(_QWORD *)&v43[-1].array[18] = 0i64;
        *(_QWORD *)&v43[-1].array[20] = 0i64;
        *(_QWORD *)&v43[-1].array[22] = 0i64;
        --v22;
      }
      while ( v22 );
      if ( v67 <= 0 )
        goto LABEL_29;
      do
      {
        if ( v18 >= 0x1000 )
        {
          LODWORD(v65) = 4096;
          LODWORD(v64) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v64, v65) )
            __debugbreak();
        }
        v44 = (unsigned __int64)v18 >> 5;
        v45 = v18++ & 0x1F;
        v81.array[v44] |= 0x80000000 >> v45;
      }
      while ( (int)v18 < v67 );
    }
    v16 = v67;
    v13 = *(const char **)outOrg.v;
LABEL_28:
    v18 = 0;
    goto LABEL_29;
  }
  XAnimProcDebug_GetAllTargetBonesPartBits(v15, &v81);
LABEL_29:
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v28 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
  v29 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
  v30 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
  v31 = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&v31->refdef.view, &outOrg);
  v32 = 0;
  if ( v19 > 0 )
  {
    v33 = boneIndices;
    do
      *v33++ = v32++;
    while ( v32 < v19 );
  }
  CG_DObjCalcBones(pose, v15, v16, boneIndices);
  v34 = FLOAT_30_0;
  v35 = FLOAT_0_050000001;
  v36 = FLOAT_0_0017500001;
  if ( v19 > 0 )
  {
    v93 = v5;
    v37 = outOrg.v[2];
    v92 = v6;
    v38 = outOrg.v[1];
    v91 = v7;
    v39 = outOrg.v[0];
    v90 = v8;
    do
    {
      if ( v18 >= 0x1000 )
      {
        LODWORD(v63) = 4096;
        LODWORD(fromServer) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, v63) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v18 & 0x1F)) & v81.array[(unsigned __int64)v18 >> 5]) != 0 )
      {
        v40 = v18;
        if ( (int)v18 >= v16 )
          v40 = v18 | 0x8000;
        CG_DObjGetWorldBoneMatrix(pose, v15, v40, &outTagMat, &outOrigin);
        v41 = fsqrt((float)((float)((float)(p_predictedPlayerState->origin.v[1] - outOrigin.v[1]) * (float)(p_predictedPlayerState->origin.v[1] - outOrigin.v[1])) + (float)((float)(p_predictedPlayerState->origin.v[0] - outOrigin.v[0]) * (float)(p_predictedPlayerState->origin.v[0] - outOrigin.v[0]))) + (float)((float)(p_predictedPlayerState->origin.v[2] - outOrigin.v[2]) * (float)(p_predictedPlayerState->origin.v[2] - outOrigin.v[2])));
        if ( v41 >= 30.0 )
          v42 = v41 * v36;
        else
          v42 = v35;
        BoneName = DObjGetBoneName(v15, v40);
        v47 = BoneName;
        if ( eType == CG_DEBUG_DRAW_BONES_TAGS && !I_stristr(BoneName, "tag_") || v13 && *v13 && !I_stristr(v47, v13) )
        {
          v16 = v67;
          v36 = FLOAT_0_0017500001;
        }
        else
        {
          CL_AddOrientedDebugStar(&outOrigin, &outTagMat, &colorGreen, v42, 0, 0);
          v16 = v67;
          v48 = LODWORD(outOrigin.v[1]);
          *(float *)&v48 = fsqrt((float)((float)((float)(outOrigin.v[1] - v38) * (float)(outOrigin.v[1] - v38)) + (float)((float)(outOrigin.v[0] - v39) * (float)(outOrigin.v[0] - v39))) + (float)((float)(outOrigin.v[2] - v37) * (float)(outOrigin.v[2] - v37)));
          _XMM1 = v48;
          __asm
          {
            vcmpless xmm0, xmm1, xmm12
            vblendvps xmm0, xmm1, xmm8, xmm0
          }
          v35 = FLOAT_0_050000001;
          v36 = FLOAT_0_0017500001;
          if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[1] - v38)) * v29) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[0] - v39)) * v28)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[2] - v37)) * v30)) > v70 )
          {
            v70 = (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[1] - v38)) * v29) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[0] - v39)) * v28)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[2] - v37)) * v30);
            boneIndex = v40;
          }
        }
      }
      ++v18;
    }
    while ( (int)v18 < v19 );
    v34 = FLOAT_30_0;
  }
  DObjBuildBoneParentMap(v15, &outParentMap);
  for ( i = 0; i < v19; ++i )
  {
    v53 = i;
    if ( i >= v16 )
      v53 = i | 0x8000;
    if ( (v53 & 0x8000) == 0 )
    {
      if ( (unsigned int)v53 >= 0x1000 )
      {
        LODWORD(v63) = 4096;
        LODWORD(fromServer) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fromServer, v63) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v53 & 0x1F)) & v81.array[(unsigned __int64)(unsigned int)v53 >> 5]) != 0 )
      {
        CG_DObjGetWorldBoneMatrix(pose, v15, v53, &outTagMat, &outOrigin);
        if ( (v53 < 0 || (unsigned int)v53 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v53, "signed", v53) )
          __debugbreak();
        OriginalNonDuplicate = DObjBoneParentMap_GetOriginalNonDuplicate(&outParentMap, (unsigned __int16)v53);
        ParentOrDuplicate = DObjBoneParentMap_GetParentOrDuplicate(&outParentMap, OriginalNonDuplicate);
        if ( ParentOrDuplicate != 255 )
        {
          CG_DObjGetWorldBoneMatrix(pose, v15, ParentOrDuplicate, &v82, &end);
          v56 = &colorWhite;
          if ( (v53 & 0x8000) != 0 )
            v56 = &colorYellowHeat;
          if ( v53 == boneIndex )
            v56 = &colorGreen;
          CL_AddDebugLine(&outOrigin, &end, v56, 0, 0, 0);
          if ( shouldDrawBindPose )
          {
            CG_DObjGetWorldBoneBindMatrix(pose, v15, ParentOrDuplicate, &v83, &v78);
            CG_DObjGetWorldBoneBindMatrix(pose, v15, v53, &v80, &start);
            CL_AddDebugLine(&start, &v78, &colorRed, 0, 0, 0);
          }
        }
        v16 = v67;
      }
    }
  }
  v57 = DObjGetBoneName(v15, boneIndex);
  if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5704, ASSERT_TYPE_ASSERT, "(boneName != 0)", (const char *)&queryFormat, "boneName != NULL") )
    __debugbreak();
  CG_DObjGetWorldBoneMatrix(pose, v15, boneIndex, &outTagMat, &outOrigin);
  v58 = fsqrt((float)((float)((float)(p_predictedPlayerState->origin.v[1] - outOrigin.v[1]) * (float)(p_predictedPlayerState->origin.v[1] - outOrigin.v[1])) + (float)((float)(p_predictedPlayerState->origin.v[0] - outOrigin.v[0]) * (float)(p_predictedPlayerState->origin.v[0] - outOrigin.v[0]))) + (float)((float)(p_predictedPlayerState->origin.v[2] - outOrigin.v[2]) * (float)(p_predictedPlayerState->origin.v[2] - outOrigin.v[2])));
  if ( v58 >= v34 )
    v59 = v58 * v36;
  else
    v59 = v35;
  v60 = (char *)v57;
  if ( (boneIndex & 0x8000) != 0 )
  {
    j_snprintf(_Buffer, 0x80ui64, "*%s", v57);
    v60 = _Buffer;
  }
  CL_AddDebugString(&outOrigin, &colorGreen, v59, v60, 0, 1);
  if ( shouldDrawBindPose )
  {
    CG_DObjGetWorldBoneBindMatrix(pose, v15, boneIndex, &v80, &start);
    v61 = fsqrt((float)((float)((float)(p_predictedPlayerState->origin.v[1] - start.v[1]) * (float)(p_predictedPlayerState->origin.v[1] - start.v[1])) + (float)((float)(p_predictedPlayerState->origin.v[0] - start.v[0]) * (float)(p_predictedPlayerState->origin.v[0] - start.v[0]))) + (float)((float)(p_predictedPlayerState->origin.v[2] - start.v[2]) * (float)(p_predictedPlayerState->origin.v[2] - start.v[2])));
    if ( v61 >= v34 )
      v35 = v61 * 0.0017500001;
    CL_AddDebugString(&start, &colorRed, v35, v57, 0, 1);
    CL_AddDebugLine(&outOrigin, &start, &colorYellow, 0, 0, 0);
  }
  if ( eType == CG_DEBUG_DRAW_BONES_IK )
    XAnimNode_IKAntiSlide_DrawDebug(v15);
}

/*
==============
CG_DrawDebug_DrawBspVersion
==============
*/
void CG_DrawDebug_DrawBspVersion()
{
  __int128 v0; 
  const dvar_t *v1; 
  float value; 
  GfxFont *FontHandle; 
  const struct tm *v4; 
  const char *v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  float v14; 
  int v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  float y; 
  const dvar_t *v22; 
  vec4_t v23; 
  vec4_t color; 
  char Buffer[1024]; 
  __int128 v26; 

  if ( comWorld.name && *comWorld.name && (comWorld.changeListInfo.changeListNumber || comWorld.changeListInfo.userName && *comWorld.changeListInfo.userName) )
  {
    v1 = DVARFLT_cg_drawBSPVersionFontScale;
    v26 = v0;
    if ( !DVARFLT_cg_drawBSPVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBSPVersionFontScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    value = v1->current.value;
    v23 = (vec4_t)_xmm;
    color = (vec4_t)_xmm;
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4306, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, value);
    v4 = Com_LocalTimeFromUTC(comWorld.changeListInfo.time);
    strftime(Buffer, 0x400ui64, "%x %H:%M", v4);
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    if ( CL_TransientsWorldMP_IsActive() )
    {
      v5 = (char *)&queryFormat.fmt + 3;
      v6 = comWorld.proxyLODQuality < 0;
      if ( v6 | CL_TransientsWorldMP_AnyMissingModels() )
      {
        v23.v[0] = FLOAT_0_60000002;
        v23.v[1] = FLOAT_0_89999998;
        v5 = "(MISSING PROXY MODELS - RECOMPILE D3DBSP)     ";
      }
      v7 = "Unknown";
      if ( comWorld.proxyLODQuality == -1 )
      {
        v8 = "Recompile";
      }
      else if ( comWorld.proxyLODQuality )
      {
        v8 = "Unknown";
        if ( comWorld.proxyLODQuality == 1 )
          v8 = "Fast";
      }
      else
      {
        v8 = "Default";
      }
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        v9 = "OK";
        if ( (rgp.world->draw.compressedSunShadowParams.flags & 2) != 0 )
          v9 = "STR";
      }
      else
      {
        v9 = "ERR";
      }
      if ( comWorld.bakeQuality )
      {
        switch ( comWorld.bakeQuality )
        {
          case 1u:
            v7 = "Fast";
            break;
          case 2u:
            v7 = "Full";
            break;
          case 3u:
            v7 = "Extra";
            break;
        }
      }
      else
      {
        v7 = "Debug";
      }
      v10 = j_va("%s[BSP: %s CL %i %s %s, Bake Quality: %s, CSM: %s, proxyLOD Quality: %s]", v5, cls.m_activeGameMapName, comWorld.changeListInfo.changeListNumber, comWorld.changeListInfo.userName, Buffer, v7, v9, v8);
    }
    else
    {
      if ( rgp.world->draw.compressedSunShadowSize )
      {
        v11 = "OK";
        if ( (rgp.world->draw.compressedSunShadowParams.flags & 2) != 0 )
          v11 = "STR";
      }
      else
      {
        v11 = "ERR";
      }
      if ( comWorld.bakeQuality )
      {
        switch ( comWorld.bakeQuality )
        {
          case 1u:
            v12 = "Fast";
            break;
          case 2u:
            v12 = "Full";
            break;
          case 3u:
            v12 = "Extra";
            break;
          default:
            v12 = "Unknown";
            break;
        }
      }
      else
      {
        v12 = "Debug";
      }
      v10 = j_va("[BSP: %s CL %i %s %s, Bake Quality: %s, CSM: %s]", cls.m_activeGameMapName, comWorld.changeListInfo.changeListNumber, comWorld.changeListInfo.userName, Buffer, v12, v11);
    }
    v13 = v10;
    v14 = (float)UI_TextWidth(v10, 0, FontHandle, value);
    v15 = UI_TextHeight(FontHandle, value);
    v16 = DVARFLT_cg_drawBspVersionY;
    v17 = (float)v15;
    if ( !DVARFLT_cg_drawBspVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v18 = v17 + v16->current.value;
    v19 = DVARFLT_cg_drawBspVersionX;
    if ( !DVARFLT_cg_drawBspVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    UI_DrawText(&scrPlaceFullUnsafe, v13, 0x7FFFFFFF, FontHandle, 1.0 - (float)(v14 + v19->current.value), 1.0 - v18, 3, 3, value, &color, 0);
    v20 = DVARFLT_cg_drawBspVersionY;
    if ( !DVARFLT_cg_drawBspVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    y = COERCE_FLOAT(LODWORD(v17) ^ _xmm) - v20->current.value;
    v22 = DVARFLT_cg_drawBspVersionX;
    if ( !DVARFLT_cg_drawBspVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersionX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    UI_DrawText(&scrPlaceFullUnsafe, v13, 0x7FFFFFFF, FontHandle, COERCE_FLOAT(LODWORD(v14) ^ _xmm) - v22->current.value, y, 3, 3, value, &v23, 0);
  }
}

/*
==============
CG_DrawDebug_DrawBulletFireLog
==============
*/
void CG_DrawDebug_DrawBulletFireLog(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  cg_t *LocalClientGlobals; 
  int v3; 
  const DebugBulletFireInfoEntry *Entry; 
  unsigned int *v5; 
  __int64 v6; 
  int v7; 
  __int128 v8; 
  float v9; 
  const char *v10; 
  bool v11; 
  bool v12; 
  double v13; 
  float v14; 
  double v15; 
  double v16; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int NumEntries; 
  cg_t *v20; 
  char dest[65536]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    v20 = LocalClientGlobals;
    CG_DebugBulletFireLog_Compact(LocalClientGlobals->time);
    Com_sprintf(dest, 0x10000ui64, "^3BULLET FIRE LOG\n");
    v3 = 0;
    NumEntries = CG_DebugBulletFireLog_GetNumEntries();
    if ( NumEntries > 0 )
    {
      do
      {
        Entry = CG_DebugBulletFireLog_GetEntry(v3);
        v5 = (unsigned int *)Entry;
        if ( (!Entry || !Entry->isUsed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6069, ASSERT_TYPE_ASSERT, "(entry && entry->isUsed)", (const char *)&queryFormat, "entry && entry->isUsed") )
          __debugbreak();
        v6 = -1i64;
        do
          ++v6;
        while ( dest[v6] );
        v7 = 0x10000 - v6;
        if ( 0x10000 - (int)v6 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6073, ASSERT_TYPE_ASSERT, "(remainingBuffer >= 2)", (const char *)&queryFormat, "remainingBuffer >= 2") )
          __debugbreak();
        *(double *)&v1 = vectoyaw((const vec2_t *)(v5 + 17));
        v8 = v1;
        *(double *)&v1 = vectopitch((const vec3_t *)(v5 + 17));
        v9 = *(float *)&v1;
        if ( *((_BYTE *)v5 + 157) )
        {
          v11 = VecNCompareCustomEpsilon((const float *)v5 + 14, (const float *)v5 + 33, 0.001, 3);
          v12 = VecNCompareCustomEpsilon((const float *)v5 + 17, (const float *)v5 + 36, 0.001, 3);
          if ( v11 && v12 )
          {
            *((_QWORD *)&v1 + 1) = *((_QWORD *)&v8 + 1);
            Com_sprintf(&dest[(int)v6], v7, "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^2Server fired a matching bullet.\n", *v5, *((float *)v5 + 14), *((float *)v5 + 15), *((float *)v5 + 16), *(float *)&v1, *(float *)&v8);
          }
          else
          {
            v13 = vectoyaw((const vec2_t *)v5 + 18);
            v14 = *(float *)&v13;
            v15 = vectopitch((const vec3_t *)v5 + 12);
            v16 = *(float *)&v15;
            v1 = COERCE_UNSIGNED_INT64(*((float *)v5 + 33));
            Com_sprintf(&dest[(int)v6], v7, "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^1Server fired mismatching bullet. ^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f\n", *v5, *((float *)v5 + 14), *((float *)v5 + 15), *((float *)v5 + 16), v9, *(float *)&v8, *((float *)v5 + 33), *((float *)v5 + 34), *((float *)v5 + 35), v16, v14);
          }
          LocalClientGlobals = v20;
        }
        else
        {
          v10 = "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^1Waiting for server to fire for %d ms.\n";
          if ( (int)(LocalClientGlobals->time - *v5) <= SERVER_WAIT_DURATION_MAX )
            v10 = "^7Time: ^3%8d\t^7Pos: ^3[%8.2f, %8.2f, %8.2f]\t^7Pitch: ^3%5.2f ^7Yaw: ^3%5.2f ^3Waiting for server to fire for %d ms.\n";
          v1 = COERCE_UNSIGNED_INT64(*((float *)v5 + 16));
          Com_sprintf(&dest[(int)v6], v7, v10);
        }
        ++v3;
      }
      while ( v3 < NumEntries );
    }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, MY_SCALE_1);
    UI_DrawText(ActivePlacement, dest, 0x10000, FontHandle, MY_X_1, MY_Y, 1, 1, MY_SCALE_1, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawButtonBits
==============
*/
void CG_DrawDebug_DrawButtonBits(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  signed __int64 buttons; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  unsigned int v70; 
  int v71; 
  __int64 v72; 
  int v73; 
  __int64 v74; 
  int v75; 
  __int64 v76; 
  int v77; 
  __int64 v78; 
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
  unsigned int v102; 
  int v103; 
  __int64 v104; 
  int v105; 
  __int64 v106; 
  int v107; 
  __int64 v108; 
  int v109; 
  __int64 v110; 
  int v111; 
  __int64 v112; 
  int v113; 
  __int64 v114; 
  int v115; 
  int v116; 
  __int64 v117; 
  int v118; 
  int v119; 
  int v120; 
  __int64 v121; 
  int v122; 
  int v123; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  usercmd_s ucmd; 
  char dest[2048]; 

  CG_GetLocalClientGlobals(localClientNum);
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
  font = UI_GetFontHandle(scrPlace, 1, 1.0);
  v2 = Com_sprintf(dest, 0x800ui64, "ButtonBits\n");
  memset_0(&ucmd, 0, sizeof(ucmd));
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
  buttons = ucmd.buttons;
  v6 = 55;
  v7 = 55i64;
  if ( (ucmd.buttons & 1) != 0 )
    v7 = 50i64;
  v8 = Com_sprintf(&dest[v2], 2048 - (int)v2, "^%cBUTTON_ATTACK\n", v7) + v2;
  v9 = 55i64;
  if ( (buttons & 2) != 0 )
    v9 = 50i64;
  v10 = Com_sprintf(&dest[v8], 2048 - v8, "^%cBUTTON_SPRINT\n", v9) + v8;
  v11 = 55;
  if ( (buttons & 4) != 0 )
    v11 = 50;
  v12 = Com_sprintf(&dest[v10], 2048 - v10, "^%cBUTTON_MELEE\n", v11) + v10;
  v13 = 55i64;
  if ( (buttons & 8) != 0 )
    v13 = 50i64;
  v14 = Com_sprintf(&dest[v12], 2048 - v12, "^%cBUTTON_ACTIVATE\n", v13) + v12;
  v15 = 55i64;
  if ( (buttons & 0x10) != 0 )
    v15 = 50i64;
  v16 = Com_sprintf(&dest[v14], 2048 - v14, "^%cBUTTON_RELOAD\n", v15) + v14;
  v17 = 55i64;
  if ( (buttons & 0x20) != 0 )
    v17 = 50i64;
  v18 = Com_sprintf(&dest[v16], 2048 - v16, "^%cBUTTON_USE_RELOAD\n", v17) + v16;
  v19 = 55i64;
  if ( (buttons & 0x40) != 0 )
    v19 = 50i64;
  v20 = Com_sprintf(&dest[v18], 2048 - v18, "^%cBUTTON_PRONE\n", v19) + v18;
  v21 = 55i64;
  if ( (buttons & 0x80u) != 0i64 )
    v21 = 50i64;
  v22 = Com_sprintf(&dest[v20], 2048 - v20, "^%cBUTTON_CROUCH\n", v21) + v20;
  v23 = 55;
  if ( (buttons & 0x100) != 0 )
    v23 = 50;
  v24 = Com_sprintf(&dest[v22], 2048 - v22, "^%cBUTTON_JUMP\n", v23) + v22;
  v25 = 55i64;
  if ( (buttons & 0x200) != 0 )
    v25 = 50i64;
  v26 = Com_sprintf(&dest[v24], 2048 - v24, "^%cBUTTON_ADS\n", v25) + v24;
  v27 = 55i64;
  if ( (buttons & 0x400) != 0 )
    v27 = 50i64;
  v28 = Com_sprintf(&dest[v26], 2048 - v26, "^%cBUTTON_TEMPSTANCE\n", v27) + v26;
  v29 = 55i64;
  if ( (buttons & 0x800) != 0 )
    v29 = 50i64;
  v30 = Com_sprintf(&dest[v28], 2048 - v28, "^%cBUTTON_BREATH\n", v29) + v28;
  v31 = 55i64;
  if ( (buttons & 0x1000) != 0 )
    v31 = 50i64;
  v32 = Com_sprintf(&dest[v30], 2048 - v30, "^%cBUTTON_FRAG\n", v31) + v30;
  v33 = 55i64;
  if ( (buttons & 0x2000) != 0 )
    v33 = 50i64;
  v34 = Com_sprintf(&dest[v32], 2048 - v32, "^%cBUTTON_OFFHANDSECONDARY\n", v33) + v32;
  v35 = 55i64;
  if ( (buttons & 0x4000) != 0 )
    v35 = 50i64;
  v36 = Com_sprintf(&dest[v34], 2048 - v34, "^%cBUTTON_CONFIRM_LOCATION\n", v35) + v34;
  v37 = 55i64;
  if ( (buttons & 0x8000) != 0 )
    v37 = 50i64;
  v38 = Com_sprintf(&dest[v36], 2048 - v36, "^%cBUTTON_CANCEL_LOCATION\n", v37) + v36;
  v39 = 55i64;
  if ( (buttons & 0x10000) != 0 )
    v39 = 50i64;
  v40 = Com_sprintf(&dest[v38], 2048 - v38, "^%cBUTTON_NIGHTVISION\n", v39) + v38;
  v41 = 55i64;
  if ( (buttons & 0x20000) != 0 )
    v41 = 50i64;
  v42 = Com_sprintf(&dest[v40], 2048 - v40, "^%cBUTTON_THROW\n", v41) + v40;
  v43 = 55i64;
  if ( (buttons & 0x40000) != 0 )
    v43 = 50i64;
  v44 = Com_sprintf(&dest[v42], 2048 - v42, "^%cBUTTON_REMOTECONTROL\n", v43) + v42;
  v45 = 55i64;
  if ( (buttons & 0x80000) != 0 )
    v45 = 50i64;
  v46 = Com_sprintf(&dest[v44], 2048 - v44, "^%cBUTTON_OFFHAND_CANCEL\n", v45) + v44;
  v47 = 55i64;
  if ( (buttons & 0x100000) != 0 )
    v47 = 50i64;
  v48 = Com_sprintf(&dest[v46], 2048 - v46, "^%cBUTTON_SKYDIVE_CAM_TOGGLE\n", v47) + v46;
  v49 = 55i64;
  if ( (buttons & 0x200000) != 0 )
    v49 = 50i64;
  v50 = Com_sprintf(&dest[v48], 2048 - v48, "^%cBUTTON_ADS_TOGGLE\n", v49) + v48;
  v51 = 55i64;
  if ( (buttons & 0x400000) != 0 )
    v51 = 50i64;
  v52 = Com_sprintf(&dest[v50], 2048 - v50, "^%cBUTTON_SLIDE\n", v51) + v50;
  v53 = 55i64;
  if ( (buttons & 0x800000) != 0 )
    v53 = 50i64;
  v54 = Com_sprintf(&dest[v52], 2048 - v52, "^%cBUTTON_TALK\n", v53) + v52;
  v55 = 55i64;
  if ( (buttons & 0x1000000) != 0 )
    v55 = 50i64;
  v56 = Com_sprintf(&dest[v54], 2048 - v54, "^%cBUTTON_THROTTLE\n", v55) + v54;
  v57 = 55i64;
  if ( (buttons & 0x2000000) != 0 )
    v57 = 50i64;
  v58 = Com_sprintf(&dest[v56], 2048 - v56, "^%cBUTTON_ZOOM\n", v57) + v56;
  v59 = 55i64;
  if ( (buttons & 0x4000000) != 0 )
    v59 = 50i64;
  v60 = Com_sprintf(&dest[v58], 2048 - v58, "^%cBUTTON_CENTER_VIEW\n", v59) + v58;
  v61 = 55i64;
  if ( (buttons & 0x8000000) != 0 )
    v61 = 50i64;
  v62 = Com_sprintf(&dest[v60], 2048 - v60, "^%cBUTTON_VEH_SWITCH_SEAT\n", v61) + v60;
  v63 = 55i64;
  if ( (buttons & 0x10000000) != 0 )
    v63 = 50i64;
  v64 = Com_sprintf(&dest[v62], 2048 - v62, "^%cBUTTON_CURSORHINT_USED\n", v63) + v62;
  v65 = 55i64;
  if ( (buttons & 0x40000000) != 0 )
    v65 = 50i64;
  v66 = Com_sprintf(&dest[v64], 2048 - v64, "^%cBUTTON_CURSORHINT\n", v65) + v64;
  v67 = 55i64;
  if ( (buttons & 0x80000000) != 0 )
    v67 = 50i64;
  Com_sprintf(&dest[v66], 2048 - v66, "^%cBUTTON_TAUNT\n", v67);
  UI_DrawText(scrPlace, dest, 2048, font, 0.0, 25.0, 1, 1, 0.2, &colorWhite, 3);
  v68 = 55i64;
  if ( (buttons & 0x100000000i64) != 0 )
    v68 = 50i64;
  v69 = Com_sprintf(dest, 0x800ui64, "^%cBUTTON_SPECIAL\n", v68);
  v70 = 55;
  if ( (buttons & 0x200000000i64) != 0 )
    v70 = 50;
  v71 = Com_sprintf(&dest[v69], 2048 - (int)v69, "^%cBUTTON_HYBRID_TOGGLE\n", v70) + v69;
  v72 = 55i64;
  if ( (buttons & 0x400000000i64) != 0 )
    v72 = 50i64;
  v73 = Com_sprintf(&dest[v71], 2048 - v71, "^%cBUTTON_IS_JOGGING_ANIMATION\n", v72) + v71;
  v74 = 55i64;
  if ( (buttons & 0x800000000i64) != 0 )
    v74 = 50i64;
  v75 = Com_sprintf(&dest[v73], 2048 - v73, "^%cBUTTON_PLAYER_NEAR_COLLISION\n", v74) + v73;
  v76 = 55i64;
  if ( (buttons & 0x1000000000i64) != 0 )
    v76 = 50i64;
  v77 = Com_sprintf(&dest[v75], 2048 - v75, "^%cBUTTON_STANCE\n", v76) + v75;
  v78 = 55i64;
  if ( (buttons & 0x2000000000i64) != 0 )
    v78 = 50i64;
  v79 = Com_sprintf(&dest[v77], 2048 - v77, "^%cBUTTON_SPRINT_RELOAD_CANCEL\n", v78) + v77;
  v80 = 55i64;
  if ( (buttons & 0x4000000000i64) != 0 )
    v80 = 50i64;
  v81 = Com_sprintf(&dest[v79], 2048 - v79, "^%cBUTTON_LADDER_SLIDE_DOWN\n", v80) + v79;
  v82 = 55i64;
  if ( (buttons & 0x8000000000i64) != 0 )
    v82 = 50i64;
  v83 = Com_sprintf(&dest[v81], 2048 - v81, "^%cBUTTON_CONTROL_LOCK_MOVE\n", v82) + v81;
  v84 = 55i64;
  if ( (buttons & 0x10000000000i64) != 0 )
    v84 = 50i64;
  v85 = Com_sprintf(&dest[v83], 2048 - v83, "^%cBUTTON_FLY_UP\n", v84) + v83;
  v86 = 55i64;
  if ( (buttons & 0x20000000000i64) != 0 )
    v86 = 50i64;
  v87 = Com_sprintf(&dest[v85], 2048 - v85, "^%cBUTTON_FLY_DOWN\n", v86) + v85;
  v88 = 55i64;
  if ( (buttons & 0x40000000000i64) != 0 )
    v88 = 50i64;
  v89 = Com_sprintf(&dest[v87], 2048 - v87, "^%cBUTTON_WEAP_CYCLE\n", v88) + v87;
  v90 = 55i64;
  if ( (buttons & 0x80000000000i64) != 0 )
    v90 = 50i64;
  v91 = Com_sprintf(&dest[v89], 2048 - v89, "^%cBUTTON_MOUNT\n", v90) + v89;
  v92 = 55i64;
  if ( (buttons & 0x100000000000i64) != 0 )
    v92 = 50i64;
  v93 = Com_sprintf(&dest[v91], 2048 - v91, "^%cBUTTON_INSPECT\n", v92) + v91;
  v94 = 55i64;
  if ( (buttons & 0x400000000000i64) != 0 )
    v94 = 50i64;
  v95 = Com_sprintf(&dest[v93], 2048 - v93, "^%cBUTTON_SPRINT_HOLD\n", v94) + v93;
  v96 = 55i64;
  if ( (buttons & 0x800000000000i64) != 0 )
    v96 = 50i64;
  v97 = Com_sprintf(&dest[v95], 2048 - v95, "^%cBUTTON_SUPER_SPRINT\n", v96) + v95;
  v98 = 55i64;
  if ( (buttons & 0x1000000000000i64) != 0 )
    v98 = 50i64;
  v99 = Com_sprintf(&dest[v97], 2048 - v97, "^%cBUTTON_FOLLOW_OFF\n", v98) + v97;
  v100 = 55i64;
  if ( (buttons & 0x2000000000000i64) != 0 )
    v100 = 50i64;
  v101 = Com_sprintf(&dest[v99], 2048 - v99, "^%cBUTTON_FOLLOW_NEXT\n", v100) + v99;
  v102 = 55;
  if ( (buttons & 0x4000000000000i64) != 0 )
    v102 = 50;
  v103 = Com_sprintf(&dest[v101], 2048 - v101, "^%cBUTTON_FOLLOW_PREV\n", v102) + v101;
  v104 = 55i64;
  if ( (buttons & 0x8000000000000i64) != 0 )
    v104 = 50i64;
  v105 = Com_sprintf(&dest[v103], 2048 - v103, "^%cBUTTON_FROM_GAMEPAD\n", v104) + v103;
  v106 = 55i64;
  if ( (buttons & 0x10000000000000i64) != 0 )
    v106 = 50i64;
  v107 = Com_sprintf(&dest[v105], 2048 - v105, "^%cBUTTON_HOLD_GRENADE\n", v106) + v105;
  v108 = 55i64;
  if ( (buttons & 0x20000000000000i64) != 0 )
    v108 = 50i64;
  v109 = Com_sprintf(&dest[v107], 2048 - v107, "^%cBUTTON_VEH_CAM_RECENTER\n", v108) + v107;
  v110 = 55i64;
  if ( (buttons & 0x40000000000000i64) != 0 )
    v110 = 50i64;
  v111 = Com_sprintf(&dest[v109], 2048 - v109, "^%cBUTTON_SLIDE_AND_STAND\n", v110) + v109;
  v112 = 55i64;
  if ( (buttons & 0x80000000000000i64) != 0 )
    v112 = 50i64;
  v113 = Com_sprintf(&dest[v111], 2048 - v111, "^%cBUTTON_MOUNT_STICKY_CFG\n", v112) + v111;
  v114 = 55i64;
  if ( (buttons & 0x3000) != 0 )
    v114 = 50i64;
  v115 = Com_sprintf(&dest[v113], 2048 - v113, "^%cBUTTON_ANY_OFFHAND\n", v114) + v113;
  v116 = Com_sprintf(&dest[v115], 2048 - v115, "^%cBUTTON_ANY_SWIM_UP\n", v23) + v115;
  v117 = 55i64;
  if ( (buttons & 0x480) != 0 )
    v117 = 50i64;
  v118 = Com_sprintf(&dest[v116], 2048 - v116, "^%cBUTTON_ANY_SWIM_DOWN\n", v117) + v116;
  v119 = Com_sprintf(&dest[v118], 2048 - v118, "^%cBUTTON_HYBRID_TOGGLE\n", v70) + v118;
  v120 = Com_sprintf(&dest[v119], 2048 - v119, "^%cBUTTON_THERMAL_TOGGLE\n", v11) + v119;
  v121 = 55i64;
  if ( (buttons & 0x100000000000000i64) != 0 )
    v121 = 50i64;
  v122 = Com_sprintf(&dest[v120], 2048 - v120, "^%cBUTTON_STAND_TO_PRONE\n", v121) + v120;
  if ( buttons < 0 )
    v6 = 50;
  v123 = Com_sprintf(&dest[v122], 2048 - v122, "^%cBUTTON_CONFIRM_LOCATION_ALT\n", v6);
  Com_sprintf(&dest[v123 + v122], 2048 - (v123 + v122), "^%cBUTTON_AUTO_SPRINT\n", v102);
  UI_DrawText(scrPlace, dest, 2048, font, 200.0, 25.0, 1, 1, 0.2, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawCenterLines
==============
*/
void CG_DrawDebug_DrawCenterLines(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v4; 
  __int128 v6; 
  __int128 v8; 
  float v14; 
  int ControllerFromClient; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  int i; 
  const dvar_t *v21; 
  vec4_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  int j; 
  const dvar_t *v28; 
  vec4_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  int k; 
  float v34; 
  float fmt; 
  float c; 
  float s; 
  vec4_t color; 

  v1 = DVARINT_cg_drawCenterLines;
  if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10719, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
      __debugbreak();
    v4 = DVARINT_cg_drawCenterLines;
    v6 = LODWORD(FLOAT_0_5);
    *(float *)&v6 = 0.5 * ActivePlacement->realViewportSize.v[1];
    _XMM8 = v6;
    v8 = LODWORD(FLOAT_0_5);
    *(float *)&v8 = 0.5 * ActivePlacement->realViewportSize.v[0];
    _XMM6 = v8;
    if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    _XMM0 = v4->current.unsignedInt;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm6, xmm6, xmm3, xmm2
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm2, xmm8, xmm3, xmm2; p1y
    }
    v14 = ActivePlacement->realViewportSize.v[0];
    c = *(float *)&_XMM2;
    CG_Draw2DLine(ActivePlacement, 0.0, *(float *)&_XMM2, v14, *(float *)&_XMM2, 1.0, 5, 5, &colorGreen, cgMedia.whiteMaterial);
    fmt = ActivePlacement->realViewportSize.v[1];
    c = *(float *)&_XMM6;
    CG_Draw2DLine(ActivePlacement, *(float *)&_XMM6, 0.0, *(float *)&_XMM6, fmt, 1.0, 5, 5, &colorGreen, cgMedia.whiteMaterial);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    *(double *)&_XMM0 = GamerProfile_GetMouseMonitorDistanceCoef(ControllerFromClient);
    *(float *)&_XMM2 = ActivePlacement->realViewportSize.v[0];
    v16 = DVARINT_cg_drawCenterLines;
    v17 = 0.5 * ActivePlacement->realViewportSize.v[1];
    v18 = (float)(0.5 / (float)(*(float *)&_XMM2 / ActivePlacement->realViewportSize.v[1])) * *(float *)&_XMM0;
    v19 = 0.5 * *(float *)&_XMM2;
    if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer == 3 )
    {
      for ( i = 1; i <= 21; ++i )
      {
        v21 = DVARBOOL_cl_mouseAdsUseMonitorDistance;
        v22 = &colorMdGreen;
        if ( (i & 1) != 0 )
          v22 = &colorGreen;
        v23 = (float)i * 0.025;
        color = *v22;
        if ( !DVARBOOL_cl_mouseAdsUseMonitorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_mouseAdsUseMonitorDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.enabled && i == 21 )
        {
          color = colorRed;
          v23 = v18;
        }
        v24 = v23 * ActivePlacement->realViewportSize.v[0];
        v25 = v23 * ActivePlacement->realViewportSize.v[1];
        CG_Draw2DLine(ActivePlacement, v19 - v24, v17 - v25, v19 - v24, v25 + v17, 1.0, 5, 5, &color, cgMedia.whiteMaterial);
        CG_Draw2DLine(ActivePlacement, v24 + v19, v17 - v25, v24 + v19, v25 + v17, 1.0, 5, 5, &color, cgMedia.whiteMaterial);
      }
    }
    else
    {
      v26 = DVARINT_cg_drawCenterLines;
      if ( !DVARINT_cg_drawCenterLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCenterLines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.integer == 4 )
      {
        for ( j = 1; j <= 25; ++j )
        {
          v28 = DVARBOOL_cl_mouseAdsUseMonitorDistance;
          v29 = &colorMdGreen;
          if ( (j & 1) != 0 )
            v29 = &colorGreen;
          v30 = (float)(0.025 * ActivePlacement->realViewportSize.v[0]) * (float)j;
          color = *v29;
          if ( !DVARBOOL_cl_mouseAdsUseMonitorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_mouseAdsUseMonitorDistance") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v28);
          if ( v28->current.enabled && j == 25 )
          {
            v30 = v18 * ActivePlacement->realViewportSize.v[0];
            color = colorRed;
          }
          v31 = 0.0;
          v32 = v30;
          for ( k = 1; k <= 64; ++k )
          {
            FastSinCos((float)k * 0.098174773, &s, &c);
            v34 = (float)(v30 * c) + v17;
            s = v30 * s;
            c = v30 * c;
            CG_Draw2DLine(ActivePlacement, v31 + v19, v32 + v17, s + v19, v34, 1.0, 5, 5, &color, cgMedia.whiteMaterial);
            v31 = s;
            v32 = c;
          }
        }
      }
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
                    boneColora = v19;
                    v5 = obj;
                    CG_DrawDebug_DrawBone(obj, cent, v7, Model->boneNames[v11], boneInfo, boneColora, NULL);
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

void __fastcall CG_DrawDebug_DrawClutterInfo(double _XMM0_8)
{
  signed __int64 v1; 
  __int128 v2; 
  void *v3; 
  unsigned int v4; 
  const GfxClutterCollectionGPUData **ClutterCollectionGPUDataBuffer; 
  GfxWorldStaticModels *p_smodels; 
  unsigned int clutterCollectionCount; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v20; 
  unsigned int *v23; 
  const dvar_t *v24; 
  std::_Ref_fn<<lambda_ccab88d376c46b8802cb87209bb62334> > v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int *v32; 
  __int64 v33; 
  GfxClutterCollection *clutterCollections; 
  __int64 v35; 
  const StDiskTerrainSurface *v36; 
  const StTerrainClutterLayer *v37; 
  const StreamKey *streamKey; 
  float scaleWithoutFovScale; 
  float biasWithoutFovScale; 
  __int128 v41; 
  unsigned int v43; 
  unsigned int ClutterTilesInstanceCount; 
  char v46; 
  int integer; 
  int v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const char *v57; 
  float v58; 
  const char *v59; 
  float v60; 
  float v61; 
  unsigned int ReactiveMotionClutterLayerCount; 
  const char *v63; 
  unsigned int DebugClutterInstanceCount; 
  const char *v65; 
  const char *v66; 
  unsigned int size; 
  const char *v68; 
  unsigned int v69; 
  float v70; 
  const char *v71; 
  float v72; 
  const char *v73; 
  float v74; 
  const char *v75; 
  char *fmt; 
  __int64 forceColor; 
  unsigned int v78; 
  unsigned int ClutterLayerBitmaskSizeBytes; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  int v85; 
  unsigned int maxInstanceCount; 
  const StTerrain *terrain; 
  CG_DrawDebug_DrawClutterInfo::__l23::<lambda_b155f55f8211a5fe8ee52b9cfc91046f> _Pred; 
  unsigned int *v89; 
  GfxWorldStaticModels *v90; 
  CG_DrawDebug_DrawClutterInfo::__l23::<lambda_ccab88d376c46b8802cb87209bb62334> _Val; 
  base_vec2_t<unsigned int> tileCount; 
  vec4_t setColor; 
  base_vec2_t<unsigned int> v94; 
  vec2_t coords; 
  base_vec2_t<unsigned int> tileStart; 
  unsigned int _First[4]; 
  __int128 v98; 

  v3 = alloca(v1);
  if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4043, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
    __debugbreak();
  v4 = 0;
  CG_DrawStringExt(&scrPlaceFull, 0.0, 0.5, "Clutter Debug Info", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 162.0, 0.5, "Generated Instances", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 237.0, 0.5, "Sampled Instances", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 322.0, 0.5, "Max Instances", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 392.0, 0.5, "Instance Memory", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 452.0, 0.5, "Bitmask Memory", &colorWhite, 0, 0, 6.0, 1);
  CG_DrawStringExt(&scrPlaceFull, 512.0, 0.5, "Total Memory", &colorWhite, 0, 0, 6.0, 1);
  ClutterCollectionGPUDataBuffer = (const GfxClutterCollectionGPUData **)R_ST_GetClutterCollectionGPUDataBuffer();
  p_smodels = &rgp.world->smodels;
  _Pred.clutterCollectionGPUData = ClutterCollectionGPUDataBuffer;
  v90 = &rgp.world->smodels;
  clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
  if ( clutterCollectionCount > 0x400 )
  {
    Com_PrintWarning(14, "Too many clutter layers for debug overlay. Only the first %i of %i will be shown", 1024i64, clutterCollectionCount);
    clutterCollectionCount = 1024;
  }
  v8 = 0i64;
  if ( clutterCollectionCount )
  {
    if ( clutterCollectionCount >= 0x10 )
    {
      v9 = 8;
      do
      {
        v10 = v9 - 4;
        _XMM0 = (unsigned int)v8;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v8] = _XMM1;
        _XMM0 = (unsigned int)v10;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v10] = _XMM1;
        v8 = (unsigned int)(v8 + 16);
        _XMM0 = v9;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v9] = _XMM1;
        v20 = v9 + 4;
        v9 += 16;
        _XMM0 = (unsigned int)v20;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&_First[v20] = _XMM1;
      }
      while ( (unsigned int)v8 < (clutterCollectionCount & 0xFFFFFFF0) );
    }
    if ( (unsigned int)v8 < clutterCollectionCount )
    {
      v23 = &_First[(unsigned int)v8];
      do
      {
        *v23++ = v8;
        LODWORD(v8) = v8 + 1;
      }
      while ( (unsigned int)v8 < clutterCollectionCount );
    }
  }
  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4098, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  v24 = DVARINT_cg_drawClutterInfo;
  if ( !DVARINT_cg_drawClutterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClutterInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  switch ( v24->current.integer )
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
      *((_QWORD *)&_XMM0_8 + 1) = &terrain;
      v25._Fn = std::_Pass_fn__lambda_ccab88d376c46b8802cb87209bb62334__0_(&_Val)._Fn;
      std::_Sort_unchecked_unsigned_int___std::_Ref_fn__lambda_ccab88d376c46b8802cb87209bb62334_____(_First, &_First[v26], v26, (std::_Ref_fn<<lambda_ccab88d376c46b8802cb87209bb62334> >)v25._Fn->smodels);
      break;
  }
  v82 = 0;
  v27 = 0;
  v80 = 0;
  v28 = 0;
  v83 = 0;
  v29 = 0;
  v81 = 0;
  v30 = 0;
  if ( clutterCollectionCount )
  {
    v31 = clutterCollectionCount - 32;
    v98 = v2;
    if ( (int)(clutterCollectionCount - 32) < 0 )
      v31 = 0;
    v85 = v31;
    v32 = _First;
    v89 = _First;
    do
    {
      v33 = *v32;
      clutterCollections = p_smodels->clutterCollections;
      v35 = (__int64)&p_smodels->models[p_smodels->collections[clutterCollections[v33].smodelCollectionIndex].smodelIndex];
      v36 = &terrain->surfaces[clutterCollections[v33].terrainSurfaceIndex];
      v37 = &v36->clutterLayers[clutterCollections[v33].clutterLayerIndex];
      streamKey = v36->clutterSampleBitmask.streamKey;
      _Val.smodels = **(const GfxWorldStaticModels ***)v35;
      maxInstanceCount = clutterCollections[v33].maxInstanceCount;
      v78 = HIDWORD(_Pred.clutterCollectionGPUData[v33]);
      if ( !streamKey || Stream_GenericIsSafeToUse(streamKey) )
        ClutterLayerBitmaskSizeBytes = R_ST_GetClutterLayerBitmaskSizeBytes(v37);
      else
        ClutterLayerBitmaskSizeBytes = 0;
      scaleWithoutFovScale = rg.correctedLodParms.clutterRamp.scaleWithoutFovScale;
      biasWithoutFovScale = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
      _XMM0_8 = XModelGetLodOutDist(*(const XModel **)v35);
      v41 = *(_OWORD *)&_XMM0_8;
      _Val.terrain = NULL;
      *(float *)&v41 = (float)(*(float *)&_XMM0_8 - biasWithoutFovScale) / scaleWithoutFovScale;
      _XMM6 = v41;
      coords = R_ST_GetCameraCoords(&rg.correctedLodParms.origin, &v36->objToWld);
      R_ST_GetClutterTilesCovered(&coords, &v37->layerSize, *(const float *)&v41, &v37->tileSizeUV, &tileStart, (base_vec2_t<unsigned int> *)&_Val.terrain);
      v82 += v78;
      v81 += ClutterLayerBitmaskSizeBytes;
      v43 = (LODWORD(_Val.terrain) * HIDWORD(_Val.terrain)) << 11;
      v83 += v43;
      tileCount = 0i64;
      v84 = 0;
      if ( (*(_BYTE *)(v35 + 8) & 8) != 0 && R_ReactiveMotion_UsesClutterPass(0) )
      {
        __asm { vminss  xmm2, xmm6, cs:?rg@@3Ur_globals_t@@A.vertexDeformCutOffDist; drawDistance }
        v94 = 0i64;
        R_ST_GetClutterTilesCovered(&coords, &v37->layerSize, *(const float *)&_XMM2, &v37->tileSizeUV, &v94, &tileCount);
        ClutterTilesInstanceCount = R_ST_GetClutterTilesInstanceCount(v36, v37, &v94, &tileCount);
        v80 += ClutterTilesInstanceCount;
        v46 = 1;
        v84 = ClutterTilesInstanceCount;
      }
      else
      {
        v46 = 0;
      }
      *(&_XMM0_8 + 1) = *(double *)&colorWhite.xyz.z;
      setColor = colorWhite;
      integer = clutterCollectionCount - 1;
      if ( r_st_clutterLayerSelected->current.integer < (signed int)(clutterCollectionCount - 1) )
        integer = r_st_clutterLayerSelected->current.integer;
      if ( v4 == integer )
      {
        R_ST_SelectClutterCollection(v33);
        *(&_XMM0_8 + 1) = *(double *)&colorGreen.xyz.z;
        setColor = colorGreen;
      }
      if ( !R_ST_ClutterCollectionEnabled(v33) )
      {
        *(&_XMM0_8 + 1) = *(double *)&setColor.xyz.z;
        setColor = (vec4_t)_mm128_mul_ps((__m128)setColor, (__m128)_xmm);
      }
      v48 = integer - 16;
      if ( v85 < v48 )
        v48 = v85;
      if ( v48 < 0 )
        v48 = 0;
      if ( v4 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", (int)v4, "unsigned", v4) )
        __debugbreak();
      if ( (int)v4 >= v48 && v4 < v48 + 32 )
      {
        v49 = (float)v4;
        v50 = (float)((float)(v49 + 1.0) - (float)v48) * 8.0;
        CG_Draw2DRect(&scrPlaceFull, 0.0, v50, 572.0, 7.0, 1, 8, &colorBlackFaded, cgMedia.whiteMaterial);
        v52 = v50 + 0.5;
        v51 = v52;
        v53 = j_va("%u:", (unsigned int)v33);
        CG_DrawStringExt(&scrPlaceFull, 1.0, v52, v53, &setColor, 0, 0, 6.0, 1);
        v54 = j_va("%s:", (const char *)_Val.smodels);
        CG_DrawStringExt(&scrPlaceFull, 12.0, v52, v54, &setColor, 0, 0, 6.0, 1);
        if ( v46 )
          v55 = j_va("%u [%u RMC]", v78, v84);
        else
          v55 = j_va("%u", v78);
        CG_DrawStringExt(&scrPlaceFull, 162.0, v52, v55, &setColor, 0, 0, 6.0, 1);
        if ( v46 )
        {
          LODWORD(forceColor) = tileCount.v[1];
          LODWORD(fmt) = tileCount.v[0];
          v56 = j_va("%u (%ux%u [%ux%u RMC] tiles)", v43, LODWORD(_Val.terrain), HIDWORD(_Val.terrain), fmt, forceColor);
        }
        else
        {
          v56 = j_va("%u (%ux%u tiles)", v43, LODWORD(_Val.terrain), HIDWORD(_Val.terrain));
        }
        CG_DrawStringExt(&scrPlaceFull, 237.0, v52, v56, &setColor, 0, 0, 6.0, 1);
        v57 = j_va("%u", maxInstanceCount);
        CG_DrawStringExt(&scrPlaceFull, 322.0, v52, v57, &setColor, 0, 0, 6.0, 1);
        v58 = (float)ClutterLayerBitmaskSizeBytes;
        *(&_XMM0_8 + 1) = 0.0;
        v59 = j_va("%.2fMB", (float)(v58 * 0.00000095367432));
        CG_DrawStringExt(&scrPlaceFull, 452.0, v51, v59, &setColor, 0, 0, 6.0, 1);
      }
      ++v4;
      p_smodels = v90;
      v32 = ++v89;
    }
    while ( v4 < clutterCollectionCount );
    v27 = v80;
    v30 = v81;
    v28 = v82;
    v29 = v83;
  }
  if ( clutterCollectionCount > 0x20 )
    clutterCollectionCount = 32;
  v60 = (float)clutterCollectionCount;
  v61 = (float)(v60 + 1.0) * 8.0;
  CG_Draw2DRect(&scrPlaceFull, 0.0, v61, 572.0, 7.0, 1, 8, &colorBlackFaded, cgMedia.whiteMaterial);
  ReactiveMotionClutterLayerCount = R_ReactiveMotion_GetReactiveMotionClutterLayerCount(0);
  v63 = j_va("Totals: [%u RMC Layers]", ReactiveMotionClutterLayerCount);
  CG_DrawStringExt(&scrPlaceFull, 12.0, v61 + 0.5, v63, &colorWhite, 0, 0, 6.0, 1);
  DebugClutterInstanceCount = R_ReactiveMotion_GetDebugClutterInstanceCount(0);
  v65 = j_va("%u [%u of %u RMC]", v28, DebugClutterInstanceCount, v27);
  CG_DrawStringExt(&scrPlaceFull, 162.0, v61 + 0.5, v65, &colorWhite, 0, 0, 6.0, 1);
  v66 = j_va("%u", v29);
  CG_DrawStringExt(&scrPlaceFull, 237.0, v61 + 0.5, v66, &colorWhite, 0, 0, 6.0, 1);
  size = p_smodels->clutterInstancePool.size;
  v68 = j_va("%u", size);
  CG_DrawStringExt(&scrPlaceFull, 322.0, v61 + 0.5, v68, &colorWhite, 0, 0, 6.0, 1);
  v69 = 12 * (p_smodels->clutterTintCount + 3 * size);
  v70 = (float)v69;
  v71 = j_va("%.2fMB", (float)(v70 * 0.00000095367432));
  CG_DrawStringExt(&scrPlaceFull, 392.0, v61 + 0.5, v71, &colorWhite, 0, 0, 6.0, 1);
  v72 = (float)v30;
  v73 = j_va("%.2fMB", (float)(v72 * 0.00000095367432));
  CG_DrawStringExt(&scrPlaceFull, 452.0, v61 + 0.5, v73, &colorWhite, 0, 0, 6.0, 1);
  v74 = (float)(v69 + v30);
  v75 = j_va("%.2fMB", (float)(v74 * 0.00000095367432));
  CG_DrawStringExt(&scrPlaceFull, 512.0, v61 + 0.5, v75, &colorWhite, 0, 0, 6.0, 1);
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
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  GfxWorld *v6; 
  int v7; 
  GfxDynamicLightsetBFData *basisFunctions; 
  unsigned int v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  bool v13; 
  __int64 lightIndex; 
  vec3_t *p_colorGammaSrgb; 
  __int64 v16; 
  GfxDynamicLight *v17; 
  int v18[4]; 
  vec3_t colorGammaSrgb; 
  vec3_t outOrg; 

  integer = r_dlsDebugLightsetRender->current.integer;
  if ( (_DWORD)integer != -1 )
  {
    world = rgp.world;
    v4 = integer;
    if ( rgp.world->dynamicLightset.basisFunctions[integer].bfType == GFX_BF_DLS )
    {
      colorGammaSrgb.v[2] = 0.0;
      *(float *)v18 = FLOAT_1_0;
      *(float *)&v18[1] = FLOAT_1_0;
      *(float *)&v18[2] = FLOAT_1_0;
      colorGammaSrgb.v[0] = FLOAT_1_0;
      colorGammaSrgb.v[1] = FLOAT_1_0;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7401, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      v6 = rgp.world;
      v7 = 0;
      basisFunctions = world->dynamicLightset.basisFunctions;
      v9 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      v10 = r_debugDrawLightsDrawRadius->current.value * r_debugDrawLightsDrawRadius->current.value;
      v11 = r_debugDrawLightsDrawDetailRadius->current.value * r_debugDrawLightsDrawDetailRadius->current.value;
      if ( basisFunctions[v4].numRec )
      {
        while ( 1 )
        {
          v12 = (__int64)&world->dynamicLightset.basisFunctionLights[v7 + basisFunctions[v4].startRec];
          v13 = *(float *)(v12 + 12) > 0.0 || *(float *)(v12 + 16) > 0.0 || *(float *)(v12 + 20) > 0.0;
          lightIndex = *(unsigned int *)(v12 + 24);
          p_colorGammaSrgb = (vec3_t *)v18;
          if ( (unsigned int)lightIndex < v9 )
          {
            if ( !v13 )
              p_colorGammaSrgb = &colorGammaSrgb;
            v17 = (GfxDynamicLight *)&v6->primaryLights[lightIndex];
          }
          else
          {
            if ( !v13 )
              p_colorGammaSrgb = &colorGammaSrgb;
            v16 = (unsigned int)lightIndex - v9;
            LODWORD(lightIndex) = 0;
            v17 = &scene.dynamicSpotLight[v16];
          }
          CG_DrawDebug_DrawLight(&v17->lightCommon, p_colorGammaSrgb, &outOrg, v10, v11, lightIndex, 1);
          basisFunctions = world->dynamicLightset.basisFunctions;
          if ( ++v7 >= (unsigned int)basisFunctions[v4].numRec )
            break;
          v6 = rgp.world;
        }
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawEntityWorkersOverlay
==============
*/
void CG_DrawDebug_DrawEntityWorkersOverlay(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  const CgEntityWorkerProfileHistory *ProfileData; 
  const ScreenPlacement *ActivePlacement; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int64 frameCount; 
  unsigned int v20; 
  __int64 v21; 
  float *p_avgWorkerTime; 
  __int64 v23; 
  float *v24; 
  __int128 v28; 
  __int128 v29; 
  __int64 v30; 
  __int64 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  unsigned __int16 v37; 
  float v38; 
  float v39; 
  __int64 v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v47; 
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
  __int128 v59; 
  __int64 v60; 
  const char *EntityTypeName; 
  float v62; 
  float v63; 
  float v64; 
  __int128 v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  vec4_t color; 
  vec4_t v71; 
  vec4_t v72; 
  int v73[32]; 
  int v74[29]; 
  char v75; 
  int v76[32]; 
  int v77[32]; 
  char dest[1024]; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 

  v6 = DVARBOOL_cg_drawEntityWorkers;
  if ( !DVARBOOL_cg_drawEntityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawEntityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    ProfileData = CG_EntityWorkers_GetProfileData(localClientNum);
    if ( ProfileData->frameCount )
    {
      v83 = v1;
      v82 = v2;
      v81 = v3;
      v80 = v4;
      v79 = v5;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7831, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      *(float *)&_XMM10 = FLOAT_3_4028235e38;
      v66 = FLOAT_1_1754944eN38;
      v11 = 0i64;
      v12 = 0i64;
      v13 = 0i64;
      v14 = 0i64;
      v15 = 0i64;
      v16 = 0i64;
      *(float *)&_XMM14 = FLOAT_3_4028235e38;
      *(float *)&_XMM15 = FLOAT_1_1754944eN38;
      memset_0(v74, 0, sizeof(v74));
      memset_0(v73, 0, 0x74ui64);
      memset_0(v77, 0, 0x74ui64);
      memset_0(v76, 0, 0x74ui64);
      frameCount = ProfileData->frameCount;
      v20 = 0;
      v21 = 29i64;
      if ( (_DWORD)frameCount )
      {
        p_avgWorkerTime = &ProfileData->frames[0].avgWorkerTime;
        v23 = (unsigned int)frameCount;
        do
        {
          v24 = p_avgWorkerTime - 301;
          _XMM4 = *((unsigned int *)p_avgWorkerTime + 3);
          _XMM2 = *((unsigned int *)p_avgWorkerTime + 1);
          _XMM3 = *((unsigned int *)p_avgWorkerTime + 2);
          v28 = v11;
          *(float *)&v28 = *(float *)&v11 + *p_avgWorkerTime;
          v11 = v28;
          __asm { vminss  xmm10, xmm2, xmm10 }
          v29 = v14;
          *(float *)&v29 = *(float *)&v14 + (float)*((unsigned __int16 *)p_avgWorkerTime - 604);
          v14 = v29;
          v30 = 0i64;
          __asm { vmaxss  xmm0, xmm3, xmm10 }
          v32 = 29i64;
          v66 = *(float *)&_XMM0;
          v33 = v12;
          *(float *)&v33 = *(float *)&v12 + *(float *)&_XMM2;
          v12 = v33;
          v34 = v13;
          *(float *)&v34 = *(float *)&v13 + *(float *)&_XMM3;
          v13 = v34;
          v35 = v16;
          *(float *)&v35 = *(float *)&v16 + *(float *)&_XMM4;
          v16 = v35;
          v36 = v15;
          *(float *)&v36 = *(float *)&v15 + (float)*((unsigned __int16 *)p_avgWorkerTime - 603);
          v15 = v36;
          __asm
          {
            vminss  xmm14, xmm4, xmm14
            vmaxss  xmm15, xmm4, xmm15
          }
          do
          {
            v37 = *(_WORD *)v24;
            if ( *(_WORD *)v24 )
            {
              ++v76[v30];
              v38 = *(float *)((char *)&v74[v30] + (char *)p_avgWorkerTime - &v75);
              *(float *)&v74[v30] = (float)v37 + *(float *)&v74[v30];
              *(float *)&v73[v30] = v38 + *(float *)&v73[v30];
            }
            v24 = (float *)((char *)v24 + 2);
            ++v30;
            --v32;
          }
          while ( v32 );
          p_avgWorkerTime += 306;
          --v23;
        }
        while ( v23 );
      }
      v39 = (float)frameCount;
      v40 = 0i64;
      v41 = 1.0 / v39;
      v42 = *(float *)&v11 * (float)(1.0 / v39);
      v43 = *(float *)&v12 * v41;
      v67 = v42;
      v44 = *(float *)&v14 * v41;
      v45 = *(float *)&v15 * v41;
      v68 = *(float *)&v13 * v41;
      v69 = v43;
      v46 = *(float *)&v16 * v41;
      do
      {
        v47 = (unsigned int)v76[v40];
        if ( (_DWORD)v47 )
        {
          v48 = *(float *)&v74[v40];
          if ( v48 <= 0.0 )
            v49 = 0.0;
          else
            v49 = *(float *)&v73[v40] / v48;
          v50 = (float)v47;
          *(float *)&v77[v40] = v49;
          *(float *)&v73[v40] = (float)(1.0 / v50) * *(float *)&v73[v40];
          *(float *)&v74[v40] = (float)(1.0 / v50) * v48;
        }
        ++v40;
        --v21;
      }
      while ( v21 );
      CG_DrawDevString(ActivePlacement, 0.0, 0.0, 0.69999999, 0.69999999, "Entity Workers Profile", color_3, 5, cls.smallDevFont);
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Workers %.3f\tEnts %.3f\tAvg %.3f", v44, v45, v67);
      CG_DrawDevString(ActivePlacement, 0.0, 15.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgMin %.3f", v43);
      CG_DrawDevString(ActivePlacement, 0.0, 25.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v51 = xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgMax %.3f", v68);
      CG_DrawDevString(ActivePlacement, v51, 25.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v52 = v51 + xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "AvgSpread %.3f", (float)(v68 - v69));
      CG_DrawDevString(ActivePlacement, v52, 25.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Min %.3f", *(float *)&_XMM10);
      CG_DrawDevString(ActivePlacement, 0.0, 35.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v53 = xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Max %.3f", v66);
      CG_DrawDevString(ActivePlacement, v53, 35.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v54 = v53 + xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Spread %.3f", (float)(v66 - *(float *)&_XMM10));
      CG_DrawDevString(ActivePlacement, v54, 35.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Dev Avg %.3f", v46);
      CG_DrawDevString(ActivePlacement, 0.0, 45.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v55 = xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Min %.3f", *(float *)&_XMM14);
      CG_DrawDevString(ActivePlacement, v55, 45.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      v56 = v55 + xAvgOffsetFull;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "Max %.3f", *(float *)&_XMM15);
      CG_DrawDevString(ActivePlacement, v56, 45.0, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
      CG_DrawDevString(ActivePlacement, 0.0, 60.0, 0.69999999, 0.69999999, "Type", color_3, 5, cls.smallDevFont);
      v57 = xEntityOffset;
      color = (vec4_t)_xmm;
      v72 = (vec4_t)_xmm;
      v71 = (vec4_t)_xmm;
      Com_sprintf_truncate<1024>((char (*)[1024])dest, "%d Sum", 0i64);
      CG_DrawDevString(ActivePlacement, v57, 60.0, 0.69999999, 0.69999999, dest, &color, 5, cls.smallDevFont);
      v58 = v57 + xAvgOffsetCompact;
      CG_DrawDevString(ActivePlacement, v57 + xAvgOffsetCompact, 60.0, 0.69999999, 0.69999999, "Avg", &v71, 5, cls.smallDevFont);
      CG_DrawDevString(ActivePlacement, v58 + xAvgOffsetCompact, 60.0, 0.69999999, 0.69999999, "Count", &v72, 5, cls.smallDevFont);
      v59 = LODWORD(FLOAT_70_0);
      v60 = 0i64;
      do
      {
        EntityTypeName = BG_GetEntityTypeName((const entityType_s)v20);
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%2d %s", v20, EntityTypeName);
        CG_DrawDevString(ActivePlacement, 0.0, *(float *)&v59, 0.69999999, 0.69999999, dest, color_3, 5, cls.smallDevFont);
        v62 = xEntityOffset;
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.3f", *(float *)&v73[v60]);
        CG_DrawDevString(ActivePlacement, v62, *(float *)&v59, 0.69999999, 0.69999999, dest, &color, 5, cls.smallDevFont);
        v63 = v62 + xAvgOffsetCompact;
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.3f", *(float *)&v77[v60]);
        CG_DrawDevString(ActivePlacement, v63, *(float *)&v59, 0.69999999, 0.69999999, dest, &v71, 5, cls.smallDevFont);
        v64 = v63 + xAvgOffsetCompact;
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%.1f", *(float *)&v74[v60]);
        CG_DrawDevString(ActivePlacement, v64, *(float *)&v59, 0.69999999, 0.69999999, dest, &v72, 5, cls.smallDevFont);
        v65 = v59;
        *(float *)&v65 = *(float *)&v59 + 10.0;
        v59 = v65;
        ++v20;
        ++v60;
      }
      while ( v20 < 0x1D );
    }
  }
}

/*
==============
CG_DrawDebug_DrawFPSGraphs
==============
*/
void CG_DrawDebug_DrawFPSGraphs(void)
{
  const dvar_t *v0; 
  int integer; 
  const volatile ServerProfileTimes *ProfileTimes; 
  const volatile ServerProfileTimes *v3; 
  vec2_t origin; 

  v0 = DVARINT_cg_drawFPSGraphs;
  if ( !DVARINT_cg_drawFPSGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSGraphs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  if ( (unsigned int)(integer - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7527, ASSERT_TYPE_ASSERT, "(mode == FpsGraph::drawFPSGraphModes::Client || mode == FpsGraph::drawFPSGraphModes::Server || mode == FpsGraph::drawFPSGraphModes::Both)", (const char *)&queryFormat, "mode == FpsGraph::drawFPSGraphModes::Client || mode == FpsGraph::drawFPSGraphModes::Server || mode == FpsGraph::drawFPSGraphModes::Both") )
    __debugbreak();
  origin.v[0] = FLOAT_10_0;
  origin.v[1] = FLOAT_185_0;
  if ( ((integer - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( !FpsGraph::IsInitialized(&s_clientFpsGraph) || DVARINT_cg_drawFPSGraphs->modified )
      FpsGraph::InitGraph(&s_clientFpsGraph, &origin, 600, 150, 240, "Client frame time", 16.666666, 64.0);
    DevGui_DrawBox((int)(float)(origin.v[0] - 10.0), (int)(float)((float)(origin.v[1] - 150.0) - 10.0), 680, 185, CONTRASTY_BOX_COLOR.array);
    origin.v[1] = origin.v[1] + 185.0;
    FpsGraph::AddTimeSample(&s_clientFpsGraph);
    FpsGraph::DrawGraph(&s_clientFpsGraph);
  }
  if ( (unsigned int)(integer - 2) <= 1 )
  {
    if ( !FpsGraph::IsInitialized(&s_serverFpsGraph) || DVARINT_cg_drawFPSGraphs->modified )
    {
      if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
        __debugbreak();
      FpsGraph::InitGraph(&s_serverFpsGraph, &origin, 600, 150, 180, "Server frame time", (float)cls.m_serverFrameDuration, 150.0);
    }
    if ( Com_IsAnyLocalServerRunning() )
    {
      ProfileTimes = SV_GetProfileTimes();
      v3 = ProfileTimes;
      if ( ProfileTimes->debugFrameNumber != s_lastServerDebugFrameNumber )
      {
        FpsGraph::AddTimeMS(&s_serverFpsGraph, ProfileTimes->mostRecentFrameTimeMsec);
        s_lastServerDebugFrameNumber = v3->debugFrameNumber;
      }
    }
    DevGui_DrawBox((int)(float)(origin.v[0] - 10.0), (int)(float)((float)(origin.v[1] - 150.0) - 10.0), 680, 185, CONTRASTY_BOX_COLOR.array);
    FpsGraph::DrawGraph(&s_serverFpsGraph);
  }
  if ( DVARINT_cg_drawFPSGraphs->modified )
    Dvar_ClearModified(DVARINT_cg_drawFPSGraphs);
}

/*
==============
CG_DrawDebug_DrawFileReadHistoryOverlay
==============
*/
void CG_DrawDebug_DrawFileReadHistoryOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  __int128 v4; 
  float scale; 
  float v6; 
  FileStreamReadHistory *History; 
  FastCriticalSection *p_m_readHistoryLock; 
  __int64 m_readHistoryStartIndex; 
  __int64 v10; 
  __int64 v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  bool v20; 
  char *FileName; 
  int v22; 
  const char *v23; 
  const dvar_t *v24; 
  int integer; 
  bool v26; 
  char v27; 
  const char *v28; 
  const char *v29; 
  const dvar_t *v30; 
  const char *string; 
  const char *v32; 
  const dvar_t *v33; 
  int v34; 
  const dvar_t *v35; 
  int v36; 
  __int128 v37; 
  __int64 y; 
  __int64 horzAlign; 
  __int64 style; 
  __int64 v41; 
  int v42; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  FileStreamReadHistory *v45; 
  FastCriticalSection *v46; 
  __int64 v47[3]; 
  char dest[1024]; 

  v1 = DCONST_DVARBOOL_fileStream_drawReadHistory;
  if ( !DCONST_DVARBOOL_fileStream_drawReadHistory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = DCONST_DVARFLT_fileStream_drawReadHistoryFontSize;
    v4 = 0i64;
    if ( !DCONST_DVARFLT_fileStream_drawReadHistoryFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFontSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    scale = v3->current.value;
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
    font = UI_GetFontHandle(scrPlace, 5, scale);
    v6 = (float)UI_TextHeight(font, scale);
    v42 = 0;
    v47[0] = (__int64)"^3";
    v47[1] = (__int64)"^5";
    History = FileStream_GetReadHistory();
    v45 = History;
    p_m_readHistoryLock = &History->m_readHistoryLock;
    v46 = &History->m_readHistoryLock;
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
      v10 = 0i64;
    else
      v10 = (__int64)&History->m_readHistoryData[m_readHistoryStartIndex];
    v11 = 0i64;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = 0;
        if ( p_m_readHistoryLock->readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 152, ASSERT_TYPE_ASSERT, "(m_readHistoryLock.readCount > 0)", "%s\n\tRead history should be locked for reading.", "m_readHistoryLock.readCount > 0") )
          __debugbreak();
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 153, ASSERT_TYPE_ASSERT, "(readHistoryData)", (const char *)&queryFormat, "readHistoryData") )
          __debugbreak();
        v13 = truncate_cast<unsigned int,__int64>((v10 - (__int64)History - 8) / 48);
        v14 = v13;
        if ( v13 >= 0x32 )
        {
          LODWORD(horzAlign) = 50;
          LODWORD(y) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 156, ASSERT_TYPE_ASSERT, "(unsigned)( currentIndex ) < (unsigned)( ( sizeof( *array_counter( m_readHistoryData ) ) + 0 ) )", "currentIndex doesn't index ARRAY_COUNT( m_readHistoryData )\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v15 = ((v14 + 1) * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
        v16 = v14 + 1 - 50 * ((v15 + (((unsigned __int64)(v14 + 1) - v15) >> 1)) >> 5);
        if ( (_DWORD)v16 == History->m_readHistoryEndIndex )
          v17 = 0i64;
        else
          v17 = (__int64)&History->m_readHistoryData[(unsigned int)v16];
        v18 = *(_DWORD *)v10;
        v19 = *(_QWORD *)(v10 + 8);
        v20 = v17 && v19 + *(_QWORD *)(v10 + 16) == *(_QWORD *)(v17 + 8) || v11 && *(_QWORD *)(v11 + 8) + *(_QWORD *)(v11 + 16) == v19;
        if ( FileStream_FileIsOpen((FileStreamFileID)v18) )
          FileName = FileStream_GetFileName((FileStreamFileID)v18);
        else
          FileName = j_va("%d", v18);
        v22 = *(_DWORD *)(v10 + 28);
        v23 = FileName;
        if ( v22 != -1 )
          v22 -= *(_DWORD *)(v10 + 24);
        v24 = DCONST_DVARINT_fileStream_drawReadHistoryHighlightTimeMs;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryHighlightTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryHighlightTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        integer = v24->current.integer;
        v26 = integer == 0;
        if ( integer > 0 )
        {
          if ( v22 > integer )
            goto LABEL_49;
          v26 = integer == 0;
        }
        if ( !v26 || v22 <= *(_DWORD *)(v10 + 32) )
        {
          v27 = 0;
          goto LABEL_51;
        }
LABEL_49:
        v27 = 1;
LABEL_51:
        v28 = "^7";
        if ( v27 )
          v28 = "^1";
        v29 = "^7";
        if ( v20 )
          v29 = "^2";
        LODWORD(v41) = *(_DWORD *)(v10 + 32);
        LODWORD(style) = v22;
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s%s%s, Offset: %s%zd%s, Size: %zd, Time: %s%d ms%s, Estimated Time: %d ms\n", (const char *)v47[v42], v23, "^7", v29, *(_QWORD *)(v10 + 8), "^7", *(_QWORD *)(v10 + 16), v28, style, "^7", v41);
        v30 = DCONST_DVARSTR_fileStream_drawReadHistoryFilterName;
        if ( !DCONST_DVARSTR_fileStream_drawReadHistoryFilterName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterName") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        string = v30->current.string;
        if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8033, ASSERT_TYPE_ASSERT, "(filterName)", (const char *)&queryFormat, "filterName") )
          __debugbreak();
        if ( *string )
        {
          v32 = FileStream_GetFileName((FileStreamFileID)v18);
          v12 = strstr_0(v32, string) == NULL;
        }
        v33 = DCONST_DVARINT_fileStream_drawReadHistoryFilterFileStreamTrack;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryFilterFileStreamTrack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterFileStreamTrack") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v33);
        v34 = v33->current.integer;
        if ( v34 < 8 && *(_DWORD *)(v10 + 40) != v34 )
          v12 = 1;
        v35 = DCONST_DVARINT_fileStream_drawReadHistoryFilterTimeMs;
        if ( !DCONST_DVARINT_fileStream_drawReadHistoryFilterTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_drawReadHistoryFilterTimeMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        v36 = v35->current.integer;
        if ( v36 > 0 && v22 < v36 || v12 || (UI_DrawText(scrPlace, dest, 0x7FFFFFFF, font, 0.0, *(float *)&v4, 1, 1, scale, &colorWhite, 3), v37 = v4, *(float *)&v37 = *(float *)&v4 + v6, v4 = v37, *(float *)&v37 <= scrPlace->virtualViewableMax.v[1]) )
        {
          if ( v17 )
          {
            if ( *(_DWORD *)v10 != *(_DWORD *)v17 )
              v42 = ((_BYTE)v42 - 1) & 1;
          }
          History = v45;
          v11 = v10;
          v10 = v17;
          p_m_readHistoryLock = &v45->m_readHistoryLock;
          if ( v17 )
            continue;
        }
        p_m_readHistoryLock = v46;
        break;
      }
    }
    Sys_UnlockRead(p_m_readHistoryLock);
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
  GfxFont *v3; 
  GfxFont *v4; 
  GfxFont *v5; 
  GfxFont *v6; 
  GfxFont *v7; 
  GfxFont *v8; 
  GfxFont *v9; 
  GfxFont *v10; 
  char dest[512]; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 1, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", FontHandle->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, FontHandle, -25.0, 10.0, 1, 1, 0.40000001, &colorWhite, 3);
  v3 = UI_GetFontHandle(ActivePlacement, 2, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v3->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v3, -25.0, 35.0, 1, 1, 0.40000001, &colorWhite, 3);
  v4 = UI_GetFontHandle(ActivePlacement, 3, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v4->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v4, -25.0, 60.0, 1, 1, 0.40000001, &colorWhite, 3);
  v5 = UI_GetFontHandle(ActivePlacement, 4, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v5->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v5, -25.0, 85.0, 1, 1, 0.40000001, &colorWhite, 3);
  v6 = UI_GetFontHandle(ActivePlacement, 5, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v6->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v6, -25.0, 110.0, 1, 1, 0.40000001, &colorWhite, 3);
  v7 = UI_GetFontHandle(ActivePlacement, 6, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v7->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v7, -25.0, 135.0, 1, 1, 0.40000001, &colorWhite, 3);
  v8 = UI_GetFontHandle(ActivePlacement, 8, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v8->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v8, -25.0, 160.0, 1, 1, 0.40000001, &colorWhite, 3);
  v9 = UI_GetFontHandle(ActivePlacement, 9, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v9->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v9, -25.0, 185.0, 1, 1, 0.40000001, &colorWhite, 3);
  v10 = UI_GetFontHandle(ActivePlacement, 10, 0.40000001);
  Com_sprintf(dest, 0x200ui64, "%s: %s All those moments will be lost in time, like tears in the rain.", v10->fontName, strButtons);
  UI_DrawText(ActivePlacement, dest, 0x7FFFFFFF, v10, -25.0, 210.0, 1, 1, 0.40000001, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawFxText
==============
*/
void CG_DrawDebug_DrawFxText(LocalClientNum_t localClientNum, const char *text, vec2_t *inOutProfilePos)
{
  const ScreenPlacement *ActivePlacement; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5428, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CL_DrawText(ActivePlacement, text, 0x7FFFFFFF, cls.smallDevFont, inOutProfilePos->v[0], inOutProfilePos->v[1], 1, 1, MY_TEXTSIZE, MY_TEXTSIZE, &colorWhiteFaded, 0);
  inOutProfilePos->v[1] = FX_PROFILE_LINE_HEIGHT + inOutProfilePos->v[1];
}

/*
==============
CG_DrawDebug_DrawGameETCounts
==============
*/
void CG_DrawDebug_DrawGameETCounts(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *smallDevFont; 
  const ScreenPlacement *v4; 
  int v5; 
  int v6; 
  int *p_countHighest; 
  const char *v8; 
  int v9; 
  const char *v10; 
  int v11; 
  __int64 y; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  __int64 scale; 
  __int64 scalea; 
  char dest[2048]; 
  __int128 v20; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  smallDevFont = cls.smallDevFont;
  v4 = ActivePlacement;
  UI_DrawText(ActivePlacement, "Entity Counts", 2048, cls.smallDevFont, MY_LABEL_X, MY_LABEL_Y, 2, 1, MY_SCALE2, &colorWhite, 3);
  if ( G_LogDebugEntInfoResults() )
  {
    v20 = v1;
    v5 = Com_sprintf(dest, 0x800ui64, "           (current)                   (max witnessed)\n");
    v6 = Com_sprintf(&dest[v5], 2048 - v5, "=========================================================\n") + v5;
    p_countHighest = &g_debugEntInfoSummary[0].countHighest;
    do
    {
      LODWORD(horzAlign) = *p_countHighest;
      LODWORD(y) = *(p_countHighest - 1);
      v6 += Com_sprintf(&dest[v6], 2048 - v6, " %-20s -%3.0f%%  %4i        ^7%4i,%3.0f%%^7\n", *(const char **)(p_countHighest - 3), (float)(*((float *)p_countHighest + 2) * 100.0), y, horzAlign, (float)(*((float *)p_countHighest + 3) * 100.0));
      p_countHighest += 8;
    }
    while ( (__int64)p_countHighest <= (__int64)&g_debugEntInfoSummary[29].countHighest );
    v8 = "^1";
    v9 = Com_sprintf(&dest[v6], 2048 - v6, "---------------------------------------\n") + v6;
    if ( g_debugEntInfoSummary[30].percent < 0.94999999 )
    {
      v10 = "^3";
      if ( g_debugEntInfoSummary[30].percent < 0.75 )
        v10 = "^7";
    }
    else
    {
      v10 = "^1";
    }
    LODWORD(scale) = g_debugEntInfoSummary[30].countHighest;
    LODWORD(vertAlign) = g_debugEntInfoSummary[30].limit;
    LODWORD(horzAlign) = g_debugEntInfoSummary[30].count;
    v11 = Com_sprintf(&dest[v9], 2048 - v9, " %-20s -%s%3.0f%%  %4i^7/%4i   ^7%4i,%3.0f%%^7\n", g_debugEntInfoSummary[30].name, v10, (float)(g_debugEntInfoSummary[30].percent * 100.0), horzAlign, vertAlign, scale, (float)(g_debugEntInfoSummary[30].percentHighest * 100.0)) + v9;
    if ( g_debugEntInfoSummary[31].percent < 0.94999999 )
    {
      v8 = "^3";
      if ( g_debugEntInfoSummary[31].percent < 0.75 )
        v8 = "^7";
    }
    LODWORD(scalea) = g_debugEntInfoSummary[31].countHighest;
    LODWORD(vertAligna) = g_debugEntInfoSummary[31].limit;
    LODWORD(horzAligna) = g_debugEntInfoSummary[31].count;
    Com_sprintf(&dest[v11], 2048 - v11, " %-20s -%s%3.0f%%  %4i^7/%4i   ^7%4i,%3.0f%%^7\n", g_debugEntInfoSummary[31].name, v8, (float)(g_debugEntInfoSummary[31].percent * 100.0), horzAligna, vertAligna, scalea, (float)(g_debugEntInfoSummary[31].percentHighest * 100.0));
    UI_DrawText(v4, dest, 2048, smallDevFont, MY_X_0, MY_Y_1, 1, 1, MY_SCALE1, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawInputContext
==============
*/
void CG_DrawDebug_DrawInputContext(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int64 v4; 
  InputContext ActiveInputContext; 
  unsigned int v6; 
  __int64 v7; 
  InputContext v8; 
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
  char dest[2048]; 

  CG_GetLocalClientGlobals(localClientNum);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 1, 1.0);
  v4 = Com_sprintf(dest, 0x800ui64, "InputContexts\n");
  ActiveInputContext = CL_Keys_GetActiveInputContext(localClientNum);
  v6 = 55;
  v7 = 55i64;
  if ( ActiveInputContext == (VEC3_POINTER|BYTE_VALUE) )
    v7 = 50i64;
  v8 = ActiveInputContext;
  v9 = Com_sprintf(&dest[v4], 2048 - (int)v4, "^%cInputContext::GLOBAL\n", v7) + v4;
  v10 = 55i64;
  if ( v8 == VEC3_VALUE )
    v10 = 50i64;
  v11 = Com_sprintf(&dest[v9], 2048 - v9, "^%cInputContext::COMMON\n", v10) + v9;
  v12 = 55i64;
  if ( v8 == FLOAT_VALUE )
    v12 = 50i64;
  v13 = Com_sprintf(&dest[v11], 2048 - v11, "^%cInputContext::COMMON_SP\n", v12) + v11;
  v14 = 55i64;
  if ( v8 == FLOAT_POINTER )
    v14 = 50i64;
  v15 = Com_sprintf(&dest[v13], 2048 - v13, "^%cInputContext::COMMON_MP\n", v14) + v13;
  v16 = 55i64;
  if ( v8 == (VEC3_POINTER|FLOAT_POINTER) )
    v16 = 50i64;
  v17 = Com_sprintf(&dest[v15], 2048 - v15, "^%cInputContext::COMMON_BR\n", v16) + v15;
  v18 = 55i64;
  if ( v8 == BYTE_VALUE )
    v18 = 50i64;
  v19 = Com_sprintf(&dest[v17], 2048 - v17, "^%cInputContext::ONFOOT\n", v18) + v17;
  v20 = 55i64;
  if ( v8 == INVALID )
    v20 = 50i64;
  v21 = Com_sprintf(&dest[v19], 2048 - v19, "^%cInputContext::ONFOOT_SP\n", v20) + v19;
  v22 = 55i64;
  if ( v8 == BOOL_VALUE )
    v22 = 50i64;
  v23 = Com_sprintf(&dest[v21], 2048 - v21, "^%cInputContext::ONFOOT_MP\n", v22) + v21;
  v24 = 55i64;
  if ( v8 == (STRUCT_POINTER|INT_VALUE) )
    v24 = 50i64;
  v25 = Com_sprintf(&dest[v23], 2048 - v23, "^%cInputContext::ONFOOT_BR\n", v24) + v23;
  v26 = 55i64;
  if ( v8 == VEC3_POINTER )
    v26 = 50i64;
  v27 = Com_sprintf(&dest[v25], 2048 - v25, "^%cInputContext::MENU\n", v26) + v25;
  v28 = 55i64;
  if ( v8 == INT_VALUE )
    v28 = 50i64;
  v29 = Com_sprintf(&dest[v27], 2048 - v27, "^%cInputContext::VEHICLE_FLYING\n", v28) + v27;
  v30 = 55i64;
  if ( v8 == BYTE_POINTER )
    v30 = 50i64;
  v31 = Com_sprintf(&dest[v29], 2048 - v29, "^%cInputContext::VEHICLE_GROUND\n", v30) + v29;
  v32 = 55i64;
  if ( v8 == STRUCT_POINTER )
    v32 = 50i64;
  v33 = Com_sprintf(&dest[v31], 2048 - v31, "^%cInputContext::CODCASTER\n", v32) + v31;
  v34 = 55i64;
  if ( v8 == (VEC3_POINTER|INT_VALUE) )
    v34 = 50i64;
  v35 = Com_sprintf(&dest[v33], 2048 - v33, "^%cInputContext::CODCASTER_AERIALCAM\n", v34) + v33;
  v36 = 55i64;
  if ( v8 == (STRUCT_POINTER|BYTE_VALUE) )
    v36 = 50i64;
  v37 = Com_sprintf(&dest[v35], 2048 - v35, "^%cInputContext::CODCASTER_FREECAM\n", v36) + v35;
  if ( v8 == (STRUCT_POINTER|FLOAT_POINTER) )
    v6 = 50;
  Com_sprintf(&dest[v37], 2048 - v37, "^%cInputContext::INVALID\n", v6);
  UI_DrawText(ActivePlacement, dest, 2048, FontHandle, 0.0, 25.0, 1, 1, 0.2, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawLGVDebugOverlay
==============
*/
void CG_DrawDebug_DrawLGVDebugOverlay(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  float v2; 
  float v3; 
  const LightGridVolumesMaxUsageStats *UsageStats; 
  int v5; 
  float v6; 
  GfxFont *font; 
  __int64 v8; 
  float v9; 
  const char *s; 
  float v11; 
  int v12; 
  float v13; 
  GfxFont *smallDevFont; 
  float v15; 
  const char *v16; 
  int v17; 
  GfxFont *v18; 
  float v19; 
  const char *v20; 
  int v21; 
  GfxFont *v22; 
  float v23; 
  const char *v24; 
  int v25; 
  GfxFont *v26; 
  float v27; 
  const char *v28; 

  if ( r_lgvDebugOverlay->current.enabled )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v2 = ActivePlacement->virtualViewableMin.v[1] + 20.0;
    v3 = ActivePlacement->virtualViewableMin.v[0];
    UsageStats = R_LGV_GetUsageStats();
    v5 = CG_DrawDevString(ActivePlacement, v3, v2, 1.0, 1.0, "LightGridVolumes:", &colorGreen, 5, cls.smallDevFont);
    v6 = v3 + 10.0;
    font = cls.smallDevFont;
    v8 = 78i64;
    v9 = (float)v5;
    if ( rg.useLightGridVolumes )
      v8 = 89i64;
    s = j_va("Enabled: %c", v8);
    v11 = (float)(v2 + v9) + (float)CG_DrawDevString(ActivePlacement, v6, v2 + v9, 0.69999999, 0.69999999, s, &colorWhite, 5, font);
    v12 = CG_DrawDevString(ActivePlacement, v6, v11, 0.69999999, 0.69999999, "High Watermarks", &colorWhite, 5, cls.smallDevFont);
    v13 = v6 + 10.0;
    smallDevFont = cls.smallDevFont;
    v15 = v11 + (float)v12;
    v16 = j_va("Packing 3d: %u / %u", UsageStats->packing3dHighWatermark, 16i64);
    v17 = CG_DrawDevString(ActivePlacement, v13, v15, 0.69999999, 0.69999999, v16, &colorWhite, 5, smallDevFont);
    v18 = cls.smallDevFont;
    v19 = v15 + (float)v17;
    v20 = j_va("Volumes: %u / %u", UsageStats->volumesUsed, 0x4000i64);
    v21 = CG_DrawDevString(ActivePlacement, v13, v19, 0.69999999, 0.69999999, v20, &colorWhite, 5, v18);
    v22 = cls.smallDevFont;
    v23 = v19 + (float)v21;
    v24 = j_va("Probes: %u", UsageStats->volumeProbesUsed);
    v25 = CG_DrawDevString(ActivePlacement, v13, v23, 0.69999999, 0.69999999, v24, &colorWhite, 5, v22);
    v26 = cls.smallDevFont;
    v27 = v23 + (float)v25;
    v28 = j_va("History: %u / %u", UsageStats->historyEntriesUsed, 49152i64);
    CG_DrawDevString(ActivePlacement, v13, v27, 0.69999999, 0.69999999, v28, &colorWhite, 5, v26);
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
void CG_DrawDebug_DrawLight(const GfxLight *light, const vec3_t *colorGammaSrgb, const vec3_t *cameraPos, float drawRadiusSquared, float drawRadiusDetailSquared, int lightIndex, bool forceDraw)
{
  __int128 v7; 
  float v9; 
  float v11; 
  float v12; 
  int integer; 
  float v17; 
  float v18; 
  float v19; 
  float radius; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  __int128 v33; 
  __int128 v34; 
  float v35; 
  float intensity; 
  float v37; 
  double v38; 
  const char *v39; 
  float v40; 
  float bulbRadius; 
  const char *v42; 
  float shadowArea; 
  float uvIntensity; 
  float irIntensity; 
  unsigned __int8 type; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  float v58; 
  __int128 v59; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  unsigned int v67; 
  float v68; 
  float v69; 
  float v70; 
  __int64 v71; 
  float v72; 
  float v73; 
  vec4_t color; 
  vec3_t origin; 
  vec3_t center; 
  vec3_t v77; 
  vec3_t start; 
  vec3_t end; 
  char dest[128]; 
  char string[2048]; 
  _QWORD v82[3]; 

  v9 = colorGammaSrgb->v[1];
  color.v[0] = colorGammaSrgb->v[0];
  color.v[2] = colorGammaSrgb->v[2];
  v73 = 0.0;
  color.v[1] = v9;
  color.v[3] = FLOAT_1_0;
  if ( !forceDraw )
  {
    v11 = light->origin.v[1] - cameraPos->v[1];
    v12 = light->origin.v[2] - cameraPos->v[2];
    if ( (float)((float)((float)(v11 * v11) + (float)((float)(light->origin.v[0] - cameraPos->v[0]) * (float)(light->origin.v[0] - cameraPos->v[0]))) + (float)(v12 * v12)) > drawRadiusSquared )
      return;
    if ( light->radius < 1.01 )
      return;
    if ( (light->flags & 0x10) != 0 )
      return;
    _XMM0 = LODWORD(light->colorLinearSrgb.v[1]);
    __asm
    {
      vmaxss  xmm1, xmm0, dword ptr [rcx+14h]
      vmaxss  xmm2, xmm1, dword ptr [rcx+1Ch]
    }
    if ( (float)(*(float *)&_XMM2 * light->intensity) == 0.0 && (!frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo || light->irIntensity <= 0.0) )
      return;
    if ( r_debugDrawLightsFilterShadowCasters && (unsigned __int8)(light->type - 2) <= 1u )
    {
      integer = r_debugDrawLightsFilterShadowCasters->current.integer;
      if ( integer )
      {
        if ( integer == 2 )
        {
          if ( !light->canUseShadowMap || light->needsDynamicShadows )
            return;
        }
        else if ( integer == 3 && (!light->canUseShadowMap || !light->needsDynamicShadows) )
        {
          return;
        }
      }
      else if ( light->canUseShadowMap )
      {
        return;
      }
    }
  }
  CG_DebugStar(&light->origin, &color, 0, 0);
  if ( light->type == 2 )
  {
    LODWORD(v17) = LODWORD(light->dir.v[0]) ^ _xmm;
    LODWORD(v18) = LODWORD(light->dir.v[1]) ^ _xmm;
    LODWORD(v19) = LODWORD(light->dir.v[2]) ^ _xmm;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7011, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( coneDir ))", (const char *)&queryFormat, "Vec3IsNormalized( coneDir )") )
      __debugbreak();
    radius = light->radius;
    v21 = light->bulbLength.v[1];
    v22 = light->bulbLength.v[0];
    v23 = (float)(v17 * radius) + light->origin.v[0];
    v24 = light->bulbLength.v[2];
    origin.v[0] = v23;
    origin.v[1] = (float)(v18 * radius) + light->origin.v[1];
    v25 = light->cosHalfFovInner * light->cosHalfFovInner;
    origin.v[2] = (float)(v19 * radius) + light->origin.v[2];
    v73 = fsqrt((float)((float)(radius * radius) / v25) - (float)(radius * radius));
    CG_DebugSphericalSectorFrustum(&origin, &light->dir, fsqrt((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v24 * v24)), fsqrt((float)((float)(radius * radius) / (float)(light->cosHalfFovOuter * light->cosHalfFovOuter)) - (float)(radius * radius)), radius, &color, 1, 0);
  }
  else if ( light->type == 3 )
  {
    CG_DebugSphere(&light->origin, light->radius, &color, 1, 0);
  }
  v26 = light->origin.v[1] - cameraPos->v[1];
  v27 = light->origin.v[2] - cameraPos->v[2];
  if ( (float)((float)((float)(v26 * v26) + (float)((float)(light->origin.v[0] - cameraPos->v[0]) * (float)(light->origin.v[0] - cameraPos->v[0]))) + (float)(v27 * v27)) < drawRadiusDetailSquared )
  {
    memset_0(string, 0, sizeof(string));
    memset_0(dest, 0, sizeof(dest));
    v28 = light->colorLinearSrgb.v[0];
    v29 = LODWORD(light->colorLinearSrgb.v[1]);
    v30 = light->colorLinearSrgb.v[2];
    if ( v28 > 0.0031308001 )
      v31 = (float)(powf_0(v28, 0.41666666) * 1.0549999) - 0.055;
    else
      v31 = v28 * 12.92;
    v72 = v31;
    *(_OWORD *)&v82[1] = v7;
    if ( *(float *)&v29 > 0.0031308001 )
    {
      v34 = v29;
      *(float *)&v34 = (float)(powf_0(*(float *)&v29, 0.41666666) * 1.0549999) - 0.055;
      _XMM15 = v34;
    }
    else
    {
      v33 = v29;
      *(float *)&v33 = *(float *)&v29 * 12.92;
      _XMM15 = v33;
    }
    if ( v30 > 0.0031308001 )
      v35 = (float)(powf_0(v30, 0.41666666) * 1.0549999) - 0.055;
    else
      v35 = v30 * 12.92;
    intensity = light->intensity;
    v37 = FLOAT_1_0;
    if ( light->tonemappingScaleFactor > 0.0 )
    {
      v38 = I_fclamp(1.0 / rg.tonemapStaticExposureLinear, r_lightIntensityAutoScaleMin->current.value, r_lightIntensityAutoScaleMax->current.value);
      v37 = (float)((float)(*(float *)&v38 * r_lightIntensityAutoScale->current.value) * light->tonemappingScaleFactor) + (float)(1.0 - light->tonemappingScaleFactor);
      intensity = intensity * v37;
    }
    if ( lightIndex )
    {
      Com_sprintf(dest, 0x80ui64, "P(%d) ", (unsigned int)lightIndex);
      I_strcat(string, 0x800ui64, dest);
    }
    v39 = "OM";
    if ( light->type == 2 )
      v39 = "SP";
    Com_sprintf(dest, 0x80ui64, "%s R:%.0f ", v39, light->radius);
    I_strcat(string, 0x800ui64, dest);
    v40 = fsqrt((float)((float)(light->bulbLength.v[0] * light->bulbLength.v[0]) + (float)(light->bulbLength.v[1] * light->bulbLength.v[1])) + (float)(light->bulbLength.v[2] * light->bulbLength.v[2]));
    if ( v40 > 1.0 )
    {
      Com_sprintf(dest, 0x80ui64, "BL:%.0f ", v40);
      I_strcat(string, 0x800ui64, dest);
    }
    bulbRadius = light->bulbRadius;
    if ( bulbRadius > 1.0 )
    {
      Com_sprintf(dest, 0x80ui64, "BR:%.0f ", bulbRadius);
      I_strcat(string, 0x800ui64, dest);
    }
    if ( light->isVolumetric )
    {
      Com_sprintf(dest, 0x80ui64, "%s ", "V");
      I_strcat(string, 0x800ui64, dest);
    }
    if ( light->canUseShadowMap )
    {
      v42 = "SH";
      if ( light->needsDynamicShadows )
        v42 = "SH+D";
      Com_sprintf(dest, 0x80ui64, "%s ", v42);
      I_strcat(string, 0x800ui64, dest);
      shadowArea = light->shadowArea;
      if ( shadowArea != 0.0 )
      {
        Com_sprintf(dest, 0x80ui64, "SA:%.2f ", shadowArea);
        I_strcat(string, 0x800ui64, dest);
      }
    }
    if ( intensity != 0.0 )
    {
      __asm
      {
        vmaxss  xmm0, xmm15, xmm2
        vmaxss  xmm1, xmm0, xmm8
      }
      if ( *(float *)&_XMM1 != 0.0 )
      {
        Com_sprintf(dest, 0x80ui64, "C:(%.2f,%.2f,%.2f) ", v72, *(float *)&_XMM15, v35);
        I_strcat(string, 0x800ui64, dest);
      }
      if ( v37 == 1.0 )
        Com_sprintf(dest, 0x80ui64, "I:%.2f ", (float)(light->intensity * 0.0020268299));
      else
        Com_sprintf(dest, 0x80ui64, "I:%.2f*%.2f ", (float)(light->intensity * 0.0020268299), v37);
      I_strcat(string, 0x800ui64, dest);
    }
    uvIntensity = light->uvIntensity;
    if ( uvIntensity != 0.0 )
    {
      Com_sprintf(dest, 0x80ui64, "UV:%.2f ", (float)(uvIntensity * 0.0020268299));
      I_strcat(string, 0x800ui64, dest);
    }
    irIntensity = light->irIntensity;
    if ( irIntensity != 0.0 )
    {
      Com_sprintf(dest, 0x80ui64, "IR:%.2f ", (float)(irIntensity * 0.0020268299));
      I_strcat(string, 0x800ui64, dest);
    }
    CG_DebugStarWithText(&light->origin, &color, &color, string, 0.25, 0);
    type = light->type;
    if ( light->type == 2 )
    {
      CG_DebugSphericalSectorFrustum(&origin, &light->dir, fsqrt((float)((float)(light->bulbLength.v[0] * light->bulbLength.v[0]) + (float)(light->bulbLength.v[1] * light->bulbLength.v[1])) + (float)(light->bulbLength.v[2] * light->bulbLength.v[2])), v73, light->radius, &colorRedHeat, 1, 0);
      type = light->type;
    }
    if ( (unsigned __int8)(type - 2) <= 1u )
    {
      v49 = light->bulbLength.v[1];
      v50 = light->bulbLength.v[0];
      v51 = light->bulbLength.v[2];
      if ( (float)((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v51 * v51)) > 0.0099999998 )
      {
        v52 = light->bulbRadius;
        if ( v52 > 0.0099999998 )
        {
          v53 = light->origin.v[0];
          v54 = light->origin.v[1];
          v55 = light->origin.v[2];
          start.v[0] = v53 - v50;
          start.v[1] = v54 - v49;
          start.v[2] = v55 - v51;
          end.v[0] = v53 + v50;
          end.v[1] = v54 + v49;
          end.v[2] = v55 + v51;
          CG_DebugCapsule(&start, &end, v52, &color, 1, 0);
          v56 = light->bulbLength.v[1];
          v57 = LODWORD(light->bulbLength.v[0]);
          v58 = light->bulbLength.v[2];
          v59 = v57;
          *(float *)&v59 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(v56 * v56)) + (float)(v58 * v58));
          _XMM3 = v59;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm10, xmm0
          }
          *(float *)&_XMM3 = light->bulbRadius;
          *(float *)&v57 = (float)(*(float *)&v57 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
          v63 = (float)(v56 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
          *(float *)&_XMM3 = (float)(v58 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
          center.v[0] = start.v[0] - *(float *)&v57;
          center.v[2] = start.v[2] - *(float *)&_XMM3;
          v77.v[0] = *(float *)&v57;
          v77.v[1] = v63;
          v77.v[2] = *(float *)&_XMM3;
          center.v[1] = start.v[1] - v63;
          CG_DebugLine(&center, &start, &color, 1, 0);
          v77.v[0] = v77.v[0] + end.v[0];
          v77.v[2] = v77.v[2] + end.v[2];
          v77.v[1] = v77.v[1] + end.v[1];
          CG_DebugLine(&end, &v77, &color, 1, 0);
          CG_DebugLine(&start, &end, &color, 1, 0);
          v64 = light->bulbLength.v[0];
          v65 = light->bulbLength.v[1];
          v66 = light->bulbLength.v[2];
          v67 = 2 * (int)(float)(fsqrt((float)((float)(v64 * v64) + (float)(v65 * v65)) + (float)(v66 * v66)) * 0.0625);
          v68 = (float)v67;
          center = start;
          v69 = v64 * (float)(2.0 / v68);
          v70 = v66 * (float)(2.0 / v68);
          v71 = v67 + 1;
          do
          {
            CG_DebugCircle(&center, light->bulbRadius, &light->bulbLength, &color, 1, 0);
            center.v[0] = v69 + center.v[0];
            center.v[1] = (float)(v65 * (float)(2.0 / v68)) + center.v[1];
            center.v[2] = v70 + center.v[2];
            --v71;
          }
          while ( v71 );
        }
      }
    }
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
  const dvar_t *v2; 
  int integer; 
  float v4; 
  float v5; 
  bool v6; 
  unsigned int lightIndex; 
  unsigned int v8; 
  __int64 v9; 
  GfxLight *v10; 
  unsigned int flags; 
  int v12; 
  bool ShouldDrawLight; 
  bool IsPrimaryLightLoaded; 
  int v15; 
  int v16; 
  vec3_t *LightColor; 
  double v18; 
  volatile int v19; 
  float *v20; 
  _BOOL8 v21; 
  int v22; 
  int v23; 
  bool v24; 
  float v25; 
  float v26; 
  volatile int v27; 
  float *v28; 
  _BOOL8 v29; 
  int v30; 
  int v31; 
  bool v32; 
  float v33; 
  float v34; 
  double v35; 
  double v36; 
  vec3_t result; 
  vec3_t outOrg; 
  vec3_t colorGammaSrgb; 
  vec3_t v40; 
  vec3_t v41; 
  __m256i v42; 
  __int128 v43; 
  float v44; 
  float v45; 
  float v46; 
  __m256i v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  float v51; 

  if ( r_debugDrawLights && r_debugDrawLights->current.integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7292, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v2 = r_debugDrawLights;
    integer = r_debugDrawLights->current.integer;
    v4 = r_debugDrawLightsDrawRadius->current.value * r_debugDrawLightsDrawRadius->current.value;
    v5 = r_debugDrawLightsDrawDetailRadius->current.value * r_debugDrawLightsDrawDetailRadius->current.value;
    v6 = ((integer - 2) & 0xFFFFFFFC) == 0 && integer != 4;
    if ( integer == 1 || v6 )
    {
      lightIndex = 0;
      v8 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      if ( v8 )
      {
        v9 = 0i64;
        do
        {
          v10 = &rgp.world->primaryLights[v9];
          flags = v10->flags;
          if ( (flags & 2) != 0 )
            v12 = 1;
          else
            v12 = (flags & 4) != 0 ? 3 : 0;
          ShouldDrawLight = CG_DrawDebug_ShouldDrawLight((DbgLightType)v12);
          if ( ShouldDrawLight )
          {
            IsPrimaryLightLoaded = R_IsPrimaryLightLoaded(frontEndDataOut, lightIndex);
            v15 = r_debugDrawTransientLights->current.integer;
            if ( !v15 )
              goto LABEL_24;
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 1 )
                ShouldDrawLight = !IsPrimaryLightLoaded;
            }
            else
            {
              ShouldDrawLight = IsPrimaryLightLoaded;
            }
            if ( ShouldDrawLight )
            {
LABEL_24:
              LightColor = CG_DrawDebug_GetLightColor(&result, v10, (DbgLightType)v12);
              v18 = *(double *)LightColor->v;
              colorGammaSrgb.v[2] = LightColor->v[2];
              *(double *)colorGammaSrgb.v = v18;
              CG_DrawDebug_DrawLight(v10, &colorGammaSrgb, &outOrg, v4, v5, lightIndex, r_debugDrawLightsDrawRadius->current.value == 0.0);
            }
          }
          ++lightIndex;
          ++v9;
        }
        while ( lightIndex < v8 );
        v2 = r_debugDrawLights;
      }
    }
    if ( integer == 1 || ((v2->current.integer - 4) & 0xFFFFFFFD) == 0 )
    {
      v19 = 0;
      if ( scene.dynamicSpotLightCount > 0 )
      {
        v20 = &scene.dynamicSpotLight[0].lightCommon.colorLinearSrgb.v[2];
        do
        {
          v21 = ((_DWORD)v20[20] & 1) == 0;
          v22 = 2 * v21 + 2;
          v23 = r_debugDrawLights->current.integer;
          switch ( v23 )
          {
            case 1:
              goto $LN290_0;
            case 2:
              v24 = v22 == 0;
              goto LABEL_35;
            case 4:
              v24 = v22 == 2;
              goto LABEL_35;
            case 6:
              v24 = v22 == 4;
LABEL_35:
              if ( v24 )
              {
$LN290_0:
                v42 = _ymm;
                v43 = _xmm;
                v44 = 0.0;
                v45 = FLOAT_1_0;
                v46 = 0.0;
                if ( v23 == 1 )
                {
                  v25 = *(float *)&v42.m256i_i32[6 * v21 + 7];
                  LODWORD(v35) = v42.m256i_i32[6 * v21 + 6];
                  v26 = *((float *)&v43 + 6 * v21);
                }
                else
                {
                  v25 = *(v20 - 1);
                  *(float *)&v35 = *(v20 - 2);
                  v26 = *v20;
                }
                *((float *)&v35 + 1) = v25;
                *(double *)v40.v = v35;
                v40.v[2] = v26;
                CG_DrawDebug_DrawLight((const GfxLight *)(v20 - 7), &v40, &outOrg, v4, v5, 0, 0);
              }
              break;
            default:
              break;
          }
          ++v19;
          v20 += 76;
        }
        while ( v19 < scene.dynamicSpotLightCount );
      }
      v27 = 0;
      if ( scene.dynamicOmniLightCount > 0 )
      {
        v28 = &scene.dynamicOmniLight[0].lightCommon.colorLinearSrgb.v[2];
        do
        {
          v29 = ((_DWORD)v28[20] & 1) == 0;
          v30 = 2 * v29 + 2;
          v31 = r_debugDrawLights->current.integer;
          switch ( v31 )
          {
            case 1:
              goto $LN291;
            case 2:
              v32 = v30 == 0;
              goto LABEL_47;
            case 4:
              v32 = v30 == 2;
              goto LABEL_47;
            case 6:
              v32 = v30 == 4;
LABEL_47:
              if ( v32 )
              {
$LN291:
                v47 = _ymm;
                v48 = _xmm;
                v49 = 0.0;
                v50 = FLOAT_1_0;
                v51 = 0.0;
                if ( v31 == 1 )
                {
                  v33 = *(float *)&v47.m256i_i32[6 * v29 + 7];
                  LODWORD(v36) = v47.m256i_i32[6 * v29 + 6];
                  v34 = *((float *)&v48 + 6 * v29);
                }
                else
                {
                  v33 = *(v28 - 1);
                  *(float *)&v36 = *(v28 - 2);
                  v34 = *v28;
                }
                *((float *)&v36 + 1) = v33;
                *(double *)v41.v = v36;
                v41.v[2] = v34;
                CG_DrawDebug_DrawLight((const GfxLight *)(v28 - 7), &v41, &outOrg, v4, v5, 0, 0);
              }
              break;
            default:
              break;
          }
          ++v27;
          v28 += 76;
        }
        while ( v27 < scene.dynamicOmniLightCount );
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawLineOfSightLatency
==============
*/
void CG_DrawDebug_DrawLineOfSightLatency(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const cpose_t *Pose; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  float v10; 
  float v11; 
  const characterInfo_t *CharacterInfo; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  double v17; 
  float speed; 
  XBoneInfo *BoneInfoForBoneIndex; 
  DObjAnimMat *RotTransArray; 
  float v21; 
  float v22; 
  float v23; 
  const vec4_t *v24; 
  double Float_Internal_DebugName; 
  float v26; 
  double v27; 
  float v28; 
  int v29; 
  float v30; 
  __int128 v31; 
  double v32; 
  const char *v33; 
  float v34; 
  __int64 v35; 
  __int128 v36; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t lineStart; 
  vec3_t center; 
  vec3_t outOrigin; 
  vec3_t xyz; 
  tmat33_t<vec3_t> forward; 
  tmat33_t<vec3_t> axis; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v45; 
  char v46; 
  tmat33_t<vec3_t> outTagMat; 

  v1 = DVARINT_cg_drawLOSLatency;
  inOutIndex[0] = -2;
  if ( !DVARINT_cg_drawLOSLatency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLOSLatency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
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
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5904, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( DObjGetBoneIndexInternal_46(ClientDObj, scr_const.j_head, inOutIndex, &modelIndex) )
      {
        if ( CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, integer) )
        {
          if ( !LocalClientGlobals->renderingThirdPerson )
          {
            Instance = CgWeaponMap::GetInstance(localClientNum);
            if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
              return;
          }
          CG_GetPlayerViewOrigin(localClientNum, &LocalClientGlobals->predictedPlayerState, &outOrigin);
          Handler = CgHandler::getHandler(localClientNum);
          BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, forward.m, &forward.m[1], &forward.m[2], Handler, 0);
          v10 = LocalClientGlobals->predictedPlayerState.velocity.v[0];
          v11 = LocalClientGlobals->predictedPlayerState.velocity.v[1];
          goto LABEL_25;
        }
        CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, integer);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5935, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( CharacterInfo->infoValid )
        {
          CG_CalcEyePoint(localClientNum, integer, &outOrigin);
          CG_GetViewDirection(localClientNum, integer, forward.m, &forward.m[1], &forward.m[2]);
          v17 = j___libm_sse2_sincosf_(v14, v13, v15, v16);
          speed = (float)CharacterInfo->speed;
          v10 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v17, (__m128)*(unsigned __int64 *)&v17, 1).m128_f32[0] * speed;
          v11 = *(float *)&v17 * speed;
LABEL_25:
          bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v45);
          bitarray_base<bitarray<256>>::setBit(&v45, inOutIndex[0]);
          CG_LocationTraceDobjCalcPose(ClientDObj, Pose, (DObjPartBits *)&v45);
          if ( CG_DObjGetWorldBoneMatrix(Pose, ClientDObj, inOutIndex[0], &outTagMat, &lineStart) )
          {
            BoneInfoForBoneIndex = DObjGetBoneInfoForBoneIndex(ClientDObj, inOutIndex[0]);
            if ( !BoneInfoForBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5965, ASSERT_TYPE_ASSERT, "(boneInfo)", (const char *)&queryFormat, "boneInfo") )
              __debugbreak();
            RotTransArray = DObjGetRotTransArray(ClientDObj);
            QuatToAxis(&RotTransArray[inOutIndex[0]].quat, &axis);
            if ( BoneInfoForBoneIndex == (XBoneInfo *)&v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
              __debugbreak();
            v21 = BoneInfoForBoneIndex->bounds.midPoint.v[0];
            v22 = BoneInfoForBoneIndex->bounds.midPoint.v[1];
            v23 = BoneInfoForBoneIndex->bounds.midPoint.v[2];
            lineStart.v[0] = (float)((float)((float)(BoneInfoForBoneIndex->bounds.midPoint.v[0] * axis.m[0].v[0]) + (float)(v22 * axis.m[1].v[0])) + (float)(v23 * axis.m[2].v[0])) + lineStart.v[0];
            lineStart.v[1] = (float)((float)((float)(v21 * axis.m[0].v[1]) + (float)(v22 * axis.m[1].v[1])) + (float)(v23 * axis.m[2].v[1])) + lineStart.v[1];
            center.v[0] = outOrigin.v[0];
            lineStart.v[2] = (float)((float)((float)(v21 * axis.m[0].v[2]) + (float)(v22 * axis.m[1].v[2])) + (float)(v23 * axis.m[2].v[2])) + lineStart.v[2];
            center.v[1] = outOrigin.v[1];
            center.v[2] = lineStart.v[2];
            CG_DebugSphere(&outOrigin, 0.75, &colorWhite, 0, 0);
            v24 = &colorGreen;
            CL_AddOrientedDebugStar(&outOrigin, &forward, &colorGreen, 0.15000001, 0, 0);
            CL_AddDebugString(&outOrigin, &colorWhite, 0.1, "eye", 0, 1);
            CG_DebugSphere(&center, 0.75, &colorMagenta, 0, 0);
            CL_AddOrientedDebugStar(&center, &forward, &colorGreen, 0.15000001, 0, 0);
            CG_DebugSphere(&lineStart, 0.75, &colorYellow, 0, 0);
            CL_AddOrientedDebugStar(&lineStart, &outTagMat, &colorGreen, 0.15000001, 0, 0);
            CL_AddDebugString(&lineStart, &colorYellow, 0.1, "j_head", 0, 1);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead, "cg_drawLOSLatencyShowOptimalHead") )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawLOSLatencyThreshold, "cg_drawLOSLatencyThreshold");
              v26 = *(float *)&Float_Internal_DebugName * 0.001;
              v27 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawLOSLatencyTolerance, "cg_drawLOSLatencyTolerance");
              v28 = *(float *)&v27 * 0.001;
              xyz.v[1] = (float)(v11 * v26) + center.v[1];
              xyz.v[0] = (float)(v10 * v26) + center.v[0];
              v29 = COERCE_UNSIGNED_INT((float)((float)((float)(lineStart.v[1] - xyz.v[1]) * forward.m[1].v[1]) + (float)((float)(lineStart.v[0] - xyz.v[0]) * forward.m[1].v[0])) + (float)((float)(lineStart.v[2] - center.v[2]) * forward.m[1].v[2])) ^ _xmm;
              v30 = fsqrt((float)((float)(v11 * v28) * (float)(v11 * v28)) + (float)((float)(v10 * (float)(*(float *)&v27 * 0.001)) * (float)(v10 * (float)(*(float *)&v27 * 0.001))));
              xyz.v[2] = center.v[2];
              v31 = 0i64;
              if ( COERCE_FLOAT(v29 & _xmm) >= v30 && v30 > 0.0 )
                v24 = &colorRed;
              v32 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_sprintThreshhold, "player_sprintThreshhold");
              v33 = j_va("%.2f", v29);
              CL_AddDebugString(&xyz, &colorBlue, 0.15000001, v33, 0, 1);
              v34 = (float)(*(float *)&v32 * v28) * 0.33333334;
              v35 = 3i64;
              do
              {
                v36 = v31;
                *(float *)&v36 = *(float *)&v31 + v34;
                v31 = v36;
                CG_DebugSphere(&xyz, *(float *)&v36, v24, 0, 0);
                --v35;
              }
              while ( v35 );
            }
          }
        }
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
  int v2; 
  int v3; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *smallDevFont; 
  float v6; 
  float v7; 
  __int128 v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v13; 
  statmonitor_s *v14; 
  Material *material; 
  __int128 v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  statmonitor_s *v26; 
  __int128 v27; 
  __int128 v28; 
  Material *v29; 
  __int128 v36; 
  __int128 v37; 
  int v38; 
  __int64 v39; 
  statmonitor_s *v40; 
  __int128 v41; 
  ScopedCriticalSection v42; 
  int count; 
  int v44; 
  statmonitor_s *array; 

  ScopedCriticalSection::ScopedCriticalSection(&v42, CRITSECT_STATMON, SCOPED_CRITSECT_NORMAL);
  v2 = Sys_Milliseconds();
  if ( dword_150F50B8C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_150F50B8C);
    if ( dword_150F50B8C == -1 )
    {
      blinkLastMS = v2;
      j__Init_thread_footer(&dword_150F50B8C);
    }
  }
  v3 = v2 + blinkTimer - blinkLastMS;
  blinkTimer = v3;
  blinkLastMS = v2;
  if ( v3 >= 500 )
    blinkTimer = v3 % 500;
  StatMon_GetStatsArray((const statmonitor_s **)&array, &count);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  smallDevFont = cls.smallDevFont;
  v6 = FLOAT_2_0;
  v7 = FLOAT_2_0;
  v8 = LODWORD(FLOAT_200_0);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  _XMM14 = LODWORD(FLOAT_16_0);
  v13 = (unsigned int)count;
  if ( count > 0 )
  {
    v14 = array;
    do
    {
      if ( v14->endtime >= v2 )
      {
        if ( v14->smClass == STATMON_CLASS_WARNING )
          ++v10;
        else
          ++v11;
      }
      ++v14;
      --v13;
    }
    while ( v13 );
    if ( v10 > 0 )
    {
      material = Material_RegisterHandle("statmon_warn", IMAGE_TRACK_DEBUG);
      if ( material )
      {
        _XMM0 = 0xFAu;
        __asm
        {
          vpcmpgtd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm14, xmm13, xmm2; w
          vpcmpgtd xmm2, xmm0, xmm1
        }
        _XMM0 = 0i64;
        __asm { vblendvps xmm0, xmm0, xmm15, xmm2 }
        v44 = _XMM3;
        UI_DrawHandlePic(ActivePlacement, 2.0 - *(float *)&_XMM0, 200.0 - *(float *)&_XMM0, *(float *)&_XMM3, *(float *)&_XMM3, 1, 1, &colorWhite, material);
        v7 = FLOAT_20_0;
      }
      UI_DrawText(ActivePlacement, "Warnings", 16, smallDevFont, v7, 215.0, 1, 1, 0.29166666, &colorRed, 3);
      v22 = LODWORD(FLOAT_225_0);
      v23 = 0;
      v24 = count;
      if ( count > 0 )
      {
        v25 = 0i64;
        v26 = array;
        do
        {
          if ( v26[v25].endtime >= v2 && v26[v25].smClass == STATMON_CLASS_WARNING )
          {
            UI_DrawText(ActivePlacement, v26[v23].description, 256, smallDevFont, 20.0, *(float *)&v22, 1, 1, 0.20833333, &colorWhite, 3);
            v27 = v22;
            *(float *)&v27 = *(float *)&v22 + 10.0;
            v22 = v27;
            v24 = count;
            v26 = array;
          }
          ++v23;
          ++v25;
        }
        while ( v23 < v24 );
        v9 = 0;
      }
      v28 = v22;
      *(float *)&v28 = *(float *)&v22 + -10.0;
      v8 = v28;
    }
  }
  if ( v11 > 0 )
  {
    v29 = Material_RegisterHandle("statmon_budget", IMAGE_TRACK_DEBUG);
    if ( v29 )
    {
      _XMM0 = 0xFAu;
      __asm
      {
        vpcmpgtd xmm2, xmm0, xmm1
        vblendvps xmm3, xmm14, xmm13, xmm2; w
        vpcmpgtd xmm2, xmm0, xmm1
      }
      _XMM0 = 0i64;
      __asm { vblendvps xmm0, xmm0, xmm15, xmm2 }
      v44 = _XMM3;
      UI_DrawHandlePic(ActivePlacement, 2.0 - *(float *)&_XMM0, *(float *)&v8 - *(float *)&_XMM0, *(float *)&_XMM3, *(float *)&_XMM3, 1, 1, &colorWhite, v29);
      v6 = FLOAT_20_0;
    }
    v36 = v8;
    UI_DrawText(ActivePlacement, "Budgets", 16, smallDevFont, v6, *(float *)&v8 + 15.0, 1, 1, 0.29166666, &colorRed, 3);
    *(float *)&v36 = (float)(*(float *)&v8 + 15.0) + 10.0;
    v37 = v36;
    v38 = count;
    if ( count > 0 )
    {
      v39 = 0i64;
      v40 = array;
      do
      {
        if ( v40[v39].endtime >= v2 && v40[v39].smClass == STATMON_CLASS_BUDGET )
        {
          UI_DrawText(ActivePlacement, v40[v9].description, 256, smallDevFont, 20.0, *(float *)&v37, 1, 1, 0.20833333, &colorWhite, 3);
          v41 = v37;
          *(float *)&v41 = *(float *)&v37 + 10.0;
          v37 = v41;
          v38 = count;
          v40 = array;
        }
        ++v9;
        ++v39;
      }
      while ( v9 < v38 );
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v42);
}

/*
==============
CG_DrawDebug_DrawScriptedAnims
==============
*/
void CG_DrawDebug_DrawScriptedAnims(LocalClientNum_t localClientNum, float *yPos)
{
  __int64 v2; 
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  int *entityNums; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  CgEntitySystem *v10; 
  __int64 v11; 
  unsigned int v12; 
  DObj *v13; 
  const XModel *Model; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  char *fmt; 
  __int64 y; 
  __int64 horzAlign; 
  int v20; 
  int *v21; 
  char dest[1024]; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5183, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = DVARBOOL_cg_dumpScriptedAnims;
  if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5196, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v20 = 0;
    if ( LocalClientGlobals->scriptedAnimDebug.entCount > 0 )
    {
      entityNums = LocalClientGlobals->scriptedAnimDebug.entityNums;
      v7 = 2533 * v2;
      v8 = v2;
      v21 = LocalClientGlobals->scriptedAnimDebug.entityNums;
      do
      {
        v9 = *entityNums;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(horzAlign) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(horzAlign) = CgEntitySystem::ms_allocatedCount;
          LODWORD(y) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v8] )
        {
          LODWORD(horzAlign) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", horzAlign) )
            __debugbreak();
        }
        v10 = CgEntitySystem::ms_entitySystemArray[v8];
        if ( (unsigned int)v9 >= 0x800 )
        {
          LODWORD(horzAlign) = 2048;
          LODWORD(y) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        v11 = v9;
        if ( (v10->m_entities[v9].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5208, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( (unsigned int)v9 > 0x9E4 )
        {
          LODWORD(horzAlign) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= 2 )
        {
          LODWORD(horzAlign) = 2;
          LODWORD(y) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        if ( (unsigned int)(v7 + v9) >= 0x13CA )
        {
          LODWORD(horzAlign) = v7 + v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", horzAlign) )
            __debugbreak();
        }
        v12 = clientObjMap[v7 + (int)v9];
        if ( clientObjMap[v7 + (int)v9] )
        {
          if ( v12 >= (unsigned int)s_objCount )
          {
            LODWORD(horzAlign) = clientObjMap[v7 + (int)v9];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", horzAlign) )
              __debugbreak();
          }
          v13 = (DObj *)s_objBuf[v12];
          if ( v13 && DObjGetNumModels(v13) > 0 )
          {
            Model = DObjGetModel(v13, 0);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5214, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            CG_DrawDebug_DrawScriptedAnimsDrawBones(LocalClientGlobals, v9, v13);
            if ( v10->m_entities[v11].nextState.eType == ET_SCRIPTMOVER )
            {
              LODWORD(horzAlign) = v10->m_entities[v11].nextState.lerp.u.anonymous.data[4];
              LODWORD(fmt) = v10->m_entities[v11].nextState.otherEntityNum;
              Com_sprintf(dest, 0x400ui64, "Playing scripted anim on entity %d. Other Ent: %d Model: %s Anim Start Time: %d", (unsigned int)v9, fmt, Model->name, horzAlign);
            }
            else
            {
              LODWORD(fmt) = v10->m_entities[v11].nextState.otherEntityNum;
              Com_sprintf(dest, 0x400ui64, "Playing scripted anim on entity %d. Other Ent: %d Model: %s", (unsigned int)v9, fmt, Model->name);
            }
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
            FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.2);
            UI_DrawText(ActivePlacement, dest, 1024, FontHandle, 0.0, *yPos, 1, 1, 0.18000001, &colorWhite, 3);
            v7 = 2533 * v2;
            *yPos = Y_HEADER_INCREMENT + *yPos;
          }
        }
        CG_DrawDebug_DrawAnims((LocalClientNum_t)v2, v9, *yPos);
        entityNums = v21 + 1;
        ++v20;
        *yPos = Y_ANIM_TREE_INCREMENT + *yPos;
        ++v21;
        v8 = v2;
      }
      while ( v20 < LocalClientGlobals->scriptedAnimDebug.entCount );
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

  Entity = CG_GetEntity((const LocalClientNum_t)cgameGlob->localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5130, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_origin, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_origin [%d]", (unsigned int)entNum);
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&dword_147FA2E88, 0, dword_150F50B90);
    point.v[0] = outOrigin.v[0];
    point.v[2] = outOrigin.v[2] + *(float *)&dword_147FA2E8C;
    point.v[1] = outOrigin.v[1];
    CG_DebugString(&point, &colorGreen, 0.18000001, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_player, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_player [%d]", (unsigned int)entNum);
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&dword_147FA2E88, 0, dword_150F50B90);
    point.v[0] = outOrigin.v[0];
    point.v[2] = outOrigin.v[2] + *(float *)&dword_147FA2E8C;
    point.v[1] = outOrigin.v[1];
    CG_DebugString(&point, &colorGreen, 0.18000001, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_camera, inOutIndex, &modelIndex) && CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
  {
    Com_sprintf(dest, 0x100ui64, "tag_camera [%d]", (unsigned int)entNum);
    CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&dword_147FA2E88, 0, dword_150F50B90);
    point.v[0] = outOrigin.v[0];
    point.v[2] = outOrigin.v[2] + *(float *)&dword_147FA2E8C;
    point.v[1] = outOrigin.v[1];
    CG_DebugString(&point, &colorGreen, 0.18000001, dest, 0, dword_150F50B90);
  }
  inOutIndex[0] = -2;
  if ( DObjGetBoneIndexInternal_46(obj, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
  {
    if ( CG_DObjGetWorldBoneMatrix(&Entity->pose, obj, inOutIndex[0], &outTagMat, &outOrigin) )
    {
      Com_sprintf(dest, 0x100ui64, "tag_camera_scripted [%d]", (unsigned int)entNum);
      CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&dword_147FA2E88, 0, dword_150F50B90);
      point.v[0] = outOrigin.v[0];
      point.v[2] = outOrigin.v[2] + *(float *)&dword_147FA2E8C;
      point.v[1] = outOrigin.v[1];
      CG_DebugString(&point, &colorGreen, 0.18000001, dest, 0, dword_150F50B90);
    }
  }
}

/*
==============
CG_DrawDebug_DrawSkydive
==============
*/
void CG_DrawDebug_DrawSkydive(LocalClientNum_t localClientNum, const bool verbose)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  unsigned __int8 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  char *v9; 
  cg_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  float v16; 
  float ambientVolume; 
  float v18; 
  float v19; 
  float v20; 
  float ambientPitch; 
  float highSpeedVolume; 
  float highSpeedPitch; 
  SkydiveSoundType CurrentSoundType; 
  double v25; 
  double v26; 
  float v27; 
  double TrackedThrottleValue; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float v33; 
  float v34; 
  float v35; 
  double v36; 
  double v37; 
  double roll; 
  double pitch; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char dest[2048]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    Com_sprintf(dest, 0x800ui64, "^3SKYDIVE DEBUG\n");
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    v5 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0];
    if ( v5 >= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6174, ASSERT_TYPE_ASSERT, "(unsigned)( sds.state ) < (unsigned)( SkydiveState::Count )", "sds.state doesn't index SkydiveState::Count\n\t%i not in [0, %i)", v5, 7) )
      __debugbreak();
    v6 = -1i64;
    v7 = -1i64;
    do
      ++v7;
    while ( dest[v7] );
    v8 = 2048 - (int)v7;
    v9 = &dest[(int)v7];
    Com_sprintf(v9, v8, " ^7State: ^5%s\n", g_skydiveStateNames[(unsigned __int8)p_predictedPlayerState->skydivePlayerState.state[0]]);
    v10 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6182, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( (unsigned __int8)(p_predictedPlayerState->skydivePlayerState.state[0] - 1) > 5u )
    {
      Com_sprintf(v9, v8, " ^7Base Jump Height Check: ^5%.2f inches away from the ground\n", v10->skydiveClientState.debugBaseJumpHeight);
    }
    else
    {
      v11 = p_predictedPlayerState->velocity.v[1];
      v12 = p_predictedPlayerState->velocity.v[0];
      LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)(v12 * 0.0) + (float)(v11 * 0.0)) + (float)(1.0 * p_predictedPlayerState->velocity.v[2])) ^ _xmm;
      v14 = fsqrt((float)(v12 * v12) + (float)(v11 * v11));
      v35 = v14;
      do
        ++v6;
      while ( dest[v6] );
      v15 = 2048 - v6;
      if ( verbose )
      {
        v16 = p_predictedPlayerState->viewangles.v[1];
        ambientVolume = 0.0;
        angles.v[0] = 0.0;
        angles.v[1] = v16;
        angles.v[2] = 0.0;
        AnglesToAxis(&angles, &axis);
        v18 = p_predictedPlayerState->velocity.v[1];
        v19 = p_predictedPlayerState->velocity.v[0];
        v34 = (float)(v18 * axis.m[0].v[1]) + (float)(v19 * axis.m[0].v[0]);
        v33 = (float)((float)(v18 - (float)(v34 * axis.m[0].v[1])) * axis.m[1].v[1]) + (float)((float)(v19 - (float)(v34 * axis.m[0].v[0])) * axis.m[1].v[0]);
        v20 = fsqrt((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(p_predictedPlayerState->velocity.v[2] * p_predictedPlayerState->velocity.v[2]));
        ambientPitch = 0.0;
        highSpeedVolume = 0.0;
        highSpeedPitch = 0.0;
        CurrentSoundType = CG_SkydiveGetCurrentSoundType(p_predictedPlayerState);
        if ( CurrentSoundType == 1 )
        {
          ambientVolume = v10->skydiveClientState.soundState.freefall.ambientVolume;
          ambientPitch = v10->skydiveClientState.soundState.freefall.ambientPitch;
          highSpeedVolume = v10->skydiveClientState.soundState.freefall.highSpeedVolume;
          highSpeedPitch = v10->skydiveClientState.soundState.freefall.highSpeedPitch;
        }
        else if ( CurrentSoundType == 2 )
        {
          ambientVolume = v10->skydiveClientState.soundState.canopy.ambientVolume;
          ambientPitch = v10->skydiveClientState.soundState.canopy.ambientPitch;
          highSpeedVolume = v10->skydiveClientState.soundState.canopy.highSpeedVolume;
          highSpeedPitch = v10->skydiveClientState.soundState.canopy.highSpeedPitch;
        }
        v25 = BG_Skydive_CalculateEffectiveVerticalDragCoefficient(p_predictedPlayerState);
        v36 = *(float *)&v25;
        v26 = BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(p_predictedPlayerState);
        v37 = *(float *)&v26;
        roll = p_predictedPlayerState->skydivePlayerState.roll;
        pitch = p_predictedPlayerState->skydivePlayerState.pitch;
        v27 = p_predictedPlayerState->viewangles.v[0] * 0.0027777778;
        TrackedThrottleValue = BG_Skydive_GetTrackedThrottleValue(p_predictedPlayerState);
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        Com_sprintf(&dest[(int)v6], v15, " ^7Ground Speed: ^5%.0f mph - %.1f meters/second\n ^7Fall Speed: ^5%.0f mph - %.1f meters/second\n ^7Forward Speed: ^5%.0f mph - %.1f meters/second (sign indicates direction)\n ^7Side Speed: ^5%.0f mph - %.1f meters/second (sign indicates direction)\n ^73D Speed: ^5%.0f mph - %.1f meters/second\n ^7Throttle: ^5%.2f\n ^7Pitch: ^5%.2f degrees\n ^7Model Pitch: ^5%f (normalized to [-1, 1] range)\n ^7Model Roll: ^5%f (normalized to [-1, 1] range)\n ^7Horizontal Drag Coefficient: ^5%.3f\n ^7Vertical Drag Coefficient: ^5%.3f\n ^7Ambient Volume: ^5%.2f\n ^7Ambient Pitch: ^5%.2f\n ^7High Speed Volume: ^5%.2f\n ^7High Speed Pitch: ^5%.2f\n", v35 * 0.0568182, (float)(v35 * 0.0254), v13 * 0.0568182, (float)(v13 * 0.0254), v34 * 0.0568182, (float)(v34 * 0.0254), v33 * 0.0568182, (float)(v33 * 0.0254), v20 * 0.0568182, (float)(v20 * 0.0254), *(float *)&TrackedThrottleValue, (float)((float)(v27 - *(float *)&_XMM3) * 360.0), pitch, roll, v37, v36, ambientVolume, ambientPitch, highSpeedVolume, highSpeedPitch);
      }
      else
      {
        Com_sprintf(&dest[(int)v6], v15, " ^7Ground Speed: ^5%.0f mph\n ^7Fall Speed: ^5%.0f mph\n", v14 * 0.0568182, v13 * 0.0568182);
      }
    }
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, MY_SCALE_2);
    UI_DrawText(ActivePlacement, dest, 2048, FontHandle, MY_X_2, MY_Y_0, 1, 1, MY_SCALE_2, &colorWhite, 3);
  }
}

/*
==============
CG_DrawDebug_DrawSoundOverlay
==============
*/
void CG_DrawDebug_DrawSoundOverlay(const ScreenPlacement *scrPlace)
{
  const dvar_t *v1; 
  __int64 integer; 
  int SoundOverlay; 
  __int64 v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  const char *v8; 
  const char *v9; 
  unsigned int v10; 
  __int128 v11; 
  int *p_isFiltered; 
  const char *v13; 
  const char *v14; 
  float v15; 
  double v16; 
  __int64 v17; 
  double v18; 
  double v19; 
  char *aliasName; 
  __int128 v21; 
  __int64 adjust; 
  int cpu[4]; 
  snd_overlay_info_t info[64]; 

  v1 = DVARINT_snd_drawInfo;
  if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_drawInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  SoundOverlay = SND_GetSoundOverlay((snd_overlay_type_t)integer, info, 64, cpu);
  v5 = SoundOverlay;
  if ( SoundOverlay > 0 )
  {
    v6 = DVARINT_snd_drawInfo;
    v7 = integer - 5;
    if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
      __debugbreak();
    v8 = j_va("Listing Active Sounds of Type: %s", *(const char **)(v6->domain.integer64.max + 8 * integer));
    CG_DrawStringExt(scrPlace, -30.0, 0.0, v8, &colorWhite, 0, 1, 10.0, 0);
    v9 = j_va("CPU: ^3%%%i ", (unsigned int)cpu[0]);
    CG_DrawStringExt(scrPlace, -30.0, 10.0, v9, &colorWhite, 0, 1, 10.0, 0);
    v10 = 0;
    v11 = LODWORD(FLOAT_20_0);
    if ( v5 > 0 )
    {
      p_isFiltered = &info[0].isFiltered;
      do
      {
        if ( *((_BYTE *)p_isFiltered - 784) )
        {
          v14 = "^7";
          v15 = *((float *)p_isFiltered - 4);
          if ( *p_isFiltered )
            v14 = "^3";
          v16 = *((float *)p_isFiltered - 3);
          if ( *((float *)p_isFiltered + 1) > 0.0 )
            v14 = "^1";
          v17 = (int)v10;
          v19 = v15;
          v18 = v15;
          aliasName = info[v17].aliasName;
          if ( v7 > 3 )
          {
            LODWORD(adjust) = *(p_isFiltered - 2);
            v13 = j_va("%2i %s(%s)^7 %s -> %s ^7v^3%04.2f ^7rv^3%04.2f ^7dst^3%5i ^7pit^3%04.2f", v10, v14, info[v17].entchannel, aliasName, &info[v17], v19, v16, adjust, *((float *)p_isFiltered - 1));
          }
          else
          {
            v13 = j_va("%2i %.12s(%.20s)^7 %s ^7v^3%04.2f ^7rv^3%04.2f ^7vm^3%04.2f ^7%s %s", v10, v14, info[v17].volMod, aliasName, v18, v16, *((float *)p_isFiltered + 4), info[v17].vfCurve, info[v17].speakerMap);
          }
        }
        else
        {
          v13 = j_va("%2i", v10);
        }
        CG_DrawStringExt(scrPlace, -30.0, *(float *)&v11, v13, &colorWhite, 0, 1, 10.0, 0);
        ++v10;
        p_isFiltered += 208;
        v21 = v11;
        *(float *)&v21 = *(float *)&v11 + 10.0;
        v11 = v21;
        --v5;
      }
      while ( v5 );
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
  const dvar_t *v1; 
  int integer; 
  cg_t *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v7; 
  const BG_SpawnGroup_Loot_Table *LootTable; 
  MapEnts *mapEnts; 
  int v10; 
  const BG_SpawnGroup_Loot_Table *v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  SpawnGroupZone *zones; 
  float v16; 
  float v17; 
  __int64 v18; 
  unsigned __int8 setForZoneDefault; 
  __int64 v20; 
  unsigned __int8 cacheSetForZoneDefault; 
  const char *v22; 
  int v23; 
  __int64 v24; 
  const SpawnGroupPoint *v25; 
  vec3_t *zoneCenter; 
  __int64 v27; 
  __int64 v28; 
  vec3_t point; 
  vec3_t viewPos; 

  v1 = DVARINT_cg_debugDrawSpawnGroupLoot;
  if ( !DVARINT_cg_debugDrawSpawnGroupLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawSpawnGroupLoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->renderingThirdPerson || LocalClientGlobals->playerTeleported )
  {
    v5 = LocalClientGlobals->refdef.viewOffset.v[0];
    v6 = LocalClientGlobals->refdef.viewOffset.v[1];
    v7 = LocalClientGlobals->refdef.viewOffset.v[2];
  }
  else
  {
    v5 = LocalClientGlobals->lastFrameViewPos.v[0];
    v6 = LocalClientGlobals->lastFrameViewPos.v[1];
    v7 = LocalClientGlobals->lastFrameViewPos.v[2];
  }
  viewPos.v[2] = v7;
  viewPos.v[1] = v6;
  viewPos.v[0] = v5;
  if ( (LODWORD(v5) & 0x7F800000) != 2139095040 && (LODWORD(v6) & 0x7F800000) != 2139095040 && (LODWORD(v7) & 0x7F800000) != 2139095040 )
  {
    LootTable = ScriptableCl_GetLootTable(localClientNum);
    mapEnts = cm.mapEnts;
    v10 = 0;
    v11 = LootTable;
    v12 = 0;
    if ( cm.mapEnts->spawnGroupLoot.zoneCount )
    {
      v13 = 0i64;
      v14 = 0i64;
      v28 = 0i64;
      do
      {
        zones = mapEnts->spawnGroupLoot.zones;
        v16 = zones[v14].bounds.midPoint.v[0];
        point.v[0] = v16;
        v17 = zones[v14].bounds.midPoint.v[1];
        *(_QWORD *)&point.y = *(_QWORD *)&zones[v14].bounds.midPoint.y;
        if ( zones[v14].pointCount )
        {
          v18 = 0i64;
          do
          {
            CG_DrawDebug_DrawSpawnGroup_Loot_Point(localClientNum, integer, &viewPos, zones[v14].points[v18], &mapEnts->spawnGroupLoot.points[zones[v14].points[v18]], &point);
            ++v18;
            mapEnts = cm.mapEnts;
            ++v10;
          }
          while ( v10 < zones[v14].pointCount );
          v17 = point.v[1];
          v16 = point.v[0];
          v13 = v28;
        }
        if ( integer <= 1 || v12 == -1 || (float)((float)((float)((float)(v6 - v17) * (float)(v6 - v17)) + (float)((float)(v5 - v16) * (float)(v5 - v16))) + (float)((float)(v7 - point.v[2]) * (float)(v7 - point.v[2]))) >= 1000000.0 )
        {
          v10 = 0;
        }
        else
        {
          if ( (unsigned int)v12 >= 0x3E8 )
          {
            LODWORD(v27) = 1000;
            LODWORD(zoneCenter) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6706, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( 1000 )", "zoneIndex doesn't index SPAWNGROUP_LOOT_MAX_ZONES\n\t%i not in [0, %i)", zoneCenter, v27) )
              __debugbreak();
          }
          setForZoneDefault = v11->setForZone[v13];
          if ( !setForZoneDefault )
          {
            setForZoneDefault = v11->setForZoneDefault;
            if ( !setForZoneDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6708, ASSERT_TYPE_ASSERT, "(lootSetIndex != 0)", (const char *)&queryFormat, "lootSetIndex != SPAWNGROUP_LOOT_SET_NONE") )
              __debugbreak();
          }
          v20 = setForZoneDefault;
          cacheSetForZoneDefault = v11->cacheSetForZone[v28];
          if ( !cacheSetForZoneDefault )
          {
            cacheSetForZoneDefault = v11->cacheSetForZoneDefault;
            if ( !cacheSetForZoneDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6711, ASSERT_TYPE_ASSERT, "(cacheSetIndex != 0)", (const char *)&queryFormat, "cacheSetIndex != SPAWNGROUP_LOOT_SET_NONE") )
              __debugbreak();
          }
          v10 = 0;
          point.v[2] = point.v[2] + 10.0;
          CG_DebugString(&point, &colorWhite, 0.30000001, v11->sets[v20].name, 0, 0);
          point.v[2] = point.v[2] + -5.0;
          v22 = j_va("%d%% points %d%% clusters %d%% caches", v11->sets[v20].chancePoint, v11->sets[v20].chanceCluster, v11->sets[cacheSetForZoneDefault].chanceLootCache);
          CG_DebugString(&point, &colorWhite, 0.30000001, v22, 0, 0);
          mapEnts = cm.mapEnts;
          v13 = v28;
        }
        ++v13;
        ++v12;
        ++v14;
        v28 = v13;
      }
      while ( v12 < mapEnts->spawnGroupLoot.zoneCount );
    }
    v23 = 0;
    if ( mapEnts->spawnGroupLoot.pointCount )
    {
      v24 = 0i64;
      do
      {
        v25 = &mapEnts->spawnGroupLoot.points[v24];
        if ( !v25->zone )
        {
          CG_DrawDebug_DrawSpawnGroup_Loot_Point(localClientNum, integer, &viewPos, v23, v25, NULL);
          mapEnts = cm.mapEnts;
        }
        ++v23;
        ++v24;
      }
      while ( v23 < mapEnts->spawnGroupLoot.pointCount );
    }
    ScriptableCl_Debug_DrawLoot(localClientNum);
  }
}

/*
==============
CG_DrawDebug_DrawSpawnGroup_Loot_Point
==============
*/
void CG_DrawDebug_DrawSpawnGroup_Loot_Point(LocalClientNum_t localClientNum, int drawMode, const vec3_t *viewPos, int pointIndex, const SpawnGroupPoint *point, const vec3_t *zoneCenter)
{
  __int128 v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int16 cluster; 
  float v14; 
  const vec4_t *v15; 
  unsigned __int16 clusterCount; 
  const char *v17; 
  char NodeError; 
  const vec4_t *v19; 
  vec3_t *v20; 
  vec3_t *p_start; 
  float v23; 
  float v27; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v30; 
  vec3_t v31; 
  vec3_t v32; 
  vec3_t v33; 
  vec3_t v34; 
  vec3_t v35; 
  _QWORD v36[3]; 

  v9 = point->origin.v[0];
  v10 = point->origin.v[1];
  v11 = point->origin.v[2];
  v12 = (float)((float)((float)(viewPos->v[1] - v10) * (float)(viewPos->v[1] - v10)) + (float)((float)(viewPos->v[0] - point->origin.v[0]) * (float)(viewPos->v[0] - point->origin.v[0]))) + (float)((float)(viewPos->v[2] - v11) * (float)(viewPos->v[2] - v11));
  if ( v12 > 225000000.0 )
    return;
  cluster = point->cluster;
  *(_OWORD *)&v36[1] = v6;
  switch ( cluster )
  {
    case 0xFFFD:
      v14 = FLOAT_50_0;
      v15 = &colorPurple;
      break;
    case 0xFFFC:
      v14 = FLOAT_50_0;
      v15 = &colorRed;
      break;
    case 0xFFFB:
      v14 = FLOAT_50_0;
      v15 = &colorGreen;
      break;
    default:
      v14 = FLOAT_5_0;
      if ( cluster == 0xFFFE )
      {
        v15 = &colorRed;
      }
      else if ( cluster == 0xFFFF )
      {
        v15 = &colorLtGrey;
      }
      else
      {
        v15 = &colorWhite;
        if ( v12 < 250000.0 )
        {
          clusterCount = cm.mapEnts->spawnGroupLoot.clusterCount;
          if ( cluster >= clusterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 6581, ASSERT_TYPE_ASSERT, "(unsigned)( point->cluster ) < (unsigned)( cm.mapEnts->spawnGroupLoot.clusterCount )", "point->cluster doesn't index cm.mapEnts->spawnGroupLoot.clusterCount\n\t%i not in [0, %i)", cluster, clusterCount) )
            __debugbreak();
          CL_AddDebugLine(&point->origin, &cm.mapEnts->spawnGroupLoot.clusters[point->cluster].bounds.midPoint, &colorWhite, 0, 0, 0);
          v9 = point->origin.v[0];
          v10 = point->origin.v[1];
          v11 = point->origin.v[2];
        }
      }
      break;
  }
  end.v[2] = v11 + v14;
  end.v[0] = v9;
  end.v[1] = v10;
  CL_AddDebugLine(&point->origin, &end, v15, 0, 0, 0);
  if ( v12 < 250000.0 )
  {
    v17 = j_va("%d", (unsigned int)pointIndex);
    CG_DebugString(&end, v15, 0.30000001, v17, 0, 0);
  }
  NodeError = BG_SpawnGroup_Loot_GetNodeError(pointIndex);
  if ( NodeError )
  {
    v30.v[0] = end.v[0];
    v30.v[2] = end.v[2] + 3000.0;
    v30.v[1] = end.v[1];
    switch ( NodeError )
    {
      case 1:
        CL_AddDebugLine(&end, &v30, &colorRed, 0, 0, 0);
        if ( v12 >= 250000.0 )
          goto LABEL_28;
        _XMM4 = LODWORD(point->origin.v[2]);
        v23 = point->origin.v[1];
        _XMM0 = point->cluster;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm4, xmm3, xmm2
        }
        v27 = point->origin.v[0] + 8.0;
        v32.v[0] = point->origin.v[0] - 8.0;
        v33.v[0] = v32.v[0];
        v34.v[2] = *(float *)&_XMM4 - 8.0;
        v35.v[2] = *(float *)&_XMM4 + 8.0;
        start.v[0] = v27;
        start.v[1] = v23 - 8.0;
        start.v[2] = *(float *)&_XMM4;
        v31.v[0] = v27;
        v31.v[1] = v23 + 8.0;
        v31.v[2] = *(float *)&_XMM4;
        v32.v[1] = v23 + 8.0;
        v32.v[2] = *(float *)&_XMM4;
        v33.v[1] = v23 - 8.0;
        v33.v[2] = *(float *)&_XMM4;
        v34.v[0] = v27;
        v34.v[1] = v23 - 8.0;
        v35.v[0] = v27;
        v35.v[1] = v23 - 8.0;
        CL_AddDebugLine(&start, &v31, &colorRed, 0, 0, 0);
        CL_AddDebugLine(&v31, &v32, &colorRed, 0, 0, 0);
        CL_AddDebugLine(&v32, &v33, &colorRed, 0, 0, 0);
        CL_AddDebugLine(&v33, &start, &colorRed, 0, 0, 0);
        CL_AddDebugLine(&start, &v34, &colorRed, 0, 0, 0);
        v19 = &colorRed;
        v20 = &v35;
        p_start = &start;
        break;
      case 2:
        v19 = &colorOrange;
        v20 = &v30;
        p_start = &end;
        break;
      case 3:
        v19 = &colorYellow;
        v20 = &v30;
        p_start = &end;
        break;
      default:
        goto LABEL_28;
    }
    CL_AddDebugLine(p_start, v20, v19, 0, 0, 0);
  }
LABEL_28:
  if ( drawMode > 1 )
  {
    if ( zoneCenter )
      CL_AddDebugLine(&point->origin, zoneCenter, &colorWhite, 0, 0, 0);
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo
==============
*/

void __fastcall CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo(const ScreenPlacement *scrPlace, GfxFont *const font, const float fontScale, double x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  __int128 v10; 
  unsigned int FlattenedImageCount; 
  const char *v12; 
  const char *FlattenedImageOverlayHeader; 
  int v14; 
  vec4_t v15; 
  float v16; 
  float v17; 
  vec4_t v18; 
  const dvar_t *v19; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  unsigned int unsignedInt; 
  int v25; 
  float v27; 
  int v28; 
  vec4_t v29; 
  int v30; 
  __int128 v31; 
  __int128 v32; 
  float TotalFlattenedImageMemoryUsage; 
  int v34; 
  vec4_t v35; 
  __int128 v36; 
  __int128 v37; 
  const char *CombinedMapOverlayHeader; 
  vec4_t v39; 
  vec4_t v40; 
  __int128 v41; 
  const dvar_t *v42; 
  __int128 v43; 
  unsigned int v44; 
  float i; 
  vec4_t v46; 
  __int128 v47; 
  float TotalCombinedMapImageCurrentMemoryUsage; 
  int v49; 
  vec4_t v50; 
  float fmt; 
  vec4_t v52; 
  vec4_t v53; 
  unsigned int lenOut; 
  unsigned int v55[3]; 
  char text[1024]; 

  v10 = *(_OWORD *)&x;
  FlattenedImageCount = R_ST_DebugGetFlattenedImageCount();
  v12 = j_va("Material and Layer Mask Texture Stats (%u textures):", FlattenedImageCount);
  FlattenedImageOverlayHeader = R_ST_DebugGetFlattenedImageOverlayHeader(&lenOut);
  v14 = UI_TextWidth(FlattenedImageOverlayHeader, 0, font, fontScale);
  v15 = *shadowColor;
  v16 = FLOAT_1_15;
  v17 = (float)v14 * 1.15;
  v52 = *color;
  v53 = v15;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v12, *(float *)&x, y, v17, h, font, fontScale, &v53, &v52);
  v18 = *shadowColor;
  v22 = LODWORD(h);
  v53 = *color;
  v52 = v18;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, FlattenedImageOverlayHeader, *(float *)&x, h + y, v17, h, font, fontScale, &v52, &v53);
  v19 = DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll;
  v20 = scrPlace->virtualViewableMax.v[1] * 0.60000002;
  *(float *)&v22 = (float)(h + y) + h;
  v21 = v22;
  v23 = v22;
  if ( !DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoMaterialLayerScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  unsignedInt = v19->current.unsignedInt;
  v25 = 0;
  _XMM7 = v22;
  R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(text, 0x400u);
  v27 = (float)UI_TextWidth(text, 1024, font, fontScale) * 1.15;
  if ( unsignedInt < R_ST_DebugGetFlattenedImageCount() )
  {
    v28 = 1;
    do
    {
      R_ST_DebugPopulateFlattenedImageInfoString(unsignedInt, text, 0x400u);
      v29 = *shadowColor;
      v53 = *color;
      v52 = v29;
      CG_DrawDebug_DrawTextWithBackground(scrPlace, text, *(float *)&v10, *(float *)&v21, v27, h, font, fontScale, &v52, &v53);
      v30 = UI_TextWidth(text, 1024, font, fontScale);
      v31 = v21;
      *(float *)&v31 = *(float *)&v21 + h;
      v21 = v31;
      if ( v30 > v25 )
        v25 = v30;
      __asm { vmaxss  xmm7, xmm7, xmm6 }
      if ( *(float *)&v31 > v20 )
      {
        if ( v28 >= 2 )
          break;
        v32 = v10;
        *(float *)&v32 = *(float *)&v10 + (float)(int)(float)((float)v25 * 1.25);
        v10 = v32;
        v21 = v23;
        ++v28;
      }
      ++unsignedInt;
    }
    while ( unsignedInt < R_ST_DebugGetFlattenedImageCount() );
    v16 = FLOAT_1_15;
  }
  TotalFlattenedImageMemoryUsage = (float)R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  Com_sprintf(text, 0x400ui64, "Material/Mask Image memory usage: %.1f MB", (float)(TotalFlattenedImageMemoryUsage * 0.00000095367432));
  v34 = UI_TextWidth(text, 1024, font, fontScale);
  v35 = *shadowColor;
  v53 = *color;
  v52 = v35;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, text, *(float *)&x, *(float *)&_XMM7, (float)v34 * v16, h, font, fontScale, &v52, &v53);
  v36 = _XMM7;
  *(float *)&v36 = (float)(*(float *)&_XMM7 + h) + (float)(h * 2.0);
  v37 = v36;
  CombinedMapOverlayHeader = R_ST_DebugGetCombinedMapOverlayHeader(v55);
  *(float *)&v36 = (float)UI_TextWidth(CombinedMapOverlayHeader, 0, font, fontScale) * v16;
  v39 = *shadowColor;
  v53 = *color;
  v52 = v39;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, "Combined Map Image Stats:", *(float *)&x, *(float *)&v37, *(const float *)&v36, h, font, fontScale, &v52, &v53);
  v40 = *shadowColor;
  fmt = *(float *)&v36;
  v41 = v37;
  v53 = *color;
  v52 = v40;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, CombinedMapOverlayHeader, *(float *)&x, *(float *)&v37 + h, fmt, h, font, fontScale, &v52, &v53);
  v42 = DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll;
  *(float *)&v41 = (float)(*(float *)&v37 + h) + h;
  v43 = v41;
  if ( !DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoCombinedMapScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v44 = v42->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedFlattenedImageInfoString(text, 0x400u);
  for ( i = (float)UI_TextWidth(text, 1024, font, fontScale) * v16; v44 < R_ST_DebugGetTerrainSurfaceCount(); ++v44 )
  {
    R_ST_DebugPopulateCombinedMapImageInfoString(v44, text, 0x400u);
    v46 = *shadowColor;
    v53 = *color;
    v52 = v46;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, text, *(float *)&x, *(float *)&v43, i, h, font, fontScale, &v52, &v53);
    v47 = v43;
    *(float *)&v47 = *(float *)&v43 + h;
    v43 = v47;
    if ( (float)((float)(h * 2.0) + *(float *)&v47) > scrPlace->virtualViewableMax.v[1] )
      break;
  }
  TotalCombinedMapImageCurrentMemoryUsage = (float)R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  Com_sprintf(text, 0x400ui64, "Combined Map memory usage: %.1f MB", (float)(TotalCombinedMapImageCurrentMemoryUsage * 0.00000095367432));
  v49 = UI_TextWidth(text, 1024, font, fontScale);
  v50 = *shadowColor;
  v53 = *color;
  v52 = v50;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, text, *(float *)&x, *(float *)&v43, (float)v49 * v16, h, font, fontScale, &v52, &v53);
}

/*
==============
CG_DrawDebug_DrawSuperTerrainGeoInfo
==============
*/
void CG_DrawDebug_DrawSuperTerrainGeoInfo(const vec3_t *dpvsCamPos, const ScreenPlacement *scrPlace, GfxFont *const font, const float fontScale, float x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  float v9; 
  unsigned int TerrainSurfaceCount; 
  const char *v14; 
  const char *RenderedMeshGeoOverlayHeader; 
  int v16; 
  vec4_t v17; 
  float v18; 
  vec4_t v19; 
  __int128 v20; 
  const dvar_t *v21; 
  __int128 v22; 
  unsigned int unsignedInt; 
  float i; 
  ST_DebugAssetRenderAvailability v25; 
  vec4_t *ColorFromAvailablity; 
  vec4_t v27; 
  __int128 v28; 
  float v29; 
  const char *v30; 
  __int64 v31; 
  const char *v32; 
  __int64 v33; 
  int v34; 
  vec4_t v35; 
  __int128 v36; 
  unsigned int v37; 
  const char *v38; 
  const char *StreamedMeshGeoOverlayHeader; 
  const char *v40; 
  __int64 v41; 
  float v42; 
  vec4_t v43; 
  vec4_t v44; 
  const dvar_t *v45; 
  __int128 v46; 
  unsigned int v47; 
  float j; 
  ST_DebugAssetRenderAvailability v49; 
  vec4_t *v50; 
  vec4_t v51; 
  __int128 v52; 
  float v53; 
  const char *v54; 
  const char *v55; 
  int v56; 
  vec4_t v57; 
  unsigned int totalMemory; 
  vec4_t v59; 
  vec4_t v60; 
  unsigned int lenOut; 
  unsigned int totalNodesMissing; 
  unsigned int totalIdealNodesRendered; 
  unsigned int outTotalNodesStreamed; 
  unsigned int v65[4]; 
  char text[1024]; 

  v9 = scrPlace->virtualViewableMax.v[1] * 0.60000002;
  TerrainSurfaceCount = R_ST_DebugGetTerrainSurfaceCount();
  v14 = j_va("Rendered Mesh Geo info, ignoring occlusion and frustum culling (%u surfaces):", TerrainSurfaceCount);
  RenderedMeshGeoOverlayHeader = R_ST_DebugGetRenderedMeshGeoOverlayHeader(&lenOut);
  v16 = UI_TextWidth(RenderedMeshGeoOverlayHeader, lenOut, font, fontScale);
  v17 = *shadowColor;
  v18 = (float)v16 * 1.15;
  v59 = *color;
  v60 = v17;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v14, x, y, v18, h, font, fontScale, &v60, &v59);
  v19 = *shadowColor;
  v20 = LODWORD(h);
  v60 = *color;
  v59 = v19;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, RenderedMeshGeoOverlayHeader, x, h + y, v18, h, font, fontScale, &v59, &v60);
  v21 = DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll;
  *(float *)&v20 = (float)(h + y) + h;
  v22 = v20;
  if ( !DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoRenderedGeoScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  unsignedInt = v21->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedRenderedMeshGeoInfoString(text, 0x400u);
  for ( i = (float)UI_TextWidth(text, 1024, font, fontScale) * 1.15; unsignedInt < R_ST_DebugGetTerrainSurfaceCount(); ++unsignedInt )
  {
    v25 = R_ST_DebugPopulateRenderedMeshGeoInfoString(dpvsCamPos, unsignedInt, text, 0x400u);
    ColorFromAvailablity = (vec4_t *)R_ST_DebugGetColorFromAvailablity(v25);
    v27 = *shadowColor;
    v60 = *ColorFromAvailablity;
    v59 = v27;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, *(float *)&v22, i, h, font, fontScale, &v59, &v60);
    v28 = v22;
    *(float *)&v28 = *(float *)&v22 + h;
    v22 = v28;
    if ( (float)((float)(h * 2.0) + *(float *)&v28) > v9 )
      break;
  }
  R_ST_DebugGetTotalRenderedMeshGeoMemory(dpvsCamPos, &totalMemory, &totalIdealNodesRendered, &totalNodesMissing);
  v29 = (float)totalMemory;
  v30 = j_va("Total ideally rendered nodes: %u  Total missing nodes: %u  Total memory: %.1f mb\n", totalIdealNodesRendered, totalNodesMissing, (float)(v29 * 0.00000095367432));
  v31 = -1i64;
  v32 = v30;
  v33 = -1i64;
  do
    ++v33;
  while ( v30[v33] );
  v34 = UI_TextWidth(v30, v33, font, fontScale);
  v35 = *shadowColor;
  v60 = *color;
  v59 = v35;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v32, x, *(float *)&v22, (float)v34 * 1.15, h, font, fontScale, &v59, &v60);
  v36 = v22;
  *(float *)&v36 = *(float *)&v22 + (float)(h * 3.0);
  v37 = R_ST_DebugGetTerrainSurfaceCount();
  v38 = j_va("Streamed Mesh Geo info (%u surfaces):", v37);
  StreamedMeshGeoOverlayHeader = R_ST_DebugGetStreamedMeshGeoOverlayHeader(v65);
  v40 = StreamedMeshGeoOverlayHeader;
  v41 = -1i64;
  do
    ++v41;
  while ( StreamedMeshGeoOverlayHeader[v41] );
  v42 = (float)UI_TextWidth(StreamedMeshGeoOverlayHeader, v41, font, fontScale) * 1.15;
  v43 = *shadowColor;
  v60 = *color;
  v59 = v43;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v38, x, *(float *)&v36, v42, h, font, fontScale, &v59, &v60);
  v44 = *shadowColor;
  v60 = *color;
  v59 = v44;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v40, x, *(float *)&v36 + h, v42, h, font, fontScale, &v59, &v60);
  v45 = DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll;
  *(float *)&v36 = (float)(*(float *)&v36 + h) + h;
  v46 = v36;
  if ( !DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoStreamedGeoScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v47 = v45->current.unsignedInt;
  R_ST_DebugGetMaxExpectedLengthPopulatedStreamedMeshGeoInfoString(text, 0x400u);
  for ( j = (float)UI_TextWidth(text, 1024, font, fontScale) * 1.15; v47 < R_ST_DebugGetTerrainSurfaceCount(); ++v47 )
  {
    v49 = R_ST_DebugPopulateStreamedMeshGeoInfoString(v47, text, 0x400u);
    v50 = (vec4_t *)R_ST_DebugGetColorFromAvailablity(v49);
    v51 = *shadowColor;
    v60 = *v50;
    v59 = v51;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, *(float *)&v46, j, h, font, fontScale, &v59, &v60);
    v52 = v46;
    *(float *)&v52 = *(float *)&v46 + h;
    v46 = v52;
    if ( (float)((float)(h * 2.0) + *(float *)&v52) > scrPlace->virtualViewableMax.v[1] )
      break;
  }
  R_ST_DebugGetTotalStreamedMeshGeoMemory(&totalMemory, &outTotalNodesStreamed);
  v53 = (float)totalMemory;
  v54 = j_va("Total nodes: %u  Total memory: %.1f MB\n", outTotalNodesStreamed, (float)(v53 * 0.00000095367432));
  v55 = v54;
  do
    ++v31;
  while ( v54[v31] );
  v56 = UI_TextWidth(v54, v31, font, fontScale);
  v57 = *shadowColor;
  v60 = *color;
  v59 = v57;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v55, x, *(float *)&v46, (float)v56 * 1.15, h, font, fontScale, &v59, &v60);
}

/*
==============
CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo
==============
*/
void CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo(const ScreenPlacement *scrPlace, GfxFont *const font, const float fontScale, float x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  const char *v10; 
  const char *HeightCutoutLmapOverlayHeader; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  vec4_t v15; 
  float v16; 
  vec4_t v17; 
  __int128 v18; 
  const dvar_t *v19; 
  __int128 v20; 
  unsigned int unsignedInt; 
  float i; 
  ST_DebugAssetRenderAvailability v23; 
  vec4_t *ColorFromAvailablity; 
  vec4_t v25; 
  __int128 v26; 
  float TotalHeightmapImageCurrentMemoryUsage; 
  float v28; 
  vec4_t v29; 
  float v30; 
  float TotalCutoutmapImageCurrentMemoryUsage; 
  vec4_t v32; 
  float TotalLightmapImageCurrentMemoryUsage; 
  vec4_t v34; 
  vec4_t v35; 
  vec4_t v36; 
  char text[1024]; 

  v10 = j_va("Height, Cutout, and Light maps stats:");
  HeightCutoutLmapOverlayHeader = R_ST_DebugGetHeightCutoutLmapOverlayHeader();
  v12 = HeightCutoutLmapOverlayHeader;
  v13 = -1i64;
  do
    ++v13;
  while ( HeightCutoutLmapOverlayHeader[v13] );
  v14 = UI_TextWidth(HeightCutoutLmapOverlayHeader, v13, font, fontScale);
  v15 = *shadowColor;
  v16 = (float)v14 * 1.15;
  v35 = *color;
  v36 = v15;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v10, x, y, v16, h, font, fontScale, &v36, &v35);
  v17 = *shadowColor;
  v18 = LODWORD(h);
  v36 = *color;
  v35 = v17;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v12, x, h + y, v16, h, font, fontScale, &v35, &v36);
  v19 = DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll;
  *(float *)&v18 = (float)(h + y) + h;
  v20 = v18;
  if ( !DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoHeightCutoutLmapScroll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  unsignedInt = v19->current.unsignedInt;
  R_ST_DebugGetMaxPopulatedHeightCutoutLmapInfoString(text, 0x400u);
  for ( i = (float)UI_TextWidth(text, 1024, font, fontScale) * 1.15; unsignedInt < R_ST_DebugGetTerrainSurfaceCount(); ++unsignedInt )
  {
    v23 = R_ST_DebugPopulateHeightCutoutLmapImageInfoString(unsignedInt, text, 0x400u);
    ColorFromAvailablity = (vec4_t *)R_ST_DebugGetColorFromAvailablity(v23);
    v25 = *shadowColor;
    v36 = *ColorFromAvailablity;
    v35 = v25;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, *(float *)&v20, i, h, font, fontScale, &v35, &v36);
    v26 = v20;
    *(float *)&v26 = *(float *)&v20 + h;
    v20 = v26;
    if ( (float)((float)(h * 4.0) + *(float *)&v26) > scrPlace->virtualViewableMax.v[1] )
      break;
  }
  TotalHeightmapImageCurrentMemoryUsage = (float)R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  Com_sprintf(text, 0x400ui64, "Current streamed height map memory usage: %.1f MB", (float)(TotalHeightmapImageCurrentMemoryUsage * 0.00000095367432));
  v28 = (float)UI_TextWidth(text, 1024, font, fontScale) * 1.15;
  v29 = *shadowColor;
  v36 = *color;
  v35 = v29;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, *(float *)&v20, v28, h, font, fontScale, &v35, &v36);
  v30 = *(float *)&v20 + h;
  TotalCutoutmapImageCurrentMemoryUsage = (float)R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  Com_sprintf(text, 0x400ui64, "Current streamed cutout map memory usage: %.1f MB", (float)(TotalCutoutmapImageCurrentMemoryUsage * 0.00000095367432));
  v32 = *shadowColor;
  v36 = *color;
  v35 = v32;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, v30, v28, h, font, fontScale, &v35, &v36);
  TotalLightmapImageCurrentMemoryUsage = (float)R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage();
  Com_sprintf(text, 0x400ui64, "Current streamed lightmap memory usage:   %.1f MB", (float)(TotalLightmapImageCurrentMemoryUsage * 0.00000095367432));
  v34 = *shadowColor;
  v36 = *color;
  v35 = v34;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, text, x, v30 + h, v28, h, font, fontScale, &v35, &v36);
}

/*
==============
CG_DrawDebug_DrawSuperTerrainInfo
==============
*/
void CG_DrawDebug_DrawSuperTerrainInfo(const LocalClientNum_t localClientNum)
{
  const vec4_t *ColorFromAvailablity; 
  const dvar_t *v3; 
  __int128 *v4; 
  int integer; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  float value; 
  GfxFont *FontHandle; 
  const dvar_t *v10; 
  GfxFont *v11; 
  double v12; 
  double v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  vec3_t outOrg; 

  ColorFromAvailablity = R_ST_DebugGetColorFromAvailablity(ST_DEBUG_OK_TO_RENDER);
  v3 = DVARINT_cg_drawTerrainStreamingInfo;
  v4 = (__int128 *)ColorFromAvailablity;
  if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( R_ST_IsLoaded() )
  {
    v7 = DVARFLT_cg_drawTerrainStreamingInfoScale;
    if ( !DVARFLT_cg_drawTerrainStreamingInfoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3998, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 5, value);
    v10 = DVARINT_cg_drawTerrainStreamingInfoPosX;
    v11 = FontHandle;
    if ( !DVARINT_cg_drawTerrainStreamingInfoPosX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoPosX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    HIDWORD(v13) = 0;
    *(float *)&v13 = (float)v10->current.integer;
    v12 = v13;
    v14 = DVARINT_cg_drawTerrainStreamingInfoPosY;
    if ( !DVARINT_cg_drawTerrainStreamingInfoPosY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfoPosY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = (float)v14->current.integer;
    v16 = (float)UI_TextHeight(v11, value) * 1.25;
    switch ( integer )
    {
      case 1:
        v17 = *v4;
        v21 = _xmm;
        v22 = v17;
        CG_DrawDebug_DrawSuperTerrainStreamingOverview(&outOrg, &scrPlaceFullUnsafe, v11, value, *(float *)&v12, v15, v16, (const vec4_t *)&v22, (const vec4_t *)&v21);
        break;
      case 2:
        v18 = *v4;
        v22 = _xmm;
        v21 = v18;
        CG_DrawDebug_DrawSuperTerrainFlattenedImageCombinedMapInfo(&scrPlaceFullUnsafe, v11, value, v12, v15, v16, (const vec4_t *)&v21, (const vec4_t *)&v22);
        break;
      case 3:
        v19 = *v4;
        v22 = _xmm;
        v21 = v19;
        CG_DrawDebug_DrawSuperTerrainGeoInfo(&outOrg, &scrPlaceFullUnsafe, v11, value, *(float *)&v12, v15, v16, (const vec4_t *)&v21, (const vec4_t *)&v22);
        break;
      case 4:
        v20 = *v4;
        v22 = _xmm;
        v21 = v20;
        CG_DrawDebug_DrawSuperTerrainHeightCutoutLmapInfo(&scrPlaceFullUnsafe, v11, value, *(float *)&v12, v15, v16, (const vec4_t *)&v21, (const vec4_t *)&v22);
        break;
      default:
        if ( integer )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4024, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented code") )
            __debugbreak();
        }
        break;
    }
  }
}

/*
==============
CG_DrawDebug_DrawSuperTerrainStreamingOverview
==============
*/
void CG_DrawDebug_DrawSuperTerrainStreamingOverview(const vec3_t *dpvsCamPos, const ScreenPlacement *scrPlace, GfxFont *const font, const float fontScale, float x, float y, const float h, const vec4_t *color, const vec4_t *shadowColor)
{
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  float v16; 
  vec4_t v17; 
  vec4_t v18; 
  float v19; 
  unsigned int TerrainSurfaceCount; 
  vec4_t v21; 
  float v22; 
  unsigned int TotalHeightmapImageCurrentMemoryUsage; 
  unsigned int TotalCutoutmapImageCurrentMemoryUsage; 
  unsigned int v25; 
  unsigned int TotalFlattenedImageMemoryUsage; 
  unsigned int TotalCombinedMapImageCurrentMemoryUsage; 
  vec4_t v28; 
  vec4_t v29; 
  float v30; 
  float v31; 
  unsigned int FlattenedImageCount; 
  vec4_t v33; 
  float v34; 
  float v35; 
  vec4_t v36; 
  vec4_t v37; 
  float v38; 
  float v39; 
  vec4_t v40; 
  vec4_t v41; 
  float v42; 
  vec4_t v43; 
  float v44; 
  float v45; 
  vec4_t v46; 
  vec4_t v47; 
  vec4_t v48; 
  float v49; 
  float v50; 
  float v51; 
  vec4_t v52; 
  vec4_t v53; 
  float v54; 
  vec4_t v55; 
  float v56; 
  unsigned int TotalLightmapCount; 
  vec4_t v58; 
  float v59; 
  float TotalLightmapImageCurrentMemoryUsage; 
  vec4_t v61; 
  vec4_t v62; 
  vec4_t v63; 
  float v64; 
  float v65; 
  vec4_t v66; 
  float v67; 
  vec4_t v68; 
  float v69; 
  vec4_t v70; 
  float v71; 
  vec4_t v72; 
  float v73; 
  vec4_t v74; 
  float v75; 
  vec4_t v76; 
  float v77; 
  vec4_t v78; 
  float v79; 
  vec4_t *ColorFromAvailablity; 
  vec4_t v81; 
  float v82; 
  vec4_t *v83; 
  float v84; 
  vec4_t v85; 
  float v86; 
  vec4_t v87; 
  vec4_t v88; 
  unsigned int *missingGeo; 
  __int64 v90; 
  vec4_t v91; 
  vec4_t v92; 
  unsigned int outTotalMemory; 
  unsigned int outTotalNodesStreamed; 
  unsigned int outAvg; 
  unsigned int outMax; 
  unsigned int outMin; 
  float v98; 
  float v99; 
  float v100; 
  unsigned int totalNodesMissing; 
  unsigned int surfaceErrors; 
  unsigned int surfaceWarns; 
  unsigned int missingHeights; 
  unsigned int missingCutouts; 
  unsigned int v106; 
  unsigned int totalIdealNodesRendered; 
  unsigned int totalMemory; 
  char dest[1024]; 

  v12 = j_va("Super Terrain Streaming Stats Overview:");
  v13 = v12;
  v14 = -1i64;
  do
    ++v14;
  while ( v12[v14] );
  v16 = (float)UI_TextWidth(v12, v14, font, fontScale) * 1.7249999;
  v17 = *shadowColor;
  v91 = *color;
  v92 = v17;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, v13, x, y, v16, h, font, fontScale, &v92, &v91);
  v18 = *shadowColor;
  v92 = *color;
  v91 = v18;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, h + y, v16, h, font, fontScale, &v91, &v92);
  v19 = (float)(h + y) + h;
  TerrainSurfaceCount = R_ST_DebugGetTerrainSurfaceCount();
  Com_sprintf(dest, 0x400ui64, "Number of terrain surfaces: %u", TerrainSurfaceCount);
  v21 = *shadowColor;
  v92 = *color;
  v91 = v21;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v19, v16, h, font, fontScale, &v91, &v92);
  v22 = v19 + h;
  R_ST_DebugGetTotalStreamedMeshGeoMemory(&outTotalMemory, &outTotalNodesStreamed);
  TotalHeightmapImageCurrentMemoryUsage = R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  TotalCutoutmapImageCurrentMemoryUsage = R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  v25 = TotalCutoutmapImageCurrentMemoryUsage + R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage() + TotalHeightmapImageCurrentMemoryUsage;
  TotalFlattenedImageMemoryUsage = R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  TotalCombinedMapImageCurrentMemoryUsage = R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, "Current streamed memory: %u MB", (outTotalMemory + TotalFlattenedImageMemoryUsage + v25 + TotalCombinedMapImageCurrentMemoryUsage) >> 20);
  v28 = *shadowColor;
  v92 = *color;
  v91 = v28;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v22, v16, h, font, fontScale, &v91, &v92);
  v29 = *shadowColor;
  v30 = v22 + h;
  v92 = *color;
  v91 = v29;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v30, v16, h, font, fontScale, &v91, &v92);
  v31 = v30 + h;
  FlattenedImageCount = R_ST_DebugGetFlattenedImageCount();
  Com_sprintf(dest, 0x400ui64, "Layer mask and material textures (%u)", FlattenedImageCount);
  v33 = *shadowColor;
  v92 = *color;
  v91 = v33;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v31, v16, h, font, fontScale, &v91, &v92);
  v34 = v31 + h;
  v35 = (float)R_ST_DebugGetTotalFlattenedImageMemoryUsage();
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", (float)(v35 * 0.00000095367432));
  v36 = *shadowColor;
  v92 = *color;
  v91 = v36;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v34, v16, h, font, fontScale, &v91, &v92);
  v37 = *shadowColor;
  v92 = *color;
  v91 = v37;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v34 + h, v16, h, font, fontScale, &v91, &v92);
  v38 = (float)(v34 + h) + h;
  v39 = (float)R_ST_DebugGetTotalCombinedMapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, "'Combined Map' memory usage: %.1f MB", (float)(v39 * 0.00000095367432));
  v40 = *shadowColor;
  v92 = *color;
  v91 = v40;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v38, v16, h, font, fontScale, &v91, &v92);
  v41 = *shadowColor;
  v92 = *color;
  v91 = v41;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v38 + h, v16, h, font, fontScale, &v91, &v92);
  v42 = (float)(v38 + h) + h;
  R_ST_DebugGetHeightmapPixelSizeStats(&outMin, &outMax, &outAvg);
  Com_sprintf(dest, 0x400ui64, "Height map stats:");
  v43 = *shadowColor;
  v92 = *color;
  v91 = v43;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v42, v16, h, font, fontScale, &v91, &v92);
  v44 = v42 + h;
  v45 = (float)R_ST_DebugGetTotalHeightmapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", (float)(v45 * 0.00000095367432));
  v46 = *shadowColor;
  v92 = *color;
  v91 = v46;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v44, v16, h, font, fontScale, &v91, &v92);
  LODWORD(v90) = outAvg;
  LODWORD(missingGeo) = outMax;
  Com_sprintf(dest, 0x400ui64, " - pixel size: min(%u) max(%u) avg(%u)", outMin, missingGeo, v90);
  v47 = *shadowColor;
  v92 = *color;
  v91 = v47;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v44 + h, v16, h, font, fontScale, &v91, &v92);
  v48 = *shadowColor;
  v49 = (float)(v44 + h) + h;
  v92 = *color;
  v91 = v48;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v49, v16, h, font, fontScale, &v91, &v92);
  v50 = v49 + h;
  v51 = (float)R_ST_DebugGetTotalCutoutmapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, "Cutout map current memory: %.1f MB", (float)(v51 * 0.00000095367432));
  v52 = *shadowColor;
  v92 = *color;
  v91 = v52;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v50, v16, h, font, fontScale, &v91, &v92);
  v53 = *shadowColor;
  v92 = *color;
  v91 = v53;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v50 + h, v16, h, font, fontScale, &v91, &v92);
  v54 = (float)(v50 + h) + h;
  R_ST_DebugGetLightmapDensityStatsUnitPerPixel(&v100, &v99, &v98);
  Com_sprintf(dest, 0x400ui64, "Lightmap stats:");
  v55 = *shadowColor;
  v92 = *color;
  v91 = v55;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v54, v16, h, font, fontScale, &v91, &v92);
  v56 = v54 + h;
  TotalLightmapCount = R_ST_DebugGetTotalLightmapCount();
  Com_sprintf(dest, 0x400ui64, " - %u terrain surfaces have lightmaps", TotalLightmapCount);
  v58 = *shadowColor;
  v92 = *color;
  v91 = v58;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v56, v16, h, font, fontScale, &v91, &v92);
  v59 = v56 + h;
  TotalLightmapImageCurrentMemoryUsage = (float)R_ST_DebugGetTotalLightmapImageCurrentMemoryUsage();
  Com_sprintf(dest, 0x400ui64, " - current memory: %.1f MB", (float)(TotalLightmapImageCurrentMemoryUsage * 0.00000095367432));
  v61 = *shadowColor;
  v92 = *color;
  v91 = v61;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v59, v16, h, font, fontScale, &v91, &v92);
  Com_sprintf(dest, 0x400ui64, " - density (in/px): min(%.0f) max(%.0f) avg(%.0f)", v100, v99, v98);
  v62 = *shadowColor;
  v92 = *color;
  v91 = v62;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v59 + h, v16, h, font, fontScale, &v91, &v92);
  v63 = *shadowColor;
  v64 = (float)(v59 + h) + h;
  v92 = *color;
  v91 = v63;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v64, v16, h, font, fontScale, &v91, &v92);
  v65 = v64 + h;
  Com_sprintf(dest, 0x400ui64, "Geometry stats:");
  v66 = *shadowColor;
  v92 = *color;
  v91 = v66;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v64 + h, v16, h, font, fontScale, &v91, &v92);
  v67 = (float)outTotalMemory;
  Com_sprintf(dest, 0x400ui64, "- current memory: %.1f MB", (float)(v67 * 0.00000095367432));
  v68 = *shadowColor;
  v92 = *color;
  v91 = v68;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v65 + h, v16, h, font, fontScale, &v91, &v92);
  v69 = (float)(v65 + h) + h;
  Com_sprintf(dest, 0x400ui64, "- current node count: %u", outTotalNodesStreamed);
  v70 = *shadowColor;
  v92 = *color;
  v91 = v70;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v69, v16, h, font, fontScale, &v91, &v92);
  v71 = v69 + h;
  R_ST_DebugGetTotalRenderedMeshGeoMemory(dpvsCamPos, &totalMemory, &totalIdealNodesRendered, &totalNodesMissing);
  Com_sprintf(dest, 0x400ui64, "- missing node count: %u", totalNodesMissing);
  v72 = *shadowColor;
  v92 = *color;
  v91 = v72;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v71, v16, h, font, fontScale, &v91, &v92);
  v73 = v71 + h;
  Com_sprintf(dest, 0x400ui64, "- current node count: %u", outTotalNodesStreamed);
  v74 = *shadowColor;
  v92 = *color;
  v91 = v74;
  CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v73, v16, h, font, fontScale, &v91, &v92);
  v75 = v73 + h;
  if ( R_ST_DebugGetSurfaceRenderingAvailabilityStats(&surfaceWarns, &surfaceErrors, &missingHeights, &missingCutouts, &v106) )
  {
    v76 = *shadowColor;
    v92 = *color;
    v91 = v76;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, NULL, x, v75, v16, h, font, fontScale, &v91, &v92);
    v77 = v75 + h;
    Com_sprintf(dest, 0x400ui64, "Lack of resources for super terrain:");
    v78 = *shadowColor;
    v92 = *color;
    v91 = v78;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v77, v16, h, font, fontScale, &v91, &v92);
    v79 = v77 + h;
    Com_sprintf(dest, 0x400ui64, "- %u surfaces cannot draw, and are being dropped", surfaceErrors);
    ColorFromAvailablity = (vec4_t *)R_ST_DebugGetColorFromAvailablity(ST_DEBUG_CANNOT_RENDER);
    v81 = *shadowColor;
    v92 = *ColorFromAvailablity;
    v91 = v81;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v79, v16, h, font, fontScale, &v91, &v92);
    v82 = v79 + h;
    Com_sprintf(dest, 0x400ui64, "- %u surfaces cannot draw, but are not currently in view", surfaceWarns);
    v83 = (vec4_t *)R_ST_DebugGetColorFromAvailablity(ST_DEBUG_RENDER_WARNING);
    v91 = *shadowColor;
    v92 = *v83;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v82, v16, h, font, fontScale, &v91, &v92);
    v84 = v82 + h;
    Com_sprintf(dest, 0x400ui64, "- %u missing heightmaps", missingHeights);
    v85 = *shadowColor;
    v92 = *color;
    v91 = v85;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v84, v16, h, font, fontScale, &v91, &v92);
    v86 = v84 + h;
    Com_sprintf(dest, 0x400ui64, "- %u missing cutout maps", missingCutouts);
    v87 = *shadowColor;
    v92 = *color;
    v91 = v87;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v86, v16, h, font, fontScale, &v91, &v92);
    Com_sprintf(dest, 0x400ui64, "- %u missing base LoD geo", v106);
    v88 = *shadowColor;
    v92 = *color;
    v91 = v88;
    CG_DrawDebug_DrawTextWithBackground(scrPlace, dest, x, v86 + h, v16, h, font, fontScale, &v91, &v92);
  }
}

/*
==============
CG_DrawDebug_DrawSvProfile
==============
*/
void CG_DrawDebug_DrawSvProfile(LocalClientNum_t localClientNum)
{
  SvProfileDrawFrame *DrawFrame; 
  __m256i *v3; 
  __int64 v4; 
  __m256i v5; 
  __int128 v6; 
  const ScreenPlacement *ActivePlacement; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  char *v12; 
  __int64 v13; 
  GfxFont *font; 
  const char *s; 
  GfxFont *smallDevFont; 
  const char *v17; 
  GfxFont *v18; 
  const char *v19; 
  __int128 v20; 
  SvProfileDrawFrame result; 
  char v22; 
  char v23; 

  DrawFrame = SV_Profile_GetDrawFrame(&result);
  v3 = (__m256i *)&v22;
  v4 = 9i64;
  do
  {
    v3 += 4;
    v5 = *(__m256i *)&DrawFrame->lines[0].name;
    v6 = *(_OWORD *)&DrawFrame->lines[4].time;
    DrawFrame = (SvProfileDrawFrame *)((char *)DrawFrame + 128);
    v3[-4] = v5;
    v3[-3] = *(__m256i *)&DrawFrame[-1].lines[48].name;
    v3[-2] = *(__m256i *)&DrawFrame[-1].lines[49].count;
    *(_OWORD *)v3[-1].m256i_i8 = *(_OWORD *)&DrawFrame[-1].lines[50].time;
    *(_OWORD *)&v3[-1].m256i_u64[2] = v6;
    --v4;
  }
  while ( v4 );
  *v3 = *(__m256i *)&DrawFrame->lines[0].name;
  v3[1] = *(__m256i *)&DrawFrame->lines[1].count;
  v3[2] = *(__m256i *)&DrawFrame->lines[2].time;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v8 = ActivePlacement->virtualViewableMin.v[0];
  v9 = LODWORD(ActivePlacement->virtualViewableMin.v[1]);
  CG_DrawDevString(ActivePlacement, v8, *(float *)&v9, 0.60000002, 0.60000002, "SvProfile (Smoothed)", &colorGreen, 5, cls.smallDevFont);
  CG_DrawDevString(ActivePlacement, v8 + 100.0, *(float *)&v9, 0.60000002, 0.60000002, "Count", &colorGreen, 5, cls.smallDevFont);
  v11 = v9;
  *(float *)&v11 = *(float *)&v9 + (float)CG_DrawDevString(ActivePlacement, v8 + 130.0, *(float *)&v9, 0.60000002, 0.60000002, "Time(us)", &colorGreen, 5, cls.smallDevFont);
  v10 = v11;
  v12 = &v23;
  v13 = 52i64;
  do
  {
    font = cls.smallDevFont;
    s = j_va((const char *)&queryFormat, *((_QWORD *)v12 - 2));
    CG_DrawDevString(ActivePlacement, v8, *(float *)&v10, 0.60000002, 0.60000002, s, &colorWhite, 5, font);
    smallDevFont = cls.smallDevFont;
    v17 = j_va("%u", *((unsigned int *)v12 - 2));
    CG_DrawDevString(ActivePlacement, v8 + 100.0, *(float *)&v10, 0.60000002, 0.60000002, v17, &colorWhite, 5, smallDevFont);
    v18 = cls.smallDevFont;
    v19 = j_va("%lu", *(_QWORD *)v12);
    v12 += 24;
    v20 = v10;
    *(float *)&v20 = *(float *)&v10 + (float)CG_DrawDevString(ActivePlacement, v8 + 130.0, *(float *)&v10, 0.60000002, 0.60000002, v19, &colorWhite, 5, v18);
    v10 = v20;
    --v13;
  }
  while ( v13 );
}

/*
==============
CG_DrawDebug_DrawTextWithBackground
==============
*/
void CG_DrawDebug_DrawTextWithBackground(const ScreenPlacement *scrPlace, const char *text, float x, float y, const float origRectW, const float origRectH, GfxFont *const font, const float fontScale, const vec4_t *shadowColor, const vec4_t *color)
{
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 

  v12 = origRectH - rectHeightOffset;
  v13 = (float)(y - rectHeightOffset) - origRectH;
  v14 = (float)(rectWidthOffset * 2.0) + origRectW;
  v15 = x - rectWidthOffset;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3568, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  CG_Draw2DRect(scrPlace, v15, v13, v14, v12, 1, 1, shadowColor, cgMedia.whiteMaterial);
  if ( text )
  {
    v16 = -1i64;
    do
      ++v16;
    while ( text[v16] );
    UI_DrawText(scrPlace, text, v16, font, x, y, 1, 1, fontScale, color, 0);
  }
}

/*
==============
CG_DrawDebug_DrawTransientQueueOverlay
==============
*/
void CG_DrawDebug_DrawTransientQueueOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  float v4; 
  float integer; 
  const ScreenPlacement *ActivePlacement; 
  CL_TransientsCollisionMP_PriorityMode PriorityMode; 
  float v8; 
  CL_TransientsCommonMP_PrioritizationFlags PrioritizationFlags; 
  char v10; 
  char *s; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  float v15; 
  float v16; 
  char dest[1024]; 

  v1 = DCONST_DVARBOOL_cg_drawTransientQueue;
  if ( DCONST_DVARBOOL_cg_drawTransientQueue )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_cg_drawTransientQueue);
    if ( v1->current.enabled )
    {
      v3 = DCONST_DVARINT_cg_drawTransientQueueXPos;
      if ( !DCONST_DVARINT_cg_drawTransientQueueXPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientQueueXPos") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      integer = (float)v3->current.integer;
      v4 = integer;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 7738, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      PriorityMode = CL_TransientsCollisionMP_GetPriorityMode();
      CG_DrawDevString(ActivePlacement, integer, 0.0, 0.5, 0.5, priorityModeNames[PriorityMode], &colorWhite, 5, cls.smallDevFont);
      v8 = (float)R_TextHeight(cls.smallDevFont);
      PrioritizationFlags = CL_TransientsCommonMP_GetPrioritizationFlags();
      v10 = PrioritizationFlags;
      if ( PrioritizationFlags )
      {
        v12 = (char *)&queryFormat.fmt + 3;
        v13 = (char *)&queryFormat.fmt + 3;
        if ( (v10 & 4) != 0 )
          v13 = "N";
        v14 = (char *)&queryFormat.fmt + 3;
        if ( (v10 & 2) != 0 )
          v14 = "D";
        if ( (v10 & 1) != 0 )
          v12 = (const char *)&EdgeOctree_BucketFlagsMask[3];
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "CommonMP Flags: %s%s%s", v12, v14, v13);
        s = dest;
      }
      else
      {
        s = "CommonMP Flags: <none>";
      }
      CG_DrawDevString(ActivePlacement, integer, v8 * 0.5, 0.5, 0.5, s, &colorWhite, 5, cls.smallDevFont);
      v15 = (float)R_TextHeight(cls.smallDevFont) + v8;
      v16 = (float)R_TextHeight(cls.smallDevFont);
      CL_TransientsMP_DebugDrawQueue(ActivePlacement, v4, (float)(v16 + v15) * 0.5);
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
  const dvar_t *v0; 
  float value; 
  GfxFont *FontHandle; 
  const char *BuildVersion; 
  float v4; 
  int v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float y; 
  float v11; 
  const char *v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const char *v17; 
  vec4_t color; 
  vec4_t v19; 

  if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3489, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
    __debugbreak();
  v0 = DVARFLT_cg_drawVersionFontScale;
  v19 = (vec4_t)_xmm;
  color = (vec4_t)_xmm;
  if ( !DVARFLT_cg_drawVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionFontScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  value = v0->current.value;
  FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, value);
  BuildVersion = Com_GetBuildVersion();
  v4 = (float)UI_TextWidth(BuildVersion, 0, FontHandle, value);
  v5 = UI_TextHeight(FontHandle, value);
  v6 = DVARFLT_cg_drawVersionY;
  v7 = (float)v5;
  if ( !DVARFLT_cg_drawVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = v7 + v6->current.value;
  v9 = DVARFLT_cg_drawVersionX;
  y = 1.0 - v8;
  if ( !DVARFLT_cg_drawVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v11 = v4 + v9->current.value;
  v12 = Com_GetBuildVersion();
  UI_DrawText(&scrPlaceFullUnsafe, v12, 0x7FFFFFFF, FontHandle, 1.0 - v11, y, 3, 3, value, &color, 0);
  v13 = DVARFLT_cg_drawVersionY;
  if ( !DVARFLT_cg_drawVersionY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = COERCE_FLOAT(LODWORD(v7) ^ _xmm) - v13->current.value;
  v15 = DVARFLT_cg_drawVersionX;
  if ( !DVARFLT_cg_drawVersionX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = COERCE_FLOAT(LODWORD(v4) ^ _xmm) - v15->current.value;
  v17 = Com_GetBuildVersion();
  UI_DrawText(&scrPlaceFullUnsafe, v17, 0x7FFFFFFF, FontHandle, v16, v14, 3, 3, value, &v19, 0);
}

/*
==============
CG_DrawDebug_DrawViewKickLog
==============
*/
void CG_DrawDebug_DrawViewKickLog(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  float v3; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  double v6; 
  double v7; 
  double v8; 
  float v9; 
  double v10; 
  DebugLogQueueManager *Instance; 
  const dvar_t *v12; 
  float viewKickMax; 
  float viewKickMin; 
  float viewKickScale; 
  usercmd_s ucmd; 
  char dest[1024]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals->predictedPlayerState.viewKickScale;
  memset_0(&ucmd, 0, sizeof(ucmd));
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
  BG_GetDamageViewKickScaleValues(&LocalClientGlobals->predictedPlayerState, &ucmd, &viewKickScale, &viewKickMin, &viewKickMax);
  v6 = I_fclamp(viewKickScale * 100.0, viewKickMin, viewKickMax);
  v7 = (float)(*(float *)&v6 * v3);
  v8 = I_fclamp(viewKickScale * 50.0, viewKickMin, viewKickMax);
  v9 = *(float *)&v8 * v3;
  v10 = I_fclamp(viewKickScale * 25.0, viewKickMin, viewKickMax);
  Com_sprintf(dest, 0x400ui64, "^3Player kick scale: ^4%.2f ^3bg_viewKickScale: ^4%.2f ^3bg_viewKickMin: ^4%.2f ^3bg_viewKickMax: ^4%.2f ^3Kick for 25 dmg: ^4%.2f ^3Kick for 50 dmg: ^4%.2f ^3Kick for 100 dmg: ^4%.2f", v3, viewKickScale, viewKickMin, viewKickMax, (float)(*(float *)&v10 * v3), v9, v7);
  Instance = DebugLogQueueManager::GetInstance();
  DebugLogQueueManager::SetInfoLineText(Instance, DEBUG_LOG_CAT_BEGIN, dest);
  v12 = DVARBOOL_debugViewKickLog;
  if ( !DVARBOOL_debugViewKickLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugViewKickLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  DebugLogQueueManager::SetVisibility(Instance, DEBUG_LOG_CAT_BEGIN, v12->current.enabled);
}

/*
==============
CG_DrawDebug_DrawViewmodelAnimList
==============
*/
void CG_DrawDebug_DrawViewmodelAnimList(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  PlayerWeaponAnimArrays *p_m_weaponAnimArrays; 
  const char ***v8; 
  int i; 
  const char *v10; 
  const char *v11; 
  const char **v12; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 
  char *fmt; 
  int destPos[4]; 
  char dest[4096]; 

  v2 = alloca(v1);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.19);
  p_m_weaponAnimArrays = &LocalClientGlobals->m_weaponAnimArrays;
  if ( !p_m_weaponAnimArrays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10321, ASSERT_TYPE_ASSERT, "(weaponAnimArrays)", (const char *)&queryFormat, "weaponAnimArrays") )
    __debugbreak();
  destPos[0] = 0;
  v8 = (const char ***)&p_m_weaponAnimArrays->normalAnimArray[236];
  for ( i = 236; i < 608; ++i )
  {
    v10 = "<empty>";
    v11 = "<empty>";
    if ( *v8 )
      v10 = **v8;
    v12 = v8[622];
    if ( !v12 || (v11 = *v12) != NULL && *v11 )
    {
      v13 = 0x7FFFFFFFi64;
      v14 = v11;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v15 = v14[v10 - v11];
        v16 = v13;
        v17 = *v14++;
        --v13;
        if ( !v16 )
          break;
        if ( v15 != v17 )
        {
          LODWORD(fmt) = i;
          Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "%d: %s, %s\n", fmt, v10, v11);
          goto LABEL_20;
        }
      }
      while ( v15 );
    }
    LODWORD(fmt) = i;
    Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "%d: %s\n", fmt, v10);
LABEL_20:
    if ( i > 0 && i == 125 * (i / 125) )
    {
      destPos[0] = i % 125;
      UI_DrawText(ActivePlacement, dest, 4096, FontHandle, (float)(i / 125 - 1) * 240.0, 0.0, 1, 1, 0.19, &colorWhite, 3);
    }
    ++v8;
  }
  UI_DrawText(ActivePlacement, dest, 4096, FontHandle, 480.0, 0.0, 1, 1, 0.19, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawViewmodelInfo
==============
*/
void CG_DrawDebug_DrawViewmodelInfo(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  __int64 v3; 
  const WeaponDef *v4; 
  int FrequencyIndex; 
  int v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  bool v16; 
  bool isWeaponDefault; 
  int EquippedWeaponIndex; 
  __int64 v19; 
  BOOL dualWielding; 
  XModel *WeaponModels; 
  double Time; 
  double v23; 
  const char *name; 
  ClientFov *ViewFovBySpace; 
  double v26; 
  Weapon *v27; 
  double ADSZoomLevelFraction; 
  const char *v29; 
  unsigned __int16 weaponIdx; 
  char *v31; 
  __int64 v32; 
  int v33; 
  int OffhandState; 
  const dvar_t *v35; 
  char *v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  const char *WeaponName; 
  __int64 v41; 
  double v42; 
  double v43; 
  double footstepWeight; 
  const dvar_t *v45; 
  double v46; 
  const dvar_t *v47; 
  double v48; 
  int v49; 
  int v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  XModel *gogglesModel; 
  const char *v57; 
  XModel *handModel; 
  const char *v59; 
  Weapon *v60; 
  float fWeaponPosFrac; 
  CgHandler *Handler; 
  ClientFov *v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  const dvar_t *v68; 
  double v69; 
  const dvar_t *v70; 
  double v71; 
  int v72; 
  int v73; 
  double fadeOutFrac; 
  double fadeInFrac; 
  double v76; 
  double v77; 
  cg_t *v78; 
  int weapAnim; 
  float v80; 
  float v81; 
  double v82; 
  double v83; 
  const char **p_name; 
  const char *v85; 
  const char **v86; 
  const char *v87; 
  const dvar_t *v88; 
  float value; 
  const dvar_t *v90; 
  float v91; 
  __int64 v92; 
  __int64 v93; 
  cg_t *v94; 
  int v95; 
  __int64 currentState; 
  __int64 v97; 
  unsigned int v98; 
  int v99; 
  __int64 v100; 
  unsigned int *p_index; 
  const char *p_animState; 
  int v103; 
  __int64 v104; 
  float *v105; 
  float v106; 
  const char *NameFromIndex; 
  const char *v108; 
  int v109; 
  __int64 v110; 
  cg_t *v111; 
  const char *v112; 
  const char *v113; 
  const char *v114; 
  const char *v115; 
  unsigned int v116; 
  const char *p_weaponState; 
  __int64 v118; 
  int v119; 
  const dvar_t *v120; 
  int v121; 
  int v122; 
  const ClipAmmo *ClipAmmoPtrConst; 
  CgHandler *v124; 
  const playerState_s *v125; 
  const WeaponHeat *v126; 
  double Heat; 
  __int64 v128; 
  unsigned int ShotCountForRecoil; 
  int v130; 
  const DObj **v131; 
  const char **v132; 
  __int64 v133; 
  __int64 v134; 
  playerState_s *v135; 
  BgWeaponMap *v136; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v138; 
  __int16 viewlocked_entNum; 
  int v140; 
  unsigned int v141; 
  unsigned int v142; 
  const DObj *v143; 
  __int64 v144; 
  CgEntitySystem *v145; 
  __int64 v146; 
  __int64 v147; 
  const char *v148; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 isUsingDetonator; 
  __int64 isUsingDetonatora; 
  __int64 isUsingCensorshipWorldModel; 
  __int64 isUsingCensorshipWorldModela; 
  __int64 vertAlign; 
  __int64 scale; 
  vec4_t *color; 
  __int64 style; 
  __int64 v160; 
  __int64 v161; 
  __int64 v162; 
  bool v163; 
  int v164; 
  int v165; 
  ClientFov result; 
  Weapon *r_weapon; 
  const char *v169; 
  float v170; 
  BgWeaponMap *weaponMap; 
  cg_t *cgameGlob; 
  __int64 v173; 
  double v174; 
  float v175; 
  double fraction; 
  BobCycle v177; 
  playerState_s *ps; 
  double v179; 
  double v180; 
  double v181; 
  double v182; 
  double v183; 
  double v184; 
  double v185; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  double viewHeightCurrent; 
  double v195; 
  double v196; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  double v199; 
  __int64 v200; 
  AmmoStore v201; 
  AmmoStore r_clipIndex; 
  GfxScopeInfo settingOut; 
  float outZoomLevelWeights; 
  float v205; 
  float v206; 
  float outBlendWeights[6]; 
  bool outAnimMissing[4]; 
  char v209; 
  char strBuffer[5]; 
  char v211[1019]; 
  char dest[1024]; 
  char output[1024]; 
  char v214[1024]; 
  char buffer[8192]; 
  char v216[1024]; 
  char v217[1024]; 
  char v218[1024]; 

  v2 = alloca(v1);
  v200 = -2i64;
  v3 = localClientNum;
  v4 = NULL;
  FrequencyIndex = 0;
  *(_DWORD *)outAnimMissing = 0;
  v6 = 0;
  v164 = 0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  _XMM0 = v9->current.unsignedInt;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_2);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  v175 = *(float *)&_XMM0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  cgameGlob = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[v3];
  r_weapon = (Weapon *)BG_GetViewmodelWeapon(weaponMap, p_predictedPlayerState);
  LODWORD(v173) = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, p_predictedPlayerState);
  scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
  font = UI_GetFontHandle(scrPlace, 6, v175);
  v16 = LocalClientGlobals != (cg_t *)-8i64 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu));
  v163 = v16;
  isWeaponDefault = LocalClientGlobals->playerWeaponInfo.isWeaponDefault;
  if ( !r_weapon->weaponIdx )
    goto LABEL_35;
  v4 = BG_WeaponDef(r_weapon, v16);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) )
    goto LABEL_32;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !r_weapon->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, p_predictedPlayerState, r_weapon), EquippedWeaponIndex < 0) || (v19 = EquippedWeaponIndex, (cg_t *)((char *)LocalClientGlobals + 4 * v19) == (cg_t *)-1548i64) )
LABEL_32:
    dualWielding = 0;
  else
    dualWielding = LocalClientGlobals->predictedPlayerState.weapEquippedData[v19].dualWielding;
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, r_weapon, 1, isWeaponDefault, dualWielding, 0, 0);
  FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, p_predictedPlayerState, 0);
  *(_DWORD *)outAnimMissing = FrequencyIndex;
  Time = BG_AdvancedIdle_GetTime(weaponMap, p_predictedPlayerState, 0);
  v7 = *(float *)&Time;
  v6 = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, p_predictedPlayerState, 1);
  v164 = v6;
  v23 = BG_AdvancedIdle_GetTime(weaponMap, p_predictedPlayerState, 1);
  v8 = *(float *)&v23;
  if ( WeaponModels )
    name = WeaponModels->name;
  else
LABEL_35:
    name = "none";
  ViewFovBySpace = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  v26 = *(double *)&ViewFovBySpace->finalFov;
  v174 = v26;
  result.baseFovAdjustment = ViewFovBySpace->baseFovAdjustment;
  *(double *)&result.finalFov = v26;
  v27 = r_weapon;
  ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(weaponMap, p_predictedPlayerState, r_weapon, v163, LocalClientGlobals->predictedPlayerState.serverTimeInterpolated);
  BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, &outZoomLevelWeights);
  v29 = "UNKNOWN";
  switch ( LocalClientGlobals->footstepEventType )
  {
    case EV_NONE:
      v29 = "NONE";
      break;
    case EV_FOOTSTEP_SUPERSPRINT:
      v29 = "SUPERSPRINT";
      break;
    case EV_FOOTSTEP_SPRINT:
      v29 = "SPRINT";
      break;
    case EV_FOOTSTEP_RUN:
      v29 = "RUN";
      break;
    case EV_FOOTSTEP_WALK:
      v29 = "WALK";
      break;
    case EV_FOOTSTEP_CREEP:
      v29 = "CREEP";
      break;
    case EV_FOOTSTEP_PRONE:
      v29 = "PRONE";
      break;
    default:
      break;
  }
  if ( v27->weaponCamo >= BG_Camo_GetCamoCount() )
  {
    LODWORD(isUsingCensorshipWorldModel) = BG_Camo_GetCamoCount();
    LODWORD(isUsingDetonator) = v27->weaponCamo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9607, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponCamo ) < (unsigned)( BG_Camo_GetCamoCount() )", "r_weapon.weaponCamo doesn't index BG_Camo_GetCamoCount()\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
      __debugbreak();
  }
  BobCycle::UnpackBobCycle(&v177, (const int (*)[2])LocalClientGlobals->predictedPlayerState.packedBobCycle);
  weaponIdx = LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon.weaponIdx;
  if ( weaponIdx )
    BG_GetWeaponName(&LocalClientGlobals->gestureWeapInfo.offhandGestureWeapon, output, 0x400u);
  v31 = output;
  if ( !weaponIdx )
    v31 = "none";
  v32 = 55i64;
  if ( weaponIdx )
    v32 = 50i64;
  v33 = Com_sprintf(dest, 0x400ui64, "^7Offhand Gesture Weapon: ^%c%s\n", v32, v31);
  OffhandState = CG_DrawDebug_GetOffhandState(LocalClientGlobals, &LocalClientGlobals->predictedPlayerState, dest, 1024, v33);
  CG_DrawDebug_GetOffhandGestureFlags(&LocalClientGlobals->predictedPlayerState, dest, 1024, OffhandState);
  v35 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.integer == 9 )
  {
    BG_GetWeaponName(r_weapon, v214, 0x400u);
    Com_sprintf(buffer, 0x2000ui64, "^7Weapon: ^2%s^7 - ^5%s\n", v214, name);
    BG_GetWeaponName(&LocalClientGlobals->weaponSelect, v216, 0x400u);
    v36 = v214;
    do
    {
      v37 = (unsigned __int8)v36[9216];
      v38 = (unsigned __int8)*v36 - v37;
      if ( v38 )
        break;
      ++v36;
    }
    while ( v37 );
    if ( v38 )
    {
      v39 = -1i64;
      do
        ++v39;
      while ( buffer[v39] );
      WeaponName = BG_GetWeaponName(&LocalClientGlobals->weaponSelect, v214, 0x400u);
      Com_sprintf(&buffer[(int)v39], 0x2000 - (int)v39, "^7Select: ^2%s\n", WeaponName);
    }
    v41 = -1i64;
    do
      ++v41;
    while ( buffer[v41] );
    v42 = v8;
    v43 = v7;
    footstepWeight = LocalClientGlobals->footstepWeight;
    v45 = DCONST_DVARMPFLT_bg_gunBobMax;
    if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    v46 = (float)(v45->current.value * v177.amplitudeRatioGun);
    v47 = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    v48 = (float)(v47->current.value * v177.amplitudeRatio);
    v49 = v177.maxGeneration + 1;
    v50 = v177.generation + 1;
    v51 = v206;
    v52 = v205;
    v53 = outZoomLevelWeights;
    v54 = *(float *)&v26;
    v55 = BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
    gogglesModel = cgameGlob->playerWeaponInfo.gogglesModel;
    if ( gogglesModel )
      v57 = gogglesModel->name;
    else
      v57 = "none";
    handModel = cgameGlob->playerWeaponInfo.handModel;
    if ( handModel )
      v59 = handModel->name;
    else
      v59 = "none";
    LODWORD(isUsingCensorshipWorldModel) = cgameGlob->time;
    LODWORD(isUsingDetonator) = cgameGlob->predictedPlayerState.weapCommon.offhandUseTime;
    LODWORD(fmt) = cgameGlob->predictedPlayerState.weapCommon.offhandGestureFireTime;
    Com_sprintf(&buffer[(int)v41], 0x2000 - (int)v41, "%s^7Offhand Gesture Fire Time: %d Use Time: %d Current Time: %d\n^7Hands: ^5%s\t\t^7Goggles: ^5%s\t\t^7ADS: ^5%.2f  ^7ADS (Not Reloading): ^5%.2f  ^7FOV: ^5%.0f ^7Zoom Weights [0]: ^5%.2f ^7[1]: ^5%.2f ^7[2]: ^5%.2f^7\n^7ViewBob Stride: ^5%i/%i^7, Cycle: ^5%i^7, Amp: ^5%0.2f^7, Gun Amp: ^5%0.2f^7, Step Wgt: ^5%.2f^7, Step Typ: ^5%s^7\n^7Idle1-Freq: ^5%d ^7Idle1-Time: ^5%.4f ^7Idle2-Freq: ^5%d ^7Idle2-Time: ^5%.4f\n^7---Anims---\n^3", dest, fmt, isUsingDetonator, isUsingCensorshipWorldModel, v59, v57, cgameGlob->predictedPlayerState.weapCommon.fWeaponPosFrac, *(float *)&v55, v54, v53, v52, v51, v50, v49, v177.animCycle, v48, v46, footstepWeight, v29, FrequencyIndex, v43, v6, v42);
  }
  else
  {
    v60 = r_weapon;
    BG_GetWeaponName(r_weapon, v218, 0x400u);
    BG_GetWeaponName(&LocalClientGlobals->weaponSelect, v217, 0x400u);
    strcpy(strBuffer, "none");
    memset_0(v211, 0, sizeof(v211));
    memset_0(output, 0, sizeof(output));
    if ( v60->weaponIdx )
    {
      CG_DrawDebug_BuildWeaponPatternWeightsString(LocalClientGlobals, weaponMap, &LocalClientGlobals->predictedPlayerState, v4, strBuffer, 1024, 1);
      CG_DrawDebug_BuildWeaponPatternWeightsString(LocalClientGlobals, weaponMap, &LocalClientGlobals->predictedPlayerState, v4, output, 1024, 0);
    }
    if ( *(_DWORD *)LocalClientGlobals->scopeToggleInfo.state >= 7u )
    {
      LODWORD(isUsingCensorshipWorldModel) = 7;
      LODWORD(isUsingDetonator) = *(_DWORD *)LocalClientGlobals->scopeToggleInfo.state;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 9671, ASSERT_TYPE_ASSERT, "(unsigned)( scopeToggleInfo.state ) < (unsigned)( ( sizeof( *array_counter( s_scopeToggleStateNames ) ) + 0 ) )", "scopeToggleInfo.state doesn't index ARRAY_COUNT( s_scopeToggleStateNames )\n\t%i not in [0, %i)", isUsingDetonator, isUsingCensorshipWorldModel) )
        __debugbreak();
    }
    memset_0(&settingOut, 0, sizeof(settingOut));
    fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
    Handler = CgHandler::getHandler(localClientNum);
    BG_GetScopeLensSettings(Handler, &LocalClientGlobals->predictedPlayerState, v60, v163, fWeaponPosFrac, &LocalClientGlobals->scopeToggleInfo.fractionInfo, &settingOut);
    if ( CG_View_ShouldRenderGunAtDifferentFov(LocalClientGlobals, &LocalClientGlobals->predictedPlayerState) )
    {
      v63 = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_DepthHack, 0);
      v64 = *(double *)&v63->finalFov;
      result.baseFovAdjustment = v63->baseFovAdjustment;
      *(double *)&result.finalFov = v64;
    }
    else
    {
      LODWORD(v64) = LODWORD(v26);
    }
    v65 = v8;
    v66 = v7;
    v67 = LocalClientGlobals->footstepWeight;
    v68 = DCONST_DVARMPFLT_bg_gunBobMax;
    if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v68);
    v69 = (float)(v68->current.value * v177.amplitudeRatioGun);
    v70 = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    v71 = (float)(v70->current.value * v177.amplitudeRatio);
    v72 = v177.maxGeneration + 1;
    v73 = v177.generation + 1;
    fadeOutFrac = settingOut.scopeFadeInfo[1].fadeOutFrac;
    fadeInFrac = settingOut.scopeFadeInfo[1].fadeInFrac;
    v76 = settingOut.scopeFadeInfo[0].fadeOutFrac;
    v77 = settingOut.scopeFadeInfo[0].fadeInFrac;
    fraction = LocalClientGlobals->scopeToggleInfo.fractionInfo.fraction;
    v78 = cgameGlob;
    v169 = s_scopeToggleStateNames[*(int *)cgameGlob->scopeToggleInfo.state];
    weapAnim = cgameGlob->predictedPlayerState.weapState[0].weapAnim;
    v199 = cgameGlob->predictedPlayerState.velocity.v[2];
    v80 = cgameGlob->predictedPlayerState.velocity.v[1];
    v179 = v80;
    v81 = cgameGlob->predictedPlayerState.velocity.v[0];
    v180 = v81;
    v181 = fsqrt((float)(v81 * v81) + (float)(v80 * v80));
    v182 = cgameGlob->predictedPlayerState.worldUpAngles.v[2];
    v183 = cgameGlob->predictedPlayerState.worldUpAngles.v[1];
    v184 = cgameGlob->predictedPlayerState.worldUpAngles.v[0];
    v185 = cgameGlob->predictedPlayerState.delta_angles.v[2];
    v186 = cgameGlob->predictedPlayerState.delta_angles.v[1];
    v187 = cgameGlob->predictedPlayerState.delta_angles.v[0];
    v188 = cgameGlob->predictedPlayerState.linkAngles.v[2];
    v189 = cgameGlob->predictedPlayerState.linkAngles.v[1];
    v190 = cgameGlob->predictedPlayerState.linkAngles.v[0];
    v191 = cgameGlob->predictedPlayerState.viewangles.v[2];
    v192 = cgameGlob->predictedPlayerState.viewangles.v[1];
    v193 = cgameGlob->predictedPlayerState.viewangles.v[0];
    v170 = *(float *)&cgameGlob->predictedPlayerState.viewHeightTarget;
    viewHeightCurrent = cgameGlob->predictedPlayerState.viewHeightCurrent;
    v195 = v206;
    v196 = v205;
    *(double *)&result.finalFov = outZoomLevelWeights;
    v174 = *(float *)&v174;
    v82 = *(float *)&v64;
    v83 = BG_WeaponADSFractionAffectedByReload(weaponMap, &cgameGlob->predictedPlayerState);
    p_name = &v78->playerWeaponInfo.gogglesModel->name;
    if ( p_name )
      v85 = *p_name;
    else
      v85 = "none";
    v86 = &v78->playerWeaponInfo.handModel->name;
    if ( v86 )
      v87 = *v86;
    else
      v87 = "none";
    Com_sprintf(buffer, 0x2000ui64, "^7Weapon: ^2%s^7 - ^5%s\n^7Select: ^2%s\n%s^7Offhand Gesture Fire Time: %d Use Time: %d Current Time: %d\n^7Hands: ^5%s\t\t^7Goggles: ^5%s\t\t^7ADS: ^5%.2f  ^7ADS (Not Reloading): ^5%.2f ^7Weapon FOV: ^5%.2f ^7FOV: ^5%.0f ^7Zoom Weights [0]: ^5%.2f ^7[1]: ^5%.2f ^7[2]: ^5%.2f^7\n^7ViewHeight: ^5Current: %.2f ^7Target: ^5%d ^7ViewAngles: (^5%.2f, %.2f, %.2f^7) ^7LinkAngles: (^5%.2f, %.2f, %.2f^7) ^7delta_angles: (^5%.2f, %.2f, %.2f^7) ^7worldUpAngles: (^5%.2f %.2f %.2f^7) velocity: ^5%0005.1f^7 : (^5%.2f, %.2f, %.2f^7) \n^7Right Hand Anim: ^5%d ^7Right Hand Anim With Toggle Bit: ^5%d\n%s%s^7Toggle Scope Anim State: ^5%s ^7Scope Fraction: ^5%.4f ^7Scope 1 Fade In: ^5%.4f ^7Fade Out: ^5%.4f ^7Scope 2 Fade In: ^5%.4f ^7Fade Out: ^5%.4f\n^7ViewBob Stride: ^5%i/%i^7, Cycle: ^5%i^7, Amp: ^5%0.2f^7, Gun Amp: ^5%0.2f^7, Step Wgt: ^5%.2f^7, Step Typ: ^5%s^7\n^7Idle1-Freq: ^5%d ^7Idle1-Time: ^5%.4f ^7Idle2-Freq: ^5%d ^7Idle2-Time: ^5%.4f\n^7---Anims---\n^3", v218, name, v217, dest, v78->predictedPlayerState.weapCommon.offhandGestureFireTime, v78->predictedPlayerState.weapCommon.offhandUseTime, v78->time, v87, v85, v78->predictedPlayerState.weapCommon.fWeaponPosFrac, *(float *)&v83, v82, v174, *(double *)&result.finalFov, v196, v195, viewHeightCurrent, v170, v193, v192, v191, v190, v189, v188, v187, v186, v185, v184, v183, v182, v181, v180, v179, v199, weapAnim & 0xFFFFFF7F, weapAnim, strBuffer, output, v169, fraction, v77, v76, fadeInFrac, fadeOutFrac, v73, v72, v177.animCycle, v71, v69, v67, v29, *(_DWORD *)outAnimMissing, v66, v164, v65);
  }
  v88 = DVARFLT_com_viewAnimCameraRotationScale;
  if ( !DVARFLT_com_viewAnimCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraRotationScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v88);
  value = v88->current.value;
  v90 = DVARFLT_com_viewAnimCameraTranslationScale;
  if ( !DVARFLT_com_viewAnimCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraTranslationScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  v91 = v90->current.value;
  if ( value != 1.0 || v91 != 1.0 )
  {
    v92 = -1i64;
    do
      ++v92;
    while ( buffer[v92] );
    Com_sprintf(&buffer[(int)v92], 0x2000 - (int)v92, "^7com_viewAnimCameraRotationScale: ^1%.2fx^7com_viewAnimCameraTranslationScale: ^1%.2fx\n", value, v91);
  }
  if ( r_weapon->weaponIdx )
  {
    v93 = -1i64;
    do
      ++v93;
    while ( buffer[v93] );
    v94 = cgameGlob;
    v95 = cgameGlob->predictedPlayerState.demeanorState.reEnterTime - cgameGlob->predictedPlayerState.serverTime;
    if ( v95 < 0 )
      v95 = 0;
    currentState = cgameGlob->predictedPlayerState.demeanorState.currentState;
    if ( (_DWORD)currentState == cgameGlob->predictedPlayerState.demeanorState.targetState )
      Com_sprintf(&buffer[(int)v93], 0x2000 - (int)v93, "^7Demeanor: ^5%s\n", s_demeanorStateNames[cgameGlob->predictedPlayerState.demeanorState.targetState]);
    else
      Com_sprintf(&buffer[(int)v93], 0x2000 - (int)v93, "^7Demeanor: ^5%s -> %s %.3f\n", s_demeanorStateNames[currentState], s_demeanorStateNames[cgameGlob->predictedPlayerState.demeanorState.targetState], (float)((float)v95 * 0.001));
    v97 = -1i64;
    do
      ++v97;
    while ( buffer[v97] );
    v98 = 0;
    v99 = v173;
    v100 = (int)v173;
    *(_QWORD *)&result.finalFov = (int)v173;
    p_index = &v94->predictedPlayerState.gestureState.gestures[0].index;
    p_animState = (const char *)&v94->gestureInfo.gestures[0][(int)v173].animState;
    v169 = p_animState;
    do
    {
      v103 = v99;
      v104 = v100;
      if ( v100 >= 0 )
      {
        v105 = (float *)p_animState;
        do
        {
          v106 = *v105;
          if ( *(_DWORD *)v105 )
          {
            NameFromIndex = BG_Gesture_GetNameFromIndex(*p_index);
            v106 = *v105;
          }
          else
          {
            NameFromIndex = "none";
          }
          v108 = "<ERROR>";
          if ( NameFromIndex )
            v108 = NameFromIndex;
          v109 = 76;
          if ( !v103 )
            v109 = 82;
          LODWORD(fmta) = v109;
          Com_sprintf(&buffer[(int)v97], 0x2000 - (int)v97, "^7Gesture[%d](%c): ^5%s(%s) %.3f  ", v98, fmta, s_gestureAnimationStateNames[SLODWORD(v106)], v108, *(v105 - 5));
          v110 = -1i64;
          do
            ++v110;
          while ( buffer[v110] );
          LODWORD(v97) = v110;
          --v103;
          v105 -= 19;
          --v104;
        }
        while ( v104 >= 0 );
        p_animState = v169;
        v100 = *(_QWORD *)&result.finalFov;
      }
      Com_sprintf(&buffer[(int)v97], 0x2000 - (int)v97, "\n");
      v97 = -1i64;
      do
        ++v97;
      while ( buffer[v97] );
      ++v98;
      p_animState += 152;
      v169 = p_animState;
      p_index += 8;
      v99 = v173;
    }
    while ( v98 < 2 );
    v111 = cgameGlob;
    CG_CalcSlopeAnimBlendWeights(cgameGlob, cgameGlob->prevWalkGroup, outBlendWeights, outAnimMissing);
    v112 = "^5";
    v113 = "^5";
    if ( v209 )
      v113 = "^8";
    v114 = "^5";
    if ( outAnimMissing[3] )
      v114 = "^8";
    v115 = "^5";
    if ( outAnimMissing[2] )
      v115 = "^8";
    if ( outAnimMissing[1] )
      v112 = "^8";
    Com_sprintf(&buffer[(int)v97], 0x2000 - (int)v97, "^7Slope: ^5%.3f^7, Stairs: ^5%.3f^7 | Weight Flat ^5%.2f^7, SlUp %s%.2f^7, SlDn %s%.2f^7, StUp %s%.2f^7, StDn: %s%.2f^7\n", v111->slopeAnimBlend, v111->stairsAnimBlend, outBlendWeights[0], v112, outBlendWeights[1], v115, outBlendWeights[2], v114, outBlendWeights[3], v113, outBlendWeights[4]);
    v116 = 0;
    v165 = 0;
    if ( v100 >= 0 )
    {
      v173 = 64i64;
      p_weaponState = (const char *)&v111->predictedPlayerState.weapState[0].weaponState;
      v169 = (const char *)&v111->predictedPlayerState.weapState[0].weaponState;
      *(_QWORD *)&fraction = v111->m_weaponHand;
      *(_QWORD *)&v174 = v100 + 1;
      v118 = 64i64;
      do
      {
        if ( v116 >= 2 )
        {
          LODWORD(isUsingCensorshipWorldModela) = 2;
          LODWORD(isUsingDetonatora) = v116;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
            __debugbreak();
        }
        LODWORD(v170) = BG_GetSprintOutInterruptRemaining(weaponMap, &v111->predictedPlayerState);
        v119 = 0;
        v120 = DVARBOOL_killswitch_rechamber_fix_enabled;
        if ( !DVARBOOL_killswitch_rechamber_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_rechamber_fix_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v120);
        if ( v120->current.enabled )
        {
          v119 = 0;
          if ( *((_DWORD *)p_weaponState + 3) - v111->predictedPlayerState.serverTime > 0 )
            v119 = *((_DWORD *)p_weaponState + 3) - v111->predictedPlayerState.serverTime;
        }
        v121 = 0;
        v122 = 0;
        r_clipIndex = *BG_AmmoStoreForWeapon(&v201, r_weapon, v163);
        ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(&v111->predictedPlayerState, &r_clipIndex);
        if ( ClipAmmoPtrConst )
        {
          v121 = *(_DWORD *)&ClipAmmoPtrConst->clipIndex.weapon.weaponAttachments[v118 + 2];
          v122 = *(_DWORD *)((char *)&ClipAmmoPtrConst->clipIndex.weapon.weaponIdx + v118);
        }
        v124 = CgHandler::getHandler(localClientNum);
        v125 = &v111->predictedPlayerState;
        v126 = v124->GetPlayerWeaponHeat(v124, &v111->predictedPlayerState, r_weapon, (PlayerHandIndex)v116);
        Heat = BG_Heat_GetHeat(v126, r_weapon, v163, v111->predictedPlayerState.serverTime);
        v128 = -1i64;
        do
          ++v128;
        while ( buffer[v128] );
        ShotCountForRecoil = BG_GetShotCountForRecoil(v125);
        v130 = 76;
        if ( !v165 )
          v130 = 82;
        LODWORD(v162) = v122;
        LODWORD(v161) = v121;
        LODWORD(v160) = ShotCountForRecoil;
        LODWORD(style) = *((_DWORD *)v169 + 4);
        LODWORD(color) = v119;
        *(float *)&scale = v170;
        LODWORD(vertAlign) = *((_DWORD *)v169 - 5);
        LODWORD(isUsingCensorshipWorldModela) = *((_DWORD *)v169 - 3);
        LODWORD(isUsingDetonatora) = *((_DWORD *)v169 - 4);
        LODWORD(fmtb) = v130;
        Com_sprintf(&buffer[(int)v128], 0x2000 - (int)v128, "^6%s(%c) : time %i, delay %i, jitter %i, sprntIntr %i, rechmbrBlk %i, shot %i, shotRecoil %i, mag %i, chamber %i, heat %.2f\n^7", s_weaponStateNames[*(int *)v169], fmtb, isUsingDetonatora, isUsingCensorshipWorldModela, vertAlign, scale, color, style, v160, v161, v162, *(float *)&Heat);
        v131 = *(const DObj ***)&fraction;
        v132 = *(const char ***)(*(_QWORD *)&fraction + 16i64);
        if ( v132 )
        {
          v133 = -1i64;
          do
            ++v133;
          while ( buffer[v133] );
          Com_sprintf(&buffer[(int)v133], 0x2000 - (int)v133, "^7Rocket: ^5%s\n^3", *v132);
        }
        v134 = -1i64;
        do
          ++v134;
        while ( buffer[v134] );
        DObjDisplayAnimToBuffer(*v131, (const char *)&queryFormat.fmt + 3, &buffer[(int)v134], 0x2000 - v134);
        v135 = ps;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v136 = weaponMap;
        if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        ViewmodelWeapon = BG_GetViewmodelWeapon(v136, v135);
        v138 = BG_WeaponDef(ViewmodelWeapon, 0);
        v111 = cgameGlob;
        if ( v138->weapClass == WEAPCLASS_TURRET && v138->useTurretViewmodelAnims )
        {
          viewlocked_entNum = cgameGlob->predictedPlayerState.viewlocked_entNum;
          if ( viewlocked_entNum != 2047 )
          {
            v140 = viewlocked_entNum;
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
            v141 = 2533 * localClientNum + v140;
            if ( v141 >= 0x13CA )
            {
              LODWORD(isUsingCensorshipWorldModela) = v141;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", isUsingCensorshipWorldModela) )
                __debugbreak();
            }
            v142 = clientObjMap[v141];
            if ( v142 )
            {
              if ( v142 >= (unsigned int)s_objCount )
              {
                LODWORD(isUsingCensorshipWorldModela) = v142;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", isUsingCensorshipWorldModela) )
                  __debugbreak();
              }
              v143 = (const DObj *)s_objBuf[v142];
              if ( v143 )
              {
                v144 = v111->predictedPlayerState.viewlocked_entNum;
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
                v145 = CgEntitySystem::ms_entitySystemArray[localClientNum];
                if ( (unsigned int)v144 >= 0x800 )
                {
                  LODWORD(isUsingCensorshipWorldModela) = 2048;
                  LODWORD(isUsingDetonatora) = v144;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", isUsingDetonatora, isUsingCensorshipWorldModela) )
                    __debugbreak();
                }
                v146 = (__int64)&v145->m_entities[v144];
                if ( (*(_BYTE *)(v146 + 648) & 1) != 0 )
                {
                  v147 = -1i64;
                  do
                    ++v147;
                  while ( buffer[v147] );
                  CG_GetPoseOrigin((const cpose_t *)v146, (vec3_t *)&result);
                  v148 = j_va("\n\nclient %d: (%.1f,%.1f,%.1f), (%.1f,%.1f,%.1f)\n", (unsigned int)localClientNum, result.finalFov, result.baseFov, result.baseFovAdjustment, *(float *)(v146 + 72), *(float *)(v146 + 76), *(float *)(v146 + 80));
                  DObjDisplayAnimToBuffer(v143, v148, &buffer[(int)v147], 0x2000 - v147);
                  memset(&result, 0, sizeof(result));
                }
              }
            }
          }
        }
        v116 = ++v165;
        v118 = v173 + 4;
        v173 += 4i64;
        *(_QWORD *)&fraction = v131 + 5;
        p_weaponState = v169 + 80;
        v169 += 80;
        --*(_QWORD *)&v174;
      }
      while ( v174 != 0.0 );
    }
  }
  UI_DrawText(scrPlace, buffer, 0x2000, font, 0.0, 20.0, 1, 1, v175, &colorWhite, 3);
}

/*
==============
CG_DrawDebug_DrawViewmodelSwimDragInfo
==============
*/
void CG_DrawDebug_DrawViewmodelSwimDragInfo(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float value; 
  cg_t *LocalClientGlobals; 
  vec4_t v5; 
  vec3_t forward; 
  vec3_t up; 
  vec4_t color; 

  v1 = DCONST_DVARFLT_player_swimDragHandLookAtOffset;
  if ( !DCONST_DVARFLT_player_swimDragHandLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimDragHandLookAtOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  AngleVectors(&LocalClientGlobals->predictedPlayerState.viewangles, &forward, NULL, &up);
  forward.v[0] = (float)(value * forward.v[0]) + LocalClientGlobals->predictedPlayerState.origin.v[0];
  forward.v[1] = (float)(value * forward.v[1]) + LocalClientGlobals->predictedPlayerState.origin.v[1];
  forward.v[2] = (float)(value * forward.v[2]) + LocalClientGlobals->predictedPlayerState.origin.v[2];
  CL_AddDebugLine(&LocalClientGlobals->predictedPlayerState.origin, &forward, &colorOrange, 0, 0, 0);
  CL_AddDebugLine(&LocalClientGlobals->predictedPlayerState.origin, &LocalClientGlobals->lastDragPosition, &colorRed, 0, 0, 0);
  if ( (float)((float)((float)((float)(LocalClientGlobals->lastDragPosition.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0]) * up.v[0]) + (float)((float)(LocalClientGlobals->lastDragPosition.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1]) * up.v[1])) + (float)((float)(LocalClientGlobals->lastDragPosition.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2]) * up.v[2])) < 0.0 )
    v5 = colorGreen;
  else
    v5 = colorBlue;
  color = v5;
  CL_AddDebugLine(&forward, &LocalClientGlobals->lastDragPosition, &color, 0, 0, 0);
}

/*
==============
CG_DrawDebug_DrawWorldUpDisplay
==============
*/
void CG_DrawDebug_DrawWorldUpDisplay(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  int m_movingPlatformEntity; 
  float v11; 
  float v12; 
  float v13; 
  centity_t *Entity; 
  CgAntiLag *Instance; 
  int serverTime; 
  int clientNum; 
  bool v18; 
  bool v19; 
  const vec4_t *v20; 
  const vec4_t *v21; 
  const vec4_t *v22; 
  _BOOL8 v23; 
  bool IsPlayerZeroG; 
  bool IsPlayerZeroGWalking; 
  int pm_type; 
  __int64 v27; 
  vec3_t outUp; 
  vec3_t up; 
  vec3_t outAngles; 
  WorldUpReferenceFrame v31; 
  BgAntiLagEntityInfo outInfo; 
  char dest[256]; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 

  v4 = DVARBOOL_moverDebug;
  if ( !DVARBOOL_moverDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moverDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals )
    {
      v36 = v1;
      v35 = v2;
      v34 = v3;
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10833, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      Com_sprintf(dest, 0x100ui64, "World Up Debug");
      CG_DrawStringExt(ActivePlacement, 2.0, 8.0, dest, &colorYellow, 0, 1, 8.0, 0);
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v31, &LocalClientGlobals->predictedPlayerState, Handler);
      WorldUpReferenceFrame::GetAngles(&v31, &outAngles);
      BGMovingPlatformClient::ResolvePlatformUp(&LocalClientGlobals->movingPlatforms, &LocalClientGlobals->predictedPlayerState, &outUp);
      m_movingPlatformEntity = LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity;
      v11 = (float)((float)(v31.m_axis.m[2].v[0] * outUp.v[0]) + (float)(v31.m_axis.m[2].v[1] * outUp.v[1])) + (float)(v31.m_axis.m[2].v[2] * outUp.v[2]);
      v12 = 0.0;
      v13 = 0.0;
      if ( BGMovingPlatforms::IsMovingPlatform(p_predictedPlayerState->movingPlatforms.m_movingPlatformEntity) )
      {
        Entity = CG_GetEntity(localClientNum, m_movingPlatformEntity);
        AngleVectors(&Entity->pose.angles, NULL, NULL, &up);
        v12 = (float)((float)(v31.m_axis.m[2].v[0] * up.v[0]) + (float)(v31.m_axis.m[2].v[1] * up.v[1])) + (float)(v31.m_axis.m[2].v[2] * up.v[2]);
        Instance = CgAntiLag::GetInstance(localClientNum);
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10884, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
          __debugbreak();
        serverTime = p_predictedPlayerState->serverTime;
        clientNum = p_predictedPlayerState->clientNum;
        outInfo.boneInfo.boneList.m_usedSize = 0;
        outInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(Instance, clientNum, m_movingPlatformEntity, 8u, serverTime, &outInfo);
        v13 = fsqrt((float)((float)(outInfo.velocity.v[0] * outInfo.velocity.v[0]) + (float)(outInfo.velocity.v[1] * outInfo.velocity.v[1])) + (float)(outInfo.velocity.v[2] * outInfo.velocity.v[2]));
      }
      Com_sprintf(dest, 0x100ui64, "Mover ID (Client):\t\t\t\t\t%d", (unsigned int)p_predictedPlayerState->movingPlatforms.m_movingPlatformEntity);
      CG_DrawStringExt(ActivePlacement, 4.0, 16.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "Mover ID (Server):\t\t\t\t\t%d", (unsigned int)g_serverMoverDebugMoverID);
      CG_DrawStringExt(ActivePlacement, 4.0, 24.0, dest, &colorWhite, 0, 1, 8.0, 0);
      v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0xDu);
      Com_sprintf(dest, 0x100ui64, "Mover Push:\t\t\t\t\t\t\t%d", v18);
      CG_DrawStringExt(ActivePlacement, 4.0, 32.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "Mover Speed:\t\t\t\t\t\t\t%f", v13);
      CG_DrawStringExt(ActivePlacement, 4.0, 40.0, dest, &colorWhite, 0, 1, 8.0, 0);
      v19 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0xFu);
      Com_sprintf(dest, 0x100ui64, "Mover Track:\t\t\t\t\t\t\t%d", v19);
      CG_DrawStringExt(ActivePlacement, 4.0, 48.0, dest, &colorWhite, 0, 1, 8.0, 0);
      v20 = &colorRed;
      if ( g_serverMoverDebugSkeletonMismatch )
      {
        Com_sprintf(dest, 0x100ui64, "Mover Sub Skeletal Mismatch:\t\t%d", (unsigned int)g_serverMoverDebugSkeletonMismatch);
        v21 = &colorRed;
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Mover Sub Skeletal Mismatch:\t\t%d", 0i64);
        v21 = &colorWhite;
      }
      CG_DrawStringExt(ActivePlacement, 4.0, 56.0, dest, v21, 0, 1, 8.0, 0);
      if ( g_serverMoverDebugRigidBodyMismatch )
      {
        Com_sprintf(dest, 0x100ui64, "Mover Rigid Body Mismatch:\t\t%d", (unsigned int)g_serverMoverDebugRigidBodyMismatch);
        v22 = &colorRed;
      }
      else
      {
        Com_sprintf(dest, 0x100ui64, "Mover Rigid Body Mismatch:\t\t%d", 0i64);
        v22 = &colorWhite;
      }
      CG_DrawStringExt(ActivePlacement, 4.0, 64.0, dest, v22, 0, 1, 8.0, 0);
      if ( g_serverMoverWorldUpInvalid )
      {
        v23 = g_serverMoverWorldUpInvalid;
      }
      else
      {
        v20 = &colorWhite;
        v23 = 0i64;
      }
      Com_sprintf(dest, 0x100ui64, "Mover World Up Invalid:\t\t\t%d", v23);
      CG_DrawStringExt(ActivePlacement, 4.0, 72.0, dest, v20, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "World Up Ent Num:\t\t\t\t\t\t%d", (unsigned int)p_predictedPlayerState->worldUpRefEnt);
      CG_DrawStringExt(ActivePlacement, 4.0, 80.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "World Up To Mover Dot:\t\t\t\t%f", v12);
      CG_DrawStringExt(ActivePlacement, 4.0, 88.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "World Up To Pmove Platform Up Dot:\t%f", v11);
      CG_DrawStringExt(ActivePlacement, 4.0, 96.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "Wrold Up Player State Angles:\t\t\t%f %f %f", p_predictedPlayerState->worldUpAngles.v[0], p_predictedPlayerState->worldUpAngles.v[1], p_predictedPlayerState->worldUpAngles.v[2]);
      CG_DrawStringExt(ActivePlacement, 4.0, 104.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "World Up Total Angles:\t\t\t\t%f %f %f", outAngles.v[0], outAngles.v[1], outAngles.v[2]);
      CG_DrawStringExt(ActivePlacement, 4.0, 112.0, dest, &colorWhite, 0, 1, 8.0, 0);
      IsPlayerZeroG = BG_IsPlayerZeroG(p_predictedPlayerState);
      Com_sprintf(dest, 0x100ui64, "Zero G. Active:\t\t\t\t\t\t%d", IsPlayerZeroG);
      CG_DrawStringExt(ActivePlacement, 4.0, 120.0, dest, &colorWhite, 0, 1, 8.0, 0);
      IsPlayerZeroGWalking = BG_IsPlayerZeroGWalking(p_predictedPlayerState);
      Com_sprintf(dest, 0x100ui64, "Zero G. Walking:\t\t\t\t\t\t%d", IsPlayerZeroGWalking);
      CG_DrawStringExt(ActivePlacement, 4.0, 128.0, dest, &colorWhite, 0, 1, 8.0, 0);
      pm_type = p_predictedPlayerState->pm_type;
      if ( pm_type == 1 || (v27 = 0i64, pm_type == 8) )
        v27 = 1i64;
      Com_sprintf(dest, 0x100ui64, "Player Linked:\t\t\t\t\t\t%d", v27);
      CG_DrawStringExt(ActivePlacement, 4.0, 136.0, dest, &colorWhite, 0, 1, 8.0, 0);
      Com_sprintf(dest, 0x100ui64, "Player Link Angles:\t\t\t\t\t%f %f %f", p_predictedPlayerState->linkAngles.v[0], p_predictedPlayerState->linkAngles.v[1], p_predictedPlayerState->linkAngles.v[2]);
      CG_DrawStringExt(ActivePlacement, 4.0, 144.0, dest, &colorWhite, 0, 1, 8.0, 0);
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
  __m128 v3; 
  DObj *ClientDObj; 
  const DObj *v8; 
  const XAnimTree *tree; 
  const cpose_t *PoseExtended; 
  __m128 v11; 
  int v12; 
  float v13; 
  __m128 v14; 
  __m128 v15; 
  __int32 v16; 
  __int32 v17; 
  __int32 v18; 
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
        *(double *)v3.m128_u64 = XAnimGetClientLodFloat(v8);
        v11 = (__m128)colorGreen;
        v12 = (int)v3.m128_f32[0];
        v13 = v3.m128_f32[0];
        if ( (unsigned __int8)(int)v3.m128_f32[0] )
        {
          if ( (unsigned __int8)v12 == 1 )
          {
            v14 = (__m128)colorOrange;
          }
          else if ( (unsigned __int8)v12 == 2 )
          {
            v14 = (__m128)colorYellow;
          }
          else
          {
            v14 = (__m128)colorGreen;
          }
        }
        else
        {
          v14 = (__m128)colorRed;
        }
        if ( (_BYTE)v12 )
        {
          if ( (unsigned __int8)v12 == 1 )
            v11 = (__m128)colorYellow;
        }
        else
        {
          v11 = (__m128)colorOrange;
        }
        dest[0] = 0;
        v15 = v3;
        v15.m128_f32[0] = v3.m128_f32[0] - (float)(unsigned __int8)(int)v3.m128_f32[0];
        outOrigin.v[2] = outOrigin.v[2] + 60.0;
        color = (vec4_t)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v11, v14), _mm_shuffle_ps(v15, v15, 0)), v14);
        v16 = infoType - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( !v18 )
            {
              CG_DebugStar(&outOrigin, &color, 0, 0);
              return;
            }
            if ( v18 == 1 )
              Com_sprintf(dest, 0x80ui64, "%.2f g:%d t:%.2f d:%d", v3.m128_f32[0], SHIBYTE(tree->lodState.goalLod), (float)((float)tree->lodState.blendTimeLeft * 0.001), tree->lodState.distance);
          }
          else
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, eax }
            Com_sprintf(dest, 0x80ui64, "%.2f %.0f", v13, *(double *)&_XMM0);
          }
        }
        else
        {
          Com_sprintf(dest, 0x80ui64, "%.2f", v3.m128_f32[0]);
        }
        CG_DebugStarWithText(&outOrigin, &color, &color, dest, 0.75, 0);
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const dvar_t *v4; 
  int integer; 
  int v6; 
  __int64 v7; 
  CgEntitySystem *v8; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 ignoreArbitraryUp; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t right; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  BG_GetPlayerEyePosition(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
  BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, &forward, &right, NULL, Handler, 0);
  v4 = DCONST_DVARINT_cg_drawDebugAnimLodInfo;
  if ( !DCONST_DVARINT_cg_drawDebugAnimLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer > 0 )
  {
    v6 = 0;
    v7 = 0i64;
    do
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v20) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
        LODWORD(ignoreArbitraryUp) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", ignoreArbitraryUp, v20) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v1] )
      {
        LODWORD(v20) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
          __debugbreak();
      }
      v8 = CgEntitySystem::ms_entitySystemArray[v1];
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v20) = 2048;
        LODWORD(ignoreArbitraryUp) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", ignoreArbitraryUp, v20) )
          __debugbreak();
      }
      if ( (v8->m_entities[v7].flags & 1) != 0 && Handler->GetEntityOrigin(Handler, v6, (vec3_t *)&v21) )
      {
        v9 = v21 - outOrigin.v[0];
        v12 = LODWORD(v22);
        v10 = v22 - outOrigin.v[1];
        v11 = v23 - outOrigin.v[2];
        *(float *)&v12 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
        if ( *(float *)&v12 >= 0.001 )
        {
          *(float *)&v12 = fsqrt(*(float *)&v12);
          _XMM1 = v12;
          __asm
          {
            vcmpless xmm0, xmm1, xmm10
            vblendvps xmm0, xmm1, xmm9, xmm0
          }
          *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
          v13 = v9 * (float)(1.0 / *(float *)&_XMM0);
          v14 = v10 * *(float *)&_XMM1;
          v15 = v11 * *(float *)&_XMM1;
        }
        else
        {
          v13 = 0.0;
          v14 = 0.0;
          v15 = 0.0;
        }
        if ( (float)((float)((float)(v13 * forward.v[0]) + (float)(v14 * forward.v[1])) + (float)(v15 * forward.v[2])) >= 0.0 )
          CG_DrawDebug_DrawXAnimLodInfo((const LocalClientNum_t)v1, v6, (CgDebugDrawAnimLodInfoType)integer);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 2048 );
  }
}

/*
==============
CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo
==============
*/
void CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int bufferPos[4]; 
  char buffer[4096]; 

  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    bufferPos[0] = 0;
    XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer(buffer, bufferPos, 0x1000ui64);
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.25);
    UI_DrawText(ActivePlacement, buffer, 4096, FontHandle, 0.0, 20.0, 1, 1, 0.25, &colorWhite, 3);
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
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  __int64 v18; 
  const char *v19; 
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
        info_usage = (*p_tree)->info_usage;
        outOrigin.v[2] = outOrigin.v[2] + 72.0;
        if ( info_usage >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2074, ASSERT_TYPE_ASSERT, "(numAnims < 256)", "%s\n\tMax number of used anims reached for entity %d", "numAnims < XANIM_BYTE_MAX", v3) )
          __debugbreak();
        XAnimTreeCountCustomNode(*p_tree, (*p_tree)->children, &numCustomNodes, &numAnimInfoNodes);
        v11 = numCustomNodes;
        v12 = numAnimInfoNodes;
        v13 = info_usage;
        LOBYTE(v14) = numCustomNodes;
        LOBYTE(v15) = numAnimInfoNodes;
        if ( g_maxNumAnims[v3] > (unsigned __int8)info_usage )
          v13 = g_maxNumAnims[v3];
        v16 = g_maxNumCustomNodes[v3];
        g_maxNumAnims[v3] = v13;
        if ( v16 > (unsigned __int8)v11 )
          LOBYTE(v14) = v16;
        v17 = g_maxNumAnimInfoNodes[v3];
        g_maxNumCustomNodes[v3] = v14;
        if ( v17 > (unsigned __int8)v12 )
          LOBYTE(v15) = v17;
        g_maxNumAnimInfoNodes[v3] = v15;
        if ( ismax )
        {
          v15 = (unsigned __int8)v15;
          v14 = (unsigned __int8)v14;
          v18 = v13;
        }
        else
        {
          v15 = v12;
          v14 = v11;
          v18 = (unsigned int)info_usage;
        }
        v19 = j_va("%i anims, %i custom, %i anim info", v18, v14, v15);
        CL_AddDebugString(&outOrigin, &colorGreen, 0.5, v19, 0, 1);
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
  bool v3; 
  __m256i v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 

  v5 = _ymm;
  v3 = r_debugDrawLights->current.integer == 1;
  v7 = 0.0;
  v8 = FLOAT_1_0;
  v9 = 0.0;
  v6 = _xmm;
  if ( v3 )
  {
    LODWORD(result->v[0]) = v5.m256i_i32[3 * type];
    LODWORD(result->v[1]) = v5.m256i_i32[3 * type + 1];
    LODWORD(result->v[2]) = v5.m256i_i32[3 * type + 2];
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
        *outColor = colorYellow;
      else
        *outColor = colorGreen;
    }
    else
    {
      *outColor = colorOrange;
    }
  }
  else
  {
    *outColor = colorRed;
  }
}

/*
==============
CG_DrawDebug_Infils
==============
*/
void CG_DrawDebug_Infils(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  cg_t *LocalClientGlobals; 
  int i; 
  const dvar_t *v5; 
  int integer; 
  CgStatic *LocalClientStatics; 
  const cg_t *v8; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v11; 
  const char *v12; 
  __int64 v13; 
  int linkEnt; 
  centity_t *v15; 
  const centity_t *v16; 
  int v17; 
  int *v18; 
  __int64 v19; 
  const char *v20; 
  int numParents; 
  vec3_t point; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  int parentIds[100]; 

  v1 = DCONST_DVARBOOL_cg_debugInfil;
  if ( !DCONST_DVARBOOL_cg_debugInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals )
    {
      for ( i = 0; ; ++i )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          return;
        v5 = DCONST_DVARINT_cg_debugInfil_Character;
        if ( !DCONST_DVARINT_cg_debugInfil_Character && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfil_Character") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        integer = v5->current.integer;
        if ( integer < 0 || integer == i )
        {
          LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
          v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          CharacterInfo = CG_GetCharacterInfo(v8, i);
          if ( CharacterInfo )
          {
            if ( CharacterInfo->infoValid )
            {
              Entity = CG_GetEntity(localClientNum, i);
              v11 = Entity;
              if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) && !CG_Entity_IsNoDraw(localClientNum, &v11->nextState, NULL) )
                break;
            }
          }
        }
LABEL_35:
        ;
      }
      AnglesToAxis(&v11->pose.angles, &axis);
      CG_GetPoseOrigin(&v11->pose, &outOrigin);
      CG_DebugAxis(&axis, &outOrigin, INFIL_DEBUG_AXIS_LENGTH, 0, 0);
      point.v[0] = outOrigin.v[0];
      point.v[1] = outOrigin.v[1];
      point.v[2] = outOrigin.v[2] + 70.0;
      v12 = j_va("%d", (unsigned int)v11->nextState.number);
      CG_DebugString(&point, &colorWhite, 0.5, v12, 0, 0);
      numParents = 0;
      if ( LocalClientGlobals->clientNum == i )
      {
        AnglesToAxis(&LocalClientGlobals->predictedPlayerState.linkAngles, &axis);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_thirdPerson, "bg_thirdPerson") )
        {
          point.v[2] = point.v[2] + 10.0;
          CG_DebugString(&point, &colorRed, 0.2, "Debug 3P client will be incorrect in infil.", 0, 0);
        }
        v13 = numParents;
        linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
        ++numParents;
        parentIds[v13] = linkEnt;
        if ( (__int16)linkEnt <= 0 )
          goto LABEL_32;
        v15 = CG_GetEntity(localClientNum, linkEnt);
        if ( (v15->flags & 1) == 0 )
          goto LABEL_32;
        v16 = v15;
      }
      else
      {
        v16 = v11;
      }
      CG_DebugInfils_DrawParent(localClientNum, v16, parentIds, &numParents);
LABEL_32:
      v17 = 0;
      if ( numParents > 0 )
      {
        v18 = parentIds;
        do
        {
          v19 = (unsigned int)*v18;
          point.v[2] = point.v[2] + 10.0;
          v20 = j_va("%d", v19);
          CG_DebugString(&point, &colorWhite, 0.5, v20, 0, 0);
          ++v17;
          ++v18;
        }
        while ( v17 < numParents );
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
  __m256i *v6; 
  __m256i v7; 
  __time64_t Time; 

  v4 = s_debugZoneLoadAction;
  if ( (unsigned __int8)action > (unsigned __int8)s_debugZoneLoadAction )
    v4 = action;
  s_debugZoneLoadAction = v4;
  MyChanges_ActionMessage = DB_GetMyChanges_ActionMessage(action);
  Com_PrintWarning(13, "[mychanges] Asset (%s) Action : %s\n", name, MyChanges_ActionMessage);
  Time = _time64(NULL);
  v6 = (__m256i *)_localtime64(&Time);
  v7 = *v6;
  LODWORD(v6) = v6[1].m256i_i32[0];
  *(__m256i *)&s_debugZoneAssetLoadTime.tm_sec = v7;
  s_debugZoneAssetLoadTime.tm_isdst = (int)v6;
}

/*
==============
CG_DrawDebug_OverlayTitle
==============
*/
void CG_DrawDebug_OverlayTitle()
{
  const dvar_t *v0; 
  const char *string; 
  __int64 v2; 
  const dvar_t *v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  GfxFont *FontHandle; 
  float v11; 
  vec4_t expandedColor; 

  v0 = DVARSTR_cg_drawTitleString;
  if ( !DVARSTR_cg_drawTitleString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleString") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  v2 = -1i64;
  do
    ++v2;
  while ( string[v2] );
  if ( v2 )
  {
    v3 = DVARFLT_cg_drawTitleX;
    if ( !DVARFLT_cg_drawTitleX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    v5 = DVARFLT_cg_drawTitleY;
    if ( !DVARFLT_cg_drawTitleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = v5->current.value;
    v7 = DVARFLT_cg_drawTitleSize;
    if ( !DVARFLT_cg_drawTitleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.value;
    v9 = DVARCLR_cg_drawTitleColor;
    if ( !DVARCLR_cg_drawTitleColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 763, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTitleColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    Dvar_GetUnpackedColor(v9, &expandedColor);
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8507, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 0, 0.58333331);
    v11 = (float)UI_TextHeight(FontHandle, v8);
    UI_DrawText(&scrPlaceFullUnsafe, string, 0x7FFFFFFF, FontHandle, value, v11 + v6, 4, 4, v8, &expandedColor, 3);
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
  const dvar_t *v1; 
  float value; 
  const dvar_t *v3; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const dvar_t *v7; 
  int v8; 
  float v9; 
  float Int_Internal_DebugName; 
  float v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v15; 
  __int64 v16; 
  __int128 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int128 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 

  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && localClientNum == LOCAL_CLIENT_0 )
  {
    v1 = DCONST_DVARFLT_playerasm_debugExecutionTextScale;
    if ( !DCONST_DVARFLT_playerasm_debugExecutionTextScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugExecutionTextScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    value = v1->current.value;
    v3 = DCONST_DVARINT_playerasm_debugExecutionTextFont;
    if ( !DCONST_DVARINT_playerasm_debugExecutionTextFont && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugExecutionTextFont") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    integer = v3->current.integer;
    ActivePlacement = ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
    FontHandle = UI_GetFontHandle(ActivePlacement, integer, 1.0);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      v7 = DVARINT_playerasm_debugMode;
      if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      v8 = v7->current.integer;
      if ( v8 )
      {
        v9 = 0.0;
        Int_Internal_DebugName = (float)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_debugExecutionOffsetY, "playerasm_debugExecutionOffsetY");
        v11 = (float)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_debugExecutionOffsetX, "playerasm_debugExecutionOffsetX");
        if ( v8 == 2 )
        {
          v12 = 1;
          v13 = 1;
        }
        else
        {
          v12 = 0;
          v13 = v8 != 1;
        }
        v26 = v12;
        v27 = v13;
        Sys_EnterCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
        _XMM10 = LODWORD(FLOAT_140_0);
        do
        {
          v15 = 0;
          v16 = v12;
          v28 = 0;
          if ( BgPlayer_Asm::ms_debugExecutionBuffer[v16].count )
          {
            v17 = 0i64;
            do
            {
              if ( !v15 || (v18 = v16 * 10324 + 1032i64 * v15, v19 = v16 * 10324 + 1032i64 * (v15 - 1), *(int *)((char *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].time + v19) != *(int *)((char *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].time + v18)) || *(_DWORD *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v19 + 1024] != *(_DWORD *)&BgPlayer_Asm::ms_debugExecutionBuffer[0].buffer[0][0].text[v18 + 1024] )
              {
                v20 = 0;
                v21 = 1032i64 * v15;
                do
                {
                  _XMM0 = v20;
                  __asm
                  {
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm10, xmm8, xmm2
                  }
                  UI_DrawText(ActivePlacement, (const char *)BgPlayer_Asm::ms_debugExecutionBuffer + v21 + v16 * 10324, 1024, FontHandle, v11 + *(float *)&v17, (float)(*(float *)&_XMM0 + v9) + Int_Internal_DebugName, 1, 1, value, &colorWhite, 3);
                  ++v20;
                  v21 += 5160i64;
                }
                while ( v20 < 2 );
                v15 = v28;
                v25 = v17;
                *(float *)&v25 = *(float *)&v17 + 175.0;
                v17 = v25;
              }
              v28 = ++v15;
            }
            while ( v15 < BgPlayer_Asm::ms_debugExecutionBuffer[v16].count );
            v12 = v26;
            v13 = v27;
          }
          ++v12;
          BgPlayer_Asm::ms_debugExecutionBuffer[v16].count = 0;
          v26 = v12;
          v9 = FLOAT_230_0;
        }
        while ( v12 <= v13 );
        Sys_LeaveCriticalSection(CRITSECT_DEBUG_PLAYERASM_EXEC);
      }
    }
  }
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo
==============
*/
void CG_DrawDebug_PlayerAnimScriptInfo(LocalClientNum_t localClientNum, float requestedYPos, const characterInfo_t *ci, const playerState_s *ps, int handle, AnimScriptDebugMode mode, AnimScriptDebugMode eventsMode)
{
  signed __int64 v7; 
  __int128 v8; 
  __int128 v9; 
  void *v10; 
  int v11; 
  LocalClientNum_t v12; 
  const playerState_s *v13; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  ScreenPlacement *v18; 
  AnimScriptDebugMode v19; 
  bool Bool_Internal_DebugName; 
  const char *v21; 
  const char *v26; 
  float v27; 
  ScreenPlacement *v28; 
  GfxFont *v29; 
  unsigned int v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  float v34; 
  cg_t *LocalClientGlobals; 
  int v36; 
  AnimScriptDebugMode v37; 
  const PlayerASM_DebugAnimEventInfoEntry *Entry; 
  const PlayerASM_DebugAnimEventInfoEntry *v39; 
  unsigned int v40; 
  events_t *p_events; 
  unsigned int v42; 
  PlayerAnimStringItem *v43; 
  char v44; 
  bool v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  BgStatic *ActiveStatics; 
  __int64 v50; 
  __int64 suitAnimIndex; 
  __int64 v52; 
  __int64 Int_Internal_DebugName; 
  int v54; 
  __int64 v55; 
  __int64 v56; 
  bool v57; 
  const PlayerAnimScriptItem *v58; 
  const PlayerAnimEntry *AnimationForIndex; 
  const char *v60; 
  __int64 v61; 
  const PlayerAnimScriptItem *v62; 
  const PlayerAnimEntry *v63; 
  const char *v64; 
  __int64 y; 
  __int64 horzAlign; 
  int bufferPos; 
  int destPos; 
  LocalClientNum_t NumEntries; 
  int v70; 
  float v71; 
  GfxFont *font; 
  ScreenPlacement *scrPlace; 
  const playerState_s *v74; 
  char buffer[6144]; 
  char dest[6144]; 
  __int128 v77; 
  __int128 v78; 

  v10 = alloca(v7);
  v11 = handle;
  v12 = localClientNum;
  NumEntries = localClientNum;
  v13 = ps;
  v74 = ps;
  v70 = handle;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && handle >= 0 )
  {
    v15 = DCONST_DVARINT_animscript_debug_yoffset;
    if ( !DCONST_DVARINT_animscript_debug_yoffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_yoffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v17 = (float)v15->current.integer + requestedYPos;
    v16 = v17;
    if ( Com_GetClientDObj(handle, v12) )
    {
      if ( ci && !ci->usingAnimState )
      {
        v77 = v9;
        scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(v12);
        v18 = scrPlace;
        font = UI_GetFontHandle(scrPlace, 6, 0.25);
        v19 = mode;
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_animscript_debug_show_conditions, "animscript_debug_show_conditions");
        v21 = "SERVER";
        dest[0] = 0;
        destPos = 0;
        _XMM0 = Bool_Internal_DebugName;
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_100_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        if ( mode == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
          v21 = "CLIENT";
        v26 = "^5";
        if ( mode == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
          v26 = "^1";
        v71 = *(float *)&_XMM0;
        Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "%s%s CONDITIONALS%s %d: \n", v26, v21, "^7", handle);
        UI_DrawText(v18, dest, 6144, font, 0.0, v17, 1, 1, 0.14, &colorWhite, 3);
        if ( Bool_Internal_DebugName )
        {
          v27 = v17 + 7.0;
          v28 = scrPlace;
          v29 = font;
          v30 = 0;
          v78 = v8;
          v31 = 0;
          v32 = 14;
          do
          {
            v33 = 63;
            dest[0] = 0;
            destPos = 0;
            if ( v32 < 63 )
              v33 = v32;
            BG_Animation_PrintCIConditionals(ci, v30, v33, dest, 6144, &destPos, "^7");
            v34 = (float)v31;
            UI_DrawText(v28, dest, 6144, v29, v34 * 162.0, v27, 1, 1, 0.14, &colorWhite, 3);
            v30 += 14;
            v32 += 14;
            ++v31;
          }
          while ( v31 < 5 );
          v11 = v70;
          v12 = NumEntries;
          v13 = v74;
          v19 = mode;
        }
        buffer[0] = 0;
        bufferPos = 0;
        if ( PlayerASM_IsEnabled() )
        {
          CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo(buffer, 6144, &bufferPos, "^7", ci, v13, v11, v19);
          LocalClientGlobals = CG_GetLocalClientGlobals(v12);
          BG_PlayerASM_DebugAnimEventLog_Compact(LocalClientGlobals->time);
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%sANIM EVENTS: %s\n", "^2", "^3");
          NumEntries = BG_PlayerASM_DebugAnimEventLog_GetNumEntries();
          destPos = 0;
          v36 = 0;
          if ( NumEntries > LOCAL_CLIENT_0 )
          {
            v37 = eventsMode;
            while ( 1 )
            {
              Entry = BG_PlayerASM_DebugAnimEventLog_GetEntry(v36);
              v39 = Entry;
              if ( (!Entry || !Entry->isUsed) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4812, ASSERT_TYPE_ASSERT, "(entry && entry->isUsed)", (const char *)&queryFormat, "entry && entry->isUsed") )
                __debugbreak();
              if ( v37 == ANIM_SCRIPT_DEBUG_MODE_BOTH )
                break;
              if ( v39->isServer )
              {
                if ( v37 == ANIM_SCRIPT_DEBUG_MODE_SERVER )
                  break;
              }
              else if ( v37 == ANIM_SCRIPT_DEBUG_MODE_CLIENT )
              {
                break;
              }
LABEL_50:
              destPos = ++v36;
              if ( v36 >= NumEntries )
                goto LABEL_51;
            }
            if ( v39 == (const PlayerASM_DebugAnimEventInfoEntry *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 994, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
              __debugbreak();
            v40 = 0;
            p_events = &v39->events;
            while ( !p_events->events[0] )
            {
              ++v40;
              p_events = (events_t *)((char *)p_events + 4);
              if ( v40 >= 8 )
                goto LABEL_50;
            }
            v42 = 0;
            v43 = s_animEventTypesStr_0;
            v44 = 0;
            do
            {
              if ( Com_BitCheckAssert(v39->events.events, v42, 32) )
              {
                v45 = Com_BitCheckAssert(v39->events.force, v42, 32);
                v46 = (char *)&queryFormat.fmt + 3;
                if ( v45 )
                  v46 = " [forced]";
                v47 = "C";
                v48 = "       ";
                if ( v39->isServer )
                  v47 = "S";
                if ( v44 )
                  v48 = ", ";
                Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%s[%s]: %s%s", v48, v47, v43->string, v46);
                v44 = 1;
              }
              ++v42;
              ++v43;
            }
            while ( v42 < 0x5C );
            v37 = eventsMode;
            v36 = destPos;
            if ( eventsMode == ANIM_SCRIPT_DEBUG_MODE_BOTH )
              Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "\n");
            goto LABEL_50;
          }
LABEL_51:
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%s\n\n", "^7");
          goto LABEL_73;
        }
        ActiveStatics = BgStatic::GetActiveStatics();
        v50 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
        if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4850, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
          __debugbreak();
        suitAnimIndex = ci->playerAnim.suitAnimIndex;
        v52 = *(_QWORD *)(v50 + 8 * suitAnimIndex);
        if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4855, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
          __debugbreak();
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_animscript_debug_legs, "animscript_debug_legs");
        v54 = Dvar_GetInt_Internal_DebugName(DVARINT_animscript_debug_torso, "animscript_debug_torso");
        v55 = v54;
        if ( (int)Int_Internal_DebugName >= 0 || v54 >= 0 )
        {
          Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "%sSELECTED ANIMATIONS%s: \n", "^2", "^7");
          if ( (int)Int_Internal_DebugName >= 0 )
          {
            if ( (unsigned int)Int_Internal_DebugName >= *(_DWORD *)(v52 + 12) )
            {
              LODWORD(horzAlign) = *(_DWORD *)(v52 + 12);
              LODWORD(y) = Int_Internal_DebugName;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4869, ASSERT_TYPE_ASSERT, "(unsigned)( scriptItemIndexLegs ) < (unsigned)( playerAnim->scriptItemCount )", "scriptItemIndexLegs doesn't index playerAnim->scriptItemCount\n\t%i not in [0, %i)", y, horzAlign) )
                __debugbreak();
            }
            v56 = *(_QWORD *)(v52 + 72);
            v57 = *(_DWORD *)(v56 + 24 * Int_Internal_DebugName + 4) == 0;
            v58 = (const PlayerAnimScriptItem *)(v56 + 24 * Int_Internal_DebugName);
            if ( !v57 )
            {
              AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(v58->commands->animIndex, (SuitAnimType)suitAnimIndex);
              v60 = SL_ConvertToString(AnimationForIndex->animName);
              Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "LEGS->%s'%s'%s: \n", "^1", v60, "^7");
              BG_Animation_PrintScriptItemConditionals(v58, buffer, 6144, &bufferPos, "^7");
            }
          }
          if ( (int)v55 >= 0 && (ci->playerAnim.torsoAnim & 0xFFFFEFFF) != 0 )
          {
            if ( (unsigned int)v55 >= *(_DWORD *)(v52 + 12) )
            {
              LODWORD(horzAlign) = *(_DWORD *)(v52 + 12);
              LODWORD(y) = v55;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4884, ASSERT_TYPE_ASSERT, "(unsigned)( scriptItemIndexTorso ) < (unsigned)( playerAnim->scriptItemCount )", "scriptItemIndexTorso doesn't index playerAnim->scriptItemCount\n\t%i not in [0, %i)", y, horzAlign) )
                __debugbreak();
            }
            v61 = *(_QWORD *)(v52 + 72);
            v57 = *(_DWORD *)(v61 + 24 * v55 + 4) == 0;
            v62 = (const PlayerAnimScriptItem *)(v61 + 24 * v55);
            if ( !v57 )
            {
              v63 = BG_AnimationMP_GetAnimationForIndex(v62->commands->animIndex, (SuitAnimType)suitAnimIndex);
              v64 = SL_ConvertToString(v63->animName);
              Com_sprintfPos_truncate(buffer, 0x1800ui64, &bufferPos, "TORSO->%s'%s'%s: \n", "^3", v64, "^7");
              BG_Animation_PrintScriptItemConditionals(v62, buffer, 6144, &bufferPos, "^7");
            }
          }
LABEL_73:
          UI_DrawText(scrPlace, buffer, 6144, font, 0.0, v16 + v71, 1, 1, 0.18000001, &colorWhite, 3);
        }
      }
    }
  }
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo
==============
*/
void CG_DrawDebug_PlayerAnimScriptInfo_AliasInfo(char *buffer, const int BUFFERSIZE, int *bufferPos, const char *baseColor, const characterInfo_t *const ci, const playerState_s *ps, const int handle, AnimScriptDebugMode mode)
{
  const char *v8; 
  const characterInfo_t *v9; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned int Anim; 
  unsigned int Animset; 
  const Animset *AnimsetByIndex; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  __int64 m_Timer; 
  float v23; 
  float v24; 
  const char *v25; 
  const char *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  const char *v30; 
  unsigned int outAnimEntry; 
  const char *v32; 
  AnimsetAnim *ppOutAnim; 
  AnimsetAlias *ppOutAlias; 
  AnimsetState *outState; 

  v8 = "^3";
  v9 = ci;
  v13 = BUFFERSIZE;
  if ( mode != ANIM_SCRIPT_DEBUG_MODE_SERVER )
    v8 = "^1";
  v14 = 0i64;
  v32 = v8;
  do
  {
    Anim = BG_PlayerASM_GetAnim(v9, (const PlayerASM_AnimSlot)(unsigned __int8)v14);
    if ( Anim )
    {
      Animset = BG_PlayerASM_GetAnimset(v9);
      BG_PlayerASM_UnpackAnim(Animset, Anim, (unsigned int *)&mode, &outAnimEntry);
      AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(Animset);
      if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4695, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
        __debugbreak();
      if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 4696, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
        __debugbreak();
      if ( !(_DWORD)v14 )
      {
        LODWORD(v29) = 0x4000;
        LODWORD(v28) = LOWORD(AnimsetByIndex->u.m_AIAnimset->coverLeftCrouchOffset.leanYaw);
        Com_sprintfPos_truncate(buffer, v13, bufferPos, "ANIMSET: %s%s%s  (%4d/%4d)\n", "^5", AnimsetByIndex->name, baseColor, v28, v29);
      }
      if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, mode, outAnimEntry) )
      {
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, mode, outAnimEntry, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
        if ( BG_Animset_GetStateInfoByIndex(AnimsetByIndex, mode, &outState) )
        {
          v18 = SL_ConvertToString(ppOutAnim->name);
          v19 = SL_ConvertToString(ppOutAlias->name);
          v20 = SL_ConvertToString(outState->name);
          v30 = v18;
          v21 = "SUB";
          v8 = v32;
          if ( !(_DWORD)v14 )
            v21 = "PRIMARY";
          LODWORD(v27) = Anim;
          Com_sprintfPos_truncate(buffer, v13, bufferPos, "%s[%d]:%s state: %s'%s', %salias: %s'%s', %sanim: %s'%s'%s ", v21, v27, "^;", v32, v20, "^;", v32, v19, "^;", v32, v30, baseColor);
          if ( CG_IsPlayerEntityNumber(ps, handle) )
          {
            m_Timer = (unsigned int)ps->animState.slot[v14].m_Timer;
            if ( (_DWORD)m_Timer == 0x7FFFF )
            {
              v23 = FLOAT_1_0;
            }
            else
            {
              v24 = (float)m_Timer;
              v23 = v24 * 0.0000019073486;
            }
            LODWORD(v27) = ps->animState.slot[v14].m_Timer;
            Com_sprintfPos_truncate(buffer, v13, bufferPos, "%s(%.3d, %.3f)%s\n", "^2", v27, v23, baseColor);
            v9 = ci;
          }
          else
          {
            Com_sprintfPos_truncate(buffer, v13, bufferPos, "\n");
            v9 = ci;
          }
        }
        else
        {
          v8 = v32;
        }
      }
      else
      {
        v8 = v32;
        v25 = "SUB";
        if ( !(_DWORD)v14 )
          v25 = "PRIMARY";
        Com_sprintfPos_truncate(buffer, v13, bufferPos, "%s->%s'%s'%s: \n", v25, v32, "none", baseColor);
      }
    }
    else
    {
      v26 = "SUB";
      if ( !(_DWORD)v14 )
        v26 = "PRIMARY";
      Com_sprintfPos_truncate(buffer, v13, bufferPos, "%s->%s'%s'%s: \n", v26, v8, "none", baseColor);
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 2 );
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_Client
==============
*/
void CG_DrawDebug_PlayerAnimScriptInfo_Client(LocalClientNum_t localClientNum, float requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  CgStatic *ActiveStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v9; 
  cg_t *LocalClientGlobals; 

  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
  {
    ActiveStatics = (CgStatic *)BgStatic::GetActiveStatics();
    if ( ActiveStatics->IsClient(ActiveStatics) )
      CharacterInfo = CgStatic::GetCharacterInfo(ActiveStatics, handle);
    else
      CharacterInfo = (const characterInfo_t *)ActiveStatics->GetClientInfo(ActiveStatics, handle);
    v9 = CharacterInfo;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CG_DrawDebug_PlayerAnimScriptInfo(localClientNum, requestedYPos, v9, &LocalClientGlobals->predictedPlayerState, handle, ANIM_SCRIPT_DEBUG_MODE_CLIENT, eventsMode);
  }
}

/*
==============
CG_DrawDebug_PlayerBullet
==============
*/
void CG_DrawDebug_PlayerBullet(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  __int128 v2; 
  const dvar_t *v3; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  float v7; 
  float v8; 
  float v9; 
  cg_t *v10; 
  Physics_WorldId v11; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned __int8 v14; 
  unsigned __int64 v15; 
  char v16; 
  const vec4_t *v17; 
  float v18; 
  int RaycastHitRef; 
  unsigned __int8 RefSubSystem; 
  unsigned __int16 RefId; 
  __int128 v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  hknpShape **v26; 
  __int64 v27; 
  const char *v28; 
  __int128 v29; 
  const char *v30; 
  float v31; 
  unsigned int RaycastHitBodyId; 
  unsigned int RaycastHitShapeKey; 
  unsigned int v34; 
  hknpShape **v35; 
  __int64 v36; 
  const char *NameForShape; 
  __int128 v38; 
  DObj *ClientDObj; 
  const char **v40; 
  const char **v41; 
  const char *v42; 
  const ScriptableDef *Def; 
  const char *v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  __int64 v47; 
  DynEntityClient *v48; 
  const char *v49; 
  int EntityNum; 
  DObj *v51; 
  const char **v52; 
  const char **v53; 
  const char *v54; 
  DObj *DObj; 
  const char **v56; 
  const char **v57; 
  const char *v58; 
  __int64 forceColor; 
  __int64 shadow; 
  float v61; 
  DynEntityBasis basisOut[4]; 
  unsigned __int16 clientIdOut; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t outOrg; 
  vec3_t end; 
  vec3_t pos; 
  hknpShape *shapes[8]; 
  __int128 v69; 

  v3 = DCONST_DVARBOOL_debugDrawPlayerBulletCollision;
  v5 = localClientNum;
  if ( !DCONST_DVARBOOL_debugDrawPlayerBulletCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugDrawPlayerBulletCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v69 = v2;
    Physics_WaitForAllCommandsToFinish();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    v7 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
    v8 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
    v9 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
    v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    RefdefView_GetOrg(&v10->refdef.view, &outOrg);
    end.v[0] = (float)(rayDist_0 * v7) + outOrg.v[0];
    v11 = 3 * v5 + 4;
    end.v[2] = (float)(rayDist_0 * v9) + outOrg.v[2];
    end.v[1] = (float)(rayDist_0 * v8) + outOrg.v[1];
    ClosestResult = PhysicsQuery_GetClosestResult(v11);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(ClosestResult, WeaponPriorityMap);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.collisionBuffer = 0.0;
    extendedData.contents = 8397235;
    Physics_Raycast(v11, &outOrg, &end, &extendedData, ClosestResult);
    CG_DrawStringExt(scrPlace, 8.0, 8.0, "Player Bullet Collision:", &colorWhite, 0, 1, 8.0, 0);
    if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &pos);
      CG_DebugSphere(&pos, 4.0, &colorWhite, 0, 1);
      v14 = ((int)HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
      v15 = 0x8000001000000001ui64;
      if ( _bittest64((const __int64 *)&v15, v14) )
        v16 = 1;
      else
        v16 = 0;
      v17 = &colorWhite;
      if ( v16 )
        v17 = &colorRed;
      CG_DrawStringExt(scrPlace, 8.0, 16.0, s_surfaceTypeNames[v14], v17, 0, 1, 8.0, 0);
      v18 = FLOAT_24_0;
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
      Physics_GetRefSystem(RaycastHitRef);
      RefSubSystem = Physics_GetRefSubSystem(RaycastHitRef);
      RefId = Physics_GetRefId(RaycastHitRef);
      switch ( 0x40000000u )
      {
        case 0u:
          if ( RefSubSystem )
          {
            if ( RefSubSystem == 1 )
            {
              CG_DrawStringExt(scrPlace, 8.0, 24.0, "Static Model", &colorWhite, 0, 1, 8.0, 0);
              v22 = LODWORD(FLOAT_32_0);
              RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
              RaycastHitShapeKey = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
              v34 = Physics_DecodeShapeKeyIntoShapes(v11, RaycastHitBodyId, RaycastHitShapeKey, (const hknpShape **)shapes);
              if ( v34 )
              {
                v35 = shapes;
                v36 = v34;
                do
                {
                  NameForShape = StaticModels_Debug_GetNameForShape(*v35);
                  if ( NameForShape )
                  {
                    CG_DrawStringExt(scrPlace, 8.0, *(float *)&v22, NameForShape, &colorWhite, 0, 1, 8.0, 0);
                    v38 = v22;
                    *(float *)&v38 = *(float *)&v22 + 8.0;
                    v22 = v38;
                  }
                  ++v35;
                  --v36;
                }
                while ( v36 );
              }
            }
            else
            {
              if ( RefSubSystem != 2 )
              {
                CG_DrawStringExt(scrPlace, 8.0, 24.0, "Unknown World Geo", &colorWhite, 0, 1, 8.0, 0);
                return;
              }
              CG_DrawStringExt(scrPlace, 8.0, 24.0, "Patch Collision", &colorWhite, 0, 1, 8.0, 0);
              v22 = LODWORD(FLOAT_32_0);
              v23 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
              v24 = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
              v25 = Physics_DecodeShapeKeyIntoShapes(v11, v23, v24, (const hknpShape **)shapes);
              if ( v25 )
              {
                v26 = shapes;
                v27 = v25;
                do
                {
                  v28 = PatchCollision_Debug_GetNameForShape(*v26);
                  if ( v28 )
                  {
                    CG_DrawStringExt(scrPlace, 8.0, *(float *)&v22, v28, &colorWhite, 0, 1, 8.0, 0);
                    v29 = v22;
                    *(float *)&v29 = *(float *)&v22 + 8.0;
                    v22 = v29;
                  }
                  ++v26;
                  --v27;
                }
                while ( v27 );
              }
            }
            v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
            v61 = FLOAT_8_0;
            v31 = *(float *)&v22;
            goto LABEL_30;
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, "Primary World Geometry From Radiant", &colorWhite, 0, 1, 8.0, 0);
          v30 = "If there is a bad surface type, either the wrong material is being used, or the material has an invalid surf type";
          v61 = FLOAT_8_0;
LABEL_29:
          v31 = FLOAT_32_0;
LABEL_30:
          CG_DrawStringExt(scrPlace, 8.0, v31, v30, &colorWhite, 0, 1, v61, 0);
          break;
        case 1u:
          DynEnt_GetBasisAndDynEntClientId(RefId, basisOut, &clientIdOut);
          if ( basisOut[0] == DYNENT_BASIS_BRUSH )
          {
            CG_DrawStringExt(scrPlace, 8.0, 24.0, "DynEnt using Brush geo", &colorWhite, 0, 1, 8.0, 0);
            CG_DrawStringExt(scrPlace, 8.0, 32.0, "If there is a bad surface type, either the wrong material is being used for the brush, or the material has an invalid surf type", &colorWhite, 0, 1, 8.0, 0);
            v18 = FLOAT_40_0;
            v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          else if ( basisOut[0] )
          {
            v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          else
          {
            v45 = clientIdOut;
            if ( (unsigned int)v5 >= 2 )
            {
              LODWORD(shadow) = 2;
              LODWORD(forceColor) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v46 = g_dynEntClientEntsAllocCount[v5][0];
            if ( v45 >= v46 )
            {
              LODWORD(shadow) = v46;
              LODWORD(forceColor) = v45;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v47 = v5;
            if ( !g_dynEntClientLists[v47][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v48 = &g_dynEntClientLists[v47][0][v45];
            if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8880, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            v49 = j_va("DynEnt using Model geo from model %s", v48->activeModel->name);
            CG_DrawStringExt(scrPlace, 8.0, 24.0, v49, &colorWhite, 0, 1, 8.0, 0);
            v18 = FLOAT_32_0;
            v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          }
          goto LABEL_78;
        case 4u:
          ClientDObj = Com_GetClientDObj(RefId, (LocalClientNum_t)v5);
          if ( ClientDObj && ClientDObj->numModels && (v40 = (const char **)*ClientDObj->models) != NULL )
          {
            v41 = (const char **)v40[78];
            if ( v41 )
              v42 = j_va("Entity From model %s with physicsasset %s", *v40, *v41);
            else
              v42 = j_va("Entity From model %s with physicsasset %s", *v40, "Unknown");
          }
          else
          {
            v42 = "Entity From Unknown model/physicsAsset";
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v42, &colorWhite, 0, 1, 8.0, 0);
          v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type.";
          v61 = FLOAT_8_0;
          goto LABEL_29;
        case 6u:
          EntityNum = Physics_GetEntityNum(RaycastHitRef);
          v51 = Com_GetClientDObj(EntityNum, (LocalClientNum_t)v5);
          if ( v51 && v51->numModels && (v52 = (const char **)*v51->models) != NULL )
          {
            v53 = (const char **)v52[78];
            if ( v53 )
              v54 = j_va("Ragdoll From model %s with physicsasset %s", *v52, *v53);
            else
              v54 = j_va("Ragdoll From model %s with physicsasset %s", *v52, "Unknown");
          }
          else
          {
            v54 = "Ragdoll From Unknown model/physicsAsset";
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v54, &colorWhite, 0, 1, 8.0, 0);
          v30 = "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.";
          v61 = FLOAT_8_0;
          goto LABEL_29;
        case 8u:
          Def = ScriptableCl_GetDef((const LocalClientNum_t)v5, RaycastHitRef & 0x3FFFFF);
          if ( Def )
            v44 = j_va("Scriptable Collision from %s", Def->name);
          else
            v44 = "Scriptable Collision from unknown scriptable";
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v44, &colorWhite, 0, 1, 8.0, 0);
          v30 = "If there is a bad surface type, either the wrong material is being used for the colmap, or the material has an invalid surf type";
          v61 = FLOAT_8_0;
          goto LABEL_29;
        case 0xAu:
          DObj = CG_ClientModel_GetDObj((const LocalClientNum_t)v5, RefId);
          if ( DObj && DObj->numModels && (v56 = (const char **)*DObj->models) != NULL )
          {
            v57 = (const char **)v56[78];
            if ( v57 )
              v58 = j_va("ClientModel From model %s with physicsasset %s", *v56, *v57);
            else
              v58 = j_va("ClientModel From model %s with physicsasset %s", *v56, "Unknown");
          }
          else
          {
            v58 = "ClientModel From Unknown model/physicsAsset";
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v58, &colorWhite, 0, 1, 8.0, 0);
          v30 = "If there is a bad surface type, the collod is either using the wrong material, or the material has an invalid surf type";
          v61 = FLOAT_8_0;
          goto LABEL_29;
        default:
          v30 = "Unexpected Source";
LABEL_78:
          v61 = FLOAT_8_0;
          v31 = v18;
          goto LABEL_30;
      }
    }
    else
    {
      CG_DrawStringExt(scrPlace, 8.0, 16.0, "No ground found", &colorWhite, 0, 1, 8.0, 0);
    }
  }
}

/*
==============
CG_DrawDebug_PlayerFootstep
==============
*/
void CG_DrawDebug_PlayerFootstep(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  trajectory_t_secure *p_pos; 
  float v7; 
  float v8; 
  float v9; 
  __int32 v10; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned __int8 v12; 
  unsigned __int64 v13; 
  char v14; 
  const vec4_t *v15; 
  int RaycastHitRef; 
  Physics_RefSystem RefSystem; 
  unsigned __int8 RefSubSystem; 
  unsigned __int16 RefId; 
  const ScriptableDef *Def; 
  const char *v21; 
  DObj *ClientDObj; 
  const char **v23; 
  const char **v24; 
  const char *v25; 
  __int128 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  hknpShape **v30; 
  __int64 v31; 
  const char *v32; 
  __int128 v33; 
  unsigned int RaycastHitBodyId; 
  unsigned int RaycastHitShapeKey; 
  unsigned int v36; 
  hknpShape **v37; 
  __int64 v38; 
  const char *NameForShape; 
  __int128 v40; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t start; 
  vec3_t pos; 
  vec3_t end; 
  hknpShape *shapes[8]; 

  v2 = DCONST_DVARBOOL_debugDrawPlayerFootstepCollision;
  if ( !DCONST_DVARBOOL_debugDrawPlayerFootstepCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugDrawPlayerFootstepCollision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Physics_WaitForAllCommandsToFinish();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_pos = &LocalClientGlobals->predictedPlayerEntity->nextState.lerp.pos;
    if ( LocalClientGlobals->predictedPlayerEntity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
    {
      v7 = p_pos->trBase.v[1];
      v8 = p_pos->trBase.v[0];
      *(_QWORD *)pos.v = &start;
      LODWORD(start.v[2]) = s_trbase_aab_Z ^ LODWORD(v7) ^ LODWORD(p_pos->trBase.v[2]);
      LODWORD(start.v[1]) = s_trbase_aab_Y ^ LODWORD(v8) ^ LODWORD(v7);
      LODWORD(start.v[0]) = LODWORD(v8) ^ ~s_trbase_aab_X;
      memset(&pos, 0, 8ui64);
      pos.v[0] = start.v[0];
      if ( (LODWORD(start.v[0]) & 0x7F800000) == 2139095040 || (pos.v[0] = start.v[1], (LODWORD(start.v[1]) & 0x7F800000) == 2139095040) || (v9 = start.v[2], pos.v[0] = start.v[2], (LODWORD(start.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
        v9 = start.v[2];
      }
    }
    else
    {
      *(_QWORD *)start.v = *(_QWORD *)p_pos->trBase.v;
      v9 = p_pos->trBase.v[2];
    }
    end.v[0] = start.v[0];
    v10 = 3 * localClientNum + 2;
    end.v[2] = (float)(v9 + 64.0) - 128.0;
    start.v[2] = v9 + 64.0;
    end.v[1] = start.v[1];
    ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v10);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.collisionBuffer = 0.0;
    extendedData.contents = 65553;
    Physics_Raycast((Physics_WorldId)v10, &start, &end, &extendedData, ClosestResult);
    CG_DrawStringExt(scrPlace, 8.0, 8.0, "Player Footstep Collision:", &colorWhite, 0, 1, 8.0, 0);
    if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    {
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &pos);
      CG_DebugSphere(&pos, 4.0, &colorWhite, 0, 1);
      v12 = ((int)HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
      v13 = 0x8000001000000001ui64;
      if ( _bittest64((const __int64 *)&v13, v12) )
        v14 = 1;
      else
        v14 = 0;
      v15 = &colorWhite;
      if ( v14 )
        v15 = &colorRed;
      CG_DrawStringExt(scrPlace, 8.0, 16.0, s_surfaceTypeNames[v12], v15, 0, 1, 8.0, 0);
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(ClosestResult, 0);
      RefSystem = Physics_GetRefSystem(RaycastHitRef);
      RefSubSystem = Physics_GetRefSubSystem(RaycastHitRef);
      RefId = Physics_GetRefId(RaycastHitRef);
      if ( RefSystem )
      {
        if ( RefSystem == Physics_RefSystem_CEntities )
        {
          ClientDObj = Com_GetClientDObj(RefId, localClientNum);
          if ( ClientDObj && ClientDObj->numModels && (v23 = (const char **)*ClientDObj->models) != NULL )
          {
            v24 = (const char **)v23[78];
            if ( v24 )
              v25 = j_va("Entity From model %s with physicsasset %s", *v23, *v24);
            else
              v25 = j_va("Entity From model %s with physicsasset %s", *v23, "Unknown");
          }
          else
          {
            v25 = "Entity From Unknown model/physicsAsset";
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v25, &colorWhite, 0, 1, 8.0, 0);
          CG_DrawStringExt(scrPlace, 8.0, 32.0, "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.", &colorWhite, 0, 1, 8.0, 0);
        }
        else if ( RefSystem == Physics_RefSystem_Scriptable )
        {
          Def = ScriptableCl_GetDef(localClientNum, RaycastHitRef & 0x3FFFFF);
          if ( Def )
            v21 = j_va("Scriptable Collision from %s", Def->name);
          else
            v21 = "Scriptable Collision from unknown scriptable";
          CG_DrawStringExt(scrPlace, 8.0, 24.0, v21, &colorWhite, 0, 1, 8.0, 0);
          CG_DrawStringExt(scrPlace, 8.0, 32.0, "If there is a bad surface type, either the wrong material is being used for the colmap, or the material has an invalid surf type", &colorWhite, 0, 1, 8.0, 0);
        }
        else
        {
          CG_DrawStringExt(scrPlace, 8.0, 24.0, "Unexpected Source", &colorWhite, 0, 1, 8.0, 0);
        }
      }
      else if ( RefSubSystem )
      {
        if ( RefSubSystem == 1 )
        {
          CG_DrawStringExt(scrPlace, 8.0, 24.0, "Static Model", &colorWhite, 0, 1, 8.0, 0);
          v26 = LODWORD(FLOAT_32_0);
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
          RaycastHitShapeKey = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
          v36 = Physics_DecodeShapeKeyIntoShapes((Physics_WorldId)v10, RaycastHitBodyId, RaycastHitShapeKey, (const hknpShape **)shapes);
          if ( v36 )
          {
            v37 = shapes;
            v38 = v36;
            do
            {
              NameForShape = StaticModels_Debug_GetNameForShape(*v37);
              if ( NameForShape )
              {
                CG_DrawStringExt(scrPlace, 8.0, *(float *)&v26, NameForShape, &colorWhite, 0, 1, 8.0, 0);
                v40 = v26;
                *(float *)&v40 = *(float *)&v26 + 8.0;
                v26 = v40;
              }
              ++v37;
              --v38;
            }
            while ( v38 );
          }
        }
        else
        {
          if ( RefSubSystem != 2 )
          {
            CG_DrawStringExt(scrPlace, 8.0, 24.0, "Unknown World Geo", &colorWhite, 0, 1, 8.0, 0);
            return;
          }
          CG_DrawStringExt(scrPlace, 8.0, 24.0, "Patch Collision", &colorWhite, 0, 1, 8.0, 0);
          v26 = LODWORD(FLOAT_32_0);
          v27 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
          v28 = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
          v29 = Physics_DecodeShapeKeyIntoShapes((Physics_WorldId)v10, v27, v28, (const hknpShape **)shapes);
          if ( v29 )
          {
            v30 = shapes;
            v31 = v29;
            do
            {
              v32 = PatchCollision_Debug_GetNameForShape(*v30);
              if ( v32 )
              {
                CG_DrawStringExt(scrPlace, 8.0, *(float *)&v26, v32, &colorWhite, 0, 1, 8.0, 0);
                v33 = v26;
                *(float *)&v33 = *(float *)&v26 + 8.0;
                v26 = v33;
              }
              ++v30;
              --v31;
            }
            while ( v31 );
          }
        }
        CG_DrawStringExt(scrPlace, 8.0, *(float *)&v26, "If there is a bad surface type, the physics asset needs a surface type set - this is done in Max/Maya and is not the PM_Material in the physics asset.", &colorWhite, 0, 1, 8.0, 0);
      }
      else
      {
        CG_DrawStringExt(scrPlace, 8.0, 24.0, "Primary World Geometry From Radiant", &colorWhite, 0, 1, 8.0, 0);
        CG_DrawStringExt(scrPlace, 8.0, 32.0, "If there is a bad surface type, either the wrong material is being used, or the material has an invalid surf type", &colorWhite, 0, 1, 8.0, 0);
      }
    }
    else
    {
      CG_DrawStringExt(scrPlace, 8.0, 16.0, "No ground found", &colorWhite, 0, 1, 8.0, 0);
    }
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
  cg_t *v9; 
  const char *modelName; 
  bool v11; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
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
    angles.v[0] = 0.0;
    angles.v[1] = 0.0;
    angles.v[2] = 0.0;
    linkTagOrigin.v[0] = 0.0;
    linkTagOrigin.v[1] = 0.0;
    linkTagOrigin.v[2] = 0.0;
    linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
    tagName = "notag";
    v9 = LocalClientGlobals;
    modelName = "nomodel";
    v11 = 0;
    if ( linkEnt != 2047 )
    {
      v11 = 1;
      Entity = CG_GetEntity(localClientNum, linkEnt);
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
        if ( ClientDObj )
        {
          if ( CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, scr_const.tag_player, &outTagMat, &outOrigin) )
          {
            tagName = "tag_player";
            Model = DObjGetModel(ClientDObj, 0);
            if ( Model )
              modelName = Model->name;
          }
          AxisToAngles(&outTagMat, &angles);
          linkTagOrigin = outOrigin;
        }
        else
        {
          CG_GetPoseOrigin(p_pose, &linkTagOrigin);
          angles = p_pose->angles;
        }
      }
    }
    BG_DrawDebug_PlayerVignettePrint(&v9->predictedPlayerState, 1, uniqueString, flags, v11, v9->time, modelName, tagName, &linkTagOrigin, &angles);
  }
}

/*
==============
CG_DrawDebug_Player_InterpolatePs
==============
*/
void CG_DrawDebug_Player_InterpolatePs(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool v3; 

  if ( BG_DrawDebug_PlayerVignetteActive(1) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v3 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->nextPs->otherFlags, ACTIVE, 9u);
    Com_Printf(19, "[Vignette] Interpolate PS: Lock View %d, Clamp Base %.3f %.3f, Clamp Range %.3f %.3f\n", v3, LocalClientGlobals->predictedPlayerState.viewAngleClampBase.v[0], LocalClientGlobals->predictedPlayerState.viewAngleClampBase.v[1], LocalClientGlobals->predictedPlayerState.viewAngleClampRange.v[0], LocalClientGlobals->predictedPlayerState.viewAngleClampRange.v[1]);
  }
}

/*
==============
CG_DrawDebug_Player_ViewValues
==============
*/
void CG_DrawDebug_Player_ViewValues(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  if ( BG_DrawDebug_PlayerVignetteActive(1) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    Com_Printf(19, "[Vignette] Client View: refAng %.3f %.3f %.3f\n", LocalClientGlobals->refdefViewAngles.v[0], LocalClientGlobals->refdefViewAngles.v[1], LocalClientGlobals->refdefViewAngles.v[2]);
  }
}

/*
==============
CG_DrawDebug_PrintFPS
==============
*/
float CG_DrawDebug_PrintFPS(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width, float minTimeMSec, float maxTimeMSec, float totalMSec, float totalFrameMSec, float varianceMSec, int fpsMin, int fpsMax, int fps, int fpsFrame, vec4_t *outColor)
{
  const dvar_t *v19; 
  cg_t *LocalClientGlobals; 
  const char *v21; 
  float v22; 
  double v23; 
  XB3ConsoleType XB3ConsoleType; 
  int integer; 
  int v26; 
  int v27; 
  const char *v28; 
  GfxColorimetry DisplayColorimetry; 
  const char *v30; 
  const dvar_t *v31; 
  unsigned int displayWidth; 
  unsigned int displayHeight; 
  const vec2_t *MatchingDynamicResolutionTable; 
  const dvar_t *v35; 
  __int64 unsignedInt; 
  float v37; 
  const dvar_t *v38; 
  const char *v39; 
  float v40; 
  const char *v41; 
  float v42; 
  const char *v43; 
  float v44; 
  const char *v45; 
  const char *v46; 
  char *fmt; 
  char *label; 
  vec3_t outOrg; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 761, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 762, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  v19 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer < 4 )
  {
    v22 = y;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v21 = j_va("(%.1f %.1f %.1f) : (%.1f %.1f)", outOrg.v[0], outOrg.v[1], outOrg.v[2], LocalClientGlobals->refdefViewAngles.v[1], LocalClientGlobals->refdefViewAngles.v[0]);
    v22 = y + CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, v21, " viewpos", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  v23 = I_fclamp((float)((float)((float)fps - 60.0) * 0.1) + 1.0, 0.0, 1.0);
  outColor->v[0] = (float)((float)(1.0 - 1.0) * *(float *)&v23) + 1.0;
  outColor->v[1] = (float)((float)(1.0 - 0.0) * *(float *)&v23) + 0.0;
  outColor->v[2] = (float)((float)(1.0 - 0.0) * *(float *)&v23) + 0.0;
  outColor->v[3] = (float)((float)(1.0 - 1.0) * *(float *)&v23) + 1.0;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  integer = r_mode->current.integer;
  if ( integer )
  {
    v26 = integer - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
          {
            v28 = "3840@2K";
            goto LABEL_25;
          }
        }
        else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
        {
          v28 = "3840";
          goto LABEL_25;
        }
      }
      else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
      {
        v28 = "3840@1K";
        goto LABEL_25;
      }
    }
    v28 = "1080";
  }
  else
  {
    v28 = "1080@900";
  }
LABEL_25:
  DisplayColorimetry = R_GetDisplayColorimetry();
  v30 = "HDR";
  if ( !R_IsColorimetryHDR(DisplayColorimetry) )
    v30 = (char *)&queryFormat.fmt + 3;
  if ( rg.sceneResDynamic )
  {
    v31 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    LODWORD(label) = v31->current.integer;
    j_sprintf_s(Buffer, 0x20ui64, " FPS[%s%s/%d]", v28, v30, label);
  }
  else
  {
    j_sprintf_s(Buffer, 0x20ui64, " FPS[%s%s]", v28, v30);
  }
  if ( rg.sceneResNative )
  {
    displayWidth = vidConfig.displayWidth;
    displayHeight = vidConfig.displayHeight;
  }
  else if ( rg.sceneResDynamic )
  {
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v35 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    unsignedInt = v35->current.unsignedInt;
    displayWidth = (int)MatchingDynamicResolutionTable[unsignedInt].v[0];
    displayHeight = (int)MatchingDynamicResolutionTable[unsignedInt].v[1];
  }
  else
  {
    displayWidth = vidConfig.sceneWidth;
    displayHeight = vidConfig.sceneHeight;
  }
  v37 = (float)(int)(displayWidth * displayHeight) * 0.000001;
  v38 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.integer < 2 )
  {
    v45 = j_va("%i | F%i", (unsigned int)fps, (unsigned int)fpsFrame);
    v42 = v22 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v22, width, v45, Buffer, outColor, 0.75, 0.75, 0.80000001, 0);
    v46 = j_va("(%i %i) %.2f Mpx", displayWidth, displayHeight, v37);
    v44 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v42, width, v46, " Scene Res", outColor, 0.75, 0.75, 0.80000001, 0);
  }
  else
  {
    LODWORD(fmt) = fpsFrame;
    v39 = j_va("(%i - %i) %i | F%i", (unsigned int)fpsMin, (unsigned int)fpsMax, (unsigned int)fps, fmt);
    v40 = v22 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v22, width, v39, Buffer, outColor, 0.75, 0.75, 0.80000001, 0);
    v41 = j_va("(%i %i) %.2f Mpx", displayWidth, displayHeight, v37);
    v42 = v40 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v40, width, v41, " Scene Res", outColor, 0.75, 0.75, 0.80000001, 0);
    v43 = j_va("(%2.1f - %2.1f, %2.1f) %3.2f | F%3.2f", minTimeMSec, maxTimeMSec, varianceMSec, totalMSec, totalFrameMSec);
    v44 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v42, width, v43, " cg ms/frame", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
  return v42 + v44;
}

/*
==============
CG_DrawDebug_PrintMemoryBudgetStats
==============
*/

float __fastcall CG_DrawDebug_PrintMemoryBudgetStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, double y, float width)
{
  signed __int64 v5; 
  void *v6; 
  __int128 v9; 
  const dvar_t *v11; 
  unsigned int v12; 
  const char *v13; 
  const vec4_t *color; 
  __int128 v15; 
  const dvar_t *v16; 
  const char *v17; 
  __int128 v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  __int64 v21; 
  const char *v22; 
  const vec4_t *v23; 
  double v24; 
  __int128 v25; 
  const dvar_t *v26; 
  __int64 v27; 
  bool IsActive; 
  __int64 MinimumDesiredFreeShipMem; 
  vec4_t *v30; 
  __int64 v31; 
  int v32; 
  vec4_t v33; 
  const char *v34; 
  const char *v35; 
  const char *label; 
  __int128 v37; 
  const dvar_t *v38; 
  __int64 MemreportTotalBudget; 
  const char *v40; 
  __int128 v41; 
  __int64 MemreportLevelFastfileBudget; 
  const char *v43; 
  const dvar_t *v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  const char *v47; 
  const vec4_t *v48; 
  __int128 v49; 
  const dvar_t *v50; 
  bool enabled; 
  const dvar_t *v52; 
  const MemBudget_PollArray *CurrentBudgets; 
  unsigned int v54; 
  __int64 *v55; 
  MemBudget_PollArray *p_readings; 
  __int64 v57; 
  __int64 v58; 
  char v59; 
  unsigned __int8 ParentPollType; 
  __int64 v61; 
  char *v62; 
  const char *v63; 
  const char *v64; 
  const char *PollTypeName; 
  const char *v66; 
  const vec4_t *v67; 
  __int128 v68; 
  vec4_t v69; 
  MemBudget_PollData outPoll; 
  __int64 v71[4]; 
  int v72; 
  __int16 v73; 

  v6 = alloca(v5);
  v9 = *(_OWORD *)&y;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1327, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1328, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  if ( MemBudget_Poll_FramesSinceLastUpdate() > 0x3C )
    return CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&y, width, "Budgets", " Waiting for poll", &colorRed, 0.75, 0.75, 0.80000001, 0) + *(float *)&y;
  MemBudget_Poll_GetLastUpdateForHUD(&outPoll);
  v11 = DCONST_DVARBOOL_cg_drawStreamAOFSizes;
  if ( !DCONST_DVARBOOL_cg_drawStreamAOFSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamAOFSizes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = ((unsigned __int64)outPoll.readings.pollValues[8] >> 20) + ((unsigned __int64)outPoll.readings.pollValues[9] >> 20);
    v13 = j_va("%umb/%umb", (unsigned __int64)outPoll.readings.pollValues[7] >> 20, v12);
    color = &colorWhite;
    if ( v12 < 0x64 )
      color = &colorRed;
    v15 = *(_OWORD *)&y;
    *(float *)&v15 = *(float *)&y + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&y, width, v13, " Stm Alw/Opt+Free", color, 0.75, 0.75, 0.80000001, 0);
    v9 = v15;
  }
  v16 = DCONST_DVARBOOL_cg_drawFFCLTSizes;
  if ( !DCONST_DVARBOOL_cg_drawFFCLTSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFFCLTSizes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    v17 = j_va("%umb/%umb/%umb", (unsigned __int64)outPoll.readings.pollValues[18] >> 20, (unsigned __int64)outPoll.readings.pollValues[19] >> 20, (unsigned __int64)(outPoll.readings.pollValues[26] + outPoll.readings.pollValues[28] + outPoll.readings.pollValues[29] + outPoll.readings.pollValues[27]) >> 20);
    v18 = v9;
    *(float *)&v18 = *(float *)&v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v9, width, v17, " FF Common/Level/Transient", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v9 = v18;
  }
  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
  {
    v19 = DVARBOOL_db_forceUHDImageFlags;
    if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( !v19->current.enabled )
    {
      v20 = DCONST_DVARBOOL_cg_drawXB3FreeTest;
      if ( !DCONST_DVARBOOL_cg_drawXB3FreeTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawXB3FreeTest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
      {
        v21 = MemBudget_Project_GetFreeXB3MemTest() / 0x100000;
        v22 = j_va("%dmb", (unsigned int)v21);
        v23 = &colorWhite;
        if ( (int)v21 < 300 )
          v23 = &colorRed;
        v24 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, *(float *)&v9, width, v22, " XB3 Free Test", v23);
        v25 = v9;
        *(float *)&v25 = *(float *)&v9 + *(float *)&v24;
        v9 = v25;
      }
      v26 = DCONST_DVARBOOL_cg_drawXB3FreeShip;
      if ( !DCONST_DVARBOOL_cg_drawXB3FreeShip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawXB3FreeShip") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
      {
        v27 = MemBudget_Project_GetFreeXB3MemShip() / 0x100000;
        IsActive = CL_TransientsWorldMP_IsActive();
        MinimumDesiredFreeShipMem = MemBudget_Project_GetMinimumDesiredFreeShipMem(IsActive);
        v30 = &colorWhite;
        v31 = MinimumDesiredFreeShipMem / 0x100000;
        v32 = v31;
        if ( (int)v27 < (int)v31 )
          v30 = &colorRed;
        v33 = *v30;
        v34 = "%dmb (>%d)";
        if ( (int)v27 < (int)v31 )
          v34 = "%dmb (<%d)";
        v69 = v33;
        v35 = j_va(v34, (unsigned int)v27, (unsigned int)v31);
        label = " XB3 Free Ship (GOOD)";
        if ( (int)v27 < v32 )
          label = " XB3 Free Ship (BAD)";
        v37 = v9;
        *(float *)&v37 = *(float *)&v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v9, width, v35, label, &v69, 0.75, 0.75, 0.80000001, 0);
        v9 = v37;
      }
      v38 = DCONST_DVARBOOL_cg_drawMemreportBudget;
      if ( !DCONST_DVARBOOL_cg_drawMemreportBudget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMemreportBudget") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      if ( v38->current.enabled )
      {
        MemreportTotalBudget = MemBudget_Project_GetMemreportTotalBudget();
        v40 = j_va("%dmb", MemreportTotalBudget / 0x100000);
        v41 = v9;
        *(float *)&v41 = *(float *)&v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v9, width, v40, " Memreport Total Budget", &colorWhite, 0.75, 0.75, 0.80000001, 0);
        MemreportLevelFastfileBudget = MemBudget_Project_GetMemreportLevelFastfileBudget();
        v43 = j_va("%dmb", MemreportLevelFastfileBudget / 0x100000);
        *(float *)&v41 = *(float *)&v41 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v41, width, v43, " Memreport Level Fastfile", &colorWhite, 0.75, 0.75, 0.80000001, 0);
        v9 = v41;
      }
    }
  }
  v44 = DCONST_DVARBOOL_cg_drawTransientWorldSizes;
  if ( !DCONST_DVARBOOL_cg_drawTransientWorldSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientWorldSizes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.enabled && CL_TransientsWorldMP_IsActive() )
  {
    v45 = outPoll.readings.pollValues[27];
    v46 = CL_TransientsWorldMP_GetBudgetBytes() >> 20;
    v47 = j_va("%dmb/%dmb", (unsigned int)(v45 >> 20), (unsigned int)v46);
    v48 = &colorWhite;
    if ( (int)v46 < 100 )
      v48 = &colorRed;
    v49 = v9;
    *(float *)&v49 = *(float *)&v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v9, width, v47, " MPWorld Used/Budget", v48, 0.75, 0.75, 0.80000001, 0);
    v9 = v49;
  }
  v50 = DCONST_DVARBOOL_cg_drawBudgets;
  if ( !DCONST_DVARBOOL_cg_drawBudgets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBudgets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  enabled = v50->current.enabled;
  v52 = DCONST_DVARBOOL_cg_drawOverbudget;
  if ( !DCONST_DVARBOOL_cg_drawOverbudget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawOverbudget") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( v52->current.enabled || enabled )
  {
    memset(v71, 0, sizeof(v71));
    v72 = 0;
    v73 = 0;
    CurrentBudgets = MemBudget_BudgetFile_GetCurrentBudgets();
    *(_QWORD *)v69.v = CurrentBudgets;
    v54 = 0;
    v55 = v71;
    p_readings = &outPoll.readings;
    do
    {
      v57 = p_readings->pollValues[0];
      v58 = CurrentBudgets->pollValues[(unsigned __int8)v54];
      v59 = v58 && v57 > v58;
      ParentPollType = MemBudget_Poll_GetParentPollType((MemBudget_PollType)(unsigned __int8)v54);
      if ( ParentPollType != 38 )
        v59 |= *((_BYTE *)v71 + ParentPollType);
      *(_BYTE *)v55 = v59;
      if ( enabled || v59 )
      {
        v61 = v57 / 0x100000;
        if ( v58 )
          v62 = j_va("%dmb/%dmb", (unsigned int)v61, v58 / 0x100000);
        else
          v62 = j_va("%dmb", (unsigned int)v61);
        v63 = v62;
        v64 = "Budget";
        if ( v59 )
          v64 = "OVERBUDGET";
        PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)v54);
        v66 = j_va(" %s %s", PollTypeName, v64);
        v67 = &colorWhite;
        if ( v59 )
          v67 = &colorRed;
        v68 = v9;
        *(float *)&v68 = *(float *)&v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v9, width, v63, v66, v67, 0.75, 0.75, 0.80000001, 0);
        v9 = v68;
      }
      CurrentBudgets = *(const MemBudget_PollArray **)v69.v;
      ++v54;
      p_readings = (MemBudget_PollArray *)((char *)p_readings + 8);
      v55 = (__int64 *)((char *)v55 + 1);
    }
    while ( v54 < 0x26 );
  }
  return *(float *)&v9;
}

/*
==============
CG_DrawDebug_PrintMemoryStats
==============
*/
float CG_DrawDebug_PrintMemoryStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  float v7; 
  unsigned __int64 DevMemorySize; 
  unsigned int v9; 
  const char *v10; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 CommitSize; 
  const char *v14; 

  v7 = y;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1253, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 1254, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  if ( CL_TransientsWorldMP_IsActive() && !Com_FrontEnd_IsInFrontEnd() && Com_IsAnyLocalServerRunning() )
    v7 = y + CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, "TRWORLD STM WARNING", " LISTEN SERVER", &colorRed, 0.75, 0.75, 0.80000001, 0);
  DevMemorySize = Mem_Paged_GetDevMemorySize();
  v9 = truncate_cast<unsigned int,unsigned __int64>(DevMemorySize >> 20);
  if ( v9 )
  {
    v10 = j_va("%dmb", v9);
    v7 = v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, v10, " addt'l title mem", &colorLtBlue, 0.75, 0.75, 0.80000001, 0);
  }
  if ( Physics_GetDebugMemorySize() )
    v7 = v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, "PHYSICS DEBUG", " ENABLED", &colorLtBlue, 0.75, 0.75, 0.80000001, 0);
  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
  {
    v11 = DVARBOOL_db_forceUHDImageFlags;
    if ( !DVARBOOL_db_forceUHDImageFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forceUHDImageFlags") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      v7 = v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, "ENABLED", " FORCE UHD VFX IMAGES", &colorLtBlue, 0.75, 0.75, 0.80000001, 0);
  }
  if ( IWMem_HasHadInternalError() )
    v7 = v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, "IWMEM", " INTERNAL ERROR", &colorRed, 0.75, 0.75, 0.80000001, 0);
  v12 = R_RT_GetCommitSizeMax() / 0x100000;
  CommitSize = R_RT_GetCommitSize();
  v14 = j_va("%umb/%umb", CommitSize / 0x100000, (unsigned int)v12);
  return CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, v14, " RT Total/Max", &colorWhite, 0.75, 0.75, 0.80000001, 0) + v7;
}

/*
==============
CG_DrawDebug_PrintMessageRate
==============
*/
float CG_DrawDebug_PrintMessageRate(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  __int64 v7; 
  unsigned __int8 ActiveGameMode; 
  int v9; 
  unsigned int v10; 
  ClConnection *v11; 
  unsigned int m_numPacketsReceived; 
  signed int v13; 
  const vec4_t *v14; 
  const char *v15; 
  char *label; 
  char *labela; 
  vec4_t *color; 
  vec4_t *colora; 

  v7 = localClientNum;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) )
    return y;
  if ( (unsigned int)v7 >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
    LODWORD(colora) = 2;
    LODWORD(labela) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", labela, colora) )
      __debugbreak();
  }
  if ( clientUIActives[v7].frontEndSceneState[0] || CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v7) != CA_ACTIVE )
    return y;
  v9 = Sys_Milliseconds();
  v10 = v9 - s_lastMsgPerSecDisplayTime;
  if ( v9 - s_lastMsgPerSecDisplayTime <= 1000 )
    goto LABEL_28;
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(color) = 2;
    LODWORD(label) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", label, color) )
      __debugbreak();
  }
  if ( ClConnection::ms_connections[v7] )
    goto LABEL_18;
  if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
    __debugbreak();
  if ( ClConnection::ms_connections[v7] )
  {
LABEL_18:
    if ( (unsigned int)v7 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&color = cl_maxLocalClients;
      LODWORD(label) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", label, color) )
        __debugbreak();
    }
    if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
      __debugbreak();
    if ( !ClConnection::ms_connections[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v11 = ClConnection::ms_connections[v7];
    s_lastMsgPerSecDisplayTime = v9;
    m_numPacketsReceived = v11->m_numPacketsReceived;
    LODWORD(v11) = 1000 * (m_numPacketsReceived - s_lastNumPacketsReceived);
    s_lastNumPacketsReceived = m_numPacketsReceived;
    v13 = (unsigned int)v11 / v10;
    s_msgsPerSec = v13;
  }
  else
  {
LABEL_28:
    v13 = s_msgsPerSec;
  }
  if ( v13 < 20 )
  {
    v14 = &colorYellow;
    if ( v13 < 10 )
      v14 = &colorRed;
  }
  else
  {
    v14 = &colorGreen;
  }
  v15 = j_va("%d", (unsigned int)v13);
  return y + CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, v15, " msgs/sec", v14, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CG_DrawDebug_PrintMisc
==============
*/
float CG_DrawDebug_PrintMisc(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  const dvar_t *v6; 
  float v8; 
  int FreeDObjCount; 
  unsigned int MaxDObjCount; 
  const char *v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  int TreeCurrentMemUsage; 
  int TreeMaxMemUsage; 
  const char *v17; 
  float v18; 
  const char *v19; 
  float v20; 
  const char *v21; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  int outNumAnimInfos; 
  int outAnimInfoUsage; 
  int outAnimInfoMaxUsage; 
  int outCustomNodeUsage; 
  int outCustomNodeMaxUsage[20]; 

  v6 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = width;
  if ( v6->current.integer < 2 )
  {
    v13 = y;
  }
  else
  {
    FreeDObjCount = Com_GetFreeDObjCount();
    MaxDObjCount = Com_GetMaxDObjCount();
    v11 = j_va("%i/%i", MaxDObjCount - FreeDObjCount, MaxDObjCount);
    v12 = CG_DrawDebug_CornerPrintScale(scrPlace, x, y, v8, v11, " used DObjs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v13 = v12 + y;
  }
  v14 = DCONST_DVARBOOL_xanim_drawMemoryStats;
  if ( !DCONST_DVARBOOL_xanim_drawMemoryStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawMemoryStats") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.enabled )
    return v13;
  TreeCurrentMemUsage = XAnimGetTreeCurrentMemUsage(&outAnimInfoUsage, &outCustomNodeUsage);
  TreeMaxMemUsage = XAnimGetTreeMaxMemUsage(&outAnimInfoMaxUsage, outCustomNodeMaxUsage);
  XAnimGetNumAllocatedAnimNodes(&outNumAnimInfos, (int *)&y);
  LODWORD(fmt) = outNumAnimInfos;
  v17 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(outAnimInfoUsage / 1024), (unsigned int)(outAnimInfoMaxUsage / 1024), (unsigned int)(100 * outAnimInfoUsage / outAnimInfoMaxUsage), fmt);
  v18 = v13 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v13, v8, v17, " xaniminfo nodes", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  *(float *)&fmta = y;
  v19 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(outCustomNodeUsage / 1024), (unsigned int)(outCustomNodeMaxUsage[0] / 1024), (unsigned int)(100 * outCustomNodeUsage / outCustomNodeMaxUsage[0]), fmta);
  v20 = v18 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v18, v8, v19, " xanim custom nodes", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  LODWORD(fmtb) = LODWORD(y) + outNumAnimInfos;
  v21 = j_va("%i/%iKb (%i%%) %i", (unsigned int)(TreeCurrentMemUsage / 1024), (unsigned int)(TreeMaxMemUsage / 1024), (unsigned int)(100 * TreeCurrentMemUsage / TreeMaxMemUsage), fmtb);
  return v20 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v20, v8, v21, " xanim total nodes", &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CG_DrawDebug_PrintPerfStats
==============
*/

float __fastcall CG_DrawDebug_PrintPerfStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, double x, double y, float width)
{
  __int128 v6; 
  const dvar_t *v7; 
  CgDrawDebug *v9; 
  __int128 v10; 
  __int128 v11; 
  float v12; 
  GfxPrimStatTotals *v13; 
  const vec4_t *v14; 
  int integer; 
  double v16; 
  const char **v17; 
  unsigned int v18; 
  unsigned int *p_fxIndexCount; 
  __int128 v20; 
  __int128 v21; 
  double v22; 
  __int64 v23; 
  __int128 v26; 
  __int128 v27; 
  const char *v33; 
  __int128 v34; 
  CgDrawDebug *v35; 
  double v36; 
  unsigned int *p_primCount; 
  char *v38; 
  const char **v39; 
  double v40; 
  __int128 v43; 
  const vec4_t *v45; 
  const vec4_t *v51; 
  float v54; 
  bool v55; 
  __int128 v56; 
  __int128 v57; 
  double v58; 
  const char **v59; 
  unsigned int v60; 
  unsigned int *v61; 
  __int128 v62; 
  __int128 v63; 
  double v64; 
  __int128 v65; 
  double v66; 
  float v67; 
  const vec4_t *v70; 
  float v71; 
  const vec4_t *v72; 
  float v73; 
  float v74; 
  float v75; 
  __int128 v80; 
  __int64 v81; 
  const vec4_t *BudgetLimitColor; 
  __int128 v84; 
  double v85; 
  __int128 v86; 
  __int128 v87; 
  char *v89; 
  const char **v90; 
  unsigned int *p_viewIndexCount; 
  char *v92; 
  double v93; 
  unsigned int v94; 
  __int128 v97; 
  const vec4_t *v99; 
  float v103; 
  const vec4_t *v106; 
  float v111; 
  const vec4_t *v113; 
  float v117; 
  const vec4_t *v120; 
  float v124; 
  const vec4_t *v127; 
  float v131; 
  const vec4_t *v134; 
  const vec4_t *v140; 
  float v143; 
  double v144; 
  __int128 v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  unsigned int v152; 
  unsigned int *v153; 
  int v154; 
  signed int v155; 
  unsigned int v156; 
  ScreenPlacement *v157; 
  CgDrawDebug *v158; 
  unsigned int *v159; 
  double v160; 
  double v161; 
  double v162; 
  __int128 v163; 
  double v164; 
  double v165; 
  __int128 v166; 
  double v167; 
  double v168; 
  double v169; 
  double v170; 
  double v171; 
  double v172; 
  __int128 v173; 
  const dvar_t *v174; 
  int v175; 
  GfxDrawListType v176; 
  __int128 v177; 
  unsigned int *v178; 
  __int128 v179; 
  unsigned int v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  unsigned int v185; 
  const char *DrawListTypeName; 
  const dvar_t *v187; 
  int v188; 
  float v189; 
  float v190; 
  __int128 v191; 
  __int64 v192; 
  double v193; 
  __int128 v194; 
  double v195; 
  double v196; 
  double v197; 
  double v198; 
  double v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  char *v204; 
  __int64 v205; 
  const char **v206; 
  const vec4_t *v207; 
  __int128 v208; 
  char *fmt; 
  char *fmta; 
  char *text; 
  char *texta; 
  vec4_t *color; 
  __int64 maxVal; 
  __int64 peakVal; 
  __int64 hiThresholdPercent; 
  int val; 
  char *vala; 
  int valb; 
  unsigned int *valc; 
  GfxPrimStatTotals *CurrentStatTracker; 
  char *v223; 
  int v224; 
  int v225; 
  __int64 v226; 
  __int64 v227; 
  int v228; 
  int v229; 
  unsigned int stats; 
  unsigned int *p_shadowIndexCount; 
  ScreenPlacement *scrPlacea; 
  GfxPrimStatTotals outTotals; 
  __int64 v235[5]; 
  char labelWidth[256]; 
  char dest[64]; 
  __int128 v238; 

  v7 = DVARINT_cg_drawFPS;
  scrPlacea = (ScreenPlacement *)scrPlace;
  v9 = (CgDrawDebug *)draw;
  v10 = *(_OWORD *)&y;
  LODWORD(v11) = LODWORD(x);
  v12 = *(float *)&y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer >= 3 )
  {
    CurrentStatTracker = (GfxPrimStatTotals *)R_GetCurrentStatTracker();
    v13 = CurrentStatTracker;
    if ( CurrentStatTracker )
    {
      RB_Stats_GatherPrimStatTotals(&outTotals);
      v14 = &colorRed;
      *CurrentStatTracker = outTotals;
      integer = r_gpShowStats->current.integer;
      if ( !integer )
        goto LABEL_99;
      v238 = v6;
      if ( integer == 1 )
      {
        v16 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&x, *(float *)&y, width, "-GPU Pipeline Stats-", &colorLtBlue);
        v17 = g_gpPassNames;
        v18 = 0;
        p_fxIndexCount = &CurrentStatTracker[132].fxIndexCount;
        v21 = *(_OWORD *)&y;
        *(float *)&v21 = *(float *)&y + *(float *)&v16;
        v20 = v21;
        while ( 1 )
        {
          v22 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&x, *(float *)&v20, width, *v17, &colorPurple);
          v23 = *p_fxIndexCount;
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r8d
          }
          v27 = v20;
          *(float *)&v27 = *(float *)&v20 + *(float *)&v22;
          v26 = v27;
          if ( v18 )
          {
            if ( *(double *)&_XMM1 * 0.000001144409616245123 <= 0.5722048081225617 )
            {
              v14 = &colorYellow;
              if ( *(double *)&_XMM1 * 0.000001144409616245123 <= 0.3204346925486345 )
                v14 = &colorWhite;
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v23, 873813i64);
            v33 = " GP Tris";
          }
          else
          {
            if ( *(double *)&_XMM1 * 0.0000003814697265625 <= 0.3814697265625 )
            {
              v14 = &colorYellow;
              if ( *(double *)&_XMM1 * 0.0000003814697265625 <= 0.2288818359375 )
                v14 = &colorWhite;
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v23, 2621440i64);
            _XMM1 = 0i64;
            __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rbx] }
            *(float *)&v27 = *(float *)&v27 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&x, *(float *)&v27, width, labelWidth, " GP Tris (Prepass)", v14, 0.75, 0.75, 0.80000001, 0);
            v26 = v27;
            __asm { vandpd  xmm0, xmm1, xmm13 }
            if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
            {
              _XMM0 = 0i64;
              __asm { vcvtsi2sd xmm0, xmm0, r8d }
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 0.55 )
              {
                v14 = &colorYellow;
                if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 0.35 )
                  v14 = &colorWhite;
              }
              else
              {
                v14 = &colorRed;
              }
            }
            else
            {
              v14 = &colorPink;
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", p_fxIndexCount[10], 873813i64);
            v33 = " GP Tris (Lit Pass)";
          }
          _XMM1 = *(_OWORD *)&x;
          ++v18;
          ++p_fxIndexCount;
          ++v17;
          v34 = v26;
          *(float *)&v34 = *(float *)&v26 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&x, *(float *)&v26, width, labelWidth, v33, v14, 0.75, 0.75, 0.80000001, 0);
          v20 = v34;
          if ( v18 >= 2 )
            break;
          v14 = &colorRed;
        }
        v35 = (CgDrawDebug *)draw;
        v36 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&x, *(float *)&v34, width, "-Unified Geo Buffer Stats-", &colorLtBlue);
        v226 = 3i64;
        p_primCount = &CurrentStatTracker[142].primCount;
        v38 = (char *)((char *)g_unifiedBufferPhysPageMemLimit - (char *)CurrentStatTracker);
        *(float *)&v34 = *(float *)&v34 + *(float *)&v36;
        v10 = v34;
        v39 = g_unifiedBufferNames;
        do
        {
          Com_sprintf<256>((char (*)[256])labelWidth, "-%s-", *v39);
          v40 = CgDrawDebug::CornerPrintCaption(v35, scrPlace, *(float *)&x, *(float *)&v10, width, labelWidth, &colorMdCyan);
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, r9
          }
          v43 = v10;
          *(float *)&v43 = *(float *)&v10 + *(float *)&v40;
          __asm { vandpd  xmm0, xmm1, xmm13 }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, eax }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v45 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v45 = &colorWhite;
            }
            else
            {
              v45 = &colorRed;
            }
          }
          else
          {
            v45 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)((int)*(p_primCount - 6) / 1024), *(unsigned int *)((char *)p_primCount + (_QWORD)v38 - 2856) >> 10);
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, rcx }
          *(float *)&v43 = *(float *)&v43 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&x, *(float *)&v43, width, labelWidth, " Phys Buffer Memory", v45, 0.75, 0.75, 0.80000001, 0);
          __asm { vandpd  xmm0, xmm1, xmm13 }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, eax }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v51 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v51 = &colorWhite;
            }
            else
            {
              v51 = &colorRed;
            }
          }
          else
          {
            v51 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)((int)*p_primCount / 1024), *(unsigned int *)((char *)p_primCount + (_QWORD)v38 - 2856) >> 10);
          _XMM1 = *(_OWORD *)&x;
          v54 = CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&x, *(float *)&v43, width, labelWidth, " Phys Memory Watermark", v51, 0.75, 0.75, 0.80000001, 0);
          v35 = (CgDrawDebug *)draw;
          ++v39;
          ++p_primCount;
          v55 = v226-- == 1;
          *(float *)&v43 = *(float *)&v43 + v54;
          v10 = v43;
        }
        while ( !v55 );
        v12 = *(float *)&y;
        v9 = (CgDrawDebug *)draw;
      }
      else
      {
        if ( integer != 2 )
          goto LABEL_99;
        v57 = *(_OWORD *)&x;
        *(float *)&v57 = *(float *)&x + -250.0;
        v56 = v57;
        v58 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&x + -250.0, *(float *)&y, width, "-GPU Pipeline Stats-", &colorLtBlue);
        v59 = g_gpPassNames;
        v60 = 0;
        val = 0;
        v61 = &CurrentStatTracker[132].fxIndexCount;
        v63 = *(_OWORD *)&y;
        *(float *)&v63 = *(float *)&y + *(float *)&v58;
        v62 = v63;
        do
        {
          v64 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v56, *(float *)&v62, width, *v59, &colorPurple);
          v65 = v62;
          *(float *)&v65 = *(float *)&v62 + *(float *)&v64;
          if ( v60 )
          {
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *v61, 2621440i64);
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, ebx; val }
            BudgetLimitColor = GetBudgetLimitColor(*(const long double *)&_XMM0, 2621440.0, 0.3204346925486345, 0.5722048081225617);
            *(float *)&v65 = *(float *)&v65 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Tris", BudgetLimitColor, 0.75, 0.75, 0.80000001, 0);
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[2], 0x40000i64);
            *(float *)&v65 = *(float *)&v65 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Clusters", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            v80 = v65;
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[4], v61[6]);
            *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            v81 = v61[8];
          }
          else
          {
            v66 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v56, *(float *)&v65, width, "Prepass", &colorLtBlue);
            v67 = *(float *)&v65 + *(float *)&v66;
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *v61, 2621440i64);
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, ebx; val }
            v70 = GetBudgetLimitColor(*(const long double *)&_XMM0, 2621440.0, 0.2288818359375, 0.3814697265625);
            v71 = v67 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, v67, width, labelWidth, " GP Tris", v70, 0.75, 0.75, 0.80000001, 0);
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[2], 0x40000i64);
            v72 = &colorWhite;
            v73 = v71 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, v71, width, labelWidth, " GP Clusters", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[4], v61[6]);
            v74 = v73 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, v73, width, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[8], v61[22]);
            v75 = v74 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, v74, width, labelWidth, " GP Batches Drawn/Total", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v56, v75, width, "Lit Pass", &colorLtBlue);
            _XMM1 = 0i64;
            __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rsi] }
            *(float *)&v65 = v75 + *(float *)&_XMM0;
            __asm { vandpd  xmm0, xmm1, xmm13 }
            if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
            {
              _XMM0 = 0i64;
              __asm { vcvtsi2sd xmm0, xmm0, r8d }
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 0.55 )
              {
                if ( *(double *)&_XMM0 / *(double *)&_XMM1 > 0.35 )
                  v72 = &colorYellow;
              }
              else
              {
                v72 = &colorRed;
              }
            }
            else
            {
              v72 = &colorPink;
            }
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[10], 873813i64);
            *(float *)&v65 = *(float *)&v65 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Tris", v72, 0.75, 0.75, 0.80000001, 0);
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[12], 0x40000i64);
            *(float *)&v65 = *(float *)&v65 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Clusters", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            v80 = v65;
            Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[14], v61[16]);
            *(float *)&_XMM0 = CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v65, width, labelWidth, " GP Batch Indices Max/Wtrmrk", &colorWhite, 0.75, 0.75, 0.80000001, 0);
            v81 = v61[18];
          }
          v84 = v80;
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v81, v61[22]);
          *(float *)&v84 = (float)(*(float *)&v80 + *(float *)&_XMM0) + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v80 + *(float *)&_XMM0, width, labelWidth, " GP Batches Drawn/Total", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          v85 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v56, *(float *)&v84, width, "---", &colorLtBlue);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[20], 0x10000i64);
          *(float *)&v84 = (float)(*(float *)&v84 + *(float *)&v85) + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84 + *(float *)&v85, width, labelWidth, " GP SubMeshes", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[22], 0x4000i64);
          *(float *)&v84 = *(float *)&v84 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84, width, labelWidth, " GP Batches", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[24], g_gpTypedSurfLimits[2]);
          *(float *)&v84 = *(float *)&v84 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84, width, labelWidth, " GP Static Surfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[26], g_gpTypedSurfLimits[0]);
          *(float *)&v84 = *(float *)&v84 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84, width, labelWidth, " GP Rigid Surfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[28], g_gpTypedSurfLimits[1]);
          *(float *)&v84 = *(float *)&v84 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84, width, labelWidth, " GP Skinned Surfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", v61[30], 0x10000i64);
          v60 = val + 1;
          ++v61;
          ++v59;
          val = v60;
          *(float *)&v84 = *(float *)&v84 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v56, *(float *)&v84, width, labelWidth, " GP Surfs Total", &colorWhite, 0.75, 0.75, 0.80000001, 0);
          v62 = v84;
        }
        while ( v60 < 2 );
        v86 = v56;
        *(float *)&v86 = *(float *)&v56 + 250.0;
        v11 = v86;
        v12 = *(float *)&y;
        *(double *)&_XMM0 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v86, *(float *)&y, width, "-Unified Geo Buffer Stats-", &colorLtBlue);
        v87 = _XMM0;
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[138].shadowIndexCount, 0xFFFFi64);
        *(float *)&v87 = (float)(*(float *)&_XMM0 + *(float *)&y) + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, *(float *)&_XMM0 + *(float *)&y, width, labelWidth, " UGB Resident XSurfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[138].primCount, 0xFFFFi64);
        *(float *)&v87 = *(float *)&v87 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, *(float *)&v87, width, labelWidth, " UGB Delta XSurfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
        Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", CurrentStatTracker[139].geoIndexCount, 0xFFFFi64);
        _XMM1 = v11;
        v89 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
        v90 = g_unifiedBufferNames;
        v223 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
        p_viewIndexCount = &CurrentStatTracker[140].viewIndexCount;
        *(float *)&v87 = *(float *)&v87 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, *(float *)&v87, width, labelWidth, " UGB XSurfs", &colorWhite, 0.75, 0.75, 0.80000001, 0);
        v10 = v87;
        v227 = 3i64;
        vala = (char *)((char *)g_unifiedBufferPhysPageLimit - (char *)CurrentStatTracker);
        v92 = (char *)((char *)g_unifiedBufferPhysPageMemLimit - (char *)CurrentStatTracker);
        do
        {
          Com_sprintf<256>((char (*)[256])labelWidth, "-%s-", *v90);
          v93 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, *(float *)&v11, *(float *)&v10, width, labelWidth, &colorMdCyan);
          v94 = *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)v89 - 2808);
          __asm
          {
            vxorpd  xmm1, xmm1, xmm1
            vcvtsi2sd xmm1, xmm1, rax
          }
          v97 = v10;
          *(float *)&v97 = *(float *)&v10 + *(float *)&v93;
          __asm { vandpd  xmm0, xmm1, xmm13 }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, r8d }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v99 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v99 = &colorWhite;
            }
            else
            {
              v99 = &colorRed;
            }
          }
          else
          {
            v99 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", p_viewIndexCount[3], v94);
          _XMM1 = 0i64;
          v103 = *(float *)&v97 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, *(float *)&v97, width, labelWidth, " Virt Pages In Use", v99, 0.75, 0.75, 0.80000001, 0);
          __asm
          {
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
          }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx] }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v106 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v106 = &colorWhite;
            }
            else
            {
              v106 = &colorRed;
            }
          }
          else
          {
            v106 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *p_viewIndexCount, *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)vala - 2808));
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, r9 }
          v111 = v103 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, v103, width, labelWidth, " Phys Pages In Use", v106, 0.75, 0.75, 0.80000001, 0);
          __asm { vandpd  xmm0, xmm1, xmm13 }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, eax }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v113 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v113 = &colorWhite;
            }
            else
            {
              v113 = &colorRed;
            }
          }
          else
          {
            v113 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)((int)p_viewIndexCount[6] / 1024), *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)v92 - 2808) >> 10);
          _XMM1 = 0i64;
          v117 = v111 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, v111, width, labelWidth, " Phys Buffer Memory", v113, 0.75, 0.75, 0.80000001, 0);
          __asm
          {
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
          }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, r8d }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v120 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v120 = &colorWhite;
            }
            else
            {
              v120 = &colorRed;
            }
          }
          else
          {
            v120 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *(p_viewIndexCount - 6), *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)v223 - 2808));
          _XMM1 = 0i64;
          v124 = v117 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, v117, width, labelWidth, " Allocated Virt Pages", v120, 0.75, 0.75, 0.80000001, 0);
          __asm
          {
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
          }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, r8d }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v127 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v127 = &colorWhite;
            }
            else
            {
              v127 = &colorRed;
            }
          }
          else
          {
            v127 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", *(p_viewIndexCount - 3), *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)v223 - 2808));
          _XMM1 = 0i64;
          v131 = v124 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, v124, width, labelWidth, " Virt Pages Paged In", v127, 0.75, 0.75, 0.80000001, 0);
          __asm
          {
            vcvtsi2sd xmm1, xmm1, rax
            vandpd  xmm0, xmm1, xmm13
          }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, r8d }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v134 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v134 = &colorWhite;
            }
            else
            {
              v134 = &colorRed;
            }
          }
          else
          {
            v134 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i", p_viewIndexCount[9], *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)vala - 2808));
          _XMM1 = 0i64;
          __asm { vcvtsi2sd xmm1, xmm1, r9 }
          *(float *)&v97 = v131 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, v131, width, labelWidth, " Phys Page Watermark", v134, 0.75, 0.75, 0.80000001, 0);
          __asm { vandpd  xmm0, xmm1, xmm13 }
          if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
          {
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, eax }
            if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 95.0 )
            {
              v140 = &colorYellow;
              if ( *(double *)&_XMM0 / *(double *)&_XMM1 <= 85.0 )
                v140 = &colorWhite;
            }
            else
            {
              v140 = &colorRed;
            }
          }
          else
          {
            v140 = &colorPink;
          }
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i KB", (unsigned int)((int)p_viewIndexCount[12] / 1024), *(unsigned int *)((char *)p_viewIndexCount + (_QWORD)v92 - 2808) >> 10);
          _XMM1 = v11;
          v143 = CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v11, *(float *)&v97, width, labelWidth, " Phys Memory Watermark", v140, 0.75, 0.75, 0.80000001, 0);
          v89 = (char *)((char *)g_unifiedBufferVirtPageLimit - (char *)CurrentStatTracker);
          ++v90;
          ++p_viewIndexCount;
          v55 = v227-- == 1;
          *(float *)&v97 = *(float *)&v97 + v143;
          v10 = v97;
        }
        while ( !v55 );
        v9 = (CgDrawDebug *)draw;
      }
      v13 = CurrentStatTracker;
LABEL_99:
      if ( r_showStats->current.integer )
      {
        v144 = CgDrawDebug::CornerPrintCaption(v9, scrPlace, *(float *)&v11, *(float *)&v10, width, "-Render Stats-", &colorGreenFaded);
        v145 = v10;
        *(float *)&v145 = *(float *)&v10 + *(float *)&v144;
        R_GetSurfPosStats(&stats);
        v146 = 0;
        v147 = 0;
        v148 = 0;
        v149 = 0;
        v150 = 0;
        v151 = 0;
        v152 = 0;
        p_shadowIndexCount = &CurrentStatTracker[19].shadowIndexCount;
        v153 = &CurrentStatTracker[19].shadowIndexCount;
        v154 = 0;
        do
        {
          v155 = v153[89];
          v154 += *(v153 - 89);
          v147 += v155;
          v146 += *v153;
          v148 += v153[267];
          v156 = v153[445];
          if ( v152 - 24 <= 0x28 )
          {
            v151 += v156;
          }
          else
          {
            v149 += v153[356];
            v150 += v156;
          }
          if ( (int)v153[178] < v155 )
            v153[178] = v155;
          ++v152;
          ++v153;
        }
        while ( v152 < 0x59 );
        v228 = v148;
        v157 = scrPlacea;
        v224 = v146;
        v158 = (CgDrawDebug *)draw;
        valb = v154;
        v159 = p_shadowIndexCount;
        if ( (signed int)CurrentStatTracker[126].viewIndexCount < v147 )
          CurrentStatTracker[126].viewIndexCount = v147;
        v160 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v145, width, " Skinned cache", CurrentStatTracker[1].geoIndexCount, 11796480, CurrentStatTracker[1].fxIndexCount, 0.89999998, 0.75);
        *(float *)&v145 = *(float *)&v145 + *(float *)&v160;
        v161 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v145, width, " Dynamic surfs", stats, 0x40000, -1, 0.89999998, 0.75);
        *(float *)&v145 = *(float *)&v145 + *(float *)&v161;
        v162 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v145, width, " SModelSurfs", CurrentStatTracker[1].viewIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v145 = *(float *)&v145 + *(float *)&v162;
        v163 = v145;
        if ( r_showTriCounts->current.enabled )
        {
          v164 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v145, width, " XModelTris", CurrentStatTracker[1].shadowIndexCount, -1, -1, 0.89999998, 0.75);
          *(float *)&v145 = *(float *)&v145 + *(float *)&v164;
          v163 = v145;
        }
        v165 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v163, width, " BSPSurfsSource", valb, -1, -1, 0.89999998, 0.75);
        v166 = v163;
        *(float *)&v166 = *(float *)&v163 + *(float *)&v165;
        v167 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v163 + *(float *)&v165, width, " BSPSurfsEmitted", v224, 0x10000, -1, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v167;
        v168 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v166, width, " BSPSurfsLimit", v147, 0x10000, CurrentStatTracker[126].viewIndexCount, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v168;
        v169 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v166, width, " BSPIndirectArgs", v228, 0x10000, -1, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v169;
        v170 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v166, width, " BSPPrepassBatches", v149, -1, -1, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v170;
        v171 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v166, width, " BSPForwardBatches", v150, -1, -1, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v171;
        v172 = PrintRenderStat(draw, v157, *(float *)&v11, *(float *)&v166, width, " BSPShadowBatches", v151, -1, -1, 0.89999998, 0.75);
        *(float *)&v166 = *(float *)&v166 + *(float *)&v172;
        v173 = v166;
        if ( r_showStats->current.integer >= 2 )
        {
          Com_sprintf<256>((char (*)[256])labelWidth, "%-35s %-5s %-5s %-5s %-5s %-5s %-5s %-5s", "BSP Drawlist", "  Src", " Emit", "Limit", " Peak", " Args", "Prepa", "Batch");
          v174 = DVARBOOL_cg_drawFPSLabels;
          if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v174);
          v175 = CG_DrawDevString(v157, *(float *)&v11 - 250.0, v12, 0.75, 0.75, labelWidth, &colorGreenFaded, 6, cls.smallDevFont);
          v176 = DRAWLIST_FIRST;
          v177 = 0i64;
          *(float *)&v177 = (float)v175;
          v178 = &CurrentStatTracker[108].shadowIndexCount;
          v225 = 0;
          valc = &CurrentStatTracker[108].shadowIndexCount;
          *(float *)&v177 = (float)(*(float *)&v177 * 0.80000001) + v12;
          v179 = v177;
          do
          {
            v229 = *(v178 - 445);
            if ( v229 > 0 )
            {
              v180 = *v178;
              v181 = *(v178 - 89);
              v182 = *(v178 - 178);
              v183 = *(v178 - 267);
              v184 = *(v178 - 356);
              v185 = *(v178 - 534);
              DrawListTypeName = R_GetDrawListTypeName(v176);
              LODWORD(hiThresholdPercent) = v180;
              LODWORD(peakVal) = v181;
              LODWORD(maxVal) = v182;
              LODWORD(color) = v183;
              LODWORD(text) = v184;
              LODWORD(fmt) = v229;
              Com_sprintf<256>((char (*)[256])labelWidth, "%-35s %5d %5d %5d %5d %5d %5d %5d", DrawListTypeName, v185, fmt, text, color, maxVal, peakVal, hiThresholdPercent);
              v187 = DVARBOOL_cg_drawFPSLabels;
              if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v187);
              v188 = CG_DrawDevString(v157, *(float *)&v11 - 250.0, *(float *)&v179, 0.75, 0.75, labelWidth, &colorWhite, 6, cls.smallDevFont);
              v176 = v225;
              v189 = (float)v188;
              v178 = valc;
              v190 = v189 * 0.80000001;
              v191 = v179;
              *(float *)&v191 = *(float *)&v179 + v190;
              v179 = v191;
            }
            ++v176;
            ++v178;
            v225 = v176;
            valc = v178;
          }
          while ( (unsigned int)v176 < DRAWLIST_BACKEND_COUNT );
          v159 = p_shadowIndexCount;
          v158 = (CgDrawDebug *)draw;
        }
        *(_QWORD *)&CurrentStatTracker[1].viewIndexCount = 0i64;
        v192 = 89i64;
        do
        {
          *(v159 - 89) = 0;
          *v159 = 0;
          v159[89] = 0;
          v159[267] = 0;
          v159[356] = 0;
          v159[445] = 0;
          ++v159;
          --v192;
        }
        while ( v192 );
        v193 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v173, width, " Tris - fx", (signed int)CurrentStatTracker->fxIndexCount / 3, -1, -1, 0.89999998, 0.75);
        v194 = v173;
        *(float *)&v194 = *(float *)&v173 + *(float *)&v193;
        v195 = CgDrawDebug::CornerPrintCaption(v158, v157, *(float *)&v11, *(float *)&v173 + *(float *)&v193, width, "-Lights-", &colorGreenFaded);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v195;
        v196 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Primary lights", CurrentStatTracker[126].shadowIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v196;
        v197 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Disabled", CurrentStatTracker[126].primCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v197;
        v198 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Offloaded", CurrentStatTracker[127].geoIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v198;
        v199 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Need dyn shadow", CurrentStatTracker[127].shadowIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v199;
        v200 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Need static shadow", CurrentStatTracker[127].primCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v200;
        v201 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Dynamic omnis", CurrentStatTracker[127].fxIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v201;
        v202 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Dynamic spots", CurrentStatTracker[127].viewIndexCount, -1, -1, 0.89999998, 0.75);
        *(float *)&v194 = *(float *)&v194 + *(float *)&v202;
        v203 = PrintRenderStat(v158, v157, *(float *)&v11, *(float *)&v194, width, " Shadowmaps count", CurrentStatTracker[128].geoIndexCount, -1, -1, 0.89999998, 0.75);
        v235[0] = (__int64)"draw worker";
        v204 = (char *)&CurrentStatTracker[128].viewIndexCount;
        v205 = 4i64;
        v235[1] = (__int64)"async2D";
        v206 = (const char **)v235;
        v235[2] = (__int64)"compute frontend";
        v235[3] = (__int64)"compute backend";
        *(float *)&v194 = *(float *)&v194 + *(float *)&v203;
        v10 = v194;
        do
        {
          LODWORD(texta) = *((_DWORD *)v204 + 2);
          LODWORD(fmta) = *(_DWORD *)v204;
          Com_sprintf<256>((char (*)[256])labelWidth, "%i/%i pages - %i/%i descs", *((unsigned int *)v204 - 1), *((unsigned int *)v204 + 1), fmta, texta);
          Com_sprintf<64>((char (*)[64])dest, "Desc heap %s highest", *v206);
          v207 = &colorWhite;
          if ( v204[12] )
            v207 = &colorRed;
          v204 += 20;
          ++v206;
          v208 = v10;
          *(float *)&v208 = *(float *)&v10 + CG_DrawDebug_CornerPrintScale(v157, *(float *)&v11, *(float *)&v10, width, labelWidth, dest, v207, 0.75, 0.75, 0.80000001, 0);
          v10 = v208;
          --v205;
        }
        while ( v205 );
      }
      else
      {
        v13[126].viewIndexCount = 0;
      }
    }
  }
  return *(float *)&v10;
}

/*
==============
CG_DrawDebug_PrintRtStats
==============
*/
float CG_DrawDebug_PrintRtStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  float v7; 
  double v8; 
  float v9; 
  const char *v10; 
  float v11; 
  const char *v12; 
  const char *v13; 
  float v14; 
  const char *v15; 
  const char *v16; 
  char *v18; 
  char *v19; 
  R_RT_Tracking_DebugDrawStats outDebugDrawStats; 

  v7 = y;
  if ( R_RT_Tracking_AsyncGetDebugDrawStats(&outDebugDrawStats) )
  {
    v8 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, x, y, width, "-RT Stats-", &colorGreenFaded);
    v9 = y + *(float *)&v8;
    *(float *)&v8 = CG_DrawDebug_CornerPrintScale(scrPlace, x, y + *(float *)&v8, width, "val/min/max/avg", (const char *)&queryFormat.fmt + 3, &colorWhiteFaded, 0.75, 0.75, 0.80000001, 0);
    LODWORD(v18) = outDebugDrawStats.m_surfaces.m_avg;
    v10 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_surfaces.m_val, outDebugDrawStats.m_surfaces.m_min, outDebugDrawStats.m_surfaces.m_max, v18);
    v11 = (float)(v9 + *(float *)&v8) + CG_DrawDebug_CornerPrintScale(scrPlace, x, v9 + *(float *)&v8, width, v10, " surfaces", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v7 = v11;
    if ( outDebugDrawStats.m_committedMB.m_val || __PAIR64__(outDebugDrawStats.m_committedMB.m_min, 0) != outDebugDrawStats.m_committedMB.m_max || outDebugDrawStats.m_committedMB.m_avg )
    {
      LODWORD(v19) = outDebugDrawStats.m_committedMB.m_avg;
      v12 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_committedMB.m_val, outDebugDrawStats.m_committedMB.m_min, outDebugDrawStats.m_committedMB.m_max, v19);
      v7 = v11 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v11, width, v12, " MB commit", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
    if ( outDebugDrawStats.m_heapReservedMB && (outDebugDrawStats.m_heapCommittedMB.m_val || __PAIR64__(outDebugDrawStats.m_heapCommittedMB.m_min, 0) != outDebugDrawStats.m_heapCommittedMB.m_max || outDebugDrawStats.m_heapCommittedMB.m_avg) )
    {
      LODWORD(v19) = outDebugDrawStats.m_heapCommittedMB.m_avg;
      v13 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_heapCommittedMB.m_val, outDebugDrawStats.m_heapCommittedMB.m_min, outDebugDrawStats.m_heapCommittedMB.m_max, v19);
      v14 = v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, v13, " MB heap commit", &colorWhite, 0.75, 0.75, 0.80000001, 0);
      v15 = j_va("%4d", outDebugDrawStats.m_heapReservedMB);
      v7 = v14 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v14, width, v15, " MB heap reserve", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
    if ( outDebugDrawStats.m_deadCommittedMB.m_val || __PAIR64__(outDebugDrawStats.m_deadCommittedMB.m_min, 0) != outDebugDrawStats.m_deadCommittedMB.m_max || outDebugDrawStats.m_deadCommittedMB.m_avg )
    {
      LODWORD(v19) = outDebugDrawStats.m_deadCommittedMB.m_avg;
      v16 = j_va("%3d/%3d/%3d/%3d", outDebugDrawStats.m_deadCommittedMB.m_val, outDebugDrawStats.m_deadCommittedMB.m_min, outDebugDrawStats.m_deadCommittedMB.m_max, v19);
      return v7 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v7, width, v16, " MB dead commit", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
  }
  return v7;
}

/*
==============
CG_DrawDebug_PrintServerProfile
==============
*/
float CG_DrawDebug_PrintServerProfile(const LocalClientNum_t localClientNum, const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  int m_serverFrameDuration; 
  const volatile ServerProfileTimes *ProfileTimes; 
  float *p_frameTime; 
  const vec4_t *v12; 
  const vec4_t *color; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  const char *v19; 
  float v21; 
  float v23; 
  float v24; 
  const char *v25; 
  float v26; 
  float v27; 
  float v28; 
  const char *v29; 
  float v30; 
  const char *v31; 
  const char *v32; 
  float v33; 
  const char *v34; 
  float v35; 
  const char *v36; 
  const char *v38; 
  double v39; 
  float v40; 
  const char *v41; 
  double v42; 
  char *text; 

  if ( !Com_IsAnyLocalServerRunning() || !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return y;
  if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
    __debugbreak();
  m_serverFrameDuration = cls.m_serverFrameDuration;
  ProfileTimes = SV_GetProfileTimes();
  p_frameTime = &ProfileTimes->frameTime;
  if ( ProfileTimes->frameTime <= 0.0 )
    return y;
  v12 = &colorRed;
  color = &colorRed;
  v15 = (float)m_serverFrameDuration;
  v14 = v15;
  v16 = DVARINT_cg_drawFPS;
  if ( v15 >= ProfileTimes->frameTime )
    color = &colorWhite;
  if ( v15 >= ProfileTimes->vmFrameTime )
    v12 = &colorWhite;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer < 2 )
  {
    v38 = j_va("%.0f (%i)", *p_frameTime, (unsigned int)m_serverFrameDuration);
    v39 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, y, width, v38, " server ms", color);
    v40 = *(float *)&v39 + y;
    v41 = j_va("%.2f (%.2f %.2f %.2f)", p_frameTime[11], p_frameTime[17], p_frameTime[23], (float)((float)(p_frameTime[11] - p_frameTime[17]) - p_frameTime[23]));
    v42 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, *(float *)&v39 + y, width, v41, " vm ms", v12);
    return v40 + *(float *)&v42;
  }
  else
  {
    _XMM0 = *((unsigned int *)p_frameTime + 8);
    __asm { vmaxss  xmm1, xmm0, xmm7 }
    LODWORD(text) = m_serverFrameDuration;
    v19 = j_va("(%.0f-%.0f) %.2f: %.2f (%i)", p_frameTime[2], p_frameTime[3], *p_frameTime, (float)(p_frameTime[9] / *(float *)&_XMM1), text);
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, y, width, v19, " sv ms/frame", color);
    _XMM1 = *((unsigned int *)p_frameTime + 10);
    v21 = *(float *)&_XMM0 + y;
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    v23 = 1.0 / *(float *)&_XMM2;
    v24 = (float)(1.0 / *(float *)&_XMM2) * p_frameTime[14];
    v25 = j_va("(%.2f-%.2f) %.2f (%.2f: %.2f-%.2f)", p_frameTime[12], p_frameTime[13], p_frameTime[11], v24, (float)(v23 * p_frameTime[15]), (float)(v23 * p_frameTime[16]));
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, *(float *)&_XMM0 + y, width, v25, " vm frame ms", v12);
    v26 = (float)(1.0 / *(float *)&_XMM2) * p_frameTime[18];
    v27 = (float)(1.0 / *(float *)&_XMM2) * p_frameTime[24];
    v28 = v21 + *(float *)&_XMM0;
    v29 = j_va("(%.2f-%.2f) %.2f (%.2f: %.2f-%.2f) (%.2f: %.2f)", p_frameTime[19], p_frameTime[20], p_frameTime[17], v26, (float)(v23 * p_frameTime[21]), (float)(v23 * p_frameTime[22]), p_frameTime[23], v27);
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, v21 + *(float *)&_XMM0, width, v29, " vm builtin ms", v12);
    v30 = v28 + *(float *)&_XMM0;
    v31 = j_va("%.2f: %.2f", (float)((float)(p_frameTime[11] - p_frameTime[17]) - p_frameTime[23]), (float)((float)(v24 - v26) - v27));
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint((CgDrawDebug *)draw, scrPlace, x, v30, width, v31, " vm only ms", v12);
    v32 = j_va("(%.0f %.0f %.0f %.0f) %.2f", p_frameTime[25], p_frameTime[26], p_frameTime[27], p_frameTime[28], (float)((float)((float)(p_frameTime[26] + p_frameTime[25]) + p_frameTime[27]) + p_frameTime[28]));
    v33 = (float)(v30 + *(float *)&_XMM0) + CG_DrawDebug_CornerPrintScale(scrPlace, x, v30 + *(float *)&_XMM0, width, v32, " sv wait", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v34 = j_va("(%.2f) %.2f", (float)(v14 / p_frameTime[1]), p_frameTime[1]);
    v35 = v33 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v33, width, v34, " wall clock", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v36 = j_va("(%d -%3d) %3d", *((unsigned int *)p_frameTime + 30), *((unsigned int *)p_frameTime + 31), *((unsigned int *)p_frameTime + 29));
    return v35 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v35, width, v36, " anim calls", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
}

/*
==============
CG_DrawDebug_PrintStreamReadStats
==============
*/
float CG_DrawDebug_PrintStreamReadStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  __int128 v5; 
  const dvar_t *v7; 
  float v8; 
  StreamReadStats v9; 
  __int64 v10; 
  const char *v11; 
  float v12; 
  const char *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const char *v17; 
  const dvar_t *v18; 
  const char *ProfileDebugText; 
  StreamReadStats result; 
  __int128 v22; 

  v7 = DVARBOOL_stream_showReadStats;
  v8 = y;
  if ( !DVARBOOL_stream_showReadStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showReadStats") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v22 = v5;
    v9 = *Stream_Read_GetStats(&result);
    result = v9;
    LODWORD(v10) = v9.averageSizePerRead;
    v11 = j_va("%u bytes", v10);
    v12 = y + CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, v11, " Stm avg size/read", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v13 = j_va("issued: %.2f success: %.2f", _mm_shuffle_ps((__m128)v9, (__m128)v9, 85).m128_f32[0], _mm_shuffle_ps((__m128)v9, (__m128)v9, 170).m128_f32[0]);
    v14 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v12, width, v13, " Stm multi-rd ratio", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    v15 = DVARBOOL_stream_readFavorSeekOrder;
    v16 = v12 + v14;
    v8 = v16;
    if ( !DVARBOOL_stream_readFavorSeekOrder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readFavorSeekOrder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v17 = j_va("issued: %.2f%%", result.seekOrderItemQueueIssuePercent);
      v8 = v16 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v16, width, v17, " Stm seek order queue", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
  }
  v18 = DVARBOOL_stream_showReadProfile;
  if ( !DVARBOOL_stream_showReadProfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showReadProfile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !v18->current.enabled )
    return v8;
  ProfileDebugText = Stream_Read_GetProfileDebugText();
  return v8 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v8, width, ProfileDebugText, " Stm read status %", &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CG_DrawDebug_PrintStreamer
==============
*/
float CG_DrawDebug_PrintStreamer(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  const dvar_t *v10; 
  const ScreenPlacement *v11; 
  float v12; 
  const char *v13; 
  double Quality_Image; 
  const dvar_t *v15; 
  bool enabled; 
  const dvar_t *v17; 
  bool v18; 
  float surplusImageMemory; 
  float v20; 
  float wantedImageMemory; 
  float v22; 
  const vec4_t *v23; 
  const vec4_t *color; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const vec4_t *v30; 
  float wantedMeshMemory; 
  float v32; 
  unsigned __int64 v33; 
  const vec4_t *v34; 
  float v35; 
  float wantedGenericMemory; 
  float v37; 
  bool v38; 
  const dvar_t *v39; 
  const char *v40; 
  const dvar_t *v41; 
  unsigned __int64 Count; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  const vec4_t *v48; 
  const char *v49; 
  unsigned __int64 v50; 
  float v51; 
  const char *v52; 
  const vec4_t *v53; 
  float v54; 
  float v55; 
  const char *v56; 
  const vec4_t *v57; 
  float v58; 
  float v59; 
  const char *v60; 
  const vec4_t *v61; 
  float v62; 
  const char *v63; 
  const vec4_t *v64; 
  float v65; 
  const dvar_t *v66; 
  __int32 v67; 
  const char *v68; 
  GfxFont *FontHandle; 
  float v70; 
  const char *v71; 
  int v72; 
  char *fmt; 
  char *label; 
  StreamFrontendMemoryStats outStats; 
  char dest[64]; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 

  v10 = DCONST_DVARBOOL_cg_drawImageStreamQuality;
  v11 = scrPlace;
  v83 = v5;
  v82 = v6;
  v81 = v7;
  v12 = y;
  if ( !DCONST_DVARBOOL_cg_drawImageStreamQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawImageStreamQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    if ( Stream_IsEnabled() )
    {
      if ( Stream_IsYielding() )
      {
        v13 = "Primer: ";
        if ( !Stream_Primer_IsRunning() )
          v13 = "Yielding: ";
      }
      else if ( Stream_LoadSync_IsActive() )
      {
        v13 = "Load sync: ";
      }
      else
      {
        v13 = "Cannot stream more: ";
        if ( Stream_CanStreamMore() )
          v13 = (char *)&queryFormat.fmt + 3;
      }
    }
    else
    {
      v13 = "Disabled: ";
    }
    Quality_Image = Stream_LoadQuality_Image();
    if ( *(float *)&Quality_Image < 1.8446674e19 )
      Com_sprintf(dest, 0x20ui64, "%.4f", *(float *)&Quality_Image);
    else
      Com_sprintf(dest, 0x20ui64, "max");
    Com_sprintf<64>((char (*)[64])&outStats, "%s%s", v13, dest);
    v12 = y + CG_DrawDebug_CornerPrintScale(v11, x, y, width, (const char *)&outStats, " Streaming Quality", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
  v15 = DCONST_DVARBOOL_cg_drawWantedImageMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedImageMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedImageMem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  enabled = v15->current.enabled;
  v17 = DCONST_DVARBOOL_cg_drawWantedStreamMem;
  if ( !DCONST_DVARBOOL_cg_drawWantedStreamMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWantedStreamMem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.enabled;
  if ( enabled || v18 )
  {
    v80 = v8;
    v79 = v9;
    Stream_GetMemoryStats(&outStats);
    if ( outStats.wantedImageMemory )
    {
      wantedImageMemory = (float)(__int64)outStats.wantedImageMemory;
      if ( (outStats.wantedImageMemory & 0x8000000000000000ui64) != 0i64 )
      {
        v22 = (float)(__int64)outStats.wantedImageMemory;
        wantedImageMemory = v22 + 1.8446744e19;
      }
    }
    else
    {
      surplusImageMemory = (float)(__int64)outStats.surplusImageMemory;
      if ( (outStats.surplusImageMemory & 0x8000000000000000ui64) != 0i64 )
      {
        v20 = (float)(__int64)outStats.surplusImageMemory;
        surplusImageMemory = v20 + 1.8446744e19;
      }
      LODWORD(wantedImageMemory) = LODWORD(surplusImageMemory) ^ _xmm;
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", (float)(wantedImageMemory * 0.00000095367432));
    v23 = &colorGreen;
    if ( wantedImageMemory <= 0.0 || Stream_CanStreamMore() )
    {
      color = &colorGreen;
      if ( wantedImageMemory > 0.0 )
        color = &colorWhite;
    }
    else
    {
      color = &colorRed;
    }
    v25 = v12 + CG_DrawDebug_CornerPrintScale(v11, x, v12, width, dest, " Wanted Image Mem", color, 0.75, 0.75, 0.80000001, 0);
    v26 = (float)(__int64)outStats.wantedImageMemory;
    if ( (outStats.wantedImageMemory & 0x8000000000000000ui64) != 0i64 )
    {
      v27 = (float)(__int64)outStats.wantedImageMemory;
      v26 = v27 + 1.8446744e19;
    }
    v28 = (float)(__int64)outStats.surplusImageMemory;
    if ( (outStats.surplusImageMemory & 0x8000000000000000ui64) != 0i64 )
    {
      v29 = (float)(__int64)outStats.surplusImageMemory;
      v28 = v29 + 1.8446744e19;
    }
    Com_sprintf<64>((char (*)[64])dest, "%.2fmb", (float)((float)(v26 - v28) * 0.00000095367432));
    v30 = &colorGreen;
    if ( (float)(v26 - v28) > 0.0 )
      v30 = &colorRed;
    v12 = v25 + CG_DrawDebug_CornerPrintScale(v11, x, v25, width, dest, " Combined Image Mem", v30, 0.75, 0.75, 0.80000001, 0);
    if ( v18 )
    {
      wantedMeshMemory = (float)(__int64)outStats.wantedMeshMemory;
      if ( (outStats.wantedMeshMemory & 0x8000000000000000ui64) != 0i64 )
      {
        v32 = (float)(__int64)outStats.wantedMeshMemory;
        wantedMeshMemory = v32 + 1.8446744e19;
      }
      Com_sprintf<64>((char (*)[64])dest, "%.2fmb", (float)(wantedMeshMemory * 0.00000095367432));
      v33 = outStats.wantedMeshMemory;
      if ( outStats.wantedMeshMemory )
      {
        if ( !Stream_CanStreamMore() )
        {
          v34 = &colorRed;
          goto LABEL_53;
        }
        v33 = outStats.wantedMeshMemory;
      }
      v34 = &colorGreen;
      if ( v33 )
        v34 = &colorWhite;
LABEL_53:
      v35 = v12 + CG_DrawDebug_CornerPrintScale(v11, x, v12, width, dest, " Wanted Mesh Mem", v34, 0.75, 0.75, 0.80000001, 0);
      wantedGenericMemory = (float)(__int64)outStats.wantedGenericMemory;
      if ( (outStats.wantedGenericMemory & 0x8000000000000000ui64) != 0i64 )
      {
        v37 = (float)(__int64)outStats.wantedGenericMemory;
        wantedGenericMemory = v37 + 1.8446744e19;
      }
      Com_sprintf<64>((char (*)[64])dest, "%.2fmb", (float)(wantedGenericMemory * 0.00000095367432));
      v38 = outStats.wantedGenericMemory == 0;
      if ( outStats.wantedGenericMemory )
      {
        if ( !Stream_CanStreamMore() )
        {
          v23 = &colorRed;
LABEL_61:
          v12 = v35 + CG_DrawDebug_CornerPrintScale(v11, x, v35, width, dest, " Wanted Generic Mem", v23, 0.75, 0.75, 0.80000001, 0);
          goto LABEL_62;
        }
        v38 = outStats.wantedGenericMemory == 0;
      }
      if ( !v38 )
        v23 = &colorWhite;
      goto LABEL_61;
    }
  }
LABEL_62:
  v39 = DVARBOOL_cg_drawStreamMemoryInfo;
  if ( !DVARBOOL_cg_drawStreamMemoryInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamMemoryInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( v39->current.enabled )
  {
    Stream_Alloc_GetMemInfo((StreamMemInfo *)dest);
    LODWORD(label) = *(_QWORD *)&dest[8] >> 20;
    LODWORD(fmt) = *(_QWORD *)dest >> 20;
    v40 = j_va("Tex:%umb Mesh:%umb Gen:%umb FreeCPU+GPU:%umb+%umb", (unsigned int)(*(_QWORD *)&dest[16] >> 20), (unsigned int)(*(_QWORD *)&dest[24] >> 20), (unsigned int)(*(_QWORD *)&dest[32] >> 20), fmt, label);
    v12 = v12 + CG_DrawDebug_CornerPrintScale(v11, x, v12, width, v40, " Stm Mem", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
  v41 = DCONST_DVARBOOL_cg_drawFileStreamStatus;
  if ( !DCONST_DVARBOOL_cg_drawFileStreamStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFileStreamStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
  {
    Count = FileStreamTrack_GetCount(FILE_STREAM_TRACK_FASTFILE);
    v43 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_STREAM);
    v44 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_PRIMER);
    v45 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_XPAK);
    v46 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_SOUND);
    v47 = FileStreamTrack_GetCount(FILE_STREAM_TRACK_BINK);
    v48 = &colorRed;
    v49 = &s_barInText[-3 * Count + 300];
    v50 = Count + v43 + v44 + v45 + v46 + v47;
    if ( Count == v50 )
      v48 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v49 )
      v49 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    v51 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v12, width, v49, " Fastfile Read", v48, 0.75, 0.75, 0.80000001, 0);
    v52 = &s_barInText[-3 * v43 + 300];
    v53 = &colorRed;
    v38 = v43 == v50;
    v11 = scrPlace;
    v54 = v12 + v51;
    if ( v38 )
      v53 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v52 )
      v52 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    v55 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v54, width, v52, " Stream Read", v53, 0.75, 0.75, 0.80000001, 0);
    v56 = &s_barInText[-3 * v44 + 300];
    v57 = &colorRed;
    v58 = v54 + v55;
    if ( v44 == v50 )
      v57 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v56 )
      v56 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    v59 = v58 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v58, width, v56, " Primer Read", v57, 0.75, 0.75, 0.80000001, 0);
    v60 = &s_barInText[-3 * v46 + 300];
    v61 = &colorRed;
    if ( v46 == v50 )
      v61 = &colorWhite;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v60 )
      v60 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    v62 = CG_DrawDebug_CornerPrintScale(scrPlace, x, v59, width, v60, " Sound Read", v61, 0.75, 0.75, 0.80000001, 0);
    v63 = &s_barInText[-3 * v47 + 300];
    v64 = &colorRed;
    if ( v47 == v50 )
      v64 = &colorWhite;
    v65 = v59 + v62;
    if ( "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 " > v63 )
      v63 = "?? 99 98 97 96 95 94 93 92 91 90 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4  3  2  1 ";
    v12 = v65 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v65, width, v63, " Bink Read", v64, 0.75, 0.75, 0.80000001, 0);
  }
  v66 = DCONST_DVARBOOL_cg_drawAlwaysloadedWarnings;
  if ( !DCONST_DVARBOOL_cg_drawAlwaysloadedWarnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawAlwaysloadedWarnings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  if ( v66->current.enabled )
  {
    v67 = Stream_GetForcedState() - 1;
    if ( !v67 )
    {
      v68 = "TimedOut";
      goto LABEL_100;
    }
    if ( v67 == 1 )
    {
      v68 = "EvictedForMemPaged";
LABEL_100:
      FontHandle = UI_GetFontHandle(v11, 4, 0.60000002);
      v70 = (float)UI_TextWidth("Alwaysloaded/Forced Stream Fail", 0, FontHandle, 0.60000002) * 0.5;
      UI_DrawText(v11, "Alwaysloaded/Forced Stream Fail", 0x7FFFFFFF, FontHandle, 320.0 - v70, 30.0, 1, 1, 0.60000002, &colorRed, 0);
      v71 = j_va("Low Memory Warning (%s)", v68);
      v72 = UI_TextWidth(v71, 0, FontHandle, 0.60000002);
      UI_DrawText(v11, v71, 0x7FFFFFFF, FontHandle, 320.0 - (float)((float)v72 * 0.5), 60.0, 1, 1, 0.60000002, &colorRed, 0);
    }
  }
  return v12;
}

/*
==============
CG_DrawDebug_PrintTransientCommonBudgets
==============
*/
float CG_DrawDebug_PrintTransientCommonBudgets(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width)
{
  const dvar_t *v6; 
  float ViewArmsMemoryCost; 
  const char *v8; 
  float v9; 
  float ViewWeaponMemoryCost; 
  const char *v11; 
  float v12; 
  float BodyMemoryCost; 
  const char *v14; 
  float v15; 
  float HeadMemoryCost; 
  const char *v17; 
  float v18; 
  float WorldWeaponMemoryCost; 
  const char *v20; 

  if ( !CL_TransientsCommonMP_IsEnabled() )
    return y;
  v6 = DCONST_DVARBOOL_cl_transientCommon_drawBudgets;
  if ( !DCONST_DVARBOOL_cl_transientCommon_drawBudgets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_transientCommon_drawBudgets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return y;
  ViewArmsMemoryCost = (float)(__int64)CL_TransientsCommonMP_GetViewArmsMemoryCost();
  v8 = j_va("%3.1f", (float)(ViewArmsMemoryCost * 0.00000095367432));
  v9 = y + CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, v8, " VIEW HANDS", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  ViewWeaponMemoryCost = (float)(__int64)CL_TransientsCommonMP_GetViewWeaponMemoryCost();
  v11 = j_va("%3.1f", (float)(ViewWeaponMemoryCost * 0.00000095367432));
  v12 = v9 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v9, width, v11, " VIEW WEAPONS", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  BodyMemoryCost = (float)(__int64)CL_TransientsCommonMP_GetBodyMemoryCost();
  v14 = j_va("%3.1f", (float)(BodyMemoryCost * 0.00000095367432));
  v15 = v12 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v12, width, v14, " BODIES", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  HeadMemoryCost = (float)(__int64)CL_TransientsCommonMP_GetHeadMemoryCost();
  v17 = j_va("%3.1f", (float)(HeadMemoryCost * 0.00000095367432));
  v18 = v15 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v15, width, v17, " HEADS", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  WorldWeaponMemoryCost = (float)(__int64)CL_TransientsCommonMP_GetWorldWeaponMemoryCost();
  v20 = j_va("%3.1f", (float)(WorldWeaponMemoryCost * 0.00000095367432));
  return v18 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v18, width, v20, " WORLD WEAPONS", &colorWhite, 0.75, 0.75, 0.80000001, 0);
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

float __fastcall CG_DrawDebug_TaskGraphStats(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, double y, float width)
{
  double v7; 
  __int128 v8; 
  __int64 v9; 
  __int128 v10; 
  unsigned int v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  double v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  char *label[2]; 
  R_TG_DebugStats outStats; 
  char dest[64]; 

  if ( !R_TG_GetStats(&outStats) )
    return *(float *)&y;
  label[0] = "  gfx";
  label[1] = "  async";
  v7 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, x, *(float *)&y, width, "-Task Graph-", &colorLtBlue);
  v8 = *(_OWORD *)&y;
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.taskCount);
  v9 = 0i64;
  *(float *)&v8 = (float)(*(float *)&y + *(float *)&v7) + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&y + *(float *)&v7, width, dest, " task nodes", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v10 = v8;
  if ( outStats.queueCount > 1 )
  {
    v11 = 0;
    do
    {
      Com_sprintf<64>((char (*)[64])dest, "%u", outStats.taskQueueCount[v11]);
      v12 = CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v10, width, dest, label[v11++], &colorWhite, 0.75, 0.75, 0.80000001, 0);
      v13 = v10;
      *(float *)&v13 = *(float *)&v10 + v12;
      v10 = v13;
    }
    while ( v11 < outStats.queueCount );
  }
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.resourceCount);
  v14 = v10;
  *(float *)&v14 = *(float *)&v10 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v10, width, dest, " resources", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.heapCount);
  *(float *)&v14 = *(float *)&v14 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v14, width, dest, " heaps", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%lumb", outStats.memoryUsage >> 20);
  *(float *)&v14 = *(float *)&v14 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v14, width, dest, " heap memory", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationCount);
  *(float *)&v14 = *(float *)&v14 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v14, width, dest, " permutations", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v15 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, x, *(float *)&v14, width, "-Permutation-", &colorLtBlue);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationIndex);
  *(float *)&v14 = (float)(*(float *)&v14 + *(float *)&v15) + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v14 + *(float *)&v15, width, dest, " index", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationTaskCount);
  *(float *)&v14 = *(float *)&v14 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v14, width, dest, " tasks", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v16 = v14;
  if ( outStats.queueCount > 1 )
  {
    do
    {
      Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationTaskQueueCount[v9]);
      v17 = CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v16, width, dest, label[v9], &colorWhite, 0.75, 0.75, 0.80000001, 0);
      v9 = (unsigned int)(v9 + 1);
      v18 = v16;
      *(float *)&v18 = *(float *)&v16 + v17;
      v16 = v18;
    }
    while ( (unsigned int)v9 < outStats.queueCount );
  }
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierCount);
  v19 = *(float *)&v16 + CG_DrawDebug_CornerPrintScale(scrPlace, x, *(float *)&v16, width, dest, " barriers", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierAliasingCount);
  v20 = v19 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v19, width, dest, "  aliasing", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierDecompressCount);
  v21 = v20 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v20, width, dest, "  decompress", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%u", outStats.permutationBarrierElementCount);
  v22 = v21 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v21, width, dest, "  elements", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v23 = CgDrawDebug::CornerPrintCaption((CgDrawDebug *)draw, scrPlace, x, v22, width, "-Perf-", &colorLtBlue);
  Com_sprintf<64>((char (*)[64])dest, "%uus", outStats.renderCpuTimeUs);
  v24 = (float)(v22 + *(float *)&v23) + CG_DrawDebug_CornerPrintScale(scrPlace, x, v22 + *(float *)&v23, width, dest, " render cpu", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf<64>((char (*)[64])dest, "%ums", outStats.compileTimeMs);
  return v24 + CG_DrawDebug_CornerPrintScale(scrPlace, x, v24, width, dest, " compile", &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CG_DrawDebug_UpdateDebugBonesClosestEntity
==============
*/
void CG_DrawDebug_UpdateDebugBonesClosestEntity(const LocalClientNum_t localClientNum, const vec3_t *viewPos)
{
  __int64 v3; 
  float v4; 
  int v5; 
  __int16 *v6; 
  int v7; 
  unsigned int v8; 
  const cpose_t *Pose; 
  const cpose_t *v10; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v15; 
  __int64 v25; 
  __int64 v26; 
  int v27[4]; 
  __int64 v28; 

  v28 = -2i64;
  v3 = localClientNum;
  v4 = FLOAT_1_0e8;
  Dvar_SetBoolFromSource(DVARBOOL_cg_drawDebugBonesClosest, 0, DVAR_SOURCE_EXTERNAL);
  v5 = 1;
  v6 = &clientObjMap[2533 * v3 + 1];
  v7 = 2533 * v3;
  do
  {
    if ( (unsigned int)v5 > 0x9E4 )
    {
      LODWORD(v26) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v26) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v26) = 2;
      LODWORD(v25) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( (unsigned int)(v7 + v5) >= 0x13CA )
    {
      LODWORD(v26) = v7 + v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v26) )
        __debugbreak();
    }
    v8 = *v6;
    if ( *v6 )
    {
      if ( v8 >= (unsigned int)s_objCount )
      {
        LODWORD(v26) = *v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v26) )
          __debugbreak();
      }
      if ( s_objBuf[v8] )
      {
        Pose = CG_GetPose((LocalClientNum_t)v3, v5);
        v10 = Pose;
        if ( Pose )
        {
          if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v10->origin.Get_origin, v10);
          FunctionPointer_origin(&v10->origin.origin.origin, (vec3_t *)v27);
          if ( v10->isPosePrecise )
          {
            _XMM0 = (unsigned int)v27[0];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v15;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            v27[0] = _XMM2;
            _XMM0 = (unsigned int)v27[1];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v15;
            __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
            v27[1] = _XMM4;
            _XMM0 = (unsigned int)v27[2];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v15;
            __asm { vcvtsd2ss xmm5, xmm1, xmm1 }
            v27[2] = _XMM5;
          }
          else
          {
            LODWORD(_XMM5) = v27[2];
            LODWORD(_XMM4) = v27[1];
            LODWORD(_XMM2) = v27[0];
          }
          if ( (float)((float)((float)((float)(viewPos->v[1] - *(float *)&_XMM4) * (float)(viewPos->v[1] - *(float *)&_XMM4)) + (float)((float)(viewPos->v[0] - *(float *)&_XMM2) * (float)(viewPos->v[0] - *(float *)&_XMM2))) + (float)((float)(viewPos->v[2] - *(float *)&_XMM5) * (float)(viewPos->v[2] - *(float *)&_XMM5))) < v4 )
          {
            v4 = (float)((float)((float)(viewPos->v[1] - *(float *)&_XMM4) * (float)(viewPos->v[1] - *(float *)&_XMM4)) + (float)((float)(viewPos->v[0] - *(float *)&_XMM2) * (float)(viewPos->v[0] - *(float *)&_XMM2))) + (float)((float)(viewPos->v[2] - *(float *)&_XMM5) * (float)(viewPos->v[2] - *(float *)&_XMM5));
            Dvar_SetIntFromSource(DVARINT_cg_drawDebugBones, v5, DVAR_SOURCE_EXTERNAL);
          }
          memset(v27, 0, 0xCui64);
        }
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 2048 );
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
  __int128 v1; 
  const dvar_t *v2; 
  CgHandler *Handler; 
  const dvar_t *v5; 
  bool enabled; 
  const dvar_t *v7; 
  bool v8; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  MantleMotionPathParams params; 
  __int128 v28; 

  v2 = DVARBOOL_mantle_export_run;
  if ( !DVARBOOL_mantle_export_run && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_run") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v28 = v1;
    Dvar_SetBool_Internal(DVARBOOL_mantle_export_run, 0);
    *((_DWORD *)&params.endPosOffset + 3) = 0;
    *(_DWORD *)(&params.drawDebug + 1) = 0;
    *(&params.drawDebug + 5) = 0;
    Handler = CgHandler::getHandler(localClientNum);
    v5 = DVARBOOL_mantle_export_isLadder;
    params.bgHandler = Handler;
    params.drawDebug = 0;
    if ( !DVARBOOL_mantle_export_isLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_isLadder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    enabled = v5->current.enabled;
    v7 = DVARBOOL_mantle_export_isover;
    params.isLadder = enabled;
    if ( !DVARBOOL_mantle_export_isover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_isover") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.enabled;
    v9 = DVARFLT_mantle_export_height;
    params.isOver = v8;
    params.startPos.v[0] = 0.0;
    params.startPos.v[1] = 0.0;
    params.startPos.v[2] = 0.0;
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = DVARFLT_mantle_export_ledge_dist;
    if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.value;
    v13 = DVARFLT_mantle_export_ledge_dist;
    params.ledgeOffset.v[0] = v12;
    params.ledgeOffset.v[1] = 0.0;
    params.ledgeOffset.v[2] = value;
    if ( params.isLadder )
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = v13->current.value;
      v15 = DCONST_DVARFLT_mantle_ladder_over_dist;
      if ( !DCONST_DVARFLT_mantle_ladder_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_over_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v17 = v14 + v15->current.value;
      v16 = v17;
      v18 = DVARFLT_mantle_export_over_speed;
      if ( !DVARFLT_mantle_export_over_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = v18->current.value;
      v20 = DCONST_DVARFLT_mantle_ladder_down_dist;
      params.endPosOffset.v[0] = v17;
      params.endPosOffset.v[1] = 0.0;
      params.endPosOffset.v[2] = 0.0;
      if ( !DCONST_DVARFLT_mantle_ladder_down_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_ladder_down_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      params.endPosOffset.v[2] = params.endPosOffset.v[2] - v20->current.value;
    }
    else if ( params.isOver )
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v21 = v13->current.value;
      v22 = DVARFLT_mantle_export_over_dist;
      if ( !DVARFLT_mantle_export_over_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      v23 = v21 + v22->current.value;
      v16 = v23;
      v24 = DVARFLT_mantle_export_over_speed;
      if ( !DVARFLT_mantle_export_over_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_over_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      v19 = v24->current.value;
      params.endPosOffset.v[0] = v23;
      params.endPosOffset.v[1] = 0.0;
      params.endPosOffset.v[2] = 0.0;
    }
    else
    {
      if ( !DVARFLT_mantle_export_ledge_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_ledge_dist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v16 = v13->current.value;
      v25 = DVARFLT_mantle_export_on_speed;
      if ( !DVARFLT_mantle_export_on_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_on_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      v19 = v25->current.value;
      params.endPosOffset = params.ledgeOffset;
    }
    v26 = DVARFLT_mantle_export_height;
    if ( !DVARFLT_mantle_export_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_export_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    Mantle_DumpMotionPath(&params, v16, v26->current.value, v19);
  }
}

/*
==============
CG_DrawInputLatencyDeviceOverlay
==============
*/
void CG_DrawInputLatencyDeviceOverlay(LocalClientNum_t localClientNum)
{
  vec4_t v2; 
  const ScreenPlacement *ActivePlacement; 
  vec4_t color; 

  if ( ClActiveClient::GetClient(localClientNum)->m_latencyDeviceState )
    v2 = (vec4_t)_xmm;
  else
    v2 = (vec4_t)_xmm;
  color = v2;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_Draw2DRect(ActivePlacement, (float)((float)(ActivePlacement->virtualViewableMax.v[0] + ActivePlacement->virtualViewableMin.v[0]) - 100.0) * 0.5, (float)((float)(ActivePlacement->virtualViewableMax.v[1] + ActivePlacement->virtualViewableMin.v[1]) - 100.0) * 0.5, 100.0, 100.0, 1, 1, &color, cgMedia.whiteMaterial);
}

/*
==============
CG_DrawWaterMark
==============
*/
void CG_DrawWaterMark(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 

  if ( cl_waterMarkEnabled->current.enabled )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    CG_DrawDevString(ActivePlacement, 0.0, 360.0, 0.80000001, 0.80000001, "Confidential", &s_waterMarkColor, 5, cls.bigDevFont);
    CG_DrawDevString(ActivePlacement, 0.0, 380.0, 0.80000001, 0.80000001, cl_waterMarkText->current.string, &s_waterMarkColor, 5, cls.bigDevFont);
    CG_DrawDevString(ActivePlacement, 0.0, 400.0, 0.80000001, 0.80000001, "Do Not Distribute", &s_waterMarkColor, 5, cls.bigDevFont);
  }
}

/*
==============
CgDrawDebug::CornerPrint
==============
*/
float CgDrawDebug::CornerPrint(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, float labelWidth, const char *text, const char *label, const vec4_t *color)
{
  return CG_DrawDebug_CornerPrintScale(sP, posX, posY, labelWidth, text, label, color, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::CornerPrintCaption
==============
*/
float CgDrawDebug::CornerPrintCaption(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, float labelWidth, const char *text, const vec4_t *color)
{
  const dvar_t *v7; 
  int v9; 

  v7 = DVARBOOL_cg_drawFPSLabels;
  if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    v9 = CG_DrawDevString(sP, posX - labelWidth, posY, 0.75, 0.75, text, color, 7, cls.smallDevFont);
  else
    v9 = CG_DrawDevString(sP, posX, posY, 0.75, 0.75, text, color, 6, cls.smallDevFont);
  return (float)v9 * 0.80000001;
}

/*
==============
CgDrawDebug::CornerPrintNoLabel
==============
*/
float CgDrawDebug::CornerPrintNoLabel(CgDrawDebug *this, const ScreenPlacement *sP, float posX, float posY, const char *text, const vec4_t *color)
{
  return CG_DrawDebug_CornerPrintScale(sP, posX, posY, 0.0, text, NULL, color, 0.75, 0.75, 0.80000001, 1);
}

/*
==============
CgDrawDebug::DrawDebugOverlays
==============
*/
void CgDrawDebug::DrawDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  cg_t *LocalClientGlobals; 
  int v13; 
  int v14; 
  float v15; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  Material *whiteMaterial; 
  const ScreenPlacement *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  int integer; 
  const DObj *ClientDObj; 
  const cpose_t *Pose; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  int v28; 
  DObj *v29; 
  const cpose_t *v30; 
  const dvar_t *v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  const DObj *v35; 
  const cpose_t *v36; 
  const dvar_t *v37; 
  __int64 v38; 
  DObj *v39; 
  const cpose_t *v40; 
  const dvar_t *v41; 
  bool v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  cg_t *v45; 
  const dvar_t *v46; 
  cg_t *v47; 
  cg_t *v48; 
  const dvar_t *v49; 
  int v50; 
  const dvar_t *v51; 
  CgDebugDrawBonesType v52; 
  const dvar_t *v53; 
  const char *string; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  int v58; 
  cg_t *v59; 
  BgStatic *ActiveStatics; 
  unsigned int clientNum; 
  CgStatic *v62; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v64; 
  const DObj *viewModelDObj; 
  unsigned int XAnimIndex; 
  unsigned int animationNumber; 
  unsigned int animsetIndex; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  float value; 
  cg_t *v73; 
  vec4_t v74; 
  const dvar_t *v75; 
  const dvar_t *v76; 
  const dvar_t *v77; 
  const dvar_t *v78; 
  const dvar_t *v79; 
  const dvar_t *v80; 
  const dvar_t *v81; 
  const dvar_t *v82; 
  const dvar_t *v83; 
  const dvar_t *v84; 
  const dvar_t *v85; 
  const dvar_t *v86; 
  const dvar_t *v87; 
  vec4_t v88; 
  const ScreenPlacement *v89; 
  const ScreenPlacement *v90; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  vec3_t forward; 
  vec4_t color; 
  vec4_t v95; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 

  v6 = localClientNum;
  if ( CG_DrawHits_IsActiveForAnyType(localClientNum) )
    return;
  v96 = v5;
  Stream_Debug_DrawDebugOverlays((LocalClientNum_t)v6);
  v8 = DVARINT_cg_drawFPSGraphs;
  if ( !DVARINT_cg_drawFPSGraphs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSGraphs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer )
    CG_DrawDebug_DrawFPSGraphs();
  v9 = DVARBOOL_cg_drawrumbledebug;
  if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    CG_Rumble_DrawDebug((LocalClientNum_t)v6);
  v10 = DCONST_DVARBOOL_player_debugHealth;
  if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
    __debugbreak();
  v99 = v2;
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = DCONST_DVARBOOL_player_debugHealth;
    v98 = v3;
    v97 = v4;
    if ( !DCONST_DVARBOOL_player_debugHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_debugHealth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 5476, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_player_debugHealth, \"player_debugHealth\" ))", (const char *)&queryFormat, "Dconst_GetBool( player_debugHealth )") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    v13 = LocalClientGlobals->predictedPlayerState.stats[0];
    if ( v13 && (v14 = LocalClientGlobals->predictedPlayerState.stats[2]) != 0 )
      LODWORD(v15) = COERCE_UNSIGNED_INT64(I_fclamp((float)v13 / (float)v14, 0.0, 1.0));
    else
      v15 = 0.0;
    material = cgMedia.whiteMaterial;
    color = (vec4_t)_xmm;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
    CL_DrawStretchPic(ActivePlacement, 10.0, 10.0, 100.0, 10.0, 1, 1, 0.0, 0.0, 1.0, 1.0, &color, material);
    whiteMaterial = cgMedia.whiteMaterial;
    color = (vec4_t)_xmm;
    v19 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
    CL_DrawStretchPic(v19, 10.0, 10.0, v15 * 100.0, 10.0, 1, 1, 0.0, 0.0, v15, 1.0, &color, whiteMaterial);
  }
  this->DrawAnimationOverlays(this, (const LocalClientNum_t)v6);
  v20 = DVARBOOL_cg_drawDebugEntitiesLoD;
  if ( !DVARBOOL_cg_drawDebugEntitiesLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugEntitiesLoD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
    this->DrawEntitiesLoD(this, (const LocalClientNum_t)v6);
  v21 = DCONST_DVARINT_xanim_drawEntityDynamicBones;
  if ( !DCONST_DVARINT_xanim_drawEntityDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer >= 0 )
  {
    v22 = DCONST_DVARINT_xanim_drawEntityDynamicBones;
    if ( !DCONST_DVARINT_xanim_drawEntityDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBones") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    integer = v22->current.integer;
    ClientDObj = Com_GetClientDObj(integer, (LocalClientNum_t)v6);
    if ( ClientDObj )
    {
      Pose = CG_GetPose((LocalClientNum_t)v6, integer);
      XAnimDebugDrawDynamicBones(ClientDObj, Pose);
    }
  }
  v26 = DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents;
  if ( !DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBoneAudioEvents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.integer >= 0 )
  {
    v27 = DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents;
    if ( !DCONST_DVARINT_xanim_drawEntityDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawEntityDynamicBoneAudioEvents") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = v27->current.integer;
    v29 = Com_GetClientDObj(v28, (LocalClientNum_t)v6);
    if ( v29 )
    {
      v30 = CG_GetPose((LocalClientNum_t)v6, v28);
      XAnimDebugDrawDynamicBoneAudioEvents(v29, v30);
    }
  }
  v31 = DCONST_DVARBOOL_xanim_drawViewModelDynamicBones;
  if ( !DCONST_DVARBOOL_xanim_drawViewModelDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewModelDynamicBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v32 = 2048;
  if ( v31->current.enabled )
  {
    v33 = 2048;
    v34 = 2i64;
    do
    {
      v35 = Com_GetClientDObj(v33, (LocalClientNum_t)v6);
      if ( v35 )
      {
        v36 = CG_GetPose((LocalClientNum_t)v6, v33);
        XAnimDebugDrawDynamicBones(v35, v36);
      }
      ++v33;
      --v34;
    }
    while ( v34 );
  }
  v37 = DCONST_DVARBOOL_xanim_drawViewmodelDynamicBoneAudioEvents;
  if ( !DCONST_DVARBOOL_xanim_drawViewmodelDynamicBoneAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_drawViewmodelDynamicBoneAudioEvents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    v38 = 2i64;
    do
    {
      v39 = Com_GetClientDObj(v32, (LocalClientNum_t)v6);
      if ( v39 )
      {
        v40 = CG_GetPose((LocalClientNum_t)v6, v32);
        XAnimDebugDrawDynamicBoneAudioEvents(v39, v40);
      }
      ++v32;
      --v38;
    }
    while ( v38 );
  }
  v41 = DVARBOOL_cg_drawDebugMaxAnimUsage;
  if ( !DVARBOOL_cg_drawDebugMaxAnimUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugMaxAnimUsage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
  {
    v42 = 1;
LABEL_76:
    CG_DrawDebug_DrawXAnimUsageGlobal((const LocalClientNum_t)v6, v42);
    goto LABEL_77;
  }
  v43 = DVARBOOL_cg_drawDebugAnimUsage;
  if ( !DVARBOOL_cg_drawDebugAnimUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimUsage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled )
  {
    v42 = 0;
    goto LABEL_76;
  }
LABEL_77:
  v44 = DCONST_DVARINT_cg_drawDebugAnimLodInfo;
  if ( !DCONST_DVARINT_cg_drawDebugAnimLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugAnimLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.integer )
    CG_DrawDebug_DrawXAnimLodInfoGlobal((const LocalClientNum_t)v6);
  AimAssist_DrawDebugOverlay((LocalClientNum_t)v6);
  v45 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  Shake::DebugDraw(&v45->viewShake, (const LocalClientNum_t)v6);
  AdvancedSwayState::DebugDrawText(&v45->vmMotionState, (const LocalClientNum_t)v6);
  v46 = DVARBOOL_cg_drawDebugBonesClosest;
  if ( !DVARBOOL_cg_drawDebugBonesClosest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesClosest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.enabled )
  {
    v47 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    RefdefView_GetOrg(&v47->refdef.view, (vec3_t *)&color);
    CG_DrawDebug_UpdateDebugBonesClosestEntity((const LocalClientNum_t)v6, (const vec3_t *)&color);
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(vertAlign) = 2;
    LODWORD(horzAlign) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", horzAlign, vertAlign) )
      __debugbreak();
  }
  v48 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  ParticleManager::DebugDraw(&g_particleManager[v6], v48->time);
  v49 = DVARINT_cg_drawDebugBones;
  if ( !DVARINT_cg_drawDebugBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v50 = v49->current.integer;
  if ( v50 != 2047 && v50 >= 0 )
  {
    v51 = DVARINT_cg_drawDebugBonesType;
    if ( !DVARINT_cg_drawDebugBonesType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    v52 = v51->current.integer;
    v53 = DVARSTR_cg_drawDebugBonesNameFilter;
    if ( !DVARSTR_cg_drawDebugBonesNameFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesNameFilter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    string = v53->current.string;
    v55 = DVARBOOL_cg_drawDebugBonesBind;
    if ( !DVARBOOL_cg_drawDebugBonesBind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesBind") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    CG_DrawDebug_DrawBones((const LocalClientNum_t)v6, v55->current.enabled, v52, string, v50);
  }
  v56 = DVARINT_cg_drawDebugLadder;
  if ( !DVARINT_cg_drawDebugLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugLadder") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.integer <= 0 )
    goto LABEL_126;
  v57 = DVARINT_cg_drawDebugLadder;
  if ( !DVARINT_cg_drawDebugLadder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugLadder") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  v58 = v57->current.integer;
  v59 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  ActiveStatics = BgStatic::GetActiveStatics();
  clientNum = v59->predictedPlayerState.clientNum;
  v62 = (CgStatic *)ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(v62, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)v62->GetClientInfo(v62, clientNum);
  v64 = CharacterInfo;
  if ( v58 == 3 && BG_HasLadderHand(&v59->predictedPlayerState) )
  {
    viewModelDObj = v59->m_weaponHand[1].viewModelDObj;
    XAnimIndex = 376;
    goto LABEL_123;
  }
  if ( PlayerASM_IsEnabled() )
  {
    viewModelDObj = Com_GetClientDObj(v59->predictedPlayerState.clientNum, (LocalClientNum_t)v6);
    if ( v58 == 1 )
    {
      animationNumber = v64->legs.animationNumber;
      animsetIndex = v64->legs.animsetIndex;
    }
    else
    {
      animationNumber = v64->torso.animationNumber;
      animsetIndex = v64->torso.animsetIndex;
    }
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(animsetIndex, animationNumber);
LABEL_123:
    if ( viewModelDObj && XAnimIsCustomNodeByName(viewModelDObj->tree->anims, XAnimIndex, scr_const.xanimLadderClimb) )
      XAnimLadderClimb_DrawDebug(viewModelDObj, XAnimIndex);
  }
LABEL_126:
  v69 = DVARBOOL_cg_drawDebugDoors;
  if ( !DVARBOOL_cg_drawDebugDoors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugDoors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  if ( v69->current.enabled )
    CG_Door_DrawDebug((const LocalClientNum_t)v6);
  v70 = DVARBOOL_cg_debugDrawHandDragInfo;
  if ( !DVARBOOL_cg_debugDrawHandDragInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawHandDragInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  if ( v70->current.enabled )
  {
    v71 = DCONST_DVARFLT_player_swimDragHandLookAtOffset;
    if ( !DCONST_DVARFLT_player_swimDragHandLookAtOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimDragHandLookAtOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v71);
    value = v71->current.value;
    v73 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    AngleVectors(&v73->predictedPlayerState.viewangles, &forward, NULL, (vec3_t *)&color);
    forward.v[0] = (float)(value * forward.v[0]) + v73->predictedPlayerState.origin.v[0];
    forward.v[1] = (float)(value * forward.v[1]) + v73->predictedPlayerState.origin.v[1];
    forward.v[2] = (float)(value * forward.v[2]) + v73->predictedPlayerState.origin.v[2];
    CL_AddDebugLine(&v73->predictedPlayerState.origin, &forward, &colorOrange, 0, 0, 0);
    CL_AddDebugLine(&v73->predictedPlayerState.origin, &v73->lastDragPosition, &colorRed, 0, 0, 0);
    if ( (float)((float)((float)((float)(v73->lastDragPosition.v[0] - v73->predictedPlayerState.origin.v[0]) * color.v[0]) + (float)((float)(v73->lastDragPosition.v[1] - v73->predictedPlayerState.origin.v[1]) * color.v[1])) + (float)((float)(v73->lastDragPosition.v[2] - v73->predictedPlayerState.origin.v[2]) * color.v[2])) < 0.0 )
      v74 = colorGreen;
    else
      v74 = colorBlue;
    v95 = v74;
    CL_AddDebugLine(&forward, &v73->lastDragPosition, &v95, 0, 0, 0);
  }
  v75 = DVARINT_cg_debugDrawSpawnGroupLoot;
  if ( !DVARINT_cg_debugDrawSpawnGroupLoot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugDrawSpawnGroupLoot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v75);
  if ( v75->current.integer > 0 )
    CG_DrawDebug_DrawSpawnGroupLoot((LocalClientNum_t)v6);
  v76 = DCONST_DVARINT_cg_drawDebugAudioClientTriggers;
  if ( DCONST_DVARINT_cg_drawDebugAudioClientTriggers )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_cg_drawDebugAudioClientTriggers);
    if ( v76->current.integer > 0 )
      CG_DrawTriggerAudioState((const LocalClientNum_t)v6);
  }
  v77 = DCONST_DVARBOOL_cg_playerbreath_debug;
  if ( !DCONST_DVARBOOL_cg_playerbreath_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerbreath_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v77);
  if ( v77->current.enabled )
    CG_DrawPlayerBreathState((const LocalClientNum_t)v6);
  v78 = DCONST_DVARINT_snd_submix_debug_draw;
  if ( DCONST_DVARINT_snd_submix_debug_draw )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_submix_debug_draw);
    if ( v78->current.integer )
      SND_SubmixDebugDrawHUD((LocalClientNum_t)v6);
  }
  v79 = DCONST_DVARBOOL_snd_drawWeaponRefl;
  if ( DCONST_DVARBOOL_snd_drawWeaponRefl )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_drawWeaponRefl);
    if ( v79->current.enabled )
      SND_DrawWeapReflOverlay((LocalClientNum_t)v6);
  }
  v80 = DCONST_DVARINT_snd_debugPropagation;
  if ( DCONST_DVARINT_snd_debugPropagation )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_debugPropagation);
    if ( v80->current.integer > 0 )
      SND_DrawPropagationDebug((LocalClientNum_t)v6);
  }
  v81 = DCONST_DVARINT_snd_occlusionDebug;
  if ( DCONST_DVARINT_snd_occlusionDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_occlusionDebug);
    if ( v81->current.integer > 0 )
      SND_DrawOcclusionDebug((LocalClientNum_t)v6);
  }
  v82 = DCONST_DVARINT_snd_fullOcclusionDebug;
  if ( DCONST_DVARINT_snd_fullOcclusionDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARINT_snd_fullOcclusionDebug);
    if ( v82->current.integer > 0 )
      CG_DrawFullOcclusionDebug((LocalClientNum_t)v6);
  }
  v83 = DCONST_DVARBOOL_snd_bankDetailStreamingDebug;
  if ( DCONST_DVARBOOL_snd_bankDetailStreamingDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_bankDetailStreamingDebug);
    if ( v83->current.enabled )
      SND_BankDetailStream_Debug((LocalClientNum_t)v6);
  }
  v84 = DCONST_DVARBOOL_voice_drawDebug;
  if ( DCONST_DVARBOOL_voice_drawDebug )
  {
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_voice_drawDebug);
    if ( v84->current.enabled )
      Voice_DrawDebug((LocalClientNum_t)v6);
  }
  v85 = DVARINT_cg_drawVisionSetMode;
  if ( !DVARINT_cg_drawVisionSetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVisionSetMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.integer > 0 )
  {
    v86 = DVARINT_cg_drawVisionSetMode;
    if ( !DVARINT_cg_drawVisionSetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVisionSetMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v86);
    CG_VisionSetDebugDraw((const LocalClientNum_t)v6, (visionSetPrintMode_t)v86->current.integer);
  }
  CG_DrawDebugCinematicCamera((LocalClientNum_t)v6);
  CG_DrawDebug_DrawLights((LocalClientNum_t)v6);
  CG_DrawDebug_DrawDynamiclightsetLights((LocalClientNum_t)v6);
  CG_DrawDebug_DrawLGVDebugOverlay((LocalClientNum_t)v6);
  CG_DrawDebug_DrawMemoryDebugOverlays((const LocalClientNum_t)v6);
  if ( DevGui_IsActive() )
    CG_DrawDebugShaderOverlay((LocalClientNum_t)v6);
  v87 = DVARBOOL_cg_inputLatencyDevice;
  if ( !DVARBOOL_cg_inputLatencyDevice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_inputLatencyDevice") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v87);
  if ( v87->current.enabled )
  {
    if ( ClActiveClient::GetClient((const LocalClientNum_t)v6)->m_latencyDeviceState )
      v88 = (vec4_t)_xmm;
    else
      v88 = (vec4_t)_xmm;
    v95 = v88;
    v89 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
    CG_Draw2DRect(v89, (float)((float)(v89->virtualViewableMax.v[0] + v89->virtualViewableMin.v[0]) - 100.0) * 0.5, (float)((float)(v89->virtualViewableMax.v[1] + v89->virtualViewableMin.v[1]) - 100.0) * 0.5, 100.0, 100.0, 1, 1, &v95, cgMedia.whiteMaterial);
  }
  v90 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
  CL_Streaming_DrawOverlay(v90);
  CG_DrawDebug_DrawTransientQueueOverlay((const LocalClientNum_t)v6);
  CG_DrawDebug_DrawEntityWorkersOverlay((const LocalClientNum_t)v6);
  CG_DrawDebug_DrawFileReadHistoryOverlay((const LocalClientNum_t)v6);
}

/*
==============
CgDrawDebug::DrawFullScreenDebugOverlays
==============
*/
void CgDrawDebug::DrawFullScreenDebugOverlays(CgDrawDebug *this, const LocalClientNum_t localClientNum)
{
  double v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  CgDrawDebug *v7; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v9; 
  const ScreenPlacement *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int integer; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const scrContext_t *v17; 
  unsigned int MaxChildScriptVars; 
  unsigned int NumChildScriptVars; 
  const char *v20; 
  unsigned int MaxParentScriptVars; 
  unsigned int NumParentScriptVars; 
  const char *v23; 
  unsigned int NumScriptThreads; 
  const char *v25; 
  unsigned int StringUsage; 
  const char *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const ScreenPlacement *v30; 
  __int128 v31; 
  int v32; 
  char **v33; 
  __int128 v34; 
  cg_t *LocalClientGlobals; 
  __int64 forceColor; 
  __int64 shadow; 
  vec2_t inOutProfilePos; 
  ScriptableBg_DrawDebugInfo outOrg; 
  char *outInfoStrings[26]; 
  char dest[256]; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 

  v6 = localClientNum;
  v7 = this;
  if ( !Sys_IsRenderThread() )
  {
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 8960, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
    v9 = DVARBOOL_cg_drawVersion;
    v10 = ActivePlacement;
    if ( !DVARBOOL_cg_drawVersion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      CG_DrawDebug_DrawVersion();
    v11 = DVARBOOL_cg_drawBspVersion;
    if ( !DVARBOOL_cg_drawBspVersion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBspVersion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      CG_DrawDebug_DrawBspVersion();
    v12 = DVARINT_cg_drawTerrainStreamingInfo;
    if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer > 0 )
      CG_DrawDebug_DrawSuperTerrainInfo((const LocalClientNum_t)v6);
    v13 = DVARINT_cg_drawClutterInfo;
    if ( !DVARINT_cg_drawClutterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClutterInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer )
      CG_DrawDebug_DrawClutterInfo(v2);
    R_DecalVolumes_DrawOverlay((LocalClientNum_t)v6);
    CG_DebugDraw_DrawAnimWeightsGraph((LocalClientNum_t)v6);
    v7->DrawGameMsgWindows(v7, (const LocalClientNum_t)v6, v10);
    integer = fx_mark_profile->current.integer;
    if ( integer <= 0 )
    {
      Particle_DrawProfiler((LocalClientNum_t)v6);
      v15 = DVARINT_snd_drawInfo;
      if ( !DVARINT_snd_drawInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_drawInfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.integer )
      {
        CG_DrawDebug_DrawSoundOverlay(v10);
      }
      else
      {
        CG_DrawDebug_PlayerFootstep((LocalClientNum_t)v6, v10);
        CG_DrawDebug_PlayerBullet((LocalClientNum_t)v6, v10);
        Stream_Debug_DrawXPakHeatMap();
        Stream_Debug_DrawCameraVelocity((LocalClientNum_t)v6, v10);
        v16 = DVARBOOL_cg_drawScriptUsageServer;
        if ( !DVARBOOL_cg_drawScriptUsageServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawScriptUsageServer") )
          __debugbreak();
        v45 = v3;
        v44 = v4;
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          v17 = ScriptContext_Server();
          MaxChildScriptVars = Scr_GetMaxChildScriptVars(v17);
          NumChildScriptVars = Scr_GetNumChildScriptVars(v17);
          v20 = j_va("child total: %d/%d", NumChildScriptVars, MaxChildScriptVars);
          CG_DrawStringExt(v10, 300.0, 84.0, v20, &colorWhite, 1, 1, 14.0, 1);
          MaxParentScriptVars = Scr_GetMaxParentScriptVars(v17);
          NumParentScriptVars = Scr_GetNumParentScriptVars(v17);
          v23 = j_va("parent total: %d/%d", NumParentScriptVars, MaxParentScriptVars);
          CG_DrawStringExt(v10, 300.0, 98.0, v23, &colorWhite, 1, 1, 14.0, 1);
          NumScriptThreads = Scr_GetNumScriptThreads(v17);
          v25 = j_va("num threads: %d", NumScriptThreads);
          CG_DrawStringExt(v10, 300.0, 112.0, v25, &colorWhite, 1, 1, 14.0, 1);
          StringUsage = Scr_GetStringUsage();
          v27 = j_va("string usage: %d", StringUsage);
          CG_DrawStringExt(v10, 300.0, 126.0, v27, &colorWhite, 1, 1, 14.0, 1);
        }
        v28 = DVARBOOL_cg_drawrumbledebug;
        if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( v28->current.enabled )
          CG_Rumble_DrawDebug((LocalClientNum_t)v6);
        CgAntiLag::DrawDebug((LocalClientNum_t)v6);
        CG_DrawDebug_DrawWorldUpDisplay((LocalClientNum_t)v6);
        v29 = DVARBOOL_entitySpawnDebug;
        if ( !DVARBOOL_entitySpawnDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entitySpawnDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.enabled && CG_GetLocalClientGlobals((const LocalClientNum_t)v6) )
        {
          v30 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 10948, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
            __debugbreak();
          Com_sprintf(dest, 0x100ui64, "World Up Debug");
          CG_DrawStringExt(v30, 2.0, 8.0, dest, &colorYellow, 0, 1, 8.0, 0);
          v31 = LODWORD(FLOAT_16_0);
          inOutProfilePos.v[0] = 0.0;
          G_DebugGetSpawnedEntityList(25, outInfoStrings, (int *)&inOutProfilePos);
          v32 = 0;
          if ( SLODWORD(inOutProfilePos.v[0]) > 0 )
          {
            v43 = v5;
            v33 = outInfoStrings;
            do
            {
              Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, *v33);
              CG_DrawStringExt(v30, 4.0, *(float *)&v31, dest, &colorWhite, 0, 1, 8.0, 0);
              ++v32;
              ++v33;
              v34 = v31;
              *(float *)&v34 = *(float *)&v31 + 8.0;
              v31 = v34;
            }
            while ( v32 < SLODWORD(inOutProfilePos.v[0]) );
            v7 = this;
          }
        }
        CG_ModelPreviewerDrawInfo((LocalClientNum_t)v6, v10);
        CG_CreateFx_DrawInfo((LocalClientNum_t)v6, v10);
        if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
        {
          if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
          {
            LODWORD(shadow) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
              __debugbreak();
          }
          if ( (unsigned int)v6 >= CgClientSideEffectsSystem::ms_allocatedCount )
          {
            LODWORD(shadow) = CgClientSideEffectsSystem::ms_allocatedCount;
            LODWORD(forceColor) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
              __debugbreak();
          }
          if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v6] )
          {
            LODWORD(shadow) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", shadow) )
              __debugbreak();
          }
          CgClientSideEffectsSystem::Draw3D(CgClientSideEffectsSystem::ms_cseSystemArray[v6], v10);
        }
        WorldCollision_Debug_Draw(v10);
        StaticModels_Debug_Draw(v10);
        PatchCollision_Debug_Draw(v10);
        Physics_DrawDebug(v10);
        DynEnt_DrawDebug((LocalClientNum_t)v6, v10);
        Cloth_Debug_SetRefDecoder(CG_Cloth_ConvertRefToString);
        Cloth_Debug_SetRefEntNumDecoder(CG_Cloth_ConvertRefToEntNum);
        Cloth_Debug_Draw(v10);
        CG_ClientModel_DebugDraw(v10);
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg.viewPos);
        outOrg.forward = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.m[0];
        ScriptableBg_DrawDebug(v10, &outOrg);
        CG_Event_Debug_Draw(v10);
        CG_Edge_DrawDebug((const LocalClientNum_t)v6);
        if ( glass_debug->current.enabled )
          CG_Glass_DrawDebug((LocalClientNum_t)v6);
        CL_Cameraman_DrawDebugInformation((LocalClientNum_t)v6, v10);
        CG_VehicleHelicopter_DebugDraw((LocalClientNum_t)v6, v10);
        v7->PrintUpperRightDebugInfo(v7, (const LocalClientNum_t)v6, v10);
        CG_DrawDebug_OverlayTitle();
        v7->DrawTransientOverlays(v7, (const LocalClientNum_t)v6);
        CG_DebugDraw_ShowXModelRanking((const LocalClientNum_t)v6);
        CG_CalloutMarkerPing_DebugDraw((const LocalClientNum_t)v6);
      }
    }
    else
    {
      inOutProfilePos.v[0] = 0.0;
      inOutProfilePos.v[1] = FX_PROFILE_LINE_HEIGHT;
      FX_DrawMarkProfile((LocalClientNum_t)(integer - 1), CG_DrawDebug_DrawFxText, &inOutProfilePos);
    }
  }
}

/*
==============
GetBudgetLimitColor
==============
*/

vec4_t *__fastcall GetBudgetLimitColor(const long double val, double maxVal, const long double medThreshold, const long double hiThreshold)
{
  vec4_t *result; 

  __asm { vandpd  xmm4, xmm1, cs:__xmm@7fffffffffffffff7fffffffffffffff }
  if ( *(double *)&_XMM4 <= 2.220446049250313e-16 )
    return &colorPink;
  if ( val / maxVal > hiThreshold )
    return &colorRed;
  result = &colorYellow;
  if ( val / maxVal <= medThreshold )
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
  const dvar_t *v3; 
  const char *v4; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    v3 = DVARVEC2_cg_debugInfoCornerOffsetMP;
    if ( DVARVEC2_cg_debugInfoCornerOffsetMP )
      goto LABEL_8;
    v4 = "cg_debugInfoCornerOffsetMP";
  }
  else
  {
    v3 = DVARVEC2_cg_debugInfoCornerOffsetSP;
    if ( DVARVEC2_cg_debugInfoCornerOffsetSP )
      goto LABEL_8;
    v4 = "cg_debugInfoCornerOffsetSP";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(v3);
  return (float)(scrPlace->virtualViewableMax.v[0] - scrPlace->virtualViewableMin.v[0]) + v3->current.value;
}

/*
==============
CgDrawDebug::GetCornerLabelWidth
==============
*/
float CgDrawDebug::GetCornerLabelWidth(CgDrawDebug *this, const char *label)
{
  int v2; 
  const dvar_t *v3; 
  float v4; 

  v2 = R_TextWidth(label, 0, cls.smallDevFont);
  v3 = DCONST_DVARFLT_cg_small_dev_string_fontscale;
  v4 = (float)v2;
  if ( !DCONST_DVARFLT_cg_small_dev_string_fontscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_small_dev_string_fontscale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return (float)(v4 * v3->current.value) * 0.75;
}

/*
==============
CgDrawDebug::PrintBuildName
==============
*/
float CgDrawDebug::PrintBuildName(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  const dvar_t *v4; 
  double CornerFarRight; 

  v4 = DVARBOOL_cg_drawBuildName;
  if ( !DVARBOOL_cg_drawBuildName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBuildName") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return posY;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  return posY + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, posY, 0.0, "1-game_test.exe", (const char *)&queryFormat.fmt + 3, &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::PrintCamAndMovementInfo
==============
*/
float CgDrawDebug::PrintCamAndMovementInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  float v8; 
  const dvar_t *v11; 
  int integer; 
  double CornerFarRight; 
  cg_t *LocalClientGlobals; 
  ClientFov *ViewFovBySpace; 
  float baseFovAdjustment; 
  float v17; 
  float v18; 
  char *v19; 
  const dvar_t *v20; 
  const char *s; 
  float v22; 
  int m_movingPlatformEntity_low; 
  const cpose_t *Pose; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  float v26; 
  float v27; 
  const char *v28; 
  double v29; 
  double v30; 
  float v31; 
  cg_t *v32; 
  char *v33; 
  const dvar_t *v34; 
  float v35; 
  ClientFov *v36; 
  const dvar_t *v37; 
  double v38; 
  double ClientAspectRatio; 
  float v40; 
  float v41; 
  float v42; 
  char *v43; 
  const dvar_t *v44; 
  float v45; 
  char *v46; 
  const dvar_t *v47; 
  float v48; 
  char *v49; 
  const dvar_t *v50; 
  float v51; 
  float v52; 
  double MaxPitchSpeed; 
  float v54; 
  double MaxYawSpeed; 
  const char *v56; 
  double v57; 
  float v58; 
  __int64 v59; 
  const char *v60; 
  double v61; 
  float v62; 
  int Int_Internal_DebugName; 
  int v64; 
  const char *v65; 
  vec4_t *v66; 
  float v67; 
  const dvar_t *v68; 
  float v69; 
  const char *v70; 
  double v71; 
  float v72; 
  float v73; 
  double Float_Internal_DebugName; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  const char *v82; 
  char *v83; 
  const dvar_t *v84; 
  const char *v85; 
  int v86; 
  float v87; 
  float v88; 
  float strength; 
  char *v90; 
  const dvar_t *v91; 
  const char *v92; 
  CgDrawDebug *v95; 
  CgDrawDebug *v96; 
  CgDrawDebug *v97; 
  CgDrawDebug *v98; 
  float v99; 
  vec4_t v100; 
  vec3_t outOrigin; 
  vec4_t color; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 

  v8 = posY;
  if ( bg_lastParsedWeaponIndex )
  {
    v11 = DVARINT_cg_drawCamAndMovementInfo;
    if ( !DVARINT_cg_drawCamAndMovementInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCamAndMovementInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    if ( integer == 1 )
    {
      CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      ViewFovBySpace = CG_GetViewFovBySpace((ClientFov *)&v100, localClientNum, CG_FovSpace_Scene, 0);
      baseFovAdjustment = ViewFovBySpace->baseFovAdjustment;
      v17 = (float)(LocalClientGlobals->predictedPlayerState.velocity.v[0] * LocalClientGlobals->predictedPlayerState.velocity.v[0]) + (float)(LocalClientGlobals->predictedPlayerState.velocity.v[1] * LocalClientGlobals->predictedPlayerState.velocity.v[1]);
      v18 = fsqrt((float)(LocalClientGlobals->predictedPlayerState.velocity.v[2] * LocalClientGlobals->predictedPlayerState.velocity.v[2]) + v17);
      *(_QWORD *)v100.v = *(_QWORD *)&ViewFovBySpace->finalFov;
      v100.v[2] = baseFovAdjustment;
      v19 = j_va("Vel: %5.2f Vel3D: %5.2f FOV: %4.2f \n", fsqrt(v17), v18, v100.v[0]);
      v20 = DVARBOOL_cg_drawFPSLabels;
      s = v19;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v22 = posY + (float)((float)CG_DrawDevString(scrPlace, *(float *)&CornerFarRight, posY, 0.75, 0.75, s, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
      v8 = v22;
      if ( BGMovingPlatformPS::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState.movingPlatforms) )
      {
        m_movingPlatformEntity_low = SLOWORD(LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity);
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
          FunctionPointer_prevOrigin(&Pose->prevOrigin.prevOrigin, (vec3_t *)&v100);
          CG_GetPoseOrigin(Pose, &outOrigin);
          v26 = (float)LocalClientGlobals->frametime * 0.001;
          if ( v26 > 0.000001 )
          {
            v27 = 1.0 / v26;
            v28 = j_va("Mover Speed: %6.2f Mover Velocity: %8.2f %8.2f %8.2f\n", fsqrt((float)((float)((float)(v27 * (float)(outOrigin.v[1] - v100.v[1])) * (float)(v27 * (float)(outOrigin.v[1] - v100.v[1]))) + (float)((float)(v27 * (float)(outOrigin.v[0] - v100.v[0])) * (float)(v27 * (float)(outOrigin.v[0] - v100.v[0])))) + (float)((float)((float)(outOrigin.v[2] - v100.v[2]) * v27) * (float)((float)(outOrigin.v[2] - v100.v[2]) * v27))), (float)(v27 * (float)(outOrigin.v[0] - v100.v[0])), (float)(v27 * (float)(outOrigin.v[1] - v100.v[1])), (float)((float)(outOrigin.v[2] - v100.v[2]) * v27));
            v29 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, *(float *)&CornerFarRight, v22, v28, &colorWhite);
            return v22 + *(float *)&v29;
          }
        }
      }
    }
    else if ( integer >= 2 )
    {
      v105 = v4;
      v104 = v5;
      v103 = v6;
      v30 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v31 = *(float *)&v30;
      v32 = CG_GetLocalClientGlobals(localClientNum);
      v33 = j_va("Velocity 2d: %5.2f \n", fsqrt((float)(v32->predictedPlayerState.velocity.v[0] * v32->predictedPlayerState.velocity.v[0]) + (float)(v32->predictedPlayerState.velocity.v[1] * v32->predictedPlayerState.velocity.v[1])));
      v34 = DVARBOOL_cg_drawFPSLabels;
      v95 = (CgDrawDebug *)v33;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      v35 = posY + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v30, posY, 0.75, 0.75, (const char *)v95, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
      if ( !BG_GetSuitDef(v32->predictedPlayerState.suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 2760, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      v36 = CG_GetViewFovBySpace((ClientFov *)&v100, localClientNum, CG_FovSpace_Scene, 0);
      v37 = DCONST_DVARMPBOOL_fovUseTimeBasedBlends;
      v38 = *(double *)&v36->finalFov;
      v100.v[2] = v36->baseFovAdjustment;
      *(double *)v100.v = v38;
      if ( !DCONST_DVARMPBOOL_fovUseTimeBasedBlends && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovUseTimeBasedBlends") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      ClientAspectRatio = CG_View_GetClientAspectRatio(localClientNum);
      v40 = *(float *)&ClientAspectRatio;
      *(float *)&ClientAspectRatio = tanf_0(*(float *)&v38 * 0.0087266462);
      v41 = atanf_0(*(float *)&ClientAspectRatio * 1.3333334) * 114.59155;
      v42 = atanf_0((float)((float)(*(float *)&v38 * 0.0087266462) * v40) * 0.75) * 114.59155;
      v43 = j_va("AspectRatio: %2.2f legacy FOV: %5.2f\n", v40, *(float *)&v38);
      v44 = DVARBOOL_cg_drawFPSLabels;
      v96 = (CgDrawDebug *)v43;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      v45 = v35 + (float)((float)CG_DrawDevString(scrPlace, v31, v35, 0.75, 0.75, (const char *)v96, &colorLtCyan, 6, cls.smallDevFont) * 0.80000001);
      v46 = j_va("horz Fov: %5.2f horz Fov (16:9): %5.2f\n", v42, v41);
      v47 = DVARBOOL_cg_drawFPSLabels;
      v97 = (CgDrawDebug *)v46;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      v48 = v45 + (float)((float)CG_DrawDevString(scrPlace, v31, v45, 0.75, 0.75, (const char *)v97, &colorLtCyan, 6, cls.smallDevFont) * 0.80000001);
      v49 = j_va("View Angles (%5.2f, %5.2f, %5.2f) \n", v32->predictedPlayerState.viewangles.v[0], v32->predictedPlayerState.viewangles.v[1], v32->predictedPlayerState.viewangles.v[2]);
      v50 = DVARBOOL_cg_drawFPSLabels;
      v98 = (CgDrawDebug *)v49;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v50);
      v52 = v48 + (float)((float)CG_DrawDevString(scrPlace, v31, v48, 0.75, 0.75, (const char *)v98, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
      v51 = v52;
      if ( integer == 3 )
      {
        MaxPitchSpeed = CL_GetMaxPitchSpeed(localClientNum);
        v54 = *(float *)&MaxPitchSpeed;
        MaxYawSpeed = CL_GetMaxYawSpeed(localClientNum);
        v56 = j_va("Max Rotation Speed: Pitch %5.4f, Yaw %5.4f) \n", v54, *(float *)&MaxYawSpeed);
        v57 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, v31, v52, v56, &colorLtGrey);
        v58 = v52 + *(float *)&v57;
        *(_QWORD *)outOrigin.v = ClActiveClient::GetClient(localClientNum);
        v59 = *(_QWORD *)outOrigin.v;
        v60 = j_va("Accumulated Input: Pitch %5.4f, Yaw %5.4f) \n", *(float *)(*(_QWORD *)outOrigin.v + 456i64), *(float *)(*(_QWORD *)outOrigin.v + 460i64));
        v61 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, v31, v51 + *(float *)&v57, v60, &colorLtGrey);
        v62 = v58 + *(float *)&v61;
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_accumulatedInputExpirationTime, "cl_accumulatedInputExpirationTime");
        v64 = Int_Internal_DebugName - *(_DWORD *)(v59 + 464);
        if ( v64 < 0 )
          v64 = 0;
        v65 = j_va("RESET TIME: %d \n", (unsigned int)v64);
        if ( v64 )
        {
          v67 = (float)v64;
          if ( v67 >= (float)((float)Int_Internal_DebugName * 0.33000001) )
          {
            v66 = &colorGreen;
            if ( (float)((float)Int_Internal_DebugName * 0.66000003) > v67 )
              v66 = &colorYellow;
          }
          else
          {
            v66 = &colorOrange;
          }
        }
        else
        {
          v66 = &colorRed;
        }
        v68 = DVARBOOL_cg_drawFPSLabels;
        color = *v66;
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v68);
        v69 = v62 + (float)((float)CG_DrawDevString(scrPlace, v31, v62, 0.75, 0.75, v65, &color, 6, cls.smallDevFont) * 0.80000001);
        v70 = j_va("Shellshock: start: %d duration: %d\n", (unsigned int)v32->shellshock.startTime, (unsigned int)v32->shellshock.duration);
        v71 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, v31, v69, v70, &colorWhite);
        v51 = v69 + *(float *)&v71;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cl_accumulateShellshockedMouseInput, "cl_accumulateShellshockedMouseInput") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v32->predictedPlayerState.pm_flags, ACTIVE, 0x15u) )
        {
          v72 = 0.5 * scrPlace->realViewportSize.v[0];
          v73 = 0.5 * scrPlace->realViewportSize.v[1];
          v99 = v72;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_maxAccumulatedMouseInput, "cl_maxAccumulatedMouseInput");
          v75 = *(float *)&Float_Internal_DebugName;
          v76 = scrPlace->realViewportSize.v[1];
          if ( v76 <= v75 )
            v77 = (float)(v76 / v75) * 0.80000001;
          else
            v77 = FLOAT_1_0;
          v78 = v72 - (float)(v77 * v75);
          v79 = (float)(v77 * v75) + v72;
          v80 = (float)(v77 * v75) + v73;
          v81 = v73 - (float)(v77 * v75);
          v100 = colorGreen;
          CG_Draw2DLine(scrPlace, v78, v81, v79, v81, 1.0, 5, 5, &v100, cgMedia.whiteMaterial);
          CG_Draw2DLine(scrPlace, v78, v81, v78, v80, 1.0, 5, 5, &v100, cgMedia.whiteMaterial);
          CG_Draw2DLine(scrPlace, v78, v80, v79, v80, 1.0, 5, 5, &v100, cgMedia.whiteMaterial);
          CG_Draw2DLine(scrPlace, v79, v81, v79, v80, 1.0, 5, 5, &v100, cgMedia.whiteMaterial);
          CG_Draw2DLine(scrPlace, v99, v73, (float)(v99 + *(float *)(*(_QWORD *)outOrigin.v + 460i64)) * v77, (float)(v73 + *(float *)(*(_QWORD *)outOrigin.v + 456i64)) * v77, 1.0, 5, 5, &colorYellow, cgMedia.whiteMaterial);
        }
      }
      v82 = "false";
      if ( v32->refdef.radialMotionBlur.enabled )
        v82 = "true";
      v83 = j_va("Radial Motion Blur Enabled: %s \n", v82);
      v84 = DVARBOOL_cg_drawFPSLabels;
      v85 = v83;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v84);
      v86 = CG_DrawDevString(scrPlace, v31, v51, 0.75, 0.75, v85, &colorWhite, 6, cls.smallDevFont);
      v87 = 1.0 - v32->refdef.radialMotionBlur.radius;
      v88 = v51 + (float)((float)v86 * 0.80000001);
      strength = v32->refdef.radialMotionBlur.strength;
      if ( !v32->refdef.radialMotionBlur.enabled )
      {
        v87 = 0.0;
        strength = 0.0;
      }
      v90 = j_va("Blur Fade Radius: %1.4f Strength: %1.4f \n", v87, strength);
      v91 = DVARBOOL_cg_drawFPSLabels;
      v92 = v90;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v91);
      return v88 + (float)((float)CG_DrawDevString(scrPlace, v31, v88, 0.75, 0.75, v92, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    }
  }
  return v8;
}

/*
==============
CgDrawDebug::PrintCinematicInfo
==============
*/
float CgDrawDebug::PrintCinematicInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  float v9; 
  GfxColorimetry DisplayColorimetry; 
  float v11; 
  float v12; 
  __int128 v15; 
  __int128 v16; 
  double CornerFarRight; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  const char *v24; 
  double v25; 
  const dvar_t *v26; 
  float v27; 
  double v28; 
  const dvar_t *v29; 
  float v30; 
  double v31; 
  const dvar_t *v32; 
  float v33; 
  double v34; 
  const dvar_t *v35; 
  float v36; 
  bool IsColorimetryHDR; 
  const char *v38; 
  __int32 v39; 
  __int32 v40; 
  __int32 v41; 
  const char *v42; 
  double v43; 
  const dvar_t *v44; 
  float v45; 
  __int64 MemoryUsed; 
  float v47; 
  float v48; 
  double v49; 
  const dvar_t *v50; 
  float v51; 
  double v52; 
  const dvar_t *v53; 
  float v54; 
  unsigned int BinkTotalFrames; 
  unsigned int BinkFrameNum; 
  double v57; 
  const dvar_t *v58; 
  unsigned int frameCount; 
  __int64 v60; 
  __int128 v61; 
  __int128 v63; 
  float *p_renderSelfTime; 
  unsigned int v66; 
  __int64 v67; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v86; 
  CinematicPlaybackFrameStats *v87; 
  __int64 v88; 
  __int128 v91; 
  __int128 v92; 
  float v93; 
  __int64 v94; 
  double v95; 
  const dvar_t *v96; 
  float v97; 
  double v98; 
  const dvar_t *v99; 
  float v100; 
  double v101; 
  const dvar_t *v102; 
  int v103; 
  __int64 v104; 
  float v105; 
  double v106; 
  const dvar_t *v107; 
  bool hdr; 
  unsigned int outTimeInMsec; 
  float framerate; 
  unsigned int height; 
  unsigned int width[4]; 
  CinematicPlaybackStats stats; 
  char dest[256]; 
  char outName[256]; 
  char outFlagsString[256]; 
  char v118[256]; 
  char outString[256]; 
  __int128 v120; 
  __int128 v121; 

  v6 = DVARBOOL_cg_drawCinematicInfo;
  v9 = y;
  if ( !DVARBOOL_cg_drawCinematicInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCinematicInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && R_Cinematic_GetFilenameAndTimeInMsec(outName, 0x100ui64, &outTimeInMsec) && R_Cinematic_GetVideoInfo(width, &height, &framerate, &hdr) && R_Cinematic_GetOpenFlagsString(outFlagsString, 0x100ui64) && R_Cinematic_GetPlaybackFlagsString(v118, 0x100ui64) && R_Cinematic_GetStateString(outString, 0x100ui64) )
  {
    DisplayColorimetry = R_GetDisplayColorimetry();
    v11 = (float)outTimeInMsec;
    v12 = v11 * 0.001;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rbx }
    if ( (__int64)(__rdtsc() - R_Cinematic_GetVideoStartTime()) < 0 )
    {
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v15 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v15;
    }
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v16 = *(double *)&_XMM0 * msecPerRawTimerTick * 0.001;
    _XMM1 = v16;
    __asm { vcvtsd2ss xmm11, xmm1, xmm1 }
    Com_sprintf<256>((char (*)[256])dest, "Video: %s", outName);
    CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v20 = DVARBOOL_cg_drawFPSLabels;
    v21 = FLOAT_5_0;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v22 = FLOAT_0_80000001;
    v23 = y + (float)((float)CG_DrawDevString(scrPlace, *(float *)&CornerFarRight - 5.0, y, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    v24 = (char *)&queryFormat.fmt + 3;
    if ( hdr )
      v24 = " HDR";
    Com_sprintf<256>((char (*)[256])dest, "Info: %u x %u @ %.0f%s", width[0], height, framerate, v24);
    v25 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v26 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v23 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v25 - 5.0, v23, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    Com_sprintf<256>((char (*)[256])dest, "Open Flags: %s", outFlagsString);
    v28 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v29 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = v27 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v28 - 5.0, v27, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    Com_sprintf<256>((char (*)[256])dest, "Playback Flags: %s", v118);
    v31 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v32 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v33 = v30 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v31 - 5.0, v30, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    Com_sprintf<256>((char (*)[256])dest, "State: %s", outString);
    v34 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v35 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v33 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v34 - 5.0, v33, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    IsColorimetryHDR = R_IsColorimetryHDR(DisplayColorimetry);
    v38 = "SDR";
    if ( IsColorimetryHDR )
      v38 = "HDR";
    if ( DisplayColorimetry )
    {
      v39 = DisplayColorimetry - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            if ( v41 == 1 )
              v42 = "HSRGB";
            else
              v42 = "UNKNOWN";
          }
          else
          {
            v42 = "BT2020_PQ";
          }
        }
        else
        {
          v42 = "BT709_BT709";
        }
      }
      else
      {
        v42 = "BT709_BT1886";
      }
    }
    else
    {
      v42 = "BT709_SRGB";
    }
    Com_sprintf<256>((char (*)[256])dest, "Screen: %s (%s)", v42, v38);
    v43 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v44 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = v36 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v43 - 5.0, v36, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    MemoryUsed = R_Cinematic_GetMemoryUsed();
    v47 = (float)MemoryUsed;
    if ( MemoryUsed < 0 )
    {
      v48 = (float)MemoryUsed;
      v47 = v48 + 1.8446744e19;
    }
    Com_sprintf<256>((char (*)[256])dest, "Memory: %.3f MB", (float)(v47 * 0.00000095367432));
    v49 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v50 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    v51 = v45 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v49 - 5.0, v45, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    Com_sprintf<256>((char (*)[256])dest, "Video Time: %.3f (%6.3f)", v12, (float)(v12 - *(float *)&_XMM11));
    v52 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v53 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v51 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v52 - 5.0, v51, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    BinkTotalFrames = R_Cinematic_GetBinkTotalFrames();
    BinkFrameNum = R_Cinematic_GetBinkFrameNum();
    Com_sprintf<256>((char (*)[256])dest, "Video Frame: %u / %u", BinkFrameNum, BinkTotalFrames);
    v57 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v58 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    v9 = v54 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v57 - 5.0, v54, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    R_Cinematic_GetPlaybackStats(&stats);
    if ( stats.frameCount )
    {
      v121 = v4;
      v120 = v5;
      frameCount = stats.frameCount;
      if ( stats.frameCount > 0x3C )
        frameCount = 60;
      v60 = 0i64;
      v61 = 0i64;
      LODWORD(_XMM3) = 0;
      v63 = 0i64;
      _XMM6 = 0i64;
      if ( frameCount >= 4 )
      {
        p_renderSelfTime = &stats.frames[1].renderSelfTime;
        v66 = ((frameCount - 4) >> 2) + 1;
        v67 = v66;
        v60 = 4 * v66;
        do
        {
          __asm { vmaxss  xmm1, xmm6, dword ptr [rcx-14h] }
          _XMM6 = *((unsigned int *)p_renderSelfTime + 5);
          _XMM4 = *((unsigned int *)p_renderSelfTime + 4);
          _XMM10 = *((unsigned int *)p_renderSelfTime - 6);
          _XMM7 = *((unsigned int *)p_renderSelfTime - 1);
          _XMM9 = *(unsigned int *)p_renderSelfTime;
          p_renderSelfTime += 20;
          __asm { vmaxss  xmm0, xmm10, xmm3 }
          _XMM3 = *((unsigned int *)p_renderSelfTime - 11);
          __asm
          {
            vmaxss  xmm2, xmm7, xmm0
            vmaxss  xmm0, xmm9, xmm1
            vmaxss  xmm5, xmm4, xmm2
            vmaxss  xmm8, xmm6, xmm0
          }
          v80 = _XMM10;
          *(float *)&v80 = (float)(*(float *)&_XMM10 + *(float *)&v61) + *(float *)&_XMM7;
          v81 = v80;
          v83 = v63;
          *(float *)&v83 = *(float *)&v63 + *(p_renderSelfTime - 25);
          v82 = v83;
          v84 = v81;
          *(float *)&v84 = *(float *)&v81 + *(float *)&_XMM4;
          _XMM4 = *((unsigned int *)p_renderSelfTime - 10);
          *(float *)&v84 = *(float *)&v84 + *(float *)&_XMM3;
          v61 = v84;
          v86 = v82;
          *(float *)&v86 = (float)((float)(*(float *)&v82 + *(float *)&_XMM9) + *(float *)&_XMM6) + *(float *)&_XMM4;
          v63 = v86;
          __asm
          {
            vmaxss  xmm3, xmm3, xmm5
            vmaxss  xmm6, xmm4, xmm8
          }
          --v67;
        }
        while ( v67 );
        v21 = FLOAT_5_0;
        v22 = FLOAT_0_80000001;
      }
      if ( (unsigned int)v60 < frameCount )
      {
        v87 = &stats.frames[v60];
        v88 = frameCount - (unsigned int)v60;
        do
        {
          _XMM0 = LODWORD(v87->renderOverallTime);
          _XMM1 = LODWORD(v87->renderSelfTime);
          ++v87;
          v91 = v61;
          *(float *)&v91 = *(float *)&v61 + *(float *)&_XMM0;
          v61 = v91;
          __asm { vmaxss  xmm3, xmm0, xmm3 }
          v92 = v63;
          *(float *)&v92 = *(float *)&v63 + *(float *)&_XMM1;
          v63 = v92;
          __asm { vmaxss  xmm6, xmm1, xmm6 }
          --v88;
        }
        while ( v88 );
      }
      v93 = (float)frameCount;
      v94 = (stats.frameCount - 1) % 0x3C;
      Com_sprintf<256>((char (*)[256])dest, "RB Overall Time: %6.3f (%6.3f)", (float)((float)(1.0 / v93) * *(float *)&v61), *(float *)&_XMM3);
      v95 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v96 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v96);
      v97 = v9 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v95 - v21, v9, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * v22);
      Com_sprintf<256>((char (*)[256])dest, "RB Update Time: %6.3f (%6.3f)", (float)(*(float *)&v63 * (float)(1.0 / v93)), *(float *)&_XMM6);
      v98 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v99 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v99);
      v100 = v97 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v98 - v21, v97, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * v22);
      Com_sprintf<256>((char (*)[256])dest, "Skips: %u", stats.totalFrameSkips);
      v101 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v102 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v102);
      v103 = CG_DrawDevString(scrPlace, *(float *)&v101 - v21, v100, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont);
      v104 = 32i64;
      if ( stats.frames[v94].ioActive )
        v104 = 42i64;
      v105 = v100 + (float)((float)v103 * v22);
      Com_sprintf<256>((char (*)[256])dest, "IO: %u%%%c", stats.frames[v94].ioFullPercent, v104);
      v106 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v107 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v107);
      return v105 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v106 - v21, v105, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * v22);
    }
  }
  return v9;
}

/*
==============
CgDrawDebug::PrintClientTaskDebugInfo
==============
*/
float CgDrawDebug::PrintClientTaskDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  float v7; 
  const dvar_t *v8; 
  double CornerLabelWidth; 
  float v10; 
  double CornerFarRight; 
  unsigned int outBufferWatermarmark[4]; 
  char dest[64]; 

  v4 = DVARINT_cg_drawFPS;
  v7 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v8 = DVARBOOL_cg_drawClientTasks;
    if ( !DVARBOOL_cg_drawClientTasks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientTasks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && Com_IsAnyLocalServerRunning() )
    {
      SV_Game_GetDebugClientTaskInfo(outBufferWatermarmark);
      if ( outBufferWatermarmark[0] )
      {
        CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
        v10 = *(float *)&CornerLabelWidth;
        Com_sprintf(dest, 0x40ui64, "%i", outBufferWatermarmark[0]);
        CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        return y + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, y, v10, dest, " cl task buf", &colorWhite, 0.75, 0.75, 0.80000001, 0);
      }
    }
  }
  return v7;
}

/*
==============
CgDrawDebug::PrintEventProfile
==============
*/

float __fastcall CgDrawDebug::PrintEventProfile(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __int128 v4; 
  double CornerLabelWidth; 
  float v8; 
  double CornerFarRight; 
  float v10; 
  __int128 v11; 
  const char *text; 
  __int128 v13; 
  int v14; 
  double *v15; 
  int *v16; 
  int v19; 
  double v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 *p_Src; 
  __int64 *v25; 
  __int64 v26; 
  double *v27; 
  __int64 v28; 
  const char *v29; 
  __int128 v30; 
  __int128 v31; 
  const char *v32; 
  __int128 v33; 
  int v34; 
  int *v35; 
  __int64 v36; 
  double v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 *v42; 
  int *v43; 
  const char *v46; 
  __int128 v47; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  __int64 Src; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int128 v58; 

  if ( profile2->current.integer != 3 )
    return *(float *)&y;
  v58 = v4;
  Src = 0i64;
  v54 = 0i64;
  v55 = 0i64;
  v56 = 0i64;
  v57 = 0i64;
  v50 = -1i64;
  v51 = -1i64;
  v52 = -1;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
  v8 = *(float *)&CornerLabelWidth;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v10 = *(float *)&CornerFarRight;
  v11 = *(_OWORD *)&y;
  *(float *)&v11 = *(float *)&y + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, *(float *)&y, v8, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  text = j_va((const char *)&queryFormat, "Event Average");
  *(float *)&v11 = *(float *)&v11 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v11, v8, text, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v13 = v11;
  v14 = 0;
  v15 = g_perfEventTime;
  v16 = g_perfEventNum;
  do
  {
    if ( *v16 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, eax }
      v19 = 0;
      v20 = *v15 / *(double *)&_XMM1;
      v21 = 0i64;
      while ( v20 < 0.1000000014901161 || v20 <= *((double *)&Src + v21) )
      {
        ++v19;
        if ( ++v21 >= 5 )
          goto LABEL_12;
      }
      if ( v19 + 1 < 5 )
      {
        v22 = v19;
        v23 = 4 - v19;
        memmove_0(&v54 + v19, &Src + v19, 8 * v23);
        memmove_0((char *)&v50 + 4 * v22 + 4, (char *)&v50 + 4 * v22, 4 * v23);
      }
      *((double *)&Src + v21) = v20;
      *((_DWORD *)&v50 + v21) = v14;
    }
LABEL_12:
    ++v14;
    ++v16;
    ++v15;
  }
  while ( v14 < 227 );
  p_Src = &Src;
  v25 = &v50;
  v26 = 5i64;
  v27 = g_perfEventMax;
  do
  {
    v28 = *(int *)v25;
    if ( (int)v28 >= 0 )
    {
      v29 = j_va("%24.24s / % 5.1f / % 5.1f", s_bgEventNames[v28], *p_Src, g_perfEventMax[v28]);
      v30 = v13;
      *(float *)&v30 = *(float *)&v13 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v13, v8, v29, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
      v13 = v30;
    }
    v25 = (__int64 *)((char *)v25 + 4);
    ++p_Src;
    --v26;
  }
  while ( v26 );
  v50 = -1i64;
  Src = 0i64;
  v54 = 0i64;
  v55 = 0i64;
  v56 = 0i64;
  v57 = 0i64;
  v51 = -1i64;
  v52 = -1;
  v31 = v13;
  *(float *)&v31 = *(float *)&v13 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v13, v8, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v32 = j_va((const char *)&queryFormat, "Event Max");
  *(float *)&v31 = *(float *)&v31 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v31, v8, v32, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v33 = v31;
  v34 = 0;
  v35 = g_perfEventNum;
  v36 = 5i64;
  do
  {
    if ( *v35 )
    {
      v37 = *v27;
      v38 = 0;
      v39 = 0i64;
      while ( v37 < 0.1000000014901161 || v37 <= *((double *)&Src + v39) )
      {
        ++v38;
        if ( ++v39 >= 5 )
          goto LABEL_27;
      }
      if ( v38 + 1 < 5 )
      {
        v40 = v38;
        v41 = 4 - v38;
        memmove_0(&v54 + v38, &Src + v38, 8 * v41);
        memmove_0((char *)&v50 + 4 * v40 + 4, (char *)&v50 + 4 * v40, 4 * v41);
      }
      *((double *)&Src + v39) = v37;
      *((_DWORD *)&v50 + v39) = v34;
    }
LABEL_27:
    ++v34;
    ++v35;
    ++v27;
  }
  while ( v34 < 227 );
  v42 = &Src;
  v43 = (int *)&v50;
  do
  {
    if ( *v43 >= 0 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rax+rdx*4] }
      v46 = j_va("%24.24s / % 5.1f / % 5.1f", s_bgEventNames[*v43], g_perfEventTime[*v43] / *(double *)&_XMM1, *v42);
      v47 = v33;
      *(float *)&v47 = *(float *)&v33 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v33, v8, v46, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
      v33 = v47;
    }
    ++v43;
    ++v42;
    --v36;
  }
  while ( v36 );
  return *(float *)&v33 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, *(float *)&v33, v8, (const char *)&queryFormat.fmt + 3, "    ", &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::PrintFastfileDebugInfo
==============
*/

float __fastcall CgDrawDebug::PrintFastfileDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v4; 
  __int128 v8; 
  double CornerFarRight; 
  const dvar_t *v10; 
  __int128 v11; 
  unsigned int YieldTimeout; 
  unsigned int YieldTimeProgress; 
  const char *WorkPeriodStateName; 
  double v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  double v19; 
  const dvar_t *v20; 
  double CornerLabelWidth; 
  const dvar_t *v22; 
  float v23; 
  double v24; 
  float v25; 
  unsigned int stringIndex; 
  unsigned int outModelCount[3]; 
  char stringbuffer[128]; 
  char dest[128]; 

  v4 = DVARBOOL_cg_drawFastfileDebugInfo;
  v8 = *(_OWORD *)&y;
  if ( !DVARBOOL_cg_drawFastfileDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFastfileDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    for ( stringIndex = 0; Com_FastFile_GetDebugString(&stringIndex, stringbuffer, 0x80u); v8 = v11 )
    {
      CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v10 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v11 = v8;
      *(float *)&v11 = *(float *)&v8 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&CornerFarRight - 5.0, *(float *)&v8, 0.75, 0.75, stringbuffer, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
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
    v15 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v16 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    *(float *)&v8 = *(float *)&v8 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v15 - 5.0, *(float *)&v8, 0.75, 0.75, stringbuffer, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
  }
  v17 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer )
  {
    v18 = DCONST_DVARBOOL_cl_streaming_drawPendingLoads;
    if ( !DCONST_DVARBOOL_cl_streaming_drawPendingLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_streaming_drawPendingLoads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      CL_Streaming_GetPendingRequestedAssets(outModelCount, &stringIndex);
      Com_sprintf_truncate<128>((char (*)[128])dest, "ClStreaming:%4um%4ui", outModelCount[0], stringIndex);
      v19 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v20 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      *(float *)&v8 = *(float *)&v8 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v19 - 5.0, *(float *)&v8, 0.75, 0.75, dest, &colorWhite, 6, cls.smallDevFont) * 0.80000001);
    }
  }
  CornerLabelWidth = CgDrawDebug::PrintMyChangesDebug(this, localClientNum, scrPlace, *(float *)&v8);
  v22 = DVARINT_cg_drawFPS;
  v23 = *(float *)&CornerLabelWidth;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.integer )
  {
    v24 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v25 = *(float *)&v24;
    CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
    *(float *)&CornerLabelWidth = CG_DrawDebug_PrintStreamer(this, scrPlace, v25, v23, *(float *)&CornerLabelWidth);
  }
  return *(float *)&CornerLabelWidth;
}

/*
==============
CgDrawDebug::PrintFrontEndSceneCamDebug
==============
*/
float CgDrawDebug::PrintFrontEndSceneCamDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  double CornerLabelWidth; 
  float v9; 
  double CornerFarRight; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  double v14; 
  const dvar_t *v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float result; 
  vec3_t outOrg; 
  __int64 v25; 
  char dest[64]; 

  v25 = -2i64;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v5].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3382, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  if ( !Com_FrontEndScene_FreeCamEnabled() )
    return y;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " camera angles");
  v9 = *(float *)&CornerLabelWidth;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v11 = DVARBOOL_cg_drawFPSLabels;
  if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v13 = y + (float)((float)CG_DrawDevString(scrPlace, *(float *)&CornerFarRight - 5.0, y, 0.75, 0.75, "FrontEnd Scene FREE CAM", &colorYellow, 6, cls.smallDevFont) * 0.80000001);
  v12 = v13;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 3 )
  {
    v14 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v15 = DVARBOOL_cg_drawFPSLabels;
    if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v12 = v13 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v14 - 5.0, v13, 0.75, 0.75, "  UFO Enabled", &colorYellow, 6, cls.smallDevFont) * 0.80000001);
  }
  Com_sprintf(dest, 0x40ui64, "%.1f %.1f %.1f", LocalClientGlobals->predictedPlayerState.origin.v[0], LocalClientGlobals->predictedPlayerState.origin.v[1], LocalClientGlobals->predictedPlayerState.origin.v[2]);
  v16 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v17 = v12 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v16, v12, v9, dest, " player pos", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf(dest, 0x40ui64, "p%.1f y%.1f", LocalClientGlobals->predictedPlayerState.viewangles.v[0], LocalClientGlobals->predictedPlayerState.viewangles.v[1]);
  v18 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v19 = v17 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v18, v17, v9, dest, " player angles", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  Com_sprintf(dest, 0x40ui64, "(%.1f %.1f %.1f)", outOrg.v[0], outOrg.v[1], outOrg.v[2]);
  v20 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v21 = v19 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v20, v19, v9, dest, " camera org", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  Com_sprintf(dest, 0x40ui64, "(p%.1f y%.1f)", LocalClientGlobals->refdefViewAngles.v[0], LocalClientGlobals->refdefViewAngles.v[1]);
  v22 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  result = v21 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v22, v21, v9, dest, " camera angles", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  memset(&outOrg, 0, sizeof(outOrg));
  return result;
}

/*
==============
CgDrawDebug::PrintFrontendSceneDebugInfo
==============
*/
float CgDrawDebug::PrintFrontendSceneDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  double CornerLabelWidth; 
  float v10; 
  const char *StateDebugName; 
  double CornerFarRight; 
  const vec4_t *v13; 
  float v14; 
  const vec4_t *color; 
  const char *v17; 
  double v18; 
  float v19; 
  __int64 v20; 
  const char *v21; 
  double v22; 
  const vec4_t *v23; 
  float v24; 
  const char *inited; 
  const vec4_t *v26; 
  double v27; 
  float v28; 
  double Quality_Image; 
  const dvar_t *v30; 
  float value; 
  const vec4_t *v32; 
  const char *v33; 
  double v34; 
  float v35; 
  int v36; 
  const dvar_t *v37; 
  int integer; 
  const char *v39; 
  double v40; 
  unsigned int outModelCount[4]; 
  __int128 v42; 
  __int128 v43; 
  unsigned int outImageCount; 

  v6 = DVARBOOL_cg_drawFrontendSceneDebugInfo;
  if ( !DVARBOOL_cg_drawFrontendSceneDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFrontendSceneDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return y;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " FrontendScene");
  v10 = *(float *)&CornerLabelWidth;
  StateDebugName = Com_FrontEndScene_GetStateDebugName();
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v13 = &colorWhite;
  v14 = y + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, y, v10, StateDebugName, " FrontendScene", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  if ( !Com_FrontEndScene_IsNoRenderStreaming() && !Com_FrontEndScene_IsRenderableStreaming() )
    return v14;
  v43 = v4;
  v42 = v5;
  CL_Streaming_GetPendingRequestedAssets(outModelCount, &outImageCount);
  color = &colorWhite;
  if ( outImageCount )
    color = &colorRed;
  v17 = j_va("%d clstreaming assets");
  v18 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v19 = v14 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v18, v14, v10, v17, " FrontendScene", color, 0.75, 0.75, 0.80000001, 0);
  v20 = (unsigned int)CL_UIStreaming_TouchedAssetsMissing();
  v21 = j_va("%d ui assets", v20);
  v22 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v23 = &colorWhite;
  if ( (_DWORD)v20 )
    v23 = &colorRed;
  v24 = v19 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v22, v19, v10, v21, " FrontendScene", v23, 0.75, 0.75, 0.80000001, 0);
  inited = Stream_LevelInit_DebugStateString();
  v26 = &colorWhite;
  if ( !Stream_LevelInit_IsDone() )
    v26 = &colorRed;
  v27 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v28 = v24 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v27, v24, v10, inited, " FrontendScene", v26, 0.75, 0.75, 0.80000001, 0);
  Quality_Image = Stream_LoadQuality_Image();
  v30 = DVARFLT_stream_syncFrontend_imageQuality;
  if ( !DVARFLT_stream_syncFrontend_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncFrontend_imageQuality") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  value = v30->current.value;
  v32 = &colorWhite;
  if ( !CL_UIStreaming_StreamedEnough() )
    v32 = &colorRed;
  v33 = j_va("%.4f / %.4f Streaming Quality", *(float *)&Quality_Image, value);
  v34 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v35 = v28 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v34, v28, v10, v33, " FrontendScene", v32, 0.75, 0.75, 0.80000001, 0);
  LODWORD(v33) = Com_FrontEndScene_GetStateToggleTime();
  v36 = Sys_Milliseconds() - (_DWORD)v33;
  v37 = DCONST_DVARINT_frontEndSceneRenderStreamingTimeout;
  if ( !DCONST_DVARINT_frontEndSceneRenderStreamingTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndSceneRenderStreamingTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  integer = v37->current.integer;
  v39 = j_va("%d / %d Frontend Timeout", (unsigned int)v36, (unsigned int)integer);
  v40 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  if ( (float)v36 > (float)((float)integer * 0.80000001) )
    v13 = &colorRed;
  return v35 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&v40, v35, v10, v39, " FrontendScene", v13, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::PrintFrontendUpperRightDebugInfo
==============
*/
float CgDrawDebug::PrintFrontendUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, float posY)
{
  float v5; 
  const ScreenPlacement *ActivePlacement; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 

  v5 = posY;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( Com_FrontEndScene_IsActive() && CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
  {
    v7 = CgDrawDebug::PrintPerformanceInfo(this, localClientNum, ActivePlacement, posY);
    v8 = CgDrawDebug::PrintFrontEndSceneCamDebug(this, localClientNum, ActivePlacement, *(float *)&v7);
    v5 = *(float *)&v8;
  }
  v9 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, ActivePlacement, v5);
  v10 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, ActivePlacement, *(float *)&v9);
  Stream_Debug_DrawXPakHeatMap();
  CG_DrawDebug_DrawMemoryDebugOverlays(localClientNum);
  return *(float *)&v10;
}

/*
==============
CgDrawDebug::PrintMyChangesDebug
==============
*/
float CgDrawDebug::PrintMyChangesDebug(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v6; 
  float v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  GfxFont *FontHandle; 
  const char *v15; 
  float v16; 
  const char *MyChangesIconDirective; 
  const char *v18; 
  float v19; 
  float v20; 
  double Float_Internal_DebugName; 
  float v22; 
  double v23; 
  float v24; 
  int v25; 
  double v26; 
  const dvar_t *v27; 
  double CornerFarRight; 
  const dvar_t *v29; 
  const ParticleSystem *CurrentSystem; 
  const ParticleSystem *v31; 
  double v32; 
  const dvar_t *v33; 
  char *fmt; 
  char dstString[8]; 
  vec4_t color; 
  vec4_t v38; 
  char dest[128]; 
  __int128 v40; 
  __int128 v41; 

  v6 = DVARBOOL_cg_drawMyChangesDebugInfo;
  v10 = y;
  if ( !DVARBOOL_cg_drawMyChangesDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMyChangesDebugInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( !DB_GetMyChangesReportCallback() )
      DB_SetMyChangesReportCallback(CG_DrawDebug_MyChangesActionReportCallback);
    if ( !DB_GetMyChangesReloadCallback() )
      DB_SetMyChangesReloadCallback(CG_DrawDebug_MyChangesActionReloadCallback);
    if ( !DB_GetMyChangesBeginCallback() || !DB_GetMyChangesEndCallback() )
      DB_SetMyChangesProgressCallback(CG_DrawDebug_MyChangesActionBeginCallback, CG_DrawDebug_MyChangesActionEndCallback);
    v11 = DVARBOOL_cg_drawVersion;
    if ( !DVARBOOL_cg_drawVersion )
      goto LABEL_28;
    Dvar_CheckFrontendServerThread(DVARBOOL_cg_drawVersion);
    if ( !v11->current.enabled )
      goto LABEL_28;
    v40 = v5;
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_debug.cpp", 3216, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()") )
      __debugbreak();
    v12 = DVARFLT_cg_drawVersionFontScale;
    if ( !DVARFLT_cg_drawVersionFontScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawVersionFontScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value * 1.5;
    FontHandle = UI_GetFontHandle(&scrPlaceFullUnsafe, 4, v13);
    v38 = (vec4_t)_xmm;
    color = (vec4_t)_xmm;
    if ( s_debugZoneStarted )
    {
      v15 = "Building MyChanges ...";
    }
    else
    {
      if ( g_debugZoneUpdateTime <= 0 )
        goto LABEL_28;
      v16 = (float)((Sys_Milliseconds() - g_debugZoneUpdateTime) / 1000);
      MyChangesIconDirective = DB_GetMyChangesIconDirective(s_debugZoneLoadAction, &color);
      UI_ReplaceDirective(localClientNum, MyChangesIconDirective, dstString, 4ui64, 0);
      v18 = v16 >= 5.0 ? (char *)&queryFormat.fmt + 3 : DB_GetMyChanges_ActionMessage(s_debugZoneLoadAction);
      LODWORD(fmt) = s_debugZoneAssetLoadTime.tm_sec;
      v15 = j_va("%s %02d:%02d:%02d %s", v18, (unsigned int)s_debugZoneAssetLoadTime.tm_hour, (unsigned int)s_debugZoneAssetLoadTime.tm_min, fmt, dstString);
      if ( !v15 )
        goto LABEL_28;
    }
    v41 = v4;
    LODWORD(v19) = COERCE_UNSIGNED_INT((float)UI_TextWidth(v15, 0, FontHandle, v13)) ^ _xmm;
    v20 = (float)UI_TextHeight(FontHandle, v13);
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawVersionX, "cg_drawVersionX");
    v22 = v19 - *(float *)&Float_Internal_DebugName;
    v23 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_drawVersionY, "cg_drawVersionY");
    v24 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) - *(float *)&v23) - v20;
    UI_DrawText(&scrPlaceFullUnsafe, v15, 0x7FFFFFFF, FontHandle, v22 + 1.0, v24 + 1.0, 3, 3, v13, &v38, 0);
    UI_DrawText(&scrPlaceFullUnsafe, v15, 0x7FFFFFFF, FontHandle, v22, v24, 3, 3, v13, &color, 0);
LABEL_28:
    if ( g_lastParticleToolTweakTime > 0 )
    {
      v25 = (Sys_Milliseconds() - g_lastParticleToolTweakTime) / 1000;
      if ( v25 >= 60 )
      {
        Com_sprintf(dest, 0x80ui64, "ParticleTweak: %i m old", (unsigned int)(v25 / 60));
        CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v29 = DVARBOOL_cg_drawFPSLabels;
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v10 = y + (float)((float)CG_DrawDevString(scrPlace, *(float *)&CornerFarRight - 5.0, y, 0.75, 0.75, dest, &colorYellow, 6, cls.smallDevFont) * 0.80000001);
      }
      else
      {
        Com_sprintf(dest, 0x80ui64, "ParticleTweak: %i s old", (unsigned int)v25);
        v26 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v27 = DVARBOOL_cg_drawFPSLabels;
        if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        v10 = y + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v26 - 5.0, y, 0.75, 0.75, dest, &colorGreen, 6, cls.smallDevFont) * 0.80000001);
      }
    }
    CurrentSystem = Particle_ToolGetCurrentSystem(localClientNum);
    v31 = CurrentSystem;
    if ( CurrentSystem )
    {
      if ( !CurrentSystem->m_pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
        __debugbreak();
      Com_sprintf(dest, 0x80ui64, "ParticleTweak: %s", v31->m_pSystemDef->name);
      v32 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v33 = DVARBOOL_cg_drawFPSLabels;
      if ( !DVARBOOL_cg_drawFPSLabels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPSLabels") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      return v10 + (float)((float)CG_DrawDevString(scrPlace, *(float *)&v32 - 5.0, v10, 0.75, 0.75, dest, &colorYellow, 6, cls.smallDevFont) * 0.80000001);
    }
  }
  return v10;
}

/*
==============
CgDrawDebug::PrintNativeScriptDebugInfo
==============
*/
float CgDrawDebug::PrintNativeScriptDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  return y;
}

/*
==============
CgDrawDebug::PrintNoGameModeUpperRightDebugInfo
==============
*/
float CgDrawDebug::PrintNoGameModeUpperRightDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, float posY)
{
  const ScreenPlacement *ActivePlacement; 
  double v6; 
  double v7; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v6 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, ActivePlacement, posY);
  v7 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, ActivePlacement, *(float *)&v6);
  Stream_Debug_DrawXPakHeatMap();
  CG_DrawDebug_DrawMemoryDebugOverlays(localClientNum);
  return *(float *)&v7;
}

/*
==============
CgDrawDebug::PrintPerformanceInfo
==============
*/
float CgDrawDebug::PrintPerformanceInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  float v4; 
  const dvar_t *v8; 
  double CornerFarRight; 
  double CornerLabelWidth; 
  float v11; 
  const dvar_t *v12; 
  double v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  const char *v17; 
  float Stats; 
  const dvar_t *v19; 
  const char *v20; 
  float mBytesPerSec; 
  float v23; 
  int v24; 
  int fpsFrame; 
  int fps; 
  int fpsMax; 
  int fpsMin; 
  float varianceMSec; 
  float pTotalMSec; 
  float totalMSec; 
  float maxTimeMSec; 
  float minTimeMSec; 
  CgDrawDebug *v34; 
  const ScreenPlacement *v35; 
  __m256i v36; 
  float *p_mBytesPerSec; 
  __int64 v38; 
  stdext::inplace_function<void __cdecl(char const *),64,16> output; 
  vec4_t outColor; 

  v38 = -2i64;
  v4 = y;
  v8 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer )
  {
    CG_Draw_GetDetailedFPSTime(&minTimeMSec, &maxTimeMSec, &totalMSec, &varianceMSec, &fpsMin, &fpsMax, &fps, 0);
    CG_Draw_GetFPS(&fpsFrame, &pTotalMSec, 1);
    CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
    v11 = *(float *)&CornerLabelWidth;
    mBytesPerSec = *(float *)&CornerLabelWidth;
    v23 = y;
    v24 = SLODWORD(CornerFarRight);
    v35 = scrPlace;
    v34 = this;
    v12 = DVARBOOL_stream_showGenericUsage;
    if ( !DVARBOOL_stream_showGenericUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_showGenericUsage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      v36.m256i_i64[0] = (__int64)&v23;
      v36.m256i_i64[1] = (__int64)&v34;
      v36.m256i_i64[2] = (__int64)&v35;
      v36.m256i_i64[3] = (__int64)&v24;
      p_mBytesPerSec = &mBytesPerSec;
      *(__m256i *)output.m_Data._Space = v36;
      *(_QWORD *)&output.m_Data._Space[32] = &mBytesPerSec;
      output.m_ManagerFctPtr = stdext::inplace_function<void (char const *),64,16>::manage<_lambda_26b7cd888723198c4f703f1fcc9ca585_>;
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::invoke<_lambda_26b7cd888723198c4f703f1fcc9ca585_>;
      Stream_Debug_GetGenericUsageSummaryText(&output);
      output.m_InvokeFctPtr = stdext::inplace_function<void (char const *),64,16>::DefaultFunction;
      if ( output.m_ManagerFctPtr )
        output.m_ManagerFctPtr(&output.m_Data, NULL, Destroy);
      output.m_ManagerFctPtr = NULL;
    }
    *(_QWORD *)&v13 = LODWORD(minTimeMSec);
    *(float *)&v13 = CG_DrawDebug_PrintFPS(localClientNum, this, scrPlace, *(float *)&CornerFarRight, v23, v11, minTimeMSec, maxTimeMSec, totalMSec, pTotalMSec, varianceMSec, fpsMin, fpsMax, fps, fpsFrame, &outColor);
    *(float *)&v13 = CG_DrawDebug_PrintMessageRate(localClientNum, this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintServerProfile(localClientNum, this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintMemoryStats(this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintMemoryBudgetStats(this, scrPlace, *(float *)&CornerFarRight, v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintTransientCommonBudgets(this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    *(float *)&v13 = CG_DrawDebug_TaskGraphStats(this, scrPlace, *(float *)&CornerFarRight, v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintPerfStats(this, scrPlace, CornerFarRight, v13, v11);
    *(float *)&v13 = CG_DrawDebug_PrintRtStats(this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    v14 = CG_DrawDebug_PrintMisc(localClientNum, this, scrPlace, *(float *)&CornerFarRight, *(float *)&v13, v11);
    v15 = v14;
    v16 = DVARINT_cg_drawFPS;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer >= 3 )
    {
      v17 = j_va("%u / %u / %u ", cmdbufHandoffStats[0], cmdbufHandoffStats[1], cmdbufHandoffStats[2]);
      v15 = v14 + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, v14, v11, v17, " (cmdbufs/handoffs/stalls)", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
    Stats = CG_DrawDebug_PrintStreamReadStats(this, scrPlace, *(float *)&CornerFarRight, v15, v11);
    v4 = Stats;
    v19 = DCONST_DVARBOOL_fileStream_showReadSpeeds;
    if ( !DCONST_DVARBOOL_fileStream_showReadSpeeds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_showReadSpeeds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.enabled )
    {
      FileStream_GetStreamPerfDataAndClearAfterMinTime(NULL, &mBytesPerSec);
      v20 = j_va("%.1f mb/s", mBytesPerSec);
      return Stats + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, Stats, v11, v20, " Read Bandwidth", &colorWhite, 0.75, 0.75, 0.80000001, 0);
    }
  }
  return v4;
}

/*
==============
PrintRenderStat
==============
*/
float PrintRenderStat(const CgDrawDebug *draw, const ScreenPlacement *scrPlace, float x, float y, float width, const char *label, int val, int maxVal, int peakVal, float hiThresholdPercent, float medThresholdPercent)
{
  const vec4_t *color; 
  vec4_t *v19; 
  char dest[256]; 

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
    _XMM3 = 0i64;
    __asm
    {
      vcvtsi2sd xmm3, xmm3, ebx
      vandpd  xmm0, xmm3, cs:__xmm@7fffffffffffffff7fffffffffffffff
    }
    if ( *(double *)&_XMM0 > 2.220446049250313e-16 )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, edi }
      if ( *(double *)&_XMM0 / *(double *)&_XMM3 <= hiThresholdPercent * *(double *)&_XMM3 )
      {
        v19 = &colorYellow;
        if ( *(double *)&_XMM0 / *(double *)&_XMM3 <= medThresholdPercent * *(double *)&_XMM3 )
          v19 = &colorWhite;
        color = v19;
      }
      else
      {
        color = &colorRed;
      }
    }
    else
    {
      color = &colorPink;
    }
  }
  return CG_DrawDebug_CornerPrintScale(scrPlace, x, y, width, dest, label, color, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::PrintReplayTime
==============
*/
float CgDrawDebug::PrintReplayTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  const dvar_t *v4; 
  double CornerFarRight; 
  float v8; 
  int Time; 
  int v10; 
  int EndTime; 
  unsigned int v12; 
  int v13; 
  int MsgSizeMax; 
  int MsgSizeCurrent; 
  double CornerLabelWidth; 
  float v17; 
  double v18; 
  const vec4_t *color; 
  float v20; 
  float v21; 
  double v22; 
  const char *v23; 
  double v24; 
  const char *v25; 

  v4 = DVARBOOL_replay_time;
  if ( !DVARBOOL_replay_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled || !Com_IsAnyLocalServerRunning() )
    return posY;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v8 = *(float *)&CornerFarRight;
  Time = G_Main_GetTime();
  v10 = (Time - SV_Demo_GetStartTime()) / 1000;
  EndTime = SV_Demo_GetEndTime();
  v12 = (int)((unsigned __int64)(274877907i64 * (EndTime - SV_Demo_GetStartTime())) >> 32) >> 6;
  v13 = (v12 >> 31) + v12;
  MsgSizeMax = SV_Demo_GetMsgSizeMax();
  MsgSizeCurrent = SV_Demo_GetMsgSizeCurrent();
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, s_upperRightFPSAlignText);
  v17 = *(float *)&CornerLabelWidth;
  v18 = CgDrawDebug::CornerPrintCaption(this, scrPlace, v8, posY, *(float *)&CornerLabelWidth, "-Game-", &colorGreenFaded);
  color = &colorWhite;
  v20 = posY + *(float *)&v18;
  if ( v10 > 0 && v13 > 0 )
  {
    if ( MsgSizeMax && (v21 = (float)((float)MsgSizeCurrent / (float)MsgSizeMax) * 100.0, v21 > MY_MSGSIZEPERCENT_THRESHOLD) )
    {
      v22 = v21;
      if ( v10 >= v13 )
        v23 = j_va("%i, %0.1f%%", (unsigned int)v13, v22);
      else
        v23 = j_va("%i / %i, %0.1f%%", (unsigned int)v10, (unsigned int)v13, v22);
    }
    else if ( v10 >= v13 )
    {
      v23 = j_va("%i", (unsigned int)v13);
    }
    else
    {
      v23 = j_va("%i / %i", (unsigned int)v10, (unsigned int)v13);
    }
    v20 = v20 + CG_DrawDebug_CornerPrintScale(scrPlace, v8, v20, v17, v23, " replay time", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
  if ( MY_PRINT_BUFFERINFO )
  {
    v24 = CgDrawDebug::GetCornerLabelWidth(this, " replay buffer");
    v25 = j_va("%ik / %ik", (unsigned int)(MsgSizeCurrent / 1024), (unsigned int)(MsgSizeMax / 1024));
    if ( MsgSizeCurrent >= MsgSizeMax )
      color = &colorOrange;
    return v20 + CG_DrawDebug_CornerPrintScale(scrPlace, v8, v20, *(float *)&v24, v25, " replay buffer", color, 0.75, 0.75, 0.80000001, 0);
  }
  return v20;
}

/*
==============
CgDrawDebug::PrintScriptableDebugInfo
==============
*/
float CgDrawDebug::PrintScriptableDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  const dvar_t *v7; 
  double CornerLabelWidth; 
  float v9; 
  double CornerFarRight; 
  char *fmt; 
  char *label; 
  vec4_t *color; 
  char dest[64]; 

  v4 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.integer )
    return y;
  v7 = DVARBOOL_cg_drawScriptableLimits;
  if ( !DVARBOOL_cg_drawScriptableLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawScriptableLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    return y;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
  v9 = *(float *)&CornerLabelWidth;
  ScriptableCommon_AssertCountsInitialized();
  LODWORD(color) = g_scriptableWorldCounts.totalInstanceCount;
  LODWORD(label) = g_scriptableWorldCounts.serverInstanceCount;
  LODWORD(fmt) = g_scriptableWorldCounts.runtimePartCount;
  Com_sprintf(dest, 0x40ui64, "%iri %irp %is %it", g_scriptableWorldCounts.runtimeInstanceCount, fmt, label, color);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  return CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, y, v9, dest, " sbl counts", &colorWhite, 0.75, 0.75, 0.80000001, 0) + y;
}

/*
==============
CgDrawDebug::PrintSystemTime
==============
*/
float CgDrawDebug::PrintSystemTime(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  double CornerLabelWidth; 
  float v8; 
  double CornerFarRight; 
  float v10; 
  unsigned int v11; 
  const char *v12; 
  float v13; 
  float v14; 
  const volatile ServerProfileTimes *ProfileTimes; 
  const char *v16; 
  unsigned int v17; 
  const char *v18; 

  v4 = DVARBOOL_cg_drawSystemTime;
  if ( !DVARBOOL_cg_drawSystemTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSystemTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return y;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " server time");
  v8 = *(float *)&CornerLabelWidth;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v10 = *(float *)&CornerFarRight;
  v11 = Sys_Milliseconds();
  v12 = j_va("%i", v11);
  v14 = y + CG_DrawDebug_CornerPrintScale(scrPlace, *(float *)&CornerFarRight, y, v8, v12, " system time", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  v13 = v14;
  if ( Com_IsAnyLocalServerRunning() )
  {
    ProfileTimes = SV_GetProfileTimes();
    v16 = j_va("%i", (unsigned int)ProfileTimes->serverTime);
    v13 = v14 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, v14, v8, v16, " server time", &colorWhite, 0.75, 0.75, 0.80000001, 0);
  }
  v17 = Com_CSVGetRowIndex();
  if ( !v17 )
    return v13;
  v18 = j_va("%i", v17);
  return v13 + CG_DrawDebug_CornerPrintScale(scrPlace, v10, v13, v8, v18, " CSV row", &colorWhite, 0.75, 0.75, 0.80000001, 0);
}

/*
==============
CgDrawDebug::PrintViewpos
==============
*/
float CgDrawDebug::PrintViewpos(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  const dvar_t *v7; 
  double CornerFarRight; 
  float v9; 
  double CornerLabelWidth; 
  float v11; 
  cg_t *LocalClientGlobals; 
  const char *v13; 
  float v14; 
  const char *v15; 
  float result; 
  vec3_t outOrg; 
  __int64 v18; 
  vec3_t angles; 

  v18 = -2i64;
  v7 = DVARBOOL_cg_drawViewpos;
  if ( !DVARBOOL_cg_drawViewpos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawViewpos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    return posY;
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v9 = *(float *)&CornerFarRight;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
  v11 = *(float *)&CornerLabelWidth;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v13 = j_va("Position (%.0f %.0f %.0f) \n", outOrg.v[0], outOrg.v[1], outOrg.v[2]);
  v14 = posY + CG_DrawDebug_CornerPrintScale(scrPlace, v9, posY, *(float *)&CornerLabelWidth, v13, cls.m_activeGameMapName, &colorWhite, 0.75, 0.75, 0.80000001, 0);
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, &angles);
  v15 = j_va("Angles (%.0f %.0f %.0f) \n", angles.v[0], angles.v[1], angles.v[2]);
  result = v14 + CG_DrawDebug_CornerPrintScale(scrPlace, v9, v14, v11, v15, cls.m_activeGameMapName, &colorWhite, 0.75, 0.75, 0.80000001, 0);
  memset(&outOrg, 0, sizeof(outOrg));
  return result;
}

/*
==============
CgDrawDebug::PrintWallRunDebugInfo
==============
*/
float CgDrawDebug::PrintWallRunDebugInfo(CgDrawDebug *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  return y;
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

