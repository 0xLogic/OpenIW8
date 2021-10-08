/*
==============
OnlineStorage::GetInstance
==============
*/

OnlineStorage *__fastcall OnlineStorage::GetInstance()
{
  return ?GetInstance@OnlineStorage@@SAAEAV1@XZ();
}

/*
==============
OnlineStorage::Uninit
==============
*/

void __fastcall OnlineStorage::Uninit(OnlineStorage *this)
{
  ?Uninit@OnlineStorage@@UEAAXXZ(this);
}

/*
==============
OnlineStorage::OnUnregistered
==============
*/

void __fastcall OnlineStorage::OnUnregistered(OnlineStorage *this)
{
  ?OnUnregistered@OnlineStorage@@UEAAXXZ(this);
}

/*
==============
OnlineStorage::GetUserStorageContext
==============
*/

const char *__fastcall OnlineStorage::GetUserStorageContext(OnlineStorage *this)
{
  return ?GetUserStorageContext@OnlineStorage@@AEAAPEBDXZ(this);
}

/*
==============
OnlineStorage::RemoveAllTasks
==============
*/

void __fastcall OnlineStorage::RemoveAllTasks(OnlineStorage *this)
{
  ?RemoveAllTasks@OnlineStorage@@AEAAXXZ(this);
}

/*
==============
OnlineStorage::Frame
==============
*/

void __fastcall OnlineStorage::Frame(OnlineStorage *this)
{
  ?Frame@OnlineStorage@@UEAAXXZ(this);
}

/*
==============
OnlineStorage::FreeTask
==============
*/

void __fastcall OnlineStorage::FreeTask(OnlineStorage *this, OnlineStorageTask *task)
{
  ?FreeTask@OnlineStorage@@QEAAXPEAUOnlineStorageTask@@@Z(this, task);
}

/*
==============
OnlineStorage::AllocateFileResultBuffer
==============
*/

unsigned __int8 *__fastcall OnlineStorage::AllocateFileResultBuffer(OnlineStorage *this)
{
  return ?AllocateFileResultBuffer@OnlineStorage@@QEAAPEAEXZ(this);
}

/*
==============
OnlineStorage::OutputCurrentState
==============
*/

