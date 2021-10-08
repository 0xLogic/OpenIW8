/*
==============
Social_SetWatchingTheatrePresence
==============
*/

void __fastcall Social_SetWatchingTheatrePresence(const int controllerIndex)
{
  ?Social_SetWatchingTheatrePresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_SetLobbyPresence
==============
*/

void __fastcall Social_SetLobbyPresence(const int controllerIndex)
{
  ?Social_SetLobbyPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_SetNotPlayingPresence
==============
*/

void __fastcall Social_SetNotPlayingPresence(const int controllerIndex)
{
  ?Social_SetNotPlayingPresence@@YAXH@Z(controllerIndex);
}

/*
==============
SetClanTag
==============
*/

bool __fastcall SetClanTag(const int controllerIndex, const char *value)
{
  return ?SetClanTag@@YA_NHPEBD@Z(controllerIndex, value);
}

/*
==============
Social_IsUserOnSamePlatform
==============
*/

bool __fastcall Social_IsUserOnSamePlatform(const int controllerIndex, const XUID xuid)
{
  return ?Social_IsUserOnSamePlatform@@YA_NHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
Social_IsUserJoinable
==============
*/

bool __fastcall Social_IsUserJoinable(const int controllerIndex, const XUID xuid, const bool isFriend, const char **errorString, const char **devErrorString)
{
  return ?Social_IsUserJoinable@@YA_NHUXUID@@_NPEAPEBD2@Z(controllerIndex, xuid, isFriend, errorString, devErrorString);
}

/*
==============
Social_GetXUIDFromPlatformID
==============
*/

bool __fastcall Social_GetXUIDFromPlatformID(const int controllerIndex, const unsigned __int64 userId, XUID *xuidOut)
{
  return ?Social_GetXUIDFromPlatformID@@YA_NH_KAEAUXUID@@@Z(controllerIndex, userId, xuidOut);
}

/*
==============
SocialPresence::GetPlatformId
==============
*/

unsigned __int64 __fastcall SocialPresence::GetPlatformId(SocialPresence *this)
{
  return ?GetPlatformId@SocialPresence@@QEBA_KXZ(this);
}

/*
==============
Social_SetWatchingCreditsPresence
==============
*/

void __fastcall Social_SetWatchingCreditsPresence(const int controllerIndex)
{
  ?Social_SetWatchingCreditsPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_GetPresenceString
==============
*/

const char *__fastcall Social_GetPresenceString(const int controllerIndex, const XUID userId, bdUserAccountID *ucdId)
{
  return ?Social_GetPresenceString@@YAPEBDHUXUID@@PEAVbdUserAccountID@@@Z(controllerIndex, userId, ucdId);
}

/*
==============
Social_SetPresenceContextForAllActiveClients
==============
*/

void __fastcall Social_SetPresenceContextForAllActiveClients(const int presenceContext)
{
  ?Social_SetPresenceContextForAllActiveClients@@YAXH@Z(presenceContext);
}

/*
==============
Social_SetMapPresence
==============
*/

void __fastcall Social_SetMapPresence(const int controllerIndex, const int context, const int mapIndex)
{
  ?Social_SetMapPresence@@YAXHHH@Z(controllerIndex, context, mapIndex);
}

/*
==============
SocialPresence::SetClanTag
==============
*/

void __fastcall SocialPresence::SetClanTag(SocialPresence *this, const char *clanTag)
{
  ?SetClanTag@SocialPresence@@QEAAXPEBD@Z(this, clanTag);
}

/*
==============
Social_havePlatformPermissionsToBeInvited
==============
*/

bool __fastcall Social_havePlatformPermissionsToBeInvited(const SocialPresence *presence)
{
  return ?Social_havePlatformPermissionsToBeInvited@@YA_NPEBVSocialPresence@@@Z(presence);
}

/*
==============
Social_SetMainMenuPresence
==============
*/

void __fastcall Social_SetMainMenuPresence(const int controllerIndex)
{
  ?Social_SetMainMenuPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_GetReleventPresenceInfo
==============
*/

void __fastcall Social_GetReleventPresenceInfo(const bdUserPresenceV3 *userPresence, bdUserPresenceInfoV3 *outPresenceInfo)
{
  ?Social_GetReleventPresenceInfo@@YAXAEBVbdUserPresenceV3@@AEAVbdUserPresenceInfoV3@@@Z(userPresence, outPresenceInfo);
}

/*
==============
Social_GetPresencePlatform
==============
*/

PresencePlatform __fastcall Social_GetPresencePlatform()
{
  return ?Social_GetPresencePlatform@@YA?AW4PresencePlatform@@XZ();
}

/*
==============
Social_IsPresenceJoinable
==============
*/

bool __fastcall Social_IsPresenceJoinable(const int controllerIndex, const SocialPresence *presence, const bool isFriend, const char **errorString, const char **devErrorString)
{
  return ?Social_IsPresenceJoinable@@YA_NHPEBVSocialPresence@@_NPEAPEBD2@Z(controllerIndex, presence, isFriend, errorString, devErrorString);
}

/*
==============
Social_SetNotUsingSecondScreenPresence
==============
*/

void __fastcall Social_SetNotUsingSecondScreenPresence(const int controllerIndex)
{
  ?Social_SetNotUsingSecondScreenPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_IsRemotePlayerOnline
==============
*/

bool __fastcall Social_IsRemotePlayerOnline(const int controllerIndex, const XUID userId)
{
  return ?Social_IsRemotePlayerOnline@@YA_NHUXUID@@@Z(controllerIndex, userId);
}

/*
==============
Social_GetPlatformId
==============
*/

bool __fastcall Social_GetPlatformId(const int controllerIndex, const XUID dwXuid, unsigned __int64 *platformIdOut)
{
  return ?Social_GetPlatformId@@YA_NHUXUID@@AEA_K@Z(controllerIndex, dwXuid, platformIdOut);
}

/*
==============
SocialPresence::SetPlatform
==============
*/

void __fastcall SocialPresence::SetPlatform(SocialPresence *this, const PresencePlatform platform)
{
  ?SetPlatform@SocialPresence@@QEAAXW4PresencePlatform@@@Z(this, platform);
}

/*
==============
Social_InitPresence
==============
*/

void Social_InitPresence(void)
{
  ?Social_InitPresence@@YAXXZ();
}

/*
==============
SocialPresence::SetPlatformId
==============
*/

void __fastcall SocialPresence::SetPlatformId(SocialPresence *this, const unsigned __int64 platformId)
{
  ?SetPlatformId@SocialPresence@@QEAAX_K@Z(this, platformId);
}

/*
==============
Social_IsUsingSecondScreen
==============
*/

bool __fastcall Social_IsUsingSecondScreen(const int controllerIndex)
{
  return ?Social_IsUsingSecondScreen@@YA_NH@Z(controllerIndex);
}

/*
==============
Social_HavePlatformPermissionsToCrossplay
==============
*/

bool __fastcall Social_HavePlatformPermissionsToCrossplay(const SocialPresence *presence)
{
  return ?Social_HavePlatformPermissionsToCrossplay@@YA_NPEBVSocialPresence@@@Z(presence);
}

/*
==============
Social_FormatPresenceStatus
==============
*/

void __fastcall Social_FormatPresenceStatus(const int context, int mapIndex, int gameType, const PresencePlatform platform, char *outputString, const unsigned __int64 outputSize)
{
  ?Social_FormatPresenceStatus@@YAXHHHW4PresencePlatform@@PEAD_K@Z(context, mapIndex, gameType, platform, outputString, outputSize);
}

/*
==============
Social_UpdatePresence
==============
*/

void __fastcall Social_UpdatePresence(const int controllerIndex)
{
  ?Social_UpdatePresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_SetPartyPresence
==============
*/

void __fastcall Social_SetPartyPresence(const int controllerIndex)
{
  ?Social_SetPartyPresence@@YAXH@Z(controllerIndex);
}

/*
==============
Social_FormatSocialPresence
==============
*/

void __fastcall Social_FormatSocialPresence(const SocialPresence *presence, const PresencePlatform platform, char *outputString, const unsigned __int64 outputSize)
{
  ?Social_FormatSocialPresence@@YAXPEBVSocialPresence@@W4PresencePlatform@@PEAD_K@Z(presence, platform, outputString, outputSize);
}

/*
==============
Social_HavePlatformPermissionsToChat
==============
*/

bool __fastcall Social_HavePlatformPermissionsToChat(const SocialPresence *presence)
{
  return ?Social_HavePlatformPermissionsToChat@@YA_NPEBVSocialPresence@@@Z(presence);
}

/*
==============
Social_SetUsingSecondScreenPresence
==============
*/

void __fastcall Social_SetUsingSecondScreenPresence(const int controllerIndex, const bool usingSecondScreen)
{
  ?Social_SetUsingSecondScreenPresence@@YAXH_N@Z(controllerIndex, usingSecondScreen);
}

/*
==============
Social_IsUserInvitable
==============
*/

bool __fastcall Social_IsUserInvitable(const int controllerIndex, const XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?Social_IsUserInvitable@@YA_NHUXUID@@PEAPEBD1@Z(controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Social_GetPresence
==============
*/

const SocialPresence *__fastcall Social_GetPresence(const int controllerIndex, const XUID userId)
{
  return ?Social_GetPresence@@YAPEBVSocialPresence@@HUXUID@@@Z(controllerIndex, userId);
}

/*
==============
CopyBdPresenceInfoToRemoteUserPresenceData
==============
*/

void __fastcall CopyBdPresenceInfoToRemoteUserPresenceData(bdUserPresenceInfoV3 *presenceInfo, RemoteUserPresenceData *remoteUserPresence)
{
  ?CopyBdPresenceInfoToRemoteUserPresenceData@@YAXVbdUserPresenceInfoV3@@PEAURemoteUserPresenceData@@@Z(presenceInfo, remoteUserPresence);
}

/*
==============
Social_HavePlatformPermissionsToShareUGC
==============
*/

bool __fastcall Social_HavePlatformPermissionsToShareUGC(const SocialPresence *presence)
{
  return ?Social_HavePlatformPermissionsToShareUGC@@YA_NPEBVSocialPresence@@@Z(presence);
}

/*
==============
Social_SetGameTypePresence
==============
*/

void __fastcall Social_SetGameTypePresence(const int controllerIndex, const int gameType)
{
  ?Social_SetGameTypePresence@@YAXHH@Z(controllerIndex, gameType);
}

/*
==============
SocialPresence::GetPlatform
==============
*/

PresencePlatform __fastcall SocialPresence::GetPlatform(SocialPresence *this)
{
  return ?GetPlatform@SocialPresence@@QEBA?AW4PresencePlatform@@XZ(this);
}

/*
==============
SetClanTag
==============
*/
bool SetClanTag(const int controllerIndex, const char *value)
{
  return PlayerDataSetStringByName(controllerIndex, (const scr_string_t)scr_const.clanTag, STATSGROUP_COMMON, value);
}

/*
==============
BatchFetchPresence
==============
*/
void BatchFetchPresence(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  RemoteUserFetchPresenceStore *v3; 
  int nextPresenceCount; 
  bdUserAccountID *v5; 
  char *bytes_20; 
  __int64 v7; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 
  TaskCreateRequest *Info; 
  bdRemoteTask *v11; 
  TaskManager *v12; 
  unsigned __int64 *p_m_userID; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v19; 
  bdUserAccountID other; 
  bdUserAccountID ptr[100]; 

  v19 = -2i64;
  v1 = controllerIndex;
  `eh vector vbase constructor iterator'(ptr, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  LODWORD(v2) = 0;
  if ( (unsigned int)v1 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v1, 8) )
    __debugbreak();
  v3 = &s_dwFetchPresenceStore[v1];
  if ( v3->nextPresenceCount >= v3->numXuidsToFetch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1289, ASSERT_TYPE_ASSERT, "(store->nextPresenceCount < store->numXuidsToFetch)", (const char *)&queryFormat, "store->nextPresenceCount < store->numXuidsToFetch") )
    __debugbreak();
  nextPresenceCount = v3->nextPresenceCount;
  if ( nextPresenceCount >= v3->numXuidsToFetch )
    goto LABEL_45;
  do
  {
    if ( (_DWORD)v2 == 100 )
      break;
    userID = XUID::GetUniversalId(&v3->xuidsToFetch[nextPresenceCount]);
    bdUserAccountID::bdUserAccountID(&other, &userID);
    v5 = &ptr[(int)v2];
    LODWORD(v2) = v2 + 1;
    bdUserAccountID::operator=(v5, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    ++nextPresenceCount;
  }
  while ( nextPresenceCount < v3->numXuidsToFetch );
  if ( (int)v2 > 0 )
  {
    bytes_20 = ptr[0]._bytes_20;
    v7 = (unsigned int)v2;
    do
    {
      Core_strcpy(bytes_20, 0xAui64, "uno");
      bytes_20 += 72;
      --v7;
    }
    while ( v7 );
  }
  else
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1301, ASSERT_TYPE_ASSERT, "(numUsers > 0)", (const char *)&queryFormat, "numUsers > 0") )
      __debugbreak();
  }
  if ( dword_15607620C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_15607620C);
    if ( dword_15607620C == -1 )
    {
      bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3(&s_getTaskResponse);
      j_atexit(GetGetUserTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_getTaskResponse__);
      j__Init_thread_footer(&dword_15607620C);
    }
  }
  bdGetUsersPresenceResponseV3::reset(&s_getTaskResponse);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  RichPresence = DWServicesAccess::GetRichPresence(Instance, v1);
  Info = (TaskCreateRequest *)DWRichPresenceService::getInfo(RichPresence, &result, ptr, v2, &s_getTaskResponse);
  if ( Info != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v11 = *(bdRemoteTask **)&Info->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_onCompletionCallback = GetPresenceComplete;
  pTaskCreateRequest.m_controllerIndex = v1;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v12 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v12, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "Demonware presence requesting presence for controller %d with users:\n", (unsigned int)v1);
      v2 = (int)v2;
      if ( (int)v2 > 0 )
      {
        p_m_userID = &ptr[0].m_userID;
        do
        {
          Com_Printf(25, "%zu, ", *p_m_userID);
          p_m_userID += 9;
          --v2;
        }
        while ( v2 );
      }
      Com_Printf(25, "\n");
      v3->fetchedTime = Sys_Milliseconds();
      s_getTaskId = pTaskCreateResult.m_localTaskId;
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
  `eh vector destructor iterator'(ptr, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
}

/*
==============
BuildCurrentSocialPresence
==============
*/
void BuildCurrentSocialPresence(const int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  LocalUserPresenceData *v3; 
  PartyData *SharableParty; 
  const PartyData *v5; 
  int IsGameFull; 
  bool v7; 
  PartyData *ActiveParty; 
  const char *ClanTag; 
  LocalClientNum_t ClientFromController; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v2 = 0;
  v3 = &s_presenceData[v1];
  SharableParty = Live_GetSharableParty();
  v5 = SharableParty;
  if ( SharableParty && Session_IsValid(SharableParty->session) && CL_Mgr_IsControllerActive(v1) )
  {
    IsGameFull = Party_IsGameFull(v5);
    v7 = Live_IsInGameBattlesGame();
    if ( Live_IsInSystemlinkLobby() || v7 || (ActiveParty = Party_GetActiveParty(), Live_ShouldPlatformSessionBeInviteOnly(ActiveParty)) )
      IsGameFull |= 2u;
    if ( Party_ShouldCurrentSessionBeClosed(v5) )
    {
      IsGameFull |= 0x20u;
    }
    else if ( Party_GetPrivacySetting(v5) == 2 )
    {
      IsGameFull |= 2u;
    }
    else if ( Party_GetPrivacySetting(v5) == PRIVATE )
    {
      IsGameFull |= 0x200u;
    }
    if ( Party_IsSearchingForPlaylistsThatDisabledInviteJoins() )
      IsGameFull |= 0x40u;
    if ( Party_GetPartyRestrictsF2PUsersFlag(v5) )
      IsGameFull |= 0x80u;
    if ( !LiveStorage_IsPaidUser(v1) )
      IsGameFull |= 0x100u;
    if ( !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v1) )
      v2 = 2;
    if ( !Live_GetDoesUserHaveUGCPrivilege(v1) )
      v2 |= 4u;
    if ( !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(v1) )
      v2 |= 8u;
    if ( !Live_HasCrossPlayPermissions(v1) )
      v2 |= 0x10u;
  }
  else
  {
    IsGameFull = 4;
  }
  v3->current.m_sessionFlags = IsGameFull;
  v3->current.m_flags = truncate_cast<signed char,unsigned int>(v2);
  v3->current.m_crossTitlePresenceData.platformId = Live_GetPlatformUserId(v1);
  ClanTag = CL_PlayerData_GetClanTag(v1);
  if ( !ClanTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 940, ASSERT_TYPE_ASSERT, "(clanTag)", (const char *)&queryFormat, "clanTag") )
    __debugbreak();
  Core_strcpy(v3->current.m_clanTag, 0xCui64, ClanTag);
  ClientFromController = CL_Mgr_GetClientFromController(v1);
  v11 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(v12) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v3->current.m_inputType = clientUIActives[v11].lastInputType;
}

/*
==============
CopyBdPresenceInfoToRemoteUserPresenceData
==============
*/
void CopyBdPresenceInfoToRemoteUserPresenceData(bdUserPresenceInfoV3 *presenceInfo, RemoteUserPresenceData *remoteUserPresence)
{
  bool v4; 
  DWServicesAccess *Instance; 
  int TitleID; 
  const char *v7; 
  bdPresenceData result; 
  bdUserPresenceInfoV3 *v9; 

  v9 = presenceInfo;
  if ( bdUserPresenceInfoV3::getOnline(presenceInfo) )
  {
    v4 = LiveCrossTitlePresence_Read(&remoteUserPresence->presence.m_crossTitlePresenceData, presenceInfo);
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    if ( v4 && remoteUserPresence->presence.m_crossTitlePresenceData.titleId == TitleID )
    {
      bdUserPresenceInfoV3::getData(presenceInfo, &result);
      if ( !ReadPresenceData(&result, &remoteUserPresence->presence) )
      {
        v7 = XUID::ToDevString(&remoteUserPresence->xuid);
        Com_PrintError(25, "Invalid presence read in for user %s\n", v7);
      }
      bdPresenceData::~bdPresenceData(&result);
    }
  }
  else
  {
    remoteUserPresence->presence.m_crossTitlePresenceData.platformId = 0i64;
    *(_QWORD *)&remoteUserPresence->presence.m_crossTitlePresenceData.version = 0i64;
    *(_QWORD *)&remoteUserPresence->presence.m_crossTitlePresenceData.platform = 0i64;
    *(_QWORD *)&remoteUserPresence->presence.m_sessionFlags = 0i64;
    *(_QWORD *)&remoteUserPresence->presence.m_clanTag[4] = 0i64;
    *(_QWORD *)&remoteUserPresence->presence.m_version = 0i64;
  }
  bdUserPresenceInfoV3::~bdUserPresenceInfoV3(presenceInfo);
}

/*
==============
CreatePresenceInfo
==============
*/
char CreatePresenceInfo(const int controllerIndex, bdUserPresenceInfoV3 *info)
{
  __int64 v3; 
  LocalUserPresenceData *v4; 
  DWServicesAccess *Instance; 
  int v7; 
  char v8; 
  bdPresenceData result; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v4 = &s_presenceData[v3];
  v4->current.m_crossTitlePresenceData.online = 1;
  v4->current.m_crossTitlePresenceData.platformId = Live_GetPlatformUserId(v3);
  v4->current.m_crossTitlePresenceData.platform = bdStrToPlatformType(s_presencePlatformMapping[1].m_platformString);
  Instance = DWServicesAccess::GetInstance();
  v4->current.m_crossTitlePresenceData.titleId = DWServicesAccess::GetTitleID(Instance);
  if ( LiveCrossTitlePresence_Write(&v4->current.m_crossTitlePresenceData, info) )
  {
    v7 = Sys_Milliseconds();
    bdUserPresenceInfoV3::setUpdateTime(info, v7);
    bdUserPresenceInfoV3::getData(info, &result);
    if ( bdCrossPlatformUserMetadata::writeUInt32(&result, "version", v4->current.m_version) && bdCrossPlatformUserMetadata::writeUInt32(&result, "context", v4->current.m_context) && bdCrossPlatformUserMetadata::writeUInt32(&result, "gametype", v4->current.m_gametype) && bdCrossPlatformUserMetadata::writeUInt32(&result, "mapindex", v4->current.m_mapIndex) && bdCrossPlatformUserMetadata::writeUInt32(&result, "sessionFlags", v4->current.m_sessionFlags) && bdCrossPlatformUserMetadata::writeUInt32(&result, "flags", v4->current.m_flags) && bdCrossPlatformUserMetadata::writeUInt32(&result, "inputType", v4->current.m_inputType) && bdCrossPlatformUserMetadata::writeString(&result, "clanTag", v4->current.m_clanTag) )
    {
      bdUserPresenceInfoV3::setData(info, &result);
      v8 = 1;
    }
    else
    {
      Com_PrintError(25, "%s: [%i] Error writing presence data\n", "CreatePresenceInfo", (unsigned int)v3);
      v8 = 0;
    }
    bdPresenceData::~bdPresenceData(&result);
    return v8;
  }
  else
  {
    Com_PrintError(25, "%s: [%i] Error writing cross title presence data\n", "CreatePresenceInfo", (unsigned int)v3);
    return 0;
  }
}

/*
==============
GatherPresenceUsers
==============
*/
bool GatherPresenceUsers(const int controllerIndex)
{
  __int64 v1; 
  signed int v2; 
  RemoteUserFetchPresenceStore *v3; 
  OnlineUserLists *Instance; 
  UserList *v5; 
  unsigned int i; 
  __int64 v7; 
  const dvar_t *v8; 
  Online_Friends *v9; 
  FriendListGlobal *Friends; 
  unsigned int j; 
  __int64 v12; 
  Online_Friends *InstancePtr; 
  signed int v14; 
  __int64 v15; 
  __int64 v16; 
  OnlineClansManager *v17; 
  OnlineClansManager *v18; 
  OnlineClan *ClanById; 
  unsigned int k; 
  __int64 v21; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int64 clanIdOut; 
  OnlineClanMember *members; 
  XUID v27; 
  unsigned int numFriendsOut; 
  UserList::User *userOut; 
  UserList *userListOut; 
  XUID xuid; 

  v1 = controllerIndex;
  v2 = 0;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v3 = &s_dwFetchPresenceStore[v1];
  memset_0(v3, 0, 0x4330ui64);
  v3->numXuidsToFetch = 0;
  v3->nextPresenceCount = 0;
  v3->fetched = 0;
  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserList(Instance, v1, MOVEMENT, (const UserList **)&userListOut) )
  {
    v5 = userListOut;
    for ( i = 0; i < userListOut->m_numUsers; ++i )
    {
      userOut = NULL;
      if ( UserList::GetUserByIndex(v5, i, (const UserList::User **)&userOut) )
      {
        v7 = v2++;
        xuid.m_id = userOut->xuid.m_id;
        XUID::operator=(&v3->xuidsToFetch[v7], &xuid);
        if ( (unsigned int)v2 > 0x866 )
        {
          LODWORD(v24) = 2150;
          LODWORD(v23) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1093, ASSERT_TYPE_ASSERT, "( 0 ) <= ( userCount ) && ( userCount ) <= ( 200 + 250 + 1200 + ( 500 ) )", "userCount not in [0, MAX_FETCH_DW_PRESENCE_USERS]\n\t%i not in [%i, %i]", v23, 0i64, v24) )
            __debugbreak();
        }
      }
      v5 = userListOut;
    }
  }
  v8 = DVARBOOL_demonware_presence_notifications_enabled;
  if ( !DVARBOOL_demonware_presence_notifications_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demonware_presence_notifications_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    v9 = Online_Friends::GetInstance();
    Friends = Online_Friends::GetFriends(v9, v1);
    for ( j = 0; j < Friends->count; ++j )
    {
      userOut = (UserList::User *)Friends->friends[j].m_id;
      if ( XUID::IsValid((XUID *)&userOut) )
      {
        v12 = v2++;
        XUID::operator=(&v3->xuidsToFetch[v12], (const XUID *)&userOut);
        if ( (unsigned int)v2 > 0x866 )
        {
          LODWORD(v24) = 2150;
          LODWORD(v23) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1119, ASSERT_TYPE_ASSERT, "( 0 ) <= ( userCount ) && ( userCount ) <= ( 200 + 250 + 1200 + ( 500 ) )", "userCount not in [0, MAX_FETCH_DW_PRESENCE_USERS]\n\t%i not in [%i, %i]", v23, 0i64, v24) )
            __debugbreak();
        }
      }
    }
    xuid.m_id = 0i64;
    numFriendsOut = 0;
    InstancePtr = Online_Friends::GetInstancePtr();
    if ( Online_Friends::Crossplay_GetFriends(InstancePtr, v1, (DWFriend **)&xuid, &numFriendsOut) )
    {
      v14 = 0;
      if ( (int)numFriendsOut > 0 )
      {
        v15 = 0i64;
        do
        {
          v16 = v2++;
          userOut = *(UserList::User **)(v15 + xuid.m_id);
          XUID::operator=(&v3->xuidsToFetch[v16], (const XUID *)&userOut);
          if ( (unsigned int)v2 > 0x866 )
          {
            LODWORD(v24) = 2150;
            LODWORD(v23) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1138, ASSERT_TYPE_ASSERT, "( 0 ) <= ( userCount ) && ( userCount ) <= ( 200 + 250 + 1200 + ( 500 ) )", "userCount not in [0, MAX_FETCH_DW_PRESENCE_USERS]\n\t%i not in [%i, %i]", v23, 0i64, v24) )
              __debugbreak();
          }
          ++v14;
          v15 += 144i64;
        }
        while ( v14 < (int)numFriendsOut );
      }
    }
    clanIdOut = 0i64;
    v17 = OnlineClansManager::GetInstance();
    if ( OnlineClansManager::GetActiveClan(v17, v1, &clanIdOut) )
    {
      v18 = OnlineClansManager::GetInstance();
      ClanById = OnlineClansManager::GetClanById(v18, v1, clanIdOut);
      members = NULL;
      LODWORD(userOut) = 0;
      if ( OnlineClan::GetMembers(ClanById, (const OnlineClanMember **)&members, (unsigned int *)&userOut) )
      {
        for ( k = 0; k < (unsigned int)userOut; ++k )
        {
          v27.m_id = members[k].xuid.m_id;
          if ( !Live_XUIDIsLocalPlayer(v27) )
          {
            v21 = v2++;
            XUID::operator=(&v3->xuidsToFetch[v21], &v27);
            if ( (unsigned int)v2 > 0x866 )
            {
              LODWORD(v24) = 2150;
              LODWORD(v23) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1176, ASSERT_TYPE_ASSERT, "( 0 ) <= ( userCount ) && ( userCount ) <= ( 200 + 250 + 1200 + ( 500 ) )", "userCount not in [0, MAX_FETCH_DW_PRESENCE_USERS]\n\t%i not in [%i, %i]", v23, 0i64, v24) )
                __debugbreak();
            }
          }
        }
      }
    }
  }
  v3->numXuidsToFetch = v2;
  return v2 > 0;
}

