/*
==============
G_PlayerSpawns_Save
==============
*/

void __fastcall G_PlayerSpawns_Save(MemoryFile *memFile)
{
  ?G_PlayerSpawns_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PlayerSpawnPoints_SetEnabledByClassname
==============
*/

void __fastcall G_PlayerSpawnPoints_SetEnabledByClassname(scr_string_t classname, team_t team, bool enabled)
{
  ?G_PlayerSpawnPoints_SetEnabledByClassname@@YAXW4scr_string_t@@W4team_t@@_N@Z(classname, team, enabled);
}

/*
==============
G_PlayerSpawnPoints_DumpSelectionResults
==============
*/

void __fastcall G_PlayerSpawnPoints_DumpSelectionResults(spawnSelectionSpec *selectionSpec, spawnSelectionResults *results)
{
  ?G_PlayerSpawnPoints_DumpSelectionResults@@YAXPEAUspawnSelectionSpec@@PEAUspawnSelectionResults@@@Z(selectionSpec, results);
}

/*
==============
G_PlayerSpawnPoints_GetSpawnInfo
==============
*/

const SpawnPointInfo *__fastcall G_PlayerSpawnPoints_GetSpawnInfo(int index)
{
  return ?G_PlayerSpawnPoints_GetSpawnInfo@@YAPEBUSpawnPointInfo@@H@Z(index);
}

/*
==============
G_PlayerSpawnPoints_SetEnabledByIndex
==============
*/

void __fastcall G_PlayerSpawnPoints_SetEnabledByIndex(int index, team_t team, bool enabled)
{
  ?G_PlayerSpawnPoints_SetEnabledByIndex@@YAXHW4team_t@@_N@Z(index, team, enabled);
}

/*
==============
G_PlayerSpawnPoints_InitFactorWeights
==============
*/

void G_PlayerSpawnPoints_InitFactorWeights(void)
{
  ?G_PlayerSpawnPoints_InitFactorWeights@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_EntityIsViewerWhileInvisible
==============
*/

bool __fastcall G_PlayerSpawnPoints_EntityIsViewerWhileInvisible(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_EntityIsViewerWhileInvisible@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_SetEnabledAll
==============
*/

void __fastcall G_PlayerSpawnPoints_SetEnabledAll(team_t team, bool enabled)
{
  ?G_PlayerSpawnPoints_SetEnabledAll@@YAXW4team_t@@_N@Z(team, enabled);
}

/*
==============
G_PlayerSpawnPoints_AddViewerEntity
==============
*/

bool __fastcall G_PlayerSpawnPoints_AddViewerEntity(const gentity_s *const ent, team_t team)
{
  return ?G_PlayerSpawnPoints_AddViewerEntity@@YA_NQEBUgentity_s@@W4team_t@@@Z(ent, team);
}

/*
==============
G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection
==============
*/

void __fastcall G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection(const gentity_s *const entCharacter, const bool ignore)
{
  ?G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection@@YAXQEBUgentity_s@@_N@Z(entCharacter, ignore);
}

/*
==============
G_PlayerSpawnPoints_AreTeamsEnabled
==============
*/

bool __fastcall G_PlayerSpawnPoints_AreTeamsEnabled()
{
  return ?G_PlayerSpawnPoints_AreTeamsEnabled@@YA_NXZ();
}

/*
==============
G_PlayerSpawnPoints_SetUsingTeams
==============
*/

void __fastcall G_PlayerSpawnPoints_SetUsingTeams(bool useTeams)
{
  ?G_PlayerSpawnPoints_SetUsingTeams@@YAX_N@Z(useTeams);
}

/*
==============
G_PlayerSpawnPoints_GetLastTeamSpawnIndex
==============
*/

int __fastcall G_PlayerSpawnPoints_GetLastTeamSpawnIndex(team_t team)
{
  return ?G_PlayerSpawnPoints_GetLastTeamSpawnIndex@@YAHW4team_t@@@Z(team);
}

/*
==============
G_PlayerSpawnPoints_EntityIsSpawnViewer
==============
*/

bool __fastcall G_PlayerSpawnPoints_EntityIsSpawnViewer(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_EntityIsSpawnViewer@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_GetRelativeSpawnTeam
==============
*/

int __fastcall G_PlayerSpawnPoints_GetRelativeSpawnTeam(const gentity_s *const ent, team_t spawningTeam)
{
  return ?G_PlayerSpawnPoints_GetRelativeSpawnTeam@@YAHQEBUgentity_s@@W4team_t@@@Z(ent, spawningTeam);
}

/*
==============
G_PlayerSpawnPoints_DebugDrawFrontline
==============
*/

void G_PlayerSpawnPoints_DebugDrawFrontline(void)
{
  ?G_PlayerSpawnPoints_DebugDrawFrontline@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetSpawnPointCount
==============
*/

int __fastcall G_PlayerSpawnPoints_GetSpawnPointCount()
{
  return ?G_PlayerSpawnPoints_GetSpawnPointCount@@YAHXZ();
}

/*
==============
G_PlayerSpawnPoints_DissassociateViewerEntity
==============
*/

void __fastcall G_PlayerSpawnPoints_DissassociateViewerEntity(const gentity_s *const ent)
{
  ?G_PlayerSpawnPoints_DissassociateViewerEntity@@YAXQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_FindBestSpawnPoint
==============
*/

void __fastcall G_PlayerSpawnPoints_FindBestSpawnPoint(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults)
{
  ?G_PlayerSpawnPoints_FindBestSpawnPoint@@YAXPEAUspawnSelectionSpec@@PEAUspawnSelectionResults@@@Z(selectionSpec, selectionResults);
}

/*
==============
G_PlayerSpawnPoints_LogDeathEvent
==============
*/

void __fastcall G_PlayerSpawnPoints_LogDeathEvent(const gentity_s *const entPlayer, const gentity_s *const entAttacker)
{
  ?G_PlayerSpawnPoints_LogDeathEvent@@YAXQEBUgentity_s@@0@Z(entPlayer, entAttacker);
}

/*
==============
G_PlayerSpawnPoints_CharacterIsIgnoredDuringSpawnSelection
==============
*/

bool __fastcall G_PlayerSpawnPoints_CharacterIsIgnoredDuringSpawnSelection(const gentity_s *const entCharacter)
{
  return ?G_PlayerSpawnPoints_CharacterIsIgnoredDuringSpawnSelection@@YA_NQEBUgentity_s@@@Z(entCharacter);
}

/*
==============
G_PlayerSpawnPonits_EnableGroundWar
==============
*/

void G_PlayerSpawnPonits_EnableGroundWar(void)
{
  ?G_PlayerSpawnPonits_EnableGroundWar@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetLastAttackerEntnum
==============
*/

int __fastcall G_PlayerSpawnPoints_GetLastAttackerEntnum(const gentity_s *const playerEnt)
{
  return ?G_PlayerSpawnPoints_GetLastAttackerEntnum@@YAHQEBUgentity_s@@@Z(playerEnt);
}

/*
==============
G_PlayerSpawnPoints_GetNearbyNodeIndexForIndex
==============
*/

int __fastcall G_PlayerSpawnPoints_GetNearbyNodeIndexForIndex(gentity_s *ent, int index)
{
  return ?G_PlayerSpawnPoints_GetNearbyNodeIndexForIndex@@YAHPEAUgentity_s@@H@Z(ent, index);
}

/*
==============
G_PlayerSpawnPoints_InitSpawnViewers
==============
*/

void G_PlayerSpawnPoints_InitSpawnViewers(void)
{
  ?G_PlayerSpawnPoints_InitSpawnViewers@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetMapLanesData
==============
*/

const MapLanesData *__fastcall G_PlayerSpawnPoints_GetMapLanesData()
{
  return ?G_PlayerSpawnPoints_GetMapLanesData@@YAPEBUMapLanesData@@XZ();
}

/*
==============
G_PlayerSpawnPoints_GetIsGroundWar
==============
*/

bool __fastcall G_PlayerSpawnPoints_GetIsGroundWar()
{
  return ?G_PlayerSpawnPoints_GetIsGroundWar@@YA_NXZ();
}

/*
==============
G_PlayerSpawns_CreateInfluencePoint
==============
*/

int __fastcall G_PlayerSpawns_CreateInfluencePoint(vec3_t *pos, float radius, float height, team_t team, __int16 flags, gentity_s *ownerEnt)
{
  return ?G_PlayerSpawns_CreateInfluencePoint@@YAHAEATvec3_t@@MMW4team_t@@FPEAUgentity_s@@@Z(pos, radius, height, team, flags, ownerEnt);
}

/*
==============
G_PlayerSpawnPoints_GetUsingTeams
==============
*/

bool __fastcall G_PlayerSpawnPoints_GetUsingTeams()
{
  return ?G_PlayerSpawnPoints_GetUsingTeams@@YA_NXZ();
}

/*
==============
G_PlayerSpawnPoints_GetClusterData
==============
*/

const ClusterData *__fastcall G_PlayerSpawnPoints_GetClusterData()
{
  return ?G_PlayerSpawnPoints_GetClusterData@@YAPEBUClusterData@@XZ();
}

/*
==============
G_PlayerSpawnPonits_EnableFrontline
==============
*/

void G_PlayerSpawnPonits_EnableFrontline(void)
{
  ?G_PlayerSpawnPonits_EnableFrontline@@YAXXZ();
}

/*
==============
G_PlayerSpawns_IsInfluencePointInUse
==============
*/

bool __fastcall G_PlayerSpawns_IsInfluencePointInUse(int index)
{
  return ?G_PlayerSpawns_IsInfluencePointInUse@@YA_NH@Z(index);
}

/*
==============
G_PlayerSpawnPoints_GetLastAttackerLoc
==============
*/

void __fastcall G_PlayerSpawnPoints_GetLastAttackerLoc(const gentity_s *const playerEnt, bool useCurrentLoc, vec3_t *outLoc)
{
  ?G_PlayerSpawnPoints_GetLastAttackerLoc@@YAXQEBUgentity_s@@_NAEATvec3_t@@@Z(playerEnt, useCurrentLoc, outLoc);
}

/*
==============
G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity
==============
*/

void __fastcall G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(int index, gentity_s *parent)
{
  ?G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity@@YAXHPEAUgentity_s@@@Z(index, parent);
}

/*
==============
G_PlayerSpawnPoints_SetFactorWeight
==============
*/

void __fastcall G_PlayerSpawnPoints_SetFactorWeight(SpawnFactors factor, float weight)
{
  ?G_PlayerSpawnPoints_SetFactorWeight@@YAXW4SpawnFactors@@M@Z(factor, weight);
}

/*
==============
G_PlayerSpawnPoints_GetLastDeathTime
==============
*/

int __fastcall G_PlayerSpawnPoints_GetLastDeathTime(const gentity_s *const playerEnt)
{
  return ?G_PlayerSpawnPoints_GetLastDeathTime@@YAHQEBUgentity_s@@@Z(playerEnt);
}

/*
==============
G_PlayerSpawnPoints_GetInfluencePointData
==============
*/

const SpawnInfluencePointCache *__fastcall G_PlayerSpawnPoints_GetInfluencePointData()
{
  return ?G_PlayerSpawnPoints_GetInfluencePointData@@YAPEBUSpawnInfluencePointCache@@XZ();
}

/*
==============
G_PlayerSpawnPoints_UpdateViewerCacheForNonCharacter
==============
*/

void __fastcall G_PlayerSpawnPoints_UpdateViewerCacheForNonCharacter(SpawnViewerCacheNonCharacterEntry *nonCharacterEntry)
{
  ?G_PlayerSpawnPoints_UpdateViewerCacheForNonCharacter@@YAXPEAUSpawnViewerCacheNonCharacterEntry@@@Z(nonCharacterEntry);
}

/*
==============
G_PlayerSpawnPoints_RemoveViewerEntity
==============
*/

bool __fastcall G_PlayerSpawnPoints_RemoveViewerEntity(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_RemoveViewerEntity@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_FreeMemory
==============
*/

void G_PlayerSpawnPoints_FreeMemory(void)
{
  ?G_PlayerSpawnPoints_FreeMemory@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetGroundWarSpawnVariables
==============
*/

void __fastcall G_PlayerSpawnPoints_GetGroundWarSpawnVariables(float *nearbyEnemyBadDist, float *nearbyEnemyOkDist)
{
  ?G_PlayerSpawnPoints_GetGroundWarSpawnVariables@@YAXPEAM0@Z(nearbyEnemyBadDist, nearbyEnemyOkDist);
}

/*
==============
G_PlayerSpawns_IsInfluencePointLinkedToEntity
==============
*/

bool __fastcall G_PlayerSpawns_IsInfluencePointLinkedToEntity(int index)
{
  return ?G_PlayerSpawns_IsInfluencePointLinkedToEntity@@YA_NH@Z(index);
}

/*
==============
G_PlayerSpawnPoints_InitSpawnInfluencePoints
==============
*/

void G_PlayerSpawnPoints_InitSpawnInfluencePoints(void)
{
  ?G_PlayerSpawnPoints_InitSpawnInfluencePoints@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetNearbyNodeForIndex
==============
*/

pathnode_t *__fastcall G_PlayerSpawnPoints_GetNearbyNodeForIndex(gentity_s *ent, int index)
{
  return ?G_PlayerSpawnPoints_GetNearbyNodeForIndex@@YAPEAUpathnode_t@@PEAUgentity_s@@H@Z(ent, index);
}

/*
==============
G_PlayerSpawnPoints_IsValidViewerEntity
==============
*/

bool __fastcall G_PlayerSpawnPoints_IsValidViewerEntity(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_IsValidViewerEntity@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawns_EntityHasLinkedInfluencePoint
==============
*/

bool __fastcall G_PlayerSpawns_EntityHasLinkedInfluencePoint(gentity_s *linkToEnt, int *outInfluencePtIndex)
{
  return ?G_PlayerSpawns_EntityHasLinkedInfluencePoint@@YA_NPEAUgentity_s@@AEAH@Z(linkToEnt, outInfluencePtIndex);
}

/*
==============
G_PlayerSpawnPoints_GetFactorWeight
==============
*/

double __fastcall G_PlayerSpawnPoints_GetFactorWeight(SpawnFactors factor)
{
  double result; 

  *(float *)&result = ?G_PlayerSpawnPoints_GetFactorWeight@@YAMW4SpawnFactors@@@Z(factor);
  return result;
}

/*
==============
G_PlayerSpawns_Load
==============
*/

void __fastcall G_PlayerSpawns_Load(MemoryFile *memFile)
{
  ?G_PlayerSpawns_Load@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PlayerSpawnPoints_FinalizeLastSpawnUsage
==============
*/

void __fastcall G_PlayerSpawnPoints_FinalizeLastSpawnUsage(int spawnIdx, int usedByEntNum, team_t team)
{
  ?G_PlayerSpawnPoints_FinalizeLastSpawnUsage@@YAXHHW4team_t@@@Z(spawnIdx, usedByEntNum, team);
}

/*
==============
G_PlayerSpawnPoints_PositionWouldTelefrag
==============
*/

bool __fastcall G_PlayerSpawnPoints_PositionWouldTelefrag(const vec3_t *position)
{
  return ?G_PlayerSpawnPoints_PositionWouldTelefrag@@YA_NTvec3_t@@@Z(position);
}

/*
==============
G_PlayerSpawnPoints_UpdateViewerCacheForCharacter
==============
*/

void __fastcall G_PlayerSpawnPoints_UpdateViewerCacheForCharacter(gentity_s *ent)
{
  ?G_PlayerSpawnPoints_UpdateViewerCacheForCharacter@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_EnableSingleOriginSpawn
==============
*/

void __fastcall G_PlayerSpawnPoints_EnableSingleOriginSpawn(team_t team, const vec3_t *origin)
{
  ?G_PlayerSpawnPoints_EnableSingleOriginSpawn@@YAXW4team_t@@Tvec3_t@@@Z(team, origin);
}

/*
==============
G_PlayerSpawnPoints_GetLastDeathLoc
==============
*/

void __fastcall G_PlayerSpawnPoints_GetLastDeathLoc(const gentity_s *const playerEnt, vec3_t *outLoc)
{
  ?G_PlayerSpawnPoints_GetLastDeathLoc@@YAXQEBUgentity_s@@AEATvec3_t@@@Z(playerEnt, outLoc);
}

/*
==============
G_PlayerSpawnPoints_DisableSingleOriginSpawn
==============
*/

void G_PlayerSpawnPoints_DisableSingleOriginSpawn(void)
{
  ?G_PlayerSpawnPoints_DisableSingleOriginSpawn@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetSpawnFactorName
==============
*/

const char *__fastcall G_PlayerSpawnPoints_GetSpawnFactorName(SpawnFactors factor)
{
  return ?G_PlayerSpawnPoints_GetSpawnFactorName@@YAPEBDW4SpawnFactors@@@Z(factor);
}

/*
==============
G_PlayerSpawnPoints_FailedCritReason_GetString
==============
*/

const char *__fastcall G_PlayerSpawnPoints_FailedCritReason_GetString(const int index)
{
  return ?G_PlayerSpawnPoints_FailedCritReason_GetString@@YAPEBDH@Z(index);
}

/*
==============
G_PlayerSpawnPoints_GetInfluencePointPosition
==============
*/

void __fastcall G_PlayerSpawnPoints_GetInfluencePointPosition(int index, vec3_t *outPos)
{
  ?G_PlayerSpawnPoints_GetInfluencePointPosition@@YAXHAEATvec3_t@@@Z(index, outPos);
}

/*
==============
G_PlayerSpawnPoints_GetFactorForName
==============
*/

SpawnFactors __fastcall G_PlayerSpawnPoints_GetFactorForName(const char *name)
{
  return ?G_PlayerSpawnPoints_GetFactorForName@@YA?AW4SpawnFactors@@PEBD@Z(name);
}

/*
==============
G_PlayerSpawnPoints_IsSpectatorEnt
==============
*/

bool __fastcall G_PlayerSpawnPoints_IsSpectatorEnt(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_IsSpectatorEnt@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_AllocateMemory
==============
*/

void __fastcall G_PlayerSpawnPoints_AllocateMemory(HunkUser *hunkUser)
{
  ?G_PlayerSpawnPoints_AllocateMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_PlayerSpawnPoints_EnableFrontlineAnchor
==============
*/

void __fastcall G_PlayerSpawnPoints_EnableFrontlineAnchor(const vec3_t *direction, const vec3_t *pos)
{
  ?G_PlayerSpawnPoints_EnableFrontlineAnchor@@YAXAEBTvec3_t@@0@Z(direction, pos);
}

/*
==============
G_PlayerSpawns_LinkInfluencePointToEntity
==============
*/

bool __fastcall G_PlayerSpawns_LinkInfluencePointToEntity(int index, gentity_s *linkToEnt)
{
  return ?G_PlayerSpawns_LinkInfluencePointToEntity@@YA_NHPEAUgentity_s@@@Z(index, linkToEnt);
}

/*
==============
G_PlayerSpawnPoints_DebugDraw
==============
*/

void G_PlayerSpawnPoints_DebugDraw(void)
{
  ?G_PlayerSpawnPoints_DebugDraw@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetViewerNumNearbyNodes
==============
*/

int __fastcall G_PlayerSpawnPoints_GetViewerNumNearbyNodes(gentity_s *ent)
{
  return ?G_PlayerSpawnPoints_GetViewerNumNearbyNodes@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPoints_EntityIsViewerWhileSpectator
==============
*/

bool __fastcall G_PlayerSpawnPoints_EntityIsViewerWhileSpectator(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_EntityIsViewerWhileSpectator@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawns_ClearInfluencePoint
==============
*/

bool __fastcall G_PlayerSpawns_ClearInfluencePoint(int index)
{
  return ?G_PlayerSpawns_ClearInfluencePoint@@YA_NH@Z(index);
}

/*
==============
G_PlayerSpawnPoints_RegisterScriptSpawnpoint
==============
*/

int __fastcall G_PlayerSpawnPoints_RegisterScriptSpawnpoint(const scr_string_t classname, const vec3_t *origin, const vec3_t *angles, const scr_string_t target, const scr_string_t script_noteworthy)
{
  return ?G_PlayerSpawnPoints_RegisterScriptSpawnpoint@@YAHW4scr_string_t@@Tvec3_t@@100@Z(classname, origin, angles, target, script_noteworthy);
}

/*
==============
G_PlayerSpawnPoints_Init
==============
*/

void G_PlayerSpawnPoints_Init(void)
{
  ?G_PlayerSpawnPoints_Init@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_GetCount
==============
*/

int __fastcall G_PlayerSpawnPoints_GetCount()
{
  return ?G_PlayerSpawnPoints_GetCount@@YAHXZ();
}

/*
==============
G_PlayerSpawnPoints_EntityIsAlive
==============
*/

bool __fastcall G_PlayerSpawnPoints_EntityIsAlive(const gentity_s *const ent)
{
  return ?G_PlayerSpawnPoints_EntityIsAlive@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerSpawnPonits_SetGroundWarSpawnVariables
==============
*/

void __fastcall G_PlayerSpawnPonits_SetGroundWarSpawnVariables(const float nearbyEnemyBadDist, const float nearbyEnemyOkDist)
{
  ?G_PlayerSpawnPonits_SetGroundWarSpawnVariables@@YAXMM@Z(nearbyEnemyBadDist, nearbyEnemyOkDist);
}

/*
==============
G_PlayerSpawnPoints_InitSpawnGlobals
==============
*/

void G_PlayerSpawnPoints_InitSpawnGlobals(void)
{
  ?G_PlayerSpawnPoints_InitSpawnGlobals@@YAXXZ();
}

/*
==============
G_PlayerSpawnPoints_FindBestSpawnBucket
==============
*/

void __fastcall G_PlayerSpawnPoints_FindBestSpawnBucket(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults)
{
  ?G_PlayerSpawnPoints_FindBestSpawnBucket@@YAXPEAUspawnSelectionSpec@@PEAUspawnSelectionResults@@@Z(selectionSpec, selectionResults);
}

/*
==============
G_PlayerSpawns_SetInfluencePointPosition
==============
*/

bool __fastcall G_PlayerSpawns_SetInfluencePointPosition(int index, vec3_t *pos)
{
  return ?G_PlayerSpawns_SetInfluencePointPosition@@YA_NHTvec3_t@@@Z(index, pos);
}

/*
==============
G_PlayerSpawnPoints_AddViewerEntity
==============
*/
char G_PlayerSpawnPoints_AddViewerEntity(const gentity_s *const ent, team_t team)
{
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 

  nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
  while ( nonCharacterEntries->entNum != 2047 )
  {
    if ( (__int64)++nonCharacterEntries >= (__int64)&s_spawnPoints )
    {
      Com_PrintWarning(16, "No more spawn viewer slots, unable to add ent %d to the list of spawn viewers ents\n.", (unsigned int)ent->s.number);
      return 0;
    }
  }
  nonCharacterEntries->entNum = ent->s.number;
  nonCharacterEntries->entTeam = team;
  nonCharacterEntries->cacheEntry.lastUpdateTime = -1;
  return 1;
}

/*
==============
G_PlayerSpawnPoints_AllocateMemory
==============
*/
void G_PlayerSpawnPoints_AllocateMemory(HunkUser *hunkUser)
{
  unsigned __int16 v2; 
  int v3; 
  unsigned __int64 v4; 
  SpawnPointEntityRecord *v5; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 322, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( s_spawnPoints.spawnPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 323, ASSERT_TYPE_ASSERT, "( s_spawnPoints.spawnPoints == nullptr )", (const char *)&queryFormat, "s_spawnPoints.spawnPoints == nullptr") )
    __debugbreak();
  if ( cm.mapEnts )
    v2 = cm.mapEnts->spawnList.spawnsCount + 64;
  else
    v2 = 2000;
  v3 = v2;
  v4 = 1552i64 * v2;
  Com_Printf(15, "G_PlayerSpawnPoints allocating %ikb for %i spawn points\n", v4 >> 10, v2);
  s_spawnPoints.spawnPoints = (SpawnPointInfo *)Mem_HunkUser_AllocInternal(hunkUser, v4, 8ui64, "G_PlayerSpawnPoints_AllocateMemory");
  s_spawnPoints.spawnCapacity = v3;
  s_spawnPoints.spawnCount = 0;
  v5 = (SpawnPointEntityRecord *)Mem_HunkUser_AllocInternal(hunkUser, 0xA00ui64, 4ui64, "G_PlayerSpawnPoints_AllocateMemory");
  s_spawnPoints.scriptedSpawnPointRecordCount = 0;
  s_spawnPoints.scriptedSpawnPointRecords = v5;
}

/*
==============
G_PlayerSpawnPoints_AreTeamsEnabled
==============
*/
_BOOL8 G_PlayerSpawnPoints_AreTeamsEnabled()
{
  return s_spawnGlobals.usingTeams;
}

/*
==============
G_PlayerSpawnPoints_CacheNearbyPathNodes
==============
*/
void G_PlayerSpawnPoints_CacheNearbyPathNodes(SpawnPointInfo *info)
{
  unsigned int *p_nearbyPathNodeCount; 
  int v4; 
  const pathnode_t *v5; 
  unsigned int nearbyPathNodeCount; 
  pathnode_t *v10; 
  char v22; 
  char v23; 
  const char *v24; 
  const char *v25; 
  char *fmt; 
  __int64 v29; 
  vec3_t pos; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 643, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  p_nearbyPathNodeCount = &info->nearbyPathNodeCount;
  v4 = 0;
  if ( info->nearbyPathNodeCount )
  {
    LODWORD(v29) = info->nearbyPathNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 644, ASSERT_TYPE_ASSERT, "( info->nearbyPathNodeCount ) == ( 0 )", "info->nearbyPathNodeCount == 0\n\t%i, %i", v29, 0i64) )
      __debugbreak();
  }
  v5 = Path_NearestNodeForLineOfSight(&info->record->origin, 33685521, NULL);
  if ( v5 )
  {
    *p_nearbyPathNodeCount = 1;
    info->nearbyPathNodes[0] = Path_ConvertNodeToIndex(v5);
  }
  nearbyPathNodeCount = *p_nearbyPathNodeCount;
  if ( !*p_nearbyPathNodeCount )
  {
    __asm { vmovss  xmm1, cs:__real@43020000; maxRadius }
    GetPathNodeListForSightToPathNodeCheck(&info->record->origin, *(const float *)&_XMM1, info->nearbyPathNodes, 4ui64, &info->nearbyPathNodeCount);
    nearbyPathNodeCount = *p_nearbyPathNodeCount;
    if ( !*p_nearbyPathNodeCount )
    {
      __asm { vmovss  xmm1, cs:__real@437a0000; maxRadius }
      GetPathNodeListForSightToPathNodeCheck(&info->record->origin, *(const float *)&_XMM1, info->nearbyPathNodes, 4ui64, &info->nearbyPathNodeCount);
      nearbyPathNodeCount = info->nearbyPathNodeCount;
    }
  }
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( nearbyPathNodeCount )
  {
    __asm { vmovss  xmm6, cs:__real@45800000 }
    while ( 1 )
    {
      v10 = Path_ConvertIndexToNode(info->nearbyPathNodes[v4]);
      pathnode_t::GetPos(v10, &pos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+pos]
        vsubss  xmm3, xmm0, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rsp+78h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rdi+0Ch]
        vmovss  xmm0, dword ptr [rsp+78h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rdi+10h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm6
      }
      if ( !(v22 | v23) )
        break;
      if ( ++v4 >= *p_nearbyPathNodeCount )
        goto LABEL_19;
    }
  }
  v24 = SL_ConvertToString(info->record->name);
  if ( !I_strstr(v24, "start") )
  {
    v25 = vtos(&info->record->origin);
    __asm
    {
      vmovsd  xmm0, cs:__real@4050000000000000
      vmovsd  [rsp+78h+fmt], xmm0
    }
    Com_PrintError(16, "MP Spawnpoint [%i] at %s needs a pathnode within %.1f units for LOS testing\n", info->record->index, v25, *(double *)&fmt);
  }
LABEL_19:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
G_PlayerSpawnPoints_CharacterIsIgnoredDuringSpawnSelection
==============
*/
_BOOL8 G_PlayerSpawnPoints_CharacterIsIgnoredDuringSpawnSelection(const gentity_s *const entCharacter)
{
  entityType_s eType; 
  __int64 number; 
  __int64 v5; 
  int v6; 

  eType = entCharacter->s.eType;
  if ( (((eType - 1) & 0xFFEB) != 0 || eType == ET_ACTOR_CORPSE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1371, ASSERT_TYPE_ASSERT, "(entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT || entCharacter->s.eType == ET_INVISIBLE)", (const char *)&queryFormat, "entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT || entCharacter->s.eType == ET_INVISIBLE") )
    __debugbreak();
  number = entCharacter->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    v6 = 248;
    LODWORD(v5) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1374, ASSERT_TYPE_ASSERT, "(unsigned)( charIdx ) < (unsigned)( ( sizeof( *array_counter( s_spawnCharacters.characterEntries ) ) + 0 ) )", "charIdx doesn't index ARRAY_COUNT( s_spawnCharacters.characterEntries )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return s_spawnCharacters.characterEntries[number].ignoreInSpawnSelection;
}

/*
==============
G_PlayerSpawnPoints_DebugDraw
==============
*/
void G_PlayerSpawnPoints_DebugDraw()
{
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 
  __int64 entNum; 
  const dvar_t *v23; 
  int v24; 
  float v31; 
  const dvar_t *v34; 
  int i; 
  gentity_s *v41; 
  __int64 j; 
  pathnode_t *v44; 
  const dvar_t *v49; 
  char enabled; 
  const dvar_t *v51; 
  char v52; 
  const dvar_t *v53; 
  char v54; 
  const dvar_t *v55; 
  char v56; 
  const dvar_t *v57; 
  char v58; 
  const dvar_t *v59; 
  char v60; 
  const dvar_t *v61; 
  char v62; 
  const dvar_t *v63; 
  char v64; 
  const dvar_t *v65; 
  char v66; 
  const dvar_t *v67; 
  char v68; 
  const dvar_t *v69; 
  char v70; 
  const dvar_t *v71; 
  __int64 bestSpawnPointIdx; 
  int v73; 
  unsigned int v74; 
  int v81; 
  __int64 v89; 
  __int64 v91; 
  unsigned __int8 enabledFlags; 
  char v97; 
  char v98; 
  bool v99; 
  bool v100; 
  CriticalFactorScore criticalScore; 
  vec4_t *v108; 
  __int64 index; 
  int v116; 
  const char *v117; 
  int v120; 
  vec4_t *v121; 
  const char *v132; 
  const char *v142; 
  unsigned int v144; 
  int v145; 
  int v148; 
  const vec3_t *v149; 
  vec4_t *v152; 
  const char *v153; 
  vec3_t *p_pos; 
  const vec3_t *p_groundPos; 
  const char *v166; 
  vec4_t *v167; 
  vec3_t *v168; 
  const char *v179; 
  const char *v186; 
  CriticalFactorScore v189; 
  const char *v190; 
  const char *String; 
  const char *v192; 
  __int64 v194; 
  const char *v196; 
  const char *v197; 
  const char *v203; 
  const char *v209; 
  const char *v212; 
  const char *v215; 
  const char *v216; 
  const char *v219; 
  const char *v220; 
  const char *v223; 
  const char *v224; 
  const char *v227; 
  const char *v228; 
  const char *v231; 
  const char *v232; 
  const char *v235; 
  const char *v236; 
  int v241; 
  char v242; 
  SpawnFactorEntry *v243; 
  char v245; 
  const char *name; 
  const char *v253; 
  __int64 duration; 
  __int64 v267; 
  unsigned int pathNodeListOutCount; 
  char v269; 
  char v270; 
  char v271; 
  char v272; 
  char v273; 
  char v274; 
  char v275; 
  char v276; 
  char v277; 
  char v278; 
  char v279; 
  int shapeCount; 
  int v281; 
  SpawnPointEntityRecord *v282; 
  int v283; 
  int v284; 
  char v285; 
  char v286; 
  int v287; 
  __int64 v288; 
  SpawnPointInfo *v289; 
  vec3_t xyz; 
  vec3_t center; 
  vec3_t pos; 
  vec3_t start; 
  vec4_t v296; 
  vec4_t v297; 
  vec4_t v298; 
  vec4_t v299; 
  vec3_t v300; 
  vec3_t v301; 
  __int128 v302; 
  vec4_t v303; 
  vec3_t v304; 
  vec3_t v305; 
  __int64 v306; 
  float v307; 
  vec3_t v308; 
  Bounds box; 
  vec4_t v310; 
  __int128 v311; 
  vec4_t color; 
  __int128 v313; 
  vec4_t v314; 
  unsigned __int16 pathNodeIndexListOut[4]; 
  char v326; 

  __asm { vmovaps [rsp+2F0h+var_50], xmm8 }
  v10 = DVARINT_g_playerspawns_debugdraw;
  if ( !DVARINT_g_playerspawns_debugdraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v12 = DVARINT_g_playerspawns_debugdraw_colorMode;
  v287 = integer;
  if ( !DVARINT_g_playerspawns_debugdraw_colorMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_colorMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v283 = v12->current.integer;
  G_PlayerSpawnPoints_DebugDrawFrontline();
  G_PlayerSpawnPoints_DebugDrawClusters();
  G_PlayerSpawnPoints_DebugDrawLanes();
  v13 = DVARBOOL_g_playerspawns_debugNonPlayerViewers;
  if ( !DVARBOOL_g_playerspawns_debugNonPlayerViewers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugNonPlayerViewers") )
    __debugbreak();
  __asm { vmovaps [rsp+2F0h+var_30], xmm6 }
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    __asm { vmovss  xmm6, cs:__real@40400000 }
    nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
    do
    {
      entNum = nonCharacterEntries->entNum;
      if ( (_DWORD)entNum != 2047 )
      {
        if ( (unsigned int)entNum >= 0x800 )
        {
          LODWORD(v267) = 2048;
          LODWORD(duration) = nonCharacterEntries->entNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v267) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        _RAX = g_entities;
        _RCX = 1456 * entNum;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rax+130h]
          vmovss  dword ptr [rbp+1F0h+center], xmm0
          vmovss  xmm1, dword ptr [rcx+rax+134h]
          vmovss  dword ptr [rbp+1F0h+center+4], xmm1
          vmovss  xmm0, dword ptr [rcx+rax+138h]
          vmovaps xmm1, xmm6; radius
          vmovss  dword ptr [rbp+1F0h+center+8], xmm0
        }
        G_DebugSphere(&center, *(float *)&_XMM1, &colorBlue, 0, 1);
      }
      ++nonCharacterEntries;
    }
    while ( (__int64)nonCharacterEntries < (__int64)&s_spawnPoints );
  }
  v23 = DVARBOOL_g_playerspawns_debugInfluenceNodes;
  if ( !DVARBOOL_g_playerspawns_debugInfluenceNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugInfluenceNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    v24 = 0;
    _RBX = &s_influencePoints.influencePoints[0].linkToEnt;
    do
    {
      if ( LOBYTE(_RBX[1].number) )
      {
        if ( (unsigned int)v24 >= 0x100 )
        {
          LODWORD(v267) = 256;
          LODWORD(duration) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", duration, v267) )
            __debugbreak();
        }
        if ( !LOBYTE(_RBX[1].number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1219, ASSERT_TYPE_ASSERT, "(influencePt->inUse)", (const char *)&queryFormat, "influencePt->inUse") )
          __debugbreak();
        if ( EntHandle::isDefined(_RBX) )
        {
          _RAX = EntHandle::ent(_RBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+130h]
            vmovss  dword ptr [rbp+1F0h+start], xmm0
            vmovss  xmm1, dword ptr [rax+134h]
            vmovss  dword ptr [rbp+1F0h+start+4], xmm1
            vmovss  xmm2, dword ptr [rax+138h]
            vmovss  dword ptr [rbp+1F0h+start+8], xmm2
          }
          *(vec3_t *)&_RBX[-8].number = _RAX->r.currentOrigin;
        }
        else
        {
          __asm { vmovsd  xmm0, qword ptr [rbx-20h] }
          v31 = *(float *)&_RBX[-6];
          __asm
          {
            vshufps xmm1, xmm0, xmm0, 55h ; 'U'
            vmovsd  qword ptr [rbp+1F0h+start], xmm0
            vmovss  xmm0, dword ptr [rbp+1F0h+start]
          }
          start.v[2] = v31;
          __asm { vmovss  xmm2, dword ptr [rbp+1F0h+start+8] }
        }
        __asm
        {
          vmovss  dword ptr [rbp+1F0h+center], xmm0
          vaddss  xmm0, xmm2, dword ptr [rbx-10h]
          vmovss  xmm2, dword ptr [rbx-14h]; radius
          vmovss  dword ptr [rbp+1F0h+center+8], xmm0
          vmovss  dword ptr [rbp+1F0h+center+4], xmm1
        }
        G_DebugCylinder(&start, &center, *(float *)&_XMM2, &colorPurple, 1, 1);
      }
      ++v24;
      _RBX += 10;
    }
    while ( v24 < 256 );
  }
  v34 = DVARBOOL_g_playerspawns_debugPlayerPathnodes;
  if ( !DVARBOOL_g_playerspawns_debugPlayerPathnodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugPlayerPathnodes") )
    __debugbreak();
  __asm { vmovaps [rsp+2F0h+var_40], xmm7 }
  Dvar_CheckFrontendServerThread(v34);
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( v34->current.enabled )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@41200000
      vmovups xmm0, cs:__xmm@41200000000000000000000000000000
      vmovss  xmm7, cs:__real@437a0000
      vmovss  xmm6, cs:__real@42100000
      vmovss  dword ptr [rbp+1F0h+box.halfSize+4], xmm1
      vmovss  dword ptr [rbp+1F0h+box.halfSize+8], xmm1
      vmovups xmmword ptr [rbp+1F0h+box.midPoint], xmm0
    }
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v41 = &level.gentities[i];
      if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(v41) )
      {
        pathNodeListOutCount = 0;
        __asm { vmovaps xmm1, xmm7; maxRadius }
        GetPathNodeListForSightToPathNodeCheck(&v41->r.currentOrigin, *(const float *)&_XMM1, pathNodeIndexListOut, 4ui64, &pathNodeListOutCount);
        for ( j = 0i64; (unsigned int)j < pathNodeListOutCount; j = (unsigned int)(j + 1) )
        {
          v44 = Path_ConvertIndexToNode(pathNodeIndexListOut[j]);
          pathnode_t::GetPos(v44, &pos);
          __asm { vmovaps xmm2, xmm8; yaw }
          G_DebugBox(&pos, &box, *(float *)&_XMM2, &colorOrange, 0, 1);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1F0h+pos]
            vmovss  xmm1, dword ptr [rbp+1F0h+pos+4]
            vaddss  xmm2, xmm6, dword ptr [rbp+1F0h+pos+8]
            vmovss  dword ptr [rbp+1F0h+center], xmm0
            vmovss  dword ptr [rbp+1F0h+center+4], xmm1
            vmovss  dword ptr [rbp+1F0h+center+8], xmm2
          }
          G_DebugLine(&center, &pos, &colorOrange, 0);
        }
      }
    }
  }
  if ( integer )
  {
    v49 = DVARBOOL_g_playerspawns_debugdraw_factors;
    __asm { vmovaps [rsp+2F0h+var_B0], xmm14 }
    if ( !DVARBOOL_g_playerspawns_debugdraw_factors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_factors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    enabled = v49->current.enabled;
    v51 = DVARBOOL_g_playerspawns_debugdraw_factors_drawAll;
    v278 = enabled;
    if ( !DVARBOOL_g_playerspawns_debugdraw_factors_drawAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_factors_drawAll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    v52 = v51->current.enabled;
    v53 = DVARBOOL_g_playerspawns_debugdraw_totalScore;
    v279 = v52;
    if ( !DVARBOOL_g_playerspawns_debugdraw_totalScore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_totalScore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v53->current.enabled;
    v55 = DVARBOOL_g_playerspawns_debugdraw_TTLOS;
    v270 = v54;
    if ( !DVARBOOL_g_playerspawns_debugdraw_TTLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_TTLOS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v56 = v55->current.enabled;
    v57 = DVARBOOL_g_playerspawns_debugdraw_sightData;
    v271 = v56;
    if ( !DVARBOOL_g_playerspawns_debugdraw_sightData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_sightData") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    v58 = v57->current.enabled;
    v59 = DVARBOOL_g_playerspawns_debugdraw_name;
    v274 = v58;
    if ( !DVARBOOL_g_playerspawns_debugdraw_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_name") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    v60 = v59->current.enabled;
    v61 = DVARBOOL_g_playerspawns_debugdraw_KVPs;
    v273 = v60;
    if ( !DVARBOOL_g_playerspawns_debugdraw_KVPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_KVPs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    v62 = v61->current.enabled;
    v63 = DVARBOOL_g_playerspawns_debugdraw_pos;
    v276 = v62;
    if ( !DVARBOOL_g_playerspawns_debugdraw_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_pos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    v64 = v63->current.enabled;
    v65 = DVARBOOL_g_playerspawns_debugdraw_status;
    v275 = v64;
    if ( !DVARBOOL_g_playerspawns_debugdraw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_status") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    v66 = v65->current.enabled;
    v67 = DVARBOOL_g_playerspawns_debugAlternates;
    v277 = v66;
    if ( !DVARBOOL_g_playerspawns_debugAlternates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugAlternates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v67);
    v68 = v67->current.enabled;
    v69 = DVARBOOL_g_playerspawns_debugCritFail;
    v269 = v68;
    if ( !DVARBOOL_g_playerspawns_debugCritFail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugCritFail") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    v70 = v69->current.enabled;
    v71 = DVARINT_g_playerspawns_debugLastTeamSpawn;
    bestSpawnPointIdx = s_spawnGlobals.lastSelectionResults.bestSpawnPointIdx;
    v272 = v70;
    v281 = s_spawnGlobals.lastSelectionResults.bestSpawnPointIdx;
    if ( !DVARINT_g_playerspawns_debugLastTeamSpawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugLastTeamSpawn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v71);
    v73 = v71->current.integer;
    v74 = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta
      vmovups xmm1, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmovups xmm14, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
      vmovups xmm2, xmmword ptr cs:?colorRedFaded@@3Tvec4_t@@B; vec4_t const colorRedFaded
      vmovups xmm3, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow
      vmovups xmmword ptr [rbp+1F0h+color], xmm0
      vmovups xmmword ptr [rbp+1F0h+var_E0], xmm0
      vmovups xmm0, xmmword ptr cs:?colorDkPurple@@3Tvec4_t@@B; vec4_t const colorDkPurple
    }
    v284 = v73;
    v81 = 0;
    pathNodeListOutCount = 0;
    *(_QWORD *)start.v = s_spawnPoints.spawnCount;
    __asm
    {
      vmovups [rbp+1F0h+var_F0], xmm0
      vmovups xmm0, xmmword ptr cs:?colorLtRed@@3Tvec4_t@@B; vec4_t const colorLtRed
      vmovups xmmword ptr [rbp+1F0h+box.midPoint], xmm1
      vmovups [rbp+1F0h+var_110], xmm1
      vmovups xmm1, xmmword ptr cs:?colorLtBlue@@3Tvec4_t@@B; vec4_t const colorLtBlue
      vmovups xmmword ptr [rbp+1F0h+var_1D0], xmm0
      vmovups xmmword ptr [rbp+1F0h+var_1F0], xmm14
      vmovups [rbp+1F0h+var_260], xmm2
      vmovups [rbp+1F0h+var_250], xmm3
      vmovups xmmword ptr [rbp+1F0h+var_200], xmm1
    }
    if ( s_spawnPoints.spawnCount > 0 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3ecccccd
        vmovss  xmm7, cs:__real@c0c00000
        vmovaps [rsp+2F0h+var_60], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vmovaps [rsp+2F0h+var_70], xmm10
        vmovss  xmm10, cs:__real@43340000
        vmovaps [rsp+2F0h+var_80], xmm11
        vmovss  xmm11, cs:__real@3f333333
        vmovaps [rsp+2F0h+var_90], xmm12
      }
      v89 = bestSpawnPointIdx;
      __asm
      {
        vmovss  xmm12, cs:__real@42c80000
        vmovaps [rsp+2F0h+var_A0], xmm13
      }
      v91 = 0i64;
      __asm
      {
        vmovss  xmm13, cs:__real@3fcccccd
        vmovaps [rsp+2F0h+var_C0], xmm15
        vmovss  xmm15, cs:__real@c1c00000
      }
      v288 = bestSpawnPointIdx;
      *(_QWORD *)pathNodeIndexListOut = 0i64;
      while ( 1 )
      {
        if ( v74 >= s_spawnPoints.spawnCount )
        {
          LODWORD(v267) = s_spawnPoints.spawnCount;
          LODWORD(duration) = v74;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", duration, v267) )
            __debugbreak();
          v89 = v288;
          __asm
          {
            vmovups xmm3, [rbp+1F0h+var_250]
            vmovups xmm2, [rbp+1F0h+var_260]
          }
        }
        _RDI = s_spawnPoints.spawnPoints[v91].record;
        _R13 = &s_spawnPoints.spawnPoints[v91];
        enabledFlags = _R13->enabledFlags;
        v289 = _R13;
        v97 = enabledFlags & 2;
        v282 = _RDI;
        v98 = enabledFlags & 4;
        v286 = v97;
        v285 = v98;
        v99 = v97 || v98;
        if ( integer == 2 )
          break;
        if ( integer == 4 )
        {
          v100 = v98 == 0;
LABEL_102:
          if ( v100 )
            goto LABEL_220;
        }
        if ( integer != 3 || v97 )
        {
          __asm
          {
            vmovdqa xmmword ptr [rbp+1F0h+var_1E0], xmm14
            vmovss  xmm0, dword ptr [r13+8]
            vmovss  dword ptr [rbp+1F0h+xyz], xmm0
            vmovss  xmm1, dword ptr [r13+0Ch]
            vmovss  dword ptr [rbp+1F0h+xyz+4], xmm1
            vmovss  xmm0, dword ptr [r13+10h]
            vmovss  dword ptr [rbp+1F0h+xyz+8], xmm0
          }
          criticalScore = _R13->scoreData.criticalScore;
          if ( criticalScore == CS_BAD )
          {
            __asm { vmovdqa xmmword ptr [rbp+1F0h+var_1F0], xmm2 }
          }
          else if ( criticalScore == CS_OK )
          {
            __asm { vmovdqa xmmword ptr [rbp+1F0h+var_1F0], xmm3 }
          }
          else
          {
            __asm
            {
              vmovups xmm0, [rbp+1F0h+var_110]
              vmovdqa xmmword ptr [rbp+1F0h+var_1F0], xmm0
            }
          }
          if ( _R13->enemySightData.fullSights )
          {
            __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
          }
          else if ( _R13->enemySightData.cornerSights )
          {
            __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
          }
          else
          {
            __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
          }
          __asm
          {
            vmovups xmmword ptr [rbp+1F0h+var_190], xmm0
            vxorps  xmm0, xmm0, xmm0
            vmovups [rbp+1F0h+var_1A0], xmm0
          }
          v108 = &colorDkGrey;
          if ( _R13->usedInLastSelection )
          {
            switch ( v283 )
            {
              case 0:
                v108 = (vec4_t *)&v311;
                break;
              case 1:
                v108 = &v303;
                break;
              case 2:
                if ( v89 == v91 )
                {
                  v108 = &colorBlue;
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [r13+5E0h]
                    vdivss  xmm2, xmm0, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.bestSpawnPointScore; playerSpawn_Globals s_spawnGlobals
                    vsubss  xmm1, xmm9, xmm2
                    vmovss  dword ptr [rbp+1F0h+var_1A0], xmm1
                    vmovss  dword ptr [rbp+1F0h+var_1A0+4], xmm2
                    vmovss  dword ptr [rbp+1F0h+var_1A0+0Ch], xmm9
                  }
                  v108 = (vec4_t *)&v302;
                }
                break;
              case 3:
                v108 = &v297;
                break;
              case 4:
                v108 = &colorLtRed;
                if ( v281 == v74 )
                  v108 = &colorGreen;
                break;
              case 5:
                if ( s_frontLineData.enabled && s_frontLineData.isValidData )
                {
                  v108 = &colorBlue;
                  if ( _R13->frontlineTeam )
                    v108 = &colorOrange;
                }
                else
                {
                  v108 = &colorBlack;
                }
                break;
              default:
                break;
            }
          }
          __asm { vmovss  xmm1, dword ptr [rdi+20h]; jumptable 0000000140A83AA5 default case }
          G_PlayerSpawnPoints_DebugDrawSpawnShape(&_R13->groundPos, *(float *)&_XMM1, v108);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1F0h+xyz+8]
            vaddss  xmm1, xmm0, cs:__real@42900000
            vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
          }
          index = _RDI->index;
          v116 = v81 + 1;
          shapeCount = v81 + 1;
          v117 = j_va("%d", index);
          __asm { vmovss  xmm2, cs:__real@3fc00000; scale }
          G_Main_AddDebugString(&xyz, &color, *(float *)&_XMM2, v117);
          if ( v269 )
          {
            v120 = 0;
            if ( _R13->alternateGroundPositionsCount > 0 )
            {
              do
              {
                v121 = (vec4_t *)&v313;
                ++v116;
                if ( v99 )
                  v121 = &v314;
                _RAX = (__int64)v282;
                __asm { vmovss  xmm1, dword ptr [rax+20h]; yaw }
                G_PlayerSpawnPoints_DebugDrawSpawnShape(&_R13->alternateGroundPositions[v120], *(float *)&_XMM1, v121);
                G_DebugLine(&_R13->groundPos, &_R13->alternateGroundPositions[v120++], v121, 0);
                shapeCount = v116;
              }
              while ( v120 < _R13->alternateGroundPositionsCount );
              _RDI = v282;
            }
            v74 = pathNodeListOutCount;
          }
          if ( !v284 || !_R13->usedInLastSelection )
            goto LABEL_174;
          if ( v284 != 1 )
          {
            if ( v284 == 2 )
            {
              if ( s_spawnGlobals.lastTeamSpawn[2] == v74 )
              {
                __asm
                {
                  vmovsd  xmm0, qword ptr [r13+8]
                  vaddss  xmm1, xmm10, dword ptr [rbp+1F0h+var_1B0+8]
                  vmovss  dword ptr [rbp+1F0h+var_1B0+8], xmm1
                  vmovss  xmm1, dword ptr [rdi+20h]; yaw
                  vmovsd  qword ptr [rbp+1F0h+var_1B0], xmm0
                }
                G_PlayerSpawnPoints_DebugLastTeamSpawnShape(&_R13->groundPos, *(float *)&_XMM1, &v296);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&v301, &v296, *(float *)&_XMM2, "Last Team Spawn: ALLIES");
              }
              else if ( s_spawnGlobals.lastTeamSpawn[2] >= 0 )
              {
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovsd  xmm2, qword ptr [rbp+1F0h+xyz]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                  vmovss  xmm1, dword ptr [r13+2BCh]
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovq   rdx, xmm1
                  vmovsd  qword ptr [rbp+1F0h+var_170], xmm2
                }
                v305.v[2] = xyz.v[2];
                v142 = j_va("Near Last Team Spawn (ALLIES): %f", _RDX);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&v305, &v296, *(float *)&_XMM2, v142);
              }
            }
            else if ( v284 == 3 )
            {
              if ( s_spawnGlobals.lastTeamSpawn[1] == v74 )
              {
                __asm
                {
                  vmovsd  xmm0, qword ptr [r13+8]
                  vaddss  xmm1, xmm10, dword ptr [rbp+1F0h+var_1C0+8]
                  vmovss  dword ptr [rbp+1F0h+var_1C0+8], xmm1
                  vmovss  xmm1, dword ptr [rdi+20h]; yaw
                  vmovsd  qword ptr [rbp+1F0h+var_1C0], xmm0
                }
                G_PlayerSpawnPoints_DebugLastTeamSpawnShape(&_R13->groundPos, *(float *)&_XMM1, &v299);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&v300, &v299, *(float *)&_XMM2, "Last Team Spawn: AXIS");
              }
              else if ( s_spawnGlobals.lastTeamSpawn[1] >= 0 )
              {
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovsd  xmm2, qword ptr [rbp+1F0h+xyz]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                  vmovss  xmm1, dword ptr [r13+2B8h]
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovq   rdx, xmm1
                  vmovsd  qword ptr [rbp+1F0h+var_180], xmm2
                }
                v304.v[2] = xyz.v[2];
                v132 = j_va("Near Last Team Spawn (AXIS): %f", _RDX);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&v304, &v299, *(float *)&_XMM2, v132);
              }
            }
LABEL_174:
            if ( v270 && _R13->usedInLastSelection )
            {
              __asm { vmovdqa xmmword ptr [rbp+1F0h+var_120], xmm14 }
              if ( _R13->record->index == v281 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbp+1F0h+box.midPoint]
                  vmovdqa xmmword ptr [rbp+1F0h+var_120], xmm0
                }
              }
              __asm
              {
                vaddss  xmm1, xmm15, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                vmovss  xmm1, dword ptr [r13+5E0h]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovq   rdx, xmm1
              }
              v179 = j_va("[ %.3f ]", _RDX);
              __asm { vmovaps xmm2, xmm13; scale }
              G_Main_AddDebugString(&xyz, &v310, *(float *)&_XMM2, v179);
            }
            if ( v271 && _R13->usedInLastSelection )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+1F0h+xyz+8]
                vaddss  xmm1, xmm0, cs:__real@c1900000
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                vsubss  xmm0, xmm9, dword ptr [r13+40h]
                vmulss  xmm1, xmm0, cs:__real@451f6000
                vxorps  xmm3, xmm3, xmm3
                vroundss xmm3, xmm3, xmm1, 2
                vcvttss2si edx, xmm3
              }
              v186 = j_va("TTLOS: %d", _RDX);
              __asm { vmovss  xmm2, cs:__real@3fa00000; scale }
              G_Main_AddDebugString(&xyz, &v303, *(float *)&_XMM2, v186);
            }
            if ( v272 && _R13->usedInLastSelection && _R13->scoreData.criticalScore )
            {
              __asm
              {
                vaddss  xmm1, xmm15, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              v189 = _R13->scoreData.criticalScore;
              if ( v189 == CS_GOOD )
              {
                v190 = "crit factors GOOD";
              }
              else
              {
                String = G_PlayerSpawnPoints_FailedCritReason_GetString(_R13->scoreData.csScoreReason);
                v192 = "crit fail OK: %s";
                if ( v189 != CS_OK )
                  v192 = "crit fail BAD: %s";
                v190 = j_va(v192, String);
              }
              __asm { vmovaps xmm2, xmm13; scale }
              G_Main_AddDebugString(&xyz, &v297, *(float *)&_XMM2, v190);
            }
            v194 = (__int64)v282;
            if ( v273 )
            {
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              v196 = SL_ConvertToString(v282->name);
              v197 = j_va("name: %s", v196);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v197);
            }
            if ( v274 && _R13->usedInLastSelection )
            {
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                vmovss  xmm1, dword ptr [r13+40h]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovq   rdx, xmm1
              }
              v203 = j_va("SightStanding: [ %f ]", _RDX);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v203);
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                vmovss  xmm1, dword ptr [r13+44h]
                vcvtss2sd xmm1, xmm1, xmm1
                vmovq   rdx, xmm1
              }
              v209 = j_va("SightWithJumping: [ %f ]", _RDX);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v209);
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              v212 = j_va("NearbyPathnodes: %d", _R13->nearbyPathNodeCount);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v212);
            }
            if ( v275 )
            {
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              v215 = vtos((const vec3_t *)(v194 + 16));
              v216 = j_va("origin: %s", v215);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v216);
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              v219 = vtos((const vec3_t *)(v194 + 28));
              v220 = j_va("angles: %s", v219);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v220);
            }
            if ( v276 )
            {
              if ( *(_DWORD *)(v194 + 12) != 1 )
              {
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                }
                v223 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v194 + 12));
                v224 = j_va("noteworthy: %s", v223);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v224);
              }
              if ( *(_DWORD *)(v194 + 8) != 1 )
              {
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                }
                v227 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v194 + 8));
                v228 = j_va("target: %s", v227);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v228);
              }
            }
            if ( v277 )
            {
              __asm { vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8] }
              v231 = "Disabled";
              if ( v285 )
                v231 = "Enabled";
              __asm { vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1 }
              v232 = j_va("allies: %s", v231);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v232);
              __asm { vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8] }
              v235 = "Disabled";
              if ( v286 )
                v235 = "Enabled";
              __asm { vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1 }
              v236 = j_va("axis: %s", v235);
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(&xyz, &v298, *(float *)&_XMM2, v236);
            }
            if ( v278 && _R13->usedInLastSelection )
            {
              __asm
              {
                vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                vmovaps xmm2, xmm6; scale
                vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
              }
              G_Main_AddDebugString(&xyz, &v297, *(float *)&_XMM2, "[ Axis, Allies ] Weight - FactorName");
              _RSI = _R13->factorScores;
              v241 = 0;
              v242 = v279;
              v243 = s_scoreFactorsTable;
              while ( 1 )
              {
                *(double *)&_XMM0 = G_PlayerSpawnPoints_GetFactorWeight((SpawnFactors)v241);
                __asm
                {
                  vcomiss xmm0, xmm8
                  vmovaps xmm2, xmm0
                }
                if ( !(v245 | v100) )
                  break;
                if ( v242 )
                {
                  __asm { vmovss  dword ptr [rbp+1F0h+var_1F0+0Ch], xmm11 }
LABEL_216:
                  __asm { vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8] }
                  name = v243->name;
                  __asm
                  {
                    vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                    vmovss  xmm1, dword ptr [rsi]
                    vcvtss2sd xmm1, xmm1, xmm1
                    vcvtss2sd xmm2, xmm2, xmm2
                    vmovq   rdx, xmm1
                    vmovq   r8, xmm2
                  }
                  v253 = j_va("[ %.3f ] %.3f - %s", _RDX, _R8, name);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&xyz, &v297, *(float *)&_XMM2, v253);
                }
                ++v241;
                ++_RSI;
                ++v243;
                if ( v241 >= 22 )
                {
                  _R13 = v289;
                  goto LABEL_219;
                }
              }
              __asm { vmovss  dword ptr [rbp+1F0h+var_1F0+0Ch], xmm9 }
              goto LABEL_216;
            }
