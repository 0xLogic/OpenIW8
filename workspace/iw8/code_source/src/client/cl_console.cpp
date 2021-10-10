/*
==============
Con_IsActive
==============
*/

bool __fastcall Con_IsActive(LocalClientNum_t localClientNum)
{
  return ?Con_IsActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Con_TokenizeInput
==============
*/

const char *__fastcall Con_TokenizeInput()
{
  return ?Con_TokenizeInput@@YAPEBDXZ();
}

/*
==============
Con_ToggleConsoleOutput
==============
*/

void Con_ToggleConsoleOutput(void)
{
  ?Con_ToggleConsoleOutput@@YAXXZ();
}

/*
==============
Con_Top
==============
*/

void Con_Top(void)
{
  ?Con_Top@@YAXXZ();
}

/*
==============
Con_ServerTimeJumped
==============
*/

void __fastcall Con_ServerTimeJumped(LocalClientNum_t localClientNum, int serverTime)
{
  ?Con_ServerTimeJumped@@YAXW4LocalClientNum_t@@H@Z(localClientNum, serverTime);
}

/*
==============
Con_IsGameMessageWindowActive
==============
*/

bool __fastcall Con_IsGameMessageWindowActive(LocalClientNum_t localClientNum, int windowIndex)
{
  return ?Con_IsGameMessageWindowActive@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, windowIndex);
}

/*
==============
Con_IsAutoCompleteMatch
==============
*/

bool __fastcall Con_IsAutoCompleteMatch(const char *query, const char *matchToText, int matchTextLen)
{
  return ?Con_IsAutoCompleteMatch@@YA_NPEBD0H@Z(query, matchToText, matchTextLen);
}

/*
==============
Con_ClearErrors
==============
*/

void __fastcall Con_ClearErrors(LocalClientNum_t localClientNum)
{
  ?Con_ClearErrors@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Con_DrawMiniConsole
==============
*/

void __fastcall Con_DrawMiniConsole(LocalClientNum_t localClientNum, int xPos, int yPos, float alpha)
{
  ?Con_DrawMiniConsole@@YAXW4LocalClientNum_t@@HHM@Z(localClientNum, xPos, yPos, alpha);
}

/*
==============
Con_HasActiveAutoComplete
==============
*/

bool __fastcall Con_HasActiveAutoComplete()
{
  return ?Con_HasActiveAutoComplete@@YA_NXZ();
}

/*
==============
CL_ConsoleFixPosition
==============
*/

void CL_ConsoleFixPosition(void)
{
  ?CL_ConsoleFixPosition@@YAXXZ();
}

/*
==============
Con_CommitToAutoComplete
==============
*/

bool __fastcall Con_CommitToAutoComplete()
{
  return ?Con_CommitToAutoComplete@@YA_NXZ();
}

/*
==============
Con_InitMessageBuffer
==============
*/

void Con_InitMessageBuffer(void)
{
  ?Con_InitMessageBuffer@@YAXXZ();
}

/*
==============
Con_InitConfig
==============
*/

void __fastcall Con_InitConfig(const LocalClientNum_t localClientNum, const char *config)
{
  ?Con_InitConfig@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, config);
}

/*
==============
Con_OpenConsole
==============
*/

void __fastcall Con_OpenConsole(LocalClientNum_t localClientNum)
{
  ?Con_OpenConsole@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Con_DrawGameMessageWindow
==============
*/

void __fastcall Con_DrawGameMessageWindow(LocalClientNum_t localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, GfxFont *font, float fontScale, const vec4_t *color, int textStyle, int textAlignMode, msgwnd_mode_t mode)
{
  ?Con_DrawGameMessageWindow@@YAXW4LocalClientNum_t@@HHHHHPEAUGfxFont@@MAEBTvec4_t@@HHW4msgwnd_mode_t@@@Z(localClientNum, windowIndex, xPos, yPos, horzAlign, vertAlign, font, fontScale, color, textStyle, textAlignMode, mode);
}

/*
==============
Con_ToggleConsole
==============
*/

void Con_ToggleConsole(void)
{
  ?Con_ToggleConsole@@YAXXZ();
}

/*
==============
Con_CloseConsole
==============
*/

void __fastcall Con_CloseConsole(LocalClientNum_t localClientNum)
{
  ?Con_CloseConsole@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Con_AnySpaceAfterCommand
==============
*/

bool __fastcall Con_AnySpaceAfterCommand()
{
  return ?Con_AnySpaceAfterCommand@@YA_NXZ();
}

/*
==============
Con_IsValidGameMessageWindow
==============
*/

bool __fastcall Con_IsValidGameMessageWindow(int windowIndex)
{
  return ?Con_IsValidGameMessageWindow@@YA_NH@Z(windowIndex);
}

/*
==============
Con_SetServerTime
==============
*/

void __fastcall Con_SetServerTime(LocalClientNum_t localClientNum, int serverTime)
{
  ?Con_SetServerTime@@YAXW4LocalClientNum_t@@H@Z(localClientNum, serverTime);
}

/*
==============
Con_ClearNotify
==============
*/

void __fastcall Con_ClearNotify(LocalClientNum_t localClientNum)
{
  ?Con_ClearNotify@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_PlayTextFXPulseSounds
==============
*/

void __fastcall CL_PlayTextFXPulseSounds(LocalClientNum_t localClientNum, int currentTime, int strLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int *soundTimeKeeper)
{
  ?CL_PlayTextFXPulseSounds@@YAXW4LocalClientNum_t@@HHHHHPEAH@Z(localClientNum, currentTime, strLength, fxBirthTime, fxLetterTime, fxDecayStartTime, soundTimeKeeper);
}

/*
==============
Con_InitClientAssets
==============
*/

void Con_InitClientAssets(void)
{
  ?Con_InitClientAssets@@YAXXZ();
}

/*
==============
Con_PageDown
==============
*/

void Con_PageDown(void)
{
  ?Con_PageDown@@YAXXZ();
}

/*
==============
Con_Linefeed
==============
*/

void __fastcall Con_Linefeed(LocalClientNum_t localClientNum, int channel, int flags)
{
  ?Con_Linefeed@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, channel, flags);
}

/*
==============
Con_ShutdownClientAssets
==============
*/

void Con_ShutdownClientAssets(void)
{
  ?Con_ShutdownClientAssets@@YAXXZ();
}

/*
==============
Con_OpenConsoleOutput
==============
*/

void __fastcall Con_OpenConsoleOutput(LocalClientNum_t localClientNum)
{
  ?Con_OpenConsoleOutput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ConsolePrint
==============
*/

void __fastcall CL_ConsolePrint(LocalClientNum_t localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags)
{
  ?CL_ConsolePrint@@YAXW4LocalClientNum_t@@HPEBDHHH@Z(localClientNum, channel, txt, duration, pixelWidth, flags);
}

/*
==============
Con_DrawErrors
==============
*/

void __fastcall Con_DrawErrors(LocalClientNum_t localClientNum, int xPos, int yPos, int charHeight, float alpha)
{
  ?Con_DrawErrors@@YAXW4LocalClientNum_t@@HHHM@Z(localClientNum, xPos, yPos, charHeight, alpha);
}

/*
==============
Con_Bottom
==============
*/

void Con_Bottom(void)
{
  ?Con_Bottom@@YAXXZ();
}

/*
==============
Con_InitDvars
==============
*/

void Con_InitDvars(void)
{
  ?Con_InitDvars@@YAXXZ();
}

/*
==============
Con_CancelAutoComplete
==============
*/

bool __fastcall Con_CancelAutoComplete()
{
  return ?Con_CancelAutoComplete@@YA_NXZ();
}

/*
==============
Con_HasTooManyMatchesToShow
==============
*/

bool __fastcall Con_HasTooManyMatchesToShow()
{
  return ?Con_HasTooManyMatchesToShow@@YA_NXZ();
}

/*
==============
Con_CycleAutoComplete
==============
*/

bool __fastcall Con_CycleAutoComplete(int step)
{
  return ?Con_CycleAutoComplete@@YA_NH@Z(step);
}

/*
==============
Con_Close
==============
*/

void __fastcall Con_Close(LocalClientNum_t localClientNum)
{
  ?Con_Close@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Con_Init
==============
*/

void Con_Init(void)
{
  ?Con_Init@@YAXXZ();
}

/*
==============
Con_AllowAutoCompleteCycling
==============
*/

void __fastcall Con_AllowAutoCompleteCycling(bool isAllowed)
{
  ?Con_AllowAutoCompleteCycling@@YAX_N@Z(isAllowed);
}

/*
==============
Con_OneTimeInit
==============
*/

void Con_OneTimeInit(void)
{
  ?Con_OneTimeInit@@YAXXZ();
}

/*
==============
Con_GetTextCopy
==============
*/

void __fastcall Con_GetTextCopy(char *text, int maxSize)
{
  ?Con_GetTextCopy@@YAXPEADH@Z(text, maxSize);
}

/*
==============
Con_AutoCompleteFromList
==============
*/

void __fastcall Con_AutoCompleteFromList(const char *const *strings, unsigned int stringCount, const char *prefix, char *completed, unsigned int sizeofCompleted)
{
  ?Con_AutoCompleteFromList@@YAXQEBQEBDIPEBDQEADI@Z(strings, stringCount, prefix, completed, sizeofCompleted);
}

/*
==============
Con_Shutdown
==============
*/

void Con_Shutdown(void)
{
  ?Con_Shutdown@@YAXXZ();
}

/*
==============
Con_IsDvarCommand
==============
*/

bool __fastcall Con_IsDvarCommand(const char *cmd)
{
  return ?Con_IsDvarCommand@@YA_NPEBD@Z(cmd);
}

/*
==============
Con_PageUp
==============
*/

void Con_PageUp(void)
{
  ?Con_PageUp@@YAXXZ();
}

/*
==============
Con_DrawConsole
==============
*/

void __fastcall Con_DrawConsole(LocalClientNum_t localClientNum)
{
  ?Con_DrawConsole@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ConsoleFixPosition
==============
*/
void CL_ConsoleFixPosition(void)
{
  const dvar_t *v0; 
  scrContext_t *v1; 
  _DebugMessage message; 
  _ConsoleFixPos v3; 

  v0 = DVARBOOL_cl_noprint;
  com_fixedConsolePosition = 1;
  if ( DVARBOOL_cl_noprint )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_cl_noprint);
    if ( !v0->current.enabled )
    {
      if ( DVARBOOL_cl_lessprint )
        Dvar_CheckFrontendServerThread(DVARBOOL_cl_lessprint);
      Sys_EnterCriticalSection(CRITSECT_CONSOLE);
      if ( Con_IsChannelOpen(0) )
        CL_ConsolePrint_AddLine(LOCAL_CLIENT_0, 0, "\n", 0, 0, 55, 0);
      Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
    }
  }
  con.displayLineOffset = con.consoleWindow.activeLineCount - 1;
  v1 = ScriptContext_Server();
  if ( Sys_IsRemoteDebugServer(v1) )
  {
    if ( Sys_DebugSocketReady(v1) )
    {
      _DebugMessage::_DebugMessage(&message);
      _ConsoleFixPos::_ConsoleFixPos(&v3);
      message.debug_message_case = DEBUG_MESSAGE__DEBUG_MESSAGE_CONSOLE_FIX_POS;
      message.scrreadfile = (const _ScrReadFile *)&v3;
      Sys_WriteDebugSocketMessage(v1, &message);
    }
  }
}

/*
==============
CL_ConsolePrint
==============
*/
void CL_ConsolePrint(LocalClientNum_t localClientNum, int channel, const char *txt, int duration, int pixelWidth, int flags)
{
  const dvar_t *v10; 
  const dvar_t *v11; 
  __int64 v12; 

  if ( !txt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1115, ASSERT_TYPE_ASSERT, "(txt)", (const char *)&queryFormat, "txt") )
    __debugbreak();
  v10 = DVARBOOL_cl_noprint;
  if ( DVARBOOL_cl_noprint && (Dvar_CheckFrontendServerThread(DVARBOOL_cl_noprint), !v10->current.enabled) || channel == 4 )
  {
    v11 = DVARBOOL_cl_lessprint;
    if ( DVARBOOL_cl_lessprint && (Dvar_CheckFrontendServerThread(DVARBOOL_cl_lessprint), v11->current.enabled) )
    {
      if ( channel == 6 || channel == 26 )
        return;
    }
    else if ( channel == 6 )
    {
      return;
    }
    Sys_EnterCriticalSection(CRITSECT_CONSOLE);
    if ( s_dontAllowNewErrors && channel == 1 )
    {
      Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
      return;
    }
    if ( Con_IsChannelOpen(channel) )
      CL_ConsolePrint_AddLine(localClientNum, channel, txt, duration, pixelWidth, 55, flags);
    Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
    if ( channel == 5 )
    {
      NET_RemoteDbgHostWriteToLog(5, "(Obituary) ");
    }
    else if ( (unsigned int)(channel - 2) <= 2 )
    {
LABEL_22:
      NET_RemoteDbgHostWriteToLog(channel, txt);
      v12 = -1i64;
      do
        ++v12;
      while ( txt[v12] );
      if ( !v12 || txt[v12 - 1] != 10 )
        NET_RemoteDbgHostWriteToLog(channel, "\n");
      return;
    }
    if ( channel != 5 )
      return;
    goto LABEL_22;
  }
}

/*
==============
CL_ConsolePrint_AddLine
==============
*/
__int64 CL_ConsolePrint_AddLine(LocalClientNum_t localClientNum, int channel, const char *txt, int duration, int pixelWidth, char color, int flags)
{
  __int64 result; 
  print_msg_dest_t i; 
  const dvar_t *v13; 
  int v14; 
  GfxFont *FontHandle; 
  double v16; 
  float v17; 
  ClActiveClient *Client; 
  int v19; 
  double v20; 
  int visiblePixelWidth; 
  float v22; 
  int v25; 
  int IsRightToLeft; 
  __int64 v27; 
  TextLine *v29; 
  const char *textLeft; 
  const char *textRight; 
  unsigned __int64 v32; 
  int v33; 
  __int64 tracking; 
  __int64 leftToRight; 
  TextLine *outLines; 
  char colorEscape; 
  unsigned __int8 v38; 
  int outLineCount; 
  __int64 v40; 
  TextLine v41; 
  char output[512]; 

  if ( !txt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 966, ASSERT_TYPE_ASSERT, "(txt)", (const char *)&queryFormat, "txt") )
    __debugbreak();
  if ( (unsigned __int8)(color - 39) > 0x17u )
  {
    LODWORD(tracking) = color;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 967, ASSERT_TYPE_ASSERT, "( ((unsigned char) 39 ) ) <= ( color ) && ( color ) <= ( ( (unsigned char)'>' ) )", "color not in [COLOR_FIRST, COLOR_LAST]\n\t%i not in [%i, %i]", tracking, 39, 62) )
      __debugbreak();
  }
  if ( !Con_IsChannelOpen(channel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 968, ASSERT_TYPE_ASSERT, "(Con_IsChannelOpen( channel ))", (const char *)&queryFormat, "Con_IsChannelOpen( channel )") )
    __debugbreak();
  if ( callDepth )
    return (unsigned __int8)color;
  callDepth = 1;
  if ( !Con_IsChannelOpen(channel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 820, ASSERT_TYPE_ASSERT, "(Con_IsChannelOpen( channel ))", (const char *)&queryFormat, "Con_IsChannelOpen( channel )") )
    __debugbreak();
  Con_UpdateNotifyMessageWindow(localClientNum, channel, duration, flags, CON_DEST_MINICON);
  for ( i = CON_DEST_GAME_FIRST; (unsigned int)i <= CON_DEST_GAME4; ++i )
    Con_UpdateNotifyMessageWindow(localClientNum, channel, duration, flags, i);
  v13 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
    Con_UpdateNotifyMessageWindow(localClientNum, channel, duration, flags, CON_DEST_ERROR);
  if ( channel != con.prevChannel && con.lineOffset )
    Con_Linefeed(localClientNum, con.prevChannel, flags);
  v14 = 0;
  if ( channel == 4 )
  {
    FontHandle = UI_GetFontHandle(&scrPlaceFull, 8, 0.375);
    v16 = R_NormalizedTextScale(FontHandle, 0.375);
    v17 = *(float *)&v16;
LABEL_35:
    visiblePixelWidth = pixelWidth;
    if ( !pixelWidth )
      visiblePixelWidth = con.visiblePixelWidth;
    if ( FontHandle )
    {
      v22 = (float)FontHandle->pixelHeight * v17;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v25 = (int)*(float *)&_XMM4;
      IsRightToLeft = Language_IsRightToLeft();
      R_Font_WordWrap(txt, (float)visiblePixelWidth, FontHandle, v25, v22 / (float)v25, 0, 512, IsRightToLeft == 0, &v41, &outLineCount);
    }
    else
    {
      memset_0(&v41.pixelWidth + 1, 0, 0x2FECui64);
      v27 = -1i64;
      v41.textLeft = txt;
      while ( txt[++v27] != 0 )
        ;
      outLineCount = 1;
      v41.pixelWidth = 0.0;
      v41.textRight = &txt[v27 - 1];
    }
    colorEscape = 0;
    v38 = color;
    if ( outLineCount > 512 )
    {
      LODWORD(outLines) = 512;
      LODWORD(leftToRight) = outLineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1049, ASSERT_TYPE_ASSERT, "( numLines ) <= ( MAX_LINES )", "%s <= %s\n\t%i, %i", "numLines", "MAX_LINES", leftToRight, outLines) )
        __debugbreak();
    }
    if ( outLineCount > 0 )
    {
      v29 = &v41;
      do
      {
        if ( (!v29->textLeft || !v29->textRight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1053, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
          __debugbreak();
        textLeft = v29->textLeft;
        if ( v29->textLeft )
        {
          textRight = v29->textRight;
          if ( textRight )
          {
            if ( textLeft <= textRight )
            {
              R_PrepareTextLine(textLeft, textRight - textLeft + 1, output, 512, 1, &colorEscape);
              Core_strcpy(con.textTempLine, 0x200ui64, output);
              v40 = 512i64;
              v32 = -1i64;
              do
                ++v32;
              while ( output[v32] );
              v33 = 512;
              if ( v32 < 0x200 )
                v33 = v32;
              con.lineOffset += v33;
              Con_Linefeed(localClientNum, channel, flags);
            }
          }
        }
        ++v14;
        ++v29;
      }
      while ( v14 < outLineCount );
    }
    result = v38;
    con.prevChannel = channel;
    goto LABEL_61;
  }
  if ( channel == 7 )
  {
    FontHandle = NULL;
LABEL_34:
    v17 = FLOAT_1_0;
    goto LABEL_35;
  }
  if ( (unsigned int)(channel - 2) > 1 )
  {
    FontHandle = cls.consoleFont;
    goto LABEL_34;
  }
  if ( CL_GetLocalClientGameConnectionState(localClientNum) >= CA_CONNECTED )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    v19 = Client->GetHudMsgCharHeight(Client);
    FontHandle = cls.consoleFont;
    v20 = R_NormalizedTextScale(cls.consoleFont, (float)v19 * 0.020833334);
    v17 = *(float *)&v20;
    goto LABEL_35;
  }
  result = (unsigned __int8)color;
