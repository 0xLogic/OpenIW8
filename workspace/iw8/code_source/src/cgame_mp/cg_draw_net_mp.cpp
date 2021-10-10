/*
==============
CG_Debug_DrawLatencyTestTimingColumns
==============
*/

void __fastcall CG_Debug_DrawLatencyTestTimingColumns(LocalClientNum_t localClientNum)
{
  ?CG_Debug_DrawLatencyTestTimingColumns@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawNetMP_AddDeathMonitorSample
==============
*/

void __fastcall CG_DrawNetMP_AddDeathMonitorSample(LocalClientNum_t localClientNum)
{
  ?CG_DrawNetMP_AddDeathMonitorSample@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawNetMP_AddLagometerSnapshotInfo
==============
*/

void __fastcall CG_DrawNetMP_AddLagometerSnapshotInfo(const CgSnapshotMP *snap)
{
  ?CG_DrawNetMP_AddLagometerSnapshotInfo@@YAXPEBUCgSnapshotMP@@@Z(snap);
}

/*
==============
CG_DrawDisconnectPercentage
==============
*/

void __fastcall CG_DrawDisconnectPercentage(LocalClientNum_t localClientNum)
{
  ?CG_DrawDisconnectPercentage@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawNetDebugOverlays
==============
*/

void __fastcall CG_DrawNetDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawNetDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
deathMonitor_t::deathMonitor_t
==============
*/

void __fastcall deathMonitor_t::deathMonitor_t(deathMonitor_t *this)
{
  ??0deathMonitor_t@@QEAA@XZ(this);
}

/*
==============
CG_Debug_DrawHiContrastColumn
==============
*/

void __fastcall CG_Debug_DrawHiContrastColumn(LocalClientNum_t localClientNum, const char *headerText, const char *text, bool isWhite, float positionX, float width)
{
  ?CG_Debug_DrawHiContrastColumn@@YAXW4LocalClientNum_t@@PEBD1_NMM@Z(localClientNum, headerText, text, isWhite, positionX, width);
}

/*
==============
CG_DrawNetMP_TrackServerEntities
==============
*/

void __fastcall CG_DrawNetMP_TrackServerEntities(int entities, int fullEntities, int archivedEntities)
{
  ?CG_DrawNetMP_TrackServerEntities@@YAXHHH@Z(entities, fullEntities, archivedEntities);
}

/*
==============
CG_ToggleBWColor
==============
*/

void __fastcall CG_ToggleBWColor(bool *isWhite)
{
  ?CG_ToggleBWColor@@YAXAEA_N@Z(isWhite);
}

/*
==============
CG_DrawNetMP_TrackServerBandwidth
==============
*/

void __fastcall CG_DrawNetMP_TrackServerBandwidth(int kbps)
{
  ?CG_DrawNetMP_TrackServerBandwidth@@YAXH@Z(kbps);
}

/*
==============
CG_DrawNetMP_TrackClientEntities
==============
*/

void __fastcall CG_DrawNetMP_TrackClientEntities(int numChangedEntities)
{
  ?CG_DrawNetMP_TrackClientEntities@@YAXH@Z(numChangedEntities);
}

/*
==============
CG_DrawNetMP_BuildSavingReplayString
==============
*/

void __fastcall CG_DrawNetMP_BuildSavingReplayString(const LocalClientNum_t localClientNum, char *output, const int size)
{
  ?CG_DrawNetMP_BuildSavingReplayString@@YAXW4LocalClientNum_t@@PEADH@Z(localClientNum, output, size);
}

/*
==============
CG_DrawDisconnect
==============
*/

void __fastcall CG_DrawDisconnect(LocalClientNum_t localClientNum)
{
  ?CG_DrawDisconnect@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawNetMP_TrackKillcamTime
==============
*/

void __fastcall CG_DrawNetMP_TrackKillcamTime(int oldestKillcamTime)
{
  ?CG_DrawNetMP_TrackKillcamTime@@YAXH@Z(oldestKillcamTime);
}

/*
==============
CG_DrawNetSnapshotAnalysis
==============
*/

void __fastcall CG_DrawNetSnapshotAnalysis(const LocalClientNum_t localClientNum)
{
  ?CG_DrawNetSnapshotAnalysis@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawNetMP_AddLagometerFrameInfo
==============
*/

void __fastcall CG_DrawNetMP_AddLagometerFrameInfo(const cg_t *cgameGlob)
{
  ?CG_DrawNetMP_AddLagometerFrameInfo@@YAXPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
deathMonitor_t::deathMonitor_t
==============
*/
void deathMonitor_t::deathMonitor_t(deathMonitor_t *this)
{
  *(_QWORD *)&this->firstDamageIdx = -1i64;
  this->sampleCount = 0;
  this->snaps = 0;
}

/*
==============
CG_CompareEntityAnalysisSamples
==============
*/
__int64 CG_CompareEntityAnalysisSamples(const void *a, const void *b)
{
  return (unsigned int)(s_entitySamples[s_sampleNum][*(int *)b] - s_entitySamples[s_sampleNum][*(int *)a]);
}

/*
==============
CG_ComparePacketAnalysisSamples
==============
*/
__int64 CG_ComparePacketAnalysisSamples(const void *a, const void *b)
{
  __int64 v2; 
  unsigned __int8 *v3; 
  __int64 v4; 

  v2 = *(int *)b;
  v3 = s_clientAnalysisData;
  v4 = *(int *)a;
  if ( !s_clientAnalysisData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(s_clientAnalysisData)", (const char *)&queryFormat, "s_clientAnalysisData") )
      __debugbreak();
    v3 = s_clientAnalysisData;
  }
  if ( (_DWORD)v4 == 17 )
    return 0xFFFFFFFFi64;
  else
    return v3[v2] - (unsigned int)v3[v4];
}

/*
==============
CG_Debug_DrawHiContrastColumn
==============
*/
void CG_Debug_DrawHiContrastColumn(LocalClientNum_t localClientNum, const char *headerText, const char *text, bool isWhite, float positionX)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v10; 
  vec4_t v11; 
  vec4_t v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  vec4_t v16; 
  vec4_t color; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE, FONT_SCALE);
  v10 = UI_GetFontHandle(ActivePlacement, FONT_TYPE, HEADER_FONT_SCALE);
  if ( isWhite )
  {
    v11 = colorWhite;
    v12 = colorBlack;
  }
  else
  {
    v11 = colorBlack;
    v12 = colorWhite;
  }
  color = v11;
  v16 = v12;
  CL_DrawStretchPic(ActivePlacement, positionX, BAR_Y, BAR_W, BAR_H, 4, 4, 0.0, 0.0, 1.0, 1.0, &color, cgMedia.whiteMaterial);
  UI_DrawText(ActivePlacement, headerText, 36, v10, positionX + TEXT_X_OFFSET, TEXT_Y, 4, 4, HEADER_FONT_SCALE, &v16, 3);
  v13 = LODWORD(HEADER_TEXT_OFFSET_Y);
  v14 = TEXT_Y + HEADER_TEXT_OFFSET_Y;
  if ( (float)(TEXT_Y + HEADER_TEXT_OFFSET_Y) < 480.0 )
  {
    do
    {
      UI_DrawText(ActivePlacement, text, 36, FontHandle, positionX + TEXT_X_OFFSET, v14, 4, 4, FONT_SCALE, &v16, 3);
      v15 = v13;
      *(float *)&v15 = *(float *)&v13 + TEXT_Y_OFFSET;
      v13 = v15;
      v14 = TEXT_Y + *(float *)&v15;
    }
    while ( (float)(TEXT_Y + *(float *)&v15) < 480.0 );
  }
}

/*
==============
CG_Debug_DrawLatencyTestTimingColumns
==============
*/
void CG_Debug_DrawLatencyTestTimingColumns(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float v3; 
  int integer; 
  ClActiveClientMP *ClientMP; 
  cg_t *LocalClientGlobals; 
  int v7; 
  float v8; 
  int realtime; 
  int serverTime; 
  const dvar_t *v11; 
  bool v12; 
  const snapshot_t *snap; 
  float v14; 
  const dvar_t *v15; 
  bool v16; 
  float v17; 
  int m_svLevelTime; 
  char dest[40]; 

  v1 = DVARINT_cg_drawNetTiming;
  v3 = 0.0;
  if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( integer != 2 )
  {
    v7 = com_frameNumber;
    if ( lastFrameNumber != com_frameNumber )
    {
      CG_ToggleBWColor(&lastFrameNumberIsWhite);
      v7 = com_frameNumber;
      lastFrameNumber = com_frameNumber;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(v7 % 10000));
    CG_Debug_DrawHiContrastColumn(localClientNum, "FRAME #", dest, lastFrameNumberIsWhite, 0.0, WIDTH);
    v8 = WIDTH;
    realtime = cls.realtime;
    if ( lastRealTime != cls.realtime )
    {
      CG_ToggleBWColor(&lastRealTimeIsWhite);
      realtime = cls.realtime;
      lastRealTime = cls.realtime;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(realtime % 10000));
    CG_Debug_DrawHiContrastColumn(localClientNum, "REAL TIME", dest, lastRealTimeIsWhite, v8, WIDTH);
    v3 = v8 + WIDTH;
  }
  serverTime = ClientMP->serverTime;
  if ( lastClientTime != serverTime )
  {
    v11 = DVARINT_cg_drawNetTiming;
    if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.integer < 3 && !lastClientTimeIsWhite;
    lastClientTimeIsWhite = v12;
    serverTime = ClientMP->serverTime;
    lastClientTime = serverTime;
  }
  Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(serverTime % 10000));
  CG_Debug_DrawHiContrastColumn(localClientNum, "CL TIME", dest, lastClientTimeIsWhite, v3, WIDTH);
  snap = LocalClientGlobals->snap;
  v14 = v3 + WIDTH;
  if ( lastSnapTime != snap->serverTime )
  {
    v15 = DVARINT_cg_drawNetTiming;
    if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.integer < 3 && !lastSnapTimeIsWhite;
    lastSnapTimeIsWhite = v16;
    snap = LocalClientGlobals->snap;
    lastSnapTime = snap->serverTime;
  }
  Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(snap->serverTime % 10000));
  CG_Debug_DrawHiContrastColumn(localClientNum, "SNAP TIME", dest, lastSnapTimeIsWhite, v14, WIDTH);
  v17 = v14 + WIDTH;
  if ( Com_IsGameLocalServerRunning() )
  {
    m_svLevelTime = SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime;
    if ( lastServerTime != m_svLevelTime )
    {
      CG_ToggleBWColor(&lastServerTimeIsWhite);
      lastServerTime = m_svLevelTime;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(m_svLevelTime % 10000));
    CG_Debug_DrawHiContrastColumn(localClientNum, "SV TIME", dest, lastServerTimeIsWhite, v17, WIDTH);
  }
}

/*
==============
CG_DrawDisconnect
==============
*/

void __fastcall CG_DrawDisconnect(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v3; 
  __int64 v4; 
  ClConnectionDataMP *ClientConnectionData; 
  const dvar_t *v6; 
  const char *v9; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float v12; 
  cg_t *LocalClientGlobals; 
  ClConnectionDataMP *v14; 
  int v15; 
  int lastPacketTime; 
  float v17; 
  double Float_Internal_DebugName; 
  const char *v19; 
  const ScreenPlacement *v20; 
  Material *v21; 
  const ScreenPlacement *v22; 
  __int64 y; 
  __int64 ya; 
  __int64 horzAlign; 
  int horzAlignb; 
  __int64 horzAligna; 
  ConversionArguments arguments; 
  char buf[48]; 
  char outputString[1024]; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    horzAlignb = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, horzAlignb) )
      __debugbreak();
  }
  v4 = v3;
  if ( clientUIActives[v3].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1970, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( !CL_CGameMP_IsServerRestarting((LocalClientNum_t)v3) && !CL_Demo_IsPlayingAny((LocalClientNum_t)v3) )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(horzAlign) = 2;
      LODWORD(y) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
        __debugbreak();
    }
    if ( clientUIActives[v4].migrationState == CMSTATE_INACTIVE )
    {
      if ( CL_CGameMP_IsServerSavingReplay((const LocalClientNum_t)v3) && (CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time & 0x400) == 0 )
      {
        ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
        if ( !CL_GetClientName((LocalClientNum_t)v3, ClientConnectionData->replayRequestor, buf, 0x2Fui64) )
          Com_sprintf(buf, 0x2Fui64, "Unknown Player");
        v6 = DVARSTR_party_hostname;
        *(_QWORD *)&arguments.argCount = 3i64;
        arguments.args[0] = buf;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vpxor   xmm1, xmm1, xmm1
        }
        *(_OWORD *)&arguments.args[1] = _XMM0;
        *(_OWORD *)&arguments.args[3] = _XMM1;
        *(_OWORD *)&arguments.args[5] = _XMM0;
        *(_OWORD *)&arguments.args[7] = _XMM1;
        if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        arguments.args[1] = v6->current.string;
        arguments.args[2] = ClientConnectionData->replayPath;
        v9 = UI_SafeTranslateString("CGAME/SAVINGREPLAY");
        UI_ReplaceConversions(v9, &arguments, outputString, 0x400ui64);
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
        FontHandle = UI_GetFontHandle(ActivePlacement, 0, 0.58333331);
        v12 = (float)((640 - UI_TextWidth(outputString, 0, FontHandle, 0.58333331)) / 2);
        UI_DrawText(ActivePlacement, outputString, 0x7FFFFFFF, FontHandle, v12, 240.0, 0, 0, 0.58333331, &colorWhite, 3);
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      v14 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v3);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) )
        goto LABEL_25;
      v15 = Sys_Milliseconds();
      if ( Com_MP_GetIsLocalServerPaused() )
      {
        v14->lastUpdateWasPausedTime = v15;
        return;
      }
      if ( v15 - v14->lastUpdateWasPausedTime >= Dvar_GetInt_Internal_DebugName(DVARINT_com_exit_pause_connection_interrupted_delay, "com_exit_pause_connection_interrupted_delay") )
      {
LABEL_25:
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(horzAlign) = 2;
          LODWORD(y) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
          LODWORD(horzAligna) = 2;
          LODWORD(ya) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ya, horzAligna) )
            __debugbreak();
        }
        if ( !clientUIActives[v4].frontEndSceneState[0] )
        {
          if ( (unsigned int)v3 >= 2 )
          {
            LODWORD(horzAlign) = 2;
            LODWORD(y) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          if ( clientUIActives[v4].connectionState == CA_ACTIVE )
          {
            lastPacketTime = v14->lastPacketTime;
            if ( lastPacketTime > 0 )
            {
              v17 = (float)(cls.realtime - lastPacketTime);
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_timeout, "cl_timeout");
              if ( (float)(v17 / (float)(*(float *)&Float_Internal_DebugName * 1000.0)) >= 0.5 )
              {
                v19 = UI_SafeTranslateString("CGAME/CONNECTION_INTERRUPTED");
                v20 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
                CG_DrawStringExt(v20, 300.0, 100.0, v19, &colorWhite, 0, 1, 10.0, 0);
                if ( (LocalClientGlobals->time & 0x200) == 0 )
                {
                  v21 = Material_RegisterHandle("hud_icon_net_disconnect_mat", IMAGE_TRACK_HUD);
                  v22 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
                  UI_DrawHandlePic(v22, 296.0, 320.0, 48.0, 48.0, 0, 0, &colorWhite, v21);
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawDisconnectPercentage
==============
*/
void CG_DrawDisconnectPercentage(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  signed int v3; 
  const PartyData *i; 
  SvClient *CommonClient; 
  SvClientConnectionState state; 
  double v7; 
  float v8; 
  ClActiveClientMP *ClientMP; 
  double v10; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( Com_IsAnyLocalServerRunning() )
  {
    v3 = 0;
    for ( i = Live_GetCurrentParty(); v3 < (int)SvClient::ms_clientCount; ++v3 )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v3);
      state = SvClient::GetCommonClient(v3)->state;
      if ( (state == CS_ZOMBIE || !LODWORD(CommonClient[855].__vftable)) && !NetConnection::IsLoopback((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) && (state || Party_IsMemberRegistered(i, v3)) )
      {
        v7 = I_fclamp(*(float *)&CommonClient[1115].lastUsercmd.upmove, 0.0, 1.0);
        v8 = (float)(v3 + 1) * -20.0;
        UI_DrawHandlePic(ActivePlacement, -716.0, v8, *(float *)&v7 * 650.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
        UI_DrawHandlePic(ActivePlacement, -66.0, v8, 6.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
        UI_DrawHandlePic(ActivePlacement, -722.0, v8, 6.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
      }
    }
  }
  else
  {
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    v10 = I_fclamp(ClientMP->disconnectPercentage, 0.0, 1.0);
    UI_DrawHandlePic(ActivePlacement, -716.0, -20.0, *(float *)&v10 * 650.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
    UI_DrawHandlePic(ActivePlacement, -66.0, -20.0, 6.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
    UI_DrawHandlePic(ActivePlacement, -722.0, -20.0, 6.0, 6.0, 3, 3, &colorWhite, cls.whiteMaterial);
  }
}

/*
==============
CG_DrawEntityCount
==============
*/
void CG_DrawEntityCount(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float value; 
  float v4; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v6; 
  const ScreenPlacement *v7; 
  float integer; 
  const dvar_t *v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  const char *v13; 
  const ScreenPlacement *v14; 
  int v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  int v25; 
  float v26; 
  float v27; 
  float v28; 
  char *fmt; 

  v1 = DVARVEC2_drawEntityCountPos;
  if ( !DVARVEC2_drawEntityCountPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = v1->current.vector.v[1];
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v6 = DVARINT_drawEntityCountSize;
  v7 = ActivePlacement;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = (float)v6->current.integer;
  v9 = DVARINT_drawEntityCountSize;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = lagometer.frameCount & 0x7F;
  v11 = (float)v9->current.integer;
  LODWORD(fmt) = lagometer.entityChangeSamples[v10];
  v12 = v4 + v11;
  v13 = j_va("Snp%3i Arc%3i All%3i Chg%3i", (unsigned int)lagometer.changedEntitySamples[v10], (unsigned int)lagometer.archivedEntitySamples[v10], (unsigned int)lagometer.entityAllSamples[v10], fmt);
  v14 = ScrPlace_GetActivePlacement(localClientNum);
  v15 = 0;
  CG_DrawStringExt(v14, value - 50.0, (float)(v4 + v11) + 18.0, v13, &colorWhite, 0, 1, 10.0, 0);
  UI_DrawHandlePic(v7, value, v4, integer, v11, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  v16 = v11 * 0.0015384615;
  if ( integer > 0.0 )
  {
    v17 = value + integer;
    v18 = 0.0;
    do
    {
      v19 = (LOBYTE(lagometer.frameCount) - (_BYTE)v15 - 1) & 0x7F;
      v21 = (float)(v17 - v18) - 1.0;
      v20 = v21;
      v22 = lagometer.entityAllSamples[v19];
      v23 = (float)v22 * v16;
      v24 = v12 - v23;
      if ( v22 >= 500 )
        CL_DrawStretchPic(v7, v21, v24, 1.0, v23, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorRed, cgMedia.whiteMaterial);
      else
        CL_DrawStretchPic(v7, v21, v24, 1.0, v23, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorBlue, cgMedia.whiteMaterial);
      v25 = lagometer.archivedEntitySamples[v19];
      v26 = (float)v25 * v16;
      v27 = v12 - v26;
      if ( v25 >= 300 )
        CL_DrawStretchPic(v7, v21, v27, 1.0, v26, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorOrange, cgMedia.whiteMaterial);
      else
        CL_DrawStretchPic(v7, v21, v27, 1.0, v26, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorMdCyan, cgMedia.whiteMaterial);
      v28 = (float)lagometer.changedEntitySamples[v19];
      CL_DrawStretchPic(v7, v20, v12 - (float)(v28 * v16), 1.0, v28 * v16, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.whiteMaterial);
      v18 = (float)++v15;
    }
    while ( (float)v15 < integer );
  }
}

/*
==============
CG_DrawLagometer
==============
*/
void CG_DrawLagometer(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  float v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const ScreenPlacement *ActivePlacement; 
  float v10; 
  int v11; 
  float v12; 
  int v13; 
  float v14; 
  int v15; 
  float v17; 
  float v18; 
  __int128 v20; 
  float v23; 
  int v24; 
  float v25; 
  __int128 v27; 
  float v31; 
  __int64 v32; 
  __int128 v33; 
  bool v34; 
  const vec4_t *v35; 
  vec4_t *v38; 
  Material *whiteMaterial; 

  CG_GetLocalClientStaticGlobals(localClientNum);
  v2 = DVARBOOL_drawLagometer;
  if ( !DVARBOOL_drawLagometer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawLagometer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = DVARVEC2_cg_lagometerPos;
    if ( !DVARVEC2_cg_lagometerPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_lagometerPos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    v4 = v3->current.vector.v[1];
    value = v3->current.value;
    v6 = DVARVEC2_cg_lagometerSize;
    if ( !DVARVEC2_cg_lagometerSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_lagometerSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = v6->current.vector.v[1];
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_DrawHandlePic(ActivePlacement, value, v4, v7, v8, 3, 3, &colorBlack, cgMedia.whiteMaterial);
    v10 = v8 * 0.2;
    v11 = 0;
    v12 = v4 + (float)(v8 * 0.2);
    v13 = 0;
    if ( v7 > 0.0 )
    {
      v14 = 0.0;
      while ( 1 )
      {
        v15 = lagometer.timeDilationSamples[(LOBYTE(lagometer.frameCount) - (_BYTE)v13 - 1) & 0x7F];
        if ( v15 == 0x7FFFFFFF )
          break;
        v20 = 0i64;
        *(float *)&v20 = (float)v15 * (float)((float)(v8 * 0.2) * 0.0099999998);
        _XMM1 = v20;
        if ( *(float *)&v20 <= 0.0 )
        {
          if ( *(float *)&v20 < 0.0 )
          {
            _XMM0 = v20 ^ (unsigned int)_xmm;
            __asm { vminss  xmm3, xmm0, xmm8 }
            whiteMaterial = cgMedia.whiteMaterial;
            v17 = v12 - *(float *)&_XMM3;
            v18 = (float)(v7 + value) - v14;
            v38 = &colorLtBlue;
            goto LABEL_19;
          }
        }
        else
        {
          __asm { vminss  xmm2, xmm1, xmm8 }
          CL_DrawStretchPic(ActivePlacement, (float)(v7 + value) - v14, v12, 1.0, *(float *)&_XMM2, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorCyan, cgMedia.whiteMaterial);
        }
LABEL_20:
        v14 = (float)++v13;
        if ( (float)v13 >= v7 )
          goto LABEL_21;
      }
      whiteMaterial = cgMedia.whiteMaterial;
      v38 = &colorRed;
      *(float *)&_XMM3 = v10 * 2.0;
      v17 = v12 - v10;
      v18 = (float)(v7 + value) - v14;
LABEL_19:
      CL_DrawStretchPic(ActivePlacement, v18, v17, 1.0, *(float *)&_XMM3, 3, 3, 0.0, 0.0, 0.0, 0.0, v38, whiteMaterial);
      goto LABEL_20;
    }
LABEL_21:
    v23 = v12 + (float)(v10 * 2.0);
    v24 = 0;
    if ( v7 > 0.0 )
    {
      v25 = 0.0;
      do
      {
        v27 = 0i64;
        *(float *)&v27 = (float)lagometer.frameSamples[(LOBYTE(lagometer.frameCount) - (_BYTE)v24 - 1) & 0x7F] * (float)(v8 * 0.00066666666);
        _XMM1 = v27;
        if ( *(float *)&v27 <= 0.0 )
        {
          if ( *(float *)&v27 < 0.0 )
          {
            _XMM0 = v27 ^ (unsigned int)_xmm;
            __asm { vminss  xmm2, xmm0, xmm8 }
            CL_DrawStretchPic(ActivePlacement, (float)(v7 + value) - v25, v23, 1.0, *(float *)&_XMM2, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorBlue, cgMedia.whiteMaterial);
          }
        }
        else
        {
          __asm { vminss  xmm3, xmm1, xmm8 }
          CL_DrawStretchPic(ActivePlacement, (float)(v7 + value) - v25, v23 - *(float *)&_XMM3, 1.0, *(float *)&_XMM3, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorYellow, cgMedia.whiteMaterial);
        }
        v25 = (float)++v24;
      }
      while ( (float)v24 < v7 );
    }
    if ( v7 > 0.0 )
    {
      v31 = 0.0;
      do
      {
        v32 = (LOBYTE(lagometer.snapshotCount) - (_BYTE)v11 - 1) & 0x7F;
        v33 = 0i64;
        *(float *)&v33 = (float)lagometer.snapshotSamples[v32];
        if ( *(float *)&v33 <= 0.0 )
        {
          if ( *(float *)&v33 < 0.0 )
            CL_DrawStretchPic(ActivePlacement, (float)(v7 + value) - v31, (float)(v8 + v4) - (float)(v8 * 0.5), 1.0, v8 * 0.5, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorRed, cgMedia.whiteMaterial);
        }
        else
        {
          v34 = (lagometer.snapshotFlags[v32] & 1) == 0;
          v35 = &colorYellow;
          if ( v34 )
            v35 = &colorGreen;
          *(float *)&v33 = *(float *)&v33 * (float)((float)(v8 * 0.5) * 0.0011111111);
          _XMM0 = v33;
          __asm { vminss  xmm3, xmm0, xmm8 }
          CL_DrawStretchPic(ActivePlacement, (float)(v7 + value) - v31, (float)(v8 + v4) - *(float *)&_XMM3, 1.0, *(float *)&_XMM3, 3, 3, 0.0, 0.0, 0.0, 0.0, v35, cgMedia.whiteMaterial);
        }
        v31 = (float)++v11;
      }
      while ( (float)v11 < v7 );
    }
  }
  CG_DrawDisconnect(localClientNum);
}

/*
==============
CG_DrawNetDebugOverlays
==============
*/
void CG_DrawNetDebugOverlays(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  if ( CL_IsGameClientActive(localClientNum) )
  {
    CG_DrawLagometer(localClientNum);
    v2 = DVARBOOL_drawEntityCount;
    if ( !DVARBOOL_drawEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      CG_DrawEntityCount(localClientNum);
    v3 = DVARBOOL_drawServerBandwidth;
    if ( !DVARBOOL_drawServerBandwidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawServerBandwidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      CG_DrawServerBandwidth(localClientNum);
    v4 = DVARBOOL_drawKillcamData;
    if ( !DVARBOOL_drawKillcamData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamData") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      CG_DrawServerKillcamData(localClientNum);
    v5 = DVARINT_cg_drawNetTiming;
    if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer > 0 )
      CG_Debug_DrawLatencyTestTimingColumns(localClientNum);
    v6 = DVARBOOL_cg_drawLatencyTest;
    if ( !DVARBOOL_cg_drawLatencyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLatencyTest") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      CG_LatencyTestMP_DrawResults(localClientNum);
    v7 = DVARBOOL_cg_drawDeathMonitor;
    if ( !DVARBOOL_cg_drawDeathMonitor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDeathMonitor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      CG_DrawNetMP_DrawDeathMonitor(localClientNum);
  }
}

/*
==============
CG_DrawNetMP_AddDeathMonitorSample
==============
*/
void CG_DrawNetMP_AddDeathMonitorSample(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  deathMonitor_t *v2; 
  cg_t *LocalClientGlobals; 
  double v4; 
  unsigned int v5; 
  deathMonitorSample_t *v6; 
  __int64 v7; 
  __int64 v8; 
  bool v9; 
  int serverTime; 
  __int64 firstDamageIdx; 
  deathMonitorSample_t *v12; 
  int v13; 
  int v14; 
  int v15; 
  int ControllerFromClient; 
  bool v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  int value; 
  int clTime; 
  int snapTime; 
  int nextSnapTime; 
  int snaps; 
  unsigned __int64 userId; 
  DLogContext context; 
  char buffer[4096]; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_deathMonitor ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_deathMonitor )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !CG_View_IsKillCamView((const LocalClientNum_t)v1) )
  {
    v2 = &s_deathMonitor[v1];
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    v4 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
    if ( *(float *)&v4 > 0.0 || v2->sampleCount )
    {
      v5 = v2->sampleCount & 0x7F;
      v6 = &v2->samples[v5];
      v7 = ((unsigned __int8)v2->sampleCount - 1) & 0x7F;
      v8 = v5;
      v9 = *(float *)&v4 <= 0.0 && v2->deathIdx < 0;
      if ( *(float *)&v4 > 0.0 || v9 )
        goto LABEL_17;
      if ( v2->deathIdx >= 0x80u )
      {
        LODWORD(v20) = 128;
        LODWORD(v19) = v2->deathIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( dm->deathIdx ) < (unsigned)( 128 )", "dm->deathIdx doesn't index LAG_SAMPLES\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( LocalClientGlobals->snap->serverTime == v2->samples[v2->deathIdx].snapTime )
      {
LABEL_17:
        v6->frameNumber = com_frameNumber;
        v6->clTime = LocalClientGlobals->time;
        v6->snapTime = LocalClientGlobals->snap->serverTime;
        serverTime = LocalClientGlobals->nextSnap->serverTime;
        v6->health = *(float *)&v4;
        v6->nextSnapTime = serverTime;
        v6->damageCount = LocalClientGlobals->predictedPlayerState.damageCount;
        v6->damageEvent = LocalClientGlobals->predictedPlayerState.damageEvent;
        v6->damageEventCount = LocalClientGlobals->predictedPlayerState.damageEvent - LocalClientGlobals->oldTransPlayerState.damageEvent;
        ++v2->sampleCount;
        if ( v9 )
        {
          firstDamageIdx = v2->firstDamageIdx;
          v2->deathIdx = v8;
          if ( (int)firstDamageIdx >= 0 && (unsigned int)firstDamageIdx < 0x80 )
          {
            v12 = &v2->samples[firstDamageIdx];
            v13 = v12->damageEventCount + v2->samples[v8].damageEvent - v12->damageEvent;
            v14 = v2->samples[v8].frameNumber - v12->frameNumber;
            v15 = v2->samples[v8].clTime - v12->clTime;
            LODWORD(v20) = v15;
            LODWORD(v19) = v6->nextSnapTime;
            LODWORD(fmt) = v6->snapTime;
            Com_Printf(0, "Death Monitor: frameNumber=%i, clTime=%i, snapTime=%i, nextSnapTime=%i, ttk=%i, frames=%i, snaps=%i, dmgEvents=%i\n", (unsigned int)v2->samples[v8].frameNumber, (unsigned int)v2->samples[v8].clTime, fmt, v19, v20, v14, v2->snaps, v13);
            snaps = v2->snaps;
            nextSnapTime = v6->nextSnapTime;
            snapTime = v6->snapTime;
            clTime = v6->clTime;
            value = v6->frameNumber;
            ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
            userId = DLog_GetUserId(ControllerFromClient);
            if ( DLog_IsActive() && DLog_CreateContext(&context, userId, buffer, 4096) && DLog_IsActive() )
            {
              v17 = DLog_BeginEvent(&context, "latency_death_monitor");
              context.autoEndEvent = 1;
              if ( v17 && DLog_Int32(&context, "frame_number", value) && DLog_Int32(&context, "cl_time", clTime) && DLog_Int32(&context, "snap_time", snapTime) && DLog_Int32(&context, "next_snap_time", nextSnapTime) && DLog_Int32(&context, "ttk", v15) && DLog_Int32(&context, "frames", v14) && DLog_Int32(&context, "snaps", snaps) && DLog_Int32(&context, "dmg_events", v13) )
                DLog_RecordContext(&context);
            }
          }
        }
        if ( v6->health < 1.0 )
        {
          if ( v2->samples[v7].health >= 1.0 )
            v2->firstDamageIdx = v8;
          if ( *(float *)&v4 > 0.0 && v2->samples[v7].snapTime != v6->snapTime )
            ++v2->snaps;
        }
        else
        {
          *(_QWORD *)&v2->firstDamageIdx = -1i64;
          v2->snaps = 0;
        }
      }
    }
  }
}

/*
==============
CG_DrawNetMP_AddLagometerFrameInfo
==============
*/
void CG_DrawNetMP_AddLagometerFrameInfo(const cg_t *cgameGlob)
{
  __int64 v2; 
  bool v3; 
  int v4; 
  int serverTimeDilation; 
  int deltaCorrectionMagnitude; 

  CG_DrawDebugMP_GetServerTimeDilation(cgameGlob->localClientNum, &serverTimeDilation, &deltaCorrectionMagnitude);
  v2 = lagometer.frameCount & 0x7F;
  v3 = deltaCorrectionMagnitude <= 100;
  lagometer.frameSamples[v2] = cgameGlob->time - cgameGlob->latestSnapshotTime;
  v4 = serverTimeDilation;
  if ( !v3 )
    v4 = 0x7FFFFFFF;
  lagometer.timeDilationSamples[v2] = v4;
  ++lagometer.frameCount;
}

/*
==============
CG_DrawNetMP_AddLagometerSnapshotInfo
==============
*/
void CG_DrawNetMP_AddLagometerSnapshotInfo(const CgSnapshotMP *snap)
{
  if ( snap )
  {
    lagometer.snapshotSamples[lagometer.snapshotCount & 0x7F] = snap->ping;
    lagometer.snapshotFlags[lagometer.snapshotCount & 0x7F] = snap->snapFlags;
  }
  else
  {
    lagometer.snapshotSamples[lagometer.snapshotCount & 0x7F] = -1;
  }
  ++lagometer.snapshotCount;
}

/*
==============
CG_DrawNetMP_BuildSavingReplayString
==============
*/
void CG_DrawNetMP_BuildSavingReplayString(const LocalClientNum_t localClientNum, char *output, const int size)
{
  unsigned __int64 v5; 
  ClConnectionDataMP *ClientConnectionData; 
  const dvar_t *v9; 
  const char *v12; 
  ConversionArguments arguments; 
  char buf[48]; 

  v5 = size;
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1897, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1898, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
  if ( !CL_GetClientName(localClientNum, ClientConnectionData->replayRequestor, buf, 0x2Fui64) )
    Com_sprintf(buf, 0x2Fui64, "Unknown Player");
  v9 = DVARSTR_party_hostname;
  *(_QWORD *)&arguments.argCount = 3i64;
  arguments.args[0] = buf;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  *(_OWORD *)&arguments.args[1] = _XMM0;
  *(_OWORD *)&arguments.args[3] = _XMM1;
  *(_OWORD *)&arguments.args[5] = _XMM0;
  *(_OWORD *)&arguments.args[7] = _XMM1;
  if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  arguments.args[1] = v9->current.string;
  arguments.args[2] = ClientConnectionData->replayPath;
  v12 = UI_SafeTranslateString("CGAME/SAVINGREPLAY");
  UI_ReplaceConversions(v12, &arguments, output, v5);
}

/*
==============
CG_DrawNetMP_DrawDeathMonitor
==============
*/
void CG_DrawNetMP_DrawDeathMonitor(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v3; 
  __int128 v4; 
  const dvar_t *v5; 
  __int64 v6; 
  const dvar_t *v7; 
  float value; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  __int128 v12; 
  const ScreenPlacement *ActivePlacement; 
  __int128 v14; 
  __int128 v15; 
  float v16; 
  bool v17; 
  int v18; 
  bool v19; 
  int v20; 
  int v21; 
  BOOL v22; 
  float v23; 
  int v24; 
  deathMonitor_t *v25; 
  float v26; 
  float v27; 
  deathMonitorSample_t *v29; 
  int v30; 
  int snapTime; 
  int frameNumber; 
  __int128 v34; 
  int v35; 
  float v38; 
  float v39; 
  int v40; 
  const vec4_t *v41; 
  int v42; 
  bool v43; 
  const vec4_t *v44; 
  __int128 v45; 
  __int128 v50; 
  float v53; 
  GfxFont *FontHandle; 
  int v55; 
  __int64 firstDamageIdx; 
  float v57; 
  float v58; 
  __int64 deathIdx; 
  __int64 v60; 
  deathMonitorSample_t *v61; 
  float v62; 
  __int64 v63; 
  char *fmt; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  bool v67; 
  int v68; 
  float v69; 
  float v70; 
  char dest[64]; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 

  v5 = DVARBOOL_cg_drawDeathMonitor;
  v75 = v1;
  v73 = v3;
  v6 = localClientNum;
  if ( !DVARBOOL_cg_drawDeathMonitor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDeathMonitor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1281, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_cg_drawDeathMonitor, \"cg_drawDeathMonitor\" ))", (const char *)&queryFormat, "Dvar_GetBool( cg_drawDeathMonitor )") )
    __debugbreak();
  CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
  v7 = DVARVEC2_cg_deathMonitorPos;
  if ( !DVARVEC2_cg_deathMonitorPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_deathMonitorPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v9 = v7->current.vector.v[1];
  v10 = DVARVEC2_cg_deathMonitorSize;
  v70 = value;
  if ( !DVARVEC2_cg_deathMonitorSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_deathMonitorSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  v12 = LODWORD(v10->current.vector.v[1]);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
  UI_DrawHandlePic(ActivePlacement, value, v9, v11, *(float *)&v12, 3, 3, &colorBlack, cgMedia.whiteMaterial);
  v15 = v12;
  *(float *)&v15 = *(float *)&v12 * 0.33333334;
  v14 = v15;
  v16 = FLOAT_0_2;
  v17 = s_currentSnapIsWhite;
  v18 = 0;
  v19 = s_currentFrameIsWhite;
  v20 = s_currentSnapTime;
  v21 = s_currentSnapTime;
  v67 = s_currentSnapIsWhite;
  v22 = s_currentFrameIsWhite;
  v23 = v9 + (float)(*(float *)&v12 * 0.33333334);
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(vertAlign) = 2;
    LODWORD(horzAlign) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1317, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_deathMonitor ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_deathMonitor )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
      __debugbreak();
    v19 = s_currentFrameIsWhite;
    v17 = s_currentSnapIsWhite;
    v20 = s_currentSnapTime;
  }
  v24 = 0;
  v25 = &s_deathMonitor[v6];
  v68 = 0;
  if ( v11 > 0.0 )
  {
    v74 = _XMM12;
    v72 = v4;
    v26 = (float)(v9 + *(float *)&v15) + 3.0;
    v69 = v11 + value;
    v27 = 0.0;
    __asm { vxorpd  xmm12, xmm12, xmm12 }
    while ( 1 )
    {
      v29 = &v25->samples[((unsigned __int8)v25->sampleCount - (_BYTE)v24 - 1) & 0x7F];
      v30 = ((unsigned __int8)v25->sampleCount - (_BYTE)v24 - 1) & 0x7F;
      if ( !v24 )
      {
        snapTime = v29->snapTime;
        if ( snapTime != v20 )
        {
          s_currentSnapTime = v29->snapTime;
          v20 = snapTime;
          v17 = !v17;
          s_currentSnapIsWhite = v17;
        }
        frameNumber = v29->frameNumber;
        v21 = v20;
        v18 = s_currentFrame;
        v67 = v17;
        if ( v29->frameNumber != s_currentFrame )
        {
          s_currentFrame = v29->frameNumber;
          v18 = frameNumber;
          v19 = !v19;
          s_currentFrameIsWhite = v19;
        }
        v22 = v19;
      }
      v34 = v14;
      *(float *)&v34 = *(float *)&v14 * v29->health;
      _XMM8 = v34;
      v35 = v21;
      if ( *(float *)&v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM12, *(float *)&v14) )
        __debugbreak();
      __asm
      {
        vmaxss  xmm0, xmm8, xmm6
        vminss  xmm1, xmm0, xmm7
      }
      v39 = v69 - v27;
      v38 = v69 - v27;
      CL_DrawStretchPic(ActivePlacement, v69 - v27, v23 - *(float *)&_XMM1, 1.0, *(float *)&_XMM1, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorGreen, cgMedia.whiteMaterial);
      if ( v30 == v25->deathIdx )
        CL_DrawStretchPic(ActivePlacement, v39, v23 - *(float *)&v14, 1.0, *(float *)&v14, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorOrange, cgMedia.whiteMaterial);
      v40 = v29->snapTime;
      if ( v40 != v21 )
        v67 = !v67;
      v21 = v29->snapTime;
      if ( v40 == v35 )
        v21 = v35;
      v41 = &colorBlack;
      if ( v67 )
        v41 = &colorWhite;
      CL_DrawStretchPic(ActivePlacement, v39, v23, 1.0, 2.0, 3, 3, 0.0, 0.0, 0.0, 0.0, v41, cgMedia.whiteMaterial);
      v42 = v29->frameNumber;
      v43 = v29->frameNumber == v18;
      if ( v29->frameNumber != v18 )
      {
        v43 = v42 == v18;
        v22 = !v22;
      }
      if ( v43 )
        v42 = v18;
      v18 = v42;
      v44 = &colorBlack;
      if ( v22 )
        v44 = &colorWhite;
      CL_DrawStretchPic(ActivePlacement, v39, v23 + 2.0, 1.0, 1.0, 3, 3, 0.0, 0.0, 0.0, 0.0, v44, cgMedia.whiteMaterial);
      v45 = 0i64;
      *(float *)&v45 = (float)v29->damageCount * (float)(*(float *)&v14 * 0.0099999998);
      _XMM9 = v45;
      if ( *(float *)&v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM12, *(float *)&v14) )
        __debugbreak();
      __asm
      {
        vmaxss  xmm0, xmm9, xmm6
        vminss  xmm1, xmm0, xmm7
      }
      CL_DrawStretchPic(ActivePlacement, v38, v26, 1.0, *(float *)&_XMM1, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorRed, cgMedia.whiteMaterial);
      v50 = 0i64;
      *(float *)&v50 = (float)v29->damageEventCount * (float)((float)(*(float *)&v12 * 0.33333334) * 0.2);
      _XMM9 = v50;
      if ( *(float *)&v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM12, *(float *)&v14) )
        __debugbreak();
      __asm
      {
        vmaxss  xmm0, xmm9, xmm6
        vminss  xmm1, xmm0, xmm7
      }
      CL_DrawStretchPic(ActivePlacement, v38, *(float *)&_XMM1 + v26, 1.0, *(float *)&v50, 3, 3, 0.0, 0.0, 0.0, 0.0, &colorYellow, cgMedia.whiteMaterial);
      v24 = v68 + 1;
      v27 = (float)++v68;
      if ( v27 >= v11 )
        break;
      v20 = s_currentSnapTime;
      v17 = s_currentSnapIsWhite;
      v19 = s_currentFrameIsWhite;
    }
    value = v70;
    v16 = FLOAT_0_2;
  }
  v53 = value - 70.0;
  FontHandle = UI_GetFontHandle(ActivePlacement, 5, 0.5);
  v55 = UI_TextHeight(FontHandle, 0.5);
  firstDamageIdx = v25->firstDamageIdx;
  v57 = (float)(v55 / 2);
  v58 = v57 + v9;
  if ( (int)firstDamageIdx >= 0 )
  {
    deathIdx = v25->deathIdx;
    if ( (int)deathIdx >= 0 )
    {
      v60 = deathIdx;
      v61 = &v25->samples[firstDamageIdx];
      Com_sprintf(dest, 0x40ui64, "TTK: %i", (unsigned int)(v25->samples[deathIdx].clTime - v61->clTime));
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, v53, v58, 3, 3, v16, &colorWhite, 3);
      v62 = v58 + v57;
      Com_sprintf(dest, 0x40ui64, "Snaps: %i", (unsigned int)v25->snaps);
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, v53, v62, 3, 3, v16, &colorWhite, 3);
      Com_sprintf(dest, 0x40ui64, "Frames: %i", (unsigned int)(v25->samples[v60].frameNumber - v61->frameNumber));
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, v53, v62 + v57, 3, 3, v16, &colorWhite, 3);
      Com_sprintf(dest, 0x40ui64, "Dmg Events: %i", (unsigned int)(v61->damageEventCount + v25->samples[v60].damageEvent - v61->damageEvent));
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, v53, v57 + (float)(v62 + v57), 3, 3, v16, &colorWhite, 3);
    }
  }
  v63 = ((unsigned __int8)v25->sampleCount - 1) & 0x7F;
  LODWORD(fmt) = v25->samples[v63].snapTime;
  Com_sprintf(dest, 0x40ui64, "Time: %04i Snap: %04i", (unsigned int)v25->samples[v63].clTime, fmt);
  UI_DrawText(ActivePlacement, dest, 64, FontHandle, value, v9, 3, 3, v16, &colorWhite, 3);
}

/*
==============
CG_DrawNetMP_TrackClientEntities
==============
*/
void CG_DrawNetMP_TrackClientEntities(int numChangedEntities)
{
  lagometer.changedEntitySamples[lagometer.snapshotCount & 0x7F] = numChangedEntities;
}

/*
==============
CG_DrawNetMP_TrackKillcamTime
==============
*/
void CG_DrawNetMP_TrackKillcamTime(int oldestKillcamTime)
{
  lagometer.killcamTimes[lagometer.snapshotCount & 0x7F] = oldestKillcamTime;
}

/*
==============
CG_DrawNetMP_TrackServerBandwidth
==============
*/
void CG_DrawNetMP_TrackServerBandwidth(int kbps)
{
  lagometer.serverBandwidth[lagometer.snapshotCount & 0x7F] = kbps;
}

/*
==============
CG_DrawNetMP_TrackServerEntities
==============
*/
void CG_DrawNetMP_TrackServerEntities(int entities, int fullEntities, int archivedEntities)
{
  lagometer.entityAllSamples[lagometer.snapshotCount & 0x7F] = entities;
  lagometer.entityChangeSamples[lagometer.snapshotCount & 0x7F] = fullEntities;
  lagometer.archivedEntitySamples[lagometer.snapshotCount & 0x7F] = archivedEntities;
}

/*
==============
CG_DrawNetSnapshotAnalysis
==============
*/
void CG_DrawNetSnapshotAnalysis(const LocalClientNum_t localClientNum)
{
  if ( CL_IsGameClientActive(localClientNum) && CG_GetLocalClientStaticGlobals(localClientNum)->localServer )
  {
    if ( net_showprofile->current.integer )
    {
      CG_DrawPingAnalysis(localClientNum);
      CG_DrawSnapshotAnalysis(localClientNum);
      CG_DrawSnapshotEntityAnalysis(localClientNum);
    }
  }
}

/*
==============
CG_DrawPingAnalysis
==============
*/
void CG_DrawPingAnalysis(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int PacketAnalysisClientNum; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v4; 
  ClConnection *v5; 
  int v6; 
  int v7; 
  int ClientSnapshotPing; 
  __int128 v10; 
  __int64 forceColor; 
  __int64 shadow; 
  __int64 s1; 
  vec4_t color; 

  v1 = localClientNum;
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum >= 0 )
  {
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v1);
    v4 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v1);
    CG_DrawStringExt(v4, 520.0, 100.0, "Ping", &colorWhite, 0, 1, 10.0, 0);
    if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&shadow = cl_maxLocalClients;
      LODWORD(forceColor) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    if ( !ClConnection::ms_connections[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v5 = ClConnection::ms_connections[v1];
    if ( SLODWORD(v5[37198].__vftable) <= 0 )
    {
      LODWORD(s1) = v5[37198].__vftable;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", s1, 0i64) )
        __debugbreak();
    }
    v6 = LODWORD(v5[37198].__vftable) - 1;
    if ( v6 >= 0 )
    {
      v7 = 3 * v6;
      do
      {
        ClientSnapshotPing = SV_GetClientSnapshotPing(PacketAnalysisClientNum, v6);
        if ( ClientSnapshotPing >= 0 )
        {
          if ( ClientSnapshotPing >= 100 )
          {
            if ( ClientSnapshotPing >= 200 )
            {
              v10 = LODWORD(FLOAT_1_0);
              *(float *)&v10 = 1.0 - (float)((float)(ClientSnapshotPing - 200) * 0.0040000002);
              _XMM1 = v10;
              __asm { vmaxss  xmm0, xmm1, xmm10 }
              color.v[0] = *(float *)&_XMM0;
              color.v[1] = 0.0;
            }
            else
            {
              color.v[0] = 1.0 - (float)((float)(ClientSnapshotPing - 100) * 0.0080000004);
              color.v[1] = color.v[0];
            }
          }
          else
          {
            color.v[1] = 1.0 - (float)((float)ClientSnapshotPing * 0.0080000004);
            color.v[0] = 0.0;
          }
          color.v[2] = 0.0;
          color.v[3] = FLOAT_1_0;
        }
        else
        {
          color = (vec4_t)_xmm;
        }
        CL_DrawStretchPic(ActivePlacement, (float)v7 + 520.0, 90.0, 3.0, 10.0, 1, 1, 0.0, 0.0, 0.0, 0.0, &color, cgMedia.whiteMaterial);
        v7 -= 3;
        --v6;
      }
      while ( v6 >= 0 );
    }
  }
}

/*
==============
CG_DrawServerBandwidth
==============
*/
void CG_DrawServerBandwidth(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float value; 
  float v4; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v6; 
  const ScreenPlacement *v7; 
  float integer; 
  const dvar_t *v9; 
  float v10; 
  int v11; 
  int v12; 
  const char *v13; 
  const ScreenPlacement *v14; 
  const vec4_t *v15; 
  int v16; 
  float v17; 
  int v18; 
  __int128 v19; 
  float v22; 
  float v23; 

  v1 = DVARVEC2_drawServerBandwidthPos;
  if ( !DVARVEC2_drawServerBandwidthPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawServerBandwidthPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = v1->current.vector.v[1];
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v6 = DVARINT_drawEntityCountSize;
  v7 = ActivePlacement;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = (float)v6->current.integer;
  v9 = DVARINT_drawEntityCountSize;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = (float)v9->current.integer;
  v11 = (int)(float)((float)Live_GetNecessaryBandwidth(cls.maxClients) * 0.00087890623);
  v12 = lagometer.serverBandwidth[lagometer.frameCount & 0x7F];
  v13 = j_va("kbps: %3i", (unsigned int)v12);
  v14 = ScrPlace_GetActivePlacement(localClientNum);
  v15 = &colorRed;
  if ( v12 <= v11 )
    v15 = &colorWhite;
  v16 = 0;
  CG_DrawStringExt(v14, value - 50.0, (float)(v4 + v10) + 18.0, v13, v15, 0, 1, 10.0, 0);
  UI_DrawHandlePic(v7, value, v4, integer, v10, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  if ( integer > 0.0 )
  {
    v17 = 0.0;
    do
    {
      v18 = lagometer.serverBandwidth[(LOBYTE(lagometer.frameCount) - (_BYTE)v16 - 1) & 0x7F];
      v19 = 0i64;
      *(float *)&v19 = (float)v18 * (float)(v10 / (float)v11);
      _XMM1 = v19;
      __asm { vminss  xmm3, xmm1, xmm10 }
      *(float *)&v19 = (float)(value + integer) - v17;
      v22 = (float)(v4 + v10) - *(float *)&_XMM3;
      v23 = *(float *)&v19 - 1.0;
      if ( v18 >= v11 )
        CL_DrawStretchPic(v7, v23, v22, 1.0, *(float *)&_XMM3, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorRed, cgMedia.whiteMaterial);
      else
        CL_DrawStretchPic(v7, v23, v22, 1.0, *(float *)&_XMM3, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorBlue, cgMedia.whiteMaterial);
      v17 = (float)++v16;
    }
    while ( (float)v16 < integer );
  }
}

/*
==============
CG_DrawServerKillcamData
==============
*/
void CG_DrawServerKillcamData(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float value; 
  float v4; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v6; 
  const ScreenPlacement *v7; 
  float integer; 
  const dvar_t *v9; 
  float v10; 
  const char *v11; 
  const ScreenPlacement *v12; 
  int v13; 
  float v14; 
  int v15; 
  __int128 v16; 
  float v19; 
  float v20; 

  v1 = DVARVEC2_drawKillcamDataPos;
  if ( !DVARVEC2_drawKillcamDataPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = v1->current.vector.v[1];
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v6 = DVARINT_drawKillcamDataSize;
  v7 = ActivePlacement;
  if ( !DVARINT_drawKillcamDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = (float)v6->current.integer;
  v9 = DVARINT_drawKillcamDataSize;
  if ( !DVARINT_drawKillcamDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = (float)v9->current.integer;
  v11 = j_va("killcam: %3i", (unsigned int)lagometer.killcamTimes[lagometer.frameCount & 0x7F]);
  v12 = ScrPlace_GetActivePlacement(localClientNum);
  v13 = 0;
  CG_DrawStringExt(v12, value - 50.0, (float)(v4 + v10) + 18.0, v11, &colorWhite, 0, 1, 10.0, 0);
  UI_DrawHandlePic(v7, value, v4, integer, v10, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  if ( integer > 0.0 )
  {
    v14 = 0.0;
    do
    {
      v15 = lagometer.killcamTimes[(LOBYTE(lagometer.frameCount) - (_BYTE)v13 - 1) & 0x7F];
      v16 = 0i64;
      *(float *)&v16 = (float)v15 * (float)(v10 * 0.000049999999);
      _XMM1 = v16;
      __asm { vminss  xmm3, xmm1, xmm10 }
      *(float *)&v16 = (float)(value + integer) - v14;
      v19 = (float)(v4 + v10) - *(float *)&_XMM3;
      v20 = *(float *)&v16 - 1.0;
      if ( v15 >= 10000 )
        CL_DrawStretchPic(v7, v20, v19, 1.0, *(float *)&_XMM3, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorBlue, cgMedia.whiteMaterial);
      else
        CL_DrawStretchPic(v7, v20, v19, 1.0, *(float *)&_XMM3, 1, 1, 0.0, 0.0, 1.0, 1.0, &colorRed, cgMedia.whiteMaterial);
      v14 = (float)++v13;
    }
    while ( (float)v13 < integer );
  }
}

/*
==============
CG_DrawSnapshotAnalysis
==============
*/

void __fastcall CG_DrawSnapshotAnalysis(const LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v4; 
  CgEntitySystem *v5; 
  float value; 
  __int64 v7; 
  const dvar_t *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v18; 
  __int64 i; 
  unsigned int v20; 
  char v21; 
  signed int v22; 
  char v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  int v28; 
  float v29; 
  float v30; 
  float v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  CgEntitySystem *v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  int eType; 
  __int64 v42; 
  int v43; 
  int v44; 
  const dvar_t *v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  const dvar_t *v94; 
  float integer; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v97; 
  Material *whiteMaterial; 
  float v99; 
  const ScreenPlacement *v100; 
  int PacketAnalysisClientNum; 
  CgStatic *LocalClientStatics; 
  __int64 v103; 
  const char *v104; 
  const ScreenPlacement *v105; 
  int v107; 
  int v109; 
  __int64 v113; 
  char *v114; 
  int j; 
  __int64 v117; 
  __int64 v118; 
  float v119; 
  __int64 v120; 
  int v121; 
  const vec4_t *v122; 
  Material *material; 
  bool v124; 
  const ScreenPlacement *v125; 
  const dvar_t *v126; 
  float v127; 
  float v128; 
  __int128 v129; 
  __int128 v130; 
  int v131; 
  const vec4_t *color; 
  const char *v133; 
  Material *v134; 
  bool v135; 
  const ScreenPlacement *v136; 
  bool v137; 
  const ScreenPlacement *v138; 
  __int128 v139; 
  char *fmt; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  ClientSnapshotDetailedData *outDetailedData; 
  float v146; 
  __int64 v147; 
  CgGlobalsMP *LocalClientGlobals; 
  __int128 Base[4]; 
  char v150; 
  char dest[32]; 

  v4 = DVARFLT_cg_packetAnalysisTextSize;
  v5 = (CgEntitySystem *)(int)localClientNum;
  if ( !DVARFLT_cg_packetAnalysisTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v146 = value;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  outDetailedData = NULL;
  v7 = (__int64)LocalClientGlobals;
  if ( SV_GetAvailableClientPacketAnalysis((const ClientSnapshotDetailedData **)&outDetailedData) )
  {
    v8 = DVARBOOL_cg_packetAnalysisAutoScale;
    v9 = *(_DWORD *)(v7 + 735672) % 100;
    if ( !DVARBOOL_cg_packetAnalysisAutoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisAutoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      v10 = 0i64;
      __asm
      {
        vpxor   xmm1, xmm1, xmm1
        vpxor   xmm2, xmm2, xmm2
      }
      do
      {
        __asm
        {
          vpmaxud xmm1, xmm1, xmmword ptr [r8+rax*4]
          vpmaxud xmm2, xmm2, xmmword ptr [r8+rax*4+10h]
        }
        v10 += 8i64;
      }
      while ( v10 < 16 );
      __asm
      {
        vpmaxud xmm1, xmm1, xmm2
        vpsrldq xmm0, xmm1, 8
        vpmaxud xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpmaxud xmm0, xmm2, xmm0
      }
      v18 = _XMM0;
      for ( i = 16i64; i < 18; ++i )
      {
        v20 = outDetailedData->bitsSent[i];
        if ( v18 > v20 )
          v20 = v18;
        v18 = v20;
      }
      v21 = -1;
      v22 = v20 / 0xFF;
      v23 = v20 / 0xFF + 1;
      if ( v22 >= 255 )
        v21 = v23;
    }
    else
    {
      v21 = 7;
    }
    v24 = v9;
    v25 = 0i64;
    *(_BYTE *)(v7 + v24 + 737488) = v21;
    v26 = 255 * *(unsigned __int8 *)(v24 + v7 + 737488);
    do
    {
      v27 = outDetailedData->bitsSent[v25];
      if ( (unsigned int)v27 < v26 )
      {
        v29 = (float)v26;
        v30 = (float)v27;
        if ( (float)((float)(v30 * 255.0) * (float)(1.0 / v29)) >= 256.0 )
        {
          LODWORD(forceColor) = 255 * (int)v27 / v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 395, ASSERT_TYPE_ASSERT, "( ( BAR_MAX_BITS * packetAnalysis->bitsSent[field]/BITS_ENCODING_MAX_COUNT >= 0 && BAR_MAX_BITS * static_cast<float>( packetAnalysis->bitsSent[field] )/BITS_ENCODING_MAX_COUNT < 256 ) )", "( BAR_MAX_BITS * packetAnalysis->bitsSent[field] / BITS_ENCODING_MAX_COUNT ) = %i", forceColor) )
            __debugbreak();
        }
        v31 = (float)outDetailedData->bitsSent[v25];
        v28 = (int)(float)((float)(v31 * 255.0) * (float)(1.0 / v29));
      }
      else
      {
        LOBYTE(v28) = -1;
      }
      v32 = v25 + 18 * v24;
      ++v25;
      *(_BYTE *)(v32 + v7 + 735688) = v28;
    }
    while ( v25 < 18 );
    *(_DWORD *)(v7 + 4 * v24 + 737588) = *(_DWORD *)(v7 + 26092);
    v33 = *(_DWORD *)(v7 + 735672);
    v34 = 120i64 * (v33 % 10);
    v147 = v33 % 10;
    memset_0((void *)(v34 + v7 + 737988), 0, 0x78ui64);
    memset_0((void *)(v34 + v7 + 739188), 0, 0x78ui64);
    memset_0((void *)(v34 + v7 + 740388), 0, 0x78ui64);
    v35 = 0;
    v36 = v5;
    v37 = 0i64;
    v38 = 0i64;
    v39 = 18i64;
    do
    {
      v40 = outDetailedData->bitsSent[v39];
      if ( v40 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(shadow) = (_DWORD)v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
            __debugbreak();
        }
        if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
          LODWORD(forceColor) = (_DWORD)v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[(_QWORD)v36] )
        {
          LODWORD(shadow) = (_DWORD)v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
            __debugbreak();
        }
        v5 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v36];
        if ( (unsigned int)v35 >= 0x800 )
        {
          LODWORD(shadow) = 2048;
          LODWORD(forceColor) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        eType = v5->m_entities[v38].nextState.eType;
        LODWORD(v5) = (_DWORD)v36;
        if ( eType > 29 )
          eType = 29;
        v42 = eType + 30 * v147;
        *(_DWORD *)(v7 + 4 * v42 + 737988) += v40;
        ++*(_DWORD *)(v7 + 4 * v42 + 739188);
        v43 = *(_DWORD *)(v7 + 4 * v42 + 740388) + outDetailedData->fieldsSentPerEntity[v37];
        *(_DWORD *)(v7 + 4 * v42 + 740388) = v43;
        if ( eType == 1 )
          *(_DWORD *)(v7 + 4 * v42 + 740388) = v43 + outDetailedData->fieldsSentPlayerState;
      }
      ++v35;
      ++v37;
      ++v39;
      ++v38;
    }
    while ( v35 < 2048 );
    v44 = ++*(_DWORD *)(v7 + 741588);
    if ( v44 > 10 )
      v44 = 10;
    ++*(_DWORD *)(v7 + 735672);
    *(_DWORD *)(v7 + 741588) = v44;
    *(_DWORD *)(v7 + 735684) = 0;
    v45 = DVARBOOL_cg_packetAnalysisAutoScale;
    if ( !DVARBOOL_cg_packetAnalysisAutoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisAutoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.enabled )
    {
      v46 = *(_DWORD *)(v7 + 26092);
      v47 = 0;
      v48 = *(_DWORD *)(v7 + 735672);
      v49 = 0;
      *(_QWORD *)(v7 + 735676) = 0i64;
      v50 = 0;
      v51 = *(_DWORD *)(v7 + 735684);
      v52 = v46;
      do
      {
        v53 = (v48 + v49) % 100;
        v54 = v53;
        v55 = *(_DWORD *)(v7 + 4i64 * v53 + 737588);
        v56 = 9i64 * v53;
        if ( v52 < v55 )
          v55 = v52;
        v52 = v55;
        v57 = *(unsigned __int8 *)(v53 + v7 + 737488) * *(unsigned __int8 *)(v7 + 18i64 * v53 + 735688);
        v58 = v57;
        if ( v50 > v57 )
          v58 = v50;
        *(_DWORD *)(v7 + 735676) = v58;
        v59 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735689);
        v60 = v59 + v57;
        if ( v58 > v59 )
          v59 = v58;
        *(_DWORD *)(v7 + 735676) = v59;
        v61 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735690);
        v62 = v61 + v60;
        if ( v59 > v61 )
          v61 = v59;
        *(_DWORD *)(v7 + 735676) = v61;
        v63 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735691);
        v64 = v63 + v62;
        if ( v61 > v63 )
          v63 = v61;
        *(_DWORD *)(v7 + 735676) = v63;
        v65 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735692);
        v66 = v65 + v64;
        if ( v63 > v65 )
          v65 = v63;
        *(_DWORD *)(v7 + 735676) = v65;
        v67 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735693);
        v68 = v67 + v66;
        if ( v65 > v67 )
          v67 = v65;
        *(_DWORD *)(v7 + 735676) = v67;
        v69 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735694);
        v70 = v69 + v68;
        if ( v67 > v69 )
          v69 = v67;
        *(_DWORD *)(v7 + 735676) = v69;
        v71 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735695);
        v72 = v71 + v70;
        if ( v69 > v71 )
          v71 = v69;
        *(_DWORD *)(v7 + 735676) = v71;
        v73 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * (9 * v54 + 367848));
        v74 = v73 + v72;
        if ( v71 > v73 )
          v73 = v71;
        *(_DWORD *)(v7 + 735676) = v73;
        v75 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735697);
        v76 = v75 + v74;
        if ( v73 > v75 )
          v75 = v73;
        *(_DWORD *)(v7 + 735676) = v75;
        v77 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735698);
        v78 = v77 + v76;
        if ( v75 > v77 )
          v77 = v75;
        *(_DWORD *)(v7 + 735676) = v77;
        v79 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735699);
        v80 = v79 + v78;
        if ( v77 > v79 )
          v79 = v77;
        *(_DWORD *)(v7 + 735676) = v79;
        v81 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735700);
        v82 = v81 + v80;
        if ( v79 > v81 )
          v81 = v79;
        *(_DWORD *)(v7 + 735676) = v81;
        v83 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735701);
        v84 = v83 + v82;
        if ( v81 > v83 )
          v83 = v81;
        *(_DWORD *)(v7 + 735676) = v83;
        v85 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735702);
        v86 = v85 + v84;
        if ( v83 > v85 )
          v85 = v83;
        *(_DWORD *)(v7 + 735676) = v85;
        v87 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735703);
        v88 = v87 + v86;
        if ( v85 > v87 )
          v87 = v85;
        *(_DWORD *)(v7 + 735676) = v87;
        v89 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735704);
        v90 = v89 + v88;
        if ( v87 > v89 )
          v89 = v87;
        *(_DWORD *)(v7 + 735676) = v89;
        v50 = *(unsigned __int8 *)(v54 + v7 + 737488) * *(unsigned __int8 *)(v7 + 2 * v56 + 735705);
        v91 = v50 + v90;
        if ( v89 > v50 )
          v50 = v89;
        v92 = v51 + v91;
        *(_DWORD *)(v7 + 735676) = v50;
        if ( v47 > v91 )
          v91 = v47;
        *(_DWORD *)(v7 + 735684) = v92;
        ++v49;
        *(_DWORD *)(v7 + 735680) = v91;
        v51 = v92;
        v47 = v91;
      }
      while ( v49 < 100 );
      v93 = v46 - v52;
      if ( v93 < 1 )
        v93 = 1;
      *(_DWORD *)(v7 + 735684) = 1000 * v92 / v93 / 8;
    }
    else
    {
      *(_DWORD *)(v7 + 735676) = 2000;
      *(_DWORD *)(v7 + 735680) = 36000;
    }
    SV_ClearAvailableClientPacketAnalysis();
  }
  v94 = DVARINT_cg_packetAnalysisTextY;
  if ( !DVARINT_cg_packetAnalysisTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v94);
  integer = (float)v94->current.integer;
  LODWORD(fmt) = *(_DWORD *)(v7 + 735680) / 8;
  Com_sprintf(dest, 0x20ui64, "MAX: %i (SUM %i)", (unsigned int)(*(_DWORD *)(v7 + 735676) / 8), fmt);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v5);
  CG_DrawStringExt(ActivePlacement, 290.0, integer, dest, &colorWhite, 0, 1, value, 0);
  Com_sprintf(dest, 0x20ui64, "BPS: %i", *(unsigned int *)(v7 + 735684));
  v97 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v5);
  CG_DrawStringExt(v97, 290.0, integer + value, dest, &colorWhite, 0, 1, value, 0);
  whiteMaterial = cgMedia.whiteMaterial;
  v99 = (float)((float)(integer + value) + value) + 100.0;
  v100 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v5);
  UI_DrawHandlePic(v100, 290.0, v99 - 100.0, 100.0, 100.0, 1, 1, &colorBlack, whiteMaterial);
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum < 0 )
  {
    v104 = "All Clients";
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v5);
    v103 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, PacketAnalysisClientNum);
    if ( !v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 498, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v104 = (const char *)(v103 + 4);
  }
  v105 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v5);
  CG_DrawStringExt(v105, 290.0, v99, v104, &colorWhite, 0, 1, value, 0);
  _XMM12 = _xmm;
  v107 = 0;
  __asm { vpxor   xmm13, xmm13, xmm13 }
  do
  {
    v109 = v107 + *(_DWORD *)(v7 + 735672);
    __asm
    {
      vpaddd  xmm0, xmm12, xmm13
      vpaddd  xmm1, xmm12, xmm14
    }
    Base[0] = _XMM0;
    Base[1] = _XMM1;
    __asm { vpaddd  xmm0, xmm12, xmm15 }
    v113 = v109 % 100;
    v114 = &v150;
    __asm { vpaddd  xmm1, xmm12, xmm2 }
    Base[2] = _XMM0;
    Base[3] = _XMM1;
    s_clientAnalysisData = (unsigned __int8 *)(v7 + 18 * v113 + 735688);
    for ( j = 16; j < 18; ++j )
    {
      *(_DWORD *)v114 = j;
      v114 += 4;
    }
    qsort(Base, 0x12ui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_ComparePacketAnalysisSamples);
    v117 = 0i64;
    v118 = v7 + 18 * v113 + 735688;
    v119 = (float)*(unsigned __int8 *)(v7 + v113 + 737488) / (float)*(int *)(v7 + 735676);
    do
    {
      v120 = *((int *)Base + v117);
      if ( (unsigned int)v120 >= 0x12 )
      {
        LODWORD(shadowa) = 18;
        LODWORD(forceColora) = *((_DWORD *)Base + v117);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( field ) < (unsigned)( ANALYZE_SNAPSHOT_DATATYPE_COUNT )", "field doesn't index ANALYZE_SNAPSHOT_DATATYPE_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
          __debugbreak();
      }
      v121 = (int)(float)((float)((float)*(unsigned __int8 *)(v120 + v118) * v119) * 100.0);
      if ( v121 > 0 )
      {
        switch ( (int)v120 )
        {
          case 0:
            v122 = &colorRed;
            break;
          case 1:
            v122 = &colorGreen;
            break;
          case 2:
            v122 = &colorBlue;
            break;
          case 3:
            v122 = &colorMagenta;
            break;
          case 4:
            v122 = &colorLtBlue;
            break;
          case 5:
            v122 = &colorYellow;
            break;
          case 6:
            v122 = &colorOrange;
            break;
          case 7:
            v122 = &colorMdGrey;
            break;
          case 8:
            v122 = &colorLtYellow;
            break;
          case 9:
            v122 = &colorMdYellow;
            break;
          case 10:
            v122 = &colorLtCyan;
            break;
          case 11:
          case 13:
          case 14:
            v122 = &colorLtOrange;
            break;
          case 12:
            v122 = &colorLtGrey;
            break;
          case 15:
            v122 = &colorBlueHeat;
            break;
          case 16:
            v122 = &colorGreenFaded;
            break;
          case 17:
            v122 = &colorDkGrey;
            break;
          default:
            v122 = &colorWhite;
            break;
        }
        material = cgMedia.whiteMaterial;
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
          {
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v124 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v124 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v124 )
              __debugbreak();
            goto LABEL_140;
          }
          v125 = &scrPlaceViewDisplay[(int)v5];
        }
        else
        {
LABEL_140:
          v125 = &scrPlaceFull;
        }
        CL_DrawStretchPic(v125, 389.0 - (float)v107, v99 - (float)v121, 1.0, (float)v121, 1, 1, 0.0, 0.0, 0.0, 0.0, v122, material);
      }
      ++v117;
    }
    while ( v117 < 18 );
    v7 = (__int64)LocalClientGlobals;
    ++v107;
  }
  while ( v107 < 100 );
  v126 = DVARINT_cg_packetAnalysisTextY;
  if ( !DVARINT_cg_packetAnalysisTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v126);
  v127 = v146;
  v128 = v146 * 0.5;
  v130 = 0i64;
  *(float *)&v130 = (float)v126->current.integer;
  v129 = v130;
  v131 = 0;
  while ( 2 )
  {
    switch ( v131 )
    {
      case 0:
        color = &colorRed;
        v133 = "Entity update";
        break;
      case 1:
        color = &colorGreen;
        v133 = "New entity";
        break;
      case 2:
        color = &colorBlue;
        v133 = "Removed entity";
        break;
      case 3:
        color = &colorMagenta;
        v133 = "Temp entity";
        break;
      case 4:
        color = &colorLtBlue;
        v133 = "Client update";
        break;
      case 5:
        color = &colorYellow;
        v133 = "New client";
        break;
      case 6:
        color = &colorOrange;
        v133 = "Removed client";
        break;
      case 7:
        color = &colorMdGrey;
        v133 = "Agent update";
        break;
      case 8:
        color = &colorLtYellow;
        v133 = "New agent";
        break;
      case 9:
        color = &colorMdYellow;
        v133 = "Removed agent";
        break;
      case 10:
        color = &colorLtCyan;
        v133 = "Playerstate update";
        break;
      case 11:
        color = &colorLtOrange;
        v133 = "Full playerstate";
        break;
      case 12:
        color = &colorLtGrey;
        v133 = "Server commands";
        break;
      case 13:
        color = &colorLtOrange;
        v133 = "Glass";
        break;
      case 14:
        color = &colorLtOrange;
        v133 = "Scriptables";
        break;
      case 15:
        color = &colorBlueHeat;
        v133 = "Weapon Map";
        break;
      case 16:
        color = &colorGreenFaded;
        v133 = "Umbra gate states";
        break;
      case 17:
        color = &colorDkGrey;
        v133 = "Generic";
        break;
      default:
        color = &colorWhite;
        v133 = "<Unknown>";
        break;
    }
    v134 = cgMedia.whiteMaterial;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
      {
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v135 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v135 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v135 )
          __debugbreak();
        goto LABEL_176;
      }
      v136 = &scrPlaceViewDisplay[(int)v5];
    }
    else
    {
LABEL_176:
      v136 = &scrPlaceFull;
    }
    UI_DrawHandlePic(v136, 400.0, *(float *)&v129, 3.0, 3.0, 1, 1, color, v134);
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
      {
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v137 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v137 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v137 )
          __debugbreak();
        goto LABEL_183;
      }
      v138 = &scrPlaceViewDisplay[(int)v5];
    }
    else
    {
LABEL_183:
      v138 = &scrPlaceFull;
    }
    CG_DrawStringExt(v138, 405.0, *(float *)&v129 - v128, v133, color, 0, 1, v127, 0);
    ++v131;
    v139 = v129;
    *(float *)&v139 = *(float *)&v129 + v127;
    v129 = v139;
    if ( v131 < 18 )
      continue;
    break;
  }
}

