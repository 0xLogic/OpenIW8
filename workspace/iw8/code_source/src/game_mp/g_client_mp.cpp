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
  __int64 v26; 
  __int64 v27; 
  GAntiLagMP *AntiLagMP; 
  GWeaponMap *Instance; 
  int v41; 
  signed __int64 v42; 
  GWeaponMap *v43; 
  const char *v51; 
  const char *v52; 
  SvClient *CommonClient; 
  const dvar_t *v54; 
  int serverTime; 
  int commandTime; 
  int v57; 
  int v58; 
  const dvar_t *v59; 
  const dvar_t *v60; 
  int v61; 
  gclient_s *client; 
  __int64 v63; 
  __int64 v64; 
  int outTaskFlags; 
  vec3_t *origin; 
  vec3_t *angle; 
  __int64 v68; 
  int v69; 
  const char *v70; 
  char v71[640]; 
  char Src[2464]; 
  GClientTaskQueue taskQueue; 

  v68 = -2i64;
  angle = (vec3_t *)spawn_angles;
  origin = (vec3_t *)spawn_origin;
  _RSI = ent;
  v69 = 28;
  v70 = "SVPROF_CLIENT_SPAWNED";
  SV_Profile_BeginEvent(SVPROF_CLIENT_SPAWNED);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_CLIENT_SPAWNED");
  EntityIndex = G_GetEntityIndex(_RSI);
  v5 = EntityIndex;
  _RDI = _RSI->client;
  v7 = EntityIndex;
  if ( _RDI != &level.clients[EntityIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 589, ASSERT_TYPE_ASSERT, "(ent->client == &level.clients[clientNum])", (const char *)&queryFormat, "ent->client == &level.clients[clientNum]") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v63) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, 2048) )
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
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->ps.otherFlags, ACTIVE, 0x22u) && BG_IsTurretActive(&_RDI->ps) )
  {
    if ( _RDI->ps.clientNum != _RSI->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 595, ASSERT_TYPE_ASSERT, "(client->ps.clientNum == ent->s.number)", (const char *)&queryFormat, "client->ps.clientNum == ent->s.number") )
      __debugbreak();
    if ( _RDI->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 596, ASSERT_TYPE_ASSERT, "(client->ps.viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    viewlocked_entNum = _RDI->ps.viewlocked_entNum;
    gentities = level.gentities;
    number = level.gentities[viewlocked_entNum].r.ownerNum.number;
    if ( !number )
      goto LABEL_128;
    v11 = number;
    v12 = number - 1;
    if ( v12 >= 0x800 )
    {
      LODWORD(v64) = 2048;
      LODWORD(v63) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v13 = v11 - 1;
    if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v13] )
    {
      LODWORD(v64) = gentities[viewlocked_entNum].r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v64) )
        __debugbreak();
    }
    if ( !gentities[viewlocked_entNum].r.ownerNum.number )
    {
LABEL_128:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 597, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined())", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v14 = _RDI->ps.viewlocked_entNum;
    v15 = level.gentities;
    v16 = level.gentities[v14].r.ownerNum.number;
    if ( (unsigned int)(v16 - 1) >= 0x7FF )
    {
      LODWORD(v64) = 2047;
      LODWORD(v63) = v16 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    v17 = v15[v14].r.ownerNum.number;
    if ( (unsigned int)(v17 - 1) >= 0x800 )
    {
      LODWORD(v64) = 2048;
      LODWORD(v63) = v17 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v63, v64) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v18 = v17 - 1;
    if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v18] )
    {
      LODWORD(v64) = v15[v14].r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v64) )
        __debugbreak();
    }
    if ( &g_entities[v15[v14].r.ownerNum.number - 1] != _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 598, ASSERT_TYPE_ASSERT, "(level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent)", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.ent() == ent") )
      __debugbreak();
    G_Turret_ClientStopUsingTurret(&level.gentities[_RDI->ps.viewlocked_entNum]);
  }
  BG_ClearLinkedToAnimFlags(&_RDI->ps);
  BG_SetOnWallAnimFlag(&_RDI->ps, 0);
  G_EntUnlink(_RSI);
  if ( _RSI->r.isLinked )
    SV_UnlinkEntity(_RSI);
  _RSI->s.groundEntityNum = 2047;
  _RSI->s.surfType = 7;
  Scr_SetString(&_RSI->classname, scr_const.player);
  Scr_SetString(&_RSI->script_classname, scr_const.player);
  _RSI->clipmask = 33636369;
  _RSI->r.svFlags |= 1u;
  _RSI->handler = 15;
  _RSI->flags = 0i64;
  _RSI->flags.m_flags[0] |= 0x200u;
  _RAX = BG_Suit_GetBounds(_RDI->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsi+100h], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rsi+110h], xmm1
  }
  if ( SV_BotIsBotEnt(_RSI) )
  {
    __asm { vmovss  xmm1, dword ptr [rsi+10Ch]; radius }
    SV_BotSetAvoidanceRadius(_RSI, *(float *)&_XMM1);
  }
  _RSI->s.animInfo.animData = 0;
  memcpy_0(Src, &_RDI->sess, 0x998ui64);
  _RBP = _RDI->ps.rxvOmnvars;
  _RAX = v71;
  _RCX = _RDI->ps.rxvOmnvars;
  v26 = 5i64;
  v27 = 5i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX += 128;
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX += 16;
    --v27;
  }
  while ( v27 );
  memcpy_0(&taskQueue, &_RDI->markState, 0xB3Cui64);
  outTaskFlags = _RDI->lastServerTime;
  GSaveMP_ScrFreeClientFields(_RDI);
  G_Client_Clear(v5, _RDI);
  GMovingPlatforms::InitClient(_RSI, &_RDI->movingPlatformHandle);
  GPlayerTraceInfo::Init(_RSI);
  AntiLagMP = GAntiLagMP::GetAntiLagMP();
  GAntiLagMP::ClearCharacterHistory(AntiLagMP, v5);
  BG_InitPlayerState_OnSpawn(&_RDI->ps, v5, 0);
  G_HeadIcons_SetPlayerDirty(v5);
  G_DefaultViewAngleClampGoal(&_RDI->link_viewClamp);
  G_SnapToViewAngleClampGoal(&_RDI->link_viewClamp);
  memcpy_0(&_RDI->sess, Src, sizeof(_RDI->sess));
  Instance = GWeaponMap::GetInstance();
  BG_InitClientWeapons(Instance, &_RDI->sess.cs);
  _RAX = v71;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+0], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbp+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbp+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbp+60h], xmm0
    }
    _RBP += 16;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rbp-10h], xmm1
    }
    _RAX += 128;
    --v26;
  }
  while ( v26 );
  memcpy_0(&_RDI->markState, &taskQueue, sizeof(_RDI->markState));
  _RDI->lastServerTime = outTaskFlags;
  _RDI->spectatorClient = -1;
  _RDI->cycleSpectatorClient = -1;
  _RDI->footstepWeight = 0.0;
  v41 = _RDI->sess.savedSpawnCount + 1;
  _RDI->sess.savedSpawnCount = v41;
  if ( v41 >= 256 )
  {
    _RDI->sess.savedSpawnCount = 0;
    v41 = 0;
  }
  _RDI->ps.stats[3] = v41;
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 694, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  if ( _RDI->sess.maxHealth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 695, ASSERT_TYPE_ASSERT, "( 0 ) < ( client->sess.maxHealth )", "%s < %s\n\t%i, %i", "0", "client->sess.maxHealth", 0i64, _RDI->sess.maxHealth) )
    __debugbreak();
  _RDI->ps.stats[2] = _RDI->sess.maxHealth;
  _RDI->ps.eFlags.m_flags[0] = _RDI->sess.eFlags.m_flags[0];
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->ps.eFlags, ACTIVE, 0x10u);
  _RDI->sess.cs.clientIndex = v5;
  _RDI->sess.cs.isBot = SV_BotIsBotEnt(_RSI) != 0;
  v42 = _RDI - level.clients;
  if ( (unsigned __int64)(v42 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v42, "signed", _RDI - level.clients) )
    __debugbreak();
  SV_Game_GetUsercmd(v42, &_RDI->sess.cmd);
  _RDI->sess.cmd.buttons &= 0xFFFFFFFFFFFFFF3Fui64;
  v43 = GWeaponMap::GetInstance();
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v43->SetWeapon(v43, &_RDI->ps.throwbackWeaponHandle, &NULL_WEAPON);
  _RBX = origin;
  G_SetOrigin(_RSI, origin, 1, 1);
  _RDI->ps.origin.v[0] = origin->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+34h], xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+38h], xmm1
  }
  G_ClientMP_SetClientViewAngles(_RSI, angle);
  if ( _RDI->latched_buttons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 715, ASSERT_TYPE_ASSERT, "(!client->latched_buttons)", (const char *)&queryFormat, "!client->latched_buttons") )
    __debugbreak();
  if ( _RDI->buttonsSinceLastFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 716, ASSERT_TYPE_ASSERT, "(!client->buttonsSinceLastFrame)", (const char *)&queryFormat, "!client->buttonsSinceLastFrame") )
    __debugbreak();
  _RDI->buttons = _RDI->sess.cmd.buttons;
  G_HudOutline_AddForNewClient(_RSI);
  level.clientIsSpawning = 1;
  if ( !_RSI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 728, ASSERT_TYPE_ASSERT, "(ent->sentient != nullptr)", (const char *)&queryFormat, "ent->sentient != nullptr") )
    __debugbreak();
  _RSI->sentient->lastSpawnTime = level.time;
  _RAX = _RSI->client;
  __asm { vmovss  xmm0, dword ptr [rax+1DCh]; degrees }
  _RDI->ps.movementDir = BG_DegreesToMovementDir(*(float *)&_XMM0);
  G_Client_SetSuit(_RSI, &_RDI->ps, _RDI->sess.cs.suitIndex);
  if ( _RDI->ps.suitIndex != _RDI->sess.cs.suitIndex )
  {
    LODWORD(v64) = _RDI->sess.cs.suitIndex;
    LODWORD(v63) = _RDI->ps.suitIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 735, ASSERT_TYPE_ASSERT, "( client->ps.suitIndex ) == ( client->sess.cs.suitIndex )", "client->ps.suitIndex == client->sess.cs.suitIndex\n\t%i, %i", v63, v64) )
      __debugbreak();
  }
  _RDI->ps.viewHeightTarget = BG_GetSuitDef(_RDI->ps.suitIndex)->viewheight_stand;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+200h]
    vmovss  dword ptr [rdi+1E8h], xmm0
  }
  v51 = j_va("%c", 106i64);
  v52 = v51;
  if ( (_DWORD)v5 == -1 )
  {
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v51);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(v5);
    CommonClient->SendServerCommand(CommonClient, SV_CMD_RELIABLE, v52);
  }
  G_CharacterStreaming_ClearNextSpectateViewModels(v5);
  G_WeaponStreaming_ClearNextSpectateViewWeapons(v5);
  G_WorldStreaming_ClearNextStreamView(v5, MOVEMENT);
  v54 = DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default;
  if ( !DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_veh_cam_3rdMode_default") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( v54->current.enabled )
    _RDI->ps.pm_flags.m_flags[1] |= 0x1000u;
  else
    _RDI->ps.pm_flags.m_flags[1] &= ~0x1000u;
  BG_ClearViewState(&_RDI->playerViewState);
  serverTime = _RDI->sess.cmd.serverTime;
  commandTime = _RDI->sess.cmd.commandTime;
  _RDI->sess.cmd.serverTime = level.time;
  v57 = level.time - 100;
  _RDI->ps.serverTime = level.time - 100;
  _RDI->ps.serverTimeInterpolated = v57;
  v58 = 100;
  if ( commandTime > 100 )
    v58 = commandTime;
  _RDI->sess.cmd.commandTime = v58;
  _RDI->ps.commandTime = commandTime - 100;
  _RDI->ps.commandTimeInterpolated = commandTime - 100;
  _RDI->ps.inputTime = 0;
  _RDI->ps.inputTimeInterpolated = 0;
  if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
  {
    *(_QWORD *)&_RDI->ps.animState.animSet = 0i64;
    *(_QWORD *)&_RDI->ps.animState.slot[0].packedAnim = 0i64;
    _RDI->ps.animState.slot[1].packedAnim = 0;
    _RDI->ps.animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(_RDI->ps.suitIndex);
  }
  G_Execution_Clear(_RSI);
  G_ActiveMP_ClientEndFrame(_RSI);
  v59 = DVARBOOL_g_spectateOrderFixActive;
  if ( !DVARBOOL_g_spectateOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_spectateOrderFixActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
    G_ActiveMP_ClientEndFrame_Spectator(_RSI);
  if ( _RSI->s.eType == ET_PLAYER )
  {
    G_PhysicsCharacterProxy_AddCharacter(_RSI);
    v60 = DVARBOOL_g_DisablePlayerRepulsors;
    if ( !DVARBOOL_g_DisablePlayerRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_DisablePlayerRepulsors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    if ( !v60->current.enabled && !Nav_FindRepulsorByEntNum(_RSI->s.number) )
      G_Nav_AddPlayerRepulsor(_RSI->s.number);
  }
  v61 = G_GetEntityIndex(_RSI);
  client = _RSI->client;
  GClientTaskQueue::Init(&taskQueue, v61);
  outTaskFlags = 0;
  G_ActiveMP_ClientThinkInternal(_RSI, &client->sess.cmd, &taskQueue, &outTaskFlags);
  if ( outTaskFlags )
    G_ActiveMP_ProcessClientThinkUpdatePreTasks(v61, outTaskFlags);
  GClientTaskQueue::ExecuteTasks(&taskQueue);
  _RDI->sess.cmd.serverTime = serverTime;
  _RDI->sess.cmd.commandTime = commandTime;
  _RSI->r.eventTime = level.time;
  level.clientIsSpawning = 0;
  GAntiLagMP::InvalidateArchivedCharacterPositions(v5);
  SV_ClientMP_ClearExtrapolation(v5);
  _RDI->ps.lastSpawnTime = level.time;
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
  GAntiLagMP *AntiLagMP; 
  __int64 v8; 
  __int64 v9; 
  int commandTime; 
  char v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const char *v18; 
  const dvar_t *v19; 
  __int64 integer64; 
  __int64 v21; 
  __int64 v22; 
  char v23; 
  char v24; 
  sentient_s *v26; 
  const char *v27; 
  __int64 v29; 
  char buffer[1024]; 

  v3 = clientNum;
  if ( !scriptPersId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 357, ASSERT_TYPE_ASSERT, "( scriptPersId )", (const char *)&queryFormat, "scriptPersId") )
    __debugbreak();
  if ( (unsigned int)v3 >= level.maxclients )
  {
    LODWORD(v29) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v29, level.maxclients) )
      __debugbreak();
  }
  SV_Profile_BeginEvent(SVPROF_CLIENT_CONNECT);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v4 = *(_QWORD *)&GStatic::ms_gameStatics;
  v5 = &g_entities[v3];
  _RSI = &level.clients[v3];
  G_Client_Clear(v3, _RSI);
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
  _RSI->sess.connected = CON_CONNECTING;
  _RSI->sess.scriptPersId = scriptPersId;
  _RSI->sess.cs.team = TEAM_SPECTATOR;
  _RSI->sess.sessionState = SESS_STATE_SPECTATOR;
  _RSI->spectatorClient = -1;
  _RSI->cycleSpectatorClient = -1;
  _RSI->sess.forceSpectatorClient = -1;
  _RSI->sess.killCamEntity = -1;
  _RSI->sess.killCamLookAtEntity = v3;
  _RSI->sess.killCamFlags = 0;
  _RSI->sess.mlgSpectatingTeam = TEAM_TWO;
  _RSI->sess.hudData.data = 0;
  _RSI->sess.maxHealth = 1;
  _RSI->ps.stats[2] = 1;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, v5);
  v5->handler = 0;
  v5->client = _RSI;
  v5->s.clientNum = v3;
  v5->s.surfType = 7;
  _RSI->sess.cs.clientIndex = v3;
  _RSI->sess.moveSpeedScaleMultiplier = 1.0;
  if ( v5->r.svFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(!ent->r.svFlags)", (const char *)&queryFormat, "!ent->r.svFlags") )
    __debugbreak();
  GMovingPlatforms::InitClient(v5, &_RSI->movingPlatformHandle);
  GPlayerTraceInfo::Init(v5);
  BG_Customization_SetDefaultCustomization(&_RSI->sess.cs.customization);
  G_CharacterStreaming_ClientConnect(v3);
  G_WeaponStreaming_ClearClientRequests(v3);
  G_WorldStreaming_ClientConnect(v3);
  G_HeadIcons_SetPlayerDirty(v3);
  BG_InitPlayerState_OnConnect(&_RSI->ps, v3);
  _RSI->ps.stats[2] = _RSI->sess.maxHealth;
  SV_Game_GetUsercmd(v3, &_RSI->sess.cmd);
  if ( _RSI == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = _RSI->sess.cmd.commandTime;
  _RSI->ps.commandTime = commandTime;
  _RSI->ps.commandTimeInterpolated = commandTime;
  _RSI->ps.inputTime = 0;
  _RSI->ps.inputTimeInterpolated = 0;
  __asm { vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize }
  MSG_UnpackUnsignedFloat(_RSI->ps.moveSpeedScaleMultiplier, *(float *)&_XMM1, 0xCu);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+55C4h]
    vsubss  xmm2, xmm1, xmm0
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(I_fabs( client->sess.moveSpeedScaleMultiplier - psMoveSpeedScale ) < 0.001f)", (const char *)&queryFormat, "I_fabs( client->sess.moveSpeedScaleMultiplier - psMoveSpeedScale ) < EQUAL_EPSILON") )
    __debugbreak();
  G_ClientMP_UserinfoChanged(v3);
  if ( !_RSI->sess.localClient )
  {
    v16 = DVARSTR_g_password;
    if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( *(_BYTE *)v16->current.integer64 )
    {
      v17 = DVARSTR_g_password;
      if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( I_stricmp(v17->current.string, "none") )
      {
        SV_ClientMP_GetUserinfo(v3, buffer, 1024);
        v18 = Info_ValueForKey(buffer, "password");
        v19 = DVARSTR_g_password;
        if ( !DVARSTR_g_password && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_password") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        integer64 = v19->current.integer64;
        v21 = 0x7FFFFFFFi64;
        if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v22 = integer64 - (_QWORD)v18;
        do
        {
          v23 = v18[v22];
          v24 = *v18++;
          if ( !v21-- )
            break;
          if ( v23 != v24 )
          {
            G_FreeEntity(v5);
            v27 = "GAME/INVALIDPASSWORD";
            goto LABEL_49;
          }
        }
        while ( v23 );
      }
    }
  }
  v26 = Sentient_Alloc(ST_PLAYER);
  if ( !v26 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FAD050, 383i64);
  v5->sentient = v26;
  Com_Printf(131087, "Sentient %zd allocated for player %d\n", v26 - level.sentients, (unsigned int)v5->s.number);
  Sentient_Init(v5->sentient, v5, TEAM_ZERO);
  if ( SvPersistentGlobalsMP::IsFrontEndServer() )
    G_FrontEndScene_UpdateClientState();
  Scr_PlayerConnect(v5);
  G_MainMP_CalculateRanks();
  v27 = NULL;
LABEL_49:
  SV_Profile_EndEvent(SVPROF_CLIENT_CONNECT);
  return v27;
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
  GHandler *v11; 
  GWeaponMap *Instance; 
  WorldUpReferenceFrame v13; 

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
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, EntityPlayerState, Handler);
    __asm { vmovss  xmm1, cs:__real@3f800000; height }
    WorldUpReferenceFrame::AddUpContribution(&v13, *(float *)&_XMM1, &EntityPlayerState->origin);
  }
  if ( teleport )
    EntityPlayerState->eFlags.m_flags[0] ^= 4u;
  v11 = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, EntityPlayerState, &ent->s, 1, v11);
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
  usercmd_s *EntityUserCmd; 
  const dvar_t *v39; 
  char v40; 
  char v41; 
  char v64; 
  char v65; 
  base_vec3_t<int> *p_angles; 
  unsigned int v99; 
  signed __int64 v101; 
  char *v102; 
  bool v103; 
  __int64 v144; 
  __int64 v145; 
  int v148; 
  char v153; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps [rsp+128h+var_B8], xmm14
    vmovaps [rsp+128h+var_C8], xmm15
  }
  _RBP = ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  xmm13, dword ptr [rdx]
    vmovss  xmm11, dword ptr [rdx+4]
    vmovss  [rsp+128h+var_E0], xmm13
    vmovss  [rsp+128h+var_DC], xmm11
    vmovss  [rsp+128h+var_E8], xmm0
    vmovss  [rsp+128h+var_D8], xmm0
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 61, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !G_Utils_IsClientOrAgent(_RBP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrAgent( ent ) )", (const char *)&queryFormat, "G_Utils_IsClientOrAgent( ent )") )
    __debugbreak();
  _RSI = G_GetEntityPlayerState(_RBP);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 65, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EntityUserCmd = G_GetEntityUserCmd(_RBP);
  if ( !EntityUserCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  __asm
  {
    vmovss  xmm12, cs:__real@3b360b61
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm10, cs:__real@43b40000
    vmovss  xmm15, cs:__real@43360b61
    vmovss  xmm14, cs:__real@37800000
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0) && !BG_IsTurretActive(_RSI) && (_RSI->linkFlags.m_flags[0] & 4) == 0 )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
        __debugbreak();
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+26Ch]; angle1
        vmovaps xmm1, xmm11; angle2
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      _RBX = DCONST_DVARFLT_bg_prone_yawcap;
      __asm
      {
        vmulss  xmm3, xmm0, xmm12
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm3, xmm8
        vmovss  xmm1, xmm0, xmm1
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm6, xmm0, xmm10
      }
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vcomiss xmm6, dword ptr [rbx+28h]
        vxorps  xmm9, xmm9, xmm9
      }
      if ( !(v40 | v41) )
        goto LABEL_28;
      _RBX = DCONST_DVARFLT_bg_prone_yawcap;
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm6, xmm1
      }
      if ( v40 )
      {
LABEL_28:
        _RBX = DCONST_DVARFLT_bg_prone_yawcap;
        if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vcomiss xmm6, dword ptr [rbx+28h] }
        v39 = DCONST_DVARFLT_bg_prone_yawcap;
        if ( v40 | v41 )
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v39);
          __asm { vaddss  xmm5, xmm6, dword ptr [rbx+28h] }
        }
        else
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v39);
          __asm { vsubss  xmm5, xmm6, dword ptr [rbx+28h] }
        }
        __asm
        {
          vcomiss xmm5, xmm9
          vaddss  xmm0, xmm5, dword ptr [rsi+0B8h]
          vmulss  xmm1, xmm0, xmm15
          vaddss  xmm3, xmm1, xmm8
          vxorps  xmm2, xmm2, xmm2
          vmovss  xmm0, xmm2, xmm3
          vroundss xmm1, xmm7, xmm0, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, xmm14
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm10
          vmovss  dword ptr [rsi+0B8h], xmm0
        }
        _RBX = DCONST_DVARFLT_bg_prone_yawcap;
        if ( v40 | v41 )
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+28h]
            vaddss  xmm0, xmm0, dword ptr [rsi+26Ch]; angle
          }
        }
        else
        {
          if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+26Ch]
            vsubss  xmm0, xmm0, dword ptr [rbx+28h]
          }
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  [rsp+128h+var_DC], xmm0
          vmovaps xmm11, xmm0
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+274h]; angle1
        vmovaps xmm1, xmm13; angle2
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm6, cs:__real@42340000
        vmulss  xmm4, xmm0, xmm12
        vxorps  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm4, xmm8
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm3, xmm7, xmm0, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm10
        vcomiss xmm0, xmm6
      }
      if ( !(v64 | v65) )
        goto LABEL_52;
      __asm { vcomiss xmm0, cs:__real@c2340000 }
      if ( v64 )
      {
LABEL_52:
        __asm
        {
          vaddss  xmm2, xmm0, xmm6
          vsubss  xmm1, xmm0, xmm6
          vcmpltss xmm0, xmm6, xmm0
          vblendvps xmm5, xmm2, xmm1, xmm0
          vcomiss xmm5, xmm9
          vaddss  xmm0, xmm5, dword ptr [rsi+0B4h]
          vmulss  xmm1, xmm0, xmm15
          vaddss  xmm3, xmm1, xmm8
          vxorps  xmm2, xmm2, xmm2
          vmovss  xmm0, xmm2, xmm3
          vroundss xmm1, xmm7, xmm0, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, xmm14
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm10
          vmovss  dword ptr [rsi+0B4h], xmm0
          vmovss  xmm2, dword ptr [rsi+274h]
          vmovss  [rsp+128h+var_E4], xmm5
        }
        if ( v64 | v65 )
        {
          __asm
          {
            vmulss  xmm0, xmm2, xmm12
            vaddss  xmm4, xmm0, cs:__real@3e000000
          }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm2, xmm6
            vmulss  xmm4, xmm0, xmm12
          }
        }
        __asm
        {
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm7, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm13, xmm1, xmm10
          vmovss  [rsp+128h+var_E0], xmm13
        }
      }
    }
  }
  __asm { vmovss  xmm14, cs:__real@43340000 }
  p_angles = &EntityUserCmd->angles;
  v99 = 0;
  _RDI = &_RSI->delta_angles;
  v101 = (char *)p_angles - (char *)&v148;
  v102 = (char *)((char *)&v148 - (char *)&_RSI->delta_angles);
  v103 = 1;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  do
  {
    if ( !v103 )
    {
      LODWORD(v145) = 3;
      LODWORD(v144) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v144, v145) )
        __debugbreak();
    }
    _R14 = &v102[(_QWORD)_RDI];
    __asm { vmovaps xmm1, xmm14; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)&v102[(_QWORD)_RDI + v101], *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm6, xmm0, xmm12
      vaddss  xmm2, xmm6, xmm8
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm7, xmm9, xmm0, 1
    }
    if ( v99 >= 3 )
    {
      LODWORD(v145) = 3;
      LODWORD(v144) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v144, v145) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [r14]
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm2, xmm0, xmm10
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm4, xmm2, xmm12
      vaddss  xmm3, xmm4, xmm8
      vroundss xmm2, xmm9, xmm3, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm6, xmm0, xmm10
    }
    if ( v99 >= 3 )
    {
      LODWORD(v145) = 3;
      LODWORD(v144) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v144, v145) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    if ( v99 >= 3 )
    {
      LODWORD(v145) = 3;
      LODWORD(v144) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v144, v145) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm15, dword ptr [rdi]
      vaddss  xmm3, xmm1, xmm8
      vroundss xmm1, xmm9, xmm3, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm9, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm10
    }
    if ( v99 >= 3 )
    {
      LODWORD(v145) = 3;
      LODWORD(v144) = v99;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v144, v145) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v103 = ++v99 < 3;
  }
  while ( (int)v99 < 3 );
  __asm
  {
    vmovss  xmm0, [rsp+128h+var_E8]
    vmovss  dword ptr [rbp+144h], xmm0
    vmovss  dword ptr [rbp+13Ch], xmm13
    vmovss  dword ptr [rbp+140h], xmm11
  }
  _RSI->viewangles.v[0] = _RBP->r.currentAngles.v[0];
  _RSI->viewangles.v[1] = _RBP->r.currentAngles.v[1];
  _RSI->viewangles.v[2] = _RBP->r.currentAngles.v[2];
  if ( _RBP->client )
    SV_ClientMP_ClearExtrapolation(_RSI->clientNum);
  _R11 = &v153;
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
    vmovaps xmm14, [rsp+128h+var_B8]
    vmovaps xmm15, [rsp+128h+var_C8]
  }
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
  bool v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  char *clanAbbrev; 
  const char *v11; 
  int v12; 
  unsigned __int8 v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  int maxclients; 
  unsigned __int64 v24; 
  char buffer[8]; 
  char v26[8]; 

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
    __asm { vmovsd  xmm0, qword ptr cs:aNameBadinfo; "\\name\\badinfo" }
    strcpy(v26, "dinfo");
    __asm { vmovsd  qword ptr [rsp+478h+buffer], xmm0 }
  }
  IsLocalClient = SV_ClientMP_IsLocalClient(clientNum);
  v5 = client->sess.connected == CON_CONNECTED;
  client->sess.localClient = IsLocalClient;
  if ( v5 && level.manualNameChange )
  {
    v6 = Info_ValueForKey(buffer, (const char *)&stru_143C9A1A4);
    Com_CleanName(v6, client->sess.newnetname, 36);
  }
  else
  {
    v7 = Info_ValueForKey(buffer, (const char *)&stru_143C9A1A4);
    Com_CleanName(v7, client->sess.cs.name, 36);
    Core_strcpy(client->sess.newnetname, 0x24ui64, client->sess.cs.name);
    v8 = Info_ValueForKey(buffer, "nameSuffix");
    client->sess.cs.nameSuffix = atoi(v8);
    v9 = Info_ValueForKey(buffer, "clanAbbrev");
    clanAbbrev = client->sess.cs.clanAbbrev;
    if ( *v9 )
      Core_strcpy(clanAbbrev, 9ui64, v9);
    else
      *clanAbbrev = 0;
    v11 = Info_ValueForKey(buffer, "playerTagType");
    if ( *v11 )
    {
      v12 = atoi(v11);
      v13 = v12;
      if ( (v12 < 0 || (unsigned int)v12 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v12, "signed", v12) )
        __debugbreak();
    }
    else
    {
      v13 = 0;
    }
    client->sess.cs.clanTagType = v13;
    v14 = Info_ValueForKey(buffer, "mlg_spectator");
    client->sess.cs.isMLGSpectator = atoi(v14) == 1;
    v15 = Info_ValueForKey(buffer, "mlg_follower");
    v16 = atoi(v15);
    client->sess.cs.isMLGFollower = v16 == 1;
    if ( v16 == 1 )
    {
      v17 = Info_ValueForKey(buffer, "mlg_follower_index");
      client->sess.cs.indexMLGFollower = atoi(v17);
    }
    v18 = Info_ValueForKey(buffer, "pph");
    client->sess.isPrivatePartyHost = atoi(v18);
    v19 = Info_ValueForKey(buffer, "pps");
    client->sess.privatePartySize = atoi(v19);
    v20 = Info_ValueForKey(buffer, "lSquad");
    client->sess.lobbySquadIndex = atoi(v20);
    v21 = Info_ValueForKey(buffer, "userSessionId");
    j_sscanf(v21, "%llx", &v24);
    client->sess.userSessionId = v24;
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
  gclient_s *v12; 
  const BgHandler *v13; 
  GWeaponMap *Instance; 
  gclient_s *v15; 

  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 935, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( player->client->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 936, ASSERT_TYPE_ASSERT, "( player->client->sess.connected != CON_DISCONNECTED )", (const char *)&queryFormat, "player->client->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  client = player->client;
  client->ps.origin.v[0] = origin->v[0];
  client->ps.origin.v[1] = origin->v[1];
  client->ps.origin.v[2] = origin->v[2];
  _RAX = player->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+38h]
    vaddss  xmm1, xmm0, cs:__real@3f800000
    vmovss  dword ptr [rax+38h], xmm1
  }
  player->client->ps.eFlags.m_flags[0] ^= 4u;
  G_ClientMP_SetClientViewAngles(player, angles);
  if ( !player->tagInfo )
    player->r.currentAngles.v[0] = 0.0;
  Handler = GHandler::getHandler();
  v12 = player->client;
  v13 = Handler;
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, &v12->ps, &player->s, 1, v13);
  v15 = player->client;
  player->r.currentOrigin.v[0] = v15->ps.origin.v[0];
  player->r.currentOrigin.v[1] = v15->ps.origin.v[1];
  player->r.currentOrigin.v[2] = v15->ps.origin.v[2];
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
  unsigned int v7; 
  __int64 v11; 
  gclient_s *client; 
  __int64 v13; 
  unsigned int *v15; 
  unsigned int v16; 
  char v25; 
  char v26; 
  const dvar_t *v28; 
  unsigned int v35; 
  PriotirySnapDebugInfoFrame *v36; 
  __int64 v37; 
  __int64 v38; 
  void *retaddr; 

  _RAX = &retaddr;
  _ER14 = 0;
  v7 = 0;
  if ( level.maxclients )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmmword ptr [rax-58h], xmm8
      vmovss  xmm8, cs:__real@42c80000
      vmovaps xmmword ptr [rax-68h], xmm9
      vmovss  xmm9, cs:__real@3c23d70a
    }
    do
    {
      if ( v7 >= 0x800 )
      {
        LODWORD(v38) = 2048;
        LODWORD(v37) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v11 = (int)v7;
      client = g_entities[v11].client;
      if ( client && client->sess.connected )
      {
        if ( v7 >= 0x800 )
        {
          LODWORD(v38) = 2048;
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v11].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 991, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( nextClient ) )", (const char *)&queryFormat, "G_IsEntityInUse( nextClient )") )
          __debugbreak();
        v13 = 100i64;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        v15 = &g_priotirySnapDebugInfo[0].clientBits.array[(unsigned __int64)v7 >> 5];
        do
        {
          if ( v7 >= 0xE0 )
          {
            LODWORD(v38) = 224;
            LODWORD(v37) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v37, v38) )
              __debugbreak();
          }
          v16 = *v15;
          v15 += 8;
          _EAX = (0x80000000 >> (v7 & 0x1F)) & v16;
          __asm
          {
            vaddss  xmm3, xmm6, xmm7
            vmovd   xmm0, eax
            vmovd   xmm1, r14d
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm3, xmm6, xmm2
            vmovaps xmm6, xmm3
            vmovss  [rsp+0A8h+arg_8], xmm3
          }
          --v13;
        }
        while ( v13 );
        _RDI = DVARFLT_prioritySnapSendPercentThreshold;
        __asm { vmulss  xmm6, xmm3, xmm9 }
        if ( !DVARFLT_prioritySnapSendPercentThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "prioritySnapSendPercentThreshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vcomiss xmm6, dword ptr [rdi+28h] }
        if ( !(v25 | v26) )
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm8
            vcvttss2si r9d, xmm0
          }
          Com_PrintWarning(15, "Client %d is sending %d percent of their priority snaps, which is over the limit of prioritySnapSendPercentThreshold.\n", v7, _R9);
        }
        v28 = DVARBOOL_prioritySnapDebug;
        if ( !DVARBOOL_prioritySnapDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "prioritySnapDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( v28->current.enabled )
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm8
            vcvttss2si r9d, xmm0
          }
          Com_Printf(15, "Client %d is sending %d percent of their priority snaps.\n", v7, _R9);
        }
      }
      ++v7;
    }
    while ( v7 < level.maxclients );
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_68]
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
  v35 = (g_priotirySnapDebugInfoIndex + 1) % 0x64;
  g_priotirySnapDebugInfoIndex = v35;
  if ( v35 >= 0x64 )
  {
    LODWORD(v38) = 100;
    LODWORD(v37) = v35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_mp.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( g_priotirySnapDebugInfoIndex ) < (unsigned)( 100 )", "g_priotirySnapDebugInfoIndex doesn't index MAX_PRIORITY_SNAP_HISTORY\n\t%i not in [0, %i)", v37, v38) )
      __debugbreak();
    v35 = g_priotirySnapDebugInfoIndex;
  }
  v36 = &g_priotirySnapDebugInfo[v35];
  *(_QWORD *)v36->clientBits.array = 0i64;
  *(_QWORD *)&v36->clientBits.array[2] = 0i64;
  *(_QWORD *)&v36->clientBits.array[4] = 0i64;
  *(_QWORD *)&v36->clientBits.array[6] = 0i64;
}

