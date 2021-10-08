/*
==============
Online_Skill_SetRankForXuid
==============
*/

void __fastcall Online_Skill_SetRankForXuid(const XUID *xuid, const float rank)
{
  ?Online_Skill_SetRankForXuid@@YAXAEBUXUID@@M@Z(xuid, rank);
}

/*
==============
Online_Skill_GenerateRandomSkill
==============
*/

int __fastcall Online_Skill_GenerateRandomSkill()
{
  return ?Online_Skill_GenerateRandomSkill@@YAHXZ();
}

/*
==============
Online_Skill_Upload
==============
*/

void Online_Skill_Upload(void)
{
  ?Online_Skill_Upload@@YAXXZ();
}

/*
==============
Online_Skill_SubmitPerformanceComplete
==============
*/

void __fastcall Online_Skill_SubmitPerformanceComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?Online_Skill_SubmitPerformanceComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Skill_Reset
==============
*/

void Online_Skill_Reset(void)
{
  ?Online_Skill_Reset@@YAXXZ();
}

/*
==============
Online_Skill_RetryBackoffComplete
==============
*/

void __fastcall Online_Skill_RetryBackoffComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?Online_Skill_RetryBackoffComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Skill_ConvertPerformanceToInt
==============
*/

int __fastcall Online_Skill_ConvertPerformanceToInt(const float performanceValue)
{
  return ?Online_Skill_ConvertPerformanceToInt@@YAHM@Z(performanceValue);
}

/*
==============
Online_Skill_RetryBackoffTaskUpdate
==============
*/

void __fastcall Online_Skill_RetryBackoffTaskUpdate(GenericTask *pTask)
{
  ?Online_Skill_RetryBackoffTaskUpdate@@YAXPEAVGenericTask@@@Z(pTask);
}

/*
==============
Online_Skill_RetrySubmit
==============
*/

bool __fastcall Online_Skill_RetrySubmit()
{
  return ?Online_Skill_RetrySubmit@@YA_NXZ();
}

/*
==============
Online_Skill_ConvertPerformanceToInt
==============
*/

int __fastcall Online_Skill_ConvertPerformanceToInt(double performanceValue)
{
  int result; 

  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Online_Skill_GenerateRandomSkill
==============
*/

int __fastcall Online_Skill_GenerateRandomSkill(double _XMM0_8)
{
  int result; 

  rand();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3d7a01f4
    vsubss  xmm2, xmm1, cs:__real@447a0000
    vcvttss2si eax, xmm2
  }
  return result;
}

/*
==============
Online_Skill_Reset
==============
*/
void Online_Skill_Reset(void)
{
  __int64 v0; 
  _QWORD *v1; 
  RetryTimer::Config config; 

  v0 = s_performanceCount;
  if ( (int)s_performanceCount > 0 )
  {
    v1 = &s_performanceValues[0]._bytes_20[8];
    do
    {
      *(v1 - 1) = 0i64;
      *v1 = 0i64;
      v1 += 8;
      --v0;
    }
    while ( v0 );
  }
  config.backoffDelay = DVARINT_online_skill_upload_retry_delay;
  s_performanceCount = 0;
  config.refreshDelay = NULL;
  config.maxBackoffDelay = NULL;
  *(_QWORD *)&config.initialMode = 0i64;
  RetryTimer::Init(&s_retryTimer_0, &config);
}

/*
==============
Online_Skill_RetryBackoffComplete
==============
*/
void Online_Skill_RetryBackoffComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  if ( taskState )
  {
    Com_PrintError(25, "Error waiting for retry performance task, will not retry\n");
    Online_Skill_Reset();
  }
  else
  {
    Online_Skill_Upload();
  }
}

/*
==============
Online_Skill_RetryBackoffTaskUpdate
==============
*/
void Online_Skill_RetryBackoffTaskUpdate(GenericTask *pTask)
{
  if ( RetryTimer::IsExpired(&s_retryTimer_0) )
    pTask->m_genericTaskState = TASKSTATE_SUCCESS;
}

/*
==============
Online_Skill_RetrySubmit
==============
*/
__int64 Online_Skill_RetrySubmit()
{
  unsigned __int8 v0; 
  const dvar_t *v1; 
  int integer; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  v0 = 0;
  v1 = DVARINT_online_skill_upload_max_fail_count;
  if ( !DVARINT_online_skill_upload_max_fail_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_skill_upload_max_fail_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( RetryTimer::GetRetryCount(&s_retryTimer_0) < integer )
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    pTaskCreateRequest.m_onCompletionCallback = Online_Skill_RetryBackoffComplete;
    pTaskCreateRequest.m_onUpdateCallback = Online_Skill_RetryBackoffTaskUpdate;
    Instance = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "Error writing performance stats, will retry.\n");
      RetryTimer::Start(&s_retryTimer_0, MODE_BACKOFF);
      v0 = 1;
    }
    else
    {
      Com_PrintError(25, "%s Failed to create task\n", "Online_Skill_RetrySubmit");
    }
    pTaskCreateRequest.m_onCompletionCallback = NULL;
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_appSecondaryCallback = NULL;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    if ( pTaskCreateRequest.m_asyncInfo )
    {
      pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
      m_asyncInfo = NULL;
      pTaskCreateRequest.m_asyncInfo = NULL;
    }
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
      }
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
  }
  return v0;
}

