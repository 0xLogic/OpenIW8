/*
==============
Online_Store::OutputCurrentState
==============
*/

void __fastcall Online_Store::OutputCurrentState(Online_Store *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Store@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnStoreDownloadComplete
==============
*/

void __fastcall OnStoreDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnStoreDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_Store::ParseRecommendations
==============
*/

void __fastcall Online_Store::ParseRecommendations(Online_Store *this, const int controllerIndex, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?ParseRecommendations@Online_Store@@AEAAXHPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, controllerIndex, pTask, taskState);
}

/*
==============
Online_Store::SetHasConfig
==============
*/

void __fastcall Online_Store::SetHasConfig(Online_Store *this)
{
  ?SetHasConfig@Online_Store@@QEAAXXZ(this);
}

/*
==============
Online_Store::RegisterLuaFunctions
==============
*/

void __fastcall Online_Store::RegisterLuaFunctions(Online_Store *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Store@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Store::GetCategoriesJSON
==============
*/

void __fastcall Online_Store::GetCategoriesJSON(Online_Store *this)
{
  ?GetCategoriesJSON@Online_Store@@QEAAXXZ(this);
}

/*
==============
OnFetchRecommendationsComplete
==============
*/

void __fastcall OnFetchRecommendationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnFetchRecommendationsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Store::RetryStoreConfigDownload
==============
*/

void __fastcall Online_Store::RetryStoreConfigDownload(Online_Store *this)
{
  ?RetryStoreConfigDownload@Online_Store@@QEAAXXZ(this);
}

/*
==============
Online_Store::Reset
==============
*/

void __fastcall Online_Store::Reset(Online_Store *this)
{
  ?Reset@Online_Store@@QEAAXXZ(this);
}

/*
==============
Online_Store::GetInstancePtr
==============
*/

Online_Store *__fastcall Online_Store::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Store@@SAPEAV1@XZ();
}

/*
==============
Online_Store::AttemptFetchStoreRecommendations
==============
*/

void __fastcall Online_Store::AttemptFetchStoreRecommendations(Online_Store *this)
{
  ?AttemptFetchStoreRecommendations@Online_Store@@AEAAXXZ(this);
}

/*
==============
Online_Store::GetInstance
==============
*/

Online_Store *__fastcall Online_Store::GetInstance()
{
  return ?GetInstance@Online_Store@@SAAEAV1@XZ();
}

/*
==============
Online_Store::ResetRecommendations
==============
*/

void __fastcall Online_Store::ResetRecommendations(Online_Store *this, bool resetFetchCounter)
{
  ?ResetRecommendations@Online_Store@@QEAAX_N@Z(this, resetFetchCounter);
}

/*
==============
Online_Store::Uninit
==============
*/

void __fastcall Online_Store::Uninit(Online_Store *this)
{
  ?Uninit@Online_Store@@UEAAXXZ(this);
}

/*
==============
Online_Store::GetLayoutJSON
==============
*/

void __fastcall Online_Store::GetLayoutJSON(Online_Store *this, int categoryCount)
{
  ?GetLayoutJSON@Online_Store@@QEAAXH@Z(this, categoryCount);
}

/*
==============
Online_Store::FetchRecommendations
==============
*/

void __fastcall Online_Store::FetchRecommendations(Online_Store *this, const int controllerIndex)
{
  ?FetchRecommendations@Online_Store@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Store::OnSignedIn
==============
*/

void __fastcall Online_Store::OnSignedIn(Online_Store *this, const int controllerIndex, GenericSignInState signInState)
{
  ?OnSignedIn@Online_Store@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signInState);
}

/*
==============
Online_Store::Init
==============
*/

bool __fastcall Online_Store::Init(Online_Store *this)
{
  return ?Init@Online_Store@@UEAA_NXZ(this);
}

/*
==============
Online_Store::DownloadConfig
==============
*/

