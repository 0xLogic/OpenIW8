/*
==============
UI_UpdateTime
==============
*/

void __fastcall UI_UpdateTime(LocalClientNum_t localClientNum, int realtime)
{
  ?UI_UpdateTime@@YAXW4LocalClientNum_t@@H@Z(localClientNum, realtime);
}

/*
==============
UI_CheckForMissingMapError
==============
*/

void __fastcall UI_CheckForMissingMapError(const char *mapname)
{
  ?UI_CheckForMissingMapError@@YAXPEBD@Z(mapname);
}

/*
==============
UI_GetMapImageByName
==============
*/

const char *__fastcall UI_GetMapImageByName(const char *mapName)
{
  return ?UI_GetMapImageByName@@YAPEBDPEBD@Z(mapName);
}

/*
==============
UI_DrawTextWithGlow
==============
*/

void __fastcall UI_DrawTextWithGlow(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color, int style, const vec4_t *glowColor, Material *fxMaterial, Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime)
{
  ?UI_DrawTextWithGlow@@YAXPEBUScreenPlacement@@PEBDHPEAUGfxFont@@MMHHMAEBTvec4_t@@H3PEAUMaterial@@4HH@Z(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime);
}

/*
==============
UI_GetBlurRadius
==============
*/

double __fastcall UI_GetBlurRadius(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?UI_GetBlurRadius@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
UI_GetMapDescByIndex
==============
*/

const char *__fastcall UI_GetMapDescByIndex(int idx)
{
  return ?UI_GetMapDescByIndex@@YAPEBDH@Z(idx);
}

/*
==============
UI_AnyMenuActive
==============
*/

int __fastcall UI_AnyMenuActive(LocalClientNum_t localClientNum)
{
  return ?UI_AnyMenuActive@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_DrawBuildNumber
==============
*/

void __fastcall UI_DrawBuildNumber(const LocalClientNum_t localClientNum)
{
  ?UI_DrawBuildNumber@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_StartServer
==============
*/

void __fastcall UI_StartServer(LocalClientNum_t localClientNum, bool skipStartCountdown)
{
  ?UI_StartServer@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, skipStartCountdown);
}

/*
==============
UI_DrawInterpolatedCinematicElements
==============
*/

void __fastcall UI_DrawInterpolatedCinematicElements(LocalClientNum_t localClientNum)
{
  ?UI_DrawInterpolatedCinematicElements@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_OwnerDraw
==============
*/

void __fastcall UI_OwnerDraw(LocalClientNum_t localClientNum, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int itemAlignment, float special, GfxFont *font, float scale, const vec4_t *color, int textStyle, rectDef_s *parentRect, int textAlignMode, const char *name)
{
  ?UI_OwnerDraw@@YAXW4LocalClientNum_t@@MMMMHHMMHHHMPEAUGfxFont@@MAEBTvec4_t@@HUrectDef_s@@HPEBD@Z(localClientNum, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, ownerDrawFlags, itemAlignment, special, font, scale, color, textStyle, parentRect, textAlignMode, name);
}

/*
==============
LUI_CloseMenu
==============
*/

void __fastcall LUI_CloseMenu(LocalClientNum_t localClientNum, const char *menuName, int immediate)
{
  ?LUI_CloseMenu@@YAXW4LocalClientNum_t@@PEBDH@Z(localClientNum, menuName, immediate);
}

/*
==============
UI_GetMapGameTypesForCurrentIndex
==============
*/

const char *__fastcall UI_GetMapGameTypesForCurrentIndex(int idx)
{
  return ?UI_GetMapGameTypesForCurrentIndex@@YAPEBDH@Z(idx);
}

/*
==============
UI_FeederSelection
==============
*/

void __fastcall UI_FeederSelection(LocalClientNum_t localClientNum, float feederID, int index)
{
  ?UI_FeederSelection@@YAXW4LocalClientNum_t@@MH@Z(localClientNum, feederID, index);
}

/*
==============
UI_GetServerCount
==============
*/

int __fastcall UI_GetServerCount(LocalClientNum_t localClientNum)
{
  return ?UI_GetServerCount@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_RunMenuScript
==============
*/

void __fastcall UI_RunMenuScript(LocalClientNum_t localClientNum, const char **args, const char *actualScript)
{
  ?UI_RunMenuScript@@YAXW4LocalClientNum_t@@PEAPEBDPEBD@Z(localClientNum, args, actualScript);
}

/*
==============
UI_SafeTranslateString
==============
*/

const char *__fastcall UI_SafeTranslateString(const char *reference)
{
  return ?UI_SafeTranslateString@@YAPEBDPEBD@Z(reference);
}

/*
==============
UI_GetCustomizedGameTypeDefaultDisplayName
==============
*/

const char *__fastcall UI_GetCustomizedGameTypeDefaultDisplayName(const char *pszGameType)
{
  return ?UI_GetCustomizedGameTypeDefaultDisplayName@@YAPEBDPEBD@Z(pszGameType);
}

/*
==============
UI_ShowAcceptInviteWarningForMissingInvitablePrivilege
==============
*/

void __fastcall UI_ShowAcceptInviteWarningForMissingInvitablePrivilege(LocalClientNum_t localClientNum)
{
  ?UI_ShowAcceptInviteWarningForMissingInvitablePrivilege@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_TextWidth
==============
*/

int __fastcall UI_TextWidth(const char *text, int maxChars, GfxFont *font, float scale)
{
  return ?UI_TextWidth@@YAHPEBDHPEAUGfxFont@@M@Z(text, maxChars, font, scale);
}

/*
==============
UI_ShouldShowControllerRemovedPopup
==============
*/

bool __fastcall UI_ShouldShowControllerRemovedPopup(LocalClientNum_t currLocalClientNum)
{
  return ?UI_ShouldShowControllerRemovedPopup@@YA_NW4LocalClientNum_t@@@Z(currLocalClientNum);
}

/*
==============
UI_BeginReadingDeviceUI
==============
*/

void __fastcall UI_BeginReadingDeviceUI(LocalClientNum_t localClientNum)
{
  ?UI_BeginReadingDeviceUI@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_GetMapVoteMapName
==============
*/

const char *__fastcall UI_GetMapVoteMapName(int entry)
{
  return ?UI_GetMapVoteMapName@@YAPEBDH@Z(entry);
}

/*
==============
UI_SafeLocalizeTextMessage
==============
*/

const char *__fastcall UI_SafeLocalizeTextMessage(const char *reference)
{
  return ?UI_SafeLocalizeTextMessage@@YAPEBDPEBD@Z(reference);
}

/*
==============
UI_GetCustomizedGameTypeDefaultDisplayDesc
==============
*/

const char *__fastcall UI_GetCustomizedGameTypeDefaultDisplayDesc(const char *pszGameType)
{
  return ?UI_GetCustomizedGameTypeDefaultDisplayDesc@@YAPEBDPEBD@Z(pszGameType);
}

/*
==============
UI_GetCurrentMapName
==============
*/

const char *__fastcall UI_GetCurrentMapName()
{
  return ?UI_GetCurrentMapName@@YAPEBDXZ();
}

/*
==============
UI_GetMapDisplayNameReference
==============
*/

const char *__fastcall UI_GetMapDisplayNameReference(const char *pszMap)
{
  return ?UI_GetMapDisplayNameReference@@YAPEBDPEBD@Z(pszMap);
}

/*
==============
UI_GetConnectInfoString
==============
*/

const char *__fastcall UI_GetConnectInfoString(uiClientState_t *state)
{
  return ?UI_GetConnectInfoString@@YAPEBDPEAUuiClientState_t@@@Z(state);
}

/*
==============
UI_DrawConnectScreen
==============
*/

void UI_DrawConnectScreen(void)
{
  ?UI_DrawConnectScreen@@YAXXZ();
}

/*
==============
UI_Feeder_GetUsedGPadCount
==============
*/

int __fastcall UI_Feeder_GetUsedGPadCount()
{
  return ?UI_Feeder_GetUsedGPadCount@@YAHXZ();
}

/*
==============
UI_FeederItemText_NonPlayingLocalClients
==============
*/

void __fastcall UI_FeederItemText_NonPlayingLocalClients(LocalClientNum_t localClientNum, int index, int count, char *outBuf, unsigned __int64 outBufSize)
{
  ?UI_FeederItemText_NonPlayingLocalClients@@YAXW4LocalClientNum_t@@HHPEAD_K@Z(localClientNum, index, count, outBuf, outBufSize);
}

/*
==============
UI_FeederItemText
==============
*/

const char *__fastcall UI_FeederItemText(LocalClientNum_t localClientNum, const float feederID, int index, int column, float *s0, float *t0, float *s1, float *t1, Material **material, float elemWidth)
{
  return ?UI_FeederItemText@@YAPEBDW4LocalClientNum_t@@MHHPEAM111PEAPEAUMaterial@@M@Z(localClientNum, feederID, index, column, s0, t0, s1, t1, material, elemWidth);
}

/*
==============
UI_ReplaceConversions
==============
*/

void __fastcall UI_ReplaceConversions(const char *sourceString, ConversionArguments *arguments, char *outputString, unsigned __int64 outputStringSize)
{
  ?UI_ReplaceConversions@@YAXPEBDPEAUConversionArguments@@PEAD_K@Z(sourceString, arguments, outputString, outputStringSize);
}

/*
==============
UI_CheckStringTranslation
==============
*/

const char *__fastcall UI_CheckStringTranslation(const char *reference, const char *translation)
{
  return ?UI_CheckStringTranslation@@YAPEBDPEBD0@Z(reference, translation);
}

/*
==============
UI_CinematicSubtitles_OnExitFrontEnd
==============
*/

void UI_CinematicSubtitles_OnExitFrontEnd(void)
{
  ?UI_CinematicSubtitles_OnExitFrontEnd@@YAXXZ();
}

/*
==============
UI_GetSelectedPartyMemberXUID
==============
*/

XUID *__fastcall UI_GetSelectedPartyMemberXUID(XUID *result, const LocalClientNum_t localClientNum)
{
  return ?UI_GetSelectedPartyMemberXUID@@YA?AUXUID@@W4LocalClientNum_t@@@Z(result, localClientNum);
}

/*
==============
LUI_OpenMenu
==============
*/

void __fastcall LUI_OpenMenu(LocalClientNum_t localClientNum, const char *menuName, int isPopup, int isModal, int isExclusive)
{
  ?LUI_OpenMenu@@YAXW4LocalClientNum_t@@PEBDHHH@Z(localClientNum, menuName, isPopup, isModal, isExclusive);
}

/*
==============
UI_DrawSubtitle
==============
*/

void __fastcall UI_DrawSubtitle(LocalClientNum_t localClientNum, rectDef_s *rect, float scale, int textStyle, int textAlignMode, const vec4_t *glowColor, int horzAlign, int vertAlign, GfxFont *font)
{
  ?UI_DrawSubtitle@@YAXW4LocalClientNum_t@@UrectDef_s@@MHHAEBTvec4_t@@HHPEAUGfxFont@@@Z(localClientNum, rect, scale, textStyle, textAlignMode, glowColor, horzAlign, vertAlign, font);
}

/*
==============
UI_GetMapSupportsAliensByIndex
==============
*/

int __fastcall UI_GetMapSupportsAliensByIndex(int idx)
{
  return ?UI_GetMapSupportsAliensByIndex@@YAHH@Z(idx);
}

/*
==============
UI_ReplaceConversionInts
==============
*/

const char *__fastcall UI_ReplaceConversionInts(const char *sourceString, int numInts, int *replaceInts)
{
  return ?UI_ReplaceConversionInts@@YAPEBDPEBDHPEAH@Z(sourceString, numInts, replaceInts);
}

/*
==============
UI_GetMapPackByIndex
==============
*/

int __fastcall UI_GetMapPackByIndex(int idx)
{
  return ?UI_GetMapPackByIndex@@YAHH@Z(idx);
}

/*
==============
UI_GetCurrentMapImage
==============
*/

const char *__fastcall UI_GetCurrentMapImage()
{
  return ?UI_GetCurrentMapImage@@YAPEBDXZ();
}

/*
==============
UI_ShowAcceptInviteWarningForLeavingParty
==============
*/

void __fastcall UI_ShowAcceptInviteWarningForLeavingParty(LocalClientNum_t localClientNum)
{
  ?UI_ShowAcceptInviteWarningForLeavingParty@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_Feeder_GetNonUsedGPadCount
==============
*/

int __fastcall UI_Feeder_GetNonUsedGPadCount()
{
  return ?UI_Feeder_GetNonUsedGPadCount@@YAHXZ();
}

/*
==============
UI_ReplaceConversionString
==============
*/

const char *__fastcall UI_ReplaceConversionString(const char *sourceString, const char *replaceString)
{
  return ?UI_ReplaceConversionString@@YAPEBDPEBD0@Z(sourceString, replaceString);
}

/*
==============
UI_GetCurrentMapReference
==============
*/

const char *__fastcall UI_GetCurrentMapReference()
{
  return ?UI_GetCurrentMapReference@@YAPEBDXZ();
}

/*
==============
UI_CinematicSubtitles_OnEnterFrontEnd
==============
*/

void UI_CinematicSubtitles_OnEnterFrontEnd(void)
{
  ?UI_CinematicSubtitles_OnEnterFrontEnd@@YAXXZ();
}

/*
==============
CL_SelectStringTableEntryInDvar_f
==============
*/

void CL_SelectStringTableEntryInDvar_f(void)
{
  ?CL_SelectStringTableEntryInDvar_f@@YAXXZ();
}

/*
==============
UI_TruncateEscapeCharacterTextWithEllipsis
==============
*/

const char *__fastcall UI_TruncateEscapeCharacterTextWithEllipsis(const char *sourceString, GfxFont *font, float fontScale, int maxScreenWidth)
{
  return ?UI_TruncateEscapeCharacterTextWithEllipsis@@YAPEBDPEBDPEAUGfxFont@@MH@Z(sourceString, font, fontScale, maxScreenWidth);
}

/*
==============
UI_RegisterDvars
==============
*/

void UI_RegisterDvars(void)
{
  ?UI_RegisterDvars@@YAXXZ();
}

/*
==============
UI_DrawCinematic
==============
*/

void UI_DrawCinematic(void)
{
  ?UI_DrawCinematic@@YAXXZ();
}

/*
==============
UI_Init
==============
*/

void UI_Init(void)
{
  ?UI_Init@@YAXXZ();
}

/*
==============
UI_GetGameTypeDisplayName
==============
*/

const char *__fastcall UI_GetGameTypeDisplayName(const char *pszGameType)
{
  return ?UI_GetGameTypeDisplayName@@YAPEBDPEBD@Z(pszGameType);
}

/*
==============
UI_EndReadingSaveDeviceUI
==============
*/

void __fastcall UI_EndReadingSaveDeviceUI(LocalClientNum_t localClientNum)
{
  ?UI_EndReadingSaveDeviceUI@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_DrawCinematicSubtitles
==============
*/

void __fastcall UI_DrawCinematicSubtitles(LocalClientNum_t localClientNum)
{
  ?UI_DrawCinematicSubtitles@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_SetMap
==============
*/

void __fastcall UI_SetMap(const char *mapname, const char *gametype)
{
  ?UI_SetMap@@YAXPEBD0@Z(mapname, gametype);
}

/*
==============
UI_DrawTempConnectScreen
==============
*/

void __fastcall UI_DrawTempConnectScreen(LocalClientNum_t localClientNum)
{
  ?UI_DrawTempConnectScreen@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_GetMapReference
==============
*/

const char *__fastcall UI_GetMapReference(const char *pszMap)
{
  return ?UI_GetMapReference@@YAPEBDPEBD@Z(pszMap);
}

/*
==============
UI_SetShowControllerRemovedPopup
==============
*/

void __fastcall UI_SetShowControllerRemovedPopup(LocalClientNum_t localClientNum, bool shouldShow)
{
  ?UI_SetShowControllerRemovedPopup@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, shouldShow);
}

/*
==============
UI_DrawText
==============
*/

void __fastcall UI_DrawText(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color, int style)
{
  ?UI_DrawText@@YAXPEBUScreenPlacement@@PEBDHPEAUGfxFont@@MMHHMAEBTvec4_t@@H@Z(scrPlace, text, maxChars, font, x, y, horzAlign, vertAlign, scale, color, style);
}

/*
==============
LUI_OpenMenuForController
==============
*/

void __fastcall LUI_OpenMenuForController(int controllerIndex, const char *menuName, int isPopup, int isModal, int isExclusive)
{
  ?LUI_OpenMenuForController@@YAXHPEBDHHH@Z(controllerIndex, menuName, isPopup, isModal, isExclusive);
}

/*
==============
UI_GetMapImageByIndex
==============
*/

const char *__fastcall UI_GetMapImageByIndex(int idx)
{
  return ?UI_GetMapImageByIndex@@YAPEBDH@Z(idx);
}

/*
==============
UI_GetMapVoteMapImage
==============
*/

const char *__fastcall UI_GetMapVoteMapImage(int entry)
{
  return ?UI_GetMapVoteMapImage@@YAPEBDH@Z(entry);
}

/*
==============
UI_DrawScreenShotLoadingScreen
==============
*/

void UI_DrawScreenShotLoadingScreen(void)
{
  ?UI_DrawScreenShotLoadingScreen@@YAXXZ();
}

/*
==============
CL_SelectStringTableEntryInDvar
==============
*/

void __fastcall CL_SelectStringTableEntryInDvar(const char *tableName, int column, const char *dvarName)
{
  ?CL_SelectStringTableEntryInDvar@@YAXPEBDH0@Z(tableName, column, dvarName);
}

/*
==============
UI_MissingMapError
==============
*/

void UI_MissingMapError(void)
{
  ?UI_MissingMapError@@YAXXZ();
}

/*
==============
UI_ReplaceConversionInt
==============
*/

const char *__fastcall UI_ReplaceConversionInt(const char *sourceString, int replaceInt)
{
  return ?UI_ReplaceConversionInt@@YAPEBDPEBDH@Z(sourceString, replaceInt);
}

/*
==============
UI_GetConnectionInfo
==============
*/

const char *__fastcall UI_GetConnectionInfo(LocalClientNum_t localClientNum)
{
  return ?UI_GetConnectionInfo@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_GetMapDisplayName
==============
*/

const char *__fastcall UI_GetMapDisplayName(const char *pszMap)
{
  return ?UI_GetMapDisplayName@@YAPEBDPEBD@Z(pszMap);
}

/*
==============
UI_CheckTranslateStringExists
==============
*/

bool __fastcall UI_CheckTranslateStringExists(const char *reference)
{
  return ?UI_CheckTranslateStringExists@@YA_NPEBD@Z(reference);
}

/*
==============
UI_DoServerRefreshOnClient
==============
*/

void __fastcall UI_DoServerRefreshOnClient(LocalClientNum_t localClientNum)
{
  ?UI_DoServerRefreshOnClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_AnyCinematicSubtitlesVisible
==============
*/

bool __fastcall UI_AnyCinematicSubtitlesVisible(LocalClientNum_t localClientNum)
{
  return ?UI_AnyCinematicSubtitlesVisible@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_TruncateTextWithEllipsis
==============
*/

const char *__fastcall UI_TruncateTextWithEllipsis(const char *sourceString, GfxFont *font, float fontScale, int maxScreenWidth)
{
  return ?UI_TruncateTextWithEllipsis@@YAPEBDPEBDPEAUGfxFont@@MH@Z(sourceString, font, fontScale, maxScreenWidth);
}

/*
==============
UI_GetSubtitlesVisible
==============
*/

bool __fastcall UI_GetSubtitlesVisible(LocalClientNum_t localClientNum)
{
  return ?UI_GetSubtitlesVisible@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_TextHeight
==============
*/

int __fastcall UI_TextHeight(GfxFont *font, float scale)
{
  return ?UI_TextHeight@@YAHPEAUGfxFont@@M@Z(font, scale);
}

/*
==============
CL_SelectStringTableEntryInDvar
==============
*/
void CL_SelectStringTableEntryInDvar(const char *tableName, int column, const char *dvarName)
{
  unsigned int v5; 
  int v6; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  StringTable_GetAsset(tableName, (const StringTable **)&tablePtr);
  v5 = Sys_Milliseconds();
  srand(v5);
  v6 = rand();
  ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, (int)(float)((float)((float)tablePtr->rowCount * (float)v6) * 0.000030518509), column);
  Dvar_SetStringByName(dvarName, ColumnValueForRow);
}

/*
==============
CL_SelectStringTableEntryInDvar_f
==============
*/
void CL_SelectStringTableEntryInDvar_f(void)
{
  const char *v0; 
  int v1; 
  const char *v2; 
  unsigned int v3; 
  int v4; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  if ( Cmd_Argc() >= 4 )
  {
    v0 = Cmd_Argv(3);
    v1 = Cmd_ArgInt(2);
    v2 = Cmd_Argv(1);
    StringTable_GetAsset(v2, (const StringTable **)&tablePtr);
    v3 = Sys_Milliseconds();
    srand(v3);
    v4 = rand();
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, (int)(float)((float)((float)tablePtr->rowCount * (float)v4) * 0.000030518509), v1);
    Dvar_SetStringByName(v0, ColumnValueForRow);
  }
  else
  {
    Com_Printf(16, "usage: selectStringTableEntryInDvar <tableFileName> <columnNum> <dvarName>");
  }
}

/*
==============
LUI_CloseMenu
==============
*/
void LUI_CloseMenu(LocalClientNum_t localClientNum, const char *menuName, int immediate)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( LUI_CoD_IsLUIKeyCatcherActive(localClientNum) )
    LUI_LeaveMenuByName(ControllerFromClient, menuName, immediate, LUI_luaVM);
}

/*
==============
LUI_OpenMenu
==============
*/
void LUI_OpenMenu(LocalClientNum_t localClientNum, const char *menuName, int isPopup, int isModal, int isExclusive)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( isPopup )
  {
    if ( isModal )
      LUI_OpenModalPopup(ControllerFromClient, menuName, LUI_luaVM);
    else
      LUI_RestorePopup(ControllerFromClient, menuName, isExclusive, LUI_luaVM);
  }
  else
  {
    LUI_RestoreMenu(ControllerFromClient, menuName, 0, isExclusive, LUI_luaVM);
  }
}

/*
==============
LUI_OpenMenuForController
==============
*/
void LUI_OpenMenuForController(int controllerIndex, const char *menuName, int isPopup, int isModal, int isExclusive)
{
  if ( isPopup )
  {
    if ( isModal )
      LUI_OpenModalPopup(controllerIndex, menuName, LUI_luaVM);
    else
      LUI_RestorePopup(controllerIndex, menuName, isExclusive, LUI_luaVM);
  }
  else
  {
    LUI_RestoreMenu(controllerIndex, menuName, 0, isExclusive, LUI_luaVM);
  }
}

/*
==============
UI_AnyCinematicSubtitlesVisible
==============
*/
bool UI_AnyCinematicSubtitlesVisible(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int outVerticalOffset[4]; 
  char outText[1024]; 

  if ( !R_Cinematic_IsStarted() && !R_Cinematic_IsPending() || R_Cinematic_IsHeld() || R_Cinematic_GetPaused() )
    return 0;
  outVerticalOffset[0] = 0;
  UI_GetSubtitleData(localClientNum, s_cinematicSubtitles, outText, 0x400ui64, outVerticalOffset);
  v2 = -1i64;
  do
    ++v2;
  while ( outText[v2] );
  return v2 != 0;
}

/*
==============
UI_AnyMenuActive
==============
*/
_BOOL8 UI_AnyMenuActive(LocalClientNum_t localClientNum)
{
  return CL_Keys_IsCatcherActive(localClientNum, 64) && LUI_COD_AnyActiveMenus(localClientNum);
}

/*
==============
UI_BeginReadingDeviceUI
==============
*/

void __fastcall UI_BeginReadingDeviceUI(LocalClientNum_t localClientNum)
{
  R_BeginRemoteScreenUpdate();
}

/*
==============
UI_BuildServerDisplayList
==============
*/
void UI_BuildServerDisplayList(uiInfo_t *uiInfo, int force)
{
  uiInfo_t *v2; 
  int v3; 
  const char *StringSafe; 
  unsigned __int64 v5; 
  int v6; 
  const char *String; 
  const char *v8; 
  int ServerCount; 
  int v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  signed __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int numDisplayServers; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  char buf[1024]; 

  v2 = uiInfo;
  if ( force || uiInfo->uiDC.realTime > sharedUiInfo.serverStatus.nextDisplayRefresh )
  {
    v3 = 0;
    if ( force != 2 )
      v3 = force;
    StringSafe = Dvar_GetStringSafe("QOOMNOTO");
    Core_strcpy_truncate(sharedUiInfo.serverStatus.cl_motd, 0x400ui64, StringSafe);
    v5 = -1i64;
    do
      ++v5;
    while ( sharedUiInfo.serverStatus.cl_motd[v5] );
    v6 = truncate_cast<int,unsigned __int64>(v5);
    if ( !v6 )
    {
      String = SEH_StringEd_GetString("EXE/COD_MULTIPLAYER");
      v8 = UI_CheckStringTranslation("EXE/COD_MULTIPLAYER", String);
      v6 = Com_sprintf<1024>((char (*)[1024])sharedUiInfo.serverStatus.cl_motd, "%s - %s", v8, "8.24");
    }
    if ( v6 != sharedUiInfo.serverStatus.motdLen )
    {
      sharedUiInfo.serverStatus.motdLen = v6;
      sharedUiInfo.serverStatus.motdWidth = -1;
    }
    if ( v3 )
    {
      numclean = 0;
      sharedUiInfo.serverStatus.numDisplayServers = 0;
      sharedUiInfo.serverStatus.numPlayersOnServers = 0;
      sharedUiInfo.serverStatus.serverCount = LAN_GetServerCount();
      LAN_MarkServerDirty(-1, 1);
    }
    ServerCount = LAN_GetServerCount();
    if ( LAN_WaitServerResponse() || !ServerCount )
    {
      sharedUiInfo.serverStatus.numDisplayServers = 0;
      sharedUiInfo.serverStatus.numPlayersOnServers = 0;
      sharedUiInfo.serverStatus.serverCount = LAN_GetServerCount();
      sharedUiInfo.serverStatus.nextDisplayRefresh = v2->uiDC.realTime + 500;
    }
    else
    {
      qsort(sharedUiInfo.serverStatus.displayServers, sharedUiInfo.serverStatus.numDisplayServers, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)UI_ServersQsortCompare);
      v10 = 0;
      if ( ServerCount > 0 )
      {
        do
        {
          if ( LAN_ServerIsDirty(v10) && LAN_GetServerPing(v10) > 0 )
          {
            LAN_GetServerInfo(v10, buf, 0x400ui64);
            v11 = Info_ValueForKey(buf, "clients");
            sharedUiInfo.serverStatus.numPlayersOnServers += atoi(v11);
            v12 = 15i64;
            v13 = "000.000.000.000";
            v14 = Info_ValueForKey(buf, "addr");
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v15 = v14 - "000.000.000.000";
            while ( 1 )
            {
              v16 = (unsigned __int8)v13[v15];
              v17 = v12;
              v18 = *(unsigned __int8 *)v13++;
              --v12;
              if ( !v17 )
              {
LABEL_30:
                LAN_MarkServerDirty(v10, 0);
                goto LABEL_31;
              }
              if ( v16 != v18 )
              {
                v19 = v16 + 32;
                if ( (unsigned int)(v16 - 65) > 0x19 )
                  v19 = v16;
                v16 = v19;
                v20 = v18 + 32;
                if ( (unsigned int)(v18 - 65) > 0x19 )
                  v20 = v18;
                if ( v16 != v20 )
                  break;
              }
              if ( !v16 )
                goto LABEL_30;
            }
            numDisplayServers = sharedUiInfo.serverStatus.numDisplayServers;
            v22 = 0;
            v23 = 0;
            if ( sharedUiInfo.serverStatus.numDisplayServers <= 0 )
            {
LABEL_42:
              v25 = v22 + 1;
              if ( v23 <= 0 )
                v25 = v22;
            }
            else
            {
              while ( 1 )
              {
                v24 = numDisplayServers >> 1;
                v25 = v22 + (numDisplayServers >> 1);
                v23 = LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, v10, sharedUiInfo.serverStatus.displayServers[v25]);
                if ( v23 != -LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[v25], v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1134, ASSERT_TYPE_ASSERT, "(res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[offset + mid], num ))", (const char *)&queryFormat, "res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[offset + mid], num )") )
                  __debugbreak();
                if ( !v23 )
                  break;
                numDisplayServers -= v24;
                if ( v23 > 0 )
                  v22 = v25;
                if ( v24 <= 0 )
                  goto LABEL_42;
              }
            }
            UI_InsertServerIntoDisplayList(v10, v25);
            LAN_MarkServerDirty(v10, 0);
            ++numclean;
          }
LABEL_31:
          ++v10;
        }
        while ( v10 < ServerCount );
        v2 = uiInfo;
      }
      sharedUiInfo.serverStatus.refreshtime = v2->uiDC.realTime;
    }
  }
}

/*
==============
UI_CheckForMissingMapError
==============
*/
void UI_CheckForMissingMapError(const char *mapname)
{
  int MapIndex; 
  int MapSource; 
  PartyData *PartyData; 

  MapIndex = Live_GetMapIndex(mapname);
  if ( MapIndex == -1 )
  {
    Com_PrintWarning(16, "CheckForMissingMapError - %s is not in presence data, assuming CONTENT_ORIGINALMAPS.\n", mapname);
  }
  else
  {
    MapSource = Live_GetMapSource(MapIndex);
    if ( !Content_DoWeHaveContentPack(MapSource) )
    {
      PartyData = Lobby_GetPartyData();
      Party_StopParty(PartyData);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444F81F8);
    }
  }
}

/*
==============
UI_CheckStringTranslation
==============
*/
const char *UI_CheckStringTranslation(const char *reference, const char *translation)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  signed __int64 v5; 
  char v6; 

  if ( translation )
    return translation;
  v3 = DCONST_DVARBOOL_loc_warnings;
  if ( !DCONST_DVARBOOL_loc_warnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warnings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v4 = DCONST_DVARBOOL_loc_warningsAsErrors;
    if ( !DCONST_DVARBOOL_loc_warningsAsErrors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warningsAsErrors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Com_Error_impl(ERR_LOCALIZATION, (const ObfuscateErrorText)&stru_1444F7F80, 518i64, reference);
    else
      Com_PrintWarning(13, "WARNING: Could not translate string \"%s\"\n", reference);
    strcpy(errorString, "^1UNLOCALIZED(^7");
    I_strcat(errorString, 0x400ui64, reference);
    I_strcat(errorString, 0x400ui64, "^1)^7");
  }
  else
  {
    v5 = errorString - reference;
    do
    {
      v6 = *reference;
      reference[v5] = *reference;
      ++reference;
    }
    while ( v6 );
  }
  return errorString;
}

/*
==============
UI_CheckTranslateStringExists
==============
*/
bool UI_CheckTranslateStringExists(const char *reference)
{
  return *reference == 31 || SEH_StringEd_GetString(reference) != NULL;
}

/*
==============
UI_CinematicSubtitles_OnEnterFrontEnd
==============
*/
void UI_CinematicSubtitles_OnEnterFrontEnd(void)
{
  StringTable_GetAsset("video/subtitles.csv", &s_cinematicSubtitles);
}

/*
==============
UI_CinematicSubtitles_OnExitFrontEnd
==============
*/
void UI_CinematicSubtitles_OnExitFrontEnd(void)
{
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF || (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF_HALF )
    StringTable_GetAsset("video/subtitles.csv", &s_cinematicSubtitles);
  else
    s_cinematicSubtitles = NULL;
}

/*
==============
UI_DoServerRefreshOnClient
==============
*/
void UI_DoServerRefreshOnClient(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  uiInfo_t *v2; 
  int ServerCount; 
  int v4; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v2 = &uiInfoArray[v1];
  if ( sharedUiInfo.serverStatus.refreshActive && v2->uiDC.realTime >= sharedUiInfo.serverStatus.refreshtime )
  {
    ServerCount = LAN_GetServerCount();
    if ( sharedUiInfo.serverStatus.serverCount != ServerCount )
    {
      sharedUiInfo.serverStatus.serverCount = ServerCount;
      if ( sharedUiInfo.serverStatus.numDisplayServers )
      {
        sharedUiInfo.serverStatus.currentServer = 0;
        UI_BuildServerDisplayList(v2, 1);
      }
    }
    UI_BuildServerDisplayList(v2, 2);
    if ( sharedUiInfo.serverStatus.refreshActive )
    {
      sharedUiInfo.serverStatus.refreshActive = 0;
      Com_Printf(13, "%d servers listed in browser with %d players.\n", (unsigned int)sharedUiInfo.serverStatus.numDisplayServers, (unsigned int)sharedUiInfo.serverStatus.numPlayersOnServers);
      v4 = LAN_GetServerCount() - sharedUiInfo.serverStatus.numDisplayServers;
      if ( v4 > 0 )
        Com_Printf(13, "%d servers not listed (filtered out by game browser settings)\n", (unsigned int)v4);
    }
    UI_BuildServerDisplayList(v2, 0);
  }
}

/*
==============
UI_DrawBuildNumber
==============
*/
void UI_DrawBuildNumber(const LocalClientNum_t localClientNum)
{
  int integer; 
  float value; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const char *v6; 
  const ScreenPlacement *v7; 
  double v8; 
  float w[4]; 
  float x; 
  float y; 
  float h; 

  integer = ui_buildSize->current.integer;
  value = ui_buildLocation->current.value;
  y = ui_buildLocation->current.vector.v[1];
  x = value;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 0, *(float *)&integer);
  v6 = UI_FormattedBuildNumber();
  v7 = ScrPlace_GetActivePlacement(localClientNum);
  v8 = R_NormalizedTextScale(FontHandle, *(float *)&integer);
  w[0] = *(float *)&v8;
  h = *(float *)&v8;
  ScrPlace_ApplyRect(v7, &x, &y, w, &h, 3, 0);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm1, 1; x }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  x = *(float *)&_XMM3;
  y = *(float *)&_XMM4;
  CL_DrawTextPhysical(v6, 64, FontHandle, *(float *)&_XMM3, *(float *)&_XMM4, w[0], h, &colorLtGrey, 0);
}

/*
==============
UI_DrawCinematic
==============
*/

void UI_DrawCinematic(void)
{
  R_Cinematic_DrawFullscreen_Letterboxed();
}

/*
==============
UI_DrawCinematicSubtitles
==============
*/
void UI_DrawCinematicSubtitles(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  unsigned int CurrentLanguage; 
  GfxFont *subtitleFont; 
  const char *String; 
  const ScreenPlacement *ActivePlacement; 
  char v11; 
  char *p_outText; 
  char v13; 
  char *p_pszReference; 
  int outVerticalOffset; 
  float v16; 
  rectDef_s rect; 
  int v18; 
  vec4_t subtitleGlowColor; 
  char outText; 
  char pszReference; 
  char reference; 
  __int128 v23; 

  if ( !R_Cinematic_GetPaused() )
  {
    v23 = v1;
    LOWORD(v18) = 258;
    CurrentLanguage = SEH_GetCurrentLanguage();
    subtitleFont = sharedUiInfo.assets.subtitleFont;
    _XMM0 = CurrentLanguage;
    String = NULL;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_28);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    *(_DWORD *)&rect.horzAlign = v18;
    subtitleGlowColor = (vec4_t)_xmm;
    v16 = *(float *)&_XMM0;
    *(_OWORD *)&rect.x = _xmm;
    outVerticalOffset = 0;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    UI_GetSubtitleData(localClientNum, s_cinematicSubtitles, &outText, 0x400ui64, &outVerticalOffset);
    v11 = outText;
    p_outText = &outText;
    if ( outText == 64 )
    {
      v13 = pszReference;
      if ( pszReference != 31 )
        String = SEH_StringEd_GetString(&pszReference);
      p_pszReference = &pszReference;
      if ( v13 == 31 )
        p_pszReference = &reference;
      p_outText = (char *)UI_CheckStringTranslation(p_pszReference, String);
      v11 = *p_outText;
    }
    if ( v11 )
    {
      rect.y = (float)outVerticalOffset + rect.y;
      UI_DrawWrappedTextSubtitled(ActivePlacement, p_outText, &rect, subtitleFont, v16, &colorWhite, 3, 5, &subtitleGlowColor, 1);
    }
  }
}

/*
==============
UI_DrawConnectScreen
==============
*/
void UI_DrawConnectScreen(void)
{
  R_Cinematic_DrawFullscreen_Letterboxed();
  UI_DrawLoadingScreenInternal();
}

/*
==============
UI_DrawInterpolatedCinematicElements
==============
*/
void UI_DrawInterpolatedCinematicElements(LocalClientNum_t localClientNum)
{
  bool started; 
  const dvar_t *v3; 
  char v4; 
  const dvar_t *v5; 
  __int64 v9; 
  __int64 v10; 

  started = R_Cinematic_StartNextPlayback();
  if ( R_Cinematic_IsFinished() )
  {
    R_Cinematic_StopPlayback(0);
  }
  else if ( R_Cinematic_IsStarted() || R_Cinematic_IsPending() )
  {
    goto LABEL_6;
  }
  if ( !started )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
LABEL_6:
  v3 = DVARBOOL_bg_cinematicFullscreen;
  if ( !DVARBOOL_bg_cinematicFullscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicFullscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    goto LABEL_11;
  v4 = 1;
LABEL_12:
  v5 = DVARFLT_bg_cinematicAspectRatio;
  if ( !DVARFLT_bg_cinematicAspectRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicAspectRatio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  _XMM6 = v5->current.unsignedInt;
  if ( Sys_IsMainThread() )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( localClientNum < cg_t::ms_allocatedCount )
    {
      UI_InterpolateCinematicLetterboxingParams(localClientNum);
      if ( *(float *)&_XMM6 >= 0.0 )
      {
        __asm
        {
          vcmpeqss xmm1, xmm6, xmm7
          vblendvps xmm1, xmm6, xmm0, xmm1; aspectRatio
        }
        UI_DrawInterpolatedCinematicLetterbox(localClientNum, *(float *)&_XMM1);
      }
    }
  }
  if ( v4 )
  {
    if ( *(float *)&_XMM6 == 0.0 )
      R_Cinematic_DrawFullscreen_Letterboxed();
    else
      R_Cinematic_DrawStretchPic_Letterboxed(*(float *)&_XMM6 < 0.0, COERCE_FLOAT(_XMM6 & _xmm));
  }
}

/*
==============
UI_DrawInterpolatedCinematicLetterbox
==============
*/
void UI_DrawInterpolatedCinematicLetterbox(LocalClientNum_t localClientNum, float aspectRatio)
{
  int *LocalClientGlobals; 
  int v4; 
  float v5; 
  int v6; 
  float v7; 
  float v8; 
  int v9; 
  float v10; 
  __int64 v11; 
  int v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1816, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    LODWORD(v11) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = (int *)CG_GetLocalClientGlobals(localClientNum);
  v4 = LocalClientGlobals[105113];
  if ( v4 != 3 )
  {
    if ( v4 == 1 )
    {
      R_Cinematic_DrawLetterbox_Only(aspectRatio, 1.0, 1.0);
    }
    else
    {
      if ( (v4 & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1832, ASSERT_TYPE_ASSERT, "(letterboxInfo.currentState == CINEMATIC_LETTER_BOX_IN || letterboxInfo.currentState == CINEMATIC_LETTER_BOX_OUT)", (const char *)&queryFormat, "letterboxInfo.currentState == CINEMATIC_LETTER_BOX_IN || letterboxInfo.currentState == CINEMATIC_LETTER_BOX_OUT") )
        __debugbreak();
      v5 = FLOAT_1_0;
      v6 = LocalClientGlobals[105112];
      v7 = FLOAT_1_0;
      if ( v6 > 0 )
      {
        v8 = sinf_0((float)((float)((float)LocalClientGlobals[105111] / (float)v6) - 0.5) * 3.1415927);
        if ( LocalClientGlobals[105113] )
          v5 = (float)(v8 * 0.5) + 0.5;
        else
          v5 = 0.5 - (float)(v8 * 0.5);
      }
      v9 = LocalClientGlobals[105110];
      if ( v9 > 0 )
      {
        v10 = sinf_0((float)((float)((float)LocalClientGlobals[105109] / (float)v9) - 0.5) * 3.1415927);
        if ( LocalClientGlobals[105113] )
          v7 = (float)(v10 * 0.5) + 0.5;
        else
          v7 = 0.5 - (float)(v10 * 0.5);
      }
      R_Cinematic_DrawLetterbox_Only(aspectRatio, v5, v7);
    }
  }
}

/*
==============
UI_DrawLoadingScreenInternal
==============
*/
void UI_DrawLoadingScreenInternal()
{
  LocalClientNum_t v0; 
  const ScreenPlacement *ActivePlacement; 
  LocalClientNum_t v2; 
  __int64 v3; 
  __int64 v4; 
  char v5; 
  __int64 v6; 
  char v7; 
  LocalClientNum_t OnlyLocalClientNum; 
  const dvar_t *v9; 
  bool started; 
  const dvar_t *v11; 
  char v12; 
  const dvar_t *v13; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  unsigned int outTimeInMsec; 
  rectDef_s rect; 
  vec4_t color; 
  char outName[256]; 

  if ( DB_IsDoingSPHotLoad() )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    if ( !CL_SubtitlesEnabled(OnlyLocalClientNum) )
      return;
    v9 = DVARBOOL_cg_cinematic_subtitles;
    if ( !DVARBOOL_cg_cinematic_subtitles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematic_subtitles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled )
      return;
    started = R_Cinematic_StartNextPlayback();
    if ( R_Cinematic_IsFinished() )
    {
      R_Cinematic_StopPlayback(0);
    }
    else if ( R_Cinematic_IsStarted() || R_Cinematic_IsPending() )
    {
LABEL_21:
      v11 = DVARBOOL_bg_cinematicFullscreen;
      if ( !DVARBOOL_bg_cinematicFullscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicFullscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
      {
        v12 = 1;
        goto LABEL_27;
      }
LABEL_26:
      v12 = 0;
LABEL_27:
      v13 = DVARFLT_bg_cinematicAspectRatio;
      if ( !DVARFLT_bg_cinematicAspectRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicAspectRatio") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      _XMM6 = v13->current.unsignedInt;
      if ( Sys_IsMainThread() )
      {
        if ( (unsigned int)OnlyLocalClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(vertAlign) = 2;
          LODWORD(horzAlign) = OnlyLocalClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", horzAlign, vertAlign) )
            __debugbreak();
        }
        if ( OnlyLocalClientNum < cg_t::ms_allocatedCount )
        {
          UI_InterpolateCinematicLetterboxingParams(OnlyLocalClientNum);
          if ( *(float *)&_XMM6 >= 0.0 )
          {
            __asm
            {
              vcmpeqss xmm1, xmm6, xmm7
              vblendvps xmm1, xmm6, xmm0, xmm1; aspectRatio
            }
            UI_DrawInterpolatedCinematicLetterbox(OnlyLocalClientNum, *(float *)&_XMM1);
          }
        }
      }
      if ( v12 )
      {
        if ( *(float *)&_XMM6 == 0.0 )
          R_Cinematic_DrawFullscreen_Letterboxed();
        else
          R_Cinematic_DrawStretchPic_Letterboxed(*(float *)&_XMM6 < 0.0, COERCE_FLOAT(_XMM6 & _xmm));
      }
      UI_DrawCinematicSubtitles(OnlyLocalClientNum);
      return;
    }
    if ( !started )
      goto LABEL_26;
    goto LABEL_21;
  }
  v0 = CL_GetOnlyLocalClientNum();
  ActivePlacement = ScrPlace_GetActivePlacement(v0);
  UI_GetFontHandle(ActivePlacement, 0, 1.0);
  UI_GetFontHandle(ActivePlacement, 9, 1.0);
  v2 = CL_GetOnlyLocalClientNum();
  UI_DrawCinematicSubtitles(v2);
  R_Cinematic_GetFilenameAndTimeInMsec(outName, 0x100ui64, &outTimeInMsec);
  v3 = 0i64;
  v4 = 0x7FFFFFFFi64;
  do
  {
    v5 = outName[v3];
    v6 = v4;
    v7 = aSpProxywarCine[v3++];
    --v4;
    if ( !v6 )
      break;
    if ( v5 != v7 )
    {
      *(_OWORD *)&rect.x = _xmm;
      color = (vec4_t)_xmm;
      *(_WORD *)&rect.horzAlign = 513;
      if ( !cls.whiteMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1979, ASSERT_TYPE_ASSERT, "(cls.whiteMaterial)", (const char *)&queryFormat, "cls.whiteMaterial") )
        __debugbreak();
      ProfLoad_DrawOverlay(ActivePlacement, &rect);
      UI_FillRect(ActivePlacement, 192.0, 430.0, 256.0, 2.0, 0, 0, &color);
      UI_DrawLoadBar(ActivePlacement, 192.0, 430.0, 256.0, 2.0, 0, 0, &colorWhite, cls.whiteMaterial);
      return;
    }
  }
  while ( v5 );
}

/*
==============
UI_DrawScreenShotLoadingScreen
==============
*/

void UI_DrawScreenShotLoadingScreen(void)
{
  UI_DrawLoadingScreenInternal();
}

/*
==============
UI_DrawSubtitle
==============
*/
void UI_DrawSubtitle(LocalClientNum_t localClientNum, rectDef_s *rect, float scale, int textStyle, int textAlignMode, const vec4_t *glowColor, int horzAlign, int vertAlign, GfxFont *font)
{
  const char *String; 
  const ScreenPlacement *ActivePlacement; 
  char v14; 
  char *p_outText; 
  char v16; 
  char *p_pszReference; 
  int outVerticalOffset[4]; 
  char outText; 
  char pszReference; 
  char reference; 

  String = NULL;
  outVerticalOffset[0] = 0;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  UI_GetSubtitleData(localClientNum, s_cinematicSubtitles, &outText, 0x400ui64, outVerticalOffset);
  v14 = outText;
  p_outText = &outText;
  if ( outText == 64 )
  {
    v16 = pszReference;
    if ( pszReference != 31 )
      String = SEH_StringEd_GetString(&pszReference);
    p_pszReference = &pszReference;
    if ( v16 == 31 )
      p_pszReference = &reference;
    p_outText = (char *)UI_CheckStringTranslation(p_pszReference, String);
    v14 = *p_outText;
  }
  if ( v14 )
  {
    rect->y = (float)outVerticalOffset[0] + rect->y;
    UI_DrawWrappedTextSubtitled(ActivePlacement, p_outText, rect, font, scale, &colorWhite, textStyle, textAlignMode, glowColor, 1);
  }
}

/*
==============
UI_DrawTempConnectScreen
==============
*/
void UI_DrawTempConnectScreen(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float displayWidth; 
  float displayHeight; 
  const char *MapName; 
  const mapInfo *MapInfoForLoadName; 
  Material *material; 
  ScreenPlacement *ActivePlacement; 
  GfxFont *boldFont; 
  ScreenPlacement *v9; 
  double v10; 
  int v11; 
  double v14; 
  char *messageString; 
  __int128 v20; 
  int v21; 
  const char *String; 
  const char *v23; 
  const char *v24; 
  unsigned __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  double v33; 
  int v34; 
  double v37; 
  __int128 v42; 
  const dvar_t *v43; 
  const char *ConnectInfoString; 
  char v45; 
  const char *v46; 
  int v47; 
  const char *v48; 
  float x; 
  float y; 
  float h; 
  float w; 
  ScreenPlacement *scrPlace; 
  uiClientState_t state; 
  char text[64]; 
  char dest[64]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].migrationState == CMSTATE_INACTIVE )
  {
    if ( Com_Frontend_LoadFastfile_IsInUse() )
    {
      displayWidth = (float)cls.vidConfig.displayWidth;
      displayHeight = (float)cls.vidConfig.displayHeight;
      MapName = Party_GetMapName();
      MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(MapName);
      if ( MapInfoForLoadName )
      {
        Com_sprintf(dest, 0x40ui64, "loadscreen_%s", MapInfoForLoadName->mapLoadName);
        material = Material_RegisterHandle(dest, IMAGE_TRACK_UI);
        CL_DrawStretchPicPhysical(0.0, 0.0, displayWidth, displayHeight, 0.0, 0.0, 1.0, 1.0, &colorWhite, material);
      }
    }
    CG_DrawInformation((LocalClientNum_t)v1);
    ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v1);
    boldFont = sharedUiInfo.assets.boldFont;
    v9 = ActivePlacement;
    scrPlace = ActivePlacement;
    if ( !sharedUiInfo.assets.boldFont && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2211, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    if ( Com_GameStart_GetLoadInfoString(state.messageString, 0x400u) )
    {
      v10 = R_NormalizedTextScale(boldFont, 0.2);
      v11 = R_TextHeight(boldFont);
      y = FLOAT_55_0;
      R_TextWidth(state.messageString, 0, boldFont, (int)(float)((float)v11 * *(float *)&v10));
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      x = 320.0 - (float)((int)*(float *)&_XMM2 / 2);
      v14 = R_NormalizedTextScale(boldFont, 0.2);
      w = *(float *)&v14;
      h = *(float *)&v14;
      ScrPlace_ApplyRect(v9, &x, &y, &w, &h, 0, 0);
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm1, 1; x }
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      x = *(float *)&_XMM3;
      y = *(float *)&_XMM2;
      CL_DrawTextPhysicalWithEffects(state.messageString, 0x7FFFFFFF, boldFont, *(float *)&_XMM3, *(float *)&_XMM2, w, h, &colorYellow, 6, &colorWhite, NULL, NULL, 0, 0);
    }
    if ( !Com_GameStart_UseNewLoadingSystem() || Com_GameStart_ShouldDrawConnectText() )
    {
      CL_GetClientState((LocalClientNum_t)v1, &state);
      if ( (unsigned int)(state.connState - 1) <= 1 )
      {
        messageString = state.messageString;
        v20 = LODWORD(FLOAT_299_0);
        v21 = 0;
        if ( state.messageString[0] == 31 )
        {
          messageString = &state.messageString[1];
          String = NULL;
        }
        else
        {
          String = SEH_StringEd_GetString(state.messageString);
        }
        v23 = UI_CheckStringTranslation(messageString, String);
        v24 = v23;
        v25 = -1i64;
        do
          ++v25;
        while ( v23[v25] );
        v26 = truncate_cast<int,unsigned __int64>(v25);
        v27 = v26;
        v28 = 0;
        if ( v26 > 0 )
        {
          v29 = 0i64;
          v30 = 0i64;
          do
          {
            v31 = (unsigned __int8)v24[v30];
            text[v29] = v31;
            if ( v29 > 40 && v30 > 0 )
              v21 = 1;
            if ( v29 >= 58 || v28 == (_DWORD)v27 - 1 || v21 && v24[v30] == 32 )
            {
              v32 = v29 + 1;
              if ( v32 >= 0x3C )
              {
                j___report_rangecheckfailure(v31);
                JUMPOUT(0x1427838D7i64);
              }
              text[v32] = 0;
              v33 = R_NormalizedTextScale(boldFont, 0.2);
              v34 = R_TextHeight(boldFont);
              x = *(float *)&v20;
              R_TextWidth(text, 0, boldFont, (int)(float)((float)v34 * *(float *)&v33));
              _XMM2 = 0i64;
              __asm { vroundss xmm2, xmm2, xmm1, 1 }
              y = 320.0 - (float)((int)*(float *)&_XMM2 / 2);
              v37 = R_NormalizedTextScale(boldFont, 0.2);
              v21 = 0;
              h = *(float *)&v37;
              w = *(float *)&v37;
              ScrPlace_ApplyRect(scrPlace, &y, &x, &h, &w, 0, 0);
              _XMM3 = 0i64;
              __asm { vroundss xmm3, xmm3, xmm1, 1; x }
              _XMM2 = 0i64;
              __asm { vroundss xmm2, xmm2, xmm1, 1 }
              y = *(float *)&_XMM3;
              x = *(float *)&_XMM2;
              CL_DrawTextPhysicalWithEffects(text, 0x7FFFFFFF, boldFont, *(float *)&_XMM3, *(float *)&_XMM2, h, w, &colorYellow, 6, &colorWhite, NULL, NULL, 0, 0);
              v29 = -1i64;
              v42 = v20;
              *(float *)&v42 = *(float *)&v20 + 22.0;
              v20 = v42;
            }
            ++v28;
            ++v30;
            ++v29;
          }
          while ( v30 < v27 );
        }
        v9 = scrPlace;
      }
      v43 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      if ( v43->current.enabled && (unsigned int)(state.connState - 1) <= 5 )
      {
        ConnectInfoString = UI_GetConnectInfoString(&state);
        if ( ConnectInfoString )
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink_host, "systemlink_host") || state.connState == CA_CONNECTING )
          {
            v45 = Sys_Milliseconds();
            switch ( (v45 / -12) & 3 )
            {
              case 1:
                v46 = ".  ";
                break;
              case 2:
                v46 = ".. ";
                break;
              case 3:
                v46 = "...";
                break;
              default:
                v46 = "   ";
                break;
            }
            v47 = UI_TextWidth(ConnectInfoString, 0, boldFont, 0.2);
            v48 = j_va("%s%s", ConnectInfoString, v46);
            UI_DrawTextWithGlow(v9, v48, 0x7FFFFFFF, boldFont, 320.0 - (float)(v47 / 2), 145.0, 0, 0, 0.2, &colorWhite, 6, &colorWhite, NULL, NULL, 0, 0);
          }
        }
      }
    }
  }
}

