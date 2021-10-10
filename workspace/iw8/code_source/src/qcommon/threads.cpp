/*
==============
Sys_ShutdownThreadDone
==============
*/

void __fastcall Sys_ShutdownThreadDone(ThreadContext threadContext)
{
  ?Sys_ShutdownThreadDone@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_ReleaseThreadOwnership
==============
*/

void Sys_ReleaseThreadOwnership(void)
{
  ?Sys_ReleaseThreadOwnership@@YAXXZ();
}

/*
==============
Sys_WaitGameSaveEvent
==============
*/

void Sys_WaitGameSaveEvent(void)
{
  ?Sys_WaitGameSaveEvent@@YAXXZ();
}

/*
==============
Sys_IsServerThread
==============
*/

bool __fastcall Sys_IsServerThread()
{
  return ?Sys_IsServerThread@@YA_NXZ();
}

/*
==============
Sys_AreThreadsSuspended
==============
*/

int __fastcall Sys_AreThreadsSuspended()
{
  return ?Sys_AreThreadsSuspended@@YAHXZ();
}

/*
==============
Sys_ResetEvent
==============
*/

void __fastcall Sys_ResetEvent(void **event)
{
  ?Sys_ResetEvent@@YAXPEAPEAX@Z(event);
}

/*
==============
Sys_IsRendererReady2
==============
*/

bool __fastcall Sys_IsRendererReady2(void *__formal)
{
  return ?Sys_IsRendererReady2@@YA_NPEAX@Z(__formal);
}

/*
==============
Sys_DatabaseStopServerAndWait
==============
*/

void Sys_DatabaseStopServerAndWait(void)
{
  ?Sys_DatabaseStopServerAndWait@@YAXXZ();
}

/*
==============
Sys_SetThreadContext
==============
*/

void __fastcall Sys_SetThreadContext(ThreadContext threadContext)
{
  ?Sys_SetThreadContext@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_SetSaveHistoryDoneEvent
==============
*/

void Sys_SetSaveHistoryDoneEvent(void)
{
  ?Sys_SetSaveHistoryDoneEvent@@YAXXZ();
}

/*
==============
Sys_CheckForSaveHistory
==============
*/

int __fastcall Sys_CheckForSaveHistory()
{
  return ?Sys_CheckForSaveHistory@@YAHXZ();
}

/*
==============
Sys_CheckPauseWorkerCmd
==============
*/

void Sys_CheckPauseWorkerCmd(void)
{
  ?Sys_CheckPauseWorkerCmd@@YAXXZ();
}

/*
==============
Sys_GetSoundThreadHandle
==============
*/

void *__fastcall Sys_GetSoundThreadHandle(ThreadContext context)
{
  return ?Sys_GetSoundThreadHandle@@YAPEAXW4ThreadContext@@@Z(context);
}

/*
==============
Sys_WakeDatabaseThread
==============
*/

void Sys_WakeDatabaseThread(void)
{
  ?Sys_WakeDatabaseThread@@YAXXZ();
}

/*
==============
Sys_WaitSaveTasksEvent
==============
*/

void Sys_WaitSaveTasksEvent(void)
{
  ?Sys_WaitSaveTasksEvent@@YAXXZ();
}

/*
==============
Sys_WaitForSingleObjectTimeout
==============
*/

int __fastcall Sys_WaitForSingleObjectTimeout(void **event, unsigned int msec)
{
  return ?Sys_WaitForSingleObjectTimeout@@YAHPEAPEAXI@Z(event, msec);
}

/*
==============
Sys_SpawnDatabaseThread
==============
*/

bool __fastcall Sys_SpawnDatabaseThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnDatabaseThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_ThreadsMP_ResetServerNetworkCompletedEvent
==============
*/

void Sys_ThreadsMP_ResetServerNetworkCompletedEvent(void)
{
  ?Sys_ThreadsMP_ResetServerNetworkCompletedEvent@@YAXXZ();
}

/*
==============
Sys_CheckNextFrameDataBackendSetupDone
==============
*/

bool __fastcall Sys_CheckNextFrameDataBackendSetupDone(void *__formal)
{
  return ?Sys_CheckNextFrameDataBackendSetupDone@@YA_NPEAX@Z(__formal);
}

/*
==============
Sys_ResumeThreadForShutdown
==============
*/

void __fastcall Sys_ResumeThreadForShutdown(ThreadContext threadContext)
{
  ?Sys_ResumeThreadForShutdown@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_InitCmdEvents
==============
*/

void Sys_InitCmdEvents(void)
{
  ?Sys_InitCmdEvents@@YAXXZ();
}

/*
==============
Sys_WaitServer
==============
*/

int __fastcall Sys_WaitServer()
{
  return ?Sys_WaitServer@@YAHXZ();
}

/*
==============
Sys_ThreadsMP_SetServerNetworkCompletedEvent
==============
*/

void Sys_ThreadsMP_SetServerNetworkCompletedEvent(void)
{
  ?Sys_ThreadsMP_SetServerNetworkCompletedEvent@@YAXXZ();
}

/*
==============
Sys_GetCurrentThreadId
==============
*/

threadId_t __fastcall Sys_GetCurrentThreadId()
{
  return ?Sys_GetCurrentThreadId@@YA?AW4threadId_t@@XZ();
}

/*
==============
Sys_CreateEvent
==============
*/

void __fastcall Sys_CreateEvent(int manualReset, int initialState, void **event)
{
  ?Sys_CreateEvent@@YAXHHPEAPEAX@Z(manualReset, initialState, event);
}

/*
==============
Sys_StartRenderer
==============
*/

void Sys_StartRenderer(void)
{
  ?Sys_StartRenderer@@YAXXZ();
}

/*
==============
Sys_SpawnGPUInterruptThread
==============
*/

bool __fastcall Sys_SpawnGPUInterruptThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnGPUInterruptThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_ThreadMain
==============
*/

unsigned int __fastcall Sys_ThreadMain(void *parameter)
{
  return ?Sys_ThreadMain@@YAKPEAX@Z(parameter);
}

/*
==============
Sys_PushUnblockDatabaseThread
==============
*/

void Sys_PushUnblockDatabaseThread(void)
{
  ?Sys_PushUnblockDatabaseThread@@YAXXZ();
}

/*
==============
Sys_SetGameSaveEvent
==============
*/

void Sys_SetGameSaveEvent(void)
{
  ?Sys_SetGameSaveEvent@@YAXXZ();
}

/*
==============
Sys_IsServerClientFrameWorker
==============
*/

bool __fastcall Sys_IsServerClientFrameWorker()
{
  return ?Sys_IsServerClientFrameWorker@@YA_NXZ();
}

/*
==============
Sys_IsWorkerThread
==============
*/

bool __fastcall Sys_IsWorkerThread(unsigned int workerIndex)
{
  return ?Sys_IsWorkerThread@@YA_NI@Z(workerIndex);
}

/*
==============
Sys_SaveGameSecondaryThreadExists
==============
*/

bool __fastcall Sys_SaveGameSecondaryThreadExists()
{
  return ?Sys_SaveGameSecondaryThreadExists@@YA_NXZ();
}

/*
==============
Sys_NotifyNextFrameDataBackendSetupDone
==============
*/

void Sys_NotifyNextFrameDataBackendSetupDone(void)
{
  ?Sys_NotifyNextFrameDataBackendSetupDone@@YAXXZ();
}

/*
==============
Sys_ThreadsMP_WaitAllowServerNetworkLoop
==============
*/

void Sys_ThreadsMP_WaitAllowServerNetworkLoop(void)
{
  ?Sys_ThreadsMP_WaitAllowServerNetworkLoop@@YAXXZ();
}

/*
==============
Sys_StopRenderer
==============
*/

void Sys_StopRenderer(void)
{
  ?Sys_StopRenderer@@YAXXZ();
}

/*
==============
Sys_IsServerUserMoveWorker
==============
*/

bool __fastcall Sys_IsServerUserMoveWorker()
{
  return ?Sys_IsServerUserMoveWorker@@YA_NXZ();
}

/*
==============
Sys_IsAnyWorkerContext
==============
*/

bool __fastcall Sys_IsAnyWorkerContext()
{
  return ?Sys_IsAnyWorkerContext@@YA_NXZ();
}

/*
==============
Sys_ThreadsSP_WaitServerSnapshot
==============
*/

int __fastcall Sys_ThreadsSP_WaitServerSnapshot()
{
  return ?Sys_ThreadsSP_WaitServerSnapshot@@YAHXZ();
}

/*
==============
Sys_InitThread
==============
*/

void __fastcall Sys_InitThread(ThreadContext threadContext)
{
  ?Sys_InitThread@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_UnblockDatabaseThread
==============
*/

void Sys_UnblockDatabaseThread(void)
{
  ?Sys_UnblockDatabaseThread@@YAXXZ();
}

/*
==============
Sys_IsDatabaseThreadAndActivelyLoading
==============
*/

bool __fastcall Sys_IsDatabaseThreadAndActivelyLoading()
{
  return ?Sys_IsDatabaseThreadAndActivelyLoading@@YA_NXZ();
}

/*
==============
Sys_IsMainThreadEntityWorker
==============
*/

bool __fastcall Sys_IsMainThreadEntityWorker()
{
  return ?Sys_IsMainThreadEntityWorker@@YA_NXZ();
}

/*
==============
Sys_ThreadIsShutdownRequested
==============
*/

bool __fastcall Sys_ThreadIsShutdownRequested(ThreadContext threadContext)
{
  return ?Sys_ThreadIsShutdownRequested@@YA_NW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_WaitStatsWriteEvent
==============
*/

void Sys_WaitStatsWriteEvent(void)
{
  ?Sys_WaitStatsWriteEvent@@YAXXZ();
}

/*
==============
Sys_YieldWorkerCmd
==============
*/

void Sys_YieldWorkerCmd(void)
{
  ?Sys_YieldWorkerCmd@@YAXXZ();
}

/*
==============
Sys_ClearThreadShutdownRequest
==============
*/

void __fastcall Sys_ClearThreadShutdownRequest(ThreadContext threadContext)
{
  ?Sys_ClearThreadShutdownRequest@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_TempThreadPriorityNormalBegin
==============
*/

void __fastcall Sys_TempThreadPriorityNormalBegin(TempThreadPriority *tempPriority)
{
  ?Sys_TempThreadPriorityNormalBegin@@YAXPEAUTempThreadPriority@@@Z(tempPriority);
}

/*
==============
Sys_SpawnBootTimeTaskThread
==============
*/

bool __fastcall Sys_SpawnBootTimeTaskThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnBootTimeTaskThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_WaitForDatabaseThreadWake
==============
*/

void Sys_WaitForDatabaseThreadWake(void)
{
  ?Sys_WaitForDatabaseThreadWake@@YAXXZ();
}

/*
==============
Sys_SpawnDecodeThread
==============
*/

void __fastcall Sys_SpawnDecodeThread(void (__fastcall *function)(unsigned int))
{
  ?Sys_SpawnDecodeThread@@YAXP6AXI@Z@Z(function);
}

/*
==============
Sys_PLM_SetConstrainedProcIds
==============
*/

void Sys_PLM_SetConstrainedProcIds(void)
{
  ?Sys_PLM_SetConstrainedProcIds@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_DisallowSendClientMessages
==============
*/

void Sys_ThreadsSP_DisallowSendClientMessages(void)
{
  ?Sys_ThreadsSP_DisallowSendClientMessages@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_CanSendClientMessages
==============
*/

int __fastcall Sys_ThreadsSP_CanSendClientMessages()
{
  return ?Sys_ThreadsSP_CanSendClientMessages@@YAHXZ();
}

/*
==============
Sys_CheckBackendEvent
==============
*/

bool __fastcall Sys_CheckBackendEvent(void *__formal)
{
  return ?Sys_CheckBackendEvent@@YA_NPEAX@Z(__formal);
}

/*
==============
Sys_SpawnFileStreamThread
==============
*/

bool __fastcall Sys_SpawnFileStreamThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnFileStreamThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_ResetNextFrameDataBackendSetupDone
==============
*/

void Sys_ResetNextFrameDataBackendSetupDone(void)
{
  ?Sys_ResetNextFrameDataBackendSetupDone@@YAXXZ();
}

/*
==============
Sys_TitleServerThreadData
==============
*/

void Sys_TitleServerThreadData(void)
{
  ?Sys_TitleServerThreadData@@YAXXZ();
}

/*
==============
Sys_SetSaveGameSecondaryEvent
==============
*/

void Sys_SetSaveGameSecondaryEvent(void)
{
  ?Sys_SetSaveGameSecondaryEvent@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_ClientMessageReceived
==============
*/

void Sys_ThreadsSP_ClientMessageReceived(void)
{
  ?Sys_ThreadsSP_ClientMessageReceived@@YAXXZ();
}

/*
==============
Sys_GetCurrentThreadContext
==============
*/

ThreadContext __fastcall Sys_GetCurrentThreadContext()
{
  return ?Sys_GetCurrentThreadContext@@YA?AW4ThreadContext@@XZ();
}

/*
==============
Sys_ThreadsMP_ResetServerAllowNetworkEvent
==============
*/

void Sys_ThreadsMP_ResetServerAllowNetworkEvent(void)
{
  ?Sys_ThreadsMP_ResetServerAllowNetworkEvent@@YAXXZ();
}

/*
==============
Sys_ThreadsMP_SetServerAllowNetworkEvent
==============
*/

void Sys_ThreadsMP_SetServerAllowNetworkEvent(void)
{
  ?Sys_ThreadsMP_SetServerAllowNetworkEvent@@YAXXZ();
}

/*
==============
Sys_IsBackendOwnerThread
==============
*/

bool __fastcall Sys_IsBackendOwnerThread()
{
  return ?Sys_IsBackendOwnerThread@@YA_NXZ();
}

/*
==============
Sys_JoinIndyFsWorkerThread
==============
*/

void __fastcall Sys_JoinIndyFsWorkerThread(ThreadContext threadContext)
{
  ?Sys_JoinIndyFsWorkerThread@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_GameSaveThreadExists
==============
*/

bool __fastcall Sys_GameSaveThreadExists()
{
  return ?Sys_GameSaveThreadExists@@YA_NXZ();
}

/*
==============
Sys_SyncDatabaseWithPump
==============
*/

void Sys_SyncDatabaseWithPump(void)
{
  ?Sys_SyncDatabaseWithPump@@YAXXZ();
}

/*
==============
Sys_CloseEvent
==============
*/

void __fastcall Sys_CloseEvent(void **event)
{
  ?Sys_CloseEvent@@YAXPEAPEAX@Z(event);
}

/*
==============
Sys_ClearSoundThread
==============
*/

void __fastcall Sys_ClearSoundThread(ThreadContext context)
{
  ?Sys_ClearSoundThread@@YAXW4ThreadContext@@@Z(context);
}

/*
==============
Sys_FileStreamAsyncSleep
==============
*/

void Sys_FileStreamAsyncSleep(void)
{
  ?Sys_FileStreamAsyncSleep@@YAXXZ();
}

/*
==============
Sys_GetValue
==============
*/

void *__fastcall Sys_GetValue(int valueIndex)
{
  return ?Sys_GetValue@@YAPEAXH@Z(valueIndex);
}

/*
==============
Sys_ShutdownThread
==============
*/

void __fastcall Sys_ShutdownThread(ThreadContext threadContext)
{
  ?Sys_ShutdownThread@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_SuspendOtherThreads
==============
*/

void Sys_SuspendOtherThreads(void)
{
  ?Sys_SuspendOtherThreads@@YAXXZ();
}

/*
==============
Sys_SetDatabaseReady
==============
*/

void Sys_SetDatabaseReady(void)
{
  ?Sys_SetDatabaseReady@@YAXXZ();
}

/*
==============
Sys_WakeServer
==============
*/

void Sys_WakeServer(void)
{
  ?Sys_WakeServer@@YAXXZ();
}

/*
==============
Sys_SpawnIndyFsWorkerThread
==============
*/

bool __fastcall Sys_SpawnIndyFsWorkerThread(void (__fastcall *function)(unsigned int), ThreadContext threadContext)
{
  return ?Sys_SpawnIndyFsWorkerThread@@YA_NP6AXI@ZW4ThreadContext@@@Z(function, threadContext);
}

/*
==============
Sys_QueryFileStreamPaused
==============
*/

bool __fastcall Sys_QueryFileStreamPaused()
{
  return ?Sys_QueryFileStreamPaused@@YA_NXZ();
}

/*
==============
Sys_IsServerSnapshotWorker
==============
*/

bool __fastcall Sys_IsServerSnapshotWorker()
{
  return ?Sys_IsServerSnapshotWorker@@YA_NXZ();
}

/*
==============
Sys_TempThreadPriorityAtLeastNormalBegin
==============
*/

void __fastcall Sys_TempThreadPriorityAtLeastNormalBegin(TempThreadPriority *tempPriority)
{
  ?Sys_TempThreadPriorityAtLeastNormalBegin@@YAXPEAUTempThreadPriority@@@Z(tempPriority);
}

/*
==============
Sys_IsUpdateScreenThread
==============
*/

bool __fastcall Sys_IsUpdateScreenThread()
{
  return ?Sys_IsUpdateScreenThread@@YA_NXZ();
}

/*
==============
Sys_ResetWakeDatabaseThread
==============
*/

void Sys_ResetWakeDatabaseThread(void)
{
  ?Sys_ResetWakeDatabaseThread@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_AllowSendClientMessages
==============
*/

void Sys_ThreadsSP_AllowSendClientMessages(void)
{
  ?Sys_ThreadsSP_AllowSendClientMessages@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_ClearClientSaveComplete
==============
*/

void Sys_ThreadsSP_ClearClientSaveComplete(void)
{
  ?Sys_ThreadsSP_ClearClientSaveComplete@@YAXXZ();
}

/*
==============
Sys_SpawnWorkerThread
==============
*/

bool __fastcall Sys_SpawnWorkerThread(void (__fastcall *function)(unsigned int), unsigned int threadIndex)
{
  return ?Sys_SpawnWorkerThread@@YA_NP6AXI@ZI@Z(function, threadIndex);
}

/*
==============
Sys_ResumeWorkerCmd
==============
*/

void Sys_ResumeWorkerCmd(void)
{
  ?Sys_ResumeWorkerCmd@@YAXXZ();
}

/*
==============
Sys_SpawnSaveGameSecondaryThread
==============
*/

void __fastcall Sys_SpawnSaveGameSecondaryThread(void (__fastcall *function)(unsigned int))
{
  ?Sys_SpawnSaveGameSecondaryThread@@YAXP6AXI@Z@Z(function);
}

/*
==============
Sys_ClearUpdateScreenThread
==============
*/

void Sys_ClearUpdateScreenThread(void)
{
  ?Sys_ClearUpdateScreenThread@@YAXXZ();
}

/*
==============
Sys_WaitForImageTrackingWake
==============
*/

void Sys_WaitForImageTrackingWake(void)
{
  ?Sys_WaitForImageTrackingWake@@YAXXZ();
}

/*
==============
Sys_SetSaveHistoryEvent
==============
*/

void Sys_SetSaveHistoryEvent(void)
{
  ?Sys_SetSaveHistoryEvent@@YAXXZ();
}

/*
==============
Sys_IsVideoStreamingThread
==============
*/

bool __fastcall Sys_IsVideoStreamingThread()
{
  return ?Sys_IsVideoStreamingThread@@YA_NXZ();
}

/*
==============
Sys_Sleep
==============
*/

void __fastcall Sys_Sleep(int msec)
{
  ?Sys_Sleep@@YAXH@Z(msec);
}

/*
==============
Sys_IsServerEntityFrameWorker
==============
*/

bool __fastcall Sys_IsServerEntityFrameWorker()
{
  return ?Sys_IsServerEntityFrameWorker@@YA_NXZ();
}

/*
==============
Sys_SuspendThread
==============
*/

void __fastcall Sys_SuspendThread(ThreadContext threadContext)
{
  ?Sys_SuspendThread@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_SpawnDevHostThread
==============
*/

bool __fastcall Sys_SpawnDevHostThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnDevHostThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_IsDatabaseReady
==============
*/

bool __fastcall Sys_IsDatabaseReady()
{
  return ?Sys_IsDatabaseReady@@YA_NXZ();
}

/*
==============
Sys_WaitForSaveHistoryDone
==============
*/

void Sys_WaitForSaveHistoryDone(void)
{
  ?Sys_WaitForSaveHistoryDone@@YAXXZ();
}

/*
==============
Sys_WakeImageTrackingThread
==============
*/

void Sys_WakeImageTrackingThread(void)
{
  ?Sys_WakeImageTrackingThread@@YAXXZ();
}

/*
==============
Sys_SetEvent
==============
*/

void __fastcall Sys_SetEvent(void **event)
{
  ?Sys_SetEvent@@YAXPEAPEAX@Z(event);
}

/*
==============
Sys_ResetStatsWriteEvent
==============
*/

void Sys_ResetStatsWriteEvent(void)
{
  ?Sys_ResetStatsWriteEvent@@YAXXZ();
}

/*
==============
Sys_IsDecodeThread
==============
*/

bool __fastcall Sys_IsDecodeThread()
{
  return ?Sys_IsDecodeThread@@YA_NXZ();
}

/*
==============
Sys_GetCpuCount
==============
*/

unsigned int __fastcall Sys_GetCpuCount()
{
  return ?Sys_GetCpuCount@@YAIXZ();
}

/*
==============
Sys_SpawnGameSaveThread
==============
*/

void __fastcall Sys_SpawnGameSaveThread(void (__fastcall *function)(unsigned int))
{
  ?Sys_SpawnGameSaveThread@@YAXP6AXI@Z@Z(function);
}

/*
==============
Sys_SyncDatabase
==============
*/

void Sys_SyncDatabase(void)
{
  ?Sys_SyncDatabase@@YAXXZ();
}

/*
==============
Sys_TLSInitialized
==============
*/

bool __fastcall Sys_TLSInitialized()
{
  return ?Sys_TLSInitialized@@YA_NXZ();
}

/*
==============
Sys_SpawnSoundThread
==============
*/

void __fastcall Sys_SpawnSoundThread(ThreadContext context, void (__fastcall *function)(unsigned int), int priority, int affinity)
{
  ?Sys_SpawnSoundThread@@YAXW4ThreadContext@@P6AXI@ZHH@Z(context, function, priority, affinity);
}

/*
==============
Sys_RenderCompleted
==============
*/

void Sys_RenderCompleted(void)
{
  ?Sys_RenderCompleted@@YAXXZ();
}

/*
==============
Sys_CheckIsCorrectDatabaseThreadAffinity
==============
*/

void Sys_CheckIsCorrectDatabaseThreadAffinity(void)
{
  ?Sys_CheckIsCorrectDatabaseThreadAffinity@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_ServerSnapshotCompleted
==============
*/

void Sys_ThreadsSP_ServerSnapshotCompleted(void)
{
  ?Sys_ThreadsSP_ServerSnapshotCompleted@@YAXXZ();
}

/*
==============
Sys_EnterUIOwnership
==============
*/

void Sys_EnterUIOwnership(void)
{
  ?Sys_EnterUIOwnership@@YAXXZ();
}

/*
==============
Sys_GetCurrentThreadContextName
==============
*/

const char *__fastcall Sys_GetCurrentThreadContextName()
{
  return ?Sys_GetCurrentThreadContextName@@YAPEBDXZ();
}

/*
==============
Sys_PLM_SetFullProcIds
==============
*/

void Sys_PLM_SetFullProcIds(void)
{
  ?Sys_PLM_SetFullProcIds@@YAXXZ();
}

/*
==============
Sys_LeaveUIOwnership
==============
*/

void Sys_LeaveUIOwnership(void)
{
  ?Sys_LeaveUIOwnership@@YAXXZ();
}

/*
==============
Sys_HasMainThreadReleasedBackendOwnership
==============
*/

bool __fastcall Sys_HasMainThreadReleasedBackendOwnership()
{
  return ?Sys_HasMainThreadReleasedBackendOwnership@@YA_NXZ();
}

/*
==============
Sys_SpawnVideoStreamingThread
==============
*/

bool __fastcall Sys_SpawnVideoStreamingThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnVideoStreamingThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_ShouldRenderThreadReleaseBackendOwnership
==============
*/

bool __fastcall Sys_ShouldRenderThreadReleaseBackendOwnership()
{
  return ?Sys_ShouldRenderThreadReleaseBackendOwnership@@YA_NXZ();
}

/*
==============
Sys_IsAnyWorkerThread
==============
*/

bool __fastcall Sys_IsAnyWorkerThread()
{
  return ?Sys_IsAnyWorkerThread@@YA_NXZ();
}

/*
==============
Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread
==============
*/

int __fastcall Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread()
{
  return ?Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread@@YAHXZ();
}

/*
==============
Sys_WaitForSingleObject
==============
*/

void __fastcall Sys_WaitForSingleObject(void **event)
{
  ?Sys_WaitForSingleObject@@YAXPEAPEAX@Z(event);
}

/*
==============
Sys_IsAnyServerThreadWork
==============
*/

bool __fastcall Sys_IsAnyServerThreadWork()
{
  return ?Sys_IsAnyServerThreadWork@@YA_NXZ();
}

/*
==============
Sys_IsRenderThread
==============
*/

bool __fastcall Sys_IsRenderThread()
{
  return ?Sys_IsRenderThread@@YA_NXZ();
}

/*
==============
Sys_SuspendWorkerCmd
==============
*/

void Sys_SuspendWorkerCmd(void)
{
  ?Sys_SuspendWorkerCmd@@YAXXZ();
}

/*
==============
Sys_SpawnServerDemoThread
==============
*/

bool __fastcall Sys_SpawnServerDemoThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnServerDemoThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_WaitNextFrameDataBackendSetupDone
==============
*/

void Sys_WaitNextFrameDataBackendSetupDone(void)
{
  ?Sys_WaitNextFrameDataBackendSetupDone@@YAXXZ();
}

/*
==============
Sys_AbortUIOwnership
==============
*/

void Sys_AbortUIOwnership(void)
{
  ?Sys_AbortUIOwnership@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_WaitClientMessageReceived
==============
*/

int __fastcall Sys_ThreadsSP_WaitClientMessageReceived()
{
  return ?Sys_ThreadsSP_WaitClientMessageReceived@@YAHXZ();
}

/*
==============
Sys_GetRenderThreadData
==============
*/

const GfxBackEndData *__fastcall Sys_GetRenderThreadData()
{
  return ?Sys_GetRenderThreadData@@YAPEBUGfxBackEndData@@XZ();
}

/*
==============
Sys_WakeRenderer
==============
*/

void __fastcall Sys_WakeRenderer(const GfxBackEndData *data)
{
  ?Sys_WakeRenderer@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
Sys_GetDatabaseStopServer
==============
*/

bool __fastcall Sys_GetDatabaseStopServer()
{
  return ?Sys_GetDatabaseStopServer@@YA_NXZ();
}

/*
==============
Sys_UpdateSoundThreadAffinities
==============
*/

void __fastcall Sys_UpdateSoundThreadAffinities(bool lowUse)
{
  ?Sys_UpdateSoundThreadAffinities@@YAX_N@Z(lowUse);
}

/*
==============
Sys_ThreadsSP_WaitClientSaveComplete
==============
*/

void Sys_ThreadsSP_WaitClientSaveComplete(void)
{
  ?Sys_ThreadsSP_WaitClientSaveComplete@@YAXXZ();
}

/*
==============
Sys_WakeFileStreamAsync
==============
*/

void Sys_WakeFileStreamAsync(void)
{
  ?Sys_WakeFileStreamAsync@@YAXXZ();
}

/*
==============
Sys_IsSafeBGWorker
==============
*/

bool __fastcall Sys_IsSafeBGWorker()
{
  return ?Sys_IsSafeBGWorker@@YA_NXZ();
}

/*
==============
Sys_SpawnSaveTasksThread
==============
*/

void __fastcall Sys_SpawnSaveTasksThread(void (__fastcall *function)(unsigned int))
{
  ?Sys_SpawnSaveTasksThread@@YAXP6AXI@Z@Z(function);
}

/*
==============
Sys_ThreadsSP_ClearClientMessage
==============
*/

void Sys_ThreadsSP_ClearClientMessage(void)
{
  ?Sys_ThreadsSP_ClearClientMessage@@YAXXZ();
}

/*
==============
Sys_ServerCompleted
==============
*/

void Sys_ServerCompleted(void)
{
  ?Sys_ServerCompleted@@YAXXZ();
}

/*
==============
Sys_IsMainThread
==============
*/

bool __fastcall Sys_IsMainThread()
{
  return ?Sys_IsMainThread@@YA_NXZ();
}

/*
==============
Sys_ThreadsMP_WaitServerNetworkCompleted
==============
*/

void Sys_ThreadsMP_WaitServerNetworkCompleted(void)
{
  ?Sys_ThreadsMP_WaitServerNetworkCompleted@@YAXXZ();
}

/*
==============
Sys_BlockDatabaseThread
==============
*/

void Sys_BlockDatabaseThread(void)
{
  ?Sys_BlockDatabaseThread@@YAXXZ();
}

/*
==============
Sys_ThreadsSP_ClientSaveCompleted
==============
*/

void Sys_ThreadsSP_ClientSaveCompleted(void)
{
  ?Sys_ThreadsSP_ClientSaveCompleted@@YAXXZ();
}

/*
==============
Sys_SetValue
==============
*/

void __fastcall Sys_SetValue(int valueIndex, void *data)
{
  ?Sys_SetValue@@YAXHPEAX@Z(valueIndex, data);
}

/*
==============
Sys_ShutdownThreadRequest
==============
*/

void __fastcall Sys_ShutdownThreadRequest(ThreadContext threadContext)
{
  ?Sys_ShutdownThreadRequest@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_IsFileStreamThread
==============
*/

bool __fastcall Sys_IsFileStreamThread()
{
  return ?Sys_IsFileStreamThread@@YA_NXZ();
}

/*
==============
Sys_SpawnStatsWriteThread
==============
*/

bool __fastcall Sys_SpawnStatsWriteThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnStatsWriteThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_WaitForWorkerCmd
==============
*/

void Sys_WaitForWorkerCmd(void)
{
  ?Sys_WaitForWorkerCmd@@YAXXZ();
}

/*
==============
Sys_SpawnImageTrackingThread
==============
*/

bool __fastcall Sys_SpawnImageTrackingThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnImageTrackingThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_SpawnNetworkThread
==============
*/

bool __fastcall Sys_SpawnNetworkThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnNetworkThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_TryInitBinkIOThread
==============
*/

void Sys_TryInitBinkIOThread(void)
{
  ?Sys_TryInitBinkIOThread@@YAXXZ();
}

/*
==============
Sys_SpawnServerThread
==============
*/

bool __fastcall Sys_SpawnServerThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnServerThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_InitServerEvents
==============
*/

void Sys_InitServerEvents(void)
{
  ?Sys_InitServerEvents@@YAXXZ();
}

/*
==============
Sys_GetPhysicalCoreCount
==============
*/

unsigned int __fastcall Sys_GetPhysicalCoreCount()
{
  return ?Sys_GetPhysicalCoreCount@@YAIXZ();
}

/*
==============
Sys_FileStreamSleep
==============
*/

void Sys_FileStreamSleep(void)
{
  ?Sys_FileStreamSleep@@YAXXZ();
}

/*
==============
Sys_IsNetworkThread
==============
*/

bool __fastcall Sys_IsNetworkThread()
{
  return ?Sys_IsNetworkThread@@YA_NXZ();
}

/*
==============
Sys_SetSaveTasksEvent
==============
*/

void Sys_SetSaveTasksEvent(void)
{
  ?Sys_SetSaveTasksEvent@@YAXXZ();
}

/*
==============
Sys_ResetWorkerCmdEvent
==============
*/

void Sys_ResetWorkerCmdEvent(void)
{
  ?Sys_ResetWorkerCmdEvent@@YAXXZ();
}

/*
==============
Sys_GetThreadContextName
==============
*/

const char *__fastcall Sys_GetThreadContextName(ThreadContext threadContext)
{
  return ?Sys_GetThreadContextName@@YAPEBDW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_HasValidCurrentThreadContext
==============
*/

bool __fastcall Sys_HasValidCurrentThreadContext()
{
  return ?Sys_HasValidCurrentThreadContext@@YA_NXZ();
}

/*
==============
Sys_SleepServer
==============
*/

void Sys_SleepServer(void)
{
  ?Sys_SleepServer@@YAXXZ();
}

/*
==============
Sys_TempThreadPriorityEnd
==============
*/

void __fastcall Sys_TempThreadPriorityEnd(const TempThreadPriority *tempPriority)
{
  ?Sys_TempThreadPriorityEnd@@YAXPEBUTempThreadPriority@@@Z(tempPriority);
}

/*
==============
Sys_SpawnRenderThread
==============
*/

bool __fastcall Sys_SpawnRenderThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnRenderThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_WaitForSaveHistory
==============
*/

void Sys_WaitForSaveHistory(void)
{
  ?Sys_WaitForSaveHistory@@YAXXZ();
}

/*
==============
Sys_SetStatsWriteEvent
==============
*/

void Sys_SetStatsWriteEvent(void)
{
  ?Sys_SetStatsWriteEvent@@YAXXZ();
}

/*
==============
Sys_IsRendererReady
==============
*/

bool __fastcall Sys_IsRendererReady(void *__formal)
{
  return ?Sys_IsRendererReady@@YA_NPEAX@Z(__formal);
}

/*
==============
Sys_IsMainThread2
==============
*/

bool __fastcall Sys_IsMainThread2()
{
  return ?Sys_IsMainThread2@@YA_NXZ();
}

/*
==============
Sys_SpawnFileStreamAsyncThread
==============
*/

bool __fastcall Sys_SpawnFileStreamAsyncThread(void (__fastcall *function)(unsigned int))
{
  return ?Sys_SpawnFileStreamAsyncThread@@YA_NP6AXI@Z@Z(function);
}

/*
==============
Sys_FrontEndSleep
==============
*/

void Sys_FrontEndSleep(void)
{
  ?Sys_FrontEndSleep@@YAXXZ();
}

/*
==============
Sys_InitMainThread
==============
*/

void Sys_InitMainThread(void)
{
  ?Sys_InitMainThread@@YAXXZ();
}

/*
==============
Sys_WakeServerFromServer
==============
*/

void Sys_WakeServerFromServer(void)
{
  ?Sys_WakeServerFromServer@@YAXXZ();
}

/*
==============
Sys_CheckSuspendThread
==============
*/

void Sys_CheckSuspendThread(void)
{
  ?Sys_CheckSuspendThread@@YAXXZ();
}

/*
==============
Sys_ResumeThread
==============
*/

void __fastcall Sys_ResumeThread(ThreadContext threadContext)
{
  ?Sys_ResumeThread@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_SetFileStreamAsyncPaused
==============
*/

void __fastcall Sys_SetFileStreamAsyncPaused(bool paused)
{
  ?Sys_SetFileStreamAsyncPaused@@YAX_N@Z(paused);
}

/*
==============
Sys_WaitForWorkerCmdWithTimeout
==============
*/

int __fastcall Sys_WaitForWorkerCmdWithTimeout()
{
  return ?Sys_WaitForWorkerCmdWithTimeout@@YAHXZ();
}

/*
==============
Sys_IsSoundThread
==============
*/

bool __fastcall Sys_IsSoundThread(ThreadContext context)
{
  return ?Sys_IsSoundThread@@YA_NW4ThreadContext@@@Z(context);
}

/*
==============
Sys_ResetDatabaseStopServer
==============
*/

void Sys_ResetDatabaseStopServer(void)
{
  ?Sys_ResetDatabaseStopServer@@YAXXZ();
}

/*
==============
Sys_SetUpdateScreenThread
==============
*/

void Sys_SetUpdateScreenThread(void)
{
  ?Sys_SetUpdateScreenThread@@YAXXZ();
}

/*
==============
Sys_SpawnIndyFsWorkerThread
==============
*/

bool __fastcall Sys_SpawnIndyFsWorkerThread(void (__fastcall *function)(unsigned int), ThreadContext threadContext, unsigned int affinityMask)
{
  return ?Sys_SpawnIndyFsWorkerThread@@YA_NP6AXI@ZW4ThreadContext@@I@Z(function, threadContext, affinityMask);
}

/*
==============
Sys_IsWritingStats
==============
*/

int __fastcall Sys_IsWritingStats()
{
  return ?Sys_IsWritingStats@@YAHXZ();
}

/*
==============
Sys_ThreadsSP_ServerSnapshotReset
==============
*/

void Sys_ThreadsSP_ServerSnapshotReset(void)
{
  ?Sys_ThreadsSP_ServerSnapshotReset@@YAXXZ();
}

/*
==============
Sys_WaitSaveGameSecondaryEvent
==============
*/

void Sys_WaitSaveGameSecondaryEvent(void)
{
  ?Sys_WaitSaveGameSecondaryEvent@@YAXXZ();
}

/*
==============
Sys_WaitForFileStream
==============
*/

void Sys_WaitForFileStream(void)
{
  ?Sys_WaitForFileStream@@YAXXZ();
}

/*
==============
Sys_ResetDatabaseReady
==============
*/

void Sys_ResetDatabaseReady(void)
{
  ?Sys_ResetDatabaseReady@@YAXXZ();
}

/*
==============
Sys_WakeFileStream
==============
*/

void Sys_WakeFileStream(void)
{
  ?Sys_WakeFileStream@@YAXXZ();
}

/*
==============
Sys_NotifyRenderer
==============
*/

void Sys_NotifyRenderer(void)
{
  ?Sys_NotifyRenderer@@YAXXZ();
}

/*
==============
Sys_PopUnblockDatabaseThread
==============
*/

void Sys_PopUnblockDatabaseThread(void)
{
  ?Sys_PopUnblockDatabaseThread@@YAXXZ();
}

/*
==============
Sys_IsGameSaveThread
==============
*/

bool __fastcall Sys_IsGameSaveThread()
{
  return ?Sys_IsGameSaveThread@@YA_NXZ();
}

/*
==============
Sys_IsDatabaseThread
==============
*/

bool __fastcall Sys_IsDatabaseThread()
{
  return ?Sys_IsDatabaseThread@@YA_NXZ();
}

/*
==============
Sys_ThreadIsShutdownDone
==============
*/

bool __fastcall Sys_ThreadIsShutdownDone(ThreadContext threadContext)
{
  return ?Sys_ThreadIsShutdownDone@@YA_NW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_ThreadExists
==============
*/

int __fastcall Sys_ThreadExists(ThreadContext threadContext)
{
  return ?Sys_ThreadExists@@YAHW4ThreadContext@@@Z(threadContext);
}

/*
==============
Sys_SetWorkerCmdEvent
==============
*/

void Sys_SetWorkerCmdEvent(void)
{
  ?Sys_SetWorkerCmdEvent@@YAXXZ();
}

/*
==============
Sys_WaitStartServer
==============
*/

int __fastcall Sys_WaitStartServer(const int timeout, const int interval)
{
  return ?Sys_WaitStartServer@@YAHHH@Z(timeout, interval);
}

/*
==============
Sys_AbortUIOwnership
==============
*/
void Sys_AbortUIOwnership(void)
{
  g_uiOwnership = 0;
  g_uiOwnershipThreadId = 0;
}

/*
==============
Sys_AreThreadsSuspended
==============
*/
__int64 Sys_AreThreadsSuspended()
{
  return (unsigned int)g_suspendThreads;
}

/*
==============
Sys_BlockDatabaseThread
==============
*/
void Sys_BlockDatabaseThread(void)
{
  __int64 v0; 

  Sys_CheckIsCorrectDatabaseThreadAffinity();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1008i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3452, ASSERT_TYPE_ASSERT, "(!g_blockDatabaseThread)", (const char *)&queryFormat, "!g_blockDatabaseThread") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( (*(_DWORD *)(v0 + 1004) || *(_BYTE *)(v0 + 996)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3453, ASSERT_TYPE_ASSERT, "(( s_pushUnblockCount == 0 ) && !s_pushUnblockActive)", (const char *)&queryFormat, "( s_pushUnblockCount == 0 ) && !s_pushUnblockActive") )
    __debugbreak();
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1008i64) = 1;
  ResetEvent(blockDatabaseEvent);
}

/*
==============
Sys_CheckBackendEvent
==============
*/
bool Sys_CheckBackendEvent(void *__formal)
{
  Sys_CheckSuspendThread();
  return WaitForSingleObject(s_backendEvent, 0) == 0;
}

/*
==============
Sys_CheckForSaveHistory
==============
*/
_BOOL8 Sys_CheckForSaveHistory()
{
  return WaitForSingleObject(g_saveHistoryEvent, 0) == 0;
}

/*
==============
Sys_CheckIsCorrectDatabaseThreadAffinity
==============
*/
void Sys_CheckIsCorrectDatabaseThreadAffinity(void)
{
  ThreadContext CurrentThreadContext; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  CurrentThreadContext = Sys_GetCurrentThreadContext();
  v1 = CurrentThreadContext;
  if ( (unsigned int)CurrentThreadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 933, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( ( sizeof( *array_counter( s_threadAffinitySet ) ) + 0 ) )", "threadContext doesn't index ARRAY_COUNT( s_threadAffinitySet )\n\t%i not in [0, %i)", CurrentThreadContext, 28) )
    __debugbreak();
  if ( s_threadAffinitySet[v1] )
  {
    if ( GetCurrentProcessorNumber() != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3439, ASSERT_TYPE_ASSERT, "(GetCurrentProcessorNumber() == 1)", (const char *)&queryFormat, "GetCurrentProcessorNumber() == DATABASE_PROCESSOR_ID") )
      __debugbreak();
  }
  else
  {
    v2 = tls_index;
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) == 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1731, ASSERT_TYPE_ASSERT, "(s_threadContext != INVALID_THREAD_CONTEXT)", (const char *)&queryFormat, "s_threadContext != INVALID_THREAD_CONTEXT") )
      __debugbreak();
    v3 = *(int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 1000i64);
    if ( (unsigned int)v3 >= 0x1C )
    {
      LODWORD(v5) = 28;
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2510, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    Com_Printf(16, "Thread '%s' affinity not set yet. This is probably ok if it's happening at bootup.\n", s_threadNames[v3]);
  }
}

/*
==============
Sys_CheckNextFrameDataBackendSetupDone
==============
*/
bool Sys_CheckNextFrameDataBackendSetupDone(void *__formal)
{
  Sys_CheckSuspendThread();
  return WaitForSingleObject(s_nextFrameDataBackendSetupDoneEvent, 0) == 0;
}

/*
==============
Sys_CheckPauseWorkerCmd
==============
*/
void Sys_CheckPauseWorkerCmd(void)
{
  Sys_CheckIsCorrectDatabaseThreadAffinity();
  if ( g_suspendWorkerThreadContext )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "yield database");
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Sys_Sleep");
    Sleep(0);
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Sys_CheckSuspendThread
==============
*/
void Sys_CheckSuspendThread(void)
{
  __int64 v0; 
  __int64 v1; 

  if ( g_suspendThreads )
  {
    v0 = tls_index;
    while ( 1 )
    {
      if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1008i64) && GetCurrentProcessorNumber() == 1 )
      {
        Com_PrintStackTrace();
        LODWORD(v1) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v1) )
          __debugbreak();
      }
      Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_Sleep");
      Sleep(1u);
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
Sys_ClearSoundThread
==============
*/
void Sys_ClearSoundThread(ThreadContext context)
{
  __int64 v1; 

  v1 = context;
  if ( context < THREAD_CONTEXT_AD_INTERFACE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3718, ASSERT_TYPE_ASSERT, "(context >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "context >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( (int)v1 > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3719, ASSERT_TYPE_ASSERT, "(context <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "context <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  threadHandle[v1] = NULL;
  threadFunc[v1] = NULL;
}

/*
==============
Sys_ClearThreadShutdownRequest
==============
*/
void Sys_ClearThreadShutdownRequest(__int64 threadContext)
{
  unsigned __int64 v1; 
  int v2; 
  int v3; 

  v1 = (int)threadContext;
  if ( (unsigned int)threadContext >= 0x1C )
  {
    v3 = 28;
    v2 = threadContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2499, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  if ( !threadShutdownRequestFlag[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2500, ASSERT_TYPE_ASSERT, "(threadShutdownRequestFlag[threadContext])", (const char *)&queryFormat, "threadShutdownRequestFlag[threadContext]") )
    __debugbreak();
  if ( !threadShutdownCompleteFlag[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2501, ASSERT_TYPE_ASSERT, "(threadShutdownCompleteFlag[threadContext])", (const char *)&queryFormat, "threadShutdownCompleteFlag[threadContext]") )
    __debugbreak();
  if ( v1 >= 0x1C )
  {
    j___report_rangecheckfailure(threadContext);
    JUMPOUT(0x14141E0E2i64);
  }
  threadShutdownRequestFlag[v1] = 0;
  threadShutdownCompleteFlag[v1] = 0;
}

/*
==============
Sys_ClearUpdateScreenThread
==============
*/
void Sys_ClearUpdateScreenThread(void)
{
  if ( !s_updateScreenThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4671, ASSERT_TYPE_ASSERT, "(s_updateScreenThreadId != INVALID_THREAD_ID)", (const char *)&queryFormat, "s_updateScreenThreadId != INVALID_THREAD_ID") )
    __debugbreak();
  s_updateScreenThreadId = 0;
}

/*
==============
Sys_CloseEvent
==============
*/
void Sys_CloseEvent(void **event)
{
  CloseHandle(*event);
}

/*
==============
Sys_CreateEvent
==============
*/
void Sys_CreateEvent(int manualReset, int initialState, void **event)
{
  *event = CreateEventW(NULL, manualReset, initialState, NULL);
}

/*
==============
Sys_CreateThread
==============
*/
void Sys_CreateThread(void (*function)(unsigned int), unsigned int threadContext)
{
  unsigned __int64 v2; 
  SIZE_T v4; 

  v2 = threadContext;
  if ( threadFunc[threadContext] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1918, ASSERT_TYPE_ASSERT, "(threadFunc[threadContext] == 0)", (const char *)&queryFormat, "threadFunc[threadContext] == NULL") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1919, ASSERT_TYPE_ASSERT, "(threadContext < THREAD_CONTEXT_COUNT)", (const char *)&queryFormat, "threadContext < THREAD_CONTEXT_COUNT") )
    __debugbreak();
  v4 = s_threadStackSize[v2];
  threadFunc[v2] = function;
  threadHandle[v2] = CreateThread(NULL, v4, Sys_ThreadMain, (LPVOID)v2, 4u, (LPDWORD)&threadId[v2]);
}

/*
==============
Sys_DatabaseStopServerAndWait
==============
*/
void Sys_DatabaseStopServerAndWait(void)
{
  __int64 v0; 
  __int64 v1; 

  s_databaseStopServer = 1;
  if ( g_serverContextOwnership == 1 )
  {
    v0 = tls_index;
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1008i64) && GetCurrentProcessorNumber() == 1 )
      {
        Com_PrintStackTrace();
        LODWORD(v1) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v1) )
          __debugbreak();
      }
      Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_Sleep");
      Sleep(1u);
      Sys_ProfEndNamedEvent();
    }
    while ( g_serverContextOwnership == 1 );
  }
}

/*
==============
Sys_EnterUIOwnership
==============
*/
void Sys_EnterUIOwnership(void)
{
  if ( ((unsigned __int8)&g_uiOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_uiOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_uiOwnership) == 1 )
  {
    if ( g_uiOwnershipThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4625, ASSERT_TYPE_ASSERT, "( ( !g_uiOwnershipThreadId ) )", "( g_uiOwnershipThreadId ) = %zu", (unsigned int)g_uiOwnershipThreadId) )
      __debugbreak();
    g_uiOwnershipThreadId = Sys_GetCurrentThreadId();
  }
  if ( g_uiOwnershipThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4628, ASSERT_TYPE_ASSERT, "( ( g_uiOwnershipThreadId == Sys_GetCurrentThreadId() ) )", "( g_uiOwnershipThreadId ) = %zu", (unsigned int)g_uiOwnershipThreadId) )
    __debugbreak();
}

/*
==============
Sys_FileStreamAsyncSleep
==============
*/
void Sys_FileStreamAsyncSleep(void)
{
  DWORD v0; 
  DWORD LastError; 
  __int64 v2; 
  __int64 v3; 

  SetEvent(s_fileStreamAsyncCompletedEvent);
  SetEvent(s_fileStreamDatabasePausedReading);
  v0 = WaitForSingleObjectEx(s_fileStreamAsyncEvent, 0x10u, 1);
  if ( v0 && v0 != 128 && v0 != 192 && v0 != 258 )
  {
    if ( v0 == -1 )
    {
      LastError = GetLastError();
      Com_PrintError(35, "Sys_FileStreamAsyncSleep: WAIT_FIALED: error code = %d\n", LastError);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 5146, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    {
      __debugbreak();
    }
  }
  ResetEvent(s_fileStreamAsyncCompletedEvent);
  ResetEvent(s_fileStreamDatabasePausedReading);
  if ( s_fileStreamAsyncPaused )
  {
    v2 = tls_index;
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 1008i64) && GetCurrentProcessorNumber() == 1 )
      {
        Com_PrintStackTrace();
        LODWORD(v3) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v3) )
          __debugbreak();
      }
      Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_Sleep");
      Sleep(1u);
      Sys_ProfEndNamedEvent();
    }
    while ( s_fileStreamAsyncPaused );
  }
}

/*
==============
Sys_FileStreamSleep
==============
*/
void Sys_FileStreamSleep(void)
{
  DWORD v0; 
  DWORD v1; 

  SetEvent(s_fileStreamCompletedEvent);
  SetEvent(s_fileStreamDatabasePausedReading);
  do
    v0 = WaitForSingleObjectEx(s_fileStreamEvent, 0xFFFFFFFF, 1);
  while ( v0 == 192 );
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 5060, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
  ResetEvent(s_fileStreamCompletedEvent);
  ResetEvent(s_fileStreamDatabasePausedReading);
}

/*
==============
Sys_FrontEndSleep
==============
*/
void Sys_FrontEndSleep(void)
{
  DWORD v0; 
  signed __int32 v1; 
  DWORD v2; 
  __int64 v3; 

  Sys_ProfBeginNamedEvent(0xFFFFFF00, "frontend sleep");
  if ( Sys_GetCurrentThreadId() != threadId[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2540, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( WaitForSingleObject(noThreadOwnershipEvent, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2541, ASSERT_TYPE_ASSERT, "( Sys_WaitForSingleObjectTimeout( &noThreadOwnershipEvent, 0 ) )", "Main thread should not have back end ownership at this point!") )
    __debugbreak();
  if ( r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2542, ASSERT_TYPE_ASSERT, "(!r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "!r_glob.mainThreadHasOwnership") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_WaitForSingleObject( &rendererRunningEvent )");
  v0 = WaitForSingleObject(rendererRunningEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    LODWORD(v3) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v3) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  ResetEvent(noThreadOwnershipEvent);
  if ( !s_backendEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2602, ASSERT_TYPE_ASSERT, "(Sys_IsEventInitialized( s_backendEvent ))", (const char *)&queryFormat, "Sys_IsEventInitialized( s_backendEvent )") )
    __debugbreak();
  SetEvent(s_backendEvent);
  if ( ((unsigned __int8)&renderPausedCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&renderPausedCount) )
    __debugbreak();
  v1 = _InterlockedDecrement(&renderPausedCount);
  if ( (unsigned int)(v1 + 1) > 1 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2553, ASSERT_TYPE_ASSERT, "( ( (newCount == -1) || (newCount == 0) ) )", "( newCount ) = %i", v3) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_WaitForSingleObject( &renderPausedEvent )");
  v2 = WaitForSingleObject(renderPausedEvent, 0xFFFFFFFF);
  if ( v2 )
  {
    LODWORD(v3) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v3) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
Sys_GameSaveThreadExists
==============
*/
bool Sys_GameSaveThreadExists()
{
  return threadId[14] != 0;
}

/*
==============
Sys_GetCpuCount
==============
*/
__int64 Sys_GetCpuCount()
{
  return 6i64;
}

/*
==============
Sys_GetCurrentThreadContext
==============
*/
__int64 Sys_GetCurrentThreadContext()
{
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) == 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1722, ASSERT_TYPE_ASSERT, "(s_threadContext != INVALID_THREAD_CONTEXT)", (const char *)&queryFormat, "s_threadContext != INVALID_THREAD_CONTEXT") )
    __debugbreak();
  return *(unsigned int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64);
}

/*
==============
Sys_GetCurrentThreadContextName
==============
*/
const char *Sys_GetCurrentThreadContextName()
{
  __int64 v0; 
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v0 = tls_index;
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) == 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1731, ASSERT_TYPE_ASSERT, "(s_threadContext != INVALID_THREAD_CONTEXT)", (const char *)&queryFormat, "s_threadContext != INVALID_THREAD_CONTEXT") )
    __debugbreak();
  v1 = *(int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1000i64);
  if ( (unsigned int)v1 >= 0x1C )
  {
    v4 = 28;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2510, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_threadNames[v1];
}

/*
==============
Sys_GetCurrentThreadId
==============
*/
DWORD Sys_GetCurrentThreadId()
{
  DWORD result; 
  threadId_t v1; 

  result = GetCurrentThreadId();
  v1 = result;
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1115, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1116, ASSERT_TYPE_ASSERT, "( id != INVALID_THREAD_ID )", (const char *)&queryFormat, "id != INVALID_THREAD_ID") )
      __debugbreak();
    return v1;
  }
  return result;
}