/*
==============
GetFetchPresenceStore
==============
*/
RemoteUserFetchPresenceStore *GetFetchPresenceStore(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return &s_dwFetchPresenceStore[v1];
}

/*
==============
GetGetUserTaskResponse
==============
*/
bdGetUsersPresenceResponseV3 *GetGetUserTaskResponse()
{
  if ( dword_15607620C <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    return &s_getTaskResponse;
  j__Init_thread_header(&dword_15607620C);
  if ( dword_15607620C != -1 )
    return &s_getTaskResponse;
  bdGetUsersPresenceResponseV3::bdGetUsersPresenceResponseV3(&s_getTaskResponse);
  j_atexit(GetGetUserTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_getTaskResponse__);
  j__Init_thread_footer(&dword_15607620C);
  return &s_getTaskResponse;
}

/*
==============
SocialPresence::GetPlatform
==============
*/
PresencePlatform SocialPresence::GetPlatform(SocialPresence *this)
{
  bdPlatformType platform; 
  const char *v3; 
  const char **p_m_platformString; 
  unsigned int i; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  platform = this->m_crossTitlePresenceData.platform;
  if ( platform == PLATFORM_TYPE_UNKNOWN )
    return 0;
  v3 = bdPlatformTypeToStr(platform);
  p_m_platformString = &s_presencePlatformMapping[0].m_platformString;
  for ( i = 0; i < 6; ++i )
  {
    v6 = *p_m_platformString;
    v7 = 0x7FFFFFFFi64;
    v8 = v3;
    if ( !*p_m_platformString && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = v6 - v3;
    while ( 1 )
    {
      v10 = v8[v9];
      v11 = v7;
      v12 = *v8++;
      --v7;
      if ( !v11 )
        return s_presencePlatformMapping[i].m_platform;
      if ( v10 != v12 )
        break;
      if ( !v10 )
        return s_presencePlatformMapping[i].m_platform;
    }
    p_m_platformString += 3;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 332, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid account type") )
    __debugbreak();
  return 0;
}

/*
==============
SocialPresence::GetPlatformId
==============
*/
unsigned __int64 SocialPresence::GetPlatformId(SocialPresence *this)
{
  return this->m_crossTitlePresenceData.platformId;
}

/*
==============
GetPresenceComplete
==============
*/
void GetPresenceComplete(GenericTask *task, eTaskManagerTaskState state)
{
  GenericTask *v2; 
  bdGetUsersPresenceResponseV3 *UserTaskResponse; 
  RemoteUserFetchPresenceStore *PresenceStore; 
  signed int v5; 
  bdUserPresenceV3 *UserPresence; 
  XUID *p_xuid; 
  bdUserAccountID *User; 
  const XUID *v9; 
  unsigned int NumPresences; 
  const bdUserPresenceInfoV3 *Presence; 
  DWServicesAccess *Instance; 
  int TitleID; 
  unsigned int v14; 
  bool v19; 
  DWServicesAccess *v20; 
  int v21; 
  const char *v22; 
  __int64 m_controllerIndex; 
  __int64 v24; 
  int v25; 
  int nextPresenceCount; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v32; 
  bdGetUsersPresenceResponseV3 *v33; 
  XUID *v34; 
  XUID v36; 
  bdUserPresenceInfoV3 *p_inData; 
  bdPresenceData presenceData; 
  bdUserPresenceInfoV3 inData; 
  bdUserPresenceInfoV3 v40; 
  bdUserAccountID result; 

  v2 = task;
  if ( state )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(v2->m_remoteDemonwareTask.m_ptr);
    Com_PrintWarning(25, "Demonware presence request returned error: controller %d, code %d, transaction %zu\n", (unsigned int)v2->m_controllerIndex, (unsigned int)ErrorCode, TransactionID);
    s_getTaskId = 0;
  }
  else
  {
    UserTaskResponse = GetGetUserTaskResponse();
    v33 = UserTaskResponse;
    PresenceStore = GetFetchPresenceStore(v2->m_controllerIndex);
    if ( PresenceStore->nextPresenceCount + bdGetUsersPresenceResponseV3::getNumUsers(UserTaskResponse) > 0x866 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1243, ASSERT_TYPE_ASSERT, "(store->nextPresenceCount + response->getNumUsers() <= 200 + 250 + 1200 + ( 500 ))", (const char *)&queryFormat, "store->nextPresenceCount + response->getNumUsers() <= MAX_FETCH_DW_PRESENCE_USERS") )
      __debugbreak();
    v5 = 0;
    if ( (int)bdGetUsersPresenceResponseV3::getNumUsers(UserTaskResponse) > 0 )
    {
      do
      {
        UserPresence = (bdUserPresenceV3 *)bdGetUsersPresenceResponseV3::getUserPresence(UserTaskResponse, v5);
        p_xuid = &PresenceStore->nextPresence[v5 + PresenceStore->nextPresenceCount].xuid;
        v34 = p_xuid;
        User = bdUserPresenceV3::getUser(UserPresence, &result);
        v9 = XUID::FromUniversalId(&v36, User->m_userID);
        XUID::operator=(p_xuid, v9);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
        bdUserPresenceInfoV3::bdUserPresenceInfoV3(&v40);
        bdUserPresenceInfoV3::setOnline(&v40, 0);
        NumPresences = bdUserPresenceV3::getNumPresences(UserPresence);
        if ( NumPresences )
        {
          Presence = bdUserPresenceV3::getPresence(UserPresence, 0);
          bdUserPresenceInfoV3::operator=(&v40, Presence);
          Instance = DWServicesAccess::GetInstance();
          TitleID = DWServicesAccess::GetTitleID(Instance);
          if ( bdUserPresenceInfoV3::getTitleID(&v40) != TitleID )
          {
            v14 = 0;
            while ( 1 )
            {
              _RDI = bdUserPresenceV3::getPresence(UserPresence, v14);
              inData.m_online = _RDI->m_online;
              inData.m_platform.m_hasValue = _RDI->m_platform.m_hasValue;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+2]
                vmovups xmmword ptr [rbp+550h+inData.m_platform.m_value.m_buffer], xmm0
              }
              inData.m_platform.m_value.m_buffer[16] = _RDI->m_platform.m_value.m_buffer[16];
              bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&inData.m_titleToken, &_RDI->m_titleToken);
              bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&inData.m_presenceToken, &_RDI->m_presenceToken);
              inData.m_titleID.m_hasValue = _RDI->m_titleID.m_hasValue;
              inData.m_titleID.m_value = _RDI->m_titleID.m_value;
              inData.m_data.m_hasValue = _RDI->m_data.m_hasValue;
              bdPresenceData::bdPresenceData(&inData.m_data.m_value, &_RDI->m_data.m_value);
              inData.m_updateTime.m_hasValue = _RDI->m_updateTime.m_hasValue;
              inData.m_updateTime.m_value = _RDI->m_updateTime.m_value;
              if ( bdUserPresenceInfoV3::getTitleID(&inData) == TitleID )
                break;
              bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&inData);
              if ( ++v14 >= NumPresences )
                goto LABEL_13;
            }
            v40.m_online = inData.m_online;
            v40.m_platform.m_hasValue = inData.m_platform.m_hasValue;
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+550h+inData.m_platform.m_value.m_buffer]
              vmovups xmmword ptr [rbp+550h+var_320.m_platform.m_value.m_buffer], xmm0
            }
            v40.m_platform.m_value.m_buffer[16] = inData.m_platform.m_value.m_buffer[16];
            bdStructOptionalObject<bdLocalizationToken>::operator=(&v40.m_titleToken, &inData.m_titleToken);
            bdStructOptionalObject<bdLocalizationToken>::operator=(&v40.m_presenceToken, &inData.m_presenceToken);
            v40.m_titleID.m_hasValue = inData.m_titleID.m_hasValue;
            v40.m_titleID.m_value = inData.m_titleID.m_value;
            v40.m_data.m_hasValue = inData.m_data.m_hasValue;
            bdCrossPlatformUserMetadata::operator=(&v40.m_data.m_value, &inData.m_data.m_value);
            v40.m_updateTime.m_hasValue = inData.m_updateTime.m_hasValue;
            v40.m_updateTime.m_value = inData.m_updateTime.m_value;
            bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&inData);
          }
