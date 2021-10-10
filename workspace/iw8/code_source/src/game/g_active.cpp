/*
==============
G_Active_NotifyDetonate
==============
*/

void __fastcall G_Active_NotifyDetonate(gentity_s *const ent, const Weapon *r_weapon)
{
  ?G_Active_NotifyDetonate@@YAXQEAUgentity_s@@AEBUWeapon@@@Z(ent, r_weapon);
}

/*
==============
G_Active_NotifySkydiveDeployParachute
==============
*/

void __fastcall G_Active_NotifySkydiveDeployParachute(gentity_s *const ent)
{
  ?G_Active_NotifySkydiveDeployParachute@@YAXQEAUgentity_s@@@Z(ent);
}

/*
==============
G_Active_Glass_SetupBreakParams
==============
*/

void __fastcall G_Active_Glass_SetupBreakParams(playerState_s *const ps, const gentity_s *const ent, GGlassBreakParms *const outParams)
{
  ?G_Active_Glass_SetupBreakParams@@YAXQEAUplayerState_s@@QEBUgentity_s@@QEAUGGlassBreakParms@@@Z(ps, ent, outParams);
}

/*
==============
G_Active_SetLastServerTime
==============
*/

void __fastcall G_Active_SetLastServerTime(int clientNum, int lastServerTime)
{
  ?G_Active_SetLastServerTime@@YAXHH@Z(clientNum, lastServerTime);
}

/*
==============
G_Active_CanDoGrenadePickup
==============
*/

bool __fastcall G_Active_CanDoGrenadePickup(const playerState_s *const ps, const Weapon *r_weapon)
{
  return ?G_Active_CanDoGrenadePickup@@YA_NQEBUplayerState_s@@AEBUWeapon@@@Z(ps, r_weapon);
}

/*
==============
G_Active_ApplyPMoveFlags
==============
*/

void __fastcall G_Active_ApplyPMoveFlags(const pmove_t *const pm, gentity_s *const ent)
{
  ?G_Active_ApplyPMoveFlags@@YAXQEBVpmove_t@@QEAUgentity_s@@@Z(pm, ent);
}

/*
==============
G_Active_SetupGestureStopParams
==============
*/

void __fastcall G_Active_SetupGestureStopParams(const playerState_s *const ps, const int serverTime, const unsigned int slot, GGestureStopParms *const outParams)
{
  ?G_Active_SetupGestureStopParams@@YAXQEBUplayerState_s@@HIQEAUGGestureStopParms@@@Z(ps, serverTime, slot, outParams);
}

/*
==============
G_Active_NotifyWeaponSwitchStarted
==============
*/

void __fastcall G_Active_NotifyWeaponSwitchStarted(gentity_s *ent, const Weapon *r_weapon)
{
  ?G_Active_NotifyWeaponSwitchStarted@@YAXPEAUgentity_s@@AEBUWeapon@@@Z(ent, r_weapon);
}

/*
==============
G_Active_PlayerOrAgent_VehicleAnimationEndFrame
==============
*/