/*
==============
Sys_GetDatabaseStopServer
==============
*/
_BOOL8 Sys_GetDatabaseStopServer()
{
  return s_databaseStopServer;
}

/*
==============
Sys_GetPhysicalCoreCount
==============
*/
__int64 Sys_GetPhysicalCoreCount()
{
  return 6i64;
}

/*
==============
Sys_GetRenderThreadData
==============
*/
const GfxBackEndData *Sys_GetRenderThreadData()
{
  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2619, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&smpData & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 107, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_ptr ) ) ) )", "( target ) = %p", (const void *)&smpData) )
    __debugbreak();
  return (const GfxBackEndData *)_InterlockedExchange64((volatile __int64 *)&smpData, 0i64);
}

/*
==============
Sys_GetSoundThreadHandle
==============
*/
void *Sys_GetSoundThreadHandle(ThreadContext context)
{
  __int64 v1; 
  bool v2; 
  void **v3; 

  v1 = context;
  if ( context < THREAD_CONTEXT_AD_INTERFACE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3681, ASSERT_TYPE_ASSERT, "(context >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "context >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( (int)v1 > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3682, ASSERT_TYPE_ASSERT, "(context <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "context <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  v2 = threadHandle[v1] == NULL;
  v3 = &threadHandle[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3684, ASSERT_TYPE_ASSERT, "(threadHandle[context])", (const char *)&queryFormat, "threadHandle[context]") )
    __debugbreak();
  return *v3;
}

/*
==============
Sys_GetThreadContextName
==============
*/
const char *Sys_GetThreadContextName(ThreadContext threadContext)
{
  __int64 v1; 
  int v4; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v4 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2510, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v4) )
      __debugbreak();
  }
  return s_threadNames[v1];
}

