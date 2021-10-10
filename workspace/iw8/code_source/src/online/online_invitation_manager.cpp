/*
==============
Online_InvitationManager::GetFreeIndexFromJoiningUsersList
==============
*/

int __fastcall Online_InvitationManager::GetFreeIndexFromJoiningUsersList(Online_InvitationManager *this)
{
  return ?GetFreeIndexFromJoiningUsersList@Online_InvitationManager@@QEAAHXZ(this);
}

/*
==============
Online_InvitationManager::AcceptInvitation
==============
*/

bool __fastcall Online_InvitationManager::AcceptInvitation(Online_InvitationManager *this, const int invitationId)
{
  return ?AcceptInvitation@Online_InvitationManager@@QEAA_NH@Z(this, invitationId);
}

/*
==============
Online_InvitationManager::ClearInvitation
==============
*/

void __fastcall Online_InvitationManager::ClearInvitation(Online_InvitationManager *this, const int inviteIndex)
{
  ?ClearInvitation@Online_InvitationManager@@QEAAXH@Z(this, inviteIndex);
}

/*
==============
Online_InvitationManager::OnRegistered
==============
*/

void __fastcall Online_InvitationManager::OnRegistered(Online_InvitationManager *this)
{
  ?OnRegistered@Online_InvitationManager@@UEAAXXZ(this);
}

/*
==============
Online_InvitationManager::Frame
==============
*/

void __fastcall Online_InvitationManager::Frame(Online_InvitationManager *this)
{
  ?Frame@Online_InvitationManager@@UEAAXXZ(this);
}

/*
==============
Online_InvitationManager::GetSlotForInviter
==============
*/

int __fastcall Online_InvitationManager::GetSlotForInviter(Online_InvitationManager *this, const XUID inviterXUID, const unsigned __int64 inviterPlatformId)
{
  return ?GetSlotForInviter@Online_InvitationManager@@AEBAHUXUID@@_K@Z(this, inviterXUID, inviterPlatformId);
}

/*
==============
Online_InvitationManager::OnSignedIn
==============
*/

void __fastcall Online_InvitationManager::OnSignedIn(Online_InvitationManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_InvitationManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_InvitationManager::SendInvitation
==============
*/

void __fastcall Online_InvitationManager::SendInvitation(Online_InvitationManager *this, const int controllerIndex, const XUID *xuid, const unsigned __int64 *platformId, int numPlayersToInvite)
{
  ?SendInvitation@Online_InvitationManager@@QEAAXHPEBUXUID@@PEB_KH@Z(this, controllerIndex, xuid, platformId, numPlayersToInvite);
}

/*
==============
Online_InvitationManager::RegisterLuaFunctions
==============
*/

void __fastcall Online_InvitationManager::RegisterLuaFunctions(Online_InvitationManager *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_InvitationManager@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_InvitationManager::IsUserJoinable
==============
*/

bool __fastcall Online_InvitationManager::IsUserJoinable(Online_InvitationManager *this, const int controllerIndex, XUID xuid, unsigned __int64 platformId, FriendsPopupTabs userType, const char **errorString, const char **devErrorString)
{
  return ?IsUserJoinable@Online_InvitationManager@@QEAA_NHUXUID@@_KW4FriendsPopupTabs@@PEAPEBD3@Z(this, controllerIndex, xuid, platformId, userType, errorString, devErrorString);
}

/*
==============
Online_InvitationManager::OnReceiveMemberLeftParty
==============
*/

void __fastcall Online_InvitationManager::OnReceiveMemberLeftParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  ?OnReceiveMemberLeftParty@Online_InvitationManager@@QEAAXHUXUID@@PEBDH@Z(this, controllerIndex, xuid, username, partyId);
}

/*
==============
Online_InvitationManager::ShowToastNotificationAfterUserJoinedParty
==============
*/

void __fastcall Online_InvitationManager::ShowToastNotificationAfterUserJoinedParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  ?ShowToastNotificationAfterUserJoinedParty@Online_InvitationManager@@QEAAXHUXUID@@PEBDH@Z(this, controllerIndex, xuid, username, partyId);
}

/*
==============
Online_InvitationManager::OnInvitationSent
==============
*/

void __fastcall Online_InvitationManager::OnInvitationSent(Online_InvitationManager *this, const bool isSuccess)
{
  ?OnInvitationSent@Online_InvitationManager@@QEAAX_N@Z(this, isSuccess);
}

/*
==============
Online_InvitationManager::IsUserInvitable
==============
*/

bool __fastcall Online_InvitationManager::IsUserInvitable(Online_InvitationManager *this, const int controllerIndex, XUID xuid, unsigned __int64 platformId, FriendsPopupTabs userType, const char **errorString, const char **devErrorString)
{
  return ?IsUserInvitable@Online_InvitationManager@@QEAA_NHUXUID@@_KW4FriendsPopupTabs@@PEAPEBD3@Z(this, controllerIndex, xuid, platformId, userType, errorString, devErrorString);
}

/*
==============
Online_InvitationManager::GetArrayIndexOfInviteFromInvitationId
==============
*/

int __fastcall Online_InvitationManager::GetArrayIndexOfInviteFromInvitationId(Online_InvitationManager *this, unsigned int inviteIndex)
{
  return ?GetArrayIndexOfInviteFromInvitationId@Online_InvitationManager@@QEAAHI@Z(this, inviteIndex);
}

/*
==============
Online_InvitationManager::RefreshRecentlyInvitedUsers
==============
*/

void __fastcall Online_InvitationManager::RefreshRecentlyInvitedUsers(Online_InvitationManager *this)
{
  ?RefreshRecentlyInvitedUsers@Online_InvitationManager@@QEAAXXZ(this);
}

/*
==============
Online_InvitationManager::GetAvailableSlotInTheRecentlyInvitedUsersList
==============
*/

int __fastcall Online_InvitationManager::GetAvailableSlotInTheRecentlyInvitedUsersList(Online_InvitationManager *this)
{
  return ?GetAvailableSlotInTheRecentlyInvitedUsersList@Online_InvitationManager@@QEAAHXZ(this);
}

/*
==============
Online_InvitationManager::Online_InvitationManager
==============
*/

void __fastcall Online_InvitationManager::Online_InvitationManager(Online_InvitationManager *this)
{
  ??0Online_InvitationManager@@QEAA@XZ(this);
}

/*
==============
Online_InvitationManager::CanCurrentPlatformSendPlatformInvites
==============
*/

bool __fastcall Online_InvitationManager::CanCurrentPlatformSendPlatformInvites(Online_InvitationManager *this)
{
  return ?CanCurrentPlatformSendPlatformInvites@Online_InvitationManager@@QEAA_NXZ(this);
}

/*
==============
Online_InvitationManager::SendJoinInfoToUser
==============
*/

void __fastcall Online_InvitationManager::SendJoinInfoToUser(Online_InvitationManager *this, const int controllerIndex, JoinerData *joinerData)
{
  ?SendJoinInfoToUser@Online_InvitationManager@@QEAAXHPEAUJoinerData@@@Z(this, controllerIndex, joinerData);
}

/*
==============
Online_InvitationManager::SendPlatformInvitation
==============
*/

bool __fastcall Online_InvitationManager::SendPlatformInvitation(Online_InvitationManager *this, const int controllerIndex, const unsigned __int64 *userID, int numPlayersToInvite)
{
  return ?SendPlatformInvitation@Online_InvitationManager@@QEAA_NHPEB_KH@Z(this, controllerIndex, userID, numPlayersToInvite);
}

/*
==============
Online_InvitationManager::IsUserInTheRecentlyInvitedUsersList
==============
*/

bool __fastcall Online_InvitationManager::IsUserInTheRecentlyInvitedUsersList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  return ?IsUserInTheRecentlyInvitedUsersList@Online_InvitationManager@@QEAA_NUInvitedUser@InvitedUserData@@@Z(this, user);
}

/*
==============
Online_InvitationManager::UserCompletedInviteJoin
==============
*/

void __fastcall Online_InvitationManager::UserCompletedInviteJoin(Online_InvitationManager *this, const int controllerIndex, const int joinerIndex, const XUID xuid, const char *username, const int partyId)
{
  ?UserCompletedInviteJoin@Online_InvitationManager@@QEAAXHHUXUID@@PEBDH@Z(this, controllerIndex, joinerIndex, xuid, username, partyId);
}

/*
==============
Online_InvitationManager::OnSignedOut
==============
*/

void __fastcall Online_InvitationManager::OnSignedOut(Online_InvitationManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_InvitationManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_InvitationManager::SendJoinInfoResponseComplete
==============
*/

void __fastcall Online_InvitationManager::SendJoinInfoResponseComplete(Online_InvitationManager *this, const int controllerIndex, JoinerData *joinerData, bool success)
{
  ?SendJoinInfoResponseComplete@Online_InvitationManager@@QEAAXHPEAUJoinerData@@_N@Z(this, controllerIndex, joinerData, success);
}

/*
==============
Online_InvitationManager::Init
==============
*/

bool __fastcall Online_InvitationManager::Init(Online_InvitationManager *this)
{
  return ?Init@Online_InvitationManager@@UEAA_NXZ(this);
}

/*
==============
Online_InvitationManager::GetSlotForUserInRecentlyInvitedList
==============
*/

int __fastcall Online_InvitationManager::GetSlotForUserInRecentlyInvitedList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  return ?GetSlotForUserInRecentlyInvitedList@Online_InvitationManager@@QEAAHUInvitedUser@InvitedUserData@@@Z(this, user);
}

/*
==============
Online_InvitationManager::SendDWInvite
==============
*/

int __fastcall Online_InvitationManager::SendDWInvite(Online_InvitationManager *this, const int controllerIndex, const XUID *xuid, int userCount)
{
  return ?SendDWInvite@Online_InvitationManager@@QEAAHHPEBUXUID@@H@Z(this, controllerIndex, xuid, userCount);
}

/*
==============
Online_InvitationManager::GetInstance
==============
*/

Online_InvitationManager *__fastcall Online_InvitationManager::GetInstance()
{
  return ?GetInstance@Online_InvitationManager@@SAAEAV1@XZ();
}

/*
==============
Online_InvitationManager::OnReceiveIncomingPartyMember
==============
*/

void __fastcall Online_InvitationManager::OnReceiveIncomingPartyMember(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId, bool areWeHost, const bool isJoinerNewToTheParty)
{
  ?OnReceiveIncomingPartyMember@Online_InvitationManager@@QEAAXHUXUID@@PEBDH_N_N@Z(this, controllerIndex, xuid, username, partyId, areWeHost, isJoinerNewToTheParty);
}

/*
==============
Online_InvitationManager::ControllerFrame
==============
*/

void __fastcall Online_InvitationManager::ControllerFrame(Online_InvitationManager *this, const int controllerIndex)
{
  ?ControllerFrame@Online_InvitationManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_InvitationManager::GetSlotForNewInvite
==============
*/

int __fastcall Online_InvitationManager::GetSlotForNewInvite(Online_InvitationManager *this)
{
  return ?GetSlotForNewInvite@Online_InvitationManager@@AEBAHXZ(this);
}

/*
==============
Online_InvitationManager::GetInviteCount
==============
*/

unsigned int __fastcall Online_InvitationManager::GetInviteCount(Online_InvitationManager *this, InvitationType type)
{
  return ?GetInviteCount@Online_InvitationManager@@QEAAIW4InvitationType@@@Z(this, type);
}

/*
==============
Online_InvitationManager::OnReceiveInvitation
==============
*/

void __fastcall Online_InvitationManager::OnReceiveInvitation(Online_InvitationManager *this, const int controllerIndex, Online_Invitation *data)
{
  ?OnReceiveInvitation@Online_InvitationManager@@QEAAXHPEAUOnline_Invitation@@@Z(this, controllerIndex, data);
}

/*
==============
Online_InvitationManager::AddUserToRecentlyInvitedList
==============
*/

void __fastcall Online_InvitationManager::AddUserToRecentlyInvitedList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  ?AddUserToRecentlyInvitedList@Online_InvitationManager@@QEAAXUInvitedUser@InvitedUserData@@@Z(this, user);
}

