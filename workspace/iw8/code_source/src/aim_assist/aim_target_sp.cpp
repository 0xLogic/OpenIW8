/*
==============
AimTargetSP_GetBestTarget
==============
*/

int __fastcall AimTargetSP_GetBestTarget(int clientNum, const vec3_t *start, const vec3_t *viewDir)
{
  return ?AimTargetSP_GetBestTarget@@YAHHAEBTvec3_t@@0@Z(clientNum, start, viewDir);
}

/*
==============
AimTargetSP_ReadSaveGame
==============
*/

void __fastcall AimTargetSP_ReadSaveGame(SaveGame *save)
{
  ?AimTargetSP_ReadSaveGame@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
AimTargetSP_WriteSaveGame
==============
*/

void __fastcall AimTargetSP_WriteSaveGame(MemoryFile *memFile)
{
  ?AimTargetSP_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AimTargetSP_UpdateClientTargets
==============
*/

void AimTargetSP_UpdateClientTargets(void)
{
  ?AimTargetSP_UpdateClientTargets@@YAXXZ();
}

/*
==============
AimTargetSP_UpdateCachedTargets
==============
*/

void AimTargetSP_UpdateCachedTargets(void)
{
  ?AimTargetSP_UpdateCachedTargets@@YAXXZ();
}

/*
==============
AimTargetSP_ProcessEntity
==============
*/

void __fastcall AimTargetSP_ProcessEntity(gentity_s *ent)
{
  ?AimTargetSP_ProcessEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
AimTargetSP_ClearTargetList
==============
*/

void AimTargetSP_ClearTargetList(void)
{
  ?AimTargetSP_ClearTargetList@@YAXXZ();
}

/*
==============
AimTargetSP_AddTargetToList
==============
*/
void AimTargetSP_AddTargetToList(int clientNum, const AimTarget *target)
{
  int v4; 
  AimTargetGlob *Glob; 
  int targetCount; 
  __int64 v7; 
  float *p_entIndex; 
  float worldDistSqr; 
  float v10; 
  int v11; 
  int v12; 
  int v13; 
  __m256i *v14; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 177, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
    __debugbreak();
  v4 = 0;
  Glob = AimTarget_GetGlob(clientNum);
  targetCount = Glob->targetCount;
  if ( targetCount <= 0 )
    goto LABEL_20;
  do
  {
    v7 = (targetCount + v4) / 2;
    p_entIndex = (float *)&Glob->targets[v7].entIndex;
    if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 157, ASSERT_TYPE_ASSERT, "(targetA)", (const char *)&queryFormat, "targetA") )
      __debugbreak();
    if ( !p_entIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 158, ASSERT_TYPE_ASSERT, "(targetB)", (const char *)&queryFormat, "targetB") )
      __debugbreak();
    worldDistSqr = target->worldDistSqr;
    v10 = p_entIndex[1];
    if ( worldDistSqr >= v10 )
      v11 = (worldDistSqr <= v10) - 1;
    else
      v11 = 1;
    v12 = (targetCount + v4) / 2;
    if ( v11 <= 0 )
      v12 = targetCount;
    targetCount = v12;
    if ( v11 <= 0 )
      v4 = v7 + 1;
  }
  while ( v4 < v12 );
  if ( v4 < 32 )
  {
LABEL_20:
    v13 = Glob->targetCount;
    if ( v13 == 32 )
    {
      v13 = 31;
      Glob->targetCount = 31;
    }
    v14 = (__m256i *)&Glob->targets[v4];
    memmove_0(&Glob->targets[v4 + 1], v14, 48i64 * (v13 - v4));
    *v14 = *(__m256i *)&target->entIndex;
    *(_OWORD *)v14[1].m256i_i8 = *(_OWORD *)target->velocity.v;
    ++Glob->targetCount;
  }
}

