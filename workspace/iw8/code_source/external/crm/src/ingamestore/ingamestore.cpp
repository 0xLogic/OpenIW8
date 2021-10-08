/*
==============
InGameStore_Init
==============
*/

void __fastcall InGameStore_Init(const InGameStoreConfig *const config)
{
  ?InGameStore_Init@@YAXQEBUInGameStoreConfig@@@Z(config);
}

/*
==============
InGameStore_GetCatalog
==============
*/

InGameStoreCatalog *__fastcall InGameStore_GetCatalog(const int controllerIndex)
{
  return ?InGameStore_GetCatalog@@YAPEAUInGameStoreCatalog@@H@Z(controllerIndex);
}

/*
==============
InGameStore_Frame
==============
*/

void InGameStore_Frame(void)
{
  ?InGameStore_Frame@@YAXXZ();
}

/*
==============
InGameStore_GetCatalogStatus
==============
*/

InGameStoreCatalogStatus __fastcall InGameStore_GetCatalogStatus(const int controllerIndex)
{
  return ?InGameStore_GetCatalogStatus@@YA?AW4InGameStoreCatalogStatus@@H@Z(controllerIndex);
}

/*
==============
InGameStore_IsInitialized
==============
*/

bool __fastcall InGameStore_IsInitialized()
{
  return ?InGameStore_IsInitialized@@YA_NXZ();
}

/*
==============
InGameStore_Shutdown
==============
*/

void InGameStore_Shutdown(void)
{
  ?InGameStore_Shutdown@@YAXXZ();
}

/*
==============
InGameStore_EnumerateContent
==============
*/

bool __fastcall InGameStore_EnumerateContent()
{
  return ?InGameStore_EnumerateContent@@YA_NXZ();
}

/*
==============
InGameStore_FetchCatalog
==============
*/

bool __fastcall InGameStore_FetchCatalog(const int controllerIndex, bool showEmptyStoreDialog, bool useCache)
{
  return ?InGameStore_FetchCatalog@@YA_NH_N0@Z(controllerIndex, showEmptyStoreDialog, useCache);
}

/*
==============
InGameStore_SelectProduct
==============
*/

bool __fastcall InGameStore_SelectProduct(const int controllerIndex, const char *const productId, InGameStorePurchaseType purchaseType)
{
  return ?InGameStore_SelectProduct@@YA_NHQEBDW4InGameStorePurchaseType@@@Z(controllerIndex, productId, purchaseType);
}

/*
==============
InGameStore_DeleteContent
==============
*/

bool __fastcall InGameStore_DeleteContent(const char *const productId)
{
  return ?InGameStore_DeleteContent@@YA_NQEBD@Z(productId);
}

/*
==============
InGameStore_GetProduct
==============
*/

const InGameStoreProduct *__fastcall InGameStore_GetProduct(const int controllerIndex, const char *const productId)
{
  return ?InGameStore_GetProduct@@YAPEBUInGameStoreProduct@@HQEBD@Z(controllerIndex, productId);
}

/*
==============
InGameStore_CoFetchBalances
==============
*/
bool InGameStore_CoFetchBalances(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 
  bdMarketplace *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  bool v7; 
  bool v8; 
  const char *v9; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> remoteTask; 
  bdReference<bdRemoteTask> *p_remoteTask; 

  UserContext = InGameStore_GetUserContext(controllerIndex);
  if ( !UserContext )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_BALANCES, "no_user");
  v4 = InGameStore_AcquireMarketplace(controllerIndex);
  if ( !v4 )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_BALANCES, "no_marketplace");
  UserContext->balanceCount = 0;
  bdMarketplace::getBalanceV2(v4, &result, UserContext->balances, 0x14u);
  InGameStore_ReleaseMarketplace(controllerIndex);
  p_remoteTask = &remoteTask;
  remoteTask.m_ptr = result.m_ptr;
  if ( result.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
  v5 = Co_Self();
  if ( InGameStore_StartRemoteTask(controllerIndex, v5, INGAMESTORE_TASK_GET_BALANCES, (bdReference<bdRemoteTask>)&remoteTask) && (v6 = Co_Yield(1ui64), v7 = v6 != 0, v6) )
  {
    UserContext->balanceCount = bdRemoteTask::getNumResults(result.m_ptr);
    v9 = "canceled";
    if ( v7 )
      v9 = "completed";
    InGameStore_PrintInfo("Controller %d: Fetch Balances %s\n", (unsigned int)controllerIndex, v9);
    v8 = 1;
  }
  else
  {
    v8 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_BALANCES, "task_failed");
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v8;
}

/*
==============
InGameStore_CoFetchCatalog
==============
*/
_BOOL8 InGameStore_CoFetchCatalog(const int controllerIndex, bool showEmptyStoreDialog)
{
  __int64 v3; 
  bool v4; 
  InGameStoreUserContext *UserContext; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  bool v10; 
  unsigned __int64 *v11; 
  __int64 v12; 
  int v13; 
  bool *p_disabled; 
  unsigned __int64 handle; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19[2]; 
  unsigned __int64 v20[2]; 
  unsigned __int64 v21; 
  char error[256]; 

  v19[1] = -2i64;
  v3 = controllerIndex;
  InGameStore_FenceBegin(controllerIndex, INGAMESTORE_FENCE_FETCH_CATALOG);
  if ( InGameStore_GetState(v3) == INGAMESTORE_STATE_IDLE )
  {
    InGameStore_SetState(v3, INGAMESTORE_STATE_FETCHING_CONFIG);
    UserContext = InGameStore_GetUserContext(v3);
    if ( !UserContext )
    {
      v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "no_user");
LABEL_31:
      InGameStore_SetState(v3, INGAMESTORE_STATE_IDLE);
      goto LABEL_32;
    }
    Co_Run<32768,bool (*)(int),int>(&handle, (bool (__fastcall *)(int))InGameStore_CoFetchCommsMessages, v3);
    _RDI = &UserContext->configJson;
    if ( Json::IsUndefined(&UserContext->configJson) || InGameStore_GetVersion() > UserContext->configVersion )
    {
      Co_Run<32768,bool (*)(int),int>(v20, (bool (__fastcall *)(int))InGameStore_CoFetchObjectStoreConfig, v3);
      if ( !Co_Await(v20[0]) )
      {
        memset_0(&UserContext->catalog, 0, sizeof(UserContext->catalog));
        UserContext->haveCatalog = 0;
        v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "object_store_failed");
        goto LABEL_31;
      }
      if ( !Json::Parse(&UserContext->configJson, UserContext->configBuffer, error, 256) )
      {
        InGameStore_PrintError("%s\n", error);
        v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "parse_failed");
        goto LABEL_31;
      }
      UserContext->configVersion = InGameStore_GetVersion();
    }
    Co_Await(handle);
    UserContext->haveCatalog = 0;
    memset_0(&UserContext->catalog, 0, sizeof(UserContext->catalog));
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+198h+var_148], xmm0
    }
    InGameStore_ParseCatalog(&UserContext->catalog, (Json *)v20, &UserContext->comms[v3]);
    Co_Run<32768,bool (*)(int),int>(v19, (bool (__fastcall *)(int))InGameStore_CoPlatformFetchProducts, v3);
    Co_Run<32768,bool (*)(int),int>(&v18, (bool (__fastcall *)(int))InGameStore_CoFetchSkus, v3);
    Co_Run<32768,bool (*)(int),int>(&v17, (bool (__fastcall *)(int))InGameStore_CoFetchBalances, v3);
    v8 = v17;
    v9 = v18;
    v20[0] = Co_Await(v19[0]);
    v20[1] = Co_Await(v9);
    v21 = Co_Await(v8);
    v10 = 1;
    v11 = v20;
    v12 = 3i64;
    do
    {
      v10 = v10 && *v11++;
      --v12;
    }
    while ( v12 );
    if ( v10 )
    {
      v13 = 0;
      if ( UserContext->catalog.productCount > 0 )
      {
        p_disabled = &UserContext->catalog.products[0].disabled;
        do
        {
          if ( p_disabled[8] )
            *p_disabled = 0;
          ++v13;
          p_disabled += 4216;
        }
        while ( v13 < UserContext->catalog.productCount );
      }
      InGameStore_PrintProducts(v3);
      InGameStore_RemoveEmptyCategories(&UserContext->catalog);
      if ( UserContext->catalog.categoryCount )
      {
        UserContext->haveCatalog = 1;
        InGameStore_CoPlatformEnumerateContent();
        v4 = 1;
      }
      else
      {
        memset_0(&UserContext->catalog, 0, sizeof(UserContext->catalog));
        UserContext->haveCatalog = 0;
        if ( !showEmptyStoreDialog || InGameStore_CoPlatformShowEmptyStoreDialog(v3) )
          v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_EMPTY_STORE, "empty_store");
        else
          v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "empty_store_dialog");
      }
    }
    else
    {
      memset_0(&UserContext->catalog, 0, sizeof(UserContext->catalog));
      UserContext->haveCatalog = 0;
      v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "tasks_failed");
    }
    goto LABEL_31;
  }
  v4 = InGameStore_Error(v3, INGAMESTORE_ERROR_FETCH_CATALOG, "busy");
