/*
==============
G_PlayerCorpseMP_FreeAgentCorpse
==============
*/

void __fastcall G_PlayerCorpseMP_FreeAgentCorpse(gentity_s *ent)
{
  ?G_PlayerCorpseMP_FreeAgentCorpse@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_FindCorpseInfo
==============
*/

GCorpseInfoMP *__fastcall G_PlayerCorpseMP_FindCorpseInfo(gentity_s *ent)
{
  return ?G_PlayerCorpseMP_FindCorpseInfo@@YAPEAUGCorpseInfoMP@@PEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_GetOwnerPlayerState
==============
*/

playerState_s *__fastcall G_PlayerCorpseMP_GetOwnerPlayerState(const gentity_s *corpseEnt)
{
  return ?G_PlayerCorpseMP_GetOwnerPlayerState@@YAPEAUplayerState_s@@PEBUgentity_s@@@Z(corpseEnt);
}

/*
==============
G_PlayerCorpseMP_StartRagdoll
==============
*/

void __fastcall G_PlayerCorpseMP_StartRagdoll(gentity_s *ent, bool instantPlayerRagdoll)
{
  ?G_PlayerCorpseMP_StartRagdoll@@YAXPEAUgentity_s@@_N@Z(ent, instantPlayerRagdoll);
}

/*
==============
G_PlayerCorpseMP_UpdateClientDetachState
==============
*/

void __fastcall G_PlayerCorpseMP_UpdateClientDetachState(gentity_s *ent, const GCorpseInfoMP *corpseInfo)
{
  ?G_PlayerCorpseMP_UpdateClientDetachState@@YAXPEAUgentity_s@@PEBUGCorpseInfoMP@@@Z(ent, corpseInfo);
}

/*
==============
GetCorpseInfoFromEntity
==============
*/

const GCorpseInfoMP *__fastcall GetCorpseInfoFromEntity(gentity_s *entity)
{
  return ?GetCorpseInfoFromEntity@@YAPEBUGCorpseInfoMP@@PEAUgentity_s@@@Z(entity);
}

/*
==============
G_PlayerCorpseMP_RunCorpse
==============
*/

void __fastcall G_PlayerCorpseMP_RunCorpse(gentity_s *ent)
{
  ?G_PlayerCorpseMP_RunCorpse@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_CheckShouldStartRagdoll
==============
*/

bool __fastcall G_PlayerCorpseMP_CheckShouldStartRagdoll(gentity_s *ent)
{
  return ?G_PlayerCorpseMP_CheckShouldStartRagdoll@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
G_SetOriginAndAnglesForClone
==============
*/

void __fastcall G_SetOriginAndAnglesForClone(const playerState_s *sourcePs, const vec3_t *sourceOrigin, const vec3_t *sourceAngels, gentity_s *cloneBody)
{
  ?G_SetOriginAndAnglesForClone@@YAXPEBUplayerState_s@@AEBTvec3_t@@1PEAUgentity_s@@@Z(sourcePs, sourceOrigin, sourceAngels, cloneBody);
}

/*
==============
G_PlayerCorpseMP_GetAgentCorpseIndex
==============
*/

int __fastcall G_PlayerCorpseMP_GetAgentCorpseIndex(const gentity_s *ent)
{
  return ?G_PlayerCorpseMP_GetAgentCorpseIndex@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
AssertTrajectoryGravity
==============
*/

void __fastcall AssertTrajectoryGravity(gentity_s *ent, bool isRagdoll)
{
  ?AssertTrajectoryGravity@@YAXPEAUgentity_s@@_N@Z(ent, isRagdoll);
}

/*
==============
G_PlayerCorpseMP_FindCorpseInfo
==============
*/

const GCorpseInfoMP *__fastcall G_PlayerCorpseMP_FindCorpseInfo(const gentity_s *ent)
{
  return ?G_PlayerCorpseMP_FindCorpseInfo@@YAPEBUGCorpseInfoMP@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_TransferNonWeaponPartBits
==============
*/

void __fastcall G_PlayerCorpseMP_TransferNonWeaponPartBits(gentity_s *toCorpseEntity, const gentity_s *fromCharacterEntity)
{
  ?G_PlayerCorpseMP_TransferNonWeaponPartBits@@YAXPEAUgentity_s@@PEBU1@@Z(toCorpseEntity, fromCharacterEntity);
}

/*
==============
G_PlayerCorpseMP_SnapOrigin
==============
*/

void __fastcall G_PlayerCorpseMP_SnapOrigin(gentity_s *ent)
{
  ?G_PlayerCorpseMP_SnapOrigin@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs
==============
*/

void __fastcall G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs(const __int16 targetClientIndex, EntityLoDs *const entityLoDs)
{
  ?G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs@@YAXFQEAUEntityLoDs@@@Z(targetClientIndex, entityLoDs);
}

/*
==============
G_PlayerCorpseMP_GetEntCorpseIndex
==============
*/

int __fastcall G_PlayerCorpseMP_GetEntCorpseIndex(const gentity_s *ent)
{
  return ?G_PlayerCorpseMP_GetEntCorpseIndex@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
G_RunCorpseMove
==============
*/

void __fastcall G_RunCorpseMove(gentity_s *ent)
{
  ?G_RunCorpseMove@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_RequiresFixedDeathCamera
==============
*/

bool __fastcall G_PlayerCorpseMP_RequiresFixedDeathCamera(gentity_s *ent)
{
  return ?G_PlayerCorpseMP_RequiresFixedDeathCamera@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_FreeCorpse
==============
*/

void __fastcall G_PlayerCorpseMP_FreeCorpse(gentity_s *ent)
{
  ?G_PlayerCorpseMP_FreeCorpse@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients
==============
*/

void G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients(void)
{
  ?G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients@@YAXXZ();
}

/*
==============
AssertTrajectoryGravity
==============
*/
void AssertTrajectoryGravity(gentity_s *ent, bool isRagdoll)
{
  __int64 trType; 

  trType = (unsigned int)ent->s.lerp.pos.trType;
  if ( (_DWORD)trType != 6 && !isRagdoll && !ent->tagInfo )
    Com_PrintWarning(0, "WARNING: Entity = %d, trajectory = %d, isRagdoll = %d, entity is falling but not ragdoll or gravity or linked, clearing fall and returning.\n", (unsigned int)ent->s.number, trType, 0);
}

/*
==============
G_BounceCorpse
==============
*/
void G_BounceCorpse(gentity_s *ent, GCorpseInfoMP *corpseInfo, trace_t *trace, const vec3_t *endpos)
{
  trajectory_t_secure *p_pos; 
  unsigned int v9; 
  int v10; 
  __int64 trType; 
  int v12; 
  __int16 EntityHitId; 
  char *fmt; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_BounceCorpse");
  p_pos = &ent->s.lerp.pos;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v9 = p_pos->trType - 23;
  v10 = 27 - (((p_pos->trType - 25) & 0xFFFFFFFD) != 0);
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  if ( trace->allsolid || trace->normal.v[2] > 0.0 )
  {
    if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 88, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
      __debugbreak();
    corpseInfo->falling = 0;
    v12 = 1;
    if ( v9 <= 5 )
      v12 = v10;
    p_pos->trType = v12;
    *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
    ent->s.lerp.pos.trDelta.v[2] = 0.0;
    Trajectory_SetTrBase(&ent->s.lerp.pos, endpos);
    *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
    EntityHitId = Trace_GetEntityHitId(trace);
    ent->s.groundEntityNum = EntityHitId;
    g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
    SV_LinkEntity(ent);
    if ( GMovingPlatforms::TraceHitMovingPlatform(trace) && !trace->allsolid && !trace->startsolid && trace->normal.v[2] > 0.69999999 )
    {
      G_ClientScrMP_LinkCorpseToMovingPlatform(ent, trace, endpos);
      corpseInfo->falling = 1;
    }
  }
  else
  {
    ent->r.currentOrigin.v[0] = trace->normal.v[0] + ent->r.currentOrigin.v[0];
    ent->r.currentOrigin.v[1] = trace->normal.v[1] + ent->r.currentOrigin.v[1];
    ent->r.currentOrigin.v[2] = trace->normal.v[2] + ent->r.currentOrigin.v[2];
    Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
    trType = (unsigned int)p_pos->trType;
    if ( (_DWORD)trType != 6 && v9 > 5 && !ent->tagInfo )
    {
      LODWORD(fmt) = 0;
      Com_PrintWarning(0, "WARNING: Entity = %d, trajectory = %d, isRagdoll = %d, entity is falling but not ragdoll or gravity or linked, clearing fall and returning.\n", (unsigned int)ent->s.number, trType, fmt);
    }
    ent->s.lerp.pos.trTime = level.time;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_CheckCodeStartRagdoll
==============
*/
void G_CheckCodeStartRagdoll(gentity_s *ent)
{
  unsigned int eType; 
  int v3; 
  GCorpseInfoMP *CorpseInfo_Internal; 
  GCorpseInfoMP *v5; 
  float v6; 
  __int16 entnum; 
  __int64 v8; 
  __int64 v9; 
  GTrajectory v10; 
  vec3_t outAng; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)ent->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v3 = 2359300, !_bittest(&v3, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 817, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 820, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->codeStartRagdollTime && !BG_IsRagdollTrajectory(&ent->s.lerp.pos) && CorpseInfo_Internal->codeStartRagdollTime <= level.time )
  {
    v5 = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 396, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( v5->skippedRagdoll )
    {
      if ( !ent->tagInfo && ((ent->s.eType - 2) & 0xFFEF) == 0 )
      {
        *(_WORD *)&v5->falling = 257;
        ent->s.lerp.pos.trType = TR_GRAVITY;
        ent->s.lerp.pos.trTime = level.time;
        ent->s.lerp.pos.trDuration = 0;
        Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
        *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
        ent->s.lerp.pos.trDelta.v[2] = 0.0;
      }
    }
    else
    {
      if ( ent->s.lerp.pos.trType == TR_INTERPOLATE )
      {
        ent->s.lerp.pos.trType = TR_RAGDOLL_INTERPOLATE;
      }
      else if ( ent->s.lerp.pos.trType == TR_GRAVITY )
      {
        ent->s.lerp.pos.trType = TR_RAGDOLL_GRAVITY;
      }
      else
      {
        ent->s.lerp.pos.trType = TR_FIRST_RAGDOLL;
      }
      GTrajectory::GTrajectory(&v10, ent);
      BgTrajectory::EvaluateAngTrajectory(&v10, level.time, &outAng);
      if ( ent->s.lerp.apos.trType == TR_INTERPOLATE )
      {
        ent->s.lerp.apos.trType = TR_RAGDOLL_INTERPOLATE;
      }
      else if ( ent->s.lerp.apos.trType == TR_GRAVITY )
      {
        ent->s.lerp.apos.trType = TR_RAGDOLL_GRAVITY;
      }
      else
      {
        ent->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
      }
      v6 = outAng.v[1];
      ent->s.lerp.apos.trBase.v[0] = outAng.v[0];
      ent->s.lerp.apos.trBase.v[2] = outAng.v[2];
      ent->s.lerp.apos.trBase.v[1] = v6;
      *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
      ent->s.lerp.apos.trDelta.v[2] = 0.0;
      ent->s.lerp.apos.trDuration = 0;
    }
    entnum = CorpseInfo_Internal->entnum;
    CorpseInfo_Internal->codeStartRagdollTime = 0;
    if ( ent->s.number != entnum )
    {
      LODWORD(v9) = entnum;
      LODWORD(v8) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 529, ASSERT_TYPE_ASSERT, "( ent->s.number ) == ( corpseInfo->entnum )", "ent->s.number == corpseInfo->entnum\n\t%i, %i", v8, v9) )
        __debugbreak();
    }
    if ( CorpseInfo_Internal->canDetachClientCorpse && !CorpseInfo_Internal->codeStartRagdollTime )
      ent->s.lerp.u.player.playerFlags |= 0x400u;
  }
}

/*
==============
G_PlayerCorpseMP_CheckShouldStartRagdoll
==============
*/
char G_PlayerCorpseMP_CheckShouldStartRagdoll(gentity_s *ent)
{
  GCorpseInfoMP *CorpseInfo_Internal; 

  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 396, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !CorpseInfo_Internal->skippedRagdoll )
    return 1;
  if ( !ent->tagInfo && ((ent->s.eType - 2) & 0xFFEF) == 0 )
  {
    *(_WORD *)&CorpseInfo_Internal->falling = 257;
    ent->s.lerp.pos.trType = TR_GRAVITY;
    ent->s.lerp.pos.trTime = level.time;
    ent->s.lerp.pos.trDuration = 0;
    Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
    *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
    ent->s.lerp.pos.trDelta.v[2] = 0.0;
  }
  return 0;
}

/*
==============
G_PlayerCorpseMP_FindCorpseInfo
==============
*/

GCorpseInfoMP *__fastcall G_PlayerCorpseMP_FindCorpseInfo(gentity_s *ent)
{
  return G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
}

/*
==============
G_PlayerCorpseMP_FindCorpseInfo
==============
*/

GCorpseInfoMP *__fastcall G_PlayerCorpseMP_FindCorpseInfo(const gentity_s *ent)
{
  return G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
}

/*
==============
G_PlayerCorpseMP_FindCorpseInfo_Internal
==============
*/
GCorpseInfoMP *G_PlayerCorpseMP_FindCorpseInfo_Internal(const gentity_s *ent)
{
  GameScriptDataMP *GameScriptDataMP; 

  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( ent->s.eType == ET_AGENT_CORPSE )
    return &GameScriptDataMP->agentCorpseInfo[G_PlayerCorpseMP_GetAgentCorpseIndex(ent)];
  else
    return &GameScriptDataMP->playerCorpseInfo[G_PlayerCorpseMP_GetEntCorpseIndex(ent)];
}

/*
==============
G_PlayerCorpseMP_FreeAgentCorpse
==============
*/
void G_PlayerCorpseMP_FreeAgentCorpse(gentity_s *ent)
{
  int AgentCorpseIndex; 
  __int16 *p_entnum; 
  playerState_s *OwnerPlayerState; 
  unsigned __int8 corpseIndex; 
  __int64 v6; 
  __int64 v7; 

  AgentCorpseIndex = G_PlayerCorpseMP_GetAgentCorpseIndex(ent);
  p_entnum = &GameScriptDataMP::GetGameScriptDataMP()->agentCorpseInfo[AgentCorpseIndex].entnum;
  if ( *p_entnum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(gScrData->agentCorpseInfo[agentCorpseIndex].entnum == ent->s.number)", (const char *)&queryFormat, "gScrData->agentCorpseInfo[agentCorpseIndex].entnum == ent->s.number") )
    __debugbreak();
  *p_entnum = -1;
  OwnerPlayerState = G_PlayerCorpseMP_GetOwnerPlayerState(ent);
  if ( OwnerPlayerState )
  {
    if ( (AgentCorpseIndex < 0 || (unsigned int)AgentCorpseIndex > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)AgentCorpseIndex, "signed", AgentCorpseIndex) )
      __debugbreak();
    corpseIndex = OwnerPlayerState->corpseIndex;
    if ( corpseIndex != (_BYTE)AgentCorpseIndex )
    {
      if ( AgentCorpseIndex < 0 || (unsigned int)AgentCorpseIndex > 0xFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)AgentCorpseIndex, "signed", AgentCorpseIndex) )
          __debugbreak();
        corpseIndex = OwnerPlayerState->corpseIndex;
      }
      LODWORD(v7) = (unsigned __int8)AgentCorpseIndex;
      LODWORD(v6) = corpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 227, ASSERT_TYPE_ASSERT, "( ps->corpseIndex ) == ( truncate_cast<uint8_t>(agentCorpseIndex) )", "ps->corpseIndex == truncate_cast<uint8_t>(agentCorpseIndex)\n\t%i, %i", v6, v7) )
        __debugbreak();
    }
    OwnerPlayerState->corpseIndex = 15;
  }
}

/*
==============
G_PlayerCorpseMP_FreeCorpse
==============
*/
void G_PlayerCorpseMP_FreeCorpse(gentity_s *ent)
{
  signed int EntCorpseIndex; 
  GameScriptDataMP *GameScriptDataMP; 
  __int16 *p_entnum; 
  playerState_s *OwnerPlayerState; 
  unsigned __int8 corpseIndex; 
  __int64 v7; 
  signed int v8; 
  __int64 v9; 
  int v10; 

  EntCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(ent);
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( (unsigned int)EntCorpseIndex >= 8 )
  {
    v10 = 8;
    v8 = EntCorpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( playerCorpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "playerCorpseIndex doesn't index ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  p_entnum = &GameScriptDataMP->playerCorpseInfo[EntCorpseIndex].entnum;
  if ( *p_entnum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 172, ASSERT_TYPE_ASSERT, "( gScrData->playerCorpseInfo[playerCorpseIndex].entnum == ent->s.number )", (const char *)&queryFormat, "gScrData->playerCorpseInfo[playerCorpseIndex].entnum == ent->s.number") )
    __debugbreak();
  *p_entnum = -1;
  G_CharacterStreaming_ClearCorpseCustomization(EntCorpseIndex);
  OwnerPlayerState = G_PlayerCorpseMP_GetOwnerPlayerState(ent);
  if ( OwnerPlayerState )
  {
    if ( (EntCorpseIndex < 0 || (unsigned int)EntCorpseIndex > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)EntCorpseIndex, "signed", EntCorpseIndex) )
      __debugbreak();
    corpseIndex = OwnerPlayerState->corpseIndex;
    if ( corpseIndex != (_BYTE)EntCorpseIndex )
    {
      if ( EntCorpseIndex < 0 || (unsigned int)EntCorpseIndex > 0xFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)EntCorpseIndex, "signed", EntCorpseIndex) )
          __debugbreak();
        corpseIndex = OwnerPlayerState->corpseIndex;
      }
      LODWORD(v9) = (unsigned __int8)EntCorpseIndex;
      LODWORD(v7) = corpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 181, ASSERT_TYPE_ASSERT, "( ps->corpseIndex ) == ( truncate_cast<uint8_t>(playerCorpseIndex) )", "ps->corpseIndex == truncate_cast<uint8_t>(playerCorpseIndex)\n\t%i, %i", v7, v9) )
        __debugbreak();
    }
    OwnerPlayerState->corpseIndex = 15;
  }
}

