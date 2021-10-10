/*
==============
G_ClientMP_Migrate
==============
*/

void __fastcall G_ClientMP_Migrate(int clientNum)
{
  ?G_ClientMP_Migrate@@YAXH@Z(clientNum);
}

/*
==============
G_ClientMP_Disconnect
==============
*/

void __fastcall G_ClientMP_Disconnect(int clientNum, const char *reason)
{
  ?G_ClientMP_Disconnect@@YAXHPEBD@Z(clientNum, reason);
}

/*
==============
GClientSystemMP::UpdatePrioritySnapDebugInfo
==============
*/

void __fastcall GClientSystemMP::UpdatePrioritySnapDebugInfo(GClientSystemMP *this)
{
  ?UpdatePrioritySnapDebugInfo@GClientSystemMP@@QEAAXXZ(this);
}

/*
==============
G_ClientMP_IsPlaying
==============
*/

int __fastcall G_ClientMP_IsPlaying(const gentity_s *ent)
{
  return ?G_ClientMP_IsPlaying@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
G_ClientMP_Connect
==============
*/

const char *__fastcall G_ClientMP_Connect(int clientNum, unsigned int scriptPersId)
{
  return ?G_ClientMP_Connect@@YAPEBDHI@Z(clientNum, scriptPersId);
}

/*
==============
G_ClientMP_ClientStateTeamChanged
==============
*/

void __fastcall G_ClientMP_ClientStateTeamChanged(int clientNum)
{
  ?G_ClientMP_ClientStateTeamChanged@@YAXH@Z(clientNum);
}

/*
==============
G_ClientMP_UserinfoChanged
==============
*/

void __fastcall G_ClientMP_UserinfoChanged(int clientNum)
{
  ?G_ClientMP_UserinfoChanged@@YAXH@Z(clientNum);
}

/*
==============
BG_InitVehicleViewFlag
==============
*/

void __fastcall BG_InitVehicleViewFlag(playerState_s *ps)
{
  ?BG_InitVehicleViewFlag@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
GClientSystemMP::TeleportPlayer
==============
*/

void __fastcall GClientSystemMP::TeleportPlayer(GClientSystemMP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  ?TeleportPlayer@GClientSystemMP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@1@Z(this, player, origin, angles);
}

/*
==============
G_ClientMP_SetClientViewAngles
==============
*/

void __fastcall G_ClientMP_SetClientViewAngles(gentity_s *ent, const vec3_t *angle)
{
  ?G_ClientMP_SetClientViewAngles@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(ent, angle);
}

/*
==============
GClientSystemMP::LogPrioritySnapDebugInfo
==============
*/

void __fastcall GClientSystemMP::LogPrioritySnapDebugInfo(GClientSystemMP *this, unsigned int clientNum)
{
  ?LogPrioritySnapDebugInfo@GClientSystemMP@@QEAAXI@Z(this, clientNum);
}

/*
==============
G_ClientMP_SetClientOrigin
==============
*/

void __fastcall G_ClientMP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  ?G_ClientMP_SetClientOrigin@@YAXPEAUgentity_s@@AEBTvec3_t@@HH@Z(ent, origin, zOffset, teleport);
}

/*
==============
G_ActiveMP_ClientSpawn
==============
*/

void __fastcall G_ActiveMP_ClientSpawn(gentity_s *ent, const vec3_t *spawn_origin, const vec3_t *spawn_angles)
{
  ?G_ActiveMP_ClientSpawn@@YAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, spawn_origin, spawn_angles);
}

/*
==============
G_ClientMP_OnSameTeam
==============
*/

int __fastcall G_ClientMP_OnSameTeam(const gentity_s *ent1, const gentity_s *ent2)
{
  return ?G_ClientMP_OnSameTeam@@YAHPEBUgentity_s@@0@Z(ent1, ent2);
}

/*
==============
G_ClientMP_Begin
==============
*/

void __fastcall G_ClientMP_Begin(int clientNum)
{
  ?G_ClientMP_Begin@@YAXH@Z(clientNum);
}