/*
==============
AimTargetSP_CalcTargetFlags
==============
*/
char AimTargetSP_CalcTargetFlags(const gentity_s *targetEnt)
{
  __int16 EntityIndex; 
  entityType_s eType; 
  unsigned int eTeam; 
  bitarray_base<bitarray<224> > *v5; 

  Profile_Begin(42);
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 46, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(targetEnt);
  if ( !G_IsEntityInUse(EntityIndex) || !targetEnt->r.isLinked )
    goto LABEL_20;
  eType = targetEnt->s.eType;
  if ( eType == ET_ACTOR )
  {
    if ( !targetEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 56, ASSERT_TYPE_ASSERT, "(targetEnt->sentient)", (const char *)&queryFormat, "targetEnt->sentient") )
      __debugbreak();
    if ( targetEnt->health > 0 )
    {
      eTeam = targetEnt->sentient->eTeam;
      v5 = (bitarray_base<bitarray<224> > *)(Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllCombatTeamFlags() : Com_TeamsMP_GetAllTeamFlags());
      if ( bitarray_base<bitarray<224>>::testBit(v5, eTeam) )
      {
        if ( (LOBYTE(targetEnt->s.un.animRate) & 4) != 0 )
        {
          Profile_EndInternal(NULL);
          return 2;
        }
        goto LABEL_23;
      }
    }
LABEL_20:
    Profile_EndInternal(NULL);
    return 0;
  }
  if ( eType == ET_SCRIPTMOVER )
  {
    if ( targetEnt->health <= 0 || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->s.lerp.eFlags, ACTIVE, 8u) )
      goto LABEL_20;
  }
  else if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->s.lerp.eFlags, ACTIVE, 8u) || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->s.lerp.eFlags, ACTIVE, 1u) )
  {
    goto LABEL_20;
  }
LABEL_23:
  Profile_EndInternal(NULL);
  return 3;
}

/*
==============
AimTargetSP_ClearTargetList
==============
*/
void AimTargetSP_ClearTargetList(void)
{
  AimTargetGlob *Glob; 
  int v1; 
  int v2; 
  AimTargetGlob *v3; 
  int targetCount; 
  AimTargetGlob *v5; 
  char *v6; 
  gentity_s *v7; 
  int v8; 
  __int128 v9; 
  char Src[1536]; 

  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 116, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  Glob = AimTarget_GetGlob(0);
  v1 = 0;
  v2 = 0;
  v3 = Glob;
  targetCount = Glob->targetCount;
  if ( targetCount > 0 )
  {
    v5 = Glob;
    v6 = Src;
    do
    {
      v7 = &level.gentities[v5->targets[0].entIndex];
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v8 = v7->s.number - level.time / level.frameDuration;
      if ( AimTargetSP_CalcTargetFlags(v7) && v8 % 8 )
      {
        v9 = *(_OWORD *)v5->targets[0].velocity.v;
        *(__m256i *)v6 = *(__m256i *)&v5->targets[0].entIndex;
        ++v1;
        *((_OWORD *)v6 + 2) = v9;
        v6 += 48;
      }
      else
      {
        if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
          __debugbreak();
        v7->flags.m_flags[1] &= ~4u;
      }
      targetCount = v3->targetCount;
      ++v2;
      v5 = (AimTargetGlob *)((char *)v5 + 48);
    }
    while ( v2 < targetCount );
  }
  if ( v1 > targetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 144, ASSERT_TYPE_ASSERT, "(remainingTargetCount <= atGlob->targetCount)", (const char *)&queryFormat, "remainingTargetCount <= atGlob->targetCount") )
    __debugbreak();
  memcpy_0(v3, Src, 48i64 * v1);
  v3->targetCount = v1;
  v3->targetBoneCount = 0;
}