void __fastcall OnlineStorage::OutputCurrentState(OnlineStorage *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineStorage@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStorage::OnRegistered
==============
*/

void __fastcall OnlineStorage::OnRegistered(OnlineStorage *this)
{
  ?OnRegistered@OnlineStorage@@UEAAXXZ(this);
}

/*
==============
OnlineStorage::CountTasksInProgress
==============
*/

int __fastcall OnlineStorage::CountTasksInProgress(OnlineStorage *this)
{
  return ?CountTasksInProgress@OnlineStorage@@AEAAHXZ(this);
}

/*
==============
OnlineStorage::GetClientId
==============
*/

const char *__fastcall OnlineStorage::GetClientId(OnlineStorage *this, const int controllerIndex)
{
  return ?GetClientId@OnlineStorage@@AEAAPEBDH@Z(this, controllerIndex);
}

/*
==============
OnlineStorage::FreeFileResultBuffer
==============
*/

void __fastcall OnlineStorage::FreeFileResultBuffer(OnlineStorage *this, unsigned __int8 *buffer)
{
  ?FreeFileResultBuffer@OnlineStorage@@QEAAXPEAE@Z(this, buffer);
}

/*
==============
OnlineStorage::OnDisconnect
==============
*/

void __fastcall OnlineStorage::OnDisconnect(OnlineStorage *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineStorage@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineStorage::GenerateUserString
==============
*/

void __fastcall OnlineStorage::GenerateUserString(OnlineStorage *this, XUID xuid, OnlineStoragePlatform platform, char *outBuff, int outBuffLength)
{
  ?GenerateUserString@OnlineStorage@@AEAAXUXUID@@W4OnlineStoragePlatform@@PEADH@Z(this, xuid, platform, outBuff, outBuffLength);
}

/*
==============
OnlineStorage::OnSignedOut
==============
*/

void __fastcall OnlineStorage::OnSignedOut(OnlineStorage *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineStorage@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineStorage::RegisterLuaFunctions
==============
*/

void __fastcall OnlineStorage::RegisterLuaFunctions(OnlineStorage *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineStorage@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineStorage::OnSignedIn
==============
*/

void __fastcall OnlineStorage::OnSignedIn(OnlineStorage *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineStorage@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineStorage::GetPlatformStringFromPlatform
==============
*/

const char *__fastcall OnlineStorage::GetPlatformStringFromPlatform(OnlineStorage *this, OnlineStoragePlatform platform)
{
  return ?GetPlatformStringFromPlatform@OnlineStorage@@AEAAPEBDW4OnlineStoragePlatform@@@Z(this, platform);
}

/*
==============
OnlineStorage::GetContext
==============
*/

const char *__fastcall OnlineStorage::GetContext(OnlineStorage *this)
{
  return ?GetContext@OnlineStorage@@AEAAPEBDXZ(this);
}

/*
==============
OnlineStorage::ControllerFrame
==============
*/

void __fastcall OnlineStorage::ControllerFrame(OnlineStorage *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineStorage@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStorage::GetStateCount
==============
*/

unsigned int __fastcall OnlineStorage::GetStateCount(OnlineStorage *this, OnlineStorageTaskStatus status)
{
  return ?GetStateCount@OnlineStorage@@QEAAIW4OnlineStorageTaskStatus@@@Z(this, status);
}

/*
==============
OnlineStorageDownloadInterceptor::handleDownload
==============
*/

unsigned int __fastcall OnlineStorageDownloadInterceptor::handleDownload(OnlineStorageDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  return ?handleDownload@OnlineStorageDownloadInterceptor@@UEAAIPEAXI@Z(this, data, dataSize);
}

/*
==============
OnlineStorage::GetCurrentPlatform
==============
*/

OnlineStoragePlatform __fastcall OnlineStorage::GetCurrentPlatform(OnlineStorage *this)
{
  return ?GetCurrentPlatform@OnlineStorage@@QEAA?AW4OnlineStoragePlatform@@XZ(this);
}

/*
==============
OnlineStorage::RemoveInactiveTasksForController
==============
*/

void __fastcall OnlineStorage::RemoveInactiveTasksForController(OnlineStorage *this, int controllerIndex)
{
  ?RemoveInactiveTasksForController@OnlineStorage@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStorage::GetCurrentPlatformString
==============
*/

const char *__fastcall OnlineStorage::GetCurrentPlatformString(OnlineStorage *this)
{
  return ?GetCurrentPlatformString@OnlineStorage@@QEAAPEBDXZ(this);
}

/*
==============
OnlineStorage::GetInstancePtr
==============
*/

OnlineStorage *__fastcall OnlineStorage::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineStorage@@SAPEAV1@XZ();
}

/*
==============
OnlineStorage::Init
==============
*/

bool __fastcall OnlineStorage::Init(OnlineStorage *this)
{
  return ?Init@OnlineStorage@@UEAA_NXZ(this);
}

/*
==============
OnlineStorage::ExecuteTask
==============
*/

void __fastcall OnlineStorage::ExecuteTask(OnlineStorage *this, OnlineStorageTask *task)
{
  ?ExecuteTask@OnlineStorage@@AEAAXPEAUOnlineStorageTask@@@Z(this, task);
}

/*
==============
OnlineStorage::EnqueueTask
==============
*/

bool __fastcall OnlineStorage::EnqueueTask(OnlineStorage *this, OnlineStorageTask *newTask)
{
  return ?EnqueueTask@OnlineStorage@@QEAA_NPEAUOnlineStorageTask@@@Z(this, newTask);
}

/*
==============
OnlineStorage::FindHighestPriorityPendingTaskSlot
==============
*/

int __fastcall OnlineStorage::FindHighestPriorityPendingTaskSlot(OnlineStorage *this)
{
  return ?FindHighestPriorityPendingTaskSlot@OnlineStorage@@AEAAHXZ(this);
}

/*
==============
OnlineStorage::FindAvailableFileResultBuffer
==============
*/

int __fastcall OnlineStorage::FindAvailableFileResultBuffer(OnlineStorage *this)
{
  return ?FindAvailableFileResultBuffer@OnlineStorage@@AEAAHXZ(this);
}

/*
==============
OnlineStorage::FindEmptyTaskSlot
==============
*/

int __fastcall OnlineStorage::FindEmptyTaskSlot(OnlineStorage *this)
{
  return ?FindEmptyTaskSlot@OnlineStorage@@AEAAHXZ(this);
}

/*
==============
OnlineStorage::OnRegistered
==============
*/
void OnlineStorage::OnRegistered(OnlineStorage *this)
{
  ;
}

/*
==============
OnlineStorage::OnUnregistered
==============
*/
void OnlineStorage::OnUnregistered(OnlineStorage *this)
{
  int Int_Internal_DebugName; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_storage_task_interval, "online_storage_task_interval");
  this->m_lastTaskTime = Sys_Milliseconds() - Int_Internal_DebugName;
}

/*
==============
OnlineStorage::Init
==============
*/
char OnlineStorage::Init(OnlineStorage *this)
{
  bdObjectStoreGetUserObjectsVectorizedResponse **p_getUserStorageResponse; 
  unsigned int v2; 
  unsigned int v4; 
  OnlineStorageTaskStatus *p_status; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  DWServicesAccess *v8; 
  unsigned int v9; 

  p_getUserStorageResponse = &this->m_taskQueue[1].getUserStorageResponse;
  v2 = 0;
  do
  {
    *(p_getUserStorageResponse - 215) = NULL;
    v2 += 16;
    *(p_getUserStorageResponse - 214) = NULL;
    *((_BYTE *)p_getUserStorageResponse - 116) = 0;
    *(p_getUserStorageResponse - 1) = NULL;
    *p_getUserStorageResponse = NULL;
    *((_BYTE *)p_getUserStorageResponse + 1596) = 0;
    p_getUserStorageResponse[213] = NULL;
    p_getUserStorageResponse[214] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 3308) = 0;
    p_getUserStorageResponse[427] = NULL;
    p_getUserStorageResponse[428] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 5020) = 0;
    p_getUserStorageResponse[641] = NULL;
    p_getUserStorageResponse[642] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 6732) = 0;
    p_getUserStorageResponse[855] = NULL;
    p_getUserStorageResponse[856] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 8444) = 0;
    p_getUserStorageResponse[1069] = NULL;
    p_getUserStorageResponse[1070] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 10156) = 0;
    p_getUserStorageResponse[1283] = NULL;
    p_getUserStorageResponse[1284] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 11868) = 0;
    p_getUserStorageResponse[1497] = NULL;
    p_getUserStorageResponse[1498] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 13580) = 0;
    p_getUserStorageResponse[1711] = NULL;
    p_getUserStorageResponse[1712] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 15292) = 0;
    p_getUserStorageResponse[1925] = NULL;
    p_getUserStorageResponse[1926] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 17004) = 0;
    p_getUserStorageResponse[2139] = NULL;
    p_getUserStorageResponse[2140] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 18716) = 0;
    p_getUserStorageResponse[2353] = NULL;
    p_getUserStorageResponse[2354] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 20428) = 0;
    p_getUserStorageResponse[2567] = NULL;
    p_getUserStorageResponse[2568] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 22140) = 0;
    p_getUserStorageResponse[2781] = NULL;
    p_getUserStorageResponse[2782] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 23852) = 0;
    p_getUserStorageResponse[2995] = NULL;
    p_getUserStorageResponse[2996] = NULL;
    *((_BYTE *)p_getUserStorageResponse + 25564) = 0;
    p_getUserStorageResponse += 3424;
  }
  while ( v2 < 0x10 );
  v4 = 0;
  p_status = &this->m_taskQueue[1].status;
  do
  {
    if ( *((_BYTE *)p_status - 1712) )
      *((_BYTE *)p_status - 1712) = 0;
    *(_QWORD *)(p_status - 3308) = 0i64;
    *(_QWORD *)(p_status - 3316) = 0i64;
    if ( *p_status )
      *p_status = SPECTATOR;
    *(_QWORD *)(p_status - 1596) = 0i64;
    *(_QWORD *)(p_status - 1604) = 0i64;
    if ( *((_BYTE *)p_status + 1712) )
      *((_BYTE *)p_status + 1712) = 0;
    *(_QWORD *)(p_status + 116) = 0i64;
    *(_QWORD *)(p_status + 108) = 0i64;
    if ( *((_BYTE *)p_status + 3424) )
      *((_BYTE *)p_status + 3424) = 0;
    *(_QWORD *)(p_status + 1828) = 0i64;
    *(_QWORD *)(p_status + 1820) = 0i64;
    if ( *((_BYTE *)p_status + 5136) )
      *((_BYTE *)p_status + 5136) = 0;
    *(_QWORD *)(p_status + 3540) = 0i64;
    *(_QWORD *)(p_status + 3532) = 0i64;
    if ( *((_BYTE *)p_status + 6848) )
      *((_BYTE *)p_status + 6848) = 0;
    *(_QWORD *)(p_status + 5252) = 0i64;
    *(_QWORD *)(p_status + 5244) = 0i64;
    if ( *((_BYTE *)p_status + 8560) )
      *((_BYTE *)p_status + 8560) = 0;
    *(_QWORD *)(p_status + 6964) = 0i64;
    *(_QWORD *)(p_status + 6956) = 0i64;
    if ( *((_BYTE *)p_status + 10272) )
      *((_BYTE *)p_status + 10272) = 0;
    *(_QWORD *)(p_status + 8676) = 0i64;
    *(_QWORD *)(p_status + 8668) = 0i64;
    if ( *((_BYTE *)p_status + 11984) )
      *((_BYTE *)p_status + 11984) = 0;
    *(_QWORD *)(p_status + 10388) = 0i64;
    *(_QWORD *)(p_status + 10380) = 0i64;
    if ( *((_BYTE *)p_status + 13696) )
      *((_BYTE *)p_status + 13696) = 0;
    *(_QWORD *)(p_status + 12100) = 0i64;
    *(_QWORD *)(p_status + 12092) = 0i64;
    if ( *((_BYTE *)p_status + 15408) )
      *((_BYTE *)p_status + 15408) = 0;
    *(_QWORD *)(p_status + 13812) = 0i64;
    *(_QWORD *)(p_status + 13804) = 0i64;
    if ( *((_BYTE *)p_status + 17120) )
      *((_BYTE *)p_status + 17120) = 0;
    *(_QWORD *)(p_status + 15524) = 0i64;
    *(_QWORD *)(p_status + 15516) = 0i64;
    if ( *((_BYTE *)p_status + 18832) )
      *((_BYTE *)p_status + 18832) = 0;
    *(_QWORD *)(p_status + 17236) = 0i64;
    *(_QWORD *)(p_status + 17228) = 0i64;
    if ( *((_BYTE *)p_status + 20544) )
      *((_BYTE *)p_status + 20544) = 0;
    *(_QWORD *)(p_status + 18948) = 0i64;
    *(_QWORD *)(p_status + 18940) = 0i64;
    if ( *((_BYTE *)p_status + 22256) )
      *((_BYTE *)p_status + 22256) = 0;
    *(_QWORD *)(p_status + 20660) = 0i64;
    *(_QWORD *)(p_status + 20652) = 0i64;
    if ( *((_BYTE *)p_status + 23968) )
      *((_BYTE *)p_status + 23968) = 0;
    *(_QWORD *)(p_status + 22372) = 0i64;
    v4 += 16;
    *(_QWORD *)(p_status + 22364) = 0i64;
    p_status += 27392;
  }
  while ( v4 < 0x10 );
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  Com_sprintf<32>((char (*)[32])s_contextString, "%d", TitleID);
  v8 = DWServicesAccess::GetInstance();
  v9 = DWServicesAccess::GetTitleID(v8);
  Com_sprintf<32>((char (*)[32])s_userStorageContextString, "%d", v9);
  return 1;
}

/*
==============
OnlineStorage::Uninit
==============
*/
void OnlineStorage::Uninit(OnlineStorage *this)
{
  ;
}

