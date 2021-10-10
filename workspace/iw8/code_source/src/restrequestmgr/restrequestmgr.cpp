/*
==============
RESTRequest_CancelTask
==============
*/

void __fastcall RESTRequest_CancelTask(unsigned int taskID)
{
  ?RESTRequest_CancelTask@@YAXI@Z(taskID);
}

/*
==============
RESTRequest_UpdateAll
==============
*/

void RESTRequest_UpdateAll(void)
{
  ?RESTRequest_UpdateAll@@YAXXZ();
}

/*
==============
RESTRequest_CreateTask
==============
*/

bool __fastcall RESTRequest_CreateTask(unsigned int controllerID, const RESTTaskCreateRequest *Request, RESTTaskCreateResult *RESTResult)
{
  return ?RESTRequest_CreateTask@@YA_NIAEBURESTTaskCreateRequest@@AEAURESTTaskCreateResult@@@Z(controllerID, Request, RESTResult);
}

/*
==============
RESTHandleAuthFailure
==============
*/

void __fastcall RESTHandleAuthFailure(RESTTask *pTask)
{
  ?RESTHandleAuthFailure@@YAXPEAURESTTask@@@Z(pTask);
}

/*
==============
RESTRequest_CancelAll_MainThreadTasks
==============
*/

void RESTRequest_CancelAll_MainThreadTasks(void)
{
  ?RESTRequest_CancelAll_MainThreadTasks@@YAXXZ();
}

/*
==============
RESTRequest_CancelAll_ServerThreadTasks
==============
*/

void RESTRequest_CancelAll_ServerThreadTasks(void)
{
  ?RESTRequest_CancelAll_ServerThreadTasks@@YAXXZ();
}

/*
==============
GetTaskByIndexAndThreadID
==============
*/
RESTTask *GetTaskByIndexAndThreadID(unsigned int TaskIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v5; 

  v1 = TaskIndex;
  if ( TaskIndex >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 62, ASSERT_TYPE_ASSERT, "(unsigned)( TaskIndex ) < (unsigned)( 32 )", "TaskIndex doesn't index MAX_PENDING_REST_REQUESTS\n\t%i not in [0, %i)", TaskIndex, v5) )
      __debugbreak();
  }
  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 63, ASSERT_TYPE_ASSERT, "((Sys_IsMainThread() == true) || (Sys_IsServerThread() == true))", (const char *)&queryFormat, "(Sys_IsMainThread() == true) || (Sys_IsServerThread() == true)") )
    __debugbreak();
  if ( Sys_IsMainThread() )
  {
    v2 = 0i64;
  }
  else
  {
    v2 = 2i64;
    if ( Sys_IsServerThread() )
      v2 = 1i64;
  }
  return &g_RESTRequests + 2 * v1 + v2;
}

/*
==============
RESTCleanupTask
==============
*/
void RESTCleanupTask(RESTTask *pTask)
{
  unsigned int v2; 
  HttpRequest *pPlatformTransaction; 
  char *pRequestBodyData; 

  if ( pTask )
  {
    v2 = Sys_Milliseconds();
    Com_Printf(25, "\n\tRESTCleanupTask called for REST task id [%d] (current time %d)\n", pTask->TaskID, v2);
  }
  pPlatformTransaction = pTask->pPlatformTransaction;
  if ( pPlatformTransaction )
  {
    HttpRequest::~HttpRequest(pTask->pPlatformTransaction);
    HttpRequest::operator delete(pPlatformTransaction);
    pTask->pPlatformTransaction = NULL;
  }
  pRequestBodyData = pTask->pRequestBodyData;
  if ( pRequestBodyData )
  {
    HttpHeapFree(pRequestBodyData);
    pTask->pRequestBodyData = NULL;
    pTask->RequestBodyDataLength = 0i64;
  }
  RESTTask::Reset(pTask);
}