LABEL_13:
          UserTaskResponse = v33;
        }
        p_inData = &inData;
        inData.m_online = v40.m_online;
        inData.m_platform.m_hasValue = v40.m_platform.m_hasValue;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+550h+var_320.m_platform.m_value.m_buffer]
          vmovups xmmword ptr [rbp+550h+inData.m_platform.m_value.m_buffer], xmm0
        }
        inData.m_platform.m_value.m_buffer[16] = v40.m_platform.m_value.m_buffer[16];
        bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&inData.m_titleToken, &v40.m_titleToken);
        bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&inData.m_presenceToken, &v40.m_presenceToken);
        inData.m_titleID.m_hasValue = v40.m_titleID.m_hasValue;
        inData.m_titleID.m_value = v40.m_titleID.m_value;
        inData.m_data.m_hasValue = v40.m_data.m_hasValue;
        bdPresenceData::bdPresenceData(&inData.m_data.m_value, &v40.m_data.m_value);
        inData.m_updateTime.m_hasValue = v40.m_updateTime.m_hasValue;
        inData.m_updateTime.m_value = v40.m_updateTime.m_value;
        if ( bdUserPresenceInfoV3::getOnline(&inData) )
        {
          v19 = LiveCrossTitlePresence_Read((CrossTitlePresenceData *)&v34[1], &inData);
          v20 = DWServicesAccess::GetInstance();
          v21 = DWServicesAccess::GetTitleID(v20);
          if ( v19 && HIDWORD(v34[2].m_id) == v21 )
          {
            bdUserPresenceInfoV3::getData(&inData, &presenceData);
            if ( !ReadPresenceData(&presenceData, (SocialPresence *)&v34[1]) )
            {
              v22 = XUID::ToDevString(v34);
              Com_PrintError(25, "Invalid presence read in for user %s\n", v22);
            }
            bdPresenceData::~bdPresenceData(&presenceData);
          }
        }
        else
        {
          v34[1].m_id = 0i64;
          v34[2].m_id = 0i64;
          v34[3].m_id = 0i64;
          v34[4].m_id = 0i64;
          v34[5].m_id = 0i64;
          v34[6].m_id = 0i64;
        }
        bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&inData);
        bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&v40);
        ++v5;
      }
      while ( v5 < (int)bdGetUsersPresenceResponseV3::getNumUsers(UserTaskResponse) );
      v2 = task;
    }
    PresenceStore->nextPresenceCount += bdGetUsersPresenceResponseV3::getNumUsers(UserTaskResponse);
    if ( PresenceStore->nextPresenceCount > PresenceStore->numXuidsToFetch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1259, ASSERT_TYPE_ASSERT, "(store->nextPresenceCount <= store->numXuidsToFetch)", (const char *)&queryFormat, "store->nextPresenceCount <= store->numXuidsToFetch") )
      __debugbreak();
    if ( PresenceStore->numXuidsToFetch == PresenceStore->nextPresenceCount )
    {
      m_controllerIndex = v2->m_controllerIndex;
      if ( (unsigned int)m_controllerIndex >= 8 )
      {
        LODWORD(v32) = v2->m_controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v32, 8) )
          __debugbreak();
      }
      v24 = m_controllerIndex;
      v25 = 0;
      nextPresenceCount = s_dwFetchPresenceStore[m_controllerIndex].nextPresenceCount;
      if ( nextPresenceCount > 0 )
      {
        _RBX = &s_dwFetchPresenceStore[v24].activePresence[0].presence.m_crossTitlePresenceData.online;
        do
        {
          *_RBX = _RBX[120400];
          XUID::operator=((XUID *)(_RBX - 25), (const XUID *)(_RBX + 120375));
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+1D63Fh]
            vmovups ymmword ptr [rbx-11h], ymm0
            vmovups xmm1, xmmword ptr [rbx+1D65Fh]
            vmovups xmmword ptr [rbx+0Fh], xmm1
          }
          ++v25;
          _RBX += 56;
          nextPresenceCount = s_dwFetchPresenceStore[v24].nextPresenceCount;
        }
        while ( v25 < nextPresenceCount );
      }
      s_dwFetchPresenceStore[v24].activePresenceCount = nextPresenceCount;
      PresenceStore->fetched = 1;
      s_getTaskId = 0;
      PresenceStore->fetchedTime = Sys_Milliseconds();
    }
    else
    {
      BatchFetchPresence(v2->m_controllerIndex);
      PresenceStore->fetchedTime = Sys_Milliseconds();
    }
  }
}

