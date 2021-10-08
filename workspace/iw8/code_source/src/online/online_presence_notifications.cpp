/*
==============
OnlinePresenceNotifications::GetSubscribedUserPresence
==============
*/

RemoteUserPresenceData *__fastcall OnlinePresenceNotifications::GetSubscribedUserPresence(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid)
{
  return ?GetSubscribedUserPresence@OnlinePresenceNotifications@@QEAAPEAURemoteUserPresenceData@@HUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
OnlinePresenceNotifications::GetInstance
==============
*/

OnlinePresenceNotifications *__fastcall OnlinePresenceNotifications::GetInstance()
{
  return ?GetInstance@OnlinePresenceNotifications@@SAAEAV1@XZ();
}

/*
==============
OnlinePresenceNotifications::OnSignedOut
==============
*/

void __fastcall OnlinePresenceNotifications::OnSignedOut(OnlinePresenceNotifications *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlinePresenceNotifications@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlinePresenceNotifications::GetInstancePtr
==============
*/

OnlinePresenceNotifications *__fastcall OnlinePresenceNotifications::GetInstancePtr()
{
  return ?GetInstancePtr@OnlinePresenceNotifications@@SAPEAV1@XZ();
}

/*
==============
OnlinePresenceNotifications::OnSignedIn
==============
*/

void __fastcall OnlinePresenceNotifications::OnSignedIn(OnlinePresenceNotifications *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlinePresenceNotifications@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
PresencePushNotifications::presenceSubscriptionUpdateReceived
==============
*/

void __fastcall PresencePushNotifications::presenceSubscriptionUpdateReceived(PresencePushNotifications *this, UserPresenceUpdatedPushMessageCrossTitle *message)
{
  ?presenceSubscriptionUpdateReceived@PresencePushNotifications@@UEAAXAEAVUserPresenceUpdatedPushMessageCrossTitle@@@Z(this, message);
}

/*
==============
OnlinePresenceNotifications::ProcessSubscriptions
==============
*/

void __fastcall OnlinePresenceNotifications::ProcessSubscriptions(OnlinePresenceNotifications *this, const int controllerIndex)
{
  ?ProcessSubscriptions@OnlinePresenceNotifications@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlinePresenceNotifications::SubscribeToUser
==============
*/

void __fastcall OnlinePresenceNotifications::SubscribeToUser(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid, const PresenceSubscriptionType subType)
{
  ?SubscribeToUser@OnlinePresenceNotifications@@QEAAXHUXUID@@W4PresenceSubscriptionType@@@Z(this, controllerIndex, xuid, subType);
}

/*
==============
OnlinePresenceNotifications::ControllerFrame
==============
*/

void __fastcall OnlinePresenceNotifications::ControllerFrame(OnlinePresenceNotifications *this, const int controllerIndex)
{
  ?ControllerFrame@OnlinePresenceNotifications@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlinePresenceNotifications::GetSubscribedUserPresence
==============
*/

RemoteUserPresenceData *__fastcall OnlinePresenceNotifications::GetSubscribedUserPresence(OnlinePresenceNotifications *this, const int controllerIndex, const unsigned __int64 platformId)
{
  return ?GetSubscribedUserPresence@OnlinePresenceNotifications@@QEAAPEAURemoteUserPresenceData@@H_K@Z(this, controllerIndex, platformId);
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineCrossplayFriends
==============
*/

unsigned int __fastcall OnlinePresenceNotifications::GetNumOnlineCrossplayFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  return ?GetNumOnlineCrossplayFriends@OnlinePresenceNotifications@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
PresencePushNotifications::presenceSubscriptionUpdateReceived
==============
*/

void __fastcall PresencePushNotifications::presenceSubscriptionUpdateReceived(PresencePushNotifications *this, UserPresenceUpdatedPushMessage *message)
{
  ?presenceSubscriptionUpdateReceived@PresencePushNotifications@@UEAAXAEAVUserPresenceUpdatedPushMessage@@@Z(this, message);
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineUniqueFriends
==============
*/

unsigned int __fastcall OnlinePresenceNotifications::GetNumOnlineUniqueFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  return ?GetNumOnlineUniqueFriends@OnlinePresenceNotifications@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineClanMembers
==============
*/

unsigned int __fastcall OnlinePresenceNotifications::GetNumOnlineClanMembers(OnlinePresenceNotifications *this, const int controllerIndex)
{
  return ?GetNumOnlineClanMembers@OnlinePresenceNotifications@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
OnlinePresenceNotifications::UnsubscribeFromUser
==============
*/

void __fastcall OnlinePresenceNotifications::UnsubscribeFromUser(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid, const PresenceSubscriptionType subType)
{
  ?UnsubscribeFromUser@OnlinePresenceNotifications@@QEAAXHUXUID@@W4PresenceSubscriptionType@@@Z(this, controllerIndex, xuid, subType);
}

/*
==============
OnlinePresenceNotifications::ProcessUnsubscriptions
==============
*/

void __fastcall OnlinePresenceNotifications::ProcessUnsubscriptions(OnlinePresenceNotifications *this, const int controllerIndex)
{
  ?ProcessUnsubscriptions@OnlinePresenceNotifications@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlinePresenceNotifications::GetNumOnlinePlatformFriends
==============
*/

unsigned int __fastcall OnlinePresenceNotifications::GetNumOnlinePlatformFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  return ?GetNumOnlinePlatformFriends@OnlinePresenceNotifications@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
PresencePushNotifications::PresencePushNotifications
==============
*/

void __fastcall PresencePushNotifications::PresencePushNotifications(PresencePushNotifications *this)
{
  ??0PresencePushNotifications@@QEAA@XZ(this);
}

/*
==============
OnlinePresenceNotifications::ControllerFrame
==============
*/
void OnlinePresenceNotifications::ControllerFrame(OnlinePresenceNotifications *this, const int controllerIndex)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_demonware_presence_notifications_enabled;
  if ( !DVARBOOL_demonware_presence_notifications_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && GetPresencePushNotificationsForController(controllerIndex)->m_initialized )
  {
    OnlinePresenceNotifications::ProcessSubscriptions(this, controllerIndex);
    OnlinePresenceNotifications::ProcessUnsubscriptions(this, controllerIndex);
  }
}

/*
==============
OnlinePresenceNotifications::OnSignedIn
==============
*/
void OnlinePresenceNotifications::OnSignedIn(OnlinePresenceNotifications *this, const int controllerIndex, GenericSignInState signinState)
{
  const dvar_t *v3; 
  PresencePushNotifications *PresencePushNotificationsForController; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 

  v3 = DVARBOOL_demonware_presence_notifications_enabled;
  if ( !DVARBOOL_demonware_presence_notifications_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && signinState == SignedInToDemonWare )
  {
    PresencePushNotificationsForController = GetPresencePushNotificationsForController(controllerIndex);
    if ( !PresencePushNotificationsForController->m_initialized )
    {
      Instance = DWServicesAccess::GetInstance();
      RichPresence = DWServicesAccess::GetRichPresence(Instance, controllerIndex);
      DWRichPresenceService::registerPushMessageHandler(RichPresence, PresencePushNotificationsForController);
      PresencePushNotificationsForController->m_initialized = 1;
      PresencePushNotificationsForController->m_controllerIndex = controllerIndex;
    }
  }
}

/*
==============
OnlinePresenceNotifications::OnSignedOut
==============
*/
void OnlinePresenceNotifications::OnSignedOut(OnlinePresenceNotifications *this, const int controllerIndex, GenericSignOutState signOutState)
{
  const dvar_t *v3; 
  __int64 v5; 
  PresencePushNotifications *PresencePushNotificationsForController; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 
  __int64 v9; 
  __int64 v10; 

  v3 = DVARBOOL_demonware_presence_notifications_enabled;
  v5 = controllerIndex;
  if ( !DVARBOOL_demonware_presence_notifications_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    if ( signOutState != SignedOutFromLocalClient )
    {
      PresencePushNotificationsForController = GetPresencePushNotificationsForController(v5);
      if ( PresencePushNotificationsForController->m_initialized )
      {
        Instance = DWServicesAccess::GetInstance();
        RichPresence = DWServicesAccess::GetRichPresence(Instance, PresencePushNotificationsForController->m_controllerIndex);
        DWRichPresenceService::unregisterPushMessageHandler(RichPresence, PresencePushNotificationsForController);
        PresencePushNotificationsForController->m_initialized = 0;
        PresencePushNotificationsForController->m_controllerIndex = -1;
      }
    }
    if ( (unsigned int)v5 >= 8 )
    {
      LODWORD(v10) = 8;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    memset_0(&s_dwSubscribePresenceStore[v5], 0, sizeof(RemoteUserSubscribePresenceStore));
  }
}

/*
==============
PresencePushNotifications::presenceSubscriptionUpdateReceived
==============
*/
void PresencePushNotifications::presenceSubscriptionUpdateReceived(PresencePushNotifications *this, UserPresenceUpdatedPushMessageCrossTitle *message)
{
  bdUserPresenceV3 *UpdatedUserPresence; 
  bdUserAccountID *User; 
  RemoteUserSubscribedPresenceData *RemoteUserSubscribedPresenceData; 
  const bdUserPresenceV3 *v7; 
  unsigned __int64 m_id; 
  bool Online; 
  bdUserPresenceInfoV3 *v10; 
  XUID xuid; 
  __int64 v12; 
  bdUserPresenceInfoV3 v13; 
  bdUserAccountID result; 
  bdUserPresenceInfoV3 outPresenceInfo; 

  v12 = -2i64;
  UpdatedUserPresence = (bdUserPresenceV3 *)UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence(message);
  User = bdUserPresenceV3::getUser(UpdatedUserPresence, &result);
  XUID::FromUniversalId(&xuid, User->m_userID);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  RemoteUserSubscribedPresenceData = GetRemoteUserSubscribedPresenceData(this->m_controllerIndex, xuid);
  if ( RemoteUserSubscribedPresenceData )
  {
    bdUserPresenceInfoV3::bdUserPresenceInfoV3(&outPresenceInfo);
    v7 = UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence(message);
    Social_GetReleventPresenceInfo(v7, &outPresenceInfo);
    m_id = xuid.m_id;
    Online = bdUserPresenceInfoV3::getOnline(&outPresenceInfo);
    CheckOnlineStatusChange(this->m_controllerIndex, RemoteUserSubscribedPresenceData, Online, (const XUID)m_id);
    bdUserPresenceInfoV3::bdUserPresenceInfoV3(&v13, &outPresenceInfo);
    CopyBdPresenceInfoToRemoteUserPresenceData(v10, &RemoteUserSubscribedPresenceData->presenceData);
    bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&outPresenceInfo);
  }
}

/*
==============
PresencePushNotifications::presenceSubscriptionUpdateReceived
==============
*/
void PresencePushNotifications::presenceSubscriptionUpdateReceived(PresencePushNotifications *this, UserPresenceUpdatedPushMessage *message)
{
  ;
}

/*
==============
PresencePushNotifications::PresencePushNotifications
==============
*/
void PresencePushNotifications::PresencePushNotifications(PresencePushNotifications *this)
{
  this->m_initialized = 0;
  this->__vftable = (PresencePushNotifications_vtbl *)&PresencePushNotifications::`vftable';
  this->m_controllerIndex = -1;
}

/*
==============
AddToPendingList
==============
*/
void AddToPendingList(const int controllerIndex, const XUID xuid, const PresenceSubscriptionType subType, PendingPresenceUserList *pendingList)
{
  int count; 
  int v7; 
  const char *v8; 
  const char *v9; 
  int v10; 
  int v11; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( XUID::IsValid(&xuida) )
  {
    count = pendingList->count;
    v7 = 0;
    if ( count <= 0 )
    {
LABEL_6:
      if ( (unsigned int)count >= 0x79E )
      {
        v11 = 1950;
        v10 = count;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 403, ASSERT_TYPE_ASSERT, "(unsigned)( pendingList->count ) < (unsigned)( ( sizeof( *array_counter( pendingList->users ) ) + 0 ) )", "pendingList->count doesn't index ARRAY_COUNT( pendingList->users )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      XUID::operator=(&pendingList->users[pendingList->count].xuid, &xuida);
      pendingList->users[pendingList->count++].typeMask = subType;
      v8 = XUID::ToString(&xuida);
      Com_Printf(14, "%s: Added player %s to our pending list\n", "AddToPendingList", v8);
    }
    else
    {
      while ( !XUID::operator==(&pendingList->users[v7].xuid, &xuida) )
      {
        count = pendingList->count;
        if ( ++v7 >= count )
          goto LABEL_6;
      }
      pendingList->users[v7].typeMask |= subType;
      v9 = XUID::ToString(&xuida);
      Com_PrintError(14, "%s: Couldn't add player %s to our pending list queue since the player is already in there\n", "AddToPendingList", v9);
    }
  }
  else
  {
    Com_PrintError(14, "%s: Couldn't add player to our pending list, invalid xuid\n", "AddToPendingList");
  }
}

/*
==============
CheckOnlineStatusChange
==============
*/
void CheckOnlineStatusChange(const int controllerIndex, RemoteUserSubscribedPresenceData *remoteUserData, const bool isOnlineNew, const XUID xuid)
{
  __int64 v6; 
  unsigned __int8 typeMask; 
  __int64 v9; 
  int v10; 
  char v11; 
  unsigned __int8 trackOnline; 
  char v13; 
  unsigned __int8 v14; 
  char v15; 
  unsigned __int8 v16; 
  char v17; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  Online_Friends *Instance; 
  int Index; 
  Online_Friends *InstancePtr; 
  char *UserNameByIndex; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  OnlineChatManager *v28; 
  unsigned __int64 v29; 
  unsigned __int8 *p_trackOnline; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 
  char v33; 
  unsigned __int8 v34; 
  char v35; 
  unsigned __int8 v36; 
  XUID friendId; 
  ConversionArguments arguments; 
  char outputString[1024]; 

  v6 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  typeMask = remoteUserData->typeMask;
  v9 = v6;
  v10 = 2 * isOnlineNew - 1;
  v11 = typeMask & 2;
  if ( (typeMask & 2) != 0 )
  {
    trackOnline = remoteUserData->trackOnline;
    v13 = trackOnline & 2;
    if ( isOnlineNew )
    {
      if ( v13 )
        goto LABEL_12;
    }
    else if ( !v13 )
    {
      goto LABEL_12;
    }
    v14 = trackOnline | 2;
    if ( !isOnlineNew )
      v14 = remoteUserData->trackOnline & 0xFD;
    remoteUserData->trackOnline = v14;
    s_dwSubscribePresenceStore[v9].onlinePlatformFriendCount += v10;
  }
LABEL_12:
  v15 = typeMask & 4;
  if ( !v15 )
    goto LABEL_27;
  v16 = remoteUserData->trackOnline;
  v17 = v16 & 4;
  if ( isOnlineNew )
  {
    if ( v17 )
      goto LABEL_27;
  }
  else if ( !v17 )
  {
    goto LABEL_27;
  }
  v18 = remoteUserData->trackOnline;
  friendId.m_id = xuid.m_id;
  v19 = v16 | 4;
  v20 = v18 & 0xFB;
  if ( !isOnlineNew )
    v19 = v20;
  remoteUserData->trackOnline = v19;
  s_dwSubscribePresenceStore[v9].onlineCrossplayFriendCount += v10;
  if ( isOnlineNew )
  {
    Instance = Online_Friends::GetInstance();
    Index = Online_Friends::Crossplay_FindIndex(Instance, v6, friendId);
    if ( Index != -1 )
    {
      InstancePtr = Online_Friends::GetInstancePtr();
      UserNameByIndex = Online_Friends::Crossplay_GetUserNameByIndex(InstancePtr, v6, Index);
      v25 = UserNameByIndex;
      if ( UserNameByIndex )
      {
        if ( *UserNameByIndex )
        {
          arguments.argCount = 1;
          v26 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_STARTED_PLAYING", "ui string", LOCMSG_NOERR);
          v27 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_GAMENAME_MW", "ui string", LOCMSG_NOERR);
          arguments.args[0] = v27;
          if ( v26 )
          {
            if ( v27 )
            {
              UI_ReplaceConversions(v26, &arguments, outputString, 0x400ui64);
              v28 = OnlineChatManager::GetInstance();
              v29 = XUID::ToUint64(&friendId);
              OnlineChatManager::SendPlayerEvent(v28, v6, outputString, v29, v25);
            }
          }
        }
      }
    }
    v10 = 2 * isOnlineNew - 1;
  }
LABEL_27:
  p_trackOnline = &remoteUserData->trackOnline;
  if ( v11 && (v31 = *p_trackOnline, v32 = *p_trackOnline, (*p_trackOnline & 2) != 0) || v15 && (v31 = *p_trackOnline, v32 = *p_trackOnline, (*p_trackOnline & 4) != 0) )
  {
    v33 = 1;
    if ( (v31 & 8) != 0 )
      goto LABEL_37;
  }
  else
  {
    v32 = *p_trackOnline;
    v33 = 0;
    if ( (*p_trackOnline & 8) == 0 )
      goto LABEL_37;
  }
  v34 = v32 | 8;
  if ( !v33 )
    v34 = v32 & 0xF7;
  remoteUserData->trackOnline = v34;
  s_dwSubscribePresenceStore[v9].onlineUniqueFriendCount += v10;
LABEL_37:
  if ( (remoteUserData->typeMask & 0x10) == 0 )
    return;
  v35 = *p_trackOnline & 0x10;
  if ( isOnlineNew )
  {
    if ( v35 )
      return;
  }
  else if ( !v35 )
  {
    return;
  }
  v36 = *p_trackOnline | 0x10;
  if ( !isOnlineNew )
    v36 = *p_trackOnline & 0xEF;
  remoteUserData->trackOnline = v36;
  s_dwSubscribePresenceStore[v9].onlineClanMemberCount += v10;
}

/*
==============
GatherUsers
==============
*/
bool GatherUsers(PendingPresenceUserList *pendingUserList)
{
  const dvar_t *v2; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 *p_m_userID; 
  const dvar_t *v9; 
  bool result; 

  if ( s_currentProcessedUsersCount || pendingUserList->count <= 0 )
    return 0;
  if ( s_numErrors )
  {
    v2 = DVARINT_demonware_presence_notifications_max_fail_count;
    if ( !DVARINT_demonware_presence_notifications_max_fail_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_max_fail_count") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( s_numErrors >= v2->current.integer )
      return 0;
    v3 = Sys_Milliseconds();
    v4 = DVARINT_demonware_presence_notifications_throttle_rate;
    v5 = v3;
    if ( !DVARINT_demonware_presence_notifications_throttle_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_throttle_rate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v5 <= s_lastErrorTime + v4->current.integer * (1 << s_numErrors) )
      return 0;
  }
  v6 = 0;
  v7 = pendingUserList->count - 1;
  if ( v7 >= 0 )
  {
    p_m_userID = &s_currentProcessedUsers[0].m_userID;
    do
    {
      v9 = DVARINT_demonware_presence_notifications_max_fetch_count;
      if ( !DVARINT_demonware_presence_notifications_max_fetch_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_max_fetch_count") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v6 >= v9->current.integer )
        break;
      Core_strcpy(s_currentProcessedUsers[v6]._bytes_20, 0xAui64, "uno");
      *p_m_userID = XUID::ToUint64(&pendingUserList->users[v7].xuid);
      ++v6;
      p_m_userID += 9;
      --v7;
    }
    while ( v7 >= 0 );
  }
  result = 1;
  s_currentProcessedUsersCount = v6;
  return result;
}

/*
==============
OnlinePresenceNotifications::GetInstance
==============
*/
OnlinePresenceNotifications *OnlinePresenceNotifications::GetInstance()
{
  return &OnlinePresenceNotifications::s_instance;
}

/*
==============
OnlinePresenceNotifications::GetInstancePtr
==============
*/
OnlinePresenceNotifications *OnlinePresenceNotifications::GetInstancePtr()
{
  return &OnlinePresenceNotifications::s_instance;
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineClanMembers
==============
*/
__int64 OnlinePresenceNotifications::GetNumOnlineClanMembers(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  return s_dwSubscribePresenceStore[v2].onlineClanMemberCount;
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineCrossplayFriends
==============
*/
__int64 OnlinePresenceNotifications::GetNumOnlineCrossplayFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  return s_dwSubscribePresenceStore[v2].onlineCrossplayFriendCount;
}

/*
==============
OnlinePresenceNotifications::GetNumOnlinePlatformFriends
==============
*/
__int64 OnlinePresenceNotifications::GetNumOnlinePlatformFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  return s_dwSubscribePresenceStore[v2].onlinePlatformFriendCount;
}

/*
==============
OnlinePresenceNotifications::GetNumOnlineUniqueFriends
==============
*/
__int64 OnlinePresenceNotifications::GetNumOnlineUniqueFriends(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  return s_dwSubscribePresenceStore[v2].onlineUniqueFriendCount;
}

/*
==============
GetPresencePushNotificationsForController
==============
*/
PresencePushNotifications *GetPresencePushNotificationsForController(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return &s_presencePushNotifications[v1];
}

/*
==============
GetRemoteUserSubscribedPresenceData
==============
*/
RemoteUserSubscribedPresenceData *GetRemoteUserSubscribedPresenceData(const int controllerIndex, const XUID xuid)
{
  int v2; 
  RemoteUserSubscribePresenceStore *v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v2 = 0;
  v3 = &s_dwSubscribePresenceStore[controllerIndex];
  if ( v3->numSubscribed <= 0 )
    return 0i64;
  while ( !XUID::operator==(&v3->subscribedPresence[(__int64)v2].presenceData.xuid, &xuida) )
  {
    if ( ++v2 >= v3->numSubscribed )
      return 0i64;
  }
  return (RemoteUserSubscribedPresenceData *)((char *)v3 + 64 * (__int64)v2);
}

/*
==============
OnlinePresenceNotifications::GetSubscribedUserPresence
==============
*/
RemoteUserSubscribedPresenceData *OnlinePresenceNotifications::GetSubscribedUserPresence(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid)
{
  return GetRemoteUserSubscribedPresenceData(controllerIndex, xuid);
}

/*
==============
OnlinePresenceNotifications::GetSubscribedUserPresence
==============
*/
RemoteUserPresenceData *OnlinePresenceNotifications::GetSubscribedUserPresence(OnlinePresenceNotifications *this, const int controllerIndex, const unsigned __int64 platformId)
{
  int v3; 
  RemoteUserSubscribePresenceStore *v5; 
  RemoteUserSubscribedPresenceData *v6; 

  v3 = 0;
  v5 = &s_dwSubscribePresenceStore[controllerIndex];
  if ( v5->numSubscribed <= 0 )
    return 0i64;
  while ( 1 )
  {
    v6 = &v5->subscribedPresence[(__int64)v3];
    if ( v6 )
    {
      if ( SocialPresence::GetPlatformId(&v6->presenceData.presence) == platformId )
        break;
    }
    if ( ++v3 >= v5->numSubscribed )
      return 0i64;
  }
  return (RemoteUserPresenceData *)((char *)v5 + 64 * (__int64)v3);
}

/*
==============
OnlinePresenceNotifications::ProcessSubscriptions
==============
*/
void OnlinePresenceNotifications::ProcessSubscriptions(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  bdSubscribeToUsersPresenceResponseV3 *SubscribeToUsersPresenceResponse; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( GatherUsers(&s_dwSubscribePresenceStore[v2].pendingSubs) )
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    SubscribeToUsersPresenceResponse = getSubscribeToUsersPresenceResponse();
    bdSubscribeToUsersPresenceResponseV3::reset(SubscribeToUsersPresenceResponse);
    Instance = DWServicesAccess::GetInstance();
    RichPresence = DWServicesAccess::GetRichPresence(Instance, v2);
    v6 = (TaskCreateRequest *)DWRichPresenceService::subscribeToPlayers(RichPresence, &result, s_currentProcessedUsers, s_currentProcessedUsersCount, SubscribeToUsersPresenceResponse);
    if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = ProcessSubscriptionsComplete;
    pTaskCreateRequest.m_controllerIndex = v2;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v8 = TaskManager::GetInstance(), TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      s_numErrors = 0;
      s_lastErrorTime = 0;
      Com_Printf(14, "%s: Sent task to subscribe to %i users presence\n", "OnlinePresenceNotifications::ProcessSubscriptions", (unsigned int)s_currentProcessedUsersCount);
    }
    else
    {
      ++s_numErrors;
      s_lastErrorTime = Sys_Milliseconds();
      Com_PrintError(14, "%s: Failed to subscribe to %i users presence\n", "OnlinePresenceNotifications::ProcessSubscriptions", (unsigned int)s_currentProcessedUsersCount);
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
}

/*
==============
ProcessSubscriptionsComplete
==============
*/
void ProcessSubscriptionsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_controllerIndex; 
  __int64 v4; 
  RemoteUserSubscribePresenceStore *v5; 
  bdSubscribeToUsersPresenceResponseV3 *SubscribeToUsersPresenceResponse; 
  int v7; 
  int v8; 
  unsigned __int64 *p_m_userID; 
  unsigned __int8 v10; 
  int v11; 
  char *v12; 
  unsigned __int8 *p_typeMask; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  bdUserPresenceV3 *UserPresence; 
  bdUserAccountID *User; 
  unsigned __int64 v19; 
  unsigned __int64 m_userID; 
  const bdUserPresenceV3 *v21; 
  RemoteUserPresenceData *p_presenceData; 
  RemoteUserSubscribedPresenceData *v24; 
  unsigned __int8 v25; 
  int v26; 
  XUID result; 
  unsigned __int64 v28; 
  unsigned __int64 *v29; 
  bdSubscribeToUsersPresenceResponseV3 *v30; 
  GenericTask *v31; 
  __int64 v32; 
  bdUserPresenceInfoV3 *v33; 
  bdUserPresenceInfoV3 v34; 
  bdUserAccountID v35; 
  bdUserPresenceInfoV3 outPresenceInfo; 

  v32 = -2i64;
  v31 = task;
  m_controllerIndex = task->m_controllerIndex;
  if ( (unsigned int)m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, 8) )
    __debugbreak();
  v4 = 187240 * m_controllerIndex;
  v28 = 187240 * m_controllerIndex;
  v5 = &s_dwSubscribePresenceStore[m_controllerIndex];
  if ( state )
  {
    ++s_numErrors;
    s_lastErrorTime = Sys_Milliseconds();
    Com_PrintError(14, "%s: Failed to subscribe to %i users\n", "ProcessSubscriptionsComplete", (unsigned int)s_currentProcessedUsersCount);
  }
  else
  {
    SubscribeToUsersPresenceResponse = getSubscribeToUsersPresenceResponse();
    v30 = SubscribeToUsersPresenceResponse;
    v7 = s_currentProcessedUsersCount;
    if ( (unsigned int)(s_currentProcessedUsersCount + *(_DWORD *)((char *)&s_dwSubscribePresenceStore[0].subscribedPresence[1950].presenceData.xuid.m_id + v4)) > 0x79E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 610, ASSERT_TYPE_ASSERT, "(subPresenceStore->numSubscribed + s_currentProcessedUsersCount <= ( sizeof( *array_counter( subPresenceStore->subscribedPresence ) ) + 0 ))", (const char *)&queryFormat, "subPresenceStore->numSubscribed + s_currentProcessedUsersCount <= ARRAY_COUNT( subPresenceStore->subscribedPresence )") )
        __debugbreak();
      v7 = s_currentProcessedUsersCount;
    }
    v8 = 0;
    v26 = 0;
    if ( v7 > 0 )
    {
      p_m_userID = &s_currentProcessedUsers[0].m_userID;
      v29 = &s_currentProcessedUsers[0].m_userID;
      do
      {
        XUID::FromUniversalId(&result, *p_m_userID);
        v10 = 0;
        v25 = 0;
        v11 = 0;
        if ( *(int *)((char *)&s_dwSubscribePresenceStore[0].pendingSubs.users[1950].xuid.m_id + v4) > 0 )
        {
          v12 = (char *)&s_dwSubscribePresenceStore[0].pendingSubs + v4;
          p_typeMask = &v5->pendingSubs.users[0].typeMask;
          v14 = v28;
          do
          {
            if ( XUID::operator==((XUID *)&v12[16 * v11], &result) )
              v10 = *p_typeMask;
            ++v11;
            p_typeMask += 16;
          }
          while ( v11 < *(_DWORD *)((char *)&s_dwSubscribePresenceStore[0].pendingSubs.users[1950].xuid.m_id + v14) );
          v25 = v10;
          SubscribeToUsersPresenceResponse = v30;
          p_m_userID = v29;
          v8 = v26;
        }
        v15 = 0;
        if ( bdSubscribeToUsersPresenceResponseV3::getNumUsers(SubscribeToUsersPresenceResponse) )
        {
          v16 = v28;
          do
          {
            UserPresence = bdSubscribeToUsersPresenceResponseV3::getUserPresence(SubscribeToUsersPresenceResponse, v15);
            User = bdUserPresenceV3::getUser(UserPresence, &v35);
            v19 = XUID::ToUint64(&result);
            m_userID = User->m_userID;
            bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v35.gap38);
            bdReferencable::~bdReferencable((bdReferencable *)v35.gap38);
            if ( v19 == m_userID )
            {
              bdUserPresenceInfoV3::bdUserPresenceInfoV3(&outPresenceInfo);
              v21 = bdSubscribeToUsersPresenceResponseV3::getUserPresence(SubscribeToUsersPresenceResponse, v15);
              Social_GetReleventPresenceInfo(v21, &outPresenceInfo);
              p_presenceData = &v5->subscribedPresence[(__int64)*(int *)((char *)&s_dwSubscribePresenceStore[0].subscribedPresence[1950].presenceData.xuid.m_id + v16)].presenceData;
              v33 = &v34;
              v34.m_online = outPresenceInfo.m_online;
              v34.m_platform.m_hasValue = outPresenceInfo.m_platform.m_hasValue;
              __asm
              {
                vmovups xmm0, xmmword ptr [rbp+540h+outPresenceInfo.m_platform.m_value.m_buffer]
                vmovups [rbp+540h+var_5BE], xmm0
              }
              v34.m_platform.m_value.m_buffer[16] = outPresenceInfo.m_platform.m_value.m_buffer[16];
              bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&v34.m_titleToken, &outPresenceInfo.m_titleToken);
              bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&v34.m_presenceToken, &outPresenceInfo.m_presenceToken);
              v34.m_titleID.m_hasValue = outPresenceInfo.m_titleID.m_hasValue;
              v34.m_titleID.m_value = outPresenceInfo.m_titleID.m_value;
              v34.m_data.m_hasValue = outPresenceInfo.m_data.m_hasValue;
              bdPresenceData::bdPresenceData(&v34.m_data.m_value, &outPresenceInfo.m_data.m_value);
              v34.m_updateTime.m_hasValue = outPresenceInfo.m_updateTime.m_hasValue;
              v34.m_updateTime.m_value = outPresenceInfo.m_updateTime.m_value;
              CopyBdPresenceInfoToRemoteUserPresenceData(&v34, p_presenceData);
              bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&outPresenceInfo);
            }
            ++v15;
          }
          while ( v15 < bdSubscribeToUsersPresenceResponseV3::getNumUsers(SubscribeToUsersPresenceResponse) );
          v10 = v25;
          p_m_userID = v29;
          v8 = v26;
        }
        v4 = v28;
        s_dwSubscribePresenceStore[v28 / 0x2DB68].subscribedPresence[(__int64)s_dwSubscribePresenceStore[v28 / 0x2DB68].numSubscribed].typeMask = v10;
        XUID::operator=(&v5->subscribedPresence[(__int64)*(int *)((char *)&s_dwSubscribePresenceStore[0].subscribedPresence[1950].presenceData.xuid.m_id + v4)].presenceData.xuid, &result);
        v24 = &v5->subscribedPresence[(__int64)*(int *)((char *)&s_dwSubscribePresenceStore[0].subscribedPresence[1950].presenceData.xuid.m_id + v4)];
        CheckOnlineStatusChange(v31->m_controllerIndex, v24, v24->presenceData.presence.m_crossTitlePresenceData.online, result);
        ++*(_DWORD *)((char *)&s_dwSubscribePresenceStore[0].subscribedPresence[1950].presenceData.xuid.m_id + v4);
        v26 = ++v8;
        p_m_userID += 9;
        v29 = p_m_userID;
        v7 = s_currentProcessedUsersCount;
      }
      while ( v8 < s_currentProcessedUsersCount );
    }
    *(_DWORD *)((char *)&s_dwSubscribePresenceStore[0].pendingSubs.users[1950].xuid.m_id + v4) -= v7;
  }
  s_currentProcessedUsersCount = 0;
}

/*
==============
OnlinePresenceNotifications::ProcessUnsubscriptions
==============
*/
void OnlinePresenceNotifications::ProcessUnsubscriptions(OnlinePresenceNotifications *this, const int controllerIndex)
{
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 
  TaskCreateRequest *v5; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( GatherUsers(&s_dwSubscribePresenceStore[v2].pendingUnsubs) )
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    RichPresence = DWServicesAccess::GetRichPresence(Instance, v2);
    v5 = (TaskCreateRequest *)DWRichPresenceService::unsubscribeToPlayers(RichPresence, &result, s_currentProcessedUsers, s_currentProcessedUsersCount, &s_unsubscribeResponse);
    if ( v5 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v6 = *(bdRemoteTask **)&v5->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
      if ( v6 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = ProcessUnsubscriptionsComplete;
    pTaskCreateRequest.m_controllerIndex = v2;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      s_numErrors = 0;
      s_lastErrorTime = 0;
      Com_Printf(14, "%s: Sent task to unsubscribe to %i users presence\n", "OnlinePresenceNotifications::ProcessUnsubscriptions", (unsigned int)s_currentProcessedUsersCount);
    }
    else
    {
      ++s_numErrors;
      s_lastErrorTime = Sys_Milliseconds();
      Com_PrintError(14, "%s: Failed to unsubscribe to %i users presence\n", "OnlinePresenceNotifications::ProcessUnsubscriptions", (unsigned int)s_currentProcessedUsersCount);
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
}

/*
==============
ProcessUnsubscriptionsComplete
==============
*/
void ProcessUnsubscriptionsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_controllerIndex; 
  RemoteUserSubscribePresenceStore *v4; 
  int v5; 
  unsigned __int64 *p_m_userID; 
  int v7; 
  const XUID *v9; 
  XUID result; 

  m_controllerIndex = task->m_controllerIndex;
  if ( (unsigned int)m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, 8) )
    __debugbreak();
  v4 = &s_dwSubscribePresenceStore[m_controllerIndex];
  if ( state )
  {
    Com_PrintError(14, "%s: Failed to unsubscribe to %i users\n", "ProcessUnsubscriptionsComplete", (unsigned int)s_currentProcessedUsersCount);
  }
  else
  {
    if ( v4->numSubscribed - s_currentProcessedUsersCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 694, ASSERT_TYPE_ASSERT, "(subPresenceStore->numSubscribed - s_currentProcessedUsersCount >= 0)", (const char *)&queryFormat, "subPresenceStore->numSubscribed - s_currentProcessedUsersCount >= 0") )
      __debugbreak();
    v5 = 0;
    if ( s_currentProcessedUsersCount > 0 )
    {
      p_m_userID = &s_currentProcessedUsers[0].m_userID;
      do
      {
        v7 = 0;
        if ( v4->numSubscribed > 0 )
        {
          _RDI = v4;
          while ( 1 )
          {
            v9 = XUID::FromUniversalId(&result, *p_m_userID);
            if ( XUID::operator==(&v4->subscribedPresence[(__int64)v7].presenceData.xuid, v9) )
              break;
            ++v7;
            _RDI = (RemoteUserSubscribePresenceStore *)((char *)_RDI + 64);
            if ( v7 >= v4->numSubscribed )
              goto LABEL_16;
          }
          _RBX = (__int64)&v4->subscribedPresence[(__int64)v4->numSubscribed - 1];
          XUID::operator=((XUID *)_RDI, (const XUID *)_RBX);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+8]
            vmovups ymmword ptr [rdi+8], ymm0
            vmovups xmm1, xmmword ptr [rbx+28h]
            vmovups xmmword ptr [rdi+28h], xmm1
          }
          _RDI->subscribedPresence[0].typeMask = *(_BYTE *)(_RBX + 56);
          _RDI->subscribedPresence[0].trackOnline = *(_BYTE *)(_RBX + 57);
          --v4->numSubscribed;
        }
LABEL_16:
        ++v5;
        p_m_userID += 9;
      }
      while ( v5 < s_currentProcessedUsersCount );
    }
    v4->pendingUnsubs.count -= s_currentProcessedUsersCount;
  }
  s_currentProcessedUsersCount = 0;
}

/*
==============
OnlinePresenceNotifications::SubscribeToUser
==============
*/
void OnlinePresenceNotifications::SubscribeToUser(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid, const PresenceSubscriptionType subType)
{
  __int64 v4; 
  const char *v6; 
  RemoteUserSubscribedPresenceData *RemoteUserSubscribedPresenceData; 
  int v9; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v4 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  if ( s_dwSubscribePresenceStore[v4].numSubscribed < 0x79Eu )
  {
    RemoteUserSubscribedPresenceData = GetRemoteUserSubscribedPresenceData(v4, xuida);
    if ( RemoteUserSubscribedPresenceData )
    {
      RemoteUserSubscribedPresenceData->typeMask |= subType;
      CheckOnlineStatusChange(v4, RemoteUserSubscribedPresenceData, RemoteUserSubscribedPresenceData->presenceData.presence.m_crossTitlePresenceData.online, xuida);
    }
    else
    {
      AddToPendingList(v4, xuida, subType, &s_dwSubscribePresenceStore[v4].pendingSubs);
    }
  }
  else
  {
    v6 = XUID::ToString(&xuida);
    Com_PrintError(14, "%s: Couldn't add player %s to our subscription list since it's full\n", "OnlinePresenceNotifications::SubscribeToUser", v6);
  }
}

/*
==============
OnlinePresenceNotifications::UnsubscribeFromUser
==============
*/
void OnlinePresenceNotifications::UnsubscribeFromUser(OnlinePresenceNotifications *this, const int controllerIndex, const XUID xuid, const PresenceSubscriptionType subType)
{
  __int64 v4; 
  __int64 v6; 
  const char *v7; 
  RemoteUserSubscribedPresenceData *RemoteUserSubscribedPresenceData; 
  unsigned __int8 typeMask; 
  char v10; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v4 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_presence_notifications.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v6 = v4;
  if ( s_dwSubscribePresenceStore[v4].numSubscribed > 0 )
  {
    RemoteUserSubscribedPresenceData = GetRemoteUserSubscribedPresenceData(v4, xuida);
    if ( RemoteUserSubscribedPresenceData )
    {
      if ( RemoteUserSubscribedPresenceData->presenceData.presence.m_crossTitlePresenceData.online )
      {
        typeMask = RemoteUserSubscribedPresenceData->typeMask;
        if ( (typeMask & 2) != 0 && subType == PlatformFriend )
        {
          --s_dwSubscribePresenceStore[v6].onlinePlatformFriendCount;
          typeMask = RemoteUserSubscribedPresenceData->typeMask;
        }
        if ( (typeMask & 4) != 0 && subType == CrossplayFriend )
        {
          --s_dwSubscribePresenceStore[v6].onlineCrossplayFriendCount;
          typeMask = RemoteUserSubscribedPresenceData->typeMask;
        }
        if ( (typeMask & (unsigned __int8)subType) != 0 && RemoteUserSubscribedPresenceData->trackOnline == ((unsigned __int8)subType | 8) )
        {
          --s_dwSubscribePresenceStore[v6].onlineUniqueFriendCount;
          RemoteUserSubscribedPresenceData->typeMask &= ~8u;
          typeMask = RemoteUserSubscribedPresenceData->typeMask;
        }
        if ( (typeMask & 0x10) != 0 && subType == ClanMember )
          --s_dwSubscribePresenceStore[v6].onlineClanMemberCount;
      }
      v10 = ~subType;
      RemoteUserSubscribedPresenceData->typeMask &= v10;
      RemoteUserSubscribedPresenceData->trackOnline &= v10;
    }
    else
    {
      AddToPendingList(v4, xuida, subType, &s_dwSubscribePresenceStore[v6].pendingUnsubs);
    }
  }
  else
  {
    v7 = XUID::ToString(&xuida);
    Com_PrintError(14, "%s: Couldn't remove player %s to our subscription list since it's already empty\n", "OnlinePresenceNotifications::UnsubscribeFromUser", v7);
  }
}

/*
==============
getSubscribeToUsersPresenceResponse
==============
*/
bdSubscribeToUsersPresenceResponseV3 *getSubscribeToUsersPresenceResponse()
{
  if ( dword_14B6A3944 <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &s_subscribeResponse;
  j__Init_thread_header(&dword_14B6A3944);
  if ( dword_14B6A3944 != -1 )
    return &s_subscribeResponse;
  bdSubscribeToUsersPresenceResponseV3::bdSubscribeToUsersPresenceResponseV3(&s_subscribeResponse);
  j_atexit(getSubscribeToUsersPresenceResponse_::_2_::_dynamic_atexit_destructor_for__s_subscribeResponse__);
  j__Init_thread_footer(&dword_14B6A3944);
  return &s_subscribeResponse;
}

