/*
==============
BG_GameStateInfo_ReadBotData
==============
*/

void __fastcall BG_GameStateInfo_ReadBotData(msg_t *msg)
{
  ?BG_GameStateInfo_ReadBotData@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
BG_GameStateInfo_IsBotMatchMakingDataInitialized
==============
*/

bool __fastcall BG_GameStateInfo_IsBotMatchMakingDataInitialized()
{
  return ?BG_GameStateInfo_IsBotMatchMakingDataInitialized@@YA_NXZ();
}

/*
==============
BG_GameStateInfo_GetBotRank
==============
*/

int __fastcall BG_GameStateInfo_GetBotRank(const unsigned int clientNum)
{
  return ?BG_GameStateInfo_GetBotRank@@YAHI@Z(clientNum);
}

/*
==============
BG_GameStateInfo_BotsCountTowardsGameLaunch
==============
*/

bool __fastcall BG_GameStateInfo_BotsCountTowardsGameLaunch()
{
  return ?BG_GameStateInfo_BotsCountTowardsGameLaunch@@YA_NXZ();
}

/*
==============
BG_GameStateInfo_GetBotMember
==============
*/

MPBotPlayerDataContainer *__fastcall BG_GameStateInfo_GetBotMember(const int clientNum)
{
  return ?BG_GameStateInfo_GetBotMember@@YAPEAUMPBotPlayerDataContainer@@H@Z(clientNum);
}

/*
==============
BG_GameStateInfo_ClearBotData
==============
*/

void BG_GameStateInfo_ClearBotData(void)
{
  ?BG_GameStateInfo_ClearBotData@@YAXXZ();
}

/*
==============
BG_GameStateInfo_IsBotMemberPresent
==============
*/

bool __fastcall BG_GameStateInfo_IsBotMemberPresent(const unsigned int clientNum)
{
  return ?BG_GameStateInfo_IsBotMemberPresent@@YA_NI@Z(clientNum);
}

/*
==============
BG_GameStateInfo_DisableGameLaunchWithBots
==============
*/

void BG_GameStateInfo_DisableGameLaunchWithBots(void)
{
  ?BG_GameStateInfo_DisableGameLaunchWithBots@@YAXXZ();
}

/*
==============
BG_Bots_SelectBotsForMPMatch
==============
*/

void BG_Bots_SelectBotsForMPMatch(void)
{
  ?BG_Bots_SelectBotsForMPMatch@@YAXXZ();
}

/*
==============
BG_Bots_AreHumansOnAlliesOnly
==============
*/

bool __fastcall BG_Bots_AreHumansOnAlliesOnly()
{
  return ?BG_Bots_AreHumansOnAlliesOnly@@YA_NXZ();
}

/*
==============
BG_Bots_GetBotsReservedSlotsAllies
==============
*/

int __fastcall BG_Bots_GetBotsReservedSlotsAllies()
{
  return ?BG_Bots_GetBotsReservedSlotsAllies@@YAHXZ();
}

/*
==============
BG_Bots_GetBotsReservedSlotsAxis
==============
*/

int __fastcall BG_Bots_GetBotsReservedSlotsAxis()
{
  return ?BG_Bots_GetBotsReservedSlotsAxis@@YAHXZ();
}

/*
==============
BG_Bots_IsBotMatchMakingAllowedForPlaylist
==============
*/

bool __fastcall BG_Bots_IsBotMatchMakingAllowedForPlaylist()
{
  return ?BG_Bots_IsBotMatchMakingAllowedForPlaylist@@YA_NXZ();
}

/*
==============
BG_GameStateInfo_GetBotMemberReadOnly
==============
*/

const MPBotPlayerDataContainer *__fastcall BG_GameStateInfo_GetBotMemberReadOnly(const int clientNum)
{
  return ?BG_GameStateInfo_GetBotMemberReadOnly@@YAPEBUMPBotPlayerDataContainer@@H@Z(clientNum);
}

/*
==============
BG_GameStateInfo_SetupBotsCountsPerTeamForScript
==============
*/

void __fastcall BG_GameStateInfo_SetupBotsCountsPerTeamForScript(int maxPlayers, int teamCount)
{
  ?BG_GameStateInfo_SetupBotsCountsPerTeamForScript@@YAXHH@Z(maxPlayers, teamCount);
}

/*
==============
BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized
==============
*/

void __fastcall BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(bool hasBeenInit)
{
  ?BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized@@YAX_N@Z(hasBeenInit);
}

/*
==============
BG_GameStateInfo_WriteBotData
==============
*/

void __fastcall BG_GameStateInfo_WriteBotData(msg_t *msg)
{
  ?BG_GameStateInfo_WriteBotData@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
BG_GameStateInfo_EnableGameLaunchWithBots
==============
*/

void BG_GameStateInfo_EnableGameLaunchWithBots(void)
{
  ?BG_GameStateInfo_EnableGameLaunchWithBots@@YAXXZ();
}

/*
==============
BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData
==============
*/

void __fastcall BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData(const MPBotPlayerData *botPlayerDataIn, MPBotPlayerDisplayStrings *botDisplayDataOut)
{
  ?BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData@@YAXPEBUMPBotPlayerData@@PEAUMPBotPlayerDisplayStrings@@@Z(botPlayerDataIn, botDisplayDataOut);
}

/*
==============
BG_Bots_AreHumansOnAlliesOnly
==============
*/
bool BG_Bots_AreHumansOnAlliesOnly()
{
  int v0; 
  int PlaylistId; 

  v0 = 0;
  while ( !Live_IsUserSignedIn(v0) )
  {
    if ( ++v0 >= 8 )
    {
      v0 = -1;
      break;
    }
  }
  PlaylistId = BG_Bots_GetPlaylistId(v0);
  return Playlist_GetHumansOnAlliesOnly(PlaylistId);
}

/*
==============
BG_Bots_GetBotsReservedSlotsAllies
==============
*/
unsigned int BG_Bots_GetBotsReservedSlotsAllies()
{
  int v0; 
  int PlaylistId; 

  v0 = 0;
  while ( !Live_IsUserSignedIn(v0) )
  {
    if ( ++v0 >= 8 )
    {
      v0 = -1;
      break;
    }
  }
  PlaylistId = BG_Bots_GetPlaylistId(v0);
  return Playlist_GetBotsReservedSlotsAllies(PlaylistId);
}

/*
==============
BG_Bots_GetBotsReservedSlotsAxis
==============
*/
unsigned int BG_Bots_GetBotsReservedSlotsAxis()
{
  int v0; 
  int PlaylistId; 

  v0 = 0;
  while ( !Live_IsUserSignedIn(v0) )
  {
    if ( ++v0 >= 8 )
    {
      v0 = -1;
      break;
    }
  }
  PlaylistId = BG_Bots_GetPlaylistId(v0);
  return Playlist_GetBotsReservedSlotsAxis(PlaylistId);
}

/*
==============
BG_Bots_GetControllerIndex
==============
*/
__int64 BG_Bots_GetControllerIndex()
{
  unsigned int v0; 

  v0 = 0;
  while ( !Live_IsUserSignedIn(v0) )
  {
    if ( (int)++v0 >= 8 )
      return 0xFFFFFFFFi64;
  }
  return v0;
}

/*
==============
BG_Bots_GetPlaylistId
==============
*/
int BG_Bots_GetPlaylistId(int controllerIndex)
{
  const dvar_t *v1; 

  v1 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return Playlist_GetPlaylistIdForNum(v1->current.integer);
}

/*
==============
BG_Bots_IsBotMatchMakingAllowedForPlaylist
==============
*/
bool BG_Bots_IsBotMatchMakingAllowedForPlaylist()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int ControllerIndex; 
  int PlaylistId; 

  if ( Live_IsInSystemlinkLobby() )
    return 0;
  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled || (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return 0;
  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  ControllerIndex = BG_Bots_GetControllerIndex();
  PlaylistId = BG_Bots_GetPlaylistId(ControllerIndex);
  return ControllerIndex >= 0 && Playlist_GetBotMatchMakingEnabled(PlaylistId);
}

/*
==============
BG_Bots_SelectBotsForMPMatch
==============
*/
void BG_Bots_SelectBotsForMPMatch(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v3; 

  if ( !BG_Bots_IsBotMatchMakingAllowedForPlaylist() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 317, ASSERT_TYPE_ASSERT, "(BG_Bots_IsBotMatchMakingAllowedForPlaylist())", (const char *)&queryFormat, "BG_Bots_IsBotMatchMakingAllowedForPlaylist()") )
    __debugbreak();
  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 318, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_xblive_privatematch, \"xblive_privatematch\" ))", (const char *)&queryFormat, "!Dvar_GetBool( xblive_privatematch )") )
    __debugbreak();
  v1 = DVARINT_party_teamCount;
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v3 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  BG_GameStateInfo_SetupBotsCountsPerTeamForScript(v3->current.integer, integer);
  BG_Bots_SetupBotData();
}