/*
==============
RESTHandleAuthFailure
==============
*/
void RESTHandleAuthFailure(RESTTask *pTask)
{
  int v2; 

  if ( !pTask->RetryCount )
  {
    v2 = Sys_Milliseconds();
    pTask->RequestState = REST_TASK_RESULT_AWAITING_RETRY;
    pTask->retryTime = v2 + 1000;
  }
}

/*
==============
RESTHandleError
==============
*/
void RESTHandleError(RESTTask *pTask)
{
  unsigned int retryLimit; 
  signed int v3; 
  int v4; 

  retryLimit = pTask->retryLimit;
  if ( retryLimit == -1 || pTask->RetryCount < retryLimit )
  {
    v3 = 1000 * (pTask->RetryCount + 1);
    if ( v3 > 16000 )
      v3 = 16000;
    v4 = Sys_Milliseconds();
    pTask->RequestState = REST_TASK_RESULT_AWAITING_RETRY;
    pTask->retryTime = v3 + v4;
  }
  else
  {
    RESTIssueUserCallback(pTask);
    RESTCleanupTask(pTask);
  }
}

/*
==============
RESTIssueUserCallback
==============
*/
void RESTIssueUserCallback(RESTTask *pTask)
{
  HttpRequest *pPlatformTransaction; 
  RESTTaskState RequestState; 
  const wchar_t *Headers; 
  HttpRequest *v6; 
  const wchar_t *Data; 
  HttpRequest *v8; 
  void (__fastcall *UserCallback)(RESTTaskResponse *, RESTTaskState); 
  __int128 v11; 
  unsigned __int64 DataLength; 
  RESTTask *v13; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 413, ASSERT_TYPE_ASSERT, "(pTask)", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  pPlatformTransaction = pTask->pPlatformTransaction;
  RequestState = pTask->RequestState;
  if ( pPlatformTransaction )
  {
    Headers = HttpRequest::GetHeaders(pPlatformTransaction);
    v6 = pTask->pPlatformTransaction;
    *(_QWORD *)&v11 = Headers;
    Data = HttpRequest::GetData(v6);
    v8 = pTask->pPlatformTransaction;
    *((_QWORD *)&v11 + 1) = Data;
    DataLength = HttpRequest::GetDataLength(v8);
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v11 = _XMM0;
    DataLength = 0i64;
  }
  UserCallback = pTask->UserCallback;
  v13 = pTask;
  pTask->isInApplicationCallback = 1;
  if ( UserCallback )
    UserCallback((RESTTaskResponse *)&v11, RequestState);
  pTask->isInApplicationCallback = 0;
}

