/*
==============
G_PlayerUseSP_UpdateAttackerAccuracy
==============
*/

void __fastcall G_PlayerUseSP_UpdateAttackerAccuracy(gentity_s *player)
{
  ?G_PlayerUseSP_UpdateAttackerAccuracy@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
G_PlayerUseSP_UpdateLookAtEntity
==============
*/

void __fastcall G_PlayerUseSP_UpdateLookAtEntity(gentity_s *ent)
{
  ?G_PlayerUseSP_UpdateLookAtEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PlayerUseSP_BlockFriendliesInADS
==============
*/

void __fastcall G_PlayerUseSP_BlockFriendliesInADS(gentity_s *ent, double dist, const vec3_t *start, const vec3_t *dir)
{
  bool v10; 
  bool v11; 
  int BestTarget; 
  __int64 v15; 
  const dvar_t *v16; 
  sentient_s *sentient; 
  const bitarray<224> *TeamFlag; 
  const dvar_t *v25; 
  vec3_t vEnd; 
  bitarray<224> result; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 205, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 206, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v10 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->client->ps.eFlags, ACTIVE, 0xAu);
  v11 = !v10;
  if ( v10 )
    ent->client->playerADSTargetTime = level.time;
  _RAX = ent->client;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+730h]
  }
  if ( !v11 )
  {
    BestTarget = AimTargetSP_GetBestTarget(ent->s.number, start, dir);
    v15 = BestTarget;
    if ( BestTarget != 2047 )
    {
      ent->client->playerADSTargetTime = level.time;
LABEL_17:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [r14]
        vaddss  xmm1, xmm0, dword ptr [rbp+0]
        vmulss  xmm0, xmm6, dword ptr [r14+4]
      }
      sentient = ent->sentient;
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+vEnd], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+4]
        vmulss  xmm0, xmm6, dword ptr [r14+8]
        vmovss  dword ptr [rsp+0C8h+vEnd+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbp+8]
        vmovss  dword ptr [rsp+0C8h+vEnd+8], xmm1
      }
      TeamFlag = Com_Teams_GetTeamFlag(&result, sentient->eTeam);
      Actor_BroadcastLineEvent(ent, AI_EV_BLOCK_FRIENDLIES, TeamFlag, start, &vEnd, NULL);
      v25 = DVARBOOL_ai_debugPlayerLOS;
      if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.enabled )
        G_DebugLine(&ent->r.currentOrigin, &g_entities[v15].r.currentOrigin, &colorCyan, 0);
      goto LABEL_22;
    }
    v16 = DVARINT_ai_playerADSTargetTime;
    if ( !DVARINT_ai_playerADSTargetTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerADSTargetTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( level.time - ent->client->playerADSTargetTime <= v16->current.integer )
      goto LABEL_17;
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
}