/*
==============
Online_InvitationManager::OutputCurrentState
==============
*/

void __fastcall Online_InvitationManager::OutputCurrentState(Online_InvitationManager *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_InvitationManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_InvitationManager::ShowToastNotificationAfterUserLeftParty
==============
*/

void __fastcall Online_InvitationManager::ShowToastNotificationAfterUserLeftParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  ?ShowToastNotificationAfterUserLeftParty@Online_InvitationManager@@QEAAXHUXUID@@PEBDH@Z(this, controllerIndex, xuid, username, partyId);
}

/*
==============
Online_InvitationManager::GetIndexForUserFromJoiningUsersList
==============
*/

int __fastcall Online_InvitationManager::GetIndexForUserFromJoiningUsersList(Online_InvitationManager *this, XUID xuid)
{
  return ?GetIndexForUserFromJoiningUsersList@Online_InvitationManager@@QEAAHUXUID@@@Z(this, xuid);
}

/*
==============
Online_InvitationManager::OnDWInstantMessage
==============
*/

void __fastcall Online_InvitationManager::OnDWInstantMessage(Online_InvitationManager *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message, unsigned int messageSize)
{
  ?OnDWInstantMessage@Online_InvitationManager@@UEAAXH_KPEBD1I@Z(this, controllerIndex, senderID, senderName, message, messageSize);
}

/*
==============
Online_InvitationManager::GetInvites
==============
*/

unsigned int __fastcall Online_InvitationManager::GetInvites(Online_InvitationManager *this, InvitationType type, Online_Invitation *outInvites, const unsigned int outInvitesMax)
{
  return ?GetInvites@Online_InvitationManager@@QEAAIW4InvitationType@@PEAUOnline_Invitation@@I@Z(this, type, outInvites, outInvitesMax);
}

/*
==============
Online_InvitationManager::HasPendingInvitiation
==============
*/

bool __fastcall Online_InvitationManager::HasPendingInvitiation(Online_InvitationManager *this, InvitationType type)
{
  return ?HasPendingInvitiation@Online_InvitationManager@@QEAA_NW4InvitationType@@@Z(this, type);
}

/*
==============
Online_InvitationManager::OnUnregistered
==============
*/

void __fastcall Online_InvitationManager::OnUnregistered(Online_InvitationManager *this)
{
  ?OnUnregistered@Online_InvitationManager@@UEAAXXZ(this);
}