/*
==============
UI_DrawText
==============
*/
void UI_DrawText(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color, int style)
{
  double v15; 
  float h; 
  float w[5]; 

  v15 = R_NormalizedTextScale(font, scale);
  w[0] = *(float *)&v15;
  h = *(float *)&v15;
  ScrPlace_ApplyRect(scrPlace, &x, &y, w, &h, horzAlign, vertAlign);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm1, 1; x }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  x = *(float *)&_XMM3;
  y = *(float *)&_XMM4;
  CL_DrawTextPhysical(text, maxChars, font, *(float *)&_XMM3, *(float *)&_XMM4, w[0], h, color, style);
}

/*
==============
UI_DrawTextWithGlow
==============
*/
void UI_DrawTextWithGlow(const ScreenPlacement *scrPlace, const char *text, int maxChars, GfxFont *font, float x, float y, int horzAlign, int vertAlign, float scale, const vec4_t *color, int style, const vec4_t *glowColor, Material *fxMaterial, Material *fxMaterialGlow, int fxBirthTime, int fxLetterTime)
{
  double v20; 
  float h; 
  float w[3]; 

  v20 = R_NormalizedTextScale(font, scale);
  w[0] = *(float *)&v20;
  h = *(float *)&v20;
  ScrPlace_ApplyRect(scrPlace, &x, &y, w, &h, horzAlign, vertAlign);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm1, 1; x }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  x = *(float *)&_XMM3;
  y = *(float *)&_XMM4;
  CL_DrawTextPhysicalWithEffects(text, maxChars, font, *(float *)&_XMM3, *(float *)&_XMM4, w[0], h, color, style, glowColor, fxMaterial, fxMaterialGlow, fxBirthTime, fxLetterTime);
}

