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
void G_PlayerUseSP_BlockFriendliesInADS(gentity_s *ent, float dist, const vec3_t *start, const vec3_t *dir)
{
  int BestTarget; 
  __int64 v8; 
  const dvar_t *v9; 
  float v10; 
  sentient_s *sentient; 
  float v12; 
  const bitarray<224> *TeamFlag; 
  const dvar_t *v14; 
  vec3_t vEnd; 
  bitarray<224> result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 205, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 206, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->client->ps.eFlags, ACTIVE, 0xAu) )
    ent->client->playerADSTargetTime = level.time;
  if ( ent->client->ps.weapCommon.fWeaponPosFrac != 0.0 )
  {
    BestTarget = AimTargetSP_GetBestTarget(ent->s.number, start, dir);
    v8 = BestTarget;
    if ( BestTarget != 2047 )
    {
      ent->client->playerADSTargetTime = level.time;
LABEL_17:
      v10 = dist * dir->v[1];
      sentient = ent->sentient;
      vEnd.v[0] = (float)(dist * dir->v[0]) + start->v[0];
      v12 = dist * dir->v[2];
      vEnd.v[1] = v10 + start->v[1];
      vEnd.v[2] = v12 + start->v[2];
      TeamFlag = Com_Teams_GetTeamFlag(&result, sentient->eTeam);
      Actor_BroadcastLineEvent(ent, AI_EV_BLOCK_FRIENDLIES, TeamFlag, start, &vEnd, NULL);
      v14 = DVARBOOL_ai_debugPlayerLOS;
      if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled )
        G_DebugLine(&ent->r.currentOrigin, &g_entities[v8].r.currentOrigin, &colorCyan, 0);
      return;
    }
    v9 = DVARINT_ai_playerADSTargetTime;
    if ( !DVARINT_ai_playerADSTargetTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerADSTargetTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( level.time - ent->client->playerADSTargetTime <= v9->current.integer )
      goto LABEL_17;
  }
}

/*
==============
G_PlayerUseSP_CheckAlmostStationary
==============
*/
char G_PlayerUseSP_CheckAlmostStationary(gentity_s *ent, const vec3_t *dir)
{
  float v4; 
  __int128 v5; 
  gclient_s *client; 
  const dvar_t *v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 65, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v4 = dir->v[0];
  v5 = LODWORD(dir->v[1]);
  client = ent->client;
  v7 = DVARFLT_ai_playerLOSHalfWidth;
  v8 = v5;
  *(float *)&v8 = fsqrt((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4));
  _XMM2 = v8;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v12 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v13 = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM2 = ent->r.currentOrigin.v[1] - client->playerLOSCheckPos.v[1];
  *(float *)&v5 = ent->r.currentOrigin.v[0] - client->playerLOSCheckPos.v[0];
  v14 = (float)(*(float *)&_XMM2 * *(float *)&_XMM2) + (float)(*(float *)&v5 * *(float *)&v5);
  if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v14 > v7->current.value || (float)((float)(v13 * client->playerLOSCheckDir.v[1]) + (float)(v12 * client->playerLOSCheckDir.v[0])) < 0.98479998 )
  {
    client->playerLOSCheckPos.v[0] = ent->r.currentOrigin.v[0];
    client->playerLOSCheckPos.v[1] = ent->r.currentOrigin.v[1];
    client->playerLOSCheckDir.v[0] = v12;
    client->playerLOSCheckDir.v[1] = v13;
    client->playerLOSPosTime = level.time;
  }
  else
  {
    client->playerLOSCheckPos.v[0] = (float)((float)(ent->r.currentOrigin.v[0] - client->playerLOSCheckPos.v[0]) * 0.25) + client->playerLOSCheckPos.v[0];
    client->playerLOSCheckPos.v[1] = (float)((float)(ent->r.currentOrigin.v[1] - client->playerLOSCheckPos.v[1]) * 0.25) + client->playerLOSCheckPos.v[1];
    client->playerLOSCheckDir.v[0] = (float)((float)(v12 - client->playerLOSCheckDir.v[0]) * 0.25) + client->playerLOSCheckDir.v[0];
    client->playerLOSCheckDir.v[1] = (float)((float)(v13 - client->playerLOSCheckDir.v[1]) * 0.25) + client->playerLOSCheckDir.v[1];
    v15 = DVARINT_ai_playerLOSMinTime;
    if ( !DVARINT_ai_playerLOSMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSMinTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( client->playerLOSPosTime + v15->current.integer <= level.time )
    {
      client->playerLOSPosTime = level.time;
      return 1;
    }
  }
  return 0;
}

