/*
==============
Online_BlockList::IsBlocked
==============
*/

bool __fastcall Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const XUID xuid, const unsigned __int64 platformId)
{
  return ?IsBlocked@Online_BlockList@@QEAA_NHUXUID@@_K@Z(this, controllerIndex, xuid, platformId);
}

/*
==============
Online_BlockList::RefetchPlatformBlocklist
==============
*/

void __fastcall Online_BlockList::RefetchPlatformBlocklist(Online_BlockList *this, const int controllerIndex)
{
  ?RefetchPlatformBlocklist@Online_BlockList@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_BlockList::BlockListUpdated
==============
*/

void __fastcall Online_BlockList::BlockListUpdated(const int controllerIndex)
{
  ?BlockListUpdated@Online_BlockList@@CAXH@Z(controllerIndex);
}

/*
==============
Online_BlockList::IsBlocked
==============
*/

bool __fastcall Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  return ?IsBlocked@Online_BlockList@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_BlockList::RemovePlayerFromPlatformList
==============
*/

void __fastcall Online_BlockList::RemovePlayerFromPlatformList(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  ?RemovePlayerFromPlatformList@Online_BlockList@@QEAAXH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_BlockList::IsBlockedOnDW
==============
*/

bool __fastcall Online_BlockList::IsBlockedOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  return ?IsBlockedOnDW@Online_BlockList@@AEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_BlockList::OnSignedIn
==============
*/

void __fastcall Online_BlockList::OnSignedIn(Online_BlockList *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_BlockList@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_BlockList::ControllerFrame
==============
*/

void __fastcall Online_BlockList::ControllerFrame(Online_BlockList *this, const int controllerIndex)
{
  ?ControllerFrame@Online_BlockList@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_BlockList::Init
==============
*/

bool __fastcall Online_BlockList::Init(Online_BlockList *this)
{
  return ?Init@Online_BlockList@@UEAA_NXZ(this);
}

/*
==============
Online_BlockList::GetInstancePtr
==============
*/

Online_BlockList *__fastcall Online_BlockList::GetInstancePtr()
{
  return ?GetInstancePtr@Online_BlockList@@SAPEAV1@XZ();
}

/*
==============
Online_BlockList::OnSignedOut
==============
*/

void __fastcall Online_BlockList::OnSignedOut(Online_BlockList *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_BlockList@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_BlockList::NotifyBlockedPlayer
==============
*/

void __fastcall Online_BlockList::NotifyBlockedPlayer(Online_BlockList *this, const int controllerIndex, const XUID blockedPlayer)
{
  ?NotifyBlockedPlayer@Online_BlockList@@QEAAXHUXUID@@@Z(this, controllerIndex, blockedPlayer);
}

/*
==============
Online_BlockList::AddPlayerToPlatformList
==============
*/

void __fastcall Online_BlockList::AddPlayerToPlatformList(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  ?AddPlayerToPlatformList@Online_BlockList@@QEAAXH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_BlockList::OnDWMail
==============
*/

void __fastcall Online_BlockList::OnDWMail(Online_BlockList *this, const int controllerIndex, const char *msg, const int msg_size, bdMailInfo *mailInfo)
{
  ?OnDWMail@Online_BlockList@@UEAAXHPEBDHPEAVbdMailInfo@@@Z(this, controllerIndex, msg, msg_size, mailInfo);
}

/*
==============
Online_BlockList::UnblockPlayerOnDW
==============
*/

bool __fastcall Online_BlockList::UnblockPlayerOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  return ?UnblockPlayerOnDW@Online_BlockList@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_BlockList::GetInstance
==============
*/

Online_BlockList *__fastcall Online_BlockList::GetInstance()
{
  return ?GetInstance@Online_BlockList@@SAAEAV1@XZ();
}

/*
==============
Online_BlockList::BlockPlayerOnDW
==============
*/

bool __fastcall Online_BlockList::BlockPlayerOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid, const char *name)
{
  return ?BlockPlayerOnDW@Online_BlockList@@QEAA_NHUXUID@@PEBD@Z(this, controllerIndex, xuid, name);
}

/*
==============
Online_BlockList::Reset
==============
*/

bool __fastcall Online_BlockList::Reset(Online_BlockList *this, const int controllerIndex)
{
  return ?Reset@Online_BlockList@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_BlockList::IsBlocked
==============
*/

bool __fastcall Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  return ?IsBlocked@Online_BlockList@@QEAA_NH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_BlockList::Init
==============
*/
char Online_BlockList::Init(Online_BlockList *this)
{
  int v1; 
  bool *m_processedPlatformBlocklist; 
  OnlineUserLists *Instance; 

  v1 = 0;
  m_processedPlatformBlocklist = this->m_processedPlatformBlocklist;
  do
  {
    *m_processedPlatformBlocklist = 0;
    Instance = OnlineUserLists::GetInstance();
    OnlineUserLists::RegisterUserListUpdatedCallback(Instance, v1++, DODGE, Online_BlockList::BlockListUpdated);
    ++m_processedPlatformBlocklist;
  }
  while ( v1 < 8 );
  return 1;
}

/*
==============
Online_BlockList::OnSignedIn
==============
*/
void Online_BlockList::OnSignedIn(Online_BlockList *this, const int controllerIndex, GenericSignInState signinState)
{
  if ( signinState == SignedInToFirstParty )
    this->m_processedPlatformBlocklist[controllerIndex] = Online_BlockList::ProcessPlatformBlockList(this, controllerIndex);
}

/*
==============
Online_BlockList::OnSignedOut
==============
*/
void Online_BlockList::OnSignedOut(Online_BlockList *this, const int controllerIndex, GenericSignOutState signOutState)
{
  this->m_processedPlatformBlocklist[controllerIndex] = 0;
  PlatformBlocklist::Clear(&this->m_platformBlocklist[controllerIndex]);
}

/*
==============
Online_BlockList::OnDWMail
==============
*/
void Online_BlockList::OnDWMail(Online_BlockList *this, const int controllerIndex, const char *msg, const int msg_size)
{
  const char *v5; 
  __int64 v7; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  Online_MetPlayer *Instance; 

  if ( msg_size == 24 )
  {
    v5 = BLOCKLIST_MESSAGE_HEADER_0;
    v7 = -1i64;
    do
      ++v7;
    while ( BLOCKLIST_MESSAGE_HEADER_0[v7] );
    v8 = (int)v7;
    if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v9 = v5[msg - BLOCKLIST_MESSAGE_HEADER_0];
      v10 = v8;
      v11 = *v5++;
      --v8;
      if ( !v10 )
        break;
      if ( v9 != v11 )
        return;
    }
    while ( v9 );
    Instance = Online_MetPlayer::GetInstance();
    Online_MetPlayer::BlackListPlayer(Instance, controllerIndex, *(const XUID *)(msg + 16));
  }
}

/*
==============
Online_BlockList::ControllerFrame
==============
*/
void Online_BlockList::ControllerFrame(Online_BlockList *this, const int controllerIndex)
{
  __int64 v4; 

  v4 = controllerIndex;
  if ( !this->m_processedPlatformBlocklist[controllerIndex] )
    this->m_processedPlatformBlocklist[controllerIndex] = Online_BlockList::ProcessPlatformBlockList(this, controllerIndex);
  PlatformBlocklist::ControllerFrame(&this->m_platformBlocklist[v4], controllerIndex);
}

/*
==============
Online_BlockList::AddPlayerToPlatformList
==============
*/
void Online_BlockList::AddPlayerToPlatformList(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( !platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem.cpp", 260, ASSERT_TYPE_ASSERT, "(platformId != 0)", (const char *)&queryFormat, "platformId != 0") )
    __debugbreak();
  PlatformBlocklist::AddPlayer(&this->m_platformBlocklist[v3], platformId);
}

/*
==============
Online_BlockList::BlockListUpdated
==============
*/
void Online_BlockList::BlockListUpdated(const int controllerIndex)
{
  __int64 v1; 
  lua_State *v2; 
  LocalClientNum_t ClientFromController; 

  v1 = controllerIndex;
  Com_Printf(25, "Sending player unblocked event to LUI.\n");
  v2 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v1);
  if ( LUI_BeginEvent(ClientFromController, "NotifyBlocklistUpdated", v2) )
  {
    LUI_SetTableBool("success", 1, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_BlockList::BlockPlayerOnDW
==============
*/
char Online_BlockList::BlockPlayerOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid, const char *name)
{
  OnlineUserLists *Instance; 
  Online_Friends *v7; 
  const char *v8; 
  Online_Friends *v9; 
  const char *v10; 
  const char *v12; 
  UserList::User users; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( Online_BlockList::IsBlocked(this, controllerIndex, xuid) )
    return 0;
  UserList::User::User(&users);
  XUID::operator=(&users.xuid, &xuida);
  Core_strcpy(users.name, 0x40ui64, name);
  Instance = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::AddUsersToList(Instance, controllerIndex, DODGE, &users, 1) )
  {
    v12 = XUID::ToString(&xuida);
    Com_PrintError(25, "%s: Failed to block player %s on DW\n", "Online_BlockList::BlockPlayerOnDW", v12);
    return 0;
  }
  v7 = Online_Friends::GetInstance();
  if ( Online_Friends::Crossplay_FindIndex(v7, controllerIndex, xuida) != -1 )
  {
    v8 = XUID::ToString(&xuida);
    Com_Printf(14, "%s: Blocking friend %s so we have to remove the player from our frineds list\n", "Online_BlockList::BlockPlayerOnDW", v8);
    v9 = Online_Friends::GetInstance();
    Online_Friends::Crossplay_RemoveFriend(v9, controllerIndex, xuida);
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 1, LUI_luaVM);
    LUI_SetTableString("genEventName", "genPlayerBlocked", LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  v10 = XUID::ToString(&xuida);
  Com_Printf(25, "%s: Blocked player %s on DW\n", "Online_BlockList::BlockPlayerOnDW", v10);
  return 1;
}

/*
==============
Online_BlockList::GetInstance
==============
*/
Online_BlockList *Online_BlockList::GetInstance()
{
  return &Online_BlockList::s_instance;
}

/*
==============
Online_BlockList::GetInstancePtr
==============
*/
Online_BlockList *Online_BlockList::GetInstancePtr()
{
  return &Online_BlockList::s_instance;
}

/*
==============
Online_BlockList::IsBlocked
==============
*/
bool Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  __int64 v4; 
  unsigned __int64 m_id; 
  OnlineUserLists *Instance; 
  bool result; 
  UserList::User *userOut; 
  unsigned int indexOut; 
  XUID xuida; 

  v4 = controllerIndex;
  xuida.m_id = xuid.m_id;
  if ( XUID::IsValid(&xuida) )
  {
    m_id = xuida.m_id;
    userOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserByXUID(Instance, v4, DODGE, (const XUID)m_id, (const UserList::User **)&userOut) )
      return 1;
  }
  indexOut = 0;
  result = PlatformBlocklist::GetPlayerIndex(&this->m_platformBlocklist[v4], xuida, &indexOut);
  if ( result )
    return 1;
  return result;
}

/*
==============
Online_BlockList::IsBlocked
==============
*/
char Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const XUID xuid, const unsigned __int64 platformId)
{
  __int64 v5; 
  unsigned __int64 m_id; 
  OnlineUserLists *Instance; 
  UserList::User *userOut[3]; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v5 = controllerIndex;
  if ( XUID::IsValid(&xuida) )
  {
    m_id = xuida.m_id;
    userOut[0] = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserByXUID(Instance, v5, DODGE, (const XUID)m_id, (const UserList::User **)userOut) )
      return 1;
  }
  if ( platformId )
  {
    if ( Online_BlockList::IsBlockedOnPlatform(this, v5, platformId) )
      return 1;
  }
  else
  {
    LODWORD(userOut[0]) = 0;
    if ( PlatformBlocklist::GetPlayerIndex(&this->m_platformBlocklist[v5], xuida, (unsigned int *)userOut) )
      return 1;
  }
  return 0;
}

/*
==============
Online_BlockList::IsBlocked
==============
*/
bool Online_BlockList::IsBlocked(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  const XUID *v6; 
  XUID result; 

  v6 = XUID::NullXUID(&result);
  return Online_BlockList::IsBlocked(this, controllerIndex, (const XUID)v6->m_id, platformId);
}

/*
==============
Online_BlockList::IsBlockedOnDW
==============
*/
bool Online_BlockList::IsBlockedOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  OnlineUserLists *Instance; 
  UserList::User *userOut; 

  userOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  return OnlineUserLists::GetUserByXUID(Instance, controllerIndex, DODGE, xuid, (const UserList::User **)&userOut);
}

/*
==============
Online_BlockList::NotifyBlockedPlayer
==============
*/
void Online_BlockList::NotifyBlockedPlayer(Online_BlockList *this, const int controllerIndex, const XUID blockedPlayer)
{
  DWServicesAccess *Instance; 
  const XUID *Xuid; 
  const bdUserAccountID *v6; 
  DWServicesAccess *v7; 
  DWMail *Mail; 
  bdReference<bdRemoteTask> v9; 
  unsigned __int64 userID[2]; 
  XUID result; 
  char dest[16]; 
  XUID v13; 
  bdUserAccountID v14; 
  bdUserAccountID ptr; 
  XUID v16; 

  v16.m_id = blockedPlayer.m_id;
  userID[1] = -2i64;
  XUID::XUID(&v13);
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    Core_strcpy(dest, 9ui64, BLOCKLIST_MESSAGE_HEADER_0);
    Xuid = Live_GetXuid(&result, controllerIndex);
    XUID::operator=(&v13, Xuid);
    `eh vector vbase constructor iterator'(&ptr, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
    userID[0] = XUID::GetUniversalId(&v16);
    bdUserAccountID::bdUserAccountID(&v14, userID);
    bdUserAccountID::operator=(&ptr, v6);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v14.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v14.gap38);
    v7 = DWServicesAccess::GetInstance();
    Mail = DWServicesAccess::GetMail(v7, controllerIndex);
    DWMail::sendMail(Mail, &v9, dest, 0x18u, 0, &ptr, 1u, NULL);
    if ( v9.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v9.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v9.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
    }
    `eh vector destructor iterator'(&ptr, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  }
}

/*
==============
Online_BlockList::RefetchPlatformBlocklist
==============
*/
void Online_BlockList::RefetchPlatformBlocklist(Online_BlockList *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem.cpp", 280, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  PlatformBlocklist::Clear(&this->m_platformBlocklist[v2]);
  this->m_processedPlatformBlocklist[v2] = 0;
}

/*
==============
Online_BlockList::RemovePlayerFromPlatformList
==============
*/
void Online_BlockList::RemovePlayerFromPlatformList(Online_BlockList *this, const int controllerIndex, const unsigned __int64 platformId)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( !platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem.cpp", 270, ASSERT_TYPE_ASSERT, "(platformId != 0)", (const char *)&queryFormat, "platformId != 0") )
    __debugbreak();
  PlatformBlocklist::RemovePlayer(&this->m_platformBlocklist[v3], platformId);
}

/*
==============
Online_BlockList::Reset
==============
*/
bool Online_BlockList::Reset(Online_BlockList *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_blocklistsystem.cpp", 107, ASSERT_TYPE_ASSERT, "(controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  PlatformBlocklist::Clear(&this->m_platformBlocklist[v2]);
  return Online_BlockList::ProcessPlatformBlockList(this, v2);
}

/*
==============
Online_BlockList::UnblockPlayerOnDW
==============
*/
char Online_BlockList::UnblockPlayerOnDW(Online_BlockList *this, const int controllerIndex, const XUID xuid)
{
  OnlineUserLists *Instance; 
  const char *v6; 
  UserList::User users; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( !Online_BlockList::IsBlocked(this, controllerIndex, xuid) )
    return 0;
  UserList::User::User(&users);
  XUID::operator=(&users.xuid, &xuida);
  Instance = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::RemoveUsersFromList(Instance, controllerIndex, DODGE, &users, 1) )
  {
    v6 = XUID::ToString(&xuida);
    Com_PrintError(25, "%s: Failed to unblock player %s on DW\n", "Online_BlockList::UnblockPlayerOnDW", v6);
    return 0;
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 1, LUI_luaVM);
    LUI_SetTableString("genEventName", "genPlayerUnblocked", LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  return 1;
}