/*
==============
GetRemoteUserPresence
==============
*/
RemoteUserPresenceData *GetRemoteUserPresence(const int controllerIndex, const XUID xuid)
{
  OnlinePresenceNotifications *Instance; 
  RemoteUserPresenceData *result; 
  RemoteUserFetchPresenceStore *PresenceStore; 
  int v6; 
  RemoteUserFetchPresenceStore *v7; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  Instance = OnlinePresenceNotifications::GetInstance();
  result = OnlinePresenceNotifications::GetSubscribedUserPresence(Instance, controllerIndex, xuida);
  if ( !result )
  {
    PresenceStore = GetFetchPresenceStore(controllerIndex);
    v6 = 0;
    v7 = PresenceStore;
    if ( PresenceStore->activePresenceCount <= 0 )
    {
      return 0i64;
    }
    else
    {
      while ( !XUID::operator==(&v7->activePresence[v6].xuid, &xuida) )
      {
        if ( ++v6 >= v7->activePresenceCount )
          return 0i64;
      }
      return &v7->activePresence[v6];
    }
  }
  return result;
}

/*
==============
PresenceChanged
==============
*/
void PresenceChanged(const int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  char *fmt; 
  __int64 v5; 
  int v6; 

  v1 = controllerIndex;
  if ( !dw_presence_put_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1552, ASSERT_TYPE_ASSERT, "(dw_presence_put_rate)", (const char *)&queryFormat, "dw_presence_put_rate") )
    __debugbreak();
  if ( !dw_presence_put_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1553, ASSERT_TYPE_ASSERT, "(dw_presence_put_delay)", (const char *)&queryFormat, "dw_presence_put_delay") )
    __debugbreak();
  v2 = Sys_Milliseconds();
  v3 = v2 + dw_presence_put_delay->current.integer;
  if ( (unsigned int)v1 >= 8 )
  {
    v6 = 8;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 555, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  s_presenceData[v1].nextUpdateTimestamp = v3;
  LODWORD(fmt) = dw_presence_put_delay->current.integer;
  Com_Printf(25, "Delaying social presence update until %d -- currentTime:%d delay:%d\n", v3, v2, fmt);
}