/*
==============
G_PlayerUseSP_LookAtRemoteControlling
==============
*/
void G_PlayerUseSP_LookAtRemoteControlling(const gentity_s *remoteEnt, vec3_t *start, vec3_t *forward)
{
  const VehicleDef *ServerDef; 
  float vehCam_offsetY; 
  float vehCam_offsetZ; 
  float vehCam_offsetX; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  vec3_t up; 
  vec3_t right; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !remoteEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 268, ASSERT_TYPE_ASSERT, "(remoteEnt->vehicle)", (const char *)&queryFormat, "remoteEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(remoteEnt->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 271, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  start->v[0] = remoteEnt->r.currentOrigin.v[0];
  start->v[1] = remoteEnt->r.currentOrigin.v[1];
  start->v[2] = remoteEnt->r.currentOrigin.v[2];
  AngleVectors(&remoteEnt->r.currentAngles, forward, &right, &up);
  if ( ServerDef->type == VEH_AIRCRAFT && ServerDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE && !ServerDef->vehCam_UseGDT )
  {
    vehCam_offsetY = ServerDef->vehCam_offsetY;
    vehCam_offsetZ = ServerDef->vehCam_offsetZ;
    vehCam_offsetX = ServerDef->vehCam_offsetX;
    if ( ServerDef->vehiclePhysicsDef.physics_rcpCam1stAttachToTagPlayer && G_Utils_DObjGetWorldTagMatrix(remoteEnt, scr_const.tag_player, &outTagMat) )
    {
      v10 = outTagMat.m[0].v[0];
      v11 = outTagMat.m[0].v[2];
      forward->v[1] = outTagMat.m[0].v[1];
      forward->v[0] = v10;
      forward->v[2] = v11;
      v12 = (float)(v10 * vehCam_offsetX) + outTagMat.m[3].v[0];
      v13 = vehCam_offsetY * up.v[0];
      start->v[0] = v12;
      v14 = (float)(vehCam_offsetX * forward->v[1]) + outTagMat.m[3].v[1];
      v15 = (float)(v13 + v12) + (float)(vehCam_offsetZ * right.v[0]);
      v16 = (float)((float)(vehCam_offsetY * up.v[1]) + v14) + (float)(vehCam_offsetZ * right.v[1]);
      v17 = vehCam_offsetY * up.v[2];
      start->v[1] = v14;
      v18 = forward->v[2];
      start->v[0] = v15;
      v19 = (float)(vehCam_offsetX * v18) + outTagMat.m[3].v[2];
      start->v[1] = v16;
      v20 = (float)(v19 + v17) + (float)(vehCam_offsetZ * right.v[2]);
    }
    else
    {
      v21 = (float)(vehCam_offsetX * forward->v[0]) + start->v[0];
      start->v[0] = v21;
      v22 = (float)(vehCam_offsetX * forward->v[1]) + start->v[1];
      v23 = vehCam_offsetY * up.v[1];
      v24 = (float)((float)(vehCam_offsetY * up.v[0]) + v21) + (float)(vehCam_offsetZ * right.v[0]);
      v25 = vehCam_offsetZ * right.v[1];
      start->v[1] = v22;
      v26 = forward->v[2];
      start->v[0] = v24;
      v27 = (float)(v23 + v22) + v25;
      v28 = vehCam_offsetY * up.v[2];
      v29 = (float)(vehCam_offsetX * v26) + start->v[2];
      v30 = vehCam_offsetZ * right.v[2];
      start->v[1] = v27;
      v20 = (float)(v29 + v28) + v30;
    }
    start->v[2] = v20;
  }
}

