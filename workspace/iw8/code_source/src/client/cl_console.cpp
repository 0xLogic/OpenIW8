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
  const dvar_t *v15; 
  int v16; 
  GfxFont *FontHandle; 
  ClActiveClient *Client; 
  int IsRightToLeft; 
  __int64 v37; 
  TextLine *v40; 
  const char *textLeft; 
  const char *textRight; 
  unsigned __int64 v43; 
  int v44; 
  float fmt; 
  __int64 tracking; 
  __int64 leftToRight; 
  TextLine *outLines; 
  char colorEscape; 
  unsigned __int8 v51; 
  int outLineCount; 
  __int64 v53; 
  TextLine v54; 
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
  v15 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer )
    Con_UpdateNotifyMessageWindow(localClientNum, channel, duration, flags, CON_DEST_ERROR);
  if ( channel != con.prevChannel && con.lineOffset )
    Con_Linefeed(localClientNum, con.prevChannel, flags);
  v16 = 0;
  __asm { vmovaps [rsp+32C8h+var_58], xmm6 }
  if ( channel == 4 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3ec00000; scale
      vmovss  xmm1, cs:__real@3ec00000; scale
    }
    FontHandle = UI_GetFontHandle(&scrPlaceFull, 8, *(float *)&_XMM2);
    *(double *)&_XMM0 = R_NormalizedTextScale(FontHandle, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm0 }
LABEL_35:
    if ( FontHandle )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+8]
        vmulss  xmm6, xmm0, xmm1
        vaddss  xmm2, xmm6, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si ebx, xmm4
      }
      IsRightToLeft = Language_IsRightToLeft();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vxorps  xmm1, xmm1, xmm1
        vdivss  xmm2, xmm6, xmm0
        vcvtsi2ss xmm1, xmm1, r13d; boxWidth
        vmovss  dword ptr [rsp+32C8h+fmt], xmm2
      }
      R_Font_WordWrap(txt, *(float *)&_XMM1, FontHandle, _EBX, fmt, 0, 512, IsRightToLeft == 0, &v54, &outLineCount);
    }
    else
    {
      memset_0(&v54.pixelWidth + 1, 0, 0x2FECui64);
      v37 = -1i64;
      v54.textLeft = txt;
      while ( txt[++v37] != 0 )
        ;
      outLineCount = 1;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+32C8h+var_3268.pixelWidth], xmm0
      }
      v54.textRight = &txt[v37 - 1];
    }
    colorEscape = 0;
    v51 = color;
    if ( outLineCount > 512 )
    {
      LODWORD(outLines) = 512;
      LODWORD(leftToRight) = outLineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1049, ASSERT_TYPE_ASSERT, "( numLines ) <= ( MAX_LINES )", "%s <= %s\n\t%i, %i", "numLines", "MAX_LINES", leftToRight, outLines) )
        __debugbreak();
    }
    if ( outLineCount > 0 )
    {
      v40 = &v54;
      do
      {
        if ( (!v40->textLeft || !v40->textRight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1053, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
          __debugbreak();
        textLeft = v40->textLeft;
        if ( v40->textLeft )
        {
          textRight = v40->textRight;
          if ( textRight )
          {
            if ( textLeft <= textRight )
            {
              R_PrepareTextLine(textLeft, textRight - textLeft + 1, output, 512, 1, &colorEscape);
              Core_strcpy(con.textTempLine, 0x200ui64, output);
              v53 = 512i64;
              v43 = -1i64;
              do
                ++v43;
              while ( output[v43] );
              v44 = 512;
              if ( v43 < 0x200 )
                v44 = v43;
              con.lineOffset += v44;
              Con_Linefeed(localClientNum, channel, flags);
            }
          }
        }
        ++v16;
        ++v40;
      }
      while ( v16 < outLineCount );
    }
    result = v51;
    con.prevChannel = channel;
    goto LABEL_59;
  }
  if ( channel == 7 )
  {
    FontHandle = NULL;
LABEL_34:
    __asm { vmovss  xmm1, cs:__real@3f800000 }
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
    *(double *)&_XMM0 = ((double (__fastcall *)(ClActiveClient *))Client->GetHudMsgCharHeight)(Client);
    FontHandle = cls.consoleFont;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3caaaaab; scale
    }
    *(double *)&_XMM0 = R_NormalizedTextScale(cls.consoleFont, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm0 }
    goto LABEL_35;
  }
  result = (unsigned __int8)color;
LABEL_59:
  --callDepth;
  __asm { vmovaps xmm6, [rsp+32C8h+var_58] }
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

void __fastcall ConDrawInput_AutoCompleteArg(const char *const *stringList, int stringCount, double _XMM2_8)
{
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  __int64 v12; 
  int v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  char **v16; 
  const char *v17; 
  __int64 v18; 
  signed __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  const char *v26; 
  __int64 v27; 
  int v29; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  GfxFont *consoleFont; 
  char *buffer; 
  int v36; 
  char *v37; 
  int v38; 
  char *v39; 
  int v40; 
  const char *v70; 
  int v74; 
  float fmt; 
  float y; 
  float xScale; 
  float v85; 
  float v86; 
  int v87; 
  int v88; 
  __int64 v90; 
  vec4_t color; 
  __int64 Base[160]; 

  v9 = stringCount;
  if ( Cmd_Argc() < 2 )
  {
    v11 = (char *)&queryFormat.fmt + 3;
    v12 = 0i64;
  }
  else
  {
    v10 = Cmd_Argv(1);
    v11 = v10;
    v12 = -1i64;
    do
      ++v12;
    while ( v10[v12] );
  }
  v87 = 0;
  v13 = 0;
  v88 = 0;
  v14 = 0i64;
  v90 = v9;
  if ( (int)v9 <= 0 )
    return;
  v15 = 0i64;
  v16 = (char **)Base;
  do
  {
    if ( v12 )
    {
      v17 = stringList[v15];
      v18 = v12;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v19 = v11 - v17;
      while ( 1 )
      {
        v20 = (unsigned __int8)v17[v19];
        v21 = v18;
        v22 = *(unsigned __int8 *)v17++;
        --v18;
        if ( !v21 )
        {
LABEL_24:
          v13 = v87;
          goto LABEL_25;
        }
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
            break;
        }
        if ( !v20 )
          goto LABEL_24;
      }
      v13 = v87;
      goto LABEL_41;
    }
LABEL_25:
    if ( v13 == 32 )
      break;
    v25 = -1i64;
    do
      ++v25;
    while ( stringList[v15][v25] );
    if ( v14 + v25 >= 0x400 )
      break;
    *v16 = (char *)&Base[32] + v14;
    if ( v14 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1589, ASSERT_TYPE_ASSERT, "(matchBufferUsed <= sizeof( matchBuffer ))", (const char *)&queryFormat, "matchBufferUsed <= sizeof( matchBuffer )") )
      __debugbreak();
    Com_CopyAndStripExtension(*v16, 1024 - v14, stringList[v15]);
    v26 = *v16;
    v27 = -1i64;
    while ( v26[++v27] != 0 )
      ;
    v14 += v27 + 1;
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1274, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    v29 = R_TextWidth(v26, 0, cls.consoleFont);
    v30 = v88;
    if ( v88 < v29 )
      v30 = v29;
    v87 = ++v13;
    ++v16;
    v88 = v30;