/*
==============
Sys_GetValue
==============
*/
void *Sys_GetValue(int valueIndex)
{
  __int64 v1; 

  v1 = valueIndex;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3334, ASSERT_TYPE_ASSERT, "( g_dwTlsIndex != 0 )", (const char *)&queryFormat, "g_dwTlsIndex != NULL") )
    __debugbreak();
  return *(void **)(*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) + 8 * v1);
}

/*
==============
Sys_HasMainThreadReleasedBackendOwnership
==============
*/
_BOOL8 Sys_HasMainThreadReleasedBackendOwnership()
{
  DWORD v0; 
  bool v1; 

  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2655, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  v0 = WaitForSingleObject(noThreadOwnershipEvent, 0);
  v1 = v0 == 0;
  if ( !v0 && r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2663, ASSERT_TYPE_ASSERT, "(!r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "!r_glob.mainThreadHasOwnership") )
    __debugbreak();
  return v1;
}

/*
==============
Sys_HasValidCurrentThreadContext
==============
*/
bool Sys_HasValidCurrentThreadContext()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) != 28;
}

/*
==============
Sys_InitCmdEvents
==============
*/
void Sys_InitCmdEvents(void)
{
  s_workerEvent = CreateEventW(NULL, 1, 0, NULL);
  blockDatabaseEvent = CreateEventW(NULL, 1, 1, NULL);
}

