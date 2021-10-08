/*
==============
Online_Loot::GetInstancePtr
==============
*/

Online_Loot *__fastcall Online_Loot::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Loot@@SAPEAV1@XZ();
}

/*
==============
Online_Loot::ClearResponseClient
==============
*/

void __fastcall Online_Loot::ClearResponseClient(Online_Loot *this, const LocalClientNum_t localClientNum)
{
  ?ClearResponseClient@Online_Loot@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
SetLastFenceOnlineLootErrorCode
==============
*/

void __fastcall SetLastFenceOnlineLootErrorCode(const int controllerIndex, const FenceOnlineLootErrorCode errorCode)
{
  ?SetLastFenceOnlineLootErrorCode@@YAXHW4FenceOnlineLootErrorCode@@@Z(controllerIndex, errorCode);
}

/*
==============
CL_GiveLoot
==============
*/

void __fastcall CL_GiveLoot()
{
  ?CL_GiveLoot@@YAXXZ();
}

/*
==============
Online_Loot::AddToLastLootDrops
==============
*/

void __fastcall Online_Loot::AddToLastLootDrops(Online_Loot *this, const int controllerIndex, const unsigned int itemID)
{
  ?AddToLastLootDrops@Online_Loot@@QEAAXHI@Z(this, controllerIndex, itemID);
}

/*
==============
Online_Loot::GetItemQuantity
==============
*/

unsigned int __fastcall Online_Loot::GetItemQuantity(Online_Loot *this, const int controllerIndex, const unsigned int id)
{
  return ?GetItemQuantity@Online_Loot@@QEAAIHI@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::OnUnregistered
==============
*/

void __fastcall Online_Loot::OnUnregistered(Online_Loot *this)
{
  ?OnUnregistered@Online_Loot@@UEAAXXZ(this);
}

/*
==============
Online_Loot::RequestInventoryForUser
==============
*/

bool __fastcall Online_Loot::RequestInventoryForUser(Online_Loot *this, int controllerIndex)
{
  return ?RequestInventoryForUser@Online_Loot@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::OnDisconnect
==============
*/

void __fastcall Online_Loot::OnDisconnect(Online_Loot *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Loot@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Loot::GetIsNewBitmask
==============
*/

bool __fastcall Online_Loot::GetIsNewBitmask(Online_Loot *this, const int controllerIndex, const int id, DDLState *state, DDLContext *buffer, unsigned int *bitMaskOut, int *rowOut)
{
  return ?GetIsNewBitmask@Online_Loot@@AEAA_NHHPEAUDDLState@@PEAUDDLContext@@AEAIAEAH@Z(this, controllerIndex, id, state, buffer, bitMaskOut, rowOut);
}

/*
==============
Online_Loot::GetItemUnlockQuantity
==============
*/

unsigned int __fastcall Online_Loot::GetItemUnlockQuantity(Online_Loot *this, const int controllerIndex, const unsigned int id)
{
  return ?GetItemUnlockQuantity@Online_Loot@@QEAAIHI@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::CheckChallengeAndGiveLoot
==============
*/

void __fastcall Online_Loot::CheckChallengeAndGiveLoot(Online_Loot *this, const int controllerIndex, bdJSONDeserializer *json, int kind)
{
  ?CheckChallengeAndGiveLoot@Online_Loot@@QEAAXHPEAVbdJSONDeserializer@@H@Z(this, controllerIndex, json, kind);
}

/*
==============
Online_Loot::OnSignedIn
==============
*/

void __fastcall Online_Loot::OnSignedIn(Online_Loot *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Loot@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnGetInventoryComplete
==============
*/

void __fastcall OnGetInventoryComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetInventoryComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Loot::CanBreadcrumb
==============
*/

bool __fastcall Online_Loot::CanBreadcrumb(Online_Loot *this, const int id)
{
  return ?CanBreadcrumb@Online_Loot@@QEAA_NH@Z(this, id);
}

/*
==============
Online_Loot::UpdateItemInInventory
==============
*/

void __fastcall Online_Loot::UpdateItemInInventory(Online_Loot *this, const int controllerIndex, const unsigned int itemID, const int quantity, const bool set)
{
  ?UpdateItemInInventory@Online_Loot@@QEAAXHIH_N@Z(this, controllerIndex, itemID, quantity, set);
}

/*
==============
Online_Loot::ClearResponse
==============
*/

void __fastcall Online_Loot::ClearResponse(Online_Loot *this, const int controllerIndex)
{
  ?ClearResponse@Online_Loot@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::GetContentCreatorCode
==============
*/

bool __fastcall Online_Loot::GetContentCreatorCode(Online_Loot *this, const int controllerIndex, unsigned __int64 *expiry_time, char *code, const int code_length)
{
  return ?GetContentCreatorCode@Online_Loot@@QEAA_NHAEA_KPEADH@Z(this, controllerIndex, expiry_time, code, code_length);
}

/*
==============
OnContentCreatorListDownloadComplete
==============
*/

void __fastcall OnContentCreatorListDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnContentCreatorListDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
Online_Loot::GetInstance
==============
*/

Online_Loot *__fastcall Online_Loot::GetInstance()
{
  return ?GetInstance@Online_Loot@@SAAEAV1@XZ();
}

/*
==============
Online_Loot::MoveResponseToInventory
==============
*/

bool __fastcall Online_Loot::MoveResponseToInventory(Online_Loot *this, const int controllerIndex)
{
  return ?MoveResponseToInventory@Online_Loot@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
SetFenceOnlineLootStatusCode
==============
*/

void __fastcall SetFenceOnlineLootStatusCode(const int controllerIndex, const FenceOnlineLootStatusCode statusCode)
{
  ?SetFenceOnlineLootStatusCode@@YAXHW4FenceOnlineLootStatusCode@@@Z(controllerIndex, statusCode);
}

/*
==============
Online_Loot::RemoveItemFromPlayer
==============
*/

void __fastcall Online_Loot::RemoveItemFromPlayer(Online_Loot *this, const int controllerIndex, const char *type, const char *ref, const char *replacement)
{
  ?RemoveItemFromPlayer@Online_Loot@@QEAAXHPEBD00@Z(this, controllerIndex, type, ref, replacement);
}

/*
==============
Online_Loot::PurchaseItem
==============
*/

void __fastcall Online_Loot::PurchaseItem(Online_Loot *this, const int controllerIndex, const unsigned int item_id, const bool is_purchase_dlc)
{
  ?PurchaseItem@Online_Loot@@QEAAXHI_N@Z(this, controllerIndex, item_id, is_purchase_dlc);
}

/*
==============
Online_Loot::UpdateInventoryFromBundle
==============
*/

void __fastcall Online_Loot::UpdateInventoryFromBundle(Online_Loot *this, const int controllerIndex, const int id, const char *stringTable, const int numItemColumn, const int itemStartColumn, const bool add_bundle_id, const int quantity)
{
  ?UpdateInventoryFromBundle@Online_Loot@@QEAAXHHPEBDHH_NH@Z(this, controllerIndex, id, stringTable, numItemColumn, itemStartColumn, add_bundle_id, quantity);
}

/*
==============
Online_Loot::SetNewUnlock
==============
*/

void __fastcall Online_Loot::SetNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  ?SetNewUnlock@Online_Loot@@QEAAXHH@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::ValidateInventoryItemsToken
==============
*/

unsigned int __fastcall Online_Loot::ValidateInventoryItemsToken(Online_Loot *this, const int controllerIndex, char *const fileName, const bdValidationTokenResult *token, bdValidationTokenResult *validationTokenResult, void (__fastcall *onCompleteCallback)(GenericTask *, eTaskManagerTaskState))
{
  return ?ValidateInventoryItemsToken@Online_Loot@@QEAAIHQEADAEBVbdValidationTokenResult@@PEAV2@P6AXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z@Z(this, controllerIndex, fileName, token, validationTokenResult, onCompleteCallback);
}

/*
==============
Online_Loot::GetNextPageToken
==============
*/

const char *__fastcall Online_Loot::GetNextPageToken(Online_Loot *this, const int controllerIndex)
{
  return ?GetNextPageToken@Online_Loot@@QEAAPEBDH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::DepositCurrency
==============
*/

void __fastcall Online_Loot::DepositCurrency(Online_Loot *this, const int controllerIndex, const int id, const int amount)
{
  ?DepositCurrency@Online_Loot@@QEAAXHHH@Z(this, controllerIndex, id, amount);
}

/*
==============
Online_Loot::AchievementClaimed
==============
*/

void __fastcall Online_Loot::AchievementClaimed(Online_Loot *this, const int controllerIndex, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?AchievementClaimed@Online_Loot@@QEAAXHIQEBVbdMarketplaceInventory@@@Z(this, controllerIndex, numItems, updates);
}

/*
==============
Online_Loot::Uninit
==============
*/

void __fastcall Online_Loot::Uninit(Online_Loot *this)
{
  ?Uninit@Online_Loot@@UEAAXXZ(this);
}

/*
==============
Online_Loot::IsHidden
==============
*/

bool __fastcall Online_Loot::IsHidden(Online_Loot *this, const int id)
{
  return ?IsHidden@Online_Loot@@QEAA_NH@Z(this, id);
}

/*
==============
Online_Loot::ContentCreatorListRetry
==============
*/

void __fastcall Online_Loot::ContentCreatorListRetry(Online_Loot *this)
{
  ?ContentCreatorListRetry@Online_Loot@@QEAAXXZ(this);
}

/*
==============
Online_Loot::SetNumInventoryItems
==============
*/

void __fastcall Online_Loot::SetNumInventoryItems(Online_Loot *this, const int controllerIndex, const int num)
{
  ?SetNumInventoryItems@Online_Loot@@QEAAXHH@Z(this, controllerIndex, num);
}

/*
==============
Online_Loot::OnRegistered
==============
*/

void __fastcall Online_Loot::OnRegistered(Online_Loot *this)
{
  ?OnRegistered@Online_Loot@@UEAAXXZ(this);
}

/*
==============
Online_Loot::HasInventory
==============
*/

bool __fastcall Online_Loot::HasInventory(Online_Loot *this, const int controllerIndex)
{
  return ?HasInventory@Online_Loot@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::DeleteBalances
==============
*/

void __fastcall Online_Loot::DeleteBalances(Online_Loot *this, const int controllerIndex)
{
  ?DeleteBalances@Online_Loot@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Fence_OnlineLootDependenciesUpdated
==============
*/

void __fastcall Fence_OnlineLootDependenciesUpdated(int controllerIndex, bool value)
{
  ?Fence_OnlineLootDependenciesUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
Online_Loot::GetNumInventoryItems
==============
*/

unsigned int __fastcall Online_Loot::GetNumInventoryItems(Online_Loot *this, const int controllerIndex)
{
  return ?GetNumInventoryItems@Online_Loot@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::GetContentCreatorList
==============
*/

void __fastcall Online_Loot::GetContentCreatorList(Online_Loot *this, const int controllerIndex)
{
  ?GetContentCreatorList@Online_Loot@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::UpdateInventoryFromAchievements
==============
*/

void __fastcall Online_Loot::UpdateInventoryFromAchievements(Online_Loot *this, int controllerIndex)
{
  ?UpdateInventoryFromAchievements@Online_Loot@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
ResetLastFenceOnlineLootErrorCode
==============
*/

void __fastcall ResetLastFenceOnlineLootErrorCode(const int controllerIndex)
{
  ?ResetLastFenceOnlineLootErrorCode@@YAXH@Z(controllerIndex);
}

/*
==============
CL_DeleteInventory
==============
*/

void __fastcall CL_DeleteInventory()
{
  ?CL_DeleteInventory@@YAXXZ();
}

/*
==============
Online_Loot::NewOrClearCategory
==============
*/

bool __fastcall Online_Loot::NewOrClearCategory(Online_Loot *this, const int controllerIndex, const char *ref, const bool clear)
{
  return ?NewOrClearCategory@Online_Loot@@QEAA_NHPEBD_N@Z(this, controllerIndex, ref, clear);
}

/*
==============
Online_Loot::OutputCurrentState
==============
*/

void __fastcall Online_Loot::OutputCurrentState(Online_Loot *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Loot@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::Init
==============
*/

bool __fastcall Online_Loot::Init(Online_Loot *this)
{
  return ?Init@Online_Loot@@UEAA_NXZ(this);
}

/*
==============
Online_Loot::ValidateContentCreator
==============
*/

CONTENT_CREATOR_ERROR __fastcall Online_Loot::ValidateContentCreator(Online_Loot *this, const int controllerIndex, const char *code)
{
  return ?ValidateContentCreator@Online_Loot@@QEAA?AW4CONTENT_CREATOR_ERROR@@HPEBD@Z(this, controllerIndex, code);
}

/*
==============
CL_DepositCurrency
==============
*/

void __fastcall CL_DepositCurrency()
{
  ?CL_DepositCurrency@@YAXXZ();
}

/*
==============
Online_Loot::DeleteInventory
==============
*/

void __fastcall Online_Loot::DeleteInventory(Online_Loot *this, const int controllerIndex)
{
  ?DeleteInventory@Online_Loot@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::SetNextPageToken
==============
*/

void __fastcall Online_Loot::SetNextPageToken(Online_Loot *this, const int controllerIndex, const char *token)
{
  ?SetNextPageToken@Online_Loot@@QEAAXHPEBD@Z(this, controllerIndex, token);
}

/*
==============
Online_Loot::IsContentCreatorCodeExpired
==============
*/

bool __fastcall Online_Loot::IsContentCreatorCodeExpired(Online_Loot *this, const int controllerIndex)
{
  return ?IsContentCreatorCodeExpired@Online_Loot@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnPurchaseItemComplete
==============
*/

void __fastcall OnPurchaseItemComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnPurchaseItemComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnConsumeItemComplete
==============
*/

void __fastcall OnConsumeItemComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnConsumeItemComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Loot::IsNewUnlock
==============
*/

bool __fastcall Online_Loot::IsNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  return ?IsNewUnlock@Online_Loot@@QEAA_NHH@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::GetInventoryItem
==============
*/

LootItem *__fastcall Online_Loot::GetInventoryItem(Online_Loot *this, const int controllerIndex, const int index)
{
  return ?GetInventoryItem@Online_Loot@@QEAAPEAULootItem@@HH@Z(this, controllerIndex, index);
}

/*
==============
Online_Loot::GetRangeRef
==============
*/

const char *__fastcall Online_Loot::GetRangeRef(Online_Loot *this, const int id)
{
  return ?GetRangeRef@Online_Loot@@QEAAPEBDH@Z(this, id);
}

/*
==============
Online_Loot::SetHasInventory
==============
*/

void __fastcall Online_Loot::SetHasInventory(Online_Loot *this, const int controllerIndex, const bool has_inventory)
{
  ?SetHasInventory@Online_Loot@@QEAAXH_N@Z(this, controllerIndex, has_inventory);
}

/*
==============
Online_Loot::Consume
==============
*/

void __fastcall Online_Loot::Consume(Online_Loot *this, const int controllerIndex, const unsigned int *item_id, const unsigned __int16 num)
{
  ?Consume@Online_Loot@@QEAAXHPEBIG@Z(this, controllerIndex, item_id, num);
}

/*
==============
Online_Loot::ControllerFrame
==============
*/

void __fastcall Online_Loot::ControllerFrame(Online_Loot *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Loot@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::UpdateInventoryFromDWDurable
==============
*/

void __fastcall Online_Loot::UpdateInventoryFromDWDurable(Online_Loot *this, const int controllerIndex, const int id)
{
  ?UpdateInventoryFromDWDurable@Online_Loot@@QEAAXHH@Z(this, controllerIndex, id);
}

/*
==============
Get_DDL_State
==============
*/

bool __fastcall Get_DDL_State(DDLState *rootState, DDLState *state, char *nav)
{
  return ?Get_DDL_State@@YA_NPEAUDDLState@@0PEAD@Z(rootState, state, nav);
}

/*
==============
Online_Loot::OnSignedOut
==============
*/

void __fastcall Online_Loot::OnSignedOut(Online_Loot *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Loot@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Loot::GiveItemToUser
==============
*/

void __fastcall Online_Loot::GiveItemToUser(Online_Loot *this, int controllerIndex, int id)
{
  ?GiveItemToUser@Online_Loot@@QEAAXHH@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::GetOnlineLootFenceStatusCode
==============
*/

int __fastcall Online_Loot::GetOnlineLootFenceStatusCode(Online_Loot *this, const int controllerIndex)
{
  return ?GetOnlineLootFenceStatusCode@Online_Loot@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_Loot::NewOrClearCategoryByRef
==============
*/

bool __fastcall Online_Loot::NewOrClearCategoryByRef(Online_Loot *this, const int controllerIndex, const char *ref, const bool clear)
{
  return ?NewOrClearCategoryByRef@Online_Loot@@AEAA_NHPEBD_N@Z(this, controllerIndex, ref, clear);
}

/*
==============
Online_Loot::ClearNewUnlock
==============
*/

void __fastcall Online_Loot::ClearNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  ?ClearNewUnlock@Online_Loot@@QEAAXHH@Z(this, controllerIndex, id);
}

/*
==============
Online_Loot::Frame
==============
*/

void __fastcall Online_Loot::Frame(Online_Loot *this)
{
  ?Frame@Online_Loot@@UEAAXXZ(this);
}

/*
==============
Online_Loot::RegisterLuaFunctions
==============
*/

void __fastcall Online_Loot::RegisterLuaFunctions(Online_Loot *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Loot@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnDepositCurrencyComplete
==============
*/

void __fastcall OnDepositCurrencyComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnDepositCurrencyComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Loot::OnRegistered
==============
*/
void Online_Loot::OnRegistered(Online_Loot *this)
{
  __int64 v2; 
  bool v3; 

  Cmd_AddCommandInternal("giveloot", CL_GiveLoot, &CL_GiveLoot_VAR);
  Cmd_AddCommandInternal("deleteinventory", CL_DeleteInventory, &CL_DeleteInventory_VAR);
  Cmd_AddCommandInternal("depositcurrency", CL_DepositCurrency, &CL_DepositCurrency_VAR);
  v2 = 0i64;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      j___report_rangecheckfailure(s_fenceDependenciesMet_1);
      JUMPOUT(0x14267973Di64);
    }
    s_fenceDependenciesMet_1[v2] = 0;
    v3 = (unsigned __int64)++v2 < 8;
  }
  while ( v2 < 8 );
  this->m_inventoryResponse[0] = NULL;
  this->m_inventoryResponse[1] = NULL;
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_ONLINE_LOOT, Fence_OnlineLootDependenciesUpdated);
}

/*
==============
Online_Loot::OnUnregistered
==============
*/
void Online_Loot::OnUnregistered(Online_Loot *this)
{
  Cmd_RemoveCommand("giveloot");
  Cmd_RemoveCommand("deleteinventory");
  Cmd_RemoveCommand("depositcurrency");
}

/*
==============
Online_Loot::Init
==============
*/
char Online_Loot::Init(Online_Loot *this)
{
  int RowCount; 
  int v3; 
  int i; 
  const char *ColumnValueForRow; 
  int v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  int v13; 
  bool *m_gettingInventory; 
  FenceOnlineLootStatusCode *v15; 
  LocalClientNum_t ClientFromController; 
  StringTable *tablePtr; 

  StringTable_GetAsset("loot/loot_master.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 602, ASSERT_TYPE_ASSERT, "(lootMasterTable)", (const char *)&queryFormat, "lootMasterTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  if ( RowCount >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 605, ASSERT_TYPE_ASSERT, "(lootMasterRowCount < 256)", (const char *)&queryFormat, "lootMasterRowCount < MAX_LOOT_RANGES") )
    __debugbreak();
  v3 = 0;
  this->m_numLootRanges = 0;
  for ( i = 0; i < RowCount; ++this->m_numLootRanges )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 0);
    v6 = atoi(ColumnValueForRow);
    v7 = StringTable_GetColumnValueForRow(tablePtr, i, 1);
    v8 = atoi(v7);
    v9 = StringTable_GetColumnValueForRow(tablePtr, i, 2);
    v10 = StringTable_GetColumnValueForRow(tablePtr, i, 4);
    v11 = atoi(v10);
    v12 = StringTable_GetColumnValueForRow(tablePtr, i, 8);
    v13 = atoi(v12);
    this->m_lootRanges[this->m_numLootRanges].start = v6;
    this->m_lootRanges[this->m_numLootRanges].end = v8;
    this->m_lootRanges[this->m_numLootRanges].ref = v9;
    this->m_lootRanges[this->m_numLootRanges].hidden = v11 != 0;
    ++i;
    this->m_lootRanges[this->m_numLootRanges].breadcrumb = v13 != 0;
  }
  m_gettingInventory = this->m_gettingInventory;
  v15 = s_fenceOnlineLootStatus;
  do
  {
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    ++m_gettingInventory;
    ++v3;
    *v15++ = WAITING_TO_BE_DOWNLOADED;
    this->m_hasInventory[ClientFromController] = 0;
    *(m_gettingInventory - 1) = 0;
  }
  while ( v3 < 8 );
  return 1;
}

/*
==============
Online_Loot::Uninit
==============
*/
void Online_Loot::Uninit(Online_Loot *this)
{
  ;
}

/*
==============
Online_Loot::Frame
==============
*/
void Online_Loot::Frame(Online_Loot *this)
{
  ;
}

/*
==============
Online_Loot::ControllerFrame
==============
*/
void Online_Loot::ControllerFrame(Online_Loot *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 ClientFromController; 
  __int64 v5; 
  LocalClientNum_t v6; 

  v2 = controllerIndex;
  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    if ( !this->m_hasInventory[ClientFromController] && !this->m_gettingInventory[v2] && s_fenceDependenciesMet_1[v2] )
    {
      v5 = v2;
      *(_QWORD *)&this->m_getInventoryRetry[v5].m_numRetries = 0i64;
      this->m_getInventoryRetry[v5].m_retrying = 0;
      Com_Printf(25, "GetInventory: For controller %d.\n", (unsigned int)v2);
      this->m_numInventoryItems[ClientFromController] = 0;
      v6 = CL_Mgr_GetClientFromController(v2);
      Core_strcpy(this->m_nextPageToken[v6], 0x41ui64, (const char *)&queryFormat.fmt + 3);
      s_fenceOnlineLootStatus[v2] = 6 - Online_Loot::RequestInventoryForUser(this, v2);
    }
    if ( Online_Retry::ShouldRetry(&this->m_getInventoryRetry[v2]) )
    {
      Com_Printf(25, "GetInventory: For controller %d.\n", (unsigned int)v2);
      s_fenceOnlineLootStatus[v2] = 10 - Online_Loot::RequestInventoryForUser(this, v2);
    }
    if ( s_fenceDependenciesMet_1[v2] )
    {
      if ( !this->m_gettingContentCreatorList && !this->m_hasContentCreatorList )
      {
        *(_QWORD *)&this->m_getContentCreatorListRetry.m_numRetries = 0i64;
        this->m_getContentCreatorListRetry.m_retrying = 0;
        this->m_retryingContentCreatorList = 0;
        Online_Loot::GetContentCreatorList(this, v2);
      }
      if ( Online_Retry::ShouldRetry(&this->m_getContentCreatorListRetry) && !this->m_retryingContentCreatorList )
      {
        Com_Printf(25, "GetContentCreatorList: For controller %d.\n", (unsigned int)v2);
        this->m_retryingContentCreatorList = 1;
        Online_Loot::GetContentCreatorList(this, v2);
      }
    }
  }
}

/*
==============
Online_Loot::OnSignedIn
==============
*/
void Online_Loot::OnSignedIn(Online_Loot *this, const int controllerIndex, GenericSignInState signinState)
{
  __int64 v3; 
  __int64 ClientFromController; 
  const XUID *Xuid; 
  XUID result; 

  v3 = controllerIndex;
  if ( CL_Mgr_IsControllerActive(controllerIndex) && signinState == SignedInToLocalClient )
  {
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    if ( !Live_IsSignedIn(v3) || (Xuid = Live_GetXuid(&result, v3), XUID::operator!=(&this->m_hasInventoryXUID[ClientFromController], Xuid)) )
    {
      s_fenceOnlineLootStatus[v3] = ATTEMPTING_DOWNLOAD_NOT_SIGNED_IN;
      this->m_hasInventory[CL_Mgr_GetClientFromController(v3)] = 0;
    }
  }
  if ( Live_UserIsGuest(v3) && !this->m_hasInventory[CL_Mgr_GetClientFromController(v3)] && CL_Mgr_GetClientFromController(v3) == LOCAL_CLIENT_1 )
  {
    this->m_hasInventory[1] = 1;
    memcpy_0(this->m_inventoryClientItems[1], this->m_inventoryClientItems, sizeof(this->m_inventoryClientItems[1]));
    this->m_numInventoryItems[1] = this->m_numInventoryItems[0];
  }
}

/*
==============
Online_Loot::OnSignedOut
==============
*/
void Online_Loot::OnSignedOut(Online_Loot *this, const int controllerIndex, GenericSignOutState signOutState)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( CL_Mgr_IsControllerActive(controllerIndex) )
  {
    s_fenceOnlineLootStatus[v3] = ATTEMPTING_DOWNLOAD_SERVICES_NOT_READY;
    this->m_hasInventory[CL_Mgr_GetClientFromController(v3)] = 0;
  }
}

/*
==============
Online_Loot::OnDisconnect
==============
*/
void Online_Loot::OnDisconnect(Online_Loot *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Loot::RegisterLuaFunctions
==============
*/
void Online_Loot::RegisterLuaFunctions(Online_Loot *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Loot", Loot_methods_0);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Loot::OutputCurrentState
==============
*/
void Online_Loot::OutputCurrentState(Online_Loot *this, const int controllerIndex)
{
  __int64 ClientFromController; 
  __int64 v7; 
  int v8; 
  LootItem *v9; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Com_Printf(25, "LOOT DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  __asm
  {
    vmovsd  xmm3, cs:__real@4074808000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
  v7 = ClientFromController;
  Com_Printf(25, "-- Contains %d items --\n", (unsigned int)this->m_numInventoryItems[ClientFromController]);
  v8 = 0;
  if ( this->m_numInventoryItems[v7] > 0 )
  {
    v9 = this->m_inventoryClientItems[v7];
    do
    {
      Com_Printf(6, "Inventory item index: %d\n", (unsigned int)v8);
      Com_Printf(6, "m_itemId: %d\n", v9->m_itemId);
      Com_Printf(6, "m_itemQuantity: %d\n", v9->m_itemQuantity);
      ++v8;
      ++v9;
    }
    while ( v8 < this->m_numInventoryItems[v7] );
  }
  Com_Printf(25, "LOOT DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetInventory
==============
*/
__int64 LUI_CoD_LuaCall_GetInventory(lua_State *const luaVM)
{
  unsigned int v4; 
  unsigned int i; 
  __int64 ClientFromController; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.GetInventory( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.GetInventory( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebp, xmm0 }
  v4 = Online_Loot::s_instance.m_numInventoryItems[CL_Mgr_GetClientFromController(_EBP)];
  j_lua_createtable(luaVM, v4, 0);
  for ( i = 0; i < v4; j_lua_rawseti(luaVM, -2, i) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(_EBP);
    if ( i >= 0x3A98 )
    {
      LODWORD(v10) = 15000;
      LODWORD(v9) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 820, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 15000 )", "index doesn't index MAX_INVENTORY_RESULTS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    j_lua_pushinteger(luaVM, Online_Loot::s_instance.m_inventoryClientItems[ClientFromController][i++].m_itemId);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GiveLoot
==============
*/
__int64 LUI_CoD_LuaCall_GiveLoot(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.GiveLoot( <controller><total_loot_items> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.GiveLoot( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.GiveLoot( <id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si r8d, xmm0; id }
  Online_Loot::GiveItemToUser(&Online_Loot::s_instance, _EBX, _ER8);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsOwned
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_IsOwned(lua_State *const luaVM, double _XMM1_8)
{
  const dvar_t *v5; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "Need 2 parameters. USAGE: Loot.IsOwned( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "Param 1 is not a number. USAGE: Loot.IsOwned( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "Param 2 is not a number. USAGE: Loot.IsOwned( <controller><id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si esi, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  v5 = DVARBOOL_unlock_all_loot;
  __asm { vcvttsd2si rbp, xmm0 }
  if ( !DVARBOOL_unlock_all_loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "unlock_all_loot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    Online_Loot::GetItemQuantity(&Online_Loot::s_instance, _ESI, _RBP);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, eax; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PurchaseItem
==============
*/
__int64 LUI_CoD_LuaCall_PurchaseItem(lua_State *const luaVM)
{
  bool v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Loot.PurchaseItem( <controller><item_id><dlc> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.PurchaseItem( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.PurchaseItem( <item_id> )\n");
  if ( j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.PurchaseItem( <dlc> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si esi, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si edi, xmm0 }
  v5 = j_lua_toboolean(luaVM, 3) != 0;
  Com_Printf(25, "PurchaseItem() - Starting to purchase item %d!\n", _EDI);
  Online_Loot::PurchaseItem(&Online_Loot::s_instance, _ESI, _EDI, v5);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeleteInventory
==============
*/
__int64 LUI_CoD_LuaCall_DeleteInventory(lua_State *const luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.DeleteInventory( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.DeleteInventory( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edx, xmm0; controllerIndex }
  Online_Loot::DeleteInventory(&Online_Loot::s_instance, _EDX);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_UseDoubleXPToken
==============
*/
__int64 LUI_CoD_LuaCall_UseDoubleXPToken(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.UseDoubleXPToken( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.UseDoubleXPToken( <controller> )\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetCategoryNewIDs
==============
*/
__int64 LUI_CoD_LuaCall_GetCategoryNewIDs(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetCategoryNewIDs_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsCategoryNew
==============
*/
__int64 LUI_CoD_LuaCall_IsCategoryNew(lua_State *const luaVM)
{
  const char *v4; 
  bool v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.IsCategoryNew( <controller><ref> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.IsCategoryNew( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.IsCategoryNew( <ref> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = Online_Loot::NewOrClearCategory(&Online_Loot::s_instance, _EBX, v4, 0);
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearCategoryNew
==============
*/
__int64 LUI_CoD_LuaCall_ClearCategoryNew(lua_State *const luaVM)
{
  const char *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.ClearCategoryNew( <controller><ref> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.ClearCategoryNew( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.ClearCategoryNew( <ref> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  Online_Loot::NewOrClearCategory(&Online_Loot::s_instance, _EBX, v4, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsLootNew
==============
*/
__int64 LUI_CoD_LuaCall_IsLootNew(lua_State *const luaVM)
{
  int v5; 
  unsigned int v7; 
  unsigned int v8; 
  DDLState state; 
  DDLContext buffer; 
  int rowOut; 
  unsigned int bitMaskOut; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.IsNew( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.IsNew( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.IsNew( <id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  state.isValid = 0;
  state.arrayIndex = -1;
  __asm { vcvttsd2si r8d, xmm0; id }
  v5 = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+98h+state.member], xmm0 }
  if ( Online_Loot::GetIsNewBitmask(&Online_Loot::s_instance, _EBX, _ER8, &state, &buffer, &bitMaskOut, &rowOut) )
  {
    v7 = bitMaskOut;
    LOBYTE(v5) = _bittest((const int *)&v7, (unsigned __int8)(rowOut % 32));
  }
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ClearLootNew
==============
*/
__int64 LUI_CoD_LuaCall_ClearLootNew(lua_State *const luaVM)
{
  unsigned int v6; 
  DDLState state; 
  DDLContext ddlContext; 
  int rowOut; 
  unsigned int bitMaskOut; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.ClearNew( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.ClearNew( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.ClearNew( <id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  state.isValid = 0;
  state.offset = 0;
  __asm { vcvttsd2si r8d, xmm0; id }
  state.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+98h+state.member], xmm0
  }
  if ( Online_Loot::GetIsNewBitmask(&Online_Loot::s_instance, _EBX, _ER8, &state, &ddlContext, &bitMaskOut, &rowOut) )
    DDL_SetInt(&state, &ddlContext, ~(1 << (rowOut % 32)) & bitMaskOut);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetLootAsNew
==============
*/
__int64 LUI_CoD_LuaCall_SetLootAsNew(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.SetAsNew( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.SetAsNew( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.SetAsNew( <id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si r8d, xmm0; itemID }
  Online_Loot::AddToLastLootDrops(&Online_Loot::s_instance, _EBX, _ER8);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_InvalidLootError
==============
*/
__int64 LUI_CoD_LuaCall_InvalidLootError(lua_State *const luaVM)
{
  const dvar_t *v1; 
  unsigned int v3; 
  unsigned int v4; 

  v1 = DVARBOOL_enable_loot_error_popups;
  if ( !DVARBOOL_enable_loot_error_popups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enable_loot_error_popups") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
      j_luaL_error(luaVM, "USAGE: Loot.InvalidLootError( <id> )\n");
    v3 = lui_tointeger32(luaVM, 1);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444B1E88, 22i64, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetRangeDetails
==============
*/
__int64 LUI_CoD_LuaCall_GetRangeDetails(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetRangeDetails_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetNewTournamentRewards
==============
*/
__int64 LUI_CoD_LuaCall_GetNewTournamentRewards(lua_State *const luaVM)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.GetNewTournamentRewards( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.GetNewTournamentRewards( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  v4 = _EAX;
  v5 = Online_Loot::s_instance.m_tournamentRewardAmount[_EAX];
  j_lua_createtable(luaVM, v5, 0);
  v6 = 0;
  if ( v5 )
  {
    v7 = v4;
    do
    {
      j_lua_pushinteger(luaVM, Online_Loot::s_instance.m_tournamentRewards[v7][v6++]);
      j_lua_rawseti(luaVM, -2, v6);
    }
    while ( v6 < v5 );
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ValidateAndStoreContentCreator
==============
*/
__int64 LUI_CoD_LuaCall_ValidateAndStoreContentCreator(lua_State *const luaVM)
{
  const char *v4; 
  CONTENT_CREATOR_ERROR v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Loot.ValidateAndStoreContentCreator( <controller><code> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.ValidateAndStoreContentCreator( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.ValidateAndStoreContentCreator( <code> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = Online_Loot::ValidateContentCreator(&Online_Loot::s_instance, _EBX, v4);
  j_lua_pushinteger(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsContentCreatorCodeExpired
==============
*/
__int64 LUI_CoD_LuaCall_IsContentCreatorCodeExpired(lua_State *const luaVM)
{
  int v5; 
  StatsSource ActiveStatsSource; 
  char *v9; 
  unsigned __int64 UInt64; 
  char *v11; 
  unsigned int v12; 
  int navStringCount; 
  int depth; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[32]; 
  char *path[32]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.IsContentCreatorCodeExpired( <controller><code> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.IsContentCreatorCodeExpired( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm
  {
    vcvttsd2si ebx, xmm0
    vpxor   xmm0, xmm0, xmm0
  }
  v5 = 0;
  toState.isValid = 0;
  toState.offset = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+2D0h+toState.member], xmm0
    vmovdqu xmmword ptr [rsp+2D0h+fromState.member], xmm0
  }
  toState.arrayIndex = -1;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(_EBX);
  if ( CL_PlayerData_GetDDLBuffer(&context, _EBX, ActiveStatsSource, STATSGROUP_NONGAME) )
  {
    _RAX = DDL_GetRootState(&result, context.def);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+2D0h+fromState.isValid], ymm0
    }
    v9 = j_va("nonGameData.influencerCodeTime");
    Com_ParseNavStrings(v9, (const char **)navStrings, 32, &navStringCount);
    if ( DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    {
      UInt64 = DDL_GetUInt64(&toState, &context);
      if ( LiveStorage_GetUTC() > UInt64 )
      {
        v11 = j_va("nonGameData.influencerCode");
        Com_ParseNavStrings(v11, (const char **)path, 32, &depth);
        if ( DDL_MoveToPath(&fromState, &toState, depth, (const char **)path) )
        {
          DDL_SetString(&toState, &context, (const char *)&queryFormat.fmt + 3);
          v5 = 1;
        }
      }
    }
  }
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetContentCreatorCode
==============
*/
__int64 LUI_CoD_LuaCall_GetContentCreatorCode(lua_State *const luaVM)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int64 expiry_time; 
  char code[64]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Loot.GetContentCreatorCode( <controller><code> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.GetContentCreatorCode( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edx, xmm0; controllerIndex }
  if ( Online_Loot::GetContentCreatorCode(&Online_Loot::s_instance, _EDX, &expiry_time, code, 64) )
  {
    j_lua_pushinteger(luaVM, expiry_time);
    j_lua_pushstring(luaVM, code);
    v4 = 2;
  }
  else
  {
    v4 = 0;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
Online_Loot::AchievementClaimed
==============
*/
void Online_Loot::AchievementClaimed(Online_Loot *this, const int controllerIndex, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  unsigned int v7; 
  unsigned int *p_m_itemId; 

  Com_Printf(25, "AchievementClaimed() - controllerIndex %d\n", (unsigned int)controllerIndex);
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "loot_item_gained", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_SetTableInt("num", numItems, LUI_luaVM);
    LUI_BeginTable("items", LUI_luaVM);
    v7 = 0;
    if ( numItems )
    {
      p_m_itemId = &updates->m_itemId;
      do
      {
        ++v7;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, rax; n
        }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, rax; n
        }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_settable(LUI_luaVM, -3);
        p_m_itemId += 58;
      }
      while ( v7 < numItems );
    }
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_Loot::AddToLastLootDrops
==============
*/
void Online_Loot::AddToLastLootDrops(Online_Loot *this, const int controllerIndex, const unsigned int itemID)
{
  __int64 m_numLootRanges; 
  int v8; 
  __int64 v10; 
  int *i; 
  char *v13; 
  unsigned int Int; 
  char *v17; 
  bool v20; 
  int navStringCount; 
  int rowOut; 
  unsigned int bitMaskOut; 
  DDLState fromState; 
  DDLState state; 
  DDLContext context; 
  DDLContext ddlContext; 
  char *navStrings[16]; 

  fromState.isValid = 0;
  fromState.offset = 0;
  m_numLootRanges = this->m_numLootRanges;
  fromState.arrayIndex = -1;
  v8 = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+190h+fromState.member], xmm0
  }
  if ( m_numLootRanges > 0 )
  {
    v10 = 0i64;
    for ( i = &this->m_lootRanges[0].end; (int)itemID < *(i - 1) || (int)itemID > *i; i += 6 )
    {
      ++v8;
      if ( ++v10 >= m_numLootRanges )
        return;
    }
    if ( this->m_lootRanges[v8].breadcrumb )
    {
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+90h+state.member], xmm0
      }
      if ( Online_Loot::GetIsNewBitmask(this, controllerIndex, itemID, &state, &ddlContext, &bitMaskOut, &rowOut) )
        DDL_SetInt(&state, &ddlContext, (1 << (rowOut % 32)) | bitMaskOut);
      if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_COMMON) )
      {
        v13 = j_va("commonData.lastLootDropIndex");
        Com_ParseNavStrings(v13, (const char **)navStrings, 16, &navStringCount);
        _RAX = DDL_GetRootState(&state, context.def);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+190h+fromState.isValid], ymm0
        }
        if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
        {
          if ( DDL_GetType(&fromState) == DDL_INT_TYPE )
          {
            Int = DDL_GetInt(&fromState, &context);
            DDL_SetInt(&fromState, &context, (int)(Int + 1) % 64);
            v17 = j_va("commonData.lastLootDrops.%d", Int);
            Com_ParseNavStrings(v17, (const char **)navStrings, 16, &navStringCount);
            _RAX = DDL_GetRootState(&state, context.def);
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rsp+190h+fromState.isValid], ymm0
            }
            if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
            {
              if ( DDL_GetType(&fromState) == DDL_INT_TYPE )
              {
                DDL_SetInt(&fromState, &context, itemID);
                Com_Printf(25, "AddToLastLootDrops() - ID %d @ Index %d\n", itemID, Int);
                return;
              }
              v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1269, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "lastLootDrops must be an int");
            }
            else
            {
              v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to set lastLootDrops in common data");
            }
          }
          else
          {
            v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1279, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "lastLootDropIndex must be an int");
          }
        }
        else
        {
          v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1284, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to get lastLootDropIndex from common data");
        }
        if ( v20 )
          __debugbreak();
      }
    }
  }
}

/*
==============
CL_DeleteInventory
==============
*/
void CL_DeleteInventory(void)
{
  unsigned int v0; 
  int v1; 
  unsigned int v2; 
  int v3; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 )
  {
    v3 = 8;
    v2 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 143, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, v3) )
      __debugbreak();
  }
  Online_Loot::DeleteInventory(&Online_Loot::s_instance, v1);
  Online_Loot::DeleteBalances(&Online_Loot::s_instance, v1);
}

/*
==============
CL_DepositCurrency
==============
*/
void CL_DepositCurrency(void)
{
  unsigned int v0; 
  int v1; 
  int v2; 
  int v3; 
  unsigned int v4; 
  int v5; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = v0;
    if ( v0 > 8 )
    {
      v5 = 8;
      v4 = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 158, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    v2 = Cmd_ArgInt(1);
    v3 = Cmd_ArgInt(2);
    Online_Loot::DepositCurrency(&Online_Loot::s_instance, v1, v2, v3);
  }
  else
  {
    Com_PrintError(25, "DepositCurrency. Usage: DepositCurrency id amount\n");
  }
}

/*
==============
CL_GiveLoot
==============
*/
void CL_GiveLoot(void)
{
  unsigned int v0; 
  int v1; 
  int v2; 
  unsigned int v3; 
  int v4; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = v0;
    if ( v0 > 8 )
    {
      v4 = 8;
      v3 = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 133, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v3, 0i64, v4) )
        __debugbreak();
    }
    v2 = Cmd_ArgInt(1);
    Online_Loot::GiveItemToUser(&Online_Loot::s_instance, v1, v2);
  }
  else
  {
    Com_Printf(0, "usage: giveloot [id]\n");
  }
}

/*
==============
Online_Loot::CanBreadcrumb
==============
*/
bool Online_Loot::CanBreadcrumb(Online_Loot *this, const int id)
{
  __int64 m_numLootRanges; 
  int v3; 
  __int64 v4; 
  int *i; 

  m_numLootRanges = this->m_numLootRanges;
  v3 = 0;
  if ( m_numLootRanges <= 0 )
    return 0;
  v4 = 0i64;
  for ( i = &this->m_lootRanges[0].end; id < *(i - 1) || id > *i; i += 6 )
  {
    ++v3;
    if ( ++v4 >= m_numLootRanges )
      return 0;
  }
  return this->m_lootRanges[v3].breadcrumb;
}

/*
==============
Online_Loot::CheckChallengeAndGiveLoot
==============
*/
void Online_Loot::CheckChallengeAndGiveLoot(Online_Loot *this, const int controllerIndex, bdJSONDeserializer *json, int kind)
{
  int v4; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  char v15; 
  char v16; 
  Online_Commerce *Instance; 
  __int64 v19; 
  __int64 v20; 
  char v21; 
  char v22; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int ItemQuantity; 
  unsigned int v27; 
  int v28; 
  lua_State *v29; 
  const char *v30; 
  LocalClientNum_t ClientFromController; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int id; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int currencyID; 
  int v41; 
  int quantity; 
  unsigned int v43; 
  int v44; 
  bdJSONDeserializer v45; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v47; 
  __int64 v48; 
  int v49[16]; 
  char v50[32]; 

  v48 = -2i64;
  v4 = kind;
  v44 = kind;
  v6 = controllerIndex;
  v8 = 0i64;
  v9 = 0;
  v41 = 0;
  v10 = 0;
  v38 = 0;
  v37 = 0;
  v39 = 0;
  if ( kind == 22 )
    this->m_tournamentRewardAmount[controllerIndex] = 0;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    v11 = 0;
    v43 = 0;
    if ( value.m_count )
    {
      v12 = 0i64;
      do
      {
        bdJSONDeserializer::bdJSONDeserializer(&v45);
        bdJSONDeserializer::getElementByIndex(&value, v11, &v45);
        bdJSONDeserializer::getString(&v45, "type", v50, 0x20u);
        v13 = 0x7FFFFFFFi64;
        v14 = 0i64;
        while ( 1 )
        {
          v15 = v50[v14];
          v16 = aGrantCurrency[v14++];
          if ( !v13-- )
          {
LABEL_11:
            if ( bdJSONDeserializer::getInt32(&v45, "currencyID", &currencyID) && bdJSONDeserializer::getInt32(&v45, "amount", &v36) )
            {
              Com_Printf(25, "Received %d of ID %d from AE\n", (unsigned int)v36, (unsigned int)currencyID);
              Instance = Online_Commerce::GetInstance();
              Online_Commerce::UpdateCurrency(Instance, v6, currencyID, v36, 0);
              switch ( currencyID )
              {
                case 12:
                  v10 += v36;
                  v38 = v10;
                  break;
                case 11:
                  v37 += v36;
                  break;
                case 20:
                  v39 += v36;
                  break;
              }
            }
            goto LABEL_34;
          }
          if ( v15 != v16 )
            break;
          if ( !v15 )
            goto LABEL_11;
        }
        v19 = 0x7FFFFFFFi64;
        v20 = 0i64;
        do
        {
          v21 = v50[v20];
          v22 = aGrantProduct[v20++];
          if ( !v19-- )
            break;
          if ( v21 != v22 )
            goto LABEL_34;
        }
        while ( v21 );
        bdJSONDeserializer::getInt32(&v45, "productID", &v41);
        bdJSONDeserializer::getObject(&v45, "inventory", &v45);
        bdJSONDeserializer::getArray(&v45, "granted_items", &v45);
        v24 = 0;
        if ( v45.m_count )
        {
          do
          {
            bdJSONDeserializer::bdJSONDeserializer(&v47);
            bdJSONDeserializer::getElementByIndex(&v45, v24, &v47);
            bdJSONDeserializer::getInt32(&v47, (const char *const)&valueOut, (int *)&id);
            bdJSONDeserializer::getInt32(&v47, "quantity", &quantity);
            v25 = id;
            if ( v12 < 16 )
            {
              v49[v12] = id;
              ++v9;
              ++v12;
            }
            ItemQuantity = Online_Loot::GetItemQuantity(this, v6, v25);
            v27 = ItemQuantity;
            if ( v44 == 22 && !ItemQuantity )
            {
              Com_Printf(25, "New Tournament Item %d from Achievement Engine\n", id);
              if ( this->m_tournamentRewardAmount[v6] >= 0x10u )
              {
                LODWORD(v34) = 16;
                LODWORD(v33) = this->m_tournamentRewardAmount[v6];
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1645, ASSERT_TYPE_ASSERT, "(unsigned)( m_tournamentRewardAmount[controllerIndex] ) < (unsigned)( 16 )", "m_tournamentRewardAmount[controllerIndex] doesn't index MAX_TOURNAMENT_REWARDS\n\t%i not in [0, %i)", v33, v34) )
                  __debugbreak();
              }
              this->m_tournamentRewards[v6][this->m_tournamentRewardAmount[v6]++] = id;
            }
            if ( v41 != 100001 && !v27 )
              Online_Loot::AddToLastLootDrops(this, v6, id);
            Com_Printf(25, "Claiming Item %d (with Quantity %d) from Achievement Engine\n", id, (unsigned int)quantity);
            Online_Loot::UpdateItemInInventory(this, v6, id, quantity, 1);
            bdJSONDeserializer::~bdJSONDeserializer(&v47);
            ++v24;
          }
          while ( v24 < v45.m_count );
          v8 = 0i64;
          v11 = v43;
        }
        v10 = v38;
LABEL_34:
        bdJSONDeserializer::~bdJSONDeserializer(&v45);
        v43 = ++v11;
      }
      while ( v11 < value.m_count );
      v4 = v44;
    }
  }
  this->OutputCurrentState(this, v6);
  v28 = v37;
  if ( (v9 || v10 || v37 || v39) && v4 < 35 )
  {
    v29 = LUI_luaVM;
    v30 = s_ae_challenge_type_events[v4];
    ClientFromController = CL_Mgr_GetClientFromController(v6);
    if ( LUI_BeginEvent(ClientFromController, v30, v29) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_SetTableInt("salvage", v38, LUI_luaVM);
      LUI_SetTableInt("keys", v28, LUI_luaVM);
      LUI_SetTableInt("cod_points", v39, LUI_luaVM);
      LUI_BeginTable("items", v9, 0, LUI_luaVM);
      if ( v9 > 0 )
      {
        v32 = 1;
        do
          LUI_SetTableInt(v32++, v49[v8++], LUI_luaVM);
        while ( v8 < v9 );
      }
      LUI_EndTable(LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
Online_Loot::ClearNewUnlock
==============
*/
void Online_Loot::ClearNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  unsigned int v5; 
  DDLState state; 
  DDLContext ddlContext; 
  int v8; 

  state.isValid = 0;
  state.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0A8h+state.member], xmm0 }
  if ( Online_Loot::GetIsNewBitmask(this, controllerIndex, id, &state, &ddlContext, &v5, &v8) )
    DDL_SetInt(&state, &ddlContext, ~(1 << (v8 % 32)) & v5);
}

/*
==============
Online_Loot::ClearResponse
==============
*/
void Online_Loot::ClearResponse(Online_Loot *this, const int controllerIndex)
{
  bdGetInventoryItemInfoResponse **v2; 
  bdGetInventoryItemInfoResponse *v3; 
  __int64 v4; 

  v2 = &this->m_inventoryResponse[CL_Mgr_GetClientFromController(controllerIndex)];
  v3 = *v2;
  if ( *v2 )
  {
    v4 = *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&v3->__vftable + v4 + 8))((__int64)&v3->__vftable + v4 + 8, 1i64);
  }
  *v2 = NULL;
}

/*
==============
Online_Loot::ClearResponseClient
==============
*/
void Online_Loot::ClearResponseClient(Online_Loot *this, const LocalClientNum_t localClientNum)
{
  bdGetInventoryItemInfoResponse **v2; 
  bdGetInventoryItemInfoResponse *v3; 
  __int64 v4; 

  v2 = &this->m_inventoryResponse[localClientNum];
  v3 = *v2;
  if ( *v2 )
  {
    v4 = *(int *)(*((_QWORD *)&v3->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&v3->__vftable + v4 + 8))((__int64)&v3->__vftable + v4 + 8, 1i64);
  }
  *v2 = NULL;
}

/*
==============
Online_Loot::Consume
==============
*/
void Online_Loot::Consume(Online_Loot *this, const int controllerIndex, const unsigned int *item_id, const unsigned __int16 num)
{
  __int64 v6; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *v10; 
  bdRemoteTask *v11; 
  TaskManager *v12; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  unsigned int consumedQuantities; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v18; 
  char buffer[32]; 

  v18 = -2i64;
  v6 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(buffer, 0x19u);
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, v6);
  v10 = (TaskCreateRequest *)DWMarketplace::consumeInventoryItems(MarketPlace, &result, buffer, item_id, &consumedQuantities, num, &this->m_auditLogResult[v6]);
  if ( v10 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v11 = *(bdRemoteTask **)&v10->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v6;
    pTaskCreateRequest.m_onCompletionCallback = OnConsumeItemComplete;
    v12 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v12, &pTaskCreateRequest, &pTaskCreateResult) )
      Com_Printf(25, "Consume() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v6);
    else
      Com_PrintError(25, "Consume() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v6);
  }
  else
  {
    Com_PrintError(25, "bdMarketplace::consumeInventoryItems failed for controllerIndex %d\n", (unsigned int)v6);
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

/*
==============
Online_Loot::ContentCreatorListRetry
==============
*/
void Online_Loot::ContentCreatorListRetry(Online_Loot *this)
{
  Online_Retry::SetNextRetry(&this->m_getContentCreatorListRetry);
  this->m_retryingContentCreatorList = 0;
}

/*
==============
Online_Loot::DeleteBalances
==============
*/
void Online_Loot::DeleteBalances(Online_Loot *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  Online_Commerce *v5; 
  XUID result; 
  bdReference<bdRemoteTask> v7; 
  unsigned __int64 userID; 
  unsigned __int64 UniversalId; 
  unsigned __int64 v10[2]; 
  bdUserAccountID other; 
  bdUserAccountID v12; 
  bdUserAccountID v13; 
  bdMarketplacePlayerCurrency ptr; 
  bdUserAccountID v15; 
  char v16; 
  int v17; 
  bdUserAccountID v18; 
  char v19; 
  int v20; 

  v10[1] = -2i64;
  `eh vector vbase constructor iterator'(&ptr, 0x80ui64, 3ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::`vbase destructor);
  Live_GetXuid(&result, controllerIndex);
  ptr.m_currencyId = 11;
  ptr.m_value = 0;
  userID = XUID::GetUniversalId(&result);
  bdUserAccountID::bdUserAccountID(&other, &userID);
  bdUserAccountID::operator=((bdUserAccountID *)ptr._bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  v16 = 12;
  v17 = 0;
  UniversalId = XUID::GetUniversalId(&result);
  bdUserAccountID::bdUserAccountID(&v12, &UniversalId);
  bdUserAccountID::operator=(&v15, &v12);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v12.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v12.gap38);
  v19 = 20;
  v20 = 0;
  v10[0] = XUID::GetUniversalId(&result);
  bdUserAccountID::bdUserAccountID(&v13, v10);
  bdUserAccountID::operator=(&v18, &v13);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v13.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v13.gap38);
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, controllerIndex);
  DWMarketplace::setBalance(MarketPlace, &v7, &ptr, 3u);
  if ( v7.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v7.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v7.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v7.m_ptr->~bdReferencable)(v7.m_ptr, 1i64);
  v5 = Online_Commerce::GetInstance();
  Online_Commerce::GetCurrency(v5, controllerIndex);
  `eh vector destructor iterator'(&ptr, 0x80ui64, 3ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::`vbase destructor);
}

/*
==============
Online_Loot::DeleteInventory
==============
*/
void Online_Loot::DeleteInventory(Online_Loot *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  bdReference<bdRemoteTask> result; 

  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, controllerIndex);
  DWMarketplace::deleteInventory(MarketPlace, &result);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  this->m_numInventoryItems[CL_Mgr_GetClientFromController(controllerIndex)] = 0;
}

/*
==============
Online_Loot::DepositCurrency
==============
*/
void Online_Loot::DepositCurrency(Online_Loot *this, const int controllerIndex, const int id, const int amount)
{
  unsigned __int8 v5; 
  XUID *Xuid; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *v10; 
  bdRemoteTask *v11; 
  TaskManager *v12; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v15; 
  unsigned __int64 userID; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v18; 
  XUID result; 
  bdUserAccountID other; 
  bdMarketplacePlayerCurrency ptr; 

  v18 = -2i64;
  v5 = id;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  `eh vector vbase constructor iterator'(&ptr, 0x80ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::bdMarketplacePlayerCurrency, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::`vbase destructor);
  Xuid = Live_GetXuid(&result, controllerIndex);
  userID = XUID::GetUniversalId(Xuid);
  bdUserAccountID::bdUserAccountID(&other, &userID);
  bdUserAccountID::operator=((bdUserAccountID *)ptr._bytes_20, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  ptr.m_currencyId = v5;
  ptr.m_value = amount;
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, controllerIndex);
  v10 = (TaskCreateRequest *)DWMarketplace::deposit(MarketPlace, &v15, &ptr, 1u);
  if ( v10 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v11 = *(bdRemoteTask **)&v10->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  }
  if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = OnDepositCurrencyComplete;
    v12 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v12, &pTaskCreateRequest, &pTaskCreateResult) )
      Com_Printf(25, "DepositCurrency() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)controllerIndex);
    else
      Com_PrintError(25, "DepositCurrency() - CreateTask failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
  }
  else
  {
    Com_PrintError(25, "bdMarketplace::deposit failed for controllerIndex %d\n", (unsigned int)controllerIndex);
  }
  `eh vector destructor iterator'(&ptr, 0x80ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplacePlayerCurrency::`vbase destructor);
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

/*
==============
Fence_OnlineLootDependenciesUpdated
==============
*/
void Fence_OnlineLootDependenciesUpdated(int controllerIndex, bool value)
{
  s_fenceDependenciesMet_1[controllerIndex] = value;
}

/*
==============
Online_Loot::GetContentCreatorCode
==============
*/
char Online_Loot::GetContentCreatorCode(Online_Loot *this, const int controllerIndex, unsigned __int64 *expiry_time, char *code, const int code_length)
{
  StatsSource ActiveStatsSource; 
  char *v13; 
  const char *String; 
  char *v15; 
  int navStringCount; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[32]; 

  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+1F0h+fromState.member], xmm0
    vmovdqu xmmword ptr [rsp+1F0h+toState.member], xmm0
  }
  if ( !code && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 2147, ASSERT_TYPE_ASSERT, "(code)", (const char *)&queryFormat, "code") )
    __debugbreak();
  *expiry_time = 0i64;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0;
  _RAX = DDL_GetRootState(&result, context.def);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1F0h+fromState.isValid], ymm0
  }
  v13 = j_va("nonGameData.influencerCode");
  Com_ParseNavStrings(v13, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 0;
  String = DDL_GetString(&toState, &context);
  Core_strcpy_truncate(code, code_length, String);
  v15 = j_va("nonGameData.influencerCodeTime");
  Com_ParseNavStrings(v15, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 0;
  *expiry_time = DDL_GetUInt64(&toState, &context);
  return 1;
}

/*
==============
Online_Loot::GetContentCreatorList
==============
*/
void Online_Loot::GetContentCreatorList(Online_Loot *this, const int controllerIndex)
{
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v4; 
  const XUID *v5; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  OnlineStorage *v8; 
  XUID result; 
  OnlineStorageTask v10; 
  bdObjectStoreObject object; 

  this->m_gettingContentCreatorListController = controllerIndex;
  TaskCreateRequest::TaskCreateRequest(&v10.taskCreateRequest);
  fileEntries = v10.fileEntries;
  v4 = 16i64;
  do
  {
    OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
    --v4;
  }
  while ( v4 );
  memset_0(&v10, 0, sizeof(v10));
  v10.fileEntryCount = 0;
  *(_WORD *)&v10.operation = 257;
  v10.priority[0] = 3;
  v10.controllerIndex = this->m_gettingContentCreatorListController;
  v10.onTaskCompleteCallback = OnContentCreatorListDownloadComplete;
  bdObjectStoreGetPublisherObjectsResponse::reset(&this->m_getContentCreatorListResponse);
  v10.getPublisherStorageResponse = &this->m_getContentCreatorListResponse;
  Core_strcpy_truncate(v10.fileEntries[v10.fileEntryCount].fileName, 0x40ui64, "contentCreatorList.txt");
  v5 = XUID::NullXUID(&result);
  XUID::operator=(&v10.fileEntries[v10.fileEntryCount].xuid, v5);
  Instance = OnlineStorage::GetInstance();
  CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
  v10.fileEntries[v10.fileEntryCount].platform[0] = CurrentPlatform;
  bdObjectStoreObject::bdObjectStoreObject(&object, this->m_contentCreatorList, 0x1000ui64);
  bdObjectStoreErrorWrappedObject::reset(&this->m_responseObjects[v10.fileEntryCount]);
  bdObjectStoreErrorWrappedObject::setObject(&this->m_responseObjects[v10.fileEntryCount++], &object);
  bdMemory::deallocate(object.m_metadata.m_tags.m_data);
  object.m_metadata.m_tags.m_data = NULL;
  *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
  bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
  bdObjectStoreGetPublisherObjectsResponse::setObjectList(v10.getPublisherStorageResponse, this->m_responseObjects, v10.fileEntryCount);
  v8 = OnlineStorage::GetInstance();
  if ( OnlineStorage::EnqueueTask(v8, &v10) )
  {
    this->m_gettingContentCreatorList = 1;
  }
  else
  {
    Online_Retry::SetNextRetry(&this->m_getContentCreatorListRetry);
    this->m_retryingContentCreatorList = 0;
  }
  TaskCreateRequest::~TaskCreateRequest(&v10.taskCreateRequest);
}

/*
==============
Online_Loot::GetInstance
==============
*/
Online_Loot *Online_Loot::GetInstance()
{
  return &Online_Loot::s_instance;
}

/*
==============
Online_Loot::GetInstancePtr
==============
*/
Online_Loot *Online_Loot::GetInstancePtr()
{
  return &Online_Loot::s_instance;
}

/*
==============
Online_Loot::GetInventoryItem
==============
*/
LootItem *Online_Loot::GetInventoryItem(Online_Loot *this, const int controllerIndex, const int index)
{
  __int64 v4; 
  __int64 ClientFromController; 
  int v7; 
  int v8; 

  v4 = index;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( (unsigned int)v4 >= 0x3A98 )
  {
    v8 = 15000;
    v7 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 820, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 15000 )", "index doesn't index MAX_INVENTORY_RESULTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return &this->m_inventoryClientItems[ClientFromController][v4];
}

/*
==============
Online_Loot::GetIsNewBitmask
==============
*/
char Online_Loot::GetIsNewBitmask(Online_Loot *this, const int controllerIndex, const int id, DDLState *state, DDLContext *buffer, unsigned int *bitMaskOut, int *rowOut)
{
  __int64 m_numLootRanges; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int *p_end; 
  const char *ref; 
  const char *v18; 
  const char *v19; 
  int v20; 
  int v21; 
  char v22; 
  char *v23; 
  int v25; 
  int Int; 
  char *fmt; 
  int navStringCount; 
  StringTable *tablePtr; 
  unsigned int *v31; 
  DDLState result; 
  char *navStrings[6]; 

  _R14 = state;
  v31 = bitMaskOut;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1296, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1297, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  m_numLootRanges = this->m_numLootRanges;
  v12 = 0i64;
  v13 = 0;
  if ( m_numLootRanges <= 0 )
    goto LABEL_12;
  v14 = 0i64;
  p_end = &this->m_lootRanges[0].end;
  while ( id < *(p_end - 1) || id > *p_end )
  {
    ++v13;
    ++v14;
    p_end += 6;
    if ( v14 >= m_numLootRanges )
      goto LABEL_12;
  }
  ref = this->m_lootRanges[v13].ref;
  if ( !ref )
  {
LABEL_12:
    Com_PrintError(25, "Trying to set New on loot ID %d, which isn't in loot_master\n", (unsigned int)id);
    return 0;
  }
  v18 = j_va("loot/%s_ids.csv", ref);
  StringTable_GetAsset(v18, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1308, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  v19 = j_va("%d", (unsigned int)id);
  v20 = StringTable_LookupRowNumForValue(tablePtr, 0, v19);
  *rowOut = v20;
  v21 = v20;
  if ( v20 == -1 )
  {
    Com_PrintError(25, "Trying to set New on loot ID %d, which isn't in the %s ids table\n", (unsigned int)id, ref);
    return 0;
  }
  if ( v20 > 1024 )
  {
    if ( v20 >= 2048 )
    {
      LODWORD(fmt) = v20;
      Com_PrintError(25, "Trying to modify New on undefined tertiary unlock table for %s, loot ID %d, rowNum %d\n", ref, (unsigned int)id, fmt);
      return 0;
    }
    if ( strcmp_0(ref, "playercards") )
    {
      while ( 1 )
      {
        v22 = ref[v12++];
        if ( v22 != aEmblems[v12 - 1] )
          break;
        if ( v12 == 8 )
        {
          ref = "emblems2";
          goto LABEL_27;
        }
      }
      LODWORD(fmt) = v21;
      Com_PrintError(25, "Trying to modify New on undefined secondary unlock table for %s, loot ID %d, rowNum %d\n", ref, (unsigned int)id, fmt);
      return 0;
    }
    ref = "playercards2";
LABEL_27:
    v21 -= 1024;
    *rowOut = v21;
  }
  if ( !CL_PlayerData_GetDDLBuffer(buffer, controllerIndex, STATS_ONLINE, STATSGROUP_NONGAME) )
    return 0;
  v23 = j_va("nonGameData.isNew.%s.unlocks.%d", ref, (unsigned int)(v21 / 32));
  Com_ParseNavStrings(v23, (const char **)navStrings, 16, &navStringCount);
  _RAX = DDL_GetRootState(&result, buffer->def);
  v25 = navStringCount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14], ymm0
  }
  if ( !DDL_MoveToPath(_R14, _R14, v25, (const char **)navStrings) || DDL_GetType(_R14) != DDL_INT_TYPE )
    return 0;
  Int = DDL_GetInt(_R14, buffer);
  *v31 = Int;
  return 1;
}

/*
==============
Online_Loot::GetItemQuantity
==============
*/
__int64 Online_Loot::GetItemQuantity(Online_Loot *this, const int controllerIndex, const unsigned int id)
{
  unsigned int v5; 
  int *v6; 
  __int64 i; 
  __int64 ClientFromController; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  v5 = 0;
  v6 = &this->m_numInventoryItems[CL_Mgr_GetClientFromController(controllerIndex)];
  if ( *v6 <= 0 )
    return 0i64;
  for ( i = 0i64; ; ++i )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( v5 >= 0x3A98 )
    {
      LODWORD(v12) = 15000;
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 820, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 15000 )", "index doesn't index MAX_INVENTORY_RESULTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v9 = i + 15000 * ClientFromController;
    if ( Online_Loot::s_instance.m_inventoryClientItems[0][v9].m_itemId == id )
      break;
    if ( (int)++v5 >= *v6 )
      return 0i64;
  }
  return (unsigned int)Online_Loot::s_instance.m_numInventoryItems[2 * v9 - 59999];
}

/*
==============
Online_Loot::GetItemUnlockQuantity
==============
*/
unsigned int Online_Loot::GetItemUnlockQuantity(Online_Loot *this, const int controllerIndex, const unsigned int id)
{
  const dvar_t *v3; 

  v3 = DVARBOOL_unlock_all_loot;
  if ( !DVARBOOL_unlock_all_loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "unlock_all_loot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 1;
  else
    return Online_Loot::GetItemQuantity(&Online_Loot::s_instance, controllerIndex, id);
}

/*
==============
Online_Loot::GetNextPageToken
==============
*/
char *Online_Loot::GetNextPageToken(Online_Loot *this, const int controllerIndex)
{
  return this->m_nextPageToken[CL_Mgr_GetClientFromController(controllerIndex)];
}

/*
==============
Online_Loot::GetNumInventoryItems
==============
*/
__int64 Online_Loot::GetNumInventoryItems(Online_Loot *this, const int controllerIndex)
{
  return (unsigned int)this->m_numInventoryItems[CL_Mgr_GetClientFromController(controllerIndex)];
}

/*
==============
Online_Loot::GetOnlineLootFenceStatusCode
==============
*/
__int64 Online_Loot::GetOnlineLootFenceStatusCode(Online_Loot *this, const int controllerIndex)
{
  return (unsigned int)(s_fenceOnlineLootLastErrorCode[controllerIndex] + 100 * s_fenceOnlineLootStatus[controllerIndex]);
}

/*
==============
Online_Loot::GetRangeRef
==============
*/
const char *Online_Loot::GetRangeRef(Online_Loot *this, const int id)
{
  __int64 m_numLootRanges; 
  int v3; 
  __int64 v4; 
  int *i; 

  m_numLootRanges = this->m_numLootRanges;
  v3 = 0;
  if ( m_numLootRanges <= 0 )
    return 0i64;
  v4 = 0i64;
  for ( i = &this->m_lootRanges[0].end; id < *(i - 1) || id > *i; i += 6 )
  {
    ++v3;
    if ( ++v4 >= m_numLootRanges )
      return 0i64;
  }
  return this->m_lootRanges[v3].ref;
}

/*
==============
Get_DDL_State
==============
*/
bool Get_DDL_State(DDLState *rootState, DDLState *state, char *nav)
{
  int navStringCount[4]; 
  char *navStrings[32]; 

  Com_ParseNavStrings(nav, (const char **)navStrings, 32, navStringCount);
  return DDL_MoveToPath(rootState, state, navStringCount[0], (const char **)navStrings);
}

/*
==============
Online_Loot::GiveItemToUser
==============
*/
void Online_Loot::GiveItemToUser(Online_Loot *this, int controllerIndex, int id)
{
  OnlineChallengesManager *Instance; 
  unsigned __int64 timestamp; 
  const char *eventParams; 
  const XUID *Xuid; 
  XUID result; 

  if ( !Live_UserIsGuest(controllerIndex) )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
    {
      Instance = OnlineChallengesManager::GetInstance();
      timestamp = LiveStorage_GetUTC();
      eventParams = j_va("%d,", (unsigned int)id);
      Xuid = Live_GetXuid(&result, controllerIndex);
      OnlineChallengesManager::RecordEventForPlayer(Instance, controllerIndex, (const XUID)Xuid->m_id, "give_loot", eventParams, timestamp);
    }
    else
    {
      Com_PrintError(25, "GiveItemToUser() - Called when controlled isn't signed into Demonware yet - controllerIndex %d!\n", (unsigned int)controllerIndex);
    }
  }
}

/*
==============
Online_Loot::HasInventory
==============
*/
_BOOL8 Online_Loot::HasInventory(Online_Loot *this, const int controllerIndex)
{
  return this->m_hasInventory[CL_Mgr_GetClientFromController(controllerIndex)];
}

/*
==============
Online_Loot::IsContentCreatorCodeExpired
==============
*/
char Online_Loot::IsContentCreatorCodeExpired(Online_Loot *this, const int controllerIndex)
{
  StatsSource ActiveStatsSource; 
  char *v8; 
  unsigned __int64 UInt64; 
  char *v10; 
  int navStringCount; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[32]; 

  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+1D0h+toState.member], xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+1D0h+fromState.member], xmm0 }
  toState.arrayIndex = -1;
  fromState.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 0;
  _RAX = DDL_GetRootState(&result, context.def);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1D0h+fromState.isValid], ymm0
  }
  v8 = j_va("nonGameData.influencerCodeTime");
  Com_ParseNavStrings(v8, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 0;
  UInt64 = DDL_GetUInt64(&toState, &context);
  if ( LiveStorage_GetUTC() <= UInt64 )
    return 0;
  v10 = j_va("nonGameData.influencerCode");
  Com_ParseNavStrings(v10, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 0;
  DDL_SetString(&toState, &context, (const char *)&queryFormat.fmt + 3);
  return 1;
}

/*
==============
Online_Loot::IsHidden
==============
*/
bool Online_Loot::IsHidden(Online_Loot *this, const int id)
{
  __int64 m_numLootRanges; 
  int v3; 
  __int64 v4; 
  int *i; 

  m_numLootRanges = this->m_numLootRanges;
  v3 = 0;
  if ( m_numLootRanges <= 0 )
    return 0;
  v4 = 0i64;
  for ( i = &this->m_lootRanges[0].end; id < *(i - 1) || id > *i; i += 6 )
  {
    ++v3;
    if ( ++v4 >= m_numLootRanges )
      return 0;
  }
  return this->m_lootRanges[v3].hidden;
}

/*
==============
Online_Loot::IsNewUnlock
==============
*/
unsigned __int8 Online_Loot::IsNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  unsigned int v5; 
  unsigned int v7; 
  DDLState v8; 
  DDLContext buffer; 
  int v10; 

  v8.isValid = 0;
  v8.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v8.arrayIndex = -1;
  __asm { vmovdqu [rsp+0A8h+var_50], xmm0 }
  if ( !Online_Loot::GetIsNewBitmask(this, controllerIndex, id, &v8, &buffer, &v7, &v10) )
    return 0;
  v5 = v7;
  return _bittest((const int *)&v5, (unsigned __int8)(v10 % 32));
}

/*
==============
LUI_CoD_LuaCall_GetCategoryNewIDs_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetCategoryNewIDs_impl(lua_State *const luaVM)
{
  lua_State *v2; 
  int v5; 
  const char *v6; 
  const char *v7; 
  int v8; 
  int v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  bool v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  int *v17; 
  int i; 
  char *v19; 
  int v22; 
  int v23; 
  const char *ColumnValueForRow; 
  int v25; 
  int RowCount; 
  int controllerIndex; 
  int navStringCount; 
  StringTable *tablePtr; 
  const char *v31; 
  const char *v32; 
  lua_State *v33; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  int v37[32]; 
  char *navStrings[16]; 

  v2 = luaVM;
  v33 = luaVM;
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(v2, "USAGE: Loot.GetCategoryNewIDs( <controller><ref> )\n");
  if ( !j_lua_isnumber(v2, 1) )
    j_luaL_error(v2, "USAGE: Loot.GetCategoryNewIDs( <controller> )\n");
  if ( !j_lua_isstring(v2, 2) )
    j_luaL_error(v2, "USAGE: Loot.GetCategoryNewIDs( <ref> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(v2, 1);
  __asm { vcvttsd2si eax, xmm0 }
  controllerIndex = _EAX;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v5 = 0;
  v31 = j_lua_tolstring(v2, 2, NULL);
  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+200h+fromState.member], xmm0 }
  v6 = v31;
  fromState.arrayIndex = -1;
  v7 = j_va("loot/%s_ids.csv", v31);
  StringTable_GetAsset(v7, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 2349, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  v8 = RowCount;
  v9 = 0;
  j_lua_createtable(v2, 0, 0);
  v10 = 0;
  if ( !strcmp_0(v6, "playercards") )
  {
    v32 = "playercards2";
  }
  else
  {
    v11 = 0i64;
    while ( 1 )
    {
      v12 = v6[v11++];
      v13 = v12 == aEmblems[v11 - 1];
      if ( v12 != aEmblems[v11 - 1] )
        break;
      if ( v11 == 8 )
      {
        v13 = v12 == aEmblems[7];
        break;
      }
    }
    v14 = "emblems2";
    if ( !v13 )
      v14 = NULL;
    v32 = v14;
    v8 = RowCount;
  }
  v15 = 1024;
  if ( v8 < 1024 )
    v15 = v8;
  while ( 1 )
  {
    memset_0(v37, 0, sizeof(v37));
    if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_NONGAME) )
    {
      v16 = v31;
      v17 = v37;
      for ( i = 0; i < 32; ++i )
      {
        v19 = j_va("nonGameData.isNew.%s.unlocks.%d", v16, (unsigned int)i);
        Com_ParseNavStrings(v19, (const char **)navStrings, 16, &navStringCount);
        _RAX = DDL_GetRootState(&result, context.def);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+200h+fromState.isValid], ymm0
        }
        if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
          *v17 = DDL_GetInt(&fromState, &context);
        ++v17;
      }
      v2 = v33;
      v6 = v31;
      v8 = RowCount;
    }
    if ( v5 < v15 )
      break;
LABEL_34:
    v6 = v32;
    v10 = 1;
    v31 = v32;
    v15 = v8;
    v32 = NULL;
    if ( !v31 )
      return 1i64;
  }
  while ( 1 )
  {
    v22 = v5;
    if ( v10 )
      v22 = v5 - 1024;
    if ( v22 / 32 >= 32 )
      break;
    v23 = v37[v22 / 32];
    if ( _bittest(&v23, (unsigned __int8)(v5 % 32)) )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
      v25 = atoi(ColumnValueForRow);
      j_lua_pushinteger(v2, v25);
      j_lua_rawseti(v2, -2, ++v9);
    }
    if ( ++v5 >= v15 )
      goto LABEL_34;
  }
  Com_PrintError(25, "There are too many loot items of type %s. So ignoring row %d and onward\n", v6, (unsigned int)v5);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRangeDetails_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetRangeDetails_impl(lua_State *const luaVM)
{
  int v6; 
  unsigned int v7; 
  unsigned int i; 
  __int64 ClientFromController; 
  __int64 v10; 
  unsigned int m_itemId; 
  __int64 v13; 
  __int64 v14; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Loot.GetRangeDetails( <controller><start><end> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Loot.GetRangeDetails( <controller> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Loot.GetRangeDetails( <start> )\n");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Loot.GetRangeDetails( <end> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si r15d, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si r13, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
  __asm { vcvttsd2si r12, xmm0 }
  v6 = 1;
  v7 = Online_Loot::s_instance.m_numInventoryItems[CL_Mgr_GetClientFromController(_ER15)];
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("items", LUI_luaVM);
  for ( i = 0; i < v7; ++i )
  {
    ClientFromController = CL_Mgr_GetClientFromController(_ER15);
    if ( i >= 0x3A98 )
    {
      LODWORD(v14) = 15000;
      LODWORD(v13) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 820, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 15000 )", "index doesn't index MAX_INVENTORY_RESULTS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v10 = (int)i + 15000 * ClientFromController;
    m_itemId = Online_Loot::s_instance.m_inventoryClientItems[0][v10].m_itemId;
    if ( m_itemId >= (unsigned int)_R13 && m_itemId <= (unsigned int)_R12 )
    {
      LUI_BeginTable(v6, luaVM);
      LUI_SetTableInt("ID", Online_Loot::s_instance.m_inventoryClientItems[0][v10].m_itemId, luaVM);
      LUI_SetTableInt("Amount", Online_Loot::s_instance.m_inventoryClientItems[0][v10].m_itemQuantity, luaVM);
      LUI_EndTable(LUI_luaVM);
      ++v6;
    }
  }
  LUI_EndTable(LUI_luaVM);
  return 1i64;
}

/*
==============
Online_Loot::MoveResponseToInventory
==============
*/
char Online_Loot::MoveResponseToInventory(Online_Loot *this, const int controllerIndex)
{
  bdGetInventoryItemInfoResponse *v3; 
  int m_size; 
  unsigned int v5; 
  bdMarketplaceInventoryItemInfoV2_vtbl **v6; 
  int v7; 
  const char *m_nextPageToken; 
  __int64 v9; 
  LocalClientNum_t ClientFromController; 

  v3 = this->m_inventoryResponse[CL_Mgr_GetClientFromController(controllerIndex)];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 219, ASSERT_TYPE_ASSERT, "(response)", (const char *)&queryFormat, "response") )
    __debugbreak();
  m_size = v3->m_inventoryItems.m_size;
  v5 = 0;
  if ( m_size > 0 )
  {
    v6 = &v3->m_inventoryItems.m_elements[0].__vftable + 2;
    do
    {
      bdHandleAssert(v5 < v3->m_inventoryItems.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceInventoryItemInfoV2,1000>::operator []", 0x4Du, "i is out of range");
      v7 = *((_DWORD *)v6 + 1);
      bdHandleAssert(v5 < v3->m_inventoryItems.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceInventoryItemInfoV2,1000>::operator []", 0x4Du, "i is out of range");
      Online_Loot::UpdateItemInInventory(&Online_Loot::s_instance, controllerIndex, *(_DWORD *)v6, v7, 1);
      ++v5;
      v6 += 122;
    }
    while ( (int)v5 < m_size );
  }
  m_nextPageToken = v3->m_nextPageToken;
  v9 = -1i64;
  do
    ++v9;
  while ( m_nextPageToken[v9] );
  if ( !(_DWORD)v9 )
    return 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Core_strcpy(Online_Loot::s_instance.m_nextPageToken[ClientFromController], 0x41ui64, m_nextPageToken);
  return 1;
}

/*
==============
Online_Loot::NewOrClearCategory
==============
*/
bool Online_Loot::NewOrClearCategory(Online_Loot *this, const int controllerIndex, const char *ref, const bool clear)
{
  const char *v8; 
  int RowCount; 
  int v11; 
  const char *ColumnValueForRow; 
  unsigned int v13; 
  const char *v14; 
  __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  const char *v23; 
  StringTable *tablePtr; 

  v8 = "camo";
  if ( I_strcmp(ref, "attachment") && I_strcmp(ref, "camo") )
    return Online_Loot::NewOrClearCategoryByRef(this, controllerIndex, ref, clear);
  StringTable_GetAsset("loot/loot_master.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1426, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  v11 = StringTable_LookupRowNumForValue(tablePtr, 2, "tracker") + 1;
  if ( v11 >= RowCount )
    return 0;
  while ( 1 )
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v11, 3);
    v13 = I_atoui(ColumnValueForRow);
    if ( v13 == 9 )
    {
      v14 = "attachment";
      v15 = 0x7FFFFFFFi64;
      if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v16 = v14[ref - "attachment"];
        v17 = v15;
        v18 = *v14++;
        --v15;
        if ( !v17 )
          break;
        if ( v16 != v18 )
          goto LABEL_24;
      }
      while ( v16 );
      goto LABEL_23;
    }
    if ( v13 == 12 )
      break;
LABEL_25:
    if ( ++v11 >= RowCount )
      return 0;
  }
  v19 = 0x7FFFFFFFi64;
  if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v20 = v8[ref - "camo"];
    v21 = v19;
    v22 = *v8++;
    --v19;
    if ( !v21 )
      break;
    if ( v20 != v22 )
      goto LABEL_24;
  }
  while ( v20 );
LABEL_23:
  v23 = StringTable_GetColumnValueForRow(tablePtr, v11, 2);
  if ( !Online_Loot::NewOrClearCategoryByRef(this, controllerIndex, v23, clear) )
  {
LABEL_24:
    v8 = "camo";
    goto LABEL_25;
  }
  return 1;
}

/*
==============
Online_Loot::NewOrClearCategoryByRef
==============
*/
bool Online_Loot::NewOrClearCategoryByRef(Online_Loot *this, const int controllerIndex, const char *ref, const bool clear)
{
  int i; 
  char *v9; 
  const char *v12; 
  __int64 v13; 
  char v14; 
  char *v15; 
  int navStringCount; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[16]; 

  fromState.isValid = 0;
  fromState.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+140h+fromState.member], xmm0 }
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, STATS_ONLINE, STATSGROUP_NONGAME) )
    return 0;
  for ( i = 0; i < 32; ++i )
  {
    v9 = j_va("nonGameData.isNew.%s.unlocks.%d", ref, (unsigned int)i);
    Com_ParseNavStrings(v9, (const char **)navStrings, 16, &navStringCount);
    _RAX = DDL_GetRootState(&result, context.def);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+140h+fromState.isValid], ymm0
    }
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
    {
      if ( clear )
      {
        DDL_SetInt(&fromState, &context, 0);
      }
      else if ( DDL_GetInt(&fromState, &context) )
      {
        return 1;
      }
    }
    if ( !strcmp_0(ref, "playercards") )
    {
      v12 = "playercards2";
LABEL_13:
      v15 = j_va("nonGameData.isNew.%s.unlocks.%d", v12, (unsigned int)i);
      Com_ParseNavStrings(v15, (const char **)navStrings, 16, &navStringCount);
      _RAX = DDL_GetRootState(&result, context.def);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+140h+fromState.isValid], ymm0
      }
      if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
      {
        if ( clear )
        {
          DDL_SetInt(&fromState, &context, 0);
        }
        else if ( DDL_GetInt(&fromState, &context) )
        {
          return 1;
        }
      }
    }
    else
    {
      v13 = 0i64;
      while ( 1 )
      {
        v14 = ref[v13++];
        if ( v14 != aEmblems[v13 - 1] )
          break;
        if ( v13 == 8 )
        {
          v12 = "emblems2";
          goto LABEL_13;
        }
      }
    }
  }
  return clear;
}

/*
==============
OnConsumeItemComplete
==============
*/
void OnConsumeItemComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "consumeInventoryItems - Error %d (%zu)\n", (unsigned int)ErrorCode, TransactionID);
    }
  }
  else
  {
    Com_Printf(25, "consumeInventoryItems complete\n");
  }
}

/*
==============
OnContentCreatorListDownloadComplete
==============
*/
void OnContentCreatorListDownloadComplete(OnlineStorageTask *storageTask)
{
  bdObjectStoreErrorWrappedObject *ObjectList; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1975, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1976, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  if ( storageTask->status == (AERIAL|FREE) )
  {
    ObjectList = bdObjectStoreGetPublisherObjectsResponse::getObjectList(storageTask->getPublisherStorageResponse);
    if ( !bdObjectStoreErrorWrappedObject::hasError(ObjectList) )
    {
      Com_Printf(25, "Content Creator List download successful.\n");
      Online_Loot::s_instance.m_hasContentCreatorList = 1;
      Online_Loot::s_instance.m_gettingContentCreatorList = 0;
      goto LABEL_13;
    }
    Com_Printf(25, "Content Creator List download succeeded, but file had errors.\n");
  }
  else
  {
    Com_Printf(25, "Content Creator List download failed.\n");
  }
  Online_Retry::SetNextRetry(&Online_Loot::s_instance.m_getContentCreatorListRetry);
  Online_Loot::s_instance.m_retryingContentCreatorList = 0;
LABEL_13:
  if ( !storageTask->getPublisherStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1997, ASSERT_TYPE_ASSERT, "(storageTask->getPublisherStorageResponse)", (const char *)&queryFormat, "storageTask->getPublisherStorageResponse") )
    __debugbreak();
  storageTask->getPublisherStorageResponse = NULL;
}

/*
==============
OnDepositCurrencyComplete
==============
*/
void OnDepositCurrencyComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  Online_Commerce *Instance; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "deposit - Error %d %zu.\n", (unsigned int)ErrorCode, TransactionID);
    }
  }
  else
  {
    Com_Printf(25, "deposit complete %d.\n", (unsigned int)pTask->m_controllerIndex);
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::GetCurrency(Instance, pTask->m_controllerIndex);
  }
}

/*
==============
OnGetInventoryComplete
==============
*/
void OnGetInventoryComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  __int32 v5; 
  Online_ErrorReporting *InstancePtr; 
  bdLobbyErrorCode ErrorCode; 
  const char *v8; 
  Online_ErrorReporting *v9; 
  bdLobbyErrorCode v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  bdGetInventoryItemInfoResponse *v15; 
  __int64 v16; 
  __int64 v17; 
  bdGetInventoryItemInfoResponse *v18; 
  int m_size; 
  unsigned int v20; 
  bdMarketplaceInventoryItemInfoV2_vtbl **v21; 
  int v22; 
  __int64 v23; 
  LocalClientNum_t ClientFromController; 
  __int64 v25; 
  bdGetInventoryItemInfoResponse **v26; 
  bdGetInventoryItemInfoResponse *v27; 
  __int64 v28; 
  LocalClientNum_t outLocalClientNum; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 240, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  if ( taskState )
  {
    v5 = taskState - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
        v8 = j_va("%d", (unsigned int)ErrorCode);
        Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_COMMERCE_t)0x8000000, v8);
        Com_PrintError(25, "GetInventory- Error getting inventory for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        Online_Retry::SetNextRetry(&Online_Loot::s_instance.m_getInventoryRetry[pTask->m_controllerIndex]);
        s_fenceOnlineLootLastErrorCode[pTask->m_controllerIndex] = PTRDIFF;
      }
    }
    else
    {
      v9 = Online_ErrorReporting::GetInstancePtr();
      v10 = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      v11 = j_va("%d", (unsigned int)v10);
      Online_ErrorReporting::ReportError(v9, (Online_Error_CAT_COMMERCE_t)4, v11);
      Com_PrintError(25, "GetInventory- Error getting inventory for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      Online_Retry::SetNextRetry(&Online_Loot::s_instance.m_getInventoryRetry[pTask->m_controllerIndex]);
      s_fenceOnlineLootLastErrorCode[pTask->m_controllerIndex] = SIZE_T;
    }
LABEL_24:
    v26 = &Online_Loot::s_instance.m_inventoryResponse[CL_Mgr_GetClientFromController(m_controllerIndex)];
    v27 = *v26;
    if ( *v26 )
    {
      v28 = *(int *)(*((_QWORD *)&v27->__vftable + 1) + 4i64);
      (**(void (__fastcall ***)(__int64, __int64))((char *)&v27->__vftable + v28 + 8))((__int64)&v27->__vftable + v28 + 8, 1i64);
    }
    *v26 = NULL;
    return;
  }
  if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) )
  {
    v18 = Online_Loot::s_instance.m_inventoryResponse[CL_Mgr_GetClientFromController(m_controllerIndex)];
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 219, ASSERT_TYPE_ASSERT, "(response)", (const char *)&queryFormat, "response") )
      __debugbreak();
    m_size = v18->m_inventoryItems.m_size;
    v20 = 0;
    if ( m_size > 0 )
    {
      v21 = &v18->m_inventoryItems.m_elements[0].__vftable + 2;
      do
      {
        bdHandleAssert(v20 < v18->m_inventoryItems.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceInventoryItemInfoV2,1000>::operator []", 0x4Du, "i is out of range");
        v22 = *((_DWORD *)v21 + 1);
        bdHandleAssert(v20 < v18->m_inventoryItems.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdMarketplaceInventoryItemInfoV2,1000>::operator []", 0x4Du, "i is out of range");
        Online_Loot::UpdateItemInInventory(&Online_Loot::s_instance, m_controllerIndex, *(_DWORD *)v21, v22, 1);
        ++v20;
        v21 += 122;
      }
      while ( (int)v20 < m_size );
    }
    v23 = -1i64;
    do
      ++v23;
    while ( v18->m_nextPageToken[v23] );
    if ( (_DWORD)v23 )
    {
      ClientFromController = CL_Mgr_GetClientFromController(m_controllerIndex);
      Core_strcpy(Online_Loot::s_instance.m_nextPageToken[ClientFromController], 0x41ui64, v18->m_nextPageToken);
      Com_Printf(25, "GetInventory: For controller %d.\n", (unsigned int)m_controllerIndex);
      Online_Loot::ClearResponse(&Online_Loot::s_instance, m_controllerIndex);
      v25 = m_controllerIndex;
      *(_QWORD *)&Online_Loot::s_instance.m_getInventoryRetry[v25].m_numRetries = 0i64;
      Online_Loot::s_instance.m_getInventoryRetry[v25].m_retrying = 0;
      s_fenceOnlineLootStatus[m_controllerIndex] = 8 - Online_Loot::RequestInventoryForUser(&Online_Loot::s_instance, m_controllerIndex);
      return;
    }
    Online_Loot::s_instance.m_gettingInventory[m_controllerIndex] = 0;
    Online_Loot::s_instance.m_hasInventory[CL_Mgr_GetClientFromController(m_controllerIndex)] = 1;
    Online_Loot::s_instance.OutputCurrentState(&Online_Loot::s_instance, m_controllerIndex);
    s_fenceOnlineLootStatus[m_controllerIndex] = DOWNLOAD_SUCCEEDED;
    s_fenceOnlineLootLastErrorCode[m_controllerIndex] = NONE;
    goto LABEL_24;
  }
  v12 = m_controllerIndex;
  outLocalClientNum = Online_Loot::s_instance.m_requestClient[m_controllerIndex];
  v13 = m_controllerIndex;
  Com_Printf(25, "GetInventory: Client %d (Controller %d) has been deactivated. Ignoring inventory call.\n", (unsigned int)outLocalClientNum, (unsigned int)m_controllerIndex);
  v14 = outLocalClientNum;
  v15 = Online_Loot::s_instance.m_inventoryResponse[outLocalClientNum];
  if ( v15 )
  {
    v16 = *(int *)(*((_QWORD *)&v15->__vftable + 1) + 4i64);
    (**(void (__fastcall ***)(__int64, __int64))((char *)&v15->__vftable + v16 + 8))((__int64)&v15->__vftable + v16 + 8, 1i64);
  }
  Online_Loot::s_instance.m_inventoryResponse[v14] = NULL;
  v17 = v13;
  Online_Loot::s_instance.m_gettingInventory[v13] = 0;
  s_fenceOnlineLootLastErrorCode[v12] = LONG_DOUBLE;
  *(_QWORD *)&Online_Loot::s_instance.m_getInventoryRetry[v17].m_numRetries = 0i64;
  Online_Loot::s_instance.m_getInventoryRetry[v17].m_retrying = 0;
}

/*
==============
OnPurchaseItemComplete
==============
*/
void OnPurchaseItemComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  lua_State *v3; 
  LocalClientNum_t ClientFromController; 
  lua_State *v5; 
  bdLobbyErrorCode ErrorCode; 
  __int64 m_controllerIndex; 
  __int64 v8; 
  Online_Commerce *Instance; 
  lua_State *v10; 
  LocalClientNum_t v11; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "purchaseSkus - Error.\n");
      v3 = LUI_luaVM;
      ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
      if ( LUI_BeginEvent(ClientFromController, "loot_item_transaction_error", v3) )
      {
        v5 = LUI_luaVM;
        ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
        LUI_SetTableInt("errorCode", ErrorCode, v5);
        LUI_EndEvent(LUI_luaVM);
      }
    }
  }
  else
  {
    Com_Printf(25, "purchaseSkus complete %d.\n", (unsigned int)pTask->m_controllerIndex);
    m_controllerIndex = pTask->m_controllerIndex;
    v8 = Online_Loot::s_instance.m_currentPurchaseID[m_controllerIndex];
    if ( Online_Loot::s_instance.m_isPurchaseDLC[m_controllerIndex] )
    {
      Online_Loot::UpdateInventoryFromDWDurable(&Online_Loot::s_instance, m_controllerIndex, v8);
    }
    else if ( (unsigned int)(v8 - 400000) <= 0x270F || (unsigned int)(v8 - 440000) <= 0x270F || (unsigned int)(v8 - 460000) <= 0x270F )
    {
      Online_Loot::UpdateInventoryFromBundle(&Online_Loot::s_instance, m_controllerIndex, v8, "loot/bundle_ids.csv", 13, 14, 1, 1);
    }
    else if ( (unsigned int)(v8 - 430000) <= 0x270F || (unsigned int)(v8 - 450000) <= 0x270F )
    {
      Online_Loot::UpdateInventoryFromBundle(&Online_Loot::s_instance, m_controllerIndex, v8, "loot/battlepass_ids.csv", 10, 11, 0, 1);
    }
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::GetCurrency(Instance, pTask->m_controllerIndex);
    Online_Telemetry_SendLootPurchaseEvent(pTask->m_controllerIndex, v8);
    v10 = LUI_luaVM;
    v11 = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    if ( LUI_BeginEvent(v11, "loot_item_transaction_complete", v10) )
    {
      LUI_SetTableInt("lootItemID", v8, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
Online_Loot::PurchaseItem
==============
*/
void Online_Loot::PurchaseItem(Online_Loot *this, const int controllerIndex, const unsigned int item_id, const bool is_purchase_dlc)
{
  __int64 v6; 
  const dvar_t *v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  char *v15; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  XUID *Xuid; 
  const bdUserAccountID *v19; 
  TaskCreateRequest *v20; 
  bdRemoteTask *v21; 
  DWServicesAccess *v22; 
  DWMarketplace *v23; 
  TaskCreateRequest *v24; 
  bdRemoteTask *v25; 
  TaskManager *v26; 
  lua_State *v27; 
  LocalClientNum_t ClientFromController; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  unsigned int purchasedQuantities; 
  unsigned int skuIds; 
  bdReference<bdRemoteTask> v33; 
  bdReference<bdRemoteTask> v34; 
  unsigned __int64 userID; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v37; 
  unsigned __int64 expiry_time; 
  XUID result; 
  bdUserAccountID v40; 
  bdMarketplaceMetadata v41; 
  bdMarketplaceMetadata v42; 
  bdMarketplacePurchaseSkusSkuOrderV2 ptr; 
  char code[64]; 

  v37 = -2i64;
  v6 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v8 = DVARBOOL_online_commerce_use_influencer_purchase;
  if ( !DVARBOOL_online_commerce_use_influencer_purchase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_commerce_use_influencer_purchase") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    `eh vector vbase constructor iterator'(&ptr, 0x268ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusSkuOrderV2::bdMarketplacePurchaseSkusSkuOrderV2, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusSkuOrderV2::`vbase destructor);
    bdMarketplacePurchaseSkusSkuOrderV2::reset(&ptr);
    *((_DWORD *)&ptr.__vftable + 4) = item_id;
    *((_DWORD *)&ptr.__vftable + 5) = 1;
    if ( Online_Loot::GetContentCreatorCode(&Online_Loot::s_instance, v6, &expiry_time, code, 64) )
    {
      `eh vector vbase constructor iterator'(&v42, 0x130ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplaceMetadata::bdMarketplaceMetadata, (void (__fastcall *)(void *))bdMarketplaceMetadata::`vbase destructor);
      v9 = 0;
      v10 = -1i64;
      do
        ++v10;
      while ( code[v10] );
      if ( (_DWORD)v10 )
      {
        bdMarketplaceMetadata::bdMarketplaceMetadata(&v41, "influencer_code", code);
        v12 = v11;
        bdReferencable::operator=((bdReferencable *)&v42.m_value[*(int *)(*((_QWORD *)&v42.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v11 + 8) + 4i64) + v11 + 8));
        *((_BYTE *)&v42.__vftable + 16) = *(_BYTE *)(v12 + 16);
        *(_WORD *)((char *)&v42.__vftable + 17) = *(_WORD *)(v12 + 17);
        *((_BYTE *)&v42.__vftable + 19) = *(_BYTE *)(v12 + 19);
        *((_BYTE *)&v42.__vftable + 20) = *(_BYTE *)(v12 + 20);
        *((_BYTE *)&v42.__vftable + 21) = *(_BYTE *)(v12 + 21);
        *((_BYTE *)&v42.__vftable + 22) = *(_BYTE *)(v12 + 22);
        *((_BYTE *)&v42.__vftable + 23) = *(_BYTE *)(v12 + 23);
        *((_BYTE *)&v42.__vftable + 24) = *(_BYTE *)(v12 + 24);
        *((_BYTE *)&v42.__vftable + 25) = *(_BYTE *)(v12 + 25);
        *((_BYTE *)&v42.__vftable + 26) = *(_BYTE *)(v12 + 26);
        *((_BYTE *)&v42.__vftable + 27) = *(_BYTE *)(v12 + 27);
        *((_BYTE *)&v42.__vftable + 28) = *(_BYTE *)(v12 + 28);
        *((_BYTE *)&v42.__vftable + 29) = *(_BYTE *)(v12 + 29);
        *((_BYTE *)&v42.__vftable + 30) = *(_BYTE *)(v12 + 30);
        *((_BYTE *)&v42.__vftable + 31) = *(_BYTE *)(v12 + 31);
        v13 = 0i64;
        v14 = v12 - (_QWORD)v42.m_value;
        do
        {
          v15 = &v42.m_value[v13];
          *v15 = v15[v14 + 32];
          v15[1] = v42.gap120[v13 - 223 + v14];
          v13 += 2i64;
        }
        while ( v13 < 0x100 );
        bdMarketplaceMetadata::~bdMarketplaceMetadata((bdMarketplaceMetadata *)v41.gap120);
        bdReferencable::~bdReferencable((bdReferencable *)v41.gap120);
        v9 = 1;
        Com_Printf(25, "PurchaseItem() Using content creator code for the purchase %s\n", code);
      }
      else
      {
        Com_Printf(25, "PurchaseItem() No content creator code found\n");
      }
      Instance = DWServicesAccess::GetInstance();
      MarketPlace = DWServicesAccess::GetMarketPlace(Instance, v6);
      Xuid = Live_GetXuid(&result, v6);
      userID = XUID::GetUniversalId(Xuid);
      bdUserAccountID::bdUserAccountID(&v40, &userID);
      v20 = (TaskCreateRequest *)DWMarketplace::purchaseSkusInfluencer(MarketPlace, &v34, (const char *)&queryFormat.fmt + 3, v19, 1u, &ptr, &this->m_purchaseSkusResultv4[v6], 0, NULL, v9, &v42, 0, 0);
      if ( v20 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
      {
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
        v21 = *(bdRemoteTask **)&v20->m_controllerIndex;
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v21;
        if ( v21 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 1u);
      }
      if ( v34.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v34.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v34.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v34.m_ptr->~bdReferencable)(v34.m_ptr, 1i64);
      `eh vector destructor iterator'(&v42, 0x130ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplaceMetadata::`vbase destructor);
    }
    else
    {
      Com_PrintError(25, "PurchaseItem() Content creator code read failed\n");
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    `eh vector destructor iterator'(&ptr, 0x268ui64, 1ui64, (void (__fastcall *)(void *))bdMarketplacePurchaseSkusSkuOrderV2::`vbase destructor);
  }
  else
  {
    skuIds = item_id;
    purchasedQuantities = 1;
    v22 = DWServicesAccess::GetInstance();
    v23 = DWServicesAccess::GetMarketPlace(v22, v6);
    v24 = (TaskCreateRequest *)DWMarketplace::purchaseSkus(v23, &v33, (const char *)&queryFormat.fmt + 3, 1u, &skuIds, &purchasedQuantities, 1u, &this->m_purchaseSkusResult[v6], NULL, NULL, NULL, NULL, 0, 0);
    if ( v24 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v25 = *(bdRemoteTask **)&v24->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v25;
      if ( v25 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
    }
    if ( v33.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v33.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v33.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v33.m_ptr->~bdReferencable)(v33.m_ptr, 1i64);
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v6;
    pTaskCreateRequest.m_onCompletionCallback = OnPurchaseItemComplete;
    this->m_currentPurchaseID[v6] = item_id;
    this->m_isPurchaseDLC[v6] = is_purchase_dlc;
    v26 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v26, &pTaskCreateRequest, &pTaskCreateResult) )
      Com_Printf(25, "PurchaseItem() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v6);
    else
      Com_PrintError(25, "PurchaseItem() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v6);
  }
  else
  {
    Com_PrintError(25, "bdMarketplace::purchaseSkus failed for controllerIndex %d\n", (unsigned int)v6);
    v27 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(v6);
    if ( LUI_BeginEvent(ClientFromController, "loot_item_transaction_error", v27) )
    {
      LUI_SetTableInt("errorCode", 5i64, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
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

/*
==============
Online_Loot::RemoveItemFromPlayer
==============
*/
void Online_Loot::RemoveItemFromPlayer(Online_Loot *this, const int controllerIndex, const char *type, const char *ref, const char *replacement)
{
  __int64 v6; 
  int v8; 
  __int64 kk; 
  StatsSource v12; 
  unsigned int v14; 
  unsigned int mm; 
  char *v17; 
  int v18; 
  char *v19; 
  int nn; 
  char *v21; 
  char *v22; 
  StatsSource v23; 
  char *v26; 
  int v27; 
  StatsSource v28; 
  char *v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  StatsSource v35; 
  int jj; 
  char *v39; 
  __int64 v40; 
  const char *v41; 
  const char *v42; 
  signed __int64 v43; 
  char v44; 
  __int64 v45; 
  char v46; 
  StatsSource v47; 
  __int64 v49; 
  char *v51; 
  int v52; 
  int v53; 
  PlayerProfileData *v54; 
  StatsSource v55; 
  __int64 v57; 
  char *v59; 
  int v60; 
  int v61; 
  PlayerProfileData *Playercard_ForEdit; 
  __int64 ii; 
  StatsSource v64; 
  int v66; 
  char *v68; 
  int Int; 
  int v70; 
  __int64 m; 
  StatsSource v72; 
  int v74; 
  int n; 
  char *v77; 
  const char *v78; 
  __int64 i; 
  StatsSource v80; 
  int v82; 
  int j; 
  int k; 
  char *v86; 
  const char *v87; 
  __int64 v88; 
  StatsSource ActiveStatsSource; 
  int v91; 
  int *v92; 
  char *v94; 
  const char *Enum; 
  int v96; 
  int v97; 
  StatsGroup statsGroup[2]; 
  DDLState toState; 
  DDLContext context; 
  DDLState fromState; 
  int navStringCount; 
  int depth; 
  int v104[2]; 
  const char *v105; 
  DDLState result; 
  char *navStrings[32]; 

  v6 = 0i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v8 = controllerIndex;
  v97 = controllerIndex;
  fromState.offset = 0;
  toState.isValid = 0;
  __asm { vmovdqu xmmword ptr [rbp+130h+fromState.member], xmm0 }
  toState.offset = 0;
  __asm { vmovdqu xmmword ptr [rsp+230h+toState.member], xmm0 }
  fromState.isValid = 0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  statsGroup[0] = STATSGROUP_RANKEDLOADOUTS;
  statsGroup[1] = STATSGROUP_PRIVATELOADOUTS;
  if ( I_strcmp(type, "WEAPON") )
  {
    if ( I_strcmp(type, "SKIN") )
    {
      if ( I_strcmp(type, "ACCESSORY") )
      {
        if ( I_strcmp(type, "CHARM") )
        {
          if ( I_strcmp(type, "CARD") )
          {
            if ( I_strcmp(type, "EMBLEM") )
            {
              if ( I_strcmp(type, "SPRAY") )
              {
                if ( I_strcmp(type, "CAMO") )
                {
                  if ( I_strcmp(type, "STICKER") )
                  {
                    if ( !I_strcmp(type, "OPERATOR") )
                    {
                      v88 = 0i64;
                      *(_QWORD *)v104 = "default_western";
                      v105 = "default_eastern";
                      do
                      {
                        ActiveStatsSource = LiveStorage_GetActiveStatsSource(v8);
                        if ( CL_PlayerData_GetDDLBuffer(&context, v8, ActiveStatsSource, statsGroup[v88]) )
                        {
                          _RAX = DDL_GetRootState(&result, context.def);
                          v91 = 0;
                          v92 = v104;
                          __asm
                          {
                            vmovups ymm0, ymmword ptr [rax]
                            vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
                          }
                          do
                          {
                            v94 = j_va("customizationSetup.operators.%d", (unsigned int)v91);
                            Com_ParseNavStrings(v94, (const char **)navStrings, 32, &v96);
                            if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                            {
                              Enum = DDL_GetEnum(&toState, &context);
                              if ( !I_strcmp(Enum, ref) )
                                DDL_SetEnum(&toState, &context, *(const char **)v92);
                            }
                            ++v91;
                            v92 += 2;
                          }
                          while ( v91 < 2 );
                          v8 = v97;
                        }
                        ++v88;
                      }
                      while ( v88 < 2 );
                    }
                  }
                  else
                  {
                    for ( i = 0i64; i < 2; ++i )
                    {
                      v80 = LiveStorage_GetActiveStatsSource(v8);
                      if ( CL_PlayerData_GetDDLBuffer(&context, v8, v80, statsGroup[i]) )
                      {
                        _RAX = DDL_GetRootState(&result, context.def);
                        v82 = 0;
                        __asm
                        {
                          vmovups ymm0, ymmword ptr [rax]
                          vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
                        }
                        do
                        {
                          for ( j = 0; j < 2; ++j )
                          {
                            for ( k = 0; k < 5; ++k )
                            {
                              v86 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.sticker.%d", (unsigned int)v82, (unsigned int)j, (unsigned int)k);
                              Com_ParseNavStrings(v86, (const char **)navStrings, 32, &v96);
                              if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                              {
                                v87 = DDL_GetEnum(&toState, &context);
                                if ( !I_strcmp(v87, ref) )
                                  DDL_SetEnum(&toState, &context, "none");
                              }
                            }
                          }
                          ++v82;
                        }
                        while ( v82 < 10 );
                        v8 = v97;
                      }
                    }
                  }
                }
                else
                {
                  for ( m = 0i64; m < 2; ++m )
                  {
                    v72 = LiveStorage_GetActiveStatsSource(v8);
                    if ( CL_PlayerData_GetDDLBuffer(&context, v8, v72, statsGroup[m]) )
                    {
                      _RAX = DDL_GetRootState(&result, context.def);
                      v74 = 0;
                      __asm
                      {
                        vmovups ymm0, ymmword ptr [rax]
                        vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
                      }
                      do
                      {
                        for ( n = 0; n < 2; ++n )
                        {
                          v77 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.camo", (unsigned int)v74, (unsigned int)n);
                          Com_ParseNavStrings(v77, (const char **)navStrings, 32, &v96);
                          if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                          {
                            v78 = DDL_GetEnum(&toState, &context);
                            if ( !I_strcmp(v78, ref) )
                              DDL_SetEnum(&toState, &context, "none");
                          }
                        }
                        ++v74;
                      }
                      while ( v74 < 10 );
                      v8 = v97;
                    }
                  }
                }
              }
              else
              {
                for ( ii = 0i64; ii < 2; ++ii )
                {
                  v64 = LiveStorage_GetActiveStatsSource(v8);
                  if ( CL_PlayerData_GetDDLBuffer(&context, v8, v64, statsGroup[ii]) )
                  {
                    _RAX = DDL_GetRootState(&result, context.def);
                    v66 = 0;
                    __asm
                    {
                      vmovups ymm0, ymmword ptr [rax]
                      vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
                    }
                    do
                    {
                      v68 = j_va("customizationSetup.radial.%d", (unsigned int)v66);
                      Com_ParseNavStrings(v68, (const char **)navStrings, 32, &v96);
                      if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                      {
                        Int = DDL_GetInt(&toState, &context);
                        if ( Int == atoi(ref) )
                        {
                          v70 = atoi(replacement);
                          DDL_SetInt(&toState, &context, v70);
                        }
                      }
                      ++v66;
                    }
                    while ( v66 < 8 );
                    v8 = v97;
                  }
                }
              }
            }
            else
            {
              v55 = LiveStorage_GetActiveStatsSource(v8);
              if ( CL_PlayerData_GetDDLBuffer(&context, v8, v55, STATSGROUP_NONGAME) )
              {
                _RAX = DDL_GetRootState(&result, context.def);
                v57 = 68i64;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rax]
                  vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
                }
                do
                {
                  v59 = j_va("nonGameData.customization_patch.%d", (unsigned int)v6);
                  Com_ParseNavStrings(v59, (const char **)navStrings, 32, &v96);
                  if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                  {
                    v60 = DDL_GetInt(&toState, &context);
                    if ( v60 == atoi(ref) )
                    {
                      v61 = atoi(replacement);
                      DDL_SetInt(&toState, &context, v61);
                      Playercard_ForEdit = PlayercardCache_GetPlayercard_ForEdit();
                      *(int *)((char *)&Playercard_ForEdit->rank_mp + v57) = atoi(replacement);
                    }
                  }
                  LODWORD(v6) = v6 + 1;
                  v57 += 4i64;
                }
                while ( (int)v6 < 2 );
              }
            }
          }
          else
          {
            v47 = LiveStorage_GetActiveStatsSource(v8);
            if ( CL_PlayerData_GetDDLBuffer(&context, v8, v47, STATSGROUP_NONGAME) )
            {
              _RAX = DDL_GetRootState(&result, context.def);
              v49 = 72i64;
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
              }
              do
              {
                v51 = j_va("nonGameData.customization_background.%d", (unsigned int)v6);
                Com_ParseNavStrings(v51, (const char **)navStrings, 32, &v96);
                if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                {
                  v52 = DDL_GetInt(&toState, &context);
                  if ( v52 == atoi(ref) )
                  {
                    v53 = atoi(replacement);
                    DDL_SetInt(&toState, &context, v53);
                    v54 = PlayercardCache_GetPlayercard_ForEdit();
                    *(int *)((char *)&v54->rank_mp + v49) = atoi(replacement);
                  }
                }
                LODWORD(v6) = v6 + 1;
                v49 += 4i64;
              }
              while ( (int)v6 < 2 );
            }
          }
        }
        else
        {
          v34 = 0i64;
          *(_QWORD *)v104 = 0i64;
          do
          {
            v35 = LiveStorage_GetActiveStatsSource(v8);
            if ( CL_PlayerData_GetDDLBuffer(&context, v8, v35, statsGroup[v34]) )
            {
              _RAX = DDL_GetRootState(&result, context.def);
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
              }
              do
              {
                for ( jj = 0; jj < 2; ++jj )
                {
                  v39 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.cosmeticAttachment", (unsigned int)v6, (unsigned int)jj);
                  Com_ParseNavStrings(v39, (const char **)navStrings, 32, &v96);
                  if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                  {
                    v40 = 0x7FFFFFFFi64;
                    v41 = ref;
                    v42 = DDL_GetEnum(&toState, &context);
                    if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    v43 = v42 - ref;
                    do
                    {
                      v44 = v41[v43];
                      v45 = v40;
                      v46 = *v41++;
                      --v40;
                      if ( !v45 )
                        break;
                      if ( v44 != v46 )
                        goto LABEL_51;
                    }
                    while ( v44 );
                    DDL_SetEnum(&toState, &context, "none");
                  }
LABEL_51:
                  ;
                }
                LODWORD(v6) = v6 + 1;
              }
              while ( (int)v6 < 10 );
              v34 = *(_QWORD *)v104;
              LODWORD(v6) = 0;
              v8 = v97;
            }
            *(_QWORD *)v104 = ++v34;
          }
          while ( v34 < 2 );
        }
      }
      else
      {
        do
        {
          v28 = LiveStorage_GetActiveStatsSource(v8);
          if ( CL_PlayerData_GetDDLBuffer(&context, v8, v28, statsGroup[v6]) )
          {
            _RAX = DDL_GetRootState(&result, context.def);
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
            }
            v31 = j_va("customizationSetup.operatorWatch");
            Com_ParseNavStrings(v31, (const char **)navStrings, 32, &v96);
            if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
            {
              v32 = DDL_GetInt(&toState, &context);
              if ( v32 == atoi(ref) )
              {
                v33 = atoi(replacement);
                DDL_SetInt(&toState, &context, v33);
              }
            }
          }
          ++v6;
        }
        while ( v6 < 2 );
      }
    }
    else
    {
      do
      {
        v23 = LiveStorage_GetActiveStatsSource(v8);
        if ( CL_PlayerData_GetDDLBuffer(&context, v8, v23, statsGroup[v6]) )
        {
          _RAX = DDL_GetRootState(&result, context.def);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
          }
          v26 = j_va("customizationSetup.operatorCustomization.%s.skin", ref);
          Com_ParseNavStrings(v26, (const char **)navStrings, 32, &v96);
          if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
          {
            v27 = atoi(replacement);
            DDL_SetInt(&toState, &context, v27);
          }
        }
        ++v6;
      }
      while ( v6 < 2 );
    }
  }
  else
  {
    for ( kk = 0i64; kk < 2; ++kk )
    {
      v12 = LiveStorage_GetActiveStatsSource(v8);
      if ( CL_PlayerData_GetDDLBuffer(&context, v8, v12, statsGroup[kk]) )
      {
        _RAX = DDL_GetRootState(&result, context.def);
        v14 = 0;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+130h+fromState.isValid], ymm0
        }
        do
        {
          for ( mm = 0; (int)mm < 2; ++mm )
          {
            v17 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.lootItemID", v14, mm);
            Com_ParseNavStrings(v17, (const char **)navStrings, 32, &navStringCount);
            if ( DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
            {
              v18 = DDL_GetInt(&toState, &context);
              if ( v18 == atoi(ref) )
              {
                DDL_SetInt(&toState, &context, 0);
                v19 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.variantID", v14, mm);
                Com_ParseNavStrings(v19, (const char **)navStrings, 32, &depth);
                if ( DDL_MoveToPath(&fromState, &toState, depth, (const char **)navStrings) )
                  DDL_SetInt(&toState, &context, -1);
                for ( nn = 0; nn < 5; ++nn )
                {
                  v21 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.attachmentSetup.%d.attachment", v14, mm, (unsigned int)nn);
                  Com_ParseNavStrings(v21, (const char **)navStrings, 32, v104);
                  if ( DDL_MoveToPath(&fromState, &toState, v104[0], (const char **)navStrings) )
                    DDL_SetString(&toState, &context, (const char *)&queryFormat.fmt + 3);
                  v22 = j_va("squadMembers.loadouts.%d.weaponSetups.%d.attachmentSetup.%d.variantID", v14, mm, (unsigned int)nn);
                  Com_ParseNavStrings(v22, (const char **)navStrings, 32, &v96);
                  if ( DDL_MoveToPath(&fromState, &toState, v96, (const char **)navStrings) )
                    DDL_SetInt(&toState, &context, 0);
                }
              }
            }
          }
          ++v14;
        }
        while ( (int)v14 < 10 );
        v8 = v97;
      }
    }
  }
}

/*
==============
Online_Loot::RequestInventoryForUser
==============
*/
char Online_Loot::RequestInventoryForUser(Online_Loot *this, int controllerIndex)
{
  __int64 v2; 
  __int64 ClientFromController; 
  char v6; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v8; 
  unsigned int TitleID; 
  const char *v10; 
  LocalClientNum_t v11; 
  bdRemoteTask *v12; 
  const XUID *Xuid; 
  DWServicesAccess *v14; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *InventoryItemInfo; 
  bdRemoteTask *v17; 
  TaskManager *v18; 
  __int64 v19; 
  bdReference<bdRemoteTask> v20; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v23; 
  XUID result; 
  bdGetInventoryItemInfoRequest request; 

  v23 = -2i64;
  v2 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( Live_UserIsGuest(v2) )
  {
    s_fenceOnlineLootLastErrorCode[v2] = HALF;
    return 0;
  }
  else if ( Live_IsUserSignedIn(v2) )
  {
    v6 = 0;
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, v2) )
    {
      *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
      memset(&pTaskCreateRequest.m_appData, 0, 48);
      pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      this->m_hasInventory[CL_Mgr_GetClientFromController(v2)] = 0;
      this->m_gettingInventory[v2] = 1;
      bdGetInventoryItemInfoRequest::bdGetInventoryItemInfoRequest(&request);
      bdGetInventoryItemInfoRequest::reset(&request);
      v8 = DWServicesAccess::GetInstance();
      TitleID = DWServicesAccess::GetTitleID(v8);
      v10 = j_va("%u", TitleID);
      bdGetInventoryItemInfoRequest::setContext(&request, v10);
      v11 = CL_Mgr_GetClientFromController(v2);
      bdGetInventoryItemInfoRequest::setPageToken(&request, this->m_nextPageToken[v11]);
      bdGetInventoryItemInfoRequest::setItemsPerPage(&request, 0x2EEu);
      if ( this->m_inventoryResponse[ClientFromController] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 525, ASSERT_TYPE_ASSERT, "(m_inventoryResponse[localClientNum] == nullptr)", (const char *)&queryFormat, "m_inventoryResponse[localClientNum] == nullptr") )
        __debugbreak();
      v12 = (bdRemoteTask *)bdMemory::allocate(0xEE558ui64);
      v20.m_ptr = v12;
      if ( v12 )
        bdGetInventoryItemInfoResponse::bdGetInventoryItemInfoResponse((bdGetInventoryItemInfoResponse *)v12);
      this->m_inventoryResponse[ClientFromController] = (bdGetInventoryItemInfoResponse *)v12;
      this->m_requestClient[v2] = ClientFromController;
      Xuid = Live_GetXuid(&result, v2);
      XUID::operator=(&this->m_hasInventoryXUID[ClientFromController], Xuid);
      v14 = DWServicesAccess::GetInstance();
      MarketPlace = DWServicesAccess::GetMarketPlace(v14, v2);
      InventoryItemInfo = (TaskCreateRequest *)DWMarketplace::getInventoryItemInfo(MarketPlace, &v20, &request, this->m_inventoryResponse[ClientFromController]);
      if ( InventoryItemInfo != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
      {
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
        v17 = *(bdRemoteTask **)&InventoryItemInfo->m_controllerIndex;
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v17;
        if ( v17 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
      }
      if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      {
        pTaskCreateRequest.m_controllerIndex = v2;
        pTaskCreateRequest.m_onCompletionCallback = OnGetInventoryComplete;
        v18 = TaskManager::GetInstance();
        if ( TaskManager::CreateTask(v18, &pTaskCreateRequest, &pTaskCreateResult) )
        {
          Com_Printf(25, "RequestInventoryForUser() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
          v19 = v2;
          *(_QWORD *)&this->m_getInventoryRetry[v19].m_numRetries = 0i64;
          this->m_getInventoryRetry[v19].m_retrying = 0;
          v6 = 1;
        }
        else
        {
          Com_PrintError(25, "RequestInventoryForUser() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v2);
          Online_Loot::ClearResponse(this, v2);
          Online_Retry::SetNextRetry(&this->m_getInventoryRetry[v2]);
          s_fenceOnlineLootLastErrorCode[v2] = MAX_INT;
        }
      }
      else
      {
        Com_PrintError(25, "bdMarketplace::getInventory failed for controllerIndex %d\n", (unsigned int)v2);
        Online_Loot::ClearResponse(this, v2);
        Online_Retry::SetNextRetry(&this->m_getInventoryRetry[v2]);
        s_fenceOnlineLootLastErrorCode[v2] = LONG_LONG;
      }
      bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)(&request.__vftable + 2));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&request.m_itemIDs + 1));
      TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
    }
    else
    {
      s_fenceOnlineLootLastErrorCode[v2] = LONG;
    }
    return v6;
  }
  else
  {
    Com_PrintError(25, "RequestInventoryForUser() - Called when controlled isn't signed into Demonware yet - controllerIndex %d!\n", (unsigned int)v2);
    s_fenceOnlineLootLastErrorCode[v2] = HALF_HALF;
    return 0;
  }
}