/*
==============
UI_EndReadingSaveDeviceUI
==============
*/

void __fastcall UI_EndReadingSaveDeviceUI(LocalClientNum_t localClientNum)
{
  R_EndRemoteScreenUpdate();
}

/*
==============
UI_FeederItemText
==============
*/
char *UI_FeederItemText(LocalClientNum_t localClientNum, const float feederID, int index, int column, float *s0, float *t0, float *s1, float *t1, Material **material)
{
  __int64 v10; 
  uiInfo_t *ClientInfo; 
  int ServerCount; 
  const char *v13; 
  int v14; 
  char *result; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  int v19; 
  const char *v20; 
  unsigned int v21; 
  const char *v22; 
  int v23; 
  __int64 v24; 

  v10 = index;
  *material = NULL;
  if ( feederID != 2.0 )
    return (char *)&queryFormat.fmt + 3;
  ClientInfo = UI_GetClientInfo(localClientNum);
  ServerCount = LAN_GetServerCount();
  if ( sharedUiInfo.serverStatus.serverCount != ServerCount )
  {
    sharedUiInfo.serverStatus.serverCount = ServerCount;
    if ( sharedUiInfo.serverStatus.numDisplayServers )
    {
      sharedUiInfo.serverStatus.currentServer = 0;
      UI_BuildServerDisplayList(ClientInfo, 1);
    }
  }
  if ( (int)v10 < 0 || (int)v10 >= sharedUiInfo.serverStatus.numDisplayServers )
    return (char *)&queryFormat.fmt + 3;
  if ( lastColumn != column || lastTime_1 > ClientInfo->uiDC.realTime + 5000 )
  {
    LAN_GetServerInfo(sharedUiInfo.serverStatus.displayServers[v10], info_0, 0x400ui64);
    lastTime_1 = ClientInfo->uiDC.realTime;
    lastColumn = column;
  }
  v13 = Info_ValueForKey(info_0, "ping");
  v14 = atoi(v13);
  switch ( column )
  {
    case 0:
      if ( v14 > 0 )
      {
        v16 = Info_ValueForKey(info_0, "hostname");
        Core_strcpy_truncate(clientBuff, 0x2Fui64, v16);
        result = clientBuff;
      }
      else
      {
        result = (char *)Info_ValueForKey(info_0, "addr");
      }
      break;
    case 1:
      v17 = Info_ValueForKey(info_0, "mapname");
      Core_strcpy_truncate(mapName_0, 0x20ui64, v17);
      result = mapName_0;
      break;
    case 2:
      v18 = Info_ValueForKey(info_0, "botcount");
      v19 = atoi(v18);
      v20 = Info_ValueForKey(info_0, "clients");
      v21 = atoi(v20);
      v22 = Info_ValueForKey(info_0, "maxclients");
      v23 = atoi(v22);
      if ( v19 )
      {
        v24 = (unsigned int)(v23 - 1);
        if ( (int)v21 < (int)v24 )
          v24 = v21;
      }
      else
      {
        v24 = v21;
      }
      Com_sprintf(clientBuff, 0x2Fui64, "%i (%i)", v24, v23);
      result = clientBuff;
      break;
    case 3:
      if ( Info_ValueForKey(info_0, "gametype") && *Info_ValueForKey(info_0, "gametype") )
        result = (char *)Info_ValueForKey(info_0, "gametype");
      else
        result = "?";
      break;
    case 4:
      if ( v14 > 0 )
        result = (char *)Info_ValueForKey(info_0, "ping");
      else
        result = "...";
      break;
    case 5:
      result = (char *)Info_ValueForKey(info_0, "islobby");
      break;
    default:
      return (char *)&queryFormat.fmt + 3;
  }
  return result;
}