/*
==============
BG_InitVehicleViewFlag
==============
*/
void BG_InitVehicleViewFlag(playerState_s *ps)
{
  const dvar_t *v1; 
  unsigned int v3; 

  v1 = DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default;
  if ( !DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_veh_cam_3rdMode_default") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = ps->pm_flags.m_flags[1];
  if ( v1->current.enabled )
    ps->pm_flags.m_flags[1] = v3 | 0x1000;
  else
    ps->pm_flags.m_flags[1] = v3 & 0xFFFFEFFF;
}

/*
==============
G_ActiveMP_ClientSpawn
==============
*/
void G_ActiveMP_ClientSpawn(gentity_s *ent, const vec3_t *spawn_origin, const vec3_t *spawn_angles)
{
  __int16 EntityIndex; 
  __int64 v5; 
  gclient_s *client; 
  __int64 v7; 
  unsigned __int64 viewlocked_entNum; 
  gentity_s *gentities; 
  unsigned __int16 number; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  gentity_s *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  OmnvarData *rxvOmnvars; 
  char *v20; 
  OmnvarData *v21; 
  __int64 v22; 
  __int64 v23; 
  GAntiLagMP *AntiLagMP; 
  GWeaponMap *Instance; 
  char *v26; 
  int v27; 
  signed __int64 v28; 
  GWeaponMap *v29; 
  const SuitDef *SuitDef; 
  const char *v31; 
  const char *v32; 
  SvClient *CommonClient; 
  const dvar_t *v34; 
  int serverTime; 
  int commandTime; 
  int v37; 
  int v38; 
  const dvar_t *v39; 
  const dvar_t *v40; 
  int v41; 
  gclient_s *v42; 
  __int64 v43; 
  __int64 v44; 
  int outTaskFlags; 
  vec3_t *origin; 
  vec3_t *angle; 
  __int64 v48; 
  int v49; 
  const char *v50; 
  char v51[640]; 
  char Src[2464]; 
  GClientTaskQueue taskQueue; 

  v48 = -2i64;
  angle = (vec3_t *)spawn_angles;
  origin = (vec3_t *)spawn_origin;
  v49 = 28;
  v50 = "SVPROF_CLIENT_SPAWNED";
  SV_Profile_BeginEvent(SVPROF_CLIENT_SPAWNED);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_CLIENT_SPAWNED");
  EntityIndex = G_GetEntityIndex(ent);
  v5 = EntityIndex;
  client = ent->client;
  v7 = EntityIndex;
  if ( client != &level.clients[EntityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 589, ASSERT_TYPE_ASSERT, "(ent->client == &level.clients[clientNum])", (const char *)&queryFormat, "ent->client == &level.clients[clientNum]") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v43) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 590, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( clientNum ))", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0x22u) && BG_IsTurretActive(&client->ps) )
  {
    if ( client->ps.clientNum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 595, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
      __debugbreak();
    if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    viewlocked_entNum = client->ps.viewlocked_entNum;
    gentities = level.gentities;
    number = level.gentities[viewlocked_entNum].r.ownerNum.number;
    if ( !number )
      goto LABEL_128;
    v11 = number;
    v12 = number - 1;
    if ( v12 >= 0x800 )
    {
      LODWORD(v44) = 2048;
      LODWORD(v43) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v13 = v11 - 1;
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] )
    {
      LODWORD(v44) = gentities[viewlocked_entNum].r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v44) )
        __debugbreak();
    }
    if ( !gentities[viewlocked_entNum].r.ownerNum.number )
    {
LABEL_128:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 597, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined())", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v14 = client->ps.viewlocked_entNum;
    v15 = level.gentities;
    v16 = level.gentities[v14].r.ownerNum.number;
    if ( (unsigned int)(v16 - 1) >= 0x7FF )
    {
      LODWORD(v44) = 2047;
      LODWORD(v43) = v16 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    v17 = v15[v14].r.ownerNum.number;
    if ( (unsigned int)(v17 - 1) >= 0x800 )
    {
      LODWORD(v44) = 2048;
      LODWORD(v43) = v17 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v18 = v17 - 1;
    if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v18] )
    {
      LODWORD(v44) = v15[v14].r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v44) )
        __debugbreak();
    }
    if ( &g_entities[v15[v14].r.ownerNum.number - 1] != ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 598, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent)", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent") )
      __debugbreak();
    G_Turret_ClientStopUsingTurret(&level.gentities[client->ps.viewlocked_entNum]);
  }
  BG_ClearLinkedToAnimFlags(&client->ps);
  BG_SetOnWallAnimFlag(&client->ps, 0);
  G_EntUnlink(ent);
  if ( ent->r.isLinked )
    SV_UnlinkEntity(ent);
  ent->s.groundEntityNum = 2047;
  ent->s.surfType = 7;
  Scr_SetString(&ent->classname, scr_const.player);
  Scr_SetString(&ent->script_classname, scr_const.player);
  ent->clipmask = 33636369;
  ent->r.svFlags |= 1u;
  ent->handler = 15;
  ent->flags = 0i64;
  ent->flags.m_flags[0] |= 0x200u;
  ent->r.box = *BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( SV_BotIsBotEnt(ent) )
    SV_BotSetAvoidanceRadius(ent, ent->r.box.halfSize.v[0]);
  ent->s.animInfo.animData = 0;
  memcpy_0(Src, &client->sess, 0x998ui64);
  rxvOmnvars = client->ps.rxvOmnvars;
  v20 = v51;
  v21 = client->ps.rxvOmnvars;
  v22 = 5i64;
  v23 = 5i64;
  do
  {
    *(__m256i *)v20 = *(__m256i *)&v21->timeModified;
    *((__m256i *)v20 + 1) = *(__m256i *)&v21[4].timeModified;
    *((__m256i *)v20 + 2) = *(__m256i *)&v21[8].timeModified;
    *((_OWORD *)v20 + 6) = *(_OWORD *)&v21[12].timeModified;
    v20 += 128;
    *((_OWORD *)v20 - 1) = *(_OWORD *)&v21[14].timeModified;
    v21 += 16;
    --v23;
  }
  while ( v23 );
  memcpy_0(&taskQueue, &client->markState, 0xB3Cui64);
  outTaskFlags = client->lastServerTime;
  GSaveMP_ScrFreeClientFields(client);
  G_Client_Clear(v5, client);
  GMovingPlatforms::InitClient(ent, &client->movingPlatformHandle);
  GPlayerTraceInfo::Init(ent);
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::ClearCharacterHistory(AntiLagMP, v5);
  BG_InitPlayerState_OnSpawn(&client->ps, v5, 0);
  G_HeadIcons_SetPlayerDirty(v5);
  G_DefaultViewAngleClampGoal(&client->link_viewClamp);
  G_SnapToViewAngleClampGoal(&client->link_viewClamp);
  memcpy_0(&client->sess, Src, sizeof(client->sess));
  Instance = GWeaponMap::GetInstance();
  BG_InitClientWeapons(Instance, &client->sess.cs);
  v26 = v51;
  do
  {
    *(__m256i *)&rxvOmnvars->timeModified = *(__m256i *)v26;
    *(__m256i *)&rxvOmnvars[4].timeModified = *((__m256i *)v26 + 1);
    *(__m256i *)&rxvOmnvars[8].timeModified = *((__m256i *)v26 + 2);
    *(_OWORD *)&rxvOmnvars[12].timeModified = *((_OWORD *)v26 + 6);
    rxvOmnvars += 16;
    *(_OWORD *)&rxvOmnvars[-2].timeModified = *((_OWORD *)v26 + 7);
    v26 += 128;
    --v22;
  }
  while ( v22 );
  memcpy_0(&client->markState, &taskQueue, sizeof(client->markState));
  client->lastServerTime = outTaskFlags;
  client->spectatorClient = -1;
  client->cycleSpectatorClient = -1;
  client->footstepWeight = 0.0;
  v27 = client->sess.savedSpawnCount + 1;
  client->sess.savedSpawnCount = v27;
  if ( v27 >= 256 )
  {
    client->sess.savedSpawnCount = 0;
    v27 = 0;
  }
  client->ps.stats[3] = v27;
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 694, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  if ( client->sess.maxHealth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 695, ASSERT_TYPE_ASSERT, "( 0 ) < ( client->sess.maxHealth )", "%s < %s\n\t%i, %i", "0", "client->sess.maxHealth", 0i64, client->sess.maxHealth) )
    __debugbreak();
  client->ps.stats[2] = client->sess.maxHealth;
  client->ps.eFlags.m_flags[0] = client->sess.eFlags.m_flags[0];
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0x10u);
  client->sess.cs.clientIndex = v5;
  client->sess.cs.isBot = SV_BotIsBotEnt(ent) != 0;
  v28 = client - level.clients;
  if ( (unsigned __int64)(v28 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v28, "signed", client - level.clients) )
    __debugbreak();
  SV_Game_GetUsercmd(v28, &client->sess.cmd);
  client->sess.cmd.buttons &= 0xFFFFFFFFFFFFFF3Fui64;
  v29 = GWeaponMap::GetInstance();
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v29->SetWeapon(v29, &client->ps.throwbackWeaponHandle, &NULL_WEAPON);
  G_SetOrigin(ent, origin, 1, 1);
  client->ps.origin = *origin;
  G_ClientMP_SetClientViewAngles(ent, angle);
  if ( client->latched_buttons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 715, ASSERT_TYPE_ASSERT, "(!client->latched_buttons)", (const char *)&queryFormat, "!client->latched_buttons") )
    __debugbreak();
  if ( client->buttonsSinceLastFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 716, ASSERT_TYPE_ASSERT, "(!client->buttonsSinceLastFrame)", (const char *)&queryFormat, "!client->buttonsSinceLastFrame") )
    __debugbreak();
  client->buttons = client->sess.cmd.buttons;
  G_HudOutline_AddForNewClient(ent);
  level.clientIsSpawning = 1;
  if ( !ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 728, ASSERT_TYPE_ASSERT, "(ent->sentient != nullptr)", (const char *)&queryFormat, "ent->sentient != nullptr") )
    __debugbreak();
  ent->sentient->lastSpawnTime = level.time;
  client->ps.movementDir = BG_DegreesToMovementDir(ent->client->ps.viewangles.v[1]);
  G_Client_SetSuit(ent, &client->ps, client->sess.cs.suitIndex);
  if ( client->ps.suitIndex != client->sess.cs.suitIndex )
  {
    LODWORD(v44) = client->sess.cs.suitIndex;
    LODWORD(v43) = client->ps.suitIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 735, ASSERT_TYPE_ASSERT, "( client->ps.suitIndex ) == ( client->sess.cs.suitIndex )", "client->ps.suitIndex == client->sess.cs.suitIndex\n\t%i, %i", v43, v44) )
      __debugbreak();
  }
  SuitDef = BG_GetSuitDef(client->ps.suitIndex);
  client->ps.viewHeightTarget = SuitDef->viewheight_stand;
  client->ps.viewHeightCurrent = (float)SuitDef->viewheight_stand;
  v31 = j_va("%c", 106i64);
  v32 = v31;
  if ( (_DWORD)v5 == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v31);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v32);
  }
  G_CharacterStreaming_ClearNextSpectateViewModels(v5);
  G_WeaponStreaming_ClearNextSpectateViewWeapons(v5);
  G_WorldStreaming_ClearNextStreamView(v5, MOVEMENT);
  v34 = DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default;
  if ( !DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_veh_cam_3rdMode_default") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
    client->ps.pm_flags.m_flags[1] |= 0x1000u;
  else
    client->ps.pm_flags.m_flags[1] &= ~0x1000u;
  BG_ClearViewState(&client->playerViewState);
  serverTime = client->sess.cmd.serverTime;
  commandTime = client->sess.cmd.commandTime;
  client->sess.cmd.serverTime = level.time;
  v37 = level.time - 100;
  client->ps.serverTime = level.time - 100;
  client->ps.serverTimeInterpolated = v37;
  v38 = 100;
  if ( commandTime > 100 )
    v38 = commandTime;
  client->sess.cmd.commandTime = v38;
  client->ps.commandTime = commandTime - 100;
  client->ps.commandTimeInterpolated = commandTime - 100;
  client->ps.inputTime = 0;
  client->ps.inputTimeInterpolated = 0;
  if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
  {
    *(_QWORD *)&client->ps.animState.animSet = 0i64;
    *(_QWORD *)&client->ps.animState.slot[0].packedAnim = 0i64;
    client->ps.animState.slot[1].packedAnim = 0;
    client->ps.animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(client->ps.suitIndex);
  }
  G_Execution_Clear(ent);
  G_ActiveMP_ClientEndFrame(ent);
  v39 = DVARBOOL_g_spectateOrderFixActive;
  if ( !DVARBOOL_g_spectateOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateOrderFixActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( v39->current.enabled )
    G_ActiveMP_ClientEndFrame_Spectator(ent);
  if ( ent->s.eType == ET_PLAYER )
  {
    G_PhysicsCharacterProxy_AddCharacter(ent);
    v40 = DVARBOOL_g_DisablePlayerRepulsors;
    if ( !DVARBOOL_g_DisablePlayerRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerRepulsors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    if ( !v40->current.enabled && !Nav_FindRepulsorByEntNum(ent->s.number) )
      G_Nav_AddPlayerRepulsor(ent->s.number);
  }
  v41 = G_GetEntityIndex(ent);
  v42 = ent->client;
  GClientTaskQueue::Init(&taskQueue, v41);
  outTaskFlags = 0;
  G_ActiveMP_ClientThinkInternal(ent, &v42->sess.cmd, &taskQueue, &outTaskFlags);
  if ( outTaskFlags )
    G_ActiveMP_ProcessClientThinkUpdatePreTasks(v41, outTaskFlags);
  GClientTaskQueue::ExecuteTasks(&taskQueue);
  client->sess.cmd.serverTime = serverTime;
  client->sess.cmd.commandTime = commandTime;
  ent->r.eventTime = level.time;
  level.clientIsSpawning = 0;
  GAntiLagMP::InvalidateArchivedCharacterPositions(v5);
  SV_ClientMP_ClearExtrapolation(v5);
  client->ps.lastSpawnTime = level.time;
  SV_Profile_EndEvent(SVPROF_CLIENT_SPAWNED);
  if ( "SVPROF_CLIENT_SPAWNED" )
    Sys_ProfEndNamedEvent();
}

/*
==============
G_ClientMP_Begin
==============
*/
void G_ClientMP_Begin(int clientNum)
{
  __int64 v1; 
  gclient_s *v2; 
  OmnvarClientData *v3; 

  v1 = clientNum;
  v2 = &level.clients[clientNum];
  v2->sess.connected = CON_CONNECTED;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 501, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
    __debugbreak();
  v2->ps.pm_type = 5;
  BG_Omnvar_LoadPlayerstateDefaults(v2->sess.rxvOmnvars);
  BG_Omnvar_LoadPlayerstateDefaults(v2->ps.rxvOmnvars);
  v2->sess.cs.team = SV_ClientMP_GetAssignedTeam(v1);
  G_ClientMP_ClientStateTeamChanged(v1);
  v2->sess.cs.squadIndex = SV_ClientMP_GetAssignedSquad(v1);
  G_HeadIcons_SetPlayerDirty(v1);
  v3 = &level.clientOmnvars[v1];
  v2->sess.omnvars = (OmnvarData *)v3;
  BG_Omnvar_LoadClientscopeDefaults(v3->omnvars);
  G_MainMP_CalculateRanks();
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    G_FrontEndScene_UpdateClientState();
  GScr_Notify(&g_entities[v1], scr_const.begin, 0);
}

/*
==============
G_ClientMP_ClientStateTeamChanged
==============
*/
void G_ClientMP_ClientStateTeamChanged(int clientNum)
{
  __int64 v1; 
  __int64 v2; 
  GUtils *v3; 
  gentity_s *v4; 
  _DWORD *v5; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v2 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v3 = GUtils::ms_gUtils;
  v4 = &g_entities[v1];
  v5 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 224i64))(v2, (unsigned int)v1);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 195, ASSERT_TYPE_ASSERT, "( ci )", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !v5[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 196, ASSERT_TYPE_ASSERT, "( ci->infoValid )", (const char *)&queryFormat, "ci->infoValid") )
    __debugbreak();
  if ( *v5 != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 197, ASSERT_TYPE_ASSERT, "( ci->entityNum == clientNum )", (const char *)&queryFormat, "ci->entityNum == clientNum") )
    __debugbreak();
  if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 198, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v5[3] = v3->GetEntityTeam(v3, v4);
}

