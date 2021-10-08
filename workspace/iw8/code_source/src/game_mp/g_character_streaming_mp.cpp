/*
==============
G_CharacterStreaming_ClientDisconnect
==============
*/

void __fastcall G_CharacterStreaming_ClientDisconnect(const unsigned int clientNum)
{
  ?G_CharacterStreaming_ClientDisconnect@@YAXI@Z(clientNum);
}

/*
==============
G_CharacterStreaming_ClearCorpseCustomization
==============
*/

void __fastcall G_CharacterStreaming_ClearCorpseCustomization(const unsigned int corpseIndex)
{
  ?G_CharacterStreaming_ClearCorpseCustomization@@YAXI@Z(corpseIndex);
}

/*
==============
G_CharacterStreaming_SetNextEquippedModels
==============
*/

bool __fastcall G_CharacterStreaming_SetNextEquippedModels(const unsigned int clientNum, const unsigned int bodyIndex, const unsigned int headIndex)
{
  return ?G_CharacterStreaming_SetNextEquippedModels@@YA_NIII@Z(clientNum, bodyIndex, headIndex);
}

/*
==============
G_CharacterStreaming_ClearNextSpectateViewModels
==============
*/

void __fastcall G_CharacterStreaming_ClearNextSpectateViewModels(const unsigned int clientNum)
{
  ?G_CharacterStreaming_ClearNextSpectateViewModels@@YAXI@Z(clientNum);
}

/*
==============
G_CharacterStreaming_PrintClientWorldModelRequests
==============
*/

void __fastcall G_CharacterStreaming_PrintClientWorldModelRequests(const unsigned int clientIndex, CustomizationModelType customizationType)
{
  ?G_CharacterStreaming_PrintClientWorldModelRequests@@YAXIW4CustomizationModelType@@@Z(clientIndex, customizationType);
}

/*
==============
G_CharacterStreaming_ClearClassSelectModels
==============
*/

void __fastcall G_CharacterStreaming_ClearClassSelectModels(const unsigned int clientNum)
{
  ?G_CharacterStreaming_ClearClassSelectModels@@YAXI@Z(clientNum);
}

/*
==============
G_CharacterStreaming_HasCustomizationWorldModelsLoaded
==============
*/

bool __fastcall G_CharacterStreaming_HasCustomizationWorldModelsLoaded(const unsigned int clientNum, const clientState_t *cs)
{
  return ?G_CharacterStreaming_HasCustomizationWorldModelsLoaded@@YA_NIPEBUclientState_t@@@Z(clientNum, cs);
}

/*
==============
G_CharacterStreaming_SetCorpseCustomization
==============
*/

void __fastcall G_CharacterStreaming_SetCorpseCustomization(const unsigned int corpseIndex, const ClientCustomizationInfo *customization)
{
  ?G_CharacterStreaming_SetCorpseCustomization@@YAXIPEBUClientCustomizationInfo@@@Z(corpseIndex, customization);
}

/*
==============
G_CharacterStreaming_PrintViewModelRequests
==============
*/

void __fastcall G_CharacterStreaming_PrintViewModelRequests(const unsigned int clientIndex)
{
  ?G_CharacterStreaming_PrintViewModelRequests@@YAXI@Z(clientIndex);
}

/*
==============
G_CharacterStreaming_SetClassSelectModels
==============
*/

bool __fastcall G_CharacterStreaming_SetClassSelectModels(const unsigned int clientNum, const unsigned int bodyIndex, const unsigned int headIndex)
{
  return ?G_CharacterStreaming_SetClassSelectModels@@YA_NIII@Z(clientNum, bodyIndex, headIndex);
}

/*
==============
G_CharacterStreaming_LoadCharacters
==============
*/

void G_CharacterStreaming_LoadCharacters(void)
{
  ?G_CharacterStreaming_LoadCharacters@@YAXXZ();
}

/*
==============
G_CharacterStreaming_WriteMigrationState
==============
*/

void __fastcall G_CharacterStreaming_WriteMigrationState(MemoryFile *memFile)
{
  ?G_CharacterStreaming_WriteMigrationState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_CharacterStreaming_ClearNextEquippedModels
==============
*/

void __fastcall G_CharacterStreaming_ClearNextEquippedModels(const unsigned int clientNum)
{
  ?G_CharacterStreaming_ClearNextEquippedModels@@YAXI@Z(clientNum);
}

/*
==============
G_CharacterStreaming_ReadMigrationState
==============
*/

void __fastcall G_CharacterStreaming_ReadMigrationState(MemoryFile *memFile)
{
  ?G_CharacterStreaming_ReadMigrationState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_CharacterStreaming_HasCustomizationViewModelsLoaded
==============
*/

bool __fastcall G_CharacterStreaming_HasCustomizationViewModelsLoaded(const unsigned int clientNum, const clientState_t *cs)
{
  return ?G_CharacterStreaming_HasCustomizationViewModelsLoaded@@YA_NIPEBUclientState_t@@@Z(clientNum, cs);
}

/*
==============
G_CharacterStreaming_SetNextSpectateViewModels
==============
*/

unsigned int __fastcall G_CharacterStreaming_SetNextSpectateViewModels(const unsigned int clientNum, const unsigned int *const modelIndices, const unsigned int modelCount)
{
  return ?G_CharacterStreaming_SetNextSpectateViewModels@@YAIIQEBII@Z(clientNum, modelIndices, modelCount);
}

/*
==============
G_CharacterStreaming_ClientConnect
==============
*/

void __fastcall G_CharacterStreaming_ClientConnect(const unsigned int clientNum)
{
  ?G_CharacterStreaming_ClientConnect@@YAXI@Z(clientNum);
}

/*
==============
G_CharacterStreaming_Shutdown
==============
*/

void G_CharacterStreaming_Shutdown(void)
{
  ?G_CharacterStreaming_Shutdown@@YAXXZ();
}

/*
==============
G_CharacterStreaming_ClearClassSelectModels
==============
*/
void G_CharacterStreaming_ClearClassSelectModels(const unsigned int clientNum)
{
  CharacterStreamingRequest *ClassSelectRequests; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(clientNum) )
  {
    ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(clientNum);
    ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
    MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
    v5 = MaxViewRequests;
    if ( MaxViewRequests > 0x14 )
    {
      LODWORD(v8) = 20;
      LODWORD(v6) = MaxViewRequests;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 595, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v6, v8) )
        __debugbreak();
    }
    G_CharacterStreaming_RemoveCustomizationModels(ClassSelectRequests);
    BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v5, ASSET_STREAMING_REQUEST_CLASS_SELECT);
  }
}

/*
==============
G_CharacterStreaming_ClearCorpseCustomization
==============
*/
void G_CharacterStreaming_ClearCorpseCustomization(const unsigned int corpseIndex)
{
  CharacterStreamingRequest *CorpseRequests; 
  __int64 v3; 
  unsigned int m_clientCorpseCount; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( corpseIndex >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCorpseCount = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    LODWORD(v3) = corpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v3, m_clientCorpseCount) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    CorpseRequests = G_CharacterStreaming_GetCorpseRequests(corpseIndex);
    G_CharacterStreaming_RemoveCustomizationModels(CorpseRequests);
  }
}

/*
==============
G_CharacterStreaming_ClearNextEquippedModels
==============
*/
void G_CharacterStreaming_ClearNextEquippedModels(const unsigned int clientNum)
{
  CharacterStreamingRequest *NextEquippedRequests; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(clientNum) )
  {
    NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(clientNum);
    ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
    MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
    v5 = MaxViewRequests;
    if ( MaxViewRequests > 0x14 )
    {
      LODWORD(v8) = 20;
      LODWORD(v6) = MaxViewRequests;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 648, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v6, v8) )
        __debugbreak();
    }
    G_CharacterStreaming_RemoveCustomizationModels(NextEquippedRequests);
    BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v5, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW);
  }
}

/*
==============
G_CharacterStreaming_ClearNextSpectateViewModels
==============
*/
void G_CharacterStreaming_ClearNextSpectateViewModels(const unsigned int clientNum)
{
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v7; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(clientNum) )
  {
    ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
    MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
    v4 = MaxViewRequests;
    if ( MaxViewRequests > 0x14 )
    {
      LODWORD(v7) = 20;
      LODWORD(v5) = MaxViewRequests;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 710, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v5, v7) )
        __debugbreak();
    }
    BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v4, ASSET_STREAMING_REQUEST_NEXT_SPECTATE_VIEW);
  }
}

/*
==============
G_CharacterStreaming_ClientConnect
==============
*/
void G_CharacterStreaming_ClientConnect(const unsigned int clientNum)
{
  ClientStreamingRequests *ClientRequests; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 481, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    ClientRequests = G_CharacterStreaming_GetClientRequests(clientNum);
    if ( ClientRequests->isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 487, ASSERT_TYPE_ASSERT, "( !clientRequests->isActive )", (const char *)&queryFormat, "!clientRequests->isActive") )
      __debugbreak();
    ClientRequests->isActive = 1;
  }
}