/*
==============
AimTargetSP_CreateTarget
==============
*/
char AimTargetSP_CreateTarget(int clientNum, gentity_s *targetEnt, const AimTargetFlags flags)
{
  __int64 v3; 
  char v4; 
  gentity_s *v6; 
  bool v7; 
  bool IsTargetVisible; 
  const dvar_t *v9; 
  bool v10; 
  const dvar_t *v11; 
  const vec4_t *v12; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  int number; 
  vec3_t *p_vVelocity; 
  float v19; 
  float v20; 
  GTrajectory v22; 
  vec3_t outPos; 
  AimTarget target; 
  vec3_t v25; 
  vec3_t v26; 

  v3 = clientNum;
  v4 = flags;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 409, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  v6 = &level.gentities[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 412, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( AimTarget_GetGlob(v3)->targetCount >= 32 )
    return 0;
  v7 = targetEnt->s.eType == ET_ACTOR;
  outPos.v[0] = 0.0;
  outPos.v[1] = 0.0;
  outPos.v[2] = 0.0;
  if ( v7 )
    G_Utils_DObjGetWorldTagPos_CheckTagExists(targetEnt, (const scr_string_t)scr_const.j_spine4, 1, &outPos);
  IsTargetVisible = AimTargetSP_IsTargetVisible(v6, targetEnt, &outPos);
  v9 = DVARBOOL_scripted_melee_debug;
  v10 = IsTargetVisible;
  if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    goto LABEL_18;
  v11 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
LABEL_18:
    if ( (v4 & 2) != 0 )
    {
      v12 = &colorRed;
      v13 = 2;
      if ( v10 )
        v13 = 8;
      if ( v10 )
        v12 = &colorGreen;
      G_DebugSphere(&outPos, radius, v12, 0, v13);
    }
  }
  if ( !v10 )
    return 0;
  AimTargetSP_GetTargetBounds(targetEnt, &target.box);
  v7 = targetEnt->s.eType == ET_ACTOR;
  v14 = targetEnt->r.currentOrigin.v[0] - v6->r.currentOrigin.v[0];
  v15 = targetEnt->r.currentOrigin.v[1] - v6->r.currentOrigin.v[1];
  v16 = targetEnt->r.currentOrigin.v[2] - v6->r.currentOrigin.v[2];
  number = targetEnt->s.number;
  target.worldDistSqr = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
  target.entIndex = number;
  if ( v7 )
  {
    if ( !targetEnt->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 389, ASSERT_TYPE_ASSERT, "(targetEnt->actor)", (const char *)&queryFormat, "targetEnt->actor") )
      __debugbreak();
    p_vVelocity = &targetEnt->actor->Physics.vVelocity;
    *(_QWORD *)target.velocity.v = *(_QWORD *)p_vVelocity->v;
    v19 = p_vVelocity->v[2];
  }
  else
  {
    GTrajectory::GTrajectory(&v22, targetEnt);
    BgTrajectory::EvaluatePosTrajectory(&v22, level.time, &v26);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    BgTrajectory::EvaluatePosTrajectory(&v22, level.frameDuration + level.time, &v25);
    target.velocity.v[0] = v25.v[0] - v26.v[0];
    target.velocity.v[2] = v25.v[2] - v26.v[2];
    target.velocity.v[1] = v25.v[1] - v26.v[1];
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v20 = 1000.0 / (float)level.frameDuration;
    v19 = v20 * target.velocity.v[2];
    target.velocity.v[0] = v20 * target.velocity.v[0];
    target.velocity.v[1] = v20 * target.velocity.v[1];
  }
  target.flags[0] = v4;
  target.velocity.v[2] = v19;
  AimTargetSP_AddTargetToList(v3, &target);
  return 1;
}

/*
==============
AimTargetSP_GetActorRadius
==============
*/
float AimTargetSP_GetActorRadius(const gentity_s *targetEnt)
{
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 211, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !targetEnt->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 212, ASSERT_TYPE_ASSERT, "(targetEnt->actor)", (const char *)&queryFormat, "targetEnt->actor") )
    __debugbreak();
  return FLOAT_10_0;
}