/*
==============
LUI_CoD_LuaCall_AcceptInvitation
==============
*/
__int64 LUI_CoD_LuaCall_AcceptInvitation(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int *p_m_invitationId; 
  unsigned __int64 m_inviterPlatformId; 
  Online_Invitation *v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned int v13; 
  int v14; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Invitation.AcceptInvitation( <invitationID> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = v3;
    if ( v3 >= 0x10 )
    {
      v14 = 16;
      v13 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( invitationId ) < (unsigned)( 16 )", "invitationId doesn't index MAX_INVITATIONS_TO_RECEIVE\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = 0;
      p_m_invitationId = &Online_InvitationManager::ms_instance.invitations[0].m_invitationId;
      while ( *p_m_invitationId != v4 )
      {
        ++v6;
        p_m_invitationId += 20;
        if ( (__int64)p_m_invitationId >= (__int64)&Online_InvitationManager::ms_instance.usersJoining[3].xuid.m_id + 4 )
        {
          j_lua_pushboolean(luaVM, 0);
          goto LABEL_19;
        }
      }
      if ( v6 >= 0 )
      {
        m_inviterPlatformId = Online_InvitationManager::ms_instance.invitations[v6].m_inviterPlatformId;
        v9 = &Online_InvitationManager::ms_instance.invitations[v6];
        v10 = XUID::ToDevString(&Online_InvitationManager::ms_instance.invitations[v6].m_inviterXUID);
        Com_Printf(25, "Accepting invitation from xuid(%s), platformId(%zu).\n", v10, m_inviterPlatformId);
        if ( Online_Invitation::OnAccept(v9) )
        {
          Online_Invitation::Reset(v9);
          v5 = 1;
        }
      }
    }
    j_lua_pushboolean(luaVM, v5);
  }
  else
  {
    v2 = 0;
  }
LABEL_19:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v11);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SendInvitation
==============
*/
__int64 LUI_CoD_LuaCall_SendInvitation(lua_State *const luaVM)
{
  int v2; 
  const XUID *v3; 
  const char *v4; 
  unsigned int v5; 
  XUID xuid; 
  unsigned __int64 platformId; 

  XUID::XUID(&xuid);
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Invitation.SendInvitation( controllerIndex, xuid, platformID )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = (const XUID *)j_lua_touserdata(luaVM, 2);
  XUID::operator=(&xuid, v3);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  platformId = I_atoui64(v4);
  Online_InvitationManager::SendInvitation(&Online_InvitationManager::ms_instance, v2, &xuid, &platformId, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_BatchInviteOnlineFriends
==============
*/
__int64 LUI_CoD_LuaCall_BatchInviteOnlineFriends(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_BatchInviteOnlineFriends_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsUserJoinButtonDisabled
==============
*/
__int64 LUI_CoD_LuaCall_IsUserJoinButtonDisabled(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_IsUserJoinButtonDisabled_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsUserInviteButtonDisabled
==============
*/
__int64 LUI_CoD_LuaCall_IsUserInviteButtonDisabled(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_IsUserInviteButtonDisabled_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
Online_InvitationManager::Init
==============
*/
bool Online_InvitationManager::Init(Online_InvitationManager *this)
{
  int *p_cancelRequestTime; 
  __int64 v3; 
  const XUID *v4; 
  const XUID *v5; 
  bool v6; 
  XUID result; 
  XUID v8; 

  p_cancelRequestTime = &this->usersJoining[0].cancelRequestTime;
  v3 = 16i64;
  do
  {
    v4 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)p_cancelRequestTime - 2, v4);
    v5 = XUID::NullXUID(&v8);
    XUID::operator=((XUID *)p_cancelRequestTime - 1, v5);
    *(_QWORD *)p_cancelRequestTime = 0i64;
    p_cancelRequestTime += 6;
    --v3;
  }
  while ( v3 );
  v6 = 1;
  this->nextInvitationId = 0;
  return v6;
}

/*
==============
Online_InvitationManager::OnSignedIn
==============
*/
void Online_InvitationManager::OnSignedIn(Online_InvitationManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_InvitationManager::OnSignedOut
==============
*/
void Online_InvitationManager::OnSignedOut(Online_InvitationManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_InvitationManager::OnRegistered
==============
*/
void Online_InvitationManager::OnRegistered(Online_InvitationManager *this)
{
  ;
}

/*
==============
Online_InvitationManager::OnUnregistered
==============
*/
void Online_InvitationManager::OnUnregistered(Online_InvitationManager *this)
{
  ;
}

/*
==============
Online_InvitationManager::Frame
==============
*/
void Online_InvitationManager::Frame(Online_InvitationManager *this)
{
  int v2; 
  int *p_cancelRequestTime; 
  XUID *p_xuidOfUserBeingJoinedOn; 
  __int64 v5; 
  int v6; 
  unsigned int ControllerIndexFromXuid; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  char dest[256]; 

  if ( !this->isJoinInfoSendInProgress && !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) && PartyAtomic_GetJoinState(&g_partyJoinInfo) == PARTYJOIN_INACTIVE )
  {
    v2 = Sys_Milliseconds();
    p_cancelRequestTime = &this->usersJoining[0].cancelRequestTime;
    p_xuidOfUserBeingJoinedOn = &this->usersJoining[0].xuidOfUserBeingJoinedOn;
    v5 = 16i64;
    do
    {
      if ( XUID::IsValid(p_xuidOfUserBeingJoinedOn - 1) && p_cancelRequestTime[1] == 1 )
      {
        if ( v2 - *p_cancelRequestTime <= 0 )
        {
          if ( !XUID::IsValid(p_xuidOfUserBeingJoinedOn) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 177, ASSERT_TYPE_ASSERT, "(usersJoining[joinerIndex].xuidOfUserBeingJoinedOn.IsValid())", (const char *)&queryFormat, "usersJoining[joinerIndex].xuidOfUserBeingJoinedOn.IsValid()") )
            __debugbreak();
          ControllerIndexFromXuid = Live_GetControllerIndexFromXuid((XUID)p_xuidOfUserBeingJoinedOn->m_id);
          v8 = ControllerIndexFromXuid;
          if ( ControllerIndexFromXuid >= 8 )
          {
            LODWORD(v10) = 8;
            LODWORD(v9) = ControllerIndexFromXuid;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 179, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( Live_IsUserSignedInToDemonware(v8) )
            Online_InvitationManager::SendJoinInfoToUser(this, v8, (JoinerData *)&p_xuidOfUserBeingJoinedOn[-1]);
        }
        else
        {
          Com_PrintError(25, "Online_InvitationManager:: Could not send a response because of timeout\n");
          if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
          {
            v6 = Live_GetControllerIndexFromXuid((XUID)p_xuidOfUserBeingJoinedOn->m_id);
            Com_sprintf(dest, 0x100ui64, "timeout");
            Online_Telemetry_SendCommunicationEvent(v6, (XUID)p_xuidOfUserBeingJoinedOn->m_id, INVITE_JOIN_RECEIVED_JOIN_INFO_REQUEST_CLEARED, dest);
          }
          JoinerData::Reset((JoinerData *)&p_xuidOfUserBeingJoinedOn[-1]);
        }
      }
      p_xuidOfUserBeingJoinedOn += 3;
      p_cancelRequestTime += 6;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
Online_InvitationManager::ControllerFrame
==============
*/
void Online_InvitationManager::ControllerFrame(Online_InvitationManager *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_InvitationManager::OnDWInstantMessage
==============
*/
void Online_InvitationManager::OnDWInstantMessage(Online_InvitationManager *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message, unsigned int messageSize)
{
  const char *v6; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  char v16; 
  int v17; 
  unsigned __int64 m_id; 
  unsigned __int64 PlatformUserId; 
  XUID *Xuid; 
  int IndexForUserFromJoiningUsersList; 
  OnlineTelemetryCommunicationEventType v22; 
  __int64 v23; 
  JoinerData *v24; 
  char *v25; 
  const XUID *v26; 
  const dvar_t *v27; 
  int integer; 
  int v29; 
  const char *v30; 
  XUID result; 
  XUID v32; 
  Online_Invitation data; 

  v6 = ONLINE_INVITATION_MESSAGE_HEADER_0;
  v10 = -1i64;
  do
    ++v10;
  while ( ONLINE_INVITATION_MESSAGE_HEADER_0[v10] );
  v11 = v10 + 1;
  v12 = v11;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v13 = v6[message - ONLINE_INVITATION_MESSAGE_HEADER_0];
    v14 = v12;
    v15 = *v6++;
    --v12;
    if ( !v14 )
      break;
    if ( v13 != v15 )
      return;
  }
  while ( v13 );
  v16 = message[v11];
  v17 = v11 + 1;
  if ( v16 )
  {
    if ( v16 == 2 )
    {
      Online_Invitation::Online_Invitation(&data);
      m_id = XUID::FromUniversalId(&result, senderID)->m_id;
      PlatformUserId = Live_GetPlatformUserId(controllerIndex);
      Xuid = Live_GetXuid(&v32, controllerIndex);
      Online_Invitation::SetData(&data, INVITE_DEMONWARE, (XUID)Xuid->m_id, PlatformUserId, (XUID)m_id, 0i64, &message[v17], messageSize - v17);
      Online_InvitationManager::OnReceiveInvitation(this, controllerIndex, &data);
    }
    return;
  }
  XUID::FromUniversalId(&result, senderID);
  IndexForUserFromJoiningUsersList = Online_InvitationManager::GetIndexForUserFromJoiningUsersList(this, result);
  if ( IndexForUserFromJoiningUsersList >= 0 )
  {
LABEL_20:
    v23 = IndexForUserFromJoiningUsersList;
    v24 = &this->usersJoining[v23];
    XUID::operator=(&v24->xuid, &result);
    v25 = (char *)this + v23 * 24;
    v26 = Live_GetXuid(&v32, controllerIndex);
    XUID::operator=(&this->usersJoining[v23].xuidOfUserBeingJoinedOn, v26);
    if ( !XUID::IsValid(&this->usersJoining[v23].xuidOfUserBeingJoinedOn) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 228, ASSERT_TYPE_ASSERT, "(usersJoining[indexInTheJoiningUsersList].xuidOfUserBeingJoinedOn.IsValid())", (const char *)&queryFormat, "usersJoining[indexInTheJoiningUsersList].xuidOfUserBeingJoinedOn.IsValid()") )
      __debugbreak();
    v27 = DVARINT_online_join_info_request_timeout_time;
    if ( !DVARINT_online_join_info_request_timeout_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_join_info_request_timeout_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    integer = v27->current.integer;
    v29 = Sys_Milliseconds();
    *((_DWORD *)v25 + 341) = 1;
    *((_DWORD *)v25 + 340) = integer + v29;
    v30 = XUID::ToDevString(&v24->xuid);
    Com_Printf(25, "InviteJoinMessageType::JOIN_INFO_REQUEST : Received request from %s\n", v30);
    if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
    {
      v22 = INVITE_JOIN_RECEIVED_JOIN_INFO_REQUEST;
      goto LABEL_28;
    }
  }
  else
  {
    IndexForUserFromJoiningUsersList = 0;
    while ( !XUID::IsNull(&this->usersJoining[IndexForUserFromJoiningUsersList].xuid) )
    {
      if ( ++IndexForUserFromJoiningUsersList >= 16 )
        goto LABEL_18;
    }
    if ( IndexForUserFromJoiningUsersList >= 0 )
      goto LABEL_20;
LABEL_18:
    Com_PrintWarning(25, "InviteJoinMessageType::JOIN_INFO_REQUEST : Received request, but we have no free slots to handle it\n");
    if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
    {
      v22 = INVITE_JOIN_RECEIVED_JOIN_INFO_REQUEST_NO_FREE_SLOTS;
LABEL_28:
      Online_Telemetry_SendCommunicationEvent(controllerIndex, result, v22, NULL);
    }
  }
}

/*
==============
Online_InvitationManager::RegisterLuaFunctions
==============
*/
void Online_InvitationManager::RegisterLuaFunctions(Online_InvitationManager *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Invitation", Invitation_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_InvitationManager::OutputCurrentState
==============
*/
void Online_InvitationManager::OutputCurrentState(Online_InvitationManager *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_InvitationManager::Online_InvitationManager
==============
*/
void Online_InvitationManager::Online_InvitationManager(Online_InvitationManager *this)
{
  __int64 v1; 
  __int64 v2; 
  Online_Invitation *invitations; 
  JoinerData *usersJoining; 
  InvitedUserData *recentlyInvitedUsers; 
  __int64 v7; 

  this->m_nextSystem = NULL;
  v1 = 16i64;
  this->__vftable = (Online_InvitationManager_vtbl *)&Online_InvitationManager::`vftable';
  v2 = 16i64;
  this->m_initialized = 0;
  invitations = this->invitations;
  do
  {
    Online_Invitation::Online_Invitation(invitations++);
    --v2;
  }
  while ( v2 );
  usersJoining = this->usersJoining;
  do
  {
    JoinerData::JoinerData(usersJoining++);
    --v1;
  }
  while ( v1 );
  recentlyInvitedUsers = this->recentlyInvitedUsers;
  v7 = 32i64;
  do
  {
    InvitedUserData::InvitedUserData(recentlyInvitedUsers++);
    --v7;
  }
  while ( v7 );
}

/*
==============
Online_InvitationManager::AcceptInvitation
==============
*/
char Online_InvitationManager::AcceptInvitation(Online_InvitationManager *this, const int invitationId)
{
  int v4; 
  unsigned int *p_m_invitationId; 
  __int64 v6; 
  unsigned __int64 m_inviterPlatformId; 
  Online_Invitation *v9; 
  const char *v10; 
  int v12; 

  if ( (unsigned int)invitationId >= 0x10 )
  {
    v12 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( invitationId ) < (unsigned)( 16 )", "invitationId doesn't index MAX_INVITATIONS_TO_RECEIVE\n\t%i not in [0, %i)", invitationId, v12) )
      __debugbreak();
  }
  if ( invitationId < 0 )
    return 0;
  v4 = 0;
  p_m_invitationId = &this->invitations[0].m_invitationId;
  v6 = 0i64;
  while ( *p_m_invitationId != invitationId )
  {
    ++v4;
    ++v6;
    p_m_invitationId += 20;
    if ( v6 >= 16 )
      return 0;
  }
  if ( v4 < 0 )
    return 0;
  m_inviterPlatformId = this->invitations[v4].m_inviterPlatformId;
  v9 = &this->invitations[v4];
  v10 = XUID::ToDevString(&this->invitations[v4].m_inviterXUID);
  Com_Printf(25, "Accepting invitation from xuid(%s), platformId(%zu).\n", v10, m_inviterPlatformId);
  if ( !Online_Invitation::OnAccept(v9) )
    return 0;
  Online_Invitation::Reset(v9);
  return 1;
}

/*
==============
Online_InvitationManager::AddUserToRecentlyInvitedList
==============
*/
void Online_InvitationManager::AddUserToRecentlyInvitedList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  int v2; 
  InvitedUserData *recentlyInvitedUsers; 
  int v4; 
  __int64 v5; 
  InvitedUserData *v6; 
  unsigned __int64 m_platformId; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  XUID xuid[2]; 

  v2 = 0;
  recentlyInvitedUsers = this->recentlyInvitedUsers;
  *(InvitedUserData::InvitedUser *)&xuid[0].m_id = *user;
  v4 = 0;
  v5 = 0i64;
  v6 = this->recentlyInvitedUsers;
  while ( !XUID::IsValid(&v6->m_user.m_xuid) || !XUID::operator==(&v6->m_user.m_xuid, xuid) )
  {
    m_platformId = v6->m_user.m_platformId;
    if ( m_platformId )
    {
      if ( m_platformId == xuid[1].m_id )
        break;
    }
    ++v4;
    ++v5;
    ++v6;
    if ( v5 >= 32 )
      goto LABEL_9;
  }
  if ( v4 != -1 )
    goto LABEL_20;
LABEL_9:
  v10 = -1;
  v11 = Sys_Milliseconds();
  v4 = 0;
  while ( !XUID::IsNull(&recentlyInvitedUsers->m_user.m_xuid) || recentlyInvitedUsers->m_user.m_platformId )
  {
    v12 = v4;
    v13 = v11 - recentlyInvitedUsers->m_timeSent;
    if ( v13 <= v2 )
      v12 = v10;
    ++v4;
    ++recentlyInvitedUsers;
    v10 = v12;
    if ( v13 <= v2 )
      v13 = v2;
    v2 = v13;
    if ( v4 >= 32 )
    {
      v4 = v12;
      if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 521, ASSERT_TYPE_ASSERT, "(slotWithEarliestInvitedUser >= 0)", (const char *)&queryFormat, "slotWithEarliestInvitedUser >= 0", xuid[0].m_id) )
        __debugbreak();
      break;
    }
  }
LABEL_20:
  if ( v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 549, ASSERT_TYPE_ASSERT, "(slotToInsertInvitedUser >= 0)", (const char *)&queryFormat, "slotToInsertInvitedUser >= 0") )
    __debugbreak();
  XUID::operator=(&this->recentlyInvitedUsers[v4].m_user.m_xuid, &user->m_xuid);
  this->recentlyInvitedUsers[v4].m_user.m_platformId = user->m_platformId;
  this->recentlyInvitedUsers[v4].m_timeSent = Sys_Milliseconds();
}

/*
==============
Online_InvitationManager::CanCurrentPlatformSendPlatformInvites
==============
*/
bool Online_InvitationManager::CanCurrentPlatformSendPlatformInvites(Online_InvitationManager *this)
{
  return PlatformSessionsHSMEnabled();
}

/*
==============
Online_InvitationManager::ClearInvitation
==============
*/
void Online_InvitationManager::ClearInvitation(Online_InvitationManager *this, const int inviteIndex)
{
  __int64 v2; 
  char *v4; 
  __int64 v5; 
  const char *v6; 
  int v8; 

  v2 = inviteIndex;
  if ( (unsigned int)inviteIndex >= 0x10 )
  {
    v8 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 792, ASSERT_TYPE_ASSERT, "(unsigned)( inviteIndex ) < (unsigned)( 16 )", "inviteIndex doesn't index MAX_INVITATIONS_TO_RECEIVE\n\t%i not in [0, %i)", inviteIndex, v8) )
      __debugbreak();
  }
  if ( (int)v2 >= 0 )
  {
    v4 = (char *)this + 80 * v2;
    v5 = *((_QWORD *)v4 + 9);
    v6 = XUID::ToDevString((XUID *)v4 + 11);
    Com_Printf(25, "Clearing Battle Net invitation for xuid(%s), platformId(%zu).n", v6, v5);
    Online_Invitation::Reset((Online_Invitation *)(v4 + 64));
  }
}

/*
==============
Online_InvitationManager::GetArrayIndexOfInviteFromInvitationId
==============
*/
__int64 Online_InvitationManager::GetArrayIndexOfInviteFromInvitationId(Online_InvitationManager *this, unsigned int inviteIndex)
{
  unsigned int v2; 
  unsigned int *p_m_invitationId; 
  __int64 v4; 

  v2 = 0;
  p_m_invitationId = &this->invitations[0].m_invitationId;
  v4 = 0i64;
  while ( *p_m_invitationId != inviteIndex )
  {
    ++v2;
    ++v4;
    p_m_invitationId += 20;
    if ( v4 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Online_InvitationManager::GetAvailableSlotInTheRecentlyInvitedUsersList
==============
*/
__int64 Online_InvitationManager::GetAvailableSlotInTheRecentlyInvitedUsersList(Online_InvitationManager *this)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  InvitedUserData *recentlyInvitedUsers; 
  int v7; 
  int v8; 

  v2 = -1;
  v3 = 0;
  v4 = Sys_Milliseconds();
  v5 = 0;
  recentlyInvitedUsers = this->recentlyInvitedUsers;
  do
  {
    if ( XUID::IsNull(&recentlyInvitedUsers->m_user.m_xuid) && !recentlyInvitedUsers->m_user.m_platformId )
      return (unsigned int)v5;
    v7 = v5;
    v8 = v4 - recentlyInvitedUsers->m_timeSent;
    if ( v8 <= v3 )
      v7 = v2;
    ++v5;
    ++recentlyInvitedUsers;
    v2 = v7;
    if ( v8 <= v3 )
      v8 = v3;
    v3 = v8;
  }
  while ( v5 < 32 );
  if ( v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 521, ASSERT_TYPE_ASSERT, "(slotWithEarliestInvitedUser >= 0)", (const char *)&queryFormat, "slotWithEarliestInvitedUser >= 0") )
    __debugbreak();
  return v2;
}

/*
==============
Online_InvitationManager::GetFreeIndexFromJoiningUsersList
==============
*/
__int64 Online_InvitationManager::GetFreeIndexFromJoiningUsersList(Online_InvitationManager *this)
{
  unsigned int v2; 

  v2 = 0;
  while ( !XUID::IsNull(&this->usersJoining[v2].xuid) )
  {
    if ( (int)++v2 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Online_InvitationManager::GetIndexForUserFromJoiningUsersList
==============
*/
__int64 Online_InvitationManager::GetIndexForUserFromJoiningUsersList(Online_InvitationManager *this, XUID xuid)
{
  unsigned int v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = 0;
  while ( !XUID::operator==(&this->usersJoining[v3].xuid, &xuida) )
  {
    if ( (int)++v3 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
Online_InvitationManager::GetInstance
==============
*/
Online_InvitationManager *Online_InvitationManager::GetInstance()
{
  return &Online_InvitationManager::ms_instance;
}

/*
==============
Online_InvitationManager::GetInviteCount
==============
*/
__int64 Online_InvitationManager::GetInviteCount(Online_InvitationManager *this, InvitationType type)
{
  __int64 result; 

  result = 0i64;
  if ( this->invitations[0].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[0].m_invitationType) )
    result = 1i64;
  if ( this->invitations[1].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[1].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[2].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[2].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[3].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[3].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[4].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[4].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[5].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[5].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[6].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[6].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[7].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[7].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[8].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[8].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[9].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[9].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[10].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[10].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[11].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[11].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[12].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[12].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[13].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[13].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[14].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[14].m_invitationType) )
    result = (unsigned int)(result + 1);
  if ( this->invitations[15].m_timeSentUTC && (type == INVITE_ALL || type == this->invitations[15].m_invitationType) )
    return (unsigned int)(result + 1);
  return result;
}

/*
==============
Online_InvitationManager::GetInvites
==============
*/
__int64 Online_InvitationManager::GetInvites(Online_InvitationManager *this, InvitationType type, Online_Invitation *outInvites, const unsigned int outInvitesMax)
{
  unsigned int v8; 
  XUID *p_m_inviteeXUID; 
  XUID *v10; 
  __int64 v11; 

  if ( !outInvites && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 831, ASSERT_TYPE_SANITY, "( outInvites )", (const char *)&queryFormat, "outInvites") )
    __debugbreak();
  if ( !outInvitesMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 832, ASSERT_TYPE_SANITY, "( outInvitesMax > 0 )", (const char *)&queryFormat, "outInvitesMax > 0") )
    __debugbreak();
  if ( type == INVITE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 833, ASSERT_TYPE_ASSERT, "(type != InvitationType::INVITE_NONE)", (const char *)&queryFormat, "type != InvitationType::INVITE_NONE") )
    __debugbreak();
  v8 = 0;
  p_m_inviteeXUID = &this->invitations[0].m_inviteeXUID;
  v10 = &outInvites->m_inviteeXUID;
  v11 = 16i64;
  do
  {
    if ( HIDWORD(p_m_inviteeXUID[6].m_id) && (type == INVITE_ALL || type == LODWORD(p_m_inviteeXUID[7].m_id)) )
    {
      v10[-2].m_id = p_m_inviteeXUID[-2].m_id;
      v10[-1].m_id = p_m_inviteeXUID[-1].m_id;
      XUID::operator=(v10, p_m_inviteeXUID);
      XUID::operator=(v10 + 1, p_m_inviteeXUID + 1);
      LOBYTE(v10[2].m_id) = p_m_inviteeXUID[2].m_id;
      BYTE1(v10[2].m_id) = BYTE1(p_m_inviteeXUID[2].m_id);
      BYTE2(v10[2].m_id) = BYTE2(p_m_inviteeXUID[2].m_id);
      BYTE3(v10[2].m_id) = BYTE3(p_m_inviteeXUID[2].m_id);
      BYTE4(v10[2].m_id) = BYTE4(p_m_inviteeXUID[2].m_id);
      BYTE5(v10[2].m_id) = BYTE5(p_m_inviteeXUID[2].m_id);
      BYTE6(v10[2].m_id) = BYTE6(p_m_inviteeXUID[2].m_id);
      HIBYTE(v10[2].m_id) = HIBYTE(p_m_inviteeXUID[2].m_id);
      LOBYTE(v10[3].m_id) = p_m_inviteeXUID[3].m_id;
      BYTE1(v10[3].m_id) = BYTE1(p_m_inviteeXUID[3].m_id);
      BYTE2(v10[3].m_id) = BYTE2(p_m_inviteeXUID[3].m_id);
      BYTE3(v10[3].m_id) = BYTE3(p_m_inviteeXUID[3].m_id);
      BYTE4(v10[3].m_id) = BYTE4(p_m_inviteeXUID[3].m_id);
      BYTE5(v10[3].m_id) = BYTE5(p_m_inviteeXUID[3].m_id);
      BYTE6(v10[3].m_id) = BYTE6(p_m_inviteeXUID[3].m_id);
      HIBYTE(v10[3].m_id) = HIBYTE(p_m_inviteeXUID[3].m_id);
      LOBYTE(v10[4].m_id) = p_m_inviteeXUID[4].m_id;
      BYTE1(v10[4].m_id) = BYTE1(p_m_inviteeXUID[4].m_id);
      BYTE2(v10[4].m_id) = BYTE2(p_m_inviteeXUID[4].m_id);
      BYTE3(v10[4].m_id) = BYTE3(p_m_inviteeXUID[4].m_id);
      BYTE4(v10[4].m_id) = BYTE4(p_m_inviteeXUID[4].m_id);
      BYTE5(v10[4].m_id) = BYTE5(p_m_inviteeXUID[4].m_id);
      BYTE6(v10[4].m_id) = BYTE6(p_m_inviteeXUID[4].m_id);
      HIBYTE(v10[4].m_id) = HIBYTE(p_m_inviteeXUID[4].m_id);
      LOBYTE(v10[5].m_id) = p_m_inviteeXUID[5].m_id;
      BYTE1(v10[5].m_id) = BYTE1(p_m_inviteeXUID[5].m_id);
      BYTE2(v10[5].m_id) = BYTE2(p_m_inviteeXUID[5].m_id);
      BYTE3(v10[5].m_id) = BYTE3(p_m_inviteeXUID[5].m_id);
      BYTE4(v10[5].m_id) = BYTE4(p_m_inviteeXUID[5].m_id);
      BYTE5(v10[5].m_id) = BYTE5(p_m_inviteeXUID[5].m_id);
      BYTE6(v10[5].m_id) = BYTE6(p_m_inviteeXUID[5].m_id);
      HIBYTE(v10[5].m_id) = HIBYTE(p_m_inviteeXUID[5].m_id);
      LOBYTE(v10[6].m_id) = p_m_inviteeXUID[6].m_id;
      BYTE1(v10[6].m_id) = BYTE1(p_m_inviteeXUID[6].m_id);
      BYTE2(v10[6].m_id) = BYTE2(p_m_inviteeXUID[6].m_id);
      BYTE3(v10[6].m_id) = BYTE3(p_m_inviteeXUID[6].m_id);
      ++v8;
      HIDWORD(v10[6].m_id) = HIDWORD(p_m_inviteeXUID[6].m_id);
      LODWORD(v10[7].m_id) = p_m_inviteeXUID[7].m_id;
      HIDWORD(v10[7].m_id) = HIDWORD(p_m_inviteeXUID[7].m_id);
      v10 += 10;
    }
    p_m_inviteeXUID += 10;
    --v11;
  }
  while ( v11 );
  return v8;
}

/*
==============
Online_InvitationManager::GetSlotForInviter
==============
*/
__int64 Online_InvitationManager::GetSlotForInviter(Online_InvitationManager *this, const XUID inviterXUID, const unsigned __int64 inviterPlatformId)
{
  unsigned __int64 *p_m_inviterPlatformId; 
  int v6; 
  XUID xuid; 

  xuid.m_id = inviterXUID.m_id;
  p_m_inviterPlatformId = &this->invitations[0].m_inviterPlatformId;
  v6 = 0;
  while ( (!XUID::IsValid(&xuid) || !XUID::operator==(&this->invitations[v6].m_inviterXUID, &xuid)) && (!inviterPlatformId || *p_m_inviterPlatformId != inviterPlatformId) )
  {
    ++v6;
    p_m_inviterPlatformId += 10;
    if ( v6 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v6;
}

/*
==============
Online_InvitationManager::GetSlotForNewInvite
==============
*/
__int64 Online_InvitationManager::GetSlotForNewInvite(Online_InvitationManager *this)
{
  unsigned int v2; 
  unsigned int UTC; 
  signed int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int *p_m_timeSentUTC; 
  unsigned int v8; 
  __int64 result; 
  signed int v10; 

  v2 = -1;
  UTC = LiveStorage_GetUTC();
  v4 = 0;
  v5 = UTC;
  v6 = 0;
  p_m_timeSentUTC = &this->invitations[0].m_timeSentUTC;
  while ( 1 )
  {
    v8 = *p_m_timeSentUTC;
    result = (unsigned int)v6;
    if ( !*p_m_timeSentUTC )
      break;
    v10 = v5 - v8;
    if ( (int)(v5 - v8) <= v4 )
      LODWORD(result) = v2;
    ++v6;
    p_m_timeSentUTC += 20;
    v2 = result;
    if ( v10 <= v4 )
      v10 = v4;
    v4 = v10;
    if ( v6 >= 16 )
    {
      if ( (int)result < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 889, ASSERT_TYPE_ASSERT, "(slotWithOldestInvitation >= 0)", (const char *)&queryFormat, "slotWithOldestInvitation >= 0") )
        __debugbreak();
      return v2;
    }
  }
  return result;
}

/*
==============
Online_InvitationManager::GetSlotForUserInRecentlyInvitedList
==============
*/
__int64 Online_InvitationManager::GetSlotForUserInRecentlyInvitedList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  unsigned int v2; 
  InvitedUserData *recentlyInvitedUsers; 
  __int64 v4; 
  unsigned __int64 m_platformId; 

  v2 = 0;
  recentlyInvitedUsers = this->recentlyInvitedUsers;
  v4 = 0i64;
  while ( !XUID::IsValid(&recentlyInvitedUsers->m_user.m_xuid) || !XUID::operator==(&recentlyInvitedUsers->m_user.m_xuid, &user->m_xuid) )
  {
    m_platformId = recentlyInvitedUsers->m_user.m_platformId;
    if ( m_platformId )
    {
      if ( m_platformId == user->m_platformId )
        break;
    }
    ++v2;
    ++v4;
    ++recentlyInvitedUsers;
    if ( v4 >= 32 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Online_InvitationManager::HasPendingInvitiation
==============
*/
char Online_InvitationManager::HasPendingInvitiation(Online_InvitationManager *this, InvitationType type)
{
  __int64 v2; 
  InvitationType *i; 

  v2 = 0i64;
  for ( i = &this->invitations[0].m_invitationType; !*((_DWORD *)i - 1) || *i != type; i += 20 )
  {
    if ( ++v2 >= 16 )
      return 0;
  }
  return 1;
}

/*
==============
Online_InvitationManager::IsUserInTheRecentlyInvitedUsersList
==============
*/
char Online_InvitationManager::IsUserInTheRecentlyInvitedUsersList(Online_InvitationManager *this, const InvitedUserData::InvitedUser *user)
{
  __int64 v4; 
  InvitedUserData *i; 
  unsigned __int64 m_platformId; 

  if ( XUID::IsNull(&user->m_xuid) && !user->m_platformId )
    return 0;
  v4 = 0i64;
  for ( i = this->recentlyInvitedUsers; !XUID::IsValid(&i->m_user.m_xuid) || !XUID::operator==(&i->m_user.m_xuid, &user->m_xuid); ++i )
  {
    m_platformId = i->m_user.m_platformId;
    if ( m_platformId )
    {
      if ( m_platformId == user->m_platformId )
        break;
    }
    if ( ++v4 >= 32 )
      return 0;
  }
  return 1;
}

/*
==============
Online_InvitationManager::IsUserInvitable
==============
*/
bool Online_InvitationManager::IsUserInvitable(Online_InvitationManager *this, const int controllerIndex, XUID xuid, unsigned __int64 platformId, FriendsPopupTabs userType, const char **errorString, const char **devErrorString)
{
  const char **v7; 
  const char **v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  int integer; 
  __int64 v16; 
  int *p_m_timeSent; 
  __int64 v18; 
  const XUID *v19; 
  int v20; 
  int v21; 
  const char *v22; 
  const PartyData *ActiveParty; 
  Online_BlockList *Instance; 
  InvitedUserData *recentlyInvitedUsers; 
  unsigned __int64 m_platformId; 
  Online_Friends *v27; 
  Online_Friends *v29; 
  Online_MetPlayer *v30; 
  Online_Friends *v31; 
  Online_Friends *v32; 
  OnlineClansManager *v33; 
  OnlineClansManager *v34; 
  OnlineClan *ClanById; 
  __int64 v36; 
  XUID result; 
  XUID xuida[2]; 

  v7 = errorString;
  if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1079, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
    __debugbreak();
  v11 = devErrorString;
  if ( !devErrorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1080, ASSERT_TYPE_ASSERT, "(devErrorString)", (const char *)&queryFormat, "devErrorString") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v36) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1081, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v36, 8) )
      __debugbreak();
  }
  v12 = Sys_Milliseconds();
  v13 = DVARINT_online_time_to_wait_before_inviting_the_same_user_again;
  v14 = v12;
  if ( !DVARINT_online_time_to_wait_before_inviting_the_same_user_again && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_time_to_wait_before_inviting_the_same_user_again") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  v16 = 32i64;
  p_m_timeSent = &this->recentlyInvitedUsers[0].m_timeSent;
  v18 = 0i64;
  do
  {
    if ( v14 - *p_m_timeSent > integer )
    {
      v19 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)p_m_timeSent - 2, v19);
      *((_QWORD *)p_m_timeSent - 1) = 0i64;
      *p_m_timeSent = 0;
    }
    p_m_timeSent += 6;
    --v16;
  }
  while ( v16 );
  v20 = controllerIndex;
  if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, v7, v11, userType == FRIENDS_POPUP_TAB_ONLINE_FRIENDS) || !Live_IsInGamemodeToInvite(v7, v11) )
    return 0;
  if ( Live_XUIDIsLocalPlayer(xuid) )
  {
    *v7 = "ONLINE/USER_IS_LOCAL";
    return 0;
  }
  if ( Party_IsPlayerInAnyParty(xuid, (PartyType *)&errorString) )
  {
    v21 = (int)errorString;
    *v7 = "ONLINE/ALREADY_IN_GAME_OR_PARTY";
    if ( v21 == 1 )
    {
      v22 = "This user found in our private party";
    }
    else
    {
      v22 = "This user found in our game lobby";
      if ( v21 )
        v22 = "This user found in unknown party";
    }
LABEL_58:
    *v11 = v22;
    return 0;
  }
  if ( Party_IsSearchingForPlaylistsThatDisabledInviteJoins() )
  {
    *v7 = "ONLINE/PLAYLIST_INVITE_DISABLED";
    return 0;
  }
  ActiveParty = Party_GetActiveParty();
  if ( Party_ShouldCurrentSessionBeClosed(ActiveParty) )
  {
    *v7 = "ONLINE/CANT_INVITE_CLOSED_PARTY";
    return 0;
  }
  Instance = Online_BlockList::GetInstance();
  if ( Online_BlockList::IsBlocked(Instance, controllerIndex, xuid, platformId) )
  {
    *v7 = "ONLINE/CANT_INVITE_JOIN_USER_IN_BLOCK_LIST";
    return 0;
  }
  xuida[0] = xuid;
  xuida[1].m_id = platformId;
  if ( !XUID::IsNull(xuida) || xuida[1].m_id )
  {
    recentlyInvitedUsers = this->recentlyInvitedUsers;
    while ( !XUID::IsValid(&recentlyInvitedUsers->m_user.m_xuid) || !XUID::operator==(&recentlyInvitedUsers->m_user.m_xuid, xuida) )
    {
      m_platformId = recentlyInvitedUsers->m_user.m_platformId;
      if ( m_platformId )
      {
        if ( m_platformId == xuida[1].m_id )
          break;
      }
      ++v18;
      ++recentlyInvitedUsers;
      if ( v18 >= 32 )
      {
        v20 = controllerIndex;
        goto LABEL_42;
      }
    }
    *v7 = "ONLINE/INVITE_SPAM_BACKOFF";
    return 0;
  }
LABEL_42:
  switch ( userType )
  {
    case FRIENDS_POPUP_TAB_ONLINE_FRIENDS:
      v27 = Online_Friends::GetInstance();
      return Online_Friends::IsPlatformFriendInvitable(v27, v20, platformId, v7, v11);
    case FRIENDS_POPUP_TAB_CROSSPLAY_FRIENDS:
      v29 = Online_Friends::GetInstance();
      return Online_Friends::Crossplay_FriendInvitable(v29, v20, xuid, v7, v11);
    case FRIENDS_POPUP_TAB_RECENT_PLAYERS:
      v30 = Online_MetPlayer::GetInstance();
      return Online_MetPlayer::IsPlayerInvitable(v30, v20, xuid, v7, v11);
    case FRIENDS_POPUP_TAB_FAVORITE_FRIENDS:
      v31 = Online_Friends::GetInstance();
      if ( Online_Friends::FavoriteFriends_IsEnabled(v31) )
      {
        v32 = Online_Friends::GetInstance();
        return Online_Friends::FavoriteFriends_IsFriendsInvitable(v32, v20, xuid, v7, v11);
      }
      return 0;
    case FRIENDS_POPUP_TAB_REGIMENTS:
      v33 = OnlineClansManager::GetInstance();
      if ( OnlineClansManager::GetActiveClan(v33, v20, (unsigned __int64 *)&devErrorString) )
      {
        v34 = OnlineClansManager::GetInstance();
        ClanById = OnlineClansManager::GetClanById(v34, v20, (const unsigned __int64)devErrorString);
        if ( ClanById )
          return OnlineClan::IsMemberInvitable(ClanById, xuid, v7, v11);
        *v7 = "ONLINE/CANT_INVITE_REGIMENT_NOT_ACTIVE";
        v22 = "Could not get clan by id";
      }
      else
      {
        *v7 = "ONLINE/CANT_INVITE_REGIMENT_NOT_ACTIVE";
        v22 = "GetActiveClan returned false";
      }
      goto LABEL_58;
  }
  return 0;
}

/*
==============
Online_InvitationManager::IsUserJoinable
==============
*/
bool Online_InvitationManager::IsUserJoinable(Online_InvitationManager *this, const int controllerIndex, XUID xuid, unsigned __int64 platformId, FriendsPopupTabs userType, const char **errorString, const char **devErrorString)
{
  const char **v7; 
  const char **v11; 
  PartyType v12; 
  const char *v13; 
  Online_BlockList *Instance; 
  const dvar_t *v15; 
  bool enabled; 
  Online_Friends *v17; 
  Online_Friends *v19; 
  Online_MetPlayer *v20; 
  Online_Friends *v21; 
  Online_Friends *v22; 
  OnlineClansManager *v23; 
  OnlineClansManager *v24; 
  OnlineClan *ClanById; 
  char **v26; 
  PartyType typeOfPartyTheUserIsIn; 

  v7 = errorString;
  if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1232, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
    __debugbreak();
  v11 = devErrorString;
  if ( !devErrorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1233, ASSERT_TYPE_ASSERT, "(devErrorString)", (const char *)&queryFormat, "devErrorString") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v26) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1235, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v26, 8) )
      __debugbreak();
  }
  if ( !Live_HasOnlineServicesAndRequirementsToJoin(controllerIndex, v7, v11) )
    return 0;
  if ( Live_XUIDIsLocalPlayer(xuid) )
  {
    *v7 = "ONLINE/USER_IS_LOCAL";
    return 0;
  }
  if ( Party_IsPlayerInAnyParty(xuid, &typeOfPartyTheUserIsIn) )
  {
    v12 = typeOfPartyTheUserIsIn;
    *v7 = "ONLINE/ALREADY_IN_GAME_OR_PARTY";
    if ( v12 == PRIVATE_PARTY_ID )
    {
      v13 = "This user found in our private party";
    }
    else
    {
      v13 = "This user found in our game lobby";
      if ( v12 )
        v13 = "This user found in unknown party";
    }
    goto LABEL_39;
  }
  Instance = Online_BlockList::GetInstance();
  if ( Online_BlockList::IsBlocked(Instance, controllerIndex, xuid, platformId) )
  {
    *v7 = "ONLINE/CANT_INVITE_JOIN_USER_IN_BLOCK_LIST";
    return 0;
  }
  if ( userType )
  {
    switch ( userType )
    {
      case FRIENDS_POPUP_TAB_CROSSPLAY_FRIENDS:
        v19 = Online_Friends::GetInstance();
        return Online_Friends::Crossplay_FriendJoinable(v19, controllerIndex, xuid, v7, v11);
      case FRIENDS_POPUP_TAB_RECENT_PLAYERS:
        v20 = Online_MetPlayer::GetInstance();
        return Online_MetPlayer::IsPlayerJoinable(v20, controllerIndex, xuid, v7, v11);
      case FRIENDS_POPUP_TAB_FAVORITE_FRIENDS:
        v21 = Online_Friends::GetInstance();
        if ( Online_Friends::FavoriteFriends_IsEnabled(v21) )
        {
          v22 = Online_Friends::GetInstance();
          return Online_Friends::FavoriteFriends_IsFriendsJoinable(v22, controllerIndex, xuid, v7, v11);
        }
        return 0;
    }
    if ( userType != FRIENDS_POPUP_TAB_REGIMENTS )
      return 0;
    v23 = OnlineClansManager::GetInstance();
    if ( OnlineClansManager::GetActiveClan(v23, controllerIndex, (unsigned __int64 *)&errorString) )
    {
      v24 = OnlineClansManager::GetInstance();
      ClanById = OnlineClansManager::GetClanById(v24, controllerIndex, (const unsigned __int64)errorString);
      if ( ClanById )
        return OnlineClan::IsMemberJoinable(ClanById, xuid, v7, v11);
      *v7 = "ONLINE/CANT_INVITE_JOIN_REGIMENT_NOT_ACTIVE";
      v13 = "Could not get clan by id";
    }
    else
    {
      *v7 = "ONLINE/CANT_INVITE_JOIN_REGIMENT_NOT_ACTIVE";
      v13 = "GetActiveClan returned false";
    }
LABEL_39:
    *v11 = v13;
    return 0;
  }
  v15 = DVARBOOL_online_platform_friends_use_dw_presence;
  if ( !DVARBOOL_online_platform_friends_use_dw_presence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_friends_use_dw_presence") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  enabled = v15->current.enabled;
  v17 = Online_Friends::GetInstance();
  return Online_Friends::IsPlatformFriendJoinable(v17, controllerIndex, xuid, platformId, enabled, v7, v11);
}

/*
==============
LUI_CoD_LuaCall_BatchInviteOnlineFriends_impl
==============
*/
__int64 LUI_CoD_LuaCall_BatchInviteOnlineFriends_impl(lua_State *const luaVM)
{
  int v2; 
  XUID *v3; 
  __int64 v4; 
  int v5; 
  unsigned __int64 *v6; 
  const char *v7; 
  XUID result; 
  XUID xuid[16]; 
  unsigned __int64 platformId[16]; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, "USAGE: Invitation.BatchInviteOnlineFriends( controllerIndex, xuids )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 5 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = xuid;
    v4 = 16i64;
    do
    {
      XUID::XUID(v3++);
      --v4;
    }
    while ( v4 );
    v5 = 0;
    j_lua_pushinteger(luaVM, 1i64);
    j_lua_gettable(luaVM, 2);
    if ( j_lua_type(luaVM, -1) )
    {
      v6 = platformId;
      do
      {
        if ( v5 >= 16 )
          Com_PrintError(16, "%s: too many xuids sent in. Could not add extra xuid into array for invite because it exceeds %i\n", "LUI_CoD_LuaCall_BatchInviteOnlineFriends_impl", (unsigned int)v5);
        if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1439, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
          __debugbreak();
        v7 = j_lua_tolstring(luaVM, -1, NULL);
        XUID::FromString(&result, v7);
        if ( XUID::IsValid(&result) )
        {
          XUID::operator=(&xuid[v5++], &result);
          ++v6;
        }
        *v6 = 0i64;
        j_lua_settop(luaVM, -2);
        j_lua_pushinteger(luaVM, v5 + 1);
        j_lua_gettable(luaVM, 2);
      }
      while ( j_lua_type(luaVM, -1) );
    }
    j_lua_settop(luaVM, -2);
    if ( v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1454, ASSERT_TYPE_ASSERT, "(userCount > 0)", (const char *)&queryFormat, "userCount > 0") )
      __debugbreak();
    Online_InvitationManager::SendInvitation(&Online_InvitationManager::ms_instance, v2, xuid, platformId, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserInviteButtonDisabled_impl
==============
*/
__int64 LUI_CoD_LuaCall_IsUserInviteButtonDisabled_impl(lua_State *const luaVM)
{
  int v2; 
  XUID v3; 
  const char *v4; 
  unsigned __int64 v5; 
  FriendsPopupTabs userType; 
  char *value; 
  char *devErrorString; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Invitation.IsUserInviteButtonDisabled( controllerIndex, xuid, platformId, userType )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  v5 = I_atoui64(v4);
  userType = lui_tointeger32(luaVM, 4);
  value = (char *)&queryFormat.fmt + 3;
  devErrorString = (char *)&queryFormat.fmt + 3;
  LOBYTE(v3.m_id) = !Online_InvitationManager::IsUserInvitable(&Online_InvitationManager::ms_instance, v2, v3, v5, userType, (const char **)&value, (const char **)&devErrorString);
  j_lua_createtable(LUI_luaVM, 0, 3);
  LUI_SetTableBool("disabled", v3.m_id, LUI_luaVM);
  LUI_SetTableString("errorString", value, LUI_luaVM);
  LUI_SetTableString("devErrorString", devErrorString, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsUserJoinButtonDisabled_impl
==============
*/
__int64 LUI_CoD_LuaCall_IsUserJoinButtonDisabled_impl(lua_State *const luaVM)
{
  int v2; 
  XUID v3; 
  const char *v4; 
  unsigned __int64 v5; 
  FriendsPopupTabs userType; 
  char *value; 
  char *devErrorString; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Invitation.IsUserJoinButtonDisabled( controllerIndex, xuid, userType )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3.m_id = *(_QWORD *)j_lua_touserdata(luaVM, 2);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  v5 = I_atoui64(v4);
  userType = lui_tointeger32(luaVM, 4);
  value = (char *)&queryFormat.fmt + 3;
  devErrorString = (char *)&queryFormat.fmt + 3;
  LOBYTE(v3.m_id) = !Online_InvitationManager::IsUserJoinable(&Online_InvitationManager::ms_instance, v2, v3, v5, userType, (const char **)&value, (const char **)&devErrorString);
  j_lua_createtable(LUI_luaVM, 0, 3);
  LUI_SetTableBool("disabled", v3.m_id, LUI_luaVM);
  LUI_SetTableString("errorString", value, LUI_luaVM);
  LUI_SetTableString("devErrorString", devErrorString, LUI_luaVM);
  return 1i64;
}

/*
==============
Online_InvitationManager::OnInvitationSent
==============
*/
void Online_InvitationManager::OnInvitationSent(Online_InvitationManager *this, const bool isSuccess)
{
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 1, LUI_luaVM);
    LUI_SetTableString("genEventName", "genPartyInviteSent", LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_InvitationManager::OnReceiveIncomingPartyMember
==============
*/
void Online_InvitationManager::OnReceiveIncomingPartyMember(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId, bool areWeHost, const bool isJoinerNewToTheParty)
{
  __int64 v9; 
  int v10; 
  __int64 v11; 
  unsigned __int64 m_id; 
  XUID *p_xuid; 
  const XUID *v14; 
  const XUID *v15; 
  const char *v16; 
  OnlineChatManager *Instance; 
  unsigned __int64 v18; 
  XUID xuida; 
  XUID result; 
  char dest[256]; 
  XUID receiverXuid; 

  receiverXuid.m_id = xuid.m_id;
  v9 = controllerIndex;
  if ( areWeHost )
  {
    xuida.m_id = xuid.m_id;
    v10 = 0;
    while ( 1 )
    {
      v11 = v10;
      if ( XUID::operator==(&this->usersJoining[v10].xuid, &xuida) )
        break;
      if ( ++v10 >= 16 )
        goto LABEL_9;
    }
    if ( v10 >= 0 )
    {
      m_id = receiverXuid.m_id;
      p_xuid = &this->usersJoining[v11].xuid;
      v14 = XUID::NullXUID(&result);
      XUID::operator=(p_xuid, v14);
      v15 = XUID::NullXUID(&result);
      XUID::operator=(p_xuid + 1, v15);
      p_xuid[2].m_id = 0i64;
      if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
      {
        Com_sprintf(dest, 0x100ui64, "complete");
        Online_Telemetry_SendCommunicationEvent(v9, (XUID)m_id, INVITE_JOIN_RECEIVED_JOIN_INFO_REQUEST_CLEARED, dest);
      }
    }
  }
LABEL_9:
  if ( partyId == 1 && isJoinerNewToTheParty )
  {
    v16 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_JOINED_PARTY", "ui string", LOCMSG_NOERR);
    if ( v16 )
    {
      Instance = OnlineChatManager::GetInstance();
      v18 = XUID::ToUint64(&receiverXuid);
      OnlineChatManager::SendPlayerEvent(Instance, v9, v16, v18, username);
    }
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
    {
      LUI_BeginTable("options", 0, 4, LUI_luaVM);
      LUI_SetTableString("genEventName", "genReceivePartyJoin", LUI_luaVM);
      LUI_SetTableInt("controllerIndex", v9, LUI_luaVM);
      LUI_SetTableString("joinerName", username, LUI_luaVM);
      LUI_SetTableInt("partyId", 1i64, LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
Online_InvitationManager::OnReceiveInvitation
==============
*/
void Online_InvitationManager::OnReceiveInvitation(Online_InvitationManager *this, const int controllerIndex, Online_Invitation *data)
{
  __int64 v3; 
  unsigned __int64 *p_m_inviterPlatformId; 
  unsigned __int64 m_inviterPlatformId; 
  signed int v8; 
  int v9; 
  int v10; 
  unsigned int UTC; 
  int v12; 
  unsigned int *p_m_timeSentUTC; 
  unsigned int v14; 
  signed int v15; 
  Online_Invitation *v16; 
  InvitationType m_invitationType; 
  const char *v18; 
  const char *v19; 
  char *m_inviterName; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  const char *v24; 
  OnlineChatManager *Instance; 
  unsigned __int64 v26; 
  XUID xuid; 

  v3 = controllerIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 272, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->m_invitationType == INVITE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 273, ASSERT_TYPE_ASSERT, "(data->m_invitationType != InvitationType::INVITE_NONE)", (const char *)&queryFormat, "data->m_invitationType != InvitationType::INVITE_NONE") )
    __debugbreak();
  p_m_inviterPlatformId = &this->invitations[0].m_inviterPlatformId;
  m_inviterPlatformId = data->m_inviterPlatformId;
  v8 = 0;
  xuid.m_id = data->m_inviterXUID.m_id;
  v9 = 0;
  while ( (!XUID::IsValid(&xuid) || !XUID::operator==(&this->invitations[v9].m_inviterXUID, &xuid)) && (!m_inviterPlatformId || *p_m_inviterPlatformId != m_inviterPlatformId) )
  {
    ++v9;
    p_m_inviterPlatformId += 10;
    if ( v9 >= 16 )
      goto LABEL_15;
  }
  if ( v9 >= 0 )
    goto LABEL_28;
LABEL_15:
  v10 = -1;
  UTC = LiveStorage_GetUTC();
  v12 = 0;
  p_m_timeSentUTC = &this->invitations[0].m_timeSentUTC;
  while ( 1 )
  {
    v14 = *p_m_timeSentUTC;
    v9 = v12;
    if ( !*p_m_timeSentUTC )
      break;
    v15 = UTC - v14;
    if ( (int)(UTC - v14) <= v8 )
      v9 = v10;
    ++v12;
    p_m_timeSentUTC += 20;
    v10 = v9;
    if ( v15 <= v8 )
      v15 = v8;
    v8 = v15;
    if ( v12 >= 16 )
    {
      if ( v9 >= 0 )
        goto LABEL_28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 889, ASSERT_TYPE_ASSERT, "(slotWithOldestInvitation >= 0)", (const char *)&queryFormat, "slotWithOldestInvitation >= 0") )
        __debugbreak();
      break;
    }
  }
  if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 282, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
    __debugbreak();
LABEL_28:
  v16 = &this->invitations[v9];
  Online_Invitation::operator=(v16, data);
  this->invitations[v9].m_invitationId = this->nextInvitationId++;
  Online_Invitation::OnReceived(v16);
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    m_invitationType = data->m_invitationType;
    if ( m_invitationType == INVITE_BATTLENET )
    {
      v18 = "pcPlayerInvite";
      v19 = "pcEventName";
    }
    else
    {
      if ( m_invitationType != INVITE_DEMONWARE )
      {
LABEL_34:
        m_inviterName = data->m_inviterName;
        LUI_SetTableString("senderName", data->m_inviterName, LUI_luaVM);
        LUI_SetTableInt("invitationID", v16->m_invitationId, LUI_luaVM);
        LUI_SetTableInt("controllerIndex", v3, LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
        goto LABEL_36;
      }
      v18 = "dwPlayerInvite";
      v19 = "dwEventName";
    }
    LUI_SetTableString(v19, v18, LUI_luaVM);
    goto LABEL_34;
  }
  m_inviterName = data->m_inviterName;
LABEL_36:
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "refresh_party_invitations", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  v21 = XUID::ToUint64(&data->m_inviterXUID);
  v22 = data->m_inviterPlatformId;
  v23 = v21;
  v24 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_GAME_INVITATION", "ui string", LOCMSG_NOERR);
  if ( v24 )
  {
    if ( v23 )
    {
      Instance = OnlineChatManager::GetInstance();
      v26 = v23;
    }
    else
    {
      if ( !v22 )
        return;
      Instance = OnlineChatManager::GetInstance();
      v26 = v22;
    }
    OnlineChatManager::SendPlayerEvent(Instance, v3, v24, v26, m_inviterName);
  }
}

/*
==============
Online_InvitationManager::OnReceiveMemberLeftParty
==============
*/
void Online_InvitationManager::OnReceiveMemberLeftParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  __int64 v5; 
  const char *v7; 
  OnlineChatManager *Instance; 
  unsigned __int64 v9; 
  XUID v10; 

  v10.m_id = xuid.m_id;
  v5 = controllerIndex;
  v7 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_LEFT_PARTY", "ui string", LOCMSG_NOERR);
  if ( v7 )
  {
    Instance = OnlineChatManager::GetInstance();
    v9 = XUID::ToUint64(&v10);
    OnlineChatManager::SendPlayerEvent(Instance, v5, v7, v9, username);
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 4, LUI_luaVM);
    LUI_SetTableString("genEventName", "genReceivePartyLeave", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableString("leaverName", username, LUI_luaVM);
    LUI_SetTableInt("partyId", partyId, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_InvitationManager::RefreshRecentlyInvitedUsers
==============
*/
void Online_InvitationManager::RefreshRecentlyInvitedUsers(Online_InvitationManager *this)
{
  int v2; 
  const dvar_t *v3; 
  int v4; 
  int integer; 
  int *p_m_timeSent; 
  __int64 v7; 
  const XUID *v8; 
  XUID result; 

  v2 = Sys_Milliseconds();
  v3 = DVARINT_online_time_to_wait_before_inviting_the_same_user_again;
  v4 = v2;
  if ( !DVARINT_online_time_to_wait_before_inviting_the_same_user_again && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_time_to_wait_before_inviting_the_same_user_again") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  p_m_timeSent = &this->recentlyInvitedUsers[0].m_timeSent;
  v7 = 32i64;
  do
  {
    if ( v4 - *p_m_timeSent > integer )
    {
      v8 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)p_m_timeSent - 2, v8);
      *((_QWORD *)p_m_timeSent - 1) = 0i64;
      *p_m_timeSent = 0;
    }
    p_m_timeSent += 6;
    --v7;
  }
  while ( v7 );
}

/*
==============
Online_InvitationManager::SendDWInvite
==============
*/
__int64 Online_InvitationManager::SendDWInvite(Online_InvitationManager *this, const int controllerIndex, const XUID *xuid, int userCount)
{
  __int64 v4; 
  unsigned int v7; 
  __int64 v9; 
  unsigned __int64 v10; 
  const XUID *v11; 
  const char *LocalClientName; 
  int v13; 
  __int64 i; 
  unsigned __int64 UniversalId; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v18; 
  bdRemoteTask *v19; 
  TaskManager *v20; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  unsigned int msgSize; 
  bdReference<bdRemoteTask> v23; 
  TaskCreateRequest pTaskCreateRequest; 
  Online_InvitationManager *v25; 
  InvitedUserData::InvitedUser m_id; 
  __int64 v27; 
  XUID result; 
  InvitedUserData::InvitedUser v29; 
  TaskCreateResult pTaskCreateResult; 
  Online_Invitation v31; 
  char dest[256]; 

  v27 = -2i64;
  v4 = userCount;
  v25 = this;
  Online_Invitation::Online_Invitation(&v31);
  v7 = 0;
  Com_Printf(25, "Online_InvitationManager::SendDWInvite: Sending invite to %d users\n", (unsigned int)v4);
  if ( Party_GetActiveParty()->inParty )
  {
    Core_strcpy(dest, 0x100ui64, ONLINE_INVITATION_MESSAGE_HEADER_0);
    v9 = -1i64;
    do
      ++v9;
    while ( ONLINE_INVITATION_MESSAGE_HEADER_0[v9] );
    v10 = v9 + 1;
    if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
      __debugbreak();
    dest[(unsigned int)v10] = 2;
    v11 = Live_GetXuid(&result, controllerIndex);
    XUID::operator=(&v31.m_inviterXUID, v11);
    LocalClientName = Live_GetLocalClientName(controllerIndex);
    Core_strcpy(v31.m_inviterName, 0x24ui64, LocalClientName);
    v31.m_timeSentUTC = LiveStorage_GetUTC();
    msgSize = Online_Invitation::Serialize(&v31, (unsigned __int8 *)&dest[(unsigned int)(v10 + 1)], 256 - (v10 + 1)) + v10 + 1;
    v13 = 0;
    if ( v4 > 0 )
    {
      for ( i = 0i64; i < v4; ++i )
      {
        *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
        memset(&pTaskCreateRequest.m_appData, 0, 48);
        pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        UniversalId = XUID::GetUniversalId((XUID *)&xuid[v13]);
        Instance = DWServicesAccess::GetInstance();
        Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
        v18 = (TaskCreateRequest *)DWMessaging::sendGlobalInstantMessage(Messaging, &v23, UniversalId, dest, msgSize);
        if ( v18 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
        {
          if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
          v19 = *(bdRemoteTask **)&v18->m_controllerIndex;
          pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v19;
          if ( v19 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
        }
        if ( v23.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v23.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v23.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v23.m_ptr->~bdReferencable)(v23.m_ptr, 1i64);
          v23.m_ptr = NULL;
        }
        pTaskCreateResult.m_localTaskId = 0;
        pTaskCreateResult.m_task = NULL;
        pTaskCreateRequest.m_controllerIndex = controllerIndex;
        pTaskCreateRequest.m_onCompletionCallback = SendInvitationComplete;
        v20 = TaskManager::GetInstance();
        if ( TaskManager::CreateTask(v20, &pTaskCreateRequest, &pTaskCreateResult) )
        {
          ++v7;
          m_id = (InvitedUserData::InvitedUser)xuid[i].m_id;
          v29 = m_id;
          Online_InvitationManager::AddUserToRecentlyInvitedList(v25, &v29);
          Com_Printf(25, "Online_InvitationManager::SendDWInvite started\n");
        }
        else
        {
          Com_PrintError(25, "Online_InvitationManager::SendDWInvite failed\n");
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
        ++v13;
      }
    }
    return v7;
  }
  else
  {
    Com_Printf(25, "Online_InvitationManager::SendDWInvite, party is not active, not sending invitation\n");
    return 0i64;
  }
}

/*
==============
Online_InvitationManager::SendInvitation
==============
*/
void Online_InvitationManager::SendInvitation(Online_InvitationManager *this, const int controllerIndex, const XUID *xuid, const unsigned __int64 *platformId, int numPlayersToInvite)
{
  XUID *v5; 
  __int64 v6; 
  XUID *v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  unsigned __int64 *v15; 
  Online_Friends *Instance; 
  const XUID *v17; 
  bool v18; 
  const XUID *v19; 
  __int64 v20; 
  Online_InvitationManager *v21; 
  Online_InvitationManager *v25[2]; 
  unsigned __int64 platformIdOut[2]; 
  XUID v27[16]; 
  XUID xuida[16]; 
  unsigned __int64 userID[16]; 

  v5 = v27;
  v6 = 16i64;
  v25[0] = this;
  do
  {
    XUID::XUID(v5++);
    --v6;
  }
  while ( v6 );
  v7 = xuida;
  v8 = 16i64;
  do
  {
    XUID::XUID(v7++);
    --v8;
  }
  while ( v8 );
  v9 = numPlayersToInvite;
  v10 = 0;
  v11 = 0;
  if ( numPlayersToInvite > 16 )
  {
    Com_PrintWarning(25, "Online_InvitationManager::SendInvitation: Too many invitations %d and the maximum is %d, ignoring the extra ones\n", (unsigned int)numPlayersToInvite, 16i64);
    v9 = 16;
  }
  v12 = v9;
  v13 = 0;
  if ( v9 > 0 )
  {
    v14 = 0i64;
    v15 = userID;
    while ( PlatformSessionsHSMEnabled() )
    {
      Instance = Online_Friends::GetInstance();
      v17 = &xuid[v13];
      if ( Online_Friends::FindIndexByPlatformId(Instance, controllerIndex, platformId[v14]) == -1 )
      {
        v18 = Social_GetPlatformId(controllerIndex, (const XUID)v17->m_id, platformIdOut);
        v19 = &xuid[v13];
        if ( !v18 )
          goto LABEL_15;
        XUID::operator=(&v27[v10++], v17);
        *v15++ = platformIdOut[0];
      }
      else
      {
        XUID::operator=(&v27[v10++], v17);
        *v15++ = platformId[v14];
      }
LABEL_16:
      ++v13;
      if ( ++v14 >= v12 )
      {
        v20 = 0i64;
        v21 = v25[0];
        if ( v10 > 0 && Online_InvitationManager::SendPlatformInvitation(v25[0], controllerIndex, userID, v10) )
        {
          do
          {
            platformIdOut[0] = (unsigned __int64)v27[v20];
            platformIdOut[1] = userID[v20];
            *(_OWORD *)v25 = *(_OWORD *)platformIdOut;
            Online_InvitationManager::AddUserToRecentlyInvitedList(v21, (const InvitedUserData::InvitedUser *)v25);
            ++v20;
          }
          while ( v20 < v10 );
        }
        if ( v11 > 0 )
          Online_InvitationManager::SendDWInvite(v21, controllerIndex, xuida, v11);
        return;
      }
    }
    v19 = &xuid[v13];
LABEL_15:
    XUID::operator=(&xuida[v11++], v19);
    goto LABEL_16;
  }
}

/*
==============
SendInvitationComplete
==============
*/
void SendInvitationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  bdLobbyErrorCode ErrorCode; 

  if ( taskState )
  {
    Online_InvitationManager::OnInvitationSent(&Online_InvitationManager::ms_instance, 0);
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(25, "SendInvitationComplete: Invitatin sent failed with error code %d\n", (unsigned int)ErrorCode);
  }
  else
  {
    Online_InvitationManager::OnInvitationSent(&Online_InvitationManager::ms_instance, 1);
    Com_Printf(25, "SendInvitationComplete: Invitation sent successfully\n");
  }
}

/*
==============
SendJoinInfoResponseComplete1
==============
*/
void SendJoinInfoResponseComplete1(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  bdLobbyErrorCode ErrorCode; 
  XUID *m_appData; 
  int m_controllerIndex; 

  if ( taskState )
  {
    ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(25, "SendJoinInfoRequestComplete: Invitatin sent failed with error code %d\n", (unsigned int)ErrorCode);
  }
  else
  {
    Com_Printf(25, "SendJoinInfoRequestComplete: Invitation sent successfully\n");
  }
  m_appData = (XUID *)pTask->m_appData;
  m_controllerIndex = pTask->m_controllerIndex;
  Online_InvitationManager::ms_instance.isJoinInfoSendInProgress = 0;
  HIDWORD(m_appData[2].m_id) = 2;
  if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
    Online_Telemetry_SendCommunicationEvent(m_controllerIndex, (XUID)m_appData->m_id, INVITE_JOIN_SEND_JOIN_INFO, NULL);
}

/*
==============
Online_InvitationManager::SendJoinInfoResponseComplete
==============
*/
void Online_InvitationManager::SendJoinInfoResponseComplete(Online_InvitationManager *this, const int controllerIndex, JoinerData *joinerData, bool success)
{
  this->isJoinInfoSendInProgress = 0;
  joinerData->inviteJoinerState = SEARCHING;
  if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
    Online_Telemetry_SendCommunicationEvent(controllerIndex, joinerData->xuid, INVITE_JOIN_SEND_JOIN_INFO, NULL);
}

/*
==============
Online_InvitationManager::SendJoinInfoToUser
==============
*/
void Online_InvitationManager::SendJoinInfoToUser(Online_InvitationManager *this, const int controllerIndex, JoinerData *joinerData)
{
  char v4; 
  char v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  PartyData *ActiveParty; 
  __int64 v10; 
  bdRemoteTask *m_ptr; 
  Online_BlockList *Instance; 
  unsigned int v13; 
  unsigned __int16 v14; 
  int v15; 
  unsigned int v16; 
  DWServicesAccess *v17; 
  DWMessaging *Messaging; 
  unsigned __int64 UniversalId; 
  TaskCreateRequest *v20; 
  bdRemoteTask *v21; 
  TaskManager *v22; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v24; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  XSECURITY_INFO *p_m_security; 
  Online_InvitationManager *v28; 
  __int64 v29; 
  TaskCreateResult pTaskCreateResult; 
  OnlineJoinInfo v31; 
  char Src[2]; 
  unsigned __int16 v33; 
  char v34[252]; 
  unsigned __int8 buffer[144]; 
  char dest[256]; 

  v29 = -2i64;
  result.m_ptr = (bdRemoteTask *)joinerData;
  v28 = this;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  v4 = 0;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 974, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v5 = 0;
  Core_strcpy(dest, 0x100ui64, ONLINE_INVITATION_MESSAGE_HEADER_0);
  v6 = -1i64;
  do
    ++v6;
  while ( ONLINE_INVITATION_MESSAGE_HEADER_0[v6] );
  v7 = truncate_cast<int,unsigned __int64>(v6 + 1);
  Src[0] = 1;
  v8 = 1;
  ActiveParty = Party_GetActiveParty();
  if ( Com_MP_GetIsLocalServerPaused() )
  {
    v4 = 3;
    m_ptr = result.m_ptr;
  }
  else if ( ActiveParty->inParty )
  {
    if ( Live_InAreaThatHasParties() )
    {
      p_m_security = &v31.communicationInfo.session.m_security;
      bdSecurityID::bdSecurityID(&v31.communicationInfo.session.m_security.m_id);
      bdSecurityKey::bdSecurityKey(&v31.communicationInfo.session.m_security.m_key);
      XSESSION_INFO::operator=(&v31.communicationInfo.session, &ActiveParty->session->dyn.sessionInfo);
      v31.gameMode[0] = Com_GameMode_GetActiveGameMode();
      v31.isInMatchmakingArea = Live_IsInMatchMakerArea();
      v31.clientPlatform[0] = GetClientPlatform();
      v31.matchmakingLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
      Instance = Online_BlockList::GetInstance();
      m_ptr = result.m_ptr;
      v31.isJoinerInInvitersBlocklist = Online_BlockList::IsBlocked(Instance, controllerIndex, (const XUID)result.m_ptr->__vftable, 0i64);
      v31.tournamentId = OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance);
      if ( XSESSION_INFO::IsValidSessionId(&v31.communicationInfo.session) )
      {
        Src[1] = 1;
        v13 = OnlineJoinInfo::Serialize(&v31, buffer, 0x81u);
        v14 = truncate_cast<unsigned short,unsigned int>(v13);
        v15 = v14;
        v33 = v14;
        memcpy_0(v34, buffer, v14);
        v8 = v15 + 4;
        v5 = 1;
      }
      else
      {
        v4 = 2;
      }
      bdSecurityKey::~bdSecurityKey(&v31.communicationInfo.session.m_security.m_key);
      bdSecurityID::~bdSecurityID(&v31.communicationInfo.session.m_security.m_id);
      if ( v5 )
        goto LABEL_18;
    }
    else
    {
      v4 = 1;
      m_ptr = result.m_ptr;
    }
  }
  else
  {
    v4 = 1;
    m_ptr = result.m_ptr;
  }
  if ( v8 >= 0x100ui64 )
  {
    j___report_rangecheckfailure(v10);
    JUMPOUT(0x140BF8425i64);
  }
  Src[v8] = 0;
  Src[v8 + 1] = v4;
  v8 += 2;
LABEL_18:
  v16 = v7 + v8;
  if ( (int)(v7 + v8) > 138 )
  {
    LODWORD(v24) = v7 + v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_invitation_manager.cpp", 1050, ASSERT_TYPE_ASSERT, "(payloadSize + curSize <= OnlineJoinInfo::Size() + 5 + 1 + 1 + 2)", "%s\n\tBuffer is small %d and %d\n", "payloadSize + curSize <= CURRENT_ONLINE_JOIN_INFO_MESSAGE_SIZE", v24, 138) )
      __debugbreak();
  }
  memcpy_0(&dest[v7], Src, v8);
  v17 = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(v17, controllerIndex);
  UniversalId = XUID::GetUniversalId((XUID *)m_ptr);
  v20 = (TaskCreateRequest *)DWMessaging::sendGlobalInstantMessage(Messaging, &result, UniversalId, dest, v16);
  if ( v20 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v21 = *(bdRemoteTask **)&v20->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v21;
    if ( v21 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v21->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = SendJoinInfoResponseComplete1;
  pTaskCreateRequest.m_appData = m_ptr;
  v22 = TaskManager::GetInstance();
  if ( TaskManager::CreateTask(v22, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    v28->isJoinInfoSendInProgress = 1;
    Com_Printf(25, "Online_InvitationManager::SendDWInvite started\n");
  }
  else
  {
    Com_PrintError(25, "Online_InvitationManager::SendDWInvite failed\n");
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
Online_InvitationManager::SendPlatformInvitation
==============
*/
_BOOL8 Online_InvitationManager::SendPlatformInvitation(Online_InvitationManager *this, const int controllerIndex, const unsigned __int64 *userID, int numPlayersToInvite)
{
  unsigned __int64 Myres; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  wchar_t *v12; 
  unsigned __int64 v13; 
  wchar_t *Ptr; 
  bool v15; 
  unsigned __int64 v16; 
  wchar_t *v17; 
  char *Myfirst; 
  unsigned __int64 v19; 
  std::vector<std::wstring> usersToInvite; 
  __int64 v22; 
  std::wstring _Right; 
  std::wstring v24; 
  char v25[6]; 

  v22 = -2i64;
  usersToInvite._Mypair._Myval2._Myfirst = NULL;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&usersToInvite._Mypair._Myval2._Mylast = _XMM0;
  _Right._Mypair._Myval2._Mysize = 0i64;
  Myres = 7i64;
  _Right._Mypair._Myval2._Myres = 7i64;
  _Right._Mypair._Myval2._Bx._Buf[0] = 0;
  v9 = numPlayersToInvite;
  if ( numPlayersToInvite > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = userID[v10];
      v12 = (wchar_t *)v25;
      do
      {
        *--v12 = v11 % 0xA + 48;
        v11 /= 0xAui64;
      }
      while ( v11 );
      v24._Mypair._Myval2._Mysize = 0i64;
      v24._Mypair._Myval2._Myres = 7i64;
      v24._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v12 != (wchar_t *)v25 )
        std::wstring::assign(&v24, v12, (v25 - (char *)v12) >> 1);
      if ( Myres >= 8 )
      {
        v13 = 2 * Myres + 2;
        Ptr = _Right._Mypair._Myval2._Bx._Ptr;
        if ( v13 >= 0x1000 )
        {
          v13 = 2 * Myres + 41;
          Ptr = (wchar_t *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)_Right._Mypair._Myval2._Bx._Ptr - (char *)Ptr - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(Ptr, v13);
      }
      _Right = v24;
      if ( usersToInvite._Mypair._Myval2._Myend == usersToInvite._Mypair._Myval2._Mylast )
        std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(&usersToInvite, usersToInvite._Mypair._Myval2._Mylast, &_Right);
      else
        std::wstring::wstring(usersToInvite._Mypair._Myval2._Mylast++, &_Right);
      ++v10;
      Myres = _Right._Mypair._Myval2._Myres;
    }
    while ( v10 < v9 );
  }
  v15 = Xb3MultiplayerManager::InviteUsers(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, &usersToInvite);
  if ( Myres >= 8 )
  {
    v16 = 2 * Myres + 2;
    v17 = _Right._Mypair._Myval2._Bx._Ptr;
    if ( v16 >= 0x1000 )
    {
      v16 = 2 * Myres + 41;
      v17 = (wchar_t *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)_Right._Mypair._Myval2._Bx._Ptr - (char *)v17 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v17, v16);
  }
  if ( usersToInvite._Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(usersToInvite._Mypair._Myval2._Myfirst, usersToInvite._Mypair._Myval2._Mylast, (std::allocator<std::wstring > *)&usersToInvite);
    Myfirst = (char *)usersToInvite._Mypair._Myval2._Myfirst;
    v19 = ((char *)usersToInvite._Mypair._Myval2._Myend - (char *)usersToInvite._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFE0ui64;
    if ( v19 >= 0x1000 )
    {
      v19 += 39i64;
      Myfirst = (char *)usersToInvite._Mypair._Myval2._Myfirst[-1]._Mypair._Myval2._Myres;
      if ( (unsigned __int64)((char *)usersToInvite._Mypair._Myval2._Myfirst - Myfirst - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myfirst, v19);
  }
  return v15;
}

/*
==============
Online_InvitationManager::ShowToastNotificationAfterUserJoinedParty
==============
*/
void Online_InvitationManager::ShowToastNotificationAfterUserJoinedParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  __int64 v5; 

  v5 = controllerIndex;
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 4, LUI_luaVM);
    LUI_SetTableString("genEventName", "genReceivePartyJoin", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableString("joinerName", username, LUI_luaVM);
    LUI_SetTableInt("partyId", partyId, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_InvitationManager::ShowToastNotificationAfterUserLeftParty
==============
*/
void Online_InvitationManager::ShowToastNotificationAfterUserLeftParty(Online_InvitationManager *this, const int controllerIndex, const XUID xuid, const char *username, const int partyId)
{
  __int64 v5; 

  v5 = controllerIndex;
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 4, LUI_luaVM);
    LUI_SetTableString("genEventName", "genReceivePartyLeave", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableString("leaverName", username, LUI_luaVM);
    LUI_SetTableInt("partyId", partyId, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
Online_InvitationManager::UserCompletedInviteJoin
==============
*/
void Online_InvitationManager::UserCompletedInviteJoin(Online_InvitationManager *this, const int controllerIndex, const int joinerIndex, const XUID xuid)
{
  XUID *p_xuid; 
  const XUID *v7; 
  const XUID *v8; 
  XUID result; 
  char dest[256]; 

  p_xuid = &this->usersJoining[joinerIndex].xuid;
  v7 = XUID::NullXUID(&result);
  XUID::operator=(p_xuid, v7);
  v8 = XUID::NullXUID(&result);
  XUID::operator=(p_xuid + 1, v8);
  p_xuid[2].m_id = 0i64;
  if ( Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
  {
    Com_sprintf(dest, 0x100ui64, "complete");
    Online_Telemetry_SendCommunicationEvent(controllerIndex, xuid, INVITE_JOIN_RECEIVED_JOIN_INFO_REQUEST_CLEARED, dest);
  }
}

