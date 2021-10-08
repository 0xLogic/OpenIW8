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
  unsigned int v10; 
  int v11; 
  __int64 trType; 
  int v21; 
  __int16 EntityHitId; 
  char *fmt; 

  _RDI = trace;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_BounceCorpse");
  p_pos = &ent->s.lerp.pos;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v10 = p_pos->trType - 23;
  v11 = 27 - (((p_pos->trType - 25) & 0xFFFFFFFD) != 0);
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  if ( _RDI->allsolid )
  {
    if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 88, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
      __debugbreak();
    corpseInfo->falling = 0;
    v21 = 1;
    if ( v10 <= 5 )
      v21 = v11;
    p_pos->trType = v21;
    *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
    ent->s.lerp.pos.trDelta.v[2] = 0.0;
    Trajectory_SetTrBase(&ent->s.lerp.pos, endpos);
    *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
    EntityHitId = Trace_GetEntityHitId(_RDI);
    ent->s.groundEntityNum = EntityHitId;
    g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
    SV_LinkEntity(ent);
    if ( GMovingPlatforms::TraceHitMovingPlatform(_RDI) && !_RDI->allsolid && !_RDI->startsolid )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f333333
        vcomiss xmm0, dword ptr [rdi+18h]
      }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+18h]
      vmovss  xmm0, dword ptr [rdi+10h]
    }
    _RDX = &ent->r.currentOrigin;
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rdx]
      vmovss  dword ptr [rdx], xmm1
      vmovss  xmm2, dword ptr [rdi+14h]
      vaddss  xmm0, xmm2, dword ptr [rdx+4]
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  xmm1, dword ptr [rdi+18h]
      vaddss  xmm2, xmm1, dword ptr [rdx+8]
      vmovss  dword ptr [rdx+8], xmm2
    }
    Trajectory_SetTrBase(&ent->s.lerp.pos, &ent->r.currentOrigin);
    trType = (unsigned int)p_pos->trType;
    if ( (_DWORD)trType != 6 && v10 > 5 && !ent->tagInfo )
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
  __int16 entnum; 
  __int64 v10; 
  __int64 v11; 
  GTrajectory v12; 
  vec3_t outAng; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)_RBX->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v3 = 2359300, !_bittest(&v3, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 817, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(_RBX);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 820, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->codeStartRagdollTime && !BG_IsRagdollTrajectory(&_RBX->s.lerp.pos) && CorpseInfo_Internal->codeStartRagdollTime <= level.time )
  {
    v5 = G_PlayerCorpseMP_FindCorpseInfo_Internal(_RBX);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 396, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( v5->skippedRagdoll )
    {
      if ( !_RBX->tagInfo && ((_RBX->s.eType - 2) & 0xFFEF) == 0 )
      {
        *(_WORD *)&v5->falling = 257;
        _RBX->s.lerp.pos.trType = TR_GRAVITY;
        _RBX->s.lerp.pos.trTime = level.time;
        _RBX->s.lerp.pos.trDuration = 0;
        Trajectory_SetTrBase(&_RBX->s.lerp.pos, &_RBX->r.currentOrigin);
        *(_QWORD *)_RBX->s.lerp.pos.trDelta.v = 0i64;
        _RBX->s.lerp.pos.trDelta.v[2] = 0.0;
      }
    }
    else
    {
      if ( _RBX->s.lerp.pos.trType == TR_INTERPOLATE )
      {
        _RBX->s.lerp.pos.trType = TR_RAGDOLL_INTERPOLATE;
      }
      else if ( _RBX->s.lerp.pos.trType == TR_GRAVITY )
      {
        _RBX->s.lerp.pos.trType = TR_RAGDOLL_GRAVITY;
      }
      else
      {
        _RBX->s.lerp.pos.trType = TR_FIRST_RAGDOLL;
      }
      GTrajectory::GTrajectory(&v12, _RBX);
      BgTrajectory::EvaluateAngTrajectory(&v12, level.time, &outAng);
      if ( _RBX->s.lerp.apos.trType == TR_INTERPOLATE )
      {
        _RBX->s.lerp.apos.trType = TR_RAGDOLL_INTERPOLATE;
      }
      else if ( _RBX->s.lerp.apos.trType == TR_GRAVITY )
      {
        _RBX->s.lerp.apos.trType = TR_RAGDOLL_GRAVITY;
      }
      else
      {
        _RBX->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+outAng]
        vmovss  xmm1, dword ptr [rsp+0B8h+outAng+4]
        vmovss  dword ptr [rbx+40h], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+outAng+8]
        vmovss  dword ptr [rbx+48h], xmm0
        vmovss  dword ptr [rbx+44h], xmm1
      }
      *(_QWORD *)_RBX->s.lerp.apos.trDelta.v = 0i64;
      _RBX->s.lerp.apos.trDelta.v[2] = 0.0;
      _RBX->s.lerp.apos.trDuration = 0;
    }
    entnum = CorpseInfo_Internal->entnum;
    CorpseInfo_Internal->codeStartRagdollTime = 0;
    if ( _RBX->s.number != entnum )
    {
      LODWORD(v11) = entnum;
      LODWORD(v10) = _RBX->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 529, ASSERT_TYPE_ASSERT, "( ent->s.number ) == ( corpseInfo->entnum )", "ent->s.number == corpseInfo->entnum\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    if ( CorpseInfo_Internal->canDetachClientCorpse && !CorpseInfo_Internal->codeStartRagdollTime )
      _RBX->s.lerp.u.player.playerFlags |= 0x400u;
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
  char v10; 
  char v13; 
  bool result; 
  unsigned int IndexByName; 
  int number; 
  float v0; 
  float v1[4]; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RDI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ((_RDI->s.eType - 1) & 0xFFEE) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 460, ASSERT_TYPE_ASSERT, "((ent->s.eType == ET_PLAYER) || (ent->s.eType == ET_AGENT) || (ent->s.eType == ET_PLAYER_CORPSE) || (ent->s.eType == ET_AGENT_CORPSE))", (const char *)&queryFormat, "(ent->s.eType == ET_PLAYER) || (ent->s.eType == ET_AGENT) || (ent->s.eType == ET_PLAYER_CORPSE) || (ent->s.eType == ET_AGENT_CORPSE)") )
    __debugbreak();
  _RBX = DVARFLT_g_fixedDeathCameraTraceHeight;
  if ( !DVARFLT_g_fixedDeathCameraTraceHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_fixedDeathCameraTraceHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm7, xmm6
  }
  if ( v13 )
  {
    result = 1;
  }
  else
  {
    __asm
    {
      vcomiss xmm7, xmm6
      vmovaps xmmword ptr [rsp+160h+var_48+8], xmm8
      vmovaps [rsp+160h+var_58+8], xmm9
      vmovaps [rsp+160h+var_68+8], xmm10
      vmovaps [rsp+160h+var_78+8], xmm11
    }
    if ( v10 )
      goto LABEL_26;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    __asm { vmovss  xmm2, cs:__real@42000000 }
    _RAX = g_havokPhysicsWorlds[1].world;
    __asm
    {
      vmovups xmm3, xmmword ptr [rax+0AC0h]
      vmulss  xmm0, xmm3, xmm2
      vshufps xmm1, xmm3, xmm3, 55h ; 'U'
      vmovss  [rsp+160h+v0], xmm0
      vmulss  xmm0, xmm1, xmm2
      vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
      vmovss  [rsp+160h+var_11C], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmovss  [rsp+160h+var_118], xmm0
    }
    IndexByName = BG_Omnvar_GetIndexByName("physics_gravity_ragdoll");
    if ( IndexByName != -1 )
    {
      if ( G_Omnvar_GetData(IndexByName, -1, NULL) )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rax+4]
          vmulss  xmm1, xmm3, [rsp+160h+v0]
          vmulss  xmm0, xmm3, [rsp+160h+var_11C]
          vmulss  xmm2, xmm3, [rsp+160h+var_118]
          vmovss  [rsp+160h+v0], xmm1
          vmovss  [rsp+160h+var_11C], xmm0
          vmovss  [rsp+160h+var_118], xmm2
        }
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vmovss  [rsp+160h+v1], xmm6
      vmovss  [rsp+160h+var_10C], xmm6
      vmovss  [rsp+160h+var_108], xmm6
    }
    if ( VecNCompareCustomEpsilon(&v0, v1, *(float *)&_XMM2, 3) )
      goto LABEL_26;
    __asm
    {
      vmovss  xmm5, [rsp+160h+var_11C]
      vmovss  xmm4, [rsp+160h+v0]
      vmovss  xmm3, [rsp+160h+var_118]
      vmovss  xmm8, cs:__real@3f800000
    }
    _RBX = DVARFLT_g_fixedDeathCameraMinGravForFallChecks;
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm6, xmm0, xmm0
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm9, xmm4, xmm1
      vmulss  xmm10, xmm5, xmm1
      vmulss  xmm11, xmm3, xmm1
    }
    if ( !DVARFLT_g_fixedDeathCameraMinGravForFallChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_fixedDeathCameraMinGravForFallChecks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v10 )
      goto LABEL_26;
    __asm
    {
      vmovss  xmm2, cs:__real@42480000
      vmovss  xmm5, dword ptr [rdi+130h]
      vmovss  xmm4, dword ptr [rdi+134h]
      vmovss  xmm3, dword ptr [rdi+138h]
    }
    number = _RDI->s.number;
    __asm
    {
      vmulss  xmm0, xmm9, xmm2
      vsubss  xmm1, xmm5, xmm0
      vmulss  xmm0, xmm10, xmm2
      vmovss  dword ptr [rsp+160h+start], xmm1
      vsubss  xmm1, xmm4, xmm0
      vmulss  xmm0, xmm11, xmm2
      vmovss  dword ptr [rsp+160h+start+4], xmm1
      vsubss  xmm1, xmm3, xmm0
      vmulss  xmm2, xmm9, xmm7
      vaddss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rsp+160h+start+8], xmm1
      vmulss  xmm1, xmm10, xmm7
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rsp+160h+end], xmm0
      vmulss  xmm0, xmm11, xmm7
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsp+160h+end+8], xmm1
      vmovss  dword ptr [rsp+160h+end+4], xmm2
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, number, 67601);
    __asm
    {
      vmovss  xmm0, [rbp+60h+results.fraction]
      vucomiss xmm0, xmm8
    }
    if ( !v13 )