LABEL_32:
  InGameStore_FenceEnd(v3, INGAMESTORE_FENCE_FETCH_CATALOG);
  InGameStore_ClearError(v3);
  return v4;
}

/*
==============
InGameStore_CoFetchCommsMessages
==============
*/
char InGameStore_CoFetchCommsMessages(const int controllerIndex)
{
  __int64 v1; 
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v3; 
  char *v5; 
  bdMarketingComms *v6; 
  const InGameStoreConfig *Config; 
  unsigned int m_capacity; 
  bdCommsLocationCount *v9; 
  __int64 m_size; 
  int v11; 
  bdCommsLocationCount *v12; 
  __int64 v13; 
  bdCommsGetMessagesResponse *p_fetchMessagesResponse; 
  unsigned __int64 v19; 
  char v20; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> remoteTask; 
  bdCommsLocationCount v23; 
  __int64 v24; 
  bdReference<bdRemoteTask> *p_remoteTask; 
  bdCommsGetMessagesRequest request; 

  v24 = -2i64;
  v1 = controllerIndex;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  v3 = UserContext;
  if ( !UserContext )
    return 0;
  v5 = (char *)UserContext + 1440 * v1;
  if ( v5[259700] && *((_QWORD *)v5 + 32463) == InGameStore_GetXuid(v1) )
    return 1;
  v6 = InGameStore_AcquireMarketingComms(v1);
  if ( !v6 )
    return 0;
  bdCommsGetMessagesRequest::bdCommsGetMessagesRequest(&request);
  bdCommsLocationCount::bdCommsLocationCount(&v23);
  Config = InGameStore_GetConfig();
  Core_strcpy(request.m_languageCode, 0x14ui64, Config->languageCode);
  m_capacity = request.m_locationCounts.m_capacity;
  if ( !request.m_locationCounts.m_capacity )
  {
    m_capacity = 1;
    v9 = (bdCommsLocationCount *)bdMemory::allocate(0x28ui64);
    if ( request.m_locationCounts.m_size )
      memcpy_0(v9, request.m_locationCounts.m_data, 40i64 * request.m_locationCounts.m_size);
    bdMemory::deallocate(request.m_locationCounts.m_data);
    request.m_locationCounts.m_data = v9;
    request.m_locationCounts.m_capacity = 1;
  }
  *((_DWORD *)&v23.__vftable + 4) = 3;
  *((_DWORD *)&v23.__vftable + 5) = 10;
  m_size = request.m_locationCounts.m_size;
  if ( request.m_locationCounts.m_size == m_capacity )
  {
    v11 = m_capacity;
    if ( !m_capacity )
      v11 = 1;
    v12 = NULL;
    v13 = v11 + m_capacity;
    if ( (_DWORD)v13 )
    {
      v12 = (bdCommsLocationCount *)bdMemory::allocate(40 * v13);
      if ( request.m_locationCounts.m_size )
        memcpy_0(v12, request.m_locationCounts.m_data, 40i64 * request.m_locationCounts.m_size);
    }
    bdMemory::deallocate(request.m_locationCounts.m_data);
    request.m_locationCounts.m_data = v12;
    request.m_locationCounts.m_capacity = v13;
    m_size = request.m_locationCounts.m_size;
  }
  _RCX = 5 * m_size;
  _RAX = request.m_locationCounts.m_data;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+var_D0.baseclass_0.__vftable]
    vmovups ymmword ptr [rax+rcx*8], ymm0
    vmovsd  xmm1, qword ptr [rbp+57h+var_D0.gap20]
    vmovsd  qword ptr [rax+rcx*8+20h], xmm1
  }
  ++request.m_locationCounts.m_size;
  p_fetchMessagesResponse = &v3->fetchMessagesResponse;
  bdMarketingComms::getMessages(v6, &result, &request, p_fetchMessagesResponse);
  InGameStore_ReleaseMarketingComms(v1);
  p_remoteTask = &remoteTask;
  remoteTask.m_ptr = result.m_ptr;
  if ( result.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
  v19 = Co_Self();
  if ( InGameStore_StartRemoteTask(v1, v19, INGAMESTORE_TASK_FETCH_MESSAGES, (bdReference<bdRemoteTask>)&remoteTask) && Co_Yield(1ui64) )
  {
    InGameStore_ParseCommsCategories(p_fetchMessagesResponse, (InGameStoreComms *)(v5 + 258272));
    bdCommsGetMessagesResponse::reset(p_fetchMessagesResponse);
    v5[259700] = 1;
    *((_QWORD *)v5 + 32463) = InGameStore_GetXuid(v1);
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v23.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&v23.__vftable + 3));
  bdMemory::deallocate(request.m_locationCounts.m_data);
  request.m_locationCounts.m_data = NULL;
  *(_QWORD *)&request.m_locationCounts.m_capacity = 0i64;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gap48);
  return v20;
}

/*
==============
InGameStore_CoFetchObjectStoreConfig
==============
*/
bool InGameStore_CoFetchObjectStoreConfig(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 
  bdObjectStore *v4; 
  const InGameStoreConfig *Config; 
  const InGameStoreConfig *v6; 
  const InGameStoreConfig *v7; 
  const InGameStoreConfig *v8; 
  unsigned __int64 v9; 
  bool v10; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> remoteTask; 
  __int64 v13; 
  bdReference<bdRemoteTask> *p_remoteTask; 
  bdObjectStoreGetPublisherObjectRequest request; 
  bdObjectStoreObjectID objectID; 
  char dest[128]; 

  v13 = -2i64;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  if ( !UserContext )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_OBJECT_STORE_CONFIG, "no_user");
  v4 = InGameStore_AcquireObjectStore(controllerIndex);
  if ( !v4 )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_OBJECT_STORE_CONFIG, "no_object_store");
  Config = InGameStore_GetConfig();
  Com_sprintf<128>((char (*)[128])dest, "ingamestore_xb3_%s.json", Config->languageCode);
  memset_0(UserContext->configBuffer, 0, sizeof(UserContext->configBuffer));
  v6 = InGameStore_GetConfig();
  bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID, v6->objectStorePublisher, dest, PUBLISHER_OWNER_TYPE);
  v7 = InGameStore_GetConfig();
  v8 = InGameStore_GetConfig();
  bdObjectStoreGetPublisherObjectRequest::bdObjectStoreGetPublisherObjectRequest(&request, v8->objectStoreClient, v7->objectStoreContext, &objectID);
  bdObjectStoreObject::reset(&UserContext->configObject);
  bdObjectStoreObject::init(&UserContext->configObject, (unsigned __int8 *)UserContext->configBuffer, 0x10000ui64);
  bdObjectStoreGetPublisherObjectResponse::reset(&UserContext->fetchConfigResponse);
  bdObjectStoreGetPublisherObjectResponse::setObject(&UserContext->fetchConfigResponse, &UserContext->configObject);
  bdObjectStore::getPublisherObject(v4, &result, &request, &UserContext->fetchConfigResponse);
  InGameStore_ReleaseObjectStore(controllerIndex);
  p_remoteTask = &remoteTask;
  remoteTask.m_ptr = result.m_ptr;
  if ( result.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
  v9 = Co_Self();
  if ( InGameStore_StartRemoteTask(controllerIndex, v9, INGAMESTORE_TASK_FETCH_CONFIG, (bdReference<bdRemoteTask>)&remoteTask) )
  {
    if ( Co_Yield(1ui64) )
      v10 = 1;
    else
      v10 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_OBJECT_STORE_CONFIG, "task_failed");
  }
  else
  {
    v10 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_OBJECT_STORE_CONFIG, "start_task_failed");
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.bdStructBufferSerializable::__vftable + 2));
  bdObjectStoreRequestBase::~bdObjectStoreRequestBase(&request);
  bdReferencable::~bdReferencable((bdReferencable *)request.gapA0);
  return v10;
}