LABEL_219:
            G_PlayerSpawnPoints_DebugSpawnPathNodes(_R13, &shapeCount);
            v81 = shapeCount;
            v74 = pathNodeListOutCount;
            v91 = *(_QWORD *)pathNodeIndexListOut;
            integer = v287;
            goto LABEL_220;
          }
          v144 = pathNodeListOutCount;
          v145 = 0;
          _R14 = s_spawnGlobals.lastTeamSpawn;
          _R15 = (char *)_R13 - (char *)s_spawnGlobals.lastTeamSpawn;
          while ( 2 )
          {
            v148 = *_R14;
            if ( *_R14 >= 0 )
            {
              if ( v148 != v144 )
              {
                __asm { vucomiss xmm12, dword ptr [r15+r14+2B4h] }
                if ( v148 != v144 )
                  goto LABEL_168;
                p_groundPos = &_R13->groundPos;
                pos.v[2] = _R13->groundPos.v[2];
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+pos+8]
                  vmovsd  xmm0, qword ptr [r13+8]
                  vmovss  dword ptr [rbp+1F0h+pos+8], xmm1
                  vmovss  xmm1, dword ptr [rdi+20h]; yaw
                  vmovsd  qword ptr [rbp+1F0h+pos], xmm0
                }
                if ( v145 == 2 )
                {
                  G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(p_groundPos, *(float *)&_XMM1, &v296);
                  __asm { vmovaps xmm2, xmm6; scale }
                  G_Main_AddDebugString(&pos, &v296, *(float *)&_XMM2, "Last Team Spawn: ALLIES");
                  goto LABEL_169;
                }
                if ( v145 != 1 )
                {
                  G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(p_groundPos, *(float *)&_XMM1, &v296);
                  v153 = j_va("Last Team Spawn: team %i", (unsigned int)v145);
                  v152 = &v296;
                  p_pos = &pos;
                  goto LABEL_167;
                }
                G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(p_groundPos, *(float *)&_XMM1, &v299);
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(&pos, &v299, *(float *)&_XMM2, "Last Team Spawn: AXIS");
                goto LABEL_171;
              }
              v149 = &_R13->groundPos;
              center.v[2] = _R13->groundPos.v[2];
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rbp+1F0h+center+8]
                vmovsd  xmm0, qword ptr [r13+8]
                vmovss  dword ptr [rbp+1F0h+center+8], xmm1
                vmovss  xmm1, dword ptr [rdi+20h]; yaw
                vmovsd  qword ptr [rbp+1F0h+center], xmm0
              }
              if ( v145 == 2 )
              {
                G_PlayerSpawnPoints_DebugLastTeamSpawnShape(v149, *(float *)&_XMM1, &v296);
                v152 = &v296;
                v153 = "NEW Team Spawn: ALLIES";
                p_pos = &center;
              }
              else
              {
                if ( v145 == 1 )
                {
                  G_PlayerSpawnPoints_DebugLastTeamSpawnShape(v149, *(float *)&_XMM1, &v299);
                  v152 = &v299;
                  v153 = "NEW Team Spawn: AXIS";
                }
                else
                {
                  G_PlayerSpawnPoints_DebugLastTeamSpawnShape(v149, *(float *)&_XMM1, &v296);
                  v153 = j_va("NEW Team Spawn: team %i", (unsigned int)v145);
                  v152 = &v296;
                }
                p_pos = &center;
              }
