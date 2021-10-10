/*
==============
SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer
==============
*/

bool __fastcall SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(const serverArchive_t *archive, const int frameStart)
{
  return ?SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer@@YA_NPEBUserverArchive_t@@H@Z(archive, frameStart);
}

/*
==============
SV_SnapshotMP_GetArchivedClientInfo
==============
*/

int __fastcall SV_SnapshotMP_GetArchivedClientInfo(int clientNum, bool archiveUsePOTG, int *pArchiveTime, playerState_s *ps, GSnapshotWeaponMap *weaponMap, vec3_t *origin, int *health, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *otherFlags, team_t *team)
{
  return ?SV_SnapshotMP_GetArchivedClientInfo@@YAHH_NPEAHPEAUplayerState_s@@PEAVGSnapshotWeaponMap@@PEATvec3_t@@1PEAV?$GameModeFlagContainer@W4POtherFlagsCommon@@W4POtherFlagsSP@@W4POtherFlagsMP@@$0EA@@@PEAW4team_t@@@Z(clientNum, archiveUsePOTG, pArchiveTime, ps, weaponMap, origin, health, otherFlags, team);
}

/*
==============
SV_SnapshotMP_IsValidArchiveTime
==============
*/

bool __fastcall SV_SnapshotMP_IsValidArchiveTime(const int currentTime, int *inOutServerTime, bool archiveUsePOTG)
{
  return ?SV_SnapshotMP_IsValidArchiveTime@@YA_NHPEAH_N@Z(currentTime, inOutServerTime, archiveUsePOTG);
}

/*
==============
SV_SnapshotMP_GetEarliestArchiveMaxVariance
==============
*/

int __fastcall SV_SnapshotMP_GetEarliestArchiveMaxVariance(const bool archiveUsePOTG)
{
  return ?SV_SnapshotMP_GetEarliestArchiveMaxVariance@@YAH_N@Z(archiveUsePOTG);
}

/*
==============
SV_SnapshotMP_GetArchivedClientTeam
==============
*/

bool __fastcall SV_SnapshotMP_GetArchivedClientTeam(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, team_t *outTeam)
{
  return ?SV_SnapshotMP_GetArchivedClientTeam@@YA_NH_NPEAHPEAW4team_t@@@Z(clientNum, archiveUsePOTG, pArchiveTime, outTeam);
}

/*
==============
SV_SnapshotMP_ArchiveEnabled
==============
*/

int __fastcall SV_SnapshotMP_ArchiveEnabled()
{
  return ?SV_SnapshotMP_ArchiveEnabled@@YAHXZ();
}

/*
==============
SV_SnapshotMP_GetRequestedArchiveFrame
==============
*/

int __fastcall SV_SnapshotMP_GetRequestedArchiveFrame(const serverArchive_t *archiveToUse, int *pArchiveTimeDelta)
{
  return ?SV_SnapshotMP_GetRequestedArchiveFrame@@YAHPEBUserverArchive_t@@PEAH@Z(archiveToUse, pArchiveTimeDelta);
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWorldState
==============
*/

bool __fastcall SV_SnapshotMP_GetCachedSnapshotWorldState(const bool archiveUsePOTG, int *pArchiveTime, cachedSnapshotWorldState_t **outCachedWorldState)
{
  return ?SV_SnapshotMP_GetCachedSnapshotWorldState@@YA_N_NPEAHPEAPEAUcachedSnapshotWorldState_t@@@Z(archiveUsePOTG, pArchiveTime, outCachedWorldState);
}

/*
==============
SV_SnapshotMP_GetEarliestArchivedClientInfoTime
==============
*/

int __fastcall SV_SnapshotMP_GetEarliestArchivedClientInfoTime(const bool archiveUsePOTG)
{
  return ?SV_SnapshotMP_GetEarliestArchivedClientInfoTime@@YAH_N@Z(archiveUsePOTG);
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerTeam
==============
*/

bool __fastcall SV_SnapshotMP_GetCachedSnapshotPlayerTeam(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, team_t *outTeam)
{
  return ?SV_SnapshotMP_GetCachedSnapshotPlayerTeam@@YA_NH_NPEAHPEAW4team_t@@@Z(clientNum, archiveUsePOTG, pArchiveTime, outTeam);
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerState
==============
*/

bool __fastcall SV_SnapshotMP_GetCachedSnapshotPlayerState(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, cachedPlayerState_t **outCachedPlayerState)
{
  return ?SV_SnapshotMP_GetCachedSnapshotPlayerState@@YA_NH_NPEAHPEAPEAUcachedPlayerState_t@@@Z(clientNum, archiveUsePOTG, pArchiveTime, outCachedPlayerState);
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWeaponMap
==============
*/

bool __fastcall SV_SnapshotMP_GetCachedSnapshotWeaponMap(const bool archiveUsePOTG, int *pArchiveTime, cachedSnapshotWeaponMap_t **outCachedWeaponMap)
{
  return ?SV_SnapshotMP_GetCachedSnapshotWeaponMap@@YA_N_NPEAHPEAPEAUcachedSnapshotWeaponMap_t@@@Z(archiveUsePOTG, pArchiveTime, outCachedWeaponMap);
}

/*
==============
SV_ReadCachedEntities
==============
*/
char SV_ReadCachedEntities(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame)
{
  int EntityIndex; 
  __int16 v5; 
  char *toClientMask; 
  __int64 clientMaskSize; 
  char fromClientMask[8]; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  entityState_t from; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1068, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1069, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( cachedFrame->num_entities != cachedFrame->num_entityClientMask )
  {
    LODWORD(toClientMask) = cachedFrame->num_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1074, ASSERT_TYPE_ASSERT, "( cachedFrame->num_entities ) == ( cachedFrame->num_entityClientMask )", "cachedFrame->num_entities == cachedFrame->num_entityClientMask\n\t%i, %i", toClientMask, cachedFrame->num_entityClientMask) )
      __debugbreak();
  }
  if ( cachedFrame->first_entity != cachedFrame->first_entityClientMask )
  {
    LODWORD(clientMaskSize) = cachedFrame->first_entityClientMask;
    LODWORD(toClientMask) = cachedFrame->first_entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1075, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
  {
    LODWORD(clientMaskSize) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    LODWORD(toClientMask) = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1076, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  cachedFrame->num_entities = 0;
  cachedFrame->first_entity = g_svSnapshotData.nextCachedSnapshotEntities;
  cachedFrame->num_entityClientMask = 0;
  cachedFrame->first_entityClientMask = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
  memset_0(&from, 0, sizeof(from));
  *(_QWORD *)fromClientMask = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0;
  MSG_ClearLastReferencedEntity(msg);
  while ( 1 )
  {
    EntityIndex = MSG_ReadEntityIndex(msg, 11);
    v5 = EntityIndex;
    if ( (unsigned int)(EntityIndex + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)EntityIndex, "signed", EntityIndex) )
      __debugbreak();
    if ( v5 == 2047 )
      break;
    if ( msg->overflowed )
    {
      Com_PrintError(25, "SV_ReadCachedEntities: end of message\n");
      goto LABEL_28;
    }
    if ( g_svSnapshotData.nextCachedSnapshotEntities >= 2147483646 )
    {
      Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotEntities wrapped\n");
      goto LABEL_28;
    }
    if ( g_svSnapshotData.nextCachedSnapshotEntityClientMask >= 2147483646 )
    {
      Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotEntityClientMask wrapped\n");
LABEL_28:
      RaiseException(0xC0000005, 0, 0, NULL);
      SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
      return 0;
    }
    from.number = v5;
    MSG_ReadDeltaArchivedEntity(msg, cachedFrame->time, &from, &g_svSnapshotData.cachedSnapshotEntities[g_svSnapshotData.nextCachedSnapshotEntities % 10800], fromClientMask, (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * (g_svSnapshotData.nextCachedSnapshotEntityClientMask % 10800), g_svSnapshotData.clientMaskSize, v5);
    ++g_svSnapshotData.nextCachedSnapshotEntities;
    ++g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    ++cachedFrame->num_entities;
    ++cachedFrame->num_entityClientMask;
  }
  if ( cachedFrame->num_entities != cachedFrame->num_entityClientMask )
  {
    LODWORD(clientMaskSize) = cachedFrame->num_entityClientMask;
    LODWORD(toClientMask) = cachedFrame->num_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1138, ASSERT_TYPE_ASSERT, "( cachedFrame->num_entities ) == ( cachedFrame->num_entityClientMask )", "cachedFrame->num_entities == cachedFrame->num_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( cachedFrame->first_entity != cachedFrame->first_entityClientMask )
  {
    LODWORD(clientMaskSize) = cachedFrame->first_entityClientMask;
    LODWORD(toClientMask) = cachedFrame->first_entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1139, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
  {
    LODWORD(clientMaskSize) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    LODWORD(toClientMask) = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1140, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  return 1;
}

/*
==============
SV_ReadDeltaCachedAgents
==============
*/
char SV_ReadDeltaCachedAgents(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  int v6; 
  cachedAgent_s *v7; 
  int entityNum; 
  unsigned int agentBits; 
  int EntityIndex; 
  __int64 v11; 
  int v12; 
  __int64 numCachedSnapshotAgents; 
  cachedAgent_s *cachedSnapshotAgents; 
  bool v15; 
  bool i; 
  __int64 v18; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 559, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 560, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 561, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  v6 = 0;
  cachedFrame->num_agents = 0;
  v7 = NULL;
  cachedFrame->first_agent = g_svSnapshotData.nextCachedSnapshotAgents;
  if ( oldCachedFrame->num_agents > 0 )
  {
    v7 = &g_svSnapshotData.cachedSnapshotAgents[(__int64)(oldCachedFrame->first_agent % g_svSnapshotData.numCachedSnapshotAgents)];
    entityNum = v7->agentState.entityNum;
  }
  else
  {
    entityNum = 99999;
  }
  MSG_ClearLastReferencedEntity(msg);
  agentBits = ComCharacterLimits::GetAgentBits();
  if ( !MSG_ReadBit(msg) )
    return 1;
  while ( 1 )
  {
    EntityIndex = MSG_ReadEntityIndex(msg, agentBits);
    v12 = EntityIndex;
    if ( EntityIndex < 0 )
    {
      LODWORD(v18) = EntityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 594, ASSERT_TYPE_ASSERT, "( ( newnum >= 0 ) )", "%s\n\t( newnum ) = %i", "( newnum >= 0 )", v18) )
        __debugbreak();
    }
    if ( msg->overflowed )
      break;
    numCachedSnapshotAgents = (unsigned int)g_svSnapshotData.numCachedSnapshotAgents;
    cachedSnapshotAgents = g_svSnapshotData.cachedSnapshotAgents;
    v15 = entityNum == v12;
    for ( i = entityNum <= v12; entityNum < v12; i = entityNum <= v12 )
    {
      if ( ++v6 < oldCachedFrame->num_agents )
      {
        v7 = &g_svSnapshotData.cachedSnapshotAgents[(__int64)((v6 + oldCachedFrame->first_agent) % g_svSnapshotData.numCachedSnapshotAgents)];
        entityNum = v7->agentState.entityNum;
      }
      else
      {
        entityNum = 99999;
      }
      v15 = entityNum == v12;
    }
    if ( v15 )
    {
      if ( g_svSnapshotData.nextCachedSnapshotAgents >= 2147483646 )
        goto LABEL_36;
      MSG_ReadDeltaAgent(msg, cachedFrame->time, &v7->agentState, &g_svSnapshotData.cachedSnapshotAgents[(__int64)(g_svSnapshotData.nextCachedSnapshotAgents % g_svSnapshotData.numCachedSnapshotAgents)].agentState, v12, agentBits);
      ++g_svSnapshotData.nextCachedSnapshotAgents;
      ++v6;
      ++cachedFrame->num_agents;
      if ( v6 < oldCachedFrame->num_agents )
      {
        v7 = &g_svSnapshotData.cachedSnapshotAgents[(__int64)((v6 + oldCachedFrame->first_agent) % g_svSnapshotData.numCachedSnapshotAgents)];
        entityNum = v7->agentState.entityNum;
      }
      else
      {
        entityNum = 99999;
      }
    }
    else
    {
      if ( i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 649, ASSERT_TYPE_ASSERT, "( oldnum > newnum )", (const char *)&queryFormat, "oldnum > newnum") )
          __debugbreak();
        cachedSnapshotAgents = g_svSnapshotData.cachedSnapshotAgents;
        numCachedSnapshotAgents = (unsigned int)g_svSnapshotData.numCachedSnapshotAgents;
      }
      if ( g_svSnapshotData.nextCachedSnapshotAgents >= 2147483646 )
      {
LABEL_36:
        Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotAgents wrapped\n", numCachedSnapshotAgents);
        goto LABEL_38;
      }
      MSG_ReadDeltaAgent(msg, cachedFrame->time, NULL, &cachedSnapshotAgents[(__int64)(g_svSnapshotData.nextCachedSnapshotAgents % (int)numCachedSnapshotAgents)].agentState, v12, agentBits);
      ++g_svSnapshotData.nextCachedSnapshotAgents;
      ++cachedFrame->num_agents;
    }
    if ( !MSG_ReadBit(msg) )
      return 1;
  }
  Com_PrintError(25, "SV_ReadDeltaCachedAgents: end of message\n", v11);
LABEL_38:
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  return 0;
}

/*
==============
SV_ReadDeltaCachedClientStates
==============
*/
char SV_ReadDeltaCachedClientStates(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  int v6; 
  cachedClientState_t *v7; 
  int clientIndex; 
  int v9; 
  int EntityIndex; 
  __int64 v11; 
  int v12; 
  __int64 numCachedSnapshotClientStates; 
  cachedClientState_t *cachedSnapshotClientStates; 
  bool v15; 
  bool i; 
  __int64 v18; 
  unsigned int clientBits; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 390, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 391, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 392, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  v6 = 0;
  cachedFrame->num_clientStates = 0;
  v7 = NULL;
  cachedFrame->first_clientState = g_svSnapshotData.nextCachedSnapshotClientStates;
  if ( oldCachedFrame->num_clientStates > 0 )
  {
    v7 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)(oldCachedFrame->first_clientState % g_svSnapshotData.numCachedSnapshotClientStates)];
    clientIndex = v7->cs.clientIndex;
  }
  else
  {
    clientIndex = 99999;
  }
  MSG_ClearLastReferencedEntity(msg);
  clientBits = ComCharacterLimits::GetClientBits();
  v9 = clientBits;
  if ( !MSG_ReadBit(msg) )
    return 1;
  while ( 1 )
  {
    EntityIndex = MSG_ReadEntityIndex(msg, v9);
    v12 = EntityIndex;
    if ( EntityIndex < 0 )
    {
      LODWORD(v18) = EntityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 423, ASSERT_TYPE_ASSERT, "( ( newnum >= 0 ) )", "%s\n\t( newnum ) = %i", "( newnum >= 0 )", v18) )
        __debugbreak();
    }
    if ( msg->overflowed )
      break;
    numCachedSnapshotClientStates = (unsigned int)g_svSnapshotData.numCachedSnapshotClientStates;
    cachedSnapshotClientStates = g_svSnapshotData.cachedSnapshotClientStates;
    v15 = clientIndex == v12;
    for ( i = clientIndex <= v12; clientIndex < v12; i = clientIndex <= v12 )
    {
      if ( ++v6 < oldCachedFrame->num_clientStates )
      {
        v7 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)((v6 + oldCachedFrame->first_clientState) % g_svSnapshotData.numCachedSnapshotClientStates)];
        clientIndex = v7->cs.clientIndex;
      }
      else
      {
        clientIndex = 99999;
      }
      v15 = clientIndex == v12;
    }
    if ( v15 )
    {
      if ( g_svSnapshotData.nextCachedSnapshotClientStates >= 2147483646 )
      {
        Com_PrintError(25, "SV_ReadDeltaCachedClientStates: g_svSnapshotData.nextCachedSnapshotClients wrapped\n", (unsigned int)g_svSnapshotData.numCachedSnapshotClientStates);
        goto LABEL_39;
      }
      MSG_ReadDeltaClient(msg, cachedFrame->time, &v7->cs, &g_svSnapshotData.cachedSnapshotClientStates[(__int64)(g_svSnapshotData.nextCachedSnapshotClientStates % g_svSnapshotData.numCachedSnapshotClientStates)].cs, v12, clientBits);
      ++g_svSnapshotData.nextCachedSnapshotClientStates;
      ++v6;
      ++cachedFrame->num_clientStates;
      if ( v6 < oldCachedFrame->num_clientStates )
      {
        v7 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)((v6 + oldCachedFrame->first_clientState) % g_svSnapshotData.numCachedSnapshotClientStates)];
        clientIndex = v7->cs.clientIndex;
      }
      else
      {
        clientIndex = 99999;
      }
    }
    else
    {
      if ( i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 480, ASSERT_TYPE_ASSERT, "( oldnum > newnum )", (const char *)&queryFormat, "oldnum > newnum") )
          __debugbreak();
        cachedSnapshotClientStates = g_svSnapshotData.cachedSnapshotClientStates;
        numCachedSnapshotClientStates = (unsigned int)g_svSnapshotData.numCachedSnapshotClientStates;
      }
      if ( g_svSnapshotData.nextCachedSnapshotClientStates >= 2147483646 )
      {
        Com_PrintError(25, "SV_ReadDeltaCachedClientStates: baseline - g_svSnapshotData.nextCachedSnapshotClients wrapped\n", numCachedSnapshotClientStates);
        goto LABEL_39;
      }
      MSG_ReadDeltaClient(msg, cachedFrame->time, NULL, &cachedSnapshotClientStates[(__int64)(g_svSnapshotData.nextCachedSnapshotClientStates % (int)numCachedSnapshotClientStates)].cs, v12, clientBits);
      ++g_svSnapshotData.nextCachedSnapshotClientStates;
      ++cachedFrame->num_clientStates;
    }
    if ( !MSG_ReadBit(msg) )
      return 1;
    v9 = clientBits;
  }
  Com_PrintError(25, "SV_ReadDeltaCachedClientStates: end of message\n", v11);
LABEL_39:
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  return 0;
}

