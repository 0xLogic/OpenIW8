/*
==============
PlayerCardData_GetCurTime
==============
*/

int __fastcall PlayerCardData_GetCurTime(const LocalClientNum_t localClientNum)
{
  return ?PlayerCardData_GetCurTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PlayerCards_GetTheaterPlayerData
==============
*/

const PlayerProfileData *__fastcall PlayerCards_GetTheaterPlayerData(const LocalClientNum_t localClientNum)
{
  return ?PlayerCards_GetTheaterPlayerData@@YAPEBUPlayerProfileData@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCard_InitGame
==============
*/

void __fastcall CG_PlayerCard_InitGame(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerCard_InitGame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerCards_AllocateMemory
==============
*/

void __fastcall CG_PlayerCards_AllocateMemory(HunkUser *hunkUser, const unsigned int maxLocalClients, const unsigned int maxCharacters)
{
  ?CG_PlayerCards_AllocateMemory@@YAXPEAUHunkUser@@II@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
PlayerCardData_GetMultInternalVal
==============
*/

int __fastcall PlayerCardData_GetMultInternalVal(DDLContext *buffer, const char *maxKey, const char *currentKey, const char *index)
{
  return ?PlayerCardData_GetMultInternalVal@@YAHPEAUDDLContext@@PEBD11@Z(buffer, maxKey, currentKey, index);
}

/*
==============
PlayerCards_SetCachedPlayerData
==============
*/

void __fastcall PlayerCards_SetCachedPlayerData(const LocalClientNum_t localClientNum, const int clientNum, const int cardSlot)
{
  ?PlayerCards_SetCachedPlayerData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, clientNum, cardSlot);
}

/*
==============
CG_PlayerCards_ShutdownMemory
==============
*/

void CG_PlayerCards_ShutdownMemory(void)
{
  ?CG_PlayerCards_ShutdownMemory@@YAXXZ();
}

/*
==============
CG_PlayerCard_InitGame
==============
*/
void CG_PlayerCard_InitGame(const LocalClientNum_t localClientNum)
{
  unsigned int i; 
  __int64 v3; 
  __int64 v4; 

  if ( !s_playerCardCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 138, ASSERT_TYPE_ASSERT, "(s_playerCardCache)", (const char *)&queryFormat, "s_playerCardCache") )
    __debugbreak();
  if ( !s_playerCardCacheNumSlots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 139, ASSERT_TYPE_ASSERT, "(s_playerCardCacheNumSlots)", (const char *)&queryFormat, "s_playerCardCacheNumSlots") )
    __debugbreak();
  for ( i = 0; i < s_playerCardCacheNumSlots; ++i )
  {
    if ( !s_playerCardCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 125, ASSERT_TYPE_ASSERT, "(s_playerCardCache)", (const char *)&queryFormat, "s_playerCardCache") )
      __debugbreak();
    if ( !s_playerCardCacheNumSlots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 126, ASSERT_TYPE_ASSERT, "(s_playerCardCacheNumSlots)", (const char *)&queryFormat, "s_playerCardCacheNumSlots") )
      __debugbreak();
    if ( i >= s_playerCardCacheNumSlots )
    {
      LODWORD(v4) = s_playerCardCacheNumSlots;
      LODWORD(v3) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( s_playerCardCacheNumSlots )", "characterIndex doesn't index s_playerCardCacheNumSlots\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    memcpy_0(&s_playerCardCache[i + localClientNum * s_playerCardCacheNumSlots], &g_DefaultPlayerData, sizeof(PlayerProfileData));
  }
}

/*
==============
CG_PlayerCards_AllocateMemory
==============
*/
void CG_PlayerCards_AllocateMemory(HunkUser *hunkUser, const unsigned int maxLocalClients, const unsigned int maxCharacters)
{
  s_playerCardCache = (PlayerProfileData *)Mem_HunkUser_AllocInternal(hunkUser, 45240 * maxCharacters * maxLocalClients, 8ui64, "CG_PlayerCards_AllocateMemory");
  s_playerCardCacheNumSlots = maxCharacters;
}

/*
==============
CG_PlayerCards_ShutdownMemory
==============
*/
void CG_PlayerCards_ShutdownMemory(void)
{
  s_playerCardCache = NULL;
  s_playerCardCacheNumSlots = 0;
}

/*
==============
PlayerCardData_GetCurTime
==============
*/
int PlayerCardData_GetCurTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
    LODWORD(v8) = 2;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
    return Sys_Milliseconds();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState != CA_ACTIVE )
    return Sys_Milliseconds();
  else
    return CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->time;
}

/*
==============
PlayerCardData_GetMultInternalVal
==============
*/
__int64 PlayerCardData_GetMultInternalVal(DDLContext *buffer, const char *maxKey, const char *currentKey, const char *index)
{
  unsigned int v4; 
  const char *v5; 
  bool v6; 
  unsigned int v8; 
  char i; 
  char v11; 
  int v12; 
  const char *v13; 
  BOOL v14; 
  int InternalInt; 
  char j; 
  unsigned int navHashes; 
  int v19; 

  v4 = 0;
  v5 = maxKey;
  v6 = maxKey == NULL;
  v8 = 0;
  if ( !v6 )
  {
    for ( i = *v5; *v5; i = *v5 )
    {
      ++v5;
      v8 = i + 31 * v8;
    }
  }
  navHashes = v8;
  if ( index )
  {
    v11 = *index;
    v12 = 0;
    if ( *index )
    {
      v13 = index;
      do
      {
        ++v13;
        v12 = v11 + 31 * v12;
        v11 = *v13;
      }
      while ( *v13 );
    }
    v19 = v12;
  }
  v14 = index != NULL;
  InternalInt = Com_PlayerData_GetInternalInt(&navHashes, v14 + 1, buffer, STATSGROUP_RANKED);
  if ( currentKey )
  {
    for ( j = *currentKey; *currentKey; j = *currentKey )
    {
      ++currentKey;
      v4 = j + 31 * v4;
    }
  }
  navHashes = v4;
  return (unsigned int)(InternalInt - Com_PlayerData_GetInternalInt(&navHashes, v14 + 1, buffer, STATSGROUP_RANKED));
}