/*
==============
UI_FeederItemText_NonPlayingLocalClients
==============
*/
void UI_FeederItemText_NonPlayingLocalClients(LocalClientNum_t localClientNum, int index, int count, char *outBuf, unsigned __int64 outBufSize)
{
  int v8; 
  int v9; 
  int i; 
  int v11; 
  int j; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *String; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  LocalClientNum_t outLocalClientNum[4]; 

  if ( !outBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1382, ASSERT_TYPE_ASSERT, "(outBufSize > 0)", (const char *)&queryFormat, "outBufSize > 0") )
    __debugbreak();
  if ( !CL_Mgr_CanSignInMorePlayers() || !LUI_IsTopSignInMenu() )
    goto LABEL_37;
  v8 = 0;
  v9 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( GPad_IsActive(i) && !CL_Mgr_IsControllerMappedToClient(i, outLocalClientNum) )
      ++v9;
  }
  v11 = index - count;
  if ( index - count >= v9 )
  {
    if ( v11 != v9 )
      goto LABEL_37;
    if ( IN_IsKeyboardConnected(index) )
    {
      v19 = "PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_PLAY";
      if ( !Live_IsSignedIn(index) )
        v19 = "PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_SIGNIN";
      String = SEH_StringEd_GetString(v19);
      v21 = UI_CheckStringTranslation(v19, String);
      v22 = SEH_StringEd_GetString("KEY/SPACE");
      v23 = UI_CheckStringTranslation("KEY/SPACE", v22);
      v16 = UI_ReplaceConversionString(v21, v23);
    }
    else
    {
      v24 = SEH_StringEd_GetString("PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_PLUGIN");
      v16 = UI_CheckStringTranslation("PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_PLUGIN", v24);
    }
  }
  else
  {
    for ( j = 0; j < 8; ++j )
    {
      if ( GPad_IsActive(j) && !CL_Mgr_IsControllerMappedToClient(j, outLocalClientNum) )
      {
        if ( v8 == v11 )
          goto LABEL_22;
        ++v8;
      }
    }
    if ( v8 >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1374, ASSERT_TYPE_ASSERT, "(count < 0)", (const char *)&queryFormat, "count < 0") )
      __debugbreak();
    j = v8;