/*
==============
G_PlayerCorpseMP_GetAgentCorpseIndex
==============
*/
__int64 G_PlayerCorpseMP_GetAgentCorpseIndex(const gentity_s *ent)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 194, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 195, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_AGENT_CORPSE )", (const char *)&queryFormat, "ent->s.eType == ET_AGENT_CORPSE") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v4) = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 196, ASSERT_TYPE_ASSERT, "( ( sizeof( *array_counter( GameScriptDataMP::agentCorpseInfo ) ) + 0 ) ) >= ( ComCharacterLimits::GetAgentCorpseMaxCount() )", "ARRAY_COUNT( GameScriptDataMP::agentCorpseInfo ) >= ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i, %i", v4, ComCharacterLimits::ms_gameData.m_agentCorpseCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v2 = ent->s.number - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v2 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return v2;
}

/*
==============
G_PlayerCorpseMP_GetEntCorpseIndex
==============
*/
__int64 G_PlayerCorpseMP_GetEntCorpseIndex(const gentity_s *ent)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 145, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_PLAYER_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 146, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_PLAYER_CORPSE )", (const char *)&queryFormat, "ent->s.eType == ET_PLAYER_CORPSE") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v4) = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 147, ASSERT_TYPE_ASSERT, "( ( sizeof( *array_counter( GameScriptDataMP::playerCorpseInfo ) ) + 0 ) ) >= ( ComCharacterLimits::GetClientCorpseMaxCount() )", "ARRAY_COUNT( GameScriptDataMP::playerCorpseInfo ) >= ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i, %i", v4, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v2 = ent->s.number - ComCharacterLimits::ms_gameData.m_characterCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v2 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 153, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return v2;
}

