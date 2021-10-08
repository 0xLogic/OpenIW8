/*
==============
G_InitDialogQueues
==============
*/

void G_InitDialogQueues(void)
{
  ?G_InitDialogQueues@@YAXXZ();
}

/*
==============
G_QueueDialogForPlayer
==============
*/

void __fastcall G_QueueDialogForPlayer(const gentity_s *const player, const scr_string_t dialogName, const unsigned int soundHash, const vec3_t *location, const int duration, const scr_string_t group, const int groupOverride)
{
  ?G_QueueDialogForPlayer@@YAXQEBUgentity_s@@W4scr_string_t@@IAEBTvec3_t@@H1H@Z(player, dialogName, soundHash, location, duration, group, groupOverride);
}

/*
==============
G_ClearDialogQueue
==============
*/

void __fastcall G_ClearDialogQueue(const gentity_s *const player)
{
  ?G_ClearDialogQueue@@YAXQEBUgentity_s@@@Z(player);
}

/*
==============
G_UpdateDialogQueues
==============
*/

void G_UpdateDialogQueues(void)
{
  ?G_UpdateDialogQueues@@YAXXZ();
}

/*
==============
G_ClearDialogQueue
==============
*/
void G_ClearDialogQueue(const gentity_s *const player)
{
  __int64 v2; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 303, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( player->s.number >= 0xF8u )
  {
    LODWORD(v2) = player->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( player->s.number ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "player->s.number doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v2, 248) )
      __debugbreak();
  }
  memset_0(&s_dialogQueue[player->s.number], 0, sizeof(DialogQueue));
}

/*
==============
G_InitDialogQueues
==============
*/
void G_InitDialogQueues(void)
{
  memset_0(s_dialogQueue, 0, sizeof(s_dialogQueue));
}

/*
==============
G_PeekDialogQueue
==============
*/
DialogQueueItem *G_PeekDialogQueue(const int characterIndex)
{
  __int64 v1; 
  __int64 v2; 
  __int64 front; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = characterIndex;
  if ( (unsigned int)characterIndex >= 0xF8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", characterIndex, 248) )
      __debugbreak();
    LODWORD(v8) = 248;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v2 = v1;
  if ( !s_dialogQueue[v2].size )
    return 0i64;
  front = s_dialogQueue[v2].front;
  if ( (unsigned int)front >= 0x10 )
  {
    LODWORD(v7) = 16;
    LODWORD(v5) = s_dialogQueue[v2].front;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( front ) < (unsigned)( MAX_DIALOG_QUEUE_ITEMS )", "front doesn't index MAX_DIALOG_QUEUE_ITEMS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (DialogQueueItem *)((char *)s_dialogQueue + 32 * front + v2 * 520);
}

/*
==============
G_PlayDialogQueue
==============
*/
void G_PlayDialogQueue(const int characterIndex)
{
  __int64 v1; 
  DialogQueueItem *v2; 
  scr_string_t dialogName; 
  gentity_s *v4; 
  __int64 v5; 
  SvClient *CommonClient; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v1 = characterIndex;
  if ( (unsigned int)characterIndex >= 0xF8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", characterIndex, 248) )
      __debugbreak();
    LODWORD(v10) = 248;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( s_dialogQueue[v1].size > 0 )
  {
    v2 = G_PeekDialogQueue(v1);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 152, ASSERT_TYPE_ASSERT, "( item )", (const char *)&queryFormat, "item") )
      __debugbreak();
    dialogName = v2->dialogName;
    v2->startTime = level.time;
    v4 = &g_entities[v1];
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v5 = v4 - g_entities;
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v7) = v4 - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    v5 = (__int16)v5;
    if ( (unsigned int)(__int16)v5 >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 130, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( player ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( player ) )") )
      __debugbreak();
    if ( SV_BotIsBotEnt(v4) || SV_IsAgentEntity(v4) )
      Scr_LeaderDialog(v4, dialogName, &v2->location);
    if ( !SV_Game_IsLocalSplitscreenGame() && (int)v1 < level.maxclients && SvClient::GetCommonClient(v1)->state >= CS_ACTIVE && v2->soundHash )
    {
      CommonClient = SvClient::GetCommonClient(v1);
      MSG_Init(&buf, data, 1020);
      MSG_WriteByte(&buf, 67i64);
      MSG_WriteLong(&buf, v2->soundHash);
      if ( !buf.overflowed )
        goto LABEL_39;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
        __debugbreak();
      if ( !buf.overflowed )
LABEL_39:
        SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
    }
  }
}

/*
==============
G_PushDialogQueue
==============
*/
DialogQueueItem *G_PushDialogQueue(const int characterIndex)
{
  __int64 v1; 
  __int64 v2; 
  int size; 
  __int64 v5; 
  __int64 v6; 

  v1 = characterIndex;
  if ( (unsigned int)characterIndex >= 0xF8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", characterIndex, 248) )
      __debugbreak();
    LODWORD(v6) = 248;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = v1;
  size = s_dialogQueue[v1].size;
  if ( size == 16 )
    return 0i64;
  s_dialogQueue[v2].size = size + 1;
  return (DialogQueueItem *)((char *)s_dialogQueue + 32 * ((size + s_dialogQueue[v2].front) % 16) + v2 * 520);
}

/*
==============
G_QueueDialogForPlayer
==============
*/
void G_QueueDialogForPlayer(const gentity_s *const player, const scr_string_t dialogName, const unsigned int soundHash, const vec3_t *location, const int duration, const scr_string_t group, const int groupOverride)
{
  unsigned int v8; 
  __int64 number; 
  int size; 
  int v13; 
  DialogQueueItem *v14; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v8 = soundHash;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 255, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 256, ASSERT_TYPE_ASSERT, "( duration >= 0 )", (const char *)&queryFormat, "duration >= 0") )
    __debugbreak();
  number = player->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v16) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v16, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( group )
  {
    if ( (unsigned int)number >= 0xF8 )
    {
      LODWORD(v18) = 248;
      LODWORD(v16) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v16, v18) )
        __debugbreak();
      LODWORD(v19) = 248;
      LODWORD(v17) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v17, v19) )
        __debugbreak();
    }
    size = s_dialogQueue[number].size;
    if ( (unsigned int)size > 0x10 )
    {
      LODWORD(v16) = s_dialogQueue[number].size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 111, ASSERT_TYPE_ASSERT, "( 0 ) <= ( queueSize ) && ( queueSize ) <= ( MAX_DIALOG_QUEUE_ITEMS )", "queueSize not in [0, MAX_DIALOG_QUEUE_ITEMS]\n\t%i not in [%i, %i]", v16, 0i64, 16) )
        __debugbreak();
    }
    v13 = 0;
    if ( size <= 0 )
    {
LABEL_28:
      v14 = G_PushDialogQueue(number);
    }
    else
    {
      while ( 1 )
      {
        v14 = &s_dialogQueue[number].items[(s_dialogQueue[number].front + v13) % 16];
        if ( v14->soundGroup == group )
          break;
        if ( ++v13 >= size )
          goto LABEL_28;
      }
      if ( groupOverride && v14 == G_PeekDialogQueue(number) )
        G_StopDialogQueue(number);
    }
    v8 = soundHash;
  }
  else
  {
    v14 = G_PushDialogQueue(number);
  }
  if ( v14 )
  {
    v14->soundHash = v8;
    v14->soundGroup = group;
    v14->dialogName = dialogName;
    v14->startTime = 0;
    v14->duration = duration;
    v14->location.v[0] = location->v[0];
    v14->location.v[1] = location->v[1];
    v14->location.v[2] = location->v[2];
    G_UpdateDialogQueueForPlayer(number);
  }
  else
  {
    v15 = SL_ConvertToString(dialogName);
    Com_PrintWarning(15, "Trying to queue dialog %s but the queue is full.\n", v15);
  }
}