/*
==============
RESTPrepareTaskForRequest
==============
*/
char RESTPrepareTaskForRequest(unsigned int controllerID, RESTTask *pTask, const RESTTaskCreateRequest *Request, RESTTaskCreateResult *RESTResult, ...)
{
  RESTTaskCreateResult *v4; 
  unsigned int v7; 
  HttpRequest *v8; 
  char v9; 
  HttpRequest *pPlatformTransaction; 
  unsigned __int64 RequestBodyDataLength; 
  char *v12; 
  char result; 
  unsigned __int64 v14; 
  char *pRequestBodyData; 
  HttpRequest *v16; 
  HttpRequest *v17; 
  __int64 v18; 
  int v19; 
  Windows::Xbox::System::User *currentUser; 
  int v21; 
  RESTTaskCreateResult *v22; 
  char *v23; 
  RESTTask *RESTurl; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  const wchar_t *RESTverb; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  volatile unsigned int v32; 
  unsigned int TimeoutInMS; 
  int v34; 
  char v35; 
  int userIndexToReturn; 
  RESTTaskCreateResult *v37; 
  __int64 isRetry; 
  va_list isRetrya; 
  va_list va1; 

  va_start(va1, RESTResult);
  va_start(isRetrya, RESTResult);
  isRetry = va_arg(va1, _QWORD);
  v37 = RESTResult;
  v35 = controllerID;
  v4 = RESTResult;
  v7 = controllerID;
  v34 = Sys_Milliseconds();
  v8 = NULL;
  v9 = isRetry;
  if ( pTask->pPlatformTransaction )
  {
    if ( !(_BYTE)isRetry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 254, ASSERT_TYPE_ASSERT, "(isRetry)", (const char *)&queryFormat, "isRetry") )
      __debugbreak();
    Com_Printf(25, "Cleaning up a previous platform transaction for task id [%d] retry\n", pTask->TaskID);
    pPlatformTransaction = pTask->pPlatformTransaction;
    if ( pPlatformTransaction )
    {
      HttpRequest::~HttpRequest(pTask->pPlatformTransaction);
      HttpRequest::operator delete(pPlatformTransaction);
    }
    pTask->pPlatformTransaction = NULL;
    v4 = v37;
  }
  if ( !v9 )
  {
    RequestBodyDataLength = Request->RequestBodyDataLength;
    if ( RequestBodyDataLength )
    {
      v12 = (char *)HttpHeapMalloc(RequestBodyDataLength);
      pTask->pRequestBodyData = v12;
      if ( !v12 )
      {
        result = 0;
        v4->RequestResult = REST_REQUEST_CREATE_FAILED_MEMORY_ERROR;
        return result;
      }
      pTask->RequestBodyDataLength = Request->RequestBodyDataLength;
      memcpy_0(v12, Request->pRequestBodyData, Request->RequestBodyDataLength);
    }
  }
  v14 = pTask->RequestBodyDataLength;
  pRequestBodyData = pTask->pRequestBodyData;
  pTask->pPlatformTransaction = NULL;
  v16 = (HttpRequest *)HttpRequest::operator new(0x30ui64);
  if ( v16 )
  {
    HttpRequest::HttpRequest(v16, Request->pAppDataBuffer, Request->AppDataMaxByteLength, Request->XContractType);
    v8 = v17;
  }
  v18 = -1i64;
  if ( v8 )
  {
    userIndexToReturn = -1;
    if ( GPad_GetUserIndexForPort(v7, &userIndexToReturn) )
    {
      currentUser = Users_GetUser(userIndexToReturn);
      v21 = currentUser->__abi_get_IsSignedIn(currentUser, (bool *)isRetrya);
      if ( v21 < 0 )
        __abi_WinRTraiseException(v21);
      if ( !(_BYTE)isRetry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 143, ASSERT_TYPE_ASSERT, "(currentUser->IsSignedIn)", (const char *)&queryFormat, "currentUser->IsSignedIn") )
        __debugbreak();
      if ( HttpRequest::Open(v8, Request->RESTverb, Request->RESTurl, pRequestBodyData, v14, currentUser) >= 0 )
      {
        pTask->pPlatformTransaction = v8;
        if ( currentUser )
          currentUser->__abi_Release(currentUser);
        v19 = 0;
      }
      else
      {
        HttpRequest::~HttpRequest(v8);
        HttpRequest::operator delete(v8);
        if ( currentUser )
          currentUser->__abi_Release(currentUser);
        v19 = 4;
      }
      LOBYTE(v7) = v35;
    }
    else
    {
      Com_Printf(25, "!!!!!!!!!!!!!!!! GPad_GetUserIndexForPort() failed for controller index %d! Web service request cannot be created !!!!!!!!!!!!\n", v7);
      HttpRequest::~HttpRequest(v8);
      HttpRequest::operator delete(v8);
      v19 = 4;
    }
  }
  else
  {
    v19 = 3;
  }
  v22 = v37;
  v37->RequestResult = v19;
  if ( pTask->pPlatformTransaction )
  {
    if ( !v9 )
    {
      pTask->UserCallback = Request->Callback;
      pTask->SuppressCallbackOnCancel = Request->SuppressCallbackOnCancel;
      pTask->pApplicationData = Request->pApplicationData;
      pTask->pAppDataBuffer = Request->pAppDataBuffer;
      pTask->AppDataMaxByteLength = Request->AppDataMaxByteLength;
      pTask->retryLimit = Request->retryLimit;
      pTask->RequestState = REST_TASK_RESULT_PENDING;
      pTask->ControllerIndex = v7;
      RESTurl = (RESTTask *)Request->RESTurl;
      if ( RESTurl != (RESTTask *)pTask->RESTurl )
      {
        v25 = -1i64;
        do
          ++v25;
        while ( *((_WORD *)&RESTurl->Type + v25) );
        if ( (unsigned __int64)(2i64 * (int)v25) >= 0x1FF )
        {
          v27 = 511;
        }
        else
        {
          v26 = -1i64;
          do
            ++v26;
          while ( *((_WORD *)&RESTurl->Type + v26) );
          v27 = 2 * v26;
        }
        memset_0(pTask->RESTurl, 0, sizeof(pTask->RESTurl));
        memcpy_0(pTask->RESTurl, Request->RESTurl, v27);
        RESTverb = Request->RESTverb;
        v29 = -1i64;
        do
          ++v29;
        while ( RESTverb[v29] );
        if ( (unsigned __int64)(2i64 * (int)v29) >= 0x1F )
        {
          v30 = 31;
        }
        else
        {
          do
            ++v18;
          while ( RESTverb[v18] );
          v30 = 2 * v18;
        }
        *(_QWORD *)pTask->RESTverb = 0i64;
        *(_QWORD *)&pTask->RESTverb[4] = 0i64;
        *(_QWORD *)&pTask->RESTverb[8] = 0i64;
        *(_QWORD *)&pTask->RESTverb[12] = 0i64;
        memcpy_0(pTask->RESTverb, Request->RESTverb, v30);
      }
    }
    pTask->TaskStartTime = v34;
    if ( v9 )
    {
      Com_Printf(25, "Updating Task id [%d] for retry\n", pTask->TaskID);
    }
    else
    {
      do
      {
        v31 = g_NextRESTTaskID;
        v32 = g_NextRESTTaskID;
      }
      while ( v32 != _InterlockedCompareExchange((volatile signed __int32 *)&g_NextRESTTaskID, g_NextRESTTaskID + 1, g_NextRESTTaskID) );
      pTask->TaskID = v31;
      Com_Printf(25, "REST Task id [%d] created for application\n", v31);
    }
    TimeoutInMS = Request->TimeoutInMS;
    if ( TimeoutInMS )
    {
      pTask->TimeoutTime = v34 + TimeoutInMS;
      Com_Printf(25, "\n\tTask setup to expire %d milliseconds from now (current time %d)\n", Request->TimeoutInMS, (unsigned int)pTask->TaskStartTime);
    }
    v22->pTask = pTask;
    v22->RequestResult = REST_REQUEST_CREATE_SUCCESS;
    return 1;
  }
  else
  {
    if ( v9 )
      pTask->RequestState = REST_TASK_RESULT_PLATFORM_ERROR;
    v23 = pTask->pRequestBodyData;
    if ( v23 )
    {
      HttpHeapFree(v23);
      pTask->pRequestBodyData = NULL;
      pTask->RequestBodyDataLength = 0i64;
    }
    return 0;
  }
}