LABEL_26:
      result = 0;
    else
      result = 1;
    __asm
    {
      vmovaps xmm10, [rsp+160h+var_68+8]
      vmovaps xmm9, [rsp+160h+var_58+8]
      vmovaps xmm8, xmmword ptr [rsp+160h+var_48+8]
      vmovaps xmm11, [rsp+160h+var_78+8]
    }
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
G_PlayerCorpseMP_RunCorpse
==============
*/

void __fastcall G_PlayerCorpseMP_RunCorpse(gentity_s *ent, double _XMM1_8)
{
  GCorpseInfoMP *CorpseInfo_Internal; 
  vec3_t trBase; 

  _RBX = ent;
  G_CheckCodeStartRagdoll(ent);
  G_RunCorpseMove(_RBX);
  G_RunCorpseAnimate(_RBX);
  G_GameInterface_PlayerCorpseMP_RunCorpse(_RBX);
  G_Main_RunThink(_RBX);
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(_RBX);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 843, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->fullPrecisionOrigin )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  }
  else
  {
    Trajectory_GetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vcvttss2si eax, dword ptr [rsp+78h+trBase]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsp+78h+trBase], xmm0
      vcvttss2si eax, dword ptr [rsp+78h+trBase+4]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovss  dword ptr [rsp+78h+trBase+4], xmm1
      vcvttss2si eax, dword ptr [rsp+78h+trBase+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsp+78h+trBase+8], xmm0
    }
    Trajectory_SetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vcvttss2si eax, dword ptr [rbx+40h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+40h], xmm0
      vcvttss2si eax, dword ptr [rbx+44h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+44h], xmm0
      vcvttss2si eax, dword ptr [rbx+48h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+48h], xmm0
    }
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
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
  float v13; 
  float v14; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int *v26; 

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
    LODWORD(v23) = 8;
    LODWORD(v20) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 904, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i, %i", v20, v23) )
      __debugbreak();
    LODWORD(v24) = 8;
    LODWORD(v21) = m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 905, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( s_newPlayerCorpsesForNetFieldLodding_indices ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( s_newPlayerCorpsesForNetFieldLodding_indices )\n\t%i, %i", v21, v24) )
      __debugbreak();
    LODWORD(v25) = 8;
    LODWORD(v22) = m_clientCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 906, ASSERT_TYPE_ASSERT, "( maxCorpseCount ) <= ( ( sizeof( *array_counter( s_newPlayerCorpseNetfieldLodding_data ) ) + 0 ) )", "maxCorpseCount <= ARRAY_COUNT( s_newPlayerCorpseNetfieldLodding_data )\n\t%i, %i", v22, v25) )
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
        LODWORD(v23) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v20, v23) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v6 = i + ComCharacterLimits::ms_gameData.m_characterCount;
      if ( i + ComCharacterLimits::ms_gameData.m_characterCount >= 0x800 )
      {
        LODWORD(v23) = 2048;
        LODWORD(v20) = i + ComCharacterLimits::ms_gameData.m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v23) )
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
      _RBX = (unsigned int *)&v9->origin;
      _RDI = &v7->s.lerp.pos;
      if ( v7 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        v26 = _RBX;
        v13 = v7->s.lerp.pos.trBase.v[0];
        v14 = v7->s.lerp.pos.trBase.v[1];
        _RBX[2] = s_trbase_aab_Z ^ LODWORD(v14) ^ LODWORD(v7->s.lerp.pos.trBase.v[2]);
        _RBX[1] = s_trbase_aab_Y ^ LODWORD(v13) ^ LODWORD(v14);
        *_RBX = LODWORD(v13) ^ ~s_trbase_aab_X;
        memset(&v26, 0, sizeof(v26));
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  dword ptr [rsp+88h+arg_0], xmm0
        }
        if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
          goto LABEL_66;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+88h+arg_0], xmm0
        }
        if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
          goto LABEL_66;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rsp+88h+arg_0], xmm0
        }
        if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
        {
LABEL_66:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      else
      {
        *_RBX = LODWORD(v7->s.lerp.pos.trBase.v[0]);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm1, dword ptr [rdi+14h]
          vmovss  dword ptr [rbx+8], xmm1
        }
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

void __fastcall G_PlayerCorpseMP_SnapOrigin(gentity_s *ent, double _XMM1_8)
{
  GCorpseInfoMP *CorpseInfo_Internal; 
  vec3_t trBase; 

  _RBX = ent;
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(ent);
  if ( !CorpseInfo_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 843, ASSERT_TYPE_ASSERT, "( corpseInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfo", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( CorpseInfo_Internal->fullPrecisionOrigin )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  }
  else
  {
    Trajectory_GetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vcvttss2si eax, dword ptr [rsp+78h+trBase]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsp+78h+trBase], xmm0
      vcvttss2si eax, dword ptr [rsp+78h+trBase+4]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovss  dword ptr [rsp+78h+trBase+4], xmm1
      vcvttss2si eax, dword ptr [rsp+78h+trBase+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsp+78h+trBase+8], xmm0
    }
    Trajectory_SetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vcvttss2si eax, dword ptr [rbx+40h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+40h], xmm0
      vcvttss2si eax, dword ptr [rbx+44h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+44h], xmm0
      vcvttss2si eax, dword ptr [rbx+48h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+48h], xmm0
    }
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
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
  int v5; 
  int v6; 
  GTrajectory v10; 
  vec3_t outAng; 

  _RBX = ent;
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
  _RBX->s.lerp.pos.trType = v5;
  GTrajectory::GTrajectory(&v10, _RBX);
  BgTrajectory::EvaluateAngTrajectory(&v10, level.time, &outAng);
  if ( _RBX->s.lerp.apos.trType == TR_INTERPOLATE )
  {
    v6 = v3 + 26;
  }
  else if ( _RBX->s.lerp.apos.trType == TR_GRAVITY )
  {
    v6 = v3 + 24;
  }
  else
  {
    v6 = 4 * v3 + 23;
  }
  _RBX->s.lerp.apos.trType = v6;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+outAng]
    vmovss  xmm1, dword ptr [rsp+68h+outAng+4]
    vmovss  dword ptr [rbx+40h], xmm0
    vmovss  xmm0, dword ptr [rsp+68h+outAng+8]
    vmovss  dword ptr [rbx+48h], xmm0
    vmovss  dword ptr [rbx+44h], xmm1
  }
  *(_QWORD *)_RBX->s.lerp.apos.trDelta.v = 0i64;
  _RBX->s.lerp.apos.trDelta.v[2] = 0.0;
  _RBX->s.lerp.apos.trDuration = 0;
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
  int v4; 
  GameScriptDataMP *GameScriptDataMP; 
  int AgentCorpseIndex; 
  __int64 v7; 
  int v9; 
  GWeaponMap *Instance; 
  DObj *ServerDObjForEnt; 
  int EntCorpseIndex; 
  __int64 v13; 
  GWeaponMap *v14; 
  DObj *v15; 
  DObj *v16; 
  GWeaponMap *v17; 
  GHandler *Handler; 
  __int64 attachIgnoreCollision; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)ent->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v4 = 2359300, !_bittest(&v4, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 748, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( ent->s.eType == ET_AGENT_CORPSE )
  {
    AgentCorpseIndex = G_PlayerCorpseMP_GetAgentCorpseIndex(ent);
    v7 = AgentCorpseIndex;
    if ( (unsigned int)AgentCorpseIndex >= 8 )
    {
      LODWORD(attachIgnoreCollision) = AgentCorpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->agentCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->agentCorpseInfo )\n\t%i not in [0, %i)", attachIgnoreCollision, 8) )
        __debugbreak();
    }
    _RSI = (__int64)&GameScriptDataMP->agentCorpseInfo[v7].ci;
    v9 = 0;
    *(_QWORD *)(_RSI + 2768) = 0i64;
    Instance = GWeaponMap::GetInstance();
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    BG_AnimationMP_UpdateAgentCorpseDObj(LOCAL_CLIENT_INVALID, ServerDObjForEnt, Instance, &ent->s, (characterInfo_t *)_RSI);
  }
  else
  {
    EntCorpseIndex = G_PlayerCorpseMP_GetEntCorpseIndex(ent);
    v13 = EntCorpseIndex;
    if ( (unsigned int)EntCorpseIndex >= 8 )
    {
      LODWORD(attachIgnoreCollision) = EntCorpseIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i not in [0, %i)", attachIgnoreCollision, 8) )
        __debugbreak();
    }
    _RSI = (__int64)&GameScriptDataMP->playerCorpseInfo[v13].ci;
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.torsoPitchPacked);
    __asm { vmovss  dword ptr [rsi+0AD0h], xmm0 }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(ent->s.lerp.u.player.waistPitchPacked);
    __asm { vmovss  dword ptr [rsi+0AD4h], xmm0 }
    v14 = GWeaponMap::GetInstance();
    v15 = Com_GetServerDObjForEnt(ent);
    v9 = 0;
    BG_AnimationMP_UpdatePlayerDObj(LOCAL_CLIENT_INVALID, v15, v14, &ent->s, (characterInfo_t *)_RSI, 0);
  }
  *(_BYTE *)(_RSI + 14497) = 0;
  v16 = Com_GetServerDObjForEnt(ent);
  LOBYTE(v9) = v16 != NULL;
  G_UpdateTagInfoOfChildren(ent, v9);
  if ( v16 )
  {
    if ( *(_DWORD *)(_RSI + 2568) )
    {
      BG_AnimationState_Update(&ent->s, (characterInfo_t *)_RSI, 0);
      if ( ScriptableSv_GetScriptableIndexForEntity(ent) != -1 )
        ScriptableSv_UpdateEntityPosition(ent);
    }
    else
    {
      if ( PlayerASM_IsEnabled() )
      {
        BG_PlayerASM_CopyAnimDataToCharacterInfo(&ent->s, (characterInfo_t *)_RSI);
      }
      else
      {
        *(_DWORD *)(_RSI + 14780) = BG_AnimationMP_GetSuitAnimIndex(&ent->s);
        *(_DWORD *)(_RSI + 14784) = BG_AnimationMP_GetLegsAnimation(&ent->s);
        *(_DWORD *)(_RSI + 14788) = BG_AnimationMP_GetTorsoAnimation(&ent->s);
      }
      *(_BYTE *)(_RSI + 14496) = 0;
      v17 = GWeaponMap::GetInstance();
      Handler = GHandler::getHandler();
      BG_PlayerAnimation(Handler, v17, &ent->s, (characterInfo_t *)_RSI, &ent->r.currentOrigin, &vec3_origin, &vec3_origin);
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
  trajectory_t_secure *p_pos; 
  unsigned int v13; 
  unsigned int eType; 
  int v15; 
  playerState_s *OwnerPlayerState; 
  int v17; 
  GCorpseInfoMP *CorpseInfo_Internal; 
  const DObj *ServerDObjForEnt; 
  const dvar_t *v22; 
  char v23; 
  bool v24; 
  bool falling; 
  char v41; 
  trType_t trType; 
  bool v100; 
  bool v101; 
  int clipmask; 
  __int16 number; 
  __int64 v127; 
  const dvar_t *v129; 
  int v134; 
  char *fmt; 
  char *fmta; 
  vec3_t *trans; 
  __int64 bUseGoalWeight; 
  bool v160; 
  GTrajectory v161; 
  vec3_t outPos; 
  vec3_t v163; 
  vec3_t forward; 
  vec3_t trBase; 
  vec3_t up; 
  vec3_t start; 
  vec3_t right; 
  Bounds bounds; 
  trace_t results; 
  vec2_t rot; 
  vec3_t v172; 

  p_pos = &ent->s.lerp.pos;
  _RBX = ent;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v13 = p_pos->trType - 23;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)_RBX->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v15 = 2359300, !_bittest(&v15, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 566, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &ent->s )") )
      __debugbreak();
  }
  OwnerPlayerState = G_PlayerCorpseMP_GetOwnerPlayerState(_RBX);
  v17 = 2047;
  CorpseInfo_Internal = G_PlayerCorpseMP_FindCorpseInfo_Internal(_RBX);
  if ( _RBX->s.groundEntityNum == 2047 )
  {
    if ( !OwnerPlayerState )
      goto LABEL_26;
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&OwnerPlayerState->otherFlags, FOG_SCALE|0x20) && G_PlayerCorpseMP_RequiresFixedDeathCamera(_RBX) )
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
LABEL_26:
  __asm
  {
    vmovaps [rsp+250h+var_A0], xmm13
    vmovaps [rsp+250h+var_B0], xmm14
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vxorps  xmm13, xmm13, xmm13
  }
  if ( !ServerDObjForEnt )
    goto LABEL_37;
  XAnimCalcDelta(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &v163, 1);
  v22 = DVARBOOL_anim_deltas_debug;
  if ( !DVARBOOL_anim_deltas_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_deltas_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = 0;
  v24 = !v22->current.enabled;
  __asm { vmovss  xmm1, dword ptr [rbp+150h+var_1D0] }
  if ( v22->current.enabled )
  {
    __asm { vucomiss xmm1, xmm13 }
    if ( v22->current.enabled )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+150h+var_1D0+4]
        vmovss  xmm0, dword ptr [rbp+150h+var_1D0+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm1, xmm1
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+250h+fmt], xmm0
      }
      Com_Printf(19, "got anim delta for this frame of ( %f, %f, %f )\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
      __asm { vmovss  xmm1, dword ptr [rbp+150h+var_1D0] }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0+4]
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0+8]
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm1, xmm3, xmm2
    vcomiss xmm1, xmm14
  }
  if ( v23 | v24 )
  {
LABEL_37:
    falling = CorpseInfo_Internal->falling;
  }
  else
  {
    falling = CorpseInfo_Internal->falling;
    if ( !falling || v13 > 5 )
    {
      v41 = 1;
      goto LABEL_39;
    }
  }
  v41 = 0;