/*
==============
G_StopDialogQueue
==============
*/
void G_StopDialogQueue(const int characterIndex)
{
  __int64 v1; 
  DialogQueueItem *v2; 
  SvClient *CommonClient; 
  __int64 v4; 
  __int64 v5; 
  unsigned int m_characterCount; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  v1 = characterIndex;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v1 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v4, m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= 0xF8 )
  {
    LODWORD(v5) = 248;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( s_dialogQueue[v1].size > 0 && !SV_Game_IsLocalSplitscreenGame() && (int)v1 < level.maxclients && SvClient::GetCommonClient(v1)->state >= CS_ACTIVE )
  {
    v2 = G_PeekDialogQueue(v1);
    if ( v2->soundHash )
    {
      CommonClient = SvClient::GetCommonClient(v1);
      MSG_Init(&buf, data, 1020);
      MSG_WriteByte(&buf, 68i64);
      MSG_WriteLong(&buf, v2->soundHash);
      if ( !buf.overflowed )
        goto LABEL_22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 219, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
        __debugbreak();
      if ( !buf.overflowed )
LABEL_22:
        SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
    }
  }
}

/*
==============
G_UpdateDialogQueueForPlayer
==============
*/
void G_UpdateDialogQueueForPlayer(const int characterIndex)
{
  __int64 v1; 
  DialogQueueItem *v2; 
  int startTime; 
  __int64 v4; 
  unsigned int front; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 

  v1 = characterIndex;
  v2 = G_PeekDialogQueue(characterIndex);
  if ( v2 )
  {
    startTime = v2->startTime;
    if ( startTime )
    {
      if ( startTime + v2->duration >= level.time )
        return;
      if ( (unsigned int)v1 >= 0xF8 )
      {
        v10 = 248;
        v7 = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v7, v10) )
          __debugbreak();
        LODWORD(v11) = 248;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( s_dialogQueue ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( s_dialogQueue )\n\t%i not in [0, %i)", v8, v11) )
          __debugbreak();
      }
      v4 = v1;
      if ( s_dialogQueue[v1].size )
      {
        front = s_dialogQueue[v4].front;
        if ( front >= 0x10 )
        {
          LODWORD(v9) = 16;
          LODWORD(v6) = s_dialogQueue[v4].front;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_dialog_mp.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( front ) < (unsigned)( MAX_DIALOG_QUEUE_ITEMS )", "front doesn't index MAX_DIALOG_QUEUE_ITEMS\n\t%i not in [0, %i)", v6, v9) )
            __debugbreak();
        }
        --s_dialogQueue[v4].size;
        s_dialogQueue[v4].front = (int)(front + 1) % 16;
      }
    }
    G_PlayDialogQueue(v1);
  }
}

/*
==============
G_UpdateDialogQueues
==============
*/
void G_UpdateDialogQueues(void)
{
  unsigned int v0; 
  int i; 
  __int64 v2; 
  __int64 v3; 

  v0 = 0;
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    G_UpdateDialogQueueForPlayer(i);
  while ( 1 )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
      __debugbreak();
    if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (signed int)v0 >= SLODWORD(SvPersistentGlobals::ms_svPersistent[3].__vftable) )
      break;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v0 >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v3) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v2) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    G_UpdateDialogQueueForPlayer(v0 + ComCharacterLimits::ms_gameData.m_clientCount);
    ++v0;
  }
}