/*
==============
InGameStore_CoFetchSkus
==============
*/
bool InGameStore_CoFetchSkus(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v3; 
  bdMarketplace *v5; 
  unsigned __int8 v6; 
  int v7; 
  bool *p_disabled; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  const char *v11; 
  bool v12; 
  unsigned int i; 
  char *v14; 
  int v15; 
  const char **p_skuId; 
  unsigned __int8 v17; 
  unsigned int *skuIds; 
  __int64 numSkuIds; 
  __int64 v20; 
  __int64 v21; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> remoteTask; 
  __int64 v24; 
  bdReference<bdRemoteTask> *p_remoteTask; 
  unsigned int v26[8]; 

  v24 = -2i64;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  v3 = UserContext;
  if ( !UserContext )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_SKUS, "no_user");
  if ( UserContext->haveSkus )
    return 1;
  v5 = InGameStore_AcquireMarketplace(controllerIndex);
  if ( !v5 )
    return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_SKUS, "no_marketplace");
  v6 = 0;
  v7 = 0;
  if ( v3->catalog.productCount <= 0 )
    goto LABEL_40;
  p_disabled = &v3->catalog.products[0].disabled;
  do
  {
    if ( *(_DWORD *)(p_disabled + 63) == 2 )
    {
      *p_disabled = 1;
      if ( v6 < 8u )
      {
        v26[v6++] = strtoul(*(const char **)(p_disabled + 71), NULL, 0);
      }
      else
      {
        LODWORD(numSkuIds) = 8;
        LODWORD(skuIds) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 584, ASSERT_TYPE_ASSERT, "(unsigned)( skuIdCount ) < (unsigned)( ( sizeof( *array_counter( skuIds ) ) + 0 ) )", "skuIdCount doesn't index skuIds\n\t%i not in [0, %i)", skuIds, numSkuIds) )
          __debugbreak();
      }
    }
    ++v7;
    p_disabled += 4216;
  }
  while ( v7 < v3->catalog.productCount );
  if ( !v6 )
  {
LABEL_40:
    v3->haveSkus = 1;
    InGameStore_ReleaseMarketplace(controllerIndex);
    return 1;
  }
  bdMarketplace::getSkus(v5, &result, v3->getSkusResult, v6, 0, v26, v6);
  InGameStore_ReleaseMarketplace(controllerIndex);
  p_remoteTask = &remoteTask;
  remoteTask.m_ptr = result.m_ptr;
  if ( result.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
  v9 = Co_Self();
  if ( !InGameStore_StartRemoteTask(controllerIndex, v9, INGAMESTORE_TASK_GET_SKUS, (bdReference<bdRemoteTask>)&remoteTask) )
    goto LABEL_21;
  v10 = Co_Yield(1ui64);
  v11 = "canceled";
  if ( v10 )
    v11 = "completed";
  InGameStore_PrintInfo("Controller %d: FetchSkus %s\n", (unsigned int)controllerIndex, v11);
  if ( v10 )
  {
    for ( i = 0; i < bdRemoteTask::getNumResults(result.m_ptr); ++i )
    {
      v14 = (char *)v3 + 2264 * i;
      v15 = 0;
      if ( v3->catalog.productCount > 0 )
      {
        p_skuId = &v3->catalog.products[0].skuId;
        do
        {
          if ( *((_DWORD *)p_skuId - 2) == 2 && strtoul(*p_skuId, NULL, 0) == *((_DWORD *)v14 + 69724) )
          {
            v17 = v14[280544];
            if ( v17 != 1 )
            {
              LODWORD(v21) = 1;
              LODWORD(v20) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 630, ASSERT_TYPE_ASSERT, "( sku->m_numPrices ) == ( 1 )", "%s == %s\n\t%i, %i", "sku->m_numPrices", "1", v20, v21) )
                __debugbreak();
            }
            if ( v14[280544] == 1 )
            {
              *((_BYTE *)p_skuId - 71) = 0;
              *((_BYTE *)p_skuId - 30) = v14[280584];
              Com_sprintf<32>((char (*)[32])((char *)p_skuId - 62), "%u", *((unsigned int *)v14 + 70147));
            }
          }
          ++v15;
          p_skuId += 527;
        }
        while ( v15 < v3->catalog.productCount );
      }
    }
    v3->haveSkus = 1;
    v12 = 1;
  }
  else
  {
LABEL_21:
    v12 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_SKUS, "task_failed");
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
  return v12;
}

/*
==============
InGameStore_CoPurchaseItem
==============
*/
_BOOL8 InGameStore_CoPurchaseItem(const int controllerIndex, const char *const productId)
{
  bool v5; 
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v7; 
  InGameStoreCatalog *p_catalog; 
  InGameStoreUserContext *v9; 
  InGameStoreProduct *Product; 
  InGameStoreProduct *v11; 
  int v12; 
  bdMarketplaceCurrency_vtbl **v13; 
  bdRemoteTask *v14; 
  unsigned int v15; 
  bdMarketplace *v16; 
  unsigned __int64 v17; 
  bdReference<bdRemoteTask> remoteTask; 
  bdReference<bdRemoteTask> result; 
  bdTaskResult v21; 
  bdSerializable v22; 
  __int128 v23; 
  __int64 v24; 
  int v26; 
  unsigned int purchasedQuantities; 
  unsigned int skuIds; 
  int v29; 

  v24 = -2i64;
  v26 = 0;
  InGameStore_FenceBegin(controllerIndex, INGAMESTORE_FENCE_PURCHASE_ITEM);
  LODWORD(v23) = controllerIndex;
  *((_QWORD *)&v23 + 1) = productId;
  __asm
  {
    vmovups xmm0, [rbp+57h+var_70]
    vmovdqa [rbp+57h+var_50], xmm0
  }
  if ( InGameStore_GetState(controllerIndex) )
  {
    v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "busy");
  }
  else
  {
    InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_PURCHASING_ITEM);
    v29 = controllerIndex;
    UserContext = InGameStore_GetUserContext(controllerIndex);
    v7 = UserContext;
    if ( UserContext )
    {
      if ( UserContext->haveCatalog )
      {
        if ( s_initialized_0 )
        {
          v9 = InGameStore_GetUserContext(controllerIndex);
          p_catalog = NULL;
          if ( v9 )
            p_catalog = &v9->catalog;
        }
        else
        {
          p_catalog = NULL;
        }
        Product = InGameStore_FindProduct(p_catalog, productId);
        v11 = Product;
        if ( Product )
        {
          if ( Product->skuType == INGAMESTORE_PRODUCT_SKU_TYPE_DEMONWARE )
          {
            remoteTask.m_ptr = NULL;
            v12 = 0;
            if ( v7->balanceCount > 0 )
            {
              v13 = &v7->balances[0].__vftable + 2;
              while ( 1 )
              {
                *((_QWORD *)&v21.__vftable + 1) = &bdMarketplaceCurrency::`vbtable'{for `bdTaskResult'};
                *((_QWORD *)&v21.__vftable + 3) = &bdMarketplaceCurrency::`vbtable'{for `bdSerializable'};
                bdReferencable::bdReferencable((bdReferencable *)(&v22.__vftable + 1), (const bdReferencable *)((char *)v13 + SHIDWORD((*(v13 - 1))->deserialize) - 8));
                v26 |= 1u;
                bdTaskResult::bdTaskResult(&v21, (const bdTaskResult *)(v13 - 2));
                bdSerializable::bdSerializable((bdSerializable *)(&v21.__vftable + 2), (const bdSerializable *)v13);
                v21.__vftable = (bdTaskResult_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdTaskResult'};
                *((_QWORD *)&v21.__vftable + 2) = &bdMarketplaceCurrency::`vftable'{for `bdSerializable'};
                *(bdTaskResult_vtbl **)((char *)&v21.__vftable + *(int *)(*((_QWORD *)&v21.__vftable + 1) + 4i64) + 8) = (bdTaskResult_vtbl *)&bdMarketplaceCurrency::`vftable'{for `bdReferencable'};
                LOBYTE(v22.__vftable) = *((_BYTE *)v13 + 16);
                v14 = (bdRemoteTask *)*((unsigned int *)v13 + 5);
                HIDWORD(v22.__vftable) = *((_DWORD *)v13 + 5);
                if ( LOBYTE(v22.__vftable) == v11->currencyId )
                  break;
                bdSerializable::~bdSerializable(&v22);
                bdTaskResult::~bdTaskResult((bdTaskResult *)(&v21.__vftable + 2));
                bdReferencable::~bdReferencable((bdReferencable *)(&v22.__vftable + 1));
                ++v12;
                v13 += 7;
                if ( v12 >= v7->balanceCount )
                  goto LABEL_21;
              }
              remoteTask.m_ptr = v14;
              bdSerializable::~bdSerializable(&v22);
              bdTaskResult::~bdTaskResult((bdTaskResult *)(&v21.__vftable + 2));
              bdReferencable::~bdReferencable((bdReferencable *)(&v22.__vftable + 1));
            }
LABEL_21:
            if ( (__int64)remoteTask.m_ptr >= atoi(v11->price) )
            {
              v15 = strtoul(v11->skuId, NULL, 0);
              v16 = InGameStore_AcquireMarketplace(controllerIndex);
              if ( v16 )
              {
                skuIds = v15;
                purchasedQuantities = 1;
                bdMarketplace::purchaseSkus(v16, &result, (const char *)&queryFormat.fmt + 3, 1u, &skuIds, &purchasedQuantities, 1u, &v7->purchaseSkusResult, NULL, NULL, NULL, NULL, 0, 0);
                InGameStore_ReleaseMarketplace(controllerIndex);
                *(_QWORD *)&v23 = &remoteTask;
                remoteTask.m_ptr = result.m_ptr;
                if ( result.m_ptr )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
                v17 = Co_Self();
                if ( InGameStore_StartRemoteTask(controllerIndex, v17, INGAMESTORE_TASK_PURCHASE_SKUS, (bdReference<bdRemoteTask>)&remoteTask) && Co_Yield(1ui64) )
                {
                  InGameStore_PrintInfo("Controller %d: PurchaseItem %s\n", (unsigned int)controllerIndex, "completed");
                  v5 = 1;
                }
                else
                {
                  v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "task_failed");
                }
                if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                {
                  if ( result.m_ptr )
                    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
                  result.m_ptr = NULL;
                }
              }
              else
              {
                v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "no_marketplace");
              }
            }
            else
            {
              v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_INSUFFICIENT_FUNDS, "insufficient_funds");
            }
          }
          else
          {
            v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "not_dw_item %s", productId);
          }
        }
        else
        {
          v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "no_product %s", productId);
        }
      }
      else
      {
        v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "no_catalog");
      }
    }
    else
    {
      v5 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_ITEM, "no_user");
    }
    InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_IDLE);
  }
  InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_PURCHASE_ITEM);
  InGameStore_OnPurchaseProduct(controllerIndex, productId);
  return v5;
}