/*
==============
ResetLastFenceOnlineLootErrorCode
==============
*/
void ResetLastFenceOnlineLootErrorCode(const int controllerIndex)
{
  s_fenceOnlineLootLastErrorCode[controllerIndex] = NONE;
}

/*
==============
SetFenceOnlineLootStatusCode
==============
*/
void SetFenceOnlineLootStatusCode(const int controllerIndex, const FenceOnlineLootStatusCode statusCode)
{
  s_fenceOnlineLootStatus[controllerIndex] = statusCode;
}

/*
==============
Online_Loot::SetHasInventory
==============
*/
void Online_Loot::SetHasInventory(Online_Loot *this, const int controllerIndex, const bool has_inventory)
{
  this->m_hasInventory[CL_Mgr_GetClientFromController(controllerIndex)] = has_inventory;
}

/*
==============
SetLastFenceOnlineLootErrorCode
==============
*/
void SetLastFenceOnlineLootErrorCode(const int controllerIndex, const FenceOnlineLootErrorCode errorCode)
{
  s_fenceOnlineLootLastErrorCode[controllerIndex] = errorCode;
}

/*
==============
Online_Loot::SetNewUnlock
==============
*/
void Online_Loot::SetNewUnlock(Online_Loot *this, const int controllerIndex, const int id)
{
  unsigned int v5; 
  DDLState state; 
  DDLContext ddlContext; 
  int v8; 

  state.isValid = 0;
  state.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0A8h+state.member], xmm0 }
  if ( Online_Loot::GetIsNewBitmask(this, controllerIndex, id, &state, &ddlContext, &v5, &v8) )
    DDL_SetInt(&state, &ddlContext, (1 << (v8 % 32)) | v5);
}