LABEL_61:
  --callDepth;
  return result;
}

/*
==============
CL_PlayTextFXPulseSounds
==============
*/
void CL_PlayTextFXPulseSounds(LocalClientNum_t localClientNum, int currentTime, int strLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int *soundTimeKeeper)
{
  int v7; 
  int v8; 
  LocalClientNum_t v10; 
  int v11; 
  int v12; 
  const char *v13; 

  v7 = fxLetterTime * strLength;
  v8 = fxDecayStartTime;
  v10 = localClientNum;
  v11 = *soundTimeKeeper - fxBirthTime;
  if ( fxDecayStartTime < v7 )
    v8 = v7;
  v12 = currentTime - fxBirthTime;
  if ( currentTime - fxBirthTime >= 0 )
  {
    if ( v12 > v8 )
    {
      if ( v11 >= v8 )
        return;
      v13 = "ui_pulse_text_delete";
      goto LABEL_13;
    }
    if ( v12 < v7 )
    {
      if ( !fxLetterTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2832, ASSERT_TYPE_ASSERT, "(fxLetterTime)", (const char *)&queryFormat, "fxLetterTime") )
        __debugbreak();
      if ( v11 < v12 - v12 % fxLetterTime )
      {
        v13 = "ui_pulse_text_type";
        localClientNum = v10;
LABEL_13:
        SND_PlayLocalSoundAliasAsync(localClientNum, v13, SASYS_CGAME);
        *soundTimeKeeper = currentTime;
      }
    }
  }
}

/*
==============
ConDrawInput_AutoCompleteArg
==============
*/
void ConDrawInput_AutoCompleteArg(const char *const *stringList, int stringCount)
{
  __int128 v2; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  char **v10; 
  const char *v11; 
  __int64 v12; 
  signed __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  const char *v20; 
  __int64 v21; 
  int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  GfxFont *consoleFont; 
  char *buffer; 
  int v30; 
  char *v31; 
  int v32; 
  char *v33; 
  int v34; 
  int v35; 
  const dvar_t *v36; 
  float v37; 
  float v38; 
  float v39; 
  const char *v40; 
  float y; 
  float x; 
  int v43; 
  int v44; 
  int v45; 
  __int64 v47; 
  vec4_t color; 
  __int64 Base[160]; 
  __int128 v50; 

  v3 = stringCount;
  if ( Cmd_Argc() < 2 )
  {
    v5 = (char *)&queryFormat.fmt + 3;
    v6 = 0i64;
  }
  else
  {
    v4 = Cmd_Argv(1);
    v5 = v4;
    v6 = -1i64;
    do
      ++v6;
    while ( v4[v6] );
  }
  v44 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0i64;
  v47 = v3;
  if ( (int)v3 <= 0 )
    return;
  v9 = 0i64;
  v10 = (char **)Base;
  do
  {
    if ( v6 )
    {
      v11 = stringList[v9];
      v12 = v6;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = v5 - v11;
      while ( 1 )
      {
        v14 = (unsigned __int8)v11[v13];
        v15 = v12;
        v16 = *(unsigned __int8 *)v11++;
        --v12;
        if ( !v15 )
        {
LABEL_24:
          v7 = v44;
          goto LABEL_25;
        }
        if ( v14 != v16 )
        {
          v17 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          v18 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v18 = v16;
          if ( v14 != v18 )
            break;
        }
        if ( !v14 )
          goto LABEL_24;
      }
      v7 = v44;
      goto LABEL_41;
    }
LABEL_25:
    if ( v7 == 32 )
      break;
    v19 = -1i64;
    do
      ++v19;
    while ( stringList[v9][v19] );
    if ( v8 + v19 >= 0x400 )
      break;
    *v10 = (char *)&Base[32] + v8;
    if ( v8 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1589, ASSERT_TYPE_ASSERT, "(matchBufferUsed <= sizeof( matchBuffer ))", (const char *)&queryFormat, "matchBufferUsed <= sizeof( matchBuffer )") )
      __debugbreak();
    Com_CopyAndStripExtension(*v10, 1024 - v8, stringList[v9]);
    v20 = *v10;
    v21 = -1i64;
    while ( v20[++v21] != 0 )
      ;
    v8 += v21 + 1;
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1274, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    v23 = R_TextWidth(v20, 0, cls.consoleFont);
    v24 = v45;
    if ( v45 < v23 )
      v24 = v23;
    v44 = ++v7;
    ++v10;
    v45 = v24;
LABEL_41:
    ++v9;
  }
  while ( v9 < v47 );
  v25 = 0i64;
  if ( v7 )
  {
    v26 = v7;
    v50 = v2;
    qsort(Base, v7, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)ConDrawInput_CompareStrings);
    v27 = 0;
    consoleFont = cls.consoleFont;
    if ( isspace(g_consoleField.buffer[0]) )
    {
      buffer = g_consoleField.buffer;
      do
      {
        v30 = *++buffer;
        ++v27;
      }
      while ( isspace(v30) );
    }
    v31 = &g_consoleField.buffer[v27];
    if ( !isspace(*v31) )
    {
      do
      {
        v32 = *++v31;
        ++v27;
      }
      while ( !isspace(v32) );
    }
    v33 = &g_consoleField.buffer[v27];
    if ( isspace(*v33) )
    {
      do
      {
        v34 = *++v33;
        ++v27;
      }
      while ( isspace(v34) );
    }
    v35 = R_TextWidth(g_consoleField.buffer, v27, consoleFont);
    v36 = DVARVEC4_con_inputHintBoxColor;
    v37 = (float)((float)v35 + conDrawInputGlob.leftX) - 2.0;
    v38 = (float)(conDrawInputGlob.fontHeight + con.screenMin.v[1]) + 2.0;
    v39 = (float)((float)v44 * conDrawInputGlob.fontHeight) + 4.0;
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    color = v36->current.vector;
    ConDraw_Box(v37, v38, (float)v45 + 4.0, v39, &color);
    conDrawInputGlob.x = v37 + 2.0;
    conDrawInputGlob.y = v38 + 2.0;
    conDrawInputGlob.leftX = v37 + 2.0;
    if ( v26 > 0 )
    {
      do
      {
        v40 = (const char *)Base[v25];
        if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1281, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
          __debugbreak();
        y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
        x = conDrawInputGlob.x;
        v43 = R_TextHeight(cls.consoleFont);
        R_AddCmdDrawText(v40, 0x7FFFFFFF, cls.consoleFont, v43, x, y, 1.0, 1.0, 0.0, &con_inputDvarInfoColor);
        ++v25;
        conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
        conDrawInputGlob.x = conDrawInputGlob.leftX;
      }
      while ( v25 < v26 );
    }
  }
}

/*
==============
ConDrawInput_CmdMatch
==============
*/
void ConDrawInput_CmdMatch(const char *str)
{
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1764, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) )
  {
    ConDrawInput_Text(str, &con_inputCommandMatchColor);
    conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
  }
}

/*
==============
ConDrawInput_CompareStrings
==============
*/
int ConDrawInput_CompareStrings(const void *e0, const void *e1)
{
  return I_strnicmp(*(const char **)e0, *(const char **)e1, 0x7FFFFFFFui64);
}

/*
==============
ConDrawInput_DetailedCmdMatch
==============
*/
void ConDrawInput_DetailedCmdMatch(const char *str)
{
  const dvar_t *v2; 
  char **stringList[2]; 
  CmdAutoCompleteResults result; 
  vec4_t color; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1739, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) && (!conDrawInputGlob.hasExactMatch || !str[conDrawInputGlob.inputTextLen]) )
  {
    v2 = DVARVEC4_con_inputHintBoxColor;
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    color = v2->current.vector;
    ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), conDrawInputGlob.fontHeight + 4.0, &color);
    ConDrawInput_Text(str, &con_inputCommandMatchColor);
    conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
    _XMM0 = (__int128)*Cmd_GetAutoCompleteParameters(&result, str, "ConDrawInput_DetailedCmdMatch");
    __asm { vpextrd rdx, xmm0, 2; stringCount }
    *(_OWORD *)stringList = _XMM0;
    if ( (int)_RDX > 0 )
      ConDrawInput_AutoCompleteArg((const char *const *)stringList[0], _RDX);
    Cmd_ReleaseAutoCompleteParameters((const CmdAutoCompleteResults *)stringList);
  }
}

/*
==============
ConDrawInput_DetailedDvarMatch
==============
*/
void ConDrawInput_DetailedDvarMatch(const char *str)
{
  const dvar_t *VarByName; 
  bool HasLatchedValue; 
  const dvar_t *v4; 
  int v5; 
  bool v6; 
  const char *v11; 
  float fontHeight; 
  float v13; 
  float v14; 
  float leftX; 
  float y; 
  int v17; 
  const char *v18; 
  int v19; 
  const char *v20; 
  const char *description; 
  unsigned __int64 v22; 
  int v23; 
  unsigned __int64 i; 
  int v25; 
  const char *v26; 
  float v27; 
  __int128 y_low; 
  unsigned int v29; 
  __int128 v30; 
  __int128 fontHeight_low; 
  __int64 v32; 
  __int128 v33; 
  __int64 v34; 
  __int128 v35; 
  float x; 
  float v37; 
  int v38; 
  int outLineCount; 
  vec4_t color; 
  char outBuffer[1024]; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1656, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) && (!conDrawInputGlob.hasExactMatch || !str[conDrawInputGlob.inputTextLen]) )
  {
    if ( isalpha(*str) || (VarByName = Dvar_FindVarByChecksumString(str)) == NULL )
    {
      VarByName = Dvar_FindVarByName(str);
      if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1674, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
    }
    HasLatchedValue = Dvar_HasLatchedValue(VarByName);
    v4 = DVARVEC4_con_inputHintBoxColor;
    v5 = 0;
    v6 = HasLatchedValue;
    _XMM0 = HasLatchedValue;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM0 = LODWORD(FLOAT_3_0);
    __asm { vblendvps xmm1, xmm0, xmm7, xmm2 }
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    color = v4->current.vector;
    ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), (float)(conDrawInputGlob.fontHeight * *(float *)&_XMM1) + 4.0, &color);
    ConDrawInput_TextLimitChars(str, 64, &con_inputDvarMatchColor);
    conDrawInputGlob.x = conDrawInputGlob.x + 650.0;
    v11 = Dvar_DisplayableValue(VarByName);
    ConDrawInput_TextLimitChars(v11, 40, &con_inputDvarValueColor);
    fontHeight = conDrawInputGlob.fontHeight;
    v14 = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
    v13 = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
    leftX = conDrawInputGlob.leftX;
    conDrawInputGlob.y = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
    if ( v6 )
    {
      y = v14 + conDrawInputGlob.fontHeight;
      v17 = R_TextHeight(cls.consoleFont);
      R_AddCmdDrawText("  latched value", 0x7FFFFFFF, cls.consoleFont, v17, leftX, y, 1.0, 1.0, 0.0, &con_inputDvarInactiveValueColor);
      conDrawInputGlob.x = conDrawInputGlob.x + 650.0;
      v18 = Dvar_DisplayableLatchedValue(VarByName);
      ConDrawInput_TextLimitChars(v18, 40, &con_inputDvarInactiveValueColor);
      fontHeight = conDrawInputGlob.fontHeight;
      v13 = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
      leftX = conDrawInputGlob.leftX;
      conDrawInputGlob.y = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
      conDrawInputGlob.x = conDrawInputGlob.leftX;
    }
    v19 = R_TextHeight(cls.consoleFont);
    R_AddCmdDrawText("  default", 0x7FFFFFFF, cls.consoleFont, v19, leftX, fontHeight + v13, 1.0, 1.0, 0.0, &con_inputDvarInactiveValueColor);
    conDrawInputGlob.x = conDrawInputGlob.x + 650.0;
    v20 = Dvar_DisplayableResetValue(VarByName);
    ConDrawInput_TextLimitChars(v20, 40, &con_inputDvarInactiveValueColor);
    conDrawInputGlob.y = (float)(conDrawInputGlob.fontHeight + conDrawInputGlob.y) + conDrawInputGlob.fontHeight;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
    Dvar_DomainToString_GetLines(VarByName, outBuffer, 0x400ui64, &outLineCount);
    description = VarByName->description;
    if ( description )
    {
      v22 = -1i64;
      do
        ++v22;
      while ( description[v22] );
      v23 = 1;
      for ( i = 0i64; i < v22; v23 = v25 )
      {
        v25 = v23 + 1;
        if ( description[i] != 10 )
          v25 = v23;
        ++i;
      }
    }
    else
    {
      v23 = 0;
    }
    ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), (float)((float)(v23 + outLineCount + 1) * conDrawInputGlob.fontHeight) + 4.0, &color);
    v26 = VarByName->description;
    if ( v26 )
    {
      ConDrawInput_Text(v26, &con_inputDvarDescriptionColor);
      v27 = conDrawInputGlob.fontHeight;
      y_low = LODWORD(conDrawInputGlob.y);
      if ( v23 >= 8 )
      {
        v29 = ((unsigned int)(v23 - 8) >> 3) + 1;
        fontHeight_low = LODWORD(conDrawInputGlob.fontHeight);
        *(float *)&fontHeight_low = conDrawInputGlob.fontHeight * 2.0;
        v30 = fontHeight_low;
        v32 = v29;
        v5 = 8 * v29;
        do
        {
          v33 = v30;
          *(float *)&v33 = (float)((float)((float)((float)((float)((float)(*(float *)&v30 + *(float *)&y_low) + conDrawInputGlob.fontHeight) + conDrawInputGlob.fontHeight) + conDrawInputGlob.fontHeight) + conDrawInputGlob.fontHeight) + conDrawInputGlob.fontHeight) + conDrawInputGlob.fontHeight;
          y_low = v33;
          conDrawInputGlob.x = conDrawInputGlob.leftX;
          --v32;
        }
        while ( v32 );
        conDrawInputGlob.y = *(float *)&v33;
      }
      if ( v5 < v23 )
      {
        v34 = (unsigned int)(v23 - v5);
        do
        {
          conDrawInputGlob.x = conDrawInputGlob.leftX;
          v35 = y_low;
          *(float *)&v35 = *(float *)&y_low + conDrawInputGlob.fontHeight;
          y_low = v35;
          --v34;
        }
        while ( v34 );
        conDrawInputGlob.y = *(float *)&v35;
      }
    }
    else
    {
      v27 = conDrawInputGlob.fontHeight;
      *(float *)&y_low = conDrawInputGlob.y;
    }
    x = conDrawInputGlob.x;
    v37 = v27 + *(float *)&y_low;
    v38 = R_TextHeight(cls.consoleFont);
    R_AddCmdDrawText(outBuffer, 0x7FFFFFFF, cls.consoleFont, v38, x, v37, 1.0, 1.0, 0.0, &con_inputDvarInfoColor);
    conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
    if ( VarByName->type == 8 && Cmd_Argc() == 2 )
      ConDrawInput_AutoCompleteArg(VarByName->domain.enumeration.strings, VarByName->domain.enumeration.stringCount);
  }
}

/*
==============
ConDrawInput_DvarMatch
==============
*/
void ConDrawInput_DvarMatch(const char *str)
{
  const char *VariantString; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1510, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) )
  {
    ConDrawInput_TextLimitChars(str, 64, &con_inputDvarMatchColor);
    conDrawInputGlob.x = conDrawInputGlob.x + 650.0;
    VariantString = Dvar_GetVariantString(str);
    ConDrawInput_TextLimitChars(VariantString, 40, &con_inputDvarValueColor);
    conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
    conDrawInputGlob.x = conDrawInputGlob.leftX;
  }
}

/*
==============
ConDrawInput_IncrMatchCounter
==============
*/
void ConDrawInput_IncrMatchCounter(const char *str)
{
  int matchCount; 
  bool hasExactMatch; 

  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) )
  {
    matchCount = conDrawInputGlob.matchCount;
    if ( conDrawInputGlob.matchCount == conDrawInputGlob.matchIndex )
    {
      Core_strcpy(conDrawInputGlob.autoCompleteChoice, 0x40ui64, str);
      matchCount = conDrawInputGlob.matchCount;
    }
    hasExactMatch = conDrawInputGlob.hasExactMatch;
    conDrawInputGlob.matchCount = matchCount + 1;
    if ( !str[conDrawInputGlob.inputTextLen] )
      hasExactMatch = 1;
    conDrawInputGlob.hasExactMatch = hasExactMatch;
  }
}

/*
==============
ConDrawInput_Text
==============
*/
void ConDrawInput_Text(const char *str, const vec4_t *color)
{
  float y; 
  float x; 
  int v6; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1281, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  y = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
  x = conDrawInputGlob.x;
  v6 = R_TextHeight(cls.consoleFont);
  R_AddCmdDrawText(str, 0x7FFFFFFF, cls.consoleFont, v6, x, y, 1.0, 1.0, 0.0, color);
}

/*
==============
ConDrawInput_TextLimitChars
==============
*/
void ConDrawInput_TextLimitChars(const char *str, int maxChars, const vec4_t *color)
{
  float y; 
  float x; 
  int v8; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1288, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  y = conDrawInputGlob.fontHeight + conDrawInputGlob.y;
  x = conDrawInputGlob.x;
  v8 = R_TextHeight(cls.consoleFont);
  R_AddCmdDrawText(str, maxChars, cls.consoleFont, v8, x, y, 1.0, 1.0, 0.0, color);
}