/*
==============
RESTRequest_CancelAll_MainThreadTasks
==============
*/
void RESTRequest_CancelAll_MainThreadTasks(void)
{
  __int64 i; 
  HttpRequest *v1; 

  Com_Printf(25, "%s\n", "RESTRequest_CancelAll_MainThreadTasks");
  for ( i = 0i64; i < 42496; i += 1328i64 )
  {
    if ( *(RESTTaskState *)((char *)&g_RESTRequests.RequestState + i) )
    {
      Com_Printf(25, "REST task id [%d] being canceled switching to state %d\n", *(unsigned int *)((char *)&g_RESTRequests.TaskID + i), 3i64);
      v1 = *(HttpRequest **)((char *)&g_RESTRequests.pPlatformTransaction + i);
      *(RESTTaskState *)((char *)&g_RESTRequests.RequestState + i) = REST_TASK_RESULT_CANCELED;
      HttpRequest::CancelTransaction(v1);
    }
  }
}

/*
==============
RESTRequest_CancelAll_ServerThreadTasks
==============
*/
void RESTRequest_CancelAll_ServerThreadTasks(void)
{
  __int64 i; 
  HttpRequest *v1; 

  Com_Printf(25, "%s\n", "RESTRequest_CancelAll_ServerThreadTasks");
  for ( i = 0i64; i < 42496; i += 1328i64 )
  {
    if ( *(_DWORD *)((char *)&g_RESTRequests + i + 680) )
    {
      Com_Printf(25, "REST task id [%d] being canceled switching to state %d\n", *(unsigned int *)((char *)&g_RESTRequests + i + 672), 3i64);
      v1 = *(HttpRequest **)((char *)&g_RESTRequests + i + 752);
      *(_DWORD *)((char *)&g_RESTRequests + i + 680) = 3;
      HttpRequest::CancelTransaction(v1);
    }
  }
}

