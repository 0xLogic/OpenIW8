/*
==============
InGameStore_Error
==============
*/

bool InGameStore_Error(const int controllerIndex, const InGameStoreError error, const char *const fmt, ...)
{
  return ?InGameStore_Error@@YA_NHW4InGameStoreError@@QEBDZZ(controllerIndex, error, fmt);
}

/*
==============
InGameStore_SetState
==============
*/

void __fastcall InGameStore_SetState(const int controllerIndex, const InGameStoreState state)
{
  ?InGameStore_SetState@@YAXHW4InGameStoreState@@@Z(controllerIndex, state);
}

/*
==============
InGameStore_ReleaseMarketplace
==============
*/

void __fastcall InGameStore_ReleaseMarketplace(const int controllerIndex)
{
  ?InGameStore_ReleaseMarketplace@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_AcquireLobbyService
==============
*/

bdLobbyService *__fastcall InGameStore_AcquireLobbyService(const int controllerIndex)
{
  return ?InGameStore_AcquireLobbyService@@YAPEAVbdLobbyService@@H@Z(controllerIndex);
}

/*
==============
InGameStore_ReleaseObjectStore
==============
*/

void __fastcall InGameStore_ReleaseObjectStore(const int controllerIndex)
{
  ?InGameStore_ReleaseObjectStore@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_Print
==============
*/

void __fastcall InGameStore_Print(const InGameStorePrintType type, const char *const fmt, char *vargs)
{
  ?InGameStore_Print@@YAXW4InGameStorePrintType@@QEBDPEAD@Z(type, fmt, vargs);
}

/*
==============
InGameStore_AcquireMarketingComms
==============
*/

bdMarketingComms *__fastcall InGameStore_AcquireMarketingComms(const int controllerIndex)
{
  return ?InGameStore_AcquireMarketingComms@@YAPEAVbdMarketingComms@@H@Z(controllerIndex);
}

/*
==============
InGameStore_AcquireMarketplace
==============
*/

bdMarketplace *__fastcall InGameStore_AcquireMarketplace(const int controllerIndex)
{
  return ?InGameStore_AcquireMarketplace@@YAPEAVbdMarketplace@@H@Z(controllerIndex);
}

/*
==============
InGameStore_PrintInfo
==============
*/

void InGameStore_PrintInfo(const char *const fmt, ...)
{
  ?InGameStore_PrintInfo@@YAXQEBDZZ(fmt);
}

/*
==============
InGameStore_StartAsyncTask
==============
*/

bool __fastcall InGameStore_StartAsyncTask(const int controllerIndex, const unsigned __int64 co, const InGameStoreTaskID id, winrt::Windows::Foundation::IAsyncInfo asyncInfo)
{
  return ?InGameStore_StartAsyncTask@@YA_NH_KW4InGameStoreTaskID@@UIAsyncInfo@Foundation@Windows@winrt@@@Z(controllerIndex, co, id, asyncInfo);
}

/*
==============
InGameStore_OnPurchaseProduct
==============
*/

void __fastcall InGameStore_OnPurchaseProduct(const int controllerIndex, const char *const productId)
{
  ?InGameStore_OnPurchaseProduct@@YAXHQEBD@Z(controllerIndex, productId);
}

/*
==============
InGameStore_GetConfig
==============
*/

const InGameStoreConfig *__fastcall InGameStore_GetConfig()
{
  return ?InGameStore_GetConfig@@YAPEBUInGameStoreConfig@@XZ();
}

/*
==============
InGameStore_GetState
==============
*/

InGameStoreState __fastcall InGameStore_GetState(const int controllerIndex)
{
  return ?InGameStore_GetState@@YA?AW4InGameStoreState@@H@Z(controllerIndex);
}

/*
==============
InGameStore_AcquireObjectStore
==============
*/

bdObjectStore *__fastcall InGameStore_AcquireObjectStore(const int controllerIndex)
{
  return ?InGameStore_AcquireObjectStore@@YAPEAVbdObjectStore@@H@Z(controllerIndex);
}

/*
==============
InGameStore_ErrorVA
==============
*/

bool __fastcall InGameStore_ErrorVA(const int controllerIndex, const InGameStoreError error, const char *const fmt, char *args)
{
  return ?InGameStore_ErrorVA@@YA_NHW4InGameStoreError@@QEBDPEAD@Z(controllerIndex, error, fmt, args);
}

/*
==============
InGameStore_GetXuid
==============
*/

unsigned __int64 __fastcall InGameStore_GetXuid(const int controllerIndex)
{
  return ?InGameStore_GetXuid@@YA_KH@Z(controllerIndex);
}

/*
==============
InGameStore_GetControllerIndex
==============
*/

int __fastcall InGameStore_GetControllerIndex(const unsigned __int64 xuid)
{
  return ?InGameStore_GetControllerIndex@@YAH_K@Z(xuid);
}

/*
==============
InGameStore_PrintWarning
==============
*/

void InGameStore_PrintWarning(const char *const fmt, ...)
{
  ?InGameStore_PrintWarning@@YAXQEBDZZ(fmt);
}

/*
==============
InGameStore_ImageExists
==============
*/

bool __fastcall InGameStore_ImageExists(const char *name)
{
  return ?InGameStore_ImageExists@@YA_NPEBD@Z(name);
}

/*
==============
InGameStore_GetString
==============
*/

const char *__fastcall InGameStore_GetString(const char *stringRef)
{
  return ?InGameStore_GetString@@YAPEBDPEBD@Z(stringRef);
}

/*
==============
InGameStore_GetUser
==============
*/

winrt::Windows::Xbox::System::User *__fastcall InGameStore_GetUser(winrt::Windows::Xbox::System::User *result, const int controllerIndex)
{
  return ?InGameStore_GetUser@@YA?AUUser@System@Xbox@Windows@winrt@@H@Z(result, controllerIndex);
}

/*
==============
InGameStoreHooks::TaskComplete
==============
*/

bool __fastcall InGameStoreHooks::TaskComplete(InGameStoreHooks *this, void *handle, const bool success)
{
  return ?TaskComplete@InGameStoreHooks@@QEAA_NPEAX_N@Z(this, handle, success);
}

/*
==============
InGameStore_StartRemoteTask
==============
*/

bool __fastcall InGameStore_StartRemoteTask(const int controllerIndex, const unsigned __int64 co, const InGameStoreTaskID id, bdReference<bdRemoteTask> remoteTask)
{
  return ?InGameStore_StartRemoteTask@@YA_NH_KW4InGameStoreTaskID@@V?$bdReference@VbdRemoteTask@@@@@Z(controllerIndex, co, id, remoteTask);
}

/*
==============
InGameStore_GetUserContext
==============
*/

InGameStoreUserContext *__fastcall InGameStore_GetUserContext(const int controllerIndex)
{
  return ?InGameStore_GetUserContext@@YAPEAUInGameStoreUserContext@@H@Z(controllerIndex);
}

/*
==============
InGameStore_OnDownloadProduct
==============
*/

void __fastcall InGameStore_OnDownloadProduct(const int controllerIndex, const char *const productId)
{
  ?InGameStore_OnDownloadProduct@@YAXHQEBD@Z(controllerIndex, productId);
}

/*
==============
InGameStore_GetError
==============
*/

InGameStoreError __fastcall InGameStore_GetError(const int controllerIndex, char *const message, const int messageSize)
{
  return ?InGameStore_GetError@@YA?AW4InGameStoreError@@HQEADH@Z(controllerIndex, message, messageSize);
}

/*
==============
InGameStore_FenceEnd
==============
*/

void __fastcall InGameStore_FenceEnd(const int controllerIndex, const InGameStoreFence fence)
{
  ?InGameStore_FenceEnd@@YAXHW4InGameStoreFence@@@Z(controllerIndex, fence);
}

/*
==============
InGameStore_SetConfig
==============
*/

void __fastcall InGameStore_SetConfig(const InGameStoreConfig *const config)
{
  ?InGameStore_SetConfig@@YAXQEBUInGameStoreConfig@@@Z(config);
}

/*
==============
InGameStore_GetVersion
==============
*/

int __fastcall InGameStore_GetVersion()
{
  return ?InGameStore_GetVersion@@YAHXZ();
}

/*
==============
InGameStore_FindCategory
==============
*/

InGameStoreCategory *__fastcall InGameStore_FindCategory(InGameStoreCatalog *const catalog, const char *const categoryId)
{
  return ?InGameStore_FindCategory@@YAPEAUInGameStoreCategory@@QEAUInGameStoreCatalog@@QEBD@Z(catalog, categoryId);
}

/*
==============
InGameStore_FindProduct
==============
*/

InGameStoreProduct *__fastcall InGameStore_FindProduct(InGameStoreCatalog *const catalog, const char *const productId)
{
  return ?InGameStore_FindProduct@@YAPEAUInGameStoreProduct@@QEAUInGameStoreCatalog@@QEBD@Z(catalog, productId);
}

/*
==============
InGameStore_PrintError
==============
*/

void InGameStore_PrintError(const char *const fmt, ...)
{
  ?InGameStore_PrintError@@YAXQEBDZZ(fmt);
}

/*
==============
InGameStore_ReleaseLobbyService
==============
*/

void __fastcall InGameStore_ReleaseLobbyService(const int controllerIndex)
{
  ?InGameStore_ReleaseLobbyService@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_ClearError
==============
*/

void __fastcall InGameStore_ClearError(const int controllerIndex)
{
  ?InGameStore_ClearError@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_PrintProducts
==============
*/

void __fastcall InGameStore_PrintProducts(const int controllerIndex)
{
  ?InGameStore_PrintProducts@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_ReleaseMarketingComms
==============
*/

void __fastcall InGameStore_ReleaseMarketingComms(const int controllerIndex)
{
  ?InGameStore_ReleaseMarketingComms@@YAXH@Z(controllerIndex);
}

/*
==============
InGameStore_SetHooks
==============
*/

void __fastcall InGameStore_SetHooks(InGameStoreHooks *const hooks)
{
  ?InGameStore_SetHooks@@YAXQEAUInGameStoreHooks@@@Z(hooks);
}

/*
==============
InGameStore_GetProductAvailability
==============
*/

void __fastcall InGameStore_GetProductAvailability(const int controllerIndex, const InGameStoreProduct *product, bool *available, bool *owned)
{
  ?InGameStore_GetProductAvailability@@YAXHPEBUInGameStoreProduct@@PEA_N1@Z(controllerIndex, product, available, owned);
}

/*
==============
InGameStore_FenceBegin
==============
*/

void __fastcall InGameStore_FenceBegin(const int controllerIndex, const InGameStoreFence fence)
{
  ?InGameStore_FenceBegin@@YAXHW4InGameStoreFence@@@Z(controllerIndex, fence);
}

/*
==============
InGameStore_AcquireLobbyService
==============
*/
bdLobbyService *InGameStore_AcquireLobbyService(const int controllerIndex)
{
  bdLobbyService *v2; 
  int v4; 
  int v5; 

  v2 = (bdLobbyService *)s_hooks->AcquireLobbyService(s_hooks, controllerIndex);
  if ( s_acquiredLobbyController != -1 )
  {
    v5 = -1;
    v4 = s_acquiredLobbyController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_utils.cpp", 398, ASSERT_TYPE_ASSERT, "( s_acquiredLobbyController ) == ( -1 )", "%s == %s\n\t%i, %i", "s_acquiredLobbyController", "-1", v4, v5) )
      __debugbreak();
  }
  s_acquiredLobbyController = controllerIndex;
  if ( v2 && bdLobbyService::isConnected(v2) )
    return v2;
  InGameStore_ReleaseLobbyService(controllerIndex);
  return 0i64;
}

/*
==============
InGameStore_AcquireMarketingComms
==============
*/
bdMarketingComms *InGameStore_AcquireMarketingComms(const int controllerIndex)
{
  bdLobbyService *v2; 
  bdMarketingComms *result; 

  v2 = InGameStore_AcquireLobbyService(controllerIndex);
  if ( v2 )
  {
    result = bdLobbyService::getMarketingComms(v2, (const char *)&queryFormat.fmt + 3);
    if ( result )
      return result;
    InGameStore_ReleaseLobbyService(controllerIndex);
  }
  return 0i64;
}

/*
==============
InGameStore_AcquireMarketplace
==============
*/
bdMarketplace *InGameStore_AcquireMarketplace(const int controllerIndex)
{
  bdLobbyService *v2; 
  bdMarketplace *result; 

  v2 = InGameStore_AcquireLobbyService(controllerIndex);
  if ( v2 )
  {
    result = bdLobbyService::getMarketplace(v2, s_config.marketplaceContext);
    if ( result )
      return result;
    InGameStore_ReleaseLobbyService(controllerIndex);
  }
  return 0i64;
}

/*
==============
InGameStore_AcquireObjectStore
==============
*/
bdObjectStore *InGameStore_AcquireObjectStore(const int controllerIndex)
{
  bdLobbyService *v2; 
  bdObjectStore *result; 

  v2 = InGameStore_AcquireLobbyService(controllerIndex);
  if ( v2 )
  {
    result = bdLobbyService::getObjectStore(v2, NULL);
    if ( result )
      return result;
    InGameStore_ReleaseLobbyService(controllerIndex);
  }
  return 0i64;
}

/*
==============
InGameStore_ClearError
==============
*/
void InGameStore_ClearError(const int controllerIndex)
{
  InGameStoreUserContext *UserContext; 

  UserContext = InGameStore_GetUserContext(controllerIndex);
  if ( UserContext )
  {
    UserContext->error = INGAMESTORE_ERROR_NONE;
    UserContext->errorMessage[0] = 0;
  }
}

/*
==============
InGameStore_Error
==============
*/
bool InGameStore_Error(const int controllerIndex, const InGameStoreError error, const char *const fmt, ...)
{
  const char *ErrorName; 
  InGameStoreUserContext *UserContext; 
  char dest[256]; 
  va_list va; 

  va_start(va, fmt);
  Com_vsprintf_truncate(dest, 0x100ui64, 0x100ui64, fmt, va);
  ErrorName = InGameStore_GetErrorName(error);
  InGameStore_PrintInfo("Controller %d: ERROR - %s '%s'\n", (unsigned int)controllerIndex, ErrorName, dest);
  if ( controllerIndex >= 0 )
  {
    UserContext = InGameStore_GetUserContext(controllerIndex);
    if ( UserContext )
    {
      if ( UserContext->error == INGAMESTORE_ERROR_NONE )
      {
        UserContext->error = error;
        Com_vsprintf_truncate(UserContext->errorMessage, 0x100ui64, 0x100ui64, fmt, va);
      }
    }
  }
  s_hooks->Error(s_hooks, controllerIndex, (InGameStoreError)error, dest);
  return 0;
}

/*
==============
InGameStore_ErrorVA
==============
*/
bool InGameStore_ErrorVA(const int controllerIndex, const InGameStoreError error, const char *const fmt, char *args)
{
  const char *ErrorName; 
  InGameStoreUserContext *UserContext; 
  char dest[256]; 

  Com_vsprintf_truncate(dest, 0x100ui64, 0x100ui64, fmt, args);
  ErrorName = InGameStore_GetErrorName(error);
  InGameStore_PrintInfo("Controller %d: ERROR - %s '%s'\n", (unsigned int)controllerIndex, ErrorName, dest);
  if ( controllerIndex >= 0 )
  {
    UserContext = InGameStore_GetUserContext(controllerIndex);
    if ( UserContext )
    {
      if ( UserContext->error == INGAMESTORE_ERROR_NONE )
      {
        UserContext->error = error;
        Com_vsprintf_truncate(UserContext->errorMessage, 0x100ui64, 0x100ui64, fmt, args);
      }
    }
  }
  s_hooks->Error(s_hooks, controllerIndex, (InGameStoreError)error, dest);
  return 0;
}

/*
==============
InGameStore_FenceBegin
==============
*/
void InGameStore_FenceBegin(const int controllerIndex, const InGameStoreFence fence)
{
  __int64 v4[6]; 

  v4[0] = (__int64)"INGAMESTORE_FENCE_NONE";
  v4[1] = (__int64)"INGAMESTORE_FENCE_FETCH_CATALOG";
  v4[2] = (__int64)"INGAMESTORE_FENCE_SELECT_PRODUCT";
  v4[3] = (__int64)"INGAMESTORE_FENCE_PURCHASE_PRODUCT";
  v4[4] = (__int64)"INGAMESTORE_FENCE_PURCHASE_ITEM";
  v4[5] = (__int64)"INGAMESTORE_FENCE_DOWNLOAD_PRODUCT";
  InGameStore_PrintInfo("Controller %d: Fence Begin - %s\n", (unsigned int)controllerIndex, (const char *)v4[fence]);
  s_hooks->FenceBegin(s_hooks, controllerIndex, (InGameStoreFence)fence);
}

/*
==============
InGameStore_FenceEnd
==============
*/
void InGameStore_FenceEnd(const int controllerIndex, const InGameStoreFence fence)
{
  __int64 v2; 
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v5; 
  const char *ErrorName; 
  __int64 v7[6]; 
  char dest[128]; 

  v2 = fence;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  v5 = UserContext;
  if ( UserContext )
  {
    Core_strcpy(dest, 0x80ui64, UserContext->errorMessage);
    LODWORD(v5) = v5->error;
  }
  else
  {
    dest[0] = 0;
  }
  v7[0] = (__int64)"INGAMESTORE_FENCE_NONE";
  v7[1] = (__int64)"INGAMESTORE_FENCE_FETCH_CATALOG";
  v7[2] = (__int64)"INGAMESTORE_FENCE_SELECT_PRODUCT";
  v7[3] = (__int64)"INGAMESTORE_FENCE_PURCHASE_PRODUCT";
  v7[4] = (__int64)"INGAMESTORE_FENCE_PURCHASE_ITEM";
  v7[5] = (__int64)"INGAMESTORE_FENCE_DOWNLOAD_PRODUCT";
  ErrorName = InGameStore_GetErrorName((const InGameStoreError)v5);
  InGameStore_PrintInfo("Controller %d: Fence End   - %s %s '%s'\n", (unsigned int)controllerIndex, (const char *)v7[v2], ErrorName, dest);
  s_hooks->FenceEnd(s_hooks, controllerIndex, (InGameStoreFence)v2, (InGameStoreError)v5, dest);
}

/*
==============
InGameStore_FindCategory
==============
*/
InGameStoreCategory *InGameStore_FindCategory(InGameStoreCatalog *const catalog, const char *const categoryId)
{
  int v4; 
  InGameStoreCatalog *v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  if ( catalog )
  {
    v4 = 0;
    if ( catalog->categoryCount > 0 )
    {
      v5 = catalog;
      do
      {
        v6 = v5->categories[0].categoryId;
        v7 = 0x7FFFFFFFi64;
        v8 = categoryId;
        if ( !v5->categories[0].categoryId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !categoryId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v9 = v6 - categoryId;
        while ( 1 )
        {
          v10 = v8[v9];
          v11 = v7;
          v12 = *v8++;
          --v7;
          if ( !v11 )
            return (InGameStoreCategory *)((char *)catalog + 528 * v4);
          if ( v10 != v12 )
            break;
          if ( !v10 )
            return (InGameStoreCategory *)((char *)catalog + 528 * v4);
        }
        ++v4;
        v5 = (InGameStoreCatalog *)((char *)v5 + 528);
      }
      while ( v4 < catalog->categoryCount );
    }
  }
  return 0i64;
}

/*
==============
InGameStore_FindProduct
==============
*/
InGameStoreProduct *InGameStore_FindProduct(InGameStoreCatalog *const catalog, const char *const productId)
{
  int v4; 
  InGameStoreProduct *products; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  if ( catalog )
  {
    v4 = 0;
    if ( catalog->productCount > 0 )
    {
      products = catalog->products;
      do
      {
        v6 = products->productId;
        v7 = 0x7FFFFFFFi64;
        v8 = productId;
        if ( !products->productId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !productId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v9 = v6 - productId;
        while ( 1 )
        {
          v10 = v8[v9];
          v11 = v7;
          v12 = *v8++;
          --v7;
          if ( !v11 )
            return &catalog->products[v4];
          if ( v10 != v12 )
            break;
          if ( !v10 )
            return &catalog->products[v4];
        }
        ++v4;
        ++products;
      }
      while ( v4 < catalog->productCount );
    }
  }
  return 0i64;
}

/*
==============
InGameStore_GetConfig
==============
*/
InGameStoreConfig *InGameStore_GetConfig()
{
  return &s_config;
}

/*
==============
InGameStore_GetControllerIndex
==============
*/
__int64 InGameStore_GetControllerIndex(const unsigned __int64 xuid)
{
  return ((__int64 (__fastcall *)(InGameStoreHooks *, const unsigned __int64))s_hooks->GetControllerIndex)(s_hooks, xuid);
}

/*
==============
InGameStore_GetError
==============
*/
__int64 InGameStore_GetError(const int controllerIndex, char *const message, const int messageSize)
{
  unsigned __int64 v3; 
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v6; 

  v3 = messageSize;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  v6 = UserContext;
  if ( UserContext )
  {
    if ( message )
      Core_strcpy(message, v3, UserContext->errorMessage);
    return (unsigned int)v6->error;
  }
  else
  {
    if ( message )
      *message = 0;
    return 0i64;
  }
}

/*
==============
InGameStore_GetErrorName
==============
*/
const char *InGameStore_GetErrorName(const InGameStoreError error)
{
  __int64 v2[44]; 

  v2[0] = (__int64)"INGAMESTORE_ERROR_NONE";
  v2[1] = (__int64)"INGAMESTORE_ERROR_PS4_GET_PRODUCTS";
  v2[2] = (__int64)"INGAMESTORE_ERROR_PS4_DISPLAY_CHECKOUT_DIALOG";
  v2[3] = (__int64)"INGAMESTORE_ERROR_PS4_DISPLAY_DOWNLOAD_LIST_DIALOG";
  v2[4] = (__int64)"INGAMESTORE_ERROR_PS4_GET_ADDCONT_INFO_LIST";
  v2[5] = (__int64)"INGAMESTORE_ERROR_PS4_ADDCONT_DELETE";
  v2[6] = (__int64)"INGAMESTORE_ERROR_XB3_GET_CATALOG_ITEM_DETAILS";
  v2[7] = (__int64)"INGAMESTORE_ERROR_XB3_GET_INVENTORY_ITEMS";
  v2[8] = (__int64)"INGAMESTORE_ERROR_XB3_SHOW_PURCHASE";
  v2[9] = (__int64)"INGAMESTORE_ERROR_XB3_SHOW_DETAILS";
  v2[10] = (__int64)"INGAMESTORE_ERROR_XB3_FIND_PACKAGES";
  v2[11] = (__int64)"INGAMESTORE_ERROR_PC_STEAM_START_EXCHANGE_TRANSACTION";
  v2[12] = (__int64)"INGAMESTORE_ERROR_PC_STEAM_PURCHASE_ON_STEAM_INITIALIZE";
  v2[13] = (__int64)"INGAMESTORE_ERROR_PC_STEAM_MICRO_TXN_AUTHORIZATION_RESPONSE";
  v2[14] = (__int64)"INGAMESTORE_ERROR_PC_STEAM_PURCHASE_ON_STEAM_FINALIZE";
  v2[15] = (__int64)"INGAMESTORE_ERROR_UWP_REQUEST_PURCHASE";
  v2[16] = (__int64)"INGAMESTORE_ERROR_UWP_GET_ASSOCIATED_STORE_PRODUCTS";
  v2[17] = (__int64)"INGAMESTORE_ERROR_UWP_REQUEST_DOWNLOAD_AND_INSTALL_STORE_PACKAGES";
  v2[18] = (__int64)"INGAMESTORE_ERROR_UWP_GET_ASSOCIATED_STORE_QUEUE_ITEMS";
  v2[19] = (__int64)"INGAMESTORE_ERROR_PC_BATTLENET_GET_CATALOG_PRODUCTS";
  v2[20] = (__int64)"INGAMESTORE_ERROR_PC_BATTLENET_DISPLAY_CHECKOUT_DIALOG";
  v2[21] = (__int64)"INGAMESTORE_ERROR_PC_BATTLENET_RECONCILIATION";
  v2[22] = (__int64)"INGAMESTORE_ERROR_REQUEST_UNINSTALL_STORE_PACKAGE_BY_STORE_ID";
  v2[23] = (__int64)"INGAMESTORE_ERROR_FETCH_CATALOG";
  v2[24] = (__int64)"INGAMESTORE_ERROR_FETCH_OBJECT_STORE_CONFIG";
  v2[25] = (__int64)"INGAMESTORE_ERROR_FETCH_COMMS_MESSAGES";
  v2[26] = (__int64)"INGAMESTORE_ERROR_FETCH_PRODUCTS_OWNERSHIP";
  v2[27] = (__int64)"INGAMESTORE_ERROR_FETCH_PRODUCTS";
  v2[28] = (__int64)"INGAMESTORE_ERROR_FETCH_SKUS";
  v2[29] = (__int64)"INGAMESTORE_ERROR_FETCH_BALANCES";
  v2[30] = (__int64)"INGAMESTORE_ERROR_FETCH_IMAGES";
  v2[31] = (__int64)"INGAMESTORE_ERROR_ENUMERATE_CONTENT";
  v2[32] = (__int64)"INGAMESTORE_ERROR_DOWNLOAD_PRODUCT";
  v2[33] = (__int64)"INGAMESTORE_ERROR_PURCHASE_ITEM";
  v2[34] = (__int64)"INGAMESTORE_ERROR_PURCHASE_PRODUCT";
  v2[35] = (__int64)"INGAMESTORE_ERROR_PURCHASE_PRODUCT_CANCELED";
  v2[36] = (__int64)"INGAMESTORE_ERROR_INSUFFICIENT_FUNDS";
  v2[37] = (__int64)"INGAMESTORE_ERROR_SELECT_PRODUCT";
  v2[38] = (__int64)"INGAMESTORE_ERROR_DELETE_CONTENT";
  v2[39] = (__int64)"INGAMESTORE_ERROR_EMPTY_STORE";
  v2[40] = (__int64)"INGAMESTORE_ERROR_PC_WEGAME_GET_PRODUCTS";
  v2[41] = (__int64)"INGAMESTORE_ERROR_PC_WEGAME_DISPLAY_PURCHASE_DIALOG";
  v2[42] = (__int64)"INGAMESTORE_ERROR_PC_WEGAME_RECONCILIATION";
  return (const char *)v2[error];
}

/*
==============
InGameStore_GetProductAvailability
==============
*/
void InGameStore_GetProductAvailability(const int controllerIndex, const InGameStoreProduct *product, bool *available, bool *owned)
{
  s_hooks->GetProductAvailability(s_hooks, controllerIndex, product, available, owned);
}

/*
==============
InGameStore_GetState
==============
*/
InGameStoreUserContext *InGameStore_GetState(const int controllerIndex)
{
  InGameStoreUserContext *result; 

  result = InGameStore_GetUserContext(controllerIndex);
  if ( result )
    return (InGameStoreUserContext *)(unsigned int)result->state;
  return result;
}

/*
==============
InGameStore_GetString
==============
*/
const char *InGameStore_GetString(const char *stringRef)
{
  return s_hooks->GetString(s_hooks, stringRef);
}

/*
==============
InGameStore_GetUser
==============
*/
winrt::Windows::Xbox::System::User *InGameStore_GetUser(winrt::Windows::Xbox::System::User *result, __int64 controllerIndex)
{
  Windows::Xbox::System::User *v3; 
  Windows::Xbox::System::User *v4; 
  int v5; 
  unsigned int v6; 
  HRESULT ActivationFactory_0; 
  HRESULT v8; 
  __int64 v9; 
  IUnknown *m_ptr; 
  unsigned int v12; 
  __int64 v13; 
  winrt::Windows::Xbox::System::User *v14; 
  Windows::Xbox::System::User *v15; 
  HSTRING string; 
  HSTRING_HEADER hstringHeader; 

  v13 = -2i64;
  v14 = result;
  v3 = s_hooks->GetUser(s_hooks, controllerIndex);
  v4 = v3;
  v15 = v3;
  m_ptr = NULL;
  if ( v3 )
  {
    v5 = v3->__abi_get_Id(v3, &v12);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = v12;
    if ( __TSS0__1____get_activation_factory_UUser_System_Xbox_Windows_winrt__UIUserStatics_2345__winrt__YA_AUIUserStatics_System_Xbox_Windows_1_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&__TSS0__1____get_activation_factory_UUser_System_Xbox_Windows_winrt__UIUserStatics_2345__winrt__YA_AUIUserStatics_System_Xbox_Windows_1_XZ_4HA);
      if ( __TSS0__1____get_activation_factory_UUser_System_Xbox_Windows_winrt__UIUserStatics_2345__winrt__YA_AUIUserStatics_System_Xbox_Windows_1_XZ_4HA == -1 )
      {
        winrt::impl::get_agile_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>(&`winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory);
        j_atexit(winrt::get_activation_factory_winrt::Windows::Xbox::System::User_winrt::Windows::Xbox::System::IUserStatics__::_2_::_dynamic_atexit_destructor_for__factory__);
        j__Init_thread_footer(&__TSS0__1____get_activation_factory_UUser_System_Xbox_Windows_winrt__UIUserStatics_2345__winrt__YA_AUIUserStatics_System_Xbox_Windows_1_XZ_4HA);
      }
    }
    if ( `winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory.m_ptr )
    {
      m_ptr = `winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory.m_ptr;
      `winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory.m_ptr->AddRef(`winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory.m_ptr);
    }
    else
    {
      WindowsCreateStringReference_0(L"Windows.Xbox.System.User", LODWORD(`winrt::get_activation_factory<winrt::Windows::Xbox::System::User,winrt::Windows::Xbox::System::IUserStatics>'::`2'::factory.m_ptr) + 24, &hstringHeader, &string);
      m_ptr = NULL;
      ActivationFactory_0 = RoGetActivationFactory_0(string, &GUID_b4f23a93_7fc6_4a50_b153_950016389e50, &m_ptr);
      if ( ActivationFactory_0 )
        winrt::impl::throw_hresult(ActivationFactory_0);
    }
    result->m_ptr = NULL;
    v8 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, winrt::Windows::Xbox::System::User *))m_ptr->__vftable[4].Release)(m_ptr, v6, result);
    if ( v8 )
      winrt::impl::throw_hresult(v8);
    v9 = (__int64)m_ptr;
    if ( m_ptr )
    {
      m_ptr = NULL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    }
    v4->__abi_Release(v4);
  }
  else
  {
    result->m_ptr = NULL;
  }
  return result;
}

/*
==============
InGameStore_GetUserContext
==============
*/
InGameStoreUserContext *InGameStore_GetUserContext(const int controllerIndex)
{
  int v4; 
  int v5; 
  int v6; 

  if ( controllerIndex == -1 )
    return (InGameStoreUserContext *)s_userContext;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_utils.cpp", 601, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index INGAMESTORE_MAX_USER_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( (unsigned int)controllerIndex > 7 )
    return 0i64;
  if ( controllerIndex == *(_DWORD *)s_userContext )
    return (InGameStoreUserContext *)s_userContext;
  v6 = *(_DWORD *)s_userContext;
  v5 = controllerIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_utils.cpp", 607, ASSERT_TYPE_ASSERT, "( controllerIndex ) == ( user->controllerIndex )", "%s == %s\n\t%i, %i", "controllerIndex", "user->controllerIndex", v5, v6) )
    __debugbreak();
  if ( controllerIndex == *(_DWORD *)s_userContext )
    return (InGameStoreUserContext *)s_userContext;
  else
    return 0i64;
}

/*
==============
InGameStore_GetVersion
==============
*/
__int64 InGameStore_GetVersion()
{
  return ((__int64 (__fastcall *)(InGameStoreHooks *))s_hooks->GetVersion)(s_hooks);
}

/*
==============
InGameStore_GetXuid
==============
*/
unsigned __int64 InGameStore_GetXuid(const int controllerIndex)
{
  return s_hooks->GetXuid(s_hooks, controllerIndex);
}

/*
==============
InGameStore_ImageExists
==============
*/
__int64 InGameStore_ImageExists(const char *name)
{
  return ((__int64 (__fastcall *)(InGameStoreHooks *, const char *))s_hooks->ImageExists)(s_hooks, name);
}

/*
==============
InGameStore_OnDownloadProduct
==============
*/
void InGameStore_OnDownloadProduct(const int controllerIndex, const char *const productId)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v5; 
  __int64 error; 
  char dest[128]; 

  UserContext = InGameStore_GetUserContext(controllerIndex);
  v5 = UserContext;
  if ( UserContext )
  {
    Core_strcpy(dest, 0x80ui64, UserContext->errorMessage);
    error = (unsigned int)v5->error;
  }
  else
  {
    dest[0] = 0;
    error = 0i64;
  }
  s_hooks->OnDownloadProduct(s_hooks, controllerIndex, productId, (InGameStoreError)error, dest);
}

/*
==============
InGameStore_OnPurchaseProduct
==============
*/
void InGameStore_OnPurchaseProduct(const int controllerIndex, const char *const productId)
{
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v5; 
  __int64 error; 
  char dest[128]; 

  UserContext = InGameStore_GetUserContext(controllerIndex);
  v5 = UserContext;
  if ( UserContext )
  {
    Core_strcpy(dest, 0x80ui64, UserContext->errorMessage);
    error = (unsigned int)v5->error;
  }
  else
  {
    dest[0] = 0;
    error = 0i64;
  }
  s_hooks->OnPurchaseProduct(s_hooks, controllerIndex, productId, (InGameStoreError)error, dest);
}

/*
==============
InGameStore_Print
==============
*/
void InGameStore_Print(const InGameStorePrintType type, const char *const fmt, char *vargs)
{
  s_hooks->Print(s_hooks, (InGameStorePrintType)type, fmt, vargs);
}

/*
==============
InGameStore_PrintError
==============
*/
void InGameStore_PrintError(const char *const fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  s_hooks->Print(s_hooks, INGAMESTORE_PRINT_TYPE_ERROR, fmt, va);
}

/*
==============
InGameStore_PrintInfo
==============
*/
void InGameStore_PrintInfo(const char *const fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  s_hooks->Print(s_hooks, INGAMESTORE_PRINT_TYPE_INFO, fmt, va);
}

/*
==============
InGameStore_PrintProducts
==============
*/
void InGameStore_PrintProducts(const int controllerIndex)
{
  InGameStoreCatalog *Catalog; 
  InGameStoreCatalog *v3; 
  int v4; 
  InGameStoreProductStatus *p_status; 
  const char *v6; 
  const char *v7; 

  Catalog = InGameStore_GetCatalog(controllerIndex);
  v3 = Catalog;
  if ( Catalog )
  {
    v4 = 0;
    if ( Catalog->productCount > 0 )
    {
      p_status = &Catalog->products[0].status;
      do
      {
        v6 = " ENABLED";
        v7 = "  OWNED";
        if ( *((_BYTE *)p_status - 3) )
          v6 = "DISABLED";
        if ( *p_status == INGAMESTORE_PRODUCT_STATUS_NOT_OWNED )
          v7 = "UNOWNED";
        InGameStore_PrintInfo("Controller %d: %17s %s %s %d %s\n", (unsigned int)controllerIndex, *(const char **)(p_status + 17), v7, v6, 0i64, *(const char **)(p_status - 11));
        ++v4;
        p_status += 1054;
      }
      while ( v4 < v3->productCount );
    }
  }
}

/*
==============
InGameStore_PrintWarning
==============
*/
void InGameStore_PrintWarning(const char *const fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  s_hooks->Print(s_hooks, INGAMESTORE_PRINT_TYPE_WARNING, fmt, va);
}

/*
==============
InGameStore_ReleaseLobbyService
==============
*/
void InGameStore_ReleaseLobbyService(const int controllerIndex)
{
  int v2; 
  int v3; 

  s_hooks->ReleaseLobbyService(s_hooks, controllerIndex);
  if ( s_acquiredLobbyController != controllerIndex )
  {
    v3 = controllerIndex;
    v2 = s_acquiredLobbyController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_utils.cpp", 390, ASSERT_TYPE_ASSERT, "( s_acquiredLobbyController ) == ( controllerIndex )", "%s == %s\n\t%i, %i", "s_acquiredLobbyController", "controllerIndex", v2, v3) )
      __debugbreak();
  }
  s_acquiredLobbyController = -1;
}

/*
==============
InGameStore_ReleaseMarketingComms
==============
*/

void __fastcall InGameStore_ReleaseMarketingComms(const int controllerIndex)
{
  InGameStore_ReleaseLobbyService(controllerIndex);
}

/*
==============
InGameStore_ReleaseMarketplace
==============
*/

void __fastcall InGameStore_ReleaseMarketplace(const int controllerIndex)
{
  InGameStore_ReleaseLobbyService(controllerIndex);
}

/*
==============
InGameStore_ReleaseObjectStore
==============
*/

void __fastcall InGameStore_ReleaseObjectStore(const int controllerIndex)
{
  InGameStore_ReleaseLobbyService(controllerIndex);
}

/*
==============
InGameStore_SetConfig
==============
*/
void InGameStore_SetConfig(const InGameStoreConfig *const config)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr cs:s_config.languageCode, ymm0
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups ymmword ptr cs:s_config.objectStorePublisher+8, ymm1
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr cs:s_config.objectStoreClient+8, ymm0
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups ymmword ptr cs:s_config.objectStoreClient+28h, ymm1
    vmovups xmm0, xmmword ptr [rcx+80h]
    vmovups xmmword ptr cs:s_config.objectStoreContext+8, xmm0
    vmovsd  xmm1, qword ptr [rcx+90h]
    vmovsd  qword ptr cs:s_config.marketplaceContext+8, xmm1
  }
}

/*
==============
InGameStore_SetHooks
==============
*/
void InGameStore_SetHooks(InGameStoreHooks *const hooks)
{
  s_hooks = hooks;
}

/*
==============
InGameStore_SetState
==============
*/
void InGameStore_SetState(const int controllerIndex, const InGameStoreState state)
{
  __int64 v2; 
  InGameStoreUserContext *UserContext; 
  InGameStoreUserContext *v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7[5]; 
  __int64 v8[5]; 

  v2 = state;
  UserContext = InGameStore_GetUserContext(controllerIndex);
  v4 = UserContext;
  if ( UserContext )
  {
    v7[0] = (__int64)"IDLE";
    v7[2] = (__int64)"PURCHASING_PRODUCT";
    v8[2] = (__int64)"PURCHASING_PRODUCT";
    v5 = UserContext->state;
    v7[1] = (__int64)"FETCHING_CONFIG";
    v7[3] = (__int64)"PURCHASING_ITEM";
    v8[4] = (__int64)"DOWNLOADING_PRODUCT";
    v8[0] = (__int64)"IDLE";
    v8[3] = (__int64)"PURCHASING_ITEM";
    v7[4] = (__int64)"DOWNLOADING_PRODUCT";
    v6 = (const char *)v7[v2];
    v8[1] = (__int64)"FETCHING_CONFIG";
    InGameStore_PrintInfo("InGameStoreState [%2d:%-19s]->[%2d:%-19s]\n", v5, (const char *)v8[v5], (unsigned int)v2, v6);
    v4->state = v2;
  }
}

/*
==============
InGameStore_StartAsyncTask
==============
*/
_BOOL8 InGameStore_StartAsyncTask(const int controllerIndex, const unsigned __int64 co, const InGameStoreTaskID id, winrt::Windows::Foundation::IAsyncInfo asyncInfo)
{
  IUnknown_vtbl *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  bool v14; 
  IUnknown_vtbl *v15; 
  __int64 v17[2]; 
  __int64 v18; 
  _DWORD v19[4]; 
  __int64 v20; 
  __int64 v21; 
  void *retaddr; 

  _RAX = &retaddr;
  v17[1] = -2i64;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-20h], xmm0
  }
  v19[0] = id;
  v19[2] = 2;
  v10 = asyncInfo.m_ptr->__vftable;
  v11 = 0i64;
  v17[0] = 0i64;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(IUnknown_vtbl *, void *, __int64 *))v10->QueryInterface)(v10, &_uuidof__AUIAsyncInfo_Foundation_Windows__, v17);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v11 = v17[0];
  }
  v18 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  v18 = v11;
  v13 = v21;
  if ( v11 != v21 )
  {
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
      v13 = v21;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
    v21 = v11;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  v14 = s_hooks->TaskStart(s_hooks, controllerIndex, (void *)co, (InGameStoreTask *)v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
  if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
  {
    if ( v20 )
      (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1i64);
    v20 = 0i64;
  }
  v15 = asyncInfo.m_ptr->__vftable;
  if ( asyncInfo.m_ptr->__vftable )
  {
    asyncInfo.m_ptr->__vftable = NULL;
    (*((void (__fastcall **)(IUnknown_vtbl *))v15->QueryInterface + 2))(v15);
  }
  return v14;
}

/*
==============
InGameStore_StartRemoteTask
==============
*/
__int64 InGameStore_StartRemoteTask(const int controllerIndex, const unsigned __int64 co, const InGameStoreTaskID id, bdReference<bdRemoteTask> remoteTask)
{
  bdRemoteTask_vtbl *v9; 
  unsigned __int8 v10; 
  _DWORD v12[4]; 
  bdRemoteTask_vtbl *v13; 
  __int64 v14; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-20h], xmm0
  }
  v12[0] = id;
  v12[2] = 1;
  if ( (bdRemoteTask_vtbl **)remoteTask.m_ptr != &v13 )
  {
    v9 = remoteTask.m_ptr->__vftable;
    v13 = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->getStatus, 1u);
  }
  v10 = ((__int64 (__fastcall *)(InGameStoreHooks *, _QWORD, const unsigned __int64, _DWORD *, __int64))s_hooks->TaskStart)(s_hooks, (unsigned int)controllerIndex, co, v12, -2i64);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  if ( v13 && _InterlockedExchangeAdd((volatile signed __int32 *)&v13->getStatus, 0xFFFFFFFF) == 1 )
  {
    if ( v13 )
      (*(void (__fastcall **)(bdRemoteTask_vtbl *, __int64))v13->~bdReferencable)(v13, 1i64);
    v13 = NULL;
  }
  if ( remoteTask.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remoteTask.m_ptr->getStatus, 0xFFFFFFFF) == 1 )
  {
    if ( remoteTask.m_ptr->__vftable )
      (*(void (__fastcall **)(bdRemoteTask_vtbl *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr->__vftable, 1i64);
    remoteTask.m_ptr->__vftable = NULL;
  }
  return v10;
}

/*
==============
InGameStoreHooks::TaskComplete
==============
*/
bool InGameStoreHooks::TaskComplete(InGameStoreHooks *this, void *handle, const bool success)
{
  bool result; 

  result = InGameStore_IsInitialized();
  if ( result )
    return Co_Resume((unsigned __int64)handle, success) != 0;
  return result;
}