/*
==============
G_CharacterStreaming_ClientDisconnect
==============
*/
void G_CharacterStreaming_ClientDisconnect(const unsigned int clientNum)
{
  __int64 v1; 
  CharacterStreamingRequest *CurrentRequests; 
  CharacterStreamingRequest *ClassSelectRequests; 
  CharacterStreamingRequest *NextEquippedRequests; 
  __int64 v5; 
  __int64 v7; 
  int maxclients; 

  v1 = clientNum;
  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 495, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(v1) )
  {
    CurrentRequests = G_CharacterStreaming_GetCurrentRequests(v1);
    G_CharacterStreaming_RemoveCustomizationModels(CurrentRequests);
    ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(v1);
    G_CharacterStreaming_RemoveCustomizationModels(ClassSelectRequests);
    NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(v1);
    G_CharacterStreaming_RemoveCustomizationModels(NextEquippedRequests);
    if ( (unsigned int)v1 >= level.maxclients )
    {
      LODWORD(v7) = level.maxclients;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 448, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    memset_0(&s_clientStreamingRequests[v1], 0, sizeof(ClientStreamingRequests));
  }
}

/*
==============
G_CharacterStreaming_GetClassSelectRequests
==============
*/
CharacterStreamingRequest *G_CharacterStreaming_GetClassSelectRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  ClientStreamingRequests *v2; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
    LODWORD(v7) = 200;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = &s_clientStreamingRequests[v1];
  if ( !v2->isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 95, ASSERT_TYPE_ASSERT, "( clientRequests->isActive )", (const char *)&queryFormat, "clientRequests->isActive") )
    __debugbreak();
  return &v2->classSelectRequestList;
}

/*
==============
G_CharacterStreaming_GetClientRequests
==============
*/
ClientStreamingRequests *G_CharacterStreaming_GetClientRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v4 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return &s_clientStreamingRequests[v1];
}

/*
==============
G_CharacterStreaming_GetCorpseRequests
==============
*/
CharacterStreamingRequest *G_CharacterStreaming_GetCorpseRequests(const unsigned int corpseIndex)
{
  __int64 v1; 
  int v4; 

  v1 = corpseIndex;
  if ( corpseIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", corpseIndex, v4) )
      __debugbreak();
  }
  return &s_corpseStreamingRequests[v1];
}

/*
==============
G_CharacterStreaming_GetCurrentRequests
==============
*/
CharacterStreamingRequest *G_CharacterStreaming_GetCurrentRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  ClientStreamingRequests *v2; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
    LODWORD(v7) = 200;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = &s_clientStreamingRequests[v1];
  if ( !v2->isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 84, ASSERT_TYPE_ASSERT, "( clientRequests->isActive )", (const char *)&queryFormat, "clientRequests->isActive") )
    __debugbreak();
  return &v2->currentRequestList;
}

/*
==============
G_CharacterStreaming_GetMaxViewRequests
==============
*/
unsigned int G_CharacterStreaming_GetMaxViewRequests(const unsigned int clientIndex)
{
  SvClientMP *CommonClient; 
  unsigned int v3; 
  unsigned int LocalClientCount; 
  unsigned int result; 
  unsigned int v6; 
  __int64 v7; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientIndex);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 60, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v3 = SvClient::ms_clientCount;
  LocalClientCount = SvClientMP::GetLocalClientCount(CommonClient);
  result = Com_StreamSync_GetMaxEntryCount(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL, v3, LocalClientCount);
  v6 = result;
  if ( result > 0x14 )
  {
    LODWORD(v7) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 66, ASSERT_TYPE_ASSERT, "( maxRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v7, 20) )
      __debugbreak();
    return v6;
  }
  return result;
}

/*
==============
G_CharacterStreaming_GetNextEquippedRequests
==============
*/
CharacterStreamingRequest *G_CharacterStreaming_GetNextEquippedRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  ClientStreamingRequests *v2; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
    LODWORD(v7) = 200;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = &s_clientStreamingRequests[v1];
  if ( !v2->isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 106, ASSERT_TYPE_ASSERT, "( clientRequests->isActive )", (const char *)&queryFormat, "clientRequests->isActive") )
    __debugbreak();
  return &v2->nextEquippedRequestList;
}

/*
==============
G_CharacterStreaming_GetViewHandsRequests
==============
*/
ViewHandsStreamingRequestList *G_CharacterStreaming_GetViewHandsRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  ClientStreamingRequests *v2; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
    LODWORD(v7) = 200;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v2 = &s_clientStreamingRequests[v1];
  if ( !v2->isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 117, ASSERT_TYPE_ASSERT, "( clientRequests->isActive )", (const char *)&queryFormat, "clientRequests->isActive") )
    __debugbreak();
  return &v2->viewHandsRequestList;
}

/*
==============
G_CharacterStreaming_HasCustomizationViewModelsLoaded
==============
*/
bool G_CharacterStreaming_HasCustomizationViewModelsLoaded(const unsigned int clientNum, const clientState_t *cs)
{
  unsigned __int16 ModelIndex; 
  bool result; 
  ComStreamSyncEntry outSyncEntry; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 749, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 750, ASSERT_TYPE_ASSERT, "( cs )", (const char *)&queryFormat, "cs") )
    __debugbreak();
  result = 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    if ( !G_CharacterStreaming_IsClientActive(clientNum) )
      return 0;
    ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_VIEWHANDS, &cs->customization);
    Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, ModelIndex, STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL);
    if ( !SV_StreamSync_ClientHasViewModelLoaded(clientNum, &outSyncEntry, 1u) )
      return 0;
  }
  return result;
}

/*
==============
G_CharacterStreaming_HasCustomizationWorldModelsLoaded
==============
*/
bool G_CharacterStreaming_HasCustomizationWorldModelsLoaded(const unsigned int clientNum, const clientState_t *cs)
{
  unsigned __int16 ModelIndex; 
  unsigned __int16 v5; 
  bool result; 
  ComStreamSyncEntry outSyncEntry; 
  ComStreamSyncEntry streamSyncEntry; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 723, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 724, ASSERT_TYPE_ASSERT, "( cs )", (const char *)&queryFormat, "cs") )
    __debugbreak();
  result = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(clientNum) )
  {
    ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_BODY, &cs->customization);
    Com_StreamSyncEntry_SetSingleModelIndex(&outSyncEntry, ModelIndex, STREAM_SYNC_CLIENT_TYPE_BODY);
    v5 = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_HEAD, &cs->customization);
    Com_StreamSyncEntry_SetSingleModelIndex(&streamSyncEntry, v5, STREAM_SYNC_CLIENT_TYPE_FIRST_WORLD_MODEL);
    if ( SV_StreamSync_ClientHasBodyModelLoaded(clientNum, &outSyncEntry) )
    {
      if ( SV_StreamSync_ClientHasHeadModelLoaded(clientNum, &streamSyncEntry) )
        return 1;
    }
  }
  return result;
}

/*
==============
G_CharacterStreaming_IsClientActive
==============
*/
_BOOL8 G_CharacterStreaming_IsClientActive(const unsigned int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 )
  {
    v4 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return s_clientStreamingRequests[v1].isActive;
}

/*
==============
G_CharacterStreaming_LoadCharacters
==============
*/
void G_CharacterStreaming_LoadCharacters(void)
{
  unsigned int i; 
  __int64 v1; 
  int maxclients; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    G_CharacterStreaming_LoadGlobalWorldModels();
    if ( (unsigned int)(level.maxclients - 1) > 0xC7 )
    {
      v5 = 200;
      v4 = 1;
      maxclients = level.maxclients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 981, ASSERT_TYPE_ASSERT, "( 1 ) <= ( level.maxclients ) && ( level.maxclients ) <= ( 200 )", "level.maxclients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", maxclients, v4, v5) )
        __debugbreak();
    }
    for ( i = 0; i < level.maxclients; ++i )
    {
      if ( i >= 0xC8 )
      {
        LODWORD(v3) = 200;
        LODWORD(v1) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v1, v3) )
          __debugbreak();
      }
      if ( s_clientStreamingRequests[i].isActive )
        G_CharacterStreaming_LoadClientViewHandModels(i);
    }
  }
}

