/*
==============
Online_Commerce::ExchangeItemsError
==============
*/

void __fastcall Online_Commerce::ExchangeItemsError(Online_Commerce *this, const int controllerIndex)
{
  ?ExchangeItemsError@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::UpdateCurrency
==============
*/

void __fastcall Online_Commerce::UpdateCurrency(Online_Commerce *this, const int controllerIndex, int currencyID, __int64 amount, bool set)
{
  ?UpdateCurrency@Online_Commerce@@QEAAXHH_J_N@Z(this, controllerIndex, currencyID, amount, set);
}

/*
==============
Online_Commerce::HasStoreEntitlement
==============
*/

int __fastcall Online_Commerce::HasStoreEntitlement(Online_Commerce *this, const int controllerIndex, const int id)
{
  return ?HasStoreEntitlement@Online_Commerce@@QEAAHHH@Z(this, controllerIndex, id);
}

/*
==============
OnStartExchangeTransactionComplete
==============
*/

void __fastcall OnStartExchangeTransactionComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnStartExchangeTransactionComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Commerce::OnRegistered
==============
*/

void __fastcall Online_Commerce::OnRegistered(Online_Commerce *this)
{
  ?OnRegistered@Online_Commerce@@UEAAXXZ(this);
}

/*
==============
Online_Commerce::Init
==============
*/

bool __fastcall Online_Commerce::Init(Online_Commerce *this)
{
  return ?Init@Online_Commerce@@UEAA_NXZ(this);
}

/*
==============
Online_Commerce::GetInstance
==============
*/

Online_Commerce *__fastcall Online_Commerce::GetInstance()
{
  return ?GetInstance@Online_Commerce@@SAAEAV1@XZ();
}

/*
==============
Online_Commerce::StartExchangeTransaction
==============
*/

void __fastcall Online_Commerce::StartExchangeTransaction(Online_Commerce *this, const int controllerIndex)
{
  ?StartExchangeTransaction@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::OnSignedOut
==============
*/

void __fastcall Online_Commerce::OnSignedOut(Online_Commerce *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Commerce@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Commerce::UpdateInventory
==============
*/

void __fastcall Online_Commerce::UpdateInventory(Online_Commerce *this, const int controllerIndex, const char *commerce_item_id, const int column)
{
  ?UpdateInventory@Online_Commerce@@QEAAXHPEBDH@Z(this, controllerIndex, commerce_item_id, column);
}

/*
==============
Online_Commerce::HavePaidEntitlement
==============
*/

bool __fastcall Online_Commerce::HavePaidEntitlement(Online_Commerce *this, const int controllerIndex)
{
  return ?HavePaidEntitlement@Online_Commerce@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::AddStoreEntitlements
==============
*/

void __fastcall Online_Commerce::AddStoreEntitlements(Online_Commerce *this, const int controllerIndex, const char *id, const int count, const bool consumable)
{
  ?AddStoreEntitlements@Online_Commerce@@QEAAXHPEBDH_N@Z(this, controllerIndex, id, count, consumable);
}

/*
==============
Online_Commerce::ExchangeFailed
==============
*/

void __fastcall Online_Commerce::ExchangeFailed(Online_Commerce *this, const int controllerIndex, Online_Error_CAT_COMMERCE_t error_code, const char *context)
{
  ?ExchangeFailed@Online_Commerce@@QEAAXHW4Online_Error_CAT_COMMERCE_t@@PEBD@Z(this, controllerIndex, error_code, context);
}

/*
==============
Online_Commerce::GetPaidEntitlementTaskState
==============
*/

ENTITLEMENT_STATE __fastcall Online_Commerce::GetPaidEntitlementTaskState(Online_Commerce *this, const int controllerIndex)
{
  return ?GetPaidEntitlementTaskState@Online_Commerce@@QEAA?AW4ENTITLEMENT_STATE@@H@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::Uninit
==============
*/

void __fastcall Online_Commerce::Uninit(Online_Commerce *this)
{
  ?Uninit@Online_Commerce@@UEAAXXZ(this);
}

/*
==============
Online_Commerce::GetCurrencyAmount
==============
*/

__int64 __fastcall Online_Commerce::GetCurrencyAmount(Online_Commerce *this, const int controllerIndex, const int currencyid)
{
  return ?GetCurrencyAmount@Online_Commerce@@QEAA_JHH@Z(this, controllerIndex, currencyid);
}

/*
==============
Online_Commerce::GetInstancePtr
==============
*/

Online_Commerce *__fastcall Online_Commerce::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Commerce@@SAPEAV1@XZ();
}

/*
==============
Online_Commerce::GetCurrency
==============
*/

void __fastcall Online_Commerce::GetCurrency(Online_Commerce *this, const int controllerIndex)
{
  ?GetCurrency@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::OnUnregistered
==============
*/

void __fastcall Online_Commerce::OnUnregistered(Online_Commerce *this)
{
  ?OnUnregistered@Online_Commerce@@UEAAXXZ(this);
}

/*
==============
Online_Commerce::OnSignedIn
==============
*/

void __fastcall Online_Commerce::OnSignedIn(Online_Commerce *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Commerce@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_Commerce::Frame
==============
*/

void __fastcall Online_Commerce::Frame(Online_Commerce *this)
{
  ?Frame@Online_Commerce@@UEAAXXZ(this);
}

/*
==============
Online_Commerce::GetDurableStoreEntitlementIdByIndex
==============
*/

int __fastcall Online_Commerce::GetDurableStoreEntitlementIdByIndex(Online_Commerce *this, const int controllerIndex, int index)
{
  return ?GetDurableStoreEntitlementIdByIndex@Online_Commerce@@QEAAHHH@Z(this, controllerIndex, index);
}

/*
==============
Online_Commerce::OnDisconnect
==============
*/

void __fastcall Online_Commerce::OnDisconnect(Online_Commerce *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Commerce@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Commerce::SetPaidEntitlementTaskState
==============
*/

void __fastcall Online_Commerce::SetPaidEntitlementTaskState(Online_Commerce *this, const int controllerIndex, ENTITLEMENT_STATE state)
{
  ?SetPaidEntitlementTaskState@Online_Commerce@@QEAAXHW4ENTITLEMENT_STATE@@@Z(this, controllerIndex, state);
}

/*
==============
Online_Commerce::HandleGetCurrencyComplete
==============
*/

void __fastcall Online_Commerce::HandleGetCurrencyComplete(Online_Commerce *this, const int controllerIndex)
{
  ?HandleGetCurrencyComplete@Online_Commerce@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::GetNumStoreEntitlements
==============
*/

int __fastcall Online_Commerce::GetNumStoreEntitlements(Online_Commerce *this, const int controllerIndex)
{
  return ?GetNumStoreEntitlements@Online_Commerce@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_Commerce::SetEntitlementTaskState
==============
*/

void __fastcall Online_Commerce::SetEntitlementTaskState(Online_Commerce *this, const int controllerIndex, ENTITLEMENT_STATE state)
{
  ?SetEntitlementTaskState@Online_Commerce@@QEAAXHW4ENTITLEMENT_STATE@@@Z(this, controllerIndex, state);
}

/*
==============
Online_Commerce::GetDurableStoreEntitlementIdByBnetLicense
==============
*/

int __fastcall Online_Commerce::GetDurableStoreEntitlementIdByBnetLicense(Online_Commerce *this, int license)
{
  return ?GetDurableStoreEntitlementIdByBnetLicense@Online_Commerce@@QEAAHH@Z(this, license);
}

/*
==============
Online_Commerce::OutputCurrentState
==============
*/

void __fastcall Online_Commerce::OutputCurrentState(Online_Commerce *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Commerce@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnGetCurrencyComplete
==============
*/

void __fastcall OnGetCurrencyComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetCurrencyComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Commerce::ResetStoreEntitlements
==============
*/

void __fastcall Online_Commerce::ResetStoreEntitlements(Online_Commerce *this, const int controllerIndex, const bool fromSignin)
{
  ?ResetStoreEntitlements@Online_Commerce@@QEAAXH_N@Z(this, controllerIndex, fromSignin);
}

/*
==============
Online_Commerce::SetHavePaidEntitlement
==============
*/

void __fastcall Online_Commerce::SetHavePaidEntitlement(Online_Commerce *this, const int controllerIndex, bool havePaidEntitlement)
{
  ?SetHavePaidEntitlement@Online_Commerce@@QEAAXH_N@Z(this, controllerIndex, havePaidEntitlement);
}

/*
==============
Online_Commerce::RegisterLuaFunctions
==============
*/

void __fastcall Online_Commerce::RegisterLuaFunctions(Online_Commerce *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Commerce@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
LUI_CoD_LuaCall_GetCurrency
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrency(lua_State *const luaVM)
{
  __int64 Amount; 
  int v5; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Commerce.GetCurrency( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Commerce.GetCurrency( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Commerce.GetCurrency( <controller><id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  Amount = 0i64;
  v5 = 0;
  __asm { vcvttsd2si r15d, xmm0 }
  if ( Online_Commerce::s_instance.m_playerBalancesFound[_EBX] > 0 )
  {
    while ( 1 )
    {
      v7 = 20i64 * _EBX + v5;
      if ( bdMarketplaceCurrencyAmount::getCurrencyID(&Online_Commerce::s_instance.m_playerBalances[0][v7]) == _ER15 )
        break;
      if ( ++v5 >= Online_Commerce::s_instance.m_playerBalancesFound[_EBX] )
        goto LABEL_12;
    }
    Amount = bdMarketplaceCurrencyAmount::getAmount(&Online_Commerce::s_instance.m_playerBalances[0][v7]);
  }
LABEL_12:
  v8 = truncate_cast<int,__int64>(Amount);
  j_lua_pushinteger(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasError
==============
*/
__int64 LUI_CoD_LuaCall_HasError(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, Online_Commerce::s_instance.m_hasError);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasEmptyStore
==============
*/
__int64 LUI_CoD_LuaCall_HasEmptyStore(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, Online_Commerce::s_instance.m_hasEmptyStore);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSignInExchangeState
==============
*/
__int64 LUI_CoD_LuaCall_GetSignInExchangeState(lua_State *const luaVM)
{
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Commerce.GetSignInExchangeState( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Commerce.GetSignInExchangeState( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, dword ptr [rax+rcx*4]; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetSignInExchangeState
==============
*/
__int64 LUI_CoD_LuaCall_SetSignInExchangeState(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Commerce.SetSignInExchangeState( <controller><state> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Commerce.SetSignInExchangeState( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Commerce.SetSignInExchangeState( <state> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebx, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si ecx, xmm0 }
  Online_Commerce::s_instance.m_signInExchangeState[_EBX] = _ECX;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasLaunchItem
==============
*/
__int64 LUI_CoD_LuaCall_HasLaunchItem(lua_State *const luaVM)
{
  const dvar_t *v4; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Commerce.HasLaunchItem( <controller><id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Commerce.HasLaunchItem( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Commerce.HasLaunchItem( <id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si eax, xmm0 }
  if ( _EAX )
    goto LABEL_13;
  v4 = DVARBOOL_online_terminal_for_everyone;
  if ( !DVARBOOL_online_terminal_for_everyone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_terminal_for_everyone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
LABEL_13:
    v5 = 0;
  else
    v5 = 1;
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
LUI_CoD_LuaCall_GetPS4Region
==============
*/
__int64 LUI_CoD_LuaCall_GetPS4Region(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 875, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PS4 Only function. Do not use on other platforms") )
    __debugbreak();
  j_lua_pushinteger(luaVM, 0i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_ShowFirstPartyStore
==============
*/
__int64 LUI_CoD_LuaCall_ShowFirstPartyStore(lua_State *const luaVM)
{
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Commerce.ShowFirstPartyStore( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edi, xmm0 }
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Commerce.ShowFirstPartyStore( <controller><productID> )\n");
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  Online_Commerce::ShowFirstPartyStore(&Online_Commerce::s_instance, _EDI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
Online_Commerce::OnRegistered
==============
*/
void Online_Commerce::OnRegistered(Online_Commerce *this)
{
  ;
}

/*
==============
Online_Commerce::OnUnregistered
==============
*/
void Online_Commerce::OnUnregistered(Online_Commerce *this)
{
  ;
}

/*
==============
Online_Commerce::Init
==============
*/
__int64 Online_Commerce::Init(Online_Commerce *this)
{
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *LanguageString; 
  __int64 result; 
  InGameStoreConfig config; 
  char dest[32]; 

  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  Com_sprintf<32>((char (*)[32])dest, "%d", TitleID);
  LanguageString = MarketingCommsManager::GetLanguageString();
  Core_strcpy(config.languageCode, 8ui64, LanguageString);
  Core_strcpy(config.ps4TitleId, 0x10ui64, (const char *)&queryFormat.fmt + 3);
  Core_strcpy(config.objectStorePublisher, 0x20ui64, "infinityward");
  Core_strcpy(config.objectStoreClient, 0x40ui64, "iw-cod-iw8-xone");
  Core_strcpy(config.objectStoreContext, 0x10ui64, dest);
  Core_strcpy(config.marketplaceContext, 0x10ui64, dest);
  InGameStore_Init(&config);
  *(_QWORD *)this->m_signInExchangeState = -1i64;
  result = 1i64;
  *(_QWORD *)this->m_playerBalancesFound = 0i64;
  *(_QWORD *)&this->m_signInExchangeState[2] = -1i64;
  *(_QWORD *)&this->m_playerBalancesFound[2] = 0i64;
  *(_QWORD *)&this->m_signInExchangeState[4] = -1i64;
  *(_QWORD *)&this->m_playerBalancesFound[4] = 0i64;
  *(_QWORD *)&this->m_signInExchangeState[6] = -1i64;
  *(_QWORD *)&this->m_playerBalancesFound[6] = 0i64;
  this->m_hasError = 0;
  return result;
}

/*
==============
Online_Commerce::Uninit
==============
*/

void __fastcall Online_Commerce::Uninit(Online_Commerce *this)
{
  InGameStore_Shutdown();
}

/*
==============
Online_Commerce::Frame
==============
*/

void __fastcall Online_Commerce::Frame(Online_Commerce *this)
{
  InGameStore_Frame();
}

/*
==============
Online_Commerce::OnSignedIn
==============
*/
void Online_Commerce::OnSignedIn(Online_Commerce *this, const int controllerIndex, GenericSignInState signinState)
{
  __int64 v3; 

  if ( signinState == SignedInToDemonWare )
  {
    v3 = controllerIndex;
    Online_Commerce::s_instance.m_inventoryState = INVENTORY_STATE_CONSUMABLE;
    Online_Commerce::s_instance.m_storeEntitlements[v3].numItems = 0;
    Online_Commerce::s_instance.m_storeEntitlements[v3].taskState = ENTITLEMENT_STATE_IDLE;
    Online_Commerce::s_instance.m_storeEntitlements[v3].fromSignIn = 1;
    Online_Commerce::GetEntitlements(&Online_Commerce::s_instance, controllerIndex);
  }
}

/*
==============
Online_Commerce::OnSignedOut
==============
*/
void Online_Commerce::OnSignedOut(Online_Commerce *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_Commerce::OnDisconnect
==============
*/
void Online_Commerce::OnDisconnect(Online_Commerce *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Commerce::RegisterLuaFunctions
==============
*/
void Online_Commerce::RegisterLuaFunctions(Online_Commerce *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Commerce", Loot_methods);
  j_lua_settop(luaVM, -2);
  InGameStore_RegisterLua(luaVM);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Commerce::OutputCurrentState
==============
*/
void Online_Commerce::OutputCurrentState(Online_Commerce *this, const int controllerIndex)
{
  int v2; 
  int *v4; 
  __int64 v5; 
  __int64 Amount; 
  unsigned __int8 CurrencyID; 

  v2 = 0;
  v4 = &this->m_playerBalancesFound[controllerIndex];
  if ( *v4 > 0 )
  {
    v5 = controllerIndex;
    do
    {
      Amount = bdMarketplaceCurrencyAmount::getAmount(&this->m_playerBalances[v5][v2]);
      if ( (unsigned __int64)(Amount + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Amount, "signed", Amount) )
        __debugbreak();
      CurrencyID = bdMarketplaceCurrencyAmount::getCurrencyID(&this->m_playerBalances[v5][v2]);
      Com_Printf(25, "CurrencyID: %d = %d\n", CurrencyID, (unsigned int)Amount);
      ++v2;
    }
    while ( v2 < *v4 );
  }
}

/*
==============
Online_Commerce::AddStoreEntitlements
==============
*/
void Online_Commerce::AddStoreEntitlements(Online_Commerce *this, const int controllerIndex, const char *id, const int count, const bool consumable)
{
  __int64 v6; 
  const char *v9; 
  __int64 numItems; 
  __int64 v11; 
  StringTable *tablePtr; 

  v6 = controllerIndex;
  if ( this->m_storeEntitlements[v6].numItems >= 60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 538, ASSERT_TYPE_ASSERT, "(m_storeEntitlements[controllerIndex].numItems < 60)", (const char *)&queryFormat, "m_storeEntitlements[controllerIndex].numItems < INGAMESTORE_MAX_PRODUCT_COUNT") )
    __debugbreak();
  StringTable_GetAsset("loot/dlc_ids.csv", (const StringTable **)&tablePtr);
  v9 = StringTable_Lookup(tablePtr, 4, id, 0);
  if ( v9 )
  {
    if ( *v9 )
    {
      numItems = this->m_storeEntitlements[v6].numItems;
      v11 = v6 * 2892 + 48 * numItems;
      *(int *)((char *)&this->m_storeEntitlements[0].entitlement[0].itemId + v11) = atoi(v9);
      *(int *)((char *)&this->m_storeEntitlements[0].entitlement[numItems].itemAmount + v6 * 2892) = count;
      *(int *)((char *)&this->m_storeEntitlements[0].entitlement[0].consumable + v11) = consumable;
      Core_strcpy(&this->m_storeEntitlements[0].entitlement[0].productLabel[v11], 0x21ui64, id);
      ++this->m_storeEntitlements[v6].numItems;
    }
  }
}

/*
==============
Online_Commerce::ExchangeFailed
==============
*/
void Online_Commerce::ExchangeFailed(Online_Commerce *this, const int controllerIndex, __int64 error_code, const char *context)
{
  __int64 v4; 
  Online_Error_CAT_COMMERCE_t v7; 
  lua_State *v8; 
  LocalClientNum_t ClientFromController; 
  char *v10; 

  v4 = controllerIndex;
  v7 = (int)error_code;
  Com_PrintError(25, "Exchange Failed %zu %s\n", error_code, context);
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v7, context);
  v8 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  if ( LUI_BeginEvent(ClientFromController, "exchanged_item_failed", v8) )
  {
    LUI_SetTableBool("fromSignIn", this->m_storeEntitlements[v4].fromSignIn, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  v10 = (char *)this + 2892 * v4;
  if ( *((_DWORD *)v10 + 20734) == 2 )
  {
    Com_PrintError(25, "Exchanging Items Failed\n");
    if ( v10[82932] )
    {
      this->m_signInExchangeState[v4] = 3;
      v10[82932] = 0;
    }
    *((_DWORD *)v10 + 20734) = 3;
    Online_Commerce::GetCurrency(this, v4);
  }
}

/*
==============
Online_Commerce::ExchangeItemsError
==============
*/
void Online_Commerce::ExchangeItemsError(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( this->m_storeEntitlements[v2].fromSignIn )
  {
    this->m_signInExchangeState[controllerIndex] = 3;
    this->m_storeEntitlements[v2].fromSignIn = 0;
  }
  this->m_storeEntitlements[v2].taskState = ENTITLEMENT_STATE_COMPLETE;
  Online_Commerce::GetCurrency(this, controllerIndex);
}

/*
==============
Online_Commerce::GetCurrency
==============
*/
void Online_Commerce::GetCurrency(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *Balance; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v2 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, v2);
  Balance = (TaskCreateRequest *)DWMarketplace::getBalance(MarketPlace, &result, &this->m_playerCurrencyRequests[v2], &this->m_playerCurrencyResponses[v2]);
  if ( Balance != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v7 = *(bdRemoteTask **)&Balance->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v2;
    pTaskCreateRequest.m_onCompletionCallback = OnGetCurrencyComplete;
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
      Com_Printf(25, "getBalance() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v2);
    else
      Com_PrintError(25, "getBalance() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v2);
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
Online_Commerce::GetCurrencyAmount
==============
*/
__int64 Online_Commerce::GetCurrencyAmount(Online_Commerce *this, const int controllerIndex, const int currencyid)
{
  __int64 v3; 
  int v4; 
  __int64 v7; 

  v3 = controllerIndex;
  v4 = 0;
  if ( this->m_playerBalancesFound[controllerIndex] <= 0 )
    return 0i64;
  v7 = controllerIndex;
  while ( bdMarketplaceCurrencyAmount::getCurrencyID(&this->m_playerBalances[v7][v4]) != currencyid )
  {
    if ( ++v4 >= this->m_playerBalancesFound[v3] )
      return 0i64;
  }
  return bdMarketplaceCurrencyAmount::getAmount(&this->m_playerBalances[v7][v4]);
}

/*
==============
Online_Commerce::GetDurableStoreEntitlementIdByBnetLicense
==============
*/
int Online_Commerce::GetDurableStoreEntitlementIdByBnetLicense(Online_Commerce *this, int license)
{
  const char *v3; 
  StringTable *tablePtr; 
  char dest[32]; 

  StringTable_GetAsset("loot/dlc_ids.csv", (const StringTable **)&tablePtr);
  Com_sprintf(dest, 0x20ui64, "%i", (unsigned int)license);
  v3 = StringTable_Lookup(tablePtr, 6, dest, 0);
  if ( v3 && *v3 )
    return atoi(v3);
  else
    return -1;
}

/*
==============
Online_Commerce::GetDurableStoreEntitlementIdByIndex
==============
*/
__int64 Online_Commerce::GetDurableStoreEntitlementIdByIndex(Online_Commerce *this, const int controllerIndex, int index)
{
  __int64 v3; 
  __int64 v5; 
  char *v6; 

  v3 = controllerIndex;
  v5 = index;
  if ( (unsigned int)controllerIndex > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 490, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
      __debugbreak();
    if ( (unsigned int)v3 > 7 )
      return 0xFFFFFFFFi64;
  }
  if ( (int)v5 >= 60 )
    return 0xFFFFFFFFi64;
  v6 = (char *)this + 2892 * v3;
  if ( *(_DWORD *)&v6[48 * v5 + 82948] )
    return 0xFFFFFFFFi64;
  else
    return *(unsigned int *)&v6[48 * v5 + 82940];
}

/*
==============
Online_Commerce::GetInstance
==============
*/
Online_Commerce *Online_Commerce::GetInstance()
{
  return &Online_Commerce::s_instance;
}

/*
==============
Online_Commerce::GetInstancePtr
==============
*/
Online_Commerce *Online_Commerce::GetInstancePtr()
{
  return &Online_Commerce::s_instance;
}

/*
==============
Online_Commerce::GetNumStoreEntitlements
==============
*/
__int64 Online_Commerce::GetNumStoreEntitlements(Online_Commerce *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex <= 7 )
    return (unsigned int)this->m_storeEntitlements[v2].numItems;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 474, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0 && controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex >= 0 && controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 )
    return 0i64;
  else
    return (unsigned int)this->m_storeEntitlements[v2].numItems;
}

/*
==============
Online_Commerce::GetPaidEntitlementTaskState
==============
*/
__int64 Online_Commerce::GetPaidEntitlementTaskState(Online_Commerce *this, const int controllerIndex)
{
  return (unsigned int)this->m_paidEntitlementTaskState[controllerIndex];
}

/*
==============
Online_Commerce::HandleGetCurrencyComplete
==============
*/
void Online_Commerce::HandleGetCurrencyComplete(Online_Commerce *this, const int controllerIndex)
{
  __int64 v3; 
  bdGetPlayerBalancesResponse *v4; 
  int NumBalances; 
  int *v6; 
  signed int v7; 
  bdMarketplaceCurrencyAmount_vtbl **v8; 
  bdMarketplaceCurrencyAmount *Balance; 
  bdMarketplaceCurrencyAmount result; 

  v3 = controllerIndex;
  v4 = &this->m_playerCurrencyResponses[controllerIndex];
  NumBalances = bdGetPlayerBalancesResponse::getNumBalances(v4);
  v6 = &this->m_playerBalancesFound[v3];
  *v6 = NumBalances;
  v7 = 0;
  if ( NumBalances > 0 )
  {
    v8 = &this->m_playerBalances[v3][0].__vftable + 2;
    do
    {
      Balance = bdGetPlayerBalancesResponse::getBalance(v4, &result, v7);
      bdReferencable::operator=((bdReferencable *)((char *)v8 + SHIDWORD((*(v8 - 1))->serialize) - 8), (const bdReferencable *)((char *)&Balance->__vftable + *(int *)(*((_QWORD *)&Balance->__vftable + 1) + 4i64) + 8));
      *(_BYTE *)v8 = *((_BYTE *)&Balance->__vftable + 16);
      v8[1] = (bdMarketplaceCurrencyAmount_vtbl *)*((_QWORD *)&Balance->__vftable + 3);
      *((_WORD *)v8 + 8) = Balance->m_collisionField;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&result.gap22[6]);
      ++v7;
      v8 += 7;
    }
    while ( v7 < *v6 );
  }
}

/*
==============
Online_Commerce::HasStoreEntitlement
==============
*/
__int64 Online_Commerce::HasStoreEntitlement(Online_Commerce *this, const int controllerIndex, const int id)
{
  int v3; 
  __int64 v4; 
  __int64 numItems; 
  __int64 v6; 
  StoreEntitlement *i; 

  v3 = 0;
  v4 = controllerIndex;
  numItems = this->m_storeEntitlements[v4].numItems;
  if ( numItems <= 0 )
    return 0xFFFFFFFFi64;
  v6 = 0i64;
  for ( i = this->m_storeEntitlements[v4].entitlement; i->itemId != id; ++i )
  {
    ++v3;
    if ( ++v6 >= numItems )
      return 0xFFFFFFFFi64;
  }
  return *(unsigned int *)((char *)&this->m_storeEntitlements[0].entitlement[v3].itemAmount + v4 * 2892);
}

/*
==============
Online_Commerce::HavePaidEntitlement
==============
*/
_BOOL8 Online_Commerce::HavePaidEntitlement(Online_Commerce *this, const int controllerIndex)
{
  return this->m_havePaidEntitlement[controllerIndex];
}

/*
==============
OnGetCurrencyComplete
==============
*/
void OnGetCurrencyComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned int NumResults; 
  __int64 m_controllerIndex; 
  int NumBalances; 
  int *v6; 
  signed int v7; 
  bdGetPlayerBalancesResponse *v8; 
  int *v9; 
  bdMarketplaceCurrencyAmount *Balance; 
  lua_State *v11; 
  LocalClientNum_t ClientFromController; 
  Online_ErrorReporting *InstancePtr; 
  bdLobbyErrorCode ErrorCode; 
  const char *v15; 
  bdMarketplaceCurrencyAmount result; 

  if ( taskState )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    v15 = j_va("%d", (unsigned int)ErrorCode);
    Online_ErrorReporting::ReportError(InstancePtr, COUNT, v15);
    Com_PrintWarning(25, "Error: Found 0 Currencies\n");
  }
  else
  {
    NumResults = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Found %d Currencies\n", NumResults);
    m_controllerIndex = pTask->m_controllerIndex;
    NumBalances = bdGetPlayerBalancesResponse::getNumBalances(&Online_Commerce::s_instance.m_playerCurrencyResponses[m_controllerIndex]);
    v6 = &Online_Commerce::s_instance.m_playerBalancesFound[m_controllerIndex];
    *v6 = NumBalances;
    v7 = 0;
    if ( NumBalances > 0 )
    {
      v8 = &Online_Commerce::s_instance.m_playerCurrencyResponses[m_controllerIndex];
      v9 = &Online_Commerce::s_instance.m_playerBalancesFound[280 * m_controllerIndex - 2236];
      do
      {
        Balance = bdGetPlayerBalancesResponse::getBalance(v8, &result, v7);
        bdReferencable::operator=((bdReferencable *)((char *)v9 + *(int *)(*((_QWORD *)v9 - 1) + 4i64) - 8), (const bdReferencable *)((char *)&Balance->__vftable + *(int *)(*((_QWORD *)&Balance->__vftable + 1) + 4i64) + 8));
        *(_BYTE *)v9 = *((_BYTE *)&Balance->__vftable + 16);
        *((_QWORD *)v9 + 1) = *((_QWORD *)&Balance->__vftable + 3);
        *((_WORD *)v9 + 8) = Balance->m_collisionField;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&result.gap22[6]);
        ++v7;
        v9 += 14;
      }
      while ( v7 < *v6 );
    }
    Online_Commerce::s_instance.OutputCurrentState(&Online_Commerce::s_instance, pTask->m_controllerIndex);
    v11 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    if ( LUI_BeginEvent(ClientFromController, "update_currency", v11) )
      LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
OnStartExchangeTransactionComplete
==============
*/
void OnStartExchangeTransactionComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  bdLobbyErrorCode ErrorCode; 
  const char *v4; 

  if ( taskState )
  {
    Com_PrintWarning(25, "Error: startExchangeTransaction \n");
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    v4 = j_va("%d", (unsigned int)ErrorCode);
    Online_Commerce::ExchangeFailed(&Online_Commerce::s_instance, pTask->m_controllerIndex, DODGE, v4);
  }
  else
  {
    Com_Printf(25, "startExchangeTransaction complete\n");
    Online_Commerce::StartProcessProduct(&Online_Commerce::s_instance, pTask->m_controllerIndex);
  }
}

/*
==============
Online_Commerce::ResetStoreEntitlements
==============
*/
void Online_Commerce::ResetStoreEntitlements(Online_Commerce *this, const int controllerIndex, const bool fromSignin)
{
  __int64 v3; 

  v3 = controllerIndex;
  this->m_inventoryState = INVENTORY_STATE_CONSUMABLE;
  this->m_storeEntitlements[v3].numItems = 0;
  this->m_storeEntitlements[v3].taskState = ENTITLEMENT_STATE_IDLE;
  this->m_storeEntitlements[v3].fromSignIn = fromSignin;
}

/*
==============
Online_Commerce::SetEntitlementTaskState
==============
*/
void Online_Commerce::SetEntitlementTaskState(Online_Commerce *this, const int controllerIndex, ENTITLEMENT_STATE state)
{
  this->m_storeEntitlements[controllerIndex].taskState = state;
}

/*
==============
Online_Commerce::SetHavePaidEntitlement
==============
*/
void Online_Commerce::SetHavePaidEntitlement(Online_Commerce *this, const int controllerIndex, bool havePaidEntitlement)
{
  this->m_havePaidEntitlement[controllerIndex] = havePaidEntitlement;
}

/*
==============
Online_Commerce::SetPaidEntitlementTaskState
==============
*/
void Online_Commerce::SetPaidEntitlementTaskState(Online_Commerce *this, const int controllerIndex, ENTITLEMENT_STATE state)
{
  this->m_paidEntitlementTaskState[controllerIndex] = state;
}

/*
==============
Online_Commerce::StartExchangeTransaction
==============
*/
void Online_Commerce::StartExchangeTransaction(Online_Commerce *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *started; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  *(_QWORD *)this->m_exchangeTransactionId._bytes_20 = this->m_exchangeTransactionString;
  *(_DWORD *)&this->m_exchangeTransactionId._bytes_20[8] = 128;
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, controllerIndex);
  started = (TaskCreateRequest *)DWMarketplace::startExchangeTransaction(MarketPlace, &result, &this->m_exchangeTransactionId);
  if ( started != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&started->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = OnStartExchangeTransactionComplete;
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "startExchangeTransaction() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)controllerIndex);
    }
    else
    {
      Online_Commerce::ExchangeFailed(this, controllerIndex, DODGE, "task_failed");
      Com_PrintError(25, "startExchangeTransaction() - CreateTask failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
    }
  }
  else
  {
    Online_Commerce::ExchangeFailed(this, controllerIndex, DODGE, "call_failed");
    Com_PrintError(25, "startExchangeTransaction() - Call failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
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
Online_Commerce::UpdateCurrency
==============
*/
void Online_Commerce::UpdateCurrency(Online_Commerce *this, const int controllerIndex, int currencyID, __int64 amount, bool set)
{
  int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  bdMarketplaceCurrencyAmount *v12; 
  __int64 v13; 
  __int64 v14; 
  bdMarketplaceCurrencyAmount *v15; 
  __int64 v16; 
  bdMarketplaceCurrencyAmount v17; 

  v8 = 0;
  v9 = controllerIndex;
  v10 = this->m_playerBalancesFound[controllerIndex];
  if ( v10 <= 0 )
  {
LABEL_5:
    if ( v10 >= 20 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 279, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Max Currencies Hit. Please update ONLINE_CURRENCY_MAX") )
        __debugbreak();
    }
    else
    {
      bdMarketplaceCurrencyAmount::bdMarketplaceCurrencyAmount(&v17, currencyID, amount, 0);
      v14 = v13;
      v15 = &this->m_playerBalances[v9][this->m_playerBalancesFound[v9]];
      bdReferencable::operator=((bdReferencable *)((char *)&v15->__vftable + *(int *)(*((_QWORD *)&this->m_playerBalances[v9][this->m_playerBalancesFound[v9]].__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v13 + 8) + 4i64) + v13 + 8));
      *((_BYTE *)&v15->__vftable + 16) = *(_BYTE *)(v14 + 16);
      *((_QWORD *)&v15->__vftable + 3) = *(_QWORD *)(v14 + 24);
      v15->m_collisionField = *(_WORD *)(v14 + 32);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v17.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v17.gap22[6]);
      ++this->m_playerBalancesFound[v9];
    }
  }
  else
  {
    v11 = controllerIndex;
    while ( 1 )
    {
      v12 = &this->m_playerBalances[v11][v8];
      if ( bdMarketplaceCurrencyAmount::getCurrencyID(v12) == currencyID )
        break;
      ++v8;
      v10 = this->m_playerBalancesFound[v9];
      if ( v8 >= v10 )
        goto LABEL_5;
    }
    if ( set )
    {
      bdMarketplaceCurrencyAmount::setAmount(v12, amount);
    }
    else
    {
      v16 = bdMarketplaceCurrencyAmount::getAmount(v12);
      bdMarketplaceCurrencyAmount::setAmount(v12, amount + v16);
    }
  }
}

/*
==============
Online_Commerce::UpdateInventory
==============
*/
void Online_Commerce::UpdateInventory(Online_Commerce *this, const int controllerIndex, const char *commerce_item_id, const int column)
{
  const char *v7; 
  Online_Loot *Instance; 
  int v9; 
  lua_State *v10; 
  LocalClientNum_t ClientFromController; 
  lua_State *v12; 
  int v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  int v17; 
  Online_Loot *v18; 
  Online_Loot *v19; 
  int v20; 
  Online_Loot *v21; 
  int v22; 
  Online_Loot *v23; 
  int v24; 
  StringTable *tablePtr; 

  StringTable_GetAsset("loot/dlc_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_commerce.cpp", 562, ASSERT_TYPE_ASSERT, "(dlcTable)", (const char *)&queryFormat, "dlcTable") )
    __debugbreak();
  v7 = StringTable_Lookup(tablePtr, column, commerce_item_id, 0);
  Instance = Online_Loot::GetInstance();
  v9 = atoi(v7);
  Online_Loot::UpdateItemInInventory(Instance, controllerIndex, v9 + 1000, 1, 0);
  v10 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "exchanged_item", v10) )
  {
    v12 = LUI_luaVM;
    v13 = atoi(v7);
    LUI_SetTableInt("exchangeID", v13, v12);
    LUI_EndEvent(LUI_luaVM);
  }
  v14 = 12;
  while ( 1 )
  {
    v15 = StringTable_Lookup(tablePtr, column, commerce_item_id, v14);
    v16 = v15;
    if ( !v15 || !*v15 )
      break;
    v17 = atoi(v15);
    v18 = Online_Loot::GetInstance();
    v19 = v18;
    if ( (unsigned int)(v17 - 400000) > 0x270E )
    {
      v20 = atoi(v16);
      if ( !Online_Loot::GetItemQuantity(v19, controllerIndex, v20) )
      {
        v21 = Online_Loot::GetInstance();
        v22 = atoi(v16);
        Online_Loot::AddToLastLootDrops(v21, controllerIndex, v22);
      }
      v23 = Online_Loot::GetInstance();
      v24 = atoi(v16);
      Online_Loot::UpdateItemInInventory(v23, controllerIndex, v24, 1, 0);
      ++v14;
    }
    else
    {
      Online_Loot::UpdateInventoryFromBundle(v18, controllerIndex, v17, "loot/bundle_ids.csv", 13, 14, 1, 1);
      ++v14;
    }
  }
}