/*
==============
Sys_InitMainThread
==============
*/
void Sys_InitMainThread(void)
{
  __int64 v0; 
  HANDLE CurrentProcess; 
  HANDLE CurrentThread; 
  void *v3; 
  int v4; 
  int v5; 

  threadId[0] = Sys_GetCurrentThreadId();
  v0 = 8i64 * tls_index;
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 1000i64) = 0;
  CurrentProcess = GetCurrentProcess();
  CurrentThread = GetCurrentThread();
  DuplicateHandle(CurrentProcess, CurrentThread, CurrentProcess, threadHandle, 0, 0, 2u);
  v3 = threadHandle[0];
  SetThreadAffinityMask(threadHandle[0], 1ui64);
  Sys_MarkAffinitySetBool(v3);
  Sys_MarkAffinitySetBool(v3);
  Sys_SetThreadName(threadHandle[0], s_threadNames[0]);
  __asm { vstmxcsr [rsp+0E8h+arg_0] }
  v4 |= 0x40u;
  __asm
  {
    vldmxcsr [rsp+0E8h+arg_0]
    vstmxcsr [rsp+0E8h+arg_0]
  }
  v5 |= 0x8000u;
  __asm { vldmxcsr [rsp+0E8h+arg_0] }
  *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 1016i64) = g_threadValues;
  Com_InitThreadData(THREAD_CONTEXT_MAIN);
}

/*
==============
Sys_InitServerEvents
==============
*/
void Sys_InitServerEvents(void)
{
  g_mainThreadRequestServerOwnership = 1;
  SetEvent(allowSendClientMessagesEvent);
  ResetEvent(serverSnapshotEvent);
  SetEvent(clientMessageReceived);
  SetEvent(clientSaveComplete);
  SetEvent(allowServerNetworkEvent);
  SetEvent(serverNetworkCompletedEvent);
  g_networkOverrideThread = 0;
}

/*
==============
Sys_InitThread
==============
*/
void Sys_InitThread(ThreadContext threadContext)
{
  __int64 v1; 

  v1 = threadContext;
  if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1849, ASSERT_TYPE_ASSERT, "(!g_dwTlsIndex)", (const char *)&queryFormat, "!g_dwTlsIndex") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) = g_threadValues[v1];
  Com_InitThreadData((ThreadContext)v1);
  Profile_InitContext(v1);
}

/*
==============
Sys_IsAnyServerThreadWork
==============
*/
bool Sys_IsAnyServerThreadWork()
{
  int v0; 

  v0 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64);
  if ( v0 == -1 )
    return Sys_GetCurrentThreadId() == threadId[5];
  return (unsigned int)(v0 - 136) <= 1 || ((v0 - 139) & 0xFFFFFFFC) == 0 && v0 != 140 || v0 == 138 || v0 >= 125 && (v0 <= 126 || (unsigned int)(v0 - 128) <= 7);
}

/*
==============
Sys_IsAnyWorkerContext
==============
*/
bool Sys_IsAnyWorkerContext()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) != -1;
}

/*
==============
Sys_IsAnyWorkerThread
==============
*/
char Sys_IsAnyWorkerThread()
{
  threadId_t CurrentThreadId; 
  int v1; 

  CurrentThreadId = Sys_GetCurrentThreadId();
  v1 = 0;
  while ( CurrentThreadId != threadId[v1 + 2] )
  {
    if ( (unsigned int)++v1 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
Sys_IsBackendOwnerThread
==============
*/
bool Sys_IsBackendOwnerThread()
{
  if ( Sys_GetCurrentThreadId() == threadId[0] )
    return !r_glob.startedRenderThread || r_glob.mainThreadHasOwnership;
  if ( Sys_GetCurrentThreadId() != threadId[1] )
    return 0;
  if ( !r_glob.startedRenderThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2704, ASSERT_TYPE_ASSERT, "(r_glob.startedRenderThread)", (const char *)&queryFormat, "r_glob.startedRenderThread") )
    __debugbreak();
  return !r_glob.mainThreadHasOwnership;
}

/*
==============
Sys_IsDatabaseReady
==============
*/
bool Sys_IsDatabaseReady()
{
  return WaitForSingleObject(s_databaseReadyEvent, 0) == 0;
}

/*
==============
Sys_IsDatabaseThread
==============
*/
bool Sys_IsDatabaseThread()
{
  return Sys_GetCurrentThreadId() == threadId[7];
}

/*
==============
Sys_IsDatabaseThreadAndActivelyLoading
==============
*/
bool Sys_IsDatabaseThreadAndActivelyLoading()
{
  return Sys_GetCurrentThreadId() == threadId[7] && DB_GetWorkPeriod() == (Flushing|ReadyToFlush);
}

/*
==============
Sys_IsDecodeThread
==============
*/
bool Sys_IsDecodeThread()
{
  return Sys_GetCurrentThreadId() == threadId[12];
}

/*
==============
Sys_IsFileStreamThread
==============
*/
bool Sys_IsFileStreamThread()
{
  threadId_t CurrentThreadId; 

  CurrentThreadId = Sys_GetCurrentThreadId();
  return CurrentThreadId == threadId[22] || CurrentThreadId == threadId[23];
}

/*
==============
Sys_IsGameSaveThread
==============
*/
bool Sys_IsGameSaveThread()
{
  return Sys_GetCurrentThreadId() == threadId[14];
}

/*
==============
Sys_IsMainThread2
==============
*/
bool Sys_IsMainThread2()
{
  return Sys_GetCurrentThreadId() == threadId[0] || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) == 64;
}

/*
==============
Sys_IsMainThread
==============
*/
bool Sys_IsMainThread()
{
  return Sys_GetCurrentThreadId() == threadId[0];
}

/*
==============
Sys_IsMainThreadEntityWorker
==============
*/
bool Sys_IsMainThreadEntityWorker()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) == 111;
}

/*
==============
Sys_IsNetworkThread
==============
*/
bool Sys_IsNetworkThread()
{
  return Sys_GetCurrentThreadId() == threadId[6];
}