/*
==============
G_CharacterStreaming_LoadClientViewHandModels
==============
*/
void G_CharacterStreaming_LoadClientViewHandModels(const unsigned int clientIndex)
{
  __int64 v1; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int assetIndex; 
  AssetStreamingRequestSource RequestSource; 
  __int64 v12; 
  __int64 v13; 
  _BYTE v15[32]; 
  __int128 v16; 
  __int64 v17; 
  unsigned int sourceList[20]; 
  ComStreamSyncEntry entryList[20]; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, 200) )
    __debugbreak();
  if ( !s_clientStreamingRequests[v1].isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 776, ASSERT_TYPE_ASSERT, "( G_CharacterStreaming_IsClientActive( clientIndex ) )", (const char *)&queryFormat, "G_CharacterStreaming_IsClientActive( clientIndex )") )
    __debugbreak();
  ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(v1);
  MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(v1);
  v4 = MaxViewRequests;
  if ( MaxViewRequests > 0x14 )
  {
    LODWORD(v13) = 20;
    LODWORD(v12) = MaxViewRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 781, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v12, v13) )
      __debugbreak();
  }
  v5 = 0i64;
  if ( v4 )
  {
    do
    {
      assetIndex = ViewHandsRequests->requestItems[0].assetIndex;
      _R14 = &entryList[(unsigned int)v5];
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
        __debugbreak();
      memset(v15, 0, sizeof(v15));
      __asm
      {
        vmovups ymm0, [rsp+5C8h+var_580]
        vmovups ymmword ptr [r14], ymm0
      }
      v16 = 0ui64;
      __asm
      {
        vmovups xmm1, [rsp+5C8h+var_560]
        vmovups xmmword ptr [r14+20h], xmm1
      }
      v17 = 0i64;
      __asm
      {
        vmovsd  xmm0, [rsp+5C8h+var_550]
        vmovsd  qword ptr [r14+30h], xmm0
      }
      *(_DWORD *)&_R14->weapon.weaponCamo = 0;
      _R14->singleModelIndex = truncate_cast<unsigned short,unsigned int>(assetIndex);
      RequestSource = BG_AssetStreaming_GetRequestSource(ViewHandsRequests->requestItems);
      sourceList[v5] = RequestSource;
      if ( (unsigned int)RequestSource > ASSET_STREAMING_REQUEST_EQUIPPED_VIEW )
      {
        LODWORD(v13) = 7;
        LODWORD(v12) = RequestSource;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 792, ASSERT_TYPE_ASSERT, "( sources[requestCount] ) <= ( ((1 << (3)) - 1) )", "sources[requestCount] not in [0, STREAM_SYNC_MAX_SOURCE]\n\t%u not in [0, %u]", v12, v13) )
          __debugbreak();
      }
      v5 = (unsigned int)(v5 + 1);
      ViewHandsRequests = (ViewHandsStreamingRequestList *)((char *)ViewHandsRequests + 72);
    }
    while ( (unsigned int)v5 < v4 );
    if ( (_DWORD)v5 )
      SV_StreamSync_ClientAddViewModelLoad(clientIndex, entryList, sourceList, v5);
  }
}