/*
==============
ConDraw_Box
==============
*/
void ConDraw_Box(float x, float y, float w, float h, const vec4_t *color)
{
  float v7; 
  float v8; 
  vec4_t v9; 

  R_AddCmdDrawStretchPic(x, y, w, h, 0.0, 0.0, 0.0, 0.0, color, cls.whiteMaterial);
  v7 = 0.5 * color->v[0];
  v8 = 0.5 * color->v[2];
  v9.v[1] = 0.5 * color->v[1];
  v9.v[3] = color->v[3];
  v9.v[0] = v7;
  v9.v[2] = v8;
  R_AddCmdDrawStretchPic(x, y, 2.0, h, 0.0, 0.0, 0.0, 0.0, &v9, cls.whiteMaterial);
  R_AddCmdDrawStretchPic((float)(w + x) - 2.0, y, 2.0, h, 0.0, 0.0, 0.0, 0.0, &v9, cls.whiteMaterial);
  R_AddCmdDrawStretchPic(x, y, w, 2.0, 0.0, 0.0, 0.0, 0.0, &v9, cls.whiteMaterial);
  R_AddCmdDrawStretchPic(x, (float)(h + y) - 2.0, w, 2.0, 0.0, 0.0, 0.0, 0.0, &v9, cls.whiteMaterial);
}

/*
==============
Con_AllowAutoCompleteCycling
==============
*/
void Con_AllowAutoCompleteCycling(bool isAllowed)
{
  conDrawInputGlob.mayAutoComplete = isAllowed;
}

/*
==============
Con_AnySpaceAfterCommand
==============
*/
char Con_AnySpaceAfterCommand()
{
  int v0; 
  char *buffer; 
  int v2; 
  char *v3; 
  char v4; 

  v0 = 0;
  if ( isspace(g_consoleField.buffer[0]) )
  {
    buffer = g_consoleField.buffer;
    do
    {
      v2 = *++buffer;
      ++v0;
    }
    while ( isspace(v2) );
  }
  v3 = &g_consoleField.buffer[v0];
  v4 = *v3;
  if ( !*v3 )
    return 0;
  while ( !isspace(v4) )
  {
    v4 = *++v3;
    if ( !v4 )
      return 0;
  }
  return 1;
}

/*
==============
Con_AutoCompleteFromList
==============
*/
void Con_AutoCompleteFromList(const char *const *strings, unsigned int stringCount, const char *prefix, char *completed, unsigned int sizeofCompleted)
{
  __int64 v6; 
  unsigned __int64 v9; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  char v18; 
  __int64 v19; 
  __int64 v20; 

  v6 = stringCount;
  v9 = -1i64;
  do
    ++v9;
  while ( prefix[v9] );
  if ( v9 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", v9) )
    __debugbreak();
  *completed = 0;
  if ( (_DWORD)v6 )
  {
    v20 = v6;
    do
    {
      v10 = *strings;
      v11 = (unsigned int)v9;
      v12 = *strings;
      if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v13 = (unsigned __int8)v12[prefix - v10];
        v14 = v11;
        v15 = *(unsigned __int8 *)v12++;
        --v11;
        if ( !v14 )
          break;
        if ( v13 != v15 )
        {
          v16 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v16 = v13;
          v13 = v16;
          v17 = v15 + 32;
          if ( (unsigned int)(v15 - 65) > 0x19 )
            v17 = v15;
          if ( v13 != v17 )
            goto LABEL_28;
        }
      }
      while ( v13 );
      if ( *completed )
      {
        v18 = completed[(unsigned int)v9];
        LODWORD(v19) = v9;
        if ( v10[(unsigned int)v9] == v18 )
        {
          do
          {
            if ( !v18 )
              break;
            v19 = (unsigned int)(v19 + 1);
            v18 = completed[v19];
          }
          while ( v10[v19] == v18 );
        }
        completed[(unsigned int)v19] = 0;
      }
      else
      {
        Core_strcpy_truncate(completed, sizeofCompleted, v10);
      }
LABEL_28:
      ++strings;
      --v20;
    }
    while ( v20 );
  }
}

/*
==============
Con_Bottom
==============
*/
void Con_Bottom(void)
{
  con.displayLineOffset = con.consoleWindow.activeLineCount;
}

/*
==============
Con_CancelAutoComplete
==============
*/
bool Con_CancelAutoComplete()
{
  bool result; 

  if ( conDrawInputGlob.matchIndex < 0 || !conDrawInputGlob.autoCompleteChoice[0] )
    return 0;
  conDrawInputGlob.matchIndex = -1;
  result = 1;
  conDrawInputGlob.autoCompleteChoice[0] = 0;
  return result;
}

/*
==============
Con_CheckResize
==============
*/
void Con_CheckResize(const ScreenPlacement *scrPlace)
{
  int fontHeight; 

  _XMM0 = cl_modifiedDebugPlacement->current.color[0];
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_N20_0);
  __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  ScrPlace_ApplyX(scrPlace, *(float *)&_XMM6, 1);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  con.screenMin.v[0] = *(float *)&_XMM1;
  ScrPlace_ApplyY(scrPlace, *(float *)&_XMM6, 1);
  LODWORD(_XMM6) = _XMM6 ^ _xmm;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  con.screenMin.v[1] = *(float *)&_XMM1;
  ScrPlace_ApplyX(scrPlace, *(float *)&_XMM6, 3);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm0, 1 }
  con.screenMax.v[0] = *(float *)&_XMM2;
  ScrPlace_ApplyY(scrPlace, *(float *)&_XMM6, 3);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  con.screenMax.v[1] = *(float *)&_XMM1;
  if ( cls.consoleFont )
  {
    con.fontHeight = R_TextHeight(cls.consoleFont);
    fontHeight = con.fontHeight;
    if ( con.fontHeight <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 364, ASSERT_TYPE_ASSERT, "(con.fontHeight > 0)", (const char *)&queryFormat, "con.fontHeight > 0") )
        __debugbreak();
      fontHeight = con.fontHeight;
    }
    con.visibleLineCount = (int)(float)((float)((float)(con.screenMax.v[1] - con.screenMin.v[1]) - (float)(2 * fontHeight)) - 24.0) / fontHeight;
    con.visiblePixelWidth = (int)(float)((float)(con.screenMax.v[0] - con.screenMin.v[0]) - 28.0);
  }
  else
  {
    *(_QWORD *)&con.fontHeight = 0i64;
    con.visiblePixelWidth = 0;
  }
}

/*
==============
Con_ClearErrors
==============
*/
void Con_ClearErrors(LocalClientNum_t localClientNum)
{
  Con_ClearMessageWindow((MessageWindow *)&con.currentServerTime[4648 * localClientNum - 4704]);
}

/*
==============
Con_ClearMessageWindow
==============
*/
void Con_ClearMessageWindow(MessageWindow *msgwnd)
{
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 315, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( !msgwnd->messages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 316, ASSERT_TYPE_ASSERT, "(msgwnd->messages)", (const char *)&queryFormat, "msgwnd->messages") )
    __debugbreak();
  if ( !msgwnd->lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 317, ASSERT_TYPE_ASSERT, "(msgwnd->lines)", (const char *)&queryFormat, "msgwnd->lines") )
    __debugbreak();
  *(_QWORD *)&msgwnd->textBufPos = 0i64;
  *(_QWORD *)&msgwnd->activeLineCount = 0i64;
}

/*
==============
Con_ClearNotify
==============
*/
void Con_ClearNotify(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int *v2; 

  v1 = 4i64;
  v2 = &con.currentServerTime[4648 * localClientNum - 7236];
  do
  {
    if ( v2 == (int *)48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 315, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
      __debugbreak();
    if ( !*((_QWORD *)v2 - 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 316, ASSERT_TYPE_ASSERT, "(msgwnd->messages)", (const char *)&queryFormat, "msgwnd->messages") )
      __debugbreak();
    if ( !*((_QWORD *)v2 - 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 317, ASSERT_TYPE_ASSERT, "(msgwnd->lines)", (const char *)&queryFormat, "msgwnd->lines") )
      __debugbreak();
    *(_QWORD *)v2 = 0i64;
    *((_QWORD *)v2 + 1) = 0i64;
    v2 += 16;
    --v1;
  }
  while ( v1 );
}

/*
==============
Con_Clear_f
==============
*/
void Con_Clear_f()
{
  if ( !con.consoleWindow.messages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 316, ASSERT_TYPE_ASSERT, "(msgwnd->messages)", (const char *)&queryFormat, "msgwnd->messages") )
    __debugbreak();
  if ( !con.consoleWindow.lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 317, ASSERT_TYPE_ASSERT, "(msgwnd->lines)", (const char *)&queryFormat, "msgwnd->lines") )
    __debugbreak();
  *(_QWORD *)&con.consoleWindow.textBufPos = 0i64;
  *(_QWORD *)&con.consoleWindow.activeLineCount = 0i64;
  *(_QWORD *)&con.lineOffset = 0i64;
}

/*
==============
Con_Close
==============
*/
void Con_Close(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  MessageWindow *v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientUIActives[v1].isRunning )
  {
    CL_Keys_ClearField(&g_consoleField);
    if ( conDrawInputGlob.matchIndex >= 0 && conDrawInputGlob.autoCompleteChoice[0] )
    {
      conDrawInputGlob.matchIndex = -1;
      conDrawInputGlob.autoCompleteChoice[0] = 0;
    }
    v2 = 4648 * v1;
    v3 = 4i64;
    v4 = (MessageWindow *)&con.currentServerTime[4648 * v1 - 7248];
    do
    {
      Con_ClearMessageWindow(v4++);
      --v3;
    }
    while ( v3 );
    Con_ClearMessageWindow((MessageWindow *)&con.currentServerTime[v2 - 5776]);
    Con_ClearMessageWindow((MessageWindow *)&con.currentServerTime[v2 - 4704]);
    clientUIActives[0].keyCatchers &= ~1u;
    clientUIActives[1].keyCatchers &= ~1u;
  }
}

/*
==============
Con_CloseConsole
==============
*/
void Con_CloseConsole(LocalClientNum_t localClientNum)
{
  if ( CL_Keys_IsCatcherActive(localClientNum, 1) )
    Con_ToggleConsole();
}

/*
==============
Con_CommitToAutoComplete
==============
*/
char Con_CommitToAutoComplete()
{
  const char *v0; 
  unsigned __int8 v1; 
  int v2; 
  unsigned __int64 v3; 

  if ( conDrawInputGlob.matchIndex < 0 || !conDrawInputGlob.autoCompleteChoice[0] )
    return 0;
  Cmd_TokenizeString(g_consoleField.buffer);
  v0 = Cmd_Argv(0);
  v1 = *v0;
  if ( *v0 == 92 || v1 == 47 )
    v1 = *++v0;
  if ( isspace(v1) )
  {
    do
      v2 = *(unsigned __int8 *)++v0;
    while ( isspace(v2) );
  }
  if ( Con_IsDvarCommand(v0) )
    Com_sprintf(g_consoleField.buffer, 0x100ui64, "\\%s %s", v0, conDrawInputGlob.autoCompleteChoice);
  else
    Com_sprintf(g_consoleField.buffer, 0x100ui64, "\\%s", conDrawInputGlob.autoCompleteChoice);
  Cmd_EndTokenizedString();
  v3 = -1i64;
  do
    ++v3;
  while ( g_consoleField.buffer[v3] );
  g_consoleField.cursor = truncate_cast<int,unsigned __int64>(v3);
  g_consoleField.buffer[g_consoleField.cursor++] = 32;
  g_consoleField.buffer[g_consoleField.cursor] = 0;
  g_consoleField.drawWidth = SEH_PrintStrlen(g_consoleField.buffer);
  if ( conDrawInputGlob.matchIndex >= 0 )
  {
    if ( conDrawInputGlob.autoCompleteChoice[0] )
    {
      conDrawInputGlob.matchIndex = -1;
      conDrawInputGlob.autoCompleteChoice[0] = 0;
    }
  }
  return 1;
}

/*
==============
Con_CopyCurrentConsoleLineText
==============
*/
void Con_CopyCurrentConsoleLineText(MessageWindow *msgwnd, MessageLine *msgLine)
{
  unsigned int lineOffset; 
  MessageLine *v5; 
  int textBufPos; 
  int textBufSize; 
  int v8; 
  int v9; 
  __int64 v11; 
  char *circularTextBuffer; 
  size_t v13; 
  char *textTempLine; 
  int v15; 
  char *v16; 
  __int64 v17; 
  __int64 v18; 

  if ( !msgLine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 566, ASSERT_TYPE_ASSERT, "(msgLine)", (const char *)&queryFormat, "msgLine") )
    __debugbreak();
  while ( 1 )
  {
    lineOffset = con.lineOffset;
    if ( !msgwnd->activeLineCount )
      break;
    if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 549, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
      __debugbreak();
    if ( msgwnd->firstLineIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v18) = msgwnd->lineCount;
      LODWORD(v17) = msgwnd->firstLineIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->firstLineIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->firstLineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v5 = &msgwnd->lines[msgwnd->firstLineIndex];
    if ( ((msgwnd->textBufSize - 1) & msgwnd->textBufSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 553, ASSERT_TYPE_ASSERT, "(IsPowerOf2( msgwnd->textBufSize ))", (const char *)&queryFormat, "IsPowerOf2( msgwnd->textBufSize )") )
      __debugbreak();
    textBufPos = msgwnd->textBufPos;
    textBufSize = msgwnd->textBufSize;
    v8 = (textBufSize - 1) & (textBufPos + lineOffset + 1);
    v9 = v5->textBufPos;
    if ( v8 < textBufPos )
    {
      if ( v9 < textBufPos && v9 >= v8 )
        goto LABEL_25;
    }
    else if ( v9 < textBufPos || v9 >= v8 )
    {
      goto LABEL_25;
    }
    Con_FreeFirstMessageWindowLine(msgwnd);
  }
  textBufSize = msgwnd->textBufSize;
  textBufPos = msgwnd->textBufPos;
LABEL_25:
  v11 = (unsigned int)(textBufSize - textBufPos);
  circularTextBuffer = &msgwnd->circularTextBuffer[textBufPos];
  if ( con.lineOffset > (unsigned int)v11 )
  {
    memcpy_0(circularTextBuffer, con.textTempLine, (unsigned int)v11);
    textTempLine = &con.textTempLine[v11];
    circularTextBuffer = msgwnd->circularTextBuffer;
    v13 = (unsigned int)(con.lineOffset - v11);
  }
  else
  {
    v13 = con.lineOffset;
    textTempLine = con.textTempLine;
  }
  memcpy_0(circularTextBuffer, textTempLine, v13);
  msgLine->textBufPos = msgwnd->textBufPos;
  msgLine->textBufSize = con.lineOffset;
  if ( ((msgwnd->textBufSize - 1) & msgwnd->textBufSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 585, ASSERT_TYPE_ASSERT, "(IsPowerOf2( msgwnd->textBufSize ))", (const char *)&queryFormat, "IsPowerOf2( msgwnd->textBufSize )") )
    __debugbreak();
  v15 = (msgwnd->textBufSize - 1) & (con.lineOffset + msgwnd->textBufPos);
  v16 = msgwnd->circularTextBuffer;
  msgwnd->textBufPos = v15;
  v16[v15] = 10;
  msgwnd->textBufPos = (msgwnd->textBufSize - 1) & (msgwnd->textBufPos + 1);
}

/*
==============
Con_CullFinishedLines
==============
*/
void Con_CullFinishedLines(int serverTime, MessageWindow *msgwnd)
{
  MessageLine *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2212, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2213, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
    __debugbreak();
  while ( msgwnd->activeLineCount )
  {
    if ( msgwnd->firstLineIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v6) = msgwnd->lineCount;
      LODWORD(v5) = msgwnd->firstLineIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2217, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->firstLineIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->firstLineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    v4 = &msgwnd->lines[msgwnd->firstLineIndex];
    if ( v4->messageIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v6) = msgwnd->lineCount;
      LODWORD(v5) = v4->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2220, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( serverTime - msgwnd->messages[v4->messageIndex].endTime < 0 )
      break;
    Con_FreeFirstMessageWindowLine(msgwnd);
  }
}

/*
==============
Con_CycleAutoComplete
==============
*/
bool Con_CycleAutoComplete(int step)
{
  int matchCount; 
  int v3; 
  bool result; 

  matchCount = conDrawInputGlob.matchCount;
  if ( conDrawInputGlob.matchCount == 1 && !conDrawInputGlob.hasExactMatch )
  {
    if ( !conDrawInputGlob.mayAutoComplete )
      return 0;
    conDrawInputGlob.matchIndex = 0;
  }
  if ( !conDrawInputGlob.mayAutoComplete || conDrawInputGlob.matchCount <= 1 || conDrawInputGlob.matchCount >= con_inputMaxMatchesShown )
    return 0;
  if ( !conDrawInputGlob.hasExactMatch )
    goto LABEL_11;
  if ( Con_AnySpaceAfterCommand() )
    return 0;
  matchCount = conDrawInputGlob.matchCount;
LABEL_11:
  v3 = conDrawInputGlob.matchIndex + step;
  if ( conDrawInputGlob.matchIndex + step >= 0 )
  {
    result = 1;
    if ( v3 >= matchCount )
      v3 = 0;
    conDrawInputGlob.matchIndex = v3;
  }
  else
  {
    conDrawInputGlob.matchIndex = matchCount - 1;
    return 1;
  }
  return result;
}

/*
==============
Con_DrawConsole
==============
*/
void Con_DrawConsole(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  Con_CheckResize(ActivePlacement);
  if ( CL_Keys_IsCatcherActive(localClientNum, 1) )
  {
    Sys_EnterCriticalSection(CRITSECT_CONSOLE);
    if ( con.lineOffset )
      Con_Linefeed(localClientNum, con.prevChannel, 0);
    Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
    if ( CL_Keys_IsCatcherActive(localClientNum, 1) )
    {
      if ( con.outputVisible )
        Con_DrawOuputWindow();
    }
    else
    {
      con.outputVisible = 0;
    }
    Con_DrawInput(localClientNum);
    R_GPU_SetDrawTopOffset(con.screenMax.v[0] * 0.5, con.screenMin.v[1]);
  }
  else
  {
    R_GPU_SetDrawTopOffset(0.0, 0.0);
  }
}

/*
==============
Con_DrawErrors
==============
*/
void Con_DrawErrors(LocalClientNum_t localClientNum, int xPos, int yPos, int charHeight, float alpha)
{
  __int64 v5; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  ClActiveClient *Client; 
  vec4_t color; 

  v5 = localClientNum;
  s_dontAllowNewErrors = 1;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  font = UI_GetFontHandle(ActivePlacement, 2, 1.0);
  color.v[0] = FLOAT_1_0;
  color.v[1] = FLOAT_1_0;
  color.v[2] = FLOAT_1_0;
  color.v[3] = alpha;
  if ( !&con.currentServerTime[4648 * v5 - 4704] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2442, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v5) == CA_ACTIVE )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v5);
    if ( Client->ShouldDisplayMsgWindow(Client) )
      Con_DrawMessageWindowOldToNew((LocalClientNum_t)v5, (MessageWindow *)&con.currentServerTime[4648 * v5 - 4704], xPos, yPos, charHeight, 1, 1, 0, font, &color, 3, 0.94, 4);
  }
  s_dontAllowNewErrors = 0;
}

