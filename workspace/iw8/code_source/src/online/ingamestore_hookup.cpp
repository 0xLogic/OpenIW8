/*
==============
InGameStoreHookup::OnPurchaseProduct
==============
*/

void __fastcall InGameStoreHookup::OnPurchaseProduct(InGameStoreHookup *this, int controllerIndex, const char *productId, InGameStoreError error, const char *message)
{
  ?OnPurchaseProduct@InGameStoreHookup@@UEAAXHPEBDW4InGameStoreError@@0@Z(this, controllerIndex, productId, error, message);
}

/*
==============
InGameStoreHookup::TaskStart
==============
*/

bool __fastcall InGameStoreHookup::TaskStart(InGameStoreHookup *this, int controllerIndex, void *igsTaskHandle, InGameStoreTask *igsTask)
{
  return ?TaskStart@InGameStoreHookup@@UEAA_NHPEAXPEAUInGameStoreTask@@@Z(this, controllerIndex, igsTaskHandle, igsTask);
}

/*
==============
InGameStoreHookup::GetVersion
==============
*/

int __fastcall InGameStoreHookup::GetVersion(InGameStoreHookup *this)
{
  return ?GetVersion@InGameStoreHookup@@UEBAHXZ(this);
}

/*
==============
InGameStoreHookup::InGameStoreHookup
==============
*/

void __fastcall InGameStoreHookup::InGameStoreHookup(InGameStoreHookup *this)
{
  ??0InGameStoreHookup@@QEAA@XZ(this);
}

/*
==============
InGameStoreHookup::ReleaseLobbyService
==============
*/