LABEL_41:
    ++v15;
  }
  while ( v15 < v90 );
  v31 = 0i64;
  if ( v13 )
  {
    __asm
    {
      vmovaps [rsp+608h+var_38], xmm6
      vmovaps [rsp+608h+var_48], xmm7
      vmovaps [rsp+608h+var_58], xmm8
    }
    v32 = v13;
    __asm
    {
      vmovaps [rsp+608h+var_68], xmm9
      vmovaps [rsp+608h+var_78], xmm10
    }
    qsort(Base, v13, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)ConDrawInput_CompareStrings);
    v33 = 0;
    consoleFont = cls.consoleFont;
    if ( isspace(g_consoleField.buffer[0]) )
    {
      buffer = g_consoleField.buffer;
      do
      {
        v36 = *++buffer;
        ++v33;
      }
      while ( isspace(v36) );
    }
    v37 = &g_consoleField.buffer[v33];
    if ( !isspace(*v37) )
    {
      do
      {
        v38 = *++v37;
        ++v33;
      }
      while ( !isspace(v38) );
    }
    v39 = &g_consoleField.buffer[v33];
    if ( isspace(*v39) )
    {
      do
      {
        v40 = *++v39;
        ++v33;
      }
      while ( isspace(v40) );
    }
    R_TextWidth(g_consoleField.buffer, v33, consoleFont);
    __asm
    {
      vmovss  xmm6, cs:__real@40000000
      vmovss  xmm4, cs:conDrawInputGlob.fontHeight
    }
    _RBX = DVARVEC4_con_inputHintBoxColor;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, cs:conDrawInputGlob.leftX
      vsubss  xmm7, xmm1, xmm6
      vaddss  xmm1, xmm4, dword ptr cs:?con@@3UConsole@@A.screenMin+4; Console con
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+608h+var_5B8]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, [rsp+608h+var_5B4]
      vaddss  xmm9, xmm2, cs:__real@40800000
      vaddss  xmm8, xmm1, xmm6
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm10, xmm1, cs:__real@40800000
    }
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+608h+color], xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rsp+608h+color+4], xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rsp+608h+color+8], xmm0
      vmovss  xmm1, dword ptr [rbx+34h]
      vmovss  dword ptr [rsp+608h+color+0Ch], xmm1
      vmovaps xmm1, xmm8; y
      vmovaps xmm3, xmm10; h
      vmovaps xmm2, xmm9; w
      vmovaps xmm0, xmm7; x
    }
    ConDraw_Box(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
    __asm
    {
      vmovaps xmm10, [rsp+608h+var_78]
      vaddss  xmm1, xmm7, xmm6
      vaddss  xmm0, xmm8, xmm6
      vmovss  cs:conDrawInputGlob.x, xmm1
      vmovss  cs:conDrawInputGlob.y, xmm0
      vmovss  cs:conDrawInputGlob.leftX, xmm1
    }
    if ( v32 > 0 )
    {
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vxorps  xmm9, xmm9, xmm9
      }
      do
      {
        v70 = (const char *)Base[v31];
        if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1281, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, cs:conDrawInputGlob.y
          vaddss  xmm6, xmm0, cs:conDrawInputGlob.fontHeight
          vmovss  xmm7, cs:conDrawInputGlob.x
        }
        v74 = R_TextHeight(cls.consoleFont);
        __asm
        {
          vmovss  [rsp+608h+var_5C8], xmm9
          vmovss  [rsp+608h+var_5D0], xmm8
          vmovss  [rsp+608h+xScale], xmm8
          vmovss  [rsp+608h+y], xmm6
          vmovss  dword ptr [rsp+608h+fmt], xmm7
        }
        R_AddCmdDrawText(v70, 0x7FFFFFFF, cls.consoleFont, v74, fmt, y, xScale, v85, v86, &con_inputDvarInfoColor);
        __asm
        {
          vmovss  xmm0, cs:conDrawInputGlob.y
          vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
          vmovss  xmm2, cs:conDrawInputGlob.leftX
        }
        ++v31;
        __asm
        {
          vmovss  cs:conDrawInputGlob.y, xmm1
          vmovss  cs:conDrawInputGlob.x, xmm2
        }
      }
      while ( v31 < v32 );
    }
    __asm
    {
      vmovaps xmm8, [rsp+608h+var_58]
      vmovaps xmm7, [rsp+608h+var_48]
      vmovaps xmm6, [rsp+608h+var_38]
      vmovaps xmm9, [rsp+608h+var_68]
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
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.y
      vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
      vmovss  xmm2, cs:conDrawInputGlob.leftX
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.x, xmm2
    }
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
  char **stringList[2]; 
  CmdAutoCompleteResults result; 
  vec4_t color; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1739, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) && (!conDrawInputGlob.hasExactMatch || !str[conDrawInputGlob.inputTextLen]) )
  {
    _RDI = DVARVEC4_con_inputHintBoxColor;
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm2, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vsubss  xmm4, xmm2, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vmovss  dword ptr [rsp+88h+color], xmm0
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsp+88h+color+4], xmm1
      vmovss  xmm0, dword ptr [rdi+30h]
      vmovss  dword ptr [rsp+88h+color+8], xmm0
      vmovss  xmm1, dword ptr [rdi+34h]
      vmovss  xmm0, cs:conDrawInputGlob.x
      vsubss  xmm0, xmm0, cs:__real@40000000; x
      vmovss  dword ptr [rsp+88h+color+0Ch], xmm1
      vmovss  xmm1, cs:conDrawInputGlob.fontHeight
      vaddss  xmm3, xmm1, cs:__real@40800000; h
      vsubss  xmm1, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vsubss  xmm2, xmm4, xmm1; w
      vmovss  xmm4, cs:conDrawInputGlob.y
      vsubss  xmm1, xmm4, cs:__real@40000000; y
    }
    ConDraw_Box(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
    ConDrawInput_Text(str, &con_inputCommandMatchColor);
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.y
      vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
      vmovss  xmm2, cs:conDrawInputGlob.leftX
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.x, xmm2
    }
    _RAX = Cmd_GetAutoCompleteParameters(&result, str, "ConDrawInput_DetailedCmdMatch");
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrd rdx, xmm0, 2; stringCount
      vmovups xmmword ptr [rsp+88h+stringList], xmm0
    }
    if ( (int)_RDX > 0 )
      ConDrawInput_AutoCompleteArg((const char *const *)stringList[0], _RDX, *(double *)&_XMM2);
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
  int v7; 
  const dvar_t *VarByName; 
  bool HasLatchedValue; 
  const char *v36; 
  int v43; 
  const char *v46; 
  int v49; 
  const char *v52; 
  const char *description; 
  unsigned __int64 v59; 
  int v60; 
  unsigned __int64 i; 
  int v62; 
  const char *v75; 
  unsigned int v79; 
  __int64 v81; 
  __int64 v88; 
  int v92; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float y; 
  float ya; 
  float yb; 
  float xScale; 
  float xScalea; 
  float xScaleb; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  int outLineCount; 
  vec4_t color; 
  char outBuffer[1024]; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1656, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( Con_IsAutoCompleteMatch(str, conDrawInputGlob.inputText, conDrawInputGlob.inputTextLen) && (!conDrawInputGlob.hasExactMatch || !str[conDrawInputGlob.inputTextLen]) )
  {
    v7 = *str;
    __asm
    {
      vmovaps [rsp+4E8h+var_28], xmm6
      vmovaps [rsp+4E8h+var_38], xmm7
      vmovaps [rsp+4E8h+var_48], xmm8
      vmovaps [rsp+4E8h+var_58], xmm9
      vmovaps [rsp+4E8h+var_68], xmm11
    }
    if ( isalpha(v7) || (VarByName = Dvar_FindVarByChecksumString(str)) == NULL )
    {
      VarByName = Dvar_FindVarByName(str);
      if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1674, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
    }
    HasLatchedValue = Dvar_HasLatchedValue(VarByName);
    __asm { vmovss  xmm7, cs:__real@40000000 }
    _RBP = DVARVEC4_con_inputHintBoxColor;
    _ESI = 0;
    _ER14 = HasLatchedValue;
    __asm
    {
      vmovd   xmm0, r14d
      vmovd   xmm1, esi
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@40400000
      vblendvps xmm1, xmm0, xmm7, xmm2
      vmovss  [rsp+4E8h+var_498], xmm1
    }
    if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+28h]
      vmovss  dword ptr [rsp+4E8h+color], xmm0
      vmovss  xmm1, dword ptr [rbp+2Ch]
      vmovss  dword ptr [rsp+4E8h+color+4], xmm1
      vmovss  xmm0, dword ptr [rbp+30h]
      vmovss  dword ptr [rsp+4E8h+color+8], xmm0
      vmovss  xmm1, dword ptr [rbp+34h]
      vmovss  xmm0, cs:conDrawInputGlob.x
      vmovss  dword ptr [rsp+4E8h+color+0Ch], xmm1
      vmovss  xmm1, cs:conDrawInputGlob.fontHeight
      vmulss  xmm2, xmm1, [rsp+4E8h+var_498]
      vmovss  xmm1, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vsubss  xmm4, xmm1, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vaddss  xmm3, xmm2, cs:__real@40800000; h
      vmovss  xmm1, cs:conDrawInputGlob.y
      vsubss  xmm0, xmm0, xmm7; x
      vsubss  xmm2, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vsubss  xmm1, xmm1, xmm7; y
      vsubss  xmm2, xmm4, xmm2; w
    }
    ConDraw_Box(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
    ConDrawInput_TextLimitChars(str, 64, &con_inputDvarMatchColor);
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.x
      vaddss  xmm1, xmm0, cs:__real@44228000
      vmovss  cs:conDrawInputGlob.x, xmm1
    }
    v36 = Dvar_DisplayableValue(VarByName);
    ConDrawInput_TextLimitChars(v36, 40, &con_inputDvarValueColor);
    __asm
    {
      vmovss  xmm1, cs:conDrawInputGlob.fontHeight
      vaddss  xmm0, xmm1, cs:conDrawInputGlob.y
      vmovss  xmm8, cs:conDrawInputGlob.leftX
      vmovss  xmm9, cs:__real@3f800000
      vmovss  cs:conDrawInputGlob.y, xmm0
      vmovss  cs:conDrawInputGlob.x, xmm8
      vxorps  xmm11, xmm11, xmm11
    }
    if ( _ER14 )
    {
      __asm { vaddss  xmm6, xmm0, xmm1 }
      v43 = R_TextHeight(cls.consoleFont);
      __asm
      {
        vmovss  [rsp+4E8h+var_4A8], xmm11
        vmovss  [rsp+4E8h+var_4B0], xmm9
        vmovss  [rsp+4E8h+xScale], xmm9
        vmovss  [rsp+4E8h+y], xmm6
        vmovss  dword ptr [rsp+4E8h+fmt], xmm8
      }
      R_AddCmdDrawText("  latched value", 0x7FFFFFFF, cls.consoleFont, v43, fmt, y, xScale, v109, v112, &con_inputDvarInactiveValueColor);
      __asm
      {
        vmovss  xmm0, cs:conDrawInputGlob.x
        vaddss  xmm1, xmm0, cs:__real@44228000
        vmovss  cs:conDrawInputGlob.x, xmm1
      }
      v46 = Dvar_DisplayableLatchedValue(VarByName);
      ConDrawInput_TextLimitChars(v46, 40, &con_inputDvarInactiveValueColor);
      __asm
      {
        vmovss  xmm1, cs:conDrawInputGlob.fontHeight
        vaddss  xmm0, xmm1, cs:conDrawInputGlob.y
        vmovss  xmm8, cs:conDrawInputGlob.leftX
        vmovss  cs:conDrawInputGlob.y, xmm0
        vmovss  cs:conDrawInputGlob.x, xmm8
      }
    }
    __asm { vaddss  xmm6, xmm1, xmm0 }
    v49 = R_TextHeight(cls.consoleFont);
    __asm
    {
      vmovss  [rsp+4E8h+var_4A8], xmm11
      vmovss  [rsp+4E8h+var_4B0], xmm9
      vmovss  [rsp+4E8h+xScale], xmm9
      vmovss  [rsp+4E8h+y], xmm6
      vmovss  dword ptr [rsp+4E8h+fmt], xmm8
    }
    R_AddCmdDrawText("  default", 0x7FFFFFFF, cls.consoleFont, v49, fmta, ya, xScalea, v110, v113, &con_inputDvarInactiveValueColor);
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.x
      vaddss  xmm1, xmm0, cs:__real@44228000
      vmovss  cs:conDrawInputGlob.x, xmm1
    }
    v52 = Dvar_DisplayableResetValue(VarByName);
    ConDrawInput_TextLimitChars(v52, 40, &con_inputDvarInactiveValueColor);
    __asm
    {
      vmovss  xmm1, cs:conDrawInputGlob.fontHeight
      vaddss  xmm0, xmm1, cs:conDrawInputGlob.y
      vmovss  xmm2, cs:conDrawInputGlob.leftX
      vaddss  xmm1, xmm0, xmm1
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.x, xmm2
    }
    Dvar_DomainToString_GetLines(VarByName, outBuffer, 0x400ui64, &outLineCount);
    description = VarByName->description;
    __asm { vmovaps xmm8, [rsp+4E8h+var_48] }
    if ( description )
    {
      v59 = -1i64;
      do
        ++v59;
      while ( description[v59] );
      v60 = 1;
      for ( i = 0i64; i < v59; v60 = v62 )
      {
        v62 = v60 + 1;
        if ( description[i] != 10 )
          v62 = v60;
        ++i;
      }
    }
    else
    {
      v60 = 0;
    }
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.x
      vxorps  xmm1, xmm1, xmm1
      vsubss  xmm0, xmm0, xmm7; x
      vcvtsi2ss xmm1, xmm1, ecx
      vmulss  xmm2, xmm1, cs:conDrawInputGlob.fontHeight
      vmovss  xmm1, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vsubss  xmm4, xmm1, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vaddss  xmm3, xmm2, cs:__real@40800000; h
      vmovss  xmm1, cs:conDrawInputGlob.y
      vsubss  xmm2, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vsubss  xmm1, xmm1, xmm7; y
      vsubss  xmm2, xmm4, xmm2; w
    }
    ConDraw_Box(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
    v75 = VarByName->description;
    if ( v75 )
    {
      ConDrawInput_Text(v75, &con_inputDvarDescriptionColor);
      __asm
      {
        vmovss  xmm4, cs:conDrawInputGlob.fontHeight
        vmovss  xmm5, cs:conDrawInputGlob.leftX
        vmovss  xmm0, cs:conDrawInputGlob.y
      }
      if ( v60 >= 8 )
      {
        v79 = ((unsigned int)(v60 - 8) >> 3) + 1;
        __asm { vmulss  xmm6, xmm4, xmm7 }
        v81 = v79;
        _ESI = 8 * v79;
        do
        {
          __asm
          {
            vaddss  xmm0, xmm6, xmm0
            vaddss  xmm1, xmm0, xmm4
            vaddss  xmm2, xmm1, xmm4
            vaddss  xmm3, xmm2, xmm4
            vaddss  xmm0, xmm3, xmm4
            vaddss  xmm1, xmm0, xmm4
            vaddss  xmm0, xmm1, xmm4
            vmovss  cs:conDrawInputGlob.x, xmm5
          }
          --v81;
        }
        while ( v81 );
        __asm { vmovss  cs:conDrawInputGlob.y, xmm0 }
      }
      if ( _ESI < v60 )
      {
        v88 = (unsigned int)(v60 - _ESI);
        do
        {
          __asm
          {
            vmovss  cs:conDrawInputGlob.x, xmm5
            vaddss  xmm0, xmm0, xmm4
          }
          --v88;
        }
        while ( v88 );
        __asm { vmovss  cs:conDrawInputGlob.y, xmm0 }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm4, cs:conDrawInputGlob.fontHeight
        vmovss  xmm0, cs:conDrawInputGlob.y
      }
    }
    __asm
    {
      vmovss  xmm7, cs:conDrawInputGlob.x
      vaddss  xmm6, xmm4, xmm0
    }
    v92 = R_TextHeight(cls.consoleFont);
    __asm
    {
      vmovss  [rsp+4E8h+var_4A8], xmm11
      vmovss  [rsp+4E8h+var_4B0], xmm9
      vmovss  [rsp+4E8h+xScale], xmm9
      vmovss  [rsp+4E8h+y], xmm6
      vmovss  dword ptr [rsp+4E8h+fmt], xmm7
    }
    R_AddCmdDrawText(outBuffer, 0x7FFFFFFF, cls.consoleFont, v92, fmtb, yb, xScaleb, v111, v114, &con_inputDvarInfoColor);
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.y
      vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
      vmovss  xmm2, cs:conDrawInputGlob.leftX
      vmovaps xmm11, [rsp+4E8h+var_68]
      vmovaps xmm9, [rsp+4E8h+var_58]
      vmovaps xmm7, [rsp+4E8h+var_38]
      vmovaps xmm6, [rsp+4E8h+var_28]
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.x, xmm2
    }
    if ( VarByName->type == 8 && Cmd_Argc() == 2 )
      ConDrawInput_AutoCompleteArg(VarByName->domain.enumeration.strings, VarByName->domain.enumeration.stringCount, *(double *)&_XMM2);
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
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.x
      vaddss  xmm1, xmm0, cs:__real@44228000
      vmovss  cs:conDrawInputGlob.x, xmm1
    }
    VariantString = Dvar_GetVariantString(str);
    ConDrawInput_TextLimitChars(VariantString, 40, &con_inputDvarValueColor);
    __asm
    {
      vmovss  xmm0, cs:conDrawInputGlob.y
      vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
      vmovss  xmm2, cs:conDrawInputGlob.leftX
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.x, xmm2
    }
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
  int v9; 
  float fmt; 
  float y; 
  float v16; 
  float v17; 
  float v18; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1281, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:conDrawInputGlob.fontHeight
    vaddss  xmm6, xmm0, cs:conDrawInputGlob.y
    vmovss  xmm7, cs:conDrawInputGlob.x
  }
  v9 = R_TextHeight(cls.consoleFont);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  [rsp+78h+y], xmm6
    vmovss  dword ptr [rsp+78h+fmt], xmm7
  }
  R_AddCmdDrawText(str, 0x7FFFFFFF, cls.consoleFont, v9, fmt, y, v16, v17, v18, color);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
