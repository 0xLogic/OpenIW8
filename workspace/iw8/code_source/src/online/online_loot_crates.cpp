/*
==============
Online_LootCrate::Frame
==============
*/

void __fastcall Online_LootCrate::Frame(Online_LootCrate *this)
{
  ?Frame@Online_LootCrate@@UEAAXXZ(this);
}

/*
==============
Online_LootCrate::OnRegistered
==============
*/

void __fastcall Online_LootCrate::OnRegistered(Online_LootCrate *this)
{
  ?OnRegistered@Online_LootCrate@@UEAAXXZ(this);
}

/*
==============
OnPurchaseLootCrateComplete
==============
*/

void __fastcall OnPurchaseLootCrateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnPurchaseLootCrateComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_LootCrate::RegisterLuaFunctions
==============
*/

void __fastcall Online_LootCrate::RegisterLuaFunctions(Online_LootCrate *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_LootCrate@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnOpenLootCrateComplete
==============
*/

void __fastcall OnOpenLootCrateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnOpenLootCrateComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_LootCrate::GetInstance
==============
*/

Online_LootCrate *__fastcall Online_LootCrate::GetInstance()
{
  return ?GetInstance@Online_LootCrate@@SAAEAV1@XZ();
}

/*
==============
Online_LootCrate::OnSignedOut
==============
*/

void __fastcall Online_LootCrate::OnSignedOut(Online_LootCrate *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_LootCrate@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_LootCrate::OutputCurrentState
==============
*/

void __fastcall Online_LootCrate::OutputCurrentState(Online_LootCrate *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_LootCrate@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_LootCrate::OnSignedIn
==============
*/

void __fastcall Online_LootCrate::OnSignedIn(Online_LootCrate *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_LootCrate@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_LootCrate::OnDisconnect
==============
*/

void __fastcall Online_LootCrate::OnDisconnect(Online_LootCrate *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_LootCrate@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_LootCrate::Init
==============
*/

bool __fastcall Online_LootCrate::Init(Online_LootCrate *this)
{
  return ?Init@Online_LootCrate@@UEAA_NXZ(this);
}

/*
==============
Online_LootCrate::OnUnregistered
==============
*/

void __fastcall Online_LootCrate::OnUnregistered(Online_LootCrate *this)
{
  ?OnUnregistered@Online_LootCrate@@UEAAXXZ(this);
}

/*
==============
Online_LootCrate::ExchangeLootCrate
==============
*/

void __fastcall Online_LootCrate::ExchangeLootCrate(Online_LootCrate *this, const int controllerIndex, const int loot_crate)
{
  ?ExchangeLootCrate@Online_LootCrate@@QEAAXHH@Z(this, controllerIndex, loot_crate);
}

/*
==============
Online_LootCrate::Uninit
==============
*/

void __fastcall Online_LootCrate::Uninit(Online_LootCrate *this)
{
  ?Uninit@Online_LootCrate@@UEAAXXZ(this);
}

/*
==============
Online_LootCrate::PurchaseLootCrate
==============
*/

void __fastcall Online_LootCrate::PurchaseLootCrate(Online_LootCrate *this, const int controllerIndex, const unsigned int item_id, const unsigned int amount, const unsigned int base_id)
{
  ?PurchaseLootCrate@Online_LootCrate@@QEAAXHIII@Z(this, controllerIndex, item_id, amount, base_id);
}

/*
==============
Online_LootCrate::DeserialiseLootCrateItems
==============
*/

void __fastcall Online_LootCrate::DeserialiseLootCrateItems(Online_LootCrate *this, const int controllerIndex)
{
  ?DeserialiseLootCrateItems@Online_LootCrate@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_LootCrate::GetInstancePtr
==============
*/

Online_LootCrate *__fastcall Online_LootCrate::GetInstancePtr()
{
  return ?GetInstancePtr@Online_LootCrate@@SAPEAV1@XZ();
}

/*
==============
Online_LootCrate::ControllerFrame
==============
*/

void __fastcall Online_LootCrate::ControllerFrame(Online_LootCrate *this, const int controllerIndex)
{
  ?ControllerFrame@Online_LootCrate@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_LootCrate::OnRegistered
==============
*/
void Online_LootCrate::OnRegistered(Online_LootCrate *this)
{
  ;
}

/*
==============
Online_LootCrate::OnUnregistered
==============
*/
void Online_LootCrate::OnUnregistered(Online_LootCrate *this)
{
  ;
}

/*
==============
Online_LootCrate::Init
==============
*/
char Online_LootCrate::Init(Online_LootCrate *this)
{
  return 1;
}

/*
==============
Online_LootCrate::Uninit
==============
*/
void Online_LootCrate::Uninit(Online_LootCrate *this)
{
  ;
}

/*
==============
Online_LootCrate::Frame
==============
*/
void Online_LootCrate::Frame(Online_LootCrate *this)
{
  ;
}

/*
==============
Online_LootCrate::ControllerFrame
==============
*/
void Online_LootCrate::ControllerFrame(Online_LootCrate *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_LootCrate::OnSignedIn
==============
*/
void Online_LootCrate::OnSignedIn(Online_LootCrate *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_LootCrate::OnSignedOut
==============
*/
void Online_LootCrate::OnSignedOut(Online_LootCrate *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_LootCrate::OnDisconnect
==============
*/
void Online_LootCrate::OnDisconnect(Online_LootCrate *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_LootCrate::RegisterLuaFunctions
==============
*/
void Online_LootCrate::RegisterLuaFunctions(Online_LootCrate *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "LootCrates", LootCrates_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_LootCrate::OutputCurrentState
==============
*/
void Online_LootCrate::OutputCurrentState(Online_LootCrate *this, const int controllerIndex)
{
  Com_Printf(25, "Online_LootCrate DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  __asm
  {
    vmovsd  xmm3, cs:__real@40369a0000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
  Com_Printf(25, "Online_LootCrate DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetLootCrateRewards
==============
*/
__int64 LUI_CoD_LuaCall_GetLootCrateRewards(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetLootCrateRewards_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_PurchaseLootCrate
==============
*/
__int64 LUI_CoD_LuaCall_PurchaseLootCrate(lua_State *const luaVM)
{
  unsigned int base_id; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: LootCrates.PurchaseLootCrate( <controller><item_id><amount><base_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: LootCrates.PurchaseLootCrate( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: LootCrates.PurchaseLootCrate( <item_id> )\n");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: LootCrates.PurchaseLootCrate( <amount> )\n");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: LootCrates.PurchaseLootCrate( <base_id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ebp, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si esi, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
  __asm { vcvttsd2si edi, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 4);
  __asm { vcvttsd2si ebx, xmm0 }
  Com_Printf(25, "PurchaseLootCrate() - Starting to purchase %d of item %d!\n", _EDI, _ESI);
  Online_LootCrate::PurchaseLootCrate(&Online_LootCrate::s_instance, _EBP, _ESI, _EDI, base_id);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ExchangeLootCrate
==============
*/
__int64 LUI_CoD_LuaCall_ExchangeLootCrate(lua_State *const luaVM)
{
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: LootCrates.ExchangeLootCrate( <controller><dw_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: LootCrates.ExchangeLootCrate( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: LootCrates.ExchangeLootCrate( <item_id> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si edi, xmm0 }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si ebx, xmm0 }
  Com_Printf(25, "ExchangeLootCrate() - Starting to exchange item %d!\n", _EBX);
  Online_LootCrate::ExchangeLootCrate(&Online_LootCrate::s_instance, _EDI, _EBX);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
Online_LootCrate::DeserialiseLootCrateItems
==============
*/
void Online_LootCrate::DeserialiseLootCrateItems(Online_LootCrate *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 
  Online_Loot *Instance; 
  int v7; 
  int v8; 
  char v9; 
  char v10; 
  unsigned int v11; 
  Online_Loot *v12; 
  Online_Loot *v13; 
  __int64 num_packs; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  lua_State *v19; 
  LocalClientNum_t ClientFromController; 
  const char *v21; 
  __int64 v22; 
  int quantity; 
  int v24; 
  int m_count; 
  bdJSONDeserializer v26; 
  bdJSONDeserializer value; 
  RewardPack *v28; 
  bdJSONDeserializer v29; 
  bdJSONDeserializer v30; 
  __int64 v31; 
  bdJSONDeserializer v32; 
  bdJSONDeserializer v33; 
  char key[64]; 

  v31 = -2i64;
  v2 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&v32, (const char *)&this->m_openCrateResponse.__vftable + 16);
  v4 = v2;
  v22 = v2;
  v28 = &this->m_LootCrateRewards[v2];
  memset_0(v28, 0, sizeof(RewardPack));
  v5 = 0;
  if ( v32.m_parsed )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    if ( bdJSONDeserializer::getObject(&v32, "Tracking_Info_Batch", &value) && bdJSONDeserializer::getArray(&value, "batched_tracking_info", &value) && bdJSONDeserializer::getObject(&value, 0, &value) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v30);
      if ( bdJSONDeserializer::getObject(&value, "items_consumed", &v30) && bdJSONDeserializer::getString(&v30, "consumption_item_id", (char *const)&v33, 0x40u) && bdJSONDeserializer::getInt32(&v30, "consumption_item_amount", &quantity) )
      {
        Instance = Online_Loot::GetInstance();
        v7 = -quantity;
        v8 = atoi((const char *)&v33);
        Online_Loot::UpdateItemInInventory(Instance, v2, v8, v7, 0);
      }
      bdJSONDeserializer::bdJSONDeserializer(&v29);
      if ( bdJSONDeserializer::getArray(&value, "drop_info", &v29) )
      {
        m_count = v29.m_count;
        if ( (int)v29.m_count > 0 )
        {
          while ( 1 )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v33);
            bdJSONDeserializer::bdJSONDeserializer(&v26);
            v9 = 0;
            v10 = 0;
            if ( bdJSONDeserializer::getObject(&v29, v5, &v33) )
              break;
LABEL_39:
            bdJSONDeserializer::~bdJSONDeserializer(&v26);
            bdJSONDeserializer::~bdJSONDeserializer(&v33);
            if ( ++v5 >= m_count )
            {
              v4 = v2;
              goto LABEL_41;
            }
          }
          if ( bdJSONDeserializer::getObject(&v33, "item_count", &v26) && bdJSONDeserializer::getFieldByIndex(&v26, 0, key, 0x40u, &v26) )
          {
            v11 = atoi(key);
            if ( bdJSONDeserializer::getInt32(&v26, &quantity) )
            {
              Com_Printf(25, "Found %d with amount %d\n", v11, (unsigned int)quantity);
              if ( quantity <= 0 )
              {
                if ( !quantity )
                {
                  this->m_LootCrateRewards[v2].packs[this->m_LootCrateRewards[v22].num_packs] = v11;
                  this->m_LootCrateRewards[v22].pack_is_dupe[this->m_LootCrateRewards[v22].num_packs] = 1;
                  v9 = 1;
                  v10 = 1;
                }
              }
              else
              {
                v12 = Online_Loot::GetInstance();
                Online_Loot::UpdateItemInInventory(v12, v2, v11, quantity, 0);
                v13 = Online_Loot::GetInstance();
                Online_Loot::AddToLastLootDrops(v13, v2, v11);
                num_packs = this->m_LootCrateRewards[v22].num_packs;
                if ( (int)num_packs < 17 )
                {
                  this->m_LootCrateRewards[v2].packs[num_packs] = v11;
                  this->m_LootCrateRewards[v22].pack_is_dupe[this->m_LootCrateRewards[v22].num_packs] = 0;
                  v10 = 1;
                }
              }
            }
          }
          if ( bdJSONDeserializer::getObject(&v33, "granted_currencies", &v26) && bdJSONDeserializer::getFieldByIndex(&v26, 0, key, 0x40u, &v26) )
          {
            v15 = atoi(key);
            if ( bdJSONDeserializer::getInt32(&v26, &v24) )
            {
              if ( v9 )
              {
                if ( v15 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot_crates.cpp", 189, ASSERT_TYPE_ASSERT, "(currency_id == 12)", (const char *)&queryFormat, "currency_id == CURRENCY_SALVAGE_ID") )
                  __debugbreak();
                this->m_LootCrateRewards[v2].pack_salvage[this->m_LootCrateRewards[v22].num_packs] = v24;
              }
              else
              {
                v16 = v15 - 11;
                if ( v16 )
                {
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v18 = v2;
                    this->m_LootCrateRewards[v22].salvage = v24;
                    goto LABEL_37;
                  }
                  if ( v17 == 8 )
                  {
                    v18 = v2;
                    this->m_LootCrateRewards[v22].cod_points = v24;
                    goto LABEL_37;
                  }
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_loot_crates.cpp", 206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown currency in Loot Crates") )
                    __debugbreak();
                }
                else
                {
                  v28->keys = v24;
                }
              }
            }
          }
          v18 = v2;
LABEL_37:
          if ( v10 )
            ++this->m_LootCrateRewards[v18].num_packs;
          goto LABEL_39;
        }
      }
LABEL_41:
      bdJSONDeserializer::~bdJSONDeserializer(&v29);
      bdJSONDeserializer::~bdJSONDeserializer(&v30);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
    v5 = this->m_LootCrateRewards[v4].num_packs;
  }
  v19 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v21 = "loot_crate_open_error";
  if ( v5 )
    v21 = "loot_crate_opened";
  if ( LUI_BeginEvent(ClientFromController, v21, v19) )
    LUI_EndEvent(LUI_luaVM);
  bdJSONDeserializer::~bdJSONDeserializer(&v32);
}

/*
==============
Online_LootCrate::ExchangeLootCrate
==============
*/
void Online_LootCrate::ExchangeLootCrate(Online_LootCrate *this, const int controllerIndex, const int loot_crate)
{
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v8; 
  DWServicesAccess *v9; 
  DWLootGen *LootGen; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  lua_State *v14; 
  LocalClientNum_t ClientFromController; 
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
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v8 = j_va("%u", TitleID);
  bdLootGenerationOpenLootDropRequest::init(&this->m_openCrateRequest, loot_crate, v8, "{\"drop_versions\":[0],\"active_streams\":[0]}");
  v9 = DWServicesAccess::GetInstance();
  LootGen = DWServicesAccess::GetLootGen(v9, controllerIndex);
  v11 = (TaskCreateRequest *)DWLootGen::openLootDrop(LootGen, &result, &this->m_openCrateRequest, &this->m_openCrateResponse);
  if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
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
    pTaskCreateRequest.m_onCompletionCallback = OnOpenLootCrateComplete;
    v13 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "ExchangeLootCrate() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)controllerIndex);
      goto LABEL_15;
    }
    Com_PrintError(25, "ExchangeLootCrate() - CreateTask failed for controllerIndex %d!\n", (unsigned int)controllerIndex);
  }
  else
  {
    Com_PrintError(25, "bdLootGen::openLootDrop failed for controllerIndex %d\n", (unsigned int)controllerIndex);
  }
  v14 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "loot_crate_open_error", v14) )
    LUI_EndEvent(LUI_luaVM);
LABEL_15:
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
Online_LootCrate::GetInstance
==============
*/
Online_LootCrate *Online_LootCrate::GetInstance()
{
  return &Online_LootCrate::s_instance;
}

/*
==============
Online_LootCrate::GetInstancePtr
==============
*/
Online_LootCrate *Online_LootCrate::GetInstancePtr()
{
  return &Online_LootCrate::s_instance;
}

/*
==============
LUI_CoD_LuaCall_GetLootCrateRewards_impl
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetLootCrateRewards_impl(lua_State *const luaVM, long double _XMM1_8)
{
  RewardPack *v5; 
  int v6; 
  int v7; 
  int v8; 
  const int *packs; 
  Online_Loot *Instance; 
  int v14; 
  int v15; 
  __int64 v16; 
  const int *v17; 
  Online_Loot *v18; 
  int v20; 
  int *pack_salvage; 
  Online_Loot *v22; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: LootCrates.GetLootCrateRewards( <controller> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: LootCrates.GetLootCrateRewards( <controller> )\n");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si eax, xmm0 }
  v5 = &Online_LootCrate::s_instance.m_LootCrateRewards[_EAX];
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("items", LUI_luaVM);
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( v5->num_packs > 0 )
  {
    packs = v5->packs;
    do
    {
      Instance = Online_Loot::GetInstance();
      if ( !Online_Loot::IsHidden(Instance, *packs) )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, r14d; n
        }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, dword ptr [rdi]; n
        }
        j_lua_pushnumber(LUI_luaVM, _XMM1_8);
        j_lua_settable(LUI_luaVM, -3);
        ++v8;
      }
      ++v7;
      ++packs;
    }
    while ( v7 < v5->num_packs );
  }
  LUI_EndTable(LUI_luaVM);
  LUI_BeginTable("dupes", LUI_luaVM);
  v14 = 1;
  v15 = 0;
  if ( v5->num_packs > 0 )
  {
    v16 = 0i64;
    v17 = v5->packs;
    do
    {
      v18 = Online_Loot::GetInstance();
      if ( !Online_Loot::IsHidden(v18, *v17) )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, r15d; n
        }
        j_lua_pushnumber(LUI_luaVM, _XMM1_8);
        j_lua_pushboolean(LUI_luaVM, v5->pack_is_dupe[v16]);
        j_lua_settable(LUI_luaVM, -3);
        ++v14;
      }
      ++v15;
      ++v16;
      ++v17;
    }
    while ( v15 < v5->num_packs );
  }
  LUI_EndTable(LUI_luaVM);
  LUI_BeginTable("salvage", LUI_luaVM);
  v20 = 1;
  if ( v5->num_packs > 0 )
  {
    pack_salvage = v5->pack_salvage;
    do
    {
      v22 = Online_Loot::GetInstance();
      if ( !Online_Loot::IsHidden(v22, *(pack_salvage - 63)) )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2sd xmm1, xmm1, esi; n
        }
        j_lua_pushnumber(LUI_luaVM, _XMM1_8);
        j_lua_pushboolean(LUI_luaVM, *pack_salvage);
        j_lua_settable(LUI_luaVM, -3);
        ++v20;
      }
      ++v6;
      ++pack_salvage;
    }
    while ( v6 < v5->num_packs );
  }
  LUI_EndTable(LUI_luaVM);
  LUI_BeginTable("currencies", LUI_luaVM);
  LUI_SetTableInt("Salvage", v5->salvage, luaVM);
  LUI_SetTableInt("Keys", v5->keys, luaVM);
  LUI_SetTableInt("CODPoints", v5->cod_points, luaVM);
  LUI_EndTable(LUI_luaVM);
  return 1i64;
}

/*
==============
OnOpenLootCrateComplete
==============
*/
void OnOpenLootCrateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  lua_State *v5; 
  LocalClientNum_t ClientFromController; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "OpenLootCrate - Error %d %zu.\n", (unsigned int)ErrorCode, TransactionID);
      v5 = LUI_luaVM;
      ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
      if ( LUI_BeginEvent(ClientFromController, "loot_crate_open_error", v5) )
        LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    Com_Printf(25, "OpenLootCrate complete %d.\n", (unsigned int)pTask->m_controllerIndex);
    Online_LootCrate::DeserialiseLootCrateItems(&Online_LootCrate::s_instance, pTask->m_controllerIndex);
  }
}

/*
==============
OnPurchaseLootCrateComplete
==============
*/
void OnPurchaseLootCrateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  lua_State *v5; 
  LocalClientNum_t ClientFromController; 
  bool v7; 
  int m_currentLootCrateID; 
  int m_currentLootCrateAmount; 
  int m_controllerIndex; 
  Online_Commerce *Instance; 
  Online_Loot *v12; 
  lua_State *v13; 
  LocalClientNum_t v14; 

  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) > 1 )
      return;
    TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(25, "PurchaseLootCrate - Error %d %zu.\n", (unsigned int)ErrorCode, TransactionID);
    v5 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    v7 = LUI_BeginEvent(ClientFromController, "loot_crate_purchase_error", v5);
  }
  else
  {
    Com_Printf(25, "PurchaseLootCrate complete %d.\n", (unsigned int)pTask->m_controllerIndex);
    m_currentLootCrateID = Online_LootCrate::s_instance.m_currentLootCrateID;
    m_currentLootCrateAmount = Online_LootCrate::s_instance.m_currentLootCrateAmount;
    m_controllerIndex = pTask->m_controllerIndex;
    Instance = Online_Commerce::GetInstance();
    Online_Commerce::GetCurrency(Instance, m_controllerIndex);
    v12 = Online_Loot::GetInstance();
    Online_Loot::UpdateItemInInventory(v12, m_controllerIndex, m_currentLootCrateID, m_currentLootCrateAmount, 0);
    Online_Telemetry_SendLootPurchaseEvent(pTask->m_controllerIndex, Online_LootCrate::s_instance.m_currentLootCrateID);
    v13 = LUI_luaVM;
    v14 = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    v7 = LUI_BeginEvent(v14, "loot_crate_purchased", v13);
  }
  if ( v7 )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
Online_LootCrate::PurchaseLootCrate
==============
*/
void Online_LootCrate::PurchaseLootCrate(Online_LootCrate *this, const int controllerIndex, const unsigned int item_id, const unsigned int amount, const unsigned int base_id)
{
  __int64 v5; 
  DWServicesAccess *Instance; 
  DWMarketplace *MarketPlace; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  lua_State *v12; 
  LocalClientNum_t ClientFromController; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  unsigned int purchasedQuantities; 
  unsigned int skuIds; 

  v5 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  skuIds = item_id;
  purchasedQuantities = amount;
  this->m_currentLootCrateID = base_id;
  this->m_currentLootCrateAmount = amount;
  Instance = DWServicesAccess::GetInstance();
  MarketPlace = DWServicesAccess::GetMarketPlace(Instance, v5);
  v9 = (TaskCreateRequest *)DWMarketplace::purchaseSkus(MarketPlace, &result, (const char *)&queryFormat.fmt + 3, 1u, &skuIds, &purchasedQuantities, 1u, &this->m_purchaseSkusResult[v5], NULL, NULL, NULL, NULL, 0, 0);
  if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v5;
    pTaskCreateRequest.m_onCompletionCallback = OnPurchaseLootCrateComplete;
    v11 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "PurchaseLootCrate() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v5);
      goto LABEL_19;
    }
    Com_PrintError(25, "PurchaseLootCrate() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v5);
  }
  else
  {
    Com_PrintError(25, "bdMarketplace::purchaseSkus failed for controllerIndex %d\n", (unsigned int)v5);
  }
  v12 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v5);
  if ( LUI_BeginEvent(ClientFromController, "loot_crate_purchase_error", v12) )
    LUI_EndEvent(LUI_luaVM);
LABEL_19:
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

