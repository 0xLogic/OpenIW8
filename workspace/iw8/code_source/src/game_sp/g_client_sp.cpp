/*
==============
G_ClientSP_Respawn
==============
*/

void G_ClientSP_Respawn(void)
{
  ?G_ClientSP_Respawn@@YAXXZ();
}

/*
==============
G_ClientSP_Touch
==============
*/

void __fastcall G_ClientSP_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  ?G_ClientSP_Touch@@YAXPEAUgentity_s@@0H@Z(pSelf, pOther, bTouched);
}

/*
==============
G_ClientSP_Connect
==============
*/

const char *__fastcall G_ClientSP_Connect(int clientNum)
{
  return ?G_ClientSP_Connect@@YAPEBDH@Z(clientNum);
}

/*
==============
GClientSystemSP::TeleportPlayer
==============
*/

void __fastcall GClientSystemSP::TeleportPlayer(GClientSystemSP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  ?TeleportPlayer@GClientSystemSP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@1@Z(this, player, origin, angles);
}

/*
==============
G_ClientSP_SetClientViewAngle
==============
*/

void __fastcall G_ClientSP_SetClientViewAngle(gentity_s *ent, const vec3_t *angle)
{
  ?G_ClientSP_SetClientViewAngle@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(ent, angle);
}

/*
==============
G_ClientSP_InitVehicleViewFlag
==============
*/

void __fastcall G_ClientSP_InitVehicleViewFlag(playerState_s *ps)
{
  ?G_ClientSP_InitVehicleViewFlag@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
G_ClientSP_SelectRandomDeathmatchSpawnPoint
==============
*/

gentity_s *__fastcall G_ClientSP_SelectRandomDeathmatchSpawnPoint(const gclient_s *client)
{
  return ?G_ClientSP_SelectRandomDeathmatchSpawnPoint@@YAPEAUgentity_s@@PEBUgclient_s@@@Z(client);
}

/*
==============
SelectNearestDeathmatchSpawnPoint
==============
*/

gentity_s *__fastcall SelectNearestDeathmatchSpawnPoint(const vec3_t *from)
{
  return ?SelectNearestDeathmatchSpawnPoint@@YAPEAUgentity_s@@AEBTvec3_t@@@Z(from);
}

/*
==============
G_ClientSP_SetClientOrigin
==============
*/

void __fastcall G_ClientSP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  ?G_ClientSP_SetClientOrigin@@YAXPEAUgentity_s@@AEBTvec3_t@@HH@Z(ent, origin, zOffset, teleport);
}

/*
==============
G_ClientSP_InitClientDeltaAngles
==============
*/