void __fastcall Online_Store::DownloadConfig(Online_Store *this, const int controllerIndex)
{
  ?DownloadConfig@Online_Store@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Store::AttemptConfigDownload
==============
*/

void __fastcall Online_Store::AttemptConfigDownload(Online_Store *this)
{
  ?AttemptConfigDownload@Online_Store@@AEAAXXZ(this);
}

/*
==============
Online_Store::FenceDependeciesUpdated
==============
*/

void __fastcall Online_Store::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ?FenceDependeciesUpdated@Online_Store@@SAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_Store::ControllerFrame
==============
*/

void __fastcall Online_Store::ControllerFrame(Online_Store *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Store@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnStoreCategoriesDownloadComplete
==============
*/

void __fastcall OnStoreCategoriesDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnStoreCategoriesDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_Store::OnRegistered
==============
*/

void __fastcall Online_Store::OnRegistered(Online_Store *this)
{
  ?OnRegistered@Online_Store@@UEAAXXZ(this);
}

/*
==============
Online_Store::GetResponseObjectByFileName
==============
*/

bool __fastcall Online_Store::GetResponseObjectByFileName(Online_Store *this, OnlineStoreResponseBuffer buffer, const char *filename, bdObjectStoreErrorWrappedObject *response)
{
  return ?GetResponseObjectByFileName@Online_Store@@QEAA_NW4OnlineStoreResponseBuffer@@PEBDAEAVbdObjectStoreErrorWrappedObject@@@Z(this, buffer, filename, response);
}

/*
==============
OnStoreLayoutDownloadComplete
==============
*/

void __fastcall OnStoreLayoutDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnStoreLayoutDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_Store::Frame
==============
*/

void __fastcall Online_Store::Frame(Online_Store *this)
{
  ?Frame@Online_Store@@UEAAXXZ(this);
}

/*
==============
Online_Store::SetHasRecommendations
==============
*/

void __fastcall Online_Store::SetHasRecommendations(Online_Store *this)
{
  ?SetHasRecommendations@Online_Store@@QEAAXXZ(this);
}

/*
==============
Online_Store::RetryRecommendationFetch
==============
*/

void __fastcall Online_Store::RetryRecommendationFetch(Online_Store *this)
{
  ?RetryRecommendationFetch@Online_Store@@QEAAXXZ(this);
}

/*
==============
Online_Store::OnSignedOut
==============
*/

void __fastcall Online_Store::OnSignedOut(Online_Store *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Store@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Store::OnDisconnect
==============
*/

void __fastcall Online_Store::OnDisconnect(Online_Store *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Store@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Store::HandleRecommendationsFetchComplete
==============
*/

void __fastcall Online_Store::HandleRecommendationsFetchComplete(Online_Store *this, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?HandleRecommendationsFetchComplete@Online_Store@@QEAAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, pTask, taskState);
}

/*
==============
Online_Store::OnUnregistered
==============
*/

void __fastcall Online_Store::OnUnregistered(Online_Store *this)
{
  ?OnUnregistered@Online_Store@@UEAAXXZ(this);
}

/*
==============
Online_Store::ResetStoreConfig
==============
*/

void __fastcall Online_Store::ResetStoreConfig(Online_Store *this)
{
  ?ResetStoreConfig@Online_Store@@QEAAXXZ(this);
}

/*
==============
LUI_CoD_LuaCall_HasStoreData
==============
*/
__int64 LUI_CoD_LuaCall_HasStoreData(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, Online_Store::s_instance.m_hasStore);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRecommendations
==============
*/
__int64 LUI_CoD_LuaCall_GetRecommendations(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  const char *v4; 
  __int64 v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Store.GetRecommendations( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v4 = Online_Store::s_instance.m_recommendationStrings[*(float *)&v3];
    if ( !v4 )
      goto LABEL_10;
    v5 = -1i64;
    do
      ++v5;
    while ( v4[v5] );
    if ( !(_DWORD)v5 )
LABEL_10:
      v4 = (char *)&queryFormat.fmt + 3;
    j_lua_pushstring(luaVM, v4);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetRecommendationsAvailabilityTimes
==============
*/
__int64 LUI_CoD_LuaCall_GetRecommendationsAvailabilityTimes(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int sale_end; 
  unsigned int v9; 
  char key[16]; 
  __int64 value; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Store.GetRecommendationsAvailabilityTimes( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    j_lua_createtable(luaVM, 0, 0);
    v4 = (int)*(float *)&v3;
    v5 = 0;
    v6 = Online_Store::s_instance.m_product_lifespan_counts[v4];
    if ( v6 )
    {
      v7 = v4;
      do
      {
        sale_end = Online_Store::s_instance.m_product_lifespans[v7][v5].sale_end;
        *(_OWORD *)key = *(_OWORD *)Online_Store::s_instance.m_product_lifespans[v7][v5].m_productID;
        LODWORD(value) = sale_end;
        LUI_BeginTable(key, luaVM);
        LUI_SetTableInt("saleStart", *(unsigned int *)&key[12], luaVM);
        LUI_SetTableInt("saleEnd", (unsigned int)value, luaVM);
        LUI_EndTable(LUI_luaVM);
        ++v5;
      }
      while ( v5 < v6 );
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
Online_Store::OnRegistered
==============
*/
void Online_Store::OnRegistered(Online_Store *this)
{
  ;
}

/*
==============
Online_Store::OnUnregistered
==============
*/
void Online_Store::OnUnregistered(Online_Store *this)
{
  ;
}

/*
==============
Online_Store::Init
==============
*/
bool Online_Store::Init(Online_Store *this)
{
  bool result; 

  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_STORE, (void (__fastcall *)(int, bool))Online_Store::FenceDependeciesUpdated);
  Online_Backoff::Init(&this->m_storeConfigBackoff, 1000, 10, 2.0, 1, 0);
  this->m_canGetStoreController = -1;
  Online_Store::ResetStoreConfig(this);
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  result = 1;
  this->m_fetchAttemptCount = 0;
  *(_WORD *)&this->m_canGetRecommendations = 0;
  this->m_hasRecommendations = 0;
  return result;
}

/*
==============
Online_Store::Uninit
==============
*/
void Online_Store::Uninit(Online_Store *this)
{
  ;
}

/*
==============
Online_Store::Frame
==============
*/
void Online_Store::Frame(Online_Store *this)
{
  Online_Store::AttemptConfigDownload(this);
  Online_Store::AttemptFetchStoreRecommendations(this);
}

/*
==============
Online_Store::ControllerFrame
==============
*/
void Online_Store::ControllerFrame(Online_Store *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_Store::OnSignedIn
==============
*/
void Online_Store::OnSignedIn(Online_Store *this, const int controllerIndex, GenericSignInState signInState)
{
  ;
}

/*
==============
Online_Store::OnSignedOut
==============
*/
void Online_Store::OnSignedOut(Online_Store *this, const int controllerIndex, GenericSignOutState signOutState)
{
  if ( CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0) == controllerIndex )
  {
    Online_Store::ResetStoreConfig(this);
    memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
    this->m_fetchAttemptCount = 0;
    *(_WORD *)&this->m_canGetRecommendations = 0;
    this->m_hasRecommendations = 0;
    Online_Backoff::Init(&this->m_storeConfigBackoff, 1000, 10, 2.0, 1, 0);
    Online_Backoff::Init(&this->m_recommendationsBackoff, 1000, 10, 2.0, 1, 0);
  }
}

/*
==============
Online_Store::OnDisconnect
==============
*/
void Online_Store::OnDisconnect(Online_Store *this, ONLINE_DISCONNECT reason)
{
  Online_Store::ResetStoreConfig(this);
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  this->m_fetchAttemptCount = 0;
  *(_WORD *)&this->m_canGetRecommendations = 0;
  this->m_hasRecommendations = 0;
  Online_Backoff::Init(&this->m_storeConfigBackoff, 1000, 10, 2.0, 1, 0);
  Online_Backoff::Init(&this->m_recommendationsBackoff, 1000, 10, 2.0, 1, 0);
}

/*
==============
Online_Store::RegisterLuaFunctions
==============
*/
void Online_Store::RegisterLuaFunctions(Online_Store *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Store", Store_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Store::OutputCurrentState
==============
*/
void Online_Store::OutputCurrentState(Online_Store *this, const int controllerIndex)
{
  Com_Printf(25, "Online_Store DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, DOUBLE_189_1015625);
  Com_Printf(25, "Online_Store DUMP END\n");
}

/*
==============
Online_Store::AttemptConfigDownload
==============
*/
void Online_Store::AttemptConfigDownload(Online_Store *this)
{
  int v2; 
  const char *v3; 
  const dvar_t *v4; 
  const char *String_Internal_DebugName; 
  const char *v6; 
  const dvar_t *v7; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v9; 
  const XUID *v10; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v13; 
  XUID result; 
  OnlineStorageTask v15; 
  bdObjectStoreObject object; 

  if ( this->m_canGetStore && !this->m_gettingStore )
  {
    v2 = Sys_Milliseconds();
    if ( Online_Backoff::CanProceed(&this->m_storeConfigBackoff, v2) )
    {
      if ( LiveStorage_IsPaidUser(this->m_canGetStoreController) )
      {
        v3 = "online_store_config_dev";
        v4 = DVARSTR_online_store_config_dev;
      }
      else
      {
        v3 = "online_store_config_dev_warzone";
        v4 = DVARSTR_online_store_config_dev_warzone;
      }
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(v4, v3);
      if ( !*String_Internal_DebugName )
      {
        if ( LiveStorage_IsPaidUser(this->m_canGetStoreController) )
        {
          v6 = "online_store_config";
          v7 = DVARSTR_online_store_config;
        }
        else
        {
          v6 = "online_store_config_warzone";
          v7 = DVARSTR_online_store_config_warzone;
        }
        String_Internal_DebugName = Dvar_GetString_Internal_DebugName(v7, v6);
      }
      TaskCreateRequest::TaskCreateRequest(&v15.taskCreateRequest);
      fileEntries = v15.fileEntries;
      v9 = 16i64;
      do
      {
        OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
        --v9;
      }
      while ( v9 );
      memset_0(&v15, 0, sizeof(v15));
      v15.fileEntryCount = 0;
      *(_WORD *)&v15.operation = 257;
      v15.priority[0] = 2;
      v15.controllerIndex = this->m_canGetStoreController;
      v15.onTaskCompleteCallback = OnStoreDownloadComplete;
      bdObjectStoreGetPublisherObjectsResponse::reset(this->m_getStoreResponse);
      this->m_responseCount[0] = 0;
      v15.getPublisherStorageResponse = this->m_getStoreResponse;
      if ( v15.fileEntryCount >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 495, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 10)", (const char *)&queryFormat, "storageTask.fileEntryCount < MAX_STORE_BUTTONS", -2i64) )
        __debugbreak();
      Core_strcpy_truncate(v15.fileEntries[v15.fileEntryCount].fileName, 0x40ui64, String_Internal_DebugName);
      v10 = XUID::NullXUID(&result);
      XUID::operator=(&v15.fileEntries[v15.fileEntryCount].xuid, v10);
      Instance = OnlineStorage::GetInstance();
      CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
      v15.fileEntries[v15.fileEntryCount].platform[0] = CurrentPlatform;
      if ( this == (Online_Store *)-24968i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 501, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
        __debugbreak();
      bdObjectStoreObject::bdObjectStoreObject(&object, this->m_storeBuffers[0], 0x800ui64);
      bdObjectStoreErrorWrappedObject::reset(&this->m_responseObjects[0][v15.fileEntryCount]);
      bdObjectStoreErrorWrappedObject::setObject(&this->m_responseObjects[0][v15.fileEntryCount++], &object);
      ++this->m_responseCount[0];
      bdMemory::deallocate(object.m_metadata.m_tags.m_data);
      object.m_metadata.m_tags.m_data = NULL;
      *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
      bdObjectStoreGetPublisherObjectsResponse::setObjectList(v15.getPublisherStorageResponse, this->m_responseObjects[0], v15.fileEntryCount);
      v13 = OnlineStorage::GetInstance();
      if ( OnlineStorage::EnqueueTask(v13, &v15) )
      {
        this->m_gettingStore = 1;
        this->m_canGetStore = 0;
      }
      else
      {
        Online_Store::RetryStoreConfigDownload(&Online_Store::s_instance);
      }
      TaskCreateRequest::~TaskCreateRequest(&v15.taskCreateRequest);
    }
  }
}

/*
==============
Online_Store::AttemptFetchStoreRecommendations
==============
*/
void Online_Store::AttemptFetchStoreRecommendations(Online_Store *this)
{
  unsigned int m_recommendationController; 
  int v3; 
  unsigned __int64 v4; 
  size_t v5; 
  unsigned __int64 v6; 
  size_t v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int m_capacity; 
  unsigned int v11; 
  __int64 v12; 
  bdCommsLocationCount *m_data; 
  __int64 m_size; 
  __int64 v15; 
  DWServicesAccess *Instance; 
  DWMarketingComms *MarketingComms; 
  Online_Store *CommMessages; 
  bdReference<bdRemoteTask> *p_m_remoteDemonwareTask; 
  Online_Store_vtbl *v20; 
  TaskManager *v21; 
  TaskCreateResult pTaskCreateResult; 
  bdCommsLocationCount v23; 
  bdReference<bdRemoteTask> result; 

  m_recommendationController = this->m_recommendationController;
  if ( this->m_canGetRecommendations && !this->m_gettingRecommendations )
  {
    v3 = Sys_Milliseconds();
    if ( Online_Backoff::CanProceed(&this->m_recommendationsBackoff, v3) )
    {
      bdCommsGetMessagesRequest::reset(&this->m_recommendationsRequest);
      bdCommsGetMessagesResponse::reset(&this->m_recommendationsResponse);
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
      v4 = -1i64;
      do
        ++v4;
      while ( Src[v4] );
      if ( this != (Online_Store *)-193408i64 )
      {
        v5 = 19i64;
        if ( v4 < 0x13 )
          v5 = v4;
        memcpy_0(this->m_recommendationsRequest.m_languageCode, "en", v5);
        this->m_recommendationsRequest.m_languageCode[v5] = 0;
      }
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v6 = -1i64;
      do
        ++v6;
      while ( aIw8_0[v6] );
      if ( this != (Online_Store *)-193392i64 )
      {
        v7 = 15i64;
        if ( v6 < 0xF )
          v7 = v6;
        memcpy_0(&this->m_recommendationsRequest.__vftable + 2, "iw8", v7);
        *((_BYTE *)&this->m_recommendationsRequest.__vftable + v7 + 16) = 0;
      }
      bdCommsLocationCount::bdCommsLocationCount(&v23);
      v9 = v8;
      m_capacity = this->m_recommendationsRequest.m_locationCounts.m_capacity;
      if ( this->m_recommendationsRequest.m_locationCounts.m_size == m_capacity )
      {
        v11 = this->m_recommendationsRequest.m_locationCounts.m_capacity;
        if ( !m_capacity )
          v11 = 1;
        v12 = m_capacity + v11;
        m_data = NULL;
        if ( (_DWORD)v12 )
        {
          m_data = (bdCommsLocationCount *)bdMemory::allocate(40 * v12);
          m_size = this->m_recommendationsRequest.m_locationCounts.m_size;
          if ( (_DWORD)m_size )
            memcpy_0(m_data, this->m_recommendationsRequest.m_locationCounts.m_data, 40 * m_size);
        }
        bdMemory::deallocate(this->m_recommendationsRequest.m_locationCounts.m_data);
        this->m_recommendationsRequest.m_locationCounts.m_data = m_data;
        this->m_recommendationsRequest.m_locationCounts.m_capacity = v12;
      }
      else
      {
        m_data = this->m_recommendationsRequest.m_locationCounts.m_data;
      }
      v15 = this->m_recommendationsRequest.m_locationCounts.m_size;
      m_data[v15].bdStructBufferSerializable = *(bdStructBufferSerializable *)v9;
      *(double *)m_data[v15].gap20 = *(double *)(v9 + 32);
      ++this->m_recommendationsRequest.m_locationCounts.m_size;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v23.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v23.__vftable + 3));
      *((_DWORD *)&bdFastArray<bdCommsLocationCount>::operator[](&this->m_recommendationsRequest.m_locationCounts, 0)->__vftable + 4) = 14;
      *((_DWORD *)&bdFastArray<bdCommsLocationCount>::operator[](&this->m_recommendationsRequest.m_locationCounts, 0)->__vftable + 5) = 1;
      Instance = DWServicesAccess::GetInstance();
      MarketingComms = DWServicesAccess::GetMarketingComms(Instance, m_recommendationController);
      CommMessages = (Online_Store *)DWMarketingComms::getCommMessages(MarketingComms, &result, &this->m_recommendationsRequest, &this->m_recommendationsResponse);
      p_m_remoteDemonwareTask = &this->m_recommendationRequestTask.m_remoteDemonwareTask;
      if ( CommMessages != (Online_Store *)&this->m_recommendationRequestTask.m_remoteDemonwareTask )
      {
        if ( p_m_remoteDemonwareTask->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_remoteDemonwareTask->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_remoteDemonwareTask->m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))p_m_remoteDemonwareTask->m_ptr->~bdReferencable)(p_m_remoteDemonwareTask->m_ptr, 1i64);
        v20 = CommMessages->__vftable;
        p_m_remoteDemonwareTask->m_ptr = (bdRemoteTask *)CommMessages->__vftable;
        if ( v20 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v20->OnUnregistered, 1u);
      }
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      if ( p_m_remoteDemonwareTask->m_ptr )
      {
        pTaskCreateResult.m_localTaskId = 0;
        pTaskCreateResult.m_task = NULL;
        this->m_recommendationRequestTask.m_controllerIndex = m_recommendationController;
        this->m_recommendationRequestTask.m_onCompletionCallback = OnFetchRecommendationsComplete;
        v21 = TaskManager::GetInstance();
        if ( TaskManager::CreateTask(v21, &this->m_recommendationRequestTask, &pTaskCreateResult) )
        {
          Com_Printf(25, "AttemptFetchStoreRecommendations( controller: %d ) - CreateTask created task id %d!\n", m_recommendationController, pTaskCreateResult.m_localTaskId);
          this->m_gettingRecommendations = 1;
        }
        else
        {
          Com_PrintError(25, "AttemptFetchStoreRecommendations( controller: %d ) - CreateTask failed!\n", m_recommendationController);
        }
      }
      else
      {
        Com_PrintError(25, "AttemptFetchStoreRecommendations( controller: %d ) - getCommMessages FAILED to create a Demonware Task!\n", m_recommendationController);
      }
    }
  }
}

/*
==============
Online_Store::DownloadConfig
==============
*/
void Online_Store::DownloadConfig(Online_Store *this, const int controllerIndex)
{
  Online_Store::ResetStoreConfig(this);
  this->m_canGetStoreController = controllerIndex;
  this->m_canGetStore = 1;
  this->m_hasStore = 0;
}

/*
==============
Online_Store::FenceDependeciesUpdated
==============
*/
void Online_Store::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  MarketingCommsManager *Instance; 

  if ( Live_UserIsGuest(controllerIndex) )
  {
    Com_Printf(25, "Cannot fetch personal recommendations for guest accounts.\n");
  }
  else if ( value )
  {
    Online_Store::ResetStoreConfig(&Online_Store::s_instance);
    Online_Store::s_instance.m_canGetStore = 1;
    Online_Store::s_instance.m_canGetStoreController = controllerIndex;
    Online_Store::s_instance.m_hasStore = 0;
    Instance = MarketingCommsManager::GetInstance();
    if ( MarketingCommsManager::IsCommsEnabled(Instance) )
    {
      Online_Store::s_instance.m_canGetRecommendations = 1;
      Online_Store::s_instance.m_recommendationController = controllerIndex;
      Online_Store::s_instance.m_hasRecommendations = 0;
    }
    else
    {
      Com_Printf(25, "Cannot fetch personal recommendations, Comms not enabled.\n");
    }
  }
}

/*
==============
Online_Store::FetchRecommendations
==============
*/
void Online_Store::FetchRecommendations(Online_Store *this, const int controllerIndex)
{
  this->m_canGetRecommendations = 1;
  this->m_recommendationController = controllerIndex;
  this->m_hasRecommendations = 0;
}

/*
==============
Online_Store::GetCategoriesJSON
==============
*/
void Online_Store::GetCategoriesJSON(Online_Store *this)
{
  signed int m_count; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v4; 
  bdObjectStoreGetPublisherObjectsResponse *getPublisherStorageResponse; 
  signed int v6; 
  const XUID *v7; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  __int64 v10; 
  unsigned __int8 *v11; 
  OnlineStorage *v12; 
  int v13; 
  int v14; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v16; 
  __int64 v17; 
  XUID result; 
  OnlineStorageTask v19; 
  bdObjectStoreObject object; 
  char src[64]; 

  v17 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v16);
  bdJSONDeserializer::parse(&v16, (const char *)this->m_storeBuffers);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( !bdJSONDeserializer::hasKey(&v16, "categories") || !bdJSONDeserializer::getArray(&v16, "categories", &value) )
    goto LABEL_21;
  m_count = value.m_count;
  if ( (int)value.m_count > 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 241, ASSERT_TYPE_ASSERT, "(count <= 10)", (const char *)&queryFormat, "count <= MAX_STORE_BUTTONS") )
    __debugbreak();
  if ( m_count )
  {
    TaskCreateRequest::TaskCreateRequest(&v19.taskCreateRequest);
    fileEntries = v19.fileEntries;
    v4 = 16i64;
    do
    {
      OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
      --v4;
    }
    while ( v4 );
    memset_0(&v19, 0, sizeof(v19));
    v19.fileEntryCount = 0;
    *(_WORD *)&v19.operation = 257;
    v19.priority[0] = 2;
    v19.controllerIndex = this->m_canGetStoreController;
    v19.onTaskCompleteCallback = OnStoreCategoriesDownloadComplete;
    getPublisherStorageResponse = &this->m_getStoreResponse[1];
    bdObjectStoreGetPublisherObjectsResponse::reset(&this->m_getStoreResponse[1]);
    this->m_responseCount[1] = 0;
    v19.getPublisherStorageResponse = &this->m_getStoreResponse[1];
    v6 = 0;
    if ( m_count > 0 )
    {
      do
      {
        bdJSONDeserializer::getString(&value, v6, src, 0x40u);
        if ( v19.fileEntryCount >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 272, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 10)", (const char *)&queryFormat, "storageTask.fileEntryCount < MAX_STORE_BUTTONS") )
          __debugbreak();
        Core_strcpy_truncate(v19.fileEntries[v19.fileEntryCount].fileName, 0x40ui64, src);
        v7 = XUID::NullXUID(&result);
        XUID::operator=(&v19.fileEntries[v19.fileEntryCount].xuid, v7);
        Instance = OnlineStorage::GetInstance();
        CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
        v19.fileEntries[v19.fileEntryCount].platform[0] = CurrentPlatform;
        v10 = (__int64)(v6 + this->STORE_RESPONSE_BUFFER_OFFSET) << 11;
        v11 = &this->m_storeBuffers[0][v10];
        if ( (Online_Store *)((char *)this + v10) == (Online_Store *)-24968i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 278, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
          __debugbreak();
        bdObjectStoreObject::bdObjectStoreObject(&object, v11, 0x800ui64);
        bdObjectStoreErrorWrappedObject::reset(&this->m_responseObjects[1][v19.fileEntryCount]);
        bdObjectStoreErrorWrappedObject::setObject(&this->m_responseObjects[1][v19.fileEntryCount++], &object);
        ++this->m_responseCount[1];
        bdMemory::deallocate(object.m_metadata.m_tags.m_data);
        object.m_metadata.m_tags.m_data = NULL;
        *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
        bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
        ++v6;
      }
      while ( v6 < m_count );
      getPublisherStorageResponse = v19.getPublisherStorageResponse;
    }
    bdObjectStoreGetPublisherObjectsResponse::setObjectList(getPublisherStorageResponse, this->m_responseObjects[1], v19.fileEntryCount);
    v12 = OnlineStorage::GetInstance();
    if ( !OnlineStorage::EnqueueTask(v12, &v19) )
    {
      v13 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v13);
      Online_Store::ResetStoreConfig(&Online_Store::s_instance);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      Online_Store::s_instance.m_fetchAttemptCount = 0;
      *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
      Online_Store::s_instance.m_hasRecommendations = 0;
      Online_Store::s_instance.m_canGetStore = 1;
    }
    TaskCreateRequest::~TaskCreateRequest(&v19.taskCreateRequest);
  }
  else
  {
LABEL_21:
    *(_WORD *)&Online_Store::s_instance.m_gettingStore = 256;
    Online_Store::s_instance.m_canGetStore = 0;
    v14 = Sys_Milliseconds();
    Online_Backoff::ReportSuccess(&Online_Store::s_instance.m_storeConfigBackoff, v14);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v16);
}

/*
==============
Online_Store::GetInstance
==============
*/
Online_Store *Online_Store::GetInstance()
{
  return &Online_Store::s_instance;
}

/*
==============
Online_Store::GetInstancePtr
==============
*/
Online_Store *Online_Store::GetInstancePtr()
{
  return &Online_Store::s_instance;
}

/*
==============
Online_Store::GetLayoutJSON
==============
*/
void Online_Store::GetLayoutJSON(Online_Store *this, int categoryCount)
{
  int v4; 
  int v5; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v7; 
  bdObjectStoreGetPublisherObjectsResponse *getPublisherStorageResponse; 
  int v9; 
  char *v10; 
  const XUID *v11; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  __int64 v14; 
  unsigned __int8 *v15; 
  OnlineStorage *v16; 
  int v17; 
  int *m_responseCount; 
  bdObjectStoreErrorWrappedObject (*m_responseObjects)[10]; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  XUID value; 
  bdJSONDeserializer v24; 
  __int64 v25; 
  OnlineStorageTask v26; 
  bdObjectStoreObject object; 
  char src[640]; 

  v25 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v24);
  v4 = 0;
  v5 = 0;
  if ( categoryCount <= 0 )
    goto LABEL_28;
  do
  {
    bdJSONDeserializer::parse(&v24, (const char *)this->m_storeBuffers[(__int64)(v5 + this->STORE_RESPONSE_BUFFER_OFFSET)]);
    LODWORD(value.m_id) = 0;
    bdJSONDeserializer::getInt32(&v24, "layoutType", (int *)&value);
    if ( bdJSONDeserializer::hasKey(&v24, "layoutName") )
      bdJSONDeserializer::getString(&v24, "layoutName", &src[64 * (__int64)v4++], 0x40u);
    ++v5;
  }
  while ( v5 < categoryCount );
  if ( v4 )
  {
    if ( v4 > 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 362, ASSERT_TYPE_ASSERT, "(customLayouts <= 10)", (const char *)&queryFormat, "customLayouts <= MAX_STORE_BUTTONS") )
      __debugbreak();
    TaskCreateRequest::TaskCreateRequest(&v26.taskCreateRequest);
    fileEntries = v26.fileEntries;
    v7 = 16i64;
    do
    {
      OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
      --v7;
    }
    while ( v7 );
    memset_0(&v26, 0, sizeof(v26));
    v26.fileEntryCount = 0;
    *(_WORD *)&v26.operation = 257;
    v26.priority[0] = 2;
    v26.controllerIndex = this->m_canGetStoreController;
    v26.onTaskCompleteCallback = OnStoreLayoutDownloadComplete;
    getPublisherStorageResponse = &this->m_getStoreResponse[2];
    bdObjectStoreGetPublisherObjectsResponse::reset(&this->m_getStoreResponse[2]);
    this->m_responseCount[2] = 0;
    v26.getPublisherStorageResponse = &this->m_getStoreResponse[2];
    v9 = 0;
    if ( v4 > 0 )
    {
      v10 = src;
      do
      {
        if ( v26.fileEntryCount >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 384, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount < 10)", (const char *)&queryFormat, "storageTask.fileEntryCount < MAX_STORE_BUTTONS") )
          __debugbreak();
        Core_strcpy_truncate(v26.fileEntries[v26.fileEntryCount].fileName, 0x40ui64, v10);
        v11 = XUID::NullXUID(&value);
        XUID::operator=(&v26.fileEntries[v26.fileEntryCount].xuid, v11);
        Instance = OnlineStorage::GetInstance();
        CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
        v26.fileEntries[v26.fileEntryCount].platform[0] = CurrentPlatform;
        v14 = (__int64)(v9 + categoryCount + this->STORE_RESPONSE_BUFFER_OFFSET) << 11;
        v15 = &this->m_storeBuffers[0][v14];
        if ( (Online_Store *)((char *)this + v14) == (Online_Store *)-24968i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 390, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
          __debugbreak();
        bdObjectStoreObject::bdObjectStoreObject(&object, v15, 0x800ui64);
        bdObjectStoreErrorWrappedObject::reset(&this->m_responseObjects[2][v26.fileEntryCount]);
        bdObjectStoreErrorWrappedObject::setObject(&this->m_responseObjects[2][v26.fileEntryCount++], &object);
        ++this->m_responseCount[2];
        bdMemory::deallocate(object.m_metadata.m_tags.m_data);
        object.m_metadata.m_tags.m_data = NULL;
        *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
        bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
        ++v9;
        v10 += 64;
      }
      while ( v9 < v4 );
      getPublisherStorageResponse = v26.getPublisherStorageResponse;
    }
    bdObjectStoreGetPublisherObjectsResponse::setObjectList(getPublisherStorageResponse, this->m_responseObjects[2], v26.fileEntryCount);
    v16 = OnlineStorage::GetInstance();
    if ( !OnlineStorage::EnqueueTask(v16, &v26) )
    {
      v17 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v17);
      memset_0(Online_Store::s_instance.m_storeBuffers, 0, sizeof(Online_Store::s_instance.m_storeBuffers));
      m_responseCount = Online_Store::s_instance.m_responseCount;
      m_responseObjects = Online_Store::s_instance.m_responseObjects;
      v20 = 3i64;
      do
      {
        *m_responseCount = 0;
        v21 = 10i64;
        do
        {
          bdObjectStoreErrorWrappedObject::reset((bdObjectStoreErrorWrappedObject *)m_responseObjects);
          m_responseObjects = (bdObjectStoreErrorWrappedObject (*)[10])((char *)m_responseObjects + 3528);
          --v21;
        }
        while ( v21 );
        ++m_responseCount;
        --v20;
      }
      while ( v20 );
      *(_WORD *)&Online_Store::s_instance.m_gettingStore = 0;
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      Online_Store::s_instance.m_fetchAttemptCount = 0;
      *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
      Online_Store::s_instance.m_hasRecommendations = 0;
      Online_Store::s_instance.m_canGetStore = 1;
    }
    TaskCreateRequest::~TaskCreateRequest(&v26.taskCreateRequest);
  }
  else
  {
LABEL_28:
    *(_WORD *)&Online_Store::s_instance.m_gettingStore = 256;
    Online_Store::s_instance.m_canGetStore = 0;
    v22 = Sys_Milliseconds();
    Online_Backoff::ReportSuccess(&Online_Store::s_instance.m_storeConfigBackoff, v22);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v24);
}

/*
==============
Online_Store::GetResponseObjectByFileName
==============
*/
__int64 Online_Store::GetResponseObjectByFileName(Online_Store *this, OnlineStoreResponseBuffer buffer, const char *filename, bdObjectStoreErrorWrappedObject *response)
{
  __int64 v6; 
  unsigned int v7; 
  unsigned __int8 v8; 
  unsigned int v9; 
  __int64 v10; 
  bdObjectStoreErrorWrappedObject *v11; 
  bdObjectStoreObject *Object; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  __int64 v16; 
  const char *v17; 
  char v18; 
  char v19; 
  __int64 v22; 
  Online_Store v23; 

  v6 = buffer;
  Online_Store::Online_Store(&v23, &Online_Store::s_instance);
  v7 = v23.m_responseCount[v6];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 698, ASSERT_TYPE_ASSERT, "(responseCount > 0)", (const char *)&queryFormat, "responseCount > 0") )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = 10 * v6;
    v22 = 10 * v6;
    do
    {
      v11 = &v23.m_responseObjects[0][v10 + (int)v9];
      Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(v11);
      Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(Object);
      ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
      ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
      v16 = 0x7FFFFFFFi64;
      if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !ObjectName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v17 = (const char *)(filename - ObjectName);
      do
      {
        v18 = ObjectName[(_QWORD)v17];
        v19 = *ObjectName++;
        if ( !v16-- )
          break;
        if ( v18 != v19 )
          goto LABEL_17;
      }
      while ( v18 );
      bdObjectStoreMetadata::operator=(&response->m_object.m_metadata, &v11->m_object.m_metadata);
      response->m_object.m_contentPtr = v11->m_object.m_contentPtr;
      response->m_object.m_contentSize = v11->m_object.m_contentSize;
      response->m_object.m_downloadInterceptor = v11->m_object.m_downloadInterceptor;
      response->m_error = v11->m_error;
      response->m_hasError = v11->m_hasError;
      response->m_modified = v11->m_modified;
      response->m_downloadStatus = v11->m_downloadStatus;
      v8 = 1;
LABEL_17:
      ++v9;
      v10 = v22;
    }
    while ( v9 < v7 );
  }
  Online_Store::~Online_Store(&v23);
  return v8;
}