/*
==============
Sys_IsRenderThread
==============
*/
bool Sys_IsRenderThread()
{
  return Sys_GetCurrentThreadId() == threadId[1];
}

/*
==============
Sys_IsRendererReady2
==============
*/
bool Sys_IsRendererReady2(void *__formal)
{
  volatile int v2; 

  if ( (unsigned int)g_renderWaitCount > 2 )
  {
    v2 = g_renderWaitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2572, ASSERT_TYPE_ASSERT, "( ( (renderWaitCount == 0) || (renderWaitCount == 1) || (renderWaitCount == 2) ) )", "( renderWaitCount ) = %i", v2) )
      __debugbreak();
  }
  return g_renderWaitCount <= 1;
}

/*
==============
Sys_IsRendererReady
==============
*/
bool Sys_IsRendererReady(void *__formal)
{
  return smpData == NULL;
}

/*
==============
Sys_IsSafeBGWorker
==============
*/
bool Sys_IsSafeBGWorker()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) == 150;
}

/*
==============
Sys_IsServerClientFrameWorker
==============
*/
bool Sys_IsServerClientFrameWorker()
{
  int v0; 

  v0 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64);
  return ((v0 - 139) & 0xFFFFFFFC) == 0 && v0 != 140;
}

/*
==============
Sys_IsServerEntityFrameWorker
==============
*/
bool Sys_IsServerEntityFrameWorker()
{
  return *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) == 138;
}

/*
==============
Sys_IsServerSnapshotWorker
==============
*/
bool Sys_IsServerSnapshotWorker()
{
  int v0; 

  v0 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64);
  return v0 >= 125 && (v0 <= 126 || (unsigned int)(v0 - 128) <= 7);
}

/*
==============
Sys_IsServerThread
==============
*/
bool Sys_IsServerThread()
{
  return Sys_GetCurrentThreadId() == threadId[5];
}

/*
==============
Sys_IsServerUserMoveWorker
==============
*/
bool Sys_IsServerUserMoveWorker()
{
  return (unsigned int)(*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 992i64) - 136) <= 1;
}

/*
==============
Sys_IsSoundThread
==============
*/
bool Sys_IsSoundThread(ThreadContext context)
{
  __int64 v1; 

  v1 = context;
  if ( context < THREAD_CONTEXT_AD_INTERFACE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3710, ASSERT_TYPE_ASSERT, "(context >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "context >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( (int)v1 > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3711, ASSERT_TYPE_ASSERT, "(context <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "context <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  return Sys_GetCurrentThreadId() == threadId[v1];
}

/*
==============
Sys_IsUpdateScreenThread
==============
*/
bool Sys_IsUpdateScreenThread()
{
  return s_updateScreenThreadId == Sys_GetCurrentThreadId();
}

/*
==============
Sys_IsVideoStreamingThread
==============
*/
bool Sys_IsVideoStreamingThread()
{
  return threadId[8] == Sys_GetCurrentThreadId();
}

/*
==============
Sys_IsWorkerThread
==============
*/
bool Sys_IsWorkerThread(unsigned int workerIndex)
{
  if ( workerIndex >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2857, ASSERT_TYPE_ASSERT, "(workerIndex < 3)", (const char *)&queryFormat, "workerIndex < SMP_WORKER_THREAD_LIMIT") )
    __debugbreak();
  return Sys_GetCurrentThreadId() == threadId[workerIndex + 2];
}

/*
==============
Sys_IsWritingStats
==============
*/
_BOOL8 Sys_IsWritingStats()
{
  return WaitForSingleObject(statsWriteEvent, 0) == 0;
}

/*
==============
Sys_JoinIndyFsWorkerThread
==============
*/
void Sys_JoinIndyFsWorkerThread(ThreadContext threadContext)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  v1 = tls_index;
  v2 = threadContext;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= 0x1C )
    {
      LODWORD(v4) = 28;
      LODWORD(v3) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2487, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( threadShutdownCompleteFlag[v2] )
      break;
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1008i64) && GetCurrentProcessorNumber() == 1 )
    {
      Com_PrintStackTrace();
      LODWORD(v3) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v3) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_Sleep");
    Sleep(1u);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Sys_LeaveUIOwnership
==============
*/
void Sys_LeaveUIOwnership(void)
{
  if ( g_uiOwnershipThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4636, ASSERT_TYPE_ASSERT, "( ( g_uiOwnershipThreadId == Sys_GetCurrentThreadId() ) )", "( g_uiOwnershipThreadId ) = %zu", (unsigned int)g_uiOwnershipThreadId) )
    __debugbreak();
  if ( ((unsigned __int8)&g_uiOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_uiOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_uiOwnership, 0xFFFFFFFF) == 1 )
    g_uiOwnershipThreadId = 0;
}

/*
==============
Sys_MarkAffinitySetBool
==============
*/
void Sys_MarkAffinitySetBool(void *srcThreadHandle)
{
  unsigned int v1; 
  void **v2; 
  unsigned int v3; 
  int v4; 

  v1 = 0;
  v2 = threadHandle;
  do
  {
    if ( *v2 == srcThreadHandle )
      break;
    ++v1;
    ++v2;
  }
  while ( v1 < 0x1C );
  if ( v1 >= 0x1C )
  {
    v4 = 28;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( ( sizeof( *array_counter( s_threadAffinitySet ) ) + 0 ) )", "threadContext doesn't index ARRAY_COUNT( s_threadAffinitySet )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  s_threadAffinitySet[v1] = 1;
}

/*
==============
Sys_NotifyNextFrameDataBackendSetupDone
==============
*/
void Sys_NotifyNextFrameDataBackendSetupDone(void)
{
  if ( !s_nextFrameDataBackendSetupDoneEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2611, ASSERT_TYPE_ASSERT, "(Sys_IsEventInitialized( s_nextFrameDataBackendSetupDoneEvent ))", (const char *)&queryFormat, "Sys_IsEventInitialized( s_nextFrameDataBackendSetupDoneEvent )") )
    __debugbreak();
  SetEvent(s_nextFrameDataBackendSetupDoneEvent);
}

/*
==============
Sys_NotifyRenderer
==============
*/
void Sys_NotifyRenderer(void)
{
  if ( !s_backendEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2602, ASSERT_TYPE_ASSERT, "(Sys_IsEventInitialized( s_backendEvent ))", (const char *)&queryFormat, "Sys_IsEventInitialized( s_backendEvent )") )
    __debugbreak();
  SetEvent(s_backendEvent);
}

/*
==============
Sys_PLM_SetConstrainedProcIds
==============
*/
void Sys_PLM_SetConstrainedProcIds(void)
{
  void *v0; 
  void *v1; 

  v0 = threadHandle[1];
  SetThreadAffinityMask(threadHandle[1], 4ui64);
  Sys_MarkAffinitySetBool(v0);
  Sys_MarkAffinitySetBool(v0);
  v1 = threadHandle[18];
  SetThreadAffinityMask(threadHandle[18], 4ui64);
  Sys_MarkAffinitySetBool(v1);
  Sys_MarkAffinitySetBool(v1);
}

/*
==============
Sys_PLM_SetFullProcIds
==============
*/
void Sys_PLM_SetFullProcIds(void)
{
  void *v0; 
  void *v1; 

  v0 = threadHandle[18];
  SetThreadAffinityMask(threadHandle[18], 8ui64);
  Sys_MarkAffinitySetBool(v0);
  Sys_MarkAffinitySetBool(v0);
  v1 = threadHandle[1];
  SetThreadAffinityMask(threadHandle[1], 8ui64);
  Sys_MarkAffinitySetBool(v1);
  Sys_MarkAffinitySetBool(v1);
}

/*
==============
Sys_PopUnblockDatabaseThread
==============
*/
void Sys_PopUnblockDatabaseThread(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 

  v0 = tls_index;
  if ( *(int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1004i64) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3509, ASSERT_TYPE_ASSERT, "(s_pushUnblockCount > 0)", (const char *)&queryFormat, "s_pushUnblockCount > 0") )
    __debugbreak();
  v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
  --*(_DWORD *)(v1 + 1004);
  if ( *(_BYTE *)(v1 + 996) && !*(_DWORD *)(v1 + 1004) )
  {
    Sys_CheckIsCorrectDatabaseThreadAffinity();
    *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 996i64) = 0;
    Sys_CheckIsCorrectDatabaseThreadAffinity();
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1008i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3452, ASSERT_TYPE_ASSERT, "(!g_blockDatabaseThread)", (const char *)&queryFormat, "!g_blockDatabaseThread") )
      __debugbreak();
    v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    if ( (*(_DWORD *)(v2 + 1004) || *(_BYTE *)(v2 + 996)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3453, ASSERT_TYPE_ASSERT, "(( s_pushUnblockCount == 0 ) && !s_pushUnblockActive)", (const char *)&queryFormat, "( s_pushUnblockCount == 0 ) && !s_pushUnblockActive") )
      __debugbreak();
    *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1008i64) = 1;
    ResetEvent(blockDatabaseEvent);
  }
}

/*
==============
Sys_PushUnblockDatabaseThread
==============
*/
void Sys_PushUnblockDatabaseThread(void)
{
  __int64 v0; 
  __int64 v1; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( (int)++*(_DWORD *)(v0 + 1004) < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3494, ASSERT_TYPE_ASSERT, "(s_pushUnblockCount >= 1)", (const char *)&queryFormat, "s_pushUnblockCount >= 1") )
    __debugbreak();
  v1 = 8i64 * tls_index;
  if ( *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v1) + 1008i64) )
  {
    Sys_CheckIsCorrectDatabaseThreadAffinity();
    if ( *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v1) + 1004i64) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3500, ASSERT_TYPE_ASSERT, "(s_pushUnblockCount == 1)", (const char *)&queryFormat, "s_pushUnblockCount == 1") )
      __debugbreak();
    Sys_UnblockDatabaseThread();
    *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 996i64) = 1;
  }
}

/*
==============
Sys_QueryFileStreamPaused
==============
*/
bool Sys_QueryFileStreamPaused()
{
  return WaitForSingleObject(s_fileStreamDatabasePausedReading, 1u) == 0;
}

/*
==============
Sys_ReleaseThreadOwnership
==============
*/
void Sys_ReleaseThreadOwnership(void)
{
  if ( Sys_GetCurrentThreadId() != threadId[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2522, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !WaitForSingleObject(noThreadOwnershipEvent, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2523, ASSERT_TYPE_ASSERT, "( !Sys_WaitForSingleObjectTimeout( &noThreadOwnershipEvent, 0 ) )", "Main thread should have back end ownership at this point!") )
    __debugbreak();
  if ( r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2530, ASSERT_TYPE_ASSERT, "(!r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "!r_glob.mainThreadHasOwnership") )
    __debugbreak();
  SetEvent(noThreadOwnershipEvent);
}

/*
==============
Sys_RenderCompleted
==============
*/
void Sys_RenderCompleted(void)
{
  __int64 v0; 

  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2629, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( (unsigned int)(g_renderWaitCount - 1) > 1 )
  {
    LODWORD(v0) = g_renderWaitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2632, ASSERT_TYPE_ASSERT, "( ( ( renderWaitCount == 1 ) || ( renderWaitCount == 2 ) ) )", "( renderWaitCount ) = %i", v0) )
      __debugbreak();
  }
  SetEvent(s_workerEvent);
  if ( ((unsigned __int8)&g_renderWaitCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_renderWaitCount) )
    __debugbreak();
  _InterlockedDecrement(&g_renderWaitCount);
}

/*
==============
Sys_ResetDatabaseReady
==============
*/
void Sys_ResetDatabaseReady(void)
{
  if ( Sys_GetCurrentThreadId() != threadId[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3072, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  ResetEvent(s_databaseReadyEvent);
}

/*
==============
Sys_ResetDatabaseStopServer
==============
*/
void Sys_ResetDatabaseStopServer(void)
{
  s_databaseStopServer = 0;
}

/*
==============
Sys_ResetEvent
==============
*/
void Sys_ResetEvent(void **event)
{
  ResetEvent(*event);
}

/*
==============
Sys_ResetNextFrameDataBackendSetupDone
==============
*/
void Sys_ResetNextFrameDataBackendSetupDone(void)
{
  ResetEvent(s_nextFrameDataBackendSetupDoneEvent);
}

/*
==============
Sys_ResetStatsWriteEvent
==============
*/
void Sys_ResetStatsWriteEvent(void)
{
  ResetEvent(statsWriteEvent);
}

/*
==============
Sys_ResetWakeDatabaseThread
==============
*/
void Sys_ResetWakeDatabaseThread(void)
{
  if ( Sys_GetCurrentThreadId() != threadId[7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2999, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  ResetEvent(s_wakeDatabaseEvent);
}

/*
==============
Sys_ResetWorkerCmdEvent
==============
*/
void Sys_ResetWorkerCmdEvent(void)
{
  ResetEvent(s_workerEvent);
}

/*
==============
Sys_ResumeThread
==============
*/
void Sys_ResumeThread(ThreadContext threadContext)
{
  __int64 v1; 
  bool v2; 
  HANDLE *v3; 
  int v5; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v5 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2418, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v5) )
      __debugbreak();
  }
  v2 = threadHandle[v1] == NULL;
  v3 = &threadHandle[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(*v3);
}

/*
==============
Sys_ResumeThreadForShutdown
==============
*/
void Sys_ResumeThreadForShutdown(ThreadContext threadContext)
{
  __int64 v1; 
  bool v2; 
  HANDLE *v3; 
  int v5; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v5 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2429, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v5) )
      __debugbreak();
  }
  v2 = threadHandle[v1] == NULL;
  v3 = &threadHandle[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2430, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  while ( ResumeThread(*v3) )
    ;
}