void __fastcall G_ClientSP_InitClientDeltaAngles(gclient_s *client)
{
  ?G_ClientSP_InitClientDeltaAngles@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_ClientSP_ClientBegin
==============
*/

void __fastcall G_ClientSP_ClientBegin(int clientNum)
{
  ?G_ClientSP_ClientBegin@@YAXH@Z(clientNum);
}

/*
==============
G_FinishSetupSpawnPoint
==============
*/

void __fastcall G_FinishSetupSpawnPoint(gentity_s *ent)
{
  ?G_FinishSetupSpawnPoint@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ClientSP_Spawn
==============
*/

void __fastcall G_ClientSP_Spawn(gentity_s *ent)
{
  ?G_ClientSP_Spawn@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ClientSP_ClientBegin
==============
*/
void G_ClientSP_ClientBegin(int clientNum)
{
  *(_QWORD *)&level.clients[clientNum].sess.connected = 2i64;
  G_ClientSP_Spawn(&g_entities[clientNum]);
}

/*
==============
G_ClientSP_Connect
==============
*/
const char *G_ClientSP_Connect(int clientNum)
{
  gclient_s *v2; 
  gentity_s *v3; 
  const dvar_t *v4; 
  int integer; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int commandTime; 
  sentient_s *v10; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  v2 = &level.clients[clientNum];
  v3 = &g_entities[clientNum];
  G_Client_Clear(clientNum, v2);
  v2->sess.connected = CON_CONNECTING;
  v2->sess.sessionState = SESS_STATE_SPECTATOR;
  v4 = DVARINT_g_player_maxhealth;
  if ( !DVARINT_g_player_maxhealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_player_maxhealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v6 = 0i64;
  v2->sess.maxHealth = integer;
  v2->sess.hudData.data = 0;
  v2->ps.stats[2] = integer;
  v2->ps.clientNum = clientNum;
  BG_InitPlayerstateVehicle(&v2->ps);
  v2->ps.corpseIndex = 15;
  v2->sess.moveSpeedScaleMultiplier = 1.0;
  v2->ps.moveSpeedScaleMultiplier = MSG_PackUnsignedFloat(1.0, 5.0, 0xCu);
  v2->ps.viewKickScale = 1.0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
    v8 = *(_QWORD *)(v7 + 2040);
    memset_0((void *)(v7 + 12), 0, 0x7ECui64);
    memset_0((void *)(v7 + 2048), 0, 0x31C8ui64);
    *(_QWORD *)(v7 + 2040) = v8;
    *(_DWORD *)v7 = clientNum;
    *(_DWORD *)(v7 + 4) = 1;
    *(_DWORD *)(v7 + 8) = 1;
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v3);
  v3->handler = 14;
  v3->client = v2;
  v3->s.clientNum = clientNum;
  v3->s.surfType = 7;
  GMovingPlatforms::InitClient(v3, &v2->movingPlatformHandle);
  GPlayerTraceInfo::Init(v3);
  BG_InitPlayerState(&v2->ps);
  if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
  {
    *(_QWORD *)&v2->ps.animState.animSet = 0i64;
    *(_QWORD *)&v2->ps.animState.slot[0].packedAnim = 0i64;
    v2->ps.animState.slot[1].packedAnim = 0;
    v2->ps.animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(v2->ps.suitIndex);
  }
  G_WorldStreaming_ClientConnect(clientNum);
  G_HeadIcons_SetPlayerDirty(clientNum);
  SV_Game_GetUsercmd(clientNum, &v2->sess.cmd);
  if ( v2 == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = v2->sess.cmd.commandTime;
  v2->ps.commandTime = commandTime;
  v2->ps.commandTimeInterpolated = commandTime;
  v2->ps.inputTime = 0;
  v2->ps.inputTimeInterpolated = 0;
  v10 = Sentient_Alloc(ST_PLAYER);
  if ( !v10 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144352818, 992i64);
  v3->sentient = v10;
  Sentient_Init(v10, v3, TEAM_TWO);
  p_eFlags = &v2->ps.eFlags;
  while ( !p_eFlags->m_flags[0] )
  {
    ++v6;
    ++p_eFlags;
    if ( v6 >= 1 )
      goto LABEL_26;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 530, ASSERT_TYPE_ASSERT, "(!client->ps.eFlags.TestAnyFlags())", (const char *)&queryFormat, "!client->ps.eFlags.TestAnyFlags()") )
    __debugbreak();
LABEL_26:
  if ( v3->r.svFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 531, ASSERT_TYPE_ASSERT, "(!ent->r.svFlags)", (const char *)&queryFormat, "!ent->r.svFlags") )
    __debugbreak();
  return 0i64;
}

/*
==============
G_ClientSP_GetPushed
==============
*/
__int64 G_ClientSP_GetPushed(gentity_s *pSelf, gentity_s *pOther)
{
  const dvar_t *v3; 
  gentity_s *MoverEntityFromPs; 
  gclient_s *client; 
  float v8; 
  float v9; 
  __int128 v10; 
  gclient_s *v12; 
  float v15; 

  v3 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled || !pOther->actor )
    return 0i64;
  if ( !pSelf->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  MoverEntityFromPs = GMovingPlatforms::GetMoverEntityFromPs(&pSelf->client->ps);
  if ( MoverEntityFromPs )
  {
    if ( (MoverEntityFromPs->flags.m_flags[0] & 0x20) != 0 )
      return 0i64;
  }
  if ( BG_IsTurretActive(&pSelf->client->ps) || pSelf->tagInfo )
    return 0i64;
  client = pSelf->client;
  if ( level.time < client->lastTouchTime + 500 && level.time >= client->inControlTime + 20000 )
    return 1i64;
  v10 = LODWORD(pSelf->r.currentOrigin.v[1]);
  v8 = pSelf->r.currentOrigin.v[1] - pOther->r.currentOrigin.v[1];
  v9 = pSelf->r.currentOrigin.v[0] - pOther->r.currentOrigin.v[0];
  *(float *)&v10 = (float)(v8 * v8) + (float)(v9 * v9);
  if ( *(float *)&v10 >= 900.0 )
    return 0i64;
  *(float *)&v10 = fsqrt(*(float *)&v10);
  _XMM8 = v10;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v12 = pSelf->client;
  __asm
  {
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm1, xmm0
  }
  v15 = (float)((float)(30.0 - *(float *)&v10) * 1000.0) / _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration).m128_f32[0];
  v12->ps.velocity.v[1] = (float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * v15;
  v12->ps.velocity.v[0] = (float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * v15;
  return 1i64;
}

/*
==============
G_ClientSP_InitClientDeltaAngles
==============
*/
void G_ClientSP_InitClientDeltaAngles(gclient_s *client)
{
  vec3_t *p_delta_angles; 
  unsigned int v2; 
  bool v3; 
  double v5; 
  float v8; 
  float v11; 
  __int64 v12; 
  __int64 v13; 

  p_delta_angles = &client->ps.delta_angles;
  v2 = 0;
  v3 = 1;
  _XMM8 = 0i64;
  do
  {
    if ( !v3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v5 = MSG_UnpackSignedFloat(LODWORD(p_delta_angles[1772].v[1]), 180.0, 0x14u);
    __asm { vroundss xmm7, xmm8, xmm0, 1 }
    if ( v2 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    __asm { vroundss xmm2, xmm8, xmm3, 1 }
    v8 = (float)((float)((float)(p_delta_angles[24].v[1] - (float)((float)((float)(*(float *)&v5 * 0.0027777778) - *(float *)&_XMM7) * 360.0)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( v2 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_delta_angles->v[0] = v8;
    if ( v2 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    __asm
    {
      vroundss xmm1, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    v11 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( v2 >= 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    p_delta_angles->v[0] = v11;
    p_delta_angles = (vec3_t *)((char *)p_delta_angles + 4);
    v3 = ++v2 < 3;
  }
  while ( (int)v2 < 3 );
}

/*
==============
G_ClientSP_InitVehicleViewFlag
==============
*/
void G_ClientSP_InitVehicleViewFlag(playerState_s *ps)
{
  ps->pm_flags.m_flags[1] |= 0x1000u;
}

/*
==============
G_ClientSP_Respawn
==============
*/
void G_ClientSP_Respawn(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int integer; 
  int v3; 
  const dvar_t *v4; 
  const char *v5; 
  const dvar_t *v6; 
  const char *v7; 
  const dvar_t *v8; 
  const char *v9; 
  char *fmt; 

  v0 = DVARINT_reloading;
  if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.integer )
  {
    Dvar_SetInt_Internal(DVARINT_reloading, 1);
    v1 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    integer = v1->current.integer;
    v3 = integer + Sys_Milliseconds();
    v4 = DVARINT_g_deathDelay;
    level.absoluteReloadDelayTime = v3;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = j_va("snd_fade 0 %i", v4->current.unsignedInt);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v5);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "clear_blur");
    v6 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(fmt) = 2;
    v7 = j_va("scr_blur %i %f %i %i", v6->current.unsignedInt, DOUBLE_32_0, 1i64, fmt);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v7);
    v8 = DVARINT_g_deathDelay;
    if ( !DVARINT_g_deathDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_deathDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = j_va("time_slow %i %f %f", v8->current.unsignedInt, DOUBLE_1_0, DOUBLE_0_1000000014901161);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v9);
  }
}

/*
==============
G_ClientSP_SelectInitialSpawnPoint
==============
*/
gentity_s *G_ClientSP_SelectInitialSpawnPoint(const gclient_s *client, vec3_t *outOrigin, vec3_t *outAngles)
{
  gentity_s *Entity; 
  gentity_s *v7; 
  gentity_s *v9; 
  __int128 v10; 
  gentity_s *v11; 

  Entity = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  if ( !Entity )
    goto LABEL_6;
  while ( (Entity->spawnflags & 1) == 0 )
  {
    Entity = G_Utils_FindEntity(Entity, 380, scr_const.info_player_start);
    if ( !Entity )
      goto LABEL_6;
  }
  if ( G_ClientSP_SpotWouldTelefrag(client, Entity) )
  {
LABEL_6:
    v7 = NULL;
    *(float *)&_XMM7 = FLOAT_999999_0;
    v9 = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
    while ( v9 )
    {
      v10 = LODWORD(v9->r.currentOrigin.v[1]);
      v11 = v9;
      *(float *)&v10 = fsqrt((float)((float)((float)(v9->r.currentOrigin.v[1] - 0.0) * (float)(v9->r.currentOrigin.v[1] - 0.0)) + (float)((float)(v9->r.currentOrigin.v[0] - 0.0) * (float)(v9->r.currentOrigin.v[0] - 0.0))) + (float)((float)(v9->r.currentOrigin.v[2] - 0.0) * (float)(v9->r.currentOrigin.v[2] - 0.0)));
      _XMM6 = v10;
      if ( *(float *)&_XMM7 <= *(float *)&v10 )
        v11 = v7;
      v7 = v11;
      v9 = G_Utils_FindEntity(v9, 380, scr_const.info_player_start);
      __asm { vminss  xmm7, xmm6, xmm7 }
    }
    Entity = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
    if ( Entity == v7 )
    {
      Entity = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
      if ( Entity == v7 )
        Entity = G_ClientSP_SelectRandomDeathmatchSpawnPoint(client);
    }
    if ( !Entity )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144352788, 991i64);
  }
  outOrigin->v[0] = Entity->r.currentOrigin.v[0];
  outOrigin->v[1] = Entity->r.currentOrigin.v[1];
  outOrigin->v[2] = Entity->r.currentOrigin.v[2] + 9.0;
  outAngles->v[0] = Entity->r.currentAngles.v[0];
  outAngles->v[1] = Entity->r.currentAngles.v[1];
  outAngles->v[2] = Entity->r.currentAngles.v[2];
  return Entity;
}

/*
==============
G_ClientSP_SelectRandomDeathmatchSpawnPoint
==============
*/
gentity_s *G_ClientSP_SelectRandomDeathmatchSpawnPoint(const gclient_s *client)
{
  int v2; 
  gentity_s *Entity; 
  __int64 *v4; 
  Bounds *Bounds; 
  float v6; 
  float v7; 
  GUtils *v8; 
  Bounds worldBounds; 
  __int64 v11[128]; 

  v2 = 0;
  Entity = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  if ( !Entity )
    return G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  v4 = v11;
  do
  {
    if ( client )
      Bounds = (Bounds *)BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
    else
      Bounds = &playerBox;
    v6 = Entity->r.currentOrigin.v[1];
    worldBounds.midPoint.v[0] = Entity->r.currentOrigin.v[0] + Bounds->midPoint.v[0];
    v7 = Entity->r.currentOrigin.v[2];
    worldBounds.midPoint.v[1] = v6 + Bounds->midPoint.v[1];
    worldBounds.midPoint.v[2] = v7 + Bounds->midPoint.v[2];
    worldBounds.halfSize = Bounds->halfSize;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
      __debugbreak();
    v8 = GUtils::ms_gUtils;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", (_DWORD)GUtils::ms_gUtils + 104, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
      __debugbreak();
    if ( !GUtils::WorldBoundsWouldTelefrag(v8, &worldBounds) )
    {
      ++v2;
      *v4++ = (__int64)Entity;
    }
    Entity = G_Utils_FindEntity(Entity, 380, scr_const.info_player_start);
  }
  while ( Entity );
  if ( v2 )
    return (gentity_s *)v11[G_rand() % v2];
  else
    return G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
}

/*
==============
G_ClientSP_SetClientOrigin
==============
*/
void G_ClientSP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  gclient_s *client; 
  GHandler *Handler; 
  GHandler *v10; 
  gclient_s *v11; 
  const BgHandler *v12; 
  GWeaponMap *Instance; 
  gclient_s *v14; 
  WorldUpReferenceFrame v15; 

  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = ent->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  if ( zOffset )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v15, &ent->client->ps, Handler);
    WorldUpReferenceFrame::AddUpContribution(&v15, 1.0, &ent->client->ps.origin);
  }
  if ( teleport )
    ent->client->ps.eFlags.m_flags[0] ^= 4u;
  v10 = GHandler::getHandler();
  v11 = ent->client;
  v12 = v10;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v11->ps, &ent->s, 1, v12);
  v14 = ent->client;
  ent->r.currentOrigin.v[0] = v14->ps.origin.v[0];
  ent->r.currentOrigin.v[1] = v14->ps.origin.v[1];
  ent->r.currentOrigin.v[2] = v14->ps.origin.v[2];
}

/*
==============
G_ClientSP_SetClientViewAngle
==============
*/
void G_ClientSP_SetClientViewAngle(gentity_s *ent, const vec3_t *angle)
{
  float v3; 
  float v4; 
  float v5; 
  gclient_s *client; 
  double v7; 
  const dvar_t *v8; 
  float v11; 
  double v12; 
  double Float_Internal_DebugName; 
  double v14; 
  float v15; 
  double v16; 
  gclient_s *v19; 
  double v20; 
  float v21; 
  double v22; 
  double v23; 
  double v24; 
  const dvar_t *v25; 
  float v27; 
  double v28; 
  double v29; 
  double v30; 
  float v31; 
  double v32; 
  gclient_s *v35; 
  double v36; 
  float v37; 
  double v39; 
  gclient_s *v40; 

  v3 = angle->v[0];
  v4 = angle->v[1];
  v5 = angle->v[2];
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 287, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ent->client->ps.pm_flags, ACTIVE, 0) && !BG_IsTurretActive(&ent->client->ps) )
  {
    client = ent->client;
    if ( (client->ps.linkFlags.m_flags[0] & 4) == 0 )
    {
      v7 = AngleDelta(client->ps.proneDirection, v4);
      v8 = DCONST_DVARFLT_bg_prone_yawcap;
      _XMM9 = 0i64;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      v11 = (float)((float)(*(float *)&v7 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v11 > v8->current.value || (v12 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap"), v11 < COERCE_FLOAT(LODWORD(v12) ^ _xmm)) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
        if ( v11 <= *(float *)&Float_Internal_DebugName )
        {
          v16 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          v15 = v11 + *(float *)&v16;
        }
        else
        {
          v14 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          v15 = v11 - *(float *)&v14;
        }
        ent->client->ps.delta_angles.v[1] = v15 + ent->client->ps.delta_angles.v[1];
        __asm
        {
          vroundss xmm1, xmm9, xmm3, 1
          vroundss xmm3, xmm9, xmm2, 1
        }
        ent->client->ps.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        if ( v15 <= 0.0 )
        {
          v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          v21 = *(float *)&v22 + ent->client->ps.proneDirection;
        }
        else
        {
          v19 = ent->client;
          v20 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_prone_yawcap, "bg_prone_yawcap");
          v21 = v19->ps.proneDirection - *(float *)&v20;
        }
        v23 = AngleNormalize360(v21);
        v4 = *(float *)&v23;
      }
      v24 = AngleDelta(ent->client->ps.proneTorsoPitch, v3);
      v25 = DCONST_DVARFLT_player_prone_view_pitch_up;
      __asm { vroundss xmm3, xmm9, xmm0, 1 }
      v27 = (float)((float)(*(float *)&v24 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v27 > v25->current.value || (v28 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down"), v27 < COERCE_FLOAT(LODWORD(v28) ^ _xmm)) )
      {
        v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
        if ( v27 <= *(float *)&v29 )
        {
          v32 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down");
          v31 = v27 + *(float *)&v32;
        }
        else
        {
          v30 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
          v31 = v27 - *(float *)&v30;
        }
        ent->client->ps.delta_angles.v[0] = v31 + ent->client->ps.delta_angles.v[0];
        __asm
        {
          vroundss xmm1, xmm9, xmm3, 1
          vroundss xmm3, xmm9, xmm2, 1
        }
        ent->client->ps.delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        if ( v31 <= 0.0 )
        {
          v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_down, "player_prone_view_pitch_down");
          v37 = (float)(*(float *)&v39 + ent->client->ps.proneTorsoPitch) * 0.0027777778;
          __asm { vroundss xmm3, xmm9, xmm0, 1 }
        }
        else
        {
          v35 = ent->client;
          v36 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_prone_view_pitch_up, "player_prone_view_pitch_up");
          v37 = (float)(v35->ps.proneTorsoPitch - *(float *)&v36) * 0.0027777778;
          __asm { vroundss xmm3, xmm9, xmm2, 1 }
        }
        v3 = (float)(v37 - *(float *)&_XMM3) * 360.0;
      }
    }
  }
  ent->r.currentAngles.v[0] = v3;
  ent->r.currentAngles.v[1] = v4;
  ent->r.currentAngles.v[2] = v5;
  v40 = ent->client;
  v40->ps.viewangles.v[0] = v3;
  v40->ps.viewangles.v[1] = ent->r.currentAngles.v[1];
  v40->ps.viewangles.v[2] = ent->r.currentAngles.v[2];
  G_ClientSP_InitClientDeltaAngles(ent->client);
}

/*
==============
G_ClientSP_Spawn
==============
*/
void G_ClientSP_Spawn(gentity_s *ent)
{
  __int16 EntityIndex; 
  gclient_s *client; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int viewmodelIndex; 
  int legsModelIndex; 
  int maxHealth; 
  GHandler *Handler; 
  EffectiveStance EffectiveStance; 
  const SuitDef *SuitDef; 
  GWeaponMap *Instance; 
  int v14; 
  signed __int64 v15; 
  unsigned int number; 
  UsableClass m_useClass; 
  int serverTime; 
  int v19; 
  int commandTime; 
  int v21; 
  __int16 v22; 
  GHandler *v23; 
  GWeaponMap *v24; 
  sentient_s *sentient; 
  GHandler *v26; 
  GWeaponMap *v27; 
  __int64 v28; 
  char Src[2464]; 
  vec3_t outOrigin; 
  vec3_t outAngles; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ClientSP_Spawn");
  EntityIndex = G_GetEntityIndex(ent);
  client = ent->client;
  v4 = EntityIndex;
  v5 = EntityIndex;
  if ( client != &level.clients[EntityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 585, ASSERT_TYPE_ASSERT, "(client == &level.clients[index])", (const char *)&queryFormat, "client == &level.clients[index]") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v28) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 586, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( index ))", (const char *)&queryFormat, "G_IsEntityInUse( index )") )
    __debugbreak();
  if ( client->ps.clientNum != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 587, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == index)", (const char *)&queryFormat, "client->ps.clientNum == index") )
    __debugbreak();
  G_ClientSP_SelectInitialSpawnPoint(client, &outOrigin, &outAngles);
  if ( client == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
    __debugbreak();
  v6 = ~(unsigned __int8)client->ps.eFlags.m_flags[0] & 4;
  memcpy_0(Src, &client->sess, 0x998ui64);
  viewmodelIndex = client->ps.viewmodelIndex;
  legsModelIndex = client->ps.legsModelIndex;
  G_Client_Clear(v4, client);
  GMovingPlatforms::InitClient(ent, &client->movingPlatformHandle);
  GPlayerTraceInfo::Init(ent);
  G_DefaultViewAngleClampGoal(&client->link_viewClamp);
  G_SnapToViewAngleClampGoal(&client->link_viewClamp);
  BG_InitPlayerState(&client->ps);
  G_HeadIcons_SetPlayerDirty(v4);
  memcpy_0(&client->sess, Src, sizeof(client->sess));
  client->ps.viewmodelIndex = viewmodelIndex;
  client->groundTiltEntNum = 2047;
  client->ps.viewlocked_entNum = 2047;
  client->ps.legsModelIndex = legsModelIndex;
  client->ps.clientNum = v4;
  BG_InitPlayerstateVehicle(&client->ps);
  client->ps.corpseIndex = 15;
  client->ps.linkEnt = 2047;
  client->ps.pm_flags.m_flags[1] |= 0x1000u;
  maxHealth = client->sess.maxHealth;
  client->ps.bobScale = 1.0;
  client->ps.stats[2] = maxHealth;
  client->ps.eFlags.m_flags[0] = v6;
  ent->s.groundEntityNum = 2047;
  ent->s.surfType = 7;
  Handler = GHandler::getHandler();
  BGMovingPlatformPS::Init(&client->ps.movingPlatforms, &client->ps, Handler);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
  Scr_SetString(&ent->classname, scr_const.player);
  Scr_SetString(&ent->script_classname, scr_const.player);
  ent->clipmask = 33636369;
  ent->flags = 0i64;
  ent->flags.m_flags[0] |= 0x300u;
  EffectiveStance = PM_GetEffectiveStance(&client->ps);
  ent->r.box = *BG_Suit_GetBounds(client->ps.suitIndex, EffectiveStance);
  ent->s.animInfo.animData = 0;
  SuitDef = BG_GetSuitDef(client->ps.suitIndex);
  client->ps.viewHeightTarget = SuitDef->viewheight_stand;
  client->ps.viewHeightCurrent = (float)SuitDef->viewheight_stand;
  client->ps.viewHeightLerpTime = 0;
  *(_QWORD *)&client->ps.weapCommon.spreadOverride = 0i64;
  client->ps.weapCommon.adsStartTime = 0;
  client->ps.weapCommon.fAimSpreadMovementScale = 1.0;
  client->ps.throwbackGrenadeTimeLeft = 0;
  client->ps.throwbackGrenadeOwner = 2047;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Instance->SetWeapon(Instance, &client->ps.throwbackWeaponHandle, &NULL_WEAPON);
  client->ps.viewKickScale = 1.0;
  BG_InitPlayerstateVehicle(&client->ps);
  v14 = client->ps.stats[2];
  client->ps.stats[0] = v14;
  ent->health = v14;
  G_SetOrigin(ent, &outOrigin, 1, 1);
  client->ps.origin = outOrigin;
  client->ps.pm_flags.m_flags[0] |= 0x8000u;
  v15 = client - level.clients;
  if ( (unsigned __int64)(v15 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v15, "signed", client - level.clients) )
    __debugbreak();
  SV_Game_GetUsercmd(v15, &client->sess.cmd);
  G_ClientSP_SetClientViewAngle(ent, &outAngles);
  SV_LinkEntity(ent);
  client->ps.pm_flags.m_flags[0] |= 0x2000u;
  client->ps.pm_time = 100;
  client->latched_buttons = 0i64;
  number = client->useHoldEntity.m_info.number;
  if ( number )
  {
    m_useClass = client->useHoldEntity.m_useClass;
    if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 268, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
      __debugbreak();
    if ( client->useHoldEntity.m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 699, ASSERT_TYPE_ASSERT, "(!client->useHoldEntity.isDefined())", (const char *)&queryFormat, "!client->useHoldEntity.isDefined()") )
      __debugbreak();
  }
  G_HudOutline_AddForNewClient(ent);
  client->invulnerableEnabled = 1;
  level.clientIsSpawning = 1;
  client->damageMultiplier = 1.0;
  if ( client->deathShieldEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 710, ASSERT_TYPE_ASSERT, "(!client->deathShieldEnabled)", (const char *)&queryFormat, "!client->deathShieldEnabled") )
    __debugbreak();
  client->playerLOSCheckPos = 0i64;
  client->playerLOSCheckDir = 0i64;
  serverTime = client->ps.serverTime;
  *(_QWORD *)&client->playerLOSPosTime = 0i64;
  client->footstepWeight = 0.0;
  v19 = level.time - 200;
  client->ps.serverTime = level.time - 200;
  client->ps.serverTimeInterpolated = v19;
  commandTime = client->ps.commandTime;
  v21 = client->ps.commandTime - 200;
  if ( v21 < 200 )
    v21 = 200;
  client->ps.commandTime = v21;
  client->ps.commandTimeInterpolated = v21;
  v22 = G_GetEntityIndex(ent);
  G_ActiveSP_ClientThink(v22, 0);
  v23 = GHandler::getHandler();
  v24 = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(v24, &client->ps, &ent->s, 1, v23);
  ent->r.currentOrigin.v[0] = client->ps.origin.v[0];
  ent->r.currentOrigin.v[1] = client->ps.origin.v[1];
  ent->r.currentOrigin.v[2] = client->ps.origin.v[2];
  sentient = ent->sentient;
  sentient->oldOrigin.v[0] = client->ps.origin.v[0];
  sentient->oldOrigin.v[1] = client->ps.origin.v[1];
  sentient->oldOrigin.v[2] = client->ps.origin.v[2];
  SV_LinkEntity(ent);
  G_PhysicsCharacterProxy_AddCharacter(ent);
  G_Nav_AddPlayerRepulsor(ent->s.number);
  G_ActiveSP_ClientEndFrame(ent);
  client->ps.serverTime = serverTime;
  client->ps.serverTimeInterpolated = serverTime;
  client->ps.commandTime = commandTime;
  client->ps.commandTimeInterpolated = commandTime;
  level.clientIsSpawning = 0;
  v26 = GHandler::getHandler();
  v27 = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(v27, &client->ps, &ent->s, 1, v26);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ClientSP_SpotWouldTelefrag
==============
*/
_BOOL8 G_ClientSP_SpotWouldTelefrag(const gclient_s *client, gentity_s *spot)
{
  Bounds *Bounds; 
  float v4; 
  float v5; 
  GUtils *v6; 
  Bounds worldBounds; 

  if ( client )
    Bounds = (Bounds *)BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
  else
    Bounds = &playerBox;
  v4 = spot->r.currentOrigin.v[1];
  worldBounds.midPoint.v[0] = spot->r.currentOrigin.v[0] + Bounds->midPoint.v[0];
  v5 = spot->r.currentOrigin.v[2];
  worldBounds.midPoint.v[1] = v4 + Bounds->midPoint.v[1];
  worldBounds.midPoint.v[2] = v5 + Bounds->midPoint.v[2];
  worldBounds.halfSize = Bounds->halfSize;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils", *(_OWORD *)worldBounds.midPoint.v, *(_QWORD *)&worldBounds.halfSize.y) )
    __debugbreak();
  v6 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", (_DWORD)GUtils::ms_gUtils + 104, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
    __debugbreak();
  return GUtils::WorldBoundsWouldTelefrag(v6, &worldBounds);
}

/*
==============
G_ClientSP_Touch
==============
*/
void G_ClientSP_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  actor_s *actor; 
  EntHandle *p_pCloseEnt; 
  sentient_s *sentient; 
  float v8; 
  float v9; 
  sentient_s *v10; 
  sentient_s *v11; 
  bool v12; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v14; 
  double v15; 
  unsigned int v16; 
  unsigned __int64 eTeam; 
  __int64 v18; 
  AIActorInterface v19; 
  AIAgentInterface v20; 
  AIActorInterface *v21; 
  bitarray<224> result; 

  if ( !pSelf->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 400, ASSERT_TYPE_ASSERT, "(pSelf->sentient)", (const char *)&queryFormat, "pSelf->sentient") )
    __debugbreak();
  if ( !pSelf->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 401, ASSERT_TYPE_ASSERT, "(pSelf->client)", (const char *)&queryFormat, "pSelf->client") )
    __debugbreak();
  if ( !(unsigned int)G_ClientSP_GetPushed(pSelf, pOther) )
    pSelf->client->inControlTime = level.time;
  pSelf->client->lastTouchTime = level.time;
  actor = pOther->actor;
  if ( actor )
  {
    p_pCloseEnt = &actor->pCloseEnt;
    if ( !EntHandle::isDefined(&actor->pCloseEnt) && !actor->bDontAvoidPlayer && (actor->Physics.iTraceMask & 0x2000000) != 0 && actor->eState[actor->stateLevel] != AIS_TURRET )
    {
      if ( !pOther->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 414, ASSERT_TYPE_ASSERT, "(pOther->sentient)", (const char *)&queryFormat, "pOther->sentient") )
        __debugbreak();
      AIActorInterface::AIActorInterface(&v19);
      AIAgentInterface::AIAgentInterface(&v20);
      v20.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      if ( !actor->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 41, ASSERT_TYPE_ASSERT, "( pActor->ent )", (const char *)&queryFormat, "pActor->ent") )
        __debugbreak();
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 42, ASSERT_TYPE_ASSERT, "( pActor->sentientInfo )", (const char *)&queryFormat, "pActor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v19, actor);
      v21 = &v19;
      if ( AIScriptedInterface::AtClaimNode(&v19) )
      {
        sentient = pSelf->sentient;
        v8 = sentient->oldOrigin.v[1] - pSelf->r.currentOrigin.v[1];
        v9 = sentient->oldOrigin.v[0] - pSelf->r.currentOrigin.v[0];
        if ( (float)((float)(v8 * v8) + (float)(v9 * v9)) >= 0.0099999998 )
          return;
        Sentient_StealClaimNode(sentient, pOther->sentient);
      }
      v10 = pOther->sentient;
      v11 = pSelf->sentient;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
        __debugbreak();
      if ( level.teammode == TEAMMODE_FFA )
      {
        v12 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
        else
          AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
        v14 = *(_OWORD *)AllCombatTeamFlags->array;
        v15 = *(double *)&AllCombatTeamFlags->array[4];
        v16 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
        *(_OWORD *)result.array = v14;
        *(double *)&result.array[4] = v15;
        if ( v12 )
          result.array[0] &= ~0x8000000u;
        result.array[6] = v16 & 0xFF9FFFFF;
      }
      else
      {
        Com_Teams_GetEnemyTeamFlags(&result, v10->eTeam);
      }
      eTeam = (unsigned int)v11->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v18) = v11->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, 224) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) == 0 )
        EntHandle::setEnt(p_pCloseEnt, pSelf);
    }
  }
}