/*
==============
InGameStore_CoPurchaseProduct
==============
*/
_BOOL8 InGameStore_CoPurchaseProduct(const int controllerIndex, const char *const productId, InGameStorePurchaseType purchaseType)
{
  bool v7; 
  InGameStoreCatalog *p_catalog; 
  InGameStoreUserContext *UserContext; 
  InGameStoreProduct *Product; 
  InGameStoreProduct *v11; 
  const char *v12; 
  InGameStoreUserContext *v13; 
  __int128 v15; 
  bool purchased; 
  bool refresh; 
  int v19; 

  InGameStore_FenceBegin(controllerIndex, INGAMESTORE_FENCE_PURCHASE_PRODUCT);
  LODWORD(v15) = controllerIndex;
  *((_QWORD *)&v15 + 1) = productId;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_28]
    vmovdqa [rsp+68h+var_28], xmm0
  }
  if ( InGameStore_GetState(controllerIndex) )
  {
    v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "busy");
  }
  else
  {
    InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_PURCHASING_PRODUCT);
    v19 = controllerIndex;
    if ( s_initialized_0 )
    {
      UserContext = InGameStore_GetUserContext(controllerIndex);
      if ( UserContext )
        p_catalog = &UserContext->catalog;
      else
        p_catalog = NULL;
    }
    else
    {
      p_catalog = NULL;
    }
    Product = InGameStore_FindProduct(p_catalog, productId);
    v11 = Product;
    if ( Product )
    {
      if ( Product->disabled )
      {
        v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "disabled %s", productId);
      }
      else
      {
        purchased = 0;
        refresh = 0;
        if ( InGameStore_CoPlatformPurchaseProduct(controllerIndex, Product, purchaseType, &purchased, &refresh) )
        {
          if ( !refresh )
            goto LABEL_19;
          if ( v11->isConsumable )
            v11->status = INGAMESTORE_PRODUCT_STATUS_NOT_OWNED;
          if ( InGameStore_CoPlatformFetchProductsOwnership(controllerIndex) )
          {
LABEL_19:
            v12 = "canceled";
            if ( purchased )
              v12 = "completed";
            InGameStore_PrintInfo("Controller %d: Purchase %s\n", (unsigned int)controllerIndex, v12);
            if ( purchased )
            {
              v13 = InGameStore_GetUserContext(controllerIndex);
              if ( v13 )
              {
                InGameStore_RemoveEmptyCategories(&v13->catalog);
                InGameStore_CoPlatformEnumerateContent();
                v7 = 1;
              }
              else
              {
                v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "no_user");
              }
            }
            else
            {
              v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT_CANCELED, "purchase_canceled %s", productId);
            }
          }
          else
          {
            v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "ownership_failed %s", productId);
          }
        }
        else
        {
          v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "purchase_failed %s", productId);
        }
      }
    }
    else
    {
      v7 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_PURCHASE_PRODUCT, "no_product %s", productId);
    }
    InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_IDLE);
  }
  InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_PURCHASE_PRODUCT);
  InGameStore_OnPurchaseProduct(controllerIndex, productId);
  return v7;
}

/*
==============
InGameStore_CoSelectProduct
==============
*/
_BOOL8 InGameStore_CoSelectProduct(const int controllerIndex, const char *const productId, InGameStorePurchaseType purchaseType)
{
  bool v6; 
  InGameStoreUserContext *UserContext; 
  InGameStoreProduct *Product; 
  InGameStoreProductStatus status; 
  InGameStoreCatalog *p_catalog; 
  InGameStoreUserContext *v12; 
  InGameStoreProduct *v13; 
  __int128 v15; 

  if ( InGameStore_GetState(controllerIndex) )
  {
    v6 = InGameStore_SelectProductError(controllerIndex, productId, "busy");
    goto LABEL_29;
  }
  UserContext = InGameStore_GetUserContext(controllerIndex);
  if ( !UserContext )
  {
    v6 = InGameStore_SelectProductError(controllerIndex, productId, "no_user");
    goto LABEL_29;
  }
  if ( !UserContext->haveCatalog )
  {
    v6 = InGameStore_SelectProductError(controllerIndex, productId, "no_catalog");
    goto LABEL_29;
  }
  Product = InGameStore_FindProduct(&UserContext->catalog, productId);
  if ( !Product )
  {
    v6 = InGameStore_SelectProductError(controllerIndex, productId, "no_product %s", productId);
    goto LABEL_29;
  }
  status = Product->status;
  if ( status )
  {
    if ( status == INGAMESTORE_PRODUCT_STATUS_INSTALLED )
    {
      v6 = 1;
      goto LABEL_29;
    }
  }
  else if ( !Product->isDirectLink )
  {
    if ( Product->skuType == INGAMESTORE_PRODUCT_SKU_TYPE_DEMONWARE )
      v6 = InGameStore_CoPurchaseItem(controllerIndex, productId);
    else
      v6 = InGameStore_CoPurchaseProduct(controllerIndex, productId, purchaseType);
    goto LABEL_29;
  }
  InGameStore_FenceBegin(controllerIndex, INGAMESTORE_FENCE_DOWNLOAD_PRODUCT);
  LODWORD(v15) = controllerIndex;
  *((_QWORD *)&v15 + 1) = productId;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovdqa [rsp+48h+var_18], xmm0
  }
  if ( InGameStore_GetState(controllerIndex) )
  {
    v6 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_DOWNLOAD_PRODUCT, "busy");
    InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_DOWNLOAD_PRODUCT);
    InGameStore_OnDownloadProduct(controllerIndex, productId);
  }
  else
  {
    InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_DOWNLOADING_PRODUCT);
    if ( s_initialized_0 )
    {
      v12 = InGameStore_GetUserContext(controllerIndex);
      if ( v12 )
        p_catalog = &v12->catalog;
      else
        p_catalog = NULL;
    }
    else
    {
      p_catalog = NULL;
    }
    v13 = InGameStore_FindProduct(p_catalog, productId);
    if ( v13 )
    {
      if ( v13->disabled )
        v6 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_DOWNLOAD_PRODUCT, "disabled %s", productId);
      else
        v6 = InGameStore_CoPlatformDownloadProduct(controllerIndex, v13);
      InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_IDLE);
      InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_DOWNLOAD_PRODUCT);
      InGameStore_OnDownloadProduct(controllerIndex, productId);
    }
    else
    {
      v6 = InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_DOWNLOAD_PRODUCT, "no_product %s", productId);
      InGameStore_SetState(controllerIndex, INGAMESTORE_STATE_IDLE);
      InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_DOWNLOAD_PRODUCT);
      InGameStore_OnDownloadProduct(controllerIndex, productId);
    }
  }
LABEL_29:
  InGameStore_ClearError(controllerIndex);
  return v6;
}

/*
==============
InGameStore_DeleteContent
==============
*/
bool InGameStore_DeleteContent(const char *const productId)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreProduct *Product; 
  __int64 v6; 
  unsigned __int64 v7; 
  InGameStoreProduct *v8; 
  __int128 v9; 
  __int64 v10; 
  std::function<unsigned __int64 __cdecl(void)> v11; 
  void (__fastcall *const *_Where)(); 
  void (__fastcall *const **p_Where)(); 

  v10 = -2i64;
  if ( !s_initialized_0 )
    return 0;
  if ( Co_IsStarted(s_deleteContent) )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_DELETE_CONTENT, "in_progress");
  UserContext = InGameStore_GetUserContext(-1);
  if ( !UserContext )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_DELETE_CONTENT, "no_user");
  Product = InGameStore_FindProduct(&UserContext->catalog, productId);
  if ( !Product )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_DELETE_CONTENT, "no_product %s", productId);
  v8 = Product;
  *(_QWORD *)&v9 = InGameStore_CoPlatformDeleteContent;
  *((_QWORD *)&v9 + 1) = &v8;
  _Where = std::_Func_impl_no_alloc__lambda_fae6fdaffbcbfa44710e48a237953b72__unsigned___int64_::_vftable_;
  __asm
  {
    vmovups xmm0, [rsp+0D8h+var_B0]
    vmovups [rsp+0D8h+var_50], xmm0
  }
  p_Where = &_Where;
  *(_QWORD *)&v9 = &v11;
  v11._Mystorage._Ptrs[7] = NULL;
  v11._Mystorage._Ptrs[7] = (std::_Func_base<unsigned __int64> *)((__int64 (__fastcall *)(void (__fastcall *const **)(), std::function<unsigned __int64 __cdecl(void)> *))std::_Func_impl_no_alloc__lambda_fae6fdaffbcbfa44710e48a237953b72__unsigned___int64_::_vftable_[0])(&_Where, &v11);
  v7 = Co_RunInternal(&s_deleteContent, 0x8000, &v11);
  if ( p_Where )
  {
    LOBYTE(v6) = p_Where != &_Where;
    (*((void (__fastcall **)(void (__fastcall *const **)(), __int64))*p_Where + 4))(p_Where, v6);
  }
  return v7 || InGameStore_Error(-1, INGAMESTORE_ERROR_DELETE_CONTENT, "co_failed");
}

