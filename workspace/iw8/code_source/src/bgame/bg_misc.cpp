/*
==============
BG_CreateXAnim
==============
*/

void __fastcall BG_CreateXAnim(XAnim_s *anims, unsigned int animIndex, const char *name, bool allowAllocs)
{
  ?BG_CreateXAnim@@YAXPEAUXAnim_s@@IPEBD_N@Z(anims, animIndex, name, allowAllocs);
}

/*
==============
BG_GetMaxSprintTime
==============
*/

int __fastcall BG_GetMaxSprintTime(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetMaxSprintTime@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsEMPJammed
==============
*/

int __fastcall BG_IsEMPJammed(const playerState_s *ps)
{
  return ?BG_IsEMPJammed@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_CheckThread
==============
*/

void BG_CheckThread(void)
{
  ?BG_CheckThread@@YAXXZ();
}

/*
==============
BG_SetShellShockParmsFromDvars
==============
*/

void __fastcall BG_SetShellShockParmsFromDvars(shellshock_parms_t *parms)
{
  ?BG_SetShellShockParmsFromDvars@@YAXPEAUshellshock_parms_t@@@Z(parms);
}

/*
==============
BG_GetNormalizedMovementCmd
==============
*/

void __fastcall BG_GetNormalizedMovementCmd(const usercmd_s *cmd, vec3_t *outMove)
{
  ?BG_GetNormalizedMovementCmd@@YAXPEBUusercmd_s@@AEATvec3_t@@@Z(cmd, outMove);
}

/*
==============
BG_LerpViewClampState
==============
*/

void __fastcall BG_LerpViewClampState(const float currentTime, viewClampState *clamp)
{
  ?BG_LerpViewClampState@@YAXMPEAUviewClampState@@@Z(currentTime, clamp);
}

/*
==============
BG_IsClientVehicleCamera
==============
*/

bool __fastcall BG_IsClientVehicleCamera(const playerState_s *ps, const BgHandler *handler)
{
  return ?BG_IsClientVehicleCamera@@YA_NPEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_BotsAreAllowed
==============
*/

bool __fastcall BG_BotsAreAllowed()
{
  return ?BG_BotsAreAllowed@@YA_NXZ();
}

/*
==============
BG_BotsUsingTeamLimits
==============
*/

bool __fastcall BG_BotsUsingTeamLimits()
{
  return ?BG_BotsUsingTeamLimits@@YA_NXZ();
}

/*
==============
BG_IsPlayerPositionQuantized
==============
*/

bool __fastcall BG_IsPlayerPositionQuantized(const playerState_s *ps)
{
  return ?BG_IsPlayerPositionQuantized@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_LandingTypeFromEntityEvent
==============
*/

FootstepMoveType_t __fastcall BG_LandingTypeFromEntityEvent(const int event)
{
  return ?BG_LandingTypeFromEntityEvent@@YA?AW4FootstepMoveType_t@@H@Z(event);
}

/*
==============
BG_ActorOrAgentSystemEnabled
==============
*/

int __fastcall BG_ActorOrAgentSystemEnabled()
{
  return ?BG_ActorOrAgentSystemEnabled@@YAHXZ();
}

/*
==============
BG_CheckProne
==============
*/

bool __fastcall BG_CheckProne(const playerState_s *ps, int passEntityNum, const vec3_t *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, const BgHandler *handler, Physics_WorldId worldId, proneCheckType_t proneCheckType, float prone_feet_dist, FeetDirection feetDirection, int *penetratedTouchEntReturn, int *proneValidFlags)
{
  return ?BG_CheckProne@@YA_NPEBUplayerState_s@@HAEBTvec3_t@@MMMPEAM2HHHPEBVBgHandler@@W4Physics_WorldId@@W4proneCheckType_t@@MW4FeetDirection@@PEAH7@Z(ps, passEntityNum, vPos, fSize, fHeight, fYaw, pfTorsoPitch, pfWaistPitch, isAlreadyProne, isOnGround, groundIsWalkable, handler, worldId, proneCheckType, prone_feet_dist, feetDirection, penetratedTouchEntReturn, proneValidFlags);
}

/*
==============
BG_BotsUsingTeamDifficulty
==============
*/

bool __fastcall BG_BotsUsingTeamDifficulty()
{
  return ?BG_BotsUsingTeamDifficulty@@YA_NXZ();
}

/*
==============
BG_CalcLinkedViewValues
==============
*/

void __fastcall BG_CalcLinkedViewValues(const playerState_s *ps, vec3_t *inOutViewAngles)
{
  ?BG_CalcLinkedViewValues@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, inOutViewAngles);
}

/*
==============
BG_GetGameTypeQuickForName
==============
*/

GameTypeQuick_t __fastcall BG_GetGameTypeQuickForName(const char *gameTypeName)
{
  return ?BG_GetGameTypeQuickForName@@YA?AW4GameTypeQuick_t@@PEBD@Z(gameTypeName);
}

/*
==============
BG_GetEntityTypeName
==============
*/

const char *__fastcall BG_GetEntityTypeName(const entityType_s eType)
{
  return ?BG_GetEntityTypeName@@YAPEBDW4entityType_s@@@Z(eType);
}

/*
==============
BG_GetEdgePhysicsProxyAsset
==============
*/

const PhysicsAsset *__fastcall BG_GetEdgePhysicsProxyAsset(const BgHandler *const handler, const entityState_t *const es)
{
  return ?BG_GetEdgePhysicsProxyAsset@@YAPEBUPhysicsAsset@@QEBVBgHandler@@QEBUentityState_t@@@Z(handler, es);
}

/*
==============
BG_UpdateViewAngleClamp
==============
*/

void __fastcall BG_UpdateViewAngleClamp(const float currentTime, const vec3_t *worldAnglesCenter, viewClampState *const clamp, playerState_s *const ps)
{
  ?BG_UpdateViewAngleClamp@@YAXMAEBTvec3_t@@QEAUviewClampState@@QEAUplayerState_s@@@Z(currentTime, worldAnglesCenter, clamp, ps);
}

/*
==============
BG_IsLandingEvent
==============
*/

bool __fastcall BG_IsLandingEvent(const int event)
{
  return ?BG_IsLandingEvent@@YA_NH@Z(event);
}

/*
==============
BG_GetEventTypeName
==============
*/

const char *__fastcall BG_GetEventTypeName(const int eventType)
{
  return ?BG_GetEventTypeName@@YAPEBDH@Z(eventType);
}

/*
==============
BG_IsThirdPersonMode
==============
*/

bool __fastcall BG_IsThirdPersonMode(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_IsThirdPersonMode@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_SetScriptWristwatchTime
==============
*/

void __fastcall BG_SetScriptWristwatchTime(playerState_s *ps, bool inUse, int hours, int minutes, bool useTransition)
{
  ?BG_SetScriptWristwatchTime@@YAXPEAUplayerState_s@@_NHH1@Z(ps, inUse, hours, minutes, useTransition);
}

/*
==============
BG_NetDataChecksum
==============
*/

unsigned int __fastcall BG_NetDataChecksum()
{
  return ?BG_NetDataChecksum@@YAIXZ();
}

/*
==============
BG_GetThirdPersonMeleeCone
==============
*/

void __fastcall BG_GetThirdPersonMeleeCone(const BgHandler *pmoveHandler, const playerState_s *ps, vec3_t *outConeOrigin, vec3_t *outConeForward, vec3_t *outConeRight, vec3_t *outConeUp)
{
  ?BG_GetThirdPersonMeleeCone@@YAXPEBVBgHandler@@PEBUplayerState_s@@AEATvec3_t@@PEAT3@33@Z(pmoveHandler, ps, outConeOrigin, outConeForward, outConeRight, outConeUp);
}

/*
==============
BG_CopyEvent
==============
*/

void __fastcall BG_CopyEvent(BgWeaponMap *dstWeaponMap, EntityEvent *dstEvent, const BgWeaponMap *srcWeaponMap, const EntityEvent *srcEvent)
{
  ?BG_CopyEvent@@YAXPEAVBgWeaponMap@@PEAUEntityEvent@@PEBV1@PEBU2@@Z(dstWeaponMap, dstEvent, srcWeaponMap, srcEvent);
}

/*
==============
BG_GetStickCartesianCoords
==============
*/

vec2_t __fastcall BG_GetStickCartesianCoords(const char x, const char y)
{
  return ?BG_GetStickCartesianCoords@@YA?ATvec2_t@@CC@Z(x, y);
}

/*
==============
BG_GetMarkDir
==============
*/

void __fastcall BG_GetMarkDir(const vec3_t *dir, const vec3_t *normal, vec3_t *out)
{
  ?BG_GetMarkDir@@YAXAEBTvec3_t@@0AEAT1@@Z(dir, normal, out);
}

/*
==============
BG_SetEventParameter
==============
*/

void __fastcall BG_SetEventParameter(BgWeaponMap *weaponMap, EntityEvent *event, const int eventType, const unsigned int eventParm)
{
  ?BG_SetEventParameter@@YAXPEAVBgWeaponMap@@PEAUEntityEvent@@HI@Z(weaponMap, event, eventType, eventParm);
}

/*
==============
BG_AISystemEnabled
==============
*/

int __fastcall BG_AISystemEnabled()
{
  return ?BG_AISystemEnabled@@YAHXZ();
}

/*
==============
BG_ScriptMoverKillcam_UnpackOffset
==============
*/

void __fastcall BG_ScriptMoverKillcam_UnpackOffset(unsigned int packed, unsigned int *outOffsetUp, unsigned int *outOffsetBack)
{
  ?BG_ScriptMoverKillcam_UnpackOffset@@YAXIPEAI0@Z(packed, outOffsetUp, outOffsetBack);
}

/*
==============
BG_BotOrAgentSystemEnabled
==============
*/

int __fastcall BG_BotOrAgentSystemEnabled()
{
  return ?BG_BotOrAgentSystemEnabled@@YAHXZ();
}

/*
==============
BG_PlayerTouchesItem
==============
*/

int __fastcall BG_PlayerTouchesItem(const playerState_s *ps, const entityState_t *item, int atTime, BgTrajectory *traj)
{
  return ?BG_PlayerTouchesItem@@YAHPEBUplayerState_s@@PEBUentityState_t@@HPEAVBgTrajectory@@@Z(ps, item, atTime, traj);
}

/*
==============
BG_UpdateViewLinkedModelTransform
==============
*/

void __fastcall BG_UpdateViewLinkedModelTransform(const ViewLinkedData *data, const tmat43_t<vec3_t> *world, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?BG_UpdateViewLinkedModelTransform@@YAXPEBUViewLinkedData@@AEBT?$tmat43_t@Tvec3_t@@@@AEATvec3_t@@2@Z(data, world, outOrigin, outAngles);
}

/*
==============
BG_CanItemBeGrabbed
==============
*/

int __fastcall BG_CanItemBeGrabbed(const BgWeaponMap *weaponMap, const entityState_t *ent, const playerState_s *ps, int touched)
{
  return ?BG_CanItemBeGrabbed@@YAHPEBVBgWeaponMap@@PEBUentityState_t@@PEBUplayerState_s@@H@Z(weaponMap, ent, ps, touched);
}

/*
==============
BG_PlayerUse_GetUseHoldTime
==============
*/

int __fastcall BG_PlayerUse_GetUseHoldTime(const HintHoldDuration hintHoldDuration)
{
  return ?BG_PlayerUse_GetUseHoldTime@@YAHW4HintHoldDuration@@@Z(hintHoldDuration);
}

/*
==============
BG_GetLandingEvent
==============
*/

entity_event_t __fastcall BG_GetLandingEvent(const float fallHeight, const bool damageApplied)
{
  return ?BG_GetLandingEvent@@YA?AW4entity_event_t@@M_N@Z(fallHeight, damageApplied);
}

/*
==============
BG_GetPlayerEyePosition
==============
*/

void __fastcall BG_GetPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, vec3_t *outOrigin, const BgHandler *handler)
{
  ?BG_GetPlayerEyePosition@@YAXPEBVBgWeaponMap@@PEBUplayerState_s@@AEATvec3_t@@PEBVBgHandler@@@Z(weaponMap, ps, outOrigin, handler);
}

/*
==============
BG_CheckProneValid
==============
*/

bool __fastcall BG_CheckProneValid(int passEntityNum, const vec3_t *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, const BgHandler *handler, Physics_WorldId worldId, proneCheckType_t proneCheckType, float prone_feet_dist, FeetDirection feetDirection, int *penetratedTouchEntReturn, int *proneValidFlags)
{
  return ?BG_CheckProneValid@@YA_NHAEBTvec3_t@@MMMPEAM1HHHPEBVBgHandler@@W4Physics_WorldId@@W4proneCheckType_t@@MW4FeetDirection@@PEAH6@Z(passEntityNum, vPos, fSize, fHeight, fYaw, pfTorsoPitch, pfWaistPitch, isAlreadyProne, isOnGround, groundIsWalkable, handler, worldId, proneCheckType, prone_feet_dist, feetDirection, penetratedTouchEntReturn, proneValidFlags);
}

/*
==============
BG_PlayerHasRoomForAmmo
==============
*/

bool __fastcall BG_PlayerHasRoomForAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_PlayerHasRoomForAmmo@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_ShieldHitDecode
==============
*/

void __fastcall BG_ShieldHitDecode(unsigned int encoded, vec3_t *result, bool *resultHitFront)
{
  ?BG_ShieldHitDecode@@YAXIAEATvec3_t@@PEA_N@Z(encoded, result, resultHitFront);
}

/*
==============
BG_DeregisterCommonDvars
==============
*/

void BG_DeregisterCommonDvars(void)
{
  ?BG_DeregisterCommonDvars@@YAXXZ();
}

/*
==============
BG_UpdateClientControlledMissile
==============
*/

void __fastcall BG_UpdateClientControlledMissile(vec3_t *angles, const char *remoteControlAngles, int msec)
{
  ?BG_UpdateClientControlledMissile@@YAXAEATvec3_t@@QEBCH@Z(angles, remoteControlAngles, msec);
}

/*
==============
BG_AgentSystemEnabled
==============
*/

int __fastcall BG_AgentSystemEnabled()
{
  return ?BG_AgentSystemEnabled@@YAHXZ();
}

/*
==============
BG_GetPlayerEyePosition_NoBob
==============
*/

void __fastcall BG_GetPlayerEyePosition_NoBob(const BgWeaponMap *weaponMap, const playerState_s *ps, vec3_t *outOrigin, const BgHandler *handler)
{
  ?BG_GetPlayerEyePosition_NoBob@@YAXPEBVBgWeaponMap@@PEBUplayerState_s@@AEATvec3_t@@PEBVBgHandler@@@Z(weaponMap, ps, outOrigin, handler);
}

/*
==============
BG_CreateXAnimFromParts
==============
*/

void __fastcall BG_CreateXAnimFromParts(XAnim_s *anims, unsigned int animIndex, XAnimParts *animParts, bool allowAllocs)
{
  ?BG_CreateXAnimFromParts@@YAXPEAUXAnim_s@@IPEAUXAnimParts@@_N@Z(anims, animIndex, animParts, allowAllocs);
}

/*
==============
BG_PlayerHasRoomForEntAllAmmoTypes
==============
*/

int __fastcall BG_PlayerHasRoomForEntAllAmmoTypes(const BgWeaponMap *weaponMap, const entityState_t *ent, const playerState_s *ps)
{
  return ?BG_PlayerHasRoomForEntAllAmmoTypes@@YAHPEBVBgWeaponMap@@PEBUentityState_t@@PEBUplayerState_s@@@Z(weaponMap, ent, ps);
}

/*
==============
BG_PlayerToEntity_SetTrajectory_Angles
==============
*/

void __fastcall BG_PlayerToEntity_SetTrajectory_Angles(const playerState_s *ps, LerpEntityState *lerp, int snap, const BgHandler *handler)
{
  ?BG_PlayerToEntity_SetTrajectory_Angles@@YAXPEBUplayerState_s@@PEAULerpEntityState@@HPEBVBgHandler@@@Z(ps, lerp, snap, handler);
}

/*
==============
BG_SetBotsConnectType
==============
*/

void __fastcall BG_SetBotsConnectType(unsigned __int8 connectType)
{
  ?BG_SetBotsConnectType@@YAXE@Z(connectType);
}

/*
==============
BG_AddPredictableEventToPlayerstate
==============
*/

void __fastcall BG_AddPredictableEventToPlayerstate(const entity_event_t newEvent, const unsigned int eventParm, const int eventTime, BgWeaponMap *weaponMap, playerState_s *ps)
{
  ?BG_AddPredictableEventToPlayerstate@@YAXW4entity_event_t@@IHPEAVBgWeaponMap@@PEAUplayerState_s@@@Z(newEvent, eventParm, eventTime, weaponMap, ps);
}

/*
==============
BG_IsPainLandingEvent
==============
*/

bool __fastcall BG_IsPainLandingEvent(const int event)
{
  return ?BG_IsPainLandingEvent@@YA_NH@Z(event);
}

/*
==============
BG_SetBotsTeamLimit
==============
*/

void __fastcall BG_SetBotsTeamLimit(int relativeTeam, int limit)
{
  ?BG_SetBotsTeamLimit@@YAXHH@Z(relativeTeam, limit);
}

/*
==============
BG_InitPlayerState_OnSpawn
==============
*/

void __fastcall BG_InitPlayerState_OnSpawn(playerState_s *ps, int clientNum, bool dummyInit)
{
  ?BG_InitPlayerState_OnSpawn@@YAXPEAUplayerState_s@@H_N@Z(ps, clientNum, dummyInit);
}

/*
==============
BG_IsGameTypeQuick_BR
==============
*/

bool __fastcall BG_IsGameTypeQuick_BR(const BgHandler *const handler)
{
  return ?BG_IsGameTypeQuick_BR@@YA_NQEBVBgHandler@@@Z(handler);
}

/*
==============
BG_Glass_CanBreakGlass
==============
*/

bool __fastcall BG_Glass_CanBreakGlass(const trace_t *trace)
{
  return ?BG_Glass_CanBreakGlass@@YA_NPEBUtrace_t@@@Z(trace);
}

/*
==============
BG_RegisterNetworkDvars
==============
*/

void BG_RegisterNetworkDvars(void)
{
  ?BG_RegisterNetworkDvars@@YAXXZ();
}

/*
==============
BG_ApplyLinkAngles
==============
*/

void __fastcall BG_ApplyLinkAngles(const vec3_t *linkAngles, vec3_t *inOutViewAngles)
{
  ?BG_ApplyLinkAngles@@YAXAEBTvec3_t@@AEAT1@@Z(linkAngles, inOutViewAngles);
}

/*
==============
BG_IsWeaponEvent
==============
*/

bool __fastcall BG_IsWeaponEvent(const int eventType)
{
  return ?BG_IsWeaponEvent@@YA_NH@Z(eventType);
}

/*
==============
BG_CopyPlayerEvents
==============
*/

void __fastcall BG_CopyPlayerEvents(BgWeaponMap *dstWeaponMap, playerState_s *dstPs, const BgWeaponMap *srcWeaponMap, const playerState_s *srcPs)
{
  ?BG_CopyPlayerEvents@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@PEBV1@PEBU2@@Z(dstWeaponMap, dstPs, srcWeaponMap, srcPs);
}

/*
==============
BG_ActionSlotIsWeaponType
==============
*/

bool __fastcall BG_ActionSlotIsWeaponType(const playerState_s *const ps, const int actionSlotIdx)
{
  return ?BG_ActionSlotIsWeaponType@@YA_NQEBUplayerState_s@@H@Z(ps, actionSlotIdx);
}

/*
==============
BG_LerpFontScale
==============
*/

void __fastcall BG_LerpFontScale(const hudelem_t *elem, int time, float *toScale)
{
  ?BG_LerpFontScale@@YAXPEBUhudelem_t@@HPEAM@Z(elem, time, toScale);
}

/*
==============
DecodeShieldSegmentToPos
==============
*/

double __fastcall DecodeShieldSegmentToPos(int segment, float min, float max, int segmentCount)
{
  double result; 

  *(float *)&result = ?DecodeShieldSegmentToPos@@YAMHMMH@Z(segment, min, max, segmentCount);
  return result;
}

/*
==============
BG_ShieldHitEncode
==============
*/

unsigned __int8 __fastcall BG_ShieldHitEncode(const vec3_t *hitPos, bool fromTheFront)
{
  return ?BG_ShieldHitEncode@@YAEAEBTvec3_t@@_N@Z(hitPos, fromTheFront);
}

/*
==============
BG_AxisFromForward
==============
*/

void __fastcall BG_AxisFromForward(const vec3_t *forward, const vec3_t *up, tmat33_t<vec3_t> *outAxis)
{
  ?BG_AxisFromForward@@YAXAEBTvec3_t@@0AEAT?$tmat33_t@Tvec3_t@@@@@Z(forward, up, outAxis);
}

/*
==============
BG_SaveShellShockDvars
==============
*/

int __fastcall BG_SaveShellShockDvars(const char *name)
{
  return ?BG_SaveShellShockDvars@@YAHPEBD@Z(name);
}

/*
==============
BG_GetPlayerEyePosition
==============
*/

void __fastcall BG_GetPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, const vec3_t *playerOrigin, const BgHandler *handler, vec3_t *outOrigin)
{
  ?BG_GetPlayerEyePosition@@YAXPEBVBgWeaponMap@@PEBUplayerState_s@@AEBTvec3_t@@PEBVBgHandler@@AEAT3@@Z(weaponMap, ps, playerOrigin, handler, outOrigin);
}

/*
==============
BG_SetPlayerDamageFlinch
==============
*/

void __fastcall BG_SetPlayerDamageFlinch(playerState_s *ps, int damage)
{
  ?BG_SetPlayerDamageFlinch@@YAXPEAUplayerState_s@@H@Z(ps, damage);
}

/*
==============
BG_GetJammingType
==============
*/

JammingType __fastcall BG_GetJammingType(const entityState_t *es)
{
  return ?BG_GetJammingType@@YA?AW4JammingType@@PEBUentityState_t@@@Z(es);
}

/*
==============
BG_PlayerStateToEntityState
==============
*/

void __fastcall BG_PlayerStateToEntityState(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *s, const int snap, const BgHandler *handler)
{
  ?BG_PlayerStateToEntityState@@YAXPEAVBgWeaponMap@@PEBUplayerState_s@@PEAUentityState_t@@HPEBVBgHandler@@@Z(weaponMap, ps, s, snap, handler);
}

/*
==============
BG_ShouldHandleThirdPersonVehicleCamera
==============
*/

bool __fastcall BG_ShouldHandleThirdPersonVehicleCamera(const playerState_s *const ps, const BgHandler *handler)
{
  return ?BG_ShouldHandleThirdPersonVehicleCamera@@YA_NQEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_BotScriptsEnabled
==============
*/

bool __fastcall BG_BotScriptsEnabled()
{
  return ?BG_BotScriptsEnabled@@YA_NXZ();
}

/*
==============
BG_IsUAVJammed
==============
*/

bool __fastcall BG_IsUAVJammed(const playerState_s *ps)
{
  return ?BG_IsUAVJammed@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsCharacterEntityIndex
==============
*/

bool __fastcall BG_IsCharacterEntityIndex(const int entityNum)
{
  return ?BG_IsCharacterEntityIndex@@YA_NH@Z(entityNum);
}

/*
==============
BG_PlayerCanPickUpWeaponOffhandClass
==============
*/

bool __fastcall BG_PlayerCanPickUpWeaponOffhandClass(const BgWeaponMap *weaponMap, const Weapon *weapon, const playerState_s *ps)
{
  return ?BG_PlayerCanPickUpWeaponOffhandClass@@YA_NPEBVBgWeaponMap@@AEBUWeapon@@PEBUplayerState_s@@@Z(weaponMap, weapon, ps);
}

/*
==============
BG_PlayerToEntity_ProcessEvents
==============
*/

void __fastcall BG_PlayerToEntity_ProcessEvents(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *es, const BgHandler *handler, const int gameTime)
{
  ?BG_PlayerToEntity_ProcessEvents@@YAXPEAVBgWeaponMap@@PEBUplayerState_s@@PEAUentityState_t@@PEBVBgHandler@@H@Z(weaponMap, ps, es, handler, gameTime);
}

/*
==============
BG_IsGameTypeQuick_BRTDM
==============
*/

bool __fastcall BG_IsGameTypeQuick_BRTDM(const BgHandler *const handler)
{
  return ?BG_IsGameTypeQuick_BRTDM@@YA_NQEBVBgHandler@@@Z(handler);
}

/*
==============
BG_RegisterCommonDvars
==============
*/

void BG_RegisterCommonDvars(void)
{
  ?BG_RegisterCommonDvars@@YAXXZ();
}

/*
==============
BG_AddEventToEntityState
==============
*/

void __fastcall BG_AddEventToEntityState(const entity_event_t newEvent, const unsigned int eventParm, BgWeaponMap *weaponMap, entityState_t *es, const int eventTime, const bool usingSharedLowLodEventBuffer)
{
  ?BG_AddEventToEntityState@@YAXW4entity_event_t@@IPEAVBgWeaponMap@@PEAUentityState_t@@H_N@Z(newEvent, eventParm, weaponMap, es, eventTime, usingSharedLowLodEventBuffer);
}

/*
==============
BG_InitPlayerState_Spectator
==============
*/

void __fastcall BG_InitPlayerState_Spectator(playerState_s *ps, int clientNum)
{
  ?BG_InitPlayerState_Spectator@@YAXPEAUplayerState_s@@H@Z(ps, clientNum);
}

/*
==============
BG_GetBotsDifficulty
==============
*/

bot_difficulty_t __fastcall BG_GetBotsDifficulty(int relativeTeam)
{
  return ?BG_GetBotsDifficulty@@YA?AW4bot_difficulty_t@@H@Z(relativeTeam);
}

/*
==============
BG_IsScavengerPickup
==============
*/

int __fastcall BG_IsScavengerPickup(const Weapon *weapon)
{
  return ?BG_IsScavengerPickup@@YAHAEBUWeapon@@@Z(weapon);
}

/*
==============
BG_GetShellshockParms
==============
*/

shellshock_parms_t *__fastcall BG_GetShellshockParms(const int index)
{
  return ?BG_GetShellshockParms@@YAPEAUshellshock_parms_t@@H@Z(index);
}

/*
==============
BG_LerpHudColors
==============
*/

void __fastcall BG_LerpHudColors(const hudelem_t *elem, int time, hudelem_color_t *toColor)
{
  ?BG_LerpHudColors@@YAXPEBUhudelem_t@@HPEAThudelem_color_t@@@Z(elem, time, toColor);
}

/*
==============
BG_ScriptMoverKillcam_PackOffset
==============
*/

void __fastcall BG_ScriptMoverKillcam_PackOffset(unsigned int offsetUp, unsigned int offsetBack, unsigned int *outPacked)
{
  ?BG_ScriptMoverKillcam_PackOffset@@YAXIIPEAI@Z(offsetUp, offsetBack, outPacked);
}

/*
==============
BG_GetCardinalYawOfIncomingVector
==============
*/

double __fastcall BG_GetCardinalYawOfIncomingVector(const vec3_t *targetAngles, const vec3_t *incomingVector, float cosineDividingAngle)
{
  double result; 

  *(float *)&result = ?BG_GetCardinalYawOfIncomingVector@@YAMAEBTvec3_t@@0M@Z(targetAngles, incomingVector, cosineDividingAngle);
  return result;
}

/*
==============
BG_GetBotsTeamLimit
==============
*/

int __fastcall BG_GetBotsTeamLimit(int relativeTeam)
{
  return ?BG_GetBotsTeamLimit@@YAHH@Z(relativeTeam);
}

/*
==============
BG_ShieldHitEncodeRandom
==============
*/

unsigned __int8 __fastcall BG_ShieldHitEncodeRandom(unsigned int *randSeed, bool damaged)
{
  return ?BG_ShieldHitEncodeRandom@@YAEPEAI_N@Z(randSeed, damaged);
}

/*
==============
BG_DeregisterNetworkDvars
==============
*/

void BG_DeregisterNetworkDvars(void)
{
  ?BG_DeregisterNetworkDvars@@YAXXZ();
}

/*
==============
BG_HasRoomForScavengerPickup
==============
*/

int __fastcall BG_HasRoomForScavengerPickup(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_HasRoomForScavengerPickup@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_AddEvent
==============
*/

void __fastcall BG_AddEvent(BgWeaponMap *weaponMap, const entity_event_t newEvent, const unsigned int eventParm, int *eventSequence, EntityEvent *events, const char addType, const unsigned int eventTime, const bool usingSharedLowLodEventBuffer)
{
  ?BG_AddEvent@@YAXPEAVBgWeaponMap@@W4entity_event_t@@IPEAHPEAUEntityEvent@@DI_N@Z(weaponMap, newEvent, eventParm, eventSequence, events, addType, eventTime, usingSharedLowLodEventBuffer);
}

/*
==============
BG_IsRagdollTrajectory
==============
*/

int __fastcall BG_IsRagdollTrajectory(const trajectory_t_secure *trajectory)
{
  return ?BG_IsRagdollTrajectory@@YAHPEBUtrajectory_t_secure@@@Z(trajectory);
}

/*
==============
BG_CalcViewClampLerpFraction
==============
*/

double __fastcall BG_CalcViewClampLerpFraction(const float currentTime, const float startTime, const float totalAccelTime, const float totalDecelTime, const float totalTime)
{
  double result; 

  *(float *)&result = ?BG_CalcViewClampLerpFraction@@YAMMMMMM@Z(currentTime, startTime, totalAccelTime, totalDecelTime, totalTime);
  return result;
}

/*
==============
BG_ShieldHitEncodeHitMarker
==============
*/

int __fastcall BG_ShieldHitEncodeHitMarker(const vec3_t *startPos, const vec3_t *hitPos)
{
  return ?BG_ShieldHitEncodeHitMarker@@YAHAEBTvec3_t@@0@Z(startPos, hitPos);
}

/*
==============
BG_SetJammingType
==============
*/

void __fastcall BG_SetJammingType(entityState_t *es, JammingType type)
{
  ?BG_SetJammingType@@YAXPEAUentityState_t@@W4JammingType@@@Z(es, type);
}

/*
==============
BG_InitPlayerState_PrepareForUseAsDelta
==============
*/

void __fastcall BG_InitPlayerState_PrepareForUseAsDelta(playerState_s *ps, int clientNum, bool dummyInit)
{
  ?BG_InitPlayerState_PrepareForUseAsDelta@@YAXPEAUplayerState_s@@H_N@Z(ps, clientNum, dummyInit);
}

/*
==============
BG_BuildRandomPatternSpline
==============
*/

void __fastcall BG_BuildRandomPatternSpline(unsigned int seed, BSplineRelaxedCBezier *outSpline)
{
  ?BG_BuildRandomPatternSpline@@YAXIPEAUBSplineRelaxedCBezier@@@Z(seed, outSpline);
}

/*
==============
BG_InitPlayerState_OnConnect
==============
*/

void __fastcall BG_InitPlayerState_OnConnect(playerState_s *ps, int clientNum)
{
  ?BG_InitPlayerState_OnConnect@@YAXPEAUplayerState_s@@H@Z(ps, clientNum);
}

/*
==============
BG_AddUnPredictableEventToPlayerstate
==============
*/

void __fastcall BG_AddUnPredictableEventToPlayerstate(const entity_event_t newEvent, const unsigned int eventParm, const int eventTime, BgWeaponMap *weaponMap, playerState_s *ps)
{
  ?BG_AddUnPredictableEventToPlayerstate@@YAXW4entity_event_t@@IHPEAVBgWeaponMap@@PEAUplayerState_s@@@Z(newEvent, eventParm, eventTime, weaponMap, ps);
}

/*
==============
BG_ClearEventParameter
==============
*/

void __fastcall BG_ClearEventParameter(BgWeaponMap *weaponMap, EntityEvent *event)
{
  ?BG_ClearEventParameter@@YAXPEAVBgWeaponMap@@PEAUEntityEvent@@@Z(weaponMap, event);
}

/*
==============
BG_GetScriptWristwatchTime
==============
*/

void __fastcall BG_GetScriptWristwatchTime(const playerState_s *ps, bool *outInUse, int *outHours, int *outMinutes, bool *outUseTransition)
{
  ?BG_GetScriptWristwatchTime@@YAXPEBUplayerState_s@@AEA_NAEAH21@Z(ps, outInUse, outHours, outMinutes, outUseTransition);
}

/*
==============
BG_IsClientVehicleTurretCamera
==============
*/

bool __fastcall BG_IsClientVehicleTurretCamera(const playerState_s *ps, const BgHandler *handler)
{
  return ?BG_IsClientVehicleTurretCamera@@YA_NPEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_GetExtrapolatedPlayerEyePosition
==============
*/

void __fastcall BG_GetExtrapolatedPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, const ClientExtrapData *extrapData, vec3_t *outOrigin, const BgHandler *handler)
{
  ?BG_GetExtrapolatedPlayerEyePosition@@YAXPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUClientExtrapData@@AEATvec3_t@@PEBVBgHandler@@@Z(weaponMap, ps, extrapData, outOrigin, handler);
}

/*
==============
BG_ClearPlayerEvents
==============
*/

void __fastcall BG_ClearPlayerEvents(BgWeaponMap *weaponMap, playerState_s *ps)
{
  ?BG_ClearPlayerEvents@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetBotsConnectType
==============
*/

unsigned __int8 __fastcall BG_GetBotsConnectType()
{
  return ?BG_GetBotsConnectType@@YAEXZ();
}

/*
==============
BG_SetBotsDifficulty
==============
*/

void __fastcall BG_SetBotsDifficulty(int relativeTeam, bot_difficulty_t difficulty)
{
  ?BG_SetBotsDifficulty@@YAXHW4bot_difficulty_t@@@Z(relativeTeam, difficulty);
}

/*
==============
BG_ClearScriptWristwatchTime
==============
*/

void __fastcall BG_ClearScriptWristwatchTime(playerState_s *ps)
{
  ?BG_ClearScriptWristwatchTime@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetPlayerViewDirection
==============
*/

void __fastcall BG_GetPlayerViewDirection(const playerState_s *ps, vec3_t *forward, vec3_t *right, vec3_t *up, const BgHandler *handler, bool ignoreArbitraryUp)
{
  ?BG_GetPlayerViewDirection@@YAXPEBUplayerState_s@@PEATvec3_t@@11PEBVBgHandler@@_N@Z(ps, forward, right, up, handler, ignoreArbitraryUp);
}

/*
==============
BG_ClearJammingType
==============
*/

void __fastcall BG_ClearJammingType(entityState_t *es)
{
  ?BG_ClearJammingType@@YAXPEAUentityState_t@@@Z(es);
}

/*
==============
PM_GetProneFeetDirection
==============
*/

FeetDirection __fastcall PM_GetProneFeetDirection(const playerState_s *ps)
{
  return ?PM_GetProneFeetDirection@@YA?AW4FeetDirection@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_InitPlayerState
==============
*/

void __fastcall BG_InitPlayerState(playerState_s *ps)
{
  ?BG_InitPlayerState@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_BotSystemEnabled
==============
*/

int __fastcall BG_BotSystemEnabled()
{
  return ?BG_BotSystemEnabled@@YAHXZ();
}

/*
==============
BG_ClearActionSlotParameter
==============
*/

void __fastcall BG_ClearActionSlotParameter(BgWeaponMap *weaponMap, playerState_s *ps, const int actionSlotIdx)
{
  ?BG_ClearActionSlotParameter@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@H@Z(weaponMap, ps, actionSlotIdx);
}

/*
==============
BG_GetThirdPersonCrosshairOffset
==============
*/

double __fastcall BG_GetThirdPersonCrosshairOffset(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_GetThirdPersonCrosshairOffset@@YAMPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
  return result;
}

/*
==============
BG_IsGameTypeQuick_ARM
==============
*/

bool __fastcall BG_IsGameTypeQuick_ARM(const BgHandler *const handler)
{
  return ?BG_IsGameTypeQuick_ARM@@YA_NQEBVBgHandler@@@Z(handler);
}

/*
==============
BG_LoadShellShockDvars
==============
*/

int __fastcall BG_LoadShellShockDvars(const char *name)
{
  return ?BG_LoadShellShockDvars@@YAHPEBD@Z(name);
}

/*
==============
BG_IsPlayerVelocityQuantized
==============
*/

bool __fastcall BG_IsPlayerVelocityQuantized(const playerState_s *ps)
{
  return ?BG_IsPlayerVelocityQuantized@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_MeleeChargeShouldLockView
==============
*/

int __fastcall BG_MeleeChargeShouldLockView(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  return ?BG_MeleeChargeShouldLockView@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@PEBVBgHandler@@@Z(weaponMap, ps, pmoveHandler);
}

/*
==============
BG_AISystemEnabled
==============
*/
int BG_AISystemEnabled()
{
  int result; 

  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
    return 1;
  if ( BG_BotSystemEnabled() )
    return 1;
  result = BG_AgentSystemEnabled();
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_ActionSlotIsWeaponType
==============
*/
bool BG_ActionSlotIsWeaponType(const playerState_s *const ps, const int actionSlotIdx)
{
  __int64 v2; 

  v2 = actionSlotIdx;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1117, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (int)v2 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1118, ASSERT_TYPE_ASSERT, "(actionSlotIdx < 7)", (const char *)&queryFormat, "actionSlotIdx < ACTIONSLOTS_COUNT_STATIC") )
    __debugbreak();
  return ps->actionSlotType[v2] == ACTIONSLOTTYPE_SPECIFYWEAPON;
}

/*
==============
BG_ActorOrAgentSystemEnabled
==============
*/
_BOOL8 BG_ActorOrAgentSystemEnabled()
{
  return BG_AgentSystemEnabled() || Com_GameMode_SupportsFeature(WEAPON_READY);
}

/*
==============
BG_AddEvent
==============
*/
void BG_AddEvent(BgWeaponMap *weaponMap, const entity_event_t newEvent, const unsigned int eventParm, int *eventSequence, EntityEvent *events, const char addType, const unsigned int eventTime, const bool usingSharedLowLodEventBuffer)
{
  int v9; 
  int v10; 

  if ( newEvent )
  {
    v9 = *eventSequence;
    if ( usingSharedLowLodEventBuffer )
      v10 = (unsigned __int16)v9 % 3u;
    else
      v10 = v9 & 3;
    BG_AddEventToEventIndex_NoIncrement(weaponMap, newEvent, eventParm, v10, eventSequence, events, addType, eventTime);
    *eventSequence = *eventSequence & 0xFFFF0000 | (unsigned __int8)(*(_BYTE *)eventSequence + 1);
  }
}

/*
==============
BG_AddEventToEntityState
==============
*/
void BG_AddEventToEntityState(const entity_event_t newEvent, const unsigned int eventParm, BgWeaponMap *weaponMap, entityState_t *es, const int eventTime, const bool usingSharedLowLodEventBuffer)
{
  EventSequence *eventSequence; 
  EventSequence v8; 
  int v9; 

  if ( newEvent )
  {
    eventSequence = &es->eventSequence;
    v8.combined = (int)es->eventSequence;
    if ( usingSharedLowLodEventBuffer )
      v9 = (unsigned __int16)v8.highLod % 3u;
    else
      v9 = v8.combined & 3;
    BG_AddEventToEventIndex_NoIncrement(weaponMap, newEvent, eventParm, v9, &eventSequence->combined, es->events, 69, eventTime);
    eventSequence->combined = eventSequence->combined & 0xFFFF0000 | (unsigned __int8)(LOBYTE(eventSequence->combined) + 1);
  }
}

/*
==============
BG_AddEventToEventIndex_NoIncrement
==============
*/
void BG_AddEventToEventIndex_NoIncrement(BgWeaponMap *weaponMap, const entity_event_t newEvent, const unsigned int eventParm, const int eventIndex, int *eventSequence, EntityEvent *events, const char addType, const unsigned int eventTime)
{
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  int EventParamBits; 
  __int64 v13; 
  EntityEvent *v14; 
  const Weapon *Weapon; 
  const Weapon *v16; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v8 = eventIndex;
  v10 = eventParm;
  v11 = newEvent;
  if ( newEvent == EV_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1270, ASSERT_TYPE_ASSERT, "(newEvent != EV_NONE)", (const char *)&queryFormat, "newEvent != EV_NONE") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1271, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !events && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1272, ASSERT_TYPE_ASSERT, "(events)", (const char *)&queryFormat, "events") )
    __debugbreak();
  if ( !eventSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1273, ASSERT_TYPE_ASSERT, "(eventSequence)", (const char *)&queryFormat, "eventSequence") )
    __debugbreak();
  if ( (unsigned int)v11 >= 0xE3 )
  {
    LODWORD(v18) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1274, ASSERT_TYPE_ASSERT, "(unsigned)( newEvent ) < (unsigned)( EV_MAX_EVENTS )", "newEvent doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v18, 227) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    EventParamBits = MSG_GetEventParamBits(v11);
    v13 = -1i64;
    if ( EventParamBits != 32i64 )
      v13 = ~(-1i64 << EventParamBits);
    if ( (v13 & v10) != v10 )
    {
      LODWORD(v19) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1284, ASSERT_TYPE_ASSERT, "((eventParm & mask) == eventParm)", "%s\n\tParameter for event %d is not in the range [0-%llu]: eventParm = %u", "(eventParm & mask) == eventParm", v19, (1i64 << EventParamBits) - 1, v10) )
        __debugbreak();
    }
  }
  if ( Dvar_GetBoolSafe("NQRKPSTMT") )
  {
    LODWORD(v19) = v10;
    LODWORD(fmt) = *eventSequence;
    Com_Printf(17, "AddEvent [%c] | %8d | %4d | %30s | %ul\n", (unsigned int)addType, eventTime, fmt, s_bgEventNames[v11], v19);
  }
  v14 = &events[v8];
  BG_ClearEventParameter(weaponMap, v14);
  v14->eventType = v11;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1245, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1246, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
    __debugbreak();
  if ( (unsigned int)v11 >= 0xE3 )
  {
    LODWORD(v19) = 227;
    LODWORD(v18) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( s_bgEventParmType[v11] == EVENT_PARAM_WEAPON )
  {
    Weapon = BgWeaponMap::GetWeapon(weaponMap, (BgWeaponHandle)v10);
    v16 = Weapon;
    if ( (_DWORD)v10 && !Weapon->weaponIdx )
    {
      LODWORD(v20) = v11;
      LODWORD(v19) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1256, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", "%s\n\tBG_SetEventParameter(): failed to find valid weapon for handle %i (eventType %i)", "weapon.weaponIdx != WP_NONE", v19, v20) )
        __debugbreak();
    }
    BG_SetWeaponForEntityEventParm(weaponMap, &v14->eventParm, v16);
  }
  else
  {
    v14->eventParm = v10;
  }
}

/*
==============
BG_AddPredictableEventToPlayerstate
==============
*/
void BG_AddPredictableEventToPlayerstate(const entity_event_t newEvent, const unsigned int eventParm, const int eventTime, BgWeaponMap *weaponMap, playerState_s *ps)
{
  playerEvents_t *p_pe; 

  BG_CollectPredictableEvent(newEvent, eventParm, eventTime, weaponMap, ps);
  p_pe = &ps->pe;
  if ( newEvent )
  {
    BG_AddEventToEventIndex_NoIncrement(weaponMap, newEvent, eventParm, p_pe->eventSequence & 3, &ps->pe.eventSequence, ps->pe.events, 80, eventTime);
    p_pe->eventSequence = p_pe->eventSequence & 0xFFFF0000 | (unsigned __int8)(LOBYTE(p_pe->eventSequence) + 1);
  }
}

/*
==============
BG_AddUnPredictableEventToPlayerstate
==============
*/
void BG_AddUnPredictableEventToPlayerstate(const entity_event_t newEvent, const unsigned int eventParm, const int eventTime, BgWeaponMap *weaponMap, playerState_s *ps)
{
  if ( newEvent )
  {
    BG_AddEventToEventIndex_NoIncrement(weaponMap, newEvent, eventParm, ps->unpredictableEventSequence & 3, &ps->unpredictableEventSequence, ps->unpredictableEvents, 85, eventTime);
    ps->unpredictableEventSequence = ps->unpredictableEventSequence & 0xFFFF0000 | (unsigned __int8)(LOBYTE(ps->unpredictableEventSequence) + 1);
  }
}

/*
==============
BG_AgentSystemEnabled
==============
*/
_BOOL8 BG_AgentSystemEnabled()
{
  GameStateInfo *v0; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || Com_FrontEndScene_IsActive() )
    return 0i64;
  v0 = GameStateInfo_Get();
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4121, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  return v0->agentMaxCount != 0;
}

/*
==============
BG_ApplyLinkAngles
==============
*/
void BG_ApplyLinkAngles(const vec3_t *linkAngles, vec3_t *inOutViewAngles)
{
  const dvar_t *v3; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v8; 

  AnglesToAxis(linkAngles, &axis);
  MatrixTranspose(&axis, &out);
  AnglesToAxis(inOutViewAngles, &in1);
  MatrixMultiply(&in1, &out, &v8);
  AxisToAngles(&v8, &angles);
  v3 = DCONST_DVARMPFLT_player_view_pitch_up;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( inOutViewAngles->v[0] >= -90.0 || v3->current.value <= 85.0 )
    inOutViewAngles->v[2] = COERCE_FLOAT(LODWORD(angles.v[2]) ^ _xmm);
  else
    inOutViewAngles->v[2] = COERCE_FLOAT(LODWORD(angles.v[2]) ^ _xmm) - 180.0;
}

/*
==============
BG_AxisFromForward
==============
*/
void BG_AxisFromForward(const vec3_t *forward, const vec3_t *up, tmat33_t<vec3_t> *outAxis)
{
  __int128 v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v19; 
  __int128 v20; 
  vec3_t v1; 

  _XMM6 = 0i64;
  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  if ( VecNCompareCustomEpsilon(forward->v, v1.v, 0.001, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2925, ASSERT_TYPE_ASSERT, "(Vec3NotZeroEpsilon( forward ))", (const char *)&queryFormat, "Vec3NotZeroEpsilon( forward )") )
    __debugbreak();
  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  if ( VecNCompareCustomEpsilon(up->v, v1.v, 0.001, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2926, ASSERT_TYPE_ASSERT, "(Vec3NotZeroEpsilon( up ))", (const char *)&queryFormat, "Vec3NotZeroEpsilon( up )") )
    __debugbreak();
  v7 = LODWORD(forward->v[0]);
  v8 = v7;
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(forward->v[1] * forward->v[1])) + (float)(forward->v[2] * forward->v[2]));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  outAxis->m[0].v[0] = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  outAxis->m[0].v[1] = (float)(1.0 / *(float *)&_XMM0) * forward->v[1];
  outAxis->m[0].v[2] = (float)(1.0 / *(float *)&_XMM0) * forward->v[2];
  v12 = up->v[0];
  outAxis->m[2].v[0] = up->v[0];
  *(float *)&_XMM0 = up->v[1];
  outAxis->m[2].v[1] = *(float *)&_XMM0;
  v13 = up->v[2];
  outAxis->m[2].v[2] = v13;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*(float *)&_XMM0 * outAxis->m[0].v[1]) + (float)(v12 * outAxis->m[0].v[0])) + (float)(v13 * outAxis->m[0].v[2])) & _xmm) >= 0.99900001 )
  {
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm
    {
      vcmpless xmm1, xmm6, xmm4
      vblendvps xmm1, xmm0, xmm7, xmm1
    }
    v1.v[1] = *(float *)&_XMM1;
    v1.v[0] = 0.0;
    v1.v[2] = 0.0;
    BG_AxisFromForward(forward, &v1, outAxis);
  }
  else
  {
    Vec3Cross(&outAxis->m[2], outAxis->m, &outAxis->m[1]);
    Vec3Cross(outAxis->m, &outAxis->m[1], &outAxis->m[2]);
    v14 = LODWORD(outAxis->m[1].v[0]);
    v15 = v14;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(outAxis->m[1].v[1] * outAxis->m[1].v[1])) + (float)(outAxis->m[1].v[2] * outAxis->m[1].v[2]));
    _XMM4 = v15;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
    outAxis->m[1].v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    outAxis->m[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * outAxis->m[1].v[1];
    outAxis->m[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * outAxis->m[1].v[2];
    v19 = LODWORD(outAxis->m[2].v[0]);
    v20 = v19;
    *(float *)&v20 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(outAxis->m[2].v[1] * outAxis->m[2].v[1])) + (float)(outAxis->m[2].v[2] * outAxis->m[2].v[2]));
    _XMM4 = v20;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
    outAxis->m[2].v[0] = *(float *)&v19 * (float)(1.0 / *(float *)&_XMM0);
    outAxis->m[2].v[1] = (float)(1.0 / *(float *)&_XMM0) * outAxis->m[2].v[1];
    outAxis->m[2].v[2] = (float)(1.0 / *(float *)&_XMM0) * outAxis->m[2].v[2];
  }
}

/*
==============
BG_BotOrAgentSystemEnabled
==============
*/
int BG_BotOrAgentSystemEnabled()
{
  int result; 

  if ( BG_BotSystemEnabled() )
    return 1;
  result = BG_AgentSystemEnabled();
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_BotScriptsEnabled
==============
*/
bool BG_BotScriptsEnabled()
{
  return (BG_BotSystemEnabled() || BG_AgentSystemEnabled()) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG;
}

/*
==============
BG_BotSystemEnabled
==============
*/
_BOOL8 BG_BotSystemEnabled()
{
  GameStateInfo *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || Com_FrontEndScene_IsActive() || (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    v0 = GameStateInfo_Get();
    if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4209, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    if ( v0->usingBotsConnectType )
      return 1i64;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 0i64;
  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1i64;
  v2 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
      return 1i64;
  }
  v4 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.enabled || BG_Bots_IsBotMatchMakingAllowedForPlaylist() || Dvar_GetBool_Internal_DebugName(DVARBOOL_bot_spawnControlledByDvar, "bot_spawnControlledByDvar");
}

/*
==============
BG_BotsAreAllowed
==============
*/
bool BG_BotsAreAllowed()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 0;
  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 1;
  v1 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v2 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled )
      return 1;
  }
  v3 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled || BG_Bots_IsBotMatchMakingAllowedForPlaylist() || Dvar_GetBool_Internal_DebugName(DVARBOOL_bot_spawnControlledByDvar, "bot_spawnControlledByDvar");
}

/*
==============
BG_BotsUsingTeamDifficulty
==============
*/
bool BG_BotsUsingTeamDifficulty()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  v0 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( !v1->current.enabled )
      return 1;
  }
  v3 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 1;
  v4 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.enabled || BG_Bots_IsBotMatchMakingAllowedForPlaylist();
}

/*
==============
BG_BotsUsingTeamLimits
==============
*/
bool BG_BotsUsingTeamLimits()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  bool result; 

  v0 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( !v1->current.enabled )
      return 1;
  }
  v2 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return 1;
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return 1;
  result = BG_Bots_IsBotMatchMakingAllowedForPlaylist();
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_BuildRandomPatternSpline
==============
*/
void BG_BuildRandomPatternSpline(unsigned int seed, BSplineRelaxedCBezier *outSpline)
{
  int v4; 
  float *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  double v10; 
  float maxValue; 
  double v12; 
  float v13; 
  double v14; 
  unsigned int pHoldrand[4]; 
  vec3_t points; 
  char v17; 

  if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4696, ASSERT_TYPE_ASSERT, "(outSpline)", (const char *)&queryFormat, "outSpline") )
    __debugbreak();
  pHoldrand[0] = seed;
  BG_srand(pHoldrand);
  v4 = BG_irand(0, 1, pHoldrand);
  v5 = (float *)&v17;
  points.v[0] = 0.0;
  points.v[1] = 0.0;
  points.v[2] = 0.0;
  v6 = 4i64 * v4;
  v7 = 0;
  do
  {
    v8 = v6 + v7 % 4;
    v9 = v8;
    v10 = BG_flrand(RANDOM_PATTERNS[0].pointRanges[v8].limits[0].minValue, RANDOM_PATTERNS[0].pointRanges[v8].limits[0].maxValue, pHoldrand);
    maxValue = RANDOM_PATTERNS[0].pointRanges[v9].limits[1].maxValue;
    *(v5 - 1) = *(float *)&v10;
    v12 = BG_flrand(RANDOM_PATTERNS[0].pointRanges[v9].limits[1].minValue, maxValue, pHoldrand);
    v13 = RANDOM_PATTERNS[0].pointRanges[v9].limits[2].maxValue;
    *v5 = *(float *)&v12;
    v14 = BG_flrand(RANDOM_PATTERNS[0].pointRanges[v9].limits[2].minValue, v13, pHoldrand);
    ++v7;
    v5[1] = *(float *)&v14;
    v5 += 3;
  }
  while ( (unsigned int)(v7 + 1) < 0xF );
  BG_BSpline_RelaxedCBezier_Build(&points, 0xFu, 0, 1, outSpline);
}

/*
==============
BG_CalcLinkedViewValues
==============
*/
void BG_CalcLinkedViewValues(const playerState_s *ps, vec3_t *inOutViewAngles)
{
  int pm_type; 
  const dvar_t *v5; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v10; 

  pm_type = ps->pm_type;
  if ( (pm_type == 1 || pm_type == 8 || GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u)) && !BG_IsVehicleActive(ps) && (!BG_IsTurretActive(ps) || GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 7u)) )
  {
    AnglesToAxis(&ps->linkAngles, &axis);
    MatrixTranspose(&axis, &out);
    AnglesToAxis(inOutViewAngles, &in1);
    MatrixMultiply(&in1, &out, &v10);
    AxisToAngles(&v10, &angles);
    v5 = DCONST_DVARMPFLT_player_view_pitch_up;
    if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( inOutViewAngles->v[0] >= -90.0 || v5->current.value <= 85.0 )
      inOutViewAngles->v[2] = COERCE_FLOAT(LODWORD(angles.v[2]) ^ _xmm);
    else
      inOutViewAngles->v[2] = COERCE_FLOAT(LODWORD(angles.v[2]) ^ _xmm) - 180.0;
  }
}

/*
==============
BG_CalcViewClampLerpFraction
==============
*/

float __fastcall BG_CalcViewClampLerpFraction(double currentTime, const float startTime, const float totalAccelTime, const float totalDecelTime, const float totalTime)
{
  float v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  __int128 v13; 
  bool v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v22; 

  if ( totalTime <= 0.001 )
    return FLOAT_1_0;
  v7 = 2.0 / (float)((float)((float)(totalTime * 2.0) - totalAccelTime) - totalDecelTime);
  v9 = *(_OWORD *)&currentTime;
  *(float *)&v9 = *(float *)&currentTime - startTime;
  v8 = v9;
  if ( (float)(*(float *)&currentTime - startTime) >= totalAccelTime )
  {
    v13 = LODWORD(totalTime);
    *(float *)&v13 = totalTime - totalDecelTime;
    v12 = v13;
    v14 = *(float *)&v8 < (float)(totalTime - totalDecelTime);
    v16 = v8;
    *(float *)&v16 = *(float *)&v8 - totalAccelTime;
    v15 = v16;
    *(float *)&v8 = totalAccelTime;
    if ( v14 )
    {
      v10 = v16;
      LODWORD(_XMM8) = 0;
    }
    else
    {
      v17 = v12;
      *(float *)&v17 = *(float *)&v12 - totalAccelTime;
      v10 = v17;
      v19 = v15;
      *(float *)&v19 = *(float *)&v15 - *(float *)&v10;
      _XMM0 = v19;
      __asm { vminss  xmm8, xmm0, xmm7 }
    }
  }
  else
  {
    v10 = 0i64;
    LODWORD(_XMM8) = 0;
  }
  if ( totalAccelTime == 0.0 )
    v20 = 0.0;
  else
    v20 = (float)((float)((float)(v7 / totalAccelTime) * 0.5) * *(float *)&v8) * *(float *)&v8;
  v21 = v10;
  *(float *)&v21 = *(float *)&v10 * v7;
  if ( totalDecelTime == 0.0 )
    v22 = 0.0;
  else
    v22 = (float)(v7 - (float)((float)((float)(0.5 / totalDecelTime) * v7) * *(float *)&_XMM8)) * *(float *)&_XMM8;
  *(float *)&v21 = (float)(*(float *)&v21 + v20) + v22;
  _XMM1 = v21;
  __asm
  {
    vmaxss  xmm1, xmm1, xmm4
    vminss  xmm0, xmm1, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CanItemBeGrabbed
==============
*/
__int64 BG_CanItemBeGrabbed(const BgWeaponMap *weaponMap, const entityState_t *ent, const playerState_s *ps, int touched)
{
  __int16 v4; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v10; 
  int HasRoomForScavengerPickup; 
  __int64 v13; 
  Weapon weapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1014, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1015, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1016, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu) )
    return 0i64;
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, ent);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && (ent->clientNum == ps->clientNum || BG_DoubleRiotShieldCheck(weaponMap, WeaponForEntity, ps)) )
    return 0i64;
  if ( BG_IsScavengerPickup(WeaponForEntity) )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 990, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 991, ASSERT_TYPE_ASSERT, "(weaponEntState)", (const char *)&queryFormat, "weaponEntState") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 992, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( WeaponForEntity->weaponIdx >= 0x226u )
    {
      LODWORD(v13) = WeaponForEntity->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v13, 550) )
        __debugbreak();
    }
    if ( !WeaponForEntity->weaponIdx )
      return 0i64;
    v10 = BG_WeaponDef(WeaponForEntity, 0);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 833, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( v10->inventoryType != WEAPINVENTORY_SCAVENGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 998, ASSERT_TYPE_ASSERT, "(BG_IsScavengerPickup( weapon ))", (const char *)&queryFormat, "BG_IsScavengerPickup( weapon )") )
      __debugbreak();
    if ( !touched || !BG_HasPerk(&ps->perks, 0x23u) )
      return 0i64;
    HasRoomForScavengerPickup = BG_HasRoomForScavengerPickup(weaponMap, ps);
    goto LABEL_40;
  }
  if ( BG_WeaponEntCanBeGrabbed(weaponMap, ent, ps, touched, WeaponForEntity) )
    return 1i64;
  weapon = *BG_GetAltWeapon(WeaponForEntity);
  if ( v4 )
  {
    HasRoomForScavengerPickup = BG_WeaponEntCanBeGrabbed(weaponMap, ent, ps, touched, &weapon);
LABEL_40:
    if ( HasRoomForScavengerPickup )
      return 1i64;
  }
  return 0i64;
}

/*
==============
BG_CheckProne
==============
*/
bool BG_CheckProne(const playerState_s *ps, int passEntityNum, const vec3_t *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, const BgHandler *handler, Physics_WorldId worldId, proneCheckType_t proneCheckType, float prone_feet_dist, FeetDirection feetDirection, int *penetratedTouchEntReturn, int *proneValidFlags)
{
  const dvar_t *v21; 
  bool result; 

  if ( proneValidFlags )
    *proneValidFlags = 0;
  if ( feetDirection == FEETDIR_FRONT && ps && proneCheckType == PCT_CLIENT )
  {
    v21 = DVARBOOL_killswitch_last_stand_rewrite_enabled;
    if ( !DVARBOOL_killswitch_last_stand_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_rewrite_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
      return 1;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    return BG_CheckProneValid(passEntityNum, vPos, fSize, fHeight, fYaw, pfTorsoPitch, pfWaistPitch, isAlreadyProne, isOnGround, groundIsWalkable, handler, worldId, proneCheckType, prone_feet_dist, feetDirection, penetratedTouchEntReturn, proneValidFlags);
  if ( BG_IsPlayerLinked(ps) )
    return 1;
  if ( isOnGround )
  {
    BG_CheckProne_AdjustAngles(passEntityNum, vPos, fSize, fHeight, fYaw, pfTorsoPitch, pfWaistPitch, isAlreadyProne, isOnGround, groundIsWalkable, handler, worldId, proneCheckType, prone_feet_dist, feetDirection, penetratedTouchEntReturn);
    return 1;
  }
  result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 2u);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_CheckProneValid
==============
*/
char BG_CheckProneValid(int passEntityNum, const vec3_t *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, const BgHandler *handler, Physics_WorldId worldId, proneCheckType_t proneCheckType, float prone_feet_dist, FeetDirection feetDirection, int *penetratedTouchEntReturn, int *proneValidFlags)
{
  int v18; 
  const dvar_t *v21; 
  int contentMask; 
  float v23; 
  float v24; 
  BgHandler_vtbl *v25; 
  Physics_WorldId v26; 
  float v31; 
  BgHandler_vtbl *v32; 
  float v33; 
  float v34; 
  Physics_WorldId v35; 
  const dvar_t *v36; 
  float fraction; 
  float v38; 
  int v39; 
  float v40; 
  float v41; 
  __int128 v43; 
  BgHandler_vtbl *v46; 
  Physics_WorldId v47; 
  __int128 v49; 
  float v50; 
  __int128 v51; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  BgHandler_vtbl *v57; 
  float v61; 
  Physics_WorldId v62; 
  const dvar_t *v63; 
  float *v64; 
  float *v65; 
  float v66; 
  float v67; 
  __int128 v68; 
  float v69; 
  __int128 v70; 
  BgHandler_vtbl *v71; 
  int v72; 
  __int128 v73; 
  float v74; 
  float v75; 
  float v76; 
  float v80; 
  Physics_WorldId v81; 
  float v82; 
  BgHandler_vtbl *v83; 
  Physics_WorldId v84; 
  BgHandler_vtbl *v85; 
  Physics_WorldId v86; 
  float v87; 
  float v88; 
  __int128 v89; 
  float v90; 
  __int128 v91; 
  __int128 v92; 
  float v93; 
  __int128 v94; 
  __int128 v98; 
  bool v99; 
  float v101; 
  __int128 v102; 
  __int128 v103; 
  float v104; 
  __int128 v105; 
  __int128 v106; 
  float v111; 
  float v114; 
  BgHandler_vtbl *v115; 
  Physics_WorldId v116; 
  BgHandler_vtbl *v117; 
  Physics_WorldId v118; 
  int v119; 
  float v120; 
  int skipEntities; 
  int v123; 
  int v124; 
  int v125; 
  float *v126; 
  float *v127; 
  vec3_t end; 
  vec3_t start; 
  vec3_t vec; 
  vec3_t forward; 
  Bounds bounds; 
  trace_t results; 

  v18 = 1;
  v127 = pfTorsoPitch;
  v126 = pfWaistPitch;
  v119 = 0;
  *(float *)&v124 = fSize;
  if ( (unsigned int)feetDirection >= FEETDIR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2498, ASSERT_TYPE_ASSERT, "(unsigned)( feetDirection ) < (unsigned)( FEETDIR_COUNT )", "feetDirection doesn't index FEETDIR_COUNT\n\t%i not in [0, %i)", feetDirection, 2) )
    __debugbreak();
  if ( proneValidFlags )
    *proneValidFlags = 0;
  if ( proneCheckType == PCT_CLIENT )
  {
    v21 = DVARBOOL_killswitch_last_stand_rewrite_enabled;
    if ( !DVARBOOL_killswitch_last_stand_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_rewrite_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled && feetDirection == FEETDIR_FRONT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2510, ASSERT_TYPE_ASSERT, "( feetDirection ) != ( FEETDIR_FRONT )", "%s != %s\n\t%i, %i", "feetDirection", "FEETDIR_FRONT", 0, 0i64) )
      __debugbreak();
  }
  Physics_GetLocalClientForWorld(worldId);
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = 2047;
  if ( proneCheckType == PCT_CLIENT )
    Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80);
  contentMask = 65553;
  if ( proneCheckType )
    contentMask = 131089;
  if ( !isAlreadyProne )
  {
    v23 = vPos->v[0];
    v24 = vPos->v[1];
    v25 = handler->__vftable;
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    bounds.midPoint.v[2] = fHeight * 0.5;
    bounds.halfSize.v[2] = fHeight * 0.5;
    start.v[2] = vPos->v[2];
    end.v[2] = start.v[2] + 10.0;
    bounds.halfSize.v[0] = fSize;
    bounds.halfSize.v[1] = fSize;
    start.v[0] = v23;
    start.v[1] = v24;
    end.v[0] = v23;
    end.v[1] = v24;
    skipEntities = passEntityNum;
    v26 = v25->GetPhysicsWorldId((BgHandler *)handler);
    PhysicsQuery_LegacyCapsuleTrace(v26, &results, &start, &end, &bounds, &skipEntities, 1, contentMask, NULL, 0, NULL, NULL);
    if ( penetratedTouchEntReturn )
      *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
    if ( results.allsolid )
      return 0;
  }
  if ( isOnGround && !groundIsWalkable )
    return 0;
  _XMM4 = LODWORD(fYaw);
  *(_OWORD *)bounds.midPoint.v = _xmm;
  _XMM0 = (unsigned int)feetDirection;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2; yaw
  }
  bounds.halfSize.v[1] = FLOAT_6_0;
  bounds.halfSize.v[2] = FLOAT_6_0;
  YawVectors(*(float *)&_XMM0, &forward, NULL);
  v31 = vPos->v[1];
  v32 = handler->__vftable;
  start.v[0] = vPos->v[0];
  v33 = fHeight - 6.0;
  v34 = (float)(fHeight - 6.0) + vPos->v[2];
  end.v[0] = (float)((float)(prone_feet_dist - 6.0) * forward.v[0]) + start.v[0];
  end.v[1] = (float)((float)(prone_feet_dist - 6.0) * forward.v[1]) + v31;
  end.v[2] = (float)((float)(prone_feet_dist - 6.0) * forward.v[2]) + v34;
  start.v[1] = v31;
  start.v[2] = v34;
  *(float *)&skipEntities = prone_feet_dist - 6.0;
  v125 = passEntityNum;
  v35 = v32->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v35, &results, &start, &end, &bounds, &v125, 1, contentMask, NULL, 0, NULL, NULL);
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
  v36 = DVARBOOL_bg_debugProne;
  if ( !DVARBOOL_bg_debugProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugProne") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  fraction = results.fraction;
  if ( results.fraction >= 1.0 )
  {
    v39 = passEntityNum;
    goto LABEL_41;
  }
  if ( !isOnGround )
    return 0;
  v38 = (float)((float)(prone_feet_dist - 6.0) * results.fraction) + 6.0;
  v119 = 1;
  if ( v38 < (float)(fSize + 2.0) )
    return 0;
  v39 = passEntityNum;
  v40 = (float)(v33 * 0.69999999) + 18.0;
  if ( v38 >= v40 )
    goto LABEL_42;
  v41 = (float)(end.v[2] + 22.0) - start.v[2];
  v43 = LODWORD(end.v[1]);
  end.v[2] = end.v[2] + 22.0;
  *(float *)&v43 = fsqrt((float)((float)((float)(end.v[1] - start.v[1]) * (float)(end.v[1] - start.v[1])) + (float)((float)(end.v[0] - start.v[0]) * (float)(end.v[0] - start.v[0]))) + (float)(v41 * v41));
  _XMM9 = v43;
  __asm
  {
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm0, xmm9, xmm11, xmm0
  }
  v125 = passEntityNum;
  v119 = 0;
  v46 = handler->__vftable;
  forward.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(end.v[0] - start.v[0]);
  forward.v[2] = (float)(1.0 / *(float *)&_XMM0) * v41;
  forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(end.v[1] - start.v[1]);
  v47 = v46->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v47, &results, &start, &end, &bounds, &v125, 1, contentMask, NULL, 0, NULL, NULL);
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
  Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugProne, "bg_debugProne");
  fraction = results.fraction;
  if ( results.fraction >= 1.0 )
  {
LABEL_41:
    v38 = prone_feet_dist;
    goto LABEL_42;
  }
  v38 = (float)(*(float *)&v43 * results.fraction) + 6.0;
  v119 = 1;
  if ( v38 < v40 )
    return 0;
LABEL_42:
  v49 = LODWORD(end.v[1]);
  v50 = (float)((float)(end.v[0] - start.v[0]) * fraction) + start.v[0];
  *(float *)&v49 = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
  v51 = v49;
  _XMM0 = (unsigned int)isOnGround;
  v53 = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
  v54 = (float)(18.0 * forward.v[0]) + vPos->v[0];
  v55 = (float)(18.0 * forward.v[1]) + vPos->v[1];
  v56 = (float)((float)(18.0 * forward.v[2]) + vPos->v[2]) + v33;
  v125 = v39;
  v57 = handler->__vftable;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_2_5);
  __asm { vblendvps xmm0, xmm1, xmm11, xmm2 }
  start.v[1] = v55;
  end.v[1] = v55;
  v61 = (float)((float)(*(float *)&_XMM0 * fSize) + v33) - 6.0;
  end.v[2] = v56 - v61;
  *(float *)&v123 = v53;
  start.v[0] = v54;
  start.v[2] = v56;
  end.v[0] = v54;
  v62 = v57->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v62, &results, &start, &end, &bounds, &v125, 1, contentMask, NULL, 0, NULL, NULL);
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
  v63 = DVARBOOL_bg_debugProne;
  if ( !DVARBOOL_bg_debugProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugProne") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  if ( results.fraction == 1.0 )
  {
    v64 = v126;
    v65 = v127;
    if ( proneValidFlags )
      *proneValidFlags |= 1u;
    goto $fail;
  }
  if ( !results.walkable )
  {
LABEL_65:
    if ( proneValidFlags )
      *proneValidFlags |= 2u;
    return 0;
  }
  v66 = (float)(v61 * results.fraction) + 6.0;
  v67 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v68 = LODWORD(end.v[2]);
  v69 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  *(float *)&v68 = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) - 6.0;
  v70 = v68;
  if ( v119 )
  {
    if ( (float)(v38 - v66) < (float)(v66 * -0.75) )
      goto LABEL_101;
    v71 = handler->__vftable;
    v72 = passEntityNum;
    v73 = v51;
    v74 = (float)(v50 - v67) + (float)(6.0 * forward.v[0]);
    v75 = (float)(*(float *)&v51 - v69) + (float)(6.0 * forward.v[1]);
    v76 = (float)((float)(*(float *)&v123 - *(float *)&v70) + (float)(6.0 * forward.v[2])) + 6.0;
    *(float *)&v73 = fsqrt((float)((float)(v75 * v75) + (float)(v74 * v74)) + (float)(v76 * v76));
    _XMM3 = v73;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    end.v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v76) * (float)(*(float *)&skipEntities - 18.0)) + start.v[2];
    *(float *)&_XMM3 = (float)((float)((float)((float)(v74 * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&skipEntities - 18.0)) + start.v[0]) + (float)((float)(forward.v[0] * *(float *)&skipEntities) + vPos->v[0])) * 0.5;
    v80 = (float)(v75 * (float)(1.0 / *(float *)&_XMM0)) * (float)(*(float *)&skipEntities - 18.0);
    *(float *)&_XMM0 = (float)(forward.v[1] * *(float *)&skipEntities) + vPos->v[1];
    end.v[0] = *(float *)&_XMM3;
    end.v[1] = (float)((float)(v80 + start.v[1]) + *(float *)&_XMM0) * 0.5;
    v123 = passEntityNum;
    v81 = v71->GetPhysicsWorldId((BgHandler *)handler);
    PhysicsQuery_LegacyCapsuleTrace(v81, &results, &start, &end, &bounds, &v123, 1, contentMask, NULL, 0, NULL, NULL);
    if ( penetratedTouchEntReturn )
      *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
    Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugProne, "bg_debugProne");
    v82 = results.fraction;
    if ( results.fraction < 1.0 )
    {
      v83 = handler->__vftable;
      start.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      start.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      start.v[2] = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) + 18.0;
      end.v[2] = end.v[2] + 18.0;
      v123 = passEntityNum;
      v84 = v83->GetPhysicsWorldId((BgHandler *)handler);
      PhysicsQuery_LegacyCapsuleTrace(v84, &results, &start, &end, &bounds, &v123, 1, contentMask, NULL, 0, NULL, NULL);
      if ( penetratedTouchEntReturn )
        *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
      v82 = results.fraction;
      if ( results.fraction < 1.0 )
        goto LABEL_101;
    }
    v50 = (float)((float)(end.v[0] - start.v[0]) * v82) + start.v[0];
    *(float *)&v51 = (float)((float)(end.v[1] - start.v[1]) * v82) + start.v[1];
    v53 = (float)((float)(end.v[2] - start.v[2]) * v82) + start.v[2];
  }
  else
  {
    v72 = passEntityNum;
  }
  v85 = handler->__vftable;
  end.v[2] = v53 - (float)((float)((float)(v53 - *(float *)&v70) * 2.0) + *(float *)&v124);
  start.v[0] = v50;
  start.v[1] = *(float *)&v51;
  start.v[2] = v53;
  end.v[0] = v50;
  end.v[1] = *(float *)&v51;
  v124 = v72;
  v86 = v85->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v86, &results, &start, &end, &bounds, &v124, 1, contentMask, NULL, 0, NULL, NULL);
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
  Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugProne, "bg_debugProne");
  if ( results.fraction != 1.0 )
  {
    if ( results.walkable )
    {
      v87 = vPos->v[0];
      v88 = vPos->v[1];
      v89 = LODWORD(vPos->v[2]);
      v90 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      *(float *)&skipEntities = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      v120 = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) - 6.0;
      if ( feetDirection == FEETDIR_BACK )
      {
        vec.v[0] = v87 - v67;
        v92 = v89;
        *(float *)&v92 = *(float *)&v89 - *(float *)&v70;
        v91 = v92;
        v93 = v88 - v69;
      }
      else
      {
        vec.v[0] = v67 - v87;
        v94 = v70;
        *(float *)&v94 = *(float *)&v70 - *(float *)&v89;
        v91 = v94;
        v93 = v69 - v88;
      }
      vec.v[2] = *(float *)&v91;
      vec.v[1] = v93;
      *(double *)&v91 = vectopitch(&vec);
      v98 = v91;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      *(float *)&v98 = (float)((float)(*(float *)&v91 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      _XMM6 = v98;
      v99 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) && isAlreadyProne && Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionProneStuckFix, "playerCharacterCollisionProneStuckFix");
      if ( *(float *)&v98 > 45.0 || *(float *)&v98 < -45.0 )
      {
        __asm { vmaxss  xmm0, xmm6, xmm0 }
        if ( !v99 )
          v18 = 0;
        __asm { vminss  xmm6, xmm0, xmm1 }
      }
      v101 = *(float *)&skipEntities;
      if ( feetDirection == FEETDIR_BACK )
      {
        vec.v[0] = v67 - v90;
        v103 = v70;
        *(float *)&v103 = *(float *)&v70 - v120;
        v102 = v103;
        v104 = v69 - *(float *)&skipEntities;
      }
      else
      {
        vec.v[0] = v90 - v67;
        v105 = LODWORD(v120);
        *(float *)&v105 = v120 - *(float *)&v70;
        v102 = v105;
        v104 = *(float *)&skipEntities - v69;
      }
      vec.v[2] = *(float *)&v102;
      vec.v[1] = v104;
      *(double *)&v102 = vectopitch(&vec);
      v106 = v102;
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm0, 1 }
      *(float *)&v106 = (float)((float)(*(float *)&v102 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      _XMM2 = v106;
      __asm { vminss  xmm0, xmm2, xmm0 }
      v111 = (float)(*(float *)&_XMM6 - *(float *)&_XMM0) * 0.0027777778;
      v123 = _XMM0;
      _XMM0 = 0i64;
      __asm { vroundss xmm3, xmm0, xmm1, 1 }
      v114 = (float)(v111 - *(float *)&_XMM3) * 360.0;
      if ( (v114 < -50.0 || v114 > 70.0) && !v99 )
        v18 = 0;
      v115 = handler->__vftable;
      bounds.halfSize.v[1] = 0.0;
      bounds.halfSize.v[2] = 0.0;
      *(_OWORD *)bounds.midPoint.v = 0i64;
      start.v[0] = v87;
      start.v[2] = *(float *)&v89 + 5.0;
      end.v[2] = *(float *)&v70 + 5.0;
      start.v[1] = v88;
      end.v[0] = v67;
      end.v[1] = v69;
      v124 = v72;
      v116 = v115->GetPhysicsWorldId((BgHandler *)handler);
      PhysicsQuery_LegacyCapsuleTrace(v116, &results, &start, &end, &bounds, &v124, 1, contentMask, NULL, 0, NULL, NULL);
      if ( penetratedTouchEntReturn )
        *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
      Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugProne, "bg_debugProne");
      start.v[2] = end.v[2];
      if ( results.fraction < 1.0 )
        v18 = 0;
      v117 = handler->__vftable;
      *(double *)start.v = *(double *)end.v;
      end.v[2] = v120 + 5.0;
      end.v[0] = v90;
      end.v[1] = v101;
      v124 = v72;
      v118 = v117->GetPhysicsWorldId((BgHandler *)handler);
      PhysicsQuery_LegacyCapsuleTrace(v118, &results, &start, &end, &bounds, &v124, 1, contentMask, NULL, 0, NULL, NULL);
      if ( penetratedTouchEntReturn )
        *penetratedTouchEntReturn = Trace_GetEntityHitId(&results);
      Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_debugProne, "bg_debugProne");
      v65 = v127;
      if ( results.fraction < 1.0 )
        v18 = 0;
      if ( v127 )
        *v127 = *(float *)&_XMM6;
      v64 = v126;
      if ( v126 )
        *v126 = *(float *)&v123;
      if ( v18 )
        return 1;
      goto $fail;
    }
    goto LABEL_65;
  }
LABEL_101:
  v64 = v126;
  v65 = v127;
$fail:
  if ( isOnGround )
    return 0;
  if ( v65 )
    *v65 = 0.0;
  if ( v64 )
    *v64 = 0.0;
  return 1;
}

/*
==============
BG_CheckProne_AdjustAngles
==============
*/
void BG_CheckProne_AdjustAngles(int passEntityNum, const vec3_t *vPos, const float fSize, const float fHeight, const float fYaw, float *pfTorsoPitch, float *pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, const BgHandler *handler, Physics_WorldId worldId, proneCheckType_t proneCheckType, float prone_feet_dist, FeetDirection feetDirection, int *penetratedTouchEntReturn)
{
  int contentMask; 
  float v24; 
  float v25; 
  BgHandler_vtbl *v26; 
  Physics_WorldId v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  BgHandler_vtbl *v32; 
  float v33; 
  Physics_WorldId v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  double v42; 
  float v45; 
  float v46; 
  float v47; 
  double v48; 
  float v50; 
  float v52; 
  float v53; 
  int skipEntities; 
  vec3_t start; 
  vec3_t end; 
  vec3_t vec; 
  vec3_t forward; 
  Bounds bounds; 
  trace_t results; 

  if ( (unsigned int)feetDirection >= FEETDIR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3314, ASSERT_TYPE_ASSERT, "(unsigned)( feetDirection ) < (unsigned)( FEETDIR_COUNT )", "feetDirection doesn't index FEETDIR_COUNT\n\t%i not in [0, %i)", feetDirection, 2) )
    __debugbreak();
  if ( penetratedTouchEntReturn )
    *penetratedTouchEntReturn = 2047;
  contentMask = 65553;
  if ( proneCheckType )
    contentMask = 131089;
  if ( pfTorsoPitch )
    *pfTorsoPitch = 0.0;
  if ( pfWaistPitch )
    *pfWaistPitch = 0.0;
  _XMM4 = LODWORD(fYaw);
  *(_OWORD *)bounds.midPoint.v = _xmm;
  _XMM0 = (unsigned int)feetDirection;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2; yaw
  }
  bounds.halfSize.v[1] = FLOAT_6_0;
  bounds.halfSize.v[2] = FLOAT_6_0;
  YawVectors(*(float *)&_XMM0, &forward, NULL);
  v24 = (float)(18.0 * forward.v[0]) + vPos->v[0];
  v25 = (float)(18.0 * forward.v[1]) + vPos->v[1];
  *(float *)&_XMM2 = (float)(18.0 * forward.v[2]) + vPos->v[2];
  start.v[2] = *(float *)&_XMM2 + fHeight;
  end.v[2] = *(float *)&_XMM2 - fHeight;
  start.v[0] = v24;
  start.v[1] = v25;
  end.v[0] = v24;
  end.v[1] = v25;
  Physics_GetLocalClientForWorld(worldId);
  v26 = handler->__vftable;
  skipEntities = passEntityNum;
  v27 = v26->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v27, &results, &start, &end, &bounds, &skipEntities, 1, contentMask, NULL, 0, NULL, NULL);
  v28 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v29 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v30 = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) - 6.0;
  if ( *(_WORD *)&results.allsolid )
    v30 = vPos->v[2];
  v31 = vPos->v[2];
  v32 = handler->__vftable;
  v33 = (float)((float)(prone_feet_dist - 6.0) * forward.v[0]) + vPos->v[0];
  start.v[1] = (float)((float)(prone_feet_dist - 6.0) * forward.v[1]) + vPos->v[1];
  end.v[1] = start.v[1];
  start.v[0] = v33;
  end.v[0] = v33;
  start.v[2] = (float)((float)((float)(prone_feet_dist - 6.0) * forward.v[2]) + v31) + fHeight;
  end.v[2] = v30 - fHeight;
  skipEntities = passEntityNum;
  v34 = v32->GetPhysicsWorldId((BgHandler *)handler);
  PhysicsQuery_LegacyCapsuleTrace(v34, &results, &start, &end, &bounds, &skipEntities, 1, contentMask, NULL, 0, NULL, NULL);
  v35 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  *(float *)&skipEntities = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v36 = (float)((float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2]) - 6.0;
  v37 = vPos->v[2];
  if ( *(_WORD *)&results.allsolid )
    v36 = vPos->v[2];
  v38 = vPos->v[0];
  v39 = vPos->v[1];
  if ( feetDirection == FEETDIR_BACK )
  {
    vec.v[0] = v38 - v28;
    v40 = v37 - v30;
    v41 = v39 - v29;
  }
  else
  {
    vec.v[0] = v28 - v38;
    v40 = v30 - v37;
    v41 = v29 - v39;
  }
  vec.v[2] = v40;
  vec.v[1] = v41;
  v42 = vectopitch(&vec);
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v45 = (float)((float)(*(float *)&v42 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  if ( feetDirection == FEETDIR_BACK )
  {
    v46 = v29 - *(float *)&skipEntities;
    vec.v[0] = v28 - v35;
    v47 = v30 - v36;
  }
  else
  {
    vec.v[0] = v35 - v28;
    v47 = v36 - v30;
    v46 = *(float *)&skipEntities - v29;
  }
  vec.v[2] = v47;
  vec.v[1] = v46;
  v48 = vectopitch(&vec);
  __asm { vroundss xmm3, xmm8, xmm0, 1 }
  v50 = (float)((float)(*(float *)&v48 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm8, xmm0, 1 }
  v52 = FLOAT_N50_0;
  v53 = (float)((float)((float)(v45 - v50) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  if ( v53 < -50.0 || (v52 = FLOAT_70_0, v53 > 70.0) )
  {
    __asm { vroundss xmm3, xmm8, xmm0, 1 }
    v50 = (float)((float)((float)(v45 - v52) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
  if ( pfTorsoPitch )
    *pfTorsoPitch = v45;
  if ( pfWaistPitch )
    *pfWaistPitch = v50;
}

/*
==============
BG_CheckThread
==============
*/
void BG_CheckThread(void)
{
  if ( !Sys_IsServerThread() && !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && !Sys_IsServerUserMoveWorker() && !Sys_IsServerClientFrameWorker() && !Sys_IsSafeBGWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3658, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread() || Sys_IsMainThread() || Sys_IsMainThreadEntityWorker() || Sys_IsServerUserMoveWorker() || Sys_IsServerClientFrameWorker() || Sys_IsSafeBGWorker())", (const char *)&queryFormat, "Sys_IsServerThread() || Sys_IsMainThread() || Sys_IsMainThreadEntityWorker() || Sys_IsServerUserMoveWorker() || Sys_IsServerClientFrameWorker() || Sys_IsSafeBGWorker()") )
    __debugbreak();
}

/*
==============
BG_ClearActionSlotParameter
==============
*/
void BG_ClearActionSlotParameter(BgWeaponMap *weaponMap, playerState_s *ps, const int actionSlotIdx)
{
  __int64 v3; 
  __int64 v6; 

  v3 = actionSlotIdx;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ActionSlotIsWeaponType(ps, v3) )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1037, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1038, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v3 >= 7 )
    {
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1039, ASSERT_TYPE_ASSERT, "(unsigned)( actionSlotIndex ) < (unsigned)( 7 )", "actionSlotIndex doesn't index ACTIONSLOTS_COUNT_STATIC\n\t%i not in [0, %i)", v6, 7) )
        __debugbreak();
    }
    if ( !BG_ActionSlotIsWeaponType(ps, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1040, ASSERT_TYPE_ASSERT, "(BG_ActionSlotIsWeaponType( ps, actionSlotIndex ))", (const char *)&queryFormat, "BG_ActionSlotIsWeaponType( ps, actionSlotIndex )") )
      __debugbreak();
    weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&ps->actionSlotParam[v3], &NULL_WEAPON);
  }
}

/*
==============
BG_ClearEventParameter
==============
*/
void BG_ClearEventParameter(BgWeaponMap *weaponMap, EntityEvent *event)
{
  __int64 eventType; 
  __int64 v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1156, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !event && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1157, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
    __debugbreak();
  eventType = event->eventType;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    LODWORD(v5) = event->eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", v5, 227) )
      __debugbreak();
  }
  if ( s_bgEventParmType[eventType] == EVENT_PARAM_WEAPON )
    BG_SetWeaponForEntityEventParm(weaponMap, &event->eventParm, &NULL_WEAPON);
  else
    event->eventParm = 0;
}

/*
==============
BG_ClearJammingType
==============
*/
void BG_ClearJammingType(entityState_t *es)
{
  if ( es->eType == ET_SCRIPTMOVER )
  {
    es->staticState.general.xmodel &= 0xFFFFFFFC;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4669, ASSERT_TYPE_ASSERT, "(es->eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "es->eType == ET_SCRIPTMOVER") )
      __debugbreak();
    es->staticState.general.xmodel &= 0xFFFFFFFC;
  }
}

/*
==============
BG_ClearPlayerEvents
==============
*/
void BG_ClearPlayerEvents(BgWeaponMap *weaponMap, playerState_s *ps)
{
  EntityEvent *unpredictableEvents; 
  unsigned int i; 
  __int64 eventType; 
  unsigned int v7; 
  EntityEvent *events; 
  __int64 v9; 
  __int64 v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1175, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  unpredictableEvents = ps->unpredictableEvents;
  for ( i = 0; i < 4; ++i )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1156, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !unpredictableEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1157, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
      __debugbreak();
    eventType = unpredictableEvents->eventType;
    if ( (unsigned int)eventType >= 0xE3 )
    {
      LODWORD(v10) = 227;
      LODWORD(v9) = unpredictableEvents->eventType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( s_bgEventParmType[eventType] == EVENT_PARAM_WEAPON )
      BG_SetWeaponForEntityEventParm(weaponMap, &unpredictableEvents->eventParm, &NULL_WEAPON);
    else
      unpredictableEvents->eventParm = 0;
    unpredictableEvents->eventType = 0;
    ++unpredictableEvents;
  }
  v7 = 0;
  events = ps->pe.events;
  do
  {
    BG_ClearEventParameter(weaponMap, &ps->pe.events[v7++]);
    events->eventType = 0;
    ++events;
  }
  while ( v7 < 4 );
}

/*
==============
BG_ClearScriptWristwatchTime
==============
*/
void BG_ClearScriptWristwatchTime(playerState_s *ps)
{
  unsigned __int16 watchTimePacked; 
  __int16 v2; 
  unsigned int v3; 
  char v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  ps->watchTimePacked &= ~0x1000u;
  watchTimePacked = ps->watchTimePacked;
  v2 = watchTimePacked >> 12;
  v3 = watchTimePacked & 0x7FF;
  v4 = v2 & 1;
  v5 = v3 / 0x3C;
  v6 = v3 % 0x3C;
  if ( v6 > 0x3B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4862, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outMinutes ) && ( outMinutes ) <= ( 59 )", "outMinutes not in [0, 59]\n\t%i not in [%i, %i]", v6, 0i64, 59) )
    __debugbreak();
  if ( v5 > 0x17 )
  {
    LODWORD(v8) = 23;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4863, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outHours ) && ( outHours ) <= ( 23 )", "outHours not in [0, 23]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
      __debugbreak();
  }
  if ( v4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4841, ASSERT_TYPE_ASSERT, "(!testInUse)", (const char *)&queryFormat, "!testInUse") )
      __debugbreak();
  }
}

/*
==============
BG_CollectPredictableEvent
==============
*/
void BG_CollectPredictableEvent(const int newEvent, const unsigned int eventParm, const int eventTime, BgWeaponMap *weaponMap, const playerState_s *ps)
{
  BgStatic *ActiveStatics; 
  BgPlayerEvents *v10; 
  BgPlayerEvents *v11; 
  unsigned int m_eventCount; 
  const char *EventTypeName; 
  unsigned int v14; 
  BgPlayerEvents::PlayerEvent *m_events; 
  __int64 eventType; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1408, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1409, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->pm_type != 5 )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v10 = ActiveStatics->GetPlayerEvents(ActiveStatics, ps->clientNum);
    v11 = v10;
    if ( v10 )
    {
      if ( !BgPlayerEvents::AddEvent(v10, weaponMap, (const entity_event_t)newEvent, eventParm, eventTime) )
      {
        m_eventCount = v11->m_eventCount;
        EventTypeName = BG_GetEventTypeName(newEvent);
        LODWORD(fmt) = m_eventCount;
        Com_PrintError(16, "Player event system overflow for client %d when adding event %s (count %i).\n", (unsigned int)ps->clientNum, EventTypeName, fmt);
        v14 = 0;
        if ( m_eventCount )
        {
          m_events = v11->m_events;
          do
          {
            if ( v14 >= v11->m_eventCount )
            {
              LODWORD(v19) = v11->m_eventCount;
              LODWORD(v18) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_events.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( m_eventCount )", "eventIndex doesn't index m_eventCount\n\t%i not in [0, %i)", v18, v19) )
                __debugbreak();
            }
            eventType = m_events->eventItem.eventType;
            if ( (unsigned int)eventType >= 0xE3 )
            {
              LODWORD(v19) = 227;
              LODWORD(v18) = m_events->eventItem.eventType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 649, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( EV_MAX_EVENTS )", "eventType doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v18, v19) )
                __debugbreak();
            }
            Com_Printf(16, "[%d] Event -- %s\n", v14++, s_bgEventNames[eventType]);
            ++m_events;
          }
          while ( v14 < m_eventCount );
        }
      }
    }
  }
}

/*
==============
BG_CopyEvent
==============
*/
void BG_CopyEvent(BgWeaponMap *dstWeaponMap, EntityEvent *dstEvent, const BgWeaponMap *srcWeaponMap, const EntityEvent *srcEvent)
{
  __int64 eventType; 
  __int64 v9; 
  Weapon r_weapon; 

  if ( !dstWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1194, ASSERT_TYPE_ASSERT, "(dstWeaponMap)", (const char *)&queryFormat, "dstWeaponMap") )
    __debugbreak();
  if ( !dstEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1195, ASSERT_TYPE_ASSERT, "(dstEvent)", (const char *)&queryFormat, "dstEvent") )
    __debugbreak();
  if ( !srcWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1196, ASSERT_TYPE_ASSERT, "(srcWeaponMap)", (const char *)&queryFormat, "srcWeaponMap") )
    __debugbreak();
  if ( !srcEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1197, ASSERT_TYPE_ASSERT, "(srcEvent)", (const char *)&queryFormat, "srcEvent") )
    __debugbreak();
  if ( dstEvent != srcEvent )
    BG_ClearEventParameter(dstWeaponMap, dstEvent);
  dstEvent->eventType = srcEvent->eventType;
  eventType = srcEvent->eventType;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    LODWORD(v9) = srcEvent->eventType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", v9, 227) )
      __debugbreak();
  }
  if ( s_bgEventParmType[eventType] == EVENT_PARAM_WEAPON )
  {
    if ( !srcWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 478, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    r_weapon = *BgWeaponMap::GetWeapon((BgWeaponMap *)srcWeaponMap, (BgWeaponHandle)srcEvent->eventParm);
    BG_SetWeaponForEntityEventParm(dstWeaponMap, &dstEvent->eventParm, &r_weapon);
  }
  else
  {
    dstEvent->eventParm = srcEvent->eventParm;
  }
}

/*
==============
BG_CopyPlayerEvents
==============
*/
void BG_CopyPlayerEvents(BgWeaponMap *dstWeaponMap, playerState_s *dstPs, const BgWeaponMap *srcWeaponMap, const playerState_s *srcPs)
{
  unsigned int v8; 
  unsigned int i; 

  if ( !dstWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1226, ASSERT_TYPE_ASSERT, "(dstWeaponMap)", (const char *)&queryFormat, "dstWeaponMap") )
    __debugbreak();
  if ( !dstPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1227, ASSERT_TYPE_ASSERT, "(dstPs)", (const char *)&queryFormat, "dstPs") )
    __debugbreak();
  if ( !srcWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1228, ASSERT_TYPE_ASSERT, "(srcWeaponMap)", (const char *)&queryFormat, "srcWeaponMap") )
    __debugbreak();
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1229, ASSERT_TYPE_ASSERT, "(srcPs)", (const char *)&queryFormat, "srcPs") )
    __debugbreak();
  v8 = 0;
  for ( i = 0; i < 4; ++i )
    BG_CopyEvent(dstWeaponMap, &dstPs->unpredictableEvents[i], srcWeaponMap, &srcPs->unpredictableEvents[i]);
  do
  {
    BG_CopyEvent(dstWeaponMap, &dstPs->pe.events[v8], srcWeaponMap, &srcPs->pe.events[v8]);
    ++v8;
  }
  while ( v8 < 4 );
}

/*
==============
BG_CreateXAnim
==============
*/

void __fastcall BG_CreateXAnim(XAnim_s *anims, unsigned int animIndex, const char *name, bool allowAllocs)
{
  XAnimCreate(anims, animIndex, name, allowAllocs);
}

/*
==============
BG_CreateXAnimFromParts
==============
*/
void BG_CreateXAnimFromParts(XAnim_s *anims, unsigned int animIndex, XAnimParts *animParts, bool allowAllocs)
{
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3647, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !animParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3648, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
    __debugbreak();
  XAnimCreateFromParts(anims, animIndex, animParts, allowAllocs);
}

/*
==============
BG_DeregisterCommonDvars
==============
*/
void BG_DeregisterCommonDvars(void)
{
  DCONST_DVARFLT_bullet_penetrationMinFxDist = Dvar_Deregister(DCONST_DVARFLT_bullet_penetrationMinFxDist);
  DCONST_DVARINT_bg_UAVStrengthMin = Dvar_Deregister(DCONST_DVARINT_bg_UAVStrengthMin);
  DCONST_DVARINT_bg_UAVStrengthMax = Dvar_Deregister(DCONST_DVARINT_bg_UAVStrengthMax);
  DCONST_DVARINT_bg_UAVStrengthLevelNeutral = Dvar_Deregister(DCONST_DVARINT_bg_UAVStrengthLevelNeutral);
  DCONST_DVARINT_bg_UAVStrengthLevelShowEnemyFastSweep = Dvar_Deregister(DCONST_DVARINT_bg_UAVStrengthLevelShowEnemyFastSweep);
  DCONST_DVARINT_bg_UAVStrengthLevelShowEnemyDirectional = Dvar_Deregister(DCONST_DVARINT_bg_UAVStrengthLevelShowEnemyDirectional);
  DCONST_DVARBOOL_player_debugHealth = Dvar_Deregister(DCONST_DVARBOOL_player_debugHealth);
  DCONST_DVARBOOL_player_sustainAmmo = Dvar_Deregister(DCONST_DVARBOOL_player_sustainAmmo);
  DCONST_DVARBOOL_player_lastStandDebug = Dvar_Deregister(DCONST_DVARBOOL_player_lastStandDebug);
  DCONST_DVARBOOL_g_animated_lean_blends = Dvar_Deregister(DCONST_DVARBOOL_g_animated_lean_blends);
  DCONST_DVARBOOL_xanim_finger_pose_disable = Dvar_Deregister(DCONST_DVARBOOL_xanim_finger_pose_disable);
  DCONST_DVARBOOL_cg_mantleSounds = Dvar_Deregister(DCONST_DVARBOOL_cg_mantleSounds);
  DCONST_DVARBOOL_cg_chatWithOtherTeams = Dvar_Deregister(DCONST_DVARBOOL_cg_chatWithOtherTeams);
  DCONST_DVARBOOL_cg_hearKillerEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_hearKillerEnabled);
  DCONST_DVARFLT_airburstAdjustDistance = Dvar_Deregister(DCONST_DVARFLT_airburstAdjustDistance);
  DCONST_DVARBOOL_moving_platform_display_antilag = Dvar_Deregister(DCONST_DVARBOOL_moving_platform_display_antilag);
  DCONST_DVARINT_whitelist_serverCheck = Dvar_Deregister(DCONST_DVARINT_whitelist_serverCheck);
  DCONST_DVARINT_whitelist_gamerTagCheck = Dvar_Deregister(DCONST_DVARINT_whitelist_gamerTagCheck);
  DCONST_DVARINT_whitelist_detailsCheck = Dvar_Deregister(DCONST_DVARINT_whitelist_detailsCheck);
  DCONST_DVARFLT_agent_threatSharedEnemyScale = Dvar_Deregister(DCONST_DVARFLT_agent_threatSharedEnemyScale);
  DCONST_DVARBOOL_cl_accessibilityTurboEnabled = Dvar_Deregister(DCONST_DVARBOOL_cl_accessibilityTurboEnabled);
  DCONST_DVARMPFLT_bg_viewKickScale = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickScale);
  DCONST_DVARMPFLT_bg_viewKickMax = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickMax);
  DCONST_DVARMPFLT_bg_viewKickMin = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickMin);
  DCONST_DVARMPFLT_bg_viewKickScaleNonADS = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickScaleNonADS);
  DCONST_DVARMPFLT_bg_viewKickMaxNonADS = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickMaxNonADS);
  DCONST_DVARMPFLT_bg_viewKickMinNonADS = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewKickMinNonADS);
  DCONST_DVARFLT_bg_viewkickModFireScale = Dvar_Deregister(DCONST_DVARFLT_bg_viewkickModFireScale);
  DCONST_DVARMPFLT_player_view_pitch_up = Dvar_Deregister(DCONST_DVARMPFLT_player_view_pitch_up);
  DCONST_DVARMPFLT_player_view_pitch_down = Dvar_Deregister(DCONST_DVARMPFLT_player_view_pitch_down);
  DCONST_DVARMPFLT_bg_viewBobMax = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobMax);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds);
  DCONST_DVARMPFLT_bg_viewBobAmplitudeProne = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewBobAmplitudeProne);
  DCONST_DVARMPINT_bg_viewBobTransTime = Dvar_Deregister(DCONST_DVARMPINT_bg_viewBobTransTime);
  DCONST_DVARMPINT_bg_gunBobTransInTime = Dvar_Deregister(DCONST_DVARMPINT_bg_gunBobTransInTime);
  DCONST_DVARMPINT_bg_gunBobTransOutTime = Dvar_Deregister(DCONST_DVARMPINT_bg_gunBobTransOutTime);
  DCONST_DVARMPFLT_bg_gunBobMax = Dvar_Deregister(DCONST_DVARMPFLT_bg_gunBobMax);
  DCONST_DVARBOOL_bg_viewBobDisable = Dvar_Deregister(DCONST_DVARBOOL_bg_viewBobDisable);
  DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude = Dvar_Deregister(DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude);
  DCONST_DVARFLT_bg_viewBobMaxTurnSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_viewBobMaxTurnSpeed);
  DCONST_DVARINT_bg_advancedIdleFrequency = Dvar_Deregister(DCONST_DVARINT_bg_advancedIdleFrequency);
  DCONST_DVARBOOL_bg_advancedIdleDebug = Dvar_Deregister(DCONST_DVARBOOL_bg_advancedIdleDebug);
  DVARINT_bg_shootingAnglesLog = Dvar_Deregister(DVARINT_bg_shootingAnglesLog);
  DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav = Dvar_Deregister(DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav);
  DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav = Dvar_Deregister(DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav);
  DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase = Dvar_Deregister(DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase);
  DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting = Dvar_Deregister(DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting);
  DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding = Dvar_Deregister(DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding);
  DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked = Dvar_Deregister(DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked);
  DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne = Dvar_Deregister(DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne);
  DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll = Dvar_Deregister(DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll);
  DCONST_DVARFLT_bg_weaponBobMax = Dvar_Deregister(DCONST_DVARFLT_bg_weaponBobMax);
  DCONST_DVARFLT_bg_weaponBobLag = Dvar_Deregister(DCONST_DVARFLT_bg_weaponBobLag);
  DCONST_DVARFLT_player_moveThreshhold = Dvar_Deregister(DCONST_DVARFLT_player_moveThreshhold);
  DCONST_DVARMPFLT_player_sprintSpeedScale = Dvar_Deregister(DCONST_DVARMPFLT_player_sprintSpeedScale);
  DCONST_DVARFLT_player_inAirBobCycleScale = Dvar_Deregister(DCONST_DVARFLT_player_inAirBobCycleScale);
  DCONST_DVARFLT_player_inAirMaxScaledSpeedRatio = Dvar_Deregister(DCONST_DVARFLT_player_inAirMaxScaledSpeedRatio);
  DCONST_DVARMPSPFLT_player_meleeRangeSlideScale = Dvar_Deregister(DCONST_DVARMPSPFLT_player_meleeRangeSlideScale);
  DCONST_DVARFLT_player_meleeRangeStanding = Dvar_Deregister(DCONST_DVARFLT_player_meleeRangeStanding);
  DCONST_DVARFLT_player_meleeRangeCrouched = Dvar_Deregister(DCONST_DVARFLT_player_meleeRangeCrouched);
  DCONST_DVARFLT_player_meleeRangeProne = Dvar_Deregister(DCONST_DVARFLT_player_meleeRangeProne);
  DCONST_DVARFLT_player_meleeRangeChargeStanding = Dvar_Deregister(DCONST_DVARFLT_player_meleeRangeChargeStanding);
  DCONST_DVARFLT_player_meleeRangeChargeCrouched = Dvar_Deregister(DCONST_DVARFLT_player_meleeRangeChargeCrouched);
  DCONST_DVARFLT_player_meleeWidth = Dvar_Deregister(DCONST_DVARFLT_player_meleeWidth);
  DCONST_DVARFLT_player_meleeHeight = Dvar_Deregister(DCONST_DVARFLT_player_meleeHeight);
  DCONST_DVARFLT_player_meleeOverrideQuickDropScale = Dvar_Deregister(DCONST_DVARFLT_player_meleeOverrideQuickDropScale);
  DCONST_DVARMPBOOL_player_meleeFinisherEnabled = Dvar_Deregister(DCONST_DVARMPBOOL_player_meleeFinisherEnabled);
  DCONST_DVARFLT_player_meleeChargeMaxSpeed = Dvar_Deregister(DCONST_DVARFLT_player_meleeChargeMaxSpeed);
  DCONST_DVARFLT_player_meleeChargeMaxSpeedUp = Dvar_Deregister(DCONST_DVARFLT_player_meleeChargeMaxSpeedUp);
  DCONST_DVARFLT_player_meleeChargeFriction = Dvar_Deregister(DCONST_DVARFLT_player_meleeChargeFriction);
  DCONST_DVARFLT_player_meleeIdealEndDistance = Dvar_Deregister(DCONST_DVARFLT_player_meleeIdealEndDistance);
  DCONST_DVARFLT_aim_automelee_lerp = Dvar_Deregister(DCONST_DVARFLT_aim_automelee_lerp);
  DCONST_DVARFLT_aim_automelee_maxPitchMovement = Dvar_Deregister(DCONST_DVARFLT_aim_automelee_maxPitchMovement);
  DCONST_DVARFLT_aim_automelee_maxYawMovement = Dvar_Deregister(DCONST_DVARFLT_aim_automelee_maxYawMovement);
  DCONST_DVARMPSPFLT_aim_automelee_region_width = Dvar_Deregister(DCONST_DVARMPSPFLT_aim_automelee_region_width);
  DCONST_DVARMPSPFLT_aim_automelee_region_height = Dvar_Deregister(DCONST_DVARMPSPFLT_aim_automelee_region_height);
  DCONST_DVARMPFLT_player_swimSpeed = Dvar_Deregister(DCONST_DVARMPFLT_player_swimSpeed);
  DCONST_DVARMPFLT_player_swimAcceleration = Dvar_Deregister(DCONST_DVARMPFLT_player_swimAcceleration);
  DCONST_DVARMPFLT_player_swimFriction = Dvar_Deregister(DCONST_DVARMPFLT_player_swimFriction);
  DCONST_DVARMPFLT_player_swimVerticalSpeed = Dvar_Deregister(DCONST_DVARMPFLT_player_swimVerticalSpeed);
  DCONST_DVARMPFLT_player_swimVerticalAcceleration = Dvar_Deregister(DCONST_DVARMPFLT_player_swimVerticalAcceleration);
  DCONST_DVARMPFLT_player_swimVerticalFriction = Dvar_Deregister(DCONST_DVARMPFLT_player_swimVerticalFriction);
  DCONST_DVARMPVEC3_player_swimWaterCurrent = Dvar_Deregister(DCONST_DVARMPVEC3_player_swimWaterCurrent);
  DCONST_DVARINT_player_swimCombatTimer = Dvar_Deregister(DCONST_DVARINT_player_swimCombatTimer);
  DCONST_DVARFLT_player_swimForwardMinSpeed = Dvar_Deregister(DCONST_DVARFLT_player_swimForwardMinSpeed);
  DCONST_DVARFLT_player_swimForwardMinAngle = Dvar_Deregister(DCONST_DVARFLT_player_swimForwardMinAngle);
  DCONST_DVARINT_player_swimForwardWarmupTime = Dvar_Deregister(DCONST_DVARINT_player_swimForwardWarmupTime);
  DCONST_DVARMPINT_player_swimForwardSettleTime = Dvar_Deregister(DCONST_DVARMPINT_player_swimForwardSettleTime);
  DCONST_DVARMPINT_player_spaceViewHeight = Dvar_Deregister(DCONST_DVARMPINT_player_spaceViewHeight);
  DCONST_DVARMPFLT_player_spaceCapsuleHeight = Dvar_Deregister(DCONST_DVARMPFLT_player_spaceCapsuleHeight);
  DCONST_DVARMPFLT_actor_spaceLightingOffset = Dvar_Deregister(DCONST_DVARMPFLT_actor_spaceLightingOffset);
  DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming = Dvar_Deregister(DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming);
  DCONST_DVARBOOL_player_disableMovementInWeaponViewOnly = Dvar_Deregister(DCONST_DVARBOOL_player_disableMovementInWeaponViewOnly);
  DCONST_DVARMPBOOL_player_spaceEnabled = Dvar_Deregister(DCONST_DVARMPBOOL_player_spaceEnabled);
  DCONST_DVARINT_player_lateralPlane = Dvar_Deregister(DCONST_DVARINT_player_lateralPlane);
  DVARFLT_player_viewmodelMoveAnimScale = Dvar_Deregister(DVARFLT_player_viewmodelMoveAnimScale);
  DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs = Dvar_Deregister(DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs);
  DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale = Dvar_Deregister(DCONST_DVARMPSPFLT_player_ladderVerticalSpeedScale);
  DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale = Dvar_Deregister(DCONST_DVARMPSPFLT_player_ladderEnhancedVerticalSpeedScale);
  DVARINT_player_ladderBobCycleDurationADS = Dvar_Deregister(DVARINT_player_ladderBobCycleDurationADS);
  DVARINT_player_ladderBobCycleDuration = Dvar_Deregister(DVARINT_player_ladderBobCycleDuration);
  DCONST_DVARFLT_player_lowHeightLandingMaxHeight = Dvar_Deregister(DCONST_DVARFLT_player_lowHeightLandingMaxHeight);
  DCONST_DVARFLT_player_mediumHeightLandingMaxHeight = Dvar_Deregister(DCONST_DVARFLT_player_mediumHeightLandingMaxHeight);
  DCONST_DVARFLT_player_highHeightLandingMaxHeight = Dvar_Deregister(DCONST_DVARFLT_player_highHeightLandingMaxHeight);
  DVARFLT_player_zeroGravSpeed = Dvar_Deregister(DVARFLT_player_zeroGravSpeed);
  DVARFLT_player_zeroGravAcceleration = Dvar_Deregister(DVARFLT_player_zeroGravAcceleration);
  DVARFLT_player_zeroGravFriction = Dvar_Deregister(DVARFLT_player_zeroGravFriction);
  DVARFLT_player_zeroGravBoostScalar = Dvar_Deregister(DVARFLT_player_zeroGravBoostScalar);
  DVARFLT_player_zeroGravRollAcceleration = Dvar_Deregister(DVARFLT_player_zeroGravRollAcceleration);
  DVARFLT_player_zeroGravRollVelocityMax = Dvar_Deregister(DVARFLT_player_zeroGravRollVelocityMax);
  DVARFLT_player_zeroGravRollFriction = Dvar_Deregister(DVARFLT_player_zeroGravRollFriction);
  DVARBOOL_player_zeroGravDisableWalk = Dvar_Deregister(DVARBOOL_player_zeroGravDisableWalk);
  DVARVEC3_player_zeroGravWorldUp = Dvar_Deregister(DVARVEC3_player_zeroGravWorldUp);
  DVARFLT_player_zeroGravWorldUpRate = Dvar_Deregister(DVARFLT_player_zeroGravWorldUpRate);
  DVARVEC3_player_zeroGravForceDir = Dvar_Deregister(DVARVEC3_player_zeroGravForceDir);
  DVARVEC3_player_zeroGravAutoLevel = Dvar_Deregister(DVARVEC3_player_zeroGravAutoLevel);
  DCONST_DVARFLT_player_zeroGravAutoLevelRate = Dvar_Deregister(DCONST_DVARFLT_player_zeroGravAutoLevelRate);
  DCONST_DVARFLT_player_zeroGravAutoLevelAcc = Dvar_Deregister(DCONST_DVARFLT_player_zeroGravAutoLevelAcc);
  DCONST_DVARFLT_player_zeroGravAutoLevelDelay = Dvar_Deregister(DCONST_DVARFLT_player_zeroGravAutoLevelDelay);
  DVARFLT_player_zeroGravAutoLevelDeadZone = Dvar_Deregister(DVARFLT_player_zeroGravAutoLevelDeadZone);
  DCONST_DVARFLT_player_zeroGravAutoLevelAutoAngle = Dvar_Deregister(DCONST_DVARFLT_player_zeroGravAutoLevelAutoAngle);
  DCONST_DVARBOOL_bg_thirdPerson = Dvar_Deregister(DCONST_DVARBOOL_bg_thirdPerson);
  DCONST_DVARBOOL_bg_compassHellfireTargetSpot = Dvar_Deregister(DCONST_DVARBOOL_bg_compassHellfireTargetSpot);
  DCONST_DVARFLT_bg_compassPortableRadarRadius = Dvar_Deregister(DCONST_DVARFLT_bg_compassPortableRadarRadius);
  DCONST_DVARINT_bg_compassPortableRadarSweepTime = Dvar_Deregister(DCONST_DVARINT_bg_compassPortableRadarSweepTime);
  DCONST_DVARFLT_bg_compassPortableRadarTriggeredRadius = Dvar_Deregister(DCONST_DVARFLT_bg_compassPortableRadarTriggeredRadius);
  DCONST_DVARINT_bg_compassPortableRadarTriggeredSweepTime = Dvar_Deregister(DCONST_DVARINT_bg_compassPortableRadarTriggeredSweepTime);
  DCONST_DVARFLT_bg_compassPortableRadarMinVelocity = Dvar_Deregister(DCONST_DVARFLT_bg_compassPortableRadarMinVelocity);
  DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime = Dvar_Deregister(DCONST_DVARINT_bg_compassDecoyPingBeginFadeTime);
  DCONST_DVARINT_bg_compassDecoyPingMagnitude = Dvar_Deregister(DCONST_DVARINT_bg_compassDecoyPingMagnitude);
  DCONST_DVARINT_bg_compassNumDecoyActors = Dvar_Deregister(DCONST_DVARINT_bg_compassNumDecoyActors);
  DVARBOOL_bg_compassEnableVisibleVehiclesMask = Dvar_Deregister(DVARBOOL_bg_compassEnableVisibleVehiclesMask);
  DVARFLT_bg_viewKickRandom = Dvar_Deregister(DVARFLT_bg_viewKickRandom);
  DVARBOOL_bg_debugProne = Dvar_Deregister(DVARBOOL_bg_debugProne);
  DVARBOOL_bg_forceExplosiveBullets = Dvar_Deregister(DVARBOOL_bg_forceExplosiveBullets);
  DVARFLT_bg_swingSpeed = Dvar_Deregister(DVARFLT_bg_swingSpeed);
  DVARFLT_bg_fastSwingSpeed = Dvar_Deregister(DVARFLT_bg_fastSwingSpeed);
  DVARFLT_bg_torsoSwingSpeed = Dvar_Deregister(DVARFLT_bg_torsoSwingSpeed);
  DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement = Dvar_Deregister(DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement);
  DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving = Dvar_Deregister(DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving);
  DCONST_DVARFLT_bg_cameraIndependentMovementDirRate = Dvar_Deregister(DCONST_DVARFLT_bg_cameraIndependentMovementDirRate);
  DCONST_DVARFLT_bg_cameraIndependentMovementDirRateInAir = Dvar_Deregister(DCONST_DVARFLT_bg_cameraIndependentMovementDirRateInAir);
  DVARFLT_bg_bulletExplDmgFactor = Dvar_Deregister(DVARFLT_bg_bulletExplDmgFactor);
  DVARFLT_bg_alienBulletExplRadius = Dvar_Deregister(DVARFLT_bg_alienBulletExplRadius);
  DVARFLT_bg_bulletExplRadius = Dvar_Deregister(DVARFLT_bg_bulletExplRadius);
  DVARFLT_player_breath_snd_lerp = Dvar_Deregister(DVARFLT_player_breath_snd_lerp);
  DVARFLT_player_breath_snd_delay = Dvar_Deregister(DVARFLT_player_breath_snd_delay);
  DVARFLT_bg_ground_thrown_off_min_anims = Dvar_Deregister(DVARFLT_bg_ground_thrown_off_min_anims);
  DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed = Dvar_Deregister(DCONST_DVARMPFLT_bg_pushPlayerOffVehicleSpeed);
  DVARBOOL_bg_checkPlayerOutsideSolid = Dvar_Deregister(DVARBOOL_bg_checkPlayerOutsideSolid);
  DVARSTR_bg_shock_soundLoop = Dvar_Deregister(DVARSTR_bg_shock_soundLoop);
  DVARSTR_bg_shock_soundLoopSilent = Dvar_Deregister(DVARSTR_bg_shock_soundLoopSilent);
  DVARSTR_bg_shock_soundEnd = Dvar_Deregister(DVARSTR_bg_shock_soundEnd);
  DVARSTR_bg_shock_soundEndAbort = Dvar_Deregister(DVARSTR_bg_shock_soundEndAbort);
  DVARINT_bg_shock_screenType = Dvar_Deregister(DVARINT_bg_shock_screenType);
  DVARFLT_bg_shock_screenBlurBlendTime = Dvar_Deregister(DVARFLT_bg_shock_screenBlurBlendTime);
  DVARFLT_bg_shock_screenBlurBlendFadeTime = Dvar_Deregister(DVARFLT_bg_shock_screenBlurBlendFadeTime);
  DVARFLT_bg_shock_screenFlashWhiteFadeTime = Dvar_Deregister(DVARFLT_bg_shock_screenFlashWhiteFadeTime);
  DVARFLT_bg_shock_screenFlashShotFadeTime = Dvar_Deregister(DVARFLT_bg_shock_screenFlashShotFadeTime);
  DVARFLT_bg_shock_viewKickPeriod = Dvar_Deregister(DVARFLT_bg_shock_viewKickPeriod);
  DVARFLT_bg_shock_viewKickRadius = Dvar_Deregister(DVARFLT_bg_shock_viewKickRadius);
  DVARFLT_bg_shock_viewKickFadeTime = Dvar_Deregister(DVARFLT_bg_shock_viewKickFadeTime);
  DVARBOOL_bg_shock_sound = Dvar_Deregister(DVARBOOL_bg_shock_sound);
  DVARFLT_bg_shock_soundFadeInTime = Dvar_Deregister(DVARFLT_bg_shock_soundFadeInTime);
  DVARFLT_bg_shock_soundFadeOutTime = Dvar_Deregister(DVARFLT_bg_shock_soundFadeOutTime);
  DVARFLT_bg_shock_soundLoopFadeTime = Dvar_Deregister(DVARFLT_bg_shock_soundLoopFadeTime);
  DVARFLT_bg_shock_soundLoopEndDelay = Dvar_Deregister(DVARFLT_bg_shock_soundLoopEndDelay);
  DVARSTR_bg_shock_soundAudioZone = Dvar_Deregister(DVARSTR_bg_shock_soundAudioZone);
  DVARFLT_bg_shock_soundModEndDelay = Dvar_Deregister(DVARFLT_bg_shock_soundModEndDelay);
  DVARBOOL_bg_shock_lookControl = Dvar_Deregister(DVARBOOL_bg_shock_lookControl);
  DVARFLT_bg_shock_lookControl_maxpitchspeed = Dvar_Deregister(DVARFLT_bg_shock_lookControl_maxpitchspeed);
  DVARFLT_bg_shock_lookControl_maxyawspeed = Dvar_Deregister(DVARFLT_bg_shock_lookControl_maxyawspeed);
  DVARFLT_bg_shock_lookControl_mousesensitivityscale = Dvar_Deregister(DVARFLT_bg_shock_lookControl_mousesensitivityscale);
  DVARFLT_bg_shock_lookControl_fadeTime = Dvar_Deregister(DVARFLT_bg_shock_lookControl_fadeTime);
  DVARBOOL_bg_shock_movement = Dvar_Deregister(DVARBOOL_bg_shock_movement);
  DVARBOOL_bg_shock_sprint = Dvar_Deregister(DVARBOOL_bg_shock_sprint);
  DVARBOOL_bg_shock_jog = Dvar_Deregister(DVARBOOL_bg_shock_jog);
  DVARBOOL_bg_shock_mount = Dvar_Deregister(DVARBOOL_bg_shock_mount);
  DVARBOOL_vehicle_pathsmoothdebug = Dvar_Deregister(DVARBOOL_vehicle_pathsmoothdebug);
  DVARFLT_bg_gravity = Dvar_Deregister(DVARFLT_bg_gravity);
  DVARBOOL_useTagFlashSilenced = Dvar_Deregister(DVARBOOL_useTagFlashSilenced);
  DVARVEC2_bg_shieldHitEncodeWidthWorld = Dvar_Deregister(DVARVEC2_bg_shieldHitEncodeWidthWorld);
  DVARVEC2_bg_shieldHitEncodeHeightWorld = Dvar_Deregister(DVARVEC2_bg_shieldHitEncodeHeightWorld);
  DVARVEC2_bg_shieldHitEncodeWidthVM = Dvar_Deregister(DVARVEC2_bg_shieldHitEncodeWidthVM);
  DVARVEC2_bg_shieldHitEncodeHeightVM = Dvar_Deregister(DVARVEC2_bg_shieldHitEncodeHeightVM);
  DVARVEC2_missileRemoteSteerPitchRange = Dvar_Deregister(DVARVEC2_missileRemoteSteerPitchRange);
  DVARFLT_missileRemoteFOV = Dvar_Deregister(DVARFLT_missileRemoteFOV);
  DVARFLT_missileRemoteSteerPitchRate = Dvar_Deregister(DVARFLT_missileRemoteSteerPitchRate);
  DVARFLT_missileRemoteSteerYawRate = Dvar_Deregister(DVARFLT_missileRemoteSteerYawRate);
  DVARBOOL_missileDebugText = Dvar_Deregister(DVARBOOL_missileDebugText);
  DVARINT_ai_debugAsm = Dvar_Deregister(DVARINT_ai_debugAsm);
  DVARINT_ai_debugEntIndex = Dvar_Deregister(DVARINT_ai_debugEntIndex);
  DVARINT_bg_entinfo = Dvar_Deregister(DVARINT_bg_entinfo);
  DVARBOOL_bg_underbarrelWeaponEnabled = Dvar_Deregister(DVARBOOL_bg_underbarrelWeaponEnabled);
  DCONST_DVARFLT_fastSideLadderScale = Dvar_Deregister(DCONST_DVARFLT_fastSideLadderScale);
  DVARBOOL_bg_giveAll = Dvar_Deregister(DVARBOOL_bg_giveAll);
  DVARBOOL_bg_cinematicFullscreen = Dvar_Deregister(DVARBOOL_bg_cinematicFullscreen);
  DVARBOOL_bg_cinematicAboveUI = Dvar_Deregister(DVARBOOL_bg_cinematicAboveUI);
  DVARFLT_bg_cinematicAspectRatio = Dvar_Deregister(DVARFLT_bg_cinematicAspectRatio);
  DVARBOOL_turret_adsEnabled = Dvar_Deregister(DVARBOOL_turret_adsEnabled);
  DVARFLT_turret_adsTime = Dvar_Deregister(DVARFLT_turret_adsTime);
  DCONST_DVARMPBOOL_force_toggle_ads_enabled = Dvar_Deregister(DCONST_DVARMPBOOL_force_toggle_ads_enabled);
  DCONST_DVARVEC2_turretMaxHeighOffset = Dvar_Deregister(DCONST_DVARVEC2_turretMaxHeighOffset);
  DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking = Dvar_Deregister(DCONST_DVARMPBOOL_turret_enableLegacyManualTurretTracking);
  DVARBOOL_ai_debugOverlay = Dvar_Deregister(DVARBOOL_ai_debugOverlay);
  DVARBOOL_bg_cinematicCanPause = Dvar_Deregister(DVARBOOL_bg_cinematicCanPause);
  DVARINT_agent_debugEntIndex = Dvar_Deregister(DVARINT_agent_debugEntIndex);
  DVARBOOL_clientSideEffects = Dvar_Deregister(DVARBOOL_clientSideEffects);
  DVARBOOL_clientSideEffects_noScriptParse = Dvar_Deregister(DVARBOOL_clientSideEffects_noScriptParse);
  DVARBOOL_createfx_enabled = Dvar_Deregister(DVARBOOL_createfx_enabled);
  DVARSTR_launcher_movefile_success = Dvar_Deregister(DVARSTR_launcher_movefile_success);
  DVARSTR_launcher_movefile_fail = Dvar_Deregister(DVARSTR_launcher_movefile_fail);
  DVARSTR_launcher_probe_success = Dvar_Deregister(DVARSTR_launcher_probe_success);
  DVARINT_bg_debugRewindCharacter = Dvar_Deregister(DVARINT_bg_debugRewindCharacter);
  DVARINT_bg_debugRewindPositions = Dvar_Deregister(DVARINT_bg_debugRewindPositions);
  DVARBOOL_bg_debugPoseRewindMemory = Dvar_Deregister(DVARBOOL_bg_debugPoseRewindMemory);
  DVARVEC3_viewposNow = Dvar_Deregister(DVARVEC3_viewposNow);
  DVARVEC3_viewangNow = Dvar_Deregister(DVARVEC3_viewangNow);
  DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleAltMode = Dvar_Deregister(DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleAltMode);
  DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleNVG = Dvar_Deregister(DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleNVG);
  DVARBOOL_bg_piggybackArmorOnNVG = Dvar_Deregister(DVARBOOL_bg_piggybackArmorOnNVG);
  DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleHybrid = Dvar_Deregister(DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleHybrid);
  DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleVariableZoom = Dvar_Deregister(DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleVariableZoom);
  DCONST_DVARINT_cl_holdBreathHoldTime = Dvar_Deregister(DCONST_DVARINT_cl_holdBreathHoldTime);
  DVARBOOL_sprint_allowRestore = Dvar_Deregister(DVARBOOL_sprint_allowRestore);
  DCONST_DVARMPBOOL_sprint_allowReload = Dvar_Deregister(DCONST_DVARMPBOOL_sprint_allowReload);
  DCONST_DVARINT_bg_disableToggleSprint = Dvar_Deregister(DCONST_DVARINT_bg_disableToggleSprint);
  DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult = Dvar_Deregister(DCONST_DVARMPFLT_bg_minimizedPromptFadeInDistanceMult);
  DVARINT_bg_useholdtimeshort = Dvar_Deregister(DVARINT_bg_useholdtimeshort);
  DVARINT_bg_useholdtimemedium = Dvar_Deregister(DVARINT_bg_useholdtimemedium);
  DVARINT_bg_useholdtimelong = Dvar_Deregister(DVARINT_bg_useholdtimelong);
  DVARBOOL_entitySpawnDebug = Dvar_Deregister(DVARBOOL_entitySpawnDebug);
  DVARBOOL_prioritySnapDebug = Dvar_Deregister(DVARBOOL_prioritySnapDebug);
  DVARFLT_prioritySnapSendPercentThreshold = Dvar_Deregister(DVARFLT_prioritySnapSendPercentThreshold);
  DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity = Dvar_Deregister(DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity);
  DVARBOOL_moverDebug = Dvar_Deregister(DVARBOOL_moverDebug);
  DCONST_DVARBOOL_pmove_useCage = Dvar_Deregister(DCONST_DVARBOOL_pmove_useCage);
  DCONST_DVARBOOL_pmove_useServerCage = Dvar_Deregister(DCONST_DVARBOOL_pmove_useServerCage);
  DCONST_DVARBOOL_pmove_debugPrintCage = Dvar_Deregister(DCONST_DVARBOOL_pmove_debugPrintCage);
  DVARFLT_pmove_snap_world_up = Dvar_Deregister(DVARFLT_pmove_snap_world_up);
  DCONST_DVARMPBOOL_pmove_moveWalkableOnly = Dvar_Deregister(DCONST_DVARMPBOOL_pmove_moveWalkableOnly);
  DCONST_DVARMPBOOL_player_isInZeroGLevel = Dvar_Deregister(DCONST_DVARMPBOOL_player_isInZeroGLevel);
  DVARBOOL_entityLeakDisplay = Dvar_Deregister(DVARBOOL_entityLeakDisplay);
  DVARBOOL_entityLeakDisableItemsCorpses = Dvar_Deregister(DVARBOOL_entityLeakDisableItemsCorpses);
  DVARFLT_scrAgent_ragdollMaxImpulse = Dvar_Deregister(DVARFLT_scrAgent_ragdollMaxImpulse);
  DVARFLT_scrAgent_ragdollImpulseZ = Dvar_Deregister(DVARFLT_scrAgent_ragdollImpulseZ);
  DVARBOOL_bg_attachHeadAsLastModel = Dvar_Deregister(DVARBOOL_bg_attachHeadAsLastModel);
  DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets = Dvar_Deregister(DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets);
  DCONST_DVARINT_debugVignette = Dvar_Deregister(DCONST_DVARINT_debugVignette);
  DCONST_DVARBOOL_debugDrawPlayerFootstepCollision = Dvar_Deregister(DCONST_DVARBOOL_debugDrawPlayerFootstepCollision);
  DCONST_DVARBOOL_debugDrawPlayerBulletCollision = Dvar_Deregister(DCONST_DVARBOOL_debugDrawPlayerBulletCollision);
  DVARBOOL_bg_highPriorityWeaponDebugPrint = Dvar_Deregister(DVARBOOL_bg_highPriorityWeaponDebugPrint);
  DCONST_DVARINT_bg_doorStateDebugPrint = Dvar_Deregister(DCONST_DVARINT_bg_doorStateDebugPrint);
  DCONST_DVARINT_bg_doorResolveCollisionDebugPrint = Dvar_Deregister(DCONST_DVARINT_bg_doorResolveCollisionDebugPrint);
  DCONST_DVARINT_bg_doorAngleDebugPrint = Dvar_Deregister(DCONST_DVARINT_bg_doorAngleDebugPrint);
  DCONST_DVARINT_bg_doorSnapshotDebugPrint = Dvar_Deregister(DCONST_DVARINT_bg_doorSnapshotDebugPrint);
  DCONST_DVARFLT_bg_doorCollisionRadiusInflation = Dvar_Deregister(DCONST_DVARFLT_bg_doorCollisionRadiusInflation);
  DCONST_DVARFLT_bg_doorTouchRadiusInflation = Dvar_Deregister(DCONST_DVARFLT_bg_doorTouchRadiusInflation);
  DCONST_DVARFLT_bg_doorBashRadiusInflation = Dvar_Deregister(DCONST_DVARFLT_bg_doorBashRadiusInflation);
  DCONST_DVARFLT_bg_doorMeleeExtensionDist = Dvar_Deregister(DCONST_DVARFLT_bg_doorMeleeExtensionDist);
  DCONST_DVARFLT_bg_doorBashShakeScale = Dvar_Deregister(DCONST_DVARFLT_bg_doorBashShakeScale);
  DCONST_DVARFLT_bg_doorBashShakeRadius = Dvar_Deregister(DCONST_DVARFLT_bg_doorBashShakeRadius);
  DCONST_DVARFLT_bg_doorBashLookAngleDifference = Dvar_Deregister(DCONST_DVARFLT_bg_doorBashLookAngleDifference);
  DCONST_DVARINT_bg_doorBashShakeDuration = Dvar_Deregister(DCONST_DVARINT_bg_doorBashShakeDuration);
  DVARFLT_bg_doorUseSpeed = Dvar_Deregister(DVARFLT_bg_doorUseSpeed);
  DVARFLT_bg_doorBashSpeed = Dvar_Deregister(DVARFLT_bg_doorBashSpeed);
  DVARFLT_bg_doorPeekSpeed = Dvar_Deregister(DVARFLT_bg_doorPeekSpeed);
  DVARFLT_bg_doorPeekAngle = Dvar_Deregister(DVARFLT_bg_doorPeekAngle);
  DCONST_DVARFLT_bg_doorWheelsonRadius = Dvar_Deregister(DCONST_DVARFLT_bg_doorWheelsonRadius);
  DCONST_DVARFLT_bg_doorATVRadius = Dvar_Deregister(DCONST_DVARFLT_bg_doorATVRadius);
  DVARINT_bg_doorUseAccelTime = Dvar_Deregister(DVARINT_bg_doorUseAccelTime);
  DVARINT_bg_doorPeekAccelTime = Dvar_Deregister(DVARINT_bg_doorPeekAccelTime);
  DCONST_DVARFLT_bg_doorDamageRadiusMultiplier = Dvar_Deregister(DCONST_DVARFLT_bg_doorDamageRadiusMultiplier);
  DCONST_DVARSTR_bg_doorBashRumbleName = Dvar_Deregister(DCONST_DVARSTR_bg_doorBashRumbleName);
  DCONST_DVARSTR_bg_doorPeekHintName = Dvar_Deregister(DCONST_DVARSTR_bg_doorPeekHintName);
  DVARBOOL_bg_doorEnableEnhanced = Dvar_Deregister(DVARBOOL_bg_doorEnableEnhanced);
  DVARBOOL_bg_doorCrashBadState = Dvar_Deregister(DVARBOOL_bg_doorCrashBadState);
  DCONST_DVARBOOL_bg_slope_worldmodel_anims = Dvar_Deregister(DCONST_DVARBOOL_bg_slope_worldmodel_anims);
  DCONST_DVARFLT_bg_slope_max_offset = Dvar_Deregister(DCONST_DVARFLT_bg_slope_max_offset);
  DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal = Dvar_Deregister(DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal);
  DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold = Dvar_Deregister(DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold);
  DCONST_DVARFLT_bg_slope_blend_movespeed_min = Dvar_Deregister(DCONST_DVARFLT_bg_slope_blend_movespeed_min);
  DCONST_DVARFLT_bg_slope_blend_movespeed_max = Dvar_Deregister(DCONST_DVARFLT_bg_slope_blend_movespeed_max);
  DCONST_DVARFLT_bg_slope_blend_time_min = Dvar_Deregister(DCONST_DVARFLT_bg_slope_blend_time_min);
  DCONST_DVARFLT_bg_slope_blend_time_max = Dvar_Deregister(DCONST_DVARFLT_bg_slope_blend_time_max);
  DCONST_DVARINT_bg_slope_debug = Dvar_Deregister(DCONST_DVARINT_bg_slope_debug);
  DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset = Dvar_Deregister(DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset);
  DCONST_DVARBOOL_bg_cameraUpdateOrderFix = Dvar_Deregister(DCONST_DVARBOOL_bg_cameraUpdateOrderFix);
  DCONST_DVARFLT_bg_maxLootDropDistanceXY = Dvar_Deregister(DCONST_DVARFLT_bg_maxLootDropDistanceXY);
  DCONST_DVARFLT_bg_maxLootDropHeight = Dvar_Deregister(DCONST_DVARFLT_bg_maxLootDropHeight);
  DCONST_DVARBOOL_scriptedAsmDebug = Dvar_Deregister(DCONST_DVARBOOL_scriptedAsmDebug);
  DVARINT_bg_trial_mission_id = Dvar_Deregister(DVARINT_bg_trial_mission_id);
  DVARINT_bg_trial_reward_tier = Dvar_Deregister(DVARINT_bg_trial_reward_tier);
  DVARINT_bg_trial_event_current_index = Dvar_Deregister(DVARINT_bg_trial_event_current_index);
  DVARINT_bg_trial_event_best_medal = Dvar_Deregister(DVARINT_bg_trial_event_best_medal);
  DVARBOOL_bg_trial_mission_is_event = Dvar_Deregister(DVARBOOL_bg_trial_mission_is_event);
  DCONST_DVARBOOL_bg_adsExtrapolationEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_adsExtrapolationEnabled);
  DCONST_DVARBOOL_bg_viewHeightExtrapolationEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_viewHeightExtrapolationEnabled);
  DCONST_DVARFLT_bg_spawngroup_loot_disable_cache_distance = Dvar_Deregister(DCONST_DVARFLT_bg_spawngroup_loot_disable_cache_distance);
  DCONST_DVARINT_bg_spawngroup_loot_override_chance_point = Dvar_Deregister(DCONST_DVARINT_bg_spawngroup_loot_override_chance_point);
  DCONST_DVARINT_bg_spawngroup_loot_override_chance_cluster = Dvar_Deregister(DCONST_DVARINT_bg_spawngroup_loot_override_chance_cluster);
  DCONST_DVARINT_bg_spawngroup_loot_override_chance_cache = Dvar_Deregister(DCONST_DVARINT_bg_spawngroup_loot_override_chance_cache);
  DCONST_DVARINT_bg_spawngroup_loot_override_chance_clusterSolo = Dvar_Deregister(DCONST_DVARINT_bg_spawngroup_loot_override_chance_clusterSolo);
  DCONST_DVARBOOL_bg_spawngroup_loot_warnOnRarityChanceAdd = Dvar_Deregister(DCONST_DVARBOOL_bg_spawngroup_loot_warnOnRarityChanceAdd);
  DVARBOOL_addlinkedmovervelocitytomissile = Dvar_Deregister(DVARBOOL_addlinkedmovervelocitytomissile);
  DVARBOOL_addmovervelocitytomissileonserver = Dvar_Deregister(DVARBOOL_addmovervelocitytomissileonserver);
  DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled = Dvar_Deregister(DCONST_DVARBOOL_bg_impulse_field_instrumentation_enabled);
  DCONST_DVARMPFLT_friction = Dvar_Deregister(DCONST_DVARMPFLT_friction);
  DCONST_DVARFLT_stopspeed = Dvar_Deregister(DCONST_DVARFLT_stopspeed);
  DCONST_DVARFLT_player_prone_view_pitch_up = Dvar_Deregister(DCONST_DVARFLT_player_prone_view_pitch_up);
  DCONST_DVARFLT_player_prone_view_pitch_down = Dvar_Deregister(DCONST_DVARFLT_player_prone_view_pitch_down);
  DCONST_DVARMPBOOL_bg_ladder_enabled = Dvar_Deregister(DCONST_DVARMPBOOL_bg_ladder_enabled);
  DCONST_DVARFLT_bg_ladder_pitch_up_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_pitch_up_cap);
  DCONST_DVARFLT_bg_ladder_aim_yaw_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_yaw_cap);
  DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_pitch_down_base_cap);
  DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_pitch_down_max_cap);
  DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_begin_yaw);
  DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_pitch_down_slope_end_yaw);
  DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_pitch_soft_angle_clamp);
  DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_aim_yaw_soft_angle_clamp);
  DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_pitch_soft_angle_clamp);
  DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_yaw_soft_angle_clamp);
  DCONST_DVARFLT_bg_ladder_climb_yaw_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_yaw_cap);
  DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_pitch_down_base_cap);
  DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_pitch_down_max_cap);
  DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_begin_yaw);
  DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw = Dvar_Deregister(DCONST_DVARFLT_bg_ladder_climb_pitch_down_slope_end_yaw);
  DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle = Dvar_Deregister(DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle);
  DCONST_DVARINT_bg_ladder_clamp_interp_total_time = Dvar_Deregister(DCONST_DVARINT_bg_ladder_clamp_interp_total_time);
  DCONST_DVARINT_bg_ladder_clamp_interp_accel_time = Dvar_Deregister(DCONST_DVARINT_bg_ladder_clamp_interp_accel_time);
  DCONST_DVARINT_bg_ladder_clamp_interp_decel_time = Dvar_Deregister(DCONST_DVARINT_bg_ladder_clamp_interp_decel_time);
  DCONST_DVARFLT_bg_prone_yawcap = Dvar_Deregister(DCONST_DVARFLT_bg_prone_yawcap);
  DCONST_DVARFLT_bg_foliagesnd_radius = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_radius);
  DCONST_DVARFLT_bg_foliagesnd_minspeed = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_minspeed);
  DCONST_DVARFLT_bg_foliagesnd_maxspeed = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_maxspeed);
  DCONST_DVARINT_bg_foliagesnd_slowinterval = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_slowinterval);
  DCONST_DVARINT_bg_foliagesnd_fastinterval = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_fastinterval);
  DCONST_DVARINT_bg_foliagesnd_resetinterval = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_resetinterval);
  DCONST_DVARFLT_bg_foliagesnd_radius_veh = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_radius_veh);
  DCONST_DVARFLT_bg_foliagesnd_minspeed_veh = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_minspeed_veh);
  DCONST_DVARFLT_bg_foliagesnd_maxspeed_veh = Dvar_Deregister(DCONST_DVARFLT_bg_foliagesnd_maxspeed_veh);
  DCONST_DVARINT_bg_foliagesnd_slowinterval_veh = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_slowinterval_veh);
  DCONST_DVARINT_bg_foliagesnd_fastinterval_veh = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_fastinterval_veh);
  DCONST_DVARINT_bg_foliagesnd_resetinterval_veh = Dvar_Deregister(DCONST_DVARINT_bg_foliagesnd_resetinterval_veh);
  DCONST_DVARFLT_bg_landFXLightHeight = Dvar_Deregister(DCONST_DVARFLT_bg_landFXLightHeight);
  DCONST_DVARFLT_bg_landFXMediumHeight = Dvar_Deregister(DCONST_DVARFLT_bg_landFXMediumHeight);
  DCONST_DVARFLT_bg_highJumpFallDamageMinHeight = Dvar_Deregister(DCONST_DVARFLT_bg_highJumpFallDamageMinHeight);
  DCONST_DVARFLT_bg_highJumpFallDamageMaxHeight = Dvar_Deregister(DCONST_DVARFLT_bg_highJumpFallDamageMaxHeight);
  DCONST_DVARFLT_bg_boostJumpFallDamageMinHeight = Dvar_Deregister(DCONST_DVARFLT_bg_boostJumpFallDamageMinHeight);
  DCONST_DVARFLT_bg_boostJumpFallDamageMaxHeight = Dvar_Deregister(DCONST_DVARFLT_bg_boostJumpFallDamageMaxHeight);
  DCONST_DVARINT_bg_boostJumpFallDamageMaxDamage = Dvar_Deregister(DCONST_DVARINT_bg_boostJumpFallDamageMaxDamage);
  DCONST_DVARFLT_player_jogForwardSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_jogForwardSpeedScale);
  DCONST_DVARFLT_player_strafeSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_strafeSpeedScale);
  DCONST_DVARFLT_player_backSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_backSpeedScale);
  DCONST_DVARFLT_player_spectateSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_spectateSpeedScale);
  DCONST_DVARINT_player_sprintForwardMinimum = Dvar_Deregister(DCONST_DVARINT_player_sprintForwardMinimum);
  DVARFLT_player_sprintTime = Dvar_Deregister(DVARFLT_player_sprintTime);
  DCONST_DVARFLT_player_sprintMinActivationTime = Dvar_Deregister(DCONST_DVARFLT_player_sprintMinActivationTime);
  DCONST_DVARFLT_player_sprintMinActivationPercent = Dvar_Deregister(DCONST_DVARFLT_player_sprintMinActivationPercent);
  DCONST_DVARFLT_player_sprintRechargeScale = Dvar_Deregister(DCONST_DVARFLT_player_sprintRechargeScale);
  DCONST_DVARFLT_player_sprintRechargePause = Dvar_Deregister(DCONST_DVARFLT_player_sprintRechargePause);
  DCONST_DVARFLT_player_sprintStrafeSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_sprintStrafeSpeedScale);
  DCONST_DVARFLT_player_sprintCameraBob = Dvar_Deregister(DCONST_DVARFLT_player_sprintCameraBob);
  DCONST_DVARFLT_player_lastStandCrawlSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_lastStandCrawlSpeedScale);
  DCONST_DVARMPFLT_player_crouchSpeedScale = Dvar_Deregister(DCONST_DVARMPFLT_player_crouchSpeedScale);
  DCONST_DVARMPFLT_player_proneSpeedScale = Dvar_Deregister(DCONST_DVARMPFLT_player_proneSpeedScale);
  DCONST_DVARFLT_player_dmgtimer_timePerPoint = Dvar_Deregister(DCONST_DVARFLT_player_dmgtimer_timePerPoint);
  DCONST_DVARFLT_player_dmgtimer_maxTime = Dvar_Deregister(DCONST_DVARFLT_player_dmgtimer_maxTime);
  DCONST_DVARFLT_player_dmgtimer_minScale = Dvar_Deregister(DCONST_DVARFLT_player_dmgtimer_minScale);
  DCONST_DVARINT_player_dmgtimer_stumbleTime = Dvar_Deregister(DCONST_DVARINT_player_dmgtimer_stumbleTime);
  DCONST_DVARINT_player_dmgtimer_flinchTime = Dvar_Deregister(DCONST_DVARINT_player_dmgtimer_flinchTime);
  DCONST_DVARFLT_bg_lowGravity = Dvar_Deregister(DCONST_DVARFLT_bg_lowGravity);
  DCONST_DVARMPBOOL_player_sprintUnlimited = Dvar_Deregister(DCONST_DVARMPBOOL_player_sprintUnlimited);
  DCONST_DVARMPBOOL_moving_platform_improved_aim = Dvar_Deregister(DCONST_DVARMPBOOL_moving_platform_improved_aim);
  DCONST_DVARMPSPFLT_player_footstepsThreshholdCrouch = Dvar_Deregister(DCONST_DVARMPSPFLT_player_footstepsThreshholdCrouch);
  DCONST_DVARMPSPFLT_player_footstepsThreshholdProne = Dvar_Deregister(DCONST_DVARMPSPFLT_player_footstepsThreshholdProne);
  DCONST_DVARMPSPFLT_player_footstepsThresholdTurning = Dvar_Deregister(DCONST_DVARMPSPFLT_player_footstepsThresholdTurning);
  DCONST_DVARMPBOOL_player_useLegacyFootstepParsing = Dvar_Deregister(DCONST_DVARMPBOOL_player_useLegacyFootstepParsing);
  DCONST_DVARFLT_player_slope_minAngle = Dvar_Deregister(DCONST_DVARFLT_player_slope_minAngle);
  DCONST_DVARFLT_player_slope_maxAngle = Dvar_Deregister(DCONST_DVARFLT_player_slope_maxAngle);
  DCONST_DVARFLT_player_slope_upSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_upSpeedScale);
  DCONST_DVARFLT_player_slope_downSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_downSpeedScale);
  DCONST_DVARFLT_player_slope_lateralSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_lateralSpeedScale);
  DCONST_DVARFLT_player_slope_upBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_upBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_downBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_downBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_upBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_upBobFrequencyScale);
  DCONST_DVARFLT_player_slope_downBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_downBobFrequencyScale);
  DCONST_DVARFLT_player_slope_lateralBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_lateralBobFrequencyScale);
  DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale);
  DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale);
  DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale);
  DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_upSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_upSpeedScale);
  DCONST_DVARFLT_player_stairs_downSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_downSpeedScale);
  DCONST_DVARFLT_player_stairs_lateralSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_lateralSpeedScale);
  DCONST_DVARFLT_player_stairs_upBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_upBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_downBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_downBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_upBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_upBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_downBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_downBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale);
  DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale = Dvar_Deregister(DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale);
  DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand = Dvar_Deregister(DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand);
  DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_crouch = Dvar_Deregister(DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_crouch);
  DCONST_DVARFLT_player_stairs_footstep_sound_minratio = Dvar_Deregister(DCONST_DVARFLT_player_stairs_footstep_sound_minratio);
  DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed = Dvar_Deregister(DCONST_DVARFLT_player_slopestairs_blend_min_moveSpeed);
  DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed = Dvar_Deregister(DCONST_DVARFLT_player_slopestairs_blend_max_moveSpeed);
  DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs = Dvar_Deregister(DCONST_DVARINT_player_slopestairs_blend_min_moveSpeed_blendTimeMs);
  DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs = Dvar_Deregister(DCONST_DVARINT_player_slopestairs_blend_max_moveSpeed_blendTimeMs);
  DCONST_DVARFLT_player_bullChargeSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeSpeedScale);
  DCONST_DVARFLT_player_bullChargeDurationSecs = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeDurationSecs);
  DCONST_DVARFLT_player_bullChargeTurnRatePitchBegin = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeTurnRatePitchBegin);
  DCONST_DVARFLT_player_bullChargeTurnRatePitchEnd = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeTurnRatePitchEnd);
  DCONST_DVARFLT_player_bullChargeTurnRateYawBegin = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeTurnRateYawBegin);
  DCONST_DVARFLT_player_bullChargeTurnRateYawEnd = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeTurnRateYawEnd);
  DCONST_DVARFLT_player_bullChargeMaxVelocityForTurnRateInterp = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeMaxVelocityForTurnRateInterp);
  DCONST_DVARFLT_player_bullChargeAcceleration = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeAcceleration);
  DCONST_DVARFLT_player_bullChargeNoDeactivationTimePeriod = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeNoDeactivationTimePeriod);
  DCONST_DVARFLT_player_bullChargeCancelSpeed = Dvar_Deregister(DCONST_DVARFLT_player_bullChargeCancelSpeed);
  DCONST_DVARINT_player_bullChargeSpeedCheckTimeIntervalAfterMantle = Dvar_Deregister(DCONST_DVARINT_player_bullChargeSpeedCheckTimeIntervalAfterMantle);
  DCONST_DVARINT_player_deathYawLerpDegPerSec = Dvar_Deregister(DCONST_DVARINT_player_deathYawLerpDegPerSec);
  DCONST_DVARBOOL_collAvoid_disableFriendlyCollision = Dvar_Deregister(DCONST_DVARBOOL_collAvoid_disableFriendlyCollision);
  DCONST_DVARBOOL_collAvoid_disableServerClientStuckCheck = Dvar_Deregister(DCONST_DVARBOOL_collAvoid_disableServerClientStuckCheck);
  DCONST_DVARBOOL_collAvoid_useHardLanding = Dvar_Deregister(DCONST_DVARBOOL_collAvoid_useHardLanding);
  DCONST_DVARINT_collAvoid_hardLandingTimeMs = Dvar_Deregister(DCONST_DVARINT_collAvoid_hardLandingTimeMs);
  DCONST_DVARMPBOOL_player_altAcceleration = Dvar_Deregister(DCONST_DVARMPBOOL_player_altAcceleration);
  DCONST_DVARMPFLT_player_globalAccelScale = Dvar_Deregister(DCONST_DVARMPFLT_player_globalAccelScale);
  DCONST_DVARBOOL_suits_useAssets = Dvar_Deregister(DCONST_DVARBOOL_suits_useAssets);
  DCONST_DVARFLT_player_glassBreakDistance = Dvar_Deregister(DCONST_DVARFLT_player_glassBreakDistance);
  DCONST_DVARFLT_player_glassBreakSpeed = Dvar_Deregister(DCONST_DVARFLT_player_glassBreakSpeed);
  DCONST_DVARFLT_player_glassBreakWalkableSpeed = Dvar_Deregister(DCONST_DVARFLT_player_glassBreakWalkableSpeed);
  DCONST_DVARFLT_player_glassBreakSpeedScale = Dvar_Deregister(DCONST_DVARFLT_player_glassBreakSpeedScale);
  DCONST_DVARBOOL_player_enableForcePlayerCollision = Dvar_Deregister(DCONST_DVARBOOL_player_enableForcePlayerCollision);
  DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold = Dvar_Deregister(DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold);
  DCONST_DVARBOOL_playerCharacterCollisionUseNew = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionUseNew);
  DCONST_DVARBOOL_playerCharacterCollisionFullClientBound = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionFullClientBound);
  DCONST_DVARBOOL_playerCharacterCollisionThrottleQuantization = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionThrottleQuantization);
  DCONST_DVARFLT_playerCharacterCollisionQuantizationRange = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionQuantizationRange);
  DCONST_DVARMPBOOL_playerCharacterCollisionFriendlySoftPush = Dvar_Deregister(DCONST_DVARMPBOOL_playerCharacterCollisionFriendlySoftPush);
  DCONST_DVARFLT_playerCharacterCollisionMaxPenetrationVelocity = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionMaxPenetrationVelocity);
  DCONST_DVARFLT_playerCharacterCollisionMaxMoverPenetrationVelocity = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionMaxMoverPenetrationVelocity);
  DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset = Dvar_Deregister(DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset);
  DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionPenetrationDepth);
  DCONST_DVARFLT_playerCharacterCollisionHardDampen = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionHardDampen);
  DCONST_DVARFLT_playerCharacterCollisionSoftGlanceStrength = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionSoftGlanceStrength);
  DCONST_DVARBOOL_playerCharacterCollisionExtendExtension = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionExtendExtension);
  DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFix);
  DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix);
  DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix);
  DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix_UseTime = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionLedgeWalkFix_UseTime);
  DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionHeadPenetrationFallFix);
  DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix);
  DCONST_DVARBOOL_playerCharacterCollisionCrouchStuckFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionCrouchStuckFix);
  DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix = Dvar_Deregister(DCONST_DVARBOOL_playerCharacterCollisionProneStuckFix);
  DVARBOOL_playerCharacterCollisionMoverStanceFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMoverStanceFix);
  DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix);
  DVARBOOL_playerCharacterCollisionMantleFloorFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMantleFloorFix);
  DVARBOOL_playerCharacterCollisionVehicleWallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionVehicleWallFix);
  DVARBOOL_playerCharacterCollisionVehicleAngleWallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionVehicleAngleWallFix);
  DVARBOOL_playerCharacterCollisionVehicleJumpWallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionVehicleJumpWallFix);
  DVARBOOL_playerCharacterCollisionVehicleHeadWallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionVehicleHeadWallFix);
  DVARBOOL_playerCharacterCollisionMantleVehicleWallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMantleVehicleWallFix);
  DVARBOOL_playerCharacterCollisionProneStuckFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionProneStuckFix);
  DVARBOOL_playerCharacterCollisionProneStuckFallFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionProneStuckFallFix);
  DVARBOOL_playerCharacterCollisionMantleWindowFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMantleWindowFix);
  DVARBOOL_playerCharacterCollisionMoverRockingCollision = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMoverRockingCollision);
  DVARBOOL_playerCharacterCollisionMoverRockingCollision2 = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMoverRockingCollision2);
  DVARBOOL_playerCharacterCollisionWallClimbFix = Dvar_Deregister(DVARBOOL_playerCharacterCollisionWallClimbFix);
  DVARBOOL_playerCharacterCollisionMoverRockingCollision3 = Dvar_Deregister(DVARBOOL_playerCharacterCollisionMoverRockingCollision3);
  DVARBOOL_player_vehicleSeatViewHeightLerpFixEnabled = Dvar_Deregister(DVARBOOL_player_vehicleSeatViewHeightLerpFixEnabled);
  DVARBOOL_vehicleMoverBlockCharacterPickup = Dvar_Deregister(DVARBOOL_vehicleMoverBlockCharacterPickup);
  DCONST_DVARFLT_vehicleMoverBlockPickupHeight = Dvar_Deregister(DCONST_DVARFLT_vehicleMoverBlockPickupHeight);
  DCONST_DVARINT_playerCharacterCollisionDebugWallExploits = Dvar_Deregister(DCONST_DVARINT_playerCharacterCollisionDebugWallExploits);
  DCONST_DVARFLT_playerCharacterCollisionHardCollisionOnRespawnTime = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionHardCollisionOnRespawnTime);
  DCONST_DVARFLT_playerCharacterCollisionLedgeWalkFixTime = Dvar_Deregister(DCONST_DVARFLT_playerCharacterCollisionLedgeWalkFixTime);
  DCONST_DVARFLT_shortStickExtensionLength = Dvar_Deregister(DCONST_DVARFLT_shortStickExtensionLength);
  DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver = Dvar_Deregister(DCONST_DVARMPBOOL_movingPlatformUseNewPenetrationSolver);
  DCONST_DVARBOOL_movingPlatformForceOptimized = Dvar_Deregister(DCONST_DVARBOOL_movingPlatformForceOptimized);
  DVARBOOL_movingPlatformFixClientPushJitter = Dvar_Deregister(DVARBOOL_movingPlatformFixClientPushJitter);
  DCONST_DVARBOOL_removePlayerCollision = Dvar_Deregister(DCONST_DVARBOOL_removePlayerCollision);
  DCONST_DVARMPFLT_player_limitedMovementLeftStickInputScale = Dvar_Deregister(DCONST_DVARMPFLT_player_limitedMovementLeftStickInputScale);
  DCONST_DVARFLT_worldUpTransitionSpringStrength = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionSpringStrength);
  DCONST_DVARFLT_worldUpTransitionSpringOscillation = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionSpringOscillation);
  DCONST_DVARFLT_worldUpTransitionFastBlendSpeed = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionFastBlendSpeed);
  DCONST_DVARFLT_worldUpTransitionNormalCompare = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionNormalCompare);
  DCONST_DVARFLT_worldUpTransitionPosVelocity = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionPosVelocity);
  DCONST_DVARFLT_worldUpTransitionDistCompare = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionDistCompare);
  DCONST_DVARFLT_worldUpTransitionFriction = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionFriction);
  DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionTriggerNormalCompare);
  DCONST_DVARFLT_worldUpTransitionVelocityNormalCompare = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionVelocityNormalCompare);
  DCONST_DVARFLT_worldUpTransitionNormalCompareFastBlend = Dvar_Deregister(DCONST_DVARFLT_worldUpTransitionNormalCompareFastBlend);
  DCONST_DVARBOOL_useBgTraceSystem = Dvar_Deregister(DCONST_DVARBOOL_useBgTraceSystem);
  DCONST_DVARBOOL_usePmoveMoverSystem = Dvar_Deregister(DCONST_DVARBOOL_usePmoveMoverSystem);
  DCONST_DVARMPBOOL_moving_platform_improved_aim_new = Dvar_Deregister(DCONST_DVARMPBOOL_moving_platform_improved_aim_new);
  DVARBOOL_movingPlatformJumpMomentumFix = Dvar_Deregister(DVARBOOL_movingPlatformJumpMomentumFix);
  DVARBOOL_movingPlatformJumpMomentumFix2 = Dvar_Deregister(DVARBOOL_movingPlatformJumpMomentumFix2);
  DVARINT_movingPlatformTrackLastPlatformInAirTimerMS = Dvar_Deregister(DVARINT_movingPlatformTrackLastPlatformInAirTimerMS);
  DVARBOOL_movingPlatformUseKeyframeVelocities = Dvar_Deregister(DVARBOOL_movingPlatformUseKeyframeVelocities);
  DCONST_DVARINT_debug_player_collision = Dvar_Deregister(DCONST_DVARINT_debug_player_collision);
  DCONST_DVARMPBOOL_useLegacyPCLadderControls = Dvar_Deregister(DCONST_DVARMPBOOL_useLegacyPCLadderControls);
  DCONST_DVARMPFLT_ladderCrouchSlideSpeed = Dvar_Deregister(DCONST_DVARMPFLT_ladderCrouchSlideSpeed);
  DCONST_DVARMPFLT_ladderCrouchSlideAccel = Dvar_Deregister(DCONST_DVARMPFLT_ladderCrouchSlideAccel);
  DCONST_DVARMPFLT_ladderMagnetismSpeed = Dvar_Deregister(DCONST_DVARMPFLT_ladderMagnetismSpeed);
  DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed = Dvar_Deregister(DCONST_DVARMPFLT_ladderMagnetismEnhancedSpeed);
  DCONST_DVARMPFLT_ladderPullinBoundsScale = Dvar_Deregister(DCONST_DVARMPFLT_ladderPullinBoundsScale);
  DCONST_DVARMPFLT_ladderJumpRightScale = Dvar_Deregister(DCONST_DVARMPFLT_ladderJumpRightScale);
  DCONST_DVARMPFLT_ladderJumpBackVelocity = Dvar_Deregister(DCONST_DVARMPFLT_ladderJumpBackVelocity);
  DCONST_DVARMPFLT_ladderJumpDefaultUpDesire = Dvar_Deregister(DCONST_DVARMPFLT_ladderJumpDefaultUpDesire);
  DCONST_DVARMPBOOL_ladderEnableWeapon = Dvar_Deregister(DCONST_DVARMPBOOL_ladderEnableWeapon);
  DCONST_DVARMPBOOL_ladderEnableEnhanced = Dvar_Deregister(DCONST_DVARMPBOOL_ladderEnableEnhanced);
  DCONST_DVARMPBOOL_ladderEnableStrafe = Dvar_Deregister(DCONST_DVARMPBOOL_ladderEnableStrafe);
  DCONST_DVARMPFLT_ladderCresting = Dvar_Deregister(DCONST_DVARMPFLT_ladderCresting);
  DCONST_DVARMPFLT_ladderVaultOffset = Dvar_Deregister(DCONST_DVARMPFLT_ladderVaultOffset);
  DVARBOOL_ladderEnableKillstreakEarlyoutDropping = Dvar_Deregister(DVARBOOL_ladderEnableKillstreakEarlyoutDropping);
  DVARBOOL_ladderEnablePausedAfterFiringWeaponStateTimeout = Dvar_Deregister(DVARBOOL_ladderEnablePausedAfterFiringWeaponStateTimeout);
  DCONST_DVARMPBOOL_enableJog = Dvar_Deregister(DCONST_DVARMPBOOL_enableJog);
  DCONST_DVARFLT_jogStickMinDeflectionStart = Dvar_Deregister(DCONST_DVARFLT_jogStickMinDeflectionStart);
  DCONST_DVARFLT_jogStickMinDeflectionMaintain = Dvar_Deregister(DCONST_DVARFLT_jogStickMinDeflectionMaintain);
  DCONST_DVARFLT_jogStickMinAngleStart = Dvar_Deregister(DCONST_DVARFLT_jogStickMinAngleStart);
  DCONST_DVARFLT_jogStickMinAngleMaintain = Dvar_Deregister(DCONST_DVARFLT_jogStickMinAngleMaintain);
  DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent = Dvar_Deregister(DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent);
  DCONST_DVARMPBOOL_useAngleAdjustedSpeeds = Dvar_Deregister(DCONST_DVARMPBOOL_useAngleAdjustedSpeeds);
  DCONST_DVARFLT_sprintStrafeSpeedAngle = Dvar_Deregister(DCONST_DVARFLT_sprintStrafeSpeedAngle);
  DCONST_DVARFLT_walkStrafeSpeedAngle = Dvar_Deregister(DCONST_DVARFLT_walkStrafeSpeedAngle);
  DCONST_DVARMPBOOL_enableSprintViewHeight = Dvar_Deregister(DCONST_DVARMPBOOL_enableSprintViewHeight);
  DCONST_DVARFLT_sprintViewHeightLerpSpeed = Dvar_Deregister(DCONST_DVARFLT_sprintViewHeightLerpSpeed);
  DCONST_DVARFLT_sprintAdsSpeedScale = Dvar_Deregister(DCONST_DVARFLT_sprintAdsSpeedScale);
  DCONST_DVARINT_lastStandViewHeightLerpTime = Dvar_Deregister(DCONST_DVARINT_lastStandViewHeightLerpTime);
  DCONST_DVARMODEBOOL_adsReloadEnabled = Dvar_Deregister(DCONST_DVARMODEBOOL_adsReloadEnabled);
  DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction = Dvar_Deregister(DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction);
  DCONST_DVARMODEBOOL_adsPredictionSmoothingEnabled = Dvar_Deregister(DCONST_DVARMODEBOOL_adsPredictionSmoothingEnabled);
  DCONST_DVARMPFLT_playerCollisionStandingStickHeight = Dvar_Deregister(DCONST_DVARMPFLT_playerCollisionStandingStickHeight);
  DCONST_DVARFLT_playerCollisionStickExtention = Dvar_Deregister(DCONST_DVARFLT_playerCollisionStickExtention);
  DCONST_DVARBOOL_playerCollisionDebug = Dvar_Deregister(DCONST_DVARBOOL_playerCollisionDebug);
  DCONST_DVARFLT_playerCollisionMaxStepHeight = Dvar_Deregister(DCONST_DVARFLT_playerCollisionMaxStepHeight);
  DCONST_DVARINT_playerCollisionType = Dvar_Deregister(DCONST_DVARINT_playerCollisionType);
  DCONST_DVARFLT_player_crouchProneBlendTransitionTime = Dvar_Deregister(DCONST_DVARFLT_player_crouchProneBlendTransitionTime);
  DCONST_DVARMPBOOL_superSprintEnable = Dvar_Deregister(DCONST_DVARMPBOOL_superSprintEnable);
  DCONST_DVARBOOL_superSprintFromWalk = Dvar_Deregister(DCONST_DVARBOOL_superSprintFromWalk);
  DCONST_DVARBOOL_superSprintEnableMotionBlur = Dvar_Deregister(DCONST_DVARBOOL_superSprintEnableMotionBlur);
  DCONST_DVARFLT_superSprintSpeedScale = Dvar_Deregister(DCONST_DVARFLT_superSprintSpeedScale);
  DVARFLT_superSprintRechargeScale = Dvar_Deregister(DVARFLT_superSprintRechargeScale);
  DCONST_DVARFLT_superSprintHeightBlendSpeed = Dvar_Deregister(DCONST_DVARFLT_superSprintHeightBlendSpeed);
  DCONST_DVARINT_superSprintHeightOffset = Dvar_Deregister(DCONST_DVARINT_superSprintHeightOffset);
  DVARFLT_superSprintMinActivationChargePercent = Dvar_Deregister(DVARFLT_superSprintMinActivationChargePercent);
  DCONST_DVARINT_superSprintControlType = Dvar_Deregister(DCONST_DVARINT_superSprintControlType);
  DCONST_DVARMPFLT_movementAnimProto_TransitionBlendTime = Dvar_Deregister(DCONST_DVARMPFLT_movementAnimProto_TransitionBlendTime);
  DCONST_DVARMPFLT_movementAnimProto_TransitionToTransitionBlendTime = Dvar_Deregister(DCONST_DVARMPFLT_movementAnimProto_TransitionToTransitionBlendTime);
  DCONST_DVARMPFLT_movementAnimProto_DownFromSuperSprintCycleBlendScale = Dvar_Deregister(DCONST_DVARMPFLT_movementAnimProto_DownFromSuperSprintCycleBlendScale);
  DCONST_DVARMPFLT_movementAnimProto_QuickTransOutSprint = Dvar_Deregister(DCONST_DVARMPFLT_movementAnimProto_QuickTransOutSprint);
  DCONST_DVARMPFLT_movementAnimProto_QuickTransOutSuperSprint = Dvar_Deregister(DCONST_DVARMPFLT_movementAnimProto_QuickTransOutSuperSprint);
  DVARBOOL_killswitch_sprint_slide_exploit_fix = Dvar_Deregister(DVARBOOL_killswitch_sprint_slide_exploit_fix);
  DCONST_DVARFLT_predictionViewValueSnapThreshold = Dvar_Deregister(DCONST_DVARFLT_predictionViewValueSnapThreshold);
  DCONST_DVARBOOL_extrap_useGroundTraceOnClient = Dvar_Deregister(DCONST_DVARBOOL_extrap_useGroundTraceOnClient);
  DCONST_DVARBOOL_extrap_useGroundTraceOnServer = Dvar_Deregister(DCONST_DVARBOOL_extrap_useGroundTraceOnServer);
  DCONST_DVARBOOL_proneToSprintActive = Dvar_Deregister(DCONST_DVARBOOL_proneToSprintActive);
  DCONST_DVARFLT_proneToSprintSpeedScale = Dvar_Deregister(DCONST_DVARFLT_proneToSprintSpeedScale);
  DCONST_DVARFLT_proneToSprintStandSpeed = Dvar_Deregister(DCONST_DVARFLT_proneToSprintStandSpeed);
  DCONST_DVARBOOL_allowSimpleLerpToProne = Dvar_Deregister(DCONST_DVARBOOL_allowSimpleLerpToProne);
  DCONST_DVARINT_stanceStandToProneHoldTime = Dvar_Deregister(DCONST_DVARINT_stanceStandToProneHoldTime);
  DCONST_DVARBOOL_stretchDirectStandToProneTime = Dvar_Deregister(DCONST_DVARBOOL_stretchDirectStandToProneTime);
  DCONST_DVARBOOL_useLocalSpaceForAllMovers = Dvar_Deregister(DCONST_DVARBOOL_useLocalSpaceForAllMovers);
  DCONST_DVARBOOL_debugMispredict = Dvar_Deregister(DCONST_DVARBOOL_debugMispredict);
  DCONST_DVARINT_debugMispredictSpecificId = Dvar_Deregister(DCONST_DVARINT_debugMispredictSpecificId);
  DCONST_DVARINT_debugMispredictSpecificThread = Dvar_Deregister(DCONST_DVARINT_debugMispredictSpecificThread);
  DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint = Dvar_Deregister(DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint);
  DCONST_DVARFLT_centerview_cameraPitchOffset = Dvar_Deregister(DCONST_DVARFLT_centerview_cameraPitchOffset);
  DCONST_DVARINT_centerview_cameraAlignmentEaseModeIn = Dvar_Deregister(DCONST_DVARINT_centerview_cameraAlignmentEaseModeIn);
  DCONST_DVARINT_centerview_cameraAlignmentEaseModeOut = Dvar_Deregister(DCONST_DVARINT_centerview_cameraAlignmentEaseModeOut);
  DCONST_DVARINT_centerview_cameraRotateTimeMs = Dvar_Deregister(DCONST_DVARINT_centerview_cameraRotateTimeMs);
  DCONST_DVARBOOL_viewHeightDebugLogEnabled = Dvar_Deregister(DCONST_DVARBOOL_viewHeightDebugLogEnabled);
  DVARBOOL_pm_enable_solid_coop_agents = Dvar_Deregister(DVARBOOL_pm_enable_solid_coop_agents);
  DCONST_DVARBOOL_playerButtCollisionClientBroadphaseInUse = Dvar_Deregister(DCONST_DVARBOOL_playerButtCollisionClientBroadphaseInUse);
  DVARFLT_playerButtCollisionClientBroadphaseExtraRadius = Dvar_Deregister(DVARFLT_playerButtCollisionClientBroadphaseExtraRadius);
  DVARFLT_playerButtCollisionOffset = Dvar_Deregister(DVARFLT_playerButtCollisionOffset);
  DVARFLT_playerButtCollisionTestRadius = Dvar_Deregister(DVARFLT_playerButtCollisionTestRadius);
  DVARFLT_playerButtCollisionBlendTimeSec = Dvar_Deregister(DVARFLT_playerButtCollisionBlendTimeSec);
  DVARINT_playerLastStandCollisionTestSteps = Dvar_Deregister(DVARINT_playerLastStandCollisionTestSteps);
  DVARINT_playerLastStandCollisionTestMaxIterations = Dvar_Deregister(DVARINT_playerLastStandCollisionTestMaxIterations);
  DVARFLT_playerLastStandCollisionTestIntervalRatio = Dvar_Deregister(DVARFLT_playerLastStandCollisionTestIntervalRatio);
  DVARFLT_playerLastStandDownTraceDistance = Dvar_Deregister(DVARFLT_playerLastStandDownTraceDistance);
  DVARFLT_playerLastStandContourShapecastRadius = Dvar_Deregister(DVARFLT_playerLastStandContourShapecastRadius);
  DCONST_DVARINT_playerLastStandMovementRestlessLegsTimeMs = Dvar_Deregister(DCONST_DVARINT_playerLastStandMovementRestlessLegsTimeMs);
  DCONST_DVARBOOL_playerLastStandDebug = Dvar_Deregister(DCONST_DVARBOOL_playerLastStandDebug);
  DVARINT_playerProneViewheightAdjust = Dvar_Deregister(DVARINT_playerProneViewheightAdjust);
  DVARINT_playerProneViewheightAdjust_worldStreamingMap = Dvar_Deregister(DVARINT_playerProneViewheightAdjust_worldStreamingMap);
  DCONST_DVARBOOL_snd_footstep_debug = Dvar_Deregister(DCONST_DVARBOOL_snd_footstep_debug);
  DCONST_DVARFLT_snd_footstep_debug_fontsize = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_debug_fontsize);
  DCONST_DVARINT_snd_footstep_movetypeblend_window_up_ms = Dvar_Deregister(DCONST_DVARINT_snd_footstep_movetypeblend_window_up_ms);
  DCONST_DVARINT_snd_footstep_movetypeblend_window_down_ms = Dvar_Deregister(DCONST_DVARINT_snd_footstep_movetypeblend_window_down_ms);
  DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep);
  DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk);
  DCONST_DVARFLT_snd_footstep_movetypeblend_value_run = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_movetypeblend_value_run);
  DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint);
  DCONST_DVARFLT_snd_footstep_movetypeblend_value_supersprint = Dvar_Deregister(DCONST_DVARFLT_snd_footstep_movetypeblend_value_supersprint);
  DCONST_DVARFLT_snd_foosteps_movetypeblend_bias = Dvar_Deregister(DCONST_DVARFLT_snd_foosteps_movetypeblend_bias);
  DCONST_DVARFLT_player_strafeAnimCosAngle = Dvar_Deregister(DCONST_DVARFLT_player_strafeAnimCosAngle);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_start = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_start);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_start = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_start);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_start = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_start);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_end = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_end);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_end = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_end);
  DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_end = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_end);
  DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration);
  DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent);
  DCONST_DVARINT_g_anim_mp_idle_turn_delay = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_delay);
  DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent = Dvar_Deregister(DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent);
  DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed);
  DCONST_DVARFLT_g_anim_mp_idle_turn_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_angle);
  DCONST_DVARFLT_g_anim_mp_idle_turn_prone_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_prone_angle);
  DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle);
  DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_angle);
  DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_prone_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_prone_angle);
  DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle = Dvar_Deregister(DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle);
  DCONST_DVARFLT_bg_animUnspeedScaledDuration = Dvar_Deregister(DCONST_DVARFLT_bg_animUnspeedScaledDuration);
  DCONST_DVARFLT_player_lean_shift_left = Dvar_Deregister(DCONST_DVARFLT_player_lean_shift_left);
  DCONST_DVARFLT_player_lean_shift_right = Dvar_Deregister(DCONST_DVARFLT_player_lean_shift_right);
  DCONST_DVARFLT_player_lean_shift_crouch_left = Dvar_Deregister(DCONST_DVARFLT_player_lean_shift_crouch_left);
  DCONST_DVARFLT_player_lean_shift_crouch_right = Dvar_Deregister(DCONST_DVARFLT_player_lean_shift_crouch_right);
  DCONST_DVARFLT_player_lean_rotate_left = Dvar_Deregister(DCONST_DVARFLT_player_lean_rotate_left);
  DCONST_DVARFLT_player_lean_rotate_right = Dvar_Deregister(DCONST_DVARFLT_player_lean_rotate_right);
  DCONST_DVARFLT_player_lean_rotate_crouch_left = Dvar_Deregister(DCONST_DVARFLT_player_lean_rotate_crouch_left);
  DCONST_DVARFLT_player_lean_rotate_crouch_right = Dvar_Deregister(DCONST_DVARFLT_player_lean_rotate_crouch_right);
  DVARFLT_g_anim_mp_prone_max_slope = Dvar_Deregister(DVARFLT_g_anim_mp_prone_max_slope);
  DCONST_DVARBOOL_player_align_death_anim = Dvar_Deregister(DCONST_DVARBOOL_player_align_death_anim);
  DCONST_DVARINT_player_align_death_anim_ms = Dvar_Deregister(DCONST_DVARINT_player_align_death_anim_ms);
  DVARBOOL_player_align_death_anim_unknown_direction_update_angles = Dvar_Deregister(DVARBOOL_player_align_death_anim_unknown_direction_update_angles);
  DVARINT_pmoveanim_debug = Dvar_Deregister(DVARINT_pmoveanim_debug);
  DVARINT_xanim_debug = Dvar_Deregister(DVARINT_xanim_debug);
  DVARINT_animscript_debug = Dvar_Deregister(DVARINT_animscript_debug);
  DVARINT_anim_aim_debug = Dvar_Deregister(DVARINT_anim_aim_debug);
  DVARFLT_anim_aim_debug_factor = Dvar_Deregister(DVARFLT_anim_aim_debug_factor);
  DVARBOOL_anim_debugSpeeds = Dvar_Deregister(DVARBOOL_anim_debugSpeeds);
  DVARBOOL_anim_disableSpeedScaledTransitions = Dvar_Deregister(DVARBOOL_anim_disableSpeedScaledTransitions);
  DVARINT_animDebug = Dvar_Deregister(DVARINT_animDebug);
  DCONST_DVARBOOL_anim_debugScrAnimatedCharController = Dvar_Deregister(DCONST_DVARBOOL_anim_debugScrAnimatedCharController);
  DVARINT_animscript_debug_legs = Dvar_Deregister(DVARINT_animscript_debug_legs);
  DVARINT_animscript_debug_torso = Dvar_Deregister(DVARINT_animscript_debug_torso);
  DCONST_DVARINT_animscript_debug_yoffset = Dvar_Deregister(DCONST_DVARINT_animscript_debug_yoffset);
  DCONST_DVARINT_animscript_debug_mode = Dvar_Deregister(DCONST_DVARINT_animscript_debug_mode);
  DCONST_DVARBOOL_animscript_debug_show_conditions = Dvar_Deregister(DCONST_DVARBOOL_animscript_debug_show_conditions);
  DVARBOOL_turretDebugYawDeltas = Dvar_Deregister(DVARBOOL_turretDebugYawDeltas);
  DCONST_DVARFLT_turretYawDeltaRange = Dvar_Deregister(DCONST_DVARFLT_turretYawDeltaRange);
  DCONST_DVARINT_animscript_debug_vehicle = Dvar_Deregister(DCONST_DVARINT_animscript_debug_vehicle);
  DCONST_DVARMPBOOL_animscript_supersprint_enable = Dvar_Deregister(DCONST_DVARMPBOOL_animscript_supersprint_enable);
  DCONST_DVARFLT_animscript_player_input_smoothing_fast = Dvar_Deregister(DCONST_DVARFLT_animscript_player_input_smoothing_fast);
  DCONST_DVARFLT_animscript_player_input_smoothing_slow = Dvar_Deregister(DCONST_DVARFLT_animscript_player_input_smoothing_slow);
  DCONST_DVARBOOL_stepBlendActive = Dvar_Deregister(DCONST_DVARBOOL_stepBlendActive);
  DCONST_DVARFLT_stepBlendSpeed = Dvar_Deregister(DCONST_DVARFLT_stepBlendSpeed);
  DCONST_DVARFLT_ladderCounterYawAngle = Dvar_Deregister(DCONST_DVARFLT_ladderCounterYawAngle);
  DCONST_DVARBOOL_weaponOcclusionAdjustEnabled = Dvar_Deregister(DCONST_DVARBOOL_weaponOcclusionAdjustEnabled);
  DCONST_DVARINT_weaponOcclusionAdjustBlendOutTime = Dvar_Deregister(DCONST_DVARINT_weaponOcclusionAdjustBlendOutTime);
  DCONST_DVARINT_weaponOcclusionAdjustBlendInTime = Dvar_Deregister(DCONST_DVARINT_weaponOcclusionAdjustBlendInTime);
  DCONST_DVARINT_bg_debugCharDobjUpdate = Dvar_Deregister(DCONST_DVARINT_bg_debugCharDobjUpdate);
  DCONST_DVARVEC3_camera_thirdPersonOffset = Dvar_Deregister(DCONST_DVARVEC3_camera_thirdPersonOffset);
  DCONST_DVARVEC3_camera_thirdPersonOffsetAds = Dvar_Deregister(DCONST_DVARVEC3_camera_thirdPersonOffsetAds);
  DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds = Dvar_Deregister(DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds);
  DCONST_DVARMPSPFLT_camera_thirdPersonFovScale = Dvar_Deregister(DCONST_DVARMPSPFLT_camera_thirdPersonFovScale);
  DCONST_DVARFLT_camera_thirdPersonAdsTransScale = Dvar_Deregister(DCONST_DVARFLT_camera_thirdPersonAdsTransScale);
  DCONST_DVARMPSPFLT_camera_thirdPersonCrosshairOffset = Dvar_Deregister(DCONST_DVARMPSPFLT_camera_thirdPersonCrosshairOffset);
  DCONST_DVARFLT_bg_radiusDamageMax = Dvar_Deregister(DCONST_DVARFLT_bg_radiusDamageMax);
  DCONST_DVARFLT_bg_aimSpreadMoveSpeedThreshold = Dvar_Deregister(DCONST_DVARFLT_bg_aimSpreadMoveSpeedThreshold);
  DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed);
  DCONST_DVARFLT_player_breath_hold_time = Dvar_Deregister(DCONST_DVARFLT_player_breath_hold_time);
  DCONST_DVARFLT_player_breath_gasp_time = Dvar_Deregister(DCONST_DVARFLT_player_breath_gasp_time);
  DCONST_DVARFLT_player_breath_fire_delay = Dvar_Deregister(DCONST_DVARFLT_player_breath_fire_delay);
  DCONST_DVARFLT_player_breath_gasp_scale = Dvar_Deregister(DCONST_DVARFLT_player_breath_gasp_scale);
  DCONST_DVARMPSPFLT_player_breath_hold_lerp = Dvar_Deregister(DCONST_DVARMPSPFLT_player_breath_hold_lerp);
  DCONST_DVARFLT_player_breath_gasp_lerp = Dvar_Deregister(DCONST_DVARFLT_player_breath_gasp_lerp);
  DCONST_DVARFLT_player_breath_max_recovery_time = Dvar_Deregister(DCONST_DVARFLT_player_breath_max_recovery_time);
  DCONST_DVARMPSPINT_player_adsExitDelayMouse = Dvar_Deregister(DCONST_DVARMPSPINT_player_adsExitDelayMouse);
  DCONST_DVARMPSPINT_player_adsExitDelayGamepad = Dvar_Deregister(DCONST_DVARMPSPINT_player_adsExitDelayGamepad);
  DCONST_DVARMPFLT_player_adsResetFraction = Dvar_Deregister(DCONST_DVARMPFLT_player_adsResetFraction);
  DCONST_DVARFLT_player_adsRecoilShotCountResetFraction = Dvar_Deregister(DCONST_DVARFLT_player_adsRecoilShotCountResetFraction);
  DCONST_DVARBOOL_player_adsAnimationStateful = Dvar_Deregister(DCONST_DVARBOOL_player_adsAnimationStateful);
  DCONST_DVARBOOL_player_scope_prototype = Dvar_Deregister(DCONST_DVARBOOL_player_scope_prototype);
  DCONST_DVARBOOL_player_scopeExitOnDamage = Dvar_Deregister(DCONST_DVARBOOL_player_scopeExitOnDamage);
  DCONST_DVARMPBOOL_bullet_penetration_enabled = Dvar_Deregister(DCONST_DVARMPBOOL_bullet_penetration_enabled);
  DCONST_DVARBOOL_bullet_ricochet_enabled = Dvar_Deregister(DCONST_DVARBOOL_bullet_ricochet_enabled);
  DCONST_DVARBOOL_player_meleeForceServerMiss = Dvar_Deregister(DCONST_DVARBOOL_player_meleeForceServerMiss);
  DCONST_DVARBOOL_bg_offhandUnderbarrelEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_offhandUnderbarrelEnabled);
  DCONST_DVARMPBOOL_missileMacross = Dvar_Deregister(DCONST_DVARMPBOOL_missileMacross);
  DCONST_DVARBOOL_viewmodelGestures = Dvar_Deregister(DCONST_DVARBOOL_viewmodelGestures);
  DVARBOOL_viewmodelGesturesResetForKillcam = Dvar_Deregister(DVARBOOL_viewmodelGesturesResetForKillcam);
  DCONST_DVARFLT_gesture_idle_akimbo_threshold = Dvar_Deregister(DCONST_DVARFLT_gesture_idle_akimbo_threshold);
  DCONST_DVARMPBOOL_gesture_use_priority_system = Dvar_Deregister(DCONST_DVARMPBOOL_gesture_use_priority_system);
  DCONST_DVARBOOL_viewmodelDemeanors = Dvar_Deregister(DCONST_DVARBOOL_viewmodelDemeanors);
  DCONST_DVARINT_demeanor_relaxed_min_time = Dvar_Deregister(DCONST_DVARINT_demeanor_relaxed_min_time);
  DCONST_DVARINT_demeanor_relaxed_max_time = Dvar_Deregister(DCONST_DVARINT_demeanor_relaxed_max_time);
  DCONST_DVARINT_demeanor_safe_min_time = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_min_time);
  DCONST_DVARINT_demeanor_safe_max_time = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_max_time);
  DCONST_DVARFLT_demeanor_safe_blend_in_factor = Dvar_Deregister(DCONST_DVARFLT_demeanor_safe_blend_in_factor);
  DCONST_DVARFLT_demeanor_relaxed_blend_in_factor = Dvar_Deregister(DCONST_DVARFLT_demeanor_relaxed_blend_in_factor);
  DCONST_DVARINT_demeanor_safe_start_time_weapon = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_start_time_weapon);
  DCONST_DVARINT_demeanor_safe_start_time_raise = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_start_time_raise);
  DCONST_DVARINT_demeanor_relaxed_start_time_weapon = Dvar_Deregister(DCONST_DVARINT_demeanor_relaxed_start_time_weapon);
  DCONST_DVARINT_demeanor_safe_start_time_gesture = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_start_time_gesture);
  DCONST_DVARINT_demeanor_relaxed_start_time_gesture = Dvar_Deregister(DCONST_DVARINT_demeanor_relaxed_start_time_gesture);
  DCONST_DVARINT_demeanor_safe_enter_delay_raise = Dvar_Deregister(DCONST_DVARINT_demeanor_safe_enter_delay_raise);
  DVARBOOL_weap_printSharedAmmo = Dvar_Deregister(DVARBOOL_weap_printSharedAmmo);
  DVARBOOL_weap_printSharedClips = Dvar_Deregister(DVARBOOL_weap_printSharedClips);
  DCONST_DVARFLT_perk_improved_gun_kick_scale = Dvar_Deregister(DCONST_DVARFLT_perk_improved_gun_kick_scale);
  DCONST_DVARMPSPINT_offhand_special_activate_time_window = Dvar_Deregister(DCONST_DVARMPSPINT_offhand_special_activate_time_window);
  DCONST_DVARFLT_offhandPullback_quickPercent = Dvar_Deregister(DCONST_DVARFLT_offhandPullback_quickPercent);
  DCONST_DVARFLT_aim_spread_lerp_time = Dvar_Deregister(DCONST_DVARFLT_aim_spread_lerp_time);
  DVARBOOL_bullet_penetration_damage = Dvar_Deregister(DVARBOOL_bullet_penetration_damage);
  DVARBOOL_bullet_penetrationHitsClients = Dvar_Deregister(DVARBOOL_bullet_penetrationHitsClients);
  DVARBOOL_bullet_penetrationActorHitsActors = Dvar_Deregister(DVARBOOL_bullet_penetrationActorHitsActors);
  DCONST_DVARBOOL_viewKickInputScalarsAffectGunKick = Dvar_Deregister(DCONST_DVARBOOL_viewKickInputScalarsAffectGunKick);
  DCONST_DVARFLT_bg_crawlMinSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_crawlMinSpeed);
  DCONST_DVARFLT_bg_crawlMaxSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_crawlMaxSpeed);
  DCONST_DVARMPFLT_bg_sprintInTimeScale = Dvar_Deregister(DCONST_DVARMPFLT_bg_sprintInTimeScale);
  DCONST_DVARMPFLT_bg_sprintLoopTimeScale = Dvar_Deregister(DCONST_DVARMPFLT_bg_sprintLoopTimeScale);
  DCONST_DVARMPFLT_bg_sprintOutTimeScale = Dvar_Deregister(DCONST_DVARMPFLT_bg_sprintOutTimeScale);
  DCONST_DVARMPBOOL_bg_allowMeleeDuringWeaponRaise = Dvar_Deregister(DCONST_DVARMPBOOL_bg_allowMeleeDuringWeaponRaise);
  DCONST_DVARFLT_bg_thirdPersonMeleeHeightOffset = Dvar_Deregister(DCONST_DVARFLT_bg_thirdPersonMeleeHeightOffset);
  DCONST_DVARINT_bg_MeleeFinisherDamage = Dvar_Deregister(DCONST_DVARINT_bg_MeleeFinisherDamage);
  DVARBOOL_bg_enable_stowed_weapons = Dvar_Deregister(DVARBOOL_bg_enable_stowed_weapons);
  DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder = Dvar_Deregister(DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder);
  DVARFLT_bg_quickWeaponSwitchSpeedScaleSP = Dvar_Deregister(DVARFLT_bg_quickWeaponSwitchSpeedScaleSP);
  DCONST_DVARFLT_bg_weaponHideGlassFrac = Dvar_Deregister(DCONST_DVARFLT_bg_weaponHideGlassFrac);
  DVARBOOL_bg_showWeaponAndAttachment = Dvar_Deregister(DVARBOOL_bg_showWeaponAndAttachment);
  DCONST_DVARBOOL_bg_debugWeaponGlass = Dvar_Deregister(DCONST_DVARBOOL_bg_debugWeaponGlass);
  DCONST_DVARBOOL_bg_showWeaponGlassHip = Dvar_Deregister(DCONST_DVARBOOL_bg_showWeaponGlassHip);
  DCONST_DVARBOOL_bg_showWeaponGlassADS = Dvar_Deregister(DCONST_DVARBOOL_bg_showWeaponGlassADS);
  DCONST_DVARBOOL_bg_scopeFadeIn = Dvar_Deregister(DCONST_DVARBOOL_bg_scopeFadeIn);
  DCONST_DVARBOOL_bg_scopeFadeOut = Dvar_Deregister(DCONST_DVARBOOL_bg_scopeFadeOut);
  DCONST_DVARBOOL_bg_debugSniperScene = Dvar_Deregister(DCONST_DVARBOOL_bg_debugSniperScene);
  DCONST_DVARBOOL_bg_showSniperScene = Dvar_Deregister(DCONST_DVARBOOL_bg_showSniperScene);
  DCONST_DVARBOOL_bg_showHipScene = Dvar_Deregister(DCONST_DVARBOOL_bg_showHipScene);
  DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale = Dvar_Deregister(DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale);
  DVARBOOL_bg_allowNVGWhileADS = Dvar_Deregister(DVARBOOL_bg_allowNVGWhileADS);
  DCONST_DVARBOOL_bg_aimSpreadDebugLog = Dvar_Deregister(DCONST_DVARBOOL_bg_aimSpreadDebugLog);
  DCONST_DVARBOOL_weaponOffsetsFullBlend = Dvar_Deregister(DCONST_DVARBOOL_weaponOffsetsFullBlend);
  DCONST_DVARFLT_weaponRecoilDecayDelay = Dvar_Deregister(DCONST_DVARFLT_weaponRecoilDecayDelay);
  DCONST_DVARFLT_bg_bulletDirScaleBaseHip = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleBaseHip);
  DCONST_DVARFLT_bg_bulletDirScaleBaseAds = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleBaseAds);
  DCONST_DVARFLT_bg_bulletDirScaleBobHip = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleBobHip);
  DCONST_DVARFLT_bg_bulletDirScaleBobAds = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleBobAds);
  DCONST_DVARFLT_bg_bulletDirScaleDamageKickHip = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleDamageKickHip);
  DCONST_DVARFLT_bg_bulletDirScaleDamageKickAds = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleDamageKickAds);
  DCONST_DVARFLT_bg_bulletDirScaleMountHip = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleMountHip);
  DCONST_DVARFLT_bg_bulletDirScaleMountAds = Dvar_Deregister(DCONST_DVARFLT_bg_bulletDirScaleMountAds);
  DCONST_DVARBOOL_bg_ballisticsEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_ballisticsEnabled);
  DCONST_DVARFLT_bg_ballisticsVelocityScalar = Dvar_Deregister(DCONST_DVARFLT_bg_ballisticsVelocityScalar);
  DCONST_DVARINT_bg_ballisticsSimTimeStepMs = Dvar_Deregister(DCONST_DVARINT_bg_ballisticsSimTimeStepMs);
  DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs = Dvar_Deregister(DCONST_DVARINT_bg_ballisticsMuzzleOffsetBlendMs);
  DCONST_DVARFLT_bg_ballisticsGravity = Dvar_Deregister(DCONST_DVARFLT_bg_ballisticsGravity);
  DCONST_DVARBOOL_bg_ballisticsCompactArrays = Dvar_Deregister(DCONST_DVARBOOL_bg_ballisticsCompactArrays);
  DCONST_DVARBOOL_bg_ballisticsSyncImpactFx = Dvar_Deregister(DCONST_DVARBOOL_bg_ballisticsSyncImpactFx);
  DCONST_DVARBOOL_bg_ballisticsDoClientImpactFx = Dvar_Deregister(DCONST_DVARBOOL_bg_ballisticsDoClientImpactFx);
  DCONST_DVARBOOL_melee_debug = Dvar_Deregister(DCONST_DVARBOOL_melee_debug);
  DCONST_DVARBOOL_melee_queueing = Dvar_Deregister(DCONST_DVARBOOL_melee_queueing);
  DCONST_DVARBOOL_melee_queueing_viewlock = Dvar_Deregister(DCONST_DVARBOOL_melee_queueing_viewlock);
  DCONST_DVARFLT_melee_mispredictBlendDuration = Dvar_Deregister(DCONST_DVARFLT_melee_mispredictBlendDuration);
  DCONST_DVARFLT_melee_mispredictBlendDurationMinimum = Dvar_Deregister(DCONST_DVARFLT_melee_mispredictBlendDurationMinimum);
  DCONST_DVARFLT_melee_pronevictim_rangescale = Dvar_Deregister(DCONST_DVARFLT_melee_pronevictim_rangescale);
  DCONST_DVARFLT_melee_pronevictim_widthscale = Dvar_Deregister(DCONST_DVARFLT_melee_pronevictim_widthscale);
  DCONST_DVARFLT_melee_pronevictim_heightscale = Dvar_Deregister(DCONST_DVARFLT_melee_pronevictim_heightscale);
  DVARBOOL_execution_enabled = Dvar_Deregister(DVARBOOL_execution_enabled);
  DVARBOOL_execution_hint_enabled = Dvar_Deregister(DVARBOOL_execution_hint_enabled);
  DVARFLT_execution_distance = Dvar_Deregister(DVARFLT_execution_distance);
  DVARFLT_execution_heightdiff = Dvar_Deregister(DVARFLT_execution_heightdiff);
  DVARFLT_execution_attacker_max_up_adjust = Dvar_Deregister(DVARFLT_execution_attacker_max_up_adjust);
  DVARFLT_execution_angle_victimback = Dvar_Deregister(DVARFLT_execution_angle_victimback);
  DVARFLT_execution_angle_attackerview = Dvar_Deregister(DVARFLT_execution_angle_attackerview);
  DVARFLT_execution_hold_duration = Dvar_Deregister(DVARFLT_execution_hold_duration);
  DVARFLT_execution_blend_duration = Dvar_Deregister(DVARFLT_execution_blend_duration);
  DVARBOOL_execution_antilag_victim = Dvar_Deregister(DVARBOOL_execution_antilag_victim);
  DVARFLT_execution_ground_trace_length_increase = Dvar_Deregister(DVARFLT_execution_ground_trace_length_increase);
  DVARFLT_execution_camera_fallback_bias = Dvar_Deregister(DVARFLT_execution_camera_fallback_bias);
  DVARBOOL_execution_shapecast_ignore_child_ents = Dvar_Deregister(DVARBOOL_execution_shapecast_ignore_child_ents);
  DVARBOOL_execution_prop_ik_enabled = Dvar_Deregister(DVARBOOL_execution_prop_ik_enabled);
  DCONST_DVARINT_execution_debug = Dvar_Deregister(DCONST_DVARINT_execution_debug);
  DCONST_DVARINT_execution_camera_override = Dvar_Deregister(DCONST_DVARINT_execution_camera_override);
  DCONST_DVARMPINT_scripted_melee_width = Dvar_Deregister(DCONST_DVARMPINT_scripted_melee_width);
  DCONST_DVARMPINT_scripted_melee_height = Dvar_Deregister(DCONST_DVARMPINT_scripted_melee_height);
  DCONST_DVARMPFLT_scripted_melee_range = Dvar_Deregister(DCONST_DVARMPFLT_scripted_melee_range);
  DCONST_DVARFLT_bg_viewAndGunKickAdsFrac = Dvar_Deregister(DCONST_DVARFLT_bg_viewAndGunKickAdsFrac);
  DCONST_DVARMPFLT_bg_bulletHitImpactSoundSpeed = Dvar_Deregister(DCONST_DVARMPFLT_bg_bulletHitImpactSoundSpeed);
  DCONST_DVARMPBOOL_bg_bulletHitImpactLagCompensation = Dvar_Deregister(DCONST_DVARMPBOOL_bg_bulletHitImpactLagCompensation);
  DCONST_DVARFLT_bg_bulletLongHitScanDistance = Dvar_Deregister(DCONST_DVARFLT_bg_bulletLongHitScanDistance);
  DCONST_DVARINT_bg_sprintReloadPredictionFixSprintRestoreDelay = Dvar_Deregister(DCONST_DVARINT_bg_sprintReloadPredictionFixSprintRestoreDelay);
  DCONST_DVARBOOL_bg_adsMomentumEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_adsMomentumEnabled);
  DCONST_DVARBOOL_advancedSwayEnabled = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayEnabled);
  DCONST_DVARBOOL_bg_disableProceduralGunMotion = Dvar_Deregister(DCONST_DVARBOOL_bg_disableProceduralGunMotion);
  DCONST_DVARINT_bg_gestureOffhandThrowProneMovementBlockTime = Dvar_Deregister(DCONST_DVARINT_bg_gestureOffhandThrowProneMovementBlockTime);
  DVARBOOL_bg_bulletsUseMaxDamageMinRange = Dvar_Deregister(DVARBOOL_bg_bulletsUseMaxDamageMinRange);
  DVARBOOL_bg_kickScalesReturn = Dvar_Deregister(DVARBOOL_bg_kickScalesReturn);
  DCONST_DVARBOOL_bg_weapons_pedantic = Dvar_Deregister(DCONST_DVARBOOL_bg_weapons_pedantic);
  DCONST_DVARBOOL_bg_crouchToProneSpreadEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_crouchToProneSpreadEnabled);
  DCONST_DVARFLT_bg_crouchToProneSpread = Dvar_Deregister(DCONST_DVARFLT_bg_crouchToProneSpread);
  DCONST_DVARFLT_bg_crouchToProneSpreadRecover = Dvar_Deregister(DCONST_DVARFLT_bg_crouchToProneSpreadRecover);
  DCONST_DVARINT_bg_crouchToProneSpreadRecoverDelay = Dvar_Deregister(DCONST_DVARINT_bg_crouchToProneSpreadRecoverDelay);
  DCONST_DVARINT_bg_directStandToProneSpreadRecoverDelay = Dvar_Deregister(DCONST_DVARINT_bg_directStandToProneSpreadRecoverDelay);
  DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring = Dvar_Deregister(DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring);
  DVARBOOL_bg_debugUnintendedFireIssue = Dvar_Deregister(DVARBOOL_bg_debugUnintendedFireIssue);
  DCONST_DVARFLT_bg_kickIntegrationFudgeFactor = Dvar_Deregister(DCONST_DVARFLT_bg_kickIntegrationFudgeFactor);
  DCONST_DVARFLT_bg_visionsetADSFraction = Dvar_Deregister(DCONST_DVARFLT_bg_visionsetADSFraction);
  DVARBOOL_bg_scopedNVGSyncAdsFraction = Dvar_Deregister(DVARBOOL_bg_scopedNVGSyncAdsFraction);
  DVARBOOL_bg_hybridScopeCheckAllAttachmentsForVisionSet = Dvar_Deregister(DVARBOOL_bg_hybridScopeCheckAllAttachmentsForVisionSet);
  DCONST_DVARINT_bg_weapon_inspect_cancel_fire_delay_ms = Dvar_Deregister(DCONST_DVARINT_bg_weapon_inspect_cancel_fire_delay_ms);
  DCONST_DVARFLT_bg_weapon_inspect_dof_coc_diameter_mm = Dvar_Deregister(DCONST_DVARFLT_bg_weapon_inspect_dof_coc_diameter_mm);
  DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min = Dvar_Deregister(DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min);
  DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max = Dvar_Deregister(DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max);
  DCONST_DVARFLT_bg_weapon_inspect_dof_width = Dvar_Deregister(DCONST_DVARFLT_bg_weapon_inspect_dof_width);
  DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms = Dvar_Deregister(DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms);
  DCONST_DVARBOOL_bg_weapon_inspect_queueing_enabled = Dvar_Deregister(DCONST_DVARBOOL_bg_weapon_inspect_queueing_enabled);
  DCONST_DVARBOOL_bg_weapon_inspect_prone_retrigger_animevent_enabled = Dvar_Deregister(DCONST_DVARBOOL_bg_weapon_inspect_prone_retrigger_animevent_enabled);
  DCONST_DVARMPFLT_jump_height = Dvar_Deregister(DCONST_DVARMPFLT_jump_height);
  DCONST_DVARFLT_jump_stepSize = Dvar_Deregister(DCONST_DVARFLT_jump_stepSize);
  DCONST_DVARFLT_jump_spreadAdd = Dvar_Deregister(DCONST_DVARFLT_jump_spreadAdd);
  DCONST_DVARINT_jump_lateJumpGraceMs = Dvar_Deregister(DCONST_DVARINT_jump_lateJumpGraceMs);
  DCONST_DVARINT_jump_lateJumpMinMantleFallDelta = Dvar_Deregister(DCONST_DVARINT_jump_lateJumpMinMantleFallDelta);
  DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable = Dvar_Deregister(DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable);
  DCONST_DVARINT_jump_subsequentSlowdownTime = Dvar_Deregister(DCONST_DVARINT_jump_subsequentSlowdownTime);
  DCONST_DVARFLT_jump_subsequentJumpScale = Dvar_Deregister(DCONST_DVARFLT_jump_subsequentJumpScale);
  DCONST_DVARFLT_jump_subsequentMinScale = Dvar_Deregister(DCONST_DVARFLT_jump_subsequentMinScale);
  DCONST_DVARMPBOOL_jump_slowdownEnable = Dvar_Deregister(DCONST_DVARMPBOOL_jump_slowdownEnable);
  DCONST_DVARINT_jump_landSlowDownTime = Dvar_Deregister(DCONST_DVARINT_jump_landSlowDownTime);
  DCONST_DVARFLT_jump_landSlowDownVelocity = Dvar_Deregister(DCONST_DVARFLT_jump_landSlowDownVelocity);
  DCONST_DVARINT_jump_landHigherSlowDownTime = Dvar_Deregister(DCONST_DVARINT_jump_landHigherSlowDownTime);
  DCONST_DVARFLT_jump_landHigherSlowDownVelocity = Dvar_Deregister(DCONST_DVARFLT_jump_landHigherSlowDownVelocity);
  DCONST_DVARFLT_jump_landSlowDownFriction = Dvar_Deregister(DCONST_DVARFLT_jump_landSlowDownFriction);
  DCONST_DVARFLT_jump_landSlowDownLandJumpFactor = Dvar_Deregister(DCONST_DVARFLT_jump_landSlowDownLandJumpFactor);
  DCONST_DVARMPSPINT_slide_hold_change_stance_time_ms = Dvar_Deregister(DCONST_DVARMPSPINT_slide_hold_change_stance_time_ms);
  DCONST_DVARMPSPINT_slide_hold_change_stance_time_air_ms = Dvar_Deregister(DCONST_DVARMPSPINT_slide_hold_change_stance_time_air_ms);
  DCONST_DVARINT_slide_allow_prone_min_slide_ms = Dvar_Deregister(DCONST_DVARINT_slide_allow_prone_min_slide_ms);
  DCONST_DVARINT_slide_min_sprint_time_ms = Dvar_Deregister(DCONST_DVARINT_slide_min_sprint_time_ms);
  DCONST_DVARFLT_slide_min_required_velocity = Dvar_Deregister(DCONST_DVARFLT_slide_min_required_velocity);
  DCONST_DVARBOOL_slide_enable = Dvar_Deregister(DCONST_DVARBOOL_slide_enable);
  DCONST_DVARFLT_slide_perk_fastslide_scale = Dvar_Deregister(DCONST_DVARFLT_slide_perk_fastslide_scale);
  DCONST_DVARBOOL_slide_use_sprint_meter = Dvar_Deregister(DCONST_DVARBOOL_slide_use_sprint_meter);
  DCONST_DVARINT_slide_lateJumpGraceMs = Dvar_Deregister(DCONST_DVARINT_slide_lateJumpGraceMs);
  DCONST_DVARINT_slide_cameraAlignmentEaseMode = Dvar_Deregister(DCONST_DVARINT_slide_cameraAlignmentEaseMode);
  DCONST_DVARINT_slide_cameraRotateTimeMs = Dvar_Deregister(DCONST_DVARINT_slide_cameraRotateTimeMs);
  DCONST_DVARFLT_slide_cameraPitchOffset = Dvar_Deregister(DCONST_DVARFLT_slide_cameraPitchOffset);
  DCONST_DVARINT_slide_view_bounceAnglesPeriod = Dvar_Deregister(DCONST_DVARINT_slide_view_bounceAnglesPeriod);
  DCONST_DVARVEC3_slide_view_bounceAngles = Dvar_Deregister(DCONST_DVARVEC3_slide_view_bounceAngles);
  DCONST_DVARVEC3_slide_view_angles = Dvar_Deregister(DCONST_DVARVEC3_slide_view_angles);
  DCONST_DVARINT_slide_view_anglesEaseInTime = Dvar_Deregister(DCONST_DVARINT_slide_view_anglesEaseInTime);
  DCONST_DVARFLT_slide_frictionScale = Dvar_Deregister(DCONST_DVARFLT_slide_frictionScale);
  DCONST_DVARFLT_slide_to_sprint_stick_ratio = Dvar_Deregister(DCONST_DVARFLT_slide_to_sprint_stick_ratio);
  DCONST_DVARMPSPINT_slide_subsequentSlideTime = Dvar_Deregister(DCONST_DVARMPSPINT_slide_subsequentSlideTime);
  DCONST_DVARFLT_slide_subsequentSlideScale = Dvar_Deregister(DCONST_DVARFLT_slide_subsequentSlideScale);
  DCONST_DVARFLT_slide_min_continue_velocity = Dvar_Deregister(DCONST_DVARFLT_slide_min_continue_velocity);
  DCONST_DVARBOOL_slide_enable_tweak_left_right = Dvar_Deregister(DCONST_DVARBOOL_slide_enable_tweak_left_right);
  DCONST_DVARINT_slide_deadzoneTweak = Dvar_Deregister(DCONST_DVARINT_slide_deadzoneTweak);
  DCONST_DVARINT_slide_delayTime = Dvar_Deregister(DCONST_DVARINT_slide_delayTime);
  DCONST_DVARFLT_slide_min_required_airVelocity = Dvar_Deregister(DCONST_DVARFLT_slide_min_required_airVelocity);
  DCONST_DVARFLT_slide_required_airAngle = Dvar_Deregister(DCONST_DVARFLT_slide_required_airAngle);
  DCONST_DVARFLT_slide_angle = Dvar_Deregister(DCONST_DVARFLT_slide_angle);
  DCONST_DVARINT_slide_outSpeedScaleTimeMs = Dvar_Deregister(DCONST_DVARINT_slide_outSpeedScaleTimeMs);
  DCONST_DVARFLT_slide_outSpeedScale = Dvar_Deregister(DCONST_DVARFLT_slide_outSpeedScale);
  DCONST_DVARINT_slide_outFrictionScaleTimeMs = Dvar_Deregister(DCONST_DVARINT_slide_outFrictionScaleTimeMs);
  DCONST_DVARFLT_slide_outFrictionScale = Dvar_Deregister(DCONST_DVARFLT_slide_outFrictionScale);
  DCONST_DVARFLT_slide_maxHeightFromGround = Dvar_Deregister(DCONST_DVARFLT_slide_maxHeightFromGround);
  DCONST_DVARBOOL_slide_debug = Dvar_Deregister(DCONST_DVARBOOL_slide_debug);
  DCONST_DVARMPSPINT_slide_player_trace_offset = Dvar_Deregister(DCONST_DVARMPSPINT_slide_player_trace_offset);
  DCONST_DVARFLT_slide_clearance_check_radius = Dvar_Deregister(DCONST_DVARFLT_slide_clearance_check_radius);
  DCONST_DVARFLT_slide_under_geo_trace_dist = Dvar_Deregister(DCONST_DVARFLT_slide_under_geo_trace_dist);
  DCONST_DVARFLT_slide_under_geo_trace_radius = Dvar_Deregister(DCONST_DVARFLT_slide_under_geo_trace_radius);
  DCONST_DVARFLT_slide_clearance_check_dist = Dvar_Deregister(DCONST_DVARFLT_slide_clearance_check_dist);
  DCONST_DVARINT_slide_friction_duration_ms = Dvar_Deregister(DCONST_DVARINT_slide_friction_duration_ms);
  DCONST_DVARFLT_slide_to_sprint_friction_time_scale = Dvar_Deregister(DCONST_DVARFLT_slide_to_sprint_friction_time_scale);
  DCONST_DVARINT_slide_viewInterpType = Dvar_Deregister(DCONST_DVARINT_slide_viewInterpType);
  DCONST_DVARBOOL_slide_gestureInStateBlocksFiring = Dvar_Deregister(DCONST_DVARBOOL_slide_gestureInStateBlocksFiring);
  DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs = Dvar_Deregister(DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs);
  DCONST_DVARBOOL_skydive_debug = Dvar_Deregister(DCONST_DVARBOOL_skydive_debug);
  DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch);
  DCONST_DVARFLT_skydive_pendulum_damping_constant_bank = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_damping_constant_bank);
  DCONST_DVARFLT_skydive_pendulum_length = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_length);
  DCONST_DVARFLT_skydive_pendulum_gravity = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_gravity);
  DCONST_DVARFLT_skydive_pendulum_mass = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_mass);
  DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch);
  DCONST_DVARFLT_skydive_pendulum_stick_torque_bank = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_stick_torque_bank);
  DCONST_DVARFLT_skydive_pendulum_max_bank_normalized = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_max_bank_normalized);
  DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized);
  DCONST_DVARFLT_skydive_pendulum_max_bank_angle = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_max_bank_angle);
  DCONST_DVARFLT_skydive_pendulum_max_pitch_angle = Dvar_Deregister(DCONST_DVARFLT_skydive_pendulum_max_pitch_angle);
  DCONST_DVARFLT_skydive_anim_param_polar_lerp_speed = Dvar_Deregister(DCONST_DVARFLT_skydive_anim_param_polar_lerp_speed);
  DCONST_DVARFLT_skydive_fast_land_speed = Dvar_Deregister(DCONST_DVARFLT_skydive_fast_land_speed);
  DCONST_DVARFLT_skydive_slow_land_speed = Dvar_Deregister(DCONST_DVARFLT_skydive_slow_land_speed);
  DCONST_DVARFLT_skydive_hard_land_speed = Dvar_Deregister(DCONST_DVARFLT_skydive_hard_land_speed);
  DCONST_DVARFLT_skydive_prep_for_landing_height = Dvar_Deregister(DCONST_DVARFLT_skydive_prep_for_landing_height);
  DCONST_DVARBOOL_skydive_enable_legs_freefall = Dvar_Deregister(DCONST_DVARBOOL_skydive_enable_legs_freefall);
  DVARBOOL_skydive_enable_legs_parachute = Dvar_Deregister(DVARBOOL_skydive_enable_legs_parachute);
  DCONST_DVARFLT_skydive_base_jump_trace_angle_max = Dvar_Deregister(DCONST_DVARFLT_skydive_base_jump_trace_angle_max);
  DCONST_DVARFLT_skydive_base_jump_trace_speed_max = Dvar_Deregister(DCONST_DVARFLT_skydive_base_jump_trace_speed_max);
  DCONST_DVARFLT_skydive_base_jump_trace_clearance_sphere_radius = Dvar_Deregister(DCONST_DVARFLT_skydive_base_jump_trace_clearance_sphere_radius);
  DCONST_DVARINT_skydive_cut_parachute_anim_time = Dvar_Deregister(DCONST_DVARINT_skydive_cut_parachute_anim_time);
  DVARBOOL_skydive_can_collide_building = Dvar_Deregister(DVARBOOL_skydive_can_collide_building);
  DVARFLT_skydive_weapon_raise_height = Dvar_Deregister(DVARFLT_skydive_weapon_raise_height);
  DVARBOOL_skydive_always_weapon_raise = Dvar_Deregister(DVARBOOL_skydive_always_weapon_raise);
  DVARFLT_skydive_freefall_velocity = Dvar_Deregister(DVARFLT_skydive_freefall_velocity);
  DCONST_DVARFLT_skydive_min_deploy_altitude = Dvar_Deregister(DCONST_DVARFLT_skydive_min_deploy_altitude);
  DVARBOOL_skydive_enable_faulty_base_jump_fix = Dvar_Deregister(DVARBOOL_skydive_enable_faulty_base_jump_fix);
  DVARFLT_skydive_ground_sweep_sphere_radius = Dvar_Deregister(DVARFLT_skydive_ground_sweep_sphere_radius);
  DVARFLT_skydive_ground_sweep_length = Dvar_Deregister(DVARFLT_skydive_ground_sweep_length);
  DVARBOOL_skydive_enable_drag_acceleration_fix = Dvar_Deregister(DVARBOOL_skydive_enable_drag_acceleration_fix);
  DCONST_DVARBOOL_skydive_log_pmove = Dvar_Deregister(DCONST_DVARBOOL_skydive_log_pmove);
  DCONST_DVARBOOL_skydive_log_pmove_initialcalls = Dvar_Deregister(DCONST_DVARBOOL_skydive_log_pmove_initialcalls);
  DCONST_DVARFLT_sprintleap_check_dist = Dvar_Deregister(DCONST_DVARFLT_sprintleap_check_dist);
  DCONST_DVARFLT_sprintLeap_traceForwardIncrament = Dvar_Deregister(DCONST_DVARFLT_sprintLeap_traceForwardIncrament);
  DCONST_DVARFLT_sprintLeap_traceForwardMax = Dvar_Deregister(DCONST_DVARFLT_sprintLeap_traceForwardMax);
  DCONST_DVARFLT_sprintLeap_groundTraceDist = Dvar_Deregister(DCONST_DVARFLT_sprintLeap_groundTraceDist);
  DCONST_DVARBOOL_sprintLeap_enabled = Dvar_Deregister(DCONST_DVARBOOL_sprintLeap_enabled);
  DCONST_DVARMPFLT_sprintLeap_height = Dvar_Deregister(DCONST_DVARMPFLT_sprintLeap_height);
  DCONST_DVARMPFLT_sprintLeap_forwardVelocityScale = Dvar_Deregister(DCONST_DVARMPFLT_sprintLeap_forwardVelocityScale);
  DCONST_DVARMPINT_sprintLeap_minSprintTimeMs = Dvar_Deregister(DCONST_DVARMPINT_sprintLeap_minSprintTimeMs);
  DCONST_DVARBOOL_sprintLeap_useWeaponAnim = Dvar_Deregister(DCONST_DVARBOOL_sprintLeap_useWeaponAnim);
  DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold = Dvar_Deregister(DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold);
  DCONST_DVARMPBOOL_mount_enable = Dvar_Deregister(DCONST_DVARMPBOOL_mount_enable);
  DCONST_DVARINT_mount_viewclamp_accel_duration_ms = Dvar_Deregister(DCONST_DVARINT_mount_viewclamp_accel_duration_ms);
  DCONST_DVARINT_mount_viewclamp_decel_duration_ms = Dvar_Deregister(DCONST_DVARINT_mount_viewclamp_decel_duration_ms);
  DCONST_DVARFLT_mount_effect_top_shake_amp = Dvar_Deregister(DCONST_DVARFLT_mount_effect_top_shake_amp);
  DCONST_DVARFLT_mount_effect_side_shake_amp = Dvar_Deregister(DCONST_DVARFLT_mount_effect_side_shake_amp);
  DCONST_DVARINT_mount_enter_settle_time_ms = Dvar_Deregister(DCONST_DVARINT_mount_enter_settle_time_ms);
  DCONST_DVARMPBOOL_mount_transition_enable = Dvar_Deregister(DCONST_DVARMPBOOL_mount_transition_enable);
  DCONST_DVARFLT_mount_transition_back_angle_deg = Dvar_Deregister(DCONST_DVARFLT_mount_transition_back_angle_deg);
  DCONST_DVARFLT_mount_transition_hysteresis_angle_deg = Dvar_Deregister(DCONST_DVARFLT_mount_transition_hysteresis_angle_deg);
  DCONST_DVARINT_mount_transition_time_ms = Dvar_Deregister(DCONST_DVARINT_mount_transition_time_ms);
  DCONST_DVARMPFLT_mount_ai_top_victim_accuracy = Dvar_Deregister(DCONST_DVARMPFLT_mount_ai_top_victim_accuracy);
  DCONST_DVARMPFLT_mount_ai_side_victim_accuracy = Dvar_Deregister(DCONST_DVARMPFLT_mount_ai_side_victim_accuracy);
  DCONST_DVARMPBOOL_mount_enable_top = Dvar_Deregister(DCONST_DVARMPBOOL_mount_enable_top);
  DCONST_DVARMPFLT_mount_top_enter_pitch_delta = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_enter_pitch_delta);
  DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate = Dvar_Deregister(DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate);
  DCONST_DVARFLT_mount_top_enter_up_delta = Dvar_Deregister(DCONST_DVARFLT_mount_top_enter_up_delta);
  DCONST_DVARFLT_mount_top_pitch_overpitch_clamp = Dvar_Deregister(DCONST_DVARFLT_mount_top_pitch_overpitch_clamp);
  DCONST_DVARFLT_mount_top_pitch_soft_clamp_angle = Dvar_Deregister(DCONST_DVARFLT_mount_top_pitch_soft_clamp_angle);
  DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle = Dvar_Deregister(DCONST_DVARFLT_mount_top_yaw_soft_clamp_angle);
  DCONST_DVARMPFLT_mount_top_max_height = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_max_height);
  DCONST_DVARFLT_mount_top_max_yaw = Dvar_Deregister(DCONST_DVARFLT_mount_top_max_yaw);
  DCONST_DVARMPFLT_mount_top_clamp_pitch_up = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_clamp_pitch_up);
  DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_clamp_pitch_up_soft);
  DCONST_DVARFLT_mount_transition_edge_max_angle = Dvar_Deregister(DCONST_DVARFLT_mount_transition_edge_max_angle);
  DCONST_DVARMPFLT_mount_side_max_pitch = Dvar_Deregister(DCONST_DVARMPFLT_mount_side_max_pitch);
  DCONST_DVARMPFLT_mount_side_clamp_pitch = Dvar_Deregister(DCONST_DVARMPFLT_mount_side_clamp_pitch);
  DCONST_DVARMPFLT_mount_side_clamp_pitch_soft = Dvar_Deregister(DCONST_DVARMPFLT_mount_side_clamp_pitch_soft);
  DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle = Dvar_Deregister(DCONST_DVARFLT_mount_side_yaw_soft_clamp_inside_angle);
  DCONST_DVARFLT_mount_side_yaw_soft_clamp_outside_angle = Dvar_Deregister(DCONST_DVARFLT_mount_side_yaw_soft_clamp_outside_angle);
  DCONST_DVARFLT_mount_side_view_roll = Dvar_Deregister(DCONST_DVARFLT_mount_side_view_roll);
  DCONST_DVARFLT_mount_side_transition_max_thickness = Dvar_Deregister(DCONST_DVARFLT_mount_side_transition_max_thickness);
  DCONST_DVARMPFLT_mount_side_min_height = Dvar_Deregister(DCONST_DVARMPFLT_mount_side_min_height);
  DCONST_DVARMPFLT_mount_side_max_height = Dvar_Deregister(DCONST_DVARMPFLT_mount_side_max_height);
  DCONST_DVARFLT_mount_side_max_viewangle_adjust = Dvar_Deregister(DCONST_DVARFLT_mount_side_max_viewangle_adjust);
  DCONST_DVARBOOL_mount_controls_project_input_desires = Dvar_Deregister(DCONST_DVARBOOL_mount_controls_project_input_desires);
  DCONST_DVARINT_mount_controls_mount_button_leniency_ms = Dvar_Deregister(DCONST_DVARINT_mount_controls_mount_button_leniency_ms);
  DCONST_DVARINT_mount_controls_cooldown_duration = Dvar_Deregister(DCONST_DVARINT_mount_controls_cooldown_duration);
  DCONST_DVARBOOL_mount_pull_away_enabled = Dvar_Deregister(DCONST_DVARBOOL_mount_pull_away_enabled);
  DCONST_DVARBOOL_mount_pullforward_enabled = Dvar_Deregister(DCONST_DVARBOOL_mount_pullforward_enabled);
  DCONST_DVARINT_mount_pullback_time_ms = Dvar_Deregister(DCONST_DVARINT_mount_pullback_time_ms);
  DCONST_DVARFLT_mount_pullback_forward_move_fraction = Dvar_Deregister(DCONST_DVARFLT_mount_pullback_forward_move_fraction);
  DCONST_DVARINT_mount_pullside_top_time_ms = Dvar_Deregister(DCONST_DVARINT_mount_pullside_top_time_ms);
  DCONST_DVARINT_mount_pullside_side_time_ms = Dvar_Deregister(DCONST_DVARINT_mount_pullside_side_time_ms);
  DCONST_DVARFLT_mount_pullside_side_move_fraction = Dvar_Deregister(DCONST_DVARFLT_mount_pullside_side_move_fraction);
  DCONST_DVARBOOL_mount_pullside_into_cover_enabled = Dvar_Deregister(DCONST_DVARBOOL_mount_pullside_into_cover_enabled);
  DCONST_DVARBOOL_mount_aim_lockon = Dvar_Deregister(DCONST_DVARBOOL_mount_aim_lockon);
  DCONST_DVARFLT_mount_aim_lockon_region_width = Dvar_Deregister(DCONST_DVARFLT_mount_aim_lockon_region_width);
  DCONST_DVARFLT_mount_aim_lockon_region_height = Dvar_Deregister(DCONST_DVARFLT_mount_aim_lockon_region_height);
  DCONST_DVARFLT_mount_aim_lockon_range = Dvar_Deregister(DCONST_DVARFLT_mount_aim_lockon_range);
  DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge = Dvar_Deregister(DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge);
  DCONST_DVARBOOL_mount_aim_debug = Dvar_Deregister(DCONST_DVARBOOL_mount_aim_debug);
  DCONST_DVARFLT_mount_indicator_size = Dvar_Deregister(DCONST_DVARFLT_mount_indicator_size);
  DCONST_DVARMPBOOL_mount_indicator_inworld = Dvar_Deregister(DCONST_DVARMPBOOL_mount_indicator_inworld);
  DCONST_DVARFLT_mount_indicator_inworld_fadein_dist_frac = Dvar_Deregister(DCONST_DVARFLT_mount_indicator_inworld_fadein_dist_frac);
  DCONST_DVARFLT_mount_indicator_raylength = Dvar_Deregister(DCONST_DVARFLT_mount_indicator_raylength);
  DCONST_DVARFLT_mount_indicator_sphereradius = Dvar_Deregister(DCONST_DVARFLT_mount_indicator_sphereradius);
  DCONST_DVARFLT_mount_indicator_alphascale = Dvar_Deregister(DCONST_DVARFLT_mount_indicator_alphascale);
  DCONST_DVARBOOL_mount_indicator_debug = Dvar_Deregister(DCONST_DVARBOOL_mount_indicator_debug);
  DCONST_DVARMPBOOL_mount_anim_sync_out = Dvar_Deregister(DCONST_DVARMPBOOL_mount_anim_sync_out);
  DCONST_DVARBOOL_mount_draw_legs = Dvar_Deregister(DCONST_DVARBOOL_mount_draw_legs);
  DCONST_DVARFLT_mount_wm_pivot_height_crouch_threshold = Dvar_Deregister(DCONST_DVARFLT_mount_wm_pivot_height_crouch_threshold);
  DCONST_DVARFLT_mount_bob_rate = Dvar_Deregister(DCONST_DVARFLT_mount_bob_rate);
  DCONST_DVARFLT_mount_bob_max_speed = Dvar_Deregister(DCONST_DVARFLT_mount_bob_max_speed);
  DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_stand);
  DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_ideal_height_offset_crouch);
  DCONST_DVARFLT_mount_tuning_query_halfwidth_near = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_halfwidth_near);
  DCONST_DVARFLT_mount_tuning_query_halfheight_near = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_halfheight_near);
  DCONST_DVARFLT_mount_tuning_query_halfwidth_far = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_halfwidth_far);
  DCONST_DVARFLT_mount_tuning_query_halfheight_far = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_halfheight_far);
  DCONST_DVARFLT_mount_tuning_query_bias_centerline = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_bias_centerline);
  DCONST_DVARFLT_mount_tuning_query_bias_up = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_bias_up);
  DCONST_DVARBOOL_mount_tuning_query_draw_results = Dvar_Deregister(DCONST_DVARBOOL_mount_tuning_query_draw_results);
  DCONST_DVARFLT_mount_tuning_raycast_behind_edge = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_raycast_behind_edge);
  DCONST_DVARFLT_mount_tuning_raycast_beyond_edge = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_raycast_beyond_edge);
  DCONST_DVARFLT_mount_tuning_raycast_above_edge = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_raycast_above_edge);
  DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height = Dvar_Deregister(DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_additional_height);
  DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance = Dvar_Deregister(DCONST_DVARMPFLT_mount_tuning_shapecast_cylinder_ground_clearance);
  DCONST_DVARFLT_mount_tuning_shapecast_validity_grace_angle_deg = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_shapecast_validity_grace_angle_deg);
  DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_angle_deg);
  DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_shapecast_clamp_sweep_epsilon_deg);
  DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_shapecast_min_top_yaw);
  DCONST_DVARFLT_mount_tuning_znear = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_znear);
  DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_camera_min_dist_to_clip);
  DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_camera_min_dist_to_mountbrush);
  DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_side_switch_min_dot_improvement);
  DCONST_DVARFLT_mount_tuning_max_wall_slope = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_max_wall_slope);
  DCONST_DVARINT_mount_tuning_viewheight_lerp_out_bias_ms = Dvar_Deregister(DCONST_DVARINT_mount_tuning_viewheight_lerp_out_bias_ms);
  DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope = Dvar_Deregister(DCONST_DVARMPFLT_mount_tuning_top_mount_max_slope);
  DCONST_DVARFLT_mount_tuning_top_mount_near_face_min_slope = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_top_mount_near_face_min_slope);
  DCONST_DVARFLT_mount_tuning_side_mount_min_slope = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_side_mount_min_slope);
  DCONST_DVARFLT_mount_tuning_top_strafe_dismount_distance = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_top_strafe_dismount_distance);
  DCONST_DVARFLT_mount_tuning_point_inside_capsule_max = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_point_inside_capsule_max);
  DCONST_DVARFLT_mount_tuning_ai_top_victim_eye_height = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_ai_top_victim_eye_height);
  DCONST_DVARINT_mount_tuning_visibility_query_mode = Dvar_Deregister(DCONST_DVARINT_mount_tuning_visibility_query_mode);
  DCONST_DVARFLT_mount_tuning_visibility_query_min_distance = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_visibility_query_min_distance);
  DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces = Dvar_Deregister(DCONST_DVARMPBOOL_mount_tuning_visibility_query_lateral_traces);
  DVARBOOL_mount_tuning_shapecast_ignore_children = Dvar_Deregister(DVARBOOL_mount_tuning_shapecast_ignore_children);
  DCONST_DVARBOOL_mount_cancels_slide_enabled = Dvar_Deregister(DCONST_DVARBOOL_mount_cancels_slide_enabled);
  DCONST_DVARBOOL_mount_edge_fallback_debug_enable = Dvar_Deregister(DCONST_DVARBOOL_mount_edge_fallback_debug_enable);
  DCONST_DVARVEC3_mount_edge_fallback_pivot_offset = Dvar_Deregister(DCONST_DVARVEC3_mount_edge_fallback_pivot_offset);
  DCONST_DVARINT_mount_debug = Dvar_Deregister(DCONST_DVARINT_mount_debug);
  DVARBOOL_mount_bb_analytics = Dvar_Deregister(DVARBOOL_mount_bb_analytics);
  DCONST_DVARINT_edge_debugDrawFlag = Dvar_Deregister(DCONST_DVARINT_edge_debugDrawFlag);
  DCONST_DVARINT_edge_debugDraw = Dvar_Deregister(DCONST_DVARINT_edge_debugDraw);
  DCONST_DVARBOOL_edge_debugDrawDistanceColor = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawDistanceColor);
  DCONST_DVARBOOL_edge_debugDrawOrientation = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawOrientation);
  DCONST_DVARBOOL_edge_debugDrawDepthTest = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawDepthTest);
  DCONST_DVARBOOL_edge_debugDrawQueryShowPoints = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawQueryShowPoints);
  DCONST_DVARFLT_edge_debugDrawQueryDistance = Dvar_Deregister(DCONST_DVARFLT_edge_debugDrawQueryDistance);
  DCONST_DVARBOOL_edge_debugDraw_adjacency = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDraw_adjacency);
  DCONST_DVARINT_edge_debugDrawBucket_octree = Dvar_Deregister(DCONST_DVARINT_edge_debugDrawBucket_octree);
  DCONST_DVARBOOL_edge_debugDraw_octree = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDraw_octree);
  DCONST_DVARBOOL_edge_debugDrawIndex_octree = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawIndex_octree);
  DCONST_DVARBOOL_edge_debugDrawDepthTest_octree = Dvar_Deregister(DCONST_DVARBOOL_edge_debugDrawDepthTest_octree);
  DCONST_DVARBOOL_edge_debugEdgeListInfo = Dvar_Deregister(DCONST_DVARBOOL_edge_debugEdgeListInfo);
  DCONST_DVARBOOL_edge_debugEdgeListWorld = Dvar_Deregister(DCONST_DVARBOOL_edge_debugEdgeListWorld);
  DCONST_DVARBOOL_edge_includeDynamicEdges = Dvar_Deregister(DCONST_DVARBOOL_edge_includeDynamicEdges);
  DCONST_DVARMPFLT_mantle_check_height = Dvar_Deregister(DCONST_DVARMPFLT_mantle_check_height);
  DCONST_DVARMPFLT_mantle_check_height_air = Dvar_Deregister(DCONST_DVARMPFLT_mantle_check_height_air);
  DCONST_DVARMPFLT_mantle_check_height_side_back = Dvar_Deregister(DCONST_DVARMPFLT_mantle_check_height_side_back);
  DCONST_DVARMPFLT_mantle_check_height_side_back_air = Dvar_Deregister(DCONST_DVARMPFLT_mantle_check_height_side_back_air);
  DCONST_DVARFLT_mantle_check_height_br = Dvar_Deregister(DCONST_DVARFLT_mantle_check_height_br);
  DCONST_DVARFLT_mantle_check_height_air_br = Dvar_Deregister(DCONST_DVARFLT_mantle_check_height_air_br);
  DCONST_DVARFLT_mantle_check_height_side_back_br = Dvar_Deregister(DCONST_DVARFLT_mantle_check_height_side_back_br);
  DCONST_DVARFLT_mantle_check_height_side_back_air_br = Dvar_Deregister(DCONST_DVARFLT_mantle_check_height_side_back_air_br);
  DCONST_DVARFLT_mantle_check_range = Dvar_Deregister(DCONST_DVARFLT_mantle_check_range);
  DCONST_DVARFLT_mantle_check_range_air = Dvar_Deregister(DCONST_DVARFLT_mantle_check_range_air);
  DCONST_DVARFLT_mantle_check_range_side_back = Dvar_Deregister(DCONST_DVARFLT_mantle_check_range_side_back);
  DCONST_DVARFLT_mantle_check_range_side_back_air = Dvar_Deregister(DCONST_DVARFLT_mantle_check_range_side_back_air);
  DCONST_DVARFLT_mantle_check_radius = Dvar_Deregister(DCONST_DVARFLT_mantle_check_radius);
  DCONST_DVARFLT_mantle_check_angle = Dvar_Deregister(DCONST_DVARFLT_mantle_check_angle);
  DCONST_DVARFLT_mantle_check_dot_vertical = Dvar_Deregister(DCONST_DVARFLT_mantle_check_dot_vertical);
  DCONST_DVARFLT_mantle_view_yawcap = Dvar_Deregister(DCONST_DVARFLT_mantle_view_yawcap);
  DCONST_DVARFLT_mantle_max_vertical_end_velocity = Dvar_Deregister(DCONST_DVARFLT_mantle_max_vertical_end_velocity);
  DCONST_DVARINT_mantle_max_time = Dvar_Deregister(DCONST_DVARINT_mantle_max_time);
  DCONST_DVARFLT_mantle_over_height_offset = Dvar_Deregister(DCONST_DVARFLT_mantle_over_height_offset);
  DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height = Dvar_Deregister(DCONST_DVARMPFLT_mantle_over_forward_trace_capsule_height);
  DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_force_over_always_use_crouch_view_height);
  DCONST_DVARFLT_mantle_end_height_tolerance = Dvar_Deregister(DCONST_DVARFLT_mantle_end_height_tolerance);
  DCONST_DVARINT_mantle_pitch_default_return_time_over = Dvar_Deregister(DCONST_DVARINT_mantle_pitch_default_return_time_over);
  DCONST_DVARINT_mantle_pitch_default_return_time_on = Dvar_Deregister(DCONST_DVARINT_mantle_pitch_default_return_time_on);
  DCONST_DVARINT_mantle_pitch_return_lerp_time = Dvar_Deregister(DCONST_DVARINT_mantle_pitch_return_lerp_time);
  DCONST_DVARFLT_mantle_min_over_dist = Dvar_Deregister(DCONST_DVARFLT_mantle_min_over_dist);
  DCONST_DVARFLT_mantle_max_over_dist = Dvar_Deregister(DCONST_DVARFLT_mantle_max_over_dist);
  DCONST_DVARFLT_mantle_ladder_over_dist = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_over_dist);
  DCONST_DVARFLT_mantle_ladder_down_dist = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_down_dist);
  DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset = Dvar_Deregister(DCONST_DVARMPFLT_mantle_edge_search_near_plane_offset);
  DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin = Dvar_Deregister(DCONST_DVARFLT_mantle_edge_search_min_height_above_search_origin);
  DCONST_DVARFLT_mantle_ladder_edge_search_near_plane_offset = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_edge_search_near_plane_offset);
  DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_edge_search_min_height_above_search_origin);
  DCONST_DVARFLT_mantle_vmanim_blendin = Dvar_Deregister(DCONST_DVARFLT_mantle_vmanim_blendin);
  DCONST_DVARFLT_mantle_vmanim_blendout = Dvar_Deregister(DCONST_DVARFLT_mantle_vmanim_blendout);
  DCONST_DVARMPBOOL_mantle_enable = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_enable);
  DCONST_DVARMPBOOL_mantle_enableDirectionAssist = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_enableDirectionAssist);
  DCONST_DVARBOOL_mantle_everything = Dvar_Deregister(DCONST_DVARBOOL_mantle_everything);
  DCONST_DVARBOOL_mantle_requires_stick = Dvar_Deregister(DCONST_DVARBOOL_mantle_requires_stick);
  DCONST_DVARBOOL_mantle_use_approach_angle = Dvar_Deregister(DCONST_DVARBOOL_mantle_use_approach_angle);
  DCONST_DVARINT_mantle_required_stick_magnitude = Dvar_Deregister(DCONST_DVARINT_mantle_required_stick_magnitude);
  DCONST_DVARBOOL_mantle_any_direction = Dvar_Deregister(DCONST_DVARBOOL_mantle_any_direction);
  DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale = Dvar_Deregister(DCONST_DVARFLT_mantle_kbm_wishdirection_strafe_scale);
  DCONST_DVARINT_mantle_debug = Dvar_Deregister(DCONST_DVARINT_mantle_debug);
  DVARINT_mantle_debugLineTime = Dvar_Deregister(DVARINT_mantle_debugLineTime);
  DVARFLT_mantle_export_height = Dvar_Deregister(DVARFLT_mantle_export_height);
  DVARFLT_mantle_export_ledge_dist = Dvar_Deregister(DVARFLT_mantle_export_ledge_dist);
  DVARFLT_mantle_export_over_dist = Dvar_Deregister(DVARFLT_mantle_export_over_dist);
  DVARBOOL_mantle_export_isLadder = Dvar_Deregister(DVARBOOL_mantle_export_isLadder);
  DVARBOOL_mantle_export_isover = Dvar_Deregister(DVARBOOL_mantle_export_isover);
  DVARBOOL_mantle_export_run = Dvar_Deregister(DVARBOOL_mantle_export_run);
  DVARBOOL_mantle_debug_traces_once = Dvar_Deregister(DVARBOOL_mantle_debug_traces_once);
  DCONST_DVARBOOL_mantle_debug_traces_activation = Dvar_Deregister(DCONST_DVARBOOL_mantle_debug_traces_activation);
  DCONST_DVARINT_mantle_debug_traces_duration = Dvar_Deregister(DCONST_DVARINT_mantle_debug_traces_duration);
  DVARFLT_mantle_export_on_speed = Dvar_Deregister(DVARFLT_mantle_export_on_speed);
  DVARFLT_mantle_export_over_speed = Dvar_Deregister(DVARFLT_mantle_export_over_speed);
  DCONST_DVARBOOL_mantle_check_trajectory = Dvar_Deregister(DCONST_DVARBOOL_mantle_check_trajectory);
  DCONST_DVARFLT_mantle_max_predicted_exit_speed = Dvar_Deregister(DCONST_DVARFLT_mantle_max_predicted_exit_speed);
  DCONST_DVARFLT_mantle_prevention_jump_height_delta = Dvar_Deregister(DCONST_DVARFLT_mantle_prevention_jump_height_delta);
  DCONST_DVARINT_mantle_standToCrouchViewHeightLerpTimeMs = Dvar_Deregister(DCONST_DVARINT_mantle_standToCrouchViewHeightLerpTimeMs);
  DCONST_DVARMPBOOL_mantle_draw_hint = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_draw_hint);
  DCONST_DVARMPBOOL_mantle_draw_hint_while_airborne = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_draw_hint_while_airborne);
  DCONST_DVARFLT_mantle_edge_ledge_check_rise_amount = Dvar_Deregister(DCONST_DVARFLT_mantle_edge_ledge_check_rise_amount);
  DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_24_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_32_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_40_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_48_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_56_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_on_72_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_24_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_32_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_40_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_48_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_56_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_over_72_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_0_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_8_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_16_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_24_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_bias);
  DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_32_spline_start_to_ledge_point_height);
  DCONST_DVARFLT_mantle_spline_ledge_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ledge_point_height);
  DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ledge_to_end_point_bias);
  DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ledge_to_end_point_height);
  DCONST_DVARFLT_mantle_spline_ladder_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ladder_point_height);
  DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ladder_to_end_point_bias);
  DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height = Dvar_Deregister(DCONST_DVARFLT_mantle_spline_ladder_to_end_point_height);
  DCONST_DVARFLT_mantle_sprint_min_speed_threshold = Dvar_Deregister(DCONST_DVARFLT_mantle_sprint_min_speed_threshold);
  DCONST_DVARFLT_mantle_sprint_min_speed = Dvar_Deregister(DCONST_DVARFLT_mantle_sprint_min_speed);
  DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed = Dvar_Deregister(DCONST_DVARFLT_mantle_sprint_anim_cond_min_speed);
  DCONST_DVARFLT_mantle_land_time = Dvar_Deregister(DCONST_DVARFLT_mantle_land_time);
  DCONST_DVARFLT_mantle_falling_time = Dvar_Deregister(DCONST_DVARFLT_mantle_falling_time);
  DCONST_DVARFLT_mantle_type_boost_height = Dvar_Deregister(DCONST_DVARFLT_mantle_type_boost_height);
  DCONST_DVARFLT_mantle_type_climb_height = Dvar_Deregister(DCONST_DVARFLT_mantle_type_climb_height);
  DCONST_DVARFLT_mantle_slow_input_turn_rate_override = Dvar_Deregister(DCONST_DVARFLT_mantle_slow_input_turn_rate_override);
  DCONST_DVARFLT_mantle_forward_mantle_angle_begin = Dvar_Deregister(DCONST_DVARFLT_mantle_forward_mantle_angle_begin);
  DCONST_DVARFLT_mantle_forward_mantle_angle_end = Dvar_Deregister(DCONST_DVARFLT_mantle_forward_mantle_angle_end);
  DCONST_DVARFLT_mantle_left_mantle_angle_begin = Dvar_Deregister(DCONST_DVARFLT_mantle_left_mantle_angle_begin);
  DCONST_DVARFLT_mantle_left_mantle_angle_end = Dvar_Deregister(DCONST_DVARFLT_mantle_left_mantle_angle_end);
  DCONST_DVARFLT_mantle_back_mantle_angle_begin = Dvar_Deregister(DCONST_DVARFLT_mantle_back_mantle_angle_begin);
  DCONST_DVARFLT_mantle_back_mantle_angle_end = Dvar_Deregister(DCONST_DVARFLT_mantle_back_mantle_angle_end);
  DCONST_DVARFLT_mantle_right_mantle_angle_begin = Dvar_Deregister(DCONST_DVARFLT_mantle_right_mantle_angle_begin);
  DCONST_DVARFLT_mantle_right_mantle_angle_end = Dvar_Deregister(DCONST_DVARFLT_mantle_right_mantle_angle_end);
  DCONST_DVARBOOL_mantle_side_mantle_use_over = Dvar_Deregister(DCONST_DVARBOOL_mantle_side_mantle_use_over);
  DCONST_DVARBOOL_mantle_back_mantle_use_over = Dvar_Deregister(DCONST_DVARBOOL_mantle_back_mantle_use_over);
  DCONST_DVARFLT_mantle_min_speed = Dvar_Deregister(DCONST_DVARFLT_mantle_min_speed);
  DCONST_DVARFLT_mantle_on_dist_min = Dvar_Deregister(DCONST_DVARFLT_mantle_on_dist_min);
  DCONST_DVARFLT_mantle_on_dist_max = Dvar_Deregister(DCONST_DVARFLT_mantle_on_dist_max);
  DCONST_DVARFLT_mantle_on_time_min = Dvar_Deregister(DCONST_DVARFLT_mantle_on_time_min);
  DCONST_DVARFLT_mantle_on_time_max = Dvar_Deregister(DCONST_DVARFLT_mantle_on_time_max);
  DCONST_DVARFLT_mantle_on_high_dist_min = Dvar_Deregister(DCONST_DVARFLT_mantle_on_high_dist_min);
  DCONST_DVARFLT_mantle_on_high_dist_max = Dvar_Deregister(DCONST_DVARFLT_mantle_on_high_dist_max);
  DCONST_DVARFLT_mantle_on_high_time_min = Dvar_Deregister(DCONST_DVARFLT_mantle_on_high_time_min);
  DCONST_DVARFLT_mantle_on_high_time_max = Dvar_Deregister(DCONST_DVARFLT_mantle_on_high_time_max);
  DCONST_DVARFLT_mantle_on_speed_min = Dvar_Deregister(DCONST_DVARFLT_mantle_on_speed_min);
  DCONST_DVARFLT_mantle_on_speed_max = Dvar_Deregister(DCONST_DVARFLT_mantle_on_speed_max);
  DCONST_DVARMPFLT_mantle_on_timescale_min = Dvar_Deregister(DCONST_DVARMPFLT_mantle_on_timescale_min);
  DCONST_DVARMPFLT_mantle_on_timescale_max = Dvar_Deregister(DCONST_DVARMPFLT_mantle_on_timescale_max);
  DCONST_DVARFLT_mantle_over_dist_min = Dvar_Deregister(DCONST_DVARFLT_mantle_over_dist_min);
  DCONST_DVARFLT_mantle_over_dist_max = Dvar_Deregister(DCONST_DVARFLT_mantle_over_dist_max);
  DCONST_DVARFLT_mantle_over_time_min = Dvar_Deregister(DCONST_DVARFLT_mantle_over_time_min);
  DCONST_DVARFLT_mantle_over_time_max = Dvar_Deregister(DCONST_DVARFLT_mantle_over_time_max);
  DCONST_DVARFLT_mantle_over_high_dist_min = Dvar_Deregister(DCONST_DVARFLT_mantle_over_high_dist_min);
  DCONST_DVARFLT_mantle_over_high_dist_max = Dvar_Deregister(DCONST_DVARFLT_mantle_over_high_dist_max);
  DCONST_DVARFLT_mantle_over_high_time_min = Dvar_Deregister(DCONST_DVARFLT_mantle_over_high_time_min);
  DCONST_DVARFLT_mantle_over_high_time_max = Dvar_Deregister(DCONST_DVARFLT_mantle_over_high_time_max);
  DCONST_DVARFLT_mantle_over_speed_min = Dvar_Deregister(DCONST_DVARFLT_mantle_over_speed_min);
  DCONST_DVARFLT_mantle_over_speed_max = Dvar_Deregister(DCONST_DVARFLT_mantle_over_speed_max);
  DCONST_DVARMPFLT_mantle_over_timescale_min = Dvar_Deregister(DCONST_DVARMPFLT_mantle_over_timescale_min);
  DCONST_DVARMPFLT_mantle_over_timescale_max = Dvar_Deregister(DCONST_DVARMPFLT_mantle_over_timescale_max);
  DCONST_DVARFLT_mantle_ladder_dist_min = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_dist_min);
  DCONST_DVARFLT_mantle_ladder_dist_max = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_dist_max);
  DCONST_DVARFLT_mantle_ladder_time_min = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_time_min);
  DCONST_DVARFLT_mantle_ladder_time_max = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_time_max);
  DCONST_DVARFLT_mantle_ladder_speed_min = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_speed_min);
  DCONST_DVARFLT_mantle_ladder_speed_max = Dvar_Deregister(DCONST_DVARFLT_mantle_ladder_speed_max);
  DCONST_DVARMPFLT_mantle_ladder_timescale_min = Dvar_Deregister(DCONST_DVARMPFLT_mantle_ladder_timescale_min);
  DCONST_DVARMPFLT_mantle_ladder_timescale_max = Dvar_Deregister(DCONST_DVARMPFLT_mantle_ladder_timescale_max);
  DCONST_DVARINT_mantle_ladder_sprint_cooldown_time = Dvar_Deregister(DCONST_DVARINT_mantle_ladder_sprint_cooldown_time);
  DCONST_DVARINT_mantle_ladder_yaw_extra_time = Dvar_Deregister(DCONST_DVARINT_mantle_ladder_yaw_extra_time);
  DCONST_DVARINT_mantle_ladder_yaw_ease_mode = Dvar_Deregister(DCONST_DVARINT_mantle_ladder_yaw_ease_mode);
  DCONST_DVARFLT_mantle_gesture_extreme_min_height = Dvar_Deregister(DCONST_DVARFLT_mantle_gesture_extreme_min_height);
  DCONST_DVARFLT_mantle_gesture_high_min_height = Dvar_Deregister(DCONST_DVARFLT_mantle_gesture_high_min_height);
  DCONST_DVARFLT_mantle_gesture_middle_min_height = Dvar_Deregister(DCONST_DVARFLT_mantle_gesture_middle_min_height);
  DCONST_DVARBOOL_mantle_drawLegs = Dvar_Deregister(DCONST_DVARBOOL_mantle_drawLegs);
  DCONST_DVARMPBOOL_mantle_ladder_enable = Dvar_Deregister(DCONST_DVARMPBOOL_mantle_ladder_enable);
  DVARBOOL_mantle_fixMantleIntoCollision = Dvar_Deregister(DVARBOOL_mantle_fixMantleIntoCollision);
  DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer = Dvar_Deregister(DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer);
  DCONST_DVARFLT_perk_equipmentVolumeQuietNPC = Dvar_Deregister(DCONST_DVARFLT_perk_equipmentVolumeQuietNPC);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayer = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayer);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerCreep = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerCreep);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerWalk = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerWalk);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerRun = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerRun);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSprint = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSprint);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSuperSprint = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerSuperSprint);
  DCONST_DVARFLT_perk_footstepVolumeQuietPlayerProne = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietPlayerProne);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPC = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPC);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCCreep = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCCreep);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCWalk = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCWalk);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCRun = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCRun);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCSprint = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCSprint);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCSuperSprint = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCSuperSprint);
  DCONST_DVARFLT_perk_footstepVolumeQuietNPCProne = Dvar_Deregister(DCONST_DVARFLT_perk_footstepVolumeQuietNPCProne);
  DVARFLT_perk_footstepVolumePlayer = Dvar_Deregister(DVARFLT_perk_footstepVolumePlayer);
  DVARFLT_perk_footstepVolumeAlly = Dvar_Deregister(DVARFLT_perk_footstepVolumeAlly);
  DVARFLT_perk_footstepVolumeEnemy = Dvar_Deregister(DVARFLT_perk_footstepVolumeEnemy);
  DVARFLT_perk_footstepVolumeSelectiveHearingMin = Dvar_Deregister(DVARFLT_perk_footstepVolumeSelectiveHearingMin);
  DCONST_DVARFLT_perk_fallVolumeQuietPlayer = Dvar_Deregister(DCONST_DVARFLT_perk_fallVolumeQuietPlayer);
  DCONST_DVARFLT_perk_fallVolumeQuietNPC = Dvar_Deregister(DCONST_DVARFLT_perk_fallVolumeQuietNPC);
  DCONST_DVARFLT_perk_silentDoubleJumpAudioPlayer = Dvar_Deregister(DCONST_DVARFLT_perk_silentDoubleJumpAudioPlayer);
  DCONST_DVARFLT_perk_silentDoubleJumpAudioNPC = Dvar_Deregister(DCONST_DVARFLT_perk_silentDoubleJumpAudioNPC);
  DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietPlayer = Dvar_Deregister(DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietPlayer);
  DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietNPC = Dvar_Deregister(DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietNPC);
  DCONST_DVARFLT_perk_weapSwapMultiplier = Dvar_Deregister(DCONST_DVARFLT_perk_weapSwapMultiplier);
  DCONST_DVARFLT_perk_fastOffhandMultiplier = Dvar_Deregister(DCONST_DVARFLT_perk_fastOffhandMultiplier);
  DCONST_DVARFLT_perk_extendedMeleeRange = Dvar_Deregister(DCONST_DVARFLT_perk_extendedMeleeRange);
  DCONST_DVARFLT_perk_longerRangeScale = Dvar_Deregister(DCONST_DVARFLT_perk_longerRangeScale);
  DCONST_DVARFLT_perk_fasterMeleeScale = Dvar_Deregister(DCONST_DVARFLT_perk_fasterMeleeScale);
  DCONST_DVARFLT_perk_reducedSwayScale = Dvar_Deregister(DCONST_DVARFLT_perk_reducedSwayScale);
  DVARFLT_perk_weapSpreadMultiplier = Dvar_Deregister(DVARFLT_perk_weapSpreadMultiplier);
  DVARFLT_perk_weapReloadMultiplier = Dvar_Deregister(DVARFLT_perk_weapReloadMultiplier);
  DVARFLT_perk_weapReloadMultiplierEmpty = Dvar_Deregister(DVARFLT_perk_weapReloadMultiplierEmpty);
  DVARBOOL_perk_weapReloadMultiplierEmptyOnLowAmmo = Dvar_Deregister(DVARBOOL_perk_weapReloadMultiplierEmptyOnLowAmmo);
  DVARFLT_perk_extraBreath = Dvar_Deregister(DVARFLT_perk_extraBreath);
  DVARFLT_perk_improvedExtraBreath = Dvar_Deregister(DVARFLT_perk_improvedExtraBreath);
  DVARFLT_perk_bulletPenetrationMultiplier = Dvar_Deregister(DVARFLT_perk_bulletPenetrationMultiplier);
  DVARFLT_perk_parabolicRadius = Dvar_Deregister(DVARFLT_perk_parabolicRadius);
  DVARFLT_perk_parabolicAngle = Dvar_Deregister(DVARFLT_perk_parabolicAngle);
  DVARSTR_perk_parabolicIcon = Dvar_Deregister(DVARSTR_perk_parabolicIcon);
  DVARFLT_perk_sprintMultiplier = Dvar_Deregister(DVARFLT_perk_sprintMultiplier);
  DVARINT_perk_extendedMagsRifleAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsRifleAmmo);
  DVARINT_perk_extendedMagsSniperAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsSniperAmmo);
  DVARINT_perk_extendedMagsMGAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsMGAmmo);
  DVARINT_perk_extendedMagsSMGAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsSMGAmmo);
  DVARINT_perk_extendedMagsSpreadAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsSpreadAmmo);
  DVARINT_perk_extendedMagsPistolAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsPistolAmmo);
  DVARINT_perk_extendedMagsBeamAmmo = Dvar_Deregister(DVARINT_perk_extendedMagsBeamAmmo);
  DVARFLT_perk_lightWeightViewBobScale = Dvar_Deregister(DVARFLT_perk_lightWeightViewBobScale);
  DCONST_DVARFLT_perk_quickDrawSpeedScaleMP = Dvar_Deregister(DCONST_DVARFLT_perk_quickDrawSpeedScaleMP);
  DCONST_DVARFLT_perk_quickDrawSpeedScaleSniperMP = Dvar_Deregister(DCONST_DVARFLT_perk_quickDrawSpeedScaleSniperMP);
  DVARFLT_perk_quickDrawSpeedScaleSP = Dvar_Deregister(DVARFLT_perk_quickDrawSpeedScaleSP);
  DVARFLT_perk_quickDrawSpeedScaleSniperSP = Dvar_Deregister(DVARFLT_perk_quickDrawSpeedScaleSniperSP);
  DVARFLT_perk_fastSnipeScale = Dvar_Deregister(DVARFLT_perk_fastSnipeScale);
  DVARFLT_perk_sprintRecoveryMultiplierActual = Dvar_Deregister(DVARFLT_perk_sprintRecoveryMultiplierActual);
  DVARFLT_perk_sprintRecoveryMultiplierVisual = Dvar_Deregister(DVARFLT_perk_sprintRecoveryMultiplierVisual);
  DVARFLT_perk_longerTeleportMultiplier = Dvar_Deregister(DVARFLT_perk_longerTeleportMultiplier);
  DVARFLT_perk_explosiveArmorMultiplier = Dvar_Deregister(DVARFLT_perk_explosiveArmorMultiplier);
  DCONST_DVARFLT_perk_sprintFireSprintOutTimeMultiplier = Dvar_Deregister(DCONST_DVARFLT_perk_sprintFireSprintOutTimeMultiplier);
  DCONST_DVARINT_perk_sprintFireCombatCooldown = Dvar_Deregister(DCONST_DVARINT_perk_sprintFireCombatCooldown);
  DVARFLT_perk_marksmanNameDistanceScale = Dvar_Deregister(DVARFLT_perk_marksmanNameDistanceScale);
  DVARFLT_perk_marksmanNameAngleScale = Dvar_Deregister(DVARFLT_perk_marksmanNameAngleScale);
  DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks = Dvar_Deregister(DCONST_DVARBOOL_perk_trackerPro_useFootStepNotetracks);
  DCONST_DVARFLT_perk_trackerPro_fxGapDistanceGround = Dvar_Deregister(DCONST_DVARFLT_perk_trackerPro_fxGapDistanceGround);
  DCONST_DVARFLT_perk_trackerPro_fxGapDistanceAir = Dvar_Deregister(DCONST_DVARFLT_perk_trackerPro_fxGapDistanceAir);
  DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir = Dvar_Deregister(DCONST_DVARFLT_perk_trackerPro_fxSpawnDistanceFromAnkleInAir);
  DCONST_DVARFLT_perk_trackerPro_maxDistance = Dvar_Deregister(DCONST_DVARFLT_perk_trackerPro_maxDistance);
  DCONST_DVARBOOL_perk_trackerPro_debug = Dvar_Deregister(DCONST_DVARBOOL_perk_trackerPro_debug);
  DCONST_DVARMPFLT_perk_melee_resist_factor = Dvar_Deregister(DCONST_DVARMPFLT_perk_melee_resist_factor);
  DCONST_DVARMPINT_perk_melee_resist_finisher_adjust = Dvar_Deregister(DCONST_DVARMPINT_perk_melee_resist_finisher_adjust);
  DCONST_DVARFLT_bg_vehicle_ground_min_normal = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_ground_min_normal);
  DCONST_DVARFLT_bg_vehicle_ground_max_normal = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_ground_max_normal);
  DCONST_DVARFLT_bg_vehicle_slide_min_normal = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_slide_min_normal);
  DCONST_DVARFLT_bg_vehicle_pitch_track = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_pitch_track);
  DCONST_DVARFLT_bg_vehicle_roll_track = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_roll_track);
  DCONST_DVARFLT_bg_vehicle_max_pitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_max_pitch);
  DCONST_DVARFLT_bg_vehicle_max_roll = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_max_roll);
  DCONST_DVARFLT_bg_vehicle_max_body_pitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_max_body_pitch);
  DCONST_DVARFLT_bg_vehicle_max_body_roll = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_max_body_roll);
  DCONST_DVARFLT_bg_vehicle_gravity = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_gravity);
  DCONST_DVARFLT_bg_vehicle_trace_offset = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_trace_offset);
  DCONST_DVARFLT_bg_vehicle_aim_trace_min = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_aim_trace_min);
  DCONST_DVARFLT_bg_vehicle_overclip = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_overclip);
  DCONST_DVARFLT_bg_vehicle_tangential_clip_vel_scale = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_tangential_clip_vel_scale);
  DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale);
  DCONST_DVARFLT_bg_vehicle_stepsize = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_stepsize);
  DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z);
  DCONST_DVARFLT_bg_vehicle_target_radius = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_target_radius);
  DCONST_DVARFLT_bg_vehicle_target_min_speed = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_target_min_speed);
  DCONST_DVARFLT_bg_vehicle_break_glass_speed = Dvar_Deregister(DCONST_DVARFLT_bg_vehicle_break_glass_speed);
  DCONST_DVARFLT_bg_helicopter_stepsize = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_stepsize);
  DCONST_DVARFLT_bg_helicopter_altitude_offset = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_altitude_offset);
  DCONST_DVARFLT_bg_helicopter_altitude_min_normal = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_altitude_min_normal);
  DCONST_DVARFLT_bg_helicopter_hover_cellsize = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_hover_cellsize);
  DCONST_DVARFLT_bg_helicopter_hover_scalewind = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_hover_scalewind);
  DCONST_DVARFLT_bg_helicopter_hover_minspeed = Dvar_Deregister(DCONST_DVARFLT_bg_helicopter_hover_minspeed);
  DCONST_DVARINT_bg_helicopter_hover_timealt = Dvar_Deregister(DCONST_DVARINT_bg_helicopter_hover_timealt);
  DCONST_DVARBOOL_bg_vehicle_placement_debug = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicle_placement_debug);
  DVARINT_vehHelicopterControlsAltitude = Dvar_Deregister(DVARINT_vehHelicopterControlsAltitude);
  DVARINT_vehBoatControls = Dvar_Deregister(DVARINT_vehBoatControls);
  DVARBOOL_bg_vehicle_wall_collision_fix = Dvar_Deregister(DVARBOOL_bg_vehicle_wall_collision_fix);
  DCONST_DVARFLT_bg_tank_deadzone_movement = Dvar_Deregister(DCONST_DVARFLT_bg_tank_deadzone_movement);
  DCONST_DVARFLT_bg_tank_deadzone_turn = Dvar_Deregister(DCONST_DVARFLT_bg_tank_deadzone_turn);
  DCONST_DVARINT_bg_vehicleDebug = Dvar_Deregister(DCONST_DVARINT_bg_vehicleDebug);
  DCONST_DVARINT_bg_vehicleDebugInfo = Dvar_Deregister(DCONST_DVARINT_bg_vehicleDebugInfo);
  DCONST_DVARBOOL_bg_vehicleDebugTreads = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicleDebugTreads);
  DCONST_DVARFLT_bg_vehiclePathLookAheadOffset = Dvar_Deregister(DCONST_DVARFLT_bg_vehiclePathLookAheadOffset);
  DCONST_DVARINT_bg_vehiclePathLookAheadNodeCount = Dvar_Deregister(DCONST_DVARINT_bg_vehiclePathLookAheadNodeCount);
  DCONST_DVARFLT_bg_tank_deadzone_angle = Dvar_Deregister(DCONST_DVARFLT_bg_tank_deadzone_angle);
  DCONST_DVARBOOL_bg_vehicleDisableSoftContacts = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicleDisableSoftContacts);
  DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim);
  DVARFLT_bg_vehicleTopSpeed = Dvar_Deregister(DVARFLT_bg_vehicleTopSpeed);
  DCONST_DVARINT_bg_vehicleAxleBodies = Dvar_Deregister(DCONST_DVARINT_bg_vehicleAxleBodies);
  DCONST_DVARFLT_bg_vehicleImpKNotetrack = Dvar_Deregister(DCONST_DVARFLT_bg_vehicleImpKNotetrack);
  DCONST_DVARBOOL_bg_vehicleAllowWeights = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicleAllowWeights);
  DCONST_DVARFLT_bg_vehiclePlayerMass = Dvar_Deregister(DCONST_DVARFLT_bg_vehiclePlayerMass);
  DCONST_DVARFLT_bg_vehiclePlayerMassFac = Dvar_Deregister(DCONST_DVARFLT_bg_vehiclePlayerMassFac);
  DCONST_DVARFLT_bg_vehicleAdjustToView = Dvar_Deregister(DCONST_DVARFLT_bg_vehicleAdjustToView);
  DCONST_DVARFLT_bg_vehSuspIntegDT = Dvar_Deregister(DCONST_DVARFLT_bg_vehSuspIntegDT);
  DCONST_DVARBOOL_bg_vehSuspGlobalUp = Dvar_Deregister(DCONST_DVARBOOL_bg_vehSuspGlobalUp);
  DCONST_DVARFLT_bg_vehSuspStiffAdaptive = Dvar_Deregister(DCONST_DVARFLT_bg_vehSuspStiffAdaptive);
  DCONST_DVARFLT_bg_vehSuspDampAdaptive = Dvar_Deregister(DCONST_DVARFLT_bg_vehSuspDampAdaptive);
  DCONST_DVARFLT_bg_vehSuspNoiseAmp = Dvar_Deregister(DCONST_DVARFLT_bg_vehSuspNoiseAmp);
  DCONST_DVARFLT_bg_vehDelayFromPassenger = Dvar_Deregister(DCONST_DVARFLT_bg_vehDelayFromPassenger);
  DCONST_DVARBOOL_bg_vehTurretElevLocal = Dvar_Deregister(DCONST_DVARBOOL_bg_vehTurretElevLocal);
  DCONST_DVARFLT_bg_bradleyTimeToFullSteer = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyTimeToFullSteer);
  DCONST_DVARMODEFLT_bg_bradleySlopeTorqueFactor = Dvar_Deregister(DCONST_DVARMODEFLT_bg_bradleySlopeTorqueFactor);
  DCONST_DVARMODEFLT_bg_bradleyExpSteering = Dvar_Deregister(DCONST_DVARMODEFLT_bg_bradleyExpSteering);
  DCONST_DVARFLT_bg_bradleyCamTraceLen = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamTraceLen);
  DCONST_DVARFLT_bg_bradleyCamRange = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamRange);
  DCONST_DVARFLT_bg_bradleyCamHeight = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamHeight);
  DCONST_DVARFLT_bg_bradleyCamHorizOffset = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamHorizOffset);
  DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold = Dvar_Deregister(DCONST_DVARMODEFLT_bg_bradleyHandbrakeTreshold);
  DCONST_DVARBOOL_bg_bradleyGunPitchClamp = Dvar_Deregister(DCONST_DVARBOOL_bg_bradleyGunPitchClamp);
  DCONST_DVARFLT_bg_bradleyGunPitchClamp_begin = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyGunPitchClamp_begin);
  DCONST_DVARFLT_bg_bradleyGunPitchClamp_max = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyGunPitchClamp_max);
  DCONST_DVARFLT_bg_bradleyKickBackForce = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyKickBackForce);
  DCONST_DVARFLT_bg_bradleyTreadFwFactor = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyTreadFwFactor);
  DCONST_DVARFLT_bg_bradleyTreadYawFactor = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyTreadYawFactor);
  DCONST_DVARFLT_bg_bradleyAngleCutoff = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyAngleCutoff);
  DCONST_DVARFLT_bg_vehCamBradleyElevFactor = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamBradleyElevFactor);
  DCONST_DVARFLT_bg_bradleyCamRadiusClose = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamRadiusClose);
  DCONST_DVARFLT_bg_bradleyCamRadiusUp = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamRadiusUp);
  DCONST_DVARFLT_bg_bradleyCamRadiusBack = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamRadiusBack);
  DCONST_DVARFLT_bg_bradleyCamRollContrib = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamRollContrib);
  DCONST_DVARFLT_bg_bradleyCamPitchContrib = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyCamPitchContrib);
  DCONST_DVARFLT_bg_bradleyVelReductionColl = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyVelReductionColl);
  DCONST_DVARFLT_bg_bradleyMaxPitchDeg = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyMaxPitchDeg);
  DCONST_DVARFLT_bg_bradleyPitchRecover = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyPitchRecover);
  DCONST_DVARFLT_bg_bradleyAccel = Dvar_Deregister(DCONST_DVARFLT_bg_bradleyAccel);
  DCONST_DVARFLT_bg_vindiaCamTraceLen = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamTraceLen);
  DCONST_DVARFLT_bg_vindiaCamRange = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamRange);
  DCONST_DVARFLT_bg_vindiaCamHeight = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamHeight);
  DCONST_DVARFLT_bg_vindiaCamHorizOffset = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamHorizOffset);
  DCONST_DVARFLT_bg_vindiaCamRadiusClose = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamRadiusClose);
  DCONST_DVARFLT_bg_vindiaCamRadiusUp = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamRadiusUp);
  DCONST_DVARFLT_bg_vindiaCamRadiusBack = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamRadiusBack);
  DCONST_DVARFLT_bg_vindiaCamRollContrib = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamRollContrib);
  DCONST_DVARFLT_bg_vindiaCamPitchContrib = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaCamPitchContrib);
  DCONST_DVARBOOL_bg_vindiaGunPitchClamp = Dvar_Deregister(DCONST_DVARBOOL_bg_vindiaGunPitchClamp);
  DCONST_DVARFLT_bg_vindiaGunPitchClamp_begin = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaGunPitchClamp_begin);
  DCONST_DVARFLT_bg_vindiaGunPitchClamp_max = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaGunPitchClamp_max);
  DCONST_DVARFLT_bg_vehCamVindiaElevFactor = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamVindiaElevFactor);
  DCONST_DVARFLT_bg_vindiaKickBackForce = Dvar_Deregister(DCONST_DVARFLT_bg_vindiaKickBackForce);
  DCONST_DVARBOOL_bg_wheelsonReverseSteering = Dvar_Deregister(DCONST_DVARBOOL_bg_wheelsonReverseSteering);
  DVARINT_bg_wheelsonControls = Dvar_Deregister(DVARINT_bg_wheelsonControls);
  DCONST_DVARFLT_bg_wheelsonKickBackForce = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonKickBackForce);
  DCONST_DVARFLT_bg_wheelsonSteerFactor = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonSteerFactor);
  DCONST_DVARFLT_bg_wheelsonSteerExp = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonSteerExp);
  DCONST_DVARFLT_bg_wheelsonForceTurretYawSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonForceTurretYawSpeed);
  DCONST_DVARFLT_bg_wheelsonRollReturnSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonRollReturnSpeed);
  DCONST_DVARFLT_bg_wheelsonFrontalOffset = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonFrontalOffset);
  DCONST_DVARFLT_bg_wheelsonTurretPitchAddition = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonTurretPitchAddition);
  DCONST_DVARFLT_bg_wheelsonTurretYawAddition = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonTurretYawAddition);
  DCONST_DVARFLT_bg_wheelsonTurretRollAddition = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonTurretRollAddition);
  DCONST_DVARFLT_bg_wheelsonEngineForce = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonEngineForce);
  DCONST_DVARFLT_bg_wheelsonEngineOffset = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonEngineOffset);
  DCONST_DVARFLT_bg_wheelsonCamStartDispl = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamStartDispl);
  DCONST_DVARFLT_bg_wheelsonScriptDmgFactor = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonScriptDmgFactor);
  DCONST_DVARFLT_bg_wheelsonAngleCutoff = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonAngleCutoff);
  DCONST_DVARFLT_bg_wheelsonTurnFactor = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonTurnFactor);
  DCONST_DVARFLT_bg_vehCamWheelsonElevFactor = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamWheelsonElevFactor);
  DCONST_DVARFLT_bg_wheelsonCamRadiusClose = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamRadiusClose);
  DCONST_DVARFLT_bg_wheelsonCamRadiusUp = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamRadiusUp);
  DCONST_DVARFLT_bg_wheelsonCamRadiusBack = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamRadiusBack);
  DCONST_DVARFLT_bg_wheelsonCamRollContrib = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamRollContrib);
  DCONST_DVARFLT_bg_wheelsonCamPitchContrib = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamPitchContrib);
  DCONST_DVARFLT_bg_wheelsonCamTraceLen = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamTraceLen);
  DCONST_DVARFLT_bg_wheelsonCamRange = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamRange);
  DCONST_DVARFLT_bg_wheelsonCamHeight = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamHeight);
  DCONST_DVARFLT_bg_wheelsonCamHorizOffset = Dvar_Deregister(DCONST_DVARFLT_bg_wheelsonCamHorizOffset);
  DCONST_DVARFLT_bg_atvAnimPitchFactorGround = Dvar_Deregister(DCONST_DVARFLT_bg_atvAnimPitchFactorGround);
  DCONST_DVARFLT_bg_carHandbrakeFac = Dvar_Deregister(DCONST_DVARFLT_bg_carHandbrakeFac);
  DCONST_DVARFLT_bg_carHandbrakeFacSide = Dvar_Deregister(DCONST_DVARFLT_bg_carHandbrakeFacSide);
  DCONST_DVARFLT_bg_carHandbrakeFacTime = Dvar_Deregister(DCONST_DVARFLT_bg_carHandbrakeFacTime);
  DCONST_DVARFLT_bg_carLowFricSurf = Dvar_Deregister(DCONST_DVARFLT_bg_carLowFricSurf);
  DCONST_DVARFLT_bg_carMidFricSurf = Dvar_Deregister(DCONST_DVARFLT_bg_carMidFricSurf);
  DCONST_DVARFLT_bg_carHighNoiseSurf = Dvar_Deregister(DCONST_DVARFLT_bg_carHighNoiseSurf);
  DCONST_DVARFLT_bg_carMidNoiseSurf = Dvar_Deregister(DCONST_DVARFLT_bg_carMidNoiseSurf);
  DCONST_DVARFLT_bg_carLowNoiseSurf = Dvar_Deregister(DCONST_DVARFLT_bg_carLowNoiseSurf);
  DCONST_DVARFLT_bg_carYawSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_carYawSpeed);
  DCONST_DVARFLT_bg_carGamepadRumble = Dvar_Deregister(DCONST_DVARFLT_bg_carGamepadRumble);
  DCONST_DVARFLT_bg_vehShakeImpactThreshold = Dvar_Deregister(DCONST_DVARFLT_bg_vehShakeImpactThreshold);
  DCONST_DVARFLT_bg_vehShakeImpactScale = Dvar_Deregister(DCONST_DVARFLT_bg_vehShakeImpactScale);
  DCONST_DVARINT_bg_vehShakeImpactDur = Dvar_Deregister(DCONST_DVARINT_bg_vehShakeImpactDur);
  DCONST_DVARFLT_bg_vehShakeMinTimeAir = Dvar_Deregister(DCONST_DVARFLT_bg_vehShakeMinTimeAir);
  DCONST_DVARFLT_bg_vehLandedShake = Dvar_Deregister(DCONST_DVARFLT_bg_vehLandedShake);
  DCONST_DVARFLT_bg_vehLandedRumble = Dvar_Deregister(DCONST_DVARFLT_bg_vehLandedRumble);
  DCONST_DVARFLT_bg_vehHeliPlayerCapHeight = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliPlayerCapHeight);
  DCONST_DVARFLT_bg_vehHeliPlayerCapRadius = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliPlayerCapRadius);
  DCONST_DVARFLT_bg_vehHeliBladesRadiusMain = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliBladesRadiusMain);
  DCONST_DVARFLT_bg_vehHeliBladesRadiusTail = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliBladesRadiusTail);
  DCONST_DVARFLT_bg_vehHeliPlayerMinRPMMain = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMMain);
  DCONST_DVARFLT_bg_vehHeliPlayerMinRPMTail = Dvar_Deregister(DCONST_DVARFLT_bg_vehHeliPlayerMinRPMTail);
  DVARBOOL_bg_vehRagdoll = Dvar_Deregister(DVARBOOL_bg_vehRagdoll);
  DCONST_DVARFLT_bg_vehRagdollMaxForce = Dvar_Deregister(DCONST_DVARFLT_bg_vehRagdollMaxForce);
  DCONST_DVARFLT_bg_vehRagdollSpawnAhead = Dvar_Deregister(DCONST_DVARFLT_bg_vehRagdollSpawnAhead);
  DCONST_DVARFLT_bg_vehRagdollAtvElev = Dvar_Deregister(DCONST_DVARFLT_bg_vehRagdollAtvElev);
  DCONST_DVARFLT_bg_vehRagdollElev = Dvar_Deregister(DCONST_DVARFLT_bg_vehRagdollElev);
  DCONST_DVARBOOL_bg_rcpDebugFull = Dvar_Deregister(DCONST_DVARBOOL_bg_rcpDebugFull);
  DCONST_DVARBOOL_bg_rcpUseDvars = Dvar_Deregister(DCONST_DVARBOOL_bg_rcpUseDvars);
  DCONST_DVARFLT_bg_rcp_m_acceleration = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_acceleration);
  DCONST_DVARFLT_bg_rcp_m_deceleration = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_deceleration);
  DCONST_DVARFLT_bg_rcp_m_timeAfterColl = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_timeAfterColl);
  DCONST_DVARFLT_bg_rcp_m_minSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_minSpeed);
  DCONST_DVARFLT_bg_rcp_m_pitchInversion = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchInversion);
  DCONST_DVARINT_bg_rcp_m_controlMode = Dvar_Deregister(DCONST_DVARINT_bg_rcp_m_controlMode);
  DCONST_DVARVEC3_bg_rcp_m_angularDampLs = Dvar_Deregister(DCONST_DVARVEC3_bg_rcp_m_angularDampLs);
  DCONST_DVARFLT_bg_rcp_m_boostSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_boostSpeed);
  DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic = Dvar_Deregister(DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic);
  DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch = Dvar_Deregister(DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch);
  DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed = Dvar_Deregister(DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed);
  DCONST_DVARFLT_bg_rcp_m_overshootProtection = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_overshootProtection);
  DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed);
  DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor);
  DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed);
  DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir);
  DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedReturning = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedReturning);
  DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle);
  DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed);
  DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor);
  DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed);
  DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir);
  DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning);
  DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed);
  DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering);
  DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir);
  DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning);
  DCONST_DVARFLT_bg_rcp_m_rollMaxAngle = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle);
  DCONST_DVARFLT_bg_rcp_m_accelGoingDown = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_accelGoingDown);
  DCONST_DVARFLT_bg_rcp_m_decelGoingUp = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_decelGoingUp);
  DCONST_DVARFLT_bg_rcp_m_boostAccel = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_boostAccel);
  DCONST_DVARFLT_bg_rcp_m_boostDecel = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_boostDecel);
  DCONST_DVARFLT_bg_rcp_m_topSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_m_topSpeed);
  DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer = Dvar_Deregister(DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer);
  DCONST_DVARFLT_bg_rcp_cam1st_rollSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_rollSpeed);
  DCONST_DVARFLT_bg_rcp_cam1st_rollPercentage = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_rollPercentage);
  DCONST_DVARFLT_bg_rcp_cam1st_offsX = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_offsX);
  DCONST_DVARFLT_bg_rcp_cam1st_offsY = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_offsY);
  DCONST_DVARFLT_bg_rcp_cam1st_offsZ = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_offsZ);
  DCONST_DVARFLT_bg_rcp_cam1st_noisePitchScale = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_noisePitchScale);
  DCONST_DVARFLT_bg_rcp_cam1st_noiseRollScale = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam1st_noiseRollScale);
  DCONST_DVARFLT_bg_rcp_cam3rd_focusX = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam3rd_focusX);
  DCONST_DVARFLT_bg_rcp_cam3rd_focusZ = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam3rd_focusZ);
  DCONST_DVARFLT_bg_rcp_cam3rd_eyeX = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam3rd_eyeX);
  DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ);
  DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed = Dvar_Deregister(DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed);
  DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed);
  DCONST_DVARFLT_bg_rcp_TimeToNextBoost = Dvar_Deregister(DCONST_DVARFLT_bg_rcp_TimeToNextBoost);
  DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default = Dvar_Deregister(DCONST_DVARMODEBOOL_bg_veh_cam_3rdMode_default);
  DCONST_DVARFLT_bg_vehMinSpeedToKillProne = Dvar_Deregister(DCONST_DVARFLT_bg_vehMinSpeedToKillProne);
  DCONST_DVARINT_bg_vehDmgPlayerRateMs = Dvar_Deregister(DCONST_DVARINT_bg_vehDmgPlayerRateMs);
  DCONST_DVARBOOL_bg_vehUseTreadSimulation = Dvar_Deregister(DCONST_DVARBOOL_bg_vehUseTreadSimulation);
  DCONST_DVARBOOL_bg_vehTreadPerturb = Dvar_Deregister(DCONST_DVARBOOL_bg_vehTreadPerturb);
  DVARFLT_fd_camera_default_chase_dist = Dvar_Deregister(DVARFLT_fd_camera_default_chase_dist);
  DVARFLT_fd_camera_default_chase_verticalOffset = Dvar_Deregister(DVARFLT_fd_camera_default_chase_verticalOffset);
  DVARFLT_fd_camera_default_chase_lateralOffset = Dvar_Deregister(DVARFLT_fd_camera_default_chase_lateralOffset);
  DVARFLT_fd_camera_cockpit_chase_dist = Dvar_Deregister(DVARFLT_fd_camera_cockpit_chase_dist);
  DVARFLT_fd_camera_cockpit_chase_verticalOffset = Dvar_Deregister(DVARFLT_fd_camera_cockpit_chase_verticalOffset);
  DVARFLT_fd_camera_cockpit_chase_lateralOffset = Dvar_Deregister(DVARFLT_fd_camera_cockpit_chase_lateralOffset);
  DVARFLT_fd_camera_boat_chase_dist = Dvar_Deregister(DVARFLT_fd_camera_boat_chase_dist);
  DVARFLT_fd_camera_boat_chase_verticalOffset = Dvar_Deregister(DVARFLT_fd_camera_boat_chase_verticalOffset);
  DVARFLT_fd_camera_boat_chase_lateralOffset = Dvar_Deregister(DVARFLT_fd_camera_boat_chase_lateralOffset);
  DCONST_DVARFLT_fd_camera_fov_lerp_speed = Dvar_Deregister(DCONST_DVARFLT_fd_camera_fov_lerp_speed);
  DCONST_DVARFLT_fd_camera_fov_max_delta = Dvar_Deregister(DCONST_DVARFLT_fd_camera_fov_max_delta);
  DCONST_DVARFLT_fd_camera_noise_pitch = Dvar_Deregister(DCONST_DVARFLT_fd_camera_noise_pitch);
  DCONST_DVARFLT_fd_camera_noise_roll = Dvar_Deregister(DCONST_DVARFLT_fd_camera_noise_roll);
  DVARFLT_fd_helicopter_audio_volume_throttle_increase = Dvar_Deregister(DVARFLT_fd_helicopter_audio_volume_throttle_increase);
  DVARFLT_fd_helicopter_audio_pitch_throttle_decrease = Dvar_Deregister(DVARFLT_fd_helicopter_audio_pitch_throttle_decrease);
  DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort = Dvar_Deregister(DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort);
  DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_main_low_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_main_low_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_min);
  DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_max);
  DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_min);
  DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_max = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_max);
  DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_min = Dvar_Deregister(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_min);
  DVARINT_fd_helicopter_fbw_mode_config = Dvar_Deregister(DVARINT_fd_helicopter_fbw_mode_config);
  DVARINT_fd_helicopter_fbw_status = Dvar_Deregister(DVARINT_fd_helicopter_fbw_status);
  DVARINT_fd_camera_mode = Dvar_Deregister(DVARINT_fd_camera_mode);
  DVARFLT_fd_camera_look_rudder_factor = Dvar_Deregister(DVARFLT_fd_camera_look_rudder_factor);
  DVARBOOL_fd_helicopter_start_autotakeoff = Dvar_Deregister(DVARBOOL_fd_helicopter_start_autotakeoff);
  DVARFLT_fd_helicopter_start_autotakeoff_height = Dvar_Deregister(DVARFLT_fd_helicopter_start_autotakeoff_height);
  DVARINT_fd_helicopter_start_spooled = Dvar_Deregister(DVARINT_fd_helicopter_start_spooled);
  DVARINT_fd_helicopter_allow_autostarter = Dvar_Deregister(DVARINT_fd_helicopter_allow_autostarter);
  DVARINT_fd_helicopter_turbine_mode = Dvar_Deregister(DVARINT_fd_helicopter_turbine_mode);
  DVARFLT_fd_helicopter_altitude_speedLimiter_range = Dvar_Deregister(DVARFLT_fd_helicopter_altitude_speedLimiter_range);
  DVARBOOL_fd_helicopter_altitude_speedLimiter = Dvar_Deregister(DVARBOOL_fd_helicopter_altitude_speedLimiter);
  DVARFLT_fd_helicopter_altitude_limiter = Dvar_Deregister(DVARFLT_fd_helicopter_altitude_limiter);
  DVARFLT_fd_helicopter_altitude_limiter_range = Dvar_Deregister(DVARFLT_fd_helicopter_altitude_limiter_range);
  DVARBOOL_fd_helicopter_debug_cockpit = Dvar_Deregister(DVARBOOL_fd_helicopter_debug_cockpit);
  DVARFLT_fd_helicopter_blade_impact_effect = Dvar_Deregister(DVARFLT_fd_helicopter_blade_impact_effect);
  DVARFLT_fd_helicopter_swash_driver = Dvar_Deregister(DVARFLT_fd_helicopter_swash_driver);
  DVARFLT_fd_helicopter_force_rotor_rpm = Dvar_Deregister(DVARFLT_fd_helicopter_force_rotor_rpm);
  DVARBOOL_fd_helicopter_force_stationary = Dvar_Deregister(DVARBOOL_fd_helicopter_force_stationary);
  DVARINT_fd_helicopter_show_blade_index = Dvar_Deregister(DVARINT_fd_helicopter_show_blade_index);
  DVARINT_fd_helicopter_hide_static_blade_index = Dvar_Deregister(DVARINT_fd_helicopter_hide_static_blade_index);
  DVARINT_fd_helicopter_hide_blur_blade_index = Dvar_Deregister(DVARINT_fd_helicopter_hide_blur_blade_index);
  DVARINT_fd_helicopter_show_static_blade_index = Dvar_Deregister(DVARINT_fd_helicopter_show_static_blade_index);
  DVARINT_fd_helicopter_show_blur_blade_index = Dvar_Deregister(DVARINT_fd_helicopter_show_blur_blade_index);
  DVARBOOL_fd_helicopter_fbw_enhancer = Dvar_Deregister(DVARBOOL_fd_helicopter_fbw_enhancer);
  DVARBOOL_fd_helicopter_start_no_input_before_spoolup = Dvar_Deregister(DVARBOOL_fd_helicopter_start_no_input_before_spoolup);
  DVARFLT_fd_helicopter_start_spoolup_speed = Dvar_Deregister(DVARFLT_fd_helicopter_start_spoolup_speed);
  DVARBOOL_fd_pmove_use_alternate_blend = Dvar_Deregister(DVARBOOL_fd_pmove_use_alternate_blend);
  DCONST_DVARFLT_bg_vehNetLerpSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetLerpSpeed);
  DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc);
  DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec);
  DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY);
  DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ);
  DVARINT_bg_vehNetNoClientGeoMode = Dvar_Deregister(DVARINT_bg_vehNetNoClientGeoMode);
  DCONST_DVARFLT_bg_vehNetWeight0 = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetWeight0);
  DCONST_DVARFLT_bg_vehNetWeight1 = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetWeight1);
  DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetNoClientGeoCooldown);
  DCONST_DVARFLT_bg_vehScrLookAheadTimeServer = Dvar_Deregister(DCONST_DVARFLT_bg_vehScrLookAheadTimeServer);
  DCONST_DVARFLT_bg_vehScrLookAheadTimeClient = Dvar_Deregister(DCONST_DVARFLT_bg_vehScrLookAheadTimeClient);
  DCONST_DVARFLT_bg_vehPlayerCollAhead = Dvar_Deregister(DCONST_DVARFLT_bg_vehPlayerCollAhead);
  DCONST_DVARFLT_bg_vehNetManualExtrap = Dvar_Deregister(DCONST_DVARFLT_bg_vehNetManualExtrap);
  DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult);
  DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult);
  DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist);
  DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle);
  DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff);
  DCONST_DVARFLT_bg_pathFollowerMinYawAccel = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerMinYawAccel);
  DCONST_DVARFLT_bg_pathFollowerMaxYawAccel = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerMaxYawAccel);
  DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed);
  DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed);
  DCONST_DVARMPFLT_bg_pathFollowerFriction = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerFriction);
  DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed);
  DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock);
  DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock);
  DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked);
  DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl);
  DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime = Dvar_Deregister(DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime);
  DCONST_DVARBOOL_bg_vehcamUseDvars = Dvar_Deregister(DCONST_DVARBOOL_bg_vehcamUseDvars);
  DCONST_DVARFLT_bg_vehcamPivotZ = Dvar_Deregister(DCONST_DVARFLT_bg_vehcamPivotZ);
  DCONST_DVARFLT_bg_vehcamPivotX = Dvar_Deregister(DCONST_DVARFLT_bg_vehcamPivotX);
  DCONST_DVARFLT_bg_vehcamRange = Dvar_Deregister(DCONST_DVARFLT_bg_vehcamRange);
  DCONST_DVARFLT_bg_vehcamYawTurn = Dvar_Deregister(DCONST_DVARFLT_bg_vehcamYawTurn);
  DCONST_DVARBOOL_bg_vehCamAdjustOnDrift = Dvar_Deregister(DCONST_DVARBOOL_bg_vehCamAdjustOnDrift);
  DCONST_DVARFLT_bg_vehCamFovDeltaSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamFovDeltaSpeed);
  DCONST_DVARFLT_bg_vehCamFovDeltaSpeedClosing = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamFovDeltaSpeedClosing);
  DCONST_DVARFLT_bg_vehCamPitchSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamPitchSpeed);
  DCONST_DVARFLT_bg_vehCamRangeSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamRangeSpeed);
  DCONST_DVARFLT_bg_vehCamPitchAddTime = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamPitchAddTime);
  DCONST_DVARFLT_bg_vehCamLerpSpeedAir = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamLerpSpeedAir);
  DCONST_DVARFLT_bg_vehCamLerpSpeedDrift = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamLerpSpeedDrift);
  DCONST_DVARFLT_bg_vehCamFovDeltaAir = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamFovDeltaAir);
  DCONST_DVARFLT_bg_vehCamFovDeltaDecel = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamFovDeltaDecel);
  DCONST_DVARFLT_bg_vehCamMouseReturnTime = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamMouseReturnTime);
  DCONST_DVARFLT_bg_vehCamPolarElevThreshold = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamPolarElevThreshold);
  DCONST_DVARFLT_bg_vehCamPolarElevFactor = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamPolarElevFactor);
  DCONST_DVARFLT_bg_vehCamLerpBackAfterHit = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamLerpBackAfterHit);
  DCONST_DVARFLT_bg_deathCamVehPlaneOffset = Dvar_Deregister(DCONST_DVARFLT_bg_deathCamVehPlaneOffset);
  DCONST_DVARFLT_bg_deathCamVehVertOffset = Dvar_Deregister(DCONST_DVARFLT_bg_deathCamVehVertOffset);
  DCONST_DVARFLT_bg_deathCamTurretVertOffset = Dvar_Deregister(DCONST_DVARFLT_bg_deathCamTurretVertOffset);
  DCONST_DVARFLT_bg_deathCamTurretBackOffset = Dvar_Deregister(DCONST_DVARFLT_bg_deathCamTurretBackOffset);
  DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg = Dvar_Deregister(DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg);
  DVARBOOL_bg_vehKillcamTraceShort = Dvar_Deregister(DVARBOOL_bg_vehKillcamTraceShort);
  DCONST_DVARMPBOOL_bg_vehVelDamping = Dvar_Deregister(DCONST_DVARMPBOOL_bg_vehVelDamping);
  DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed);
  DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed);
  DCONST_DVARFLT_bg_vehMaxYawSpeedHB = Dvar_Deregister(DCONST_DVARFLT_bg_vehMaxYawSpeedHB);
  DCONST_DVARFLT_bg_vehSteerSlow = Dvar_Deregister(DCONST_DVARFLT_bg_vehSteerSlow);
  DCONST_DVARFLT_bg_vehOverSteerSlow = Dvar_Deregister(DCONST_DVARFLT_bg_vehOverSteerSlow);
  DCONST_DVARFLT_bg_vehUTurnDrift = Dvar_Deregister(DCONST_DVARFLT_bg_vehUTurnDrift);
  DCONST_DVARFLT_bg_vehShiftGears = Dvar_Deregister(DCONST_DVARFLT_bg_vehShiftGears);
  DCONST_DVARFLT_bg_vehAxleDirMult = Dvar_Deregister(DCONST_DVARFLT_bg_vehAxleDirMult);
  DCONST_DVARFLT_bg_vehYawMaxIncrease = Dvar_Deregister(DCONST_DVARFLT_bg_vehYawMaxIncrease);
  DCONST_DVARFLT_bg_vehAtvMaxEngineAir = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvMaxEngineAir);
  DCONST_DVARFLT_bg_vehTimeToSkid = Dvar_Deregister(DCONST_DVARFLT_bg_vehTimeToSkid);
  DCONST_DVARFLT_bg_vehSpeedSkidThreshold = Dvar_Deregister(DCONST_DVARFLT_bg_vehSpeedSkidThreshold);
  DCONST_DVARFLT_bg_vehEngineMinTimeFirstGear = Dvar_Deregister(DCONST_DVARFLT_bg_vehEngineMinTimeFirstGear);
  DCONST_DVARFLT_bg_vehEngineSpeedPointSwitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehEngineSpeedPointSwitch);
  DCONST_DVARFLT_bg_vehEngineNotMovingTol = Dvar_Deregister(DCONST_DVARFLT_bg_vehEngineNotMovingTol);
  DCONST_DVARFLT_bg_vehEngineOptRPMOffset = Dvar_Deregister(DCONST_DVARFLT_bg_vehEngineOptRPMOffset);
  DCONST_DVARFLT_bg_vehAirTimeWithEngine = Dvar_Deregister(DCONST_DVARFLT_bg_vehAirTimeWithEngine);
  DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv = Dvar_Deregister(DCONST_DVARFLT_bg_vehAirTimeWithEngineAtv);
  DCONST_DVARFLT_bg_vehAtvWheelieIncl = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvWheelieIncl);
  DCONST_DVARFLT_bg_vehForceGas = Dvar_Deregister(DCONST_DVARFLT_bg_vehForceGas);
  DCONST_DVARFLT_bg_vehMinVertSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehMinVertSpeed);
  DCONST_DVARFLT_bg_vehMaxVertSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehMaxVertSpeed);
  DCONST_DVARFLT_bg_vehAdjustCollVelTime = Dvar_Deregister(DCONST_DVARFLT_bg_vehAdjustCollVelTime);
  DCONST_DVARFLT_bg_vehInclThresForFric = Dvar_Deregister(DCONST_DVARFLT_bg_vehInclThresForFric);
  DCONST_DVARBOOL_bg_vehFixResetSkeleton = Dvar_Deregister(DCONST_DVARBOOL_bg_vehFixResetSkeleton);
  DCONST_DVARBOOL_bg_vehDebugVptr = Dvar_Deregister(DCONST_DVARBOOL_bg_vehDebugVptr);
  DCONST_DVARINT_bg_vehMaxWheelCountForFx = Dvar_Deregister(DCONST_DVARINT_bg_vehMaxWheelCountForFx);
  DCONST_DVARFLT_bg_vehWheelOffsetForFx = Dvar_Deregister(DCONST_DVARFLT_bg_vehWheelOffsetForFx);
  DCONST_DVARFLT_bg_vehContactAheadForFx = Dvar_Deregister(DCONST_DVARFLT_bg_vehContactAheadForFx);
  DCONST_DVARFLT_bg_vehDelayForImpactFx = Dvar_Deregister(DCONST_DVARFLT_bg_vehDelayForImpactFx);
  DCONST_DVARFLT_bg_vehFxKFThresholdDriving = Dvar_Deregister(DCONST_DVARFLT_bg_vehFxKFThresholdDriving);
  DCONST_DVARFLT_bg_vehFxKFLongOffs = Dvar_Deregister(DCONST_DVARFLT_bg_vehFxKFLongOffs);
  DCONST_DVARFLT_bg_vehFxKFWidthOffs = Dvar_Deregister(DCONST_DVARFLT_bg_vehFxKFWidthOffs);
  DCONST_DVARFLT_bg_vehFxKFHeightFac = Dvar_Deregister(DCONST_DVARFLT_bg_vehFxKFHeightFac);
  DCONST_DVARFLT_bg_vehFxKFMaxDist = Dvar_Deregister(DCONST_DVARFLT_bg_vehFxKFMaxDist);
  DCONST_DVARINT_bg_vehEvHornShortTime = Dvar_Deregister(DCONST_DVARINT_bg_vehEvHornShortTime);
  DCONST_DVARINT_bg_vehEvHornLongTime = Dvar_Deregister(DCONST_DVARINT_bg_vehEvHornLongTime);
  DCONST_DVARBOOL_manuuse = Dvar_Deregister(DCONST_DVARBOOL_manuuse);
  DVARBOOL_manudump = Dvar_Deregister(DVARBOOL_manudump);
  DVARFLT_manu0 = Dvar_Deregister(DVARFLT_manu0);
  DVARFLT_manu1 = Dvar_Deregister(DVARFLT_manu1);
  DVARFLT_manu2 = Dvar_Deregister(DVARFLT_manu2);
  DVARFLT_manu3 = Dvar_Deregister(DVARFLT_manu3);
  DVARFLT_manu4 = Dvar_Deregister(DVARFLT_manu4);
  DVARFLT_manu5 = Dvar_Deregister(DVARFLT_manu5);
  DVARFLT_manu6 = Dvar_Deregister(DVARFLT_manu6);
  DVARFLT_manu7 = Dvar_Deregister(DVARFLT_manu7);
  DVARFLT_manu8 = Dvar_Deregister(DVARFLT_manu8);
  DVARFLT_manu9 = Dvar_Deregister(DVARFLT_manu9);
  DVARFLT_manu10 = Dvar_Deregister(DVARFLT_manu10);
  DVARFLT_manu11 = Dvar_Deregister(DVARFLT_manu11);
  DVARFLT_manu12 = Dvar_Deregister(DVARFLT_manu12);
  DVARFLT_manu13 = Dvar_Deregister(DVARFLT_manu13);
  DVARFLT_manu14 = Dvar_Deregister(DVARFLT_manu14);
  DVARFLT_manu15 = Dvar_Deregister(DVARFLT_manu15);
  DVARFLT_manu16 = Dvar_Deregister(DVARFLT_manu16);
  DVARFLT_manu17 = Dvar_Deregister(DVARFLT_manu17);
  DVARFLT_manu18 = Dvar_Deregister(DVARFLT_manu18);
  DVARFLT_manu19 = Dvar_Deregister(DVARFLT_manu19);
  DVARFLT_manu20 = Dvar_Deregister(DVARFLT_manu20);
  DVARFLT_manu21 = Dvar_Deregister(DVARFLT_manu21);
  DVARFLT_manu22 = Dvar_Deregister(DVARFLT_manu22);
  DVARFLT_manu23 = Dvar_Deregister(DVARFLT_manu23);
  DVARBOOL_bg_vehEnableInverseView = Dvar_Deregister(DVARBOOL_bg_vehEnableInverseView);
  DVARBOOL_bg_vehAtvNoiseAnim = Dvar_Deregister(DVARBOOL_bg_vehAtvNoiseAnim);
  DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvNoiseAnimNoisePitch);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg2 = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCamFovDeltaNeg2);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedPolarMax = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedPolarMax);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange);
  DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCollImp = Dvar_Deregister(DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedCollImp);
  DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring = Dvar_Deregister(DCONST_DVARBOOL_bg_vehEnhanceSenseOfSpeedFovSpring);
  DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve = Dvar_Deregister(DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve);
  DCONST_DVARFLT_cspringThreshold = Dvar_Deregister(DCONST_DVARFLT_cspringThreshold);
  DCONST_DVARFLT_cspringMaxT = Dvar_Deregister(DCONST_DVARFLT_cspringMaxT);
  DCONST_DVARFLT_cspringMinT = Dvar_Deregister(DCONST_DVARFLT_cspringMinT);
  DCONST_DVARFLT_cspringD = Dvar_Deregister(DCONST_DVARFLT_cspringD);
  DCONST_DVARFLT_cspringF = Dvar_Deregister(DCONST_DVARFLT_cspringF);
  DCONST_DVARINT_cspringTmode = Dvar_Deregister(DCONST_DVARINT_cspringTmode);
  DCONST_DVARINT_bg_vehicleScriptableDamageMult = Dvar_Deregister(DCONST_DVARINT_bg_vehicleScriptableDamageMult);
  DCONST_DVARFLT_bg_vehWheelAirGravTime = Dvar_Deregister(DCONST_DVARFLT_bg_vehWheelAirGravTime);
  DCONST_DVARFLT_bg_vehWheelAirGravTimeAtv = Dvar_Deregister(DCONST_DVARFLT_bg_vehWheelAirGravTimeAtv);
  DCONST_DVARFLT_bg_vehForceGrav = Dvar_Deregister(DCONST_DVARFLT_bg_vehForceGrav);
  DCONST_DVARFLT_bg_vehForceGravHeavy = Dvar_Deregister(DCONST_DVARFLT_bg_vehForceGravHeavy);
  DCONST_DVARFLT_bg_vehForceGravAtv = Dvar_Deregister(DCONST_DVARFLT_bg_vehForceGravAtv);
  DCONST_DVARFLT_bg_vehWheelAirGravAfterColl = Dvar_Deregister(DCONST_DVARFLT_bg_vehWheelAirGravAfterColl);
  DCONST_DVARFLT_bg_vehEngineDriftRatio = Dvar_Deregister(DCONST_DVARFLT_bg_vehEngineDriftRatio);
  DCONST_DVARFLT_bg_vehSpeedThesholdForGravity = Dvar_Deregister(DCONST_DVARFLT_bg_vehSpeedThesholdForGravity);
  DCONST_DVARFLT_bg_vehMinExtraGravity = Dvar_Deregister(DCONST_DVARFLT_bg_vehMinExtraGravity);
  DCONST_DVARFLT_bg_vehDampFwMomentum = Dvar_Deregister(DCONST_DVARFLT_bg_vehDampFwMomentum);
  DCONST_DVARFLT_bg_vehDampFwMomentumAtv = Dvar_Deregister(DCONST_DVARFLT_bg_vehDampFwMomentumAtv);
  DCONST_DVARFLT_bg_vehAirSteerFac = Dvar_Deregister(DCONST_DVARFLT_bg_vehAirSteerFac);
  DCONST_DVARFLT_bg_vehAtvDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvDamp);
  DCONST_DVARFLT_bg_vehAtvDampAir = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvDampAir);
  DCONST_DVARFLT_bg_vehAtvInclToStabilize = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvInclToStabilize);
  DCONST_DVARFLT_bg_vehBrakingEngineOffset = Dvar_Deregister(DCONST_DVARFLT_bg_vehBrakingEngineOffset);
  DCONST_DVARFLT_bg_vehCamAtvDisplFrom = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamAtvDisplFrom);
  DCONST_DVARFLT_bg_vehCamRangeAddMin = Dvar_Deregister(DCONST_DVARFLT_bg_vehCamRangeAddMin);
  DCONST_DVARFLT_bg_vehDampRoll = Dvar_Deregister(DCONST_DVARFLT_bg_vehDampRoll);
  DCONST_DVARFLT_bg_vehDampPitch = Dvar_Deregister(DCONST_DVARFLT_bg_vehDampPitch);
  DCONST_DVARFLT_bg_vehAirMaxGravMult = Dvar_Deregister(DCONST_DVARFLT_bg_vehAirMaxGravMult);
  DCONST_DVARINT_bg_vehCamNoiseSpace = Dvar_Deregister(DCONST_DVARINT_bg_vehCamNoiseSpace);
  DCONST_DVARFLT_bg_vehAtvAirPitchControl = Dvar_Deregister(DCONST_DVARFLT_bg_vehAtvAirPitchControl);
  DCONST_DVARFLT_bg_vehZoscarEngineForce = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarEngineForce);
  DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint = Dvar_Deregister(DCONST_DVARVEC3_bg_vehZoscarEngineOffsetPoint);
  DCONST_DVARVEC3_bg_vehZoscarHalfsize = Dvar_Deregister(DCONST_DVARVEC3_bg_vehZoscarHalfsize);
  DCONST_DVARVEC3_bg_vehZoscarCoMLs = Dvar_Deregister(DCONST_DVARVEC3_bg_vehZoscarCoMLs);
  DCONST_DVARINT_bg_vehZoscarBuoyancySpheres = Dvar_Deregister(DCONST_DVARINT_bg_vehZoscarBuoyancySpheres);
  DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarBuoyancySphereRadius);
  DCONST_DVARFLT_bg_vehZoscarSteering = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarSteering);
  DCONST_DVARFLT_bg_vehZoscarLateralDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarLateralDamp);
  DCONST_DVARFLT_bg_vehZoscarYawDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarYawDamp);
  DCONST_DVARFLT_bg_vehZoscarPitchDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarPitchDamp);
  DCONST_DVARFLT_bg_vehZoscarRollDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarRollDamp);
  DCONST_DVARFLT_bg_vehZoscarFluidDensity = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarFluidDensity);
  DCONST_DVARFLT_bg_vehZoscarFluidGrav = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarFluidGrav);
  DCONST_DVARFLT_bg_vehZoscarFluidDamp = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarFluidDamp);
  DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarYawMaxSpeed);
  DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarRollMaxSpeed);
  DCONST_DVARFLT_bg_vehZoscarExtraGrav = Dvar_Deregister(DCONST_DVARFLT_bg_vehZoscarExtraGrav);
  DCONST_DVARVEC3_bg_vehZoscarNoiseParms = Dvar_Deregister(DCONST_DVARVEC3_bg_vehZoscarNoiseParms);
  DVARBOOL_bg_vehHandleVehicleNullPtr = Dvar_Deregister(DVARBOOL_bg_vehHandleVehicleNullPtr);
  DVARFLT_bg_atangoReverseTopSpeedMPH = Dvar_Deregister(DVARFLT_bg_atangoReverseTopSpeedMPH);
  DVARFLT_bg_tromeoReverseTopSpeedMPH = Dvar_Deregister(DVARFLT_bg_tromeoReverseTopSpeedMPH);
  DVARFLT_bg_dechoReverseTopSpeedMPH = Dvar_Deregister(DVARFLT_bg_dechoReverseTopSpeedMPH);
  DVARFLT_bg_mkiloReverseTopSpeedMPH = Dvar_Deregister(DVARFLT_bg_mkiloReverseTopSpeedMPH);
  DVARFLT_bg_atangoReverseAccelFactor = Dvar_Deregister(DVARFLT_bg_atangoReverseAccelFactor);
  DVARFLT_bg_tromeoReverseAccelFactor = Dvar_Deregister(DVARFLT_bg_tromeoReverseAccelFactor);
  DVARFLT_bg_dechoReverseAccelFactor = Dvar_Deregister(DVARFLT_bg_dechoReverseAccelFactor);
  DVARFLT_bg_mkiloReverseAccelFactor = Dvar_Deregister(DVARFLT_bg_mkiloReverseAccelFactor);
  DVARFLT_bg_vehBrakingEngineMult = Dvar_Deregister(DVARFLT_bg_vehBrakingEngineMult);
  DVARFLT_bg_vehBrakingEngineMultAtv = Dvar_Deregister(DVARFLT_bg_vehBrakingEngineMultAtv);
  DVARBOOL_vehicle_horn_enabled = Dvar_Deregister(DVARBOOL_vehicle_horn_enabled);
  DVARBOOL_vehicle_horn_heli_tag = Dvar_Deregister(DVARBOOL_vehicle_horn_heli_tag);
  DVARBOOL_bg_vehSurfaceVelocity = Dvar_Deregister(DVARBOOL_bg_vehSurfaceVelocity);
  DVARBOOL_bg_vehicleEnableCamoVFX = Dvar_Deregister(DVARBOOL_bg_vehicleEnableCamoVFX);
  DCONST_DVARBOOL_bg_vehicleEnableCamoVFXDebugDraw = Dvar_Deregister(DCONST_DVARBOOL_bg_vehicleEnableCamoVFXDebugDraw);
  DVARFLT_bg_vehiclePlayTailLightSpeedThreshold = Dvar_Deregister(DVARFLT_bg_vehiclePlayTailLightSpeedThreshold);
  DVARBOOL_vehicle_tireblown_enabled = Dvar_Deregister(DVARBOOL_vehicle_tireblown_enabled);
  DVARBOOL_bg_vehicleStopHornBeforePlay = Dvar_Deregister(DVARBOOL_bg_vehicleStopHornBeforePlay);
  DCONST_DVARFLT_bg_vehFlatTireImpK = Dvar_Deregister(DCONST_DVARFLT_bg_vehFlatTireImpK);
  DCONST_DVARFLT_bg_vehFlatTireSuspK = Dvar_Deregister(DCONST_DVARFLT_bg_vehFlatTireSuspK);
  DCONST_DVARFLT_bg_vehFlatTireRad = Dvar_Deregister(DCONST_DVARFLT_bg_vehFlatTireRad);
  DCONST_DVARBOOL_bg_vehSteeringNew = Dvar_Deregister(DCONST_DVARBOOL_bg_vehSteeringNew);
  DCONST_DVARBOOL_deploy_debug = Dvar_Deregister(DCONST_DVARBOOL_deploy_debug);
  DCONST_DVARFLT_deploy_maxWalkableSlopeAngle = Dvar_Deregister(DCONST_DVARFLT_deploy_maxWalkableSlopeAngle);
  DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck = Dvar_Deregister(DCONST_DVARFLT_deploy_maxSkyDistanceRayCheck);
  DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck = Dvar_Deregister(DCONST_DVARFLT_deploy_maxSkyDistanceShapeCheck);
  DCONST_DVARFLT_deploy_penTestSurfaceOffset = Dvar_Deregister(DCONST_DVARFLT_deploy_penTestSurfaceOffset);
  DCONST_DVARFLT_deploy_overhangTestOffset = Dvar_Deregister(DCONST_DVARFLT_deploy_overhangTestOffset);
  DCONST_DVARBOOL_deploy_killFx = Dvar_Deregister(DCONST_DVARBOOL_deploy_killFx);
  DCONST_DVARBOOL_deploy_testMissileClip = Dvar_Deregister(DCONST_DVARBOOL_deploy_testMissileClip);
  DCONST_DVARFLT_deploy_minPitchToSkipForced = Dvar_Deregister(DCONST_DVARFLT_deploy_minPitchToSkipForced);
  DCONST_DVARFLT_deploy_offsetForwardOnEdge = Dvar_Deregister(DCONST_DVARFLT_deploy_offsetForwardOnEdge);
  DCONST_DVARBOOL_splinetracer_debug = Dvar_Deregister(DCONST_DVARBOOL_splinetracer_debug);
  DCONST_DVARINT_splinetracer_debug_spline_line_count = Dvar_Deregister(DCONST_DVARINT_splinetracer_debug_spline_line_count);
  DCONST_DVARFLT_splinetracer_cp1_distance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp1_distance);
  DCONST_DVARFLT_splinetracer_cp1_angle = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp1_angle);
  DCONST_DVARFLT_splinetracer_cp2_distance_ratio = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp2_distance_ratio);
  DCONST_DVARFLT_splinetracer_cp2_angle = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp2_angle);
  DCONST_DVARFLT_splinetracer_no_target_cp1_distance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_no_target_cp1_distance);
  DCONST_DVARFLT_splinetracer_no_target_cp1_angle = Dvar_Deregister(DCONST_DVARFLT_splinetracer_no_target_cp1_angle);
  DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio = Dvar_Deregister(DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio);
  DCONST_DVARFLT_splinetracer_no_target_cp2_angle = Dvar_Deregister(DCONST_DVARFLT_splinetracer_no_target_cp2_angle);
  DCONST_DVARINT_splinetracer_line_trace_count_for_spline = Dvar_Deregister(DCONST_DVARINT_splinetracer_line_trace_count_for_spline);
  DCONST_DVARFLT_splinetracer_collinear_assumption_angle = Dvar_Deregister(DCONST_DVARFLT_splinetracer_collinear_assumption_angle);
  DCONST_DVARFLT_splinetracer_angleForMaxUpwardsCurveContribution = Dvar_Deregister(DCONST_DVARFLT_splinetracer_angleForMaxUpwardsCurveContribution);
  DCONST_DVARFLT_splinetracer_catchUpTime = Dvar_Deregister(DCONST_DVARFLT_splinetracer_catchUpTime);
  DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity = Dvar_Deregister(DCONST_DVARFLT_splinetracer_noCollisionPathSearchMaxAngularVelocity);
  DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity = Dvar_Deregister(DCONST_DVARFLT_splinetracer_catchUpTimeReductionStartAngularVelocity);
  DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity = Dvar_Deregister(DCONST_DVARFLT_splinetracer_catchUpTimeReductionEndAngularVelocity);
  DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance);
  DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance);
  DCONST_DVARFLT_splinetracer_extremeCurveClosestDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_extremeCurveClosestDistance);
  DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance);
  DCONST_DVARFLT_splinetracer_cp1_scalarMin = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp1_scalarMin);
  DCONST_DVARFLT_splinetracer_cp1_scalarMax = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp1_scalarMax);
  DCONST_DVARFLT_splinetracer_cp1_normalizedDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp1_normalizedDistance);
  DCONST_DVARFLT_splinetracer_cp2_scalarMin = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp2_scalarMin);
  DCONST_DVARFLT_splinetracer_cp2_scalarMax = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp2_scalarMax);
  DCONST_DVARFLT_splinetracer_cp2_normalizedDistance = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cp2_normalizedDistance);
  DCONST_DVARFLT_splinetracer_cpScalarRangeMin = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cpScalarRangeMin);
  DCONST_DVARFLT_splinetracer_cpScalarRangeMax = Dvar_Deregister(DCONST_DVARFLT_splinetracer_cpScalarRangeMax);
  DVARFLT_spaceJumpMinTime = Dvar_Deregister(DVARFLT_spaceJumpMinTime);
  DVARFLT_spaceJumpSpeed = Dvar_Deregister(DVARFLT_spaceJumpSpeed);
  DVARINT_spaceJumpDebug = Dvar_Deregister(DVARINT_spaceJumpDebug);
  DVARFLT_spaceJumpTimerTakeoff = Dvar_Deregister(DVARFLT_spaceJumpTimerTakeoff);
  DVARFLT_spaceJumpTimerLand = Dvar_Deregister(DVARFLT_spaceJumpTimerLand);
  DVARFLT_spaceJumpTimerFail = Dvar_Deregister(DVARFLT_spaceJumpTimerFail);
  DVARBOOL_spaceJumpTimerTakeoffUseAnimTime = Dvar_Deregister(DVARBOOL_spaceJumpTimerTakeoffUseAnimTime);
  DVARVEC3_spaceJumpDeathAngularVelocity = Dvar_Deregister(DVARVEC3_spaceJumpDeathAngularVelocity);
  DVARFLT_spaceJumpDeathLinearVelocity = Dvar_Deregister(DVARFLT_spaceJumpDeathLinearVelocity);
  DVARFLT_spaceJumpDeathAngularLerpStrength = Dvar_Deregister(DVARFLT_spaceJumpDeathAngularLerpStrength);
  DVARFLT_spaceJumpCoverTraceRadius = Dvar_Deregister(DVARFLT_spaceJumpCoverTraceRadius);
  DVARFLT_spaceJumpCoverTraceOffset = Dvar_Deregister(DVARFLT_spaceJumpCoverTraceOffset);
  DVARFLT_spaceJumpCoverTraceDist = Dvar_Deregister(DVARFLT_spaceJumpCoverTraceDist);
  DVARFLT_spaceJumpFlatNormalCheck = Dvar_Deregister(DVARFLT_spaceJumpFlatNormalCheck);
  DVARFLT_spaceJumpFlatDistCheck = Dvar_Deregister(DVARFLT_spaceJumpFlatDistCheck);
  DVARFLT_spaceJumpHeightCheck = Dvar_Deregister(DVARFLT_spaceJumpHeightCheck);
  DVARFLT_spaceJumpCurveTimeVignette = Dvar_Deregister(DVARFLT_spaceJumpCurveTimeVignette);
  DVARFLT_spaceJumpCurveTimeCombat = Dvar_Deregister(DVARFLT_spaceJumpCurveTimeCombat);
  DVARFLT_spaceJumpGrappleAccelTime = Dvar_Deregister(DVARFLT_spaceJumpGrappleAccelTime);
  DVARFLT_spaceJumpGrappleTimerCancel = Dvar_Deregister(DVARFLT_spaceJumpGrappleTimerCancel);
  DVARFLT_spaceJumpGrappleViewRange = Dvar_Deregister(DVARFLT_spaceJumpGrappleViewRange);
  DVARFLT_spaceJumpGrappleLandPitchDown = Dvar_Deregister(DVARFLT_spaceJumpGrappleLandPitchDown);
  DVARFLT_spaceJumpGrappleLandPitchMover = Dvar_Deregister(DVARFLT_spaceJumpGrappleLandPitchMover);
  DVARINT_spaceJumpVignetteType = Dvar_Deregister(DVARINT_spaceJumpVignetteType);
  DVARBOOL_spaceJumpVignetteUnlinkWithTagOriginAngles = Dvar_Deregister(DVARBOOL_spaceJumpVignetteUnlinkWithTagOriginAngles);
  DVARBOOL_spaceJumpAllowAILandings = Dvar_Deregister(DVARBOOL_spaceJumpAllowAILandings);
  DVARBOOL_spaceJumpSpringCamActive = Dvar_Deregister(DVARBOOL_spaceJumpSpringCamActive);
  DVARFLT_spaceJumpSpringCamMaxAngle = Dvar_Deregister(DVARFLT_spaceJumpSpringCamMaxAngle);
  DVARFLT_spaceJumpSpringCamStrength = Dvar_Deregister(DVARFLT_spaceJumpSpringCamStrength);
  DVARFLT_spaceJumpLandGestureTimeOffset = Dvar_Deregister(DVARFLT_spaceJumpLandGestureTimeOffset);
  DCONST_DVARBOOL_smartPellet_debug = Dvar_Deregister(DCONST_DVARBOOL_smartPellet_debug);
  DCONST_DVARFLT_smartPellet_maxTargetAngle = Dvar_Deregister(DCONST_DVARFLT_smartPellet_maxTargetAngle);
  DCONST_DVARINT_smartPellet_clientErrorCorrectionInterpTimeMs = Dvar_Deregister(DCONST_DVARINT_smartPellet_clientErrorCorrectionInterpTimeMs);
  DCONST_DVARMPBOOL_targetAssist_targetMissiles = Dvar_Deregister(DCONST_DVARMPBOOL_targetAssist_targetMissiles);
  DCONST_DVARMPFLT_targetAssist_shieldMaxAngle = Dvar_Deregister(DCONST_DVARMPFLT_targetAssist_shieldMaxAngle);
  DCONST_DVARBOOL_targetAssist_debug = Dvar_Deregister(DCONST_DVARBOOL_targetAssist_debug);
  DCONST_DVARINT_targetAssist_debugDrawDuration = Dvar_Deregister(DCONST_DVARINT_targetAssist_debugDrawDuration);
  DCONST_DVARFLT_aim_automelee_thirdPersonAngle = Dvar_Deregister(DCONST_DVARFLT_aim_automelee_thirdPersonAngle);
  DVARINT_scriptable_runtime_instance_base = Dvar_Deregister(DVARINT_scriptable_runtime_instance_base);
  DVARINT_scriptable_runtime_instance_per_player = Dvar_Deregister(DVARINT_scriptable_runtime_instance_per_player);
  DVARINT_scriptable_runtime_instance_per_agent = Dvar_Deregister(DVARINT_scriptable_runtime_instance_per_agent);
  DVARINT_scriptable_runtime_parts_base_count = Dvar_Deregister(DVARINT_scriptable_runtime_parts_base_count);
  DVARINT_scriptable_runtime_parts_per_player = Dvar_Deregister(DVARINT_scriptable_runtime_parts_per_player);
  DVARINT_scriptable_runtime_parts_per_agent = Dvar_Deregister(DVARINT_scriptable_runtime_parts_per_agent);
  DCONST_DVARBOOL_scriptable_debug = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug);
  DVARBOOL_scriptable_debug_memory = Dvar_Deregister(DVARBOOL_scriptable_debug_memory);
  DVARBOOL_scriptable_debug_reserved = Dvar_Deregister(DVARBOOL_scriptable_debug_reserved);
  DVARBOOL_scriptable_debug_defs = Dvar_Deregister(DVARBOOL_scriptable_debug_defs);
  DVARINT_scriptable_debug_defId = Dvar_Deregister(DVARINT_scriptable_debug_defId);
  DCONST_DVARBOOL_scriptable_debug_determinism = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_determinism);
  DVARBOOL_scriptable_debug_instances = Dvar_Deregister(DVARBOOL_scriptable_debug_instances);
  DVARINT_scriptable_debug_instanceId = Dvar_Deregister(DVARINT_scriptable_debug_instanceId);
  DVARINT_scriptable_debugDisplayOffsetX = Dvar_Deregister(DVARINT_scriptable_debugDisplayOffsetX);
  DVARINT_scriptable_debugDisplayOffsetY = Dvar_Deregister(DVARINT_scriptable_debugDisplayOffsetY);
  DVARBOOL_scriptable_debugLinking = Dvar_Deregister(DVARBOOL_scriptable_debugLinking);
  DVARBOOL_scriptable_debugReservedCount = Dvar_Deregister(DVARBOOL_scriptable_debugReservedCount);
  DVARBOOL_scriptable_debugAnalytics_Count = Dvar_Deregister(DVARBOOL_scriptable_debugAnalytics_Count);
  DVARBOOL_scriptable_debugAnalytics_PartCount = Dvar_Deregister(DVARBOOL_scriptable_debugAnalytics_PartCount);
  DVARBOOL_scriptable_debugAnalytics_Memory = Dvar_Deregister(DVARBOOL_scriptable_debugAnalytics_Memory);
  DVARBOOL_scriptable_debugAnalytics_StateChange = Dvar_Deregister(DVARBOOL_scriptable_debugAnalytics_StateChange);
  DVARBOOL_scriptable_debugAnalytics_CollisionActivation = Dvar_Deregister(DVARBOOL_scriptable_debugAnalytics_CollisionActivation);
  DVARSTR_scriptabledebug_scriptablefilter = Dvar_Deregister(DVARSTR_scriptabledebug_scriptablefilter);
  DVARSTR_scriptabledebug_partfilter = Dvar_Deregister(DVARSTR_scriptabledebug_partfilter);
  DVARSTR_scriptabledebug_statefilter = Dvar_Deregister(DVARSTR_scriptabledebug_statefilter);
  DVARSTR_scriptabledebug_eventfilter = Dvar_Deregister(DVARSTR_scriptabledebug_eventfilter);
  DCONST_DVARBOOL_scriptable_debug_drawInWorld = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_drawInWorld);
  DCONST_DVARBOOL_scriptable_debug_inspectLookAt = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_inspectLookAt);
  DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance = Dvar_Deregister(DCONST_DVARFLT_scriptable_debug_inspectLookAtDistance);
  DCONST_DVARINT_scriptable_debug_message_client = Dvar_Deregister(DCONST_DVARINT_scriptable_debug_message_client);
  DCONST_DVARINT_scriptable_debug_message_throttle = Dvar_Deregister(DCONST_DVARINT_scriptable_debug_message_throttle);
  DCONST_DVARBOOL_scriptable_debug_msg_error_dump = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_msg_error_dump);
  DVARBOOL_scriptable_debug_mychanges = Dvar_Deregister(DVARBOOL_scriptable_debug_mychanges);
  DVARBOOL_scriptable_vehicle_filtering = Dvar_Deregister(DVARBOOL_scriptable_vehicle_filtering);
  DVARBOOL_bg_vehTurretNewFilter = Dvar_Deregister(DVARBOOL_bg_vehTurretNewFilter);
  DVARBOOL_bg_vehVsMissileFilter = Dvar_Deregister(DVARBOOL_bg_vehVsMissileFilter);
  DVARBOOL_sentry_placement_debug = Dvar_Deregister(DVARBOOL_sentry_placement_debug);
  DVARVEC3_sentry_placement_feet_offset = Dvar_Deregister(DVARVEC3_sentry_placement_feet_offset);
  DVARFLT_sentry_placement_feet_trace_dist_z = Dvar_Deregister(DVARFLT_sentry_placement_feet_trace_dist_z);
  DVARFLT_sentry_placement_trace_radius = Dvar_Deregister(DVARFLT_sentry_placement_trace_radius);
  DVARFLT_sentry_placement_trace_radius_canon_safety = Dvar_Deregister(DVARFLT_sentry_placement_trace_radius_canon_safety);
  DVARFLT_sentry_placement_trace_dist = Dvar_Deregister(DVARFLT_sentry_placement_trace_dist);
  DVARFLT_sentry_placement_trace_pitch = Dvar_Deregister(DVARFLT_sentry_placement_trace_pitch);
  DVARFLT_sentry_placement_trace_min_normal = Dvar_Deregister(DVARFLT_sentry_placement_trace_min_normal);
  DVARBOOL_turret_draw_locations = Dvar_Deregister(DVARBOOL_turret_draw_locations);
  DVARBOOL_turretConvergenceHeightDebug = Dvar_Deregister(DVARBOOL_turretConvergenceHeightDebug);
  DCONST_DVARFLT_turret_deploy_cover_speed = Dvar_Deregister(DCONST_DVARFLT_turret_deploy_cover_speed);
  DCONST_DVARBOOL_turret_deploy_never_folded = Dvar_Deregister(DCONST_DVARBOOL_turret_deploy_never_folded);
  DVARINT_g_coverWall_coverHealth = Dvar_Deregister(DVARINT_g_coverWall_coverHealth);
  DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar);
  DCONST_DVARMPSPINT_g_coverWall_settleDuration = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_settleDuration);
  DCONST_DVARMPSPBOOL_g_coverWall_useCurves = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useCurves);
  DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin);
  DCONST_DVARMPSPFLT_g_coverWall_curveCoefMax = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_curveCoefMax);
  DCONST_DVARMPSPBOOL_g_coverWall_useCompression = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useCompression);
  DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMin = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMin);
  DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMax = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMax);
  DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets);
  DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount);
  DCONST_DVARMPSPBOOL_g_coverWall_useRotations = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useRotations);
  DCONST_DVARMPSPFLT_g_coverWall_maxYOffset = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_maxYOffset);
  DCONST_DVARMPSPBOOL_g_coverWall_usePlayerClip = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_usePlayerClip);
  DVARFLT_g_coverWall_deathFxChanceToPlay = Dvar_Deregister(DVARFLT_g_coverWall_deathFxChanceToPlay);
  DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx);
  DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay);
  DCONST_DVARINT_g_coverWall_spawnDelayMS = Dvar_Deregister(DCONST_DVARINT_g_coverWall_spawnDelayMS);
  DCONST_DVARMPSPBOOL_g_coverWall_useThreeBlockRule = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useThreeBlockRule);
  DCONST_DVARMPSPBOOL_g_coverWall_useTwoBlockRule = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useTwoBlockRule);
  DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage);
  DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent);
  DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent);
  DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance);
  DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance);
  DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance);
  DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance);
  DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS);
  DCONST_DVARMPSPINT_g_coverWall_expansionRateMS = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_expansionRateMS);
  DCONST_DVARMPSPINT_g_coverWall_collapseRateMS = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_collapseRateMS);
  DCONST_DVARMPSPINT_g_coverWall_height = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_height);
  DCONST_DVARMPSPINT_g_coverWall_width = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_width);
  DCONST_DVARMPSPINT_g_coverWall_gridSize = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_gridSize);
  DCONST_DVARMPSPFLT_g_coverWall_perBlockCollisionRadius = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_perBlockCollisionRadius);
  DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag);
  DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution);
  DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck);
  DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates = Dvar_Deregister(DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates);
  DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1 = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1);
  DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2 = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2);
  DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3 = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3);
  DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4 = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4);
  DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5 = Dvar_Deregister(DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5);
  DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_1 = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_1);
  DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2 = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2);
  DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3 = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3);
  DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4 = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4);
  DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5 = Dvar_Deregister(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5);
  DVARBOOL_g_coverWall_drawCover = Dvar_Deregister(DVARBOOL_g_coverWall_drawCover);
  DVARBOOL_g_coverWall_drawGrid = Dvar_Deregister(DVARBOOL_g_coverWall_drawGrid);
  DVARBOOL_g_coverWall_drawTraces = Dvar_Deregister(DVARBOOL_g_coverWall_drawTraces);
  DVARBOOL_g_coverWall_drawTestGrid = Dvar_Deregister(DVARBOOL_g_coverWall_drawTestGrid);
  DVARBOOL_g_coverWall_drawAnchors = Dvar_Deregister(DVARBOOL_g_coverWall_drawAnchors);
  DVARBOOL_g_coverWall_drawShapeGrid = Dvar_Deregister(DVARBOOL_g_coverWall_drawShapeGrid);
  DVARBOOL_g_coverWall_drawDamage = Dvar_Deregister(DVARBOOL_g_coverWall_drawDamage);
  DVARBOOL_g_coverWall_debugPrint = Dvar_Deregister(DVARBOOL_g_coverWall_debugPrint);
  DVARBOOL_g_coverWall_debugPrintHealth = Dvar_Deregister(DVARBOOL_g_coverWall_debugPrintHealth);
  DVARBOOL_sv_rewindFilterUnsentPositions = Dvar_Deregister(DVARBOOL_sv_rewindFilterUnsentPositions);
  DVARBOOL_sv_rewindPoseArchive = Dvar_Deregister(DVARBOOL_sv_rewindPoseArchive);
  DVARINT_sv_testValue = Dvar_Deregister(DVARINT_sv_testValue);
  DCONST_DVARINT_antilagDebug = Dvar_Deregister(DCONST_DVARINT_antilagDebug);
  DCONST_DVARBOOL_antilagCharactersOnly = Dvar_Deregister(DCONST_DVARBOOL_antilagCharactersOnly);
  DCONST_DVARBOOL_antilagAllowClientSceneAntilag = Dvar_Deregister(DCONST_DVARBOOL_antilagAllowClientSceneAntilag);
  DCONST_DVARMPBOOL_antilagAutoIncludeMovers = Dvar_Deregister(DCONST_DVARMPBOOL_antilagAutoIncludeMovers);
  DCONST_DVARFLT_antilagBroadPhaseSize = Dvar_Deregister(DCONST_DVARFLT_antilagBroadPhaseSize);
  DCONST_DVARMPINT_antilagArchiveCap = Dvar_Deregister(DCONST_DVARMPINT_antilagArchiveCap);
  DCONST_DVARMPBOOL_antilagZeroG = Dvar_Deregister(DCONST_DVARMPBOOL_antilagZeroG);
  DCONST_DVARBOOL_antilagUseClosestCharacters = Dvar_Deregister(DCONST_DVARBOOL_antilagUseClosestCharacters);
  DCONST_DVARFLT_antilagClosestCharactersRadius = Dvar_Deregister(DCONST_DVARFLT_antilagClosestCharactersRadius);
  DCONST_DVARINT_antilagWarningLevel = Dvar_Deregister(DCONST_DVARINT_antilagWarningLevel);
  DCONST_DVARINT_fovLerpDefaultPresetIndex = Dvar_Deregister(DCONST_DVARINT_fovLerpDefaultPresetIndex);
  DCONST_DVARSTR_fovLerpPreset1_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset1_name);
  DCONST_DVARFLT_fovLerpPreset1_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset1_targetFov);
  DCONST_DVARINT_fovLerpPreset1_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset1_durationMs);
  DCONST_DVARBOOL_fovLerpPreset1_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset1_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset2_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset2_name);
  DCONST_DVARFLT_fovLerpPreset2_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset2_targetFov);
  DCONST_DVARINT_fovLerpPreset2_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset2_durationMs);
  DCONST_DVARBOOL_fovLerpPreset2_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset2_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset3_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset3_name);
  DCONST_DVARFLT_fovLerpPreset3_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset3_targetFov);
  DCONST_DVARINT_fovLerpPreset3_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset3_durationMs);
  DCONST_DVARBOOL_fovLerpPreset3_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset3_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset4_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset4_name);
  DCONST_DVARFLT_fovLerpPreset4_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset4_targetFov);
  DCONST_DVARINT_fovLerpPreset4_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset4_durationMs);
  DCONST_DVARBOOL_fovLerpPreset4_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset4_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset5_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset5_name);
  DCONST_DVARFLT_fovLerpPreset5_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset5_targetFov);
  DCONST_DVARINT_fovLerpPreset5_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset5_durationMs);
  DCONST_DVARBOOL_fovLerpPreset5_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset5_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset6_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset6_name);
  DCONST_DVARFLT_fovLerpPreset6_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset6_targetFov);
  DCONST_DVARINT_fovLerpPreset6_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset6_durationMs);
  DCONST_DVARBOOL_fovLerpPreset6_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset6_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset7_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset7_name);
  DCONST_DVARFLT_fovLerpPreset7_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset7_targetFov);
  DCONST_DVARINT_fovLerpPreset7_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset7_durationMs);
  DCONST_DVARBOOL_fovLerpPreset7_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset7_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset8_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset8_name);
  DCONST_DVARFLT_fovLerpPreset8_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset8_targetFov);
  DCONST_DVARINT_fovLerpPreset8_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset8_durationMs);
  DCONST_DVARBOOL_fovLerpPreset8_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset8_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset9_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset9_name);
  DCONST_DVARFLT_fovLerpPreset9_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset9_targetFov);
  DCONST_DVARINT_fovLerpPreset9_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset9_durationMs);
  DCONST_DVARBOOL_fovLerpPreset9_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset9_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset10_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset10_name);
  DCONST_DVARFLT_fovLerpPreset10_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset10_targetFov);
  DCONST_DVARINT_fovLerpPreset10_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset10_durationMs);
  DCONST_DVARBOOL_fovLerpPreset10_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset10_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset11_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset11_name);
  DCONST_DVARFLT_fovLerpPreset11_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset11_targetFov);
  DCONST_DVARINT_fovLerpPreset11_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset11_durationMs);
  DCONST_DVARBOOL_fovLerpPreset11_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset11_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset12_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset12_name);
  DCONST_DVARFLT_fovLerpPreset12_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset12_targetFov);
  DCONST_DVARINT_fovLerpPreset12_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset12_durationMs);
  DCONST_DVARBOOL_fovLerpPreset12_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset12_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset13_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset13_name);
  DCONST_DVARFLT_fovLerpPreset13_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset13_targetFov);
  DCONST_DVARINT_fovLerpPreset13_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset13_durationMs);
  DCONST_DVARBOOL_fovLerpPreset13_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset13_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset14_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset14_name);
  DCONST_DVARFLT_fovLerpPreset14_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset14_targetFov);
  DCONST_DVARINT_fovLerpPreset14_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset14_durationMs);
  DCONST_DVARBOOL_fovLerpPreset14_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset14_scalesWithUserFov);
  DCONST_DVARSTR_fovLerpPreset15_name = Dvar_Deregister(DCONST_DVARSTR_fovLerpPreset15_name);
  DCONST_DVARFLT_fovLerpPreset15_targetFov = Dvar_Deregister(DCONST_DVARFLT_fovLerpPreset15_targetFov);
  DCONST_DVARINT_fovLerpPreset15_durationMs = Dvar_Deregister(DCONST_DVARINT_fovLerpPreset15_durationMs);
  DCONST_DVARBOOL_fovLerpPreset15_scalesWithUserFov = Dvar_Deregister(DCONST_DVARBOOL_fovLerpPreset15_scalesWithUserFov);
  DCONST_DVARBOOL_bg_sprayEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_sprayEnabled);
  DCONST_DVARFLT_bg_sprayDistance = Dvar_Deregister(DCONST_DVARFLT_bg_sprayDistance);
  DCONST_DVARFLT_bg_missileJavClimbCeilingDirect = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbCeilingDirect);
  DCONST_DVARFLT_bg_missileJavClimbCeilingTop = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbCeilingTop);
  DCONST_DVARFLT_bg_missileJavClimbAngleTop = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbAngleTop);
  DCONST_DVARFLT_bg_missileJavClimbAngleDirect = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbAngleDirect);
  DCONST_DVARFLT_bg_missileJavClimbHeightTop = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbHeightTop);
  DCONST_DVARFLT_bg_missileJavClimbHeightDirect = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbHeightDirect);
  DCONST_DVARFLT_bg_missileJavClimbToOwner = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavClimbToOwner);
  DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel);
  DCONST_DVARFLT_bg_missileJavAccelClimb = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavAccelClimb);
  DCONST_DVARFLT_bg_missileJavSpeedLimitClimb = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavSpeedLimitClimb);
  DCONST_DVARFLT_bg_missileJavAccelDescend = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavAccelDescend);
  DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend = Dvar_Deregister(DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend);
  DCONST_DVARFLT_bg_missileJavTurnDecelAscend = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavTurnDecelAscend);
  DCONST_DVARFLT_bg_missileJavTurnDecelDescend = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavTurnDecelDescend);
  DCONST_DVARFLT_bg_missileJavTurnRateTop = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavTurnRateTop);
  DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy = Dvar_Deregister(DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy);
  DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect = Dvar_Deregister(DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect);
  DCONST_DVARFLT_bg_missileHorDistToTargetToStartLerp = Dvar_Deregister(DCONST_DVARFLT_bg_missileHorDistToTargetToStartLerp);
  DCONST_DVARFLT_bg_missileVerDistToTargetToStartLerp = Dvar_Deregister(DCONST_DVARFLT_bg_missileVerDistToTargetToStartLerp);
  DCONST_DVARFLT_bg_missileHellfireMaxSlope = Dvar_Deregister(DCONST_DVARFLT_bg_missileHellfireMaxSlope);
  DCONST_DVARFLT_bg_missileHellfireUpAccel = Dvar_Deregister(DCONST_DVARFLT_bg_missileHellfireUpAccel);
  DCONST_DVARFLT_bg_missileGlassShatterVel = Dvar_Deregister(DCONST_DVARFLT_bg_missileGlassShatterVel);
  DCONST_DVARBOOL_bg_missileJavDuds = Dvar_Deregister(DCONST_DVARBOOL_bg_missileJavDuds);
  DCONST_DVARFLT_bg_missileWaterMaxDepth = Dvar_Deregister(DCONST_DVARFLT_bg_missileWaterMaxDepth);
  DCONST_DVARFLT_bg_missileExplosionLiftDistance = Dvar_Deregister(DCONST_DVARFLT_bg_missileExplosionLiftDistance);
  DCONST_DVARBOOL_bg_grenadeRollingEnabled = Dvar_Deregister(DCONST_DVARBOOL_bg_grenadeRollingEnabled);
  DCONST_DVARMPFLT_bg_grenadeFrictionThresh = Dvar_Deregister(DCONST_DVARMPFLT_bg_grenadeFrictionThresh);
  DCONST_DVARMPFLT_bg_grenadeFrictionLow = Dvar_Deregister(DCONST_DVARMPFLT_bg_grenadeFrictionLow);
  DCONST_DVARMPFLT_bg_grenadeFrictionHigh = Dvar_Deregister(DCONST_DVARMPFLT_bg_grenadeFrictionHigh);
  DCONST_DVARFLT_bg_grenadeBounceRestitutionMax = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeBounceRestitutionMax);
  DCONST_DVARFLT_bg_grenadeBumpFreq = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeBumpFreq);
  DCONST_DVARFLT_bg_grenadeBumpMag = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeBumpMag);
  DCONST_DVARFLT_bg_grenadeBumpMax = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeBumpMax);
  DCONST_DVARFLT_bg_grenadeWobbleFreq = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeWobbleFreq);
  DCONST_DVARFLT_bg_grenadeWobbleFwdMag = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeWobbleFwdMag);
  DCONST_DVARFLT_bg_grenadeWobbleSideMag = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeWobbleSideMag);
  DCONST_DVARFLT_bg_grenadeWobbleSideDamp = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeWobbleSideDamp);
  DCONST_DVARFLT_bg_grenadeCurveMax = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeCurveMax);
  DCONST_DVARMPFLT_bg_grenadeRestThreshold = Dvar_Deregister(DCONST_DVARMPFLT_bg_grenadeRestThreshold);
  DCONST_DVARFLT_bg_grenadeMaxTurnRate = Dvar_Deregister(DCONST_DVARFLT_bg_grenadeMaxTurnRate);
  DVARFLT_bg_bounceIntensitySoft = Dvar_Deregister(DVARFLT_bg_bounceIntensitySoft);
  DVARFLT_bg_bounceIntensityMedium = Dvar_Deregister(DVARFLT_bg_bounceIntensityMedium);
  DVARFLT_bg_bounceIntensityHeavy = Dvar_Deregister(DVARFLT_bg_bounceIntensityHeavy);
  DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs = Dvar_Deregister(DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs);
  DCONST_DVARBOOL_bg_missileDebugDraw = Dvar_Deregister(DCONST_DVARBOOL_bg_missileDebugDraw);
  DCONST_DVARBOOL_bg_missileCrumpleDebugDraw = Dvar_Deregister(DCONST_DVARBOOL_bg_missileCrumpleDebugDraw);
  DVARBOOL_bg_missileAutoboltExplosionsToVehicles = Dvar_Deregister(DVARBOOL_bg_missileAutoboltExplosionsToVehicles);
  DCONST_DVARFLT_bg_missileMaxShapeCastDistance = Dvar_Deregister(DCONST_DVARFLT_bg_missileMaxShapeCastDistance);
  DCONST_DVARBOOL_playerasm_enable = Dvar_Deregister(DCONST_DVARBOOL_playerasm_enable);
  DCONST_DVARFLT_playerasm_loco_transition_cw_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_transition_cw_angle);
  DCONST_DVARFLT_playerasm_loco_transition_ccw_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_transition_ccw_angle);
  DCONST_DVARFLT_playerasm_loco_transition_overlap_range = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_transition_overlap_range);
  DCONST_DVARFLT_playerasm_loco_reverse_angle_delta = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_reverse_angle_delta);
  DCONST_DVARFLT_playerasm_loco_reverse_min_strength = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_reverse_min_strength);
  DCONST_DVARFLT_playerasm_loco_reverse_min_strength_crouch = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_reverse_min_strength_crouch);
  DCONST_DVARFLT_playerasm_loco_stop_speed_threshold = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_stop_speed_threshold);
  DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min);
  DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max);
  DCONST_DVARFLT_playerasm_loco_move_turn_max_player_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_move_turn_max_player_speed);
  DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in);
  DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out = Dvar_Deregister(DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out);
  DCONST_DVARFLT_playerasm_maxAimConeAngle = Dvar_Deregister(DCONST_DVARFLT_playerasm_maxAimConeAngle);
  DCONST_DVARBOOL_playerasm_enableAiming = Dvar_Deregister(DCONST_DVARBOOL_playerasm_enableAiming);
  DCONST_DVARINT_playerasm_idleTurnAnimDuration = Dvar_Deregister(DCONST_DVARINT_playerasm_idleTurnAnimDuration);
  DCONST_DVARINT_playerasm_idleTurnProneAnimDuration = Dvar_Deregister(DCONST_DVARINT_playerasm_idleTurnProneAnimDuration);
  DCONST_DVARINT_playerasm_idleTurnLastStandAnimDuration = Dvar_Deregister(DCONST_DVARINT_playerasm_idleTurnLastStandAnimDuration);
  DCONST_DVARFLT_playerasm_idleSwingSpeed = Dvar_Deregister(DCONST_DVARFLT_playerasm_idleSwingSpeed);
  DCONST_DVARFLT_playerasm_movingSwingSpeed = Dvar_Deregister(DCONST_DVARFLT_playerasm_movingSwingSpeed);
  DCONST_DVARFLT_playerasm_legs_yaw_speed_lerp_strength = Dvar_Deregister(DCONST_DVARFLT_playerasm_legs_yaw_speed_lerp_strength);
  DCONST_DVARINT_playerasm_move_pred_window = Dvar_Deregister(DCONST_DVARINT_playerasm_move_pred_window);
  DCONST_DVARBOOL_playerasm_autoclear_syncgroup_old_anim = Dvar_Deregister(DCONST_DVARBOOL_playerasm_autoclear_syncgroup_old_anim);
  DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change = Dvar_Deregister(DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change);
  DVARINT_playerasm_condition_mask_debug = Dvar_Deregister(DVARINT_playerasm_condition_mask_debug);
  DCONST_DVARBOOL_playerasm_enableConditionMask = Dvar_Deregister(DCONST_DVARBOOL_playerasm_enableConditionMask);
  DCONST_DVARBOOL_playerasm_enableBakedConditionAliases = Dvar_Deregister(DCONST_DVARBOOL_playerasm_enableBakedConditionAliases);
  DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled = Dvar_Deregister(DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled);
  DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in = Dvar_Deregister(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in);
  DCONST_DVARFLT_playerasm_strafeyaw_smoothing_out = Dvar_Deregister(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_out);
  DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor = Dvar_Deregister(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor);
  DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor = Dvar_Deregister(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor);
  DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed);
  DVARINT_playerasm_debugMode = Dvar_Deregister(DVARINT_playerasm_debugMode);
  DVARINT_playerasm_debugEntNum = Dvar_Deregister(DVARINT_playerasm_debugEntNum);
  DVARBOOL_playerasm_debugHistoryEnabled = Dvar_Deregister(DVARBOOL_playerasm_debugHistoryEnabled);
  DVARBOOL_playerasm_debugTransitionsEnabled = Dvar_Deregister(DVARBOOL_playerasm_debugTransitionsEnabled);
  DVARBOOL_playerasm_debugAliasFunctionsEnabled = Dvar_Deregister(DVARBOOL_playerasm_debugAliasFunctionsEnabled);
  DCONST_DVARINT_playerasm_debugExecutionOffsetY = Dvar_Deregister(DCONST_DVARINT_playerasm_debugExecutionOffsetY);
  DCONST_DVARINT_playerasm_debugExecutionOffsetX = Dvar_Deregister(DCONST_DVARINT_playerasm_debugExecutionOffsetX);
  DCONST_DVARFLT_playerasm_debugExecutionTextScale = Dvar_Deregister(DCONST_DVARFLT_playerasm_debugExecutionTextScale);
  DCONST_DVARINT_playerasm_debugExecutionTextFont = Dvar_Deregister(DCONST_DVARINT_playerasm_debugExecutionTextFont);
  DCONST_DVARINT_playerasm_debugAliasFunctionDurationServer = Dvar_Deregister(DCONST_DVARINT_playerasm_debugAliasFunctionDurationServer);
  DCONST_DVARINT_playerasm_debugAliasFunctionDurationClient = Dvar_Deregister(DCONST_DVARINT_playerasm_debugAliasFunctionDurationClient);
  DCONST_DVARBOOL_playerasm_misprediction_handling = Dvar_Deregister(DCONST_DVARBOOL_playerasm_misprediction_handling);
  DCONST_DVARBOOL_playerasm_misprediction_handling_debug = Dvar_Deregister(DCONST_DVARBOOL_playerasm_misprediction_handling_debug);
  DCONST_DVARINT_playerasm_debug_override_entnum = Dvar_Deregister(DCONST_DVARINT_playerasm_debug_override_entnum);
  DVARSTR_playerasm_debug_override_main_state_name = Dvar_Deregister(DVARSTR_playerasm_debug_override_main_state_name);
  DVARSTR_playerasm_debug_override_sub_state_name = Dvar_Deregister(DVARSTR_playerasm_debug_override_sub_state_name);
  DVARFLT_playerasm_debug_override_main_state_time = Dvar_Deregister(DVARFLT_playerasm_debug_override_main_state_time);
  DVARFLT_playerasm_debug_override_sub_state_time = Dvar_Deregister(DVARFLT_playerasm_debug_override_sub_state_time);
  DVARBOOL_playerasm_debug_override_reset = Dvar_Deregister(DVARBOOL_playerasm_debug_override_reset);
  DCONST_DVARFLT_playerasm_debug_param_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_speed);
  DCONST_DVARVEC3_playerasm_debug_param_origin = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_origin);
  DCONST_DVARFLT_playerasm_debug_param_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_yaw);
  DCONST_DVARFLT_playerasm_debug_param_mantle_distance = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mantle_distance);
  DCONST_DVARFLT_playerasm_debug_param_mantle_height = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mantle_height);
  DCONST_DVARFLT_playerasm_debug_param_mantle_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mantle_angle);
  DCONST_DVARFLT_playerasm_debug_param_mount_lerp = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_lerp);
  DCONST_DVARFLT_playerasm_debug_param_mount_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_pitch);
  DCONST_DVARFLT_playerasm_debug_param_mount_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_yaw);
  DCONST_DVARVEC3_playerasm_debug_param_mount_pivot_point = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_mount_pivot_point);
  DCONST_DVARFLT_playerasm_debug_param_mount_pivot_height = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_pivot_height);
  DCONST_DVARFLT_playerasm_debug_param_mount_pivot_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_pivot_yaw);
  DCONST_DVARFLT_playerasm_debug_param_mount_yaw_velocity = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_mount_yaw_velocity);
  DCONST_DVARVEC3_playerasm_debug_param_ladder_anchor = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_ladder_anchor);
  DCONST_DVARVEC3_playerasm_debug_param_ladder_bottom = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_ladder_bottom);
  DCONST_DVARVEC3_playerasm_debug_param_ladder_top = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_ladder_top);
  DCONST_DVARFLT_playerasm_debug_param_ladder_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_speed);
  DCONST_DVARFLT_playerasm_debug_param_ladder_rung_dist = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_rung_dist);
  DCONST_DVARFLT_playerasm_debug_param_ladder_hand_dist = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_hand_dist);
  DCONST_DVARVEC3_playerasm_debug_param_ladder_angles = Dvar_Deregister(DCONST_DVARVEC3_playerasm_debug_param_ladder_angles);
  DCONST_DVARFLT_playerasm_debug_param_ladder_width = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_width);
  DCONST_DVARFLT_playerasm_debug_param_ladder_aim_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_aim_pitch);
  DCONST_DVARFLT_playerasm_debug_param_ladder_aim_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_aim_yaw);
  DCONST_DVARFLT_playerasm_debug_param_ladder_climb_percent = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_ladder_climb_percent);
  DCONST_DVARFLT_playerasm_debug_param_turret_yaw_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_turret_yaw_speed);
  DCONST_DVARFLT_playerasm_debug_param_turret_aim_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_turret_aim_pitch);
  DCONST_DVARFLT_playerasm_debug_param_turret_aim_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_turret_aim_yaw);
  DCONST_DVARFLT_playerasm_debug_param_turret_aim_height = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_turret_aim_height);
  DCONST_DVARFLT_playerasm_debug_param_strafe_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_strafe_angle);
  DCONST_DVARFLT_playerasm_debug_param_stop_strafe_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_stop_strafe_angle);
  DCONST_DVARFLT_playerasm_debug_param_stop_speed = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_stop_speed);
  DCONST_DVARFLT_playerasm_debug_param_aim_scrub_value = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_aim_scrub_value);
  DCONST_DVARFLT_playerasm_debug_param_aim_weight_value = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_aim_weight_value);
  DCONST_DVARFLT_playerasm_debug_param_aim_scrub_strafe_value = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_aim_scrub_strafe_value);
  DCONST_DVARFLT_playerasm_debug_param_aim_weight_strafe_value = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_aim_weight_strafe_value);
  DCONST_DVARFLT_playerasm_debug_param_move_turn = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_move_turn);
  DCONST_DVARFLT_playerasm_debug_param_vehicle_aim_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_vehicle_aim_pitch);
  DCONST_DVARFLT_playerasm_debug_param_vehicle_aim_yaw = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_vehicle_aim_yaw);
  DCONST_DVARFLT_playerasm_debug_param_turn_scrub_value = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_turn_scrub_value);
  DCONST_DVARFLT_playerasm_debug_param_melee_execution_time = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_melee_execution_time);
  DCONST_DVARFLT_playerasm_debug_param_skydive_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_skydive_pitch);
  DCONST_DVARFLT_playerasm_debug_param_skydive_roll = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_skydive_roll);
  DCONST_DVARFLT_playerasm_debug_param_skydive_polar_angle = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_skydive_polar_angle);
  DCONST_DVARFLT_playerasm_debug_param_skydive_polar_radius = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_skydive_polar_radius);
  DCONST_DVARINT_playerasm_debug_param_facial_type = Dvar_Deregister(DCONST_DVARINT_playerasm_debug_param_facial_type);
  DCONST_DVARFLT_playerasm_debug_param_slope_forward = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_slope_forward);
  DCONST_DVARFLT_playerasm_debug_param_slope_right = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_slope_right);
  DCONST_DVARFLT_playerasm_debug_param_slope_height_adjust = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_slope_height_adjust);
  DCONST_DVARBOOL_playerasm_debug_param_slope_is_stairs = Dvar_Deregister(DCONST_DVARBOOL_playerasm_debug_param_slope_is_stairs);
  DCONST_DVARFLT_playerasm_debug_param_weapon_occlusion_adjust = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_weapon_occlusion_adjust);
  DCONST_DVARFLT_playerasm_debug_param_laststand_legs_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_laststand_legs_pitch);
  DCONST_DVARFLT_playerasm_debug_param_laststand_torso_pitch = Dvar_Deregister(DCONST_DVARFLT_playerasm_debug_param_laststand_torso_pitch);
  DCONST_DVARINT_playerasm_client_update_interval_lod1 = Dvar_Deregister(DCONST_DVARINT_playerasm_client_update_interval_lod1);
  DCONST_DVARINT_playerasm_client_update_interval_lod2 = Dvar_Deregister(DCONST_DVARINT_playerasm_client_update_interval_lod2);
  DCONST_DVARINT_playerasm_client_update_interval_lod3 = Dvar_Deregister(DCONST_DVARINT_playerasm_client_update_interval_lod3);
  DCONST_DVARBOOL_playerasm_client_update_interval_enable = Dvar_Deregister(DCONST_DVARBOOL_playerasm_client_update_interval_enable);
  DCONST_DVARBOOL_playerasm_client_update_lod_warn = Dvar_Deregister(DCONST_DVARBOOL_playerasm_client_update_lod_warn);
  DCONST_DVARBOOL_playerasm_warn_missing_finger_anims = Dvar_Deregister(DCONST_DVARBOOL_playerasm_warn_missing_finger_anims);
  DCONST_DVARFLT_playerasm_clampvelocityvalue = Dvar_Deregister(DCONST_DVARFLT_playerasm_clampvelocityvalue);
  DVARBOOL_nightVisionDisableEffects = Dvar_Deregister(DVARBOOL_nightVisionDisableEffects);
  DCONST_DVARMPBOOL_NVG_DisableAreaLight = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_DisableAreaLight);
  DCONST_DVARMPBOOL_NVG_DisableBloom = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_DisableBloom);
  DCONST_DVARMPINT_NVG_ON_BloomStartOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_BloomStartOffsetMS);
  DCONST_DVARMPINT_NVG_ON_BloomBlendInDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_BloomBlendInDurationMS);
  DCONST_DVARMPINT_NVG_ON_BloomEndOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_BloomEndOffsetMS);
  DCONST_DVARMPINT_NVG_ON_BloomBlendOutDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_BloomBlendOutDurationMS);
  DCONST_DVARMPINT_NVG_OFF_BloomStartOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_BloomStartOffsetMS);
  DCONST_DVARMPINT_NVG_OFF_BloomBlendInDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_BloomBlendInDurationMS);
  DCONST_DVARMPINT_NVG_OFF_BloomEndOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_BloomEndOffsetMS);
  DCONST_DVARMPINT_NVG_OFF_BloomBlendOutDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_BloomBlendOutDurationMS);
  DCONST_DVARMPBOOL_NVG_ON_Instant_BloomEnable = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_ON_Instant_BloomEnable);
  DCONST_DVARMPINT_NVG_ON_Instant_BloomBlendInDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_Instant_BloomBlendInDurationMS);
  DCONST_DVARMPINT_NVG_ON_Instant_BloomEndOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_Instant_BloomEndOffsetMS);
  DCONST_DVARMPINT_NVG_ON_Instant_BloomBlendOutDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_ON_Instant_BloomBlendOutDurationMS);
  DCONST_DVARMPBOOL_NVG_OFF_Instant_BloomEnable = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_OFF_Instant_BloomEnable);
  DCONST_DVARMPINT_NVG_OFF_Instant_BloomBlendInDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_Instant_BloomBlendInDurationMS);
  DCONST_DVARMPINT_NVG_OFF_Instant_BloomEndOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_Instant_BloomEndOffsetMS);
  DCONST_DVARMPINT_NVG_OFF_Instant_BloomBlendOutDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_Instant_BloomBlendOutDurationMS);
  DCONST_DVARMPINT_NVG_OFF_ExposureStartOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_ExposureStartOffsetMS);
  DCONST_DVARMPINT_NVG_OFF_ExposureBlendInDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_ExposureBlendInDurationMS);
  DCONST_DVARMPINT_NVG_OFF_ExposureEndOffsetMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_ExposureEndOffsetMS);
  DCONST_DVARMPINT_NVG_OFF_ExposureBlendOutDurationMS = Dvar_Deregister(DCONST_DVARMPINT_NVG_OFF_ExposureBlendOutDurationMS);
  DCONST_DVARMPBOOL_NVG_Instant_EnableSound = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_Instant_EnableSound);
  DCONST_DVARMPBOOL_NVG_ADSVisionEnableToggle = Dvar_Deregister(DCONST_DVARMPBOOL_NVG_ADSVisionEnableToggle);
  DCONST_DVARMPINT_NVG_ScriptBlind_BlendIn = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlind_BlendIn);
  DCONST_DVARMPINT_NVG_ScriptBlind_Hold = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlind_Hold);
  DCONST_DVARMPINT_NVG_ScriptBlind_BlendOut = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlind_BlendOut);
  DCONST_DVARMPINT_NVG_ScriptBlind_InterruptOffset = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlind_InterruptOffset);
  DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendInDelay = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendInDelay);
  DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendOutDelay = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendOutDelay);
  DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendInDuration = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendInDuration);
  DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendOutDuration = Dvar_Deregister(DCONST_DVARMPINT_NVG_ScriptBlindWeighted_BlendOutDuration);
  DCONST_DVARMPFLT_NVG_ScriptBlindWeighted_ScriptValueBlendInSpeed = Dvar_Deregister(DCONST_DVARMPFLT_NVG_ScriptBlindWeighted_ScriptValueBlendInSpeed);
  DCONST_DVARMPFLT_NVG_ScriptBlindWeighted_ScriptValueBlendOutSpeed = Dvar_Deregister(DCONST_DVARMPFLT_NVG_ScriptBlindWeighted_ScriptValueBlendOutSpeed);
  DCONST_DVARFLT_bg_corpseZone1Radius = Dvar_Deregister(DCONST_DVARFLT_bg_corpseZone1Radius);
  DCONST_DVARFLT_bg_corpseZone2Radius = Dvar_Deregister(DCONST_DVARFLT_bg_corpseZone2Radius);
  DCONST_DVARFLT_bg_corpseZone2AngleDeg = Dvar_Deregister(DCONST_DVARFLT_bg_corpseZone2AngleDeg);
  DCONST_DVARFLT_bg_corpseZone3Radius = Dvar_Deregister(DCONST_DVARFLT_bg_corpseZone3Radius);
  DCONST_DVARINT_bg_corpseForceImportantHighLodTime = Dvar_Deregister(DCONST_DVARINT_bg_corpseForceImportantHighLodTime);
  DCONST_DVARFLT_player_creepThreshhold = Dvar_Deregister(DCONST_DVARFLT_player_creepThreshhold);
  DCONST_DVARFLT_player_runThreshhold = Dvar_Deregister(DCONST_DVARFLT_player_runThreshhold);
  DCONST_DVARFLT_player_runbkThreshhold = Dvar_Deregister(DCONST_DVARFLT_player_runbkThreshhold);
  DCONST_DVARFLT_player_sprintThreshhold = Dvar_Deregister(DCONST_DVARFLT_player_sprintThreshhold);
  DCONST_DVARMPSPFLT_player_footstepsThreshhold = Dvar_Deregister(DCONST_DVARMPSPFLT_player_footstepsThreshhold);
  DCONST_DVARINT_player_breathCountIdleToWalk = Dvar_Deregister(DCONST_DVARINT_player_breathCountIdleToWalk);
  DCONST_DVARINT_player_breathCountWalkToIdle = Dvar_Deregister(DCONST_DVARINT_player_breathCountWalkToIdle);
  DCONST_DVARINT_player_breathCountRun = Dvar_Deregister(DCONST_DVARINT_player_breathCountRun);
  DCONST_DVARINT_player_breathCountRunToWalk = Dvar_Deregister(DCONST_DVARINT_player_breathCountRunToWalk);
  DCONST_DVARINT_player_breathCountRunRecovery = Dvar_Deregister(DCONST_DVARINT_player_breathCountRunRecovery);
  DCONST_DVARINT_player_breathCountSprint = Dvar_Deregister(DCONST_DVARINT_player_breathCountSprint);
  DCONST_DVARINT_player_breathCountSprintRecovery = Dvar_Deregister(DCONST_DVARINT_player_breathCountSprintRecovery);
  DCONST_DVARINT_player_breathCountSupersprint = Dvar_Deregister(DCONST_DVARINT_player_breathCountSupersprint);
  DCONST_DVARMPBOOL_movementAnimProto = Dvar_Deregister(DCONST_DVARMPBOOL_movementAnimProto);
  DCONST_DVARMPBOOL_movementAnimProtoDefaultIdle = Dvar_Deregister(DCONST_DVARMPBOOL_movementAnimProtoDefaultIdle);
  DCONST_DVARBOOL_adsCover_enabled = Dvar_Deregister(DCONST_DVARBOOL_adsCover_enabled);
  DCONST_DVARBOOL_adsCover_debugTrace = Dvar_Deregister(DCONST_DVARBOOL_adsCover_debugTrace);
  DCONST_DVARBOOL_mount_stance_allow_mount_stand = Dvar_Deregister(DCONST_DVARBOOL_mount_stance_allow_mount_stand);
  DCONST_DVARBOOL_mount_stance_allow_mount_crouch = Dvar_Deregister(DCONST_DVARBOOL_mount_stance_allow_mount_crouch);
  DCONST_DVARBOOL_mount_stance_allow_mount_prone = Dvar_Deregister(DCONST_DVARBOOL_mount_stance_allow_mount_prone);
  DCONST_DVARBOOL_mount_do_edge_query_on_server = Dvar_Deregister(DCONST_DVARBOOL_mount_do_edge_query_on_server);
  DCONST_DVARFLT_mount_tuning_query_max_angle_player = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_query_max_angle_player);
  DCONST_DVARFLT_mount_tuning_min_fraction = Dvar_Deregister(DCONST_DVARFLT_mount_tuning_min_fraction);
  DCONST_DVARMPFLT_mount_top_min_height = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_min_height);
  DCONST_DVARBOOL_mount_top_enforce_distance_besides_edge = Dvar_Deregister(DCONST_DVARBOOL_mount_top_enforce_distance_besides_edge);
  DCONST_DVARMPFLT_mount_top_max_distance_besides_edge = Dvar_Deregister(DCONST_DVARMPFLT_mount_top_max_distance_besides_edge);
  DCONST_DVARMPBOOL_mount_enable_side = Dvar_Deregister(DCONST_DVARMPBOOL_mount_enable_side);
  DCONST_DVARBOOL_mount_indicator_enable = Dvar_Deregister(DCONST_DVARBOOL_mount_indicator_enable);
  DCONST_DVARMPBOOL_mount_hint_enable = Dvar_Deregister(DCONST_DVARMPBOOL_mount_hint_enable);
  DCONST_DVARFLT_mount_edge_max_velocity_sqr = Dvar_Deregister(DCONST_DVARFLT_mount_edge_max_velocity_sqr);
  DCONST_DVARMPFLT_mount_tuning_query_distance = Dvar_Deregister(DCONST_DVARMPFLT_mount_tuning_query_distance);
  DVARBOOL_bg_disableWeaponFirstRaiseAnims = Dvar_Deregister(DVARBOOL_bg_disableWeaponFirstRaiseAnims);
  DCONST_DVARFLT_perk_trackerPro_groundtraceDist = Dvar_Deregister(DCONST_DVARFLT_perk_trackerPro_groundtraceDist);
  DCONST_DVARBOOL_perk_trackerPro_drawInAir = Dvar_Deregister(DCONST_DVARBOOL_perk_trackerPro_drawInAir);
  DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers = Dvar_Deregister(DCONST_DVARBOOL_perk_trackerPro_suppressLinkedPlayers);
  DVARFLT_player_use_vehicle_speed = Dvar_Deregister(DVARFLT_player_use_vehicle_speed);
  DVARFLT_friendlyCallsignFontSize = Dvar_Deregister(DVARFLT_friendlyCallsignFontSize);
  DVARFLT_friendlyNameFontSize = Dvar_Deregister(DVARFLT_friendlyNameFontSize);
  DVARVEC4_friendlyNameFontColor = Dvar_Deregister(DVARVEC4_friendlyNameFontColor);
  DVARVEC4_hostileNameFontColor = Dvar_Deregister(DVARVEC4_hostileNameFontColor);
  DVARVEC4_civilianNameFontColor = Dvar_Deregister(DVARVEC4_civilianNameFontColor);
  DVARFLT_coopNameFontSize = Dvar_Deregister(DVARFLT_coopNameFontSize);
  DVARFLT_coopNameFontSizeSplitscreen = Dvar_Deregister(DVARFLT_coopNameFontSizeSplitscreen);
  DVARFLT_superSprint_enhancedRechargeScale = Dvar_Deregister(DVARFLT_superSprint_enhancedRechargeScale);
  DVARFLT_superSprint_enhancedTime = Dvar_Deregister(DVARFLT_superSprint_enhancedTime);
  DCONST_DVARMPFLT_fastCrouchMovement_speedScale = Dvar_Deregister(DCONST_DVARMPFLT_fastCrouchMovement_speedScale);
}

/*
==============
BG_DeregisterNetworkDvars
==============
*/
void BG_DeregisterNetworkDvars(void)
{
  DVARBOOL_bg_compassShowEnemies = Dvar_Deregister(DVARBOOL_bg_compassShowEnemies);
  DVARINT_bg_objectivePingDuration = Dvar_Deregister(DVARINT_bg_objectivePingDuration);
  DVARBOOL_camera_thirdPerson = Dvar_Deregister(DVARBOOL_camera_thirdPerson);
  DVARBOOL_camera_allow3rdspectate = Dvar_Deregister(DVARBOOL_camera_allow3rdspectate);
  DVARBOOL_disable_energy_bullet_ricochet = Dvar_Deregister(DVARBOOL_disable_energy_bullet_ricochet);
  DVARBOOL_bg_enableClientNetPerf = Dvar_Deregister(DVARBOOL_bg_enableClientNetPerf);
  DVARSTR_bg_TeamName_Allies = Dvar_Deregister(DVARSTR_bg_TeamName_Allies);
  DVARSTR_bg_TeamName_Axis = Dvar_Deregister(DVARSTR_bg_TeamName_Axis);
  DVARBOOL_deploy_allowInWater = Dvar_Deregister(DVARBOOL_deploy_allowInWater);
  DVARFLT_bg_fallDamageMinHeight = Dvar_Deregister(DVARFLT_bg_fallDamageMinHeight);
  DVARFLT_bg_fallDamageMaxHeight = Dvar_Deregister(DVARFLT_bg_fallDamageMaxHeight);
  DVARFLT_bg_softLandingMinHeight = Dvar_Deregister(DVARFLT_bg_softLandingMinHeight);
  DVARFLT_bg_softLandingMaxHeight = Dvar_Deregister(DVARFLT_bg_softLandingMaxHeight);
  DVARFLT_bg_softLandingMaxDamage = Dvar_Deregister(DVARFLT_bg_softLandingMaxDamage);
  DVARFLT_sv_netfieldHighLoDDistSq = Dvar_Deregister(DVARFLT_sv_netfieldHighLoDDistSq);
  DCONST_DVARMPFLT_trackTrajectory1 = Dvar_Deregister(DCONST_DVARMPFLT_trackTrajectory1);
  DCONST_DVARMPFLT_trackTrajectory2 = Dvar_Deregister(DCONST_DVARMPFLT_trackTrajectory2);
  DCONST_DVARMPFLT_trackTrajectory3 = Dvar_Deregister(DCONST_DVARMPFLT_trackTrajectory3);
  DCONST_DVARMPFLT_trackTrajectory4 = Dvar_Deregister(DCONST_DVARMPFLT_trackTrajectory4);
  DCONST_DVARMPFLT_trackTrajectory5 = Dvar_Deregister(DCONST_DVARMPFLT_trackTrajectory5);
}

/*
==============
BG_GetBotsConnectType
==============
*/
unsigned __int8 BG_GetBotsConnectType()
{
  unsigned __int8 result; 
  GameStateInfo *v1; 

  result = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  if ( result )
  {
    v1 = GameStateInfo_Get();
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4209, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    return v1->usingBotsConnectType;
  }
  return result;
}

/*
==============
BG_GetBotsDifficulty
==============
*/
__int64 BG_GetBotsDifficulty(int relativeTeam)
{
  __int64 v1; 
  GameStateInfo *v3; 
  __int64 v4; 

  v1 = relativeTeam;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 4i64;
  v3 = GameStateInfo_Get();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4234, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4235, ASSERT_TYPE_ASSERT, "(unsigned)( relativeTeam ) < (unsigned)( ( sizeof( *array_counter( gInfo->usingBotsDifficulty ) ) + 0 ) )", "relativeTeam doesn't index ARRAY_COUNT( gInfo->usingBotsDifficulty )\n\t%i not in [0, %i)", v4, 2) )
      __debugbreak();
  }
  return v3->usingBotsDifficulty[v1];
}

/*
==============
BG_GetBotsTeamLimit
==============
*/
__int64 BG_GetBotsTeamLimit(int relativeTeam)
{
  __int64 v1; 
  GameStateInfo *v3; 
  __int64 v4; 

  v1 = relativeTeam;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 0i64;
  v3 = GameStateInfo_Get();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4289, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4290, ASSERT_TYPE_ASSERT, "(unsigned)( relativeTeam ) < (unsigned)( ( sizeof( *array_counter( gInfo->usingBotsTeamLimit ) ) + 0 ) )", "relativeTeam doesn't index ARRAY_COUNT( gInfo->usingBotsTeamLimit )\n\t%i not in [0, %i)", v4, 2) )
      __debugbreak();
  }
  return v3->usingBotsTeamLimit[v1];
}

/*
==============
BG_GetCardinalYawOfIncomingVector
==============
*/
float BG_GetCardinalYawOfIncomingVector(const vec3_t *targetAngles, const vec3_t *incomingVector, float cosineDividingAngle)
{
  float v4; 
  float v5; 
  float v6; 
  int v7; 
  float v8; 
  float v9; 
  double v10; 
  float c; 
  float s; 
  vec2_t vec; 
  vec3_t forward; 

  AngleVectors(targetAngles, &forward, NULL, NULL);
  v4 = incomingVector->v[1];
  v5 = incomingVector->v[0];
  v6 = (float)(incomingVector->v[0] * forward.v[0]) + (float)(v4 * forward.v[1]);
  if ( (float)(v6 * v6) >= (float)(cosineDividingAngle * cosineDividingAngle) )
  {
    v7 = 2;
    if ( v6 < 0.0 )
      v7 = 0;
  }
  else
  {
    v7 = 3;
    if ( (float)((float)(v4 * forward.v[0]) - (float)(v5 * forward.v[1])) > 0.0 )
      v7 = 1;
  }
  LODWORD(v8) = LODWORD(v5) ^ _xmm;
  LODWORD(v9) = LODWORD(v4) ^ _xmm;
  if ( v7 )
  {
    FastSinCos((float)v7 * 1.5707964, &s, &c);
    vec.v[0] = (float)(v8 * c) - (float)(v9 * s);
    vec.v[1] = (float)(v8 * s) + (float)(v9 * c);
  }
  else
  {
    LODWORD(vec.v[0]) = LODWORD(v5) ^ _xmm;
    LODWORD(vec.v[1]) = LODWORD(v4) ^ _xmm;
  }
  v10 = vectoyaw(&vec);
  return *(float *)&v10;
}

/*
==============
BG_GetClientVehicleCamera
==============
*/
char BG_GetClientVehicleCamera(const playerState_s *ps, const BgHandler *handler, bool *outHasTurret)
{
  int RemoteControlledVehicleEntityNum; 
  centity_t *Entity; 
  const VehicleDef *VehicleDef; 
  VehicleType type; 
  VehiclePhysicsAnimProfile physics_animProfile; 

  *outHasTurret = 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Cu) )
    return 0;
  RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(ps, handler);
  if ( RemoteControlledVehicleEntityNum == 2047 || ps->vehicleState.entity == 2047 )
    return 0;
  if ( handler->IsClient((BgHandler *)handler) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), RemoteControlledVehicleEntityNum);
    if ( Entity )
      Entity = (centity_t *)((char *)Entity + 400);
  }
  else
  {
    Entity = (centity_t *)GHandler::GetEntityState((GHandler *)handler, RemoteControlledVehicleEntityNum);
  }
  if ( *(_WORD *)&Entity->pose.ragdollFlags == 14 && (VehicleDef = BG_GetVehicleDef(ps, handler)) != NULL && VehicleDef->vehiclePhysicsDef.physicsEnabled && ((type = VehicleDef->type, physics_animProfile = VehicleDef->vehiclePhysicsDef.physics_animProfile, type == VEH_CAR) || type == VEH_AIRCRAFT && physics_animProfile == VEH_ANIMPROFILE_LBRAVO) && physics_animProfile != VEH_ANIMPROFILE_VINDIA )
    return 1;
  else
    return 0;
}

/*
==============
BG_GetEdgePhysicsProxyAsset
==============
*/
const PhysicsAsset *BG_GetEdgePhysicsProxyAsset(const BgHandler *const handler, const entityState_t *const es)
{
  __int128 v2; 
  cmodel_t *v5; 
  signed int v6; 
  unsigned int v7; 
  const dvar_t *v8; 
  unsigned int EdgeIndex; 
  unsigned int v10; 
  __m128 *v11; 
  unsigned int v12; 
  unsigned int v17; 
  float4 *v18; 
  __int64 v22; 
  const dvar_t *v23; 
  bool enabled; 
  BG_GetEdgePhysicsProxyAsset::__l2::EdgeProxy *v25; 
  int v26; 
  float *p_radiusSq; 
  __int64 v28; 
  XAssetHeader v29; 
  EdgeId edgeId; 
  float4 r_outLineSegment[2]; 
  __int128 v33; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 657, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 658, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( es->eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 659, ASSERT_TYPE_ASSERT, "(es->eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "es->eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( (es->lerp.u.anonymous.data[2] & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 660, ASSERT_TYPE_ASSERT, "(es->lerp.u.scriptMover.flags & (1 << 8))", (const char *)&queryFormat, "es->lerp.u.scriptMover.flags & SCRIPTMOVER_FLAG_FORCE_EDGE_PHYSICS") )
    __debugbreak();
  v5 = &cm.mapEnts->cmodels[es->index.brushModel];
  if ( !v5 || !v5->edgeTotalCount )
    return 0i64;
  v6 = 0;
  v7 = 0;
  v33 = v2;
  do
  {
    if ( MapEdgeList_GetListIndex(v7 + v5->edgeFirstIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 679, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED") )
      __debugbreak();
    EdgeId::Set(&edgeId, v7, es->number);
    v8 = DVARBOOL_killswitch_edge_patch_proxy_fix_enabled;
    if ( !DVARBOOL_killswitch_edge_patch_proxy_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_edge_patch_proxy_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      if ( !EdgeId::GetIsDynamic(&edgeId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 687, ASSERT_TYPE_SANITY, "( edgeId.GetIsDynamic() )", (const char *)&queryFormat, "edgeId.GetIsDynamic()") )
        __debugbreak();
      EdgeIndex = EdgeId::GetEdgeIndex(&edgeId);
      if ( MapEdgeList_GetListIndex(EdgeIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 688, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( edgeId.GetEdgeIndex() ) == TRANSIENT_ZONE_ALWAYSLOADED") )
        __debugbreak();
      v10 = EdgeId::GetEdgeIndex(&edgeId);
      v11 = (__m128 *)MapEdgeList_LookupSegment(v10);
      v12 = 0;
      do
      {
        _XMM1 = _mm128_mul_ps(*v11, *v11);
        __asm { vhaddps xmm2, xmm1, xmm1 }
        ++v12;
        ++v11;
        __asm
        {
          vhaddps xmm0, xmm2, xmm2
          vmaxss  xmm6, xmm0, xmm6
        }
      }
      while ( v12 < 2 );
    }
    else
    {
      Edge_GetLineSegment(handler, edgeId, (float4 (*)[2])r_outLineSegment);
      v17 = 0;
      v18 = r_outLineSegment;
      do
      {
        _XMM1 = _mm128_mul_ps(v18->v, v18->v);
        __asm { vhaddps xmm2, xmm1, xmm1 }
        ++v17;
        ++v18;
        __asm
        {
          vhaddps xmm0, xmm2, xmm2
          vmaxss  xmm6, xmm0, xmm6
        }
      }
      while ( v17 < 2 );
    }
    ++v7;
  }
  while ( v7 < v5->edgeTotalCount );
  v22 = tls_index;
  if ( dword_14BB3414C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB3414C);
    if ( dword_14BB3414C == -1 )
    {
      s_edgeProxiesLegacy[0].radiusSq = FLOAT_4096_0;
      s_edgeProxiesLegacy[1].radiusSq = FLOAT_32768_0;
      s_edgeProxiesLegacy[0].assetName = "havok_test_cube_32";
      s_edgeProxiesLegacy[2].radiusSq = FLOAT_2097152_0;
      s_edgeProxiesLegacy[3].radiusSq = FLOAT_1_3421773e8;
      s_edgeProxiesLegacy[1].assetName = "havok_test_cube_64";
      s_edgeProxiesLegacy[2].assetName = "havok_test_cube_256";
      s_edgeProxiesLegacy[3].assetName = "havok_test_cube_1024";
      j__Init_thread_footer(&dword_14BB3414C);
    }
  }
  if ( dword_14BB341C4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v22) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB341C4);
    if ( dword_14BB341C4 == -1 )
    {
      s_edgeProxies[0].radiusSq = FLOAT_256_0;
      s_edgeProxies[2].radiusSq = FLOAT_16384_0;
      s_edgeProxies[0].assetName = "havok_test_cube_32";
      s_edgeProxies[4].radiusSq = FLOAT_1048576_0;
      s_edgeProxies[1].radiusSq = FLOAT_1024_0;
      s_edgeProxies[4].assetName = "havok_test_cube_2048";
      s_edgeProxies[1].assetName = "havok_test_cube_64";
      s_edgeProxies[5].radiusSq = FLOAT_4194304_0;
      s_edgeProxies[3].radiusSq = FLOAT_262144_0;
      s_edgeProxies[2].assetName = "havok_test_cube_256";
      s_edgeProxies[3].assetName = "havok_test_cube_1024";
      s_edgeProxies[5].assetName = "havok_test_cube_4096";
      j__Init_thread_footer(&dword_14BB341C4);
    }
  }
  v23 = DVARBOOL_killswitch_edge_patch_proxy_fix_enabled;
  if ( !DVARBOOL_killswitch_edge_patch_proxy_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_edge_patch_proxy_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  enabled = v23->current.enabled;
  v25 = s_edgeProxiesLegacy;
  v26 = 4;
  if ( enabled )
    v26 = 6;
  if ( enabled )
    v25 = s_edgeProxies;
  p_radiusSq = &v25->radiusSq;
  do
  {
    if ( *(float *)&_XMM6 <= *p_radiusSq )
      break;
    ++v6;
    p_radiusSq += 4;
  }
  while ( (unsigned int)v6 < 6 );
  if ( v26 <= v6 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 759, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Patchable collision has huge bounds (furthest edge vertex from origin is %.2f units).  Please add another entry in code.", fsqrt(*(float *)&_XMM6)) )
      __debugbreak();
    v6 = v26 - 1;
  }
  v28 = v6;
  v29.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_PHYSICSASSET, v25[v6].assetName, 0).physicsLibrary;
  if ( !v29.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 766, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to find required physicsasset '%s' for patchable collision.  Please add to a common fastfile.", v25[v28].assetName) )
    __debugbreak();
  return (const PhysicsAsset *)v29.physicsLibrary;
}

/*
==============
BG_GetEntityTypeName
==============
*/
char *BG_GetEntityTypeName(const entityType_s eType)
{
  __int64 v2; 
  unsigned int v3; 
  int v4; 

  if ( eType < ET_EVENTS )
    return (char *)s_bgEntityTypeNames[eType];
  v2 = eType;
  v3 = eType - 29;
  if ( v3 > 0xE2 )
  {
    v4 = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 641, ASSERT_TYPE_ASSERT, "( ( eType - ET_EVENTS >= 0 && eType - ET_EVENTS < EV_MAX_EVENTS ) )", "( eType ) = %i", v4) )
      __debugbreak();
  }
  return j_va("Event %s (%i)", mantleDebugNames[v2 + 5], v3);
}

/*
==============
BG_GetEventTypeName
==============
*/
const char *BG_GetEventTypeName(const int eventType)
{
  __int64 v1; 
  int v4; 

  v1 = eventType;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    v4 = 227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 649, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( EV_MAX_EVENTS )", "eventType doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", eventType, v4) )
      __debugbreak();
  }
  return s_bgEventNames[v1];
}

/*
==============
BG_GetExtrapolatedPlayerEyePosition
==============
*/
void BG_GetExtrapolatedPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, const ClientExtrapData *extrapData, vec3_t *outOrigin, const BgHandler *handler)
{
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  float value; 
  float v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3035, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARFLT_com_userCmdMaxExtrapTranslation;
  if ( !DCONST_DVARFLT_com_userCmdMaxExtrapTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxExtrapTranslation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = extrapData->offset.v[1];
  v11 = extrapData->offset.v[0];
  v12 = extrapData->offset.v[2];
  value = v9->current.value;
  v14 = fsqrt((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( v14 >= value && COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - value) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3039, ASSERT_TYPE_ASSERT, "(I_isnearOrSmaller( Vec3Length( extrapData.offset ), Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_com_userCmdMaxExtrapTranslation, \"com_userCmdMaxExtrapTranslation\" ) ))", "%s\n\tIllegal extrapolation:[%f %f %f]", "I_isnearOrSmaller( Vec3Length( extrapData.offset ), Dconst_GetFloat( com_userCmdMaxExtrapTranslation ) )", v11, v10, v12) )
    __debugbreak();
  outOrigin->v[0] = ps->origin.v[0] + extrapData->offset.v[0];
  outOrigin->v[1] = ps->origin.v[1] + extrapData->offset.v[1];
  outOrigin->v[2] = ps->origin.v[2] + extrapData->offset.v[2];
  BG_GetPlayerEyePosition_Internal(weaponMap, ps, (const int (*)[2])extrapData->packedBobCycle, 1, outOrigin, handler);
}

/*
==============
BG_GetGameTypeQuickForName
==============
*/
char BG_GetGameTypeQuickForName(const char *gameTypeName)
{
  int i; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  for ( i = 0; i < 6; ++i )
  {
    v3 = 0x7FFFFFFFi64;
    v4 = bg_gameTypeQuickNames[i];
    if ( !gameTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v5 = (const char *)(gameTypeName - v4);
    while ( 1 )
    {
      v6 = (unsigned __int8)v4[(_QWORD)v5];
      v7 = v3;
      v8 = *(unsigned __int8 *)v4++;
      --v3;
      if ( !v7 )
        return i;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
          break;
      }
      if ( !v6 )
        return i;
    }
  }
  return 0;
}

/*
==============
BG_GetJammingType
==============
*/
JammingType BG_GetJammingType(const entityState_t *es)
{
  if ( es->eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4677, ASSERT_TYPE_ASSERT, "(es->eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "es->eType == ET_SCRIPTMOVER") )
    __debugbreak();
  return es->staticState.vehiclePlayer.playerIndex & 3;
}

/*
==============
BG_GetLandingEvent
==============
*/
__int64 BG_GetLandingEvent(const float fallHeight, const bool damageApplied)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 

  v2 = DCONST_DVARFLT_player_lowHeightLandingMaxHeight;
  if ( !DCONST_DVARFLT_player_lowHeightLandingMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lowHeightLandingMaxHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v5 = DCONST_DVARFLT_player_mediumHeightLandingMaxHeight;
  if ( !DCONST_DVARFLT_player_mediumHeightLandingMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_mediumHeightLandingMaxHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value;
  v7 = DCONST_DVARFLT_player_highHeightLandingMaxHeight;
  if ( !DCONST_DVARFLT_player_highHeightLandingMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_highHeightLandingMaxHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  if ( (value >= v6 || v6 >= v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1321, ASSERT_TYPE_ASSERT, "(( lowMaxHeight < mediumMaxHeight ) && ( mediumMaxHeight < highMaxHeight ))", (const char *)&queryFormat, "( lowMaxHeight < mediumMaxHeight ) && ( mediumMaxHeight < highMaxHeight )") )
    __debugbreak();
  if ( damageApplied )
  {
    if ( fallHeight >= value )
    {
      if ( fallHeight >= v6 )
        return (unsigned int)(v8 <= fallHeight) + 187;
      else
        return 186i64;
    }
    else
    {
      return 185i64;
    }
  }
  else if ( fallHeight >= value )
  {
    if ( fallHeight >= v6 )
      return (unsigned int)(v8 <= fallHeight) + 183;
    else
      return 182i64;
  }
  else
  {
    return 181i64;
  }
}

/*
==============
BG_GetMarkDir
==============
*/
void BG_GetMarkDir(const vec3_t *dir, const vec3_t *normal, vec3_t *out)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned __int128 v7; 
  float v8; 
  unsigned __int128 v9; 
  float v13; 
  float v15; 
  unsigned __int128 v16; 
  unsigned __int128 v17; 
  float v18; 
  float v22; 
  float v23; 
  unsigned __int128 v24; 
  float v25; 
  unsigned __int128 v29; 

  v3 = normal->v[1];
  v4 = normal->v[0];
  if ( (float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(normal->v[2] * normal->v[2])) >= 1.0 )
  {
    v5 = normal->v[2];
  }
  else
  {
    v3 = 0.0;
    v4 = 0.0;
    v5 = FLOAT_1_0;
  }
  LODWORD(v6) = LODWORD(dir->v[0]) ^ _xmm;
  v7 = LODWORD(dir->v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  LODWORD(v8) = LODWORD(dir->v[2]) ^ _xmm;
  v9 = v7;
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM4 = v9;
  __asm
  {
    vcmpless xmm0, xmm4, xmm15
    vblendvps xmm0, xmm4, xmm10, xmm0
  }
  v13 = 1.0 / *(float *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_80000001);
  v15 = v6 * v13;
  v17 = v7;
  *(float *)&v17 = *(float *)&v7 * v13;
  v16 = v17;
  v18 = v8 * v13;
  _XMM1 = LODWORD(FLOAT_0_30000001);
  __asm
  {
    vcmpltss xmm3, xmm0, xmm12
    vblendvps xmm14, xmm1, xmm2, xmm3
  }
  if ( (float)((float)((float)(v3 * *(float *)&v17) + (float)(v4 * v15)) + (float)(v5 * v18)) < *(float *)&_XMM14 )
  {
    do
    {
      v22 = v15 + (float)(v4 * 0.5);
      v24 = v16;
      v23 = *(float *)&v16 + (float)(v3 * 0.5);
      v25 = (float)(v5 * 0.5) + v18;
      *(float *)&v24 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v25 * v25));
      _XMM3 = v24;
      __asm
      {
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      v29 = LODWORD(FLOAT_1_0);
      v15 = (float)(1.0 / *(float *)&_XMM0) * v22;
      *(float *)&v29 = (float)(1.0 / *(float *)&_XMM0) * v23;
      v16 = v29;
      v18 = (float)(1.0 / *(float *)&_XMM0) * v25;
    }
    while ( (float)((float)((float)(v3 * *(float *)&v29) + (float)(v4 * v15)) + (float)(v5 * v18)) < *(float *)&_XMM14 );
  }
  out->v[2] = v18;
  out->v[0] = v15;
  out->v[1] = *(float *)&v16;
}

/*
==============
BG_GetMaxSprintTime
==============
*/
__int64 BG_GetMaxSprintTime(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  const WeaponDef *v6; 
  double Time; 
  float v8; 
  const dvar_t *v9; 
  float value; 
  bool v11; 
  const dvar_t *v12; 
  __int64 result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3670, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_GameInterface_HasPerk_SuperSprintEnhanced(ps) )
  {
    v5 = BG_UsingAlternate(ps);
    v6 = BG_WeaponDef(CurrentWeaponForPlayer, v5);
    Time = BG_GameInterface_SuperSprint_Enhanced_GetTime();
    v8 = (float)(*(float *)&Time * 1000.0) * v6->sprintDurationScale;
  }
  else
  {
    v9 = DVARFLT_player_sprintTime;
    if ( !DVARFLT_player_sprintTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = BG_UsingAlternate(ps);
    v8 = (float)(value * BG_WeaponDef(CurrentWeaponForPlayer, v11)->sprintDurationScale) * 1000.0;
  }
  if ( BG_HasPerk(&ps->perks, 5u) )
  {
    v12 = DVARFLT_perk_sprintMultiplier;
    if ( !DVARFLT_perk_sprintMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_sprintMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v8 = v8 * v12->current.value;
  }
  result = 0x3FFFi64;
  if ( (int)v8 < 0x3FFF )
    return (unsigned int)(int)v8;
  return result;
}

/*
==============
BG_GetNormalizedMovementCmd
==============
*/
void BG_GetNormalizedMovementCmd(const usercmd_s *cmd, vec3_t *outMove)
{
  float v4; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4685, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v4 = (float)cmd->rightmove * 0.0078740157;
  outMove->v[0] = (float)cmd->forwardmove * 0.0078740157;
  outMove->v[1] = v4;
  outMove->v[2] = 0.0;
}

/*
==============
BG_GetPlayerEyePosition
==============
*/
void BG_GetPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, vec3_t *outOrigin, const BgHandler *handler)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3005, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  outOrigin->v[0] = ps->origin.v[0];
  outOrigin->v[1] = ps->origin.v[1];
  outOrigin->v[2] = ps->origin.v[2];
  BG_GetPlayerEyePosition_Internal(weaponMap, ps, (const int (*)[2])ps->packedBobCycle, 1, outOrigin, handler);
}

/*
==============
BG_GetPlayerEyePosition
==============
*/
void BG_GetPlayerEyePosition(const BgWeaponMap *weaponMap, const playerState_s *ps, const vec3_t *playerOrigin, const BgHandler *handler, vec3_t *outOrigin)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3015, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outOrigin = *playerOrigin;
  BG_GetPlayerEyePosition_Internal(weaponMap, ps, (const int (*)[2])ps->packedBobCycle, 1, outOrigin, handler);
}

/*
==============
BG_GetPlayerEyePosition_Internal
==============
*/
void BG_GetPlayerEyePosition_Internal(const BgWeaponMap *weaponMap, const playerState_s *ps, const int (*packedBobCycle)[2], bool bIncludeViewBob, vec3_t *outOrigin, const BgHandler *handler)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v11; 
  double UpContribution; 
  float v13; 
  double v14; 
  vec3_t outUp; 
  WorldUpReferenceFrame refFrame; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2951, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2952, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActive(ps) && !BG_Turret_IsUsingNonRemoteTurretAndUnlinked(ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2959, ASSERT_TYPE_ASSERT, "(BG_Turret_IsUsingNonRemoteTurretAndUnlinked( ps ))", (const char *)&queryFormat, "BG_Turret_IsUsingNonRemoteTurretAndUnlinked( ps )") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&refFrame, ps, handler);
  BG_GameInterface_AddContributionToPlayerEye(ps, handler, outOrigin, &refFrame);
  if ( bIncludeViewBob && !BG_IsThirdPersonMode(weaponMap, ps) )
    BG_ApplyViewBobAndScriptOffsets(ps, ps->serverTime, packedBobCycle, handler, outOrigin);
  WorldUpReferenceFrame::GetUpVector(&refFrame, &outUp);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v11 = BG_UsingAlternate(ps);
  BG_ContextMount_GetEyePoint(handler, &ps->mountState, &outUp, CurrentWeaponForPlayer, v11, outOrigin);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&refFrame, &ps->origin);
  v13 = *(float *)&UpContribution;
  v14 = WorldUpReferenceFrame::GetUpContribution(&refFrame, outOrigin);
  if ( *(float *)&v14 < (float)(v13 + 1.0) )
    WorldUpReferenceFrame::AddUpContribution(&refFrame, (float)(v13 + 1.0) - *(float *)&v14, outOrigin);
}

/*
==============
BG_GetPlayerEyePosition_NoBob
==============
*/
void BG_GetPlayerEyePosition_NoBob(const BgWeaponMap *weaponMap, const playerState_s *ps, vec3_t *outOrigin, const BgHandler *handler)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3024, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  outOrigin->v[0] = ps->origin.v[0];
  outOrigin->v[1] = ps->origin.v[1];
  outOrigin->v[2] = ps->origin.v[2];
  BG_GetPlayerEyePosition_Internal(weaponMap, ps, (const int (*)[2])ps->packedBobCycle, 0, outOrigin, handler);
}

/*
==============
BG_GetPlayerViewDirection
==============
*/
void BG_GetPlayerViewDirection(const playerState_s *ps, vec3_t *forward, vec3_t *right, vec3_t *up, const BgHandler *handler, bool ignoreArbitraryUp)
{
  bool v10; 
  bool v11; 
  BgStatic *ActiveStatics; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t v18; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  WorldUpReferenceFrame v23; 

  v10 = Com_GameMode_SupportsFeature(WEAPON_MELEE);
  v11 = Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER);
  if ( v10 )
  {
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3060, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
      __debugbreak();
    if ( ps->groundRefEnt == 2047 || !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
    {
      v18.v[0] = 0.0;
      v18.v[1] = 0.0;
      v18.v[2] = 0.0;
    }
    else
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      ActiveStatics->GetAngles(ActiveStatics, ps->groundRefEnt, &v18);
    }
  }
  else if ( v11 )
  {
    v13 = ps->groundTiltAngles.v[1];
    v18.v[0] = ps->groundTiltAngles.v[0];
    v18.v[2] = ps->groundTiltAngles.v[2];
    v18.v[1] = v13;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3077, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
  {
    __debugbreak();
  }
  v14 = ps->viewangles.v[1];
  angles.v[0] = ps->viewangles.v[0];
  angles.v[2] = ps->viewangles.v[2];
  angles.v[1] = v14;
  if ( !ignoreArbitraryUp )
  {
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, ps, handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v23, &angles);
  }
  if ( v18.v[0] == 0.0 && v18.v[1] == 0.0 && v18.v[2] == 0.0 )
  {
    AngleVectors(&angles, forward, right, up);
  }
  else
  {
    AnglesToAxis(&v18, &axis);
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    if ( forward )
    {
      v15 = out.m[0].v[1];
      forward->v[0] = out.m[0].v[0];
      forward->v[2] = out.m[0].v[2];
      forward->v[1] = v15;
    }
    if ( right )
    {
      LODWORD(v16) = LODWORD(out.m[1].v[1]) ^ _xmm;
      right->v[0] = COERCE_FLOAT(LODWORD(out.m[1].v[0]) ^ _xmm);
      right->v[2] = COERCE_FLOAT(LODWORD(out.m[1].v[2]) ^ _xmm);
      right->v[1] = v16;
    }
    if ( up )
    {
      v17 = out.m[2].v[1];
      up->v[0] = out.m[2].v[0];
      up->v[2] = out.m[2].v[2];
      up->v[1] = v17;
    }
  }
}

/*
==============
BG_GetScriptWristwatchTime
==============
*/
void BG_GetScriptWristwatchTime(const playerState_s *ps, bool *outInUse, int *outHours, int *outMinutes, bool *outUseTransition)
{
  unsigned __int16 watchTimePacked; 
  __int16 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  watchTimePacked = ps->watchTimePacked;
  v7 = watchTimePacked >> 11;
  v8 = watchTimePacked & 0x7FF;
  *outUseTransition = v7 & 1;
  *outInUse = (v7 & 2) != 0;
  *outMinutes = v8 % 0x3C;
  *outHours = v8 / 0x3C;
  if ( (unsigned int)*outMinutes > 0x3B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4862, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outMinutes ) && ( outMinutes ) <= ( 59 )", "outMinutes not in [0, 59]\n\t%i not in [%i, %i]", *outMinutes, 0i64, 59) )
    __debugbreak();
  if ( (unsigned int)*outHours > 0x17 )
  {
    LODWORD(v10) = 23;
    LODWORD(v9) = *outHours;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4863, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outHours ) && ( outHours ) <= ( 23 )", "outHours not in [0, 23]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
      __debugbreak();
  }
}

/*
==============
BG_GetShellshockParms
==============
*/
shellshock_parms_t *BG_GetShellshockParms(const int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( (unsigned int)index >= 0x40 )
  {
    v4 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3628, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( bg_shellshockParms ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( bg_shellshockParms )\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return &bg_shellshockParms[v1];
}

/*
==============
BG_GetStickCartesianCoords
==============
*/
vec2_t BG_GetStickCartesianCoords(const char x, const char y)
{
  __int64 v3; 

  *(float *)&v3 = (float)x * 0.0078740157;
  *((float *)&v3 + 1) = (float)y * 0.0078740157;
  return (vec2_t)v3;
}

/*
==============
BG_GetThirdPersonCrosshairOffset
==============
*/
float BG_GetThirdPersonCrosshairOffset(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const dvar_t *v4; 
  const dvar_t *v6; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3914, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3915, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_camera_thirdPerson;
  if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x2Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3916, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_camera_thirdPerson, \"camera_thirdPerson\" ) || ps->otherFlags.TestFlag( POtherFlagsMP::CAMERA_THIRD_PERSON ))", (const char *)&queryFormat, "Dvar_GetBool( camera_thirdPerson ) || ps->otherFlags.TestFlag( POtherFlagsMP::CAMERA_THIRD_PERSON )") )
    __debugbreak();
  if ( !BG_IsThirdPersonMode(weaponMap, ps) )
    return 0.0;
  v6 = DCONST_DVARMPSPFLT_camera_thirdPersonCrosshairOffset;
  if ( !DCONST_DVARMPSPFLT_camera_thirdPersonCrosshairOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonCrosshairOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return v6->current.value;
}

/*
==============
BG_GetThirdPersonMeleeCone
==============
*/
void BG_GetThirdPersonMeleeCone(const BgHandler *pmoveHandler, const playerState_s *ps, vec3_t *outConeOrigin, vec3_t *outConeForward, vec3_t *outConeRight, vec3_t *outConeUp)
{
  const dvar_t *v9; 
  float value; 
  float v11; 
  float v12; 
  double v13; 
  vec3_t outUp; 
  vec3_t angles; 
  WorldUpReferenceFrame v16; 

  WorldUpReferenceFrame::WorldUpReferenceFrame(&v16, ps, pmoveHandler);
  WorldUpReferenceFrame::GetUpVector(&v16, &outUp);
  v9 = DCONST_DVARFLT_bg_thirdPersonMeleeHeightOffset;
  if ( !DCONST_DVARFLT_bg_thirdPersonMeleeHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_thirdPersonMeleeHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v11 = value * outUp.v[1];
  outConeOrigin->v[0] = (float)(value * outUp.v[0]) + ps->origin.v[0];
  v12 = value * outUp.v[2];
  outConeOrigin->v[1] = v11 + ps->origin.v[1];
  outConeOrigin->v[2] = v12 + ps->origin.v[2];
  v13 = BG_MovementDirToDegrees(ps->movementDir);
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  angles.v[1] = *(float *)&v13;
  AngleVectors(&angles, outConeForward, outConeRight, outConeUp);
}

/*
==============
BG_Glass_CanBreakGlass
==============
*/
bool BG_Glass_CanBreakGlass(const trace_t *trace)
{
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4310, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  return 1.0 != trace->fraction && (trace->contents & 0x10) != 0 && Trace_GetGlassHitId(trace) && Com_IsSurfaceTypeBreakableGlass(trace->surfaceFlags);
}

/*
==============
BG_HasRoomForScavengerPickup
==============
*/
__int64 BG_HasRoomForScavengerPickup(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  unsigned int v4; 
  const Weapon *Weapon; 
  const Weapon *v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 841, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 842, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = 0;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v4 >= 0xF )
    {
      LODWORD(v9) = 15;
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v4]);
    v6 = Weapon;
    if ( Weapon->weaponIdx )
    {
      if ( (BG_GetWeaponType(Weapon, 0) == WEAPTYPE_BULLET || BG_GetWeaponClass(v6, 0) == WEAPCLASS_THROWINGKNIFE) && (BG_PlayerHasRoomForAmmo(weaponMap, ps, v6, 0) || BG_HasUnderbarrelAmmo(v6) && BG_GetWeaponType(v6, 1) == WEAPTYPE_BULLET && BG_PlayerHasRoomForAmmo(weaponMap, ps, v6, 1)) )
        break;
    }
    if ( (int)++v4 >= 15 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
BG_InitPlayerState
==============
*/
void BG_InitPlayerState(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4417, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->cameraTypeIndex = 0;
  memset_0(ps->weapState, 0, sizeof(ps->weapState));
  *(_DWORD *)&ps->meleeChargeEnt = 134154239;
  ps->cinematicMotionOverride = 31;
  ps->accessoryIndex = 127;
  ps->equippedExecution = 255;
  ps->groundRefEnt = 2047;
  *(_QWORD *)&ps->activeExecution = 255i64;
  ps->secondaryCollisionStartTime = 0;
  ps->doorState[0].index = -1;
  ps->doorState[1].index = -1;
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Bu);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Cu);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Du);
  ps->pm_flags.m_flags[1] &= 0xFFE07FFF;
  ps->pm_flags.m_flags[0] &= 0xDFEFFFDF;
  *(_QWORD *)ps->skydivePlayerState.state = 0i64;
  *(_QWORD *)&ps->skydivePlayerState.currentThrottle = 0i64;
  *(_QWORD *)&ps->skydivePlayerState.pitchVelocity = 0i64;
  *(_QWORD *)&ps->skydivePlayerState.rollVelocity = 0i64;
  *(_QWORD *)&ps->skydivePlayerState.controllerBuffer = 0i64;
  memset_0(&ps->mantleState, 0, sizeof(ps->mantleState));
  *(_QWORD *)&ps->slideState.flags = 0i64;
  *(_QWORD *)&ps->slideState.slideEndTime = 0i64;
  *(_QWORD *)&ps->slideState.slideType = 0i64;
  *(_QWORD *)&ps->ladderState.modeStartTime = 0i64;
  *(_QWORD *)&ps->ladderState.startViewAngles.y = 0i64;
  ps->carryState.flags = 0;
  *(_QWORD *)&ps->sprintState.sprintButtonUpRequired = 0i64;
  *(_QWORD *)&ps->sprintState.sprintRestoreDelayStart = 0i64;
  *(_QWORD *)&ps->sprintState.lastSprintStart = 0i64;
  *(_QWORD *)&ps->sprintState.lastSuperSprintStart = 0i64;
  ps->sprintState.sprintStartMaxLength = 0;
  memset_0(&ps->mountState, 0, sizeof(ps->mountState));
  BG_GameInterface_InitPlayerStateGameData(ps);
  ps->dofPhysicalScriptingState = DOF_PHYSICAL_SCRIPTING_DISABLED;
  *(_QWORD *)&ps->lensProfileDistortFocalLength = 0i64;
  ps->vignetteSquareAspectRatio = 0.0;
  ps->vignetteBoxSize = 0i64;
  ps->vignetteOffset = 0i64;
  ps->vignetteLerpDuration = 0.0;
  ps->dofPhysicalFstop = 22.0;
  ps->dofPhysicalFocusDistance = 29.301001;
  ps->dofPhysicalViewModelFstop = 22.0;
  strcpy((char *)&ps->dofPhysicalViewModelFocusDistance, "shêAshêAshêA");
  ps->dofPhysicalFocusSpeed = 1.0;
  ps->dofPhysicalApertureSpeed = 2.0;
  BYTE1(ps->lensProfileMode) = 0;
  HIWORD(ps->lensProfileMode) = 0;
  ps->lensProfileScale = 1.0;
  ps->lensProfileUVScale = 1.0;
  ps->vignetteIntensity = -1.0;
  ps->vignetteScale.v[0] = 1.0;
  ps->vignetteScale.v[1] = 1.0;
  *(_QWORD *)&ps->vignetteFalloff = 1065353216i64;
}

/*
==============
BG_InitPlayerState_OnConnect
==============
*/
void BG_InitPlayerState_OnConnect(playerState_s *ps, int clientNum)
{
  __int64 v4; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  __int64 v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v6) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4519, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v6, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  ps->clientNum = clientNum;
  ps->corpseIndex = 15;
  BG_InitPlayerstateVehicle(ps);
  BG_SetSpeedScaleMultiplier(ps, 1.0);
  v4 = 0i64;
  p_eFlags = &ps->eFlags;
  while ( !p_eFlags->m_flags[0] )
  {
    ++v4;
    ++p_eFlags;
    if ( v4 >= 1 )
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4530, ASSERT_TYPE_ASSERT, "(!ps->eFlags.TestAnyFlags())", (const char *)&queryFormat, "!ps->eFlags.TestAnyFlags()") )
    __debugbreak();
LABEL_19:
  BG_InitPlayerState(ps);
}

/*
==============
BG_InitPlayerState_OnSpawn
==============
*/
void BG_InitPlayerState_OnSpawn(playerState_s *ps, int clientNum, bool dummyInit)
{
  unsigned int v6; 
  GHandler *Handler; 
  __int64 v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4592, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v6 = clientNum;
  if ( dummyInit )
    v6 = 0;
  if ( v6 >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4593, ASSERT_TYPE_ASSERT, "(unsigned)( dummyInit ? 0 : clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "dummyInit ? 0 : clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v8, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  BG_InitPlayerState(ps);
  ps->groundRefEnt = 2047;
  if ( !dummyInit )
    ps->clientNum = clientNum;
  ps->corpseIndex = 15;
  ps->viewlocked_entNum = 2047;
  ps->linkEnt = 2047;
  *(_DWORD *)&ps->remoteEyesEnt = 134154239;
  Handler = GHandler::getHandler();
  BGMovingPlatformPS::Init(&ps->movingPlatforms, ps, Handler);
  *(_QWORD *)&ps->weapCommon.spreadOverride = 0i64;
  ps->weapCommon.adsStartTime = 0;
  ps->weapCommon.fAimSpreadMovementScale = 1.0;
  ps->throwbackGrenadeTimeLeft = 0;
  ps->throwbackGrenadeOwner = 2047;
  ps->grenadeCookScale = MSG_PackSignedFloat(1.0, 5.0, 0xCu);
  ps->viewKickScale = 1.0;
  ps->turnStartTime = 0;
  *(_QWORD *)&ps->lastStandTime = 0i64;
  ps->lastStandMoveStopTime = 0;
  BG_InitPlayerstateVehicle(ps);
  ps->pm_flags.m_flags[0] |= 0x8000u;
  ps->legsTimer = 0;
  ps->torsoTimer = 0;
  ps->viewHeightLerpTime = 0;
}

/*
==============
BG_InitPlayerState_PrepareForUseAsDelta
==============
*/
void BG_InitPlayerState_PrepareForUseAsDelta(playerState_s *ps, int clientNum, bool dummyInit)
{
  unsigned int v6; 
  GHandler *Handler; 
  __int64 v8; 
  __int64 v9; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4643, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v6 = clientNum;
  if ( dummyInit )
    v6 = 0;
  if ( v6 >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4644, ASSERT_TYPE_ASSERT, "(unsigned)( dummyInit ? 0 : clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "dummyInit ? 0 : clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v8, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4592, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v6 >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v9) = ComCharacterLimits::ms_gameData.m_clientCount;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4593, ASSERT_TYPE_ASSERT, "(unsigned)( dummyInit ? 0 : clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "dummyInit ? 0 : clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  BG_InitPlayerState(ps);
  ps->groundRefEnt = 2047;
  if ( !dummyInit )
    ps->clientNum = clientNum;
  ps->corpseIndex = 15;
  ps->viewlocked_entNum = 2047;
  ps->linkEnt = 2047;
  *(_DWORD *)&ps->remoteEyesEnt = 134154239;
  Handler = GHandler::getHandler();
  BGMovingPlatformPS::Init(&ps->movingPlatforms, ps, Handler);
  *(_QWORD *)&ps->weapCommon.spreadOverride = 0i64;
  ps->weapCommon.adsStartTime = 0;
  ps->weapCommon.fAimSpreadMovementScale = 1.0;
  ps->throwbackGrenadeTimeLeft = 0;
  ps->throwbackGrenadeOwner = 2047;
  ps->grenadeCookScale = MSG_PackSignedFloat(1.0, 5.0, 0xCu);
  ps->viewKickScale = 1.0;
  ps->turnStartTime = 0;
  *(_QWORD *)&ps->lastStandTime = 0i64;
  ps->lastStandMoveStopTime = 0;
  BG_InitPlayerstateVehicle(ps);
  ps->pm_flags.m_flags[0] |= 0x8000u;
  ps->gravity = 800;
  ps->legsTimer = 0;
  ps->torsoTimer = 0;
  ps->viewHeightLerpTime = 0;
  ps->pm_type = 5;
  ps->pm_flags.m_flags[0] &= ~0x8000u;
  BG_SetSpeedScaleMultiplier(ps, 1.0);
}

/*
==============
BG_InitPlayerState_Spectator
==============
*/
void BG_InitPlayerState_Spectator(playerState_s *ps, int clientNum)
{
  __int64 v4; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4539, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v4) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4540, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", v4, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  BG_InitPlayerState(ps);
  ps->clientNum = clientNum;
  if ( ps == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 5u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 6u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 7u);
  ps->viewlocked = PLAYERVIEWLOCK_NONE;
  ps->viewlocked_entNum = 2047;
  BG_InitPlayerstateVehicle(ps);
  ps->pm_flags.m_flags[0] &= 0xEFDFFDFF;
  BG_ClearLinkedToAnimFlags(ps);
  BG_SetOnWallAnimFlag(ps, 0);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 7u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x29u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x21u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x27u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 1u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 2u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 3u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 5u);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2409, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x18u);
  ps->linkFlags.m_flags[0] = 0;
  ps->linkEnt = 2047;
  ps->weapCommon.fWeaponPosFrac = 0.0;
  BG_WeaponResetADSReloadFraction(ps);
  *(_QWORD *)&ps->shellshockIndex = 0i64;
  ps->shellshockDuration = 0;
  ps->viewKickScale = 1.0;
}

/*
==============
BG_IsCharacterEntityIndex
==============
*/
bool BG_IsCharacterEntityIndex(const int entityNum)
{
  if ( entityNum < 0 )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return entityNum < (int)ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
BG_IsClientVehicleCamera
==============
*/
char BG_IsClientVehicleCamera(const playerState_s *ps, const BgHandler *handler)
{
  bool outHasTurret; 

  return BG_GetClientVehicleCamera(ps, handler, &outHasTurret);
}

/*
==============
BG_IsClientVehicleTurretCamera
==============
*/
bool BG_IsClientVehicleTurretCamera(const playerState_s *ps, const BgHandler *handler)
{
  bool outHasTurret; 

  outHasTurret = 0;
  return BG_GetClientVehicleCamera(ps, handler, &outHasTurret) && outHasTurret;
}

/*
==============
BG_IsEMPJammed
==============
*/
_BOOL8 BG_IsEMPJammed(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !BG_HasPerk(&ps->perks, 0x2Cu) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xAu);
}

/*
==============
BG_IsGameTypeQuick_ARM
==============
*/
bool BG_IsGameTypeQuick_ARM(const BgHandler *const handler)
{
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4756, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  return (unsigned __int8)handler->GetGameTypeQuick((BgHandler *)handler) == COUNT;
}

/*
==============
BG_IsGameTypeQuick_BR
==============
*/
bool BG_IsGameTypeQuick_BR(const BgHandler *const handler)
{
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4740, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  return (unsigned __int8)handler->GetGameTypeQuick((BgHandler *)handler) == DODGE;
}

/*
==============
BG_IsGameTypeQuick_BRTDM
==============
*/
bool BG_IsGameTypeQuick_BRTDM(const BgHandler *const handler)
{
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4748, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  return (unsigned __int8)handler->GetGameTypeQuick((BgHandler *)handler) == 4;
}

/*
==============
BG_IsLandingEvent
==============
*/
bool BG_IsLandingEvent(const int event)
{
  return (unsigned int)(event - 181) <= 3;
}

/*
==============
BG_IsPainLandingEvent
==============
*/
bool BG_IsPainLandingEvent(const int event)
{
  return (unsigned int)(event - 185) <= 3;
}

/*
==============
BG_IsPlayerPositionQuantized
==============
*/
bool BG_IsPlayerPositionQuantized(const playerState_s *ps)
{
  const dvar_t *v2; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) || BG_IsPlayerInExecution(ps) || BG_ContextMount_IsActive(ps) )
    return 0;
  v2 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerCharacterCollisionThrottleQuantization, "playerCharacterCollisionThrottleQuantization") )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x3Au) )
      return 0;
  }
  return !BGMovingPlatforms::IsOnMovingPlatform(ps) && !BG_Skydive_IsSkydiving(ps);
}

/*
==============
BG_IsPlayerVelocityQuantized
==============
*/
bool BG_IsPlayerVelocityQuantized(const playerState_s *ps)
{
  return !BG_Skydive_IsSkydiving(ps) && BG_IsPlayerPositionQuantized(ps);
}

/*
==============
BG_IsRagdollTrajectory
==============
*/
_BOOL8 BG_IsRagdollTrajectory(const trajectory_t_secure *trajectory)
{
  if ( !trajectory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1074, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( !ragdoll_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1076, ASSERT_TYPE_ASSERT, "(ragdoll_enable)", (const char *)&queryFormat, "ragdoll_enable") )
    __debugbreak();
  return ragdoll_enable->current.enabled && (unsigned int)(trajectory->trType - 23) <= 5;
}

/*
==============
BG_IsScavengerPickup
==============
*/
_BOOL8 BG_IsScavengerPickup(const Weapon *weapon)
{
  const WeaponDef *v1; 

  v1 = BG_WeaponDef(weapon, 0);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 833, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v1->inventoryType == WEAPINVENTORY_SCAVENGER;
}

/*
==============
BG_IsThirdPersonMode
==============
*/
bool BG_IsThirdPersonMode(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const dvar_t *v4; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3881, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3882, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_camera_thirdPerson;
  if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x2Du) || (unsigned int)(ps->pm_type - 5) <= 1 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) || GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) || BG_IsVehicleActive(ps) )
    return 0;
  if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 0;
  }
  return !BG_UsingSniperScope(weaponMap, ps) || 1.0 != ps->weapCommon.fWeaponPosFrac;
}

/*
==============
BG_IsUAVJammed
==============
*/
bool BG_IsUAVJammed(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1682, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPON_MANTLE_OVER_WEAPON_DOWN|0x80) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x37u);
}

/*
==============
BG_IsWeaponEvent
==============
*/
bool BG_IsWeaponEvent(const int eventType)
{
  __int64 v1; 
  int v4; 

  v1 = eventType;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    v4 = 227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", eventType, v4) )
      __debugbreak();
  }
  return s_bgEventParmType[v1] == EVENT_PARAM_WEAPON;
}

/*
==============
BG_LandingTypeFromEntityEvent
==============
*/
__int64 BG_LandingTypeFromEntityEvent(const int event)
{
  __int64 result; 

  switch ( event )
  {
    case 181:
      result = 6i64;
      break;
    case 182:
    case 183:
    case 184:
      result = 7i64;
      break;
    case 185:
    case 186:
    case 187:
      result = 8i64;
      break;
    case 188:
      result = 9i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1388, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "EntityEvent '%d' does not map to a FootstepMoveType_t.", event) )
        __debugbreak();
      result = 0xFFFFFFFFi64;
      break;
  }
  return result;
}

/*
==============
BG_LerpFontScale
==============
*/
void BG_LerpFontScale(const hudelem_t *elem, int time, float *toScale)
{
  int v3; 
  int fontScaleTime; 
  int v7; 
  float v8; 

  v3 = time - elem->fontScaleStartTime;
  fontScaleTime = elem->fontScaleTime;
  if ( fontScaleTime <= 0 || v3 >= fontScaleTime )
  {
    *toScale = elem->fontScale;
  }
  else
  {
    v7 = 0;
    if ( v3 >= 0 )
      v7 = v3;
    v8 = (float)v7 / (float)fontScaleTime;
    if ( (v8 < 0.0 || v8 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3473, ASSERT_TYPE_ASSERT, "( ( lerp >= 0.0f && lerp <= 1.0f ) )", "( lerp ) = %g", v8) )
      __debugbreak();
    *toScale = (float)((float)(elem->fontScale - elem->fromFontScale) * v8) + elem->fromFontScale;
  }
}

/*
==============
BG_LerpHudColors
==============
*/
void BG_LerpHudColors(const hudelem_t *elem, int time, hudelem_color_t *toColor)
{
  int v3; 
  int fadeTime; 
  int v7; 
  float v8; 

  v3 = time - elem->fadeStartTime;
  fadeTime = elem->fadeTime;
  if ( fadeTime <= 0 || v3 >= fadeTime )
  {
    *toColor = elem->color;
  }
  else
  {
    v7 = 0;
    if ( v3 >= 0 )
      v7 = v3;
    v8 = (float)v7 / (float)fadeTime;
    if ( (v8 < 0.0 || v8 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3496, ASSERT_TYPE_ASSERT, "( ( lerp >= 0.0f && lerp <= 1.0f ) )", "( lerp ) = %g", v8) )
      __debugbreak();
    toColor->r = (int)(float)((float)((float)(elem->color.r - elem->fromColor.r) * v8) + (float)elem->fromColor.r);
    toColor->g = (int)(float)((float)((float)(elem->color.g - elem->fromColor.g) * v8) + (float)elem->fromColor.g);
    toColor->b = (int)(float)((float)((float)(elem->color.b - elem->fromColor.b) * v8) + (float)elem->fromColor.b);
    toColor->a = (int)(float)((float)((float)(elem->color.a - elem->fromColor.a) * v8) + (float)elem->fromColor.a);
  }
}

/*
==============
BG_LerpViewClampState
==============
*/

void __fastcall BG_LerpViewClampState(double currentTime, viewClampState *clamp)
{
  float accelTime; 
  float decelTime; 
  float totalTime; 
  float v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  __int128 totalTime_low; 
  bool v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v22; 

  accelTime = clamp->accelTime;
  decelTime = clamp->decelTime;
  totalTime = clamp->totalTime;
  if ( totalTime > 0.001 )
  {
    v7 = 2.0 / (float)((float)((float)(totalTime * 2.0) - accelTime) - decelTime);
    v9 = *(_OWORD *)&currentTime;
    *(float *)&v9 = *(float *)&currentTime - clamp->startTime;
    v8 = v9;
    if ( *(float *)&v9 >= accelTime )
    {
      totalTime_low = LODWORD(clamp->totalTime);
      *(float *)&totalTime_low = totalTime - decelTime;
      v12 = totalTime_low;
      v14 = *(float *)&v8 < (float)(totalTime - decelTime);
      v16 = v8;
      *(float *)&v16 = *(float *)&v8 - accelTime;
      v15 = v16;
      *(float *)&v8 = clamp->accelTime;
      if ( v14 )
      {
        v10 = v16;
        LODWORD(_XMM8) = 0;
      }
      else
      {
        v17 = v12;
        *(float *)&v17 = *(float *)&v12 - accelTime;
        v10 = v17;
        v19 = v15;
        *(float *)&v19 = *(float *)&v15 - *(float *)&v10;
        _XMM0 = v19;
        __asm { vminss  xmm8, xmm0, xmm6 }
      }
    }
    else
    {
      v10 = 0i64;
      LODWORD(_XMM8) = 0;
    }
    if ( accelTime == 0.0 )
      v20 = 0.0;
    else
      v20 = (float)((float)((float)(v7 / accelTime) * 0.5) * *(float *)&v8) * *(float *)&v8;
    v21 = v10;
    *(float *)&v21 = *(float *)&v10 * v7;
    if ( decelTime == 0.0 )
      v22 = 0.0;
    else
      v22 = (float)(v7 - (float)((float)((float)(v7 / decelTime) * 0.5) * *(float *)&_XMM8)) * *(float *)&_XMM8;
    *(float *)&v21 = (float)(*(float *)&v21 + v20) + v22;
    _XMM1 = v21;
    __asm
    {
      vmaxss  xmm1, xmm1, xmm4
      vminss  xmm6, xmm1, cs:__real@3f800000
    }
  }
  else
  {
    *(float *)&_XMM6 = FLOAT_1_0;
  }
  clamp->min.current.v[0] = (float)((float)(clamp->min.goal.v[0] - clamp->min.start.v[0]) * *(float *)&_XMM6) + clamp->min.start.v[0];
  clamp->min.current.v[1] = (float)((float)(clamp->min.goal.v[1] - clamp->min.start.v[1]) * *(float *)&_XMM6) + clamp->min.start.v[1];
  clamp->max.current.v[0] = (float)((float)(clamp->max.goal.v[0] - clamp->max.start.v[0]) * *(float *)&_XMM6) + clamp->max.start.v[0];
  clamp->max.current.v[1] = (float)((float)(clamp->max.goal.v[1] - clamp->max.start.v[1]) * *(float *)&_XMM6) + clamp->max.start.v[1];
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    clamp->resistMin.current.v[0] = (float)((float)(clamp->resistMin.goal.v[0] - clamp->resistMin.start.v[0]) * *(float *)&_XMM6) + clamp->resistMin.start.v[0];
    clamp->resistMin.current.v[1] = (float)((float)(clamp->resistMin.goal.v[1] - clamp->resistMin.start.v[1]) * *(float *)&_XMM6) + clamp->resistMin.start.v[1];
    clamp->resistMax.current.v[0] = (float)((float)(clamp->resistMax.goal.v[0] - clamp->resistMax.start.v[0]) * *(float *)&_XMM6) + clamp->resistMax.start.v[0];
    clamp->resistMax.current.v[1] = (float)((float)(clamp->resistMax.goal.v[1] - clamp->resistMax.start.v[1]) * *(float *)&_XMM6) + clamp->resistMax.start.v[1];
  }
}

/*
==============
BG_LoadShellShockDvars
==============
*/
_BOOL8 BG_LoadShellShockDvars(const char *name)
{
  char *m_ptr; 
  const char *RawTextFile; 
  BOOL DvarsFromBuffer; 
  Mem_LargeLocal v6; 
  char *dvarnames[284]; 
  char dest[64]; 

  Mem_LargeLocal::Mem_LargeLocal(&v6, 0x18000ui64, "max_raw_buf buf");
  m_ptr = (char *)v6.m_ptr;
  Com_sprintf(dest, 0x40ui64, "shock/%s.shock", name);
  RawTextFile = Com_LoadRawTextFile(dest, m_ptr, 98304);
  if ( RawTextFile || (Com_PrintError(17, "couldn't open '%s'.\n", dest), (RawTextFile = Com_LoadRawTextFile("shock/default.shock", m_ptr, 98304)) != NULL) )
  {
    dvarnames[0] = (char *)bgShockDvarNames[0];
    dvarnames[1] = (char *)bgShockDvarNames[1];
    dvarnames[2] = (char *)bgShockDvarNames[2];
    dvarnames[3] = (char *)bgShockDvarNames[3];
    dvarnames[4] = (char *)bgShockDvarNames[4];
    dvarnames[5] = (char *)bgShockDvarNames[5];
    dvarnames[6] = (char *)bgShockDvarNames[6];
    dvarnames[7] = (char *)bgShockDvarNames[7];
    dvarnames[8] = (char *)bgShockDvarNames[8];
    dvarnames[9] = (char *)bgShockDvarNames[9];
    dvarnames[10] = (char *)bgShockDvarNames[10];
    dvarnames[11] = (char *)bgShockDvarNames[11];
    dvarnames[12] = (char *)bgShockDvarNames[12];
    dvarnames[13] = (char *)bgShockDvarNames[13];
    dvarnames[14] = (char *)bgShockDvarNames[14];
    dvarnames[15] = (char *)bgShockDvarNames[15];
    dvarnames[16] = (char *)bgShockDvarNames[16];
    dvarnames[17] = (char *)bgShockDvarNames[17];
    dvarnames[18] = (char *)bgShockDvarNames[18];
    dvarnames[19] = (char *)bgShockDvarNames[19];
    dvarnames[20] = (char *)bgShockDvarNames[20];
    dvarnames[21] = (char *)bgShockDvarNames[21];
    dvarnames[22] = (char *)bgShockDvarNames[22];
    dvarnames[23] = (char *)bgShockDvarNames[23];
    dvarnames[24] = (char *)bgShockDvarNames[24];
    dvarnames[25] = (char *)bgShockDvarNames[25];
    dvarnames[26] = (char *)bgShockDvarNames[26];
    dvarnames[27] = (char *)bgShockDvarNames[27];
    DvarsFromBuffer = Com_LoadDvarsFromBuffer((const char **)dvarnames, 0x1Cu, RawTextFile, dest);
  }
  else
  {
    Com_PrintError(17, "couldn't open 'shock/default.shock'. This is a default shock file that you should have.\n");
    DvarsFromBuffer = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v6);
  return DvarsFromBuffer;
}

/*
==============
BG_MeleeChargeShouldLockView
==============
*/
__int64 BG_MeleeChargeShouldLockView(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  bool v5; 
  unsigned int v6; 
  bool v7; 
  bool IsDualWieldingAllowed; 
  const dvar_t *v9; 
  int v11; 
  int outMeleeViewLockTime; 
  int outMeleeTime; 
  int outMeleeDamageTime; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4032, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4033, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = BG_UsingAlternate(ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(ps) )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    IsDualWieldingAllowed = BG_Ladder_IsDualWieldingAllowed(ps);
    v6 = 0;
    v7 = 0;
    if ( IsDualWieldingAllowed )
      v7 = ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  }
  BG_GetMeleeTime(weaponMap, ps, v5, v7, ps->weapState[0].weaponState == 23, &outMeleeTime, &outMeleeDamageTime, &outMeleeViewLockTime);
  v9 = DCONST_DVARBOOL_melee_queueing_viewlock;
  if ( !DCONST_DVARBOOL_melee_queueing_viewlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_queueing_viewlock") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && outMeleeViewLockTime > 0 && ps->meleeChargeEnt == ps->meleeChargeEntQueued )
    return 1i64;
  v11 = outMeleeTime - outMeleeViewLockTime;
  if ( outMeleeTime - outMeleeViewLockTime < 0 )
    v11 = 0;
  LOBYTE(v6) = ps->weapState[0].weaponTime > v11;
  return v6;
}

/*
==============
BG_NetDataChecksum
==============
*/
unsigned int BG_NetDataChecksum()
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/perktable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3703, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v0 = StringTable_Checksum(tablePtr, 0);
  StringTable_GetAsset("mp/allChallengesTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3708, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v1 = StringTable_Checksum(tablePtr, v0);
  StringTable_GetAsset("mp/weeklyChallengesTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3714, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v2 = StringTable_Checksum(tablePtr, v1);
  StringTable_GetAsset("mp/dailyChallengesTable.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3718, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v3 = StringTable_Checksum(tablePtr, v2);
  StringTable_GetAsset("mp/scriptClientData.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3724, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v4 = StringTable_Checksum(tablePtr, v3);
  StringTable_GetAsset("omnvars/omnvars.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3730, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v5 = StringTable_Checksum(tablePtr, v4);
  StringTable_GetAsset("omnvars/mp/omnvars.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3734, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v6 = StringTable_Checksum(tablePtr, v5);
  StringTable_GetAsset("omnvars/cp/omnvars.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3738, ASSERT_TYPE_ASSERT, "(stringTable)", (const char *)&queryFormat, "stringTable") )
    __debugbreak();
  v7 = StringTable_Checksum(tablePtr, v6);
  return BG_Customization_GetChecksum(v7);
}

/*
==============
BG_PlayerCanPickUpWeaponOffhandClass
==============
*/
bool BG_PlayerCanPickUpWeaponOffhandClass(const BgWeaponMap *weaponMap, const Weapon *weapon, const playerState_s *ps)
{
  bool v6; 
  const WeaponDef *v7; 
  OffhandClass offhandClass; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 874, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 875, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  v7 = BG_WeaponDef(weapon, v6);
  offhandClass = v7->offhandClass;
  if ( offhandClass == OFFHAND_CLASS_NONE )
    return 1;
  if ( offhandClass != ps->weapCommon.offhandPrimary && offhandClass != ps->weapCommon.offhandSecondary )
    return 0;
  return offhandClass != OFFHAND_CLASS_OTHER || BG_PlayerHasWeapon(weaponMap, ps, weapon) || BG_GetFirstEquippedOffhandByClass(weaponMap, ps, v7->offhandClass)->weaponIdx == 0;
}

/*
==============
BG_PlayerHasRoomForAmmo
==============
*/
char BG_PlayerHasRoomForAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  __int16 v4; 
  AmmoStore *v9; 
  unsigned int v10; 
  __int64 v12; 
  __int64 v13; 
  AmmoStore v14; 
  Weapon weapona; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 798, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 799, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_WeaponAllowsAmmoPickup(weapon, isAlternate) )
    return 0;
  v9 = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  v10 = 0;
  r_ammo2 = *v9;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v10 >= 0xF )
    {
      LODWORD(v13) = 15;
      LODWORD(v12) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    weapona = *BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v10]);
    if ( v4 )
    {
      result = *BG_AmmoStoreForWeapon(&v14, &weapona, 0);
      if ( BG_IsAmmoCompatible(&result, &r_ammo2) )
      {
        if ( BG_GetMaxPickupableAmmo(weaponMap, ps, &weapona, 0) > 0 )
          break;
      }
      if ( BG_HasUnderbarrelAmmo(&weapona) )
      {
        result = *BG_AmmoStoreForWeapon(&v14, &weapona, 1);
        if ( BG_IsAmmoCompatible(&result, &r_ammo2) )
        {
          if ( BG_GetMaxPickupableAmmo(weaponMap, ps, &weapona, 1) > 0 )
            break;
        }
      }
    }
    if ( (int)++v10 >= 15 )
      return 0;
  }
  return 1;
}

/*
==============
BG_PlayerHasRoomForEntAllAmmoTypes
==============
*/
_BOOL8 BG_PlayerHasRoomForEntAllAmmoTypes(const BgWeaponMap *weaponMap, const entityState_t *ent, const playerState_s *ps)
{
  const Weapon *WeaponForEntity; 
  const Weapon *v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1055, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1056, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1057, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, ent);
  v7 = WeaponForEntity;
  return WeaponForEntity->weaponIdx && (BG_GetMaxPickupableAmmo(weaponMap, ps, WeaponForEntity, 0) || BG_HasUnderbarrelAmmo(v7) && BG_GetMaxPickupableAmmo(weaponMap, ps, v7, 1));
}

/*
==============
BG_PlayerStateToEntityState
==============
*/
void BG_PlayerStateToEntityState(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *s, const int snap, const BgHandler *handler)
{
  LerpEntityState *p_lerp; 
  LerpEntityState *v10; 
  bool IsPlayerPositionQuantized; 
  LerpEntityState *v12; 
  double v13; 
  double v14; 
  double TrackedThrottleValue; 
  double v16; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2394, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2395, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2396, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  BG_PlayerToEntity_SetTrajectory(ps, s, snap, handler);
  p_lerp = &s->lerp;
  s->lerp.eFlags.m_flags[0] = ps->eFlags.m_flags[0];
  if ( ps->pm_type < 7 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u);
  v10 = &s->lerp;
  if ( ps->weapCommon.fWeaponPosFrac <= 0.0 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v10->eFlags, GameModeFlagValues::ms_mpValue, 0x19u);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v10->eFlags, GameModeFlagValues::ms_mpValue, 0x19u);
  IsPlayerPositionQuantized = BG_IsPlayerPositionQuantized(ps);
  v12 = &s->lerp;
  if ( IsPlayerPositionQuantized )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v12->eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  else
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v12->eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  BG_PlayerToEntity_SetMisc(weaponMap, ps, s, handler);
  BG_PlayerToEntity_SetStickInput(ps, s);
  if ( BG_Skydive_IsSkydiving(ps) || BG_Skydive_IsWeaponRaise(ps) )
  {
    v13 = I_fclamp(ps->skydivePlayerState.pitch, -1.0, 1.0);
    s->lerp.u.player.extraAnimData.anonymous.data[0] = MSG_PackSignedFloat(*(float *)&v13, 1.0, 0x10u);
    v14 = I_fclamp(ps->skydivePlayerState.roll, -1.0, 1.0);
    s->lerp.u.player.extraAnimData.anonymous.data[1] = MSG_PackSignedFloat(*(float *)&v14, 1.0, 0x10u);
    TrackedThrottleValue = BG_Skydive_GetTrackedThrottleValue(ps);
    v16 = I_fclamp(*(float *)&TrackedThrottleValue, -1.0, 1.0);
    s->lerp.u.player.extraAnimData.anonymous.data[2] = MSG_PackSignedFloat(*(float *)&v16, 1.0, 0x10u);
  }
  else
  {
    *(int *)((char *)&s->lerp.u.anonymous.data[7] + 2) = 0;
    s->lerp.u.player.extraAnimData.anonymous.data[2] = 0;
  }
}

/*
==============
BG_PlayerToEntity_ProcessEventInternal
==============
*/
void BG_PlayerToEntity_ProcessEventInternal(BgWeaponMap *weaponMap, entityState_t *es, const int eventTime, const EntityEvent *events, const int *eventSequence, const bool usingSharedLowLodEventBuffer, int *oldEventSequence)
{
  const EntityEvent *v7; 
  int *v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  entity_event_t eventType; 
  unsigned int eventParm; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  int v23; 
  entity_event_t v24; 
  BgStatic *ActiveStatics; 
  __int16 highLod; 
  unsigned int v27; 
  __int64 eventTimea; 
  __int64 v29; 

  v7 = events;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1599, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v9 = oldEventSequence;
  v10 = BG_EventSeqWrapAround(*eventSequence, *oldEventSequence);
  if ( *eventSequence < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1603, ASSERT_TYPE_ASSERT, "(*eventSequence >= oldSequenceNum)", (const char *)&queryFormat, "*eventSequence >= oldSequenceNum") )
    __debugbreak();
  v11 = *eventSequence;
  if ( v10 < *eventSequence )
  {
    do
    {
      v12 = v10 & 3;
      eventType = v7[v12].eventType;
      eventParm = v7[v12].eventParm;
      if ( eventType )
      {
        v15 = 0i64;
        v16 = 29;
        while ( v16 != eventType )
        {
          v16 = s_serverOnlyEvents[++v15];
          if ( !v16 )
          {
            v17 = 0i64;
            v18 = 10;
            while ( v18 != eventType )
            {
              v18 = s_singleClientEvents[++v17];
              if ( !v18 )
              {
                if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
                {
                  v19 = 0i64;
                  v20 = 36;
                  while ( v20 != eventType )
                  {
                    v20 = s_serverOnlyEventsMP[++v19];
                    if ( !v20 )
                    {
                      v21 = 0i64;
                      v22 = 96;
                      while ( v22 != eventType )
                      {
                        v22 = s_singleClientEventsMP[++v21];
                        if ( !v22 )
                          goto LABEL_22;
                      }
                      goto LABEL_26;
                    }
                  }
                }
                else
                {
LABEL_22:
                  if ( usingSharedLowLodEventBuffer )
                    v23 = (unsigned __int16)es->eventSequence.combined % 3u;
                  else
                    v23 = es->eventSequence.combined & 3;
                  BG_AddEventToEventIndex_NoIncrement(weaponMap, eventType, eventParm, v23, &es->eventSequence.combined, es->events, 69, eventTime);
                  es->eventSequence.combined = es->eventSequence.combined & 0xFFFF0000 | (unsigned __int8)(LOBYTE(es->eventSequence.combined) + 1);
                }
                goto LABEL_26;
              }
            }
            break;
          }
        }
      }
LABEL_26:
      if ( usingSharedLowLodEventBuffer )
      {
        switch ( eventType )
        {
          case EV_FIRE_WEAPON:
          case EV_HITCLIENT_FIRE_WEAPON:
            v24 = EV_FIRE_WEAPON;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LASTSHOT:
          case EV_HITCLIENT_FIRE_WEAPON_LASTSHOT:
            v24 = EV_FIRE_WEAPON_LASTSHOT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_ALT:
          case EV_HITCLIENT_FIRE_WEAPON_ALT:
            v24 = EV_FIRE_WEAPON_ALT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LASTSHOT_ALT:
          case EV_HITCLIENT_FIRE_WEAPON_LASTSHOT_ALT:
            v24 = EV_FIRE_WEAPON_LASTSHOT_ALT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LEFT:
          case EV_HITCLIENT_FIRE_WEAPON_LEFT:
            v24 = EV_FIRE_WEAPON_LEFT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LASTSHOT_LEFT:
          case EV_HITCLIENT_FIRE_WEAPON_LASTSHOT_LEFT:
            v24 = EV_FIRE_WEAPON_LASTSHOT_LEFT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LEFT_ALT:
          case EV_HITCLIENT_FIRE_WEAPON_LEFT_ALT:
            v24 = EV_FIRE_WEAPON_LEFT_ALT;
            goto LABEL_36;
          case EV_FIRE_WEAPON_LASTSHOT_LEFT_ALT:
          case EV_HITCLIENT_FIRE_WEAPON_LASTSHOT_LEFT_ALT:
            v24 = EV_FIRE_WEAPON_LASTSHOT_LEFT_ALT;
LABEL_36:
            ActiveStatics = BgStatic::GetActiveStatics();
            if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1513, ASSERT_TYPE_ASSERT, "(bgstatic)", (const char *)&queryFormat, "bgstatic") )
              __debugbreak();
            if ( !ActiveStatics->UsingLowLodClientEntityEvents(ActiveStatics) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1514, ASSERT_TYPE_ASSERT, "(bgstatic->UsingLowLodClientEntityEvents())", (const char *)&queryFormat, "bgstatic->UsingLowLodClientEntityEvents()") )
              __debugbreak();
            highLod = es->eventSequence.highLod;
            BG_AddEventToEventIndex_NoIncrement(weaponMap, v24, 0, 3, &es->eventSequence.combined, es->events, 76, eventTime);
            v27 = (unsigned __int16)es->eventSequence.combined | ((HIWORD(es->eventSequence.combined) + 1) << 16) & 0x30000;
            es->eventSequence.combined = v27;
            if ( (_WORD)v27 != highLod )
            {
              LODWORD(v29) = highLod;
              LODWORD(eventTimea) = (__int16)v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1521, ASSERT_TYPE_ASSERT, "( es->eventSequence.highLod ) == ( prevHighLodSeq )", "%s == %s\n\t%i, %i", "es->eventSequence.highLod", "prevHighLodSeq", eventTimea, v29) )
                __debugbreak();
            }
            break;
          default:
            break;
        }
      }
      v11 = *eventSequence;
      v7 = events;
      ++v10;
    }
    while ( v10 < *eventSequence );
    v9 = oldEventSequence;
  }
  *v9 = v11;
}

/*
==============
BG_PlayerToEntity_ProcessEvents
==============
*/
void BG_PlayerToEntity_ProcessEvents(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *es, const BgHandler *handler, const int gameTime)
{
  EventSequence v9; 
  BgStatic *ActiveStatics; 
  bool v11; 
  int highLod; 
  int v13; 
  unsigned int v14; 
  unsigned int clientNum; 
  bool v16; 
  __int64 v17; 
  const char *v18; 
  const char *v19; 
  char *fmt; 
  __int64 usingSharedLowLodEventBuffer; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1627, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1628, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1629, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v9.combined = (int)es->eventSequence;
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1640, ASSERT_TYPE_ASSERT, "(bgstatic)", (const char *)&queryFormat, "bgstatic") )
    __debugbreak();
  v11 = ActiveStatics->UsingLowLodClientEntityEvents(ActiveStatics);
  BG_PlayerToEntity_ProcessEventInternal(weaponMap, es, gameTime, ps->pe.events, &ps->pe.eventSequence, v11, &ps->pe.oldEventSequence);
  BG_PlayerToEntity_ProcessEventInternal(weaponMap, es, gameTime, ps->unpredictableEvents, &ps->unpredictableEventSequence, v11, &ps->unpredictableEventSequenceOld);
  highLod = es->eventSequence.highLod;
  es->eventParm = 0;
  v13 = es->eventSequence.highLod - BG_EventSeqWrapAround(highLod, v9.highLod);
  v14 = 4 - v11;
  if ( v13 > (int)v14 )
  {
    clientNum = ps->clientNum;
    v16 = handler->IsServer((BgHandler *)handler);
    LODWORD(fmt) = v13;
    v17 = 67i64;
    if ( v16 )
      v17 = 83i64;
    LODWORD(usingSharedLowLodEventBuffer) = 4 - v11;
    Com_PrintWarning(17, "[%c|%i] Circular event buffer overflow ( Received: %i | Max: %i )\n", v17, clientNum, fmt, usingSharedLowLodEventBuffer);
    v18 = (char *)&queryFormat.fmt + 3;
    if ( v14 <= 3 )
      v19 = (char *)&queryFormat.fmt + 3;
    else
      v19 = s_bgEventNames[ps->pe.events[3].eventType];
    if ( v14 > 3 )
      v18 = "\n[3]";
    Com_PrintWarning(17, "Events are:%s %s%s %s%s %s%s %s\n", "\n[0]", s_bgEventNames[ps->pe.events[0].eventType], "\n[1]", s_bgEventNames[ps->pe.events[1].eventType], "\n[2]", s_bgEventNames[ps->pe.events[2].eventType], v18, v19);
  }
}

/*
==============
BG_PlayerToEntity_SetCharacterMP
==============
*/
void BG_PlayerToEntity_SetCharacterMP(const BgHandler *const handler, const playerState_s *ps, entityState_t *const s)
{
  __int16 v6; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1748, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1749, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  s->clientNum = ps->clientNum;
  s->loopSound = ps->loopSound;
  if ( BG_IsTurretActive(ps) )
    s->otherEntityNum = ps->viewlocked_entNum;
  if ( BG_IsPlayer(ps) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    s->eType = ET_PLAYER;
    v6 = 1;
  }
  else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
  {
    v6 = 17;
    s->eType = ET_AGENT;
  }
  else
  {
    s->eType = ET_INVISIBLE;
    v6 = 5;
  }
  if ( ((v6 - 1) & 0xFFEF) != 0 )
  {
    BG_AnimationMP_PlayerToEntityAnimation(ps, s);
  }
  else if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, s->clientNum);
    if ( !CharacterInfo->usingAnimState )
      BG_AnimationMP_PlayerToEntityAnimation(ps, s);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
      Mantle_UnpackAnimData(&ps->mantleState.compressedAnimData, &CharacterInfo->animData);
    CharacterInfo->meleeChargeEnt = ps->meleeChargeEnt;
    CharacterInfo->meleeAnimDataPacked = BG_GetMeleeAnimConditionsPacked(ps);
    BG_ContextMount_GetWorldmodelProperties(handler, ps, &CharacterInfo->mount);
  }
}

/*
==============
BG_PlayerToEntity_SetMisc
==============
*/
void BG_PlayerToEntity_SetMisc(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *s, const BgHandler *handler)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  const Weapon *CurrentWeaponForPlayerThirdPerson; 
  bool AltWeaponModeAsStoredInEntityState; 
  __int16 playerFlags; 
  __int16 v13; 
  __int16 v14; 
  __int16 v15; 
  BOOL v16; 
  unsigned int v17; 
  __int16 v20; 
  int v21; 
  bool v22; 
  __int16 v23; 
  __int16 v24; 
  __int16 v25; 
  bool IsSkydiving; 
  __int16 v27; 
  __int16 v28; 
  __int16 v29; 
  __int16 v30; 
  __int16 v31; 
  const Weapon *Weapon; 
  unsigned int eType; 
  const Weapon *v34; 
  int v35; 
  const Weapon *v36; 
  bool v37; 
  __int16 v38; 
  __int16 v39; 
  __int16 v40; 
  vec3_t outAngles; 
  WorldUpReferenceFrame v42; 

  _RSI = ps;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2007, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2008, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2009, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    BG_PlayerToEntity_SetCharacterMP(handler, _RSI, s);
  }
  else
  {
    if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1722, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
      __debugbreak();
    if ( !_RSI )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1723, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x22u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1725, ASSERT_TYPE_ASSERT, "(BG_IsPlayer( ps ))", (const char *)&queryFormat, "BG_IsPlayer( ps )") )
      __debugbreak();
    s->eType = ET_PLAYER;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      if ( *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
      {
        ActiveStatics = BgStatic::GetActiveStatics();
        CharacterInfo = BG_GetCharacterInfo(ActiveStatics, s->clientNum);
        CharacterInfo->meleeChargeEnt = _RSI->meleeChargeEnt;
        CharacterInfo->meleeAnimDataPacked = BG_GetMeleeAnimConditionsPacked(_RSI);
      }
      BG_AnimationMP_PlayerToEntityAnimation(_RSI, s);
    }
  }
  if ( BG_IsPlayer(_RSI) )
    s->hudData.data = _RSI->hudData.data;
  CurrentWeaponForPlayerThirdPerson = BG_GetCurrentWeaponForPlayerThirdPerson(weaponMap, _RSI);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &s->weaponHandle, CurrentWeaponForPlayerThirdPerson);
  AltWeaponModeAsStoredInEntityState = BG_GetAltWeaponModeAsStoredInEntityState(_RSI, weaponMap);
  playerFlags = s->lerp.u.player.playerFlags;
  s->inAltWeaponMode = AltWeaponModeAsStoredInEntityState;
  v13 = playerFlags;
  v14 = playerFlags | 2;
  v15 = v13 & 0xFFFD;
  if ( _RSI->mountState.mountFraction <= 0.0 )
    v14 = v15;
  s->lerp.u.player.playerFlags = v14;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    BG_PlayerToEntity_SetStowedWeaponMP(weaponMap, _RSI, s);
  v16 = 0;
  s->groundEntityNum = _RSI->groundEntityNum;
  v17 = 0;
  _RBP = 0i64;
  do
  {
    __asm { vlddqu  xmm6, xmmword ptr [rsi+rbp+5250h] }
    *(_OWORD *)&s->partBits.array[_RBP] = _XMM6;
    _RBP += 4i64;
    ++v17;
  }
  while ( v17 < 2 );
  if ( ((s->eType - 1) & 0xFFEF) != 0 )
  {
    v20 = s->lerp.u.player.playerFlags;
  }
  else
  {
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v42, _RSI, handler);
    WorldUpReferenceFrame::GetAngles(&v42, &outAngles);
    v21 = WorldUpReferenceFrame::PackEntityStateAngles(&outAngles);
    s->lerp.u.player.playerFlags &= 0xFFE3u;
    s->lerp.u.anonymous.data[3] = v21;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xBu) )
    {
      s->lerp.u.player.playerFlags |= 0x10u;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 1u) )
    {
      s->lerp.u.player.playerFlags |= 4u;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0) )
    {
      s->lerp.u.player.playerFlags |= 8u;
    }
    v22 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, GameModeFlagValues::ms_mpValue, 0x3Au);
    v23 = s->lerp.u.player.playerFlags;
    v24 = v23 | 0x8000;
    v25 = v23 & 0x7FFF;
    if ( v22 )
      v25 = v24;
    s->lerp.u.player.playerFlags = v25;
    IsSkydiving = BG_Skydive_IsSkydiving(_RSI);
    v27 = s->lerp.u.player.playerFlags;
    v28 = v27 | 0x100;
    v29 = v27 & 0xFEFF;
    if ( IsSkydiving )
      v29 = v28;
    s->lerp.u.player.playerFlags = v29;
    if ( !BG_HasPerk(&_RSI->perks, 0x2Cu) )
      v16 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xAu);
    v30 = s->lerp.u.player.playerFlags;
    v31 = v30 | 0x200;
    v20 = v30 & 0xFDFF;
    if ( v16 )
      v20 = v31;
  }
  s->lerp.u.player.playerFlags = v20 & 0xFF9F;
  if ( BG_IsPlayerInExecution(_RSI) )
    BG_SetExecutionFlagsForPlayerEntity(s, !_RSI->activeExecutionIsVictim, _RSI->activeExecutionIsVictim, _RSI->activeExecutionIsPropVisible);
  Weapon = BgWeaponMap::GetWeapon(weaponMap, _RSI->executionWeapon);
  eType = (unsigned __int16)s->eType;
  v34 = Weapon;
  if ( (unsigned __int16)eType > 0x11u || (v35 = 131111, !_bittest(&v35, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)((char *)&s->lerp.u.infoVolumeGrapple + 20), v34);
  s->lerp.u.player.playerFlags &= 0xC7FFu;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x1Cu) || BG_IsPlayerInExecution(_RSI) && (!_RSI->activeExecutionIsVictim || (v36 = BG_GetCurrentWeaponForPlayerThirdPerson(weaponMap, _RSI), BG_WeaponDef(v36, 0)->executionVictimHiddenWeapon) || _RSI->activeExecutionIsPrimaryHidden) )
    s->lerp.u.player.playerFlags |= 0x800u;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x1Du) || BG_IsPlayerInExecution(_RSI) && _RSI->activeExecutionIsVictim )
    s->lerp.u.player.playerFlags |= 0x1000u;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, GameModeFlagValues::ms_mpValue, 0x39u) )
    s->lerp.u.player.playerFlags |= 0x2000u;
  v37 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x1Eu);
  v38 = s->lerp.u.player.playerFlags;
  v39 = v38 | 0x80;
  v40 = v38 & 0xFF7F;
  if ( v37 )
    v40 = v39;
  s->lerp.u.player.playerFlags = v40;
  s->lerp.u.player.moveSpeedForAnimBlend = _RSI->moveSpeedForAnimBlend;
}

/*
==============
BG_PlayerToEntity_SetStickInput
==============
*/
void BG_PlayerToEntity_SetStickInput(const playerState_s *ps, entityState_t *s)
{
  unsigned __int16 v4; 
  int forwardmove; 
  unsigned __int16 v6; 
  int pitchmove; 
  float outRadius; 
  float outAngleInDegrees; 
  vec2_t v14; 
  vec2_t cartesianCoords; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2325, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2326, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  v4 = 0;
  if ( BG_IsPlayer(ps) )
  {
    forwardmove = ps->lastInput.forwardmove;
    v14.v[0] = (float)ps->lastInput.rightmove * 0.0078740157;
    v14.v[1] = (float)forwardmove * 0.0078740157;
    cartesianCoords = v14;
    if ( (float)(v14.v[0] * v14.v[0]) > 0.0000010000001 || (float)(cartesianCoords.v[1] * cartesianCoords.v[1]) > 0.0000010000001 )
    {
      CartesianToPolar(&cartesianCoords, &outAngleInDegrees, &outRadius);
      _XMM0 = LODWORD(outRadius);
      __asm { vminss  xmm1, xmm0, xmm8; radius }
      outRadius = *(float *)&_XMM1;
      v6 = MSG_PackPolarToShort(outAngleInDegrees, *(const float *)&_XMM1);
    }
    else
    {
      v6 = 0;
    }
    s->lerp.u.player.leftStickPolarPacked = v6;
    pitchmove = ps->lastInput.pitchmove;
    v14.v[0] = (float)ps->lastInput.yawmove * 0.0078740157;
    v14.v[1] = (float)pitchmove * 0.0078740157;
    if ( (float)(v14.v[0] * v14.v[0]) > 0.0000010000001 || (float)(v14.v[1] * v14.v[1]) > 0.0000010000001 )
    {
      CartesianToPolar(&v14, &outAngleInDegrees, &outRadius);
      _XMM0 = LODWORD(outRadius);
      __asm { vminss  xmm1, xmm0, xmm8; radius }
      outRadius = *(float *)&_XMM1;
      v4 = MSG_PackPolarToShort(outAngleInDegrees, *(const float *)&_XMM1);
    }
    s->lerp.u.player.rightStickPolarPacked = v4;
  }
  else
  {
    s->lerp.u.anonymous.data[4] = 0;
  }
}

/*
==============
BG_PlayerToEntity_SetStowedWeaponMP
==============
*/
void BG_PlayerToEntity_SetStowedWeaponMP(BgWeaponMap *weaponMap, const playerState_s *ps, entityState_t *const s)
{
  const Weapon *WeaponForEntity; 
  const dvar_t *v7; 
  const Weapon *CurrentWeaponForPlayerThirdPerson; 
  bool v9; 
  int v10; 
  const Weapon *EquippedWeaponForPlayer; 
  const Weapon *v12; 
  bool v13; 
  int weaponState; 
  const WeaponDef *v15; 
  unsigned int eType; 
  int v17; 
  const Weapon *Weapon; 
  int v19; 
  const Weapon *v20; 
  const Weapon *v21; 
  const WeaponDef *v22; 
  entityType_s v23; 
  int v24; 
  const Weapon *OffHandWeaponForPlayer; 
  entityType_s v26; 
  __m256i v27; 
  __int128 v28; 
  __int64 v29; 
  int v30; 
  Weapon outAccessoryWeapon; 

  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, s);
  BG_WeaponDef(WeaponForEntity, 0);
  v7 = DVARBOOL_bg_enable_stowed_weapons;
  v30 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v27 = *(__m256i *)&NULL_WEAPON.weaponIdx;
  v29 = *(__int64 *)&NULL_WEAPON.attachmentVariationIndices[21];
  v28 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  if ( !DVARBOOL_bg_enable_stowed_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enable_stowed_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    CurrentWeaponForPlayerThirdPerson = BG_GetCurrentWeaponForPlayerThirdPerson(weaponMap, ps);
    if ( BG_IsRiotShield(CurrentWeaponForPlayerThirdPerson, 0) && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
    {
      v27 = *(__m256i *)&CurrentWeaponForPlayerThirdPerson->weaponIdx;
      v28 = *(_OWORD *)&CurrentWeaponForPlayerThirdPerson->attachmentVariationIndices[5];
      v29 = *(__int64 *)&CurrentWeaponForPlayerThirdPerson->attachmentVariationIndices[21];
      v30 = *(_DWORD *)&CurrentWeaponForPlayerThirdPerson->weaponCamo;
      goto LABEL_49;
    }
    if ( BG_WeaponDef(CurrentWeaponForPlayerThirdPerson, 0)->inventoryType != WEAPINVENTORY_OFFHAND )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v9 = BG_IsPlayerInExecution(ps) && !ps->activeExecutionIsVictim;
      v10 = 0;
      while ( 1 )
      {
        EquippedWeaponForPlayer = BG_GetEquippedWeaponForPlayer(weaponMap, ps, v10);
        v12 = EquippedWeaponForPlayer;
        if ( EquippedWeaponForPlayer->weaponIdx )
        {
          v13 = memcmp_0(EquippedWeaponForPlayer, CurrentWeaponForPlayerThirdPerson, 0x3Cui64) == 0;
          if ( v9 && ((weaponState = ps->weapState[0].weaponState, (unsigned int)(weaponState - 7) <= 5) || weaponState == 50 || ps->activeExecutionStartTime == ps->serverTime) )
          {
            if ( !v13 )
              goto LABEL_27;
          }
          else if ( v13 )
          {
            goto LABEL_27;
          }
          v15 = BG_WeaponDef(v12, 0);
          if ( v15->inventoryType == WEAPINVENTORY_PRIMARY && v15->stowTag != scr_const.none && v15->slot != WEAPON_SLOT_MELEE )
          {
            v27 = *(__m256i *)&v12->weaponIdx;
            v28 = *(_OWORD *)&v12->attachmentVariationIndices[5];
            v29 = *(__int64 *)&v12->attachmentVariationIndices[21];
            v30 = *(_DWORD *)&v12->weaponCamo;
            goto LABEL_49;
          }
        }
LABEL_27:
        if ( ++v10 >= 15 )
          goto LABEL_49;
      }
    }
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 522, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 523, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = (unsigned __int16)s->eType;
    if ( (unsigned __int16)eType > 0x11u || (v17 = 131111, !_bittest(&v17, eType)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 524, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(weaponMap, s->staticState.player.stowedWeaponHandle);
    v19 = 0;
    v27 = *(__m256i *)&Weapon->weaponIdx;
    v28 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
    v29 = *(__int64 *)&Weapon->attachmentVariationIndices[21];
    v30 = *(_DWORD *)&Weapon->weaponCamo;
    while ( 1 )
    {
      v20 = BG_GetEquippedWeaponForPlayer(weaponMap, ps, v19);
      v21 = v20;
      if ( v20->weaponIdx )
      {
        if ( BG_IsRiotShield(v20, 0) )
        {
          v22 = BG_WeaponDef(v21, 0);
          if ( v22->inventoryType == WEAPINVENTORY_PRIMARY && v22->stowTag != scr_const.none && v22->slot != WEAPON_SLOT_MELEE )
            break;
        }
      }
      if ( ++v19 >= 15 )
        goto LABEL_49;
    }
    v27 = *(__m256i *)&v21->weaponIdx;
    v28 = *(_OWORD *)&v21->attachmentVariationIndices[5];
    v29 = *(__int64 *)&v21->attachmentVariationIndices[21];
    v30 = *(_DWORD *)&v21->weaponCamo;
  }
LABEL_49:
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 533, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v23 = s->eType;
  v24 = 131111;
  if ( ((unsigned __int16)v23 > ET_AGENT || !_bittest(&v24, v23)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 534, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&s->staticState.turret.carrierEntNum, (const Weapon *)&v27);
  if ( (unsigned int)(ps->weapState[0].weaponState - 27) > 4 )
  {
    if ( !BG_IsUsingOffhandGestureWeapon(ps) && !BG_IsUsingScripteOffhandWeaponWithScriptedAnimType(ps) )
      goto LABEL_66;
LABEL_67:
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    goto LABEL_68;
  }
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
    goto LABEL_67;
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
  {
LABEL_66:
    OffHandWeaponForPlayer = &NULL_WEAPON;
    goto LABEL_68;
  }
  __debugbreak();
  OffHandWeaponForPlayer = &NULL_WEAPON;
LABEL_68:
  BG_SetOffHandWeaponForPlayerEntity(weaponMap, s, OffHandWeaponForPlayer);
  memset(&outAccessoryWeapon, 0, 48);
  *(_DWORD *)&outAccessoryWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  *(double *)&outAccessoryWeapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  BG_Accessory_GetWeapon(weaponMap, ps, &outAccessoryWeapon);
  v26 = s->eType;
  if ( ((unsigned __int16)v26 > ET_AGENT || !_bittest(&v24, v26)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 729, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)((char *)&s->lerp.u.infoVolumeGrapple + 24), &outAccessoryWeapon);
}

/*
==============
BG_PlayerToEntity_SetTrajectory
==============
*/
void BG_PlayerToEntity_SetTrajectory(const playerState_s *ps, entityState_t *s, int snap, const BgHandler *handler)
{
  trajectory_t_secure *p_pos; 
  const BgGroundPersistentState *v17; 
  vec3_t trBase; 
  __int64 v19; 
  float v20; 

  p_pos = &s->lerp.pos;
  s->lerp.pos.trType = TR_INTERPOLATE;
  *(_QWORD *)&s->lerp.pos.trTime = 0i64;
  *(_QWORD *)s->lerp.pos.trDelta.v = 0i64;
  s->lerp.pos.trDelta.v[2] = 0.0;
  Trajectory_SetTrBase(&s->lerp.pos, &ps->origin);
  if ( ps->pm_type != 7 )
    BG_PlayerToEntity_SetTrajectory_Angles(ps, &s->lerp, snap, handler);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( (unsigned __int8)ps->movementDir != ps->movementDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2279, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir", -2i64) )
      __debugbreak();
    s->lerp.u.player.movementDir = ps->movementDir;
    if ( PlayerASM_IsEnabled() )
      s->lerp.u.player.velocityDir = BG_PlayerASM_GetVelocityDir(ps, handler);
  }
  if ( snap && BG_IsPlayerPositionQuantized(ps) )
  {
    if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
    {
      *(_QWORD *)&trBase.y = *(_QWORD *)p_pos->trBase.v ^ __PAIR64__(LODWORD(p_pos->trBase.v[2]) ^ s_trbase_aab_Z, LODWORD(p_pos->trBase.v[1]) ^ s_trbase_aab_Y);
      LODWORD(trBase.v[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&v19, 0, sizeof(v19));
      v20 = trBase.v[0];
      if ( (LODWORD(trBase.v[0]) & 0x7F800000) == 2139095040 || (v20 = trBase.v[1], (LODWORD(trBase.v[1]) & 0x7F800000) == 2139095040) || (v20 = trBase.v[2], (LODWORD(trBase.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      trBase = p_pos->trBase;
    }
    _XMM0 = MSG_UsingHighPrecisionPlayerOrigin();
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM0 = LODWORD(FLOAT_8_0);
    __asm { vblendvps xmm7, xmm0, xmm3, xmm2 }
    _XMM4 = 0i64;
    __asm { vroundss xmm0, xmm4, xmm1, 1 }
    trBase.v[0] = (float)(int)*(float *)&_XMM0 * (float)(1.0 / *(float *)&_XMM7);
    __asm { vroundss xmm2, xmm4, xmm3, 1 }
    trBase.v[1] = (float)(int)*(float *)&_XMM2 * (float)(1.0 / *(float *)&_XMM7);
    __asm { vroundss xmm2, xmm4, xmm3, 1 }
    trBase.v[2] = (float)(int)*(float *)&_XMM2 * (float)(1.0 / *(float *)&_XMM7);
    Trajectory_SetTrBase(p_pos, &trBase);
    s->lerp.apos.trBase.v[0] = (float)(int)s->lerp.apos.trBase.v[0];
    s->lerp.apos.trBase.v[1] = (float)(int)s->lerp.apos.trBase.v[1];
    s->lerp.apos.trBase.v[2] = (float)(int)s->lerp.apos.trBase.v[2];
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&s->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&s->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Fu);
  }
  v17 = handler->GetGroundPersistentState(handler, ps);
  BG_SlopeWorldmodel_Pack(&v17->smoothedNormal, &s->lerp.u.player.slopePacked);
}

/*
==============
BG_PlayerToEntity_SetTrajectory_Angles
==============
*/
void BG_PlayerToEntity_SetTrajectory_Angles(const playerState_s *ps, LerpEntityState *lerp, int snap, const BgHandler *handler)
{
  const SuitDef *SuitDef; 
  double v9; 
  float v10; 
  int v11; 
  float v12; 
  int v13; 
  tmat33_t<vec3_t> axis; 

  *(_QWORD *)&lerp->apos.trType = 1i64;
  lerp->apos.trDuration = 0;
  *(_QWORD *)lerp->apos.trDelta.v = 0i64;
  lerp->apos.trDelta.v[2] = 0.0;
  if ( BG_IsTurretActive(ps) )
  {
    lerp->apos.trBase.v[0] = ps->viewangles.v[0];
    lerp->apos.trBase.v[1] = ps->viewangles.v[1];
    lerp->apos.trBase.v[2] = ps->viewangles.v[2];
    goto LABEL_22;
  }
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2226, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) )
  {
    lerp->apos.trBase.v[0] = ps->linkWeaponAngles.v[0];
    lerp->apos.trBase.v[1] = ps->linkWeaponAngles.v[1];
    v10 = ps->linkWeaponAngles.v[2];
    goto LABEL_21;
  }
  if ( BG_IsScriptedSceneAnimFlagEnabled(ps) && BG_IsPlayerLinked(ps) )
  {
    if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2234, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    if ( handler->GetParentAxis((BgHandler *)handler, ps->clientNum, (tmat43_t<vec3_t> *)&axis) )
    {
      AxisToAngles(&axis, &lerp->apos.trBase);
      goto LABEL_22;
    }
LABEL_19:
    lerp->apos.trBase.v[0] = ps->viewangles.v[0];
    lerp->apos.trBase.v[1] = ps->viewangles.v[1];
    v10 = ps->viewangles.v[2];
LABEL_21:
    lerp->apos.trBase.v[2] = v10;
    goto LABEL_22;
  }
  if ( SuitDef->isMovementCameraIndependent )
  {
    v9 = MSG_UnpackUnsignedFloat(ps->movementDirPrecise, 360.0, 0x10u);
    lerp->apos.trBase.v[1] = *(float *)&v9;
    lerp->apos.trBase.v[0] = 0.0;
    lerp->apos.trBase.v[2] = 0.0;
    goto LABEL_22;
  }
  if ( ps->vehicleState.entity == 2047 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Bu) )
    goto LABEL_19;
LABEL_22:
  if ( snap )
  {
    if ( BG_IsPlayerPositionQuantized(ps) )
    {
      v11 = (int)lerp->apos.trBase.v[1];
      lerp->apos.trBase.v[0] = (float)(int)lerp->apos.trBase.v[0];
      v12 = (float)v11;
      v13 = (int)lerp->apos.trBase.v[2];
      lerp->apos.trBase.v[1] = v12;
      lerp->apos.trBase.v[2] = (float)v13;
    }
  }
}

/*
==============
BG_PlayerTouchesItem
==============
*/
_BOOL8 BG_PlayerTouchesItem(const playerState_s *ps, const entityState_t *item, int atTime, BgTrajectory *traj)
{
  float v7; 
  float v8; 
  float v9; 
  _BOOL8 result; 
  vec3_t outPos; 

  if ( !traj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 777, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  BgTrajectory::EvaluatePosTrajectory(traj, atTime, &outPos);
  v7 = ps->origin.v[0] - outPos.v[0];
  result = 0;
  if ( v7 <= 36.0 && v7 >= -36.0 )
  {
    v8 = ps->origin.v[1] - outPos.v[1];
    if ( v8 <= 36.0 && v8 >= -36.0 )
    {
      v9 = ps->origin.v[2] - outPos.v[2];
      if ( v9 <= 18.0 && v9 >= -88.0 )
        return 1;
    }
  }
  return result;
}

/*
==============
BG_PlayerUse_GetUseHoldTime
==============
*/
__int64 BG_PlayerUse_GetUseHoldTime(const HintHoldDuration hintHoldDuration)
{
  __int32 v1; 
  __int32 v2; 
  const dvar_t *v4; 
  const char *v5; 

  if ( hintHoldDuration == HINT_HOLD_DURATION_SHORT )
  {
    v4 = DVARINT_bg_useholdtimeshort;
    if ( DVARINT_bg_useholdtimeshort )
      goto LABEL_16;
    v5 = "bg_useholdtimeshort";
    goto LABEL_14;
  }
  v1 = hintHoldDuration - 1;
  if ( !v1 )
  {
    v4 = DVARINT_bg_useholdtimemedium;
    if ( DVARINT_bg_useholdtimemedium )
      goto LABEL_16;
    v5 = "bg_useholdtimemedium";
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
      __debugbreak();
    goto LABEL_16;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v4 = DVARINT_bg_useholdtimelong;
    if ( !DVARINT_bg_useholdtimelong )
    {
      v5 = "bg_useholdtimelong";
      goto LABEL_14;
    }
LABEL_16:
    Dvar_CheckFrontendServerThread(v4);
    return v4->current.unsignedInt;
  }
  if ( v2 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4402, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown hint hold duration enum!") )
    __debugbreak();
  return 0i64;
}

/*
==============
BG_RegisterCommonDvars
==============
*/
void BG_RegisterCommonDvars(void)
{
	//Failed decompiling
}

/*
==============
BG_RegisterNetworkDvars
==============
*/
void BG_RegisterNetworkDvars(void)
{
  char ActiveGameMode; 
  unsigned int v1; 
  unsigned int v2; 
  char v3; 
  unsigned int v4; 
  unsigned int flags; 
  char v6; 
  unsigned int v7; 
  unsigned int v8; 
  char v9; 
  unsigned int v10; 
  char v11; 
  unsigned int v12; 
  char v13; 
  unsigned int v14; 
  char v15; 
  unsigned int v16; 
  char v17; 
  unsigned int v18; 
  bool v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 68;
  v2 = 68;
  if ( ActiveGameMode != 1 )
    v2 = 140;
  DVARBOOL_bg_compassShowEnemies = Dvar_RegisterBool("MPOKQNLPRM", 0, v2, "Whether enemies are visible on the compass at all times");
  v3 = Com_GameMode_GetActiveGameMode();
  v4 = 64;
  flags = 64;
  if ( v3 != 1 )
    flags = 140;
  DVARINT_bg_objectivePingDuration = Dvar_RegisterInt("MLQLSTKPMM", 3000, 0, 60000, flags, "How long (in ms) objectives should be visible on screen after they are pinged from GSC");
  v6 = Com_GameMode_GetActiveGameMode();
  v7 = 0;
  v8 = 0;
  if ( v6 != 1 )
    v8 = 140;
  DVARBOOL_camera_thirdPerson = Dvar_RegisterBool("NOSLRNTRKL", 0, v8, "Use third person view globally");
  v9 = Com_GameMode_GetActiveGameMode();
  v10 = 0;
  if ( v9 != 1 )
    v10 = 140;
  DVARBOOL_camera_allow3rdspectate = Dvar_RegisterBool("LKNNQKNTS", 1, v10, "to allow a spectating player to toggle the camera in third person");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1 = 140;
  DVARBOOL_disable_energy_bullet_ricochet = Dvar_RegisterBool("NTTPPOLPLL", 0, v1, "When true, prevents weapons marked with 'Energy Bullet' from ricocheting.  This DVar is replicated to clients.");
  v11 = Com_GameMode_GetActiveGameMode();
  v12 = 0;
  if ( v11 != 1 )
    v12 = 140;
  DVARBOOL_bg_enableClientNetPerf = Dvar_RegisterBool("MQKRMPMRKP", 1, v12, "When true, the client network performance monitoring system is enabled.  This DVar is replicated to clients.");
  v13 = Com_GameMode_GetActiveGameMode();
  v14 = 0;
  if ( v13 != 1 )
    v14 = 140;
  DVARSTR_bg_TeamName_Allies = Dvar_RegisterString("MQKSOKLPNQ", "MENU/FACTION_UNSA_SHORT", v14, "Allied team name");
  v15 = Com_GameMode_GetActiveGameMode();
  v16 = 0;
  if ( v15 != 1 )
    v16 = 140;
  DVARSTR_bg_TeamName_Axis = Dvar_RegisterString("NNTNLNQLPR", "MENU/FACTION_SDF_SHORT", v16, "Axis team name");
  v17 = Com_GameMode_GetActiveGameMode();
  v18 = 0;
  if ( v17 != 1 )
    v18 = 140;
  DVARBOOL_deploy_allowInWater = Dvar_RegisterBool("NPRRROOTTK", 0, v18, "Allow for deploy in water");
  v19 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v20 = 64;
  if ( !v19 )
    v20 = 140;
  DVARFLT_bg_fallDamageMinHeight = Dvar_RegisterFloat("NKTQRKRMTS", 185.0, 0.0, 3.4028235e38, v20, "The height that a player will start to take minimum damage if they fall");
  v19 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v21 = 64;
  if ( !v19 )
    v21 = 140;
  DVARFLT_bg_fallDamageMaxHeight = Dvar_RegisterFloat("LKMOLLSKKO", 300.0, 0.0, 3.4028235e38, v21, "The height that a player will take maximum damage when falling");
  v19 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v22 = 64;
  if ( !v19 )
    v22 = 140;
  DVARFLT_bg_softLandingMinHeight = Dvar_RegisterFloat("OMLLLQKQSR", 185.0, 0.0, 3.4028235e38, v22, "The height that a player will start to take minimum damage if soft landing is in effect");
  v19 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v23 = 64;
  if ( !v19 )
    v23 = 140;
  DVARFLT_bg_softLandingMaxHeight = Dvar_RegisterFloat("LTMMLKRKTR", 300.0, 0.0, 3.4028235e38, v23, "The height that a player will start to take max damage if soft landing is in effect");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v4 = 140;
  DVARFLT_bg_softLandingMaxDamage = Dvar_RegisterFloat("NQTPPSQROP", 0.1, 0.0, 3.4028235e38, v4, "The max amount of damage (as % of max health) if soft landing is in effect");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v7 = 140;
  DVARFLT_sv_netfieldHighLoDDistSq = Dvar_RegisterFloat("OLQLPNSQLL", 1000000.0, 0.0, 3.4028235e38, v7, "Entities within this squared dist will be High LoD, otherwise they will be Low LoD.");
  v24 = 262340;
  v25 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v25 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_trackTrajectory1 = Dvar_RegisterFloat("QOPKTQPM", 0.1, 0.0, 1.0, v25, "Track strength at this key from 0-1.");
  v26 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v26 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_trackTrajectory2 = Dvar_RegisterFloat("LTSROKKQPP", 0.30000001, 0.0, 1.0, v26, "Same as trackTrajectory1.");
  v27 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v27 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_trackTrajectory3 = Dvar_RegisterFloat("OMKTROSPLS", 0.5, 0.0, 1.0, v27, "Same as trackTrajectory1.");
  v28 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v28 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_trackTrajectory4 = Dvar_RegisterFloat("MONQPSPTOP", 0.69999999, 0.0, 1.0, v28, "Same as trackTrajectory1.");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v24 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_trackTrajectory5 = Dvar_RegisterFloat("NQNTQQPLM", 0.89999998, 0.0, 1.0, v24, "Same as trackTrajectory1.");
}

/*
==============
BG_SaveShellShockDvars
==============
*/
__int64 BG_SaveShellShockDvars(const char *name)
{
  const char *v2; 
  unsigned __int64 v3; 
  fileHandle_t f; 
  char *dvarnames[284]; 

  dvarnames[0] = (char *)bgShockDvarNames[0];
  dvarnames[1] = (char *)bgShockDvarNames[1];
  dvarnames[2] = (char *)bgShockDvarNames[2];
  dvarnames[3] = (char *)bgShockDvarNames[3];
  dvarnames[4] = (char *)bgShockDvarNames[4];
  dvarnames[5] = (char *)bgShockDvarNames[5];
  dvarnames[6] = (char *)bgShockDvarNames[6];
  dvarnames[7] = (char *)bgShockDvarNames[7];
  dvarnames[8] = (char *)bgShockDvarNames[8];
  dvarnames[9] = (char *)bgShockDvarNames[9];
  dvarnames[10] = (char *)bgShockDvarNames[10];
  dvarnames[11] = (char *)bgShockDvarNames[11];
  dvarnames[12] = (char *)bgShockDvarNames[12];
  dvarnames[13] = (char *)bgShockDvarNames[13];
  dvarnames[14] = (char *)bgShockDvarNames[14];
  dvarnames[15] = (char *)bgShockDvarNames[15];
  dvarnames[16] = (char *)bgShockDvarNames[16];
  dvarnames[17] = (char *)bgShockDvarNames[17];
  dvarnames[18] = (char *)bgShockDvarNames[18];
  dvarnames[19] = (char *)bgShockDvarNames[19];
  dvarnames[20] = (char *)bgShockDvarNames[20];
  dvarnames[21] = (char *)bgShockDvarNames[21];
  dvarnames[22] = (char *)bgShockDvarNames[22];
  dvarnames[23] = (char *)bgShockDvarNames[23];
  dvarnames[24] = (char *)bgShockDvarNames[24];
  dvarnames[25] = (char *)bgShockDvarNames[25];
  dvarnames[26] = (char *)bgShockDvarNames[26];
  dvarnames[27] = (char *)bgShockDvarNames[27];
  if ( !Com_SaveDvarsToBuffer((const char **)dvarnames, 0x1Cu, filebuf, 0x10000ui64) )
    return 0i64;
  v2 = j_va("shock/%s.shock", name);
  if ( FS_FOpenFileByMode(v2, &f, FS_WRITE) < 0 )
    return 0i64;
  v3 = -1i64;
  do
    ++v3;
  while ( filebuf[v3] );
  FS_Write(filebuf, v3, f);
  FS_FCloseFile(f);
  return 1i64;
}

/*
==============
BG_ScriptMoverKillcam_PackOffset
==============
*/
void BG_ScriptMoverKillcam_PackOffset(unsigned int offsetUp, unsigned int offsetBack, unsigned int *outPacked)
{
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !outPacked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4767, ASSERT_TYPE_ASSERT, "( outPacked )", (const char *)&queryFormat, "outPacked") )
    __debugbreak();
  if ( (int)offsetUp > 255 )
    offsetUp = 255;
  if ( (offsetUp & 0x80000000) != 0 )
    offsetUp = 0;
  if ( (int)offsetBack > 255 )
    offsetBack = 255;
  if ( (offsetBack & 0x80000000) != 0 )
    offsetBack = 0;
  v6 = (unsigned __int8)offsetBack | ((unsigned __int8)offsetUp << 8);
  *outPacked = v6;
  v7 = v6 >> 8;
  if ( offsetUp != v7 )
  {
    LODWORD(v8) = offsetUp;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4780, ASSERT_TYPE_ASSERT, "( offsetUp ) == ( testOffsetUp )", "offsetUp == testOffsetUp\n\t%i, %i", v8, v7) )
      __debugbreak();
  }
  if ( offsetBack != (unsigned __int8)offsetBack )
  {
    LODWORD(v9) = (unsigned __int8)offsetBack;
    LODWORD(v8) = offsetBack;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4781, ASSERT_TYPE_ASSERT, "( offsetBack ) == ( testOffsetBack )", "offsetBack == testOffsetBack\n\t%i, %i", v8, v9) )
      __debugbreak();
  }
}

/*
==============
BG_ScriptMoverKillcam_UnpackOffset
==============
*/
void BG_ScriptMoverKillcam_UnpackOffset(unsigned int packed, unsigned int *outOffsetUp, unsigned int *outOffsetBack)
{
  __int16 v5; 

  v5 = packed;
  if ( !outOffsetUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4788, ASSERT_TYPE_ASSERT, "( outOffsetUp )", (const char *)&queryFormat, "outOffsetUp") )
    __debugbreak();
  if ( !outOffsetBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4789, ASSERT_TYPE_ASSERT, "( outOffsetBack )", (const char *)&queryFormat, "outOffsetBack") )
    __debugbreak();
  *outOffsetBack = (unsigned __int8)v5;
  *outOffsetUp = HIBYTE(v5);
}

/*
==============
BG_SetBotsConnectType
==============
*/
void BG_SetBotsConnectType(unsigned __int8 connectType)
{
  GameStateInfo *v2; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4216, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_bot_SystemStatus, connectType);
  v2 = GameStateInfo_Get();
  if ( v2 )
  {
    v2->usingBotsConnectType = connectType;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4222, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
      __debugbreak();
    MEMORY[0x20] = connectType;
  }
}

/*
==============
BG_SetBotsDifficulty
==============
*/
void BG_SetBotsDifficulty(int relativeTeam, bot_difficulty_t difficulty)
{
  __int64 v2; 
  GameStateInfo *v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = relativeTeam;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4242, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  v4 = GameStateInfo_Get();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4247, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)difficulty >= BOT_DIFFICULTY_COUNT )
  {
    LODWORD(v5) = difficulty;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4248, ASSERT_TYPE_ASSERT, "(unsigned)( difficulty ) < (unsigned)( BOT_DIFFICULTY_COUNT )", "difficulty doesn't index BOT_DIFFICULTY_COUNT\n\t%i not in [0, %i)", v5, 5) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4249, ASSERT_TYPE_ASSERT, "(unsigned)( relativeTeam ) < (unsigned)( ( sizeof( *array_counter( gInfo->usingBotsDifficulty ) ) + 0 ) )", "relativeTeam doesn't index ARRAY_COUNT( gInfo->usingBotsDifficulty )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4->usingBotsDifficulty[v2] = difficulty;
}

/*
==============
BG_SetBotsTeamLimit
==============
*/
void BG_SetBotsTeamLimit(int relativeTeam, int limit)
{
  __int64 v2; 
  unsigned __int8 v3; 
  GameStateInfo *v4; 
  __int64 v5; 

  v2 = relativeTeam;
  v3 = limit;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4297, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
    __debugbreak();
  v4 = GameStateInfo_Get();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4302, ASSERT_TYPE_ASSERT, "(gInfo)", (const char *)&queryFormat, "gInfo") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4303, ASSERT_TYPE_ASSERT, "(unsigned)( relativeTeam ) < (unsigned)( ( sizeof( *array_counter( gInfo->usingBotsTeamLimit ) ) + 0 ) )", "relativeTeam doesn't index ARRAY_COUNT( gInfo->usingBotsTeamLimit )\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  v4->usingBotsTeamLimit[v2] = v3;
}

/*
==============
BG_SetEventParameter
==============
*/
void BG_SetEventParameter(BgWeaponMap *weaponMap, EntityEvent *event, const int eventType, const unsigned int eventParm)
{
  __int64 v4; 
  const Weapon *Weapon; 
  const Weapon *v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = eventType;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1245, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !event && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1246, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xE3 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_bgEventParmType ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( s_bgEventParmType )\n\t%i not in [0, %i)", v10, 227) )
      __debugbreak();
  }
  if ( s_bgEventParmType[v4] == EVENT_PARAM_WEAPON )
  {
    Weapon = BgWeaponMap::GetWeapon(weaponMap, (BgWeaponHandle)eventParm);
    v9 = Weapon;
    if ( eventParm && !Weapon->weaponIdx )
    {
      LODWORD(v11) = eventParm;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 1256, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", "%s\n\tBG_SetEventParameter(): failed to find valid weapon for handle %i (eventType %i)", "weapon.weaponIdx != WP_NONE", v11, v4) )
        __debugbreak();
    }
    BG_SetWeaponForEntityEventParm(weaponMap, &event->eventParm, v9);
  }
  else
  {
    event->eventParm = eventParm;
  }
}

/*
==============
BG_SetJammingType
==============
*/
void BG_SetJammingType(entityState_t *es, JammingType type)
{
  if ( es->eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4660, ASSERT_TYPE_ASSERT, "(es->eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "es->eType == ET_SCRIPTMOVER") )
    __debugbreak();
  es->staticState.general.xmodel &= 0xFFFFFFFC;
  es->staticState.general.xmodel |= type;
}

/*
==============
BG_SetPlayerDamageFlinch
==============
*/
void BG_SetPlayerDamageFlinch(playerState_s *ps, int damage)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  int damageTimer; 
  const dvar_t *v7; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3982, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v4 = DCONST_DVARFLT_player_dmgtimer_timePerPoint;
    if ( !DCONST_DVARFLT_player_dmgtimer_timePerPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_timePerPoint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    ps->damageTimer += (int)(float)((float)damage * v4->current.value);
    v5 = DCONST_DVARFLT_player_dmgtimer_maxTime;
    if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    damageTimer = ps->damageTimer;
    if ( (float)damageTimer > v5->current.value )
    {
      v7 = DCONST_DVARFLT_player_dmgtimer_maxTime;
      if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      damageTimer = (int)v7->current.value;
      ps->damageTimer = damageTimer;
    }
    ps->damageDuration = damageTimer;
    ps->flinch = 1;
  }
}

/*
==============
BG_SetScriptWristwatchTime
==============
*/
void BG_SetScriptWristwatchTime(playerState_s *ps, bool inUse, int hours, int minutes, bool useTransition)
{
  unsigned __int16 watchTimePacked; 
  int v10; 
  unsigned __int16 v11; 
  unsigned int v12; 
  char v13; 
  bool v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  if ( (unsigned int)hours > 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4801, ASSERT_TYPE_ASSERT, "( 0 ) <= ( hours ) && ( hours ) <= ( 23 )", "hours not in [0, 23]\n\t%i not in [%i, %i]", hours, 0i64, 23) )
    __debugbreak();
  if ( (unsigned int)minutes > 0x3B )
  {
    LODWORD(v18) = 59;
    LODWORD(v17) = minutes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4802, ASSERT_TYPE_ASSERT, "( 0 ) <= ( minutes ) && ( minutes ) <= ( 59 )", "minutes not in [0, 59]\n\t%i not in [%i, %i]", v17, 0i64, v18) )
      __debugbreak();
  }
  watchTimePacked = useTransition | (unsigned __int16)(2 * inUse);
  ps->watchTimePacked = watchTimePacked;
  v10 = minutes + 60 * hours;
  if ( v10 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)v10, "signed", v10) )
      __debugbreak();
    watchTimePacked = ps->watchTimePacked;
  }
  v11 = v10 & 0x7FF | (watchTimePacked << 11);
  ps->watchTimePacked = v11;
  v12 = v11 & 0x7FF;
  v11 >>= 11;
  v13 = v11 & 1;
  v14 = (v11 & 2) != 0;
  v15 = v12 / 0x3C;
  v16 = v12 % 0x3C;
  if ( v16 > 0x3B )
  {
    LODWORD(v18) = 59;
    LODWORD(v17) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4862, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outMinutes ) && ( outMinutes ) <= ( 59 )", "outMinutes not in [0, 59]\n\t%i not in [%i, %i]", v17, 0i64, v18) )
      __debugbreak();
  }
  if ( v15 > 0x17 )
  {
    LODWORD(v18) = 23;
    LODWORD(v17) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4863, ASSERT_TYPE_ASSERT, "( 0 ) <= ( outHours ) && ( outHours ) <= ( 23 )", "outHours not in [0, 23]\n\t%i not in [%i, %i]", v17, 0i64, v18) )
      __debugbreak();
  }
  if ( inUse != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4823, ASSERT_TYPE_ASSERT, "(inUse == testInUse)", (const char *)&queryFormat, "inUse == testInUse") )
    __debugbreak();
  if ( hours != v15 )
  {
    LODWORD(v19) = v15;
    LODWORD(v18) = hours;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4824, ASSERT_TYPE_ASSERT, "( hours ) == ( testHours )", "%s == %s\n\t%i, %i", "hours", "testHours", v18, v19) )
      __debugbreak();
  }
  if ( minutes != v16 )
  {
    LODWORD(v19) = v16;
    LODWORD(v18) = minutes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4825, ASSERT_TYPE_ASSERT, "( minutes ) == ( testMinutes )", "%s == %s\n\t%i, %i", "minutes", "testMinutes", v18, v19) )
      __debugbreak();
  }
  if ( useTransition != v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 4826, ASSERT_TYPE_ASSERT, "(useTransition == testUseTransition)", (const char *)&queryFormat, "useTransition == testUseTransition") )
    __debugbreak();
}

/*
==============
BG_SetShellShockParmsFromDvars
==============
*/
void BG_SetShellShockParmsFromDvars(shellshock_parms_t *parms)
{
  const dvar_t *v2; 
  const dvar_t *v7; 
  const dvar_t *v11; 
  const dvar_t *v13; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v20; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v33; 
  const dvar_t *v37; 
  const dvar_t *v41; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  __int64 v56; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3544, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
    __debugbreak();
  v2 = DVARFLT_bg_shock_screenBlurBlendTime;
  if ( !DVARFLT_bg_shock_screenBlurBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_screenBlurBlendTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM0 = v2->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm3, 1 }
  parms->screenBlend.blurredEffectTime = (int)*(float *)&_XMM2;
  v7 = DVARFLT_bg_shock_screenBlurBlendFadeTime;
  if ( !DVARFLT_bg_shock_screenBlurBlendFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_screenBlurBlendFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  _XMM0 = v7->current.unsignedInt;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm6
    vroundss xmm2, xmm7, xmm3, 1
  }
  parms->screenBlend.blurredFadeTime = (int)*(float *)&_XMM2;
  v11 = DVARFLT_bg_shock_screenFlashShotFadeTime;
  if ( !DVARFLT_bg_shock_screenFlashShotFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_screenFlashShotFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  __asm { vroundss xmm1, xmm7, xmm3, 1 }
  parms->screenBlend.flashShotFadeTime = (int)*(float *)&_XMM1;
  v13 = DVARFLT_bg_shock_screenFlashWhiteFadeTime;
  if ( !DVARFLT_bg_shock_screenFlashWhiteFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_screenFlashWhiteFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm { vroundss xmm1, xmm7, xmm3, 1 }
  parms->screenBlend.flashWhiteFadeTime = (int)*(float *)&_XMM1;
  if ( parms->screenBlend.blurredFadeTime <= 0 )
  {
    LODWORD(v56) = parms->screenBlend.blurredFadeTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3550, ASSERT_TYPE_ASSERT, "( ( parms->screenBlend.blurredFadeTime > 0 ) )", "( parms->screenBlend.blurredFadeTime ) = %i", v56) )
      __debugbreak();
  }
  if ( parms->screenBlend.blurredEffectTime <= 0 )
  {
    LODWORD(v56) = parms->screenBlend.blurredEffectTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3551, ASSERT_TYPE_ASSERT, "( ( parms->screenBlend.blurredEffectTime > 0 ) )", "( parms->screenBlend.blurredEffectTime ) = %i", v56) )
      __debugbreak();
  }
  v15 = DVARINT_bg_shock_screenType;
  if ( !DVARINT_bg_shock_screenType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_screenType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  parms->screenBlend.type = v15->current.integer;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    parms->view.fadeTime = 3000;
  }
  else
  {
    v16 = DVARFLT_bg_shock_viewKickFadeTime;
    if ( !DVARFLT_bg_shock_viewKickFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_viewKickFadeTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    _XMM0 = v16->current.unsignedInt;
    __asm
    {
      vmaxss  xmm1, xmm0, xmm6
      vroundss xmm2, xmm7, xmm3, 1
    }
    parms->view.fadeTime = (int)*(float *)&_XMM2;
    if ( (int)*(float *)&_XMM2 <= 0 )
    {
      LODWORD(v56) = (int)*(float *)&_XMM2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3562, ASSERT_TYPE_ASSERT, "( ( parms->view.fadeTime > 0 ) )", "( parms->view.fadeTime ) = %i", v56) )
        __debugbreak();
    }
  }
  v20 = DVARFLT_bg_shock_viewKickPeriod;
  if ( !DVARFLT_bg_shock_viewKickPeriod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_viewKickPeriod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  _XMM0 = v20->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  parms->view.kickRate = 0.001 / *(float *)&_XMM1;
  v23 = DVARFLT_bg_shock_viewKickRadius;
  if ( !DVARFLT_bg_shock_viewKickRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_viewKickRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  LODWORD(parms->view.kickRadius) = v23->current.integer;
  v24 = DVARBOOL_bg_shock_sound;
  if ( !DVARBOOL_bg_shock_sound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_sound") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  parms->sound.affect = v24->current.enabled;
  v25 = DVARSTR_bg_shock_soundLoop;
  if ( !DVARSTR_bg_shock_soundLoop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundLoop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  strncpy(parms->sound.loop, v25->current.string, 0x40ui64);
  v26 = DVARSTR_bg_shock_soundLoopSilent;
  if ( !DVARSTR_bg_shock_soundLoopSilent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundLoopSilent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  strncpy(parms->sound.loopSilent, v26->current.string, 0x40ui64);
  v27 = DVARSTR_bg_shock_soundEnd;
  if ( !DVARSTR_bg_shock_soundEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  strncpy(parms->sound.end, v27->current.string, 0x40ui64);
  v28 = DVARSTR_bg_shock_soundEndAbort;
  if ( !DVARSTR_bg_shock_soundEndAbort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundEndAbort") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  strncpy(parms->sound.endAbort, v28->current.string, 0x40ui64);
  v29 = DVARFLT_bg_shock_soundFadeInTime;
  if ( !DVARFLT_bg_shock_soundFadeInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundFadeInTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  _XMM0 = v29->current.unsignedInt;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm6
    vroundss xmm2, xmm7, xmm3, 1
  }
  parms->sound.fadeInTime = (int)*(float *)&_XMM2;
  v33 = DVARFLT_bg_shock_soundFadeOutTime;
  if ( !DVARFLT_bg_shock_soundFadeOutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundFadeOutTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  _XMM0 = v33->current.unsignedInt;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm6
    vroundss xmm2, xmm7, xmm3, 1
  }
  parms->sound.fadeOutTime = (int)*(float *)&_XMM2;
  v37 = DVARFLT_bg_shock_soundLoopFadeTime;
  if ( !DVARFLT_bg_shock_soundLoopFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundLoopFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  _XMM0 = v37->current.unsignedInt;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm6
    vroundss xmm2, xmm7, xmm3, 1
  }
  parms->sound.loopFadeTime = (int)*(float *)&_XMM2;
  v41 = DVARFLT_bg_shock_soundLoopEndDelay;
  if ( !DVARFLT_bg_shock_soundLoopEndDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundLoopEndDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  __asm { vroundss xmm1, xmm7, xmm3, 1 }
  parms->sound.loopEndDelay = (int)*(float *)&_XMM1;
  v43 = DVARSTR_bg_shock_soundAudioZone;
  if ( !DVARSTR_bg_shock_soundAudioZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundAudioZone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  Core_strcpy(parms->sound.audioZone, 0x40ui64, v43->current.string);
  v44 = DVARFLT_bg_shock_soundModEndDelay;
  if ( !DVARFLT_bg_shock_soundModEndDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_soundModEndDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  __asm { vroundss xmm1, xmm7, xmm3, 1 }
  parms->sound.modEndDelay = (int)*(float *)&_XMM1;
  if ( parms->sound.fadeInTime <= 0 )
  {
    LODWORD(v56) = parms->sound.fadeInTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3582, ASSERT_TYPE_ASSERT, "( ( parms->sound.fadeInTime > 0 ) )", "( parms->sound.fadeInTime ) = %i", v56) )
      __debugbreak();
  }
  if ( parms->sound.fadeOutTime <= 0 )
  {
    LODWORD(v56) = parms->sound.fadeOutTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3583, ASSERT_TYPE_ASSERT, "( ( parms->sound.fadeOutTime > 0 ) )", "( parms->sound.fadeOutTime ) = %i", v56) )
      __debugbreak();
  }
  if ( parms->sound.loopFadeTime <= 0 )
  {
    LODWORD(v56) = parms->sound.loopFadeTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3584, ASSERT_TYPE_ASSERT, "( ( parms->sound.loopFadeTime > 0 ) )", "( parms->sound.loopFadeTime ) = %i", v56) )
      __debugbreak();
  }
  v46 = DVARBOOL_bg_shock_lookControl;
  if ( !DVARBOOL_bg_shock_lookControl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_lookControl") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  parms->lookControl.affect = v46->current.enabled;
  v47 = DVARFLT_bg_shock_lookControl_fadeTime;
  if ( !DVARFLT_bg_shock_lookControl_fadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_lookControl_fadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  __asm { vroundss xmm1, xmm7, xmm3, 1 }
  parms->lookControl.fadeTime = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 <= 0 )
  {
    LODWORD(v56) = (int)*(float *)&_XMM1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3588, ASSERT_TYPE_ASSERT, "( ( parms->lookControl.fadeTime > 0 ) )", "( parms->lookControl.fadeTime ) = %i", v56) )
      __debugbreak();
  }
  v49 = DVARFLT_bg_shock_lookControl_maxpitchspeed;
  if ( !DVARFLT_bg_shock_lookControl_maxpitchspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_lookControl_maxpitchspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  LODWORD(parms->lookControl.maxPitchSpeed) = v49->current.integer;
  v50 = DVARFLT_bg_shock_lookControl_maxyawspeed;
  if ( !DVARFLT_bg_shock_lookControl_maxyawspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_lookControl_maxyawspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  LODWORD(parms->lookControl.maxYawSpeed) = v50->current.integer;
  v51 = DVARFLT_bg_shock_lookControl_mousesensitivityscale;
  if ( !DVARFLT_bg_shock_lookControl_mousesensitivityscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_lookControl_mousesensitivityscale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  LODWORD(parms->lookControl.mouseSensitivity) = v51->current.integer;
  v52 = DVARBOOL_bg_shock_movement;
  if ( !DVARBOOL_bg_shock_movement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_movement") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  parms->movement.affect = v52->current.enabled;
  v53 = DVARBOOL_bg_shock_sprint;
  if ( !DVARBOOL_bg_shock_sprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_sprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  parms->movement.breakSprint = v53->current.enabled;
  v54 = DVARBOOL_bg_shock_jog;
  if ( !DVARBOOL_bg_shock_jog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_jog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  parms->movement.breakJog = v54->current.enabled;
  v55 = DVARBOOL_bg_shock_mount;
  if ( !DVARBOOL_bg_shock_mount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shock_mount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  parms->mount.affect = v55->current.enabled;
}

/*
==============
BG_ShieldHitDecode
==============
*/
void BG_ShieldHitDecode(unsigned int encoded, vec3_t *result, bool *resultHitFront)
{
  const dvar_t *v3; 
  float value; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  int v12; 
  unsigned int v13; 
  bool v14; 
  int v15; 

  v3 = DVARVEC2_bg_shieldHitEncodeWidthVM;
  if ( !DVARVEC2_bg_shieldHitEncodeWidthVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shieldHitEncodeWidthVM") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v8 = v3->current.vector.v[1];
  v9 = DVARVEC2_bg_shieldHitEncodeHeightVM;
  if ( !DVARVEC2_bg_shieldHitEncodeHeightVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shieldHitEncodeHeightVM") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = v9->current.vector.v[1];
  if ( encoded >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3867, ASSERT_TYPE_ASSERT, "(encoded < 256)", (const char *)&queryFormat, "encoded < 256") )
    __debugbreak();
  v12 = (encoded >> 4) & ((unsigned int)MY_MASK_Y >> 4);
  v13 = encoded;
  v14 = encoded & 1;
  v15 = (v13 >> 1) & ((unsigned int)MY_MASK_Z >> 1);
  _XMM0 = v14;
  __asm { vpcmpeqd xmm5, xmm0, xmm3 }
  _XMM3 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm3, xmm4, xmm5 }
  result->v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = DecodeShieldSegmentToPos(v12, value, v8, 16);
  result->v[1] = *(float *)&_XMM0;
  *(double *)&_XMM0 = DecodeShieldSegmentToPos(v15, v10, v11, 8);
  result->v[2] = *(float *)&_XMM0;
  *resultHitFront = v14;
}

/*
==============
BG_ShieldHitEncode
==============
*/
unsigned __int8 BG_ShieldHitEncode(const vec3_t *hitPos, bool fromTheFront)
{
  const dvar_t *v2; 
  float value; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 

  v2 = DVARVEC2_bg_shieldHitEncodeWidthWorld;
  if ( !DVARVEC2_bg_shieldHitEncodeWidthWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shieldHitEncodeWidthWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = v2->current.vector.v[1];
  v7 = DVARVEC2_bg_shieldHitEncodeHeightWorld;
  if ( !DVARVEC2_bg_shieldHitEncodeHeightWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shieldHitEncodeHeightWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  v9 = v7->current.vector.v[1];
  v10 = EncodeShieldPosToSegment(hitPos->v[1], value, v6, 16);
  v11 = EncodeShieldPosToSegment(hitPos->v[2], v8, v9, 8);
  if ( v10 > 0xF )
  {
    LODWORD(v13) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3810, ASSERT_TYPE_ASSERT, "( 0 ) <= ( segY ) && ( segY ) <= ( (SHIELD_SEGCOUNT_Y - 1) )", "segY not in [0, (SHIELD_SEGCOUNT_Y - 1)]\n\t%i not in [%i, %i]", v13, 0i64, 15) )
      __debugbreak();
  }
  if ( v11 > 7 )
  {
    LODWORD(v14) = 7;
    LODWORD(v13) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3811, ASSERT_TYPE_ASSERT, "( 0 ) <= ( segZ ) && ( segZ ) <= ( (SHIELD_SEGCOUNT_Z - 1) )", "segZ not in [0, (SHIELD_SEGCOUNT_Z - 1)]\n\t%i not in [%i, %i]", v13, 0i64, v14) )
      __debugbreak();
  }
  return fromTheFront | (2 * (v11 | (8 * v10)));
}

/*
==============
BG_ShieldHitEncodeHitMarker
==============
*/
__int64 BG_ShieldHitEncodeHitMarker(const vec3_t *startPos, const vec3_t *hitPos)
{
  float v2; 
  int v3; 
  int v4; 
  int v5; 
  vec3_t vec; 
  vec3_t angles; 

  v2 = hitPos->v[1] - startPos->v[1];
  vec.v[0] = hitPos->v[0] - startPos->v[0];
  vec.v[2] = hitPos->v[2] - startPos->v[2];
  vec.v[1] = v2;
  vectoangles(&vec, &angles);
  v3 = (int)(float)((float)(0.0027777778 * angles.v[0]) * 255.0);
  v4 = (int)(float)((float)(0.0027777778 * angles.v[1]) * 255.0);
  if ( v3 > 255 )
    v3 = 255;
  if ( v4 > 255 )
    v4 = 255;
  if ( v4 < 0 )
    v4 = 0;
  v5 = v4 << 8;
  if ( v3 < 0 )
    v3 = 0;
  return (v3 | (unsigned int)v5) << 8;
}

/*
==============
BG_ShieldHitEncodeRandom
==============
*/
__int64 BG_ShieldHitEncodeRandom(unsigned int *randSeed, bool damaged)
{
  unsigned int v4; 
  unsigned int v5; 
  __int64 result; 
  __int64 v7; 
  __int64 v8; 

  v4 = BG_rand(randSeed) % 16;
  v5 = BG_rand(randSeed) % 8;
  if ( v4 > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3830, ASSERT_TYPE_ASSERT, "( 0 ) <= ( segY ) && ( segY ) <= ( (SHIELD_SEGCOUNT_Y - 1) )", "segY not in [0, (SHIELD_SEGCOUNT_Y - 1)]\n\t%i not in [%i, %i]", v4, 0i64, 15) )
    __debugbreak();
  if ( v5 > 7 )
  {
    LODWORD(v8) = 7;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3831, ASSERT_TYPE_ASSERT, "( 0 ) <= ( segZ ) && ( segZ ) <= ( (SHIELD_SEGCOUNT_Z - 1) )", "segZ not in [0, (SHIELD_SEGCOUNT_Z - 1)]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
      __debugbreak();
  }
  LOBYTE(v4) = v5 | (8 * v4);
  result = 2 * v4;
  LOBYTE(result) = damaged | (2 * v4);
  return result;
}

/*
==============
BG_ShouldHandleThirdPersonVehicleCamera
==============
*/
bool BG_ShouldHandleThirdPersonVehicleCamera(const playerState_s *const ps, const BgHandler *handler)
{
  bool v4; 

  v4 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Cu);
  return BG_GetRemoteControlledVehicleEntityNum(ps, handler) != 2047 && v4;
}

/*
==============
BG_UpdateClientControlledMissile
==============
*/
void BG_UpdateClientControlledMissile(vec3_t *angles, const char *remoteControlAngles, int msec)
{
  float v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  float v11; 
  float value; 
  float v15; 
  vec3_t anglesa; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v20; 

  if ( !remoteControlAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3952, ASSERT_TYPE_ASSERT, "(remoteControlAngles)", (const char *)&queryFormat, "remoteControlAngles") )
    __debugbreak();
  v6 = (float)msec * 0.001;
  v7 = DVARFLT_missileRemoteSteerPitchRate;
  anglesa.v[0] = (float)*remoteControlAngles * -0.0078740157;
  if ( !DVARFLT_missileRemoteSteerPitchRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSteerPitchRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = remoteControlAngles[1];
  v9 = DVARFLT_missileRemoteSteerYawRate;
  anglesa.v[0] = (float)(v6 * v7->current.value) * anglesa.v[0];
  anglesa.v[1] = (float)v8 * -0.0078740157;
  if ( !DVARFLT_missileRemoteSteerYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSteerYawRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  anglesa.v[1] = (float)(v6 * v9->current.value) * anglesa.v[1];
  anglesa.v[2] = 0.0;
  AnglesToAxis(&anglesa, &axis);
  AnglesToAxis(angles, &in2);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&out, &in2, &v20);
  AxisToAngles(&v20, angles);
  v10 = DVARVEC2_missileRemoteSteerPitchRange;
  if ( !DVARVEC2_missileRemoteSteerPitchRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileRemoteSteerPitchRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.vector.v[1];
  value = v10->current.value;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  v15 = (float)((float)(angles->v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  angles->v[0] = v15;
  if ( v15 <= v11 )
    v11 = v15;
  else
    angles->v[0] = v11;
  if ( v11 < value )
    angles->v[0] = value;
}

/*
==============
BG_UpdateViewAngleClamp
==============
*/
void BG_UpdateViewAngleClamp(const float currentTime, const vec3_t *worldAnglesCenter, viewClampState *const clamp, playerState_s *const ps)
{
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 

  if ( !clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3232, ASSERT_TYPE_ASSERT, "(clamp)", (const char *)&queryFormat, "clamp") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3233, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_LerpViewClampState(currentTime, clamp);
  ps->viewAngleClampRange.v[0] = (float)(clamp->max.current.v[0] - clamp->min.current.v[0]) * 0.5;
  v7 = worldAnglesCenter->v[0] + clamp->max.current.v[0];
  ps->viewAngleClampBase.v[0] = v7;
  v8 = AngleNormalize360(v7 - ps->viewAngleClampRange.v[0]);
  ps->viewAngleClampBase.v[0] = *(float *)&v8;
  ps->viewAngleClampRange.v[1] = (float)(clamp->max.current.v[1] - clamp->min.current.v[1]) * 0.5;
  v9 = worldAnglesCenter->v[1] + clamp->max.current.v[1];
  ps->viewAngleClampBase.v[1] = v9;
  v10 = AngleNormalize360(v9 - ps->viewAngleClampRange.v[1]);
  ps->viewAngleClampBase.v[1] = *(float *)&v10;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    v11 = AngleNormalize360(clamp->resistMax.current.v[0]);
    ps->viewAngleResistMax.v[0] = *(float *)&v11;
    v12 = AngleNormalize360(clamp->resistMin.current.v[0]);
    ps->viewAngleResistMin.v[0] = *(float *)&v12;
    v13 = AngleNormalize360(clamp->resistMax.current.v[1]);
    ps->viewAngleResistMax.v[1] = *(float *)&v13;
    v14 = AngleNormalize360(clamp->resistMin.current.v[1]);
    ps->viewAngleResistMin.v[1] = *(float *)&v14;
  }
}

/*
==============
BG_UpdateViewLinkedModelTransform
==============
*/
void BG_UpdateViewLinkedModelTransform(const ViewLinkedData *data, const tmat43_t<vec3_t> *world, vec3_t *outOrigin, vec3_t *outAngles)
{
  bool v8; 
  float v9; 
  unsigned __int8 flags; 
  float v21; 
  const tmat43_t<vec3_t> *v22; 
  float v23; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  tmat33_t<vec3_t> v27; 
  float v28; 
  float v29; 
  float v30; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3999, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  AnglesToAxis(&data->angleOffset, (tmat33_t<vec3_t> *)&axis);
  v8 = (data->flags & 0xE) == 0;
  v9 = data->posOffset.v[1];
  axis.m[3].v[0] = data->posOffset.v[0];
  axis.m[3].v[2] = data->posOffset.v[2];
  axis.m[3].v[1] = v9;
  if ( v8 )
  {
    v22 = world;
  }
  else
  {
    AxisToAngles((const tmat33_t<vec3_t> *)world, &angles);
    _XMM0 = data->flags & 2;
    flags = data->flags;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM4 = 0i64;
    __asm { vblendvps xmm0, xmm4, xmm2, xmm3 }
    angles.v[0] = *(float *)&_XMM0;
    _XMM0 = flags & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm1, xmm2
    }
    angles.v[1] = *(float *)&_XMM0;
    _XMM0 = flags & 8;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm1, xmm2
    }
    angles.v[2] = *(float *)&_XMM0;
    AnglesToAxis(&angles, &v27);
    v21 = world->m[3].v[1];
    v28 = world->m[3].v[0];
    v30 = world->m[3].v[2];
    v29 = v21;
    v22 = (const tmat43_t<vec3_t> *)&v27;
  }
  MatrixMultiply43(&axis, v22, &out);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, outAngles);
  v23 = out.m[3].v[1];
  outOrigin->v[0] = out.m[3].v[0];
  outOrigin->v[2] = out.m[3].v[2];
  outOrigin->v[1] = v23;
}

/*
==============
BG_WeaponEntCanBeGrabbed
==============
*/
_BOOL8 BG_WeaponEntCanBeGrabbed(const BgWeaponMap *weaponMap, const entityState_t *weaponEntState, const playerState_s *ps, int touched, const Weapon *weapon)
{
  const WeaponDef *v9; 
  bool v10; 
  const WeaponDef *v11; 
  bool v12; 
  bool v14; 
  const WeaponDef *v15; 
  OffhandClass offhandClass; 
  int HasWeapon; 
  int v18; 
  bool v19; 
  bool HasRoomForAmmo; 
  bool v21; 
  bool v22; 
  __int64 v23; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 911, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !weaponEntState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 912, ASSERT_TYPE_ASSERT, "(weaponEntState)", (const char *)&queryFormat, "weaponEntState") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 913, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx >= 0x226u )
  {
    LODWORD(v23) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( 550 )", "weapon.weaponIdx doesn't index MAX_WEAPONS\n\t%i not in [0, %i)", v23, 550) )
      __debugbreak();
  }
  if ( !weapon->weaponIdx )
    return 0i64;
  v9 = BG_WeaponDef(weapon, 0);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 833, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v9->inventoryType == WEAPINVENTORY_SCAVENGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 919, ASSERT_TYPE_ASSERT, "(!BG_IsScavengerPickup( weapon ))", (const char *)&queryFormat, "!BG_IsScavengerPickup( weapon )") )
    __debugbreak();
  v10 = BG_UsingAlternate(ps);
  v11 = BG_WeaponDef(weapon, v10);
  if ( weaponEntState->eType == ET_MISSILE )
  {
    if ( v11->offhandClass != OFFHAND_CLASS_FRAG_GRENADE )
    {
      v12 = BG_UsingAlternate(ps);
      if ( BG_GetWeaponClass(weapon, v12) != WEAPCLASS_THROWINGKNIFE || !BG_PlayerHasWeapon(weaponMap, ps, weapon) )
        return 0i64;
    }
    return 1i64;
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 874, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 875, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = BG_UsingAlternate(ps);
  v15 = BG_WeaponDef(weapon, v14);
  offhandClass = v15->offhandClass;
  if ( offhandClass && (offhandClass != ps->weapCommon.offhandPrimary && offhandClass != ps->weapCommon.offhandSecondary || offhandClass == OFFHAND_CLASS_OTHER && !BG_PlayerHasWeapon(weaponMap, ps, weapon) && BG_GetFirstEquippedOffhandByClass(weaponMap, ps, v15->offhandClass)->weaponIdx) )
    return 0i64;
  HasWeapon = BG_PlayerHasWeapon(weaponMap, ps, weapon);
  v18 = HasWeapon;
  if ( !touched )
  {
    if ( BG_IsThrowingAxe(weapon) && v18 )
    {
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x12u) )
        return 0i64;
      v22 = BG_UsingAlternate(ps);
      if ( !BG_IsFauxFists(ps, weapon, v22) )
        return 0i64;
    }
    else if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x12u) || v18 )
    {
      return 0i64;
    }
    return 1i64;
  }
  v19 = HasWeapon || BG_PlayerHasCompatibleWeapon(weaponMap, ps, weapon, 0);
  HasRoomForAmmo = BG_PlayerHasRoomForAmmo(weaponMap, ps, weapon, 0);
  v21 = HasRoomForAmmo;
  if ( (!v19 || !HasRoomForAmmo) && BG_HasUnderbarrelAmmo(weapon) )
  {
    v19 = v18 || BG_PlayerHasCompatibleWeapon(weaponMap, ps, weapon, 1);
    v21 = BG_PlayerHasRoomForAmmo(weaponMap, ps, weapon, 1);
  }
  return v19 && v21;
}

/*
==============
DecodeShieldSegmentToPos
==============
*/
float DecodeShieldSegmentToPos(int segment, float min, float max, int segmentCount)
{
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  if ( (unsigned int)segment > 0xF )
  {
    v11 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3844, ASSERT_TYPE_ASSERT, "( 0 ) <= ( segment ) && ( segment ) <= ( 15 )", "segment not in [0, 15]\n\t%i not in [%i, %i]", segment, 0i64, v11) )
      __debugbreak();
  }
  if ( (unsigned int)(segmentCount - 1) > 0xF )
  {
    LODWORD(v10) = 16;
    LODWORD(v9) = 1;
    LODWORD(v7) = segmentCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3845, ASSERT_TYPE_ASSERT, "( 1 ) <= ( segmentCount ) && ( segmentCount ) <= ( 16 )", "segmentCount not in [1, 16]\n\t%i not in [%i, %i]", v7, v9, v10) )
      __debugbreak();
  }
  return (float)((float)((float)(max - min) / _mm_cvtepi32_ps((__m128i)(unsigned int)segmentCount).m128_f32[0]) * (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)segment).m128_f32[0] + 0.5)) + min;
}

/*
==============
EncodeShieldPosToSegment
==============
*/
__int64 EncodeShieldPosToSegment(float pos, float min, float max, int segmentCount)
{
  float v5; 
  double v6; 
  float v7; 
  int v8; 
  __int64 v10; 
  int v11; 

  if ( segmentCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3754, ASSERT_TYPE_ASSERT, "(segmentCount > 0)", (const char *)&queryFormat, "segmentCount > 0") )
    __debugbreak();
  v5 = (float)(max - min) / (float)segmentCount;
  v6 = I_fclamp(pos, min, max - (float)(v5 * 0.5));
  v7 = (float)(*(float *)&v6 - min) / v5;
  v8 = (int)v7;
  if ( (int)v7 < 0 || v8 > segmentCount )
  {
    v11 = segmentCount;
    LODWORD(v10) = (int)v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 3760, ASSERT_TYPE_ASSERT, "( 0 ) <= ( result ) && ( result ) <= ( segmentCount )", "result not in [0, segmentCount]\n\t%i not in [%i, %i]", v10, 0i64, v11) )
      __debugbreak();
  }
  return (unsigned int)v8;
}

/*
==============
PM_GetProneFeetDirection
==============
*/
_BOOL8 PM_GetProneFeetDirection(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_misc.cpp", 2413, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return PM_GetEffectiveStance(ps) != PM_EFF_STANCE_LASTSTANDCRAWL;
}

