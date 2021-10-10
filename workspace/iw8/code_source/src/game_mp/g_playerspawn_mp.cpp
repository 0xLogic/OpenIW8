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
  int v3; 
  const pathnode_t *v4; 
  unsigned int nearbyPathNodeCount; 
  pathnode_t *v6; 
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  vec3_t pos; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 643, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  p_nearbyPathNodeCount = &info->nearbyPathNodeCount;
  v3 = 0;
  if ( info->nearbyPathNodeCount )
  {
    LODWORD(v9) = info->nearbyPathNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 644, ASSERT_TYPE_ASSERT, "( info->nearbyPathNodeCount ) == ( 0 )", "info->nearbyPathNodeCount == 0\n\t%i, %i", v9, 0i64) )
      __debugbreak();
  }
  v4 = Path_NearestNodeForLineOfSight(&info->record->origin, 33685521, NULL);
  if ( v4 )
  {
    *p_nearbyPathNodeCount = 1;
    info->nearbyPathNodes[0] = Path_ConvertNodeToIndex(v4);
  }
  nearbyPathNodeCount = *p_nearbyPathNodeCount;
  if ( !*p_nearbyPathNodeCount )
  {
    GetPathNodeListForSightToPathNodeCheck(&info->record->origin, 130.0, info->nearbyPathNodes, 4ui64, &info->nearbyPathNodeCount);
    nearbyPathNodeCount = *p_nearbyPathNodeCount;
    if ( !*p_nearbyPathNodeCount )
    {
      GetPathNodeListForSightToPathNodeCheck(&info->record->origin, 250.0, info->nearbyPathNodes, 4ui64, &info->nearbyPathNodeCount);
      nearbyPathNodeCount = info->nearbyPathNodeCount;
    }
  }
  if ( nearbyPathNodeCount )
  {
    while ( 1 )
    {
      v6 = Path_ConvertIndexToNode(info->nearbyPathNodes[v3]);
      pathnode_t::GetPos(v6, &pos);
      if ( (float)((float)((float)((float)(pos.v[1] - info->groundPos.v[1]) * (float)(pos.v[1] - info->groundPos.v[1])) + (float)((float)(pos.v[0] - info->groundPos.v[0]) * (float)(pos.v[0] - info->groundPos.v[0]))) + (float)((float)(pos.v[2] - info->groundPos.v[2]) * (float)(pos.v[2] - info->groundPos.v[2]))) > 4096.0 )
        break;
      if ( ++v3 >= *p_nearbyPathNodeCount )
        return;
    }
  }
  v7 = SL_ConvertToString(info->record->name);
  if ( !I_strstr(v7, "start") )
  {
    v8 = vtos(&info->record->origin);
    Com_PrintError(16, "MP Spawnpoint [%i] at %s needs a pathnode within %.1f units for LOS testing\n", info->record->index, v8, DOUBLE_64_0);
  }
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
void G_PlayerSpawnPoints_DebugDraw(void)
{
  const dvar_t *v0; 
  int integer; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  SpawnViewerCacheNonCharacterEntry *nonCharacterEntries; 
  __int64 entNum; 
  const dvar_t *v6; 
  int v7; 
  EntHandle *p_linkToEnt; 
  gentity_s *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  int i; 
  gentity_s *v18; 
  __int64 j; 
  pathnode_t *v20; 
  const dvar_t *v21; 
  char enabled; 
  const dvar_t *v23; 
  char v24; 
  const dvar_t *v25; 
  char v26; 
  const dvar_t *v27; 
  char v28; 
  const dvar_t *v29; 
  char v30; 
  const dvar_t *v31; 
  char v32; 
  const dvar_t *v33; 
  char v34; 
  const dvar_t *v35; 
  char v36; 
  const dvar_t *v37; 
  char v38; 
  const dvar_t *v39; 
  char v40; 
  const dvar_t *v41; 
  char v42; 
  const dvar_t *v43; 
  __int64 bestSpawnPointIdx; 
  int v45; 
  unsigned int v46; 
  vec4_t v47; 
  vec4_t v48; 
  int v49; 
  __int64 v50; 
  __int64 v51; 
  SpawnPointEntityRecord *record; 
  SpawnPointInfo *v53; 
  unsigned __int8 enabledFlags; 
  char v55; 
  char v56; 
  bool v57; 
  bool v58; 
  CriticalFactorScore criticalScore; 
  vec4_t v60; 
  vec4_t *v61; 
  float v62; 
  __int64 index; 
  int v64; 
  const char *v65; 
  int v66; 
  vec4_t *v67; 
  double v68; 
  float v69; 
  double v70; 
  const char *v71; 
  double v72; 
  float v73; 
  double v74; 
  const char *v75; 
  unsigned int v76; 
  int v77; 
  int *lastTeamSpawn; 
  const vec3_t *p_groundPos; 
  double v80; 
  float v81; 
  vec4_t *v82; 
  const char *v83; 
  vec3_t *p_center; 
  const vec3_t *v85; 
  double v86; 
  float v87; 
  double v88; 
  const char *v89; 
  vec4_t *v90; 
  vec3_t *v91; 
  double v92; 
  const char *v93; 
  const char *v96; 
  CriticalFactorScore v97; 
  const char *v98; 
  const char *String; 
  const char *v100; 
  __int64 v101; 
  const char *v102; 
  const char *v103; 
  const char *v104; 
  const char *v105; 
  const char *v106; 
  const char *v107; 
  const char *v108; 
  const char *v109; 
  const char *v110; 
  const char *v111; 
  const char *v112; 
  const char *v113; 
  const char *v114; 
  const char *v115; 
  const char *v116; 
  const char *v117; 
  const char *v118; 
  float *factorScores; 
  int v120; 
  char v121; 
  SpawnFactorEntry *v122; 
  double FactorWeight; 
  const char *name; 
  const char *v125; 
  __int64 duration; 
  __int64 v127; 
  unsigned int pathNodeListOutCount; 
  char v129; 
  char v130; 
  char v131; 
  char v132; 
  char v133; 
  char v134; 
  char v135; 
  char v136; 
  char v137; 
  char v138; 
  char v139; 
  int shapeCount; 
  int v141; 
  SpawnPointEntityRecord *v142; 
  int v143; 
  int v144; 
  char v145; 
  char v146; 
  int v147; 
  __int64 v148; 
  SpawnPointInfo *v149; 
  vec4_t v150; 
  vec4_t v151; 
  vec3_t xyz; 
  vec3_t center; 
  vec3_t pos; 
  vec3_t start; 
  vec4_t v156; 
  vec4_t v157; 
  vec4_t v158; 
  vec4_t v159; 
  vec3_t v160; 
  vec3_t v161; 
  __int128 v162; 
  vec4_t v163; 
  vec3_t v164; 
  vec3_t v165; 
  vec3_t v166; 
  vec3_t v167; 
  Bounds box; 
  vec4_t v169; 
  vec4_t v170; 
  vec4_t color; 
  vec4_t v172; 
  vec4_t v173; 
  unsigned __int16 pathNodeIndexListOut[4]; 

  v0 = DVARINT_g_playerspawns_debugdraw;
  if ( !DVARINT_g_playerspawns_debugdraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  v2 = DVARINT_g_playerspawns_debugdraw_colorMode;
  v147 = integer;
  if ( !DVARINT_g_playerspawns_debugdraw_colorMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_colorMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v143 = v2->current.integer;
  G_PlayerSpawnPoints_DebugDrawFrontline();
  G_PlayerSpawnPoints_DebugDrawClusters();
  G_PlayerSpawnPoints_DebugDrawLanes();
  v3 = DVARBOOL_g_playerspawns_debugNonPlayerViewers;
  if ( !DVARBOOL_g_playerspawns_debugNonPlayerViewers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugNonPlayerViewers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
    do
    {
      entNum = nonCharacterEntries->entNum;
      if ( (_DWORD)entNum != 2047 )
      {
        if ( (unsigned int)entNum >= 0x800 )
        {
          LODWORD(v127) = 2048;
          LODWORD(duration) = nonCharacterEntries->entNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v127) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        center = g_entities[entNum].r.currentOrigin;
        G_DebugSphere(&center, 3.0, &colorBlue, 0, 1);
      }
      ++nonCharacterEntries;
    }
    while ( (__int64)nonCharacterEntries < (__int64)&s_spawnPoints );
  }
  v6 = DVARBOOL_g_playerspawns_debugInfluenceNodes;
  if ( !DVARBOOL_g_playerspawns_debugInfluenceNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugInfluenceNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v7 = 0;
    p_linkToEnt = &s_influencePoints.influencePoints[0].linkToEnt;
    do
    {
      if ( LOBYTE(p_linkToEnt[1].number) )
      {
        if ( (unsigned int)v7 >= 0x100 )
        {
          LODWORD(v127) = 256;
          LODWORD(duration) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", duration, v127) )
            __debugbreak();
        }
        if ( !LOBYTE(p_linkToEnt[1].number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1219, ASSERT_TYPE_ASSERT, "(influencePt->inUse)", (const char *)&queryFormat, "influencePt->inUse") )
          __debugbreak();
        if ( EntHandle::isDefined(p_linkToEnt) )
        {
          v9 = EntHandle::ent(p_linkToEnt);
          v10 = v9->r.currentOrigin.v[0];
          start.v[0] = v10;
          v11 = v9->r.currentOrigin.v[1];
          start.v[1] = v11;
          v12 = v9->r.currentOrigin.v[2];
          start.v[2] = v12;
          *(vec3_t *)&p_linkToEnt[-8].number = v9->r.currentOrigin;
        }
        else
        {
          v13 = *(float *)&p_linkToEnt[-6];
          LODWORD(v11) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&p_linkToEnt[-8].number, (__m128)*(unsigned __int64 *)&p_linkToEnt[-8].number, 85).m128_u32[0];
          *(_QWORD *)start.v = *(_QWORD *)&p_linkToEnt[-8].number;
          v10 = start.v[0];
          start.v[2] = v13;
          v12 = v13;
        }
        center.v[0] = v10;
        v14 = v12 + *(float *)&p_linkToEnt[-4];
        v15 = *(float *)&p_linkToEnt[-5];
        center.v[2] = v14;
        center.v[1] = v11;
        G_DebugCylinder(&start, &center, v15, &colorPurple, 1, 1);
      }
      ++v7;
      p_linkToEnt += 10;
    }
    while ( v7 < 256 );
  }
  v16 = DVARBOOL_g_playerspawns_debugPlayerPathnodes;
  if ( !DVARBOOL_g_playerspawns_debugPlayerPathnodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugPlayerPathnodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    box.halfSize.v[1] = FLOAT_10_0;
    box.halfSize.v[2] = FLOAT_10_0;
    *(_OWORD *)box.midPoint.v = _xmm;
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v18 = &level.gentities[i];
      if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(v18) )
      {
        pathNodeListOutCount = 0;
        GetPathNodeListForSightToPathNodeCheck(&v18->r.currentOrigin, 250.0, pathNodeIndexListOut, 4ui64, &pathNodeListOutCount);
        for ( j = 0i64; (unsigned int)j < pathNodeListOutCount; j = (unsigned int)(j + 1) )
        {
          v20 = Path_ConvertIndexToNode(pathNodeIndexListOut[j]);
          pathnode_t::GetPos(v20, &pos);
          G_DebugBox(&pos, &box, 0.0, &colorOrange, 0, 1);
          center.v[0] = pos.v[0];
          center.v[1] = pos.v[1];
          center.v[2] = pos.v[2] + 36.0;
          G_DebugLine(&center, &pos, &colorOrange, 0);
        }
      }
    }
  }
  if ( integer )
  {
    v21 = DVARBOOL_g_playerspawns_debugdraw_factors;
    if ( !DVARBOOL_g_playerspawns_debugdraw_factors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_factors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    enabled = v21->current.enabled;
    v23 = DVARBOOL_g_playerspawns_debugdraw_factors_drawAll;
    v138 = enabled;
    if ( !DVARBOOL_g_playerspawns_debugdraw_factors_drawAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_factors_drawAll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = v23->current.enabled;
    v25 = DVARBOOL_g_playerspawns_debugdraw_totalScore;
    v139 = v24;
    if ( !DVARBOOL_g_playerspawns_debugdraw_totalScore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_totalScore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = v25->current.enabled;
    v27 = DVARBOOL_g_playerspawns_debugdraw_TTLOS;
    v130 = v26;
    if ( !DVARBOOL_g_playerspawns_debugdraw_TTLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_TTLOS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = v27->current.enabled;
    v29 = DVARBOOL_g_playerspawns_debugdraw_sightData;
    v131 = v28;
    if ( !DVARBOOL_g_playerspawns_debugdraw_sightData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_sightData") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = v29->current.enabled;
    v31 = DVARBOOL_g_playerspawns_debugdraw_name;
    v134 = v30;
    if ( !DVARBOOL_g_playerspawns_debugdraw_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_name") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v32 = v31->current.enabled;
    v33 = DVARBOOL_g_playerspawns_debugdraw_KVPs;
    v133 = v32;
    if ( !DVARBOOL_g_playerspawns_debugdraw_KVPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_KVPs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v34 = v33->current.enabled;
    v35 = DVARBOOL_g_playerspawns_debugdraw_pos;
    v136 = v34;
    if ( !DVARBOOL_g_playerspawns_debugdraw_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_pos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v35->current.enabled;
    v37 = DVARBOOL_g_playerspawns_debugdraw_status;
    v135 = v36;
    if ( !DVARBOOL_g_playerspawns_debugdraw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugdraw_status") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = v37->current.enabled;
    v39 = DVARBOOL_g_playerspawns_debugAlternates;
    v137 = v38;
    if ( !DVARBOOL_g_playerspawns_debugAlternates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugAlternates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.enabled;
    v41 = DVARBOOL_g_playerspawns_debugCritFail;
    v129 = v40;
    if ( !DVARBOOL_g_playerspawns_debugCritFail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugCritFail") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = v41->current.enabled;
    v43 = DVARINT_g_playerspawns_debugLastTeamSpawn;
    bestSpawnPointIdx = s_spawnGlobals.lastSelectionResults.bestSpawnPointIdx;
    v132 = v42;
    v141 = s_spawnGlobals.lastSelectionResults.bestSpawnPointIdx;
    if ( !DVARINT_g_playerspawns_debugLastTeamSpawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugLastTeamSpawn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v45 = v43->current.integer;
    v46 = 0;
    v47 = colorRedFaded;
    v48 = colorYellow;
    color = colorMagenta;
    v173 = colorMagenta;
    v144 = v45;
    v49 = 0;
    pathNodeListOutCount = 0;
    *(_QWORD *)start.v = s_spawnPoints.spawnCount;
    v172 = colorDkPurple;
    *(vec4_t *)box.midPoint.v = colorGreen;
    v170 = colorGreen;
    v159 = colorLtRed;
    v157 = colorCyan;
    v150 = colorRedFaded;
    v151 = colorYellow;
    v156 = colorLtBlue;
    if ( s_spawnPoints.spawnCount > 0 )
    {
      v50 = bestSpawnPointIdx;
      v51 = 0i64;
      v148 = bestSpawnPointIdx;
      *(_QWORD *)pathNodeIndexListOut = 0i64;
      do
      {
        if ( v46 >= s_spawnPoints.spawnCount )
        {
          LODWORD(v127) = s_spawnPoints.spawnCount;
          LODWORD(duration) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", duration, v127) )
            __debugbreak();
          v50 = v148;
          v48 = v151;
          v47 = v150;
        }
        record = s_spawnPoints.spawnPoints[v51].record;
        v53 = &s_spawnPoints.spawnPoints[v51];
        enabledFlags = v53->enabledFlags;
        v149 = v53;
        v55 = enabledFlags & 2;
        v142 = record;
        v56 = enabledFlags & 4;
        v146 = v55;
        v145 = v56;
        v57 = v55 || v56;
        if ( integer == 2 )
        {
          v58 = !v57;
        }
        else
        {
          if ( integer != 4 )
            goto LABEL_103;
          v58 = v56 == 0;
        }
        if ( v58 )
          goto LABEL_220;
LABEL_103:
        if ( integer == 3 && !v55 )
          goto LABEL_220;
        v158 = colorCyan;
        xyz = v53->groundPos;
        criticalScore = v53->scoreData.criticalScore;
        if ( criticalScore == CS_BAD )
        {
          v157 = v47;
        }
        else if ( criticalScore == CS_OK )
        {
          v157 = v48;
        }
        else
        {
          v157 = v170;
        }
        if ( v53->enemySightData.fullSights )
        {
          v60 = colorRed;
        }
        else if ( v53->enemySightData.cornerSights )
        {
          v60 = colorYellow;
        }
        else
        {
          v60 = colorGreen;
        }
        v163 = v60;
        v162 = 0i64;
        v61 = &colorDkGrey;
        if ( v53->usedInLastSelection )
        {
          switch ( v143 )
          {
            case 0:
              v61 = &v170;
              break;
            case 1:
              v61 = &v163;
              break;
            case 2:
              if ( v50 == v51 )
              {
                v61 = &colorBlue;
              }
              else
              {
                v62 = v53->scoreData.totalScore / s_spawnGlobals.lastSelectionResults.bestSpawnPointScore;
                *(float *)&v162 = 1.0 - v62;
                *((float *)&v162 + 1) = v62;
                *((float *)&v162 + 3) = FLOAT_1_0;
                v61 = (vec4_t *)&v162;
              }
              break;
            case 3:
              v61 = &v157;
              break;
            case 4:
              v61 = &colorLtRed;
              if ( v141 == v46 )
                v61 = &colorGreen;
              break;
            case 5:
              if ( s_frontLineData.enabled && s_frontLineData.isValidData )
              {
                v61 = &colorBlue;
                if ( v53->frontlineTeam )
                  v61 = &colorOrange;
              }
              else
              {
                v61 = &colorBlack;
              }
              break;
            default:
              break;
          }
        }
        G_PlayerSpawnPoints_DebugDrawSpawnShape(&v53->groundPos, record->angles.v[1], v61);
        xyz.v[2] = xyz.v[2] + 72.0;
        index = record->index;
        v64 = v49 + 1;
        shapeCount = v49 + 1;
        v65 = j_va("%d", index);
        G_Main_AddDebugString(&xyz, &color, 1.5, v65);
        if ( v129 )
        {
          v66 = 0;
          if ( v53->alternateGroundPositionsCount > 0 )
          {
            do
            {
              v67 = &v172;
              ++v64;
              if ( v57 )
                v67 = &v173;
              G_PlayerSpawnPoints_DebugDrawSpawnShape(&v53->alternateGroundPositions[v66], v142->angles.v[1], v67);
              G_DebugLine(&v53->groundPos, &v53->alternateGroundPositions[v66++], v67, 0);
              shapeCount = v64;
            }
            while ( v66 < v53->alternateGroundPositionsCount );
            record = v142;
          }
          v46 = pathNodeListOutCount;
        }
        if ( !v144 || !v53->usedInLastSelection )
          goto LABEL_174;
        switch ( v144 )
        {
          case 1:
            v76 = pathNodeListOutCount;
            v77 = 0;
            lastTeamSpawn = s_spawnGlobals.lastTeamSpawn;
LABEL_153:
            if ( *lastTeamSpawn < 0 )
              goto LABEL_173;
            if ( *lastTeamSpawn == v76 )
            {
              p_groundPos = &v53->groundPos;
              center.v[2] = v53->groundPos.v[2];
              v80 = *(double *)v53->groundPos.v;
              center.v[2] = center.v[2] + 180.0;
              v81 = record->angles.v[1];
              *(double *)center.v = v80;
              if ( v77 == 2 )
              {
                G_PlayerSpawnPoints_DebugLastTeamSpawnShape(p_groundPos, v81, &v156);
                v82 = &v156;
                v83 = "NEW Team Spawn: ALLIES";
                p_center = &center;
              }
              else
              {
                if ( v77 == 1 )
                {
                  G_PlayerSpawnPoints_DebugLastTeamSpawnShape(p_groundPos, v81, &v159);
                  v82 = &v159;
                  v83 = "NEW Team Spawn: AXIS";
                }
                else
                {
                  G_PlayerSpawnPoints_DebugLastTeamSpawnShape(p_groundPos, v81, &v156);
                  v83 = j_va("NEW Team Spawn: team %i", (unsigned int)v77);
                  v82 = &v156;
                }
                p_center = &center;
              }
              goto LABEL_167;
            }
            if ( 100.0 == *(float *)((char *)lastTeamSpawn + (char *)v53 - (char *)s_spawnGlobals.lastTeamSpawn + 692) )
            {
              v85 = &v53->groundPos;
              pos.v[2] = v53->groundPos.v[2];
              v86 = *(double *)v53->groundPos.v;
              pos.v[2] = pos.v[2] + -6.0;
              v87 = record->angles.v[1];
              *(double *)pos.v = v86;
              if ( v77 == 2 )
              {
                G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(v85, v87, &v156);
                G_Main_AddDebugString(&pos, &v156, 0.40000001, "Last Team Spawn: ALLIES");
LABEL_169:
                xyz.v[2] = xyz.v[2] + -6.0;
                v88 = v53->preferNearLastTeamSpawnScores[2];
                v166 = xyz;
                v89 = j_va("Near Last Team Spawn (ALLIES): %f", v88);
                v90 = &v156;
                v91 = &v166;
                goto LABEL_172;
              }
              if ( v77 == 1 )
              {
                G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(v85, v87, &v159);
                G_Main_AddDebugString(&pos, &v159, 0.40000001, "Last Team Spawn: AXIS");
LABEL_171:
                xyz.v[2] = xyz.v[2] + -6.0;
                v92 = v53->preferNearLastTeamSpawnScores[1];
                v167 = xyz;
                v89 = j_va("Near Last Team Spawn (AXIS): %f", v92);
                v90 = &v159;
                v91 = &v167;
LABEL_172:
                G_Main_AddDebugString(v91, v90, 0.40000001, v89);
                goto LABEL_173;
              }
              G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(v85, v87, &v156);
              v83 = j_va("Last Team Spawn: team %i", (unsigned int)v77);
              v82 = &v156;
              p_center = &pos;
LABEL_167:
              G_Main_AddDebugString(p_center, v82, 0.40000001, v83);
            }
            if ( v77 == 2 )
              goto LABEL_169;
            if ( v77 == 1 )
              goto LABEL_171;
LABEL_173:
            record = v142;
            ++v77;
            ++lastTeamSpawn;
            if ( v77 >= 203 )
              break;
            goto LABEL_153;
          case 2:
            if ( s_spawnGlobals.lastTeamSpawn[2] == v46 )
            {
              v72 = *(double *)v53->groundPos.v;
              v161.v[2] = v53->groundPos.v[2];
              v161.v[2] = v161.v[2] + 180.0;
              v73 = record->angles.v[1];
              *(double *)v161.v = v72;
              G_PlayerSpawnPoints_DebugLastTeamSpawnShape(&v53->groundPos, v73, &v156);
              G_Main_AddDebugString(&v161, &v156, 0.40000001, "Last Team Spawn: ALLIES");
            }
            else if ( s_spawnGlobals.lastTeamSpawn[2] >= 0 )
            {
              xyz.v[2] = xyz.v[2] + -6.0;
              v74 = v53->preferNearLastTeamSpawnScores[2];
              v165 = xyz;
              v75 = j_va("Near Last Team Spawn (ALLIES): %f", v74);
              G_Main_AddDebugString(&v165, &v156, 0.40000001, v75);
            }
            break;
          case 3:
            if ( s_spawnGlobals.lastTeamSpawn[1] == v46 )
            {
              v68 = *(double *)v53->groundPos.v;
              v160.v[2] = v53->groundPos.v[2];
              v160.v[2] = v160.v[2] + 180.0;
              v69 = record->angles.v[1];
              *(double *)v160.v = v68;
              G_PlayerSpawnPoints_DebugLastTeamSpawnShape(&v53->groundPos, v69, &v159);
              G_Main_AddDebugString(&v160, &v159, 0.40000001, "Last Team Spawn: AXIS");
            }
            else if ( s_spawnGlobals.lastTeamSpawn[1] >= 0 )
            {
              xyz.v[2] = xyz.v[2] + -6.0;
              v70 = v53->preferNearLastTeamSpawnScores[1];
              v164 = xyz;
              v71 = j_va("Near Last Team Spawn (AXIS): %f", v70);
              G_Main_AddDebugString(&v164, &v159, 0.40000001, v71);
            }
            break;
        }
LABEL_174:
        if ( v130 && v53->usedInLastSelection )
        {
          v169 = colorCyan;
          if ( v53->record->index == v141 )
            v169 = *(vec4_t *)box.midPoint.v;
          xyz.v[2] = xyz.v[2] + -24.0;
          v93 = j_va("[ %.3f ]", v53->scoreData.totalScore);
          G_Main_AddDebugString(&xyz, &v169, 1.6, v93);
        }
        if ( v131 && v53->usedInLastSelection )
        {
          xyz.v[2] = xyz.v[2] + -18.0;
          _XMM3 = 0i64;
          __asm { vroundss xmm3, xmm3, xmm1, 2 }
          v96 = j_va("TTLOS: %d", (unsigned int)(int)*(float *)&_XMM3);
          G_Main_AddDebugString(&xyz, &v163, 1.25, v96);
        }
        if ( v132 && v53->usedInLastSelection && v53->scoreData.criticalScore )
        {
          xyz.v[2] = xyz.v[2] + -24.0;
          v97 = v53->scoreData.criticalScore;
          if ( v97 == CS_GOOD )
          {
            v98 = "crit factors GOOD";
          }
          else
          {
            String = G_PlayerSpawnPoints_FailedCritReason_GetString(v53->scoreData.csScoreReason);
            v100 = "crit fail OK: %s";
            if ( v97 != CS_OK )
              v100 = "crit fail BAD: %s";
            v98 = j_va(v100, String);
          }
          G_Main_AddDebugString(&xyz, &v157, 1.6, v98);
        }
        v101 = (__int64)v142;
        if ( v133 )
        {
          xyz.v[2] = xyz.v[2] + -6.0;
          v102 = SL_ConvertToString(v142->name);
          v103 = j_va("name: %s", v102);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v103);
        }
        if ( v134 && v53->usedInLastSelection )
        {
          xyz.v[2] = xyz.v[2] + -6.0;
          v104 = j_va("SightStanding: [ %f ]", v53->enemySightData.maxSightValue);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v104);
          xyz.v[2] = xyz.v[2] + -6.0;
          v105 = j_va("SightWithJumping: [ %f ]", v53->enemySightData.maxJumpSightValue);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v105);
          xyz.v[2] = xyz.v[2] + -6.0;
          v106 = j_va("NearbyPathnodes: %d", v53->nearbyPathNodeCount);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v106);
        }
        if ( v135 )
        {
          xyz.v[2] = xyz.v[2] + -6.0;
          v107 = vtos((const vec3_t *)(v101 + 16));
          v108 = j_va("origin: %s", v107);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v108);
          xyz.v[2] = xyz.v[2] + -6.0;
          v109 = vtos((const vec3_t *)(v101 + 28));
          v110 = j_va("angles: %s", v109);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v110);
        }
        if ( v136 )
        {
          if ( *(_DWORD *)(v101 + 12) != 1 )
          {
            xyz.v[2] = xyz.v[2] + -6.0;
            v111 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v101 + 12));
            v112 = j_va("noteworthy: %s", v111);
            G_Main_AddDebugString(&xyz, &v158, 0.40000001, v112);
          }
          if ( *(_DWORD *)(v101 + 8) != 1 )
          {
            xyz.v[2] = xyz.v[2] + -6.0;
            v113 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v101 + 8));
            v114 = j_va("target: %s", v113);
            G_Main_AddDebugString(&xyz, &v158, 0.40000001, v114);
          }
        }
        if ( v137 )
        {
          v115 = "Disabled";
          if ( v145 )
            v115 = "Enabled";
          xyz.v[2] = xyz.v[2] + -6.0;
          v116 = j_va("allies: %s", v115);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v116);
          v117 = "Disabled";
          if ( v146 )
            v117 = "Enabled";
          xyz.v[2] = xyz.v[2] + -6.0;
          v118 = j_va("axis: %s", v117);
          G_Main_AddDebugString(&xyz, &v158, 0.40000001, v118);
        }
        if ( v138 && v53->usedInLastSelection )
        {
          xyz.v[2] = xyz.v[2] + -6.0;
          G_Main_AddDebugString(&xyz, &v157, 0.40000001, "[ Axis, Allies ] Weight - FactorName");
          factorScores = v53->factorScores;
          v120 = 0;
          v121 = v139;
          v122 = s_scoreFactorsTable;
          while ( 1 )
          {
            FactorWeight = G_PlayerSpawnPoints_GetFactorWeight((SpawnFactors)v120);
            if ( *(float *)&FactorWeight > 0.0 )
              break;
            if ( v121 )
            {
              v157.v[3] = FLOAT_0_69999999;
LABEL_216:
              name = v122->name;
              xyz.v[2] = xyz.v[2] + -6.0;
              v125 = j_va("[ %.3f ] %.3f - %s", *factorScores, *(float *)&FactorWeight, name);
              G_Main_AddDebugString(&xyz, &v157, 0.40000001, v125);
            }
            ++v120;
            ++factorScores;
            ++v122;
            if ( v120 >= 22 )
            {
              v53 = v149;
              goto LABEL_219;
            }
          }
          v157.v[3] = FLOAT_1_0;
          goto LABEL_216;
        }
LABEL_219:
        G_PlayerSpawnPoints_DebugSpawnPathNodes(v53, &shapeCount);
        v49 = shapeCount;
        v46 = pathNodeListOutCount;
        v51 = *(_QWORD *)pathNodeIndexListOut;
        integer = v147;
LABEL_220:
        v47 = v150;
        v48 = v151;
        v50 = v148;
        ++v46;
        ++v51;
        pathNodeListOutCount = v46;
        *(_QWORD *)pathNodeIndexListOut = v51;
      }
      while ( v51 < *(__int64 *)start.v );
    }
    s_spawnGlobals.debugNumSpawnsInLastDraw = v49;
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawClusters
==============
*/
void G_PlayerSpawnPoints_DebugDrawClusters()
{
  const dvar_t *v0; 
  float *v1; 
  int v2; 
  int v3; 
  float v4; 
  float v5; 
  int v6; 
  int *i; 
  vec3_t *p_currentOrigin; 
  vec3_t origin; 
  Bounds box; 
  vec4_t color; 
  vec4_t v12; 
  vec4_t v13; 
  vec4_t v14; 
  vec4_t v15; 

  v0 = DVARBOOL_g_playerspawns_debugClusters;
  if ( !DVARBOOL_g_playerspawns_debugClusters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugClusters") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    color = colorMagenta;
    v12 = colorGreen;
    v1 = &s_clusterData.playerClusters[0].center.v[2];
    v13 = colorOrange;
    v2 = 0;
    v14 = colorCyan;
    v3 = 0;
    v15 = colorBlue;
    *(_OWORD *)box.midPoint.v = _xmm;
    box.halfSize.v[1] = FLOAT_10_0;
    box.halfSize.v[2] = FLOAT_10_0;
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v3 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      if ( *((int *)v1 - 3) > 0 )
      {
        v4 = *(v1 - 1);
        origin.v[0] = *(v1 - 2);
        v5 = *v1;
        origin.v[1] = v4;
        origin.v[2] = v5;
        G_DebugBox(&origin, &box, 0.0, &color + v2, 0, 1);
        v6 = 0;
        for ( i = s_clusterData.clusterAssignment; ; ++i )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( v6 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
            break;
          if ( *i == v3 )
          {
            p_currentOrigin = &level.gentities[v6].r.currentOrigin;
            G_DebugBox(p_currentOrigin, &box, 0.0, &color + v2, 0, 1);
            G_DebugLineWithDuration(&origin, p_currentOrigin, &color + v2, 0, 1);
          }
          ++v6;
        }
        ++v2;
      }
      ++v3;
      v1 += 4;
    }
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawFrontline
==============
*/
void G_PlayerSpawnPoints_DebugDrawFrontline(void)
{
  const dvar_t *v0; 
  __int128 unsignedInt; 
  const dvar_t *v2; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  vec3_t v16; 
  vec3_t end; 
  vec3_t start; 
  vec3_t v19; 
  vec3_t v20; 

  v0 = DVARFLT_g_playerspawns_FrontlineMinZ;
  if ( !DVARFLT_g_playerspawns_FrontlineMinZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineMinZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  unsignedInt = v0->current.unsignedInt;
  v2 = DVARFLT_g_playerspawns_FrontlineMaxZ;
  if ( !DVARFLT_g_playerspawns_FrontlineMaxZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineMaxZ") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v4 = DVARFLT_g_playerspawns_FrontlineStep;
  if ( !DVARFLT_g_playerspawns_FrontlineStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_FrontlineStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.value;
  if ( s_frontLineData.enabled && s_frontLineData.isValidData )
  {
    v6 = DVARBOOL_g_playerspawns_debugFrontline;
    if ( !DVARBOOL_g_playerspawns_debugFrontline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugFrontline") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      v7 = s_frontLineData.midpoint.v[0];
      v8 = s_frontLineData.midpoint.v[1];
      v16.v[0] = s_frontLineData.midpoint.v[0];
      v16.v[1] = s_frontLineData.midpoint.v[1];
      if ( *(float *)&unsignedInt <= value )
      {
        v9 = 200.0 * s_frontLineData.frontlineForwardDir.v[0];
        v10 = 200.0 * s_frontLineData.frontlineForwardDir.v[1];
        v11 = 200.0 * s_frontLineData.frontlineForwardDir.v[2];
        v12 = 3000.0 * s_frontLineData.frontlineRightDir.v[0];
        v13 = 3000.0 * s_frontLineData.frontlineRightDir.v[1];
        v14 = 3000.0 * s_frontLineData.frontlineRightDir.v[2];
        while ( 1 )
        {
          v19.v[0] = v9 + v7;
          v19.v[1] = v10 + v8;
          v19.v[2] = v11 + *(float *)&unsignedInt;
          v20.v[0] = v7 - v9;
          v20.v[1] = v8 - v10;
          v20.v[2] = *(float *)&unsignedInt - v11;
          end.v[0] = v12 + v7;
          end.v[1] = v13 + v8;
          end.v[2] = v14 + *(float *)&unsignedInt;
          start.v[0] = v7 - v12;
          start.v[1] = v8 - v13;
          start.v[2] = *(float *)&unsignedInt - v14;
          v16.v[2] = *(float *)&unsignedInt;
          G_DebugLineWithDuration(&start, &end, &colorMagenta, 1, 1);
          G_DebugLineWithDuration(&v16, &v19, &colorRedHeat, 1, 1);
          G_DebugLineWithDuration(&v16, &v20, &colorGreen, 1, 1);
          v15 = unsignedInt;
          *(float *)&v15 = *(float *)&unsignedInt + v5;
          unsignedInt = v15;
          if ( *(float *)&v15 > value )
            break;
          v8 = v16.v[1];
          v7 = v16.v[0];
        }
      }
    }
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
  int v1; 
  int *laneVolumeEntNums; 
  gentity_s *gentities; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 duration; 
  __int64 v8; 
  vec4_t color; 
  vec4_t v10; 
  vec4_t v11; 
  vec4_t v12; 
  vec4_t v13; 

  v0 = DVARBOOL_g_playerspawns_debugLanes;
  if ( !DVARBOOL_g_playerspawns_debugLanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugLanes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    color = colorCyan;
    v10 = colorGreen;
    v11 = colorOrange;
    v1 = 0;
    v12 = colorMagenta;
    v13 = colorBlue;
    if ( s_mapLanes.numLaneVolumes > 0 )
    {
      laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
      do
      {
        gentities = level.gentities;
        v4 = *laneVolumeEntNums;
        v5 = v4;
        if ( (unsigned int)v4 >= 0x800 )
        {
          LODWORD(v8) = 2048;
          LODWORD(duration) = *laneVolumeEntNums;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v8) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v5].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3056, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntIdx )") )
          __debugbreak();
        v6 = 2i64 * v1++;
        G_DebugBox(&gentities[v5].r.currentOrigin, &gentities[v5].r.box, gentities[v5].r.currentAngles.v[1], (vec4_t *)((char *)&color + 8 * v6), 0, 1);
        ++laneVolumeEntNums;
      }
      while ( v1 < s_mapLanes.numLaneVolumes );
    }
  }
}

/*
==============
G_PlayerSpawnPoints_DebugDrawSpawnShape
==============
*/
void G_PlayerSpawnPoints_DebugDrawSpawnShape(const vec3_t *pos, float yaw, const vec4_t *color)
{
  int v5; 
  float v6; 
  float v7; 
  float v8; 
  float c; 
  float s; 
  __int64 v11; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v14; 
  vec3_t v15; 
  vec3_t v16; 
  vec3_t v17; 
  vec3_t v18; 
  vec3_t v19; 

  v5 = 13;
  if ( s_spawnGlobals.debugNumSpawnsInLastDraw > 0 )
  {
    v5 = 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw;
    if ( 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw < 1 )
      v5 = 1;
  }
  v6 = pos->v[2];
  *(_QWORD *)end.v = *(_QWORD *)pos->v;
  end.v[2] = v6;
  *(_QWORD *)start.v = *(_QWORD *)pos->v;
  end.v[2] = v6 + 72.0;
  start.v[2] = v6 + 36.0;
  c = 0.0;
  s = 0.0;
  *(float *)&v11 = 0.0;
  FastSinCos(yaw * 0.017453292, &s, &c);
  v15.v[0] = (float)(s * -16.0) + start.v[0];
  v15.v[1] = (float)(16.0 * c) + start.v[1];
  v16.v[0] = start.v[0] - (float)(s * -16.0);
  v16.v[1] = start.v[1] - (float)(16.0 * c);
  v17.v[0] = (float)(16.0 * c) + start.v[0];
  v17.v[1] = (float)(s * 16.0) + start.v[1];
  v17.v[2] = (float)(16.0 * *(float *)&v11) + start.v[2];
  v7 = (float)((float)(32.0 * c) + start.v[0]) - (float)(16.0 * c);
  v8 = (float)((float)(s * 32.0) + start.v[1]) - (float)(s * 16.0);
  v14.v[2] = (float)(32.0 * *(float *)&v11) + start.v[2];
  v14.v[0] = (float)(32.0 * c) + start.v[0];
  v18.v[0] = v7 + (float)(s * -16.0);
  v18.v[1] = v8 + (float)(16.0 * c);
  v19.v[0] = v7 - (float)(s * -16.0);
  v19.v[1] = v8 - (float)(16.0 * c);
  v15.v[2] = start.v[2];
  v16.v[2] = start.v[2];
  v14.v[1] = (float)(s * 32.0) + start.v[1];
  v18.v[2] = v14.v[2] - (float)(16.0 * *(float *)&v11);
  v19.v[2] = v18.v[2];
  G_DebugLine(pos, &end, color, 0);
  if ( v5 >= 2 )
    G_DebugLine(&start, &v14, color, 0);
  if ( v5 >= 6 )
  {
    G_DebugLine(pos, &v15, color, 0);
    G_DebugLine(pos, &v16, color, 0);
    G_DebugLine(&end, &v15, color, 0);
    G_DebugLine(&end, &v16, color, 0);
  }
  if ( v5 >= 10 )
  {
    G_DebugLine(pos, &v17, color, 0);
    G_DebugLine(&end, &v17, color, 0);
    G_DebugLine(&v18, &v14, color, 0);
    G_DebugLine(&v19, &v14, color, 0);
  }
}

/*
==============
G_PlayerSpawnPoints_DebugLastTeamSpawnShape
==============
*/
void G_PlayerSpawnPoints_DebugLastTeamSpawnShape(const vec3_t *spawnPosition, float yaw, const vec4_t *color)
{
  float v3; 
  double v4; 
  vec3_t end; 
  vec3_t start; 

  v3 = spawnPosition->v[2];
  v4 = *(double *)spawnPosition->v;
  *(double *)start.v = v4;
  *(double *)end.v = v4;
  start.v[0] = *(float *)&v4 + 5.0;
  start.v[2] = v3;
  end.v[2] = v3 + 180.0;
  end.v[0] = *(float *)&v4 + 5.0;
  G_DebugLine(&start, &end, color, 0);
  start.v[0] = start.v[0] + -10.0;
  end.v[0] = end.v[0] + -10.0;
  G_DebugLine(&start, &end, color, 0);
  start.v[0] = start.v[0] + 5.0;
  end.v[1] = end.v[1] + 5.0;
  end.v[0] = end.v[0] + 5.0;
  start.v[1] = start.v[1] + 5.0;
  G_DebugLine(&start, &end, color, 0);
  start.v[1] = start.v[1] + -10.0;
  end.v[1] = end.v[1] + -10.0;
  G_DebugLine(&start, &end, color, 0);
}

/*
==============
G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape
==============
*/
void G_PlayerSpawnPoints_DebugPreviousTeamSpawnShape(const vec3_t *spawnPosition, float yaw, const vec4_t *color)
{
  float v3; 
  double v4; 
  vec3_t end; 
  vec3_t start; 

  v3 = spawnPosition->v[2];
  v4 = *(double *)spawnPosition->v;
  *(double *)start.v = v4;
  start.v[0] = *(float *)&v4 + -32.0;
  *(double *)end.v = v4;
  start.v[2] = v3;
  end.v[2] = v3;
  end.v[0] = *(float *)&v4 + 32.0;
  G_DebugLine(&start, &end, color, 0);
  start.v[0] = start.v[0] + 32.0;
  end.v[0] = end.v[0] + -32.0;
  end.v[1] = end.v[1] + 32.0;
  start.v[1] = start.v[1] + -32.0;
  G_DebugLine(&start, &end, color, 0);
}

/*
==============
G_PlayerSpawnPoints_DebugSpawnPathNodes
==============
*/
void G_PlayerSpawnPoints_DebugSpawnPathNodes(const SpawnPointInfo *const spawnInfo, int *shapeCount)
{
  const dvar_t *v2; 
  int v5; 
  __int64 v6; 
  pathnode_t *v7; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v10; 
  vec3_t v11; 
  vec3_t v12; 
  vec3_t v13; 
  vec3_t v14; 
  vec3_t v15; 
  vec3_t pos; 
  Bounds box; 

  v2 = DVARBOOL_g_playerspawns_debugSpawnPathnodes;
  if ( !DVARBOOL_g_playerspawns_debugSpawnPathnodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_debugSpawnPathnodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v5 = 13;
    if ( s_spawnGlobals.debugNumSpawnsInLastDraw > 0 )
    {
      v5 = 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw;
      if ( 2030 / s_spawnGlobals.debugNumSpawnsInLastDraw < 1 )
        v5 = 1;
    }
    v6 = 0i64;
    box.halfSize.v[1] = FLOAT_10_0;
    box.halfSize.v[2] = FLOAT_10_0;
    for ( *(_OWORD *)box.midPoint.v = _xmm; (unsigned int)v6 < spawnInfo->nearbyPathNodeCount; v6 = (unsigned int)(v6 + 1) )
    {
      v7 = Path_ConvertIndexToNode(spawnInfo->nearbyPathNodes[v6]);
      pathnode_t::GetPos(v7, &pos);
      G_DebugLine(&spawnInfo->groundPos, &pos, &colorOrange, 1);
      if ( v5 < 13 )
      {
        start.v[2] = pos.v[2] + 5.0;
        end.v[2] = pos.v[2] + 5.0;
        v10.v[2] = pos.v[2] + 5.0;
        v11.v[2] = pos.v[2] + 5.0;
        *(double *)start.v = *(double *)pos.v;
        start.v[1] = start.v[1] + 5.0;
        *(double *)end.v = *(double *)pos.v;
        end.v[1] = end.v[1] + 5.0;
        *(double *)v10.v = *(double *)pos.v;
        v10.v[1] = v10.v[1] + -5.0;
        *(double *)v11.v = *(double *)pos.v;
        v11.v[1] = v11.v[1] + -5.0;
        *(double *)v12.v = *(double *)pos.v;
        v12.v[1] = v12.v[1] + 5.0;
        v12.v[2] = pos.v[2] + -5.0;
        *(double *)v13.v = *(double *)pos.v;
        *(double *)v14.v = *(double *)pos.v;
        *(double *)v15.v = *(double *)pos.v;
        v13.v[1] = v13.v[1] + 5.0;
        v13.v[2] = pos.v[2] + -5.0;
        v14.v[1] = v14.v[1] + -5.0;
        v14.v[2] = pos.v[2] + -5.0;
        v15.v[1] = v15.v[1] + -5.0;
        start.v[0] = pos.v[0] + 5.0;
        end.v[0] = pos.v[0] - 5.0;
        v10.v[0] = pos.v[0] - 5.0;
        v11.v[0] = pos.v[0] + 5.0;
        v12.v[0] = pos.v[0] + 5.0;
        v13.v[0] = pos.v[0] - 5.0;
        v14.v[0] = pos.v[0] - 5.0;
        v15.v[0] = pos.v[0] + 5.0;
        v15.v[2] = pos.v[2] + -5.0;
        if ( v5 >= 5 )
        {
          G_DebugLine(&start, &end, &colorOrange, 1);
          G_DebugLine(&end, &v10, &colorOrange, 1);
          G_DebugLine(&v10, &v11, &colorOrange, 1);
          G_DebugLine(&v11, &start, &colorOrange, 1);
        }
        if ( v5 >= 9 )
        {
          G_DebugLine(&start, &v12, &colorOrange, 1);
          G_DebugLine(&end, &v13, &colorOrange, 1);
          G_DebugLine(&v10, &v14, &colorOrange, 1);
          G_DebugLine(&v11, &v15, &colorOrange, 1);
        }
      }
      else
      {
        G_DebugBox(&pos, &box, 0.0, &colorOrange, 1, 1);
      }
      ++*shapeCount;
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
  float v1; 
  float v2; 
  float v4; 
  float v5; 
  float v6; 
  __int64 passEntityNum; 
  __int64 passEntityNuma; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v1 = origin->v[0];
  v2 = origin->v[1];
  start.v[2] = origin->v[2];
  end.v[2] = start.v[2] + 128.0;
  start.v[0] = v1;
  start.v[1] = v2;
  end.v[0] = v1;
  end.v[1] = v2;
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
  v4 = results.fraction * 128.0;
  v5 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  end.v[2] = v5 - 1000.0;
  start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  start.v[2] = v5;
  end.v[0] = start.v[0];
  end.v[1] = start.v[1];
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
  if ( (float)(results.fraction * 512.0) > (float)(v4 + 96.0) )
  {
    LODWORD(passEntityNum) = (int)origin->v[2];
    Com_PrintError(23, "ERROR: Spawn point has no ground below it within 1000 units at (%i, %i, %i)\n", (unsigned int)(int)origin->v[0], (unsigned int)(int)origin->v[1], passEntityNum);
  }
  if ( (unsigned __int16)(Trace_GetEntityHitId(&results) - 2046) > 1u )
  {
    LODWORD(passEntityNum) = (int)origin->v[2];
    Com_PrintError(23, "ERROR: Spawn point has a mover below it at (%i, %i, %i), but can not ride it\n", (unsigned int)(int)origin->v[0], (unsigned int)(int)origin->v[1], passEntityNum);
  }
  start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  start.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  G_Main_TraceCapsule(&results, &start, &start, &playerBox, 2047, 33636369);
  if ( results.allsolid )
  {
    LODWORD(passEntityNuma) = (int)origin->v[2];
    Com_PrintError(23, "ERROR: Spawn point is in solid at (%i, %i, %i)\n", (unsigned int)(int)origin->v[0], (unsigned int)(int)origin->v[1], passEntityNuma);
  }
  v6 = start.v[1];
  origin->v[0] = start.v[0];
  origin->v[2] = start.v[2];
  origin->v[1] = v6;
}

/*
==============
G_PlayerSpawnPoints_DumpSelectionResults
==============
*/
void G_PlayerSpawnPoints_DumpSelectionResults(spawnSelectionSpec *selectionSpec, spawnSelectionResults *results)
{
  const dvar_t *v2; 
  spawnSelectionResults *v3; 
  spawnSelectionSpec *v4; 
  CriticalFactorEntry *v5; 
  __int64 v6; 
  int v7; 
  char *v8; 
  unsigned __int8 v9; 
  int v10; 
  const char *v11; 
  float *v12; 
  SpawnFactorEntry *v13; 
  int v14; 
  bool v15; 
  float v16; 
  const dvar_t *v17; 
  CriticalFactorEntry *v18; 
  unsigned int *badSpawnsHistogram; 
  unsigned int *okSpawnsHistogram; 
  int bestSpawnPointCriticalScore; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  float *v25; 
  int v28; 
  __int64 v29; 

  v2 = DVARBOOL_g_playerspawns_dumpSelectionResults;
  v3 = results;
  v4 = selectionSpec;
  if ( !DVARBOOL_g_playerspawns_dumpSelectionResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpSelectionResults") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Com_Printf(16, "\n------\nSpawnpoint Selection Begin\n------\n\n");
    v5 = s_criticalFactorsTable;
    v28 = 0;
    if ( s_spawnPoints.spawnCount > 0 )
    {
      v6 = 0i64;
      v29 = 0i64;
      v7 = 0;
      do
      {
        v8 = (char *)s_spawnPoints.spawnPoints + v6;
        v9 = 1 << v4->spawningTeam;
        v25 = (float *)((char *)s_spawnPoints.spawnPoints + v6);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
          __debugbreak();
        if ( (v9 & (unsigned __int8)v8[48]) != 0 )
        {
          Com_Printf(16, "SP:%3d\n", (unsigned int)v7);
          v10 = *((_DWORD *)v8 + 377);
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              Com_Printf(16, "\tCriticalScore: GOOD\n");
            }
            else
            {
              if ( v10 == 2 )
              {
                Com_Printf(16, "\tCriticalScore: OK\n");
              }
              else
              {
                if ( v10 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 3880, ASSERT_TYPE_ASSERT, "(spawnPoint->scoreData.criticalScore == CS_BAD)", (const char *)&queryFormat, "spawnPoint->scoreData.criticalScore == CS_BAD") )
                  __debugbreak();
                Com_Printf(16, "\tCriticalScore: BAD\n");
              }
              Com_Printf(16, "\tCriticalReason: %s\n", s_criticalFactorsTable[*((int *)v8 + 378)].name);
            }
          }
          if ( v4->respectFrontline )
          {
            v11 = "enemy";
            if ( !v8[1530] )
              v11 = "friendly";
            Com_Printf(16, "\tFrontlineTeam: %s\n", v11);
          }
          v12 = s_weightsTable;
          v13 = s_scoreFactorsTable;
          v14 = 0;
          v15 = 1;
          do
          {
            if ( !v15 )
            {
              LODWORD(v24) = 22;
              LODWORD(v23) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            v16 = *v12;
            if ( *v12 > 0.0 )
            {
              v17 = DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled;
              if ( !DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_scrScoreFactorEnabled") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v17);
              if ( v17->current.enabled || v14 != 21 )
                Com_Printf(16, "\tF:%2d\t ( %.3f * %.4f ) = %.4f, ( %s )\n", (unsigned int)v14, v16, *(float *)((char *)v12 + v8 - (char *)s_weightsTable + 604), (float)(*(float *)((char *)v12 + v8 - (char *)s_weightsTable + 604) * v16), v13->name);
            }
            ++v14;
            ++v12;
            ++v13;
            v15 = (unsigned int)v14 < 0x16;
          }
          while ( v14 < 22 );
          Com_Printf(16, "Total Score: %f\n\n", v25[376]);
          v7 = v28;
          v5 = s_criticalFactorsTable;
          v4 = selectionSpec;
        }
        v6 = v29 + 1552;
        v28 = ++v7;
        v29 += 1552i64;
      }
      while ( v7 < s_spawnPoints.spawnCount );
      v3 = results;
    }
    Com_Printf(16, "Spawnpoint Selection Results\n");
    if ( s_frontLineData.spawningTeamIsTrapped )
      Com_Printf(16, "** Team is spawn-trapped!  Ignoring front-line critical factor**\n");
    Com_Printf(16, "Evaluated %d spawn points.\n", (unsigned int)v3->criticalFactors_numSpawnsPoints);
    Com_Printf(16, "Found %d Good Spawns.\n", (unsigned int)v3->numGoodSpawns);
    Com_Printf(16, "Found %d Ok Spawns.\n", (unsigned int)v3->numOkSpawns);
    Com_Printf(16, "Found %d Bad Spawns.\n", (unsigned int)v3->numBadSpawns);
    Com_Printf(16, "\tBadSpawnReasons.\n");
    v18 = s_criticalFactorsTable;
    badSpawnsHistogram = (unsigned int *)v3->badSpawnsHistogram;
    do
    {
      Com_Printf(16, "\t%s - %d\n", v18->name, *badSpawnsHistogram);
      ++v18;
      ++badSpawnsHistogram;
    }
    while ( (__int64)v18 < (__int64)&unk_145087120 );
    Com_Printf(16, "\n\tOkSpawnReasons.\n");
    okSpawnsHistogram = (unsigned int *)v3->okSpawnsHistogram;
    do
    {
      Com_Printf(16, "\t%s - %d\n", v5->name, *okSpawnsHistogram);
      ++v5;
      ++okSpawnsHistogram;
    }
    while ( (__int64)v5 < (__int64)&unk_145087120 );
    Com_Printf(16, "Selected Spawnpoint %d with score %f.\n", (unsigned int)v3->bestSpawnPointIdx, v3->bestSpawnPointScore);
    bestSpawnPointCriticalScore = v3->bestSpawnPointCriticalScore;
    if ( bestSpawnPointCriticalScore != 1 )
    {
      v22 = "OK";
      if ( bestSpawnPointCriticalScore == 3 )
        v22 = "BAD";
      Com_Printf(16, "Selected Spawnpoint had critical score %s.\n", v22);
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
  s_frontLineData.anchorDir = *direction;
  s_frontLineData.anchorPos = *pos;
}

/*
==============
G_PlayerSpawnPoints_EnableSingleOriginSpawn
==============
*/
void G_PlayerSpawnPoints_EnableSingleOriginSpawn(team_t team, const vec3_t *origin)
{
  SpawnPointEntityRecord *record; 
  float v4; 

  record = s_spawnPoints.singleOriginSpawnPoint.record;
  v4 = origin->v[2];
  *(double *)s_spawnPoints.singleOriginSpawnPoint.record->origin.v = *(double *)origin->v;
  record->origin.v[2] = v4;
  s_spawnPoints.singleOriginSpawnPoint.groundPos = s_spawnPoints.singleOriginSpawnPoint.record->origin;
  G_PlayerSpawnPoints_DropToGround(&s_spawnPoints.singleOriginSpawnPoint.groundPos);
  s_spawnPoints.singleOriginSpawnPoint.finalGroundPos = s_spawnPoints.singleOriginSpawnPoint.groundPos;
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
  spawnSelectionSpec *v3; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  int v6; 
  __int64 v7; 
  SpawnPointScoreData *p_scoreData; 
  unsigned __int8 v9; 
  const float *v10; 
  int v11; 
  bool v12; 
  __int128 v13; 
  double v14; 
  __int128 v15; 
  __int64 v16; 
  __int64 v17; 

  v3 = selectionSpec;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_FinalScores");
  if ( v3->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v6 = 0;
  v7 = spawnCount;
  if ( spawnCount > 0 )
  {
    p_scoreData = &p_singleOriginSpawnPoint->scoreData;
    do
    {
      v9 = 1 << v3->spawningTeam;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v9 & p_scoreData[-122].csScoreReason) != 0 && (selectionResults->numGoodSpawns <= 0 || (unsigned int)(p_scoreData->criticalScore - 2) > 1) && (selectionResults->numOkSpawns <= 0 || p_scoreData->criticalScore != CS_BAD) )
      {
        v10 = s_weightsTable;
        v11 = 0;
        v12 = 1;
        v13 = 0i64;
        do
        {
          if ( !v12 )
          {
            LODWORD(v17) = 22;
            LODWORD(v16) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( *v10 > 0.0 )
          {
            v14 = G_GameInterface_CalcSpawnPointScore(*(const float *)((char *)v10 + (char *)p_scoreData - (char *)&s_clusterData.clusterAssignment[188]), *v10, v11);
            v15 = v13;
            *(float *)&v15 = *(float *)&v13 + *(float *)&v14;
            v13 = v15;
          }
          ++v11;
          ++v10;
          v12 = (unsigned int)v11 < 0x16;
        }
        while ( v11 < 22 );
        v3 = selectionSpec;
        if ( *(float *)&v13 != p_scoreData->totalScore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2656, ASSERT_TYPE_ASSERT, "(spawnpointTotalScore == currSpawnPoint->scoreData.totalScore)", (const char *)&queryFormat, "spawnpointTotalScore == currSpawnPoint->scoreData.totalScore") )
          __debugbreak();
        if ( p_scoreData->totalScore > selectionResults->bestSpawnPointScore )
        {
          selectionResults->bestSpawnPointScore = p_scoreData->totalScore;
          selectionResults->bestSpawnPointCriticalScore = p_scoreData->criticalScore;
          selectionResults->bestSpawnPointIdx = v6;
        }
      }
      ++v6;
      p_scoreData = (SpawnPointScoreData *)((char *)p_scoreData + 1552);
      --v7;
    }
    while ( v7 );
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
  spawnSelectionResults *v3; 
  spawnSelectionSpec *v4; 
  SpawnPointInfo *p_singleOriginSpawnPoint; 
  int spawnCount; 
  __int64 v7; 
  SpawnPointScoreData *p_scoreData; 
  unsigned __int8 v9; 
  float (__fastcall **p_func)(SpawnPointInfo *, const gentity_s *const, spawnPointEvaluationData *); 
  float *v11; 
  int v12; 
  bool v13; 
  float v14; 
  const dvar_t *v15; 
  double v16; 
  double v17; 
  __int64 v18; 
  __int64 v19; 
  gentity_s *ent; 
  __int64 v24; 

  v3 = selectionResults;
  v4 = selectionSpec;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_ScoreFactors");
  ent = G_GetGEntity(v4->spawningPlayerEntNum);
  if ( v4->singleOriginMode )
  {
    p_singleOriginSpawnPoint = &s_spawnPoints.singleOriginSpawnPoint;
    spawnCount = 1;
  }
  else
  {
    p_singleOriginSpawnPoint = s_spawnPoints.spawnPoints;
    spawnCount = s_spawnPoints.spawnCount;
  }
  v7 = spawnCount;
  v24 = spawnCount;
  if ( spawnCount > 0 )
  {
    p_scoreData = &p_singleOriginSpawnPoint->scoreData;
    do
    {
      v9 = 1 << v4->spawningTeam;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
        __debugbreak();
      if ( (v9 & p_scoreData[-122].csScoreReason) != 0 && (v3->numGoodSpawns <= 0 || (unsigned int)(p_scoreData->criticalScore - 2) > 1) && (v3->numOkSpawns <= 0 || p_scoreData->criticalScore != CS_BAD) )
      {
        p_func = &s_scoreFactorsTable[0].func;
        v11 = s_weightsTable;
        v12 = 0;
        v13 = 1;
        do
        {
          if ( !v13 )
          {
            LODWORD(v19) = 22;
            LODWORD(v18) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v14 = *v11;
          if ( *v11 > 0.0 )
          {
            v15 = DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled;
            if ( !DCONST_DVARBOOL_g_playerspawns_scrScoreFactorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_scrScoreFactorEnabled") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v15);
            if ( v15->current.enabled || v12 != 21 )
            {
              v16 = EvalueSpawnScoringFactor(*p_func, (SpawnPointInfo *)&p_scoreData[-126].csScoreReason, ent, sData);
              *(float *)((char *)v11 + (char *)p_scoreData - (char *)&s_clusterData.clusterAssignment[188]) = *(float *)&v16;
              v17 = G_GameInterface_CalcSpawnPointScore(*(const float *)&v16, v14, v12);
              p_scoreData->totalScore = *(float *)&v17 + p_scoreData->totalScore;
            }
          }
          ++v12;
          ++v11;
          p_func += 2;
          v13 = (unsigned int)v12 < 0x16;
        }
        while ( v12 < 22 );
        v7 = v24;
        v3 = selectionResults;
      }
      v4 = selectionSpec;
      p_scoreData = (SpawnPointScoreData *)((char *)p_scoreData + 1552);
      v24 = --v7;
    }
    while ( v7 );
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

  if ( !selectionSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2675, ASSERT_TYPE_ASSERT, "(selectionSpec)", (const char *)&queryFormat, "selectionSpec") )
    __debugbreak();
  if ( !selectionResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2676, ASSERT_TYPE_ASSERT, "(selectionResults)", (const char *)&queryFormat, "selectionResults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "FindBestSpawnBucket");
  selectionSpec->useTeams = s_spawnGlobals.usingTeams;
  selectionSpec->isGroundWar = s_spawnGlobals.isGroundWar;
  selectionSpec->groundWarNearbyEnemyBadDist = s_spawnGlobals.groundWarNearbyEnemyBadDist;
  selectionSpec->groundWarNearbyEnemyOkDist = s_spawnGlobals.groundWarNearbyEnemyOkDist;
  G_PlayerSpawnPoints_Evaluate_Reset(selectionSpec);
  G_PlayerSpawnPoints_Evaluate_PreCalc(selectionSpec, &sData);
  G_PlayerSpawnPoints_Evaluate_CriticalFactors(selectionSpec, selectionResults, &sData);
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
  __int64 v8; 
  unsigned __int8 v9; 
  bool *p_ranTelefrag; 
  int lastBadSpawnTime; 
  spawnPointEvaluationData sData; 

  if ( !selectionSpec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2708, ASSERT_TYPE_ASSERT, "(selectionSpec)", (const char *)&queryFormat, "selectionSpec") )
    __debugbreak();
  if ( !selectionResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2709, ASSERT_TYPE_ASSERT, "(selectionResults)", (const char *)&queryFormat, "selectionResults") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns");
  selectionSpec->useTeams = s_spawnGlobals.usingTeams;
  selectionSpec->isGroundWar = s_spawnGlobals.isGroundWar;
  selectionSpec->groundWarNearbyEnemyBadDist = s_spawnGlobals.groundWarNearbyEnemyBadDist;
  selectionSpec->groundWarNearbyEnemyOkDist = s_spawnGlobals.groundWarNearbyEnemyOkDist;
  G_PlayerSpawnPoints_Evaluate_Reset(selectionSpec);
  G_PlayerSpawnPoints_Evaluate_PreCalc(selectionSpec, &sData);
  G_PlayerSpawnPoints_Evaluate_CriticalFactors(selectionSpec, selectionResults, &sData);
  if ( !selectionResults->numGoodSpawns && !selectionResults->numOkSpawns )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_AllBadCriticalFactors");
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
    v8 = spawnCount;
    if ( spawnCount > 0 )
    {
      v9 = 1 << spawningTeam;
      p_ranTelefrag = &p_singleOriginSpawnPoint->ranTelefrag;
      do
      {
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(teamFlag != 0)", (const char *)&queryFormat, "teamFlag != 0") )
          __debugbreak();
        if ( (v9 & *(p_ranTelefrag - 1496)) != 0 && !*p_ranTelefrag )
          EvalueSpawnCriticalFactor(avoidTelefrag, (SpawnPointInfo *)(p_ranTelefrag - 1544), GEntity, &sData);
        p_ranTelefrag += 1552;
        --v8;
      }
      while ( v8 );
    }
    Sys_ProfEndNamedEvent();
  }
  G_PlayerSpawnPoints_Evaluate_ScoreFactors(selectionSpec, selectionResults, &sData);
  G_PlayerSpawnPoints_Evaluate_FinalScores(selectionSpec, selectionResults);
  lastBadSpawnTime = s_spawnGlobals.lastBadSpawnTime;
  if ( selectionResults->bestSpawnPointCriticalScore == 3 )
    lastBadSpawnTime = level.time;
  s_spawnGlobals.lastBadSpawnTime = lastBadSpawnTime;
  G_PlayerSpawnPoints_DumpSelectionResults(selectionSpec, selectionResults);
  if ( s_frontLineData.enabled )
  {
    selectionResults->frontlineEnabled = s_frontLineData.enabled;
    selectionResults->frontlineUsed = selectionSpec->respectFrontline;
    selectionResults->frontlinePos = s_frontLineData.midpoint;
    selectionResults->frontlineDir = s_frontLineData.frontlineForwardDir;
  }
  s_spawnGlobals.lastSelectionInfo = *selectionSpec;
  s_spawnGlobals.lastSelectionResults = *selectionResults;
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
  __int64 v1; 
  int v4; 

  v1 = factor;
  if ( (unsigned int)factor >= NUM_SPAWN_FACTORS )
  {
    v4 = 22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( factor ) < (unsigned)( ( sizeof( *array_counter( s_weightsTable ) ) + 0 ) )", "factor doesn't index ARRAY_COUNT( s_weightsTable )\n\t%i not in [0, %i)", factor, v4) )
      __debugbreak();
  }
  return s_weightsTable[v1];
}

/*
==============
G_PlayerSpawnPoints_GetGroundWarSpawnVariables
==============
*/
void G_PlayerSpawnPoints_GetGroundWarSpawnVariables(float *nearbyEnemyBadDist, float *nearbyEnemyOkDist)
{
  *nearbyEnemyBadDist = s_spawnGlobals.groundWarNearbyEnemyBadDist;
  *nearbyEnemyOkDist = s_spawnGlobals.groundWarNearbyEnemyOkDist;
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
  __int64 v4; 
  gentity_s *v5; 

  v2 = index;
  if ( (unsigned int)index >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 256 )", "index doesn't index MAX_SPAWN_INFLUENCE_POINTS\n\t%i not in [0, %i)", index, 256) )
    __debugbreak();
  v4 = v2;
  if ( !s_influencePoints.influencePoints[v4].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1219, ASSERT_TYPE_ASSERT, "(influencePt->inUse)", (const char *)&queryFormat, "influencePt->inUse") )
    __debugbreak();
  if ( EntHandle::isDefined(&s_influencePoints.influencePoints[v4].linkToEnt) )
  {
    v5 = EntHandle::ent(&s_influencePoints.influencePoints[v4].linkToEnt);
    *outPos = v5->r.currentOrigin;
    s_influencePoints.influencePoints[v4].pos = v5->r.currentOrigin;
  }
  else
  {
    *(double *)outPos->v = *(double *)s_influencePoints.influencePoints[v4].pos.v;
    outPos->v[2] = s_influencePoints.influencePoints[v4].pos.v[2];
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
  int v1; 
  SpawnPointEntityRecord *record; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  __int64 v11; 
  float v13; 
  vec3_t start; 
  vec3_t end; 
  vec3_t right; 
  trace_t results; 

  v1 = 0;
  info->alternateGroundPositionsCount = 0;
  do
  {
    AngleVectors(&info->record->angles, NULL, &right, NULL);
    record = info->record;
    if ( v1 )
    {
      v4 = record->origin.v[0] - (float)(45.0 * right.v[0]);
      v5 = record->origin.v[1] - (float)(45.0 * right.v[1]);
      v6 = record->origin.v[2] - (float)(45.0 * right.v[2]);
    }
    else
    {
      v4 = (float)(45.0 * right.v[0]) + record->origin.v[0];
      v5 = (float)(45.0 * right.v[1]) + record->origin.v[1];
      v6 = (float)(45.0 * right.v[2]) + record->origin.v[2];
    }
    v13 = record->origin.v[2];
    *(_QWORD *)start.v = *(_QWORD *)record->origin.v;
    start.v[2] = v13;
    end.v[0] = start.v[0];
    end.v[1] = start.v[1];
    end.v[2] = v13 + 18.0;
    G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
    v7 = results.fraction * 18.0;
    if ( !results.startsolid && !results.allsolid )
    {
      start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      start.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      end.v[0] = v4;
      end.v[1] = v5;
      end.v[2] = v6 + v7;
      G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
      if ( results.fraction >= 1.0 )
      {
        v8 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
        end.v[2] = v8 - (float)(v7 + 60.0);
        start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
        start.v[2] = v8;
        end.v[0] = start.v[0];
        end.v[1] = start.v[1];
        G_Main_TraceCapsule(&results, &start, &end, &playerBox, 2047, 33636369);
        if ( results.fraction != 1.0 && !results.startsolid && !results.allsolid )
        {
          v9 = LODWORD(end.v[0]);
          *(float *)&v9 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
          _XMM6 = v9;
          v11 = 3i64 * info->alternateGroundPositionsCount + 6;
          *(float *)&v9 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
          __asm { vunpcklps xmm0, xmm6, xmm5 }
          *(SpawnPointEntityRecord **)((char *)&info->record + 4 * v11) = *(SpawnPointEntityRecord **)&_XMM0;
          start.v[2] = *(float *)&v9;
          LODWORD(info->groundPos.v[v11]) = v9;
          ++info->alternateGroundPositionsCount;
        }
      }
    }
    ++v1;
  }
  while ( v1 < 2 );
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
  SpawnPointEntityRecord *record; 
  const char *v3; 
  SpawnPointEntityRecord *v4; 
  int v5; 
  int *laneVolumeEntNums; 
  __int64 v7; 
  const gentity_s *v8; 
  unsigned int Instance; 
  __int64 v10; 
  __int64 v11; 

  record = info->record;
  if ( record->angles.v[0] != 0.0 || record->angles.v[2] != 0.0 )
  {
    v3 = vtos(&record->origin);
    Com_PrintWarning(16, "Spawnpoint at pos %s has bad angles, player will spawn tilted, please fix, only yaw should be adjusted for spawn point placement.\n.", v3);
  }
  G_PlayerSpawnPoints_InitAlternatePositions(info);
  v4 = info->record;
  info->groundPos.v[0] = info->record->origin.v[0];
  info->groundPos.v[1] = v4->origin.v[1];
  info->groundPos.v[2] = v4->origin.v[2];
  G_PlayerSpawnPoints_DropToGround(&info->groundPos);
  info->finalGroundPos.v[0] = info->groundPos.v[0];
  info->finalGroundPos.v[1] = info->groundPos.v[1];
  info->finalGroundPos.v[2] = info->groundPos.v[2];
  G_PlayerSpawnPoints_CacheNearbyPathNodes(info);
  v5 = 0;
  if ( s_mapLanes.numLaneVolumes > 0 )
  {
    laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
    do
    {
      v7 = *laneVolumeEntNums;
      v8 = &level.gentities[v7];
      if ( (unsigned int)v7 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = *laneVolumeEntNums;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 715, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntityIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntityIdx )") )
        __debugbreak();
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8);
      if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &info->record->origin, Instance, v8) )
        info->mapLanes |= 1 << v5;
      ++v5;
      ++laneVolumeEntNums;
    }
    while ( v5 < s_mapLanes.numLaneVolumes );
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
void G_PlayerSpawnPoints_InitSpawnPoints()
{
  MapEnts *mapEnts; 
  int spawnCount; 
  signed int spawnsCount; 
  signed int v4; 
  __int64 v5; 
  unsigned int v6; 
  SpawnPointInfo *v7; 
  SpawnPointEntityRecord *spawns; 
  __int64 v11; 
  __int64 v12; 

  _XMM6 = 0i64;
  mapEnts = cm.mapEnts;
  s_frontLineData.teamAvgPos[0].v[0] = 0.0;
  s_frontLineData.teamAvgPos[1].v[2] = 0.0;
  s_frontLineData.frontlineRightDir.v[0] = 0.0;
  s_frontLineData.frontlineRightDir.v[1] = 0.0;
  s_frontLineData.frontlineRightDir.v[2] = 0.0;
  *(_QWORD *)&s_frontLineData.lastUpdateTime = 0i64;
  *(_WORD *)&s_frontLineData.enabled = 0;
  *(_WORD *)&s_frontLineData.contested = 0;
  s_frontLineData.spawningTeamIsTrapped = 0;
  *(_OWORD *)&s_frontLineData.teamAvgPos[0].y = 0i64;
  *(_OWORD *)s_frontLineData.anchorDir.v = 0i64;
  *(_OWORD *)&s_frontLineData.anchorPos.y = 0i64;
  *(_OWORD *)&s_frontLineData.midpoint.z = 0i64;
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
  v4 = 0;
  if ( (_WORD)spawnsCount )
  {
    v5 = 0i64;
    do
    {
      v6 = spawnCount + 1;
      s_spawnPoints.spawnCount = v6;
      if ( v4 >= v6 )
      {
        LODWORD(v12) = v6;
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v7 = &s_spawnPoints.spawnPoints[v5];
      if ( !&s_spawnPoints.spawnPoints[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 500, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
        __debugbreak();
      memset_0(v7, 0, sizeof(SpawnPointInfo));
      spawns = mapEnts->spawnList.spawns;
      v7->frontlineTeam = 3;
      v7->record = &spawns[v4];
      G_PlayerSpawnPoints_InitSpawnPointInfo(v7);
      spawnsCount = mapEnts->spawnList.spawnsCount;
      ++v4;
      spawnCount = s_spawnPoints.spawnCount;
      ++v5;
    }
    while ( v4 < spawnsCount );
  }
  if ( spawnCount > (unsigned __int16)spawnsCount )
  {
    LODWORD(v12) = (unsigned __int16)spawnsCount;
    LODWORD(v11) = spawnCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 509, ASSERT_TYPE_ASSERT, "( s_spawnPoints.spawnCount ) <= ( spawnList.spawnsCount )", "s_spawnPoints.spawnCount <= spawnList.spawnsCount\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  memset_0(&s_spawnPoints.singleOriginSpawnPoint, 0, sizeof(s_spawnPoints.singleOriginSpawnPoint));
  __asm { vunpcklps xmm0, xmm6, xmm6 }
  s_spawnPoints.singleOriginSpawnPointRecord.origin.v[2] = 0.0;
  *(double *)s_spawnPoints.singleOriginSpawnPointRecord.origin.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm6, xmm6 }
  s_spawnPoints.singleOriginSpawnPointRecord.angles.v[2] = 0.0;
  s_spawnPoints.singleOriginSpawnPoint.record = &s_spawnPoints.singleOriginSpawnPointRecord;
  s_spawnPoints.singleOriginSpawnPointRecord.index = 0;
  s_spawnPoints.singleOriginSpawnPointRecord.name = scr_const._;
  *(double *)s_spawnPoints.singleOriginSpawnPointRecord.angles.v = *(double *)&_XMM0;
  s_spawnPoints.singleOriginSpawnPointRecord.target = scr_const._;
  s_spawnPoints.singleOriginSpawnPointRecord.script_noteworthy = scr_const._;
  s_spawnPoints.singleOriginSpawnPoint.frontlineTeam = 3;
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
  float v1; 
  float v2; 
  GUtils *v3; 
  Bounds worldBounds; 

  v1 = position->v[0] + 0.0;
  worldBounds.midPoint.v[1] = position->v[1] + 0.0;
  worldBounds.midPoint.v[0] = v1;
  v2 = position->v[2] + 35.0;
  worldBounds.halfSize = playerBox.halfSize;
  worldBounds.midPoint.v[2] = v2;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
    __debugbreak();
  v3 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2765, ASSERT_TYPE_ASSERT, "(gUtils)", (const char *)&queryFormat, "gUtils") )
    __debugbreak();
  return GUtils::WorldBoundsWouldTelefrag(v3, &worldBounds);
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
  double v13; 
  SpawnPointEntityRecord *v14; 
  SpawnPointEntityRecord *record; 
  float v16; 
  double v17; 
  SpawnPointEntityRecord *v18; 
  __int64 v20; 
  __int64 v21; 

  spawnCount = s_spawnPoints.spawnCount;
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
  v13 = *(double *)origin->v;
  v14 = &s_spawnPoints.scriptedSpawnPointRecords[scriptedSpawnPointRecordCount];
  v11->record = v14;
  v14->index = spawnCount;
  v11->record->name = classname;
  record = v11->record;
  v16 = origin->v[2];
  *(double *)record->origin.v = v13;
  v17 = *(double *)angles->v;
  record->origin.v[2] = v16;
  v18 = v11->record;
  *(float *)&record = angles->v[2];
  *(double *)v18->angles.v = v17;
  LODWORD(v18->angles.v[2]) = (_DWORD)record;
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
  __int128 v4; 
  __int128 v5; 
  float *v6; 
  const char *v9; 
  __int128 v11; 

  v11 = v4;
  v6 = &s_weightsTable[factor];
  _XMM6 = *(_OWORD *)&weight;
  if ( *(float *)&weight < 0.0 )
    __asm { vxorpd  xmm3, xmm3, xmm3 }
  else
    *(double *)&_XMM3 = *(float *)&weight;
  v9 = "Spawn Factor <%s> registered with weight %f.\n";
  if ( *(float *)&weight < 0.0 )
    v9 = "Spawn Factor <%s> disabled with weight %f.\n";
  Com_Printf(16, v9, s_scoreFactorsTable[factor].name, (_QWORD)_XMM3, v5, v11);
  __asm { vmaxss  xmm0, xmm6, xmm7 }
  *v6 = *(float *)&_XMM0;
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
  int v5; 
  __int64 i; 
  gentity_s *v7; 
  int RelativeSpawnTeam; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v14; 

  Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_DistancePerPointPreCalc");
  distToPlayer = spawnPoint->distToPlayer;
  v5 = 0;
  for ( i = 0i64; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v5 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v7 = &level.gentities[i];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[i]) && v7->s.number != selectionSpec->spawningPlayerEntNum )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v7, selectionSpec->spawningTeam);
      v9 = RelativeSpawnTeam;
      if ( (unsigned int)RelativeSpawnTeam > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1807, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY") )
        __debugbreak();
      v10 = 0.0;
      v11 = spawnPoint->record->origin.v[0] - v7->r.currentOrigin.v[0];
      v14 = LODWORD(spawnPoint->record->origin.v[1]);
      *(float *)&v14 = spawnPoint->record->origin.v[1] - v7->r.currentOrigin.v[1];
      v12 = spawnPoint->record->origin.v[2] - v7->r.currentOrigin.v[2];
      *(float *)&v14 = (float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v11 * v11)) + (float)(v12 * v12);
      _XMM6 = v14;
      if ( *(float *)&v14 > 0.001 )
      {
        if ( *(float *)&v14 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        _XMM1 = v14;
        __asm { vrsqrtss xmm2, xmm1, xmm6 }
        v10 = 1.0 / *(float *)&_XMM2;
      }
      *distToPlayer = (int)v10;
      if ( *(float *)&v14 < spawnPoint->distanceData[v9].minDistSquared )
        spawnPoint->distanceData[v9].minDistSquared = *(float *)&v14;
      ++spawnPoint->distanceData[v9].totalPlayers;
      __asm { vminss  xmm1, xmm6, xmm9 }
      spawnPoint->distanceData[v9].distSumSquared = *(float *)&v14 + spawnPoint->distanceData[v9].distSumSquared;
      spawnPoint->distanceData[v9].distSumSquaredCapped = *(float *)&_XMM1 + spawnPoint->distanceData[v9].distSumSquaredCapped;
    }
    ++v5;
    ++distToPlayer;
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  int v8; 
  __int64 v9; 
  float v10; 
  gentity_s *v11; 
  int RelativeSpawnTeam; 
  __int64 v13; 
  float v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  int *v21; 
  int v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  double v33; 
  __int64 spawnCount; 
  __int64 v35; 
  SpawnPointInfo *v36; 
  unsigned __int8 enabledFlags; 
  float v38; 
  const dvar_t *v39; 
  const char *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  vec2_t vec; 
  float v45; 
  vec2_t v46; 
  float v47; 
  vec3_t angles; 
  __int64 v49; 
  __int64 v50[2]; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  _OWORD v55[2]; 

  if ( !s_frontLineData.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2071, ASSERT_TYPE_ASSERT, "(s_frontLineData.enabled)", (const char *)&queryFormat, "s_frontLineData.enabled") )
    __debugbreak();
  if ( !s_spawnGlobals.usingTeams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2072, ASSERT_TYPE_ASSERT, "(s_spawnGlobals.usingTeams)", (const char *)&queryFormat, "s_spawnGlobals.usingTeams") )
    __debugbreak();
  s_frontLineData.isValidData = 1;
  s_frontLineData.lastUpdateTimeDelta = level.time - s_frontLineData.lastUpdateTime;
  s_frontLineData.lastUpdateTime = level.time;
  v43 = 0i64;
  v8 = 0;
  v9 = 0i64;
  v49 = 0i64;
  v50[0] = 0i64;
  v10 = 0.0;
  v50[1] = 0i64;
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v8 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v11 = &level.gentities[v9];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[v9]) )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v11, spawningTeam);
      v13 = RelativeSpawnTeam;
      if ( (unsigned int)RelativeSpawnTeam >= 2 )
      {
        LODWORD(v42) = 2;
        LODWORD(v41) = RelativeSpawnTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2097, ASSERT_TYPE_ASSERT, "(unsigned)( charTeam ) < (unsigned)( 2 )", "charTeam doesn't index NUM_SPAWN_TEAMS\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      v14 = v11->r.currentOrigin.v[0];
      ++*((_DWORD *)&v43 + v13);
      v15 = 3 * v13;
      v16 = v14 + *((float *)&v50[-1] + 3 * v13);
      v17 = v11->r.currentOrigin.v[1];
      *((float *)&v50[-1] + v15) = v16;
      v18 = v17 + *((float *)&v49 + 3 * v13 + 1);
      v19 = v11->r.currentOrigin.v[2];
      *((float *)&v49 + v15 + 1) = v18;
      *((float *)v50 + v15) = v19 + *((float *)v50 + 3 * v13);
    }
    ++v8;
    ++v9;
  }
  v20 = 0;
  v21 = (int *)&v43;
  v22 = 0;
  v23 = 0i64;
  do
  {
    if ( *v21 < 1 )
    {
      s_frontLineData.isValidData = 0;
      return;
    }
    v24 = 1.0 / (float)*v21;
    v25 = v24 * *(float *)((char *)&v50[-1] + v23 * 12);
    v26 = v24 * *(float *)((char *)&v49 + v23 * 12 + 4);
    s_frontLineData.teamAvgPos[v23].v[0] = v25;
    s_frontLineData.teamAvgPos[v23].v[1] = v26;
    s_frontLineData.teamAvgPos[v23].v[2] = 0.0;
    ++v22;
    ++v23;
    ++v21;
  }
  while ( v22 < 2 );
  v27 = _xmm;
  v53 = v4;
  v52 = v5;
  v51 = v6;
  if ( s_frontLineData.usingAnchor )
  {
    v55[1] = v1;
    v55[0] = v2;
    v54 = v3;
    v28 = (float)((float)((float)(s_frontLineData.teamAvgPos[1].v[1] - s_frontLineData.anchorPos.v[1]) * s_frontLineData.anchorDir.v[1]) + (float)((float)(s_frontLineData.teamAvgPos[1].v[0] - s_frontLineData.anchorPos.v[0]) * s_frontLineData.anchorDir.v[0])) + (float)((float)(s_frontLineData.teamAvgPos[1].v[2] - s_frontLineData.anchorPos.v[2]) * s_frontLineData.anchorDir.v[2]);
    v29 = (float)(s_frontLineData.anchorDir.v[0] * v28) + s_frontLineData.anchorPos.v[0];
    v30 = (float)(s_frontLineData.anchorDir.v[1] * v28) + s_frontLineData.anchorPos.v[1];
    v31 = (float)(s_frontLineData.anchorDir.v[2] * v28) + s_frontLineData.anchorPos.v[2];
    v32 = (float)((float)((float)(s_frontLineData.teamAvgPos[0].v[1] - s_frontLineData.anchorPos.v[1]) * s_frontLineData.anchorDir.v[1]) + (float)((float)(s_frontLineData.teamAvgPos[0].v[0] - s_frontLineData.anchorPos.v[0]) * s_frontLineData.anchorDir.v[0])) + (float)((float)(s_frontLineData.teamAvgPos[0].v[2] - s_frontLineData.anchorPos.v[2]) * s_frontLineData.anchorDir.v[2]);
    v27 = _xmm;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - v32) & _xmm) < 600.0 && s_frontLineData.teamDiffYawInitialized )
    {
      s_frontLineData.contested = 1;
      goto LABEL_28;
    }
    vec.v[0] = (float)((float)(s_frontLineData.anchorDir.v[0] * v32) + s_frontLineData.anchorPos.v[0]) - v29;
    s_frontLineData.contested = 0;
    v45 = (float)((float)(s_frontLineData.anchorDir.v[2] * v32) + s_frontLineData.anchorPos.v[2]) - v31;
    vec.v[1] = (float)((float)(s_frontLineData.anchorDir.v[1] * v32) + s_frontLineData.anchorPos.v[1]) - v30;
    v33 = vectoyaw(&vec);
    s_frontLineData.midpoint.v[0] = (float)(0.5 * vec.v[0]) + v29;
    s_frontLineData.midpoint.v[1] = (float)(0.5 * vec.v[1]) + v30;
    s_frontLineData.midpoint.v[2] = (float)(0.5 * v45) + v31;
  }
  else
  {
    v46.v[0] = s_frontLineData.teamAvgPos[0].v[0] - s_frontLineData.teamAvgPos[1].v[0];
    v47 = s_frontLineData.teamAvgPos[0].v[2] - s_frontLineData.teamAvgPos[1].v[2];
    v46.v[1] = s_frontLineData.teamAvgPos[0].v[1] - s_frontLineData.teamAvgPos[1].v[1];
    v33 = vectoyaw(&v46);
    s_frontLineData.midpoint.v[0] = (float)(0.5 * v46.v[0]) + s_frontLineData.teamAvgPos[1].v[0];
    s_frontLineData.midpoint.v[1] = (float)(0.5 * v46.v[1]) + s_frontLineData.teamAvgPos[1].v[1];
    s_frontLineData.midpoint.v[2] = (float)(0.5 * v47) + s_frontLineData.teamAvgPos[1].v[2];
  }
  v10 = *(float *)&v33;