void __fastcall G_Active_PlayerOrAgent_VehicleAnimationEndFrame(playerState_s *ps)
{
  ?G_Active_PlayerOrAgent_VehicleAnimationEndFrame@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
G_Active_PlayerStateToEntityStateExtrapolate
==============
*/

void __fastcall G_Active_PlayerStateToEntityStateExtrapolate(const playerState_s *ps, entityState_t *s, int gameTime, int snap)
{
  ?G_Active_PlayerStateToEntityStateExtrapolate@@YAXPEBUplayerState_s@@PEAUentityState_t@@HH@Z(ps, s, gameTime, snap);
}

/*
==============
G_Active_AttemptLiveGrenadePickup
==============
*/

void __fastcall G_Active_AttemptLiveGrenadePickup(gentity_s *clientEnt, playerState_s *ps, const Weapon *r_weapon)
{
  ?G_Active_AttemptLiveGrenadePickup@@YAXPEAUgentity_s@@PEAUplayerState_s@@AEBUWeapon@@@Z(clientEnt, ps, r_weapon);
}

/*
==============
G_Active_ThirdPersonViewTrace
==============
*/

void __fastcall G_Active_ThirdPersonViewTrace(const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, trace_t *trace, vec3_t *result)
{
  ?G_Active_ThirdPersonViewTrace@@YAXPEBUplayerState_s@@AEBTvec3_t@@1HMPEAUtrace_t@@AEAT2@@Z(ps, start, end, contentMask, startSolidOffset, trace, result);
}

/*
==============
G_Active_RemoteControlledEntityUpdateAngles
==============
*/

void __fastcall G_Active_RemoteControlledEntityUpdateAngles(const gentity_s *player, const char *remoteControlAngles, const int msec, const int remoteEntNum)
{
  ?G_Active_RemoteControlledEntityUpdateAngles@@YAXPEBUgentity_s@@QEBCHH@Z(player, remoteControlAngles, msec, remoteEntNum);
}

/*
==============
G_Active_InitPmoveExternalSystems
==============
*/

void __fastcall G_Active_InitPmoveExternalSystems(pmove_t *pm, int characterNum, const playerState_s *ps, BgObjectHandle<GMovingPlatformClient> moverHandle)
{
  ?G_Active_InitPmoveExternalSystems@@YAXPEAVpmove_t@@HPEBUplayerState_s@@V?$BgObjectHandle@VGMovingPlatformClient@@@@@Z(pm, characterNum, ps, moverHandle);
}

/*
==============
G_Active_NotifySkydiveBeginFreefall
==============
*/

void __fastcall G_Active_NotifySkydiveBeginFreefall(gentity_s *const ent)
{
  ?G_Active_NotifySkydiveBeginFreefall@@YAXQEAUgentity_s@@@Z(ent);
}

/*
==============
G_Active_DoMissilePickup
==============
*/

void __fastcall G_Active_DoMissilePickup(gentity_s *clientEnt, gentity_s *grenadeEnt)
{
  ?G_Active_DoMissilePickup@@YAXPEAUgentity_s@@0@Z(clientEnt, grenadeEnt);
}

/*
==============
G_Active_NotifyWeaponSwitchInvalid
==============
*/

void __fastcall G_Active_NotifyWeaponSwitchInvalid(const gentity_s *ent, const Weapon *r_weapon)
{
  ?G_Active_NotifyWeaponSwitchInvalid@@YAXPEBUgentity_s@@AEBUWeapon@@@Z(ent, r_weapon);
}

/*
==============
G_Active_NotifyWeaponSwitchCanceled
==============
*/

void __fastcall G_Active_NotifyWeaponSwitchCanceled(gentity_s *ent, const Weapon *r_weapon)
{
  ?G_Active_NotifyWeaponSwitchCanceled@@YAXPEAUgentity_s@@AEBUWeapon@@@Z(ent, r_weapon);
}

/*
==============
G_Active_GestureStopEvent
==============
*/

void __fastcall G_Active_GestureStopEvent(const GGestureStopParms *const params, gentity_s *const ent)
{
  ?G_Active_GestureStopEvent@@YAXQEBUGGestureStopParms@@QEAUgentity_s@@@Z(params, ent);
}

/*
==============
G_Active_NotifySkydiveTouch
==============
*/

void __fastcall G_Active_NotifySkydiveTouch(gentity_s *const ent)
{
  ?G_Active_NotifySkydiveTouch@@YAXQEAUgentity_s@@@Z(ent);
}

/*
==============
G_Active_NotifyOffHandPullback
==============
*/

void __fastcall G_Active_NotifyOffHandPullback(gentity_s *ent, const Weapon *r_weapon)
{
  ?G_Active_NotifyOffHandPullback@@YAXPEAUgentity_s@@AEBUWeapon@@@Z(ent, r_weapon);
}

/*
==============
G_Active_ClientThinkUpdateStateFlags
==============
*/

void __fastcall G_Active_ClientThinkUpdateStateFlags(gclient_s *const client, const usercmd_s *pmoveCmd)
{
  ?G_Active_ClientThinkUpdateStateFlags@@YAXQEAUgclient_s@@AEBUusercmd_s@@@Z(client, pmoveCmd);
}

/*
==============
G_Active_NotifySkydiveEnd
==============
*/

void __fastcall G_Active_NotifySkydiveEnd(gentity_s *const ent)
{
  ?G_Active_NotifySkydiveEnd@@YAXQEAUgentity_s@@@Z(ent);
}

/*
==============
G_Active_RemoteControlledEntityShouldUpdateAngles
==============
*/

bool __fastcall G_Active_RemoteControlledEntityShouldUpdateAngles(const gentity_s *player, int msec, int *outRemoteEntNum)
{
  return ?G_Active_RemoteControlledEntityShouldUpdateAngles@@YA_NPEBUgentity_s@@HAEAH@Z(player, msec, outRemoteEntNum);
}

/*
==============
G_Active_Glass_PlayerBreakEvent
==============
*/

void __fastcall G_Active_Glass_PlayerBreakEvent(const GGlassBreakParms *const params, gentity_s *const ent)
{
  ?G_Active_Glass_PlayerBreakEvent@@YAXQEBUGGlassBreakParms@@QEAUgentity_s@@@Z(params, ent);
}

/*
==============
G_Active_IsLiveGrenade
==============
*/

bool __fastcall G_Active_IsLiveGrenade(gentity_s *ent)
{
  return ?G_Active_IsLiveGrenade@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Active_ApplyPMoveFlags
==============
*/
void G_Active_ApplyPMoveFlags(const pmove_t *const pm, gentity_s *const ent)
{
  int m_flags; 
  gclient_s *client; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 610, ASSERT_TYPE_ASSERT, "( pm != nullptr )", (const char *)&queryFormat, "pm != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 611, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 612, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  m_flags = pm->m_flags;
  client = ent->client;
  if ( (m_flags & 0x40) != 0 )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 619, ASSERT_TYPE_ASSERT, "( client->ps.pm_flags.TestFlag( PMoveFlagsCommon::MANTLE ) )", (const char *)&queryFormat, "client->ps.pm_flags.TestFlag( PMoveFlagsCommon::MANTLE )") )
      __debugbreak();
    m_flags = pm->m_flags;
  }
  if ( (m_flags & 0x10) != 0 )
  {
    G_Deploy_Update(&client->ps, NULL);
    m_flags = pm->m_flags;
  }
  if ( (m_flags & 8) != 0 )
    client->flags |= 0x200u;
}

