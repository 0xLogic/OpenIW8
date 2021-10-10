/*
==============
CgDrawDebugMP::PrintUpperRightDebugInfo
==============
*/

void __fastcall CgDrawDebugMP::PrintUpperRightDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?PrintUpperRightDebugInfo@CgDrawDebugMP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CG_DrawDebugMP_UpdateClientInterpolation
==============
*/

void __fastcall CG_DrawDebugMP_UpdateClientInterpolation(LocalClientNum_t localClientNum, int clientIndex, const vec3_t *prevSnapOrigin, const vec3_t *nextSnapOrigin, const vec3_t *poseOrigin, trajectory_t_secure *prevTrajectory, trajectory_t_secure *nextTrajectory, float frameInterpolation)
{
  ?CG_DrawDebugMP_UpdateClientInterpolation@@YAXW4LocalClientNum_t@@HAEBTvec3_t@@11Utrajectory_t_secure@@2M@Z(localClientNum, clientIndex, prevSnapOrigin, nextSnapOrigin, poseOrigin, prevTrajectory, nextTrajectory, frameInterpolation);
}

/*
==============
CG_DrawDebugMP_DrawHostDebugInfo
==============
*/

double __fastcall CG_DrawDebugMP_DrawHostDebugInfo(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_DrawDebugMP_DrawHostDebugInfo@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_DrawDebugMP_AddProcessedCommand
==============
*/

void __fastcall CG_DrawDebugMP_AddProcessedCommand(int clientNum)
{
  ?CG_DrawDebugMP_AddProcessedCommand@@YAXH@Z(clientNum);
}

/*
==============
CgDrawDebugMP::PrintMpFrontendDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintMpFrontendDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintMpFrontendDebugInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::DrawTransientOverlays
==============
*/

void __fastcall CgDrawDebugMP::DrawTransientOverlays(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  ?DrawTransientOverlays@CgDrawDebugMP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugMP::DrawAnimationOverlays
==============
*/

void __fastcall CgDrawDebugMP::DrawAnimationOverlays(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  ?DrawAnimationOverlays@CgDrawDebugMP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugMP::DrawEntitiesLoD
==============
*/

void __fastcall CgDrawDebugMP::DrawEntitiesLoD(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  ?DrawEntitiesLoD@CgDrawDebugMP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_DrawDebugMP_DrawNoGameModeOverlays
==============
*/

void __fastcall CG_DrawDebugMP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawNoGameModeOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::PrintGameBattlesDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintGameBattlesDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintGameBattlesDebugInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_SetServerTimeDilation
==============
*/

void __fastcall CG_DrawDebugMP_SetServerTimeDilation(LocalClientNum_t localClientNum, int timeDilation, int deltaCorrectionMagnitude)
{
  ?CG_DrawDebugMP_SetServerTimeDilation@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, timeDilation, deltaCorrectionMagnitude);
}

/*
==============
CgDrawDebugMP::PrintServerDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintServerDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintServerDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::PrintPartyMemberInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintPartyMemberInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintPartyMemberInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_DrawFrontendOverlays
==============
*/

void __fastcall CG_DrawDebugMP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawFrontendOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugMP_ClearCommandsProcessed
==============
*/

void __fastcall CG_DrawDebugMP_ClearCommandsProcessed(int clientNum)
{
  ?CG_DrawDebugMP_ClearCommandsProcessed@@YAXH@Z(clientNum);
}

/*
==============
CgDrawDebugMP::PrintEntityDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintEntityDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintEntityDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::DrawGameMsgWindows
==============
*/

void __fastcall CgDrawDebugMP::DrawGameMsgWindows(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?DrawGameMsgWindows@CgDrawDebugMP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CG_DrawDebugMP_UpdateSnapshotFullPercent
==============
*/

void __fastcall CG_DrawDebugMP_UpdateSnapshotFullPercent(const LocalClientNum_t localClientNum, unsigned __int8 snapshotFullPercent)
{
  ?CG_DrawDebugMP_UpdateSnapshotFullPercent@@YAXW4LocalClientNum_t@@E@Z(localClientNum, snapshotFullPercent);
}

/*
==============
CG_DrawDebugMP_UpdateHudOutlineUsage
==============
*/

void __fastcall CG_DrawDebugMP_UpdateHudOutlineUsage(const LocalClientNum_t localClientNum, unsigned __int8 hudOutlineUsage)
{
  ?CG_DrawDebugMP_UpdateHudOutlineUsage@@YAXW4LocalClientNum_t@@E@Z(localClientNum, hudOutlineUsage);
}

/*
==============
CgDrawDebugMP::CgDrawDebugMP
==============
*/

void __fastcall CgDrawDebugMP::CgDrawDebugMP(CgDrawDebugMP *this)
{
  ??0CgDrawDebugMP@@QEAA@XZ(this);
}

/*
==============
CgDrawDebugMP::PrintPreloadDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintPreloadDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintPreloadDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_DrawStreamSyncOverlay
==============
*/

void __fastcall CG_DrawDebugMP_DrawStreamSyncOverlay(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawStreamSyncOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebug_DrawATClientPos
==============
*/

void __fastcall CG_DrawDebug_DrawATClientPos(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawATClientPos@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::DrawClientNetPerf
==============
*/

double __fastcall CgDrawDebugMP::DrawClientNetPerf(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?DrawClientNetPerf@CgDrawDebugMP@@MEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::PrintSnapshotInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintSnapshotInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintSnapshotInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_SetExtrapolation
==============
*/

void __fastcall CG_DrawDebugMP_SetExtrapolation(LocalClientNum_t localClientNum, int extrapolationTime)
{
  ?CG_DrawDebugMP_SetExtrapolation@@YAXW4LocalClientNum_t@@H@Z(localClientNum, extrapolationTime);
}

/*
==============
CG_DrawDebugMP_DrawBoxAroundPlayer
==============
*/

void __fastcall CG_DrawDebugMP_DrawBoxAroundPlayer(const LocalClientNum_t localClientNum, const centity_t *const cent, const vec4_t *color, const int depthTest, const int duration)
{
  ?CG_DrawDebugMP_DrawBoxAroundPlayer@@YAXW4LocalClientNum_t@@QEBUcentity_t@@AEBTvec4_t@@HH@Z(localClientNum, cent, color, depthTest, duration);
}

/*
==============
CG_DrawDebugMP_DrawDebugOverlays
==============
*/

void __fastcall CG_DrawDebugMP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::PrintTeamDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintTeamDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintTeamDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::PrintAntilagInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintAntilagInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintAntilagInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::PrintSessionDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintSessionDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintSessionDebugInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_DrawPaidUserOverlay
==============
*/

void __fastcall CG_DrawDebugMP_DrawPaidUserOverlay(const CgDrawDebug *drawDebug)
{
  ?CG_DrawDebugMP_DrawPaidUserOverlay@@YAXPEBVCgDrawDebug@@@Z(drawDebug);
}

/*
==============
CG_DrawDebugMP_UpdateSnapshotBufferUsage
==============
*/

void __fastcall CG_DrawDebugMP_UpdateSnapshotBufferUsage(const LocalClientNum_t localClientNum, int type, unsigned __int8 usagePercent)
{
  ?CG_DrawDebugMP_UpdateSnapshotBufferUsage@@YAXW4LocalClientNum_t@@HE@Z(localClientNum, type, usagePercent);
}

/*
==============
CG_DrawDebug_PlayerAnimScriptInfo_Server
==============
*/

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo_Server(LocalClientNum_t localClientNum, float requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  ?CG_DrawDebug_PlayerAnimScriptInfo_Server@@YAXW4LocalClientNum_t@@MHW4AnimScriptDebugMode@@@Z(localClientNum, requestedYPos, handle, eventsMode);
}

/*
==============
CgDrawDebugMP::PrintStreamLoadingInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintStreamLoadingInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintStreamLoadingInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_SetAdjustTimeOffsetInfo
==============
*/

void __fastcall CG_DrawDebugMP_SetAdjustTimeOffsetInfo(LocalClientNum_t localClientNum, int networkOffsetTime, int currOffsetTime)
{
  ?CG_DrawDebugMP_SetAdjustTimeOffsetInfo@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, networkOffsetTime, currOffsetTime);
}

/*
==============
CG_SeverCmdMP_ATClientDebugState
==============
*/

void __fastcall CG_SeverCmdMP_ATClientDebugState(const LocalClientNum_t localClientNum, const int fromClientNum, const char *state)
{
  ?CG_SeverCmdMP_ATClientDebugState@@YAXW4LocalClientNum_t@@HPEBD@Z(localClientNum, fromClientNum, state);
}

/*
==============
CgDrawDebugMP::PrintSteamLobbyInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintSteamLobbyInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintSteamLobbyInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CgDrawDebugMP::PrintMPDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintMPDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintMPDebugInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_DrawFullScreenDebugOverlays
==============
*/

void __fastcall CG_DrawDebugMP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawFullScreenDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::PrintPartyDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintPartyDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintPartyDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_DrawPSFlags
==============
*/

void __fastcall CG_DrawDebugMP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugMP_DrawPSFlags@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::PrintTournamentDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintTournamentDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintTournamentDebugInfo@CgDrawDebugMP@@QEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugMP_GetServerTimeDilation
==============
*/

void __fastcall CG_DrawDebugMP_GetServerTimeDilation(LocalClientNum_t localClientNum, int *serverTimeDilation, int *deltaCorrectionMagnitude)
{
  ?CG_DrawDebugMP_GetServerTimeDilation@@YAXW4LocalClientNum_t@@AEAH1@Z(localClientNum, serverTimeDilation, deltaCorrectionMagnitude);
}

/*
==============
CgDrawDebugMP::PrintTransientFastfileDebugInfo
==============
*/

double __fastcall CgDrawDebugMP::PrintTransientFastfileDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?PrintTransientFastfileDebugInfo@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebug_DrawATClientStates
==============
*/

void __fastcall CG_DrawDebug_DrawATClientStates(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebug_DrawATClientStates@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugMP::PrintStreamingPos
==============
*/

double __fastcall CgDrawDebugMP::PrintStreamingPos(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintStreamingPos@CgDrawDebugMP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CgDrawDebugMP::CgDrawDebugMP
==============
*/
void CgDrawDebugMP::CgDrawDebugMP(CgDrawDebugMP *this)
{
  this->__vftable = (CgDrawDebugMP_vtbl *)&CgDrawDebugMP::`vftable';
}

/*
==============
CG_DrawDebugMP_AddProcessedCommand
==============
*/
void CG_DrawDebugMP_AddProcessedCommand(int clientNum)
{
  ++g_snapshotCollectedInfo[0].commandsProcessed[clientNum];
}

/*
==============
CG_DrawDebugMP_ClearCommandsProcessed
==============
*/
void CG_DrawDebugMP_ClearCommandsProcessed(int clientNum)
{
  int *commandsProcessedOnSnapshot; 
  __int64 v2; 
  int *commandsProcessed; 
  __int128 v4; 

  if ( cg_t::ms_allocatedCount > 0 && clientNum == CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->predictedPlayerState.clientNum )
  {
    commandsProcessedOnSnapshot = g_snapshotCollectedInfo[0].commandsProcessedOnSnapshot;
    v2 = 6i64;
    commandsProcessed = g_snapshotCollectedInfo[0].commandsProcessed;
    do
    {
      commandsProcessedOnSnapshot += 32;
      v4 = *(_OWORD *)commandsProcessed;
      commandsProcessed += 32;
      *((_OWORD *)commandsProcessedOnSnapshot - 8) = v4;
      *((_OWORD *)commandsProcessedOnSnapshot - 7) = *((_OWORD *)commandsProcessed - 7);
      *((_OWORD *)commandsProcessedOnSnapshot - 6) = *((_OWORD *)commandsProcessed - 6);
      *((_OWORD *)commandsProcessedOnSnapshot - 5) = *((_OWORD *)commandsProcessed - 5);
      *((_OWORD *)commandsProcessedOnSnapshot - 4) = *((_OWORD *)commandsProcessed - 4);
      *((_OWORD *)commandsProcessedOnSnapshot - 3) = *((_OWORD *)commandsProcessed - 3);
      *((_OWORD *)commandsProcessedOnSnapshot - 2) = *((_OWORD *)commandsProcessed - 2);
      *((_OWORD *)commandsProcessedOnSnapshot - 1) = *((_OWORD *)commandsProcessed - 1);
      --v2;
    }
    while ( v2 );
    *(_OWORD *)commandsProcessedOnSnapshot = *(_OWORD *)commandsProcessed;
    *((_OWORD *)commandsProcessedOnSnapshot + 1) = *((_OWORD *)commandsProcessed + 1);
    memset_0(g_snapshotCollectedInfo[0].commandsProcessed, 0, sizeof(g_snapshotCollectedInfo[0].commandsProcessed));
  }
}

/*
==============
CG_DrawDebugMP_DrawBoxAroundPlayer
==============
*/
void CG_DrawDebugMP_DrawBoxAroundPlayer(const LocalClientNum_t localClientNum, const centity_t *const cent, const vec4_t *color, const int depthTest, const int duration)
{
  __int64 v8; 
  CgStatic *v9; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  EffectiveStance v13; 
  Bounds *outCollisionBounds; 
  __int64 v15; 
  vec3_t outOrigin; 
  __int64 v17; 
  Bounds bounds; 

  v17 = -2i64;
  v8 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2723, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2724, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v8) )
    __debugbreak();
  if ( (unsigned int)v8 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v15 = CgStatic::ms_allocatedCount;
    LODWORD(outCollisionBounds) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outCollisionBounds, v15) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v8] )
  {
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v15) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v8];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2727, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v15) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(outCollisionBounds) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outCollisionBounds, v15) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2730, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v13 = BG_EstimateEffectiveStance(&cent->nextState);
  CG_PhysicsCharacterProxy_GetCollisionBounds(NULL, &cent->nextState, CharacterInfo->suitIndex, v13, 0, &bounds);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_DebugBox(&outOrigin, &bounds, cent->pose.angles.v[1], color, depthTest, duration);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_DrawDebugMP_DrawDebugOverlays
==============
*/
void CG_DrawDebugMP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v3; 
  int ListOfATCLientRemoteDebugSubscribedTo; 
  __int64 v5; 
  __int64 i; 
  __int64 v7; 
  const char *v8; 
  bool v9; 
  const ScreenPlacement *v10; 
  __int64 align; 
  __int64 v12; 
  int *outATClients; 
  CgDrawDebug v14; 

  v1 = localClientNum;
  v14.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  CgDrawDebug::DrawDebugOverlays(&v14, localClientNum);
  v2 = DVARINT_bg_debugRewindPositions;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer )
  {
    if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v12) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v12, 2, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
    {
      LODWORD(v12) = CgDrawSystem::ms_allocatedCount;
      LODWORD(align) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", align, v12) )
        __debugbreak();
    }
    if ( !CgDrawSystem::ms_drawSystemArray[v1] )
    {
      LODWORD(v12) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v12) )
        __debugbreak();
    }
    CgDrawSystemMP::DrawDebugCharacterPoses((CgDrawSystemMP *)CgDrawSystem::ms_drawSystemArray[v1]);
  }
  v3 = 0;
  outATClients = NULL;
  ListOfATCLientRemoteDebugSubscribedTo = CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo((const int **)&outATClients);
  v5 = ListOfATCLientRemoteDebugSubscribedTo;
  if ( ListOfATCLientRemoteDebugSubscribedTo > 0 )
  {
    for ( i = 0i64; i < v5; ++i )
    {
      v7 = outATClients[i];
      if ( (unsigned int)v7 >= 0xC8 )
      {
        LODWORD(v12) = 200;
        LODWORD(align) = outATClients[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2665, ASSERT_TYPE_ASSERT, "(unsigned)( ATClientNum ) < (unsigned)( ( sizeof( *array_counter( s_remoteATClientStates ) ) + 0 ) )", "ATClientNum doesn't index ARRAY_COUNT( s_remoteATClientStates )\n\t%i not in [0, %i)", align, v12) )
          __debugbreak();
      }
      v8 = j_va("%s\n", s_remoteATClientStates[v7]);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v10 = &scrPlaceViewDisplay[v1];
          goto LABEL_27;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v9 )
          __debugbreak();
      }
      v10 = &scrPlaceFull;
LABEL_27:
      CG_DrawSmallDevStringColor(v10, 0.0, (float)v3++ * 100.0, v8, &colorGreen, 5);
    }
  }
  CG_DrawDebug_DrawATClientPos((const LocalClientNum_t)v1);
}

/*
==============
CG_DrawDebugMP_DrawFrontendOverlays
==============
*/
void CG_DrawDebugMP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  double v3; 
  const dvar_t *v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  const ScreenPlacement *v10; 
  CgDrawDebug v11; 

  v11.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v3 = CG_DrawDebugMP_DrawHostDebugInfo(localClientNum);
  v4 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v5 = CgDrawDebug::PrintFrontendUpperRightDebugInfo(&v11, localClientNum, *(float *)&v3);
    v6 = CgDrawDebug::PrintFrontendSceneDebugInfo(&v11, localClientNum, ActivePlacement, *(float *)&v5);
    v7 = CgDrawDebugMP::PrintEntityDebugInfo((CgDrawDebugMP *)&v11, localClientNum, ActivePlacement, *(float *)&v6);
    v8 = CgDrawDebugMP::PrintPreloadDebugInfo((CgDrawDebugMP *)&v11, localClientNum, ActivePlacement, *(float *)&v7);
    v9 = CgDrawDebugMP::PrintStreamingPos((CgDrawDebugMP *)&v11, localClientNum, ActivePlacement, *(float *)&v8);
    v11.DrawAnimationOverlays(&v11, localClientNum);
    CG_DrawDebugMP_DrawLiveStatus(localClientNum, (const CgDrawDebugMP *)&v11, *(float *)&v9);
    Cloth_Debug_SetRefDecoder(CG_Cloth_ConvertRefToString);
    Cloth_Debug_SetRefEntNumDecoder(CG_Cloth_ConvertRefToEntNum);
    v10 = ScrPlace_GetActivePlacement(localClientNum);
    Cloth_Debug_Draw(v10);
  }
}

/*
==============
CG_DrawDebugMP_DrawFullScreenDebugOverlays
==============
*/
void CG_DrawDebugMP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  CgDrawDebug v3; 

  v3.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  CgDrawDebug::DrawFullScreenDebugOverlays(&v3, localClientNum);
  if ( !Sys_IsRenderThread() )
  {
    if ( !ScrPlace_IsFullScreenActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2607, ASSERT_TYPE_ASSERT, "(ScrPlace_IsFullScreenActive())", (const char *)&queryFormat, "ScrPlace_IsFullScreenActive()", -2i64) )
      __debugbreak();
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    CG_PlayerCorpseMP_DebugDraw(localClientNum, ActivePlacement);
    CG_ClientAntiCheatMP_DebugDraw(localClientNum);
  }
}

/*
==============
CG_DrawDebugMP_DrawHostDebugInfo
==============
*/
float CG_DrawDebugMP_DrawHostDebugInfo(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  __int128 v4; 
  const dvar_t *v5; 
  double v6; 
  const ScreenPlacement *ActivePlacement; 
  double CornerLabelWidth; 
  float v9; 
  const dvar_t *v10; 
  double CornerFarRight; 
  double v12; 
  unsigned int ProtocolVersion; 
  const char *text; 
  double v15; 
  double v16; 
  __int128 v17; 
  const dvar_t *v18; 
  const char *string; 
  double v20; 
  double v21; 
  __int64 i; 
  __int64 v23; 
  const bdSecurityID *SecurityId; 
  const char *v25; 
  const char *v26; 
  double v27; 
  double v28; 
  __int128 v29; 
  CgDrawDebug v31; 
  __int64 v32[3]; 
  char str[24]; 

  v32[2] = -2i64;
  v2 = DVARSTR_party_hostname;
  if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1512, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_party_hostname, \"party_hostname\" ))", (const char *)&queryFormat, "Dvar_GetString( party_hostname )") )
    __debugbreak();
  v31.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  v3 = DVARVEC2_cg_debugInfoCornerOffsetMP;
  if ( !DVARVEC2_cg_debugInfoCornerOffsetMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetMP") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = LODWORD(v3->current.vector.v[1]);
  v5 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(&v31, " cg ms/frame");
    v9 = *(float *)&CornerLabelWidth;
    v10 = DVARSTR_party_hostname;
    if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( *(_BYTE *)v10->current.integer64 )
    {
      CornerFarRight = CgDrawDebug::GetCornerFarRight(&v31, ActivePlacement);
      v12 = CgDrawDebug::CornerPrintCaption(&v31, ActivePlacement, *(float *)&CornerFarRight, *(float *)&v4, v9, "- MP -", &colorGreenFaded);
      v17 = v4;
      *(float *)&v17 = *(float *)&v4 + *(float *)&v12;
      ProtocolVersion = GetProtocolVersion();
      text = j_va("%i", ProtocolVersion);
      v15 = CgDrawDebug::GetCornerFarRight(&v31, ActivePlacement);
      v16 = CgDrawDebug::CornerPrint(&v31, ActivePlacement, *(float *)&v15, *(float *)&v17, v9, text, " protocol", &colorWhite);
      *(float *)&v17 = *(float *)&v17 + *(float *)&v16;
      v18 = DVARSTR_party_hostname;
      if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      string = v18->current.string;
      v20 = CgDrawDebug::GetCornerFarRight(&v31, ActivePlacement);
      v21 = CgDrawDebug::CornerPrint(&v31, ActivePlacement, *(float *)&v20, *(float *)&v17, v9, string, " g-host", &colorWhite);
      *(float *)&v17 = *(float *)&v17 + *(float *)&v21;
      v4 = v17;
    }
    v32[0] = (__int64)Lobby_GetPartyData();
    v32[1] = (__int64)&g_partyData;
    for ( i = 0i64; i < 2; ++i )
    {
      v23 = v32[i];
      if ( *(_DWORD *)(v23 + 314492) )
      {
        SecurityId = XSESSION_INFO::GetSecurityId((XSESSION_INFO *)(*(_QWORD *)v23 + 4i64));
        XNKIDToString(SecurityId, str, 21);
        v25 = *(const char **)(v23 + 314408);
        v26 = j_va("%s ", str);
        v27 = CgDrawDebug::GetCornerFarRight(&v31, ActivePlacement);
        v28 = CgDrawDebug::CornerPrint(&v31, ActivePlacement, *(float *)&v27, *(float *)&v4, v9, v26, v25, &colorWhite);
        v29 = v4;
        *(float *)&v29 = *(float *)&v4 + *(float *)&v28;
        v4 = v29;
      }
    }
    v6 = CgDrawDebugMP::PrintPartyMemberInfo((CgDrawDebugMP *)&v31, localClientNum, ActivePlacement, *(float *)&v4);
  }
  else
  {
    LODWORD(v6) = v4;
  }
  return *(float *)&v6;
}

/*
==============
CG_DrawDebugMP_DrawLiveStatus
==============
*/

double __fastcall CG_DrawDebugMP_DrawLiveStatus(const LocalClientNum_t localClientNum, const CgDrawDebugMP *r_drawDebug, double y)
{
  const dvar_t *v3; 
  __int128 v6; 
  const ScreenPlacement *ActivePlacement; 
  double CornerFarRight; 
  float v10; 
  int ControllerFromClient; 
  const char *text; 
  float v13; 
  float v14; 
  double v15; 
  DWServicesAccess *Instance; 
  const char *EnvironmentString; 
  DWServicesAccess *v18; 
  unsigned int TitleID; 
  const char *v20; 
  double v21; 
  __int128 v22; 
  __int128 v23; 
  const char *Status; 
  double v25; 
  const char *LobbyStatus; 
  double v27; 
  unsigned __int64 CurrentLobbyId; 
  const char *v29; 
  double v30; 
  unsigned int v31; 
  unsigned int PlayerCount; 
  const char *PlayerStatus; 
  double CornerLabelWidth; 
  const char *label; 
  double v36; 
  __int128 v37; 
  double v38; 
  double v39; 
  float v40; 
  const char *MatchJoinStateNameDebugString; 
  double v42; 
  double v43; 
  float v44; 
  const char *AsyncTaskStateNameDebugString; 
  double v46; 
  double v47; 

  v3 = DCONST_DVARBOOL_cg_drawLiveStatus;
  v6 = *(_OWORD *)&y;
  if ( !DCONST_DVARBOOL_cg_drawLiveStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLiveStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return y;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
  v10 = *(float *)&CornerFarRight;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  FenceManager_DrawDebug(ControllerFromClient, r_drawDebug);
  text = dwGetEnvironmentFlavorName();
  v13 = *(float *)&y;
  v14 = *(float *)&CornerFarRight;
  v15 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&CornerFarRight, v13, 100.0, text, " dw server", &colorWhite);
  v23 = v6;
  *(float *)&v23 = *(float *)&v6 + *(float *)&v15;
  Instance = DWServicesAccess::GetInstance();
  EnvironmentString = DWServicesAccess::GetEnvironmentString(Instance);
  v18 = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(v18);
  v20 = j_va("0x%x (%s)", TitleID, EnvironmentString);
  v21 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, v14, *(float *)&v6 + *(float *)&v15, 100.0, v20, " dw titleID", &colorWhite);
  *(float *)&v23 = *(float *)&v23 + *(float *)&v21;
  LODWORD(v22) = v23;
  if ( OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    Status = OnlineMatchmakerOmniscient::GetStatus(&OnlineMatchmakerOmniscient::ms_instance);
    v25 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, v10, *(float *)&v23, 100.0, Status, " MM status", &colorWhite);
    *(float *)&v23 = *(float *)&v23 + *(float *)&v25;
    LobbyStatus = OnlineMatchmakerOmniscient::GetLobbyStatus(&OnlineMatchmakerOmniscient::ms_instance);
    v27 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, v10, *(float *)&v23, 100.0, LobbyStatus, " MM lobby", &colorWhite);
    *(float *)&v23 = *(float *)&v23 + *(float *)&v27;
    CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
    v29 = j_va("%zu", CurrentLobbyId);
    v30 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, v10, *(float *)&v23, 100.0, v29, " MM lobbyID", &colorWhite);
    *(float *)&v23 = *(float *)&v23 + *(float *)&v30;
    v22 = v23;
    v31 = 0;
    PlayerCount = OnlineMatchmakerOmniscient::GetPlayerCount(&OnlineMatchmakerOmniscient::ms_instance);
    if ( PlayerCount )
    {
      do
      {
        PlayerStatus = OnlineMatchmakerOmniscient::GetPlayerStatus(&OnlineMatchmakerOmniscient::ms_instance, v31);
        CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(&r_drawDebug->CgDrawDebug, PlayerStatus);
        label = j_va("%s MM player %i", PlayerStatus, v31);
        v36 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, v10, *(float *)&v22, *(float *)&CornerLabelWidth + 100.0, "> ", label, &colorWhite);
        ++v31;
        v37 = v22;
        *(float *)&v37 = *(float *)&v22 + *(float *)&v36;
        v22 = v37;
      }
      while ( v31 < PlayerCount );
    }
  }
  v38 = CgDrawDebugMP::PrintMPDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, *(float *)&v22);
  v39 = CgDrawDebugMP::PrintSessionDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, *(float *)&v38);
  v40 = *(float *)&v39;
  if ( GameBattles_IsScreenDebugEnabled() )
  {
    MatchJoinStateNameDebugString = GameBattles_GetMatchJoinStateNameDebugString(localClientNum);
    v42 = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
    v43 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&v42, v40, 100.0, MatchJoinStateNameDebugString, " MLG Join State", &colorWhite);
    v44 = v40 + *(float *)&v43;
    AsyncTaskStateNameDebugString = GameBattles_GetAsyncTaskStateNameDebugString(localClientNum);
    v46 = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
    v47 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&v46, v44, 100.0, AsyncTaskStateNameDebugString, " MLG Async Task", &colorWhite);
    v40 = *(float *)&v47 + v44;
  }
  return CgDrawDebugMP::PrintTournamentDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, v40);
}

/*
==============
CG_DrawDebugMP_DrawNoGameModeOverlays
==============
*/
void CG_DrawDebugMP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  int ControllerFromClient; 
  CgDrawDebug drawDebug; 

  drawDebug.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  v2 = DCONST_DVARBOOL_cg_drawLiveStatus;
  if ( !DCONST_DVARBOOL_cg_drawLiveStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLiveStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    FenceManager_DrawDebug(ControllerFromClient, &drawDebug);
  }
  CG_DrawDebugMP_DrawPaidUserOverlay(&drawDebug);
}

/*
==============
CG_DrawDebugMP_DrawPSFlags
==============
*/
void CG_DrawDebugMP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *predictedPlayerEntity; 
  const playerState_s *p_predictedPlayerState; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v7; 
  __int64 SharedPLFlags; 
  bool v9; 
  __int64 v10; 
  char outBuffer[2048]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(cgameGlob->predictedPlayerEntity)", (const char *)&queryFormat, "cgameGlob->predictedPlayerEntity") )
    __debugbreak();
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.18000001);
  v7 = UI_GetFontHandle(ActivePlacement, 6, 0.5);
  UI_DrawText(ActivePlacement, "Client View of Flags", 2048, v7, -120.0, 0.0, 2, 1, 0.5, &colorWhite, 3);
  CG_DrawDebugMP_GetPMFlags(p_predictedPlayerState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 30.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPLFlags = CG_DrawDebug_GetSharedPLFlags(p_predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 7u);
  v10 = 55i64;
  if ( v9 )
    v10 = 50i64;
  Com_sprintf(&outBuffer[SharedPLFlags], 2048 - (int)SharedPLFlags, "^%cFORCE_PARENT_VISIBLE\n", v10);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 30.0, 300.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugMP_GetPWFlags(p_predictedPlayerState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 175.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugMP_GetPOFlags(p_predictedPlayerState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 350.0, 20.0, 1, 1, 0.18000001, &colorWhite, 3);
  CG_DrawDebugMP_GetPEFlags(&predictedPlayerEntity->nextState, outBuffer, 2048);
  UI_DrawText(ActivePlacement, outBuffer, 2048, FontHandle, 550.0, 80.0, 1, 1, 0.18000001, &colorWhite, 3);
}

/*
==============
CG_DrawDebugMP_DrawPaidUserOverlay
==============
*/
void CG_DrawDebugMP_DrawPaidUserOverlay(const CgDrawDebug *drawDebug)
{
  const dvar_t *v1; 
  __int128 v2; 
  int v3; 
  const char *v4; 
  const ScreenPlacement *v5; 
  vec4_t *v6; 
  bool IsPaidUserReady; 
  const dvar_t *v8; 
  bool v9; 
  const dvar_t *v10; 
  char v11; 
  Online_Commerce *Instance; 
  Online_Commerce *v13; 
  bool v14; 
  Online_Commerce *v15; 
  bool HavePaidEntitlement; 
  const dvar_t *v17; 
  const char *v18; 
  const dvar_t *v19; 
  Online_Commerce *v20; 
  Online_Commerce *v21; 
  bool v22; 
  Online_Commerce *v23; 
  bool v24; 
  bool v25; 
  const char *v26; 
  vec4_t *v27; 
  const char *LocalClientPlatformUsername; 
  const char *label; 
  const char *text; 
  double v31; 
  __int128 v32; 
  __int128 v33; 
  bool BoolSafe; 
  const char *v35; 
  bool HavePaidContentPackEntitlement; 
  vec4_t *v37; 
  double v38; 
  int v39; 
  __int128 v40; 
  Online_Commerce *v41; 
  Online_Commerce *v42; 
  bool v43; 
  Online_Commerce *v44; 
  bool v45; 
  const char *v46; 
  vec4_t *v47; 
  const char *v48; 
  const char *v49; 
  double v50; 
  __int128 v51; 
  float v52; 
  float v53; 
  unsigned int v54; 
  double v55; 
  const dvar_t *v56; 
  const char *v57; 
  const dvar_t *v58; 
  const dvar_t *VarByName; 
  const char **v61; 
  const dvar_t *v62; 
  bool v63; 
  const char *v64; 
  char *v65; 
  float v66; 
  ScreenPlacement *ActivePlacement; 
  vec4_t color; 
  __int64 v70[6]; 
  char v71; 
  char v72[256]; 

  v1 = DVARBOOL_cg_drawPaidUserOverlay;
  if ( !DVARBOOL_cg_drawPaidUserOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPaidUserOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return;
  v2 = LODWORD(FLOAT_325_0);
  ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
  v3 = 0;
  v4 = " (dlc)";
  v5 = ActivePlacement;
  v6 = &colorRed;
  do
  {
    if ( !Live_IsUserSignedIn(v3) )
      goto LABEL_57;
    IsPaidUserReady = LiveStorage_IsPaidUserReady(v3);
    v8 = DVARBOOL_com_force_free_to_play;
    v9 = IsPaidUserReady;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      goto LABEL_27;
    v10 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v11 = 1;
      goto LABEL_28;
    }
    if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    {
      v11 = 1;
      goto LABEL_28;
    }
    Instance = Online_Commerce::GetInstance();
    v14 = 1;
    if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, v3) != ENTITLEMENT_STATE_COMPLETE )
    {
      v13 = Online_Commerce::GetInstance();
      if ( Online_Commerce::GetPaidEntitlementTaskState(v13, v3) != ENTITLEMENT_STATE_ERROR )
        v14 = 0;
    }
    v15 = Online_Commerce::GetInstance();
    HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v15, v3);
    if ( Live_IsUserSignedInToLive(v3) && v14 && HavePaidEntitlement )
      v11 = 1;
    else
LABEL_27:
      v11 = 0;
LABEL_28:
    v17 = DVARBOOL_com_force_free_to_play;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      v18 = " (dvar)";
    }
    else
    {
      v19 = DVARBOOL_com_force_premium;
      if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        v18 = " (dvar)";
      }
      else if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
      {
        v18 = " (dlc)";
      }
      else
      {
        v20 = Online_Commerce::GetInstance();
        v22 = 1;
        if ( Online_Commerce::GetPaidEntitlementTaskState(v20, v3) != ENTITLEMENT_STATE_COMPLETE )
        {
          v21 = Online_Commerce::GetInstance();
          if ( Online_Commerce::GetPaidEntitlementTaskState(v21, v3) != ENTITLEMENT_STATE_ERROR )
            v22 = 0;
        }
        v23 = Online_Commerce::GetInstance();
        v24 = Online_Commerce::HavePaidEntitlement(v23, v3);
        if ( !Live_IsUserSignedInToLive(v3) || !v22 || (v25 = !v24, v18 = " (xbl)", v25) )
          v18 = (char *)&queryFormat.fmt + 3;
      }
    }
    if ( v9 )
    {
      v26 = "free";
      if ( v11 )
        v26 = "paid";
      v27 = &colorRed;
      if ( v11 )
        v27 = &colorGreen;
    }
    else
    {
      v26 = "pending";
      v27 = &colorYellow;
    }
    color = *v27;
    LocalClientPlatformUsername = Live_GetLocalClientPlatformUsername(v3);
    label = j_va(" %s", LocalClientPlatformUsername);
    text = j_va("%s%s", v26, v18);
    v5 = ActivePlacement;
    v31 = CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, ActivePlacement, 100.0, *(float *)&v2, 50.0, text, label, &color);
    v32 = v2;
    *(float *)&v32 = *(float *)&v2 + *(float *)&v31;
    v2 = v32;
LABEL_57:
    ++v3;
  }
  while ( v3 < 8 );
  v33 = v2;
  *(float *)&v33 = *(float *)&v2 + 8.0;
  BoolSafe = Dvar_GetBoolSafe("MTQLNMTRLS");
  if ( Content_IsEnumerationDone() )
  {
    if ( Content_DoWeHavePaidContentPackEntitlement() )
    {
      if ( BoolSafe )
        v4 = " (dvar)";
      v35 = j_va("entitled%s", v4);
    }
    else
    {
      v35 = "not entitled";
    }
  }
  else
  {
    v35 = "pending";
  }
  if ( Content_IsEnumerationDone() )
  {
    HavePaidContentPackEntitlement = Content_DoWeHavePaidContentPackEntitlement();
    v37 = &colorRed;
    if ( HavePaidContentPackEntitlement )
      v37 = &colorGreen;
  }
  else
  {
    v37 = &colorYellow;
  }
  color = *v37;
  v38 = CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v5, 100.0, *(float *)&v33, 50.0, v35, " MP1 DLC", &color);
  v39 = 0;
  *(float *)&v33 = *(float *)&v33 + *(float *)&v38;
  v40 = v33;
  do
  {
    if ( Live_IsUserSignedIn(v39) )
    {
      v41 = Online_Commerce::GetInstance();
      v43 = 1;
      if ( Online_Commerce::GetPaidEntitlementTaskState(v41, v39) != ENTITLEMENT_STATE_COMPLETE )
      {
        v42 = Online_Commerce::GetInstance();
        if ( Online_Commerce::GetPaidEntitlementTaskState(v42, v39) != ENTITLEMENT_STATE_ERROR )
          v43 = 0;
      }
      v44 = Online_Commerce::GetInstance();
      v45 = Online_Commerce::HavePaidEntitlement(v44, v39);
      if ( Live_IsUserSignedInToLive(v39) )
      {
        if ( v43 )
        {
          v46 = "not entitled";
          if ( v45 )
            v46 = "entitled";
        }
        else
        {
          v46 = "pending";
        }
      }
      else
      {
        v46 = "signed out";
      }
      if ( Live_IsUserSignedInToLive(v39) )
      {
        if ( v43 )
        {
          v47 = &colorRed;
          if ( v45 )
            v47 = &colorGreen;
        }
        else
        {
          v47 = &colorYellow;
        }
      }
      else
      {
        v47 = &colorDkGrey;
      }
      color = *v47;
      v48 = Live_GetLocalClientPlatformUsername(v39);
      v49 = j_va(" %s", v48);
      v5 = ActivePlacement;
      v50 = CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, ActivePlacement, 100.0, *(float *)&v40, 50.0, v46, v49, &color);
      v51 = v40;
      *(float *)&v51 = *(float *)&v40 + *(float *)&v50;
      v40 = v51;
    }
    ++v39;
  }
  while ( v39 < 8 );
  v53 = *(float *)&v40 + 8.0;
  v52 = *(float *)&v40 + 8.0;
  v54 = 0;
  if ( BoolSafe )
  {
    v55 = CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v5, 100.0, v53, 50.0, "enabled", " bypassDLCCheck", &colorGreen);
    v52 = v53 + *(float *)&v55;
  }
  v56 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.enabled )
  {
    v57 = " com_force_free_to_play";
    goto LABEL_104;
  }
  v58 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
  {
    v57 = " com_force_premium";
LABEL_104:
    CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v5, 100.0, v52, 50.0, "enabled", v57, &colorGreen);
  }
  v70[0] = (__int64)"OMPKROKQPL";
  v70[1] = (__int64)"OKPORRORMM";
  v70[2] = (__int64)"MOMKSMKTOQ";
  v70[3] = (__int64)"LPKNOPTMLP";
  v70[4] = (__int64)"MKKKSTPNQL";
  v70[5] = (__int64)"LRONQNKRKM";
  VarByName = Dvar_FindVarByName("SSRQTKMLQ");
  if ( VarByName && VarByName->current.enabled )
    v6 = &colorGreen;
  color = *v6;
  memset_0(v72, 0, sizeof(v72));
  v61 = (const char **)v70;
  do
  {
    v62 = Dvar_FindVarByName(*v61);
    v63 = v62 && v62->current.enabled;
    v64 = " 0";
    if ( v63 )
      v64 = " 1";
    v65 = &v71;
    do
      v25 = *++v65 == 0;
    while ( !v25 );
    LODWORD(v66) = (unsigned int)strcpy(v65, v64);
    ++v54;
    ++v61;
  }
  while ( v54 < 6 );
  CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v5, 100.0, v66, 50.0, "upsell", v72, &color);
}

/*
==============
CG_DrawDebugMP_DrawStreamSyncOverlay
==============
*/
void CG_DrawDebugMP_DrawStreamSyncOverlay(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  unsigned int v4; 
  __int128 v5; 
  CustomizationModelType v6; 
  __int64 v7; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int v9; 
  float v10; 
  float x; 
  const char *ModelName; 
  __int64 v13; 
  char *v14; 
  const vec4_t *color; 
  __int128 v16; 
  ClientCustomizationInfo outCustomization; 
  unsigned int outCustomizationLoaded[4]; 
  char dest[128]; 
  char text[256]; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.30000001);
  v4 = 0;
  UI_DrawText(ActivePlacement, "Head", 256, FontHandle, 0.0, 0.0, 1, 1, 0.30000001, &colorWhite, 8);
  UI_DrawText(ActivePlacement, "Body", 256, FontHandle, 220.0, 0.0, 1, 1, 0.30000001, &colorWhite, 8);
  UI_DrawText(ActivePlacement, "Viewarms", 256, FontHandle, 440.0, 0.0, 1, 1, 0.30000001, &colorWhite, 8);
  v5 = LODWORD(FLOAT_24_0);
  if ( CL_Streamsync_DebugGetClientData(localClientNum, 0, &outCustomization, outCustomizationLoaded) )
  {
    do
    {
      v6 = CUSTOMIZATION_TYPE_HEAD;
      v7 = 0i64;
      do
      {
        StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(v6);
        v9 = outCustomization.modelIndex[v7];
        if ( v9 < Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
        {
          v10 = (float)(unsigned int)v6;
          x = v10 * 220.0;
          ModelName = BG_Customization_GetModelName(v6, v9);
          Core_strcpy(dest, 0x80ui64, ModelName);
          v13 = -1i64;
          do
            ++v13;
          while ( dest[v13] );
          if ( (unsigned int)v13 > 0x19 )
          {
            v14 = &dest[(unsigned int)(v13 - 25)];
            *(_WORD *)v14 = 11822;
            v14[2] = 46;
          }
          else
          {
            v14 = dest;
          }
          Com_sprintf(text, 0x100ui64, "%04d - %s", outCustomization.modelIndex[v7], v14);
          color = &colorRed;
          if ( outCustomizationLoaded[v7] )
            color = &colorWhite;
          UI_DrawText(ActivePlacement, text, 256, FontHandle, x, *(float *)&v5, 1, 1, 0.30000001, color, 8);
        }
        ++v6;
        ++v7;
      }
      while ( (unsigned int)v6 < CUSTOMIZATION_TYPE_COUNT );
      ++v4;
      v16 = v5;
      *(float *)&v16 = *(float *)&v5 + 12.0;
      v5 = v16;
    }
    while ( CL_Streamsync_DebugGetClientData(localClientNum, v4, &outCustomization, outCustomizationLoaded) );
  }
}

/*
==============
CG_DrawDebugMP_GetPEFlags
==============
*/
__int64 CG_DrawDebugMP_GetPEFlags(const entityState_t *es, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  LerpEntityState *p_lerp; 
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

  v3 = bufferSize;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1392, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "EntityStateFlags\n");
  p_lerp = &es->lerp;
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cNONSOLID\n", v10) + v6;
  v12 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 2u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cTELEPORT_BIT\n", v13) + v11;
  v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cCROUCHING\n", v16) + v14;
  v18 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cPRONE\n", v19) + v17;
  v21 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xCu);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cNODRAW\n", v22) + v20;
  v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cFIRING\n", v25) + v23;
  v27 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 5u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cTURRET_ACTIVE_PRONE\n", v28) + v26;
  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 6u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cTURRET_ACTIVE_DUCK\n", v31) + v29;
  v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 7u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cTURRET_ACTIVE_REMOTE\n", v34) + v32;
  v36 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 8u);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cAIM_ASSIST\n", v37) + v35;
  v39 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 9u);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cLASER_SIGHT\n", v40) + v38;
  v42 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xBu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cVEHICLE_ACTIVE\n", v43) + v41;
  v45 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cDEAD\n", v46) + v44;
  v48 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0x12u);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cFOG_SCALE\n", v49) + v47;
  v51 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x1Cu);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cNO_AGENT_OR_PLAYER_COLLISION\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x18u);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cMANTLE\n", v55) + v53;
  v57 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x17u);
  v58 = 55i64;
  if ( v57 )
    v58 = 50i64;
  v59 = Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cLOOP_RUMBLE\n", v58) + v56;
  v60 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x19u);
  v61 = 55i64;
  if ( v60 )
    v61 = 50i64;
  v62 = Com_sprintf(&outBuffer[v59], (int)v3 - v59, "^%cADS\n", v61) + v59;
  v63 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x1Bu);
  v64 = 55i64;
  if ( v63 )
    v64 = 50i64;
  v65 = Com_sprintf(&outBuffer[v62], (int)v3 - v62, "^%cNEW\n", v64) + v62;
  v66 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x14u);
  v67 = 55i64;
  if ( v66 )
    v67 = 50i64;
  v68 = Com_sprintf(&outBuffer[v65], (int)v3 - v65, "^%cJAMMING\n", v67) + v65;
  v69 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x16u);
  v70 = 55i64;
  if ( v69 )
    v70 = 50i64;
  v71 = Com_sprintf(&outBuffer[v68], (int)v3 - v68, "^%cTIMED_OBJECT\n", v70) + v68;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, 0x13u) )
    v9 = 50;
  return (unsigned int)(v71 + Com_sprintf(&outBuffer[v71], (int)v3 - v71, "^%cCOMPASS_PING\n", v9));
}

/*
==============
CG_DrawDebugMP_GetPMFlags
==============
*/
__int64 CG_DrawDebugMP_GetPMFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  __int64 SharedPMFlags; 
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

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1264, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1265, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  SharedPMFlags = CG_DrawDebug_GetSharedPMFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x3Au);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPMFlags], bufferSize - (int)SharedPMFlags, "^%cCHARACTER_COLLISION_ZONE\n", v10) + SharedPMFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x3Bu);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cANIM_LINKEDTO_SEAT\n", v13) + v11;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x3Cu);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cANIM_LINKEDTO_ZIPLINE\n", v16) + v14;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x3Du);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cANIM_SCRIPTED_SCENE\n", v19) + v17;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v21 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x3Eu);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cANIM_ONWALL\n", v22) + v20;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x3Fu) )
    v9 = 50;
  return (unsigned int)(v23 + Com_sprintf(&outBuffer[v23], bufferSize - v23, "^%cLADDER_WEAPON_DROPPED\n", v9));
}

/*
==============
CG_DrawDebugMP_GetPOFlags
==============
*/
__int64 CG_DrawDebugMP_GetPOFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  __int64 SharedPOFlags; 
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

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1323, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1324, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_otherFlags = &ps->otherFlags;
  SharedPOFlags = CG_DrawDebug_GetSharedPOFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x21u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPOFlags], bufferSize - (int)SharedPOFlags, "^%cSPECTATE\n", v10) + SharedPOFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cPLAYER\n", v13) + v11;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x23u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cSPEC_ALLOW_CYCLE\n", v16) + v14;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x24u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cSPEC_ALLOW_FREELOOK\n", v19) + v17;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v21 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x25u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cSPEC_CYCLE_LOADING\n", v22) + v20;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x26u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], bufferSize - v23, "^%cADS_THIRD_PERSON_TOGGLE\n", v25) + v23;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v27 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x27u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], bufferSize - v26, "^%cAUTOSPOT_OVERLAY_DISPLAY\n", v28) + v26;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x28u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], bufferSize - v29, "^%cKILLCAM_THERMAL_OFF\n", v31) + v29;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v33 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x29u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], bufferSize - v32, "^%cAGENT\n", v34) + v32;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v36 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Au);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], bufferSize - v35, "^%cCOMPASS_EYES_ON_ENABLED\n", v37) + v35;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v39 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Bu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], bufferSize - v38, "^%cSPECTATE_FORCE_THIRD\n", v40) + v38;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v42 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Cu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], bufferSize - v41, "^%cSPECTATE_FORCE_HELMET\n", v43) + v41;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v45 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Du);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], bufferSize - v44, "^%cCAMERA_THIRD_PERSON\n", v46) + v44;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v48 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Eu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], bufferSize - v47, "^%cDEATH_VIEW_LERPED\n", v49) + v47;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v51 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Fu);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], bufferSize - v50, "^%cDEATH_VIEW_ROLL_LEFT\n", v52) + v50;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v54 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x30u);
  v55 = 55i64;
  if ( v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], bufferSize - v53, "^%cBALL_PASS_ALLOWED\n", v55) + v53;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v57 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x31u);
  v58 = 55i64;
  if ( v57 )
    v58 = 50i64;
  v59 = Com_sprintf(&outBuffer[v56], bufferSize - v56, "^%cSECONDARY_COLLISION_ACTIVE\n", v58) + v56;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v60 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x32u);
  v61 = 55i64;
  if ( v60 )
    v61 = 50i64;
  v62 = Com_sprintf(&outBuffer[v59], bufferSize - v59, "^%cUSE_FIXED_DEATH_CAM\n", v61) + v59;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v63 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x33u);
  v64 = 55i64;
  if ( v63 )
    v64 = 50i64;
  v65 = Com_sprintf(&outBuffer[v62], bufferSize - v62, "^%cUSE_EXECUTION_DEATH_CAM\n", v64) + v62;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v66 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x34u);
  v67 = 55i64;
  if ( v66 )
    v67 = 50i64;
  v68 = Com_sprintf(&outBuffer[v65], bufferSize - v65, "^%cHAS_CONTROLLED_AGENT\n", v67) + v65;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v69 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x35u);
  v70 = 55i64;
  if ( v69 )
    v70 = 50i64;
  v71 = Com_sprintf(&outBuffer[v68], bufferSize - v68, "^%cWORLD_UP_LOGIC_ACTIVE\n", v70) + v68;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v72 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x36u);
  v73 = 55i64;
  if ( v72 )
    v73 = 50i64;
  v74 = Com_sprintf(&outBuffer[v71], bufferSize - v71, "^%cWORLD_UP_TRANSITION\n", v73) + v71;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v75 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x37u);
  v76 = 55i64;
  if ( v75 )
    v76 = 50i64;
  v77 = Com_sprintf(&outBuffer[v74], bufferSize - v74, "^%cUAV_JAMMED\n", v76) + v74;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v78 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x38u);
  v79 = 55i64;
  if ( v78 )
    v79 = 50i64;
  v80 = Com_sprintf(&outBuffer[v77], bufferSize - v77, "^%cEXECUTION_ACTIVE\n", v79) + v77;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v81 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x39u);
  v82 = 55i64;
  if ( v81 )
    v82 = 50i64;
  v83 = Com_sprintf(&outBuffer[v80], bufferSize - v80, "^%cHIDE_WM_ACCESSORY\n", v82) + v80;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v84 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x3Au);
  v85 = 55i64;
  if ( v84 )
    v85 = 50i64;
  v86 = Com_sprintf(&outBuffer[v83], bufferSize - v83, "^%cHIDE_NAMEPLATE\n", v85) + v83;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x3Bu) )
    v9 = 50;
  return (unsigned int)(v86 + Com_sprintf(&outBuffer[v86], bufferSize - v86, "^%cWAS_ON_GROUND_UNWALKABLE\n", v9));
}

/*
==============
CG_DrawDebugMP_GetPWFlags
==============
*/
__int64 CG_DrawDebugMP_GetPWFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  __int64 SharedPWFlags; 
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

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1298, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1299, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_weapFlags = &ps->weapCommon.weapFlags;
  SharedPWFlags = CG_DrawDebug_GetSharedPWFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x35u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPWFlags], bufferSize - (int)SharedPWFlags, "^%cUSE_ALTERNATE_AS_OFFHAND\n", v10) + SharedPWFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x36u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cTRIGGER_LEFT_BALL_PASS\n", v13) + v11;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x38u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cPENDING_MELEE_COMBO_SEQ_INC\n", v16) + v14;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x39u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cDISABLE_EMPTY_CLIP_WEAPON_SWITCH_MP\n", v19) + v17;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v21 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x3Au);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cEXECUTION_WEAPON_VALID\n", v22) + v20;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x3Bu) )
    v9 = 50;
  return (unsigned int)(v23 + Com_sprintf(&outBuffer[v23], bufferSize - v23, "^%cEXECUTION_WEAPON_USE_STREAMING\n", v9));
}

/*
==============
CG_DrawDebugMP_GetServerTimeDilation
==============
*/
void CG_DrawDebugMP_GetServerTimeDilation(LocalClientNum_t localClientNum, int *serverTimeDilation, int *deltaCorrectionMagnitude)
{
  __int64 v3; 

  v3 = localClientNum;
  *serverTimeDilation = g_snapshotCollectedInfo[v3].serverTimeDilation;
  *deltaCorrectionMagnitude = g_snapshotCollectedInfo[v3].deltaCorrectionMagnitude;
}

/*
==============
CG_DrawDebugMP_SetAdjustTimeOffsetInfo
==============
*/
void CG_DrawDebugMP_SetAdjustTimeOffsetInfo(LocalClientNum_t localClientNum, int networkOffsetTime, int currOffsetTime)
{
  __int64 v3; 

  v3 = localClientNum;
  g_snapshotCollectedInfo[v3].networkOffsetTime = networkOffsetTime;
  g_snapshotCollectedInfo[v3].currOffsetTime = currOffsetTime;
}

/*
==============
CG_DrawDebugMP_SetExtrapolation
==============
*/
void CG_DrawDebugMP_SetExtrapolation(LocalClientNum_t localClientNum, int extrapolationTime)
{
  __int64 v2; 

  v2 = localClientNum;
  g_snapshotCollectedInfo[v2].extrapolatedTime = extrapolationTime;
  g_snapshotCollectedInfo[v2].extrapolated = 1;
}

/*
==============
CG_DrawDebugMP_SetServerTimeDilation
==============
*/
void CG_DrawDebugMP_SetServerTimeDilation(LocalClientNum_t localClientNum, int timeDilation, int deltaCorrectionMagnitude)
{
  __int64 v3; 

  v3 = localClientNum;
  g_snapshotCollectedInfo[v3].serverTimeDilation = timeDilation;
  g_snapshotCollectedInfo[v3].deltaCorrectionMagnitude = deltaCorrectionMagnitude;
}

/*
==============
CG_DrawDebugMP_UpdateClientInterpolation
==============
*/
void CG_DrawDebugMP_UpdateClientInterpolation(LocalClientNum_t localClientNum, int clientIndex, const vec3_t *prevSnapOrigin, const vec3_t *nextSnapOrigin, const vec3_t *poseOrigin, trajectory_t_secure *prevTrajectory, trajectory_t_secure *nextTrajectory, float frameInterpolation)
{
  const dvar_t *v8; 
  __int64 v10; 
  __int64 v12; 
  unsigned int maxClients; 
  SnapshotCollectedNonLocalClient *v14; 
  float v15; 
  float v16; 
  __int64 v17; 
  __int64 v18; 

  v8 = DVARINT_cg_drawSnapshot;
  v10 = clientIndex;
  v12 = localClientNum;
  if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer >= 2 )
  {
    maxClients = cls.maxClients;
    if ( (unsigned __int64)cls.maxClients > 0xC8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1568, ASSERT_TYPE_ASSERT, "( cls.maxClients ) <= ( ( sizeof( *array_counter( g_snapshotCollectedInfo[localClientNum].clientInterpolationData ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "cls.maxClients", "ARRAY_COUNT( g_snapshotCollectedInfo[localClientNum].clientInterpolationData )", cls.maxClients, 200) )
        __debugbreak();
      maxClients = cls.maxClients;
    }
    if ( (unsigned int)v10 >= maxClients )
    {
      LODWORD(v18) = maxClients;
      LODWORD(v17) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1569, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v14 = &g_snapshotCollectedInfo[v12].clientInterpolationData[v10];
    v14->prevSnapOrigin.v[0] = prevSnapOrigin->v[0];
    v14->prevSnapOrigin.v[1] = prevSnapOrigin->v[1];
    v14->prevSnapOrigin.v[2] = prevSnapOrigin->v[2];
    v14->nextSnapOrigin.v[0] = nextSnapOrigin->v[0];
    v14->nextSnapOrigin.v[1] = nextSnapOrigin->v[1];
    v14->nextSnapOrigin.v[2] = nextSnapOrigin->v[2];
    v14->poseOrigin = *poseOrigin;
    v15 = prevTrajectory->trDelta.v[2];
    *(__m256i *)&v14->prevTrajectory.trType = *(__m256i *)&prevTrajectory->trType;
    v14->prevTrajectory.trDelta.v[2] = v15;
    v16 = nextTrajectory->trDelta.v[2];
    *(__m256i *)&v14->nextTrajectory.trType = *(__m256i *)&nextTrajectory->trType;
    v14->frameInterpolation = frameInterpolation;
    v14->nextTrajectory.trDelta.v[2] = v16;
  }
}

/*
==============
CG_DrawDebugMP_UpdateHudOutlineUsage
==============
*/
void CG_DrawDebugMP_UpdateHudOutlineUsage(const LocalClientNum_t localClientNum, unsigned __int8 hudOutlineUsage)
{
  s_serverCollectedInfo[localClientNum].svHudOutlineUsage = hudOutlineUsage;
}

/*
==============
CG_DrawDebugMP_UpdateSnapshotBufferUsage
==============
*/
void CG_DrawDebugMP_UpdateSnapshotBufferUsage(const LocalClientNum_t localClientNum, int type, unsigned __int8 usagePercent)
{
  __int64 v3; 
  __int64 v5; 
  int v7; 

  v3 = type;
  v5 = localClientNum;
  if ( (unsigned int)type >= 0xA )
  {
    v7 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1653, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( g_snapshotCollectedInfo[localClientNum].snapshotBufferUsagePercent ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( g_snapshotCollectedInfo[localClientNum].snapshotBufferUsagePercent )\n\t%i not in [0, %i)", type, v7) )
      __debugbreak();
  }
  g_snapshotCollectedInfo[v5].snapshotBufferUsagePercent[v3] = usagePercent;
}

/*
==============
CG_DrawDebugMP_UpdateSnapshotFullPercent
==============
*/
void CG_DrawDebugMP_UpdateSnapshotFullPercent(const LocalClientNum_t localClientNum, unsigned __int8 snapshotFullPercent)
{
  g_snapshotCollectedInfo[localClientNum].snapshotFullFramePercent = snapshotFullPercent;
}

/*
==============
CG_DrawDebug_DrawATClientPos
==============
*/
void CG_DrawDebug_DrawATClientPos(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 ListOfATClientPosSubscribedTo; 
  int v3; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  __int64 i; 
  __int64 v7; 
  CgEntitySystem *EntitySystem; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  const char *v12; 
  bool v13; 
  const ScreenPlacement *v14; 
  __int64 align; 
  __int64 duration; 
  vec3_t *p_origin; 
  int *outATClients; 
  vec3_t origin; 

  v1 = localClientNum;
  outATClients = NULL;
  ListOfATClientPosSubscribedTo = CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo((const int **)&outATClients);
  v3 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v5 = ListOfATClientPosSubscribedTo;
  if ( (int)ListOfATClientPosSubscribedTo > 0 )
  {
    for ( i = 0i64; i < v5; ++i )
    {
      v7 = outATClients[i];
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( (unsigned int)v7 >= 0x800 )
      {
        LODWORD(duration) = 2048;
        LODWORD(align) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", align, duration) )
          __debugbreak();
      }
      v9 = (__int64)&EntitySystem->m_entities[v7];
      if ( !v9 )
        goto LABEL_25;
      v10 = v9 + 416;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( *(_DWORD *)v10 == 4 )
      {
        p_origin = &origin;
        *(_QWORD *)&origin.y = *(_QWORD *)(v10 + 12) ^ __PAIR64__(s_trbase_aab_Z ^ *(_DWORD *)(v10 + 20), *(_DWORD *)(v10 + 16) ^ s_trbase_aab_Y);
        LODWORD(origin.v[0]) = *(_DWORD *)(v10 + 12) ^ ~s_trbase_aab_X;
        memset(&p_origin, 0, sizeof(p_origin));
        *(float *)&p_origin = origin.v[0];
        if ( (LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&p_origin = origin.v[1], (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&p_origin = origin.v[2], (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        v11 = *(float *)(v10 + 16);
        origin.v[0] = *(float *)(v10 + 12);
        origin.v[2] = *(float *)(v10 + 20);
        origin.v[1] = v11;
      }
      v12 = j_va("%f, %f, %f\n", origin.v[0], origin.v[1], origin.v[2]);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v14 = &scrPlaceViewDisplay[v1];
          goto LABEL_24;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v13 )
          __debugbreak();
      }
      v14 = &scrPlaceFull;
LABEL_24:
      CG_DrawSmallDevStringColor(v14, 0.0, (float)v3 * 100.0, v12, &colorGreen, 5);
      CL_AddDebugBox(&LocalClientGlobals->refdef.view.axis, &origin, &s_boxLower_0, &s_boxUpper_0, &colorRed, 0, 0, 0);
LABEL_25:
      ++v3;
    }
  }
}

/*
==============
CG_DrawDebug_DrawATClientStates
==============
*/
void CG_DrawDebug_DrawATClientStates(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int ListOfATCLientRemoteDebugSubscribedTo; 
  __int64 v4; 
  __int64 i; 
  __int64 v6; 
  const char *v7; 
  bool v8; 
  const ScreenPlacement *v9; 
  __int64 align; 
  __int64 v11; 
  const int *v12; 

  v1 = localClientNum;
  v2 = 0;
  v12 = NULL;
  ListOfATCLientRemoteDebugSubscribedTo = CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo(&v12);
  v4 = ListOfATCLientRemoteDebugSubscribedTo;
  if ( ListOfATCLientRemoteDebugSubscribedTo > 0 )
  {
    for ( i = 0i64; i < v4; ++i )
    {
      v6 = v12[i];
      if ( (unsigned int)v6 >= 0xC8 )
      {
        LODWORD(v11) = 200;
        LODWORD(align) = v12[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2665, ASSERT_TYPE_ASSERT, "(unsigned)( ATClientNum ) < (unsigned)( ( sizeof( *array_counter( s_remoteATClientStates ) ) + 0 ) )", "ATClientNum doesn't index ARRAY_COUNT( s_remoteATClientStates )\n\t%i not in [0, %i)", align, v11) )
          __debugbreak();
      }
      v7 = j_va("%s\n", s_remoteATClientStates[v6]);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v9 = &scrPlaceViewDisplay[v1];
          goto LABEL_13;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v8 )
          __debugbreak();
      }
      v9 = &scrPlaceFull;
LABEL_13:
      CG_DrawSmallDevStringColor(v9, 0.0, (float)v2++ * 100.0, v7, &colorGreen, 5);
    }
  }
}

/*
==============
CG_DrawDebug_DrawEntityOverlay
==============
*/
void CG_DrawDebug_DrawEntityOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  Physics_WorldId v3; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  CgHandler *Handler; 
  CgHandler *v7; 
  trace_t *p_results; 
  unsigned __int16 EntityHitId; 
  CgEntitySystem *EntitySystem; 
  unsigned int v11; 
  unsigned int v12; 
  char *v13; 
  bool Bool_Internal_DebugName; 
  __int64 ignoreArbitraryUp; 
  __int64 ignoreArbitraryUpa; 
  __int64 skipChildren; 
  __int64 skipChildrena; 
  trace_t trace; 
  trace_t results; 
  vec3_t outOrigin; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t right; 

  v1 = DVARBOOL_entityLeakDisplay;
  v2 = localClientNum;
  if ( !DVARBOOL_entityLeakDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(skipChildren) = 2;
      LODWORD(ignoreArbitraryUp) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ignoreArbitraryUp, skipChildren) )
        __debugbreak();
    }
    if ( (int)v2 < cg_t::ms_allocatedCount )
    {
      v3 = 3 * v2 + 3;
      if ( PhysicsQuery_IsWorldInitialized((Physics_WorldId)(3 * v2 + 2)) && PhysicsQuery_IsWorldInitialized(v3) )
      {
        outOrigin.v[0] = 0.0;
        outOrigin.v[1] = 0.0;
        outOrigin.v[2] = 0.0;
        p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState;
        if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
          __debugbreak();
        v5 = CgWeaponMap::ms_instance[v2];
        Handler = CgHandler::getHandler((LocalClientNum_t)v2);
        BG_GetPlayerEyePosition(v5, p_predictedPlayerState, &outOrigin, Handler);
        v7 = CgHandler::getHandler((LocalClientNum_t)v2);
        BG_GetPlayerViewDirection(p_predictedPlayerState, &forward, &right, &up, v7, 0);
        end.v[0] = (float)(16000.0 * forward.v[0]) + outOrigin.v[0];
        end.v[1] = (float)(16000.0 * forward.v[1]) + outOrigin.v[1];
        end.v[2] = (float)(16000.0 * forward.v[2]) + outOrigin.v[2];
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v2 + 2), &results, &outOrigin, &end, &bounds_origin, p_predictedPlayerState->clientNum, 0, 33570816, 0, NULL, All);
        PhysicsQuery_LegacyTrace(v3, &trace, &outOrigin, &end, &bounds_origin, p_predictedPlayerState->clientNum, 0, 256, 0, NULL, All);
        p_results = &results;
        if ( trace.fraction <= results.fraction )
          p_results = &trace;
        EntityHitId = Trace_GetEntityHitId(p_results);
        if ( EntityHitId != 2047 )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v2);
          if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1958, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
            __debugbreak();
          if ( (CgEntitySystem::GetEntity(EntitySystem, EntityHitId)->flags & 1) != 0 )
          {
            if ( EntityHitId >= 0x9E5u )
            {
              LODWORD(skipChildrena) = EntityHitId;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", skipChildrena) )
                __debugbreak();
            }
            if ( (unsigned int)v2 >= 2 )
            {
              LODWORD(skipChildrena) = 2;
              LODWORD(ignoreArbitraryUpa) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", ignoreArbitraryUpa, skipChildrena) )
                __debugbreak();
            }
            v11 = 2533 * v2 + EntityHitId;
            if ( v11 >= 0x13CA )
            {
              LODWORD(skipChildrena) = 2533 * v2 + EntityHitId;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", skipChildrena) )
                __debugbreak();
            }
            v12 = clientObjMap[v11];
            if ( v12 )
            {
              if ( v12 >= (unsigned int)s_objCount )
              {
                LODWORD(skipChildrena) = v12;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", skipChildrena) )
                  __debugbreak();
              }
              v13 = s_objBuf[v12];
              if ( v13 )
              {
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 4 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
                {
                  if ( *(_QWORD *)v13 )
                    CG_DrawDebug_DrawAnims((LocalClientNum_t)v2, EntityHitId, 20.0);
                }
                else
                {
                  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDebugBonesBind, "cg_drawDebugBonesBind");
                  CG_DrawDebug_DrawBones((const LocalClientNum_t)v2, Bool_Internal_DebugName, CG_DEBUG_DRAW_BONES_SHARED_ONLY, NULL, EntityHitId);
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
CG_DrawDebug_PlayerAnimScriptInfo_Server
==============
*/
void CG_DrawDebug_PlayerAnimScriptInfo_Server(LocalClientNum_t localClientNum, float requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  playerState_s *ps; 
  characterInfo_t *ci; 

  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && G_MainMP_GetDebugInfoForAnimScriptOverlay(handle, (const characterInfo_t **)&ci, (const playerState_s **)&ps) )
  {
    if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1999, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
      __debugbreak();
    CG_DrawDebug_PlayerAnimScriptInfo(localClientNum, requestedYPos, ci, ps, handle, ANIM_SCRIPT_DEBUG_MODE_SERVER, eventsMode);
  }
}

/*
==============
CG_SeverCmdMP_ATClientDebugState
==============
*/
void CG_SeverCmdMP_ATClientDebugState(const LocalClientNum_t localClientNum, const int fromClientNum, const char *state)
{
  __int64 v3; 
  int v4; 
  char *i; 
  char *v6; 
  char *v7; 
  const char *v8; 
  int v9; 
  const char *SMName; 
  int v11; 
  const char *StateName; 
  char *saveptrctx[2]; 
  char dest[512]; 

  if ( fromClientNum >= 0 )
  {
    v3 = fromClientNum;
    if ( (unsigned int)fromClientNum < 0xC8 )
    {
      v4 = 0;
      Core_strcpy_truncate(dest, 0x200ui64, state);
      saveptrctx[0] = NULL;
      for ( i = I_strtok_r(dest, ";", saveptrctx); i; i = I_strtok_r(NULL, ";", saveptrctx) )
      {
        v6 = strtok(i, ":");
        v7 = strtok(NULL, ":");
        v8 = v7;
        if ( !v6 )
          break;
        if ( !v7 )
          break;
        v9 = atoi(v6);
        SMName = ATClient_GetSMName(v9);
        v11 = atoi(v8);
        StateName = ATClient_GetStateName(v11);
        v4 += Com_sprintf_truncate(&s_remoteATClientStates[v3][v4], 512i64 - v4, "%s:%s\n", SMName, StateName);
      }
    }
  }
}

/*
==============
CgDrawDebugMP::DrawAnimationOverlays
==============
*/
void CgDrawDebugMP::DrawAnimationOverlays(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  int integer; 
  const dvar_t *v17; 
  int v18; 
  float v19; 
  AnimScriptDebugMode v20; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  bool enabled; 
  const dvar_t *v30; 
  float v31; 
  float yPos; 

  yPos = 0.0;
  CG_DrawDebug_DrawScriptedAnims(localClientNum, &yPos);
  v3 = DVARINT_cg_drawBoneVisibility;
  if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer >= 0 )
  {
    v4 = DVARINT_cg_drawBoneVisibility;
    if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    CG_DrawDebug_DrawBoneVisibility(localClientNum, v4->current.integer, &yPos);
  }
  v5 = DVARINT_cg_debugCharacterController;
  if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer >= 0 )
  {
    v6 = DVARINT_cg_debugCharacterController;
    if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    CG_DrawDebug_CharacterController(localClientNum, v6->current.integer, &yPos);
  }
  v7 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer >= 4 )
    CG_DrawDebug_DrawEntityOverlay(localClientNum);
  v8 = DVARINT_cg_dumpAnimsToScreen;
  if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer >= 0 )
  {
    v9 = DVARINT_cg_dumpAnimsToScreen;
    v10 = yPos;
    if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( CG_DrawDebug_DrawAnims(localClientNum, v9->current.integer, v10) )
      yPos = yPos + 230.0;
  }
  v11 = DVARINT_cg_dumpAnimsToScreen2;
  if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer >= 0 )
  {
    v12 = DVARINT_cg_dumpAnimsToScreen2;
    v13 = yPos;
    if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( CG_DrawDebug_DrawAnims(localClientNum, v12->current.integer, v13) )
      yPos = yPos + 230.0;
  }
  v14 = DVARINT_animscript_debug;
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer >= 0 )
  {
    v15 = DVARINT_animscript_debug;
    if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    v17 = DCONST_DVARINT_animscript_debug_mode;
    if ( !DCONST_DVARINT_animscript_debug_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = v17->current.integer;
    switch ( v18 )
    {
      case 0:
        v19 = yPos;
        v20 = ANIM_SCRIPT_DEBUG_MODE_BOTH;
LABEL_56:
        CG_DrawDebug_PlayerAnimScriptInfo_Client(localClientNum, v19, integer, v20);
        break;
      case 1:
        CG_DrawDebug_PlayerAnimScriptInfo_Server(localClientNum, yPos, integer, ANIM_SCRIPT_DEBUG_MODE_BOTH);
        break;
      case 2:
        CG_DrawDebug_PlayerAnimScriptInfo_Server(localClientNum, yPos, integer, ANIM_SCRIPT_DEBUG_MODE_SERVER);
        _XMM0 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_animscript_debug_show_conditions, "animscript_debug_show_conditions");
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_155_0);
        __asm { vblendvps xmm4, xmm1, xmm2, xmm3 }
        v19 = *(float *)&_XMM4 + yPos;
        yPos = *(float *)&_XMM4 + yPos;
        v20 = ANIM_SCRIPT_DEBUG_MODE_CLIENT;
        goto LABEL_56;
    }
    yPos = yPos + 230.0;
  }
  v25 = DVARINT_playerasm_debugMode;
  if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer >= 0 )
  {
    v26 = DVARINT_playerasm_debugMode;
    if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer )
      CG_DrawDebug_PlayerASM_ExecutionOverlay(localClientNum);
  }
  v27 = DVARINT_cg_dumpBlendSpaces;
  if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer >= 0 )
  {
    v28 = DVARBOOL_cg_dumpblendspaces_coverage;
    if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    enabled = v28->current.enabled;
    v30 = DVARINT_cg_dumpBlendSpaces;
    v31 = yPos;
    if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    CG_DrawDebug_DrawBlendSpaces(localClientNum, v30->current.integer, 10.0, v31, enabled);
  }
}

/*
==============
CgDrawDebugMP::DrawClientNetPerf
==============
*/
float CgDrawDebugMP::DrawClientNetPerf(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v7; 
  cg_t *LocalClientGlobals; 
  double CornerFarRight; 
  float v10; 
  const char *text; 
  double CornerLabelWidth; 
  double v13; 
  float v14; 
  const char *v15; 
  double v16; 
  double v17; 
  float v18; 
  const char *v19; 
  double v20; 
  double v21; 
  float v22; 
  const char *v23; 
  double v24; 
  double v25; 
  float v26; 
  const char *v27; 
  double v28; 
  double v29; 
  float v30; 
  const char *v31; 
  double v32; 
  double v33; 

  if ( !CG_ClientNetPerf_IsSystemEnabled() )
    return y;
  v7 = DVARBOOL_cg_drawClientNetPerf;
  if ( !DVARBOOL_cg_drawClientNetPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientNetPerf") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    return y;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v10 = *(float *)&CornerFarRight;
  text = j_va("%d", (unsigned int)(int)(float)((float)LocalClientGlobals->predictedPlayerState.netPerf.pingMs * 3.9215686));
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " ping");
  v13 = CgDrawDebug::CornerPrint(this, scrPlace, v10, y, *(float *)&CornerLabelWidth, text, " ping", &colorWhite);
  v14 = y + *(float *)&v13;
  v15 = j_va("%d", (unsigned int)(int)(float)((float)LocalClientGlobals->predictedPlayerState.netPerf.maxExtrapolationMs * 3.9215686));
  v16 = CgDrawDebug::GetCornerLabelWidth(this, " extrapolation");
  v17 = CgDrawDebug::CornerPrint(this, scrPlace, v10, v14, *(float *)&v16, v15, " extrapolation", &colorWhite);
  v18 = v14 + *(float *)&v17;
  v19 = j_va("%d", (unsigned int)(int)(float)((float)LocalClientGlobals->predictedPlayerState.netPerf.maxInterpolationMs * 3.9215686));
  v20 = CgDrawDebug::GetCornerLabelWidth(this, " interpolation");
  v21 = CgDrawDebug::CornerPrint(this, scrPlace, v10, v18, *(float *)&v20, v19, " interpolation", &colorWhite);
  v22 = v18 + *(float *)&v21;
  v23 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdReceivedTime);
  v24 = CgDrawDebug::GetCornerLabelWidth(this, " cmdReceived");
  v25 = CgDrawDebug::CornerPrint(this, scrPlace, v10, v22, *(float *)&v24, v23, " cmdReceived", &colorWhite);
  v26 = v22 + *(float *)&v25;
  v27 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdQueuedTime);
  v28 = CgDrawDebug::GetCornerLabelWidth(this, " cmdQueued");
  v29 = CgDrawDebug::CornerPrint(this, scrPlace, v10, v26, *(float *)&v28, v27, " cmdQueued", &colorWhite);
  v30 = v26 + *(float *)&v29;
  v31 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdDroppedCount);
  v32 = CgDrawDebug::GetCornerLabelWidth(this, " cmdDropped");
  v33 = CgDrawDebug::CornerPrint(this, scrPlace, v10, v30, *(float *)&v32, v31, " cmdDropped", &colorWhite);
  return *(float *)&v33 + v30;
}

/*
==============
CgDrawDebugMP::DrawEntitiesLoD
==============
*/
void CgDrawDebugMP::DrawEntitiesLoD(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  _QWORD *v2; 
  unsigned int v3; 
  LocalClientNum_t v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  const CgSnapshotMP *NextSnap; 
  const dvar_t *v10; 
  float v11; 
  const vec3_t *v12; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_z; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v14; 
  bool v15; 
  unsigned int v16; 
  bool v17; 
  char v18; 
  unsigned __int64 v19; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  float v25; 
  const char *v26; 
  bool v27; 
  __int64 v28; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  __int64 depthTest; 
  __int64 duration; 
  int v33; 
  vec3_t *p_origin; 
  __int64 v35; 
  __int64 v36; 
  LocalClientNum_t v37; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 
  char dest[32]; 

  v2 = NtCurrentTeb()->Reserved1[11];
  v3 = 0;
  v4 = localClientNum;
  v37 = localClientNum;
  v5 = 0;
  v6 = 0;
  v35 = 0i64;
  v7 = 0;
  v8 = v2[tls_index];
  v36 = 0i64;
  if ( dword_151446978 > *(_DWORD *)(v8 + 1772) )
  {
    j__Init_thread_header(&dword_151446978);
    if ( dword_151446978 == -1 )
    {
      s_color[0] = colorGreen;
      s_color[1] = colorRed;
      j__Init_thread_footer(&dword_151446978);
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(v4);
  NextSnap = CG_SnapshotMP_GetNextSnap(v4);
  if ( !NextSnap )
    NextSnap = CG_SnapshotMP_GetPrevSnap(v4);
  v10 = DVARFLT_sv_netfieldHighLoDDistSq;
  if ( !DVARFLT_sv_netfieldHighLoDDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_netfieldHighLoDDistSq") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = fsqrt(v10->current.value);
  v12 = (const vec3_t *)NextSnap->GetPlayerState(&NextSnap->snapshot_t, (const LocalClientNum_t)v4);
  CG_DebugSphere(v12 + 4, v11, &colorRed, 0, 0);
  if ( (NextSnap->snapFlags & 8) == 0 )
  {
    v33 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      p_z = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)&NextSnap->entities[0].lerp.pos.trBase.z;
      do
      {
        v14 = p_z - 9;
        if ( p_z != (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)36 )
        {
          if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
            __debugbreak();
          v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_z - 6, ACTIVE, 0x1Eu);
          v16 = SLOWORD(v14->m_flags[0]);
          v17 = v15;
          if ( v16 >= 0x800 )
          {
            LODWORD(duration) = 2048;
            LODWORD(depthTest) = SLOWORD(v14->m_flags[0]);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", depthTest, duration) )
              __debugbreak();
          }
          v18 = v16;
          v19 = (unsigned __int64)v16 >> 5;
          v20 = p_z - 5;
          v21 = NextSnap->entitiesLoD.array[v19] & (0x80000000 >> (v18 & 0x1F));
          if ( p_z == (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)v20 + 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( v20->m_flags[0] == 4 )
          {
            v22 = p_z[-1].m_flags[0];
            p_origin = &origin;
            v23 = v22 ^ p_z->m_flags[0];
            v24 = p_z[-2].m_flags[0] ^ s_trbase_aab_Y ^ v22;
            LODWORD(origin.v[2]) = s_trbase_aab_Z ^ v23;
            LODWORD(origin.v[1]) = v24;
            LODWORD(origin.v[0]) = p_z[-2].m_flags[0] ^ ~s_trbase_aab_X;
            memset(&p_origin, 0, sizeof(p_origin));
            *(float *)&p_origin = origin.v[0];
            if ( (LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&p_origin = origin.v[1], (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&p_origin = origin.v[2], (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            v25 = *(float *)p_z[-1].m_flags;
            LODWORD(origin.v[0]) = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>)p_z[-2].m_flags[0];
            LODWORD(origin.z) = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>)p_z->m_flags[0];
            origin.v[1] = v25;
          }
          CL_AddDebugBox(&LocalClientGlobals->refdef.view.axis, &origin, &s_boxLower, &s_boxUpper, (const vec4_t *)((char *)s_color + (v21 != 0 ? 0x10 : 0)), 0, 0, 0);
          v26 = j_va("%d /%d", (unsigned int)SLOWORD(v14->m_flags[0]), (unsigned int)SLOWORD(p_z[-7].m_flags[0]));
          CL_AddDebugString(&origin, (const vec4_t *)((char *)s_color + (v21 != 0 ? 0x10 : 0)), 1.0, v26, 0, 0);
          v27 = v21 != 0;
          v5 = v33;
          v28 = v27 ? 4 : 0;
          if ( v17 )
            ++*(_DWORD *)((char *)&v36 + v28);
          else
            ++*(_DWORD *)((char *)&v35 + v28);
        }
        ++v5;
        p_z += 62;
        v33 = v5;
      }
      while ( v5 < NextSnap->numEntities );
      v5 = HIDWORD(v35);
      v3 = v35;
      v7 = HIDWORD(v36);
      v6 = v36;
      v4 = v37;
    }
  }
  ActivePlacement = ScrPlace_GetActivePlacement(v4);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.2);
  Com_sprintf<32>((char (*)[32])dest, "entities Low LoD: %d (%d)", v3, v6);
  UI_DrawText(ActivePlacement, dest, 32, FontHandle, 0.0, 20.0, 1, 1, 0.30000001, s_color, 3);
  Com_sprintf<32>((char (*)[32])dest, "entities High LoD: %d (%d)", (unsigned int)v5, v7);
  UI_DrawText(ActivePlacement, dest, 32, FontHandle, 0.0, 35.0, 1, 1, 0.30000001, &s_color[1], 3);
}

/*
==============
CgDrawDebugMP::DrawGameMsgWindows
==============
*/
void CgDrawDebugMP::DrawGameMsgWindows(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ;
}

/*
==============
CgDrawDebugMP::DrawTransientOverlays
==============
*/
void CgDrawDebugMP::DrawTransientOverlays(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  __int128 v2; 
  const dvar_t *v4; 
  float y; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int i; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned __int16 WorldTransientIndexFromZoneIndex; 
  unsigned int MPAttachmentAvailCount; 
  unsigned int v17; 
  unsigned int MPCustomizationAvailCount; 
  unsigned int MPPhysicsAvailCount; 
  unsigned int MPInfilAvailCount; 
  unsigned int LODFileCount; 
  unsigned int v22; 
  GfxFont *v23; 
  const ScreenPlacement *v24; 
  __int64 v25; 
  char *fmt; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  vec4_t color; 
  char dest[512]; 
  __int128 v36; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) )
  {
    v4 = DVARBOOL_cg_drawTransients;
    if ( !DVARBOOL_cg_drawTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      v36 = v2;
      y = FLOAT_425_0;
      color = (vec4_t)_xmm;
      scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
      font = UI_GetFontHandle(scrPlace, 0, 0.58333331);
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      for ( i = 0; i < 0x7A4; ++i )
      {
        if ( DB_Zones_IsValidZoneIndex(i) )
        {
          ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
          if ( (ZoneFlagsFromIndex & 0x3800000) != 0 )
          {
            ++v11;
          }
          else if ( (ZoneFlagsFromIndex & 0xFF000) != 0 )
          {
            if ( (ZoneFlagsFromIndex & 0x80000) != 0 )
            {
              ++v6;
            }
            else if ( (ZoneFlagsFromIndex & 0x8000) != 0 )
            {
              WorldTransientIndexFromZoneIndex = DB_Zones_GetWorldTransientIndexFromZoneIndex(i);
              if ( CL_TransientsWorldMP_IsLOD0(WorldTransientIndexFromZoneIndex) )
                ++v12;
              ++v8;
            }
            else if ( (ZoneFlagsFromIndex & 0x10000) != 0 )
            {
              ++v9;
            }
            else if ( (ZoneFlagsFromIndex & 0x60000) != 0 )
            {
              ++v10;
            }
            else
            {
              ++v7;
            }
          }
        }
      }
      v31 = v10;
      v30 = v9;
      v29 = v8;
      v28 = v7;
      v27 = v12;
      MPAttachmentAvailCount = DB_Transients_GetMPAttachmentAvailCount();
      v17 = DB_Transients_GetMPWeaponAvailCount() + MPAttachmentAvailCount;
      MPCustomizationAvailCount = DB_Transients_GetMPCustomizationAvailCount();
      MPPhysicsAvailCount = DB_Transients_GetMPPhysicsAvailCount();
      MPInfilAvailCount = DB_Transients_GetMPInfilAvailCount();
      LODFileCount = CL_TransientsWorldMP_GetLODFileCount(0);
      v22 = CL_TransientsWorldMP_GetLODFileCount(1u);
      if ( MPCustomizationAvailCount )
      {
        LODWORD(fmt) = MPCustomizationAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Customization Transients", v6, fmt);
        v23 = font;
        v24 = scrPlace;
        UI_DrawText(scrPlace, dest, 512, font, -7.5, 425.0, 1, 1, 0.18000001, &color, 3);
        y = FLOAT_418_0;
      }
      else
      {
        v24 = scrPlace;
        v23 = font;
      }
      if ( v17 )
      {
        LODWORD(fmt) = v17;
        Com_sprintf(dest, 0x200ui64, "%u / %u Weapon Transients", v28, fmt);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
        y = y + -7.0;
      }
      if ( LODFileCount )
      {
        LODWORD(fmt) = LODFileCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u World LOD0 Transients", v27, fmt);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
        y = y + -7.0;
      }
      if ( v22 )
      {
        v25 = v29 - v27;
        LODWORD(fmt) = v22;
        if ( v29 <= v27 )
          v25 = 0i64;
        Com_sprintf(dest, 0x200ui64, "%u / %u World LOD1 Transients", v25, fmt);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
        y = y + -7.0;
      }
      if ( MPPhysicsAvailCount )
      {
        LODWORD(fmt) = MPPhysicsAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Physics Transients", v30, fmt);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
        y = y + -7.0;
      }
      if ( MPInfilAvailCount )
      {
        LODWORD(fmt) = MPInfilAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Infil Transients", v31, fmt);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
        y = y + -7.0;
      }
      if ( v11 )
      {
        Com_sprintf(dest, 0x200ui64, "%u Preload Transients", v11);
        UI_DrawText(v24, dest, 512, v23, -7.5, y, 1, 1, 0.18000001, &color, 3);
      }
    }
  }
}

/*
==============
CgDrawDebugMP::PrintAntilagInfo
==============
*/
float CgDrawDebugMP::PrintAntilagInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  return y;
}

/*
==============
CgDrawDebugMP::PrintEntityDebugInfo
==============
*/
float CgDrawDebugMP::PrintEntityDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  float v7; 
  const dvar_t *v8; 
  double CornerLabelWidth; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  const vec4_t *color; 
  float v15; 
  float v16; 
  double CornerFarRight; 
  double v18; 
  char *fmt; 
  char *text; 
  char *label; 
  unsigned int outTotalCount; 
  unsigned int outMaxPerSnapshotCount; 
  unsigned int outMaxPerClientCount; 
  unsigned int outHighestClientVisibleCount; 
  char dest[64]; 

  v4 = DVARINT_cg_drawFPS;
  v7 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v8 = DVARBOOL_cg_drawentitycounts;
    if ( !DVARBOOL_cg_drawentitycounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawentitycounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && Com_IsAnyLocalServerRunning() )
    {
      SV_MainMP_GetDebugEntityCounts(&outHighestClientVisibleCount, &outTotalCount, &outMaxPerSnapshotCount, &outMaxPerClientCount);
      if ( outMaxPerSnapshotCount )
      {
        if ( outMaxPerClientCount && (outTotalCount || outHighestClientVisibleCount) )
        {
          CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " entities");
          v10 = *(float *)&CornerLabelWidth;
          v11 = (float)outMaxPerSnapshotCount;
          v12 = v11 * 0.85000002;
          v13 = (float)outTotalCount;
          if ( v13 < v12 )
          {
            v15 = (float)outHighestClientVisibleCount;
            v16 = (float)outMaxPerClientCount;
            if ( v15 < v16 )
            {
              color = &colorYellow;
              if ( v15 < (float)(v16 * 0.85000002) )
                color = &colorWhite;
            }
            else
            {
              color = &colorOrangeHeat;
            }
          }
          else
          {
            color = &colorRed;
          }
          LODWORD(label) = outMaxPerSnapshotCount;
          LODWORD(text) = outTotalCount;
          LODWORD(fmt) = outMaxPerClientCount;
          Com_sprintf(dest, 0x40ui64, "CL %i / %i SV %i / %i", outHighestClientVisibleCount, fmt, text, label);
          CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v18 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v10, dest, " entities", color);
          return y + *(float *)&v18;
        }
      }
    }
  }
  return v7;
}

/*
==============
CgDrawDebugMP::PrintGameBattlesDebugInfo
==============
*/
float CgDrawDebugMP::PrintGameBattlesDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const char *text; 
  double CornerFarRight; 
  double v9; 
  float v10; 
  const char *AsyncTaskStateNameDebugString; 
  double v12; 
  double v13; 

  if ( !GameBattles_IsScreenDebugEnabled() )
    return y;
  text = GameBattles_GetMatchJoinStateNameDebugString(localClientNum);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v9 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, 100.0, text, " MLG Join State", &colorWhite);
  v10 = y + *(float *)&v9;
  AsyncTaskStateNameDebugString = GameBattles_GetAsyncTaskStateNameDebugString(localClientNum);
  v12 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v13 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v12, v10, 100.0, AsyncTaskStateNameDebugString, " MLG Async Task", &colorWhite);
  return *(float *)&v13 + v10;
}

/*
==============
CgDrawDebugMP::PrintMPDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintMPDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v4; 
  __int64 v6; 
  __int128 v8; 
  double CornerFarRight; 
  float v10; 
  double CornerLabelWidth; 
  float v12; 
  int ControllerFromClient; 
  const char *v14; 
  bool HaveStats; 
  const char *v16; 
  const char *v17; 
  double v18; 
  __int128 v19; 
  const char *MatchIdString; 
  double v21; 
  const dvar_t *v22; 
  cg_t *v23; 
  double v24; 
  float v25; 
  const char *v26; 
  double v27; 
  double v28; 
  const snapshot_t *nextSnap; 
  const vec4_t *color; 
  __int128 v31; 
  const char *v32; 
  double v33; 
  float v34; 
  double v35; 
  const snapshot_t *snap; 
  const char *v37; 
  double v38; 
  double v39; 
  const snapshot_t *v40; 
  const char *v41; 
  double v42; 
  double v43; 
  __int128 v44; 
  const dvar_t *v45; 
  int i; 
  characterInfo_t *CharacterInfo; 
  const char *v48; 
  double v49; 
  __int128 v50; 
  char *text; 
  char *texta; 
  char *textb; 
  char *label; 
  char *labela; 
  char *labelb; 

  v4 = DVARBOOL_cg_drawStatsSource;
  v6 = localClientNum;
  v8 = *(_OWORD *)&y;
  if ( !DVARBOOL_cg_drawStatsSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStatsSource") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v10 = *(float *)&CornerFarRight;
    CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
    v12 = *(float *)&CornerLabelWidth;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
    v14 = "offline";
    if ( LiveStorage_GetActiveStatsSource(ControllerFromClient) != STATS_OFFLINE )
      v14 = "online";
    HaveStats = LiveStorage_DoWeHaveStats(ControllerFromClient);
    v16 = " (not fetched)";
    if ( HaveStats )
      v16 = (char *)&queryFormat.fmt + 3;
    v17 = j_va("%s%s", v14, v16);
    v18 = CgDrawDebug::CornerPrint(this, scrPlace, v10, *(float *)&y, *(float *)&CornerLabelWidth, v17, " stats", &colorWhite);
    v19 = *(_OWORD *)&y;
    *(float *)&v19 = *(float *)&y + *(float *)&v18;
    MatchIdString = OnlineMatchId::GetMatchIdString();
    v21 = CgDrawDebug::CornerPrint(this, scrPlace, v10, *(float *)&y + *(float *)&v18, v12, MatchIdString, " match id", &colorWhite);
    *(float *)&v19 = *(float *)&v19 + *(float *)&v21;
    v8 = v19;
  }
  v22 = DVARBOOL_cg_drawSystemTime;
  if ( !DVARBOOL_cg_drawSystemTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSystemTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    if ( (unsigned int)v6 >= 2 )
    {
      LODWORD(label) = 2;
      LODWORD(text) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
      LODWORD(labela) = 2;
      LODWORD(texta) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", texta, labela) )
        __debugbreak();
    }
    if ( !clientUIActives[v6].frontEndSceneState[0] )
    {
      if ( (unsigned int)v6 >= 2 )
      {
        LODWORD(label) = 2;
        LODWORD(text) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
          __debugbreak();
      }
      if ( clientUIActives[v6].connectionState == CA_ACTIVE )
      {
        if ( (unsigned int)v6 >= cg_t::ms_allocatedCount )
        {
          LODWORD(label) = cg_t::ms_allocatedCount;
          LODWORD(text) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", text, label) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
        {
          LODWORD(label) = cg_t::ms_allocatedType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", label) )
            __debugbreak();
        }
        v23 = cg_t::ms_cgArray[v6];
        ClActiveClientMP::GetClientMP((const LocalClientNum_t)v6);
        v24 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v25 = *(float *)&v24;
        v26 = j_va("%i", (unsigned int)v23->oldTime);
        v27 = CgDrawDebug::GetCornerLabelWidth(this, " cOldTime");
        v28 = CgDrawDebug::CornerPrint(this, scrPlace, v25, *(float *)&v8, *(float *)&v27, v26, " cOldTime", &colorWhite);
        nextSnap = v23->nextSnap;
        color = &colorWhite;
        v31 = v8;
        *(float *)&v31 = *(float *)&v8 + *(float *)&v28;
        if ( nextSnap )
        {
          color = &colorRed;
          if ( v23->time < nextSnap->serverTime )
            color = &colorWhite;
        }
        v32 = j_va("%i", (unsigned int)v23->time);
        v33 = CgDrawDebug::GetCornerLabelWidth(this, " cCurTime");
        v34 = *(float *)&v33;
        v35 = CgDrawDebug::CornerPrint(this, scrPlace, v25, *(float *)&v31, *(float *)&v33, v32, " cCurTime", color);
        snap = v23->snap;
        *(float *)&v31 = *(float *)&v31 + *(float *)&v35;
        v8 = v31;
        if ( snap )
        {
          v37 = j_va("%i", (unsigned int)snap->serverTime);
          v38 = CgDrawDebug::GetCornerLabelWidth(this, " snapTime");
          v34 = *(float *)&v38;
          v39 = CgDrawDebug::CornerPrint(this, scrPlace, v25, *(float *)&v31, *(float *)&v38, v37, " snapTime", &colorWhite);
          *(float *)&v31 = *(float *)&v31 + *(float *)&v39;
          v8 = v31;
        }
        v40 = v23->nextSnap;
        if ( v40 )
        {
          v41 = j_va("%i", (unsigned int)v40->serverTime);
          v42 = CgDrawDebug::GetCornerLabelWidth(this, " nextTime");
          v34 = *(float *)&v42;
          v43 = CgDrawDebug::CornerPrint(this, scrPlace, v25, *(float *)&v8, *(float *)&v42, v41, " nextTime", &colorWhite);
          v44 = v8;
          *(float *)&v44 = *(float *)&v8 + *(float *)&v43;
          v8 = v44;
        }
        v45 = DCONST_DVARBOOL_scriptedAsmDebug;
        if ( !DCONST_DVARBOOL_scriptedAsmDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptedAsmDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        if ( v45->current.enabled )
        {
          for ( i = 0; i < cls.maxClients; ++i )
          {
            if ( v23->IsMP(v23) )
            {
              if ( i >= v23[1].predictedPlayerState.rxvOmnvars[64].timeModified )
              {
                LODWORD(labelb) = v23[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                LODWORD(textb) = i;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", textb, labelb) )
                  __debugbreak();
              }
              CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v23[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * i);
            }
            else
            {
              CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v23, i);
            }
            if ( CharacterInfo && CharacterInfo->infoValid )
            {
              v48 = j_va("%i", (unsigned int)CharacterInfo->playerASM_scripted_anim_start_time);
              v49 = CgDrawDebug::CornerPrint(this, scrPlace, v25, *(float *)&v8, v34, v48, (const char *)&queryFormat.fmt + 3, &colorWhite);
              v50 = v8;
              *(float *)&v50 = *(float *)&v8 + *(float *)&v49;
              v8 = v50;
            }
          }
        }
      }
    }
  }
  return *(float *)&v8;
}

/*
==============
CgDrawDebugMP::PrintMpFrontendDebugInfo
==============
*/
float CgDrawDebugMP::PrintMpFrontendDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 

  v7 = CgDrawDebug::PrintFrontendUpperRightDebugInfo(this, localClientNum, y);
  v8 = CgDrawDebug::PrintFrontendSceneDebugInfo(this, localClientNum, scrPlace, *(float *)&v7);
  v9 = CgDrawDebugMP::PrintEntityDebugInfo(this, localClientNum, scrPlace, *(float *)&v8);
  v10 = CgDrawDebugMP::PrintPreloadDebugInfo(this, localClientNum, scrPlace, *(float *)&v9);
  v11 = CgDrawDebugMP::PrintStreamingPos(this, localClientNum, scrPlace, *(float *)&v10);
  this->DrawAnimationOverlays(this, localClientNum);
  return *(float *)&v11;
}

/*
==============
CgDrawDebugMP::PrintPartyDebugInfo
==============
*/
float CgDrawDebugMP::PrintPartyDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  const dvar_t *v8; 
  double v9; 
  double CornerLabelWidth; 
  float v11; 
  double CornerFarRight; 
  double v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  const char *text; 
  double v19; 
  double v20; 

  v4 = DVARSTR_party_hostname;
  if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 909, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_party_hostname, \"party_hostname\" ))", (const char *)&queryFormat, "Dvar_GetString( party_hostname )") )
    __debugbreak();
  v8 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.integer )
    return y;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
  v11 = *(float *)&CornerLabelWidth;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v13 = CgDrawDebug::CornerPrintCaption(this, scrPlace, *(float *)&CornerFarRight, y, v11, "- MP -", &colorGreenFaded);
  v14 = DVARSTR_party_hostname;
  v16 = y + *(float *)&v13;
  v15 = y + *(float *)&v13;
  if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( *(_BYTE *)v14->current.integer64 )
  {
    v17 = DVARSTR_party_hostname;
    if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    text = v17->current.string;
    v19 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v20 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v19, v16, v11, text, " g-host", &colorWhite);
    v15 = v16 + *(float *)&v20;
  }
  v9 = CgDrawDebugMP::PrintPartyMemberInfo(this, localClientNum, scrPlace, v15);
  return *(float *)&v9;
}

/*
==============
CgDrawDebugMP::PrintPartyMemberInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintPartyMemberInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __int128 v5; 
  double CornerLabelWidth; 
  float v8; 
  const dvar_t *VarByName; 
  unsigned __int8 BotsConnectType; 
  unsigned __int8 v11; 
  const char *v12; 
  double CornerFarRight; 
  double v14; 
  __int128 v15; 
  unsigned int v16; 
  unsigned __int8 *p_status; 
  double v18; 
  double v19; 
  const char *MemberStatus; 
  const char *MemberName; 
  bool v22; 
  const char *v23; 
  double v24; 
  __int128 v25; 
  double v26; 
  double v27; 
  char *fmt; 
  char *text; 
  int label; 
  char dest[64]; 

  LODWORD(v5) = LODWORD(y);
  if ( !g_partyData.inParty )
    return *(float *)&v5;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
  v8 = *(float *)&CornerLabelWidth;
  VarByName = Dvar_FindVarByName("OMSOSSSORO");
  if ( VarByName->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(bot_SystemStatus->type == DVAR_TYPE_ENUM)", (const char *)&queryFormat, "bot_SystemStatus->type == DVAR_TYPE_ENUM") )
    __debugbreak();
  BotsConnectType = BG_GetBotsConnectType();
  v11 = BotsConnectType;
  if ( (unsigned int)BotsConnectType >= VarByName->domain.enumeration.stringCount )
  {
    label = VarByName->domain.enumeration.stringCount;
    LODWORD(text) = BotsConnectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( botConnectType ) < (unsigned)( bot_SystemStatus->domain.enumeration.stringCount )", "botConnectType doesn't index bot_SystemStatus->domain.enumeration.stringCount\n\t%i not in [0, %i)", text, label) )
      __debugbreak();
  }
  v12 = *(const char **)(VarByName->domain.integer64.max + 8i64 * v11);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v14 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, *(float *)&y, v8, v12, " bots", &colorGreen);
  v15 = *(_OWORD *)&y;
  *(float *)&v15 = *(float *)&y + *(float *)&v14;
  v5 = v15;
  v16 = 0;
  p_status = &g_partyData.partyMembers[0].status;
  do
  {
    if ( *p_status )
    {
      MemberStatus = Party_GetMemberStatus(&g_partyData, v16);
      MemberName = Party_GetMemberName(&g_partyData, v16);
      v22 = !Party_IsHost(&g_partyData, v16);
      v23 = (char *)&queryFormat.fmt + 3;
      if ( !v22 )
        v23 = " (h)";
      LODWORD(fmt) = v16;
      Com_sprintf(dest, 0x40ui64, "%s %i%s ", MemberName, fmt, v23);
      v24 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v19 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v24, *(float *)&v5, v8, dest, MemberStatus, &colorWhite);
    }
    else
    {
      if ( !Party_IsHost(&g_partyData, v16) )
        goto LABEL_16;
      v18 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v19 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v18, *(float *)&v5, v8, "missing", " host", &colorRed);
    }
    v25 = v5;
    *(float *)&v25 = *(float *)&v5 + *(float *)&v19;
    v5 = v25;
LABEL_16:
    ++v16;
    p_status += 504;
  }
  while ( v16 < 0xC8 );
  if ( g_partyData.backingOut )
  {
    v26 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v27 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v26, *(float *)&v5, v8, "backing out", (const char *)&queryFormat.fmt + 3, &colorYellow);
    *(float *)&v5 = *(float *)&v5 + *(float *)&v27;
  }
  return *(float *)&v5;
}

/*
==============
CgDrawDebugMP::PrintPreloadDebugInfo
==============
*/
float CgDrawDebugMP::PrintPreloadDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  float v8; 
  const dvar_t *v9; 
  double CornerLabelWidth; 
  float v11; 
  double CornerFarRight; 
  double v13; 
  double v14; 
  float v15; 
  double v16; 
  double v17; 
  float v18; 
  double v19; 
  double v20; 
  const char *v21; 
  char v22; 
  double v23; 
  float v24; 
  const dvar_t *v25; 
  bool enabled; 
  double v27; 
  double v28; 
  const dvar_t *v29; 
  bool v30; 
  double v31; 
  const ScreenPlacement *v32; 
  CgDrawDebugMP *v33; 
  float v34; 
  float v35; 
  double v36; 
  const char *v37; 
  double v38; 
  double v39; 
  float v40; 
  double v41; 
  const dvar_t *v42; 
  double v43; 
  double v44; 
  const dvar_t *v45; 
  double v46; 
  double v47; 
  float v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  char *text; 
  char *label; 
  char outString[1024]; 

  v4 = DVARINT_cg_drawFPS;
  v8 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v9 = DVARBOOL_cg_drawpreload;
    if ( !DVARBOOL_cg_drawpreload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpreload") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      if ( CL_UIStreaming_IsStartingMatch() )
      {
        CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " game");
        v11 = *(float *)&CornerLabelWidth;
        CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v13 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v11, "starting", " game", &colorGreen);
        v8 = y + *(float *)&v13;
      }
      if ( Com_GameStart_GetShortLoadInfoString(outString, 0x400u) )
      {
        v14 = CgDrawDebug::GetCornerLabelWidth(this, " gamestart");
        v15 = *(float *)&v14;
        v16 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v17 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v16, v8, v15, outString, " gamestart", &colorWhite);
        v18 = v8 + *(float *)&v17;
        v8 = v8 + *(float *)&v17;
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(label) = 2;
          LODWORD(text) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
            __debugbreak();
        }
        if ( localClientNum < cgs_t::ms_allocatedCount )
        {
          CL_CGameMP_DebugDrawIsNearCommandOverflow(localClientNum, outString, 0x400u);
          v19 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v20 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, *(float *)&v19 - 5.0, v18, outString, &colorWhite);
          v8 = v18 + *(float *)&v20;
        }
      }
      v21 = " preload";
      v22 = 1;
      v23 = CgDrawDebug::GetCornerLabelWidth(this, " preload");
      v24 = *(float *)&v23;
      if ( !CG_FrontendScene_AreRequiredTransientsLoaded() )
      {
        v25 = DVARBOOL_frontEndPrioritizeLevelLoadExceptNeededTransients;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadExceptNeededTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadExceptNeededTransients") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        enabled = v25->current.enabled;
        v27 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        if ( enabled )
          v28 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v27, v8, v24, "trans block", " preload", &colorYellow);
        else
          v28 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v27, v8, v24, "trans want", " preload", &colorWhite);
        v8 = v8 + *(float *)&v28;
        v22 = 0;
      }
      if ( Com_FrontEndScene_NeedsStreamingForVisiblity() )
      {
        v29 = DVARBOOL_frontEndPrioritizeLevelLoadExpectStreamingVisibility;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadExpectStreamingVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadExpectStreamingVisibility") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.enabled;
        v31 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v32 = scrPlace;
        v33 = this;
        v34 = v8;
        v35 = *(float *)&v31;
        if ( v30 )
        {
          v36 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v31, v8, v24, "stream block", " preload", &colorWhite);
LABEL_44:
          v8 = v8 + *(float *)&v36;
LABEL_45:
          v47 = CgDrawDebug::GetCornerLabelWidth(this, " paused preload");
          v48 = *(float *)&v47;
          if ( Com_FrontEndScene_NeedsDatabaseAccess() )
          {
            v49 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            v50 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v49, v8, v48, "database", " paused preload", &colorYellow);
            v8 = v8 + *(float *)&v50;
          }
          if ( CL_TransientsMP_NeedsProcessing() )
          {
            v51 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            v52 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v51, v8, v48, "transients", " paused preload", &colorYellow);
            v8 = v8 + *(float *)&v52;
          }
          if ( CL_UIStreaming_NeedsDatabaseAccess() )
          {
            v53 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            v54 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v53, v8, v48, "uistreaming", " paused preload", &colorYellow);
            return v8 + *(float *)&v54;
          }
          return v8;
        }
        v37 = "stream want";
      }
      else
      {
        if ( !v22 )
          goto LABEL_45;
        v38 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v39 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v38, v8, v24, "active", " preload", &colorGreen);
        v21 = " preload override";
        v40 = v8 + *(float *)&v39;
        v8 = v8 + *(float *)&v39;
        v41 = CgDrawDebug::GetCornerLabelWidth(this, " preload override");
        v42 = DVARBOOL_frontEndPrioritizeLevelLoadTransients;
        v24 = *(float *)&v41;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadTransients") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v42);
        if ( !v42->current.enabled )
        {
          v43 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v44 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v43, v40, v24, "transient", " preload override", &colorYellow);
          v8 = v40 + *(float *)&v44;
        }
        v45 = DVARBOOL_frontEndPrioritizeLevelLoadImages;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadImages") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        if ( v45->current.enabled )
          goto LABEL_45;
        v46 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v35 = *(float *)&v46;
        v37 = "image";
        v32 = scrPlace;
        v34 = v8;
        v33 = this;
      }
      v36 = CgDrawDebug::CornerPrint(v33, v32, v35, v34, v24, v37, v21, &colorYellow);
      goto LABEL_44;
    }
  }
  return v8;
}

/*
==============
CgDrawDebugMP::PrintServerDebugInfo
==============
*/
float CgDrawDebugMP::PrintServerDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  __int64 v5; 
  const dvar_t *v8; 
  double CornerLabelWidth; 
  int svHudOutlineUsage; 
  float v11; 
  float v12; 
  const vec4_t *color; 
  double CornerFarRight; 
  double v15; 
  char *fmt; 
  char dest[64]; 

  v4 = DVARINT_cg_drawFPS;
  v5 = localClientNum;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.integer )
    return y;
  v8 = DVARBOOL_cg_drawservercounts;
  if ( !DVARBOOL_cg_drawservercounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawservercounts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return y;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " outlines");
  LODWORD(fmt) = 63;
  svHudOutlineUsage = s_serverCollectedInfo[v5].svHudOutlineUsage;
  v11 = *(float *)&CornerLabelWidth;
  Com_sprintf(dest, 0x40ui64, "%i / %i", s_serverCollectedInfo[v5].svHudOutlineUsage, fmt);
  v12 = (float)svHudOutlineUsage;
  color = &colorWhite;
  if ( v12 >= 53.550003 )
    color = &colorRed;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v15 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v11, dest, " outlines", color);
  return *(float *)&v15 + y;
}

/*
==============
CgDrawDebugMP::PrintSessionDebugInfo
==============
*/
float CgDrawDebugMP::PrintSessionDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double CornerLabelWidth; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  PrivatePartySessionHSM *Instance; 
  GameLobbySessionHSM *v13; 
  PrivatePartySessionHSM *v14; 
  const char *text; 
  double CornerFarRight; 
  double v17; 
  float v18; 
  double v19; 
  double v20; 
  float v21; 
  PrivatePartySessionHSM *v22; 
  const char *CurrentFrameStatusString; 
  double v24; 
  double v25; 
  float v26; 
  GameLobbySessionHSM *v27; 
  const char *CurrentStateString; 
  double v29; 
  double v30; 
  float v31; 
  double v32; 
  double v33; 
  float v34; 
  GameLobbySessionHSM *v35; 
  const char *v36; 
  double v37; 
  double v38; 
  char sessionIdStringOut[256]; 
  char v41[256]; 

  if ( !PlatformSessionsHSMEnabled() )
    return y;
  memset_0(sessionIdStringOut, 0, sizeof(sessionIdStringOut));
  memset_0(v41, 0, sizeof(v41));
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, "    HSM State");
  v7 = *(float *)&CornerLabelWidth;
  v8 = CgDrawDebug::GetCornerLabelWidth(this, "    SessionID");
  v9 = *(float *)&v8;
  v10 = CgDrawDebug::GetCornerLabelWidth(this, "    Frame Status");
  v11 = *(float *)&v10;
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::GetCurrentSessionIdString(Instance, sessionIdStringOut);
  v13 = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::GetCurrentSessionIdString(v13, v41);
  v14 = PrivatePartySessionHSM::GetInstance();
  text = PrivatePartySessionHSM::GetCurrentStateString(v14);
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v17 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v7, text, " PP HSM State", &colorWhite);
  v18 = y + *(float *)&v17;
  v19 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v20 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v19, v18, v9, sessionIdStringOut, " PP SessionID", &colorWhite);
  v21 = v18 + *(float *)&v20;
  v22 = PrivatePartySessionHSM::GetInstance();
  CurrentFrameStatusString = PrivatePartySessionHSM::GetCurrentFrameStatusString(v22);
  v24 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v25 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v24, v21, v11, CurrentFrameStatusString, " PP Frame Status", &colorWhite);
  v26 = v21 + *(float *)&v25;
  v27 = GameLobbySessionHSM::GetInstance();
  CurrentStateString = GameLobbySessionHSM::GetCurrentStateString(v27);
  v29 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v30 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v29, v26, v7, CurrentStateString, " GL HSM State", &colorWhite);
  v31 = v26 + *(float *)&v30;
  v32 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v33 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v32, v31, v9, v41, " GL SessionID", &colorWhite);
  v34 = v31 + *(float *)&v33;
  v35 = GameLobbySessionHSM::GetInstance();
  v36 = GameLobbySessionHSM::GetCurrentFrameStatusString(v35);
  v37 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v38 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v37, v34, v11, v36, " GL Frame Status", &colorWhite);
  return v34 + *(float *)&v38;
}

/*
==============
CgDrawDebugMP::PrintSnapshotInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintSnapshotInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const ScreenPlacement *v4; 
  __int64 v5; 
  CgDrawDebugMP *v6; 
  const dvar_t *v7; 
  cg_t *LocalClientGlobals; 
  double CornerFarRight; 
  float v10; 
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *v12; 
  int deltaNum; 
  double CornerLabelWidth; 
  const char *v15; 
  double v16; 
  __int128 v17; 
  double v18; 
  float v19; 
  SnapshotCollectedInfo *v20; 
  const char *v21; 
  double v22; 
  __int128 v23; 
  const dvar_t *v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  const char *v28; 
  unsigned int maxClients; 
  double v30; 
  __int128 v31; 
  int v32; 
  const char *v33; 
  double v34; 
  float v35; 
  __int64 v36; 
  const char *v37; 
  double v38; 
  float v39; 
  const char *v40; 
  double v41; 
  float v42; 
  unsigned int PacketBackupCount; 
  const char *v44; 
  double v45; 
  float v46; 
  const char *v47; 
  double v48; 
  float v49; 
  const char *v50; 
  double v51; 
  __int64 v52; 
  cgs_t *v53; 
  LocalClientNum_t v54; 
  CgEntitySystem *EntitySystem; 
  const cpose_t *v56; 
  unsigned __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  int v60; 
  __int128 v61; 
  _DWORD *v62; 
  char *v63; 
  LocalClientNum_t v64; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v69; 
  int v79; 
  float v80; 
  double v81; 
  float v82; 
  GfxFont *bigDevFont; 
  __int128 v84; 
  const dvar_t *v85; 
  const char *v86; 
  double v87; 
  float v88; 
  const char *v89; 
  double v90; 
  float v91; 
  const char *v92; 
  double v93; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *text; 
  char *texta; 
  char *textb; 
  char *textc; 
  char *label; 
  char *labela; 
  int v104; 
  vec4_t *color; 
  int v106[4]; 
  int v107[4]; 
  vec3_t worldPos; 
  LocalClientNum_t localClientNuma; 
  cgs_t *v110; 
  int v111[3]; 
  unsigned __int64 v112; 
  ScreenPlacement *scrPlacea; 
  SnapshotCollectedInfo *v114; 
  ClActiveClientMP *v115; 
  cg_t *v116; 
  __int64 v117; 
  CgDrawDebug *v118; 
  __int64 v119; 
  vec2_t outScreenPos; 
  char v121[128]; 
  char dest[512]; 
  char v123[512]; 
  char v124[512]; 
  char v125[512]; 
  char v126[512]; 

  v119 = -2i64;
  v4 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  v5 = localClientNum;
  localClientNuma = localClientNum;
  v6 = this;
  v118 = this;
  v112 = 24036i64 * (int)localClientNum;
  v114 = &g_snapshotCollectedInfo[v112 / 0x5DE4];
  v7 = DVARINT_cg_drawSnapshot;
  if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.integer )
    return *(float *)&y;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  v116 = LocalClientGlobals;
  if ( (unsigned int)v5 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(label) = cgs_t::ms_allocatedCount;
    LODWORD(text) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", text, label) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v5] )
  {
    LODWORD(label) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", label) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(label) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", label) )
      __debugbreak();
  }
  v110 = cgs_t::ms_cgsArray[v5];
  CornerFarRight = CgDrawDebug::GetCornerFarRight(v6, v4);
  v10 = *(float *)&CornerFarRight;
  ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v5);
  v115 = ClientMP;
  if ( (unsigned int)v5 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&label = cl_maxLocalClients;
    LODWORD(text) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
    __debugbreak();
  if ( !ClConnection::ms_connections[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
    __debugbreak();
  v12 = (ClConnectionMP *)ClConnection::ms_connections[v5];
  outScreenPos = (vec2_t)v12;
  deltaNum = ClientMP->snap.deltaNum;
  v104 = deltaNum;
  if ( deltaNum > 0 )
  {
    deltaNum = ClientMP->snap.messageNum - deltaNum;
    v104 = deltaNum;
    v12 = (ClConnectionMP *)outScreenPos;
  }
  if ( deltaNum <= 0 || (color = &colorWhite, ClConnectionMP::GetPacketBackupCount(v12) < deltaNum) )
    color = &colorRed;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(v6, " cl num");
  v15 = j_va("%i / %i", (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum, ClientMP->snap.numClients);
  v16 = CgDrawDebug::CornerPrint(v6, v4, v10, *(float *)&y, *(float *)&CornerLabelWidth, v15, " cl num", &colorWhite);
  v17 = *(_OWORD *)&y;
  *(float *)&v17 = *(float *)&y + *(float *)&v16;
  v18 = CgDrawDebug::GetCornerLabelWidth(v6, " time dilation");
  v19 = *(float *)&v18;
  v20 = v114;
  v21 = j_va("%i", (unsigned int)v114->serverTimeDilation);
  v22 = CgDrawDebug::CornerPrint(v6, v4, v10, *(float *)&v17, *(float *)&v18, v21, " time dilation", &colorWhite);
  *(float *)&v17 = *(float *)&v17 + *(float *)&v22;
  v23 = v17;
  v24 = DVARINT_cg_drawSnapshot;
  if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer == 2 )
  {
    v25 = 0;
    v117 = 0i64;
    v26 = 0;
    if ( Com_IsAnyLocalServerRunning() )
    {
      dest[0] = 0;
      v27 = 0;
      if ( cls.maxClients )
      {
        do
        {
          v28 = j_va(" %i", (unsigned int)v114->commandsProcessedOnSnapshot[v27]);
          I_strcat(dest, 0x100ui64, v28);
          if ( v26 == 8 || (maxClients = cls.maxClients, v27 == cls.maxClients - 1) )
          {
            v30 = CgDrawDebug::CornerPrint(v6, v4, v10, *(float *)&v23, v19, dest, " cmds", &colorWhite);
            v31 = v23;
            *(float *)&v31 = *(float *)&v23 + *(float *)&v30;
            v23 = v31;
            dest[0] = 0;
            v26 = -1;
            maxClients = cls.maxClients;
          }
          ++v27;
          ++v26;
        }
        while ( v27 < maxClients );
        deltaNum = v104;
        v25 = 0;
      }
    }
    v32 = 0;
    v121[0] = 0;
    v33 = S_BUFFER_TYPE_ID;
    do
    {
      LODWORD(fmt) = *v33;
      v32 += Com_sprintf(&v121[v32], 128i64 - v32, "%2d%c ", g_snapshotCollectedInfo[0].snapshotBufferUsagePercent[v112 - (_QWORD)S_BUFFER_TYPE_ID + (_QWORD)v33], fmt);
      ++v25;
      ++v33;
    }
    while ( v25 < 0xA );
    Com_sprintf(&v121[v32], 128i64 - v32, "%3df", g_snapshotCollectedInfo[v112 / 0x5DE4].snapshotFullFramePercent);
    v4 = scrPlacea;
    v6 = (CgDrawDebugMP *)v118;
    v34 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, *(float *)&v23, v19, v121, " snap bufs", &colorWhite);
    v35 = *(float *)&v23 + *(float *)&v34;
    v36 = (__int64)v116;
    v37 = j_va("%i", (unsigned int)v116->latestSnapshotNum);
    v38 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, *(float *)&v23 + *(float *)&v34, v19, v37, " snap num", &colorWhite);
    v39 = v35 + *(float *)&v38;
    v40 = j_va("%i", (unsigned int)v110->serverCommandSequence);
    v41 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, v39, v19, v40, " cmd", &colorWhite);
    v42 = v39 + *(float *)&v41;
    PacketBackupCount = ClConnectionMP::GetPacketBackupCount(*(ClConnectionMP **)&outScreenPos);
    v44 = j_va("%i/%i", (unsigned int)deltaNum, PacketBackupCount);
    v45 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, v42, v19, v44, " delta", color);
    v46 = v42 + *(float *)&v45;
    v47 = j_va("%i", (unsigned int)v115->snap.ping);
    v48 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, v46, v19, v47, " ms ping", &colorWhite);
    v49 = v46 + *(float *)&v48;
    v50 = j_va("%f", com_timescaleValue);
    v51 = CgDrawDebug::CornerPrint(v118, scrPlacea, v10, v49, v19, v50, " com_timescaleValue", &colorWhite);
    *(float *)&v23 = v49 + *(float *)&v51;
    if ( cls.maxClients > 0 )
    {
      LODWORD(v52) = 0;
      v53 = NULL;
      v110 = NULL;
      v54 = localClientNuma;
      do
      {
        if ( *(_DWORD *)(v36 + 468) != (_DWORD)v52 )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem(v54);
          if ( (unsigned int)v52 >= 0x800 )
          {
            LODWORD(labela) = 2048;
            LODWORD(texta) = v52;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", texta, labela) )
              __debugbreak();
          }
          v56 = (cpose_t *)((char *)&EntitySystem->m_entities[0].pose + (_QWORD)v53);
          if ( (*((_BYTE *)&EntitySystem->m_entities[0].flags + (_QWORD)v53) & 1) != 0 )
          {
            v57 = v112 + 112i64 * *(int *)((char *)&EntitySystem->m_entities[0].nextState.clientNum + (_QWORD)v53);
            Com_sprintf(dest, 0x200ui64, "Frame Interpolation: %f", *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].frameInterpolation + v57));
            Com_sprintf(v123, 0x200ui64, "Snaps: %.1f %.1f %.1f, %.1f %.1f %.1f", *(float *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevSnapOrigin.v + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevSnapOrigin.v[1] + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevSnapOrigin.v[2] + v57), *(float *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextSnapOrigin.v + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextSnapOrigin.v[1] + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextSnapOrigin.v[2] + v57));
            Com_sprintf(v124, 0x200ui64, "Pose: %.1f %.1f %.1f", *(float *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].poseOrigin.v + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].poseOrigin.v[1] + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].poseOrigin.v[2] + v57));
            if ( v57 == 0xFFFFFFFEAEBE51A4ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", v57 + 0x40000000 + 289517255, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            v58 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trType + v57);
            if ( (_DWORD)v58 == 4 )
            {
              color = (vec4_t *)v107;
              v107[2] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[1] + v57) ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[2] + v57) ^ s_trbase_aab_Z;
              v107[1] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v + v57) ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[1] + v57) ^ s_trbase_aab_Y;
              v107[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v + v57) ^ ~s_trbase_aab_X;
              memset(&color, 0, sizeof(color));
              if ( ((v107[0] & 0x7F800000) == 2139095040 || (v107[1] & 0x7F800000) == 2139095040 || (v107[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
              v58 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trType + v57);
            }
            else
            {
              v107[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v + v57);
              v107[1] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[1] + v57);
              v107[2] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[2] + v57);
            }
            LODWORD(textb) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trDuration + v57);
            LODWORD(fmta) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trTime + v57);
            Com_sprintf(v125, 0x200ui64, "PTraj: %d %d %d, %.1f %.1f %.1f, %.1f %.1f %.1f", v58, fmta, textb, *(float *)v107, *(float *)&v107[1], *(float *)&v107[2], *(float *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trDelta.v + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trDelta.v[1] + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trDelta.v[2] + v57));
            if ( v57 == 0xFFFFFFFEAEBE5180ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", v57 + 0x40000000 + 289517291, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            v59 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trType + v57);
            if ( (_DWORD)v59 == 4 )
            {
              color = (vec4_t *)v106;
              v60 = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[1] + v57);
              v106[2] = s_trbase_aab_Z ^ v60 ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[2] + v57);
              v106[1] = s_trbase_aab_Y ^ *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v + v57) ^ v60;
              v106[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v + v57) ^ ~s_trbase_aab_X;
              memset(&color, 0, sizeof(color));
              if ( ((v106[0] & 0x7F800000) == 2139095040 || (v106[1] & 0x7F800000) == 2139095040 || (v106[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
              v59 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trType + v57);
            }
            else
            {
              v106[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v + v57);
              v106[1] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[1] + v57);
              v106[2] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[2] + v57);
            }
            LODWORD(textc) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trDuration + v57);
            LODWORD(fmtb) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trTime + v57);
            Com_sprintf(v126, 0x200ui64, "NTraj: %d %d %d, %.1f %.1f %.1f, %.1f %.1f %.1f", v59, fmtb, textc, *(float *)v106, *(float *)&v106[1], *(float *)&v106[2], *(float *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trDelta.v + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trDelta.v[1] + v57), *(float *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trDelta.v[2] + v57));
            if ( dword_151446948 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
            {
              j__Init_thread_header(&dword_151446948);
              if ( dword_151446948 == -1 )
              {
                SCREEN_Y_OFFSET = SCREEN_LINE_HEIGHT + 1.0;
                j__Init_thread_footer(&dword_151446948);
              }
            }
            v61 = 0i64;
            v62 = (_DWORD *)(v36 + 26928);
            v63 = dest;
            color = (vec4_t *)5;
            v64 = localClientNuma;
            do
            {
              if ( !v56->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
                __debugbreak();
              FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v56->origin.Get_origin, v56);
              FunctionPointer_origin(&v56->origin.origin.origin, &worldPos);
              if ( v56->isPosePrecise )
              {
                _XMM0 = LODWORD(worldPos.v[0]);
                __asm { vcvtdq2pd xmm0, xmm0 }
                *((_QWORD *)&v69 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v69 = *(double *)&_XMM0 * 0.000244140625;
                _XMM1 = v69;
                __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                worldPos.v[0] = *(float *)&_XMM2;
                _XMM0 = LODWORD(worldPos.v[1]);
                __asm { vcvtdq2pd xmm0, xmm0 }
                *((_QWORD *)&v69 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v69 = *(double *)&_XMM0 * 0.000244140625;
                _XMM1 = v69;
                __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                worldPos.v[1] = *(float *)&_XMM2;
                _XMM0 = LODWORD(worldPos.v[2]);
                __asm { vcvtdq2pd xmm0, xmm0 }
                *((_QWORD *)&v69 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v69 = *(double *)&_XMM0 * 0.000244140625;
                _XMM1 = v69;
                __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              }
              else
              {
                *(float *)&_XMM2 = worldPos.v[2];
              }
              worldPos.v[2] = *(float *)&_XMM2 + WORLD_HEIGHT_OFFSET;
              if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
                __debugbreak();
              v79 = v62[25];
              if ( v62 == (_DWORD *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                __debugbreak();
              v111[0] = v62[2] ^ ((((_DWORD)v62 + 8) ^ v79) * ((((_DWORD)v62 + 8) ^ v79) + 2));
              v111[1] = v62[3] ^ ((((_DWORD)v62 + 12) ^ v79) * ((((_DWORD)v62 + 12) ^ v79) + 2));
              v111[2] = ((((_DWORD)v62 + 16) ^ v79) * ((((_DWORD)v62 + 16) ^ v79) + 2)) ^ v62[4];
              v36 = (__int64)v116;
              v80 = (float)((float)((float)(worldPos.v[0] - *(float *)v111) * v116->refdef.view.axis.m[0].v[0]) + (float)((float)(worldPos.v[1] - *(float *)&v111[1]) * v116->refdef.view.axis.m[0].v[1])) + (float)((float)(worldPos.v[2] - *(float *)&v111[2]) * v116->refdef.view.axis.m[0].v[2]);
              v81 = ApplyLinearMap(v80, SCREEN_MIN_LINE_DIST, SCREEN_MAX_LINE_DIST);
              v82 = (float)((float)(1.0 - *(float *)&v81) * SCREEN_MAX_SCALE) + (float)(v80 * SCREEN_MIN_SCALE);
              bigDevFont = cls.bigDevFont;
              CG_WorldPosToScreenPosReal(v64, scrPlacea, &worldPos, &outScreenPos);
              outScreenPos.v[0] = (float)(v82 * SCREEN_X_OFFSET) + outScreenPos.v[0];
              outScreenPos.v[1] = (float)(v82 * *(float *)&v61) + outScreenPos.v[1];
              R_AddCmdDrawText(v63, 512, bigDevFont, (int)(float)(v82 * SCREEN_LINE_HEIGHT), outScreenPos.v[0], outScreenPos.v[1], 1.0, 1.0, 0.0, &colorRed);
              v84 = v61;
              *(float *)&v84 = *(float *)&v61 + (float)(v82 * SCREEN_Y_OFFSET);
              v61 = v84;
              memset(v111, 0, sizeof(v111));
              memset(&worldPos, 0, sizeof(worldPos));
              v63 += 512;
              color = (vec4_t *)((char *)color - 1);
            }
            while ( color );
            memset(v106, 0, 0xCui64);
            memset(v107, 0, 0xCui64);
            LODWORD(v52) = v117;
            v54 = localClientNuma;
            v53 = v110;
          }
        }
        v52 = (unsigned int)(v52 + 1);
        v117 = v52;
        v53 = (cgs_t *)((char *)v53 + 760);
        v110 = v53;
      }
      while ( (int)v52 < cls.maxClients );
      v4 = scrPlacea;
      v6 = (CgDrawDebugMP *)v118;
    }
    ClientMP = v115;
    v20 = v114;
  }
  v85 = DVARINT_cg_drawSnapshot;
  if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.integer != 3 )
    return *(float *)&v23;
  v86 = j_va("%i", (unsigned int)v20->networkOffsetTime);
  v87 = CgDrawDebug::CornerPrint(v6, v4, v10, *(float *)&v23, v19, v86, " Network Offset", &colorWhite);
  v88 = *(float *)&v23 + *(float *)&v87;
  v89 = j_va("%i", (unsigned int)v20->currOffsetTime);
  v90 = CgDrawDebug::CornerPrint(v6, v4, v10, *(float *)&v23 + *(float *)&v87, v19, v89, " Total Offset", &colorWhite);
  v91 = v88 + *(float *)&v90;
  v92 = j_va("%i", (unsigned int)ClientMP->snap.info.serverTime);
  v93 = CgDrawDebug::CornerPrint(v6, v4, v10, v91, v19, v92, " Snapshot Time", &colorWhite);
  return v91 + *(float *)&v93;
}

/*
==============
CgDrawDebugMP::PrintSteamLobbyInfo
==============
*/
float CgDrawDebugMP::PrintSteamLobbyInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  return y;
}

/*
==============
CgDrawDebugMP::PrintStreamLoadingInfo
==============
*/
float CgDrawDebugMP::PrintStreamLoadingInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  float v7; 
  const dvar_t *v8; 
  __int64 v9; 
  const StreamDistance *v10; 
  unsigned int v11; 
  unsigned int v12; 
  double Float_Internal_DebugName; 
  unsigned int v14; 
  const StreamDistance *v15; 
  const dvar_t *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int64 *wantedImageMemoryByDistance; 
  unsigned int i; 
  float v21; 
  float v22; 
  unsigned int v23; 
  vec4_t v24; 
  double CornerLabelWidth; 
  float v26; 
  double CornerFarRight; 
  double v28; 
  StreamDistance v30; 
  unsigned int mValue; 
  vec4_t color; 
  StreamFrontendMemoryStats outStats; 
  char dest[128]; 

  v4 = DVARINT_cg_drawFPS;
  v7 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v8 = DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads;
    if ( !DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamerWantedImageLoads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      v9 = 0i64;
      dest[0] = 0;
      if ( Stream_IsEnabled() )
      {
        v10 = STREAM_FRONTEND_WANTED_IMAGE_MEMORY_DISTANCE_BUCKETS;
        v11 = 0;
        v12 = 0;
        if ( DVARFLT_cg_worldStreamingMaxImageQuality )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_worldStreamingMaxImageQuality, "cg_worldStreamingMaxImageQuality");
          StreamDistance::StreamDistance(&v30, *(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName);
          v14 = 0;
          v15 = STREAM_FRONTEND_WANTED_IMAGE_MEMORY_DISTANCE_BUCKETS;
          while ( v15->mValue < v30.mValue )
          {
            ++v14;
            ++v15;
            if ( v14 >= 0xA )
              goto LABEL_16;
          }
          v11 = v14;
        }
LABEL_16:
        v16 = DCONST_DVARFLT_stream_syncMP_imageQuality;
        if ( !DCONST_DVARFLT_stream_syncMP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_imageQuality") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        *(float *)&v30.mValue = v16->current.value * v16->current.value;
        mValue = v30.mValue;
        if ( (v30.mValue & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v17 = 0;
        while ( v10->mValue < mValue >> 7 )
        {
          ++v17;
          ++v10;
          if ( v17 >= 0xA )
            goto LABEL_27;
        }
        v12 = v17;
LABEL_27:
        Stream_GetMemoryStats(&outStats);
        v18 = 10;
        wantedImageMemoryByDistance = outStats.wantedImageMemoryByDistance;
        for ( i = 0; i < 0xA; ++i )
        {
          v21 = (float)(__int64)*wantedImageMemoryByDistance;
          if ( (*wantedImageMemoryByDistance & 0x8000000000000000ui64) != 0i64 )
          {
            v22 = (float)(__int64)*wantedImageMemoryByDistance;
            v21 = v22 + 1.8446744e19;
          }
          if ( (float)(v21 * 0.00000095367432) != 0.0 )
          {
            v23 = i;
            if ( i > v18 )
              v23 = v18;
            v18 = v23;
          }
          v9 += Com_sprintf_truncate(&dest[v9], 128 - v9, "%.2f", (float)(v21 * 0.00000095367432));
          if ( i != 9 )
            v9 += Com_sprintf_truncate(&dest[v9], 128 - v9, " ");
          ++wantedImageMemoryByDistance;
        }
        if ( !v18 )
        {
          v24 = colorRed;
LABEL_45:
          color = v24;
          CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, "Stm Loading");
          v26 = *(float *)&CornerLabelWidth;
          CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v28 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v26, dest, "Stm Loading", &color);
          return y + *(float *)&v28;
        }
        if ( v18 <= v11 )
        {
          v24 = colorMagenta;
          goto LABEL_45;
        }
        if ( v18 <= v12 )
        {
          v24 = colorYellow;
          goto LABEL_45;
        }
      }
      else
      {
        Com_sprintf_truncate(dest, 0x80ui64, "<Disabled>");
      }
      v24 = colorWhite;
      goto LABEL_45;
    }
  }
  return v7;
}

/*
==============
CgDrawDebugMP::PrintStreamingPos
==============
*/

float __fastcall CgDrawDebugMP::PrintStreamingPos(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  __int128 v4; 
  char *label; 
  __int128 v7; 
  const ScreenPlacement *v8; 
  double CornerFarRight; 
  float v11; 
  double CornerLabelWidth; 
  const dvar_t *v13; 
  float v14; 
  int v15; 
  unsigned int i; 
  const char *NameForViewType; 
  const vec3_t *NextStreamPosition; 
  const vec3_t *NextStreamVelocity; 
  const vec4_t *color; 
  BgWorldStreamingViewMode NextStreamViewMode; 
  const char *NameForViewMode; 
  const char *v23; 
  double v24; 
  __int128 v25; 
  unsigned int j; 
  double LoadDist; 
  const char *v28; 
  const char *v29; 
  double v30; 
  __int128 v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  double v34; 
  float v35; 
  int k; 
  const vec3_t *ManualViewOrigin; 
  const vec3_t *ManualViewVelocity; 
  const char *v39; 
  double v40; 
  __int128 v41; 
  const dvar_t *v42; 
  const char *v43; 
  StreamUpdateMultiView *p_multiView; 
  __m128 v; 
  float v46; 
  float v47; 
  const char *v48; 
  double v49; 
  __int128 v50; 
  unsigned int CurrentStateFrameDelta; 
  char *v53; 
  const char *CurrentStateName; 
  StreamUpdateMultiView multiView; 
  char v57[64]; 
  char dest[64]; 
  __int128 v59; 

  label = cls.m_activeGameMapName;
  if ( !cls.m_activeGameMapName[0] )
    label = "<none>";
  v53 = label;
  v7 = *(_OWORD *)&posY;
  v8 = scrPlace;
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v11 = *(float *)&CornerFarRight;
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, label);
  v13 = DCONST_DVARBOOL_cg_drawStreamPos;
  v14 = *(float *)&CornerLabelWidth;
  if ( !DCONST_DVARBOOL_cg_drawStreamPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamPos") )
    __debugbreak();
  v59 = v4;
  Dvar_CheckFrontendServerThread(v13);
  v15 = 0;
  if ( v13->current.enabled )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( CG_WorldStreaming_HasNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i) )
      {
        NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)i);
        NextStreamPosition = CG_WorldStreaming_GetNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        NextStreamVelocity = CG_WorldStreaming_GetNextStreamVelocity(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        CurrentStateName = CG_WorldStreaming_GetCurrentStateName(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        color = &colorGreen;
        if ( CG_WorldStreaming_IsNextStreamPositionLoading(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i) )
          color = &colorRed;
        CurrentStateFrameDelta = CG_WorldStreaming_GetCurrentStateFrameDelta(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        NextStreamViewMode = CG_WorldStreaming_GetNextStreamViewMode(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        if ( NextStreamViewMode )
        {
          NameForViewMode = BG_WorldStreaming_GetNameForViewMode(NextStreamViewMode);
          Com_sprintf<64>((char (*)[64])dest, "(%s) ", NameForViewMode);
        }
        else
        {
          dest[0] = 0;
        }
        if ( NextStreamVelocity->v[0] == 0.0 && NextStreamVelocity->v[1] == 0.0 && NextStreamVelocity->v[2] == 0.0 )
          v57[0] = 0;
        else
          Com_sprintf<64>((char (*)[64])v57, "(%.0f %.0f %.0f)", NextStreamVelocity->v[0], NextStreamVelocity->v[1], NextStreamVelocity->v[2]);
        v23 = j_va("%s: %s [%3d] (%.0f %.0f %.0f)%s %s\n", NameForViewType, CurrentStateName, CurrentStateFrameDelta, NextStreamPosition->v[0], NextStreamPosition->v[1], NextStreamPosition->v[2], v57, dest);
        v8 = scrPlace;
        v24 = CgDrawDebug::CornerPrintNoLabel(this, scrPlace, v11, *(float *)&v7, v23, color);
        v25 = v7;
        *(float *)&v25 = *(float *)&v7 + *(float *)&v24;
        v7 = v25;
      }
    }
    v15 = 0;
    for ( j = 0; j < 3; ++j )
    {
      LoadDist = CG_WorldStreaming_GetLoadDist(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)j);
      if ( *(float *)&LoadDist != 0.0 )
      {
        v28 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)j);
        v29 = j_va("%s LOAD DIST: %g", v28, *(float *)&LoadDist);
        v30 = CgDrawDebug::CornerPrintNoLabel(this, v8, v11, *(float *)&v7, v29, &colorWhite);
        v31 = v7;
        *(float *)&v31 = *(float *)&v7 + *(float *)&v30;
        v7 = v31;
      }
    }
    label = v53;
  }
  v32 = DCONST_DVARBOOL_cg_drawClientStreamManualView;
  if ( !DCONST_DVARBOOL_cg_drawClientStreamManualView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientStreamManualView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
  {
    v33 = DVARINT_cg_drawFPS;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( v33->current.integer )
    {
      v34 = CgDrawDebug::GetCornerLabelWidth(this, " ClientStreamManualView");
      v35 = *(float *)&v34;
      for ( k = 0; k < 5; ++k )
      {
        if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)k, localClientNum) )
        {
          ManualViewOrigin = CL_StreamViews_GetManualViewOrigin((StreamManualViewType)k, localClientNum);
          ManualViewVelocity = CL_StreamViews_GetManualViewVelocity((StreamManualViewType)k, localClientNum);
          if ( ManualViewVelocity->v[0] == 0.0 && ManualViewVelocity->v[1] == 0.0 && ManualViewVelocity->v[2] == 0.0 )
            v57[0] = 0;
          else
            Com_sprintf<64>((char (*)[64])v57, "(%.0f %.0f %.0f)", ManualViewVelocity->v[0], ManualViewVelocity->v[1], ManualViewVelocity->v[2]);
          v39 = j_va("[%d] (%.0f %.0f %.0f)%s\n", (unsigned int)k, ManualViewOrigin->v[0], ManualViewOrigin->v[1], ManualViewOrigin->v[2], v57);
          v40 = CgDrawDebug::CornerPrint(this, v8, v11, *(float *)&v7, v35, v39, " ClientStreamManualView", &colorWhite);
          v41 = v7;
          *(float *)&v41 = *(float *)&v7 + *(float *)&v40;
          v7 = v41;
        }
      }
      label = v53;
    }
  }
  v42 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.integer )
  {
    Stream_ViewPos_GetStaticMultiView(&multiView);
    v43 = "Stream Update";
    if ( Stream_LoadSync_IsActive() )
      v43 = "Stream Sync";
    if ( multiView.viewCount > 0 )
    {
      p_multiView = &multiView;
      do
      {
        v = p_multiView->viewVelocityDir[0].v;
        LODWORD(v46) = _mm_shuffle_ps(v, v, 85).m128_u32[0];
        LODWORD(v47) = _mm_shuffle_ps(v, v, 170).m128_u32[0];
        if ( v.m128_f32[0] == 0.0 && v46 == 0.0 && v47 == 0.0 )
          v57[0] = 0;
        else
          Com_sprintf<64>((char (*)[64])v57, "(%.2f %.2f %.2f)", v.m128_f32[0], v46, v47);
        v48 = j_va("%s[%d] (%.0f %.0f %.0f)%s \n", v43, (unsigned int)v15, COERCE_FLOAT(*(_OWORD *)p_multiView->viewPos), _mm_shuffle_ps(p_multiView->viewPos[0].v, p_multiView->viewPos[0].v, 85).m128_f32[0], _mm_shuffle_ps(p_multiView->viewPos[0].v, p_multiView->viewPos[0].v, 170).m128_f32[0], v57);
        v49 = CgDrawDebug::CornerPrint(this, v8, v11, *(float *)&v7, v14, v48, label, &colorWhite);
        ++v15;
        p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 16);
        v50 = v7;
        *(float *)&v50 = *(float *)&v7 + *(float *)&v49;
        v7 = v50;
      }
      while ( v15 < multiView.viewCount );
    }
  }
  return *(float *)&v7;
}

/*
==============
CgDrawDebugMP::PrintTeamDebugInfo
==============
*/
float CgDrawDebugMP::PrintTeamDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  const dvar_t *v4; 
  float v7; 
  const dvar_t *v8; 
  double CornerLabelWidth; 
  float v10; 
  double CornerFarRight; 
  double v12; 

  v4 = DVARINT_cg_drawFPS;
  v7 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
    v8 = DVARBOOL_cg_drawteamdebuginfo;
    if ( !DVARBOOL_cg_drawteamdebuginfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawteamdebuginfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && party_drawTeamDebug[0] )
    {
      CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
      v10 = *(float *)&CornerLabelWidth;
      CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      v12 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, v10, party_drawTeamDebug, " teams", &colorWhite);
      return y + *(float *)&v12;
    }
  }
  return v7;
}

/*
==============
CgDrawDebugMP::PrintTournamentDebugInfo
==============
*/
float CgDrawDebugMP::PrintTournamentDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double CornerLabelWidth; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  const char *text; 
  double CornerFarRight; 
  double v16; 
  float v17; 
  const char *CurrentTournamentLobbyTaskString; 
  double v19; 
  double v20; 
  float v21; 
  const char *CurrentTournamentChatChannelCommunicationStateString; 
  double v23; 
  double v24; 
  float v25; 
  const char *MyParticipationStatusString; 
  double v27; 
  double v28; 
  float v29; 
  const char *MyTourneyDataString; 
  double v31; 
  double v32; 
  char v34[24]; 
  char v35[16]; 
  __int64 v36; 
  char v37[8]; 
  char v38[24]; 
  char v39[16]; 
  __int64 v40; 
  char v41[8]; 
  char v42[24]; 

  if ( !OnlineTournament_IsScreenDebugEnabled() )
    return y;
  strcpy(v37, " state");
  strcpy(v38, "    Tourney State");
  strcpy(v34, "    Tourney Task");
  *(_OWORD *)v35 = *(_OWORD *)"    Tourney Chat channel state";
  strcpy(v41, "tion");
  v36 = *(__int64 *)" channel state";
  *(_OWORD *)v39 = *(_OWORD *)"    Tourney My Participation";
  v40 = *(__int64 *)"articipation";
  strcpy(v42, "    Tourney My Data");
  CgDrawDebug::GetCornerLabelWidth(this, v38);
  CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, v34);
  v7 = *(float *)&CornerLabelWidth;
  v8 = CgDrawDebug::GetCornerLabelWidth(this, v35);
  v9 = *(float *)&v8;
  v10 = CgDrawDebug::GetCornerLabelWidth(this, v39);
  v11 = *(float *)&v10;
  v12 = CgDrawDebug::GetCornerLabelWidth(this, v42);
  v13 = *(float *)&v12;
  text = OnlineTournament_GetCurrentTournamentStateString();
  CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v16 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, y, 1.3563156e-19, text, v38, &colorWhite);
  v17 = y + *(float *)&v16;
  CurrentTournamentLobbyTaskString = OnlineTournament_GetCurrentTournamentLobbyTaskString();
  v19 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v20 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v19, v17, v7, CurrentTournamentLobbyTaskString, v34, &colorWhite);
  v21 = v17 + *(float *)&v20;
  CurrentTournamentChatChannelCommunicationStateString = OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString();
  v23 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v24 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v23, v21, v9, CurrentTournamentChatChannelCommunicationStateString, v35, &colorWhite);
  v25 = v21 + *(float *)&v24;
  MyParticipationStatusString = OnlineTournament_GetMyParticipationStatusString();
  v27 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v28 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v27, v25, v11, MyParticipationStatusString, v39, &colorWhite);
  v29 = v25 + *(float *)&v28;
  MyTourneyDataString = OnlineTournament_GetMyTourneyDataString();
  v31 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  v32 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v31, v29, v13, MyTourneyDataString, v42, &colorWhite);
  return v29 + *(float *)&v32;
}

/*
==============
CgDrawDebugMP::PrintTransientFastfileDebugInfo
==============
*/
float CgDrawDebugMP::PrintTransientFastfileDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  __int128 v4; 
  const dvar_t *v5; 
  float v8; 
  const dvar_t *v9; 
  bool enabled; 
  const dvar_t *v11; 
  bool v12; 
  TransientDebugStats *p_outStats; 
  __int64 v14; 
  vec4_t v15; 
  double v16; 
  float v17; 
  double v18; 
  double v19; 
  unsigned int *queuedWorldTiles; 
  __int64 v21; 
  vec4_t v22; 
  double CornerLabelWidth; 
  float v24; 
  double CornerFarRight; 
  double v26; 
  const dvar_t *v27; 
  unsigned int YieldTimeout; 
  unsigned int YieldTimeProgress; 
  GfxFont *FontHandle; 
  __int64 v31; 
  char *fmt; 
  int destPos; 
  vec4_t color; 
  TransientDebugStats outStats; 
  char dest[128]; 
  __int128 v38; 

  v5 = DVARINT_cg_drawFPS;
  v8 = y;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    v9 = DCONST_DVARBOOL_cg_drawWorldTileLoadCounts;
    if ( !DCONST_DVARBOOL_cg_drawWorldTileLoadCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWorldTileLoadCounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    enabled = v9->current.enabled;
    v11 = DCONST_DVARBOOL_cg_drawTransientCommonLoadCounts;
    if ( !DCONST_DVARBOOL_cg_drawTransientCommonLoadCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientCommonLoadCounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = v11->current.enabled;
    if ( !enabled && !v12 )
      goto LABEL_41;
    v38 = v4;
    CL_TransientsMP_GetTransientStats(&outStats);
    if ( !v12 )
    {
LABEL_30:
      if ( !enabled )
        goto LABEL_41;
      destPos = 0;
      queuedWorldTiles = outStats.queuedWorldTiles;
      v21 = 5i64;
      do
      {
        LODWORD(fmt) = *queuedWorldTiles;
        Com_sprintfPos_truncate(dest, 0x80ui64, &destPos, "%u ", fmt);
        ++queuedWorldTiles;
        --v21;
      }
      while ( v21 );
      color = colorWhite;
      if ( outStats.queuedWorldTiles[0] )
      {
        v22 = colorRed;
      }
      else if ( outStats.queuedWorldTiles[1] )
      {
        v22 = colorMagenta;
      }
      else
      {
        if ( !outStats.queuedWorldTiles[2] )
        {
LABEL_40:
          CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, "TR World Tiles Loading");
          v24 = *(float *)&CornerLabelWidth;
          CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v26 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, v8, v24, dest, "TR World Tiles Loading", &color);
          v8 = v8 + *(float *)&v26;
LABEL_41:
          v27 = DCONST_DVARBOOL_stream_drawCameraVelocity;
          if ( !DCONST_DVARBOOL_stream_drawCameraVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_drawCameraVelocity") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          if ( v27->current.enabled )
          {
            YieldTimeout = CL_TransientsMP_GetYieldTimeout();
            if ( CL_TransientsMP_IsYielding() )
            {
              YieldTimeProgress = CL_TransientsMP_GetYieldTimeProgress();
              Com_sprintf_truncate<64>((char (*)[64])&outStats, "Yield %dms. In yield:%dms.", YieldTimeout, YieldTimeProgress);
            }
            else
            {
              Com_sprintf_truncate<64>((char (*)[64])&outStats, "Yield %dms.", YieldTimeout);
            }
            FontHandle = UI_GetFontHandle(scrPlace, 5, 1.0);
            v31 = -1i64;
            do
              ++v31;
            while ( *((_BYTE *)outStats.queuedCommon + v31) );
            UI_DrawText(scrPlace, (const char *)&outStats, v31, FontHandle, 305.0, 442.0, 1, 1, 0.25, &colorWhite, 3);
          }
          return v8;
        }
        v22 = colorYellow;
      }
      color = v22;
      goto LABEL_40;
    }
    destPos = 0;
    p_outStats = &outStats;
    v14 = 12i64;
    do
    {
      LODWORD(fmt) = p_outStats->queuedCommon[0];
      Com_sprintfPos_truncate(dest, 0x80ui64, &destPos, "%u ", fmt);
      p_outStats = (TransientDebugStats *)((char *)p_outStats + 4);
      --v14;
    }
    while ( v14 );
    color = colorWhite;
    if ( outStats.queuedCommon[0] || outStats.queuedCommon[1] || outStats.queuedCommon[2] || outStats.queuedCommon[3] || outStats.queuedCommon[6] )
    {
      v15 = colorRed;
    }
    else if ( outStats.queuedCommon[4] || outStats.queuedCommon[5] )
    {
      v15 = colorMagenta;
    }
    else
    {
      if ( !outStats.queuedCommon[7] && !outStats.queuedCommon[8] )
        goto LABEL_29;
      v15 = colorYellow;
    }
    color = v15;
LABEL_29:
    v16 = CgDrawDebug::GetCornerLabelWidth(this, "TR Common Loading     ");
    v17 = *(float *)&v16;
    v18 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    v19 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v18, y, v17, dest, "TR Common Loading     ", &color);
    v8 = y + *(float *)&v19;
    goto LABEL_30;
  }
  return v8;
}

/*
==============
CgDrawDebugMP::PrintUpperRightDebugInfo
==============
*/
void CgDrawDebugMP::PrintUpperRightDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  __int64 v3; 
  const dvar_t *v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  double CornerLabelWidth; 
  int svHudOutlineUsage; 
  float v20; 
  float v21; 
  const vec4_t *color; 
  double CornerFarRight; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  double v31; 
  float v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  char *fmt; 
  char dest[64]; 

  v3 = localClientNum;
  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type != 4 )
  {
    v6 = DVARVEC2_cg_debugInfoCornerOffsetMP;
    if ( !DVARVEC2_cg_debugInfoCornerOffsetMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetMP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = CgDrawDebug::PrintCinematicInfo(this, (const LocalClientNum_t)v3, scrPlace, v6->current.vector.v[1]);
    v8 = CgDrawDebug::PrintPerformanceInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v7);
    v9 = CgDrawDebug::PrintBuildName(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v8);
    v10 = CgDrawDebug::PrintFastfileDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v9);
    v11 = CgDrawDebugMP::PrintStreamLoadingInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v10);
    v12 = CgDrawDebugMP::PrintTransientFastfileDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v11);
    v13 = CgDrawDebugMP::PrintEntityDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v12);
    v14 = CgDrawDebug::PrintScriptableDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v13);
    v15 = DVARINT_cg_drawFPS;
    v16 = *(float *)&v14;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer )
    {
      v17 = DVARBOOL_cg_drawservercounts;
      if ( !DVARBOOL_cg_drawservercounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawservercounts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( v17->current.enabled )
      {
        CornerLabelWidth = CgDrawDebug::GetCornerLabelWidth(this, " outlines");
        LODWORD(fmt) = 63;
        svHudOutlineUsage = s_serverCollectedInfo[v3].svHudOutlineUsage;
        v20 = *(float *)&CornerLabelWidth;
        Com_sprintf(dest, 0x40ui64, "%i / %i", s_serverCollectedInfo[v3].svHudOutlineUsage, fmt);
        v21 = (float)svHudOutlineUsage;
        color = &colorWhite;
        if ( v21 >= 53.550003 )
          color = &colorRed;
        CornerFarRight = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v24 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&CornerFarRight, v16, v20, dest, " outlines", color);
        v16 = *(float *)&v24 + v16;
      }
    }
    v25 = CgDrawDebug::PrintNativeScriptDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, v16);
    v26 = CgDrawDebug::PrintWallRunDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v25);
    v27 = CgDrawDebug::PrintEventProfile(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v26);
    v28 = DVARINT_cg_drawFPS;
    v29 = *(float *)&v27;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( v28->current.integer )
    {
      v30 = DVARBOOL_cg_drawteamdebuginfo;
      if ( !DVARBOOL_cg_drawteamdebuginfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawteamdebuginfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( v30->current.enabled )
      {
        if ( party_drawTeamDebug[0] )
        {
          v31 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
          v32 = *(float *)&v31;
          v33 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          v34 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&v33, v29, v32, party_drawTeamDebug, " teams", &colorWhite);
          v29 = v29 + *(float *)&v34;
        }
      }
    }
    v35 = CgDrawDebugMP::PrintSnapshotInfo(this, (const LocalClientNum_t)v3, scrPlace, v29);
    v36 = CgDrawDebug::PrintClientTaskDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v35);
    v37 = CgDrawDebug::PrintReplayTime(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v36);
    v38 = CgDrawDebug::PrintViewpos(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v37);
    v39 = CgDrawDebugMP::PrintStreamingPos(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v38);
    v40 = CgDrawDebug::PrintCamAndMovementInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v39);
    v41 = CgDrawDebug::PrintSystemTime(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v40);
    v42 = CgDrawDebugMP::PrintPartyDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v41);
    CgDrawDebugMP::PrintMPDebugInfo(this, (const LocalClientNum_t)v3, scrPlace, *(float *)&v42);
    ((void (__fastcall *)(CgDrawDebugMP *, _QWORD, const ScreenPlacement *))this->DrawClientNetPerf)(this, (unsigned int)v3, scrPlace);
  }
}