/*
==============
G_PlayerCorpseMP_GetOwnerPlayerState
==============
*/
playerState_s *G_PlayerCorpseMP_GetOwnerPlayerState(const gentity_s *corpseEnt)
{
  int clientNum; 
  gentity_s *GEntity; 
  playerState_s *EntityPlayerState; 
  int AgentCorpseIndex; 

  if ( !corpseEnt )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 333, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((corpseEnt->s.eType - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 334, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentCorpseEntity( &corpseEnt->s ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentCorpseEntity( &corpseEnt->s )") )
    __debugbreak();
  clientNum = corpseEnt->s.clientNum;
  if ( !G_IsEntityInUse(clientNum) )
    return 0i64;
  GEntity = G_GetGEntity(clientNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 343, ASSERT_TYPE_ASSERT, "( ownerEnt ) != ( nullptr )", "%s != %s\n\t%p, %p", "ownerEnt", "nullptr", NULL, NULL) )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(GEntity);
  if ( EntityPlayerState && (corpseEnt->s.eType != ET_PLAYER_CORPSE ? (AgentCorpseIndex = G_PlayerCorpseMP_GetAgentCorpseIndex(corpseEnt)) : (AgentCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(corpseEnt)), EntityPlayerState->corpseIndex == AgentCorpseIndex) )
    return EntityPlayerState;
  else
    return 0i64;
}

/*
==============
G_PlayerCorpseMP_RequiresFixedDeathCamera
==============
*/
bool G_PlayerCorpseMP_RequiresFixedDeathCamera(gentity_s *ent)
{
  const dvar_t *v2; 
  float value; 
  hkVector4f v5; 
  unsigned int IndexByName; 
  OmnvarData *Data; 
  float v8; 
  const dvar_t *v9; 
  __int128 v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  int number; 
  float v0; 
  float v22; 
  float v23; 
  float v1[4]; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ((ent->s.eType - 1) & 0xFFEE) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 460, ASSERT_TYPE_ASSERT, "((ent->s.eType == ET_PLAYER) || (ent->s.eType == ET_AGENT) || (ent->s.eType == ET_PLAYER_CORPSE) || (ent->s.eType == ET_AGENT_CORPSE))", (const char *)&queryFormat, "(ent->s.eType == ET_PLAYER) || (ent->s.eType == ET_AGENT) || (ent->s.eType == ET_PLAYER_CORPSE) || (ent->s.eType == ET_AGENT_CORPSE)") )
    __debugbreak();
  v2 = DVARFLT_g_fixedDeathCameraTraceHeight;
  if ( !DVARFLT_g_fixedDeathCameraTraceHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_fixedDeathCameraTraceHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  if ( value == 0.0 )
    return 1;
  if ( value < 0.0 )
    return 0;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v5.m_quad = (__m128)g_havokPhysicsWorlds[1].world->m_gravity;
  v0 = v5.m_quad.m128_f32[0] * 32.0;
  v22 = _mm_shuffle_ps(v5.m_quad, v5.m_quad, 85).m128_f32[0] * 32.0;
  v23 = _mm_shuffle_ps(v5.m_quad, v5.m_quad, 170).m128_f32[0] * 32.0;
  IndexByName = BG_Omnvar_GetIndexByName("physics_gravity_ragdoll");
  if ( IndexByName != -1 )
  {
    Data = G_Omnvar_GetData(IndexByName, -1, NULL);
    if ( Data )
    {
      v8 = Data->current.value;
      v0 = v8 * v0;
      v22 = v8 * v22;
      v23 = v8 * v23;
    }
  }
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(&v0, v1, 0.001, 3) )
    return 0;
  v9 = DVARFLT_g_fixedDeathCameraMinGravForFallChecks;
  v10 = LODWORD(v22);
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v0 * v0)) + (float)(v23 * v23));
  _XMM6 = v10;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm8, xmm0
  }
  v14 = v0 * (float)(1.0 / *(float *)&_XMM0);
  v15 = v22 * (float)(1.0 / *(float *)&_XMM0);
  v16 = v23 * (float)(1.0 / *(float *)&_XMM0);
  if ( !DVARFLT_g_fixedDeathCameraMinGravForFallChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_fixedDeathCameraMinGravForFallChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( *(float *)&_XMM6 < v9->current.value )
    return 0;
  v17 = ent->r.currentOrigin.v[0];
  v18 = ent->r.currentOrigin.v[1];
  v19 = ent->r.currentOrigin.v[2];
  number = ent->s.number;
  start.v[0] = v17 - (float)(v14 * 50.0);
  start.v[1] = v18 - (float)(v15 * 50.0);
  start.v[2] = v19 - (float)(v16 * 50.0);
  end.v[0] = (float)(v14 * value) + v17;
  end.v[2] = (float)(v16 * value) + v19;
  end.v[1] = (float)(v15 * value) + v18;
  G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, number, 67601);
  return results.fraction == 1.0;
}

