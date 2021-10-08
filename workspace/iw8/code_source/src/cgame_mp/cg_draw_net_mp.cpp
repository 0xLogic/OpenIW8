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
  const ScreenPlacement *v14; 
  GfxFont *FontHandle; 
  GfxFont *v17; 
  GfxFont *v18; 
  char v35; 
  float v43; 
  float v44; 
  float v45; 
  int horzAlign; 
  int horzAligna; 
  int v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  int style; 
  vec4_t v54; 
  vec4_t color; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm { vmovss  xmm2, cs:FONT_SCALE; scale }
  v14 = ActivePlacement;
  FontHandle = UI_GetFontHandle(ActivePlacement, FONT_TYPE, *(float *)&_XMM2);
  __asm { vmovss  xmm2, cs:HEADER_FONT_SCALE; scale }
  v17 = FontHandle;
  v18 = UI_GetFontHandle(v14, FONT_TYPE, *(float *)&_XMM2);
  if ( isWhite )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovups xmm1, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
      vmovups xmm1, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    }
  }
  __asm
  {
    vmovss  xmm7, [rsp+0F8h+positionX]
    vmovss  xmm3, cs:BAR_W; w
    vmovss  xmm2, cs:BAR_Y; y
    vmovups xmmword ptr [rsp+0F8h+var_78], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0F8h+style], xmm0
    vmovss  dword ptr [rsp+0F8h+var_B0], xmm0
    vmovss  xmm0, cs:BAR_H
    vmovups xmmword ptr [rsp+0F8h+var_88], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+0F8h+var_B8], xmm1
    vmovss  [rsp+0F8h+var_C0], xmm1
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+0F8h+var_D8], xmm0
  }
  CL_DrawStretchPic(v14, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v43, 4, 4, *(float *)&v48, v49, v52, *(float *)&style, &color, cgMedia.whiteMaterial);
  __asm
  {
    vmovss  xmm0, cs:HEADER_FONT_SCALE
    vaddss  xmm1, xmm7, cs:TEXT_X_OFFSET
    vmovss  [rsp+0F8h+var_B8], xmm0
    vmovss  xmm0, cs:TEXT_Y
    vmovss  [rsp+0F8h+horzAlign], xmm0
    vmovss  [rsp+0F8h+var_D8], xmm1
  }
  UI_DrawText(v14, headerText, 36, v18, v44, *(float *)&horzAlign, 4, 4, v50, &v54, 3);
  __asm
  {
    vmovss  xmm0, cs:TEXT_Y
    vmovss  xmm6, cs:HEADER_TEXT_OFFSET_Y
    vmovss  xmm8, cs:__real@43f00000
    vaddss  xmm2, xmm0, xmm6
    vcomiss xmm2, xmm8
  }
  while ( v35 )
  {
    __asm
    {
      vmovss  xmm0, cs:FONT_SCALE
      vaddss  xmm1, xmm7, cs:TEXT_X_OFFSET
      vmovss  [rsp+0F8h+var_B8], xmm0
      vmovss  [rsp+0F8h+horzAlign], xmm2
      vmovss  [rsp+0F8h+var_D8], xmm1
    }
    UI_DrawText(v14, text, 36, v17, v45, *(float *)&horzAligna, 4, 4, v51, &v54, 3);
    __asm
    {
      vmovss  xmm0, cs:TEXT_Y
      vaddss  xmm6, xmm6, cs:TEXT_Y_OFFSET
      vaddss  xmm2, xmm0, xmm6
      vcomiss xmm2, xmm8
    }
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_Debug_DrawLatencyTestTimingColumns
==============
*/
void CG_Debug_DrawLatencyTestTimingColumns(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  int integer; 
  ClActiveClientMP *ClientMP; 
  cg_t *LocalClientGlobals; 
  int v8; 
  int realtime; 
  int serverTime; 
  const dvar_t *v14; 
  bool v15; 
  const snapshot_t *snap; 
  const dvar_t *v19; 
  bool v20; 
  int m_svLevelTime; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float width; 
  float widtha; 
  float widthb; 
  float widthc; 
  float widthd; 
  char dest[40]; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v2 = DVARINT_cg_drawNetTiming;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( integer != 2 )
  {
    v8 = com_frameNumber;
    if ( lastFrameNumber != com_frameNumber )
    {
      CG_ToggleBWColor(&lastFrameNumberIsWhite);
      v8 = com_frameNumber;
      lastFrameNumber = com_frameNumber;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(v8 % 10000));
    __asm
    {
      vmovss  xmm0, cs:WIDTH
      vmovss  [rsp+0A8h+width], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm6
    }
    CG_Debug_DrawHiContrastColumn(localClientNum, "FRAME #", dest, lastFrameNumberIsWhite, fmt, width);
    __asm { vmovss  xmm6, cs:WIDTH }
    realtime = cls.realtime;
    if ( lastRealTime != cls.realtime )
    {
      CG_ToggleBWColor(&lastRealTimeIsWhite);
      realtime = cls.realtime;
      lastRealTime = cls.realtime;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(realtime % 10000));
    __asm
    {
      vmovss  xmm0, cs:WIDTH
      vmovss  [rsp+0A8h+width], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm6
    }
    CG_Debug_DrawHiContrastColumn(localClientNum, "REAL TIME", dest, lastRealTimeIsWhite, fmta, widtha);
    __asm { vaddss  xmm6, xmm6, cs:WIDTH }
  }
  serverTime = ClientMP->serverTime;
  if ( lastClientTime != serverTime )
  {
    v14 = DVARINT_cg_drawNetTiming;
    if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.integer < 3 && !lastClientTimeIsWhite;
    lastClientTimeIsWhite = v15;
    serverTime = ClientMP->serverTime;
    lastClientTime = serverTime;
  }
  Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(serverTime % 10000));
  __asm
  {
    vmovss  xmm0, cs:WIDTH
    vmovss  [rsp+0A8h+width], xmm0
    vmovss  dword ptr [rsp+0A8h+fmt], xmm6
  }
  CG_Debug_DrawHiContrastColumn(localClientNum, "CL TIME", dest, lastClientTimeIsWhite, fmtb, widthb);
  snap = LocalClientGlobals->snap;
  __asm { vaddss  xmm6, xmm6, cs:WIDTH }
  if ( lastSnapTime != snap->serverTime )
  {
    v19 = DVARINT_cg_drawNetTiming;
    if ( !DVARINT_cg_drawNetTiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawNetTiming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.integer < 3 && !lastSnapTimeIsWhite;
    lastSnapTimeIsWhite = v20;
    snap = LocalClientGlobals->snap;
    lastSnapTime = snap->serverTime;
  }
  Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(snap->serverTime % 10000));
  __asm
  {
    vmovss  xmm0, cs:WIDTH
    vmovss  [rsp+0A8h+width], xmm0
    vmovss  dword ptr [rsp+0A8h+fmt], xmm6
  }
  CG_Debug_DrawHiContrastColumn(localClientNum, "SNAP TIME", dest, lastSnapTimeIsWhite, fmtc, widthc);
  __asm { vaddss  xmm6, xmm6, cs:WIDTH }
  if ( Com_IsGameLocalServerRunning() )
  {
    m_svLevelTime = SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime;
    if ( lastServerTime != m_svLevelTime )
    {
      CG_ToggleBWColor(&lastServerTimeIsWhite);
      lastServerTime = m_svLevelTime;
    }
    Com_sprintf(dest, 0x24ui64, "%04i", (unsigned int)(m_svLevelTime % 10000));
    __asm
    {
      vmovss  xmm0, cs:WIDTH
      vmovss  [rsp+0A8h+width], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm6
    }
    CG_Debug_DrawHiContrastColumn(localClientNum, "SV TIME", dest, lastServerTimeIsWhite, fmtd, widthd);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
CG_DrawDisconnect
==============
*/

void __fastcall CG_DrawDisconnect(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  __int64 v5; 
  ClConnectionDataMP *ClientConnectionData; 
  const dvar_t *v7; 
  const char *v10; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  cg_t *LocalClientGlobals; 
  ClConnectionDataMP *v18; 
  int v19; 
  char v24; 
  const char *v25; 
  const ScreenPlacement *v26; 
  Material *v30; 
  const ScreenPlacement *v31; 
  float fmt; 
  float fmta; 
  __int64 y; 
  float yc; 
  __int64 ya; 
  __int64 horzAlign; 
  int horzAlignb; 
  __int64 horzAligna; 
  int vertAlign; 
  int adjust; 
  ConversionArguments arguments; 
  char buf[48]; 
  char outputString[1024]; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    horzAlignb = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, horzAlignb) )
      __debugbreak();
  }
  v5 = v4;
  if ( clientUIActives[v4].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1970, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE") )
    __debugbreak();
  if ( !CL_CGameMP_IsServerRestarting((LocalClientNum_t)v4) && !CL_Demo_IsPlayingAny((LocalClientNum_t)v4) )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(horzAlign) = 2;
      LODWORD(y) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
        __debugbreak();
    }
    if ( clientUIActives[v5].migrationState == CMSTATE_INACTIVE )
    {
      __asm { vmovaps [rsp+528h+var_38], xmm6 }
      if ( CL_CGameMP_IsServerSavingReplay((const LocalClientNum_t)v4) && (CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->time & 0x400) == 0 )
      {
        ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v4);
        if ( !CL_GetClientName((LocalClientNum_t)v4, ClientConnectionData->replayRequestor, buf, 0x2Fui64) )
          Com_sprintf(buf, 0x2Fui64, "Unknown Player");
        v7 = DVARSTR_party_hostname;
        *(_QWORD *)&arguments.argCount = 3i64;
        arguments.args[0] = buf;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vpxor   xmm1, xmm1, xmm1
          vmovdqu xmmword ptr [rsp+528h+arguments.args+8], xmm0
          vmovdqu xmmword ptr [rsp+528h+arguments.args+18h], xmm1
          vmovdqu xmmword ptr [rsp+528h+arguments.args+28h], xmm0
          vmovdqu xmmword ptr [rsp+528h+arguments.args+38h], xmm1
        }
        if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        arguments.args[1] = v7->current.string;
        arguments.args[2] = ClientConnectionData->replayPath;
        v10 = UI_SafeTranslateString("CGAME/SAVINGREPLAY");
        UI_ReplaceConversions(v10, &arguments, outputString, 0x400ui64);
        __asm
        {
          vmovss  xmm6, cs:__real@3f155555
          vmovaps xmm2, xmm6; scale
        }
        ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
        __asm { vmovaps xmm3, xmm6; scale }
        FontHandle = UI_GetFontHandle(ActivePlacement, 0, *(float *)&_XMM2);
        UI_TextWidth(outputString, 0, FontHandle, *(float *)&_XMM3);
        __asm
        {
          vmovss  xmm0, cs:__real@43700000
          vmovss  [rsp+528h+adjust], xmm6
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  [rsp+528h+y], xmm0
          vmovss  dword ptr [rsp+528h+fmt], xmm1
        }
        UI_DrawText(ActivePlacement, outputString, 0x7FFFFFFF, FontHandle, fmt, yc, 0, 0, *(float *)&adjust, &colorWhite, 3);
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      v18 = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v4);
      if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) )
      {
        v19 = Sys_Milliseconds();
        if ( Com_MP_GetIsLocalServerPaused() )
        {
          v18->lastUpdateWasPausedTime = v19;
LABEL_39:
          __asm { vmovaps xmm6, [rsp+528h+var_38] }
          return;
        }
        if ( v19 - v18->lastUpdateWasPausedTime < Dvar_GetInt_Internal_DebugName(DVARINT_com_exit_pause_connection_interrupted_delay, "com_exit_pause_connection_interrupted_delay") )
          goto LABEL_39;
      }
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(horzAlign) = 2;
        LODWORD(y) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
        LODWORD(horzAligna) = 2;
        LODWORD(ya) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ya, horzAligna) )
          __debugbreak();
      }
      if ( !clientUIActives[v5].frontEndSceneState[0] )
      {
        if ( (unsigned int)v4 >= 2 )
        {
          LODWORD(horzAlign) = 2;
          LODWORD(y) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        if ( clientUIActives[v5].connectionState == CA_ACTIVE && v18->lastPacketTime > 0 )
        {
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, eax
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_timeout, "cl_timeout");
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@447a0000
            vdivss  xmm2, xmm6, xmm1
            vcomiss xmm2, cs:__real@3f000000
          }
          if ( !v24 )
          {
            v25 = UI_SafeTranslateString("CGAME/CONNECTION_INTERRUPTED");
            v26 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
            __asm
            {
              vmovss  xmm0, cs:__real@41200000
              vmovss  xmm2, cs:__real@42c80000; y
              vmovss  xmm1, cs:__real@43960000; x
              vmovss  [rsp+528h+vertAlign], xmm0
            }
            CG_DrawStringExt(v26, *(float *)&_XMM1, *(float *)&_XMM2, v25, &colorWhite, 0, 1, *(float *)&vertAlign, 0);
            if ( (LocalClientGlobals->time & 0x200) == 0 )
            {
              v30 = Material_RegisterHandle("hud_icon_net_disconnect_mat", IMAGE_TRACK_HUD);
              v31 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v4);
              __asm
              {
                vmovss  xmm3, cs:__real@42400000; w
                vmovss  xmm2, cs:__real@43a00000; y
                vmovss  xmm1, cs:__real@43940000; x
                vmovss  dword ptr [rsp+528h+fmt], xmm3
              }
              UI_DrawHandlePic(v31, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 0, 0, &colorWhite, v30);
            }
          }
        }
      }
      goto LABEL_39;
    }
  }
}

