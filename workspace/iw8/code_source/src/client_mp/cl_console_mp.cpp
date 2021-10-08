/*
==============
Con_DrawSay
==============
*/

void __fastcall Con_DrawSay(LocalClientNum_t localClientNum, int x, int y)
{
  ?Con_DrawSay@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, x, y);
}

/*
==============
CL_DeathMessagePrint
==============
*/

void __fastcall CL_DeathMessagePrint(LocalClientNum_t localClientNum, const char *attackerName, char attackerColorIndex, const char *victimName, char victimColorIndex, const char *iconName)
{
  ?CL_DeathMessagePrint@@YAXW4LocalClientNum_t@@PEBDD1D1@Z(localClientNum, attackerName, attackerColorIndex, victimName, victimColorIndex, iconName);
}

/*
==============
CL_ConsoleMP_UnregisterCommands
==============
*/

void CL_ConsoleMP_UnregisterCommands(void)
{
  ?CL_ConsoleMP_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_ConsoleMP_RegisterCommands
==============
*/

void CL_ConsoleMP_RegisterCommands(void)
{
  ?CL_ConsoleMP_RegisterCommands@@YAXXZ();
}

/*
==============
Con_TimeNudged
==============
*/

void __fastcall Con_TimeNudged(LocalClientNum_t localClientNum, int serverTimeNudge)
{
  ?Con_TimeNudged@@YAXW4LocalClientNum_t@@H@Z(localClientNum, serverTimeNudge);
}

/*
==============
Con_ChatModePublic_f
==============
*/
void Con_ChatModePublic_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  SetupChatField(v0, 0, 588);
}

/*
==============
Con_ChatModeTeam_f
==============
*/
void Con_ChatModeTeam_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  SetupChatField(v0, 1, 543);
}

/*
==============
Con_ChatModeLastUsed_f
==============
*/
void Con_ChatModeLastUsed_f()
{
  LocalClientNum_t v0; 
  PlayerKeyState *KeyState; 

  v0 = Cmd_LocalClientNum();
  KeyState = CL_Keys_GetKeyState(v0);
  SetupChatField(v0, KeyState->chat_team, 543);
}

/*
==============
CL_AddDeathMessageChar
==============
*/
__int64 CL_AddDeathMessageChar(char *deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, char c)
{
  __int64 v4; 
  __int64 result; 

  v4 = deathMsgLen;
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(c != '\\0')", (const char *)&queryFormat, "c != '\\0'") )
    __debugbreak();
  if ( (int)v4 + 1 > deathMsgMaxLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
    __debugbreak();
  result = (unsigned int)(v4 + 1);
  deathMsg[v4] = c;
  return result;
}

/*
==============
CL_AddDeathMessageString
==============
*/
__int64 CL_AddDeathMessageString(char *deathMsg, unsigned int deathMsgLen, unsigned int deathMsgMaxLen, const char *string)
{
  char v4; 
  const char *i; 
  __int64 v9; 

  v4 = *string;
  for ( i = string; *i; v4 = *i )
  {
    if ( deathMsgLen + 1 > deathMsgMaxLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
      __debugbreak();
    v9 = deathMsgLen;
    ++i;
    ++deathMsgLen;
    deathMsg[v9] = v4;
  }
  return deathMsgLen;
}

/*
==============
CL_ConsoleMP_RegisterCommands
==============
*/
void CL_ConsoleMP_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_CONSOLEMP_CMD, 3u);
}

/*
==============
CL_ConsoleMP_UnregisterCommands
==============
*/
void CL_ConsoleMP_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_CONSOLEMP_CMD, 3u);
}