/*
==============
SV_ReadDeltaCachedEntities
==============
*/
char SV_ReadDeltaCachedEntities(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  cachedSnapshotWorldState_t *v4; 
  msg_t *v5; 
  int v6; 
  entityState_t *p_from; 
  char *v8; 
  signed int v9; 
  int EntityIndex; 
  __int16 v11; 
  int nextCachedSnapshotEntities; 
  int nextCachedSnapshotEntityClientMask; 
  entityState_t *v14; 
  char *v15; 
  char *toClientMask; 
  __int64 clientMaskSize; 
  __int64 number; 
  char fromClientMask[8]; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  entityState_t from; 

  v4 = cachedFrame;
  v5 = msg;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 925, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 926, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 927, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  MSG_ClearLastReferencedEntity(v5);
  if ( v4->num_entities != v4->num_entityClientMask )
  {
    LODWORD(toClientMask) = v4->num_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 934, ASSERT_TYPE_ASSERT, "( cachedFrame->num_entities ) == ( cachedFrame->num_entityClientMask )", "cachedFrame->num_entities == cachedFrame->num_entityClientMask\n\t%i, %i", toClientMask, v4->num_entityClientMask) )
      __debugbreak();
  }
  if ( v4->first_entity != v4->first_entityClientMask )
  {
    LODWORD(clientMaskSize) = v4->first_entityClientMask;
    LODWORD(toClientMask) = v4->first_entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 935, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
  {
    LODWORD(clientMaskSize) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    LODWORD(toClientMask) = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 936, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  v6 = 0;
  v4->num_entities = 0;
  v4->first_entity = g_svSnapshotData.nextCachedSnapshotEntities;
  p_from = NULL;
  v4->num_entityClientMask = 0;
  v8 = NULL;
  v4->first_entityClientMask = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
  memset_0(&from, 0, sizeof(from));
  *(_QWORD *)fromClientMask = 0i64;
  v23 = 0i64;
  LOWORD(v9) = 2048;
  v24 = 0i64;
  v25 = 0;
  if ( oldCachedFrame->num_entities > 0 )
  {
    if ( oldCachedFrame->first_entity < 0 )
    {
      LODWORD(clientMaskSize) = oldCachedFrame->first_entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 958, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entity >= 0 ) )", "%s\n\t( oldCachedFrame->first_entity ) = %i", "( oldCachedFrame->first_entity >= 0 )", clientMaskSize) )
        __debugbreak();
    }
    p_from = &g_svSnapshotData.cachedSnapshotEntities[oldCachedFrame->first_entity % 10800];
    LOWORD(v9) = p_from->number;
    if ( oldCachedFrame->first_entityClientMask < 0 )
    {
      LODWORD(clientMaskSize) = oldCachedFrame->first_entityClientMask;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 962, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entityClientMask >= 0 ) )", "%s\n\t( oldCachedFrame->first_entityClientMask ) = %i", "( oldCachedFrame->first_entityClientMask >= 0 )", clientMaskSize) )
        __debugbreak();
    }
    v8 = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * (oldCachedFrame->first_entityClientMask % 10800);
  }
  while ( 1 )
  {
    EntityIndex = MSG_ReadEntityIndex(v5, 11);
    v11 = EntityIndex;
    if ( (unsigned int)(EntityIndex + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)EntityIndex, "signed", EntityIndex) )
      __debugbreak();
    if ( (unsigned __int16)v11 >= 0x800u )
    {
      LODWORD(clientMaskSize) = 2048;
      LODWORD(toClientMask) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 971, ASSERT_TYPE_ASSERT, "(unsigned)( newnum ) < (unsigned)( ( 2048 ) )", "newnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", toClientMask, clientMaskSize) )
        __debugbreak();
    }
    if ( v11 == 2047 )
      break;
    nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( g_svSnapshotData.nextCachedSnapshotEntities >= 2147483646 )
    {
      Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotEntities wrapped\n");
      goto LABEL_69;
    }
    nextCachedSnapshotEntityClientMask = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    if ( g_svSnapshotData.nextCachedSnapshotEntityClientMask >= 2147483646 )
    {
      Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotEntityClientMask wrapped\n");
      goto LABEL_69;
    }
    if ( (__int16)v9 < v11 )
    {
      do
      {
        if ( ++v6 < oldCachedFrame->num_entities )
        {
          if ( oldCachedFrame->first_entity < 0 )
          {
            LODWORD(clientMaskSize) = oldCachedFrame->first_entity;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1006, ASSERT_TYPE_ASSERT, "( ( oldCachedFrame->first_entity >= 0 ) )", "%s\n\t( oldCachedFrame->first_entity ) = %i", "( oldCachedFrame->first_entity >= 0 )", clientMaskSize) )
              __debugbreak();
          }
          p_from = &g_svSnapshotData.cachedSnapshotEntities[(v6 + oldCachedFrame->first_entity) % 10800];
          v9 = p_from->number;
          if ( v9 < (int)SvClient::ms_clientCount && p_from->number != p_from->clientNum )
          {
            LODWORD(number) = p_from->clientNum;
            LODWORD(clientMaskSize) = p_from->number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1011, ASSERT_TYPE_ASSERT, "(oldCachedEnt->number == oldCachedEnt->clientNum)", "%s\n\t%i != %i", "oldCachedEnt->number == oldCachedEnt->clientNum", clientMaskSize, number) )
              __debugbreak();
          }
          if ( p_from->lerp.pos.trType >= NUM_TRTYPES )
          {
            LODWORD(clientMaskSize) = p_from->lerp.pos.trType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1013, ASSERT_TYPE_ASSERT, "( ( oldCachedEnt->lerp.pos.trType < NUM_TRTYPES ) )", "%s\n\t( oldCachedEnt->lerp.pos.trType ) = %i", "( oldCachedEnt->lerp.pos.trType < NUM_TRTYPES )", clientMaskSize) )
              __debugbreak();
          }
          if ( p_from->lerp.apos.trType >= NUM_TRTYPES )
          {
            LODWORD(clientMaskSize) = p_from->lerp.apos.trType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1014, ASSERT_TYPE_ASSERT, "( ( oldCachedEnt->lerp.apos.trType < NUM_TRTYPES ) )", "%s\n\t( oldCachedEnt->lerp.apos.trType ) = %i", "( oldCachedEnt->lerp.apos.trType < NUM_TRTYPES )", clientMaskSize) )
              __debugbreak();
          }
          v8 = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * ((v6 + oldCachedFrame->first_entityClientMask) % 10800);
        }
        else
        {
          LOWORD(v9) = 2048;
          p_from = &from;
          v8 = fromClientMask;
        }
      }
      while ( (__int16)v9 < v11 );
      nextCachedSnapshotEntityClientMask = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
      nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
    }
    if ( msg->overflowed )
    {
      Com_PrintError(25, "SV_ReadDeltaCachedEntities: end of message\n");
LABEL_69:
      RaiseException(0xC0000005, 0, 0, NULL);
      SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
      return 0;
    }
    v14 = &g_svSnapshotData.cachedSnapshotEntities[nextCachedSnapshotEntities % 10800];
    v15 = (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * (nextCachedSnapshotEntityClientMask % 10800);
    if ( (_WORD)v9 == v11 )
    {
      MSG_ReadDeltaArchivedEntity(msg, cachedFrame->time, p_from, v14, v8, v15, g_svSnapshotData.clientMaskSize, v11);
    }
    else
    {
      from.number = v11;
      MSG_ReadDeltaArchivedEntity(msg, cachedFrame->time, &from, v14, fromClientMask, v15, g_svSnapshotData.clientMaskSize, v11);
    }
    if ( v14->lerp.pos.trType >= NUM_TRTYPES )
    {
      LODWORD(clientMaskSize) = v14->lerp.pos.trType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1043, ASSERT_TYPE_ASSERT, "( ( cachedEnt->lerp.pos.trType < NUM_TRTYPES ) )", "%s\n\t( cachedEnt->lerp.pos.trType ) = %i", "( cachedEnt->lerp.pos.trType < NUM_TRTYPES )", clientMaskSize) )
        __debugbreak();
    }
    if ( v14->lerp.apos.trType >= NUM_TRTYPES )
    {
      LODWORD(clientMaskSize) = v14->lerp.apos.trType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1044, ASSERT_TYPE_ASSERT, "( ( cachedEnt->lerp.apos.trType < NUM_TRTYPES ) )", "%s\n\t( cachedEnt->lerp.apos.trType ) = %i", "( cachedEnt->lerp.apos.trType < NUM_TRTYPES )", clientMaskSize) )
        __debugbreak();
    }
    v4 = cachedFrame;
    ++g_svSnapshotData.nextCachedSnapshotEntities;
    ++g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    v5 = msg;
    ++cachedFrame->num_entities;
    ++cachedFrame->num_entityClientMask;
  }
  if ( v4->num_entities != v4->num_entityClientMask )
  {
    LODWORD(clientMaskSize) = v4->num_entityClientMask;
    LODWORD(toClientMask) = v4->num_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1054, ASSERT_TYPE_ASSERT, "( cachedFrame->num_entities ) == ( cachedFrame->num_entityClientMask )", "cachedFrame->num_entities == cachedFrame->num_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( v4->first_entity != v4->first_entityClientMask )
  {
    LODWORD(clientMaskSize) = v4->first_entityClientMask;
    LODWORD(toClientMask) = v4->first_entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1055, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
  {
    LODWORD(clientMaskSize) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
    LODWORD(toClientMask) = g_svSnapshotData.nextCachedSnapshotEntities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1056, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", toClientMask, clientMaskSize) )
      __debugbreak();
  }
  return 1;
}

/*
==============
SV_ReadDeltaCachedEntityLoD
==============
*/
char SV_ReadDeltaCachedEntityLoD(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  int v7; 
  cachedEntityLoD_t *v8; 
  int clientIndex; 
  int ClientBits; 
  int EntityIndex; 
  int v12; 
  bool v13; 
  bool i; 
  __int64 v15; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 730, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 731, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 732, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  if ( !g_svSnapshotData.useNetfieldLoD )
    return 1;
  if ( !g_svSnapshotData.cachedSnapshotEntityLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 739, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntityLoD != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntityLoD != nullptr") )
    __debugbreak();
  cachedFrame->num_entityLoD = 0;
  v7 = 0;
  cachedFrame->first_entityLoD = g_svSnapshotData.nextCachedSnapshotEntityLoD;
  if ( oldCachedFrame->num_entityLoD > 0 )
  {
    v8 = &g_svSnapshotData.cachedSnapshotEntityLoD[oldCachedFrame->first_entityLoD % g_svSnapshotData.numCachedSnapshotEntityLoD];
    clientIndex = v8->lodInfo.clientIndex;
  }
  else
  {
    v8 = NULL;
    clientIndex = 0x7FFFFFFF;
  }
  MSG_ClearLastReferencedEntity(msg);
  ClientBits = ComCharacterLimits::GetClientBits();
  if ( !MSG_ReadBit(msg) )
    return 1;
  while ( 1 )
  {
    EntityIndex = MSG_ReadEntityIndex(msg, ClientBits);
    v12 = EntityIndex;
    if ( EntityIndex < 0 )
    {
      LODWORD(v15) = EntityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 769, ASSERT_TYPE_ASSERT, "( ( newClientIndex >= 0 ) )", "%s\n\t( newClientIndex ) = %i", "( newClientIndex >= 0 )", v15) )
        __debugbreak();
    }
    if ( msg->overflowed )
      break;
    v13 = clientIndex == v12;
    for ( i = clientIndex <= v12; clientIndex < v12; i = clientIndex <= v12 )
    {
      if ( ++v7 < oldCachedFrame->num_entityLoD )
      {
        v8 = &g_svSnapshotData.cachedSnapshotEntityLoD[(v7 + oldCachedFrame->first_entityLoD) % g_svSnapshotData.numCachedSnapshotEntityLoD];
        clientIndex = v8->lodInfo.clientIndex;
      }
      else
      {
        v8 = NULL;
        clientIndex = 0x7FFFFFFF;
      }
      v13 = clientIndex == v12;
    }
    if ( v13 )
    {
      if ( g_svSnapshotData.nextCachedSnapshotEntityLoD >= 2147483646 )
      {
        Com_PrintError(25, "SV_ReadDeltaCachedEntityLoD: g_svSnapshotData.nextCachedSnapshotEntityLoD wrapped\n");
        goto LABEL_46;
      }
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 807, ASSERT_TYPE_ASSERT, "( oldCachedEntityLoD != nullptr )", (const char *)&queryFormat, "oldCachedEntityLoD != nullptr") )
        __debugbreak();
      MSG_ReadDeltaEntityLoD(msg, &v8->lodInfo, &g_svSnapshotData.cachedSnapshotEntityLoD[g_svSnapshotData.nextCachedSnapshotEntityLoD % g_svSnapshotData.numCachedSnapshotEntityLoD].lodInfo, v12);
      ++g_svSnapshotData.nextCachedSnapshotEntityLoD;
      ++v7;
      ++cachedFrame->num_entityLoD;
      if ( v7 < oldCachedFrame->num_entityLoD )
      {
        v8 = &g_svSnapshotData.cachedSnapshotEntityLoD[(v7 + oldCachedFrame->first_entityLoD) % g_svSnapshotData.numCachedSnapshotEntityLoD];
        clientIndex = v8->lodInfo.clientIndex;
      }
      else
      {
        v8 = NULL;
        clientIndex = 0x7FFFFFFF;
      }
    }
    else
    {
      if ( i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 829, ASSERT_TYPE_ASSERT, "( oldClientIndex > newClientIndex )", (const char *)&queryFormat, "oldClientIndex > newClientIndex") )
        __debugbreak();
      if ( g_svSnapshotData.nextCachedSnapshotEntityLoD >= 2147483646 )
      {
        Com_PrintError(25, "SV_ReadDeltaCachedEntityLoD: baseline - g_svSnapshotData.nextCachedSnapshotEntityLoD wrapped\n");
        goto LABEL_46;
      }
      MSG_ReadDeltaEntityLoD(msg, NULL, &g_svSnapshotData.cachedSnapshotEntityLoD[g_svSnapshotData.nextCachedSnapshotEntityLoD % g_svSnapshotData.numCachedSnapshotEntityLoD].lodInfo, v12);
      ++g_svSnapshotData.nextCachedSnapshotEntityLoD;
      ++cachedFrame->num_entityLoD;
    }
    if ( !MSG_ReadBit(msg) )
      return 1;
  }
  Com_PrintError(25, "SV_ReadDeltaCachedEntityLoD: end of message\n");
LABEL_46:
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  return 0;
}

/*
==============
SV_ReadDeltaCachedScriptableWorld
==============
*/
char SV_ReadDeltaCachedScriptableWorld(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  __int64 instanceLimit; 
  __int64 toPartCount; 
  ScriptableReplicatedInstance *v9; 
  ScriptablePartData *toPartData; 
  unsigned int archiveScratchSize; 
  __int64 toInstanceCount; 
  ScriptablePartData *fromParts; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1286, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1287, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( ((unsigned __int8)&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1292, ASSERT_TYPE_ASSERT, "( Sys_InterlockedIncrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 1 )", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 1") )
    __debugbreak();
  if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex >= 0x7FFFFFFFFFFFFFFEui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1296, ASSERT_TYPE_ASSERT, "( uint64_t )( r_sbl.cachedInstNextIndex ) < ( uint64_t )( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "r_sbl.cachedInstNextIndex doesn't index SCRIPTABLE_SNAPSHOT_INDEX_MAX\n\t%llu not in [0, %llu)", g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  if ( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex >= 0x7FFFFFFFFFFFFFFEui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1297, ASSERT_TYPE_ASSERT, "( uint64_t )( r_sbl.cachedPartNextIndex ) < ( uint64_t )( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "r_sbl.cachedPartNextIndex doesn't index SCRIPTABLE_SNAPSHOT_INDEX_MAX\n\t%llu not in [0, %llu)", g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex, 0x7FFFFFFFFFFFFFFEi64) )
    __debugbreak();
  cachedFrame->scriptableInstFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  cachedFrame->scriptablePartFirstIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
  instanceLimit = ReplicatedLimits->instanceLimit;
  toPartCount = ReplicatedLimits->partTotalLimit;
  if ( (unsigned int)instanceLimit > g_svSnapshotData.scriptableSnapshots.cachedInstCount )
  {
    LODWORD(fromParts) = g_svSnapshotData.scriptableSnapshots.cachedInstCount;
    LODWORD(toInstanceCount) = ReplicatedLimits->instanceLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1305, ASSERT_TYPE_ASSERT, "( toInstanceCount ) <= ( r_sbl.cachedInstCount )", "toInstanceCount <= r_sbl.cachedInstCount\n\t%i, %i", toInstanceCount, fromParts) )
      __debugbreak();
  }
  if ( (unsigned int)toPartCount > g_svSnapshotData.scriptableSnapshots.cachedPartCount )
  {
    LODWORD(fromParts) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
    LODWORD(toInstanceCount) = toPartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1306, ASSERT_TYPE_ASSERT, "( toPartCount ) <= ( r_sbl.cachedPartCount )", "toPartCount <= r_sbl.cachedPartCount\n\t%i, %i", toInstanceCount, fromParts) )
      __debugbreak();
  }
  cachedFrame->scriptableInstCount = instanceLimit;
  cachedFrame->scriptablePartCount = toPartCount;
  v9 = &g_svSnapshotData.scriptableSnapshots.cachedInstances[SV_SnapshotArchiveMP_GetScriptableNextCachedInstanceForContiguousArray(cachedFrame)];
  toPartData = &g_svSnapshotData.scriptableSnapshots.cachedParts[SV_SnapshotArchiveMP_GetScriptableNextCachedPartForContiguousArray(cachedFrame)];
  if ( oldCachedFrame )
  {
    ScriptableMsg_ReadArchivedState(msg, ReplicatedLimits, &g_svSnapshotData.scriptableSnapshots.cachedInstances[(unsigned int)(oldCachedFrame->scriptableInstFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount)], oldCachedFrame->scriptableInstCount, v9, instanceLimit, &g_svSnapshotData.scriptableSnapshots.cachedParts[(unsigned int)(oldCachedFrame->scriptablePartFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount)], oldCachedFrame->scriptablePartCount, toPartData, toPartCount);
  }
  else
  {
    if ( !g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1332, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer != nullptr") )
      __debugbreak();
    archiveScratchSize = g_svSnapshotData.scriptableSnapshots.archiveScratchSize;
    if ( !g_svSnapshotData.scriptableSnapshots.archiveScratchSize )
    {
      LODWORD(toInstanceCount) = g_svSnapshotData.scriptableSnapshots.archiveScratchSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1333, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptableSnapshots.archiveScratchSize ) > ( 0 )", "g_svSnapshotData.scriptableSnapshots.archiveScratchSize > 0\n\t%i, %i", toInstanceCount, 0i64) )
        __debugbreak();
      archiveScratchSize = g_svSnapshotData.scriptableSnapshots.archiveScratchSize;
    }
    ScriptableMsg_ReadArchivedStateNoDelta(msg, v9, instanceLimit, toPartData, toPartCount, g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer, archiveScratchSize);
  }
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1337, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( msg ) )", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex += instanceLimit;
  g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex += toPartCount;
  if ( ((unsigned __int64)&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1343, ASSERT_TYPE_ASSERT, "( Sys_InterlockedDecrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 0 )", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership ) == 0") )
    __debugbreak();
  if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex < 0x7FFFFFFFFFFFFFFEi64 && g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex < 0x7FFFFFFFFFFFFFFEi64 )
    return 1;
  Com_PrintError(25, "scriptable cached index wrapped\n");
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  return 0;
}

