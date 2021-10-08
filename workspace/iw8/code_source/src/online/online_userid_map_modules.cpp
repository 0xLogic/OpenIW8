/*
==============
UserIdMap_InitModules
==============
*/

void UserIdMap_InitModules(void)
{
  ?UserIdMap_InitModules@@YAXXZ();
}

/*
==============
FriendsGetPlatformIdFromXuidCallback
==============
*/
char FriendsGetPlatformIdFromXuidCallback(const XUID xuid, unsigned __int64 *platformId)
{
  int v4; 
  Online_Friends *Instance; 
  unsigned int Index; 
  Online_Friends *v7; 
  unsigned __int64 PlatformUserId; 

  v4 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerActive(v4) )
    {
      Instance = Online_Friends::GetInstance();
      Index = Online_Friends::FindIndex(Instance, v4, xuid);
      if ( Index != -1 )
      {
        v7 = Online_Friends::GetInstance();
        PlatformUserId = Online_Friends::GetPlatformUserId(v7, v4, Index);
        *platformId = PlatformUserId;
        if ( PlatformUserId )
          break;
      }
    }
    if ( ++v4 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
FriendsGetXuidFromPlatformIdCallback
==============
*/
char FriendsGetXuidFromPlatformIdCallback(const unsigned __int64 platformId, XUID *xuid)
{
  int v4; 
  Online_Friends *Instance; 
  unsigned int IndexByPlatformId; 
  Online_Friends *v7; 
  const XUID *UserId; 
  const XUID *v9; 
  XUID result; 
  XUID v12; 

  v4 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerActive(v4) )
    {
      Instance = Online_Friends::GetInstance();
      IndexByPlatformId = Online_Friends::FindIndexByPlatformId(Instance, v4, platformId);
      if ( IndexByPlatformId != -1 )
      {
        v7 = Online_Friends::GetInstance();
        UserId = Online_Friends::GetUserId(v7, &result, v4, IndexByPlatformId);
        XUID::operator=(xuid, UserId);
        v9 = XUID::NullXUID(&v12);
        if ( XUID::operator!=(xuid, v9) )
          break;
      }
    }
    if ( ++v4 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
LobbbyPartyGetPlatformIdFromXuidCallback
==============
*/
bool LobbbyPartyGetPlatformIdFromXuidCallback(const XUID xuid, unsigned __int64 *platformId)
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  return PartyGetPlatformIdFromXuid(PartyData, xuid, platformId);
}

/*
==============
LobbyPartyGetXuidFromPlatformIdCallback
==============
*/
bool LobbyPartyGetXuidFromPlatformIdCallback(const unsigned __int64 platformId, XUID *xuid)
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  return PartyGetXuidFromPlatformId(PartyData, platformId, xuid);
}

/*
==============
LocalUserGetPlatformIdFromXuidCallback
==============
*/
char LocalUserGetPlatformIdFromXuidCallback(const XUID xuid, unsigned __int64 *platformId)
{
  int v3; 
  XUID *v4; 
  XUID xuida; 
  XUID result; 

  xuida.m_id = xuid.m_id;
  v3 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerActive(v3) && Live_IsUserSignedInToDemonware(v3) )
    {
      v4 = Live_GetXuid(&result, v3);
      if ( XUID::operator==(v4, &xuida) )
        break;
    }
    if ( ++v3 >= 8 )
      return 0;
  }
  *platformId = Live_GetPlatformUserId(v3);
  return 1;
}

/*
==============
LocalUserGetXuidFromPlatformIdCallback
==============
*/
char LocalUserGetXuidFromPlatformIdCallback(const unsigned __int64 platformId, XUID *xuid)
{
  int v4; 
  const XUID *v6; 
  XUID result; 

  v4 = 0;
  while ( !CL_Mgr_IsControllerActive(v4) || !Live_IsUserSignedInToDemonware(v4) || Live_GetPlatformUserId(v4) != platformId )
  {
    if ( ++v4 >= 8 )
      return 0;
  }
  v6 = Live_GetXuid(&result, v4);
  XUID::operator=(xuid, v6);
  return 1;
}

/*
==============
PartyGetPlatformIdFromXuid
==============
*/
char PartyGetPlatformIdFromXuid(PartyData *party, const XUID xuid, unsigned __int64 *platformId)
{
  unsigned int v5; 
  XUID *v6; 
  XUID xuida; 
  XUID result; 

  xuida.m_id = xuid.m_id;
  v5 = 0;
  while ( 1 )
  {
    if ( Party_IsMemberIndexDataAvailable(party, v5) )
    {
      v6 = Party_GetXuid(&result, party, v5);
      if ( XUID::operator==(v6, &xuida) )
        break;
    }
    if ( (int)++v5 >= 200 )
      return 0;
  }
  *platformId = Party_GetPlatformId(party, v5);
  return 1;
}