/*
==============
G_CharacterStreaming_LoadGlobalWorldModels
==============
*/
void G_CharacterStreaming_LoadGlobalWorldModels()
{
  const dvar_t *v0; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int i; 
  CharacterStreamingRequest *CurrentRequests; 
  CharacterStreamingRequest *v11; 
  unsigned int bodyIndex; 
  __int64 v13; 
  bool v14; 
  unsigned int v15; 
  unsigned int v16; 
  const char *Name; 
  unsigned int v18; 
  unsigned int headIndex; 
  __int64 v20; 
  bool v21; 
  unsigned int v22; 
  unsigned int v23; 
  const char *v24; 
  unsigned int j; 
  CharacterStreamingRequest *NextEquippedRequests; 
  CharacterStreamingRequest *v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  char v31; 
  unsigned int v32; 
  unsigned int v33; 
  bool *p_warnBodyFailure; 
  const char *v35; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 v38; 
  char v39; 
  unsigned int v40; 
  unsigned int v41; 
  bool *p_warnHeadFailure; 
  const char *v43; 
  unsigned int k; 
  CharacterStreamingRequest *ClassSelectRequests; 
  CharacterStreamingRequest *v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v49; 
  char v50; 
  unsigned int v51; 
  unsigned int v52; 
  bool *v53; 
  const char *v54; 
  unsigned int v55; 
  unsigned int v56; 
  __int64 v57; 
  char v58; 
  unsigned int v59; 
  unsigned int v60; 
  bool *v61; 
  const char *v62; 
  __int64 v63; 
  CharacterStreamingRequest *v64; 
  unsigned int v65; 
  unsigned int v66; 
  __int64 v67; 
  char v68; 
  unsigned int v69; 
  unsigned int v70; 
  bool *v71; 
  const char *v72; 
  unsigned int v73; 
  unsigned int v74; 
  __int64 v75; 
  char v76; 
  unsigned int v77; 
  unsigned int v78; 
  bool *v79; 
  const char *v80; 
  __int64 v81; 
  __int64 v82; 
  unsigned int v83; 
  unsigned int MaxWorldEntryCount; 
  unsigned int bodySources[48]; 
  unsigned int bodyIndices[48]; 
  unsigned int headSources[48]; 
  unsigned int headIndices[48]; 

  v0 = DCONST_DVARBOOL_g_globalCustomizationStreamingEnabled;
  if ( !DCONST_DVARBOOL_g_globalCustomizationStreamingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_globalCustomizationStreamingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = SvClient::ms_clientCount;
    v2 = 0i64;
    v3 = 0i64;
    MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_BODY, SvClient::ms_clientCount);
    v4 = MaxWorldEntryCount;
    v5 = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_HEAD, v1);
    v6 = 20;
    v83 = v5;
    v7 = v5;
    if ( v1 <= 0x14 )
      v6 = v1;
    v8 = 2 * v6 + 8;
    if ( MaxWorldEntryCount > v8 )
    {
      LODWORD(v82) = 2 * v6 + 8;
      LODWORD(v81) = MaxWorldEntryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 875, ASSERT_TYPE_ASSERT, "( maxBodyCount ) <= ( (2 * (maxClientCount <= (20) ? maxClientCount : (20)) + 8) )", "maxBodyCount <= MAX_BODIES_STREAMED_DYNAMIC( maxClientCount )\n\t%i, %i", v81, v82) )
        __debugbreak();
    }
    if ( v7 > v8 )
    {
      LODWORD(v82) = v8;
      LODWORD(v81) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 876, ASSERT_TYPE_ASSERT, "( maxHeadCount ) <= ( (2 * (maxClientCount <= (20) ? maxClientCount : (20)) + 8) )", "maxHeadCount <= MAX_HEADS_STREAMED_DYNAMIC( maxClientCount )\n\t%i, %i", v81, v82) )
        __debugbreak();
    }
    for ( i = 0; i < level.maxclients; ++i )
    {
      if ( i >= 0xC8 )
      {
        LODWORD(v82) = 200;
        LODWORD(v81) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      if ( s_clientStreamingRequests[i].isActive )
      {
        CurrentRequests = G_CharacterStreaming_GetCurrentRequests(i);
        v11 = CurrentRequests;
        if ( CurrentRequests->isValid )
        {
          bodyIndex = CurrentRequests->bodyIndex;
          if ( (unsigned int)v2 > v4 )
          {
            LODWORD(v82) = v4;
            LODWORD(v81) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
          }
          v13 = 0i64;
          v14 = 1;
          if ( (_DWORD)v2 )
          {
            v15 = 0;
            while ( bodyIndices[v15] != bodyIndex )
            {
              v13 = v15 + 1;
              v15 = v13;
              if ( (unsigned int)v13 >= (unsigned int)v2 )
                goto LABEL_26;
            }
            if ( v15 >= (unsigned int)v2 )
            {
              LODWORD(v82) = v2;
              LODWORD(v81) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v16 = bodySources[v13];
            if ( v16 < 4 )
              v16 = 4;
            bodySources[v13] = v16;
          }
          else
          {
LABEL_26:
            if ( (unsigned int)v2 >= MaxWorldEntryCount )
            {
              v14 = 0;
            }
            else
            {
              bodyIndices[v2] = bodyIndex;
              bodySources[v2] = 4;
              v2 = (unsigned int)(v2 + 1);
            }
          }
          Name = SV_ClientMP_GetName(i);
          G_CharacterStreaming_ProcessRequest(&v11->warnBodyFailure, v14, "current body", Name);
          v18 = v83;
          headIndex = v11->headIndex;
          if ( (unsigned int)v3 > v83 )
          {
            LODWORD(v82) = v83;
            LODWORD(v81) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
            v18 = v83;
          }
          v20 = 0i64;
          v21 = 1;
          if ( (_DWORD)v3 )
          {
            v22 = 0;
            while ( headIndices[v22] != headIndex )
            {
              v20 = v22 + 1;
              v22 = v20;
              if ( (unsigned int)v20 >= (unsigned int)v3 )
                goto LABEL_43;
            }
            if ( v22 >= (unsigned int)v3 )
            {
              LODWORD(v82) = v3;
              LODWORD(v81) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v23 = headSources[v20];
            if ( v23 < 4 )
              v23 = 4;
            headSources[v20] = v23;
          }
          else
          {
LABEL_43:
            if ( (unsigned int)v3 >= v18 )
            {
              v21 = 0;
            }
            else
            {
              headIndices[v3] = headIndex;
              headSources[v3] = 4;
              v3 = (unsigned int)(v3 + 1);
            }
          }
          v24 = SV_ClientMP_GetName(i);
          G_CharacterStreaming_ProcessRequest(&v11->warnHeadFailure, v21, "current head", v24);
          v4 = MaxWorldEntryCount;
        }
      }
    }
    for ( j = 0; j < level.maxclients; ++j )
    {
      if ( j >= 0xC8 )
      {
        LODWORD(v82) = 200;
        LODWORD(v81) = j;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      if ( s_clientStreamingRequests[j].isActive )
      {
        NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(j);
        v27 = NextEquippedRequests;
        if ( NextEquippedRequests->isValid )
        {
          v28 = MaxWorldEntryCount;
          v29 = NextEquippedRequests->bodyIndex;
          if ( (unsigned int)v2 > MaxWorldEntryCount )
          {
            LODWORD(v82) = MaxWorldEntryCount;
            LODWORD(v81) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
            v28 = MaxWorldEntryCount;
          }
          v30 = 0i64;
          v31 = 1;
          if ( (_DWORD)v2 )
          {
            v32 = 0;
            while ( bodyIndices[v32] != v29 )
            {
              v30 = v32 + 1;
              v32 = v30;
              if ( (unsigned int)v30 >= (unsigned int)v2 )
                goto LABEL_68;
            }
            if ( v32 >= (unsigned int)v2 )
            {
              LODWORD(v82) = v2;
              LODWORD(v81) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v33 = bodySources[v30];
            if ( v33 < 3 )
              v33 = 3;
            bodySources[v30] = v33;
          }
          else
          {
LABEL_68:
            if ( (unsigned int)v2 >= v28 )
            {
              v31 = 0;
            }
            else
            {
              bodyIndices[v2] = v29;
              bodySources[v2] = 3;
              v2 = (unsigned int)(v2 + 1);
            }
          }
          p_warnBodyFailure = &v27->warnBodyFailure;
          v35 = SV_ClientMP_GetName(j);
          if ( v27 == (CharacterStreamingRequest *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
            __debugbreak();
          if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
            __debugbreak();
          if ( v31 )
          {
            *p_warnBodyFailure = 1;
          }
          else if ( *p_warnBodyFailure )
          {
            Com_PrintWarning(16, "Could not add %s character model request for %s\n", "next equipped body", v35);
            *p_warnBodyFailure = 0;
          }
          v36 = v83;
          v37 = v27->headIndex;
          if ( (unsigned int)v3 > v83 )
          {
            LODWORD(v82) = v83;
            LODWORD(v81) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
            v36 = v83;
          }
          v38 = 0i64;
          v39 = 1;
          if ( (_DWORD)v3 )
          {
            v40 = 0;
            while ( headIndices[v40] != v37 )
            {
              v38 = v40 + 1;
              v40 = v38;
              if ( (unsigned int)v38 >= (unsigned int)v3 )
                goto LABEL_95;
            }
            if ( v40 >= (unsigned int)v3 )
            {
              LODWORD(v82) = v3;
              LODWORD(v81) = v38;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v41 = headSources[v38];
            if ( v41 < 3 )
              v41 = 3;
            headSources[v38] = v41;
          }
          else
          {
LABEL_95:
            if ( (unsigned int)v3 >= v36 )
            {
              v39 = 0;
            }
            else
            {
              headIndices[v3] = v37;
              headSources[v3] = 3;
              v3 = (unsigned int)(v3 + 1);
            }
          }
          p_warnHeadFailure = &v27->warnHeadFailure;
          v43 = SV_ClientMP_GetName(j);
          if ( v27 == (CharacterStreamingRequest *)-2i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
            __debugbreak();
          if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
            __debugbreak();
          if ( v39 )
          {
            *p_warnHeadFailure = 1;
          }
          else if ( *p_warnHeadFailure )
          {
            Com_PrintWarning(16, "Could not add %s character model request for %s\n", "next equipped head", v43);
            *p_warnHeadFailure = 0;
          }
        }
      }
    }
    for ( k = 0; k < level.maxclients; ++k )
    {
      if ( k >= 0xC8 )
      {
        LODWORD(v82) = 200;
        LODWORD(v81) = k;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      if ( s_clientStreamingRequests[k].isActive )
      {
        ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(k);
        v46 = ClassSelectRequests;
        if ( ClassSelectRequests->isValid )
        {
          v47 = MaxWorldEntryCount;
          v48 = ClassSelectRequests->bodyIndex;
          if ( (unsigned int)v2 > MaxWorldEntryCount )
          {
            LODWORD(v82) = MaxWorldEntryCount;
            LODWORD(v81) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
            v47 = MaxWorldEntryCount;
          }
          v49 = 0i64;
          v50 = 1;
          if ( (_DWORD)v2 )
          {
            v51 = 0;
            while ( bodyIndices[v51] != v48 )
            {
              v49 = v51 + 1;
              v51 = v49;
              if ( (unsigned int)v49 >= (unsigned int)v2 )
                goto LABEL_129;
            }
            if ( v51 >= (unsigned int)v2 )
            {
              LODWORD(v82) = v2;
              LODWORD(v81) = v49;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v52 = bodySources[v49];
            if ( v52 < 2 )
              v52 = 2;
            bodySources[v49] = v52;
          }
          else
          {
LABEL_129:
            if ( (unsigned int)v2 >= v47 )
            {
              v50 = 0;
            }
            else
            {
              bodyIndices[v2] = v48;
              bodySources[v2] = 2;
              v2 = (unsigned int)(v2 + 1);
            }
          }
          v53 = &v46->warnBodyFailure;
          v54 = SV_ClientMP_GetName(k);
          if ( v46 == (CharacterStreamingRequest *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
            __debugbreak();
          if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
            __debugbreak();
          if ( v50 )
          {
            *v53 = 1;
          }
          else if ( *v53 )
          {
            Com_PrintWarning(16, "Could not add %s character model request for %s\n", "class select body", v54);
            *v53 = 0;
          }
          v55 = v83;
          v56 = v46->headIndex;
          if ( (unsigned int)v3 > v83 )
          {
            LODWORD(v82) = v83;
            LODWORD(v81) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
              __debugbreak();
            v55 = v83;
          }
          v57 = 0i64;
          v58 = 1;
          if ( (_DWORD)v3 )
          {
            v59 = 0;
            while ( headIndices[v59] != v56 )
            {
              v57 = v59 + 1;
              v59 = v57;
              if ( (unsigned int)v57 >= (unsigned int)v3 )
                goto LABEL_156;
            }
            if ( v59 >= (unsigned int)v3 )
            {
              LODWORD(v82) = v3;
              LODWORD(v81) = v57;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
                __debugbreak();
            }
            v60 = headSources[v57];
            if ( v60 < 2 )
              v60 = 2;
            headSources[v57] = v60;
          }
          else
          {
LABEL_156:
            if ( (unsigned int)v3 >= v55 )
            {
              v58 = 0;
            }
            else
            {
              headIndices[v3] = v56;
              headSources[v3] = 2;
              v3 = (unsigned int)(v3 + 1);
            }
          }
          v61 = &v46->warnHeadFailure;
          v62 = SV_ClientMP_GetName(k);
          if ( v46 == (CharacterStreamingRequest *)-2i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
            __debugbreak();
          if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
            __debugbreak();
          if ( v58 )
          {
            *v61 = 1;
          }
          else if ( *v61 )
          {
            Com_PrintWarning(16, "Could not add %s character model request for %s\n", "class select head", v62);
            *v61 = 0;
          }
        }
      }
    }
    v63 = 0i64;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned int)v63 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        {
          if ( (_DWORD)v2 )
            SV_StreamSync_AddBodyModelLoad(bodyIndices, bodySources, v2);
          if ( (_DWORD)v3 )
            SV_StreamSync_AddHeadModelLoad(headIndices, headSources, v3);
          return;
        }
        if ( (unsigned int)v63 >= 8 )
        {
          LODWORD(v82) = 8;
          LODWORD(v81) = v63;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v81, v82) )
            __debugbreak();
        }
        v64 = &s_corpseStreamingRequests[v63];
        if ( v64->isValid )
          break;
LABEL_239:
        v63 = (unsigned int)(v63 + 1);
      }
      v65 = MaxWorldEntryCount;
      v66 = s_corpseStreamingRequests[v63].bodyIndex;
      if ( (unsigned int)v2 > MaxWorldEntryCount )
      {
        LODWORD(v82) = MaxWorldEntryCount;
        LODWORD(v81) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
          __debugbreak();
        v65 = MaxWorldEntryCount;
      }
      v67 = 0i64;
      v68 = 1;
      if ( (_DWORD)v2 )
      {
        v69 = 0;
        while ( bodyIndices[v69] != v66 )
        {
          v67 = v69 + 1;
          v69 = v67;
          if ( (unsigned int)v67 >= (unsigned int)v2 )
            goto LABEL_193;
        }
        if ( v69 >= (unsigned int)v2 )
        {
          LODWORD(v82) = v2;
          LODWORD(v81) = v67;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
            __debugbreak();
        }
        v70 = bodySources[v67];
        if ( v70 < 4 )
          v70 = 4;
        bodySources[v67] = v70;
      }
      else
      {
LABEL_193:
        if ( (unsigned int)v2 >= v65 )
        {
          v68 = 0;
        }
        else
        {
          bodyIndices[v2] = v66;
          bodySources[v2] = 4;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      v71 = &v64->warnBodyFailure;
      v72 = j_va("index %d", (unsigned int)v63);
      if ( v64 == (CharacterStreamingRequest *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
        __debugbreak();
      if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
        __debugbreak();
      if ( v68 )
      {
        *v71 = 1;
      }
      else if ( *v71 )
      {
        Com_PrintWarning(16, "Could not add %s character model request for %s\n", "corpse body", v72);
        *v71 = 0;
      }
      v73 = v83;
      v74 = v64->headIndex;
      if ( (unsigned int)v3 > v83 )
      {
        LODWORD(v82) = v83;
        LODWORD(v81) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 829, ASSERT_TYPE_ASSERT, "( *modelCount ) <= ( maxModelCount )", "*modelCount not in [0, maxModelCount]\n\t%u not in [0, %u]", v81, v82) )
          __debugbreak();
        v73 = v83;
      }
      v75 = 0i64;
      v76 = 1;
      if ( (_DWORD)v3 )
      {
        v77 = 0;
        while ( headIndices[v77] != v74 )
        {
          v75 = v77 + 1;
          v77 = v75;
          if ( (unsigned int)v75 >= (unsigned int)v3 )
            goto LABEL_220;
        }
        if ( v77 >= (unsigned int)v3 )
        {
          LODWORD(v82) = v3;
          LODWORD(v81) = v75;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( (*modelCount) )", "listIndex doesn't index (*modelCount)\n\t%i not in [0, %i)", v81, v82) )
            __debugbreak();
        }
        v78 = headSources[v75];
        if ( v78 < 4 )
          v78 = 4;
        headSources[v75] = v78;
      }
      else
      {
LABEL_220:
        if ( (unsigned int)v3 >= v73 )
        {
          v76 = 0;
        }
        else
        {
          headIndices[v3] = v74;
          headSources[v3] = 4;
          v3 = (unsigned int)(v3 + 1);
        }
      }
      v79 = &v64->warnHeadFailure;
      v80 = j_va("index %d", (unsigned int)v63);
      if ( v64 == (CharacterStreamingRequest *)-2i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
        __debugbreak();
      if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
        __debugbreak();
      if ( v76 )
      {
        *v79 = 1;
        goto LABEL_239;
      }
      if ( !*v79 )
        goto LABEL_239;
      Com_PrintWarning(16, "Could not add %s character model request for %s\n", "corpse head", v80);
      v63 = (unsigned int)(v63 + 1);
      *v79 = 0;
    }
  }
}

/*
==============
G_CharacterStreaming_PrintClientWorldModelRequests
==============
*/
void G_CharacterStreaming_PrintClientWorldModelRequests(const unsigned int clientIndex, CustomizationModelType customizationType)
{
  unsigned int v3; 
  const char *v4; 
  __int64 v5; 
  unsigned int v6; 
  CharacterStreamingRequest *CurrentRequests; 
  unsigned int bodyIndex; 
  StreamSyncClientType StreamTypeForCustomization; 
  bool v13; 
  CharacterStreamingRequest *NextEquippedRequests; 
  unsigned int headIndex; 
  StreamSyncClientType v16; 
  bool v20; 
  const char *v21; 
  CharacterStreamingRequest *ClassSelectRequests; 
  unsigned int v23; 
  StreamSyncClientType v24; 
  bool v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  unsigned int v33; 
  StreamSyncClientType v34; 
  int HasViewModelLoaded; 
  const char *v39; 
  char *fmt; 
  __int64 v41; 
  __int64 v42; 
  const char *ModelName; 
  _BYTE v45[32]; 
  __int128 v46; 
  __int64 v47; 
  const char *v48; 
  _BYTE v49[32]; 
  __int128 v50; 
  __int64 v51; 
  _BYTE v52[32]; 
  __int128 v53; 
  __int64 v54; 
  ComStreamSyncEntry v55; 
  ComStreamSyncEntry modelList; 
  ComStreamSyncEntry v57; 

  v3 = clientIndex;
  if ( (unsigned int)customizationType > CUSTOMIZATION_TYPE_BODY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 201, ASSERT_TYPE_ASSERT, "( customizationType == CUSTOMIZATION_TYPE_BODY || customizationType == CUSTOMIZATION_TYPE_HEAD )", (const char *)&queryFormat, "customizationType == CUSTOMIZATION_TYPE_BODY || customizationType == CUSTOMIZATION_TYPE_HEAD") )
    __debugbreak();
  v4 = "Head";
  if ( customizationType == CUSTOMIZATION_TYPE_BODY )
    v4 = "Body";
  v48 = v4;
  Com_Printf(15, "***** Begin Client[%d] %s Request List *****\n", v3, v4);
  v5 = 0i64;
  v6 = 0;
  if ( level.maxclients )
  {
    do
    {
      if ( v6 >= 0xC8 )
      {
        LODWORD(v42) = 200;
        LODWORD(v41) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      if ( s_clientStreamingRequests[v6].isActive )
      {
        CurrentRequests = G_CharacterStreaming_GetCurrentRequests(v6);
        if ( CurrentRequests->isValid )
        {
          if ( customizationType == CUSTOMIZATION_TYPE_BODY )
            bodyIndex = CurrentRequests->bodyIndex;
          else
            bodyIndex = CurrentRequests->headIndex;
          StreamTypeForCustomization = Com_StreamSync_GetStreamTypeForCustomization(customizationType);
          if ( Com_StreamSyncEntry_GetType(StreamTypeForCustomization) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
            __debugbreak();
          memset(v49, 0, sizeof(v49));
          __asm
          {
            vmovups ymm0, [rbp+120h+var_178]
            vmovups ymmword ptr [rbp+120h+modelList], ymm0
          }
          v50 = 0ui64;
          __asm { vmovups xmm1, [rbp+120h+var_158] }
          v51 = 0i64;
          __asm
          {
            vmovsd  xmm0, [rbp+120h+var_148]
            vmovsd  qword ptr [rbp+120h+modelList+30h], xmm0
            vmovups xmmword ptr [rbp+120h+modelList+20h], xmm1
          }
          *(_DWORD *)&modelList.weapon.weaponCamo = 0;
          modelList.singleModelIndex = truncate_cast<unsigned short,unsigned int>(bodyIndex);
          v13 = SV_StreamSync_ClientHasViewModelLoaded(v3, &modelList, 1u) != 0;
          ModelName = BG_Customization_GetModelName(customizationType, bodyIndex);
        }
        else
        {
          v13 = 1;
          ModelName = "<none>";
        }
        NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(v6);
        if ( NextEquippedRequests->isValid )
        {
          if ( customizationType == CUSTOMIZATION_TYPE_BODY )
            headIndex = NextEquippedRequests->bodyIndex;
          else
            headIndex = NextEquippedRequests->headIndex;
          v16 = Com_StreamSync_GetStreamTypeForCustomization(customizationType);
          if ( Com_StreamSyncEntry_GetType(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
            __debugbreak();
          memset(v52, 0, sizeof(v52));
          __asm
          {
            vmovups ymm0, [rbp+120h+var_138]
            vmovups ymmword ptr [rbp+120h+var_78], ymm0
          }
          v53 = 0ui64;
          __asm { vmovups xmm1, [rbp+120h+var_118] }
          v54 = 0i64;
          __asm
          {
            vmovsd  xmm0, [rbp+120h+var_108]
            vmovsd  qword ptr [rbp+120h+var_78+30h], xmm0
            vmovups xmmword ptr [rbp+120h+var_78+20h], xmm1
          }
          *(_DWORD *)&v57.weapon.weaponCamo = 0;
          v57.singleModelIndex = truncate_cast<unsigned short,unsigned int>(headIndex);
          v20 = SV_StreamSync_ClientHasViewModelLoaded(v3, &v57, 1u) != 0;
          v21 = BG_Customization_GetModelName(customizationType, headIndex);
        }
        else
        {
          v20 = 1;
          v21 = "<none>";
        }
        ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(v6);
        if ( ClassSelectRequests->isValid )
        {
          if ( customizationType == CUSTOMIZATION_TYPE_BODY )
            v23 = ClassSelectRequests->bodyIndex;
          else
            v23 = ClassSelectRequests->headIndex;
          v24 = Com_StreamSync_GetStreamTypeForCustomization(customizationType);
          if ( Com_StreamSyncEntry_GetType(v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
            __debugbreak();
          memset(v45, 0, sizeof(v45));
          __asm
          {
            vmovups ymm0, [rsp+220h+var_1C0]
            vmovups ymmword ptr [rbp+120h+var_F8], ymm0
          }
          v46 = 0ui64;
          __asm { vmovups xmm1, [rbp+120h+var_1A0] }
          v47 = 0i64;
          __asm
          {
            vmovsd  xmm0, [rbp+120h+var_190]
            vmovsd  qword ptr [rbp+120h+var_F8+30h], xmm0
            vmovups xmmword ptr [rbp+120h+var_F8+20h], xmm1
          }
          *(_DWORD *)&v55.weapon.weaponCamo = 0;
          v55.singleModelIndex = truncate_cast<unsigned short,unsigned int>(v23);
          v28 = SV_StreamSync_ClientHasViewModelLoaded(clientIndex, &v55, 1u) != 0;
          v29 = BG_Customization_GetModelName(customizationType, v23);
        }
        else
        {
          v28 = 1;
          v29 = "<none>";
        }
        v30 = "False";
        v31 = "False";
        if ( v28 )
          v30 = "True";
        v32 = "False";
        if ( v20 )
          v31 = "True";
        if ( v13 )
          v32 = "True";
        Com_Printf(15, "Customization World Request For Client[%d] - CurrentLoaded:%s CurrentModel:%s NextLoaded:%s NextModel:%s SelectedLoaded:%s SelectedModel:%s\n", v6, v32, ModelName, v31, v21, v30, v29);
        v3 = clientIndex;
      }
      else
      {
        Com_Printf(16, "***** Customization World Request For Client[%d] : Inactive *****\n", v6);
      }
      ++v6;
    }
    while ( v6 < level.maxclients );
    v5 = 0i64;
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned int)v5 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( (unsigned int)v5 >= 8 )
    {
      LODWORD(v42) = 8;
      LODWORD(v41) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v41, v42) )
        __debugbreak();
    }
    if ( customizationType == CUSTOMIZATION_TYPE_BODY )
      v33 = s_corpseStreamingRequests[v5].bodyIndex;
    else
      v33 = s_corpseStreamingRequests[v5].headIndex;
    v34 = Com_StreamSync_GetStreamTypeForCustomization(customizationType);
    if ( Com_StreamSyncEntry_GetType(v34) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
      __debugbreak();
    memset(v45, 0, sizeof(v45));
    __asm
    {
      vmovups ymm0, [rsp+220h+var_1C0]
      vmovups ymmword ptr [rbp+120h+var_F8], ymm0
    }
    v46 = 0ui64;
    __asm { vmovups xmm1, [rbp+120h+var_1A0] }
    v47 = 0i64;
    __asm
    {
      vmovsd  xmm0, [rbp+120h+var_190]
      vmovsd  qword ptr [rbp+120h+var_F8+30h], xmm0
      vmovups xmmword ptr [rbp+120h+var_F8+20h], xmm1
    }
    *(_DWORD *)&v55.weapon.weaponCamo = 0;
    v55.singleModelIndex = truncate_cast<unsigned short,unsigned int>(v33);
    HasViewModelLoaded = SV_StreamSync_ClientHasViewModelLoaded(v3, &v55, 1u);
    fmt = (char *)BG_Customization_GetModelName(customizationType, v33);
    v39 = "False";
    if ( HasViewModelLoaded )
      v39 = "True";
    Com_Printf(15, "Customization World Request For Corpse[%d] - CorpseLoaded:%s CorpseModel:%s\n", (unsigned int)v5, v39, fmt);
    v5 = (unsigned int)(v5 + 1);
  }
  Com_Printf(15, "***** End Client[%d] %s Request List *****\n", v3, v48);
}

/*
==============
G_CharacterStreaming_PrintViewModelRequests
==============
*/
void G_CharacterStreaming_PrintViewModelRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int i; 
  unsigned int assetIndex; 
  unsigned __int16 v9; 
  unsigned int v10; 
  const char *ModelName; 
  int HasViewModelLoaded; 
  const char *v13; 
  char *fmt; 
  _BYTE v15[32]; 
  __int128 v16; 
  __int64 v17; 
  ComStreamSyncEntry modelList; 

  v1 = clientIndex;
  if ( clientIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", clientIndex, 200) )
    __debugbreak();
  if ( s_clientStreamingRequests[v1].isActive )
  {
    ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(v1);
    MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(v1);
    Com_Printf(15, "***** Begin Client[%d] View Hands Request List *****\n", (unsigned int)v1);
    for ( i = 0; i < MaxViewRequests; ViewHandsRequests = (ViewHandsStreamingRequestList *)((char *)ViewHandsRequests + 72) )
    {
      assetIndex = ViewHandsRequests->requestItems[0].assetIndex;
      if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
        __debugbreak();
      memset(v15, 0, sizeof(v15));
      __asm
      {
        vmovups ymm0, [rsp+0F8h+var_B8]
        vmovups ymmword ptr [rsp+0F8h+modelList], ymm0
      }
      v16 = 0ui64;
      __asm { vmovups xmm1, [rsp+0F8h+var_98] }
      v17 = 0i64;
      __asm
      {
        vmovsd  xmm0, [rsp+0F8h+var_88]
        vmovsd  qword ptr [rsp+0F8h+modelList+30h], xmm0
        vmovups xmmword ptr [rsp+0F8h+modelList+20h], xmm1
      }
      *(_DWORD *)&modelList.weapon.weaponCamo = 0;
      v9 = truncate_cast<unsigned short,unsigned int>(assetIndex);
      v10 = ViewHandsRequests->requestItems[0].assetIndex;
      modelList.singleModelIndex = v9;
      ModelName = BG_Customization_GetModelName(CUSTOMIZATION_TYPE_VIEWHANDS, v10);
      HasViewModelLoaded = SV_StreamSync_ClientHasViewModelLoaded(v1, &modelList, 1u);
      v13 = "False";
      if ( HasViewModelLoaded )
        v13 = "True";
      LODWORD(fmt) = ViewHandsRequests->requestItems[0].frame;
      Com_Printf(15, "Customization View Request [%d] - SourceMask:0x%1x Frame:%d Loaded:%s Model:%s\n", i++, ViewHandsRequests->requestItems[0].sourceMask, fmt, v13, ModelName);
    }
    Com_Printf(15, "***** End Client[%d] View Hands Request List *****\n", (unsigned int)v1);
  }
  else
  {
    Com_Printf(15, "***** Client[%d] : Inactive *****\n", (unsigned int)v1);
  }
}

/*
==============
G_CharacterStreaming_PrintViewRequests
==============
*/
void G_CharacterStreaming_PrintViewRequests()
{
  unsigned int i; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int j; 
  unsigned int assetIndex; 
  unsigned __int16 v8; 
  unsigned int v9; 
  const char *ModelName; 
  int HasViewModelLoaded; 
  const char *v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  _BYTE v16[32]; 
  __int128 v17; 
  __int64 v18; 
  ComStreamSyncEntry modelList; 

  Com_Printf(15, "*******************************\n");
  Com_Printf(15, "***** View Arms Streaming *****\n");
  for ( i = 0; i < level.maxclients; ++i )
  {
    if ( i >= 0xC8 )
    {
      LODWORD(v15) = 200;
      LODWORD(v14) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( s_clientStreamingRequests[i].isActive )
    {
      ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(i);
      MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(i);
      Com_Printf(15, "***** Begin Client[%d] View Hands Request List *****\n", i);
      for ( j = 0; j < MaxViewRequests; ViewHandsRequests = (ViewHandsStreamingRequestList *)((char *)ViewHandsRequests + 72) )
      {
        assetIndex = ViewHandsRequests->requestItems[0].assetIndex;
        if ( Com_StreamSyncEntry_GetType(STREAM_SYNC_CLIENT_TYPE_FIRST_VIEW_MODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_streamsync_mp.h", 112, ASSERT_TYPE_ASSERT, "(Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL)", (const char *)&queryFormat, "Com_StreamSyncEntry_GetType( type ) == ComStreamSyncEntryType::SINGLEMODEL") )
          __debugbreak();
        memset(v16, 0, sizeof(v16));
        __asm
        {
          vmovups ymm0, [rsp+0F8h+var_B8]
          vmovups ymmword ptr [rsp+0F8h+modelList], ymm0
        }
        v17 = 0ui64;
        __asm { vmovups xmm1, [rsp+0F8h+var_98] }
        v18 = 0i64;
        __asm
        {
          vmovsd  xmm0, [rsp+0F8h+var_88]
          vmovsd  qword ptr [rsp+0F8h+modelList+30h], xmm0
          vmovups xmmword ptr [rsp+0F8h+modelList+20h], xmm1
        }
        *(_DWORD *)&modelList.weapon.weaponCamo = 0;
        v8 = truncate_cast<unsigned short,unsigned int>(assetIndex);
        v9 = ViewHandsRequests->requestItems[0].assetIndex;
        modelList.singleModelIndex = v8;
        ModelName = BG_Customization_GetModelName(CUSTOMIZATION_TYPE_VIEWHANDS, v9);
        HasViewModelLoaded = SV_StreamSync_ClientHasViewModelLoaded(i, &modelList, 1u);
        v12 = "False";
        if ( HasViewModelLoaded )
          v12 = "True";
        LODWORD(fmt) = ViewHandsRequests->requestItems[0].frame;
        Com_Printf(15, "Customization View Request [%d] - SourceMask:0x%1x Frame:%d Loaded:%s Model:%s\n", j++, ViewHandsRequests->requestItems[0].sourceMask, fmt, v12, ModelName);
      }
      Com_Printf(15, "***** End Client[%d] View Hands Request List *****\n", i);
    }
    else
    {
      Com_Printf(15, "***** Client[%d] : Inactive *****\n", i);
    }
  }
}

/*
==============
G_CharacterStreaming_PrintWorldRequests
==============
*/
void G_CharacterStreaming_PrintWorldRequests(const StreamSyncWorldType streamType)
{
  __int64 v2; 
  unsigned int i; 
  CharacterStreamingRequest *CurrentRequests; 
  CharacterStreamingRequest *v5; 
  unsigned int bodyIndex; 
  CharacterStreamingRequest *NextEquippedRequests; 
  CharacterStreamingRequest *v8; 
  int headIndex; 
  CharacterStreamingRequest *ClassSelectRequests; 
  int v11; 
  bool v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 

  Com_Printf(16, "*****************************\n");
  Com_Printf(16, "******* Stream Type %d ******\n", (unsigned int)streamType);
  v2 = 0i64;
  for ( i = 0; i < level.maxclients; ++i )
  {
    if ( i >= 0xC8 )
    {
      LODWORD(v20) = 200;
      LODWORD(v19) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( s_clientStreamingRequests[i].isActive )
    {
      CurrentRequests = G_CharacterStreaming_GetCurrentRequests(i);
      v5 = CurrentRequests;
      if ( streamType == STREAM_SYNC_WORLD_TYPE_BODY )
        bodyIndex = CurrentRequests->bodyIndex;
      else
        bodyIndex = CurrentRequests->headIndex;
      NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(i);
      v8 = NextEquippedRequests;
      if ( streamType == STREAM_SYNC_WORLD_TYPE_BODY )
        headIndex = NextEquippedRequests->bodyIndex;
      else
        headIndex = NextEquippedRequests->headIndex;
      ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(i);
      if ( streamType == STREAM_SYNC_WORLD_TYPE_BODY )
        v11 = ClassSelectRequests->bodyIndex;
      else
        v11 = ClassSelectRequests->headIndex;
      v12 = !ClassSelectRequests->isValid;
      v13 = -1;
      v14 = -1;
      v15 = 0xFFFFFFFFi64;
      if ( !v12 )
        v13 = v11;
      LODWORD(v19) = v13;
      if ( v8->isValid )
        v14 = headIndex;
      LODWORD(fmt) = v14;
      if ( v5->isValid )
        v15 = bodyIndex;
      Com_Printf(16, "***** Client[%d] : Current Model(%d) : Next Model(%d) : Select Model(%d) *****\n", i, v15, fmt, v19);
    }
    else
    {
      Com_Printf(16, "*** Client[%d] : Inactive\n", i);
    }
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned int)v2 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v20) = 8;
      LODWORD(v19) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( streamType == STREAM_SYNC_WORLD_TYPE_BODY )
      v16 = s_corpseStreamingRequests[v2].bodyIndex;
    else
      v16 = s_corpseStreamingRequests[v2].headIndex;
    v17 = 0xFFFFFFFFi64;
    if ( s_corpseStreamingRequests[v2].isValid )
      v17 = v16;
    Com_Printf(15, "***** Corpse[%d] : Model(%d) *****\n", (unsigned int)v2, v17);
    v2 = (unsigned int)(v2 + 1);
  }
}

/*
==============
G_CharacterStreaming_ProcessRequest
==============
*/
void G_CharacterStreaming_ProcessRequest(bool *warningState, const bool requested, const char *requestType, const char *requestSource)
{
  if ( !warningState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( warningState )", (const char *)&queryFormat, "warningState") )
    __debugbreak();
  if ( !requestType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 141, ASSERT_TYPE_ASSERT, "( requestType )", (const char *)&queryFormat, "requestType") )
    __debugbreak();
  if ( !requestSource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "( requestSource )", (const char *)&queryFormat, "requestSource") )
    __debugbreak();
  if ( requested )
  {
    *warningState = 1;
  }
  else if ( *warningState )
  {
    Com_PrintWarning(16, "Could not add %s character model request for %s\n", requestType, requestSource);
    *warningState = 0;
  }
}

/*
==============
G_CharacterStreaming_ReadMigrationState
==============
*/
void G_CharacterStreaming_ReadMigrationState(MemoryFile *memFile)
{
  __int64 v2; 
  unsigned int i; 
  CharacterStreamingRequest *CurrentRequests; 
  unsigned int headIndex; 
  CharacterStreamingRequest *NextEquippedRequests; 
  int v7; 
  CharacterStreamingRequest *ClassSelectRequests; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 1022, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Com_Printf(15, "G_CharacterStreaming: Host migration load.\n");
  MemFile_ReadData(memFile, 0x48440ui64, s_clientStreamingRequests);
  MemFile_ReadData(memFile, 0x60ui64, s_corpseStreamingRequests);
  G_CharacterStreaming_PrintWorldRequests(STREAM_SYNC_WORLD_TYPE_BODY);
  Com_Printf(16, "*****************************\n");
  Com_Printf(16, "******* Stream Type %d ******\n", 0i64);
  v2 = 0i64;
  for ( i = 0; i < level.maxclients; ++i )
  {
    if ( i >= 0xC8 )
    {
      LODWORD(v15) = 200;
      LODWORD(v14) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( s_clientStreamingRequests[i].isActive )
    {
      CurrentRequests = G_CharacterStreaming_GetCurrentRequests(i);
      headIndex = CurrentRequests->headIndex;
      NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(i);
      v7 = NextEquippedRequests->headIndex;
      ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(i);
      v9 = -1;
      v10 = -1;
      v11 = 0xFFFFFFFFi64;
      if ( ClassSelectRequests->isValid )
        v9 = ClassSelectRequests->headIndex;
      LODWORD(v14) = v9;
      if ( NextEquippedRequests->isValid )
        v10 = v7;
      LODWORD(fmt) = v10;
      if ( CurrentRequests->isValid )
        v11 = headIndex;
      Com_Printf(16, "***** Client[%d] : Current Model(%d) : Next Model(%d) : Select Model(%d) *****\n", i, v11, fmt, v14);
    }
    else
    {
      Com_Printf(16, "*** Client[%d] : Inactive\n", i);
    }
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned int)v2 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v15) = 8;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v12 = 0xFFFFFFFFi64;
    if ( s_corpseStreamingRequests[v2].isValid )
      v12 = s_corpseStreamingRequests[v2].headIndex;
    Com_Printf(15, "***** Corpse[%d] : Model(%d) *****\n", (unsigned int)v2, v12);
    v2 = (unsigned int)(v2 + 1);
  }
  G_CharacterStreaming_PrintViewRequests();
}

/*
==============
G_CharacterStreaming_RemoveCustomizationModels
==============
*/
void G_CharacterStreaming_RemoveCustomizationModels(CharacterStreamingRequest *request)
{
  const dvar_t *v2; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 429, ASSERT_TYPE_ASSERT, "( request )", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( request->isValid )
  {
    v2 = DCONST_DVARBOOL_g_characterstreaming_verbose;
    if ( !DCONST_DVARBOOL_g_characterstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_characterstreaming_verbose") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      Com_Printf(15, "Remove requested for body model - requestValid:%d requestBody:%d\n", request->isValid, request->bodyIndex);
      Com_Printf(15, "Remove requested for head model - requestValid:%d requestHead:%d\n", request->isValid, request->headIndex);
    }
    *(_QWORD *)&request->isValid = 0i64;
    request->headIndex = 0;
  }
}

/*
==============
G_CharacterStreaming_SetClassSelectModels
==============
*/
bool G_CharacterStreaming_SetClassSelectModels(const unsigned int clientNum, const unsigned int bodyIndex, const unsigned int headIndex)
{
  CharacterStreamingRequest *ClassSelectRequests; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v9; 
  unsigned __int16 ViewhandIndexForBody; 
  __int64 v12; 
  __int64 v14; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 555, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( bodyIndex >= BG_Customization_GetModelCount(CUSTOMIZATION_TYPE_BODY) )
  {
    LODWORD(v14) = BG_Customization_GetModelCount(CUSTOMIZATION_TYPE_BODY);
    LODWORD(v12) = bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 556, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIndex ) < (unsigned)( BG_Customization_GetModelCount( CUSTOMIZATION_TYPE_BODY ) )", "bodyIndex doesn't index BG_Customization_GetModelCount( CUSTOMIZATION_TYPE_BODY )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) || !G_CharacterStreaming_IsClientActive(clientNum) )
    return 0;
  ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(clientNum);
  ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
  MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
  v9 = MaxViewRequests;
  if ( MaxViewRequests > 0x14 )
  {
    LODWORD(v14) = 20;
    LODWORD(v12) = MaxViewRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 567, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v12, v14) )
      __debugbreak();
  }
  G_CharacterStreaming_SetCustomizationModels(ClassSelectRequests, bodyIndex, headIndex);
  BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v9, ASSET_STREAMING_REQUEST_CLASS_SELECT);
  ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(bodyIndex);
  return BG_AssetStreaming_AddAssetRequest(ViewHandsRequests->requestItems, v9, ViewhandIndexForBody, ASSET_STREAMING_REQUEST_CLASS_SELECT, level.framenum);
}

/*
==============
G_CharacterStreaming_SetCorpseCustomization
==============
*/
void G_CharacterStreaming_SetCorpseCustomization(const unsigned int corpseIndex, const ClientCustomizationInfo *customization)
{
  unsigned int ModelIndex; 
  unsigned int v5; 
  CharacterStreamingRequest *CorpseRequests; 
  __int64 v7; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( corpseIndex >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v7) = corpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 518, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v7, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  if ( !customization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 519, ASSERT_TYPE_ASSERT, "( customization )", (const char *)&queryFormat, "customization") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    ModelIndex = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_BODY, customization);
    v5 = BG_Customization_GetModelIndex(CUSTOMIZATION_TYPE_HEAD, customization);
    CorpseRequests = G_CharacterStreaming_GetCorpseRequests(corpseIndex);
    G_CharacterStreaming_SetCustomizationModels(CorpseRequests, ModelIndex, v5);
  }
}

/*
==============
G_CharacterStreaming_SetCustomizationModels
==============
*/
void G_CharacterStreaming_SetCustomizationModels(CharacterStreamingRequest *request, const unsigned int bodyIndex, const unsigned int headIndex)
{
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 395, ASSERT_TYPE_ASSERT, "( request )", (const char *)&queryFormat, "request") )
    __debugbreak();
  request->bodyIndex = bodyIndex;
  *(_WORD *)&request->isValid = 257;
  request->headIndex = headIndex;
  request->warnHeadFailure = 1;
}

/*
==============
G_CharacterStreaming_SetNextEquippedModels
==============
*/
bool G_CharacterStreaming_SetNextEquippedModels(const unsigned int clientNum, const unsigned int bodyIndex, const unsigned int headIndex)
{
  CharacterStreamingRequest *NextEquippedRequests; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v9; 
  unsigned __int16 ViewhandIndexForBody; 
  __int64 v12; 
  __int64 v14; 
  int maxclients; 

  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  if ( bodyIndex >= BG_Customization_GetModelCount(CUSTOMIZATION_TYPE_BODY) )
  {
    LODWORD(v14) = BG_Customization_GetModelCount(CUSTOMIZATION_TYPE_BODY);
    LODWORD(v12) = bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 609, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIndex ) < (unsigned)( BG_Customization_GetModelCount( CUSTOMIZATION_TYPE_BODY ) )", "bodyIndex doesn't index BG_Customization_GetModelCount( CUSTOMIZATION_TYPE_BODY )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) || !G_CharacterStreaming_IsClientActive(clientNum) )
    return 0;
  NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(clientNum);
  ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
  MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
  v9 = MaxViewRequests;
  if ( MaxViewRequests > 0x14 )
  {
    LODWORD(v14) = 20;
    LODWORD(v12) = MaxViewRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 620, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v12, v14) )
      __debugbreak();
  }
  G_CharacterStreaming_SetCustomizationModels(NextEquippedRequests, bodyIndex, headIndex);
  BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v9, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW);
  ViewhandIndexForBody = BG_Customization_GetViewhandIndexForBody(bodyIndex);
  return BG_AssetStreaming_AddAssetRequest(ViewHandsRequests->requestItems, v9, ViewhandIndexForBody, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW, level.framenum);
}

/*
==============
G_CharacterStreaming_SetNextSpectateViewModels
==============
*/
__int64 G_CharacterStreaming_SetNextSpectateViewModels(const unsigned int clientNum, const unsigned int *const modelIndices, const unsigned int modelCount)
{
  __int64 v4; 
  ViewHandsStreamingRequestList *ViewHandsRequests; 
  unsigned int MaxViewRequests; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 

  v4 = modelCount;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !modelIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 666, ASSERT_TYPE_ASSERT, "( ( modelIndices != nullptr ) )", "%s\n\t( modelIndices ) = %p", "( modelIndices != nullptr )", NULL) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) || !G_CharacterStreaming_IsClientActive(clientNum) )
    return 0i64;
  ViewHandsRequests = G_CharacterStreaming_GetViewHandsRequests(clientNum);
  MaxViewRequests = G_CharacterStreaming_GetMaxViewRequests(clientNum);
  v8 = MaxViewRequests;
  if ( MaxViewRequests > 0x14 )
  {
    LODWORD(v12) = 20;
    LODWORD(v11) = MaxViewRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 678, ASSERT_TYPE_ASSERT, "( maxViewRequestCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "maxViewRequestCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v11, v12) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 0x14 )
  {
    LODWORD(v12) = 20;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 679, ASSERT_TYPE_ASSERT, "( modelCount ) <= ( ((((1 >= 200) ? 1 : 200) <= (20) ? ((1 >= 200) ? 1 : 200) : (20))) )", "modelCount not in [0, MAX_VIEWARMS_STREAMED_STATIC]\n\t%u not in [0, %u]", v11, v12) )
      __debugbreak();
  }
  BG_AssetStreaming_RemoveRequestsFromSource(ViewHandsRequests->requestItems, v8, ASSET_STREAMING_REQUEST_NEXT_SPECTATE_VIEW);
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    do
    {
      if ( !BG_AssetStreaming_AddAssetRequest(ViewHandsRequests->requestItems, v8, *modelIndices, ASSET_STREAMING_REQUEST_NEXT_SPECTATE_VIEW, level.framenum) )
        LODWORD(v4) = v4 - 1;
      ++modelIndices;
      --v9;
    }
    while ( v9 );
  }
  return (unsigned int)v4;
}