/*
==============
CG_DrawDisconnectPercentage
==============
*/

void __fastcall CG_DrawDisconnectPercentage(LocalClientNum_t localClientNum, double _XMM1_8)
{
  const ScreenPlacement *ActivePlacement; 
  signed int v13; 
  const PartyData *CurrentParty; 
  SvClientConnectionState state; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( Com_IsAnyLocalServerRunning() )
  {
    v13 = 0;
    CurrentParty = Live_GetCurrentParty();
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@40c00000
        vmovaps [rsp+0F8h+var_58], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+0F8h+var_68], xmm9
        vmovss  xmm9, cs:__real@c1a00000
        vmovaps [rsp+0F8h+var_78], xmm10
        vmovss  xmm10, cs:__real@44228000
        vmovaps [rsp+0F8h+var_88], xmm11
        vmovss  xmm11, cs:__real@c4330000
        vmovaps [rsp+0F8h+var_98], xmm12
        vmovss  xmm12, cs:__real@c2840000
        vmovaps [rsp+0F8h+var_A8], xmm13
        vmovss  xmm13, cs:__real@c4348000
      }
      do
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        _RDI = SvClient::GetCommonClient(v13);
        state = SvClient::GetCommonClient(v13)->state;
        if ( (state == CS_ZOMBIE || !LODWORD(_RDI[855].__vftable)) && !NetConnection::IsLoopback((NetConnection *)&_RDI[642].lastUsercmd.sightedClientsMask.data[6]) && (state || Party_IsMemberRegistered(CurrentParty, v13)) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4E724h]; val
            vmovaps xmm2, xmm8; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmulss  xmm6, xmm1, xmm9
            vmulss  xmm3, xmm0, xmm10; w
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm11; x
            vmovss  dword ptr [rsp+0F8h+fmt], xmm7
          }
          UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 3, 3, &colorWhite, cls.whiteMaterial);
          __asm
          {
            vmovaps xmm3, xmm7; w
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm12; x
            vmovss  dword ptr [rsp+0F8h+fmt], xmm7
          }
          UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 3, 3, &colorWhite, cls.whiteMaterial);
          __asm
          {
            vmovaps xmm3, xmm7; w
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm13; x
            vmovss  dword ptr [rsp+0F8h+fmt], xmm7
          }
          UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1_8, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 3, 3, &colorWhite, cls.whiteMaterial);
        }
        ++v13;
      }
      while ( v13 < (int)SvClient::ms_clientCount );
      __asm
      {
        vmovaps xmm13, [rsp+0F8h+var_A8]
        vmovaps xmm12, [rsp+0F8h+var_98]
        vmovaps xmm11, [rsp+0F8h+var_88]
        vmovaps xmm10, [rsp+0F8h+var_78]
        vmovaps xmm9, [rsp+0F8h+var_68]
        vmovaps xmm8, [rsp+0F8h+var_58]
      }
    }
  }
  else
  {
    _RAX = ClActiveClientMP::GetClientMP(localClientNum);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  xmm0, dword ptr [rax+1FB40h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm6, cs:__real@c1a00000
      vmovss  xmm7, cs:__real@40c00000
      vmulss  xmm3, xmm0, cs:__real@44228000; w
      vmovss  xmm1, cs:__real@c4330000; x
      vmovaps xmm2, xmm6; y
      vmovss  dword ptr [rsp+0F8h+fmt], xmm7
    }
    UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 3, 3, &colorWhite, cls.whiteMaterial);
    __asm
    {
      vmovss  xmm1, cs:__real@c2840000; x
      vmovaps xmm3, xmm7; w
      vmovaps xmm2, xmm6; y
      vmovss  dword ptr [rsp+0F8h+fmt], xmm7
    }
    UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, 3, 3, &colorWhite, cls.whiteMaterial);
    __asm
    {
      vmovss  xmm1, cs:__real@c4348000; x
      vmovaps xmm3, xmm7; w
      vmovaps xmm2, xmm6; y
      vmovss  dword ptr [rsp+0F8h+fmt], xmm7
    }
    UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, 3, 3, &colorWhite, cls.whiteMaterial);
  }
  __asm
  {
    vmovaps xmm6, [rsp+0F8h+var_38]
    vmovaps xmm7, [rsp+0F8h+var_48]
  }
}

/*
==============
CG_DrawEntityCount
==============
*/
void CG_DrawEntityCount(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v14; 
  const ScreenPlacement *v15; 
  const dvar_t *v18; 
  __int64 v19; 
  const char *v25; 
  const ScreenPlacement *v26; 
  char v28; 
  char v36; 
  char v37; 
  __int64 v41; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  int adjust; 
  int adjusta; 
  int adjustb; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  vec4_t *v89; 
  vec4_t *v90; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DVARVEC2_drawEntityCountPos;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+28h]
    vmovss  xmm10, dword ptr [rbx+2Ch]
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v14 = DVARINT_drawEntityCountSize;
  v15 = ActivePlacement;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, dword ptr [rbx+28h]
  }
  v18 = DVARINT_drawEntityCountSize;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = lagometer.frameCount & 0x7F;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, dword ptr [rbx+28h]
  }
  LODWORD(fmt) = lagometer.entityChangeSamples[v19];
  __asm
  {
    vsubss  xmm7, xmm12, cs:__real@42480000
    vaddss  xmm9, xmm10, xmm8
    vaddss  xmm6, xmm9, cs:__real@41900000
  }
  v25 = j_va("Snp%3i Arc%3i All%3i Chg%3i", (unsigned int)lagometer.changedEntitySamples[v19], (unsigned int)lagometer.archivedEntitySamples[v19], (unsigned int)lagometer.entityAllSamples[v19], fmt);
  v26 = ScrPlace_GetActivePlacement(localClientNum);
  __asm { vmovss  xmm0, cs:__real@41200000 }
  v28 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+108h+color], xmm0
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm7; x
  }
  CG_DrawStringExt(v26, *(float *)&_XMM1, *(float *)&_XMM2, v25, &colorWhite, 0, 1, color, 0);
  __asm
  {
    vmovaps xmm3, xmm11; w
    vmovaps xmm2, xmm10; y
    vmovaps xmm1, xmm12; x
    vmovss  dword ptr [rsp+108h+fmt], xmm8
  }
  UI_DrawHandlePic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  __asm
  {
    vmulss  xmm10, xmm8, cs:__real@3ac9a634
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm11, xmm7
  }
  if ( !(v36 | v37) )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vaddss  xmm12, xmm12, xmm11
      vxorps  xmm1, xmm1, xmm1
    }
    do
    {
      v41 = (LOBYTE(lagometer.frameCount) - v28 - 1) & 0x7F;
      __asm
      {
        vsubss  xmm1, xmm12, xmm1
        vxorps  xmm0, xmm0, xmm0
        vsubss  xmm8, xmm1, xmm6
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, xmm10
        vsubss  xmm2, xmm9, xmm3; y
        vmovaps xmm1, xmm8; x
      }
      if ( lagometer.entityAllSamples[v41] >= 500 )
        v89 = &colorRed;
      else
        v89 = &colorBlue;
      __asm
      {
        vmovss  [rsp+108h+var_B8], xmm6
        vmovss  [rsp+108h+var_C0], xmm6
        vmovss  [rsp+108h+adjust], xmm7
        vmovss  dword ptr [rsp+108h+color], xmm7
        vmovss  dword ptr [rsp+108h+fmt], xmm3
        vmovaps xmm3, xmm6; w
      }
      CL_DrawStretchPic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 1, 1, colora, *(float *)&adjust, v83, v86, v89, cgMedia.whiteMaterial);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vsubss  xmm2, xmm9, xmm1; y
        vmovaps xmm3, xmm6; w
      }
      if ( lagometer.archivedEntitySamples[v41] >= 300 )
        v90 = &colorOrange;
      else
        v90 = &colorMdCyan;
      __asm
      {
        vmovss  [rsp+108h+var_B8], xmm6
        vmovss  [rsp+108h+var_C0], xmm6
        vmovss  [rsp+108h+adjust], xmm7
        vmovss  dword ptr [rsp+108h+color], xmm7
        vmovss  dword ptr [rsp+108h+fmt], xmm1
        vmovaps xmm1, xmm8; x
      }
      CL_DrawStretchPic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 1, 1, colorb, *(float *)&adjusta, v84, v87, v90, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  [rsp+108h+var_B8], xmm6
        vmovss  [rsp+108h+var_C0], xmm6
        vmovss  [rsp+108h+adjust], xmm7
        vmovss  dword ptr [rsp+108h+color], xmm7
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+rbx*4+0C04h]
        vmulss  xmm3, xmm0, xmm10
        vsubss  xmm2, xmm9, xmm3; y
        vmovss  dword ptr [rsp+108h+fmt], xmm3
        vmovaps xmm3, xmm6; w
        vmovaps xmm1, xmm8; x
      }
      CL_DrawStretchPic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, 1, 1, colorc, *(float *)&adjustb, v85, v88, &colorWhite, cgMedia.whiteMaterial);
      ++v28;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, esi
        vcomiss xmm1, xmm11
      }
    }
    while ( v36 );
  }
  _R11 = &v92;
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
}