/*
==============
G_PlayerUseSP_UpdateAttackerAccuracy
==============
*/
void G_PlayerUseSP_UpdateAttackerAccuracy(gentity_s *player)
{
  bool v2; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v4; 
  int v5; 
  actor_s *i; 
  int latency; 
  gclient_s *client; 
  const dvar_t *v9; 
  int integer; 
  int v11; 
  const dvar_t *v12; 
  float value; 
  float v14; 
  AIActorInterface v15; 
  AIAgentInterface v16; 
  AIActorInterface *v17; 
  bitarray<224> result; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 511, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 512, ASSERT_TYPE_ASSERT, "(player->sentient)", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v2 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
    *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
    v4 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    if ( v2 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v4 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, player->sentient->eTeam);
  }
  v5 = 0;
  for ( i = AIActorInterface::FirstActor(&result); i; i = AIActorInterface::NextActor(i, &result) )
  {
    AIActorInterface::AIActorInterface(&v15);
    AIAgentInterface::AIAgentInterface(&v16);
    v16.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    if ( !i->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
      __debugbreak();
    if ( !i->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v15, i);
    v17 = &v15;
    if ( AICommonInterface::GetTargetEntity(&v15) == player )
    {
      latency = 250;
      if ( i->sight.latency > 250 )
        latency = i->sight.latency;
      if ( AICommonInterface::CanSeeSentient(&v15, player->sentient, latency) )
        ++v5;
    }
  }
  client = player->client;
  if ( v5 > 1 )
  {
    client->attackerCount = v5;
    v9 = DVARINT_ai_accuracy_attackerCountMax;
    if ( !DVARINT_ai_accuracy_attackerCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    if ( v5 < integer )
      integer = v5;
    v11 = integer - 1;
    if ( v11 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 536, ASSERT_TYPE_ASSERT, "(attackerCount > 0)", (const char *)&queryFormat, "attackerCount > 0") )
      __debugbreak();
    v12 = DVARFLT_ai_accuracy_attackerCountDecrease;
    if ( !DVARFLT_ai_accuracy_attackerCountDecrease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracy_attackerCountDecrease") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    value = v12->current.value;
    if ( v11 == 2 )
      v14 = value * value;
    else
      v14 = powf_0(value, (float)v11);
    player->client->attackerAccuracyMultiplier = v14;
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
  char v4; 
  __int64 remoteControlEnt; 
  GWeaponMap *Instance; 
  __int16 number; 
  BgWeaponMap *v8; 
  gclient_s *v9; 
  Weapon *v10; 
  gclient_s *v11; 
  __int64 v12; 
  bool v13; 
  gentity_s *v14; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned __int16 EntityHitId; 
  gentity_s *v17; 
  double ClientVisibility; 
  float v19; 
  double FxVisibility; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  __int128 v24; 
  const dvar_t *v26; 
  float value; 
  sentient_s *sentient; 
  const bitarray<224> *TeamFlag; 
  sentient_s *v30; 
  sentient_s *v31; 
  float v32; 
  float v33; 
  float v34; 
  const dvar_t *v35; 
  double Float_Internal_DebugName; 
  float v37; 
  const dvar_t *v38; 
  double v39; 
  actor_s *actor; 
  bool v41; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v43; 
  double v44; 
  unsigned int v45; 
  double EnemyCrossHairRange; 
  double v47; 
  float v48; 
  const dvar_t *v49; 
  float v50; 
  float v51; 
  double v52; 
  float v53; 
  double v54; 
  double v55; 
  bitarray_base<bitarray<224> > *v56; 
  bool v57; 
  GameModeFlagValues::FlagMode v58; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v59; 
  unsigned int v60; 
  double v61; 
  double v62; 
  const dvar_t *v63; 
  bool v64; 
  float v65; 
  double v66; 
  double v67; 
  double v68; 
  GameModeFlagValues::FlagMode v69; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v70; 
  unsigned int v71; 
  unsigned __int8 *priorityMap; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  vec3_t outOrigin; 
  vec3_t outForward; 
  vec3_t end; 
  vec3_t vEnd; 
  bitarray<224> result; 
  Weapon weapon; 
  trace_t results; 

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
    v4 = 1;
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
    v4 = 0;
  }
  Instance = GWeaponMap::GetInstance();
  number = ent->s.number;
  p_eFlags = &client->ps.eFlags;
  v8 = Instance;
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
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) || v4 )
  {
LABEL_46:
    number = client->ps.viewlocked_entNum;
    if ( v4 )
      number = client->ps.remoteControlEnt;
    if ( number == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 353, ASSERT_TYPE_ASSERT, "(entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entNum != ENTITYNUM_NONE") )
      __debugbreak();
    v14 = &g_entities[number];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    weapon = *BgWeaponMap::GetWeapon(v8, v14->s.weaponHandle);
    goto LABEL_58;
  }
  v9 = ent->client;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = (Weapon *)BgWeaponMap::GetWeapon(v8, v9->ps.weapCommon.weaponHandle);
  v11 = ent->client;
  weapon = *v10;
  if ( v11 )
  {
    v12 = (__int64)&v11->ps.weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v11->ps.weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_58;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v11->ps.weapCommon.weapFlags, ACTIVE, 0x11u) )
    {
LABEL_45:
      v13 = 1;
      goto LABEL_59;
    }
  }
  else
  {
    v12 = 1832i64;
  }
  if ( v11 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v12, ACTIVE, 0x1Bu) )
    goto LABEL_45;