/*
==============
G_Active_AttemptLiveGrenadePickup
==============
*/
void G_Active_AttemptLiveGrenadePickup(gentity_s *clientEnt, playerState_s *ps, const Weapon *r_weapon)
{
  OffhandClass offhandClass; 
  gentity_s *v7; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v10; 
  __int64 v11; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 381, ASSERT_TYPE_ASSERT, "( clientEnt )", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  if ( !clientEnt->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 382, ASSERT_TYPE_ASSERT, "( clientEnt->client )", (const char *)&queryFormat, "clientEnt->client") )
    __debugbreak();
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 383, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 341, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( ps->cursorHint )
  {
    if ( ps->cursorHintClass == USE_CLASS_GENTITY && ps->cursorHintEntIndex != 2047 )
    {
      offhandClass = BG_WeaponDef(r_weapon, 0)->offhandClass;
      if ( (offhandClass == OFFHAND_CLASS_FRAG_GRENADE || offhandClass == ps->weapCommon.offhandPrimary) && !BG_IsUsingOffhandGestureWeapon(ps) && ps->throwbackGrenadeTimeLeft && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x33u) )
      {
        if ( clientEnt->client->ps.cursorHintEntIndex >= 0x800 )
        {
          LODWORD(v11) = clientEnt->client->ps.cursorHintEntIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( clientEnt->client->ps.cursorHintEntIndex ) < (unsigned)( ( 2048 ) )", "clientEnt->client->ps.cursorHintEntIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
            __debugbreak();
        }
        v7 = &g_entities[clientEnt->client->ps.cursorHintEntIndex];
        if ( v7->s.eType == ET_MISSILE )
        {
          Instance = GWeaponMap::GetInstance();
          WeaponForEntity = BG_GetWeaponForEntity(Instance, &v7->s);
          v10 = BG_WeaponDef(WeaponForEntity, 0);
          if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 330, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
            __debugbreak();
          if ( v10->offhandClass == OFFHAND_CLASS_FRAG_GRENADE )
            G_Active_DoMissilePickup(clientEnt, v7);
        }
      }
    }
  }
}

/*
==============
G_Active_CanDoGrenadePickup
==============
*/
bool G_Active_CanDoGrenadePickup(const playerState_s *const ps, const Weapon *r_weapon)
{
  OffhandClass offhandClass; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 341, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = ps->cursorHint && ps->cursorHintClass == USE_CLASS_GENTITY && ps->cursorHintEntIndex != 2047 && ((offhandClass = BG_WeaponDef(r_weapon, 0)->offhandClass, offhandClass == OFFHAND_CLASS_FRAG_GRENADE) || offhandClass == ps->weapCommon.offhandPrimary) && !BG_IsUsingOffhandGestureWeapon(ps) && ps->throwbackGrenadeTimeLeft && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x33u);
  return result;
}

/*
==============
G_Active_ClientThinkUpdateStateFlags
==============
*/
void G_Active_ClientThinkUpdateStateFlags(gclient_s *const client, const usercmd_s *pmoveCmd)
{
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 637, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  client->oldStateFlags = client->stateFlags;
  client->stateFlags = pmoveCmd->stateFlags;
}

