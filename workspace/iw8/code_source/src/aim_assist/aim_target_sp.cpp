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
  int v11; 

  _RBP = target;
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 177, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
    __debugbreak();
  v4 = 0;
  Glob = AimTarget_GetGlob(clientNum);
  targetCount = Glob->targetCount;
  if ( targetCount <= 0 )
    goto LABEL_13;
  do
  {
    v7 = (targetCount + v4) / 2;
    _RBX = &Glob->targets[v7];
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 157, ASSERT_TYPE_ASSERT, "(targetA)", (const char *)&queryFormat, "targetA") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 158, ASSERT_TYPE_ASSERT, "(targetB)", (const char *)&queryFormat, "targetB") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbx+4]
      vcomiss xmm0, xmm1
      vcomiss xmm0, xmm1
    }
    v4 = v7 + 1;
  }
  while ( (int)v7 + 1 < targetCount );
  if ( (int)v7 + 1 < 32 )
  {
LABEL_13:
    v11 = Glob->targetCount;
    if ( v11 == 32 )
    {
      v11 = 31;
      Glob->targetCount = 31;
    }
    _RBX = &Glob->targets[v4];
    memmove_0(&Glob->targets[v4 + 1], _RBX, 48i64 * (v11 - v4));
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rbp+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
    }
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
  gentity_s *v7; 
  int v8; 
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
    _RSI = Glob;
    _R14 = Src;
    do
    {
      v7 = &level.gentities[_RSI->targets[0].entIndex];
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v8 = v7->s.number - level.time / level.frameDuration;
      if ( AimTargetSP_CalcTargetFlags(v7) && v8 % 8 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi]
          vmovups xmm1, xmmword ptr [rsi+20h]
          vmovups ymmword ptr [r14], ymm0
        }
        ++v1;
        __asm { vmovups xmmword ptr [r14+20h], xmm1 }
        _R14 += 48;
      }
      else
      {
        if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
          __debugbreak();
        v7->flags.m_flags[1] &= ~4u;
      }
      targetCount = v3->targetCount;
      ++v2;
      _RSI = (AimTargetGlob *)((char *)_RSI + 48);
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
  __int64 v4; 
  char v5; 
  const gentity_s *v7; 
  bool v8; 
  bool IsTargetVisible; 
  const dvar_t *v11; 
  bool v12; 
  const dvar_t *v13; 
  const vec4_t *v15; 
  int v16; 
  int number; 
  GTrajectory v46; 
  vec3_t outPos; 
  AimTarget target; 
  vec3_t v49; 
  vec3_t v50; 

  v4 = clientNum;
  v5 = flags;
  _RBX = targetEnt;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 409, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  v7 = &level.gentities[v4];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 412, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( AimTarget_GetGlob(v4)->targetCount >= 32 )
    return 0;
  v8 = _RBX->s.eType == ET_ACTOR;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+57h+outPos], xmm0
    vmovss  dword ptr [rbp+57h+outPos+4], xmm0
    vmovss  dword ptr [rbp+57h+outPos+8], xmm0
  }
  if ( v8 )
    G_Utils_DObjGetWorldTagPos_CheckTagExists(_RBX, (const scr_string_t)scr_const.j_spine4, 1, &outPos);
  IsTargetVisible = AimTargetSP_IsTargetVisible(v7, _RBX, &outPos);
  v11 = DVARBOOL_scripted_melee_debug;
  v12 = IsTargetVisible;
  if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    goto LABEL_18;
  v13 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