/*
==============
AimTargetSP_GetBestTarget
==============
*/
__int64 AimTargetSP_GetBestTarget(int clientNum, const vec3_t *start, const vec3_t *viewDir)
{
  unsigned int v6; 
  float v7; 
  AimTargetGlob *Glob; 
  __int64 v9; 
  __int64 targetCount; 
  _BYTE *flags; 
  unsigned __int64 v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v31; 
  float v32; 
  __int64 v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  float v37; 
  float v41; 
  float v42; 
  __int64 v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  float v47; 
  float v51; 
  float v52; 
  AimTarget *v53; 
  __int64 v54; 
  __int64 entIndex; 
  float v56; 
  float v57; 
  __int128 v58; 
  float v59; 
  float v63; 
  float v64; 
  __int64 v66; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(viewDir->v[0] * viewDir->v[0]) + (float)(viewDir->v[1] * viewDir->v[1])) + (float)(viewDir->v[2] * viewDir->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 576, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( viewDir ))", (const char *)&queryFormat, "Vec3IsNormalized( viewDir )") )
    __debugbreak();
  v6 = 2047;
  v7 = FLOAT_0_9659;
  if ( clientNum )
  {
    LODWORD(v66) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 582, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 1 )", "clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v66, 1) )
      __debugbreak();
  }
  Glob = AimTarget_GetGlob(clientNum);
  v9 = 0i64;
  targetCount = Glob->targetCount;
  if ( targetCount >= 4 )
  {
    flags = Glob->targets[1].flags;
    v12 = ((unsigned __int64)(targetCount - 4) >> 2) + 1;
    v9 = 4 * v12;
    do
    {
      if ( (*(flags - 48) & 1) != 0 )
      {
        v13 = *((int *)flags - 23);
        v14 = g_entities[v13].r.currentOrigin.v[0] - start->v[0];
        v16 = LODWORD(g_entities[v13].r.currentOrigin.v[1]);
        v15 = g_entities[v13].r.currentOrigin.v[1] - start->v[1];
        v17 = g_entities[v13].r.currentOrigin.v[2] - start->v[2];
        *(float *)&v16 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v17 * v17));
        _XMM1 = v16;
        __asm
        {
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        v21 = 1.0 / *(float *)&_XMM0;
        v22 = (float)((float)(1.0 / *(float *)&_XMM0) * v14) * viewDir->v[0];
        if ( (float)((float)(v22 + (float)((float)(v21 * v15) * viewDir->v[1])) + (float)((float)(v21 * v17) * viewDir->v[2])) > v7 )
        {
          v6 = *((_DWORD *)flags - 23);
          v7 = (float)(v22 + (float)((float)(v21 * v15) * viewDir->v[1])) + (float)((float)(v21 * v17) * viewDir->v[2]);
        }
      }
      if ( (*flags & 1) != 0 )
      {
        v23 = *((int *)flags - 11);
        v24 = g_entities[v23].r.currentOrigin.v[0] - start->v[0];
        v26 = LODWORD(g_entities[v23].r.currentOrigin.v[1]);
        v25 = g_entities[v23].r.currentOrigin.v[1] - start->v[1];
        v27 = g_entities[v23].r.currentOrigin.v[2] - start->v[2];
        *(float *)&v26 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v27 * v27));
        _XMM1 = v26;
        __asm
        {
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        v31 = 1.0 / *(float *)&_XMM0;
        v32 = (float)((float)(1.0 / *(float *)&_XMM0) * v24) * viewDir->v[0];
        if ( (float)((float)(v32 + (float)((float)(v31 * v25) * viewDir->v[1])) + (float)((float)(v31 * v27) * viewDir->v[2])) > v7 )
        {
          v6 = *((_DWORD *)flags - 11);
          v7 = (float)(v32 + (float)((float)(v31 * v25) * viewDir->v[1])) + (float)((float)(v31 * v27) * viewDir->v[2]);
        }
      }
      if ( (flags[48] & 1) != 0 )
      {
        v33 = *((int *)flags + 1);
        v34 = g_entities[v33].r.currentOrigin.v[0] - start->v[0];
        v36 = LODWORD(g_entities[v33].r.currentOrigin.v[1]);
        v35 = g_entities[v33].r.currentOrigin.v[1] - start->v[1];
        v37 = g_entities[v33].r.currentOrigin.v[2] - start->v[2];
        *(float *)&v36 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v37 * v37));
        _XMM1 = v36;
        __asm
        {
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        v41 = 1.0 / *(float *)&_XMM0;
        v42 = (float)((float)(1.0 / *(float *)&_XMM0) * v34) * viewDir->v[0];
        if ( (float)((float)(v42 + (float)((float)(v41 * v35) * viewDir->v[1])) + (float)((float)(v41 * v37) * viewDir->v[2])) > v7 )
        {
          v6 = *((_DWORD *)flags + 1);
          v7 = (float)(v42 + (float)((float)(v41 * v35) * viewDir->v[1])) + (float)((float)(v41 * v37) * viewDir->v[2]);
        }
      }
      if ( (flags[96] & 1) != 0 )
      {
        v43 = *((int *)flags + 13);
        v44 = g_entities[v43].r.currentOrigin.v[0] - start->v[0];
        v46 = LODWORD(g_entities[v43].r.currentOrigin.v[1]);
        v45 = g_entities[v43].r.currentOrigin.v[1] - start->v[1];
        v47 = g_entities[v43].r.currentOrigin.v[2] - start->v[2];
        *(float *)&v46 = fsqrt((float)((float)(v45 * v45) + (float)(v44 * v44)) + (float)(v47 * v47));
        _XMM1 = v46;
        __asm
        {
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        v51 = 1.0 / *(float *)&_XMM0;
        v52 = (float)((float)(1.0 / *(float *)&_XMM0) * v44) * viewDir->v[0];
        if ( (float)((float)(v52 + (float)((float)(v51 * v45) * viewDir->v[1])) + (float)((float)(v51 * v47) * viewDir->v[2])) > v7 )
        {
          v6 = *((_DWORD *)flags + 13);
          v7 = (float)(v52 + (float)((float)(v51 * v45) * viewDir->v[1])) + (float)((float)(v51 * v47) * viewDir->v[2]);
        }
      }
      flags += 192;
      --v12;
    }
    while ( v12 );
  }
  if ( v9 < targetCount )
  {
    v53 = &Glob->targets[v9];
    v54 = targetCount - v9;
    do
    {
      if ( (v53->flags[0] & 1) != 0 )
      {
        entIndex = v53->entIndex;
        v56 = g_entities[entIndex].r.currentOrigin.v[0] - start->v[0];
        v58 = LODWORD(g_entities[entIndex].r.currentOrigin.v[1]);
        v57 = g_entities[entIndex].r.currentOrigin.v[1] - start->v[1];
        v59 = g_entities[entIndex].r.currentOrigin.v[2] - start->v[2];
        *(float *)&v58 = fsqrt((float)((float)(v57 * v57) + (float)(v56 * v56)) + (float)(v59 * v59));
        _XMM1 = v58;
        __asm
        {
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        v63 = 1.0 / *(float *)&_XMM0;
        v64 = (float)((float)(1.0 / *(float *)&_XMM0) * v56) * viewDir->v[0];
        if ( (float)((float)(v64 + (float)((float)(v63 * v57) * viewDir->v[1])) + (float)((float)(v63 * v59) * viewDir->v[2])) > v7 )
        {
          v6 = v53->entIndex;
          v7 = (float)(v64 + (float)((float)(v63 * v57) * viewDir->v[1])) + (float)((float)(v63 * v59) * viewDir->v[2]);
        }
      }
      ++v53;
      --v54;
    }
    while ( v54 );
  }
  return v6;
}

