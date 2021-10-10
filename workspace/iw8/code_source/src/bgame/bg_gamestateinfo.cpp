/*
==============
GameStateInfo_Get
==============
*/

GameStateInfo *__fastcall GameStateInfo_Get()
{
  return ?GameStateInfo_Get@@YAPEAUGameStateInfo@@XZ();
}

/*
==============
BG_GameStateInfo_SaveCurrentState
==============
*/

void BG_GameStateInfo_SaveCurrentState(void)
{
  ?BG_GameStateInfo_SaveCurrentState@@YAXXZ();
}

/*
==============
BG_IngestGameStateInfoMessage
==============
*/

MatchRulesReturnCode __fastcall BG_IngestGameStateInfoMessage(msg_t *msg, unsigned int *gameStatePacketnum)
{
  return ?BG_IngestGameStateInfoMessage@@YA?AW4MatchRulesReturnCode@@PEAUmsg_t@@PEAI@Z(msg, gameStatePacketnum);
}

/*
==============
BG_GameStateInfo_LoadState
==============
*/

void __fastcall BG_GameStateInfo_LoadState(MemoryFile *memFile)
{
  ?BG_GameStateInfo_LoadState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
BG_GameStateInfo_InitDefaultBotConnectType
==============
*/

void BG_GameStateInfo_InitDefaultBotConnectType(void)
{
  ?BG_GameStateInfo_InitDefaultBotConnectType@@YAXXZ();
}

/*
==============
BG_GameStateInfo_SetUsingRecipe
==============
*/

void __fastcall BG_GameStateInfo_SetUsingRecipe(bool usingRecipe)
{
  ?BG_GameStateInfo_SetUsingRecipe@@YAX_N@Z(usingRecipe);
}

/*
==============
BG_CreateGameStateInfoMessage
==============
*/

void __fastcall BG_CreateGameStateInfoMessage(msg_t *msg, const int packetNum)
{
  ?BG_CreateGameStateInfoMessage@@YAXPEAUmsg_t@@H@Z(msg, packetNum);
}

/*
==============
BG_GameStateInfo_ClearActiveState
==============
*/

void BG_GameStateInfo_ClearActiveState(void)
{
  ?BG_GameStateInfo_ClearActiveState@@YAXXZ();
}

/*
==============
BG_GameStateInfo_LoadRecipe
==============
*/

void __fastcall BG_GameStateInfo_LoadRecipe(const char *recipeName)
{
  ?BG_GameStateInfo_LoadRecipe@@YAXPEBD@Z(recipeName);
}

/*
==============
BG_GameStateInfo_SaveState
==============
*/

void __fastcall BG_GameStateInfo_SaveState(MemoryFile *memFile)
{
  ?BG_GameStateInfo_SaveState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_SendGameStateInfoMessage
==============
*/

void __fastcall SV_SendGameStateInfoMessage(netadr_t *from, msg_t *fromMsg)
{
  ?SV_SendGameStateInfoMessage@@YAXUnetadr_t@@PEAUmsg_t@@@Z(from, fromMsg);
}

/*
==============
BG_GameStateInfo_RestoreArchivedState
==============
*/

void BG_GameStateInfo_RestoreArchivedState(void)
{
  ?BG_GameStateInfo_RestoreArchivedState@@YAXXZ();
}

/*
==============
BG_GameStateInfo_InitGameMode
==============
*/

void __fastcall BG_GameStateInfo_InitGameMode(GameModeType gameMode)
{
  ?BG_GameStateInfo_InitGameMode@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
BG_CreateGameStateInfoMessage
==============
*/
void BG_CreateGameStateInfoMessage(msg_t *msg, const int packetNum)
{
  __int64 v2; 
  GameStateInfo *v4; 
  MatchRulesSnapshotDelta *MatchRulesSnapshotDeltaFromDefault; 
  int GameTypeIndex; 
  unsigned int partitionCount; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 

  v2 = packetNum;
  v4 = GameStateInfo_Get();
  MSG_WriteBool(msg, v4->usingRecipe);
  MSG_WriteByte(msg, v4->usingBotsConnectType);
  MSG_WriteByte(msg, v4->usingBotsDifficulty[0]);
  MSG_WriteByte(msg, v4->usingBotsDifficulty[1]);
  MSG_WriteByte(msg, v4->usingBotsTeamLimit[0]);
  MSG_WriteByte(msg, v4->usingBotsTeamLimit[1]);
  MSG_WriteByte(msg, v4->agentMaxCount);
  if ( v4->usingRecipe )
  {
    MatchRulesSnapshotDeltaFromDefault = PartyHost_GetMatchRulesSnapshotDeltaFromDefault();
    if ( !MatchRulesSnapshotDeltaFromDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 316, ASSERT_TYPE_ASSERT, "(delta)", (const char *)&queryFormat, "delta") )
      __debugbreak();
    MSG_WriteLong(msg, v4->matchRules->checksum);
    GameTypeIndex = BG_MatchRulesData_GetGameTypeIndex(v4->matchRules);
    MSG_WriteShort(msg, GameTypeIndex);
    MSG_WriteShort(msg, MatchRulesSnapshotDeltaFromDefault->partitionCount);
    MSG_WriteShort(msg, v2);
    if ( msg->cursize > 32 )
    {
      LODWORD(v9) = msg->cursize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 323, ASSERT_TYPE_ASSERT, "( msg->cursize ) <= ( ( ( ( (250) > ( 138 ) ? (250) : ( 138 ) ) + 7 ) / 8 ) )", "msg->cursize <= MATCH_RULES_MAX_HEADER_SIZE\n\t%i, %i", v9, 32) )
        __debugbreak();
    }
    partitionCount = MatchRulesSnapshotDeltaFromDefault->partitionCount;
    if ( (unsigned int)v2 < partitionCount )
    {
      if ( MatchRulesSnapshotDeltaFromDefault->partition[v2].len > 0x4BD )
      {
        LODWORD(v10) = 1213;
        LODWORD(v9) = MatchRulesSnapshotDeltaFromDefault->partition[v2].len;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 327, ASSERT_TYPE_ASSERT, "( delta->partition[packetNum].len ) <= ( ( ( ( 1270 - 16 - 2 ) - 4 - 3 ) - ( ( ( (250) > ( 138 ) ? (250) : ( 138 ) ) + 7 ) / 8 ) ) )", "delta->partition[packetNum].len <= MATCH_RULES_MAX_PACKET_SIZE\n\t%i, %i", v9, v10) )
          __debugbreak();
      }
      MSG_WriteData(msg, MatchRulesSnapshotDeltaFromDefault->partition[v2].data, MatchRulesSnapshotDeltaFromDefault->partition[v2].len);
      LOWORD(partitionCount) = MatchRulesSnapshotDeltaFromDefault->partitionCount;
    }
    LODWORD(fmt) = msg->cursize;
    Com_Printf(25, "mruleResponse sending usingRecipe pt %i / %i: msg.cursize = %d\n", (unsigned int)v2, (unsigned __int16)partitionCount, fmt);
  }
  else
  {
    if ( msg->cursize + 10 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 337, ASSERT_TYPE_ASSERT, "( (msg->cursize + 4 + (3 * 2)) ) <= ( ( ( ( (250) > ( 138 ) ? (250) : ( 138 ) ) + 7 ) / 8 ) )", "(msg->cursize + 4 + (3 * 2)) <= MATCH_RULES_MAX_HEADER_SIZE\n\t%i, %i", msg->cursize + 10, 32) )
      __debugbreak();
    Com_Printf(25, "mruleResponse sending base pt %i msg.cursize = %d\n", (unsigned int)v2, (unsigned int)msg->cursize);
  }
}