LABEL_58:
  v13 = 0;
LABEL_59:
  WeaponPriorityMap = BG_GetWeaponPriorityMap(&weapon, v13);
  if ( ((LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outForward.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outForward.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outForward.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( forward )[0] ) && !IS_NAN( ( forward )[1] ) && !IS_NAN( ( forward )[2] )") )
    __debugbreak();
  end.v[0] = (float)(15000.0 * outForward.v[0]) + outOrigin.v[0];
  end.v[1] = (float)(15000.0 * outForward.v[1]) + outOrigin.v[1];
  end.v[2] = (float)(15000.0 * outForward.v[2]) + outOrigin.v[2];
  if ( !WeaponPriorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 28, ASSERT_TYPE_ASSERT, "(priorityMap)", (const char *)&queryFormat, "priorityMap") )
    __debugbreak();
  G_Main_LocationalTrace(&results, &outOrigin, &end, number, 42002689, WeaponPriorityMap);
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( EntityHitId < 0x7FEu )
  {
    vEnd.v[0] = (float)((float)(15000.0 * results.fraction) * outForward.v[0]) + outOrigin.v[0];
    vEnd.v[1] = (float)((float)(15000.0 * results.fraction) * outForward.v[1]) + outOrigin.v[1];
    vEnd.v[2] = (float)((float)(15000.0 * results.fraction) * outForward.v[2]) + outOrigin.v[2];
    if ( SV_IsDemoPlaying() )
    {
      FxVisibility = SV_DemoSP_GetFxVisibility();
      v19 = *(float *)&FxVisibility;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
        __debugbreak();
      ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, &outOrigin, &vEnd);
      v19 = *(float *)&ClientVisibility;
      SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
    }
    if ( v19 >= 0.000099999997 )
      v17 = &g_entities[EntityHitId];
    else
      v17 = NULL;
  }
  else
  {
    v17 = NULL;
  }
  v21 = DCONST_DVARBOOL_g_lookAtEntityDebugTrace;
  if ( !DCONST_DVARBOOL_g_lookAtEntityDebugTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_lookAtEntityDebugTrace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    G_DebugLineWithDuration(&outOrigin, &end, &colorBlue, 0, 1);
    end.v[0] = (float)((float)(end.v[0] - outOrigin.v[0]) * results.fraction) + outOrigin.v[0];
    end.v[1] = (float)((float)(end.v[1] - outOrigin.v[1]) * results.fraction) + outOrigin.v[1];
    end.v[2] = (float)((float)(end.v[2] - outOrigin.v[2]) * results.fraction) + outOrigin.v[2];
    G_DebugSphere(&end, 3.0, &colorRed, 0, 1);
  }
  if ( G_PlayerUseSP_CheckAlmostStationary(ent, &outForward) )
  {
    v22 = DVARFLT_ai_playerLOSRange;
    if ( !DVARFLT_ai_playerLOSRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v24 = LODWORD(FLOAT_15000_0);
    *(float *)&v24 = 15000.0 * results.fraction;
    _XMM1 = v24;
    __asm { vminss  xmm1, xmm1, dword ptr [rsi+28h]; dist }
    G_PlayerUserSP_BanNodesInFront(ent, *(float *)&_XMM1, &outOrigin, &outForward);
  }
  G_PlayerUseSP_BlockFriendliesInADS(ent, 228.0, &outOrigin, &outForward);
  v26 = DVARFLT_ai_playerLOSRange;
  if ( !DVARFLT_ai_playerLOSRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  value = v26->current.value;
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 253, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ent->client->ps.weapCommon.weapFlags, ACTIVE, 1u) )
  {
    sentient = ent->sentient;
    vEnd.v[0] = (float)(value * outForward.v[0]) + outOrigin.v[0];
    vEnd.v[1] = (float)(value * outForward.v[1]) + outOrigin.v[1];
    vEnd.v[2] = (float)(value * outForward.v[2]) + outOrigin.v[2];
    TeamFlag = Com_Teams_GetTeamFlag(&result, sentient->eTeam);
    Actor_BroadcastLineEvent(ent, AI_EV_BLOCK_FRIENDLIES, TeamFlag, &outOrigin, &vEnd, NULL);
  }
  if ( v17 )
  {
    if ( v17->actor )
    {
      if ( (results.surfaceFlags & 0x10) != 0 )
        return;
      v30 = v17->sentient;
      if ( v30 )
      {
        v31 = ent->sentient;
        v32 = v17->r.currentOrigin.v[0] - outOrigin.v[0];
        v33 = v17->r.currentOrigin.v[1] - outOrigin.v[1];
        v34 = v17->r.currentOrigin.v[2] - outOrigin.v[2];
        if ( v31->eTeam == v30->eTeam )
        {
          v35 = DVARFLT_g_friendlyNameDist;
          if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v35);
          if ( v35->current.value > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 410, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
            __debugbreak();
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
          v37 = (float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34);
          if ( v37 < (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) && !EntHandle::isDefined(&ent->client->pLookatEnt) )
            EntHandle::setEnt(&ent->client->pLookatEnt, v17);
          v38 = DCONST_DVARMPFLT_g_friendlyfireDist;
          if ( !DCONST_DVARMPFLT_g_friendlyfireDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyfireDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v38);
          if ( v38->current.value > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 414, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARMPFLT_g_friendlyfireDist, \"g_friendlyfireDist\" ) <= 15000.0f)", (const char *)&queryFormat, "DconstMP_GetFloat( g_friendlyfireDist ) <= MAX_FRIENDLY_DIST") )
            __debugbreak();
          v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_g_friendlyfireDist, "g_friendlyfireDist");
          if ( v37 < (float)(*(float *)&v39 * *(float *)&v39) )
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 3u);
            actor = v17->actor;
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
          if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
            __debugbreak();
          if ( level.teammode == TEAMMODE_FFA )
          {
            v41 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
              AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
            else
              AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
            v43 = *(_OWORD *)AllCombatTeamFlags->array;
            v44 = *(double *)&AllCombatTeamFlags->array[4];
            v45 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
            *(_OWORD *)result.array = v43;
            *(double *)&result.array[4] = v44;
            if ( v41 )
              result.array[0] &= ~0x8000000u;
            result.array[6] = v45 & 0xFF9FFFFF;
          }
          else
          {
            Com_Teams_GetEnemyTeamFlags(&result, v30->eTeam);
          }
          if ( bitarray_base<bitarray<224>>::testBit(&result, v31->eTeam) )
          {
            EnemyCrossHairRange = BG_GetEnemyCrossHairRange(&weapon, v13);
            if ( *(float *)&EnemyCrossHairRange > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 425, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
              __debugbreak();
            v47 = BG_GetEnemyCrossHairRange(&weapon, v13);
            if ( (float)((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34)) < (float)(*(float *)&v47 * *(float *)&v47) )
            {
              if ( !EntHandle::isDefined(&ent->client->pLookatEnt) )
                EntHandle::setEnt(&ent->client->pLookatEnt, v17);
              GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
              GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_spValue, 0x38u);
            }
          }
          else if ( v17->sentient->civilianNameplate )
          {
            v61 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
            if ( *(float *)&v61 > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 437, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
              __debugbreak();
            v62 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
            if ( (float)((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34)) < (float)(*(float *)&v62 * *(float *)&v62) && !EntHandle::isDefined(&ent->client->pLookatEnt) )
              EntHandle::setEnt(&ent->client->pLookatEnt, v17);
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_spValue, 0x39u);
          }
        }
      }
    }
    if ( v17->s.eType == ET_VEHICLE && !EntHandle::isDefined(&ent->client->pLookatEnt) )
    {
      if ( !v17->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 448, ASSERT_TYPE_ASSERT, "(traceEnt->vehicle)", (const char *)&queryFormat, "traceEnt->vehicle") )
        __debugbreak();
      v48 = v17->r.currentOrigin.v[0] - outOrigin.v[0];
      v49 = DVARFLT_g_friendlyNameDist;
      v50 = v17->r.currentOrigin.v[2] - outOrigin.v[2];
      v51 = v17->r.currentOrigin.v[1] - outOrigin.v[1];
      if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.value > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 451, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      v52 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
      v53 = (float)((float)(v51 * v51) + (float)(v48 * v48)) + (float)(v50 * v50);
      if ( v53 < (float)(*(float *)&v52 * *(float *)&v52) )
        EntHandle::setEnt(&ent->client->pLookatEnt, v17);
      v54 = BG_GetEnemyCrossHairRange(&weapon, v13);
      if ( *(float *)&v54 > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 455, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      v55 = BG_GetEnemyCrossHairRange(&weapon, v13);
      if ( v53 < (float)(*(float *)&v55 * *(float *)&v55) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0xBu) )
      {
        v56 = Sentient_EnemyTeamFlags(&result, ent->sentient->eTeam);
        v57 = bitarray_base<bitarray<224>>::testBit(v56, v17->vehicle->team);
        v58 = ACTIVE;
        v59 = p_weapFlags;
        if ( v57 )
        {
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
          v58 = GameModeFlagValues::ms_spValue;
          v60 = 56;
          v59 = p_weapFlags;
        }
        else
        {
          v60 = 3;
        }
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v59, v58, v60);
      }
    }
    if ( v17->lookAtText0 && !EntHandle::isDefined(&ent->client->pLookatEnt) )
    {
      v63 = DVARFLT_g_friendlyNameDist;
      v64 = v17->lookAtText0 != scr_const.enemy;
      v65 = (float)((float)((float)(v17->r.currentOrigin.v[1] - outOrigin.v[1]) * (float)(v17->r.currentOrigin.v[1] - outOrigin.v[1])) + (float)((float)(v17->r.currentOrigin.v[0] - outOrigin.v[0]) * (float)(v17->r.currentOrigin.v[0] - outOrigin.v[0]))) + (float)((float)(v17->r.currentOrigin.v[2] - outOrigin.v[2]) * (float)(v17->r.currentOrigin.v[2] - outOrigin.v[2]));
      if ( !DVARFLT_g_friendlyNameDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_friendlyNameDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.value > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 482, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_g_friendlyNameDist, \"g_friendlyNameDist\" ) <= 15000.0f)", (const char *)&queryFormat, "Dvar_GetFloat( g_friendlyNameDist ) <= MAX_FRIENDLY_DIST") )
        __debugbreak();
      if ( v64 )
      {
        v66 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyNameDist, "g_friendlyNameDist");
        if ( v65 < (float)(*(float *)&v66 * *(float *)&v66) )
          EntHandle::setEnt(&ent->client->pLookatEnt, v17);
      }
      if ( v17->s.eType == ET_SCRIPTMOVER )
      {
        v67 = BG_GetEnemyCrossHairRange(&weapon, v13);
        if ( *(float *)&v67 > 15000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 488, ASSERT_TYPE_ASSERT, "(BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= 15000.0f)", (const char *)&queryFormat, "BG_GetEnemyCrossHairRange( weapon, isAlternate ) <= MAX_FRIENDLY_DIST") )
          __debugbreak();
        v68 = BG_GetEnemyCrossHairRange(&weapon, v13);
        if ( v65 < (float)(*(float *)&v68 * *(float *)&v68) )
        {
          v69 = ACTIVE;
          v70 = p_weapFlags;
          if ( v64 )
          {
            v71 = 3;
          }
          else
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
            v69 = GameModeFlagValues::ms_spValue;
            v71 = 56;
            v70 = p_weapFlags;
          }
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(v70, v69, v71);
        }
      }
    }
  }
}