/*
==============
Con_DrawGameMessageWindow
==============
*/
void Con_DrawGameMessageWindow(LocalClientNum_t localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, GfxFont *font, float fontScale, const vec4_t *color, int textStyle, int textAlignMode, msgwnd_mode_t mode)
{
  __int64 v13; 
  __int64 v15; 
  float value; 
  int v19; 
  int v20; 

  v13 = windowIndex;
  v15 = localClientNum;
  if ( !CL_Pause_IsGamePaused() )
  {
    if ( CL_IsRenderingSplitScreen() )
      value = con_gameMsgWindowNSplitscreenScale[v13]->current.value;
    else
      value = FLOAT_1_0;
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm3, 1 }
    if ( (unsigned int)v13 >= 4 )
    {
      v20 = 4;
      v19 = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2483, ASSERT_TYPE_ASSERT, "(unsigned)( windowIndex ) < (unsigned)( (CON_DEST_GAME_LAST - CON_DEST_GAME_FIRST + 1) )", "windowIndex doesn't index GAMEMSG_WINDOW_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    Con_DrawMessageWindow((LocalClientNum_t)v15, (MessageWindow *)&con.currentServerTime[4648 * v15 - 7248 + 16 * v13], xPos, yPos, (int)*(float *)&_XMM1, horzAlign, vertAlign, font, color, textStyle, value, mode, textAlignMode);
  }
}

/*
==============
Con_DrawInput
==============
*/
void Con_DrawInput(LocalClientNum_t localClientNum)
{
  const char *v2; 
  int v3; 
  const dvar_t *v4; 
  float v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  const char *inputText; 
  char v11; 
  const char *v12; 
  unsigned __int64 v13; 
  bool Bool_Internal_DebugName; 
  int v15; 
  int matchCount; 
  int inputTextLen; 
  const char *v18; 
  const dvar_t *v19; 
  char *v20; 
  int AutoCompleteColorCodedStringContiguous; 
  int y; 
  int cursorPos; 
  int x; 
  int drawLen; 
  const dvar_t *v26; 
  const char *v27; 
  vec4_t color; 
  char _Buffer[256]; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1843, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( CL_Keys_IsCatcherActive(localClientNum, 1) && Sys_IsMainThread() )
  {
    v2 = j_va("%s: %s> ", "IW8_DEV", "8.24");
    v3 = R_TextHeight(cls.consoleFont);
    v4 = DVARVEC4_con_inputBoxColor;
    conDrawInputGlob.fontHeight = (float)v3;
    conDrawInputGlob.x = con.screenMin.v[0] + 2.0;
    conDrawInputGlob.y = con.screenMin.v[1] + 2.0;
    conDrawInputGlob.leftX = con.screenMin.v[0] + 2.0;
    if ( !DVARVEC4_con_inputBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    color = v4->current.vector;
    ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), conDrawInputGlob.fontHeight + 4.0, &color);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1308, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
      __debugbreak();
    ConDrawInput_Text(v2, &con_versionColor);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1274, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    v5 = (float)R_TextWidth(v2, 0, cls.consoleFont) + conDrawInputGlob.x;
    v6 = 1;
    conDrawInputGlob.x = v5;
    conDrawInputGlob.leftX = v5;
    if ( (int)(float)((float)(con.screenMax.v[0] - 2.0) - v5) > 1 )
      v6 = (int)(float)((float)(con.screenMax.v[0] - 2.0) - v5);
    g_consoleField.widthInPixels = v6;
    v7 = Con_TokenizeInput();
    v8 = -1i64;
    conDrawInputGlob.inputText = v7;
    v9 = -1i64;
    do
      ++v9;
    while ( v7[v9] );
    conDrawInputGlob.inputTextLen = truncate_cast<int,unsigned __int64>(v9);
    conDrawInputGlob.autoCompleteChoice[0] = 0;
    if ( !conDrawInputGlob.inputTextLen )
    {
      conDrawInputGlob.mayAutoComplete = 0;
      CL_Keys_DrawField(localClientNum, &g_consoleField, (int)conDrawInputGlob.x, (int)conDrawInputGlob.y, 5, 5);
      Cmd_EndTokenizedString();
      return;
    }
    inputText = conDrawInputGlob.inputText;
    if ( Cmd_Argc() > 1 && Con_IsDvarCommand(conDrawInputGlob.inputText) )
    {
      v11 = 1;
      v12 = Cmd_Argv(1);
      conDrawInputGlob.inputText = v12;
      v13 = -1i64;
      do
        ++v13;
      while ( v12[v13] );
      conDrawInputGlob.inputTextLen = truncate_cast<int,unsigned __int64>(v13);
      if ( !conDrawInputGlob.inputTextLen )
      {
        conDrawInputGlob.mayAutoComplete = 0;
        Con_DrawInputPrompt(localClientNum);
        Cmd_EndTokenizedString();
        return;
      }
    }
    else
    {
      v11 = 0;
    }
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_con_matchPrefixOnly, "con_matchPrefixOnly");
    v15 = 0;
    conDrawInputGlob.hasExactMatch = 0;
    conDrawInputGlob.matchCount = 0;
    if ( Bool_Internal_DebugName )
    {
      con_ignoreMatchPrefixOnly = 1;
      Dvar_ForEachName(ConDrawInput_IncrMatchCounter);
      if ( !v11 )
        Cmd_ForEach(ConDrawInput_IncrMatchCounter);
      if ( conDrawInputGlob.matchCount <= con_inputMaxMatchesShown || (conDrawInputGlob.hasExactMatch = 0, conDrawInputGlob.matchCount = 0, con_ignoreMatchPrefixOnly = 0, Dvar_ForEachName(ConDrawInput_IncrMatchCounter), Cmd_ForEach(ConDrawInput_IncrMatchCounter), conDrawInputGlob.matchCount) )
      {
LABEL_37:
        matchCount = conDrawInputGlob.matchCount;
        if ( !conDrawInputGlob.matchCount )
        {
          Con_DrawInputPrompt(localClientNum);
LABEL_77:
          Cmd_EndTokenizedString();
          return;
        }
        if ( conDrawInputGlob.matchIndex < conDrawInputGlob.matchCount && conDrawInputGlob.autoCompleteChoice[0] )
        {
          if ( conDrawInputGlob.matchIndex >= 0 )
          {
            inputTextLen = conDrawInputGlob.inputTextLen;
            v18 = conDrawInputGlob.inputText;
            if ( v11 )
              v15 = j_sprintf(_Buffer, "^2%s ", inputText);
            v19 = DVARBOOL_con_matchPrefixOnly;
            if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v19);
            v20 = &_Buffer[v15];
            if ( v19->current.enabled )
              AutoCompleteColorCodedStringContiguous = Con_GetAutoCompleteColorCodedStringContiguous(conDrawInputGlob.autoCompleteChoice, v18, inputTextLen, v20);
            else
              AutoCompleteColorCodedStringContiguous = Con_GetAutoCompleteColorCodedStringDiscontiguous(conDrawInputGlob.autoCompleteChoice, v18, inputTextLen, v20);
            y = (int)conDrawInputGlob.y;
            cursorPos = v15 + AutoCompleteColorCodedStringContiguous;
            x = (int)conDrawInputGlob.x;
            do
              ++v8;
            while ( _Buffer[v8] );
            if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1786, ASSERT_TYPE_ASSERT, "(strlen( colorCodedLine ) > 0)", (const char *)&queryFormat, "strlen( colorCodedLine ) > 0") )
              __debugbreak();
            drawLen = SEH_PrintStrlen(_Buffer);
            if ( drawLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1788, ASSERT_TYPE_ASSERT, "( ( drawLen > 0 ) )", "( colorCodedLine ) = %s", _Buffer) )
              __debugbreak();
            CL_Keys_DrawTextOverrideField(localClientNum, &g_consoleField, x, y, 5, 5, _Buffer, drawLen, cursorPos);
            goto LABEL_61;
          }
        }
        else
        {
          conDrawInputGlob.matchIndex = -1;
        }
        Con_DrawInputPrompt(localClientNum);
LABEL_61:
        v26 = DVARVEC4_con_inputHintBoxColor;
        conDrawInputGlob.y = (float)(conDrawInputGlob.fontHeight + conDrawInputGlob.y) + conDrawInputGlob.fontHeight;
        conDrawInputGlob.x = conDrawInputGlob.leftX;
        if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        color = v26->current.vector;
        if ( matchCount <= con_inputMaxMatchesShown )
        {
          if ( matchCount == 1 || conDrawInputGlob.hasExactMatch && Con_AnySpaceAfterCommand() )
          {
            Dvar_ForEachName(ConDrawInput_DetailedDvarMatch);
            if ( !v11 )
              Cmd_ForEach(ConDrawInput_DetailedCmdMatch);
          }
          else
          {
            ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), (float)((float)matchCount * conDrawInputGlob.fontHeight) + 4.0, &color);
            Dvar_ForEachName(ConDrawInput_DvarMatch);
            if ( !v11 )
              Cmd_ForEach(ConDrawInput_CmdMatch);
            if ( Dvar_FindVarByName(conDrawInputGlob.autoCompleteChoice) )
            {
              conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
              conDrawInputGlob.x = conDrawInputGlob.leftX;
              ConDrawInput_DetailedDvarMatch(conDrawInputGlob.autoCompleteChoice);
            }
            else if ( !v11 )
            {
              conDrawInputGlob.y = conDrawInputGlob.y + conDrawInputGlob.fontHeight;
              conDrawInputGlob.x = conDrawInputGlob.leftX;
              ConDrawInput_DetailedCmdMatch(conDrawInputGlob.autoCompleteChoice);
            }
          }
        }
        else
        {
          v27 = j_va("%i matches (too many to show here, press shift+tilde to open full console)", (unsigned int)matchCount);
          ConDraw_Box(conDrawInputGlob.x - 2.0, conDrawInputGlob.y - 2.0, (float)(con.screenMax.v[0] - con.screenMin.v[0]) - (float)((float)(conDrawInputGlob.x - 2.0) - con.screenMin.v[0]), conDrawInputGlob.fontHeight + 4.0, &color);
          ConDrawInput_Text(v27, &con_inputDvarMatchColor);
        }
        goto LABEL_77;
      }
      conDrawInputGlob.hasExactMatch = 0;
      conDrawInputGlob.matchCount = 0;
      con_ignoreMatchPrefixOnly = 1;
    }
    else
    {
      con_ignoreMatchPrefixOnly = 0;
    }
    Dvar_ForEachName(ConDrawInput_IncrMatchCounter);
    if ( !v11 )
      Cmd_ForEach(ConDrawInput_IncrMatchCounter);
    goto LABEL_37;
  }
}

/*
==============
Con_DrawInputPrompt
==============
*/
void Con_DrawInputPrompt(LocalClientNum_t localClientNum)
{
  CL_Keys_DrawField(localClientNum, &g_consoleField, (int)conDrawInputGlob.x, (int)conDrawInputGlob.y, 5, 5);
}

/*
==============
Con_DrawMessageLineOnHUD
==============
*/
void Con_DrawMessageLineOnHUD(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, int serverTime, int x, int y, int charHeight, int horzAlign, int vertAlign, GfxFont *font, const MessageWindow *msgwnd, int lineIdx, const vec4_t *color, int textStyle, float msgwndScale, int textAlignMode)
{
  GfxFont *FontHandle; 
  MessageLine *v19; 
  double v20; 
  int v21; 
  int v22; 
  const dvar_t *v23; 
  int flags; 
  const dvar_t *v25; 
  const char *v26; 
  int v27; 
  const dvar_t *v28; 
  int v29; 
  int integer; 
  const dvar_t *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  const char *v36; 
  const dvar_t *v37; 
  int style; 
  const dvar_t *v39; 
  float v40; 
  float v41; 
  float h; 
  float w; 
  int v44; 
  float v45; 
  float xa; 
  LocalClientNum_t localClientNuma; 
  GfxFont *v48; 
  const vec4_t *v49; 
  vec4_t v50; 

  FontHandle = font;
  localClientNuma = localClientNum;
  v44 = serverTime;
  v48 = font;
  v49 = color;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2092, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  v19 = &msgwnd->lines[lineIdx];
  if ( serverTime < v19->typingStartTime )
    return;
  if ( (v19->flags & 1) != 0 )
  {
    FontHandle = UI_GetFontHandle(NULL, 6, 1.0);
    v48 = FontHandle;
  }
  v20 = R_NormalizedTextScale(FontHandle, (float)((float)charHeight * 0.020833334) * msgwndScale);
  w = *(float *)&v20;
  h = *(float *)&v20;
  if ( (textAlignMode & 3) == 1 )
  {
    x += (int)(float)((float)((float)R_ConsoleTextWidth(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle) * w) * -0.5);
  }
  else if ( (textAlignMode & 3) == 2 )
  {
    x -= (int)(float)((float)R_ConsoleTextWidth(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle) * w);
  }
  if ( (textAlignMode & 0xC) == 4 )
  {
    v21 = (int)(float)((float)R_TextHeight(FontHandle) * h);
    goto LABEL_16;
  }
  if ( (textAlignMode & 0xC) == 8 )
  {
    v21 = (int)(float)((float)((float)R_TextHeight(FontHandle) * h) * 0.5);
LABEL_16:
    v22 = v21 + y;
    goto LABEL_17;
  }
  v22 = y;
LABEL_17:
  xa = (float)x;
  v45 = (float)v22;
  ScrPlace_ApplyRect(scrPlace, &xa, &v45, &w, &h, horzAlign, vertAlign);
  if ( (v19->flags & 1) != 0 )
  {
    v23 = DVARVEC3_con_typewriterColorBase;
    if ( !DVARVEC3_con_typewriterColorBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterColorBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    flags = v19->flags;
    if ( (flags & 0x10) != 0 )
    {
      v25 = DVARVEC4_con_typewriterColorGlowCheckpoint;
      if ( DVARVEC4_con_typewriterColorGlowCheckpoint )
        goto LABEL_34;
      v26 = "con_typewriterColorGlowCheckpoint";
    }
    else if ( (flags & 4) != 0 )
    {
      v25 = DVARVEC4_con_typewriterColorGlowCompleted;
      if ( DVARVEC4_con_typewriterColorGlowCompleted )
        goto LABEL_34;
      v26 = "con_typewriterColorGlowCompleted";
    }
    else if ( (flags & 8) != 0 )
    {
      v25 = DVARVEC4_con_typewriterColorGlowFailed;
      if ( DVARVEC4_con_typewriterColorGlowFailed )
        goto LABEL_34;
      v26 = "con_typewriterColorGlowFailed";
    }
    else
    {
      v25 = DVARVEC4_con_typewriterColorGlowUpdated;
      if ( DVARVEC4_con_typewriterColorGlowUpdated )
        goto LABEL_34;
      v26 = "con_typewriterColorGlowUpdated";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v26) )
      __debugbreak();
LABEL_34:
    Dvar_CheckFrontendServerThread(v25);
    v27 = PrintableCharsCount(msgwnd, v19);
    v28 = DVARINT_con_typewriterDecayStartTime;
    v29 = v27;
    if ( !DVARINT_con_typewriterDecayStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterDecayStartTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    integer = v28->current.integer;
    v31 = DVARINT_con_typewriterPrintSpeed;
    if ( !DVARINT_con_typewriterPrintSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterPrintSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = v31->current.integer;
    v33 = v44 - v19->typingStartTime;
    v34 = v19->lastTypingSoundTime - v19->typingStartTime;
    v35 = v29 * v32;
    if ( integer >= v29 * v32 )
      v35 = integer;
    if ( v33 < 0 )
      goto LABEL_53;
    if ( v33 <= v35 )
    {
      if ( v33 >= v29 * v32 )
        goto LABEL_53;
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2832, ASSERT_TYPE_ASSERT, "(fxLetterTime)", (const char *)&queryFormat, "fxLetterTime") )
        __debugbreak();
      if ( v34 >= v33 - v33 % v32 )
        goto LABEL_53;
      v36 = "ui_pulse_text_type";
    }
    else
    {
      if ( v34 >= v35 )
      {
LABEL_53:
        R_AddCmdDrawConsoleText(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, v48, xa, v45, w, h, v49, textStyle);
        return;
      }
      v36 = "ui_pulse_text_delete";
    }
    SND_PlayLocalSoundAliasAsync(localClientNuma, v36, SASYS_CGAME);
    v19->lastTypingSoundTime = v44;
    goto LABEL_53;
  }
  v37 = DVARBOOL_con_forcedSubtitleEnableOverrideValues;
  style = textStyle;
  v50 = *v49;
  if ( !DVARBOOL_con_forcedSubtitleEnableOverrideValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_forcedSubtitleEnableOverrideValues") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled && (v19->flags & 0x40) != 0 )
  {
    v39 = DVARVEC3_con_forcedSubtitleColor;
    if ( !DVARVEC3_con_forcedSubtitleColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_forcedSubtitleColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.vector.v[1];
    v41 = v39->current.vector.v[2];
    LODWORD(v50.v[0]) = v39->current.integer;
    v50.v[1] = v40;
    v50.v[2] = v41;
    style = Dvar_GetInt_Internal_DebugName(DVARINT_con_forcedSubtitleTextStyle, "con_forcedSubtitleTextStyle");
  }
  R_AddCmdDrawConsoleText(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle, xa, v45, w, h, &v50, style);
}

/*
==============
Con_DrawMessageWindow
==============
*/
void Con_DrawMessageWindow(LocalClientNum_t localClientNum, MessageWindow *msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, GfxFont *font, const vec4_t *color, int textStyle, float msgwndScale, msgwnd_mode_t mode, int textAlignMode)
{
  ClActiveClient *Client; 
  bool up; 

  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2442, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState(localClientNum) == CA_ACTIVE )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Client->ShouldDisplayMsgWindow(Client) )
    {
      if ( mode )
      {
        if ( mode <= MWM_BOTTOMUP_ALIGN_TOP )
          goto LABEL_17;
        if ( mode <= MWM_TOPDOWN_ALIGN_TOP )
        {
          Con_DrawMessageWindowNewToOld(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, mode == MWM_BOTTOMUP_ALIGN_BOTTOM, font, color, textStyle, msgwndScale, textAlignMode);
          return;
        }
        up = mode == MWM_TOPDOWN_ALIGN_BOTTOM;
        if ( mode != MWM_TOPDOWN_ALIGN_BOTTOM )
        {
LABEL_17:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2460, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled case") )
            __debugbreak();
          return;
        }
      }
      else
      {
        up = 0;
      }
      Con_DrawMessageWindowOldToNew(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, up, font, color, textStyle, msgwndScale, textAlignMode);
    }
  }
}