/*
==============
Online_Store::HandleRecommendationsFetchComplete
==============
*/
void Online_Store::HandleRecommendationsFetchComplete(Online_Store *this, GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int m_controllerIndex; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v8; 
  int m_fetchAttemptCount; 
  int v10; 
  int v11; 

  m_controllerIndex = pTask->m_controllerIndex;
  Com_Printf(25, "HandleFetchTaskComplete( controller: %d ) - taskState %d\n", m_controllerIndex, (unsigned int)taskState);
  m_ptr = this->m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v8 = this->m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr;
    if ( v8 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v8->~bdReferencable)(v8, 1i64);
  }
  this->m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr = NULL;
  this->m_gettingRecommendations = 0;
  if ( taskState )
  {
    m_fetchAttemptCount = this->m_fetchAttemptCount;
    if ( m_fetchAttemptCount < 10 )
    {
      this->m_fetchAttemptCount = m_fetchAttemptCount + 1;
      v10 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_recommendationsBackoff, v10);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      *(_WORD *)&Online_Store::s_instance.m_gettingRecommendations = 0;
      Online_Store::s_instance.m_canGetRecommendations = 1;
      return;
    }
    this->m_hasRecommendations = 1;
  }
  else
  {
    Online_Store::ParseRecommendations(this, m_controllerIndex, pTask, TASKSTATE_SUCCESS);
    *(_WORD *)&this->m_gettingRecommendations = 256;
  }
  this->m_canGetRecommendations = 0;
  v11 = Sys_Milliseconds();
  Online_Backoff::ReportSuccess(&this->m_recommendationsBackoff, v11);
}