/*
==============
AimTargetSP_GetTargetBounds
==============
*/
void AimTargetSP_GetTargetBounds(const gentity_s *targetEnt, Bounds *box)
{
  entityType_s eType; 
  const dvar_t *v5; 
  float v6; 
  float ActorRadius; 
  float v8; 
  unsigned __int8 modelType; 
  vec3_t outPos; 
  vec3_t v11; 

  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 219, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !box && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 220, ASSERT_TYPE_ASSERT, "(box)", (const char *)&queryFormat, "box") )
    __debugbreak();
  eType = targetEnt->s.eType;
  if ( eType == ET_ACTOR )
  {
    G_Utils_DObjGetWorldTagPos_CheckTagExists(targetEnt, (const scr_string_t)scr_const.aim_highest_bone, 1, &outPos);
    if ( G_Utils_DObjGetWorldTagPos(targetEnt, scr_const.j_spine4, &v11) && v11.v[2] > outPos.v[2] )
      outPos = v11;
    v5 = DCONST_DVARFLT_aim_actorBoundsZPadding;
    if ( !DCONST_DVARFLT_aim_actorBoundsZPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_actorBoundsZPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = (float)(outPos.v[2] - targetEnt->r.currentOrigin.v[2]) + v5->current.value;
    ActorRadius = AimTargetSP_GetActorRadius(targetEnt);
    v8 = v6 * 0.5;
    box->midPoint.v[2] = v8;
    *(_QWORD *)box->midPoint.v = 0i64;
    box->halfSize.v[0] = ActorRadius;
    box->halfSize.v[1] = ActorRadius;
    box->halfSize.v[2] = v8;
  }
  else if ( eType == ET_SCRIPTMOVER )
  {
    box->midPoint.v[0] = targetEnt->r.box.midPoint.v[0];
    box->midPoint.v[1] = targetEnt->r.box.midPoint.v[1];
    box->midPoint.v[2] = targetEnt->r.box.midPoint.v[2];
    box->halfSize.v[0] = targetEnt->r.box.halfSize.v[0];
    box->halfSize.v[1] = targetEnt->r.box.halfSize.v[1];
    box->halfSize.v[2] = targetEnt->r.box.halfSize.v[2];
  }
  else
  {
    modelType = targetEnt->r.modelType;
    if ( modelType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 247, ASSERT_TYPE_ASSERT, "( targetEnt->r.modelType ) == ( MODELTYPE_BRUSH )", "%s == %s\n\t%i, %i", "targetEnt->r.modelType", "MODELTYPE_BRUSH", modelType, 5) )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->s.lerp.eFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 248, ASSERT_TYPE_ASSERT, "(targetEnt->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ))", (const char *)&queryFormat, "targetEnt->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL )") )
      __debugbreak();
    CM_BrushModelBounds(targetEnt->s.index.brushModel, box);
  }
}