/*
==============
G_PlayerUseSP_CheckAlmostStationary
==============
*/
bool G_PlayerUseSP_CheckAlmostStationary(gentity_s *ent, const vec3_t *dir)
{
  bool v5; 
  char v29; 
  const dvar_t *v52; 
  bool result; 
  char v61; 

  v5 = ent->client == NULL;
  _RSI = dir;
  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RDI = ent;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
  }
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rsi]
    vmovss  xmm4, dword ptr [rsi+4]
  }
  _RBX = _RDI->client;
  _RSI = DVARFLT_ai_playerLOSHalfWidth;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdi+130h]
    vmulss  xmm6, xmm3, xmm1
    vmulss  xmm7, xmm4, xmm1
    vmovss  xmm1, dword ptr [rdi+134h]
    vsubss  xmm2, xmm1, dword ptr [rbx+0B694h]
    vsubss  xmm4, xmm0, dword ptr [rbx+0B690h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm8, xmm3, xmm0
  }
  if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vcomiss xmm8, dword ptr [rsi+28h] }
  if ( !(v29 | v5) )
    goto LABEL_14;
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [rbx+0B69Ch]
    vmulss  xmm0, xmm6, dword ptr [rbx+0B698h]
    vaddss  xmm1, xmm1, xmm0
    vcomiss xmm1, cs:__real@3f7c1bda
  }
  if ( v29 )
  {
LABEL_14:
    _RBX->playerLOSCheckPos.v[0] = _RDI->r.currentOrigin.v[0];
    _RBX->playerLOSCheckPos.v[1] = _RDI->r.currentOrigin.v[1];
    __asm
    {
      vmovss  dword ptr [rbx+0B698h], xmm6
      vmovss  dword ptr [rbx+0B69Ch], xmm7
    }
    _RBX->playerLOSPosTime = level.time;
LABEL_15:
    result = 0;
    goto LABEL_16;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0B690h]
    vmovss  xmm0, dword ptr [rdi+130h]
    vmovss  xmm4, cs:__real@3e800000
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm1, xmm1, xmm4
    vaddss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rbx+0B690h], xmm0
    vmovss  xmm1, dword ptr [rdi+134h]
    vmovss  xmm3, dword ptr [rbx+0B694h]
    vsubss  xmm0, xmm1, xmm3
    vmulss  xmm2, xmm0, xmm4
    vaddss  xmm3, xmm2, xmm3
    vmovss  dword ptr [rbx+0B694h], xmm3
    vmovss  xmm2, dword ptr [rbx+0B698h]
    vsubss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rbx+0B698h], xmm2
    vmovss  xmm3, dword ptr [rbx+0B69Ch]
    vsubss  xmm0, xmm7, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+0B69Ch], xmm2
  }
  v52 = DVARINT_ai_playerLOSMinTime;
  if ( !DVARINT_ai_playerLOSMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSMinTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( _RBX->playerLOSPosTime + v52->current.integer > level.time )
    goto LABEL_15;
  _RBX->playerLOSPosTime = level.time;
  result = 1;
LABEL_16:
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
G_PlayerUseSP_LookAtRemoteControlling
==============
*/
void G_PlayerUseSP_LookAtRemoteControlling(const gentity_s *remoteEnt, vec3_t *start, vec3_t *forward)
{
  bool v10; 
  vec3_t up; 
  vec3_t right; 
  tmat43_t<vec3_t> outTagMat; 

  _RBP = forward;
  _RDI = start;
  if ( !remoteEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 268, ASSERT_TYPE_ASSERT, "(remoteEnt->vehicle)", (const char *)&queryFormat, "remoteEnt->vehicle") )
    __debugbreak();
  _RBX = G_Vehicle_GetServerDef(remoteEnt->vehicle->defIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 271, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  _RDI->v[0] = remoteEnt->r.currentOrigin.v[0];
  _RDI->v[1] = remoteEnt->r.currentOrigin.v[1];
  _RDI->v[2] = remoteEnt->r.currentOrigin.v[2];
  AngleVectors(&remoteEnt->r.currentAngles, _RBP, &right, &up);
  if ( _RBX->type == VEH_AIRCRAFT && _RBX->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE && !_RBX->vehCam_UseGDT )
  {
    v10 = !_RBX->vehiclePhysicsDef.physics_rcpCam1stAttachToTagPlayer;
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm6
      vmovss  xmm6, dword ptr [rbx+0C18h]
      vmovaps [rsp+0E8h+var_48], xmm7
      vmovss  xmm7, dword ptr [rbx+0C1Ch]
      vmovaps [rsp+0E8h+var_58], xmm8
      vmovss  xmm8, dword ptr [rbx+0C14h]
    }
    if ( v10 || !G_Utils_DObjGetWorldTagMatrix(remoteEnt, scr_const.tag_player, &outTagMat) )
    {
      __asm
      {
        vmulss  xmm0, xmm8, dword ptr [rbp+0]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
        vmulss  xmm0, xmm8, dword ptr [rbp+4]
        vaddss  xmm3, xmm0, dword ptr [rdi+4]
        vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+up]
        vaddss  xmm2, xmm0, xmm1
        vmulss  xmm1, xmm7, dword ptr [rsp+0E8h+right]
        vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+up+4]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm7, dword ptr [rsp+0E8h+right+4]
        vmovss  dword ptr [rdi+4], xmm3
        vmovss  xmm4, dword ptr [rbp+8]
        vaddss  xmm3, xmm0, xmm3
        vmovss  dword ptr [rdi], xmm2
        vaddss  xmm2, xmm3, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+up+8]
        vmulss  xmm0, xmm8, xmm4
        vaddss  xmm3, xmm0, dword ptr [rdi+8]
        vmulss  xmm0, xmm7, dword ptr [rsp+0E8h+right+8]
        vmovss  dword ptr [rdi+4], xmm2
        vaddss  xmm2, xmm3, xmm1
        vaddss  xmm2, xmm2, xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rsp+0E8h+outTagMat]
        vmovss  xmm0, dword ptr [rsp+0E8h+outTagMat+4]
        vmovss  xmm1, dword ptr [rsp+0E8h+outTagMat+8]
        vmovss  dword ptr [rbp+4], xmm0
        vmovss  dword ptr [rbp+0], xmm2
        vmovss  dword ptr [rbp+8], xmm1
        vmulss  xmm0, xmm2, xmm8
        vaddss  xmm2, xmm0, dword ptr [rsp+0E8h+outTagMat+24h]
        vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+up]
        vmovss  dword ptr [rdi], xmm2
        vmulss  xmm1, xmm8, dword ptr [rbp+4]
        vaddss  xmm4, xmm1, dword ptr [rsp+0E8h+outTagMat+28h]
        vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+up+4]
        vaddss  xmm3, xmm0, xmm2
        vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+right]
        vaddss  xmm0, xmm3, xmm2
        vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+right+4]
        vaddss  xmm3, xmm1, xmm4
        vaddss  xmm1, xmm3, xmm2
        vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+up+8]
        vmovss  dword ptr [rdi+4], xmm4
        vmovss  xmm5, dword ptr [rbp+8]
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm0, xmm8, xmm5
        vaddss  xmm3, xmm0, dword ptr [rsp+0E8h+outTagMat+2Ch]
        vmovss  dword ptr [rdi+4], xmm1
        vmulss  xmm1, xmm7, dword ptr [rsp+0E8h+right+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_38]
      vmovaps xmm8, [rsp+0E8h+var_58]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
}