/*
==============
G_PlayerCorpseMP_RunCorpse
==============
*/
void G_PlayerCorpseMP_RunCorpse(gentity_s *ent)
{
  GCorpseInfoMP *CorpseInfo_Internal; 
  vec3_t trBase; 

  G_CheckCodeStartRagdoll(ent);
  G_RunCorpseMove(ent);
  G_RunCorpseAnimate(ent);
  G_GameInterface_PlayerCorpseMP_RunCorpse(ent);
  G_Main_RunThink(ent);
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 843, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->fullPrecisionOrigin )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  }
  else
  {
    Trajectory_GetTrBase(&ent->s.lerp.pos, &trBase);
    trBase.v[0] = (float)(int)trBase.v[0];
    trBase.v[1] = (float)(int)trBase.v[1];
    trBase.v[2] = (float)(int)trBase.v[2];
    Trajectory_SetTrBase(&ent->s.lerp.pos, &trBase);
    ent->s.lerp.apos.trBase.v[0] = (float)(int)ent->s.lerp.apos.trBase.v[0];
    ent->s.lerp.apos.trBase.v[1] = (float)(int)ent->s.lerp.apos.trBase.v[1];
    ent->s.lerp.apos.trBase.v[2] = (float)(int)ent->s.lerp.apos.trBase.v[2];
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients
==============
*/
void G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients(void)
{
  const dvar_t *v0; 
  int v1; 
  GameScriptDataMP *GameScriptDataMP; 
  signed int m_clientCorpseCount; 
  signed int i; 
  __int64 v5; 
  unsigned int v6; 
  gentity_s *v7; 
  __int64 v8; 
  PlayerCorpseMP_NetfieldLoddingData *v9; 
  int clientNum; 
  float *v; 
  float v12; 
  float v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  float *v20; 

  Sys_ProfBeginNamedEvent(0xFFFFD700, "G_PlayerCorpseMP_SetupImportantCorpseEntityLoDsForAllClients");
  if ( !SV_EntitiesLoD_UseDynamicLoD() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 898, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  v0 = DCONST_DVARINT_bg_corpseForceImportantHighLodTime;
  if ( !DCONST_DVARINT_bg_corpseForceImportantHighLodTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_corpseForceImportantHighLodTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = level.time - v0->current.integer;
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( !GameScriptDataMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 902, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_clientCorpseCount = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
  if ( ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    LODWORD(v17) = 8;
    LODWORD(v14) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 904, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v14, v17) )
      __debugbreak();
    LODWORD(v18) = 8;
    LODWORD(v15) = m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 905, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( s_newPlayerCorpsesForNetFieldLodding_indices ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( s_newPlayerCorpsesForNetFieldLodding_indices )\n\t%i, %i", v15, v18) )
      __debugbreak();
    LODWORD(v19) = 8;
    LODWORD(v16) = m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 906, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( s_newPlayerCorpseNetfieldLodding_data ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( s_newPlayerCorpseNetfieldLodding_data )\n\t%i, %i", v16, v19) )
      __debugbreak();
  }
  s_newPlayerCorpsesForNetfieldLodding_count = 0;
  for ( i = 0; i < m_clientCorpseCount; ++i )
  {
    v5 = i;
    if ( GameScriptDataMP->playerCorpseInfo[v5].entnum != -1 && GameScriptDataMP->playerCorpseInfo[v5].time >= v1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v17) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(v14) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v14, v17) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v6 = i + ComCharacterLimits::ms_gameData.m_characterCount;
      if ( i + ComCharacterLimits::ms_gameData.m_characterCount >= 0x800 )
      {
        LODWORD(v17) = 2048;
        LODWORD(v14) = i + ComCharacterLimits::ms_gameData.m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v17) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v7 = &g_entities[v6];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 916, ASSERT_TYPE_ASSERT, "( corpseEnt )", (const char *)&queryFormat, "corpseEnt") )
        __debugbreak();
      if ( (i < 0 || (unsigned int)i > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)i, "signed", i) )
        __debugbreak();
      v8 = s_newPlayerCorpsesForNetfieldLodding_count;
      s_newPlayerCorpsesForNetFieldLodding_indices[s_newPlayerCorpsesForNetfieldLodding_count] = i;
      v9 = &s_newPlayerCorpseNetfieldLodding_data[v8];
      clientNum = v7->s.clientNum;
      if ( (unsigned int)(clientNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)clientNum, "signed", v7->s.clientNum) )
        __debugbreak();
      v9->clientNum = clientNum;
      v9->attackerEntityNum = v7->s.attackerEntityNum;
      v = v9->origin.v;
      if ( v7 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( v7->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
      {
        v20 = v;
        v12 = v7->s.lerp.pos.trBase.v[0];
        v13 = v7->s.lerp.pos.trBase.v[1];
        *((_DWORD *)v + 2) = s_trbase_aab_Z ^ LODWORD(v13) ^ LODWORD(v7->s.lerp.pos.trBase.v[2]);
        *((_DWORD *)v + 1) = s_trbase_aab_Y ^ LODWORD(v12) ^ LODWORD(v13);
        *(_DWORD *)v = LODWORD(v12) ^ ~s_trbase_aab_X;
        memset(&v20, 0, sizeof(v20));
        *(float *)&v20 = *v;
        if ( ((unsigned int)v20 & 0x7F800000) == 2139095040 || (*(float *)&v20 = v[1], ((unsigned int)v20 & 0x7F800000) == 2139095040) || (*(float *)&v20 = v[2], ((unsigned int)v20 & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        *v = v7->s.lerp.pos.trBase.v[0];
        v[1] = v7->s.lerp.pos.trBase.v[1];
        v[2] = v7->s.lerp.pos.trBase.v[2];
      }
      ++s_newPlayerCorpsesForNetfieldLodding_count;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PlayerCorpseMP_SnapOrigin
==============
*/
void G_PlayerCorpseMP_SnapOrigin(gentity_s *ent)
{
  GCorpseInfoMP *CorpseInfo_Internal; 
  vec3_t trBase; 

  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 843, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->fullPrecisionOrigin )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  }
  else
  {
    Trajectory_GetTrBase(&ent->s.lerp.pos, &trBase);
    trBase.v[0] = (float)(int)trBase.v[0];
    trBase.v[1] = (float)(int)trBase.v[1];
    trBase.v[2] = (float)(int)trBase.v[2];
    Trajectory_SetTrBase(&ent->s.lerp.pos, &trBase);
    ent->s.lerp.apos.trBase.v[0] = (float)(int)ent->s.lerp.apos.trBase.v[0];
    ent->s.lerp.apos.trBase.v[1] = (float)(int)ent->s.lerp.apos.trBase.v[1];
    ent->s.lerp.apos.trBase.v[2] = (float)(int)ent->s.lerp.apos.trBase.v[2];
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
G_PlayerCorpseMP_StartRagdoll
==============
*/
void G_PlayerCorpseMP_StartRagdoll(gentity_s *ent, bool instantPlayerRagdoll)
{
  BOOL v3; 
  __int32 v4; 
  trType_t v5; 
  trType_t v6; 
  float v7; 
  GTrajectory v8; 
  vec3_t outAng; 

  v3 = instantPlayerRagdoll;
  v4 = ent->s.lerp.pos.trType - 1;
  if ( v4 )
  {
    if ( v4 == 5 )
      v5 = instantPlayerRagdoll + 24;
    else
      v5 = 4 * instantPlayerRagdoll + 23;
  }
  else
  {
    v5 = instantPlayerRagdoll + 26;
  }
  ent->s.lerp.pos.trType = v5;
  GTrajectory::GTrajectory(&v8, ent);
  BgTrajectory::EvaluateAngTrajectory(&v8, level.time, &outAng);
  if ( ent->s.lerp.apos.trType == TR_INTERPOLATE )
  {
    v6 = v3 + 26;
  }
  else if ( ent->s.lerp.apos.trType == TR_GRAVITY )
  {
    v6 = v3 + 24;
  }
  else
  {
    v6 = 4 * v3 + 23;
  }
  ent->s.lerp.apos.trType = v6;
  v7 = outAng.v[1];
  ent->s.lerp.apos.trBase.v[0] = outAng.v[0];
  ent->s.lerp.apos.trBase.v[2] = outAng.v[2];
  ent->s.lerp.apos.trBase.v[1] = v7;
  *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
  ent->s.lerp.apos.trDelta.v[2] = 0.0;
  ent->s.lerp.apos.trDuration = 0;
}

/*
==============
G_PlayerCorpseMP_TransferNonWeaponPartBits
==============
*/
void G_PlayerCorpseMP_TransferNonWeaponPartBits(gentity_s *toCorpseEntity, const gentity_s *fromCharacterEntity)
{
  DObj *ServerDObjForEnt; 
  __int64 v5; 
  const characterInfo_t *v6; 
  const DObj *v7; 
  GCorpseInfoMP *CorpseInfo_Internal; 

  if ( !toCorpseEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 240, ASSERT_TYPE_ASSERT, "( toCorpseEntity )", (const char *)&queryFormat, "toCorpseEntity") )
    __debugbreak();
  if ( !fromCharacterEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 241, ASSERT_TYPE_ASSERT, "( fromCharacterEntity )", (const char *)&queryFormat, "fromCharacterEntity") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(toCorpseEntity);
  if ( ServerDObjForEnt )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v5 = *(_QWORD *)&GStatic::ms_gameStatics;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 249, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
      __debugbreak();
    v6 = (const characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 216i64))(v5, (unsigned int)fromCharacterEntity->s.clientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 251, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v7 = Com_GetServerDObjForEnt(fromCharacterEntity);
    if ( v7 )
    {
      CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(toCorpseEntity);
      if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 260, ASSERT_TYPE_ASSERT, "( corpseInfo )", (const char *)&queryFormat, "corpseInfo") )
        __debugbreak();
      if ( CorpseInfo_Internal->ci.dobjDirty )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 261, ASSERT_TYPE_ASSERT, "( !corpseInfo->ci.dobjDirty )", (const char *)&queryFormat, "!corpseInfo->ci.dobjDirty") )
          __debugbreak();
      }
      BG_AnimationMP_TransferNonWeaponPartBits(LOCAL_CLIENT_INVALID, v7, v6, &toCorpseEntity->s, ServerDObjForEnt, &CorpseInfo_Internal->ci);
    }
    else
    {
      Com_PrintError(15, "No character dobj for client %i. Not transferring non-weapon part bits to corpse entity %i.\n", (unsigned int)fromCharacterEntity->s.clientNum, (unsigned int)toCorpseEntity->s.number);
    }
  }
}