/*
==============
OnlineStorage::Frame
==============
*/
void OnlineStorage::Frame(OnlineStorage *this)
{
  int v2; 
  int v3; 
  OnlineStorageTaskStatus *p_status; 
  unsigned int v5; 
  int v6; 
  bool v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int HighestPriorityPendingTaskSlot; 
  __int64 v24; 

  v2 = Sys_Milliseconds();
  v3 = 0;
  p_status = &this->m_taskQueue[2].status;
  v5 = 0;
  v6 = v2;
  do
  {
    v7 = *((_BYTE *)p_status - 3424) == 2;
    v8 = v3 + 1;
    p_status += 27392;
    if ( !v7 )
      v8 = v3;
    v9 = v8 + 1;
    if ( *((_BYTE *)p_status - 29104) != 2 )
      v9 = v8;
    v10 = v9 + 1;
    if ( *((_BYTE *)p_status - 27392) != 2 )
      v10 = v9;
    v11 = v10 + 1;
    if ( *((_BYTE *)p_status - 25680) != 2 )
      v11 = v10;
    v12 = v11 + 1;
    if ( *((_BYTE *)p_status - 23968) != 2 )
      v12 = v11;
    v13 = v12 + 1;
    if ( *((_BYTE *)p_status - 22256) != 2 )
      v13 = v12;
    v14 = v13 + 1;
    if ( *((_BYTE *)p_status - 20544) != 2 )
      v14 = v13;
    v15 = v14 + 1;
    if ( *((_BYTE *)p_status - 18832) != 2 )
      v15 = v14;
    v16 = v15 + 1;
    if ( *((_BYTE *)p_status - 17120) != 2 )
      v16 = v15;
    v17 = v16 + 1;
    if ( *((_BYTE *)p_status - 15408) != 2 )
      v17 = v16;
    v18 = v17 + 1;
    if ( *((_BYTE *)p_status - 13696) != 2 )
      v18 = v17;
    v19 = v18 + 1;
    if ( *((_BYTE *)p_status - 11984) != 2 )
      v19 = v18;
    v20 = v19 + 1;
    if ( *((_BYTE *)p_status - 10272) != 2 )
      v20 = v19;
    v21 = v20 + 1;
    if ( *((_BYTE *)p_status - 8560) != 2 )
      v21 = v20;
    v22 = v21 + 1;
    if ( *((_BYTE *)p_status - 6848) != 2 )
      v22 = v21;
    v3 = v22 + 1;
    if ( *((_BYTE *)p_status - 5136) != 2 )
      v3 = v22;
    v5 += 16;
  }
  while ( v5 < 0x10 );
  if ( v3 <= 0 && v6 - this->m_lastTaskTime > Dvar_GetInt_Internal_DebugName(DVARINT_online_storage_task_interval, "online_storage_task_interval") )
  {
    HighestPriorityPendingTaskSlot = OnlineStorage::FindHighestPriorityPendingTaskSlot(this);
    v24 = HighestPriorityPendingTaskSlot;
    if ( HighestPriorityPendingTaskSlot >= 0 )
    {
      Com_Printf(25, "OnlineStorage: Running highest priority task: %d\n", (unsigned int)HighestPriorityPendingTaskSlot);
      OnlineStorage::ExecuteTask(this, &this->m_taskQueue[v24]);
      this->m_lastTaskTime = v6;
    }
  }
}