/*
==============
G_PlayerUseSP_UpdateAttackerAccuracy
==============
*/

void __fastcall G_PlayerUseSP_UpdateAttackerAccuracy(gentity_s *player, double _XMM1_8)
{
  bool v3; 
  unsigned int v6; 
  int v7; 
  actor_s *i; 
  int latency; 
  gclient_s *client; 
  const dvar_t *v11; 
  int integer; 
  int v13; 
  AIActorInterface v19; 
  AIAgentInterface v20; 
  AIActorInterface *v21; 
  bitarray<224> result; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 511, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 512, ASSERT_TYPE_ASSERT, "(player->sentient)", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+0E8h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+0E8h+result.array+10h], xmm1
    }
    v6 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v3 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v6 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, player->sentient->eTeam);
  }
  v7 = 0;
  for ( i = AIActorInterface::FirstActor(&result); i; i = AIActorInterface::NextActor(i, &result) )
  {
    AIActorInterface::AIActorInterface(&v19);
    AIAgentInterface::AIAgentInterface(&v20);
    v20.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    if ( !i->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
      __debugbreak();
    if ( !i->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v19, i);
    v21 = &v19;
    if ( AICommonInterface::GetTargetEntity(&v19) == player )
    {
      latency = 250;
      if ( i->sight.latency > 250 )
        latency = i->sight.latency;
      if ( AICommonInterface::CanSeeSentient(&v19, player->sentient, latency) )
        ++v7;
    }
  }
  client = player->client;
  if ( v7 > 1 )
  {
    client->attackerCount = v7;
    v11 = DVARINT_ai_accuracy_attackerCountMax;
    if ( !DVARINT_ai_accuracy_attackerCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    if ( v7 < integer )
      integer = v7;
    v13 = integer - 1;
    if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(attackerCount > 0)", (const char *)&queryFormat, "attackerCount > 0") )
      __debugbreak();
    _RDI = DVARFLT_ai_accuracy_attackerCountDecrease;
    if ( !DVARFLT_ai_accuracy_attackerCountDecrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountDecrease") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h]; X }
    if ( v13 == 2 )
    {
      __asm { vmulss  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    }
    _RAX = player->client;
    __asm { vmovss  dword ptr [rax+0B684h], xmm0 }
  }
  else
  {
    client->attackerAccuracyMultiplier = 1.0;
    player->client->attackerCount = 1;
  }
}

/*
==============
G_PlayerUseSP_UpdateLookAtEntity
==============
*/
void G_PlayerUseSP_UpdateLookAtEntity(gentity_s *ent)
{
  gclient_s *client; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  char v9; 
  __int64 remoteControlEnt; 
  GWeaponMap *Instance; 
  __int16 number; 
  BgWeaponMap *v13; 
  gclient_s *v14; 
  gclient_s *v16; 
  __int64 v20; 
  bool v21; 
  gentity_s *v22; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned __int8 *v29; 
  unsigned __int16 EntityHitId; 
  char v52; 
  const dvar_t *v53; 
  const dvar_t *v68; 
  sentient_s *sentient; 
  const bitarray<224> *TeamFlag; 
  bool v82; 
  sentient_s *v83; 
  sentient_s *v85; 
  actor_s *actor; 
  bool v101; 
  unsigned int v104; 
  bitarray_base<bitarray<224> > *v125; 
  bool v126; 
  GameModeFlagValues::FlagMode v127; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v128; 
  unsigned int v129; 
  bool v143; 
  GameModeFlagValues::FlagMode v151; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v152; 
  unsigned int v153; 
  unsigned __int8 *priorityMap; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  vec3_t outOrigin; 
  vec3_t outForward; 
  vec3_t end; 
  vec3_t vEnd; 
  bitarray<224> result; 
  Weapon weapon; 
  trace_t results; 
  char v176; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 316, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 317, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = ent->client;
  p_weapFlags = &client->ps.weapCommon.weapFlags;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 3u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&client->ps.weapCommon.weapFlags, GameModeFlagValues::ms_spValue, 0x38u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&client->ps.weapCommon.weapFlags, GameModeFlagValues::ms_spValue, 0x39u);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 0x35u);
  EntHandle::setEnt(&ent->client->pLookatEnt, NULL);
  G_Client_GetViewOrigin(&client->ps, &outOrigin);
  G_Client_GetViewDirection(ent, &outForward, NULL, NULL);
  if ( client->ps.remoteControlEnt != 2047 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x1Cu) && G_IsEntityInUse(client->ps.remoteControlEnt) )
  {
    v9 = 1;
    remoteControlEnt = ent->client->ps.remoteControlEnt;
    if ( (unsigned int)remoteControlEnt >= 0x800 )
    {
      LODWORD(priorityMap) = ent->client->ps.remoteControlEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    G_PlayerUseSP_LookAtRemoteControlling(&g_entities[remoteControlEnt], &outOrigin, &outForward);
  }
  else
  {
    v9 = 0;
  }
  Instance = GWeaponMap::GetInstance();
  number = ent->s.number;
  p_eFlags = &client->ps.eFlags;
  v13 = Instance;
  if ( client == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 6u) )
    goto LABEL_46;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    goto LABEL_46;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) || v9 )
  {
LABEL_46:
    number = client->ps.viewlocked_entNum;
    if ( v9 )
      number = client->ps.remoteControlEnt;
    if ( number == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 353, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
      __debugbreak();
    v22 = &g_entities[number];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    _RAX = BgWeaponMap::GetWeapon(v13, v22->s.weaponHandle);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+0C0h+weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+0C0h+weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+0C0h+weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    goto LABEL_58;
  }
  v14 = ent->client;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BgWeaponMap::GetWeapon(v13, v14->ps.weapCommon.weaponHandle);
  v16 = ent->client;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0C0h+weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+0C0h+weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+0C0h+weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( v16 )
  {
    v20 = (__int64)&v16->ps.weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v16->ps.weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_58;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v16->ps.weapCommon.weapFlags, ACTIVE, 0x11u) )
    {
LABEL_45:
      v21 = 1;
      goto LABEL_59;
    }
  }
  else
  {
    v20 = 1832i64;
  }
  if ( v16 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v20, ACTIVE, 0x1Bu) )
    goto LABEL_45;