/*
==============
Online_Loot::SetNextPageToken
==============
*/
void Online_Loot::SetNextPageToken(Online_Loot *this, const int controllerIndex, const char *token)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Core_strcpy(this->m_nextPageToken[ClientFromController], 0x41ui64, token);
}

/*
==============
Online_Loot::SetNumInventoryItems
==============
*/
void Online_Loot::SetNumInventoryItems(Online_Loot *this, const int controllerIndex, const int num)
{
  this->m_numInventoryItems[CL_Mgr_GetClientFromController(controllerIndex)] = num;
}

/*
==============
Online_Loot::UpdateInventoryFromAchievements
==============
*/
void Online_Loot::UpdateInventoryFromAchievements(Online_Loot *this, int controllerIndex)
{
  int v4; 
  unsigned __int64 *p_m_achievementID; 
  unsigned int v6; 
  __int64 ClientFromController; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v4 = 0;
  if ( this->m_achievementListSize )
  {
    p_m_achievementID = &this->m_achievementList[0].m_achievementID;
    do
    {
      v6 = *(_DWORD *)p_m_achievementID;
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      v8 = 0i64;
      v9 = this->m_numInventoryItems[ClientFromController];
      if ( (int)v9 > 0 )
      {
        while ( v8 < 15000 )
        {
          if ( this->m_inventoryClientItems[ClientFromController][v8].m_itemId == v6 )
          {
            ++this->m_inventoryClientItems[ClientFromController][v8].m_itemQuantity;
            goto LABEL_12;
          }
          if ( ++v8 >= v9 )
            break;
        }
      }
      if ( (int)v9 >= 15000 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Inventory Full. Too many items, please increase MAX_INVENTORY_RESULTS.") )
          __debugbreak();
      }
      else
      {
        v10 = v9 + 15000 * ClientFromController;
        this->m_inventoryClientItems[0][v10].m_itemId = v6;
        this->m_inventoryClientItems[0][v10].m_itemQuantity = 1;
        ++this->m_numInventoryItems[ClientFromController];
      }
LABEL_12:
      ++v4;
      p_m_achievementID += 14;
    }
    while ( v4 < this->m_achievementListSize );
  }
}