/*
==============
OnlineStorage::ControllerFrame
==============
*/
void OnlineStorage::ControllerFrame(OnlineStorage *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineStorage::OnSignedIn
==============
*/
void OnlineStorage::OnSignedIn(OnlineStorage *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineStorage::OnSignedOut
==============
*/

void __fastcall OnlineStorage::OnSignedOut(OnlineStorage *this, const int controllerIndex, GenericSignOutState signOutState)
{
  OnlineStorage::RemoveInactiveTasksForController(this, controllerIndex);
}

/*
==============
OnlineStorage::OnDisconnect
==============
*/

void __fastcall OnlineStorage::OnDisconnect(OnlineStorage *this, ONLINE_DISCONNECT reason)
{
  OnlineStorage::RemoveAllTasks(this);
}

/*
==============
OnlineStorage::RegisterLuaFunctions
==============
*/
void OnlineStorage::RegisterLuaFunctions(OnlineStorage *this, lua_State *luaVM)
{
  ;
}

/*
==============
OnlineStorage::OutputCurrentState
==============
*/
void OnlineStorage::OutputCurrentState(OnlineStorage *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineStorage::AllocateFileResultBuffer
==============
*/
OnlineStorageFileResultBuffer *OnlineStorage::AllocateFileResultBuffer(OnlineStorage *this)
{
  bool *p_inUse; 
  unsigned int v3; 
  __int64 v5; 

  p_inUse = &this->m_fileResultBuffer[0].inUse;
  v3 = 0;
  while ( *p_inUse )
  {
    ++v3;
    p_inUse += 32769;
    if ( v3 >= 0x10 )
      return 0i64;
  }
  v5 = (int)v3;
  this->m_fileResultBuffer[v5].inUse = 1;
  return &this->m_fileResultBuffer[v5];
}

/*
==============
OnlineStorage::CountTasksInProgress
==============
*/
__int64 OnlineStorage::CountTasksInProgress(OnlineStorage *this)
{
  unsigned int v1; 
  unsigned int v2; 
  OnlineStorageTaskStatus *p_status; 
  bool v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 

  v1 = 0;
  v2 = 0;
  p_status = &this->m_taskQueue[2].status;
  do
  {
    v4 = *((_BYTE *)p_status - 3424) == 2;
    v5 = v1 + 1;
    p_status += 27392;
    if ( !v4 )
      v5 = v1;
    v6 = v5 + 1;
    if ( *((_BYTE *)p_status - 29104) != 2 )
      v6 = v5;
    v7 = v6 + 1;
    if ( *((_BYTE *)p_status - 27392) != 2 )
      v7 = v6;
    v8 = v7 + 1;
    if ( *((_BYTE *)p_status - 25680) != 2 )
      v8 = v7;
    v9 = v8 + 1;
    if ( *((_BYTE *)p_status - 23968) != 2 )
      v9 = v8;
    v10 = v9 + 1;
    if ( *((_BYTE *)p_status - 22256) != 2 )
      v10 = v9;
    v11 = v10 + 1;
    if ( *((_BYTE *)p_status - 20544) != 2 )
      v11 = v10;
    v12 = v11 + 1;
    if ( *((_BYTE *)p_status - 18832) != 2 )
      v12 = v11;
    v13 = v12 + 1;
    if ( *((_BYTE *)p_status - 17120) != 2 )
      v13 = v12;
    v14 = v13 + 1;
    if ( *((_BYTE *)p_status - 15408) != 2 )
      v14 = v13;
    v15 = v14 + 1;
    if ( *((_BYTE *)p_status - 13696) != 2 )
      v15 = v14;
    v16 = v15 + 1;
    if ( *((_BYTE *)p_status - 11984) != 2 )
      v16 = v15;
    v17 = v16 + 1;
    if ( *((_BYTE *)p_status - 10272) != 2 )
      v17 = v16;
    v18 = v17 + 1;
    if ( *((_BYTE *)p_status - 8560) != 2 )
      v18 = v17;
    v19 = v18 + 1;
    if ( *((_BYTE *)p_status - 6848) != 2 )
      v19 = v18;
    v1 = v19 + 1;
    if ( *((_BYTE *)p_status - 5136) != 2 )
      v1 = v19;
    v2 += 16;
  }
  while ( v2 < 0x10 );
  return v1;
}

/*
==============
OnlineStorage::EnqueueTask
==============
*/
char OnlineStorage::EnqueueTask(OnlineStorage *this, OnlineStorageTask *newTask)
{
  OnlineStorageTaskStatus *p_status; 
  unsigned int v4; 
  char *v6; 
  int timeoutSec; 

  p_status = &this->m_taskQueue[0].status;
  v4 = 0;
  while ( *p_status )
  {
    ++v4;
    p_status += 1712;
    if ( v4 >= 0x10 )
      return 0;
  }
  v6 = (char *)this + 1712 * (int)v4;
  OnlineStorageTask::operator=((OnlineStorageTask *)(v6 + 64), newTask);
  *((_QWORD *)v6 + 9) = v6 + 64;
  *((_QWORD *)v6 + 13) = OnTaskComplete;
  *((_DWORD *)v6 + 16) = newTask->controllerIndex;
  timeoutSec = newTask->timeoutSec;
  if ( timeoutSec )
    *((_DWORD *)v6 + 31) = timeoutSec;
  v6[1740] = 1;
  return 1;
}

/*
==============
OnlineStorage::ExecuteTask
==============
*/
void OnlineStorage::ExecuteTask(OnlineStorage *this, OnlineStorageTask *task)
{
  OnlineStorageTask *v2; 
  OnlineStorageDestination destination; 
  OnlineStorageOperation v5; 
  DWServicesAccess *v6; 
  const char *v7; 
  int v8; 
  unsigned __int8 v9; 
  const char *v10; 
  const char *v11; 
  bdObjectStoreUploadUserObjectsVectorizedRequest::AddObjectToRequestWindowResponse v12; 
  bdObjectStoreUploadUserObjectsVectorizedRequest::AddObjectToRequestWindowResponse v13; 
  void (__fastcall *v14)(OnlineStorageTask *); 
  __int64 v15; 
  __int64 v16; 
  unsigned int m_id; 
  unsigned __int8 v18; 
  const char *v19; 
  const char *PlatformStringFromPlatform; 
  unsigned int v21; 
  unsigned int m_capacity; 
  bdObjectStoreCacheAwareObjectID *v23; 
  unsigned int v24; 
  __int64 v27; 
  bdObjectStoreCacheAwareObjectID *v39; 
  __int64 v40; 
  DWServicesAccess *v54; 
  const char *v55; 
  void (__fastcall *v56)(OnlineStorageTask *); 
  bdObjectStoreCacheAwareObjectID *m_data; 
  __int64 m_size; 
  bool v59; 
  const char *v60; 
  XUID *Xuid; 
  DWServicesAccess *v62; 
  const char *v63; 
  void (__fastcall *v64)(OnlineStorageTask *); 
  OnlineStorageOperation operation; 
  unsigned int i; 
  unsigned int fileEntryCount; 
  DWServicesAccess *Instance; 
  const char *ClientID; 
  int PublisherObjects; 
  unsigned int j; 
  unsigned int v72; 
  DWServicesAccess *v73; 
  const char *v74; 
  void (__fastcall *v75)(OnlineStorageTask *); 
  DWServicesAccess *v76; 
  const char *v77; 
  void (__fastcall *onTaskCompleteCallback)(OnlineStorageTask *); 
  __int64 limit; 
  XUID v80; 
  OnlineStorage *UniversalId; 
  XUID result; 
  __int64 v83; 
  bdObjectStoreObjectID objectID; 
  bdObjectStoreListPublisherObjectsByCategoryRequest request; 
  bdObjectStoreMetadata metadata; 
  bdObjectStoreObject object; 
  bdArray<bdObjectStoreCacheAwareObjectID> dest[2]; 
  char owner[32]; 

  v83 = -2i64;
  v2 = task;
  UniversalId = this;
  destination = task->destination;
  if ( destination )
  {
    if ( destination != PUBLISHER_STORAGE )
    {
      v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 747, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OnlineStorage: Unknown storage destination %d", (unsigned __int8)destination);
      goto LABEL_106;
    }
    operation = task->operation;
    switch ( operation )
    {
      case UPLOAD:
        v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 655, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OnlineStorage: The game should never upload to publisher storage.\n");
        goto LABEL_106;
      case DOWNLOAD:
        if ( !task->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 659, ASSERT_TYPE_ASSERT, "(task->getPublisherStorageResponse)", (const char *)&queryFormat, "task->getPublisherStorageResponse") )
          __debugbreak();
        if ( !v2->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 660, ASSERT_TYPE_ASSERT, "(task->fileEntryCount > 0)", (const char *)&queryFormat, "task->fileEntryCount > 0") )
          __debugbreak();
        for ( i = 0; i < v2->fileEntryCount; ++i )
        {
          bdObjectStoreObjectID::setOwner(&s_objectIDs[i], "infinityward", PUBLISHER_OWNER_TYPE);
          bdObjectStoreObjectID::setObjectName(&s_objectIDs[i], v2->fileEntries[i].fileName);
        }
        if ( dword_14B6A6D74 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_14B6A6D74);
          if ( dword_14B6A6D74 == -1 )
          {
            bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(&getRequest);
            j_atexit(OnlineStorage::ExecuteTask_::_111_::_dynamic_atexit_destructor_for__getRequest__);
            j__Init_thread_footer(&dword_14B6A6D74);
          }
        }
        fileEntryCount = v2->fileEntryCount;
        Instance = DWServicesAccess::GetInstance();
        ClientID = DWServicesAccess::GetClientID(Instance);
        bdObjectStoreGetPublisherObjectsRequest::init(&getRequest, ClientID, s_contextString, s_objectIDs, fileEntryCount);
        PublisherObjects = dwGetPublisherObjects(&v2->taskCreateRequest, &getRequest, v2->getPublisherStorageResponse);
        break;
      case GET_INFO:
        if ( !task->getPublisherStorageMetadatasResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 690, ASSERT_TYPE_ASSERT, "(task->getPublisherStorageMetadatasResponse)", (const char *)&queryFormat, "task->getPublisherStorageMetadatasResponse") )
          __debugbreak();
        if ( !v2->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 691, ASSERT_TYPE_ASSERT, "(task->fileEntryCount > 0)", (const char *)&queryFormat, "task->fileEntryCount > 0") )
          __debugbreak();
        for ( j = 0; j < v2->fileEntryCount; ++j )
        {
          bdObjectStoreObjectID::setOwner(&s_objectIDs[j], "infinityward", PUBLISHER_OWNER_TYPE);
          bdObjectStoreObjectID::setObjectName(&s_objectIDs[j], v2->fileEntries[j].fileName);
        }
        if ( dword_14B6A6EB4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_14B6A6EB4);
          if ( dword_14B6A6EB4 == -1 )
          {
            bdObjectStoreGetPublisherObjectsRequest::bdObjectStoreGetPublisherObjectsRequest(&::request);
            j_atexit(OnlineStorage::ExecuteTask__::L_::_dynamic_atexit_destructor_for__getRequest__);
            j__Init_thread_footer(&dword_14B6A6EB4);
          }
        }
        v72 = v2->fileEntryCount;
        v73 = DWServicesAccess::GetInstance();
        v74 = DWServicesAccess::GetClientID(v73);
        bdObjectStoreGetPublisherObjectsRequest::init(&::request, v74, s_contextString, s_objectIDs, v72);
        PublisherObjects = dwGetPublisherObjectMetadatas(&v2->taskCreateRequest, &::request, v2->getPublisherStorageMetadatasResponse);
        break;
      case LIST:
        v76 = DWServicesAccess::GetInstance();
        v77 = DWServicesAccess::GetClientID(v76);
        bdObjectStoreListPublisherObjectsByCategoryRequest::bdObjectStoreListPublisherObjectsByCategoryRequest(&request, v77, s_contextString, "infinityward", v2->category, 0x32u, NULL);
        if ( dwListPublisherObjectsByCategory(&v2->taskCreateRequest, &request, v2->listPublisherStorageResponse) )
        {
          v2->status = AERIAL;
        }
        else
        {
          v2->status = 4;
          onTaskCompleteCallback = v2->onTaskCompleteCallback;
          if ( onTaskCompleteCallback )
            onTaskCompleteCallback(v2);
        }
        bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.bdStructBufferSerializable::__vftable + 2);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.bdStructBufferSerializable::__vftable + 2));
        bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase(&request);
        bdReferencable::~bdReferencable((bdReferencable *)&request.gap23D[3]);
        return;
      default:
        v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 742, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OnlineStorage: Unknown task operation %d", (unsigned __int8)operation);
        goto LABEL_106;
    }
    if ( PublisherObjects )
    {
      v2->status = AERIAL;
    }
    else
    {
      v2->status = 4;
      v75 = v2->onTaskCompleteCallback;
      if ( v75 )
        v75(v2);
    }
    return;
  }
  v5 = task->operation;
  if ( v5 )
  {
    switch ( v5 )
    {
      case DOWNLOAD:
        dest[0].m_data = NULL;
        *(_QWORD *)&dest[0].m_capacity = 0i64;
        if ( !task->getUserStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 590, ASSERT_TYPE_ASSERT, "(task->getUserStorageResponse)", (const char *)&queryFormat, "task->getUserStorageResponse") )
          __debugbreak();
        if ( !v2->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 591, ASSERT_TYPE_ASSERT, "(task->fileEntryCount > 0)", (const char *)&queryFormat, "task->fileEntryCount > 0") )
          __debugbreak();
        m_id = 0;
        LODWORD(v80.m_id) = 0;
        if ( !v2->fileEntryCount )
        {
LABEL_52:
          v54 = DWServicesAccess::GetInstance();
          v55 = DWServicesAccess::GetClientID(v54);
          bdObjectStoreGetUserObjectsVectorizedRequest::bdObjectStoreGetUserObjectsVectorizedRequest((bdObjectStoreGetUserObjectsVectorizedRequest *)&objectID, v55, s_userStorageContextString, dest);
          if ( dwGetUserObjectsVectorized(&v2->taskCreateRequest, (const bdObjectStoreGetUserObjectsVectorizedRequest *)&objectID, v2->getUserStorageResponse) )
          {
            v2->status = AERIAL;
          }
          else
          {
            v2->status = 4;
            v56 = v2->onTaskCompleteCallback;
            if ( v56 )
              v56(v2);
          }
          bdArray<bdObjectStoreCacheAwareObjectID>::~bdArray<bdObjectStoreCacheAwareObjectID>((bdArray<bdObjectStoreCacheAwareObjectID> *)&objectID.m_objectName[22]);
          bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&objectID.m_objectName[14]);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&objectID.m_objectName[14]);
          bdObjectStoreRequestBase::~bdObjectStoreRequestBase((bdObjectStoreRequestBase *)&objectID);
          bdReferencable::~bdReferencable((bdReferencable *)&objectID.m_objectName[38]);
          if ( dest[0].m_size )
          {
            m_data = dest[0].m_data;
            m_size = dest[0].m_size;
            do
            {
              bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(m_data++);
              --m_size;
            }
            while ( m_size );
          }
          bdMemory::deallocate(dest[0].m_data);
          return;
        }
        while ( 1 )
        {
          v18 = v2->fileEntries[m_id].platform[0];
          result.m_id = v2->fileEntries[m_id].xuid.m_id;
          v19 = XUID::ToString(&result);
          PlatformStringFromPlatform = OnlineStorage::GetPlatformStringFromPlatform(UniversalId, (OnlineStoragePlatform)v18);
          Com_sprintf_truncate(owner, 0x20ui64, "%s-%s", PlatformStringFromPlatform, v19);
          bdObjectStoreCacheAwareObjectID::bdObjectStoreCacheAwareObjectID((bdObjectStoreCacheAwareObjectID *)&request, owner, v2->fileEntries[m_id].fileName, NULL, NULL);
          v21 = dest[0].m_size;
          if ( dest[0].m_size != dest[0].m_capacity )
          {
            v23 = dest[0].m_data;
            goto LABEL_49;
          }
          m_capacity = dest[0].m_capacity;
          if ( !dest[0].m_capacity )
            m_capacity = 1;
          v23 = NULL;
          v24 = dest[0].m_capacity + m_capacity;
          if ( !v24 )
            goto LABEL_44;
          v23 = (bdObjectStoreCacheAwareObjectID *)bdMemory::allocate(184i64 * v24);
          if ( dest[0].m_size )
            break;
LABEL_47:
          bdMemory::deallocate(dest[0].m_data);
          dest[0].m_data = v23;
          dest[0].m_capacity = v24;
          v21 = dest[0].m_size;
          m_id = v80.m_id;
LABEL_49:
          _RCX = &v23[v21];
          if ( _RCX )
          {
            _RAX = &request;
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovups xmmword ptr [rcx], xmm0
              vmovups xmm1, xmmword ptr [rax+10h]
              vmovups xmmword ptr [rcx+10h], xmm1
              vmovups xmm0, xmmword ptr [rax+20h]
              vmovups xmmword ptr [rcx+20h], xmm0
              vmovups xmm1, xmmword ptr [rax+30h]
              vmovups xmmword ptr [rcx+30h], xmm1
              vmovups xmm0, xmmword ptr [rax+40h]
              vmovups xmmword ptr [rcx+40h], xmm0
              vmovups xmm1, xmmword ptr [rax+50h]
              vmovups xmmword ptr [rcx+50h], xmm1
              vmovups xmm0, xmmword ptr [rax+60h]
              vmovups xmmword ptr [rcx+60h], xmm0
              vmovups xmm1, xmmword ptr [rax+70h]
              vmovups xmmword ptr [rcx+70h], xmm1
              vmovups xmm0, xmmword ptr [rax+80h]
              vmovups xmmword ptr [rcx+80h], xmm0
              vmovups xmm1, xmmword ptr [rax+90h]
              vmovups xmmword ptr [rcx+90h], xmm1
              vmovups xmm0, xmmword ptr [rax+0A0h]
              vmovups xmmword ptr [rcx+0A0h], xmm0
            }
            *(_QWORD *)&_RCX->m_cachedChecksum[31] = *(_QWORD *)&request.m_pageToken[140];
            v21 = dest[0].m_size;
          }
          dest[0].m_size = v21 + 1;
          bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID((bdObjectStoreCacheAwareObjectID *)&request);
          LODWORD(v80.m_id) = ++m_id;
          if ( m_id >= v2->fileEntryCount )
            goto LABEL_52;
        }
        _R8 = dest[0].m_data;
        _RDX = v23;
        v27 = dest[0].m_size;
        do
        {
          if ( _RDX )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r8]
              vmovups xmmword ptr [rdx], xmm0
              vmovups xmm1, xmmword ptr [r8+10h]
              vmovups xmmword ptr [rdx+10h], xmm1
              vmovups xmm0, xmmword ptr [r8+20h]
              vmovups xmmword ptr [rdx+20h], xmm0
              vmovups xmm1, xmmword ptr [r8+30h]
              vmovups xmmword ptr [rdx+30h], xmm1
              vmovups xmm0, xmmword ptr [r8+40h]
              vmovups xmmword ptr [rdx+40h], xmm0
              vmovups xmm1, xmmword ptr [r8+50h]
              vmovups xmmword ptr [rdx+50h], xmm1
              vmovups xmm0, xmmword ptr [r8+60h]
              vmovups xmmword ptr [rdx+60h], xmm0
              vmovups xmm1, xmmword ptr [r8+70h]
              vmovups xmmword ptr [rdx+70h], xmm1
              vmovups xmm0, xmmword ptr [r8+80h]
              vmovups xmmword ptr [rdx+80h], xmm0
              vmovups xmm1, xmmword ptr [r8+90h]
              vmovups xmmword ptr [rdx+90h], xmm1
              vmovups xmm0, xmmword ptr [r8+0A0h]
              vmovups xmmword ptr [rdx+0A0h], xmm0
            }
            *(_QWORD *)&_RDX->m_cachedChecksum[31] = *(_QWORD *)&_R8->m_cachedChecksum[31];
          }
          ++_RDX;
          ++_R8;
          --v27;
        }
        while ( v27 );
        v21 = dest[0].m_size;
