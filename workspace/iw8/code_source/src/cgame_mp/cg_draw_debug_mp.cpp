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
  __int64 v2; 

  if ( cg_t::ms_allocatedCount > 0 && clientNum == CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->predictedPlayerState.clientNum )
  {
    _RDX = g_snapshotCollectedInfo[0].commandsProcessedOnSnapshot;
    v2 = 6i64;
    _RAX = g_snapshotCollectedInfo[0].commandsProcessed;
    do
    {
      _RDX += 32;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX += 32;
      __asm
      {
        vmovups xmmword ptr [rdx-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [rdx-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [rdx-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [rdx-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [rdx-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [rdx-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v2;
    }
    while ( v2 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
    }
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
  __int64 v16; 
  vec3_t outOrigin; 
  __int64 v18; 
  Bounds bounds; 

  v18 = -2i64;
  _RSI = cent;
  v8 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2723, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RSI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2724, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v8) )
    __debugbreak();
  if ( (unsigned int)v8 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v16 = CgStatic::ms_allocatedCount;
    LODWORD(outCollisionBounds) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outCollisionBounds, v16) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v8] )
  {
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v16) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v8];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2727, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  clientNum = _RSI->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v16) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(outCollisionBounds) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outCollisionBounds, v16) )
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
  v13 = BG_EstimateEffectiveStance(&_RSI->nextState);
  CG_PhysicsCharacterProxy_GetCollisionBounds(NULL, &_RSI->nextState, CharacterInfo->suitIndex, v13, 0, &bounds);
  CG_GetPoseOrigin(&_RSI->pose, &outOrigin);
  __asm { vmovss  xmm2, dword ptr [rsi+4Ch]; yaw }
  CG_DebugBox(&outOrigin, &bounds, *(float *)&_XMM2, color, depthTest, duration);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_DrawDebugMP_DrawDebugOverlays
==============
*/

void __fastcall CG_DrawDebugMP_DrawDebugOverlays(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  const dvar_t *v5; 
  int v6; 
  int ListOfATCLientRemoteDebugSubscribedTo; 
  __int64 v8; 
  __int64 v9; 
  __int64 v11; 
  const char *v12; 
  bool v13; 
  const ScreenPlacement *v14; 
  __int64 align; 
  __int64 v19; 
  int *outATClients; 
  CgDrawDebug v22; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  v4 = localClientNum;
  v22.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  CgDrawDebug::DrawDebugOverlays(&v22, localClientNum);
  v5 = DVARINT_bg_debugRewindPositions;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v19, 2, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= CgDrawSystem::ms_allocatedCount )
    {
      LODWORD(v19) = CgDrawSystem::ms_allocatedCount;
      LODWORD(align) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", align, v19) )
        __debugbreak();
    }
    if ( !CgDrawSystem::ms_drawSystemArray[v4] )
    {
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v19) )
        __debugbreak();
    }
    CgDrawSystemMP::DrawDebugCharacterPoses((CgDrawSystemMP *)CgDrawSystem::ms_drawSystemArray[v4]);
  }
  v6 = 0;
  outATClients = NULL;
  ListOfATCLientRemoteDebugSubscribedTo = CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo((const int **)&outATClients);
  v8 = ListOfATCLientRemoteDebugSubscribedTo;
  if ( ListOfATCLientRemoteDebugSubscribedTo > 0 )
  {
    v9 = 0i64;
    __asm { vmovss  xmm6, cs:__real@42c80000 }
    do
    {
      v11 = outATClients[v9];
      if ( (unsigned int)v11 >= 0xC8 )
      {
        LODWORD(v19) = 200;
        LODWORD(align) = outATClients[v9];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2665, ASSERT_TYPE_ASSERT, "(unsigned)( ATClientNum ) < (unsigned)( ( sizeof( *array_counter( s_remoteATClientStates ) ) + 0 ) )", "ATClientNum doesn't index ARRAY_COUNT( s_remoteATClientStates )\n\t%i not in [0, %i)", align, v19) )
          __debugbreak();
      }
      v12 = j_va("%s\n", s_remoteATClientStates[v11]);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v14 = &scrPlaceViewDisplay[v4];
          goto LABEL_27;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v13 )
          __debugbreak();
      }
      v14 = &scrPlaceFull;