/*
==============
CG_DrawSnapshotEntityAnalysis
==============
*/
void CG_DrawSnapshotEntityAnalysis(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  float value; 
  CgGlobalsMP *LocalClientGlobals; 
  Material *whiteMaterial; 
  const ScreenPlacement *ActivePlacement; 
  int PacketAnalysisClientNum; 
  CgStatic *LocalClientStatics; 
  __int64 v10; 
  const char *v11; 
  const ScreenPlacement *v12; 
  const dvar_t *v13; 
  int v14; 
  __int128 v15; 
  __int128 v16; 
  const char *EntityTypeName; 
  CgGlobalsMP *v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int *v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  bool v57; 
  int v58; 
  int v59; 
  int v60; 
  Material *v61; 
  bool v62; 
  LocalClientNum_t v63; 
  const ScreenPlacement *v64; 
  const vec4_t *v65; 
  const char *v66; 
  bool v67; 
  const ScreenPlacement *v68; 
  __int128 v69; 
  int v71; 
  __int64 v72; 
  char *v78; 
  int i; 
  __int64 v80; 
  __int64 v81; 
  __int128 v82; 
  Material *v85; 
  float v86; 
  bool v87; 
  const ScreenPlacement *v88; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  vec4_t *color; 
  Material *material; 
  vec4_t *setColor; 
  const char *v94; 
  int charHeight; 
  int charHeighta; 
  int charHeightb; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int *v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  __int64 v113; 
  CgGlobalsMP *v114; 
  __int128 Base[4]; 
  char v116; 

  v2 = DVARFLT_cg_packetAnalysisEntTextSize;
  if ( !DVARFLT_cg_packetAnalysisEntTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisEntTextSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  whiteMaterial = cgMedia.whiteMaterial;
  v114 = LocalClientGlobals;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  UI_DrawHandlePic(ActivePlacement, 10.0, 0.0, 80.0, 100.0, 1, 1, &colorBlack, whiteMaterial);
  setColor = &colorWhite;
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum < 0 )
  {
    v11 = "All Clients";
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v10 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, PacketAnalysisClientNum);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 766, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v11 = (const char *)(v10 + 4);
  }
  v12 = ScrPlace_GetActivePlacement(localClientNum);
  CG_DrawStringExt(v12, 10.0, 100.0, v11, &colorWhite, 0, 1, value, 0);
  v13 = DVARINT_cg_packetAnalysisEntTextY;
  if ( !DVARINT_cg_packetAnalysisEntTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisEntTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = 0;
  v16 = 0i64;
  *(float *)&v16 = (float)v13->current.integer;
  v15 = v16;
  v106 = 0;
  do
  {
    switch ( v14 )
    {
      case 0:
        v94 = "General";
        setColor = &colorOrange;
        break;
      case 1:
        v94 = "Players";
        setColor = &colorRed;
        break;
      case 2:
        v94 = "Corpses";
        setColor = &colorGreen;
        break;
      case 3:
        v94 = "Items";
        setColor = &colorBlue;
        break;
      case 4:
        v94 = "Missiles";
        setColor = &colorLtGreen;
        break;
      case 5:
        v94 = "Invisible Ents";
        setColor = &colorLtBlue;
        break;
      case 6:
        v94 = "Scriptmover";
        setColor = &colorMagenta;
        break;
      case 7:
        v94 = "Sound";
        setColor = &colorLtOrange;
        break;
      case 8:
        v94 = "FX";
        setColor = &colorLtGrey;
        break;
      case 9:
        v94 = "Loop FX";
        setColor = &colorLtCyan;
        break;
      case 10:
        v94 = "Primary Light";
        setColor = &colorLtBlue;
        break;
      case 11:
        v94 = "Turret";
        setColor = &colorMdYellow;
        break;
      case 12:
        v94 = "Helicopter";
        setColor = &colorLtBlue;
        break;
      case 13:
        v94 = "Plane";
        setColor = &colorLtOrange;
        break;
      case 14:
        v94 = "Vehicle";
        setColor = &colorLtOrange;
        break;
      case 15:
        v94 = "Vehicle Corpse";
        setColor = &colorLtBlue;
        break;
      case 16:
        v94 = "Vehicle Spawner";
        setColor = &colorLtBlue;
        break;
      case 17:
        v94 = "Agent";
        setColor = &colorDkCyan;
        break;
      case 18:
        v94 = "Agent Corpse";
        setColor = &colorLtCyan;
        break;
      case 19:
      case 20:
      case 21:
        v94 = "SP Actor";
        setColor = &colorWhite;
        break;
      case 22:
        v94 = "Physics Child";
        setColor = &colorGreenFaded;
        break;
      case 23:
        v94 = "Beam";
        setColor = &colorDkCyan;
        break;
      case 24:
        v94 = "Ragdoll Constraint";
        setColor = &colorWhite;
        break;
      case 25:
        v94 = "Ragdoll Constraint";
        setColor = &colorFacebookBlue;
        break;
      case 26:
        v94 = "Physics Volume";
        setColor = &colorRedHeat;
        break;
      case 27:
        v94 = "Cover Wall";
        setColor = &colorOrangeHeat;
        break;
      case 28:
        v94 = "Info Volume Grapple";
        setColor = &colorOrange;
        break;
      case 29:
        v94 = "Events";
        setColor = &colorYellow;
        break;
      default:
        EntityTypeName = BG_GetEntityTypeName((const entityType_s)v14);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 895, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missing handler for snapshot entity type '%s'", EntityTypeName) )
          __debugbreak();
        v94 = (char *)&queryFormat.fmt + 3;
        break;
    }
    v18 = v114;
    v19 = 0;
    v20 = v14;
    v21 = 0;
    v22 = 0;
    v104 = 0;
    v23 = 0;
    v113 = v14;
    v24 = 0;
    v25 = 0;
    v26 = &v114->numEntsSent[1][v14];
    v27 = 0;
    v107 = v26;
    v105 = 0;
    while ( 1 )
    {
      v28 = *(v26 - 330);
      v29 = v18->packetAnalysisFrameCount - v27;
      v109 = v23;
      v30 = v28;
      v99 = v28 + v21;
      charHeight = v29;
      v31 = *(v26 - 30);
      v101 = v31 + v19;
      v32 = v26[270];
      v108 = v32 + v22;
      v33 = v26[300];
      if ( v28 <= v23 )
        v30 = v23;
      s_entitySamples[(v29 - 1) % 10][v20] = v28;
      v34 = *(v26 - 300);
      v110 = v30;
      v35 = v31;
      v36 = v34;
      if ( v31 <= v24 )
        v35 = v24;
      v37 = *(v26 - 270);
      if ( v32 <= v25 )
        v32 = v25;
      if ( v34 <= v30 )
        v36 = v30;
      s_entitySamples[(v29 - 2) % 10][v20] = v34;
      v38 = *v26;
      v111 = v36;
      if ( *v26 <= v35 )
        v38 = v35;
      v39 = v33;
      if ( v33 <= v32 )
        v39 = v32;
      s_entitySamples[(v29 - 3) % 10][v20] = v37;
      v40 = v26[30];
      v41 = v26[330];
      v42 = v29 - 4;
      v43 = v37;
      if ( v37 <= v36 )
        v43 = v36;
      v44 = v40;
      if ( v40 <= v38 )
        v44 = v38;
      v45 = v41;
      if ( v41 <= v39 )
        v45 = v39;
      v46 = *(v107 - 240);
      v47 = v46;
      v48 = v107[60];
      v49 = v48;
      v50 = v107[360];
      v51 = v113 + 30i64 * (v42 % 10);
      if ( v46 <= v43 )
        v47 = v43;
      s_entitySamples[0][v51] = v46;
      if ( v48 <= v44 )
        v49 = v44;
      v52 = v50;
      if ( v50 <= v45 )
        v52 = v45;
      v103 = *(v107 - 210);
      s_entitySamples[(charHeight - 5) % 10][v113] = v103;
      v53 = *(v107 - 300);
      v54 = *v107;
      v100 = v53 + v37 + v46 + v103 + v99;
      v112 = v107[90];
      v55 = *v107 + v40 + v48 + v112 + v101;
      v102 = v55;
      charHeighta = v107[390];
      v22 = v33 + v41 + v50 + charHeighta + v108;
      v56 = *(v107 - 30);
      if ( *(v107 - 330) <= v109 )
        v56 = v104;
      if ( v53 <= v110 )
        v54 = v56;
      v57 = v37 <= v111;
      v24 = v107[90];
      v58 = v107[390];
      if ( v57 )
        v40 = v54;
      v18 = v114;
      v57 = v46 <= v43;
      v20 = v113;
      v59 = v107[90];
      if ( v57 )
        v48 = v40;
      v23 = v103;
      if ( v103 <= v47 )
        v59 = v48;
      if ( v103 <= v47 )
        v23 = v47;
      v104 = v59;
      if ( v112 <= v49 )
        v24 = v49;
      if ( charHeighta <= v52 )
        v58 = v52;
      v26 = v107 + 150;
      charHeightb = v58;
      v27 = v105 + 5;
      v107 += 150;
      v105 = v27;
      if ( v27 >= 10 )
        break;
      v21 = v100;
      v19 = v55;
      v25 = charHeightb;
    }
    v60 = v55;
    if ( !v55 )
      v60 = 1;
    if ( v59 )
    {
      v61 = cgMedia.whiteMaterial;
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v63 = localClientNum;
          v64 = &scrPlaceViewDisplay[localClientNum];
LABEL_99:
          material = v61;
          v65 = setColor;
          UI_DrawHandlePic(v64, 100.0, *(float *)&v15 - 8.0, 3.0, 3.0, 3, 1, setColor, material);
          LODWORD(color) = charHeightb;
          LODWORD(horzAligna) = v24;
          v66 = j_va("%s: %.1fx%.1fb (%.1f fields), max %ix%.1fb (%i f)", v94, (float)((float)v102 * 0.1), (float)((float)v100 / (float)(8 * v60)), (float)((float)v22 / (float)v60), horzAligna, (float)((float)v23 / (float)(8 * v59)), color);
          if ( activeScreenPlacementMode )
          {
            if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
            {
              v68 = &scrPlaceViewDisplay[v63];
              goto LABEL_106;
            }
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v67 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v67 )
              __debugbreak();
          }
          v68 = &scrPlaceFull;
LABEL_106:
          CG_DrawStringExt(v68, 100.0, *(float *)&v15, v66, setColor, 0, 1, value, 0);
          v69 = v15;
          *(float *)&v69 = *(float *)&v15 + value;
          v15 = v69;
          goto LABEL_112;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v62 )
          __debugbreak();
      }
      v63 = localClientNum;
      v64 = &scrPlaceFull;
      goto LABEL_99;
    }
    v65 = setColor;