LABEL_22:
    v13 = "PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_PLAY";
    if ( !Live_IsSignedIn(j) )
      v13 = "PLATFORM_UI/FEEDER_SECONDARY_CONTROLLER_SIGNIN";
    v14 = SEH_StringEd_GetString(v13);
    v15 = UI_CheckStringTranslation(v13, v14);
    if ( GPad_IsActive(j) )
    {
      v16 = UI_ReplaceConversionString(v15, &replaceString);
    }
    else
    {
      if ( !IN_IsKeyboardConnected(j) )
        goto LABEL_35;
      v17 = SEH_StringEd_GetString("KEY/SPACE");
      v18 = UI_CheckStringTranslation("KEY/SPACE", v17);
      v16 = UI_ReplaceConversionString(v15, v18);
    }
  }
  v15 = v16;
LABEL_35:
  if ( v15 )
  {
    UI_ReplaceDirective(localClientNum, v15, outBuf, outBufSize, 0);
    return;
  }
LABEL_37:
  *outBuf = 0;
}

/*
==============
UI_FeederSelection
==============
*/
void UI_FeederSelection(LocalClientNum_t localClientNum, float feederID, int index)
{
  __int64 v4; 
  int currentServer; 
  __int64 v6; 
  int v7; 

  v4 = index;
  if ( index < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1547, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    LODWORD(v6) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( feederID == 2.0 )
  {
    currentServer = sharedUiInfo.serverStatus.currentServer;
    if ( sharedUiInfo.serverStatus.numDisplayServers > 0 )
      currentServer = v4;
    sharedUiInfo.serverStatus.currentServer = currentServer;
    LAN_GetServerInfo(sharedUiInfo.serverStatus.displayServers[v4], info_1, 0x400ui64);
  }
}

/*
==============
UI_Feeder_GetNonUsedGPadCount
==============
*/
__int64 UI_Feeder_GetNonUsedGPadCount()
{
  unsigned int v0; 
  int i; 
  LocalClientNum_t outLocalClientNum; 

  v0 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( GPad_IsActive(i) && !CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) )
      ++v0;
  }
  return v0;
}

/*
==============
UI_Feeder_GetUsedGPadCount
==============
*/
__int64 UI_Feeder_GetUsedGPadCount()
{
  unsigned int v0; 
  int i; 
  LocalClientNum_t outLocalClientNum; 

  v0 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
      ++v0;
  }
  return v0;
}

/*
==============
UI_GetBlurRadius
==============
*/
float UI_GetBlurRadius(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  uiInfo_t *v2; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = &uiInfoArray[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2282, ASSERT_TYPE_ASSERT, "(uiInfo)", (const char *)&queryFormat, "uiInfo") )
    __debugbreak();
  return v2->uiDC.blurRadiusOut;
}

/*
==============
UI_GetClientInfo
==============
*/
uiInfo_t *UI_GetClientInfo(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &uiInfoArray[v1];
}

/*
==============
UI_GetConnectInfoString
==============
*/
const char *UI_GetConnectInfoString(uiClientState_t *state)
{
  const char *String; 
  const char *v3; 
  const char *v4; 
  const char *result; 
  const char *v6; 
  const char *v7; 
  const char *v8; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2079, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  switch ( state->connState )
  {
    case CA_CONNECTING:
      String = SEH_StringEd_GetString("EXE/AWAITINGCONNECTION");
      v3 = "EXE/AWAITINGCONNECTION";
      goto LABEL_6;
    case CA_CHALLENGING:
      String = SEH_StringEd_GetString("EXE/AWAITINGCHALLENGE");
      v3 = "EXE/AWAITINGCHALLENGE";
LABEL_6:
      v4 = UI_CheckStringTranslation(v3, String);
      result = UI_ReplaceConversionInt(v4, state->connectPacketCount);
      break;
    case CA_CONNECTED:
      v6 = SEH_StringEd_GetString("EXE/AWAITINGGAMESTATE");
      result = UI_CheckStringTranslation("EXE/AWAITINGGAMESTATE", v6);
      break;
    case CA_SENDINGSTATS:
      v7 = SEH_StringEd_GetString("EXE/UPLOADINGSTATS");
      result = UI_CheckStringTranslation("EXE/UPLOADINGSTATS", v7);
      break;
    case CA_REQUESTING_MATCH_RULES:
    case CA_LOADING:
    case CA_PRIMED:
      v8 = SEH_StringEd_GetString("EXE/AWAITINGHOST");
      result = UI_CheckStringTranslation("EXE/AWAITINGHOST", v8);
      break;
    default:
      result = NULL;
      break;
  }
  return result;
}

/*
==============
UI_GetConnectionInfo
==============
*/
const char *UI_GetConnectionInfo(LocalClientNum_t localClientNum)
{
  bool v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  int v11; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  uiClientState_t state; 

  v1 = 0;
  v2 = s_mapName[0] == 0;
  CL_GetClientState(localClientNum, &state);
  v3 = 0x7FFFFFFFi64;
  v4 = 0i64;
  while ( 1 )
  {
    v5 = (unsigned __int8)state.servername[v4];
    v6 = v3;
    v7 = (unsigned __int8)net_interface[v4++];
    --v3;
    if ( !v6 )
    {
LABEL_10:
      v11 = 0;
      goto LABEL_11;
    }
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( v5 - 65 > 0x19 )
        v8 = v5;
      v9 = v7 + 32;
      v5 = v8;
      if ( v7 - 65 > 0x19 )
        v9 = v7;
      v10 = v8 < v9;
      if ( v8 != v9 )
        break;
    }
    if ( !v5 )
      goto LABEL_10;
  }
  v11 = 1;
  if ( v10 )
    v11 = -1;
LABEL_11:
  if ( v11 )
    v1 = v2;
  if ( !LoadBar_IsComplete() && !v1 )
    return 0i64;
  v13 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    v14 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      CL_GetClientState(LOCAL_CLIENT_0, &state);
  }
  return UI_GetConnectInfoString(&state);
}