/*
==============
ReadPresenceData
==============
*/
__int64 ReadPresenceData(const bdPresenceData *presenceData, SocialPresence *socialPresenceOut)
{
  unsigned __int8 v4; 
  char m_version; 
  char v7; 
  unsigned __int8 v8; 
  const char *Buffer; 
  unsigned int value; 
  bdString v11; 

  if ( !presenceData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 658, ASSERT_TYPE_ASSERT, "(presenceData)", (const char *)&queryFormat, "presenceData", -2i64) )
    __debugbreak();
  value = 0;
  if ( bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "version", &value) )
  {
    v4 = 1;
    m_version = truncate_cast<signed char,unsigned int>(value);
    socialPresenceOut->m_version = m_version;
  }
  else
  {
    v4 = 0;
    m_version = socialPresenceOut->m_version;
  }
  if ( m_version != 9 )
    return v4;
  if ( v4 && bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "context", &value) && (socialPresenceOut->m_context = truncate_cast<signed char,unsigned int>(value), bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "gametype", &value)) && (socialPresenceOut->m_gametype = truncate_cast<signed char,unsigned int>(value), bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "mapindex", &value)) && (socialPresenceOut->m_mapIndex = truncate_cast<signed char,unsigned int>(value), bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "sessionFlags", &value)) && (socialPresenceOut->m_sessionFlags = value, bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "flags", &value)) && (socialPresenceOut->m_flags = truncate_cast<signed char,unsigned int>(value), bdCrossPlatformUserMetadata::readUInt32(&presenceData->bdCrossPlatformUserMetadata, "inputType", &value)) )
  {
    v7 = 1;
    socialPresenceOut->m_inputType = truncate_cast<signed char,unsigned int>(value);
  }
  else
  {
    v7 = 0;
  }
  bdString::bdString(&v11);
  if ( v7 && bdCrossPlatformUserMetadata::readString(&presenceData->bdCrossPlatformUserMetadata, "clanTag", &v11) )
  {
    v8 = 1;
    Buffer = bdString::getBuffer(&v11);
    Core_strcpy(socialPresenceOut->m_clanTag, 0xCui64, Buffer);
  }
  else
  {
    v8 = 0;
  }
  bdString::~bdString(&v11);
  return v8;
}

/*
==============
SocialPresence::SetClanTag
==============
*/
void SocialPresence::SetClanTag(SocialPresence *this, const char *clanTag)
{
  Core_strcpy(this->m_clanTag, 0xCui64, clanTag);
}

/*
==============
SocialPresence::SetPlatform
==============
*/
void SocialPresence::SetPlatform(SocialPresence *this, const PresencePlatform platform)
{
  this->m_crossTitlePresenceData.platform = bdStrToPlatformType(s_presencePlatformMapping[(unsigned __int8)platform].m_platformString);
}

/*
==============
SocialPresence::SetPlatformId
==============
*/
void SocialPresence::SetPlatformId(SocialPresence *this, const unsigned __int64 platformId)
{
  this->m_crossTitlePresenceData.platformId = platformId;
}

/*
==============
SetPresence
==============
*/
void SetPresence(const int controllerIndex)
{
  __int64 v1; 
  int v2; 
  int v3; 
  __int64 v4; 
  XUID *Xuid; 
  DWServicesAccess *Instance; 
  DWRichPresenceService *RichPresence; 
  const bdUserAccountID *v8; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  unsigned __int64 outputSize; 
  unsigned __int64 outputSizea; 
  __int64 v15; 
  bdReference<bdRemoteTask> v16; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v19; 
  XUID result; 
  bdUserAccountID v21; 
  bdUserAccountID other; 
  bdUserPresenceInfoV3 info; 
  char outputString[256]; 

  v19 = -2i64;
  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 950, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v2 = Sys_Milliseconds();
  v3 = v2 + dw_presence_put_rate->current.integer;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(outputSize) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 555, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", outputSize, v15) )
      __debugbreak();
  }
  v4 = v1;
  s_presenceData[v1].nextUpdateTimestamp = v3;
  BuildCurrentSocialPresence(v1);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(outputSize) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", outputSize, v15) )
      __debugbreak();
  }
  bdUserPresenceInfoV3::bdUserPresenceInfoV3(&info);
  if ( CreatePresenceInfo(v1, &info) )
  {
    bdUserAccountID::bdUserAccountID(&other);
    Xuid = Live_GetXuid(&result, v1);
    other.m_userID = XUID::GetUniversalId(Xuid);
    Core_strcpy(other._bytes_20, 0xAui64, "uno");
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    RichPresence = DWServicesAccess::GetRichPresence(Instance, v1);
    if ( dword_1560660E8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_1560660E8);
      if ( dword_1560660E8 == -1 )
      {
        bdSetUserPresenceResponse::bdSetUserPresenceResponse(&stru_1560660B8);
        j_atexit(GetSetUserTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_getTaskResponse__);
        j__Init_thread_footer(&dword_1560660E8);
      }
    }
    bdUserAccountID::bdUserAccountID(&v21, &other);
    v9 = (TaskCreateRequest *)DWRichPresenceService::setInfo(RichPresence, &v16, &info, v8, &stru_1560660B8);
    if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    }
    if ( v16.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v16.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v16.m_ptr->~bdReferencable)(v16.m_ptr, 1i64);
      v16.m_ptr = NULL;
    }
    pTaskCreateRequest.m_onCompletionCallback = SetPresenceComplete;
    pTaskCreateRequest.m_controllerIndex = v1;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      Social_FormatPresenceStatus(s_presenceData[v4].current.m_context, s_presenceData[v4].current.m_mapIndex, s_presenceData[v4].current.m_gametype, PRESENCE_PLATFORM_XBOX_ONE, outputString, 0x100ui64);
      Com_Printf(25, "Setting Demonware presence for controller %d: %s\n", (unsigned int)v1, outputString);
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v15) = 8;
        LODWORD(outputSizea) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 539, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", outputSizea, v15) )
          __debugbreak();
      }
      s_presenceData[v4].lastUpdateTimestamp = v2;
      s_setTaskId = pTaskCreateResult.m_localTaskId;
    }
    else
    {
      Com_PrintError(25, "Setting Demonware presence failed! Unable to create remote task for controller %d\n", (unsigned int)v1);
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
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  }
  bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&info);
}