/*
==============
OnFetchRecommendationsComplete
==============
*/
void OnFetchRecommendationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int m_controllerIndex; 
  int v5; 
  int v6; 

  m_controllerIndex = pTask->m_controllerIndex;
  Com_Printf(25, "HandleFetchTaskComplete( controller: %d ) - taskState %d\n", m_controllerIndex, (unsigned int)taskState);
  if ( Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr->~bdReferencable)(Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr, 1i64);
  }
  Online_Store::s_instance.m_recommendationRequestTask.m_remoteDemonwareTask.m_ptr = NULL;
  Online_Store::s_instance.m_gettingRecommendations = 0;
  if ( taskState )
  {
    if ( Online_Store::s_instance.m_fetchAttemptCount < 10 )
    {
      ++Online_Store::s_instance.m_fetchAttemptCount;
      v5 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_recommendationsBackoff, v5);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      *(_WORD *)&Online_Store::s_instance.m_gettingRecommendations = 0;
      Online_Store::s_instance.m_canGetRecommendations = 1;
      return;
    }
    Online_Store::s_instance.m_hasRecommendations = 1;
  }
  else
  {
    Online_Store::ParseRecommendations(&Online_Store::s_instance, m_controllerIndex, pTask, TASKSTATE_SUCCESS);
    *(_WORD *)&Online_Store::s_instance.m_gettingRecommendations = 256;
  }
  Online_Store::s_instance.m_canGetRecommendations = 0;
  v6 = Sys_Milliseconds();
  Online_Backoff::ReportSuccess(&Online_Store::s_instance.m_recommendationsBackoff, v6);
}