/*
==============
G_ClientMP_Connect
==============
*/
const char *G_ClientMP_Connect(int clientNum, unsigned int scriptPersId)
{
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  gclient_s *v6; 
  GAntiLagMP *AntiLagMP; 
  __int64 v8; 
  __int64 v9; 
  int commandTime; 
  double v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const char *v14; 
  const dvar_t *v15; 
  __int64 integer64; 
  __int64 v17; 
  __int64 v18; 
  char v19; 
  char v20; 
  sentient_s *v22; 
  const char *v23; 
  __int64 v25; 
  char buffer[1024]; 

  v3 = clientNum;
  if ( !scriptPersId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 357, ASSERT_TYPE_ASSERT, "( scriptPersId )", (const char *)&queryFormat, "scriptPersId") )
    __debugbreak();
  if ( (unsigned int)v3 >= level.maxclients )
  {
    LODWORD(v25) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v25, level.maxclients) )
      __debugbreak();
  }
  SV_Profile_BeginEvent(SVPROF_CLIENT_CONNECT);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v4 = *(_QWORD *)&GStatic::ms_gameStatics;
  v5 = &g_entities[v3];
  v6 = &level.clients[v3];
  G_Client_Clear(v3, v6);
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::ClearCharacterHistory(AntiLagMP, v3);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 224i64))(v4, (unsigned int)v3);
  v9 = *(_QWORD *)(v8 + 2040);
  memset_0((void *)(v8 + 12), 0, 0x7ECui64);
  memset_0((void *)(v8 + 2048), 0, 0x31C8ui64);
  *(_QWORD *)(v8 + 2040) = v9;
  *(_DWORD *)v8 = v3;
  *(_DWORD *)(v8 + 4) = 1;
  *(_DWORD *)(v8 + 8) = 1;
  v6->sess.connected = CON_CONNECTING;
  v6->sess.scriptPersId = scriptPersId;
  v6->sess.cs.team = TEAM_SPECTATOR;
  v6->sess.sessionState = SESS_STATE_SPECTATOR;
  v6->spectatorClient = -1;
  v6->cycleSpectatorClient = -1;
  v6->sess.forceSpectatorClient = -1;
  v6->sess.killCamEntity = -1;
  v6->sess.killCamLookAtEntity = v3;
  v6->sess.killCamFlags = 0;
  v6->sess.mlgSpectatingTeam = TEAM_TWO;
  v6->sess.hudData.data = 0;
  v6->sess.maxHealth = 1;
  v6->ps.stats[2] = 1;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v5);
  v5->handler = 0;
  v5->client = v6;
  v5->s.clientNum = v3;
  v5->s.surfType = 7;
  v6->sess.cs.clientIndex = v3;
  v6->sess.moveSpeedScaleMultiplier = 1.0;
  if ( v5->r.svFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(!ent->r.svFlags)", (const char *)&queryFormat, "!ent->r.svFlags") )
    __debugbreak();
  GMovingPlatforms::InitClient(v5, &v6->movingPlatformHandle);
  GPlayerTraceInfo::Init(v5);
  BG_Customization_SetDefaultCustomization(&v6->sess.cs.customization);
  G_CharacterStreaming_ClientConnect(v3);
  G_WeaponStreaming_ClearClientRequests(v3);
  G_WorldStreaming_ClientConnect(v3);
  G_HeadIcons_SetPlayerDirty(v3);
  BG_InitPlayerState_OnConnect(&v6->ps, v3);
  v6->ps.stats[2] = v6->sess.maxHealth;
  SV_Game_GetUsercmd(v3, &v6->sess.cmd);
  if ( v6 == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = v6->sess.cmd.commandTime;
  v6->ps.commandTime = commandTime;
  v6->ps.commandTimeInterpolated = commandTime;
  v6->ps.inputTime = 0;
  v6->ps.inputTimeInterpolated = 0;
  v11 = MSG_UnpackUnsignedFloat(v6->ps.moveSpeedScaleMultiplier, 5.0, 0xCu);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6->sess.moveSpeedScaleMultiplier - *(float *)&v11) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(I_fabs( client->sess.moveSpeedScaleMultiplier - psMoveSpeedScale ) < 0.001f)", (const char *)&queryFormat, "I_fabs( client->sess.moveSpeedScaleMultiplier - psMoveSpeedScale ) < EQUAL_EPSILON") )
    __debugbreak();
  G_ClientMP_UserinfoChanged(v3);
  if ( !v6->sess.localClient )
  {
    v12 = DVARSTR_g_password;
    if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( *(_BYTE *)v12->current.integer64 )
    {
      v13 = DVARSTR_g_password;
      if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( I_stricmp(v13->current.string, "none") )
      {
        SV_ClientMP_GetUserinfo(v3, buffer, 1024);
        v14 = Info_ValueForKey(buffer, "password");
        v15 = DVARSTR_g_password;
        if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        integer64 = v15->current.integer64;
        v17 = 0x7FFFFFFFi64;
        if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v18 = integer64 - (_QWORD)v14;
        do
        {
          v19 = v14[v18];
          v20 = *v14++;
          if ( !v17-- )
            break;
          if ( v19 != v20 )
          {
            G_FreeEntity(v5);
            v23 = "GAME/INVALIDPASSWORD";
            goto LABEL_49;
          }
        }
        while ( v19 );
      }
    }
  }
  v22 = Sentient_Alloc(ST_PLAYER);
  if ( !v22 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FAD050, 383i64);
  v5->sentient = v22;
  Com_Printf(131087, "Sentient %zd allocated for player %d\n", v22 - level.sentients, (unsigned int)v5->s.number);
  Sentient_Init(v5->sentient, v5, TEAM_ZERO);
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    G_FrontEndScene_UpdateClientState();
  Scr_PlayerConnect(v5);
  G_MainMP_CalculateRanks();
  v23 = NULL;
LABEL_49:
  SV_Profile_EndEvent(SVPROF_CLIENT_CONNECT);
  return v23;
}