/*
==============
CL_DeathMessagePrint
==============
*/
void CL_DeathMessagePrint(LocalClientNum_t localClientNum, const char *attackerName, char attackerColorIndex, const char *victimName, char victimColorIndex, const char *iconName)
{
  const dvar_t *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  char v20; 
  unsigned int i; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  const dvar_t *v25; 
  __int64 flags; 
  __int64 v27; 
  __int64 v28; 
  char deathMsg[1024]; 

  if ( !attackerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 161, ASSERT_TYPE_ASSERT, "(attackerName != 0)", (const char *)&queryFormat, "attackerName != NULL") )
    __debugbreak();
  if ( !victimName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(victimName != 0)", (const char *)&queryFormat, "victimName != NULL") )
    __debugbreak();
  if ( (unsigned __int8)(victimColorIndex - 39) > 0x17u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 163, ASSERT_TYPE_ASSERT, "(((&victimColorIndex) && (*(&victimColorIndex) != '^') && (*(&victimColorIndex) >= ((unsigned char) 39 )) && (*(&victimColorIndex) <= ( (unsigned char)'>' ))))", (const char *)&queryFormat, "I_IsColorIndex( &victimColorIndex )") )
    __debugbreak();
  if ( (unsigned __int8)(attackerColorIndex - 39) > 0x17u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 164, ASSERT_TYPE_ASSERT, "(((&attackerColorIndex) && (*(&attackerColorIndex) != '^') && (*(&attackerColorIndex) >= ((unsigned char) 39 )) && (*(&attackerColorIndex) <= ( (unsigned char)'>' ))))", (const char *)&queryFormat, "I_IsColorIndex( &attackerColorIndex )") )
    __debugbreak();
  v10 = DVARBOOL_cl_noprint;
  if ( !DVARBOOL_cl_noprint || (Dvar_CheckFrontendServerThread(DVARBOOL_cl_noprint), !v10->current.enabled) )
  {
    v11 = 0;
    if ( con.lineOffset )
      Con_Linefeed(localClientNum, con.prevChannel, 0);
    if ( *attackerName )
    {
      if ( (unsigned __int8)(attackerColorIndex - 39) > 0x17u )
      {
        LODWORD(flags) = attackerColorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 179, ASSERT_TYPE_ASSERT, "( ((unsigned char) 39 ) ) <= ( attackerColorIndex ) && ( attackerColorIndex ) <= ( ( (unsigned char)'>' ) )", "attackerColorIndex not in [COLOR_FIRST, COLOR_LAST]\n\t%i not in [%i, %i]", flags, 39, 62) )
          __debugbreak();
      }
      deathMsg[0] = 94;
      v12 = CL_AddDeathMessageChar(deathMsg, 1u, 0x400u, attackerColorIndex);
      v13 = CL_AddDeathMessageString(deathMsg, v12, 0x400u, attackerName);
      v14 = v13;
      v15 = v13 + 1;
      if ( (unsigned int)v15 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
        __debugbreak();
      deathMsg[v14] = 94;
      v16 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v16 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
        __debugbreak();
      deathMsg[v15] = 55;
      v11 = v15 + 2;
      if ( (unsigned int)(v16 + 1) > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
        __debugbreak();
      deathMsg[v16] = 32;
    }
    if ( !iconName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(iconImageName)", (const char *)&queryFormat, "iconImageName") )
      __debugbreak();
    v17 = -1i64;
    do
      ++v17;
    while ( iconName[v17] );
    if ( (int)v17 <= 255 )
      v11 = CL_AddDeathMessageString(deathMsg, v11, 0x400u, iconName);
    if ( (unsigned __int8)(victimColorIndex - 39) > 0x17u )
    {
      LODWORD(v28) = 62;
      LODWORD(v27) = 39;
      LODWORD(flags) = victimColorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 190, ASSERT_TYPE_ASSERT, "( ((unsigned char) 39 ) ) <= ( victimColorIndex ) && ( victimColorIndex ) <= ( ( (unsigned char)'>' ) )", "victimColorIndex not in [COLOR_FIRST, COLOR_LAST]\n\t%i not in [%i, %i]", flags, v27, v28) )
        __debugbreak();
    }
    v18 = v11 + 1;
    if ( (unsigned int)v18 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
      __debugbreak();
    deathMsg[v11] = 32;
    if ( v11 + 2 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
      __debugbreak();
    deathMsg[v18] = 94;
    v19 = CL_AddDeathMessageChar(deathMsg, v11 + 2, 0x400u, victimColorIndex);
    v20 = *victimName;
    for ( i = v19; *victimName; v20 = *victimName )
    {
      if ( i + 1 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
        __debugbreak();
      v22 = i;
      ++victimName;
      ++i;
      deathMsg[v22] = v20;
    }
    v23 = i + 1;
    if ( (unsigned int)v23 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 123, ASSERT_TYPE_ASSERT, "(deathMsgLen + 1 <= deathMsgMaxLen)", (const char *)&queryFormat, "deathMsgLen + 1 <= deathMsgMaxLen") )
      __debugbreak();
    deathMsg[i] = 10;
    if ( (unsigned int)v23 >= 0x400 )
    {
      LODWORD(v28) = i + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 197, ASSERT_TYPE_ASSERT, "( deathMsgLen ) < ( ( sizeof( *array_counter( deathMsg ) ) + 0 ) )", "%s < %s\n\t%i, %i", "deathMsgLen", "ARRAY_COUNT( deathMsg )", v28, 1024) )
        __debugbreak();
      j___report_rangecheckfailure(v24);
      JUMPOUT(0x141A851B5i64);
    }
    deathMsg[v23] = 0;
    v25 = DVARINT_cl_deathMessageWidth;
    if ( !DVARINT_cl_deathMessageWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_deathMessageWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    CL_ConsolePrint(localClientNum, 5, deathMsg, 0, v25->current.integer, 0);
  }
}