/*
==============
OnStoreCategoriesDownloadComplete
==============
*/
void OnStoreCategoriesDownloadComplete(OnlineStorageTask *storageTask)
{
  int v2; 
  int ObjectListSize; 
  int v4; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  int v6; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 193, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 194, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    ObjectListSize = bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(storageTask->getPublisherStorageResponse);
    v4 = 0;
    if ( ObjectListSize <= 0 )
    {
LABEL_12:
      Online_Store::GetLayoutJSON(&Online_Store::s_instance, ObjectListSize);
      Com_Printf(25, "Store category download successful.\n");
    }
    else
    {
      while ( 1 )
      {
        ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
        if ( bdObjectStoreErrorWrappedObject::hasError(&ObjectList[v4]) )
          break;
        if ( ++v4 >= ObjectListSize )
          goto LABEL_12;
      }
      Com_Printf(25, "Store category download failed.\n");
      v6 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v6);
      Online_Store::ResetStoreConfig(&Online_Store::s_instance);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      Online_Store::s_instance.m_fetchAttemptCount = 0;
      *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
      Online_Store::s_instance.m_hasRecommendations = 0;
      Online_Store::s_instance.m_canGetStore = 1;
    }
  }
  else
  {
    Com_Printf(25, "Store category download failed.\n");
    v2 = Sys_Milliseconds();
    Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v2);
    Online_Store::ResetStoreConfig(&Online_Store::s_instance);
    memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
    Online_Store::s_instance.m_canGetStore = 1;
    Online_Store::s_instance.m_fetchAttemptCount = 0;
    *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
    Online_Store::s_instance.m_hasRecommendations = 0;
  }
  if ( !storageTask->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 227, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageResponse") )
    __debugbreak();
  storageTask->getPublisherStorageResponse = NULL;
}