LABEL_112:
    v14 = v106 + 1;
    v106 = v14;
  }
  while ( v14 <= 29 );
  _XMM11 = _xmm;
  v71 = 0;
  v72 = 0i64;
  __asm { vpxor   xmm14, xmm14, xmm14 }
  while ( 2 )
  {
    __asm
    {
      vpaddd  xmm0, xmm11, xmm14
      vpaddd  xmm1, xmm11, xmm15
    }
    Base[0] = _XMM0;
    Base[1] = _XMM1;
    __asm
    {
      vpaddd  xmm0, xmm11, xmm2
      vpaddd  xmm1, xmm11, xmm3
    }
    Base[2] = _XMM0;
    Base[3] = _XMM1;
    s_sampleNum = v71;
    v78 = &v116;
    for ( i = 16; i <= 29; ++i )
    {
      *(_DWORD *)v78 = i;
      v78 += 4;
    }
    qsort(Base, 0x1Eui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_CompareEntityAnalysisSamples);
    v80 = 0i64;
    while ( 2 )
    {
      v81 = *((int *)Base + v80);
      v82 = 0i64;
      *(float *)&v82 = (float)s_entitySamples[v72][v81] * 0.00062499999;
      _XMM1 = v82;
      __asm { vminss  xmm6, xmm1, xmm10 }
      if ( *(float *)&_XMM6 > 0.0 )
      {
        switch ( (int)v81 )
        {
          case 0:
          case 28:
            v65 = &colorOrange;
            break;
          case 1:
            v65 = &colorRed;
            break;
          case 2:
            v65 = &colorGreen;
            break;
          case 3:
            v65 = &colorBlue;
            break;
          case 4:
            v65 = &colorLtGreen;
            break;
          case 5:
          case 12:
            v65 = &colorLtBlue;
            break;
          case 6:
            v65 = &colorMagenta;
            break;
          case 7:
          case 10:
          case 13:
          case 14:
            v65 = &colorLtOrange;
            break;
          case 8:
            v65 = &colorLtGrey;
            break;
          case 9:
          case 18:
            v65 = &colorLtCyan;
            break;
          case 11:
            v65 = &colorMdYellow;
            break;
          case 17:
          case 23:
            v65 = &colorDkCyan;
            break;
          case 19:
          case 20:
          case 21:
          case 24:
            v65 = &colorWhite;
            break;
          case 22:
            v65 = &colorGreenFaded;
            break;
          case 25:
            v65 = &colorFacebookBlue;
            break;
          case 26:
            v65 = &colorRedHeat;
            break;
          case 29:
            v65 = &colorYellow;
            break;
          default:
            LODWORD(horzAlign) = *((_DWORD *)Base + v80);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1036, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missing handler for snapshot entity type %i", horzAlign) )
              __debugbreak();
            break;
        }
        v85 = cgMedia.whiteMaterial;
        v86 = *(float *)&_XMM6 * 100.0;
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
          {
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v87 )
              __debugbreak();
            goto LABEL_144;
          }
          v88 = &scrPlaceViewDisplay[localClientNum];
        }
        else
        {
LABEL_144:
          v88 = &scrPlaceFull;
        }
        UI_DrawHandlePic(v88, (float)((float)v71 * 8.0) + 10.0, 100.0 - v86, 8.0, v86, 1, 1, v65, v85);
      }
      if ( ++v80 <= 29 )
        continue;
      break;
    }
    ++v71;
    ++v72;
    if ( v71 < 10 )
      continue;
    break;
  }
}

/*
==============
CG_ToggleBWColor
==============
*/
void CG_ToggleBWColor(bool *isWhite)
{
  const dvar_t *v1; 

  v1 = DVARINT_cg_drawNetTiming;
  if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  *isWhite = v1->current.integer < 3 && !*isWhite;
}