/*
==============
UI_GetCurrentMapImage
==============
*/
char *UI_GetCurrentMapImage()
{
  const char *MapName; 
  const mapInfo *MapInfoForLoadName; 

  MapName = Party_GetMapName();
  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(MapName);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapLoadImage;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
UI_GetCurrentMapName
==============
*/
const char *UI_GetCurrentMapName()
{
  const char *MapName; 

  MapName = Party_GetMapName();
  return UI_GetMapDisplayName(MapName);
}

/*
==============
UI_GetCurrentMapReference
==============
*/
char *UI_GetCurrentMapReference()
{
  const char *MapName; 
  const mapInfo *MapInfoForLoadName; 

  MapName = Party_GetMapName();
  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(MapName);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapLoadName;
  else
    return (char *)MapName;
}

/*
==============
UI_GetCustomizedGameTypeDefaultDisplayDesc
==============
*/
const char *UI_GetCustomizedGameTypeDefaultDisplayDesc(const char *pszGameType)
{
  const gameTypeInfo *GameTypeForInternalName; 
  const gameTypeInfo *v3; 
  char v4; 
  __int64 v5; 
  const char *String; 

  GameTypeForInternalName = Com_GameInfo_GetGameTypeForInternalName(pszGameType);
  v3 = GameTypeForInternalName;
  if ( !GameTypeForInternalName )
    return pszGameType;
  v4 = GameTypeForInternalName->customizedGameTypeDesc[0];
  v5 = 0i64;
  if ( v4 == 31 )
    String = NULL;
  else
    String = SEH_StringEd_GetString(GameTypeForInternalName->customizedGameTypeDesc);
  LOBYTE(v5) = v4 == 31;
  return UI_CheckStringTranslation(&v3->customizedGameTypeDesc[v5], String);
}

/*
==============
UI_GetCustomizedGameTypeDefaultDisplayName
==============
*/
const char *UI_GetCustomizedGameTypeDefaultDisplayName(const char *pszGameType)
{
  const gameTypeInfo *GameTypeForInternalName; 
  const gameTypeInfo *v3; 
  char v4; 
  __int64 v5; 
  const char *String; 

  GameTypeForInternalName = Com_GameInfo_GetGameTypeForInternalName(pszGameType);
  v3 = GameTypeForInternalName;
  if ( !GameTypeForInternalName )
    return pszGameType;
  v4 = GameTypeForInternalName->customizedGameTypeName[0];
  v5 = 0i64;
  if ( v4 == 31 )
    String = NULL;
  else
    String = SEH_StringEd_GetString(GameTypeForInternalName->customizedGameTypeName);
  LOBYTE(v5) = v4 == 31;
  return UI_CheckStringTranslation(&v3->customizedGameTypeName[v5], String);
}

/*
==============
UI_GetGameTypeDisplayName
==============
*/
const char *UI_GetGameTypeDisplayName(const char *pszGameType)
{
  const gameTypeInfo *GameTypeForInternalName; 
  const gameTypeInfo *v3; 
  char v4; 
  __int64 v5; 
  const char *String; 

  GameTypeForInternalName = Com_GameInfo_GetGameTypeForInternalName(pszGameType);
  v3 = GameTypeForInternalName;
  if ( !GameTypeForInternalName )
    return pszGameType;
  v4 = GameTypeForInternalName->gameTypeName[0];
  v5 = 0i64;
  if ( v4 == 31 )
    String = NULL;
  else
    String = SEH_StringEd_GetString(GameTypeForInternalName->gameTypeName);
  LOBYTE(v5) = v4 == 31;
  return UI_CheckStringTranslation(&v3->gameTypeName[v5], String);
}

/*
==============
UI_GetMapDescByIndex
==============
*/
char *UI_GetMapDescByIndex(int idx)
{
  int MapIdForNum; 

  if ( !accessToSubscriberContent->current.enabled || idx )
  {
    MapIdForNum = UI_GetMapIdForNum(idx);
    return Com_GameInfo_GetMapInfoForIndex(MapIdForNum)->mapDescription;
  }
  else if ( ui_showDLCMaps->current.enabled )
  {
    return "@DLC/MAPS_DESC";
  }
  else
  {
    return "@DLC/MAPSTORE";
  }
}

/*
==============
UI_GetMapDisplayName
==============
*/
const char *UI_GetMapDisplayName(const char *pszMap)
{
  const mapInfo *MapInfoForLoadName; 
  const char *v3; 
  const char *String; 

  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(pszMap);
  v3 = (const char *)MapInfoForLoadName;
  if ( !MapInfoForLoadName )
    return pszMap;
  if ( MapInfoForLoadName->mapName[0] == 31 )
    return UI_CheckStringTranslation(&MapInfoForLoadName->mapName[1], NULL);
  String = SEH_StringEd_GetString(MapInfoForLoadName->mapName);
  return UI_CheckStringTranslation(v3, String);
}

/*
==============
UI_GetMapDisplayNameReference
==============
*/
const mapInfo *UI_GetMapDisplayNameReference(const char *pszMap)
{
  const char *v1; 
  const mapInfo *MapInfoForLoadName; 

  v1 = pszMap;
  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(pszMap);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName;
  return (const mapInfo *)v1;
}

/*
==============
UI_GetMapGameTypesForCurrentIndex
==============
*/
char *UI_GetMapGameTypesForCurrentIndex(int idx)
{
  int MapIdForNum; 

  MapIdForNum = UI_GetMapIdForNum(idx);
  return Com_GameInfo_GetMapInfoForIndex(MapIdForNum)->mapGameTypes;
}

/*
==============
UI_GetMapImageByIndex
==============
*/
char *UI_GetMapImageByIndex(int idx)
{
  const char *MapLoadNameForCurrentIndex; 
  const mapInfo *MapInfoForLoadName; 

  MapLoadNameForCurrentIndex = UI_GetMapLoadNameForCurrentIndex(idx);
  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(MapLoadNameForCurrentIndex);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapLoadImage;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
UI_GetMapImageByName
==============
*/
char *UI_GetMapImageByName(const char *mapName)
{
  const mapInfo *MapInfoForLoadName; 

  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(mapName);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapLoadImage;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
UI_GetMapPackByIndex
==============
*/
__int64 UI_GetMapPackByIndex(int idx)
{
  int MapIdForNum; 
  const mapInfo *MapInfoForIndex; 

  MapIdForNum = UI_GetMapIdForNum(idx);
  MapInfoForIndex = Com_GameInfo_GetMapInfoForIndex(MapIdForNum);
  if ( disableDLC->current.enabled )
    return 0i64;
  else
    return (unsigned int)MapInfoForIndex->mapPack;
}

/*
==============
UI_GetMapReference
==============
*/
char *UI_GetMapReference(const char *pszMap)
{
  const mapInfo *MapInfoForLoadName; 

  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(pszMap);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapLoadName;
  else
    return (char *)pszMap;
}

/*
==============
UI_GetMapSupportsAliensByIndex
==============
*/
__int64 UI_GetMapSupportsAliensByIndex(int idx)
{
  int MapIdForNum; 

  MapIdForNum = UI_GetMapIdForNum(idx);
  return (unsigned int)Com_GameInfo_GetMapInfoForIndex(MapIdForNum)->isAliensMap;
}

/*
==============
UI_GetMapVoteMapImage
==============
*/
char *UI_GetMapVoteMapImage(int entry)
{
  int v2; 
  const char *uiMapnameDVar; 
  const char *StringSafe; 
  const mapInfo *MapInfoForLoadName; 

  if ( (unsigned int)entry >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 673, ASSERT_TYPE_ASSERT, "(unsigned)( entry ) < (unsigned)( NUM_MAP_VOTE_ENTRIES )", "entry doesn't index NUM_MAP_VOTE_ENTRIES\n\t%i not in [0, %i)", entry, 3) )
    __debugbreak();
  v2 = entry - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      uiMapnameDVar = g_mapVoteInfo[2].uiMapnameDVar;
    else
      uiMapnameDVar = g_mapVoteInfo[0].uiMapnameDVar;
  }
  else
  {
    uiMapnameDVar = g_mapVoteInfo[1].uiMapnameDVar;
  }
  StringSafe = Dvar_GetStringSafe(uiMapnameDVar);
  MapInfoForLoadName = Com_GameInfo_GetMapInfoForLoadName(StringSafe);
  if ( MapInfoForLoadName )
    return MapInfoForLoadName->mapVoteImage;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
UI_GetMapVoteMapName
==============
*/
const char *UI_GetMapVoteMapName(int entry)
{
  int v2; 
  const char *StringSafe; 
  const char *v5; 

  if ( (unsigned int)entry >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 618, ASSERT_TYPE_ASSERT, "(unsigned)( entry ) < (unsigned)( NUM_MAP_VOTE_ENTRIES )", "entry doesn't index NUM_MAP_VOTE_ENTRIES\n\t%i not in [0, %i)", entry, 3) )
    __debugbreak();
  v2 = entry - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
    else
      StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
    return UI_GetMapDisplayName(StringSafe);
  }
  else
  {
    v5 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
    return UI_GetMapDisplayName(v5);
  }
}

/*
==============
UI_GetSelectedPartyMemberXUID
==============
*/
XUID *UI_GetSelectedPartyMemberXUID(XUID *result, const LocalClientNum_t localClientNum)
{
  result->m_id = (unsigned __int64)sharedUiInfo.partyMemberXuid;
  return result;
}

/*
==============
UI_GetServerCount
==============
*/
__int64 UI_GetServerCount(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int ServerCount; 
  __int64 result; 
  int v5; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  ServerCount = LAN_GetServerCount();
  if ( sharedUiInfo.serverStatus.serverCount != ServerCount )
  {
    sharedUiInfo.serverStatus.serverCount = ServerCount;
    result = (unsigned int)sharedUiInfo.serverStatus.numDisplayServers;
    if ( !sharedUiInfo.serverStatus.numDisplayServers )
      return result;
    sharedUiInfo.serverStatus.currentServer = 0;
    UI_BuildServerDisplayList(&uiInfoArray[v1], 1);
  }
  return (unsigned int)sharedUiInfo.serverStatus.numDisplayServers;
}

/*
==============
UI_GetSubtitlesVisible
==============
*/
bool UI_GetSubtitlesVisible(LocalClientNum_t localClientNum)
{
  return !CL_Pause_IsGamePaused() || !R_Cinematic_GetPaused();
}

/*
==============
UI_Init
==============
*/
void UI_Init(void)
{
  const XUID *v0; 
  int *p_screenHeight; 
  int v2; 
  bool v3; 
  int v4; 
  float v5; 
  __int64 v6; 
  __int64 v7; 
  XUID result; 

  sharedUiInfo.assets.whiteMaterial = Material_RegisterHandle("white", IMAGE_TRACK_UI);
  sharedUiInfo.assets.scrollBar = Material_RegisterHandle("ui_scrollbar", IMAGE_TRACK_UI);
  sharedUiInfo.assets.scrollBarArrowDown = Material_RegisterHandle("ui_scrollbar_arrow_dwn_a", IMAGE_TRACK_UI);
  sharedUiInfo.assets.scrollBarArrowUp = Material_RegisterHandle("ui_scrollbar_arrow_up_a", IMAGE_TRACK_UI);
  sharedUiInfo.assets.scrollBarArrowLeft = Material_RegisterHandle("ui_scrollbar_arrow_left", IMAGE_TRACK_UI);
  sharedUiInfo.assets.scrollBarArrowRight = Material_RegisterHandle("ui_scrollbar_arrow_right", IMAGE_TRACK_UI);
  UI_RegisterFonts();
  v0 = XUID::NullXUID(&result);
  XUID::operator=(&sharedUiInfo.partyMemberXuid, v0);
  p_screenHeight = &uiInfoArray[0].uiDC.screenHeight;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(v7) = 2;
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    *(_QWORD *)(p_screenHeight - 5) = 0i64;
    *(_QWORD *)(p_screenHeight - 3) = 0i64;
    *(_QWORD *)(p_screenHeight - 1) = 0i64;
    *(_QWORD *)(p_screenHeight + 1) = 0i64;
    *(_QWORD *)(p_screenHeight + 3) = 0i64;
    *(p_screenHeight - 6) = v2;
    CL_GetScreenDimensions(p_screenHeight - 1, p_screenHeight, (float *)p_screenHeight + 1);
    v4 = *(p_screenHeight - 1);
    if ( 480 * v4 <= 640 * *p_screenHeight )
      v5 = 0.0;
    else
      v5 = (float)((float)v4 - (float)((float)*p_screenHeight * 1.3333334)) * 0.5;
    *((float *)p_screenHeight - 5) = v5;
    p_screenHeight += 11;
    v3 = (unsigned int)++v2 < 2;
  }
  while ( v2 < 2 );
}

/*
==============
UI_InsertServerIntoDisplayList
==============
*/
void UI_InsertServerIntoDisplayList(int num, int position)
{
  __int64 v2; 
  int numDisplayServers; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 

  v2 = position;
  if ( position < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "(position >= 0)", (const char *)&queryFormat, "position >= 0") )
    __debugbreak();
  numDisplayServers = sharedUiInfo.serverStatus.numDisplayServers;
  if ( (int)v2 < sharedUiInfo.serverStatus.numDisplayServers )
  {
    v5 = LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, num, sharedUiInfo.serverStatus.displayServers[v2]);
    if ( v5 != -LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[v2], num) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1085, ASSERT_TYPE_ASSERT, "(res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[position], num ))", (const char *)&queryFormat, "res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[position], num )") )
      __debugbreak();
    if ( v5 > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1086, ASSERT_TYPE_ASSERT, "(res <= 0)", (const char *)&queryFormat, "res <= 0") )
      __debugbreak();
    numDisplayServers = sharedUiInfo.serverStatus.numDisplayServers;
  }
  if ( (int)v2 > 0 )
  {
    v6 = LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, num, *(&sharedUiInfo.serverStatus.currentServer + v2));
    if ( v6 != -LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, *(&sharedUiInfo.serverStatus.currentServer + v2), num) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1091, ASSERT_TYPE_ASSERT, "(res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[position - 1], num ))", (const char *)&queryFormat, "res == -LAN_CompareServers( sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, sharedUiInfo.serverStatus.displayServers[position - 1], num )") )
      __debugbreak();
    if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1092, ASSERT_TYPE_ASSERT, "(res >= 0)", (const char *)&queryFormat, "res >= 0") )
      __debugbreak();
    numDisplayServers = sharedUiInfo.serverStatus.numDisplayServers;
  }
  if ( (int)v2 >= 0 && (int)v2 <= numDisplayServers )
  {
    if ( (int)v2 <= sharedUiInfo.serverStatus.currentServer && numDisplayServers )
      ++sharedUiInfo.serverStatus.currentServer;
    v7 = numDisplayServers + 1;
    v8 = v7;
    for ( sharedUiInfo.serverStatus.numDisplayServers = v7; v8 > v2; --v8 )
      sharedUiInfo.serverStatus.displayServers[v8] = *(&sharedUiInfo.serverStatus.currentServer + v8);
    sharedUiInfo.serverStatus.displayServers[v2] = num;
  }
}

/*
==============
UI_InterpolateCinematicLetterboxingParams
==============
*/
void UI_InterpolateCinematicLetterboxingParams(LocalClientNum_t localClientNum)
{
  int v2; 
  cg_t *LocalClientGlobals; 
  CinematicLetterBoxState wantedState; 
  int frametime; 
  int v6; 
  int fadeTimer; 
  __int64 v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1774, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 2;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1775, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  wantedState = LocalClientGlobals->cinematicLetterboxInfo.wantedState;
  if ( wantedState != LocalClientGlobals->cinematicLetterboxInfo.currentState )
  {
    if ( wantedState == CINEMATIC_LETTER_BOX_ON )
    {
      v2 = 0;
    }
    else if ( wantedState != CINEMATIC_LETTER_BOX_OFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1790, ASSERT_TYPE_ASSERT, "(letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_OFF)", (const char *)&queryFormat, "letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_OFF") )
    {
      __debugbreak();
    }
    LocalClientGlobals->cinematicLetterboxInfo.currentState = v2;
    frametime = CG_GetLocalClientGlobals(localClientNum)->frametime;
    v6 = LocalClientGlobals->cinematicLetterboxInfo.scaleTimer - frametime;
    LocalClientGlobals->cinematicLetterboxInfo.fadeTimer -= frametime;
    fadeTimer = LocalClientGlobals->cinematicLetterboxInfo.fadeTimer;
    LocalClientGlobals->cinematicLetterboxInfo.scaleTimer = v6;
    if ( fadeTimer <= 0 )
    {
      LocalClientGlobals->cinematicLetterboxInfo.fadeTimer = 0;
      fadeTimer = 0;
    }
    if ( v6 <= 0 )
    {
      LocalClientGlobals->cinematicLetterboxInfo.scaleTimer = 0;
      v6 = 0;
    }
    if ( !fadeTimer && !v6 )
    {
      if ( ((LocalClientGlobals->cinematicLetterboxInfo.wantedState - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1807, ASSERT_TYPE_ASSERT, "(letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_OFF || letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_ON)", (const char *)&queryFormat, "letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_OFF || letterboxInfo.wantedState == CINEMATIC_LETTER_BOX_ON") )
        __debugbreak();
      if ( (LocalClientGlobals->cinematicLetterboxInfo.currentState & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1808, ASSERT_TYPE_ASSERT, "(letterboxInfo.currentState == CINEMATIC_LETTER_BOX_IN || letterboxInfo.currentState == CINEMATIC_LETTER_BOX_OUT)", (const char *)&queryFormat, "letterboxInfo.currentState == CINEMATIC_LETTER_BOX_IN || letterboxInfo.currentState == CINEMATIC_LETTER_BOX_OUT") )
        __debugbreak();
      LocalClientGlobals->cinematicLetterboxInfo.currentState = LocalClientGlobals->cinematicLetterboxInfo.wantedState;
    }
  }
}

/*
==============
UI_MissingMapError
==============
*/
void UI_MissingMapError(void)
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444F81F8);
}