/*
==============
AimTargetSP_IsTargetValidForPlayer
==============
*/
bool AimTargetSP_IsTargetValidForPlayer(const gentity_s *playerEnt, const gentity_s *targetEnt)
{
  sentient_s *sentient; 
  sentient_s *v5; 
  bool v6; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v8; 
  double v9; 
  unsigned int v10; 
  float v12; 
  float v13; 
  float v14; 
  float ActorRadius; 
  float v16; 
  float v17; 
  float v18; 
  bitarray<224> result; 
  vec3_t outForward; 

  Profile_Begin(42);
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !playerEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 297, ASSERT_TYPE_ASSERT, "(playerEnt->sentient)", (const char *)&queryFormat, "playerEnt->sentient") )
    __debugbreak();
  if ( playerEnt->s.number == targetEnt->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 298, ASSERT_TYPE_ASSERT, "(playerEnt->s.number != targetEnt->s.number)", (const char *)&queryFormat, "playerEnt->s.number != targetEnt->s.number") )
    __debugbreak();
  if ( targetEnt->s.eType != ET_ACTOR )
    goto LABEL_33;
  if ( !targetEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 303, ASSERT_TYPE_ASSERT, "(targetEnt->sentient)", (const char *)&queryFormat, "targetEnt->sentient") )
    __debugbreak();
  sentient = targetEnt->sentient;
  v5 = playerEnt->sentient;
  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    v8 = *(_OWORD *)AllCombatTeamFlags->array;
    v9 = *(double *)&AllCombatTeamFlags->array[4];
    v10 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    *(_OWORD *)result.array = v8;
    *(double *)&result.array[4] = v9;
    if ( v6 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v10 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, v5->eTeam);
  }
  if ( bitarray_base<bitarray<224>>::testBit(&result, sentient->eTeam) )
  {
LABEL_33:
    v12 = targetEnt->r.currentOrigin.v[0] - playerEnt->r.currentOrigin.v[0];
    v13 = targetEnt->r.currentOrigin.v[1] - playerEnt->r.currentOrigin.v[1];
    v14 = targetEnt->r.currentOrigin.v[2] - playerEnt->r.currentOrigin.v[2];
    G_Client_GetViewDirection(playerEnt, &outForward, NULL, NULL);
    if ( targetEnt->s.eType == ET_ACTOR )
    {
      ActorRadius = AimTargetSP_GetActorRadius(targetEnt);
    }
    else
    {
      AimTargetSP_GetTargetBounds(targetEnt, (Bounds *)&result);
      ActorRadius = fsqrt((float)((float)((float)(COERCE_FLOAT(result.array[1] & _xmm) + *(float *)&result.array[4]) * (float)(COERCE_FLOAT(result.array[1] & _xmm) + *(float *)&result.array[4])) + (float)((float)(COERCE_FLOAT(result.array[0] & _xmm) + *(float *)&result.array[3]) * (float)(COERCE_FLOAT(result.array[0] & _xmm) + *(float *)&result.array[3]))) + (float)((float)(COERCE_FLOAT(result.array[2] & _xmm) + *(float *)&result.array[5]) * (float)(COERCE_FLOAT(result.array[2] & _xmm) + *(float *)&result.array[5])));
    }
    v16 = v13 * outForward.v[1];
    v17 = v12 * outForward.v[0];
    v18 = v14 * outForward.v[2];
    Profile_EndInternal(NULL);
    return (float)((float)((float)(v16 + v17) + v18) + ActorRadius) >= 0.0;
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0;
  }
}