/*
==============
CG_DrawLagometer
==============
*/
void CG_DrawLagometer(LocalClientNum_t localClientNum)
{
  const dvar_t *v12; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 

  CG_GetLocalClientStaticGlobals(localClientNum);
  v12 = DVARBOOL_drawLagometer;
  if ( !DVARBOOL_drawLagometer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawLagometer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    _RBX = DVARVEC2_cg_lagometerPos;
    __asm
    {
      vmovaps [rsp+148h+var_38], xmm6
      vmovaps [rsp+148h+var_48], xmm7
      vmovaps [rsp+148h+var_58], xmm8
      vmovaps [rsp+148h+var_68], xmm9
      vmovaps [rsp+148h+var_78], xmm10
      vmovaps [rsp+148h+var_88], xmm11
      vmovaps [rsp+148h+var_98], xmm12
      vmovaps [rsp+148h+var_A8], xmm13
      vmovaps [rsp+148h+var_B8], xmm14
      vmovaps [rsp+148h+var_C8], xmm15
    }
    if ( !DVARVEC2_cg_lagometerPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_lagometerPos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+2Ch]
      vmovss  xmm9, dword ptr [rbx+28h]
    }
    _RBX = DVARVEC2_cg_lagometerSize;
    __asm { vmovss  [rsp+148h+var_D8], xmm6 }
    if ( !DVARVEC2_cg_lagometerSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_lagometerSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+28h]
      vmovss  xmm14, dword ptr [rbx+2Ch]
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovaps xmm3, xmm7; w
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+148h+fmt], xmm14
    }
    UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 3, 3, &colorBlack, cgMedia.whiteMaterial);
    __asm
    {
      vmulss  xmm8, xmm14, cs:__real@3e4ccccd
      vmulss  xmm12, xmm8, cs:__real@3c23d70a
      vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm13, cs:__real@40000000
      vmovss  xmm10, cs:__real@3f800000
      vaddss  xmm11, xmm6, xmm8
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm7, xmm6
      vcomiss xmm7, xmm6
      vmulss  xmm12, xmm14, cs:__real@3a2ec33e
      vmulss  xmm0, xmm8, xmm13
      vmovaps xmm13, [rsp+148h+var_A8]
      vaddss  xmm11, xmm11, xmm0
      vcomiss xmm7, xmm6
      vmulss  xmm8, xmm14, cs:__real@3f000000
      vmulss  xmm11, xmm8, cs:__real@3a91a2b4
      vmovaps xmm15, [rsp+148h+var_C8]
      vmovaps xmm12, [rsp+148h+var_98]
      vmovaps xmm11, [rsp+148h+var_88]
      vmovaps xmm10, [rsp+148h+var_78]
      vmovaps xmm9, [rsp+148h+var_68]
      vmovaps xmm8, [rsp+148h+var_58]
      vmovaps xmm7, [rsp+148h+var_48]
      vmovaps xmm6, [rsp+148h+var_38]
      vmovaps xmm14, [rsp+148h+var_B8]
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

void __fastcall CG_DrawNetMP_AddDeathMonitorSample(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  bool v9; 
  unsigned int v10; 
  __int64 v13; 
  bool v14; 
  int serverTime; 
  bool v16; 
  bool v17; 
  __int64 firstDamageIdx; 
  deathMonitorSample_t *v19; 
  int v20; 
  int v21; 
  int v22; 
  int ControllerFromClient; 
  bool IsActive; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  char *fmt; 
  __int64 v39; 
  __int64 v40; 
  int value; 
  int clTime; 
  int snapTime; 
  int nextSnapTime; 
  int snaps; 
  unsigned __int64 userId; 
  DLogContext context; 
  char buffer[4096]; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_deathMonitor ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_deathMonitor )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !CG_View_IsKillCamView((const LocalClientNum_t)v4) )
  {
    _RBX = &s_deathMonitor[v4];
    __asm { vmovaps [rsp+1218h+var_38], xmm6 }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    *(double *)&_XMM0 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v4, &LocalClientGlobals->predictedPlayerState);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    v9 = v16 || v17;
    if ( !v16 && !v17 || _RBX->sampleCount )
    {
      v10 = _RBX->sampleCount & 0x7F;
      _RDI = &_RBX->samples[v10];
      _RSI = ((unsigned __int8)_RBX->sampleCount - 1) & 0x7F;
      v13 = v10;
      v14 = v9 && _RBX->deathIdx < 0;
      if ( !v9 || v14 )
        goto LABEL_17;
      if ( _RBX->deathIdx >= 0x80u )
      {
        LODWORD(v40) = 128;
        LODWORD(v39) = _RBX->deathIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 154, ASSERT_TYPE_ASSERT, "(unsigned)( dm->deathIdx ) < (unsigned)( 128 )", "dm->deathIdx doesn't index LAG_SAMPLES\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      if ( LocalClientGlobals->snap->serverTime == _RBX->samples[_RBX->deathIdx].snapTime )
      {
LABEL_17:
        _RDI->frameNumber = com_frameNumber;
        _RDI->clTime = LocalClientGlobals->time;
        _RDI->snapTime = LocalClientGlobals->snap->serverTime;
        serverTime = LocalClientGlobals->nextSnap->serverTime;
        __asm { vmovss  dword ptr [rdi+10h], xmm6 }
        _RDI->nextSnapTime = serverTime;
        _RDI->damageCount = LocalClientGlobals->predictedPlayerState.damageCount;
        _RDI->damageEvent = LocalClientGlobals->predictedPlayerState.damageEvent;
        _RDI->damageEventCount = LocalClientGlobals->predictedPlayerState.damageEvent - LocalClientGlobals->oldTransPlayerState.damageEvent;
        ++_RBX->sampleCount;
        v16 = 0;
        v17 = !v14;
        if ( v14 )
        {
          firstDamageIdx = _RBX->firstDamageIdx;
          _RBX->deathIdx = v13;
          v16 = 0;
          v17 = (_DWORD)firstDamageIdx == 0;
          if ( (int)firstDamageIdx >= 0 )
          {
            v16 = (unsigned int)firstDamageIdx < 0x80;
            v17 = (_DWORD)firstDamageIdx == 128;
            if ( (unsigned int)firstDamageIdx < 0x80 )
            {
              v19 = &_RBX->samples[firstDamageIdx];
              v20 = v19->damageEventCount + _RBX->samples[v13].damageEvent - v19->damageEvent;
              v21 = _RBX->samples[v13].frameNumber - v19->frameNumber;
              v22 = _RBX->samples[v13].clTime - v19->clTime;
              LODWORD(v40) = v22;
              LODWORD(v39) = _RDI->nextSnapTime;
              LODWORD(fmt) = _RDI->snapTime;
              Com_Printf(0, "Death Monitor: frameNumber=%i, clTime=%i, snapTime=%i, nextSnapTime=%i, ttk=%i, frames=%i, snaps=%i, dmgEvents=%i\n", (unsigned int)_RBX->samples[v13].frameNumber, (unsigned int)_RBX->samples[v13].clTime, fmt, v39, v40, v21, _RBX->snaps, v20);
              snaps = _RBX->snaps;
              nextSnapTime = _RDI->nextSnapTime;
              snapTime = _RDI->snapTime;
              clTime = _RDI->clTime;
              value = _RDI->frameNumber;
              ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
              userId = DLog_GetUserId(ControllerFromClient);
              IsActive = DLog_IsActive();
              v16 = 0;
              v17 = !IsActive;
              if ( IsActive )
              {
                v25 = DLog_CreateContext(&context, userId, buffer, 4096);
                v16 = 0;
                v17 = !v25;
                if ( v25 )
                {
                  v26 = DLog_IsActive();
                  v16 = 0;
                  v17 = !v26;
                  if ( v26 )
                  {
                    v27 = DLog_BeginEvent(&context, "latency_death_monitor");
                    context.autoEndEvent = 1;
                    v16 = 0;
                    v17 = !v27;
                    if ( v27 )
                    {
                      v28 = DLog_Int32(&context, "frame_number", value);
                      v16 = 0;
                      v17 = !v28;
                      if ( v28 )
                      {
                        v29 = DLog_Int32(&context, "cl_time", clTime);
                        v16 = 0;
                        v17 = !v29;
                        if ( v29 )
                        {
                          v30 = DLog_Int32(&context, "snap_time", snapTime);
                          v16 = 0;
                          v17 = !v30;
                          if ( v30 )
                          {
                            v31 = DLog_Int32(&context, "next_snap_time", nextSnapTime);
                            v16 = 0;
                            v17 = !v31;
                            if ( v31 )
                            {
                              v32 = DLog_Int32(&context, "ttk", v22);
                              v16 = 0;
                              v17 = !v32;
                              if ( v32 )
                              {
                                v33 = DLog_Int32(&context, "frames", v21);
                                v16 = 0;
                                v17 = !v33;
                                if ( v33 )
                                {
                                  v34 = DLog_Int32(&context, "snaps", snaps);
                                  v16 = 0;
                                  v17 = !v34;
                                  if ( v34 )
                                  {
                                    v35 = DLog_Int32(&context, "dmg_events", v20);
                                    v16 = 0;
                                    v17 = !v35;
                                    if ( v35 )
                                      DLog_RecordContext(&context);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vcomiss xmm0, dword ptr [rdi+10h]
        }
        if ( v16 || v17 )
        {
          *(_QWORD *)&_RBX->firstDamageIdx = -1i64;
          _RBX->snaps = 0;
        }
        else
        {
          __asm { vcomiss xmm0, dword ptr [rsi+rbx+10h] }
          if ( v16 || v17 )
            _RBX->firstDamageIdx = v13;
          if ( !v9 && _RBX->samples[_RSI].snapTime != _RDI->snapTime )
            ++_RBX->snaps;
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+1218h+var_38] }
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
    vmovdqu xmmword ptr [rsp+0E8h+arguments.args+8], xmm0
    vmovdqu xmmword ptr [rsp+0E8h+arguments.args+18h], xmm1
    vmovdqu xmmword ptr [rsp+0E8h+arguments.args+28h], xmm0
    vmovdqu xmmword ptr [rsp+0E8h+arguments.args+38h], xmm1
  }
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
  const dvar_t *v12; 
  __int64 v13; 
  const ScreenPlacement *ActivePlacement; 
  bool v26; 
  int v27; 
  bool v28; 
  int v29; 
  int v30; 
  BOOL v31; 
  int v34; 
  deathMonitor_t *v35; 
  deathMonitorSample_t *v43; 
  int v44; 
  bool v45; 
  int snapTime; 
  int frameNumber; 
  int v49; 
  int v61; 
  const vec4_t *v62; 
  int v66; 
  bool v67; 
  const vec4_t *v68; 
  GfxFont *FontHandle; 
  __int64 firstDamageIdx; 
  __int64 deathIdx; 
  __int64 v106; 
  deathMonitorSample_t *v107; 
  __int64 v111; 
  float fmta; 
  char *fmt; 
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
  __int64 horzAlign; 
  double horzAligna; 
  double horzAlignb; 
  double horzAlignc; 
  int horzAlignd; 
  int horzAligne; 
  int horzAlignf; 
  int horzAligng; 
  int horzAlignh; 
  __int64 vertAlign; 
  double vertAligna; 
  double vertAlignb; 
  double vertAlignc; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  float colord; 
  float colore; 
  float material; 
  float materiala; 
  float materialb; 
  float materialc; 
  float materiald; 
  float materiale; 
  float materialf; 
  float materialg; 
  float materialh; 
  float materiali; 
  float materialj; 
  float v162; 
  float v163; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  int style; 
  int stylea; 
  int styleb; 
  int stylec; 
  int styled; 
  int stylee; 
  bool v174; 
  int v175; 
  char dest[64]; 
  char v185; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  v12 = DVARBOOL_cg_drawDeathMonitor;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  v13 = localClientNum;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDeathMonitor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1281, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_cg_drawDeathMonitor, \"cg_drawDeathMonitor\" ))", (const char *)&queryFormat, "Dvar_GetBool( cg_drawDeathMonitor )") )
    __debugbreak();
  CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v13);
  _RBX = DVARVEC2_cg_deathMonitorPos;
  if ( !DVARVEC2_cg_deathMonitorPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_deathMonitorPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+28h]
    vmovss  xmm15, dword ptr [rbx+2Ch]
  }
  _RBX = DVARVEC2_cg_deathMonitorSize;
  __asm
  {
    vmovss  [rsp+1A8h+var_124], xmm9
    vmovss  [rsp+1A8h+var_128], xmm15
  }
  if ( !DVARVEC2_cg_deathMonitorSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_deathMonitorSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm13, dword ptr [rbx+28h]
    vmovss  xmm6, dword ptr [rbx+2Ch]
  }
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v13);
  __asm
  {
    vmovaps xmm3, xmm13; w
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm9; x
    vmovss  dword ptr [rsp+1A8h+fmt], xmm6
  }
  UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 3, 3, &colorBlack, cgMedia.whiteMaterial);
  __asm
  {
    vmulss  xmm7, xmm6, cs:__real@3eaaaaab
    vmovss  xmm10, cs:__real@3e4ccccd
  }
  v26 = s_currentSnapIsWhite;
  v27 = 0;
  v28 = s_currentFrameIsWhite;
  v29 = s_currentSnapTime;
  v30 = s_currentSnapTime;
  v174 = s_currentSnapIsWhite;
  v31 = s_currentFrameIsWhite;
  __asm
  {
    vmulss  xmm0, xmm7, xmm10
    vmovss  [rsp+1A8h+var_12C], xmm0
    vaddss  xmm11, xmm15, xmm7
  }
  if ( (unsigned int)v13 >= 2 )
  {
    LODWORD(vertAlign) = 2;
    LODWORD(horzAlign) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1317, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_deathMonitor ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_deathMonitor )\n\t%i not in [0, %i)", horzAlign, vertAlign) )
      __debugbreak();
    v28 = s_currentFrameIsWhite;
    v26 = s_currentSnapIsWhite;
    v29 = s_currentSnapTime;
  }
  v34 = 0;
  v35 = &s_deathMonitor[v13];
  v175 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm13, xmm6
  }
  if ( !__CFADD__(s_deathMonitor, 4112 * v13) && v35 != NULL )
  {
    __asm
    {
      vmovss  xmm15, cs:__real@40000000
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+1A8h+var_98], xmm12
      vaddss  xmm0, xmm13, xmm9
      vmovaps [rsp+1A8h+var_B8], xmm14
      vaddss  xmm14, xmm11, cs:__real@40400000
      vmovss  [rsp+1A8h+var_130], xmm0
      vxorps  xmm9, xmm9, xmm9
      vxorpd  xmm12, xmm12, xmm12
    }
    while ( 1 )
    {
      v43 = &v35->samples[((unsigned __int8)v35->sampleCount - (_BYTE)v34 - 1) & 0x7F];
      v44 = ((unsigned __int8)v35->sampleCount - (_BYTE)v34 - 1) & 0x7F;
      v45 = 0;
      if ( !v34 )
      {
        snapTime = v43->snapTime;
        if ( snapTime != v29 )
        {
          s_currentSnapTime = v43->snapTime;
          v29 = snapTime;
          v26 = !v26;
          s_currentSnapIsWhite = v26;
        }
        frameNumber = v43->frameNumber;
        v30 = v29;
        v27 = s_currentFrame;
        v174 = v26;
        v45 = v43->frameNumber < (unsigned int)s_currentFrame;
        if ( v43->frameNumber != s_currentFrame )
        {
          v45 = 0;
          s_currentFrame = v43->frameNumber;
          v27 = frameNumber;
          v28 = !v28;
          s_currentFrameIsWhite = v28;
        }
        v31 = v28;
      }
      __asm
      {
        vcomiss xmm7, xmm6
        vmulss  xmm8, xmm7, dword ptr [rbx+10h]
      }
      v49 = v30;
      if ( v45 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  qword ptr [rsp+1A8h+vertAlign], xmm0
          vmovsd  qword ptr [rsp+1A8h+horzAlign], xmm12
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", horzAligna, vertAligna) )
          __debugbreak();
      }
      __asm
      {
        vmovss  [rsp+1A8h+style], xmm6
        vmovss  dword ptr [rsp+1A8h+var_160], xmm6
        vmaxss  xmm0, xmm8, xmm6
        vminss  xmm1, xmm0, xmm7
        vmovss  xmm0, [rsp+1A8h+var_130]
        vmovss  dword ptr [rsp+1A8h+material], xmm6
        vmovss  dword ptr [rsp+1A8h+color], xmm6
        vsubss  xmm8, xmm0, xmm9
        vsubss  xmm2, xmm11, xmm1; y
        vmovss  dword ptr [rsp+1A8h+fmt], xmm1
        vmovaps xmm1, xmm8; x
        vmovaps xmm3, xmm10; w
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 3, 3, color, material, v162, *(float *)&style, &colorGreen, cgMedia.whiteMaterial);
      if ( v44 == v35->deathIdx )
      {
        __asm
        {
          vmovss  [rsp+1A8h+style], xmm6
          vmovss  dword ptr [rsp+1A8h+var_160], xmm6
          vmovss  dword ptr [rsp+1A8h+material], xmm6
          vmovss  dword ptr [rsp+1A8h+color], xmm6
          vsubss  xmm2, xmm11, xmm7; y
          vmovaps xmm3, xmm10; w
          vmovaps xmm1, xmm8; x
          vmovss  dword ptr [rsp+1A8h+fmt], xmm7
        }
        CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 3, 3, colora, materiala, v163, *(float *)&stylea, &colorOrange, cgMedia.whiteMaterial);
      }
      v61 = v43->snapTime;
      if ( v61 != v30 )
        v174 = !v174;
      v30 = v43->snapTime;
      if ( v61 == v49 )
        v30 = v49;
      v62 = &colorBlack;
      if ( v174 )
        v62 = &colorWhite;
      __asm
      {
        vmovss  [rsp+1A8h+style], xmm6
        vmovss  dword ptr [rsp+1A8h+var_160], xmm6
        vmovss  dword ptr [rsp+1A8h+material], xmm6
        vmovss  dword ptr [rsp+1A8h+color], xmm6
        vmovaps xmm3, xmm10; w
        vmovaps xmm2, xmm11; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+1A8h+fmt], xmm15
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, 3, 3, colorb, materialb, v164, *(float *)&styleb, v62, cgMedia.whiteMaterial);
      v66 = v43->frameNumber;
      v67 = v43->frameNumber == v27;
      if ( v43->frameNumber != v27 )
      {
        v67 = v66 == v27;
        v31 = !v31;
      }
      if ( v67 )
        v66 = v27;
      v27 = v66;
      v68 = &colorBlack;
      __asm { vmovaps xmm3, xmm10; w }
      if ( v31 )
        v68 = &colorWhite;
      __asm
      {
        vmovss  [rsp+1A8h+style], xmm6
        vmovss  dword ptr [rsp+1A8h+var_160], xmm6
        vmovss  dword ptr [rsp+1A8h+material], xmm6
        vmovss  dword ptr [rsp+1A8h+color], xmm6
        vaddss  xmm2, xmm11, xmm15; y
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+1A8h+fmt], xmm10
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, 3, 3, colorc, materialc, v165, *(float *)&stylec, v68, cgMedia.whiteMaterial);
      __asm
      {
        vcomiss xmm7, xmm6
        vmulss  xmm1, xmm7, cs:__real@3c23d70a
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+14h]
        vmulss  xmm9, xmm0, xmm1
      }
      if ( v45 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  qword ptr [rsp+1A8h+vertAlign], xmm0
          vmovsd  qword ptr [rsp+1A8h+horzAlign], xmm12
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", horzAlignb, vertAlignb) )
          __debugbreak();
      }
      __asm
      {
        vmovss  [rsp+1A8h+style], xmm6
        vmovss  dword ptr [rsp+1A8h+var_160], xmm6
        vmovss  dword ptr [rsp+1A8h+material], xmm6
        vmovss  dword ptr [rsp+1A8h+color], xmm6
        vmaxss  xmm0, xmm9, xmm6
        vminss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsp+1A8h+fmt], xmm1
        vmovaps xmm1, xmm8; x
        vmovaps xmm3, xmm10; w
        vmovaps xmm2, xmm14; y
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, 3, 3, colord, materiald, v166, *(float *)&styled, &colorRed, cgMedia.whiteMaterial);
      __asm
      {
        vcomiss xmm7, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1Ch]
        vmulss  xmm9, xmm0, [rsp+1A8h+var_12C]
      }
      if ( v45 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  qword ptr [rsp+1A8h+vertAlign], xmm0
          vmovsd  qword ptr [rsp+1A8h+horzAlign], xmm12
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", horzAlignc, vertAlignc) )
          __debugbreak();
      }
      __asm
      {
        vmovss  [rsp+1A8h+style], xmm6
        vmovss  dword ptr [rsp+1A8h+var_160], xmm6
        vmovss  dword ptr [rsp+1A8h+material], xmm6
        vmovss  dword ptr [rsp+1A8h+color], xmm6
        vmaxss  xmm0, xmm9, xmm6
        vminss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm14; y
        vmovaps xmm3, xmm10; w
        vmovaps xmm1, xmm8; x
        vmovss  dword ptr [rsp+1A8h+fmt], xmm9
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, 3, 3, colore, materiale, v167, *(float *)&stylee, &colorYellow, cgMedia.whiteMaterial);
      v34 = v175 + 1;
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vcvtsi2ss xmm9, xmm9, ecx
        vcomiss xmm9, xmm13
      }
      ++v175;
      if ( !v45 )
        break;
      v29 = s_currentSnapTime;
      v26 = s_currentSnapIsWhite;
      v28 = s_currentFrameIsWhite;
    }
    __asm
    {
      vmovss  xmm15, [rsp+1A8h+var_128]
      vmovss  xmm9, [rsp+1A8h+var_124]
      vmovss  xmm10, cs:__real@3e4ccccd
      vmovaps xmm14, [rsp+1A8h+var_B8]
      vmovaps xmm12, [rsp+1A8h+var_98]
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000; scale
    vmovss  xmm1, cs:__real@3f000000; scale
    vsubss  xmm8, xmm9, cs:__real@428c0000
  }
  FontHandle = UI_GetFontHandle(ActivePlacement, 5, *(float *)&_XMM2);
  UI_TextHeight(FontHandle, *(float *)&_XMM1);
  firstDamageIdx = v35->firstDamageIdx;
  __asm
  {
    vmovaps xmm13, [rsp+1A8h+var_A8]
    vmovaps xmm11, [rsp+1A8h+var_88]
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, eax
    vaddss  xmm6, xmm7, xmm15
  }
  if ( (int)firstDamageIdx >= 0 )
  {
    deathIdx = v35->deathIdx;
    if ( (int)deathIdx >= 0 )
    {
      v106 = deathIdx;
      v107 = &v35->samples[firstDamageIdx];
      Com_sprintf(dest, 0x40ui64, "TTK: %i", (unsigned int)(v35->samples[deathIdx].clTime - v107->clTime));
      __asm
      {
        vmovss  dword ptr [rsp+1A8h+material], xmm10
        vmovss  [rsp+1A8h+horzAlign], xmm6
        vmovss  dword ptr [rsp+1A8h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmth, *(float *)&horzAlignd, 3, 3, materialf, &colorWhite, 3);
      __asm { vaddss  xmm6, xmm6, xmm7 }
      Com_sprintf(dest, 0x40ui64, "Snaps: %i", (unsigned int)v35->snaps);
      __asm
      {
        vmovss  dword ptr [rsp+1A8h+material], xmm10
        vmovss  [rsp+1A8h+horzAlign], xmm6
        vmovss  dword ptr [rsp+1A8h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmti, *(float *)&horzAligne, 3, 3, materialg, &colorWhite, 3);
      __asm { vaddss  xmm6, xmm6, xmm7 }
      Com_sprintf(dest, 0x40ui64, "Frames: %i", (unsigned int)(v35->samples[v106].frameNumber - v107->frameNumber));
      __asm
      {
        vmovss  dword ptr [rsp+1A8h+material], xmm10
        vmovss  [rsp+1A8h+horzAlign], xmm6
        vmovss  dword ptr [rsp+1A8h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtj, *(float *)&horzAlignf, 3, 3, materialh, &colorWhite, 3);
      Com_sprintf(dest, 0x40ui64, "Dmg Events: %i", (unsigned int)(v107->damageEventCount + v35->samples[v106].damageEvent - v107->damageEvent));
      __asm
      {
        vmovss  dword ptr [rsp+1A8h+material], xmm10
        vaddss  xmm0, xmm7, xmm6
        vmovss  [rsp+1A8h+horzAlign], xmm0
        vmovss  dword ptr [rsp+1A8h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtk, *(float *)&horzAligng, 3, 3, materiali, &colorWhite, 3);
    }
  }
  v111 = ((unsigned __int8)v35->sampleCount - 1) & 0x7F;
  LODWORD(fmt) = v35->samples[v111].snapTime;
  Com_sprintf(dest, 0x40ui64, "Time: %04i Snap: %04i", (unsigned int)v35->samples[v111].clTime, fmt);
  __asm
  {
    vmovss  dword ptr [rsp+1A8h+material], xmm10
    vmovss  [rsp+1A8h+horzAlign], xmm15
    vmovss  dword ptr [rsp+1A8h+fmt], xmm9
  }
  UI_DrawText(ActivePlacement, dest, 64, FontHandle, fmtl, *(float *)&horzAlignh, 3, 3, materialj, &colorWhite, 3);
  _R11 = &v185;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  __int64 v11; 
  int PacketAnalysisClientNum; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v14; 
  ClConnection *v19; 
  int v20; 
  int v21; 
  int ClientSnapshotPing; 
  float setColor; 
  __int64 forceColor; 
  __int64 shadow; 
  float s1a; 
  __int64 s1; 
  float s1b; 
  int adjust; 
  float v59; 
  float v60; 
  vec4_t color; 

  v11 = localClientNum;
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum >= 0 )
  {
    __asm
    {
      vmovaps [rsp+138h+var_98], xmm13
      vmovaps [rsp+138h+var_A8], xmm14
    }
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v11);
    v14 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v11);
    __asm
    {
      vmovss  xmm13, cs:__real@41200000
      vmovss  xmm14, cs:__real@44020000
      vmovss  xmm2, cs:__real@42c80000; y
      vmovss  [rsp+138h+s1], xmm13
      vmovaps xmm1, xmm14; x
    }
    CG_DrawStringExt(v14, *(float *)&_XMM1, *(float *)&_XMM2, "Ping", &colorWhite, 0, 1, s1a, 0);
    if ( (unsigned int)v11 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&shadow = cl_maxLocalClients;
      LODWORD(forceColor) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    if ( !ClConnection::ms_connections[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v19 = ClConnection::ms_connections[v11];
    if ( SLODWORD(v19[37198].__vftable) <= 0 )
    {
      LODWORD(s1) = v19[37198].__vftable;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 171, ASSERT_TYPE_ASSERT, "( m_packetBackupCount ) > ( 0 )", "%s > %s\n\t%i, %i", "m_packetBackupCount", "0", s1, 0i64) )
        __debugbreak();
    }
    v20 = LODWORD(v19[37198].__vftable) - 1;
    if ( v20 >= 0 )
    {
      __asm { vmovaps [rsp+138h+var_28], xmm6 }
      v21 = 3 * v20;
      __asm
      {
        vmovaps [rsp+138h+var_38], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmovaps [rsp+138h+var_48], xmm8
        vmovss  xmm8, cs:__real@3c03126f
        vmovaps [rsp+138h+var_58], xmm9
        vmovss  xmm9, cs:__real@3b83126f
        vmovaps [rsp+138h+var_68], xmm10
        vmovss  xmm10, cs:__real@3e4ccccd
        vmovaps [rsp+138h+var_78], xmm11
        vmovss  xmm11, cs:__real@40400000
        vmovaps [rsp+138h+var_88], xmm12
        vmovss  xmm12, cs:__real@42b40000
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        ClientSnapshotPing = SV_GetClientSnapshotPing(PacketAnalysisClientNum, v20);
        if ( ClientSnapshotPing >= 0 )
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
          if ( ClientSnapshotPing >= 100 )
          {
            if ( ClientSnapshotPing >= 200 )
            {
              __asm
              {
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm9
                vsubss  xmm1, xmm7, xmm1
                vmaxss  xmm0, xmm1, xmm10
                vmovss  dword ptr [rsp+138h+var_C8], xmm0
                vmovss  dword ptr [rsp+138h+var_C8+4], xmm6
              }
            }
            else
            {
              __asm
              {
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm8
                vsubss  xmm2, xmm7, xmm1
                vmovss  dword ptr [rsp+138h+var_C8], xmm2
                vmovss  dword ptr [rsp+138h+var_C8+4], xmm2
              }
            }
          }
          else
          {
            __asm
            {
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm8
              vsubss  xmm1, xmm7, xmm1
              vmovss  dword ptr [rsp+138h+var_C8+4], xmm1
              vmovss  dword ptr [rsp+138h+var_C8], xmm6
            }
          }
          __asm
          {
            vmovss  dword ptr [rsp+138h+var_C8+8], xmm6
            vmovss  dword ptr [rsp+138h+var_C8+0Ch], xmm7
          }
        }
        else
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
            vmovups xmmword ptr [rsp+138h+var_C8], xmm0
          }
        }
        __asm
        {
          vmovss  [rsp+138h+var_E8], xmm6
          vmovss  [rsp+138h+var_F0], xmm6
          vmovss  [rsp+138h+adjust], xmm6
          vmovss  [rsp+138h+s1], xmm6
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vaddss  xmm1, xmm0, xmm14; x
          vmovaps xmm3, xmm11; w
          vmovaps xmm2, xmm12; y
          vmovss  dword ptr [rsp+138h+setColor], xmm13
        }
        CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, 1, 1, s1b, *(float *)&adjust, v59, v60, &color, cgMedia.whiteMaterial);
        v21 -= 3;
        --v20;
      }
      while ( v20 >= 0 );
      __asm
      {
        vmovaps xmm12, [rsp+138h+var_88]
        vmovaps xmm11, [rsp+138h+var_78]
        vmovaps xmm10, [rsp+138h+var_68]
        vmovaps xmm9, [rsp+138h+var_58]
        vmovaps xmm8, [rsp+138h+var_48]
        vmovaps xmm7, [rsp+138h+var_38]
        vmovaps xmm6, [rsp+138h+var_28]
      }
    }
    __asm
    {
      vmovaps xmm13, [rsp+138h+var_98]
      vmovaps xmm14, [rsp+138h+var_A8]
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
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v15; 
  const ScreenPlacement *v16; 
  const dvar_t *v19; 
  int v26; 
  const char *v27; 
  const ScreenPlacement *v28; 
  const vec4_t *v31; 
  char v32; 
  char v42; 
  char v43; 
  float fmt; 
  float fmta; 
  float color; 
  float colora; 
  int adjust; 
  float v70; 
  float v71; 
  vec4_t *v72; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DVARVEC2_drawServerBandwidthPos;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0F8h+var_88], xmm12
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawServerBandwidthPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vmovss  xmm7, dword ptr [rbx+2Ch]
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v15 = DVARINT_drawEntityCountSize;
  v16 = ActivePlacement;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, dword ptr [rbx+28h]
  }
  v19 = DVARINT_drawEntityCountSize;
  if ( !DVARINT_drawEntityCountSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawEntityCountSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, dword ptr [rbx+28h]
  }
  Live_GetNecessaryBandwidth(cls.maxClients);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a666666
    vcvttss2si ebp, xmm1
  }
  v26 = lagometer.serverBandwidth[lagometer.frameCount & 0x7F];
  v27 = j_va("kbps: %3i", (unsigned int)v26);
  v28 = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm0, cs:__real@41200000
    vsubss  xmm1, xmm6, cs:__real@42480000; x
  }
  v31 = &colorRed;
  if ( v26 <= _EBP )
    v31 = &colorWhite;
  v32 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+color], xmm0
    vaddss  xmm11, xmm7, xmm10
    vaddss  xmm2, xmm11, cs:__real@41900000; y
  }
  CG_DrawStringExt(v28, *(float *)&_XMM1, *(float *)&_XMM2, v27, v31, 0, 1, color, 0);
  __asm
  {
    vmovaps xmm3, xmm8; w
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  UI_DrawHandlePic(v16, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
    vcvtsi2ss xmm0, xmm0, ebp
    vdivss  xmm12, xmm10, xmm0
  }
  if ( !(v42 | v43) )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm9
      vaddss  xmm9, xmm6, xmm8
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm12
        vminss  xmm3, xmm1, xmm10
        vsubss  xmm0, xmm9, xmm2
        vsubss  xmm4, xmm11, xmm3
        vmovaps xmm2, xmm4; y
        vsubss  xmm1, xmm0, xmm6; x
      }
      if ( lagometer.serverBandwidth[(LOBYTE(lagometer.frameCount) - v32 - 1) & 0x7F] >= _EBP )
        v72 = &colorRed;
      else
        v72 = &colorBlue;
      __asm
      {
        vmovss  [rsp+0F8h+var_A8], xmm6
        vmovss  [rsp+0F8h+var_B0], xmm6
        vmovss  [rsp+0F8h+adjust], xmm7
        vmovss  dword ptr [rsp+0F8h+color], xmm7
        vmovss  dword ptr [rsp+0F8h+fmt], xmm3
        vmovaps xmm3, xmm6; w
      }
      CL_DrawStretchPic(v16, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, colora, *(float *)&adjust, v70, v71, v72, cgMedia.whiteMaterial);
      ++v32;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, ebx
        vcomiss xmm2, xmm8
      }
    }
    while ( v42 );
    __asm { vmovaps xmm9, [rsp+0F8h+var_58] }
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_DrawServerKillcamData
==============
*/
void CG_DrawServerKillcamData(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v14; 
  const ScreenPlacement *v15; 
  const dvar_t *v18; 
  const char *v21; 
  const ScreenPlacement *v22; 
  char v25; 
  char v33; 
  char v34; 
  float fmt; 
  float fmta; 
  float color; 
  float colora; 
  int adjust; 
  float v61; 
  float v62; 
  vec4_t *v63; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DVARVEC2_drawKillcamDataPos;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0F8h+var_88], xmm12
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vmovss  xmm7, dword ptr [rbx+2Ch]
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v14 = DVARINT_drawKillcamDataSize;
  v15 = ActivePlacement;
  if ( !DVARINT_drawKillcamDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, dword ptr [rbx+28h]
  }
  v18 = DVARINT_drawKillcamDataSize;
  if ( !DVARINT_drawKillcamDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "drawKillcamDataSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, dword ptr [rbx+28h]
  }
  v21 = j_va("killcam: %3i", (unsigned int)lagometer.killcamTimes[lagometer.frameCount & 0x7F]);
  v22 = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm0, cs:__real@41200000
    vsubss  xmm1, xmm6, cs:__real@42480000; x
  }
  v25 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+color], xmm0
    vaddss  xmm11, xmm7, xmm10
    vaddss  xmm2, xmm11, cs:__real@41900000; y
  }
  CG_DrawStringExt(v22, *(float *)&_XMM1, *(float *)&_XMM2, v21, &colorWhite, 0, 1, color, 0);
  __asm
  {
    vmovaps xmm3, xmm8; w
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  UI_DrawHandlePic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorBlack, cgMedia.whiteMaterial);
  __asm
  {
    vmulss  xmm12, xmm10, cs:__real@3851b717
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
  }
  if ( !(v33 | v34) )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm9
      vaddss  xmm9, xmm6, xmm8
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm12
        vminss  xmm3, xmm1, xmm10
        vsubss  xmm0, xmm9, xmm2
        vsubss  xmm4, xmm11, xmm3
        vmovaps xmm2, xmm4; y
        vsubss  xmm1, xmm0, xmm6; x
      }
      if ( lagometer.killcamTimes[(LOBYTE(lagometer.frameCount) - v25 - 1) & 0x7F] >= 10000 )
        v63 = &colorBlue;
      else
        v63 = &colorRed;
      __asm
      {
        vmovss  [rsp+0F8h+var_A8], xmm6
        vmovss  [rsp+0F8h+var_B0], xmm6
        vmovss  [rsp+0F8h+adjust], xmm7
        vmovss  dword ptr [rsp+0F8h+color], xmm7
        vmovss  dword ptr [rsp+0F8h+fmt], xmm3
        vmovaps xmm3, xmm6; w
      }
      CL_DrawStretchPic(v15, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, colora, *(float *)&adjust, v61, v62, v63, cgMedia.whiteMaterial);
      ++v25;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, edi
        vcomiss xmm2, xmm8
      }
    }
    while ( v33 );
    __asm { vmovaps xmm9, [rsp+0F8h+var_58] }
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_DrawSnapshotAnalysis
==============
*/