void __fastcall InGameStoreHookup::ReleaseLobbyService(InGameStoreHookup *this, int controllerIndex)
{
  ?ReleaseLobbyService@InGameStoreHookup@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
InGameStoreHookup::FenceEnd
==============
*/

void __fastcall InGameStoreHookup::FenceEnd(InGameStoreHookup *this, int controllerIndex, InGameStoreFence fence, InGameStoreError error, const char *message)
{
  ?FenceEnd@InGameStoreHookup@@UEAAXHW4InGameStoreFence@@W4InGameStoreError@@PEBD@Z(this, controllerIndex, fence, error, message);
}

/*
==============
InGameStoreHookup::GetString
==============
*/

const char *__fastcall InGameStoreHookup::GetString(InGameStoreHookup *this, const char *stringRef)
{
  return ?GetString@InGameStoreHookup@@UEAAPEBDPEBD@Z(this, stringRef);
}

/*
==============
InGameStoreHookup::OnDownloadProduct
==============
*/

void __fastcall InGameStoreHookup::OnDownloadProduct(InGameStoreHookup *this, int controllerIndex, const char *productId, InGameStoreError error, const char *message)
{
  ?OnDownloadProduct@InGameStoreHookup@@UEAAXHPEBDW4InGameStoreError@@0@Z(this, controllerIndex, productId, error, message);
}

/*
==============
InGameStoreHookup::GetUser
==============
*/

Windows::Xbox::System::User *__fastcall InGameStoreHookup::GetUser(InGameStoreHookup *this, int controllerIndex)
{
  return ?GetUser@InGameStoreHookup@@UEAAPE$AAVUser@System@Xbox@Windows@@H@Z(this, controllerIndex);
}

/*
==============
InGameStoreHookup::GetInstancePtr
==============
*/

InGameStoreHookup *__fastcall InGameStoreHookup::GetInstancePtr()
{
  return ?GetInstancePtr@InGameStoreHookup@@SAPEAV1@XZ();
}

/*
==============
InGameStoreHookup::GetStatusString
==============
*/

const char *__fastcall InGameStoreHookup::GetStatusString(InGameStoreFence fence)
{
  return ?GetStatusString@InGameStoreHookup@@CAPEBDW4InGameStoreFence@@@Z(fence);
}

/*
==============
InGameStoreHookup::GetProductAvailability
==============
*/

void __fastcall InGameStoreHookup::GetProductAvailability(InGameStoreHookup *this, int controllerIndex, const InGameStoreProduct *product, bool *available, bool *owned)
{
  ?GetProductAvailability@InGameStoreHookup@@UEAAXHPEBUInGameStoreProduct@@PEA_N1@Z(this, controllerIndex, product, available, owned);
}

/*
==============
InGameStoreHookup::TaskCompletion
==============
*/

void __fastcall InGameStoreHookup::TaskCompletion(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?TaskCompletion@InGameStoreHookup@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
InGameStoreHookup::ImageExists
==============
*/

bool __fastcall InGameStoreHookup::ImageExists(InGameStoreHookup *this, const char *name)
{
  return ?ImageExists@InGameStoreHookup@@UEAA_NPEBD@Z(this, name);
}

/*
==============
InGameStoreHookup::GetXuid
==============
*/

unsigned __int64 __fastcall InGameStoreHookup::GetXuid(InGameStoreHookup *this, int controllerIndex)
{
  return ?GetXuid@InGameStoreHookup@@UEAA_KH@Z(this, controllerIndex);
}

/*
==============
InGameStoreHookup::GetControllerIndex
==============
*/

int __fastcall InGameStoreHookup::GetControllerIndex(InGameStoreHookup *this, unsigned __int64 xuid)
{
  return ?GetControllerIndex@InGameStoreHookup@@UEAAH_K@Z(this, xuid);
}

/*
==============
InGameStoreHookup::Error
==============
*/

void __fastcall InGameStoreHookup::Error(InGameStoreHookup *this, int controllerIndex, InGameStoreError error, const char *message)
{
  ?Error@InGameStoreHookup@@UEAAXHW4InGameStoreError@@PEBD@Z(this, controllerIndex, error, message);
}

/*
==============
InGameStoreHookup::FenceBegin
==============
*/

void __fastcall InGameStoreHookup::FenceBegin(InGameStoreHookup *this, int controllerIndex, InGameStoreFence fence)
{
  ?FenceBegin@InGameStoreHookup@@UEAAXHW4InGameStoreFence@@@Z(this, controllerIndex, fence);
}

/*
==============
InGameStoreHookup::AcquireLobbyService
==============
*/

bdLobbyService *__fastcall InGameStoreHookup::AcquireLobbyService(InGameStoreHookup *this, int controllerIndex)
{
  return ?AcquireLobbyService@InGameStoreHookup@@UEAAPEAVbdLobbyService@@H@Z(this, controllerIndex);
}

/*
==============
InGameStoreHookup::Print
==============
*/

void __fastcall InGameStoreHookup::Print(InGameStoreHookup *this, InGameStorePrintType printType, const char *fmt, char *vargs)
{
  ?Print@InGameStoreHookup@@UEAAXW4InGameStorePrintType@@PEBDPEAD@Z(this, printType, fmt, vargs);
}

/*
==============
InGameStoreHookup::InGameStoreHookup
==============
*/
void InGameStoreHookup::InGameStoreHookup(InGameStoreHookup *this)
{
  this->__vftable = (InGameStoreHookup_vtbl *)&InGameStoreHookup::`vftable';
  InGameStore_SetHooks(this);
}

/*
==============
InGameStoreHookup::AcquireLobbyService
==============
*/
bdLobbyService *InGameStoreHookup::AcquireLobbyService(InGameStoreHookup *this, int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v6; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  Instance = DWServicesAccess::GetInstance();
  DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, controllerIndex);
  DWLobbyService::acquireAccess(DWLobbyService);
  m_loginService = DWLobbyService::getLobbyService(DWLobbyService, &result)->m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v6 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    LobbyService = bdLoginResult::getLobbyService(v6);
  }
  else
  {
    LobbyService = NULL;
  }
  DWLobbyService::releaseAccess(result.m_lobbyService);
  return LobbyService;
}

/*
==============
InGameStoreHookup::Error
==============
*/
void InGameStoreHookup::Error(InGameStoreHookup *this, int controllerIndex, InGameStoreError error, const char *message)
{
  ;
}

/*
==============
InGameStoreHookup::FenceBegin
==============
*/
void InGameStoreHookup::FenceBegin(InGameStoreHookup *this, int controllerIndex, InGameStoreFence fence)
{
  const char *StatusString; 
  __int128 v7; 
  __int64 v8; 
  FenceStartParameters v9; 

  if ( fence == INGAMESTORE_FENCE_FETCH_CATALOG )
  {
    Online_Commerce::GetInstance()->m_hasEmptyStore = 0;
  }
  else
  {
    LOBYTE(v7) = 0;
    v8 = 0i64;
    StatusString = InGameStoreHookup::GetStatusString(fence);
    __asm { vmovsd  xmm1, [rsp+68h+var_38] }
    *((_QWORD *)&v7 + 1) = SEH_SafeTranslateString(StatusString);
    __asm
    {
      vmovups xmm0, [rsp+68h+var_48]
      vmovups [rsp+68h+var_28], xmm0
      vmovsd  [rsp+68h+var_18], xmm1
    }
    OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, controllerIndex, &v9);
  }
}

/*
==============
InGameStoreHookup::FenceEnd
==============
*/
void InGameStoreHookup::FenceEnd(InGameStoreHookup *this, int controllerIndex, InGameStoreFence fence, InGameStoreError error, const char *message)
{
  const char *v7; 
  const char *StatusString; 
  __int128 v12; 
  __int64 v13; 
  FenceFailureParameters v14; 

  if ( fence == INGAMESTORE_FENCE_FETCH_CATALOG )
  {
    if ( error )
    {
      if ( error == INGAMESTORE_ERROR_EMPTY_STORE )
        Online_Commerce::GetInstance()->m_hasEmptyStore = 1;
      else
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_COMMERCE_t)*(_QWORD *)&InGameStoreHookup::s_commerceErrorLookup[2 * error], message);
    }
  }
  else if ( error == INGAMESTORE_ERROR_NONE || error == INGAMESTORE_ERROR_PURCHASE_PRODUCT_CANCELED )
  {
    v13 = 0i64;
    StatusString = InGameStoreHookup::GetStatusString(fence);
    __asm { vmovsd  xmm1, [rsp+68h+var_38] }
    *(_QWORD *)&v12 = SEH_SafeTranslateString(StatusString);
    BYTE8(v12) = 0;
    __asm
    {
      vmovups xmm0, [rsp+68h+var_48]
      vmovups xmmword ptr [rsp+68h+var_28.m_statusString], xmm0
      vmovsd  [rsp+68h+var_28.m_channel], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, controllerIndex, (FenceSuccessParameters *)&v14);
  }
  else
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_COMMERCE_t)*(_QWORD *)&InGameStoreHookup::s_commerceErrorLookup[2 * error], message);
    v7 = InGameStoreHookup::GetStatusString(fence);
    v14.m_statusString = SEH_SafeTranslateString(v7);
    memset(&v14.m_failureAction, 0, 17);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+68h+var_28.m_statusString]
      vmovups ymmword ptr [rsp+68h+var_28.m_statusString], ymm0
    }
    OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v14);
  }
}

/*
==============
InGameStoreHookup::GetControllerIndex
==============
*/
int InGameStoreHookup::GetControllerIndex(InGameStoreHookup *this, unsigned __int64 xuid)
{
  XUID *v2; 
  XUID result; 

  v2 = XUID::FromUInt64(&result, xuid);
  return Live_GetControllerIndexFromXuid((XUID)v2->m_id);
}

/*
==============
InGameStoreHookup::GetInstancePtr
==============
*/
InGameStoreHookup *InGameStoreHookup::GetInstancePtr()
{
  return &InGameStoreHookup::s_instance;
}

/*
==============
InGameStoreHookup::GetProductAvailability
==============
*/
void InGameStoreHookup::GetProductAvailability(InGameStoreHookup *this, int controllerIndex, const InGameStoreProduct *product, bool *available, bool *owned)
{
  *owned = 1;
  *available = 1;
}

/*
==============
InGameStoreHookup::GetStatusString
==============
*/
const char *InGameStoreHookup::GetStatusString(InGameStoreFence fence)
{
  __int64 v1; 
  int v4; 
  __int64 v5[6]; 

  v1 = fence;
  v5[0] = (__int64)"MENU/COMMERCE_PURCHASE";
  v5[1] = (__int64)"MENU/COMMERCE_PURCHASE";
  v5[2] = (__int64)"MENU/COMMERCE_PURCHASE";
  v5[3] = (__int64)"MENU/COMMERCE_PURCHASE";
  v5[4] = (__int64)"MENU/COMMERCE_PURCHASE";
  v5[5] = (__int64)"MENU/COMMERCE_PURCHASE";
  if ( (unsigned int)fence >= INGAMESTORE_FENCE_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ingamestore_hookup.cpp", 964, ASSERT_TYPE_ASSERT, "(unsigned)( fence ) < (unsigned)( ( sizeof( *array_counter( pszReference ) ) + 0 ) )", "fence doesn't index pszReference\n\t%i not in [0, %i)", fence, v4) )
      __debugbreak();
  }
  return (const char *)v5[v1];
}

/*
==============
InGameStoreHookup::GetString
==============
*/
const char *InGameStoreHookup::GetString(InGameStoreHookup *this, const char *stringRef)
{
  return SEH_StringEd_GetString(stringRef);
}

/*
==============
InGameStoreHookup::GetUser
==============
*/
Windows::Xbox::System::User *InGameStoreHookup::GetUser(InGameStoreHookup *this, int controllerIndex)
{
  return Live_GetCachedXboxUser(controllerIndex);
}

/*
==============
InGameStoreHookup::GetVersion
==============
*/
int InGameStoreHookup::GetVersion(InGameStoreHookup *this)
{
  return Dvar_GetInt_Internal_DebugName(DVARINT_ingamestore_version, "ingamestore_version");
}

/*
==============
InGameStoreHookup::GetXuid
==============
*/
unsigned __int64 InGameStoreHookup::GetXuid(InGameStoreHookup *this, int controllerIndex)
{
  return Live_GetPlatformUserId(controllerIndex);
}

/*
==============
InGameStoreHookup::ImageExists
==============
*/
bool InGameStoreHookup::ImageExists(InGameStoreHookup *this, const char *name)
{
  return DB_XAssetExists(ASSET_TYPE_IMAGE, name) && !DB_IsXAssetDefault(ASSET_TYPE_IMAGE, name);
}

/*
==============
InGameStoreHookup::OnDownloadProduct
==============
*/
void InGameStoreHookup::OnDownloadProduct(InGameStoreHookup *this, int controllerIndex, const char *productId, InGameStoreError error)
{
  if ( error == INGAMESTORE_ERROR_NONE )
    Content_FindContentPacks(controllerIndex);
}

/*
==============
InGameStoreHookup::OnPurchaseProduct
==============
*/
void InGameStoreHookup::OnPurchaseProduct(InGameStoreHookup *this, int controllerIndex, const char *productId, InGameStoreError error)
{
  __int64 v5; 
  int v6; 
  Online_Loot *Instance; 
  Online_Commerce *v8; 
  Online_Commerce *v9; 
  Online_Commerce *v10; 
  lua_State *v11; 
  LocalClientNum_t ClientFromController; 
  const InGameStoreProduct *Product; 

  v5 = controllerIndex;
  if ( error )
  {
    v6 = (error != INGAMESTORE_ERROR_PURCHASE_PRODUCT_CANCELED) + 2;
  }
  else
  {
    v6 = 1;
    if ( (unsigned int)(Online_Commerce::GetInstance()->m_storeEntitlements[controllerIndex].taskState - 1) > 1 )
    {
      Instance = Online_Loot::GetInstance();
      if ( Online_Loot::HasInventory(Instance, v5) )
      {
        v8 = Online_Commerce::GetInstance();
        Online_Commerce::ResetStoreEntitlements(v8, v5, 0);
        v9 = Online_Commerce::GetInstance();
        Online_Commerce::GetEntitlements(v9, v5);
      }
    }
    v10 = Online_Commerce::GetInstance();
    Online_Commerce::GetCurrency(v10, v5);
    Content_FindContentPacks(v5);
  }
  v11 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v5);
  if ( LUI_BeginEvent(ClientFromController, "ingamestore_purchased_product", v11) )
  {
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableInt("transactionResult", (unsigned int)v6, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  Product = InGameStore_GetProduct(v5, productId);
  if ( Product )
    Online_Telemetry_SendPurchaseInfo(v5, Product, (TransactionResult)v6);
}

/*
==============
InGameStoreHookup::Print
==============
*/
void InGameStoreHookup::Print(InGameStoreHookup *this, InGameStorePrintType printType, const char *fmt, char *vargs)
{
  __int32 v5; 
  char dest[1024]; 

  Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, fmt, vargs);
  if ( printType )
  {
    v5 = printType - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        Com_PrintError(25, (const char *)&queryFormat, dest);
    }
    else
    {
      Com_PrintWarning(25, (const char *)&queryFormat, dest);
    }
  }
  else
  {
    Com_Printf(25, (const char *)&queryFormat, dest);
  }
}

/*
==============
InGameStoreHookup::ReleaseLobbyService
==============
*/
void InGameStoreHookup::ReleaseLobbyService(InGameStoreHookup *this, int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 

  Instance = DWServicesAccess::GetInstance();
  DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, controllerIndex);
  DWLobbyService::releaseAccess(DWLobbyService);
}

/*
==============
InGameStoreHookup::TaskCompletion
==============
*/
void InGameStoreHookup::TaskCompletion(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  InGameStoreHooks::TaskComplete(&InGameStoreHookup::s_instance, pTask->m_appData, taskState == TASKSTATE_SUCCESS);
}

/*
==============
InGameStoreHookup::TaskStart
==============
*/
_BOOL8 InGameStoreHookup::TaskStart(InGameStoreHookup *this, int controllerIndex, void *igsTaskHandle, InGameStoreTask *igsTask)
{
  bool v4; 
  Windows::Foundation::IAsyncInfo *asyncInfo; 
  bdRemoteTask *m_ptr; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( igsTask->platformTask.type == INGAMESTORE_PLATFORM_TASK_BD_REMOTE_TASK )
  {
    pTaskCreateRequest.m_onCompletionCallback = InGameStoreHookup::TaskCompletion;
    pTaskCreateRequest.m_appData = igsTaskHandle;
    if ( &igsTask->platformTask.remoteTask != &pTaskCreateRequest.m_remoteDemonwareTask )
    {
      m_ptr = igsTask->platformTask.remoteTask.m_ptr;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    }
    goto LABEL_11;
  }
  if ( igsTask->platformTask.type == INGAMESTORE_PLATFORM_TASK_ASYNC_INFO )
  {
    pTaskCreateRequest.m_onCompletionCallback = InGameStoreHookup::TaskCompletion;
    pTaskCreateRequest.m_appData = igsTaskHandle;
    asyncInfo = igsTask->platformTask.asyncInfo;
    if ( asyncInfo )
    {
      asyncInfo->__abi_AddRef(igsTask->platformTask.asyncInfo);
      pTaskCreateRequest.m_asyncInfo = asyncInfo;
    }
LABEL_11:
    Instance = TaskManager::GetInstance();
    v4 = TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult);
    goto LABEL_12;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\ingamestore_hookup.cpp", 681, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled InGameStoreTaskType %d", igsTask->platformTask.type) )
    __debugbreak();
  v4 = 0;
LABEL_12:
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
  return v4;
}