/*
==============
G_Active_DoMissilePickup
==============
*/
void G_Active_DoMissilePickup(gentity_s *clientEnt, gentity_s *grenadeEnt)
{
  const GEntityHandlerList *EntHandlerList; 
  EntHandle *p_parent; 
  GWeaponMap *Instance; 
  int number; 
  __int64 v8; 
  __int64 v9; 
  __int16 v10; 
  const Weapon *WeaponForEntity; 
  __int16 EntityIndex; 
  gclient_s *client; 
  gclient_s *v14; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v16; 
  gclient_s *v17; 
  float throwbackGrenadeTimeLeft; 
  double CookingGrenadeScaleTime; 
  int CookingGrenadeFuseMax; 
  gclient_s *v21; 
  int v22; 
  float v23; 
  double v24; 
  gclient_s *v25; 
  float v26; 
  double v27; 
  __int64 v28; 
  __int64 v29; 

  EntHandlerList = G_Main_GetEntHandlerList(grenadeEnt);
  if ( EntHandlerList->touch )
  {
    p_parent = &grenadeEnt->parent;
    Instance = GWeaponMap::GetInstance();
    if ( EntHandle::isDefined(&grenadeEnt->parent) )
    {
      number = p_parent->number;
      if ( (unsigned int)(number - 1) >= 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", number - 1, 2047) )
        __debugbreak();
      v8 = p_parent->number;
      if ( (unsigned int)(v8 - 1) >= 0x800 )
      {
        LODWORD(v29) = 2048;
        LODWORD(v28) = v8 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v9 = v8 - 1;
      if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v9] )
      {
        LODWORD(v29) = p_parent->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v29) )
          __debugbreak();
      }
      v10 = p_parent->number - 1;
    }
    else
    {
      v10 = 2046;
    }
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &grenadeEnt->s);
    EntHandlerList->touch(grenadeEnt, clientEnt, 0);
    EntityIndex = G_GetEntityIndex(grenadeEnt);
    if ( !G_IsEntityInUse(EntityIndex) )
    {
      clientEnt->client->ps.throwbackGrenadeOwner = v10;
      client = clientEnt->client;
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 927, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 928, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Instance->SetWeapon(Instance, &client->ps.weapCommon.offHandHandle, WeaponForEntity);
      v14 = clientEnt->client;
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Du);
      v16 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v29) = 64;
          LODWORD(v28) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v28, v29) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v16 & 0x1F)) & v14->ps.perks.array[v16 >> 5]) != 0 )
        {
          clientEnt->client->ps.throwbackGrenadeTimeLeft = BG_WeaponFuseTime(WeaponForEntity, 0);
          v17 = clientEnt->client;
          throwbackGrenadeTimeLeft = (float)v17->ps.throwbackGrenadeTimeLeft;
          CookingGrenadeScaleTime = BG_GetCookingGrenadeScaleTime(&v17->ps);
          if ( (int)(float)(throwbackGrenadeTimeLeft / *(float *)&CookingGrenadeScaleTime) != BG_GetCookingGrenadeFuseMax(WeaponForEntity, 0, &clientEnt->client->ps) )
          {
            CookingGrenadeFuseMax = BG_GetCookingGrenadeFuseMax(WeaponForEntity, 0, &clientEnt->client->ps);
            v21 = clientEnt->client;
            v22 = CookingGrenadeFuseMax;
            v23 = (float)v21->ps.throwbackGrenadeTimeLeft;
            v24 = BG_GetCookingGrenadeScaleTime(&v21->ps);
            LODWORD(v29) = v22;
            LODWORD(v28) = (int)(float)(v23 / *(float *)&v24);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 313, ASSERT_TYPE_ASSERT, "( static_cast<int>( clientEnt->client->ps.throwbackGrenadeTimeLeft / BG_GetCookingGrenadeScaleTime( &clientEnt->client->ps ) ) ) == ( BG_GetCookingGrenadeFuseMax( offHand, false, &clientEnt->client->ps ) )", "static_cast<int>( clientEnt->client->ps.throwbackGrenadeTimeLeft / BG_GetCookingGrenadeScaleTime( &clientEnt->client->ps ) ) == BG_GetCookingGrenadeFuseMax( offHand, false, &clientEnt->client->ps )\n\t%i, %i", v28, v29) )
              __debugbreak();
          }
        }
      }
      v25 = clientEnt->client;
      v26 = (float)v25->ps.throwbackGrenadeTimeLeft;
      v27 = BG_GetCookingGrenadeScaleTime(&v25->ps);
      clientEnt->client->ps.grenadeTimeLeft = (int)(float)(v26 / *(float *)&v27);
    }
  }
}

/*
==============
G_Active_GestureStopEvent
==============
*/
void G_Active_GestureStopEvent(const GGestureStopParms *const params, gentity_s *const ent)
{
  scrContext_t *v4; 
  const char *NameFromIndex; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 484, ASSERT_TYPE_ASSERT, "( params != nullptr )", (const char *)&queryFormat, "params != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 485, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( params->gestureIndex == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 486, ASSERT_TYPE_ASSERT, "( params->gestureIndex != (1<<8) )", (const char *)&queryFormat, "params->gestureIndex != GESTURE_INVALID_INDEX") )
    __debugbreak();
  v4 = ScriptContext_Server();
  Scr_AddFloat(v4, params->elapsedTime);
  NameFromIndex = BG_Gesture_GetNameFromIndex(params->gestureIndex);
  Scr_AddString(v4, NameFromIndex);
  GScr_Notify(ent, scr_const.xanim_gesture_stopped, 2u);
}

/*
==============
G_Active_Glass_PlayerBreakEvent
==============
*/
void G_Active_Glass_PlayerBreakEvent(const GGlassBreakParms *const params, gentity_s *const ent)
{
  unsigned __int16 GlassHitId; 
  sentient_s *sentient; 
  unsigned __int64 eTeam; 
  bitarray<224> *AllTeamFlags; 
  bitarray<224> teamFlags; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 523, ASSERT_TYPE_ASSERT, "( params != nullptr )", (const char *)&queryFormat, "params != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 524, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( params->trace.fraction < 1.0 && BG_Glass_CanBreakGlass(&params->trace) )
  {
    GlassHitId = Trace_GetGlassHitId(&params->trace);
    G_Glass_DestroyPiece((unsigned __int16)(GlassHitId - 1), &params->pos, &params->dir);
    sentient = ent->sentient;
    if ( sentient )
    {
      eTeam = (unsigned int)sentient->eTeam;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
      else
        AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
      teamFlags = *AllTeamFlags;
      if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
        __debugbreak();
      teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
      Actor_BroadcastGlassEvent(ent, AI_EV_GLASS_DESTROYED, &teamFlags, &params->pos);
    }
  }
}