LABEL_44:
        if ( v21 )
        {
          v39 = dest[0].m_data;
          v40 = v21;
          do
          {
            bdObjectStoreCacheAwareObjectID::~bdObjectStoreCacheAwareObjectID(v39++);
            --v40;
          }
          while ( v40 );
        }
        goto LABEL_47;
      case GET_INFO:
        v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TODO: add support for getting user storage file info");
        break;
      case LIST:
        LOBYTE(task) = 6;
        v60 = OnlineStorage::GetPlatformStringFromPlatform(this, (OnlineStoragePlatform)task);
        Xuid = Live_GetXuid(&result, v2->controllerIndex);
        UniversalId = (OnlineStorage *)XUID::GetUniversalId(Xuid);
        bdUserAccountID::bdUserAccountID((bdUserAccountID *)&objectID, (const unsigned __int64 *)&UniversalId, v60);
        bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)&request, (const bdUserAccountID *)&objectID);
        v62 = DWServicesAccess::GetInstance();
        v63 = DWServicesAccess::GetClientID(v62);
        bdObjectStoreListUserObjectsByCategoryRequest::bdObjectStoreListUserObjectsByCategoryRequest((bdObjectStoreListUserObjectsByCategoryRequest *)&metadata, v63, s_userStorageContextString, (const bdStructUserAccountID *)&request, v2->category, 0x1Eu, NULL);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&request.m_pageToken[36]);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&request.m_pageToken[20]);
        bdReferencable::~bdReferencable((bdReferencable *)&request.m_pageToken[36]);
        if ( dwListUserObjectsByCategory(&v2->taskCreateRequest, (bdObjectStoreListUserObjectsByCategoryRequest *)&metadata, v2->listUserStorageResponse) )
        {
          v2->status = AERIAL;
        }
        else
        {
          v2->status = 4;
          v64 = v2->onTaskCompleteCallback;
          if ( v64 )
            v64(v2);
        }
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&metadata.m_contentURL[384]);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&metadata.m_contentURL[368]);
        bdReferencable::~bdReferencable((bdReferencable *)&metadata.m_contentURL[384]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&metadata.m_contentURL[240]);
        bdObjectStorePaginatedRequestBase::~bdObjectStorePaginatedRequestBase((bdObjectStorePaginatedRequestBase *)&metadata);
        bdReferencable::~bdReferencable((bdReferencable *)&metadata.m_contentURL[408]);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&objectID.m_objectName[22]);
        bdReferencable::~bdReferencable((bdReferencable *)&objectID.m_objectName[22]);
        return;
      default:
        v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 648, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OnlineStorage: Unknown task operation %d", (unsigned __int8)v5);
        break;
    }