/*
==============
InGameStore_EnumerateContent
==============
*/
bool InGameStore_EnumerateContent()
{
  __int64 v2; 
  unsigned __int64 v3; 
  char v4; 
  __int128 v5; 
  __int64 v6; 
  std::function<unsigned __int64 __cdecl(void)> v7; 
  void (__fastcall *const *_Where)(); 
  void (__fastcall *const **p_Where)(); 

  v6 = -2i64;
  if ( !s_initialized_0 )
    return 0;
  if ( Co_IsStarted(s_enumerateContent) )
    return 1;
  *(_QWORD *)&v5 = InGameStore_CoPlatformEnumerateContent;
  *((_QWORD *)&v5 + 1) = &v4;
  _Where = std::_Func_impl_no_alloc__lambda_17c2ea9c3dc296589ed27f81969e350c__unsigned___int64_::_vftable_;
  __asm
  {
    vmovups xmm0, [rsp+0D8h+var_B0]
    vmovups [rsp+0D8h+var_50], xmm0
  }
  p_Where = &_Where;
  *(_QWORD *)&v5 = &v7;
  v7._Mystorage._Ptrs[7] = NULL;
  v7._Mystorage._Ptrs[7] = (std::_Func_base<unsigned __int64> *)((__int64 (__fastcall *)(void (__fastcall *const **)(), std::function<unsigned __int64 __cdecl(void)> *))std::_Func_impl_no_alloc__lambda_17c2ea9c3dc296589ed27f81969e350c__unsigned___int64_::_vftable_[0])(&_Where, &v7);
  v3 = Co_RunInternal(&s_enumerateContent, 0x8000, &v7);
  if ( p_Where )
  {
    LOBYTE(v2) = p_Where != &_Where;
    (*((void (__fastcall **)(void (__fastcall *const **)(), __int64))*p_Where + 4))(p_Where, v2);
  }
  if ( v3 )
    return 1;
  return InGameStore_Error(-1, INGAMESTORE_ERROR_ENUMERATE_CONTENT, "co_failed");
}

/*
==============
InGameStore_FetchCatalog
==============
*/
bool InGameStore_FetchCatalog(const int controllerIndex, bool showEmptyStoreDialog, bool useCache)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v7; 
  __int64 v10; 
  unsigned __int64 v11; 
  bool v12; 
  int v13; 
  __int128 v14; 
  __int64 v15; 
  std::function<unsigned __int64 __cdecl(void)> v16; 
  void (__fastcall *const *_Where)(); 
  void (__fastcall *const **p_Where)(); 

  v15 = -2i64;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 1206, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index INGAMESTORE_MAX_USER_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)controllerIndex > 7 || !s_initialized_0 )
    return 0;
  UserContext = InGameStore_GetUserContext(-1);
  v7 = UserContext;
  if ( !UserContext )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_FETCH_CATALOG, "no_user");
  if ( Co_IsStarted(UserContext->fetchCatalog) )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_FETCH_CATALOG, "fetch_in_progress");
  if ( Co_IsStarted(v7->selectProduct) )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_FETCH_CATALOG, "select_in_progress");
  if ( useCache && v7->haveCatalog && v7->controllerIndex == controllerIndex )
    return 1;
  v7->controllerIndex = controllerIndex;
  v12 = showEmptyStoreDialog;
  v13 = controllerIndex;
  *(_QWORD *)&v14 = InGameStore_CoFetchCatalog;
  *((_QWORD *)&v14 + 1) = &v12;
  _Where = std::_Func_impl_no_alloc__lambda_4d953df3609eaf0d951f31fa2357a261__unsigned___int64_::_vftable_;
  __asm
  {
    vmovups xmm0, [rsp+108h+var_C0]
    vmovups [rsp+108h+var_60], xmm0
  }
  p_Where = &_Where;
  *(_QWORD *)&v14 = &v16;
  v16._Mystorage._Ptrs[7] = NULL;
  v16._Mystorage._Ptrs[7] = (std::_Func_base<unsigned __int64> *)((__int64 (__fastcall *)(void (__fastcall *const **)(), std::function<unsigned __int64 __cdecl(void)> *))std::_Func_impl_no_alloc__lambda_4d953df3609eaf0d951f31fa2357a261__unsigned___int64_::_vftable_[0])(&_Where, &v16);
  v11 = Co_RunInternal(&v7->fetchCatalog, 0x10000, &v16);
  if ( p_Where )
  {
    LOBYTE(v10) = p_Where != &_Where;
    (*((void (__fastcall **)(void (__fastcall *const **)(), __int64))*p_Where + 4))(p_Where, v10);
  }
  if ( v11 )
    return 1;
  return InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_FETCH_CATALOG, "co_failed");
}

/*
==============
InGameStore_Frame
==============
*/
void InGameStore_Frame(void)
{
  if ( s_initialized_0 )
    Co_Frame();
}

/*
==============
InGameStore_GetCatalog
==============
*/
InGameStoreCatalog *InGameStore_GetCatalog(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 

  if ( s_initialized_0 && (UserContext = InGameStore_GetUserContext(controllerIndex)) != NULL )
    return &UserContext->catalog;
  else
    return 0i64;
}

/*
==============
InGameStore_GetCatalogStatus
==============
*/
__int64 InGameStore_GetCatalogStatus(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 

  if ( !s_initialized_0 )
    return 0i64;
  UserContext = InGameStore_GetUserContext(-1);
  if ( !UserContext || controllerIndex != UserContext->controllerIndex )
    return 0i64;
  if ( UserContext->state == INGAMESTORE_STATE_FETCHING_CONFIG )
    return 1i64;
  if ( UserContext->haveCatalog )
    return 2i64;
  else
    return 0i64;
}

/*
==============
InGameStore_GetProduct
==============
*/
InGameStoreProduct *InGameStore_GetProduct(const int controllerIndex, const char *const productId)
{
  InGameStoreUserContext *UserContext; 

  if ( s_initialized_0 && InGameStore_GetState(controllerIndex) != INGAMESTORE_STATE_FETCHING_CONFIG && (UserContext = InGameStore_GetUserContext(controllerIndex)) != NULL && UserContext->haveCatalog )
    return InGameStore_FindProduct(&UserContext->catalog, productId);
  else
    return 0i64;
}

/*
==============
InGameStore_Init
==============
*/
void InGameStore_Init(const InGameStoreConfig *const config)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v3; 

  Co_Init();
  InGameStore_SetConfig(config);
  UserContext = InGameStore_GetUserContext(-1);
  v3 = UserContext;
  if ( UserContext )
  {
    memset_0(UserContext, 0, sizeof(InGameStoreUserContext));
    `eh vector vbase constructor iterator'(v3->balances, 0x38ui64, 0x14ui64, (void (__fastcall *)(void *))bdMarketplaceCurrency::bdMarketplaceCurrency, (void (__fastcall *)(void *))bdMarketplaceCurrency::`vbase destructor);
    bdObjectStoreObject::bdObjectStoreObject(&v3->configObject);
    bdObjectStoreGetPublisherObjectResponse::bdObjectStoreGetPublisherObjectResponse(&v3->fetchConfigResponse);
    `eh vector vbase constructor iterator'(v3->getSkusResult, 0x8D8ui64, 8ui64, (void (__fastcall *)(void *))bdMarketplaceSku::bdMarketplaceSku, (void (__fastcall *)(void *))bdMarketplaceSku::`vbase destructor);
    Json::Json(&v3->configJson);
    bdCommsGetMessagesResponse::bdCommsGetMessagesResponse(&v3->fetchMessagesResponse);
    bdMarketplacePurchaseSkusResult::bdMarketplacePurchaseSkusResult(&v3->purchaseSkusResult);
    bdObjectStoreGetPublisherObjectsResponse::bdObjectStoreGetPublisherObjectsResponse(&v3->getPublisherObjectsResponse);
    v3->haveCatalog = 0;
    memset_0(&v3->catalog, 0, sizeof(v3->catalog));
  }
  InGameStore_SetState(-1, INGAMESTORE_STATE_IDLE);
  s_initialized_0 = 1;
}

/*
==============
InGameStore_IsInitialized
==============
*/
_BOOL8 InGameStore_IsInitialized()
{
  return s_initialized_0;
}