LABEL_28:
  angles.v[0] = 0.0;
  angles.v[1] = v10;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &s_frontLineData.frontlineForwardDir, &s_frontLineData.frontlineRightDir, NULL);
  spawnCount = s_spawnPoints.spawnCount;
  if ( s_spawnPoints.spawnCount > 0 )
  {
    v35 = 0i64;
    do
    {
      if ( v20 >= s_spawnPoints.spawnCount )
      {
        LODWORD(v42) = s_spawnPoints.spawnCount;
        LODWORD(v41) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_spawnPoints.spawnCount )", "index doesn't index s_spawnPoints.spawnCount\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      v36 = &s_spawnPoints.spawnPoints[v35];
      if ( !&s_spawnPoints.spawnPoints[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2030, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      enabledFlags = v36->enabledFlags;
      if ( (enabledFlags & 4) != 0 || (enabledFlags & 2) != 0 )
      {
        v38 = (float)((float)(s_frontLineData.midpoint.v[1] - v36->record->origin.v[1]) * s_frontLineData.frontlineForwardDir.v[1]) + (float)((float)(s_frontLineData.midpoint.v[0] - v36->record->origin.v[0]) * s_frontLineData.frontlineForwardDir.v[0]);
        v36->frontlineTeam = v38 > 0.0;
        v39 = DVARBOOL_scr_dumpFrontlineAssignments;
        if ( !DVARBOOL_scr_dumpFrontlineAssignments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scr_dumpFrontlineAssignments") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v39);
        if ( v39->current.enabled )
        {
          v40 = "enemy";
          if ( v36->frontlineTeam != 1 )
            v40 = "friendly";
          Com_Printf(16, "Spawnpoint %d is assigned to %s\n", v36->record->index, v40);
        }
        v36->distToFrontline = COERCE_FLOAT(LODWORD(v38) & v27);
      }
      ++v20;
      ++v35;
      --spawnCount;
    }
    while ( spawnCount );
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateMapLanes
==============
*/
void G_PlayerSpawnPoints_UpdateMapLanes(spawnSelectionSpec *selectionSpec)
{
  spawnSelectionSpec *v1; 
  int v2; 
  gentity_s *v3; 
  int RelativeSpawnTeam; 
  int v5; 
  __int64 v6; 
  int *laneVolumeEntNums; 
  int v8; 
  __int64 v9; 
  const gentity_s *v10; 
  unsigned int Instance; 
  __int64 v12; 
  __int64 v13; 
  int v15; 

  v1 = selectionSpec;
  if ( s_weightsTable[18] != 0.0 || s_weightsTable[19] != 0.0 )
  {
    v2 = 0;
    *(_WORD *)s_mapLanes.occupiedLanes = 0;
    while ( 1 )
    {
      v15 = v2;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v2 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v3 = &level.gentities[v2];
      if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(v3) )
      {
        RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v3, v1->spawningTeam);
        v5 = 0;
        if ( s_mapLanes.numLaneVolumes > 0 )
        {
          v6 = RelativeSpawnTeam;
          laneVolumeEntNums = s_mapLanes.laneVolumeEntNums;
          v8 = 1;
          do
          {
            if ( ((unsigned __int8)v8 & s_mapLanes.occupiedLanes[v6]) == 0 )
            {
              v9 = *laneVolumeEntNums;
              v10 = &level.gentities[v9];
              if ( (unsigned int)v9 >= 0x800 )
              {
                LODWORD(v13) = 2048;
                LODWORD(v12) = *laneVolumeEntNums;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 2004, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( laneEntityIdx ))", (const char *)&queryFormat, "G_IsEntityInUse( laneEntityIdx )") )
                __debugbreak();
              Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v10);
              if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &v3->r.currentOrigin, Instance, v10) )
                s_mapLanes.occupiedLanes[v6] |= 1 << v5;
            }
            ++v5;
            v8 = __ROL4__(v8, 1);
            ++laneVolumeEntNums;
          }
          while ( v5 < s_mapLanes.numLaneVolumes );
          v2 = v15;
          v1 = selectionSpec;
        }
      }
      ++v2;
    }
  }
}