/*
==============
BG_Bots_SelectRandomBotNames
==============
*/
void BG_Bots_SelectRandomBotNames(int *botNameIndices, int count)
{
  __int64 v2; 
  StringTable *v4; 
  int v5; 
  int v6; 
  int *v7; 
  const char *ColumnValueForRow; 
  const char *v9; 
  __int64 v10; 
  signed __int64 v11; 
  const char *v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  StringTable *tablePtr; 

  v2 = count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 155, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  StringTable_GetAsset(BOT_NAMES_TABLE, (const StringTable **)&tablePtr);
  v4 = tablePtr;
  if ( tablePtr )
  {
    v5 = 0;
    memset_0(botNameIndices, -1, 4 * v2);
    memset_0(botNameDeck, -1, sizeof(botNameDeck));
    v6 = 0;
    v7 = botNameDeck;
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(v4, v6, 0);
      v9 = ColumnValueForRow;
      if ( ColumnValueForRow )
      {
        v10 = 3i64;
        v11 = ColumnValueForRow - "bot";
        v12 = "bot";
        do
        {
          v13 = v12[v11];
          v14 = v10;
          v15 = *v12++;
          --v10;
          if ( !v14 )
            break;
          if ( v13 != v15 )
            goto LABEL_13;
        }
        while ( v13 );
        ++v5;
        *v7++ = v6;
      }
LABEL_13:
      ++v6;
      if ( !v9 || !*v9 || (__int64)v7 >= (__int64)&unk_148A5D470 )
        break;
      v4 = tablePtr;
    }
    if ( v5 <= (int)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(botNameCount > count)", (const char *)&queryFormat, "botNameCount > count") )
      __debugbreak();
    v16 = 0i64;
    do
    {
      while ( 1 )
      {
        v17 = rand() % v5;
        v18 = v17;
        if ( v17 >= (unsigned int)v5 )
        {
          LODWORD(v21) = v5;
          LODWORD(v20) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( testValue ) < (unsigned)( botNameCount )", "testValue doesn't index botNameCount\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v19 = 0i64;
        if ( v2 <= 0 )
          break;
        while ( botNameIndices[v19] != botNameDeck[v18] )
        {
          if ( ++v19 >= v2 )
            goto LABEL_27;
        }
      }
LABEL_27:
      botNameIndices[v16++] = botNameDeck[v18];
    }
    while ( v16 < v2 );
  }
  else
  {
    Com_PrintError(1, "ERROR: bot name file %s not found!\n", BOT_NAMES_TABLE);
    memset_0(botNameIndices, 0, 4 * v2);
  }
}

/*
==============
BG_Bots_SetupBotData
==============
*/
char BG_Bots_SetupBotData()
{
  const dvar_t *v0; 
  __int64 unsignedInt; 
  int BotsTeamLimit; 
  int v3; 
  const PartyData *PartyData; 
  int v5; 
  int ClientSkill; 
  signed int v7; 
  __int64 v8; 
  unsigned int v9; 
  MPBotPlayerDataContainer *BotMember; 
  __int16 v11; 
  int v12; 
  unsigned int v13; 
  GameStateInfo *v14; 
  __int64 v16; 
  __int64 v17; 
  bool selectedOperatorIndex; 
  CustomizationModels customizationEast; 
  __int64 v20; 
  int botNameIndices[200]; 

  v0 = DVARINT_party_teamCount;
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  unsignedInt = v0->current.unsignedInt;
  if ( (_DWORD)unsignedInt == 2 )
  {
    BotsTeamLimit = BG_GetBotsTeamLimit(1);
    v3 = BG_GetBotsTeamLimit(0) + BotsTeamLimit;
  }
  else
  {
    if ( (int)unsignedInt >= 2 )
    {
      Com_PrintWarning(25, "Not making any bots because party_teamCount==%d\n", unsignedInt);
      goto LABEL_30;
    }
    v3 = BG_GetBotsTeamLimit(0);
  }
  if ( (unsigned int)v3 >= 0xC9 )
  {
    LODWORD(v17) = 201;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(unsigned)( numBotsToMake ) < (unsigned)( 200 + 1 )", "numBotsToMake doesn't index MAX_CLIENTS_MP + 1\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( v3 )
  {
    PartyData = Lobby_GetPartyData();
    v5 = 0;
    v20 = 0i64;
    ClientSkill = 0;
    v7 = 0;
    while ( !Party_IsHost(PartyData, v7) && !Party_IsMemberLocalPlayer(PartyData, v7) )
    {
      if ( ++v7 >= 200 )
        goto LABEL_18;
    }
    PlayercardCache_GetMPActiveCustomizationData(PartyData->partyMembers[v7].playerUID, PartyData->partyMembers[v7].info.gamertag, &selectedOperatorIndex, &customizationEast, &customizationEast);
    ClientSkill = Party_GetClientSkill(PartyData, v7);
LABEL_18:
    BG_Bots_SelectRandomBotNames(botNameIndices, 200);
    Com_Printf(25, "BG_Bots_SelectBotsForMPMatch - Filling out mp bot data with local host supplied information\n");
    if ( v3 > 0 )
    {
      v8 = 0i64;
      v9 = HIDWORD(v20);
      do
      {
        BotMember = BG_GameStateInfo_GetBotMember(v5);
        BotMember->isDataValid = 1;
        v11 = rand();
        v12 = botNameIndices[v8];
        BotMember->botPlayerData.aiBehaviorId = v11 % 1000;
        if ( (v12 < 0 || (unsigned int)v12 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12, "signed", v12) )
          __debugbreak();
        BotMember->botPlayerData.botNameIndex = v12;
        if ( (unsigned int)(ClientSkill + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)ClientSkill, "signed", ClientSkill) )
          __debugbreak();
        BotMember->botPlayerData.aiTrueSkillRating = ClientSkill;
        *(_WORD *)&BotMember->botPlayerData.botLoadout = 0;
        BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData(&BotMember->botPlayerData, &BotMember->botDisplayData);
        v13 = v20;
        BotMember->botPlayerData.botCustomization.modelIndex[0] = v20;
        ++v5;
        ++v8;
        BotMember->botPlayerData.botCustomization.modelIndex[1] = v9;
        BotMember->botPlayerData.botCustomization.modelIndex[2] = v13;
      }
      while ( v8 < v3 );
    }
  }
LABEL_30:
  v14 = GameStateInfo_Get();
  if ( v14 )
  {
    v14->mpBotDataInitialized = 1;
  }
  else
  {
    LOBYTE(v14) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo");
    if ( (_BYTE)v14 )
      __debugbreak();
    MEMORY[0x44E9] = 1;
  }
  return (char)v14;
}

/*
==============
BG_GameStateInfo_BotsCountTowardsGameLaunch
==============
*/
__int64 BG_GameStateInfo_BotsCountTowardsGameLaunch()
{
  GameStateInfo *v0; 

  v0 = GameStateInfo_Get();
  if ( v0 )
    return v0->mpBotsEnableGameLaunchWithBots;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 379, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  return MEMORY[0x44E8];
}

/*
==============
BG_GameStateInfo_ClearBotData
==============
*/
void BG_GameStateInfo_ClearBotData(void)
{
  GameStateInfo *v0; 

  Com_Printf(25, "BG_GameStateInfo_ClearBotData - Erasing all bot data.\n");
  v0 = GameStateInfo_Get();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 330, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  memset_0(v0->botMMInfo, 0, sizeof(v0->botMMInfo));
  BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(0);
  BG_SetBotsConnectType(0);
  BG_SetBotsTeamLimit(0, 0);
  BG_SetBotsTeamLimit(1, 0);
}

/*
==============
BG_GameStateInfo_DisableGameLaunchWithBots
==============
*/
void BG_GameStateInfo_DisableGameLaunchWithBots(void)
{
  GameStateInfo *v0; 

  v0 = GameStateInfo_Get();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( v0->mpBotsEnableGameLaunchWithBots )
  {
    Com_Printf(25, "BG_GameStateInfo_DisableGameLaunchWithBots().\n");
    v0->mpBotsEnableGameLaunchWithBots = 0;
  }
}

/*
==============
BG_GameStateInfo_EnableGameLaunchWithBots
==============
*/
void BG_GameStateInfo_EnableGameLaunchWithBots(void)
{
  GameStateInfo *v0; 

  Com_Printf(25, "BG_GameStateInfo_EnableGameLaunchWithBots().\n");
  v0 = GameStateInfo_Get();
  if ( v0 )
  {
    v0->mpBotsEnableGameLaunchWithBots = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 359, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    MEMORY[0x44E8] = 1;
  }
}

/*
==============
BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData
==============
*/
void BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData(const MPBotPlayerData *botPlayerDataIn, MPBotPlayerDisplayStrings *botDisplayDataOut)
{
  int botNameIndex; 
  const char *ColumnValueForRow; 
  int RowCount; 
  StringTable *tablePtr; 

  if ( (!botPlayerDataIn || !botDisplayDataOut) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 501, ASSERT_TYPE_ASSERT, "(botPlayerDataIn && botDisplayDataOut)", (const char *)&queryFormat, "botPlayerDataIn && botDisplayDataOut") )
    __debugbreak();
  botNameIndex = botPlayerDataIn->botNameIndex;
  StringTable_GetAsset(off_145039A60, (const StringTable **)&tablePtr);
  if ( tablePtr )
  {
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( botNameIndex < RowCount )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, botNameIndex, 1);
    }
    else
    {
      Com_PrintError(1, "ERROR: bot index %d out of range for %d in file %s!\n", (unsigned int)botNameIndex, (unsigned int)RowCount, off_145039A60);
      ColumnValueForRow = "outofrange";
    }
  }
  else
  {
    Com_PrintError(1, "ERROR: bot name file %s not found!\n", off_145039A60);
    ColumnValueForRow = "filemissing";
  }
  Core_strcpy(botDisplayDataOut->displayName, 0x24ui64, ColumnValueForRow);
  Core_strcpy(botDisplayDataOut->clanTag, 0xBui64, "[^3Bot]");
}