/*
==============
G_PlayerCorpseMP_UpdateClientDetachState
==============
*/
void G_PlayerCorpseMP_UpdateClientDetachState(gentity_s *ent, const GCorpseInfoMP *corpseInfo)
{
  __int16 entnum; 
  __int64 v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 527, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 528, ASSERT_TYPE_ASSERT, "( corpseInfo )", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  entnum = corpseInfo->entnum;
  if ( ent->s.number != entnum )
  {
    LODWORD(v5) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 529, ASSERT_TYPE_ASSERT, "( ent->s.number ) == ( corpseInfo->entnum )", "ent->s.number == corpseInfo->entnum\n\t%i, %i", v5, entnum) )
      __debugbreak();
  }
  if ( corpseInfo->canDetachClientCorpse && !corpseInfo->codeStartRagdollTime )
    ent->s.lerp.u.player.playerFlags |= 0x400u;
}

/*
==============
G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs
==============
*/
void G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs(const __int16 targetClientIndex, EntityLoDs *const entityLoDs)
{
  EntityLoDs *v2; 
  GameScriptDataMP *GameScriptDataMP; 
  gentity_s *GEntity; 
  char v6; 
  int v7; 
  unsigned __int8 *v8; 
  vec3_t *p_origin; 
  char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  const playerState_s *EntityPlayerStateConst; 
  GameScriptDataMP *v20; 
  vec3_t forward; 
  vec3_t trBase; 

  v2 = entityLoDs;
  Sys_ProfBeginNamedEvent(0xFFFFD700, "G_PlayerCorpseMP_UpdateImportantCorpseEntityLoDs");
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 938, ASSERT_TYPE_ASSERT, "( entityLoDs )", (const char *)&queryFormat, "entityLoDs") )
    __debugbreak();
  if ( !SV_EntitiesLoD_UseDynamicLoD() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 939, ASSERT_TYPE_ASSERT, "( SV_EntitiesLoD_UseDynamicLoD() )", (const char *)&queryFormat, "SV_EntitiesLoD_UseDynamicLoD()") )
    __debugbreak();
  if ( (unsigned __int16)targetClientIndex >= 0xC8u )
  {
    LODWORD(v15) = targetClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 940, ASSERT_TYPE_ASSERT, "(unsigned)( targetClientIndex ) < (unsigned)( 200 )", "targetClientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v15, 200) )
      __debugbreak();
  }
  if ( s_newPlayerCorpsesForNetfieldLodding_count )
  {
    GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
    v20 = GameScriptDataMP;
    if ( !GameScriptDataMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 949, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    GEntity = G_GetGEntity(targetClientIndex);
    if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 954, ASSERT_TYPE_ASSERT, "( targetClientEnt )", (const char *)&queryFormat, "targetClientEnt") )
      __debugbreak();
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(GEntity);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 956, ASSERT_TYPE_ASSERT, "( targetPs )", (const char *)&queryFormat, "targetPs") )
      __debugbreak();
    v6 = 1;
    Trajectory_GetTrBase(&GEntity->s.lerp.pos, &trBase);
    if ( s_newPlayerCorpsesForNetfieldLodding_count > 8u )
    {
      LODWORD(v16) = 8;
      LODWORD(v15) = s_newPlayerCorpsesForNetfieldLodding_count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 963, ASSERT_TYPE_ASSERT, "( s_newPlayerCorpsesForNetfieldLodding_count ) <= ( ( sizeof( *array_counter( s_newPlayerCorpsesForNetFieldLodding_indices ) ) + 0 ) )", "s_newPlayerCorpsesForNetfieldLodding_count <= ARRAY_COUNT( s_newPlayerCorpsesForNetFieldLodding_indices )\n\t%i, %i", v15, v16) )
        __debugbreak();
      if ( s_newPlayerCorpsesForNetfieldLodding_count > 8u )
      {
        LODWORD(v16) = 8;
        LODWORD(v15) = s_newPlayerCorpsesForNetfieldLodding_count;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 964, ASSERT_TYPE_ASSERT, "( s_newPlayerCorpsesForNetfieldLodding_count ) <= ( ( sizeof( *array_counter( s_newPlayerCorpseNetfieldLodding_data ) ) + 0 ) )", "s_newPlayerCorpsesForNetfieldLodding_count <= ARRAY_COUNT( s_newPlayerCorpseNetfieldLodding_data )\n\t%i, %i", v15, v16) )
          __debugbreak();
      }
    }
    v7 = 0;
    if ( s_newPlayerCorpsesForNetfieldLodding_count )
    {
      v8 = s_newPlayerCorpsesForNetFieldLodding_indices;
      p_origin = &s_newPlayerCorpseNetfieldLodding_data[0].origin;
      do
      {
        v10 = (char *)GameScriptDataMP + 14848 * *v8;
        v11 = *v8;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v11 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v16) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
          LODWORD(v15) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v12 = ComCharacterLimits::ms_gameData.m_characterCount + v11;
        if ( *((__int16 *)v10 + 7496) != v12 )
        {
          LODWORD(v16) = v12;
          LODWORD(v15) = *((__int16 *)v10 + 7496);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 975, ASSERT_TYPE_ASSERT, "( corpseInfo->entnum ) == ( corpseEntIndex )", "corpseInfo->entnum == corpseEntIndex\n\t%i, %i", v15, v16) )
            __debugbreak();
        }
        if ( v12 >= 0x800 )
        {
          LODWORD(v16) = 2048;
          LODWORD(v15) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
            __debugbreak();
        }
        v13 = 0x80000000 >> (v12 & 0x1F);
        v14 = &v2->array[(unsigned __int64)v12 >> 5];
        if ( (v13 & *v14) == 0 )
        {
          if ( LOWORD(p_origin[-1].z) == targetClientIndex || HIWORD(p_origin[-1].z) == targetClientIndex )
            goto LABEL_60;
          if ( v6 )
          {
            AngleVectors(&EntityPlayerStateConst->viewangles, &forward, NULL, NULL);
            v6 = 0;
          }
          if ( (unsigned __int8)BG_PlayerCorpseMP_CalculateCorpseZone(&trBase, &forward, p_origin, NULL) < PLAYER_CORPSE_ZONE_5 )
          {
LABEL_60:
            if ( v12 >= 0x800 )
            {
              LODWORD(v18) = 2048;
              LODWORD(v17) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
                __debugbreak();
            }
            *v14 |= v13;
          }
        }
        ++v7;
        ++v8;
        p_origin = (vec3_t *)((char *)p_origin + 16);
        GameScriptDataMP = v20;
        v2 = entityLoDs;
      }
      while ( v7 < s_newPlayerCorpsesForNetfieldLodding_count );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_RunCorpseAnimate