void __fastcall CG_DrawSnapshotAnalysis(const LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  CgEntitySystem *v16; 
  __int64 v18; 
  const dvar_t *v20; 
  int v21; 
  __int64 v22; 
  __int64 i; 
  unsigned int v31; 
  char v32; 
  signed int v33; 
  char v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  CgEntitySystem *v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  unsigned int v59; 
  int eType; 
  __int64 v61; 
  int v62; 
  int v63; 
  const dvar_t *v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  __int64 v73; 
  int v74; 
  __int64 v75; 
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
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  const dvar_t *v113; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v121; 
  Material *whiteMaterial; 
  const ScreenPlacement *v128; 
  int PacketAnalysisClientNum; 
  CgStatic *LocalClientStatics; 
  __int64 v134; 
  const char *v135; 
  const ScreenPlacement *v136; 
  int v144; 
  int v147; 
  __int64 v151; 
  char *v152; 
  int j; 
  __int64 v155; 
  unsigned int v161; 
  const vec4_t *v166; 
  Material *material; 
  bool v168; 
  const ScreenPlacement *v169; 
  const dvar_t *v176; 
  int v184; 
  const vec4_t *v185; 
  const char *v186; 
  Material *v187; 
  bool v188; 
  const ScreenPlacement *v189; 
  bool v193; 
  const ScreenPlacement *v194; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  float colord; 
  int adjust; 
  float v222; 
  float v223; 
  ClientSnapshotDetailedData *outDetailedData; 
  __int64 v226; 
  CgGlobalsMP *LocalClientGlobals; 
  __int128 Base[4]; 
  char v229; 
  char dest[32]; 
  char v231; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBX = DVARFLT_cg_packetAnalysisTextSize;
  v16 = (CgEntitySystem *)(int)localClientNum;
  if ( !DVARFLT_cg_packetAnalysisTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vmovss  [rsp+1D8h+var_15C], xmm10
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v16);
  outDetailedData = NULL;
  v18 = (__int64)LocalClientGlobals;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( SV_GetAvailableClientPacketAnalysis((const ClientSnapshotDetailedData **)&outDetailedData) )
  {
    v20 = DVARBOOL_cg_packetAnalysisAutoScale;
    v21 = *(_DWORD *)(v18 + 735672) % 100;
    if ( !DVARBOOL_cg_packetAnalysisAutoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisAutoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      v22 = 0i64;
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
        v22 += 8i64;
      }
      while ( v22 < 16 );
      __asm
      {
        vpmaxud xmm1, xmm1, xmm2
        vpsrldq xmm0, xmm1, 8
        vpmaxud xmm2, xmm1, xmm0
        vpsrldq xmm0, xmm2, 4
        vpmaxud xmm0, xmm2, xmm0
        vmovd   edx, xmm0
      }
      for ( i = 16i64; i < 18; ++i )
      {
        v31 = outDetailedData->bitsSent[i];
        if ( _EDX > v31 )
          v31 = _EDX;
        _EDX = v31;
      }
      v32 = -1;
      v33 = v31 / 0xFF;
      v34 = v31 / 0xFF + 1;
      if ( v33 >= 255 )
        v32 = v34;
    }
    else
    {
      v32 = 7;
    }
    v35 = v21;
    v36 = 0i64;
    *(_BYTE *)(v18 + v35 + 737488) = v32;
    __asm
    {
      vmovss  xmm7, cs:__real@437f0000
      vmovss  xmm8, cs:__real@43800000
    }
    v39 = 255 * *(unsigned __int8 *)(v35 + v18 + 737488);
    do
    {
      v40 = outDetailedData->bitsSent[v36];
      if ( v40 < v39 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm6, xmm11, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm1, xmm0, xmm7
          vmulss  xmm2, xmm1, xmm6
          vcomiss xmm2, xmm8
        }
        if ( v40 >= v39 )
        {
          LODWORD(forceColor) = 255 * v40 / v39;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 395, ASSERT_TYPE_ASSERT, "( ( BAR_MAX_BITS * packetAnalysis->bitsSent[field]/BITS_ENCODING_MAX_COUNT >= 0 && BAR_MAX_BITS * static_cast<float>( packetAnalysis->bitsSent[field] )/BITS_ENCODING_MAX_COUNT < 256 ) )", "( BAR_MAX_BITS * packetAnalysis->bitsSent[field] / BITS_ENCODING_MAX_COUNT ) = %i", forceColor) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm1, xmm0, xmm7
          vmulss  xmm2, xmm1, xmm6
          vcvttss2si ecx, xmm2
        }
      }
      else
      {
        LOBYTE(_ECX) = -1;
      }
      v51 = v36 + 18 * v35;
      ++v36;
      *(_BYTE *)(v51 + v18 + 735688) = _ECX;
    }
    while ( v36 < 18 );
    *(_DWORD *)(v18 + 4 * v35 + 737588) = *(_DWORD *)(v18 + 26092);
    v52 = *(_DWORD *)(v18 + 735672);
    v53 = 120i64 * (v52 % 10);
    v226 = v52 % 10;
    memset_0((void *)(v53 + v18 + 737988), 0, 0x78ui64);
    memset_0((void *)(v53 + v18 + 739188), 0, 0x78ui64);
    memset_0((void *)(v53 + v18 + 740388), 0, 0x78ui64);
    v54 = 0;
    v55 = v16;
    v56 = 0i64;
    v57 = 0i64;
    v58 = 18i64;
    do
    {
      v59 = outDetailedData->bitsSent[v58];
      if ( v59 )
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(shadow) = (_DWORD)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
            __debugbreak();
        }
        if ( (unsigned int)v16 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
          LODWORD(forceColor) = (_DWORD)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[(_QWORD)v55] )
        {
          LODWORD(shadow) = (_DWORD)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v55];
        if ( (unsigned int)v54 >= 0x800 )
        {
          LODWORD(shadow) = 2048;
          LODWORD(forceColor) = v54;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        eType = v16->m_entities[v57].nextState.eType;
        LODWORD(v16) = (_DWORD)v55;
        if ( eType > 29 )
          eType = 29;
        v61 = eType + 30 * v226;
        *(_DWORD *)(v18 + 4 * v61 + 737988) += v59;
        ++*(_DWORD *)(v18 + 4 * v61 + 739188);
        v62 = *(_DWORD *)(v18 + 4 * v61 + 740388) + outDetailedData->fieldsSentPerEntity[v56];
        *(_DWORD *)(v18 + 4 * v61 + 740388) = v62;
        if ( eType == 1 )
          *(_DWORD *)(v18 + 4 * v61 + 740388) = v62 + outDetailedData->fieldsSentPlayerState;
      }
      ++v54;
      ++v56;
      ++v58;
      ++v57;
    }
    while ( v54 < 2048 );
    v63 = ++*(_DWORD *)(v18 + 741588);
    if ( v63 > 10 )
      v63 = 10;
    ++*(_DWORD *)(v18 + 735672);
    *(_DWORD *)(v18 + 741588) = v63;
    *(_DWORD *)(v18 + 735684) = 0;
    v64 = DVARBOOL_cg_packetAnalysisAutoScale;
    if ( !DVARBOOL_cg_packetAnalysisAutoScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisAutoScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v64);
    if ( v64->current.enabled )
    {
      v65 = *(_DWORD *)(v18 + 26092);
      v66 = 0;
      v67 = *(_DWORD *)(v18 + 735672);
      v68 = 0;
      *(_QWORD *)(v18 + 735676) = 0i64;
      v69 = 0;
      v70 = *(_DWORD *)(v18 + 735684);
      v71 = v65;
      do
      {
        v72 = (v67 + v68) % 100;
        v73 = v72;
        v74 = *(_DWORD *)(v18 + 4i64 * v72 + 737588);
        v75 = 9i64 * v72;
        if ( v71 < v74 )
          v74 = v71;
        v71 = v74;
        v76 = *(unsigned __int8 *)(v72 + v18 + 737488) * *(unsigned __int8 *)(v18 + 18i64 * v72 + 735688);
        v77 = v76;
        if ( v69 > v76 )
          v77 = v69;
        *(_DWORD *)(v18 + 735676) = v77;
        v78 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735689);
        v79 = v78 + v76;
        if ( v77 > v78 )
          v78 = v77;
        *(_DWORD *)(v18 + 735676) = v78;
        v80 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735690);
        v81 = v80 + v79;
        if ( v78 > v80 )
          v80 = v78;
        *(_DWORD *)(v18 + 735676) = v80;
        v82 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735691);
        v83 = v82 + v81;
        if ( v80 > v82 )
          v82 = v80;
        *(_DWORD *)(v18 + 735676) = v82;
        v84 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735692);
        v85 = v84 + v83;
        if ( v82 > v84 )
          v84 = v82;
        *(_DWORD *)(v18 + 735676) = v84;
        v86 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735693);
        v87 = v86 + v85;
        if ( v84 > v86 )
          v86 = v84;
        *(_DWORD *)(v18 + 735676) = v86;
        v88 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735694);
        v89 = v88 + v87;
        if ( v86 > v88 )
          v88 = v86;
        *(_DWORD *)(v18 + 735676) = v88;
        v90 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735695);
        v91 = v90 + v89;
        if ( v88 > v90 )
          v90 = v88;
        *(_DWORD *)(v18 + 735676) = v90;
        v92 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * (9 * v73 + 367848));
        v93 = v92 + v91;
        if ( v90 > v92 )
          v92 = v90;
        *(_DWORD *)(v18 + 735676) = v92;
        v94 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735697);
        v95 = v94 + v93;
        if ( v92 > v94 )
          v94 = v92;
        *(_DWORD *)(v18 + 735676) = v94;
        v96 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735698);
        v97 = v96 + v95;
        if ( v94 > v96 )
          v96 = v94;
        *(_DWORD *)(v18 + 735676) = v96;
        v98 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735699);
        v99 = v98 + v97;
        if ( v96 > v98 )
          v98 = v96;
        *(_DWORD *)(v18 + 735676) = v98;
        v100 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735700);
        v101 = v100 + v99;
        if ( v98 > v100 )
          v100 = v98;
        *(_DWORD *)(v18 + 735676) = v100;
        v102 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735701);
        v103 = v102 + v101;
        if ( v100 > v102 )
          v102 = v100;
        *(_DWORD *)(v18 + 735676) = v102;
        v104 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735702);
        v105 = v104 + v103;
        if ( v102 > v104 )
          v104 = v102;
        *(_DWORD *)(v18 + 735676) = v104;
        v106 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735703);
        v107 = v106 + v105;
        if ( v104 > v106 )
          v106 = v104;
        *(_DWORD *)(v18 + 735676) = v106;
        v108 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735704);
        v109 = v108 + v107;
        if ( v106 > v108 )
          v108 = v106;
        *(_DWORD *)(v18 + 735676) = v108;
        v69 = *(unsigned __int8 *)(v73 + v18 + 737488) * *(unsigned __int8 *)(v18 + 2 * v75 + 735705);
        v110 = v69 + v109;
        if ( v108 > v69 )
          v69 = v108;
        v111 = v70 + v110;
        *(_DWORD *)(v18 + 735676) = v69;
        if ( v66 > v110 )
          v110 = v66;
        *(_DWORD *)(v18 + 735684) = v111;
        ++v68;
        *(_DWORD *)(v18 + 735680) = v110;
        v70 = v111;
        v66 = v110;
      }
      while ( v68 < 100 );
      v112 = v65 - v71;
      if ( v112 < 1 )
        v112 = 1;
      *(_DWORD *)(v18 + 735684) = 1000 * v111 / v112 / 8;
    }
    else
    {
      *(_DWORD *)(v18 + 735676) = 2000;
      *(_DWORD *)(v18 + 735680) = 36000;
    }
    SV_ClearAvailableClientPacketAnalysis();
  }
  v113 = DVARINT_cg_packetAnalysisTextY;
  if ( !DVARINT_cg_packetAnalysisTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v113);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rbx+28h]
  }
  LODWORD(fmt) = *(_DWORD *)(v18 + 735680) / 8;
  Com_sprintf(dest, 0x20ui64, "MAX: %i (SUM %i)", (unsigned int)(*(_DWORD *)(v18 + 735676) / 8), fmt);
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v16);
  __asm
  {
    vmovss  xmm7, cs:__real@43910000
    vmovss  dword ptr [rsp+1D8h+color], xmm10
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm7; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, color, 0);
  __asm { vaddss  xmm6, xmm6, xmm10 }
  Com_sprintf(dest, 0x20ui64, "BPS: %i", *(unsigned int *)(v18 + 735684));
  v121 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v16);
  __asm
  {
    vmovss  dword ptr [rsp+1D8h+color], xmm10
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm7; x
  }
  CG_DrawStringExt(v121, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, colora, 0);
  __asm { vmovss  xmm8, cs:__real@42c80000 }
  whiteMaterial = cgMedia.whiteMaterial;
  __asm
  {
    vaddss  xmm0, xmm6, xmm10
    vaddss  xmm9, xmm0, xmm8
  }
  v128 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v16);
  __asm
  {
    vsubss  xmm2, xmm9, xmm8; y
    vmovaps xmm3, xmm8; w
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+1D8h+fmt], xmm8
  }
  UI_DrawHandlePic(v128, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 1, 1, &colorBlack, whiteMaterial);
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum < 0 )
  {
    v135 = "All Clients";
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v16);
    v134 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, PacketAnalysisClientNum);
    if ( !v134 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 498, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v135 = (const char *)(v134 + 4);
  }
  v136 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v16);
  __asm
  {
    vmovss  dword ptr [rsp+1D8h+color], xmm10
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm7; x
  }
  CG_DrawStringExt(v136, *(float *)&_XMM1, *(float *)&_XMM2, v135, &colorWhite, 0, 1, colorb, 0);
  __asm
  {
    vmovdqu xmm2, cs:__xmm@0000000c0000000c0000000c0000000c
    vmovdqu xmm12, cs:__xmm@00000003000000020000000100000000
    vmovdqu xmm14, cs:__xmm@00000004000000040000000400000004
    vmovdqu xmm15, cs:__xmm@00000008000000080000000800000008
    vmovss  xmm10, cs:__real@43c28000
  }
  v144 = 0;
  __asm
  {
    vpxor   xmm13, xmm13, xmm13
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    v147 = v144 + *(_DWORD *)(v18 + 735672);
    __asm
    {
      vpaddd  xmm0, xmm12, xmm13
      vpaddd  xmm1, xmm12, xmm14
      vmovdqu [rsp+1D8h+Base], xmm0
      vmovdqu [rsp+1D8h+var_138], xmm1
      vpaddd  xmm0, xmm12, xmm15
    }
    v151 = v147 % 100;
    v152 = &v229;
    __asm
    {
      vpaddd  xmm1, xmm12, xmm2
      vmovdqu [rsp+1D8h+var_128], xmm0
      vmovdqu [rsp+1D8h+var_118], xmm1
    }
    s_clientAnalysisData = (unsigned __int8 *)(v18 + 18 * v151 + 735688);
    for ( j = 16; j < 18; ++j )
    {
      *(_DWORD *)v152 = j;
      v152 += 4;
    }
    qsort(Base, 0x12ui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_ComparePacketAnalysisSamples);
    v155 = 0i64;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0B39BCh]
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm7, xmm1, xmm0
    }
    do
    {
      v161 = *((_DWORD *)Base + v155);
      if ( v161 >= 0x12 )
      {
        LODWORD(shadowa) = 18;
        LODWORD(forceColora) = *((_DWORD *)Base + v155);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(unsigned)( field ) < (unsigned)( ANALYZE_SNAPSHOT_DATATYPE_COUNT )", "field doesn't index ANALYZE_SNAPSHOT_DATATYPE_COUNT\n\t%i not in [0, %i)", forceColora, shadowa) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm8
        vcvttss2si ebp, xmm2
      }
      if ( _EBP > 0 )
      {
        switch ( v161 )
        {
          case 0u:
            v166 = &colorRed;
            break;
          case 1u:
            v166 = &colorGreen;
            break;
          case 2u:
            v166 = &colorBlue;
            break;
          case 3u:
            v166 = &colorMagenta;
            break;
          case 4u:
            v166 = &colorLtBlue;
            break;
          case 5u:
            v166 = &colorYellow;
            break;
          case 6u:
            v166 = &colorOrange;
            break;
          case 7u:
            v166 = &colorMdGrey;
            break;
          case 8u:
            v166 = &colorLtYellow;
            break;
          case 9u:
            v166 = &colorMdYellow;
            break;
          case 0xAu:
            v166 = &colorLtCyan;
            break;
          case 0xBu:
          case 0xDu:
          case 0xEu:
            v166 = &colorLtOrange;
            break;
          case 0xCu:
            v166 = &colorLtGrey;
            break;
          case 0xFu:
            v166 = &colorBlueHeat;
            break;
          case 0x10u:
            v166 = &colorGreenFaded;
            break;
          case 0x11u:
            v166 = &colorDkGrey;
            break;
          default:
            v166 = &colorWhite;
            break;
        }
        material = cgMedia.whiteMaterial;
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
          {
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v168 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v168 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v168 )
              __debugbreak();
            goto LABEL_140;
          }
          v169 = &scrPlaceViewDisplay[(int)v16];
        }
        else
        {
LABEL_140:
          v169 = &scrPlaceFull;
        }
        __asm
        {
          vmovss  [rsp+1D8h+var_188], xmm6
          vmovss  [rsp+1D8h+var_190], xmm6
          vmovss  [rsp+1D8h+adjust], xmm6
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, ebp
          vmovss  dword ptr [rsp+1D8h+color], xmm6
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15d
          vsubss  xmm2, xmm9, xmm3; y
          vmovss  dword ptr [rsp+1D8h+fmt], xmm3
          vmovaps xmm3, xmm11; w
          vsubss  xmm1, xmm10, xmm0; x
        }
        CL_DrawStretchPic(v169, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, 1, 1, colorc, *(float *)&adjust, v222, v223, v166, material);
      }
      ++v155;
    }
    while ( v155 < 18 );
    __asm { vmovdqu xmm2, cs:__xmm@0000000c0000000c0000000c0000000c }
    v18 = (__int64)LocalClientGlobals;
    ++v144;
  }
  while ( v144 < 100 );
  v176 = DVARINT_cg_packetAnalysisTextY;
  if ( !DVARINT_cg_packetAnalysisTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v176);
  __asm
  {
    vmovss  xmm11, [rsp+1D8h+var_15C]
    vmulss  xmm8, xmm11, cs:__real@3f000000
    vmovss  xmm7, cs:__real@40400000
    vmovss  xmm10, cs:__real@43c80000
    vmovss  xmm9, cs:__real@43ca8000
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rbx+28h]
  }
  v184 = 0;
  while ( 2 )
  {
    switch ( v184 )
    {
      case 0:
        v185 = &colorRed;
        v186 = "Entity update";
        break;
      case 1:
        v185 = &colorGreen;
        v186 = "New entity";
        break;
      case 2:
        v185 = &colorBlue;
        v186 = "Removed entity";
        break;
      case 3:
        v185 = &colorMagenta;
        v186 = "Temp entity";
        break;
      case 4:
        v185 = &colorLtBlue;
        v186 = "Client update";
        break;
      case 5:
        v185 = &colorYellow;
        v186 = "New client";
        break;
      case 6:
        v185 = &colorOrange;
        v186 = "Removed client";
        break;
      case 7:
        v185 = &colorMdGrey;
        v186 = "Agent update";
        break;
      case 8:
        v185 = &colorLtYellow;
        v186 = "New agent";
        break;
      case 9:
        v185 = &colorMdYellow;
        v186 = "Removed agent";
        break;
      case 10:
        v185 = &colorLtCyan;
        v186 = "Playerstate update";
        break;
      case 11:
        v185 = &colorLtOrange;
        v186 = "Full playerstate";
        break;
      case 12:
        v185 = &colorLtGrey;
        v186 = "Server commands";
        break;
      case 13:
        v185 = &colorLtOrange;
        v186 = "Glass";
        break;
      case 14:
        v185 = &colorLtOrange;
        v186 = "Scriptables";
        break;
      case 15:
        v185 = &colorBlueHeat;
        v186 = "Weapon Map";
        break;
      case 16:
        v185 = &colorGreenFaded;
        v186 = "Umbra gate states";
        break;
      case 17:
        v185 = &colorDkGrey;
        v186 = "Generic";
        break;
      default:
        v185 = &colorWhite;
        v186 = "<Unknown>";
        break;
    }
    v187 = cgMedia.whiteMaterial;
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
      {
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v188 )
          __debugbreak();
        goto LABEL_176;
      }
      v189 = &scrPlaceViewDisplay[(int)v16];
    }
    else
    {
LABEL_176:
      v189 = &scrPlaceFull;
    }
    __asm
    {
      vmovaps xmm3, xmm7; w
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm10; x
      vmovss  dword ptr [rsp+1D8h+fmt], xmm7
    }
    UI_DrawHandlePic(v189, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 1, 1, v185, v187);
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
      {
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v193 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v193 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v193 )
          __debugbreak();
        goto LABEL_183;
      }
      v194 = &scrPlaceViewDisplay[(int)v16];
    }
    else
    {
LABEL_183:
      v194 = &scrPlaceFull;
    }
    __asm
    {
      vmovss  dword ptr [rsp+1D8h+color], xmm11
      vsubss  xmm2, xmm6, xmm8; y
      vmovaps xmm1, xmm9; x
    }
    CG_DrawStringExt(v194, *(float *)&_XMM1, *(float *)&_XMM2, v186, v185, 0, 1, colord, 0);
    ++v184;
    __asm { vaddss  xmm6, xmm6, xmm11 }
    if ( v184 < 18 )
      continue;
    break;
  }
  _R11 = &v231;
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
CG_DrawSnapshotEntityAnalysis
==============
*/