LABEL_167:
              __asm { vmovaps xmm2, xmm6; scale }
              G_Main_AddDebugString(p_pos, v152, *(float *)&_XMM2, v153);
LABEL_168:
              if ( v145 == 2 )
              {
LABEL_169:
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovsd  xmm2, qword ptr [rbp+1F0h+xyz]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                  vmovss  xmm1, dword ptr [r13+2BCh]
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovq   rdx, xmm1
                  vmovsd  [rbp+1F0h+var_160], xmm2
                }
                v307 = xyz.v[2];
                v166 = j_va("Near Last Team Spawn (ALLIES): %f", _RDX);
                v167 = &v296;
                v168 = (vec3_t *)&v306;
                goto LABEL_172;
              }
              if ( v145 == 1 )
              {
LABEL_171:
                __asm
                {
                  vaddss  xmm1, xmm7, dword ptr [rbp+1F0h+xyz+8]
                  vmovsd  xmm2, qword ptr [rbp+1F0h+xyz]
                  vmovss  dword ptr [rbp+1F0h+xyz+8], xmm1
                  vmovss  xmm1, dword ptr [r13+2B8h]
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovq   rdx, xmm1
                  vmovsd  qword ptr [rbp+1F0h+var_150], xmm2
                }
                v308.v[2] = xyz.v[2];
                v166 = j_va("Near Last Team Spawn (AXIS): %f", _RDX);
                v167 = &v299;
                v168 = &v308;
LABEL_172:
                __asm { vmovaps xmm2, xmm6; scale }
                G_Main_AddDebugString(v168, v167, *(float *)&_XMM2, v166);
              }
            }
            _RDI = v282;
            ++v145;
            ++_R14;
            if ( v145 >= 203 )
              goto LABEL_174;
            continue;
          }
        }
LABEL_220:
        __asm
        {
          vmovups xmm2, [rbp+1F0h+var_260]
          vmovups xmm3, [rbp+1F0h+var_250]
        }
        v89 = v288;
        ++v74;
        ++v91;
        pathNodeListOutCount = v74;
        *(_QWORD *)pathNodeIndexListOut = v91;
        if ( v91 >= *(__int64 *)start.v )
        {
          __asm
          {
            vmovaps xmm15, [rsp+2F0h+var_C0]
            vmovaps xmm13, [rsp+2F0h+var_A0]
            vmovaps xmm12, [rsp+2F0h+var_90]
            vmovaps xmm11, [rsp+2F0h+var_80]
            vmovaps xmm10, [rsp+2F0h+var_70]
            vmovaps xmm9, [rsp+2F0h+var_60]
          }
          goto LABEL_222;
        }
      }
      v100 = !v99;
      goto LABEL_102;
    }
LABEL_222:
    __asm { vmovaps xmm14, [rsp+2F0h+var_B0] }
    s_spawnGlobals.debugNumSpawnsInLastDraw = v81;
  }
  __asm
  {
    vmovaps xmm7, [rsp+2F0h+var_40]
    vmovaps xmm6, [rsp+2F0h+var_30]
  }
  _R11 = &v326;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawClusters
==============
*/

void __fastcall G_PlayerSpawnPoints_DebugDrawClusters(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v3; 
  int v10; 
  int v12; 
  int v17; 
  int *i; 
  vec3_t *p_currentOrigin; 
  vec3_t origin; 
  Bounds box; 
  vec4_t color; 

  v3 = DVARBOOL_g_playerspawns_debugClusters;
  if ( !DVARBOOL_g_playerspawns_debugClusters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugClusters") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta
      vmovss  xmm1, cs:__real@41200000
      vmovaps xmmword ptr [rbp+57h+color], xmm0
      vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmovaps [rbp+57h+var_70], xmm0
      vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
    }
    _R12 = &s_clusterData.playerClusters[0].center.v[2];
    __asm
    {
      vmovaps [rbp+57h+var_60], xmm0
      vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
    }
    v10 = 0;
    __asm
    {
      vmovaps [rbp+57h+var_50], xmm0
      vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
    }
    v12 = 0;
    __asm
    {
      vmovaps [rbp+57h+var_40], xmm0
      vmovups xmm0, cs:__xmm@41200000000000000000000000000000
      vmovups xmmword ptr [rbp+57h+box.midPoint], xmm0
      vmovss  dword ptr [rbp+57h+box.halfSize+4], xmm1
      vmovss  dword ptr [rbp+57h+box.halfSize+8], xmm1
    }
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v12 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      if ( *((int *)_R12 - 3) > 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r12-8]
          vmovss  xmm1, dword ptr [r12-4]
          vmovss  dword ptr [rbp+57h+origin], xmm0
          vmovss  xmm0, dword ptr [r12]
          vxorps  xmm2, xmm2, xmm2; yaw
          vmovss  dword ptr [rbp+57h+origin+4], xmm1
          vmovss  dword ptr [rbp+57h+origin+8], xmm0
        }
        G_DebugBox(&origin, &box, *(float *)&_XMM2_8, &color + v10, 0, 1);
        v17 = 0;
        for ( i = s_clusterData.clusterAssignment; ; ++i )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v17 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          if ( *i == v12 )
          {
            __asm { vxorps  xmm2, xmm2, xmm2; yaw }
            p_currentOrigin = &level.gentities[v17].r.currentOrigin;
            G_DebugBox(p_currentOrigin, &box, *(float *)&_XMM2_8, &color + v10, 0, 1);
            G_DebugLineWithDuration(&origin, p_currentOrigin, &color + v10, 0, 1);
          }
          ++v17;
        }
        ++v10;
      }
      ++v12;
      _R12 += 4;
    }
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawFrontline
==============
*/
void G_PlayerSpawnPoints_DebugDrawFrontline()
{
  const dvar_t *v16; 
  bool v17; 
  char v40; 
  vec3_t v51; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v54; 
  vec3_t v55; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm14
  }
  _RBX = DVARFLT_g_playerspawns_FrontlineMinZ;
  if ( !DVARFLT_g_playerspawns_FrontlineMinZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineMinZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_g_playerspawns_FrontlineMaxZ;
  if ( !DVARFLT_g_playerspawns_FrontlineMaxZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineMaxZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_g_playerspawns_FrontlineStep;
  if ( !DVARFLT_g_playerspawns_FrontlineStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm14, dword ptr [rbx+28h] }
  if ( s_frontLineData.enabled && s_frontLineData.isValidData )
  {
    v16 = DVARBOOL_g_playerspawns_debugFrontline;
    if ( !DVARBOOL_g_playerspawns_debugFrontline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugFrontline") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = !v16->current.enabled;
    if ( v16->current.enabled )
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vmovss  xmm4, dword ptr cs:s_frontLineData.midpoint
        vmovss  xmm5, dword ptr cs:s_frontLineData.midpoint+4
        vmovss  dword ptr [rsp+138h+var_F8], xmm4
        vmovss  dword ptr [rsp+138h+var_F8+4], xmm5
      }
      if ( v17 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@43480000
          vmovss  xmm3, cs:__real@453b8000
          vmovaps [rsp+138h+var_38], xmm8
          vmulss  xmm8, xmm2, dword ptr cs:s_frontLineData.frontlineForwardDir
          vmovaps [rsp+138h+var_48], xmm9
          vmulss  xmm9, xmm2, dword ptr cs:s_frontLineData.frontlineForwardDir+4
          vmovaps [rsp+138h+var_58], xmm10
          vmulss  xmm10, xmm2, dword ptr cs:s_frontLineData.frontlineForwardDir+8
          vmovaps [rsp+138h+var_68], xmm11
          vmulss  xmm11, xmm3, dword ptr cs:s_frontLineData.frontlineRightDir
          vmovaps [rsp+138h+var_78], xmm12
          vmulss  xmm12, xmm3, dword ptr cs:s_frontLineData.frontlineRightDir+4
          vmovaps [rsp+138h+var_88], xmm13
          vmulss  xmm13, xmm3, dword ptr cs:s_frontLineData.frontlineRightDir+8
        }
        while ( 1 )
        {
          __asm
          {
            vaddss  xmm0, xmm8, xmm4
            vmovss  dword ptr [rsp+138h+var_C8], xmm0
            vaddss  xmm1, xmm9, xmm5
            vmovss  dword ptr [rsp+138h+var_C8+4], xmm1
            vaddss  xmm0, xmm10, xmm6
            vmovss  dword ptr [rsp+138h+var_C8+8], xmm0
            vsubss  xmm1, xmm4, xmm8
            vmovss  dword ptr [rsp+138h+var_B8], xmm1
            vsubss  xmm0, xmm5, xmm9
            vmovss  dword ptr [rsp+138h+var_B8+4], xmm0
            vsubss  xmm1, xmm6, xmm10
            vmovss  dword ptr [rsp+138h+var_B8+8], xmm1
            vaddss  xmm0, xmm11, xmm4
            vaddss  xmm1, xmm12, xmm5
            vmovss  dword ptr [rsp+138h+end], xmm0
            vmovss  dword ptr [rsp+138h+end+4], xmm1
            vaddss  xmm0, xmm13, xmm6
            vsubss  xmm1, xmm4, xmm11
            vmovss  dword ptr [rsp+138h+end+8], xmm0
            vmovss  dword ptr [rsp+138h+start], xmm1
            vsubss  xmm0, xmm5, xmm12
            vsubss  xmm1, xmm6, xmm13
            vmovss  dword ptr [rsp+138h+start+4], xmm0
            vmovss  dword ptr [rsp+138h+start+8], xmm1
            vmovss  dword ptr [rsp+138h+var_F8+8], xmm6
          }
          G_DebugLineWithDuration(&start, &end, &colorMagenta, 1, 1);
          G_DebugLineWithDuration(&v51, &v54, &colorRedHeat, 1, 1);
          G_DebugLineWithDuration(&v51, &v55, &colorGreen, 1, 1);
          __asm
          {
            vaddss  xmm6, xmm6, xmm14
            vcomiss xmm6, xmm7
          }
          if ( !(v40 | v17) )
            break;
          __asm
          {
            vmovss  xmm5, dword ptr [rsp+138h+var_F8+4]
            vmovss  xmm4, dword ptr [rsp+138h+var_F8]
          }
        }
        __asm
        {
          vmovaps xmm12, [rsp+138h+var_78]
          vmovaps xmm11, [rsp+138h+var_68]
          vmovaps xmm10, [rsp+138h+var_58]
          vmovaps xmm9, [rsp+138h+var_48]
          vmovaps xmm8, [rsp+138h+var_38]
          vmovaps xmm13, [rsp+138h+var_88]
        }
      }
    }
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawLanes
==============
*/
void G_PlayerSpawnPoints_DebugDrawLanes()
{
  const dvar_t *v0; 
  int v5; 
  int *laneVolumeEntNums; 
  unsigned __int64 v9; 
  __int64 v12; 
  __int64 duration; 
  __int64 v14; 
  vec4_t color; 

  v0 = DVARBOOL_g_playerspawns_debugLanes;
  if ( !DVARBOOL_g_playerspawns_debugLanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugLanes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
      vmovaps xmmword ptr [rsp+0C8h+color], xmm0
      vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
      vmovaps [rsp+0C8h+var_78], xmm0
      vmovups xmm0, xmmword ptr cs:?colorOrange@@3Tvec4_t@@B; vec4_t const colorOrange
      vmovaps [rsp+0C8h+var_68], xmm0
      vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta
    }
    v5 = 0;
    __asm
    {
      vmovaps [rsp+0C8h+var_58], xmm0
      vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue
      vmovaps [rsp+0C8h+var_48], xmm0
    }
    if ( s_mapLanes.numLaneVolumes > 0 )
    {
      laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
      do
      {
        _RSI = level.gentities;
        v9 = *laneVolumeEntNums;
        _RDI = v9;
        if ( (unsigned int)v9 >= 0x800 )
        {
          LODWORD(v14) = 2048;
          LODWORD(duration) = *laneVolumeEntNums;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v14) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[_RDI].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3056, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntIdx )") )
          __debugbreak();
        __asm { vmovss  xmm2, dword ptr [rdi+rsi+140h]; yaw }
        v12 = 2i64 * v5++;
        G_DebugBox(&_RSI[_RDI].r.currentOrigin, &_RSI[_RDI].r.box, *(float *)&_XMM2, (vec4_t *)((char *)&color + 8 * v12), 0, 1);
        ++laneVolumeEntNums;
      }
      while ( v5 < s_mapLanes.numLaneVolumes );
    }
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawSpawnShape
==============
*/

void __fastcall G_PlayerSpawnPoints_DebugDrawSpawnShape(const vec3_t *pos, double yaw, const vec4_t *color)
{
  int v15; 
  float v18; 
  float c; 
  float s[3]; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v69; 
  vec3_t v70; 
  vec3_t v71; 
  vec3_t v72; 
  vec3_t v73; 
  vec3_t v74; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
  }
  _RSI = pos;
  v15 = 13;
  __asm { vmovaps xmm3, xmm1 }
  if ( s_spawnGlobals.debugNumSpawnsInLastDraw > 0 )
  {
    v15 = 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw;
    if ( 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw < 1 )
      v15 = 1;
  }
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  v18 = pos->v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+150h+end], xmm0
    vxorps  xmm2, xmm2, xmm2
  }
  end.v[2] = v18;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+end+8]
    vaddss  xmm1, xmm0, cs:__real@42900000
    vmovsd  xmm0, qword ptr [rsi]
    vmovsd  qword ptr [rsp+150h+start], xmm0
  }
  start.v[2] = v18;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+start+8]
    vmovss  dword ptr [rsp+150h+end+8], xmm1
    vaddss  xmm1, xmm0, cs:__real@42100000
    vmulss  xmm0, xmm3, cs:__real@3c8efa35; radians
    vmovss  dword ptr [rsp+150h+start+8], xmm1
    vmovss  [rsp+150h+c], xmm2
    vmovss  [rsp+150h+s], xmm2
    vmovss  dword ptr [rsp+150h+var_128], xmm2
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmovss  xmm10, dword ptr [rsp+150h+start]
    vmovss  xmm2, cs:__real@41800000
    vmulss  xmm12, xmm2, [rsp+150h+c]
    vmovss  xmm8, dword ptr [rsp+150h+start+4]
    vmovss  xmm9, dword ptr [rsp+150h+start+8]
    vmovss  xmm3, cs:__real@42000000
    vmovss  xmm11, [rsp+150h+s]
    vmulss  xmm13, xmm11, cs:__real@c1800000
    vmulss  xmm6, xmm2, dword ptr [rsp+150h+var_128]
    vmulss  xmm7, xmm11, xmm2
    vaddss  xmm0, xmm13, xmm10
    vmovss  dword ptr [rsp+150h+var_F0], xmm0
    vaddss  xmm0, xmm12, xmm8
    vmovss  dword ptr [rsp+150h+var_F0+4], xmm0
    vsubss  xmm0, xmm10, xmm13
    vmovss  dword ptr [rsp+150h+var_E0], xmm0
    vsubss  xmm1, xmm8, xmm12
    vmovss  dword ptr [rsp+150h+var_E0+4], xmm1
    vaddss  xmm0, xmm12, xmm10
    vmovss  dword ptr [rbp+50h+var_D0], xmm0
    vaddss  xmm1, xmm7, xmm8
    vmovss  dword ptr [rbp+50h+var_D0+4], xmm1
    vmulss  xmm1, xmm3, [rsp+150h+c]
    vaddss  xmm4, xmm1, xmm10
    vmulss  xmm1, xmm3, dword ptr [rsp+150h+var_128]
    vaddss  xmm0, xmm6, xmm9
    vmovss  dword ptr [rbp+50h+var_D0+8], xmm0
    vmulss  xmm0, xmm11, xmm3
    vaddss  xmm2, xmm0, xmm8
    vaddss  xmm0, xmm1, xmm9
    vsubss  xmm3, xmm4, xmm12
    vsubss  xmm5, xmm2, xmm7
    vmovss  dword ptr [rsp+150h+var_100+8], xmm0
    vaddss  xmm1, xmm5, xmm12
    vmovss  dword ptr [rsp+150h+var_100], xmm4
    vsubss  xmm4, xmm0, xmm6
    vaddss  xmm0, xmm3, xmm13
    vmovss  dword ptr [rbp+50h+var_C0], xmm0
    vmovss  dword ptr [rbp+50h+var_C0+4], xmm1
    vsubss  xmm0, xmm3, xmm13
    vsubss  xmm1, xmm5, xmm12
    vmovss  dword ptr [rbp+50h+var_B0], xmm0
    vmovss  dword ptr [rbp+50h+var_B0+4], xmm1
    vmovss  dword ptr [rsp+150h+var_F0+8], xmm9
    vmovss  dword ptr [rsp+150h+var_E0+8], xmm9
    vmovss  dword ptr [rsp+150h+var_100+4], xmm2
    vmovss  dword ptr [rbp+50h+var_C0+8], xmm4
    vmovss  dword ptr [rbp+50h+var_B0+8], xmm4
  }
  G_DebugLine(_RSI, &end, color, 0);
  if ( v15 >= 2 )
    G_DebugLine(&start, &v69, color, 0);
  if ( v15 >= 6 )
  {
    G_DebugLine(_RSI, &v70, color, 0);
    G_DebugLine(_RSI, &v71, color, 0);
    G_DebugLine(&end, &v70, color, 0);
    G_DebugLine(&end, &v71, color, 0);
  }
  if ( v15 >= 10 )
  {
    G_DebugLine(_RSI, &v72, color, 0);
    G_DebugLine(&end, &v72, color, 0);
    G_DebugLine(&v73, &v69, color, 0);
    G_DebugLine(&v74, &v69, color, 0);
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
G_PlayerSpawnPoints_DebugLastTeamSpawnShape
==============
*/
void G_PlayerSpawnPoints_DebugLastTeamSpawnShape(const vec3_t *spawnPosition, float yaw, const vec4_t *color)
{
  float v6; 
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+70h+var_10], xmm6
    vmovaps [rsp+70h+var_20], xmm7
    vmovsd  xmm0, qword ptr [rcx]
  }
  v6 = spawnPosition->v[2];
  __asm
  {
    vmovss  xmm7, cs:__real@40a00000
    vmovaps xmm1, xmm0
    vmovsd  qword ptr [rbp+start], xmm0
  }
  *(_QWORD *)&start.y = __PAIR64__(LODWORD(v6), HIDWORD(_RT0));
  __asm
  {
    vaddss  xmm0, xmm0, xmm7
    vmovsd  qword ptr [rbp+end], xmm1
  }
  *(_QWORD *)&end.y = __PAIR64__(LODWORD(v6), HIDWORD(_RT0));
  __asm
  {
    vmovss  dword ptr [rbp+start], xmm0
    vaddss  xmm0, xmm1, xmm7
    vmovss  xmm1, dword ptr [rbp+end+8]
    vaddss  xmm2, xmm1, cs:__real@43340000
    vmovss  dword ptr [rbp+end+8], xmm2
    vmovss  dword ptr [rbp+end], xmm0
  }
  G_DebugLine(&start, &end, color, 0);
  __asm
  {
    vmovss  xmm6, cs:__real@c1200000
    vaddss  xmm1, xmm6, dword ptr [rbp+start]
    vaddss  xmm0, xmm6, dword ptr [rbp+end]
    vmovss  dword ptr [rbp+start], xmm1
    vmovss  dword ptr [rbp+end], xmm0
  }
  G_DebugLine(&start, &end, color, 0);
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rbp+start]
    vaddss  xmm0, xmm7, dword ptr [rbp+end]
    vaddss  xmm2, xmm7, dword ptr [rbp+start+4]
    vmovss  dword ptr [rbp+start], xmm1
    vaddss  xmm1, xmm7, dword ptr [rbp+end+4]
    vmovss  dword ptr [rbp+end+4], xmm1
    vmovss  dword ptr [rbp+end], xmm0
    vmovss  dword ptr [rbp+start+4], xmm2
  }
  G_DebugLine(&start, &end, color, 0);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+start+4]
    vaddss  xmm0, xmm6, dword ptr [rbp+end+4]
    vmovss  dword ptr [rbp+start+4], xmm1
    vmovss  dword ptr [rbp+end+4], xmm0
  }
  G_DebugLine(&start, &end, color, 0);
  __asm
  {
    vmovaps xmm6, [rsp+70h+var_10]
    vmovaps xmm7, [rsp+70h+var_20]
  }
}

/*
==============
G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape
==============
*/
void G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(const vec3_t *spawnPosition, float yaw, const vec4_t *color)
{
  float v4; 
  vec3_t end; 
  vec3_t start; 

  __asm { vmovsd  xmm0, qword ptr [rcx] }
  v4 = spawnPosition->v[2];
  __asm
  {
    vmovaps xmm1, xmm0
    vmovsd  qword ptr [rsp+58h+start], xmm0
  }
  *(_QWORD *)&start.y = __PAIR64__(LODWORD(v4), HIDWORD(_RT0));
  __asm
  {
    vaddss  xmm0, xmm0, cs:__real@c2000000
    vmovss  dword ptr [rsp+58h+start], xmm0
    vaddss  xmm0, xmm1, cs:__real@42000000
    vmovsd  qword ptr [rsp+58h+end], xmm1
  }
  *(_QWORD *)&end.y = __PAIR64__(LODWORD(v4), HIDWORD(_RT0));
  __asm { vmovss  dword ptr [rsp+58h+end], xmm0 }
  G_DebugLine(&start, &end, color, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+start]
    vaddss  xmm1, xmm0, cs:__real@42000000
    vmovss  xmm2, dword ptr [rsp+58h+end]
    vaddss  xmm0, xmm2, cs:__real@c2000000
    vmovss  dword ptr [rsp+58h+start], xmm1
    vmovss  xmm1, dword ptr [rsp+58h+start+4]
    vaddss  xmm2, xmm1, cs:__real@c2000000
    vmovss  dword ptr [rsp+58h+end], xmm0
    vmovss  xmm0, dword ptr [rsp+58h+end+4]
    vaddss  xmm1, xmm0, cs:__real@42000000
    vmovss  dword ptr [rsp+58h+end+4], xmm1
    vmovss  dword ptr [rsp+58h+start+4], xmm2
  }
  G_DebugLine(&start, &end, color, 0);
}

/*
==============
G_PlayerSpawnPoints_DebugSpawnPathNodes
==============
*/

void __fastcall G_PlayerSpawnPoints_DebugSpawnPathNodes(const SpawnPointInfo *const spawnInfo, int *shapeCount, double _XMM2_8)
{
  const dvar_t *v6; 
  int v9; 
  __int64 v12; 
  pathnode_t *v15; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v49; 
  vec3_t v50; 
  vec3_t v51; 
  vec3_t v52; 
  vec3_t v53; 
  vec3_t v54; 
  vec3_t pos; 
  Bounds box; 

  v6 = DVARBOOL_g_playerspawns_debugSpawnPathnodes;
  if ( !DVARBOOL_g_playerspawns_debugSpawnPathnodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugSpawnPathnodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v9 = 13;
    if ( s_spawnGlobals.debugNumSpawnsInLastDraw > 0 )
    {
      v9 = 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw;
      if ( 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw < 1 )
        v9 = 1;
    }
    __asm
    {
      vmovss  xmm1, cs:__real@41200000
      vmovups xmm0, cs:__xmm@41200000000000000000000000000000
    }
    v12 = 0i64;
    __asm
    {
      vmovss  dword ptr [rbp+40h+box.halfSize+4], xmm1
      vmovss  dword ptr [rbp+40h+box.halfSize+8], xmm1
      vmovups xmmword ptr [rbp+40h+box.midPoint], xmm0
    }
    if ( spawnInfo->nearbyPathNodeCount )
    {
      __asm
      {
        vmovaps [rsp+140h+var_40], xmm7
        vmovss  xmm7, cs:__real@40a00000
        vmovaps [rsp+140h+var_50], xmm8
        vmovss  xmm8, cs:__real@c0a00000
        vmovaps [rsp+140h+var_30], xmm6
      }
      do
      {
        v15 = Path_ConvertIndexToNode(spawnInfo->nearbyPathNodes[v12]);
        pathnode_t::GetPos(v15, &pos);
        G_DebugLine(&spawnInfo->groundPos, &pos, &colorOrange, 1);
        if ( v9 < 13 )
        {
          __asm
          {
            vmovsd  xmm6, qword ptr [rbp+40h+pos]
            vaddss  xmm0, xmm7, dword ptr [rsp+140h+start+8]
            vmovss  xmm3, dword ptr [rbp+40h+pos]
            vmovss  dword ptr [rsp+140h+start+8], xmm0
            vaddss  xmm0, xmm7, dword ptr [rsp+140h+end+8]
            vmovss  dword ptr [rsp+140h+end+8], xmm0
            vaddss  xmm0, xmm7, dword ptr [rsp+140h+var_E0+8]
            vmovss  dword ptr [rsp+140h+var_E0+8], xmm0
            vaddss  xmm0, xmm7, dword ptr [rsp+140h+var_D0+8]
            vmovss  dword ptr [rsp+140h+var_D0+8], xmm0
            vaddss  xmm0, xmm8, dword ptr [rbp+40h+var_C0+8]
            vaddss  xmm5, xmm7, xmm3
            vsubss  xmm4, xmm3, xmm7
            vmovsd  qword ptr [rsp+140h+start], xmm6
            vaddss  xmm1, xmm7, dword ptr [rsp+140h+start+4]
            vmovss  dword ptr [rsp+140h+start+4], xmm1
            vmovsd  qword ptr [rsp+140h+end], xmm6
            vaddss  xmm1, xmm7, dword ptr [rsp+140h+end+4]
            vmovss  dword ptr [rsp+140h+end+4], xmm1
            vmovsd  qword ptr [rsp+140h+var_E0], xmm6
            vaddss  xmm1, xmm8, dword ptr [rsp+140h+var_E0+4]
            vmovss  dword ptr [rsp+140h+var_E0+4], xmm1
            vmovsd  qword ptr [rsp+140h+var_D0], xmm6
            vaddss  xmm1, xmm8, dword ptr [rsp+140h+var_D0+4]
            vmovss  dword ptr [rsp+140h+var_D0+4], xmm1
            vmovsd  qword ptr [rbp+40h+var_C0], xmm6
            vaddss  xmm1, xmm7, dword ptr [rbp+40h+var_C0+4]
            vmovss  dword ptr [rbp+40h+var_C0+4], xmm1
            vmovss  dword ptr [rbp+40h+var_C0+8], xmm0
            vaddss  xmm0, xmm8, dword ptr [rbp+40h+var_B0+8]
            vmovsd  qword ptr [rbp+40h+var_B0], xmm6
            vaddss  xmm1, xmm7, dword ptr [rbp+40h+var_B0+4]
            vmovsd  qword ptr [rbp+40h+var_A0], xmm6
            vmovsd  qword ptr [rbp+40h+var_90], xmm6
            vmovss  dword ptr [rbp+40h+var_B0+4], xmm1
            vaddss  xmm1, xmm8, dword ptr [rbp+40h+var_A0+4]
            vmovss  dword ptr [rbp+40h+var_B0+8], xmm0
            vaddss  xmm0, xmm8, dword ptr [rbp+40h+var_A0+8]
            vmovss  dword ptr [rbp+40h+var_A0+4], xmm1
            vaddss  xmm1, xmm8, dword ptr [rbp+40h+var_90+4]
            vmovss  dword ptr [rbp+40h+var_A0+8], xmm0
            vaddss  xmm0, xmm8, dword ptr [rbp+40h+var_90+8]
            vmovss  dword ptr [rbp+40h+var_90+4], xmm1
            vmovss  dword ptr [rsp+140h+start], xmm5
            vmovss  dword ptr [rsp+140h+end], xmm4
            vmovss  dword ptr [rsp+140h+var_E0], xmm4
            vmovss  dword ptr [rsp+140h+var_D0], xmm5
            vmovss  dword ptr [rbp+40h+var_C0], xmm5
            vmovss  dword ptr [rbp+40h+var_B0], xmm4
            vmovss  dword ptr [rbp+40h+var_A0], xmm4
            vmovss  dword ptr [rbp+40h+var_90], xmm5
            vmovss  dword ptr [rbp+40h+var_90+8], xmm0
          }
          if ( v9 >= 5 )
          {
            G_DebugLine(&start, &end, &colorOrange, 1);
            G_DebugLine(&end, &v49, &colorOrange, 1);
            G_DebugLine(&v49, &v50, &colorOrange, 1);
            G_DebugLine(&v50, &start, &colorOrange, 1);
          }
          if ( v9 >= 9 )
          {
            G_DebugLine(&start, &v51, &colorOrange, 1);
            G_DebugLine(&end, &v52, &colorOrange, 1);
            G_DebugLine(&v49, &v53, &colorOrange, 1);
            G_DebugLine(&v50, &v54, &colorOrange, 1);
          }
        }
        else
        {
          __asm { vxorps  xmm2, xmm2, xmm2; yaw }
          G_DebugBox(&pos, &box, *(float *)&_XMM2_8, &colorOrange, 1, 1);
        }
        ++*shapeCount;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < spawnInfo->nearbyPathNodeCount );
      __asm
      {
        vmovaps xmm8, [rsp+140h+var_50]
        vmovaps xmm7, [rsp+140h+var_40]
        vmovaps xmm6, [rsp+140h+var_30]
      }
    }
  }
}