/*
==============
G_ClientMP_Disconnect
==============
*/
void G_ClientMP_Disconnect(int clientNum, const char *reason)
{
  __int64 v2; 
  __int64 v4; 
  gclient_s *v5; 
  gentity_s *v6; 
  scrContext_t *v7; 
  int maxclients; 
  int v9; 
  __int64 v10; 
  EntHandle *p_ownerNum; 
  unsigned __int16 number; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  EntHandle *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v22; 
  int v23; 

  v2 = clientNum;
  v4 = clientNum;
  v5 = &level.clients[clientNum];
  v6 = &g_entities[v4];
  if ( (unsigned int)clientNum >= 0x800 )
  {
    v23 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", clientNum, v23) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 839, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( clientNum ))", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  v7 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v7, 1u) )
  {
    Scr_AddString(v7, "disconnect");
    Scr_AddString(v7, "-1");
    GScr_Notify(v6, scr_const.menuresponse, 2u);
  }
  maxclients = level.maxclients;
  v9 = 0;
  if ( level.maxclients > 0 )
  {
    v10 = 0i64;
    do
    {
      if ( level.clients[v10].sess.connected && level.clients[v10].sess.sessionState == SESS_STATE_SPECTATOR && level.clients[v10].spectatorClient == (_DWORD)v2 )
      {
        G_CmdsMP_StopSpectating(&g_entities[v9], 1, 0);
        level.clients[v10].sess.archiveTime = 0;
        level.clients[v10].ps.deltaTime = 0;
        maxclients = level.maxclients;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < maxclients );
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v5->ps.otherFlags, ACTIVE, 0x22u) && BG_IsTurretActive(&v5->ps) )
  {
    if ( v5->ps.clientNum != v6->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 867, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
      __debugbreak();
    if ( v5->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 868, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    p_ownerNum = &level.gentities[v5->ps.viewlocked_entNum].r.ownerNum;
    number = p_ownerNum->number;
    if ( !p_ownerNum->number )
      goto LABEL_78;
    v13 = number;
    v14 = number - 1;
    if ( v14 >= 0x800 )
    {
      LODWORD(v22) = 2048;
      LODWORD(v20) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v15 = v13 - 1;
    if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v15] )
    {
      LODWORD(v22) = p_ownerNum->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v22) )
        __debugbreak();
    }
    if ( !p_ownerNum->number )
    {
LABEL_78:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 869, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined())", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v16 = &level.gentities[v5->ps.viewlocked_entNum].r.ownerNum;
    v17 = v16->number;
    if ( (unsigned int)(v17 - 1) >= 0x7FF )
    {
      LODWORD(v22) = 2047;
      LODWORD(v20) = v17 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    v18 = v16->number;
    if ( (unsigned int)(v18 - 1) >= 0x800 )
    {
      LODWORD(v22) = 2048;
      LODWORD(v20) = v18 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v22) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v19 = v18 - 1;
    if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v19] )
    {
      LODWORD(v22) = v16->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v22) )
        __debugbreak();
    }
    if ( &g_entities[v16->number - 1] != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 870, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent)", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent") )
      __debugbreak();
    G_Turret_ClientStopUsingTurret(&level.gentities[v5->ps.viewlocked_entNum]);
  }
  BG_ClearLinkedToAnimFlags(&v5->ps);
  BG_SetOnWallAnimFlag(&v5->ps, 0);
  G_CharacterStreaming_ClientDisconnect(v2);
  G_WeaponStreaming_ClearClientRequests(v2);
  G_WorldStreaming_ClientDisconnect(v2);
  G_HudOutline_FreeForClient(v6);
  G_ClearDialogQueue(v6);
  if ( v6->client != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 890, ASSERT_TYPE_ASSERT, "(ent->client == client)", (const char *)&queryFormat, "ent->client == client") )
    __debugbreak();
  G_HudElem_ClientDisconnect(v6);
  if ( Scr_IsSystemActive(v7, 1u) )
    Scr_PlayerDisconnect(v6, reason);
  G_PhysicsCharacterProxy_RemoveCharacter(v6);
  G_Nav_DestroyPlayerRepulsor(v6->s.number);
  G_Client_ClearPlayerWeapons(v5);
  G_Vehicle_ClearPlayerVehicles(v2, &v5->ps);
  G_FreeEntity(v6);
  v6->client = v5;
  v5->sess.connected = CON_DISCONNECTED;
  memset_0(&v5->sess.cs, 0, sizeof(v5->sess.cs));
  G_MainMP_CalculateRanks();
  if ( v6->client != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 919, ASSERT_TYPE_ASSERT, "(ent->client == client)", (const char *)&queryFormat, "ent->client == client") )
    __debugbreak();
}