/*
==============
Con_DrawMessageWindowNewToOld
==============
*/
void Con_DrawMessageWindowNewToOld(LocalClientNum_t localClientNum, MessageWindow *msgwnd, int x, int y, int hudCharHeight, int horzAlign, int vertAlign, bool up, GfxFont *font, const vec4_t *color, int textStyle, float msgwndScale, int textAlignMode)
{
  __int128 v13; 
  __int128 v14; 
  __int64 v16; 
  ClActiveClient *Client; 
  int v19; 
  int v20; 
  __int64 v21; 
  int activeLineCount; 
  int v23; 
  int v24; 
  int v25; 
  int lineCount; 
  int v27; 
  unsigned __int64 v28; 
  MessageLine *lines; 
  unsigned __int64 v30; 
  __int64 messageIndex; 
  Message *messages; 
  int startTime; 
  int scrollTime; 
  int v35; 
  __int128 v37; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  __int64 lineIdx; 
  MessageLine *v47; 
  Message *v48; 
  int v49; 
  bool v50; 
  const ScreenPlacement *v51; 
  __int64 charHeight; 
  __int64 v53; 
  int serverTime; 
  int driftBuffer; 
  __int64 v58; 
  vec4_t i; 
  __int128 v60; 
  __int128 v61; 

  v16 = localClientNum;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2290, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v16) != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2291, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForGameServer( localClientNum )") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v16);
  v19 = Client->GetMsgWindowDriftTime(Client);
  v58 = v16;
  v20 = con.currentServerTime[v16];
  v21 = v19;
  driftBuffer = v19;
  serverTime = v20;
  Con_CullFinishedLines(v20, msgwnd);
  activeLineCount = msgwnd->activeLineCount;
  v23 = y - hudCharHeight;
  if ( up )
    v23 = y;
  v24 = 0;
  if ( activeLineCount > 0 )
  {
    v61 = v13;
    v25 = v20;
    v60 = v14;
    do
    {
      if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2306, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
        __debugbreak();
      lineCount = msgwnd->lineCount;
      v27 = (v24 + msgwnd->firstLineIndex) % lineCount;
      v28 = v27;
      if ( v27 >= (unsigned int)lineCount )
      {
        LODWORD(v53) = msgwnd->lineCount;
        LODWORD(charHeight) = (v24 + msgwnd->firstLineIndex) % lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2308, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v53) )
          __debugbreak();
      }
      lines = msgwnd->lines;
      v30 = v28;
      if ( msgwnd->lines[v30].messageIndex >= (unsigned int)msgwnd->lineCount )
      {
        LODWORD(v53) = msgwnd->lineCount;
        LODWORD(charHeight) = msgwnd->lines[v30].messageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2310, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v53) )
          __debugbreak();
      }
      messageIndex = lines[v30].messageIndex;
      messages = msgwnd->messages;
      if ( v21 )
      {
        startTime = messages[messageIndex].startTime;
        if ( startTime < 0 || startTime > v25 + (int)v21 )
        {
          LODWORD(charHeight) = messages[messageIndex].startTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2312, ASSERT_TYPE_ASSERT, "( ( driftBuffer == 0 || (message->startTime >= 0 && message->startTime <= serverTime + driftBuffer) ) )", "( message->startTime ) = %i", charHeight) )
            __debugbreak();
        }
      }
      scrollTime = msgwnd->scrollTime;
      v35 = v25 - messages[messageIndex].startTime;
      if ( v35 < scrollTime )
      {
        v37 = LODWORD(FLOAT_1_0);
        *(float *)&v37 = 1.0 - (float)((float)v35 / (float)scrollTime);
        _XMM3 = v37;
        if ( v21 )
        {
          __asm
          {
            vmaxss  xmm0, xmm3, xmm7
            vminss  xmm3, xmm0, xmm6
          }
        }
        _XMM0 = 0i64;
        __asm { vroundss xmm1, xmm0, xmm3, 1 }
        v42 = (int)*(float *)&_XMM1;
        if ( up )
          v23 += v42;
        else
          v23 -= v42;
      }
      activeLineCount = msgwnd->activeLineCount;
      ++v24;
    }
    while ( v24 < activeLineCount );
  }
  v43 = activeLineCount - 1;
  for ( i = *color; v43 >= 0; --v43 )
  {
    v44 = msgwnd->lineCount;
    v45 = (v43 + msgwnd->firstLineIndex) % v44;
    lineIdx = v45;
    if ( v45 >= (unsigned int)v44 )
    {
      LODWORD(v53) = msgwnd->lineCount;
      LODWORD(charHeight) = (v43 + msgwnd->firstLineIndex) % v44;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2333, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v53) )
        __debugbreak();
    }
    v47 = msgwnd->lines;
    if ( msgwnd->lines[lineIdx].messageIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v53) = msgwnd->lineCount;
      LODWORD(charHeight) = msgwnd->lines[lineIdx].messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2336, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v53) )
        __debugbreak();
    }
    v48 = &msgwnd->messages[v47[lineIdx].messageIndex];
    v49 = v23 + hudCharHeight;
    v23 -= hudCharHeight;
    if ( !up )
      v23 = v49;
    if ( serverTime - v48->endTime >= 0 )
      continue;
    i.v[3] = Con_GetMessageAlpha(v48, msgwnd, serverTime, 1, driftBuffer) * color->v[3];
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v51 = &scrPlaceViewDisplay[v58];
        goto LABEL_49;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v50 )
        __debugbreak();
    }
    v51 = &scrPlaceFull;
LABEL_49:
    Con_DrawMessageLineOnHUD(localClientNum, v51, serverTime, x, v23, hudCharHeight, horzAlign, vertAlign, font, msgwnd, lineIdx, &i, textStyle, msgwndScale, textAlignMode);
  }
}

/*
==============
Con_DrawMessageWindowOldToNew
==============
*/
void Con_DrawMessageWindowOldToNew(LocalClientNum_t localClientNum, MessageWindow *msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, bool up, GfxFont *font, const vec4_t *color, int textStyle, float msgwndScale, int textAlignMode)
{
  __int64 v14; 
  ClActiveClient *Client; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int lineCount; 
  int v23; 
  __int64 lineIdx; 
  MessageLine *lines; 
  Message *v26; 
  int endTime; 
  int scrollTime; 
  bool v29; 
  int v32; 
  bool v33; 
  const ScreenPlacement *v34; 
  __int64 v35; 
  __int64 v36; 
  int driftBuffer; 
  int v38; 
  __int64 v41; 
  vec4_t v42; 

  v14 = localClientNum;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2367, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v14) != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2368, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForGameServer( localClientNum )") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v14);
  v17 = Client->GetMsgWindowDriftTime(Client);
  v41 = v14;
  v18 = con.currentServerTime[v14];
  driftBuffer = v17;
  v19 = v17;
  Con_CullFinishedLines(v18, msgwnd);
  v20 = y - charHeight;
  if ( !up )
    v20 = y;
  v21 = 0;
  v42 = *color;
  if ( msgwnd->activeLineCount > 0 )
  {
    v38 = v18 + v19;
    while ( 1 )
    {
      if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2386, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
        __debugbreak();
      lineCount = msgwnd->lineCount;
      v23 = (v21 + msgwnd->firstLineIndex) % lineCount;
      lineIdx = v23;
      if ( v23 >= (unsigned int)lineCount )
      {
        LODWORD(v36) = msgwnd->lineCount;
        LODWORD(v35) = (v21 + msgwnd->firstLineIndex) % lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2388, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      lines = msgwnd->lines;
      if ( msgwnd->lines[lineIdx].messageIndex >= (unsigned int)msgwnd->lineCount )
      {
        LODWORD(v36) = msgwnd->lineCount;
        LODWORD(v35) = msgwnd->lines[lineIdx].messageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2390, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v26 = &msgwnd->messages[lines[lineIdx].messageIndex];
      if ( v26->startTime < 0 )
      {
        LODWORD(v35) = v26->startTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2393, ASSERT_TYPE_ASSERT, "( ( message->startTime >= 0 ) )", "( message->startTime ) = %i", v35) )
          __debugbreak();
      }
      if ( !driftBuffer && v26->startTime > v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2395, ASSERT_TYPE_ASSERT, "(driftBuffer != 0 || message->startTime <= serverTime)", (const char *)&queryFormat, "driftBuffer != 0 || message->startTime <= serverTime") )
        __debugbreak();
      if ( v26->startTime > v38 )
        goto LABEL_50;
      endTime = v26->endTime;
      if ( v18 > endTime )
        goto LABEL_50;
      scrollTime = msgwnd->scrollTime;
      if ( v18 <= endTime - scrollTime || v18 + scrollTime - endTime <= 0 )
      {
        v29 = up;
      }
      else
      {
        if ( scrollTime <= 0 )
        {
          LODWORD(v35) = msgwnd->scrollTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2408, ASSERT_TYPE_ASSERT, "( ( msgwnd->scrollTime > 0 ) )", "( msgwnd->scrollTime ) = %i", v35) )
            __debugbreak();
        }
        v29 = up;
        _XMM0 = 0i64;
        __asm { vroundss xmm1, xmm0, xmm3, 1 }
        v32 = (int)*(float *)&_XMM1;
        if ( up )
          v20 += v32;
        else
          v20 -= v32;
      }
      v42.v[3] = Con_GetMessageAlpha(v26, msgwnd, v18, 0, driftBuffer) * color->v[3];
      if ( activeScreenPlacementMode == SCRMODE_FULL )
        goto LABEL_44;
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
        break;
      v34 = &scrPlaceViewDisplay[v41];
LABEL_45:
      Con_DrawMessageLineOnHUD(localClientNum, v34, v18, x, v20, charHeight, horzAlign, vertAlign, font, msgwnd, lineIdx, &v42, textStyle, msgwndScale, textAlignMode);
      if ( v29 )
        v20 -= charHeight;
      else
        v20 += charHeight;
LABEL_50:
      if ( ++v21 >= msgwnd->activeLineCount )
        return;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v33 )
      __debugbreak();
LABEL_44:
    v34 = &scrPlaceFull;
    goto LABEL_45;
  }
}

/*
==============
Con_DrawMiniConsole
==============
*/
void Con_DrawMiniConsole(LocalClientNum_t localClientNum, int xPos, int yPos, float alpha)
{
  __int64 v5; 
  const dvar_t *v7; 
  float value; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int integer; 
  __int64 v16; 
  GfxFont *font; 
  __int64 v18; 
  bool v19; 
  MessageWindow *v20; 
  ClActiveClient *Client; 
  __int64 horzAlign; 
  vec4_t color; 

  v5 = localClientNum;
  if ( CL_IsRenderingSplitScreen() )
  {
    v7 = DVARFLT_con_MiniConSplitscreenScale;
    if ( !DVARFLT_con_MiniConSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_MiniConSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
  }
  else
  {
    value = FLOAT_1_0;
  }
  v9 = DVARINT_con_miniconlines;
  if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer )
  {
    Sys_EnterCriticalSection(CRITSECT_CONSOLE);
    v10 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.integer < 0 )
      goto LABEL_19;
    v11 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer > 100 )
    {
LABEL_19:
      v12 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      LODWORD(horzAlign) = v12->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2507, ASSERT_TYPE_ASSERT, "( ( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) >= 0 && Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) <= 100 ) )", "( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) ) = %i", horzAlign) )
        __debugbreak();
    }
    v13 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( con.messageBuffer[0].miniconWindow.lineCount == v13->current.integer )
    {
      v16 = v5;
    }
    else
    {
      v14 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      integer = v14->current.integer;
      v16 = v5;
      con.messageBuffer[0].miniconWindow.lineCount = integer;
      Con_ClearMessageWindow((MessageWindow *)&con.currentServerTime[4648 * v5 - 5776]);
    }
    font = cls.consoleFont;
    v18 = 4648 * v16;
    color.v[0] = FLOAT_1_0;
    v19 = &con.currentServerTime[v18 - 5776] == NULL;
    v20 = (MessageWindow *)&con.currentServerTime[v18 - 5776];
    color.v[1] = FLOAT_1_0;
    color.v[2] = FLOAT_1_0;
    color.v[3] = alpha;
    if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2442, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
      __debugbreak();
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v5) == CA_ACTIVE )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v5);
      if ( Client->ShouldDisplayMsgWindow(Client) )
        Con_DrawMessageWindowOldToNew((LocalClientNum_t)v5, v20, xPos, yPos, 10, 1, 1, 0, font, &color, 3, value, 4);
    }
    Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
  }
}

/*
==============
Con_DrawOuputWindow
==============
*/
void Con_DrawOuputWindow()
{
  float v0; 
  __int128 v1; 
  __int128 v2; 
  const dvar_t *v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  __int128 v9; 
  const char *BuildNumber; 
  const char *v12; 
  float y; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  double v18; 
  int visibleLineCount; 
  int v22; 
  int v23; 
  __int128 v24; 
  int i; 
  __int128 v26; 
  vec4_t outColor; 
  vec4_t color; 

  v0 = con.screenMin.v[0];
  v2 = LODWORD(con.screenMin.v[1]);
  *(float *)&v2 = con.screenMin.v[1] + 32.0;
  v1 = v2;
  v3 = DVARVEC4_con_outputWindowColor;
  v4 = con.screenMax.v[0] - con.screenMin.v[0];
  v6 = (float)(con.screenMax.v[1] - con.screenMin.v[1]) - 32.0;
  v5 = v6;
  if ( !DVARVEC4_con_outputWindowColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputWindowColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  color = v3->current.vector;
  ConDraw_Box(v0, *(float *)&v1, v4, v6, &color);
  v7 = v0 + 6.0;
  v9 = v1;
  *(float *)&v9 = *(float *)&v1 + 6.0;
  v8 = v9;
  *(float *)&_XMM10 = v5 + -12.0;
  BuildNumber = j_getBuildNumber();
  v12 = j_va("Build %s %s", BuildNumber, "xb3");
  y = (float)(v5 + -12.0) + *(float *)&v9;
  R_AddCmdDrawText(v12, 0x7FFFFFFF, cls.consoleFont, 18, v0 + 6.0, y, 1.0, 1.0, 0.0, &con_versionColor);
  v14 = DVARVEC4_con_outputBarColor;
  if ( !DVARVEC4_con_outputBarColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputBarColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  outColor = (vec4_t)v14->current;
  v15 = (float)((float)(v4 + -12.0) + v7) - 10.0;
  ConDraw_Box(v15, *(float *)&v8, 10.0, *(float *)&_XMM10, &outColor);
  v16 = DVARVEC4_con_outputSliderColor;
  if ( !DVARVEC4_con_outputSliderColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputSliderColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  outColor = v16->current.vector;
  if ( con.consoleWindow.activeLineCount > con.visibleLineCount )
  {
    v18 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)(con.displayLineOffset - con.visibleLineCount)).m128_f32[0] * (float)(1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)(con.consoleWindow.activeLineCount - con.visibleLineCount)).m128_f32[0]), 0.0, 1.0);
    _XMM4 = 0i64;
    _mm_cvtepi32_ps((__m128i)(unsigned int)con.visibleLineCount);
    __asm
    {
      vroundss xmm4, xmm4, xmm3, 2
      vmaxss  xmm10, xmm4, xmm9
    }
    v17 = (float)((float)((float)(y - *(float *)&_XMM10) - *(float *)&v8) * *(float *)&v18) + *(float *)&v8;
  }
  else
  {
    v17 = *(float *)&v8;
  }
  ConDraw_Box(v15, v17, 10.0, *(float *)&_XMM10, &outColor);
  CL_LookupColor(LOCAL_CLIENT_0, 0x37u, &outColor);
  if ( !con.fontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2608, ASSERT_TYPE_ASSERT, "(con.fontHeight)", (const char *)&queryFormat, "con.fontHeight") )
    __debugbreak();
  visibleLineCount = con.visibleLineCount;
  v22 = con.displayLineOffset - con.visibleLineCount;
  if ( con.displayLineOffset - con.visibleLineCount < 0 )
  {
    v23 = v22 * con.fontHeight;
    visibleLineCount = con.displayLineOffset;
    v22 = 0;
    v24 = v8;
    *(float *)&v24 = *(float *)&v8 - (float)v23;
    v8 = v24;
  }
  for ( i = 0; i < visibleLineCount; ++i )
  {
    v26 = v8;
    *(float *)&v26 = *(float *)&v8 + (float)con.fontHeight;
    v8 = v26;
    R_AddCmdDrawConsoleText(con.consoleWindow.circularTextBuffer, con.consoleWindow.textBufSize, con.consoleWindow.lines[(v22 + i + con.consoleWindow.firstLineIndex) % con.consoleWindow.lineCount].textBufPos, con.consoleWindow.lines[(v22 + i + con.consoleWindow.firstLineIndex) % con.consoleWindow.lineCount].textBufSize, cls.consoleFont, v7, *(float *)&v26, 1.0, 1.0, &outColor, 0);
  }
}

/*
==============
Con_FreeFirstMessageWindowLine
==============
*/
void Con_FreeFirstMessageWindowLine(MessageWindow *msgwnd)
{
  int v2; 
  int activeLineCount; 

  if ( msgwnd->activeLineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 523, ASSERT_TYPE_ASSERT, "(msgwnd->activeLineCount > 0)", (const char *)&queryFormat, "msgwnd->activeLineCount > 0") )
    __debugbreak();
  v2 = ++msgwnd->firstLineIndex;
  --msgwnd->activeLineCount;
  if ( v2 == msgwnd->lineCount )
    v2 = 0;
  msgwnd->firstLineIndex = v2;
  if ( msgwnd == (MessageWindow *)&con && --con.displayLineOffset < con.visibleLineCount )
  {
    activeLineCount = con.consoleWindow.activeLineCount;
    if ( con.visibleLineCount < con.consoleWindow.activeLineCount )
      activeLineCount = con.visibleLineCount;
    con.displayLineOffset = activeLineCount;
  }
}