/*
==============
PartyGetXuidFromPlatformId
==============
*/
char PartyGetXuidFromPlatformId(PartyData *party, const unsigned __int64 platformId, XUID *xuid)
{
  unsigned int v6; 
  const XUID *v8; 
  XUID result; 

  v6 = 0;
  while ( !Party_IsMemberIndexDataAvailable(party, v6) || Party_GetPlatformId(party, v6) != platformId )
  {
    if ( (int)++v6 >= 200 )
      return 0;
  }
  v8 = Party_GetXuid(&result, party, v6);
  XUID::operator=(xuid, v8);
  return 1;
}

/*
==============
PresenceGetPlatformIdFromXuidCallback
==============
*/
char PresenceGetPlatformIdFromXuidCallback(const XUID xuid, unsigned __int64 *platformId)
{
  int v4; 
  SocialPresence *Presence; 

  v4 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerActive(v4) )
    {
      Presence = (SocialPresence *)Social_GetPresence(v4, xuid);
      if ( Presence )
        break;
    }
    if ( ++v4 >= 8 )
      return 0;
  }
  *platformId = SocialPresence::GetPlatformId(Presence);
  return 1;
}

/*
==============
PresenceGetXuidFromPlatformIdCallback
==============
*/
char PresenceGetXuidFromPlatformIdCallback(const unsigned __int64 platformId, XUID *xuid)
{
  int v4; 
  XUID xuidOut; 

  v4 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerActive(v4) )
    {
      XUID::XUID(&xuidOut);
      if ( Social_GetXUIDFromPlatformID(v4, platformId, &xuidOut) )
        break;
    }
    if ( ++v4 >= 8 )
      return 0;
  }
  XUID::operator=(xuid, &xuidOut);
  return 1;
}

/*
==============
PrivatePartyGetPlatformIdFromXuidCallback
==============
*/
char PrivatePartyGetPlatformIdFromXuidCallback(const XUID xuid, unsigned __int64 *platformId)
{
  return PartyGetPlatformIdFromXuid(&g_partyData, xuid, platformId);
}

/*
==============
PrivatePartyGetXuidFromPlatformIdCallback
==============
*/
char PrivatePartyGetXuidFromPlatformIdCallback(const unsigned __int64 platformId, XUID *xuid)
{
  unsigned int v4; 
  const XUID *v6; 
  XUID result; 

  v4 = 0;
  while ( !Party_IsMemberIndexDataAvailable(&g_partyData, v4) || Party_GetPlatformId(&g_partyData, v4) != platformId )
  {
    if ( (int)++v4 >= 200 )
      return 0;
  }
  v6 = Party_GetXuid(&result, &g_partyData, v4);
  XUID::operator=(xuid, v6);
  return 1;
}

/*
==============
UserIdMap_InitModules
==============
*/
void UserIdMap_InitModules(void)
{
  UserIdMap *Instance; 
  UserIdMap *v1; 
  UserIdMap *v2; 
  UserIdMap *v3; 
  UserIdMap *v4; 

  UserIdMapModuleCallback::RegisterCallbacks(&s_localUserIdMapModule, (bool (__fastcall *const)(const unsigned __int64, XUID *))LocalUserGetXuidFromPlatformIdCallback, (bool (__fastcall *const)(const XUID, unsigned __int64 *))LocalUserGetPlatformIdFromXuidCallback);
  Instance = UserIdMap::GetInstance();
  UserIdMap::RegisterMapModule(Instance, MOVEMENT, &s_localUserIdMapModule);
  UserIdMapModuleCallback::RegisterCallbacks(&s_lobbyPartyIdMapModule, LobbyPartyGetXuidFromPlatformIdCallback, LobbbyPartyGetPlatformIdFromXuidCallback);
  v1 = UserIdMap::GetInstance();
  UserIdMap::RegisterMapModule(v1, DODGE, &s_lobbyPartyIdMapModule);
  UserIdMapModuleCallback::RegisterCallbacks(&s_privatePartyIdMapModule, (bool (__fastcall *const)(const unsigned __int64, XUID *))PrivatePartyGetXuidFromPlatformIdCallback, (bool (__fastcall *const)(const XUID, unsigned __int64 *))PrivatePartyGetPlatformIdFromXuidCallback);
  v2 = UserIdMap::GetInstance();
  UserIdMap::RegisterMapModule(v2, COUNT, &s_privatePartyIdMapModule);
  UserIdMapModuleCallback::RegisterCallbacks(&s_presenceIdMapModule, (bool (__fastcall *const)(const unsigned __int64, XUID *))PresenceGetXuidFromPlatformIdCallback, (bool (__fastcall *const)(const XUID, unsigned __int64 *))PresenceGetPlatformIdFromXuidCallback);
  v3 = UserIdMap::GetInstance();
  UserIdMap::RegisterMapModule(v3, (const UserIdMap::UserIdMapSystem)4, &s_presenceIdMapModule);
  UserIdMapModuleCallback::RegisterCallbacks(&s_friendsIdMapModule, (bool (__fastcall *const)(const unsigned __int64, XUID *))FriendsGetXuidFromPlatformIdCallback, (bool (__fastcall *const)(const XUID, unsigned __int64 *))FriendsGetPlatformIdFromXuidCallback);
  v4 = UserIdMap::GetInstance();
  UserIdMap::RegisterMapModule(v4, COUNT|DODGE, &s_friendsIdMapModule);
}