LABEL_18:
    if ( (v5 & 2) != 0 )
    {
      __asm { vmovss  xmm1, cs:radius; radius }
      v15 = &colorRed;
      v16 = 2;
      if ( v12 )
        v16 = 8;
      if ( v12 )
        v15 = &colorGreen;
      G_DebugSphere(&outPos, *(float *)&_XMM1, v15, 0, v16);
    }
  }
  if ( !v12 )
    return 0;
  AimTargetSP_GetTargetBounds(_RBX, &target.box);
  v8 = _RBX->s.eType == ET_ACTOR;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vsubss  xmm3, xmm0, dword ptr [rsi+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vsubss  xmm2, xmm1, dword ptr [rsi+134h]
    vmovss  xmm0, dword ptr [rbx+138h]
    vsubss  xmm4, xmm0, dword ptr [rsi+138h]
  }
  number = _RBX->s.number;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  [rbp+57h+target.worldDistSqr], xmm2
  }
  target.entIndex = number;
  if ( v8 )
  {
    if ( !_RBX->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 389, ASSERT_TYPE_ASSERT, "(targetEnt->actor)", (const char *)&queryFormat, "targetEnt->actor") )
      __debugbreak();
    _RAX = (__int64)&_RBX->actor->Physics.vVelocity;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+57h+target.velocity], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+57h+target.velocity+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
    }
  }
  else
  {
    GTrajectory::GTrajectory(&v46, _RBX);
    BgTrajectory::EvaluatePosTrajectory(&v46, level.time, &v50);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    BgTrajectory::EvaluatePosTrajectory(&v46, level.frameDuration + level.time, &v49);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_60]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+var_50]
      vmovss  xmm2, dword ptr [rbp+57h+var_60+4]
      vsubss  xmm0, xmm2, dword ptr [rbp+57h+var_50+4]
      vmovss  dword ptr [rbp+57h+target.velocity], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+var_60+8]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+var_50+8]
      vmovss  dword ptr [rbp+57h+target.velocity+8], xmm2
      vmovss  dword ptr [rbp+57h+target.velocity+4], xmm0
    }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@447a0000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vdivss  xmm3, xmm0, xmm1
      vmulss  xmm2, xmm3, dword ptr [rbp+57h+target.velocity]
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+target.velocity+4]
      vmulss  xmm0, xmm3, dword ptr [rbp+57h+target.velocity+8]
      vmovss  dword ptr [rbp+57h+target.velocity], xmm2
      vmovss  dword ptr [rbp+57h+target.velocity+4], xmm1
    }
  }
  target.flags[0] = v5;
  __asm { vmovss  dword ptr [rbp+57h+target.velocity+8], xmm0 }
  AimTargetSP_AddTargetToList(v4, &target);
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
  __asm { vmovss  xmm0, cs:__real@41200000 }
  return *(float *)&_XMM0;
}

/*
==============
AimTargetSP_GetBestTarget
==============
*/
__int64 AimTargetSP_GetBestTarget(int clientNum, const vec3_t *start, const vec3_t *viewDir)
{
  unsigned int entIndex; 
  AimTargetGlob *Glob; 
  __int64 v24; 
  __int64 targetCount; 
  _BYTE *flags; 
  unsigned __int64 v28; 
  char v29; 
  AimTarget *v126; 
  __int64 v127; 
  __int64 result; 
  __int64 v159; 
  int v160; 
  char v166; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm2, dword ptr [r8+4]
    vmovss  xmm3, dword ptr [r8+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0A8h+var_48], xmm8
    vmovaps [rsp+0A8h+var_58], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm9
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovaps [rsp+0A8h+var_68], xmm10
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 576, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( viewDir ))", (const char *)&queryFormat, "Vec3IsNormalized( viewDir )") )
    __debugbreak();
  entIndex = 2047;
  __asm { vmovss  xmm8, cs:__real@3f774539 }
  if ( clientNum )
  {
    v160 = 1;
    LODWORD(v159) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 582, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 1 )", "clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v159, v160) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
  }
  Glob = AimTarget_GetGlob(clientNum);
  _R10 = g_entities;
  v24 = 0i64;
  __asm { vmovss  xmm10, cs:__real@80000000 }
  targetCount = Glob->targetCount;
  if ( targetCount >= 4 )
  {
    flags = Glob->targets[1].flags;
    v28 = ((unsigned __int64)(targetCount - 4) >> 2) + 1;
    v24 = 4 * v28;
    do
    {
      if ( (*(flags - 48) & 1) != 0 )
      {
        _RCX = 1456i64 * *((int *)flags - 23);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r10+130h]
          vsubss  xmm4, xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rcx+r10+134h]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vmovss  xmm0, dword ptr [rcx+r10+138h]
          vsubss  xmm7, xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
        if ( !(((unsigned __int128)(1456 * (__int128)*((int *)flags - 23)) >> 64 != 0) | v29) )
        {
          entIndex = *((_DWORD *)flags - 23);
          __asm { vmovaps xmm8, xmm2 }
        }
      }
      if ( (*flags & 1) != 0 )
      {
        _RCX = 1456i64 * *((int *)flags - 11);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r10+130h]
          vsubss  xmm4, xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rcx+r10+134h]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vmovss  xmm0, dword ptr [rcx+r10+138h]
          vsubss  xmm7, xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
        if ( !(((unsigned __int128)(1456 * (__int128)*((int *)flags - 11)) >> 64 != 0) | v29) )
        {
          entIndex = *((_DWORD *)flags - 11);
          __asm { vmovaps xmm8, xmm2 }
        }
      }
      if ( (flags[48] & 1) != 0 )
      {
        _RCX = 1456i64 * *((int *)flags + 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r10+130h]
          vsubss  xmm4, xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rcx+r10+134h]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vmovss  xmm0, dword ptr [rcx+r10+138h]
          vsubss  xmm7, xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
        if ( !(((unsigned __int128)(1456 * (__int128)*((int *)flags + 1)) >> 64 != 0) | v29) )
        {
          entIndex = *((_DWORD *)flags + 1);
          __asm { vmovaps xmm8, xmm2 }
        }
      }
      if ( (flags[96] & 1) != 0 )
      {
        _RCX = 1456i64 * *((int *)flags + 13);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r10+130h]
          vsubss  xmm4, xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rcx+r10+134h]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vmovss  xmm0, dword ptr [rcx+r10+138h]
          vsubss  xmm7, xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
        if ( !(((unsigned __int128)(1456 * (__int128)*((int *)flags + 13)) >> 64 != 0) | v29) )
        {
          entIndex = *((_DWORD *)flags + 13);
          __asm { vmovaps xmm8, xmm2 }
        }
      }
      flags += 192;
      --v28;
    }
    while ( v28 );
  }
  if ( v24 < targetCount )
  {
    v126 = &Glob->targets[v24];
    v127 = targetCount - v24;
    do
    {
      if ( (v126->flags[0] & 1) != 0 )
      {
        _RCX = 1456i64 * v126->entIndex;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r10+130h]
          vsubss  xmm4, xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rcx+r10+134h]
          vsubss  xmm6, xmm1, dword ptr [rsi+4]
          vmovss  xmm0, dword ptr [rcx+r10+138h]
          vsubss  xmm7, xmm0, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm9, xmm0
          vdivss  xmm5, xmm9, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [rdi]
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
        if ( !(((unsigned __int128)(1456 * (__int128)v126->entIndex) >> 64 != 0) | v29) )
        {
          entIndex = v126->entIndex;
          __asm { vmovaps xmm8, xmm2 }
        }
      }
      ++v126;
      --v127;
    }
    while ( v127 );
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v166;
  result = entIndex;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm6, [rsp+0A8h+var_28]
  }
  return result;
}