/*
==============
InGameStore_ParseCatalog
==============
*/
void InGameStore_ParseCatalog(InGameStoreCatalog *const catalog, Json *jsonRoot, const InGameStoreComms *comms)
{
  int v7; 
  Json *v8; 
  Json *v11; 
  int v16; 
  int *p_productIdCount; 
  __int64 v18; 
  InGameStoreCategory *Category; 
  InGameStoreCategory *v20; 
  int v21; 
  InGameStoreProduct *Product; 
  __int64 productCount; 
  Json v24; 
  Json rhs; 
  Json result; 
  Json v27; 
  Json v28; 
  ServiceLabel v29[8]; 

  _RDI = jsonRoot;
  memset_0(catalog, 0, sizeof(InGameStoreCatalog));
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+230h+rhs.m_key], xmm0
  }
  v7 = InGameStore_ParseServiceLabels(&rhs, v29, 8);
  v8 = (Json *)Json::operator[](_RDI, &result, "products");
  Json::ToObject(v8, &v27);
  Json::begin(&v27, &v24);
  Json::end(&rhs);
  while ( Json::operator!=(&v24, &rhs) )
  {
    _RAX = Json::operator*(&v24);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+230h+result.m_key], xmm0
    }
    InGameStore_ParseProduct(catalog, &result, v29, v7);
    Json::operator++(&v24, &v28);
  }
  v11 = (Json *)Json::operator[](_RDI, &v28, "categories");
  Json::ToObject(v11, &result);
  Json::begin(&result, &v24);
  Json::end(&rhs);
  while ( Json::operator!=(&v24, &rhs) )
  {
    _RAX = Json::operator*(&v24);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+230h+var_1E0.m_key], xmm0
    }
    InGameStore_ParseCategory(catalog, &v27, 1);
    Json::operator++(&v24, &v28);
  }
  _RAX = Json::operator[](_RDI, &v28, "store");
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+230h+result.m_key], xmm0
  }
  InGameStore_SortCategories(catalog, &result);
  v16 = 0;
  if ( comms->categoryCount > 0 )
  {
    p_productIdCount = &comms->categories[0].productIdCount;
    do
    {
      v18 = 356i64 * v16;
      Category = InGameStore_FindCategory(catalog, (const char *const)comms + v18);
      v20 = Category;
      if ( Category )
      {
        v21 = 0;
        for ( Category->productCount = 0; v21 < *p_productIdCount; ++v21 )
        {
          Product = InGameStore_FindProduct(catalog, &comms->categories[0].productIds[v21][v18]);
          if ( Product )
          {
            productCount = v20->productCount;
            if ( (unsigned int)productCount < 0x3C )
            {
              v20->products[productCount] = Product;
              ++v20->productCount;
            }
          }
        }
      }
      ++v16;
      p_productIdCount += 89;
    }
    while ( v16 < comms->categoryCount );
  }
}

/*
==============
InGameStore_ParseCategory
==============
*/
void InGameStore_ParseCategory(InGameStoreCatalog *const catalog, const Json *jsonRoot, bool createCategories)
{
  const char *v6; 
  InGameStoreCategory *Category; 
  __int64 categoryCount; 
  Json *v9; 
  Json *v10; 
  Json *v11; 
  const char *title; 
  Json *v13; 
  const char *v16; 
  InGameStoreProduct *Product; 
  __int64 productCount; 
  Json v19; 
  Json rhs; 
  Json v21; 
  Json result; 
  Json v23; 

  v6 = Json::Name((Json *)jsonRoot);
  Category = InGameStore_FindCategory(catalog, v6);
  if ( !Category )
  {
    if ( !createCategories )
      return;
    if ( catalog->categoryCount >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( catalog->categoryCount ) < (unsigned)( ( sizeof( *array_counter( catalog->categories ) ) + 0 ) )", "catalog->categoryCount doesn't index catalog->categories\n\t%i not in [0, %i)", catalog->categoryCount, 10) )
      __debugbreak();
    categoryCount = catalog->categoryCount;
    if ( (unsigned int)categoryCount >= 0xA )
      return;
    catalog->categoryCount = categoryCount + 1;
    Category = &catalog->categories[categoryCount];
    Category->layout = "normal";
    v9 = (Json *)Json::operator[]((Json *)jsonRoot, &result, "layout");
    Json::GetString(v9, &Category->layout);
    v10 = (Json *)Json::operator[]((Json *)jsonRoot, &result, "image");
    Json::GetString(v10, &Category->image);
    Category->categoryId = Json::Name((Json *)jsonRoot);
    v11 = (Json *)Json::operator[]((Json *)jsonRoot, &result, "title");
    Json::GetString(v11, &Category->title);
    title = Category->title;
    if ( *title == 64 )
      Category->title = InGameStore_GetString(title + 1);
  }
  Category->productCount = 0;
  v13 = (Json *)Json::operator[]((Json *)jsonRoot, &result, "products");
  Json::ToArray(v13, &v21);
  Json::begin(&v21, &v19);
  Json::end(&rhs);
  while ( Json::operator!=(&v19, &rhs) )
  {
    _RAX = Json::operator*(&v19);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+98h+result.m_key], xmm0
    }
    v16 = Json::ToString(&result, (const char *)&queryFormat.fmt + 3);
    Product = InGameStore_FindProduct(catalog, v16);
    if ( Product )
    {
      productCount = Category->productCount;
      if ( (unsigned int)productCount >= 0x3C )
        break;
      Category->products[productCount] = Product;
      ++Category->productCount;
    }
    Json::operator++(&v19, &v23);
  }
  Category->productCapacity = Category->productCount;
}

