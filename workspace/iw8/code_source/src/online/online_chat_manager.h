/*
==============
OnlineChatManager::OnUnregistered
==============
*/

void __fastcall OnlineChatManager::OnUnregistered(OnlineChatManager *this)
{
  ?OnUnregistered@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::OnFrontEnd_AllocateSystemsMemory
==============
*/

void __fastcall OnlineChatManager::OnFrontEnd_AllocateSystemsMemory(OnlineChatManager *this)
{
  ?OnFrontEnd_AllocateSystemsMemory@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::OutputCurrentState
==============
*/

void __fastcall OnlineChatManager::OutputCurrentState(OnlineChatManager *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineChatManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::OnDisconnect
==============
*/

void __fastcall OnlineChatManager::OnDisconnect(OnlineChatManager *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineChatManager@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineChatManager::OnUserStatsFetched
==============
*/

void __fastcall OnlineChatManager::OnUserStatsFetched(OnlineChatManager *this, const int controllerIndex, StatsSource statsSource)
{
  ?OnUserStatsFetched@OnlineChatManager@@UEAAXHW4StatsSource@@@Z(this, controllerIndex, statsSource);
}

/*
==============
OnlineChatManager::ControllerFrame
==============
*/

void __fastcall OnlineChatManager::ControllerFrame(OnlineChatManager *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineChatManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChatManager::OnRegistered
==============
*/

void __fastcall OnlineChatManager::OnRegistered(OnlineChatManager *this)
{
  ?OnRegistered@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::RegisterLuaFunctions
==============
*/

void __fastcall OnlineChatManager::RegisterLuaFunctions(OnlineChatManager *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineChatManager@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineChatManager::PendingChat::PendingChat
==============
*/

void __fastcall OnlineChatManager::PendingChat::PendingChat(OnlineChatManager::PendingChat *this)
{
  ??0PendingChat@OnlineChatManager@@QEAA@XZ(this);
}

/*
==============
OnlineChatManager::PendingList::PendingList
==============
*/

void __fastcall OnlineChatManager::PendingList::PendingList(OnlineChatManager::PendingList *this)
{
  ??0PendingList@OnlineChatManager@@QEAA@XZ(this);
}

/*
==============
OnlineChatManager::OnSignedOut
==============
*/

void __fastcall OnlineChatManager::OnSignedOut(OnlineChatManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineChatManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineChatManager::OnFrontEnd_FreeSystemsMemory
==============
*/

void __fastcall OnlineChatManager::OnFrontEnd_FreeSystemsMemory(OnlineChatManager *this)
{
  ?OnFrontEnd_FreeSystemsMemory@OnlineChatManager@@UEAAXXZ(this);
}

/*
==============
OnlineChatManager::OnRegistered
==============
*/
void OnlineChatManager::OnRegistered(OnlineChatManager *this)
{
  ;
}

/*
==============
OnlineChatManager::OnUnregistered
==============
*/
void OnlineChatManager::OnUnregistered(OnlineChatManager *this)
{
  ;
}

/*
==============
OnlineChatManager::ControllerFrame
==============
*/
void OnlineChatManager::ControllerFrame(OnlineChatManager *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineChatManager::OnFrontEnd_AllocateSystemsMemory
==============
*/
void OnlineChatManager::OnFrontEnd_AllocateSystemsMemory(OnlineChatManager *this)
{
  ;
}

/*
==============
OnlineChatManager::OnFrontEnd_FreeSystemsMemory
==============
*/
void OnlineChatManager::OnFrontEnd_FreeSystemsMemory(OnlineChatManager *this)
{
  ;
}

/*
==============
OnlineChatManager::OnUserStatsFetched
==============
*/
void OnlineChatManager::OnUserStatsFetched(OnlineChatManager *this, const int controllerIndex, StatsSource statsSource)
{
  ;
}

/*
==============
OnlineChatManager::OnSignedOut
==============
*/
void OnlineChatManager::OnSignedOut(OnlineChatManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineChatManager::OnDisconnect
==============
*/
void OnlineChatManager::OnDisconnect(OnlineChatManager *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineChatManager::RegisterLuaFunctions
==============
*/
void OnlineChatManager::RegisterLuaFunctions(OnlineChatManager *this, lua_State *luaVM)
{
  ;
}

/*
==============
OnlineChatManager::OutputCurrentState
==============
*/
void OnlineChatManager::OutputCurrentState(OnlineChatManager *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineChatManager::PendingChat::PendingChat
==============
*/
void OnlineChatManager::PendingChat::PendingChat(OnlineChatManager::PendingChat *this)
{
  this->m_id.m_id = 0i64;
  this->m_type = COUNT|DODGE;
}

/*
==============
OnlineChatManager::PendingList::PendingList
==============
*/
void OnlineChatManager::PendingList::PendingList(OnlineChatManager::PendingList *this)
{
  OnlineChatManager::PendingList *v2; 
  __int64 v3; 

  v2 = this;
  v3 = 18i64;
  do
  {
    OnlineChatManager::PendingChat::PendingChat(v2->list);
    v2 = (OnlineChatManager::PendingList *)((char *)v2 + 16);
    --v3;
  }
  while ( v3 );
  this->listCount = 0;
}