/*
==============
OnStoreDownloadComplete
==============
*/
void OnStoreDownloadComplete(OnlineStorageTask *storageTask)
{
  int v2; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  bdObjectStoreErrorWrappedObject *v4; 
  unsigned int v5; 
  bdObjectStoreErrorWrappedObject *v6; 
  bdObjectStoreObject *Object; 
  bdObjectStoreMetadata *Metadata; 
  bdObjectStoreObjectID *ObjectID; 
  const char *ObjectName; 
  int v11; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 415, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 416, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
    if ( bdObjectStoreErrorWrappedObject::hasError(ObjectList) )
    {
      v4 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
      v5 = *bdObjectStoreErrorWrappedObject::getError(v4);
      v6 = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
      Object = bdObjectStoreErrorWrappedObject::getObject(v6);
      Metadata = bdObjectStoreObject::getMetadata(Object);
      ObjectID = (bdObjectStoreObjectID *)bdObjectStoreMetadata::getObjectID(Metadata);
      ObjectName = bdObjectStoreObjectID::getObjectName(ObjectID);
      Com_PrintError(25, "Store download succeeded, but file %s had an error (%d).\n", ObjectName, v5);
      v11 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v11);
      Online_Store::ResetStoreConfig(&Online_Store::s_instance);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      Online_Store::s_instance.m_fetchAttemptCount = 0;
      *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
      Online_Store::s_instance.m_hasRecommendations = 0;
      Online_Store::s_instance.m_canGetStore = 1;
    }
    else
    {
      Online_Store::GetCategoriesJSON(&Online_Store::s_instance);
      Com_Printf(25, "Store download successful.\n");
    }
  }
  else
  {
    Com_Printf(25, "Store download failed.\n");
    v2 = Sys_Milliseconds();
    Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v2);
    Online_Store::ResetStoreConfig(&Online_Store::s_instance);
    memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
    Online_Store::s_instance.m_fetchAttemptCount = 0;
    *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
    Online_Store::s_instance.m_hasRecommendations = 0;
    Online_Store::s_instance.m_canGetStore = 1;
  }
  if ( !storageTask->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 437, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageResponse") )
    __debugbreak();
  storageTask->getPublisherStorageResponse = NULL;
}