/*
==============
Online_Skill_SetRankForXuid
==============
*/

void __fastcall Online_Skill_SetRankForXuid(const XUID *xuid, double rank)
{
  unsigned __int64 v5; 
  signed int v6; 
  _BYTE *bytes_20; 
  __int64 v9; 
  const char *v12; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = XUID::ToUint64((XUID *)xuid);
  v6 = 0;
  if ( (int)s_performanceCount > 0 )
  {
    bytes_20 = s_performanceValues[0]._bytes_20;
    do
    {
      if ( *(_QWORD *)bytes_20 == v5 )
        break;
      ++v6;
      bytes_20 += 64;
    }
    while ( v6 < (int)s_performanceCount );
  }
  if ( v6 != s_performanceCount )
    goto LABEL_8;
  if ( (int)s_performanceCount < 72 )
  {
    ++s_performanceCount;
LABEL_8:
    __asm { vmulss  xmm0, xmm6, cs:__real@447a0000 }
    v9 = (__int64)v6 << 6;
    *(_QWORD *)&s_performanceValues[0]._bytes_20[v9] = v5;
    __asm { vcvttss2si eax, xmm0 }
    *(_QWORD *)&s_performanceValues[0]._bytes_20[v9 + 8] = _EAX;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    return;
  }
  v12 = XUID::ToDevString((XUID *)xuid);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  Com_PrintError(25, "%s failed for %s because the cache is full\n", "Online_Skill_SetRankForXuid", v12);
}

/*
==============
Online_Skill_SubmitPerformanceComplete
==============
*/
void Online_Skill_SubmitPerformanceComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int32 v2; 
  unsigned int RetryCount; 

  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Performance stats write complete, resetting skill\n");
    goto LABEL_5;
  }
  v2 = taskState - 1;
  if ( v2 && v2 != 4 )
  {
    Com_PrintError(25, "Unhandled error writing performance stats, resetting skill\n");
LABEL_5:
    Online_Skill_Reset();
    return;
  }
  if ( !Online_Skill_RetrySubmit() )
  {
    RetryCount = RetryTimer::GetRetryCount(&s_retryTimer_0);
    Com_PrintError(25, "Error writing performance stats, max retries (%i) exceeded, resetting skill.\n", RetryCount);
    goto LABEL_5;
  }
}

/*
==============
Online_Skill_Upload
==============
*/
void Online_Skill_Upload(void)
{
  const dvar_t *v0; 
  unsigned int MatchmakingGameType; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWMatchMaking *Matchmaking; 
  TaskCreateRequest *v5; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest controllerIndex; 
  bdReference<bdRemoteTask> result; 

  if ( (int)s_performanceCount > 0 && Live_IsInLiveGame() )
  {
    v0 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( !v0->current.enabled )
    {
      MatchmakingGameType = OnlineMatchmakerOmniscient::GetMatchmakingGameType(&OnlineMatchmakerOmniscient::ms_instance);
      controllerIndex.m_appTaskType = -1;
      memset(&controllerIndex.m_appData, 0, 32);
      controllerIndex.m_onUpdateCallback = NULL;
      controllerIndex.m_cancelTaskOnSignoutEvent = 1;
      controllerIndex.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      controllerIndex.m_controllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      controllerIndex.m_onCompletionCallback = Online_Skill_SubmitPerformanceComplete;
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, controllerIndex.m_controllerIndex) )
      {
        v3 = DWServicesAccess::GetInstance();
        Matchmaking = DWServicesAccess::GetMatchmaking(v3, controllerIndex.m_controllerIndex);
        v5 = (TaskCreateRequest *)DWMatchMaking::submitPerformance(Matchmaking, &result, MatchmakingGameType, s_performanceValues, s_performanceCount);
        if ( v5 != (TaskCreateRequest *)&controllerIndex.m_remoteDemonwareTask )
        {
          if ( controllerIndex.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&controllerIndex.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && controllerIndex.m_remoteDemonwareTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))controllerIndex.m_remoteDemonwareTask.m_ptr->~bdReferencable)(controllerIndex.m_remoteDemonwareTask.m_ptr, 1i64);
          v6 = *(bdRemoteTask **)&v5->m_controllerIndex;
          controllerIndex.m_remoteDemonwareTask.m_ptr = v6;
          if ( v6 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
        }
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        if ( controllerIndex.m_remoteDemonwareTask.m_ptr )
        {
          v7 = TaskManager::GetInstance();
          TaskManager::CreateTask(v7, &controllerIndex, &pTaskCreateResult);
        }
        else
        {
          dwConnectionErrorHandler(12);
        }
      }
      TaskCreateRequest::~TaskCreateRequest(&controllerIndex);
    }
  }
}