/*
==============
AimTargetSP_IsTargetVisible
==============
*/
_BOOL8 AimTargetSP_IsTargetVisible(const gentity_s *playerEnt, const gentity_s *targetEnt, vec3_t *inOutPos)
{
  HavokPhysics_CollisionQueryResult *AnyResult; 
  bool v7; 
  double ClientVisibility; 
  float v9; 
  double FxVisibility; 
  hkMemoryAllocator *v11; 
  hkMemoryAllocator *v12; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v15; 
  __int64 v16; 
  vec3_t end; 
  vec3_t outOrigin; 
  Bounds box; 

  v16 = -2i64;
  Profile_Begin(43);
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 338, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 339, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( targetEnt->s.eType == ET_ACTOR )
  {
    end = *inOutPos;
  }
  else
  {
    AimTargetSP_GetTargetBounds(targetEnt, &box);
    end.v[0] = box.midPoint.v[0] + targetEnt->r.currentOrigin.v[0];
    end.v[1] = box.midPoint.v[1] + targetEnt->r.currentOrigin.v[1];
    end.v[2] = box.midPoint.v[2] + targetEnt->r.currentOrigin.v[2];
  }
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 346, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  if ( playerEnt->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 347, ASSERT_TYPE_ASSERT, "( playerEnt->s.number == 0 )", (const char *)&queryFormat, "playerEnt->s.number == 0") )
    __debugbreak();
  G_Client_GetViewOrigin(&playerEnt->client->ps, &outOrigin);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v15, 2, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v15, 0, targetEnt->s.number, 1, 1, 0, 1, 1);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v15, 1, playerEnt->s.number, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8423683;
  extendedData.ignoreBodies = &v15;
  AnyResult = PhysicsQuery_GetAnyResult(PHYSICS_WORLD_ID_FIRST);
  if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 359, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &outOrigin, &end, &extendedData, AnyResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(AnyResult, 0, inOutPos);
    Profile_EndInternal(NULL);
    v7 = 0;
  }
  else
  {
    if ( SV_IsDemoPlaying() )
    {
      FxVisibility = SV_DemoSP_GetFxVisibility();
      v9 = *(float *)&FxVisibility;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, &outOrigin, &end);
      v9 = *(float *)&ClientVisibility;
      SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
    }
    Profile_EndInternal(NULL);
    v7 = v9 > 0.000099999997;
  }
  v11 = hkMemHeapAllocator();
  v15.m_ignoreBodies.m_size = 0;
  if ( v15.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v11, v15.m_ignoreBodies.m_data, 4, v15.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v15.m_ignoreBodies.m_data = NULL;
  v15.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v12 = hkMemHeapAllocator();
  v15.m_ignoreEntities.m_size = 0;
  if ( v15.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, v15.m_ignoreEntities.m_data, 8, v15.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v7;
}

/*
==============
AimTargetSP_ProcessEntity
==============
*/
void AimTargetSP_ProcessEntity(gentity_s *ent)
{
  signed __int64 v2; 
  char v3; 
  unsigned __int8 v4; 
  gentity_s *gentities; 
  gclient_s *client; 
  int pm_type; 
  __int64 v8; 
  __int64 v9; 

  Profile_Begin(41);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 486, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v8) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  v2 = (__int16)v2;
  if ( (unsigned int)(__int16)v2 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v2].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 487, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  v3 = AimTargetSP_CalcTargetFlags(ent);
  v4 = v3;
  if ( !ent->r.isLinked || !v3 )
    goto LABEL_62;
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 501, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  gentities = level.gentities;
  if ( !level.gentities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 504, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !gentities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 505, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  if ( ent->s.number == gentities->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 506, ASSERT_TYPE_ASSERT, "( ent->s.number != playerEnt->s.number )", (const char *)&queryFormat, "ent->s.number != playerEnt->s.number") )
    __debugbreak();
  client = gentities->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 461, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = client->ps.pm_type;
  if ( pm_type < 2 || pm_type > 4 && (unsigned int)(pm_type - 7) > 1 )
  {
    if ( !AimTargetSP_IsTargetValidForPlayer(gentities, ent) )
    {
LABEL_43:
      GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::ClearFlagStrict(&ent->flags, (BgEntityFlagsSP)34);
      goto LABEL_59;
    }
    if ( (((unsigned __int8)ent->s.number - (unsigned __int8)(level.time / G_Level_GetFrameDuration())) & 1) == 0 )
    {
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( (ent->flags.m_flags[1] & 4) == 0 )
      {
        if ( !AimTargetSP_CreateTarget(0, ent, (const AimTargetFlags)v4) )
          goto LABEL_43;
        if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
          __debugbreak();
        ent->flags.m_flags[1] |= 4u;
      }
    }
  }
  else
  {
LABEL_62:
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    ent->flags.m_flags[1] &= ~4u;
  }
LABEL_59:
  Profile_EndInternal(NULL);
}