/*
==============
G_Active_Glass_SetupBreakParams
==============
*/
void G_Active_Glass_SetupBreakParams(playerState_s *const ps, const gentity_s *const ent, GGlassBreakParms *const outParams)
{
  __int128 v6; 
  __int128 v7; 
  const dvar_t *v11; 
  float value; 
  float v13; 
  float v14; 
  GHandler *Handler; 
  Physics_WorldId v16; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  int passEntityNum; 
  EffectiveStance EffectiveStance; 
  const Bounds *bounds; 
  float fraction; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float v26; 
  BgTrace v27; 
  vec3_t end; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 501, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 502, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  v6 = LODWORD(ps->velocity.v[0]);
  v7 = v6;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  _XMM4 = v7;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  outParams->dir.v[0] = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
  outParams->dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * ps->velocity.v[1];
  outParams->dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * ps->velocity.v[2];
  v11 = DCONST_DVARFLT_player_glassBreakDistance;
  if ( !DCONST_DVARFLT_player_glassBreakDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_glassBreakDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  v13 = value * outParams->dir.v[1];
  end.v[0] = (float)(value * outParams->dir.v[0]) + ps->origin.v[0];
  v14 = value * outParams->dir.v[2];
  end.v[1] = v13 + ps->origin.v[1];
  end.v[2] = v14 + ps->origin.v[2];
  Handler = GHandler::getHandler();
  v16 = Handler->GetPhysicsWorldId(Handler);
  PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(ent->s.number);
  BgTrace::BgTrace(&v27, PlayerTraceInfo);
  passEntityNum = ps->clientNum;
  EffectiveStance = PM_GetEffectiveStance(ps);
  bounds = BG_Suit_GetBounds(ps->suitIndex, EffectiveStance);
  BgTrace::LegacyTraceHandler(&v27, v16, &outParams->trace, &ps->origin, &end, bounds, passEntityNum, 16, ps);
  fraction = outParams->trace.fraction;
  v22 = end.v[1];
  outParams->pos.v[0] = (float)((float)(end.v[0] - ps->origin.v[0]) * fraction) + ps->origin.v[0];
  v23 = v22 - ps->origin.v[1];
  v24 = end.v[2];
  outParams->pos.v[1] = (float)(v23 * fraction) + ps->origin.v[1];
  outParams->pos.v[2] = (float)((float)(v24 - ps->origin.v[2]) * fraction) + ps->origin.v[2];
  if ( outParams->trace.fraction < 1.0 && BG_Glass_CanBreakGlass(&outParams->trace) )
  {
    v25 = DCONST_DVARFLT_player_glassBreakSpeedScale;
    if ( !DCONST_DVARFLT_player_glassBreakSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_glassBreakSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = v25->current.value;
    ps->velocity.v[0] = v26 * ps->velocity.v[0];
    ps->velocity.v[1] = v26 * ps->velocity.v[1];
    ps->velocity.v[2] = v26 * ps->velocity.v[2];
  }
}

/*
==============
G_Active_InitPmoveExternalSystems
==============
*/
void G_Active_InitPmoveExternalSystems(pmove_t *pm, int characterNum, const playerState_s *ps, BgObjectHandle<GMovingPlatformClient> moverHandle)
{
  GHandler *Handler; 
  GMovingPlatforms *v9; 
  unsigned int v10; 
  BGMovingPlatformClient *v11; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 447, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 448, ASSERT_TYPE_ASSERT, "( pm )", (const char *)&queryFormat, "pm") )
    __debugbreak();
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::Init(&pm->refFrame, ps, Handler);
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v9 = GMovingPlatforms::ms_instance;
  if ( !moverHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
    __debugbreak();
  v10 = moverHandle.m_objIndex - 1;
  if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( v10 >= 0xF8 )
  {
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v12, 248) )
      __debugbreak();
  }
  v11 = &v9->m_moverClientArray[v10];
  pm->movingPlatforms = v11;
  BGMovingPlatformClient::InitPMove(v11, characterNum);
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  pm->antiLag = GAntiLag::ms_gAntiLagData;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  pm->vehicles = GVehicles::ms_gVehiclesSystem;
  pm->weaponMap = GWeaponMap::GetInstance();
  pm->m_bgHandler = GHandler::getHandler();
  pm->m_playerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(characterNum);
  G_Door_GetPMoveData(pm);
}

/*
==============
G_Active_IsLiveGrenade
==============
*/
bool G_Active_IsLiveGrenade(gentity_s *ent)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v4; 

  if ( ent->s.eType != ET_MISSILE )
    return 0;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  v4 = BG_WeaponDef(WeaponForEntity, 0);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 330, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v4->offhandClass == OFFHAND_CLASS_FRAG_GRENADE;
}

/*
==============
G_Active_NotifyDetonate
==============
*/
void G_Active_NotifyDetonate(gentity_s *const ent, const Weapon *r_weapon)
{
  scrContext_t *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 230, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  v4 = ScriptContext_Server();
  GScr_Weapon_AddParam(v4, r_weapon, 0);
  GScr_Notify(ent, scr_const.detonate, 1u);
}