ConDrawInput_TextLimitChars
==============
*/
void ConDrawInput_TextLimitChars(const char *str, int maxChars, const vec4_t *color)
{
  int v11; 
  float fmt; 
  float y; 
  float v18; 
  float v19; 
  float v20; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1288, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:conDrawInputGlob.fontHeight
    vaddss  xmm6, xmm0, cs:conDrawInputGlob.y
    vmovss  xmm7, cs:conDrawInputGlob.x
  }
  v11 = R_TextHeight(cls.consoleFont);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  [rsp+78h+y], xmm6
    vmovss  dword ptr [rsp+78h+fmt], xmm7
  }
  R_AddCmdDrawText(str, maxChars, cls.consoleFont, v11, fmt, y, v18, v19, v20, color);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
ConDraw_Box
==============
*/

void __fastcall ConDraw_Box(double x, double y, double w, double h, const vec4_t *color)
{
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
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  vec4_t v69; 
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
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  _RBX = color;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+0D8h+var_A0], xmm7
    vmovss  [rsp+0D8h+var_A8], xmm7
    vmovss  [rsp+0D8h+var_B0], xmm7
    vmovss  [rsp+0D8h+var_B8], xmm7
    vmovaps xmm9, xmm3
    vmovaps xmm11, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm10, xmm0
  }
  R_AddCmdDrawStretchPic(*(float *)&x, *(float *)&y, *(float *)&w, *(float *)&h, v49, v54, v59, v64, color, cls.whiteMaterial);
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmulss  xmm2, xmm3, dword ptr [rbx+4]
    vmulss  xmm0, xmm3, dword ptr [rbx]
    vmulss  xmm1, xmm3, dword ptr [rbx+8]
    vmovss  xmm6, cs:__real@40000000
    vmovss  dword ptr [rsp+0D8h+var_88+4], xmm2
    vmovss  xmm2, dword ptr [rbx+0Ch]
    vmovss  [rsp+0D8h+var_A0], xmm7
    vmovss  dword ptr [rsp+0D8h+var_88+0Ch], xmm2
    vmovss  [rsp+0D8h+var_A8], xmm7
    vmovss  dword ptr [rsp+0D8h+var_88], xmm0
    vmovss  dword ptr [rsp+0D8h+var_88+8], xmm1
    vmovss  [rsp+0D8h+var_B0], xmm7
    vmovaps xmm2, xmm6; w
    vmovaps xmm3, xmm9; h
    vmovaps xmm1, xmm8; y
    vmovaps xmm0, xmm10; x
    vmovss  [rsp+0D8h+var_B8], xmm7
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v50, v55, v60, v65, &v69, cls.whiteMaterial);
  __asm
  {
    vmovss  [rsp+0D8h+var_A0], xmm7
    vaddss  xmm0, xmm11, xmm10
    vmovss  [rsp+0D8h+var_A8], xmm7
    vmovss  [rsp+0D8h+var_B0], xmm7
    vsubss  xmm0, xmm0, xmm6; x
    vmovaps xmm3, xmm9; h
    vmovaps xmm2, xmm6; w
    vmovaps xmm1, xmm8; y
    vmovss  [rsp+0D8h+var_B8], xmm7
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v51, v56, v61, v66, &v69, cls.whiteMaterial);
  __asm
  {
    vmovss  [rsp+0D8h+var_A0], xmm7
    vmovss  [rsp+0D8h+var_A8], xmm7
    vmovss  [rsp+0D8h+var_B0], xmm7
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm11; w
    vmovaps xmm1, xmm8; y
    vmovaps xmm0, xmm10; x
    vmovss  [rsp+0D8h+var_B8], xmm7
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v52, v57, v62, v67, &v69, cls.whiteMaterial);
  __asm
  {
    vaddss  xmm0, xmm9, xmm8
    vmovss  [rsp+0D8h+var_A0], xmm7
    vmovss  [rsp+0D8h+var_A8], xmm7
    vsubss  xmm1, xmm0, xmm6; y
    vmovss  [rsp+0D8h+var_B0], xmm7
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm11; w
    vmovaps xmm0, xmm10; x
    vmovss  [rsp+0D8h+var_B8], xmm7
  }
  R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v53, v58, v63, v68, &v69, cls.whiteMaterial);
  _R11 = &v70;
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

  _EDI = 0;
  __asm
  {
    vmovss  xmm2, cs:__real@40800000
    vmovd   xmm1, edi
    vmovaps [rsp+48h+var_18], xmm6
  }
  _EDX = cl_modifiedDebugPlacement->current.color[0];
  __asm
  {
    vmovd   xmm0, edx
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@c1a00000
    vblendvps xmm6, xmm1, xmm2, xmm3
    vmovaps xmm1, xmm6; x
  }
  ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, 1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vmovss  dword ptr cs:?con@@3UConsole@@A.screenMin, xmm1; Console con
    vmovaps xmm1, xmm6; y
  }
  ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, 1);
  __asm
  {
    vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vmovss  dword ptr cs:?con@@3UConsole@@A.screenMin+4, xmm1; Console con
    vmovaps xmm1, xmm6; x
  }
  ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, 3);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm0, 1
    vmovaps xmm1, xmm6; y
    vmovss  dword ptr cs:?con@@3UConsole@@A.screenMax, xmm2; Console con
  }
  ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, 3);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vmovss  dword ptr cs:?con@@3UConsole@@A.screenMax+4, xmm1; Console con
  }
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
    __asm
    {
      vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax+4; Console con
      vsubss  xmm2, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin+4; Console con
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vsubss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, cs:__real@41c00000
      vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vsubss  xmm1, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vcvttss2si eax, xmm2
      vsubss  xmm2, xmm1, cs:__real@41e00000
    }
    con.visibleLineCount = _EAX / fontHeight;
    __asm { vcvttss2si eax, xmm2 }
    con.visiblePixelWidth = _EAX;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
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

void __fastcall Con_DrawConsole(LocalClientNum_t localClientNum, double _XMM1_8)
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
    __asm
    {
      vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vmulss  xmm0, xmm0, cs:__real@3f000000; x
      vmovss  xmm1, dword ptr cs:?con@@3UConsole@@A.screenMin+4; y
    }
    R_GPU_SetDrawTopOffset(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; y
      vxorps  xmm0, xmm0, xmm0; x
    }
    R_GPU_SetDrawTopOffset(*(float *)&_XMM0, *(float *)&_XMM1);
  }
}

/*
==============
Con_DrawErrors
==============
*/
void Con_DrawErrors(LocalClientNum_t localClientNum, int xPos, int yPos, int charHeight, float alpha)
{
  __int64 v6; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  ClActiveClient *Client; 
  float v18; 
  vec4_t color; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  v6 = localClientNum;
  s_dontAllowNewErrors = 1;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; scale
    vmovss  xmm0, [rsp+0C8h+alpha]
  }
  font = UI_GetFontHandle(ActivePlacement, 2, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+var_58], xmm6
    vmovss  dword ptr [rsp+0C8h+var_58+4], xmm6
    vmovss  dword ptr [rsp+0C8h+var_58+8], xmm6
    vmovss  dword ptr [rsp+0C8h+var_58+0Ch], xmm0
  }
  if ( !&con.currentServerTime[4648 * v6 - 4704] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2442, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v6) == CA_ACTIVE )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v6);
    if ( Client->ShouldDisplayMsgWindow(Client) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f70a3d7
        vmovss  [rsp+0C8h+var_70], xmm0
      }
      Con_DrawMessageWindowOldToNew((LocalClientNum_t)v6, (MessageWindow *)&con.currentServerTime[4648 * v6 - 4704], xPos, yPos, charHeight, 1, 1, 0, font, &color, 3, v18, 4);
    }
  }
  s_dontAllowNewErrors = 0;
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
}