/*
==============
BG_GameStateInfo_ClearActiveState
==============
*/
void BG_GameStateInfo_ClearActiveState(void)
{
  if ( Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 173, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunning())", "%s\n\tChanging active state while in-game is going to lead to side effects", "!Com_IsGameLocalServerRunning()") )
    __debugbreak();
  memset_0(s_gameStateInfo, 0, 0x44F0ui64);
  s_gameStateInfo[0].matchRules = s_gameStateInfo_matchRules;
  s_gameStateInfo[0].mapRotation = s_gameStateInfo_mapRotation;
  BG_MatchRules_Initialize(s_gameStateInfo_matchRules);
  PrivateMapRotation_ClearAll(s_gameStateInfo[0].mapRotation);
  BG_GameStateInfo_InitDefaultBotConnectType();
}

/*
==============
BG_GameStateInfo_CopySettings
==============
*/
void BG_GameStateInfo_CopySettings(const unsigned int fromGameStateType, const unsigned int toGameStateType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  LobbyMapRotation *v5; 
  LobbyMapRotation *v6; 
  __int128 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = toGameStateType;
  v3 = fromGameStateType;
  if ( fromGameStateType >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( fromGameStateType ) < (unsigned)( GAMESTATEINFO_COUNT )", "fromGameStateType doesn't index GAMESTATEINFO_COUNT\n\t%i not in [0, %i)", fromGameStateType, 2) )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( toGameStateType ) < (unsigned)( GAMESTATEINFO_COUNT )", "toGameStateType doesn't index GAMESTATEINFO_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (_DWORD)v3 == (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 89, ASSERT_TYPE_ASSERT, "( fromGameStateType ) != ( toGameStateType )", "%s != %s\n\t%i, %i", "fromGameStateType", "toGameStateType", v3, v2) )
    __debugbreak();
  memcpy_0(&s_gameStateInfo[v2], &s_gameStateInfo[v3], sizeof(GameStateInfo));
  BG_GameStateInfo_SetupPointers(v2);
  memcpy_0(&s_gameStateInfo_matchRules[v2], &s_gameStateInfo_matchRules[v3], sizeof(MatchRules));
  v4 = 3i64;
  v5 = &s_gameStateInfo_mapRotation[v2];
  v6 = &s_gameStateInfo_mapRotation[v3];
  do
  {
    v5 = (LobbyMapRotation *)((char *)v5 + 128);
    v7 = *(_OWORD *)&v6->entryCount;
    v6 = (LobbyMapRotation *)((char *)v6 + 128);
    *(_OWORD *)&v5[-1].entry[11].name[20] = v7;
    *(_OWORD *)&v5[-1].entry[12].name[8] = *(_OWORD *)&v6[-1].entry[12].name[8];
    *(_OWORD *)&v5[-1].entry[12].weight = *(_OWORD *)&v6[-1].entry[12].weight;
    *(_OWORD *)&v5[-1].entry[13].name[12] = *(_OWORD *)&v6[-1].entry[13].name[12];
    *(_OWORD *)v5[-1].entry[14].name = *(_OWORD *)v6[-1].entry[14].name;
    *(_OWORD *)&v5[-1].entry[14].name[16] = *(_OWORD *)&v6[-1].entry[14].name[16];
    *(_OWORD *)&v5[-1].entry[15].name[4] = *(_OWORD *)&v6[-1].entry[15].name[4];
    *(_OWORD *)&v5[-1].entry[15].name[20] = *(_OWORD *)&v6[-1].entry[15].name[20];
    --v4;
  }
  while ( v4 );
  *(_OWORD *)&v5->entryCount = *(_OWORD *)&v6->entryCount;
  *(_OWORD *)&v5->entry[0].name[12] = *(_OWORD *)&v6->entry[0].name[12];
  *(_OWORD *)v5->entry[1].name = *(_OWORD *)v6->entry[1].name;
  *(_OWORD *)&v5->entry[1].name[16] = *(_OWORD *)&v6->entry[1].name[16];
  *(_QWORD *)&v5->entry[2].name[4] = *(_QWORD *)&v6->entry[2].name[4];
  *(_DWORD *)&v5->entry[2].name[12] = *(_DWORD *)&v6->entry[2].name[12];
}