/*
==============
G_Active_NotifyOffHandPullback
==============
*/
void G_Active_NotifyOffHandPullback(gentity_s *ent, const Weapon *r_weapon)
{
  scrContext_t *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 211, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 212, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( !r_weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 213, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( r_weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( r_weapon )") )
    __debugbreak();
  v4 = ScriptContext_Server();
  if ( BG_GetWeaponType(r_weapon, 0) == WEAPTYPE_GRENADE )
  {
    GScr_Weapon_AddParam(v4, r_weapon, 0);
    GScr_Notify(ent, scr_const.grenade_pullback, 1u);
  }
  GScr_Weapon_AddParam(v4, r_weapon, 0);
  GScr_Notify(ent, scr_const.offhand_pullback, 1u);
}

/*
==============
G_Active_NotifySkydiveBeginFreefall
==============
*/
void G_Active_NotifySkydiveBeginFreefall(gentity_s *const ent)
{
  GScr_Notify(ent, scr_const.skydive_beginfreefall, 0);
}

/*
==============
G_Active_NotifySkydiveDeployParachute
==============
*/
void G_Active_NotifySkydiveDeployParachute(gentity_s *const ent)
{
  GScr_Notify(ent, scr_const.skydive_deployparachute, 0);
}

/*
==============
G_Active_NotifySkydiveEnd
==============
*/
void G_Active_NotifySkydiveEnd(gentity_s *const ent)
{
  GScr_Notify(ent, scr_const.skydive_end, 0);
}

/*
==============
G_Active_NotifySkydiveTouch
==============
*/
void G_Active_NotifySkydiveTouch(gentity_s *const ent)
{
  GScr_Notify(ent, scr_const.skydive_touch, 0);
}

/*
==============
G_Active_NotifyWeaponSwitchCanceled
==============
*/
void G_Active_NotifyWeaponSwitchCanceled(gentity_s *ent, const Weapon *r_weapon)
{
  const playerState_s *EntityPlayerStateConst; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v6; 
  scrContext_t *v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 422, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 423, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  v6 = EntityPlayerStateConst && (p_weapFlags = &EntityPlayerStateConst->weapCommon.weapFlags, !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x22u)) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu)) && r_weapon->weaponIdx;
  v7 = ScriptContext_Server();
  GScr_Weapon_AddParam(v7, r_weapon, v6);
  GScr_Notify(ent, scr_const.weapon_switch_canceled, 1u);
}

/*
==============
G_Active_NotifyWeaponSwitchInvalid
==============
*/
void G_Active_NotifyWeaponSwitchInvalid(const gentity_s *ent, const Weapon *r_weapon)
{
  scrContext_t *v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 436, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 437, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v4 = ScriptContext_Server();
  GScr_Weapon_AddParam(v4, r_weapon, 0);
  GScr_Notify(ent, scr_const.weapon_switch_invalid, 1u);
}

/*
==============
G_Active_NotifyWeaponSwitchStarted
==============
*/
void G_Active_NotifyWeaponSwitchStarted(gentity_s *ent, const Weapon *r_weapon)
{
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v6; 
  const BgWeaponMap *v7; 
  int EquippedWeaponIndex; 
  __int64 v9; 
  char v10; 
  scrContext_t *v11; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 400, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 401, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  Handler = GHandler::getHandler();
  v6 = (__int64)Handler->GetWeaponMap(Handler);
  v7 = (const BgWeaponMap *)v6;
  if ( !EntityPlayerStateConst )
    goto LABEL_13;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v7, EntityPlayerStateConst, r_weapon);
  if ( EquippedWeaponIndex >= 0 )
    v9 = (__int64)&EntityPlayerStateConst->weapEquippedData[EquippedWeaponIndex];
  else
LABEL_13:
    v9 = 0i64;
  if ( v9 )
    v10 = *(_BYTE *)(v9 + 2);
  else
    v10 = 0;
  v11 = ScriptContext_Server();
  GScr_Weapon_AddParam(v11, r_weapon, v10);
  GScr_Notify(ent, scr_const.weapon_switch_started, 1u);
}

/*
==============
G_Active_PlayerOrAgent_VehicleAnimationEndFrame
==============
*/
void G_Active_PlayerOrAgent_VehicleAnimationEndFrame(playerState_s *ps)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 67, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_otherFlags = &ps->otherFlags;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Bu) )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x1Cu);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x1Cu);
  }
}