void __fastcall CG_DrawSnapshotEntityAnalysis(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  CgGlobalsMP *LocalClientGlobals; 
  Material *whiteMaterial; 
  const ScreenPlacement *ActivePlacement; 
  int PacketAnalysisClientNum; 
  CgStatic *LocalClientStatics; 
  __int64 v29; 
  const char *v30; 
  const ScreenPlacement *v31; 
  const dvar_t *v34; 
  int v38; 
  const char *EntityTypeName; 
  CgGlobalsMP *v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int *v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
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
  __int64 v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  Material *v83; 
  bool v84; 
  LocalClientNum_t v85; 
  const ScreenPlacement *v86; 
  const vec4_t *v87; 
  const char *v114; 
  bool v115; 
  const ScreenPlacement *v116; 
  int v125; 
  __int64 v126; 
  char *v132; 
  int i; 
  bool v134; 
  __int64 v135; 
  Material *v139; 
  bool v141; 
  const ScreenPlacement *v142; 
  float fmt; 
  float fmta; 
  char *fmtb; 
  float fmtc; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  float color; 
  vec4_t *colora; 
  float colorb; 
  Material *material; 
  vec4_t *setColor; 
  const char *v173; 
  int charHeight; 
  int charHeighta; 
  int charHeightb; 
  int v178; 
  int v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int *v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  __int64 v191; 
  CgGlobalsMP *v192; 
  __int128 Base[4]; 
  char v194; 
  char v195; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBX = DVARFLT_cg_packetAnalysisEntTextSize;
  if ( !DVARFLT_cg_packetAnalysisEntTextSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisEntTextSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  whiteMaterial = cgMedia.whiteMaterial;
  v192 = LocalClientGlobals;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm12, cs:__real@41200000
    vmovss  xmm7, cs:__real@42c80000
    vmovss  xmm3, cs:__real@42a00000; w
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm12; x
    vmovss  dword ptr [rsp+208h+fmt], xmm7
    vxorps  xmm13, xmm13, xmm13
  }
  UI_DrawHandlePic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &colorBlack, whiteMaterial);
  setColor = &colorWhite;
  PacketAnalysisClientNum = SV_GetPacketAnalysisClientNum();
  if ( PacketAnalysisClientNum < 0 )
  {
    v30 = "All Clients";
  }
  else
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v29 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, PacketAnalysisClientNum);
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 766, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v30 = (const char *)(v29 + 4);
  }
  v31 = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  dword ptr [rsp+208h+color], xmm9
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm12; x
  }
  CG_DrawStringExt(v31, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorWhite, 0, 1, color, 0);
  v34 = DVARINT_cg_packetAnalysisEntTextY;
  if ( !DVARINT_cg_packetAnalysisEntTextY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_packetAnalysisEntTextY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vmovss  xmm10, cs:__real@40400000
    vmovss  xmm11, cs:__real@3dcccccd
  }
  v38 = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rbx+28h]
  }
  v184 = 0;
  do
  {
    switch ( v38 )
    {
      case 0:
        v173 = "General";
        setColor = &colorOrange;
        break;
      case 1:
        v173 = "Players";
        setColor = &colorRed;
        break;
      case 2:
        v173 = "Corpses";
        setColor = &colorGreen;
        break;
      case 3:
        v173 = "Items";
        setColor = &colorBlue;
        break;
      case 4:
        v173 = "Missiles";
        setColor = &colorLtGreen;
        break;
      case 5:
        v173 = "Invisible Ents";
        setColor = &colorLtBlue;
        break;
      case 6:
        v173 = "Scriptmover";
        setColor = &colorMagenta;
        break;
      case 7:
        v173 = "Sound";
        setColor = &colorLtOrange;
        break;
      case 8:
        v173 = "FX";
        setColor = &colorLtGrey;
        break;
      case 9:
        v173 = "Loop FX";
        setColor = &colorLtCyan;
        break;
      case 10:
        v173 = "Primary Light";
        setColor = &colorLtBlue;
        break;
      case 11:
        v173 = "Turret";
        setColor = &colorMdYellow;
        break;
      case 12:
        v173 = "Helicopter";
        setColor = &colorLtBlue;
        break;
      case 13:
        v173 = "Plane";
        setColor = &colorLtOrange;
        break;
      case 14:
        v173 = "Vehicle";
        setColor = &colorLtOrange;
        break;
      case 15:
        v173 = "Vehicle Corpse";
        setColor = &colorLtBlue;
        break;
      case 16:
        v173 = "Vehicle Spawner";
        setColor = &colorLtBlue;
        break;
      case 17:
        v173 = "Agent";
        setColor = &colorDkCyan;
        break;
      case 18:
        v173 = "Agent Corpse";
        setColor = &colorLtCyan;
        break;
      case 19:
      case 20:
      case 21:
        v173 = "SP Actor";
        setColor = &colorWhite;
        break;
      case 22:
        v173 = "Physics Child";
        setColor = &colorGreenFaded;
        break;
      case 23:
        v173 = "Beam";
        setColor = &colorDkCyan;
        break;
      case 24:
        v173 = "Ragdoll Constraint";
        setColor = &colorWhite;
        break;
      case 25:
        v173 = "Ragdoll Constraint";
        setColor = &colorFacebookBlue;
        break;
      case 26:
        v173 = "Physics Volume";
        setColor = &colorRedHeat;
        break;
      case 27:
        v173 = "Cover Wall";
        setColor = &colorOrangeHeat;
        break;
      case 28:
        v173 = "Info Volume Grapple";
        setColor = &colorOrange;
        break;
      case 29:
        v173 = "Events";
        setColor = &colorYellow;
        break;
      default:
        EntityTypeName = BG_GetEntityTypeName((const entityType_s)v38);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 895, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missing handler for snapshot entity type '%s'", EntityTypeName) )
          __debugbreak();
        v173 = (char *)&queryFormat.fmt + 3;
        break;
    }
    v42 = v192;
    v43 = 0;
    v44 = v38;
    v45 = 0;
    v46 = 0;
    v182 = 0;
    v47 = 0;
    v191 = v38;
    v48 = 0;
    v49 = 0;
    v50 = &v192->numEntsSent[1][v38];
    v51 = 0;
    v185 = v50;
    v183 = 0;
    while ( 1 )
    {
      v52 = *(v50 - 330);
      v53 = v42->packetAnalysisFrameCount - v51;
      v187 = v47;
      v54 = v52;
      v178 = v52 + v45;
      charHeight = v53;
      v55 = *(v50 - 30);
      v180 = v55 + v43;
      v56 = v50[270];
      v186 = v56 + v46;
      v57 = v50[300];
      if ( v52 <= v47 )
        v54 = v47;
      s_entitySamples[(v53 - 1) % 10][v44] = v52;
      v58 = *(v50 - 300);
      v188 = v54;
      v59 = v55;
      v60 = v58;
      if ( v55 <= v48 )
        v59 = v48;
      v61 = *(v50 - 270);
      if ( v56 <= v49 )
        v56 = v49;
      if ( v58 <= v54 )
        v60 = v54;
      s_entitySamples[(v53 - 2) % 10][v44] = v58;
      v62 = *v50;
      v189 = v60;
      if ( *v50 <= v59 )
        v62 = v59;
      v63 = v57;
      if ( v57 <= v56 )
        v63 = v56;
      s_entitySamples[(v53 - 3) % 10][v44] = v61;
      v64 = v50[30];
      v65 = v50[330];
      v66 = v53 - 4;
      v67 = v61;
      if ( v61 <= v60 )
        v67 = v60;
      v68 = v64;
      if ( v64 <= v62 )
        v68 = v62;
      v69 = v65;
      if ( v65 <= v63 )
        v69 = v63;
      v70 = *(v185 - 240);
      v71 = v70;
      v72 = v185[60];
      v73 = v72;
      v74 = v185[360];
      v75 = v191 + 30i64 * (v66 % 10);
      if ( v70 <= v67 )
        v71 = v67;
      s_entitySamples[0][v75] = v70;
      if ( v72 <= v68 )
        v73 = v68;
      v76 = v74;
      if ( v74 <= v69 )
        v76 = v69;
      v181 = *(v185 - 210);
      s_entitySamples[(charHeight - 5) % 10][v191] = v181;
      v77 = *(v185 - 300);
      v78 = *v185;
      v179 = v77 + v61 + v70 + v181 + v178;
      v190 = v185[90];
      v79 = *v185 + v64 + v72 + v190 + v180;
      charHeighta = v185[390];
      v46 = v57 + v65 + v74 + charHeighta + v186;
      v80 = *(v185 - 30);
      if ( *(v185 - 330) <= v187 )
        v80 = v182;
      if ( v77 <= v188 )
        v78 = v80;
      v134 = v61 <= v189;
      v48 = v185[90];
      v81 = v185[390];
      if ( v134 )
        v64 = v78;
      v42 = v192;
      v134 = v70 <= v67;
      v44 = v191;
      v82 = v185[90];
      if ( v134 )
        v72 = v64;
      v47 = v181;
      if ( v181 <= v71 )
        v82 = v72;
      if ( v181 <= v71 )
        v47 = v71;
      v182 = v82;
      if ( v190 <= v73 )
        v48 = v73;
      if ( charHeighta <= v76 )
        v81 = v76;
      v50 = v185 + 150;
      charHeightb = v81;
      v51 = v183 + 5;
      v185 += 150;
      v183 = v51;
      if ( v51 >= 10 )
        break;
      v45 = v179;
      v43 = v79;
      v49 = charHeightb;
    }
    if ( v82 )
    {
      v83 = cgMedia.whiteMaterial;
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v85 = localClientNum;
          v86 = &scrPlaceViewDisplay[localClientNum];
LABEL_97:
          material = v83;
          v87 = setColor;
          __asm
          {
            vsubss  xmm2, xmm6, xmm8; y
            vmovaps xmm3, xmm10; w
            vmovaps xmm1, xmm7; x
            vmovss  dword ptr [rsp+208h+fmt], xmm10
          }
          UI_DrawHandlePic(v86, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 3, 1, setColor, material);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, r15d
            vdivss  xmm1, xmm1, xmm0
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm0, xmm0, edi
            vcvtsi2ss xmm2, xmm2, r12d
            vcvtss2sd xmm5, xmm1, xmm1
            vdivss  xmm1, xmm2, xmm0
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm3, xmm3, xmm3
            vcvtsi2ss xmm3, xmm3, [rsp+208h+var_1A0]
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, [rsp+208h+var_19C]
            vcvtss2sd xmm4, xmm1, xmm1
          }
          LODWORD(colora) = charHeightb;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vdivss  xmm1, xmm3, xmm0
            vmovsd  qword ptr [rsp+208h+vertAlign], xmm5
            vmulss  xmm0, xmm2, xmm11
            vcvtss2sd xmm2, xmm0, xmm0
            vcvtss2sd xmm3, xmm1, xmm1
            vmovq   r8, xmm2
          }
          LODWORD(horzAligna) = v48;
          __asm
          {
            vmovq   r9, xmm3
            vmovsd  [rsp+208h+fmt], xmm4
          }
          v114 = j_va("%s: %.1fx%.1fb (%.1f fields), max %ix%.1fb (%i f)", v173, _R8, _R9, fmtb, horzAligna, vertAlign, colora);
          if ( activeScreenPlacementMode )
          {
            if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
            {
              v116 = &scrPlaceViewDisplay[v85];
              goto LABEL_104;
            }
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v115 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v115 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v115 )
              __debugbreak();
          }
          v116 = &scrPlaceFull;