/*
==============
BG_GameStateInfo_InitDefaultBotConnectType
==============
*/
void BG_GameStateInfo_InitDefaultBotConnectType(void)
{
  const dvar_t *v0; 
  int integer; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  unsigned __int8 v4; 
  const dvar_t *v5; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    v0 = DVARINT_bot_SystemStatus;
    if ( !DVARINT_bot_SystemStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SystemStatus") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    integer = v0->current.integer;
    if ( (integer < 0 || (unsigned int)integer > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
      __debugbreak();
    s_gameStateInfo[0].usingBotsConnectType = integer;
    v2 = DVARINT_bot_DifficultyDefault;
    if ( !DVARINT_bot_DifficultyDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_DifficultyDefault") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.integer < 5 )
    {
      v3 = DVARINT_bot_DifficultyDefault;
      if ( !DVARINT_bot_DifficultyDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_DifficultyDefault") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      v4 = v3->current.color[0];
      v5 = DVARINT_bot_DifficultyDefault;
      s_gameStateInfo[0].usingBotsDifficulty[0] = v4;
      if ( !DVARINT_bot_DifficultyDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_DifficultyDefault") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      s_gameStateInfo[0].usingBotsDifficulty[1] = v5->current.color[0];
    }
    else
    {
      *(_WORD *)s_gameStateInfo[0].usingBotsDifficulty = 1028;
    }
    *(_WORD *)s_gameStateInfo[0].usingBotsTeamLimit = 2570;
    if ( s_gameStateInfo[0].usingBotsConnectType < 2u )
      *(_WORD *)s_gameStateInfo[0].usingBotsTeamLimit = 0;
  }
}

/*
==============
BG_GameStateInfo_InitGameMode
==============
*/
void BG_GameStateInfo_InitGameMode(GameModeType gameMode)
{
  char v1; 

  v1 = gameMode;
  if ( (_BYTE)s_gameStateInfo_lastInitGameMode != (_BYTE)gameMode )
  {
    if ( Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 173, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunning())", "%s\n\tChanging active state while in-game is going to lead to side effects", "!Com_IsGameLocalServerRunning()") )
      __debugbreak();
    memset_0(s_gameStateInfo, 0, 0x44F0ui64);
    s_gameStateInfo[0].matchRules = s_gameStateInfo_matchRules;
    s_gameStateInfo[0].mapRotation = s_gameStateInfo_mapRotation;
    BG_MatchRules_Initialize(s_gameStateInfo_matchRules);
    PrivateMapRotation_ClearAll(s_gameStateInfo[0].mapRotation);
    BG_GameStateInfo_InitDefaultBotConnectType();
    BG_GameStateInfo_CopySettings(0, 1u);
    LOBYTE(s_gameStateInfo_lastInitGameMode) = v1;
  }
}

/*
==============
BG_GameStateInfo_LoadRecipe
==============
*/
void BG_GameStateInfo_LoadRecipe(const char *recipeName)
{
  int matched; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 

  if ( !recipeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 246, ASSERT_TYPE_ASSERT, "(recipeName)", (const char *)&queryFormat, "recipeName") )
    __debugbreak();
  if ( Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 247, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunning())", "%s\n\tChanging active state while in-game is going to lead to side effects", "!Com_IsGameLocalServerRunning()") )
    __debugbreak();
  matched = MatchRules_LoadFromFF(s_gameStateInfo[0].matchRules, recipeName);
  s_gameStateInfo[0].usingRecipe = matched != 0;
  if ( matched )
  {
    if ( !s_gameStateInfo[0].usingRotation )
      goto LABEL_14;
    v3 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      PrivateMapRotation_GetNextMapSelection(s_gameStateInfo[0].mapRotation);
    }
    else
    {
LABEL_14:
      v4 = DVARSTR_ui_oldmapname;
      if ( !DVARSTR_ui_oldmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_oldmapname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( *(_BYTE *)v4->current.integer64 )
      {
        v5 = DVARSTR_ui_oldmapname;
        if ( !DVARSTR_ui_oldmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_oldmapname") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        Dvar_SetString_Internal(DVARSTR_ui_mapname, v5->current.string);
        Dvar_SetString_Internal(DVARSTR_ui_oldmapname, (const char *)&queryFormat.fmt + 3);
      }
    }
    MatchRulesChanged(s_gameStateInfo[0].matchRules);
  }
}

/*
==============
BG_GameStateInfo_LoadState
==============
*/
void BG_GameStateInfo_LoadState(MemoryFile *memFile)
{
  MemFile_ReadData(memFile, 0x44F0ui64, s_gameStateInfo);
  s_gameStateInfo[0].matchRules = s_gameStateInfo_matchRules;
  s_gameStateInfo[0].mapRotation = s_gameStateInfo_mapRotation;
  MemFile_ReadData(memFile, 0x1008ui64, s_gameStateInfo_matchRules);
  MemFile_ReadData(memFile, 0x1CCui64, s_gameStateInfo[0].mapRotation);
}

/*
==============
BG_GameStateInfo_RestoreArchivedState
==============
*/
void BG_GameStateInfo_RestoreArchivedState(void)
{
  BG_GameStateInfo_CopySettings(1u, 0);
}

/*
==============
BG_GameStateInfo_SaveCurrentState
==============
*/
void BG_GameStateInfo_SaveCurrentState(void)
{
  BG_GameStateInfo_CopySettings(0, 1u);
}

/*
==============
BG_GameStateInfo_SaveState
==============
*/
void BG_GameStateInfo_SaveState(MemoryFile *memFile)
{
  MemFile_WriteData(memFile, 0x44F0ui64, s_gameStateInfo);
  MemFile_WriteData(memFile, 0x1008ui64, s_gameStateInfo[0].matchRules);
  MemFile_WriteData(memFile, 0x1CCui64, s_gameStateInfo[0].mapRotation);
}

/*
==============
BG_GameStateInfo_SetUsingRecipe
==============
*/
void BG_GameStateInfo_SetUsingRecipe(bool usingRecipe)
{
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  s_gameStateInfo[0].usingRecipe = usingRecipe;
  if ( usingRecipe )
  {
    if ( !s_gameStateInfo[0].usingRotation )
      goto LABEL_8;
    v1 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      PrivateMapRotation_GetNextMapSelection(s_gameStateInfo[0].mapRotation);
    }
    else
    {
LABEL_8:
      v2 = DVARSTR_ui_oldmapname;
      if ( !DVARSTR_ui_oldmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_oldmapname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      if ( *(_BYTE *)v2->current.integer64 )
      {
        v3 = DVARSTR_ui_oldmapname;
        if ( !DVARSTR_ui_oldmapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_oldmapname") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        Dvar_SetString_Internal(DVARSTR_ui_mapname, v3->current.string);
        Dvar_SetString_Internal(DVARSTR_ui_oldmapname, (const char *)&queryFormat.fmt + 3);
      }
    }
    MatchRulesChanged(s_gameStateInfo[0].matchRules);
  }
}

/*
==============
BG_GameStateInfo_SetupPointers
==============
*/
void BG_GameStateInfo_SetupPointers(const unsigned int gameStateType)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = gameStateType;
  if ( gameStateType >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( gameStateType ) < (unsigned)( GAMESTATEINFO_COUNT )", "gameStateType doesn't index GAMESTATEINFO_COUNT\n\t%i not in [0, %i)", gameStateType, v4) )
      __debugbreak();
  }
  v2 = v1;
  s_gameStateInfo[v2].matchRules = &s_gameStateInfo_matchRules[v1];
  s_gameStateInfo[v2].mapRotation = &s_gameStateInfo_mapRotation[v1];
}

/*
==============
BG_IngestGameStateInfoMessage
==============
*/
__int64 BG_IngestGameStateInfoMessage(msg_t *msg, unsigned int *gameStatePacketnum)
{
  GameStateInfo *v4; 
  unsigned __int8 Byte; 
  unsigned __int8 usingBotsConnectType; 
  __int64 result; 
  unsigned __int8 v8; 
  unsigned __int8 agentMaxCount; 
  bool v10; 
  int Long; 
  unsigned int Short; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  const char *GameTypeFromIndex; 
  int UnsignedShort; 
  int v19; 
  int v20; 
  int v21; 
  const char *fmt; 
  int v23; 
  const DDLDef *Asset; 
  unsigned int v25; 
  MatchRules *matchRules; 
  __int64 i; 
  __int64 v28; 
  MatchRules *v29; 
  __int64 v30; 
  const char *GameType; 
  const char *v32; 
  signed __int64 v33; 
  char v34; 
  __int64 v35; 
  char v36; 

  v4 = GameStateInfo_Get();
  v4->usingRecipe = MSG_ReadBit(msg) != 0;
  Byte = MSG_ReadByte(msg);
  if ( CL_Main_IsSystemLinkGame() )
  {
    usingBotsConnectType = v4->usingBotsConnectType;
    if ( Byte != usingBotsConnectType )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441E04E0, 427i64, usingBotsConnectType, Byte);
      return 0i64;
    }
  }
  v4->usingBotsConnectType = Byte;
  v4->usingBotsDifficulty[0] = MSG_ReadByte(msg);
  v4->usingBotsDifficulty[1] = MSG_ReadByte(msg);
  v4->usingBotsTeamLimit[0] = MSG_ReadByte(msg);
  v4->usingBotsTeamLimit[1] = MSG_ReadByte(msg);
  v8 = MSG_ReadByte(msg);
  if ( CL_Main_IsSystemLinkGame() )
  {
    agentMaxCount = v4->agentMaxCount;
    if ( v8 != agentMaxCount )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441E0538, 428i64, agentMaxCount, v8);
      return 0i64;
    }
  }
  v10 = !v4->usingRecipe;
  v4->agentMaxCount = v8;
  if ( v10 )
  {
    *gameStatePacketnum = -1;
    return 1i64;
  }
  Long = MSG_ReadLong(msg);
  Short = MSG_ReadShort(msg);
  v13 = MSG_ReadShort(msg);
  v14 = MSG_ReadShort(msg);
  v15 = v14;
  if ( msg->overflowed )
  {
    Com_PrintWarning(25, "Received incomplete mruleResponse packet which will be discarded. MSG_IsOverflowed\n");
    return 0i64;
  }
  v16 = *gameStatePacketnum;
  if ( v14 != (_DWORD)v16 )
  {
    Com_PrintWarning(25, "Got out of order mruleResponse packet %d which will be discarded, expected %d. \n", v14, v16);
    return 0i64;
  }
  if ( !v14 )
  {
    GameTypeFromIndex = BG_MatchRulesData_GetGameTypeFromIndex(Short);
    if ( !BG_MatchRules_LoadDefaultFromFF(v4->matchRules, GameTypeFromIndex) )
      Com_PrintWarning(25, "Couldn't load defaults ff for matchrules %s\n", GameTypeFromIndex);
  }
  if ( msg->readcount != msg->cursize + msg->splitSize )
  {
    while ( 1 )
    {
      UnsignedShort = MSG_ReadUnsignedShort(msg);
      v19 = truncate_cast<unsigned short,int>(UnsignedShort);
      v20 = MSG_ReadUnsignedShort(msg);
      v21 = truncate_cast<unsigned short,int>(v20);
      if ( (unsigned int)(v19 + v21) >= 0x1000 )
        break;
      MSG_ReadData(msg, v21, &v4->matchRules->data[(unsigned __int16)v19], 4097 - v19);
      if ( msg->readcount == msg->cursize + msg->splitSize )
        goto LABEL_19;
    }
    fmt = "Malformed network packet, tried to write beyond length of match rules\n";
    Com_PrintError(25, "Malformed network packet, tried to write beyond length of match rules\n");
    v23 = 426;
    goto LABEL_26;
  }
LABEL_19:
  *gameStatePacketnum = v15 + 1;
  if ( v15 + 1 < v13 )
    return 0i64;
  Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
  v25 = -1;
  matchRules = v4->matchRules;
  for ( i = Asset->byteSize; i; --i )
  {
    v28 = matchRules->data[0];
    matchRules = (MatchRules *)((char *)matchRules + 1);
    v25 = (v25 >> 8) ^ g_crc32Table[v28 ^ (unsigned __int8)v25];
  }
  v4->matchRules->checksum = ~v25;
  v29 = v4->matchRules;
  if ( v29->checksum != Long )
  {
    fmt = "Match rules does not match checksum after applying received delta.\n";
    Com_PrintError(25, "Match rules does not match checksum after applying received delta.\n", matchRules);
    v23 = 443;
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", v23, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt) )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  v30 = 0x7FFFFFFFi64;
  GameType = BG_MatchRulesData_GetGameType(v29);
  v32 = BG_MatchRulesData_GetGameTypeFromIndex(Short);
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !GameType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v33 = v32 - GameType;
  do
  {
    v34 = GameType[v33];
    v35 = v30;
    v36 = *GameType++;
    --v30;
    if ( !v35 )
      break;
    if ( v34 != v36 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 447, ASSERT_TYPE_ASSERT, "(I_strcmp( BG_MatchRulesData_GetGameTypeFromIndex( gametypeIndex ), BG_MatchRulesData_GetGameType( gInfo->matchRules ) ) == 0)", (const char *)&queryFormat, "I_strcmp( BG_MatchRulesData_GetGameTypeFromIndex( gametypeIndex ), BG_MatchRulesData_GetGameType( gInfo->matchRules ) ) == 0") )
        __debugbreak();
      break;
    }
  }
  while ( v34 );
  MatchRulesChanged(v4->matchRules);
  result = 1i64;
  *gameStatePacketnum = -1;
  return result;
}