/*
==============
G_PlayerUserSP_BanNodesInFront
==============
*/
void G_PlayerUserSP_BanNodesInFront(gentity_s *ent, float dist, const vec3_t *start, const vec3_t *dir)
{
  __int128 v4; 
  team_t eTeam; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  int v20; 
  const dvar_t *v21; 
  __int64 v22; 
  int integer; 
  int v24; 
  const dvar_t *v25; 
  int v26; 
  const dvar_t *v27; 
  double v28; 
  const dvar_t *v29; 
  __int64 v30; 
  float v31; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  double v34; 
  bool v35; 
  const char *GameType; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  const char *v40; 
  int v41; 
  int v42; 
  const char *v43; 
  int v44; 
  SentientHandle *v45; 
  sentient_s *v46; 
  sentient_s *v47; 
  ai_scripted_t *AIScripted; 
  actor_s *actor; 
  sentient_s *sentient; 
  AIScriptedInterface *m_pAI; 
  const dvar_t *v52; 
  __int64 maxNodes; 
  __int64 maxNodesa; 
  __int64 typeFlags; 
  int duration; 
  AIWrapper v58; 
  vec3_t origin; 
  Bounds box; 
  vec2_t end; 
  float v62; 
  pathsort_s nodes; 
  __int128 v64; 

  v64 = v4;
  if ( !BG_ActorOrAgentSystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(BG_ActorOrAgentSystemEnabled())", "%s\n\tAccess to pathnode_dynamic_t::actors", "BG_ActorOrAgentSystemEnabled()") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(dir->v[0] * dir->v[0]) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 129, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( dir ) )", (const char *)&queryFormat, "Vec3IsNormalized( dir )") )
    __debugbreak();
  if ( ent->sentient->eTeam == TEAM_FIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 130, ASSERT_TYPE_ASSERT, "( ent->sentient->eTeam != TEAM_DEAD )", (const char *)&queryFormat, "ent->sentient->eTeam != TEAM_DEAD") )
    __debugbreak();
  eTeam = ent->sentient->eTeam;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v10 = 2;
    if ( eTeam <= TEAM_TWO )
      v10 = eTeam - 1;
    v11 = v10;
    if ( v10 >= 3 )
    {
      LODWORD(maxNodes) = v10;
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", maxNodes, 3);
      goto LABEL_19;
    }
  }
  else
  {
    v11 = 1;
    if ( eTeam <= TEAM_ONE )
      v11 = eTeam - 1;
    if ( v11 >= 2 )
    {
      LODWORD(maxNodes) = v11;
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", maxNodes, 2);
LABEL_19:
      if ( v12 )
        __debugbreak();
    }
  }
  v13 = (float)(dist * dir->v[0]) + start->v[0];
  v14 = (float)(dist * dir->v[1]) + start->v[1];
  v15 = v14 - start->v[1];
  v16 = (float)(dist * dir->v[2]) + start->v[2];
  v17 = v13 - start->v[0];
  v18 = (float)(v13 + start->v[0]) * 0.5;
  end.v[0] = (float)(dist * dir->v[0]) + start->v[0];
  end.v[1] = v14;
  origin.v[1] = (float)(v14 + start->v[1]) * 0.5;
  origin.v[0] = v18;
  origin.v[2] = (float)(v16 + start->v[2]) * 0.5;
  v19 = fsqrt((float)(v15 * v15) + (float)(v17 * v17)) * 0.5;
  v62 = v16;
  v20 = Path_NodesInCylinder(&origin, NULL, v19, 80.0, &nodes, 4, -2107367684);
  v21 = DVARINT_ai_playerLOSMinTime;
  v22 = v20;
  if ( !DVARINT_ai_playerLOSMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSMinTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  integer = v21->current.integer;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v24 = integer;
  v25 = DVARBOOL_ai_debugPlayerLOS;
  duration = v24 / level.frameDuration;
  v26 = v24 / level.frameDuration;
  if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled )
  {
    v27 = DVARFLT_ai_playerLOSHalfWidth;
    box.midPoint.v[0] = 0.0;
    box.midPoint.v[1] = 0.0;
    box.midPoint.v[2] = 0.0;
    box.halfSize.v[0] = v19;
    if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    LODWORD(box.halfSize.v[1]) = v27->current.integer;
    box.halfSize.v[2] = FLOAT_20_0;
    v28 = vectoyaw((const vec2_t *)dir);
    G_DebugBox(&origin, &box, *(float *)&v28, &colorOrange, 0, v26);
  }
  v29 = DVARFLT_ai_playerLOSHalfWidth;
  if ( !DVARFLT_ai_playerLOSHalfWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_playerLOSHalfWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v30 = v22;
  v31 = v29->current.value * v29->current.value;
  if ( (int)v22 > 0 )
  {
    p_nodes = &nodes;
    do
    {
      node = p_nodes->node;
      pathnode_t::GetPos(p_nodes->node, &box.midPoint);
      v34 = PointToLineDistSq2D((const vec2_t *)&box, (const vec2_t *)start, &end);
      if ( *(float *)&v34 <= v31 )
      {
        if ( BG_BotSystemEnabled() )
        {
          GameType = SV_GameMP_GetGameType();
          v37 = *(unsigned __int8 *)GameType - (unsigned __int8)aBr_2[0];
          if ( !v37 )
          {
            v37 = *((unsigned __int8 *)GameType + 1) - (unsigned __int8)aBr_2[1];
            if ( !v37 )
              v37 = *((unsigned __int8 *)GameType + 2) - (unsigned __int8)aBr_2[2];
          }
          v35 = v37 == 0;
        }
        else
        {
          v35 = 1;
        }
        v38 = v11;
        if ( v35 )
          v38 = 0;
        if ( !node )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 377, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
        }
        if ( BG_BotSystemEnabled() )
        {
          v40 = SV_GameMP_GetGameType();
          v41 = *(unsigned __int8 *)v40 - (unsigned __int8)aBr_2[0];
          if ( !v41 )
          {
            v41 = *((unsigned __int8 *)v40 + 1) - (unsigned __int8)aBr_2[1];
            if ( !v41 )
              v41 = *((unsigned __int8 *)v40 + 2) - (unsigned __int8)aBr_2[2];
          }
          v39 = (v41 != 0) + 1;
        }
        else
        {
          v39 = 1;
        }
        if ( v38 >= v39 )
        {
          if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 349, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          if ( BG_BotSystemEnabled() )
          {
            v43 = SV_GameMP_GetGameType();
            v44 = *(unsigned __int8 *)v43 - (unsigned __int8)aBr_2[0];
            if ( !v44 )
            {
              v44 = *((unsigned __int8 *)v43 + 1) - (unsigned __int8)aBr_2[1];
              if ( !v44 )
                v44 = *((unsigned __int8 *)v43 + 2) - (unsigned __int8)aBr_2[2];
            }
            v42 = (v44 != 0) + 1;
          }
          else
          {
            v42 = 1;
          }
          LODWORD(typeFlags) = v42;
          LODWORD(maxNodesa) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 378, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeamAdjusted ) < (unsigned)( Path_NodeMaxNumTeamOwners( node ) )", "nodeTeamAdjusted doesn't index Path_NodeMaxNumTeamOwners( node )\n\t%i not in [0, %i)", maxNodesa, typeFlags) )
            __debugbreak();
        }
        v45 = &node->dynamic.pOwners[v38];
        if ( SentientHandle::isDefined(v45) )
        {
          v46 = SentientHandle::sentient(v45);
          v47 = v46;
          if ( v46 )
          {
            if ( v46->pClaimedNode == node )
            {
              AIScripted = AI_GetAIScripted(v46->ent);
              if ( AIScripted && AIScripted->fixedNode && AIScripted->fixedNodeNudged )
                goto LABEL_95;
              if ( Path_SentientNearNode(v47, node) )
                goto LABEL_95;
              actor = v47->ent->actor;
              if ( !actor )
                goto LABEL_95;
              sentient = ent->sentient;
              if ( v47->eTeam != sentient->eTeam )
                goto LABEL_95;
              if ( v47 == sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 179, ASSERT_TYPE_ASSERT, "(nodeOwner != ent->sentient)", (const char *)&queryFormat, "nodeOwner != ent->sentient") )
                __debugbreak();
              AIWrapper::AIWrapper(&v58, actor);
              m_pAI = v58.m_pAI;
              if ( !v58.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_playeruse_sp.cpp", 182, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              if ( AIScriptedInterface::KeepClaimedNode(m_pAI) )
                goto LABEL_95;
              if ( actor->nodeSelect.numCoverNodesInGoal > 1 )
                Path_RelinquishNodeSoon(v47);
            }
          }
        }
        node->dynamic.actors.inPlayerLOSTime = level.time + 1500;
        v52 = DVARBOOL_ai_debugPlayerLOS;
        if ( !DVARBOOL_ai_debugPlayerLOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugPlayerLOS") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v52);
        if ( v52->current.enabled )
          Path_DrawDebugNoLinks(node, &colorOrange, duration);
      }
LABEL_95:
      ++p_nodes;
      --v30;
    }
    while ( v30 );
  }
}