/*
==============
SV_ReadDeltaCachedUmbraGateStates
==============
*/
char SV_ReadDeltaCachedUmbraGateStates(msg_t *msg, cachedSnapshotWorldState_t *cachedFrame, const cachedSnapshotWorldState_t *oldCachedFrame)
{
  const bitarray<384> *v7; 
  bitarray<384> *v8; 
  __m256i v9; 
  __int128 v10; 
  bitarray<384> *cachedSnapshotUmbraGateStates; 
  unsigned __int64 v12; 
  bitarray<384> result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1368, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1369, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex >= 2147483646 )
  {
    Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex wrapped\n");
LABEL_9:
    RaiseException(0xC0000005, 0, 0, NULL);
    SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
    return 0;
  }
  v7 = NULL;
  cachedFrame->umbraGateStatesIndex = g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
  if ( oldCachedFrame )
    v7 = &g_svSnapshotData.cachedSnapshotUmbraGateStates[oldCachedFrame->umbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates];
  v8 = MSG_ReadDeltaUmbraGateState(&result, msg, v7);
  v9 = *(__m256i *)v8->array;
  v10 = *(_OWORD *)&v8->array[8];
  cachedSnapshotUmbraGateStates = g_svSnapshotData.cachedSnapshotUmbraGateStates;
  v12 = cachedFrame->umbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates;
  *(__m256i *)g_svSnapshotData.cachedSnapshotUmbraGateStates[v12].array = v9;
  *(_OWORD *)&cachedSnapshotUmbraGateStates[v12].array[8] = v10;
  ++g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
  if ( msg->overflowed )
  {
    Com_PrintError(25, "SV_ReadDeltaCachedUmbraGateStates: read error / overflow\n");
    goto LABEL_9;
  }
  return 1;
}

/*
==============
SV_ReadDeltaCachedWeapons
==============
*/
char SV_ReadDeltaCachedWeapons(msg_t *msg, cachedSnapshotWeaponMap_t *cachedFrame, const cachedSnapshotWeaponMap_t *oldCachedFrame)
{
  int v6; 
  const WeaponMapEntry *v7; 
  int v8; 
  int WeaponMapEntry_Index; 
  __int64 v10; 
  int v11; 
  int index; 
  WeaponMapEntry *v13; 
  int v14; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1152, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !cachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1153, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1154, ASSERT_TYPE_ASSERT, "( oldCachedFrame )", (const char *)&queryFormat, "oldCachedFrame") )
    __debugbreak();
  cachedFrame->num_weapons = 0;
  v6 = 0;
  cachedFrame->first_weapon = g_svSnapshotData.nextCachedSnapshotWeapon;
  if ( oldCachedFrame->num_weapons )
    v7 = &g_svSnapshotData.cachedSnapshotWeapons[oldCachedFrame->first_weapon % g_svSnapshotData.numCachedSnapshotWeapons];
  else
    v7 = NULL;
  MSG_ClearLastReferencedEntity(msg);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v8 = BgWeaponMap::ms_runtimeSize;
  WeaponMapEntry_Index = MSG_ReadWeaponMapEntry_Index(msg);
  v11 = v8;
  if ( WeaponMapEntry_Index >= v8 )
  {
LABEL_38:
    if ( WeaponMapEntry_Index != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1235, ASSERT_TYPE_ASSERT, "( weaponMapIndex == weaponMapSize )", (const char *)&queryFormat, "weaponMapIndex == weaponMapSize") )
      __debugbreak();
    return 1;
  }
  else
  {
    while ( !msg->overflowed )
    {
      if ( g_svSnapshotData.nextCachedSnapshotWeapon >= 2147483646 )
      {
        Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotWeapon wrapped\n", v10, "oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldCachedIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index");
        goto LABEL_44;
      }
      for ( ; v7; v7 = &g_svSnapshotData.cachedSnapshotWeapons[(v6 + oldCachedFrame->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons] )
      {
        index = v7->index;
        if ( index >= WeaponMapEntry_Index )
          break;
        if ( ++v6 >= oldCachedFrame->num_weapons )
        {
          v7 = NULL;
          break;
        }
        if ( (unsigned __int16)index >= g_svSnapshotData.cachedSnapshotWeapons[(v6 + oldCachedFrame->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons].index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1192, ASSERT_TYPE_ASSERT, "( oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldCachedIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index )", (const char *)&queryFormat, "oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldCachedIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index") )
          __debugbreak();
      }
      v13 = &g_svSnapshotData.cachedSnapshotWeapons[g_svSnapshotData.nextCachedSnapshotWeapon % g_svSnapshotData.numCachedSnapshotWeapons];
      if ( v7 && (v14 = v7->index, v14 <= WeaponMapEntry_Index) )
      {
        if ( v14 != WeaponMapEntry_Index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1211, ASSERT_TYPE_ASSERT, "( oldWeaponEntry->index == weaponMapIndex )", (const char *)&queryFormat, "oldWeaponEntry->index == weaponMapIndex") )
          __debugbreak();
        MSG_ReadDeltaArchivedWeaponMapEntry(msg, WeaponMapEntry_Index, v7, v13);
        if ( ++v6 >= oldCachedFrame->num_weapons )
          v7 = NULL;
        else
          v7 = &g_svSnapshotData.cachedSnapshotWeapons[(v6 + oldCachedFrame->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons];
      }
      else
      {
        MSG_ReadDeltaArchivedWeaponMapEntry(msg, WeaponMapEntry_Index, NULL, v13);
      }
      ++g_svSnapshotData.nextCachedSnapshotWeapon;
      ++cachedFrame->num_weapons;
      WeaponMapEntry_Index = MSG_ReadWeaponMapEntry_Index(msg);
      if ( WeaponMapEntry_Index >= v11 )
        goto LABEL_38;
    }
    Com_PrintError(25, "SV_ReadDeltaCachedWeapons: end of message\n", v10, "oldWeaponEntry->index < g_svSnapshotData.cachedSnapshotWeapons[(oldCachedFrame->first_weapon + oldCachedIndex) % g_svSnapshotData.numCachedSnapshotWeapons].index");
LABEL_44:
    RaiseException(0xC0000005, 0, 0, NULL);
    SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
    return 0;
  }
}

/*
==============
SV_SnapshotCachingMP_ReadFailure
==============
*/
void SV_SnapshotCachingMP_ReadFailure()
{
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
}

/*
==============
SV_SnapshotMP_ArchiveEnabled
==============
*/
_BOOL8 SV_SnapshotMP_ArchiveEnabled()
{
  if ( !g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
    {
      __debugbreak();
      return 0i64;
    }
    return 0i64;
  }
  return !Migration_GetBuffer();
}

/*
==============
SV_SnapshotMP_FindLRUPlayerStateInReadCache
==============
*/
cachedPlayerState_t *SV_SnapshotMP_FindLRUPlayerStateInReadCache(cachedPlayerState_t *playerStateReadCache, const int cacheSize)
{
  cachedPlayerState_t *v3; 
  int lastUsedTime; 
  cachedPlayerState_t *v5; 
  int *p_lastUsedTime; 
  __int64 v7; 
  int v8; 
  cachedPlayerState_t *result; 

  v3 = playerStateReadCache;
  if ( !playerStateReadCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1412, ASSERT_TYPE_ASSERT, "( playerStateReadCache )", (const char *)&queryFormat, "playerStateReadCache") )
    __debugbreak();
  if ( cacheSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1413, ASSERT_TYPE_ASSERT, "( cacheSize ) > ( 0 )", "%s > %s\n\t%i, %i", "cacheSize", "0", cacheSize, 0i64) )
    __debugbreak();
  lastUsedTime = v3->lastUsedTime;
  if ( cacheSize <= 1 )
    return v3;
  v5 = v3 + 1;
  p_lastUsedTime = &v3[1].lastUsedTime;
  v7 = (unsigned int)(cacheSize - 1);
  do
  {
    v8 = lastUsedTime;
    lastUsedTime = *p_lastUsedTime;
    p_lastUsedTime += 5376;
    result = v5;
    if ( lastUsedTime >= v8 )
      result = v3;
    ++v5;
    v3 = result;
    if ( lastUsedTime >= v8 )
      lastUsedTime = v8;
    --v7;
  }
  while ( v7 );
  return result;
}

/*
==============
SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer
==============
*/
char SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(const serverArchive_t *archive, const int frameStart)
{
  int nextArchivedSnapshotBuffer; 
  int v5; 

  if ( !archive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 79, ASSERT_TYPE_ASSERT, "(archive)", (const char *)&queryFormat, "archive") )
    __debugbreak();
  if ( frameStart < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 80, ASSERT_TYPE_ASSERT, "(frameStart >= 0)", (const char *)&queryFormat, "frameStart >= 0") )
    __debugbreak();
  nextArchivedSnapshotBuffer = archive->nextArchivedSnapshotBuffer;
  v5 = nextArchivedSnapshotBuffer - archive->archivedSnapshotBufferSize;
  if ( v5 < 0 )
  {
    if ( frameStart >= nextArchivedSnapshotBuffer )
      return frameStart >= archive->archivedSnapshotBufferWrapPoint + v5;
    return 1;
  }
  return frameStart >= v5 && frameStart < nextArchivedSnapshotBuffer;
}

/*
==============
SV_SnapshotMP_GetArchivedClientInfo
==============
*/
__int64 SV_SnapshotMP_GetArchivedClientInfo(int clientNum, bool archiveUsePOTG, int *pArchiveTime, playerState_s *ps, GSnapshotWeaponMap *weaponMap, vec3_t *origin, int *health, GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *otherFlags, team_t *team)
{
  unsigned __int64 v9; 
  unsigned int *v11; 
  int v12; 
  int v13; 
  const char *v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int *v19; 
  int archivedFrameDuration; 
  char v21; 
  int v22; 
  float v23; 
  GSnapshotWeaponMap *v24; 
  int v25; 
  int v26; 
  int serverTime; 
  int v28; 
  int inputTime; 
  int v30; 
  int foliageSoundTime; 
  int jumpTime; 
  int viewHeightLerpTime; 
  int shellshockTime; 
  int meleeStartTime; 
  int lastStandTime; 
  int lastStandMoveStopTime; 
  int blurEndTime; 
  int startTime; 
  int stopTime; 
  int endTime; 
  int v42; 
  int v43; 
  int v44; 
  int *p_time; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  _DWORD *v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  playerState_s *v72; 
  clientState_t *ClientState; 
  unsigned __int64 v74; 
  __int64 v75; 
  GSnapshotWeaponMap *v76; 
  GWeaponMap *Instance; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  char v83[4]; 
  __int64 v84; 

  v84 = -2i64;
  v9 = (unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64;
  *(_QWORD *)(v9 + 72) = ps;
  v11 = (unsigned int *)pArchiveTime;
  *(_QWORD *)(v9 + 16) = pArchiveTime;
  *(_BYTE *)v9 = archiveUsePOTG;
  v12 = clientNum;
  *(_DWORD *)(v9 + 8) = clientNum;
  *(_QWORD *)(v9 + 40) = weaponMap;
  *(_QWORD *)(v9 + 48) = health;
  *(_QWORD *)(v9 + 56) = otherFlags;
  *(_QWORD *)(v9 + 64) = team;
  if ( !health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2698, ASSERT_TYPE_ASSERT, "( health )", (const char *)&queryFormat, "health") )
    __debugbreak();
  if ( !otherFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2699, ASSERT_TYPE_ASSERT, "( otherFlags )", (const char *)&queryFormat, "otherFlags") )
    __debugbreak();
  if ( !team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2700, ASSERT_TYPE_ASSERT, "( team )", (const char *)&queryFormat, "team") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2702, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers();
  Profile_Begin(314);
  v13 = *v11;
  v14 = j_va("SV_GetArchivedClientInfo(%d)", *v11);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v14);
  v15 = 0;
  v16 = 0i64;
  *(_QWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x20) = 0i64;
  *(_QWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18) = 0i64;
  *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v13;
  if ( SV_SnapshotMP_GetCachedSnapshotPlayerState(v12, *(_BYTE *)v9, (int *)(v9 + 4), (cachedPlayerState_t **)(v9 + 24)) )
  {
    v17 = *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 4);
    *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 4) = v17;
    v18 = *(_QWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x18);
    if ( !v18 )
      goto LABEL_20;
    if ( SV_SnapshotMP_GetCachedSnapshotWeaponMap(*(_BYTE *)v9, (int *)(v9 + 4), (cachedSnapshotWeaponMap_t **)(v9 + 32)) && *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 4) == v17 )
    {
      v16 = *(_QWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x20);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2686, ASSERT_TYPE_ASSERT, "( (*outCachedWeaponMap != nullptr) || (*outCachedPlayerState == nullptr) )", (const char *)&queryFormat, "(*outCachedWeaponMap != nullptr) || (*outCachedPlayerState == nullptr)") )
        __debugbreak();
LABEL_20:
      v19 = *(int **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10);
      *v19 = v17;
      if ( v18 )
      {
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2741, ASSERT_TYPE_ASSERT, "( cachedWeaponMapFrame != nullptr )", (const char *)&queryFormat, "cachedWeaponMapFrame != nullptr") )
          __debugbreak();
        if ( *(_DWORD *)(v18 + 460) == *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 8) )
        {
          if ( *v19 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2747, ASSERT_TYPE_ASSERT, "( *pArchiveTime > 0 )", (const char *)&queryFormat, "*pArchiveTime > 0") )
            __debugbreak();
          if ( *(_DWORD *)(v18 + 21440) != *(_DWORD *)(v16 + 8) )
          {
            LODWORD(v79) = *(_DWORD *)(v18 + 21440);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2748, ASSERT_TYPE_ASSERT, "( cachedPlayerState->archivedFrame ) == ( cachedWeaponMapFrame->archivedFrame )", "cachedPlayerState->archivedFrame == cachedWeaponMapFrame->archivedFrame\n\t%i, %i", v79, *(_DWORD *)(v16 + 8)) )
              __debugbreak();
          }
          archivedFrameDuration = g_svSnapshotData.archivePOTG.archivedFrameDuration;
          v21 = *(_BYTE *)v9;
          if ( !*(_BYTE *)v9 )
            archivedFrameDuration = g_svSnapshotData.archive.archivedFrameDuration;
          if ( archivedFrameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2754, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameDuration > 0 )", (const char *)&queryFormat, "archiveToUse->archivedFrameDuration > 0") )
            __debugbreak();
          v22 = g_svSnapshotData.archivePOTG.archivedFrameDuration;
          if ( !v21 )
            v22 = g_svSnapshotData.archive.archivedFrameDuration;
          if ( *v19 % v22 )
          {
            LODWORD(v80) = *v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2755, ASSERT_TYPE_ASSERT, "((*pArchiveTime) % archiveToUse->archivedFrameDuration == 0)", "%s\n\t%d %d", "(*pArchiveTime) % archiveToUse->archivedFrameDuration == 0", v80, v22) )
              __debugbreak();
          }
          G_ActiveMP_ValidateSpectateOtherFlags((const GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(v18 + 28));
          if ( origin )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_archive_smooth_transform_origin, "sv_archive_smooth_transform_origin") )
            {
              origin->v[0] = *(float *)(v18 + 21416);
              origin->v[1] = *(float *)(v18 + 21420);
              v23 = *(float *)(v18 + 21424);
            }
            else
            {
              origin->v[0] = *(float *)(v18 + 48);
              origin->v[1] = *(float *)(v18 + 52);
              v23 = *(float *)(v18 + 56);
            }
            origin->v[2] = v23;
          }
          v24 = *(GSnapshotWeaponMap **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x28);
          if ( v24 )
            GSnapshotWeaponMap::CopyFromBuffer(v24, g_svSnapshotData.cachedSnapshotWeapons, g_svSnapshotData.numCachedSnapshotWeapons, *(int *)(v16 + 4), *(_DWORD *)v16);
          **(_DWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x30) = *(_DWORD *)(v18 + 600);
          **(_QWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x38) = *(_QWORD *)(v18 + 28);
          **(_DWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x40) = *(_DWORD *)(v18 + 21412);
          if ( ps )
          {
            v25 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time - *(_DWORD *)(v18 + 21444);
            memcpy_0(ps, (const void *)v18, sizeof(playerState_s));
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_archive_smooth_transform_origin, "sv_archive_smooth_transform_origin") )
            {
              ps->origin.v[0] = *(float *)(v18 + 21416);
              ps->origin.v[1] = *(float *)(v18 + 21420);
              ps->origin.v[2] = *(float *)(v18 + 21424);
            }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_archive_smooth_transform_angles, "sv_archive_smooth_transform_angles") )
            {
              ps->viewangles.v[0] = *(float *)(v18 + 21428);
              ps->viewangles.v[1] = *(float *)(v18 + 21432);
              ps->viewangles.v[2] = *(float *)(v18 + 21436);
            }
            if ( ps->commandTime )
            {
              v26 = v25 + ps->commandTime;
              ps->commandTime = v26;
              ps->commandTimeInterpolated = v26;
            }
            serverTime = ps->serverTime;
            if ( serverTime )
            {
              v28 = v25 + serverTime;
              ps->serverTime = v28;
              ps->serverTimeInterpolated = v28;
            }
            inputTime = ps->inputTime;
            if ( inputTime )
            {
              v30 = v25 + inputTime;
              ps->inputTime = v30;
              ps->inputTimeInterpolated = v30;
            }
            foliageSoundTime = ps->foliageSoundTime;
            if ( foliageSoundTime )
              ps->foliageSoundTime = v25 + foliageSoundTime;
            jumpTime = ps->jumpState.jumpTime;
            if ( jumpTime )
              ps->jumpState.jumpTime = v25 + jumpTime;
            viewHeightLerpTime = ps->viewHeightLerpTime;
            if ( viewHeightLerpTime )
              ps->viewHeightLerpTime = v25 + viewHeightLerpTime;
            shellshockTime = ps->shellshockTime;
            if ( shellshockTime )
              ps->shellshockTime = v25 + shellshockTime;
            meleeStartTime = ps->meleeStartTime;
            if ( meleeStartTime )
              ps->meleeStartTime = v25 + meleeStartTime;
            lastStandTime = ps->lastStandTime;
            if ( lastStandTime )
              ps->lastStandTime = v25 + lastStandTime;
            lastStandMoveStopTime = ps->lastStandMoveStopTime;
            if ( lastStandMoveStopTime )
              ps->lastStandMoveStopTime = v25 + lastStandMoveStopTime;
            blurEndTime = ps->blurEndTime;
            if ( blurEndTime )
              ps->blurEndTime = v25 + blurEndTime;
            startTime = ps->gestureState.gestures[0].startTime;
            if ( startTime )
              ps->gestureState.gestures[0].startTime = v25 + startTime;
            stopTime = ps->gestureState.gestures[0].stopTime;
            if ( stopTime )
              ps->gestureState.gestures[0].stopTime = v25 + stopTime;
            endTime = ps->gestureState.gestures[0].endTime;
            if ( endTime )
              ps->gestureState.gestures[0].endTime = v25 + endTime;
            v42 = ps->gestureState.gestures[1].startTime;
            if ( v42 )
              ps->gestureState.gestures[1].startTime = v25 + v42;
            v43 = ps->gestureState.gestures[1].stopTime;
            if ( v43 )
              ps->gestureState.gestures[1].stopTime = v25 + v43;
            v44 = ps->gestureState.gestures[1].endTime;
            if ( v44 )
              ps->gestureState.gestures[1].endTime = v25 + v44;
            p_time = &ps->hud.archival[0].time;
            do
            {
              if ( !*(p_time - 34) )
                break;
              if ( *p_time )
                *p_time += v25;
              v46 = *(p_time - 16);
              if ( v46 )
              {
                v47 = v46 + v25;
                *(p_time - 16) = v46 + v25;
                if ( v46 + v25 > SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time )
                {
                  LODWORD(v82) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
                  LODWORD(v81) = v47;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2890, ASSERT_TYPE_ASSERT, "( ps->hud.archival[i].fadeStartTime ) <= ( SvPersistentGlobalsMP::GetTime() )", "%s <= %s\n\t%i, %i", "ps->hud.archival[i].fadeStartTime", "SvPersistentGlobalsMP::GetTime()", v81, v82) )
                    __debugbreak();
                }
              }
              v48 = *(p_time - 8);
              if ( v48 )
                *(p_time - 8) = v25 + v48;
              v49 = *(p_time - 2);
              if ( v49 )
                *(p_time - 2) = v25 + v49;
              v50 = *(p_time - 23);
              if ( v50 )
                *(p_time - 23) = v25 + v50;
              ++v15;
              p_time += 46;
            }
            while ( v15 < 0xF );
            v51 = *(_DWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x48);
            v52 = v51[302];
            if ( v52 )
              v51[302] = v25 + v52;
            v53 = v51[303];
            if ( v53 )
              v51[303] = v25 + v53;
            v54 = v51[312];
            if ( v54 )
              v51[312] = v25 + v54;
            v55 = v51[313];
            if ( v55 )
              v51[313] = v25 + v55;
            v56 = v51[1094];
            if ( v56 )
              v51[1094] = v25 + v56;
            v57 = v51[1095];
            if ( v57 )
              v51[1095] = v25 + v57;
            v58 = v51[1089];
            if ( v58 )
              v51[1089] = v25 + v58;
            v59 = v51[1090];
            if ( v59 )
              v51[1090] = v25 + v59;
            v60 = v51[1091];
            if ( v60 )
              v51[1091] = v25 + v60;
            v61 = v51[1092];
            if ( v61 )
              v51[1092] = v25 + v61;
            v62 = v51[474];
            if ( v62 )
              v51[474] = v25 + v62;
            v63 = v51[333];
            if ( v63 )
              v51[333] = v25 + v63;
            v64 = v51[332];
            if ( v64 )
              v51[332] = v25 + v64;
            v65 = v51[353];
            if ( v65 )
              v51[353] = v25 + v65;
            v66 = v51[352];
            if ( v66 )
              v51[352] = v25 + v66;
            v67 = v51[245];
            if ( v67 )
              v51[245] = v25 + v67;
            v68 = v51[246];
            if ( v68 )
              v51[246] = v25 + v68;
            v69 = v51[1088];
            if ( v69 )
              v51[1088] = v25 + v69;
            v70 = v51[3029];
            if ( v70 )
              v51[3029] = v25 + v70;
            v71 = v51[5297];
            if ( v71 )
              v51[5297] = v25 + v71;
            v51[3024] += v25;
          }