==============
*/
void G_RunCorpseAnimate(gentity_s *ent)
{
  unsigned int eType; 
  int v3; 
  GameScriptDataMP *GameScriptDataMP; 
  int AgentCorpseIndex; 
  __int64 v6; 
  __int64 p_ci; 
  int v8; 
  GWeaponMap *Instance; 
  DObj *ServerDObjForEnt; 
  int EntCorpseIndex; 
  __int64 v12; 
  double v13; 
  double v14; 
  GWeaponMap *v15; 
  DObj *v16; 
  DObj *v17; 
  GWeaponMap *v18; 
  GHandler *Handler; 
  __int64 attachIgnoreCollision; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)ent->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v3 = 2359300, !_bittest(&v3, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 748, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( ent->s.eType == ET_AGENT_CORPSE )
  {
    AgentCorpseIndex = G_PlayerCorpseMP_GetAgentCorpseIndex(ent);
    v6 = AgentCorpseIndex;
    if ( (unsigned int)AgentCorpseIndex >= 8 )
    {
      LODWORD(attachIgnoreCollision) = AgentCorpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->agentCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->agentCorpseInfo )\n\t%i not in [0, %i)", attachIgnoreCollision, 8) )
        __debugbreak();
    }
    p_ci = (__int64)&GameScriptDataMP->agentCorpseInfo[v6].ci;
    v8 = 0;
    *(_QWORD *)(p_ci + 2768) = 0i64;
    Instance = GWeaponMap::GetInstance();
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    BG_AnimationMP_UpdateAgentCorpseDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &ent->s, (characterInfo_t *)p_ci);
  }
  else
  {
    EntCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(ent);
    v12 = EntCorpseIndex;
    if ( (unsigned int)EntCorpseIndex >= 8 )
    {
      LODWORD(attachIgnoreCollision) = EntCorpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i not in [0, %i)", attachIgnoreCollision, 8) )
        __debugbreak();
    }
    p_ci = (__int64)&GameScriptDataMP->playerCorpseInfo[v12].ci;
    v13 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.torsoPitchPacked);
    *(float *)(p_ci + 2768) = *(float *)&v13;
    v14 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.waistPitchPacked);
    *(float *)(p_ci + 2772) = *(float *)&v14;
    v15 = GWeaponMap::GetInstance();
    v16 = Com_GetServerDObjForEnt(ent);
    v8 = 0;
    BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, v16, v15, &ent->s, (characterInfo_t *)p_ci, 0);
  }
  *(_BYTE *)(p_ci + 14497) = 0;
  v17 = Com_GetServerDObjForEnt(ent);
  LOBYTE(v8) = v17 != NULL;
  G_UpdateTagInfoOfChildren(ent, v8);
  if ( v17 )
  {
    if ( *(_DWORD *)(p_ci + 2568) )
    {
      BG_AnimationState_Update(&ent->s, (characterInfo_t *)p_ci, 0);
      if ( ScriptableSv_GetScriptableIndexForEntity(ent) != -1 )
        ScriptableSv_UpdateEntityPosition(ent);
    }
    else
    {
      if ( PlayerASM_IsEnabled() )
      {
        BG_PlayerASM_CopyAnimDataToCharacterInfo(&ent->s, (characterInfo_t *)p_ci);
      }
      else
      {
        *(_DWORD *)(p_ci + 14780) = BG_AnimationMP_GetSuitAnimIndex(&ent->s);
        *(_DWORD *)(p_ci + 14784) = BG_AnimationMP_GetLegsAnimation(&ent->s);
        *(_DWORD *)(p_ci + 14788) = BG_AnimationMP_GetTorsoAnimation(&ent->s);
      }
      *(_BYTE *)(p_ci + 14496) = 0;
      v18 = GWeaponMap::GetInstance();
      Handler = GHandler::getHandler();
      BG_PlayerAnimation(Handler, v18, &ent->s, (characterInfo_t *)p_ci, &ent->r.currentOrigin, &vec3_origin, &vec3_origin);
    }
  }
}