/*
==============
BG_GameStateInfo_GetBotMember
==============
*/
MPBotPlayerDataContainer *BG_GameStateInfo_GetBotMember(const int clientNum)
{
  __int64 v1; 
  GameStateInfo *v2; 
  __int64 v4; 

  v1 = clientNum;
  v2 = GameStateInfo_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 387, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xC8 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( gInfo->botMMInfo ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( gInfo->botMMInfo )\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  return &v2->botMMInfo[v1];
}

/*
==============
BG_GameStateInfo_GetBotMemberReadOnly
==============
*/
MPBotPlayerDataContainer *BG_GameStateInfo_GetBotMemberReadOnly(const int clientNum)
{
  __int64 v1; 
  GameStateInfo *v2; 
  __int64 v4; 

  v1 = clientNum;
  v2 = GameStateInfo_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 396, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xC8 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 397, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( gInfo->botMMInfo ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( gInfo->botMMInfo )\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  return &v2->botMMInfo[v1];
}

/*
==============
BG_GameStateInfo_GetBotRank
==============
*/
__int64 BG_GameStateInfo_GetBotRank(const unsigned int clientNum)
{
  __int64 v1; 
  GameStateInfo *v2; 
  __int64 result; 
  __int64 v4; 

  v1 = clientNum;
  v2 = GameStateInfo_Get();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 405, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0xC8 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( gInfo->botMMInfo ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( gInfo->botMMInfo )\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  result = (unsigned int)v2->botMMInfo[v1].botPlayerData.aiTrueSkillRating;
  if ( (int)result > 50 )
    result = 50i64;
  if ( (int)result < 1 )
    return 1i64;
  return result;
}

/*
==============
BG_GameStateInfo_IsBotMatchMakingDataInitialized
==============
*/
__int64 BG_GameStateInfo_IsBotMatchMakingDataInitialized()
{
  GameStateInfo *v0; 

  v0 = GameStateInfo_Get();
  if ( v0 )
    return v0->mpBotDataInitialized;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 350, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  return MEMORY[0x44E9];
}

/*
==============
BG_GameStateInfo_IsBotMemberPresent
==============
*/
bool BG_GameStateInfo_IsBotMemberPresent(const unsigned int clientNum)
{
  bool result; 

  result = BG_Bots_IsBotMatchMakingAllowedForPlaylist();
  if ( result )
    return BG_GameStateInfo_GetBotMember(clientNum)->isDataValid;
  return result;
}

/*
==============
BG_GameStateInfo_ReadBotData
==============
*/
void BG_GameStateInfo_ReadBotData(msg_t *msg)
{
  int i; 
  MPBotPlayerDataContainer *BotMember; 
  char v4; 

  BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(0);
  if ( MSG_ReadBit(msg) && MSG_ReadBit(msg) )
  {
    Com_Printf(25, "BG_GameStateInfo_ReadBotData - Overwriting mp bot data with remote host supplied information\n");
    for ( i = 0; i < 200; ++i )
    {
      BotMember = BG_GameStateInfo_GetBotMember(i);
      if ( MSG_ReadBit(msg) == 1 )
      {
        MSG_ReadData(msg, 36, &BotMember->botPlayerData, 36);
        BG_GameStateInfo_FixupBotDisplayDataFromBotPlayerData(&BotMember->botPlayerData, &BotMember->botDisplayData);
        v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      BotMember->isDataValid = v4;
    }
    BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(1);
  }
}

/*
==============
BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized
==============
*/
void BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(bool hasBeenInit)
{
  GameStateInfo *v2; 

  v2 = GameStateInfo_Get();
  if ( v2 )
  {
    v2->mpBotDataInitialized = hasBeenInit;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    MEMORY[0x44E9] = hasBeenInit;
  }
}

/*
==============
BG_GameStateInfo_SetupBotsCountsPerTeamForScript
==============
*/
void BG_GameStateInfo_SetupBotsCountsPerTeamForScript(int maxPlayers, int teamCount)
{
  GameStateInfo *v4; 
  int v5; 
  int v6; 
  signed int v7; 
  int v8; 
  int v9; 
  int PlaylistId; 
  int v11; 
  int v12; 
  unsigned int BotsReservedSlotsAllies; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int BotsReservedSlotsAxis; 

  Com_Printf(16, "BG_GameStateInfo_SetupBotsCountsPerTeamForScript( %d )\n", (unsigned int)maxPlayers);
  BG_SetBotsConnectType(0);
  BG_SetBotsTeamLimit(0, 0);
  BG_SetBotsTeamLimit(1, 0);
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
  {
    if ( teamCount == 2 )
    {
      v5 = maxPlayers;
      v6 = 0;
      v7 = v5 / 2;
      v8 = 0;
      while ( 1 )
      {
        v9 = -1;
        if ( Live_IsUserSignedIn(v8) )
          break;
        if ( ++v8 >= 8 )
        {
          v8 = -1;
          break;
        }
      }
      PlaylistId = BG_Bots_GetPlaylistId(v8);
      if ( (int)Playlist_GetBotsReservedSlotsAllies(PlaylistId) > v7 )
      {
        v11 = 0;
        while ( !Live_IsUserSignedIn(v11) )
        {
          if ( ++v11 >= 8 )
          {
            v11 = -1;
            break;
          }
        }
        v12 = BG_Bots_GetPlaylistId(v11);
        BotsReservedSlotsAllies = Playlist_GetBotsReservedSlotsAllies(v12);
        Com_PrintError(1, "bots_reserved_slots_allies [%d] is larger than (party_maxplayers/2) [%d] in playlist!", BotsReservedSlotsAllies, (unsigned int)v7);
      }
      v14 = 0;
      while ( !Live_IsUserSignedIn(v14) )
      {
        if ( ++v14 >= 8 )
        {
          v14 = -1;
          break;
        }
      }
      v15 = BG_Bots_GetPlaylistId(v14);
      if ( (int)Playlist_GetBotsReservedSlotsAxis(v15) > v7 )
      {
        while ( !Live_IsUserSignedIn(v6) )
        {
          if ( ++v6 >= 8 )
            goto LABEL_26;
        }
        v9 = v6;
LABEL_26:
        v16 = BG_Bots_GetPlaylistId(v9);
        BotsReservedSlotsAxis = Playlist_GetBotsReservedSlotsAxis(v16);
        Com_PrintError(1, "bots_reserved_slots_axis [%d] is larger than (party_maxplayers/2) [%d] in playlist!", BotsReservedSlotsAxis, (unsigned int)v7);
      }
      if ( v7 )
      {
        BG_SetBotsConnectType(2u);
        BG_SetBotsDifficulty(0, BOT_DIFFICULTY_RECRUIT);
        BG_SetBotsDifficulty(1, BOT_DIFFICULTY_RECRUIT);
        BG_SetBotsTeamLimit(0, v7);
        BG_SetBotsTeamLimit(1, v7);
      }
    }
    else if ( teamCount )
    {
      Com_PrintWarning(25, "Bot counts for script not being set because teamCount==%d\n", (unsigned int)teamCount);
    }
    else if ( maxPlayers )
    {
      BG_SetBotsConnectType(2u);
      BG_SetBotsDifficulty(0, BOT_DIFFICULTY_RECRUIT);
      BG_SetBotsDifficulty(1, BOT_DIFFICULTY_RECRUIT);
      BG_SetBotsTeamLimit(0, maxPlayers);
      BG_SetBotsTeamLimit(1, maxPlayers);
    }
  }
  else
  {
    Com_Printf(25, "BG_GameStateInfo_ClearBotData - Erasing all bot data.\n");
    v4 = GameStateInfo_Get();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 330, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    memset_0(v4->botMMInfo, 0, sizeof(v4->botMMInfo));
    BG_GameStateInfo_SetBotMatchMakingDataHasBeenInitialized(0);
    BG_SetBotsConnectType(0);
    BG_SetBotsTeamLimit(0, 0);
    BG_SetBotsTeamLimit(1, 0);
  }
}

/*
==============
BG_GameStateInfo_WriteBotData
==============
*/
void BG_GameStateInfo_WriteBotData(msg_t *msg)
{
  bool IsBotMatchMakingAllowedForPlaylist; 
  msg_t *v3; 
  GameStateInfo *v4; 
  int i; 
  MPBotPlayerDataContainer *BotMember; 

  IsBotMatchMakingAllowedForPlaylist = BG_Bots_IsBotMatchMakingAllowedForPlaylist();
  v3 = msg;
  if ( !IsBotMatchMakingAllowedForPlaylist )
    goto LABEL_12;
  MSG_WriteBit1(msg);
  v4 = GameStateInfo_Get();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_botdata_mp.cpp", 350, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  v3 = msg;
  if ( v4->mpBotDataInitialized )
  {
    MSG_WriteBit1(msg);
    Com_Printf(25, "BG_GameStateInfo_WriteBotData - Filling out mp bot data with remote host supplied information\n");
    for ( i = 0; i < 200; ++i )
    {
      BotMember = BG_GameStateInfo_GetBotMember(i);
      if ( BotMember->isDataValid )
      {
        MSG_WriteBit1(msg);
        MSG_WriteData(msg, &BotMember->botPlayerData, 36);
      }
      else
      {
        MSG_WriteBit0(msg);
      }
    }
  }
  else
  {
LABEL_12:
    MSG_WriteBit0(v3);
  }
}