LABEL_158:
          v15 = 1;
          goto LABEL_159;
        }
      }
      goto LABEL_159;
    }
    v11 = *(unsigned int **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x10);
    v12 = *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 8);
  }
  *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x1390) = 0;
  v72 = (playerState_s *)(v9 + 576);
  if ( ps )
    v72 = ps;
  if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2719, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
  {
    __debugbreak();
    v13 = *v11;
  }
  if ( v13 <= 0 && SvClient::GetCommonClient(v12)->state == CS_ACTIVE && G_ActiveMP_GetFollowPlayerState(v12, v72) )
  {
    ClientState = G_MainMP_GetClientState(v12);
    v74 = v9 + 128;
    v75 = 3i64;
    do
    {
      *(__m256i *)v74 = *(__m256i *)&ClientState->clientIndex;
      *(__m256i *)(v74 + 32) = *(__m256i *)ClientState->isWeaponSmoking;
      *(__m256i *)(v74 + 64) = *(__m256i *)&ClientState->attachModelIndex[5];
      *(_OWORD *)(v74 + 96) = *(_OWORD *)&ClientState->attachTagIndex[4];
      v74 += 128i64;
      *(_OWORD *)(v74 - 16) = *(_OWORD *)&ClientState->attachTagIndex[8];
      ClientState = (clientState_t *)((char *)ClientState + 128);
      --v75;
    }
    while ( v75 );
    *(_OWORD *)v74 = *(_OWORD *)&ClientState->clientIndex;
    *(_QWORD *)(v74 + 16) = *(_QWORD *)&ClientState->doNotSimulateTracers;
    v76 = *(GSnapshotWeaponMap **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x28);
    if ( v76 )
    {
      Instance = GWeaponMap::GetInstance();
      GSnapshotWeaponMap::CopyFromMap(v76, Instance);
    }
    **(_DWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x30) = v72->stats[0];
    **(_QWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x38) = v72->otherFlags;
    **(_DWORD **)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x40) = *(_DWORD *)(((unsigned __int64)v83 & 0xFFFFFFFFFFFFFFC0ui64) + 0x84);
    if ( origin )
      *origin = v72->origin;
    goto LABEL_158;
  }
LABEL_159:
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return v15;
}

/*
==============
SV_SnapshotMP_GetArchivedClientTeam
==============
*/
bool SV_SnapshotMP_GetArchivedClientTeam(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, team_t *outTeam)
{
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v10; 
  team_t team; 
  bool result; 
  __int64 v13; 

  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2639, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2640, ASSERT_TYPE_ASSERT, "( outTeam )", (const char *)&queryFormat, "outTeam") )
    __debugbreak();
  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2271, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2272, ASSERT_TYPE_ASSERT, "( outTeam )", (const char *)&queryFormat, "outTeam") )
    __debugbreak();
  *outTeam = TEAM_ZERO;
  if ( *pArchiveTime > 0 )
  {
    if ( SV_SnapshotMP_ArchiveEnabled() )
    {
      p_archivePOTG = &g_svSnapshotData.archivePOTG;
      if ( !archiveUsePOTG )
        p_archivePOTG = &g_svSnapshotData.archive;
      RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, pArchiveTime);
      if ( RequestedArchiveFrame < p_archivePOTG->nextArchivedSnapshotFrames )
      {
        while ( !SV_SnapshotMP_GetCachedSnapshotPlayerTeamInternal(clientNum, RequestedArchiveFrame, p_archivePOTG, outTeam) )
        {
          ++RequestedArchiveFrame;
          v10 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - RequestedArchiveFrame);
          *pArchiveTime = v10;
          if ( v10 < 0 )
          {
            LODWORD(v13) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2301, ASSERT_TYPE_ASSERT, "( ( *pArchiveTime >= 0 ) )", "%s\n\t( *pArchiveTime ) = %i", "( *pArchiveTime >= 0 )", v13) )
              __debugbreak();
          }
          if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
            goto LABEL_23;
        }
        return 0;
      }
    }
LABEL_23:
    *pArchiveTime = 0;
  }
  if ( G_ActiveMP_GetFollowPlayerState(clientNum, NULL) )
  {
    team = G_MainMP_GetClientState(clientNum)->team;
    result = 1;
    *outTeam = team;
    return result;
  }
  return 0;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerState
==============
*/
char SV_SnapshotMP_GetCachedSnapshotPlayerState(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, cachedPlayerState_t **outCachedPlayerState)
{
  const char *v9; 
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v12; 
  char v13; 
  __int64 v14; 

  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2315, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2316, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  *outCachedPlayerState = NULL;
  if ( *pArchiveTime <= 0 )
    return 0;
  if ( !SV_SnapshotMP_ArchiveEnabled() )
  {
    *pArchiveTime = 0;
    return 0;
  }
  Profile_Begin(316);
  v9 = j_va("SV_GetCachedSnapshotPlayerState(%d)", (unsigned int)*pArchiveTime);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v9);
  p_archivePOTG = &g_svSnapshotData.archivePOTG;
  if ( !archiveUsePOTG )
    p_archivePOTG = &g_svSnapshotData.archive;
  RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, pArchiveTime);
  if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
  {
LABEL_19:
    *outCachedPlayerState = NULL;
    *pArchiveTime = 0;
    v13 = 0;
  }
  else
  {
    while ( !SV_SnapshotMP_GetCachedSnapshotPlayerStateInternal(clientNum, RequestedArchiveFrame, p_archivePOTG, 1, outCachedPlayerState) )
    {
      ++RequestedArchiveFrame;
      v12 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - RequestedArchiveFrame);
      *pArchiveTime = v12;
      if ( v12 < 0 )
      {
        LODWORD(v14) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2351, ASSERT_TYPE_ASSERT, "( ( *pArchiveTime >= 0 ) )", "%s\n\t( *pArchiveTime ) = %i", "( *pArchiveTime >= 0 )", v14) )
          __debugbreak();
      }
      if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
        goto LABEL_19;
    }
    if ( *pArchiveTime % p_archivePOTG->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2345, ASSERT_TYPE_ASSERT, "( *pArchiveTime % archiveToUse->archivedFrameDuration == 0 )", (const char *)&queryFormat, "*pArchiveTime % archiveToUse->archivedFrameDuration == 0") )
      __debugbreak();
    v13 = 1;
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return v13;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerStateInternal
==============
*/
char SV_SnapshotMP_GetCachedSnapshotPlayerStateInternal(const int clientNum, const int archivedFrameNum, const serverArchive_t *archiveToUse, const bool expectedToSucceed, cachedPlayerState_t **outCachedPlayerState)
{
  int v7; 
  __int64 v8; 
  int v9; 
  archivedSnapshot_t *v10; 
  int v12; 
  cachedPlayerState_t *v13; 
  __int64 numCachedSnapshotPlayerStatesRead; 
  int v15; 
  __int64 v16; 
  int *p_clientNum; 
  cachedPlayerState_t *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int *v22; 
  int archivedSnapshotBufferSize; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  cachedPlayerState_t *v28; 
  cachedPlayerState_t *Cache; 
  playerState_s *v30; 
  cachedPlayerState_t *v31; 
  cachedPlayerState_t *v32; 
  char *fmt; 
  bool *outRecvOriginAndVelocity; 
  bool *outRecvOriginAndVelocitya; 
  bool *outRecvVehicleState; 
  bool *outRecvVehicleStatea; 
  bool v38; 
  bool v39; 
  int archiveFrameNum; 
  int byteOffset; 
  cachedPlayerState_t *v42; 
  cachedPlayerState_t *v43; 
  msg_t buf; 
  __int64 v45; 
  int buffer[7]; 
  int v47; 
  int v48; 
  int v49; 

  v45 = -2i64;
  v38 = expectedToSucceed;
  v7 = archivedFrameNum;
  archiveFrameNum = archivedFrameNum;
  v8 = clientNum;
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( !Migration_GetBuffer() )
      goto LABEL_8;
  }
  else if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1585, ASSERT_TYPE_ASSERT, "(SV_SnapshotMP_ArchiveEnabled())", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
LABEL_8:
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1586, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( !archiveToUse->archivedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1587, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedPlayerStatesPerFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1588, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedPlayerStatesPerFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedPlayerStatesPerFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1589, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBuffer )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBuffer") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1590, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBufferSize )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBufferSize") )
    __debugbreak();
  *outCachedPlayerState = NULL;
  v43 = NULL;
  v9 = v7 % archiveToUse->archivedFrameCount;
  v10 = &archiveToUse->archivedSnapshotFrames[v9];
  if ( !v10->size )
  {
    LODWORD(outRecvOriginAndVelocity) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1597, ASSERT_TYPE_ASSERT, "( ( frame->size ) )", "( archivedFrameNum ) = %i", outRecvOriginAndVelocity) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= archiveToUse->archivedPlayerStatesPerFrameCount )
  {
    LODWORD(outRecvOriginAndVelocity) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1599, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( archiveToUse->archivedPlayerStatesPerFrameCount )", "clientNum doesn't index archiveToUse->archivedPlayerStatesPerFrameCount\n\t%i not in [0, %i)", outRecvOriginAndVelocity, archiveToUse->archivedPlayerStatesPerFrameCount) )
      __debugbreak();
  }
  byteOffset = archiveToUse->archivedSnapshotPlayerStates[(unsigned int)(v8 + v9 * archiveToUse->archivedPlayerStatesPerFrameCount)];
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v10->start) )
  {
    if ( expectedToSucceed )
    {
      LODWORD(outRecvVehicleState) = archiveToUse->archivedSnapshotBufferSize;
      LODWORD(outRecvOriginAndVelocity) = archiveToUse->nextArchivedSnapshotBuffer;
      LODWORD(fmt) = v10->start;
      Com_Printf(15, "[Snapshot] Failed to get archived snapshot for archived player state frame %i (offset:%i) - frame->start is too old - %i < %i - %i\n", (unsigned int)v7, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt, outRecvOriginAndVelocity, outRecvVehicleState);
    }
    if ( *outCachedPlayerState )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1609, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState == nullptr )", (const char *)&queryFormat, "*outCachedPlayerState == nullptr") )
        __debugbreak();
    }
    return 0;
  }
  v12 = v7 + archiveToUse->archiveTimeFrameOffset;
  Profile_Begin(319);
  v13 = g_svSnapshotData.cachedSnapshotPlayerStatesRead[0];
  v42 = g_svSnapshotData.cachedSnapshotPlayerStatesRead[0];
  numCachedSnapshotPlayerStatesRead = g_svSnapshotData.numCachedSnapshotPlayerStatesRead;
  if ( !g_svSnapshotData.cachedSnapshotPlayerStatesRead[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1436, ASSERT_TYPE_ASSERT, "( playerStateReadCache )", (const char *)&queryFormat, "playerStateReadCache") )
      __debugbreak();
    v13 = v42;
  }
  v15 = 0;
  if ( (int)numCachedSnapshotPlayerStatesRead > 0 )
  {
    v16 = 0i64;
    p_clientNum = &v13->ps.clientNum;
    while ( p_clientNum[5245] != v12 || *p_clientNum != (_DWORD)v8 )
    {
      ++v15;
      ++v16;
      p_clientNum += 5376;
      if ( v16 >= numCachedSnapshotPlayerStatesRead )
        goto LABEL_45;
    }
    *outCachedPlayerState = &v13[v15];
    Profile_EndInternal(NULL);
    goto LABEL_57;
  }
LABEL_45:
  v18 = g_svSnapshotData.cachedSnapshotPlayerStatesRead[1];
  v19 = g_svSnapshotData.numCachedSnapshotPlayerStatesRead;
  if ( !g_svSnapshotData.cachedSnapshotPlayerStatesRead[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1436, ASSERT_TYPE_ASSERT, "( playerStateReadCache )", (const char *)&queryFormat, "playerStateReadCache") )
    __debugbreak();
  v20 = 0;
  if ( (int)v19 > 0 )
  {
    v21 = 0i64;
    v22 = &v18->ps.clientNum;
    while ( v22[5245] != v12 || *v22 != (_DWORD)v8 )
    {
      ++v20;
      ++v21;
      v22 += 5376;
      if ( v21 >= v19 )
        goto LABEL_53;
    }
    *outCachedPlayerState = &v18[v20];
    Profile_EndInternal(NULL);
    v7 = archiveFrameNum;
LABEL_57:
    if ( !*outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1615, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState )", (const char *)&queryFormat, "*outCachedPlayerState") )
      __debugbreak();
    if ( (*outCachedPlayerState)->ps.clientNum != (_DWORD)v8 )
    {
      LODWORD(outRecvVehicleState) = v8;
      LODWORD(outRecvOriginAndVelocity) = (*outCachedPlayerState)->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1616, ASSERT_TYPE_ASSERT, "( (*outCachedPlayerState)->ps.clientNum ) == ( clientNum )", "(*outCachedPlayerState)->ps.clientNum == clientNum\n\t%i, %i", outRecvOriginAndVelocity, outRecvVehicleState) )
        __debugbreak();
    }
    if ( (*outCachedPlayerState)->archivedFrame != v7 + archiveToUse->archiveTimeFrameOffset )
    {
      LODWORD(outRecvVehicleState) = v7 + archiveToUse->archiveTimeFrameOffset;
      LODWORD(outRecvOriginAndVelocity) = (*outCachedPlayerState)->archivedFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1617, ASSERT_TYPE_ASSERT, "( (*outCachedPlayerState)->archivedFrame ) == ( archivedFrameNum + archiveToUse->archiveTimeFrameOffset )", "(*outCachedPlayerState)->archivedFrame == archivedFrameNum + archiveToUse->archiveTimeFrameOffset\n\t%i, %i", outRecvOriginAndVelocity, outRecvVehicleState) )
        __debugbreak();
    }
    (*outCachedPlayerState)->lastUsedTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    return 1;
  }