/*
==============
SetPresenceComplete
==============
*/
void SetPresenceComplete(GenericTask *task, eTaskManagerTaskState state)
{
  unsigned __int64 TransactionID; 
  unsigned __int64 v5; 
  bdLobbyErrorCode ErrorCode; 

  if ( task->m_controllerIndex >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 775, ASSERT_TYPE_ASSERT, "(unsigned)( task->m_controllerIndex ) < (unsigned)( 8 )", "task->m_controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", task->m_controllerIndex, 8) )
    __debugbreak();
  TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
  v5 = TransactionID;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintWarning(25, "Demonware presence set error: controller %d, code %d, transaction Id %zu\n", (unsigned int)task->m_controllerIndex, (unsigned int)ErrorCode, v5);
  }
  else
  {
    Com_Printf(25, "Demonware presence set complete: controller %d, transaction %zu\n", (unsigned int)task->m_controllerIndex, TransactionID);
  }
  s_setTaskId = 0;
}

/*
==============
ShouldGetPresence
==============
*/
char ShouldGetPresence(const int controllerIndex)
{
  __int64 v1; 
  int integer; 
  TaskManager *Instance; 
  DWServicesAccess *v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  LocalClientNum_t outLocalClientNum; 

  v1 = controllerIndex;
  if ( !dw_presence_get_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1348, ASSERT_TYPE_ASSERT, "(dw_presence_get_rate)", (const char *)&queryFormat, "dw_presence_get_rate") )
    __debugbreak();
  if ( !dw_presence_get_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1349, ASSERT_TYPE_ASSERT, "(dw_presence_get_delay)", (const char *)&queryFormat, "dw_presence_get_delay") )
    __debugbreak();
  if ( (unsigned int)v1 >= 8 )
  {
    v8 = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( s_dwFetchPresenceStore[v1].fetched )
  {
    integer = dw_presence_get_rate->current.integer;
  }
  else
  {
    integer = dw_presence_get_delay->current.integer;
    if ( dw_presence_get_rate->current.integer < integer )
      integer = dw_presence_get_rate->current.integer;
  }
  Instance = TaskManager::GetInstance();
  if ( TaskManager::FindTaskById(Instance, s_getTaskId) )
    return 0;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 628, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( Live_IsUserSignedInToDemonware(v1) && CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum) && LUI_IsMenuOpenAndVisible(outLocalClientNum, "SocialMenu") && (v4 = DWServicesAccess::GetInstance(), DWServicesAccess::isReady(v4, v1)) && Sys_Milliseconds() - s_dwFetchPresenceStore[v1].fetchedTime > integer )
    return 1;
  else
    return 0;
}

/*
==============
Social_FormatPresenceStatus
==============
*/
void Social_FormatPresenceStatus(const int context, int mapIndex, int gameType, const PresencePlatform platform, char *outputString, const unsigned __int64 outputSize)
{
  const char *v10; 
  ConversionArguments arguments; 

  memset_0(&arguments, 0, sizeof(arguments));
  v10 = NULL;
  switch ( context )
  {
    case 0:
    case 5:
      v10 = UI_SafeTranslateString("PRESENCE/NOTINGAME");
      break;
    case 1:
      v10 = UI_SafeTranslateString("PRESENCE/PLAYINGMP");
      if ( (unsigned int)gameType >= 0x1F )
      {
        Com_PrintWarning(25, "WARNING: Presence gametype index %i is invalid\n", (unsigned int)gameType);
        gameType = 0;
      }
      if ( (unsigned int)mapIndex >= 0x5A )
      {
        Com_PrintWarning(25, "WARNING: Presence map index %i is invalid\n", (unsigned int)mapIndex);
        mapIndex = 0;
      }
      arguments.argCount = 2;
      arguments.args[0] = UI_SafeTranslateString(gametypePresenceNameReference[gameType]);
      arguments.args[1] = UI_SafeTranslateString(mapPresenceNameReferenceMP[mapIndex]);
      break;
    case 2:
      v10 = UI_SafeTranslateString("PRESENCE/PLAYINGSP");
      if ( (unsigned int)mapIndex >= 0xF )
      {
        Com_PrintWarning(25, "WARNING: Presence map index %i is invalid\n", (unsigned int)mapIndex);
        mapIndex = 0;
      }
      arguments.argCount = 1;
      arguments.args[0] = UI_SafeTranslateString(mapPresenceNameReferenceSP[mapIndex]);
      break;
    case 3:
      v10 = UI_SafeTranslateString("PRESENCE/LOBBY");
      break;
    case 4:
      v10 = UI_SafeTranslateString("PRESENCE/PARTY");
      break;
    case 9:
      v10 = UI_SafeTranslateString("PRESENCE/PLAYINGTHEATRE");
      break;
    case 10:
      v10 = UI_SafeTranslateString("PRESENCE/WATCHINGCREDITS");
      break;
    default:
      break;
  }
  UI_ReplaceConversions(v10, &arguments, outputString, outputSize);
  if ( platform )
    I_strcat(outputString, outputSize, s_presencePlatformMapping[(unsigned __int8)platform].m_presencePlatformString);
}

/*
==============
Social_FormatSocialPresence
==============
*/
void Social_FormatSocialPresence(const SocialPresence *presence, const PresencePlatform platform, char *outputString, const unsigned __int64 outputSize)
{
  int RowCount; 
  unsigned int titleId; 
  char v10; 
  int v11; 
  int v12; 
  const char *ColumnValueForRow; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  StringTable *tablePtr; 
  char *saveptrctx; 
  char dest[512]; 

  StringTable_GetAsset("title_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 417, ASSERT_TYPE_ASSERT, "(titleIDTable)", (const char *)&queryFormat, "titleIDTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  titleId = presence->m_crossTitlePresenceData.titleId;
  v10 = 0;
  v11 = 0;
  v12 = RowCount;
  if ( RowCount <= 0 )
    goto LABEL_14;
  do
  {
    if ( v10 )
      break;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v11, 1);
    Core_strcpy_truncate(dest, 0x200ui64, ColumnValueForRow);
    saveptrctx = NULL;
    v14 = I_strtok_r(dest, "|", &saveptrctx);
    if ( v14 )
    {
      while ( I_atoui(v14) != titleId )
      {
        v14 = I_strtok_r(NULL, "|", &saveptrctx);
        if ( !v14 )
          goto LABEL_11;
      }
      v15 = StringTable_GetColumnValueForRow(tablePtr, v11, 0);
      v10 = I_atoui(v15);
    }
LABEL_11:
    ++v11;
  }
  while ( v11 < v12 );
  if ( v10 == 2 )
  {
    v16 = UI_SafeTranslateString("PRESENCE/PLAYING_COLD_WAR");
    Core_strcpy(outputString, outputSize, v16);
  }
  else
  {
LABEL_14:
    Social_FormatPresenceStatus(presence->m_context, presence->m_mapIndex, presence->m_gametype, platform, outputString, outputSize);
  }
}

/*
==============
Social_GetPlatformId
==============
*/
char Social_GetPlatformId(const int controllerIndex, const XUID dwXuid, unsigned __int64 *platformIdOut)
{
  RemoteUserPresenceData *RemoteUserPresence; 
  RemoteUserPresenceData *v7; 
  unsigned __int64 *p_platformId; 

  RemoteUserPresence = GetRemoteUserPresence(controllerIndex, dwXuid);
  if ( !RemoteUserPresence )
    return 0;
  if ( !RemoteUserPresence->presence.m_crossTitlePresenceData.online )
    return 0;
  if ( SocialPresence::GetPlatform(&RemoteUserPresence->presence) != PRESENCE_PLATFORM_XBOX_ONE )
    return 0;
  v7 = GetRemoteUserPresence(controllerIndex, dwXuid);
  if ( !v7 )
    return 0;
  p_platformId = &v7->presence.m_crossTitlePresenceData.platformId;
  if ( !p_platformId )
    return 0;
  *platformIdOut = *p_platformId;
  return 1;
}

/*
==============
Social_GetPresence
==============
*/
RemoteUserPresenceData *Social_GetPresence(const int controllerIndex, const XUID userId)
{
  RemoteUserPresenceData *result; 

  result = GetRemoteUserPresence(controllerIndex, userId);
  if ( result )
    return (RemoteUserPresenceData *)((char *)result + 8);
  return result;
}

/*
==============
Social_GetPresencePlatform
==============
*/
char Social_GetPresencePlatform()
{
  return 1;
}

/*
==============
Social_GetPresenceString
==============
*/
char *Social_GetPresenceString(const int controllerIndex, const XUID userId, bdUserAccountID *ucdId)
{
  RemoteUserPresenceData *RemoteUserPresence; 
  char *p_presence; 
  PresencePlatform Platform; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  int v11; 
  int v13; 
  XUID xuid; 

  xuid.m_id = userId.m_id;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v13 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v13) )
      __debugbreak();
  }
  RemoteUserPresence = GetRemoteUserPresence(controllerIndex, xuid);
  if ( !RemoteUserPresence )
    return (char *)SEH_SafeTranslateString("XBOXLIVE/OFFLINE");
  if ( RemoteUserPresence->presence.m_crossTitlePresenceData.online )
  {
    p_presence = (char *)&RemoteUserPresence->presence;
    Platform = SocialPresence::GetPlatform(&RemoteUserPresence->presence);
    Social_FormatPresenceStatus(p_presence[41], p_presence[43], p_presence[42], Platform, s_presenceString, 0x400ui64);
    return s_presenceString;
  }
  else
  {
    v8 = 2 * (5 * (XUID::ToUint64(&xuid) & 7) + 150);
    v9 = Sys_Milliseconds();
    v10 = (v9 / v8) & 3;
    if ( ((v9 / v8) & 3) != 0 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          return ".";
        else
          return (char *)&queryFormat.fmt + 3;
      }
      else
      {
        return "..";
      }
    }
    else
    {
      return "...";
    }
  }
}