/*
==============
Sys_ResumeWorkerCmd
==============
*/
void Sys_ResumeWorkerCmd(void)
{
  DWORD v0; 
  __int64 v1; 

  if ( GetCurrentProcessorNumber() == 1 )
  {
    if ( !g_suspendWorkerThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3422, ASSERT_TYPE_ASSERT, "(g_suspendWorkerThreadContext)", (const char *)&queryFormat, "g_suspendWorkerThreadContext") )
      __debugbreak();
    g_suspendWorkerThreadContext = 0;
    Sys_ProfBeginNamedEvent(0xFFFFFF00, "yield worker");
    SetEvent(s_workerEvent);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Sys_Sleep");
    Sleep(0);
    Sys_ProfEndNamedEvent();
    if ( GetCurrentProcessorNumber() == 1 )
    {
      if ( ((unsigned __int8)&s_waitCountForBlockDBEvent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_waitCountForBlockDBEvent) )
        __debugbreak();
      _InterlockedIncrement(&s_waitCountForBlockDBEvent);
      v0 = WaitForSingleObject(blockDatabaseEvent, 0xFFFFFFFF);
      if ( v0 )
      {
        LODWORD(v1) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
          __debugbreak();
      }
      if ( ((unsigned __int64)&s_waitCountForBlockDBEvent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_waitCountForBlockDBEvent) )
        __debugbreak();
      _InterlockedDecrement(&s_waitCountForBlockDBEvent);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Sys_SaveGameSecondaryThreadExists
==============
*/
bool Sys_SaveGameSecondaryThreadExists()
{
  return threadId[17] != 0;
}

/*
==============
Sys_ServerCompleted
==============
*/
void Sys_ServerCompleted(void)
{
  if ( s_databaseStopServer || !SV_Main_InServerFrame() || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) )
  {
    if ( ((unsigned __int8)&g_serverContextOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_serverContextOwnership) )
      __debugbreak();
    _InterlockedCompareExchange(&g_serverContextOwnership, 0, 1);
  }
}

/*
==============
Sys_SetDatabaseReady
==============
*/
void Sys_SetDatabaseReady(void)
{
  if ( Sys_GetCurrentThreadId() != threadId[7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3064, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  SetEvent(s_databaseReadyEvent);
}

/*
==============
Sys_SetEvent
==============
*/
void Sys_SetEvent(void **event)
{
  SetEvent(*event);
}

/*
==============
Sys_SetFileStreamAsyncPaused
==============
*/
void Sys_SetFileStreamAsyncPaused(bool paused)
{
  s_fileStreamAsyncPaused = paused;
}

/*
==============
Sys_SetGameSaveEvent
==============
*/
void Sys_SetGameSaveEvent(void)
{
  SetEvent(gameSaveEvent);
}

/*
==============
Sys_SetSaveGameSecondaryEvent
==============
*/
void Sys_SetSaveGameSecondaryEvent(void)
{
  SetEvent(saveGameSecondaryEvent);
}

/*
==============
Sys_SetSaveHistoryDoneEvent
==============
*/
void Sys_SetSaveHistoryDoneEvent(void)
{
  SetEvent(g_saveHistoryDoneEvent);
}

/*
==============
Sys_SetSaveHistoryEvent
==============
*/
void Sys_SetSaveHistoryEvent(void)
{
  ResetEvent(g_saveHistoryDoneEvent);
  SetEvent(g_saveHistoryEvent);
}

/*
==============
Sys_SetSaveTasksEvent
==============
*/
void Sys_SetSaveTasksEvent(void)
{
  SetEvent(s_saveTaskEvent);
}

/*
==============
Sys_SetStatsWriteEvent
==============
*/
void Sys_SetStatsWriteEvent(void)
{
  SetEvent(statsWriteEvent);
}

/*
==============
Sys_SetThreadContext
==============
*/
void Sys_SetThreadContext(ThreadContext threadContext)
{
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) = threadContext;
}

/*
==============
Sys_SetThreadName
==============
*/
void Sys_SetThreadName(void *dstThreadHandle, const char *threadName)
{
  ULONG_PTR Arguments[2]; 
  int v5; 
  int v6; 
  wchar_t Dest[64]; 

  LODWORD(Arguments[0]) = 4096;
  Arguments[1] = (ULONG_PTR)threadName;
  v5 = -1;
  v6 = 0;
  RaiseException(0x406D1388u, 0, 3u, Arguments);
  mbstowcs(Dest, threadName, 0x40ui64);
  Dest[63] = 0;
  SetThreadName(dstThreadHandle, Dest);
}

/*
==============
Sys_SetUpdateScreenThread
==============
*/
void Sys_SetUpdateScreenThread(void)
{
  if ( s_updateScreenThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4656, ASSERT_TYPE_ASSERT, "(s_updateScreenThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "s_updateScreenThreadId == INVALID_THREAD_ID") )
    __debugbreak();
  if ( (Sys_GetCurrentThreadId() != threadId[0] || R_IsInRemoteScreenUpdate()) && (Sys_GetCurrentThreadId() != threadId[1] || !R_IsInRemoteScreenUpdate()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4658, ASSERT_TYPE_ASSERT, "(( Sys_IsMainThread() && !R_IsInRemoteScreenUpdate() ) || ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() ))", (const char *)&queryFormat, "( Sys_IsMainThread() && !R_IsInRemoteScreenUpdate() ) || ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() )") )
    __debugbreak();
  s_updateScreenThreadId = Sys_GetCurrentThreadId();
}

/*
==============
Sys_SetValue
==============
*/
void Sys_SetValue(int valueIndex, void *data)
{
  __int64 v3; 

  v3 = valueIndex;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3319, ASSERT_TYPE_ASSERT, "(g_dwTlsIndex != 0)", (const char *)&queryFormat, "g_dwTlsIndex != NULL") )
    __debugbreak();
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) + 8 * v3) = data;
}

/*
==============
Sys_SetWorkerCmdEvent
==============
*/
void Sys_SetWorkerCmdEvent(void)
{
  SetEvent(s_workerEvent);
}

/*
==============
Sys_ShouldRenderThreadReleaseBackendOwnership
==============
*/
bool Sys_ShouldRenderThreadReleaseBackendOwnership()
{
  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2646, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  return WaitForSingleObject(noThreadOwnershipEvent, 0) != 0;
}

/*
==============
Sys_ShutdownThread
==============
*/
void Sys_ShutdownThread(ThreadContext threadContext)
{
  __int64 v1; 
  __int64 v2; 
  void *v3; 
  unsigned int ExitCode; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2445, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, 28) )
    __debugbreak();
  v2 = v1;
  if ( !threadHandle[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2446, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  if ( !threadFunc[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2447, ASSERT_TYPE_ASSERT, "(threadFunc[threadContext] != nullptr)", (const char *)&queryFormat, "threadFunc[threadContext] != nullptr") )
    __debugbreak();
  v3 = threadHandle[v2];
  ExitCode = 259;
  if ( GetExitCodeThread(v3, &ExitCode) )
  {
    do
    {
      if ( ExitCode != 259 )
        break;
      Sys_ProfBeginNamedEvent(0xFFFF0000, "Sys_Sleep");
      Sleep(0);
      Sys_ProfEndNamedEvent();
    }
    while ( GetExitCodeThread(threadHandle[v2], &ExitCode) );
  }
  CloseHandle(threadHandle[v2]);
  threadHandle[v2] = NULL;
  threadFunc[v2] = NULL;
}

/*
==============
Sys_ShutdownThreadDone
==============
*/
void Sys_ShutdownThreadDone(ThreadContext threadContext)
{
  __int64 v1; 
  int v3; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v3 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2481, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v3) )
      __debugbreak();
  }
  threadShutdownCompleteFlag[v1] = 1;
}

/*
==============
Sys_ShutdownThreadRequest
==============
*/
void Sys_ShutdownThreadRequest(ThreadContext threadContext)
{
  __int64 v1; 
  int v3; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v3 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2475, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v3) )
      __debugbreak();
  }
  threadShutdownRequestFlag[v1] = 1;
}

/*
==============
Sys_Sleep
==============
*/
void Sys_Sleep(int msec)
{
  unsigned int v2; 
  int v3; 

  if ( msec )
  {
    if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1008i64) )
    {
      if ( GetCurrentProcessorNumber() == 1 )
      {
        Com_PrintStackTrace();
        v3 = msec;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v3) )
          __debugbreak();
      }
    }
  }
  v2 = -65536;
  if ( msec )
    v2 = -256;
  Sys_ProfBeginNamedEvent(v2, "Sys_Sleep");
  Sleep(msec);
  Sys_ProfEndNamedEvent();
}

/*
==============
Sys_SleepServer
==============
*/
void Sys_SleepServer(void)
{
  g_mainThreadRequestServerOwnership = 1;
}