LABEL_104:
          __asm
          {
            vmovss  dword ptr [rsp+208h+color], xmm9
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm7; x
          }
          CG_DrawStringExt(v116, *(float *)&_XMM1, *(float *)&_XMM2, v114, setColor, 0, 1, colorb, 0);
          __asm { vaddss  xmm6, xmm6, xmm9 }
          goto LABEL_110;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v84 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v84 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v84 )
          __debugbreak();
      }
      v85 = localClientNum;
      v86 = &scrPlaceFull;
      goto LABEL_97;
    }
    v87 = setColor;
LABEL_110:
    v38 = v184 + 1;
    v184 = v38;
  }
  while ( v38 <= 29 );
  __asm
  {
    vmovdqu xmm11, cs:__xmm@00000003000000020000000100000000
    vmovdqu xmm15, cs:__xmm@00000004000000040000000400000004
    vmovdqu xmm2, cs:__xmm@00000008000000080000000800000008
    vmovdqu xmm3, cs:__xmm@0000000c0000000c0000000c0000000c
    vmovss  xmm9, cs:__real@3a23d70a
    vmovss  xmm10, cs:__real@3f800000
  }
  v125 = 0;
  v126 = 0i64;
  __asm { vpxor   xmm14, xmm14, xmm14 }
  while ( 2 )
  {
    __asm
    {
      vpaddd  xmm0, xmm11, xmm14
      vpaddd  xmm1, xmm11, xmm15
      vmovdqu [rsp+208h+Base], xmm0
      vmovdqu [rsp+208h+var_148], xmm1
      vpaddd  xmm0, xmm11, xmm2
      vpaddd  xmm1, xmm11, xmm3
      vmovdqu [rsp+208h+var_138], xmm0
      vmovdqu [rsp+208h+var_128], xmm1
    }
    s_sampleNum = v125;
    v132 = &v194;
    for ( i = 16; i <= 29; ++i )
    {
      *(_DWORD *)v132 = i;
      v132 += 4;
    }
    qsort(Base, 0x1Eui64, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_CompareEntityAnalysisSamples);
    v134 = 1;
    v135 = 0i64;
    while ( 2 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rva s_entitySamples[r8+rax*4]
        vmulss  xmm1, xmm0, xmm9
        vminss  xmm6, xmm1, xmm10
        vcomiss xmm6, xmm13
      }
      if ( !v134 )
      {
        switch ( *((_DWORD *)Base + v135) )
        {
          case 0:
          case 0x1C:
            v87 = &colorOrange;
            break;
          case 1:
            v87 = &colorRed;
            break;
          case 2:
            v87 = &colorGreen;
            break;
          case 3:
            v87 = &colorBlue;
            break;
          case 4:
            v87 = &colorLtGreen;
            break;
          case 5:
          case 0xC:
            v87 = &colorLtBlue;
            break;
          case 6:
            v87 = &colorMagenta;
            break;
          case 7:
          case 0xA:
          case 0xD:
          case 0xE:
            v87 = &colorLtOrange;
            break;
          case 8:
            v87 = &colorLtGrey;
            break;
          case 9:
          case 0x12:
            v87 = &colorLtCyan;
            break;
          case 0xB:
            v87 = &colorMdYellow;
            break;
          case 0x11:
          case 0x17:
            v87 = &colorDkCyan;
            break;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x18:
            v87 = &colorWhite;
            break;
          case 0x16:
            v87 = &colorGreenFaded;
            break;
          case 0x19:
            v87 = &colorFacebookBlue;
            break;
          case 0x1A:
            v87 = &colorRedHeat;
            break;
          case 0x1D:
            v87 = &colorYellow;
            break;
          default:
            LODWORD(horzAlign) = *((_DWORD *)Base + v135);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_net_mp.cpp", 1036, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Missing handler for snapshot entity type %i", horzAlign) )
              __debugbreak();
            break;
        }
        v139 = cgMedia.whiteMaterial;
        __asm { vmulss  xmm6, xmm6, xmm7 }
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
          {
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v141 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v141 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v141 )
              __debugbreak();
            goto LABEL_142;
          }
          v142 = &scrPlaceViewDisplay[localClientNum];
        }
        else
        {
LABEL_142:
          v142 = &scrPlaceFull;
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebp
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm1, xmm1, xmm12; x
          vsubss  xmm2, xmm7, xmm6; y
          vmovaps xmm3, xmm8; w
          vmovss  dword ptr [rsp+208h+fmt], xmm6
        }
        UI_DrawHandlePic(v142, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, 1, 1, v87, v139);
      }
      v134 = (unsigned __int64)++v135 <= 0x1D;
      if ( v135 <= 29 )
        continue;
      break;
    }
    __asm
    {
      vmovdqu xmm2, cs:__xmm@00000008000000080000000800000008
      vmovdqu xmm3, cs:__xmm@0000000c0000000c0000000c0000000c
    }
    ++v125;
    v126 += 30i64;
    if ( v125 < 10 )
      continue;
    break;
  }
  _R11 = &v195;
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