/*
==============
G_CharacterStreaming_Shutdown
==============
*/
void G_CharacterStreaming_Shutdown(void)
{
  __int64 v0; 
  unsigned int i; 
  ClientStreamingRequests *v2; 
  CharacterStreamingRequest *CurrentRequests; 
  CharacterStreamingRequest *ClassSelectRequests; 
  CharacterStreamingRequest *NextEquippedRequests; 
  __int64 v6; 
  int maxclients; 
  __int64 v8; 
  int v9; 
  int v10; 

  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
  {
    if ( (unsigned int)(level.maxclients - 1) > 0xC7 )
    {
      v10 = 200;
      v9 = 1;
      maxclients = level.maxclients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 463, ASSERT_TYPE_ASSERT, "( 1 ) <= ( level.maxclients ) && ( level.maxclients ) <= ( 200 )", "level.maxclients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", maxclients, v9, v10) )
        __debugbreak();
    }
    v0 = 0i64;
    for ( i = 0; i < level.maxclients; ++i )
    {
      if ( i >= 0xC8 )
      {
        LODWORD(v8) = 200;
        LODWORD(v6) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      v2 = &s_clientStreamingRequests[i];
      if ( v2->isActive )
      {
        if ( i >= level.maxclients )
        {
          LODWORD(v8) = level.maxclients;
          LODWORD(v6) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 495, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v6, v8) )
            __debugbreak();
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) && G_CharacterStreaming_IsClientActive(i) )
        {
          CurrentRequests = G_CharacterStreaming_GetCurrentRequests(i);
          G_CharacterStreaming_RemoveCustomizationModels(CurrentRequests);
          ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(i);
          G_CharacterStreaming_RemoveCustomizationModels(ClassSelectRequests);
          NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(i);
          G_CharacterStreaming_RemoveCustomizationModels(NextEquippedRequests);
          if ( i >= level.maxclients )
          {
            LODWORD(v8) = level.maxclients;
            LODWORD(v6) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 448, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v6, v8) )
              __debugbreak();
          }
          memset_0(v2, 0, sizeof(ClientStreamingRequests));
        }
      }
    }
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned int)v0 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        break;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned int)v0 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v8) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(v6) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
      {
        if ( (unsigned int)v0 >= 8 )
        {
          LODWORD(v8) = 8;
          LODWORD(v6) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v6, v8) )
            __debugbreak();
        }
        G_CharacterStreaming_RemoveCustomizationModels(&s_corpseStreamingRequests[v0]);
      }
      v0 = (unsigned int)(v0 + 1);
    }
  }
}