/*
==============
Online_Loot::UpdateInventoryFromBundle
==============
*/
void Online_Loot::UpdateInventoryFromBundle(Online_Loot *this, const int controllerIndex, const int id, const char *stringTable, const int numItemColumn, const int itemStartColumn, const bool add_bundle_id, const int quantity)
{
  int *v10; 
  int v11; 
  const char *v12; 
  const char *v13; 
  int v14; 
  int v15; 
  const char *v16; 
  const char *v17; 
  int v18; 
  unsigned int v19; 
  int ItemQuantity; 
  const dvar_t *v21; 
  OnlineQuests *Instance; 
  StringTable *tablePtr; 
  char *stringTablea; 
  int v25[4]; 
  __int64 v26; 

  stringTablea = (char *)stringTable;
  StringTable_GetAsset(stringTable, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 887, ASSERT_TYPE_ASSERT, "(bundleTable)", (const char *)&queryFormat, "bundleTable") )
    __debugbreak();
  if ( (unsigned int)(id - 440000) > 0x270F )
  {
    if ( (unsigned int)(id - 450000) > 0x270F )
    {
      if ( (unsigned int)(id - 460000) <= 0x270F )
        id -= 60000;
    }
    else
    {
      id -= 20000;
    }
  }
  else
  {
    id -= 40000;
  }
  if ( add_bundle_id && (quantity == 1 || Online_Loot::GetItemQuantity(&Online_Loot::s_instance, controllerIndex, id)) )
    Online_Loot::UpdateItemInInventory(&Online_Loot::s_instance, controllerIndex, id, quantity, 0);
  v10 = v25;
  v11 = itemStartColumn;
  v25[0] = numItemColumn;
  v25[1] = itemStartColumn;
  v25[2] = 24;
  v25[3] = 25;
  do
  {
    v12 = j_va("%d", (unsigned int)id);
    v13 = StringTable_Lookup(tablePtr, 0, v12, *v10);
    v14 = 0;
    v15 = atoi(v13);
    if ( v15 > 0 )
    {
      do
      {
        v16 = j_va("%d", (unsigned int)id);
        v17 = StringTable_Lookup(tablePtr, 0, v16, v14 + v10[1]);
        v18 = atoi(v17);
        v19 = v18;
        if ( v18 )
        {
          ItemQuantity = Online_Loot::GetItemQuantity(&Online_Loot::s_instance, controllerIndex, v18);
          if ( quantity == 1 || ItemQuantity > 0 )
          {
            if ( !ItemQuantity )
              Online_Loot::AddToLastLootDrops(&Online_Loot::s_instance, controllerIndex, v19);
            Online_Loot::UpdateItemInInventory(&Online_Loot::s_instance, controllerIndex, v19, quantity, 0);
          }
          v21 = DVARBOOL_online_challenge_quest_activate_loot;
          if ( !DVARBOOL_online_challenge_quest_activate_loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_quest_activate_loot") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v21->current.enabled && v19 - 490000 <= 0x270F )
          {
            Instance = OnlineQuests::GetInstance();
            OnlineQuests::NeedToCheckandActivate(Instance, controllerIndex);
          }
          v11 = itemStartColumn;
          if ( v19 - 400000 <= 0x270E )
          {
            Online_Loot::UpdateInventoryFromBundle(&Online_Loot::s_instance, controllerIndex, v19, stringTablea, numItemColumn, itemStartColumn, add_bundle_id, quantity);
            Com_Printf(25, "Updating inventory from bundle %d with bundle %d\n", (unsigned int)id, v19);
          }
        }
        ++v14;
      }
      while ( v14 < v15 );
    }
    if ( v11 != 14 )
      break;
    v10 += 2;
  }
  while ( v10 != (int *)&v26 );
}