LABEL_27:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vmulss  xmm2, xmm0, xmm6; y
        vxorps  xmm1, xmm1, xmm1; x
      }
      CG_DrawSmallDevStringColor(v14, *(float *)&_XMM1_8, *(float *)&_XMM2, v12, &colorGreen, 5);
      ++v6;
      ++v9;
    }
    while ( v9 < v8 );
  }
  CG_DrawDebug_DrawATClientPos((const LocalClientNum_t)v4);
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
CG_DrawDebugMP_DrawFrontendOverlays
==============
*/
void CG_DrawDebugMP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v7; 
  const ScreenPlacement *v15; 
  void *retaddr; 
  CgDrawDebug v19; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v19.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  *(double *)&_XMM0 = CG_DrawDebugMP_DrawHostDebugInfo(localClientNum);
  __asm { vmovaps xmm6, xmm0 }
  v7 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    __asm { vmovaps xmm2, xmm6; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintFrontendUpperRightDebugInfo(&v19, localClientNum, *(float *)&_XMM2);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintFrontendSceneDebugInfo(&v19, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintEntityDebugInfo((CgDrawDebugMP *)&v19, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintPreloadDebugInfo((CgDrawDebugMP *)&v19, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintStreamingPos((CgDrawDebugMP *)&v19, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm6, xmm0 }
    v19.DrawAnimationOverlays(&v19, localClientNum);
    __asm { vmovaps xmm2, xmm6; y }
    CG_DrawDebugMP_DrawLiveStatus(localClientNum, (const CgDrawDebugMP *)&v19, *(float *)&_XMM2);
    Cloth_Debug_SetRefDecoder(CG_Cloth_ConvertRefToString);
    Cloth_Debug_SetRefEntNumDecoder(CG_Cloth_ConvertRefToEntNum);
    v15 = ScrPlace_GetActivePlacement(localClientNum);
    Cloth_Debug_Draw(v15);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  const dvar_t *v6; 
  const dvar_t *v9; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v13; 
  unsigned int ProtocolVersion; 
  const char *text; 
  const dvar_t *v22; 
  const char *string; 
  __int64 i; 
  __int64 v27; 
  const bdSecurityID *SecurityId; 
  const char *v29; 
  const char *v30; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  CgDrawDebug v42; 
  __int64 v43[3]; 
  char str[24]; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  v43[2] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v6 = DVARSTR_party_hostname;
  if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1512, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_party_hostname, \"party_hostname\" ))", (const char *)&queryFormat, "Dvar_GetString( party_hostname )") )
    __debugbreak();
  v42.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugMP::`vftable';
  _RBX = DVARVEC2_cg_debugInfoCornerOffsetMP;
  if ( !DVARVEC2_cg_debugInfoCornerOffsetMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetMP") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+2Ch] }
  v9 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(&v42, " cg ms/frame");
    __asm { vmovaps xmm7, xmm0 }
    v13 = DVARSTR_party_hostname;
    if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( *(_BYTE *)v13->current.integer64 )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&v42, ActivePlacement);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
      }
      CgDrawDebug::CornerPrintCaption(&v42, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "- MP -", &colorGreenFaded);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      ProtocolVersion = GetProtocolVersion();
      text = j_va("%i", ProtocolVersion);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&v42, ActivePlacement);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
      }
      CgDrawDebug::CornerPrint(&v42, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmta, text, " protocol", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v22 = DVARSTR_party_hostname;
      if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      string = v22->current.string;
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&v42, ActivePlacement);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
      }
      CgDrawDebug::CornerPrint(&v42, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, string, " g-host", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    v43[0] = (__int64)Lobby_GetPartyData();
    v43[1] = (__int64)&g_partyData;
    for ( i = 0i64; i < 2; ++i )
    {
      v27 = v43[i];
      if ( *(_DWORD *)(v27 + 314492) )
      {
        SecurityId = XSESSION_INFO::GetSecurityId((XSESSION_INFO *)(*(_QWORD *)v27 + 4i64));
        XNKIDToString(SecurityId, str, 21);
        v29 = *(const char **)(v27 + 314408);
        v30 = j_va("%s ", str);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&v42, ActivePlacement);
        __asm
        {
          vmovss  dword ptr [rsp+0C8h+fmt], xmm7
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm0; posX
        }
        CgDrawDebug::CornerPrint(&v42, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v30, v29, &colorWhite);
        __asm { vaddss  xmm6, xmm6, xmm0 }
      }
    }
    __asm { vmovaps xmm3, xmm6; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintPartyMemberInfo((CgDrawDebugMP *)&v42, localClientNum, ActivePlacement, *(float *)&_XMM3);
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebugMP_DrawLiveStatus
==============
*/

double __fastcall CG_DrawDebugMP_DrawLiveStatus(const LocalClientNum_t localClientNum, const CgDrawDebugMP *r_drawDebug, double y)
{
  const dvar_t *v8; 
  const ScreenPlacement *ActivePlacement; 
  int ControllerFromClient; 
  const char *text; 
  DWServicesAccess *Instance; 
  const char *EnvironmentString; 
  DWServicesAccess *v24; 
  unsigned int TitleID; 
  const char *v26; 
  const char *Status; 
  const char *LobbyStatus; 
  unsigned __int64 CurrentLobbyId; 
  const char *v39; 
  unsigned int v42; 
  unsigned int PlayerCount; 
  const char *PlayerStatus; 
  const char *label; 
  const char *MatchJoinStateNameDebugString; 
  const char *AsyncTaskStateNameDebugString; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 

  v8 = DCONST_DVARBOOL_cg_drawLiveStatus;
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !DCONST_DVARBOOL_cg_drawLiveStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLiveStatus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vmovaps [rsp+0A8h+var_68], xmm9
    }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
    __asm { vmovaps xmm9, xmm0 }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    FenceManager_DrawDebug(ControllerFromClient, r_drawDebug);
    text = dwGetEnvironmentFlavorName();
    __asm
    {
      vmovss  xmm8, cs:__real@42c80000
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+0A8h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, " dw server", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    Instance = DWServicesAccess::GetInstance();
    EnvironmentString = DWServicesAccess::GetEnvironmentString(Instance);
    v24 = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(v24);
    v26 = j_va("0x%x (%s)", TitleID, EnvironmentString);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+0A8h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v26, " dw titleID", &colorWhite);
    __asm { vaddss  xmm7, xmm6, xmm0 }
    if ( OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) )
    {
      Status = OnlineMatchmakerOmniscient::GetStatus(&OnlineMatchmakerOmniscient::ms_instance);
      __asm
      {
        vmovaps xmm3, xmm7; posY
        vmovaps xmm2, xmm9; posX
        vmovss  dword ptr [rsp+0A8h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, Status, " MM status", &colorWhite);
      __asm { vaddss  xmm6, xmm7, xmm0 }
      LobbyStatus = OnlineMatchmakerOmniscient::GetLobbyStatus(&OnlineMatchmakerOmniscient::ms_instance);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm9; posX
        vmovss  dword ptr [rsp+0A8h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, LobbyStatus, " MM lobby", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
      v39 = j_va("%zu", CurrentLobbyId);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm9; posX
        vmovss  dword ptr [rsp+0A8h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v39, " MM lobbyID", &colorWhite);
      __asm { vaddss  xmm7, xmm6, xmm0 }
      v42 = 0;
      PlayerCount = OnlineMatchmakerOmniscient::GetPlayerCount(&OnlineMatchmakerOmniscient::ms_instance);
      if ( PlayerCount )
      {
        do
        {
          PlayerStatus = OnlineMatchmakerOmniscient::GetPlayerStatus(&OnlineMatchmakerOmniscient::ms_instance, v42);
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(&r_drawDebug->CgDrawDebug, PlayerStatus);
          __asm { vmovaps xmm6, xmm0 }
          label = j_va("%s MM player %i", PlayerStatus, v42);
          __asm
          {
            vaddss  xmm0, xmm6, xmm8
            vmovaps xmm3, xmm7; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+0A8h+fmt], xmm0
          }
          CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmte, "> ", label, &colorWhite);
          ++v42;
          __asm { vaddss  xmm7, xmm7, xmm0 }
        }
        while ( v42 < PlayerCount );
      }
    }
    __asm { vmovaps xmm3, xmm7; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintMPDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintSessionDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm9, [rsp+0A8h+var_68]
      vmovaps xmm7, [rsp+0A8h+var_48]
    }
    if ( GameBattles_IsScreenDebugEnabled() )
    {
      MatchJoinStateNameDebugString = GameBattles_GetMatchJoinStateNameDebugString(localClientNum);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
        vmovss  dword ptr [rsp+0A8h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, MatchJoinStateNameDebugString, " MLG Join State", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      AsyncTaskStateNameDebugString = GameBattles_GetAsyncTaskStateNameDebugString(localClientNum);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(&r_drawDebug->CgDrawDebug, ActivePlacement);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
        vmovss  dword ptr [rsp+0A8h+fmt], xmm8
      }
      *(double *)&_XMM0 = CgDrawDebug::CornerPrint(&r_drawDebug->CgDrawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, AsyncTaskStateNameDebugString, " MLG Async Task", &colorWhite);
      __asm { vaddss  xmm6, xmm0, xmm6 }
    }
    __asm
    {
      vmovaps xmm3, xmm6; y
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintTournamentDebugInfo((CgDrawDebugMP *)r_drawDebug, localClientNum, ActivePlacement, *(float *)&_XMM3);
  }
  else
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
  return *(double *)&_XMM0;
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
  GfxFont *v16; 
  GfxFont *v17; 
  __int64 SharedPLFlags; 
  bool v23; 
  __int64 v24; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  char outBuffer[2048]; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(cgameGlob->predictedPlayerEntity)", (const char *)&queryFormat, "cgameGlob->predictedPlayerEntity") )
    __debugbreak();
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  __asm
  {
    vmovss  xmm7, cs:__real@3e3851ec
    vmovaps xmm2, xmm7; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovaps xmm2, xmm6; scale
  }
  v16 = FontHandle;
  v17 = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@c2f00000
    vmovss  [rsp+8C8h+var_888], xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+8C8h+y], xmm0
    vmovss  dword ptr [rsp+8C8h+fmt], xmm1
  }
  UI_DrawText(ActivePlacement, "Client View of Flags", 2048, v17, fmt, y, 2, 1, v46, &colorWhite, 3);
  CG_DrawDebugMP_GetPMFlags(p_predictedPlayerState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovss  xmm8, cs:__real@41f00000
    vmovss  [rsp+8C8h+var_888], xmm7
    vmovss  [rsp+8C8h+y], xmm6
    vmovss  dword ptr [rsp+8C8h+fmt], xmm8
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v16, fmta, ya, 1, 1, v47, &colorWhite, 3);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPLFlags = CG_DrawDebug_GetSharedPLFlags(p_predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v23 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 7u);
  v24 = 55i64;
  if ( v23 )
    v24 = 50i64;
  Com_sprintf(&outBuffer[SharedPLFlags], 2048 - (int)SharedPLFlags, "^%cFORCE_PARENT_VISIBLE\n", v24);
  __asm
  {
    vmovss  xmm0, cs:__real@43960000
    vmovss  [rsp+8C8h+var_888], xmm7
    vmovss  [rsp+8C8h+y], xmm0
    vmovss  dword ptr [rsp+8C8h+fmt], xmm8
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v16, fmtb, yb, 1, 1, v48, &colorWhite, 3);
  CG_DrawDebugMP_GetPWFlags(p_predictedPlayerState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm0, cs:__real@432f0000
    vmovss  [rsp+8C8h+var_888], xmm7
    vmovss  [rsp+8C8h+y], xmm6
    vmovss  dword ptr [rsp+8C8h+fmt], xmm0
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v16, fmtc, yc, 1, 1, v49, &colorWhite, 3);
  CG_DrawDebugMP_GetPOFlags(p_predictedPlayerState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm0, cs:__real@43af0000
    vmovss  [rsp+8C8h+var_888], xmm7
    vmovss  [rsp+8C8h+y], xmm6
    vmovss  dword ptr [rsp+8C8h+fmt], xmm0
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v16, fmtd, yd, 1, 1, v50, &colorWhite, 3);
  CG_DrawDebugMP_GetPEFlags(&predictedPlayerEntity->nextState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm0, cs:__real@42a00000
    vmovss  xmm1, cs:__real@44098000
    vmovss  [rsp+8C8h+var_888], xmm7
    vmovss  [rsp+8C8h+y], xmm0
    vmovss  dword ptr [rsp+8C8h+fmt], xmm1
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v16, fmte, ye, 1, 1, v51, &colorWhite, 3);
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
CG_DrawDebugMP_DrawPaidUserOverlay
==============
*/
void CG_DrawDebugMP_DrawPaidUserOverlay(const CgDrawDebug *drawDebug)
{
  const dvar_t *v4; 
  int v8; 
  const char *v9; 
  const ScreenPlacement *v10; 
  bool IsPaidUserReady; 
  const dvar_t *v13; 
  bool v14; 
  const dvar_t *v15; 
  char v16; 
  Online_Commerce *Instance; 
  Online_Commerce *v18; 
  bool v19; 
  Online_Commerce *v20; 
  bool HavePaidEntitlement; 
  const dvar_t *v22; 
  const char *v23; 
  const dvar_t *v24; 
  Online_Commerce *v25; 
  Online_Commerce *v26; 
  bool v27; 
  Online_Commerce *v28; 
  bool v29; 
  bool v30; 
  const char *v31; 
  const char *LocalClientPlatformUsername; 
  const char *label; 
  const char *text; 
  bool BoolSafe; 
  const char *v41; 
  bool HavePaidContentPackEntitlement; 
  int v47; 
  Online_Commerce *v49; 
  Online_Commerce *v50; 
  bool v51; 
  Online_Commerce *v52; 
  bool v53; 
  const char *v54; 
  const char *v57; 
  const char *v58; 
  unsigned int v62; 
  const dvar_t *v65; 
  const char *v66; 
  const dvar_t *v67; 
  const dvar_t *VarByName; 
  const char **v74; 
  const dvar_t *v75; 
  bool v76; 
  const char *v77; 
  char *v78; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  ScreenPlacement *ActivePlacement; 
  vec4_t color; 
  __int64 v93[6]; 
  char v94; 
  char v95[256]; 

  v4 = DVARBOOL_cg_drawPaidUserOverlay;
  if ( !DVARBOOL_cg_drawPaidUserOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPaidUserOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return;
  __asm
  {
    vmovaps [rsp+208h+var_38], xmm6
    vmovss  xmm6, cs:__real@43a28000
    vmovaps [rsp+208h+var_48], xmm8
    vmovaps [rsp+208h+var_58], xmm9
    vmovss  xmm8, cs:__real@42480000
    vmovss  xmm9, cs:__real@42c80000
  }
  ActivePlacement = (ScreenPlacement *)ScrPlace_GetActivePlacement(LOCAL_CLIENT_0);
  v8 = 0;
  v9 = " (dlc)";
  v10 = ActivePlacement;
  _R13 = &colorRed;
  do
  {
    if ( !Live_IsUserSignedIn(v8) )
      goto LABEL_57;
    IsPaidUserReady = LiveStorage_IsPaidUserReady(v8);
    v13 = DVARBOOL_com_force_free_to_play;
    v14 = IsPaidUserReady;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      goto LABEL_27;
    v15 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v16 = 1;
      goto LABEL_28;
    }
    if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    {
      v16 = 1;
      goto LABEL_28;
    }
    Instance = Online_Commerce::GetInstance();
    v19 = 1;
    if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, v8) != ENTITLEMENT_STATE_COMPLETE )
    {
      v18 = Online_Commerce::GetInstance();
      if ( Online_Commerce::GetPaidEntitlementTaskState(v18, v8) != ENTITLEMENT_STATE_ERROR )
        v19 = 0;
    }
    v20 = Online_Commerce::GetInstance();
    HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v20, v8);
    if ( Live_IsUserSignedInToLive(v8) && v19 && HavePaidEntitlement )
      v16 = 1;
    else
LABEL_27:
      v16 = 0;
LABEL_28:
    v22 = DVARBOOL_com_force_free_to_play;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      v23 = " (dvar)";
    }
    else
    {
      v24 = DVARBOOL_com_force_premium;
      if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.enabled )
      {
        v23 = " (dvar)";
      }
      else if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
      {
        v23 = " (dlc)";
      }
      else
      {
        v25 = Online_Commerce::GetInstance();
        v27 = 1;
        if ( Online_Commerce::GetPaidEntitlementTaskState(v25, v8) != ENTITLEMENT_STATE_COMPLETE )
        {
          v26 = Online_Commerce::GetInstance();
          if ( Online_Commerce::GetPaidEntitlementTaskState(v26, v8) != ENTITLEMENT_STATE_ERROR )
            v27 = 0;
        }
        v28 = Online_Commerce::GetInstance();
        v29 = Online_Commerce::HavePaidEntitlement(v28, v8);
        if ( !Live_IsUserSignedInToLive(v8) || !v27 || (v30 = !v29, v23 = " (xbl)", v30) )
          v23 = (char *)&queryFormat.fmt + 3;
      }
    }
    if ( v14 )
    {
      v31 = "free";
      if ( v16 )
        v31 = "paid";
      _RAX = &colorRed;
      if ( v16 )
        _RAX = &colorGreen;
    }
    else
    {
      v31 = "pending";
      _RAX = &colorYellow;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+208h+var_1B0], xmm0
    }
    LocalClientPlatformUsername = Live_GetLocalClientPlatformUsername(v8);
    label = j_va(" %s", LocalClientPlatformUsername);
    text = j_va("%s%s", v31, v23);
    v10 = ActivePlacement;
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+208h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, label, &color);
    __asm { vaddss  xmm6, xmm6, xmm0 }
LABEL_57:
    ++v8;
  }
  while ( v8 < 8 );
  __asm { vaddss  xmm6, xmm6, cs:__real@41000000 }
  BoolSafe = Dvar_GetBoolSafe("MTQLNMTRLS");
  if ( Content_IsEnumerationDone() )
  {
    if ( Content_DoWeHavePaidContentPackEntitlement() )
    {
      if ( BoolSafe )
        v9 = " (dvar)";
      v41 = j_va("entitled%s", v9);
    }
    else
    {
      v41 = "not entitled";
    }
  }
  else
  {
    v41 = "pending";
  }
  if ( Content_IsEnumerationDone() )
  {
    HavePaidContentPackEntitlement = Content_DoWeHavePaidContentPackEntitlement();
    _RCX = &colorRed;
    if ( HavePaidContentPackEntitlement )
      _RCX = &colorGreen;
  }
  else
  {
    _RCX = &colorYellow;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmm3, xmm6; posY
    vmovaps xmm2, xmm9; posX
    vmovss  dword ptr [rsp+208h+fmt], xmm8
    vmovups xmmword ptr [rsp+208h+var_1B0], xmm0
  }
  CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v41, " MP1 DLC", &color);
  v47 = 0;
  __asm { vaddss  xmm6, xmm6, xmm0 }
  do
  {
    if ( Live_IsUserSignedIn(v47) )
    {
      v49 = Online_Commerce::GetInstance();
      v51 = 1;
      if ( Online_Commerce::GetPaidEntitlementTaskState(v49, v47) != ENTITLEMENT_STATE_COMPLETE )
      {
        v50 = Online_Commerce::GetInstance();
        if ( Online_Commerce::GetPaidEntitlementTaskState(v50, v47) != ENTITLEMENT_STATE_ERROR )
          v51 = 0;
      }
      v52 = Online_Commerce::GetInstance();
      v53 = Online_Commerce::HavePaidEntitlement(v52, v47);
      if ( Live_IsUserSignedInToLive(v47) )
      {
        if ( v51 )
        {
          v54 = "not entitled";
          if ( v53 )
            v54 = "entitled";
        }
        else
        {
          v54 = "pending";
        }
      }
      else
      {
        v54 = "signed out";
      }
      if ( Live_IsUserSignedInToLive(v47) )
      {
        if ( v51 )
        {
          _RAX = &colorRed;
          if ( v53 )
            _RAX = &colorGreen;
        }
        else
        {
          _RAX = &colorYellow;
        }
      }
      else
      {
        _RAX = &colorDkGrey;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+208h+var_1B0], xmm0
      }
      v57 = Live_GetLocalClientPlatformUsername(v47);
      v58 = j_va(" %s", v57);
      v10 = ActivePlacement;
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm9; posX
        vmovss  dword ptr [rsp+208h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, ActivePlacement, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v54, v58, &color);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    ++v47;
  }
  while ( v47 < 8 );
  __asm { vaddss  xmm6, xmm6, cs:__real@41000000 }
  v62 = 0;
  if ( BoolSafe )
  {
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+208h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, "enabled", " bypassDLCCheck", &colorGreen);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  v65 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  if ( v65->current.enabled )
  {
    v66 = " com_force_free_to_play";
    goto LABEL_104;
  }
  v67 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v67->current.enabled )
  {
    v66 = " com_force_premium";
LABEL_104:
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm9; posX
      vmovss  dword ptr [rsp+208h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, "enabled", v66, &colorGreen);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  __asm { vaddss  xmm6, xmm6, cs:__real@41000000 }
  v93[0] = (__int64)"OMPKROKQPL";
  v93[1] = (__int64)"OKPORRORMM";
  v93[2] = (__int64)"MOMKSMKTOQ";
  v93[3] = (__int64)"LPKNOPTMLP";
  v93[4] = (__int64)"MKKKSTPNQL";
  v93[5] = (__int64)"LRONQNKRKM";
  VarByName = Dvar_FindVarByName("SSRQTKMLQ");
  if ( VarByName && VarByName->current.enabled )
    _R13 = &colorGreen;
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmmword ptr [rsp+208h+var_1B0], xmm0
  }
  memset_0(v95, 0, sizeof(v95));
  v74 = (const char **)v93;
  do
  {
    v75 = Dvar_FindVarByName(*v74);
    v76 = v75 && v75->current.enabled;
    v77 = " 0";
    if ( v76 )
      v77 = " 1";
    v78 = &v94;
    do
      v30 = *++v78 == 0;
    while ( !v30 );
    strcpy(v78, v77);
    ++v62;
    ++v74;
  }
  while ( v62 < 6 );
  __asm
  {
    vmovaps xmm3, xmm6; posY
    vmovaps xmm2, xmm9; posX
    vmovss  dword ptr [rsp+208h+fmt], xmm8
  }
  CgDrawDebug::CornerPrint((CgDrawDebug *)drawDebug, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmte, "upsell", v95, &color);
  __asm
  {
    vmovaps xmm9, [rsp+208h+var_58]
    vmovaps xmm8, [rsp+208h+var_48]
    vmovaps xmm6, [rsp+208h+var_38]
  }
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
  unsigned int v13; 
  CustomizationModelType v18; 
  __int64 v19; 
  StreamSyncClientType StreamTypeForCustomization; 
  unsigned int v21; 
  const char *ModelName; 
  __int64 v25; 
  char *v26; 
  const vec4_t *color; 
  float x; 
  float xa; 
  float xb; 
  float xc; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  ClientCustomizationInfo outCustomization; 
  unsigned int outCustomizationLoaded[4]; 
  char dest[128]; 
  char text[256]; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm8, cs:__real@3e99999a
    vmovaps xmm2, xmm8; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  [rsp+298h+var_258], xmm8
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+298h+var_270], xmm6
  }
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  __asm { vmovss  [rsp+298h+x], xmm6 }
  v13 = 0;
  UI_DrawText(ActivePlacement, "Head", 256, FontHandle, x, v38, 1, 1, v42, &colorWhite, 8);
  __asm
  {
    vmovss  xmm9, cs:__real@435c0000
    vmovss  [rsp+298h+var_258], xmm8
    vmovss  [rsp+298h+var_270], xmm6
    vmovss  [rsp+298h+x], xmm9
  }
  UI_DrawText(ActivePlacement, "Body", 256, FontHandle, xa, v39, 1, 1, v43, &colorWhite, 8);
  __asm
  {
    vmovss  xmm0, cs:__real@43dc0000
    vmovss  [rsp+298h+var_258], xmm8
    vmovss  [rsp+298h+var_270], xmm6
    vmovss  [rsp+298h+x], xmm0
  }
  UI_DrawText(ActivePlacement, "Viewarms", 256, FontHandle, xb, v40, 1, 1, v44, &colorWhite, 8);
  __asm { vmovss  xmm7, cs:__real@41c00000 }
  if ( CL_Streamsync_DebugGetClientData(localClientNum, 0, &outCustomization, outCustomizationLoaded) )
  {
    __asm
    {
      vmovaps [rsp+298h+var_78], xmm10
      vmovss  xmm10, cs:__real@41400000
    }
    do
    {
      v18 = CUSTOMIZATION_TYPE_HEAD;
      v19 = 0i64;
      do
      {
        StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(v18);
        v21 = outCustomization.modelIndex[v19];
        if ( v21 < Com_StreamSync_GetModelLimit(StreamTypeForCustomization) )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm6, xmm0, xmm9
          }
          ModelName = BG_Customization_GetModelName(v18, v21);
          Core_strcpy(dest, 0x80ui64, ModelName);
          v25 = -1i64;
          do
            ++v25;
          while ( dest[v25] );
          if ( (unsigned int)v25 > 0x19 )
          {
            v26 = &dest[(unsigned int)(v25 - 25)];
            *(_WORD *)v26 = 11822;
            v26[2] = 46;
          }
          else
          {
            v26 = dest;
          }
          Com_sprintf(text, 0x100ui64, "%04d - %s", outCustomization.modelIndex[v19], v26);
          color = &colorRed;
          if ( outCustomizationLoaded[v19] )
            color = &colorWhite;
          __asm
          {
            vmovss  [rsp+298h+var_258], xmm8
            vmovss  [rsp+298h+var_270], xmm7
            vmovss  [rsp+298h+x], xmm6
          }
          UI_DrawText(ActivePlacement, text, 256, FontHandle, xc, v41, 1, 1, v45, color, 8);
        }
        ++v18;
        ++v19;
      }
      while ( (unsigned int)v18 < CUSTOMIZATION_TYPE_COUNT );
      ++v13;
      __asm { vaddss  xmm7, xmm7, xmm10 }
    }
    while ( CL_Streamsync_DebugGetClientData(localClientNum, v13, &outCustomization, outCustomizationLoaded) );
    __asm { vmovaps xmm10, [rsp+298h+var_78] }
  }
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  __int64 v20; 
  __int64 v21; 

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
      LODWORD(v21) = maxClients;
      LODWORD(v20) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1569, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( cls.maxClients )", "clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    _RDX = &g_snapshotCollectedInfo[v12].clientInterpolationData[v10];
    _RDX->prevSnapOrigin.v[0] = prevSnapOrigin->v[0];
    _RDX->prevSnapOrigin.v[1] = prevSnapOrigin->v[1];
    _RDX->prevSnapOrigin.v[2] = prevSnapOrigin->v[2];
    _RDX->nextSnapOrigin.v[0] = nextSnapOrigin->v[0];
    _RDX->nextSnapOrigin.v[1] = nextSnapOrigin->v[1];
    _RDX->nextSnapOrigin.v[2] = nextSnapOrigin->v[2];
    _RDX->poseOrigin = *poseOrigin;
    _RAX = prevTrajectory;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    *(float *)&_RAX = prevTrajectory->trDelta.v[2];
    __asm { vmovups ymmword ptr [rdx+24h], ymm0 }
    LODWORD(_RDX->prevTrajectory.trDelta.v[2]) = (_DWORD)_RAX;
    _RAX = nextTrajectory;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    *(float *)&_RAX = nextTrajectory->trDelta.v[2];
    __asm
    {
      vmovups ymmword ptr [rdx+48h], ymm0
      vmovss  xmm0, [rsp+58h+arg_38]
      vmovss  dword ptr [rdx+6Ch], xmm0
    }
    LODWORD(_RDX->nextTrajectory.trDelta.v[2]) = (_DWORD)_RAX;
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
  __int64 v2; 
  __int64 ListOfATClientPosSubscribedTo; 
  int v4; 
  cg_t *LocalClientGlobals; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  CgEntitySystem *EntitySystem; 
  __int64 v11; 
  const char *v25; 
  bool v26; 
  const ScreenPlacement *v27; 
  __int64 align; 
  __int64 duration; 
  vec3_t *p_origin; 
  int *outATClients; 
  vec3_t origin; 

  v2 = localClientNum;
  outATClients = NULL;
  ListOfATClientPosSubscribedTo = CG_ConsoleCmdsMP_GetListOfATClientPosSubscribedTo((const int **)&outATClients);
  v4 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  v6 = ListOfATClientPosSubscribedTo;
  if ( (int)ListOfATClientPosSubscribedTo > 0 )
  {
    v7 = 0i64;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, cs:__real@42c80000
    }
    while ( 1 )
    {
      v9 = outATClients[v7];
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v2);
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(duration) = 2048;
        LODWORD(align) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", align, duration) )
          __debugbreak();
      }
      v11 = (__int64)&EntitySystem->m_entities[v9];
      if ( !v11 )
        goto LABEL_25;
      _RDI = v11 + 416;
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( *(_DWORD *)_RDI == 4 )
      {
        p_origin = &origin;
        *(_QWORD *)&origin.y = *(_QWORD *)(_RDI + 12) ^ __PAIR64__(s_trbase_aab_Z ^ *(_DWORD *)(_RDI + 20), *(_DWORD *)(_RDI + 16) ^ s_trbase_aab_Y);
        LODWORD(origin.v[0]) = *(_DWORD *)(_RDI + 12) ^ ~s_trbase_aab_X;
        __asm { vmovss  xmm0, dword ptr [rsp+0A8h+origin] }
        memset(&p_origin, 0, sizeof(p_origin));
        __asm { vmovss  dword ptr [rsp+0A8h+var_68], xmm0 }
        if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
          goto LABEL_32;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0A8h+origin+4]
          vmovss  dword ptr [rsp+0A8h+var_68], xmm0
        }
        if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
          goto LABEL_32;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0A8h+origin+8]
          vmovss  dword ptr [rsp+0A8h+var_68], xmm0
        }
        if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
        {
LABEL_32:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmovss  xmm1, dword ptr [rdi+10h]
          vmovss  dword ptr [rsp+0A8h+origin], xmm0
          vmovss  xmm0, dword ptr [rdi+14h]
          vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
          vmovss  dword ptr [rsp+0A8h+origin+4], xmm1
        }
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+0A8h+origin+8]
        vmovss  xmm2, dword ptr [rsp+0A8h+origin+4]
        vmovss  xmm1, dword ptr [rsp+0A8h+origin]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v25 = j_va("%f, %f, %f\n", _RDX, _R8, _R9);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v27 = &scrPlaceViewDisplay[v2];
          goto LABEL_24;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v26 )
          __debugbreak();
      }
      v27 = &scrPlaceFull;
LABEL_24:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vmulss  xmm2, xmm0, xmm6; y
        vxorps  xmm1, xmm1, xmm1; x
      }
      CG_DrawSmallDevStringColor(v27, *(float *)&_XMM1, *(float *)&_XMM2, v25, &colorGreen, 5);
      CL_AddDebugBox(&LocalClientGlobals->refdef.view.axis, &origin, &s_boxLower_0, &s_boxUpper_0, &colorRed, 0, 0, 0);
LABEL_25:
      ++v4;
      if ( ++v7 >= v6 )
      {
        __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
        return;
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawATClientStates
==============
*/

void __fastcall CG_DrawDebug_DrawATClientStates(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  int v5; 
  int ListOfATCLientRemoteDebugSubscribedTo; 
  __int64 v7; 
  __int64 v8; 
  __int64 v10; 
  const char *v11; 
  bool v12; 
  const ScreenPlacement *v13; 
  __int64 align; 
  __int64 v18; 
  const int *v20; 

  v4 = localClientNum;
  v5 = 0;
  v20 = NULL;
  ListOfATCLientRemoteDebugSubscribedTo = CG_ConsoleCmdsMP_GetListOfATCLientRemoteDebugSubscribedTo(&v20);
  v7 = ListOfATCLientRemoteDebugSubscribedTo;
  if ( ListOfATCLientRemoteDebugSubscribedTo > 0 )
  {
    v8 = 0i64;
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovss  xmm6, cs:__real@42c80000
    }
    while ( 1 )
    {
      v10 = v20[v8];
      if ( (unsigned int)v10 >= 0xC8 )
      {
        LODWORD(v18) = 200;
        LODWORD(align) = v20[v8];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 2665, ASSERT_TYPE_ASSERT, "(unsigned)( ATClientNum ) < (unsigned)( ( sizeof( *array_counter( s_remoteATClientStates ) ) + 0 ) )", "ATClientNum doesn't index ARRAY_COUNT( s_remoteATClientStates )\n\t%i not in [0, %i)", align, v18) )
          __debugbreak();
      }
      v11 = j_va("%s\n", s_remoteATClientStates[v10]);
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v13 = &scrPlaceViewDisplay[v4];
          goto LABEL_13;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v12 )
          __debugbreak();
      }
      v13 = &scrPlaceFull;
LABEL_13:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm2, xmm0, xmm6; y
        vxorps  xmm1, xmm1, xmm1; x
      }
      CG_DrawSmallDevStringColor(v13, *(float *)&_XMM1_8, *(float *)&_XMM2, v11, &colorGreen, 5);
      ++v5;
      if ( ++v8 >= v7 )
      {
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
        return;
      }
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
  const dvar_t *v2; 
  __int64 v3; 
  Physics_WorldId v4; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v7; 
  CgHandler *Handler; 
  CgHandler *v9; 
  trace_t *p_results; 
  char v19; 
  char v20; 
  unsigned __int16 EntityHitId; 
  CgEntitySystem *EntitySystem; 
  unsigned int v23; 
  unsigned int v24; 
  char *v25; 
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

  v2 = DVARBOOL_entityLeakDisplay;
  v3 = localClientNum;
  if ( !DVARBOOL_entityLeakDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(skipChildren) = 2;
      LODWORD(ignoreArbitraryUp) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ignoreArbitraryUp, skipChildren) )
        __debugbreak();
    }
    if ( (int)v3 < cg_t::ms_allocatedCount )
    {
      v4 = 3 * v3 + 3;
      if ( PhysicsQuery_IsWorldInitialized((Physics_WorldId)(3 * v3 + 2)) && PhysicsQuery_IsWorldInitialized(v4) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+0A0h+outOrigin], xmm0
          vmovss  dword ptr [rbp+0A0h+outOrigin+4], xmm0
          vmovss  dword ptr [rbp+0A0h+outOrigin+8], xmm0
        }
        p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState;
        if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
          __debugbreak();
        v7 = CgWeaponMap::ms_instance[v3];
        Handler = CgHandler::getHandler((LocalClientNum_t)v3);
        BG_GetPlayerEyePosition(v7, p_predictedPlayerState, &outOrigin, Handler);
        v9 = CgHandler::getHandler((LocalClientNum_t)v3);
        BG_GetPlayerViewDirection(p_predictedPlayerState, &forward, &right, &up, v9, 0);
        __asm
        {
          vmovss  xmm3, cs:__real@467a0000
          vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+forward]
          vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+outOrigin]
          vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+forward+4]
          vmovss  dword ptr [rbp+0A0h+end], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+outOrigin+4]
          vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+forward+8]
          vmovss  dword ptr [rbp+0A0h+end+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+outOrigin+8]
          vmovss  dword ptr [rbp+0A0h+end+8], xmm2
        }
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v3 + 2), &results, &outOrigin, &end, &bounds_origin, p_predictedPlayerState->clientNum, 0, 33570816, 0, NULL, All);
        PhysicsQuery_LegacyTrace(v4, &trace, &outOrigin, &end, &bounds_origin, p_predictedPlayerState->clientNum, 0, 256, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rsp+1A0h+trace.fraction]
          vcomiss xmm0, [rbp+0A0h+results.fraction]
        }
        p_results = &results;
        if ( v19 | v20 )
          p_results = &trace;
        EntityHitId = Trace_GetEntityHitId(p_results);
        if ( EntityHitId != 2047 )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
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
            if ( (unsigned int)v3 >= 2 )
            {
              LODWORD(skipChildrena) = 2;
              LODWORD(ignoreArbitraryUpa) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", ignoreArbitraryUpa, skipChildrena) )
                __debugbreak();
            }
            v23 = 2533 * v3 + EntityHitId;
            if ( v23 >= 0x13CA )
            {
              LODWORD(skipChildrena) = 2533 * v3 + EntityHitId;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", skipChildrena) )
                __debugbreak();
            }
            v24 = clientObjMap[v23];
            if ( v24 )
            {
              if ( v24 >= (unsigned int)s_objCount )
              {
                LODWORD(skipChildrena) = v24;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", skipChildrena) )
                  __debugbreak();
              }
              v25 = s_objBuf[v24];
              if ( v25 )
              {
                if ( Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 4 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 6 )
                {
                  if ( *(_QWORD *)v25 )
                  {
                    __asm { vmovss  xmm2, cs:__real@41a00000; yPos }
                    CG_DrawDebug_DrawAnims((LocalClientNum_t)v3, EntityHitId, *(float *)&_XMM2);
                  }
                }
                else
                {
                  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDebugBonesBind, "cg_drawDebugBonesBind");
                  CG_DrawDebug_DrawBones((const LocalClientNum_t)v3, Bool_Internal_DebugName, CG_DEBUG_DRAW_BONES_SHARED_ONLY, NULL, EntityHitId);
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

void __fastcall CG_DrawDebug_PlayerAnimScriptInfo_Server(LocalClientNum_t localClientNum, double requestedYPos, int handle, AnimScriptDebugMode eventsMode)
{
  _QWORD *v5; 
  playerState_s *ps; 
  characterInfo_t *ci; 

  v5 = NtCurrentTeb()->Reserved1[11];
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( *(_QWORD *)(v5[tls_index] + 272i64) && G_MainMP_GetDebugInfoForAnimScriptOverlay(handle, (const characterInfo_t **)&ci, (const playerState_s **)&ps) )
  {
    if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1998, ASSERT_TYPE_ASSERT, "( ( ci != nullptr ) )", "( ci ) = %p", NULL) )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 1999, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
      __debugbreak();
    __asm { vmovaps xmm1, xmm6; requestedYPos }
    CG_DrawDebug_PlayerAnimScriptInfo(localClientNum, *(float *)&_XMM1, ci, ps, handle, ANIM_SCRIPT_DEBUG_MODE_SERVER, eventsMode);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v15; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v24; 
  const dvar_t *v26; 
  int integer; 
  const dvar_t *v28; 
  int v29; 
  int v31; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  bool enabled; 
  const dvar_t *v50; 
  void *retaddr; 
  float yPos; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax+18h], xmm0
  }
  CG_DrawDebug_DrawScriptedAnims(localClientNum, &yPos);
  v8 = DVARINT_cg_drawBoneVisibility;
  if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer >= 0 )
  {
    v9 = DVARINT_cg_drawBoneVisibility;
    if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    CG_DrawDebug_DrawBoneVisibility(localClientNum, v9->current.integer, &yPos);
  }
  v10 = DVARINT_cg_debugCharacterController;
  if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer >= 0 )
  {
    v11 = DVARINT_cg_debugCharacterController;
    if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    CG_DrawDebug_CharacterController(localClientNum, v11->current.integer, &yPos);
  }
  v12 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer >= 4 )
    CG_DrawDebug_DrawEntityOverlay(localClientNum);
  v13 = DVARINT_cg_dumpAnimsToScreen;
  if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  Dvar_CheckFrontendServerThread(v13);
  __asm { vmovss  xmm6, cs:__real@43660000 }
  if ( v13->current.integer >= 0 )
  {
    v15 = DVARINT_cg_dumpAnimsToScreen;
    __asm { vmovss  xmm7, [rsp+78h+yPos] }
    if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    __asm { vmovaps xmm2, xmm7; yPos }
    if ( CG_DrawDebug_DrawAnims(localClientNum, v15->current.integer, *(float *)&_XMM2) )
    {
      __asm
      {
        vaddss  xmm1, xmm6, [rsp+78h+yPos]
        vmovss  [rsp+78h+yPos], xmm1
      }
    }
  }
  v19 = DVARINT_cg_dumpAnimsToScreen2;
  if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer >= 0 )
  {
    v20 = DVARINT_cg_dumpAnimsToScreen2;
    __asm { vmovss  xmm7, [rsp+78h+yPos] }
    if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    __asm { vmovaps xmm2, xmm7; yPos }
    if ( CG_DrawDebug_DrawAnims(localClientNum, v20->current.integer, *(float *)&_XMM2) )
    {
      __asm
      {
        vaddss  xmm1, xmm6, [rsp+78h+yPos]
        vmovss  [rsp+78h+yPos], xmm1
      }
    }
  }
  v24 = DVARINT_animscript_debug;
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer >= 0 )
  {
    v26 = DVARINT_animscript_debug;
    if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    integer = v26->current.integer;
    v28 = DCONST_DVARINT_animscript_debug_mode;
    if ( !DCONST_DVARINT_animscript_debug_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = v28->current.integer;
    switch ( v29 )
    {
      case 0:
        __asm { vmovss  xmm1, [rsp+78h+yPos] }
        v31 = (unsigned __int8)v29 + 2;
LABEL_56:
        CG_DrawDebug_PlayerAnimScriptInfo_Client(localClientNum, *(float *)&_XMM1, integer, (AnimScriptDebugMode)v31);
        break;
      case 1:
        __asm { vmovss  xmm1, [rsp+78h+yPos]; requestedYPos }
        CG_DrawDebug_PlayerAnimScriptInfo_Server(localClientNum, *(float *)&_XMM1, integer, (AnimScriptDebugMode)(v29 + 1));
        break;
      case 2:
        __asm { vmovss  xmm1, [rsp+78h+yPos]; requestedYPos }
        CG_DrawDebug_PlayerAnimScriptInfo_Server(localClientNum, *(float *)&_XMM1, integer, (AnimScriptDebugMode)(v29 - 1));
        LOBYTE(_EAX) = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_animscript_debug_show_conditions, "animscript_debug_show_conditions");
        __asm { vmovss  xmm2, cs:__real@428c0000 }
        _ECX = 0;
        _EAX = (unsigned __int8)_EAX;
        __asm
        {
          vmovd   xmm1, ecx
          vmovd   xmm0, eax
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm0, [rsp+78h+yPos]
          vmovss  xmm1, cs:__real@431b0000
          vblendvps xmm4, xmm1, xmm2, xmm3
          vaddss  xmm1, xmm4, xmm0; requestedYPos
          vmovss  [rsp+78h+yPos], xmm4
          vmovss  [rsp+78h+yPos], xmm1
        }
        v31 = 0;
        goto LABEL_56;
    }
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+78h+yPos]
      vmovss  [rsp+78h+yPos], xmm1
    }
  }
  v45 = DVARINT_playerasm_debugMode;
  if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  if ( v45->current.integer >= 0 )
  {
    v46 = DVARINT_playerasm_debugMode;
    if ( !DVARINT_playerasm_debugMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debugMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.integer )
      CG_DrawDebug_PlayerASM_ExecutionOverlay(localClientNum);
  }
  v47 = DVARINT_cg_dumpBlendSpaces;
  if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  if ( v47->current.integer >= 0 )
  {
    v48 = DVARBOOL_cg_dumpblendspaces_coverage;
    if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    enabled = v48->current.enabled;
    v50 = DVARINT_cg_dumpBlendSpaces;
    __asm { vmovss  xmm6, [rsp+78h+yPos] }
    if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm
    {
      vmovss  xmm2, cs:__real@41200000; startX
      vmovaps xmm3, xmm6; startY
    }
    CG_DrawDebug_DrawBlendSpaces(localClientNum, v50->current.integer, *(float *)&_XMM2, *(float *)&_XMM3, enabled);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
CgDrawDebugMP::DrawClientNetPerf
==============
*/

float __fastcall CgDrawDebugMP::DrawClientNetPerf(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v12; 
  cg_t *LocalClientGlobals; 
  const char *text; 
  const char *v27; 
  const char *v35; 
  const char *v39; 
  const char *v43; 
  const char *v47; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !CG_ClientNetPerf_IsSystemEnabled() )
    goto LABEL_7;
  v12 = DVARBOOL_cg_drawClientNetPerf;
  if ( !DVARBOOL_cg_drawClientNetPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientNetPerf") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm8 }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+52D0h]
      vmulss  xmm1, xmm1, cs:__real@407afafb
      vcvttss2si edx, xmm1
      vmovaps xmm8, xmm0
    }
    text = j_va("%d", _RDX);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " ping");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, " ping", &colorWhite);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+52D8h]
      vmulss  xmm2, xmm1, cs:__real@407afafb
      vcvttss2si edx, xmm2
      vaddss  xmm6, xmm6, xmm0
    }
    v27 = j_va("%d", _RDX);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " extrapolation");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v27, " extrapolation", &colorWhite);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+52D4h]
      vmulss  xmm2, xmm1, cs:__real@407afafb
      vcvttss2si edx, xmm2
      vaddss  xmm6, xmm6, xmm0
    }
    v35 = j_va("%d", _RDX);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " interpolation");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v35, " interpolation", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v39 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdReceivedTime);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cmdReceived");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v39, " cmdReceived", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v43 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdQueuedTime);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cmdQueued");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v43, " cmdQueued", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v47 = j_va("%d", (unsigned int)LocalClientGlobals->predictedPlayerState.netPerf.maxUserCmdDroppedCount);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cmdDropped");
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v47, " cmdDropped", &colorWhite);
    __asm
    {
      vmovaps xmm8, [rsp+78h+var_38]
      vaddss  xmm0, xmm0, xmm6
    }
  }
  else
  {
LABEL_7:
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::DrawEntitiesLoD
==============
*/
void CgDrawDebugMP::DrawEntitiesLoD(CgDrawDebugMP *this, const LocalClientNum_t localClientNum)
{
  _QWORD *v5; 
  unsigned int v6; 
  LocalClientNum_t v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  const CgSnapshotMP *NextSnap; 
  const vec3_t *v16; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v19; 
  bool v20; 
  unsigned int v21; 
  bool v22; 
  char v23; 
  unsigned __int64 v24; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v25; 
  unsigned int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  const char *v36; 
  bool v38; 
  __int64 v39; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float fmt; 
  float fmta; 
  __int64 depthTest; 
  int depthTesta; 
  int depthTestb; 
  __int64 duration; 
  float v58; 
  float v59; 
  int v60; 
  vec3_t *p_origin; 
  __int64 v62; 
  __int64 v63; 
  LocalClientNum_t v64; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 
  char dest[32]; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = NtCurrentTeb()->Reserved1[11];
  v6 = 0;
  v7 = localClientNum;
  v64 = localClientNum;
  v8 = 0;
  v9 = 0;
  v62 = 0i64;
  v10 = 0;
  v11 = v5[tls_index];
  v63 = 0i64;
  if ( dword_151446978 > *(_DWORD *)(v11 + 1772) )
  {
    j__Init_thread_header(&dword_151446978);
    if ( dword_151446978 == -1 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
        vmovups xmm1, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
        vmovups xmmword ptr cs:s_color, xmm0
        vmovups xmmword ptr cs:s_color+10h, xmm1
      }
      j__Init_thread_footer(&dword_151446978);
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(v7);
  NextSnap = CG_SnapshotMP_GetNextSnap(v7);
  if ( !NextSnap )
    NextSnap = CG_SnapshotMP_GetPrevSnap(v7);
  _RDI = DVARFLT_sv_netfieldHighLoDDistSq;
  if ( !DVARFLT_sv_netfieldHighLoDDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_netfieldHighLoDDistSq") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vsqrtss xmm6, xmm6, xmm6
  }
  v16 = (const vec3_t *)NextSnap->GetPlayerState(&NextSnap->snapshot_t, (const LocalClientNum_t)v7);
  __asm { vmovaps xmm1, xmm6; radius }
  CG_DebugSphere(v16 + 4, *(float *)&_XMM1, &colorRed, 0, 0);
  if ( (NextSnap->snapFlags & 8) == 0 )
  {
    v60 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      _RBX = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)&NextSnap->entities[0].lerp.pos.trBase.z;
      do
      {
        v19 = _RBX - 9;
        if ( _RBX != (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)36 )
        {
          if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
            __debugbreak();
          v20 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(_RBX - 6, ACTIVE, 0x1Eu);
          v21 = SLOWORD(v19->m_flags[0]);
          v22 = v20;
          if ( v21 >= 0x800 )
          {
            LODWORD(duration) = 2048;
            LODWORD(depthTest) = SLOWORD(v19->m_flags[0]);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", depthTest, duration) )
              __debugbreak();
          }
          v23 = v21;
          v24 = (unsigned __int64)v21 >> 5;
          v25 = _RBX - 5;
          v26 = NextSnap->entitiesLoD.array[v24] & (0x80000000 >> (v23 & 0x1F));
          if ( _RBX == (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)v25 + 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( v25->m_flags[0] == 4 )
          {
            v27 = _RBX[-1].m_flags[0];
            p_origin = &origin;
            v28 = v27 ^ _RBX->m_flags[0];
            v29 = _RBX[-2].m_flags[0] ^ s_trbase_aab_Y ^ v27;
            LODWORD(origin.v[2]) = s_trbase_aab_Z ^ v28;
            LODWORD(origin.v[1]) = v29;
            LODWORD(origin.v[0]) = _RBX[-2].m_flags[0] ^ ~s_trbase_aab_X;
            __asm { vmovss  xmm0, dword ptr [rbp+57h+origin] }
            memset(&p_origin, 0, sizeof(p_origin));
            __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm0 }
            if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
              goto LABEL_37;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+origin+4]
              vmovss  dword ptr [rbp+57h+var_A8], xmm0
            }
            if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
              goto LABEL_37;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+origin+8]
              vmovss  dword ptr [rbp+57h+var_A8], xmm0
            }
            if ( ((unsigned int)p_origin & 0x7F800000) == 2139095040 )
            {
LABEL_37:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-8]
              vmovss  xmm1, dword ptr [rbx-4]
              vmovss  dword ptr [rbp+57h+origin], xmm0
              vmovss  xmm0, dword ptr [rbx]
              vmovss  dword ptr [rbp+57h+origin+8], xmm0
              vmovss  dword ptr [rbp+57h+origin+4], xmm1
            }
          }
          CL_AddDebugBox(&LocalClientGlobals->refdef.view.axis, &origin, &s_boxLower, &s_boxUpper, (const vec4_t *)((char *)s_color + (v26 != 0 ? 0x10 : 0)), 0, 0, 0);
          v36 = j_va("%d /%d", (unsigned int)SLOWORD(v19->m_flags[0]), (unsigned int)SLOWORD(_RBX[-7].m_flags[0]));
          __asm { vmovaps xmm2, xmm6; scale }
          CL_AddDebugString(&origin, (const vec4_t *)((char *)s_color + (v26 != 0 ? 0x10 : 0)), *(float *)&_XMM2, v36, 0, 0);
          v38 = v26 != 0;
          v8 = v60;
          v39 = v38 ? 4 : 0;
          if ( v22 )
            ++*(_DWORD *)((char *)&v63 + v39);
          else
            ++*(_DWORD *)((char *)&v62 + v39);
        }
        ++v8;
        _RBX += 62;
        v60 = v8;
      }
      while ( v8 < NextSnap->numEntities );
      v8 = HIDWORD(v62);
      v6 = v62;
      v10 = HIDWORD(v63);
      v9 = v63;
      v7 = v64;
    }
  }
  __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
  ActivePlacement = ScrPlace_GetActivePlacement(v7);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  Com_sprintf<32>((char (*)[32])dest, "entities Low LoD: %d (%d)", v6, v9);
  __asm
  {
    vmovss  xmm0, cs:__real@41a00000
    vmovss  xmm7, cs:__real@3e99999a
    vmovss  dword ptr [rsp+110h+var_D0], xmm7
    vmovss  [rsp+110h+depthTest], xmm0
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+110h+fmt], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 32, FontHandle, fmt, *(float *)&depthTesta, 1, 1, v58, s_color, 3);
  Com_sprintf<32>((char (*)[32])dest, "entities High LoD: %d (%d)", (unsigned int)v8, v10);
  __asm
  {
    vmovss  xmm0, cs:__real@420c0000
    vmovss  dword ptr [rsp+110h+var_D0], xmm7
    vmovss  [rsp+110h+depthTest], xmm0
    vmovss  dword ptr [rsp+110h+fmt], xmm6
  }
  UI_DrawText(ActivePlacement, dest, 32, FontHandle, fmta, *(float *)&depthTestb, 1, 1, v59, &s_color[1], 3);
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  const dvar_t *v7; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int i; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned __int16 WorldTransientIndexFromZoneIndex; 
  unsigned int MPAttachmentAvailCount; 
  unsigned int v22; 
  unsigned int MPCustomizationAvailCount; 
  unsigned int MPPhysicsAvailCount; 
  unsigned int MPInfilAvailCount; 
  unsigned int LODFileCount; 
  unsigned int v27; 
  GfxFont *v30; 
  const ScreenPlacement *v31; 
  __int64 v33; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v64; 
  ScreenPlacement *scrPlace; 
  GfxFont *font; 
  vec4_t color; 
  char dest[512]; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) )
  {
    v7 = DVARBOOL_cg_drawTransients;
    if ( !DVARBOOL_cg_drawTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f3333333f8000003f3333333ecccccd
        vmovaps [rsp+318h+var_38], xmm6
        vmovaps [rsp+318h+var_48], xmm7
        vmovaps [rsp+318h+var_58], xmm8
        vmovaps [rsp+318h+var_68], xmm9
        vmovss  xmm9, cs:__real@43d48000
        vmovups xmmword ptr [rsp+318h+var_290], xmm0
        vmovss  xmm2, cs:__real@3f155555; scale
      }
      scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement(localClientNum);
      font = UI_GetFontHandle(scrPlace, 0, *(float *)&_XMM2);
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      for ( i = 0; i < 0x7A4; ++i )
      {
        if ( DB_Zones_IsValidZoneIndex(i) )
        {
          ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
          if ( (ZoneFlagsFromIndex & 0x3800000) != 0 )
          {
            ++v16;
          }
          else if ( (ZoneFlagsFromIndex & 0xFF000) != 0 )
          {
            if ( (ZoneFlagsFromIndex & 0x80000) != 0 )
            {
              ++v11;
            }
            else if ( (ZoneFlagsFromIndex & 0x8000) != 0 )
            {
              WorldTransientIndexFromZoneIndex = DB_Zones_GetWorldTransientIndexFromZoneIndex(i);
              if ( CL_TransientsWorldMP_IsLOD0(WorldTransientIndexFromZoneIndex) )
                ++v17;
              ++v13;
            }
            else if ( (ZoneFlagsFromIndex & 0x10000) != 0 )
            {
              ++v14;
            }
            else if ( (ZoneFlagsFromIndex & 0x60000) != 0 )
            {
              ++v15;
            }
            else
            {
              ++v12;
            }
          }
        }
      }
      v64 = v15;
      v63 = v14;
      v62 = v13;
      v61 = v12;
      v60 = v17;
      MPAttachmentAvailCount = DB_Transients_GetMPAttachmentAvailCount();
      v22 = DB_Transients_GetMPWeaponAvailCount() + MPAttachmentAvailCount;
      MPCustomizationAvailCount = DB_Transients_GetMPCustomizationAvailCount();
      MPPhysicsAvailCount = DB_Transients_GetMPPhysicsAvailCount();
      MPInfilAvailCount = DB_Transients_GetMPInfilAvailCount();
      LODFileCount = CL_TransientsWorldMP_GetLODFileCount(0);
      v27 = CL_TransientsWorldMP_GetLODFileCount(1u);
      __asm
      {
        vmovss  xmm6, cs:__real@3e3851ec
        vmovss  xmm7, cs:__real@c0f00000
      }
      if ( MPCustomizationAvailCount )
      {
        LODWORD(fmt) = MPCustomizationAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Customization Transients", v11, fmt);
        v30 = font;
        v31 = scrPlace;
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(scrPlace, dest, 512, font, fmta, y, 1, 1, v53, &color, 3);
        __asm { vmovss  xmm9, cs:__real@43d10000 }
      }
      else
      {
        v31 = scrPlace;
        v30 = font;
      }
      __asm { vmovss  xmm8, cs:__real@c0e00000 }
      if ( v22 )
      {
        LODWORD(fmt) = v22;
        Com_sprintf(dest, 0x200ui64, "%u / %u Weapon Transients", v61, fmt);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmtb, ya, 1, 1, v54, &color, 3);
        __asm { vaddss  xmm9, xmm9, xmm8 }
      }
      if ( LODFileCount )
      {
        LODWORD(fmt) = LODFileCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u World LOD0 Transients", v60, fmt);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmtc, yb, 1, 1, v55, &color, 3);
        __asm { vaddss  xmm9, xmm9, xmm8 }
      }
      if ( v27 )
      {
        v33 = v62 - v60;
        LODWORD(fmt) = v27;
        if ( v62 <= v60 )
          v33 = 0i64;
        Com_sprintf(dest, 0x200ui64, "%u / %u World LOD1 Transients", v33, fmt);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmtd, yc, 1, 1, v56, &color, 3);
        __asm { vaddss  xmm9, xmm9, xmm8 }
      }
      if ( MPPhysicsAvailCount )
      {
        LODWORD(fmt) = MPPhysicsAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Physics Transients", v63, fmt);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmte, yd, 1, 1, v57, &color, 3);
        __asm { vaddss  xmm9, xmm9, xmm8 }
      }
      if ( MPInfilAvailCount )
      {
        LODWORD(fmt) = MPInfilAvailCount;
        Com_sprintf(dest, 0x200ui64, "%u / %u Infil Transients", v64, fmt);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmtf, ye, 1, 1, v58, &color, 3);
        __asm { vaddss  xmm9, xmm9, xmm8 }
      }
      __asm { vmovaps xmm8, [rsp+318h+var_58] }
      if ( v16 )
      {
        Com_sprintf(dest, 0x200ui64, "%u Preload Transients", v16);
        __asm
        {
          vmovss  [rsp+318h+var_2D8], xmm6
          vmovss  [rsp+318h+y], xmm9
          vmovss  dword ptr [rsp+318h+fmt], xmm7
        }
        UI_DrawText(v31, dest, 512, v30, fmtg, yf, 1, 1, v59, &color, 3);
      }
      __asm
      {
        vmovaps xmm7, [rsp+318h+var_48]
        vmovaps xmm6, [rsp+318h+var_38]
        vmovaps xmm9, [rsp+318h+var_68]
      }
    }
  }
}

/*
==============
CgDrawDebugMP::PrintAntilagInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintAntilagInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm { vmovaps xmm0, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintEntityDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintEntityDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v8; 
  const dvar_t *v12; 
  char v13; 
  const vec4_t *color; 
  char *fmt; 
  float fmta; 
  char *text; 
  char *label; 
  unsigned int outTotalCount; 
  unsigned int outMaxPerSnapshotCount; 
  unsigned int outMaxPerClientCount; 
  unsigned int outHighestClientVisibleCount; 
  char dest[64]; 

  __asm { vmovaps [rsp+0E8h+var_38], xmm6 }
  v8 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer )
  {
    v12 = DVARBOOL_cg_drawentitycounts;
    if ( !DVARBOOL_cg_drawentitycounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawentitycounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && Com_IsAnyLocalServerRunning() )
    {
      SV_MainMP_GetDebugEntityCounts(&outHighestClientVisibleCount, &outTotalCount, &outMaxPerSnapshotCount, &outMaxPerClientCount);
      if ( outMaxPerSnapshotCount )
      {
        if ( outMaxPerClientCount && (outTotalCount || outHighestClientVisibleCount) )
        {
          __asm { vmovaps [rsp+0E8h+var_48], xmm7 }
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " entities");
          __asm
          {
            vmovss  xmm3, cs:__real@3f59999a
            vmovaps xmm7, xmm0
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r8
            vxorps  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm0, xmm3
            vcvtsi2ss xmm2, xmm2, rdx
            vcomiss xmm2, xmm1
          }
          if ( v13 )
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm1, xmm1, r9
              vcvtsi2ss xmm0, xmm0, rcx
              vcomiss xmm1, xmm0
              vmulss  xmm0, xmm0, xmm3
              vcomiss xmm1, xmm0
            }
            color = &colorYellow;
            if ( v13 )
              color = &colorWhite;
          }
          else
          {
            color = &colorRed;
          }
          LODWORD(label) = outMaxPerSnapshotCount;
          LODWORD(text) = outTotalCount;
          LODWORD(fmt) = outMaxPerClientCount;
          Com_sprintf(dest, 0x40ui64, "CL %i / %i SV %i / %i", outHighestClientVisibleCount, fmt, text, label);
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vmovaps xmm2, xmm0; posX
            vmovaps xmm3, xmm6; posY
            vmovss  dword ptr [rsp+0E8h+fmt], xmm7
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, dest, " entities", color);
          __asm
          {
            vmovaps xmm7, [rsp+0E8h+var_48]
            vaddss  xmm6, xmm6, xmm0
          }
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+0E8h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintGameBattlesDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintGameBattlesDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const char *text; 
  const char *AsyncTaskStateNameDebugString; 
  float v23; 
  float v24; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( GameBattles_IsScreenDebugEnabled() )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm7 }
    text = GameBattles_GetMatchJoinStateNameDebugString(localClientNum);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  xmm7, cs:__real@42c80000
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+68h+var_48], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v23, text, " MLG Join State", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    AsyncTaskStateNameDebugString = GameBattles_GetAsyncTaskStateNameDebugString(localClientNum);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+68h+var_48], xmm7
    }
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v24, AsyncTaskStateNameDebugString, " MLG Async Task", &colorWhite);
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vaddss  xmm0, xmm0, xmm6
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintMPDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintMPDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v8; 
  __int64 v10; 
  int ControllerFromClient; 
  const char *v16; 
  bool HaveStats; 
  const char *v18; 
  const char *v19; 
  const char *MatchIdString; 
  const dvar_t *v26; 
  cg_t *v27; 
  const char *v29; 
  const snapshot_t *nextSnap; 
  const vec4_t *color; 
  const char *v35; 
  const snapshot_t *snap; 
  const char *v40; 
  const snapshot_t *v43; 
  const char *v44; 
  const dvar_t *v47; 
  int i; 
  characterInfo_t *CharacterInfo; 
  const char *v50; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  char *text; 
  char *texta; 
  char *textb; 
  char *label; 
  char *labela; 
  char *labelb; 

  v8 = DVARBOOL_cg_drawStatsSource;
  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  v10 = localClientNum;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DVARBOOL_cg_drawStatsSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStatsSource") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps [rsp+98h+var_58], xmm8
  }
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
    __asm { vmovaps xmm7, xmm0 }
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v10);
    v16 = "offline";
    if ( LiveStorage_GetActiveStatsSource(ControllerFromClient) != STATS_OFFLINE )
      v16 = "online";
    HaveStats = LiveStorage_DoWeHaveStats(ControllerFromClient);
    v18 = " (not fetched)";
    if ( HaveStats )
      v18 = (char *)&queryFormat.fmt + 3;
    v19 = j_va("%s%s", v16, v18);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v19, " stats", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    MatchIdString = OnlineMatchId::GetMatchIdString();
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm8; posX
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, MatchIdString, " match id", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  v26 = DVARBOOL_cg_drawSystemTime;
  if ( !DVARBOOL_cg_drawSystemTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSystemTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    if ( (unsigned int)v10 >= 2 )
    {
      LODWORD(label) = 2;
      LODWORD(text) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
      LODWORD(labela) = 2;
      LODWORD(texta) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", texta, labela) )
        __debugbreak();
    }
    if ( !clientUIActives[v10].frontEndSceneState[0] )
    {
      if ( (unsigned int)v10 >= 2 )
      {
        LODWORD(label) = 2;
        LODWORD(text) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
          __debugbreak();
      }
      if ( clientUIActives[v10].connectionState == CA_ACTIVE )
      {
        if ( (unsigned int)v10 >= cg_t::ms_allocatedCount )
        {
          LODWORD(label) = cg_t::ms_allocatedCount;
          LODWORD(text) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", text, label) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
        {
          LODWORD(label) = cg_t::ms_allocatedType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", label) )
            __debugbreak();
        }
        v27 = cg_t::ms_cgArray[v10];
        ClActiveClientMP::GetClientMP((const LocalClientNum_t)v10);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm { vmovaps xmm8, xmm0 }
        v29 = j_va("%i", (unsigned int)v27->oldTime);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cOldTime");
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm8; posX
          vmovss  dword ptr [rsp+98h+fmt], xmm0
        }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v29, " cOldTime", &colorWhite);
        nextSnap = v27->nextSnap;
        color = &colorWhite;
        __asm { vaddss  xmm6, xmm6, xmm0 }
        if ( nextSnap )
        {
          color = &colorRed;
          if ( v27->time < nextSnap->serverTime )
            color = &colorWhite;
        }
        v35 = j_va("%i", (unsigned int)v27->time);
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cCurTime");
        __asm
        {
          vmovaps xmm3, xmm6; posY
          vmovaps xmm2, xmm8; posX
          vmovss  dword ptr [rsp+98h+fmt], xmm0
          vmovaps xmm7, xmm0
        }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v35, " cCurTime", color);
        snap = v27->snap;
        __asm { vaddss  xmm6, xmm6, xmm0 }
        if ( snap )
        {
          v40 = j_va("%i", (unsigned int)snap->serverTime);
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " snapTime");
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm8; posX
            vmovss  dword ptr [rsp+98h+fmt], xmm0
            vmovaps xmm7, xmm0
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v40, " snapTime", &colorWhite);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        v43 = v27->nextSnap;
        if ( v43 )
        {
          v44 = j_va("%i", (unsigned int)v43->serverTime);
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " nextTime");
          __asm
          {
            vmovaps xmm3, xmm6; posY
            vmovaps xmm2, xmm8; posX
            vmovss  dword ptr [rsp+98h+fmt], xmm0
            vmovaps xmm7, xmm0
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v44, " nextTime", &colorWhite);
          __asm { vaddss  xmm6, xmm6, xmm0 }
        }
        v47 = DCONST_DVARBOOL_scriptedAsmDebug;
        if ( !DCONST_DVARBOOL_scriptedAsmDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptedAsmDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v47);
        if ( v47->current.enabled )
        {
          for ( i = 0; i < cls.maxClients; ++i )
          {
            if ( v27->IsMP(v27) )
            {
              if ( i >= v27[1].predictedPlayerState.rxvOmnvars[64].timeModified )
              {
                LODWORD(labelb) = v27[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                LODWORD(textb) = i;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", textb, labelb) )
                  __debugbreak();
              }
              CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v27[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * i);
            }
            else
            {
              CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v27, i);
            }
            if ( CharacterInfo && CharacterInfo->infoValid )
            {
              v50 = j_va("%i", (unsigned int)CharacterInfo->playerASM_scripted_anim_start_time);
              __asm
              {
                vmovaps xmm3, xmm6; posY
                vmovaps xmm2, xmm8; posX
                vmovss  dword ptr [rsp+98h+fmt], xmm7
              }
              CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v50, (const char *)&queryFormat.fmt + 3, &colorWhite);
              __asm { vaddss  xmm6, xmm6, xmm0 }
            }
          }
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+98h+var_58]
    vmovaps xmm7, [rsp+98h+var_48]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+98h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintMpFrontendDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintMpFrontendDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm
  {
    vmovaps xmm2, xmm3; posY
    vmovaps [rsp+38h+var_18], xmm6
  }
  *(double *)&_XMM0 = CgDrawDebug::PrintFrontendUpperRightDebugInfo(this, localClientNum, *(float *)&_XMM2);
  __asm { vmovaps xmm3, xmm0; y }
  *(double *)&_XMM0 = CgDrawDebug::PrintFrontendSceneDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm0; y }
  *(double *)&_XMM0 = CgDrawDebugMP::PrintEntityDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm0; y }
  *(double *)&_XMM0 = CgDrawDebugMP::PrintPreloadDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm0; posY }
  *(double *)&_XMM0 = CgDrawDebugMP::PrintStreamingPos(this, localClientNum, scrPlace, *(float *)&_XMM3);
  __asm { vmovaps xmm6, xmm0 }
  this->DrawAnimationOverlays(this, localClientNum);
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintPartyDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintPartyDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v8; 
  const dvar_t *v13; 
  const dvar_t *v18; 
  const dvar_t *v20; 
  const char *text; 
  float fmt; 
  float fmta; 
  void *retaddr; 

  _RAX = &retaddr;
  v8 = DVARSTR_party_hostname;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 909, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_party_hostname, \"party_hostname\" ))", (const char *)&queryFormat, "Dvar_GetString( party_hostname )") )
    __debugbreak();
  v13 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm7 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm2, xmm0; posX
      vmovaps xmm3, xmm6; posY
      vmovss  dword ptr [rsp+78h+fmt], xmm7
    }
    CgDrawDebug::CornerPrintCaption(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "- MP -", &colorGreenFaded);
    v18 = DVARSTR_party_hostname;
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( *(_BYTE *)v18->current.integer64 )
    {
      v20 = DVARSTR_party_hostname;
      if ( !DVARSTR_party_hostname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      text = v20->current.string;
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm0; posX
        vmovss  dword ptr [rsp+78h+fmt], xmm7
      }
      CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, text, " g-host", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    __asm { vmovaps xmm3, xmm6; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintPartyMemberInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm7, [rsp+78h+var_38] }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintPartyMemberInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintPartyMemberInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *VarByName; 
  unsigned __int8 BotsConnectType; 
  unsigned __int8 v14; 
  const char *v15; 
  unsigned int v18; 
  unsigned __int8 *p_status; 
  const char *MemberStatus; 
  const char *MemberName; 
  bool v24; 
  const char *v25; 
  float fmta; 
  char *fmt; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  char *text; 
  int label; 
  char dest[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !g_partyData.inParty )
    goto LABEL_20;
  __asm { vmovaps xmmword ptr [r11-58h], xmm7 }
  *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
  __asm { vmovaps xmm7, xmm0 }
  VarByName = Dvar_FindVarByName("OMSOSSSORO");
  if ( VarByName->type != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(bot_SystemStatus->type == DVAR_TYPE_ENUM)", (const char *)&queryFormat, "bot_SystemStatus->type == DVAR_TYPE_ENUM") )
    __debugbreak();
  BotsConnectType = BG_GetBotsConnectType();
  v14 = BotsConnectType;
  if ( (unsigned int)BotsConnectType >= VarByName->domain.enumeration.stringCount )
  {
    label = VarByName->domain.enumeration.stringCount;
    LODWORD(text) = BotsConnectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_debug_mp.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( botConnectType ) < (unsigned)( bot_SystemStatus->domain.enumeration.stringCount )", "botConnectType doesn't index bot_SystemStatus->domain.enumeration.stringCount\n\t%i not in [0, %i)", text, label) )
      __debugbreak();
  }
  v15 = *(const char **)(VarByName->domain.integer64.max + 8i64 * v14);
  *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  __asm
  {
    vmovaps xmm3, xmm6; posY
    vmovaps xmm2, xmm0; posX
    vmovss  dword ptr [rsp+0E8h+fmt], xmm7
  }
  CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v15, " bots", &colorGreen);
  __asm { vaddss  xmm6, xmm6, xmm0 }
  v18 = 0;
  p_status = &g_partyData.partyMembers[0].status;
  do
  {
    if ( *p_status )
    {
      MemberStatus = Party_GetMemberStatus(&g_partyData, v18);
      MemberName = Party_GetMemberName(&g_partyData, v18);
      v24 = !Party_IsHost(&g_partyData, v18);
      v25 = (char *)&queryFormat.fmt + 3;
      if ( !v24 )
        v25 = " (h)";
      LODWORD(fmt) = v18;
      Com_sprintf(dest, 0x40ui64, "%s %i%s ", MemberName, fmt, v25);
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovaps xmm2, xmm0; posX
        vmovaps xmm3, xmm6; posY
        vmovss  dword ptr [rsp+0E8h+fmt], xmm7
      }
      CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, dest, MemberStatus, &colorWhite);
    }
    else
    {
      if ( !Party_IsHost(&g_partyData, v18) )
        goto LABEL_16;
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovaps xmm2, xmm0; posX
        vmovaps xmm3, xmm6; posY
        vmovss  dword ptr [rsp+0E8h+fmt], xmm7
      }
      CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, "missing", " host", &colorRed);
    }
    __asm { vaddss  xmm6, xmm6, xmm0 }
LABEL_16:
    ++v18;
    p_status += 504;
  }
  while ( v18 < 0xC8 );
  if ( g_partyData.backingOut )
  {
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm2, xmm0; posX
      vmovaps xmm3, xmm6; posY
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, "backing out", (const char *)&queryFormat.fmt + 3, &colorYellow);
    __asm { vaddss  xmm6, xmm6, xmm0 }
  }
  __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
LABEL_20:
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintPreloadDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintPreloadDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v7; 
  const dvar_t *v12; 
  const char *v21; 
  char v22; 
  const dvar_t *v24; 
  bool enabled; 
  const char *v28; 
  const dvar_t *v29; 
  bool v30; 
  const ScreenPlacement *v31; 
  CgDrawDebugMP *v32; 
  const char *v35; 
  const dvar_t *v38; 
  const dvar_t *v41; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  char *text; 
  char *label; 
  vec4_t *color; 
  vec4_t *colora; 
  char outString[1024]; 

  __asm { vmovaps [rsp+4B8h+var_68], xmm7 }
  v7 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    v12 = DVARBOOL_cg_drawpreload;
    if ( !DVARBOOL_cg_drawpreload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpreload") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      __asm { vmovaps [rsp+4B8h+var_58], xmm6 }
      if ( CL_UIStreaming_IsStartingMatch() )
      {
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " game");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovaps xmm2, xmm0; posX
          vmovaps xmm3, xmm7; posY
          vmovss  dword ptr [rsp+4B8h+fmt], xmm6
        }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "starting", " game", &colorGreen);
        __asm { vaddss  xmm7, xmm7, xmm0 }
      }
      if ( Com_GameStart_GetShortLoadInfoString(outString, 0x400u) )
      {
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " gamestart");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovaps xmm2, xmm0; posX
          vmovaps xmm3, xmm7; posY
          vmovss  dword ptr [rsp+4B8h+fmt], xmm6
        }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outString, " gamestart", &colorWhite);
        __asm { vaddss  xmm7, xmm7, xmm0 }
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
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vsubss  xmm2, xmm0, cs:__real@40a00000; posX
            vmovaps xmm3, xmm7; posY
          }
          CgDrawDebug::CornerPrintNoLabel(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, outString, &colorWhite);
          __asm { vaddss  xmm7, xmm7, xmm0 }
        }
      }
      v21 = " preload";
      v22 = 1;
      *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " preload");
      __asm { vmovaps xmm6, xmm0 }
      if ( !CG_FrontendScene_AreRequiredTransientsLoaded() )
      {
        v24 = DVARBOOL_frontEndPrioritizeLevelLoadExceptNeededTransients;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadExceptNeededTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadExceptNeededTransients") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        enabled = v24->current.enabled;
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovaps xmm3, xmm7; posY
          vmovaps xmm2, xmm0; posX
        }
        if ( enabled )
        {
          color = &colorYellow;
          v28 = "trans block";
        }
        else
        {
          color = &colorWhite;
          v28 = "trans want";
        }
        __asm { vmovss  dword ptr [rsp+4B8h+fmt], xmm6 }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v28, " preload", color);
        __asm { vaddss  xmm7, xmm7, xmm0 }
        v22 = 0;
      }
      if ( Com_FrontEndScene_NeedsStreamingForVisiblity() )
      {
        v29 = DVARBOOL_frontEndPrioritizeLevelLoadExpectStreamingVisibility;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadExpectStreamingVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadExpectStreamingVisibility") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.enabled;
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        v31 = scrPlace;
        v32 = this;
        __asm
        {
          vmovaps xmm3, xmm7
          vmovaps xmm2, xmm0
        }
        if ( v30 )
        {
          colora = &colorWhite;
          v35 = "stream block";
LABEL_44:
          __asm { vmovss  dword ptr [rsp+4B8h+fmt], xmm6 }
          CgDrawDebug::CornerPrint(v32, v31, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v35, v21, colora);
          __asm { vaddss  xmm7, xmm7, xmm0 }
LABEL_45:
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " paused preload");
          __asm { vmovaps xmm6, xmm0 }
          if ( Com_FrontEndScene_NeedsDatabaseAccess() )
          {
            *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            __asm
            {
              vmovaps xmm2, xmm0; posX
              vmovaps xmm3, xmm7; posY
              vmovss  dword ptr [rsp+4B8h+fmt], xmm6
            }
            CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, "database", " paused preload", &colorYellow);
            __asm { vaddss  xmm7, xmm7, xmm0 }
          }
          if ( CL_TransientsMP_NeedsProcessing() )
          {
            *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            __asm
            {
              vmovaps xmm2, xmm0; posX
              vmovaps xmm3, xmm7; posY
              vmovss  dword ptr [rsp+4B8h+fmt], xmm6
            }
            CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, "transients", " paused preload", &colorYellow);
            __asm { vaddss  xmm7, xmm7, xmm0 }
          }
          if ( CL_UIStreaming_NeedsDatabaseAccess() )
          {
            *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
            __asm
            {
              vmovaps xmm2, xmm0; posX
              vmovaps xmm3, xmm7; posY
              vmovss  dword ptr [rsp+4B8h+fmt], xmm6
            }
            CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmth, "uistreaming", " paused preload", &colorYellow);
            __asm { vaddss  xmm7, xmm7, xmm0 }
          }
          __asm { vmovaps xmm6, [rsp+4B8h+var_58] }
          goto LABEL_52;
        }
        v35 = "stream want";
      }
      else
      {
        if ( !v22 )
          goto LABEL_45;
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovaps xmm2, xmm0; posX
          vmovaps xmm3, xmm7; posY
          vmovss  dword ptr [rsp+4B8h+fmt], xmm6
        }
        CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, "active", " preload", &colorGreen);
        v21 = " preload override";
        __asm { vaddss  xmm7, xmm7, xmm0 }
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " preload override");
        v38 = DVARBOOL_frontEndPrioritizeLevelLoadTransients;
        __asm { vmovaps xmm6, xmm0 }
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadTransients") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        if ( !v38->current.enabled )
        {
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vmovaps xmm2, xmm0; posX
            vmovaps xmm3, xmm7; posY
            vmovss  dword ptr [rsp+4B8h+fmt], xmm6
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, "transient", " preload override", &colorYellow);
          __asm { vaddss  xmm7, xmm7, xmm0 }
        }
        v41 = DVARBOOL_frontEndPrioritizeLevelLoadImages;
        if ( !DVARBOOL_frontEndPrioritizeLevelLoadImages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "frontEndPrioritizeLevelLoadImages") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        if ( v41->current.enabled )
          goto LABEL_45;
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm { vmovaps xmm2, xmm0; posX }
        v35 = "image";
        v31 = scrPlace;
        __asm { vmovaps xmm3, xmm7; posY }
        v32 = this;
      }
      colora = &colorYellow;
      goto LABEL_44;
    }
  }
LABEL_52:
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+4B8h+var_68]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintServerDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintServerDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v7; 
  __int64 v8; 
  const dvar_t *v12; 
  const vec4_t *color; 
  char v17; 
  char *fmt; 
  float fmta; 
  char dest[64]; 

  __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
  v7 = DVARINT_cg_drawFPS;
  v8 = localClientNum;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.integer )
    goto LABEL_12;
  v12 = DVARBOOL_cg_drawservercounts;
  if ( !DVARBOOL_cg_drawservercounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawservercounts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " outlines");
    LODWORD(fmt) = 63;
    __asm { vmovaps xmm6, xmm0 }
    Com_sprintf(dest, 0x40ui64, "%i / %i", s_serverCollectedInfo[v8].svHudOutlineUsage, fmt);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vcomiss xmm0, cs:__real@42563334
    }
    color = &colorWhite;
    if ( !v17 )
      color = &colorRed;
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm2, xmm0; posX
      vmovaps xmm3, xmm7; posY
      vmovss  dword ptr [rsp+0E8h+fmt], xmm6
    }
    *(double *)&_XMM0 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, dest, " outlines", color);
    __asm
    {
      vmovaps xmm6, [rsp+0E8h+var_48]
      vaddss  xmm0, xmm0, xmm7
    }
  }
  else
  {
LABEL_12:
    __asm { vmovaps xmm0, xmm7 }
  }
  __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintSessionDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintSessionDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  PrivatePartySessionHSM *Instance; 
  GameLobbySessionHSM *v16; 
  PrivatePartySessionHSM *v17; 
  const char *text; 
  PrivatePartySessionHSM *v25; 
  const char *CurrentFrameStatusString; 
  GameLobbySessionHSM *v30; 
  const char *CurrentStateString; 
  GameLobbySessionHSM *v38; 
  const char *v39; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  char sessionIdStringOut[256]; 
  char v55[256]; 

  __asm
  {
    vmovaps [rsp+2A8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( PlatformSessionsHSMEnabled() )
  {
    __asm
    {
      vmovaps [rsp+2A8h+var_38], xmm7
      vmovaps [rsp+2A8h+var_48], xmm8
      vmovaps [rsp+2A8h+var_58], xmm9
    }
    memset_0(sessionIdStringOut, 0, sizeof(sessionIdStringOut));
    memset_0(v55, 0, sizeof(v55));
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "    HSM State");
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "    SessionID");
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "    Frame Status");
    __asm { vmovaps xmm9, xmm0 }
    Instance = PrivatePartySessionHSM::GetInstance();
    PrivatePartySessionHSM::GetCurrentSessionIdString(Instance, sessionIdStringOut);
    v16 = GameLobbySessionHSM::GetInstance();
    GameLobbySessionHSM::GetCurrentSessionIdString(v16, v55);
    v17 = PrivatePartySessionHSM::GetInstance();
    text = PrivatePartySessionHSM::GetCurrentStateString(v17);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+2A8h+var_288], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v48, text, " PP HSM State", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm2, xmm0; posX
      vmovaps xmm3, xmm6; posY
      vmovss  [rsp+2A8h+var_288], xmm8
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v49, sessionIdStringOut, " PP SessionID", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v25 = PrivatePartySessionHSM::GetInstance();
    CurrentFrameStatusString = PrivatePartySessionHSM::GetCurrentFrameStatusString(v25);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovss  [rsp+2A8h+var_288], xmm9
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v50, CurrentFrameStatusString, " PP Frame Status", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v30 = GameLobbySessionHSM::GetInstance();
    CurrentStateString = GameLobbySessionHSM::GetCurrentStateString(v30);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+2A8h+var_288], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v51, CurrentStateString, " GL HSM State", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm2, xmm0; posX
      vmovaps xmm3, xmm6; posY
      vmovss  [rsp+2A8h+var_288], xmm8
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v52, v55, " GL SessionID", &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    v38 = GameLobbySessionHSM::GetInstance();
    v39 = GameLobbySessionHSM::GetCurrentFrameStatusString(v38);
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+2A8h+var_288], xmm9
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v53, v39, " GL Frame Status", &colorWhite);
    __asm
    {
      vmovaps xmm9, [rsp+2A8h+var_58]
      vmovaps xmm8, [rsp+2A8h+var_48]
      vmovaps xmm7, [rsp+2A8h+var_38]
      vaddss  xmm0, xmm6, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+2A8h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintSnapshotInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintSnapshotInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const ScreenPlacement *v15; 
  __int64 v16; 
  CgDrawDebugMP *v17; 
  const dvar_t *v18; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  ClConnectionMP *v22; 
  int deltaNum; 
  const char *v25; 
  SnapshotCollectedInfo *v30; 
  const char *v31; 
  const dvar_t *v35; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  const char *v39; 
  unsigned int maxClients; 
  int v43; 
  const char *v44; 
  __int64 v48; 
  const char *v49; 
  const char *v53; 
  unsigned int PacketBackupCount; 
  const char *v58; 
  const char *v62; 
  const char *v69; 
  __int64 v72; 
  cgs_t *v73; 
  LocalClientNum_t v77; 
  CgEntitySystem *EntitySystem; 
  const cpose_t *v79; 
  __int64 v106; 
  __int64 v126; 
  int v127; 
  _DWORD *v147; 
  char *v148; 
  LocalClientNum_t v149; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  int v164; 
  GfxFont *bigDevFont; 
  const dvar_t *v191; 
  const char *v192; 
  const char *v196; 
  const char *v200; 
  float fmtc; 
  float fmtd; 
  char *fmt; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  char *fmtl; 
  char *fmtm; 
  char *fmta; 
  char *fmtb; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  char *text; 
  char *texta; 
  char *textd; 
  char *texte; 
  char *textb; 
  char *textc; 
  float textf; 
  char *label; 
  char *labela; 
  char *labelb; 
  char *labelc; 
  char *labeld; 
  float labele; 
  vec4_t *color; 
  vec4_t *colora; 
  vec4_t *colorb; 
  float colorc; 
  double v250; 
  double v251; 
  double v252; 
  float v253; 
  vec4_t *v254; 
  vec4_t *v255; 
  double v256; 
  double v257; 
  double v258; 
  double v259; 
  int v260; 
  int v261; 
  int v262; 
  int v263; 
  int v264; 
  int v265; 
  int v266; 
  vec4_t *v267; 
  int v268[4]; 
  int v269[4]; 
  vec3_t worldPos; 
  LocalClientNum_t localClientNuma; 
  cgs_t *v272; 
  int v273[3]; 
  unsigned __int64 v274; 
  ScreenPlacement *scrPlacea; 
  SnapshotCollectedInfo *v276; 
  ClActiveClientMP *v277; 
  cg_t *v278; 
  __int64 v279; 
  CgDrawDebug *v280; 
  __int64 v281; 
  vec2_t outScreenPos; 
  char v283[128]; 
  char dest[512]; 
  char v285[512]; 
  char v286[512]; 
  char v287[512]; 
  char v288[512]; 
  char v289; 
  void *retaddr; 

  _RAX = &retaddr;
  v281 = -2i64;
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
    vmovaps xmm7, xmm3
  }
  v15 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  v16 = localClientNum;
  localClientNuma = localClientNum;
  v17 = this;
  v280 = this;
  v274 = 24036i64 * (int)localClientNum;
  v276 = &g_snapshotCollectedInfo[v274 / 0x5DE4];
  v18 = DVARINT_cg_drawSnapshot;
  if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
    v278 = LocalClientGlobals;
    if ( (unsigned int)v16 >= cgs_t::ms_allocatedCount )
    {
      LODWORD(label) = cgs_t::ms_allocatedCount;
      LODWORD(text) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    if ( !cgs_t::ms_cgsArray[v16] )
    {
      LODWORD(label) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", label) )
        __debugbreak();
    }
    if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
    {
      LODWORD(label) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", label) )
        __debugbreak();
    }
    v272 = cgs_t::ms_cgsArray[v16];
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(v17, v15);
    __asm { vmovaps xmm10, xmm0 }
    ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v16);
    v277 = ClientMP;
    if ( (unsigned int)v16 >= LODWORD(cl_maxLocalClients) )
    {
      *(float *)&label = cl_maxLocalClients;
      LODWORD(text) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", text, label) )
        __debugbreak();
    }
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClConnection::ms_activeConnectionType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 149, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeConnectionType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeConnectionType )") )
      __debugbreak();
    if ( !ClConnection::ms_connections[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_connection_mp.h", 150, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
      __debugbreak();
    v22 = (ClConnectionMP *)ClConnection::ms_connections[v16];
    outScreenPos = (vec2_t)v22;
    deltaNum = ClientMP->snap.deltaNum;
    v260 = deltaNum;
    if ( deltaNum > 0 )
    {
      deltaNum = ClientMP->snap.messageNum - deltaNum;
      v260 = deltaNum;
      v22 = (ClConnectionMP *)outScreenPos;
    }
    if ( deltaNum <= 0 || (v267 = &colorWhite, ClConnectionMP::GetPacketBackupCount(v22) < deltaNum) )
      v267 = &colorRed;
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(v17, " cl num");
    __asm { vmovaps xmm6, xmm0 }
    v25 = j_va("%i / %i", (unsigned int)LocalClientGlobals->predictedPlayerState.clientNum, ClientMP->snap.numClients);
    __asm
    {
      vmovss  dword ptr [rsp+0C60h+fmt], xmm6
      vmovaps xmm3, xmm7; posY
      vmovaps xmm2, xmm10; posX
    }
    CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v25, " cl num", &colorWhite);
    __asm { vaddss  xmm6, xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(v17, " time dilation");
    __asm { vmovaps xmm11, xmm0 }
    v30 = v276;
    v31 = j_va("%i", (unsigned int)v276->serverTimeDilation);
    __asm
    {
      vmovss  dword ptr [rsp+0C60h+fmt], xmm11
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm10; posX
    }
    CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v31, " time dilation", &colorWhite);
    __asm { vaddss  xmm9, xmm6, xmm0 }
    v35 = DVARINT_cg_drawSnapshot;
    if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.integer == 2 )
    {
      v36 = 0;
      v279 = 0i64;
      v37 = 0;
      if ( Com_IsAnyLocalServerRunning() )
      {
        dest[0] = 0;
        v38 = 0;
        if ( cls.maxClients )
        {
          do
          {
            v39 = j_va(" %i", (unsigned int)v276->commandsProcessedOnSnapshot[v38]);
            I_strcat(dest, 0x100ui64, v39);
            if ( v37 == 8 || (maxClients = cls.maxClients, v38 == cls.maxClients - 1) )
            {
              __asm
              {
                vmovss  dword ptr [rsp+0C60h+fmt], xmm11
                vmovaps xmm3, xmm9; posY
                vmovaps xmm2, xmm10; posX
              }
              CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmte, dest, " cmds", &colorWhite);
              __asm { vaddss  xmm9, xmm9, xmm0 }
              dest[0] = 0;
              v37 = -1;
              maxClients = cls.maxClients;
            }
            ++v38;
            ++v37;
          }
          while ( v38 < maxClients );
          deltaNum = v260;
          v36 = 0;
        }
      }
      v43 = 0;
      v283[0] = 0;
      v44 = S_BUFFER_TYPE_ID;
      do
      {
        LODWORD(fmt) = *v44;
        v43 += Com_sprintf(&v283[v43], 128i64 - v43, "%2d%c ", g_snapshotCollectedInfo[0].snapshotBufferUsagePercent[v274 - (_QWORD)S_BUFFER_TYPE_ID + (_QWORD)v44], fmt);
        ++v36;
        ++v44;
      }
      while ( v36 < 0xA );
      Com_sprintf(&v283[v43], 128i64 - v43, "%3df", g_snapshotCollectedInfo[v274 / 0x5DE4].snapshotFullFramePercent);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm9; posY
        vmovaps xmm2, xmm10; posX
      }
      v15 = scrPlacea;
      v17 = (CgDrawDebugMP *)v280;
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v283, " snap bufs", &colorWhite);
      __asm { vaddss  xmm6, xmm9, xmm0 }
      v48 = (__int64)v278;
      v49 = j_va("%i", (unsigned int)v278->latestSnapshotNum);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v49, " snap num", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v53 = j_va("%i", (unsigned int)v272->serverCommandSequence);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v53, " cmd", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      PacketBackupCount = ClConnectionMP::GetPacketBackupCount(*(ClConnectionMP **)&outScreenPos);
      v58 = j_va("%i/%i", (unsigned int)deltaNum, PacketBackupCount);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmti, v58, " delta", v267);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v62 = j_va("%i", (unsigned int)v277->snap.ping);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, v62, " ms ping", &colorWhite);
      __asm
      {
        vaddss  xmm6, xmm6, xmm0
        vmovss  xmm1, cs:?com_timescaleValue@@3MA; float com_timescaleValue
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v69 = j_va("%f", _RDX);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v280, scrPlacea, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, v69, " com_timescaleValue", &colorWhite);
      __asm { vaddss  xmm9, xmm6, xmm0 }
      if ( cls.maxClients > 0 )
      {
        LODWORD(v72) = 0;
        v73 = NULL;
        v272 = NULL;
        __asm
        {
          vmovss  xmm12, cs:__real@3f800000
          vxorps  xmm13, xmm13, xmm13
          vmovsd  xmm7, cs:__real@3f30000000000000
        }
        v77 = localClientNuma;
        do
        {
          if ( *(_DWORD *)(v48 + 468) != (_DWORD)v72 )
          {
            EntitySystem = CgEntitySystem::GetEntitySystem(v77);
            if ( (unsigned int)v72 >= 0x800 )
            {
              LODWORD(labela) = 2048;
              LODWORD(texta) = v72;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", texta, labela) )
                __debugbreak();
            }
            v79 = (cpose_t *)((char *)&EntitySystem->m_entities[0].pose + (_QWORD)v73);
            if ( (*((_BYTE *)&EntitySystem->m_entities[0].flags + (_QWORD)v73) & 1) != 0 )
            {
              _RBX = v274 + 112i64 * *(int *)((char *)&EntitySystem->m_entities[0].nextState.clientNum + (_QWORD)v73);
              _R15 = 0x140000000ui64;
              __asm
              {
                vmovss  xmm3, dword ptr [rbx+r15+1141AEA4h]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovq   r9, xmm3
              }
              Com_sprintf(dest, 0x200ui64, "Frame Interpolation: %f", *(double *)&_XMM3);
              __asm
              {
                vmovss  xmm4, dword ptr [rbx+r15+1141AE4Ch]
                vcvtss2sd xmm4, xmm4, xmm4
                vmovss  xmm5, dword ptr [rbx+r15+1141AE48h]
                vcvtss2sd xmm5, xmm5, xmm5
                vmovss  xmm0, dword ptr [rbx+r15+1141AE44h]
                vcvtss2sd xmm0, xmm0, xmm0
                vmovss  xmm1, dword ptr [rbx+r15+1141AE40h]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovss  xmm2, dword ptr [rbx+r15+1141AE3Ch]
                vcvtss2sd xmm2, xmm2, xmm2
                vmovss  xmm3, dword ptr [rbx+r15+1141AE38h]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovsd  [rsp+0C60h+var_C20], xmm4
                vmovsd  [rsp+0C60h+color], xmm5
                vmovsd  [rsp+0C60h+label], xmm0
                vmovsd  [rsp+0C60h+text], xmm1
                vmovsd  [rsp+0C60h+fmt], xmm2
                vmovq   r9, xmm3
              }
              Com_sprintf(v285, 0x200ui64, "Snaps: %.1f %.1f %.1f, %.1f %.1f %.1f", *(double *)&_XMM3, *(double *)&fmtl, *(double *)&textd, *(double *)&labelb, *(double *)&color, v250);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+r15+1141AE58h]
                vcvtss2sd xmm0, xmm0, xmm0
                vmovss  xmm1, dword ptr [rbx+r15+1141AE54h]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovss  xmm3, dword ptr [rbx+r15+1141AE50h]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovsd  [rsp+0C60h+text], xmm0
                vmovsd  [rsp+0C60h+fmt], xmm1
                vmovq   r9, xmm3
              }
              Com_sprintf(v286, 0x200ui64, "Pose: %.1f %.1f %.1f", *(double *)&_XMM3, *(double *)&fmtm, *(double *)&texte);
              _RDI = (unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory + _RBX);
              if ( _RBX == 0xFFFFFFFEAEBE51A4ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", _RBX + 0x40000000 + 289517255, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
                __debugbreak();
              v106 = *_RDI;
              if ( (_DWORD)v106 == 4 )
              {
                v267 = (vec4_t *)v269;
                v269[2] = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[1] + _RBX) ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[2] + _RBX) ^ s_trbase_aab_Z;
                v269[1] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v + _RBX) ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v[1] + _RBX) ^ s_trbase_aab_Y;
                v269[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trBase.v + _RBX) ^ ~s_trbase_aab_X;
                memset(&v267, 0, sizeof(v267));
                __asm
                {
                  vmovss  xmm0, [rbp+0B60h+var_BE0]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v261 & 0x7F800000) == 2139095040 )
                  goto LABEL_102;
                __asm
                {
                  vmovss  xmm0, [rbp+0B60h+var_BDC]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v262 & 0x7F800000) == 2139095040 )
                  goto LABEL_102;
                __asm
                {
                  vmovss  xmm0, [rbp+0B60h+var_BD8]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v263 & 0x7F800000) == 2139095040 )
                {
LABEL_102:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                    __debugbreak();
                }
                v106 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trType + _RBX);
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+0Ch]
                  vmovss  [rbp+0B60h+var_BE0], xmm0
                  vmovss  xmm1, dword ptr [rdi+10h]
                  vmovss  [rbp+0B60h+var_BDC], xmm1
                  vmovss  xmm0, dword ptr [rdi+14h]
                  vmovss  [rbp+0B60h+var_BD8], xmm0
                }
              }
              __asm
              {
                vmovss  xmm4, dword ptr [rbx+r15+1141AE7Ch]
                vcvtss2sd xmm4, xmm4, xmm4
                vmovss  xmm5, dword ptr [rbx+r15+1141AE78h]
                vcvtss2sd xmm5, xmm5, xmm5
                vmovss  xmm0, dword ptr [rbx+r15+1141AE74h]
                vcvtss2sd xmm0, xmm0, xmm0
                vmovss  xmm1, [rbp+0B60h+var_BD8]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovss  xmm2, [rbp+0B60h+var_BDC]
                vcvtss2sd xmm2, xmm2, xmm2
                vmovss  xmm3, [rbp+0B60h+var_BE0]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovsd  [rsp+0C60h+var_C08], xmm4
                vmovsd  [rsp+0C60h+var_C10], xmm5
                vmovsd  [rsp+0C60h+var_C18], xmm0
                vmovsd  [rsp+0C60h+var_C20], xmm1
                vmovsd  [rsp+0C60h+color], xmm2
                vmovsd  [rsp+0C60h+label], xmm3
              }
              LODWORD(textb) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trDuration + _RBX);
              LODWORD(fmta) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].prevTrajectory.trTime + _RBX);
              Com_sprintf(v287, 0x200ui64, "PTraj: %d %d %d, %.1f %.1f %.1f, %.1f %.1f %.1f", v106, fmta, textb, *(double *)&labelc, *(double *)&colora, v251, *(double *)&v254, v256, v258);
              _RDI = (unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory + _RBX);
              if ( _RBX == 0xFFFFFFFEAEBE5180ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", _RBX + 0x40000000 + 289517291, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
                __debugbreak();
              v126 = *_RDI;
              if ( (_DWORD)v126 == 4 )
              {
                v267 = (vec4_t *)v268;
                v127 = *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[1] + _RBX);
                v268[2] = s_trbase_aab_Z ^ v127 ^ *(_DWORD *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v[2] + _RBX);
                v268[1] = s_trbase_aab_Y ^ *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v + _RBX) ^ v127;
                v268[0] = *(_DWORD *)((char *)g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trBase.v + _RBX) ^ ~s_trbase_aab_X;
                memset(&v267, 0, sizeof(v267));
                __asm
                {
                  vmovss  xmm0, [rsp+0C60h+var_BF0]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v264 & 0x7F800000) == 2139095040 )
                  goto LABEL_103;
                __asm
                {
                  vmovss  xmm0, [rsp+0C60h+var_BEC]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v265 & 0x7F800000) == 2139095040 )
                  goto LABEL_103;
                __asm
                {
                  vmovss  xmm0, [rsp+0C60h+var_BE8]
                  vmovss  dword ptr [rsp+0C60h+var_C00], xmm0
                }
                if ( (v266 & 0x7F800000) == 2139095040 )
                {
LABEL_103:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                    __debugbreak();
                }
                v126 = *(unsigned int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trType + _RBX);
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+0Ch]
                  vmovss  [rsp+0C60h+var_BF0], xmm0
                  vmovss  xmm1, dword ptr [rdi+10h]
                  vmovss  [rsp+0C60h+var_BEC], xmm1
                  vmovss  xmm0, dword ptr [rdi+14h]
                  vmovss  [rsp+0C60h+var_BE8], xmm0
                }
              }
              __asm
              {
                vmovss  xmm4, dword ptr [rbx+r15+1141AEA0h]
                vcvtss2sd xmm4, xmm4, xmm4
                vmovss  xmm5, dword ptr [rbx+r15+1141AE9Ch]
                vcvtss2sd xmm5, xmm5, xmm5
                vmovss  xmm0, dword ptr [rbx+r15+1141AE98h]
                vcvtss2sd xmm0, xmm0, xmm0
                vmovss  xmm1, [rsp+0C60h+var_BE8]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovss  xmm2, [rsp+0C60h+var_BEC]
                vcvtss2sd xmm2, xmm2, xmm2
                vmovss  xmm3, [rsp+0C60h+var_BF0]
                vcvtss2sd xmm3, xmm3, xmm3
                vmovsd  [rsp+0C60h+var_C08], xmm4
                vmovsd  [rsp+0C60h+var_C10], xmm5
                vmovsd  [rsp+0C60h+var_C18], xmm0
                vmovsd  [rsp+0C60h+var_C20], xmm1
                vmovsd  [rsp+0C60h+color], xmm2
                vmovsd  [rsp+0C60h+label], xmm3
              }
              LODWORD(textc) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trDuration + _RBX);
              LODWORD(fmtb) = *(int *)((char *)&g_snapshotCollectedInfo[0].clientInterpolationData[0].nextTrajectory.trTime + _RBX);
              Com_sprintf(v288, 0x200ui64, "NTraj: %d %d %d, %.1f %.1f %.1f, %.1f %.1f %.1f", v126, fmtb, textc, *(double *)&labeld, *(double *)&colorb, v252, *(double *)&v255, v257, v259);
              if ( dword_151446948 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
              {
                j__Init_thread_header(&dword_151446948);
                if ( dword_151446948 == -1 )
                {
                  __asm
                  {
                    vaddss  xmm1, xmm12, cs:SCREEN_LINE_HEIGHT
                    vmovss  cs:SCREEN_Y_OFFSET, xmm1
                  }
                  j__Init_thread_footer(&dword_151446948);
                }
              }
              __asm { vmovaps xmm8, xmm13 }
              v147 = (_DWORD *)(v48 + 26928);
              v148 = dest;
              v267 = (vec4_t *)5;
              v149 = localClientNuma;
              do
              {
                if ( !v79->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
                  __debugbreak();
                FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v79->origin.Get_origin, v79);
                FunctionPointer_origin(&v79->origin.origin.origin, &worldPos);
                if ( v79->isPosePrecise )
                {
                  __asm
                  {
                    vmovd   xmm0, dword ptr [rbp+0B60h+worldPos]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [rbp+0B60h+worldPos], xmm2
                    vmovd   xmm0, dword ptr [rbp+0B60h+worldPos+4]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [rbp+0B60h+worldPos+4], xmm2
                    vmovd   xmm0, dword ptr [rbp+0B60h+worldPos+8]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                  }
                }
                else
                {
                  __asm { vmovss  xmm2, dword ptr [rbp+0B60h+worldPos+8] }
                }
                __asm
                {
                  vaddss  xmm0, xmm2, cs:WORLD_HEIGHT_OFFSET
                  vmovss  dword ptr [rbp+0B60h+worldPos+8], xmm0
                }
                if ( !v147 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
                  __debugbreak();
                v164 = v147[25];
                if ( v147 == (_DWORD *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                  __debugbreak();
                v273[0] = v147[2] ^ ((((_DWORD)v147 + 8) ^ v164) * ((((_DWORD)v147 + 8) ^ v164) + 2));
                v273[1] = v147[3] ^ ((((_DWORD)v147 + 12) ^ v164) * ((((_DWORD)v147 + 12) ^ v164) + 2));
                v273[2] = ((((_DWORD)v147 + 16) ^ v164) * ((((_DWORD)v147 + 16) ^ v164) + 2)) ^ v147[4];
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+0B60h+worldPos]
                  vsubss  xmm2, xmm0, [rbp+0B60h+var_BB0]
                  vmovss  xmm1, dword ptr [rbp+0B60h+worldPos+4]
                  vsubss  xmm3, xmm1, [rbp+0B60h+var_BAC]
                  vmovss  xmm0, dword ptr [rbp+0B60h+worldPos+8]
                  vsubss  xmm4, xmm0, [rbp+0B60h+var_BA8]
                }
                v48 = (__int64)v278;
                __asm
                {
                  vmulss  xmm1, xmm2, dword ptr [r14+6944h]
                  vmulss  xmm0, xmm3, dword ptr [r14+6948h]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm4, dword ptr [r14+694Ch]
                  vaddss  xmm0, xmm2, xmm1; value
                  vmovss  xmm2, cs:SCREEN_MAX_LINE_DIST; max
                  vmovss  xmm1, cs:SCREEN_MIN_LINE_DIST; min
                }
                *(double *)&_XMM0 = ApplyLinearMap(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm
                {
                  vmovaps xmm2, xmm0
                  vsubss  xmm0, xmm12, xmm0
                  vmulss  xmm3, xmm0, cs:SCREEN_MAX_SCALE
                  vmulss  xmm2, xmm2, cs:SCREEN_MIN_SCALE
                  vaddss  xmm6, xmm3, xmm2
                }
                bigDevFont = cls.bigDevFont;
                CG_WorldPosToScreenPosReal(v149, scrPlacea, &worldPos, &outScreenPos);
                __asm
                {
                  vmulss  xmm2, xmm6, cs:SCREEN_X_OFFSET
                  vaddss  xmm3, xmm2, dword ptr [rbp+0B60h+outScreenPos]
                  vmovss  dword ptr [rbp+0B60h+outScreenPos], xmm3
                  vmulss  xmm1, xmm6, xmm8
                  vaddss  xmm2, xmm1, dword ptr [rbp+0B60h+outScreenPos+4]
                  vmovss  dword ptr [rbp+0B60h+outScreenPos+4], xmm2
                  vmulss  xmm1, xmm6, cs:SCREEN_LINE_HEIGHT
                  vcvttss2si r9d, xmm1; fontHeight
                  vmovss  dword ptr [rsp+0C60h+var_C20], xmm13
                  vmovss  dword ptr [rsp+0C60h+color], xmm12
                  vmovss  dword ptr [rsp+0C60h+label], xmm12
                  vmovss  dword ptr [rsp+0C60h+text], xmm2
                  vmovss  dword ptr [rsp+0C60h+fmt], xmm3
                }
                R_AddCmdDrawText(v148, 512, bigDevFont, _ER9, fmtn, textf, labele, colorc, v253, &colorRed);
                __asm
                {
                  vmulss  xmm1, xmm6, cs:SCREEN_Y_OFFSET
                  vaddss  xmm8, xmm8, xmm1
                }
                memset(v273, 0, sizeof(v273));
                memset(&worldPos, 0, sizeof(worldPos));
                v148 += 512;
                v267 = (vec4_t *)((char *)v267 - 1);
              }
              while ( v267 );
              memset(v268, 0, 0xCui64);
              memset(v269, 0, 0xCui64);
              LODWORD(v72) = v279;
              v77 = localClientNuma;
              v73 = v272;
            }
          }
          v72 = (unsigned int)(v72 + 1);
          v279 = v72;
          v73 = (cgs_t *)((char *)v73 + 760);
          v272 = v73;
        }
        while ( (int)v72 < cls.maxClients );
        v15 = scrPlacea;
        v17 = (CgDrawDebugMP *)v280;
      }
      ClientMP = v277;
      v30 = v276;
    }
    v191 = DVARINT_cg_drawSnapshot;
    if ( !DVARINT_cg_drawSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawSnapshot") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v191);
    if ( v191->current.integer == 3 )
    {
      v192 = j_va("%i", (unsigned int)v30->networkOffsetTime);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm9; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmto, v192, " Network Offset", &colorWhite);
      __asm { vaddss  xmm6, xmm9, xmm0 }
      v196 = j_va("%i", (unsigned int)v30->currOffsetTime);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, v196, " Total Offset", &colorWhite);
      __asm { vaddss  xmm6, xmm6, xmm0 }
      v200 = j_va("%i", (unsigned int)ClientMP->snap.info.serverTime);
      __asm
      {
        vmovss  dword ptr [rsp+0C60h+fmt], xmm11
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm10; posX
      }
      CgDrawDebug::CornerPrint(v17, v15, *(float *)&_XMM2, *(float *)&_XMM3, fmtq, v200, " Snapshot Time", &colorWhite);
      __asm { vaddss  xmm0, xmm6, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm0, xmm9 }
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  _R11 = &v289;
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
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintSteamLobbyInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintSteamLobbyInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm { vmovaps xmm0, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintStreamLoadingInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintStreamLoadingInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v9; 
  const dvar_t *v13; 
  __int64 v14; 
  const StreamDistance *v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v19; 
  const StreamDistance *v20; 
  unsigned int v24; 
  unsigned int v27; 
  unsigned __int64 *wantedImageMemoryByDistance; 
  unsigned int v29; 
  unsigned int v33; 
  float fmt; 
  StreamDistance v47; 
  unsigned int v48; 
  vec4_t color; 
  StreamFrontendMemoryStats outStats; 
  char dest[128]; 

  __asm { vmovaps [rsp+1D8h+var_78], xmm9 }
  v9 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm9, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer )
  {
    v13 = DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads;
    if ( !DCONST_DVARBOOL_cg_drawStreamerWantedImageLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamerWantedImageLoads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      v14 = 0i64;
      __asm { vmovaps [rsp+1D8h+var_48], xmm6 }
      dest[0] = 0;
      if ( Stream_IsEnabled() )
      {
        v15 = STREAM_FRONTEND_WANTED_IMAGE_MEMORY_DISTANCE_BUCKETS;
        __asm { vmovaps [rsp+1D8h+var_58], xmm7 }
        v16 = 0;
        __asm { vmovaps [rsp+1D8h+var_68], xmm8 }
        v17 = 0;
        if ( DVARFLT_cg_worldStreamingMaxImageQuality )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_worldStreamingMaxImageQuality, "cg_worldStreamingMaxImageQuality");
          __asm { vmulss  xmm1, xmm0, xmm0; distance }
          StreamDistance::StreamDistance(&v47, *(float *)&_XMM1);
          v19 = 0;
          v20 = STREAM_FRONTEND_WANTED_IMAGE_MEMORY_DISTANCE_BUCKETS;
          while ( v20->mValue < v47.mValue )
          {
            ++v19;
            ++v20;
            if ( v19 >= 0xA )
              goto LABEL_16;
          }
          v16 = v19;
        }
LABEL_16:
        _RSI = DCONST_DVARFLT_stream_syncMP_imageQuality;
        if ( !DCONST_DVARFLT_stream_syncMP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_imageQuality") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+28h]
          vmulss  xmm1, xmm0, xmm0
          vmovss  [rsp+1D8h+var_198.mValue], xmm1
          vmovss  [rsp+1D8h+var_190], xmm1
        }
        if ( (v47.mValue & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        v24 = 0;
        while ( v15->mValue < v48 >> 7 )
        {
          ++v24;
          ++v15;
          if ( v24 >= 0xA )
            goto LABEL_27;
        }
        v17 = v24;
LABEL_27:
        Stream_GetMemoryStats(&outStats);
        __asm
        {
          vmovss  xmm6, cs:__real@5f800000
          vmovss  xmm7, cs:__real@35800000
        }
        v27 = 10;
        wantedImageMemoryByDistance = outStats.wantedImageMemoryByDistance;
        v29 = 0;
        __asm { vxorps  xmm8, xmm8, xmm8 }
        do
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( (*wantedImageMemoryByDistance & 0x8000000000000000ui64) != 0i64 )
            __asm { vaddss  xmm0, xmm0, xmm6 }
          __asm
          {
            vmulss  xmm1, xmm0, xmm7
            vucomiss xmm1, xmm8
          }
          if ( *wantedImageMemoryByDistance )
          {
            v33 = v29;
            if ( v29 > v27 )
              v33 = v27;
            v27 = v33;
          }
          __asm
          {
            vcvtss2sd xmm3, xmm1, xmm1
            vmovq   r9, xmm3
          }
          v14 += Com_sprintf_truncate(&dest[v14], 128 - v14, "%.2f", *(double *)&_XMM3);
          if ( v29 != 9 )
            v14 += Com_sprintf_truncate(&dest[v14], 128 - v14, " ");
          ++v29;
          ++wantedImageMemoryByDistance;
        }
        while ( v29 < 0xA );
        __asm
        {
          vmovaps xmm8, [rsp+1D8h+var_68]
          vmovaps xmm7, [rsp+1D8h+var_58]
        }
        if ( !v27 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
LABEL_45:
          __asm { vmovups xmmword ptr [rsp+1D8h+var_188], xmm0 }
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "Stm Loading");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vmovaps xmm3, xmm9; posY
            vmovaps xmm2, xmm0; posX
            vmovss  dword ptr [rsp+1D8h+fmt], xmm6
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, dest, "Stm Loading", &color);
          __asm
          {
            vmovaps xmm6, [rsp+1D8h+var_48]
            vaddss  xmm9, xmm9, xmm0
          }
          goto LABEL_46;
        }
        if ( v27 <= v16 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
          goto LABEL_45;
        }
        if ( v27 <= v17 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
          goto LABEL_45;
        }
      }
      else
      {
        Com_sprintf_truncate(dest, 0x80ui64, "<Disabled>");
      }
      __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
      goto LABEL_45;
    }
  }
LABEL_46:
  __asm
  {
    vmovaps xmm0, xmm9
    vmovaps xmm9, [rsp+1D8h+var_78]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintStreamingPos
==============
*/

float __fastcall CgDrawDebugMP::PrintStreamingPos(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  char *m_activeGameMapName; 
  const ScreenPlacement *v14; 
  const dvar_t *v17; 
  int v19; 
  unsigned int i; 
  const char *NameForViewType; 
  const vec4_t *v25; 
  BgWorldStreamingViewMode NextStreamViewMode; 
  bool v27; 
  const char *NameForViewMode; 
  const char *v42; 
  unsigned int j; 
  const char *v47; 
  const char *v50; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  int k; 
  char v58; 
  const char *v76; 
  const dvar_t *v79; 
  const char *v81; 
  bool v82; 
  const char *v99; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  float fmtd; 
  char *fmte; 
  char *fmtf; 
  float fmtg; 
  vec4_t *color; 
  vec4_t *colora; 
  char *label; 
  unsigned int CurrentStateFrameDelta; 
  char *v121; 
  const char *CurrentStateName; 
  StreamUpdateMultiView multiView; 
  char v125[64]; 
  char dest[64]; 
  char v128; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm7
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm10
  }
  m_activeGameMapName = cls.m_activeGameMapName;
  if ( !cls.m_activeGameMapName[0] )
    m_activeGameMapName = "<none>";
  v121 = m_activeGameMapName;
  __asm { vmovaps xmm7, xmm3 }
  v14 = scrPlace;
  *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, m_activeGameMapName);
  v17 = DCONST_DVARBOOL_cg_drawStreamPos;
  __asm { vmovaps xmm10, xmm0 }
  if ( !DCONST_DVARBOOL_cg_drawStreamPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawStreamPos") )
    __debugbreak();
  __asm { vmovaps [rsp+5E8h+var_78], xmm8 }
  Dvar_CheckFrontendServerThread(v17);
  v19 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v17->current.enabled )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( CG_WorldStreaming_HasNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i) )
      {
        NameForViewType = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)i);
        _RBP = CG_WorldStreaming_GetNextStreamPosition(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        _RDI = CG_WorldStreaming_GetNextStreamVelocity(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        CurrentStateName = CG_WorldStreaming_GetCurrentStateName(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        v25 = &colorGreen;
        if ( CG_WorldStreaming_IsNextStreamPositionLoading(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i) )
          v25 = &colorRed;
        CurrentStateFrameDelta = CG_WorldStreaming_GetCurrentStateFrameDelta(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        NextStreamViewMode = CG_WorldStreaming_GetNextStreamViewMode(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)i);
        v27 = NextStreamViewMode == LINEAR;
        if ( NextStreamViewMode )
        {
          NameForViewMode = BG_WorldStreaming_GetNameForViewMode(NextStreamViewMode);
          Com_sprintf<64>((char (*)[64])dest, "(%s) ", NameForViewMode);
        }
        else
        {
          dest[0] = 0;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vucomiss xmm1, xmm6
        }
        if ( !v27 )
          goto LABEL_18;
        __asm { vucomiss xmm6, dword ptr [rdi+4] }
        if ( !v27 )
          goto LABEL_18;
        __asm { vucomiss xmm6, dword ptr [rdi+8] }
        if ( v27 )
        {
          v125[0] = 0;
        }
        else
        {
LABEL_18:
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+4]
            vmovss  xmm0, dword ptr [rdi+8]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm1, xmm1
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+5E8h+fmt], xmm0
          }
          Com_sprintf<64>((char (*)[64])v125, "(%.0f %.0f %.0f)", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+8]
          vmovss  xmm1, dword ptr [rbp+4]
          vmovss  xmm2, dword ptr [rbp+0]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+5E8h+label], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+5E8h+color], xmm1
          vmovsd  [rsp+5E8h+fmt], xmm2
        }
        v42 = j_va("%s: %s [%3d] (%.0f %.0f %.0f)%s %s\n", NameForViewType, CurrentStateName, CurrentStateFrameDelta, *(double *)&fmta, *(double *)&color, *(double *)&label, v125, dest);
        v14 = scrPlace;
        __asm
        {
          vmovaps xmm3, xmm7; posY
          vmovaps xmm2, xmm9; posX
        }
        CgDrawDebug::CornerPrintNoLabel(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v42, v25);
        __asm { vaddss  xmm7, xmm7, xmm0 }
      }
    }
    v19 = 0;
    for ( j = 0; j < 3; ++j )
    {
      *(double *)&_XMM0 = CG_WorldStreaming_GetLoadDist(localClientNum, (const BgWorldStreamingViewType)(unsigned __int8)j);
      __asm
      {
        vucomiss xmm0, xmm6
        vmovaps xmm8, xmm0
      }
      if ( !v27 )
      {
        v47 = BG_WorldStreaming_GetNameForViewType((const BgWorldStreamingViewType)(unsigned __int8)j);
        __asm
        {
          vcvtss2sd xmm2, xmm8, xmm8
          vmovq   r8, xmm2
        }
        v50 = j_va("%s LOAD DIST: %g", v47, _R8);
        __asm
        {
          vmovaps xmm3, xmm7; posY
          vmovaps xmm2, xmm9; posX
        }
        CgDrawDebug::CornerPrintNoLabel(this, v14, *(float *)&_XMM2, *(float *)&_XMM3, v50, &colorWhite);
        __asm { vaddss  xmm7, xmm7, xmm0 }
      }
    }
    m_activeGameMapName = v121;
  }
  v53 = DCONST_DVARBOOL_cg_drawClientStreamManualView;
  if ( !DCONST_DVARBOOL_cg_drawClientStreamManualView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawClientStreamManualView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled )
  {
    v54 = DVARINT_cg_drawFPS;
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v54->current.integer )
    {
      *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " ClientStreamManualView");
      __asm { vmovaps xmm8, xmm0 }
      for ( k = 0; k < 5; ++k )
      {
        if ( CL_StreamViews_IsManualViewSet((StreamManualViewType)k, localClientNum) )
        {
          _RDI = CL_StreamViews_GetManualViewOrigin((StreamManualViewType)k, localClientNum);
          _RAX = CL_StreamViews_GetManualViewVelocity((StreamManualViewType)k, localClientNum);
          __asm
          {
            vmovss  xmm1, dword ptr [rax]
            vucomiss xmm1, xmm6
          }
          if ( !v58 )
            goto LABEL_40;
          __asm { vucomiss xmm6, dword ptr [rax+4] }
          if ( !v58 )
            goto LABEL_40;
          __asm { vucomiss xmm6, dword ptr [rax+8] }
          if ( v58 )
          {
            v125[0] = 0;
          }
          else
          {
LABEL_40:
            __asm
            {
              vmovss  xmm3, dword ptr [rax+4]
              vmovss  xmm0, dword ptr [rax+8]
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm2, xmm1, xmm1
              vcvtss2sd xmm0, xmm0, xmm0
              vmovq   r9, xmm3
              vmovq   r8, xmm2
              vmovsd  [rsp+5E8h+fmt], xmm0
            }
            Com_sprintf<64>((char (*)[64])v125, "(%.0f %.0f %.0f)", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb);
          }
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+4]
            vmovss  xmm2, dword ptr [rdi]
            vmovss  xmm0, dword ptr [rdi+8]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+5E8h+fmt], xmm0
          }
          v76 = j_va("[%d] (%.0f %.0f %.0f)%s\n", (unsigned int)k, _R8, _R9, fmtc, v125);
          __asm
          {
            vmovaps xmm3, xmm7; posY
            vmovaps xmm2, xmm9; posX
            vmovss  dword ptr [rsp+5E8h+fmt], xmm8
          }
          CgDrawDebug::CornerPrint(this, v14, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v76, " ClientStreamManualView", &colorWhite);
          __asm { vaddss  xmm7, xmm7, xmm0 }
        }
      }
      m_activeGameMapName = v121;
    }
  }
  v79 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm8, [rsp+5E8h+var_78] }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v79);
  if ( v79->current.integer )
  {
    Stream_ViewPos_GetStaticMultiView(&multiView);
    v81 = "Stream Update";
    if ( Stream_LoadSync_IsActive() )
      v81 = "Stream Sync";
    v82 = multiView.viewCount == 0;
    if ( multiView.viewCount > 0 )
    {
      _RBX = &multiView;
      do
      {
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx+200h]
          vucomiss xmm1, xmm6
          vshufps xmm2, xmm1, xmm1, 55h ; 'U'
          vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
        }
        if ( !v82 )
          goto LABEL_56;
        __asm { vucomiss xmm2, xmm6 }
        if ( !v82 )
          goto LABEL_56;
        __asm { vucomiss xmm0, xmm6 }
        if ( v82 )
        {
          v125[0] = 0;
        }
        else
        {
LABEL_56:
          __asm
          {
            vcvtss2sd xmm3, xmm2, xmm2
            vcvtss2sd xmm2, xmm1, xmm1
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r8, xmm2
            vmovq   r9, xmm3
            vmovsd  [rsp+5E8h+fmt], xmm0
          }
          Com_sprintf<64>((char (*)[64])v125, "(%.2f %.2f %.2f)", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmte);
        }
        __asm
        {
          vmovups xmm2, xmmword ptr [rbx]
          vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
          vcvtss2sd xmm4, xmm0, xmm0
          vshufps xmm1, xmm2, xmm2, 55h ; 'U'
          vcvtss2sd xmm3, xmm2, xmm2
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+5E8h+color], xmm4
          vmovq   r9, xmm3
          vmovsd  [rsp+5E8h+fmt], xmm0
        }
        v99 = j_va("%s[%d] (%.0f %.0f %.0f)%s \n", v81, (unsigned int)v19, _R9, fmtf, colora, v125);
        __asm
        {
          vmovaps xmm3, xmm7; posY
          vmovaps xmm2, xmm9; posX
          vmovss  dword ptr [rsp+5E8h+fmt], xmm10
        }
        CgDrawDebug::CornerPrint(this, v14, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v99, m_activeGameMapName, &colorWhite);
        ++v19;
        _RBX = (StreamUpdateMultiView *)((char *)_RBX + 16);
        __asm { vaddss  xmm7, xmm7, xmm0 }
        v82 = v19 == multiView.viewCount;
      }
      while ( v19 < multiView.viewCount );
    }
  }
  __asm { vmovaps xmm0, xmm7 }
  _R11 = &v128;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-58h]
    vmovaps xmm10, xmmword ptr [r11-68h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintTeamDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintTeamDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v7; 
  const dvar_t *v11; 
  float fmt; 

  v7 = DVARINT_cg_drawFPS;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm3
  }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    v11 = DVARBOOL_cg_drawteamdebuginfo;
    if ( !DVARBOOL_cg_drawteamdebuginfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawteamdebuginfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && party_drawTeamDebug[0] )
    {
      __asm { vmovaps [rsp+68h+var_18], xmm6 }
      *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
      __asm
      {
        vmovaps xmm3, xmm7; posY
        vmovaps xmm2, xmm0; posX
        vmovss  dword ptr [rsp+68h+fmt], xmm6
      }
      CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, party_drawTeamDebug, " teams", &colorWhite);
      __asm
      {
        vmovaps xmm6, [rsp+68h+var_18]
        vaddss  xmm7, xmm7, xmm0
      }
    }
  }
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintTournamentDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintTournamentDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const char *text; 
  const char *CurrentTournamentLobbyTaskString; 
  const char *CurrentTournamentChatChannelCommunicationStateString; 
  const char *MyParticipationStatusString; 
  const char *MyTourneyDataString; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  char v57[16]; 
  char v58; 
  char v59[16]; 
  char v61[8]; 
  __int128 v62; 
  char v63[8]; 
  char v64[16]; 
  char v66[8]; 
  char v67[16]; 
  char v68[8]; 

  __asm
  {
    vmovaps [rsp+150h+var_80], xmm11
    vmovaps xmm11, xmm3
  }
  if ( OnlineTournament_IsScreenDebugEnabled() )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:aTourneyState; "    Tourney State"
      vmovsd  xmm1, qword ptr cs:aTourneyChatCha+10h; " channel state"
    }
    strcpy(v63, "e");
    v58 = aTourneyTask[16];
    strcpy(v61, " state");
    __asm
    {
      vmovups [rsp+150h+anonymous_0], xmm0
      vmovups xmm0, xmmword ptr cs:aTourneyTask; "    Tourney Task"
      vmovups xmmword ptr [rsp+150h+var_110], xmm0
      vmovups xmm0, xmmword ptr cs:aTourneyChatCha; "    Tourney Chat channel state"
      vmovaps [rsp+150h+var_30], xmm6
      vmovups xmmword ptr [rsp+150h+var_F8], xmm0
      vmovups xmm0, xmmword ptr cs:aTourneyMyParti; "    Tourney My Participation"
    }
    strcpy(v66, "tion");
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm7
      vmovsd  [rsp+150h+var_E8], xmm1
      vmovsd  xmm1, qword ptr cs:aTourneyMyParti+10h; "articipation"
      vmovups xmmword ptr [rbp+50h+var_C0], xmm0
      vmovups xmm0, xmmword ptr cs:aTourneyMyData; "    Tourney My Data"
      vmovaps [rsp+150h+var_50], xmm8
      vmovaps [rsp+150h+var_60], xmm9
    }
    strcpy(v68, "ata");
    __asm
    {
      vmovaps [rsp+150h+var_70], xmm10
      vmovsd  [rbp+50h+var_B0], xmm1
      vmovups xmmword ptr [rbp+50h+var_A0], xmm0
    }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, (const char *)&v62);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, v57);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, v59);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, v64);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, v67);
    __asm { vmovaps xmm10, xmm0 }
    text = OnlineTournament_GetCurrentTournamentStateString();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm11; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+150h+var_130], xmm6
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v52, text, (const char *)&v62, &colorWhite);
    __asm { vaddss  xmm6, xmm11, xmm0 }
    CurrentTournamentLobbyTaskString = OnlineTournament_GetCurrentTournamentLobbyTaskString();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+150h+var_130], xmm7
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v53, CurrentTournamentLobbyTaskString, v57, &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    CurrentTournamentChatChannelCommunicationStateString = OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+150h+var_130], xmm8
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v54, CurrentTournamentChatChannelCommunicationStateString, v59, &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    MyParticipationStatusString = OnlineTournament_GetMyParticipationStatusString();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+150h+var_130], xmm9
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v55, MyParticipationStatusString, v64, &colorWhite);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    MyTourneyDataString = OnlineTournament_GetMyTourneyDataString();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm0; posX
      vmovss  [rsp+150h+var_130], xmm10
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, v56, MyTourneyDataString, v67, &colorWhite);
    __asm
    {
      vmovaps xmm10, [rsp+150h+var_70]
      vmovaps xmm9, [rsp+150h+var_60]
      vmovaps xmm8, [rsp+150h+var_50]
      vmovaps xmm7, [rsp+150h+var_40]
      vaddss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+150h+var_30]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm11 }
  }
  __asm { vmovaps xmm11, [rsp+150h+var_80] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintTransientFastfileDebugInfo
==============
*/

float __fastcall CgDrawDebugMP::PrintTransientFastfileDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  const dvar_t *v6; 
  const dvar_t *v10; 
  bool enabled; 
  const dvar_t *v12; 
  bool v13; 
  TransientDebugStats *p_outStats; 
  __int64 v15; 
  unsigned int *queuedWorldTiles; 
  __int64 v21; 
  const dvar_t *v27; 
  unsigned int YieldTimeout; 
  unsigned int YieldTimeProgress; 
  GfxFont *FontHandle; 
  __int64 v32; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float text; 
  float v44; 
  int destPos; 
  vec4_t color; 
  TransientDebugStats outStats; 
  char dest[128]; 

  __asm { vmovaps [rsp+1B0h+var_50], xmm7 }
  v6 = DVARINT_cg_drawFPS;
  __asm { vmovaps xmm7, xmm3 }
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer )
  {
    v10 = DCONST_DVARBOOL_cg_drawWorldTileLoadCounts;
    if ( !DCONST_DVARBOOL_cg_drawWorldTileLoadCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWorldTileLoadCounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    enabled = v10->current.enabled;
    v12 = DCONST_DVARBOOL_cg_drawTransientCommonLoadCounts;
    if ( !DCONST_DVARBOOL_cg_drawTransientCommonLoadCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransientCommonLoadCounts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.enabled;
    if ( !enabled && !v13 )
      goto LABEL_42;
    __asm { vmovaps [rsp+1B0h+var_40], xmm6 }
    CL_TransientsMP_GetTransientStats(&outStats);
    if ( !v13 )
    {
LABEL_30:
      if ( !enabled )
      {
LABEL_41:
        __asm { vmovaps xmm6, [rsp+1B0h+var_40] }
LABEL_42:
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
          __asm { vmovss  xmm2, cs:__real@3f800000; scale }
          FontHandle = UI_GetFontHandle(scrPlace, 5, *(float *)&_XMM2);
          v32 = -1i64;
          do
            ++v32;
          while ( *((_BYTE *)outStats.queuedCommon + v32) );
          __asm
          {
            vmovss  xmm0, cs:__real@3e800000
            vmovss  xmm1, cs:__real@43988000
            vmovss  [rsp+1B0h+var_170], xmm0
            vmovss  xmm0, cs:__real@43dd0000
            vmovss  dword ptr [rsp+1B0h+text], xmm0
            vmovss  dword ptr [rsp+1B0h+fmt], xmm1
          }
          UI_DrawText(scrPlace, (const char *)&outStats, v32, FontHandle, fmtc, text, 1, 1, v44, &colorWhite, 3);
        }
        goto LABEL_52;
      }
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
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovups xmmword ptr [rsp+1B0h+var_148], xmm0
      }
      if ( outStats.queuedWorldTiles[0] )
      {
        __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
      }
      else if ( outStats.queuedWorldTiles[1] )
      {
        __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
      }
      else
      {
        if ( !outStats.queuedWorldTiles[2] )
        {
LABEL_40:
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "TR World Tiles Loading");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vmovaps xmm3, xmm7; posY
            vmovaps xmm2, xmm0; posX
            vmovss  dword ptr [rsp+1B0h+fmt], xmm6
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, dest, "TR World Tiles Loading", &color);
          __asm { vaddss  xmm7, xmm7, xmm0 }
          goto LABEL_41;
        }
        __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
      }
      __asm { vmovups xmmword ptr [rsp+1B0h+var_148], xmm0 }
      goto LABEL_40;
    }
    destPos = 0;
    p_outStats = &outStats;
    v15 = 12i64;
    do
    {
      LODWORD(fmt) = p_outStats->queuedCommon[0];
      Com_sprintfPos_truncate(dest, 0x80ui64, &destPos, "%u ", fmt);
      p_outStats = (TransientDebugStats *)((char *)p_outStats + 4);
      --v15;
    }
    while ( v15 );
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovups xmmword ptr [rsp+1B0h+var_148], xmm0
    }
    if ( outStats.queuedCommon[0] || outStats.queuedCommon[1] || outStats.queuedCommon[2] || outStats.queuedCommon[3] || outStats.queuedCommon[6] )
    {
      __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
    }
    else if ( outStats.queuedCommon[4] || outStats.queuedCommon[5] )
    {
      __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
    }
    else
    {
      if ( !outStats.queuedCommon[7] && !outStats.queuedCommon[8] )
        goto LABEL_29;
      __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
    }
    __asm { vmovups xmmword ptr [rsp+1B0h+var_148], xmm0 }
LABEL_29:
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, "TR Common Loading     ");
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm
    {
      vmovaps xmm3, xmm7; posY
      vmovaps xmm2, xmm0; posX
      vmovss  dword ptr [rsp+1B0h+fmt], xmm6
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, dest, "TR Common Loading     ", &color);
    __asm { vaddss  xmm7, xmm7, xmm0 }
    goto LABEL_30;
  }
LABEL_52:
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+1B0h+var_50]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugMP::PrintUpperRightDebugInfo
==============
*/
void CgDrawDebugMP::PrintUpperRightDebugInfo(CgDrawDebugMP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  __int64 v7; 
  const dvar_t *v19; 
  const dvar_t *v21; 
  const vec4_t *color; 
  char v26; 
  const dvar_t *v32; 
  const dvar_t *v34; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  char dest[64]; 

  v7 = localClientNum;
  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type != 4 )
  {
    _RBX = DVARVEC2_cg_debugInfoCornerOffsetMP;
    __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
    if ( !DVARVEC2_cg_debugInfoCornerOffsetMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetMP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm3, dword ptr [rbx+2Ch]; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintCinematicInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintPerformanceInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintBuildName(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintFastfileDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintStreamLoadingInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintTransientFastfileDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintEntityDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintScriptableDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    v19 = DVARINT_cg_drawFPS;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer )
    {
      v21 = DVARBOOL_cg_drawservercounts;
      if ( !DVARBOOL_cg_drawservercounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawservercounts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
      {
        *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " outlines");
        LODWORD(fmt) = 63;
        __asm { vmovaps xmm6, xmm0 }
        Com_sprintf(dest, 0x40ui64, "%i / %i", s_serverCollectedInfo[v7].svHudOutlineUsage, fmt);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx
          vcomiss xmm1, cs:__real@42563334
        }
        color = &colorWhite;
        if ( !v26 )
          color = &colorRed;
        *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
        __asm
        {
          vmovaps xmm2, xmm0; posX
          vmovaps xmm3, xmm7; posY
          vmovss  dword ptr [rsp+0E8h+fmt], xmm6
        }
        *(double *)&_XMM0 = CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmta, dest, " outlines", color);
        __asm { vaddss  xmm7, xmm0, xmm7 }
      }
    }
    __asm { vmovaps xmm3, xmm7; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintNativeScriptDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintWallRunDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintEventProfile(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    v32 = DVARINT_cg_drawFPS;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.integer )
    {
      v34 = DVARBOOL_cg_drawteamdebuginfo;
      if ( !DVARBOOL_cg_drawteamdebuginfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawteamdebuginfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.enabled )
      {
        if ( party_drawTeamDebug[0] )
        {
          *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, " cg ms/frame");
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
          __asm
          {
            vmovaps xmm3, xmm7; posY
            vmovaps xmm2, xmm0; posX
            vmovss  dword ptr [rsp+0E8h+fmt], xmm6
          }
          CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, party_drawTeamDebug, " teams", &colorWhite);
          __asm { vaddss  xmm7, xmm7, xmm0 }
        }
      }
    }
    __asm { vmovaps xmm3, xmm7; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintSnapshotInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintClientTaskDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintReplayTime(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintViewpos(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintStreamingPos(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintCamAndMovementInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintSystemTime(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintPartyDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebugMP::PrintMPDebugInfo(this, (const LocalClientNum_t)v7, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0 }
    ((void (__fastcall *)(CgDrawDebugMP *, _QWORD, const ScreenPlacement *))this->DrawClientNetPerf)(this, (unsigned int)v7, scrPlace);
    __asm
    {
      vmovaps xmm7, [rsp+0E8h+var_58]
      vmovaps xmm6, [rsp+0E8h+var_48]
    }
  }
}