/*
==============
Social_GetReleventPresenceInfo
==============
*/
void Social_GetReleventPresenceInfo(const bdUserPresenceV3 *userPresence, bdUserPresenceInfoV3 *outPresenceInfo)
{
  unsigned int NumPresences; 
  const bdUserPresenceInfoV3 *Presence; 
  DWServicesAccess *Instance; 
  int TitleID; 
  unsigned int v8; 
  bdUserPresenceInfoV3 __that; 

  bdUserPresenceInfoV3::setOnline(outPresenceInfo, 0);
  NumPresences = bdUserPresenceV3::getNumPresences((bdUserPresenceV3 *)userPresence);
  if ( NumPresences )
  {
    Presence = bdUserPresenceV3::getPresence((bdUserPresenceV3 *)userPresence, 0);
    bdUserPresenceInfoV3::operator=(outPresenceInfo, Presence);
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    if ( bdUserPresenceInfoV3::getTitleID(outPresenceInfo) != TitleID )
    {
      v8 = 0;
      while ( 1 )
      {
        _RDI = bdUserPresenceV3::getPresence((bdUserPresenceV3 *)userPresence, v8);
        __that.m_online = _RDI->m_online;
        __that.m_platform.m_hasValue = _RDI->m_platform.m_hasValue;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+2]
          vmovups xmmword ptr [rsp+308h+__that.m_platform.m_value.m_buffer], xmm0
        }
        __that.m_platform.m_value.m_buffer[16] = _RDI->m_platform.m_value.m_buffer[16];
        bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&__that.m_titleToken, &_RDI->m_titleToken);
        bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&__that.m_presenceToken, &_RDI->m_presenceToken);
        __that.m_titleID.m_hasValue = _RDI->m_titleID.m_hasValue;
        __that.m_titleID.m_value = _RDI->m_titleID.m_value;
        __that.m_data.m_hasValue = _RDI->m_data.m_hasValue;
        bdPresenceData::bdPresenceData(&__that.m_data.m_value, &_RDI->m_data.m_value);
        __that.m_updateTime.m_hasValue = _RDI->m_updateTime.m_hasValue;
        __that.m_updateTime.m_value = _RDI->m_updateTime.m_value;
        if ( bdUserPresenceInfoV3::getTitleID(&__that) == TitleID )
          break;
        bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&__that);
        if ( ++v8 >= NumPresences )
          return;
      }
      bdUserPresenceInfoV3::operator=(outPresenceInfo, &__that);
      bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&__that);
    }
  }
}

/*
==============
Social_GetXUIDFromPlatformID
==============
*/
char Social_GetXUIDFromPlatformID(const int controllerIndex, const unsigned __int64 userId, XUID *xuidOut)
{
  OnlinePresenceNotifications *Instance; 
  RemoteUserPresenceData *SubscribedUserPresence; 
  RemoteUserFetchPresenceStore *PresenceStore; 
  int v10; 
  __int64 activePresenceCount; 
  __int64 v12; 
  SocialPresence *i; 

  Instance = OnlinePresenceNotifications::GetInstance();
  SubscribedUserPresence = OnlinePresenceNotifications::GetSubscribedUserPresence(Instance, controllerIndex, userId);
  if ( SubscribedUserPresence )
  {
    XUID::operator=(xuidOut, &SubscribedUserPresence->xuid);
    return 1;
  }
  else
  {
    PresenceStore = GetFetchPresenceStore(controllerIndex);
    v10 = 0;
    activePresenceCount = PresenceStore->activePresenceCount;
    if ( activePresenceCount <= 0 )
    {
      return 0;
    }
    else
    {
      v12 = 0i64;
      for ( i = &PresenceStore->activePresence[0].presence; i->m_crossTitlePresenceData.platformId != userId; i = (SocialPresence *)((char *)i + 56) )
      {
        ++v10;
        if ( ++v12 >= activePresenceCount )
          return 0;
      }
      XUID::operator=(xuidOut, &PresenceStore->activePresence[v10].xuid);
      return 1;
    }
  }
}

/*
==============
Social_HavePlatformPermissionsToChat
==============
*/
bool Social_HavePlatformPermissionsToChat(const SocialPresence *presence)
{
  return (presence->m_flags & 2) == 0;
}

/*
==============
Social_HavePlatformPermissionsToCrossplay
==============
*/
bool Social_HavePlatformPermissionsToCrossplay(const SocialPresence *presence)
{
  return (presence->m_flags & 0x10) == 0;
}

/*
==============
Social_HavePlatformPermissionsToShareUGC
==============
*/
bool Social_HavePlatformPermissionsToShareUGC(const SocialPresence *presence)
{
  return (presence->m_flags & 4) == 0;
}

/*
==============
Social_InitPresence
==============
*/
void Social_InitPresence(void)
{
  int v0; 
  LocalUserPresenceData *v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  v1 = s_presenceData;
  s_setTaskId = 0;
  s_getTaskId = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 8;
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    ++v0;
    v1->current.m_crossTitlePresenceData.platformId = 0i64;
    *(_QWORD *)&v1->current.m_crossTitlePresenceData.version = 0i64;
    *(_QWORD *)&v1->current.m_crossTitlePresenceData.platform = 0i64;
    *(_QWORD *)&v1->current.m_sessionFlags = 0i64;
    *(_QWORD *)&v1->current.m_clanTag[4] = 0i64;
    *(_QWORD *)&v1->current.m_version = 0i64;
    v1->current.m_version = 9;
    ++v1;
    v2 = (unsigned int)v0 < 8;
  }
  while ( v0 < 8 );
}

/*
==============
Social_IsPresenceJoinable
==============
*/
char Social_IsPresenceJoinable(const int controllerIndex, const SocialPresence *presence, const bool isFriend, const char **errorString, const char **devErrorString)
{
  unsigned int m_sessionFlags; 
  unsigned int v11; 

  if ( SocialPresence::GetPlatform((SocialPresence *)presence) == PRESENCE_PLATFORM_NONE )
  {
    *errorString = "ONLINE/CANT_INVITE_NO_PRESENCE";
    *devErrorString = "DW Presence platform NONE";
    return 0;
  }
  if ( SocialPresence::GetPlatform((SocialPresence *)presence) == PRESENCE_PLATFORM_XBOX_ONE )
    goto LABEL_8;
  if ( !Live_HasCrossPlayPermissions(controllerIndex) )
  {
    *errorString = "ONLINE/LOCAL_USER_CROSSPLAY_PERMISSIONS_MISSING";
    return 0;
  }
  if ( (presence->m_flags & 0x10) == 0 )
  {
LABEL_8:
    m_sessionFlags = presence->m_sessionFlags;
    if ( (m_sessionFlags & 4) != 0 )
    {
      *errorString = "MENU/JOIN_SESSION_INVALID";
      return 0;
    }
    else if ( (m_sessionFlags & 1) != 0 )
    {
      *errorString = "XBOXLIVE/JOIN_FULL_GAME";
      return 0;
    }
    else if ( (m_sessionFlags & 0x40) != 0 )
    {
      *errorString = "ONLINE/PLAYLIST_JOIN_DISABLED";
      return 0;
    }
    else if ( (m_sessionFlags & 0x80u) == 0 || LiveStorage_IsPaidUser(controllerIndex) )
    {
      v11 = presence->m_sessionFlags;
      if ( (v11 & 0x20) != 0 )
      {
        *errorString = "MENU/JOIN_SESSION_CLOSED";
        return 0;
      }
      else if ( (v11 & 2) != 0 )
      {
        *errorString = "MENU/JOIN_SESSION_INVITE_ONLY";
        return 0;
      }
      else if ( isFriend || (v11 & 0x200) == 0 )
      {
        return 1;
      }
      else
      {
        *errorString = "MENU/JOIN_SESSION_JOINABLE_BY_FRIENDS";
        return 0;
      }
    }
    else
    {
      *errorString = "ONLINE/JOIN_DISABLED_USER_IN_F2P_RESTRICTED_AREA";
      return 0;
    }
  }
  else
  {
    *errorString = "ONLINE/REMOTE_USER_CROSSPLAY_PERMISSIONS_MISSING";
    return 0;
  }
}

/*
==============
Social_IsRemotePlayerOnline
==============
*/
RemoteUserPresenceData *Social_IsRemotePlayerOnline(const int controllerIndex, const XUID userId)
{
  RemoteUserPresenceData *result; 

  result = GetRemoteUserPresence(controllerIndex, userId);
  if ( result )
    return (RemoteUserPresenceData *)result->presence.m_crossTitlePresenceData.online;
  return result;
}

/*
==============
Social_IsUserInvitable
==============
*/
char Social_IsUserInvitable(const int controllerIndex, const XUID xuid, const char **errorString, const char **devErrorString)
{
  RemoteUserPresenceData *RemoteUserPresence; 
  SocialPresence *p_presence; 
  bool v10; 
  const char *v11; 
  const PartyData *ActiveParty; 

  RemoteUserPresence = GetRemoteUserPresence(controllerIndex, xuid);
  if ( !RemoteUserPresence || (p_presence = &RemoteUserPresence->presence, RemoteUserPresence == (RemoteUserPresenceData *)-8i64) )
  {
    *errorString = "ONLINE/CANT_INVITE_NO_PRESENCE";
    return 0;
  }
  else
  {
    if ( SocialPresence::GetPlatform(&RemoteUserPresence->presence) == PRESENCE_PLATFORM_NONE )
    {
      *errorString = "ONLINE/CANT_INVITE_NO_PRESENCE";
      *devErrorString = "DW Presence platform NONE";
      return 0;
    }
    v10 = SocialPresence::GetPlatform(p_presence) == PRESENCE_PLATFORM_XBOX_ONE;
    if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, errorString, devErrorString, v10) )
      return 0;
    if ( !v10 )
    {
      if ( !Live_HasCrossPlayPermissions(controllerIndex) )
      {
        v11 = "ONLINE/LOCAL_USER_CROSSPLAY_PERMISSIONS_MISSING";
LABEL_9:
        *errorString = v11;
        return 0;
      }
      if ( (p_presence->m_flags & 0x10) != 0 )
      {
        v11 = "ONLINE/REMOTE_USER_CROSSPLAY_PERMISSIONS_MISSING";
        goto LABEL_9;
      }
    }
    if ( (p_presence->m_flags & 8) != 0 )
    {
      v11 = "ONLINE/CANT_INVITE_PLATFORM_PERMISSIONS";
      goto LABEL_9;
    }
    if ( (p_presence->m_sessionFlags & 0x100) != 0 )
    {
      ActiveParty = Party_GetActiveParty();
      if ( Party_GetPartyRestrictsF2PUsersFlag(ActiveParty) )
      {
        v11 = "ONLINE/INVITE_DISABLED_USER_IS_F2P";
        goto LABEL_9;
      }
    }
    return 1;
  }
}