/*
==============
G_RunCorpseMove
==============
*/
void G_RunCorpseMove(gentity_s *ent)
{
  __int128 v1; 
  __int128 v2; 
  trajectory_t_secure *p_pos; 
  unsigned int v5; 
  unsigned int eType; 
  int v7; 
  playerState_s *OwnerPlayerState; 
  int v9; 
  GCorpseInfoMP *CorpseInfo_Internal; 
  const DObj *ServerDObjForEnt; 
  const dvar_t *v13; 
  float v14; 
  bool falling; 
  char v16; 
  trType_t trType; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  int clipmask; 
  __int128 v35; 
  double v36; 
  __int16 number; 
  float v38; 
  float v39; 
  float v40; 
  signed __int64 v44; 
  trType_t v45; 
  float v46; 
  int v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  const dvar_t *v60; 
  float v61; 
  int v62; 
  float v63; 
  float v64; 
  char *fmt; 
  vec3_t *trans; 
  __int64 bUseGoalWeight; 
  bool v68; 
  int v69; 
  unsigned int v70; 
  trType_t v71; 
  GTrajectory v72; 
  vec3_t outPos; 
  vec3_t v74; 
  vec3_t forward; 
  vec3_t trBase; 
  vec3_t up; 
  vec3_t start; 
  vec3_t right; 
  Bounds bounds; 
  trace_t results; 
  vec2_t rot; 
  vec3_t v83; 
  __int128 v84; 
  __int128 v85; 

  p_pos = &ent->s.lerp.pos;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v5 = p_pos->trType - 23;
  v70 = v5;
  if ( ((p_pos->trType - 25) & 0xFFFFFFFD) != 0 )
  {
    v69 = 26;
    v71 = TR_RAGDOLL_GRAVITY;
  }
  else
  {
    v69 = 27;
    v71 = TR_RAGDOLL_GRAVITY_PLAYER_IMMEDIATE;
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)ent->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v7 = 2359300, !_bittest(&v7, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  OwnerPlayerState = G_PlayerCorpseMP_GetOwnerPlayerState(ent);
  v9 = 2047;
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( ent->s.groundEntityNum == 2047 )
  {
    if ( !OwnerPlayerState )
      goto LABEL_29;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&OwnerPlayerState->otherFlags, FOG_SCALE|0x20) && G_PlayerCorpseMP_RequiresFixedDeathCamera(ent) )
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&OwnerPlayerState->otherFlags, ACTIVE, 0x32u);
    }
  }
  if ( OwnerPlayerState && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&OwnerPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    if ( OwnerPlayerState->activeExecutionIsVictim )
    {
      CorpseInfo_Internal->falling = 0;
      return;
    }
  }
LABEL_29:
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  _XMM13 = 0i64;
  if ( !ServerDObjForEnt )
    goto LABEL_40;
  XAnimCalcDelta(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &v74, 1);
  v13 = DVARBOOL_anim_deltas_debug;
  if ( !DVARBOOL_anim_deltas_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_deltas_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v74.v[0];
  if ( v13->current.enabled && v74.v[0] != 0.0 )
  {
    Com_Printf(19, "got anim delta for this frame of ( %f, %f, %f )\n", v74.v[0], v74.v[1], v74.v[2]);
    v14 = v74.v[0];
  }
  if ( (float)((float)((float)(v74.v[1] * v74.v[1]) + (float)(v14 * v14)) + (float)(v74.v[2] * v74.v[2])) <= 1.0 )
  {
LABEL_40:
    falling = CorpseInfo_Internal->falling;
LABEL_41:
    v16 = 0;
    goto LABEL_42;
  }
  falling = CorpseInfo_Internal->falling;
  if ( falling && v5 <= 5 )
    goto LABEL_41;
  v16 = 1;
LABEL_42:
  if ( falling || v16 )
  {
    if ( !ent->tagInfo )
    {
      trType = ent->s.lerp.pos.trType;
      if ( falling )
      {
        if ( trType != TR_GRAVITY && v5 > 5 )
        {
          LODWORD(fmt) = 0;
          Com_PrintWarning(0, "WARNING: Entity = %d, trajectory = %d, isRagdoll = %d, entity is falling but not ragdoll or gravity or linked, clearing fall and returning.\n", (unsigned int)ent->s.number, (unsigned int)trType, fmt);
        }
      }
      else if ( trType != TR_INTERPOLATE && v5 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(ent->s.lerp.pos.trType == TR_INTERPOLATE || isRagdoll)", (const char *)&queryFormat, "ent->s.lerp.pos.trType == TR_INTERPOLATE || isRagdoll") )
      {
        __debugbreak();
      }
    }
    GTrajectory::GTrajectory(&v72, ent);
    BgTrajectory::EvaluatePosTrajectory(&v72, level.time, &outPos);
    BgTrajectory::EvaluatePosTrajectoryDelta(&v72, level.time, &v83);
    BgTrajectory::EvaluateAngTrajectory(&v72, level.time, &ent->r.currentAngles);
    if ( v16 )
    {
      v85 = v1;
      v84 = v2;
      AngleVectors(&ent->r.currentAngles, &forward, &right, &up);
      v19 = LODWORD(FLOAT_N1_0);
      *(float *)&v19 = -1.0 * right.v[1];
      v18 = v19;
      v20 = LODWORD(forward.v[0]);
      *(float *)&v20 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
      _XMM3 = v20;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm14, xmm0
      }
      v24 = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
      v25 = forward.v[2] * (float)(1.0 / *(float *)&_XMM0);
      v26 = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v27 = v18;
      *(float *)&v27 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)((float)(-1.0 * right.v[0]) * (float)(-1.0 * right.v[0]))) + (float)((float)(-1.0 * right.v[2]) * (float)(-1.0 * right.v[2])));
      _XMM3 = v27;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm14, xmm0
      }
      v31 = (float)(-1.0 * right.v[0]) * (float)(1.0 / *(float *)&_XMM0);
      v32 = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
      v33 = (float)(-1.0 * right.v[2]) * (float)(1.0 / *(float *)&_XMM0);
      outPos.v[0] = (float)((float)((float)(v74.v[0] * v26) + outPos.v[0]) + (float)(v74.v[1] * v31)) + (float)(v74.v[2] * up.v[0]);
      forward.v[0] = v26;
      outPos.v[1] = (float)((float)((float)(v74.v[0] * v24) + outPos.v[1]) + (float)(v74.v[1] * v32)) + (float)(v74.v[2] * up.v[1]);
      forward.v[1] = v24;
      forward.v[2] = v25;
      outPos.v[2] = (float)((float)((float)(v74.v[0] * v25) + outPos.v[2]) + (float)(v74.v[1] * v33)) + (float)(v74.v[2] * up.v[2]);
    }
    else
    {
      v31 = 0.0;
      v32 = 0.0;
      v33 = 0.0;
    }
    if ( !ent->clipmask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 635, ASSERT_TYPE_ASSERT, "(ent->clipmask)", (const char *)&queryFormat, "ent->clipmask") )
      __debugbreak();
    clipmask = ent->clipmask;
    if ( COERCE_FLOAT(LODWORD(ent->s.lerp.apos.trBase.v[2]) & _xmm) <= 0.001 )
    {
      v35 = *(_OWORD *)ent->r.box.midPoint.v;
      v36 = *(double *)&ent->r.box.halfSize.y;
    }
    else
    {
      v35 = *(_OWORD *)bounds_origin.midPoint.v;
      v36 = *(double *)&bounds_origin.halfSize.y;
    }
    *(double *)&bounds.halfSize.y = v36;
    *(_OWORD *)bounds.midPoint.v = v35;
    if ( EntHandle::isDefined(&ent->r.ownerNum) )
      number = EntHandle::entnum(&ent->r.ownerNum);
    else
      number = ent->s.number;
    G_Main_TraceCapsule(&results, &ent->r.currentOrigin, &outPos, &bounds, number, clipmask);
    v38 = (float)((float)(outPos.v[0] - ent->r.currentOrigin.v[0]) * results.fraction) + ent->r.currentOrigin.v[0];
    v39 = (float)((float)(outPos.v[1] - ent->r.currentOrigin.v[1]) * results.fraction) + ent->r.currentOrigin.v[1];
    v40 = (float)((float)(outPos.v[2] - ent->r.currentOrigin.v[2]) * results.fraction) + ent->r.currentOrigin.v[2];
    _XMM0 = results.startsolid;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm13, xmm7, xmm2
    }
    results.fraction = *(float *)&_XMM0;
    trBase.v[0] = v38;
    trBase.v[1] = v39;
    trBase.v[2] = v40;
    ent->r.currentOrigin.v[0] = v38;
    ent->r.currentOrigin.v[1] = v39;
    ent->r.currentOrigin.v[2] = v40;
    SV_LinkEntity(ent);
    G_Main_RunThink(ent);
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v44 = ent - g_entities;
    if ( (unsigned int)v44 >= 0x800 )
    {
      LODWORD(bUseGoalWeight) = 2048;
      LODWORD(trans) = ent - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", trans, bUseGoalWeight) )
        __debugbreak();
    }
    if ( G_IsEntityInUse((__int16)v44) )
    {
      if ( results.fraction == 1.0 )
      {
        if ( !CorpseInfo_Internal->skippedRagdoll && v16 )
        {
          v45 = TR_INTERPOLATE;
          if ( v70 <= 5 )
            v45 = v69;
          ent->s.lerp.pos.trType = v45;
          Trajectory_SetTrBase(&ent->s.lerp.pos, &trBase);
          v46 = outPos.v[2] + -1.0;
          *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
          *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
          ent->s.lerp.pos.trDelta.v[2] = 0.0;
          outPos.v[2] = v46;
          if ( v70 <= 5 && (!EntHandle::isDefined(&ent->r.ownerNum) ? (v47 = 2047) : (v47 = EntHandle::entnum(&ent->r.ownerNum)), G_Main_TraceCapsuleComplete(&ent->r.currentOrigin, &outPos, &bounds, v47, 2047, clipmask)) )
          {
            CorpseInfo_Internal->falling = 1;
            v48 = v74.v[0];
            v49 = (float)(v74.v[0] * forward.v[0]) + ent->s.lerp.pos.trDelta.v[0];
            v50 = v74.v[0] * forward.v[1];
            ent->s.lerp.pos.trDelta.v[0] = v49;
            v51 = v50 + ent->s.lerp.pos.trDelta.v[1];
            v52 = v48 * forward.v[2];
            v53 = v74.v[1];
            ent->s.lerp.pos.trDelta.v[1] = v51;
            ent->s.lerp.pos.trDelta.v[2] = v52 + ent->s.lerp.pos.trDelta.v[2];
            v54 = (float)(v31 * v53) + v49;
            ent->s.lerp.pos.trDelta.v[0] = v54;
            ent->s.lerp.pos.trDelta.v[1] = (float)(v32 * v53) + ent->s.lerp.pos.trDelta.v[1];
            v55 = (float)(v33 * v53) + ent->s.lerp.pos.trDelta.v[2];
            v56 = v74.v[2];
            ent->s.lerp.pos.trDelta.v[2] = v55;
            v57 = v56 * up.v[1];
            ent->s.lerp.pos.trDelta.v[0] = (float)(v56 * up.v[0]) + v54;
            v58 = v56 * up.v[2];
            ent->s.lerp.pos.trDelta.v[1] = v57 + ent->s.lerp.pos.trDelta.v[1];
            ent->s.lerp.pos.trDelta.v[2] = v58 + ent->s.lerp.pos.trDelta.v[2];
            if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
              __debugbreak();
            v59 = 1000.0 / (float)level.frameDuration;
            ent->s.lerp.pos.trDelta.v[0] = v59 * ent->s.lerp.pos.trDelta.v[0];
            ent->s.lerp.pos.trDelta.v[1] = v59 * ent->s.lerp.pos.trDelta.v[1];
            ent->s.lerp.pos.trDelta.v[2] = v59 * ent->s.lerp.pos.trDelta.v[2];
            ent->s.lerp.pos.trType = v71;
            ent->s.lerp.pos.trTime = level.time;
            ent->s.lerp.pos.trDuration = 0;
          }
          else
          {
            CorpseInfo_Internal->falling = 0;
          }
        }
      }
      else
      {
        v60 = DVARBOOL_killswitch_skip_bounce_on_linked_agent_corpse_enabled;
        v68 = CorpseInfo_Internal->falling;
        if ( !DVARBOOL_killswitch_skip_bounce_on_linked_agent_corpse_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skip_bounce_on_linked_agent_corpse_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v60);
        if ( v68 && (!v60->current.enabled || ent->s.eType != ET_AGENT_CORPSE || !G_EntIsLinked(ent)) )
        {
          if ( !CorpseInfo_Internal->skipDropChecks && results.allsolid )
          {
            v61 = ent->r.currentOrigin.v[1];
            start.v[0] = ent->r.currentOrigin.v[0];
            v62 = clipmask & 0xFFFEFFFF;
            start.v[2] = ent->r.currentOrigin.v[2] + 32.0;
            start.v[1] = v61;
            if ( EntHandle::isDefined(&ent->r.ownerNum) )
              v9 = EntHandle::entnum(&ent->r.ownerNum);
            G_Main_TraceCapsule(&results, &start, &outPos, &bounds, v9, v62);
            if ( !results.allsolid )
            {
              v63 = (float)((float)(outPos.v[0] - start.v[0]) * results.fraction) + start.v[0];
              v64 = (float)((float)(outPos.v[1] - start.v[1]) * results.fraction) + start.v[1];
              trBase.v[2] = (float)((float)(outPos.v[2] - start.v[2]) * results.fraction) + start.v[2];
              ent->r.currentOrigin.v[2] = trBase.v[2];
              trBase.v[0] = v63;
              trBase.v[1] = v64;
              ent->r.currentOrigin.v[0] = v63;
              ent->r.currentOrigin.v[1] = v64;
            }
          }
          G_BounceCorpse(ent, CorpseInfo_Internal, &results, &trBase);
        }
      }
    }
  }
}