/*
==============
G_Active_PlayerStateToEntityStateExtrapolate
==============
*/
void G_Active_PlayerStateToEntityStateExtrapolate(const playerState_s *ps, entityState_t *s, int gameTime, int snap)
{
  float v4; 
  const dvar_t *v9; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  GHandler *v12; 
  GWeaponMap *v13; 
  vec3_t *v14; 
  double v15; 
  double v16; 
  double v17; 
  gentity_s *v18; 
  const dvar_t *v19; 

  v4 = ps->velocity.v[0];
  s->lerp.pos.trDelta.v[0] = v4;
  s->lerp.pos.trDelta.v[1] = ps->velocity.v[1];
  s->lerp.pos.trDelta.v[2] = ps->velocity.v[2];
  if ( ((LODWORD(v4) & 0x7F800000) == 2139095040 || (LODWORD(s->lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(s->lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 84, ASSERT_TYPE_SANITY, "( !IS_NAN( ( s->lerp.pos.trDelta )[0] ) && !IS_NAN( ( s->lerp.pos.trDelta )[1] ) && !IS_NAN( ( s->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( s->lerp.pos.trDelta )[0] ) && !IS_NAN( ( s->lerp.pos.trDelta )[1] ) && !IS_NAN( ( s->lerp.pos.trDelta )[2] )") )
    __debugbreak();
  s->lerp.pos.trTime = gameTime;
  v9 = DCONST_DVARINT_g_playerMaxExtrapolationTime;
  if ( !DCONST_DVARINT_g_playerMaxExtrapolationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_playerMaxExtrapolationTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  s->lerp.pos.trDuration = v9->current.integer;
  Handler = GHandler::getHandler();
  Instance = GWeaponMap::GetInstance();
  BG_PlayerStateToEntityState(Instance, ps, s, snap, Handler);
  v12 = GHandler::getHandler();
  v13 = GWeaponMap::GetInstance();
  BG_PlayerToEntity_ProcessEvents(v13, ps, s, v12, gameTime);
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v14 = (vec3_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)s->number);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 56, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v15 = MSG_UnpackSignedFloat(s->lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
  v14[192].v[1] = *(float *)&v15;
  v16 = MSG_UnpackSignedFloat(s->lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
  v14[192].v[2] = *(float *)&v16;
  v17 = MSG_UnpackSignedFloat(s->lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
  v14[193].v[0] = *(float *)&v17;
  BG_SlopeWorldmodel_Unpack(&s->lerp.u.player.slopePacked, v14 + 1221);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 29, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v18 = &g_entities[ps->clientNum];
  if ( v18->s.eType != ET_PLAYER )
    goto LABEL_27;
  if ( !v18->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 37, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v19 = DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams;
  if ( !DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_alwaysReplicatePlayerAnimScriptInputParams") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled && (v18->client->flags & 0x800) == 0 )
LABEL_27:
    s->lerp.u.anonymous.data[4] = 0;
  s->lerp.pos.trType = TR_LINEAR_STOP;
}

/*
==============
G_Active_RemoteControlledEntityShouldUpdateAngles
==============
*/
bool G_Active_RemoteControlledEntityShouldUpdateAngles(const gentity_s *player, int msec, int *outRemoteEntNum)
{
  gclient_s *client; 
  __int16 remoteEyesEnt; 
  gentity_s *GEntity; 
  int number; 
  __int64 v10; 
  __int64 v11; 
  int EntityIndex; 
  bool result; 
  __int64 v14; 
  __int64 v15; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 153, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 154, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( msec <= 0 )
    return 0;
  client = player->client;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x10u) )
    return 0;
  remoteEyesEnt = client->ps.remoteEyesEnt;
  if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
  {
    LODWORD(v14) = remoteEyesEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v14, 2046) )
      __debugbreak();
  }
  GEntity = G_GetGEntity(client->ps.remoteEyesEnt);
  if ( !EntHandle::isDefined(&GEntity->remoteControlledOwner) )
    return 0;
  if ( !EntHandle::isDefined(&GEntity->remoteControlledOwner) )
    goto LABEL_37;
  number = GEntity->remoteControlledOwner.number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    LODWORD(v15) = 2047;
    LODWORD(v14) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = GEntity->remoteControlledOwner.number;
  if ( (unsigned int)(v10 - 1) >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v10 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v15) = GEntity->remoteControlledOwner.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  if ( &g_entities[GEntity->remoteControlledOwner.number - 1] != player )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 176, ASSERT_TYPE_ASSERT, "( remoteEnt->remoteControlledOwner.isDefinedAndMatchesEnt( player ) )", (const char *)&queryFormat, "remoteEnt->remoteControlledOwner.isDefinedAndMatchesEnt( player )") )
      __debugbreak();
  }
  if ( GEntity->s.eType != ET_MISSILE )
    return 0;
  EntityIndex = G_GetEntityIndex(GEntity);
  result = 1;
  *outRemoteEntNum = EntityIndex;
  return result;
}

/*
==============
G_Active_RemoteControlledEntityUpdateAngles
==============
*/
void G_Active_RemoteControlledEntityUpdateAngles(const gentity_s *player, const char *remoteControlAngles, const int msec, const int remoteEntNum)
{
  gentity_s *GEntity; 
  int number; 
  __int64 v10; 
  __int64 v11; 
  entityType_s eType; 
  __int64 v13; 
  __int64 v14; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 191, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 192, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( msec <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 193, ASSERT_TYPE_ASSERT, "( msec > 0 )", (const char *)&queryFormat, "msec > 0") )
    __debugbreak();
  if ( player->client->ps.remoteEyesEnt != remoteEntNum )
  {
    LODWORD(v13) = player->client->ps.remoteEyesEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 196, ASSERT_TYPE_ASSERT, "( player->client->ps.remoteEyesEnt ) == ( remoteEntNum )", "player->client->ps.remoteEyesEnt == remoteEntNum\n\t%i, %i", v13, remoteEntNum) )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&player->client->ps.pm_flags, ACTIVE, 0x10u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 197, ASSERT_TYPE_ASSERT, "( !player->client->ps.pm_flags.TestFlag( PMoveFlagsCommon::FROZEN ) )", (const char *)&queryFormat, "!player->client->ps.pm_flags.TestFlag( PMoveFlagsCommon::FROZEN )") )
    __debugbreak();
  GEntity = G_GetGEntity(remoteEntNum);
  if ( !EntHandle::isDefined(&GEntity->remoteControlledOwner) )
    goto LABEL_41;
  number = GEntity->remoteControlledOwner.number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    LODWORD(v14) = 2047;
    LODWORD(v13) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v10 = GEntity->remoteControlledOwner.number;
  if ( (unsigned int)(v10 - 1) >= 0x800 )
  {
    LODWORD(v14) = 2048;
    LODWORD(v13) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v10 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v14) = GEntity->remoteControlledOwner.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  if ( &g_entities[GEntity->remoteControlledOwner.number - 1] != player )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 201, ASSERT_TYPE_ASSERT, "( remoteEnt->remoteControlledOwner.isDefinedAndMatchesEnt( player ) )", (const char *)&queryFormat, "remoteEnt->remoteControlledOwner.isDefinedAndMatchesEnt( player )") )
      __debugbreak();
  }
  eType = GEntity->s.eType;
  if ( eType != ET_MISSILE )
  {
    LODWORD(v14) = 4;
    LODWORD(v13) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 202, ASSERT_TYPE_ASSERT, "( remoteEnt->s.eType ) == ( ET_MISSILE )", "remoteEnt->s.eType == ET_MISSILE\n\t%i, %i", v13, v14) )
      __debugbreak();
  }
  BG_UpdateClientControlledMissile(&GEntity->s.lerp.apos.trBase, remoteControlAngles, msec);
  GEntity->r.currentAngles.v[0] = GEntity->s.lerp.apos.trBase.v[0];
  GEntity->r.currentAngles.v[1] = GEntity->s.lerp.apos.trBase.v[1];
  GEntity->r.currentAngles.v[2] = GEntity->s.lerp.apos.trBase.v[2];
}