/*
==============
G_CharacterStreaming_WriteMigrationState
==============
*/
void G_CharacterStreaming_WriteMigrationState(MemoryFile *memFile)
{
  __int64 v2; 
  unsigned int i; 
  CharacterStreamingRequest *CurrentRequests; 
  unsigned int headIndex; 
  CharacterStreamingRequest *NextEquippedRequests; 
  int v7; 
  CharacterStreamingRequest *ClassSelectRequests; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 1007, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Com_Printf(15, "G_CharacterStreaming: Host migration save.\n");
  MemFile_WriteData(memFile, 0x48440ui64, s_clientStreamingRequests);
  MemFile_WriteData(memFile, 0x60ui64, s_corpseStreamingRequests);
  G_CharacterStreaming_PrintWorldRequests(STREAM_SYNC_WORLD_TYPE_BODY);
  Com_Printf(16, "*****************************\n");
  Com_Printf(16, "******* Stream Type %d ******\n", 0i64);
  v2 = 0i64;
  for ( i = 0; i < level.maxclients; ++i )
  {
    if ( i >= 0xC8 )
    {
      LODWORD(v15) = 200;
      LODWORD(v14) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientStreamingRequests ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_clientStreamingRequests )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( s_clientStreamingRequests[i].isActive )
    {
      CurrentRequests = G_CharacterStreaming_GetCurrentRequests(i);
      headIndex = CurrentRequests->headIndex;
      NextEquippedRequests = G_CharacterStreaming_GetNextEquippedRequests(i);
      v7 = NextEquippedRequests->headIndex;
      ClassSelectRequests = G_CharacterStreaming_GetClassSelectRequests(i);
      v9 = -1;
      v10 = -1;
      v11 = 0xFFFFFFFFi64;
      if ( ClassSelectRequests->isValid )
        v9 = ClassSelectRequests->headIndex;
      LODWORD(v14) = v9;
      if ( NextEquippedRequests->isValid )
        v10 = v7;
      LODWORD(fmt) = v10;
      if ( CurrentRequests->isValid )
        v11 = headIndex;
      Com_Printf(16, "***** Client[%d] : Current Model(%d) : Next Model(%d) : Select Model(%d) *****\n", i, v11, fmt, v14);
    }
    else
    {
      Com_Printf(16, "*** Client[%d] : Inactive\n", i);
    }
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned int)v2 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v15) = 8;
      LODWORD(v14) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_character_streaming_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( s_corpseStreamingRequests ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( s_corpseStreamingRequests )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v12 = 0xFFFFFFFFi64;
    if ( s_corpseStreamingRequests[v2].isValid )
      v12 = s_corpseStreamingRequests[v2].headIndex;
    Com_Printf(15, "***** Corpse[%d] : Model(%d) *****\n", (unsigned int)v2, v12);
    v2 = (unsigned int)(v2 + 1);
  }
  G_CharacterStreaming_PrintViewRequests();
}

