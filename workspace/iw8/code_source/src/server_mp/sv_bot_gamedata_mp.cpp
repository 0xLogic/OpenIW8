/*
==============
SV_ReleaseBotData
==============
*/

void __fastcall SV_ReleaseBotData(int botDataIndex)
{
  ?SV_ReleaseBotData@@YAXH@Z(botDataIndex);
}

/*
==============
SV_ReleaseBotDataForClientIndex
==============
*/

void __fastcall SV_ReleaseBotDataForClientIndex(int clientIndex)
{
  ?SV_ReleaseBotDataForClientIndex@@YAXH@Z(clientIndex);
}

/*
==============
SV_LoadBotMatchMakingData
==============
*/

void __fastcall SV_LoadBotMatchMakingData(MemoryFile *memFile)
{
  ?SV_LoadBotMatchMakingData@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_SetupMPBotData
==============
*/

void SV_SetupMPBotData(void)
{
  ?SV_SetupMPBotData@@YAXXZ();
}

/*
==============
SV_SaveBotMatchMakingData
==============
*/

void __fastcall SV_SaveBotMatchMakingData(MemoryFile *memFile)
{
  ?SV_SaveBotMatchMakingData@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_AssignBotDataToTeam
==============
*/

int __fastcall SV_AssignBotDataToTeam(int team)
{
  return ?SV_AssignBotDataToTeam@@YAHH@Z(team);
}

/*
==============
SV_AssignBotDataToTeam
==============
*/
__int64 SV_AssignBotDataToTeam(int team)
{
  bool *p_sv_isInUse; 
  unsigned int v3; 
  unsigned int v4; 
  const PartyData *PartyData; 

  p_sv_isInUse = &g_svMPBotData[0].sv_isInUse;
  v3 = -1;
  v4 = 0;
  while ( 1 )
  {
    if ( *(p_sv_isInUse - 8) == team && !*p_sv_isInUse && *(p_sv_isInUse - 1) )
    {
      PartyData = Lobby_GetPartyData();
      if ( !Party_IsMemberPresent(PartyData, v4) )
        break;
    }
    ++v4;
    p_sv_isInUse += 88;
    if ( v4 >= 0xC8 )
      goto LABEL_9;
  }
  v3 = v4;
  g_svMPBotData[v4].sv_isInUse = 1;
LABEL_9:
  Com_Printf(131087, "SV_AssignBotDataToTeam: Assigning bot data for index %d for team %d\n", v3, (unsigned int)team);
  return v3;
}

/*
==============
SV_LoadBotMatchMakingData
==============
*/
void SV_LoadBotMatchMakingData(MemoryFile *memFile)
{
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  if ( p )
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    if ( p )
      MemFile_ReadData(memFile, 0x44C0ui64, g_svMPBotData);
  }
}

/*
==============
SV_ReleaseBotData
==============
*/
void SV_ReleaseBotData(int botDataIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = botDataIndex;
  if ( (unsigned int)botDataIndex >= 0xC8 )
  {
    v4 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( botDataIndex ) < (unsigned)( ( sizeof( *array_counter( g_svMPBotData ) ) + 0 ) )", "botDataIndex doesn't index ARRAY_COUNT( g_svMPBotData )\n\t%i not in [0, %i)", botDataIndex, v4) )
      __debugbreak();
  }
  v2 = v1;
  if ( !g_svMPBotData[v1].sv_isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( g_svMPBotData[botDataIndex].sv_isInUse )", (const char *)&queryFormat, "g_svMPBotData[botDataIndex].sv_isInUse") )
    __debugbreak();
  Com_Printf(131087, "SV_ReleaseBotData: Releasing bot data for index %d team %d.\n", (unsigned int)v1, g_svMPBotData[v2].botPlayerData.aiTeam);
  *(_WORD *)&g_svMPBotData[v2].sv_isInUse = -256;
}

/*
==============
SV_ReleaseBotDataForClientIndex
==============
*/
void SV_ReleaseBotDataForClientIndex(int clientIndex)
{
  unsigned int v2; 
  char *i; 
  __int64 v4; 
  unsigned int v6; 

  if ( clientIndex >= SvClient::ms_clientCount )
  {
    v6 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 69, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( SvClient::GetClientCount() )", "clientIndex doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
  }
  Com_Printf(131087, "SV_ReleaseBotDataForClientIndex: Searching for bot data for clientIndex %d \n", (unsigned int)clientIndex);
  v2 = 0;
  for ( i = &g_svMPBotData[0].sv_clientIndex; !*(i - 1) || *i != clientIndex; i += 88 )
  {
    if ( ++v2 >= 0xC8 )
      return;
  }
  v4 = (int)v2;
  if ( !g_svMPBotData[v4].sv_isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( g_svMPBotData[botDataIndex].sv_isInUse )", (const char *)&queryFormat, "g_svMPBotData[botDataIndex].sv_isInUse") )
    __debugbreak();
  Com_Printf(131087, "SV_ReleaseBotData: Releasing bot data for index %d team %d.\n", v2, g_svMPBotData[v4].botPlayerData.aiTeam);
  *(_WORD *)&g_svMPBotData[v4].sv_isInUse = -256;
}

/*
==============
SV_SaveBotMatchMakingData
==============
*/
void SV_SaveBotMatchMakingData(MemoryFile *memFile)
{
  bool IsBotMatchMakingAllowedForPlaylist; 
  MemoryFile *v3; 
  bool IsBotMatchMakingDataInitialized; 
  char p; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tThis looks up some dvars (e.g. onlinegame) directly, and cannot be used in the front-end", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  IsBotMatchMakingAllowedForPlaylist = BG_Bots_IsBotMatchMakingAllowedForPlaylist();
  v3 = memFile;
  if ( IsBotMatchMakingAllowedForPlaylist && (p = 1, MemFile_WriteData(memFile, 1ui64, &p), IsBotMatchMakingDataInitialized = BG_GameStateInfo_IsBotMatchMakingDataInitialized(), v3 = memFile, IsBotMatchMakingDataInitialized) )
  {
    p = 1;
    MemFile_WriteData(memFile, 1ui64, &p);
    MemFile_WriteData(memFile, 0x44C0ui64, g_svMPBotData);
  }
  else
  {
    p = 0;
    MemFile_WriteData(v3, 1ui64, &p);
  }
}

/*
==============
SV_SetupMPBotData
==============
*/
void SV_SetupMPBotData(void)
{
  bool *p_sv_isInUse; 
  unsigned int v1; 
  MPBotPlayerDataContainer *BotMember; 

  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_gamedata_mp.cpp", 16, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tThis looks up some dvars (e.g. onlinegame) directly, and cannot be used in the front-end", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  Com_Printf(131087, "SV_SetupMPBotData: setting up bot data for MP bots.\n");
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_GameStateInfo_IsBotMatchMakingDataInitialized() )
  {
    p_sv_isInUse = &g_svMPBotData[0].sv_isInUse;
    v1 = 0;
    do
    {
      BotMember = BG_GameStateInfo_GetBotMember(v1++);
      p_sv_isInUse += 88;
      *(MPBotPlayerDataContainer *)(p_sv_isInUse - 173) = *BotMember;
      *((_WORD *)p_sv_isInUse - 44) = -256;
    }
    while ( v1 < 0xC8 );
  }
}