/*
==============
Sys_SpawnBootTimeTaskThread
==============
*/
char Sys_SpawnBootTimeTaskThread(void (*function)(unsigned int))
{
  void *v1; 

  Sys_CreateThread(function, 0x13u);
  v1 = threadHandle[19];
  if ( !threadHandle[19] )
    return 0;
  SetThreadAffinityMask(threadHandle[19], 0x20ui64);
  Sys_MarkAffinitySetBool(v1);
  Sys_MarkAffinitySetBool(v1);
  SetThreadPriority(threadHandle[19], -1);
  if ( !threadHandle[19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[19]);
  return 1;
}

/*
==============
Sys_SpawnDatabaseThread
==============
*/
char Sys_SpawnDatabaseThread(void (*function)(unsigned int))
{
  void *v2; 

  s_wakeDatabaseEvent = CreateEventW(NULL, 1, 0, NULL);
  s_databaseReadyEvent = CreateEventW(NULL, 1, 1, NULL);
  Sys_CreateThread(function, 7u);
  v2 = threadHandle[7];
  if ( !threadHandle[7] )
    return 0;
  SetThreadAffinityMask(threadHandle[7], 2ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  SetThreadPriority(threadHandle[7], 0);
  if ( !threadHandle[7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[7]);
  return 1;
}

/*
==============
Sys_SpawnDecodeThread
==============
*/
void Sys_SpawnDecodeThread(void (*function)(unsigned int))
{
  void *v1; 

  if ( !threadHandle[12] )
  {
    Sys_CreateThread(function, 0xCu);
    if ( !threadHandle[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3785, ASSERT_TYPE_ASSERT, "(threadHandle[THREAD_CONTEXT_SOUND_DECODE])", (const char *)&queryFormat, "threadHandle[THREAD_CONTEXT_SOUND_DECODE]") )
      __debugbreak();
    SetThreadPriority(threadHandle[12], 1);
    v1 = threadHandle[12];
    SetThreadAffinityMask(threadHandle[12], 0x40ui64);
    Sys_MarkAffinitySetBool(v1);
    Sys_MarkAffinitySetBool(v1);
    if ( !threadHandle[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
      __debugbreak();
    ResumeThread(threadHandle[12]);
  }
}

/*
==============
Sys_SpawnDevHostThread
==============
*/
char Sys_SpawnDevHostThread(void (*function)(unsigned int))
{
  Sys_CreateThread(function, 0x15u);
  if ( !threadHandle[21] )
    return 0;
  ResumeThread(threadHandle[21]);
  return 1;
}

/*
==============
Sys_SpawnFileStreamAsyncThread
==============
*/
char Sys_SpawnFileStreamAsyncThread(void (*function)(unsigned int))
{
  void *v2; 

  s_fileStreamAsyncCompletedEvent = CreateEventW(NULL, 1, 0, NULL);
  s_fileStreamAsyncEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0x17u);
  v2 = threadHandle[23];
  if ( !threadHandle[23] )
    return 0;
  SetThreadAffinityMask(threadHandle[23], 2ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  SetThreadPriority(threadHandle[23], 2);
  if ( !threadHandle[23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[23]);
  return 1;
}

/*
==============
Sys_SpawnFileStreamThread
==============
*/
char Sys_SpawnFileStreamThread(void (*function)(unsigned int))
{
  void *v2; 

  s_fileStreamCompletedEvent = CreateEventW(NULL, 1, 0, NULL);
  s_fileStreamDatabasePausedReading = CreateEventW(NULL, 1, 0, NULL);
  s_fileStreamEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0x16u);
  v2 = threadHandle[22];
  if ( !threadHandle[22] )
    return 0;
  SetThreadAffinityMask(threadHandle[22], 2ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  SetThreadPriority(threadHandle[22], 2);
  if ( !threadHandle[22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[22]);
  return 1;
}

/*
==============
Sys_SpawnGPUInterruptThread
==============
*/
char Sys_SpawnGPUInterruptThread(void (*function)(unsigned int))
{
  void *v2; 

  Sys_CreateThread(function, 0x12u);
  if ( !threadHandle[18] )
    return 0;
  SetThreadPriority(threadHandle[18], 2);
  v2 = threadHandle[18];
  SetThreadAffinityMask(threadHandle[18], 8ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  if ( !threadHandle[18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[18]);
  return 1;
}

/*
==============
Sys_SpawnGameSaveThread
==============
*/
void Sys_SpawnGameSaveThread(void (*function)(unsigned int))
{
  void *v2; 

  gameSaveEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0xEu);
  if ( !threadHandle[14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4027, ASSERT_TYPE_ASSERT, "(0 != threadHandle[THREAD_CONTEXT_SAVE_GAME])", (const char *)&queryFormat, "0 != threadHandle[THREAD_CONTEXT_SAVE_GAME]") )
    __debugbreak();
  SetThreadPriority(threadHandle[14], -1);
  v2 = threadHandle[14];
  SetThreadAffinityMask(threadHandle[14], 0x20ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  if ( !threadHandle[14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[14]);
}

/*
==============
Sys_SpawnImageTrackingThread
==============
*/
char Sys_SpawnImageTrackingThread(void (*function)(unsigned int))
{
  void *v2; 

  s_imageReportReadyEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0x1Bu);
  v2 = threadHandle[27];
  if ( !threadHandle[27] )
    return 0;
  SetThreadAffinityMask(threadHandle[27], 2ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  SetThreadPriority(threadHandle[27], 0);
  if ( !threadHandle[27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[27]);
  return 1;
}

/*
==============
Sys_SpawnIndyFsWorkerThread
==============
*/
char Sys_SpawnIndyFsWorkerThread(void (*function)(unsigned int), ThreadContext threadContext)
{
  __int64 v2; 

  v2 = threadContext;
  Sys_CreateThread(function, threadContext);
  if ( !threadHandle[v2] )
    return 0;
  Sys_ResumeThread((ThreadContext)v2);
  return 1;
}

/*
==============
Sys_SpawnIndyFsWorkerThread
==============
*/
char Sys_SpawnIndyFsWorkerThread(void (*function)(unsigned int), ThreadContext threadContext, unsigned int affinityMask)
{
  __int64 v3; 
  DWORD_PTR v4; 
  void *v5; 

  v3 = threadContext;
  v4 = affinityMask;
  Sys_CreateThread(function, threadContext);
  v5 = threadHandle[v3];
  if ( !v5 )
    return 0;
  SetThreadAffinityMask(threadHandle[v3], v4);
  Sys_MarkAffinitySetBool(v5);
  Sys_ResumeThread((ThreadContext)v3);
  return 1;
}

/*
==============
Sys_SpawnNetworkThread
==============
*/
char Sys_SpawnNetworkThread(void (*function)(unsigned int))
{
  void *v1; 

  Sys_CreateThread(function, 6u);
  v1 = threadHandle[6];
  if ( !threadHandle[6] )
    return 0;
  SetThreadAffinityMask(threadHandle[6], 0x40ui64);
  Sys_MarkAffinitySetBool(v1);
  Sys_MarkAffinitySetBool(threadHandle[6]);
  SetThreadPriority(threadHandle[6], 1);
  if ( !threadHandle[6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[6]);
  return 1;
}

/*
==============
Sys_SpawnRenderThread
==============
*/
char Sys_SpawnRenderThread(void (*function)(unsigned int))
{
  void *v3; 

  renderPausedEvent = CreateEventW(NULL, 0, 0, NULL);
  noThreadOwnershipEvent = CreateEventW(NULL, 1, 0, NULL);
  rendererRunningEvent = CreateEventW(NULL, 1, 1, NULL);
  s_backendEvent = CreateEventW(NULL, 0, 0, NULL);
  s_nextFrameDataBackendSetupDoneEvent = CreateEventW(NULL, 1, 1, NULL);
  Sys_CreateThread(function, 1u);
  if ( !threadHandle[1] )
    return 0;
  SetThreadPriority(threadHandle[1], 0);
  v3 = threadHandle[1];
  SetThreadAffinityMask(threadHandle[1], 8ui64);
  Sys_MarkAffinitySetBool(v3);
  Sys_MarkAffinitySetBool(v3);
  if ( !threadHandle[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[1]);
  return 1;
}

/*
==============
Sys_SpawnSaveGameSecondaryThread
==============
*/
void Sys_SpawnSaveGameSecondaryThread(void (*function)(unsigned int))
{
  void *v2; 

  saveGameSecondaryEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0x11u);
  if ( !threadHandle[17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4162, ASSERT_TYPE_ASSERT, "(0 != threadHandle[THREAD_CONTEXT_SAVEGAME_SECONDARY])", (const char *)&queryFormat, "0 != threadHandle[THREAD_CONTEXT_SAVEGAME_SECONDARY]") )
    __debugbreak();
  SetThreadPriority(threadHandle[17], 0);
  v2 = threadHandle[17];
  SetThreadAffinityMask(threadHandle[17], 2ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  if ( !threadHandle[17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[17]);
}

/*
==============
Sys_SpawnSaveTasksThread
==============
*/
void Sys_SpawnSaveTasksThread(void (*function)(unsigned int))
{
  void *v2; 

  s_saveTaskEvent = CreateEventW(NULL, 0, 0, NULL);
  Sys_CreateThread(function, 0xFu);
  if ( !threadHandle[15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4071, ASSERT_TYPE_ASSERT, "(0 != threadHandle[THREAD_CONTEXT_SAVE_TASKS])", (const char *)&queryFormat, "0 != threadHandle[THREAD_CONTEXT_SAVE_TASKS]") )
    __debugbreak();
  SetThreadPriority(threadHandle[15], -1);
  v2 = threadHandle[15];
  SetThreadAffinityMask(threadHandle[15], 0x20ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  if ( !threadHandle[15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[15]);
}

/*
==============
Sys_SpawnServerDemoThread
==============
*/
char Sys_SpawnServerDemoThread(void (*function)(unsigned int))
{
  void *v3; 

  g_saveHistoryEvent = CreateEventW(NULL, 0, 0, NULL);
  g_saveHistoryDoneEvent = CreateEventW(NULL, 1, 1, NULL);
  Sys_CreateThread(function, 0xDu);
  if ( !threadHandle[13] )
    return 0;
  SetThreadPriority(threadHandle[13], 0);
  v3 = threadHandle[13];
  SetThreadAffinityMask(threadHandle[13], 0x10ui64);
  Sys_MarkAffinitySetBool(v3);
  Sys_MarkAffinitySetBool(v3);
  if ( !threadHandle[13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[13]);
  return 1;
}

/*
==============
Sys_SpawnServerThread
==============
*/
char Sys_SpawnServerThread(void (*function)(unsigned int))
{
  void *v2; 
  volatile int v4; 

  if ( g_serverContextOwnership )
  {
    v4 = g_serverContextOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2085, ASSERT_TYPE_ASSERT, "( ( g_serverContextOwnership == SERVER_CONTEXT_NONE ) )", "( g_serverContextOwnership ) = %i", v4) )
      __debugbreak();
  }
  allowSendClientMessagesEvent = CreateEventW(NULL, 1, 0, NULL);
  serverSnapshotEvent = CreateEventW(NULL, 1, 0, NULL);
  clientMessageReceived = CreateEventW(NULL, 1, 1, NULL);
  clientSaveComplete = CreateEventW(NULL, 1, 1, NULL);
  allowServerNetworkEvent = CreateEventW(NULL, 1, 1, NULL);
  serverNetworkCompletedEvent = CreateEventW(NULL, 1, 1, NULL);
  Sys_CreateThread(function, 5u);
  v2 = threadHandle[5];
  if ( !threadHandle[5] )
    return 0;
  SetThreadAffinityMask(threadHandle[5], 0x20ui64);
  Sys_MarkAffinitySetBool(v2);
  Sys_MarkAffinitySetBool(v2);
  SetThreadPriority(threadHandle[5], 0);
  if ( !threadHandle[5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[5]);
  return 1;
}

/*
==============
Sys_SpawnSoundThread
==============
*/
void Sys_SpawnSoundThread(ThreadContext context, void (*function)(unsigned int), int priority, int affinity)
{
  __int64 v4; 
  char v5; 
  void **v8; 
  HANDLE v9; 

  v4 = context;
  v5 = affinity;
  if ( context < THREAD_CONTEXT_AD_INTERFACE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3690, ASSERT_TYPE_ASSERT, "(context >= THREAD_CONTEXT_AD_INTERFACE)", (const char *)&queryFormat, "context >= THREAD_CONTEXT_AD_FIRST") )
    __debugbreak();
  if ( (int)v4 > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3691, ASSERT_TYPE_ASSERT, "(context <= THREAD_CONTEXT_AD_MIX)", (const char *)&queryFormat, "context <= THREAD_CONTEXT_AD_LAST") )
    __debugbreak();
  Sys_CreateThread(function, v4);
  v8 = &threadHandle[v4];
  if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3695, ASSERT_TYPE_ASSERT, "(threadHandle[context])", (const char *)&queryFormat, "threadHandle[context]") )
    __debugbreak();
  SetThreadPriority(*v8, priority);
  v9 = *v8;
  SetThreadAffinityMask(v9, (unsigned int)(1 << v5));
  Sys_MarkAffinitySetBool(v9);
  Sys_MarkAffinitySetBool(v9);
  Sys_ResumeThread((ThreadContext)v4);
}

/*
==============
Sys_SpawnStatsWriteThread
==============
*/
char Sys_SpawnStatsWriteThread(void (*function)(unsigned int))
{
  void *v3; 

  statsWriteEvent = CreateEventW(NULL, 1, 0, NULL);
  Sys_CreateThread(function, 0x10u);
  if ( !threadHandle[16] )
    return 0;
  SetThreadPriority(threadHandle[16], -1);
  v3 = threadHandle[16];
  SetThreadAffinityMask(threadHandle[16], 0x20ui64);
  Sys_MarkAffinitySetBool(v3);
  Sys_MarkAffinitySetBool(v3);
  if ( !threadHandle[16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[16]);
  return 1;
}

/*
==============
Sys_SpawnVideoStreamingThread
==============
*/
char Sys_SpawnVideoStreamingThread(void (*function)(unsigned int))
{
  void *v1; 

  Sys_CreateThread(function, 8u);
  v1 = threadHandle[8];
  if ( !threadHandle[8] )
    return 0;
  SetThreadAffinityMask(threadHandle[8], 0xFui64);
  Sys_MarkAffinitySetBool(v1);
  SetThreadPriority(threadHandle[8], 1);
  if ( !threadHandle[8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2419, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  ResumeThread(threadHandle[8]);
  return 1;
}

/*
==============
Sys_SpawnWorkerThread
==============
*/
char Sys_SpawnWorkerThread(void (*function)(unsigned int), unsigned int threadIndex)
{
  void **v2; 
  __int64 v3; 
  unsigned int v5; 
  HANDLE v7; 

  v2 = &threadHandle[(int)threadIndex + 2];
  v3 = threadIndex;
  v5 = threadIndex + 2;
  if ( *v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2251, ASSERT_TYPE_ASSERT, "( ( !threadHandle[threadContext] ) )", "( threadContext ) = %i", threadIndex + 2) )
    __debugbreak();
  Sys_CreateThread(function, v5);
  if ( !*v2 )
    return 0;
  SetThreadPriority(*v2, 0);
  v7 = *v2;
  SetThreadAffinityMask(v7, (unsigned int)(1 << hardwareThread[v3]));
  Sys_MarkAffinitySetBool(v7);
  Sys_MarkAffinitySetBool(v7);
  return 1;
}

/*
==============
Sys_StartRenderer
==============
*/
void Sys_StartRenderer(void)
{
  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2684, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  SetEvent(rendererRunningEvent);
}

/*
==============
Sys_StopRenderer
==============
*/
void Sys_StopRenderer(void)
{
  unsigned __int32 v0; 
  __int64 v1; 

  if ( Sys_GetCurrentThreadId() != threadId[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2672, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&renderPausedCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&renderPausedCount) )
    __debugbreak();
  v0 = _InterlockedIncrement(&renderPausedCount);
  if ( v0 > 1 )
  {
    LODWORD(v1) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2675, ASSERT_TYPE_ASSERT, "( ( ( newCount == 0 ) || ( newCount == 1 ) ) )", "( newCount ) = %i", v1) )
      __debugbreak();
  }
  ResetEvent(rendererRunningEvent);
  SetEvent(renderPausedEvent);
}

/*
==============
Sys_SuspendOtherThreads
==============
*/
void Sys_SuspendOtherThreads(void)
{
  threadId_t CurrentThreadId; 
  threadId_t *v1; 
  HANDLE *v2; 
  __int64 v3; 

  Sys_EnterCriticalSection(CRITSECT_STATS_WRITE);
  g_suspendThreads = 1;
  if ( Sys_GetCurrentThreadContext() == THREAD_CONTEXT_WORKER0 )
    Sys_UnblockDatabaseThread();
  R_Cinematic_SuspendPlayback();
  CurrentThreadId = Sys_GetCurrentThreadId();
  v1 = threadId;
  v2 = threadHandle;
  v3 = 28i64;
  do
  {
    if ( *v2 && *v1 && *v1 != CurrentThreadId )
      SuspendThread(*v2);
    ++v2;
    ++v1;
    --v3;
  }
  while ( v3 );
}

/*
==============
Sys_SuspendThread
==============
*/
void Sys_SuspendThread(ThreadContext threadContext)
{
  __int64 v1; 
  bool v2; 
  HANDLE *v3; 
  int v5; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v5 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2402, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v5) )
      __debugbreak();
  }
  v2 = threadHandle[v1] == NULL;
  v3 = &threadHandle[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2403, ASSERT_TYPE_ASSERT, "(threadHandle[threadContext])", (const char *)&queryFormat, "threadHandle[threadContext]") )
    __debugbreak();
  SuspendThread(*v3);
}

/*
==============
Sys_SuspendWorkerCmd
==============
*/
void Sys_SuspendWorkerCmd(void)
{
  if ( GetCurrentProcessorNumber() == 1 )
  {
    if ( g_suspendWorkerThreadContext )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3408, ASSERT_TYPE_ASSERT, "(!g_suspendWorkerThreadContext)", (const char *)&queryFormat, "!g_suspendWorkerThreadContext") )
        __debugbreak();
    }
    g_suspendWorkerThreadContext = 1;
  }
}

/*
==============
Sys_SyncDatabase
==============
*/
void Sys_SyncDatabase(void)
{
  Sys_ProcessWorkerCmdsWithTimeout(Sys_SyncWaitDatabaseReady, NULL);
}

/*
==============
Sys_SyncDatabaseWithPump
==============
*/
void Sys_SyncDatabaseWithPump(void)
{
  Sys_ProcessWorkerCmdsWithTimeout(Sys_SyncWaitDatabaseReady, (void *)1);
}

/*
==============
Sys_SyncWaitDatabaseReady
==============
*/
bool Sys_SyncWaitDatabaseReady(void *userData)
{
  if ( userData )
  {
    Sys_LoadingKeepAlive();
    Sys_LoadingProcessEvents();
  }
  return WaitForSingleObject(s_databaseReadyEvent, 0) == 0;
}

/*
==============
Sys_TLSInitialized
==============
*/
bool Sys_TLSInitialized()
{
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1016i64) != 0i64;
}

/*
==============
Sys_TempThreadPriorityAtLeastNormalBegin
==============
*/
void Sys_TempThreadPriorityAtLeastNormalBegin(TempThreadPriority *tempPriority)
{
  HANDLE CurrentThread; 
  void *v3; 
  int ThreadPriority; 

  CurrentThread = GetCurrentThread();
  tempPriority->threadHandle = CurrentThread;
  v3 = CurrentThread;
  ThreadPriority = GetThreadPriority(CurrentThread);
  tempPriority->oldPriority = ThreadPriority;
  if ( ThreadPriority < 0 )
    SetThreadPriority(v3, 0);
}

/*
==============
Sys_TempThreadPriorityEnd
==============
*/
void Sys_TempThreadPriorityEnd(const TempThreadPriority *tempPriority)
{
  HANDLE CurrentThread; 
  int oldPriority; 

  CurrentThread = GetCurrentThread();
  if ( CurrentThread != tempPriority->threadHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1062, ASSERT_TYPE_ASSERT, "(currentThreadHandle == tempPriority->threadHandle)", (const char *)&queryFormat, "currentThreadHandle == tempPriority->threadHandle") )
    __debugbreak();
  oldPriority = tempPriority->oldPriority;
  if ( oldPriority )
    SetThreadPriority(CurrentThread, oldPriority);
}

/*
==============
Sys_TempThreadPriorityNormalBegin
==============
*/
void Sys_TempThreadPriorityNormalBegin(TempThreadPriority *tempPriority)
{
  HANDLE CurrentThread; 
  void *v3; 
  int ThreadPriority; 

  CurrentThread = GetCurrentThread();
  tempPriority->threadHandle = CurrentThread;
  v3 = CurrentThread;
  ThreadPriority = GetThreadPriority(CurrentThread);
  tempPriority->oldPriority = ThreadPriority;
  if ( ThreadPriority )
    SetThreadPriority(v3, 0);
}

/*
==============
Sys_ThreadExists
==============
*/
_BOOL8 Sys_ThreadExists(ThreadContext threadContext)
{
  return threadHandle[threadContext] != NULL;
}

/*
==============
Sys_ThreadIsShutdownDone
==============
*/
_BOOL8 Sys_ThreadIsShutdownDone(ThreadContext threadContext)
{
  __int64 v1; 
  int v4; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v4 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2487, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v4) )
      __debugbreak();
  }
  return threadShutdownCompleteFlag[v1];
}

/*
==============
Sys_ThreadIsShutdownRequested
==============
*/
_BOOL8 Sys_ThreadIsShutdownRequested(ThreadContext threadContext)
{
  __int64 v1; 
  int v4; 

  v1 = threadContext;
  if ( (unsigned int)threadContext >= THREAD_CONTEXT_COUNT )
  {
    v4 = 28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2493, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", threadContext, v4) )
      __debugbreak();
  }
  return threadShutdownRequestFlag[v1];
}

/*
==============
Sys_ThreadMain
==============
*/
__int64 Sys_ThreadMain(void *parameter)
{
  signed int v1; 
  __int64 v2; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  v1 = (int)parameter;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1000i64) = (_DWORD)parameter;
  if ( (unsigned int)parameter >= 0x1C )
  {
    v5 = 28;
    v4 = (int)parameter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1877, ASSERT_TYPE_ASSERT, "(unsigned)( threadContext ) < (unsigned)( THREAD_CONTEXT_COUNT )", "threadContext doesn't index THREAD_CONTEXT_COUNT\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = v1;
  if ( !threadFunc[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1878, ASSERT_TYPE_ASSERT, "(threadFunc[threadContext])", (const char *)&queryFormat, "threadFunc[threadContext]") )
    __debugbreak();
  Sys_SetThreadName(threadHandle[v2], s_threadNames[v2]);
  __asm { vstmxcsr [rsp+0E8h+arg_0] }
  v6 |= 0x40u;
  __asm
  {
    vldmxcsr [rsp+0E8h+arg_0]
    vstmxcsr [rsp+0E8h+arg_0]
  }
  v7 |= 0x8000u;
  __asm { vldmxcsr [rsp+0E8h+arg_0] }
  Sys_InitThread((ThreadContext)v1);
  threadFunc[v1](v1);
  return 0i64;
}

/*
==============
Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread
==============
*/
_BOOL8 Sys_ThreadsMP_HaveSuspendedNetworkCompleteThread()
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && g_networkOverrideThread == Sys_GetCurrentThreadId();
}

/*
==============
Sys_ThreadsMP_ResetServerAllowNetworkEvent
==============
*/
void Sys_ThreadsMP_ResetServerAllowNetworkEvent(void)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4337, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  ResetEvent(allowServerNetworkEvent);
}

/*
==============
Sys_ThreadsMP_ResetServerNetworkCompletedEvent
==============
*/
void Sys_ThreadsMP_ResetServerNetworkCompletedEvent(void)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4364, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_NETTHREAD_OVERRIDE);
  if ( g_networkOverrideThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4370, ASSERT_TYPE_ASSERT, "(!g_networkOverrideThread)", (const char *)&queryFormat, "!g_networkOverrideThread") )
    __debugbreak();
  g_networkOverrideThread = Sys_GetCurrentThreadId();
  ResetEvent(serverNetworkCompletedEvent);
  Sys_LeaveCriticalSection(CRITSECT_NETTHREAD_OVERRIDE);
}

/*
==============
Sys_ThreadsMP_SetServerAllowNetworkEvent
==============
*/
void Sys_ThreadsMP_SetServerAllowNetworkEvent(void)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4329, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  SetEvent(allowServerNetworkEvent);
}