/*
==============
G_PlayerSpawnPoints_UpdatePlayerClusters
==============
*/
void G_PlayerSpawnPoints_UpdatePlayerClusters(spawnSelectionSpec *selectionSpec)
{
  int v2; 
  int *clusterAssignment; 
  int v4; 
  float *v5; 
  __int64 i; 
  gentity_s *v7; 
  __int64 v8; 
  int v9; 
  signed int v10; 
  __int64 v11; 
  float *v12; 
  __int64 v13; 
  float v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  float *j; 
  float v19; 
  float v20; 
  float v21; 
  int v22; 
  int *v23; 
  int k; 
  __int64 v25; 
  __int64 v26; 
  int *v27; 
  int v28; 
  int v29; 
  __int64 m; 
  gentity_s *gentities; 
  float v32; 
  int v33; 
  int v34; 
  int v35; 

  if ( s_weightsTable[16] != 0.0 || s_weightsTable[17] != 0.0 )
  {
    memset_0(&s_clusterData.validData + 1, 0, 0x1363ui64);
    s_clusterData.validData = 1;
    if ( !s_spawnGlobals.usingTeams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1845, ASSERT_TYPE_ASSERT, "(s_spawnGlobals.usingTeams)", (const char *)&queryFormat, "s_spawnGlobals.usingTeams") )
      __debugbreak();
    v2 = 0;
    clusterAssignment = s_clusterData.clusterAssignment;
    v4 = 0;
    v5 = &s_clusterData.playerClusters[0].center.v[2];
    for ( i = 0i64; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v4 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v7 = &level.gentities[i];
      if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[i]) )
      {
        if ( G_PlayerSpawnPoints_GetRelativeSpawnTeam(v7, selectionSpec->spawningTeam) )
        {
          *clusterAssignment = -1;
        }
        else
        {
          *clusterAssignment = v2++;
          *((_DWORD *)v5 - 3) = 1;
          *(v5 - 2) = v7->r.currentOrigin.v[0];
          *(v5 - 1) = v7->r.currentOrigin.v[1];
          *v5 = v7->r.currentOrigin.v[2];
          v5 += 4;
        }
      }
      else
      {
        *clusterAssignment = -1;
      }
      ++v4;
      ++clusterAssignment;
    }
    do
    {
      v8 = -1i64;
      v33 = -1;
      v9 = 0;
      v35 = -1;
      v10 = 0;
      v34 = 0;
      v11 = -1i64;
      v12 = &s_clusterData.playerClusters[0].center.v[2];
      v13 = 0i64;
      v14 = FLOAT_N1_0;
      while ( 1 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          v9 = v34;
        }
        if ( v10 >= (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
          break;
        v15 = *((_DWORD *)v12 - 3);
        if ( v15 > 0 )
        {
          v16 = v10 + 1;
          v34 = v15 + v9;
          v17 = v13 + 1;
          for ( j = v12 + 4; ; j += 4 )
          {
            if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
              __debugbreak();
            if ( v16 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
              break;
            if ( *((int *)j - 3) > 0 )
            {
              v19 = *(j - 2) - *(v12 - 2);
              v20 = *(j - 1) - *(v12 - 1);
              v21 = (float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)((float)(*j - *v12) * (float)(*j - *v12));
              if ( v21 <= 640000.0 && (v14 < 0.0 || v21 < v14) )
              {
                v14 = v21;
                v33 = v10;
                v8 = v13;
                v35 = v16;
                v11 = v17;
              }
            }
            ++v16;
            ++v17;
          }
        }
        v9 = v34;
        ++v10;
        ++v13;
        v12 += 4;
      }
      v22 = v33;
      if ( v33 == -1 || v11 == -1 )
        break;
      v23 = s_clusterData.clusterAssignment;
      for ( k = 0; ; ++k )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          v22 = v33;
        }
        if ( k >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        if ( *v23 == v35 )
        {
          *v23 = v22;
          --s_clusterData.playerClusters[v11].size;
          ++s_clusterData.playerClusters[v8].size;
        }
        ++v23;
      }
      v25 = v11;
      if ( s_clusterData.playerClusters[v25].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1928, ASSERT_TYPE_ASSERT, "(s_clusterData.playerClusters[nearestClusterB].size == 0)", (const char *)&queryFormat, "s_clusterData.playerClusters[nearestClusterB].size == 0") )
        __debugbreak();
      v26 = v8;
      if ( s_clusterData.playerClusters[v26].size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1929, ASSERT_TYPE_ASSERT, "(s_clusterData.playerClusters[nearestClusterA].size > 0)", (const char *)&queryFormat, "s_clusterData.playerClusters[nearestClusterA].size > 0") )
        __debugbreak();
      *(_QWORD *)s_clusterData.playerClusters[v26].center.v = 0i64;
      v27 = s_clusterData.clusterAssignment;
      s_clusterData.playerClusters[v26].center.v[2] = 0.0;
      v28 = 0;
      *(_QWORD *)s_clusterData.playerClusters[v25].center.v = 0i64;
      v29 = 0;
      s_clusterData.playerClusters[v25].center.v[2] = 0.0;
      for ( m = 0i64; ; ++m )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v29 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        if ( *v27 == v33 )
        {
          gentities = level.gentities;
          ++v28;
          s_clusterData.playerClusters[v26].center.v[0] = level.gentities[m].r.currentOrigin.v[0] + s_clusterData.playerClusters[v26].center.v[0];
          s_clusterData.playerClusters[v26].center.v[1] = gentities[m].r.currentOrigin.v[1] + s_clusterData.playerClusters[v26].center.v[1];
          s_clusterData.playerClusters[v26].center.v[2] = gentities[m].r.currentOrigin.v[2] + s_clusterData.playerClusters[v26].center.v[2];
        }
        ++v29;
        ++v27;
      }
      if ( v28 != s_clusterData.playerClusters[v26].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1951, ASSERT_TYPE_ASSERT, "(newClusterASize == s_clusterData.playerClusters[nearestClusterA].size)", (const char *)&queryFormat, "newClusterASize == s_clusterData.playerClusters[nearestClusterA].size") )
        __debugbreak();
      v32 = 1.0 / (float)v28;
      s_clusterData.playerClusters[v26].center.v[0] = v32 * s_clusterData.playerClusters[v26].center.v[0];
      s_clusterData.playerClusters[v26].center.v[1] = v32 * s_clusterData.playerClusters[v26].center.v[1];
      s_clusterData.playerClusters[v26].center.v[2] = v32 * s_clusterData.playerClusters[v26].center.v[2];
    }
    while ( v34 );
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
  BOOL v8; 
  gentity_s *GEntity; 
  float v10; 
  float v11; 
  const tacpoint_t *pTargetPoint; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  vec3_t origin; 
  vec3_t pos; 

  IsSystemEnabled = LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData);
  IsDataLoaded = LOSPrecomputeSystem::IsDataLoaded(&g_losPrecomputeData);
  if ( IsSystemEnabled && IsDataLoaded )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_TTLOSPointPreCalc");
    G_PlayerSpawnPoints_UpdateSightData_ForCharacters(spawnPoint, selectionSpec);
    G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters(spawnPoint, selectionSpec);
    Sys_ProfEndNamedEvent();
  }
  else if ( TacGraph_Exists() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "EvalPlayerSpawns_TacGraphFullVisPreCalc");
    G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters(spawnPoint, selectionSpec);
    nonCharacterEntries = s_spawnViewers.nonCharacterEntries;
    do
    {
      if ( nonCharacterEntries->entNum != 2047 )
      {
        entTeam = nonCharacterEntries->entTeam;
        v8 = entTeam == TEAM_ZERO || entTeam != selectionSpec->spawningTeam;
        if ( !selectionSpec->useTeams || v8 )
        {
          if ( spawnPoint->enemySightData.fullSights )
            break;
          GEntity = G_GetGEntity(nonCharacterEntries->entNum);
          v10 = spawnPoint->groundPos.v[1];
          v11 = spawnPoint->groundPos.v[2] + 60.0;
          pos.v[0] = spawnPoint->groundPos.v[0];
          pos.v[1] = v10;
          pos.v[2] = v11;
          *(_QWORD *)origin.v = *(_QWORD *)GEntity->r.currentOrigin.v;
          origin.v[2] = GEntity->r.currentOrigin.v[2] + 60.0;
          pTargetPoint = TacGraph_FindClosestPoint(&pos);
          if ( !pTargetPoint )
            goto LABEL_22;
          v13 = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadiusZ") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v13);
          value = v13->current.value;
          v15 = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadius") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( TacGraph_FindClosestPointWithVisWithinRadius(&origin, 0.0, v15->current.value, value, &origin, pTargetPoint) )
LABEL_22:
            ++spawnPoint->enemySightData.fullSights;
        }
      }
      ++nonCharacterEntries;
    }
    while ( (__int64)nonCharacterEntries < (__int64)&s_spawnPoints );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateSightData_ForCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateSightData_ForCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  int v17; 
  float v18; 
  __int64 v19; 
  gentity_s *v20; 
  unsigned int RelativeSpawnTeam; 
  unsigned int nearbyPathNodeCount; 
  float v23; 
  unsigned int v24; 
  unsigned int MinimumValueBetweenNodeLists; 
  float v26; 
  float v27; 
  gclient_s *client; 
  float v29; 
  float v30; 
  float v31; 
  double v32; 
  float v33; 

  v2 = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin;
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax;
  v7 = value * value;
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = (float)(v6->current.value * v6->current.value) - v7;
  if ( v8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1461, ASSERT_TYPE_ASSERT, "(ttlosInfluenceDistRangeSq > 0)", (const char *)&queryFormat, "ttlosInfluenceDistRangeSq > 0") )
    __debugbreak();
  v9 = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear;
  v33 = 1.0 / v8;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear;
  v14 = v12 - v10;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v15 = v13->current.value;
  v16 = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 0;
  v18 = v16->current.value - v15;
  v19 = 0i64;
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v17 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v20 = &level.gentities[v19];
    if ( !G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[v19]) )
      goto LABEL_48;
    RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v20, selectionSpec->spawningTeam);
    if ( RelativeSpawnTeam > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1481, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY") )
      __debugbreak();
    if ( selectionSpec->useTeams && !RelativeSpawnTeam || v20->s.number == selectionSpec->spawningPlayerEntNum )
    {
LABEL_48:
      ++v17;
      ++v19;
    }
    else
    {
      if ( spawnPoint->enemySightData.fullSights )
        return;
      G_PlayerSpawnPoints_UpdateViewerCacheForCharacter(v20);
      nearbyPathNodeCount = spawnPoint->nearbyPathNodeCount;
      v23 = 0.0;
      if ( nearbyPathNodeCount && (v24 = s_spawnViewers.characterEntries[v20->s.number].nearbyPathNodeCount) != 0 )
      {
        MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, spawnPoint->nearbyPathNodes, nearbyPathNodeCount, (unsigned __int16 *)&s_spawnViewers.nonCharacterEntries[-165] + 8 * v20->s.number, v24);
        v26 = (float)(255.0 - (float)truncate_cast<unsigned char,int>(MinimumValueBetweenNodeLists >> 8)) * 0.0039215689;
        v27 = (float)(255.0 - (float)truncate_cast<unsigned char,int>((unsigned __int8)MinimumValueBetweenNodeLists)) * 0.0039215689;
        v23 = v27;
        if ( v27 > spawnPoint->enemySightData.maxSightValue )
          spawnPoint->enemySightData.maxSightValue = v27;
        if ( v26 > spawnPoint->enemySightData.maxJumpSightValue )
          spawnPoint->enemySightData.maxJumpSightValue = v26;
      }
      else
      {
        client = v20->client;
        if ( !client || (client->flags & 3) == 0 )
          Com_PrintWarning(16, "Missing nearby pathnodes for TTLOS Data for Lookup\n");
      }
      v29 = v20->r.currentOrigin.v[0] - spawnPoint->groundPos.v[0];
      v30 = v20->r.currentOrigin.v[1] - spawnPoint->groundPos.v[1];
      v31 = v20->r.currentOrigin.v[2] - spawnPoint->groundPos.v[2];
      v32 = I_fclamp((float)((float)((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31)) - v7) * v33, 0.0, 1.0);
      if ( v23 <= (float)((float)(*(float *)&v32 * v14) + v10) )
      {
        if ( v23 > (float)((float)(*(float *)&v32 * v18) + v15) )
          ++spawnPoint->enemySightData.cornerSights;
        goto LABEL_48;
      }
      ++spawnPoint->enemySightData.fullSights;
      ++v17;
      ++v19;
    }
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateSightData_ForNonCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  __int64 i; 
  int entNum; 
  team_t entTeam; 
  BOOL v20; 
  int time; 
  SpawnViewerCacheEntry *p_cacheEntry; 
  gentity_s *GEntity; 
  unsigned int *p_nearbyPathNodeCount; 
  const dvar_t *v25; 
  __int64 j; 
  const pathnode_t *v27; 
  unsigned __int16 v28; 
  unsigned int nearbyPathNodeCount; 
  float v30; 
  unsigned __int16 MinimumValueBetweenNodeLists; 
  unsigned __int8 v32; 
  float v33; 
  float v34; 
  gentity_s *v35; 
  float v36; 
  float v37; 
  float v38; 
  double v39; 
  float v40; 
  float v41; 

  v2 = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin;
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax;
  v7 = value * value;
  if ( !DCONST_DVARFLT_g_playerspawns_ttlosViewerDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_ttlosViewerDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = (float)(v6->current.value * v6->current.value) - v7;
  if ( v8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1553, ASSERT_TYPE_ASSERT, "(ttlosInfluenceDistRangeSq > 0)", (const char *)&queryFormat, "ttlosInfluenceDistRangeSq > 0") )
    __debugbreak();
  v9 = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear;
  v40 = 1.0 / v8;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_fullSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_fullSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear;
  v41 = v12 - v10;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  v15 = DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar;
  if ( !DCONST_DVARFLT_g_playerspawns_cornerSightTTLOSFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_cornerSightTTLOSFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value - v14;
  for ( i = 0i64; i < 32; ++i )
  {
    entNum = s_spawnViewers.nonCharacterEntries[i].entNum;
    if ( entNum != 2047 )
    {
      entTeam = s_spawnViewers.nonCharacterEntries[i].entTeam;
      v20 = entTeam == TEAM_ZERO || entTeam != selectionSpec->spawningTeam;
      if ( !selectionSpec->useTeams || v20 )
      {
        if ( spawnPoint->enemySightData.fullSights )
          return;
        time = level.time;
        p_cacheEntry = &s_spawnViewers.nonCharacterEntries[i].cacheEntry;
        GEntity = G_GetGEntity(entNum);
        if ( &s_spawnViewers.nonCharacterEntries[i] == (SpawnViewerCacheNonCharacterEntry *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
          __debugbreak();
        if ( p_cacheEntry->lastUpdateTime != time )
        {
          p_nearbyPathNodeCount = &s_spawnViewers.nonCharacterEntries[i].cacheEntry.nearbyPathNodeCount;
          p_cacheEntry->lastUpdateTime = time;
          GetPathNodeListForSightToPathNodeCheck(&GEntity->r.currentOrigin, 250.0, s_spawnViewers.nonCharacterEntries[i].cacheEntry.nearbyPathNodes, 4ui64, p_nearbyPathNodeCount);
          v25 = DVARBOOL_g_playerspawns_dumpViewerCache;
          if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v25);
          if ( v25->current.enabled )
          {
            Com_Printf(16, "Updating Viewer Cache For Non Character entity %d.\n", (unsigned int)s_spawnViewers.nonCharacterEntries[i].entNum);
            for ( j = 0i64; (unsigned int)j < *p_nearbyPathNodeCount; j = (unsigned int)(j + 1) )
            {
              v27 = Path_ConvertIndexToNode(p_cacheEntry->nearbyPathNodes[j]);
              if ( v27 )
              {
                v28 = Path_ConvertNodeToIndex(v27);
                Com_Printf(16, "\tViewer entity %d cached nearby pathnode %d.\n", (unsigned int)s_spawnViewers.nonCharacterEntries[i].entNum, v28);
              }
            }
          }
        }
        nearbyPathNodeCount = spawnPoint->nearbyPathNodeCount;
        v30 = 0.0;
        if ( nearbyPathNodeCount && s_spawnViewers.nonCharacterEntries[i].cacheEntry.nearbyPathNodeCount )
        {
          MinimumValueBetweenNodeLists = LOSPrecomputeSystem::GetMinimumValueBetweenNodeLists(&g_losPrecomputeData, spawnPoint->nearbyPathNodes, nearbyPathNodeCount, s_spawnViewers.nonCharacterEntries[i].cacheEntry.nearbyPathNodes, s_spawnViewers.nonCharacterEntries[i].cacheEntry.nearbyPathNodeCount);
          v32 = MinimumValueBetweenNodeLists;
          v33 = (float)(255.0 - (float)truncate_cast<unsigned char,int>(HIBYTE(MinimumValueBetweenNodeLists))) * 0.0039215689;
          v34 = (float)(255.0 - (float)truncate_cast<unsigned char,int>(v32)) * 0.0039215689;
          v30 = v34;
          if ( v34 > spawnPoint->enemySightData.maxSightValue )
            spawnPoint->enemySightData.maxSightValue = v34;
          if ( v33 > spawnPoint->enemySightData.maxJumpSightValue )
            spawnPoint->enemySightData.maxJumpSightValue = v33;
        }
        else
        {
          Com_PrintWarning(16, "Missing nearby pathnodes for TTLOS Data for Lookup\n");
        }
        v35 = G_GetGEntity(s_spawnViewers.nonCharacterEntries[i].entNum);
        v36 = v35->r.currentOrigin.v[0] - spawnPoint->groundPos.v[0];
        v37 = v35->r.currentOrigin.v[1] - spawnPoint->groundPos.v[1];
        v38 = v35->r.currentOrigin.v[2] - spawnPoint->groundPos.v[2];
        v39 = I_fclamp((float)((float)((float)((float)(v37 * v37) + (float)(v36 * v36)) + (float)(v38 * v38)) - v7) * v40, 0.0, 1.0);
        if ( v30 <= (float)((float)(*(float *)&v39 * v41) + v10) )
        {
          if ( v30 > (float)((float)(*(float *)&v39 * v16) + v14) )
            ++spawnPoint->enemySightData.cornerSights;
        }
        else
        {
          ++spawnPoint->enemySightData.fullSights;
        }
      }
    }
  }
}

/*
==============
G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters
==============
*/
void G_PlayerSpawnPoints_UpdateTacGraphSightData_ForCharacters(SpawnPointInfo *spawnPoint, spawnSelectionSpec *selectionSpec)
{
  int v2; 
  __int64 i; 
  gentity_s *v6; 
  unsigned int RelativeSpawnTeam; 
  float v8; 
  float v9; 
  const tacpoint_t *pTargetPoint; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  const tacpoint_t *ClosestPointWithVisWithinRadius; 
  const vec3_t *p_m_Pos; 
  float v17; 
  vec3_t vEyePosOut; 
  vec3_t pos; 

  v2 = 0;
  for ( i = 0i64; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v2 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v6 = &level.gentities[i];
    if ( G_PlayerSpawnPoints_ShouldUpdateSpawnDataForCharacterEnt(&level.gentities[i]) )
    {
      RelativeSpawnTeam = G_PlayerSpawnPoints_GetRelativeSpawnTeam(v6, selectionSpec->spawningTeam);
      if ( RelativeSpawnTeam > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 1642, ASSERT_TYPE_ASSERT, "(entTeam == 0 || entTeam == 1)", (const char *)&queryFormat, "entTeam == SPAWN_TEAM_FRIENDLY || entTeam == SPAWN_TEAM_ENEMY") )
        __debugbreak();
      if ( (!selectionSpec->useTeams || RelativeSpawnTeam) && v6->s.number != selectionSpec->spawningPlayerEntNum )
      {
        if ( spawnPoint->enemySightData.fullSights )
          return;
        v8 = spawnPoint->groundPos.v[1];
        v9 = spawnPoint->groundPos.v[2] + 60.0;
        pos.v[0] = spawnPoint->groundPos.v[0];
        pos.v[1] = v8;
        pos.v[2] = v9;
        Sentient_GetEyePosition(v6->sentient, &vEyePosOut);
        pTargetPoint = TacGraph_FindClosestPoint(&pos);
        if ( pTargetPoint )
        {
          v11 = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadius") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v11);
          value = v11->current.value;
          v13 = DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ;
          if ( !DCONST_DVARFLT_g_playerspawns_tacGraphViewerDistRadiusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_tacGraphViewerDistRadiusZ") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v13);
          v14 = v13->current.value;
          ClosestPointWithVisWithinRadius = TacGraph_FindClosestPointWithVisWithinRadius(&vEyePosOut, 0.0, value, v14, &vEyePosOut, pTargetPoint);
          p_m_Pos = &ClosestPointWithVisWithinRadius->m_Pos;
          if ( ClosestPointWithVisWithinRadius )
          {
            v17 = ClosestPointWithVisWithinRadius->m_Pos.v[2] - vEyePosOut.v[2];
            if ( (float)((float)((float)((float)(ClosestPointWithVisWithinRadius->m_Pos.v[1] - vEyePosOut.v[1]) * (float)(ClosestPointWithVisWithinRadius->m_Pos.v[1] - vEyePosOut.v[1])) + (float)((float)(ClosestPointWithVisWithinRadius->m_Pos.v[0] - vEyePosOut.v[0]) * (float)(ClosestPointWithVisWithinRadius->m_Pos.v[0] - vEyePosOut.v[0]))) + (float)(v17 * v17)) < (float)(value * value) && COERCE_FLOAT(LODWORD(v17) & _xmm) < v14 )
            {
              ++spawnPoint->enemySightData.fullSights;
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_playerspawns_debugTacGraphSight, "g_playerspawns_debugTacGraphSight") )
                G_DebugLineWithDuration(&pTargetPoint->m_Pos, p_m_Pos, &colorRed, 0, 20);
            }
          }
        }
      }
    }
    ++v2;
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
  const dvar_t *v5; 
  unsigned int i; 
  const pathnode_t *v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  __int64 v10; 

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
    LODWORD(v9) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cacheIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v9, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v10) = 248;
    LODWORD(v9) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 241, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_spawnViewers.characterEntries ) ) + 0 ) )", "cacheIndex doesn't index ARRAY_COUNT( s_spawnViewers.characterEntries )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v4 = &s_spawnViewers.characterEntries[number];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 244, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( v4->lastUpdateTime != time )
  {
    v4->lastUpdateTime = time;
    GetPathNodeListForSightToPathNodeCheck(&ent->r.currentOrigin, 250.0, v4->nearbyPathNodes, 4ui64, &v4->nearbyPathNodeCount);
    v5 = DVARBOOL_g_playerspawns_dumpViewerCache;
    if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      Com_Printf(16, "Updating Viewer Cache For Character %d.\n", (unsigned int)number);
      for ( i = 0; i < s_spawnViewers.characterEntries[number].nearbyPathNodeCount; ++i )
      {
        v7 = Path_ConvertIndexToNode(*((_WORD *)&s_spawnViewers.nonCharacterEntries[-165].entNum + 8 * number + i));
        if ( v7 )
        {
          v8 = Path_ConvertNodeToIndex(v7);
          Com_Printf(16, "\tViewer %d cached nearby pathnode %d.\n", (unsigned int)number, v8);
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
  const dvar_t *v6; 
  __int64 i; 
  const pathnode_t *v8; 
  unsigned __int16 v9; 

  if ( !nonCharacterEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 277, ASSERT_TYPE_ASSERT, "( nonCharacterEntry )", (const char *)&queryFormat, "nonCharacterEntry") )
    __debugbreak();
  p_cacheEntry = &nonCharacterEntry->cacheEntry;
  time = level.time;
  GEntity = G_GetGEntity(nonCharacterEntry->entNum);
  if ( nonCharacterEntry == (SpawnViewerCacheNonCharacterEntry *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_playerspawn_mp.cpp", 284, ASSERT_TYPE_ASSERT, "( viewerEntry )", (const char *)&queryFormat, "viewerEntry") )
    __debugbreak();
  if ( p_cacheEntry->lastUpdateTime != time )
  {
    p_nearbyPathNodeCount = &nonCharacterEntry->cacheEntry.nearbyPathNodeCount;
    p_cacheEntry->lastUpdateTime = time;
    GetPathNodeListForSightToPathNodeCheck(&GEntity->r.currentOrigin, 250.0, nonCharacterEntry->cacheEntry.nearbyPathNodes, 4ui64, &nonCharacterEntry->cacheEntry.nearbyPathNodeCount);
    v6 = DVARBOOL_g_playerspawns_dumpViewerCache;
    if ( !DVARBOOL_g_playerspawns_dumpViewerCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerspawns_dumpViewerCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      Com_Printf(16, "Updating Viewer Cache For Non Character entity %d.\n", (unsigned int)nonCharacterEntry->entNum);
      for ( i = 0i64; (unsigned int)i < *p_nearbyPathNodeCount; i = (unsigned int)(i + 1) )
      {
        v8 = Path_ConvertIndexToNode(p_cacheEntry->nearbyPathNodes[i]);
        if ( v8 )
        {
          v9 = Path_ConvertNodeToIndex(v8);
          Com_Printf(16, "\tViewer entity %d cached nearby pathnode %d.\n", (unsigned int)nonCharacterEntry->entNum, v9);
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
void G_PlayerSpawnPonits_SetGroundWarSpawnVariables(const float nearbyEnemyBadDist, const float nearbyEnemyOkDist)
{
  s_spawnGlobals.groundWarNearbyEnemyBadDist = nearbyEnemyBadDist;
  s_spawnGlobals.groundWarNearbyEnemyOkDist = nearbyEnemyOkDist;
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
__int64 G_PlayerSpawns_CreateInfluencePoint(vec3_t *pos, float radius, float height, team_t team, __int16 flags, gentity_s *ownerEnt)
{
  SpawnInfluencePointCache *v6; 
  unsigned int v9; 

  v6 = &s_influencePoints;
  v9 = 0;
  while ( v6->influencePoints[0].inUse )
  {
    ++v9;
    v6 = (SpawnInfluencePointCache *)((char *)v6 + 40);
    if ( (__int64)v6 >= (__int64)&unk_1492199C0 )
    {
      Com_PrintWarning(16, "No more Influence Point Slots, destroy some influence points.\n.");
      return 0xFFFFFFFFi64;
    }
  }
  v6->influencePoints[0].inUse = 1;
  EntHandle::setEnt(&v6->influencePoints[0].linkToEnt, NULL);
  v6->influencePoints[0].pos.v[0] = pos->v[0];
  v6->influencePoints[0].pos.v[1] = pos->v[1];
  v6->influencePoints[0].pos.v[2] = pos->v[2];
  v6->influencePoints[0].flags = flags;
  v6->influencePoints[0].radius = radius;
  v6->influencePoints[0].height = height;
  v6->influencePoints[0].team = team;
  EntHandle::setEnt(&v6->influencePoints[0].ownerEnt, ownerEnt);
  return v9;
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