/*
==============
Con_GetAutoCompleteColorCodedStringContiguous
==============
*/
int Con_GetAutoCompleteColorCodedStringContiguous(const char *query, const char *matchToText, int matchTextLen, char *colorCoded)
{
  const char *v7; 
  unsigned __int64 v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  size_t v13; 
  __int64 v14; 
  size_t v15; 
  char *v16; 
  size_t v17; 
  char v18; 
  __int64 v19; 
  size_t v20; 
  __int64 v21; 
  char *v22; 
  char v23; 

  v7 = query;
  if ( !query && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1401, ASSERT_TYPE_ASSERT, "(query)", (const char *)&queryFormat, "query") )
    __debugbreak();
  if ( !matchToText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1402, ASSERT_TYPE_ASSERT, "(matchToText)", (const char *)&queryFormat, "matchToText") )
    __debugbreak();
  if ( !matchTextLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1403, ASSERT_TYPE_ASSERT, "(matchTextLen)", (const char *)&queryFormat, "matchTextLen") )
    __debugbreak();
  v8 = 0i64;
  v9 = I_stristr(v7, matchToText);
  v10 = v9;
  if ( v9 )
  {
    v11 = v9 - v7;
    strncpy(colorCoded, v7, v9 - v7);
    if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", v11, "signed", v11) )
      __debugbreak();
    v12 = -1i64;
    strcpy(&colorCoded[v11], "^2");
    v13 = -1i64;
    v14 = v11 + 2;
    do
      ++v13;
    while ( matchToText[v13] );
    strncpy(&colorCoded[v14], v10, v13);
    v15 = v13 + v14;
    v16 = (char *)&v10[v13];
    strcpy(&colorCoded[v15], "^7");
    v17 = v15 + 2;
    do
    {
      v18 = *v16;
      colorCoded[v17 - (_QWORD)&v10[v13] + (_QWORD)v16] = *v16;
      ++v16;
    }
    while ( v18 );
    v19 = -1i64;
    do
      ++v19;
    while ( v10[v13 + v19] );
    v20 = v19 + v17;
    colorCoded[v20] = 32;
    v8 = v20 + 1;
    colorCoded[v8] = 0;
  }
  else
  {
    v12 = -1i64;
    v21 = -1i64;
    do
      ++v21;
    while ( v7[v21] );
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1428, ASSERT_TYPE_ASSERT, "(strlen( query ) > 0)", (const char *)&queryFormat, "strlen( query ) > 0") )
      __debugbreak();
    v22 = (char *)(colorCoded - v7);
    do
    {
      v23 = *v7;
      v7[(_QWORD)v22] = *v7;
      ++v7;
    }
    while ( v23 );
  }
  do
    ++v12;
  while ( colorCoded[v12] );
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1432, ASSERT_TYPE_ASSERT, "(strlen( colorCoded ) > 0)", (const char *)&queryFormat, "strlen( colorCoded ) > 0") )
    __debugbreak();
  return truncate_cast<int,unsigned __int64>(v8);
}

/*
==============
Con_GetAutoCompleteColorCodedStringDiscontiguous
==============
*/
__int64 Con_GetAutoCompleteColorCodedStringDiscontiguous(const char *query, const char *matchToText, int matchTextLen, char *colorCoded)
{
  const char *v6; 
  char v8; 
  int v9; 
  int v10; 
  char v11; 
  int v12; 
  char *v13; 
  int v14; 
  char v15; 
  int v16; 
  const char *v17; 
  char *v18; 
  char v19; 
  char v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 

  v6 = query;
  if ( !query && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1358, ASSERT_TYPE_ASSERT, "(query)", (const char *)&queryFormat, "query") )
    __debugbreak();
  if ( !matchToText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1359, ASSERT_TYPE_ASSERT, "(matchToText)", (const char *)&queryFormat, "matchToText") )
    __debugbreak();
  if ( !matchTextLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1360, ASSERT_TYPE_ASSERT, "(matchTextLen)", (const char *)&queryFormat, "matchTextLen") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  v10 = tolower(*matchToText);
  v11 = *v6;
  v12 = v10;
  if ( *v6 )
  {
    v13 = colorCoded;
    do
    {
      v14 = tolower(v11);
      v15 = v14 == v12;
      if ( v14 == v12 )
      {
        v16 = *++matchToText;
        v12 = tolower(v16);
      }
      if ( v15 != v8 )
      {
        v17 = "^7";
        v8 = v15;
        if ( v15 )
          v17 = "^2";
        v18 = &colorCoded[v9 - (_QWORD)v17];
        do
        {
          v19 = *v17;
          v17[(_QWORD)v18] = *v17;
          ++v17;
        }
        while ( v19 );
        v9 += 2;
        v13 += 2;
      }
      v20 = *v6;
      ++v9;
      ++v6;
      *v13++ = v20;
      v11 = *v6;
    }
    while ( *v6 );
  }
  v21 = v9;
  v22 = v9 + 3;
  strcpy(&colorCoded[v21], "^7 ");
  v23 = -1i64;
  do
    ++v23;
  while ( colorCoded[v23] );
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1391, ASSERT_TYPE_ASSERT, "(strlen( colorCoded ) > 0)", (const char *)&queryFormat, "strlen( colorCoded ) > 0") )
    __debugbreak();
  return v22;
}

/*
==============
Con_GetDestWindow
==============
*/
MessageWindow *Con_GetDestWindow(LocalClientNum_t localClientNum, print_msg_dest_t dest)
{
  __int64 v2; 

  v2 = localClientNum;
  switch ( dest )
  {
    case CON_DEST_CONSOLE:
      return (MessageWindow *)&con;
    case CON_DEST_MINICON:
      return (MessageWindow *)&con.currentServerTime[4648 * localClientNum - 5776];
    case CON_DEST_ERROR:
      return (MessageWindow *)&con.currentServerTime[4648 * localClientNum - 4704];
  }
  if ( (unsigned int)(dest - 4) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 795, ASSERT_TYPE_ASSERT, "(dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST)", (const char *)&queryFormat, "dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST") )
    __debugbreak();
  return (MessageWindow *)&con.currentServerTime[4648 * v2 - 7248 + 16 * (__int64)(dest - 4)];
}

/*
==============
Con_GetMessageAlpha
==============
*/
float Con_GetMessageAlpha(Message *message, MessageWindow *msgwnd, int serverTime, bool scrollsIntoPlace, int driftBuffer)
{
  int fadeOut; 
  int v11; 
  __int128 v12; 
  int fadeIn; 
  int scrollTime; 
  int v15; 
  float result; 
  __int128 v17; 
  int v18; 
  __int128 v19; 

  _XMM6 = LODWORD(FLOAT_1_0);
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2234, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2235, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  fadeOut = msgwnd->fadeOut;
  if ( fadeOut > 0 )
  {
    v11 = message->endTime - serverTime;
    if ( v11 < fadeOut )
    {
      v12 = 0i64;
      *(float *)&v12 = (float)v11 / (float)fadeOut;
      _XMM6 = v12;
    }
  }
  fadeIn = msgwnd->fadeIn;
  if ( fadeIn > 0 )
  {
    if ( scrollsIntoPlace && (scrollTime = msgwnd->scrollTime, fadeIn < scrollTime) )
    {
      v15 = serverTime - message->startTime;
      if ( v15 < scrollTime )
      {
        result = 0.0;
        if ( v15 <= scrollTime - fadeIn )
          return result;
        v17 = _XMM6;
        *(float *)&v17 = *(float *)&_XMM6 * (float)((float)(serverTime + fadeIn - message->startTime - scrollTime) / (float)fadeIn);
        _XMM6 = v17;
      }
    }
    else
    {
      v18 = serverTime - message->startTime;
      if ( v18 < fadeIn )
      {
        v19 = _XMM6;
        *(float *)&v19 = *(float *)&_XMM6 * (float)((float)v18 / (float)fadeIn);
        _XMM6 = v19;
      }
    }
  }
  if ( driftBuffer )
    __asm { vmaxss  xmm6, xmm6, xmm1 }
  return *(float *)&_XMM6;
}

/*
==============
Con_GetTextCopy
==============
*/
void Con_GetTextCopy(char *text, int maxSize)
{
  char *v2; 
  size_t textBufPos; 
  int v4; 
  int v5; 
  char *circularTextBuffer; 
  size_t v7; 

  v2 = text;
  if ( con.consoleWindow.activeLineCount )
  {
    textBufPos = con.consoleWindow.textBufPos;
    v4 = con.consoleWindow.lines[con.consoleWindow.firstLineIndex].textBufPos;
    v5 = con.consoleWindow.textBufPos - v4;
    if ( con.consoleWindow.textBufPos - v4 < 0 )
      v5 += con.consoleWindow.textBufSize;
    if ( v5 > maxSize - 1 )
    {
      v4 += v5 - maxSize + 1;
      if ( v4 > con.consoleWindow.textBufSize )
        v4 -= con.consoleWindow.textBufSize;
      v5 = maxSize - 1;
    }
    circularTextBuffer = &con.consoleWindow.circularTextBuffer[v4];
    if ( v4 >= con.consoleWindow.textBufPos )
    {
      memcpy_0(text, circularTextBuffer, con.consoleWindow.textBufSize - v4);
      v7 = textBufPos;
      circularTextBuffer = con.consoleWindow.circularTextBuffer;
      text = &v2[con.consoleWindow.textBufSize - v4];
    }
    else
    {
      v7 = con.consoleWindow.textBufPos - v4;
    }
    memcpy_0(text, circularTextBuffer, v7);
    v2[v5] = 0;
  }
  else
  {
    *text = 0;
  }
}

/*
==============
Con_HasActiveAutoComplete
==============
*/
bool Con_HasActiveAutoComplete()
{
  return conDrawInputGlob.matchIndex >= 0 && conDrawInputGlob.autoCompleteChoice[0];
}

/*
==============
Con_HasTooManyMatchesToShow
==============
*/
bool Con_HasTooManyMatchesToShow()
{
  return conDrawInputGlob.matchCount > con_inputMaxMatchesShown;
}

/*
==============
Con_Init
==============
*/
void Con_Init(void)
{
  float *p_charHeight; 
  field_t *v1; 
  __int64 v2; 
  float v3; 

  CL_Keys_ClearField(&g_consoleField);
  p_charHeight = &g_historyEditLines[0].charHeight;
  g_consoleField.charHeight = g_console_char_height;
  g_consoleField.widthInPixels = g_console_field_width;
  v1 = g_historyEditLines;
  g_consoleField.fixedSize = 1;
  v2 = 32i64;
  do
  {
    CL_Keys_ClearField(v1);
    v3 = g_console_char_height;
    ++v1;
    *((_DWORD *)p_charHeight - 1) = g_console_field_width;
    *((_DWORD *)p_charHeight + 1) = 1;
    *p_charHeight = v3;
    p_charHeight += 70;
    --v2;
  }
  while ( v2 );
  conDrawInputGlob.matchIndex = -1;
  Cmd_AddCommandInternal("clear", Con_Clear_f, &Con_Clear_f_VAR);
}

/*
==============
Con_InitClientAssets
==============
*/
void Con_InitClientAssets(void)
{
  Con_CheckResize(&scrPlaceFull);
}

/*
==============
Con_InitConfig
==============
*/
void Con_InitConfig(const LocalClientNum_t localClientNum, const char *config)
{
  int ControllerFromClient; 
  const char *v4; 
  __int64 v5; 
  int v6; 
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "exec %s\n", config);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    LODWORD(v5) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 555, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  Cmd_TokenizeString(dest);
  if ( Cmd_Argc() )
  {
    cmd_args.localClientNum[cmd_args.nesting] = localClientNum;
    cmd_args.controllerIndex[cmd_args.nesting] = ControllerFromClient;
    v4 = Cmd_Argv(0);
    if ( !Cmd_ExecuteCommandFunctions(v4, dest, &s_cmd_functions) && !Dvar_Command(0) )
      CL_Main_ForwardCommandToServer(localClientNum, dest);
  }
  Cmd_EndTokenizedString();
}