/*
==============
Social_IsUserJoinable
==============
*/
char Social_IsUserJoinable(const int controllerIndex, const XUID xuid, const bool isFriend, const char **errorString, const char **devErrorString)
{
  RemoteUserPresenceData *RemoteUserPresence; 
  SocialPresence *p_presence; 
  const char *v10; 
  unsigned int m_sessionFlags; 
  unsigned int v12; 

  RemoteUserPresence = GetRemoteUserPresence(controllerIndex, xuid);
  if ( !RemoteUserPresence || (p_presence = &RemoteUserPresence->presence, RemoteUserPresence == (RemoteUserPresenceData *)-8i64) )
  {
    v10 = "DW Presence not available";
    goto LABEL_28;
  }
  if ( SocialPresence::GetPlatform(&RemoteUserPresence->presence) == PRESENCE_PLATFORM_NONE )
  {
    v10 = "DW Presence platform NONE";
LABEL_28:
    *errorString = "ONLINE/CANT_INVITE_NO_PRESENCE";
    *devErrorString = v10;
    return 0;
  }
  if ( SocialPresence::GetPlatform(p_presence) != PRESENCE_PLATFORM_XBOX_ONE )
  {
    if ( !Live_HasCrossPlayPermissions(controllerIndex) )
    {
      *errorString = "ONLINE/LOCAL_USER_CROSSPLAY_PERMISSIONS_MISSING";
      return 0;
    }
    if ( (p_presence->m_flags & 0x10) != 0 )
    {
      *errorString = "ONLINE/REMOTE_USER_CROSSPLAY_PERMISSIONS_MISSING";
      return 0;
    }
  }
  m_sessionFlags = p_presence->m_sessionFlags;
  if ( (m_sessionFlags & 4) != 0 )
  {
    *errorString = "MENU/JOIN_SESSION_INVALID";
  }
  else if ( (m_sessionFlags & 1) != 0 )
  {
    *errorString = "XBOXLIVE/JOIN_FULL_GAME";
  }
  else if ( (m_sessionFlags & 0x40) != 0 )
  {
    *errorString = "ONLINE/PLAYLIST_JOIN_DISABLED";
  }
  else if ( (m_sessionFlags & 0x80u) == 0 || LiveStorage_IsPaidUser(controllerIndex) )
  {
    v12 = p_presence->m_sessionFlags;
    if ( (v12 & 0x20) != 0 )
    {
      *errorString = "MENU/JOIN_SESSION_CLOSED";
    }
    else if ( (v12 & 2) != 0 )
    {
      *errorString = "MENU/JOIN_SESSION_INVITE_ONLY";
    }
    else
    {
      if ( isFriend || (v12 & 0x200) == 0 )
        return 1;
      *errorString = "MENU/JOIN_SESSION_JOINABLE_BY_FRIENDS";
    }
  }
  else
  {
    *errorString = "ONLINE/JOIN_DISABLED_USER_IN_F2P_RESTRICTED_AREA";
  }
  return 0;
}

/*
==============
Social_IsUserOnSamePlatform
==============
*/
PresencePlatform Social_IsUserOnSamePlatform(const int controllerIndex, const XUID xuid)
{
  RemoteUserPresenceData *RemoteUserPresence; 
  PresencePlatform result; 

  RemoteUserPresence = GetRemoteUserPresence(controllerIndex, xuid);
  if ( !RemoteUserPresence )
    return 0;
  if ( !RemoteUserPresence->presence.m_crossTitlePresenceData.online )
    return 0;
  result = SocialPresence::GetPlatform(&RemoteUserPresence->presence);
  if ( result != PRESENCE_PLATFORM_XBOX_ONE )
    return 0;
  return result;
}

/*
==============
Social_IsUsingSecondScreen
==============
*/
bool Social_IsUsingSecondScreen(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_presenceData[v1].current.m_flags & 1;
}

/*
==============
Social_SetGameTypePresence
==============
*/
void Social_SetGameTypePresence(const int controllerIndex, const int gameType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  s_presenceData[v2].current.m_gametype = truncate_cast<signed char,int>(gameType);
}

/*
==============
Social_SetLobbyPresence
==============
*/
void Social_SetLobbyPresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 3;
  PresenceChanged(v1);
}

/*
==============
Social_SetMainMenuPresence
==============
*/
void Social_SetMainMenuPresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 0;
  PresenceChanged(v1);
}

/*
==============
Social_SetMapPresence
==============
*/
void Social_SetMapPresence(const int controllerIndex, const int context, const int mapIndex)
{
  __int64 v3; 
  __int64 v6; 
  int v8; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  v6 = v3;
  s_presenceData[v6].current.m_context = truncate_cast<signed char,int>(context);
  s_presenceData[v6].current.m_mapIndex = truncate_cast<signed char,int>(mapIndex);
}

/*
==============
Social_SetNotPlayingPresence
==============
*/
void Social_SetNotPlayingPresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 5;
  PresenceChanged(v1);
}

/*
==============
Social_SetNotUsingSecondScreenPresence
==============
*/

void __fastcall Social_SetNotUsingSecondScreenPresence(const int controllerIndex)
{
  PresenceChanged(controllerIndex);
}

/*
==============
Social_SetPartyPresence
==============
*/
void Social_SetPartyPresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 4;
  PresenceChanged(v1);
}

/*
==============
Social_SetPresenceContextForAllActiveClients
==============
*/
void Social_SetPresenceContextForAllActiveClients(const int presenceContext)
{
  int i; 
  int ControllerFromClient; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  for ( i = 0; i < 2; ++i )
  {
    if ( !CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      continue;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
    v4 = ControllerFromClient;
    switch ( presenceContext )
    {
      case 0:
        Live_SetMainMenuPresence(ControllerFromClient);
        if ( (unsigned int)v4 >= 8 )
        {
          LODWORD(v6) = 8;
          LODWORD(v5) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        s_presenceData[v4].current.m_context = 0;
        goto LABEL_20;
      case 3:
        Live_SetLobbyPresence(ControllerFromClient);
        if ( (unsigned int)v4 >= 8 )
        {
          LODWORD(v6) = 8;
          LODWORD(v5) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        s_presenceData[v4].current.m_context = 3;
        goto LABEL_20;
      case 4:
        Live_SetPartyPresence(ControllerFromClient);
        if ( (unsigned int)v4 >= 8 )
        {
          LODWORD(v6) = 8;
          LODWORD(v5) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        s_presenceData[v4].current.m_context = 4;
LABEL_20:
        PresenceChanged(v4);
        continue;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 1992, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Live_SetPresenceContextForAllActiveClients called with unsupported presence context") )
      __debugbreak();
  }
}

/*
==============
Social_SetUsingSecondScreenPresence
==============
*/
void Social_SetUsingSecondScreenPresence(const int controllerIndex, const bool usingSecondScreen)
{
  __int64 v2; 
  __int64 v4; 
  bool IsUsingSecondScreen; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v4 = v2;
  IsUsingSecondScreen = Social_IsUsingSecondScreen(v2);
  if ( usingSecondScreen )
  {
    if ( IsUsingSecondScreen )
      return;
    s_presenceData[v4].current.m_flags |= 1u;
  }
  else
  {
    if ( !IsUsingSecondScreen )
      return;
    s_presenceData[v4].current.m_flags &= ~1u;
  }
  PresenceChanged(v2);
}

/*
==============
Social_SetWatchingCreditsPresence
==============
*/
void Social_SetWatchingCreditsPresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 10;
  PresenceChanged(v1);
}

/*
==============
Social_SetWatchingTheatrePresence
==============
*/
void Social_SetWatchingTheatrePresence(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  s_presenceData[v1].current.m_context = 9;
  PresenceChanged(v1);
}

/*
==============
Social_UpdatePresence
==============
*/
void Social_UpdatePresence(const int controllerIndex)
{
  __int64 v1; 
  TaskManager *Instance; 
  DWServicesAccess *v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v1 = controllerIndex;
  Instance = TaskManager::GetInstance();
  if ( !TaskManager::FindTaskById(Instance, s_setTaskId) && Live_IsUserSignedInToDemonware(v1) )
  {
    v3 = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(v3, v1) )
    {
      v4 = Sys_Milliseconds();
      if ( (unsigned int)v1 >= 8 )
      {
        v8 = 8;
        v6 = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 563, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( s_presenceData[v1].nextUpdateTimestamp < v4 )
        goto LABEL_13;
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v7) = 8;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\social\\social_presence.cpp", 547, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v7) )
          __debugbreak();
      }
      if ( dw_presence_put_rate->current.integer + s_presenceData[v1].lastUpdateTimestamp < v4 )
LABEL_13:
        SetPresence(v1);
    }
    else
    {
      Com_PrintError(25, "Setting Demonware presence failed! DWServicesAccess for controller %d not ready\n", (unsigned int)v1);
    }
  }
  if ( ShouldGetPresence(v1) )
  {
    if ( GatherPresenceUsers(v1) )
      BatchFetchPresence(v1);
  }
}

/*
==============
Social_havePlatformPermissionsToBeInvited
==============
*/
bool Social_havePlatformPermissionsToBeInvited(const SocialPresence *presence)
{
  return (presence->m_flags & 8) == 0;
}