/*
==============
AimTargetSP_ReadSaveGame
==============
*/
void AimTargetSP_ReadSaveGame(SaveGame *save)
{
  AimTargetGlob *Glob; 
  int i; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 632, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 633, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  Glob = AimTarget_GetGlob(0);
  SaveMemory_LoadRead(&Glob->targetCount, 4, save);
  for ( i = 0; i < Glob->targetCount; ++i )
    SaveMemory_LoadRead(&Glob->targets[i], 48, save);
}

/*
==============
AimTargetSP_UpdateCachedTargets
==============
*/
void AimTargetSP_UpdateCachedTargets(void)
{
  AimTargetGlob *Glob; 
  __int64 targetCount; 

  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 543, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  Glob = AimTarget_GetGlob(0);
  targetCount = Glob->targetCount;
  Glob->cachedTargetCount = targetCount;
  memcpy_0(Glob->cachedTargets, Glob, 48 * targetCount);
}

/*
==============
AimTargetSP_UpdateClientTargets
==============
*/
void AimTargetSP_UpdateClientTargets(void)
{
  AimTargetGlob *Glob; 
  __int64 cachedTargetCount; 

  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 557, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  Glob = AimTarget_GetGlob(0);
  cachedTargetCount = Glob->cachedTargetCount;
  Glob->clientTargetCount = cachedTargetCount;
  memcpy_0(Glob->clientTargets, Glob->cachedTargets, 48 * cachedTargetCount);
}

/*
==============
AimTargetSP_WriteSaveGame
==============
*/
void AimTargetSP_WriteSaveGame(MemoryFile *memFile)
{
  AimTargetGlob *Glob; 
  int i; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 616, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 617, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  Glob = AimTarget_GetGlob(0);
  MemFile_WriteData(memFile, 4ui64, &Glob->targetCount);
  for ( i = 0; i < Glob->targetCount; ++i )
    MemFile_WriteData(memFile, 0x30ui64, &Glob->targets[i]);
}