/*
==============
Con_DrawSay
==============
*/
void Con_DrawSay(LocalClientNum_t localClientNum, int x, int y)
{
  const dvar_t *v4; 
  __int64 v6; 
  PlayerKeyState *KeyState; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  bool v12; 
  const ScreenPlacement *v13; 
  GfxFont *FontHandle; 
  float fmt; 
  float ya; 
  float v36; 
  float v37; 

  v4 = DVARBOOL_cl_textChatEnabled;
  v6 = localClientNum;
  if ( !DVARBOOL_cl_textChatEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_textChatEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && CL_Keys_IsCatcherActive((LocalClientNum_t)v6, 32) )
  {
    __asm { vmovaps [rsp+88h+var_28], xmm6 }
    KeyState = CL_Keys_GetKeyState((LocalClientNum_t)v6);
    v9 = "EXE/SAYTEAM";
    if ( !KeyState->chat_team )
      v9 = "EXE/SAY";
    v10 = SEH_SafeTranslateString(v9);
    v11 = j_va("%s: ", v10);
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v13 = &scrPlaceViewDisplay[v6];
        goto LABEL_15;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v12 )
        __debugbreak();
    }
    v13 = &scrPlaceFull;
LABEL_15:
    _RDI = CL_Keys_GetKeyState((LocalClientNum_t)v6);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+10h]
      vmulss  xmm6, xmm0, cs:__real@3caaaaab
      vmovaps xmm2, xmm6; scale
      vmovaps xmm1, xmm6; scale
    }
    FontHandle = UI_GetFontHandle(v13, 0, *(float *)&_XMM2);
    *(double *)&_XMM0 = R_NormalizedTextScale(FontHandle, *(float *)&_XMM1);
    __asm { vmovaps xmm6, xmm0 }
    R_TextHeight(FontHandle);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm2, xmm1, xmm6
      vcvttss2si ecx, xmm2
      vmovss  [rsp+88h+var_40], xmm6
      vmovss  [rsp+88h+var_48], xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, r14d
      vmovss  [rsp+88h+y], xmm1
      vmovss  dword ptr [rsp+88h+fmt], xmm2
    }
    CL_DrawText(v13, v11, 0x7FFFFFFF, FontHandle, fmt, ya, 8, 8, v36, v37, &colorWhite, 3);
    R_TextWidth(v11, 0, FontHandle);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si r8d, xmm1
    }
    CL_Keys_DrawField((LocalClientNum_t)v6, &_RDI->chatField, x + _ER8, y, 8, 8);
    __asm { vmovaps xmm6, [rsp+88h+var_28] }
  }
}