/*
==============
G_PlayerSpawnPoints_DisableSingleOriginSpawn
==============
*/
void G_PlayerSpawnPoints_DisableSingleOriginSpawn(void)
{
  s_spawnPoints.singleOriginSpawnPoint.enabledFlags = 0;
}

/*
==============
G_PlayerSpawnPoints_DissassociateViewerEntity
==============
*/
void G_PlayerSpawnPoints_DissassociateViewerEntity(const gentity_s *const ent)
{
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 

  nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
  while ( nonCharacterEntries->entNum != ent->s.number )
  {
    if ( (__int64)++nonCharacterEntries >= (__int64)&s_spawnPoints )
      return;
  }
  nonCharacterEntries->entNum = 2047;
  nonCharacterEntries->cacheEntry.lastUpdateTime = -1;
}

/*
==============
G_PlayerSpawnPoints_DropToGround
==============
*/
void G_PlayerSpawnPoints_DropToGround(vec3_t *origin)
{
  char v30; 
  char v31; 
  __int64 passEntityNum; 
  __int64 passEntityNuma; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm2, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vaddss  xmm0, xmm0, cs:__real@43000000
  }
  _RBX = origin;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm2
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  dword ptr [rbp+57h+end], xmm2
    vmovss  dword ptr [rbp+57h+end+4], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
  __asm
  {
    vmovss  xmm7, [rbp+57h+results.fraction]
    vmovss  xmm0, dword ptr [rbp+57h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
    vmovss  xmm0, dword ptr [rbp+57h+end+4]
    vmulss  xmm8, xmm7, cs:__real@43000000
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+4]
    vaddss  xmm6, xmm2, dword ptr [rbp+57h+start]
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vmulss  xmm2, xmm1, xmm7
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
    vaddss  xmm5, xmm2, dword ptr [rbp+57h+start+4]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm4, xmm2, dword ptr [rbp+57h+start+8]
    vsubss  xmm0, xmm4, cs:__real@447a0000
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm6
    vmovss  dword ptr [rbp+57h+start+4], xmm5
    vmovss  dword ptr [rbp+57h+start+8], xmm4
    vmovss  dword ptr [rbp+57h+end], xmm6
    vmovss  dword ptr [rbp+57h+end+4], xmm5
  }
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.fraction]
    vmulss  xmm2, xmm0, cs:__real@44000000
    vaddss  xmm1, xmm8, cs:__real@42c00000
    vcomiss xmm2, xmm1
  }
  if ( !(v30 | v31) )
  {
    __asm
    {
      vcvttss2si eax, dword ptr [rbx+8]
      vcvttss2si r9d, dword ptr [rbx+4]
      vcvttss2si r8d, dword ptr [rbx]
    }
    LODWORD(passEntityNum) = _EAX;
    Com_PrintError(23, "ERROR: Spawn point has no ground below it within 1000 units at (%i, %i, %i)\n", _R8, _R9, passEntityNum);
  }
  if ( (unsigned __int16)(Trace_GetEntityHitId(&results) - 2046) > 1u )
  {
    __asm
    {
      vcvttss2si eax, dword ptr [rbx+8]
      vcvttss2si r9d, dword ptr [rbx+4]
      vcvttss2si r8d, dword ptr [rbx]
    }
    LODWORD(passEntityNum) = _EAX;
    Com_PrintError(23, "ERROR: Spawn point has a mover below it at (%i, %i, %i), but can not ride it\n", _R8, _R9, passEntityNum);
  }
  __asm
  {
    vmovss  xmm5, [rbp+57h+results.fraction]
    vmovss  xmm0, dword ptr [rbp+57h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rbp+57h+start]
    vmovss  xmm1, dword ptr [rbp+57h+end+4]
    vmovss  dword ptr [rbp+57h+start], xmm0
    vsubss  xmm0, xmm1, dword ptr [rbp+57h+start+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbp+57h+start+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
    vmovss  dword ptr [rbp+57h+start+8], xmm3
  }
  G_Main_TraceCapsule(&results, &start, &start, &playerBox, 2047, 33636369);
  if ( results.allsolid )
  {
    __asm
    {
      vcvttss2si eax, dword ptr [rbx+8]
      vcvttss2si r9d, dword ptr [rbx+4]
      vcvttss2si r8d, dword ptr [rbx]
    }
    LODWORD(passEntityNuma) = _EAX;
    Com_PrintError(23, "ERROR: Spawn point is in solid at (%i, %i, %i)\n", _R8, _R9, passEntityNuma);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+start]
    vmovss  xmm1, dword ptr [rbp+57h+start+4]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+start+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_PlayerSpawnPoints_DumpSelectionResults
==============
*/
void G_PlayerSpawnPoints_DumpSelectionResults(spawnSelectionSpec *selectionSpec, spawnSelectionResults *results)
{
  const dvar_t *v4; 
  spawnSelectionSpec *v6; 
  CriticalFactorEntry *v7; 
  __int64 v8; 
  int v10; 
  char *v11; 
  unsigned __int8 v12; 
  int v13; 
  const char *v14; 
  SpawnFactorEntry *v16; 
  unsigned int v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  const dvar_t *v23; 
  CriticalFactorEntry *v36; 
  unsigned int *badSpawnsHistogram; 
  unsigned int *okSpawnsHistogram; 
  int bestSpawnPointCriticalScore; 
  const char *v43; 
  char *fmt; 
  __int64 v45; 
  double v46; 
  __int64 v47; 
  char *v48; 
  int v53; 
  __int64 v54; 

  v4 = DVARBOOL_g_playerspawns_dumpSelectionResults;
  _R12 = results;
  v6 = selectionSpec;
  if ( !DVARBOOL_g_playerspawns_dumpSelectionResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpSelectionResults") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Com_Printf(16, "\n------\nSpawnpoint Selection Begin\n------\n\n");
    v7 = s_criticalFactorsTable;
    v53 = 0;
    if ( s_spawnPoints.spawnCount > 0 )
    {
      v8 = 0i64;
      __asm
      {
        vmovaps [rsp+0B8h+var_58], xmm6
        vmovaps [rsp+0B8h+var_68], xmm7
        vxorps  xmm7, xmm7, xmm7
      }
      v54 = 0i64;
      v10 = 0;
      do
      {
        v11 = (char *)s_spawnPoints.spawnPoints + v8;
        v12 = 1 << v6->spawningTeam;
        v48 = (char *)s_spawnPoints.spawnPoints + v8;
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
          __debugbreak();
        if ( (v12 & (unsigned __int8)v11[48]) != 0 )
        {
          Com_Printf(16, "SP:%3d\n", (unsigned int)v10);
          v13 = *((_DWORD *)v11 + 377);
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              Com_Printf(16, "\tCriticalScore: GOOD\n");
            }
            else
            {
              if ( v13 == 2 )
              {
                Com_Printf(16, "\tCriticalScore: OK\n");
              }
              else
              {
                if ( v13 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3880, ASSERT_TYPE_ASSERT, "(spawnPoint->scoreData.criticalScore == CS_BAD)", (const char *)&queryFormat, "spawnPoint->scoreData.criticalScore == CS_BAD") )
                  __debugbreak();
                Com_Printf(16, "\tCriticalScore: BAD\n");
              }
              Com_Printf(16, "\tCriticalReason: %s\n", s_criticalFactorsTable[*((int *)v11 + 378)].name);
            }
          }
          if ( v6->respectFrontline )
          {
            v14 = "enemy";
            if ( !v11[1530] )
              v14 = "friendly";
            Com_Printf(16, "\tFrontlineTeam: %s\n", v14);
          }
          _RSI = s_weightsTable;
          v16 = s_scoreFactorsTable;
          _RBP = v11 - (char *)s_weightsTable;
          v18 = 0;
          v19 = 1;
          v20 = 1;
          do
          {
            if ( !v19 )
            {
              LODWORD(v47) = 22;
              LODWORD(v45) = v18;
              v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v45, v47);
              v20 = !v21;
              if ( v21 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm6, dword ptr [rsi]
              vcomiss xmm6, xmm7
            }
            if ( !v20 )
            {
              v23 = DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled;
              if ( !DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_scrScoreFactorEnabled") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v23);
              if ( v23->current.enabled || v18 != 21 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rsi+rbp+25Ch]
                  vmulss  xmm0, xmm1, xmm6
                  vcvtss2sd xmm2, xmm0, xmm0
                  vcvtss2sd xmm3, xmm6, xmm6
                  vcvtss2sd xmm4, xmm1, xmm1
                  vmovsd  [rsp+0B8h+var_90], xmm2
                  vmovq   r9, xmm3
                  vmovsd  [rsp+0B8h+fmt], xmm4
                }
                Com_Printf(16, "\tF:%2d\t ( %.3f * %.4f ) = %.4f, ( %s )\n", v18, *(double *)&_XMM3, *(double *)&fmt, v46, v16->name);
              }
            }
            ++v18;
            ++_RSI;
            ++v16;
            v19 = v18 < 0x16;
            v20 = v18 <= 0x16;
          }
          while ( (int)v18 < 22 );
          _R13 = v48;
          __asm
          {
            vmovss  xmm2, dword ptr [r13+5E0h]
            vcvtss2sd xmm2, xmm2, xmm2
            vmovq   r8, xmm2
          }
          Com_Printf(16, "Total Score: %f\n\n", *(double *)&_XMM2);
          v10 = v53;
          v7 = s_criticalFactorsTable;
          v6 = selectionSpec;
        }
        v8 = v54 + 1552;
        v53 = ++v10;
        v54 += 1552i64;
      }
      while ( v10 < s_spawnPoints.spawnCount );
      _R12 = results;
      __asm
      {
        vmovaps xmm7, [rsp+0B8h+var_68]
        vmovaps xmm6, [rsp+0B8h+var_58]
      }
    }
    Com_Printf(16, "Spawnpoint Selection Results\n");
    if ( s_frontLineData.spawningTeamIsTrapped )
      Com_Printf(16, "** Team is spawn-trapped!  Ignoring front-line critical factor**\n");
    Com_Printf(16, "Evaluated %d spawn points.\n", (unsigned int)_R12->criticalFactors_numSpawnsPoints);
    Com_Printf(16, "Found %d Good Spawns.\n", (unsigned int)_R12->numGoodSpawns);
    Com_Printf(16, "Found %d Ok Spawns.\n", (unsigned int)_R12->numOkSpawns);
    Com_Printf(16, "Found %d Bad Spawns.\n", (unsigned int)_R12->numBadSpawns);
    Com_Printf(16, "\tBadSpawnReasons.\n");
    v36 = s_criticalFactorsTable;
    badSpawnsHistogram = (unsigned int *)_R12->badSpawnsHistogram;
    do
    {
      Com_Printf(16, "\t%s - %d\n", v36->name, *badSpawnsHistogram);
      ++v36;
      ++badSpawnsHistogram;
    }
    while ( (__int64)v36 < (__int64)&unk_145087120 );
    Com_Printf(16, "\n\tOkSpawnReasons.\n");
    okSpawnsHistogram = (unsigned int *)_R12->okSpawnsHistogram;
    do
    {
      Com_Printf(16, "\t%s - %d\n", v7->name, *okSpawnsHistogram);
      ++v7;
      ++okSpawnsHistogram;
    }
    while ( (__int64)v7 < (__int64)&unk_145087120 );
    __asm
    {
      vmovss  xmm3, dword ptr [r12+14h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_Printf(16, "Selected Spawnpoint %d with score %f.\n", (unsigned int)_R12->bestSpawnPointIdx, *(double *)&_XMM3);
    bestSpawnPointCriticalScore = _R12->bestSpawnPointCriticalScore;
    if ( bestSpawnPointCriticalScore != 1 )
    {
      v43 = "OK";
      if ( bestSpawnPointCriticalScore == 3 )
        v43 = "BAD";
      Com_Printf(16, "Selected Spawnpoint had critical score %s.\n", v43);
    }
    Com_Printf(16, "\n");
  }
}

/*
==============
G_PlayerSpawnPoints_EnableFrontlineAnchor
==============
*/
void G_PlayerSpawnPoints_EnableFrontlineAnchor(const vec3_t *direction, const vec3_t *pos)
{
  s_frontLineData.usingAnchor = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr cs:s_frontLineData.anchorDir, xmm0
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr cs:s_frontLineData.anchorDir+4, xmm1
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr cs:s_frontLineData.anchorDir+8, xmm0
    vmovss  xmm1, dword ptr [rdx]
    vmovss  dword ptr cs:s_frontLineData.anchorPos, xmm1
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  dword ptr cs:s_frontLineData.anchorPos+4, xmm0
    vmovss  xmm1, dword ptr [rdx+8]
    vmovss  dword ptr cs:s_frontLineData.anchorPos+8, xmm1
  }
}

/*
==============
G_PlayerSpawnPoints_EnableSingleOriginSpawn
==============
*/
void G_PlayerSpawnPoints_EnableSingleOriginSpawn(team_t team, const vec3_t *origin)
{
  float v5; 

  _R8 = s_spawnPoints.singleOriginSpawnPoint.record;
  __asm { vmovsd  xmm0, qword ptr [rdx] }
  v5 = origin->v[2];
  __asm { vmovsd  qword ptr [r8+10h], xmm0 }
  _R8->origin.v[2] = v5;
  _RAX = s_spawnPoints.singleOriginSpawnPoint.record;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos, xmm0
    vmovss  xmm1, dword ptr [rax+14h]
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos+4, xmm1
    vmovss  xmm0, dword ptr [rax+18h]
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos+8, xmm0
  }
  G_PlayerSpawnPoints_DropToGround(&s_spawnPoints.singleOriginSpawnPoint.groundPos);
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos
    vmovss  xmm1, dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos+4
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.finalGroundPos, xmm0
    vmovss  xmm0, dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.groundPos+8
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.finalGroundPos+8, xmm0
    vmovss  dword ptr cs:s_spawnPoints.singleOriginSpawnPoint.finalGroundPos+4, xmm1
  }
  if ( team == TEAM_MP_NUM_TEAMS )
    s_spawnPoints.singleOriginSpawnPoint.enabledFlags = -1;
  else
    s_spawnPoints.singleOriginSpawnPoint.enabledFlags |= 1 << team;
}

/*
==============
G_PlayerSpawnPoints_EntityIsAlive
==============
*/
bool G_PlayerSpawnPoints_EntityIsAlive(const gentity_s *const ent)
{
  entityType_s eType; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1345, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1346, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  eType = ent->s.eType;
  if ( ((eType - 1) & 0xFFEB) != 0 || eType == ET_ACTOR_CORPSE )
  {
    LODWORD(v4) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1347, ASSERT_TYPE_ASSERT, "( ( ( (ent->s.eType == ET_PLAYER) || (ent->s.eType == ET_AGENT) || (ent->s.eType == ET_INVISIBLE) ) ) )", "( ent->s.eType ) = %i", v4) )
      __debugbreak();
  }
  return ent->health > 0;
}

/*
==============
G_PlayerSpawnPoints_EntityIsSpawnViewer
==============
*/
bool G_PlayerSpawnPoints_EntityIsSpawnViewer(const gentity_s *const ent)
{
  gclient_s *client; 
  bool result; 

  result = 1;
  if ( !BG_IsCharacterEntity(&ent->s) )
  {
    if ( ent->s.eType != ET_INVISIBLE )
      return 0;
    client = ent->client;
    if ( !client || !client->useDuringSpawnSelectionWhileInvisible )
      return 0;
  }
  return result;
}

/*
==============
G_PlayerSpawnPoints_EntityIsViewerWhileInvisible
==============
*/
bool G_PlayerSpawnPoints_EntityIsViewerWhileInvisible(const gentity_s *const ent)
{
  gclient_s *client; 

  client = ent->client;
  return client && client->useDuringSpawnSelectionWhileInvisible;
}

/*
==============
G_PlayerSpawnPoints_EntityIsViewerWhileSpectator
==============
*/
bool G_PlayerSpawnPoints_EntityIsViewerWhileSpectator(const gentity_s *const ent)
{
  gclient_s *client; 

  client = ent->client;
  return client && client->useDuringSpawnSelectionWhileSpectator;
}