LABEL_53:
  *outCachedPlayerState = NULL;
  Profile_EndInternal(NULL);
  archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
  v24 = v10->start % archivedSnapshotBufferSize;
  v25 = archivedSnapshotBufferSize - v24;
  if ( v10->size > v25 )
    MSG_InitReadOnlySplit(&buf, &archiveToUse->archivedSnapshotBuffer[v24], v25, archiveToUse->archivedSnapshotBuffer, v10->playerStateSize - v25);
  else
    MSG_InitReadOnly(&buf, &archiveToUse->archivedSnapshotBuffer[v24], v10->playerStateSize);
  MSG_BeginReading(&buf);
  MSG_ReadData(&buf, 40, buffer, 40);
  if ( buf.overflowed )
  {
    Com_PrintError(15, "Failed to read cached snapshot data from the archive message for time %i\n", (unsigned int)archiveFrameNum);
    if ( *outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1626, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState == nullptr )", (const char *)&queryFormat, "*outCachedPlayerState == nullptr") )
    {
LABEL_71:
      __debugbreak();
      return 0;
    }
    return 0;
  }
  v26 = archiveFrameNum;
  v27 = v47;
  if ( v47 != archiveFrameNum + archiveToUse->archiveTimeFrameOffset )
  {
    LODWORD(outRecvVehicleState) = archiveFrameNum + archiveToUse->archiveTimeFrameOffset;
    LODWORD(outRecvOriginAndVelocity) = v47;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1630, ASSERT_TYPE_ASSERT, "( cachedSnapshot.archivedFrame ) == ( archivedFrameNum + archiveToUse->archiveTimeFrameOffset )", "cachedSnapshot.archivedFrame == archivedFrameNum + archiveToUse->archiveTimeFrameOffset\n\t%i, %i", outRecvOriginAndVelocity, outRecvVehicleState) )
      __debugbreak();
    v27 = v47;
  }
  if ( ((0x80000000 >> (v8 & 0x1F)) & buffer[v8 >> 5]) != 0 )
  {
    if ( v27 == v48 )
    {
      v28 = g_svSnapshotData.cachedSnapshotPlayerStatesRead[0];
    }
    else
    {
      if ( !SV_SnapshotMP_GetCachedSnapshotPlayerStateInternal(v8, v48 - archiveToUse->archiveTimeFrameOffset, archiveToUse, v38, &v43) )
      {
        Com_PrintError(15, "Failed to read cached snapshot data from the archive message for time %i - no baseline playerstate available\n", (unsigned int)archiveFrameNum);
        if ( *outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1648, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState == nullptr )", (const char *)&queryFormat, "*outCachedPlayerState == nullptr") )
          goto LABEL_71;
        return 0;
      }
      v28 = g_svSnapshotData.cachedSnapshotPlayerStatesRead[1];
    }
    Cache = SV_SnapshotMP_FindLRUPlayerStateInReadCache(v28, g_svSnapshotData.numCachedSnapshotPlayerStatesRead);
    *outCachedPlayerState = Cache;
    if ( !Cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1661, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState != nullptr )", (const char *)&queryFormat, "*outCachedPlayerState != nullptr") )
      __debugbreak();
    if ( byteOffset > buf.maxsize )
    {
      LODWORD(outRecvVehicleState) = buf.maxsize;
      LODWORD(outRecvOriginAndVelocity) = byteOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1662, ASSERT_TYPE_ASSERT, "( archiveDataOffset ) <= ( msg.maxsize )", "archiveDataOffset not in [0, msg.maxsize]\n\t%u not in [0, %u]", outRecvOriginAndVelocity, outRecvVehicleState) )
        __debugbreak();
    }
    Profile_Begin(320);
    MSG_SetNextRead(&buf, byteOffset);
    (*outCachedPlayerState)->time = v49;
    (*outCachedPlayerState)->archivedFrame = v26 + archiveToUse->archiveTimeFrameOffset;
    v30 = (playerState_s *)*outCachedPlayerState;
    v31 = v43;
    if ( !*outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 348, ASSERT_TYPE_ASSERT, "( toCachedPs )", (const char *)&queryFormat, "toCachedPs") )
      __debugbreak();
    MSG_ClearLastReferencedEntity(&buf);
    v30[1].commandTime = MSG_ReadByte(&buf);
    if ( !v31 )
      v31 = NULL;
    MSG_ReadDeltaPlayerstate(&buf, v30[1].otherFlags.m_flags[1], &v31->ps, v30, 1, &v38, &v39);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 340, ASSERT_TYPE_ASSERT, "( recvOriginAndVelolicy )", (const char *)&queryFormat, "recvOriginAndVelolicy") )
      __debugbreak();
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 341, ASSERT_TYPE_ASSERT, "( recvVehicleState )", (const char *)&queryFormat, "recvVehicleState") )
      __debugbreak();
    if ( buf.overflowed )
    {
      Com_PrintError(25, "SV_ReadArchivedPlayerState: end of message\n");
      RaiseException(0xC0000005, 0, 0, NULL);
      SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
      memset_0(*outCachedPlayerState, 0, sizeof(cachedPlayerState_t));
      Profile_EndInternal(NULL);
      return 0;
    }
    G_ActiveMP_ValidateSpectateOtherFlags(&v30->otherFlags);
    v32 = *outCachedPlayerState;
    if ( !*outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1458, ASSERT_TYPE_ASSERT, "( outCachedPlayerState != nullptr )", (const char *)&queryFormat, "outCachedPlayerState != nullptr") )
      __debugbreak();
    v32->origin.v[0] = v32->ps.origin.v[0];
    v32->origin.v[1] = v32->ps.origin.v[1];
    v32->origin.v[2] = v32->ps.origin.v[2];
    v32->angles.v[0] = v32->ps.viewangles.v[0];
    v32->angles.v[1] = v32->ps.viewangles.v[1];
    v32->angles.v[2] = v32->ps.viewangles.v[2];
    SV_SnapshotMP_GetArchivedPlayerTransform(v8, v26, archiveToUse, &v32->origin, &v32->angles);
    (*outCachedPlayerState)->lastUsedTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
    if ( (*outCachedPlayerState)->ps.clientNum != (_DWORD)v8 )
    {
      LODWORD(outRecvVehicleStatea) = v8;
      LODWORD(outRecvOriginAndVelocitya) = (*outCachedPlayerState)->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1686, ASSERT_TYPE_ASSERT, "( (*outCachedPlayerState)->ps.clientNum ) == ( clientNum )", "(*outCachedPlayerState)->ps.clientNum == clientNum\n\t%i, %i", outRecvOriginAndVelocitya, outRecvVehicleStatea) )
        __debugbreak();
    }
    if ( (*outCachedPlayerState)->archivedFrame != v26 + archiveToUse->archiveTimeFrameOffset )
    {
      LODWORD(outRecvVehicleStatea) = v26 + archiveToUse->archiveTimeFrameOffset;
      LODWORD(outRecvOriginAndVelocitya) = (*outCachedPlayerState)->archivedFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1687, ASSERT_TYPE_ASSERT, "( (*outCachedPlayerState)->archivedFrame ) == ( archivedFrameNum + archiveToUse->archiveTimeFrameOffset )", "(*outCachedPlayerState)->archivedFrame == archivedFrameNum + archiveToUse->archiveTimeFrameOffset\n\t%i, %i", outRecvOriginAndVelocitya, outRecvVehicleStatea) )
        __debugbreak();
    }
    Profile_EndInternal(NULL);
  }
  else
  {
    if ( v38 )
    {
      LODWORD(fmt) = v8;
      Com_Printf(15, "[Snapshot] Getting archive player state snapshot failed for time %i (offset:%i) - no client data available at offset %d\n", (unsigned int)archiveFrameNum, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt);
    }
    if ( *outCachedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1637, ASSERT_TYPE_ASSERT, "( *outCachedPlayerState == nullptr )", (const char *)&queryFormat, "*outCachedPlayerState == nullptr") )
      __debugbreak();
  }
  return 1;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerTeam
==============
*/
char SV_SnapshotMP_GetCachedSnapshotPlayerTeam(const int clientNum, const bool archiveUsePOTG, int *pArchiveTime, team_t *outTeam)
{
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v11; 
  __int64 v12; 

  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2271, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2272, ASSERT_TYPE_ASSERT, "( outTeam )", (const char *)&queryFormat, "outTeam") )
    __debugbreak();
  *outTeam = TEAM_ZERO;
  if ( *pArchiveTime <= 0 )
    return 0;
  if ( !SV_SnapshotMP_ArchiveEnabled() )
    goto LABEL_18;
  p_archivePOTG = &g_svSnapshotData.archivePOTG;
  if ( !archiveUsePOTG )
    p_archivePOTG = &g_svSnapshotData.archive;
  RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, pArchiveTime);
  if ( RequestedArchiveFrame < p_archivePOTG->nextArchivedSnapshotFrames )
  {
    while ( !SV_SnapshotMP_GetCachedSnapshotPlayerTeamInternal(clientNum, RequestedArchiveFrame, p_archivePOTG, outTeam) )
    {
      ++RequestedArchiveFrame;
      v11 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - RequestedArchiveFrame);
      *pArchiveTime = v11;
      if ( v11 < 0 )
      {
        LODWORD(v12) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2301, ASSERT_TYPE_ASSERT, "( ( *pArchiveTime >= 0 ) )", "%s\n\t( *pArchiveTime ) = %i", "( *pArchiveTime >= 0 )", v12) )
          __debugbreak();
      }
      if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
        goto LABEL_18;
    }
    return 1;
  }
  else
  {
LABEL_18:
    *pArchiveTime = 0;
    return 0;
  }
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotPlayerTeamInternal
==============
*/
char SV_SnapshotMP_GetCachedSnapshotPlayerTeamInternal(const int clientNum, const int archivedFrameNum, const serverArchive_t *const archiveToUse, team_t *outTeam)
{
  __int64 v4; 
  archivedSnapshot_t *v8; 
  int v9; 
  int v10; 
  int archivedSnapshotBufferSize; 
  int v12; 
  int playerStateSize; 
  int v14; 
  unsigned __int8 *v15; 
  __int64 v17; 
  __int64 v18; 
  msg_t buf; 
  int buffer[10]; 

  v4 = clientNum;
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1535, ASSERT_TYPE_ASSERT, "( archiveToUse != nullptr )", (const char *)&queryFormat, "archiveToUse != nullptr") )
    __debugbreak();
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1536, ASSERT_TYPE_ASSERT, "( outTeam != nullptr )", (const char *)&queryFormat, "outTeam != nullptr") )
    __debugbreak();
  *outTeam = TEAM_ZERO;
  v8 = &archiveToUse->archivedSnapshotFrames[archivedFrameNum % archiveToUse->archivedFrameCount];
  v9 = archivedFrameNum % archiveToUse->archivedFrameCount;
  if ( !v8->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1542, ASSERT_TYPE_ASSERT, "( ( frame->size ) )", "%s\n\t( archivedFrameNum ) = %i", "( frame->size )", archivedFrameNum) )
    __debugbreak();
  if ( (unsigned int)v4 >= archiveToUse->archivedPlayerStatesPerFrameCount )
  {
    LODWORD(v18) = archiveToUse->archivedPlayerStatesPerFrameCount;
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1544, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( archiveToUse->archivedPlayerStatesPerFrameCount )", "clientNum doesn't index archiveToUse->archivedPlayerStatesPerFrameCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v10 = archiveToUse->archivedSnapshotPlayerStates[(unsigned int)(v4 + archiveToUse->archivedPlayerStatesPerFrameCount * v9)];
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v8->start) )
    return 0;
  archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
  v12 = v8->start % archivedSnapshotBufferSize;
  playerStateSize = v8->playerStateSize;
  v14 = archivedSnapshotBufferSize - v12;
  v15 = &archiveToUse->archivedSnapshotBuffer[v12];
  if ( v8->size > v14 )
    MSG_InitReadOnlySplit(&buf, v15, v14, archiveToUse->archivedSnapshotBuffer, playerStateSize - v14);
  else
    MSG_InitReadOnly(&buf, v15, playerStateSize);
  MSG_BeginReading(&buf);
  MSG_ReadData(&buf, 40, buffer, 40);
  if ( buf.overflowed || ((0x80000000 >> (v4 & 0x1F)) & buffer[v4 >> 5]) == 0 )
    return 0;
  MSG_SetNextRead(&buf, v10);
  *outTeam = MSG_ReadByte(&buf);
  return 1;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWeaponMap
==============
*/
char SV_SnapshotMP_GetCachedSnapshotWeaponMap(const bool archiveUsePOTG, int *pArchiveTime, cachedSnapshotWeaponMap_t **outCachedWeaponMap)
{
  char result; 
  const char *v7; 
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v10; 
  char v11; 
  __int64 v12; 

  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2365, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2366, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  if ( !outCachedWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2367, ASSERT_TYPE_ASSERT, "( outCachedWeaponMap )", (const char *)&queryFormat, "outCachedWeaponMap") )
    __debugbreak();
  if ( *pArchiveTime <= 0 )
    return 0;
  if ( SV_SnapshotMP_ArchiveEnabled() )
  {
    Profile_Begin(317);
    v7 = j_va("SV_GetCachedSnapshotWeaponMap(%d)", (unsigned int)*pArchiveTime);
    Sys_ProfBeginNamedEvent(0xFFFF0000, v7);
    p_archivePOTG = &g_svSnapshotData.archivePOTG;
    if ( !archiveUsePOTG )
      p_archivePOTG = &g_svSnapshotData.archive;
    RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, pArchiveTime);
    if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
    {
LABEL_22:
      *outCachedWeaponMap = NULL;
      *pArchiveTime = 0;
      v11 = 0;
    }
    else
    {
      while ( !SV_SnapshotMP_GetCachedSnapshotWeaponMapInternal(RequestedArchiveFrame, p_archivePOTG, 0, 1, outCachedWeaponMap) )
      {
        ++RequestedArchiveFrame;
        v10 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - RequestedArchiveFrame);
        *pArchiveTime = v10;
        if ( v10 < 0 )
        {
          LODWORD(v12) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2399, ASSERT_TYPE_ASSERT, "( ( *pArchiveTime >= 0 ) )", "%s\n\t( *pArchiveTime ) = %i", "( *pArchiveTime >= 0 )", v12) )
            __debugbreak();
        }
        if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
          goto LABEL_22;
      }
      if ( !*outCachedWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2392, ASSERT_TYPE_ASSERT, "( *outCachedWeaponMap != nullptr )", (const char *)&queryFormat, "*outCachedWeaponMap != nullptr") )
        __debugbreak();
      if ( *pArchiveTime % p_archivePOTG->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2393, ASSERT_TYPE_ASSERT, "( *pArchiveTime % archiveToUse->archivedFrameDuration == 0 )", (const char *)&queryFormat, "*pArchiveTime % archiveToUse->archivedFrameDuration == 0") )
        __debugbreak();
      v11 = 1;
    }
    Sys_ProfEndNamedEvent();
    Profile_EndInternal(NULL);
    return v11;
  }
  else
  {
    result = 0;
    *pArchiveTime = 0;
  }
  return result;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWeaponMapInternal
==============
*/
char SV_SnapshotMP_GetCachedSnapshotWeaponMapInternal(int archivedFrame, const serverArchive_t *archiveToUse, int callDepth, bool expectedToSucceed, cachedSnapshotWeaponMap_t **outCachedWeaponMap)
{
  cachedSnapshotWeaponMap_t **v9; 
  archivedSnapshot_t *v10; 
  int v12; 
  unsigned __int16 v13; 
  int v14; 
  int archivedSnapshotBufferSize; 
  int v16; 
  int weaponMapSize; 
  int v18; 
  unsigned __int8 *v19; 
  unsigned int archiveTimeFrameOffset; 
  int v21; 
  int archivedFrameCount; 
  int v23; 
  archivedSnapshot_t *v24; 
  cachedSnapshotWeaponMap_t *v25; 
  cachedSnapshotWeaponMap_t *v26; 
  cachedSnapshotWeaponMap_t *v27; 
  cachedSnapshotWeaponMap_t *v28; 
  int v29; 
  int v30; 
  int numCachedSnapshotWeapons; 
  cachedSnapshotWeaponMap_t *v32; 
  char *fmt; 
  char *fmta; 
  __int64 v35; 
  __int64 v36; 
  msg_t buf; 
  cachedSnapshotWeaponMap_t *oldCachedFrame; 

  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( !Migration_GetBuffer() )
      goto LABEL_8;
  }
  else if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1706, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_ArchiveEnabled() )", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
LABEL_8:
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1707, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( !archiveToUse->archivedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1708, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1709, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBuffer )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBuffer") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1710, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBufferSize )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBufferSize") )
    __debugbreak();
  v9 = outCachedWeaponMap;
  if ( !outCachedWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1711, ASSERT_TYPE_ASSERT, "( outCachedWeaponMap )", (const char *)&queryFormat, "outCachedWeaponMap") )
    __debugbreak();
  *v9 = NULL;
  v10 = &archiveToUse->archivedSnapshotFrames[archivedFrame % archiveToUse->archivedFrameCount];
  if ( !v10->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1716, ASSERT_TYPE_ASSERT, "( ( frame->size ) )", "%s\n\t( archivedFrame ) = %i", "( frame->size )", archivedFrame) )
    __debugbreak();
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v10->start) )
  {
    if ( expectedToSucceed )
    {
      LODWORD(v36) = archiveToUse->archivedSnapshotBufferSize;
      LODWORD(v35) = archiveToUse->nextArchivedSnapshotBuffer;
      LODWORD(fmt) = v10->start;
      Com_Printf(15, "[Snapshot] Failed to get archived snapshot for archived frame %i (offset:%i) - frame->start is too old - %i < %i - %i\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt, v35, v36);
    }
    return 0;
  }
  Profile_Begin(321);
  v12 = 0;
  if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 512 >= 0 )
    v12 = g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 512;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v13 = BgWeaponMap::ms_runtimeSize;
  v14 = g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 1;
  if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames - 1 >= v12 + callDepth )
  {
    while ( 1 )
    {
      *v9 = &g_svSnapshotData.cachedSnapshotWeaponMapFrames[v14 % 512];
      if ( g_svSnapshotData.cachedSnapshotWeaponMapFrames[v14 % 512].archivedFrame == archivedFrame + archiveToUse->archiveTimeFrameOffset )
        break;
      if ( --v14 < v12 + callDepth )
        goto LABEL_43;
    }
    if ( g_svSnapshotData.cachedSnapshotWeaponMapFrames[v14 % 512].first_weapon < 0 )
    {
      LODWORD(v35) = g_svSnapshotData.cachedSnapshotWeaponMapFrames[v14 % 512].first_weapon;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1746, ASSERT_TYPE_ASSERT, "( ( (*outCachedWeaponMap)->first_weapon >= 0 ) )", "( (*outCachedWeaponMap)->first_weapon ) = %i", v35) )
        __debugbreak();
    }
    if ( (*v9)->first_weapon >= g_svSnapshotData.nextCachedSnapshotWeapon + callDepth * v13 - g_svSnapshotData.numCachedSnapshotWeapons )
    {
LABEL_94:
      Profile_EndInternal(NULL);
      return 1;
    }
  }