LABEL_106:
    if ( v59 )
      __debugbreak();
    return;
  }
  v6 = DWServicesAccess::GetInstance();
  v7 = DWServicesAccess::GetClientID(v6);
  bdObjectStoreUploadUserObjectsVectorizedRequest::bdObjectStoreUploadUserObjectsVectorizedRequest((bdObjectStoreUploadUserObjectsVectorizedRequest *)&request, v7, s_userStorageContextString);
  if ( !v2->uploadUserStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 538, ASSERT_TYPE_ASSERT, "(task->uploadUserStorageResponse)", (const char *)&queryFormat, "task->uploadUserStorageResponse") )
    __debugbreak();
  if ( !v2->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 539, ASSERT_TYPE_ASSERT, "(task->fileEntryCount > 0)", (const char *)&queryFormat, "task->fileEntryCount > 0") )
    __debugbreak();
  v8 = 0;
  if ( v2->fileEntryCount )
  {
    while ( 1 )
    {
      v9 = v2->fileEntries[v8].platform[0];
      v80.m_id = v2->fileEntries[v8].xuid.m_id;
      v10 = XUID::ToString(&v80);
      v11 = OnlineStorage::GetPlatformStringFromPlatform(this, (OnlineStoragePlatform)v9);
      Com_sprintf_truncate((char *)dest, 0x20ui64, "%s-%s", v11, v10);
      bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID, (const char *const)dest, v2->fileEntries[v8].fileName, USER_OWNER_TYPE);
      bdObjectStoreMetadata::bdObjectStoreMetadata(&metadata, &objectID);
      bdObjectStoreObject::bdObjectStoreObject(&object, v2->fileEntries[v8].buffer, v2->fileEntries[v8].bufferSize, &metadata);
      v12 = bdObjectStoreUploadUserObjectsVectorizedRequest::addObjectToRequestWindow((bdObjectStoreUploadUserObjectsVectorizedRequest *)&request, &object);
      v13 = v12;
      if ( v12 )
        break;
      bdMemory::deallocate(object.m_metadata.m_tags.m_data);
      object.m_metadata.m_tags.m_data = NULL;
      *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
      bdMemory::deallocate(metadata.m_tags.m_data);
      metadata.m_tags.m_data = NULL;
      *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
      if ( ++v8 >= v2->fileEntryCount )
        goto LABEL_16;
    }
    LODWORD(limit) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 558, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "OnlineStorage: addObjectToRequestWindow failed with error code : %d\n", limit) )
      __debugbreak();
    Com_PrintError(25, "OnlineStorage: addObjectToRequestWindow failed with error code: %d\n", (unsigned int)v13);
    bdMemory::deallocate(object.m_metadata.m_tags.m_data);
    object.m_metadata.m_tags.m_data = NULL;
    *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
    bdMemory::deallocate(metadata.m_tags.m_data);
    metadata.m_tags.m_data = NULL;
    *(_QWORD *)&metadata.m_tags.m_capacity = 0i64;
    bdObjectStoreACL::~bdObjectStoreACL(&metadata.m_acl);
  }
LABEL_16:
  if ( v2->validateUpload )
    bdObjectStoreUploadUserObjectsVectorizedRequest::includeInResponse((bdObjectStoreUploadUserObjectsVectorizedRequest *)&request, BD_OBJECTSTORE_EXTRA_VALIDATION_TOKEN);
  if ( dwUploadUserObjectsVectorized(&v2->taskCreateRequest, (const bdObjectStoreUploadUserObjectsVectorizedRequest *)&request, v2->uploadUserStorageResponse) )
  {
    v2->status = AERIAL;
  }
  else
  {
    v2->status = 4;
    v14 = v2->onTaskCompleteCallback;
    if ( v14 )
      v14(v2);
  }
  if ( *(_DWORD *)&request.m_pageToken[32] )
  {
    v15 = *(_QWORD *)&request.m_pageToken[20] + 3432i64;
    v16 = *(unsigned int *)&request.m_pageToken[32];
    do
    {
      bdMemory::deallocate(*(void **)v15);
      *(_QWORD *)v15 = 0i64;
      *(_QWORD *)(v15 + 8) = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL((bdObjectStoreACL *)(v15 - 3216));
      v15 += 3512i64;
      --v16;
    }
    while ( v16 );
  }
  bdMemory::deallocate(*(void **)&request.m_pageToken[20]);
  *(_QWORD *)&request.m_pageToken[20] = 0i64;
  *(_QWORD *)&request.m_pageToken[28] = 0i64;
  bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.m_pageToken[12]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&request.m_pageToken[12]);
  bdObjectStoreRequestBase::~bdObjectStoreRequestBase(&request);
  bdReferencable::~bdReferencable((bdReferencable *)&request.m_pageToken[52]);
}

/*
==============
OnlineStorage::FindAvailableFileResultBuffer
==============
*/
__int64 OnlineStorage::FindAvailableFileResultBuffer(OnlineStorage *this)
{
  __int64 result; 
  bool *i; 

  result = 0i64;
  for ( i = &this->m_fileResultBuffer[0].inUse; *i; i += 32769 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x10 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
OnlineStorage::FindEmptyTaskSlot
==============
*/
__int64 OnlineStorage::FindEmptyTaskSlot(OnlineStorage *this)
{
  __int64 result; 
  OnlineStorageTaskStatus *i; 

  result = 0i64;
  for ( i = &this->m_taskQueue[0].status; *i; i += 1712 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x10 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
OnlineStorage::FindHighestPriorityPendingTaskSlot
==============
*/
__int64 OnlineStorage::FindHighestPriorityPendingTaskSlot(OnlineStorage *this)
{
  unsigned __int8 v1; 
  unsigned int v2; 
  unsigned __int8 *priority; 
  unsigned int v4; 

  v1 = 0;
  v2 = 0;
  priority = this->m_taskQueue[1].priority;
  v4 = -1;
  do
  {
    if ( *(priority - 102) == 1 && *(priority - 1712) > v1 )
    {
      v4 = v2;
      v1 = *(priority - 1712);
    }
    if ( priority[1610] == 1 && *priority > v1 )
    {
      v4 = v2 + 1;
      v1 = *priority;
    }
    if ( priority[3322] == 1 && priority[1712] > v1 )
    {
      v4 = v2 + 2;
      v1 = priority[1712];
    }
    if ( priority[5034] == 1 && priority[3424] > v1 )
    {
      v4 = v2 + 3;
      v1 = priority[3424];
    }
    if ( priority[6746] == 1 && priority[5136] > v1 )
    {
      v4 = v2 + 4;
      v1 = priority[5136];
    }
    if ( priority[8458] == 1 && priority[6848] > v1 )
    {
      v4 = v2 + 5;
      v1 = priority[6848];
    }
    if ( priority[10170] == 1 && priority[8560] > v1 )
    {
      v4 = v2 + 6;
      v1 = priority[8560];
    }
    if ( priority[11882] == 1 && priority[10272] > v1 )
    {
      v4 = v2 + 7;
      v1 = priority[10272];
    }
    if ( priority[13594] == 1 && priority[11984] > v1 )
    {
      v4 = v2 + 8;
      v1 = priority[11984];
    }
    if ( priority[15306] == 1 && priority[13696] > v1 )
    {
      v4 = v2 + 9;
      v1 = priority[13696];
    }
    if ( priority[17018] == 1 && priority[15408] > v1 )
    {
      v4 = v2 + 10;
      v1 = priority[15408];
    }
    if ( priority[18730] == 1 && priority[17120] > v1 )
    {
      v4 = v2 + 11;
      v1 = priority[17120];
    }
    if ( priority[20442] == 1 && priority[18832] > v1 )
    {
      v4 = v2 + 12;
      v1 = priority[18832];
    }
    if ( priority[22154] == 1 && priority[20544] > v1 )
    {
      v4 = v2 + 13;
      v1 = priority[20544];
    }
    if ( priority[23866] == 1 && priority[22256] > v1 )
    {
      v4 = v2 + 14;
      v1 = priority[22256];
    }
    if ( priority[25578] == 1 && priority[23968] > v1 )
    {
      v4 = v2 + 15;
      v1 = priority[23968];
    }
    v2 += 16;
    priority += 27392;
  }
  while ( v2 < 0x10 );
  return v4;
}

/*
==============
OnlineStorage::FreeFileResultBuffer
==============
*/
void OnlineStorage::FreeFileResultBuffer(OnlineStorage *this, unsigned __int8 *buffer)
{
  signed __int64 v3; 

  v3 = buffer - (unsigned __int8 *)this - 27456;
  if ( v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 420, ASSERT_TYPE_ASSERT, "(offset >= 0)", (const char *)&queryFormat, "offset >= 0") )
    __debugbreak();
  if ( (unsigned __int64)v3 >= 0x80010 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 421, ASSERT_TYPE_ASSERT, "(offset < sizeof( m_fileResultBuffer ))", (const char *)&queryFormat, "offset < sizeof( m_fileResultBuffer )") )
    __debugbreak();
  if ( v3 != 32769 * (v3 / 0x8001ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 422, ASSERT_TYPE_ASSERT, "(offset % sizeof( m_fileResultBuffer[0] ) == 0)", (const char *)&queryFormat, "offset % sizeof( m_fileResultBuffer[0] ) == 0") )
    __debugbreak();
  buffer[0x8000] = 0;
}

/*
==============
OnlineStorage::FreeTask
==============
*/
void OnlineStorage::FreeTask(OnlineStorage *this, OnlineStorageTask *task)
{
  signed __int64 v3; 

  v3 = (char *)task - (char *)this - 64;
  if ( v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 379, ASSERT_TYPE_ASSERT, "(offset >= 0)", (const char *)&queryFormat, "offset >= 0") )
    __debugbreak();
  if ( (unsigned __int64)v3 >= 0x6B00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 380, ASSERT_TYPE_ASSERT, "(offset < sizeof( m_taskQueue ))", (const char *)&queryFormat, "offset < sizeof( m_taskQueue )") )
    __debugbreak();
  if ( v3 != 1712 * (v3 / 0x6B0ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 381, ASSERT_TYPE_ASSERT, "(offset % sizeof( m_taskQueue[0] ) == 0)", (const char *)&queryFormat, "offset % sizeof( m_taskQueue[0] ) == 0") )
    __debugbreak();
  if ( task->status == SPECTATOR )
    Com_PrintWarning(25, "OnlineStorage: freeing task that is already free.  This will do nothing.  This may happen in signout situations.\n");
  task->status = SPECTATOR;
}