/*
==============
OnStoreLayoutDownloadComplete
==============
*/
void OnStoreLayoutDownloadComplete(OnlineStorageTask *storageTask)
{
  int v2; 
  int ObjectListSize; 
  int v4; 
  bdObjectStoreErrorWrappedObject *ObjectList; 
  int v6; 
  int v7; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 304, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 305, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    ObjectListSize = bdObjectStoreGetPublisherObjectsResponse::getObjectListSize(storageTask->getPublisherStorageResponse);
    v4 = 0;
    if ( ObjectListSize <= 0 )
    {
LABEL_12:
      Com_Printf(25, "Store layout download successful.\n");
      *(_WORD *)&Online_Store::s_instance.m_gettingStore = 256;
      Online_Store::s_instance.m_canGetStore = 0;
      v6 = Sys_Milliseconds();
      Online_Backoff::ReportSuccess(&Online_Store::s_instance.m_storeConfigBackoff, v6);
    }
    else
    {
      while ( 1 )
      {
        ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
        if ( bdObjectStoreErrorWrappedObject::hasError(&ObjectList[v4]) )
          break;
        if ( ++v4 >= ObjectListSize )
          goto LABEL_12;
      }
      Com_Printf(25, "Store layout download failed.\n");
      v7 = Sys_Milliseconds();
      Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v7);
      Online_Store::ResetStoreConfig(&Online_Store::s_instance);
      memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
      Online_Store::s_instance.m_fetchAttemptCount = 0;
      *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
      Online_Store::s_instance.m_hasRecommendations = 0;
      Online_Store::s_instance.m_canGetStore = 1;
    }
  }
  else
  {
    Com_Printf(25, "Store layout download failed.\n");
    v2 = Sys_Milliseconds();
    Online_Backoff::ReportFailure(&Online_Store::s_instance.m_storeConfigBackoff, v2);
    Online_Store::ResetStoreConfig(&Online_Store::s_instance);
    memset_0(Online_Store::s_instance.m_recommendationStrings, 0, 0x8Cui64);
    Online_Store::s_instance.m_canGetStore = 1;
    Online_Store::s_instance.m_fetchAttemptCount = 0;
    *(_WORD *)&Online_Store::s_instance.m_canGetRecommendations = 0;
    Online_Store::s_instance.m_hasRecommendations = 0;
  }
  if ( !storageTask->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_store.cpp", 338, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageResponse") )
    __debugbreak();
  storageTask->getPublisherStorageResponse = NULL;
}