/*
==============
G_PlayerSpawnPoints_Evaluate_CriticalFactors
==============
*/
void G_PlayerSpawnPoints_Evaluate_CriticalFactors(spawnSelectionSpec *selectionSpec, spawnSelectionResults *results, spawnPointEvaluationData *sData)
{
  team_t spawningTeam; 
  const gentity_s *GEntity; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v10; 
  char v11; 
  unsigned __int8 v12; 
  int *p_csScoreReason; 
  CriticalFactorScore (__fastcall **p_func)(SpawnPointInfo *, const gentity_s *const, spawnPointEvaluationData *); 
  int v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  CriticalFactorScore v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 v21; 

  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_CriticalFactors");
  spawningTeam = selectionSpec->spawningTeam;
  GEntity = G_GetGEntity(selectionSpec->spawningPlayerEntNum);
  if ( selectionSpec->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v10 = spawnCount;
  if ( spawnCount > 0 )
  {
    v11 = spawningTeam;
    v12 = 1 << spawningTeam;
    v21 = 1 << v11;
    p_csScoreReason = (int *)&p_singleOriginSpawnPoint->scoreData.csScoreReason;
    do
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v12 & *(_BYTE *)(p_csScoreReason - 366)) != 0 )
      {
        *(p_csScoreReason - 1) = 1;
        p_func = &s_criticalFactorsTable[0].func;
        ++results->criticalFactors_numSpawnsPoints;
        v15 = 0;
        while ( 1 )
        {
          v16 = DVARBOOL_scr_simulateBadSpawns;
          if ( !DVARBOOL_scr_simulateBadSpawns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_simulateBadSpawns") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          if ( v16->current.enabled )
            break;
          v17 = DCONST_DVARBOOL_g_playerspawns_scrCriticalFactorEnabled;
          if ( !DCONST_DVARBOOL_g_playerspawns_scrCriticalFactorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_scrCriticalFactorEnabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          if ( v17->current.enabled || v15 != 7 )
          {
            v18 = EvalueSpawnCriticalFactor(*p_func, (SpawnPointInfo *)(p_csScoreReason - 378), GEntity, sData);
            if ( v18 == CS_BAD )
              break;
            if ( v18 == CS_OK && *(p_csScoreReason - 1) != 2 )
            {
              *(p_csScoreReason - 1) = 2;
              *p_csScoreReason = v15;
            }
          }
          ++v15;
          p_func += 2;
          if ( v15 >= 8 )
            goto LABEL_27;
        }
        *p_csScoreReason = v15;
        *(p_csScoreReason - 1) = 3;
LABEL_27:
        switch ( *(p_csScoreReason - 1) )
        {
          case 1:
            ++results->numGoodSpawns;
            break;
          case 2:
            ++results->numOkSpawns;
            if ( (unsigned int)*p_csScoreReason >= 8 )
            {
              LODWORD(v20) = 8;
              LODWORD(v19) = *p_csScoreReason;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2458, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(currSpawnPoint->scoreData.csScoreReason) ) < (unsigned)( NUM_CRITICAL_FACTORS )", "static_cast<int>(currSpawnPoint->scoreData.csScoreReason) doesn't index NUM_CRITICAL_FACTORS\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            ++results->okSpawnsHistogram[*p_csScoreReason];
            break;
          case 3:
            ++results->numBadSpawns;
            if ( (unsigned int)*p_csScoreReason >= 8 )
            {
              LODWORD(v20) = 8;
              LODWORD(v19) = *p_csScoreReason;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2468, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(currSpawnPoint->scoreData.csScoreReason) ) < (unsigned)( NUM_CRITICAL_FACTORS )", "static_cast<int>(currSpawnPoint->scoreData.csScoreReason) doesn't index NUM_CRITICAL_FACTORS\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            ++results->badSpawnsHistogram[*p_csScoreReason];
            break;
        }
        v12 = v21;
      }
      p_csScoreReason += 388;
      --v10;
    }
    while ( v10 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_Evaluate_FinalScores
==============
*/
void G_PlayerSpawnPoints_Evaluate_FinalScores(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults)
{
  spawnSelectionSpec *v5; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  int v8; 
  __int64 v9; 
  unsigned __int8 v12; 
  int v15; 
  bool v16; 
  bool v17; 
  bool v19; 
  bool v22; 
  __int64 v26; 
  __int64 v27; 

  _R14 = selectionResults;
  v5 = selectionSpec;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_FinalScores");
  if ( v5->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v8 = 0;
  v9 = spawnCount;
  if ( spawnCount > 0 )
  {
    _RSI = &p_singleOriginSpawnPoint->scoreData;
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovaps [rsp+88h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      v12 = 1 << v5->spawningTeam;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v12 & _RSI[-122].csScoreReason) != 0 && (_R14->numGoodSpawns <= 0 || (unsigned int)(_RSI->criticalScore - 2) > 1) && (_R14->numOkSpawns <= 0 || _RSI->criticalScore != CS_BAD) )
      {
        _RDI = s_weightsTable;
        _RBP = (char *)_RSI - (char *)&s_clusterData.clusterAssignment[188];
        v15 = 0;
        v16 = 1;
        v17 = 1;
        __asm { vmovaps xmm6, xmm7 }
        do
        {
          if ( !v16 )
          {
            LODWORD(v27) = 22;
            LODWORD(v26) = v15;
            v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v26, v27);
            v17 = !v19;
            if ( v19 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rdi]; weight
            vcomiss xmm1, xmm7
          }
          if ( !v17 )
          {
            __asm { vmovss  xmm0, dword ptr [rdi+rbp]; factorScore }
            G_GameInterface_CalcSpawnPointScore(*(const float *)&_XMM0, *(const float *)&_XMM1, v15);
            __asm { vaddss  xmm6, xmm6, xmm0 }
          }
          ++v15;
          ++_RDI;
          v16 = (unsigned int)v15 < 0x16;
          v17 = (unsigned int)v15 <= 0x16;
        }
        while ( v15 < 22 );
        __asm { vucomiss xmm6, dword ptr [rsi] }
        v5 = selectionSpec;
        if ( v15 != 22 )
        {
          v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2656, ASSERT_TYPE_ASSERT, "(spawnpointTotalScore == currSpawnPoint->scoreData.totalScore)", (const char *)&queryFormat, "spawnpointTotalScore == currSpawnPoint->scoreData.totalScore");
          v17 = !v22;
          if ( v22 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vcomiss xmm0, dword ptr [r14+14h]
        }
        if ( !v17 )
        {
          __asm { vmovss  dword ptr [r14+14h], xmm0 }
          _R14->bestSpawnPointCriticalScore = _RSI->criticalScore;
          _R14->bestSpawnPointIdx = v8;
        }
      }
      ++v8;
      _RSI = (SpawnPointScoreData *)((char *)_RSI + 1552);
      --v9;
    }
    while ( v9 );
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_48]
      vmovaps xmm6, [rsp+88h+var_38]
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_Evaluate_PreCalc
==============
*/
void G_PlayerSpawnPoints_Evaluate_PreCalc(spawnSelectionSpec *selectionSpec, spawnPointEvaluationData *sData)
{
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v6; 
  unsigned __int8 v7; 
  team_t spawningTeam; 
  scrContext_t *v9; 
  unsigned int v10; 

  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_PreCalc");
  if ( selectionSpec->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v6 = spawnCount;
  if ( spawnCount > 0 )
  {
    do
    {
      v7 = 1 << selectionSpec->spawningTeam;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v7 & p_singleOriginSpawnPoint->enabledFlags) != 0 )
      {
        G_PlayerSpawnPoints_UpdateDistanceData(p_singleOriginSpawnPoint, selectionSpec);
        G_PlayerSpawnPoints_UpdateSightData(p_singleOriginSpawnPoint, selectionSpec);
      }
      ++p_singleOriginSpawnPoint;
      --v6;
    }
    while ( v6 );
  }
  G_PlayerSpawnPoints_UpdatePlayerClusters(selectionSpec);
  G_PlayerSpawnPoints_UpdateMapLanes(selectionSpec);
  G_PlayerSpawnPoints_UpdateFrontline(selectionSpec);
  G_PlayerSpawnPoints_PrecacheScoringData(selectionSpec, sData);
  spawningTeam = selectionSpec->spawningTeam;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_ScriptPrecalc");
  v9 = ScriptContext_Server();
  Scr_AddSpawnTeam(v9, spawningTeam);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_data_mp.h", 82, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v10 = Scr_ExecThread(v9, GameScriptData::ms_gScriptData[2].riotshield_damaged, 1u);
  Scr_FreeThread(v9, v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_Evaluate_Reset
==============
*/
void G_PlayerSpawnPoints_Evaluate_Reset(spawnSelectionSpec *selectionSpec)
{
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v4; 
  SpawnPointDistanceInfo *v5; 
  char v6; 
  char v7; 
  bool v8; 

  if ( selectionSpec->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v4 = spawnCount;
  if ( spawnCount > 0 )
  {
    v5 = &p_singleOriginSpawnPoint->distanceData[1];
    do
    {
      v6 = 1 << selectionSpec->spawningTeam;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      v7 = v6 & LOBYTE(v5[-3].distSumSquared);
      v8 = v7 != 0;
      if ( v7 )
      {
        *(_QWORD *)&v5[88].distSumSquared = 0i64;
        memset_0(&v5[32], 0, 0x58ui64);
        memset_0(&v5[37].distSumSquaredCapped, 0, 0x32Cui64);
        *(_QWORD *)&v5[-2].distSumSquared = 0i64;
        *(_DWORD *)&v5[-2].totalPlayers = 0;
        memset_0(&v5[1], 0, 0x1F0ui64);
        *(_QWORD *)&v5[-1].minDistSquared = 0i64;
        *(_QWORD *)&v5[-1].distSumSquaredCapped = 0i64;
        v5[-1].minDistSquared = 3.4028235e38;
        *(_QWORD *)&v5->minDistSquared = 0i64;
        *(_QWORD *)&v5->distSumSquaredCapped = 0i64;
        v5->minDistSquared = 3.4028235e38;
        v5[90].totalPlayers = 0;
      }
      *(&v5[90].totalPlayers + 1) = v8;
      v5 += 97;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
G_PlayerSpawnPoints_Evaluate_ScoreFactors
==============
*/
void G_PlayerSpawnPoints_Evaluate_ScoreFactors(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults, spawnPointEvaluationData *sData)
{
  spawnSelectionResults *v6; 
  spawnSelectionSpec *v7; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v10; 
  unsigned __int8 v13; 
  float (__fastcall **p_func)(SpawnPointInfo *, const gentity_s *const, spawnPointEvaluationData *); 
  int v16; 
  bool v18; 
  bool v19; 
  bool v20; 
  const dvar_t *v22; 
  __int64 v27; 
  __int64 v28; 
  gentity_s *ent; 
  __int64 v35; 

  v6 = selectionResults;
  v7 = selectionSpec;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_ScoreFactors");
  ent = G_GetGEntity(v7->spawningPlayerEntNum);
  if ( v7->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v10 = spawnCount;
  v35 = spawnCount;
  if ( spawnCount > 0 )
  {
    _RBP = &p_singleOriginSpawnPoint->scoreData;
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm6
      vmovaps [rsp+0B8h+var_68], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      v13 = 1 << v7->spawningTeam;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v13 & _RBP[-122].csScoreReason) != 0 && (v6->numGoodSpawns <= 0 || (unsigned int)(_RBP->criticalScore - 2) > 1) && (v6->numOkSpawns <= 0 || _RBP->criticalScore != CS_BAD) )
      {
        p_func = &s_scoreFactorsTable[0].func;
        _RSI = s_weightsTable;
        v16 = 0;
        _R15 = (char *)_RBP - (char *)&s_clusterData.clusterAssignment[188];
        v18 = 1;
        v19 = 1;
        do
        {
          if ( !v18 )
          {
            LODWORD(v28) = 22;
            LODWORD(v27) = v16;
            v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v27, v28);
            v19 = !v20;
            if ( v20 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rsi]
            vcomiss xmm6, xmm7
          }
          if ( !v19 )
          {
            v22 = DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled;
            if ( !DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_scrScoreFactorEnabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v22);
            if ( v22->current.enabled || v16 != 21 )
            {
              *(double *)&_XMM0 = EvalueSpawnScoringFactor(*p_func, (SpawnPointInfo *)&_RBP[-126].csScoreReason, ent, sData);
              __asm
              {
                vmovaps xmm1, xmm6; weight
                vmovss  dword ptr [r15+rsi], xmm0
              }
              *(double *)&_XMM0 = G_GameInterface_CalcSpawnPointScore(*(const float *)&_XMM0, *(const float *)&_XMM1, v16);
              __asm
              {
                vaddss  xmm1, xmm0, dword ptr [rbp+0]
                vmovss  dword ptr [rbp+0], xmm1
              }
            }
          }
          ++v16;
          ++_RSI;
          p_func += 2;
          v18 = (unsigned int)v16 < 0x16;
          v19 = (unsigned int)v16 <= 0x16;
        }
        while ( v16 < 22 );
        v10 = v35;
        v6 = selectionResults;
      }
      v7 = selectionSpec;
      _RBP = (SpawnPointScoreData *)((char *)_RBP + 1552);
      v35 = --v10;
    }
    while ( v10 );
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_68]
      vmovaps xmm6, [rsp+0B8h+var_58]
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_FailedCritReason_GetString
==============
*/
const char *G_PlayerSpawnPoints_FailedCritReason_GetString(const int index)
{
  const char *result; 

  switch ( index )
  {
    case 0:
      result = "inf pts";
      break;
    case 1:
      result = "ttlos full";
      break;
    case 2:
      result = "ttlos crnr";
      break;
    case 3:
      result = "frntln";
      break;
    case 4:
      result = "enmy spwn";
      break;
    case 5:
      result = "near enmy";
      break;
    case 6:
      result = "telefrg";
      break;
    case 7:
      result = "script";
      break;
    default:
      result = "none";
      break;
  }
  return result;
}

/*
==============
G_PlayerSpawnPoints_FinalizeLastSpawnUsage
==============
*/
void G_PlayerSpawnPoints_FinalizeLastSpawnUsage(int spawnIdx, int usedByEntNum, team_t team)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  SpawnPointInfo *v6; 
  int spawnCount; 

  v3 = spawnIdx;
  v4 = team;
  v5 = usedByEntNum;
  if ( (unsigned int)spawnIdx >= s_spawnPoints.spawnCount )
  {
    spawnCount = s_spawnPoints.spawnCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", spawnIdx, spawnCount) )
      __debugbreak();
  }
  v6 = &s_spawnPoints.spawnPoints[v3];
  v6->lastSpawnTime = level.time;
  v6->lastSpawnTeam = v4;
  v6->lastSpawnEntityNum = v5;
  s_spawnGlobals.lastTeamSpawn[v4] = v3;
  if ( (unsigned int)(v5 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v5, "signed", v5) )
    __debugbreak();
  G_GameInterface_LogCharacterLastSpawn(v6, v5);
}

/*
==============
G_PlayerSpawnPoints_FindBestSpawnBucket
==============
*/
void G_PlayerSpawnPoints_FindBestSpawnBucket(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults)
{
  int numGoodSpawns; 
  spawnPointEvaluationData sData; 

  _RDI = selectionSpec;
  if ( !selectionSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2675, ASSERT_TYPE_ASSERT, "(selectionSpec)", (const char *)&queryFormat, "selectionSpec") )
    __debugbreak();
  if ( !selectionResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2676, ASSERT_TYPE_ASSERT, "(selectionResults)", (const char *)&queryFormat, "selectionResults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "FindBestSpawnBucket");
  _RDI->useTeams = s_spawnGlobals.usingTeams;
  _RDI->isGroundWar = s_spawnGlobals.isGroundWar;
  __asm
  {
    vmovss  xmm0, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyBadDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rdi+0Ch], xmm0
    vmovss  xmm1, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyOkDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rdi+10h], xmm1
  }
  G_PlayerSpawnPoints_Evaluate_Reset(_RDI);
  G_PlayerSpawnPoints_Evaluate_PreCalc(_RDI, &sData);
  G_PlayerSpawnPoints_Evaluate_CriticalFactors(_RDI, selectionResults, &sData);
  numGoodSpawns = selectionResults->numGoodSpawns;
  if ( numGoodSpawns || selectionResults->numOkSpawns )
    selectionResults->bestSpawnPointCriticalScore = 2 - (numGoodSpawns != 0);
  else
    selectionResults->bestSpawnPointCriticalScore = 3;
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_FindBestSpawnPoint
==============
*/
void G_PlayerSpawnPoints_FindBestSpawnPoint(spawnSelectionSpec *selectionSpec, spawnSelectionResults *selectionResults)
{
  team_t spawningTeam; 
  const gentity_s *GEntity; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v10; 
  unsigned __int8 v11; 
  bool *p_ranTelefrag; 
  int lastBadSpawnTime; 
  spawnPointEvaluationData sData; 

  _RBX = selectionResults;
  _RSI = selectionSpec;
  if ( !selectionSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2708, ASSERT_TYPE_ASSERT, "(selectionSpec)", (const char *)&queryFormat, "selectionSpec") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2709, ASSERT_TYPE_ASSERT, "(selectionResults)", (const char *)&queryFormat, "selectionResults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns");
  _RSI->useTeams = s_spawnGlobals.usingTeams;
  _RSI->isGroundWar = s_spawnGlobals.isGroundWar;
  __asm
  {
    vmovss  xmm0, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyBadDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rsi+0Ch], xmm0
    vmovss  xmm1, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyOkDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rsi+10h], xmm1
  }
  G_PlayerSpawnPoints_Evaluate_Reset(_RSI);
  G_PlayerSpawnPoints_Evaluate_PreCalc(_RSI, &sData);
  G_PlayerSpawnPoints_Evaluate_CriticalFactors(_RSI, _RBX, &sData);
  if ( !_RBX->numGoodSpawns && !_RBX->numOkSpawns )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_AllBadCriticalFactors");
    spawningTeam = _RSI->spawningTeam;
    GEntity = G_GetGEntity(_RSI->spawningPlayerEntNum);
    if ( _RSI->singleOriginMode )
    {
      p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
      spawnCount = 1;
    }
    else
    {
      p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
      spawnCount = s_spawnPoints.spawnCount;
    }
    v10 = spawnCount;
    if ( spawnCount > 0 )
    {
      v11 = 1 << spawningTeam;
      p_ranTelefrag = &p_singleOriginSpawnPoint->ranTelefrag;
      do
      {
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
          __debugbreak();
        if ( (v11 & *(p_ranTelefrag - 1496)) != 0 && !*p_ranTelefrag )
          EvalueSpawnCriticalFactor(avoidTelefrag, (SpawnPointInfo *)(p_ranTelefrag - 1544), GEntity, &sData);
        p_ranTelefrag += 1552;
        --v10;
      }
      while ( v10 );
    }
    Sys_ProfEndNamedEvent();
  }
  G_PlayerSpawnPoints_Evaluate_ScoreFactors(_RSI, _RBX, &sData);
  G_PlayerSpawnPoints_Evaluate_FinalScores(_RSI, _RBX);
  lastBadSpawnTime = s_spawnGlobals.lastBadSpawnTime;
  if ( _RBX->bestSpawnPointCriticalScore == 3 )
    lastBadSpawnTime = level.time;
  s_spawnGlobals.lastBadSpawnTime = lastBadSpawnTime;
  G_PlayerSpawnPoints_DumpSelectionResults(_RSI, _RBX);
  if ( s_frontLineData.enabled )
  {
    _RBX->frontlineEnabled = s_frontLineData.enabled;
    _RBX->frontlineUsed = _RSI->respectFrontline;
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_frontLineData.midpoint
      vmovss  dword ptr [rbx+60h], xmm0
      vmovss  xmm1, dword ptr cs:s_frontLineData.midpoint+4
      vmovss  dword ptr [rbx+64h], xmm1
      vmovss  xmm0, dword ptr cs:s_frontLineData.midpoint+8
      vmovss  dword ptr [rbx+68h], xmm0
      vmovss  xmm1, dword ptr cs:s_frontLineData.frontlineForwardDir
      vmovss  dword ptr [rbx+6Ch], xmm1
      vmovss  xmm0, dword ptr cs:s_frontLineData.frontlineForwardDir+4
      vmovss  dword ptr [rbx+70h], xmm0
      vmovss  xmm1, dword ptr cs:s_frontLineData.frontlineForwardDir+8
      vmovss  dword ptr [rbx+74h], xmm1
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionInfo.spawningPlayerEntNum, xmm0; playerSpawn_Globals s_spawnGlobals
    vmovsd  xmm1, qword ptr [rsi+10h]
    vmovsd  qword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionInfo.groundWarNearbyEnemyOkDist, xmm1; playerSpawn_Globals s_spawnGlobals
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.criticalFactors_numSpawnsPoints, ymm0; playerSpawn_Globals s_spawnGlobals
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.badSpawnsHistogram+4, ymm1; playerSpawn_Globals s_spawnGlobals
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.okSpawnsHistogram+4, ymm0; playerSpawn_Globals s_spawnGlobals
    vmovups xmm1, xmmword ptr [rbx+60h]
    vmovups xmmword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.frontlinePos, xmm1; playerSpawn_Globals s_spawnGlobals
    vmovsd  xmm0, qword ptr [rbx+70h]
    vmovsd  qword ptr cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.lastSelectionResults.frontlineDir+4, xmm0; playerSpawn_Globals s_spawnGlobals
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_FreeMemory
==============
*/
void G_PlayerSpawnPoints_FreeMemory(void)
{
  s_spawnPoints.spawnPoints = NULL;
  *(_QWORD *)&s_spawnPoints.spawnCount = 0i64;
  s_spawnPoints.scriptedSpawnPointRecords = NULL;
  s_spawnPoints.scriptedSpawnPointRecordCount = 0;
}

/*
==============
G_PlayerSpawnPoints_GetClusterData
==============
*/
ClusterData *G_PlayerSpawnPoints_GetClusterData()
{
  return &s_clusterData;
}

/*
==============
G_PlayerSpawnPoints_GetCount
==============
*/
__int64 G_PlayerSpawnPoints_GetCount()
{
  return (unsigned int)s_spawnPoints.spawnCount;
}

/*
==============
G_PlayerSpawnPoints_GetFactorForName
==============
*/
__int64 G_PlayerSpawnPoints_GetFactorForName(const char *name)
{
  SpawnFactorEntry *v2; 
  unsigned int v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  v2 = s_scoreFactorsTable;
  v3 = 0;
  do
  {
    v4 = v2->name;
    v5 = 0x7FFFFFFFi64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(name - v4);
    while ( 1 )
    {
      v7 = v4[(_QWORD)v6];
      v8 = v5;
      v9 = *v4++;
      --v5;
      if ( !v8 )
        return v3;
      if ( v7 != v9 )
        break;
      if ( !v7 )
        return v3;
    }
    ++v3;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)s_criticalFactorsTable );
  Com_PrintWarning(16, "Failed to find spawn factor %s.\n", name);
  return 22i64;
}

/*
==============
G_PlayerSpawnPoints_GetFactorWeight
==============
*/
float G_PlayerSpawnPoints_GetFactorWeight(SpawnFactors factor)
{
  int v6; 

  _RBX = factor;
  if ( (unsigned int)factor >= NUM_SPAWN_FACTORS )
  {
    v6 = 22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", factor, v6) )
      __debugbreak();
  }
  _RCX = s_weightsTable;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
G_PlayerSpawnPoints_GetGroundWarSpawnVariables
==============
*/
void G_PlayerSpawnPoints_GetGroundWarSpawnVariables(float *nearbyEnemyBadDist, float *nearbyEnemyOkDist)
{
  __asm
  {
    vmovss  xmm0, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyBadDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rcx], xmm0
    vmovss  xmm1, cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyOkDist; playerSpawn_Globals s_spawnGlobals
    vmovss  dword ptr [rdx], xmm1
  }
}

/*
==============
G_PlayerSpawnPoints_GetInfluencePointData
==============
*/
SpawnInfluencePointCache *G_PlayerSpawnPoints_GetInfluencePointData()
{
  return &s_influencePoints;
}

/*
==============
G_PlayerSpawnPoints_GetInfluencePointPosition
==============
*/
void G_PlayerSpawnPoints_GetInfluencePointPosition(int index, vec3_t *outPos)
{
  __int64 v2; 
  gentity_s *v6; 

  v2 = index;
  _RDI = outPos;
  if ( (unsigned int)index >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, 256) )
    __debugbreak();
  _RBX = v2;
  _R14 = &s_influencePoints;
  if ( !s_influencePoints.influencePoints[_RBX].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1219, ASSERT_TYPE_ASSERT, "(influencePt->inUse)", (const char *)&queryFormat, "influencePt->inUse") )
    __debugbreak();
  if ( EntHandle::isDefined(&s_influencePoints.influencePoints[_RBX].linkToEnt) )
  {
    v6 = EntHandle::ent(&s_influencePoints.influencePoints[_RBX].linkToEnt);
    *_RDI = v6->r.currentOrigin;
    s_influencePoints.influencePoints[_RBX].pos = v6->r.currentOrigin;
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [r14+rbx*8]
      vmovsd  qword ptr [rdi], xmm0
    }
    _RDI->v[2] = s_influencePoints.influencePoints[_RBX].pos.v[2];
  }
}

/*
==============
G_PlayerSpawnPoints_GetIsGroundWar
==============
*/
_BOOL8 G_PlayerSpawnPoints_GetIsGroundWar()
{
  return s_spawnGlobals.isGroundWar;
}

/*
==============
G_PlayerSpawnPoints_GetLastAttackerEntnum
==============
*/
__int64 G_PlayerSpawnPoints_GetLastAttackerEntnum(const gentity_s *const playerEnt)
{
  __int64 v3; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 992, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( playerEnt->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v3) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "playerEnt->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v3, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  return (unsigned int)s_spawnCharacters.characterEntries[playerEnt->s.number].lastAttackerEntNum;
}

/*
==============
G_PlayerSpawnPoints_GetLastAttackerLoc
==============
*/
void G_PlayerSpawnPoints_GetLastAttackerLoc(const gentity_s *const playerEnt, bool useCurrentLoc, vec3_t *outLoc)
{
  int lastAttackerEntNum; 
  gentity_s *GEntity; 
  float v8; 
  __int64 number; 
  __int64 v10; 
  __int64 v11; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 963, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( playerEnt->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v10) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 964, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "playerEnt->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( playerEnt->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v11) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v10) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "playerEnt->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  lastAttackerEntNum = s_spawnCharacters.characterEntries[playerEnt->s.number].lastAttackerEntNum;
  *(_QWORD *)outLoc->v = 0i64;
  outLoc->v[2] = 0.0;
  if ( !useCurrentLoc || lastAttackerEntNum == 2047 )
  {
    number = playerEnt->s.number;
    outLoc->v[0] = s_spawnCharacters.characterEntries[playerEnt->s.number].lastAttackerLoc.v[0];
    outLoc->v[1] = s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[1];
    v8 = s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[2];
  }
  else
  {
    GEntity = G_GetGEntity(lastAttackerEntNum);
    if ( !G_PlayerSpawnPoints_EntityIsAlive(GEntity) )
    {
      Com_PrintWarning(16, "G_PlayerSpawnPoints_GetLastAttackerLoc - trying to get the current location of a dead player, using ( 0, 0, 0 ).\n");
      return;
    }
    outLoc->v[0] = GEntity->r.currentOrigin.v[0];
    outLoc->v[1] = GEntity->r.currentOrigin.v[1];
    v8 = GEntity->r.currentOrigin.v[2];
  }
  outLoc->v[2] = v8;
}

/*
==============
G_PlayerSpawnPoints_GetLastDeathLoc
==============
*/
void G_PlayerSpawnPoints_GetLastDeathLoc(const gentity_s *const playerEnt, vec3_t *outLoc)
{
  __int64 number; 
  __int64 v5; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1004, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( playerEnt->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1005, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "playerEnt->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v5, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  number = playerEnt->s.number;
  outLoc->v[0] = s_spawnCharacters.characterEntries[playerEnt->s.number].lastDeathLoc.v[0];
  outLoc->v[1] = s_spawnCharacters.characterEntries[number].lastDeathLoc.v[1];
  outLoc->v[2] = s_spawnCharacters.characterEntries[number].lastDeathLoc.v[2];
}

/*
==============
G_PlayerSpawnPoints_GetLastDeathTime
==============
*/
__int64 G_PlayerSpawnPoints_GetLastDeathTime(const gentity_s *const playerEnt)
{
  __int64 v3; 

  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 952, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( playerEnt->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v3) = playerEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 953, ASSERT_TYPE_ASSERT, "(unsigned)( playerEnt->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "playerEnt->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v3, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  return (unsigned int)s_spawnCharacters.characterEntries[playerEnt->s.number].lastDeathTime;
}

/*
==============
G_PlayerSpawnPoints_GetLastTeamSpawnIndex
==============
*/
__int64 G_PlayerSpawnPoints_GetLastTeamSpawnIndex(team_t team)
{
  return (unsigned int)s_spawnGlobals.lastTeamSpawn[team];
}

/*
==============
G_PlayerSpawnPoints_GetMapLanesData
==============
*/
MapLanesData *G_PlayerSpawnPoints_GetMapLanesData()
{
  return &s_mapLanes;
}

/*
==============
G_PlayerSpawnPoints_GetNearbyNodeForIndex
==============
*/
pathnode_t *G_PlayerSpawnPoints_GetNearbyNodeForIndex(gentity_s *ent, int index)
{
  __int64 v2; 
  __int64 number; 
  SpawnViewerCacheEntry *v5; 
  __int64 v7; 
  __int64 v8; 

  v2 = index;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 218, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v7) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cacheIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v7, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v8) = 248;
    LODWORD(v7) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_spawnViewers.characterEntries ) ) + 0 ) )", "cacheIndex doesn't index ARRAY_COUNT( s_spawnViewers.characterEntries )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &s_spawnViewers.characterEntries[number];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 226, ASSERT_TYPE_ASSERT, "(viewerEntry)", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( (unsigned int)v2 >= v5->nearbyPathNodeCount )
  {
    LODWORD(v8) = v5->nearbyPathNodeCount;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( viewerEntry->nearbyPathNodeCount )", "index doesn't index viewerEntry->nearbyPathNodeCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return Path_ConvertIndexToNode(v5->nearbyPathNodes[v2]);
}

/*
==============
G_PlayerSpawnPoints_GetNearbyNodeIndexForIndex
==============
*/
__int64 G_PlayerSpawnPoints_GetNearbyNodeIndexForIndex(gentity_s *ent, int index)
{
  __int64 v2; 
  __int64 number; 
  SpawnViewerCacheEntry *v5; 
  __int64 v7; 
  __int64 v8; 

  v2 = index;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 202, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v7) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cacheIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v7, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v8) = 248;
    LODWORD(v7) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_spawnViewers.characterEntries ) ) + 0 ) )", "cacheIndex doesn't index ARRAY_COUNT( s_spawnViewers.characterEntries )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &s_spawnViewers.characterEntries[number];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 210, ASSERT_TYPE_ASSERT, "(viewerEntry)", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( (unsigned int)v2 >= v5->nearbyPathNodeCount )
  {
    LODWORD(v8) = v5->nearbyPathNodeCount;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( viewerEntry->nearbyPathNodeCount )", "index doesn't index viewerEntry->nearbyPathNodeCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return v5->nearbyPathNodes[v2];
}

/*
==============
G_PlayerSpawnPoints_GetRelativeSpawnTeam
==============
*/
__int64 G_PlayerSpawnPoints_GetRelativeSpawnTeam(const gentity_s *const ent, team_t spawningTeam)
{
  team_t v4; 
  team_t v5; 
  const char *v6; 
  int v7; 
  const char *v8; 

  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v4 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, ent);
  v5 = v4;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 201) > 1 )
      return !s_spawnGlobals.usingTeams || v5 != spawningTeam;
    v6 = "entTeam != team_t::TEAM_SPECTATOR && entTeam != team_t::TEAM_FOLLOWER";
    v7 = 1091;
    v8 = "(entTeam != team_t::TEAM_SPECTATOR && entTeam != team_t::TEAM_FOLLOWER)";
  }
  else
  {
    if ( !s_spawnGlobals.usingTeams )
      return 1i64;
    v6 = "!s_spawnGlobals.usingTeams";
    v7 = 1088;
    v8 = "(!s_spawnGlobals.usingTeams)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
    __debugbreak();
  return !s_spawnGlobals.usingTeams || v5 != spawningTeam;
}

/*
==============
G_PlayerSpawnPoints_GetSpawnFactorName
==============
*/
const char *G_PlayerSpawnPoints_GetSpawnFactorName(SpawnFactors factor)
{
  return s_scoreFactorsTable[factor].name;
}

/*
==============
G_PlayerSpawnPoints_GetSpawnInfo
==============
*/
SpawnPointInfo *G_PlayerSpawnPoints_GetSpawnInfo(int index)
{
  __int64 v1; 
  int spawnCount; 

  v1 = index;
  if ( (unsigned int)index >= s_spawnPoints.spawnCount )
  {
    spawnCount = s_spawnPoints.spawnCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", index, spawnCount) )
      __debugbreak();
  }
  return &s_spawnPoints.spawnPoints[v1];
}

/*
==============
G_PlayerSpawnPoints_GetSpawnPointCount
==============
*/
__int64 G_PlayerSpawnPoints_GetSpawnPointCount()
{
  return (unsigned int)s_spawnPoints.spawnCount;
}

/*
==============
G_PlayerSpawnPoints_GetUsingTeams
==============
*/
_BOOL8 G_PlayerSpawnPoints_GetUsingTeams()
{
  return s_spawnGlobals.usingTeams;
}

/*
==============
G_PlayerSpawnPoints_GetViewerNumNearbyNodes
==============
*/
__int64 G_PlayerSpawnPoints_GetViewerNumNearbyNodes(gentity_s *ent)
{
  __int64 number; 
  SpawnViewerCacheEntry *v3; 
  __int64 v5; 
  __int64 v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 186, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cacheIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v5, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v6) = 248;
    LODWORD(v5) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_spawnViewers.characterEntries ) ) + 0 ) )", "cacheIndex doesn't index ARRAY_COUNT( s_spawnViewers.characterEntries )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v3 = &s_spawnViewers.characterEntries[number];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 194, ASSERT_TYPE_ASSERT, "(viewerEntry)", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  return v3->nearbyPathNodeCount;
}

/*
==============
G_PlayerSpawnPoints_Init
==============
*/
void G_PlayerSpawnPoints_Init(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  gentity_s *gentities; 
  unsigned int v4; 
  int *lastTeamSpawn; 
  __int64 v6; 
  EntHandle *p_ownerEnt; 
  __int64 v8; 
  bool *p_ignoreInSpawnSelection; 
  __int64 v10; 
  __int64 v11; 

  *(_QWORD *)&s_mapLanes.initialized = 0i64;
  v0 = 0;
  *(_QWORD *)&s_mapLanes.laneVolumeEntNums[1] = 0i64;
  v1 = 0i64;
  *(_QWORD *)&s_mapLanes.laneVolumeEntNums[3] = 0i64;
  v2 = 0i64;
  *(_QWORD *)&s_mapLanes.laneVolumeEntNums[5] = 0i64;
  *(_QWORD *)&s_mapLanes.laneVolumeEntNums[7] = 0i64;
  *(_DWORD *)s_mapLanes.occupiedLanes = 0;
  do
  {
    gentities = level.gentities;
    if ( (unsigned int)v0 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v2].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v1] && (gentities[v2].classname == scr_const.trigger_multiple_mp_spawn_lane || gentities[v2].script_classname == scr_const.trigger_multiple_mp_spawn_lane) )
    {
      if ( s_mapLanes.numLaneVolumes >= 8 )
        Com_PrintWarning(16, "Ignoring a Spawn Lane, we are at max capacity of %d", 8i64);
      else
        s_mapLanes.laneVolumeEntNums[s_mapLanes.numLaneVolumes++] = gentities[v2].s.number;
    }
    ++v0;
    ++v1;
    ++v2;
  }
  while ( v0 < 2048 );
  v4 = 0;
  if ( s_mapLanes.numLaneVolumes > 0 )
  {
    s_mapLanes.initialized = 1;
    Com_Printf(16, "Spawn System found %d spawn lanes in the map.", (unsigned int)s_mapLanes.numLaneVolumes);
  }
  s_spawnGlobals.usingTeams = 1;
  lastTeamSpawn = s_spawnGlobals.lastTeamSpawn;
  s_spawnGlobals.lastBadSpawnTime = 0;
  v6 = 12i64;
  do
  {
    *(_QWORD *)lastTeamSpawn = -1i64;
    *((_QWORD *)lastTeamSpawn + 1) = -1i64;
    *((_QWORD *)lastTeamSpawn + 2) = -1i64;
    lastTeamSpawn += 16;
    *((_QWORD *)lastTeamSpawn - 5) = -1i64;
    *((_QWORD *)lastTeamSpawn - 4) = -1i64;
    *((_QWORD *)lastTeamSpawn - 3) = -1i64;
    *((_QWORD *)lastTeamSpawn - 2) = -1i64;
    *((_QWORD *)lastTeamSpawn - 1) = -1i64;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)lastTeamSpawn = -1i64;
  *((_QWORD *)lastTeamSpawn + 1) = -1i64;
  *((_QWORD *)lastTeamSpawn + 2) = -1i64;
  *((_QWORD *)lastTeamSpawn + 3) = -1i64;
  *((_QWORD *)lastTeamSpawn + 4) = -1i64;
  lastTeamSpawn[10] = -1;
  G_PlayerSpawnPoints_InitSpawnPoints();
  memset_0(&s_influencePoints, 0, sizeof(s_influencePoints));
  p_ownerEnt = &s_influencePoints.influencePoints[0].ownerEnt;
  v8 = 256i64;
  do
  {
    LOBYTE(p_ownerEnt[4].number) = 0;
    EntHandle::setEnt(p_ownerEnt, NULL);
    EntHandle::setEnt(p_ownerEnt + 3, NULL);
    p_ownerEnt += 10;
    --v8;
  }
  while ( v8 );
  memset_0(&s_spawnViewers, 0, sizeof(s_spawnViewers));
  s_spawnViewers.nonCharacterEntries[0].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[1].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[2].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[3].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[4].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[5].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[6].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[7].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[8].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[9].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[10].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[11].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[12].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[13].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[14].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[15].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[16].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[17].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[18].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[19].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[20].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[21].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[22].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[23].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[24].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[25].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[26].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[27].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[28].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[29].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[30].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[31].entNum = 2047;
  memset_0(&s_spawnCharacters, 0, sizeof(s_spawnCharacters));
  p_ignoreInSpawnSelection = &s_spawnCharacters.characterEntries[0].ignoreInSpawnSelection;
  do
  {
    ++v4;
    *((_DWORD *)p_ignoreInSpawnSelection - 7) = 2047;
    *p_ignoreInSpawnSelection = 0;
    p_ignoreInSpawnSelection += 36;
  }
  while ( v4 < 0xF8 );
  memset_0(s_weightsTable, 0, sizeof(s_weightsTable));
}