/*
==============
Online_Loot::UpdateInventoryFromDWDurable
==============
*/
void Online_Loot::UpdateInventoryFromDWDurable(Online_Loot *this, const int controllerIndex, const int id)
{
  __int64 ClientFromController; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  const char *v11; 
  const char *v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  StringTable *tablePtr; 

  StringTable_GetAsset("loot/dlc_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 847, ASSERT_TYPE_ASSERT, "(dlcTable)", (const char *)&queryFormat, "dlcTable") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v6 = 0;
  v7 = Online_Loot::s_instance.m_numInventoryItems[ClientFromController];
  if ( (int)v7 > 0 )
  {
    v8 = 0i64;
    while ( v8 < 15000 )
    {
      if ( Online_Loot::s_instance.m_inventoryClientItems[ClientFromController][v8].m_itemId == id )
      {
        ++Online_Loot::s_instance.m_inventoryClientItems[ClientFromController][v6].m_itemQuantity;
        goto LABEL_14;
      }
      ++v6;
      if ( ++v8 >= v7 )
        break;
    }
  }
  if ( (int)v7 >= 15000 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Inventory Full. Too many items, please increase MAX_INVENTORY_RESULTS.") )
      __debugbreak();
  }
  else
  {
    v9 = v7 + 15000 * ClientFromController;
    Online_Loot::s_instance.m_inventoryClientItems[0][v9].m_itemId = id;
    Online_Loot::s_instance.m_inventoryClientItems[0][v9].m_itemQuantity = 1;
    ++Online_Loot::s_instance.m_numInventoryItems[ClientFromController];
  }
LABEL_14:
  v10 = 12;
LABEL_15:
  while ( 1 )
  {
    v11 = j_va("%d", (unsigned int)id);
    v12 = StringTable_Lookup(tablePtr, 0, v11, v10);
    if ( !v12 || !*v12 )
      break;
    v13 = atoi(v12);
    v14 = v13;
    if ( (unsigned int)(v13 - 400000) > 0x270E )
    {
      if ( !Online_Loot::GetItemQuantity(&Online_Loot::s_instance, controllerIndex, v13) )
        Online_Loot::AddToLastLootDrops(&Online_Loot::s_instance, controllerIndex, v14);
      v15 = CL_Mgr_GetClientFromController(controllerIndex);
      v16 = 0i64;
      v17 = Online_Loot::s_instance.m_numInventoryItems[v15];
      if ( (int)v17 > 0 )
      {
        while ( v16 < 15000 )
        {
          if ( Online_Loot::s_instance.m_inventoryClientItems[v15][v16].m_itemId == v14 )
          {
            ++Online_Loot::s_instance.m_inventoryClientItems[v15][v16].m_itemQuantity;
            ++v10;
            goto LABEL_15;
          }
          if ( ++v16 >= v17 )
            break;
        }
      }
      if ( (int)v17 >= 15000 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Inventory Full. Too many items, please increase MAX_INVENTORY_RESULTS.") )
          __debugbreak();
        ++v10;
      }
      else
      {
        v18 = v17 + 15000 * v15;
        Online_Loot::s_instance.m_inventoryClientItems[0][v18].m_itemId = v14;
        Online_Loot::s_instance.m_inventoryClientItems[0][v18].m_itemQuantity = 1;
        ++Online_Loot::s_instance.m_numInventoryItems[v15];
        ++v10;
      }
    }
    else
    {
      Online_Loot::UpdateInventoryFromBundle(&Online_Loot::s_instance, controllerIndex, v13, "loot/bundle_ids.csv", 13, 14, 1, 1);
      ++v10;
    }
  }
}

/*
==============
Online_Loot::UpdateItemInInventory
==============
*/
void Online_Loot::UpdateItemInInventory(Online_Loot *this, const int controllerIndex, const unsigned int itemID, const int quantity, const bool set)
{
  __int64 ClientFromController; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  bool v12; 
  unsigned int *p_m_itemQuantity; 
  __int64 v14; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v9 = 0;
  v10 = this->m_numInventoryItems[ClientFromController];
  if ( (int)v10 > 0 )
  {
    v11 = 0i64;
    while ( v11 < 15000 )
    {
      if ( this->m_inventoryClientItems[ClientFromController][v11].m_itemId == itemID )
      {
        p_m_itemQuantity = &this->m_inventoryClientItems[ClientFromController][v9].m_itemQuantity;
        if ( !*p_m_itemQuantity && quantity < 0 )
        {
          v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1159, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Removed an item from the Inventory that didn't have any quantity");
          goto LABEL_17;
        }
        if ( !set )
          quantity += *p_m_itemQuantity;
        *p_m_itemQuantity = quantity;
        return;
      }
      ++v9;
      if ( ++v11 >= v10 )
        break;
    }
  }
  if ( quantity >= 0 )
  {
    if ( (int)v10 < 15000 )
    {
      v14 = v10 + 15000 * ClientFromController;
      this->m_inventoryClientItems[0][v14].m_itemId = itemID;
      this->m_inventoryClientItems[0][v14].m_itemQuantity = quantity;
      ++this->m_numInventoryItems[ClientFromController];
      return;
    }
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Inventory Full. Too many items, please increase MAX_INVENTORY_RESULTS.");
  }
  else
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to remove an item from the inventory that doesn't exist");
  }
LABEL_17:
  if ( v12 )
    __debugbreak();
}