/*
==============
RESTRequest_CancelTask
==============
*/
void RESTRequest_CancelTask(unsigned int taskID)
{
  unsigned int v2; 
  RESTTask *TaskByIndexAndThreadID; 
  RESTTask *v4; 
  __int64 v5; 
  HttpRequest *pPlatformTransaction; 

  Com_Printf(25, "REST task id [%d] being canceled\n", taskID);
  v2 = 0;
  while ( 1 )
  {
    TaskByIndexAndThreadID = GetTaskByIndexAndThreadID(v2);
    v4 = TaskByIndexAndThreadID;
    v5 = TaskByIndexAndThreadID->TaskID;
    if ( (_DWORD)v5 == taskID )
      break;
    if ( (int)++v2 >= 32 )
      goto LABEL_4;
  }
  if ( !TaskByIndexAndThreadID )
  {
LABEL_4:
    Com_PrintError(25, "REST task id [%d] not found in list, cancel not performed\n", taskID);
    return;
  }
  Com_Printf(25, "REST task id [%d] being canceled switching to state %d\n", v5, 3i64);
  pPlatformTransaction = v4->pPlatformTransaction;
  v4->RequestState = REST_TASK_RESULT_CANCELED;
  HttpRequest::CancelTransaction(pPlatformTransaction);
}

/*
==============
RESTRequest_CreateTask
==============
*/
char RESTRequest_CreateTask(unsigned int controllerID, const RESTTaskCreateRequest *Request, RESTTaskCreateResult *RESTResult)
{
  unsigned int v6; 
  RESTTask *TaskByIndexAndThreadID; 
  RESTTask *v8; 
  char v10; 
  char *fmt; 

  if ( controllerID >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 372, ASSERT_TYPE_ASSERT, "( ( controllerID >= 0 && controllerID < 8 ) )", "( controllerID ) = %i", controllerID) )
    __debugbreak();
  if ( !Request->RESTurl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 373, ASSERT_TYPE_ASSERT, "(Request.RESTurl)", (const char *)&queryFormat, "Request.RESTurl") )
    __debugbreak();
  if ( !Request->RESTverb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 375, ASSERT_TYPE_ASSERT, "(Request.RESTverb)", (const char *)&queryFormat, "Request.RESTverb") )
    __debugbreak();
  v6 = 0;
  while ( 1 )
  {
    TaskByIndexAndThreadID = GetTaskByIndexAndThreadID(v6);
    v8 = TaskByIndexAndThreadID;
    if ( TaskByIndexAndThreadID->RequestState == REST_TASK_RESULT_NOT_USED )
      break;
    if ( (int)++v6 >= 32 )
    {
      RESTResult->RequestResult = REST_REQUEST_CREATE_FAILED_TOO_MANY_TASKS;
      return 0;
    }
  }
  RESTTask::Reset(TaskByIndexAndThreadID);
  if ( v8 )
  {
    LOBYTE(fmt) = 0;
    v10 = RESTPrepareTaskForRequest(controllerID, v8, Request, RESTResult, fmt);
    if ( !v10 )
      RESTCleanupTask(v8);
    return v10;
  }
  else
  {
    RESTResult->RequestResult = REST_REQUEST_CREATE_FAILED_TOO_MANY_TASKS;
    return 0;
  }
}