/*
==============
Sys_ThreadsMP_SetServerNetworkCompletedEvent
==============
*/
void Sys_ThreadsMP_SetServerNetworkCompletedEvent(void)
{
  DWORD CurrentThreadId; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4345, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_NETTHREAD_OVERRIDE);
  CurrentThreadId = GetCurrentThreadId();
  if ( !CurrentThreadId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1115, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1116, ASSERT_TYPE_ASSERT, "( id != INVALID_THREAD_ID )", (const char *)&queryFormat, "id != INVALID_THREAD_ID") )
      __debugbreak();
  }
  if ( g_networkOverrideThread != CurrentThreadId && g_networkOverrideThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4351, ASSERT_TYPE_ASSERT, "(g_networkOverrideThread == Sys_GetCurrentThreadId() || g_networkOverrideThread == 0)", (const char *)&queryFormat, "g_networkOverrideThread == Sys_GetCurrentThreadId() || g_networkOverrideThread == 0") )
    __debugbreak();
  g_networkOverrideThread = 0;
  SetEvent(serverNetworkCompletedEvent);
  Sys_LeaveCriticalSection(CRITSECT_NETTHREAD_OVERRIDE);
}

/*
==============
Sys_ThreadsMP_WaitAllowServerNetworkLoop
==============
*/
void Sys_ThreadsMP_WaitAllowServerNetworkLoop(void)
{
  DWORD v0; 
  __int64 v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4391, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  if ( Sys_GetCurrentThreadId() != threadId[5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4392, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  v0 = WaitForSingleObject(allowServerNetworkEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    LODWORD(v1) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_ThreadsMP_WaitServerNetworkCompleted
==============
*/
void Sys_ThreadsMP_WaitServerNetworkCompleted(void)
{
  DWORD v0; 
  __int64 v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4399, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::THREADS_MULTIPLAYER )") )
    __debugbreak();
  if ( Sys_GetCurrentThreadId() != threadId[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 4400, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = WaitForSingleObject(serverNetworkCompletedEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    LODWORD(v1) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_ThreadsSP_AllowSendClientMessages
==============
*/
void Sys_ThreadsSP_AllowSendClientMessages(void)
{
  SetEvent(allowSendClientMessagesEvent);
}

/*
==============
Sys_ThreadsSP_CanSendClientMessages
==============
*/
_BOOL8 Sys_ThreadsSP_CanSendClientMessages()
{
  return WaitForSingleObject(allowSendClientMessagesEvent, 0) == 0;
}

/*
==============
Sys_ThreadsSP_ClearClientMessage
==============
*/
void Sys_ThreadsSP_ClearClientMessage(void)
{
  ResetEvent(clientMessageReceived);
}

/*
==============
Sys_ThreadsSP_ClearClientSaveComplete
==============
*/
void Sys_ThreadsSP_ClearClientSaveComplete(void)
{
  ResetEvent(clientSaveComplete);
}

/*
==============
Sys_ThreadsSP_ClientMessageReceived
==============
*/
void Sys_ThreadsSP_ClientMessageReceived(void)
{
  SetEvent(clientMessageReceived);
}

/*
==============
Sys_ThreadsSP_ClientSaveCompleted
==============
*/
void Sys_ThreadsSP_ClientSaveCompleted(void)
{
  SetEvent(clientSaveComplete);
}

/*
==============
Sys_ThreadsSP_DisallowSendClientMessages
==============
*/
void Sys_ThreadsSP_DisallowSendClientMessages(void)
{
  ResetEvent(allowSendClientMessagesEvent);
}

/*
==============
Sys_ThreadsSP_ServerSnapshotCompleted
==============
*/
void Sys_ThreadsSP_ServerSnapshotCompleted(void)
{
  SetEvent(serverSnapshotEvent);
}

/*
==============
Sys_ThreadsSP_ServerSnapshotReset
==============
*/
void Sys_ThreadsSP_ServerSnapshotReset(void)
{
  ResetEvent(serverSnapshotEvent);
}

/*
==============
Sys_ThreadsSP_WaitClientMessageReceived
==============
*/
_BOOL8 Sys_ThreadsSP_WaitClientMessageReceived()
{
  return WaitForSingleObject(clientMessageReceived, 0) == 0;
}

/*
==============
Sys_ThreadsSP_WaitClientSaveComplete
==============
*/
void Sys_ThreadsSP_WaitClientSaveComplete(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(clientSaveComplete, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_ThreadsSP_WaitServerSnapshot
==============
*/
_BOOL8 Sys_ThreadsSP_WaitServerSnapshot()
{
  BOOL v0; 

  Profile_Begin(557);
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "wait snapshot");
  v0 = WaitForSingleObject(serverSnapshotEvent, 0) == 0;
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return v0;
}

/*
==============
Sys_TitleServerThreadData
==============
*/
void Sys_TitleServerThreadData(void)
{
  __int64 v0; 

  if ( threadId[9] != Sys_GetCurrentThreadId() || (v0 = 8i64 * tls_index, !*(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 1016i64)) )
  {
    threadId[9] = Sys_GetCurrentThreadId();
    v0 = 8i64 * tls_index;
    *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 1000i64) = 9;
    Sys_InitThread(THREAD_CONTEXT_TITLE_SERVER);
  }
  if ( *(void *(**)[3])(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 1016i64) != (void *(*)[3])g_threadValues[9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2030, ASSERT_TYPE_ASSERT, "(g_dwTlsIndex == g_threadValues[THREAD_CONTEXT_TITLE_SERVER])", (const char *)&queryFormat, "g_dwTlsIndex == g_threadValues[THREAD_CONTEXT_TITLE_SERVER]") )
    __debugbreak();
}

/*
==============
Sys_TryInitBinkIOThread
==============
*/
void Sys_TryInitBinkIOThread(void)
{
  __int64 v0; 

  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_DWORD *)(v0 + 1000) == 28 )
    *(_DWORD *)(v0 + 1000) = 20;
}

/*
==============
Sys_UnblockDatabaseThread
==============
*/
void Sys_UnblockDatabaseThread(void)
{
  _QWORD *v0; 
  HANDLE v1; 

  Sys_CheckIsCorrectDatabaseThreadAffinity();
  if ( g_blockDatabaseThreadInited && !*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1008i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3465, ASSERT_TYPE_ASSERT, "(!g_blockDatabaseThreadInited || g_blockDatabaseThread)", (const char *)&queryFormat, "!g_blockDatabaseThreadInited || g_blockDatabaseThread") )
    __debugbreak();
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 996i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3467, ASSERT_TYPE_ASSERT, "(!s_pushUnblockActive)", (const char *)&queryFormat, "!s_pushUnblockActive") )
    __debugbreak();
  v0 = NtCurrentTeb()->Reserved1[11];
  v1 = blockDatabaseEvent;
  g_blockDatabaseThreadInited = 1;
  *(_DWORD *)(v0[tls_index] + 1008i64) = 0;
  SetEvent(v1);
}

/*
==============
Sys_UpdateSoundThreadAffinities
==============
*/
void Sys_UpdateSoundThreadAffinities(bool lowUse)
{
  void *v1; 
  unsigned int v3; 
  void *v4; 
  void *v5; 

  v1 = threadHandle[12];
  v3 = 64;
  if ( lowUse )
    v3 = 1;
  SetThreadAffinityMask(threadHandle[12], v3);
  Sys_MarkAffinitySetBool(v1);
  Sys_MarkAffinitySetBool(v1);
  v4 = threadHandle[10];
  SetThreadAffinityMask(threadHandle[10], (unsigned int)(1 << (4 * !lowUse + 2)));
  Sys_MarkAffinitySetBool(v4);
  Sys_MarkAffinitySetBool(v4);
  v5 = threadHandle[11];
  SetThreadAffinityMask(threadHandle[11], v3);
  Sys_MarkAffinitySetBool(v5);
  Sys_MarkAffinitySetBool(v5);
}

/*
==============
Sys_WaitForDatabaseThreadWake
==============
*/
void Sys_WaitForDatabaseThreadWake(void)
{
  DWORD v0; 
  __int64 v1; 

  if ( Sys_GetCurrentThreadId() != threadId[7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 3007, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v0 = WaitForSingleObject(s_wakeDatabaseEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    LODWORD(v1) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForFileStream
==============
*/
void Sys_WaitForFileStream(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(s_fileStreamCompletedEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForImageTrackingWake
==============
*/
void Sys_WaitForImageTrackingWake(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(s_imageReportReadyEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForSaveHistory
==============
*/
void Sys_WaitForSaveHistory(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(g_saveHistoryEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForSaveHistoryDone
==============
*/
void Sys_WaitForSaveHistoryDone(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(g_saveHistoryDoneEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForSingleObject
==============
*/
void Sys_WaitForSingleObject(void **event)
{
  DWORD v1; 
  DWORD v2; 

  v1 = WaitForSingleObject(*event, 0xFFFFFFFF);
  if ( v1 )
  {
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v2) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForSingleObjectTimeout
==============
*/
_BOOL8 Sys_WaitForSingleObjectTimeout(void **event, unsigned int msec)
{
  if ( msec == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1147, ASSERT_TYPE_ASSERT, "( msec != 0xFFFFFFFF )", (const char *)&queryFormat, "msec != INFINITE") )
    __debugbreak();
  return WaitForSingleObject(*event, msec) == 0;
}

/*
==============
Sys_WaitForWorkerCmd
==============
*/
void Sys_WaitForWorkerCmd(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(s_workerEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitForWorkerCmdWithTimeout
==============
*/
_BOOL8 Sys_WaitForWorkerCmdWithTimeout()
{
  return WaitForSingleObject(s_workerEvent, 1u) == 0;
}

/*
==============
Sys_WaitGameSaveEvent
==============
*/
void Sys_WaitGameSaveEvent(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(gameSaveEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitNextFrameDataBackendSetupDone
==============
*/
void Sys_WaitNextFrameDataBackendSetupDone(void)
{
  do
    Sys_CheckSuspendThread();
  while ( WaitForSingleObject(s_nextFrameDataBackendSetupDoneEvent, 0xAu) );
}

/*
==============
Sys_WaitSaveGameSecondaryEvent
==============
*/
void Sys_WaitSaveGameSecondaryEvent(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(saveGameSecondaryEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitSaveTasksEvent
==============
*/
void Sys_WaitSaveTasksEvent(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(s_saveTaskEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WaitServer
==============
*/
__int64 Sys_WaitServer()
{
  __int64 v1; 

  if ( ((unsigned __int8)&g_serverContextOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_serverContextOwnership) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&g_serverContextOwnership, 2, 0) != 1 )
    return 1i64;
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1008i64) && GetCurrentProcessorNumber() == 1 )
  {
    Com_PrintStackTrace();
    LODWORD(v1) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1098, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Sys_Sleep( %d ) on DB core while g_blockDatabaseThread set", v1) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "Sys_Sleep");
  Sleep(1u);
  Sys_ProfEndNamedEvent();
  return 0i64;
}

/*
==============
Sys_WaitStartServer
==============
*/
__int64 Sys_WaitStartServer(const int timeout, const int interval)
{
  int v4; 
  unsigned __int64 v5; 

  if ( timeout )
    v4 = Sys_Milliseconds();
  else
    v4 = 0;
  do
  {
    if ( g_mainThreadRequestServerOwnership || s_databaseStopServer )
    {
      v5 = (unsigned __int64)&g_serverContextOwnership & 3;
    }
    else
    {
      v5 = (unsigned __int64)&g_serverContextOwnership & 3;
      if ( ((unsigned __int8)&g_serverContextOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_serverContextOwnership) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&g_serverContextOwnership, 1, 0) != 2 && !g_mainThreadRequestServerOwnership && !s_databaseStopServer )
        return 1i64;
    }
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_serverContextOwnership) )
      __debugbreak();
    _InterlockedCompareExchange(&g_serverContextOwnership, 0, 1);
    if ( !timeout )
      break;
    Sys_Sleep(interval);
  }
  while ( Sys_Milliseconds() - v4 < timeout );
  return 0i64;
}

/*
==============
Sys_WaitStatsWriteEvent
==============
*/
void Sys_WaitStatsWriteEvent(void)
{
  DWORD v0; 
  DWORD v1; 

  v0 = WaitForSingleObject(statsWriteEvent, 0xFFFFFFFF);
  if ( v0 )
  {
    v1 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
      __debugbreak();
  }
}

/*
==============
Sys_WakeDatabaseThread
==============
*/
void Sys_WakeDatabaseThread(void)
{
  SetEvent(s_wakeDatabaseEvent);
}

/*
==============
Sys_WakeFileStream
==============
*/
void Sys_WakeFileStream(void)
{
  SetEvent(s_fileStreamEvent);
}

/*
==============
Sys_WakeFileStreamAsync
==============
*/
void Sys_WakeFileStreamAsync(void)
{
  SetEvent(s_fileStreamAsyncEvent);
}

/*
==============
Sys_WakeImageTrackingThread
==============
*/
void Sys_WakeImageTrackingThread(void)
{
  SetEvent(s_imageReportReadyEvent);
}

/*
==============
Sys_WakeRenderer
==============
*/
void Sys_WakeRenderer(const GfxBackEndData *data)
{
  volatile int v2; 

  if ( (unsigned int)g_renderWaitCount > 1 )
  {
    v2 = g_renderWaitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2581, ASSERT_TYPE_ASSERT, "( ( (renderWaitCount == 0) || (renderWaitCount == 1) ) )", "( renderWaitCount ) = %i", v2) )
      __debugbreak();
  }
  if ( ((unsigned __int8)&g_renderWaitCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_renderWaitCount) )
    __debugbreak();
  _InterlockedIncrement(&g_renderWaitCount);
  if ( smpData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2586, ASSERT_TYPE_ASSERT, "(!smpData)", (const char *)&queryFormat, "!smpData") )
    __debugbreak();
  smpData = (void *volatile)data;
  Sys_ProfBeginNamedEvent(0xFF008008, "set smpData");
  Sys_ProfEndNamedEvent();
  if ( !s_backendEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 2602, ASSERT_TYPE_ASSERT, "(Sys_IsEventInitialized( s_backendEvent ))", (const char *)&queryFormat, "Sys_IsEventInitialized( s_backendEvent )") )
    __debugbreak();
  SetEvent(s_backendEvent);
  SetEvent(s_workerEvent);
}

/*
==============
Sys_WakeServer
==============
*/
void Sys_WakeServer(void)
{
  g_mainThreadRequestServerOwnership = 0;
  if ( ((unsigned __int8)&g_serverContextOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_serverContextOwnership) )
    __debugbreak();
  _InterlockedCompareExchange(&g_serverContextOwnership, 0, 2);
}

/*
==============
Sys_WakeServerFromServer
==============
*/
void Sys_WakeServerFromServer(void)
{
  g_mainThreadRequestServerOwnership = 0;
}

/*
==============
Sys_YieldWorkerCmd
==============
*/
void Sys_YieldWorkerCmd(void)
{
  DWORD v0; 
  __int64 v1; 

  Sys_ProfBeginNamedEvent(0xFFFFFF00, "yield worker");
  SetEvent(s_workerEvent);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Sys_Sleep");
  Sleep(0);
  Sys_ProfEndNamedEvent();
  if ( GetCurrentProcessorNumber() == 1 )
  {
    if ( ((unsigned __int8)&s_waitCountForBlockDBEvent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_waitCountForBlockDBEvent) )
      __debugbreak();
    _InterlockedIncrement(&s_waitCountForBlockDBEvent);
    v0 = WaitForSingleObject(blockDatabaseEvent, 0xFFFFFFFF);
    if ( v0 )
    {
      LODWORD(v1) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads.cpp", 1157, ASSERT_TYPE_ASSERT, "( ( result == ((((DWORD )0x00000000L) ) + 0 ) ) )", "( result ) = %i", v1) )
        __debugbreak();
    }
    if ( ((unsigned __int64)&s_waitCountForBlockDBEvent & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_waitCountForBlockDBEvent) )
      __debugbreak();
    _InterlockedDecrement(&s_waitCountForBlockDBEvent);
  }
  Sys_ProfEndNamedEvent();
}