/*
==============
UI_OwnerDraw
==============
*/
void UI_OwnerDraw(LocalClientNum_t localClientNum, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, int ownerDrawFlags, int itemAlignment, float special, GfxFont *font, float scale, const vec4_t *color, int textStyle, rectDef_s *parentRect)
{
  __int64 v18; 
  CgDrawSystem *v19; 
  __int128 v20; 
  CgDrawSystem_vtbl *v21; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v23; 
  __int64 v24; 
  __int64 v25; 
  __int128 v26; 
  int v27; 
  rectDef_s rect; 

  v18 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !clientUIActives[v18].frontEndSceneState[0] && clientUIActives[v18].cgameInitialized )
  {
    if ( (unsigned int)v18 >= 2 )
    {
      LODWORD(v25) = 2;
      LODWORD(v24) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( (int)v18 < cg_t::ms_allocatedCount && CG_GetLocalClientGlobals((const LocalClientNum_t)v18)->nextSnap )
    {
      if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
      {
        LODWORD(v25) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", v25) )
          __debugbreak();
      }
      if ( (unsigned int)v18 >= CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(v25) = CgDrawSystem::ms_allocatedCount;
        LODWORD(v24) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !CgDrawSystem::ms_drawSystemArray[v18] )
      {
        LODWORD(v25) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v25) )
          __debugbreak();
      }
      v19 = CgDrawSystem::ms_drawSystemArray[v18];
      v20 = *(_OWORD *)&parentRect->x;
      v27 = *(_DWORD *)&parentRect->horzAlign;
      v21 = v19->__vftable;
      v26 = v20;
      ((void (__fastcall *)(CgDrawSystem *, __int128 *))v21->OwnerDraw)(v19, &v26);
    }
  }
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v18);
  rect.horzAlign = horzAlign;
  v23 = ActivePlacement;
  rect.vertAlign = vertAlign;
  rect.x = x + text_x;
  rect.y = y + text_y;
  rect.w = w;
  rect.h = h;
  if ( (unsigned __int8)horzAlign != horzAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(rect.horzAlign == horzAlign)", (const char *)&queryFormat, "rect.horzAlign == horzAlign") )
    __debugbreak();
  if ( rect.vertAlign != vertAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(rect.vertAlign == vertAlign)", (const char *)&queryFormat, "rect.vertAlign == vertAlign") )
    __debugbreak();
  if ( ownerDraw == 364 )
    ProfLoad_DrawOverlay(v23, &rect);
}

/*
==============
UI_RegisterDvars
==============
*/
void UI_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  ui_play_credits = Dvar_RegisterInt("ROQSKRSPL", 0, 0, 2, 0, "Should we play the credits");
  ui_smallFont = Dvar_RegisterFloat("MNQNRQRKQM", 0.56300002, 0.0, 1.0, 0, "Small font scale");
  ui_bigFont = Dvar_RegisterFloat("PQSRTPQP", 0.68800002, 0.0, 1.0, 0, "Big font scale");
  ui_extraBigFont = Dvar_RegisterFloat("MSTLNMPLSN", 1.0, 0.0, 1.0, 0, "Extra big font scale");
  ui_mapvote_entrya_mapname = Dvar_RegisterString("NSMOLKMMPM", (const char *)&queryFormat.fmt + 3, 0, "Primary map vote entry map name");
  ui_mapvote_entryb_mapname = Dvar_RegisterString("MSQROKTRSN", (const char *)&queryFormat.fmt + 3, 0, "Secondary map vote entry map name");
  ui_mapvote_entryc_mapname = Dvar_RegisterString("ROLQKTOMM", (const char *)&queryFormat.fmt + 3, 0, "Random map vote entry map name");
  ui_mapvote_entrya_gametype = Dvar_RegisterString("OMPNPQLLMP", (const char *)&queryFormat.fmt + 3, 0, "Primary map vote entry game type");
  ui_mapvote_entryb_gametype = Dvar_RegisterString("LLQTQTNMTK", (const char *)&queryFormat.fmt + 3, 0, "Secondary map vote entry game type");
  ui_mapvote_entryc_gametype = Dvar_RegisterString("MKPKSTLTTT", (const char *)&queryFormat.fmt + 3, 0, "Random map vote entry game type");
  ui_missingMapName = Dvar_RegisterString("LNKPRSTSOL", (const char *)&queryFormat.fmt + 3, 0, "Name of map to show in missing content error");
  ui_letterBoxFadeTime = Dvar_RegisterInt("NPPRNLKOMQ", 1000, 0, 100000, 0, "The time for the letter box to fade after slam zoom");
  ui_buildLocation = Dvar_RegisterVec2("LNRQMSLQT", -50.0, 45.0, -10000.0, 10000.0, 0, "Where to draw the build number");
  ui_buildSize = Dvar_RegisterFloat("MMMPOKRSML", 0.23, 0.0, 1.0, 0, "Font size to use for the build number");
  ui_myPartyColor = Dvar_RegisterColor("MTSKSOSTML", 1.0, 0.80000001, 0.40000001, 1.0, 0, "Player name font color when in the same party as the local player");
  ui_partyFull = Dvar_RegisterBool("MQRSQKTLON", 0, 0, "True if the current party is full.");
  ui_cinematicsTimestamp = Dvar_RegisterBool("LTPPTQSOKK", 0, 0, "Shows cinematics timestamp on subtitle UI elements.");
  ui_showDLCMaps = Dvar_RegisterBool("LQKPOSTSMP", 0, 0, "Whether to display the DLC maps.");
  ui_editSquadMemberIndex = Dvar_RegisterInt("MLRONRKSOQ", 0, 0, 128, 0, "Which squad member is currently being edited");
  uiscript_verbose = Dvar_RegisterBool("TRMKKRQRT", 0, 0, "Turns on extra ui script debugging console prints");
  Dvar_EndPermanentRegistration();
}

/*
==============
UI_ReplaceConversionInt
==============
*/
char *UI_ReplaceConversionInt(const char *sourceString, int replaceInt)
{
  ConversionArguments arguments; 
  char _Buffer[48]; 
  char outputString[1024]; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_QWORD *)&arguments.argCount = 1i64;
  *(_OWORD *)&arguments.args[1] = _XMM0;
  *(_OWORD *)&arguments.args[3] = _XMM1;
  *(_OWORD *)&arguments.args[5] = _XMM0;
  *(_OWORD *)&arguments.args[7] = _XMM1;
  j_sprintf(_Buffer, "%d", (unsigned int)replaceInt);
  arguments.args[0] = _Buffer;
  UI_ReplaceConversions(sourceString, &arguments, outputString, 0x400ui64);
  return j_va((const char *)&queryFormat, outputString);
}

/*
==============
UI_ReplaceConversionInts
==============
*/
char *UI_ReplaceConversionInts(const char *sourceString, int numInts, int *replaceInts)
{
  __int64 v3; 
  int v6; 
  __int64 i; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  char v18; 
  __int64 v20; 
  int v21[20]; 
  char dest[1600]; 

  v3 = numInts;
  memset_0(v21, 0, sizeof(v21));
  v6 = 0;
  v21[0] = v3;
  if ( (int)v3 > 0 )
  {
    for ( i = 0i64; i < v3; ++i )
    {
      j_sprintf(&dest[36 * v6 + 1024], "%d", (unsigned int)replaceInts[i]);
      *(_QWORD *)&v21[2 * i + 2] = &dest[36 * v6++ + 1024];
    }
    LODWORD(v3) = v21[0];
  }
  if ( !sourceString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2547, ASSERT_TYPE_ASSERT, "(sourceString)", (const char *)&queryFormat, "sourceString") )
    __debugbreak();
  if ( strstr_0(sourceString, "&&") )
  {
    if ( (int)v3 > 9 )
    {
      LODWORD(v20) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2556, ASSERT_TYPE_ASSERT, "( ( arguments->argCount <= 9 ) )", "( arguments->argCount ) = %i", v20) )
        __debugbreak();
    }
    v8 = -1i64;
    do
      ++v8;
    while ( sourceString[v8] );
    if ( !v8 )
    {
      LODWORD(v20) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "( ( sourceStringLength > 0 ) )", "( sourceStringLength ) = %i", v20) )
        __debugbreak();
    }
    memset_0(dest, 0, 0x400ui64);
    v9 = 0;
    v10 = 0i64;
    if ( v8 )
    {
      v11 = 0i64;
      do
      {
        if ( !strncmp(&sourceString[v10], "&&", 2ui64) && isdigit(sourceString[v10 + 2]) )
        {
          v12 = sourceString[v10 + 2] - 49;
          if ( v12 < 0 )
          {
            LODWORD(v20) = sourceString[v10 + 2] - 49;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2574, ASSERT_TYPE_ASSERT, "( ( argIndex >= 0 ) )", "( argIndex ) = %i", v20) )
              __debugbreak();
          }
          if ( v12 >= 9 )
          {
            LODWORD(v20) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2575, ASSERT_TYPE_ASSERT, "( ( argIndex < 9 ) )", "( argIndex ) = %i", v20) )
              __debugbreak();
          }
          if ( v12 < (int)v3 )
          {
            v14 = 2i64 * v12;
            v15 = *(_QWORD *)&v21[v14 + 2];
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2583, ASSERT_TYPE_ASSERT, "(arguments->args[argIndex])", (const char *)&queryFormat, "arguments->args[argIndex]") )
              __debugbreak();
            v16 = -1i64;
            do
              ++v16;
            while ( *(_BYTE *)(v15 + v16) );
            v17 = 0i64;
            if ( v16 )
            {
              while ( v9 < 0x3FF )
              {
                ++v9;
                v18 = *(_BYTE *)(v17 + *(_QWORD *)&v21[v14 + 2]);
                ++v17;
                dest[v11++] = v18;
                if ( v17 >= v16 )
                  goto LABEL_40;
              }
              Com_PrintError(16, "Truncating presence string while copying replacement string to %zu", 0x400ui64);
            }
LABEL_40:
            v13 = 3i64;
          }
          else
          {
            Com_PrintWarning(16, "Missing replacement token #%d in string '%s'\n", (unsigned int)(v12 + 1), sourceString);
            v13 = 3i64;
          }
        }
        else
        {
          if ( v9 >= 0x3FF )
          {
            Com_PrintError(16, "Truncating presence string to %zu", 0x400ui64);
            return j_va((const char *)&queryFormat, dest);
          }
          ++v9;
          dest[v11++] = sourceString[v10];
          v13 = 1i64;
        }
        v10 += v13;
      }
      while ( v10 < v8 );
    }
  }
  else
  {
    Core_strcpy(dest, 0x400ui64, sourceString);
  }
  return j_va((const char *)&queryFormat, dest);
}

/*
==============
UI_ReplaceConversionString
==============
*/
char *UI_ReplaceConversionString(const char *sourceString, const char *replaceString)
{
  ConversionArguments arguments; 
  char outputString[1024]; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  arguments.args[0] = replaceString;
  *(_QWORD *)&arguments.argCount = 1i64;
  *(_OWORD *)&arguments.args[1] = _XMM0;
  *(_OWORD *)&arguments.args[3] = _XMM1;
  *(_OWORD *)&arguments.args[5] = _XMM0;
  *(_OWORD *)&arguments.args[7] = _XMM1;
  UI_ReplaceConversions(sourceString, &arguments, outputString, 0x400ui64);
  return j_va((const char *)&queryFormat, outputString);
}

/*
==============
UI_ReplaceConversions
==============
*/
void UI_ReplaceConversions(const char *sourceString, ConversionArguments *arguments, char *outputString, unsigned __int64 outputStringSize)
{
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  bool v14; 
  const char **v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  char v18; 
  __int64 v19; 

  if ( !sourceString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2547, ASSERT_TYPE_ASSERT, "(sourceString)", (const char *)&queryFormat, "sourceString") )
    __debugbreak();
  if ( !strstr_0(sourceString, "&&") )
  {
    Core_strcpy(outputString, outputStringSize, sourceString);
    return;
  }
  if ( !arguments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2555, ASSERT_TYPE_ASSERT, "(arguments)", (const char *)&queryFormat, "arguments") )
    __debugbreak();
  if ( arguments->argCount > 9 )
  {
    LODWORD(v19) = arguments->argCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2556, ASSERT_TYPE_ASSERT, "( ( arguments->argCount <= 9 ) )", "( arguments->argCount ) = %i", v19) )
      __debugbreak();
  }
  v8 = -1i64;
  do
    ++v8;
  while ( sourceString[v8] );
  if ( !v8 )
  {
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "( ( sourceStringLength > 0 ) )", "( sourceStringLength ) = %i", v19) )
      __debugbreak();
  }
  memset_0(outputString, 0, outputStringSize);
  v9 = 0;
  v10 = 0i64;
  if ( v8 )
  {
    v11 = 0i64;
    do
    {
      if ( !strncmp(&sourceString[v10], "&&", 2ui64) && isdigit(sourceString[v10 + 2]) )
      {
        v12 = sourceString[v10 + 2] - 49;
        if ( v12 < 0 )
        {
          LODWORD(v19) = sourceString[v10 + 2] - 49;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2574, ASSERT_TYPE_ASSERT, "( ( argIndex >= 0 ) )", "( argIndex ) = %i", v19) )
            __debugbreak();
        }
        if ( v12 >= 9 )
        {
          LODWORD(v19) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2575, ASSERT_TYPE_ASSERT, "( ( argIndex < 9 ) )", "( argIndex ) = %i", v19) )
            __debugbreak();
        }
        if ( v12 < arguments->argCount )
        {
          v14 = arguments->args[v12] == NULL;
          v15 = &arguments->args[v12];
          if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 2583, ASSERT_TYPE_ASSERT, "(arguments->args[argIndex])", (const char *)&queryFormat, "arguments->args[argIndex]") )
            __debugbreak();
          v16 = -1i64;
          do
            ++v16;
          while ( (*v15)[v16] );
          v17 = 0i64;
          if ( v16 )
          {
            while ( v9 < outputStringSize - 1 )
            {
              ++v9;
              v18 = (*v15)[v17++];
              outputString[v11++] = v18;
              if ( v17 >= v16 )
              {
                v13 = 3i64;
                goto LABEL_42;
              }
            }
            Com_PrintError(16, "Truncating presence string while copying replacement string to %zu", outputStringSize);
          }
          v13 = 3i64;
        }
        else
        {
          Com_PrintWarning(16, "Missing replacement token #%d in string '%s'\n", (unsigned int)(v12 + 1), sourceString);
          v13 = 3i64;
        }
      }
      else
      {
        if ( v9 >= outputStringSize - 1 )
        {
          Com_PrintError(16, "Truncating presence string to %zu", outputStringSize);
          return;
        }
        ++v9;
        outputString[v11++] = sourceString[v10];
        v13 = 1i64;
      }
LABEL_42:
      v10 += v13;
    }
    while ( v10 < v8 );
  }
}