/*
==============
Online_Store::ParseRecommendations
==============
*/
void Online_Store::ParseRecommendations(Online_Store *this, const int controllerIndex, GenericTask *pTask, __int64 taskState)
{
  __int64 v4; 
  unsigned int v6; 
  __int64 v7; 
  _OWORD *v8; 
  char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int m_count; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer value; 
  __int64 v20; 
  void **v21; 
  int *v22; 
  bdStructBufferSerializable v23[128]; 
  int v24; 
  char buffer[2048]; 
  int v26; 
  char v27; 
  int v28; 
  __m256i v29; 
  __m256i v30; 
  char v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  bdReferencable v35; 

  v20 = -2i64;
  v4 = controllerIndex;
  v6 = 0;
  if ( *((_DWORD *)&this->m_recommendationsResponse.__vftable + 7) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v18);
    bdHandleAssert(*((_DWORD *)&this->m_recommendationsResponse.__vftable + 7) != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsMessage>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed", 0);
    v7 = *((_QWORD *)&this->m_recommendationsResponse.__vftable + 2);
    v22 = (int *)&bdCommsMessage::`vbtable';
    bdReferencable::bdReferencable(&v35, (const bdReferencable *)(*(int *)(*(_QWORD *)(v7 + 8) + 4i64) + v7 + 8));
    bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)&v21, (const bdStructBufferSerializable *)v7);
    v21 = &bdCommsMessage::`vftable'{for `bdStructBufferSerializable'};
    *(int **)((char *)&v22 + v22[1]) = (int *)&bdCommsMessage::`vftable'{for `bdReferencable'};
    v23[0] = *(bdStructBufferSerializable *)(v7 + 16);
    *((_DWORD *)&v23[0].__vftable + 6) = *(_DWORD *)(v7 + 40);
    memcpy_0((char *)&v23[0].__vftable + 28, (const void *)(v7 + 44), 0x1000ui64);
    v24 = *(_DWORD *)(v7 + 4140);
    memcpy_0(buffer, (const void *)(v7 + 4144), sizeof(buffer));
    v26 = *(_DWORD *)(v7 + 6192);
    v8 = (_OWORD *)(v7 + 6196);
    v9 = &v27;
    v10 = 8i64;
    do
    {
      *(_OWORD *)v9 = *v8;
      *((_OWORD *)v9 + 1) = v8[1];
      *((_OWORD *)v9 + 2) = v8[2];
      *((_OWORD *)v9 + 3) = v8[3];
      *((_OWORD *)v9 + 4) = v8[4];
      *((_OWORD *)v9 + 5) = v8[5];
      *((_OWORD *)v9 + 6) = v8[6];
      v9 += 128;
      *((_OWORD *)v9 - 1) = v8[7];
      v8 += 8;
      --v10;
    }
    while ( v10 );
    v28 = *(_DWORD *)(v7 + 7220);
    v29 = *(__m256i *)(v7 + 7224);
    v30 = *(__m256i *)(v7 + 7256);
    v31 = *(_BYTE *)(v7 + 7288);
    v32 = *(_DWORD *)(v7 + 7292);
    v33 = *(_QWORD *)(v7 + 7296);
    v34 = *(_DWORD *)(v7 + 7304);
    bdJSONDeserializer::parse(&v18, buffer);
    if ( bdJSONDeserializer::hasKey(&v18, "productList") )
    {
      v11 = v4;
      bdJSONDeserializer::getString(&v18, "productList", this->m_recommendationStrings[v4], 0x46u);
    }
    else
    {
      Com_PrintError(25, "Just For You Recommendations Message Error - metadata did not include a productList\n");
      v11 = v4;
    }
    if ( bdJSONDeserializer::hasKey(&v18, "lifespans") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&value);
      bdJSONDeserializer::bdJSONDeserializer(&v17);
      bdJSONDeserializer::getArray(&v18, "lifespans", &value);
      m_count = value.m_count;
      this->m_product_lifespan_counts[v11] = value.m_count;
      if ( m_count )
      {
        v13 = 0i64;
        do
        {
          if ( bdJSONDeserializer::getElementByIndex(&value, v6, &v17) )
          {
            if ( bdJSONDeserializer::hasKey(&v17, "productID") )
            {
              v14 = v11;
              v15 = v6;
              bdJSONDeserializer::getString(&v17, "productID", this->m_product_lifespans[v11][v6].m_productID, 0xAu);
            }
            else
            {
              Com_PrintError(25, "Just For You Recommendations Message Error - No Product ID in Lifespan\n");
              v14 = v11;
              v15 = v6;
            }
            v16 = v14 * 10 + v15;
            if ( bdJSONDeserializer::hasKey(&v17, "saleStart") )
              bdJSONDeserializer::getUInt32(&v17, "saleStart", &this->m_product_lifespans[0][v16].sale_start);
            else
              this->m_product_lifespans[v14][v13].sale_start = 1574454803;
            if ( bdJSONDeserializer::hasKey(&v17, "saleEnd") )
              bdJSONDeserializer::getUInt32(&v17, "saleEnd", &this->m_product_lifespans[0][v16].sale_end);
            else
              this->m_product_lifespans[v14][v13].sale_end = 1924992000;
          }
          ++v6;
          ++v13;
        }
        while ( v6 < m_count );
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
      bdJSONDeserializer::~bdJSONDeserializer(&value);
    }
    else
    {
      Com_PrintError(25, "Just For You Recommendations Message Error - metadata did not include a productList\n");
    }
    bdStructBufferSerializable::~bdStructBufferSerializable(v23);
    bdReferencable::~bdReferencable(&v35);
    bdJSONDeserializer::~bdJSONDeserializer(&v18);
  }
  else
  {
    Com_PrintError(25, "Just For You Recommendations Message Error - No messages found \n", pTask, taskState);
  }
}

/*
==============
Online_Store::Reset
==============
*/
void Online_Store::Reset(Online_Store *this)
{
  Online_Store::ResetStoreConfig(this);
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  this->m_fetchAttemptCount = 0;
  *(_WORD *)&this->m_canGetRecommendations = 0;
  this->m_hasRecommendations = 0;
}

/*
==============
Online_Store::ResetRecommendations
==============
*/
void Online_Store::ResetRecommendations(Online_Store *this, bool resetFetchCounter)
{
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  if ( resetFetchCounter )
    this->m_fetchAttemptCount = 0;
  *(_WORD *)&this->m_canGetRecommendations = 0;
  this->m_hasRecommendations = 0;
}

/*
==============
Online_Store::ResetStoreConfig
==============
*/
void Online_Store::ResetStoreConfig(Online_Store *this)
{
  int *m_responseCount; 
  bdObjectStoreErrorWrappedObject (*m_responseObjects)[10]; 
  __int64 v4; 
  __int64 v5; 

  memset_0(this->m_storeBuffers, 0, sizeof(this->m_storeBuffers));
  m_responseCount = this->m_responseCount;
  m_responseObjects = this->m_responseObjects;
  v4 = 3i64;
  do
  {
    *m_responseCount = 0;
    v5 = 10i64;
    do
    {
      bdObjectStoreErrorWrappedObject::reset((bdObjectStoreErrorWrappedObject *)m_responseObjects);
      m_responseObjects = (bdObjectStoreErrorWrappedObject (*)[10])((char *)m_responseObjects + 3528);
      --v5;
    }
    while ( v5 );
    ++m_responseCount;
    --v4;
  }
  while ( v4 );
  this->m_canGetStore = 0;
  *(_WORD *)&this->m_gettingStore = 0;
}

/*
==============
Online_Store::RetryRecommendationFetch
==============
*/
void Online_Store::RetryRecommendationFetch(Online_Store *this)
{
  int v2; 

  v2 = Sys_Milliseconds();
  Online_Backoff::ReportFailure(&this->m_recommendationsBackoff, v2);
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  *(_WORD *)&this->m_gettingRecommendations = 0;
  this->m_canGetRecommendations = 1;
}

/*
==============
Online_Store::RetryStoreConfigDownload
==============
*/
void Online_Store::RetryStoreConfigDownload(Online_Store *this)
{
  int v2; 

  v2 = Sys_Milliseconds();
  Online_Backoff::ReportFailure(&this->m_storeConfigBackoff, v2);
  Online_Store::ResetStoreConfig(this);
  memset_0(this->m_recommendationStrings, 0, 0x8Cui64);
  this->m_fetchAttemptCount = 0;
  *(_WORD *)&this->m_canGetRecommendations = 0;
  this->m_hasRecommendations = 0;
  this->m_canGetStore = 1;
}

/*
==============
Online_Store::SetHasConfig
==============
*/
void Online_Store::SetHasConfig(Online_Store *this)
{
  int v2; 

  *(_WORD *)&this->m_gettingStore = 256;
  this->m_canGetStore = 0;
  v2 = Sys_Milliseconds();
  Online_Backoff::ReportSuccess(&this->m_storeConfigBackoff, v2);
}

/*
==============
Online_Store::SetHasRecommendations
==============
*/
void Online_Store::SetHasRecommendations(Online_Store *this)
{
  int v2; 

  *(_WORD *)&this->m_gettingRecommendations = 256;
  this->m_canGetRecommendations = 0;
  v2 = Sys_Milliseconds();
  Online_Backoff::ReportSuccess(&this->m_recommendationsBackoff, v2);
}