/*
==============
Con_DrawGameMessageWindow
==============
*/
void Con_DrawGameMessageWindow(LocalClientNum_t localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, GfxFont *font, float fontScale, const vec4_t *color, int textStyle, int textAlignMode, msgwnd_mode_t mode)
{
  __int64 v14; 
  __int64 v16; 
  int v26; 
  int v27; 
  float v28; 

  v14 = windowIndex;
  v16 = localClientNum;
  if ( !CL_Pause_IsGamePaused() )
  {
    __asm { vmovaps [rsp+98h+var_28], xmm6 }
    if ( CL_IsRenderingSplitScreen() )
    {
      _RAX = con_gameMsgWindowNSplitscreenScale[v14];
      __asm { vmovss  xmm6, dword ptr [rax+28h] }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
    }
    __asm
    {
      vmovss  xmm0, [rsp+98h+fontScale]
      vmulss  xmm1, xmm0, cs:__real@42400000
      vaddss  xmm3, xmm1, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vcvttss2si ebp, xmm1
    }
    if ( (unsigned int)v14 >= 4 )
    {
      v27 = 4;
      v26 = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2483, ASSERT_TYPE_ASSERT, "(unsigned)( windowIndex ) < (unsigned)( (CON_DEST_GAME_LAST - CON_DEST_GAME_FIRST + 1) )", "windowIndex doesn't index GAMEMSG_WINDOW_COUNT\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    __asm { vmovss  [rsp+98h+var_48], xmm6 }
    Con_DrawMessageWindow((LocalClientNum_t)v16, (MessageWindow *)&con.currentServerTime[4648 * v16 - 7248 + 16 * v14], xPos, yPos, _EBP, horzAlign, vertAlign, font, color, textStyle, v28, mode, textAlignMode);
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
  }
}

/*
==============
Con_DrawInput
==============
*/
void Con_DrawInput(LocalClientNum_t localClientNum)
{
  const char *v4; 
  int v29; 
  const char *v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  int v36; 
  const char *inputText; 
  char v40; 
  const char *v41; 
  unsigned __int64 v42; 
  bool Bool_Internal_DebugName; 
  int v44; 
  int matchCount; 
  int inputTextLen; 
  const char *v47; 
  const dvar_t *v48; 
  char *v49; 
  int AutoCompleteColorCodedStringContiguous; 
  int cursorPos; 
  int drawLen; 
  char *v64; 
  const char *v74; 
  vec4_t color; 
  char _Buffer[256]; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1843, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( CL_Keys_IsCatcherActive(localClientNum, 1) && Sys_IsMainThread() )
  {
    __asm { vmovaps [rsp+1A8h+var_38], xmm6 }
    v4 = j_va("%s: %s> ", "IW8_DEV", "8.24");
    R_TextHeight(cls.consoleFont);
    __asm
    {
      vmovss  xmm6, cs:__real@40000000
      vaddss  xmm2, xmm6, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
    }
    _RDI = DVARVEC4_con_inputBoxColor;
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr cs:?con@@3UConsole@@A.screenMin+4; Console con
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  cs:conDrawInputGlob.fontHeight, xmm0
      vmovss  cs:conDrawInputGlob.x, xmm2
      vmovss  cs:conDrawInputGlob.y, xmm1
      vmovss  cs:conDrawInputGlob.leftX, xmm2
    }
    if ( !DVARVEC4_con_inputBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputBoxColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm2, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vsubss  xmm4, xmm2, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vmovss  dword ptr [rsp+1A8h+color], xmm0
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsp+1A8h+color+4], xmm1
      vmovss  xmm0, dword ptr [rdi+30h]
      vmovss  dword ptr [rsp+1A8h+color+8], xmm0
      vmovss  xmm1, dword ptr [rdi+34h]
      vmovss  xmm0, cs:conDrawInputGlob.x
      vmovss  dword ptr [rsp+1A8h+color+0Ch], xmm1
      vmovss  xmm1, cs:conDrawInputGlob.fontHeight
      vaddss  xmm3, xmm1, cs:__real@40800000; h
      vsubss  xmm0, xmm0, xmm6; x
      vsubss  xmm1, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
      vsubss  xmm2, xmm4, xmm1; w
      vmovss  xmm4, cs:conDrawInputGlob.y
      vsubss  xmm1, xmm4, xmm6; y
    }
    ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &color);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1308, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
      __debugbreak();
    ConDrawInput_Text(v4, &con_versionColor);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1274, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    R_TextWidth(v4, 0, cls.consoleFont);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vaddss  xmm2, xmm1, cs:conDrawInputGlob.x
    }
    v29 = 1;
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovss  cs:conDrawInputGlob.x, xmm2
      vmovss  cs:conDrawInputGlob.leftX, xmm2
      vsubss  xmm2, xmm1, xmm2
      vcvttss2si ecx, xmm2
    }
    if ( _ECX > 1 )
      v29 = _ECX;
    g_consoleField.widthInPixels = v29;
    v33 = Con_TokenizeInput();
    v34 = -1i64;
    conDrawInputGlob.inputText = v33;
    v35 = -1i64;
    do
      ++v35;
    while ( v33[v35] );
    v36 = truncate_cast<int,unsigned __int64>(v35);
    conDrawInputGlob.inputTextLen = v36;
    conDrawInputGlob.autoCompleteChoice[0] = 0;
    if ( !v36 )
    {
      __asm
      {
        vcvttss2si r9d, cs:conDrawInputGlob.y; y
        vcvttss2si r8d, cs:conDrawInputGlob.x; x
      }
      conDrawInputGlob.mayAutoComplete = v36;
      CL_Keys_DrawField(localClientNum, &g_consoleField, _ER8, _ER9, 5, 5);
      Cmd_EndTokenizedString();
LABEL_78:
      __asm { vmovaps xmm6, [rsp+1A8h+var_38] }
      return;
    }
    inputText = conDrawInputGlob.inputText;
    if ( Cmd_Argc() > 1 && Con_IsDvarCommand(conDrawInputGlob.inputText) )
    {
      v40 = 1;
      v41 = Cmd_Argv(1);
      conDrawInputGlob.inputText = v41;
      v42 = -1i64;
      do
        ++v42;
      while ( v41[v42] );
      conDrawInputGlob.inputTextLen = truncate_cast<int,unsigned __int64>(v42);
      if ( !conDrawInputGlob.inputTextLen )
      {
        conDrawInputGlob.mayAutoComplete = 0;
        Con_DrawInputPrompt(localClientNum);
        Cmd_EndTokenizedString();
        goto LABEL_78;
      }
    }
    else
    {
      v40 = 0;
    }
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_con_matchPrefixOnly, "con_matchPrefixOnly");
    v44 = 0;
    conDrawInputGlob.hasExactMatch = 0;
    conDrawInputGlob.matchCount = 0;
    if ( Bool_Internal_DebugName )
    {
      con_ignoreMatchPrefixOnly = 1;
      Dvar_ForEachName(ConDrawInput_IncrMatchCounter);
      if ( !v40 )
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
          goto LABEL_78;
        }
        if ( conDrawInputGlob.matchIndex < conDrawInputGlob.matchCount && conDrawInputGlob.autoCompleteChoice[0] )
        {
          if ( conDrawInputGlob.matchIndex >= 0 )
          {
            inputTextLen = conDrawInputGlob.inputTextLen;
            v47 = conDrawInputGlob.inputText;
            if ( v40 )
              v44 = j_sprintf(_Buffer, "^2%s ", inputText);
            v48 = DVARBOOL_con_matchPrefixOnly;
            if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v48);
            v49 = &_Buffer[v44];
            if ( v48->current.enabled )
              AutoCompleteColorCodedStringContiguous = Con_GetAutoCompleteColorCodedStringContiguous(conDrawInputGlob.autoCompleteChoice, v47, inputTextLen, v49);
            else
              AutoCompleteColorCodedStringContiguous = Con_GetAutoCompleteColorCodedStringDiscontiguous(conDrawInputGlob.autoCompleteChoice, v47, inputTextLen, v49);
            __asm { vcvttss2si r12d, cs:conDrawInputGlob.y }
            cursorPos = v44 + AutoCompleteColorCodedStringContiguous;
            __asm { vcvttss2si edi, cs:conDrawInputGlob.x }
            do
              ++v34;
            while ( _Buffer[v34] );
            if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1786, ASSERT_TYPE_ASSERT, "(strlen( colorCodedLine ) > 0)", (const char *)&queryFormat, "strlen( colorCodedLine ) > 0") )
              __debugbreak();
            drawLen = SEH_PrintStrlen(_Buffer);
            if ( drawLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 1788, ASSERT_TYPE_ASSERT, "( ( drawLen > 0 ) )", "( colorCodedLine ) = %s", _Buffer) )
              __debugbreak();
            CL_Keys_DrawTextOverrideField(localClientNum, &g_consoleField, _EDI, _ER12, 5, 5, _Buffer, drawLen, cursorPos);
            goto LABEL_61;
          }
        }
        else
        {
          conDrawInputGlob.matchIndex = -1;
        }
        Con_DrawInputPrompt(localClientNum);