/*
==============
G_FinishSetupSpawnPoint
==============
*/
void G_FinishSetupSpawnPoint(gentity_s *ent)
{
  float v2; 
  float v3; 
  int number; 
  float v5; 
  int v6; 
  __int16 EntityHitId; 
  int v8; 
  __int64 passEntityNum; 
  __int64 contentmask; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_FinishSetupSpawnPoint");
  v2 = ent->r.currentOrigin.v[0];
  v3 = ent->r.currentOrigin.v[1];
  number = ent->s.number;
  start.v[2] = ent->r.currentOrigin.v[2];
  end.v[2] = start.v[2] + 128.0;
  start.v[0] = v2;
  start.v[1] = v3;
  end.v[0] = v2;
  end.v[1] = v3;
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, number, 33636369);
  v5 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  v6 = ent->s.number;
  end.v[2] = v5 - 256.0;
  start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  start.v[2] = v5;
  end.v[0] = start.v[0];
  end.v[1] = start.v[1];
  G_Main_TraceCapsule(&results, &start, &end, &playerBox, v6, 33636369);
  EntityHitId = Trace_GetEntityHitId(&results);
  ent->s.groundEntityNum = EntityHitId;
  g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
  v8 = ent->s.number;
  start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  start.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  G_Main_TraceCapsule(&results, &start, &start, &playerBox, v8, 33636369);
  if ( results.allsolid )
  {
    LODWORD(contentmask) = (int)ent->r.currentOrigin.v[2];
    LODWORD(passEntityNum) = (int)ent->r.currentOrigin.v[1];
    Com_PrintWarning(15, "WARNING: Spawn point entity %i is in solid at (%i, %i, %i)\n", (unsigned int)ent->s.number, (unsigned int)(int)ent->r.currentOrigin.v[0], passEntityNum, contentmask);
  }
  G_SetOrigin(ent, &start, 1, 1);
  Sys_ProfEndNamedEvent();
}