LABEL_39:
  if ( falling || v41 )
  {
    __asm
    {
      vmovaps [rsp+250h+var_30], xmm6
      vmovaps [rsp+250h+var_40], xmm7
      vmovaps [rsp+250h+var_C0], xmm15
    }
    if ( !_RBX->tagInfo )
    {
      trType = _RBX->s.lerp.pos.trType;
      if ( falling )
      {
        if ( trType != TR_GRAVITY && v13 > 5 )
        {
          LODWORD(fmt) = 0;
          Com_PrintWarning(0, "WARNING: Entity = %d, trajectory = %d, isRagdoll = %d, entity is falling but not ragdoll or gravity or linked, clearing fall and returning.\n", (unsigned int)_RBX->s.number, (unsigned int)trType, fmt);
        }
      }
      else if ( trType != TR_INTERPOLATE && v13 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(ent->s.lerp.pos.trType == TR_INTERPOLATE || isRagdoll)", (const char *)&queryFormat, "ent->s.lerp.pos.trType == TR_INTERPOLATE || isRagdoll") )
      {
        __debugbreak();
      }
    }
    __asm
    {
      vmovaps [rsp+250h+var_70], xmm10
      vmovaps [rsp+250h+var_80], xmm11
      vmovaps [rsp+250h+var_90], xmm12
    }
    GTrajectory::GTrajectory(&v161, _RBX);
    BgTrajectory::EvaluatePosTrajectory(&v161, level.time, &outPos);
    BgTrajectory::EvaluatePosTrajectoryDelta(&v161, level.time, &v172);
    BgTrajectory::EvaluateAngTrajectory(&v161, level.time, &_RBX->r.currentAngles);
    __asm { vmovss  xmm15, cs:__real@bf800000 }
    if ( v41 )
    {
      __asm
      {
        vmovaps [rsp+250h+var_50], xmm8
        vmovaps [rsp+250h+var_60], xmm9
      }
      AngleVectors(&_RBX->r.currentAngles, &forward, &right, &up);
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+150h+forward]
        vmovss  xmm5, dword ptr [rbp+150h+forward+4]
        vmovss  xmm6, dword ptr [rbp+150h+forward+8]
        vmovss  xmm7, dword ptr [rbp+150h+var_1D0]
        vmulss  xmm10, xmm15, dword ptr [rbp+150h+right]
        vmulss  xmm11, xmm15, dword ptr [rbp+150h+right+4]
        vmulss  xmm12, xmm15, dword ptr [rbp+150h+right+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm14, xmm0
        vdivss  xmm1, xmm14, xmm0
        vmulss  xmm8, xmm5, xmm1
        vmovss  xmm5, dword ptr [rbp+150h+var_1D0+4]
        vmulss  xmm9, xmm6, xmm1
        vmovss  xmm6, dword ptr [rbp+150h+var_1D0+8]
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm0, xmm10, xmm10
        vmulss  xmm1, xmm11, xmm11
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, xmm12
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm14, xmm0
        vdivss  xmm1, xmm14, xmm0
        vmulss  xmm10, xmm10, xmm1
        vmulss  xmm11, xmm11, xmm1
        vmulss  xmm12, xmm12, xmm1
        vmulss  xmm0, xmm7, xmm4
        vaddss  xmm2, xmm0, dword ptr [rsp+250h+outPos]
        vmulss  xmm0, xmm7, xmm8
        vmulss  xmm1, xmm5, xmm10
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rbp+150h+up]
        vaddss  xmm2, xmm3, xmm1
        vaddss  xmm3, xmm0, dword ptr [rsp+250h+outPos+4]
        vmovss  dword ptr [rsp+250h+outPos], xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+150h+up+4]
        vmulss  xmm1, xmm5, xmm11
        vmulss  xmm0, xmm7, xmm9
        vmovss  dword ptr [rbp+150h+forward], xmm4
        vaddss  xmm4, xmm3, xmm1
        vaddss  xmm1, xmm4, xmm2
        vaddss  xmm2, xmm0, dword ptr [rsp+250h+outPos+8]
        vmovss  dword ptr [rsp+250h+outPos+4], xmm1
        vmulss  xmm1, xmm5, xmm12
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm6, dword ptr [rbp+150h+up+8]
        vaddss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rbp+150h+forward+4], xmm8
        vmovaps xmm8, [rsp+250h+var_50]
        vmovss  dword ptr [rbp+150h+forward+8], xmm9
        vmovaps xmm9, [rsp+250h+var_60]
        vmovss  dword ptr [rsp+250h+outPos+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm11, xmm11, xmm11
        vxorps  xmm12, xmm12, xmm12
      }
    }
    v100 = _RBX->clipmask == 0;
    if ( !_RBX->clipmask )
    {
      v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 635, ASSERT_TYPE_ASSERT, "(ent->clipmask)", (const char *)&queryFormat, "ent->clipmask");
      v100 = !v101;
      if ( v101 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    clipmask = _RBX->clipmask;
    if ( v100 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+100h]
        vmovsd  xmm1, qword ptr [rbx+110h]
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
        vmovsd  xmm1, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
      }
    }
    __asm
    {
      vmovsd  qword ptr [rbp+150h+bounds.halfSize+4], xmm1
      vmovups xmmword ptr [rbp+150h+bounds.midPoint], xmm0
    }
    if ( EntHandle::isDefined(&_RBX->r.ownerNum) )
      number = EntHandle::entnum(&_RBX->r.ownerNum);
    else
      number = _RBX->s.number;
    G_Main_TraceCapsule(&results, &_RBX->r.currentOrigin, &outPos, &bounds, number, clipmask);
    __asm
    {
      vmovss  xmm7, [rbp+150h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+250h+outPos]
      vsubss  xmm1, xmm0, dword ptr [rbx+130h]
      vmovss  xmm0, dword ptr [rsp+250h+outPos+4]
      vmulss  xmm1, xmm1, xmm7
      vaddss  xmm6, xmm1, dword ptr [rbx+130h]
      vsubss  xmm1, xmm0, dword ptr [rbx+134h]
      vmovss  xmm0, dword ptr [rsp+250h+outPos+8]
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm1, xmm0, dword ptr [rbx+138h]
      vaddss  xmm5, xmm2, dword ptr [rbx+134h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rbx+138h]
    }
    _EAX = 0;
    __asm { vmovd   xmm1, eax }
    _EAX = results.startsolid;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm13, xmm7, xmm2
      vmovss  [rbp+150h+results.fraction], xmm0
      vmovss  dword ptr [rbp+150h+trBase], xmm6
      vmovss  dword ptr [rbp+150h+trBase+4], xmm5
      vmovss  dword ptr [rbp+150h+trBase+8], xmm3
      vmovss  dword ptr [rbx+130h], xmm6
      vmovss  dword ptr [rbx+134h], xmm5
      vmovss  dword ptr [rbx+138h], xmm3
    }
    SV_LinkEntity(_RBX);
    G_Main_RunThink(_RBX);
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v127 = _RBX - g_entities;
    if ( (unsigned int)v127 >= 0x800 )
    {
      LODWORD(bUseGoalWeight) = 2048;
      LODWORD(trans) = _RBX - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", trans, bUseGoalWeight) )
        __debugbreak();
    }
    if ( G_IsEntityInUse((__int16)v127) )
    {
      __asm
      {
        vmovss  xmm0, [rbp+150h+results.fraction]
        vucomiss xmm0, xmm14
      }
      v129 = DVARBOOL_killswitch_skip_bounce_on_linked_agent_corpse_enabled;
      v160 = CorpseInfo_Internal->falling;
      if ( !DVARBOOL_killswitch_skip_bounce_on_linked_agent_corpse_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skip_bounce_on_linked_agent_corpse_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v129);
      if ( v160 && (!v129->current.enabled || _RBX->s.eType != ET_AGENT_CORPSE || !G_EntIsLinked(_RBX)) )
      {
        if ( !CorpseInfo_Internal->skipDropChecks && results.allsolid )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+130h]
            vmovss  xmm1, dword ptr [rbx+134h]
            vmovss  dword ptr [rbp+150h+start], xmm0
            vmovss  xmm0, dword ptr [rbx+138h]
            vaddss  xmm2, xmm0, cs:__real@42000000
          }
          v134 = clipmask & 0xFFFEFFFF;
          __asm
          {
            vmovss  dword ptr [rbp+150h+start+8], xmm2
            vmovss  dword ptr [rbp+150h+start+4], xmm1
          }
          if ( EntHandle::isDefined(&_RBX->r.ownerNum) )
            v17 = EntHandle::entnum(&_RBX->r.ownerNum);
          G_Main_TraceCapsule(&results, &start, &outPos, &bounds, v17, v134);
          if ( !results.allsolid )
          {
            __asm
            {
              vmovss  xmm6, [rbp+150h+results.fraction]
              vmovss  xmm0, dword ptr [rsp+250h+outPos]
              vsubss  xmm1, xmm0, dword ptr [rbp+150h+start]
              vmovss  xmm0, dword ptr [rsp+250h+outPos+4]
              vmulss  xmm1, xmm1, xmm6
              vaddss  xmm7, xmm1, dword ptr [rbp+150h+start]
              vsubss  xmm1, xmm0, dword ptr [rbp+150h+start+4]
              vmovss  xmm0, dword ptr [rsp+250h+outPos+8]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm5, xmm2, dword ptr [rbp+150h+start+4]
              vsubss  xmm1, xmm0, dword ptr [rbp+150h+start+8]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rbp+150h+start+8]
              vmovss  dword ptr [rbp+150h+trBase+8], xmm3
              vmovss  dword ptr [rbx+138h], xmm3
              vmovss  dword ptr [rbp+150h+trBase], xmm7
              vmovss  dword ptr [rbp+150h+trBase+4], xmm5
              vmovss  dword ptr [rbx+130h], xmm7
              vmovss  dword ptr [rbx+134h], xmm5
            }
          }
        }
        G_BounceCorpse(_RBX, CorpseInfo_Internal, &results, &trBase);
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+250h+var_80]
      vmovaps xmm12, [rsp+250h+var_90]
      vmovaps xmm10, [rsp+250h+var_70]
      vmovaps xmm7, [rsp+250h+var_40]
      vmovaps xmm6, [rsp+250h+var_30]
      vmovaps xmm15, [rsp+250h+var_C0]
    }
  }
  __asm
  {
    vmovaps xmm13, [rsp+250h+var_A0]
    vmovaps xmm14, [rsp+250h+var_B0]
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
  GHandler *Handler; 
  vec3_t angles; 
  WorldUpReferenceFrame v14; 

  _R14 = sourceAngels;
  if ( !sourcePs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 874, ASSERT_TYPE_ASSERT, "(sourcePs)", (const char *)&queryFormat, "sourcePs") )
    __debugbreak();
  if ( !cloneBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(cloneBody)", (const char *)&queryFormat, "cloneBody") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v8 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_corpse_mp.cpp", 878, ASSERT_TYPE_ASSERT, "(antilagSystem)", (const char *)&queryFormat, "antilagSystem") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rsp+98h+angles], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rsp+98h+angles+8], xmm0
    vmovss  dword ptr [rsp+98h+angles+4], xmm1
  }
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, sourcePs, Handler);
  if ( !v8->IsWorldUpIncludedOnEntity(v8, sourcePs->clientNum) && v14.m_axisAdjusted )
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v14, &angles);
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