/*
==============
G_Active_SetLastServerTime
==============
*/
void G_Active_SetLastServerTime(int clientNum, int lastServerTime)
{
  gentity_s *v3; 
  gclient_s *client; 

  v3 = &g_entities[clientNum];
  if ( !v3->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 594, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( level.time - lastServerTime > 1000 )
    lastServerTime = level.time - 1000;
  client = v3->client;
  if ( lastServerTime >= client->lastServerTime || level.time <= lastServerTime )
    client->lastServerTime = lastServerTime;
}

/*
==============
G_Active_SetupGestureStopParams
==============
*/
void G_Active_SetupGestureStopParams(const playerState_s *const ps, const int serverTime, const unsigned int slot, GGestureStopParms *const outParams)
{
  __int64 v4; 
  unsigned int index; 
  double ElapsedTime; 
  __int64 v10; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 471, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 472, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( ( sizeof( *array_counter( ps->gestureState.gestures ) ) + 0 ) )", "slot doesn't index ARRAY_COUNT( ps->gestureState.gestures )\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  index = ps->gestureState.gestures[v4].index;
  outParams->gestureIndex = index;
  if ( index == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_active.cpp", 476, ASSERT_TYPE_ASSERT, "( outParams->gestureIndex != (1<<8) )", (const char *)&queryFormat, "outParams->gestureIndex != GESTURE_INVALID_INDEX") )
    __debugbreak();
  ElapsedTime = BG_Gesture_GetElapsedTime(ps, v4, serverTime);
  outParams->elapsedTime = *(float *)&ElapsedTime;
}

/*
==============
G_Active_ThirdPersonViewTrace
==============
*/
void G_Active_ThirdPersonViewTrace(const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, trace_t *trace, vec3_t *result)
{
  int passEntityNum; 
  float fraction; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t enda; 
  Bounds bounds; 

  passEntityNum = ps->vehicleState.entity;
  if ( passEntityNum == 2047 )
    passEntityNum = ps->clientNum;
  bounds.halfSize.v[1] = FLOAT_4_0;
  bounds.halfSize.v[2] = FLOAT_4_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  G_Main_TraceCapsule(trace, start, end, &bounds, passEntityNum, contentMask);
  if ( trace->startsolid )
  {
    *(_QWORD *)result->v = *(_QWORD *)start->v;
    result->v[2] = startSolidOffset + start->v[2];
  }
  else
  {
    fraction = trace->fraction;
    v12 = end->v[0];
    if ( trace->fraction == 1.0 )
    {
      result->v[0] = v12;
      result->v[1] = end->v[1];
      result->v[2] = end->v[2];
    }
    else
    {
      v13 = (float)((float)(v12 - start->v[0]) * fraction) + start->v[0];
      v14 = end->v[1] - start->v[1];
      v15 = end->v[2];
      enda.v[0] = v13;
      v16 = (float)(v15 - start->v[2]) * fraction;
      enda.v[1] = (float)(v14 * fraction) + start->v[1];
      enda.v[2] = (float)(v16 + start->v[2]) + (float)((float)(1.0 - fraction) * 32.0);
      G_Main_TraceCapsule(trace, start, &enda, &bounds, passEntityNum, contentMask);
      v17 = trace->fraction;
      v18 = enda.v[1];
      result->v[0] = (float)((float)(enda.v[0] - start->v[0]) * trace->fraction) + start->v[0];
      v19 = v18 - start->v[1];
      v20 = enda.v[2];
      result->v[1] = (float)(v19 * v17) + start->v[1];
      result->v[2] = (float)((float)(v20 - start->v[2]) * v17) + start->v[2];
    }
  }
}