/*
==============
RESTRequest_UpdateAll
==============
*/
void RESTRequest_UpdateAll(void)
{
  unsigned int v0; 
  int v1; 
  RESTTask *TaskByIndexAndThreadID; 
  RESTTask *v3; 
  __int64 v4; 
  __int64 TaskID; 
  __int64 v6; 
  __int64 v7; 
  int TimeoutTime; 
  int v9; 
  int v10; 
  HttpRequest *pPlatformTransaction; 
  const char *pRequestBodyData; 
  unsigned int ControllerIndex; 
  unsigned int v14; 
  char *fmt; 
  RESTTaskCreateResult RESTResult; 
  RESTTaskCreateRequest Request; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 656, ASSERT_TYPE_ASSERT, "((Sys_IsMainThread() == true) || (Sys_IsServerThread() == true))", (const char *)&queryFormat, "(Sys_IsMainThread() == true) || (Sys_IsServerThread() == true)") )
    __debugbreak();
  v0 = 0;
  v1 = Sys_Milliseconds();
  while ( 2 )
  {
    TaskByIndexAndThreadID = GetTaskByIndexAndThreadID(v0);
    v3 = TaskByIndexAndThreadID;
    if ( TaskByIndexAndThreadID->isInApplicationCallback )
    {
      if ( !HttpRequest::IsFinished(TaskByIndexAndThreadID->pPlatformTransaction) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 452, ASSERT_TYPE_ASSERT, "(pTask->pPlatformTransaction->IsFinished())", (const char *)&queryFormat, "pTask->pPlatformTransaction->IsFinished()") )
        __debugbreak();
      RESTCleanupTask(v3);
    }
    switch ( v3->RequestState )
    {
      case REST_TASK_RESULT_SUCCESS:
        goto $LN15_53;
      case REST_TASK_RESULT_PENDING:
        if ( HttpRequest::IsFinished(v3->pPlatformTransaction) )
        {
          v4 = *(unsigned int *)(*(_QWORD *)&v3->pPlatformTransaction->url[4] + 20i64);
          v3->HttpStatusCode = v4;
          if ( (unsigned int)v4 >= 0xC8 )
          {
            if ( (unsigned int)v4 <= 0xCA || (_DWORD)v4 == 204 )
            {
              *(_QWORD *)&v3->RequestState = 1i64;
              goto LABEL_20;
            }
            if ( (_DWORD)v4 == 401 )
            {
              TaskID = v3->TaskID;
              LODWORD(fmt) = v3->RetryCount;
              v3->RequestState = REST_TASK_RESULT_AUTH_FAILED_ERROR;
              v3->ErrorCode = 401;
              Com_PrintError(25, "REST task id [%d] encountered HTTP AUTH ERROR %d (retry count %d)\n", TaskID);
LABEL_20:
              v7 = v3->TaskID;
              v3->TaskCompleteTime = v1;
              Com_Printf(25, "REST task id [%d] finished in %d milliseconds\n", v7, (unsigned int)(v1 - v3->TaskStartTime));
              goto LABEL_44;
            }
          }
          v6 = v3->TaskID;
          v3->RequestState = REST_TASK_RESULT_HTTP_ERROR;
          v3->ErrorCode = v4;
          Com_PrintError(25, "REST task id [%d] encountered HTTP ERROR %d\n", v6, v4);
          goto LABEL_20;
        }
        TimeoutTime = v3->TimeoutTime;
        if ( TimeoutTime && v1 > TimeoutTime )
        {
LABEL_32:
          Com_PrintError(25, "REST task id [%d] timed out after %d milliseconds, canceling platform task\n", v3->TaskID, (unsigned int)(v1 - v3->TaskStartTime));
          Com_Printf(25, "REST task id [%d] being canceled switching to state %d\n", v3->TaskID, 8i64);
          pPlatformTransaction = v3->pPlatformTransaction;
          v3->RequestState = REST_TASK_RESULT_TIMED_OUT;
          HttpRequest::CancelTransaction(pPlatformTransaction);
        }
LABEL_44:
        if ( (int)++v0 < 32 )
          continue;
        return;
      case REST_TASK_RESULT_CANCELED:
      case REST_TASK_RESULT_TIMED_OUT:
        if ( HttpRequest::IsFinished(v3->pPlatformTransaction) )
        {
          if ( !v3->SuppressCallbackOnCancel )
$LN15_53:
            RESTIssueUserCallback(v3);
          RESTCleanupTask(v3);
        }
        goto LABEL_44;
      case REST_TASK_RESULT_HTTP_ERROR:
      case REST_TASK_RESULT_PLATFORM_ERROR:
        goto $LN18_49;
      case REST_TASK_RESULT_AUTH_FAILED_ERROR:
        if ( !v3->RetryCount )
        {
          v9 = Sys_Milliseconds();
          v3->RequestState = REST_TASK_RESULT_AWAITING_RETRY;
          v3->retryTime = v9 + 1000;
        }
        goto LABEL_44;
      case REST_TASK_RESULT_MEMORY_ERROR:
        goto $LN91_0;
      case REST_TASK_RESULT_AWAITING_RETRY:
        v10 = v3->TimeoutTime;
        if ( v10 && v1 > v10 )
          goto LABEL_32;
        if ( v1 >= v3->retryTime )
        {
          pRequestBodyData = v3->pRequestBodyData;
          ++v3->RetryCount;
          Request.pRequestBodyData = pRequestBodyData;
          Request.RequestBodyDataLength = v3->RequestBodyDataLength;
          memset(&Request.SuppressCallbackOnCancel, 0, 36);
          Request.retryLimit = 0;
          Request.TimeoutInMS = 25000;
          Request.XContractType = 1;
          Request.RESTurl = v3->RESTurl;
          Request.RESTverb = v3->RESTverb;
          if ( v3 == (RESTTask *)-152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 230, ASSERT_TYPE_ASSERT, "(Request.RESTurl)", (const char *)&queryFormat, "Request.RESTurl") )
            __debugbreak();
          if ( v3 == (RESTTask *)-120i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.cpp", 232, ASSERT_TYPE_ASSERT, "(Request.RESTverb)", (const char *)&queryFormat, "Request.RESTverb") )
            __debugbreak();
          ControllerIndex = v3->ControllerIndex;
          Request.Callback = v3->UserCallback;
          Request.SuppressCallbackOnCancel = v3->SuppressCallbackOnCancel;
          Request.pApplicationData = v3->pApplicationData;
          Request.pAppDataBuffer = v3->pAppDataBuffer;
          Request.AppDataMaxByteLength = v3->AppDataMaxByteLength;
          v14 = v3->TimeoutTime - v1;
          v3->RequestState = REST_TASK_RESULT_PENDING;
          Request.TimeoutInMS = v14;
          LOBYTE(fmt) = 1;
          if ( RESTPrepareTaskForRequest(ControllerIndex, v3, &Request, &RESTResult, fmt) )
          {
            Com_Printf(25, "REST task id [%d] is being retried (retry count %d)\n", v3->TaskID, v3->RetryCount);
          }
          else
          {
$LN91_0:
            v3->retryLimit = 0;
$LN18_49:
            RESTHandleError(v3);
          }
        }
        goto LABEL_44;
      default:
        goto LABEL_44;
    }
  }
}