/*
==============
GameStateInfo_Get
==============
*/
GameStateInfo *GameStateInfo_Get()
{
  if ( Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_CanStartGame() && Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 58, ASSERT_TYPE_ASSERT, "(!Sys_IsServerThread())", "%s\n\tCan't access from the server while the front end is going", "!Sys_IsServerThread()") )
    __debugbreak();
  return s_gameStateInfo;
}

/*
==============
SV_SendGameStateInfoMessage
==============
*/
void SV_SendGameStateInfoMessage(netadr_t *from, msg_t *fromMsg)
{
  unsigned __int8 *m_ptr; 
  int Byte; 
  unsigned int AgentCount; 
  const char *v7; 
  __int64 v8; 
  netadr_t v9; 
  __int64 v10; 
  Mem_LargeLocal data; 
  msg_t buf; 

  v10 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x243D8ui64, "msg_buf_t msgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  Byte = MSG_ReadByte(fromMsg);
  if ( fromMsg->overflowed || fromMsg->readcount != fromMsg->cursize + fromMsg->splitSize )
  {
    v9 = *from;
    v7 = NET_AdrToString(&v9);
    Com_PrintError(15, "Received invalid 'mrules' message payload from %s. Ignoring.\n", v7);
  }
  else
  {
    MSG_Init(&buf, m_ptr, 148440);
    MSG_WriteString(&buf, "mruleResponse");
    if ( Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_CanStartGame() && Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 58, ASSERT_TYPE_ASSERT, "(!Sys_IsServerThread())", "%s\n\tCan't access from the server while the front end is going", "!Sys_IsServerThread()") )
      __debugbreak();
    if ( s_gameStateInfo[0].agentMaxCount != SV_GameMP_GetAgentCount() )
    {
      AgentCount = SV_GameMP_GetAgentCount();
      if ( Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_CanStartGame() && Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 58, ASSERT_TYPE_ASSERT, "(!Sys_IsServerThread())", "%s\n\tCan't access from the server while the front end is going", "!Sys_IsServerThread()") )
        __debugbreak();
      LODWORD(v8) = s_gameStateInfo[0].agentMaxCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gamestateinfo.cpp", 284, ASSERT_TYPE_ASSERT, "( GameStateInfo_Get()->agentMaxCount ) == ( SV_GameMP_GetAgentCount() )", "GameStateInfo_Get()->agentMaxCount == SV_GameMP_GetAgentCount()\n\t%i, %i", v8, AgentCount) )
        __debugbreak();
    }
    BG_CreateGameStateInfoMessage(&buf, Byte);
    NET_OutOfBandData(NS_MAXCLIENTS, from, buf.data, buf.cursize);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

