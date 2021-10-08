/*
==============
Online_AB_Testing::OnSignedIn
==============
*/

void __fastcall Online_AB_Testing::OnSignedIn(Online_AB_Testing *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_AB_Testing@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_AB_Testing::SetLUIDataModelFromPayload
==============
*/

void __fastcall Online_AB_Testing::SetLUIDataModelFromPayload(Online_AB_Testing *this, const int controllerIndex, bdJSONDeserializer *payload)
{
  ?SetLUIDataModelFromPayload@Online_AB_Testing@@AEAAXHVbdJSONDeserializer@@@Z(this, controllerIndex, payload);
}

/*
==============
Online_AB_Testing::ParseModifiers
==============
*/

void __fastcall Online_AB_Testing::ParseModifiers(Online_AB_Testing *this, const int controllerIndex)
{
  ?ParseModifiers@Online_AB_Testing@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AB_Testing::setLUIDataModelFromValue
==============
*/

void __fastcall Online_AB_Testing::setLUIDataModelFromValue(Online_AB_Testing *this, const int controllerIndex, const char *key, bdJSONDeserializer *valueJsonObject)
{
  ?setLUIDataModelFromValue@Online_AB_Testing@@AEAAXHPEBDVbdJSONDeserializer@@@Z(this, controllerIndex, key, valueJsonObject);
}

/*
==============
Online_AB_Testing::Init
==============
*/

bool __fastcall Online_AB_Testing::Init(Online_AB_Testing *this)
{
  return ?Init@Online_AB_Testing@@UEAA_NXZ(this);
}

/*
==============
Online_AB_Testing::SetDvarFromPayload
==============
*/

void __fastcall Online_AB_Testing::SetDvarFromPayload(Online_AB_Testing *this, bdJSONDeserializer *payload)
{
  ?SetDvarFromPayload@Online_AB_Testing@@AEAAXVbdJSONDeserializer@@@Z(this, payload);
}

/*
==============
Online_AB_Testing::OnDisconnect
==============
*/

void __fastcall Online_AB_Testing::OnDisconnect(Online_AB_Testing *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_AB_Testing@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_AB_Testing::Uninit
==============
*/

void __fastcall Online_AB_Testing::Uninit(Online_AB_Testing *this)
{
  ?Uninit@Online_AB_Testing@@UEAAXXZ(this);
}

/*
==============
Online_AB_Testing::RegisterLuaFunctions
==============
*/

void __fastcall Online_AB_Testing::RegisterLuaFunctions(Online_AB_Testing *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_AB_Testing@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_AB_Testing::GetInstancePtr
==============
*/

Online_AB_Testing *__fastcall Online_AB_Testing::GetInstancePtr()
{
  return ?GetInstancePtr@Online_AB_Testing@@SAPEAV1@XZ();
}

/*
==============
Online_AB_Testing::GetInstance
==============
*/

Online_AB_Testing *__fastcall Online_AB_Testing::GetInstance()
{
  return ?GetInstance@Online_AB_Testing@@SAAEAV1@XZ();
}

/*
==============
Online_AB_Testing::OutputCurrentState
==============
*/

void __fastcall Online_AB_Testing::OutputCurrentState(Online_AB_Testing *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_AB_Testing@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AB_Testing::Enroll
==============
*/

void __fastcall Online_AB_Testing::Enroll(Online_AB_Testing *this, const int controllerIndex)
{
  ?Enroll@Online_AB_Testing@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AB_Testing::OnEnrollComplete
==============
*/

void __fastcall Online_AB_Testing::OnEnrollComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnEnrollComplete@Online_AB_Testing@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_AB_Testing::OnSignedOut
==============
*/

void __fastcall Online_AB_Testing::OnSignedOut(Online_AB_Testing *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_AB_Testing@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_AB_Testing::OnUnregistered
==============
*/

void __fastcall Online_AB_Testing::OnUnregistered(Online_AB_Testing *this)
{
  ?OnUnregistered@Online_AB_Testing@@UEAAXXZ(this);
}

/*
==============
Online_AB_Testing::FenceDependeciesUpdated
==============
*/

void __fastcall Online_AB_Testing::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ?FenceDependeciesUpdated@Online_AB_Testing@@SAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_AB_Testing::OnRegistered
==============
*/

void __fastcall Online_AB_Testing::OnRegistered(Online_AB_Testing *this)
{
  ?OnRegistered@Online_AB_Testing@@UEAAXXZ(this);
}

/*
==============
Online_AB_Testing::ControllerFrame
==============
*/

void __fastcall Online_AB_Testing::ControllerFrame(Online_AB_Testing *this, const int controllerIndex)
{
  ?ControllerFrame@Online_AB_Testing@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_AB_Testing::Frame
==============
*/

void __fastcall Online_AB_Testing::Frame(Online_AB_Testing *this)
{
  ?Frame@Online_AB_Testing@@UEAAXXZ(this);
}

/*
==============
Online_AB_Testing::OnRegistered
==============
*/
void Online_AB_Testing::OnRegistered(Online_AB_Testing *this)
{
  ;
}

/*
==============
Online_AB_Testing::OnUnregistered
==============
*/
void Online_AB_Testing::OnUnregistered(Online_AB_Testing *this)
{
  ;
}

/*
==============
Online_AB_Testing::Init
==============
*/
char Online_AB_Testing::Init(Online_AB_Testing *this)
{
  bool *m_enrollFailed; 
  __int64 v3; 
  char *v4; 
  bdABTestingClientTreatment (*m_treatments)[8]; 
  bdABTestingEnrollment (*m_enrollments)[8]; 
  __int64 v7; 

  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_AB_TESTING, (void (__fastcall *)(int, bool))Online_AB_Testing::FenceDependeciesUpdated);
  m_enrollFailed = this->m_enrollFailed;
  v3 = 8i64;
  v4 = this->m_modifiers[0][0];
  m_treatments = this->m_treatments;
  m_enrollments = this->m_enrollments;
  do
  {
    *(m_enrollFailed - 8) = 0;
    v7 = 8i64;
    *m_enrollFailed = 0;
    do
    {
      bdABTestingClientTreatment::init((bdABTestingClientTreatment *)m_treatments, v4, 0x400u);
      bdABTestingEnrollment::init((bdABTestingEnrollment *)m_enrollments, (bdABTestingClientTreatment *)m_treatments, 1u);
      v4 += 1024;
      m_treatments = (bdABTestingClientTreatment (*)[8])((char *)m_treatments + 24);
      m_enrollments = (bdABTestingEnrollment (*)[8])((char *)m_enrollments + 32);
      --v7;
    }
    while ( v7 );
    ++m_enrollFailed;
    --v3;
  }
  while ( v3 );
  return 1;
}

/*
==============
Online_AB_Testing::Uninit
==============
*/
void Online_AB_Testing::Uninit(Online_AB_Testing *this)
{
  ;
}

/*
==============
Online_AB_Testing::Frame
==============
*/
void Online_AB_Testing::Frame(Online_AB_Testing *this)
{
  ;
}

/*
==============
Online_AB_Testing::ControllerFrame
==============
*/
void Online_AB_Testing::ControllerFrame(Online_AB_Testing *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_AB_Testing::OnSignedIn
==============
*/
void Online_AB_Testing::OnSignedIn(Online_AB_Testing *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_AB_Testing::OnSignedOut
==============
*/
void Online_AB_Testing::OnSignedOut(Online_AB_Testing *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_AB_Testing::OnDisconnect
==============
*/
void Online_AB_Testing::OnDisconnect(Online_AB_Testing *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_AB_Testing::RegisterLuaFunctions
==============
*/
void Online_AB_Testing::RegisterLuaFunctions(Online_AB_Testing *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "OnlineABTesting", AAR_methods_0);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_AB_Testing::OutputCurrentState
==============
*/
void Online_AB_Testing::OutputCurrentState(Online_AB_Testing *this, const int controllerIndex)
{
  Com_Printf(25, "Online_AB_Testing DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  __asm
  {
    vmovsd  xmm3, cs:__real@4051110000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
  Com_Printf(25, "Online_AB_Testing DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_CompletedABTestingEnrollment
==============
*/
__int64 LUI_CoD_LuaCall_CompletedABTestingEnrollment(lua_State *const luaVM)
{
  unsigned int v3; 
  unsigned int v5; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OnlineABTesting.CompletedABTestingEnrollment( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si eax, xmm0 }
    j_lua_pushboolean(luaVM, Online_AB_Testing::s_instance.m_enrollCompleted[_EAX]);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v5);
  }
  return v3;
}

/*
==============
Online_AB_Testing::Enroll
==============
*/
void Online_AB_Testing::Enroll(Online_AB_Testing *this, const int controllerIndex)
{
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWABTesting *ABTesting; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  const char *v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v13; 
  bdABTestingEnrollRequest request; 
  bdReference<bdRemoteTask> result; 

  v13 = -2i64;
  v2 = controllerIndex;
  bdABTestingEnrollRequest::bdABTestingEnrollRequest(&request);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  bdABTestingEnrollResponse::init(&this->m_abResponse[v2], this->m_enrollments[v2], 8u);
  Instance = DWServicesAccess::GetInstance();
  ABTesting = DWServicesAccess::GetABTesting(Instance, v2);
  v6 = (TaskCreateRequest *)DWABTesting::enroll(ABTesting, &result, &request, &this->m_abResponse[v2]);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v2;
    pTaskCreateRequest.m_onCompletionCallback = Online_AB_Testing::OnEnrollComplete;
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "enroll() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
      goto LABEL_14;
    }
    v9 = "enroll() - CreateTask failed for controllerIndex %d!\n";
  }
  else
  {
    v9 = "enroll() -  failed for controllerIndex %d\n";
  }
  Online_AB_Testing::s_instance.m_enrollFailed[v2] = 1;
  Com_PrintError(25, v9, (unsigned int)v2);
LABEL_14:
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
  bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.__vftable + 2);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.__vftable + 3));
}

/*
==============
Online_AB_Testing::FenceDependeciesUpdated
==============
*/
void Online_AB_Testing::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  if ( value )
    Online_AB_Testing::Enroll(&Online_AB_Testing::s_instance, controllerIndex);
}

/*
==============
Online_AB_Testing::GetInstance
==============
*/
Online_AB_Testing *Online_AB_Testing::GetInstance()
{
  return &Online_AB_Testing::s_instance;
}

/*
==============
Online_AB_Testing::GetInstancePtr
==============
*/
Online_AB_Testing *Online_AB_Testing::GetInstancePtr()
{
  return &Online_AB_Testing::s_instance;
}

/*
==============
Online_AB_Testing::OnEnrollComplete
==============
*/
void Online_AB_Testing::OnEnrollComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  __int64 m_controllerIndex; 
  unsigned int i; 
  __int64 v8; 
  __int64 j; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_ab_testing.cpp", 125, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "AB Testing Enroll - Error %d %zu.\n", (unsigned int)ErrorCode, TransactionID);
      Online_AB_Testing::s_instance.m_enrollFailed[pTask->m_controllerIndex] = 1;
    }
  }
  else
  {
    Online_AB_Testing::ParseModifiers(&Online_AB_Testing::s_instance, pTask->m_controllerIndex);
    Com_Printf(25, "AB Testing - Enroll complete for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
    m_controllerIndex = pTask->m_controllerIndex;
    Com_Printf(25, "AB Testing - %d enrollments found\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_numEnrollments);
    for ( i = 0; i < Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_numEnrollments; ++i )
    {
      Com_Printf(25, "---\n");
      Com_Printf(25, "AB Testing - Enrollment %d\n", i);
      v8 = i;
      Com_Printf(25, "AB Testing - TestID = %zu, CohortID = %zu\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_testID, Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_cohortID);
      Com_Printf(25, "AB Testing - %d treatments found\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_numClientTreatments);
      for ( j = 0i64; (unsigned int)j < Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_numClientTreatments; j = (unsigned int)(j + 1) )
      {
        Com_Printf(25, "---\n");
        Com_Printf(25, "AB Testing - Treatment %d\n", (unsigned int)j);
        Com_Printf(25, "AB Testing - Starts in %d seconds\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_clientTreatments[j].m_startsInSeconds);
        Com_Printf(25, "AB Testing - Ends in %d seconds\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_clientTreatments[j].m_endsInSeconds);
        Com_Printf(25, "AB Testing - Modifiers = %s\n", Online_AB_Testing::s_instance.m_abResponse[m_controllerIndex].m_enrollments[v8].m_clientTreatments[j].m_modifiers);
      }
    }
    Online_AB_Testing::s_instance.m_enrollCompleted[pTask->m_controllerIndex] = 1;
  }
}

/*
==============
Online_AB_Testing::ParseModifiers
==============
*/
void Online_AB_Testing::ParseModifiers(Online_AB_Testing *this, const int controllerIndex)
{
  __int64 v2; 
  Online_AB_Testing *v3; 
  __int64 v4; 
  __int64 v5; 
  bdABTestingEnrollment **p_m_enrollments; 
  unsigned int v7; 
  __int64 v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  char v13; 
  unsigned int m_count; 
  unsigned int i; 
  __int64 v18; 
  __int64 v19; 
  char v20; 
  char v21; 
  unsigned int *p_m_numEnrollments; 
  bdJSONDeserializer v27; 
  bdJSONDeserializer v28; 
  bdJSONDeserializer v29; 
  bdJSONDeserializer v30; 
  __int64 v31; 
  char value[64]; 
  char v33[64]; 
  char name[64]; 

  v31 = -2i64;
  v2 = controllerIndex;
  v3 = this;
  bdJSONDeserializer::bdJSONDeserializer(&v28);
  v4 = v2;
  v5 = 0i64;
  p_m_numEnrollments = &Online_AB_Testing::s_instance.m_abResponse[v2].m_numEnrollments;
  if ( *p_m_numEnrollments )
  {
    p_m_enrollments = &Online_AB_Testing::s_instance.m_abResponse[v2].m_enrollments;
    do
    {
      v7 = 0;
      v8 = (unsigned int)v5;
      if ( (*p_m_enrollments)[v8].m_numClientTreatments )
      {
        v9 = v3->m_modifiers[v4][v5];
        do
        {
          if ( bdJSONDeserializer::parse(&v28, v9) && bdJSONDeserializer::hasKey(&v28, "type") )
          {
            bdJSONDeserializer::getString(&v28, "type", value, 0x40u);
            v10 = 0i64;
            v11 = 0x7FFFFFFFi64;
            while ( 1 )
            {
              v12 = lfeScale[v10];
              v13 = value[v10++];
              if ( !v11-- )
              {
LABEL_11:
                __asm
                {
                  vmovups ymm0, ymmword ptr [rsp+1D0h+var_178.m_type]
                  vmovups ymmword ptr [rbp+0D0h+var_130.m_type], ymm0
                }
                bdJSONDeserializer::bdJSONDeserializer(&v29);
                bdJSONDeserializer::bdJSONDeserializer(&v27);
                if ( bdJSONDeserializer::getArray(&v30, "data", &v29) )
                {
                  m_count = v29.m_count;
                  for ( i = 0; i < m_count; ++i )
                  {
                    if ( bdJSONDeserializer::getElementByIndex(&v29, i, &v27) && bdJSONDeserializer::hasKey(&v27, "key") )
                    {
                      bdJSONDeserializer::getString(&v27, "key", name, 0x40u);
                      if ( bdJSONDeserializer::hasKey(&v27, (const char *const)&stru_143CE7590) )
                      {
                        bdJSONDeserializer::getString(&v27, (const char *const)&stru_143CE7590, v33, 0x40u);
                        PublisherVariableManager::RegisterDvarByString(name, v33);
                      }
                    }
                  }
                  LODWORD(v2) = controllerIndex;
                  v3 = this;
                }
                bdJSONDeserializer::~bdJSONDeserializer(&v27);
                bdJSONDeserializer::~bdJSONDeserializer(&v29);
                bdJSONDeserializer::~bdJSONDeserializer(&v30);
                goto LABEL_20;
              }
              if ( v12 != v13 )
                break;
              if ( !v12 )
                goto LABEL_11;
            }
            v18 = 0i64;
            v19 = 0x7FFFFFFFi64;
            do
            {
              v20 = aLuiDataModel[v18];
              v21 = value[v18++];
              if ( !v19-- )
                break;
              if ( v20 != v21 )
                goto LABEL_20;
            }
            while ( v20 );
            __asm
            {
              vmovups ymm0, ymmword ptr [rsp+1D0h+var_178.m_type]
              vmovups ymmword ptr [rbp+0D0h+var_130.m_type], ymm0
            }
            Online_AB_Testing::SetLUIDataModelFromPayload(v3, v2, &v30);
          }
LABEL_20:
          ++v7;
        }
        while ( v7 < (*p_m_enrollments)[v8].m_numClientTreatments );
        v4 = (int)v2;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *p_m_numEnrollments );
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v28);
}

/*
==============
Online_AB_Testing::SetDvarFromPayload
==============
*/
void Online_AB_Testing::SetDvarFromPayload(Online_AB_Testing *this, bdJSONDeserializer *payload)
{
  unsigned int m_count; 
  unsigned int i; 
  bdJSONDeserializer v5; 
  bdJSONDeserializer value; 
  __int64 v7; 
  bdJSONDeserializer *v8; 
  char v9[64]; 
  char name[64]; 

  v7 = -2i64;
  v8 = payload;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v5);
  if ( bdJSONDeserializer::getArray(payload, "data", &value) )
  {
    m_count = value.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      if ( bdJSONDeserializer::getElementByIndex(&value, i, &v5) && bdJSONDeserializer::hasKey(&v5, "key") )
      {
        bdJSONDeserializer::getString(&v5, "key", name, 0x40u);
        if ( bdJSONDeserializer::hasKey(&v5, (const char *const)&stru_143CE7590) )
        {
          bdJSONDeserializer::getString(&v5, (const char *const)&stru_143CE7590, v9, 0x40u);
          PublisherVariableManager::RegisterDvarByString(name, v9);
        }
      }
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v5);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(payload);
}

/*
==============
Online_AB_Testing::SetLUIDataModelFromPayload
==============
*/
void Online_AB_Testing::SetLUIDataModelFromPayload(Online_AB_Testing *this, const int controllerIndex, bdJSONDeserializer *payload)
{
  char v5; 
  unsigned int m_count; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  char v11; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  bool v17; 
  float v18; 
  int v19; 
  bdJSONDeserializer v20; 
  bdJSONDeserializer v21; 
  bdJSONDeserializer value; 
  __int64 v23; 
  bdJSONDeserializer *v24; 
  bdJSONDeserializer v25; 
  char path[64]; 
  char newValue[64]; 

  v23 = -2i64;
  v24 = payload;
  v5 = 1;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v21);
  bdJSONDeserializer::bdJSONDeserializer(&v25);
  if ( bdJSONDeserializer::getArray(payload, "data", &value) )
  {
    m_count = value.m_count;
    for ( i = 0; i < m_count; ++i )
    {
      if ( bdJSONDeserializer::getElementByIndex(&value, i, &v21) )
      {
        if ( v5 && bdJSONDeserializer::hasKey(&v21, "key") )
        {
          bdJSONDeserializer::getString(&v21, "key", path, 0x40u);
          v8 = 0i64;
          v9 = 10i64;
          while ( 1 )
          {
            v10 = path[v8];
            v11 = aAbtesting[v8++];
            if ( !v9-- )
            {
LABEL_10:
              Com_PrintError(25, "SetLUIDataModelFromPayload() -  failed for controllerIndex %d. Trying to set a non abtesting LUI DataModel key %s\n", (unsigned int)controllerIndex, path);
              goto LABEL_11;
            }
            if ( v10 != v11 )
              break;
            if ( !v10 )
              goto LABEL_10;
          }
          if ( bdJSONDeserializer::hasKey(&v21, (const char *const)&stru_143CE7590) )
          {
            bdJSONDeserializer::getFieldByKey(&v21, (const char *const)&stru_143CE7590, &v25, 1);
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+80h+var_E0.m_type]
              vmovups ymmword ptr [rsp+180h+var_150.m_type], ymm0
            }
            ModelForController = LUI_Model_GetModelForController(controllerIndex);
            ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, path);
            if ( bdJSONDeserializer::isString(&v20) )
            {
              bdJSONDeserializer::getString(&v20, newValue, 0x40u);
              LUI_Model_SetString(ModelFromPath, newValue);
            }
            else if ( bdJSONDeserializer::isFloatingPoint(&v20) )
            {
              bdJSONDeserializer::getFloat32(&v20, &v18);
              __asm { vmovss  xmm1, [rsp+180h+var_15C]; newValue }
              LUI_Model_SetReal(ModelFromPath, *(float *)&_XMM1);
            }
            else if ( bdJSONDeserializer::isNumber(&v20) )
            {
              bdJSONDeserializer::getInt32(&v20, &v19);
              LUI_Model_SetInt(ModelFromPath, v19);
            }
            else if ( bdJSONDeserializer::isBoolean(&v20) )
            {
              bdJSONDeserializer::getBoolean(&v20, &v17);
              LUI_Model_SetBool(ModelFromPath, v17);
            }
            bdJSONDeserializer::~bdJSONDeserializer(&v20);
          }
        }
        else
        {
LABEL_11:
          v5 = 0;
        }
      }
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v25);
  bdJSONDeserializer::~bdJSONDeserializer(&v21);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(payload);
}

/*
==============
Online_AB_Testing::setLUIDataModelFromValue
==============
*/
void Online_AB_Testing::setLUIDataModelFromValue(Online_AB_Testing *this, const int controllerIndex, const char *key, bdJSONDeserializer *valueJsonObject)
{
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  bool v9; 
  float v10; 
  __int64 v11; 
  bdJSONDeserializer *v12; 
  char value[64]; 

  v11 = -2i64;
  v12 = valueJsonObject;
  ModelForController = LUI_Model_GetModelForController(controllerIndex);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, key);
  if ( bdJSONDeserializer::isString(valueJsonObject) )
  {
    bdJSONDeserializer::getString(valueJsonObject, value, 0x40u);
    LUI_Model_SetString(ModelFromPath, value);
  }
  else if ( bdJSONDeserializer::isFloatingPoint(valueJsonObject) )
  {
    bdJSONDeserializer::getFloat32(valueJsonObject, &v10);
    __asm { vmovss  xmm1, [rsp+98h+var_74]; newValue }
    LUI_Model_SetReal(ModelFromPath, *(float *)&_XMM1);
  }
  else if ( bdJSONDeserializer::isNumber(valueJsonObject) )
  {
    bdJSONDeserializer::getInt32(valueJsonObject, (int *)&v10);
    LUI_Model_SetInt(ModelFromPath, SLODWORD(v10));
  }
  else if ( bdJSONDeserializer::isBoolean(valueJsonObject) )
  {
    bdJSONDeserializer::getBoolean(valueJsonObject, &v9);
    LUI_Model_SetBool(ModelFromPath, v9);
  }
  bdJSONDeserializer::~bdJSONDeserializer(valueJsonObject);
}