/*
==============
Con_NudgeMessageWindowTimes
==============
*/
void Con_NudgeMessageWindowTimes(MessageWindow *msgwnd, int serverTimeNudge, int serverTime, int driftBuffer)
{
  int v8; 
  int i; 
  int lineCount; 
  int v11; 
  __int64 v12; 
  MessageLine *v13; 
  __int64 messageIndex; 
  Message *messages; 
  bool v16; 
  Message *v17; 
  int startTime; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 

  v8 = -1;
  for ( i = 0; i < msgwnd->activeLineCount; ++i )
  {
    if ( msgwnd->lineCount <= 0 )
    {
      LODWORD(v21) = msgwnd->lineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 222, ASSERT_TYPE_ASSERT, "( ( msgwnd->lineCount > 0 ) )", "( msgwnd->lineCount ) = %i", v21) )
        __debugbreak();
    }
    lineCount = msgwnd->lineCount;
    v11 = (i + msgwnd->firstLineIndex) % lineCount;
    v12 = v11;
    if ( v11 >= (unsigned int)lineCount )
    {
      LODWORD(v22) = msgwnd->lineCount;
      LODWORD(v21) = (i + msgwnd->firstLineIndex) % lineCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( lineIndex ) < (unsigned)( msgwnd->lineCount )", "lineIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v13 = &msgwnd->lines[v12];
    if ( v13->messageIndex >= (unsigned int)msgwnd->lineCount )
    {
      LODWORD(v22) = msgwnd->lineCount;
      LODWORD(v21) = v13->messageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_console_mp.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( line->messageIndex ) < (unsigned)( msgwnd->lineCount )", "line->messageIndex doesn't index msgwnd->lineCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v13->messageIndex != v8 )
    {
      messageIndex = v13->messageIndex;
      v8 = v13->messageIndex;
      messages = msgwnd->messages;
      v16 = serverTimeNudge + messages[messageIndex].startTime < 0;
      messages[messageIndex].startTime += serverTimeNudge;
      v17 = &messages[messageIndex];
      startTime = v17->startTime;
      v19 = v17->endTime + serverTimeNudge;
      v17->endTime = v19;
      if ( v16 )
      {
        v19 -= startTime;
        v17->startTime = 0;
        v17->endTime = v19;
        startTime = 0;
      }
      v20 = serverTime + driftBuffer;
      if ( startTime > serverTime + driftBuffer )
      {
        v17->startTime = v20;
        v17->endTime = v19 + v20 - startTime;
      }
    }
  }
}

/*
==============
Con_TimeNudged
==============
*/
void Con_TimeNudged(LocalClientNum_t localClientNum, int serverTimeNudge)
{
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  MessageWindow *gamemsgWindows; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v4 = *(_DWORD *)&ClActiveClient::ms_activeClients[v3][3].cmds[95].offHand.attachmentVariationIndices[13];
  Con_NudgeMessageWindowTimes(&con.consoleWindow, serverTimeNudge, v4, 1000);
  v5 = v3;
  v6 = 4i64;
  gamemsgWindows = con.messageBuffer[v3].gamemsgWindows;
  do
  {
    Con_NudgeMessageWindowTimes(gamemsgWindows++, serverTimeNudge, v4, 1000);
    --v6;
  }
  while ( v6 );
  Con_NudgeMessageWindowTimes(&con.messageBuffer[v5].miniconWindow, serverTimeNudge, v4, 1000);
  Con_NudgeMessageWindowTimes(&con.messageBuffer[v5].errorWindow, serverTimeNudge, v4, 1000);
}

/*
==============
SetupChatField
==============
*/
void SetupChatField(const LocalClientNum_t localClientNum, int teamChat, int widthInPixels)
{
  __int64 v4; 
  int v14; 
  int v15; 
  int height; 
  float aspect; 
  int width; 

  v4 = localClientNum;
  CL_GetScreenDimensions(&width, &height, &aspect);
  CL_Keys_GetKeyState((LocalClientNum_t)v4)->chat_team = teamChat;
  _RBX = CL_Keys_GetKeyState((LocalClientNum_t)v4);
  CL_Keys_ClearField(&_RBX->chatField);
  _RBX->chatField.widthInPixels = widthInPixels;
  _EAX = 768;
  _RBX->chatField.fixedSize = 0;
  __asm
  {
    vmovd   xmm0, [rsp+58h+height]
    vmovss  xmm2, cs:__real@41600000
    vmovd   xmm1, eax
    vpcmpgtd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@41900000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  dword ptr [rbx+10h], xmm0
  }
  if ( (unsigned int)v4 >= 2 )
  {
    v15 = 2;
    v14 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  clientUIActives[v4].keyCatchers ^= 0x20u;
}