LABEL_61:
        __asm
        {
          vmovss  xmm2, cs:conDrawInputGlob.fontHeight
          vaddss  xmm1, xmm2, cs:conDrawInputGlob.y
        }
        _RBX = DVARVEC4_con_inputHintBoxColor;
        __asm
        {
          vmovss  xmm0, cs:conDrawInputGlob.leftX
          vaddss  xmm2, xmm1, xmm2
          vmovss  cs:conDrawInputGlob.y, xmm2
          vmovss  cs:conDrawInputGlob.x, xmm0
        }
        if ( !DVARVEC4_con_inputHintBoxColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_inputHintBoxColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  dword ptr [rsp+1A8h+color], xmm0
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vmovss  dword ptr [rsp+1A8h+color+4], xmm1
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+1A8h+color+8], xmm0
          vmovss  xmm1, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+1A8h+color+0Ch], xmm1
        }
        if ( matchCount <= con_inputMaxMatchesShown )
        {
          if ( matchCount == 1 || conDrawInputGlob.hasExactMatch && Con_AnySpaceAfterCommand() )
          {
            Dvar_ForEachName(ConDrawInput_DetailedDvarMatch);
            if ( !v40 )
              Cmd_ForEach(ConDrawInput_DetailedCmdMatch);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, cs:conDrawInputGlob.x
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, ebp
              vmulss  xmm2, xmm1, cs:conDrawInputGlob.fontHeight
              vmovss  xmm1, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
              vsubss  xmm4, xmm1, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
              vaddss  xmm3, xmm2, cs:__real@40800000; h
              vmovss  xmm1, cs:conDrawInputGlob.y
              vsubss  xmm0, xmm0, xmm6; x
              vsubss  xmm2, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
              vsubss  xmm1, xmm1, xmm6; y
              vsubss  xmm2, xmm4, xmm2; w
            }
            ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &color);
            Dvar_ForEachName(ConDrawInput_DvarMatch);
            if ( !v40 )
              Cmd_ForEach(ConDrawInput_CmdMatch);
            if ( Dvar_FindVarByName(conDrawInputGlob.autoCompleteChoice) )
            {
              __asm
              {
                vmovss  xmm0, cs:conDrawInputGlob.y
                vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
                vmovss  xmm2, cs:conDrawInputGlob.leftX
                vmovss  cs:conDrawInputGlob.y, xmm1
                vmovss  cs:conDrawInputGlob.x, xmm2
              }
              ConDrawInput_DetailedDvarMatch(conDrawInputGlob.autoCompleteChoice);
            }
            else if ( !v40 )
            {
              __asm
              {
                vmovss  xmm0, cs:conDrawInputGlob.y
                vaddss  xmm1, xmm0, cs:conDrawInputGlob.fontHeight
                vmovss  xmm2, cs:conDrawInputGlob.leftX
                vmovss  cs:conDrawInputGlob.y, xmm1
                vmovss  cs:conDrawInputGlob.x, xmm2
              }
              ConDrawInput_DetailedCmdMatch(conDrawInputGlob.autoCompleteChoice);
            }
          }
        }
        else
        {
          v64 = j_va("%i matches (too many to show here, press shift+tilde to open full console)", (unsigned int)matchCount);
          __asm
          {
            vmovss  xmm1, cs:conDrawInputGlob.fontHeight
            vmovss  xmm2, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
            vaddss  xmm3, xmm1, cs:__real@40800000; h
            vsubss  xmm4, xmm2, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
            vmovss  xmm0, cs:conDrawInputGlob.x
            vsubss  xmm0, xmm0, xmm6; x
            vsubss  xmm1, xmm0, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
            vsubss  xmm2, xmm4, xmm1; w
            vmovss  xmm4, cs:conDrawInputGlob.y
          }
          v74 = v64;
          __asm { vsubss  xmm1, xmm4, xmm6; y }
          ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &color);
          ConDrawInput_Text(v74, &con_inputDvarMatchColor);
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
    if ( !v40 )
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
  __asm
  {
    vcvttss2si r9d, cs:conDrawInputGlob.y; y
    vcvttss2si r8d, cs:conDrawInputGlob.x; x
  }
  CL_Keys_DrawField(localClientNum, &g_consoleField, _ER8, _ER9, 5, 5);
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
  const dvar_t *v39; 
  int flags; 
  const dvar_t *v41; 
  const char *v42; 
  int v43; 
  const dvar_t *v44; 
  int v45; 
  int integer; 
  const dvar_t *v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  const char *v52; 
  const dvar_t *v58; 
  int style; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float h; 
  float w; 
  int v79; 
  float v80; 
  float xa; 
  LocalClientNum_t localClientNuma; 
  GfxFont *v83; 
  const vec4_t *v84; 
  vec4_t v85; 

  FontHandle = font;
  localClientNuma = localClientNum;
  v79 = serverTime;
  v83 = font;
  v84 = color;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2092, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  v19 = &msgwnd->lines[lineIdx];
  if ( serverTime >= v19->typingStartTime )
  {
    if ( (v19->flags & 1) != 0 )
    {
      __asm { vmovss  xmm2, cs:__real@3f800000; scale }
      FontHandle = UI_GetFontHandle(NULL, 6, *(float *)&_XMM2);
      v83 = FontHandle;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+37h+charHeight]
      vmulss  xmm1, xmm0, cs:__real@3caaaaab
      vmulss  xmm1, xmm1, [rbp+37h+msgwndScale]; scale
    }
    *(double *)&_XMM0 = R_NormalizedTextScale(FontHandle, *(float *)&_XMM1);
    __asm
    {
      vmovss  [rbp+37h+w], xmm0
      vmovss  [rbp+37h+h], xmm0
    }
    if ( (textAlignMode & 3) == 1 )
    {
      R_ConsoleTextWidth(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, [rbp+37h+w]
        vmulss  xmm2, xmm1, cs:__real@bf000000
        vcvttss2si eax, xmm2
      }
    }
    else if ( (textAlignMode & 3) == 2 )
    {
      R_ConsoleTextWidth(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, [rbp+37h+w]
        vcvttss2si eax, xmm1
      }
    }
    if ( (textAlignMode & 0xC) == 4 )
    {
      R_TextHeight(FontHandle);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, [rbp+37h+h]
        vcvttss2si eax, xmm1
      }
    }
    else if ( (textAlignMode & 0xC) == 8 )
    {
      R_TextHeight(FontHandle);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, [rbp+37h+h]
        vmulss  xmm2, xmm1, cs:__real@3f000000
        vcvttss2si eax, xmm2
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vcvtsi2ss xmm0, xmm0, esi
      vmovss  [rbp+37h+x], xmm0
      vmovss  [rbp+37h+var_64], xmm1
    }
    ScrPlace_ApplyRect(scrPlace, &xa, &v80, &w, &h, horzAlign, vertAlign);
    if ( (v19->flags & 1) != 0 )
    {
      v39 = DVARVEC3_con_typewriterColorBase;
      if ( !DVARVEC3_con_typewriterColorBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterColorBase") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      flags = v19->flags;
      if ( (flags & 0x10) != 0 )
      {
        v41 = DVARVEC4_con_typewriterColorGlowCheckpoint;
        if ( DVARVEC4_con_typewriterColorGlowCheckpoint )
          goto LABEL_33;
        v42 = "con_typewriterColorGlowCheckpoint";
      }
      else if ( (flags & 4) != 0 )
      {
        v41 = DVARVEC4_con_typewriterColorGlowCompleted;
        if ( DVARVEC4_con_typewriterColorGlowCompleted )
          goto LABEL_33;
        v42 = "con_typewriterColorGlowCompleted";
      }
      else if ( (flags & 8) != 0 )
      {
        v41 = DVARVEC4_con_typewriterColorGlowFailed;
        if ( DVARVEC4_con_typewriterColorGlowFailed )
          goto LABEL_33;
        v42 = "con_typewriterColorGlowFailed";
      }
      else
      {
        v41 = DVARVEC4_con_typewriterColorGlowUpdated;
        if ( DVARVEC4_con_typewriterColorGlowUpdated )
          goto LABEL_33;
        v42 = "con_typewriterColorGlowUpdated";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v42) )
        __debugbreak();
LABEL_33:
      Dvar_CheckFrontendServerThread(v41);
      v43 = PrintableCharsCount(msgwnd, v19);
      v44 = DVARINT_con_typewriterDecayStartTime;
      v45 = v43;
      if ( !DVARINT_con_typewriterDecayStartTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterDecayStartTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      integer = v44->current.integer;
      v47 = DVARINT_con_typewriterPrintSpeed;
      if ( !DVARINT_con_typewriterPrintSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_typewriterPrintSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      v48 = v47->current.integer;
      v49 = v79 - v19->typingStartTime;
      v50 = v19->lastTypingSoundTime - v19->typingStartTime;
      v51 = v45 * v48;
      if ( integer >= v45 * v48 )
        v51 = integer;
      if ( v49 < 0 )
        goto LABEL_52;
      if ( v49 <= v51 )
      {
        if ( v49 >= v45 * v48 )
          goto LABEL_52;
        if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2832, ASSERT_TYPE_ASSERT, "(fxLetterTime)", (const char *)&queryFormat, "fxLetterTime") )
          __debugbreak();
        if ( v50 >= v49 - v49 % v48 )
          goto LABEL_52;
        v52 = "ui_pulse_text_type";
      }
      else
      {
        if ( v50 >= v51 )
        {
LABEL_52:
          __asm
          {
            vmovss  xmm0, [rbp+37h+h]
            vmovss  xmm1, [rbp+37h+w]
            vmovss  [rsp+0D0h+var_90], xmm0
            vmovss  xmm0, [rbp+37h+var_64]
            vmovss  [rsp+0D0h+var_98], xmm1
            vmovss  xmm1, [rbp+37h+x]
            vmovss  [rsp+0D0h+var_A0], xmm0
            vmovss  [rsp+0D0h+var_A8], xmm1
          }
          R_AddCmdDrawConsoleText(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, v83, v69, v71, v73, v75, v84, textStyle);
          return;
        }
        v52 = "ui_pulse_text_delete";
      }
      SND_PlayLocalSoundAliasAsync(localClientNuma, v52, SASYS_CGAME);
      v19->lastTypingSoundTime = v79;
      goto LABEL_52;
    }
    _RAX = v84;
    v58 = DVARBOOL_con_forcedSubtitleEnableOverrideValues;
    style = textStyle;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+37h+var_48], xmm0
    }
    if ( !DVARBOOL_con_forcedSubtitleEnableOverrideValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_forcedSubtitleEnableOverrideValues") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( v58->current.enabled && (v19->flags & 0x40) != 0 )
    {
      _RDI = DVARVEC3_con_forcedSubtitleColor;
      if ( !DVARVEC3_con_forcedSubtitleColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_forcedSubtitleColor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmovss  xmm1, dword ptr [rdi+2Ch]
        vmovss  xmm2, dword ptr [rdi+30h]
        vmovss  dword ptr [rbp+37h+var_48], xmm0
        vmovss  dword ptr [rbp+37h+var_48+4], xmm1
        vmovss  dword ptr [rbp+37h+var_48+8], xmm2
      }
      style = Dvar_GetInt_Internal_DebugName(DVARINT_con_forcedSubtitleTextStyle, "con_forcedSubtitleTextStyle");
    }
    __asm
    {
      vmovss  xmm0, [rbp+37h+h]
      vmovss  xmm1, [rbp+37h+w]
      vmovss  [rsp+0D0h+var_90], xmm0
      vmovss  xmm0, [rbp+37h+var_64]
      vmovss  [rsp+0D0h+var_98], xmm1
      vmovss  xmm1, [rbp+37h+x]
      vmovss  [rsp+0D0h+var_A0], xmm0
      vmovss  [rsp+0D0h+var_A8], xmm1
    }
    R_AddCmdDrawConsoleText(msgwnd->circularTextBuffer, msgwnd->textBufSize, v19->textBufPos, v19->textBufSize, FontHandle, v70, v72, v74, v76, &v85, style);
  }
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
  float v21; 
  float v22; 

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
          __asm
          {
            vmovss  xmm0, [rsp+78h+msgwndScale]
            vmovss  [rsp+78h+var_20], xmm0
          }
          Con_DrawMessageWindowNewToOld(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, mode == MWM_BOTTOMUP_ALIGN_BOTTOM, font, color, textStyle, v21, textAlignMode);
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
      __asm
      {
        vmovss  xmm0, [rsp+78h+msgwndScale]
        vmovss  [rsp+78h+var_20], xmm0
      }
      Con_DrawMessageWindowOldToNew(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, up, font, color, textStyle, v22, textAlignMode);
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
  __int64 v19; 
  ClActiveClient *Client; 
  int v22; 
  int v23; 
  __int64 v24; 
  int activeLineCount; 
  int v26; 
  int v27; 
  int v29; 
  int lineCount; 
  int v33; 
  unsigned __int64 v34; 
  MessageLine *lines; 
  unsigned __int64 v36; 
  __int64 messageIndex; 
  Message *messages; 
  int startTime; 
  int v55; 
  int v58; 
  int v59; 
  __int64 lineIdx; 
  MessageLine *v61; 
  Message *v62; 
  int v63; 
  bool v65; 
  const ScreenPlacement *v66; 
  __int64 charHeight; 
  __int64 v69; 
  float v70; 
  int serverTime; 
  int driftBuffer; 
  __int64 v75; 
  vec4_t v76; 

  v19 = localClientNum;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2290, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v19) != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2291, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForGameServer( localClientNum )") )
    __debugbreak();
  __asm { vmovaps [rsp+128h+var_48], xmm6 }
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v19);
  v22 = Client->GetMsgWindowDriftTime(Client);
  v75 = v19;
  v23 = con.currentServerTime[v19];
  v24 = v22;
  driftBuffer = v22;
  serverTime = v23;
  Con_CullFinishedLines(v23, msgwnd);
  activeLineCount = msgwnd->activeLineCount;
  v26 = y - hudCharHeight;
  if ( up )
    v26 = y;
  v27 = 0;
  if ( activeLineCount > 0 )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovaps [rsp+128h+var_58], xmm7
    }
    v29 = v23;
    __asm
    {
      vmovaps [rsp+128h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2306, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
        __debugbreak();
      lineCount = msgwnd->lineCount;
      v33 = (v27 + msgwnd->firstLineIndex) % lineCount;
      v34 = v33;
      if ( v33 >= (unsigned int)lineCount )
      {
        LODWORD(v69) = msgwnd->lineCount;
        LODWORD(charHeight) = (v27 + msgwnd->firstLineIndex) % lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2308, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v69) )
          __debugbreak();
      }
      lines = msgwnd->lines;
      v36 = v34;
      if ( msgwnd->lines[v36].messageIndex >= (unsigned int)msgwnd->lineCount )
      {
        LODWORD(v69) = msgwnd->lineCount;
        LODWORD(charHeight) = msgwnd->lines[v36].messageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2310, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v69) )
          __debugbreak();
      }
      messageIndex = lines[v36].messageIndex;
      messages = msgwnd->messages;
      if ( v24 )
      {
        startTime = messages[messageIndex].startTime;
        if ( startTime < 0 || startTime > v29 + (int)v24 )
        {
          LODWORD(charHeight) = messages[messageIndex].startTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2312, ASSERT_TYPE_ASSERT, "( ( driftBuffer == 0 || (message->startTime >= 0 && message->startTime <= serverTime + driftBuffer) ) )", "( message->startTime ) = %i", charHeight) )
            __debugbreak();
        }
      }
      if ( v29 - messages[messageIndex].startTime < msgwnd->scrollTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm2, xmm1, xmm0
          vsubss  xmm3, xmm6, xmm2
        }
        if ( v24 )
        {
          __asm
          {
            vmaxss  xmm0, xmm3, xmm7
            vminss  xmm3, xmm0, xmm6
          }
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r13d
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm3, xmm1, xmm8
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm1, xmm0, xmm3, 1
          vcvttss2si eax, xmm1
        }
        if ( up )
          v26 += _EAX;
        else
          v26 -= _EAX;
      }
      activeLineCount = msgwnd->activeLineCount;
      ++v27;
    }
    while ( v27 < activeLineCount );
    __asm
    {
      vmovaps xmm8, [rsp+128h+var_68]
      vmovaps xmm7, [rsp+128h+var_58]
    }
  }
  _R15 = color;
  v55 = activeLineCount - 1;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rsp+128h+var_88], xmm0
  }
  if ( activeLineCount - 1 >= 0 )
  {
    __asm { vmovss  xmm6, [rsp+128h+msgwndScale] }
    do
    {
      v58 = msgwnd->lineCount;
      v59 = (v55 + msgwnd->firstLineIndex) % v58;
      lineIdx = v59;
      if ( v59 >= (unsigned int)v58 )
      {
        LODWORD(v69) = msgwnd->lineCount;
        LODWORD(charHeight) = (v55 + msgwnd->firstLineIndex) % v58;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2333, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v69) )
          __debugbreak();
      }
      v61 = msgwnd->lines;
      if ( msgwnd->lines[lineIdx].messageIndex >= (unsigned int)msgwnd->lineCount )
      {
        LODWORD(v69) = msgwnd->lineCount;
        LODWORD(charHeight) = msgwnd->lines[lineIdx].messageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2336, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", charHeight, v69) )
          __debugbreak();
      }
      v62 = &msgwnd->messages[v61[lineIdx].messageIndex];
      v63 = v26 + hudCharHeight;
      v26 -= hudCharHeight;
      if ( !up )
        v26 = v63;
      if ( serverTime - v62->endTime >= 0 )
        goto LABEL_52;
      *(float *)&_XMM0 = Con_GetMessageAlpha(v62, msgwnd, serverTime, 1, driftBuffer);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [r15+0Ch]
        vmovss  dword ptr [rsp+128h+var_88+0Ch], xmm1
      }
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v66 = &scrPlaceViewDisplay[v75];
          goto LABEL_51;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v65 )
          __debugbreak();
      }
      v66 = &scrPlaceFull;
LABEL_51:
      __asm { vmovss  [rsp+128h+var_C0], xmm6 }
      Con_DrawMessageLineOnHUD(localClientNum, v66, serverTime, x, v26, hudCharHeight, horzAlign, vertAlign, font, msgwnd, lineIdx, &v76, textStyle, v70, textAlignMode);
LABEL_52:
      --v55;
    }
    while ( v55 >= 0 );
  }
  __asm { vmovaps xmm6, [rsp+128h+var_48] }
}

