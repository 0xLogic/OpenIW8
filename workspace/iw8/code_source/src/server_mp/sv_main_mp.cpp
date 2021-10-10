/*
==============
SvGameModeAppMP::SetServerReady
==============
*/

void __fastcall SvGameModeAppMP::SetServerReady(SvGameModeAppMP *this)
{
  ?SetServerReady@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_GetDvarInfoString
==============
*/

char *__fastcall SV_MainMP_GetDvarInfoString(int dvarType)
{
  return ?SV_MainMP_GetDvarInfoString@@YAPEADH@Z(dvarType);
}

/*
==============
SvGameModeAppMP::CheckStartServer
==============
*/

bool __fastcall SvGameModeAppMP::CheckStartServer(ServerTimingState *timer)
{
  return ?CheckStartServer@SvGameModeAppMP@@SA_NPEAUServerTimingState@@@Z(timer);
}

/*
==============
SvGameModeAppMP::PreServerSimulation
==============
*/

void __fastcall SvGameModeAppMP::PreServerSimulation(SvGameModeAppMP *this, int *saveDvarFlags)
{
  ?PreServerSimulation@SvGameModeAppMP@@AEAAXPEAH@Z(this, saveDvarFlags);
}

/*
==============
SV_MainMP_GetServerLobby
==============
*/

PartyData *__fastcall SV_MainMP_GetServerLobby()
{
  return ?SV_MainMP_GetServerLobby@@YAPEAUPartyData@@XZ();
}

/*
==============
SV_MainMP_InitSnapshot
==============
*/

void SV_MainMP_InitSnapshot(void)
{
  ?SV_MainMP_InitSnapshot@@YAXXZ();
}

/*
==============
SvGameModeAppMP::AsyncServerControl_Wait
==============
*/

bool __fastcall SvGameModeAppMP::AsyncServerControl_Wait(SvGameModeAppMP *this)
{
  return ?AsyncServerControl_Wait@SvGameModeAppMP@@AEAA_NXZ(this);
}

/*
==============
SvGameModeAppMP::WaitServer
==============
*/

void __fastcall SvGameModeAppMP::WaitServer(SvGameModeAppMP *this, void (__fastcall *waitFunction)())
{
  ?WaitServer@SvGameModeAppMP@@UEAAXP6AXXZ@Z(this, waitFunction);
}

/*
==============
SV_MainMP_SetWinningTeam
==============
*/

void __fastcall SV_MainMP_SetWinningTeam(int winner)
{
  ?SV_MainMP_SetWinningTeam@@YAXH@Z(winner);
}

/*
==============
SV_MainMP_AddServerCommandMsg
==============
*/

void __fastcall SV_MainMP_AddServerCommandMsg(SvClientMP *client, svscmd_type type, const msg_t *msg)
{
  ?SV_MainMP_AddServerCommandMsg@@YAXPEAVSvClientMP@@W4svscmd_type@@PEBUmsg_t@@@Z(client, type, msg);
}

/*
==============
SvGameModeAppMP::UpdateServerTime
==============
*/

bool __fastcall SvGameModeAppMP::UpdateServerTime(SvGameModeAppMP *this, const int currentTime, const int deltaTime)
{
  return ?UpdateServerTime@SvGameModeAppMP@@AEAA_NHH@Z(this, currentTime, deltaTime);
}

/*
==============
SV_MainMP_CheckTimeouts
==============
*/

void SV_MainMP_CheckTimeouts(void)
{
  ?SV_MainMP_CheckTimeouts@@YAXXZ();
}

/*
==============
SvGameModeAppMP::RunSettleFrames
==============
*/

void __fastcall SvGameModeAppMP::RunSettleFrames(SvGameModeAppMP *this)
{
  ?RunSettleFrames@SvGameModeAppMP@@QEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::SetServerRunning
==============
*/

void __fastcall SvGameModeAppMP::SetServerRunning(SvGameModeAppMP *this)
{
  ?SetServerRunning@SvGameModeAppMP@@QEAAXXZ(this);
}

/*
==============
SV_MainMP_RestartServerAsync
==============
*/

void __fastcall SV_MainMP_RestartServerAsync(const SvServerInitSettings *r_initSettings)
{
  ?SV_MainMP_RestartServerAsync@@YAXAEBUSvServerInitSettings@@@Z(r_initSettings);
}

/*
==============
SvGameModeAppMP::RunFrame
==============
*/

void __fastcall SvGameModeAppMP::RunFrame(SvGameModeAppMP *this, int msec)
{
  ?RunFrame@SvGameModeAppMP@@UEAAXH@Z(this, msec);
}

/*
==============
SV_MainMP_IsAsyncServerStarting
==============
*/

bool __fastcall SV_MainMP_IsAsyncServerStarting()
{
  return ?SV_MainMP_IsAsyncServerStarting@@YA_NXZ();
}

/*
==============
SvGameModeAppMP::AsyncServerControl_ClearRequest
==============
*/

void __fastcall SvGameModeAppMP::AsyncServerControl_ClearRequest(SvGameModeAppMP *this)
{
  ?AsyncServerControl_ClearRequest@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest
==============
*/

void __fastcall SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest(SvGameModeAppMP *this)
{
  ?AsyncServerRestart_CheckFinalizeRequest@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::FlushLoopbackPackets
==============
*/

void __fastcall SvGameModeAppMP::FlushLoopbackPackets(SvGameModeAppMP *this)
{
  ?FlushLoopbackPackets@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::PacketEvent
==============
*/

void __fastcall SvGameModeAppMP::PacketEvent(SvGameModeAppMP *this)
{
  ?PacketEvent@SvGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
SV_MainMP_PacketEventInternal
==============
*/

void __fastcall SV_MainMP_PacketEventInternal(netadr_t *from, msg_t *msg, NetPingInfo *info)
{
  ?SV_MainMP_PacketEventInternal@@YAXUnetadr_t@@PEAUmsg_t@@PEAUNetPingInfo@@@Z(from, msg, info);
}

/*
==============
SV_MainMP_IsAsyncServerRestarting
==============
*/

bool __fastcall SV_MainMP_IsAsyncServerRestarting()
{
  return ?SV_MainMP_IsAsyncServerRestarting@@YA_NXZ();
}

/*
==============
SvGameModeAppMP::ServerStart_Execute
==============
*/

void __fastcall SvGameModeAppMP::ServerStart_Execute(SvGameModeAppMP *this)
{
  ?ServerStart_Execute@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::RunServerSimulation
==============
*/

void __fastcall SvGameModeAppMP::RunServerSimulation(SvGameModeAppMP *this)
{
  ?RunServerSimulation@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_IsDevToolsMode
==============
*/

bool __fastcall SV_MainMP_IsDevToolsMode()
{
  return ?SV_MainMP_IsDevToolsMode@@YA_NXZ();
}

/*
==============
SvGameModeAppMP::ServerStart_CheckFinalizeRequest
==============
*/

void __fastcall SvGameModeAppMP::ServerStart_CheckFinalizeRequest(SvGameModeAppMP *this)
{
  ?ServerStart_CheckFinalizeRequest@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_AddServerCommand
==============
*/

void __fastcall SV_MainMP_AddServerCommand(SvClientMP *client, svscmd_type type, const char *cmd)
{
  ?SV_MainMP_AddServerCommand@@YAXPEAVSvClientMP@@W4svscmd_type@@PEBD@Z(client, type, cmd);
}

/*
==============
SvGameModeAppMP::ServerThreadFrame
==============
*/

void __fastcall SvGameModeAppMP::ServerThreadFrame(SvGameModeAppMP *this)
{
  ?ServerThreadFrame@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_MatchEnd
==============
*/

void SV_MainMP_MatchEnd(void)
{
  ?SV_MainMP_MatchEnd@@YAXXZ();
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_IsRequested
==============
*/

bool __fastcall SvGameModeAppMP::AsyncServerRestart_IsRequested(SvGameModeAppMP *this)
{
  return ?AsyncServerRestart_IsRequested@SvGameModeAppMP@@AEAA_NXZ(this);
}

/*
==============
SvGameModeAppMP::RunEventLoop
==============
*/

void __fastcall SvGameModeAppMP::RunEventLoop(SvGameModeAppMP *this)
{
  ?RunEventLoop@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_GetServerSession
==============
*/

SessionData *__fastcall SV_MainMP_GetServerSession()
{
  return ?SV_MainMP_GetServerSession@@YAPEAUSessionData@@XZ();
}

/*
==============
SV_MainMP_ProcessUserMoveOutput
==============
*/

void __fastcall SV_MainMP_ProcessUserMoveOutput(bool recordDemo)
{
  ?SV_MainMP_ProcessUserMoveOutput@@YAX_N@Z(recordDemo);
}

/*
==============
SvGameModeAppMP::CheckKillServer
==============
*/

bool __fastcall SvGameModeAppMP::CheckKillServer(SvGameModeAppMP *this)
{
  return ?CheckKillServer@SvGameModeAppMP@@AEAA_NXZ(this);
}

/*
==============
SvGameModeAppMP::UpdateServerTimeFromClient
==============
*/

void __fastcall SvGameModeAppMP::UpdateServerTimeFromClient(SvGameModeAppMP *this, const int msec)
{
  ?UpdateServerTimeFromClient@SvGameModeAppMP@@AEAAXH@Z(this, msec);
}

/*
==============
SvGameModeAppMP::DecServerThreadOwnsGame
==============
*/

void __fastcall SvGameModeAppMP::DecServerThreadOwnsGame(SvGameModeAppMP *this)
{
  ?DecServerThreadOwnsGame@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::AllowNetPacketsFromServer
==============
*/

void __fastcall SvGameModeAppMP::AllowNetPacketsFromServer(SvGameModeAppMP *this, bool allow)
{
  ?AllowNetPacketsFromServer@SvGameModeAppMP@@AEAAX_N@Z(this, allow);
}

/*
==============
SV_MainMP_InitServerEvents
==============
*/

void SV_MainMP_InitServerEvents(void)
{
  ?SV_MainMP_InitServerEvents@@YAXXZ();
}

/*
==============
SV_MainMP_SetCodInfoDvarValues
==============
*/

void SV_MainMP_SetCodInfoDvarValues(void)
{
  ?SV_MainMP_SetCodInfoDvarValues@@YAXXZ();
}

/*
==============
SvGameModeAppMP::ForwardFrame
==============
*/

bool __fastcall SvGameModeAppMP::ForwardFrame(SvGameModeAppMP *this)
{
  return ?ForwardFrame@SvGameModeAppMP@@AEAA_NXZ(this);
}

/*
==============
SvGameModeAppMP::GetActiveServerApplicationMP
==============
*/

SvGameModeAppMP *__fastcall SvGameModeAppMP::GetActiveServerApplicationMP()
{
  return ?GetActiveServerApplicationMP@SvGameModeAppMP@@SAPEAV1@XZ();
}

/*
==============
SvGameModeAppMP::MainThreadPreSyncErrorCleanup
==============
*/

void __fastcall SvGameModeAppMP::MainThreadPreSyncErrorCleanup(SvGameModeAppMP *this)
{
  ?MainThreadPreSyncErrorCleanup@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::ResetServerTime
==============
*/

void __fastcall SvGameModeAppMP::ResetServerTime(SvGameModeAppMP *this)
{
  ?ResetServerTime@SvGameModeAppMP@@QEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::ShouldRunNetworkEvents
==============
*/

bool __fastcall SvGameModeAppMP::ShouldRunNetworkEvents(SvGameModeAppMP *this)
{
  return ?ShouldRunNetworkEvents@SvGameModeAppMP@@AEBA_NXZ(this);
}

/*
==============
SvGameModeAppMP::ServerThreadErrorCleanup
==============
*/

void __fastcall SvGameModeAppMP::ServerThreadErrorCleanup(SvGameModeAppMP *this)
{
  ?ServerThreadErrorCleanup@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SV_MainMP_FlushServerLoopbackPackets
==============
*/

void SV_MainMP_FlushServerLoopbackPackets(void)
{
  ?SV_MainMP_FlushServerLoopbackPackets@@YAXXZ();
}

/*
==============
SV_MainMP_IsMatchResumable
==============
*/

bool __fastcall SV_MainMP_IsMatchResumable(const char *killReason)
{
  return ?SV_MainMP_IsMatchResumable@@YA_NPEBD@Z(killReason);
}

/*
==============
SvGameModeAppMP::UpdateServerTimeFromServer
==============
*/

void __fastcall SvGameModeAppMP::UpdateServerTimeFromServer(SvGameModeAppMP *this)
{
  ?UpdateServerTimeFromServer@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SV_MainMP_KillLocalServer
==============
*/

void SV_MainMP_KillLocalServer(void)
{
  ?SV_MainMP_KillLocalServer@@YAXXZ();
}

/*
==============
SvGameModeAppMP::StartServer
==============
*/

void __fastcall SvGameModeAppMP::StartServer(SvGameModeAppMP *this, const SvServerInitSettings *r_initSettings)
{
  ?StartServer@SvGameModeAppMP@@QEAAXAEBUSvServerInitSettings@@@Z(this, r_initSettings);
}

/*
==============
SvGameModeAppMP::ServerStart_Finalize
==============
*/

void __fastcall SvGameModeAppMP::ServerStart_Finalize(SvGameModeAppMP *this)
{
  ?ServerStart_Finalize@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::SvGameModeAppMP
==============
*/

void __fastcall SvGameModeAppMP::SvGameModeAppMP(SvGameModeAppMP *this)
{
  ??0SvGameModeAppMP@@QEAA@XZ(this);
}

/*
==============
SvGameModeAppMP::AllowNetPackets
==============
*/

void __fastcall SvGameModeAppMP::AllowNetPackets(SvGameModeAppMP *this, bool allow)
{
  ?AllowNetPackets@SvGameModeAppMP@@UEAAX_N@Z(this, allow);
}

/*
==============
SvGameModeAppMP::IncServerThreadOwnsGame
==============
*/

void __fastcall SvGameModeAppMP::IncServerThreadOwnsGame(SvGameModeAppMP *this)
{
  ?IncServerThreadOwnsGame@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::UpdateServerDeltaTime
==============
*/

int __fastcall SvGameModeAppMP::UpdateServerDeltaTime(SvGameModeAppMP *this, const int currentTime)
{
  return ?UpdateServerDeltaTime@SvGameModeAppMP@@AEAAHH@Z(this, currentTime);
}

/*
==============
SvGameModeAppMP::ServerStart_IsRequested
==============
*/

bool __fastcall SvGameModeAppMP::ServerStart_IsRequested(SvGameModeAppMP *this)
{
  return ?ServerStart_IsRequested@SvGameModeAppMP@@AEBA_NXZ(this);
}

/*
==============
SvGameModeAppMP::ServerThreadLoop
==============
*/

void __fastcall SvGameModeAppMP::ServerThreadLoop(SvGameModeAppMP *this)
{
  ?ServerThreadLoop@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SV_MainMP_GetDeterministicSystemTime
==============
*/

int __fastcall SV_MainMP_GetDeterministicSystemTime()
{
  return ?SV_MainMP_GetDeterministicSystemTime@@YAHXZ();
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_Execute
==============
*/

void __fastcall SvGameModeAppMP::AsyncServerRestart_Execute(SvGameModeAppMP *this)
{
  ?AsyncServerRestart_Execute@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_Finalize
==============
*/

void __fastcall SvGameModeAppMP::AsyncServerRestart_Finalize(SvGameModeAppMP *this)
{
  ?AsyncServerRestart_Finalize@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::ClientFrameRateFix
==============
*/

int __fastcall SvGameModeAppMP::ClientFrameRateFix(SvGameModeAppMP *this, int msec_base)
{
  return ?ClientFrameRateFix@SvGameModeAppMP@@UEAAHH@Z(this, msec_base);
}

/*
==============
SV_MainMP_GetDebugEntityCounts
==============
*/

void __fastcall SV_MainMP_GetDebugEntityCounts(unsigned int *outHighestClientVisibleCount, unsigned int *outTotalCount, unsigned int *outMaxPerSnapshotCount, unsigned int *outMaxPerClientCount)
{
  ?SV_MainMP_GetDebugEntityCounts@@YAXPEAI000@Z(outHighestClientVisibleCount, outTotalCount, outMaxPerSnapshotCount, outMaxPerClientCount);
}

/*
==============
SvGameModeAppMP::PostServerSimulation
==============
*/

void __fastcall SvGameModeAppMP::PostServerSimulation(SvGameModeAppMP *this, const int saveDvarFlags)
{
  ?PostServerSimulation@SvGameModeAppMP@@AEAAXH@Z(this, saveDvarFlags);
}

/*
==============
SvGameModeAppMP::GetServerThreadOwnsGame
==============
*/

bool __fastcall SvGameModeAppMP::GetServerThreadOwnsGame(SvGameModeAppMP *this)
{
  return ?GetServerThreadOwnsGame@SvGameModeAppMP@@UEAA_NXZ(this);
}

/*
==============
SvGameModeAppMP::ClearServerThreadOwnsGame
==============
*/

void __fastcall SvGameModeAppMP::ClearServerThreadOwnsGame(SvGameModeAppMP *this)
{
  ?ClearServerThreadOwnsGame@SvGameModeAppMP@@AEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::SvGameModeAppMP
==============
*/
void SvGameModeAppMP::SvGameModeAppMP(SvGameModeAppMP *this)
{
  int v2; 

  SvGameModeApplication::SvGameModeApplication(this);
  this->__vftable = (SvGameModeAppMP_vtbl *)&SvGameModeAppMP::`vftable';
  v2 = Sys_Milliseconds();
  this->m_endFrameTime = v2;
  this->m_frameTime = v2;
  this->m_svUpdateState = 0;
  this->m_svUpdateTime = Sys_Milliseconds();
  *(_QWORD *)&this->m_svAccumTime = 0i64;
  this->m_svCurCmdDuration = Com_GetUserCommandConstantMsec();
}

/*
==============
SvGameModeAppMP::AllowNetPackets
==============
*/
void SvGameModeAppMP::AllowNetPackets(SvGameModeAppMP *this, bool allow)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  this->m_allowNetPackets = allow;
  if ( !allow )
  {
    Sys_ThreadsMP_WaitServerNetworkCompleted();
    Sys_ThreadsMP_ResetServerAllowNetworkEvent();
  }
  Sys_ThreadsMP_SetServerAllowNetworkEvent();
}

/*
==============
SvGameModeAppMP::AllowNetPacketsFromServer
==============
*/
void SvGameModeAppMP::AllowNetPacketsFromServer(SvGameModeAppMP *this, bool allow)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3535, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  this->m_allowNetPackets = allow;
  Sys_ThreadsMP_SetServerAllowNetworkEvent();
}

/*
==============
SvGameModeAppMP::AsyncServerControl_ClearRequest
==============
*/
void SvGameModeAppMP::AsyncServerControl_ClearRequest(SvGameModeAppMP *this)
{
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 0);
}

/*
==============
SvGameModeAppMP::AsyncServerControl_Wait
==============
*/
char SvGameModeAppMP::AsyncServerControl_Wait(SvGameModeAppMP *this)
{
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2881, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  SvGameModeAppMP::ServerStart_CheckFinalizeRequest(this);
  SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest(this);
  if ( s_svMainMP_serverProcessControl.requestedState == 1 || s_svMainMP_serverProcessControl.requestedState == 2 || s_svMainMP_serverProcessControl.requestedState == 3 || s_svMainMP_serverProcessControl.requestedState == 4 )
    return 1;
  if ( s_svMainMP_serverProcessControl.requestedState )
  {
    LODWORD(v3) = s_svMainMP_serverProcessControl.requestedState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2896, ASSERT_TYPE_ASSERT, "( s_svMainMP_serverProcessControl.requestedState ) == ( static_cast<int>( ServerAsyncStartState::IDLE ) )", "s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE )\n\t%i, %i", v3, 0i64) )
      __debugbreak();
  }
  return 0;
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest
==============
*/
void SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest(SvGameModeAppMP *this)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2851, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_svMainMP_serverProcessControl.requestedState == 4 )
  {
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2855, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    SV_InitMP_RestartServerFinalize();
    if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
      __debugbreak();
    if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 0) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2869, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE )") )
      __debugbreak();
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2859, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( s_svMainMP_serverProcessControl.requestedState == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2860, ASSERT_TYPE_ASSERT, "(s_svMainMP_serverProcessControl.requestedState != static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ))", (const char *)&queryFormat, "s_svMainMP_serverProcessControl.requestedState != static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE )") )
      __debugbreak();
  }
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_Execute
==============
*/
void SvGameModeAppMP::AsyncServerRestart_Execute(SvGameModeAppMP *this)
{
  int v2; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2826, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  v2 = Sys_Milliseconds();
  Com_Printf(15, "AsyncServerRestart_Execute: Starting after %i ms of request.\n", (unsigned int)(v2 - s_svMainMP_serverProcessControl.startTime));
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_UserMoveWorkersMP_FinishClientThinkCmds AsyncRestart");
  SV_UserMoveWorkersMP_FinishClientThinkCmds();
  Sys_ProfEndNamedEvent();
  if ( !s_svMainMP_serverProcessControl.settings.serverThreadStartup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2837, ASSERT_TYPE_ASSERT, "( s_svMainMP_serverProcessControl.settings.serverThreadStartup )", (const char *)&queryFormat, "s_svMainMP_serverProcessControl.settings.serverThreadStartup") )
    __debugbreak();
  SV_InitMP_RestartServer(&s_svMainMP_serverProcessControl.settings);
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time != this->m_svLevelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2841, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() == m_svLevelTime )", (const char *)&queryFormat, "SvPersistentGlobalsMP::GetTime() == m_svLevelTime") )
    __debugbreak();
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 4) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2844, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED )") )
    __debugbreak();
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_Finalize
==============
*/
void SvGameModeAppMP::AsyncServerRestart_Finalize(SvGameModeAppMP *this)
{
  SV_InitMP_RestartServerFinalize();
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 0) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2869, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE )") )
    __debugbreak();
}

/*
==============
SvGameModeAppMP::AsyncServerRestart_IsRequested
==============
*/
bool SvGameModeAppMP::AsyncServerRestart_IsRequested(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2819, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  return s_svMainMP_serverProcessControl.requestedState == 3;
}

/*
==============
SvGameModeAppMP::CheckKillServer
==============
*/
char SvGameModeAppMP::CheckKillServer(SvGameModeAppMP *this)
{
  const char *v2; 
  SvGameModeApplication *ActiveServerApplication; 

  if ( !(_BYTE)qword_14E91B0F8 )
    return 0;
  v2 = qword_14E91B100;
  if ( !qword_14E91B100 || !*qword_14E91B100 )
    v2 = "EXE/SERVERKILLED";
  LOBYTE(qword_14E91B0F8) = 0;
  qword_14E91B100 = NULL;
  if ( !SV_IsMigrating() || (SV_GetMigrationFlags() & 1) != 0 )
  {
    if ( g_sv_kickedForInactivity )
    {
      Com_SetErrorMessage("EXE/PLAYERKICKED_INACTIVE");
      g_sv_kickedForInactivity = 0;
    }
    Com_Shutdown(v2);
    Com_AssetLoadUI();
    Dvar_SetBool_Internal(DVARBOOL_online_is_devmapping, 0);
    return 1;
  }
  else
  {
    Com_SyncThreads();
    if ( SvGameModeApplication::HasActiveServerApplication() )
    {
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
    }
    CL_Main_ShutdownAll(1, 1);
    FakeLag_Shutdown();
    SV_ServerShutdownCommon(v2);
    Com_Restart();
    CL_Main_ShutdownClientMemory();
    CL_Main_InitRenderer();
    CL_Main_StartHunkUsers();
    return 1;
  }
}

/*
==============
SvGameModeAppMP::CheckStartServer
==============
*/
char SvGameModeAppMP::CheckStartServer(ServerTimingState *timer)
{
  SvGameModeAppMP *ActiveServerApplication; 
  const dvar_t *v3; 
  int integer; 
  int v5; 
  volatile __int32 *p_m_svUpdateState; 
  int v7; 
  int updated; 
  const dvar_t *v9; 
  const dvar_t *v10; 

  if ( !BG_GameInterface_GameModeIsOnline((GameModeType)(unsigned __int8)SvGameModeApplication::ms_allocType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3252, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsOnline( ms_allocType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsOnline( ms_allocType )") )
    __debugbreak();
  ActiveServerApplication = (SvGameModeAppMP *)SvGameModeApplication::GetActiveServerApplication();
  SV_Timing_EndIdleWorkers();
  v3 = DCONST_DVARBOOL_sv_enable_server_wake;
  if ( !DCONST_DVARBOOL_sv_enable_server_wake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_enable_server_wake") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = 0;
  v5 = 1;
  if ( v3->current.enabled && !SV_IsDemoPlaying() && !Com_ErrorEntered() && SV_Main_InServerFrame() && Com_IsGameLocalServerRunning() && DB_AreFastfileLoadsCompleted() )
  {
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3830, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    p_m_svUpdateState = &ActiveServerApplication->m_svUpdateState;
    if ( (((_BYTE)ActiveServerApplication + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &ActiveServerApplication->m_svUpdateState) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(p_m_svUpdateState, 1, 0) )
    {
      v7 = Sys_Milliseconds();
      updated = SvGameModeAppMP::UpdateServerDeltaTime(ActiveServerApplication, v7);
      if ( SvGameModeAppMP::UpdateServerTime(ActiveServerApplication, v7, updated) )
      {
        Sys_WakeServerFromServer();
        if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3535, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
          __debugbreak();
        ActiveServerApplication->m_allowNetPackets = 1;
        Sys_ThreadsMP_SetServerAllowNetworkEvent();
      }
      if ( (((_BYTE)ActiveServerApplication + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &ActiveServerApplication->m_svUpdateState) )
        __debugbreak();
      _InterlockedExchange(p_m_svUpdateState, 0);
    }
  }
  if ( !Com_IsGameLocalServerRunning() )
  {
    v9 = DCONST_DVARINT_sv_start_check_timeout;
    if ( !DCONST_DVARINT_sv_start_check_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_start_check_timeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    v10 = DCONST_DVARINT_sv_start_check_interval;
    if ( !DCONST_DVARINT_sv_start_check_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_start_check_interval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v5 = v10->current.integer;
  }
  if ( Sys_WaitStartServer(integer, v5) )
  {
    ActiveServerApplication->m_svStartServer = 1;
    return 1;
  }
  if ( ActiveServerApplication->m_restartServerThread || !SV_UserMoveWorkersMP_IsClientThinkWorkPending() && ActiveServerApplication->m_allowNetPackets && Sys_Milliseconds() >= ActiveServerApplication->m_svNetworkTime )
    return 1;
  SV_Timing_BeginIdleWorkers(timer);
  return 0;
}

/*
==============
CheckStartServerTimeout
==============
*/

bool __fastcall CheckStartServerTimeout(void *userData)
{
  return SvGameModeAppMP::CheckStartServer((ServerTimingState *)userData);
}

/*
==============
SvGameModeAppMP::ClearServerThreadOwnsGame
==============
*/
void SvGameModeAppMP::ClearServerThreadOwnsGame(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3580, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  this->m_svThreadOwnsGame = 0;
}

/*
==============
SvGameModeAppMP::ClientFrameRateFix
==============
*/
__int64 SvGameModeAppMP::ClientFrameRateFix(SvGameModeAppMP *this, int msec_base)
{
  return (unsigned int)msec_base;
}

/*
==============
SvGameModeAppMP::DecServerThreadOwnsGame
==============
*/
void SvGameModeAppMP::DecServerThreadOwnsGame(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3572, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( !this->m_svThreadOwnsGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3573, ASSERT_TYPE_ASSERT, "(m_svThreadOwnsGame)", (const char *)&queryFormat, "m_svThreadOwnsGame") )
    __debugbreak();
  this->m_svThreadOwnsGame = 0;
}

/*
==============
SvGameModeAppMP::FlushLoopbackPackets
==============
*/
void SvGameModeAppMP::FlushLoopbackPackets(SvGameModeAppMP *this)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2290, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2293, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
    __debugbreak();
  NET_FlushLoopback(NS_MAXCLIENTS);
}

/*
==============
SvGameModeAppMP::ForwardFrame
==============
*/
char SvGameModeAppMP::ForwardFrame(SvGameModeAppMP *this)
{
  SvGameModeApplication *ActiveServerApplication; 
  int FrameDuration; 
  int Time; 
  const dvar_t *v6; 
  float value; 
  scrContext_t *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  scrContext_t *v15; 
  __int64 v16; 
  int forwardTime; 

  if ( !sv_demo.forwardTime )
    return 0;
  if ( sv_demo.forwardTime - SV_Demo_GetEndTime() > 0 )
    sv_demo.forwardTime = SV_Demo_GetEndTime();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
  if ( sv_demo.forwardTime % FrameDuration )
  {
    forwardTime = sv_demo.forwardTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3877, ASSERT_TYPE_ASSERT, "( ( (sv_demo.forwardTime % frameDuration) == 0 ) )", "( sv_demo.forwardTime ) = %i", forwardTime) )
      __debugbreak();
  }
  SV_WaitServer();
  Com_CheckError();
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
  {
    LODWORD(v16) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3882, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v16) )
      __debugbreak();
  }
  Time = G_Main_GetTime();
  if ( sv_demo.forwardTime - Time > 0 )
  {
    v6 = DVARFLT_replay_speed;
    if ( !DVARFLT_replay_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "replay_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
    sv_demo.fastForward = 1;
    this->m_svResidualTime = 0;
    if ( sv_demo.forwardTime - Time > FrameDuration )
    {
      v8 = ScriptContext_Server();
      Scr_EnableBreakpoints(v8, 0);
    }
    v9 = sv_demo.forwardTime - G_Main_GetTime();
    if ( v9 > 0 )
    {
      v10 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
      v11 = *(_DWORD *)(v10 + 1052);
      *(_DWORD *)(v10 + 1052) = -4609;
      if ( !Sys_InterlockedCompareExchange(&this->m_svUpdateState, 1, 0) )
      {
        v12 = Sys_Milliseconds();
        if ( SvGameModeAppMP::UpdateServerTime(this, v12, v9) )
        {
          sv_demo.serverThreadStarted = 1;
          com_inServerFrame = 1;
          if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
            __debugbreak();
          this->m_allowNetPackets = 1;
          Sys_ThreadsMP_SetServerAllowNetworkEvent();
        }
        Sys_InterlockedExchange(&this->m_svUpdateState, 0);
      }
      *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = v11;
    }
    Com_Printf(15, "\n=== Replay moved forward %d msec from time %g. ===\n\n", (unsigned int)(this->m_svLevelTime - Time), (float)((float)Time * 0.001));
    v13 = G_Main_GetTime();
    v14 = sv_demo.forwardTime;
    if ( sv_demo.forwardTime - v13 <= 0 )
      v14 = 0;
    sv_demo.forwardTime = v14;
    v15 = ScriptContext_Server();
    Scr_EnableBreakpoints(v15, 1);
    Dvar_SetFloat_Internal(DVARFLT_replay_speed, value);
    return 1;
  }
  else
  {
    sv_demo.forwardTime = 0;
    return 0;
  }
}

/*
==============
SvGameModeAppMP::GetActiveServerApplicationMP
==============
*/
SvGameModeApplication *SvGameModeAppMP::GetActiveServerApplicationMP()
{
  if ( !BG_GameInterface_GameModeIsOnline((GameModeType)(unsigned __int8)SvGameModeApplication::ms_allocType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3252, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsOnline( ms_allocType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsOnline( ms_allocType )") )
    __debugbreak();
  return SvGameModeApplication::GetActiveServerApplication();
}

/*
==============
SvGameModeAppMP::GetServerThreadOwnsGame
==============
*/
_BOOL8 SvGameModeAppMP::GetServerThreadOwnsGame(SvGameModeAppMP *this)
{
  return this->m_svThreadOwnsGame;
}

/*
==============
SvGameModeAppMP::IncServerThreadOwnsGame
==============
*/
void SvGameModeAppMP::IncServerThreadOwnsGame(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3564, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( this->m_svThreadOwnsGame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3565, ASSERT_TYPE_ASSERT, "(!m_svThreadOwnsGame)", (const char *)&queryFormat, "!m_svThreadOwnsGame") )
    __debugbreak();
  this->m_svThreadOwnsGame = 1;
}

/*
==============
SvGameModeAppMP::MainThreadPreSyncErrorCleanup
==============
*/
void SvGameModeAppMP::MainThreadPreSyncErrorCleanup(SvGameModeAppMP *this)
{
  ;
}

/*
==============
MatchEnd_Party
==============
*/
char *MatchEnd_Party()
{
  unsigned int i; 
  SvClient *CommonClient; 
  netadr_t *Netadr; 
  __int128 v3; 
  PartyData *PartyData; 
  int FirstMemberAtAddr; 
  int ClientDeaths; 
  int ClientScore; 
  PartyData *v8; 
  char *v9; 
  PartyData *v10; 
  bool v11; 
  netadr_t v12; 
  netadr_t result; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4085, ASSERT_TYPE_ASSERT, "( !SvPersistentGlobalsMP::IsFrontEndServer() )", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( Lobby_IsInLobby() && Lobby_AreWeHost() )
  {
    if ( !SV_Game_IsOnlineGame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4089, ASSERT_TYPE_ASSERT, "(SV_Game_IsOnlineGame())", (const char *)&queryFormat, "SV_Game_IsOnlineGame()") )
      __debugbreak();
    SV_SnapWorkersMP_WaitSnapshotWorkers();
    for ( i = 0; (int)i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      if ( SvClient::GetCommonClient(i)->state == CS_ZOMBIE )
      {
        Com_Printf(15, "MatchEnd - Party - Removing ZOMBIE client at index %i. Potentially losing teamRank posting\n", i);
        CommonClient->state = CS_FREE;
        SV_Live_RemoveClient(i, "PLATFORM/DISCONNECTED_FROM_SERVER", 1, NET_CLOSE_DTLS);
      }
      else if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
      {
        Netadr = NetConnection::GetNetadr((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], &result);
        v3 = *(_OWORD *)&Netadr->type;
        LODWORD(Netadr) = Netadr->addrHandleIndex;
        *(_OWORD *)&v12.type = v3;
        v12.addrHandleIndex = (int)Netadr;
        PartyData = Lobby_GetPartyData();
        FirstMemberAtAddr = Party_FindFirstMemberAtAddr(PartyData, &v12);
        if ( FirstMemberAtAddr >= 0 )
        {
          ClientDeaths = G_MainMP_GetClientDeaths(i);
          ClientScore = G_MainMP_GetClientScore(i);
          v8 = Lobby_GetPartyData();
          PartyHost_SetRoundScores(v8, FirstMemberAtAddr, ClientScore, ClientDeaths);
        }
        else
        {
          Com_PrintError(15, "Unable to set last round results for client num: %i\n", i);
        }
      }
    }
  }
  if ( SV_MigrationLimitReached() )
  {
    v9 = "EXE/MIGRATIONLIMIT";
  }
  else
  {
    v10 = Lobby_GetPartyData();
    if ( !Party_IsStoppingAfterRound(v10) || (v11 = !SV_Game_IsOnlineGame(), v9 = "hostquit", v11) )
      v9 = "EXE/MATCHENDED";
  }
  qword_14E91B100 = v9;
  return v9;
}

/*
==============
SvGameModeAppMP::PacketEvent
==============
*/
void SvGameModeAppMP::PacketEvent(SvGameModeAppMP *this)
{
  ;
}

/*
==============
SvGameModeAppMP::PostServerSimulation
==============
*/
void SvGameModeAppMP::PostServerSimulation(SvGameModeAppMP *this, const int saveDvarFlags)
{
  ;
}

/*
==============
SvGameModeAppMP::PreServerSimulation
==============
*/
void SvGameModeAppMP::PreServerSimulation(SvGameModeAppMP *this, int *saveDvarFlags)
{
  if ( !saveDvarFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3684, ASSERT_TYPE_ASSERT, "( saveDvarFlags )", (const char *)&queryFormat, "saveDvarFlags") )
    __debugbreak();
}

/*
==============
SvGameModeAppMP::ResetServerTime
==============
*/
void SvGameModeAppMP::ResetServerTime(SvGameModeAppMP *this)
{
  if ( this->m_svUpdateState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3259, ASSERT_TYPE_ASSERT, "( m_svUpdateState == SERVER_UPDATE_IDLE )", (const char *)&queryFormat, "m_svUpdateState == SERVER_UPDATE_IDLE") )
    __debugbreak();
  *(_QWORD *)&this->m_svLevelTime = 0i64;
  *(_QWORD *)&this->m_svUpdateTime = 0i64;
}

/*
==============
SvGameModeAppMP::RunEventLoop
==============
*/
void SvGameModeAppMP::RunEventLoop(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2472, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  Sys_ThreadsMP_WaitAllowServerNetworkLoop();
  Sys_ThreadsMP_ResetServerNetworkCompletedEvent();
  if ( this->m_allowNetPackets )
  {
    Sys_ProfBeginNamedEvent(0x3030FFu, "SERVER: msg recv");
    SvGameModeAppMP::IncServerThreadOwnsGame(this);
    SV_MainMP_PacketEvent();
    SvGameModeAppMP::DecServerThreadOwnsGame(this);
    Sys_ProfEndNamedEvent();
  }
  Sys_ThreadsMP_SetServerNetworkCompletedEvent();
}

/*
==============
SvGameModeAppMP::RunFrame
==============
*/
void SvGameModeAppMP::RunFrame(SvGameModeAppMP *this, int msec)
{
  const char *v3; 
  SvGameModeApplication *ActiveServerApplication; 
  CLPauseReason v5; 
  scrContext_t *v6; 
  CLPauseReason PauseReason; 
  int v8; 
  volatile __int32 *p_m_svUpdateState; 
  int v10; 
  int updated; 
  __int64 v12; 

  SV_BandwidthProfile_ExportNetFieldConfig();
  if ( (_BYTE)qword_14E91B0F8 )
  {
    v3 = qword_14E91B100;
    if ( !qword_14E91B100 || !*qword_14E91B100 )
      v3 = "EXE/SERVERKILLED";
    LOBYTE(qword_14E91B0F8) = 0;
    qword_14E91B100 = NULL;
    if ( !SV_IsMigrating() || (SV_GetMigrationFlags() & 1) != 0 )
    {
      if ( g_sv_kickedForInactivity )
      {
        Com_SetErrorMessage("EXE/PLAYERKICKED_INACTIVE");
        g_sv_kickedForInactivity = 0;
      }
      Com_Shutdown(v3);
      Com_AssetLoadUI();
      Dvar_SetBool_Internal(DVARBOOL_online_is_devmapping, 0);
    }
    else
    {
      Com_SyncThreads();
      if ( SvGameModeApplication::HasActiveServerApplication() )
      {
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        ActiveServerApplication->AllowNetPackets(ActiveServerApplication, 0);
      }
      CL_Main_ShutdownAll(1, 1);
      FakeLag_Shutdown();
      SV_ServerShutdownCommon(v3);
      Com_Restart();
      CL_Main_ShutdownClientMemory();
      CL_Main_InitRenderer();
      CL_Main_StartHunkUsers();
    }
    return;
  }
  SvGameModeAppMP::ServerStart_CheckFinalizeRequest(this);
  if ( s_svMainMP_serverProcessControl.requestedState == 1 )
    return;
  if ( s_svMainMP_serverProcessControl.requestedState == 2 )
    return;
  if ( !Com_IsAnyLocalServerRunning() )
    return;
  SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest(this);
  if ( s_svMainMP_serverProcessControl.requestedState == 3 || s_svMainMP_serverProcessControl.requestedState == 4 || SV_CmdsMP_CheckLoadGame() || SvGameModeAppMP::ForwardFrame(this) )
    return;
  if ( SV_IsDemoPlaying() )
  {
    if ( SV_Demo_IsPaused() || SV_DemoMP_HasDemoEnded() )
    {
      if ( !SV_DemoMP_CanReadDemo() && !CL_Pause_IsGamePaused() )
      {
        PauseReason = CL_Pause_GetPauseReason();
        CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 2));
      }
      if ( sv_paused->current.integer != 1 )
        Dvar_SetInt_Internal(sv_paused, 1);
      goto LABEL_35;
    }
    if ( CL_Pause_IsGamePaused() )
    {
      v5 = CL_Pause_GetPauseReason();
      CL_Pause_SetPauseReason((CLPauseReason)(v5 & 0xFFFFFFFD));
    }
    if ( sv_paused->current.integer )
      Dvar_SetInt_Internal(sv_paused, 0);
  }
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    if ( allow_local_host_pause && allow_local_host_pause->current.integer )
    {
      if ( Dvar_GetInt_Internal(sv_paused) )
        Dvar_SetInt_Internal(sv_paused, 0);
      if ( Com_MP_GetShouldClientPause() && SV_IsServerPauseAllowed() )
      {
        Com_MP_SetShouldLocalServerPause(1);
LABEL_35:
        SV_WaitServer();
        NET_FlushRecvQueue();
        Com_CheckError();
        if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
          __debugbreak();
        if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 0, 1) )
        {
          LODWORD(v12) = g_serverThreadOwnership;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3314, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 0, 1 ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v12) )
            __debugbreak();
        }
        G_MainMP_PreDebuggerUpdate();
        v6 = ScriptContext_Server();
        Scr_UpdateDebugger(v6);
        G_MainMP_PostDebuggerUpdate();
        return;
      }
      Com_MP_SetShouldLocalServerPause(0);
    }
    else
    {
      Com_MP_SetShouldLocalServerPause(0);
      if ( CL_Pause_IsGamePaused() && SV_IsServerPauseAllowed() )
      {
        if ( Dvar_GetInt_Internal(sv_paused) )
          goto LABEL_55;
        v8 = 1;
      }
      else
      {
        if ( !Dvar_GetInt_Internal(sv_paused) )
          goto LABEL_55;
        v8 = 0;
      }
      Dvar_SetInt_Internal(sv_paused, v8);
    }
  }
LABEL_55:
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3795, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_m_svUpdateState = &this->m_svUpdateState;
  if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_svUpdateState) )
    __debugbreak();
  if ( !_InterlockedCompareExchange(p_m_svUpdateState, 1, 0) )
  {
    v10 = Sys_Milliseconds();
    updated = SvGameModeAppMP::UpdateServerDeltaTime(this, v10);
    if ( SvGameModeAppMP::UpdateServerTime(this, v10, updated) )
    {
      sv_demo.serverThreadStarted = 1;
      com_inServerFrame = 1;
      Sys_WakeServer();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      this->m_allowNetPackets = 1;
      Sys_ThreadsMP_SetServerAllowNetworkEvent();
    }
    if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_svUpdateState) )
      __debugbreak();
    _InterlockedExchange(p_m_svUpdateState, 0);
  }
}

/*
==============
SvGameModeAppMP::RunServerSimulation
==============
*/
void SvGameModeAppMP::RunServerSimulation(SvGameModeAppMP *this)
{
  ;
}

/*
==============
SvGameModeAppMP::RunSettleFrames
==============
*/
void SvGameModeAppMP::RunSettleFrames(SvGameModeAppMP *this)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v2 = 3i64;
  do
  {
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time != this->m_svLevelTime )
    {
      LODWORD(v4) = this->m_svLevelTime;
      LODWORD(v3) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3340, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() ) == ( m_svLevelTime )", "SvPersistentGlobalsMP::GetTime() == m_svLevelTime\n\t%i, %i", v3, v4) )
        __debugbreak();
    }
    if ( !this->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    this->m_svLevelTime += this->m_frameDuration;
    SV_MainMP_RunFrame();
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time != this->m_svLevelTime )
    {
      LODWORD(v4) = this->m_svLevelTime;
      LODWORD(v3) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3346, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() ) == ( m_svLevelTime )", "SvPersistentGlobalsMP::GetTime() == m_svLevelTime\n\t%i, %i", v3, v4) )
        __debugbreak();
    }
    --v2;
  }
  while ( v2 );
}

/*
==============
SV_CheckLiveConnectingClient
==============
*/
__int64 SV_CheckLiveConnectingClient(SvClientMP *cl, const int clientNum, const PartyData *party, const bool isDemoPlaying, const int connectdroppoint)
{
  int lastPacketTime; 
  bool IsMemberRegistered; 
  int time; 
  __int64 result; 
  int v13; 
  int v14; 
  int v15; 
  char *fmt; 
  __int64 v17; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1220, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1221, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1222, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( isDemoPlaying )
    return 0i64;
  lastPacketTime = cl->lastPacketTime;
  IsMemberRegistered = Party_IsMemberRegistered(party, clientNum);
  if ( !lastPacketTime )
  {
    if ( IsMemberRegistered )
    {
      SV_Live_AddConnectingClient(clientNum);
      time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
      cl->timeoutCount = 0;
      cl->silenceMask = 0;
      cl->lastPacketTime = time;
      cl->connectStartTime = Sys_Milliseconds();
      return 1i64;
    }
    return 0i64;
  }
  if ( !IsMemberRegistered )
  {
    Com_PrintWarning(14, "CS_FREE client %i cleared due to session not registered. This is a defensive test that should not happen, report this.\n", (unsigned int)clientNum);
    SV_Live_RemoveClient(clientNum, (const char *)&queryFormat.fmt + 3, 0, NET_CLOSE_SOFT);
    result = 0i64;
    cl->lastPacketTime = 0;
    cl->timeoutCount = 0;
    return result;
  }
  if ( cl->lastPacketTime < connectdroppoint )
  {
    if ( ++cl->timeoutCount > 5 )
    {
      v13 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_sv_connectTimeout, "sv_connectTimeout");
      v14 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time - cl->lastPacketTime;
      v15 = Sys_Milliseconds();
      LODWORD(v17) = v13;
      LODWORD(fmt) = v14;
      Com_Printf(131086, "CS_FREE client %i cleared due to lastPacketTime < connectdroppoint - no packets in %dms (real), %dms (server), %dms timeout\n", (unsigned int)clientNum, (unsigned int)(v15 - cl->connectStartTime), fmt, v17);
      SV_Live_RemoveClient(clientNum, (const char *)&queryFormat.fmt + 3, 0, NET_CLOSE_SOFT);
      cl->lastPacketTime = 0;
      cl->timeoutCount = 0;
    }
    return 0i64;
  }
  result = 0i64;
  cl->timeoutCount = 0;
  return result;
}

/*
==============
SV_DoISuckAsHost
==============
*/
char SV_DoISuckAsHost()
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  SvClient *CommonClient; 
  int v5; 
  float v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    return 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->time < PersistentGlobalsMP->badHostDetectionTime )
    return 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    while ( 1 )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v2);
      if ( SvClient::GetCommonClient(v2)->state != CS_ACTIVE || !LOBYTE(CommonClient[602].lastUsercmd.weapon.weaponIdx) || !NetConnection::IsRemote((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
        break;
      if ( SvClientMP::GetPlayerInfo(v2)->isHeadless )
        return 0;
      if ( SLODWORD(CommonClient[783].__vftable) < Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_badhost_maxHappyPingTime, "badhost_maxHappyPingTime") )
        goto LABEL_15;
      ++v1;
LABEL_16:
      if ( (int)++v2 >= (int)SvClient::ms_clientCount )
        goto LABEL_17;
    }
    if ( SvClient::GetCommonClient(v2)->state < CS_RECONNECTING || !NetConnection::IsRemote((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
      goto LABEL_16;
LABEL_15:
    ++v3;
    goto LABEL_16;
  }
LABEL_17:
  v5 = v3 + v1;
  if ( v3 + v1 )
    v6 = (float)(int)v1 / (float)v5;
  else
    v6 = 0.0;
  v7 = DCONST_DVARBOOL_badhost_debug;
  if ( !DCONST_DVARBOOL_badhost_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    Com_Printf(15, "Out of %i non-local clients, %i are lagged (%f%%)\n", (unsigned int)v5, v1, v6);
  v8 = DCONST_DVARINT_badhost_minTotalClientsForHappyTest;
  if ( !DCONST_DVARINT_badhost_minTotalClientsForHappyTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_minTotalClientsForHappyTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v5 < v8->current.integer )
    return 0;
  v9 = DCONST_DVARFLT_badhost_minPercentClientsUnhappyToSuck;
  if ( !DCONST_DVARFLT_badhost_minPercentClientsUnhappyToSuck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_minPercentClientsUnhappyToSuck") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v6 < v9->current.value )
    return 0;
  Com_Printf(15, "Out of %i non-local clients, %i are lagged (%f%%)\n", (unsigned int)v5, v1, v6);
  return 1;
}

/*
==============
SV_DoISuckSoMuchIShouldQuit
==============
*/
bool SV_DoISuckSoMuchIShouldQuit()
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v1; 
  int v2; 
  RecentFrameInfo *v3; 
  __int64 v4; 
  bool v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    return 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( PersistentGlobalsMP->time < PersistentGlobalsMP->badHostDetectionTime || SV_Game_IsPrivateMatch() )
    return 0;
  v1 = DCONST_DVARBOOL_badhost_endGameIfISuck;
  if ( !DCONST_DVARBOOL_badhost_endGameIfISuck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_endGameIfISuck") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  v2 = 0;
  v3 = &SvGameGlobalsMP::GetSvGameGlobalsMP()->recentFrameInfo[1];
  v4 = 80i64;
  do
  {
    v5 = !v3[-1].lagged;
    v6 = v2 + 1;
    v3 += 5;
    if ( v5 )
      v6 = v2;
    v7 = v6 + 1;
    if ( !v3[-5].lagged )
      v7 = v6;
    v8 = v7 + 1;
    if ( !v3[-4].lagged )
      v8 = v7;
    v9 = v8 + 1;
    if ( !v3[-3].lagged )
      v9 = v8;
    v2 = v9 + 1;
    if ( !v3[-2].lagged )
      v2 = v9;
    --v4;
  }
  while ( v4 );
  v10 = DCONST_DVARBOOL_badhost_debug;
  if ( !DCONST_DVARBOOL_badhost_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    goto LABEL_28;
  v11 = DVARINT_badhost_maxDoISuckFrames;
  if ( !DVARINT_badhost_maxDoISuckFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_maxDoISuckFrames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v2 > v11->current.integer )
LABEL_28:
    Com_Printf(15, "Bad host test: %i out of %i frames are lagged\n", (unsigned int)v2, 400i64);
  v12 = DVARINT_badhost_maxDoISuckFrames;
  if ( !DVARINT_badhost_maxDoISuckFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badhost_maxDoISuckFrames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  return v2 > v12->current.integer;
}

/*
==============
SV_IsFirstTokenEqual
==============
*/
bool SV_IsFirstTokenEqual(const char *str1, const char *str2)
{
  char v2; 
  char v3; 

  v2 = *str1;
  if ( *str1 )
  {
    while ( 1 )
    {
      v3 = *str2;
      if ( !*str2 || v2 == 32 || v3 == 32 )
        break;
      if ( v2 != v3 )
        return 0;
      v2 = *++str1;
      ++str2;
      if ( !v2 )
        return (*str2 & 0xDF) == 0;
    }
    if ( (*str1 & 0xDF) != 0 )
      return 0;
  }
  return (*str2 & 0xDF) == 0;
}

/*
==============
SV_IsServerPauseAllowed
==============
*/
bool SV_IsServerPauseAllowed()
{
  int v0; 
  signed int v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) || !G_MainMP_DoesGameStateAllowServerPause() )
    return 0;
  v0 = 0;
  v1 = 0;
  if ( (int)SvClient::ms_clientCount <= 0 )
    return 1;
  do
  {
    if ( SvClient::GetCommonClient(v1)->state >= CS_CONNECTED && !SV_BotIsBot(v1) && !SV_ClientMP_IsLocalClient(v1) )
      ++v0;
    ++v1;
  }
  while ( v1 < (int)SvClient::ms_clientCount );
  return !v0;
}

/*
==============
SV_MainMP_AddServerCommand
==============
*/
void SV_MainMP_AddServerCommand(SvClientMP *client, svscmd_type type, const char *cmd)
{
  __int64 v3; 

  v3 = -1i64;
  while ( cmd[++v3] != 0 )
    ;
  SV_MainMP_AddServerCommandInternal(client, type, (const unsigned __int8 *)cmd, v3 + 1, 1);
}

/*
==============
SV_MainMP_AddServerCommandInternal
==============
*/
void SV_MainMP_AddServerCommandInternal(SvClientMP *client, svscmd_type type, const unsigned __int8 *cmdData, const unsigned int cmdSize, const bool isString)
{
  unsigned int v5; 
  const unsigned __int8 *v6; 
  svscmd_type v7; 
  unsigned int MpClientIndex; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int CanReplaceServerCommand; 
  int i; 
  int reliableSequence; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int8 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char pszBuffer[1024]; 

  v5 = cmdSize;
  v6 = cmdData;
  v7 = type;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 550, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 551, ASSERT_TYPE_ASSERT, "( cmdData )", (const char *)&queryFormat, "cmdData") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 552, ASSERT_TYPE_ASSERT, "( cmdSize > 0 )", (const char *)&queryFormat, "cmdSize > 0") )
    __debugbreak();
  if ( client->reliableSequence < client->reliableSent )
  {
    LODWORD(v22) = client->reliableSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 553, ASSERT_TYPE_ASSERT, "( client->reliableSequence ) >= ( client->reliableSent )", "client->reliableSequence >= client->reliableSent\n\t%i, %i", v22, client->reliableSent) )
      __debugbreak();
  }
  if ( client->reliableSent < client->reliableAcknowledge )
  {
    LODWORD(v23) = client->reliableAcknowledge;
    LODWORD(v22) = client->reliableSent;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 554, ASSERT_TYPE_ASSERT, "( client->reliableSent ) >= ( client->reliableAcknowledge )", "client->reliableSent >= client->reliableAcknowledge\n\t%i, %i", v22, v23) )
      __debugbreak();
  }
  if ( !client->reliableOverflowed )
  {
    MpClientIndex = SV_Client_GetMpClientIndex(client);
    if ( !SV_BotIsBot(MpClientIndex) )
    {
      if ( client->reliableSequence - client->reliableAcknowledge >= 256 || SvClient::GetCommonClient(MpClientIndex)->state != CS_ACTIVE )
      {
        if ( v7 == SV_CMD_CAN_IGNORE )
          return;
        Sys_ProfBeginNamedEvent(0xFFFF0000, "SV_MainMP_CullIgnorableServerCommands");
        v10 = client->reliableSent + 1;
        v11 = v10;
        if ( v10 <= client->reliableSequence )
        {
          do
          {
            v12 = v11 & 0x1FF;
            v13 = v12;
            if ( client->netBuf.reliableCommands.m_entries[v12].type != 1 )
            {
              if ( v11 != v10 )
              {
                v14 = v10 & 0x1FF;
                if ( (_DWORD)v14 == (_DWORD)v12 )
                {
                  LODWORD(v25) = v11 & 0x1FF;
                  LODWORD(v24) = v10 & 0x1FF;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 178, ASSERT_TYPE_ASSERT, "( toentryIndex ) != ( fromentryIndex )", "%s != %s\n\t%i, %i", "toentryIndex", "fromentryIndex", v24, v25) )
                    __debugbreak();
                }
                client->netBuf.reliableCommands.m_entries[v14] = client->netBuf.reliableCommands.m_entries[v13];
              }
              ++v10;
            }
            ++v11;
          }
          while ( v11 <= client->reliableSequence );
          v5 = cmdSize;
          v6 = cmdData;
        }
        client->reliableSequence = v10 - 1;
        Sys_ProfEndNamedEvent();
        v7 = type;
      }
      CanReplaceServerCommand = SV_MainMP_CanReplaceServerCommand(client, v6, v5);
      if ( CanReplaceServerCommand < 0 )
      {
        reliableSequence = ++client->reliableSequence;
        if ( reliableSequence - client->reliableAcknowledge > 512 )
        {
LABEL_56:
          SV_MainMP_ServerCommandOverFlow(client, v6, v5);
          return;
        }
      }
      else
      {
        if ( CanReplaceServerCommand <= client->reliableSent )
        {
          LODWORD(v23) = client->reliableSent;
          LODWORD(v22) = CanReplaceServerCommand;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 589, ASSERT_TYPE_ASSERT, "( to ) > ( client->reliableSent )", "to > client->reliableSent\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        Sys_ProfBeginNamedEvent(0xFFFF0000, "SV_MainMP Replace Command");
        for ( i = CanReplaceServerCommand + 1; i <= client->reliableSequence; ++CanReplaceServerCommand )
          CircularEntryBuffer<512,131072,int,0>::Copy(&client->netBuf.reliableCommands, CanReplaceServerCommand & 0x1FF, i++ & 0x1FF);
        Sys_ProfEndNamedEvent();
        if ( client->reliableSequence - client->reliableAcknowledge > 512 )
        {
          LODWORD(v23) = 512;
          LODWORD(v22) = client->reliableSequence - client->reliableAcknowledge;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 605, ASSERT_TYPE_ASSERT, "( client->reliableSequence - client->reliableAcknowledge ) <= ( maxSvReliableCmds )", "client->reliableSequence - client->reliableAcknowledge <= maxSvReliableCmds\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        reliableSequence = client->reliableSequence;
      }
      if ( isString )
      {
        if ( v6[v5 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 621, ASSERT_TYPE_ASSERT, "( cmdData[cmdSize-1] == '\\0' )", (const char *)&queryFormat, "cmdData[cmdSize-1] == '\\0'") )
          __debugbreak();
        SV_MainMP_WriteReliableCommandStr(client, v7, (const char *)v6, v5);
      }
      else
      {
        v18 = reliableSequence & 0x1FF;
        v19 = MSG_WriteReliableCommandDataToBuffer(v6, v5, pszBuffer, 0x400u);
        v20 = v19;
        if ( v19 > v5 )
        {
          LODWORD(v23) = v5;
          LODWORD(v22) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( reliableCmdSize ) <= ( dataSize )", "reliableCmdSize <= dataSize\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        v21 = truncate_cast<unsigned char,enum svscmd_type>(v7);
        CircularEntryBuffer<512,131072,int,0>::SetDataAndType(&client->netBuf.reliableCommands, v18, (const unsigned __int8 *)pszBuffer, v20, v21);
      }
      if ( client->reliableSequence <= client->reliableSent )
      {
        LODWORD(v23) = client->reliableSent;
        LODWORD(v22) = client->reliableSequence;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 629, ASSERT_TYPE_ASSERT, "( client->reliableSequence ) > ( client->reliableSent )", "client->reliableSequence > client->reliableSent\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      if ( !CircularEntryBuffer<512,131072,int,0>::IsDataAvailable(&client->netBuf.reliableCommands, ((unsigned __int16)client->reliableAcknowledge + 1) & 0x1FF) )
        goto LABEL_56;
    }
  }
}

/*
==============
SV_MainMP_AddServerCommandMsg
==============
*/
void SV_MainMP_AddServerCommandMsg(SvClientMP *client, svscmd_type type, const msg_t *msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 657, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  SV_MainMP_AddServerCommandInternal(client, type, msg->data, msg->cursize, 0);
}

/*
==============
SV_MainMP_CanReplaceServerCommand
==============
*/
__int64 SV_MainMP_CanReplaceServerCommand(SvClientMP *client, const unsigned __int8 *cmd, const unsigned int cmdSize)
{
  int i; 
  __int64 v7; 
  unsigned __int8 type; 
  unsigned int size; 
  unsigned __int8 v10; 
  unsigned __int8 *v11; 
  bool v12; 
  __int64 v14; 
  unsigned __int8 *outBuf; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SV_MainMP CanReplaceServerCommand");
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 322, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd", -2i64) )
    __debugbreak();
  if ( !cmdSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 323, ASSERT_TYPE_ASSERT, "( cmdSize >= 1 )", (const char *)&queryFormat, "cmdSize >= 1") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 324, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->reliableOverflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( !client->reliableOverflowed )", (const char *)&queryFormat, "!client->reliableOverflowed") )
    __debugbreak();
  for ( i = client->reliableSent + 1; i <= client->reliableSequence; ++i )
  {
    v7 = i & 0x1FF;
    type = client->netBuf.reliableCommands.m_entries[v7].type;
    if ( type != 1 )
    {
      if ( type != 2 )
      {
        LODWORD(v14) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 338, ASSERT_TYPE_ASSERT, "( ( existingCmdType == SV_CMD_RELIABLE ) )", "( existingCmdType ) = %i", v14) )
          __debugbreak();
      }
      size = client->netBuf.reliableCommands.m_entries[v7].size;
      if ( CircularEntryBuffer<512,131072,int,0>::GetData(&client->netBuf.reliableCommands, i & 0x1FF, (const unsigned __int8 **)&outBuf) )
      {
        v10 = *cmd;
        v11 = outBuf;
        if ( *cmd == *outBuf )
        {
          if ( size == cmdSize && !memcmp_0(cmd, outBuf, size) || v10 == 97 )
            goto LABEL_40;
          switch ( v10 )
          {
            case 'd':
              if ( cmd[1] != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 380, ASSERT_TYPE_ASSERT, "(cmd[1] == ' ')", (const char *)&queryFormat, "cmd[1] == ' '") )
                __debugbreak();
              if ( SV_IsFirstTokenEqual((const char *)cmd + 2, (const char *)v11 + 2) )
              {
                v12 = atoi((const char *)cmd + 2) == 1;
                goto LABEL_37;
              }
              break;
            case 'l':
              goto LABEL_40;
            case 'q':
              if ( cmd[1] != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 368, ASSERT_TYPE_ASSERT, "(cmd[1] == ' ')", (const char *)&queryFormat, "cmd[1] == ' '") )
                __debugbreak();
              v12 = !SV_IsFirstTokenEqual((const char *)cmd + 2, (const char *)v11 + 2);
LABEL_37:
              if ( !v12 )
                goto LABEL_40;
              break;
            case 'w':
              goto LABEL_40;
          }
        }
      }
    }
  }
  i = -1;
LABEL_40:
  Sys_ProfEndNamedEvent();
  return (unsigned int)i;
}

/*
==============
SV_MainMP_CheckTimeouts
==============
*/
void SV_MainMP_CheckTimeouts(void)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v1; 
  int time; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  bool IsDemoPlaying; 
  unsigned int v9; 
  unsigned int v10; 
  SvClient *CommonClient; 
  SvClient *v12; 
  SvClientConnectionState state; 
  const dvar_t *v14; 
  LiveClientDropType ClientDropRequest; 
  __int64 MpClientIndex; 
  const char *v17; 
  const dvar_t *v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  float v23; 
  float v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  bool v28; 
  bool IsRecording; 
  int v30; 
  int v31; 
  PartyData *party; 
  int *v33; 
  int clientsAdded[200]; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v1 = DVARINT_sv_timeout;
    time = PersistentGlobalsMP->time;
    if ( !DVARINT_sv_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_timeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    v3 = 1000 * v1->current.integer;
    v4 = DVARINT_sv_connectTimeout;
    v31 = time - v3;
    if ( !DVARINT_sv_connectTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_connectTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = 1000 * v4->current.integer;
    v6 = DVARINT_sv_zombietime;
    v7 = time - v5;
    if ( !DVARINT_sv_zombietime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_zombietime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v30 = time - 1000 * v6->current.integer;
    IsDemoPlaying = SV_IsDemoPlaying();
    v28 = IsDemoPlaying;
    IsRecording = SV_Demo_IsRecording();
    v9 = 0;
    v10 = 0;
    party = Live_GetCurrentParty();
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v33 = clientsAdded;
      while ( 1 )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v10);
        v12 = CommonClient;
        if ( *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget > time )
          *(_DWORD *)&CommonClient[782].lastUsercmd.scriptedMeleeTarget = time;
        state = SvClient::GetCommonClient(v10)->state;
        if ( !LODWORD(v12[855].__vftable) && !NetConnection::IsBot((NetConnection *)&v12[642].lastUsercmd.sightedClientsMask.data[6]) )
          break;
        if ( state == CS_ZOMBIE )
          goto LABEL_27;
LABEL_74:
        if ( (int)++v10 >= (int)SvClient::ms_clientCount )
          goto LABEL_75;
      }
      if ( NetConnection::IsLoopback((NetConnection *)&v12[642].lastUsercmd.sightedClientsMask.data[6]) )
        goto LABEL_74;
      v14 = DVARBOOL_no_server_timeout;
      if ( !DVARBOOL_no_server_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "no_server_timeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled )
        goto LABEL_74;
LABEL_27:
      if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1180, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", (const char *)&queryFormat, "!SvPersistentGlobalsMP::IsFrontEndServer()") )
        __debugbreak();
      ClientDropRequest = SV_Live_GetClientDropRequest((const SvClientMP *)v12);
      if ( ClientDropRequest )
      {
        LODWORD(fmt) = ClientDropRequest;
        MpClientIndex = SV_Client_GetMpClientIndex((const SvClientMP *)v12);
        Com_Printf(131087, "SV - CheckLiveDropRequest - Processing client request from main thread to drop client %i %s due to %i\n", MpClientIndex, (const char *)&v12[854].lastUsercmd.sightedClientsMask.data[2], fmt);
        switch ( ClientDropRequest )
        {
          case SV_LIVE_DROP_DISCONNECT:
            v17 = (const char *)&stru_144009380;
            break;
          case SV_LIVE_DROP_RMSG_LOST:
            v17 = "EXE/LOSTRELIABLECOMMANDS";
            break;
          case SV_LIVE_DROP_INACTIVE:
            SV_ClientMP_DropIfInactive(MpClientIndex, *(const char **)v12[854].lastUsercmd.sightedClientsMask.data, 0);
            SV_Live_ClearDropFlagClient((SvClientMP *)v12);
            goto LABEL_73;
          default:
            LODWORD(v27) = MpClientIndex;
            LODWORD(v26) = ClientDropRequest;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1210, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled drop request type %i for client %i", v26, v27) )
            {
              __debugbreak();
              SV_Live_ClearDropFlagClient((SvClientMP *)v12);
LABEL_73:
              IsDemoPlaying = v28;
              goto LABEL_74;
            }
LABEL_40:
            SV_Live_ClearDropFlagClient((SvClientMP *)v12);
            goto LABEL_73;
        }
        SV_ClientMP_DropIndex(MpClientIndex, v17, 1);
        goto LABEL_40;
      }
      if ( state == CS_ZOMBIE )
      {
        v18 = DVARINT_sv_zombietime;
        if ( !DVARINT_sv_zombietime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_zombietime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        v19 = *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget;
        *(float *)&v12[1115].lastUsercmd.upmove = (float)(0.001 / (float)v18->current.integer) * (float)(time - v19);
        if ( v19 < v30 )
        {
          Com_DPrintf(15, "Going from CS_ZOMBIE to CS_FREE for client #%i\n", v10);
          v12->state = CS_FREE;
          *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget = 0;
          IsDemoPlaying = v28;
          if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT && !v28 )
          {
            v20 = SV_Client_GetMpClientIndex((const SvClientMP *)v12);
            if ( Party_IsHost(party, v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1445, ASSERT_TYPE_ASSERT, "(isDemoPlaying || !Party_IsHost( party, SV_Client_GetMpClientIndex( cl ) ))", (const char *)&queryFormat, "isDemoPlaying || !Party_IsHost( party, SV_Client_GetMpClientIndex( cl ) )") )
              __debugbreak();
          }
          SV_Live_RemoveClient(v10, "PLATFORM/DISCONNECTED_FROM_SERVER", 1, NET_CLOSE_DTLS);
          goto LABEL_74;
        }
        goto LABEL_72;
      }
      if ( state == CS_ACTIVE )
      {
        v21 = DVARINT_sv_timeout;
        if ( !DVARINT_sv_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_timeout") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        v22 = *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget;
        *(float *)&v12[1115].lastUsercmd.upmove = (float)(0.001 / (float)v21->current.integer) * (float)(time - v22);
        if ( v22 < v31 )
          goto LABEL_57;
      }
      else
      {
        if ( (unsigned __int8)state <= CS_ZOMBIE )
        {
          if ( *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget && Party_IsMemberRegistered(party, v10) )
          {
            v24 = (float)(time - *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget);
            *(float *)&v12[1115].lastUsercmd.upmove = (float)(0.001 / (float)Dvar_GetInt_Internal_DebugName(DVARINT_sv_connectTimeout, "sv_connectTimeout")) * v24;
          }
          IsDemoPlaying = v28;
          if ( (unsigned int)SV_CheckLiveConnectingClient((SvClientMP *)v12, v10, party, v28, v7) && IsRecording )
          {
            if ( v9 >= 0xC8 )
            {
              LODWORD(v27) = 200;
              LODWORD(v26) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1476, ASSERT_TYPE_ASSERT, "(unsigned)( clientsAddedCount ) < (unsigned)( ( sizeof( *array_counter( clientsAdded ) ) + 0 ) )", "clientsAddedCount doesn't index ARRAY_COUNT( clientsAdded )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            ++v9;
            *v33++ = v10;
          }
          goto LABEL_74;
        }
        v23 = (float)(time - *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget);
        *(float *)&v12[1115].lastUsercmd.upmove = (float)(0.001 / (float)Dvar_GetInt_Internal_DebugName(DVARINT_sv_connectTimeout, "sv_connectTimeout")) * v23;
      }
      if ( *(_DWORD *)&v12[782].lastUsercmd.scriptedMeleeTarget >= v7 )
      {
LABEL_72:
        HIDWORD(v12[782].gentity) = 0;
        goto LABEL_73;
      }
LABEL_57:
      if ( (int)++HIDWORD(v12[782].gentity) > 20 )
        SV_ClientMP_DropClient((SvClientMP *)v12, "EXE/TIMEDOUT", 1);
      goto LABEL_73;
    }
LABEL_75:
    SV_MaintMP_ProcessDemoConnectingClients(clientsAdded, v9, IsDemoPlaying, IsRecording);
  }
}

/*
==============
SV_MainMP_ConnectionlessPacket
==============
*/
void SV_MainMP_ConnectionlessPacket(netadr_t *from, msg_t *msg)
{
  __int128 v2; 
  const char *StringLine; 
  const char *v5; 
  const char *v6; 
  netadr_t v7; 
  netadr_t net_from; 
  char string[1024]; 

  v2 = *(_OWORD *)&from->type;
  net_from.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&net_from.type = v2;
  MSG_BeginReading(msg);
  MSG_ReadLong(msg);
  SV_Netchan_AddOOBProfilePacket(msg->cursize);
  StringLine = MSG_ReadStringLine(msg, string, 0x400u);
  SV_Cmd_TokenizeString(StringLine);
  v5 = SV_Cmd_Argv(0);
  if ( I_stricmp(v5, "getchallenge") )
  {
    if ( I_stricmp(v5, "connect") )
    {
      if ( I_stricmp(v5, "stats") )
      {
        if ( I_stricmp(v5, "mrules") )
        {
          if ( I_stricmp(v5, "strt_cmd") )
          {
            if ( I_stricmp(v5, "disconnect") )
            {
              if ( I_stricmp(v5, "ihear") )
              {
                v7 = net_from;
                if ( I_stricmp(v5, "icanthear") )
                {
                  if ( !SV_MigrationPacket(v5, &v7, msg) )
                  {
                    if ( Com_IsGameLocalServerRunning() )
                    {
                      NET_DeferPacketToClient(&net_from, msg);
                    }
                    else
                    {
                      v7 = net_from;
                      v6 = NET_AdrToString(&v7);
                      Com_PrintWarning(15, "Not deferring packet from %s - no local game server running\n", v6);
                    }
                  }
                }
                else
                {
                  SV_ClientMP_ICantHear(&v7, msg);
                }
              }
              else
              {
                v7 = net_from;
                SV_ClientMP_IHear(&v7, msg);
              }
            }
          }
          else
          {
            v7 = net_from;
            SV_ClientMP_ReceiveStartingCmd(&v7, msg);
          }
        }
        else
        {
          v7 = net_from;
          SV_SendGameStateInfoMessage(&v7, msg);
        }
      }
      else
      {
        v7 = net_from;
        SV_ClientMP_ReceiveStats(&v7, msg);
      }
    }
    else
    {
      v7 = net_from;
      SV_ClientMP_DirectConnect(&v7);
    }
  }
  else
  {
    v7 = net_from;
    SV_ClientMP_GetChallenge(&v7);
  }
  SV_Cmd_EndTokenizedString();
}

/*
==============
SV_MainMP_FlushServerLoopbackPackets
==============
*/
void SV_MainMP_FlushServerLoopbackPackets(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2290, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2293, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
    __debugbreak();
  NET_FlushLoopback(NS_MAXCLIENTS);
}

/*
==============
SV_MainMP_GetDebugEntityCounts
==============
*/
void SV_MainMP_GetDebugEntityCounts(unsigned int *outHighestClientVisibleCount, unsigned int *outTotalCount, unsigned int *outMaxPerSnapshotCount, unsigned int *outMaxPerClientCount)
{
  if ( !outHighestClientVisibleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1673, ASSERT_TYPE_ASSERT, "(outHighestClientVisibleCount)", (const char *)&queryFormat, "outHighestClientVisibleCount") )
    __debugbreak();
  if ( !outTotalCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1674, ASSERT_TYPE_ASSERT, "(outTotalCount)", (const char *)&queryFormat, "outTotalCount") )
    __debugbreak();
  if ( !outMaxPerSnapshotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1675, ASSERT_TYPE_ASSERT, "(outMaxPerSnapshotCount)", (const char *)&queryFormat, "outMaxPerSnapshotCount") )
    __debugbreak();
  if ( !outMaxPerClientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1676, ASSERT_TYPE_ASSERT, "(outMaxPerClientCount)", (const char *)&queryFormat, "outMaxPerClientCount") )
    __debugbreak();
  *outHighestClientVisibleCount = s_debugHighestClientVisibleEntityCount;
  *outTotalCount = s_debugTotalEntityCount;
  SV_SnapshotMP_GetEntityCountLimits(outMaxPerSnapshotCount, outMaxPerClientCount);
}

/*
==============
SV_MainMP_GetDeterministicSystemTime
==============
*/
int SV_MainMP_GetDeterministicSystemTime()
{
  int v0; 

  v0 = Sys_Milliseconds();
  if ( SV_IsDemoPlaying() )
    return SV_Demo_GetInt();
  if ( SV_Demo_IsRecording() )
    SV_Record_GetInt(v0);
  return v0;
}

/*
==============
SV_MainMP_GetDvarInfoString
==============
*/
char *SV_MainMP_GetDvarInfoString(int dvarType)
{
  int userData; 

  userData = dvarType;
  s_svDvarInfoString[0] = 0;
  Dvar_ForEach(SV_MainMP_GetDvarInfoString_Single, &userData);
  return s_svDvarInfoString;
}

/*
==============
SV_MainMP_GetDvarInfoString_Single
==============
*/
void SV_MainMP_GetDvarInfoString_Single(const dvar_t *dvar, void *userData)
{
  const char *v3; 
  char dest[16]; 

  if ( (dvar->flags & *(_DWORD *)userData) != 0 )
  {
    Dvar_GenerateChecksumStringFromChecksum(dest, 12, dvar->checksum);
    v3 = Dvar_DisplayableValue(dvar);
    Info_SetValueForKey_Big(s_svDvarInfoString, dest, v3);
  }
}

/*
==============
SV_MainMP_GetServerLobby
==============
*/
PartyData *SV_MainMP_GetServerLobby()
{
  bool IsSystemLink; 
  const SessionData *v1; 
  PartyData *result; 
  PartyData *v3; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4233, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tShould not access the session for the front-end server", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  if ( SV_IsDemoPlaying() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4235, ASSERT_TYPE_ASSERT, "(!SV_IsDemoPlaying())", "%s\n\tUsing session data would lead to inconsistent results if a demo was playing", "!SV_IsDemoPlaying()") )
    __debugbreak();
  IsSystemLink = SV_Game_IsSystemLink();
  v1 = &g_partySession;
  if ( !IsSystemLink )
    v1 = &g_serverSession;
  result = Party_GetPartyForSession(v1);
  v3 = result;
  if ( (!result->areWeHost || !result->inParty) && result->inParty )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4251, ASSERT_TYPE_ASSERT, "((lobby->areWeHost && lobby->inParty) || !lobby->inParty)", "%s\n\tWe should be host of current server lobby", "(lobby->areWeHost && lobby->inParty) || !lobby->inParty") )
      __debugbreak();
    return v3;
  }
  return result;
}

/*
==============
SV_MainMP_GetServerSession
==============
*/
SessionData *SV_MainMP_GetServerSession()
{
  bool v0; 
  SessionData *result; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4233, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tShould not access the session for the front-end server", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  if ( SV_IsDemoPlaying() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4235, ASSERT_TYPE_ASSERT, "(!SV_IsDemoPlaying())", "%s\n\tUsing session data would lead to inconsistent results if a demo was playing", "!SV_IsDemoPlaying()") )
    __debugbreak();
  v0 = !SV_Game_IsSystemLink();
  result = &g_partySession;
  if ( v0 )
    return &g_serverSession;
  return result;
}

/*
==============
SV_MainMP_InitServerEvents
==============
*/
void SV_MainMP_InitServerEvents(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3602, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3605, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
    __debugbreak();
  Sys_InitServerEvents();
}

/*
==============
SV_MainMP_InitSnapshot
==============
*/
void SV_MainMP_InitSnapshot(void)
{
  SV_SnapshotMP_InitRuntime();
  SV_MsgMP_InitAnimClassData();
}

/*
==============
SV_MainMP_IsAsyncServerRestarting
==============
*/
bool SV_MainMP_IsAsyncServerRestarting()
{
  return s_svMainMP_serverProcessControl.requestedState == 3 || s_svMainMP_serverProcessControl.requestedState == 4;
}

/*
==============
SV_MainMP_IsAsyncServerStarting
==============
*/
bool SV_MainMP_IsAsyncServerStarting()
{
  return s_svMainMP_serverProcessControl.requestedState == 1 || s_svMainMP_serverProcessControl.requestedState == 2;
}

/*
==============
SV_MainMP_IsDevToolsMode
==============
*/
bool SV_MainMP_IsDevToolsMode()
{
  _BYTE *integer64; 

  if ( !createfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4262, ASSERT_TYPE_ASSERT, "( createfx )", (const char *)&queryFormat, "createfx") )
    __debugbreak();
  integer64 = (_BYTE *)createfx->current.integer64;
  return integer64 && *integer64;
}

/*
==============
SV_MainMP_IsMatchResumable
==============
*/
bool SV_MainMP_IsMatchResumable(const char *killReason)
{
  return !I_strcmp(killReason, "EXE/MATCHENDED") || !I_strcmp(killReason, "hostquit");
}

/*
==============
SV_MainMP_KillLocalServer
==============
*/
void SV_MainMP_KillLocalServer(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3614, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (s_svMainMP_serverProcessControl.requestedState == 1 || s_svMainMP_serverProcessControl.requestedState == 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3615, ASSERT_TYPE_ASSERT, "(!SV_MainMP_IsAsyncServerStarting())", (const char *)&queryFormat, "!SV_MainMP_IsAsyncServerStarting()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStartingAsync() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3616, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStartingAsync())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStartingAsync()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( !SvGameModeApplication::HasActiveServerApplication() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3620, ASSERT_TYPE_ASSERT, "(SvGameModeApplication::HasActiveServerApplication())", (const char *)&queryFormat, "SvGameModeApplication::HasActiveServerApplication()") )
      __debugbreak();
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    LOBYTE(qword_14E91B0F8) = 1;
    ActiveServerApplication->RunFrame(ActiveServerApplication, 0);
  }
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3631, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( SV_Init_IsMemoryAllocated() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3632, ASSERT_TYPE_ASSERT, "(!SV_Init_IsMemoryAllocated())", (const char *)&queryFormat, "!SV_Init_IsMemoryAllocated()") )
    __debugbreak();
}

/*
==============
SV_MainMP_MatchEnd
==============
*/
void SV_MainMP_MatchEnd(void)
{
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] || SV_IsDemoPlaying() )
  {
    LOBYTE(qword_14E91B0F8) = 1;
    qword_14E91B100 = "EXE/MATCHENDED";
  }
  else
  {
    MatchEnd_Party();
    LOBYTE(qword_14E91B0F8) = 1;
  }
}

/*
==============
SV_MainMP_PacketEvent
==============
*/
void SV_MainMP_PacketEvent()
{
  unsigned __int8 *m_ptr; 
  bool v1; 
  BOOL i; 
  int ServerPacket; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int time; 
  int loopbackProcessStopTime; 
  netadr_t v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  Mem_LargeLocal v11; 
  msg_t buf; 
  netadr_t net_from; 
  NetPingInfo v14; 
  NetPingInfo net_info; 

  v8 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v11, 0x243D8ui64, "msg_buf_t serverCommonMsgBuf");
  m_ptr = (unsigned __int8 *)v11.m_ptr;
  if ( !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext() )
  {
    Profile_Begin(15);
    MSG_Init(&buf, m_ptr, 148440);
    v1 = Com_IsAnyLocalServerRunning() && !Com_IsAnyLocalServerStarting();
    Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_UserMoveWorkersMP_FinishClientThinkCmds PacketEvent");
    SV_UserMoveWorkersMP_FinishClientThinkCmds();
    Sys_ProfEndNamedEvent();
    v9 = 2;
    v10 = 0i64;
    SV_Profile_BeginEvent(SVPROF_PACKET_EVENT);
    SV_DemoMP_RecordProcessUsermoveOutput();
    GStatic::SetActiveStatics();
    G_MainMP_ProcessUserMoveOutput();
    GStatic::ClearActiveStatics();
    if ( !v1 )
      goto LABEL_29;
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      i = 1;
    }
    else
    {
      for ( i = SV_ClientMP_ShouldDoBlockTest() == 0; ; i = 1 )
      {
        *(_DWORD *)&v14.initialized = 1;
        v14.netTicks = 0i64;
        SV_Profile_BeginEvent(SVPROF_PACKET_READ);
        ServerPacket = NET_GetServerPacket(&net_from, &buf, &net_info);
        SV_Profile_EndEvent(SVPROF_PACKET_READ);
        if ( !ServerPacket )
          break;
        v7 = net_from;
        SV_MainMP_PacketEventInternal(&v7, &buf, &net_info);
      }
    }
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    time = PersistentGlobalsMP->time;
    if ( i )
    {
      loopbackProcessStopTime = time + 200;
      if ( PersistentGlobalsMP->loopbackProcessStopTime > time + 200 )
        loopbackProcessStopTime = PersistentGlobalsMP->loopbackProcessStopTime;
      PersistentGlobalsMP->loopbackProcessStopTime = loopbackProcessStopTime;
    }
    else
    {
      loopbackProcessStopTime = PersistentGlobalsMP->loopbackProcessStopTime;
    }
    if ( time <= loopbackProcessStopTime )
    {
LABEL_29:
      while ( NET_GetLoopPacket(NS_MAXCLIENTS, &net_from, &buf, &v14) )
      {
        if ( v1 )
        {
          v7 = net_from;
          SV_MainMP_PacketEventInternal(&v7, &buf, &v14);
        }
      }
    }
    if ( v1 )
      SV_ClientMP_ProcessClientThinks();
    Profile_EndInternal(NULL);
    SV_Profile_EndEvent(SVPROF_PACKET_EVENT);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v11);
}

/*
==============
SV_MainMP_PacketEventInternal
==============
*/
void SV_MainMP_PacketEventInternal(netadr_t *from, msg_t *msg, NetPingInfo *info)
{
  int addrHandleIndex; 
  __int128 v7; 
  __int128 v8; 
  SvClientMP *ClientAtAddress; 
  SvClientMP *v10; 
  int v11; 
  const char *v12; 
  unsigned int m_unprocessedCentroidBufferIndex; 
  __int64 v20; 
  netadr_t v21; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 980, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v21.type = *(_OWORD *)&from->type;
    v21.addrHandleIndex = addrHandleIndex;
    if ( !NET_IsLocalAddress(&v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 981, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer() || NET_IsLocalAddress( from ))", "%s\n\tReceived packet from non-localhost while in front end mode", "!SvPersistentGlobalsMP::IsFrontEndServer() || NET_IsLocalAddress( from )") )
      __debugbreak();
  }
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 986, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  v7 = *(_OWORD *)&from->type;
  v21.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v21.type = v7;
  SV_DemoMP_RecordPacketEvent(&v21, msg, info);
  if ( msg->cursize >= 4 && *(_DWORD *)msg->data == -1 || (from->flags & 1) != 0 )
  {
    v8 = *(_OWORD *)&from->type;
    v21.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v21.type = v8;
    SV_MainMP_ConnectionlessPacket(&v21, msg);
    return;
  }
  SV_Game_ResetSkeletonCache();
  ClientAtAddress = SvClientMP::FindClientAtAddress(from);
  v10 = ClientAtAddress;
  if ( !ClientAtAddress )
  {
    v11 = from->addrHandleIndex;
    *(_OWORD *)&v21.type = *(_OWORD *)&from->type;
    v21.addrHandleIndex = v11;
    v12 = NET_AdrToString(&v21);
    Com_Printf(131087, "Received packet from unidentified client at %s\n", v12);
    return;
  }
  if ( Netchan_Process(&ClientAtAddress->netchan, msg) )
    SV_ClientMP_PacketEvent(v10, msg, info);
  _XMM6 = 0i64;
  __asm { vcvtsi2sd xmm6, xmm6, eax }
  m_unprocessedCentroidBufferIndex = v10->packetBackupDigest.m_unprocessedCentroidBufferIndex;
  if ( m_unprocessedCentroidBufferIndex < 0x8C )
    goto LABEL_22;
  if ( !v10->packetBackupDigest.m_disableAutoMerge )
  {
    DLogTDigest<20,8>::ProcessBufferedCentroids(&v10->packetBackupDigest);
    m_unprocessedCentroidBufferIndex = v10->packetBackupDigest.m_unprocessedCentroidBufferIndex;
LABEL_22:
    _XMM0 = *(unsigned __int64 *)&v10->packetBackupDigest.m_min;
    __asm { vminsd  xmm1, xmm0, xmm6 }
    v10->packetBackupDigest.m_min = *(double *)&_XMM1;
    _XMM0 = *(unsigned __int64 *)&v10->packetBackupDigest.m_max;
    __asm { vmaxsd  xmm1, xmm0, xmm6 }
    v10->packetBackupDigest.m_max = *(double *)&_XMM1;
    v20 = 2 * ((int)m_unprocessedCentroidBufferIndex + 23i64);
    *((double *)&v10->packetBackupDigest.m_min + v20) = *(double *)&_XMM6;
    *((_QWORD *)&v10->packetBackupDigest.m_max + v20) = 0x3FF0000000000000i64;
    *(long double *)&_XMM0 = v10->packetBackupDigest.m_unprocessedWeightTotal;
    ++v10->packetBackupDigest.m_unprocessedCentroidBufferIndex;
    v10->packetBackupDigest.m_unprocessedWeightTotal = *(double *)&_XMM0 + 1.0;
    return;
  }
  DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
}

/*
==============
SV_MainMP_PostFrame
==============
*/
void SV_MainMP_PostFrame()
{
  scrContext_t *v0; 
  __int64 v1; 
  __int64 v2; 
  unsigned int *v3; 
  unsigned int v4; 
  int userData; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  ServerTimingState outTimingState; 

  v6 = -2i64;
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1691, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() || !UseServerSmp() )", (const char *)&queryFormat, "Sys_IsServerThread() || !UseServerSmp()") )
    __debugbreak();
  v7 = 5;
  v8 = 0i64;
  SV_Profile_BeginEvent(SVPROF_POST_FRAME);
  G_MainMP_PreDebuggerUpdate();
  v0 = ScriptContext_Server();
  Scr_UpdateDebugger(v0);
  G_MainMP_PostDebuggerUpdate();
  v1 = tls_index;
  if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1714, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 10))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_SERVERINFO") )
    __debugbreak();
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
  if ( (*(_DWORD *)(v2 + 1048) & 0x400) != 0 )
  {
    userData = 1024;
    s_svDvarInfoString[0] = 0;
    Dvar_ForEach(SV_MainMP_GetDvarInfoString_Single, &userData);
    SV_SetConfigstring(0x210u, s_svDvarInfoString);
    v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1);
    *(_DWORD *)(v2 + 1048) &= ~0x400u;
  }
  if ( (*(_DWORD *)(v2 + 1052) & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1722, ASSERT_TYPE_ASSERT, "(!(dvar_allowedModifiedFlags & (1 << 12)))", (const char *)&queryFormat, "!(dvar_allowedModifiedFlags & DVAR_SYSTEMINFO)") )
    __debugbreak();
  if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1048i64) & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1723, ASSERT_TYPE_ASSERT, "(!(dvar_modifiedFlags & (1 << 12)))", (const char *)&queryFormat, "!(dvar_modifiedFlags & DVAR_SYSTEMINFO)") )
    __debugbreak();
  if ( (*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1052i64) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1725, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 3))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_CODINFO") )
    __debugbreak();
  v3 = (unsigned int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1048i64);
  v4 = *v3;
  if ( (*v3 & 8) != 0 )
  {
    NetConstStrings_ForEachCodInfoDvar(SV_MainMP_SetCodInfoDvarValues_Callback);
    v3 = (unsigned int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1048i64);
    v4 = *v3 & 0xFFFFFFF7;
  }
  *v3 = v4 & 0xFFFFFF7F;
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && g_partyData.inParty && g_partyData.backingOut )
  {
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1646, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( !SV_IsMigrating() )
    {
      if ( !Lobby_GetPartyData()->stopAfterRound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1649, ASSERT_TYPE_ASSERT, "(Lobby_GetPartyData()->stopAfterRound)", "%s\n\tClient should set this as a sentinel value when we want to backout", "Lobby_GetPartyData()->stopAfterRound") )
        __debugbreak();
      Com_Printf(15, "SV - Backout - Request detected, ending game, migrating.\n");
      Cbuf_AddText(LOCAL_CLIENT_0, "hostmigration_start_backout\n");
    }
  }
  SV_MigrationFrame();
  SV_GameMP_UpdateCommandDuration();
  SV_Timing_Start(&outTimingState);
  SV_SnapshotMP_SendClientMessages();
  SV_ClientMP_PostFrame();
  SV_Timing_End(&outTimingState);
  SV_Timing_UpdateClientMessages(&outTimingState);
  s_debugVisibleEntityCount = SV_SnapshotMP_GetEntityClientsCanSeeCount(&s_debugHighestClientVisibleEntityCount);
  s_debugTotalEntityCount = G_Utils_GetActiveEntityCount();
  SV_Profile_EndEvent(SVPROF_POST_FRAME);
}

/*
==============
SV_MainMP_PreFrame
==============
*/
void SV_MainMP_PreFrame()
{
  SvGameGlobals *SvGameGlobalsCommon; 
  const char *v1; 
  int time; 
  int v3; 

  SV_Profile_BeginEvent(SVPROF_PRE_FRAME);
  SV_Profile_BeginEvent(SVPROF_FINISH_THINK);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_FINISH_THINK");
  SV_UserMoveWorkersMP_FinishClientThinkCmds();
  SV_Profile_EndEvent(SVPROF_FINISH_THINK);
  Sys_ProfEndNamedEvent();
  SV_Profile_BeginEvent(SVPROF_MOVE_OUTPUT);
  GStatic::SetActiveStatics();
  G_MainMP_ProcessUserMoveOutput();
  GStatic::ClearActiveStatics();
  SV_Profile_EndEvent(SVPROF_MOVE_OUTPUT);
  SV_Profile_BeginEvent(SVPROF_INPUT_THROTTLE);
  SV_ClientMP_UpdateClientBuffering();
  SV_Profile_EndEvent(SVPROF_INPUT_THROTTLE);
  SV_ClientMP_StartExtrapolationWorkers();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v3 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v3) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  *((_BYTE *)&SvGameGlobalsCommon[2].profile.vmBuiltinTimeMin + SvGameGlobalsCommon[4].num_entities) = SV_DoISuckAsHost();
  SvGameGlobalsCommon[4].num_entities = (SvGameGlobalsCommon[4].num_entities + 1) % 400;
  if ( SV_DoISuckSoMuchIShouldQuit() && Online_GetShouldWeHostValue() )
  {
    Com_PrintWarning(25, "We suck as host - ending the game\n");
    Online_SetShouldWeHost(0);
    Live_TrackSuckedAsHost();
    v1 = j_va("hostmigration_start %i\n", 0i64);
    Cbuf_AddText(LOCAL_CLIENT_0, v1);
  }
  time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  if ( time >= SvGameModeApplication::GetActiveServerApplication()->m_svLevelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2134, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() < SvGameModeApplication::GetLevelTime() )", (const char *)&queryFormat, "SvPersistentGlobalsMP::GetTime() < SvGameModeApplication::GetLevelTime()") )
    __debugbreak();
  SV_Profile_BeginEvent(SVPROF_FINISH_EXTRAP);
  SV_ClientMP_FinishExtrapolationWorkers();
  SV_Profile_EndEvent(SVPROF_FINISH_EXTRAP);
  GStatic::SetActiveStatics();
  SV_Profile_BeginEvent(SVPROF_PREGAME);
  G_MainMP_PreFrame();
  SV_Profile_EndEvent(SVPROF_PREGAME);
  GStatic::ClearActiveStatics();
  SV_Profile_EndEvent(SVPROF_PRE_FRAME);
}

/*
==============
SV_MainMP_ProcessUserMoveOutput
==============
*/
void SV_MainMP_ProcessUserMoveOutput(bool recordDemo)
{
  if ( recordDemo )
    SV_DemoMP_RecordProcessUsermoveOutput();
  GStatic::SetActiveStatics();
  G_MainMP_ProcessUserMoveOutput();
  GStatic::ClearActiveStatics();
}

/*
==============
SV_MainMP_RestartServerAsync
==============
*/
void SV_MainMP_RestartServerAsync(const SvServerInitSettings *r_initSettings)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2799, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_svMainMP_serverProcessControl.requestedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2801, ASSERT_TYPE_ASSERT, "(s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE ))", "%s\n\tExisting requested state active, can't start a new one", "s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE )") )
    __debugbreak();
  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2802, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  s_svMainMP_serverProcessControl.startTime = Sys_Milliseconds();
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.mapName = *(_OWORD *)r_initSettings->mapName;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[16] = *(_OWORD *)&r_initSettings->mapName[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[32] = *(_OWORD *)&r_initSettings->mapName[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[48] = *(_OWORD *)&r_initSettings->mapName[48];
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.gameType = *(_OWORD *)r_initSettings->gameType;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[16] = *(_OWORD *)&r_initSettings->gameType[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[32] = *(_OWORD *)&r_initSettings->gameType[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[48] = *(_OWORD *)&r_initSettings->gameType[48];
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.serverHostName = *(_OWORD *)r_initSettings->serverHostName;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[16] = *(_OWORD *)&r_initSettings->serverHostName[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[32] = *(_OWORD *)&r_initSettings->serverHostName[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[48] = *(_OWORD *)&r_initSettings->serverHostName[48];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.hardcoreMode = *(_OWORD *)&r_initSettings->hardcoreMode;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.weaponMapLargeRuntimeSize = *(_OWORD *)&r_initSettings->weaponMapLargeRuntimeSize;
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2810, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED ) ) == static_cast<int>( ServerAsyncStartState::IDLE ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED ) ) == static_cast<int>( ServerAsyncStartState::IDLE )") )
    __debugbreak();
  com_inServerFrame = 1;
  Sys_WakeServer();
}

/*
==============
SV_MainMP_RunFrame
==============
*/
void SV_MainMP_RunFrame()
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  signed int v1; 
  SvClient *CommonClient; 
  SvGameModeApplication *ActiveServerApplication; 
  scrContext_t *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 event; 

  v6 = -2i64;
  Profile2_UpdateEntry(3);
  if ( ((unsigned __int8)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE7FDC);
  Profile2_UpdateEntry(102);
  if ( ((unsigned __int8)&dword_14FDE8168 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8168) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8168);
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverThreadOwnership, 1, 0) != 1 )
  {
    LODWORD(v5) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2200, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( (volatile_int32 *)&g_serverThreadOwnership, 1, 0 ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v5) )
      __debugbreak();
  }
  g_serverThreadOwnership = 1;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  LODWORD(event) = 4;
  v1 = 0;
  SV_Profile_BeginEvent(SVPROF_RUN_FRAME);
  SV_Game_ResetSkeletonCache();
  SV_ClientNetPerf_OnFullServerFrame();
  CL_FlushDebugServerData();
  Sys_ProfBeginNamedEvent(0xFF00FFu, "SERVER: bots");
  if ( SV_Loaded() )
  {
    if ( BG_BotOrAgentSystemEnabled() )
      SV_BotUpdateCommon();
    SV_BotClearActiveBotCount();
    if ( BG_BotSystemEnabled() )
      SV_BotUpdateBots();
    if ( BG_AgentSystemEnabled() )
      SV_UpdateAgents();
  }
  Profile_Begin(408);
  SV_Game_ResetSkeletonCache();
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( SvClient::GetCommonClient(v1)->state )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE", v6, event) )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v1);
        if ( NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) && LODWORD(CommonClient[855].__vftable) == 1 )
          SV_MainMP_TestClientMove((SvClientMP *)CommonClient);
      }
      ++v1;
    }
    while ( v1 < (int)SvClient::ms_clientCount );
  }
  Profile_EndInternal(NULL);
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_UserMoveWorkersMP_FinishClientThinkCmds TestClients");
  SV_UserMoveWorkersMP_FinishClientThinkCmds();
  Sys_ProfEndNamedEvent();
  GStatic::SetActiveStatics();
  G_MainMP_ProcessUserMoveOutput();
  GStatic::ClearActiveStatics();
  Sys_ProfEndNamedEvent();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  PersistentGlobalsMP->time += ActiveServerApplication->m_frameDuration;
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  if ( !SV_IsMigrating() )
  {
    GStatic::SetActiveStatics();
    G_MainMP_RunFrame(PersistentGlobalsMP->time);
    GStatic::ClearActiveStatics();
    SV_StreamSync_RunFrame();
  }
  v4 = ScriptContext_Server();
  Scr_ProfileUpdate(v4);
  Scr_ProfileBuiltinUpdate(v4);
  Profile_ResetCounters(1);
  Profile_ResetScriptCounters(v4);
  Profile2_ServerUpdate();
  CL_UpdateDebugServerData();
  Profile2_UpdateEntry(102);
  if ( ((unsigned __int64)&dword_14FDE8168 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8168) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8168);
  Profile2_UpdateEntry(3);
  if ( ((unsigned __int64)&dword_14FDE7FDC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE7FDC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE7FDC);
  SV_Profile_EndEvent((const ServerProfileEvent)event);
}

/*
==============
SV_MainMP_ServerCommandOverFlow
==============
*/
void SV_MainMP_ServerCommandOverFlow(SvClientMP *client, const unsigned __int8 *cmd, const unsigned int cmdSize)
{
  int reliableAcknowledge; 
  __int64 reliableSequence; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int size; 
  int v11; 
  int v12; 
  char *fmt; 
  __int64 v14; 
  unsigned __int8 *outBuf; 
  char dest[1024]; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 521, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  client->reliableOverflowed = 1;
  Com_Printf(15, "===== pending server commands =====\n");
  reliableAcknowledge = client->reliableAcknowledge;
  reliableSequence = (unsigned int)client->reliableSequence;
  v8 = reliableAcknowledge + 1;
  if ( reliableAcknowledge < (int)reliableSequence )
  {
    do
    {
      v9 = v8 & 0x1FF;
      size = client->netBuf.reliableCommands.m_entries[v9].size;
      if ( CircularEntryBuffer<512,131072,int,0>::GetData(&client->netBuf.reliableCommands, v9, (const unsigned __int8 **)&outBuf) )
      {
        if ( *outBuf == 89 )
        {
          LODWORD(fmt) = (char)outBuf[4];
          Com_PrintError(15, "cmd %5d: (%i) Binary '%c'\n", v8, size, fmt);
        }
        else
        {
          Com_PrintError(15, "cmd %5d: (%i) %s\n", v8, size, (const char *)outBuf);
        }
      }
      else
      {
        Com_PrintError(15, "cmd %5d: (%i) <overflow>\n", v8, size);
      }
      reliableSequence = (unsigned int)client->reliableSequence;
      ++v8;
    }
    while ( (int)v8 <= (int)reliableSequence );
  }
  Com_PrintError(15, "cmd %5d: (%i) %s\n", reliableSequence, cmdSize, (const char *)cmd);
  if ( NetConnection::IsLocal(&client->clientConnection) && !NetConnection::IsBot(&client->clientConnection) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E9D90);
  NetConnection::SendUnreliable(&client->clientConnection, "disconnect");
  SV_ClientMP_DelayDropClient(client, (const char *)&stru_1440E9D90);
  v11 = Com_sprintf(dest, 0x400ui64, "%c \"EXE/SERVERCOMMANDOVERFLOW\"", 114i64);
  v12 = v11;
  if ( v11 < 0 )
  {
    LODWORD(v14) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( strLen ) >= ( 0 )", "strLen >= 0\n\t%i, %i", v14, 0i64) )
      __debugbreak();
  }
  SV_MainMP_WriteReliableCommandStr(client, SV_CMD_RELIABLE, dest, v12 + 1);
}

/*
==============
SV_MainMP_SetCodInfoDvarValues
==============
*/
void SV_MainMP_SetCodInfoDvarValues(void)
{
  NetConstStrings_ForEachCodInfoDvar(SV_MainMP_SetCodInfoDvarValues_Callback);
}

/*
==============
SV_MainMP_SetCodInfoDvarValues_Callback
==============
*/
void SV_MainMP_SetCodInfoDvarValues_Callback(const unsigned int dvarIndex, const dvar_t *dvar)
{
  const char *v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4191, ASSERT_TYPE_ASSERT, "( dvar )", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (dvar->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4192, ASSERT_TYPE_ASSERT, "( dvar->flags & (1 << 3) )", (const char *)&queryFormat, "dvar->flags & DVAR_CODINFO") )
    __debugbreak();
  if ( dvarIndex >= 0x64 )
  {
    LODWORD(v6) = dvarIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 4193, ASSERT_TYPE_ASSERT, "(unsigned)( dvarIndex ) < (unsigned)( 100 )", "dvarIndex doesn't index MAX_CODINFO\n\t%i not in [0, %i)", v6, 100) )
      __debugbreak();
  }
  v4 = Dvar_DisplayableValue(dvar);
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( BgDynamicLimits::ms_data.m_maxConfigStrings <= 0x219 )
  {
    LODWORD(v7) = 537;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v7) )
      __debugbreak();
  }
  v5 = dvarIndex + 537;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( v5 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    LODWORD(v7) = dvarIndex + 537;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v7) )
      __debugbreak();
  }
  SV_SetConfigstring(v5, v4);
}

/*
==============
SV_MainMP_SetWinningTeam
==============
*/
void SV_MainMP_SetWinningTeam(int winner)
{
  int v2; 
  PartyData *PartyData; 
  PartyData *v4; 

  if ( !SV_IsDemoPlaying() && !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && Lobby_IsInLobby() )
  {
    v2 = winner - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        PartyData = Lobby_GetPartyData();
        ++PartyData->alliesWins;
      }
    }
    else
    {
      v4 = Lobby_GetPartyData();
      ++v4->axisWins;
    }
  }
}

/*
==============
SV_MainMP_TestClientMove
==============
*/
void SV_MainMP_TestClientMove(SvClientMP *cl)
{
  unsigned int MpClientIndex; 
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int v6; 
  int v7; 
  __int64 v8; 
  const playerState_s *EffectivePlayerstateForClientNum; 
  GWeaponMap *Instance; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int time; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v20; 
  float v21; 
  const dvar_t *v23; 
  unsigned int pHoldrand; 
  float s; 
  float c; 
  usercmd_s cmd; 

  if ( cl->gentity )
  {
    memset_0(&cmd, 0, sizeof(cmd));
    MpClientIndex = SV_Client_GetMpClientIndex(cl);
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    _XMM6 = 0i64;
    SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    v6 = (int)*(float *)&_XMM3;
    if ( !(int)*(float *)&_XMM3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1963, ASSERT_TYPE_ASSERT, "(testClientPmoveCount > 0)", "%s\n\tTime frame too small for the desired step, please review", "testClientPmoveCount > 0") )
      __debugbreak();
    if ( v6 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1964, ASSERT_TYPE_ASSERT, "(testClientPmoveCount <= TEST_CLIENT_CMD_MAX_PER_FRAME)", "%s\n\tTime frame too large for desired step, please review", "testClientPmoveCount <= TEST_CLIENT_CMD_MAX_PER_FRAME") )
      __debugbreak();
    if ( v6 )
    {
      v7 = 0;
      v8 = v6;
      do
      {
        EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(MpClientIndex);
        Instance = GWeaponMap::GetInstance();
        cmd.weapon = *BG_GetCurrentWeaponForPlayer(Instance, EffectivePlayerstateForClientNum);
        cmd.serverTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time + v7 - 200;
        cmd.commandTime = cmd.serverTime;
        cmd.inputTime = cmd.serverTime;
        pHoldrand = MpClientIndex + v7 + SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
        BG_srand(&pHoldrand);
        if ( G_MainMP_GetClientArchiveTime(MpClientIndex) || cl->gentity->health <= 0 )
        {
          v23 = DVARBOOL_testClients_watchKillcam;
          if ( !DVARBOOL_testClients_watchKillcam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_watchKillcam") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( !v23->current.enabled && !(BG_rand(&pHoldrand) % 2) )
            cmd.buttons |= 0x20ui64;
        }
        else
        {
          if ( !(BG_rand(&pHoldrand) % 2) )
          {
            v11 = DVARBOOL_testClients_doAttack;
            if ( !DVARBOOL_testClients_doAttack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_doAttack") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v11);
            if ( v11->current.enabled )
              cmd.buttons |= 1ui64;
          }
          v12 = BG_rand(&pHoldrand);
          if ( v12 == 10 * (v12 / 10) )
          {
            v13 = DVARBOOL_testClients_doReload;
            if ( !DVARBOOL_testClients_doReload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_doReload") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v13);
            if ( v13->current.enabled )
              cmd.buttons |= 0x20ui64;
          }
          v14 = DVARBOOL_testClients_doCrouch;
          if ( !DVARBOOL_testClients_doCrouch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_doCrouch") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v14);
          if ( v14->current.enabled )
            cmd.buttons |= 0x80ui64;
          v15 = DVARBOOL_testClients_doProne;
          if ( !DVARBOOL_testClients_doProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_doProne") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( v15->current.enabled )
            cmd.buttons |= 0x40ui64;
          v16 = DVARBOOL_testClients_doMove;
          if ( !DVARBOOL_testClients_doMove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "testClients_doMove") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          if ( v16->current.enabled )
          {
            time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
            cmd.forwardmove = (time + 555 * SV_Client_GetMpClientIndex(cl)) % 0x639C / 0x64 - 127;
            cmd.rightmove = (2 * SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time + 250) % 25500 / 100 - 127;
            PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
            FastSinCos((float)PersistentGlobalsMP->time * 0.0017453292, &s, &c);
            __asm { vroundss xmm2, xmm6, xmm3, 1 }
            cmd.angles.v[0] = MSG_PackSignedFloat((float)((float)((float)((float)(10.0 * s) * 0.0027777778) + 0.013888889) - *(float *)&_XMM2) * 360.0, 180.0, 0x14u);
            v20 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
            v21 = (float)(v20 * (SV_Client_GetMpClientIndex(cl) + 2) % 0x8CA0);
            __asm { vroundss xmm3, xmm6, xmm2, 1 }
            cmd.angles.v[1] = MSG_PackSignedFloat((float)((float)(v21 * 0.000027777778) - *(float *)&_XMM3) * 360.0, 180.0, 0x14u);
          }
        }
        SvClientMP::SetBotCommandsAcknowledged(cl);
        if ( !SV_UserMoveWorkersMP_TryQueueClientThinkCmd(MpClientIndex, &cmd) )
          SV_ClientMP_Think(cl, &cmd);
        v7 += 16;
        --v8;
      }
      while ( v8 );
    }
  }
}

/*
==============
SV_MainMP_WriteReliableCommandStr
==============
*/
void SV_MainMP_WriteReliableCommandStr(SvClientMP *client, svscmd_type type, const char *cmd, const unsigned int cmdSize)
{
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int8 v10; 
  unsigned int v11; 
  unsigned int v12; 
  char pszBuffer[1024]; 

  v7 = client->reliableSequence & 0x1FF;
  v8 = MSG_WriteReliableCommandToBuffer(cmd, pszBuffer, 0x400u);
  v9 = v8;
  if ( v8 > cmdSize )
  {
    v12 = cmdSize;
    v11 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( reliableCmdSize ) <= ( cmdSize )", "reliableCmdSize <= cmdSize\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  v10 = truncate_cast<unsigned char,enum svscmd_type>(type);
  CircularEntryBuffer<512,131072,int,0>::SetDataAndType(&client->netBuf.reliableCommands, v7, (const unsigned __int8 *)pszBuffer, v9, v10);
}

/*
==============
SV_MaintMP_ProcessDemoConnectingClients
==============
*/
void SV_MaintMP_ProcessDemoConnectingClients(const int *clientsAdded, int clientsAddedCount, bool isDemoPlaying, bool isDemoRecording)
{
  __int64 v6; 
  __int64 v7; 
  SvDemo *v8; 
  __int64 i; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  BG_SynchronizedPlayerInfo *v13; 
  void (__fastcall *RecordByte)(SvDemo *, unsigned __int8); 
  __int64 v15; 
  __int64 v16; 

  v6 = clientsAddedCount;
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)SvDemo::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_demo_mp.h", 173, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsMP( ms_allocatedType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_allocatedType )") )
    __debugbreak();
  v8 = SvDemo::ms_gServerDemoSystem;
  if ( isDemoPlaying )
  {
    for ( i = SvDemo::ms_gServerDemoSystem->GetByte(SvDemo::ms_gServerDemoSystem); (_DWORD)i != 255; i = v8->GetByte(v8) )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      if ( (unsigned int)i >= SvClient::ms_clientCount )
      {
        LODWORD(v16) = SvClient::ms_clientCount;
        LODWORD(v15) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      SV_DemoMP_GetData(SvClientMP::ms_playerInfos[i]->xnaddr.addrBuff, 128);
    }
  }
  else if ( isDemoRecording )
  {
    v10 = v6;
    if ( (int)v6 > 0 )
    {
      v11 = 0i64;
      do
      {
        v12 = (unsigned int)clientsAdded[v11];
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
          __debugbreak();
        if ( (unsigned int)v12 >= SvClient::ms_clientCount )
        {
          LODWORD(v16) = SvClient::ms_clientCount;
          LODWORD(v15) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v13 = SvClientMP::ms_playerInfos[v12];
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 1301, ASSERT_TYPE_ASSERT, "(playerInfo != nullptr)", (const char *)&queryFormat, "playerInfo != nullptr") )
          __debugbreak();
        RecordByte = v8->RecordByte;
        if ( ((int)v12 < 0 || (unsigned int)v12 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v12, "signed", (int)v12) )
          __debugbreak();
        RecordByte(v8, v12);
        SV_DemoMP_RecordData(v13->xnaddr.addrBuff, 128);
        ++v11;
      }
      while ( v11 < v10 );
    }
    LOBYTE(v7) = -1;
    v8->RecordByte(v8, v7);
  }
}

/*
==============
SV_UpdatePerformanceFrameMP
==============
*/
void SV_UpdatePerformanceFrameMP(float time, float vmTime, float vmBuiltinTime, float entFieldTime)
{
  ServerProfileTimes *v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  ServerProfileTimes *v13; 
  SvGameModeApplication *ActiveServerApplication; 
  SvGameGlobals *SvGameGlobalsCommon; 
  __int64 v16; 
  int v26; 

  v6 = s_serverProfileTimes;
  v7 = Sys_Milliseconds();
  v8 = s_serverDebugFrame;
  v10 = (int)((unsigned __int64)(1717986919i64 * s_serverDebugFrame++) >> 32) >> 2;
  v9 = s_serverDebugFrame;
  v11 = (int)(v8 - 10 * ((v10 >> 31) + v10));
  v12 = v7 - s_lastWallClockEndTime;
  v13 = &s_serverProfileTimes[v11];
  s_lastWallClockEndTime = v7;
  v13->serverTime = level.time;
  v13->frameTime = time;
  v13->vmFrameTime = vmTime;
  v13->vmBuiltinTime = vmBuiltinTime;
  v13->vmEntFieldTime = entFieldTime;
  v13->wallClockTime = (float)v12;
  if ( v9 >= 10 )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    SvGameGlobalsCommon->profile.frameTime = 0.0;
    SvGameGlobalsCommon->profile.wallClockTime = 0.0;
    SvGameGlobalsCommon->profile.waitStartTime = 0.0;
    SvGameGlobalsCommon->profile.waitClientTime = 0.0;
    SvGameGlobalsCommon->profile.waitTimeoutTime = 0.0;
    SvGameGlobalsCommon->profile.waitSendTime = 0.0;
    SvGameGlobalsCommon->profile.animCalls = 0;
    SvGameGlobalsCommon->profile.animCallsMin = 0;
    SvGameGlobalsCommon->profile.animCallsMax = 0;
    v16 = 10i64;
    do
    {
      ++v6;
      SvGameGlobalsCommon->profile.frameTime = SvGameGlobalsCommon->profile.frameTime + v6[-1].frameTime;
      SvGameGlobalsCommon->profile.wallClockTime = SvGameGlobalsCommon->profile.wallClockTime + v6[-1].wallClockTime;
      _XMM1 = LODWORD(v6[-1].frameTime);
      __asm
      {
        vminss  xmm6, xmm1, xmm6
        vmaxss  xmm7, xmm1, xmm7
      }
      SvGameGlobalsCommon->profile.vmFrameTime = SvGameGlobalsCommon->profile.vmFrameTime + v6[-1].vmFrameTime;
      _XMM2 = LODWORD(v6[-1].vmFrameTime);
      SvGameGlobalsCommon->profile.vmBuiltinTime = SvGameGlobalsCommon->profile.vmBuiltinTime + v6[-1].vmBuiltinTime;
      __asm
      {
        vminss  xmm8, xmm2, xmm8
        vmaxss  xmm9, xmm2, xmm9
      }
      _XMM2 = LODWORD(v6[-1].vmBuiltinTime);
      SvGameGlobalsCommon->profile.vmEntFieldTime = SvGameGlobalsCommon->profile.vmEntFieldTime + v6[-1].vmEntFieldTime;
      __asm
      {
        vminss  xmm10, xmm2, xmm10
        vmaxss  xmm11, xmm2, xmm11
      }
      --v16;
    }
    while ( v16 );
    SvGameGlobalsCommon->profile.frameTime = SvGameGlobalsCommon->profile.frameTime * 0.1;
    SvGameGlobalsCommon->profile.wallClockTime = SvGameGlobalsCommon->profile.wallClockTime * 0.1;
    SvGameGlobalsCommon->profile.mostRecentFrameTimeMsec = time;
    SvGameGlobalsCommon->profile.serverTimeAccum = time + SvGameGlobalsCommon->profile.serverTimeAccum;
    v26 = s_serverDebugFrame;
    SvGameGlobalsCommon->profile.serverTimeFrames = SvGameGlobalsCommon->profile.serverTimeFrames + 1.0;
    SvGameGlobalsCommon->profile.debugFrameNumber = v26;
    __asm { vmaxss  xmm0, xmm6, xmm2 }
    SvGameGlobalsCommon->profile.serverFrameTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm1, xmm7, xmm2 }
    SvGameGlobalsCommon->profile.serverFrameTimeMax = *(float *)&_XMM1;
    SvGameGlobalsCommon->profile.vmFrameTimeFrames = SvGameGlobalsCommon->profile.vmFrameTimeFrames + 1.0;
    SvGameGlobalsCommon->profile.vmFrameTime = SvGameGlobalsCommon->profile.vmFrameTime * 0.1;
    __asm { vmaxss  xmm0, xmm8, xmm3 }
    SvGameGlobalsCommon->profile.vmFrameTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm0, xmm9, xmm3 }
    SvGameGlobalsCommon->profile.vmFrameTimeMax = *(float *)&_XMM0;
    SvGameGlobalsCommon->profile.vmFrameTimeAccum = vmTime + SvGameGlobalsCommon->profile.vmFrameTimeAccum;
    SvGameGlobalsCommon->profile.vmFrameTimeMinAccum = SvGameGlobalsCommon->profile.vmFrameTimeMinAccum + SvGameGlobalsCommon->profile.vmFrameTimeMin;
    SvGameGlobalsCommon->profile.vmFrameTimeMaxAccum = SvGameGlobalsCommon->profile.vmFrameTimeMaxAccum + SvGameGlobalsCommon->profile.vmFrameTimeMax;
    SvGameGlobalsCommon->profile.vmBuiltinTime = SvGameGlobalsCommon->profile.vmBuiltinTime * 0.1;
    __asm { vmaxss  xmm0, xmm10, xmm3 }
    SvGameGlobalsCommon->profile.vmBuiltinTimeMin = *(float *)&_XMM0;
    __asm { vmaxss  xmm0, xmm11, xmm3 }
    SvGameGlobalsCommon->profile.vmBuiltinTimeMax = *(float *)&_XMM0;
    SvGameGlobalsCommon->profile.vmBuiltinTimeAccum = vmBuiltinTime + SvGameGlobalsCommon->profile.vmBuiltinTimeAccum;
    SvGameGlobalsCommon->profile.vmBuiltinTimeMinAccum = SvGameGlobalsCommon->profile.vmBuiltinTimeMinAccum + SvGameGlobalsCommon->profile.vmBuiltinTimeMin;
    SvGameGlobalsCommon->profile.vmBuiltinTimeMaxAccum = SvGameGlobalsCommon->profile.vmBuiltinTimeMaxAccum + SvGameGlobalsCommon->profile.vmBuiltinTimeMax;
    SvGameGlobalsCommon->profile.vmEntFieldTime = SvGameGlobalsCommon->profile.vmEntFieldTime * 0.1;
    SvGameGlobalsCommon->profile.vmEntFieldTimeAccum = entFieldTime + SvGameGlobalsCommon->profile.vmEntFieldTimeAccum;
    if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    SvGameGlobalsCommon->profile.serverFrameTimeTarget = (float)(int)ActiveServerApplication->m_frameDuration;
    SvGameGlobalsCommon->profile.serverTime = level.time;
  }
}

/*
==============
SvGameModeAppMP::ServerStart_CheckFinalizeRequest
==============
*/
void SvGameModeAppMP::ServerStart_CheckFinalizeRequest(SvGameModeAppMP *this)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2765, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_svMainMP_serverProcessControl.requestedState == 2 )
  {
    if ( !Com_IsAnyLocalServerStartingAsync() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2769, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerStartingAsync())", (const char *)&queryFormat, "Com_IsAnyLocalServerStartingAsync()") )
      __debugbreak();
    SvGameModeAppMP::ServerStart_Finalize(this);
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2773, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( s_svMainMP_serverProcessControl.requestedState == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2774, ASSERT_TYPE_ASSERT, "(s_svMainMP_serverProcessControl.requestedState != static_cast<int>( ServerAsyncStartState::START_FINALIZE ))", (const char *)&queryFormat, "s_svMainMP_serverProcessControl.requestedState != static_cast<int>( ServerAsyncStartState::START_FINALIZE )") )
      __debugbreak();
  }
}

/*
==============
SvGameModeAppMP::ServerStart_Execute
==============
*/
void SvGameModeAppMP::ServerStart_Execute(SvGameModeAppMP *this)
{
  bool IsServerThread; 
  int v3; 

  if ( s_svMainMP_serverProcessControl.settings.serverThreadStartup )
    IsServerThread = Sys_IsServerThread();
  else
    IsServerThread = Sys_IsMainThread();
  if ( !IsServerThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2683, ASSERT_TYPE_ASSERT, "(s_svMainMP_serverProcessControl.settings.serverThreadStartup ? Sys_IsServerThread() : Sys_IsMainThread())", (const char *)&queryFormat, "s_svMainMP_serverProcessControl.settings.serverThreadStartup ? Sys_IsServerThread() : Sys_IsMainThread()") )
    __debugbreak();
  v3 = Sys_Milliseconds();
  Com_Printf(15, "ServerStart_Execute: Starting after %i ms of request.\n", (unsigned int)(v3 - s_svMainMP_serverProcessControl.startTime));
  SvGameModeAppMP::ServerStart_Spawn(this, &s_svMainMP_serverProcessControl.settings);
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time != this->m_svLevelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2692, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() == m_svLevelTime )", (const char *)&queryFormat, "SvPersistentGlobalsMP::GetTime() == m_svLevelTime") )
    __debugbreak();
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2695, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::START_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::START_REQUESTED ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::START_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::START_REQUESTED )") )
    __debugbreak();
  Com_SetConnectedPacketsAllowed(1);
}

/*
==============
SvGameModeAppMP::ServerStart_Finalize
==============
*/
void SvGameModeAppMP::ServerStart_Finalize(SvGameModeAppMP *this)
{
  const scrContext_t *v2; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2705, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "ServerStart_Finalize");
  G_Main_DecommitUnusedXAnimHunkUser();
  v2 = ScriptContext_Server();
  Scr_Main_DecommitUnusedMemory(v2);
  ScriptableSv_DecommitUnusedMemory();
  Mem_HunkDebug_DecommitUnused();
  SV_DemoMP_StartServerFinalize();
  SV_SnapshotMP_ArchiveEnabled();
  Com_ResetFrametime();
  SV_Init_SetLocalServerRunning();
  this->m_svUpdateTime = Sys_Milliseconds();
  this->m_svAccumTime = 0.0;
  if ( !Com_ErrorEntered() && !s_svMainMP_serverProcessControl.settings.isFrontEnd )
    Com_MapLoadErrors_Finalize(s_svMainMP_serverProcessControl.settings.mapName);
  Sys_ProfEndNamedEvent();
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 0) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2753, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::START_FINALIZE ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::IDLE ) ) == static_cast<int>( ServerAsyncStartState::START_FINALIZE )") )
    __debugbreak();
  Com_SetLocalServerStarting(NONE);
  v3 = Sys_Milliseconds();
  Com_Printf(15, "ServerStart_Finalize: Finished after %i ms of request.\n", (unsigned int)(v3 - s_svMainMP_serverProcessControl.startTime));
}

/*
==============
SvGameModeAppMP::ServerStart_IsRequested
==============
*/
bool SvGameModeAppMP::ServerStart_IsRequested(SvGameModeAppMP *this)
{
  return s_svMainMP_serverProcessControl.requestedState == 1;
}

/*
==============
SvGameModeAppMP::ServerThreadErrorCleanup
==============
*/
void SvGameModeAppMP::ServerThreadErrorCleanup(SvGameModeAppMP *this)
{
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 0);
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3580, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  this->m_svThreadOwnsGame = 0;
}

/*
==============
SvGameModeAppMP::ServerThreadFrame
==============
*/
void SvGameModeAppMP::ServerThreadFrame(SvGameModeAppMP *this)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  SvGameModeApplication *ActiveServerApplication; 
  int FrameDuration; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  scrContext_t *v21; 
  double RunThreadsTime; 
  float v23; 
  double BuiltinTime; 
  float v25; 
  double EntFieldTime; 
  float v27; 
  double TotalFrameTime; 
  __int128 v31; 
  __int128 v33; 
  double v35; 
  float v36; 
  double v37; 
  float v38; 
  double v39; 
  float v40; 
  double v41; 
  __int128 v44; 
  __int128 v46; 
  __int64 v48; 
  ServerTimingState timeoutUserData; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "wait start server");
  SV_Profile_PauseFrame();
  v8 = DCONST_DVARINT_sv_network_fps;
  if ( !DCONST_DVARINT_sv_network_fps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_network_fps") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2938, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_sv_network_fps, \"sv_network_fps\" ) > 0 )", (const char *)&queryFormat, "Dconst_GetInt( sv_network_fps ) > 0") )
    __debugbreak();
  v9 = DCONST_DVARINT_sv_network_fps;
  if ( !DCONST_DVARINT_sv_network_fps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_network_fps") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = 1000 / v9->current.integer;
  this->m_svStartServer = 0;
  this->m_svNetworkTime = this->m_frameTime + v10;
  Sys_ProcessWorkerCmdsWithTimeout(CheckStartServerTimeout, &timeoutUserData);
  SV_Profile_ResumeFrame();
  Sys_ProfEndNamedEvent();
  if ( this->m_restartServerThread )
  {
    if ( this->m_svStartServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2982, ASSERT_TYPE_ASSERT, "( !m_svStartServer )", (const char *)&queryFormat, "!m_svStartServer") )
      __debugbreak();
    this->m_restartServerThread = 0;
  }
  else
  {
    this->m_frameTime = Sys_Milliseconds();
    v11 = DVARINT_sv_fakeHitchDuration;
    if ( !DVARINT_sv_fakeHitchDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_fakeHitchDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.integer )
    {
      v12 = Sys_Milliseconds();
      v13 = DVARINT_sv_fakeHitchDelay;
      v14 = v12;
      if ( !DVARINT_sv_fakeHitchDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_fakeHitchDelay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v15 = dword_14E943944;
      if ( v14 - dword_14E943944 > v13->current.integer )
      {
        v16 = DVARINT_sv_fakeHitchDuration;
        if ( !DVARINT_sv_fakeHitchDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_fakeHitchDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        Sys_Sleep(v16->current.integer);
        v15 = Sys_Milliseconds();
      }
      if ( !v15 )
        v15 = v14;
      dword_14E943944 = v15;
    }
    SV_SnapshotMP_CheckOverflow();
    SV_Timing_Start(&timeoutUserData);
    SvGameModeAppMP::RunEventLoop(this);
    SV_Timing_End(&timeoutUserData);
    SV_Timing_UpdateEventLoop(&timeoutUserData);
    if ( this->m_svStartServer )
    {
      if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
      {
        LODWORD(v48) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3008, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v48) )
          __debugbreak();
      }
      SvGameModeAppMP::IncServerThreadOwnsGame(this);
      if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2819, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
        __debugbreak();
      if ( s_svMainMP_serverProcessControl.requestedState == 3 )
      {
        if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3015, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
          __debugbreak();
        if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2826, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
          __debugbreak();
        v17 = Sys_Milliseconds();
        Com_Printf(15, "AsyncServerRestart_Execute: Starting after %i ms of request.\n", (unsigned int)(v17 - s_svMainMP_serverProcessControl.startTime));
        Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_UserMoveWorkersMP_FinishClientThinkCmds AsyncRestart");
        SV_UserMoveWorkersMP_FinishClientThinkCmds();
        Sys_ProfEndNamedEvent();
        if ( !s_svMainMP_serverProcessControl.settings.serverThreadStartup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2837, ASSERT_TYPE_ASSERT, "( s_svMainMP_serverProcessControl.settings.serverThreadStartup )", (const char *)&queryFormat, "s_svMainMP_serverProcessControl.settings.serverThreadStartup") )
          __debugbreak();
        SV_InitMP_RestartServer(&s_svMainMP_serverProcessControl.settings);
        if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time != this->m_svLevelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2841, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() == m_svLevelTime )", (const char *)&queryFormat, "SvPersistentGlobalsMP::GetTime() == m_svLevelTime") )
          __debugbreak();
        if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
          __debugbreak();
        if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 4) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2844, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::RESTART_FINALIZE ) ) == static_cast<int>( ServerAsyncStartState::RESTART_REQUESTED )") )
          __debugbreak();
      }
      else if ( s_svMainMP_serverProcessControl.requestedState == 1 )
      {
        Sys_ProfBeginNamedEvent(0xFFFF00u, "SERVER Async Init");
        SvGameModeAppMP::ServerStart_Execute(this);
        Sys_ProfEndNamedEvent();
      }
      else
      {
        v55 = v1;
        v54 = v2;
        v53 = v3;
        v52 = v4;
        v51 = v5;
        v50 = v6;
        ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
        FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
        if ( com_timescaleValue == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3031, ASSERT_TYPE_ASSERT, "(com_timescaleValue != 0.0f)", (const char *)&queryFormat, "com_timescaleValue != 0.0f") )
          __debugbreak();
        PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
        v21 = ScriptContext_Server();
        while ( 1 )
        {
          SV_Timing_Start(&timeoutUserData);
          SV_DemoMP_ReadPacket();
          if ( SV_DemoMP_HasDemoEnded() )
            break;
          if ( sv_demo.fastForward )
            SV_DemoMP_StopClientReplay();
          else
            SV_DemoMP_UpdateReplayClient();
          Sys_ProfBeginNamedEvent(0xFFFF00u, "SERVER: Frame");
          Sys_ProfBeginNamedEvent(0xFF00u, "SERVER: pre frame");
          SV_MainMP_PreFrame();
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFF00u, "SERVER: run frame");
          SV_MainMP_RunFrame();
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFF0000u, "SERVER: post frame");
          SV_MainMP_PostFrame();
          Sys_ProfEndNamedEvent();
          Sys_ProfEndNamedEvent();
          Sys_ProfBeginNamedEvent(0xFF0000u, "SERVER: update demo");
          SV_DemoMP_UpdateDemo();
          Sys_ProfEndNamedEvent();
          this->m_endFrameTime = Sys_Milliseconds();
          if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time > this->m_svLevelTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3077, ASSERT_TYPE_ASSERT, "( SvPersistentGlobalsMP::GetTime() <= m_svLevelTime )", (const char *)&queryFormat, "SvPersistentGlobalsMP::GetTime() <= m_svLevelTime") )
            __debugbreak();
          if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time >= this->m_svLevelTime || Sys_GetDatabaseStopServer() )
            goto LABEL_80;
          SvGameModeAppMP::DecServerThreadOwnsGame(this);
          SV_Timing_End(&timeoutUserData);
          SV_Profile_EndFrame();
          SV_Timing_UpdateFrame(&timeoutUserData, (float)FrameDuration);
          RunThreadsTime = Scr_GetRunThreadsTime(SCRIPTINSTANCE_SERVER);
          v23 = *(float *)&RunThreadsTime;
          BuiltinTime = Scr_GetBuiltinTime(SCRIPTINSTANCE_SERVER);
          v25 = *(float *)&BuiltinTime;
          EntFieldTime = Scr_GetEntFieldTime(SCRIPTINSTANCE_SERVER);
          v27 = *(float *)&EntFieldTime;
          TotalFrameTime = SV_Timing_GetTotalFrameTime();
          SV_UpdatePerformanceFrameMP(*(float *)&TotalFrameTime, v23, v25, v27);
          PIXReportCounter_0(L"Script VM");
          PIXReportCounter_0(L"Script Builtin");
          PIXReportCounter_0(L"Server Frame");
          _XMM0 = 0i64;
          __asm { vcvtsi2sd xmm0, xmm0, rax }
          if ( (timeoutUserData.totalTicks & 0x8000000000000000ui64) != 0i64 )
          {
            *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v31 = *(double *)&_XMM0 + 1.844674407370955e19;
            _XMM0 = v31;
          }
          *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v33 = *(double *)&_XMM0 * msecPerRawTimerTick;
          _XMM0 = v33;
          __asm { vcvtsd2ss xmm1, xmm0, xmm0; framtTime }
          Profile_TrackUsageAnalysis(v21, *(float *)&_XMM1, 0);
          Scr_ResetPerfTimes(SCRIPTINSTANCE_SERVER);
          SV_Timing_Start(&timeoutUserData);
          this->m_frameTime = this->m_endFrameTime;
          SvGameModeAppMP::RunEventLoop(this);
          SV_Timing_End(&timeoutUserData);
          SV_Timing_UpdateEventLoop(&timeoutUserData);
          SvGameModeAppMP::IncServerThreadOwnsGame(this);
          if ( com_timescaleValue == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3155, ASSERT_TYPE_ASSERT, "( com_timescaleValue != 0.0f )", (const char *)&queryFormat, "com_timescaleValue != 0.0f") )
            __debugbreak();
        }
        PersistentGlobalsMP->time = this->m_svLevelTime;
LABEL_80:
        sv_demo.fastForward = 0;
        SV_Timing_End(&timeoutUserData);
        SV_Profile_EndFrame();
        SV_Timing_UpdateFrame(&timeoutUserData, (float)FrameDuration);
        v35 = Scr_GetRunThreadsTime(SCRIPTINSTANCE_SERVER);
        v36 = *(float *)&v35;
        v37 = Scr_GetBuiltinTime(SCRIPTINSTANCE_SERVER);
        v38 = *(float *)&v37;
        v39 = Scr_GetEntFieldTime(SCRIPTINSTANCE_SERVER);
        v40 = *(float *)&v39;
        v41 = SV_Timing_GetTotalFrameTime();
        SV_UpdatePerformanceFrameMP(*(float *)&v41, v36, v38, v40);
        PIXReportCounter_0(L"Script VM");
        PIXReportCounter_0(L"Script Builtin");
        PIXReportCounter_0(L"Server Frame");
        _XMM0 = 0i64;
        __asm { vcvtsi2sd xmm0, xmm0, rax }
        if ( (timeoutUserData.totalTicks & 0x8000000000000000ui64) != 0i64 )
        {
          *((_QWORD *)&v44 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v44 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v44;
        }
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v46 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM0 = v46;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0; framtTime }
        Profile_TrackUsageAnalysis(v21, *(float *)&_XMM1, 0);
        Scr_ResetPerfTimes(SCRIPTINSTANCE_SERVER);
      }
      Sys_SleepServer();
      SvGameModeAppMP::DecServerThreadOwnsGame(this);
      if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
      {
        LODWORD(v48) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3227, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v48) )
          __debugbreak();
      }
    }
  }
  Sys_ServerCompleted();
}

/*
==============
SvGameModeAppMP::ServerThreadLoop
==============
*/
void SvGameModeAppMP::ServerThreadLoop(SvGameModeAppMP *this)
{
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3580, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  this->m_svThreadOwnsGame = 0;
  if ( SvGameModeApplication::ms_applicationActive )
  {
    SV_Profile_BeginFrame();
    while ( SvGameModeApplication::ms_applicationActive )
    {
      if ( !BG_GameInterface_GameModeIsOnline((GameModeType)(unsigned __int8)SvGameModeApplication::ms_allocType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3363, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsOnline( ms_allocType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsOnline( ms_allocType )") )
        __debugbreak();
      SvGameModeAppMP::ServerThreadFrame(this);
    }
    SV_Profile_EndFrame();
  }
}

/*
==============
SvGameModeAppMP::SetServerReady
==============
*/
void SvGameModeAppMP::SetServerReady(SvGameModeAppMP *this)
{
  sv_demo.serverThreadStarted = 1;
  com_inServerFrame = 1;
}

/*
==============
SvGameModeAppMP::SetServerRunning
==============
*/
void SvGameModeAppMP::SetServerRunning(SvGameModeAppMP *this)
{
  Com_ResetFrametime();
  SV_Init_SetLocalServerRunning();
  this->m_svUpdateTime = Sys_Milliseconds();
  this->m_svAccumTime = 0.0;
}

/*
==============
SvGameModeAppMP::ShouldRunNetworkEvents
==============
*/
bool SvGameModeAppMP::ShouldRunNetworkEvents(SvGameModeAppMP *this)
{
  return !SV_UserMoveWorkersMP_IsClientThinkWorkPending() && this->m_allowNetPackets && Sys_Milliseconds() >= this->m_svNetworkTime;
}

/*
==============
SvGameModeAppMP::StartServer
==============
*/
void SvGameModeAppMP::StartServer(SvGameModeAppMP *this, const SvServerInitSettings *r_initSettings)
{
  __int64 v4; 
  volatile int requestedState; 
  int v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2604, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_svMainMP_serverProcessControl.requestedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2605, ASSERT_TYPE_ASSERT, "(s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE ))", "%s\n\tExisting requested state active, can't start a new one", "s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE )") )
    __debugbreak();
  s_svMainMP_serverProcessControl.startTime = Sys_Milliseconds();
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.mapName = *(_OWORD *)r_initSettings->mapName;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[16] = *(_OWORD *)&r_initSettings->mapName[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[32] = *(_OWORD *)&r_initSettings->mapName[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.mapName[48] = *(_OWORD *)&r_initSettings->mapName[48];
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.gameType = *(_OWORD *)r_initSettings->gameType;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[16] = *(_OWORD *)&r_initSettings->gameType[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[32] = *(_OWORD *)&r_initSettings->gameType[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.gameType[48] = *(_OWORD *)&r_initSettings->gameType[48];
  *(_OWORD *)s_svMainMP_serverProcessControl.settings.serverHostName = *(_OWORD *)r_initSettings->serverHostName;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[16] = *(_OWORD *)&r_initSettings->serverHostName[16];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[32] = *(_OWORD *)&r_initSettings->serverHostName[32];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.serverHostName[48] = *(_OWORD *)&r_initSettings->serverHostName[48];
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.hardcoreMode = *(_OWORD *)&r_initSettings->hardcoreMode;
  *(_OWORD *)&s_svMainMP_serverProcessControl.settings.weaponMapLargeRuntimeSize = *(_OWORD *)&r_initSettings->weaponMapLargeRuntimeSize;
  Com_SetConnectedPacketsAllowed(0);
  Com_SetLocalServerStarting((ComServerStartingMode)(r_initSettings->serverThreadStartup + 1));
  SvGameModeAppMP::ServerStart_PreSpawn(this, r_initSettings);
  SV_Main_RestrictClientAllowedDvarFlags(r_initSettings->isFrontEnd);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3602, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( com_inServerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3605, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
    __debugbreak();
  Sys_InitServerEvents();
  if ( ((unsigned __int8)&s_svMainMP_serverProcessControl & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_svMainMP_serverProcessControl) )
    __debugbreak();
  if ( _InterlockedExchange((volatile __int32 *)&s_svMainMP_serverProcessControl, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2638, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::START_REQUESTED ) ) == static_cast<int>( ServerAsyncStartState::IDLE ))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_svMainMP_serverProcessControl.requestedState, static_cast<int>( ServerAsyncStartState::START_REQUESTED ) ) == static_cast<int>( ServerAsyncStartState::IDLE )") )
    __debugbreak();
  com_inServerFrame = r_initSettings->serverThreadStartup;
  if ( r_initSettings->serverThreadStartup )
  {
    Sys_WakeServer();
  }
  else
  {
    Com_SyncThreads();
    if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
    {
      LODWORD(v4) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2657, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v4) )
        __debugbreak();
    }
    SvGameModeAppMP::ServerStart_Execute(this);
    if ( s_svMainMP_serverProcessControl.requestedState != 2 )
    {
      v6 = 2;
      requestedState = s_svMainMP_serverProcessControl.requestedState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2662, ASSERT_TYPE_ASSERT, "( s_svMainMP_serverProcessControl.requestedState ) == ( static_cast<int>( ServerAsyncStartState::START_FINALIZE ) )", "%s == %s\n\t%i, %i", "s_svMainMP_serverProcessControl.requestedState", "static_cast<int>( ServerAsyncStartState::START_FINALIZE )", requestedState, v6) )
        __debugbreak();
    }
    SvGameModeAppMP::ServerStart_Finalize(this);
    if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
    {
      LODWORD(v4) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2667, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v4) )
        __debugbreak();
    }
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2670, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
  }
}

/*
==============
SvGameModeAppMP::UpdateServerDeltaTime
==============
*/
__int64 SvGameModeAppMP::UpdateServerDeltaTime(SvGameModeAppMP *this, const int currentTime)
{
  int v3; 
  double TimescaleForSv; 
  float v5; 
  float v6; 
  SvGameModeApplication *ActiveServerApplication; 
  int FrameDuration; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int m_svLevelTime; 
  int time; 
  int v12; 
  const dvar_t *v13; 
  __int64 result; 
  int v15; 
  int v16; 

  v3 = currentTime - this->m_svUpdateTime;
  if ( currentTime == this->m_svUpdateTime )
    return (unsigned int)v3;
  TimescaleForSv = Com_GetTimescaleForSv();
  if ( *(float *)&TimescaleForSv == 1.0 )
  {
    v6 = 0.0;
  }
  else
  {
    v5 = (float)((float)v3 * *(float *)&TimescaleForSv) + this->m_svAccumTime;
    v3 = (int)v5;
    v6 = v5 - (float)(int)v5;
  }
  this->m_svAccumTime = v6;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  FrameDuration = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  m_svLevelTime = this->m_svLevelTime;
  time = PersistentGlobalsMP->time;
  if ( m_svLevelTime > time + FrameDuration )
  {
    if ( m_svLevelTime <= time )
    {
      v16 = PersistentGlobalsMP->time;
      v15 = this->m_svLevelTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3666, ASSERT_TYPE_ASSERT, "( m_svLevelTime ) > ( serverTime )", "m_svLevelTime > serverTime\n\t%i, %i", v15, v16) )
        __debugbreak();
    }
    v12 = v3 * FrameDuration;
    v3 = 1;
    if ( v12 / (this->m_svLevelTime - time) > 1 )
      v3 = v12 / (this->m_svLevelTime - time);
  }
  v13 = DCONST_DVARINT_sv_max_server_update;
  if ( !DCONST_DVARINT_sv_max_server_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_max_server_update") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  result = v13->current.unsignedInt;
  if ( v3 < (int)result )
    return (unsigned int)v3;
  return result;
}

/*
==============
SvGameModeAppMP::UpdateServerTime
==============
*/
bool SvGameModeAppMP::UpdateServerTime(SvGameModeAppMP *this, const int currentTime, const int deltaTime)
{
  int m_frameDuration; 
  int m_svResidualTime; 
  int m_svLevelTime; 
  bool result; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  if ( !this->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = this->m_frameDuration;
  if ( this->m_svUpdateState != 1 )
  {
    v12 = 1;
    LODWORD(v10) = this->m_svUpdateState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3756, ASSERT_TYPE_ASSERT, "( m_svUpdateState ) == ( SERVER_UPDATE_TIME )", "m_svUpdateState == SERVER_UPDATE_TIME\n\t%i, %i", v10, v12) )
      __debugbreak();
  }
  if ( this->m_svResidualTime >= m_frameDuration )
  {
    LODWORD(v11) = m_frameDuration;
    LODWORD(v10) = this->m_svResidualTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3757, ASSERT_TYPE_ASSERT, "( m_svResidualTime ) < ( frameDuration )", "m_svResidualTime < frameDuration\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  if ( deltaTime < 0 )
  {
    LODWORD(v10) = deltaTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3758, ASSERT_TYPE_ASSERT, "( deltaTime ) >= ( 0 )", "deltaTime >= 0\n\t%i, %i", v10, 0i64) )
      __debugbreak();
  }
  this->m_svResidualTime += deltaTime;
  m_svResidualTime = this->m_svResidualTime;
  this->m_svUpdateTime = currentTime;
  if ( m_svResidualTime < m_frameDuration )
    return 0;
  m_svLevelTime = this->m_svLevelTime;
  do
  {
    m_svResidualTime -= m_frameDuration;
    m_svLevelTime += m_frameDuration;
  }
  while ( m_svResidualTime >= m_frameDuration );
  this->m_svResidualTime = m_svResidualTime;
  result = 1;
  this->m_svLevelTime = m_svLevelTime;
  return result;
}

/*
==============
SvGameModeAppMP::UpdateServerTimeFromClient
==============
*/
void SvGameModeAppMP::UpdateServerTimeFromClient(SvGameModeAppMP *this, const int msec)
{
  volatile int *p_m_svUpdateState; 
  int v4; 
  int updated; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3795, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  p_m_svUpdateState = &this->m_svUpdateState;
  if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_svUpdateState) )
    __debugbreak();
  if ( !_InterlockedCompareExchange(p_m_svUpdateState, 1, 0) )
  {
    v4 = Sys_Milliseconds();
    updated = SvGameModeAppMP::UpdateServerDeltaTime(this, v4);
    if ( SvGameModeAppMP::UpdateServerTime(this, v4, updated) )
    {
      sv_demo.serverThreadStarted = 1;
      com_inServerFrame = 1;
      Sys_WakeServer();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      this->m_allowNetPackets = 1;
      Sys_ThreadsMP_SetServerAllowNetworkEvent();
    }
    if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_svUpdateState) )
      __debugbreak();
    _InterlockedExchange(p_m_svUpdateState, 0);
  }
}

/*
==============
SvGameModeAppMP::UpdateServerTimeFromServer
==============
*/
void SvGameModeAppMP::UpdateServerTimeFromServer(SvGameModeAppMP *this)
{
  volatile __int32 *p_m_svUpdateState; 
  int v3; 
  int updated; 

  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3830, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  p_m_svUpdateState = &this->m_svUpdateState;
  if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_svUpdateState) )
    __debugbreak();
  if ( !_InterlockedCompareExchange(p_m_svUpdateState, 1, 0) )
  {
    v3 = Sys_Milliseconds();
    updated = SvGameModeAppMP::UpdateServerDeltaTime(this, v3);
    if ( SvGameModeAppMP::UpdateServerTime(this, v3, updated) )
    {
      Sys_WakeServerFromServer();
      if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3535, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
        __debugbreak();
      this->m_allowNetPackets = 1;
      Sys_ThreadsMP_SetServerAllowNetworkEvent();
    }
    if ( (((_BYTE)this + 28) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_svUpdateState) )
      __debugbreak();
    _InterlockedExchange(p_m_svUpdateState, 0);
  }
}

/*
==============
SvGameModeAppMP::WaitServer
==============
*/
void SvGameModeAppMP::WaitServer(SvGameModeAppMP *this, void (*waitFunction)())
{
  const scrContext_t *v4; 
  int time; 
  bool v6; 
  __int64 v7; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3394, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = ScriptContext_Server();
  if ( (Sys_IsRemoteDebugServer(v4) || !Scr_NoWaitServer(v4)) && (com_inServerFrame || Com_IsAnyLocalServerStartingAsync()) )
  {
    com_inServerFrame = 0;
    if ( !Com_IsAnyLocalServerRunning() && !Com_IsAnyLocalServerStartingAsync() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3416, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerRunning() || Com_IsAnyLocalServerStartingAsync())", "%s\n\tMust either have a server running or starting to be inServerFrame", "Com_IsAnyLocalServerRunning() || Com_IsAnyLocalServerStartingAsync()") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "wait server");
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3516, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    this->m_allowNetPackets = 0;
    Sys_ThreadsMP_WaitServerNetworkCompleted();
    Sys_ThreadsMP_ResetServerAllowNetworkEvent();
    Sys_ThreadsMP_SetServerAllowNetworkEvent();
    sv_demo.serverThreadStarted = 0;
    Sys_ProfBeginNamedEvent(0xFFFFFFFu, "AsyncServerStart_Wait");
    while ( 1 )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2881, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      SvGameModeAppMP::ServerStart_CheckFinalizeRequest(this);
      SvGameModeAppMP::AsyncServerRestart_CheckFinalizeRequest(this);
      if ( s_svMainMP_serverProcessControl.requestedState != 1 && s_svMainMP_serverProcessControl.requestedState != 2 && s_svMainMP_serverProcessControl.requestedState != 3 && s_svMainMP_serverProcessControl.requestedState != 4 )
        break;
      Com_CheckSyncFrame();
      if ( waitFunction )
        waitFunction();
      Sys_Sleep(1);
    }
    if ( s_svMainMP_serverProcessControl.requestedState )
    {
      LODWORD(v7) = s_svMainMP_serverProcessControl.requestedState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 2896, ASSERT_TYPE_ASSERT, "( s_svMainMP_serverProcessControl.requestedState ) == ( static_cast<int>( ServerAsyncStartState::IDLE ) )", "s_svMainMP_serverProcessControl.requestedState == static_cast<int>( ServerAsyncStartState::IDLE )\n\t%i, %i", v7, 0i64) )
        __debugbreak();
    }
    Sys_ProfEndNamedEvent();
    while ( 1 )
    {
      while ( !Sys_WaitServer() )
      {
        Com_CheckSyncFrame();
        if ( waitFunction )
          waitFunction();
      }
      if ( !Com_IsAnyLocalServerRunning() )
        break;
      while ( SV_UserMoveWorkersMP_IsClientThinkWorkPending() )
      {
        Com_CheckSyncFrame();
        if ( waitFunction )
          waitFunction();
        Sys_Sleep(1);
      }
      SV_UserMoveWorkersMP_FinishClientThinkCmds();
      time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
      v6 = time == this->m_svLevelTime;
      if ( time > this->m_svLevelTime )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_main_mp.cpp", 3470, ASSERT_TYPE_ASSERT, "(currentTime <= m_svLevelTime)", (const char *)&queryFormat, "currentTime <= m_svLevelTime") )
          __debugbreak();
        v6 = time == this->m_svLevelTime;
      }
      if ( v6 || Com_ErrorEntered() )
        break;
      Sys_WakeServer();
      Com_CheckSyncFrame();
      if ( waitFunction )
        waitFunction();
      Sys_Sleep(1);
    }
    Sys_ProfEndNamedEvent();
  }
}