LABEL_58:
  v21 = 0;
LABEL_59:
  WeaponPriorityMap = BG_GetWeaponPriorityMap(&weapon, v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  v29 = WeaponPriorityMap;
  if ( (v160 & 0x7F800000) == 2139095040 )
    goto LABEL_202;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+4]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  if ( (v161 & 0x7F800000) == 2139095040 )
    goto LABEL_202;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outOrigin+8]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  if ( (v162 & 0x7F800000) == 2139095040 )
  {
LABEL_202:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outForward]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  if ( (v163 & 0x7F800000) == 2139095040 )
    goto LABEL_203;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outForward+4]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  if ( (v164 & 0x7F800000) == 2139095040 )
    goto LABEL_203;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1C0h+outForward+8]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
  }
  if ( (v165 & 0x7F800000) == 2139095040 )
  {
LABEL_203:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@466a6000
    vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+outForward]
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin]
    vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+outForward+4]
    vmovss  dword ptr [rsp+1C0h+end], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
    vmulss  xmm1, xmm9, dword ptr [rsp+1C0h+outForward+8]
    vmovss  dword ptr [rsp+1C0h+end+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin+8]
    vmovss  dword ptr [rsp+1C0h+end+8], xmm2
  }
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 28, ASSERT_TYPE_ASSERT, "(priorityMap)", (const char *)&queryFormat, "priorityMap") )
    __debugbreak();
  G_Main_LocationalTrace(&results, &outOrigin, &end, number, 42002689, v29);
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntityHitId < 0x7FEu )
  {
    __asm
    {
      vmulss  xmm3, xmm9, [rbp+0C0h+results.fraction]
      vmulss  xmm2, xmm3, dword ptr [rsp+1C0h+outForward]
      vaddss  xmm0, xmm2, dword ptr [rsp+1C0h+outOrigin]
      vmulss  xmm2, xmm3, dword ptr [rsp+1C0h+outForward+4]
      vmovss  dword ptr [rbp+0C0h+vEnd], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsp+1C0h+outOrigin+4]
      vmulss  xmm2, xmm3, dword ptr [rsp+1C0h+outForward+8]
      vmovss  dword ptr [rbp+0C0h+vEnd+4], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsp+1C0h+outOrigin+8]
      vmovss  dword ptr [rbp+0C0h+vEnd+8], xmm0
    }
    if ( SV_IsDemoPlaying() )
    {
      *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
      __asm { vmovaps xmm6, xmm0 }
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, &outOrigin, &vEnd);
      __asm { vmovaps xmm6, xmm0 }
      SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
    }
    __asm { vcomiss xmm6, cs:__real@38d1b717 }
    if ( v52 )
      _RBX = NULL;
    else
      _RBX = &g_entities[EntityHitId];
  }
  else
  {
    _RBX = NULL;
  }
  v53 = DCONST_DVARBOOL_g_lookAtEntityDebugTrace;
  if ( !DCONST_DVARBOOL_g_lookAtEntityDebugTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_lookAtEntityDebugTrace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled )
  {
    G_DebugLineWithDuration(&outOrigin, &end, &colorBlue, 0, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm5, [rbp+0C0h+results.fraction]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+1C0h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+1C0h+end+4]
      vmovss  dword ptr [rsp+1C0h+end], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+outOrigin+4]
      vmovss  xmm0, dword ptr [rsp+1C0h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  xmm1, cs:__real@40400000; radius
      vmovss  dword ptr [rsp+1C0h+end+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+outOrigin+8]
      vmovss  dword ptr [rsp+1C0h+end+8], xmm3
    }
    G_DebugSphere(&end, *(float *)&_XMM1, &colorRed, 0, 1);
  }
  if ( G_PlayerUseSP_CheckAlmostStationary(ent, &outForward) )
  {
    v68 = DVARFLT_ai_playerLOSRange;
    if ( !DVARFLT_ai_playerLOSRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v68);
    __asm
    {
      vmulss  xmm1, xmm9, [rbp+0C0h+results.fraction]
      vminss  xmm1, xmm1, dword ptr [rsi+28h]; dist
    }
    G_PlayerUserSP_BanNodesInFront(ent, *(float *)&_XMM1, &outOrigin, &outForward);
  }
  __asm { vmovss  xmm1, cs:__real@43640000; dist }
  G_PlayerUseSP_BlockFriendliesInADS(ent, *(double *)&_XMM1, &outOrigin, &outForward);
  _RSI = DVARFLT_ai_playerLOSRange;
  if ( !DVARFLT_ai_playerLOSRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 253, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ent->client->ps.weapCommon.weapFlags, ACTIVE, 1u) )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsp+1C0h+outForward]
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin]
      vmulss  xmm1, xmm6, dword ptr [rsp+1C0h+outForward+4]
    }
    sentient = ent->sentient;
    __asm
    {
      vmovss  dword ptr [rbp+0C0h+vEnd], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      vmulss  xmm1, xmm6, dword ptr [rsp+1C0h+outForward+8]
      vmovss  dword ptr [rbp+0C0h+vEnd+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin+8]
      vmovss  dword ptr [rbp+0C0h+vEnd+8], xmm2
    }
    TeamFlag = Com_Teams_GetTeamFlag(&result, sentient->eTeam);
    Actor_BroadcastLineEvent(ent, AI_EV_BLOCK_FRIENDLIES, TeamFlag, &outOrigin, &vEnd, NULL);
  }
  if ( _RBX )
  {
    v82 = _RBX->actor == NULL;
    __asm
    {
      vmovaps xmmword ptr [rsp+1C0h+var_48+8], xmm7
      vmovaps [rsp+1C0h+var_58+8], xmm8
    }
    if ( !v82 )
    {
      if ( (results.surfaceFlags & 0x10) != 0 )
      {
LABEL_198:
        __asm
        {
          vmovaps xmm7, xmmword ptr [rsp+1C0h+var_48+8]
          vmovaps xmm8, [rsp+1C0h+var_58+8]
        }
        goto LABEL_199;
      }
      v83 = _RBX->sentient;
      if ( v83 )
      {
        __asm { vmovss  xmm0, dword ptr [rbx+130h] }
        v85 = ent->sentient;
        __asm
        {
          vsubss  xmm6, xmm0, dword ptr [rsp+1C0h+outOrigin]
          vmovss  xmm1, dword ptr [rbx+134h]
          vmovss  xmm0, dword ptr [rbx+138h]
          vsubss  xmm7, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
          vsubss  xmm8, xmm0, dword ptr [rsp+1C0h+outOrigin+8]
        }
        if ( v85->eTeam == v83->eTeam )
        {
          _RSI = DVARFLT_g_friendlyNameDist;
          if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vcomiss xmm9, dword ptr [rsi+28h] }
          if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 410, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
            __debugbreak();
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
          __asm
          {
            vmulss  xmm2, xmm7, xmm7
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm8, xmm8
            vaddss  xmm6, xmm3, xmm2
            vmulss  xmm0, xmm0, xmm0
            vcomiss xmm6, xmm0
          }
          if ( v52 && !EntHandle::isDefined(&ent->client->pLookatEnt) )
            EntHandle::setEnt(&ent->client->pLookatEnt, _RBX);
          _RSI = DCONST_DVARMPFLT_g_friendlyfireDist;
          if ( !DCONST_DVARMPFLT_g_friendlyfireDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyfireDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vcomiss xmm9, dword ptr [rsi+28h] }
          if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 414, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARMPFLT_g_friendlyfireDist, \"g_friendlyfireDist\" ) <= 15000.0f)", (const char *)&queryFormat, "DconstMP_GetFloat( g_friendlyfireDist ) <= MAX_FRIENDLY_DIST") )
            __debugbreak();
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_g_friendlyfireDist, "g_friendlyfireDist");
          __asm
          {
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm6, xmm1
          }
          if ( v52 )
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 3u);
            actor = _RBX->actor;
            if ( actor )
            {
              if ( actor->bDontAvoidPlayer || (actor->Physics.iTraceMask & 0x2000000) == 0 )
              {
                if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
                  __debugbreak();
                GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x35u);
              }
            }
          }
        }
        else
        {
          if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
            __debugbreak();
          if ( level.teammode == TEAMMODE_FFA )
          {
            v101 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              _RAX = Com_TeamsMP_GetAllTeamFlags();
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vmovsd  xmm1, qword ptr [rax+10h]
            }
            v104 = _RAX->array[6] & 0xFFEFFFFF;
            __asm
            {
              vmovups xmmword ptr [rbp+0C0h+result.array], xmm0
              vmovsd  qword ptr [rbp+0C0h+result.array+10h], xmm1
            }
            if ( v101 )
              result.array[0] &= ~0x8000000u;
            result.array[6] = v104 & 0xFF9FFFFF;
          }
          else
          {
            Com_Teams_GetEnemyTeamFlags(&result, v83->eTeam);
          }
          if ( bitarray_base<bitarray<224>>::testBit(&result, v85->eTeam) )
          {
            *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
            __asm { vcomiss xmm0, xmm9 }
            if ( !(v52 | v82) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 425, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
              __debugbreak();
            *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
            __asm
            {
              vmulss  xmm2, xmm7, xmm7
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm8, xmm8
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm0, xmm0
              vcomiss xmm4, xmm0
            }
            if ( v52 )
            {
              if ( !EntHandle::isDefined(&ent->client->pLookatEnt) )
                EntHandle::setEnt(&ent->client->pLookatEnt, _RBX);
              GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
              GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_spValue, 0x38u);
            }
          }
          else if ( _RBX->sentient->civilianNameplate )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
            __asm { vcomiss xmm0, xmm9 }
            if ( !(v52 | v82) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 437, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
              __debugbreak();
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
            __asm
            {
              vmulss  xmm2, xmm7, xmm7
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm8, xmm8
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm0, xmm0
              vcomiss xmm4, xmm0
            }
            if ( v52 && !EntHandle::isDefined(&ent->client->pLookatEnt) )
              EntHandle::setEnt(&ent->client->pLookatEnt, _RBX);
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_spValue, 0x39u);
          }
        }
      }
    }
    if ( _RBX->s.eType == ET_VEHICLE && !EntHandle::isDefined(&ent->client->pLookatEnt) )
    {
      if ( !_RBX->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 448, ASSERT_TYPE_ASSERT, "(traceEnt->vehicle)", (const char *)&queryFormat, "traceEnt->vehicle") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm6, xmm0, dword ptr [rsp+1C0h+outOrigin]
      }
      _RSI = DVARFLT_g_friendlyNameDist;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vsubss  xmm8, xmm0, dword ptr [rsp+1C0h+outOrigin+8]
        vsubss  xmm7, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
      }
      if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vcomiss xmm9, dword ptr [rsi+28h] }
      if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 451, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
      __asm
      {
        vmulss  xmm2, xmm7, xmm7
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm8, xmm8
        vaddss  xmm6, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( v52 )
        EntHandle::setEnt(&ent->client->pLookatEnt, _RBX);
      *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
      __asm { vcomiss xmm0, xmm9 }
      if ( !(v52 | v82) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 455, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm6, xmm1
      }
      if ( v52 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0xBu) )
      {
        v125 = Sentient_EnemyTeamFlags(&result, ent->sentient->eTeam);
        v126 = bitarray_base<bitarray<224>>::testBit(v125, _RBX->vehicle->team);
        v127 = ACTIVE;
        v128 = p_weapFlags;
        if ( v126 )
        {
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
          v127 = GameModeFlagValues::ms_spValue;
          v129 = 56;
          v128 = p_weapFlags;
        }
        else
        {
          v129 = 3;
        }
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v128, v127, v129);
      }
    }
    if ( _RBX->lookAtText0 && !EntHandle::isDefined(&ent->client->pLookatEnt) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm3, xmm0, dword ptr [rsp+1C0h+outOrigin]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm2, xmm1, dword ptr [rsp+1C0h+outOrigin+4]
        vsubss  xmm4, xmm0, dword ptr [rsp+1C0h+outOrigin+8]
      }
      _RSI = DVARFLT_g_friendlyNameDist;
      v143 = _RBX->lookAtText0 != scr_const.enemy;
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vcomiss xmm9, dword ptr [rsi+28h] }
      if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 482, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      if ( v143 )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vcomiss xmm6, xmm1
        }
        if ( v52 )
          EntHandle::setEnt(&ent->client->pLookatEnt, _RBX);
      }
      if ( _RBX->s.eType == ET_SCRIPTMOVER )
      {
        *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
        __asm { vcomiss xmm0, xmm9 }
        if ( !(v52 | v82) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 488, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
          __debugbreak();
        *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(&weapon, v21);
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vcomiss xmm6, xmm1
        }
        if ( v52 )
        {
          v151 = ACTIVE;
          v152 = p_weapFlags;
          if ( v143 )
          {
            v153 = 3;
          }
          else
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
            v151 = GameModeFlagValues::ms_spValue;
            v153 = 56;
            v152 = p_weapFlags;
          }
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v152, v151, v153);
        }
      }
    }
    goto LABEL_198;
  }