LABEL_43:
  Profile_EndInternal(NULL);
  Profile_Begin(322);
  archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
  v16 = (v10->start + v10->weaponMapStart) % archivedSnapshotBufferSize;
  weaponMapSize = v10->weaponMapSize;
  v18 = archivedSnapshotBufferSize - v16;
  v19 = &archiveToUse->archivedSnapshotBuffer[v16];
  if ( v10->size > v18 )
    MSG_InitReadOnlySplit(&buf, v19, v18, archiveToUse->archivedSnapshotBuffer, weaponMapSize - v18);
  else
    MSG_InitReadOnly(&buf, v19, weaponMapSize);
  if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames >= 2147483646 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1798, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotWeaponMapFrames: wrapped\n") )
    {
      __debugbreak();
      Profile_EndInternal(NULL);
      return 0;
    }
    goto LABEL_62;
  }
  MSG_BeginReading(&buf);
  if ( !MSG_ReadBit(&buf) )
  {
    if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1809, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
      __debugbreak();
    archiveTimeFrameOffset = archiveToUse->archiveTimeFrameOffset;
    v21 = MSG_ReadLong(&buf);
    archivedFrameCount = archiveToUse->archivedFrameCount;
    v23 = v21 - archiveTimeFrameOffset;
    if ( (int)(v21 - archiveTimeFrameOffset) < archiveToUse->nextArchivedSnapshotFrames - archivedFrameCount )
    {
      if ( expectedToSucceed )
      {
        LODWORD(v36) = archiveToUse->archivedFrameCount;
        LODWORD(v35) = archiveToUse->nextArchivedSnapshotFrames;
        LODWORD(fmt) = v21 - archiveTimeFrameOffset;
        Com_Printf(15, "[Snapshot] getting archive snapshot failed for frame %i (offset:%i) - oldArchiveFrame(%i) < nextArchivedSnapshotFrames(%i) - NUM_ARCHIVED_FRAMES(%i)\n", (unsigned int)archivedFrame, archiveTimeFrameOffset, fmt, v35, v36);
        Profile_EndInternal(NULL);
        return 0;
      }
      goto LABEL_62;
    }
    v24 = &archiveToUse->archivedSnapshotFrames[v23 % archivedFrameCount];
    if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v24->start) )
    {
      if ( expectedToSucceed )
      {
        LODWORD(v36) = archiveToUse->archivedSnapshotBufferSize;
        LODWORD(v35) = archiveToUse->nextArchivedSnapshotBuffer;
        LODWORD(fmt) = v24->start;
        Com_Printf(15, "[Snapshot] getting archive snapshot failed for frame %i (offset:%i) - frame->start(%i) < nextArchivedSnapshotBuffer(%i) - archivedSnapshotBufferSize(%i)\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt, v35, v36);
        Profile_EndInternal(NULL);
        return 0;
      }
      goto LABEL_62;
    }
    if ( !SV_SnapshotMP_GetCachedSnapshotWeaponMapInternal(v23, archiveToUse, callDepth + 1, expectedToSucceed, &oldCachedFrame) )
    {
      if ( expectedToSucceed )
      {
        LODWORD(fmta) = v23;
        Com_Printf(15, "[Snapshot] failed to get snapshot for frame %i (offset:%i) - it was delta'd off time %i, and we couldn't get that snapshot\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmta);
      }
LABEL_62:
      Profile_EndInternal(NULL);
      return 0;
    }
    if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1846, ASSERT_TYPE_ASSERT, "( oldCachedFrame != nullptr )", (const char *)&queryFormat, "oldCachedFrame != nullptr") )
      __debugbreak();
    if ( oldCachedFrame->usesDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1847, ASSERT_TYPE_ASSERT, "( !oldCachedFrame->usesDelta )", (const char *)&queryFormat, "!oldCachedFrame->usesDelta") )
      __debugbreak();
    v25 = &g_svSnapshotData.cachedSnapshotWeaponMapFrames[g_svSnapshotData.nextCachedSnapshotWeaponMapFrames % 512];
    *v9 = v25;
    if ( v25 == oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1849, ASSERT_TYPE_ASSERT, "( (*outCachedWeaponMap) != oldCachedFrame )", (const char *)&queryFormat, "(*outCachedWeaponMap) != oldCachedFrame") )
      __debugbreak();
    (*v9)->archivedFrame = archivedFrame + archiveToUse->archiveTimeFrameOffset;
    (*v9)->usesDelta = 1;
    (*v9)->time = MSG_ReadLong(&buf);
    if ( !SV_ReadDeltaCachedWeapons(&buf, *v9, oldCachedFrame) )
    {
      v26 = *v9;
      *(_QWORD *)&v26->num_weapons = 0i64;
      *(_QWORD *)&v26->archivedFrame = 0i64;
      v26->usesDelta = 0;
      SV_SnapshotCachingMP_ReadFailure();
      Profile_EndInternal(NULL);
      return 0;
    }
    goto LABEL_87;
  }
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1867, ASSERT_TYPE_ASSERT, "( !msg.overflowed )", (const char *)&queryFormat, "!msg.overflowed") )
    __debugbreak();
  v27 = &g_svSnapshotData.cachedSnapshotWeaponMapFrames[g_svSnapshotData.nextCachedSnapshotWeaponMapFrames % 512];
  *v9 = v27;
  v27->archivedFrame = archivedFrame + archiveToUse->archiveTimeFrameOffset;
  (*v9)->usesDelta = 0;
  (*v9)->time = MSG_ReadLong(&buf);
  v28 = *v9;
  if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1245, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
    __debugbreak();
  v28->num_weapons = 0;
  v28->first_weapon = g_svSnapshotData.nextCachedSnapshotWeapon;
  MSG_ClearLastReferencedEntity(&buf);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v29 = BgWeaponMap::ms_runtimeSize;
  v30 = MSG_ReadWeaponMapEntry_Index(&buf);
  if ( v30 >= v29 )
  {
LABEL_87:
    ++g_svSnapshotData.nextCachedSnapshotWeaponMapFrames;
    numCachedSnapshotWeapons = g_svSnapshotData.numCachedSnapshotWeapons;
    if ( (*v9)->num_weapons > g_svSnapshotData.numCachedSnapshotWeapons )
    {
      LODWORD(v36) = g_svSnapshotData.numCachedSnapshotWeapons;
      LODWORD(v35) = (*v9)->num_weapons;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1889, ASSERT_TYPE_SANITY, "( (*outCachedWeaponMap)->num_weapons ) <= ( g_svSnapshotData.numCachedSnapshotWeapons )", "(*outCachedWeaponMap)->num_weapons <= g_svSnapshotData.numCachedSnapshotWeapons\n\t%i, %i", v35, v36) )
        __debugbreak();
      numCachedSnapshotWeapons = g_svSnapshotData.numCachedSnapshotWeapons;
    }
    if ( (*v9)->first_weapon < g_svSnapshotData.nextCachedSnapshotWeapon - numCachedSnapshotWeapons )
    {
      LODWORD(v36) = g_svSnapshotData.nextCachedSnapshotWeapon - numCachedSnapshotWeapons;
      LODWORD(v35) = (*v9)->first_weapon;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1890, ASSERT_TYPE_SANITY, "( (*outCachedWeaponMap)->first_weapon ) >= ( g_svSnapshotData.nextCachedSnapshotWeapon - g_svSnapshotData.numCachedSnapshotWeapons )", "(*outCachedWeaponMap)->first_weapon >= g_svSnapshotData.nextCachedSnapshotWeapon - g_svSnapshotData.numCachedSnapshotWeapons\n\t%i, %i", v35, v36) )
        __debugbreak();
    }
    goto LABEL_94;
  }
  while ( !buf.overflowed )
  {
    if ( g_svSnapshotData.nextCachedSnapshotWeapon >= 2147483646 )
    {
      Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotWeapon wrapped\n");
      goto LABEL_97;
    }
    MSG_ReadDeltaArchivedWeaponMapEntry(&buf, v30, NULL, &g_svSnapshotData.cachedSnapshotWeapons[g_svSnapshotData.nextCachedSnapshotWeapon % g_svSnapshotData.numCachedSnapshotWeapons]);
    ++g_svSnapshotData.nextCachedSnapshotWeapon;
    ++v28->num_weapons;
    v30 = MSG_ReadWeaponMapEntry_Index(&buf);
    if ( v30 >= v29 )
      goto LABEL_87;
  }
  Com_PrintError(25, "SV_ReadCachedWeapons: end of message\n");
LABEL_97:
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  v32 = *v9;
  *(_QWORD *)&v32->num_weapons = 0i64;
  *(_QWORD *)&v32->archivedFrame = 0i64;
  v32->usesDelta = 0;
  RaiseException(0xC0000005, 0, 0, NULL);
  SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
  Profile_EndInternal(NULL);
  return 0;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWorldState
==============
*/
char SV_SnapshotMP_GetCachedSnapshotWorldState(const bool archiveUsePOTG, int *pArchiveTime, cachedSnapshotWorldState_t **outCachedWorldState)
{
  char result; 
  const char *v7; 
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v10; 
  char v11; 
  __int64 v12; 

  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2414, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( !pArchiveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2415, ASSERT_TYPE_ASSERT, "( pArchiveTime )", (const char *)&queryFormat, "pArchiveTime") )
    __debugbreak();
  if ( *pArchiveTime <= 0 )
    return 0;
  if ( SV_SnapshotMP_ArchiveEnabled() )
  {
    Profile_Begin(318);
    v7 = j_va("SV_GetCachedSnapshotWorldState(%d)", (unsigned int)*pArchiveTime);
    Sys_ProfBeginNamedEvent(0xFFFF0000, v7);
    p_archivePOTG = &g_svSnapshotData.archivePOTG;
    if ( !archiveUsePOTG )
      p_archivePOTG = &g_svSnapshotData.archive;
    RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, pArchiveTime);
    if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
    {
LABEL_19:
      *outCachedWorldState = NULL;
      *pArchiveTime = 0;
      v11 = 0;
    }
    else
    {
      while ( !SV_SnapshotMP_GetCachedSnapshotWorldStateInternal(RequestedArchiveFrame, p_archivePOTG, 0, 1, outCachedWorldState) )
      {
        ++RequestedArchiveFrame;
        v10 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - RequestedArchiveFrame);
        *pArchiveTime = v10;
        if ( v10 < 0 )
        {
          LODWORD(v12) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2449, ASSERT_TYPE_ASSERT, "( ( *pArchiveTime >= 0 ) )", "%s\n\t( *pArchiveTime ) = %i", "( *pArchiveTime >= 0 )", v12) )
            __debugbreak();
        }
        if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
          goto LABEL_19;
      }
      if ( !*outCachedWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2442, ASSERT_TYPE_ASSERT, "( *outCachedWorldState != nullptr )", (const char *)&queryFormat, "*outCachedWorldState != nullptr") )
        __debugbreak();
      if ( *pArchiveTime % p_archivePOTG->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2443, ASSERT_TYPE_ASSERT, "( *pArchiveTime % archiveToUse->archivedFrameDuration == 0 )", (const char *)&queryFormat, "*pArchiveTime % archiveToUse->archivedFrameDuration == 0") )
        __debugbreak();
      v11 = 1;
    }
    Sys_ProfEndNamedEvent();
    Profile_EndInternal(NULL);
    return v11;
  }
  else
  {
    result = 0;
    *pArchiveTime = 0;
  }
  return result;
}

/*
==============
SV_SnapshotMP_GetCachedSnapshotWorldStateInternal
==============
*/
char SV_SnapshotMP_GetCachedSnapshotWorldStateInternal(int archivedFrame, const serverArchive_t *archiveToUse, int callDepth, bool expectedToSucceed, cachedSnapshotWorldState_t **outCachedWorldState)
{
  __int64 v6; 
  cachedSnapshotWorldState_t **v9; 
  archivedSnapshot_t *v10; 
  int nextCachedSnapshotWorldStateFrames; 
  cachedSnapshotWorldState_t **PersistentGlobalsMP; 
  int v14; 
  int v15; 
  int v16; 
  cachedSnapshotWorldState_t *v17; 
  int nextCachedSnapshotEntities; 
  cachedSnapshotWorldState_t *v19; 
  int archivedSnapshotBufferSize; 
  int v21; 
  int worldStateSize; 
  __int64 v23; 
  int v24; 
  unsigned int archiveTimeFrameOffset; 
  int v26; 
  int archivedFrameCount; 
  int v28; 
  archivedSnapshot_t *v29; 
  cachedSnapshotWorldState_t *v30; 
  char v31; 
  cachedSnapshotWorldState_t *v32; 
  char v33; 
  char v34; 
  char v35; 
  char v36; 
  char v37; 
  cachedSnapshotWorldState_t *v38; 
  char v39; 
  cachedSnapshotWorldState_t *v40; 
  unsigned int v41; 
  int v42; 
  char v43; 
  unsigned int AgentBits; 
  int v45; 
  char v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  cachedEntityLoD_t *v50; 
  char v51; 
  char v52; 
  cachedSnapshotWorldState_t *v53; 
  __int64 num_entities; 
  int v55; 
  __int64 cachedInstNextIndex; 
  __int64 scriptableInstFirstIndex; 
  __int64 cachedPartNextIndex; 
  __int64 scriptablePartFirstIndex; 
  char *fmt; 
  char *fmta; 
  __int64 clientBits; 
  __int64 v63; 
  msg_t buf; 
  cachedSnapshotWorldState_t *oldCachedFrame; 
  int v66; 

  v66 = callDepth;
  v6 = callDepth;
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( !Migration_GetBuffer() )
      goto LABEL_8;
  }
  else if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1908, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_ArchiveEnabled() )", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
LABEL_8:
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1909, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( !archiveToUse->archivedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1910, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1911, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBuffer )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBuffer") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1912, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBufferSize )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBufferSize") )
    __debugbreak();
  v9 = outCachedWorldState;
  if ( !outCachedWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1913, ASSERT_TYPE_ASSERT, "( outCachedWorldState != nullptr )", (const char *)&queryFormat, "outCachedWorldState != nullptr") )
    __debugbreak();
  *v9 = NULL;
  v10 = &archiveToUse->archivedSnapshotFrames[archivedFrame % archiveToUse->archivedFrameCount];
  if ( !v10->size )
  {
    LODWORD(clientBits) = archivedFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1918, ASSERT_TYPE_ASSERT, "( ( frame->size ) )", "( archivedFrame ) = %i", clientBits) )
      __debugbreak();
  }
  if ( SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v10->start) )
  {
    Profile_Begin(323);
    nextCachedSnapshotWorldStateFrames = g_svSnapshotData.nextCachedSnapshotWorldStateFrames;
    PersistentGlobalsMP = (cachedSnapshotWorldState_t **)SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v14 = 0;
    outCachedWorldState = PersistentGlobalsMP;
    v15 = g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 1;
    v16 = nextCachedSnapshotWorldStateFrames - 512;
    if ( v16 >= 0 )
      v14 = v16;
    if ( v15 >= v14 + (int)v6 )
    {
      while ( 1 )
      {
        v17 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[v15 % 512];
        *v9 = v17;
        if ( v17->archivedFrame == archivedFrame + archiveToUse->archiveTimeFrameOffset )
          break;
        if ( --v15 < v14 + (int)v6 )
          goto LABEL_55;
      }
      if ( g_svSnapshotData.cachedSnapshotWorldStateFrames[v15 % 512].first_entity < 0 )
      {
        LODWORD(clientBits) = g_svSnapshotData.cachedSnapshotWorldStateFrames[v15 % 512].first_entity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1946, ASSERT_TYPE_ASSERT, "( ( (*outCachedWorldState)->first_entity >= 0 ) )", "( (*outCachedWorldState)->first_entity ) = %i", clientBits) )
          __debugbreak();
      }
      if ( (*v9)->num_entities != (*v9)->num_entityClientMask )
      {
        LODWORD(clientBits) = (*v9)->num_entities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1949, ASSERT_TYPE_ASSERT, "( (*outCachedWorldState)->num_entities ) == ( (*outCachedWorldState)->num_entityClientMask )", "(*outCachedWorldState)->num_entities == (*outCachedWorldState)->num_entityClientMask\n\t%i, %i", clientBits, (*v9)->num_entityClientMask) )
          __debugbreak();
      }
      if ( (*v9)->first_entity != (*v9)->first_entityClientMask )
      {
        LODWORD(v63) = (*v9)->first_entityClientMask;
        LODWORD(clientBits) = (*v9)->first_entity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1950, ASSERT_TYPE_ASSERT, "( (*outCachedWorldState)->first_entity ) == ( (*outCachedWorldState)->first_entityClientMask )", "(*outCachedWorldState)->first_entity == (*outCachedWorldState)->first_entityClientMask\n\t%i, %i", clientBits, v63) )
          __debugbreak();
      }
      nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
      if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
      {
        LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
        LODWORD(clientBits) = g_svSnapshotData.nextCachedSnapshotEntities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 1951, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", clientBits, v63) )
          __debugbreak();
        nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
      }
      v19 = *v9;
      if ( (*v9)->first_entity >= nextCachedSnapshotEntities + 1200 * ((int)v6 - 9) && v19->first_clientState >= (signed int)(g_svSnapshotData.nextCachedSnapshotClientStates + v6 * SvClient::ms_clientCount - g_svSnapshotData.numCachedSnapshotClientStates) && v19->first_agent >= g_svSnapshotData.nextCachedSnapshotAgents + (int)v6 * *((_DWORD *)outCachedWorldState + 18) - g_svSnapshotData.numCachedSnapshotAgents && v6 + g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex <= v19->scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount && v6 + g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex <= v19->scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount && v19->umbraGateStatesIndex >= (int)v6 + g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates )
      {
LABEL_191:
        Profile_EndInternal(NULL);
        return 1;
      }
    }