/*
==============
AimTargetSP_GetTargetBounds
==============
*/
void AimTargetSP_GetTargetBounds(const gentity_s *targetEnt, Bounds *box)
{
  entityType_s eType; 
  const dvar_t *v8; 
  unsigned __int8 modelType; 
  vec3_t outPos; 
  vec3_t v16; 

  _RDI = box;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 219, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 220, ASSERT_TYPE_ASSERT, "(box)", (const char *)&queryFormat, "box") )
    __debugbreak();
  eType = targetEnt->s.eType;
  if ( eType == ET_ACTOR )
  {
    __asm { vmovaps [rsp+98h+var_18], xmm6 }
    G_Utils_DObjGetWorldTagPos_CheckTagExists(targetEnt, (const scr_string_t)scr_const.aim_highest_bone, 1, &outPos);
    if ( G_Utils_DObjGetWorldTagPos(targetEnt, scr_const.j_spine4, &v16) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+var_38+8]
        vcomiss xmm0, dword ptr [rsp+98h+outPos+8]
        vmovsd  xmm0, qword ptr [rsp+98h+var_38]
        vmovsd  qword ptr [rsp+98h+outPos], xmm0
      }
      outPos.v[2] = v16.v[2];
    }
    v8 = DCONST_DVARFLT_aim_actorBoundsZPadding;
    if ( !DCONST_DVARFLT_aim_actorBoundsZPadding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_actorBoundsZPadding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outPos+8]
      vsubss  xmm1, xmm0, dword ptr [rbx+138h]
      vaddss  xmm6, xmm1, dword ptr [rsi+28h]
    }
    *(float *)&_XMM0 = AimTargetSP_GetActorRadius(targetEnt);
    __asm
    {
      vmulss  xmm1, xmm6, cs:__real@3f000000
      vmovaps xmm6, [rsp+98h+var_18]
      vmovss  dword ptr [rdi+8], xmm1
    }
    *(_QWORD *)_RDI->midPoint.v = 0i64;
    __asm
    {
      vmovss  dword ptr [rdi+0Ch], xmm0
      vmovss  dword ptr [rdi+10h], xmm0
      vmovss  dword ptr [rdi+14h], xmm1
    }
  }
  else if ( eType == ET_SCRIPTMOVER )
  {
    _RDI->midPoint.v[0] = targetEnt->r.box.midPoint.v[0];
    _RDI->midPoint.v[1] = targetEnt->r.box.midPoint.v[1];
    _RDI->midPoint.v[2] = targetEnt->r.box.midPoint.v[2];
    _RDI->halfSize.v[0] = targetEnt->r.box.halfSize.v[0];
    _RDI->halfSize.v[1] = targetEnt->r.box.halfSize.v[1];
    _RDI->halfSize.v[2] = targetEnt->r.box.halfSize.v[2];
  }
  else
  {
    modelType = targetEnt->r.modelType;
    if ( modelType != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 247, ASSERT_TYPE_ASSERT, "( targetEnt->r.modelType ) == ( MODELTYPE_BRUSH )", "%s == %s\n\t%i, %i", "targetEnt->r.modelType", "MODELTYPE_BRUSH", modelType, 5) )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targetEnt->s.lerp.eFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 248, ASSERT_TYPE_ASSERT, "(targetEnt->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL ))", (const char *)&queryFormat, "targetEnt->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::BRUSHMODEL )") )
      __debugbreak();
    CM_BrushModelBounds(targetEnt->s.index.brushModel, _RDI);
  }
}