/*
==============
Online_Loot::ValidateContentCreator
==============
*/
__int64 Online_Loot::ValidateContentCreator(Online_Loot *this, const int controllerIndex, const char *code)
{
  const dvar_t *v9; 
  char *v10; 
  __int64 v11; 
  const char *v12; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  StatsSource ActiveStatsSource; 
  char *v20; 
  char *v21; 
  int Int_Internal_DebugName; 
  unsigned int UTC; 
  int navStringCount; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[512]; 

  toState.isValid = 0;
  toState.offset = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+1120h+toState.member], xmm0 }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+1120h+fromState.member], xmm0 }
  if ( !this->m_hasContentCreatorList )
    return 3i64;
  v9 = DVARBOOL_online_content_creator_code_should_do_full_string_compare;
  if ( !DVARBOOL_online_content_creator_code_should_do_full_string_compare && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_content_creator_code_should_do_full_string_compare") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    memcpy_0(navStrings, this->m_contentCreatorList, sizeof(navStrings));
    v10 = strtok((char *)navStrings, "\r\n");
    if ( v10 )
    {
LABEL_8:
      v11 = 0x7FFFFFFFi64;
      v12 = code;
      if ( !code && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = v10 - code;
      while ( 1 )
      {
        v14 = v12[v13];
        v15 = v11;
        v16 = *v12++;
        --v11;
        if ( !v15 )
          goto LABEL_15;
        if ( v14 != v16 )
        {
          v10 = strtok(NULL, "\r\n");
          if ( v10 )
            goto LABEL_8;
          return 2i64;
        }
        if ( !v14 )
          goto LABEL_15;
      }
    }
    return 2i64;
  }
  if ( !I_strstr((const char *)this->m_contentCreatorList, code) )
    return 2i64;
LABEL_15:
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( !CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_NONGAME) )
    return 5i64;
  _RAX = DDL_GetRootState(&result, context.def);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1120h+fromState.isValid], ymm0
  }
  v20 = j_va("nonGameData.influencerCode");
  Com_ParseNavStrings(v20, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 5i64;
  DDL_SetString(&toState, &context, code);
  v21 = j_va("nonGameData.influencerCodeTime");
  Com_ParseNavStrings(v21, (const char **)navStrings, 32, &navStringCount);
  if ( !DDL_MoveToPath(&fromState, &toState, navStringCount, (const char **)navStrings) )
    return 5i64;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_content_creator_code_expiration_time_seconds, "online_content_creator_code_expiration_time_seconds");
  UTC = LiveStorage_GetUTC();
  if ( !DDL_SetUInt64(&toState, &context, UTC + Int_Internal_DebugName) )
    return 4i64;
  LiveStorage_RequestOnlineStatsUpload(controllerIndex);
  return 1i64;
}

/*
==============
Online_Loot::ValidateInventoryItemsToken
==============
*/
__int64 Online_Loot::ValidateInventoryItemsToken(Online_Loot *this, const int controllerIndex, char *const fileName, const bdValidationTokenResult *token, bdValidationTokenResult *validationTokenResult, void (*onCompleteCallback)(GenericTask *, eTaskManagerTaskState))
{
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  unsigned int m_localTaskId; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> result; 
  __int64 v18; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  v18 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, controllerIndex);
  v11 = (TaskCreateRequest *)DWMarketplace::validateInventoryItemsToken(MarketPlace, &result, fileName, token, validationTokenResult);
  if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = onCompleteCallback;
    v13 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "ValidateInventoryItemsToken() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)controllerIndex);
      m_localTaskId = pTaskCreateResult.m_localTaskId;
      goto LABEL_18;
    }
    Com_PrintError(25, "ValidateInventoryItemsToken() - CreateTask failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
  }
  else
  {
    Com_PrintError(25, "bdMarketplace::validateInventoryItemsToken failed for controllerIndex %d\n", (unsigned int)controllerIndex);
  }
  m_localTaskId = 0;
LABEL_18:
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
  return m_localTaskId;
}