/*
==============
G_ClientMP_IsPlaying
==============
*/
_BOOL8 G_ClientMP_IsPlaying(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 925, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 926, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( ent->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 927, ASSERT_TYPE_ASSERT, "( ent->client->sess.connected != CON_DISCONNECTED )", (const char *)&queryFormat, "ent->client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  return ent->client->sess.sessionState == SESS_STATE_PLAYING;
}

/*
==============
G_ClientMP_Migrate
==============
*/
void G_ClientMP_Migrate(int clientNum)
{
  __int64 v1; 

  v1 = clientNum;
  G_MainMP_CalculateRanks();
  Scr_PlayerMigrated(&g_entities[v1]);
}

/*
==============
G_ClientMP_OnSameTeam
==============
*/
_BOOL8 G_ClientMP_OnSameTeam(const gentity_s *ent1, const gentity_s *ent2)
{
  gclient_s *client; 
  gclient_s *v3; 
  team_t team; 
  _BOOL8 result; 

  client = ent1->client;
  result = 0;
  if ( client )
  {
    v3 = ent2->client;
    if ( v3 )
    {
      team = client->sess.cs.team;
      if ( team )
      {
        if ( team == v3->sess.cs.team )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
G_ClientMP_SetClientOrigin
==============
*/
void G_ClientMP_SetClientOrigin(gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  GHandler *v10; 
  GWeaponMap *Instance; 
  WorldUpReferenceFrame v12; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 149, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !G_Utils_IsClientOrAgent(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 150, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrAgent( ent ) )", (const char *)&queryFormat, "G_Utils_IsClientOrAgent( ent )") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 153, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EntityPlayerState->origin.v[0] = origin->v[0];
  EntityPlayerState->origin.v[1] = origin->v[1];
  EntityPlayerState->origin.v[2] = origin->v[2];
  if ( zOffset )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, EntityPlayerState, Handler);
    WorldUpReferenceFrame::AddUpContribution(&v12, 1.0, &EntityPlayerState->origin);
  }
  if ( teleport )
    EntityPlayerState->eFlags.m_flags[0] ^= 4u;
  v10 = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, EntityPlayerState, &ent->s, 1, v10);
  ent->r.currentOrigin.v[0] = EntityPlayerState->origin.v[0];
  ent->r.currentOrigin.v[1] = EntityPlayerState->origin.v[1];
  ent->r.currentOrigin.v[2] = EntityPlayerState->origin.v[2];
  if ( ent->client )
    SV_ClientMP_ClearExtrapolation(EntityPlayerState->clientNum);
}

/*
==============
G_ClientMP_SetClientViewAngles
==============
*/
void G_ClientMP_SetClientViewAngles(gentity_s *ent, const vec3_t *angle)
{
  float v3; 
  float v4; 
  float v5; 
  playerState_s *EntityPlayerState; 
  usercmd_s *EntityUserCmd; 
  double v8; 
  const dvar_t *v9; 
  float v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  bool v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v20; 
  float v21; 
  double v22; 
  __int128 proneTorsoPitch_low; 
  __int128 v26; 
  float proneTorsoPitch; 
  float v33; 
  base_vec3_t<int> *p_angles; 
  unsigned int v36; 
  float *v; 
  signed __int64 v38; 
  char *v39; 
  bool v40; 
  double v42; 
  float v45; 
  float v48; 
  __int64 v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 

  v3 = angle->v[2];
  v4 = angle->v[0];
  v5 = angle->v[1];
  v52 = angle->v[0];
  v53 = v5;
  v51 = v3;
  v54 = v3;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 61, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !G_Utils_IsClientOrAgent(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrAgent( ent ) )", (const char *)&queryFormat, "G_Utils_IsClientOrAgent( ent )") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 65, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EntityUserCmd = G_GetEntityUserCmd(ent);
  if ( !EntityUserCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 0) && !BG_IsTurretActive(EntityPlayerState) && (EntityPlayerState->linkFlags.m_flags[0] & 4) == 0 )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
        __debugbreak();
    }
    else
    {
      v8 = AngleDelta(EntityPlayerState->proneDirection, v5);
      v9 = DCONST_DVARFLT_bg_prone_yawcap;
      _XMM7 = 0i64;
      __asm { vroundss xmm2, xmm7, xmm1, 1 }
      v12 = (float)((float)(*(float *)&v8 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v12 > v9->current.value )
        goto LABEL_28;
      v13 = DCONST_DVARFLT_bg_prone_yawcap;
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v12 < COERCE_FLOAT(v13->current.integer ^ _xmm) )
      {
LABEL_28:
        v14 = DCONST_DVARFLT_bg_prone_yawcap;
        if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        v15 = v12 <= v14->current.value;
        v16 = DCONST_DVARFLT_bg_prone_yawcap;
        if ( v15 )
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          v17 = v12 + v16->current.value;
        }
        else
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          v17 = v12 - v16->current.value;
        }
        __asm
        {
          vroundss xmm1, xmm7, xmm0, 1
          vroundss xmm3, xmm7, xmm2, 1
        }
        EntityPlayerState->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        v20 = DCONST_DVARFLT_bg_prone_yawcap;
        if ( v17 <= 0.0 )
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v20);
          v21 = v20->current.value + EntityPlayerState->proneDirection;
        }
        else
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v20);
          v21 = EntityPlayerState->proneDirection - v20->current.value;
        }
        v22 = AngleNormalize360(v21);
        v53 = *(float *)&v22;
        v5 = *(float *)&v22;
      }
      proneTorsoPitch_low = LODWORD(EntityPlayerState->proneTorsoPitch);
      *(double *)&proneTorsoPitch_low = AngleDelta(*(const float *)&proneTorsoPitch_low, v4);
      _XMM6 = LODWORD(FLOAT_45_0);
      v26 = proneTorsoPitch_low;
      __asm { vroundss xmm3, xmm7, xmm0, 1 }
      *(float *)&v26 = (float)((float)(*(float *)&proneTorsoPitch_low * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( *(float *)&v26 > 45.0 || *(float *)&v26 < -45.0 )
      {
        *(float *)&v26 = *(float *)&v26 + 45.0;
        _XMM2 = v26;
        __asm
        {
          vcmpltss xmm0, xmm6, xmm0
          vblendvps xmm5, xmm2, xmm1, xmm0
          vroundss xmm1, xmm7, xmm0, 1
          vroundss xmm3, xmm7, xmm2, 1
        }
        EntityPlayerState->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        proneTorsoPitch = EntityPlayerState->proneTorsoPitch;
        if ( *(float *)&_XMM5 <= 0.0 )
          v33 = (float)(proneTorsoPitch * 0.0027777778) + 0.125;
        else
          v33 = (float)(proneTorsoPitch - 45.0) * 0.0027777778;
        __asm { vroundss xmm3, xmm7, xmm2, 1 }
        v4 = (float)(v33 - *(float *)&_XMM3) * 360.0;
        v52 = v4;
      }
    }
  }
  p_angles = &EntityUserCmd->angles;
  v36 = 0;
  v = EntityPlayerState->delta_angles.v;
  v38 = (char *)p_angles - (char *)&v52;
  v39 = (char *)((char *)&v52 - (char *)&EntityPlayerState->delta_angles);
  v40 = 1;
  _XMM9 = 0i64;
  do
  {
    if ( !v40 )
    {
      LODWORD(v50) = 3;
      LODWORD(v49) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    v42 = MSG_UnpackSignedFloat(*(_DWORD *)&v39[(_QWORD)v + v38], 180.0, 0x14u);
    __asm { vroundss xmm7, xmm9, xmm0, 1 }
    if ( v36 >= 3 )
    {
      LODWORD(v50) = 3;
      LODWORD(v49) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    __asm { vroundss xmm2, xmm9, xmm3, 1 }
    v45 = (float)((float)((float)(*(float *)&v39[(_QWORD)v] - (float)((float)((float)(*(float *)&v42 * 0.0027777778) - *(float *)&_XMM7) * 360.0)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( v36 >= 3 )
    {
      LODWORD(v50) = 3;
      LODWORD(v49) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    *v = v45;
    if ( v36 >= 3 )
    {
      LODWORD(v50) = 3;
      LODWORD(v49) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    __asm
    {
      vroundss xmm1, xmm9, xmm3, 1
      vroundss xmm3, xmm9, xmm2, 1
    }
    v48 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    if ( v36 >= 3 )
    {
      LODWORD(v50) = 3;
      LODWORD(v49) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v50) )
        __debugbreak();
    }
    *v++ = v48;
    v40 = ++v36 < 3;
  }
  while ( (int)v36 < 3 );
  ent->r.currentAngles.v[2] = v51;
  ent->r.currentAngles.v[0] = v4;
  ent->r.currentAngles.v[1] = v5;
  EntityPlayerState->viewangles.v[0] = ent->r.currentAngles.v[0];
  EntityPlayerState->viewangles.v[1] = ent->r.currentAngles.v[1];
  EntityPlayerState->viewangles.v[2] = ent->r.currentAngles.v[2];
  if ( ent->client )
    SV_ClientMP_ClearExtrapolation(EntityPlayerState->clientNum);
}

/*
==============
G_ClientMP_UserinfoChanged
==============
*/
void G_ClientMP_UserinfoChanged(int clientNum)
{
  gclient_s *client; 
  int IsLocalClient; 
  bool v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  char *clanAbbrev; 
  const char *v10; 
  int v11; 
  unsigned __int8 v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  int maxclients; 
  unsigned __int64 v23; 
  char buffer[8]; 
  char v25[8]; 

  client = g_entities[clientNum].client;
  if ( (unsigned int)clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  SV_ClientMP_GetUserinfo(clientNum, buffer, 1024);
  if ( !Info_Validate(buffer) )
  {
    strcpy(v25, "dinfo");
    *(double *)buffer = *(double *)"\\name\\badinfo";
  }
  IsLocalClient = SV_ClientMP_IsLocalClient(clientNum);
  v4 = client->sess.connected == CON_CONNECTED;
  client->sess.localClient = IsLocalClient;
  if ( v4 && level.manualNameChange )
  {
    v5 = Info_ValueForKey(buffer, (const char *)&stru_143C9A1A4);
    Com_CleanName(v5, client->sess.newnetname, 36);
  }
  else
  {
    v6 = Info_ValueForKey(buffer, (const char *)&stru_143C9A1A4);
    Com_CleanName(v6, client->sess.cs.name, 36);
    Core_strcpy(client->sess.newnetname, 0x24ui64, client->sess.cs.name);
    v7 = Info_ValueForKey(buffer, "nameSuffix");
    client->sess.cs.nameSuffix = atoi(v7);
    v8 = Info_ValueForKey(buffer, "clanAbbrev");
    clanAbbrev = client->sess.cs.clanAbbrev;
    if ( *v8 )
      Core_strcpy(clanAbbrev, 9ui64, v8);
    else
      *clanAbbrev = 0;
    v10 = Info_ValueForKey(buffer, "playerTagType");
    if ( *v10 )
    {
      v11 = atoi(v10);
      v12 = v11;
      if ( (v11 < 0 || (unsigned int)v11 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v11, "signed", v11) )
        __debugbreak();
    }
    else
    {
      v12 = 0;
    }
    client->sess.cs.clanTagType = v12;
    v13 = Info_ValueForKey(buffer, "mlg_spectator");
    client->sess.cs.isMLGSpectator = atoi(v13) == 1;
    v14 = Info_ValueForKey(buffer, "mlg_follower");
    v15 = atoi(v14);
    client->sess.cs.isMLGFollower = v15 == 1;
    if ( v15 == 1 )
    {
      v16 = Info_ValueForKey(buffer, "mlg_follower_index");
      client->sess.cs.indexMLGFollower = atoi(v16);
    }
    v17 = Info_ValueForKey(buffer, "pph");
    client->sess.isPrivatePartyHost = atoi(v17);
    v18 = Info_ValueForKey(buffer, "pps");
    client->sess.privatePartySize = atoi(v18);
    v19 = Info_ValueForKey(buffer, "lSquad");
    client->sess.lobbySquadIndex = atoi(v19);
    v20 = Info_ValueForKey(buffer, "userSessionId");
    j_sscanf(v20, "%llx", &v23);
    client->sess.userSessionId = v23;
  }
  G_ClientMP_ClientStateTeamChanged(clientNum);
  G_HeadIcons_SetPlayerDirty(clientNum);
}

/*
==============
GClientSystemMP::LogPrioritySnapDebugInfo
==============
*/
void GClientSystemMP::LogPrioritySnapDebugInfo(GClientSystemMP *this, unsigned int clientNum)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  PriotirySnapDebugInfoFrame *v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 1031, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  v3 = g_priotirySnapDebugInfoIndex;
  if ( g_priotirySnapDebugInfoIndex >= 0x64 )
  {
    LODWORD(v6) = 100;
    LODWORD(v5) = g_priotirySnapDebugInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 1033, ASSERT_TYPE_ASSERT, "(unsigned)( g_priotirySnapDebugInfoIndex ) < (unsigned)( 100 )", "g_priotirySnapDebugInfoIndex doesn't index MAX_PRIORITY_SNAP_HISTORY\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
    v3 = g_priotirySnapDebugInfoIndex;
  }
  v4 = &g_priotirySnapDebugInfo[v3];
  if ( !bitarray_base<bitarray<224>>::testBit((bitarray_base<bitarray<224> > *)v4, v2) )
  {
    ++v4->clientCount;
    if ( (unsigned int)v2 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 224) )
      __debugbreak();
    v4->clientBits.array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
  }
}

/*
==============
GClientSystemMP::TeleportPlayer
==============
*/
void GClientSystemMP::TeleportPlayer(GClientSystemMP *this, gentity_s *player, const vec3_t *origin, const vec3_t *angles)
{
  gclient_s *client; 
  GHandler *Handler; 
  gclient_s *v9; 
  const BgHandler *v10; 
  GWeaponMap *Instance; 
  gclient_s *v12; 

  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 935, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( player->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 936, ASSERT_TYPE_ASSERT, "( player->client->sess.connected != CON_DISCONNECTED )", (const char *)&queryFormat, "player->client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  client = player->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  player->client->ps.origin.v[2] = player->client->ps.origin.v[2] + 1.0;
  player->client->ps.eFlags.m_flags[0] ^= 4u;
  G_ClientMP_SetClientViewAngles(player, angles);
  if ( !player->tagInfo )
    player->r.currentAngles.v[0] = 0.0;
  Handler = GHandler::getHandler();
  v9 = player->client;
  v10 = Handler;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v9->ps, &player->s, 1, v10);
  v12 = player->client;
  player->r.currentOrigin.v[0] = v12->ps.origin.v[0];
  player->r.currentOrigin.v[1] = v12->ps.origin.v[1];
  player->r.currentOrigin.v[2] = v12->ps.origin.v[2];
  if ( player->r.isLinked )
    SV_LinkEntity(player);
  SV_ClientMP_ClearExtrapolation(player->client->ps.clientNum);
}

/*
==============
GClientSystemMP::UpdatePrioritySnapDebugInfo
==============
*/
void GClientSystemMP::UpdatePrioritySnapDebugInfo(GClientSystemMP *this)
{
  unsigned int i; 
  __int64 v2; 
  gclient_s *client; 
  __int64 v4; 
  __int128 v5; 
  unsigned int *v6; 
  unsigned int v7; 
  __int128 v9; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  unsigned int v16; 
  PriotirySnapDebugInfoFrame *v17; 
  __int64 v18; 
  __int64 v19; 

  for ( i = 0; i < level.maxclients; ++i )
  {
    if ( i >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v2 = (int)i;
    client = g_entities[v2].client;
    if ( client && client->sess.connected )
    {
      if ( i >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v2].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 991, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( nextClient ) )", (const char *)&queryFormat, "G_IsEntityInUse( nextClient )") )
        __debugbreak();
      v4 = 100i64;
      v5 = 0i64;
      v6 = &g_priotirySnapDebugInfo[0].clientBits.array[(unsigned __int64)i >> 5];
      do
      {
        if ( i >= 0xE0 )
        {
          LODWORD(v19) = 224;
          LODWORD(v18) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
            __debugbreak();
        }
        v7 = *v6;
        v6 += 8;
        v9 = v5;
        *(float *)&v9 = *(float *)&v5 + 1.0;
        _XMM3 = v9;
        _XMM0 = (0x80000000 >> (i & 0x1F)) & v7;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm3, xmm6, xmm2
        }
        v5 = _XMM3;
        --v4;
      }
      while ( v4 );
      v13 = DVARFLT_prioritySnapSendPercentThreshold;
      v14 = *(float *)&_XMM3 * 0.0099999998;
      if ( !DVARFLT_prioritySnapSendPercentThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "prioritySnapSendPercentThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v14 > v13->current.value )
        Com_PrintWarning(15, "Client %d is sending %d percent of their priority snaps, which is over the limit of prioritySnapSendPercentThreshold.\n", i, (unsigned int)(int)(float)(v14 * 100.0));
      v15 = DVARBOOL_prioritySnapDebug;
      if ( !DVARBOOL_prioritySnapDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "prioritySnapDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
        Com_Printf(15, "Client %d is sending %d percent of their priority snaps.\n", i, (unsigned int)(int)(float)(v14 * 100.0));
    }
  }
  v16 = (g_priotirySnapDebugInfoIndex + 1) % 0x64;
  g_priotirySnapDebugInfoIndex = v16;
  if ( v16 >= 0x64 )
  {
    LODWORD(v19) = 100;
    LODWORD(v18) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( g_priotirySnapDebugInfoIndex ) < (unsigned)( 100 )", "g_priotirySnapDebugInfoIndex doesn't index MAX_PRIORITY_SNAP_HISTORY\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
    v16 = g_priotirySnapDebugInfoIndex;
  }
  v17 = &g_priotirySnapDebugInfo[v16];
  *(_QWORD *)v17->clientBits.array = 0i64;
  *(_QWORD *)&v17->clientBits.array[2] = 0i64;
  *(_QWORD *)&v17->clientBits.array[4] = 0i64;
  *(_QWORD *)&v17->clientBits.array[6] = 0i64;
}