/*
==============
Con_DrawMessageWindowOldToNew
==============
*/
void Con_DrawMessageWindowOldToNew(LocalClientNum_t localClientNum, MessageWindow *msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, bool up, GfxFont *font, const vec4_t *color, int textStyle, float msgwndScale, int textAlignMode)
{
  __int64 v17; 
  ClActiveClient *Client; 
  int v20; 
  int v21; 
  int v22; 
  int v24; 
  int v25; 
  int lineCount; 
  int v30; 
  __int64 lineIdx; 
  MessageLine *lines; 
  Message *v33; 
  int endTime; 
  int scrollTime; 
  bool v38; 
  bool v48; 
  const ScreenPlacement *v49; 
  __int64 v52; 
  __int64 v53; 
  float v54; 
  int driftBuffer; 
  int v56; 
  __int64 v59; 
  vec4_t v60; 

  v17 = localClientNum;
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2367, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v17) != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2368, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForGameServer( localClientNum )") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v17);
  v20 = Client->GetMsgWindowDriftTime(Client);
  v59 = v17;
  v21 = con.currentServerTime[v17];
  driftBuffer = v20;
  v22 = v20;
  Con_CullFinishedLines(v21, msgwnd);
  _RAX = color;
  v24 = y - charHeight;
  if ( !up )
    v24 = y;
  v25 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+118h+var_78], xmm0
  }
  if ( msgwnd->activeLineCount > 0 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_48], xmm6
      vmovss  xmm6, [rsp+118h+msgwndScale]
      vmovaps [rsp+118h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f000000
    }
    v56 = v21 + v22;
    while ( 1 )
    {
      if ( msgwnd->lineCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2386, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount > 0)", (const char *)&queryFormat, "msgwnd->lineCount > 0") )
        __debugbreak();
      lineCount = msgwnd->lineCount;
      v30 = (v25 + msgwnd->firstLineIndex) % lineCount;
      lineIdx = v30;
      if ( v30 >= (unsigned int)lineCount )
      {
        LODWORD(v53) = msgwnd->lineCount;
        LODWORD(v52) = (v25 + msgwnd->firstLineIndex) % lineCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2388, ASSERT_TYPE_ASSERT, "(unsigned)( imod ) < (unsigned)( msgwnd->lineCount )", "imod doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v52, v53) )
          __debugbreak();
      }
      lines = msgwnd->lines;
      if ( msgwnd->lines[lineIdx].messageIndex >= (unsigned int)msgwnd->lineCount )
      {
        LODWORD(v53) = msgwnd->lineCount;
        LODWORD(v52) = msgwnd->lines[lineIdx].messageIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2390, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v52, v53) )
          __debugbreak();
      }
      v33 = &msgwnd->messages[lines[lineIdx].messageIndex];
      if ( v33->startTime < 0 )
      {
        LODWORD(v52) = v33->startTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2393, ASSERT_TYPE_ASSERT, "( ( message->startTime >= 0 ) )", "( message->startTime ) = %i", v52) )
          __debugbreak();
      }
      if ( !driftBuffer && v33->startTime > v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2395, ASSERT_TYPE_ASSERT, "(driftBuffer != 0 || message->startTime <= serverTime)", (const char *)&queryFormat, "driftBuffer != 0 || message->startTime <= serverTime") )
        __debugbreak();
      if ( v33->startTime > v56 )
        goto LABEL_50;
      endTime = v33->endTime;
      if ( v21 > endTime )
        goto LABEL_50;
      scrollTime = msgwnd->scrollTime;
      if ( v21 <= endTime - scrollTime || v21 + scrollTime - endTime <= 0 )
      {
        v38 = up;
      }
      else
      {
        if ( scrollTime <= 0 )
        {
          LODWORD(v52) = msgwnd->scrollTime;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2408, ASSERT_TYPE_ASSERT, "( ( msgwnd->scrollTime > 0 ) )", "( msgwnd->scrollTime ) = %i", v52) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx
        }
        v38 = up;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rsi+24h]
          vdivss  xmm2, xmm1, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, r12d
          vmulss  xmm2, xmm2, xmm1
          vaddss  xmm3, xmm2, xmm7
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm1, xmm0, xmm3, 1
          vcvttss2si eax, xmm1
        }
        if ( up )
          v24 += _EAX;
        else
          v24 -= _EAX;
      }
      *(float *)&_XMM0 = Con_GetMessageAlpha(v33, msgwnd, v21, 0, driftBuffer);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
        vmovss  dword ptr [rsp+118h+var_78+0Ch], xmm1
      }
      if ( activeScreenPlacementMode == SCRMODE_FULL )
        goto LABEL_44;
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
        break;
      v49 = &scrPlaceViewDisplay[v59];
LABEL_45:
      __asm { vmovss  [rsp+118h+var_B0], xmm6 }
      Con_DrawMessageLineOnHUD(localClientNum, v49, v21, x, v24, charHeight, horzAlign, vertAlign, font, msgwnd, lineIdx, &v60, textStyle, v54, textAlignMode);
      if ( v38 )
        v24 -= charHeight;
      else
        v24 += charHeight;
LABEL_50:
      if ( ++v25 >= msgwnd->activeLineCount )
      {
        __asm
        {
          vmovaps xmm7, [rsp+118h+var_58]
          vmovaps xmm6, [rsp+118h+var_48]
        }
        return;
      }
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v48 )
      __debugbreak();
LABEL_44:
    v49 = &scrPlaceFull;
    goto LABEL_45;
  }
}

/*
==============
Con_DrawMiniConsole
==============
*/

void __fastcall Con_DrawMiniConsole(LocalClientNum_t localClientNum, int xPos, int yPos, double alpha)
{
  __int64 v10; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  int integer; 
  __int64 v22; 
  GfxFont *font; 
  __int64 v24; 
  bool v25; 
  MessageWindow *v26; 
  ClActiveClient *Client; 
  __int64 horzAlign; 
  float v33; 
  vec4_t color; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm8, xmm3
  }
  v10 = localClientNum;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( CL_IsRenderingSplitScreen() )
  {
    _RBX = DVARFLT_con_MiniConSplitscreenScale;
    if ( !DVARFLT_con_MiniConSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_MiniConSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovaps xmm7, xmm6 }
  }
  v15 = DVARINT_con_miniconlines;
  if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer )
  {
    Sys_EnterCriticalSection(CRITSECT_CONSOLE);
    v16 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer < 0 )
      goto LABEL_19;
    v17 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.integer > 100 )
    {
LABEL_19:
      v18 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      LODWORD(horzAlign) = v18->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2507, ASSERT_TYPE_ASSERT, "( ( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) >= 0 && Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) <= 100 ) )", "( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) ) = %i", horzAlign) )
        __debugbreak();
    }
    v19 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( con.messageBuffer[0].miniconWindow.lineCount == v19->current.integer )
    {
      v22 = v10;
    }
    else
    {
      v20 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      integer = v20->current.integer;
      v22 = v10;
      con.messageBuffer[0].miniconWindow.lineCount = integer;
      Con_ClearMessageWindow((MessageWindow *)&con.currentServerTime[4648 * v10 - 5776]);
    }
    font = cls.consoleFont;
    v24 = 4648 * v22;
    __asm { vmovss  dword ptr [rsp+0F8h+var_88], xmm6 }
    v25 = &con.currentServerTime[v24 - 5776] == NULL;
    v26 = (MessageWindow *)&con.currentServerTime[v24 - 5776];
    __asm
    {
      vmovss  dword ptr [rsp+0F8h+var_88+4], xmm6
      vmovss  dword ptr [rsp+0F8h+var_88+8], xmm6
      vmovss  dword ptr [rsp+0F8h+var_88+0Ch], xmm8
    }
    if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2442, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
      __debugbreak();
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v10) == CA_ACTIVE )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v10);
      if ( Client->ShouldDisplayMsgWindow(Client) )
      {
        __asm { vmovss  [rsp+0F8h+var_A0], xmm7 }
        Con_DrawMessageWindowOldToNew((LocalClientNum_t)v10, v26, xPos, yPos, 10, 1, 1, 0, font, &color, 3, v33, 4);
      }
    }
    Sys_LeaveCriticalSection(CRITSECT_CONSOLE);
  }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