/*
==============
AimTargetSP_IsTargetValidForPlayer
==============
*/

bool __fastcall AimTargetSP_IsTargetValidForPlayer(const gentity_s *playerEnt, const gentity_s *targetEnt, double _XMM2_8)
{
  sentient_s *sentient; 
  sentient_s *v11; 
  bool v12; 
  unsigned int v16; 
  char v52; 
  bitarray<224> result; 
  vec3_t outForward; 

  _RBX = targetEnt;
  Profile_Begin(42);
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !playerEnt->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 297, ASSERT_TYPE_ASSERT, "(playerEnt->sentient)", (const char *)&queryFormat, "playerEnt->sentient") )
    __debugbreak();
  if ( playerEnt->s.number == _RBX->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 298, ASSERT_TYPE_ASSERT, "(playerEnt->s.number != targetEnt->s.number)", (const char *)&queryFormat, "playerEnt->s.number != targetEnt->s.number") )
    __debugbreak();
  if ( _RBX->s.eType != ET_ACTOR )
    goto LABEL_33;
  if ( !_RBX->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 303, ASSERT_TYPE_ASSERT, "(targetEnt->sentient)", (const char *)&queryFormat, "targetEnt->sentient") )
    __debugbreak();
  sentient = _RBX->sentient;
  v11 = playerEnt->sentient;
  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v12 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v16 = _RAX->array[6] & 0xFFEFFFFF;
    __asm
    {
      vmovups xmmword ptr [rsp+0D8h+result.array], xmm0
      vmovsd  qword ptr [rsp+0D8h+result.array+10h], xmm1
    }
    if ( v12 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v16 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, v11->eTeam);
  }
  if ( bitarray_base<bitarray<224>>::testBit(&result, sentient->eTeam) )
  {
LABEL_33:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovaps [rsp+0D8h+var_28], xmm6
      vsubss  xmm6, xmm0, dword ptr [rdi+130h]
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovaps [rsp+0D8h+var_38], xmm7
      vsubss  xmm7, xmm1, dword ptr [rdi+134h]
      vmovaps [rsp+0D8h+var_48], xmm8
      vmovaps [rsp+0D8h+var_58], xmm9
      vmovaps [rsp+0D8h+var_68], xmm10
      vsubss  xmm10, xmm0, dword ptr [rdi+138h]
    }
    G_Client_GetViewDirection(playerEnt, &outForward, NULL, NULL);
    if ( _RBX->s.eType == ET_ACTOR )
    {
      *(float *)&_XMM0 = AimTargetSP_GetActorRadius(_RBX);
      __asm { vmovaps xmm9, xmm0 }
    }
    else
    {
      AimTargetSP_GetTargetBounds(_RBX, (Bounds *)&result);
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm0, [rsp+0D8h+result.array]
        vmovss  xmm1, [rsp+0D8h+result.array+8]
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm5, xmm0, [rsp+0D8h+result.array+0Ch]
        vmovss  xmm0, [rsp+0D8h+result.array+4]
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm2, xmm0, [rsp+0D8h+result.array+10h]
        vandps  xmm1, xmm1, xmm3
        vaddss  xmm4, xmm1, [rsp+0D8h+result.array+14h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm9, xmm2, xmm2
      }
    }
    __asm
    {
      vmulss  xmm8, xmm7, dword ptr [rsp+0D8h+outForward+4]
      vmulss  xmm7, xmm6, dword ptr [rsp+0D8h+outForward]
      vmulss  xmm6, xmm10, dword ptr [rsp+0D8h+outForward+8]
    }
    Profile_EndInternal(NULL);
    __asm
    {
      vmovaps xmm10, [rsp+0D8h+var_68]
      vaddss  xmm0, xmm8, xmm7
      vmovaps xmm8, [rsp+0D8h+var_48]
      vmovaps xmm7, [rsp+0D8h+var_38]
      vaddss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+0D8h+var_28]
      vaddss  xmm3, xmm1, xmm9
      vmovaps xmm9, [rsp+0D8h+var_58]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm3, xmm2
    }
    return !v52;
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
__int64 AimTargetSP_IsTargetVisible(const gentity_s *playerEnt, const gentity_s *targetEnt, vec3_t *inOutPos)
{
  HavokPhysics_CollisionQueryResult *AnyResult; 
  unsigned __int8 v17; 
  char v19; 
  char v20; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v22; 
  __int64 result; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v26; 
  __int64 v27; 
  vec3_t end; 
  vec3_t outOrigin; 
  Bounds box; 

  v27 = -2i64;
  __asm { vmovaps [rsp+120h+var_30], xmm6 }
  _RSI = inOutPos;
  Profile_Begin(43);
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 338, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 339, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( targetEnt->s.eType == ET_ACTOR )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  dword ptr [rbp+57h+end], xmm0
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rbp+57h+end+4], xmm1
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+57h+end+8], xmm0
    }
  }
  else
  {
    AimTargetSP_GetTargetBounds(targetEnt, &box);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+box.midPoint]
      vaddss  xmm1, xmm0, dword ptr [rbx+130h]
      vmovss  dword ptr [rbp+57h+end], xmm1
      vmovss  xmm2, dword ptr [rbp+57h+box.midPoint+4]
      vaddss  xmm0, xmm2, dword ptr [rbx+134h]
      vmovss  dword ptr [rbp+57h+end+4], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+box.midPoint+8]
      vaddss  xmm2, xmm1, dword ptr [rbx+138h]
      vmovss  dword ptr [rbp+57h+end+8], xmm2
    }
  }
  if ( !playerEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 346, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
    __debugbreak();
  if ( playerEnt->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 347, ASSERT_TYPE_ASSERT, "( playerEnt->s.number == 0 )", (const char *)&queryFormat, "playerEnt->s.number == 0") )
    __debugbreak();
  G_Client_GetViewOrigin(&playerEnt->client->ps, &outOrigin);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v26, 2, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v26, 0, targetEnt->s.number, 1, 1, 0, 1, 1);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v26, 1, playerEnt->s.number, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+57h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 8423683;
  extendedData.ignoreBodies = &v26;
  AnyResult = PhysicsQuery_GetAnyResult(PHYSICS_WORLD_ID_FIRST);
  if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 359, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &outOrigin, &end, &extendedData, AnyResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(AnyResult, 0, _RSI);
    Profile_EndInternal(NULL);
    v17 = 0;
  }
  else
  {
    if ( SV_IsDemoPlaying() )
    {
      *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
      __asm { vmovaps xmm6, xmm0 }
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, &outOrigin, &end);
      __asm { vmovaps xmm6, xmm0 }
      SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
    }
    __asm { vcomiss xmm6, cs:__real@38d1b717 }
    if ( v19 | v20 )
    {
      Profile_EndInternal(NULL);
      v17 = 0;
    }
    else
    {
      Profile_EndInternal(NULL);
      v17 = 1;
    }
  }
  v21 = hkMemHeapAllocator();
  v26.m_ignoreBodies.m_size = 0;
  if ( v26.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v26.m_ignoreBodies.m_data, 4, v26.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v26.m_ignoreBodies.m_data = NULL;
  v26.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v22 = hkMemHeapAllocator();
  v26.m_ignoreEntities.m_size = 0;
  if ( v26.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v26.m_ignoreEntities.m_data, 8, v26.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = v17;
  __asm { vmovaps xmm6, [rsp+120h+var_30] }
  return result;
}

/*
==============
AimTargetSP_ProcessEntity
==============
*/
void AimTargetSP_ProcessEntity(gentity_s *ent, __int64 a2, double a3)
{
  signed __int64 v4; 
  char v5; 
  unsigned __int8 v6; 
  gentity_s *gentities; 
  gclient_s *client; 
  int pm_type; 
  __int64 v10; 
  __int64 v11; 

  Profile_Begin(41);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 486, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = ent - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v10) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_target_sp.cpp", 487, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  v5 = AimTargetSP_CalcTargetFlags(ent);
  v6 = v5;
  if ( !ent->r.isLinked || !v5 )
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
    if ( !AimTargetSP_IsTargetValidForPlayer(gentities, ent, a3) )
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
        if ( !AimTargetSP_CreateTarget(0, ent, (const AimTargetFlags)v6) )
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