/*
==============
G_SetOriginAndAnglesForClone
==============
*/
void G_SetOriginAndAnglesForClone(const playerState_s *sourcePs, const vec3_t *sourceOrigin, const vec3_t *sourceAngels, gentity_s *cloneBody)
{
  GAntiLag *v8; 
  float v9; 
  GHandler *Handler; 
  vec3_t angles; 
  WorldUpReferenceFrame v12; 

  if ( !sourcePs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(sourcePs)", (const char *)&queryFormat, "sourcePs") )
    __debugbreak();
  if ( !cloneBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(cloneBody)", (const char *)&queryFormat, "cloneBody") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v8 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 878, ASSERT_TYPE_ASSERT, "(antilagSystem)", (const char *)&queryFormat, "antilagSystem") )
    __debugbreak();
  v9 = sourceAngels->v[1];
  angles.v[0] = sourceAngels->v[0];
  angles.v[2] = sourceAngels->v[2];
  angles.v[1] = v9;
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, sourcePs, Handler);
  if ( !v8->IsWorldUpIncludedOnEntity(v8, sourcePs->clientNum) && v12.m_axisAdjusted )
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v12, &angles);
  G_SetOriginAndAngle(cloneBody, sourceOrigin, &angles, 0, 0);
}

/*
==============
GetCorpseInfoFromEntity
==============
*/
GCorpseInfoMP *GetCorpseInfoFromEntity(gentity_s *entity)
{
  gclient_s *client; 
  __int64 corpseIndex; 
  GameScriptDataMP *GameScriptDataMP; 
  gagent_s *agent; 
  __int64 v7; 
  GameScriptDataMP *v8; 
  __int64 v9; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  client = entity->client;
  if ( client )
  {
    corpseIndex = client->ps.corpseIndex;
    if ( (_DWORD)corpseIndex != 15 && (int)corpseIndex < ComCharacterLimits::GetClientCorpseMaxCount() )
    {
      GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v9) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 309, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetClientCorpseMaxCount() <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v9, 8) )
          __debugbreak();
      }
      return &GameScriptDataMP->playerCorpseInfo[corpseIndex];
    }
    return 0i64;
  }
  agent = entity->agent;
  if ( !agent )
    return 0i64;
  v7 = agent->playerState.corpseIndex;
  if ( (_DWORD)v7 == 15 || (int)v7 >= ComCharacterLimits::GetAgentCorpseMaxCount() )
    return 0i64;
  v8 = GameScriptDataMP::GetGameScriptDataMP();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
  {
    LODWORD(v9) = ComCharacterLimits::GetAgentCorpseMaxCount();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 321, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( gScrData->agentCorpseInfo ) ) + 0 ) )", "ComCharacterLimits::GetAgentCorpseMaxCount() <= ARRAY_COUNT( gScrData->agentCorpseInfo )\n\t%i, %i", v9, 8) )
      __debugbreak();
  }
  return &v8->agentCorpseInfo[v7];
}