/*
==============
G_PlayerSpawnPoints_InitAlternatePositions
==============
*/
void G_PlayerSpawnPoints_InitAlternatePositions(SpawnPointInfo *info)
{
  int v15; 
  char v50; 
  char v66; 
  float v92; 
  vec3_t start; 
  vec3_t end; 
  vec3_t right; 
  trace_t results; 
  char vars0; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmmword ptr [r11-78h], xmm12
    vmovaps xmmword ptr [r11-88h], xmm13
    vmovaps xmmword ptr [r11-98h], xmm14
    vmovss  xmm7, cs:__real@42340000
    vmovss  xmm12, cs:__real@41900000
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm14, cs:__real@42700000
    vmovaps xmmword ptr [r11-18h], xmm6
  }
  v15 = 0;
  __asm { vmovaps xmmword ptr [r11-38h], xmm8 }
  _RDI = info;
  info->alternateGroundPositionsCount = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm9 }
  do
  {
    AngleVectors(&_RDI->record->angles, NULL, &right, NULL);
    _RAX = _RDI->record;
    if ( v15 )
    {
      __asm
      {
        vmulss  xmm2, xmm7, dword ptr [rsp+170h+right]
        vmovss  xmm1, dword ptr [rax+10h]
        vmulss  xmm3, xmm7, dword ptr [rsp+170h+right+4]
        vsubss  xmm6, xmm1, xmm2
        vmovss  xmm1, dword ptr [rax+14h]
        vmulss  xmm2, xmm7, dword ptr [rsp+170h+right+8]
        vsubss  xmm8, xmm1, xmm3
        vmovss  xmm1, dword ptr [rax+18h]
        vsubss  xmm9, xmm1, xmm2
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+170h+right]
        vmulss  xmm0, xmm7, dword ptr [rsp+170h+right+4]
        vmulss  xmm2, xmm7, dword ptr [rsp+170h+right+8]
        vaddss  xmm6, xmm1, dword ptr [rax+10h]
        vaddss  xmm8, xmm0, dword ptr [rax+14h]
        vaddss  xmm9, xmm2, dword ptr [rax+18h]
      }
    }
    __asm
    {
      vmovsd  xmm0, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+170h+var_140], xmm0
      vmovss  xmm1, [rsp+170h+var_13C]
    }
    v92 = _RAX->origin.v[2];
    __asm
    {
      vaddss  xmm2, xmm12, dword ptr [rsp+170h+var_138]
      vmovsd  qword ptr [rsp+170h+start], xmm0
      vmovss  xmm0, [rsp+170h+var_140]
    }
    start.v[2] = v92;
    __asm
    {
      vmovss  dword ptr [rsp+170h+end], xmm0
      vmovss  dword ptr [rsp+170h+end+4], xmm1
      vmovss  dword ptr [rsp+170h+end+8], xmm2
    }
    G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
    __asm
    {
      vmovss  xmm10, [rsp+170h+results.fraction]
      vmulss  xmm11, xmm10, xmm12
    }
    if ( !results.startsolid && !results.allsolid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+170h+end]
        vsubss  xmm1, xmm0, dword ptr [rsp+170h+start]
        vmovss  xmm0, dword ptr [rsp+170h+end+4]
        vmulss  xmm2, xmm1, xmm10
        vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+4]
        vaddss  xmm3, xmm2, dword ptr [rsp+170h+start]
        vmovss  xmm0, dword ptr [rsp+170h+end+8]
        vmulss  xmm2, xmm1, xmm10
        vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+8]
        vmovss  dword ptr [rsp+170h+start], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+170h+start+4]
        vmulss  xmm2, xmm1, xmm10
        vmovss  dword ptr [rsp+170h+start+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+170h+start+8]
        vaddss  xmm0, xmm9, xmm11
        vmovss  dword ptr [rsp+170h+start+8], xmm3
        vmovss  dword ptr [rsp+170h+end], xmm6
        vmovss  dword ptr [rsp+170h+end+4], xmm8
        vmovss  dword ptr [rsp+170h+end+8], xmm0
      }
      G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
      __asm
      {
        vmovss  xmm8, [rsp+170h+results.fraction]
        vcomiss xmm8, xmm13
      }
      if ( !v50 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+170h+start]
          vmovss  xmm0, dword ptr [rsp+170h+end+4]
          vmulss  xmm2, xmm1, xmm8
          vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+4]
          vaddss  xmm6, xmm2, dword ptr [rsp+170h+start]
          vmovss  xmm0, dword ptr [rsp+170h+end+8]
          vmulss  xmm2, xmm1, xmm8
          vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+8]
          vaddss  xmm5, xmm2, dword ptr [rsp+170h+start+4]
          vmulss  xmm2, xmm1, xmm8
          vaddss  xmm4, xmm2, dword ptr [rsp+170h+start+8]
          vaddss  xmm0, xmm11, xmm14
          vsubss  xmm1, xmm4, xmm0
          vmovss  dword ptr [rsp+170h+end+8], xmm1
          vmovss  dword ptr [rsp+170h+start], xmm6
          vmovss  dword ptr [rsp+170h+start+4], xmm5
          vmovss  dword ptr [rsp+170h+start+8], xmm4
          vmovss  dword ptr [rsp+170h+end], xmm6
          vmovss  dword ptr [rsp+170h+end+4], xmm5
        }
        G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
        __asm
        {
          vmovss  xmm8, [rsp+170h+results.fraction]
          vucomiss xmm8, xmm13
        }
        if ( !v66 && !results.startsolid && !results.allsolid )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+170h+end]
            vsubss  xmm1, xmm0, dword ptr [rsp+170h+start]
            vmovss  xmm0, dword ptr [rsp+170h+end+4]
            vmulss  xmm2, xmm1, xmm8
            vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+4]
            vaddss  xmm6, xmm2, dword ptr [rsp+170h+start]
            vmovss  xmm0, dword ptr [rsp+170h+end+8]
            vmulss  xmm2, xmm1, xmm8
            vsubss  xmm1, xmm0, dword ptr [rsp+170h+start+8]
            vaddss  xmm5, xmm2, dword ptr [rsp+170h+start+4]
          }
          _RCX = 3i64 * _RDI->alternateGroundPositionsCount + 6;
          __asm
          {
            vmulss  xmm2, xmm1, xmm8
            vaddss  xmm3, xmm2, dword ptr [rsp+170h+start+8]
            vunpcklps xmm0, xmm6, xmm5
            vmovsd  qword ptr [rdi+rcx*4], xmm0
            vmovss  dword ptr [rsp+170h+start+8], xmm3
          }
          _RDI->groundPos.v[_RCX] = start.v[2];
          ++_RDI->alternateGroundPositionsCount;
        }
      }
    }
    ++v15;
  }
  while ( v15 < 2 );
  __asm
  {
    vmovaps xmm9, [rsp+170h+var_48+8]
    vmovaps xmm8, xmmword ptr [rsp+170h+var_38+8]
    vmovaps xmm6, xmmword ptr [rsp+170h+var_18+8]
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
G_PlayerSpawnPoints_InitFactorWeights
==============
*/
void G_PlayerSpawnPoints_InitFactorWeights(void)
{
  memset_0(s_weightsTable, 0, sizeof(s_weightsTable));
}

/*
==============
G_PlayerSpawnPoints_InitSpawnGlobals
==============
*/
void G_PlayerSpawnPoints_InitSpawnGlobals(void)
{
  int *lastTeamSpawn; 
  __int64 v1; 

  s_spawnGlobals.usingTeams = 1;
  lastTeamSpawn = s_spawnGlobals.lastTeamSpawn;
  s_spawnGlobals.lastBadSpawnTime = 0;
  v1 = 12i64;
  do
  {
    *(_QWORD *)lastTeamSpawn = -1i64;
    *((_QWORD *)lastTeamSpawn + 1) = -1i64;
    *((_QWORD *)lastTeamSpawn + 2) = -1i64;
    lastTeamSpawn += 16;
    *((_QWORD *)lastTeamSpawn - 5) = -1i64;
    *((_QWORD *)lastTeamSpawn - 4) = -1i64;
    *((_QWORD *)lastTeamSpawn - 3) = -1i64;
    *((_QWORD *)lastTeamSpawn - 2) = -1i64;
    *((_QWORD *)lastTeamSpawn - 1) = -1i64;
    --v1;
  }
  while ( v1 );
  *(_QWORD *)lastTeamSpawn = -1i64;
  *((_QWORD *)lastTeamSpawn + 1) = -1i64;
  *((_QWORD *)lastTeamSpawn + 2) = -1i64;
  *((_QWORD *)lastTeamSpawn + 3) = -1i64;
  *((_QWORD *)lastTeamSpawn + 4) = -1i64;
  lastTeamSpawn[10] = -1;
}

/*
==============
G_PlayerSpawnPoints_InitSpawnInfluencePoints
==============
*/
void G_PlayerSpawnPoints_InitSpawnInfluencePoints(void)
{
  EntHandle *p_ownerEnt; 
  __int64 v1; 

  memset_0(&s_influencePoints, 0, sizeof(s_influencePoints));
  p_ownerEnt = &s_influencePoints.influencePoints[0].ownerEnt;
  v1 = 256i64;
  do
  {
    LOBYTE(p_ownerEnt[4].number) = 0;
    EntHandle::setEnt(p_ownerEnt, NULL);
    EntHandle::setEnt(p_ownerEnt + 3, NULL);
    p_ownerEnt += 10;
    --v1;
  }
  while ( v1 );
}

/*
==============
G_PlayerSpawnPoints_InitSpawnPointInfo
==============
*/
void G_PlayerSpawnPoints_InitSpawnPointInfo(SpawnPointInfo *info)
{
  const char *v5; 
  int v6; 
  int *laneVolumeEntNums; 
  __int64 v8; 
  const gentity_s *v9; 
  unsigned int Instance; 
  __int64 v11; 
  __int64 v12; 

  _RCX = info->record;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx+1Ch]
  }
  v5 = vtos(&_RCX->origin);
  Com_PrintWarning(16, "Spawnpoint at pos %s has bad angles, player will spawn tilted, please fix, only yaw should be adjusted for spawn point placement.\n.", v5);
  G_PlayerSpawnPoints_InitAlternatePositions(info);
  info->groundPos = info->record->origin;
  G_PlayerSpawnPoints_DropToGround(&info->groundPos);
  info->finalGroundPos = info->groundPos;
  G_PlayerSpawnPoints_CacheNearbyPathNodes(info);
  v6 = 0;
  if ( s_mapLanes.numLaneVolumes > 0 )
  {
    laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
    do
    {
      v8 = *laneVolumeEntNums;
      v9 = &level.gentities[v8];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v12) = 2048;
        LODWORD(v11) = *laneVolumeEntNums;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 715, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntityIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntityIdx )") )
        __debugbreak();
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v9);
      if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &info->record->origin, Instance, v9) )
        info->mapLanes |= 1 << v6;
      ++v6;
      ++laneVolumeEntNums;
    }
    while ( v6 < s_mapLanes.numLaneVolumes );
  }
  *(_QWORD *)&info->scoreData.totalScore = 0i64;
  memset_0(info->factorScores, 0, 0x384ui64);
  *(_QWORD *)&info->enemySightData.maxSightValue = 0i64;
  *(_DWORD *)&info->enemySightData.fullSights = 0;
}

/*
==============
G_PlayerSpawnPoints_InitSpawnPoints
==============
*/

void __fastcall G_PlayerSpawnPoints_InitSpawnPoints(double _XMM0_8, double _XMM1_8)
{
  MapEnts *mapEnts; 
  int spawnCount; 
  signed int spawnsCount; 
  signed int v9; 
  __int64 v10; 
  unsigned int v11; 
  SpawnPointInfo *v12; 
  SpawnPointEntityRecord *spawns; 
  __int64 v17; 
  __int64 v18; 
  float v19; 
  float v20; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
  }
  mapEnts = cm.mapEnts;
  __asm
  {
    vmovss  dword ptr cs:s_frontLineData.teamAvgPos, xmm6
    vmovss  dword ptr cs:s_frontLineData.teamAvgPos+14h, xmm6
    vmovss  dword ptr cs:s_frontLineData.frontlineRightDir, xmm6
    vmovss  dword ptr cs:s_frontLineData.frontlineRightDir+4, xmm6
    vmovss  dword ptr cs:s_frontLineData.frontlineRightDir+8, xmm6
  }
  *(_QWORD *)&s_frontLineData.lastUpdateTime = 0i64;
  *(_WORD *)&s_frontLineData.enabled = 0;
  *(_WORD *)&s_frontLineData.contested = 0;
  s_frontLineData.spawningTeamIsTrapped = 0;
  __asm
  {
    vmovups xmmword ptr cs:s_frontLineData.teamAvgPos+4, xmm0
    vmovups xmmword ptr cs:s_frontLineData.anchorDir, xmm1
    vmovups xmmword ptr cs:s_frontLineData.anchorPos+4, xmm0
    vmovups xmmword ptr cs:s_frontLineData.midpoint+8, xmm1
  }
  s_frontLineData.teamDiffYawInitialized = 0;
  memset_0(&s_clusterData, 0, sizeof(s_clusterData));
  spawnCount = 0;
  s_spawnPoints.spawnCount = 0;
  s_spawnPoints.scriptedSpawnPointRecordCount = 0;
  if ( s_spawnPoints.spawnCapacity < mapEnts->spawnList.spawnsCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 492, ASSERT_TYPE_ASSERT, "( s_spawnPoints.spawnCapacity ) >= ( spawnList.spawnsCount )", "s_spawnPoints.spawnCapacity >= spawnList.spawnsCount\n\t%i, %i", s_spawnPoints.spawnCapacity, mapEnts->spawnList.spawnsCount) )
      __debugbreak();
    spawnCount = s_spawnPoints.spawnCount;
  }
  LOWORD(spawnsCount) = mapEnts->spawnList.spawnsCount;
  v9 = 0;
  if ( (_WORD)spawnsCount )
  {
    v10 = 0i64;
    do
    {
      v11 = spawnCount + 1;
      s_spawnPoints.spawnCount = v11;
      if ( v9 >= v11 )
      {
        LODWORD(v18) = v11;
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v12 = &s_spawnPoints.spawnPoints[v10];
      if ( !&s_spawnPoints.spawnPoints[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 500, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
        __debugbreak();
      memset_0(v12, 0, sizeof(SpawnPointInfo));
      spawns = mapEnts->spawnList.spawns;
      v12->frontlineTeam = 3;
      v12->record = &spawns[v9];
      G_PlayerSpawnPoints_InitSpawnPointInfo(v12);
      spawnsCount = mapEnts->spawnList.spawnsCount;
      ++v9;
      spawnCount = s_spawnPoints.spawnCount;
      ++v10;
    }
    while ( v9 < spawnsCount );
  }
  if ( spawnCount > (unsigned __int16)spawnsCount )
  {
    LODWORD(v18) = (unsigned __int16)spawnsCount;
    LODWORD(v17) = spawnCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 509, ASSERT_TYPE_ASSERT, "( s_spawnPoints.spawnCount ) <= ( spawnList.spawnsCount )", "s_spawnPoints.spawnCount <= spawnList.spawnsCount\n\t%i, %i", v17, v18) )
      __debugbreak();
  }
  memset_0(&s_spawnPoints.singleOriginSpawnPoint, 0, sizeof(s_spawnPoints.singleOriginSpawnPoint));
  __asm
  {
    vunpcklps xmm0, xmm6, xmm6
    vmovss  [rsp+88h+var_40], xmm6
  }
  s_spawnPoints.singleOriginSpawnPointRecord.origin.v[2] = v19;
  __asm
  {
    vmovsd  qword ptr cs:s_spawnPoints.singleOriginSpawnPointRecord.origin, xmm0
    vunpcklps xmm0, xmm6, xmm6
    vmovss  [rsp+88h+var_40], xmm6
  }
  s_spawnPoints.singleOriginSpawnPointRecord.angles.v[2] = v20;
  s_spawnPoints.singleOriginSpawnPoint.record = &s_spawnPoints.singleOriginSpawnPointRecord;
  s_spawnPoints.singleOriginSpawnPointRecord.index = 0;
  s_spawnPoints.singleOriginSpawnPointRecord.name = scr_const._;
  __asm { vmovsd  qword ptr cs:s_spawnPoints.singleOriginSpawnPointRecord.angles, xmm0 }
  s_spawnPoints.singleOriginSpawnPointRecord.target = scr_const._;
  s_spawnPoints.singleOriginSpawnPointRecord.script_noteworthy = scr_const._;
  s_spawnPoints.singleOriginSpawnPoint.frontlineTeam = 3;
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  G_PlayerSpawnPoints_InitSpawnPointInfo(&s_spawnPoints.singleOriginSpawnPoint);
}

/*
==============
G_PlayerSpawnPoints_InitSpawnViewers
==============
*/
void G_PlayerSpawnPoints_InitSpawnViewers(void)
{
  memset_0(&s_spawnViewers, 0, sizeof(s_spawnViewers));
  s_spawnViewers.nonCharacterEntries[0].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[1].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[2].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[3].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[4].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[5].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[6].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[7].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[8].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[9].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[10].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[11].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[12].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[13].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[14].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[15].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[16].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[17].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[18].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[19].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[20].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[21].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[22].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[23].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[24].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[25].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[26].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[27].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[28].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[29].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[30].entNum = 2047;
  s_spawnViewers.nonCharacterEntries[31].entNum = 2047;
}

/*
==============
G_PlayerSpawnPoints_IsSpectatorEnt
==============
*/
bool G_PlayerSpawnPoints_IsSpectatorEnt(const gentity_s *const ent)
{
  gclient_s *client; 
  bool result; 

  result = 0;
  if ( ent )
  {
    client = ent->client;
    if ( client )
    {
      if ( client->sess.sessionState == SESS_STATE_SPECTATOR )
        return 1;
    }
  }
  return result;
}

/*
==============
G_PlayerSpawnPoints_IsValidViewerEntity
==============
*/
bool G_PlayerSpawnPoints_IsValidViewerEntity(const gentity_s *const ent)
{
  entityType_s eType; 
  int v2; 
  bool result; 

  eType = ent->s.eType;
  result = 0;
  if ( (unsigned __int16)eType <= ET_VEHICLE )
  {
    v2 = 18496;
    if ( _bittest(&v2, eType) )
      return 1;
  }
  return result;
}

/*
==============
G_PlayerSpawnPoints_LogDeathEvent
==============
*/
void G_PlayerSpawnPoints_LogDeathEvent(const gentity_s *const entPlayer, const gentity_s *const entAttacker)
{
  __int64 number; 
  __int64 v5; 

  if ( !entPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 928, ASSERT_TYPE_ASSERT, "( entPlayer )", (const char *)&queryFormat, "entPlayer") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entPlayer->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = entPlayer->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( entPlayer->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "entPlayer->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v5, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  number = entPlayer->s.number;
  s_spawnCharacters.characterEntries[number].lastDeathTime = level.time;
  s_spawnCharacters.characterEntries[number].ignoreInSpawnSelection = 0;
  s_spawnCharacters.characterEntries[number].lastDeathLoc.v[0] = entPlayer->r.currentOrigin.v[0];
  s_spawnCharacters.characterEntries[number].lastDeathLoc.v[1] = entPlayer->r.currentOrigin.v[1];
  s_spawnCharacters.characterEntries[number].lastDeathLoc.v[2] = entPlayer->r.currentOrigin.v[2];
  if ( !entAttacker || entAttacker == entPlayer )
  {
    *(_QWORD *)s_spawnCharacters.characterEntries[number].lastAttackerLoc.v = 0i64;
    s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[2] = 0.0;
    s_spawnCharacters.characterEntries[number].lastAttackerEntNum = 2047;
  }
  else
  {
    s_spawnCharacters.characterEntries[number].lastAttackerEntNum = entAttacker->s.number;
    s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[0] = entAttacker->r.currentOrigin.v[0];
    s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[1] = entAttacker->r.currentOrigin.v[1];
    s_spawnCharacters.characterEntries[number].lastAttackerLoc.v[2] = entAttacker->r.currentOrigin.v[2];
  }
}

/*
==============
G_PlayerSpawnPoints_PositionWouldTelefrag
==============
*/
bool G_PlayerSpawnPoints_PositionWouldTelefrag(const vec3_t *position)
{
  GUtils *v10; 
  Bounds worldBounds; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.midPoint; Bounds const playerBox
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr cs:?playerBox@@3UBounds@@B.midPoint+4; Bounds const playerBox
    vaddss  xmm0, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint+4], xmm0
    vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.halfSize; Bounds const playerBox
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint], xmm1
    vmovss  xmm1, dword ptr cs:?playerBox@@3UBounds@@B.midPoint+8; Bounds const playerBox
    vaddss  xmm2, xmm1, dword ptr [rcx+8]
    vmovss  xmm1, dword ptr cs:?playerBox@@3UBounds@@B.halfSize+4; Bounds const playerBox
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize], xmm0
    vmovss  xmm0, dword ptr cs:?playerBox@@3UBounds@@B.halfSize+8; Bounds const playerBox
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize+8], xmm0
    vmovss  dword ptr [rsp+58h+worldBounds.midPoint+8], xmm2
    vmovss  dword ptr [rsp+58h+worldBounds.halfSize+4], xmm1
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
    __debugbreak();
  v10 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2765, ASSERT_TYPE_ASSERT, "(gUtils)", (const char *)&queryFormat, "gUtils") )
    __debugbreak();
  return GUtils::WorldBoundsWouldTelefrag(v10, &worldBounds);
}

/*
==============
G_PlayerSpawnPoints_PrecacheScoringData
==============
*/
void G_PlayerSpawnPoints_PrecacheScoringData(spawnSelectionSpec *selectionSpec, spawnPointEvaluationData *sData)
{
  int *missileEnts; 
  int v3; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  gentity_s *v8; 
  unsigned __int16 number; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  const gentity_s *v19; 
  __int64 v20; 
  __int64 v21; 

  missileEnts = sData->missileEnts;
  sData->doFrontlines = selectionSpec->respectFrontline;
  v3 = 0;
  sData->usingTeams = selectionSpec->useTeams;
  v5 = 0;
  v6 = 0i64;
  sData->isGroundWar = selectionSpec->isGroundWar;
  v7 = 0i64;
  sData->groundWarNearbyEnemyBadDist = selectionSpec->groundWarNearbyEnemyBadDist;
  sData->groundWarNearbyEnemyOkDist = selectionSpec->groundWarNearbyEnemyOkDist;
  sData->spawningTeam = selectionSpec->spawningTeam;
  sData->spawningPlayerEntNum = selectionSpec->spawningPlayerEntNum;
  sData->skipTelefragFactor = selectionSpec->skipTelefragFactor;
  sData->missileCount = 0;
  while ( 1 )
  {
    v8 = g_entities;
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v21) = 2048;
      LODWORD(v20) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v6] || v8[v7].s.eType != ET_MISSILE )
      goto LABEL_58;
    number = v8[v7].r.ownerNum.number;
    if ( number )
    {
      v10 = number;
      v11 = number - 1;
      if ( v11 >= 0x800 )
      {
        LODWORD(v21) = 2048;
        LODWORD(v20) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v12 = v10 - 1;
      if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v12] )
      {
        LODWORD(v21) = v8[v7].r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v21) )
          __debugbreak();
      }
      v13 = v8[v7].r.ownerNum.number;
      if ( v13 )
      {
        if ( (unsigned int)v13 - 1 >= 0x7FF )
        {
          LODWORD(v21) = 2047;
          LODWORD(v20) = v13 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v14 = v8[v7].r.ownerNum.number;
        if ( (unsigned int)(v14 - 1) >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v15 = v14 - 1;
        if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v15] )
        {
          LODWORD(v21) = v8[v7].r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v21) )
            __debugbreak();
        }
        v16 = (__int16)v8[v7].r.ownerNum.number;
        if ( (unsigned int)(v16 - 1) >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v16 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v17 = v16 - 1;
        v18 = v17;
        if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2297, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ownerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( ownerEntNum )") )
          __debugbreak();
        v19 = &g_entities[v18];
        if ( BG_IsCharacterEntity(&g_entities[v18].s) && !G_PlayerSpawnPoints_GetRelativeSpawnTeam(v19, selectionSpec->spawningTeam) )
          goto LABEL_58;
      }
    }
    if ( v3 >= 20 )
      break;
    ++v3;
    *missileEnts++ = v5;
    sData->missileCount = v3;
LABEL_58:
    ++v5;
    ++v6;
    ++v7;
    if ( v5 >= 2048 )
      return;
  }
  Com_PrintWarning(16, "spawn system ignoring missile with entnum %d, max of %d missiles already being processed.", (unsigned int)v5, 20i64);
}

/*
==============
G_PlayerSpawnPoints_RegisterScriptSpawnpoint
==============
*/
__int64 G_PlayerSpawnPoints_RegisterScriptSpawnpoint(const scr_string_t classname, const vec3_t *origin, const vec3_t *angles, const scr_string_t target, const scr_string_t script_noteworthy)
{
  __int64 spawnCount; 
  unsigned int v10; 
  SpawnPointInfo *v11; 
  unsigned __int16 scriptedSpawnPointRecordCount; 
  SpawnPointEntityRecord *v14; 
  float v16; 
  __int64 v20; 
  __int64 v21; 

  spawnCount = s_spawnPoints.spawnCount;
  _RBP = angles;
  _R14 = origin;
  v10 = ++s_spawnPoints.spawnCount;
  if ( s_spawnPoints.spawnCount > s_spawnPoints.spawnCapacity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2785, ASSERT_TYPE_ASSERT, "( curIndex + 1 ) <= ( s_spawnPoints.spawnCapacity )", "curIndex + 1 <= s_spawnPoints.spawnCapacity\n\t%i, %i", s_spawnPoints.spawnCount, s_spawnPoints.spawnCapacity) )
      __debugbreak();
    v10 = s_spawnPoints.spawnCount;
  }
  if ( (unsigned int)spawnCount >= v10 )
  {
    LODWORD(v21) = v10;
    LODWORD(v20) = spawnCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v11 = &s_spawnPoints.spawnPoints[spawnCount];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2787, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  memset_0(v11, 0, sizeof(SpawnPointInfo));
  scriptedSpawnPointRecordCount = s_spawnPoints.scriptedSpawnPointRecordCount;
  if ( s_spawnPoints.scriptedSpawnPointRecordCount >= 0x40u )
  {
    LODWORD(v21) = 64;
    LODWORD(v20) = s_spawnPoints.scriptedSpawnPointRecordCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2773, ASSERT_TYPE_ASSERT, "( nextIndex ) < ( 64 )", "nextIndex < MAX_SCRIPTED_SPAWNPOINTS\n\t%i, %i", v20, v21) )
      __debugbreak();
  }
  ++s_spawnPoints.scriptedSpawnPointRecordCount;
  __asm { vmovsd  xmm0, qword ptr [r14] }
  v14 = &s_spawnPoints.scriptedSpawnPointRecords[scriptedSpawnPointRecordCount];
  v11->record = v14;
  v14->index = spawnCount;
  v11->record->name = classname;
  _RDX = v11->record;
  v16 = _R14->v[2];
  __asm
  {
    vmovsd  qword ptr [rdx+10h], xmm0
    vmovsd  xmm0, qword ptr [rbp+0]
  }
  _RDX->origin.v[2] = v16;
  _R8 = v11->record;
  *(float *)&_RDX = _RBP->v[2];
  __asm { vmovsd  qword ptr [r8+1Ch], xmm0 }
  LODWORD(_R8->angles.v[2]) = (_DWORD)_RDX;
  v11->record->target = target;
  v11->record->script_noteworthy = script_noteworthy;
  v11->frontlineTeam = 3;
  G_PlayerSpawnPoints_InitSpawnPointInfo(v11);
  return (unsigned int)spawnCount;
}

/*
==============
G_PlayerSpawnPoints_RemoveViewerEntity
==============
*/
char G_PlayerSpawnPoints_RemoveViewerEntity(const gentity_s *const ent)
{
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 

  nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
  while ( nonCharacterEntries->entNum != ent->s.number )
  {
    if ( (__int64)++nonCharacterEntries >= (__int64)&s_spawnPoints )
      return 0;
  }
  nonCharacterEntries->entNum = 2047;
  nonCharacterEntries->cacheEntry.lastUpdateTime = -1;
  return 1;
}