/*
==============
Con_InitDvars
==============
*/
void Con_InitDvars(void)
{
  char *v1; 
  unsigned int v2; 
  char *v3; 
  char *v4; 
  char *v5; 
  char *v6; 
  char *v7; 
  char *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const dvar_t *v26; 
  char *dvarName; 
  char *v28; 
  char (*v29)[28]; 
  __int64 v30; 
  char *_Buffer; 
  __int64 v32; 
  __int64 v33; 

  Dvar_BeginPermanentRegistration();
  _XMM12 = LODWORD(FLOAT_0_25);
  DVARVEC4_con_inputBoxColor = Dvar_RegisterVec4("NTRRQOTQQ", 0.25, 0.25, 0.2, 1.0, 0.0, 1.0, 0, "Color of the console input box");
  DVARVEC4_con_inputHintBoxColor = Dvar_RegisterVec4("MOOQQSSKTN", 0.40000001, 0.40000001, 0.34999999, 1.0, 0.0, 1.0, 0, "Color of the console input hint box");
  DVARVEC4_con_outputBarColor = Dvar_RegisterVec4("NPQPRQPSRT", 1.0, 1.0, 0.94999999, 0.60000002, 0.0, 1.0, 0, "Color of the console output slider bar");
  DVARVEC4_con_outputSliderColor = Dvar_RegisterVec4("OKKOQRLTON", 0.15000001, 0.15000001, 0.1, 0.60000002, 0.0, 1.0, 0, "Color of the console slider");
  DVARVEC4_con_outputWindowColor = Dvar_RegisterVec4("RNRONLLQQ", 0.34999999, 0.34999999, 0.30000001, 0.75, 0.0, 1.0, 0, "Color of the console output");
  DVARFLT_con_errormessagetime = Dvar_RegisterFloat("LLQROLOMQM", 8.0, 0.0, 3.4028235e38, 0, "Onscreen time for error messages in seconds");
  DVARFLT_con_minicontime = Dvar_RegisterFloat("MQNKNSQKQO", 4.0, 0.0, 3.4028235e38, 0, "Onscreen time for minicon messages in seconds");
  DVARINT_con_miniconlines = Dvar_RegisterInt("LSTSTMSPRQ", 5, 0, 100, 0, "Number of lines in the minicon message window");
  DVARFLT_con_MiniConSplitscreenScale = Dvar_RegisterFloat("LPNKNRPLKN", 1.4, 0.0, 3.4028235e38, 0, "Splitscreen scale value for the mini console");
  DVARINT_con_typewriterPrintSpeed = Dvar_RegisterInt("MLOSSMQQSL", 50, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to print each letter in the line.");
  DVARINT_con_typewriterDecayStartTime = Dvar_RegisterInt("MOKKSMSRPQ", 6000, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to spend between the build and disolve phases.");
  DVARINT_con_typewriterDecayDuration = Dvar_RegisterInt("LPOTLQSKLT", 700, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to spend disolving the line away.");
  DVARVEC3_con_typewriterColorBase = Dvar_RegisterVec3("NRQKSNRORT", 1.0, 1.0, 1.0, 0.0, 1.0, 0x40u, "Base color of typewritten objective text.");
  DVARVEC4_con_typewriterColorGlowUpdated = Dvar_RegisterVec4("TTNNQLPTQ", 0.0, 0.60000002, 0.18000001, 1.0, 0.0, 1.0, 0, "Color of typewritten objective text.");
  DVARVEC4_con_typewriterColorGlowCompleted = Dvar_RegisterVec4("MQRQQNTRSO", 0.0, 0.30000001, 0.80000001, 1.0, 0.0, 1.0, 0, "Color of typewritten objective text.");
  DVARVEC4_con_typewriterColorGlowFailed = Dvar_RegisterVec4("MOTTNQKORK", 0.80000001, 0.0, 0.0, 1.0, 0.0, 1.0, 0, "Color of typewritten objective text.");
  DVARVEC4_con_typewriterColorGlowCheckpoint = Dvar_RegisterVec4("LQQSKRTMMN", 0.60000002, 0.5, 0.60000002, 1.0, 0.0, 1.0, 0, "Color of typewritten objective text.");
  DVARBOOL_con_forcedSubtitleEnableOverrideValues = Dvar_RegisterBool("SQRQRQOKO", 0, 0x40u, "Do we want to enable the override for changing the stlye/color of forced subtitles");
  DVARVEC3_con_forcedSubtitleColor = Dvar_RegisterVec3("MMPTROLLTQ", 1.0, 0.80000001, 0.0, 0.0, 1.0, 0x40u, "Color of forced subtitle text( translated foreign language ).");
  DVARINT_con_forcedSubtitleTextStyle = Dvar_RegisterInt("MPSQRMTPTL", 6, 0, 8, 0, "Text style for the forced subtitles( translated foreign language ). See r_font_api.h for the #defines of ITEM_TEXTSYLE_<type> for values( 6 == shadowedmore )");
  v1 = con_gameMsgWindowNSplitscreenScale_Descs[0];
  v2 = 0;
  v28 = con_gameMsgWindowNSplitscreenScale_Names[0];
  v3 = con_gameMsgWindowNLineCount_Names[0];
  v29 = con_gameMsgWindowNLineCount_Names;
  dvarName = con_gameMsgWindowNFadeOutTime_Names[0];
  v4 = con_gameMsgWindowNFadeOutTime_Descs[0];
  _Buffer = con_gameMsgWindowNFadeInTime_Descs[0];
  v5 = con_gameMsgWindowNScrollTime_Descs[0];
  v6 = con_gameMsgWindowNLineCount_Descs[0];
  v33 = 0i64;
  v7 = con_gameMsgWindowNMsgTime_Descs[0];
  v32 = 0i64;
  v8 = con_gameMsgWindowNMsgTime_Names[0];
  v30 = 0i64;
  do
  {
    j_sprintf(v8, "con_gameMsgWindow%dMsgTime", v2);
    v9 = -1i64;
    do
      ++v9;
    while ( v8[v9] );
    if ( v9 != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 18, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNMsgTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNMsgTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v7, "On screen time for game messages in seconds in game message window %d", v2);
    v10 = -1i64;
    do
      ++v10;
    while ( v7[v10] );
    if ( v10 != 68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 18, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNMsgTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNMsgTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNMsgTime[v30] = Dvar_RegisterFloat(v8, defaultGameMessageTimes[v32], 0.0, 3.4028235e38, 0, v7);
    j_sprintf(v3, "con_gameMsgWindow%dLineCount", v2);
    v11 = -1i64;
    do
      ++v11;
    while ( v3[v11] );
    if ( v11 != 27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 21, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNLineCount_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNLineCount_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v6, "Maximum number of lines of text visible at once in game message window %d", v2);
    v12 = -1i64;
    do
      ++v12;
    while ( v6[v12] );
    if ( v12 != 72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 21, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNLineCount_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNLineCount_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNLineCount[v30] = Dvar_RegisterInt(v3, defaultGameMessageWindowLineCounts[v32], 1, 9, 0, v6);
    v13 = con_gameMsgWindowNScrollTime_Names[v33];
    j_sprintf(con_gameMsgWindowNScrollTime_Names[v33], "con_gameMsgWindow%dScrollTime", v2);
    v14 = -1i64;
    do
      ++v14;
    while ( v13[v14] );
    if ( v14 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 25, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNScrollTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNScrollTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v5, "Time to scroll messages when the oldest message is removed in game message window %d", v2);
    v15 = -1i64;
    do
      ++v15;
    while ( v5[v15] );
    if ( v15 != 83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 25, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNScrollTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNScrollTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNScrollTime[v30] = Dvar_RegisterFloat(v13, 0.25, 0.0, 3.4028235e38, 0, v5);
    v16 = con_gameMsgWindowNFadeInTime_Names[v33];
    j_sprintf(con_gameMsgWindowNFadeInTime_Names[v33], "con_gameMsgWindow%dFadeInTime", v2);
    v17 = -1i64;
    do
      ++v17;
    while ( v16[v17] );
    if ( v17 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 28, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeInTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeInTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(_Buffer, "Time to fade in new messages in game message window %d", v2);
    v18 = -1i64;
    do
      ++v18;
    while ( _Buffer[v18] );
    if ( v18 != 53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 28, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeInTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeInTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    _XMM0 = v2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm12, xmm13, xmm2; value
    }
    con_gameMsgWindowNFadeInTime[v30] = Dvar_RegisterFloat(v16, *(float *)&_XMM1, 0.0, 3.4028235e38, 0, _Buffer);
    j_sprintf(dvarName, "con_gameMsgWindow%dFadeOutTime", v2);
    v22 = -1i64;
    do
      ++v22;
    while ( dvarName[v22] );
    if ( v22 != 29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 31, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeOutTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeOutTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v4, "Time to fade out old messages in game message window %d", v2);
    v23 = -1i64;
    do
      ++v23;
    while ( v4[v23] );
    if ( v23 != 54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 31, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeOutTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeOutTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNFadeOutTime[v30] = Dvar_RegisterFloat(dvarName, 0.5, 0.0099999998, 3.4028235e38, 0, v4);
    j_sprintf(v28, "con_gameMsgWindow%dSplitscreenScale", v2);
    v24 = -1i64;
    do
      ++v24;
    while ( v28[v24] );
    if ( v24 != 34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 34, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNSplitscreenScale_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNSplitscreenScale_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v1, "Scaling of game message window %d in splitscreen", v2);
    v25 = -1i64;
    do
      ++v25;
    while ( v1[v25] );
    if ( v25 != 47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 34, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNSplitscreenScale_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNSplitscreenScale_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    v26 = Dvar_RegisterFloat(v28, defaultGameMessageSplitscreenScale[v32], 0.0, 3.4028235e38, 0, v1);
    ++v2;
    ++v33;
    v3 = &(*v29)[28];
    _Buffer += 54;
    v8 += 26;
    dvarName += 30;
    v7 += 69;
    v28 += 35;
    v6 += 73;
    ++v32;
    v5 += 84;
    con_gameMsgWindowNSplitscreenScale[v30] = v26;
    v4 += 55;
    ++v29;
    v1 += 48;
    ++v30;
  }
  while ( v2 < 4 );
  Dvar_EndPermanentRegistration();
}

/*
==============
Con_InitMessageBuffer
==============
*/
void Con_InitMessageBuffer(void)
{
  MessageLine *miniconLines; 
  __int64 v2; 
  char *p_lastTypingSoundTime; 
  __int64 v4; 
  MessageWindow *v5; 
  Message *v6; 
  MessageLine *v7; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  __int64 scrollTime; 
  int fadeIna; 
  __int64 fadeIn; 
  int fadeOut; 
  __int64 v18; 

  miniconLines = con.messageBuffer[0].miniconLines;
  _XMM6 = 0i64;
  v18 = 2i64;
  do
  {
    v2 = 0i64;
    p_lastTypingSoundTime = (char *)&miniconLines[-590].lastTypingSoundTime;
    v4 = 4i64;
    v5 = (MessageWindow *)&miniconLines[-248];
    v6 = (Message *)&miniconLines[-190].lastTypingSoundTime;
    v7 = (MessageLine *)((char *)miniconLines - 5696);
    do
    {
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      fadeOut = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      fadeIna = (int)*(float *)&_XMM1;
      __asm { vroundss xmm1, xmm6, xmm3, 1 }
      Con_InitMessageWindow(v5, v6, v7, p_lastTypingSoundTime, con_gameMsgWindowNLineCount[v2]->current.integer + 3, 3, 2048, (int)*(float *)&_XMM1, fadeIna, fadeOut);
      p_lastTypingSoundTime += 2048;
      ++v2;
      v7 += 12;
      v6 += 12;
      ++v5;
      --v4;
    }
    while ( v4 );
    v11 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer > 100 )
    {
      v12 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      LODWORD(fadeIn) = 100;
      LODWORD(scrollTime) = v12->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 903, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) ) <= ( 100 )", "%s <= %s\n\t%i, %i", "Dvar_GetInt( con_miniconlines )", "MINICON_LINES", scrollTime, fadeIn) )
        __debugbreak();
    }
    v13 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    Con_InitMessageWindow((MessageWindow *)&miniconLines[-3].textBufSize, (Message *)&miniconLines[100], miniconLines, (char *)&miniconLines[-174].lastTypingSoundTime, v13->current.integer, 0, 4096, 0, 0, 0);
    Con_InitMessageWindow((MessageWindow *)&miniconLines[176], (Message *)&miniconLines[183].lastTypingSoundTime, (MessageLine *)((char *)miniconLines + 4288), (char *)&miniconLines[133].textBufSize, 5, 0, 1024, 0, 0, 0);
    miniconLines = (MessageLine *)((char *)miniconLines + 18592);
    --v18;
  }
  while ( v18 );
}

/*
==============
Con_InitMessageWindow
==============
*/
void Con_InitMessageWindow(MessageWindow *msgwnd, Message *messages, MessageLine *lines, char *text, int lineCount, int padding, int textPoolSize, int scrollTime, int fadeIn, int fadeOut)
{
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 380, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( !lines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 381, ASSERT_TYPE_ASSERT, "(lines)", (const char *)&queryFormat, "lines") )
    __debugbreak();
  if ( lineCount < padding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 382, ASSERT_TYPE_ASSERT, "( lineCount ) >= ( padding )", "%s >= %s\n\t%i, %i", "lineCount", "padding", lineCount, padding) )
    __debugbreak();
  msgwnd->textBufSize = textPoolSize;
  msgwnd->scrollTime = scrollTime;
  msgwnd->fadeIn = fadeIn;
  msgwnd->lines = lines;
  msgwnd->padding = padding;
  msgwnd->fadeOut = fadeOut;
  msgwnd->messages = messages;
  msgwnd->circularTextBuffer = text;
  *(_QWORD *)&msgwnd->textBufPos = 0i64;
  *(_QWORD *)&msgwnd->activeLineCount = 0i64;
  msgwnd->lineCount = lineCount;
}

/*
==============
Con_IsActive
==============
*/
bool Con_IsActive(LocalClientNum_t localClientNum)
{
  return CL_Keys_IsCatcherActive(localClientNum, 1);
}

/*
==============
Con_IsAutoCompleteMatch
==============
*/
bool Con_IsAutoCompleteMatch(const char *query, const char *matchToText, int matchTextLen)
{
  unsigned __int64 v3; 
  const char *v5; 
  const dvar_t *v6; 
  int v8; 
  char v9; 
  int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  int v13; 
  const dvar_t *v14; 

  v3 = matchTextLen;
  v5 = query;
  if ( !query && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1459, ASSERT_TYPE_ASSERT, "(query)", (const char *)&queryFormat, "query") )
    __debugbreak();
  if ( !matchToText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1460, ASSERT_TYPE_ASSERT, "(matchToText)", (const char *)&queryFormat, "matchToText") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1461, ASSERT_TYPE_ASSERT, "(matchTextLen)", (const char *)&queryFormat, "matchTextLen") )
    __debugbreak();
  if ( !con_ignoreMatchPrefixOnly )
  {
    v6 = DVARBOOL_con_matchPrefixOnly;
    if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      return I_strnicmp(v5, matchToText, v3) == 0;
  }
  v8 = tolower(*matchToText);
  v9 = *v5;
  v10 = v8;
  if ( *v5 )
  {
    v11 = v3;
    v12 = 0i64;
    do
    {
      if ( tolower(v9) == v10 )
      {
        if ( ++v12 == v11 )
          return 1;
        v13 = matchToText[v12];
      }
      else
      {
        v14 = DVARBOOL_con_matchPrefixOnly;
        if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( !v14->current.enabled || !v12 )
          goto LABEL_28;
        v13 = *matchToText;
        v12 = 0i64;
      }
      v10 = tolower(v13);
LABEL_28:
      v9 = *++v5;
    }
    while ( v9 );
  }
  return 0;
}

/*
==============
Con_IsDvarCommand
==============
*/
char Con_IsDvarCommand(const char *cmd)
{
  const char *v1; 
  __int64 v2; 
  __int64 v3; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  const char *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  const char *v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  int v38; 
  const char *v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 
  const char *v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  int v50; 
  int v51; 
  int v52; 
  const char *v53; 
  signed __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  int v58; 
  int v59; 

  v1 = "set";
  v2 = 0x7FFFFFFFi64;
  v3 = 0x7FFFFFFFi64;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v5 = (unsigned __int8)v1[cmd - "set"];
    v6 = v3;
    v7 = *(unsigned __int8 *)v1++;
    --v3;
    if ( !v6 )
      break;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
      {
        v11 = "seta";
        v12 = 0x7FFFFFFFi64;
        if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v13 = (unsigned __int8)v11[cmd - "seta"];
          v14 = v12;
          v15 = *(unsigned __int8 *)v11++;
          --v12;
          if ( !v14 )
            break;
          if ( v13 != v15 )
          {
            v16 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v16 = v13;
            v13 = v16;
            v17 = v15 + 32;
            if ( (unsigned int)(v15 - 65) > 0x19 )
              v17 = v15;
            if ( v13 != v17 )
            {
              v18 = "setc";
              v19 = 0x7FFFFFFFi64;
              if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              while ( 1 )
              {
                v20 = (unsigned __int8)v18[cmd - "setc"];
                v21 = v19;
                v22 = *(unsigned __int8 *)v18++;
                --v19;
                if ( !v21 )
                  break;
                if ( v20 != v22 )
                {
                  v23 = v20 + 32;
                  if ( (unsigned int)(v20 - 65) > 0x19 )
                    v23 = v20;
                  v20 = v23;
                  v24 = v22 + 32;
                  if ( (unsigned int)(v22 - 65) > 0x19 )
                    v24 = v22;
                  if ( v20 != v24 )
                  {
                    v25 = "setcl";
                    v26 = 0x7FFFFFFFi64;
                    if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    while ( 1 )
                    {
                      v27 = (unsigned __int8)v25[cmd - "setcl"];
                      v28 = v26;
                      v29 = *(unsigned __int8 *)v25++;
                      --v26;
                      if ( !v28 )
                        break;
                      if ( v27 != v29 )
                      {
                        v30 = v27 + 32;
                        if ( (unsigned int)(v27 - 65) > 0x19 )
                          v30 = v27;
                        v27 = v30;
                        v31 = v29 + 32;
                        if ( (unsigned int)(v29 - 65) > 0x19 )
                          v31 = v29;
                        if ( v27 != v31 )
                        {
                          v32 = "sets";
                          v33 = 0x7FFFFFFFi64;
                          if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                            __debugbreak();
                          while ( 1 )
                          {
                            v34 = (unsigned __int8)v32[cmd - "sets"];
                            v35 = v33;
                            v36 = *(unsigned __int8 *)v32++;
                            --v33;
                            if ( !v35 )
                              break;
                            if ( v34 != v36 )
                            {
                              v37 = v34 + 32;
                              if ( (unsigned int)(v34 - 65) > 0x19 )
                                v37 = v34;
                              v34 = v37;
                              v38 = v36 + 32;
                              if ( (unsigned int)(v36 - 65) > 0x19 )
                                v38 = v36;
                              if ( v34 != v38 )
                              {
                                v39 = "reset";
                                v40 = 0x7FFFFFFFi64;
                                if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                  __debugbreak();
                                while ( 1 )
                                {
                                  v41 = (unsigned __int8)v39[cmd - "reset"];
                                  v42 = v40;
                                  v43 = *(unsigned __int8 *)v39++;
                                  --v40;
                                  if ( !v42 )
                                    break;
                                  if ( v41 != v43 )
                                  {
                                    v44 = v41 + 32;
                                    if ( (unsigned int)(v41 - 65) > 0x19 )
                                      v44 = v41;
                                    v41 = v44;
                                    v45 = v43 + 32;
                                    if ( (unsigned int)(v43 - 65) > 0x19 )
                                      v45 = v43;
                                    if ( v41 != v45 )
                                    {
                                      v46 = "toggle";
                                      v47 = 0x7FFFFFFFi64;
                                      if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                        __debugbreak();
                                      while ( 1 )
                                      {
                                        v48 = (unsigned __int8)v46[cmd - "toggle"];
                                        v49 = v47;
                                        v50 = *(unsigned __int8 *)v46++;
                                        --v47;
                                        if ( !v49 )
                                          break;
                                        if ( v48 != v50 )
                                        {
                                          v51 = v48 + 32;
                                          if ( (unsigned int)(v48 - 65) > 0x19 )
                                            v51 = v48;
                                          v48 = v51;
                                          v52 = v50 + 32;
                                          if ( (unsigned int)(v50 - 65) > 0x19 )
                                            v52 = v50;
                                          if ( v48 != v52 )
                                          {
                                            v53 = "togglep";
                                            if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                                              __debugbreak();
                                            v54 = cmd - "togglep";
                                            while ( 1 )
                                            {
                                              v55 = (unsigned __int8)v53[v54];
                                              v56 = v2;
                                              v57 = *(unsigned __int8 *)v53++;
                                              --v2;
                                              if ( !v56 )
                                                break;
                                              if ( v55 != v57 )
                                              {
                                                v58 = v55 + 32;
                                                if ( (unsigned int)(v55 - 65) > 0x19 )
                                                  v58 = v55;
                                                v55 = v58;
                                                v59 = v57 + 32;
                                                if ( (unsigned int)(v57 - 65) > 0x19 )
                                                  v59 = v57;
                                                if ( v55 != v59 )
                                                  return 0;
                                              }
                                              if ( !v55 )
                                                return 1;
                                            }
                                            return 1;
                                          }
                                        }
                                        if ( !v48 )
                                          return 1;
                                      }
                                      return 1;
                                    }
                                  }
                                  if ( !v41 )
                                    return 1;
                                }
                                return 1;
                              }
                            }
                            if ( !v34 )
                              return 1;
                          }
                          return 1;
                        }
                      }
                      if ( !v27 )
                        return 1;
                    }
                    return 1;
                  }
                }
                if ( !v20 )
                  return 1;
              }
              return 1;
            }
          }
          if ( !v13 )
            return 1;
        }
        return 1;
      }
    }
  }
  while ( v5 );
  return 1;
}

/*
==============
Con_IsGameMessageWindowActive
==============
*/
bool Con_IsGameMessageWindowActive(LocalClientNum_t localClientNum, int windowIndex)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = windowIndex;
  v3 = localClientNum;
  if ( (unsigned int)windowIndex >= 4 )
  {
    v6 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2552, ASSERT_TYPE_ASSERT, "(unsigned)( windowIndex ) < (unsigned)( (CON_DEST_GAME_LAST - CON_DEST_GAME_FIRST + 1) )", "windowIndex doesn't index GAMEMSG_WINDOW_COUNT\n\t%i not in [0, %i)", windowIndex, v6) )
      __debugbreak();
  }
  return con.currentServerTime[4648 * v3 - 7234 + 16 * v2] > 0;
}

/*
==============
Con_IsValidGameMessageWindow
==============
*/
bool Con_IsValidGameMessageWindow(int windowIndex)
{
  return (unsigned int)windowIndex <= 3;
}

/*
==============
Con_Linefeed
==============
*/
void Con_Linefeed(LocalClientNum_t localClientNum, int channel, int flags)
{
  __int64 v3; 
  print_msg_dest_t i; 
  MessageWindow *DestWindow; 
  const dvar_t *v8; 

  v3 = localClientNum;
  if ( !Con_IsChannelOpen(channel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 848, ASSERT_TYPE_ASSERT, "(Con_IsChannelOpen(channel))", (const char *)&queryFormat, "Con_IsChannelOpen(channel)") )
    __debugbreak();
  if ( Con_IsChannelVisible(CON_DEST_CONSOLE, channel, flags) )
    Con_UpdateMessageWindowLine((LocalClientNum_t)v3, &con.consoleWindow, 1, flags);
  if ( Con_IsChannelVisible(CON_DEST_MINICON, channel, flags) )
    Con_UpdateMessageWindowLine((LocalClientNum_t)v3, (MessageWindow *)&con.currentServerTime[4648 * v3 - 5776], 1, flags);
  for ( i = CON_DEST_GAME_FIRST; (unsigned int)i <= CON_DEST_GAME4; ++i )
  {
    if ( Con_IsChannelVisible(i, channel, flags) )
    {
      DestWindow = Con_GetDestWindow((LocalClientNum_t)v3, i);
      Con_UpdateMessageWindowLine((LocalClientNum_t)v3, DestWindow, 1, flags);
    }
  }
  v8 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer && Con_IsChannelVisible(CON_DEST_ERROR, channel, flags) )
    Con_UpdateMessageWindowLine((LocalClientNum_t)v3, (MessageWindow *)&con.currentServerTime[4648 * v3 - 4704], 1, flags);
  con.lineOffset = 0;
  if ( con.displayLineOffset == con.consoleWindow.activeLineCount - 1 )
    ++con.displayLineOffset;
}

/*
==============
Con_OneTimeInit
==============
*/
void Con_OneTimeInit(void)
{
  Con_InitDvars();
  con.consoleWindow.textBufSize = 0x8000;
  con.consoleWindow.lines = con.consoleLines;
  con.consoleWindow.messages = con.consoleMessages;
  con.consoleWindow.circularTextBuffer = con.consoleText;
  *(_QWORD *)&con.consoleWindow.textBufPos = 0i64;
  *(_QWORD *)&con.consoleWindow.activeLineCount = 0i64;
  con.consoleWindow.lineCount = 1024;
  *(_OWORD *)&con.consoleWindow.padding = _xmm;
  Con_InitMessageBuffer();
  con.color = colorWhite;
}