/*
==============
InGameStore_ParseCommsCategories
==============
*/
void InGameStore_ParseCommsCategories(const bdCommsGetMessagesResponse *const response, InGameStoreComms *comms)
{
  unsigned int v4; 
  bool v5; 
  __int64 v6; 
  Json *v7; 
  char *v8; 
  __int64 categoryCount; 
  InGameStoreCommsCategory *v10; 
  Json *v11; 
  Json *v12; 
  __int64 productIdCount; 
  Json v16; 
  Json v17; 
  Json v18; 
  Json rhs; 
  Json v20; 
  Json v21; 
  Json result; 
  Json v23; 
  Json v24; 
  Json v25; 
  char error[256]; 

  comms->categoryCount = 0;
  v4 = 0;
  if ( *((_DWORD *)&response->__vftable + 7) )
  {
    v5 = *((_DWORD *)&response->__vftable + 7) != 0;
    do
    {
      bdHandleAssert(v5, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsMessage>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
      v6 = 7328i64 * v4;
      if ( *(_QWORD *)(*((_QWORD *)&response->__vftable + 2) + v6 + 16) )
      {
        bdHandleAssert(v4 < *((_DWORD *)&response->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsMessage>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
        if ( *(_DWORD *)(*((_QWORD *)&response->__vftable + 2) + v6 + 7304) == 3 && comms->categoryCount < 4u )
        {
          Json::Json(&v18);
          bdHandleAssert(v4 < *((_DWORD *)&response->__vftable + 7), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsMessage>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed");
          if ( Json::Parse(&v18, (char *)(v6 + *((_QWORD *)&response->__vftable + 2) + 44), error, 256) && (Json::Json(&v17), v7 = (Json *)Json::operator[](&v18, &result, "content_long"), v8 = (char *)Json::ToString(v7, (const char *)&queryFormat.fmt + 3), Json::Parse(&v17, v8, error, 256)) )
          {
            categoryCount = comms->categoryCount;
            comms->categoryCount = categoryCount + 1;
            v10 = &comms->categories[categoryCount];
            v10->productIdCount = 0;
            v11 = (Json *)Json::operator[](&v17, &v23, "category_id");
            Json::GetString(v11, v10->name, 0x20ui64);
            v12 = (Json *)Json::operator[](&v17, &v24, "product_ids");
            Json::ToArray(v12, &v20);
            Json::begin(&v20, &v16);
            Json::end(&rhs);
            while ( Json::operator!=(&v16, &rhs) )
            {
              _RAX = Json::operator*(&v16);
              __asm { vmovups xmm0, xmmword ptr [rax] }
              productIdCount = v10->productIdCount;
              __asm { vmovups xmmword ptr [rbp+100h+var_180.m_key], xmm0 }
              if ( (unsigned int)productIdCount < 0xA )
              {
                v10->productIdCount = productIdCount + 1;
                Json::GetString(&v21, v10->productIds[productIdCount], 0x20ui64);
              }
              Json::operator++(&v16, &v25);
            }
          }
          else
          {
            InGameStore_PrintError("InGameStore_ParseCommsCategories error: %s\n", error);
          }
        }
      }
      v5 = ++v4 < *((_DWORD *)&response->__vftable + 7);
    }
    while ( v4 < *((_DWORD *)&response->__vftable + 7) );
  }
}

/*
==============
InGameStore_ParseProduct
==============
*/
void InGameStore_ParseProduct(InGameStoreCatalog *const catalog, const Json *jsonRoot, const ServiceLabel *const serviceLabels, int serviceLabelCount)
{
  Json *v6; 
  Json *v7; 
  const char *v8; 
  InGameStoreProduct *Product; 
  __int64 productCount; 
  Json *v11; 
  Json *v12; 
  Json *v13; 
  const char *title; 
  Json *v15; 
  const char *contentLong; 
  Json *v17; 
  int v18; 
  Json *v19; 
  Json *v20; 
  Json *v21; 
  Json *v22; 
  Json result; 
  Json v24; 
  Json v25; 
  Json v26; 
  Json v27; 
  Json v28; 
  Json v29; 
  Json v30; 
  Json v31; 
  Json v32; 
  Json v33; 
  char name[64]; 

  memset(name, 0, sizeof(name));
  Com_sprintf<64>((char (*)[64])name, "%s_product_id", "xb3");
  v6 = (Json *)Json::operator[]((Json *)jsonRoot, &result, name);
  if ( !Json::IsString(v6) )
  {
    v7 = (Json *)Json::operator[]((Json *)jsonRoot, &v24, "item");
    if ( !Json::IsString(v7) )
      return;
  }
  v8 = Json::Name((Json *)jsonRoot);
  Product = InGameStore_FindProduct(catalog, v8);
  if ( !Product )
  {
    if ( catalog->productCount >= 0x3Cu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( catalog->productCount ) < (unsigned)( ( sizeof( *array_counter( catalog->products ) ) + 0 ) )", "catalog->productCount doesn't index catalog->products\n\t%i not in [0, %i)", catalog->productCount, 60) )
      __debugbreak();
    productCount = catalog->productCount;
    if ( (unsigned int)productCount >= 0x3C )
      return;
    catalog->productCount = productCount + 1;
    Product = &catalog->products[productCount];
  }
  v11 = (Json *)Json::operator[]((Json *)jsonRoot, &v25, "image");
  Json::GetString(v11, &Product->image);
  v12 = (Json *)Json::operator[]((Json *)jsonRoot, &v26, "popup_image");
  Json::GetString(v12, &Product->popupImage);
  Product->productId = Json::Name((Json *)jsonRoot);
  v13 = (Json *)Json::operator[]((Json *)jsonRoot, &v27, "title");
  Json::GetString(v13, &Product->title);
  title = Product->title;
  if ( *title == 64 )
    Product->title = InGameStore_GetString(title + 1);
  v15 = (Json *)Json::operator[]((Json *)jsonRoot, &v28, "description");
  Json::GetString(v15, &Product->contentLong);
  contentLong = Product->contentLong;
  if ( *contentLong == 64 )
    Product->contentLong = InGameStore_GetString(contentLong + 1);
  Product->skuType = INGAMESTORE_PRODUCT_SKU_TYPE_NONE;
  v17 = (Json *)Json::operator[]((Json *)jsonRoot, &v29, name);
  if ( Json::GetString(v17, &Product->skuId) )
  {
    v18 = 1;
LABEL_17:
    Product->skuType = v18;
    Product->isConsumable = 0;
    v20 = (Json *)Json::operator[]((Json *)jsonRoot, &v31, "consumable");
    Json::GetBool(v20, &Product->isConsumable);
    Product->isEntitlement = 0;
    v21 = (Json *)Json::operator[]((Json *)jsonRoot, &v32, "entitlement");
    Json::GetBool(v21, &Product->isEntitlement);
    Product->isDirectLink = 0;
    v22 = (Json *)Json::operator[]((Json *)jsonRoot, &v33, "xb3_direct_link");
    Json::GetBool(v22, &Product->isDirectLink);
    return;
  }
  v19 = (Json *)Json::operator[]((Json *)jsonRoot, &v30, "item");
  if ( Json::GetString(v19, &Product->skuId) )
  {
    v18 = 2;
    goto LABEL_17;
  }
  --catalog->productCount;
}

/*
==============
InGameStore_ParseServiceLabels
==============
*/
__int64 InGameStore_ParseServiceLabels(const Json *jsonRoot, ServiceLabel *const serviceLabels, const int maxServiceLabelCount)
{
  ServiceLabel *v4; 
  int v6; 
  Json *v7; 
  bool v10; 
  ServiceLabel *v11; 
  char *ps4TitleId; 
  const char *v15; 
  signed __int64 v16; 
  int v17; 
  int v18; 
  unsigned int serviceLabelCount; 
  __int64 v23; 
  __int64 v24; 
  Json v25; 
  Json v26; 
  Json v27; 
  Json v28; 
  Json v29; 
  Json v30; 
  Json v31; 
  Json rhs; 
  Json result; 
  Json v34; 
  Json v35; 
  Json v36; 
  Json v37; 
  Json v38; 
  Json v39; 

  v4 = serviceLabels;
  v6 = 0;
  memset_0(serviceLabels, 0, 48i64 * maxServiceLabelCount);
  v7 = (Json *)Json::operator[]((Json *)jsonRoot, &result, "service_labels");
  Json::ToObject(v7, &v34);
  Json::begin(&v34, &v27);
  Json::end(&rhs);
  while ( Json::operator!=(&v27, &rhs) )
  {
    _RAX = Json::operator*(&v27);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+150h+var_E0.m_key], xmm0
    }
    v10 = v6 < maxServiceLabelCount;
    if ( v6 >= (unsigned int)maxServiceLabelCount )
    {
      LODWORD(v24) = maxServiceLabelCount;
      LODWORD(v23) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( serviceLabelCount ) < (unsigned)( maxServiceLabelCount )", "serviceLabelCount doesn't index maxServiceLabelCount\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
      v10 = v6 < maxServiceLabelCount;
    }
    if ( v10 )
    {
      v11 = v4++;
      ++v6;
      v11->name = Json::Name(&v28);
      Json::ToObject(&v28, &v35);
      Json::begin(&v35, &v26);
      Json::end(&v31);
      while ( Json::operator!=(&v26, &v31) )
      {
        _RAX = Json::operator*(&v26);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+50h+var_D0.m_key], xmm0
        }
        ps4TitleId = InGameStore_GetConfig()->ps4TitleId;
        v15 = Json::Name(&v29);
        v16 = ps4TitleId - v15;
        do
        {
          v17 = (unsigned __int8)v15[v16];
          v18 = *(unsigned __int8 *)v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        if ( !v18 )
        {
          Json::ToArray(&v29, &v36);
          Json::begin(&v36, &v25);
          Json::end(&v30);
          while ( Json::operator!=(&v25, &v30) )
          {
            _RAX = Json::operator*(&v25);
            __asm { vmovups xmm0, xmmword ptr [rax] }
            serviceLabelCount = v11->serviceLabelCount;
            __asm { vmovups xmmword ptr [rbp+50h+result.m_key], xmm0 }
            if ( serviceLabelCount < 8 )
              goto LABEL_17;
            LODWORD(v24) = 8;
            LODWORD(v23) = serviceLabelCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( serviceLabel->serviceLabelCount ) < (unsigned)( ( sizeof( *array_counter( serviceLabel->serviceLabels ) ) + 0 ) )", "serviceLabel->serviceLabelCount doesn't index serviceLabel->serviceLabels\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
            if ( v11->serviceLabelCount < 8u )
LABEL_17:
              v11->serviceLabels[v11->serviceLabelCount++] = Json::ToInt32(&result, 0);
            Json::operator++(&v25, &v37);
          }
        }
        Json::operator++(&v26, &v38);
      }
    }
    Json::operator++(&v27, &v39);
  }
  return (unsigned int)v6;
}

/*
==============
InGameStore_RemoveEmptyCategories
==============
*/
void InGameStore_RemoveEmptyCategories(InGameStoreCatalog *const catalog)
{
  int v1; 
  int *p_categoryCount; 
  int categoryCount; 
  InGameStoreCatalog *v4; 
  int v5; 
  int *p_productCapacity; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int *v10; 
  __int64 v11; 
  __int64 *v12; 
  __int64 v13; 
  int *v14; 
  __int64 v16; 
  int v26; 
  InGameStoreCatalog *v27; 
  __int64 v30; 
  __int64 v40; 
  __int64 v41; 
  __int64 v43[60]; 

  v1 = 0;
  p_categoryCount = &catalog->categoryCount;
  categoryCount = catalog->categoryCount;
  v4 = catalog;
  v5 = 0;
  if ( categoryCount > 0 )
  {
    p_productCapacity = &catalog->categories[0].productCapacity;
    do
    {
      v7 = 0;
      v8 = 0i64;
      memset_0(v43, 0, sizeof(v43));
      v9 = (unsigned int)*p_productCapacity;
      if ( (int)v9 > 0 )
      {
        v10 = p_productCapacity - 121;
        v11 = (unsigned int)v9;
        do
        {
          if ( !*(_BYTE *)(*(_QWORD *)v10 + 41i64) )
          {
            ++v7;
            v43[v8++] = *(_QWORD *)v10;
          }
          v10 += 2;
          --v11;
        }
        while ( v11 );
      }
      *(p_productCapacity - 1) = v7;
      if ( (int)v9 > 0 )
      {
        v12 = &v43[v8];
        v13 = v9;
        v14 = p_productCapacity - 121;
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 41i64) )
          {
            ++v7;
            *v12++ = *(_QWORD *)v14;
          }
          v14 += 2;
          --v13;
        }
        while ( v13 );
      }
      if ( (_DWORD)v9 != v7 )
      {
        LODWORD(v41) = v7;
        LODWORD(v40) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 83, ASSERT_TYPE_ASSERT, "( category->productCapacity ) == ( categoryProductCount )", "%s == %s\n\t%i, %i", "category->productCapacity", "categoryProductCount", v40, v41) )
          __debugbreak();
      }
      _RAX = p_productCapacity - 121;
      v16 = 3i64;
      _RCX = v43;
      do
      {
        _RAX += 32;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX += 16;
        __asm
        {
          vmovups ymmword ptr [rax-80h], ymm0
          vmovups ymm0, ymmword ptr [rcx-60h]
          vmovups ymmword ptr [rax-60h], ymm0
          vmovups ymm0, ymmword ptr [rcx-40h]
          vmovups ymmword ptr [rax-40h], ymm0
          vmovups xmm0, xmmword ptr [rcx-20h]
          vmovups xmmword ptr [rax-20h], xmm0
          vmovups xmmword ptr [rax-10h], xmm1
        }
        --v16;
      }
      while ( v16 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rcx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rcx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
      }
      categoryCount = *p_categoryCount;
      ++v5;
      p_productCapacity += 132;
    }
    while ( v5 < *p_categoryCount );
    v4 = catalog;
  }
  v26 = 0;
  if ( categoryCount > 0 )
  {
    v27 = v4;
    do
    {
      if ( v4->categories[0].productCount > 0 )
      {
        ++v1;
        _RCX = v27;
        v27 = (InGameStoreCatalog *)((char *)v27 + 528);
        _RAX = v4;
        v30 = 4i64;
        do
        {
          _RCX = (InGameStoreCatalog *)((char *)_RCX + 128);
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RAX = (InGameStoreCatalog *)((char *)_RAX + 128);
          __asm
          {
            vmovups xmmword ptr [rcx-80h], xmm0
            vmovups xmm1, xmmword ptr [rax-70h]
            vmovups xmmword ptr [rcx-70h], xmm1
            vmovups xmm0, xmmword ptr [rax-60h]
            vmovups xmmword ptr [rcx-60h], xmm0
            vmovups xmm1, xmmword ptr [rax-50h]
            vmovups xmmword ptr [rcx-50h], xmm1
            vmovups xmm0, xmmword ptr [rax-40h]
            vmovups xmmword ptr [rcx-40h], xmm0
            vmovups xmm1, xmmword ptr [rax-30h]
            vmovups xmmword ptr [rcx-30h], xmm1
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmm1, xmmword ptr [rax-10h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v30;
        }
        while ( v30 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rcx], xmm0
        }
      }
      ++v26;
      v4 = (InGameStoreCatalog *)((char *)v4 + 528);
    }
    while ( v26 < *p_categoryCount );
  }
  *p_categoryCount = v1;
}