/*
==============
PlayerCard_GetCachedProfileData
==============
*/
PlayerProfileData *PlayerCard_GetCachedProfileData(const LocalClientNum_t localClientNum, const unsigned int characterIndex)
{
  __int64 v5; 
  unsigned int v6; 

  if ( !s_playerCardCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 125, ASSERT_TYPE_ASSERT, "(s_playerCardCache)", (const char *)&queryFormat, "s_playerCardCache") )
    __debugbreak();
  if ( !s_playerCardCacheNumSlots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 126, ASSERT_TYPE_ASSERT, "(s_playerCardCacheNumSlots)", (const char *)&queryFormat, "s_playerCardCacheNumSlots") )
    __debugbreak();
  if ( characterIndex >= s_playerCardCacheNumSlots )
  {
    v6 = s_playerCardCacheNumSlots;
    LODWORD(v5) = characterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( s_playerCardCacheNumSlots )", "characterIndex doesn't index s_playerCardCacheNumSlots\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &s_playerCardCache[characterIndex + localClientNum * s_playerCardCacheNumSlots];
}

/*
==============
PlayerCards_GetTheaterPlayerData
==============
*/
PlayerProfileData *PlayerCards_GetTheaterPlayerData(const LocalClientNum_t localClientNum)
{
  return &g_DefaultPlayerData;
}

/*
==============
PlayerCards_PopulatePlayerDataForClient
==============
*/
void PlayerCards_PopulatePlayerDataForClient(LocalClientNum_t localClientNum, int clientNum, PlayerProfileData *playercard)
{
  __int64 v3; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  CgStatic *v7; 
  const characterInfo_t *CharacterInfo; 
  CgEntitySystem *v9; 
  __int64 v10; 
  const characterInfo_t *v11; 
  team_t team; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  char nameBuf[40]; 

  v3 = localClientNum;
  v5 = clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v15 = CgStatic::ms_allocatedCount;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v3] )
  {
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v15) )
      __debugbreak();
  }
  v7 = CgStatic::ms_cgameStaticsArray[v3];
  CharacterInfo = CgStatic::GetCharacterInfo(v7, v5);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 178, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && (int)v5 >= cls.maxClients )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned int)v5 >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v15) = ComCharacterLimits::ms_gameData.m_characterCount;
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v15) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v14) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v3] )
      {
        LODWORD(v15) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
          __debugbreak();
      }
      v9 = CgEntitySystem::ms_entitySystemArray[v3];
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( (v9->m_entities[v5].flags & 1) != 0 )
      {
        if ( CL_GetAgentName((LocalClientNum_t)v3, v5, v9->m_entities[v5].nextState.otherEntityNum, nameBuf, 0x24ui64) )
          Core_strcpy(playercard->name, 0x24ui64, nameBuf);
      }
    }
    else
    {
      v10 = (__int64)v7->GetClientInfo(v7, v5);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 199, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      playercard->rank_mp = *(_DWORD *)(v10 + 104);
      playercard->prestige_mp = *(_DWORD *)(v10 + 108);
      playercard->rank_alien = *(_DWORD *)(v10 + 112);
      playercard->prestige_alien = *(_DWORD *)(v10 + 116);
      playercard->team = CharacterInfo->team;
      CG_Players_GetPlayerGamertag((const LocalClientNum_t)v3, v5, 0x2Fui64, playercard->name);
      v11 = CgStatic::GetCharacterInfo(v7, LocalClientGlobals->clientNum);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\playercards\\playercards_client.cpp", 212, ASSERT_TYPE_ASSERT, "(localCharacterInfo)", (const char *)&queryFormat, "localCharacterInfo") )
        __debugbreak();
      if ( (_DWORD)v5 == LocalClientGlobals->clientNum || (team = v11->team) != TEAM_ZERO && team == CharacterInfo->team )
        v13 = Party_ClientIsInMyParty(*(_DWORD *)v10);
      else
        v13 = 0;
      playercard->myParty = v13;
      if ( !CL_Anonymization_ShouldAnonymizeClient((const LocalClientNum_t)v3, v5) )
      {
        Core_strcpy(playercard->clanAbbrev, 6ui64, (const char *)(v10 + 124));
        playercard->clanTagType = *(_BYTE *)(v10 + 133);
      }
    }
  }
}

/*
==============
PlayerCards_SetCachedPlayerData
==============
*/
void PlayerCards_SetCachedPlayerData(const LocalClientNum_t localClientNum, const int clientNum, const int cardSlot)
{
  PlayerProfileData *CachedProfileData; 

  CachedProfileData = PlayerCard_GetCachedProfileData(localClientNum, cardSlot);
  PlayerCards_PopulatePlayerDataForClient(localClientNum, clientNum, CachedProfileData);
}