/*
==============
G_PlayerSpawnPoints_SetEnabledAll
==============
*/
void G_PlayerSpawnPoints_SetEnabledAll(team_t team, bool enabled)
{
  __int64 spawnCount; 
  unsigned int v3; 
  __int64 v6; 
  SpawnPointInfo *v7; 
  char v8; 
  unsigned __int8 enabledFlags; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 

  spawnCount = s_spawnPoints.spawnCount;
  v3 = 0;
  if ( s_spawnPoints.spawnCount > 0 )
  {
    v6 = 0i64;
    do
    {
      if ( (team == TEAM_ZERO || (unsigned int)(team - 201) <= 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 624, ASSERT_TYPE_ASSERT, "(team != TEAM_FREE && team != TEAM_SPECTATOR && team != TEAM_FOLLOWER)", (const char *)&queryFormat, "team != TEAM_FREE && team != TEAM_SPECTATOR && team != TEAM_FOLLOWER") )
        __debugbreak();
      if ( v3 >= s_spawnPoints.spawnCount )
      {
        LODWORD(v12) = s_spawnPoints.spawnCount;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v7 = &s_spawnPoints.spawnPoints[v6];
      if ( !&s_spawnPoints.spawnPoints[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 627, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( team == TEAM_MP_NUM_TEAMS )
        v8 = -1;
      else
        v8 = 1 << team;
      enabledFlags = v7->enabledFlags;
      if ( enabled )
        v10 = v8 | enabledFlags;
      else
        v10 = ~v8 & enabledFlags;
      ++v3;
      v7->enabledFlags = v10;
      ++v6;
      --spawnCount;
    }
    while ( spawnCount );
  }
}

/*
==============
G_PlayerSpawnPoints_SetEnabledByClassname
==============
*/
void G_PlayerSpawnPoints_SetEnabledByClassname(scr_string_t classname, team_t team, bool enabled)
{
  __int64 spawnCount; 
  unsigned int v4; 
  __int64 v8; 
  SpawnPointInfo *v9; 
  __int64 v10; 
  __int64 v11; 

  spawnCount = s_spawnPoints.spawnCount;
  v4 = 0;
  if ( s_spawnPoints.spawnCount > 0 )
  {
    v8 = 0i64;
    do
    {
      if ( v4 >= s_spawnPoints.spawnCount )
      {
        LODWORD(v11) = s_spawnPoints.spawnCount;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v9 = &s_spawnPoints.spawnPoints[v8];
      if ( !&s_spawnPoints.spawnPoints[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 610, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( v9->record->name == classname )
        G_PlayerSpawnPoints_SetEnabledByIndex(v4, team, enabled);
      ++v4;
      ++v8;
      --spawnCount;
    }
    while ( spawnCount );
  }
}

/*
==============
G_PlayerSpawnPoints_SetEnabledByIndex
==============
*/
void G_PlayerSpawnPoints_SetEnabledByIndex(int index, team_t team, bool enabled)
{
  __int64 v3; 
  SpawnPointInfo *v6; 
  char v7; 
  unsigned __int8 enabledFlags; 
  __int64 v9; 

  v3 = index;
  if ( (team == TEAM_ZERO || (unsigned int)(team - 201) <= 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 624, ASSERT_TYPE_ASSERT, "(team != TEAM_FREE && team != TEAM_SPECTATOR && team != TEAM_FOLLOWER)", (const char *)&queryFormat, "team != TEAM_FREE && team != TEAM_SPECTATOR && team != TEAM_FOLLOWER") )
    __debugbreak();
  if ( (unsigned int)v3 >= s_spawnPoints.spawnCount )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v9, s_spawnPoints.spawnCount) )
      __debugbreak();
  }
  v6 = &s_spawnPoints.spawnPoints[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 627, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( team == TEAM_MP_NUM_TEAMS )
    v7 = -1;
  else
    v7 = 1 << team;
  enabledFlags = v6->enabledFlags;
  if ( enabled )
    v6->enabledFlags = v7 | enabledFlags;
  else
    v6->enabledFlags = enabledFlags & ~v7;
}

/*
==============
G_PlayerSpawnPoints_SetFactorWeight
==============
*/

void __fastcall G_PlayerSpawnPoints_SetFactorWeight(SpawnFactors factor, double weight, __int64 a3, double _XMM3_8)
{
  const char *v10; 
  __int128 v15; 
  __int128 v17; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
  }
  _RBX = &s_weightsTable[factor];
  __asm
  {
    vcomiss xmm1, xmm7
    vmovaps xmm6, xmm1
  }
  if ( __CFADD__(factor, factor) )
    __asm { vxorpd  xmm3, xmm3, xmm3 }
  else
    __asm { vcvtss2sd xmm3, xmm6, xmm1 }
  v10 = "Spawn Factor <%s> registered with weight %f.\n";
  if ( __CFADD__(factor, factor) )
    v10 = "Spawn Factor <%s> disabled with weight %f.\n";
  __asm { vmovq   r9, xmm3 }
  Com_Printf(16, v10, s_scoreFactorsTable[factor].name, _R9, v15, v17);
  __asm
  {
    vmaxss  xmm0, xmm6, xmm7
    vmovss  dword ptr [rbx], xmm0
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection
==============
*/
void G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection(const gentity_s *const entCharacter, const bool ignore)
{
  __int64 number; 
  __int64 v5; 
  int v6; 

  if ( ((entCharacter->s.eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1360, ASSERT_TYPE_ASSERT, "(entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT)", (const char *)&queryFormat, "entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT") )
    __debugbreak();
  number = entCharacter->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    v6 = 248;
    LODWORD(v5) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1363, ASSERT_TYPE_ASSERT, "(unsigned)( charIdx ) < (unsigned)( ( sizeof( *array_counter( s_spawnCharacters.characterEntries ) ) + 0 ) )", "charIdx doesn't index ARRAY_COUNT( s_spawnCharacters.characterEntries )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  s_spawnCharacters.characterEntries[number].ignoreInSpawnSelection = ignore;
}

/*
==============
G_PlayerSpawnPoints_SetUsingTeams
==============
*/
void G_PlayerSpawnPoints_SetUsingTeams(bool useTeams)
{
  s_spawnGlobals.usingTeams = useTeams;
}

/*
==============
G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt
==============
*/
bool G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(const gentity_s *const ent)
{
  gclient_s *client; 
  gclient_s *v3; 
  entityType_s eType; 
  __int64 number; 
  __int64 v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1408, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !BG_IsCharacterEntity(&ent->s) )
  {
    if ( ent->s.eType != ET_INVISIBLE )
      return 0;
    client = ent->client;
    if ( !client || !client->useDuringSpawnSelectionWhileInvisible )
      return 0;
  }
  if ( !G_PlayerSpawnPoints_EntityIsAlive(ent) )
    return 0;
  if ( ent )
  {
    v3 = ent->client;
    if ( v3 )
    {
      if ( v3->sess.sessionState == SESS_STATE_SPECTATOR && !v3->useDuringSpawnSelectionWhileSpectator )
        return 0;
    }
  }
  eType = ent->s.eType;
  if ( (((eType - 1) & 0xFFEB) != 0 || eType == ET_ACTOR_CORPSE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1371, ASSERT_TYPE_ASSERT, "(entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT || entCharacter->s.eType == ET_INVISIBLE)", (const char *)&queryFormat, "entCharacter->s.eType == ET_PLAYER || entCharacter->s.eType == ET_AGENT || entCharacter->s.eType == ET_INVISIBLE") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v7) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1374, ASSERT_TYPE_ASSERT, "(unsigned)( charIdx ) < (unsigned)( ( sizeof( *array_counter( s_spawnCharacters.characterEntries ) ) + 0 ) )", "charIdx doesn't index ARRAY_COUNT( s_spawnCharacters.characterEntries )\n\t%i not in [0, %i)", v7, 248) )
      __debugbreak();
  }
  return !s_spawnCharacters.characterEntries[number].ignoreInSpawnSelection;
}

/*
==============
G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity
==============
*/
void G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(int index, gentity_s *parent)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int16 number; 
  EntHandle *p_linkToEnt; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  v2 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v13 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1238, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, v13) )
      __debugbreak();
  }
  v4 = v2;
  if ( !s_influencePoints.influencePoints[v4].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1242, ASSERT_TYPE_ASSERT, "(influencePt->inUse)", (const char *)&queryFormat, "influencePt->inUse") )
    __debugbreak();
  number = s_influencePoints.influencePoints[v4].linkToEnt.number;
  p_linkToEnt = &s_influencePoints.influencePoints[v4].linkToEnt;
  if ( !number )
    goto LABEL_26;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    LODWORD(v12) = 2048;
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v12) = p_linkToEnt->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v12) )
      __debugbreak();
  }
  if ( !p_linkToEnt->number )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1243, ASSERT_TYPE_ASSERT, "(influencePt->linkToEnt.isDefined())", (const char *)&queryFormat, "influencePt->linkToEnt.isDefined()") )
      __debugbreak();
  }
  s_influencePoints.influencePoints[v4].pos.v[0] = parent->r.currentOrigin.v[0];
  s_influencePoints.influencePoints[v4].pos.v[1] = parent->r.currentOrigin.v[1];
  s_influencePoints.influencePoints[v4].pos.v[2] = parent->r.currentOrigin.v[2];
  EntHandle::setEnt(&s_influencePoints.influencePoints[v4].linkToEnt, NULL);
  parent->influencePointIndex = 0;
  parent->hasSpawnInfluencePoint = 0;
}

/*
==============
G_PlayerSpawnPoints_UpdateDistanceData
==============
*/
void G_PlayerSpawnPoints_UpdateDistanceData(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  unsigned __int16 *distToPlayer; 
  int v13; 
  __int64 v14; 
  const gentity_s *v16; 
  unsigned int RelativeSpawnTeam; 
  __int64 v18; 
  bool v19; 
  bool v20; 

  __asm
  {
    vmovaps [rsp+0B8h+var_58], xmm7
    vmovaps [rsp+0B8h+var_68], xmm8
  }
  _RDI = spawnPoint;
  __asm
  {
    vmovaps [rsp+0B8h+var_78], xmm9
    vmovaps [rsp+0B8h+var_88], xmm10
  }
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_DistancePerPointPreCalc");
  __asm
  {
    vmovss  xmm10, cs:__real@3a83126f
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm9, cs:__real@4a45c100
  }
  distToPlayer = _RDI->distToPlayer;
  v13 = 0;
  v14 = 0i64;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v13 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v16 = &level.gentities[v14];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[v14]) && v16->s.number != selectionSpec->spawningPlayerEntNum )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v16, selectionSpec->spawningTeam);
      v18 = (int)RelativeSpawnTeam;
      v19 = RelativeSpawnTeam <= 1;
      if ( RelativeSpawnTeam > 1 )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1807, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY");
        v19 = !v20;
        if ( v20 )
          __debugbreak();
      }
      _RAX = _RDI->record;
      __asm
      {
        vmovaps xmm5, xmm7
        vmovss  xmm0, dword ptr [rax+10h]
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rax+14h]
        vmovss  xmm0, dword ptr [rax+18h]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
        vcomiss xmm6, xmm10
      }
      if ( !v19 )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        __asm
        {
          vmovaps xmm1, xmm6
          vrsqrtss xmm2, xmm1, xmm6
          vdivss  xmm5, xmm8, xmm2
        }
      }
      __asm { vcvttss2si eax, xmm5 }
      *distToPlayer = _EAX;
      _RCX = 2 * v18;
      __asm { vcomiss xmm6, dword ptr [rdi+rcx*8+4Ch] }
      if ( __CFADD__(v18, v18) )
        __asm { vmovss  dword ptr [rdi+rcx*8+4Ch], xmm6 }
      _RAX = 2 * (v18 + 5);
      ++_RDI->distanceData[v18].totalPlayers;
      __asm
      {
        vminss  xmm1, xmm6, xmm9
        vaddss  xmm0, xmm6, dword ptr [rdi+rax*8]
        vmovss  dword ptr [rdi+rax*8], xmm0
        vaddss  xmm0, xmm1, dword ptr [rdi+rcx*8+54h]
        vmovss  dword ptr [rdi+rcx*8+54h], xmm0
      }
    }
    ++v13;
    ++distToPlayer;
    ++v14;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
    vmovaps xmm9, [rsp+0B8h+var_78]
    vmovaps xmm10, [rsp+0B8h+var_88]
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerSpawnPoints_UpdateFrontline
==============
*/
void G_PlayerSpawnPoints_UpdateFrontline(spawnSelectionSpec *selectionSpec)
{
  spawnSelectionSpec *v1; 
  team_t v2; 
  team_t spawningTeam; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int integer; 
  int v7; 
  int v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  SpawnPointInfo *spawnPoints; 

  v1 = selectionSpec;
  if ( s_frontLineData.enabled && (v2 = selectionSpec->spawningTeam, (unsigned int)(v2 - 1) <= 1) )
  {
    G_PlayerSpawnPoints_UpdateFrontlineData(v2);
    if ( s_frontLineData.isValidData )
    {
      spawningTeam = v1->spawningTeam;
      if ( !s_frontLineData.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2175, ASSERT_TYPE_ASSERT, "(s_frontLineData.enabled)", (const char *)&queryFormat, "s_frontLineData.enabled") )
        __debugbreak();
      v4 = DVARBOOL_scr_frontline_trap_checks;
      s_frontLineData.spawningTeamIsTrapped = 0;
      if ( !DVARBOOL_scr_frontline_trap_checks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_frontline_trap_checks") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( !v4->current.enabled )
        goto LABEL_28;
      v5 = DVARINT_scr_frontline_min_spawns;
      if ( !DVARINT_scr_frontline_min_spawns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_frontline_min_spawns") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      integer = v5->current.integer;
      v7 = 0;
      v8 = 0;
      if ( s_spawnPoints.spawnCount > 0 )
      {
        v9 = 1 << spawningTeam;
        v10 = 0i64;
        do
        {
          spawnPoints = s_spawnPoints.spawnPoints;
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
            __debugbreak();
          if ( (v9 & spawnPoints[v10].enabledFlags) != 0 && !spawnPoints[v10].frontlineTeam && !spawnPoints[v10].enemySightData.fullSights )
            ++v7;
          ++v8;
          ++v10;
        }
        while ( v8 < s_spawnPoints.spawnCount );
        v1 = selectionSpec;
      }
      if ( v7 < integer )
        s_frontLineData.spawningTeamIsTrapped = 1;
      else
LABEL_28:
        v1->respectFrontline = 1;
    }
  }
  else
  {
    s_frontLineData.isValidData = 0;
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateFrontlineData
==============
*/
void G_PlayerSpawnPoints_UpdateFrontlineData(team_t spawningTeam)
{
  int v14; 
  __int64 v15; 
  int RelativeSpawnTeam; 
  __int64 v20; 
  unsigned int v28; 
  int *v29; 
  int v30; 
  __int64 spawnCount; 
  __int64 v111; 
  unsigned __int8 enabledFlags; 
  bool v114; 
  const dvar_t *v122; 
  const char *v123; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  vec2_t vec; 
  vec2_t v135; 
  vec3_t angles; 
  __int64 v138; 
  __int64 v139[2]; 
  char v148; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  if ( !s_frontLineData.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2071, ASSERT_TYPE_ASSERT, "(s_frontLineData.enabled)", (const char *)&queryFormat, "s_frontLineData.enabled") )
    __debugbreak();
  if ( !s_spawnGlobals.usingTeams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2072, ASSERT_TYPE_ASSERT, "(s_spawnGlobals.usingTeams)", (const char *)&queryFormat, "s_spawnGlobals.usingTeams") )
    __debugbreak();
  s_frontLineData.isValidData = 1;
  s_frontLineData.lastUpdateTimeDelta = level.time - s_frontLineData.lastUpdateTime;
  s_frontLineData.lastUpdateTime = level.time;
  v132 = 0i64;
  v14 = 0;
  v15 = 0i64;
  v138 = 0i64;
  v139[0] = 0i64;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm15, xmm15, xmm15
  }
  v139[1] = 0i64;
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v14 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    _RBX = &level.gentities[v15];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[v15]) )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(_RBX, spawningTeam);
      v20 = RelativeSpawnTeam;
      if ( (unsigned int)RelativeSpawnTeam >= 2 )
      {
        LODWORD(v131) = 2;
        LODWORD(v130) = RelativeSpawnTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2097, ASSERT_TYPE_ASSERT, "(unsigned)( charTeam ) < (unsigned)( 2 )", "charTeam doesn't index NUM_SPAWN_TEAMS\n\t%i not in [0, %i)", v130, v131) )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rbx+130h] }
      ++*((_DWORD *)&v132 + v20);
      _RAX = 3 * v20;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rsp+rax*4+160h+var_E8]
        vmovss  xmm0, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+rax*4+160h+var_E8], xmm1
        vaddss  xmm1, xmm0, dword ptr [rsp+rax*4+160h+var_E8+4]
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+rax*4+160h+var_E8+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+rax*4+60h+var_E0]
        vmovss  dword ptr [rbp+rax*4+60h+var_E0], xmm1
      }
    }
    ++v14;
    ++v15;
  }
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  v28 = 0;
  v29 = (int *)&v132;
  v30 = 0;
  _R9 = &s_frontLineData;
  _RAX = 0i64;
  do
  {
    if ( *v29 < 1 )
    {
      s_frontLineData.isValidData = 0;
      goto LABEL_44;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, dword ptr [rsp+rax+160h+var_E8]
      vmulss  xmm0, xmm2, dword ptr [rsp+rax+160h+var_E8+4]
      vmovss  dword ptr [rax+r9+3Ch], xmm1
      vmovss  dword ptr [rax+r9+40h], xmm0
    }
    s_frontLineData.teamAvgPos[_RAX].v[2] = 0.0;
    ++v30;
    ++_RAX;
    ++v29;
  }
  while ( v30 < 2 );
  __asm
  {
    vmovaps xmmword ptr [rsp+160h+var_38+8], xmm6
    vmovaps [rsp+160h+var_48+8], xmm7
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+160h+var_98+8], xmm12
    vmovaps [rsp+160h+var_A8+8], xmm13
    vmovaps [rsp+160h+var_B8+8], xmm14
  }
  if ( s_frontLineData.usingAnchor )
  {
    __asm
    {
      vmovss  xmm7, dword ptr cs:s_frontLineData.anchorDir
      vmovss  xmm5, dword ptr cs:s_frontLineData.anchorDir+8
      vmovss  xmm8, dword ptr cs:s_frontLineData.anchorPos+8
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos+10h
      vmovaps xmmword ptr [rsp+160h+var_68+8], xmm9
      vmovss  xmm9, dword ptr cs:s_frontLineData.anchorPos
      vmovaps [rsp+160h+var_78+8], xmm10
      vmovss  xmm10, dword ptr cs:s_frontLineData.anchorDir+4
      vmovaps [rsp+160h+var_88+8], xmm11
      vmovss  xmm11, dword ptr cs:s_frontLineData.anchorPos+4
      vsubss  xmm1, xmm0, xmm11
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos+0Ch
      vmulss  xmm2, xmm1, xmm10
      vsubss  xmm1, xmm0, xmm9
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos+14h
      vmulss  xmm1, xmm1, xmm7
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm6, xmm3, xmm1
      vmulss  xmm0, xmm7, xmm6
      vaddss  xmm12, xmm0, xmm9
      vmulss  xmm1, xmm10, xmm6
      vaddss  xmm13, xmm1, xmm11
      vmovss  xmm1, dword ptr cs:s_frontLineData.teamAvgPos+4
      vsubss  xmm2, xmm1, xmm11
      vmulss  xmm3, xmm2, xmm10
      vmulss  xmm0, xmm5, xmm6
      vaddss  xmm14, xmm0, xmm8
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos
      vsubss  xmm1, xmm0, xmm9
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos+8
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm1, xmm0, xmm8
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm4, xmm2
      vmulss  xmm1, xmm10, xmm3
      vmovaps xmm10, [rsp+160h+var_78+8]
      vaddss  xmm4, xmm1, xmm11
      vmovaps xmm11, [rsp+160h+var_88+8]
      vmulss  xmm0, xmm7, xmm3
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm2, xmm0, xmm9
      vmovaps xmm9, xmmword ptr [rsp+160h+var_68+8]
      vsubss  xmm1, xmm6, xmm3
      vandps  xmm1, xmm1, xmm7
      vcomiss xmm1, cs:__real@44160000
      vmulss  xmm0, xmm5, xmm3
      vaddss  xmm5, xmm0, xmm8
      vsubss  xmm0, xmm2, xmm12
      vmovss  dword ptr [rsp+160h+vec], xmm0
      vsubss  xmm0, xmm5, xmm14
      vsubss  xmm1, xmm4, xmm13
    }
    s_frontLineData.contested = 0;
    __asm
    {
      vmovss  [rsp+160h+var_110], xmm0
      vmovss  dword ptr [rsp+160h+vec+4], xmm1
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm
    {
      vmovss  xmm4, cs:__real@3f000000
      vmulss  xmm2, xmm4, dword ptr [rsp+160h+vec]
      vaddss  xmm3, xmm2, xmm12
      vmulss  xmm2, xmm4, dword ptr [rsp+160h+vec+4]
      vmovss  dword ptr cs:s_frontLineData.midpoint, xmm3
      vaddss  xmm3, xmm2, xmm13
      vmulss  xmm2, xmm4, [rsp+160h+var_110]
      vmovss  dword ptr cs:s_frontLineData.midpoint+4, xmm3
      vaddss  xmm3, xmm2, xmm14
      vmovss  dword ptr cs:s_frontLineData.midpoint+8, xmm3
      vxorps  xmm8, xmm8, xmm8
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:s_frontLineData.teamAvgPos
      vsubss  xmm1, xmm0, dword ptr cs:s_frontLineData.teamAvgPos+0Ch
      vmovss  xmm2, dword ptr cs:s_frontLineData.teamAvgPos+4
      vsubss  xmm0, xmm2, dword ptr cs:s_frontLineData.teamAvgPos+10h
      vmovss  dword ptr [rsp+160h+var_108], xmm1
      vmovss  xmm1, dword ptr cs:s_frontLineData.teamAvgPos+8
      vsubss  xmm2, xmm1, dword ptr cs:s_frontLineData.teamAvgPos+14h
      vmovss  [rsp+160h+var_100], xmm2
      vmovss  dword ptr [rsp+160h+var_108+4], xmm0
    }
    *(double *)&_XMM0 = vectoyaw(&v135);
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm3, dword ptr [rsp+160h+var_108]
      vaddss  xmm2, xmm1, dword ptr cs:s_frontLineData.teamAvgPos+0Ch
      vmulss  xmm1, xmm3, dword ptr [rsp+160h+var_108+4]
      vmovss  dword ptr cs:s_frontLineData.midpoint, xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_frontLineData.teamAvgPos+10h
      vmulss  xmm1, xmm3, [rsp+160h+var_100]
      vmovss  dword ptr cs:s_frontLineData.midpoint+4, xmm2
      vaddss  xmm2, xmm1, dword ptr cs:s_frontLineData.teamAvgPos+14h
      vmovss  dword ptr cs:s_frontLineData.midpoint+8, xmm2
    }
  }
  __asm
  {
    vmovaps xmm15, xmm0
    vmovss  dword ptr [rsp+160h+angles], xmm8
    vmovss  dword ptr [rsp+160h+angles+4], xmm15
    vmovss  dword ptr [rsp+160h+angles+8], xmm8
  }
  AngleVectors(&angles, &s_frontLineData.frontlineForwardDir, &s_frontLineData.frontlineRightDir, NULL);
  spawnCount = s_spawnPoints.spawnCount;
  __asm
  {
    vmovaps xmm14, [rsp+160h+var_B8+8]
    vmovaps xmm13, [rsp+160h+var_A8+8]
    vmovaps xmm12, [rsp+160h+var_98+8]
  }
  if ( s_spawnPoints.spawnCount > 0 )
  {
    v111 = 0i64;
    do
    {
      if ( v28 >= s_spawnPoints.spawnCount )
      {
        LODWORD(v131) = s_spawnPoints.spawnCount;
        LODWORD(v130) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v130, v131) )
          __debugbreak();
      }
      _RBX = &s_spawnPoints.spawnPoints[v111];
      if ( !&s_spawnPoints.spawnPoints[v111] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2030, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      enabledFlags = _RBX->enabledFlags;
      v114 = (enabledFlags & 4) == 0;
      if ( (enabledFlags & 4) != 0 || (v114 = (enabledFlags & 2) == 0, (enabledFlags & 2) != 0) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:s_frontLineData.midpoint+4
          vmovss  xmm2, dword ptr cs:s_frontLineData.midpoint
          vsubss  xmm1, xmm0, dword ptr [rax+14h]
          vsubss  xmm0, xmm2, dword ptr [rax+10h]
          vmulss  xmm3, xmm1, dword ptr cs:s_frontLineData.frontlineForwardDir+4
          vmulss  xmm1, xmm0, dword ptr cs:s_frontLineData.frontlineForwardDir
          vaddss  xmm6, xmm3, xmm1
          vcomiss xmm6, xmm8
        }
        _RBX->frontlineTeam = !v114;
        v122 = DVARBOOL_scr_dumpFrontlineAssignments;
        if ( !DVARBOOL_scr_dumpFrontlineAssignments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_dumpFrontlineAssignments") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v122);
        if ( v122->current.enabled )
        {
          v123 = "enemy";
          if ( _RBX->frontlineTeam != 1 )
            v123 = "friendly";
          Com_Printf(16, "Spawnpoint %d is assigned to %s\n", _RBX->record->index, v123);
        }
        __asm
        {
          vandps  xmm6, xmm6, xmm7
          vmovss  dword ptr [rbx+5ECh], xmm6
        }
      }
      ++v28;
      ++v111;
      --spawnCount;
    }
    while ( spawnCount );
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+160h+var_38+8]
    vmovaps xmm7, [rsp+160h+var_48+8]
  }
LABEL_44:
  _R11 = &v148;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateMapLanes
==============
*/

void __fastcall G_PlayerSpawnPoints_UpdateMapLanes(spawnSelectionSpec *selectionSpec, double _XMM1_8)
{
  spawnSelectionSpec *v4; 
  int v5; 
  gentity_s *v6; 
  int RelativeSpawnTeam; 
  int v8; 
  __int64 v9; 
  int *laneVolumeEntNums; 
  int v11; 
  __int64 v12; 
  const gentity_s *v13; 
  unsigned int Instance; 
  __int64 v15; 
  __int64 v16; 
  int v18; 

  __asm
  {
    vmovss  xmm0, cs:s_weightsTable+48h
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  v4 = selectionSpec;
  v5 = 0;
  *(_WORD *)s_mapLanes.occupiedLanes = 0;
  while ( 1 )
  {
    v18 = v5;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v5 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v6 = &level.gentities[v5];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(v6) )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v6, v4->spawningTeam);
      v8 = 0;
      if ( s_mapLanes.numLaneVolumes > 0 )
      {
        v9 = RelativeSpawnTeam;
        laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
        v11 = 1;
        do
        {
          if ( ((unsigned __int8)v11 & s_mapLanes.occupiedLanes[v9]) == 0 )
          {
            v12 = *laneVolumeEntNums;
            v13 = &level.gentities[v12];
            if ( (unsigned int)v12 >= 0x800 )
            {
              LODWORD(v16) = 2048;
              LODWORD(v15) = *laneVolumeEntNums;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( !g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2004, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntityIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntityIdx )") )
              __debugbreak();
            Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v13);
            if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &v6->r.currentOrigin, Instance, v13) )
              s_mapLanes.occupiedLanes[v9] |= 1 << v8;
          }
          ++v8;
          v11 = __ROL4__(v11, 1);
          ++laneVolumeEntNums;
        }
        while ( v8 < s_mapLanes.numLaneVolumes );
        v5 = v18;
        v4 = selectionSpec;
      }
    }
    ++v5;
  }
}