LABEL_199:
  _R11 = &v176;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
G_PlayerUserSP_BanNodesInFront
==============
*/

void __fastcall G_PlayerUserSP_BanNodesInFront(gentity_s *ent, double dist, const vec3_t *start, const vec3_t *dir)
{
  team_t eTeam; 
  unsigned int v22; 
  unsigned int v23; 
  bool v24; 
  int v48; 
  const dvar_t *v49; 
  __int64 v51; 
  int integer; 
  int v53; 
  const dvar_t *v54; 
  int v55; 
  __int64 v62; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  char v67; 
  char v68; 
  bool v69; 
  const char *GameType; 
  int v71; 
  unsigned int v72; 
  unsigned int v73; 
  const char *v74; 
  int v75; 
  int v76; 
  const char *v77; 
  int v78; 
  SentientHandle *v79; 
  sentient_s *v80; 
  sentient_s *v81; 
  ai_scripted_t *AIScripted; 
  actor_s *actor; 
  sentient_s *sentient; 
  AIScriptedInterface *m_pAI; 
  const dvar_t *v86; 
  __int64 maxNodes; 
  __int64 maxNodesa; 
  __int64 typeFlags; 
  int duration; 
  AIWrapper v93; 
  vec3_t origin; 
  Bounds box; 
  vec2_t end; 
  pathsort_s nodes; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm9
  }
  _RDI = (const vec2_t *)dir;
  __asm { vmovaps xmm9, xmm1 }
  _RBP = start;
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 129, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", (const char *)&queryFormat, "Vec3IsNormalized( dir )") )
    __debugbreak();
  if ( ent->sentient->eTeam == TEAM_FIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 130, ASSERT_TYPE_ASSERT, "( ent->sentient->eTeam != TEAM_DEAD )", (const char *)&queryFormat, "ent->sentient->eTeam != TEAM_DEAD") )
    __debugbreak();
  eTeam = ent->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v22 = 2;
    if ( eTeam <= TEAM_TWO )
      v22 = eTeam - 1;
    v23 = v22;
    if ( v22 >= 3 )
    {
      LODWORD(maxNodes) = v22;
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", maxNodes, 3);
      goto LABEL_18;
    }
  }
  else
  {
    v23 = 1;
    if ( eTeam <= TEAM_ONE )
      v23 = eTeam - 1;
    if ( v23 >= 2 )
    {
      LODWORD(maxNodes) = v23;
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", maxNodes, 2);
LABEL_18:
      if ( v24 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+0]
    vmulss  xmm0, xmm9, dword ptr [rdi]
    vaddss  xmm2, xmm0, xmm6
    vmulss  xmm0, xmm9, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vsubss  xmm4, xmm1, dword ptr [rbp+4]
    vmulss  xmm0, xmm9, dword ptr [rdi+8]
    vaddss  xmm3, xmm0, dword ptr [rbp+8]
    vaddss  xmm0, xmm2, xmm6
    vsubss  xmm5, xmm2, xmm6
    vmovss  xmm6, cs:__real@3f000000
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsp+188h+end], xmm2
    vmovss  dword ptr [rsp+188h+end+4], xmm1
    vaddss  xmm1, xmm1, dword ptr [rbp+4]
    vmulss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsp+188h+origin+4], xmm2
    vmovss  dword ptr [rsp+188h+origin], xmm0
    vaddss  xmm0, xmm3, dword ptr [rbp+8]
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vmovss  dword ptr [rsp+188h+origin+8], xmm1
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm6, xmm2, xmm6
    vmovss  [rsp+188h+var_B8], xmm3
    vmovss  xmm3, cs:__real@42a00000; maxHeight
    vmovaps xmm2, xmm6; maxDist
  }
  v48 = Path_NodesInCylinder(&origin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 4, -2107367684);
  v49 = DVARINT_ai_playerLOSMinTime;
  __asm { vmovaps xmm9, [rsp+188h+var_58] }
  v51 = v48;
  if ( !DVARINT_ai_playerLOSMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSMinTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  integer = v49->current.integer;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v53 = integer;
  v54 = DVARBOOL_ai_debugPlayerLOS;
  duration = v53 / level.frameDuration;
  v55 = v53 / level.frameDuration;
  if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( v54->current.enabled )
  {
    _RBX = DVARFLT_ai_playerLOSHalfWidth;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+188h+box.midPoint], xmm0
      vmovss  dword ptr [rsp+188h+box.midPoint+4], xmm0
      vmovss  dword ptr [rsp+188h+box.midPoint+8], xmm0
      vmovss  dword ptr [rsp+188h+box.halfSize], xmm6
    }
    if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, cs:__real@41a00000
      vmovss  dword ptr [rsp+188h+box.halfSize+4], xmm0
      vmovss  dword ptr [rsp+188h+box.halfSize+8], xmm1
    }
    *(double *)&_XMM0 = vectoyaw(_RDI);
    __asm { vmovaps xmm2, xmm0; yaw }
    G_DebugBox(&origin, &box, *(float *)&_XMM2, &colorOrange, 0, v55);
  }
  _RBX = DVARFLT_ai_playerLOSHalfWidth;
  if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  v62 = v51;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
  }
  if ( (int)v51 > 0 )
  {
    p_nodes = &nodes;
    do
    {
      node = p_nodes->node;
      pathnode_t::GetPos(p_nodes->node, &box.midPoint);
      *(double *)&_XMM0 = PointToLineDistSq2D((const vec2_t *)&box, (const vec2_t *)start, &end);
      __asm { vcomiss xmm0, xmm6 }
      if ( v67 | v68 )
      {
        if ( BG_BotSystemEnabled() )
        {
          GameType = SV_GameMP_GetGameType();
          v71 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
          if ( !v71 )
          {
            v71 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
            if ( !v71 )
              v71 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
          }
          v69 = v71 == 0;
        }
        else
        {
          v69 = 1;
        }
        v72 = v23;
        if ( v69 )
          v72 = 0;
        if ( !node )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
        }
        if ( BG_BotSystemEnabled() )
        {
          v74 = SV_GameMP_GetGameType();
          v75 = *(unsigned __int8 *)v74 - (unsigned __int8)aBr_2[0];
          if ( !v75 )
          {
            v75 = *((unsigned __int8 *)v74 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v75 )
              v75 = *((unsigned __int8 *)v74 + 2) - (unsigned __int8)aBr_2[2];
          }
          v73 = (v75 != 0) + 1;
        }
        else
        {
          v73 = 1;
        }
        if ( v72 >= v73 )
        {
          if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( BG_BotSystemEnabled() )
          {
            v77 = SV_GameMP_GetGameType();
            v78 = *(unsigned __int8 *)v77 - (unsigned __int8)aBr_2[0];
            if ( !v78 )
            {
              v78 = *((unsigned __int8 *)v77 + 1) - (unsigned __int8)aBr_2[1];
              if ( !v78 )
                v78 = *((unsigned __int8 *)v77 + 2) - (unsigned __int8)aBr_2[2];
            }
            v76 = (v78 != 0) + 1;
          }
          else
          {
            v76 = 1;
          }
          LODWORD(typeFlags) = v76;
          LODWORD(maxNodesa) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", maxNodesa, typeFlags) )
            __debugbreak();
        }
        v79 = &node->dynamic.pOwners[v72];
        if ( SentientHandle::isDefined(v79) )
        {
          v80 = SentientHandle::sentient(v79);
          v81 = v80;
          if ( v80 )
          {
            if ( v80->pClaimedNode == node )
            {
              AIScripted = AI_GetAIScripted(v80->ent);
              if ( AIScripted && AIScripted->fixedNode && AIScripted->fixedNodeNudged )
                goto LABEL_94;
              if ( Path_SentientNearNode(v81, node) )
                goto LABEL_94;
              actor = v81->ent->actor;
              if ( !actor )
                goto LABEL_94;
              sentient = ent->sentient;
              if ( v81->eTeam != sentient->eTeam )
                goto LABEL_94;
              if ( v81 == sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 179, ASSERT_TYPE_ASSERT, "(nodeOwner != ent->sentient)", (const char *)&queryFormat, "nodeOwner != ent->sentient") )
                __debugbreak();
              AIWrapper::AIWrapper(&v93, actor);
              m_pAI = v93.m_pAI;
              if ( !v93.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 182, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              if ( AIScriptedInterface::KeepClaimedNode(m_pAI) )
                goto LABEL_94;
              if ( actor->nodeSelect.numCoverNodesInGoal > 1 )
                Path_RelinquishNodeSoon(v81);
            }
          }
        }
        node->dynamic.actors.inPlayerLOSTime = level.time + 1500;
        v86 = DVARBOOL_ai_debugPlayerLOS;
        if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v86);
        if ( v86->current.enabled )
          Path_DrawDebugNoLinks(node, &colorOrange, duration);
      }
LABEL_94:
      ++p_nodes;
      --v62;
    }
    while ( v62 );
  }
  __asm { vmovaps xmm6, [rsp+188h+var_48] }
}