/*
==============
Con_OpenConsole
==============
*/
void Con_OpenConsole(LocalClientNum_t localClientNum)
{
  if ( !CL_Keys_IsCatcherActive(localClientNum, 1) )
    Con_ToggleConsole();
}

/*
==============
Con_OpenConsoleOutput
==============
*/
void Con_OpenConsoleOutput(LocalClientNum_t localClientNum)
{
  bool IsCatcherActive; 
  bool outputVisible; 

  IsCatcherActive = CL_Keys_IsCatcherActive(localClientNum, 1);
  outputVisible = con.outputVisible;
  if ( IsCatcherActive )
    outputVisible = 1;
  con.outputVisible = outputVisible;
}

/*
==============
Con_PageDown
==============
*/
void Con_PageDown(void)
{
  int activeLineCount; 

  activeLineCount = con.displayLineOffset + 2;
  if ( con.consoleWindow.activeLineCount < con.displayLineOffset + 2 )
    activeLineCount = con.consoleWindow.activeLineCount;
  con.displayLineOffset = activeLineCount;
}

/*
==============
Con_PageUp
==============
*/
void Con_PageUp(void)
{
  int activeLineCount; 

  con.displayLineOffset -= 2;
  if ( con.displayLineOffset < con.visibleLineCount )
  {
    activeLineCount = con.consoleWindow.activeLineCount;
    if ( con.visibleLineCount < con.consoleWindow.activeLineCount )
      activeLineCount = con.visibleLineCount;
    con.displayLineOffset = activeLineCount;
  }
}

/*
==============
Con_ResetMessageWindowTimes
==============
*/
void Con_ResetMessageWindowTimes(MessageWindow *msgwnd, int serverTime)
{
  int i; 
  int lineCount; 
  int v6; 
  __int64 v7; 
  MessageLine *v8; 
  Message *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 

  for ( i = 0; i < msgwnd->activeLineCount; v9->endTime = v10 )
  {
    if ( msgwnd->lineCount <= 0 )
    {
      LODWORD(v11) = msgwnd->lineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 279, ASSERT_TYPE_ASSERT, "( ( msgwnd->lineCount > 0 ) )", "( msgwnd->lineCount ) = %i", v11) )
        __debugbreak();
    }
    lineCount = msgwnd->lineCount;
    v6 = (i + msgwnd->firstLineIndex) % lineCount;
    v7 = v6;
    if ( v6 >= (unsigned int)lineCount )
    {
      LODWORD(v12) = msgwnd->lineCount;
      LODWORD(v11) = (i + msgwnd->firstLineIndex) % lineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( lineIndex ) < (unsigned)( msgwnd->lineCount )", "lineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v8 = &msgwnd->lines[v7];
    if ( v8->messageIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v12) = msgwnd->lineCount;
      LODWORD(v11) = v8->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    ++i;
    v9 = &msgwnd->messages[v8->messageIndex];
    v10 = serverTime + v9->endTime - v9->startTime;
    v9->startTime = serverTime;
  }
}

/*
==============
Con_ServerTimeJumped
==============
*/
void Con_ServerTimeJumped(LocalClientNum_t localClientNum, int serverTime)
{
  __int64 v2; 
  __int64 v4; 
  int *p_lineCount; 
  int i; 
  int v7; 
  __int64 v8; 
  int *v9; 
  int *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = localClientNum;
  Con_ResetMessageWindowTimes(&con.consoleWindow, serverTime);
  v4 = 4i64;
  v14 = v2;
  p_lineCount = &con.messageBuffer[v2].gamemsgWindows[0].lineCount;
  do
  {
    for ( i = 0; i < p_lineCount[7]; v10[1] = v11 )
    {
      if ( *p_lineCount <= 0 )
      {
        LODWORD(v12) = *p_lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 279, ASSERT_TYPE_ASSERT, "( ( msgwnd->lineCount > 0 ) )", "( msgwnd->lineCount ) = %i", v12) )
          __debugbreak();
      }
      v7 = (i + p_lineCount[6]) % *p_lineCount;
      v8 = v7;
      if ( v7 >= (unsigned int)*p_lineCount )
      {
        LODWORD(v13) = *p_lineCount;
        LODWORD(v12) = (i + p_lineCount[6]) % *p_lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( lineIndex ) < (unsigned)( msgwnd->lineCount )", "lineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v9 = (int *)(*(_QWORD *)(p_lineCount - 7) + 24 * v8);
      if ( *v9 >= (unsigned int)*p_lineCount )
      {
        LODWORD(v13) = *p_lineCount;
        LODWORD(v12) = *v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      ++i;
      v10 = (int *)(*(_QWORD *)(p_lineCount - 5) + 8i64 * *v9);
      v11 = serverTime + v10[1] - *v10;
      *v10 = serverTime;
    }
    p_lineCount += 16;
    --v4;
  }
  while ( v4 );
  Con_ResetMessageWindowTimes(&con.messageBuffer[v14].miniconWindow, serverTime);
  Con_ResetMessageWindowTimes(&con.messageBuffer[v14].errorWindow, serverTime);
}

/*
==============
Con_SetServerTime
==============
*/
void Con_SetServerTime(LocalClientNum_t localClientNum, int serverTime)
{
  __int64 v2; 
  int v5; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 264, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( con.currentServerTime ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( con.currentServerTime )\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  con.currentServerTime[v2] = serverTime;
}

/*
==============
Con_Shutdown
==============
*/
void Con_Shutdown(void)
{
  Cmd_RemoveCommand("clear");
}

/*
==============
Con_ShutdownClientAssets
==============
*/
void Con_ShutdownClientAssets(void)
{
  ;
}

/*
==============
Con_ToggleConsole
==============
*/
void Con_ToggleConsole(void)
{
  CL_Keys_ClearField(&g_consoleField);
  if ( conDrawInputGlob.matchIndex >= 0 && conDrawInputGlob.autoCompleteChoice[0] )
  {
    conDrawInputGlob.matchIndex = -1;
    conDrawInputGlob.autoCompleteChoice[0] = 0;
  }
  g_consoleField.widthInPixels = g_console_field_width;
  g_consoleField.fixedSize = 1;
  con.outputVisible = 0;
  g_consoleField.charHeight = g_console_char_height;
  if ( ((LOBYTE(clientUIActives[0].keyCatchers) ^ LOBYTE(clientUIActives[1].keyCatchers)) & 1) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 187, ASSERT_TYPE_ASSERT, "((clientUIActives[0].keyCatchers & 0x0001) == (clientUIActives[localClientNum].keyCatchers & 0x0001))", (const char *)&queryFormat, "(clientUIActives[0].keyCatchers & KEYCATCH_CONSOLE) == (clientUIActives[localClientNum].keyCatchers & KEYCATCH_CONSOLE)") )
      __debugbreak();
    clientUIActives[0].keyCatchers ^= 1u;
    clientUIActives[1].keyCatchers ^= 1u;
  }
  else
  {
    clientUIActives[0].keyCatchers ^= 1u;
    clientUIActives[1].keyCatchers ^= 1u;
  }
}

/*
==============
Con_ToggleConsoleOutput
==============
*/
void Con_ToggleConsoleOutput(void)
{
  con.outputVisible = !con.outputVisible;
}

/*
==============
Con_TokenizeInput
==============
*/
const char *Con_TokenizeInput()
{
  const char *v0; 
  unsigned __int8 v1; 
  int v2; 

  Cmd_TokenizeString(g_consoleField.buffer);
  v0 = Cmd_Argv(0);
  v1 = *v0;
  if ( *v0 == 92 || v1 == 47 )
    v1 = *++v0;
  if ( isspace(v1) )
  {
    do
      v2 = *(unsigned __int8 *)++v0;
    while ( isspace(v2) );
  }
  return v0;
}

/*
==============
Con_Top
==============
*/
void Con_Top(void)
{
  int activeLineCount; 

  activeLineCount = con.consoleWindow.activeLineCount;
  if ( con.visibleLineCount < con.consoleWindow.activeLineCount )
    activeLineCount = con.visibleLineCount;
  con.displayLineOffset = activeLineCount;
}

/*
==============
Con_UpdateMessageWindowLine
==============
*/
void Con_UpdateMessageWindowLine(LocalClientNum_t localClientNum, MessageWindow *msgwnd, int linefeed, int flags)
{
  __int64 v4; 
  unsigned int lineCount; 
  int v9; 
  int v10; 
  MessageLine *v11; 
  int typingStartTime; 
  int activeLineCount; 
  int v14; 
  int v15; 
  int v16; 
  MessageLine *lines; 
  __int64 v18; 
  MessageLine *v19; 
  int v20; 
  int v21; 
  const dvar_t *v22; 
  int v23; 
  int v24; 
  const dvar_t *v25; 
  int v26; 
  int integer; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  MessageLine *v38; 
  Message *messages; 
  __int64 messageIndex; 
  Message *v41; 
  __int64 v42; 
  __int64 v43; 

  v4 = localClientNum;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 724, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  lineCount = msgwnd->lineCount;
  if ( lineCount )
  {
    if ( msgwnd->firstLineIndex >= lineCount )
    {
      LODWORD(v42) = msgwnd->firstLineIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 729, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->firstLineIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->firstLineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v42, msgwnd->lineCount) )
        __debugbreak();
    }
    if ( msgwnd->messageIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v43) = msgwnd->lineCount;
      LODWORD(v42) = msgwnd->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 730, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->messageIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    v9 = 0;
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v4) == CA_ACTIVE )
      v10 = con.currentServerTime[v4];
    else
      v10 = 0;
    v11 = &msgwnd->lines[(msgwnd->firstLineIndex + msgwnd->activeLineCount) % msgwnd->lineCount];
    v11->messageIndex = msgwnd->messageIndex;
    *(_QWORD *)&v11->typingStartTime = 0i64;
    v11->flags = flags;
    if ( (flags & 1) != 0 )
    {
      activeLineCount = msgwnd->activeLineCount;
      if ( !activeLineCount )
        goto LABEL_30;
      v14 = activeLineCount - 1;
      if ( v14 < 0 )
        goto LABEL_30;
      v15 = msgwnd->lineCount;
      v16 = v14 + msgwnd->firstLineIndex;
      lines = msgwnd->lines;
      while ( 1 )
      {
        v18 = v16 % v15;
        if ( (lines[v18].flags & 1) != 0 )
          break;
        --v16;
        if ( --v14 < 0 )
          goto LABEL_30;
      }
      if ( v16 % v15 == -1 )
        goto LABEL_30;
      v19 = &lines[v18];
      if ( (v19->flags & 1) != 0 )
      {
        v21 = PrintableCharsCount(msgwnd, &lines[v18]);
        v22 = DVARINT_con_typewriterPrintSpeed;
        v23 = v21;
        if ( !DVARINT_con_typewriterPrintSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterPrintSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        v20 = v23 * v22->current.integer;
      }
      else
      {
        v20 = 0;
      }
      typingStartTime = v19->typingStartTime + v20 + 150;
      if ( typingStartTime - v10 < 250 )
LABEL_30:
        typingStartTime = v10 + 250;
    }
    else
    {
      typingStartTime = 0;
    }
    v11->typingStartTime = typingStartTime;
    if ( typingStartTime )
    {
      if ( (v11->flags & 1) != 0 )
      {
        v24 = PrintableCharsCount(msgwnd, v11);
        v25 = DVARINT_con_typewriterPrintSpeed;
        v26 = v24;
        if ( !DVARINT_con_typewriterPrintSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterPrintSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        integer = v26 * v25->current.integer;
        v28 = DVARINT_con_typewriterDecayStartTime;
        if ( !DVARINT_con_typewriterDecayStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterDecayStartTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( integer < v28->current.integer )
        {
          v29 = DVARINT_con_typewriterDecayStartTime;
          if ( !DVARINT_con_typewriterDecayStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterDecayStartTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          integer = v29->current.integer;
        }
        v30 = DVARINT_con_typewriterDecayDuration;
        if ( !DVARINT_con_typewriterDecayDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterDecayDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        v9 = v30->current.integer + integer;
        typingStartTime = v11->typingStartTime;
      }
      msgwnd->messages[v11->messageIndex].endTime = typingStartTime + v9;
    }
    Con_CopyCurrentConsoleLineText(msgwnd, v11);
    if ( linefeed )
    {
      v31 = msgwnd->activeLineCount;
      v32 = msgwnd->lineCount;
      if ( v31 == v32 )
      {
        Con_FreeFirstMessageWindowLine(msgwnd);
        v31 = msgwnd->activeLineCount;
        v32 = msgwnd->lineCount;
      }
      v33 = v31 + 1;
      v34 = msgwnd->padding - v32;
      msgwnd->activeLineCount = v33;
      v35 = v33 + v34;
      if ( v35 > 0 )
      {
        v36 = (msgwnd->firstLineIndex + v35 - 1) % (__int64)v32;
        v37 = (int)v36;
        if ( (unsigned int)v36 >= v32 )
        {
          LODWORD(v43) = v32;
          LODWORD(v42) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 765, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v42, v43) )
            __debugbreak();
        }
        v38 = &msgwnd->lines[v37];
        if ( v38->messageIndex >= (unsigned int)msgwnd->lineCount )
        {
          LODWORD(v43) = msgwnd->lineCount;
          LODWORD(v42) = v38->messageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v42, v43) )
            __debugbreak();
        }
        messages = msgwnd->messages;
        messageIndex = v38->messageIndex;
        v41 = &messages[messageIndex];
        if ( v41->endTime - msgwnd->fadeOut > v10 )
        {
          if ( messages[messageIndex].endTime < v41->startTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 772, ASSERT_TYPE_ASSERT, "( message->endTime ) >= ( message->startTime )", "%s >= %s\n\t%i, %i", "message->endTime", "message->startTime", messages[messageIndex].endTime, v41->startTime) )
            __debugbreak();
          v41->endTime = v10 + msgwnd->fadeOut;
        }
      }
    }
  }
}

/*
==============
Con_UpdateNotifyMessageWindow
==============
*/
void Con_UpdateNotifyMessageWindow(LocalClientNum_t localClientNum, int channel, int duration, int flags, print_msg_dest_t dest)
{
  __int64 v6; 
  const dvar_t *v7; 
  const char *v8; 
  int v11; 
  int v12; 
  MessageWindow *DestWindow; 
  unsigned int lineCount; 
  int v15; 
  Message *messages; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v6 = localClientNum;
  if ( !Con_IsChannelVisible(dest, channel, flags) )
    return;
  if ( !duration )
  {
    if ( dest == CON_DEST_MINICON )
    {
      v7 = DVARFLT_con_minicontime;
      if ( !DVARFLT_con_minicontime )
      {
        v8 = "con_minicontime";
LABEL_13:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
          __debugbreak();
      }
    }
    else
    {
      if ( dest != CON_DEST_ERROR )
      {
        if ( (unsigned int)(dest - 4) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 485, ASSERT_TYPE_ASSERT, "(dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST)", (const char *)&queryFormat, "dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST") )
          __debugbreak();
        goto LABEL_16;
      }
      v7 = DVARFLT_con_errormessagetime;
      if ( !DVARFLT_con_errormessagetime )
      {
        v8 = "con_errormessagetime";
        goto LABEL_13;
      }
    }
    Dvar_CheckFrontendServerThread(v7);
LABEL_16:
    _XMM0 = 0i64;
    __asm { vroundss xmm1, xmm0, xmm3, 1 }
    duration = (int)*(float *)&_XMM1;
  }
  v11 = 0;
  v12 = 0;
  if ( duration >= 0 )
    v12 = duration;
  DestWindow = Con_GetDestWindow((LocalClientNum_t)v6, dest);
  if ( !DestWindow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 495, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  lineCount = DestWindow->lineCount;
  if ( lineCount )
  {
    if ( DestWindow->messageIndex >= lineCount )
    {
      LODWORD(v19) = DestWindow->lineCount;
      LODWORD(v18) = DestWindow->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->messageIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !DestWindow->lineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 503, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount != 0)", (const char *)&queryFormat, "msgwnd->lineCount != 0") )
      __debugbreak();
    v15 = (DestWindow->messageIndex + 1) % DestWindow->lineCount;
    DestWindow->messageIndex = v15;
    messages = DestWindow->messages;
    v17 = v15;
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v6) == CA_ACTIVE )
      v11 = con.currentServerTime[v6];
    messages[v17].startTime = v11;
    messages[v17].endTime = v12 + v11;
  }
}

/*
==============
PrintableCharsCount
==============
*/
__int64 PrintableCharsCount(const MessageWindow *msgwnd, MessageLine *line)
{
  __int64 result; 
  unsigned int v5; 
  int v6; 
  char *circularTextBuffer; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  char v11; 
  int usedCount; 
  char psText[4]; 
  char v14; 

  if ( line->textBufSize && ((msgwnd->textBufSize - 1) & msgwnd->textBufSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 629, ASSERT_TYPE_ASSERT, "(line->textBufSize ? IsPowerOf2( msgwnd->textBufSize ) : true)", (const char *)&queryFormat, "line->textBufSize ? IsPowerOf2( msgwnd->textBufSize ) : true") )
    __debugbreak();
  result = 0i64;
  v5 = 0;
  v6 = 0;
  *(_DWORD *)psText = 0;
  v14 = 0;
  if ( line->textBufSize > 0 )
  {
    do
    {
      circularTextBuffer = msgwnd->circularTextBuffer;
      v8 = v6 + line->textBufPos;
      v9 = msgwnd->textBufSize - 1i64;
      psText[0] = circularTextBuffer[v9 & v8];
      psText[1] = circularTextBuffer[v9 & (v8 + 1)];
      psText[2] = circularTextBuffer[v9 & (v8 + 2)];
      psText[3] = circularTextBuffer[v9 & (v8 + 3)];
      v10 = SEH_DecodeLetter(psText, &usedCount);
      v6 += usedCount;
      ++v5;
      if ( v10 == 94 )
      {
        v11 = msgwnd->circularTextBuffer[(msgwnd->textBufSize - 1i64) & (v6 + line->textBufPos)];
        psText[0] = v11;
        if ( v11 != 94 && (unsigned __int8)(v11 - 39) <= 0x17u )
          ++v6;
      }
    }
    while ( v6 < line->textBufSize );
    return v5;
  }
  return result;
}