/*
==============
G_PlayerSpawnPoints_UpdatePlayerClusters
==============
*/
void G_PlayerSpawnPoints_UpdatePlayerClusters(spawnSelectionSpec *selectionSpec)
{
  int v9; 
  int *clusterAssignment; 
  int v11; 
  float *v12; 
  __int64 i; 
  gentity_s *v14; 
  int v18; 
  signed int v19; 
  float *v20; 
  __int64 v21; 
  int v23; 
  int v24; 
  __int64 v25; 
  int v48; 

  __asm
  {
    vmovss  xmm0, cs:s_weightsTable+40h
    vmovaps [rsp+0B8h+var_58], xmm7
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm0, xmm7
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_68], xmm8
    vmovaps [rsp+0B8h+var_78], xmm9
    vmovaps [rsp+0B8h+var_88], xmm10
  }
  memset_0(&s_clusterData.validData + 1, 0, 0x1363ui64);
  s_clusterData.validData = 1;
  if ( !s_spawnGlobals.usingTeams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(s_spawnGlobals.usingTeams)", (const char *)&queryFormat, "s_spawnGlobals.usingTeams") )
    __debugbreak();
  v9 = 0;
  clusterAssignment = s_clusterData.clusterAssignment;
  v11 = 0;
  v12 = &s_clusterData.playerClusters[0].center.v[2];
  for ( i = 0i64; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v11 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v14 = &level.gentities[i];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[i]) )
    {
      if ( G_PlayerSpawnPoints_GetRelativeSpawnTeam(v14, selectionSpec->spawningTeam) )
      {
        *clusterAssignment = -1;
      }
      else
      {
        *clusterAssignment = v9++;
        *((_DWORD *)v12 - 3) = 1;
        *(v12 - 2) = v14->r.currentOrigin.v[0];
        *(v12 - 1) = v14->r.currentOrigin.v[1];
        *v12 = v14->r.currentOrigin.v[2];
        v12 += 4;
      }
    }
    else
    {
      *clusterAssignment = -1;
    }
    ++v11;
    ++clusterAssignment;
  }
  __asm
  {
    vmovss  xmm9, cs:__real@bf800000
    vmovss  xmm8, cs:__real@491c4000
    vmovss  xmm10, cs:__real@3f800000
  }
  v18 = 0;
  v19 = 0;
  v48 = 0;
  v20 = &s_clusterData.playerClusters[0].center.v[2];
  v21 = 0i64;
  __asm { vmovaps xmm6, xmm9 }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v18 = v48;
    }
    if ( v19 >= (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
      break;
    v23 = *((_DWORD *)v20 - 3);
    if ( v23 > 0 )
    {
      v24 = v19 + 1;
      v48 = v23 + v18;
      v25 = v21 + 1;
      for ( _RDI = v20 + 4; ; _RDI += 4 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v24 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        if ( *((int *)_RDI - 3) > 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi-8]
            vsubss  xmm3, xmm0, dword ptr [r14-8]
            vmovss  xmm1, dword ptr [rdi-4]
            vmovss  xmm0, dword ptr [rdi]
            vsubss  xmm2, xmm1, dword ptr [r14-4]
            vsubss  xmm4, xmm0, dword ptr [r14]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm8
          }
          if ( !*((_DWORD *)_RDI - 3) )
          {
            __asm
            {
              vcomiss xmm6, xmm7
              vcomiss xmm5, xmm6
            }
          }
        }
        ++v24;
        ++v25;
      }
    }
    v18 = v48;
    ++v19;
    ++v21;
    v20 += 4;
  }
  __asm
  {
    vmovaps xmm9, [rsp+0B8h+var_78]
    vmovaps xmm8, [rsp+0B8h+var_68]
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm10, [rsp+0B8h+var_88]
    vmovaps xmm7, [rsp+0B8h+var_58]
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateSightData
==============
*/
void G_PlayerSpawnPoints_UpdateSightData(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  bool IsSystemEnabled; 
  bool IsDataLoaded; 
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 
  team_t entTeam; 
  BOOL v11; 
  const tacpoint_t *pTargetPoint; 
  vec3_t origin; 
  vec3_t pos; 

  _RDI = spawnPoint;
  IsSystemEnabled = LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData);
  IsDataLoaded = LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData);
  if ( IsSystemEnabled && IsDataLoaded )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_TTLOSPointPreCalc");
    G_PlayerSpawnPoints_UpdateSightData_ForCharacters(_RDI, selectionSpec);
    G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters(_RDI, selectionSpec);
    Sys_ProfEndNamedEvent();
  }
  else if ( TacGraph_Exists() )
  {
    __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_TacGraphFullVisPreCalc");
    G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters(_RDI, selectionSpec);
    __asm { vmovss  xmm7, cs:__real@42700000 }
    nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    do
    {
      if ( nonCharacterEntries->entNum != 2047 )
      {
        entTeam = nonCharacterEntries->entTeam;
        v11 = entTeam == TEAM_ZERO || entTeam != selectionSpec->spawningTeam;
        if ( !selectionSpec->useTeams || v11 )
        {
          if ( _RDI->enemySightData.fullSights )
            break;
          _RAX = G_GetGEntity(nonCharacterEntries->entNum);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+8]
            vmovss  xmm1, dword ptr [rdi+0Ch]
            vaddss  xmm2, xmm7, dword ptr [rdi+10h]
            vmovss  dword ptr [rsp+0B8h+pos], xmm0
            vmovss  dword ptr [rsp+0B8h+pos+4], xmm1
            vmovss  dword ptr [rsp+0B8h+pos+8], xmm2
            vmovss  xmm0, dword ptr [rax+130h]
            vmovss  dword ptr [rsp+0B8h+origin], xmm0
            vmovss  xmm1, dword ptr [rax+134h]
            vmovss  dword ptr [rsp+0B8h+origin+4], xmm1
            vaddss  xmm2, xmm7, dword ptr [rax+138h]
            vmovss  dword ptr [rsp+0B8h+origin+8], xmm2
          }
          pTargetPoint = TacGraph_FindClosestPoint(&pos);
          if ( !pTargetPoint )
            goto LABEL_22;
          _RSI = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadiusZ") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm6, dword ptr [rsi+28h] }
          _RSI = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadius") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi+28h]; maxRadius
            vmovaps xmm3, xmm6; minRadiusZ
            vxorps  xmm1, xmm1, xmm1; minRadius
          }
          if ( TacGraph_FindClosestPointWithVisWithinRadius(&origin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &origin, pTargetPoint) )
LABEL_22:
            ++_RDI->enemySightData.fullSights;
        }
      }
      ++nonCharacterEntries;
    }
    while ( (__int64)nonCharacterEntries < (__int64)&s_spawnPoints );
    Sys_ProfEndNamedEvent();
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateSightData_ForCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateSightData_ForCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  int v35; 
  __int64 v37; 
  unsigned int RelativeSpawnTeam; 
  unsigned int nearbyPathNodeCount; 
  unsigned int v42; 
  unsigned int MinimumValueBetweenNodeLists; 
  char v48; 
  char v49; 
  gclient_s *client; 
  char v68; 
  char v69; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = spawnPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax;
  __asm { vmulss  xmm13, xmm0, xmm0 }
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm6, xmm1, xmm13
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
  }
  if ( v48 | v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1461, ASSERT_TYPE_ASSERT, "(ttlosInfluenceDistRangeSq > 0)", (const char *)&queryFormat, "ttlosInfluenceDistRangeSq > 0") )
    __debugbreak();
  __asm { vmovss  xmm12, cs:__real@3f800000 }
  _RBX = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear;
  __asm
  {
    vdivss  xmm0, xmm12, xmm6
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear;
  __asm { vsubss  xmm14, xmm0, xmm11 }
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm15, cs:__real@437f0000
  }
  v35 = 0;
  __asm
  {
    vmovaps [rsp+118h+var_48], xmm7
    vsubss  xmm10, xmm0, xmm9
  }
  v37 = 0i64;
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v35 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    _RSI = &level.gentities[v37];
    if ( !G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[v37]) )
      goto LABEL_48;
    RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(_RSI, selectionSpec->spawningTeam);
    if ( RelativeSpawnTeam > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1481, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY") )
      __debugbreak();
    if ( selectionSpec->useTeams && !RelativeSpawnTeam || _RSI->s.number == selectionSpec->spawningPlayerEntNum )
    {
LABEL_48:
      ++v35;
      ++v37;
    }
    else
    {
      if ( _RDI->enemySightData.fullSights )
        break;
      G_PlayerSpawnPoints_UpdateViewerCacheForCharacter(_RSI);
      nearbyPathNodeCount = _RDI->nearbyPathNodeCount;
      __asm { vmovaps xmm6, xmm8 }
      if ( nearbyPathNodeCount && (v42 = s_spawnViewers.characterEntries[_RSI->s.number].nearbyPathNodeCount) != 0 )
      {
        MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, _RDI->nearbyPathNodes, nearbyPathNodeCount, (unsigned __int16 *)&s_spawnViewers.nonCharacterEntries[-165] + 8 * _RSI->s.number, v42);
        truncate_cast<unsigned char,int>(MinimumValueBetweenNodeLists >> 8);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm0, xmm15, xmm0
          vmulss  xmm7, xmm0, cs:__real@3b808081
        }
        truncate_cast<unsigned char,int>((unsigned __int8)MinimumValueBetweenNodeLists);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm0, xmm15, xmm0
          vmulss  xmm6, xmm0, cs:__real@3b808081
          vcomiss xmm6, dword ptr [rdi+40h]
        }
        if ( !(v48 | v49) )
          __asm { vmovss  dword ptr [rdi+40h], xmm6 }
        __asm { vcomiss xmm7, dword ptr [rdi+44h] }
        if ( !(v48 | v49) )
          __asm { vmovss  dword ptr [rdi+44h], xmm7 }
      }
      else
      {
        client = _RSI->client;
        if ( !client || (client->flags & 3) == 0 )
          Com_PrintWarning(16, "Missing nearby pathnodes for TTLOS Data for Lookup\n");
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+130h]
        vsubss  xmm3, xmm0, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rsi+134h]
        vsubss  xmm2, xmm1, dword ptr [rdi+0Ch]
        vmovss  xmm0, dword ptr [rsi+138h]
        vsubss  xmm4, xmm0, dword ptr [rdi+10h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsubss  xmm1, xmm2, xmm13
        vmulss  xmm0, xmm1, [rsp+118h+var_D8]; val
        vmovaps xmm1, xmm8; min
        vmovaps xmm2, xmm12; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm14
        vaddss  xmm2, xmm1, xmm11
        vcomiss xmm6, xmm2
      }
      if ( v68 | v69 )
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm10
          vaddss  xmm1, xmm0, xmm9
          vcomiss xmm6, xmm1
        }
        if ( !(v68 | v69) )
          ++_RDI->enemySightData.cornerSights;
        goto LABEL_48;
      }
      ++_RDI->enemySightData.fullSights;
      ++v35;
      ++v37;
    }
  }
  __asm { vmovaps xmm7, [rsp+118h+var_48] }
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  __int64 v37; 
  int entNum; 
  team_t entTeam; 
  BOOL v40; 
  int time; 
  SpawnViewerCacheEntry *p_cacheEntry; 
  gentity_s *GEntity; 
  unsigned int *p_nearbyPathNodeCount; 
  const dvar_t *v46; 
  __int64 i; 
  const pathnode_t *v48; 
  unsigned __int16 v49; 
  unsigned int nearbyPathNodeCount; 
  unsigned __int16 MinimumValueBetweenNodeLists; 
  unsigned __int8 v53; 
  char v58; 
  char v59; 
  char v78; 
  char v79; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBP = spawnPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax;
  __asm { vmulss  xmm14, xmm0, xmm0 }
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm6, xmm1, xmm14
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
  }
  if ( v58 | v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1553, ASSERT_TYPE_ASSERT, "(ttlosInfluenceDistRangeSq > 0)", (const char *)&queryFormat, "ttlosInfluenceDistRangeSq > 0") )
    __debugbreak();
  __asm { vmovss  xmm13, cs:__real@3f800000 }
  _RBX = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear;
  __asm
  {
    vdivss  xmm0, xmm13, xmm6
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear;
  __asm
  {
    vsubss  xmm0, xmm0, xmm12
    vmovss  [rsp+118h+var_D4], xmm0
  }
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm11, cs:__real@437a0000
    vmovss  xmm15, cs:__real@437f0000
    vsubss  xmm10, xmm0, xmm9
  }
  v37 = 0i64;
  __asm { vmovaps [rsp+118h+var_48], xmm7 }
  do
  {
    entNum = s_spawnViewers.nonCharacterEntries[v37].entNum;
    if ( entNum != 2047 )
    {
      entTeam = s_spawnViewers.nonCharacterEntries[v37].entTeam;
      v40 = entTeam == TEAM_ZERO || entTeam != selectionSpec->spawningTeam;
      if ( !selectionSpec->useTeams || v40 )
      {
        if ( _RBP->enemySightData.fullSights )
          break;
        time = level.time;
        p_cacheEntry = &s_spawnViewers.nonCharacterEntries[v37].cacheEntry;
        GEntity = G_GetGEntity(entNum);
        if ( &s_spawnViewers.nonCharacterEntries[v37] == (SpawnViewerCacheNonCharacterEntry *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
          __debugbreak();
        if ( p_cacheEntry->lastUpdateTime != time )
        {
          p_nearbyPathNodeCount = &s_spawnViewers.nonCharacterEntries[v37].cacheEntry.nearbyPathNodeCount;
          p_cacheEntry->lastUpdateTime = time;
          __asm { vmovaps xmm1, xmm11; maxRadius }
          GetPathNodeListForSightToPathNodeCheck(&GEntity->r.currentOrigin, *(const float *)&_XMM1, s_spawnViewers.nonCharacterEntries[v37].cacheEntry.nearbyPathNodes, 4ui64, p_nearbyPathNodeCount);
          v46 = DVARBOOL_g_playerspawns_dumpViewerCache;
          if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v46);
          if ( v46->current.enabled )
          {
            Com_Printf(16, "Updating Viewer Cache For Non Character entity %d.\n", (unsigned int)s_spawnViewers.nonCharacterEntries[v37].entNum);
            for ( i = 0i64; (unsigned int)i < *p_nearbyPathNodeCount; i = (unsigned int)(i + 1) )
            {
              v48 = Path_ConvertIndexToNode(p_cacheEntry->nearbyPathNodes[i]);
              if ( v48 )
              {
                v49 = Path_ConvertNodeToIndex(v48);
                Com_Printf(16, "\tViewer entity %d cached nearby pathnode %d.\n", (unsigned int)s_spawnViewers.nonCharacterEntries[v37].entNum, v49);
              }
            }
          }
        }
        nearbyPathNodeCount = _RBP->nearbyPathNodeCount;
        __asm { vmovaps xmm6, xmm8 }
        if ( nearbyPathNodeCount && s_spawnViewers.nonCharacterEntries[v37].cacheEntry.nearbyPathNodeCount )
        {
          MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, _RBP->nearbyPathNodes, nearbyPathNodeCount, s_spawnViewers.nonCharacterEntries[v37].cacheEntry.nearbyPathNodes, s_spawnViewers.nonCharacterEntries[v37].cacheEntry.nearbyPathNodeCount);
          v53 = MinimumValueBetweenNodeLists;
          truncate_cast<unsigned char,int>(HIBYTE(MinimumValueBetweenNodeLists));
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm0, xmm15, xmm0
            vmulss  xmm7, xmm0, cs:__real@3b808081
          }
          truncate_cast<unsigned char,int>(v53);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm0, xmm15, xmm0
            vmulss  xmm6, xmm0, cs:__real@3b808081
            vcomiss xmm6, dword ptr [rbp+40h]
          }
          if ( !(v58 | v59) )
            __asm { vmovss  dword ptr [rbp+40h], xmm6 }
          __asm { vcomiss xmm7, dword ptr [rbp+44h] }
          if ( !(v58 | v59) )
            __asm { vmovss  dword ptr [rbp+44h], xmm7 }
        }
        else
        {
          Com_PrintWarning(16, "Missing nearby pathnodes for TTLOS Data for Lookup\n");
        }
        _RAX = G_GetGEntity(s_spawnViewers.nonCharacterEntries[v37].entNum);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+130h]
          vsubss  xmm3, xmm0, dword ptr [rbp+8]
          vmovss  xmm1, dword ptr [rax+134h]
          vsubss  xmm2, xmm1, dword ptr [rbp+0Ch]
          vmovss  xmm0, dword ptr [rax+138h]
          vsubss  xmm4, xmm0, dword ptr [rbp+10h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsubss  xmm1, xmm2, xmm14
          vmulss  xmm0, xmm1, [rsp+118h+var_D8]; val
          vmovaps xmm1, xmm8; min
          vmovaps xmm2, xmm13; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm0, [rsp+118h+var_D4]
          vaddss  xmm2, xmm1, xmm12
          vcomiss xmm6, xmm2
        }
        if ( v78 | v79 )
        {
          __asm
          {
            vmulss  xmm0, xmm0, xmm10
            vaddss  xmm1, xmm0, xmm9
            vcomiss xmm6, xmm1
          }
          if ( !(v78 | v79) )
            ++_RBP->enemySightData.cornerSights;
        }
        else
        {
          ++_RBP->enemySightData.fullSights;
        }
      }
    }
    ++v37;
  }
  while ( v37 < 32 );
  __asm { vmovaps xmm7, [rsp+118h+var_48] }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  int v9; 
  __int64 i; 
  gentity_s *v13; 
  unsigned int RelativeSpawnTeam; 
  const tacpoint_t *pTargetPoint; 
  vec3_t vEyePosOut; 
  vec3_t pos; 
  char v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@42700000
  }
  v9 = 0;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  _RSI = spawnPoint;
  for ( i = 0i64; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v9 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v13 = &level.gentities[i];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[i]) )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v13, selectionSpec->spawningTeam);
      if ( RelativeSpawnTeam > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1642, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY") )
        __debugbreak();
      if ( (!selectionSpec->useTeams || RelativeSpawnTeam) && v13->s.number != selectionSpec->spawningPlayerEntNum )
      {
        if ( _RSI->enemySightData.fullSights )
          break;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+8]
          vmovss  xmm1, dword ptr [rsi+0Ch]
          vaddss  xmm2, xmm9, dword ptr [rsi+10h]
          vmovss  dword ptr [rsp+0D8h+pos], xmm0
          vmovss  dword ptr [rsp+0D8h+pos+4], xmm1
          vmovss  dword ptr [rsp+0D8h+pos+8], xmm2
        }
        Sentient_GetEyePosition(v13->sentient, &vEyePosOut);
        pTargetPoint = TacGraph_FindClosestPoint(&pos);
        if ( pTargetPoint )
        {
          _RBX = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadius") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm { vmovss  xmm7, dword ptr [rbx+28h] }
          _RBX = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadiusZ") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vmovss  xmm6, dword ptr [rbx+28h]
            vmovaps xmm3, xmm6; minRadiusZ
            vmovaps xmm2, xmm7; maxRadius
            vxorps  xmm1, xmm1, xmm1; minRadius
          }
          if ( TacGraph_FindClosestPointWithVisWithinRadius(&vEyePosOut, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &vEyePosOut, pTargetPoint) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vsubss  xmm3, xmm0, dword ptr [rsp+0D8h+vEyePosOut]
              vmovss  xmm1, dword ptr [rax+4]
              vsubss  xmm2, xmm1, dword ptr [rsp+0D8h+vEyePosOut+4]
              vmovss  xmm0, dword ptr [rax+8]
              vsubss  xmm5, xmm0, dword ptr [rsp+0D8h+vEyePosOut+8]
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm2, xmm2, xmm2
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm7, xmm7
              vcomiss xmm4, xmm1
            }
          }
        }
      }
    }
    ++v9;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_48]
    vmovaps xmm6, [rsp+0D8h+var_38]
  }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateViewerCacheForCharacter
==============
*/
void G_PlayerSpawnPoints_UpdateViewerCacheForCharacter(gentity_s *ent)
{
  int time; 
  __int64 number; 
  SpawnViewerCacheEntry *v4; 
  const dvar_t *v6; 
  unsigned int i; 
  const pathnode_t *v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 235, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  time = level.time;
  number = ent->s.number;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v10) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cacheIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v11) = 248;
    LODWORD(v10) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 241, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_spawnViewers.characterEntries ) ) + 0 ) )", "cacheIndex doesn't index ARRAY_COUNT( s_spawnViewers.characterEntries )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v4 = &s_spawnViewers.characterEntries[number];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 244, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( v4->lastUpdateTime != time )
  {
    __asm { vmovss  xmm1, cs:__real@437a0000; maxRadius }
    v4->lastUpdateTime = time;
    GetPathNodeListForSightToPathNodeCheck(&ent->r.currentOrigin, *(const float *)&_XMM1, v4->nearbyPathNodes, 4ui64, &v4->nearbyPathNodeCount);
    v6 = DVARBOOL_g_playerspawns_dumpViewerCache;
    if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      Com_Printf(16, "Updating Viewer Cache For Character %d.\n", (unsigned int)number);
      for ( i = 0; i < s_spawnViewers.characterEntries[number].nearbyPathNodeCount; ++i )
      {
        v8 = Path_ConvertIndexToNode(*((_WORD *)&s_spawnViewers.nonCharacterEntries[-165].entNum + 8 * number + i));
        if ( v8 )
        {
          v9 = Path_ConvertNodeToIndex(v8);
          Com_Printf(16, "\tViewer %d cached nearby pathnode %d.\n", (unsigned int)number, v9);
        }
      }
    }
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateViewerCacheForNonCharacter
==============
*/
void G_PlayerSpawnPoints_UpdateViewerCacheForNonCharacter(SpawnViewerCacheNonCharacterEntry *nonCharacterEntry)
{
  SpawnViewerCacheEntry *p_cacheEntry; 
  int time; 
  gentity_s *GEntity; 
  unsigned int *p_nearbyPathNodeCount; 
  const dvar_t *v7; 
  __int64 i; 
  const pathnode_t *v9; 
  unsigned __int16 v10; 

  if ( !nonCharacterEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 277, ASSERT_TYPE_ASSERT, "( nonCharacterEntry )", (const char *)&queryFormat, "nonCharacterEntry") )
    __debugbreak();
  p_cacheEntry = &nonCharacterEntry->cacheEntry;
  time = level.time;
  GEntity = G_GetGEntity(nonCharacterEntry->entNum);
  if ( nonCharacterEntry == (SpawnViewerCacheNonCharacterEntry *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( p_cacheEntry->lastUpdateTime != time )
  {
    __asm { vmovss  xmm1, cs:__real@437a0000; maxRadius }
    p_nearbyPathNodeCount = &nonCharacterEntry->cacheEntry.nearbyPathNodeCount;
    p_cacheEntry->lastUpdateTime = time;
    GetPathNodeListForSightToPathNodeCheck(&GEntity->r.currentOrigin, *(const float *)&_XMM1, nonCharacterEntry->cacheEntry.nearbyPathNodes, 4ui64, &nonCharacterEntry->cacheEntry.nearbyPathNodeCount);
    v7 = DVARBOOL_g_playerspawns_dumpViewerCache;
    if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      Com_Printf(16, "Updating Viewer Cache For Non Character entity %d.\n", (unsigned int)nonCharacterEntry->entNum);
      for ( i = 0i64; (unsigned int)i < *p_nearbyPathNodeCount; i = (unsigned int)(i + 1) )
      {
        v9 = Path_ConvertIndexToNode(p_cacheEntry->nearbyPathNodes[i]);
        if ( v9 )
        {
          v10 = Path_ConvertNodeToIndex(v9);
          Com_Printf(16, "\tViewer entity %d cached nearby pathnode %d.\n", (unsigned int)nonCharacterEntry->entNum, v10);
        }
      }
    }
  }
}

/*
==============
G_PlayerSpawnPonits_EnableFrontline
==============
*/
void G_PlayerSpawnPonits_EnableFrontline(void)
{
  s_frontLineData.enabled = 1;
}

/*
==============
G_PlayerSpawnPonits_EnableGroundWar
==============
*/
void G_PlayerSpawnPonits_EnableGroundWar(void)
{
  s_spawnGlobals.isGroundWar = 1;
}

/*
==============
G_PlayerSpawnPonits_SetGroundWarSpawnVariables
==============
*/

void __fastcall G_PlayerSpawnPonits_SetGroundWarSpawnVariables(double nearbyEnemyBadDist, double nearbyEnemyOkDist)
{
  __asm
  {
    vmovss  cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyBadDist, xmm0; playerSpawn_Globals s_spawnGlobals
    vmovss  cs:?s_spawnGlobals@@3UplayerSpawn_Globals@@A.groundWarNearbyEnemyOkDist, xmm1; playerSpawn_Globals s_spawnGlobals
  }
}

/*
==============
G_PlayerSpawns_ClearInfluencePoint
==============
*/
bool G_PlayerSpawns_ClearInfluencePoint(int index)
{
  __int64 v1; 
  __int64 v2; 
  gentity_s *v3; 
  bool result; 
  int v6; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1198, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  v2 = v1;
  if ( !s_influencePoints.influencePoints[v1].inUse )
    return 0;
  if ( EntHandle::isDefined(&s_influencePoints.influencePoints[v2].linkToEnt) )
  {
    v3 = EntHandle::ent(&s_influencePoints.influencePoints[v2].linkToEnt);
    G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(v1, v3);
  }
  result = 1;
  s_influencePoints.influencePoints[v2].inUse = 0;
  return result;
}

/*
==============
G_PlayerSpawns_CreateInfluencePoint
==============
*/

__int64 __fastcall G_PlayerSpawns_CreateInfluencePoint(vec3_t *pos, double radius, double height, team_t team, __int16 flags, gentity_s *ownerEnt)
{
  unsigned int v13; 
  __int64 result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = &s_influencePoints;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  v13 = 0;
  while ( _RBX->influencePoints[0].inUse )
  {
    ++v13;
    _RBX = (SpawnInfluencePointCache *)((char *)_RBX + 40);
    if ( (__int64)_RBX >= (__int64)&unk_1492199C0 )
    {
      Com_PrintWarning(16, "No more Influence Point Slots, destroy some influence points.\n.");
      result = 0xFFFFFFFFi64;
      goto LABEL_6;
    }
  }
  _RBX->influencePoints[0].inUse = 1;
  EntHandle::setEnt(&_RBX->influencePoints[0].linkToEnt, NULL);
  _RBX->influencePoints[0].pos.v[0] = pos->v[0];
  _RBX->influencePoints[0].pos.v[1] = pos->v[1];
  _RBX->influencePoints[0].pos.v[2] = pos->v[2];
  _RBX->influencePoints[0].flags = flags;
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm7
    vmovss  dword ptr [rbx+10h], xmm6
  }
  _RBX->influencePoints[0].team = team;
  EntHandle::setEnt(&_RBX->influencePoints[0].ownerEnt, ownerEnt);
  result = v13;
LABEL_6:
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return result;
}

/*
==============
G_PlayerSpawns_EntityHasLinkedInfluencePoint
==============
*/
char G_PlayerSpawns_EntityHasLinkedInfluencePoint(gentity_s *linkToEnt, int *outInfluencePtIndex)
{
  if ( !linkToEnt->hasSpawnInfluencePoint )
    return 0;
  *outInfluencePtIndex = linkToEnt->influencePointIndex;
  return 1;
}

/*
==============
G_PlayerSpawns_IsInfluencePointInUse
==============
*/
_BOOL8 G_PlayerSpawns_IsInfluencePointInUse(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return s_influencePoints.influencePoints[v1].inUse;
}

/*
==============
G_PlayerSpawns_IsInfluencePointLinkedToEntity
==============
*/
bool G_PlayerSpawns_IsInfluencePointLinkedToEntity(int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1175, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return EntHandle::isDefined(&s_influencePoints.influencePoints[v1].linkToEnt) != 0;
}

/*
==============
G_PlayerSpawns_LinkInfluencePointToEntity
==============
*/
char G_PlayerSpawns_LinkInfluencePointToEntity(int index, gentity_s *linkToEnt)
{
  EntHandle *p_linkToEnt; 
  gentity_s *v5; 

  if ( (unsigned int)index >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1144, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, 256) )
    __debugbreak();
  if ( !s_influencePoints.influencePoints[index].inUse )
    return 0;
  p_linkToEnt = &s_influencePoints.influencePoints[index].linkToEnt;
  if ( EntHandle::isDefined(p_linkToEnt) )
  {
    v5 = EntHandle::ent(p_linkToEnt);
    G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(index, v5);
  }
  EntHandle::setEnt(p_linkToEnt, linkToEnt);
  linkToEnt->hasSpawnInfluencePoint = 1;
  if ( (index < 0 || (unsigned int)index > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)index, "signed", index) )
    __debugbreak();
  linkToEnt->influencePointIndex = index;
  return 1;
}

/*
==============
G_PlayerSpawns_Load
==============
*/
void G_PlayerSpawns_Load(MemoryFile *memFile)
{
  int i; 
  int j; 
  int k; 
  int m; 
  char *fmt; 
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3978, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( i = p; p >= 0; i = p )
  {
    if ( i >= 248 )
    {
      LODWORD(fmt) = 248;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D97A60, 6255i64, (unsigned int)i, fmt);
      i = p;
    }
    MemFile_ReadData(memFile, 0x24ui64, &s_spawnCharacters.characterEntries[i]);
    MemFile_ReadData(memFile, 4ui64, &p);
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( j = p; p >= 0; j = p )
  {
    if ( j >= 32 )
    {
      LODWORD(fmt) = 32;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D97AD0, 6256i64, (unsigned int)j, fmt);
      j = p;
    }
    MemFile_ReadData(memFile, 0x18ui64, &s_spawnViewers.nonCharacterEntries[j]);
    MemFile_ReadData(memFile, 4ui64, &p);
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( k = p; p >= 0; k = p )
  {
    if ( k >= 256 )
    {
      LODWORD(fmt) = 256;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D97B40, 6257i64, (unsigned int)k, fmt);
      k = p;
    }
    MemFile_ReadData(memFile, 0x28ui64, &s_influencePoints.influencePoints[k]);
    MemFile_ReadData(memFile, 4ui64, &p);
  }
  MemFile_ReadData(memFile, 1ui64, &s_spawnGlobals);
  MemFile_ReadData(memFile, 4ui64, &p);
  for ( m = p; p >= 0; m = p )
  {
    if ( m >= 203 )
    {
      LODWORD(fmt) = 203;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D97BB0, 6258i64, (unsigned int)m, fmt);
      m = p;
    }
    MemFile_ReadData(memFile, 4ui64, &s_spawnGlobals.lastTeamSpawn[m]);
    MemFile_ReadData(memFile, 4ui64, &p);
  }
}

/*
==============
G_PlayerSpawns_Save
==============
*/
void G_PlayerSpawns_Save(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3966, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  p = 0;
  v4 = 0;
  do
  {
    if ( s_spawnCharacters.characterEntries[v4].lastDeathTime || s_spawnCharacters.characterEntries[v4].ignoreInSpawnSelection )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0x24ui64, &s_spawnCharacters.characterEntries[p]);
      v3 = p;
    }
    p = ++v3;
    v4 = v3;
  }
  while ( v3 < 248 );
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
  v5 = 0;
  p = 0;
  v6 = 0;
  do
  {
    if ( s_spawnViewers.nonCharacterEntries[v6].entNum != 2047 )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0x18ui64, &s_spawnViewers.nonCharacterEntries[p]);
      v5 = p;
    }
    p = ++v5;
    v6 = v5;
  }
  while ( v5 < 32 );
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
  v7 = 0;
  p = 0;
  v8 = 0;
  do
  {
    if ( s_influencePoints.influencePoints[v8].inUse )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 0x28ui64, &s_influencePoints.influencePoints[p]);
      v7 = p;
    }
    p = ++v7;
    v8 = v7;
  }
  while ( v7 < 256 );
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 1ui64, &s_spawnGlobals);
  v9 = 0;
  p = 0;
  do
  {
    if ( s_spawnGlobals.lastTeamSpawn[v9] != -1 )
    {
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 4ui64, &s_spawnGlobals.lastTeamSpawn[p]);
      v2 = p;
    }
    p = ++v2;
    v9 = v2;
  }
  while ( v2 < 203 );
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
G_PlayerSpawns_SetInfluencePointPosition
==============
*/
char G_PlayerSpawns_SetInfluencePointPosition(int index, vec3_t *pos)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( (unsigned int)index >= 0x100 )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1184, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  if ( !s_influencePoints.influencePoints[v2].inUse )
    return 0;
  s_influencePoints.influencePoints[v2].pos.v[0] = pos->v[0];
  s_influencePoints.influencePoints[v2].pos.v[1] = pos->v[1];
  s_influencePoints.influencePoints[v2].pos.v[2] = pos->v[2];
  return 1;
}