/*
==============
SelectNearestDeathmatchSpawnPoint
==============
*/
gentity_s *SelectNearestDeathmatchSpawnPoint(const vec3_t *from)
{
  gentity_s *v3; 
  gentity_s *Entity; 
  __int128 v5; 
  float v6; 
  gentity_s *v7; 

  *(float *)&_XMM7 = FLOAT_999999_0;
  v3 = NULL;
  Entity = G_Utils_FindEntity(NULL, 380, scr_const.info_player_start);
  while ( Entity )
  {
    v5 = LODWORD(Entity->r.currentOrigin.v[1]);
    *(float *)&v5 = Entity->r.currentOrigin.v[1] - from->v[1];
    v6 = Entity->r.currentOrigin.v[2] - from->v[2];
    v7 = Entity;
    *(float *)&v5 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)((float)(Entity->r.currentOrigin.v[0] - from->v[0]) * (float)(Entity->r.currentOrigin.v[0] - from->v[0]))) + (float)(v6 * v6));
    _XMM6 = v5;
    if ( *(float *)&_XMM7 <= *(float *)&v5 )
      v7 = v3;
    v3 = v7;
    Entity = G_Utils_FindEntity(Entity, 380, scr_const.info_player_start);
    __asm { vminss  xmm7, xmm6, xmm7 }
  }
  return v3;
}

/*
==============
GClientSystemSP::TeleportPlayer
==============
*/
void GClientSystemSP::TeleportPlayer(GClientSystemSP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  gclient_s *client; 
  GHandler *Handler; 
  GHandler *v9; 
  gclient_s *v10; 
  const BgHandler *v11; 
  GWeaponMap *Instance; 
  gclient_s *v13; 
  WorldUpReferenceFrame v14; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 756, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_client_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  client = player->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, &player->client->ps, Handler);
  WorldUpReferenceFrame::AddUpContribution(&v14, 1.0, &player->client->ps.origin);
  player->client->ps.eFlags.m_flags[0] ^= 4u;
  v9 = GHandler::getHandler();
  v10 = player->client;
  v11 = v9;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v10->ps, &player->s, 1, v11);
  v13 = player->client;
  player->r.currentOrigin.v[0] = v13->ps.origin.v[0];
  player->r.currentOrigin.v[1] = v13->ps.origin.v[1];
  player->r.currentOrigin.v[2] = v13->ps.origin.v[2];
  G_ClientSP_SetClientViewAngle(player, angles);
  if ( !player->tagInfo )
    player->r.currentAngles.v[0] = 0.0;
  SV_LinkEntity(player);
}