/*
==============
UI_RunMenuScript
==============
*/
void UI_RunMenuScript(LocalClientNum_t localClientNum, const char **args, const char *actualScript)
{
  uiInfo_t *ClientInfo; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v21; 
  int v22; 
  int currentServer; 
  int v24; 
  int v25; 
  int v27; 
  int v28; 
  unsigned int v29; 
  int ControllerFromClient; 
  __int64 v31; 
  XSESSION_INFO pHostInfo; 
  char out[1024]; 

  bdSecurityID::bdSecurityID(&pHostInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&pHostInfo.m_security.m_key);
  if ( localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 995, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( String_Parse(args, out, 0x400ui64) )
  {
    ClientInfo = UI_GetClientInfo(localClientNum);
    v7 = 0x7FFFFFFFi64;
    v8 = 0x7FFFFFFFi64;
    v9 = 0i64;
    v10 = 0i64;
    while ( 1 )
    {
      v11 = (unsigned __int8)out[v10];
      v12 = (unsigned __int8)aRefreshservers[v10++];
      if ( !v8-- )
      {
LABEL_15:
        UI_StartServerRefresh(localClientNum, 1);
        UI_BuildServerDisplayList(ClientInfo, 1);
        goto LABEL_16;
      }
      if ( v11 != v12 )
      {
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        v11 = v14;
        v15 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v15 = v12;
        if ( v11 != v15 )
          break;
      }
      if ( !v11 )
        goto LABEL_15;
    }
    v16 = 0x7FFFFFFFi64;
    v17 = 0i64;
    while ( 1 )
    {
      v18 = (unsigned __int8)out[v17];
      v19 = (unsigned __int8)aUpdatefilter[v17++];
      if ( !v16-- )
      {
LABEL_26:
        UI_StartServerRefresh(localClientNum, 1);
        UI_BuildServerDisplayList(ClientInfo, 1);
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v31) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, 2) )
            __debugbreak();
        }
        currentServer = sharedUiInfo.serverStatus.currentServer;
        if ( sharedUiInfo.serverStatus.numDisplayServers > 0 )
          currentServer = 0;
        sharedUiInfo.serverStatus.currentServer = currentServer;
        LAN_GetServerInfo(sharedUiInfo.serverStatus.displayServers[0], info_1, 0x400ui64);
        goto LABEL_16;
      }
      if ( v18 != v19 )
      {
        v21 = v18 + 32;
        if ( (unsigned int)(v18 - 65) > 0x19 )
          v21 = v18;
        v18 = v21;
        v22 = v19 + 32;
        if ( (unsigned int)(v19 - 65) > 0x19 )
          v22 = v19;
        if ( v18 != v22 )
          break;
      }
      if ( !v18 )
        goto LABEL_26;
    }
    do
    {
      v24 = (unsigned __int8)out[v9];
      v25 = (unsigned __int8)aJoinserver[v9++];
      if ( !v7-- )
        break;
      if ( v24 != v25 )
      {
        v27 = v24 + 32;
        if ( (unsigned int)(v24 - 65) > 0x19 )
          v27 = v24;
        v24 = v27;
        v28 = v25 + 32;
        if ( (unsigned int)(v25 - 65) > 0x19 )
          v28 = v25;
        if ( v24 != v28 )
        {
          Com_PrintError(13, "unknown UI script %s in block:\n%s\n", out, actualScript);
          goto LABEL_16;
        }
      }
    }
    while ( v24 );
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") )
      Dvar_SetBool_Internal(DVARBOOL_systemlink_host, 0);
    Dvar_SetBoolByName("LQTTNORNQT", 0);
    UI_UpdateDisplayServers(ClientInfo);
    if ( sharedUiInfo.serverStatus.currentServer >= 0 && sharedUiInfo.serverStatus.currentServer < sharedUiInfo.serverStatus.numDisplayServers )
    {
      v29 = sharedUiInfo.serverStatus.displayServers[sharedUiInfo.serverStatus.currentServer];
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LAN_GetServerInfo(v29, info, 0x400ui64);
      if ( !LiveStorage_DoWeHaveStats(ControllerFromClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1041, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStats( controllerIndex ))", (const char *)&queryFormat, "LiveStorage_DoWeHaveStats( controllerIndex )") )
        __debugbreak();
      if ( LAN_GetLANPotentialHostInfo(v29, &pHostInfo) )
        Party_StartLANServerJoin(localClientNum, &pHostInfo);
      else
        Com_PrintError(13, "JoinServer : Index value out of range! [%d] doesn't index into [%d] servers in list!", v29, (unsigned int)cls.numlocalservers);
    }
  }
  else
  {
    Com_PrintWarning(13, "Empty uiScript command here: %s\n", actualScript);
  }
LABEL_16:
  bdSecurityKey::~bdSecurityKey(&pHostInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&pHostInfo.m_security.m_id);
}

/*
==============
UI_SafeLocalizeTextMessage
==============
*/
const char *UI_SafeLocalizeTextMessage(const char *reference)
{
  const char *v2; 

  v2 = SEH_LocalizeTextMessage(reference, "UI_SafeLocalizeTextMessage", LOCMSG_SAFE);
  return UI_CheckStringTranslation(reference, v2);
}

/*
==============
UI_SafeTranslateString
==============
*/
const char *UI_SafeTranslateString(const char *reference)
{
  const char *String; 

  if ( *reference == 31 )
    return UI_CheckStringTranslation(reference + 1, NULL);
  String = SEH_StringEd_GetString(reference);
  return UI_CheckStringTranslation(reference, String);
}

/*
==============
UI_ServersQsortCompare
==============
*/
int UI_ServersQsortCompare(const void *arg1, const void *arg2)
{
  return LAN_CompareServers(sharedUiInfo.serverStatus.sortKey, sharedUiInfo.serverStatus.sortDir, *(_DWORD *)arg1, *(_DWORD *)arg2);
}

/*
==============
UI_SetMap
==============
*/
void UI_SetMap(const char *mapname, const char *gametype)
{
  Core_strcpy(s_mapName, 0x40ui64, mapname);
  if ( *mapname )
  {
    Dvar_SetStringByName("NSQLTTMRMP", mapname);
    Dvar_SetStringByName("MOLPOSLOMO", gametype);
  }
}

/*
==============
UI_SetShowControllerRemovedPopup
==============
*/
void UI_SetShowControllerRemovedPopup(LocalClientNum_t localClientNum, bool shouldShow)
{
  g_showControllerRemovedPopup[localClientNum] = shouldShow;
}

/*
==============
UI_ShouldShowControllerRemovedPopup
==============
*/
_BOOL8 UI_ShouldShowControllerRemovedPopup(LocalClientNum_t currLocalClientNum)
{
  __int64 v1; 

  v1 = currLocalClientNum;
  if ( (unsigned int)currLocalClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 1650, ASSERT_TYPE_ASSERT, "( ( currLocalClientNum >= 0 && currLocalClientNum < 2 ) )", "( currLocalClientNum ) = %i", currLocalClientNum) )
    __debugbreak();
  return (unsigned int)v1 <= 1 && CL_IsLocalClientActive((LocalClientNum_t)v1) && g_showControllerRemovedPopup[v1];
}

/*
==============
UI_ShowAcceptInviteWarningForLeavingParty
==============
*/
void UI_ShowAcceptInviteWarningForLeavingParty(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  CL_Keys_SetCatcher(localClientNum, 64);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LUI_RestorePopup(ControllerFromClient, "acceptinvite_warning_for_leaving_party", 0, LUI_luaVM);
}

/*
==============
UI_ShowAcceptInviteWarningForMissingInvitablePrivilege
==============
*/
void UI_ShowAcceptInviteWarningForMissingInvitablePrivilege(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  CL_Keys_SetCatcher(localClientNum, 64);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LUI_RestorePopup(ControllerFromClient, "acceptinvite_warning_invitable_privilege_missing", 0, LUI_luaVM);
}

/*
==============
UI_StartServer
==============
*/
void UI_StartServer(LocalClientNum_t localClientNum, bool skipStartCountdown)
{
  const dvar_t *v3; 
  PartyData *ActiveParty; 

  if ( Live_IsInSystemlinkLobby() )
  {
    v3 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      Dvar_SetBool_Internal(DVARBOOL_systemlink_host, 1);
    Dvar_SetBoolByName("LQTTNORNQT", 0);
    ActiveParty = Party_GetActiveParty();
    PartyHost_RequestStartMatch(ActiveParty, skipStartCountdown);
  }
  else
  {
    Com_PrintError(13, "UI_StartServer: Must be in system link lobby to use this function\n");
  }
}

/*
==============
UI_StartServerRefresh
==============
*/
void UI_StartServerRefresh(LocalClientNum_t localClientNum, int full)
{
  __int64 v2; 
  int *p_realTime; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  p_realTime = &uiInfoArray[v2].uiDC.realTime;
  if ( full )
  {
    v5 = *p_realTime + 1000;
    sharedUiInfo.serverStatus.refreshActive = 1;
    sharedUiInfo.serverStatus.nextDisplayRefresh = v5;
    sharedUiInfo.serverStatus.numDisplayServers = 0;
    sharedUiInfo.serverStatus.numPlayersOnServers = 0;
    sharedUiInfo.serverStatus.serverCount = LAN_GetServerCount();
    LAN_MarkServerDirty(-1, 1);
    LAN_ResetPings();
    CL_MainMP_LocalServers((LocalClientNum_t)v2);
  }
  else
  {
    LAN_ResetPings();
    sharedUiInfo.serverStatus.refreshActive = 1;
  }
  sharedUiInfo.serverStatus.refreshtime = *p_realTime + 1000;
}

/*
==============
UI_TextHeight
==============
*/
__int64 UI_TextHeight(GfxFont *font, float scale)
{
  R_NormalizedTextScale(font, scale);
  R_TextHeight(font);
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  return (unsigned int)(int)*(float *)&_XMM3;
}

/*
==============
UI_TextWidth
==============
*/
__int64 UI_TextWidth(const char *text, int maxChars, GfxFont *font, float scale)
{
  double v7; 
  int v8; 

  v7 = R_NormalizedTextScale(font, scale);
  v8 = R_TextHeight(font);
  R_TextWidth(text, maxChars, font, (int)(float)((float)v8 * *(float *)&v7));
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
UI_TruncateEscapeCharacterTextWithEllipsis
==============
*/
const char *UI_TruncateEscapeCharacterTextWithEllipsis(const char *sourceString, GfxFont *font, float fontScale, int maxScreenWidth)
{
  char *v7; 
  char *v8; 
  const char *v9; 
  const char *v10; 
  char *v11; 
  const char *v12; 
  char v14[1024]; 
  char dest[1024]; 

  if ( !sourceString || !*sourceString || UI_TextWidth(sourceString, 0, font, fontScale) <= maxScreenWidth )
    return sourceString;
  Core_strcpy(dest, 0x400ui64, sourceString);
  v7 = dest;
  v8 = strchr_0(dest, 10);
  for ( v14[0] = 0; v8; v8 = strchr_0(v9, 10) )
  {
    v9 = v8 + 1;
    if ( !v8[1] )
      break;
    *v8 = 0;
    v10 = UI_TruncateTextWithEllipsis(v7, font, fontScale, maxScreenWidth);
    v11 = strrchr_0(v7, 94);
    if ( v11 )
      v10 = j_va("%s%c%c", v10, 94i64, (unsigned int)v11[1]);
    I_strcat(v14, 0x400ui64, v10);
    I_strcat(v14, 0x400ui64, "\n");
    v7 = (char *)v9;
  }
  v12 = UI_TruncateTextWithEllipsis(v7, font, fontScale, maxScreenWidth);
  return j_va("%s%s", v14, v12);
}

/*
==============
UI_TruncateTextWithEllipsis
==============
*/
const char *UI_TruncateTextWithEllipsis(const char *sourceString, GfxFont *font, float fontScale, int maxScreenWidth)
{
  int v7; 
  unsigned __int64 v8; 
  const char *String; 
  const char *v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  int v17; 
  const char *v18; 
  int v20; 

  if ( !sourceString )
    return sourceString;
  if ( !*sourceString )
    return sourceString;
  v7 = UI_TextWidth(sourceString, 0, font, fontScale);
  if ( v7 <= maxScreenWidth )
    return sourceString;
  v8 = -1i64;
  do
    ++v8;
  while ( sourceString[v8] );
  v20 = truncate_cast<int,unsigned __int64>(v8);
  String = SEH_StringEd_GetString("MENU/ELLIPSIS");
  v10 = UI_CheckStringTranslation("MENU/ELLIPSIS", String);
  v11 = (int)(float)((float)((float)(maxScreenWidth - UI_TextWidth(v10, 0, font, fontScale)) / (float)v7) * (float)v20);
  if ( v20 < v11 )
    v11 = v20;
  if ( v11 < 0 )
    v11 = 0;
  v12 = v11;
  do
  {
    v13 = v11;
    v11 = v12;
    v14 = j_va((const char *)&queryFormat, sourceString);
    v14[v12] = 0;
    v15 = j_va("%s%s", v14, v10);
    v16 = UI_TextWidth(v15, 0, font, fontScale);
    v17 = -1;
    if ( v16 <= maxScreenWidth )
      v17 = 1;
    v12 += v17;
    if ( v20 < v12 )
      v12 = v20;
    if ( v12 < 0 )
      v12 = 0;
    if ( v12 == v11 || v12 == v13 )
    {
      v18 = j_va((const char *)&queryFormat, sourceString);
      v18[v12] = 0;
      v15 = j_va("%s%s", v18, v10);
    }
  }
  while ( v12 != v11 && v12 != v13 );
  return v15;
}

/*
==============
UI_UpdateDisplayServers
==============
*/
void UI_UpdateDisplayServers(uiInfo_t *uiInfo)
{
  int ServerCount; 

  ServerCount = LAN_GetServerCount();
  if ( sharedUiInfo.serverStatus.serverCount != ServerCount )
  {
    sharedUiInfo.serverStatus.serverCount = ServerCount;
    if ( sharedUiInfo.serverStatus.numDisplayServers )
    {
      sharedUiInfo.serverStatus.currentServer = 0;
      UI_BuildServerDisplayList(uiInfo, 1);
    }
  }
}

/*
==============
UI_UpdateTime
==============
*/
void UI_UpdateTime(LocalClientNum_t localClientNum, int realtime)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui_mp\\ui_main_mp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  uiInfoArray[v2].uiDC.realTime = realtime;
}