/*
==============
OnlineStorage::GenerateUserString
==============
*/
void OnlineStorage::GenerateUserString(OnlineStorage *this, XUID xuid, OnlineStoragePlatform platform, char *outBuff, int outBuffLength)
{
  unsigned __int8 v7; 
  const char *v8; 
  const char *PlatformStringFromPlatform; 
  XUID v10; 

  v10.m_id = xuid.m_id;
  v7 = platform;
  v8 = XUID::ToString(&v10);
  PlatformStringFromPlatform = OnlineStorage::GetPlatformStringFromPlatform(this, (OnlineStoragePlatform)v7);
  Com_sprintf_truncate(outBuff, outBuffLength, "%s-%s", PlatformStringFromPlatform, v8);
}

/*
==============
OnlineStorage::GetClientId
==============
*/
const char *OnlineStorage::GetClientId(OnlineStorage *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 

  Instance = DWServicesAccess::GetInstance();
  return DWServicesAccess::GetClientID(Instance);
}

/*
==============
OnlineStorage::GetContext
==============
*/
char *OnlineStorage::GetContext(OnlineStorage *this)
{
  return s_contextString;
}

/*
==============
OnlineStorage::GetCurrentPlatform
==============
*/
char OnlineStorage::GetCurrentPlatform(OnlineStorage *this)
{
  return 6;
}

/*
==============
OnlineStorage::GetCurrentPlatformString
==============
*/
const char *OnlineStorage::GetCurrentPlatformString(OnlineStorage *this, OnlineStoragePlatform a2)
{
  LOBYTE(a2) = 6;
  return OnlineStorage::GetPlatformStringFromPlatform(this, a2);
}

/*
==============
OnlineStorage::GetInstance
==============
*/
OnlineStorage *OnlineStorage::GetInstance()
{
  return &OnlineStorage::s_instance;
}

/*
==============
OnlineStorage::GetInstancePtr
==============
*/
OnlineStorage *OnlineStorage::GetInstancePtr()
{
  return &OnlineStorage::s_instance;
}

/*
==============
OnlineStorage::GetPlatformStringFromPlatform
==============
*/
const char *OnlineStorage::GetPlatformStringFromPlatform(OnlineStorage *this, OnlineStoragePlatform platform)
{
  const char *result; 

  switch ( (char)platform )
  {
    case PLATFORM_UNKNOWN:
      result = "xbl";
      break;
    case PLATFORM_ANDROID:
      result = "psn";
      break;
    case PLATFORM_BATTLENET:
      result = "bnet";
      break;
    case PLATFORM_IOS:
      result = "steam";
      break;
    case PLATFORM_KINDLE_FIRE:
      result = "wecn";
      break;
    case PLATFORM_NX:
    case PLATFORM_PS3:
      result = "uno";
      break;
    default:
      Com_PrintWarning(25, "OnlineStorage: Invalid platform specified %d\n", (unsigned __int8)platform);
      result = (char *)&queryFormat.fmt + 3;
      break;
  }
  return result;
}

/*
==============
OnlineStorage::GetStateCount
==============
*/
__int64 OnlineStorage::GetStateCount(OnlineStorage *this, OnlineStorageTaskStatus status)
{
  unsigned int v3; 
  unsigned int v4; 
  OnlineStorageTaskStatus *p_status; 
  bool v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 

  v3 = 0;
  v4 = 0;
  p_status = &this->m_taskQueue[2].status;
  do
  {
    v6 = *((_BYTE *)p_status - 3424) == (unsigned __int8)status;
    v7 = v3 + 1;
    p_status += 27392;
    if ( !v6 )
      v7 = v3;
    v8 = v7 + 1;
    if ( *((_BYTE *)p_status - 29104) != status )
      v8 = v7;
    v9 = v8 + 1;
    if ( *((_BYTE *)p_status - 27392) != status )
      v9 = v8;
    v10 = v9 + 1;
    if ( *((_BYTE *)p_status - 25680) != status )
      v10 = v9;
    v11 = v10 + 1;
    if ( *((_BYTE *)p_status - 23968) != status )
      v11 = v10;
    v12 = v11 + 1;
    if ( *((_BYTE *)p_status - 22256) != status )
      v12 = v11;
    v13 = v12 + 1;
    if ( *((_BYTE *)p_status - 20544) != status )
      v13 = v12;
    v14 = v13 + 1;
    if ( *((_BYTE *)p_status - 18832) != status )
      v14 = v13;
    v15 = v14 + 1;
    if ( *((_BYTE *)p_status - 17120) != status )
      v15 = v14;
    v16 = v15 + 1;
    if ( *((_BYTE *)p_status - 15408) != status )
      v16 = v15;
    v17 = v16 + 1;
    if ( *((_BYTE *)p_status - 13696) != status )
      v17 = v16;
    v18 = v17 + 1;
    if ( *((_BYTE *)p_status - 11984) != status )
      v18 = v17;
    v19 = v18 + 1;
    if ( *((_BYTE *)p_status - 10272) != status )
      v19 = v18;
    v20 = v19 + 1;
    if ( *((_BYTE *)p_status - 8560) != status )
      v20 = v19;
    v21 = v20 + 1;
    if ( *((_BYTE *)p_status - 6848) != status )
      v21 = v20;
    v3 = v21 + 1;
    if ( *((_BYTE *)p_status - 5136) != status )
      v3 = v21;
    v4 += 16;
  }
  while ( v4 < 0x10 );
  return v3;
}

/*
==============
OnlineStorage::GetUserStorageContext
==============
*/
char *OnlineStorage::GetUserStorageContext(OnlineStorage *this)
{
  return s_userStorageContextString;
}