LABEL_55:
    Profile_EndInternal(NULL);
    Profile_Begin(324);
    archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
    v21 = (v10->start + v10->worldStateStart) % archivedSnapshotBufferSize;
    worldStateSize = v10->worldStateSize;
    v23 = v21;
    v24 = archivedSnapshotBufferSize - v21;
    if ( v10->size > v24 )
    {
      if ( worldStateSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2023, ASSERT_TYPE_ASSERT, "( frame->worldStateSize > 0 )", (const char *)&queryFormat, "frame->worldStateSize > 0") )
        __debugbreak();
      MSG_InitReadOnlySplit(&buf, &archiveToUse->archivedSnapshotBuffer[v23], v24, archiveToUse->archivedSnapshotBuffer, v10->worldStateSize - v24);
    }
    else
    {
      if ( worldStateSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2005, ASSERT_TYPE_ASSERT, "( frame->worldStateSize > 0 )", (const char *)&queryFormat, "frame->worldStateSize > 0") )
        __debugbreak();
      MSG_InitReadOnly(&buf, &archiveToUse->archivedSnapshotBuffer[v23], v10->worldStateSize);
    }
    if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames >= 2147483646 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2030, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "g_svSnapshotData.nextCachedSnapshotFrames: wrapped\n") )
      {
        __debugbreak();
        Profile_EndInternal(NULL);
        return 0;
      }
      goto LABEL_80;
    }
    MSG_BeginReading(&buf);
    if ( MSG_ReadBit(&buf) )
    {
      if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2129, ASSERT_TYPE_ASSERT, "( !msg.overflowed )", (const char *)&queryFormat, "!msg.overflowed") )
        __debugbreak();
      v38 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[g_svSnapshotData.nextCachedSnapshotWorldStateFrames % 512];
      *v9 = v38;
      v38->archivedFrame = archivedFrame + archiveToUse->archiveTimeFrameOffset;
      (*v9)->usesDelta = 0;
      (*v9)->time = MSG_ReadLong(&buf);
      v39 = SV_ReadDeltaCachedUmbraGateStates(&buf, *v9, NULL);
      v40 = *v9;
      if ( !v39 )
        goto LABEL_101;
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 508, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
        __debugbreak();
      v40->num_clientStates = 0;
      v40->first_clientState = g_svSnapshotData.nextCachedSnapshotClientStates;
      MSG_ClearLastReferencedEntity(&buf);
      v41 = ComCharacterLimits::GetClientBits();
      if ( MSG_ReadBit(&buf) )
      {
        while ( 1 )
        {
          v42 = MSG_ReadEntityIndex(&buf, v41);
          if ( buf.overflowed )
            break;
          if ( g_svSnapshotData.nextCachedSnapshotClientStates >= 2147483646 )
          {
            Com_PrintError(25, "SV_ReadCachedClientStates: g_svSnapshotData.nextCachedSnapshotClients wrapped\n");
            goto LABEL_139;
          }
          MSG_ReadDeltaClient(&buf, v40->time, NULL, &g_svSnapshotData.cachedSnapshotClientStates[(__int64)(g_svSnapshotData.nextCachedSnapshotClientStates % g_svSnapshotData.numCachedSnapshotClientStates)].cs, v42, v41);
          ++g_svSnapshotData.nextCachedSnapshotClientStates;
          ++v40->num_clientStates;
          if ( !MSG_ReadBit(&buf) )
            goto LABEL_109;
        }
        Com_PrintError(25, "SV_ReadCachedClientStates: end of message\n");
LABEL_139:
        RaiseException(0xC0000005, 0, 0, NULL);
        SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
        v43 = 0;
      }
      else
      {
LABEL_109:
        v43 = 1;
      }
      v40 = *v9;
      if ( !v43 )
        goto LABEL_101;
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 676, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
        __debugbreak();
      v40->num_agents = 0;
      v40->first_agent = g_svSnapshotData.nextCachedSnapshotAgents;
      MSG_ClearLastReferencedEntity(&buf);
      AgentBits = ComCharacterLimits::GetAgentBits();
      if ( MSG_ReadBit(&buf) )
      {
        while ( 1 )
        {
          v45 = MSG_ReadEntityIndex(&buf, AgentBits);
          if ( buf.overflowed )
            break;
          if ( g_svSnapshotData.nextCachedSnapshotAgents >= 2147483646 )
          {
            Com_PrintError(25, "g_svSnapshotData.nextCachedSnapshotAgents wrapped\n");
            goto LABEL_142;
          }
          MSG_ReadDeltaAgent(&buf, v40->time, NULL, &g_svSnapshotData.cachedSnapshotAgents[(__int64)(g_svSnapshotData.nextCachedSnapshotAgents % g_svSnapshotData.numCachedSnapshotAgents)].agentState, v45, AgentBits);
          ++g_svSnapshotData.nextCachedSnapshotAgents;
          ++v40->num_agents;
          if ( !MSG_ReadBit(&buf) )
            goto LABEL_118;
        }
        Com_PrintError(25, "SV_ReadCachedAgents: end of message\n");
LABEL_142:
        RaiseException(0xC0000005, 0, 0, NULL);
        SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
        v46 = 0;
      }
      else
      {
LABEL_118:
        v46 = 1;
      }
      v40 = *v9;
      if ( !v46 )
      {
LABEL_101:
        memset_0(v40, 0, sizeof(cachedSnapshotWorldState_t));
        return 0;
      }
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 858, ASSERT_TYPE_ASSERT, "( cachedFrame )", (const char *)&queryFormat, "cachedFrame") )
        __debugbreak();
      if ( !g_svSnapshotData.useNetfieldLoD )
        goto LABEL_131;
      if ( !g_svSnapshotData.cachedSnapshotEntityLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 865, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntityLoD != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntityLoD != nullptr") )
        __debugbreak();
      v40->num_entityLoD = 0;
      v40->first_entityLoD = g_svSnapshotData.nextCachedSnapshotEntityLoD;
      MSG_ClearLastReferencedEntity(&buf);
      v47 = ComCharacterLimits::GetClientBits();
      if ( MSG_ReadBit(&buf) )
      {
        while ( 1 )
        {
          v49 = (unsigned int)MSG_ReadEntityIndex(&buf, v47);
          if ( buf.overflowed )
            break;
          if ( g_svSnapshotData.nextCachedSnapshotEntityLoD >= 2147483646 )
          {
            Com_PrintError(25, "SV_ReadCachedEntityLoD: g_svSnapshotData.nextCachedSnapshotEntityLoD wrapped\n", v48, v49);
            goto LABEL_145;
          }
          v50 = &g_svSnapshotData.cachedSnapshotEntityLoD[g_svSnapshotData.nextCachedSnapshotEntityLoD % g_svSnapshotData.numCachedSnapshotEntityLoD];
          v50->lodInfo.clientIndex = v49;
          MSG_ReadDeltaEntityLoD(&buf, NULL, &v50->lodInfo, v49);
          ++g_svSnapshotData.nextCachedSnapshotEntityLoD;
          ++v40->num_entityLoD;
          if ( !MSG_ReadBit(&buf) )
            goto LABEL_131;
        }
        Com_PrintError(25, "SV_ReadCachedEntityLoD: end of message\n", v48, v49);
LABEL_145:
        RaiseException(0xC0000005, 0, 0, NULL);
        SV_SnapWorkersMP_SetSnapshotBuildError((const char *)&stru_1440BFD48);
        v51 = 0;
      }
      else
      {
LABEL_131:
        v51 = 1;
      }
      v32 = *v9;
      if ( v51 )
      {
        v52 = SV_ReadDeltaCachedScriptableWorld(&buf, *v9, NULL);
        v32 = *v9;
        if ( v52 )
        {
          v37 = SV_ReadCachedEntities(&buf, *v9);
          goto LABEL_135;
        }
      }
    }
    else
    {
      if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2041, ASSERT_TYPE_ASSERT, "(!msg.overflowed)", (const char *)&queryFormat, "!msg.overflowed") )
        __debugbreak();
      archiveTimeFrameOffset = archiveToUse->archiveTimeFrameOffset;
      v26 = MSG_ReadLong(&buf);
      archivedFrameCount = archiveToUse->archivedFrameCount;
      v28 = v26 - archiveTimeFrameOffset;
      if ( (int)(v26 - archiveTimeFrameOffset) < archiveToUse->nextArchivedSnapshotFrames - archivedFrameCount )
      {
        if ( expectedToSucceed )
        {
          LODWORD(v63) = archiveToUse->archivedFrameCount;
          LODWORD(clientBits) = archiveToUse->nextArchivedSnapshotFrames;
          LODWORD(fmt) = v26 - archiveTimeFrameOffset;
          Com_Printf(15, "[Snapshot] getting world state archive snapshot failed for time %i (offset:%i) - oldArchiveFrame(%i) < nextArchivedSnapshotFrames(%i) - NUM_ARCHIVED_FRAMES(%i)\n", (unsigned int)archivedFrame, archiveTimeFrameOffset, fmt, clientBits, v63);
          Profile_EndInternal(NULL);
          return 0;
        }
        goto LABEL_80;
      }
      v29 = &archiveToUse->archivedSnapshotFrames[v28 % archivedFrameCount];
      if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v29->start) )
      {
        if ( expectedToSucceed )
        {
          LODWORD(v63) = archiveToUse->archivedSnapshotBufferSize;
          LODWORD(clientBits) = archiveToUse->nextArchivedSnapshotBuffer;
          LODWORD(fmt) = v29->start;
          Com_Printf(15, "[Snapshot] getting world state archive snapshot failed for time %i (offset:%i) - frame->start(%i) < nextArchivedSnapshotBuffer(%i) - archivedSnapshotBufferSize(%i)\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt, clientBits, v63);
          Profile_EndInternal(NULL);
          return 0;
        }
        goto LABEL_80;
      }
      if ( !SV_SnapshotMP_GetCachedSnapshotWorldStateInternal(v28, archiveToUse, v66 + 1, expectedToSucceed, &oldCachedFrame) )
      {
        if ( expectedToSucceed )
        {
          LODWORD(fmta) = v28;
          Com_Printf(15, "[Snapshot] failed to get world state  snapshot for time %i (offset:%i) - it was delta'd off time %i, and we couldn't get that snapshot\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmta);
        }
LABEL_80:
        Profile_EndInternal(NULL);
        return 0;
      }
      if ( !oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2078, ASSERT_TYPE_ASSERT, "( oldCachedFrame != nullptr )", (const char *)&queryFormat, "oldCachedFrame != nullptr") )
        __debugbreak();
      if ( oldCachedFrame->usesDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2079, ASSERT_TYPE_ASSERT, "( !oldCachedFrame->usesDelta )", (const char *)&queryFormat, "!oldCachedFrame->usesDelta") )
        __debugbreak();
      v30 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[g_svSnapshotData.nextCachedSnapshotWorldStateFrames % 512];
      *v9 = v30;
      if ( v30 == oldCachedFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2081, ASSERT_TYPE_ASSERT, "( *outCachedWorldState != oldCachedFrame )", (const char *)&queryFormat, "*outCachedWorldState != oldCachedFrame") )
        __debugbreak();
      (*v9)->archivedFrame = archivedFrame + archiveToUse->archiveTimeFrameOffset;
      (*v9)->usesDelta = 1;
      (*v9)->time = MSG_ReadLong(&buf);
      v31 = SV_ReadDeltaCachedUmbraGateStates(&buf, *v9, oldCachedFrame);
      v32 = *v9;
      if ( v31 )
      {
        v33 = SV_ReadDeltaCachedClientStates(&buf, *v9, oldCachedFrame);
        v32 = *v9;
        if ( v33 )
        {
          v34 = SV_ReadDeltaCachedAgents(&buf, *v9, oldCachedFrame);
          v32 = *v9;
          if ( v34 )
          {
            v35 = SV_ReadDeltaCachedEntityLoD(&buf, *v9, oldCachedFrame);
            v32 = *v9;
            if ( v35 )
            {
              v36 = SV_ReadDeltaCachedScriptableWorld(&buf, *v9, oldCachedFrame);
              v32 = *v9;
              if ( v36 )
              {
                v37 = SV_ReadDeltaCachedEntities(&buf, *v9, oldCachedFrame);
LABEL_135:
                if ( !v37 )
                {
                  memset_0(*v9, 0, sizeof(cachedSnapshotWorldState_t));
                  return 0;
                }
                ++g_svSnapshotData.nextCachedSnapshotWorldStateFrames;
                v53 = *v9;
                num_entities = (unsigned int)(*v9)->num_entities;
                if ( (int)num_entities > 600 )
                {
                  Com_PrintError(1, "** Too many entities %d > %d to efficiently cache snapshot data. ***\n", num_entities, 600i64);
                  v53 = *v9;
                }
                v55 = v53->num_entities;
                if ( v55 > 1200 )
                {
                  Com_PrintError(25, "** Too many entities %d > %d to cache snapshot data. ***\n", (unsigned int)v55, 1200i64);
                  memset_0(*v9, 0, sizeof(cachedSnapshotWorldState_t));
                  SV_SnapshotCachingMP_ReadFailure();
                  Profile_EndInternal(NULL);
                  return 0;
                }
                if ( (*v9)->num_clientStates > g_svSnapshotData.numCachedSnapshotClientStates )
                {
                  LODWORD(v63) = g_svSnapshotData.numCachedSnapshotClientStates;
                  LODWORD(clientBits) = (*v9)->num_clientStates;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2194, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->num_clientStates ) <= ( g_svSnapshotData.numCachedSnapshotClientStates )", "(*outCachedWorldState)->num_clientStates <= g_svSnapshotData.numCachedSnapshotClientStates\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->num_agents > g_svSnapshotData.numCachedSnapshotAgents )
                {
                  LODWORD(v63) = g_svSnapshotData.numCachedSnapshotAgents;
                  LODWORD(clientBits) = (*v9)->num_agents;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2195, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->num_agents ) <= ( g_svSnapshotData.numCachedSnapshotAgents )", "(*outCachedWorldState)->num_agents <= g_svSnapshotData.numCachedSnapshotAgents\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->num_entityLoD > g_svSnapshotData.numCachedSnapshotEntityLoD )
                {
                  LODWORD(v63) = g_svSnapshotData.numCachedSnapshotEntityLoD;
                  LODWORD(clientBits) = (*v9)->num_entityLoD;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2196, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->num_entityLoD ) <= ( g_svSnapshotData.numCachedSnapshotEntityLoD )", "(*outCachedWorldState)->num_entityLoD <= g_svSnapshotData.numCachedSnapshotEntityLoD\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->first_entity < g_svSnapshotData.nextCachedSnapshotEntities - 10800 )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotEntities - 10800;
                  LODWORD(clientBits) = (*v9)->first_entity;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2197, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->first_entity ) >= ( g_svSnapshotData.nextCachedSnapshotEntities - (18 * (600)) )", "(*outCachedWorldState)->first_entity >= g_svSnapshotData.nextCachedSnapshotEntities - NUM_CACHED_SNAPSHOT_ENTITIES\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->first_entityClientMask < g_svSnapshotData.nextCachedSnapshotEntityClientMask - 10800 )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotEntityClientMask - 10800;
                  LODWORD(clientBits) = (*v9)->first_entityClientMask;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2198, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->first_entityClientMask ) >= ( g_svSnapshotData.nextCachedSnapshotEntityClientMask - (18 * (600)) )", "(*outCachedWorldState)->first_entityClientMask >= g_svSnapshotData.nextCachedSnapshotEntityClientMask - NUM_CACHED_SNAPSHOT_ENTITIES\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->first_clientState < g_svSnapshotData.nextCachedSnapshotClientStates - g_svSnapshotData.numCachedSnapshotClientStates )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotClientStates - g_svSnapshotData.numCachedSnapshotClientStates;
                  LODWORD(clientBits) = (*v9)->first_clientState;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2199, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->first_clientState ) >= ( g_svSnapshotData.nextCachedSnapshotClientStates - g_svSnapshotData.numCachedSnapshotClientStates )", "(*outCachedWorldState)->first_clientState >= g_svSnapshotData.nextCachedSnapshotClientStates - g_svSnapshotData.numCachedSnapshotClientStates\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->first_agent < g_svSnapshotData.nextCachedSnapshotAgents - g_svSnapshotData.numCachedSnapshotAgents )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotAgents - g_svSnapshotData.numCachedSnapshotAgents;
                  LODWORD(clientBits) = (*v9)->first_agent;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2200, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->first_agent ) >= ( g_svSnapshotData.nextCachedSnapshotAgents - g_svSnapshotData.numCachedSnapshotAgents )", "(*outCachedWorldState)->first_agent >= g_svSnapshotData.nextCachedSnapshotAgents - g_svSnapshotData.numCachedSnapshotAgents\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->first_entityLoD < g_svSnapshotData.nextCachedSnapshotEntityLoD - g_svSnapshotData.numCachedSnapshotEntityLoD )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotEntityLoD - g_svSnapshotData.numCachedSnapshotEntityLoD;
                  LODWORD(clientBits) = (*v9)->first_entityLoD;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2201, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->first_entityLoD ) >= ( g_svSnapshotData.nextCachedSnapshotEntityLoD - g_svSnapshotData.numCachedSnapshotEntityLoD )", "(*outCachedWorldState)->first_entityLoD >= g_svSnapshotData.nextCachedSnapshotEntityLoD - g_svSnapshotData.numCachedSnapshotEntityLoD\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                cachedInstNextIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
                if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex >= 0x7FFFFFFFFFFFFFFEi64 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2202, ASSERT_TYPE_SANITY, "( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex < SCRIPTABLE_SNAPSHOT_INDEX_MAX\n\t%zi, %zi", g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex, 0x7FFFFFFFFFFFFFFEui64) )
                    __debugbreak();
                  cachedInstNextIndex = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
                }
                scriptableInstFirstIndex = (*v9)->scriptableInstFirstIndex;
                if ( scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount < cachedInstNextIndex )
                {
                  LODWORD(v63) = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
                  LODWORD(clientBits) = scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2203, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount ) >= ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex )", "(*outCachedWorldState)->scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount >= g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                cachedPartNextIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
                if ( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex >= 0x7FFFFFFFFFFFFFFEi64 )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2204, ASSERT_TYPE_SANITY, "( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex ) < ( SCRIPTABLE_SNAPSHOT_INDEX_MAX )", "g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex < SCRIPTABLE_SNAPSHOT_INDEX_MAX\n\t%zi, %zi", g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex, 0x7FFFFFFFFFFFFFFEui64) )
                    __debugbreak();
                  cachedPartNextIndex = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
                }
                scriptablePartFirstIndex = (*v9)->scriptablePartFirstIndex;
                if ( scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount < cachedPartNextIndex )
                {
                  LODWORD(v63) = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
                  LODWORD(clientBits) = scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2205, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount ) >= ( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex )", "(*outCachedWorldState)->scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount >= g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                if ( (*v9)->umbraGateStatesIndex < g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates )
                {
                  LODWORD(v63) = g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates;
                  LODWORD(clientBits) = (*v9)->umbraGateStatesIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2207, ASSERT_TYPE_SANITY, "( (*outCachedWorldState)->umbraGateStatesIndex ) >= ( g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates )", "(*outCachedWorldState)->umbraGateStatesIndex >= g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates\n\t%i, %i", clientBits, v63) )
                    __debugbreak();
                }
                goto LABEL_191;
              }
            }
          }
        }
      }
    }
    memset_0(v32, 0, sizeof(cachedSnapshotWorldState_t));
    return 0;
  }
  if ( expectedToSucceed )
  {
    LODWORD(clientBits) = archiveToUse->nextArchivedSnapshotBuffer;
    LODWORD(fmt) = v10->start;
    Com_Printf(15, "[Snapshot] Failed to get world state archived snapshot for archived frame %i (offset:%i) - frame->start is too old - %i < %i - %i\n", (unsigned int)archivedFrame, (unsigned int)archiveToUse->archiveTimeFrameOffset, fmt, clientBits, archiveToUse->archivedSnapshotBufferSize);
  }
  return 0;
}