/*
==============
InGameStore_SelectProduct
==============
*/
bool InGameStore_SelectProduct(const int controllerIndex, const char *const productId, InGameStorePurchaseType purchaseType)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v7; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int128 v12; 
  InGameStorePurchaseType v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  std::function<unsigned __int64 __cdecl(void)> v17; 
  void (__fastcall *const *_Where)(); 
  void (__fastcall *const **p_Where)(); 

  v16 = -2i64;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore.cpp", 1284, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index INGAMESTORE_MAX_USER_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)controllerIndex > 7 || !s_initialized_0 )
    return 0;
  UserContext = InGameStore_GetUserContext(-1);
  v7 = UserContext;
  if ( !UserContext )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_SELECT_PRODUCT, "no_user");
  if ( Co_IsStarted(UserContext->selectProduct) )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_SELECT_PRODUCT, "select_in_progress");
  if ( Co_IsStarted(v7->fetchCatalog) )
    return InGameStore_Error(-1, INGAMESTORE_ERROR_SELECT_PRODUCT, "fetch_in_progress");
  v13 = purchaseType;
  v14 = productId;
  v15 = controllerIndex;
  *(_QWORD *)&v12 = InGameStore_CoSelectProduct;
  *((_QWORD *)&v12 + 1) = &v13;
  _Where = std::_Func_impl_no_alloc__lambda_8ee23e7b5b4ce8b2e3e340b70fabbe9d__unsigned___int64_::_vftable_;
  __asm
  {
    vmovups xmm0, [rsp+118h+var_D8]
    vmovups [rsp+118h+var_60], xmm0
  }
  p_Where = &_Where;
  v17._Mystorage._Ptrs[7] = NULL;
  v17._Mystorage._Ptrs[7] = (std::_Func_base<unsigned __int64> *)((__int64 (__fastcall *)(void (__fastcall *const **)(), std::function<unsigned __int64 __cdecl(void)> *))std::_Func_impl_no_alloc__lambda_8ee23e7b5b4ce8b2e3e340b70fabbe9d__unsigned___int64_::_vftable_[0])(&_Where, &v17);
  v11 = Co_RunInternal(&v7->selectProduct, 0x10000, &v17);
  if ( p_Where )
  {
    LOBYTE(v10) = p_Where != &_Where;
    (*((void (__fastcall **)(void (__fastcall *const **)(), __int64))*p_Where + 4))(p_Where, v10);
  }
  return v11 || InGameStore_Error(controllerIndex, INGAMESTORE_ERROR_SELECT_PRODUCT, "co_failed");
}

/*
==============
InGameStore_SelectProductError
==============
*/
bool InGameStore_SelectProductError(const int controllerIndex, const char *const productId, const char *const fmt, ...)
{
  va_list args; 

  va_start(args, fmt);
  InGameStore_FenceBegin(controllerIndex, INGAMESTORE_FENCE_SELECT_PRODUCT);
  InGameStore_ErrorVA(controllerIndex, INGAMESTORE_ERROR_SELECT_PRODUCT, fmt, args);
  InGameStore_FenceEnd(controllerIndex, INGAMESTORE_FENCE_SELECT_PRODUCT);
  InGameStore_OnPurchaseProduct(controllerIndex, productId);
  return 0;
}

/*
==============
InGameStore_Shutdown
==============
*/
void InGameStore_Shutdown(void)
{
  Co_Shutdown();
  s_initialized_0 = 0;
}

/*
==============
InGameStore_SortCategories
==============
*/
void InGameStore_SortCategories(InGameStoreCatalog *const catalog, const Json *jsonCategories)
{
  int categoryCount; 
  int v3; 
  int v4; 
  Json *v5; 
  InGameStoreCatalog *v7; 
  char v8; 
  char v9; 
  __int64 v11; 
  const char *v13; 
  const char *categoryId; 
  const char *v15; 
  signed __int64 v16; 
  char v17; 
  __int64 v18; 
  char v19; 
  int v20; 
  Json v21; 
  Json rhs; 
  Json result; 
  Json v24; 
  Json v25; 
  int v26; 

  categoryCount = catalog->categoryCount;
  v3 = 0;
  v4 = 0;
  v5 = (Json *)jsonCategories;
  v26 = 0;
  if ( categoryCount > 0 )
  {
    v7 = catalog;
    do
    {
      v8 = 0;
      v9 = 0;
      Json::ToArray(v5, &result);
      Json::begin(&result, &v21);
      Json::end(&rhs);
      if ( Json::operator!=(&v21, &rhs) )
      {
        do
        {
          _RAX = Json::operator*(&v21);
          ++v9;
          v11 = 0x7FFFFFFFi64;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+0B8h+var_58.m_key], xmm0
          }
          v13 = Json::ToString(&v24, (const char *)&queryFormat.fmt + 3);
          categoryId = v7->categories[0].categoryId;
          v15 = v13;
          if ( !v7->categories[0].categoryId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v16 = categoryId - v15;
          while ( 1 )
          {
            v17 = v15[v16];
            v18 = v11;
            v19 = *v15++;
            --v11;
            if ( !v18 )
            {
LABEL_14:
              v4 = v26;
              v8 = 1;
              goto LABEL_18;
            }
            if ( v17 != v19 )
              break;
            if ( !v17 )
              goto LABEL_14;
          }
          Json::operator++(&v21, &v25);
        }
        while ( Json::operator!=(&v21, &rhs) );
        v4 = v26;
      }
      v9 = -1;
LABEL_18:
      v5 = (Json *)jsonCategories;
      v20 = v3 + 1;
      v7->categories[0].sortPriority = v9;
      if ( !v8 )
        v20 = v3;
      ++v4;
      v3 = v20;
      v26 = v4;
      categoryCount = catalog->categoryCount;
      v7 = (InGameStoreCatalog *)((char *)v7 + 528);
    }
    while ( v4 < categoryCount );
  }
  std::_Sort_unchecked_InGameStoreCategory____lambda_5abca68202a6aa36381bb157cccfde94___(catalog->categories, &catalog->categories[categoryCount], 528i64 * categoryCount / 528, (InGameStore_SortCategories::__l2::<lambda_5abca68202a6aa36381bb157cccfde94>)v26);
  catalog->categoryCount = v3;
}