/*
==============
OnTaskComplete
==============
*/
void OnTaskComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  char *m_appData; 
  _BYTE *v5; 
  unsigned __int8 v6; 
  unsigned __int64 TransactionID; 
  const char *v8; 
  void (__fastcall *v9)(char *); 
  __int64 v10; 

  m_appData = (char *)pTask->m_appData;
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 279, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  v5 = m_appData + 1676;
  v6 = m_appData[1676];
  if ( v6 == 2 )
  {
    TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
    v8 = "OnlineStorage: task successful: transaction id = %llu\n";
    if ( taskState )
      v8 = "OnlineStorage: task failed: transaction id = %llu\n";
    Com_Printf(25, v8, TransactionID);
    *v5 = (taskState != TASKSTATE_SUCCESS) + 3;
    v9 = (void (__fastcall *)(char *))*((_QWORD *)m_appData + 15);
    if ( v9 )
      v9(m_appData);
  }
  else
  {
    Com_PrintWarning(25, "OnlineStorage: task completed, but the task is in state %d, so ignoring it.\n", v6);
  }
  v10 = m_appData - (char *)&OnlineStorage::s_instance - 64;
  if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 379, ASSERT_TYPE_ASSERT, "(offset >= 0)", (const char *)&queryFormat, "offset >= 0") )
    __debugbreak();
  if ( (unsigned __int64)v10 >= 0x6B00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 380, ASSERT_TYPE_ASSERT, "(offset < sizeof( m_taskQueue ))", (const char *)&queryFormat, "offset < sizeof( m_taskQueue )") )
    __debugbreak();
  if ( v10 != 1712 * (v10 / 0x6B0ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_storage.cpp", 381, ASSERT_TYPE_ASSERT, "(offset % sizeof( m_taskQueue[0] ) == 0)", (const char *)&queryFormat, "offset % sizeof( m_taskQueue[0] ) == 0") )
    __debugbreak();
  if ( !*v5 )
    Com_PrintWarning(25, "OnlineStorage: freeing task that is already free.  This will do nothing.  This may happen in signout situations.\n");
  *v5 = 0;
}

/*
==============
OnlineStorage::RemoveAllTasks
==============
*/
void OnlineStorage::RemoveAllTasks(OnlineStorage *this)
{
  OnlineStorageTaskStatus *p_status; 
  unsigned int i; 

  p_status = &this->m_taskQueue[1].status;
  for ( i = 0; i < 0x10; i += 16 )
  {
    if ( *((_BYTE *)p_status - 1712) )
      *((_BYTE *)p_status - 1712) = 0;
    *(_QWORD *)(p_status - 3308) = 0i64;
    *(_QWORD *)(p_status - 3316) = 0i64;
    if ( *p_status )
      *p_status = SPECTATOR;
    *(_QWORD *)(p_status - 1596) = 0i64;
    *(_QWORD *)(p_status - 1604) = 0i64;
    if ( *((_BYTE *)p_status + 1712) )
      *((_BYTE *)p_status + 1712) = 0;
    *(_QWORD *)(p_status + 116) = 0i64;
    *(_QWORD *)(p_status + 108) = 0i64;
    if ( *((_BYTE *)p_status + 3424) )
      *((_BYTE *)p_status + 3424) = 0;
    *(_QWORD *)(p_status + 1828) = 0i64;
    *(_QWORD *)(p_status + 1820) = 0i64;
    if ( *((_BYTE *)p_status + 5136) )
      *((_BYTE *)p_status + 5136) = 0;
    *(_QWORD *)(p_status + 3540) = 0i64;
    *(_QWORD *)(p_status + 3532) = 0i64;
    if ( *((_BYTE *)p_status + 6848) )
      *((_BYTE *)p_status + 6848) = 0;
    *(_QWORD *)(p_status + 5252) = 0i64;
    *(_QWORD *)(p_status + 5244) = 0i64;
    if ( *((_BYTE *)p_status + 8560) )
      *((_BYTE *)p_status + 8560) = 0;
    *(_QWORD *)(p_status + 6964) = 0i64;
    *(_QWORD *)(p_status + 6956) = 0i64;
    if ( *((_BYTE *)p_status + 10272) )
      *((_BYTE *)p_status + 10272) = 0;
    *(_QWORD *)(p_status + 8676) = 0i64;
    *(_QWORD *)(p_status + 8668) = 0i64;
    if ( *((_BYTE *)p_status + 11984) )
      *((_BYTE *)p_status + 11984) = 0;
    *(_QWORD *)(p_status + 10388) = 0i64;
    *(_QWORD *)(p_status + 10380) = 0i64;
    if ( *((_BYTE *)p_status + 13696) )
      *((_BYTE *)p_status + 13696) = 0;
    *(_QWORD *)(p_status + 12100) = 0i64;
    *(_QWORD *)(p_status + 12092) = 0i64;
    if ( *((_BYTE *)p_status + 15408) )
      *((_BYTE *)p_status + 15408) = 0;
    *(_QWORD *)(p_status + 13812) = 0i64;
    *(_QWORD *)(p_status + 13804) = 0i64;
    if ( *((_BYTE *)p_status + 17120) )
      *((_BYTE *)p_status + 17120) = 0;
    *(_QWORD *)(p_status + 15524) = 0i64;
    *(_QWORD *)(p_status + 15516) = 0i64;
    if ( *((_BYTE *)p_status + 18832) )
      *((_BYTE *)p_status + 18832) = 0;
    *(_QWORD *)(p_status + 17236) = 0i64;
    *(_QWORD *)(p_status + 17228) = 0i64;
    if ( *((_BYTE *)p_status + 20544) )
      *((_BYTE *)p_status + 20544) = 0;
    *(_QWORD *)(p_status + 18948) = 0i64;
    *(_QWORD *)(p_status + 18940) = 0i64;
    if ( *((_BYTE *)p_status + 22256) )
      *((_BYTE *)p_status + 22256) = 0;
    *(_QWORD *)(p_status + 20660) = 0i64;
    *(_QWORD *)(p_status + 20652) = 0i64;
    if ( *((_BYTE *)p_status + 23968) )
      *((_BYTE *)p_status + 23968) = 0;
    *(_QWORD *)(p_status + 22372) = 0i64;
    *(_QWORD *)(p_status + 22364) = 0i64;
    p_status += 27392;
  }
}

/*
==============
OnlineStorage::RemoveInactiveTasksForController
==============
*/
void OnlineStorage::RemoveInactiveTasksForController(OnlineStorage *this, int controllerIndex)
{
  unsigned int v2; 
  OnlineStorageTaskStatus *p_status; 

  v2 = 0;
  p_status = &this->m_taskQueue[1].status;
  do
  {
    if ( *((_DWORD *)p_status - 430) == controllerIndex && *((_BYTE *)p_status - 1712) != 2 )
      *((_BYTE *)p_status - 1712) = 0;
    if ( *((_DWORD *)p_status - 2) == controllerIndex && *p_status != AERIAL )
      *p_status = SPECTATOR;
    if ( *((_DWORD *)p_status + 426) == controllerIndex && *((_BYTE *)p_status + 1712) != 2 )
      *((_BYTE *)p_status + 1712) = 0;
    if ( *((_DWORD *)p_status + 854) == controllerIndex && *((_BYTE *)p_status + 3424) != 2 )
      *((_BYTE *)p_status + 3424) = 0;
    if ( *((_DWORD *)p_status + 1282) == controllerIndex && *((_BYTE *)p_status + 5136) != 2 )
      *((_BYTE *)p_status + 5136) = 0;
    if ( *((_DWORD *)p_status + 1710) == controllerIndex && *((_BYTE *)p_status + 6848) != 2 )
      *((_BYTE *)p_status + 6848) = 0;
    if ( *((_DWORD *)p_status + 2138) == controllerIndex && *((_BYTE *)p_status + 8560) != 2 )
      *((_BYTE *)p_status + 8560) = 0;
    if ( *((_DWORD *)p_status + 2566) == controllerIndex && *((_BYTE *)p_status + 10272) != 2 )
      *((_BYTE *)p_status + 10272) = 0;
    if ( *((_DWORD *)p_status + 2994) == controllerIndex && *((_BYTE *)p_status + 11984) != 2 )
      *((_BYTE *)p_status + 11984) = 0;
    if ( *((_DWORD *)p_status + 3422) == controllerIndex && *((_BYTE *)p_status + 13696) != 2 )
      *((_BYTE *)p_status + 13696) = 0;
    if ( *((_DWORD *)p_status + 3850) == controllerIndex && *((_BYTE *)p_status + 15408) != 2 )
      *((_BYTE *)p_status + 15408) = 0;
    if ( *((_DWORD *)p_status + 4278) == controllerIndex && *((_BYTE *)p_status + 17120) != 2 )
      *((_BYTE *)p_status + 17120) = 0;
    if ( *((_DWORD *)p_status + 4706) == controllerIndex && *((_BYTE *)p_status + 18832) != 2 )
      *((_BYTE *)p_status + 18832) = 0;
    if ( *((_DWORD *)p_status + 5134) == controllerIndex && *((_BYTE *)p_status + 20544) != 2 )
      *((_BYTE *)p_status + 20544) = 0;
    if ( *((_DWORD *)p_status + 5562) == controllerIndex && *((_BYTE *)p_status + 22256) != 2 )
      *((_BYTE *)p_status + 22256) = 0;
    if ( *((_DWORD *)p_status + 5990) == controllerIndex && *((_BYTE *)p_status + 23968) != 2 )
      *((_BYTE *)p_status + 23968) = 0;
    v2 += 16;
    p_status += 27392;
  }
  while ( v2 < 0x10 );
}

/*
==============
OnlineStorageDownloadInterceptor::handleDownload
==============
*/
__int64 OnlineStorageDownloadInterceptor::handleDownload(OnlineStorageDownloadInterceptor *this, void *data, unsigned int dataSize)
{
  __int64 result; 

  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, unsigned __int64))this->m_callback)(data, dataSize, this->m_bytesDownloaded, this->m_fileSize, this->m_fileID);
  this->m_bytesDownloaded += dataSize;
  return result;
}