/*
==============
SV_SnapshotMP_GetEarliestArchiveMaxVariance
==============
*/
__int64 SV_SnapshotMP_GetEarliestArchiveMaxVariance(const bool archiveUsePOTG)
{
  int archivedFrameDuration; 
  int v3; 
  int v6; 

  archivedFrameDuration = g_svSnapshotData.archivePOTG.archivedFrameDuration;
  if ( !archiveUsePOTG )
    archivedFrameDuration = g_svSnapshotData.archive.archivedFrameDuration;
  if ( !archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2607, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameDuration )", (const char *)&queryFormat, "archiveToUse->archivedFrameDuration") )
    __debugbreak();
  v3 = g_svSnapshotData.archivePOTG.archivedFrameDuration;
  if ( !archiveUsePOTG )
    v3 = g_svSnapshotData.archive.archivedFrameDuration;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v6 = v3 * (int)*(float *)&_XMM4;
  if ( v6 % v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2614, ASSERT_TYPE_ASSERT, "(targetTimeMs % archiveToUse->archivedFrameDuration == 0)", "%s\n\t%d != 0", "targetTimeMs % archiveToUse->archivedFrameDuration == 0", v3 * (int)*(float *)&_XMM4 % v3) )
    __debugbreak();
  return (unsigned int)v6;
}

/*
==============
SV_SnapshotMP_GetEarliestArchivedClientInfoTime
==============
*/
int SV_SnapshotMP_GetEarliestArchivedClientInfoTime(const bool archiveUsePOTG)
{
  int result; 
  bool v3; 
  int v4; 
  serverArchive_t *p_archivePOTG; 
  int v6; 
  __int64 v7; 
  int v8; 

  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2563, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  result = SV_SnapshotMP_ArchiveEnabled();
  if ( result )
  {
    v3 = !archiveUsePOTG;
    v4 = 0;
    p_archivePOTG = &g_svSnapshotData.archivePOTG;
    if ( v3 )
      p_archivePOTG = &g_svSnapshotData.archive;
    if ( p_archivePOTG->nextArchivedSnapshotFrames - p_archivePOTG->archivedFrameCount >= 0 )
      v4 = p_archivePOTG->nextArchivedSnapshotFrames - p_archivePOTG->archivedFrameCount;
    for ( ; v4 < p_archivePOTG->nextArchivedSnapshotFrames; ++v4 )
    {
      if ( SV_SnapshotMP_HasCachedSnapshotInternal(v4, p_archivePOTG, 0) )
        break;
    }
    if ( !p_archivePOTG->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2587, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameDuration )", (const char *)&queryFormat, "archiveToUse->archivedFrameDuration") )
      __debugbreak();
    v6 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - v4);
    if ( v6 < 0 )
    {
      v8 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - p_archivePOTG->archiveTimeFrameOffset - v4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2590, ASSERT_TYPE_ASSERT, "( ( archiveOldestTime >= 0 ) )", "%s\n\t( archiveOldestTime ) = %i", "( archiveOldestTime >= 0 )", v8) )
        __debugbreak();
    }
    if ( v6 % p_archivePOTG->archivedFrameDuration )
    {
      LODWORD(v7) = v6 % p_archivePOTG->archivedFrameDuration;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2593, ASSERT_TYPE_ASSERT, "(archiveOldestTime % archiveToUse->archivedFrameDuration == 0)", "%s\n\t%d != 0", "archiveOldestTime % archiveToUse->archivedFrameDuration == 0", v7) )
        __debugbreak();
    }
    return v6;
  }
  return result;
}

/*
==============
SV_SnapshotMP_GetRequestedArchiveFrame
==============
*/
__int64 SV_SnapshotMP_GetRequestedArchiveFrame(const serverArchive_t *archiveToUse, int *pArchiveTimeDelta)
{
  int v4; 
  int archivedFrameDuration; 
  int archiveTimeFrameOffset; 
  int nextArchivedSnapshotFrames; 
  int v8; 
  int v9; 

  if ( !pArchiveTimeDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2225, ASSERT_TYPE_ASSERT, "( pArchiveTimeDelta )", (const char *)&queryFormat, "pArchiveTimeDelta") )
    __debugbreak();
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2226, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( archiveToUse->archivedFrameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2227, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameDuration > 0 )", (const char *)&queryFormat, "archiveToUse->archivedFrameDuration > 0") )
    __debugbreak();
  if ( *pArchiveTimeDelta % archiveToUse->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2231, ASSERT_TYPE_ASSERT, "( *pArchiveTimeDelta % archiveToUse->archivedFrameDuration == 0 )", (const char *)&queryFormat, "*pArchiveTimeDelta % archiveToUse->archivedFrameDuration == 0") )
    __debugbreak();
  v4 = *pArchiveTimeDelta;
  archivedFrameDuration = archiveToUse->archivedFrameDuration;
  archiveTimeFrameOffset = archiveToUse->archiveTimeFrameOffset;
  nextArchivedSnapshotFrames = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
  v8 = archiveToUse->nextArchivedSnapshotFrames - archiveToUse->archivedFrameCount;
  v9 = g_svSnapshotData.archive.nextArchivedSnapshotFrames - *pArchiveTimeDelta / archivedFrameDuration - archiveTimeFrameOffset;
  if ( v9 < v8 )
  {
    v9 = archiveToUse->nextArchivedSnapshotFrames - archiveToUse->archivedFrameCount;
    v4 = archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - archiveTimeFrameOffset - v8);
    *pArchiveTimeDelta = v4;
    nextArchivedSnapshotFrames = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
  }
  if ( v9 < 0 )
  {
    v9 = 0;
    v4 = archiveToUse->archivedFrameDuration * (nextArchivedSnapshotFrames - archiveToUse->archiveTimeFrameOffset);
    *pArchiveTimeDelta = v4;
  }
  if ( v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2247, ASSERT_TYPE_ASSERT, "( ( *pArchiveTimeDelta >= 0 ) )", "%s\n\t( *pArchiveTimeDelta ) = %i", "( *pArchiveTimeDelta >= 0 )", v4) )
    __debugbreak();
  return (unsigned int)v9;
}

/*
==============
SV_SnapshotMP_HasCachedSnapshotInternal
==============
*/
char SV_SnapshotMP_HasCachedSnapshotInternal(int archivedFrame, const serverArchive_t *archiveToUse, int callDepth)
{
  __int64 v3; 
  archivedSnapshot_t *v6; 
  int v7; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v9; 
  int v10; 
  cachedSnapshotWorldState_t *v11; 
  int nextCachedSnapshotEntities; 
  int archivedSnapshotBufferSize; 
  int v14; 
  int worldStateSize; 
  int v16; 
  unsigned __int8 *v17; 
  int v18; 
  int archivedFrameCount; 
  __int64 v21; 
  __int64 v22; 
  msg_t buf; 

  v3 = callDepth;
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( !Migration_GetBuffer() )
      goto LABEL_8;
  }
  else if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 195, ASSERT_TYPE_ASSERT, "(SV_SnapshotMP_ArchiveEnabled())", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
LABEL_8:
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 196, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( !archiveToUse->archivedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 197, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 198, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBuffer )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBuffer") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 199, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBufferSize )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBufferSize") )
    __debugbreak();
  v6 = &archiveToUse->archivedSnapshotFrames[archivedFrame % archiveToUse->archivedFrameCount];
  if ( SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v6->start) )
  {
    v7 = 0;
    if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 512 >= 0 )
      v7 = g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 512;
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v9 = g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 1;
    if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames - 1 >= v7 )
    {
      v10 = archivedFrame + archiveToUse->archiveTimeFrameOffset;
      while ( 1 )
      {
        v11 = &g_svSnapshotData.cachedSnapshotWorldStateFrames[v9 % 512];
        if ( v11->archivedFrame == v10 )
          break;
        if ( --v9 < v7 )
          goto LABEL_49;
      }
      if ( v11->first_entity < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 220, ASSERT_TYPE_ASSERT, "( ( cachedFrame->first_entity >= 0 ) )", "%s\n\t( cachedFrame->first_entity ) = %i", "( cachedFrame->first_entity >= 0 )", v11->first_entity) )
        __debugbreak();
      if ( v11->first_entityClientMask < 0 )
      {
        LODWORD(v22) = v11->first_entityClientMask;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 221, ASSERT_TYPE_ASSERT, "( ( cachedFrame->first_entityClientMask >= 0 ) )", "%s\n\t( cachedFrame->first_entityClientMask ) = %i", "( cachedFrame->first_entityClientMask >= 0 )", v22) )
          __debugbreak();
      }
      if ( v11->first_entity != v11->first_entityClientMask )
      {
        LODWORD(v22) = v11->first_entityClientMask;
        LODWORD(v21) = v11->first_entity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 224, ASSERT_TYPE_ASSERT, "( cachedFrame->first_entity ) == ( cachedFrame->first_entityClientMask )", "cachedFrame->first_entity == cachedFrame->first_entityClientMask\n\t%i, %i", v21, v22) )
          __debugbreak();
      }
      nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
      if ( g_svSnapshotData.nextCachedSnapshotEntities != g_svSnapshotData.nextCachedSnapshotEntityClientMask )
      {
        LODWORD(v22) = g_svSnapshotData.nextCachedSnapshotEntityClientMask;
        LODWORD(v21) = g_svSnapshotData.nextCachedSnapshotEntities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 225, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextCachedSnapshotEntities ) == ( g_svSnapshotData.nextCachedSnapshotEntityClientMask )", "g_svSnapshotData.nextCachedSnapshotEntities == g_svSnapshotData.nextCachedSnapshotEntityClientMask\n\t%i, %i", v21, v22) )
          __debugbreak();
        nextCachedSnapshotEntities = g_svSnapshotData.nextCachedSnapshotEntities;
      }
      if ( v11->first_entity >= nextCachedSnapshotEntities + 1200 * ((int)v3 - 9) && v11->first_clientState >= g_svSnapshotData.nextCachedSnapshotClientStates + g_svSnapshotData.numCachedSnapshotClientStates * ((int)v3 - 1) && v11->first_agent >= g_svSnapshotData.nextCachedSnapshotAgents + (int)v3 * PersistentGlobalsMP->agentCount - g_svSnapshotData.numCachedSnapshotAgents && v3 + g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex <= v11->scriptableInstFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedInstCount && v3 + g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex <= v11->scriptablePartFirstIndex + g_svSnapshotData.scriptableSnapshots.cachedPartCount && v11->umbraGateStatesIndex >= (int)v3 + g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex - g_svSnapshotData.numCachedSnapshotUmbraGateStates && (!g_svSnapshotData.numCachedSnapshotEntityLoD || v11->first_entityLoD >= g_svSnapshotData.nextCachedSnapshotEntityLoD + g_svSnapshotData.numCachedSnapshotEntityLoD * ((int)v3 - 1)) )
        return 1;
    }
LABEL_49:
    archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
    v14 = (v6->start + v6->worldStateStart) % archivedSnapshotBufferSize;
    worldStateSize = v6->worldStateSize;
    v16 = archivedSnapshotBufferSize - v14;
    v17 = &archiveToUse->archivedSnapshotBuffer[v14];
    if ( v6->size > v16 )
      MSG_InitReadOnlySplit(&buf, v17, v16, archiveToUse->archivedSnapshotBuffer, worldStateSize - v16);
    else
      MSG_InitReadOnly(&buf, v17, worldStateSize);
    MSG_BeginReading(&buf);
    if ( MSG_ReadBit(&buf) )
      return 1;
    v18 = MSG_ReadLong(&buf) - archiveToUse->archiveTimeFrameOffset;
    if ( v18 >= 0 )
    {
      archivedFrameCount = archiveToUse->archivedFrameCount;
      if ( v18 >= archiveToUse->nextArchivedSnapshotFrames - archivedFrameCount && SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, archiveToUse->archivedSnapshotFrames[v18 % archivedFrameCount].start) && SV_SnapshotMP_HasCachedSnapshotInternal(v18, archiveToUse, v3 + 1) )
        return 1;
    }
  }
  return 0;
}

/*
==============
SV_SnapshotMP_IsValidArchiveTime
==============
*/
bool SV_SnapshotMP_IsValidArchiveTime(const int currentTime, int *inOutServerTime, bool archiveUsePOTG)
{
  serverArchive_t *p_archivePOTG; 
  int RequestedArchiveFrame; 
  int v8; 
  bool result; 
  int pArchiveTimeDelta; 

  if ( !inOutServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2520, ASSERT_TYPE_ASSERT, "( inOutServerTime )", (const char *)&queryFormat, "inOutServerTime") )
    __debugbreak();
  pArchiveTimeDelta = currentTime - *inOutServerTime;
  if ( pArchiveTimeDelta <= 0 || !SV_SnapshotMP_ArchiveEnabled() )
    goto LABEL_12;
  p_archivePOTG = &g_svSnapshotData.archivePOTG;
  if ( !archiveUsePOTG )
    p_archivePOTG = &g_svSnapshotData.archive;
  RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(p_archivePOTG, &pArchiveTimeDelta);
  if ( RequestedArchiveFrame < p_archivePOTG->nextArchivedSnapshotFrames )
  {
    v8 = pArchiveTimeDelta;
    while ( !SV_SnapshotMP_IsValidArchiveTimeInternal(RequestedArchiveFrame, p_archivePOTG) )
    {
      ++RequestedArchiveFrame;
      v8 = p_archivePOTG->archivedFrameDuration * (g_svSnapshotData.archive.nextArchivedSnapshotFrames - RequestedArchiveFrame);
      if ( RequestedArchiveFrame >= p_archivePOTG->nextArchivedSnapshotFrames )
        goto LABEL_12;
    }
    if ( v8 % p_archivePOTG->archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2544, ASSERT_TYPE_ASSERT, "( archiveTime % archiveToUse->archivedFrameDuration == 0 )", (const char *)&queryFormat, "archiveTime % archiveToUse->archivedFrameDuration == 0") )
      __debugbreak();
    currentTime -= v8;
    result = 1;
  }
  else
  {
LABEL_12:
    result = 0;
  }
  *inOutServerTime = currentTime;
  return result;
}

/*
==============
SV_SnapshotMP_IsValidArchiveTimeInternal
==============
*/
char SV_SnapshotMP_IsValidArchiveTimeInternal(const int archivedFrame, const serverArchive_t *archiveToUse)
{
  archivedSnapshot_t *v4; 
  int archivedSnapshotBufferSize; 
  int v6; 
  int worldStateSize; 
  int v8; 
  unsigned __int8 *v9; 
  int v10; 
  int archivedFrameCount; 
  msg_t buf; 

  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize )
  {
    if ( !Migration_GetBuffer() )
      goto LABEL_8;
  }
  else if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 63, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
  {
    __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2463, ASSERT_TYPE_ASSERT, "(SV_SnapshotMP_ArchiveEnabled())", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
LABEL_8:
  if ( !archiveToUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2464, ASSERT_TYPE_ASSERT, "( archiveToUse )", (const char *)&queryFormat, "archiveToUse") )
    __debugbreak();
  if ( !archiveToUse->archivedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2465, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedFrameCount )", (const char *)&queryFormat, "archiveToUse->archivedFrameCount") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2466, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBuffer )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBuffer") )
    __debugbreak();
  if ( !archiveToUse->archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_caching.cpp", 2467, ASSERT_TYPE_ASSERT, "( archiveToUse->archivedSnapshotBufferSize )", (const char *)&queryFormat, "archiveToUse->archivedSnapshotBufferSize") )
    __debugbreak();
  v4 = &archiveToUse->archivedSnapshotFrames[archivedFrame % archiveToUse->archivedFrameCount];
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, v4->start) )
    return 0;
  archivedSnapshotBufferSize = archiveToUse->archivedSnapshotBufferSize;
  v6 = (v4->start + v4->worldStateStart) % archivedSnapshotBufferSize;
  worldStateSize = v4->worldStateSize;
  v8 = archivedSnapshotBufferSize - v6;
  v9 = &archiveToUse->archivedSnapshotBuffer[v6];
  if ( v4->size > v8 )
    MSG_InitReadOnlySplit(&buf, v9, v8, archiveToUse->archivedSnapshotBuffer, worldStateSize - v8);
  else
    MSG_InitReadOnly(&buf, v9, worldStateSize);
  MSG_BeginReading(&buf);
  if ( MSG_ReadBit(&buf) )
    return 1;
  v10 = MSG_ReadLong(&buf) - archiveToUse->archiveTimeFrameOffset;
  if ( v10 >= 0 && (archivedFrameCount = archiveToUse->archivedFrameCount, v10 >= archiveToUse->nextArchivedSnapshotFrames - archivedFrameCount) && SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(archiveToUse, archiveToUse->archivedSnapshotFrames[v10 % archivedFrameCount].start) )
    return 1;
  else
    return 0;
}