Con_DrawOuputWindow
==============
*/
void Con_DrawOuputWindow()
{
  const char *BuildNumber; 
  const char *v32; 
  int visibleLineCount; 
  int v79; 
  int i; 
  float fmt; 
  float y; 
  float ya; 
  float xScale; 
  float xScalea; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  vec4_t outColor; 
  vec4_t color; 
  char v104; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax; Console con
    vmovss  xmm1, dword ptr cs:?con@@3UConsole@@A.screenMin+4; Console con
    vmovss  xmm6, dword ptr cs:?con@@3UConsole@@A.screenMin; Console con
    vaddss  xmm7, xmm1, cs:__real@42000000
  }
  _RBX = DVARVEC4_con_outputWindowColor;
  __asm
  {
    vsubss  xmm8, xmm0, xmm6
    vmovss  xmm0, dword ptr cs:?con@@3UConsole@@A.screenMax+4; Console con
    vsubss  xmm1, xmm0, xmm1
    vsubss  xmm9, xmm1, cs:__real@42000000
  }
  if ( !DVARVEC4_con_outputWindowColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputWindowColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rsp+128h+color], xmm0
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsp+128h+color+4], xmm1
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+128h+color+8], xmm0
    vmovss  xmm1, dword ptr [rbx+34h]
    vmovss  dword ptr [rsp+128h+color+0Ch], xmm1
    vmovaps xmm1, xmm7; y
    vmovaps xmm3, xmm9; h
    vmovaps xmm2, xmm8; w
    vmovaps xmm0, xmm6; x
  }
  ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &color);
  __asm
  {
    vaddss  xmm11, xmm6, cs:__real@40c00000
    vaddss  xmm6, xmm8, cs:__real@c1400000
    vaddss  xmm7, xmm7, cs:__real@40c00000
    vaddss  xmm10, xmm9, cs:__real@c1400000
  }
  BuildNumber = j_getBuildNumber();
  v32 = j_va("Build %s %s", BuildNumber, "xb3");
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm14, xmm14, xmm14
    vmovss  [rsp+128h+var_E8], xmm14
    vmovss  [rsp+128h+var_F0], xmm8
    vmovss  [rsp+128h+xScale], xmm8
    vaddss  xmm13, xmm10, xmm7
    vmovss  [rsp+128h+y], xmm13
    vmovss  dword ptr [rsp+128h+fmt], xmm11
  }
  R_AddCmdDrawText(v32, 0x7FFFFFFF, cls.consoleFont, 18, fmt, y, xScale, v98, v100, &con_versionColor);
  _RBX = DVARVEC4_con_outputBarColor;
  if ( !DVARVEC4_con_outputBarColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputBarColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm9, cs:__real@41200000
    vmovss  dword ptr [rsp+128h+outColor], xmm0
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsp+128h+outColor+4], xmm1
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+128h+outColor+8], xmm0
    vmovss  xmm1, dword ptr [rbx+34h]
    vaddss  xmm0, xmm6, xmm11
    vsubss  xmm12, xmm0, xmm9
    vmovss  dword ptr [rsp+128h+outColor+0Ch], xmm1
    vmovaps xmm0, xmm12; x
    vmovaps xmm3, xmm10; h
    vmovaps xmm2, xmm9; w
    vmovaps xmm1, xmm7; y
  }
  ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &outColor);
  _RBX = DVARVEC4_con_outputSliderColor;
  if ( !DVARVEC4_con_outputSliderColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_outputSliderColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rsp+128h+outColor], xmm0
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rsp+128h+outColor+4], xmm1
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+128h+outColor+8], xmm0
    vmovss  xmm1, dword ptr [rbx+34h]
    vmovss  dword ptr [rsp+128h+outColor+0Ch], xmm1
  }
  if ( con.consoleWindow.activeLineCount > con.visibleLineCount )
  {
    _EAX = con.consoleWindow.activeLineCount - con.visibleLineCount;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm6, xmm8, xmm0
    }
    _EAX = con.displayLineOffset - con.visibleLineCount;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm0, xmm6; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm5, xmm0
      vmovd   xmm0, cs:?con@@3UConsole@@A.visibleLineCount; Console con
      vxorps  xmm4, xmm4, xmm4
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm3, xmm1, xmm10
      vroundss xmm4, xmm4, xmm3, 2
      vmaxss  xmm10, xmm4, xmm9
      vsubss  xmm1, xmm13, xmm10
      vsubss  xmm4, xmm1, xmm7
      vmulss  xmm5, xmm4, xmm5
      vaddss  xmm1, xmm5, xmm7; y
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  __asm
  {
    vmovaps xmm3, xmm10; h
    vmovaps xmm2, xmm9; w
    vmovaps xmm0, xmm12; x
  }
  ConDraw_Box(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &outColor);
  CL_LookupColor(LOCAL_CLIENT_0, 0x37u, &outColor);
  if ( !con.fontHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2608, ASSERT_TYPE_ASSERT, "(con.fontHeight)", (const char *)&queryFormat, "con.fontHeight") )
    __debugbreak();
  visibleLineCount = con.visibleLineCount;
  v79 = con.displayLineOffset - con.visibleLineCount;
  if ( con.displayLineOffset - con.visibleLineCount < 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    visibleLineCount = con.displayLineOffset;
    v79 = 0;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vsubss  xmm7, xmm7, xmm0
    }
  }
  for ( i = 0; i < visibleLineCount; ++i )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?con@@3UConsole@@A.fontHeight; Console con
      vaddss  xmm7, xmm7, xmm0
      vmovss  [rsp+128h+var_E8], xmm8
      vmovss  [rsp+128h+var_F0], xmm8
      vmovss  [rsp+128h+xScale], xmm7
      vmovss  [rsp+128h+y], xmm11
    }
    R_AddCmdDrawConsoleText(con.consoleWindow.circularTextBuffer, con.consoleWindow.textBufSize, con.consoleWindow.lines[(v79 + i + con.consoleWindow.firstLineIndex) % con.consoleWindow.lineCount].textBufPos, con.consoleWindow.lines[(v79 + i + con.consoleWindow.firstLineIndex) % con.consoleWindow.lineCount].textBufSize, cls.consoleFont, ya, xScalea, v99, v101, &outColor, 0);
  }
  _R11 = &v104;
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
  int fadeIn; 
  int scrollTime; 
  int v19; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2234, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !msgwnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 2235, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  fadeOut = msgwnd->fadeOut;
  if ( fadeOut > 0 && message->endTime - serverTime < fadeOut )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm6, xmm1, xmm0
    }
  }
  fadeIn = msgwnd->fadeIn;
  if ( fadeIn > 0 )
  {
    if ( scrollsIntoPlace && (scrollTime = msgwnd->scrollTime, fadeIn < scrollTime) )
    {
      v19 = serverTime - message->startTime;
      if ( v19 < scrollTime )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( v19 <= scrollTime - fadeIn )
          goto LABEL_21;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm6, xmm6, xmm1
        }
      }
    }
    else if ( serverTime - message->startTime < fadeIn )
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm2, xmm2, ebx
        vcvtsi2ss xmm1, xmm1, ecx
        vdivss  xmm2, xmm2, xmm1
        vmulss  xmm6, xmm6, xmm2
      }
    }
  }
  if ( driftBuffer )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm6, xmm6, xmm1
    }
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_21:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return *(float *)&_XMM0;
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
  field_t *v2; 
  __int64 v3; 

  CL_Keys_ClearField(&g_consoleField);
  __asm { vmovss  xmm0, cs:?g_console_char_height@@3MA; float g_console_char_height }
  _RBX = &g_historyEditLines[0].charHeight;
  __asm { vmovss  cs:?g_consoleField@@3Ufield_t@@A.charHeight, xmm0; field_t g_consoleField }
  g_consoleField.widthInPixels = g_console_field_width;
  v2 = g_historyEditLines;
  g_consoleField.fixedSize = 1;
  v3 = 32i64;
  do
  {
    CL_Keys_ClearField(v2);
    __asm { vmovss  xmm0, cs:?g_console_char_height@@3MA; float g_console_char_height }
    ++v2;
    *((_DWORD *)_RBX - 1) = g_console_field_width;
    *((_DWORD *)_RBX + 1) = 1;
    __asm { vmovss  dword ptr [rbx], xmm0 }
    _RBX += 70;
    --v3;
  }
  while ( v3 );
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
void Con_InitDvars()
{
  const dvar_t *v15; 
  const dvar_t *v20; 
  const dvar_t *v25; 
  const dvar_t *v29; 
  const dvar_t *v38; 
  const dvar_t *v48; 
  const dvar_t *v52; 
  const dvar_t *v57; 
  const dvar_t *v61; 
  char *v69; 
  char *v71; 
  char *v72; 
  char *v73; 
  char *v74; 
  char *v75; 
  char *v76; 
  __int64 v78; 
  __int64 v79; 
  __int64 v85; 
  __int64 v86; 
  const char *v87; 
  __int64 v88; 
  __int64 v89; 
  const char *v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v103; 
  __int64 v104; 
  __int64 v108; 
  __int64 v109; 
  const dvar_t *v115; 
  float min; 
  float mina; 
  float minb; 
  float minc; 
  float mind; 
  float mine; 
  float minf; 
  float ming; 
  float minh; 
  float mini; 
  float minj; 
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
  float v146; 
  float max; 
  float maxa; 
  float maxb; 
  float maxc; 
  float maxd; 
  float maxe; 
  float maxf; 
  float maxg; 
  float maxh; 
  char *dvarName; 
  char *v157; 
  char (*v158)[28]; 
  char v160; 
  void *retaddr; 
  __int64 v162; 
  char *_Buffer; 
  __int64 v164; 
  __int64 v165; 

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
    vmovaps [rsp+138h+var_C8], xmm13
  }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm12, cs:__real@3e800000
    vmovss  xmm3, cs:__real@3e4ccccd; z
    vmovss  [rsp+138h+max], xmm9
    vxorps  xmm11, xmm11, xmm11
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm2, xmm12; y
    vmovaps xmm1, xmm12; x
    vmovss  [rsp+138h+min], xmm9
  }
  v15 = Dvar_RegisterVec4("NTRRQOTQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, min, v136, max, 0, "Color of the console input box");
  __asm
  {
    vmovss  xmm1, cs:__real@3ecccccd; x
    vmovss  xmm6, cs:__real@3eb33333
  }
  DVARVEC4_con_inputBoxColor = v15;
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm1; y
    vmovss  [rsp+138h+min], xmm9
  }
  v20 = Dvar_RegisterVec4("MOOQQSSKTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, mina, v137, maxa, 0, "Color of the console input hint box");
  __asm
  {
    vmovss  xmm8, cs:__real@3f19999a
    vmovss  xmm3, cs:__real@3f733333; z
  }
  DVARVEC4_con_inputHintBoxColor = v20;
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+138h+min], xmm8
  }
  v25 = Dvar_RegisterVec4("NPQPRQPSRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, minb, v138, maxb, 0, "Color of the console output slider bar");
  __asm
  {
    vmovss  xmm1, cs:__real@3e19999a; x
    vmovss  xmm3, cs:__real@3dcccccd; z
  }
  DVARVEC4_con_outputBarColor = v25;
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm2, xmm1; y
    vmovss  [rsp+138h+min], xmm8
  }
  v29 = Dvar_RegisterVec4("OKKOQRLTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, minc, v139, maxc, 0, "Color of the console slider");
  __asm
  {
    vmovss  xmm13, cs:__real@3f400000
    vmovss  xmm3, cs:__real@3e99999a; z
  }
  DVARVEC4_con_outputSliderColor = v29;
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+138h+min], xmm13
    vmovss  xmm10, cs:__real@7f7fffff
  }
  DVARVEC4_con_outputWindowColor = Dvar_RegisterVec4("RNRONLLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, mind, v140, maxd, 0, "Color of the console output");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovss  xmm1, cs:__real@41000000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v38 = Dvar_RegisterFloat("LLQROLOMQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Onscreen time for error messages in seconds");
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DVARFLT_con_errormessagetime = v38;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_con_minicontime = Dvar_RegisterFloat("MQNKNSQKQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Onscreen time for minicon messages in seconds");
  __asm { vmovss  xmm1, cs:__real@3fb33333; value }
  DVARINT_con_miniconlines = Dvar_RegisterInt("LSTSTMSPRQ", 5, 0, 100, 0, "Number of lines in the minicon message window");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_con_MiniConSplitscreenScale = Dvar_RegisterFloat("LPNKNRPLKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Splitscreen scale value for the mini console");
  DVARINT_con_typewriterPrintSpeed = Dvar_RegisterInt("MLOSSMQQSL", 50, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to print each letter in the line.");
  DVARINT_con_typewriterDecayStartTime = Dvar_RegisterInt("MOKKSMSRPQ", 6000, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to spend between the build and disolve phases.");
  DVARINT_con_typewriterDecayDuration = Dvar_RegisterInt("LPOTLQSKLT", 700, 0, 0x7FFFFFFF, 0, "Time (in milliseconds) to spend disolving the line away.");
  __asm
  {
    vmovss  dword ptr [rsp+138h+var_110], xmm9
    vmovaps xmm3, xmm9; z
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+138h+min], xmm11
  }
  v48 = Dvar_RegisterVec3("NRQKSNRORT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, mine, v141, 0x40u, "Base color of typewritten objective text.");
  __asm { vmovss  xmm3, cs:__real@3e3851ec; z }
  DVARVEC3_con_typewriterColorBase = v48;
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm2, xmm8; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+138h+min], xmm9
  }
  v52 = Dvar_RegisterVec4("TTNNQLPTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, minf, v142, maxe, 0, "Color of typewritten objective text.");
  __asm
  {
    vmovss  xmm6, cs:__real@3f4ccccd
    vmovss  xmm2, cs:__real@3e99999a; y
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm3, xmm6; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+138h+min], xmm9
  }
  DVARVEC4_con_typewriterColorGlowUpdated = v52;
  v57 = Dvar_RegisterVec4("MQRQQNTRSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ming, v143, maxf, 0, "Color of typewritten objective text.");
  __asm
  {
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+138h+min], xmm9
  }
  DVARVEC4_con_typewriterColorGlowCompleted = v57;
  v61 = Dvar_RegisterVec4("MOTTNQKORK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, minh, v144, maxg, 0, "Color of typewritten objective text.");
  __asm
  {
    vmovss  xmm7, cs:__real@3f000000
    vmovss  [rsp+138h+max], xmm9
    vmovss  dword ptr [rsp+138h+var_110], xmm11
    vmovaps xmm3, xmm8; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm8; x
    vmovss  [rsp+138h+min], xmm9
  }
  DVARVEC4_con_typewriterColorGlowFailed = v61;
  DVARVEC4_con_typewriterColorGlowCheckpoint = Dvar_RegisterVec4("LQQSKRTMMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, mini, v145, maxh, 0, "Color of typewritten objective text.");
  DVARBOOL_con_forcedSubtitleEnableOverrideValues = Dvar_RegisterBool("SQRQRQOKO", 0, 0x40u, "Do we want to enable the override for changing the stlye/color of forced subtitles");
  __asm
  {
    vmovss  dword ptr [rsp+138h+var_110], xmm9
    vxorps  xmm3, xmm3, xmm3; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+138h+min], xmm11
  }
  DVARVEC3_con_forcedSubtitleColor = Dvar_RegisterVec3("MMPTROLLTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, minj, v146, 0x40u, "Color of forced subtitle text( translated foreign language ).");
  DVARINT_con_forcedSubtitleTextStyle = Dvar_RegisterInt("MPSQRMTPTL", 6, 0, 8, 0, "Text style for the forced subtitles( translated foreign language ). See r_font_api.h for the #defines of ITEM_TEXTSYLE_<type> for values( 6 == shadowedmore )");
  v69 = con_gameMsgWindowNSplitscreenScale_Descs[0];
  _EBX = 0;
  v157 = con_gameMsgWindowNSplitscreenScale_Names[0];
  v71 = con_gameMsgWindowNLineCount_Names[0];
  v158 = con_gameMsgWindowNLineCount_Names;
  dvarName = con_gameMsgWindowNFadeOutTime_Names[0];
  v72 = con_gameMsgWindowNFadeOutTime_Descs[0];
  _Buffer = con_gameMsgWindowNFadeInTime_Descs[0];
  v73 = con_gameMsgWindowNScrollTime_Descs[0];
  v74 = con_gameMsgWindowNLineCount_Descs[0];
  v165 = 0i64;
  v75 = con_gameMsgWindowNMsgTime_Descs[0];
  v164 = 0i64;
  v76 = con_gameMsgWindowNMsgTime_Names[0];
  v162 = 0i64;
  __asm { vmovss  xmm6, cs:__real@3c23d70a }
  do
  {
    j_sprintf(v76, "con_gameMsgWindow%dMsgTime", _EBX);
    v78 = -1i64;
    do
      ++v78;
    while ( v76[v78] );
    if ( v78 != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 18, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNMsgTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNMsgTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v75, "On screen time for game messages in seconds in game message window %d", _EBX);
    v79 = -1i64;
    do
      ++v79;
    while ( v75[v79] );
    if ( v79 != 68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 18, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNMsgTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNMsgTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    _RAX = v164 * 4;
    _RCX = 0x140000000ui64;
    __asm
    {
      vmovaps xmm3, xmm10; max
      vmovaps xmm2, xmm11; min
      vmovss  xmm1, dword ptr [rax+rcx+41ED380h]; value
    }
    con_gameMsgWindowNMsgTime[v162] = Dvar_RegisterFloat(v76, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, v75);
    j_sprintf(v71, "con_gameMsgWindow%dLineCount", _EBX);
    v85 = -1i64;
    do
      ++v85;
    while ( v71[v85] );
    if ( v85 != 27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 21, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNLineCount_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNLineCount_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v74, "Maximum number of lines of text visible at once in game message window %d", _EBX);
    v86 = -1i64;
    do
      ++v86;
    while ( v74[v86] );
    if ( v86 != 72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 21, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNLineCount_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNLineCount_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    con_gameMsgWindowNLineCount[v162] = Dvar_RegisterInt(v71, defaultGameMessageWindowLineCounts[v164], 1, 9, 0, v74);
    v87 = con_gameMsgWindowNScrollTime_Names[v165];
    j_sprintf(con_gameMsgWindowNScrollTime_Names[v165], "con_gameMsgWindow%dScrollTime", _EBX);
    v88 = -1i64;
    do
      ++v88;
    while ( v87[v88] );
    if ( v88 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 25, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNScrollTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNScrollTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v73, "Time to scroll messages when the oldest message is removed in game message window %d", _EBX);
    v89 = -1i64;
    do
      ++v89;
    while ( v73[v89] );
    if ( v89 != 83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 25, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNScrollTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNScrollTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    __asm
    {
      vmovaps xmm3, xmm10; max
      vmovaps xmm2, xmm11; min
      vmovaps xmm1, xmm12; value
    }
    con_gameMsgWindowNScrollTime[v162] = Dvar_RegisterFloat(v87, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, v73);
    v93 = con_gameMsgWindowNFadeInTime_Names[v165];
    j_sprintf(con_gameMsgWindowNFadeInTime_Names[v165], "con_gameMsgWindow%dFadeInTime", _EBX);
    v94 = -1i64;
    do
      ++v94;
    while ( v93[v94] );
    if ( v94 != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 28, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeInTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeInTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(_Buffer, "Time to fade in new messages in game message window %d", _EBX);
    v95 = -1i64;
    do
      ++v95;
    while ( _Buffer[v95] );
    if ( v95 != 53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 28, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeInTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeInTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    _EAX = 2;
    __asm
    {
      vmovd   xmm1, eax
      vmovd   xmm0, ebx
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm12, xmm13, xmm2; value
      vmovaps xmm2, xmm11; min
      vmovaps xmm3, xmm10; max
    }
    con_gameMsgWindowNFadeInTime[v162] = Dvar_RegisterFloat(v93, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, _Buffer);
    j_sprintf(dvarName, "con_gameMsgWindow%dFadeOutTime", _EBX);
    v103 = -1i64;
    do
      ++v103;
    while ( dvarName[v103] );
    if ( v103 != 29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 31, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeOutTime_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNFadeOutTime_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v72, "Time to fade out old messages in game message window %d", _EBX);
    v104 = -1i64;
    do
      ++v104;
    while ( v72[v104] );
    if ( v104 != 54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 31, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeOutTime_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNFadeOutTime_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    __asm
    {
      vmovaps xmm3, xmm10; max
      vmovaps xmm2, xmm6; min
      vmovaps xmm1, xmm7; value
    }
    con_gameMsgWindowNFadeOutTime[v162] = Dvar_RegisterFloat(dvarName, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, v72);
    j_sprintf(v157, "con_gameMsgWindow%dSplitscreenScale", _EBX);
    v108 = -1i64;
    do
      ++v108;
    while ( v157[v108] );
    if ( v108 != 34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 34, ASSERT_TYPE_ASSERT, "(strlen( dvarName ) == sizeof( con_gameMsgWindowNSplitscreenScale_Names[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarName ) == sizeof( con_gameMsgWindowNSplitscreenScale_Names[gameWindowIndex] ) - 1") )
      __debugbreak();
    j_sprintf(v69, "Scaling of game message window %d in splitscreen", _EBX);
    v109 = -1i64;
    do
      ++v109;
    while ( v69[v109] );
    if ( v109 != 47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console_msg_dvars.h", 34, ASSERT_TYPE_ASSERT, "(strlen( dvarDesc ) == sizeof( con_gameMsgWindowNSplitscreenScale_Descs[gameWindowIndex] ) - 1)", (const char *)&queryFormat, "strlen( dvarDesc ) == sizeof( con_gameMsgWindowNSplitscreenScale_Descs[gameWindowIndex] ) - 1") )
      __debugbreak();
    _RAX = v164 * 4;
    _RCX = 0x140000000ui64;
    __asm
    {
      vmovaps xmm3, xmm10; max
      vmovaps xmm2, xmm11; min
      vmovss  xmm1, dword ptr [rax+rcx+41ED3A0h]; value
    }
    v115 = Dvar_RegisterFloat(v157, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, v69);
    ++_EBX;
    ++v165;
    v71 = &(*v158)[28];
    _Buffer += 54;
    v76 += 26;
    dvarName += 30;
    v75 += 69;
    v157 += 35;
    v74 += 73;
    ++v164;
    v73 += 84;
    con_gameMsgWindowNSplitscreenScale[v162] = v115;
    v72 += 55;
    ++v158;
    v69 += 48;
    ++v162;
  }
  while ( _EBX < 4 );
  __asm { vmovaps xmm13, [rsp+138h+var_C8] }
  _R11 = &v160;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
Con_InitMessageBuffer
==============
*/
void Con_InitMessageBuffer()
{
  MessageLine *miniconLines; 
  __int64 v7; 
  char *p_lastTypingSoundTime; 
  __int64 v9; 
  MessageWindow *v10; 
  Message *v11; 
  MessageLine *v12; 
  int fadeOut; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  __int64 scrollTime; 
  __int64 fadeIn; 
  char v37; 
  __int64 v38; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  miniconLines = con.messageBuffer[0].miniconLines;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovss  xmm7, cs:__real@447a0000
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovss  xmm8, cs:__real@3f000000
    vxorps  xmm6, xmm6, xmm6
  }
  v38 = 2i64;
  do
  {
    v7 = 0i64;
    p_lastTypingSoundTime = (char *)&miniconLines[-590].lastTypingSoundTime;
    v9 = 4i64;
    v10 = (MessageWindow *)&miniconLines[-248];
    v11 = (Message *)&miniconLines[-190].lastTypingSoundTime;
    v12 = (MessageLine *)((char *)miniconLines - 5696);
    do
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rax+28h]
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si r9d, xmm1
        vmulss  xmm1, xmm7, dword ptr [rax+28h]
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si r8d, xmm1
        vmulss  xmm1, xmm7, dword ptr [rax+28h]
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si edx, xmm1
      }
      Con_InitMessageWindow(v10, v11, v12, p_lastTypingSoundTime, con_gameMsgWindowNLineCount[v7]->current.integer + 3, 3, 2048, _EDX, _ER8, fadeOut);
      p_lastTypingSoundTime += 2048;
      ++v7;
      v12 += 12;
      v11 += 12;
      ++v10;
      --v9;
    }
    while ( v9 );
    v25 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.integer > 100 )
    {
      v26 = DVARINT_con_miniconlines;
      if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      LODWORD(fadeIn) = 100;
      LODWORD(scrollTime) = v26->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 903, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_con_miniconlines, \"con_miniconlines\" ) ) <= ( 100 )", "%s <= %s\n\t%i, %i", "Dvar_GetInt( con_miniconlines )", "MINICON_LINES", scrollTime, fadeIn) )
        __debugbreak();
    }
    v27 = DVARINT_con_miniconlines;
    if ( !DVARINT_con_miniconlines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_miniconlines") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    Con_InitMessageWindow((MessageWindow *)&miniconLines[-3].textBufSize, (Message *)&miniconLines[100], miniconLines, (char *)&miniconLines[-174].lastTypingSoundTime, v27->current.integer, 0, 4096, 0, 0, 0);
    Con_InitMessageWindow((MessageWindow *)&miniconLines[176], (Message *)&miniconLines[183].lastTypingSoundTime, (MessageLine *)((char *)miniconLines + 4288), (char *)&miniconLines[133].textBufSize, 5, 0, 1024, 0, 0, 0);
    miniconLines = (MessageLine *)((char *)miniconLines + 18592);
    --v38;
  }
  while ( v38 );
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
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
  __asm { vmovdqu xmm0, cs:__xmm@00000001000000010000000000000000 }
  con.consoleWindow.textBufSize = 0x8000;
  con.consoleWindow.lines = con.consoleLines;
  con.consoleWindow.messages = con.consoleMessages;
  con.consoleWindow.circularTextBuffer = con.consoleText;
  *(_QWORD *)&con.consoleWindow.textBufPos = 0i64;
  *(_QWORD *)&con.consoleWindow.activeLineCount = 0i64;
  con.consoleWindow.lineCount = 1024;
  __asm { vmovdqu xmmword ptr cs:?con@@3UConsole@@A.consoleWindow.padding, xmm0; Console con }
  Con_InitMessageBuffer();
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    vmovups xmmword ptr cs:?con@@3UConsole@@A.color, xmm0; Console con
  }
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
  __asm { vmovss  xmm0, cs:?g_console_char_height@@3MA; float g_console_char_height }
  g_consoleField.widthInPixels = g_console_field_width;
  g_consoleField.fixedSize = 1;
  con.outputVisible = 0;
  __asm { vmovss  cs:?g_consoleField@@3Ufield_t@@A.charHeight, xmm0; field_t g_consoleField }
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
  const char *v10; 
  int v15; 
  int v16; 
  MessageWindow *DestWindow; 
  unsigned int lineCount; 
  int v19; 
  Message *messages; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  _EDI = duration;
  v6 = localClientNum;
  if ( !Con_IsChannelVisible(dest, channel, flags) )
    return;
  if ( !_EDI )
  {
    if ( dest == CON_DEST_MINICON )
    {
      _RDI = DVARFLT_con_minicontime;
      if ( !DVARFLT_con_minicontime )
      {
        v10 = "con_minicontime";
LABEL_13:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
          __debugbreak();
      }
    }
    else
    {
      if ( dest != CON_DEST_ERROR )
      {
        if ( (unsigned int)(dest - 4) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 485, ASSERT_TYPE_ASSERT, "(dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST)", (const char *)&queryFormat, "dest >= CON_DEST_GAME_FIRST && dest <= CON_DEST_GAME_LAST") )
          __debugbreak();
        _RAX = *(_QWORD *)&con_gameMsgWindowNSplitscreenScale_Descs[3][8 * dest + 32];
        __asm { vmovss  xmm0, dword ptr [rax+28h] }
        goto LABEL_16;
      }
      _RDI = DVARFLT_con_errormessagetime;
      if ( !DVARFLT_con_errormessagetime )
      {
        v10 = "con_errormessagetime";
        goto LABEL_13;
      }
    }
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
LABEL_16:
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vaddss  xmm3, xmm1, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm1, xmm0, xmm3, 1
      vcvttss2si edi, xmm1
    }
  }
  v15 = 0;
  v16 = 0;
  if ( _EDI >= 0 )
    v16 = _EDI;
  DestWindow = Con_GetDestWindow((LocalClientNum_t)v6, dest);
  if ( !DestWindow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 495, ASSERT_TYPE_ASSERT, "(msgwnd)", (const char *)&queryFormat, "msgwnd") )
    __debugbreak();
  lineCount = DestWindow->lineCount;
  if ( lineCount )
  {
    if ( DestWindow->messageIndex >= lineCount )
    {
      LODWORD(v23) = DestWindow->lineCount;
      LODWORD(v22) = DestWindow->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( msgwnd->messageIndex ) < (unsigned)( msgwnd->lineCount )", "msgwnd->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( !DestWindow->lineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_console.cpp", 503, ASSERT_TYPE_ASSERT, "(msgwnd->lineCount != 0)", (const char *)&queryFormat, "msgwnd->lineCount != 0") )
      __debugbreak();
    v19 = (DestWindow->messageIndex + 1) % DestWindow->lineCount;
    DestWindow->messageIndex = v19;
    messages = DestWindow->messages;
    v21 = v19;
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v6) == CA_ACTIVE )
      v15 = con.currentServerTime[v6];
    messages[v21].startTime = v15;
    messages[v21].endTime = v16 + v15;
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

