/*
==============
BG_GameInterface_CreateAircraft
==============
*/

BgVehiclePhysics *__fastcall BG_GameInterface_CreateAircraft(unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType, unsigned int profile)
{
  return ?BG_GameInterface_CreateAircraft@@YAPEAVBgVehiclePhysics@@PEAEIII@Z(buffer, maxBufferSize, vehType, profile);
}

/*
==============
G_GameInterface_LogCharacterLastSpawn
==============
*/

void __fastcall G_GameInterface_LogCharacterLastSpawn(const SpawnPointInfo *point, const __int16 entNum)
{
  ?G_GameInterface_LogCharacterLastSpawn@@YAXPEBUSpawnPointInfo@@F@Z(point, entNum);
}

/*
==============
BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript
==============
*/

bool __fastcall BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript(const PlayerAnimEntry *animEntry, const playerState_s *ps)
{
  return ?BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript@@YA_NPEBUPlayerAnimEntry@@PEBUplayerState_s@@@Z(animEntry, ps);
}

/*
==============
G_GameInterface_ReadCharacterInfo
==============
*/

void __fastcall G_GameInterface_ReadCharacterInfo(MemoryFile *memFile, characterInfo_t *ci)
{
  ?G_GameInterface_ReadCharacterInfo@@YAXPEAUMemoryFile@@PEAUcharacterInfo_t@@@Z(memFile, ci);
}

/*
==============
CG_GameInterface_SimulateBulletFirePellet_AddIgnoreEnts
==============
*/

void __fastcall CG_GameInterface_SimulateBulletFirePellet_AddIgnoreEnts(const SimulateBulletFirePelletData *const pelletFireData, const playerState_s *const ps, BulletFireParams *outBP)
{
  ?CG_GameInterface_SimulateBulletFirePellet_AddIgnoreEnts@@YAXQEBUSimulateBulletFirePelletData@@QEBUplayerState_s@@PEAUBulletFireParams@@@Z(pelletFireData, ps, outBP);
}

/*
==============
CG_GameInterface_MainMP_RegisterSounds
==============
*/

void __fastcall CG_GameInterface_MainMP_RegisterSounds(LocalClientNum_t localClientNum, const char *mapname)
{
  ?CG_GameInterface_MainMP_RegisterSounds@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, mapname);
}

/*
==============
CG_GameInterface_HandleEntityEventCommon
==============
*/

bool __fastcall CG_GameInterface_HandleEntityEventCommon(const LocalClientNum_t localClientNum, centity_t *cent, const int clientNum, const int event, const unsigned int eventParm, const Weapon *iweapon, const bool isAlternate, const bool isPlayerView)
{
  return ?CG_GameInterface_HandleEntityEventCommon@@YA_NW4LocalClientNum_t@@PEAUcentity_t@@HHIAEBUWeapon@@_N3@Z(localClientNum, cent, clientNum, event, eventParm, iweapon, isAlternate, isPlayerView);
}

/*
==============
CG_GameInterface_DrawMP_MarkVisibleVehicles
==============
*/

void __fastcall CG_GameInterface_DrawMP_MarkVisibleVehicles(CgGlobalsMP *const cgameGlob)
{
  ?CG_GameInterface_DrawMP_MarkVisibleVehicles@@YAXQEAVCgGlobalsMP@@@Z(cgameGlob);
}

/*
==============
CG_GameInterface_PlayerNameplates_CheckPlayerLast
==============
*/

bool __fastcall CG_GameInterface_PlayerNameplates_CheckPlayerLast(const characterInfo_t *const ci)
{
  return ?CG_GameInterface_PlayerNameplates_CheckPlayerLast@@YA_NQEBUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_GameInterface_HasCustomBulletTargetLogic
==============
*/

bool __fastcall BG_GameInterface_HasCustomBulletTargetLogic(const playerState_s *ps)
{
  return ?BG_GameInterface_HasCustomBulletTargetLogic@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_GetImpactSoundHitLocation
==============
*/

int __fastcall CG_GameInterface_GetImpactSoundHitLocation(LocalClientNum_t localClientNum, const int targetEntityNum, const unsigned int impactFlags, int sndImpactLoc)
{
  return ?CG_GameInterface_GetImpactSoundHitLocation@@YAHW4LocalClientNum_t@@HIH@Z(localClientNum, targetEntityNum, impactFlags, sndImpactLoc);
}

/*
==============
CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass
==============
*/

bool __fastcall CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass(const playerState_s *const ps)
{
  return ?CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo
==============
*/

void __fastcall CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const agentState_s *characterState, characterInfo_t *characterInfo, const int checkCustomization)
{
  ?CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo@@YAXW4LocalClientNum_t@@HPEBUagentState_s@@PEAUcharacterInfo_t@@H@Z(localClientNum, entityNum, characterState, characterInfo, checkCustomization);
}

/*
==============
G_GameInterface_ActiveSP_HandleClientEvent
==============
*/

bool __fastcall G_GameInterface_ActiveSP_HandleClientEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, const int serverTime)
{
  return ?G_GameInterface_ActiveSP_HandleClientEvent@@YA_NPEAUgentity_s@@PEAUplayerState_s@@HIH@Z(ent, ps, event, eventParm, serverTime);
}

/*
==============
BG_GameInterface_AnimPlayerConditions
==============
*/

void __fastcall BG_GameInterface_AnimPlayerConditions(characterInfo_t *ci)
{
  ?BG_GameInterface_AnimPlayerConditions@@YAXPEAUcharacterInfo_t@@@Z(ci);
}

/*
==============
PM_GameInterface_Weapon_ButtonJustPressed
==============
*/

bool __fastcall PM_GameInterface_Weapon_ButtonJustPressed(const pmove_t *pm, OffhandSlot *outOffHandSlot)
{
  return ?PM_GameInterface_Weapon_ButtonJustPressed@@YA_NPEBVpmove_t@@PEAW4OffhandSlot@@@Z(pm, outOffHandSlot);
}

/*
==============
BG_GameInterface_CalculateWeaponMovement_BaseStance
==============
*/

bool __fastcall BG_GameInterface_CalculateWeaponMovement_BaseStance(const playerState_s *ps)
{
  return ?BG_GameInterface_CalculateWeaponMovement_BaseStance@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_PlayADSSettleAnim
==============
*/

bool __fastcall CG_GameInterface_PlayADSSettleAnim(const LocalClientNum_t localClientNum, const playerState_s *const ps, float weaponPosFrac, DObj *obj, PlayerHandIndex hand, float settleAnimWeight)
{
  return ?CG_GameInterface_PlayADSSettleAnim@@YA_NW4LocalClientNum_t@@QEBUplayerState_s@@MPEAUDObj@@W4PlayerHandIndex@@M@Z(localClientNum, ps, weaponPosFrac, obj, hand, settleAnimWeight);
}

/*
==============
PM_GameInterface_Slide_UpdateMovement
==============
*/

bool __fastcall PM_GameInterface_Slide_UpdateMovement(pmove_t *pm)
{
  return ?PM_GameInterface_Slide_UpdateMovement@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GameInterface_AnimUpdatePlayerStateConditions
==============
*/

void __fastcall BG_GameInterface_AnimUpdatePlayerStateConditions(characterInfo_t *ci)
{
  ?BG_GameInterface_AnimUpdatePlayerStateConditions@@YAXPEAUcharacterInfo_t@@@Z(ci);
}

/*
==============
PM_GameInterface_AddWeaponDelay
==============
*/

void __fastcall PM_GameInterface_AddWeaponDelay(pmove_t *pm, const PlayerHandIndex hand)
{
  ?PM_GameInterface_AddWeaponDelay@@YAXPEAVpmove_t@@W4PlayerHandIndex@@@Z(pm, hand);
}

/*
==============
G_GameInterface_ActiveSP_PlayerStateToCharacterInfo
==============
*/

void __fastcall G_GameInterface_ActiveSP_PlayerStateToCharacterInfo(playerState_s *ps, characterInfo_t *ci)
{
  ?G_GameInterface_ActiveSP_PlayerStateToCharacterInfo@@YAXPEAUplayerState_s@@PEAUcharacterInfo_t@@@Z(ps, ci);
}

/*
==============
GPlayerEventsMP::GameInterface_RegisterPlayerEvents
==============
*/

void GPlayerEventsMP::GameInterface_RegisterPlayerEvents(void)
{
  ?GameInterface_RegisterPlayerEvents@GPlayerEventsMP@@CAXXZ();
}

/*
==============
BG_GameInterface_VehicleUpdateHealthRatio
==============
*/

void __fastcall BG_GameInterface_VehicleUpdateHealthRatio(LerpEntityStateVehicle *vehicleLerp, float healthRatio)
{
  ?BG_GameInterface_VehicleUpdateHealthRatio@@YAXPEAULerpEntityStateVehicle@@M@Z(vehicleLerp, healthRatio);
}

/*
==============
BG_GameInterface_CanBlindfire
==============
*/

bool __fastcall BG_GameInterface_CanBlindfire(const playerState_s *const ps)
{
  return ?BG_GameInterface_CanBlindfire@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GameInterface_InteractionAnims_AnimScriptEvent
==============
*/

void __fastcall BG_GameInterface_InteractionAnims_AnimScriptEvent(const PlayerAnimEntry *animEntry, const BgHandler *const handler, playerState_s *ps, int event, int isContinue, int force, unsigned int *holdrand)
{
  ?BG_GameInterface_InteractionAnims_AnimScriptEvent@@YAXPEBUPlayerAnimEntry@@QEBVBgHandler@@PEAUplayerState_s@@HHHPEAI@Z(animEntry, handler, ps, event, isContinue, force, holdrand);
}

/*
==============
PM_GameInterface_CheckForMeleeAction
==============
*/

void __fastcall PM_GameInterface_CheckForMeleeAction(pmove_t *pm, pml_t *pml, int delayedAction, unsigned int *holdrand)
{
  ?PM_GameInterface_CheckForMeleeAction@@YAXPEAVpmove_t@@PEAUpml_t@@HPEAI@Z(pm, pml, delayedAction, holdrand);
}

/*
==============
PM_GameInterface_WeaponFireDisabled
==============
*/

bool __fastcall PM_GameInterface_WeaponFireDisabled(const pmove_t *const pm)
{
  return ?PM_GameInterface_WeaponFireDisabled@@YA_NQEBVpmove_t@@@Z(pm);
}

/*
==============
G_GameInterface_Agent_HandleEvent
==============
*/

bool __fastcall G_GameInterface_Agent_HandleEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm, int serverTime)
{
  return ?G_GameInterface_Agent_HandleEvent@@YA_NPEAUgentity_s@@PEAUplayerState_s@@HIH@Z(ent, ps, event, eventParm, serverTime);
}

/*
==============
CG_GameInterface_ViewMP_DrawActiveFrame
==============
*/

void __fastcall CG_GameInterface_ViewMP_DrawActiveFrame(const LocalClientNum_t localClientNum)
{
  ?CG_GameInterface_ViewMP_DrawActiveFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_RunDeathCamOverride
==============
*/

bool __fastcall CG_GameInterface_RunDeathCamOverride(LocalClientNum_t localClientNum, bool isDeathCam)
{
  return ?CG_GameInterface_RunDeathCamOverride@@YA_NW4LocalClientNum_t@@_N@Z(localClientNum, isDeathCam);
}

/*
==============
G_GameInterface_OnClientThink
==============
*/

void __fastcall G_GameInterface_OnClientThink(int clientNum)
{
  ?G_GameInterface_OnClientThink@@YAXH@Z(clientNum);
}

/*
==============
BG_GameInterface_GetOffhandClass
==============
*/

bool __fastcall BG_GameInterface_GetOffhandClass(const playerState_s *const ps, const OffhandSlot slot, const BgWeaponMap *weaponMap, OffhandClass *outOffhandClass)
{
  return ?BG_GameInterface_GetOffhandClass@@YA_NQEBUplayerState_s@@W4OffhandSlot@@PEBVBgWeaponMap@@PEAW4OffhandClass@@@Z(ps, slot, weaponMap, outOffhandClass);
}

/*
==============
CG_GameInterface_PlayADSAnim
==============
*/

bool __fastcall CG_GameInterface_PlayADSAnim(const LocalClientNum_t localClientNum, const playerState_s *const ps, const bool isADSWeapon, float weaponPosFrac, DObj *obj, const int weaponAnim, PlayerHandIndex hand)
{
  return ?CG_GameInterface_PlayADSAnim@@YA_NW4LocalClientNum_t@@QEBUplayerState_s@@_NMPEAUDObj@@HW4PlayerHandIndex@@@Z(localClientNum, ps, isADSWeapon, weaponPosFrac, obj, weaponAnim, hand);
}

/*
==============
CG_GameInterface_DrawMaterial_DrawHitTable
==============
*/

void __fastcall CG_GameInterface_DrawMaterial_DrawHitTable(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, GfxFont *const font, const vec4_t *color, char *dest, const char *textEnd, const int surfaceFlags, const float textScale, const float lineHeight, const float x, float *outY)
{
  ?CG_GameInterface_DrawMaterial_DrawHitTable@@YAXW4LocalClientNum_t@@QEBUScreenPlacement@@QEAUGfxFont@@AEBTvec4_t@@PEADPEBDHMMMPEAM@Z(localClientNum, scrPlace, font, color, dest, textEnd, surfaceFlags, textScale, lineHeight, x, outY);
}

/*
==============
PM_GameInterface_Accelerate
==============
*/

bool __fastcall PM_GameInterface_Accelerate(pmove_t *pm, const pml_t *pml, const vec3_t *wishdir, float wishspeed, float accel)
{
  return ?PM_GameInterface_Accelerate@@YA_NPEAVpmove_t@@PEBUpml_t@@AEBTvec3_t@@MM@Z(pm, pml, wishdir, wishspeed, accel);
}

/*
==============
BG_GameInterface_LadderDisallowed
==============
*/

bool __fastcall BG_GameInterface_LadderDisallowed(const playerState_s *const ps)
{
  return ?BG_GameInterface_LadderDisallowed@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_UpdateWeaponViewmodelHand
==============
*/

void __fastcall CG_GameInterface_UpdateWeaponViewmodelHand(LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  ?CG_GameInterface_UpdateWeaponViewmodelHand@@YAXW4LocalClientNum_t@@W4PlayerHandIndex@@@Z(localClientNum, hand);
}

/*
==============
CG_GameInterface_ViewMP_FinalizeNonRemoteView
==============
*/

void __fastcall CG_GameInterface_ViewMP_FinalizeNonRemoteView(LocalClientNum_t localClientNum)
{
  ?CG_GameInterface_ViewMP_FinalizeNonRemoteView@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_EntitySP_Missile
==============
*/

void __fastcall CG_GameInterface_EntitySP_Missile(centity_t *cent, bool isVisible)
{
  ?CG_GameInterface_EntitySP_Missile@@YAXPEAUcentity_t@@_N@Z(cent, isVisible);
}

/*
==============
CG_GameInterface_ClearADSAnims
==============
*/

void __fastcall CG_GameInterface_ClearADSAnims(const LocalClientNum_t localClientNum, const playerState_s *const ps, DObj *obj)
{
  ?CG_GameInterface_ClearADSAnims@@YAXW4LocalClientNum_t@@QEBUplayerState_s@@PEAUDObj@@@Z(localClientNum, ps, obj);
}

/*
==============
CG_GameInterface_GetFootstepVolumeScale
==============
*/

double __fastcall CG_GameInterface_GetFootstepVolumeScale(const LocalClientNum_t localClientNum, const centity_t *cent, int isPlayerView)
{
  double result; 

  *(float *)&result = ?CG_GameInterface_GetFootstepVolumeScale@@YAMW4LocalClientNum_t@@PEBUcentity_t@@H@Z(localClientNum, cent, isPlayerView);
  return result;
}

/*
==============
CG_GameInterface_SetSimulateBulletFirePelletData
==============
*/

void __fastcall CG_GameInterface_SetSimulateBulletFirePelletData(LocalClientNum_t localClientNum, SimulateBulletFirePelletData *pelletData, const playerState_s *ps)
{
  ?CG_GameInterface_SetSimulateBulletFirePelletData@@YAXW4LocalClientNum_t@@PEAUSimulateBulletFirePelletData@@PEBUplayerState_s@@@Z(localClientNum, pelletData, ps);
}

/*
==============
BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent
==============
*/

bool __fastcall BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent(int playerAnimScriptEventType, const PlayerAnimEntry *animEntry, const playerState_s *ps)
{
  return ?BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent@@YA_NHPEBUPlayerAnimEntry@@PEBUplayerState_s@@@Z(playerAnimScriptEventType, animEntry, ps);
}

/*
==============
CG_GameInterface_MinimapHidePinnedObjectiveTest
==============
*/

bool __fastcall CG_GameInterface_MinimapHidePinnedObjectiveTest(const ObjectiveFlags objFlags)
{
  return ?CG_GameInterface_MinimapHidePinnedObjectiveTest@@YA_NW4ObjectiveFlags@@@Z(objFlags);
}

/*
==============
G_GameInterface_SPImpactEffectFlagsClient
==============
*/

void __fastcall G_GameInterface_SPImpactEffectFlagsClient(gentity_s *player, const BulletFireParams *bp, const Weapon *weapon, bool isAlternate, int *impactEffectFlags)
{
  ?G_GameInterface_SPImpactEffectFlagsClient@@YAXPEAUgentity_s@@PEBUBulletFireParams@@AEBUWeapon@@_NPEAH@Z(player, bp, weapon, isAlternate, impactEffectFlags);
}

/*
==============
BG_GameInterface_GetAnimConditionString
==============
*/

const char *__fastcall BG_GameInterface_GetAnimConditionString(const int condition, const int value)
{
  return ?BG_GameInterface_GetAnimConditionString@@YAPEBDHH@Z(condition, value);
}

/*
==============
BG_GameInterface_TurretUpdateHeat
==============
*/

void __fastcall BG_GameInterface_TurretUpdateHeat(LerpEntityStateTurret *turretLerp, float turretHeatLevel)
{
  ?BG_GameInterface_TurretUpdateHeat@@YAXPEAULerpEntityStateTurret@@M@Z(turretLerp, turretHeatLevel);
}

/*
==============
BG_GameInterface_ModifyAimSpreadScales
==============
*/

void __fastcall BG_GameInterface_ModifyAimSpreadScales(const playerState_s *const ps, float *staticSpreadScale, float *moveSpreadScale, float *spreadOverrideScale)
{
  ?BG_GameInterface_ModifyAimSpreadScales@@YAXQEBUplayerState_s@@PEAM11@Z(ps, staticSpreadScale, moveSpreadScale, spreadOverrideScale);
}

/*
==============
G_GameInterface_MarkClientEntitiesForForcedUpdate
==============
*/

void __fastcall G_GameInterface_MarkClientEntitiesForForcedUpdate(const gentity_s *clientEnt)
{
  ?G_GameInterface_MarkClientEntitiesForForcedUpdate@@YAXPEBUgentity_s@@@Z(clientEnt);
}

/*
==============
G_GameInterface_ActiveMP_SpectatorClientEndFrame
==============
*/

void __fastcall G_GameInterface_ActiveMP_SpectatorClientEndFrame(gentity_s *ent)
{
  ?G_GameInterface_ActiveMP_SpectatorClientEndFrame@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
CG_GameInterface_CalcBulletEndPos
==============
*/

bool __fastcall CG_GameInterface_CalcBulletEndPos(const SimulateBulletFirePelletData *pelletData, const vec3_t *start, float range, vec3_t *outDir, vec3_t *outEnd)
{
  return ?CG_GameInterface_CalcBulletEndPos@@YA_NPEBUSimulateBulletFirePelletData@@AEBTvec3_t@@MAEAT2@2@Z(pelletData, start, range, outDir, outEnd);
}

/*
==============
CG_GameInterface_ViewMP_UsingWorldSpaceTurret
==============
*/

bool __fastcall CG_GameInterface_ViewMP_UsingWorldSpaceTurret(LocalClientNum_t localClientNum)
{
  return ?CG_GameInterface_ViewMP_UsingWorldSpaceTurret@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_SetObjectiveLuaData
==============
*/

void __fastcall CG_GameInterface_SetObjectiveLuaData(const ClConfigStrings *const cs, const ObjectiveView *const objective, lua_State *luaVM)
{
  ?CG_GameInterface_SetObjectiveLuaData@@YAXQEBVClConfigStrings@@QEBUObjectiveView@@PEAUlua_State@@@Z(cs, objective, luaVM);
}

/*
==============
BG_GameInterface_UpdatePlayerMoveCollide
==============
*/

bool __fastcall BG_GameInterface_UpdatePlayerMoveCollide(pmove_t *pm, pml_t *pml)
{
  return ?BG_GameInterface_UpdatePlayerMoveCollide@@YA_NPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_GameInterface_VehicleGetHealthRatio
==============
*/

double __fastcall BG_GameInterface_VehicleGetHealthRatio(const LerpEntityStateVehicle *const vehicleLerp)
{
  double result; 

  *(float *)&result = ?BG_GameInterface_VehicleGetHealthRatio@@YAMQEBULerpEntityStateVehicle@@@Z(vehicleLerp);
  return result;
}

/*
==============
CG_GameInterface_ServerMP_RegisterGraphics
==============
*/

void __fastcall CG_GameInterface_ServerMP_RegisterGraphics(LocalClientNum_t localClientNum)
{
  ?CG_GameInterface_ServerMP_RegisterGraphics@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace
==============
*/

void __fastcall G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace(const __int16 existingIgnoreEntNum, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace@@YAXFPEAVHavokPhysics_IgnoreBodies@@@Z(existingIgnoreEntNum, ignoreBodies);
}

/*
==============
CG_GameInterface_Input_CycleWeapon_Direction
==============
*/

bool __fastcall CG_GameInterface_Input_CycleWeapon_Direction(LocalClientNum_t localClientNum, kbutton_t *button, bool forward)
{
  return ?CG_GameInterface_Input_CycleWeapon_Direction@@YA_NW4LocalClientNum_t@@PEAUkbutton_t@@_N@Z(localClientNum, button, forward);
}

/*
==============
G_GameInterface_ObjectivesUpdate
==============
*/

void __fastcall G_GameInterface_ObjectivesUpdate(const playerState_s *ps, ObjectiveView *psObj, const objective_t *const lvlObj)
{
  ?G_GameInterface_ObjectivesUpdate@@YAXPEBUplayerState_s@@PEAUObjectiveView@@QEBUobjective_t@@@Z(ps, psObj, lvlObj);
}

/*
==============
BG_GameInterface_PlayerWeaponGetCycleSlot
==============
*/

bool __fastcall BG_GameInterface_PlayerWeaponGetCycleSlot(WeaponSlot currentSlot, int cycleSlot, WeaponSlot *outNeededSlot)
{
  return ?BG_GameInterface_PlayerWeaponGetCycleSlot@@YA_NW4WeaponSlot@@HPEAW41@@Z(currentSlot, cycleSlot, outNeededSlot);
}

/*
==============
CL_GameInterface_Input_UpdateCmdOffHandButtons
==============
*/

void __fastcall CL_GameInterface_Input_UpdateCmdOffHandButtons(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_GameInterface_Input_UpdateCmdOffHandButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
BG_GameInterface_ModifyRateOfFireForWeapon
==============
*/

void __fastcall BG_GameInterface_ModifyRateOfFireForWeapon(const playerState_s *ps, const Weapon *r_weapon, float *rateofFire)
{
  ?BG_GameInterface_ModifyRateOfFireForWeapon@@YAXPEBUplayerState_s@@AEBUWeapon@@PEAM@Z(ps, r_weapon, rateofFire);
}

/*
==============
CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo
==============
*/

void __fastcall CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const clientInfo_t *clientInfo, const clientState_t *characterState, characterInfo_t *characterInfo, const int checkCustomization)
{
  ?CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo@@YAXW4LocalClientNum_t@@HPEBUclientInfo_t@@PEBUclientState_t@@PEAUcharacterInfo_t@@H@Z(localClientNum, entityNum, clientInfo, characterState, characterInfo, checkCustomization);
}

/*
==============
CG_GameInterface_PlayersSP_PrePlayer
==============
*/

void __fastcall CG_GameInterface_PlayersSP_PrePlayer(characterInfo_t *ci)
{
  ?CG_GameInterface_PlayersSP_PrePlayer@@YAXPEAUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_GameInterface_UpdateCustomNodeParameters
==============
*/

void __fastcall BG_GameInterface_UpdateCustomNodeParameters(const characterInfo_t *ci, const entityState_t *es)
{
  ?BG_GameInterface_UpdateCustomNodeParameters@@YAXPEBUcharacterInfo_t@@PEBUentityState_t@@@Z(ci, es);
}

/*
==============
G_GameInterface_CombatSP_Damage
==============
*/

int __fastcall G_GameInterface_CombatSP_Damage(int take, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal)
{
  return ?G_GameInterface_CombatSP_Damage@@YAHHPEAUgentity_s@@PEBU1@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2@Z(take, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal);
}

/*
==============
CG_GameInterface_PlayerNameplates_SkipRender
==============
*/

bool __fastcall CG_GameInterface_PlayerNameplates_SkipRender(LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return ?CG_GameInterface_PlayerNameplates_SkipRender@@YA_NW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
G_GameInterface_ReadCharacterInfoSP
==============
*/

void __fastcall G_GameInterface_ReadCharacterInfoSP(MemoryFile *memFile, characterInfo_t *ci)
{
  ?G_GameInterface_ReadCharacterInfoSP@@YAXPEAUMemoryFile@@PEAUcharacterInfo_t@@@Z(memFile, ci);
}

/*
==============
BG_GameInterface_ParseAnimFlags
==============
*/

bool __fastcall BG_GameInterface_ParseAnimFlags(const char *token, PlayerAnimEntry *const commandAnim)
{
  return ?BG_GameInterface_ParseAnimFlags@@YA_NPEBDQEAUPlayerAnimEntry@@@Z(token, commandAnim);
}

/*
==============
PM_GameInterface_UpdateViewClamp
==============
*/

void __fastcall PM_GameInterface_UpdateViewClamp(pmove_t *pm)
{
  ?PM_GameInterface_UpdateViewClamp@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GameInterface_UpdateAimAnimBlends
==============
*/

bool __fastcall BG_GameInterface_UpdateAimAnimBlends(characterInfo_t *ci, const entityState_t *es)
{
  return ?BG_GameInterface_UpdateAimAnimBlends@@YA_NPEAUcharacterInfo_t@@PEBUentityState_t@@@Z(ci, es);
}

/*
==============
CG_GameInterface_View_OffsetFirstPersonView
==============
*/

void __fastcall CG_GameInterface_View_OffsetFirstPersonView(const LocalClientNum_t localClientNum, vec3_t *inOutViewAngles, vec3_t *inOutViewOrigin)
{
  ?CG_GameInterface_View_OffsetFirstPersonView@@YAXW4LocalClientNum_t@@AEATvec3_t@@1@Z(localClientNum, inOutViewAngles, inOutViewOrigin);
}

/*
==============
CG_GameInterface_PlayersMP_PreProcess
==============
*/

void __fastcall CG_GameInterface_PlayersMP_PreProcess(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_GameInterface_PlayersMP_PreProcess@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
G_GameInterface_ActiveMP_PlayerStateToCharacterInfo
==============
*/

void __fastcall G_GameInterface_ActiveMP_PlayerStateToCharacterInfo(const playerState_s *ps, const entityState_t *es, characterInfo_t *ci)
{
  ?G_GameInterface_ActiveMP_PlayerStateToCharacterInfo@@YAXPEBUplayerState_s@@PEBUentityState_t@@PEAUcharacterInfo_t@@@Z(ps, es, ci);
}

/*
==============
CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead
==============
*/

__int16 __fastcall CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead(const characterInfo_t *const ci, const centity_t *const cent)
{
  return ?CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead@@YAFQEBUcharacterInfo_t@@QEBUcentity_t@@@Z(ci, cent);
}

/*
==============
G_GameInterface_PlayerCorpseMP_RunCorpse
==============
*/

void __fastcall G_GameInterface_PlayerCorpseMP_RunCorpse(gentity_s *ent)
{
  ?G_GameInterface_PlayerCorpseMP_RunCorpse@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
LUI_GameInterface_DataBinding_Equipment_FrameUpdate
==============
*/

void __fastcall LUI_GameInterface_DataBinding_Equipment_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_GameInterface_DataBinding_Equipment_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_HandlePlayerSlideFX
==============
*/

void __fastcall CG_GameInterface_HandlePlayerSlideFX(const LocalClientNum_t localClientNum, const vec3_t *playerAngles, const vec3_t *position, const unsigned int surfType)
{
  ?CG_GameInterface_HandlePlayerSlideFX@@YAXW4LocalClientNum_t@@Tvec3_t@@1I@Z(localClientNum, playerAngles, position, surfType);
}

/*
==============
G_GameInterface_CalcSpawnPointScore
==============
*/

double __fastcall G_GameInterface_CalcSpawnPointScore(const float factorScore, const float weight, const int factorIndex)
{
  double result; 

  *(float *)&result = ?G_GameInterface_CalcSpawnPointScore@@YAMMMH@Z(factorScore, weight, factorIndex);
  return result;
}

/*
==============
PM_GameInterface_GetLongSlideSlopeFrictionScale
==============
*/

double __fastcall PM_GameInterface_GetLongSlideSlopeFrictionScale(const int surfaceIndex)
{
  double result; 

  *(float *)&result = ?PM_GameInterface_GetLongSlideSlopeFrictionScale@@YAMH@Z(surfaceIndex);
  return result;
}

/*
==============
BG_GameInterface_IsBlindFiring
==============
*/

bool __fastcall BG_GameInterface_IsBlindFiring(const playerState_s *const ps)
{
  return ?BG_GameInterface_IsBlindFiring@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_GetVehicleCameraUpdateType
==============
*/

VehicleType __fastcall CG_GameInterface_GetVehicleCameraUpdateType(LocalClientNum_t localClientNum, const VehicleDef *vehDef)
{
  return ?CG_GameInterface_GetVehicleCameraUpdateType@@YA?AW4VehicleType@@W4LocalClientNum_t@@PEBUVehicleDef@@@Z(localClientNum, vehDef);
}

/*
==============
BG_GameInterface_ApplyFastReloadPerkVariantScaling
==============
*/

double __fastcall BG_GameInterface_ApplyFastReloadPerkVariantScaling(const playerState_s *ps, float reloadTimeScale)
{
  double result; 

  *(float *)&result = ?BG_GameInterface_ApplyFastReloadPerkVariantScaling@@YAMPEBUplayerState_s@@M@Z(ps, reloadTimeScale);
  return result;
}

/*
==============
CL_GameInterface_Input_DoSlideToProne
==============
*/

bool __fastcall CL_GameInterface_Input_DoSlideToProne(const LocalClientNum_t localClientNum, const ClActiveClient *const cl)
{
  return ?CL_GameInterface_Input_DoSlideToProne@@YA_NW4LocalClientNum_t@@QEBVClActiveClient@@@Z(localClientNum, cl);
}

/*
==============
CG_GameInterface_SnapshotMP_ResetEntity
==============
*/

void __fastcall CG_GameInterface_SnapshotMP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, int newEntity, int killcamEndingTransition)
{
  ?CG_GameInterface_SnapshotMP_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@HH@Z(localClientNum, cent, newEntity, killcamEndingTransition);
}

/*
==============
BG_GameInterface_InteractionAnims_AnimScriptAnimation
==============
*/

void __fastcall BG_GameInterface_InteractionAnims_AnimScriptAnimation(const PlayerAnimEntry *animEntry, const BgHandler *const handler, const playerState_s *ps, const aistateEnum_t state, int codeMoveType, int force, int turn)
{
  ?BG_GameInterface_InteractionAnims_AnimScriptAnimation@@YAXPEBUPlayerAnimEntry@@QEBVBgHandler@@PEBUplayerState_s@@W4aistateEnum_t@@HHH@Z(animEntry, handler, ps, state, codeMoveType, force, turn);
}

/*
==============
PM_GameInterface_Slide_IsTimeToEndSlide
==============
*/

bool __fastcall PM_GameInterface_Slide_IsTimeToEndSlide(pmove_t *pm, const int slideTime, int *outTimeRemaining, bool *outShouldEnd)
{
  return ?PM_GameInterface_Slide_IsTimeToEndSlide@@YA_NPEAVpmove_t@@HPEAHPEA_N@Z(pm, slideTime, outTimeRemaining, outShouldEnd);
}

/*
==============
PM_GameInterface_Slide_FrictionScale
==============
*/

bool __fastcall PM_GameInterface_Slide_FrictionScale(pmove_t *pm, const pml_t *pml, float *outScale)
{
  return ?PM_GameInterface_Slide_FrictionScale@@YA_NPEAVpmove_t@@PEBUpml_t@@PEAM@Z(pm, pml, outScale);
}

/*
==============
CG_GameInterface_PlayAdditiveADSCoverAnims
==============
*/

void __fastcall CG_GameInterface_PlayAdditiveADSCoverAnims(LocalClientNum_t localClientNum, const playerState_s *ps, PlayerHandIndex hand, const Weapon *weapon)
{
  ?CG_GameInterface_PlayAdditiveADSCoverAnims@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@AEBUWeapon@@@Z(localClientNum, ps, hand, weapon);
}

/*
==============
G_GameInterface_ClearObjective
==============
*/

void __fastcall G_GameInterface_ClearObjective(GConfigStrings *const cs, objective_t *const objective)
{
  ?G_GameInterface_ClearObjective@@YAXQEAVGConfigStrings@@QEAUobjective_t@@@Z(cs, objective);
}

/*
==============
G_GameInterface_ActiveMP_UpdateClientInfo
==============
*/

int __fastcall G_GameInterface_ActiveMP_UpdateClientInfo(gentity_s *ent)
{
  return ?G_GameInterface_ActiveMP_UpdateClientInfo@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
PM_GameInterface_SendEmptyOffhandEvent
==============
*/

bool __fastcall PM_GameInterface_SendEmptyOffhandEvent(pmove_t *pm, const OffhandSlot slot)
{
  return ?PM_GameInterface_SendEmptyOffhandEvent@@YA_NPEAVpmove_t@@W4OffhandSlot@@@Z(pm, slot);
}

/*
==============
BG_GameInterface_ShouldAllowJog
==============
*/

bool __fastcall BG_GameInterface_ShouldAllowJog(playerState_s *ps)
{
  return ?BG_GameInterface_ShouldAllowJog@@YA_NPEAUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_InitCgGlobalsMPData
==============
*/

void __fastcall CG_GameInterface_InitCgGlobalsMPData(CgGlobalsMP *cgGlobalsMP)
{
  ?CG_GameInterface_InitCgGlobalsMPData@@YAXPEAVCgGlobalsMP@@@Z(cgGlobalsMP);
}

/*
==============
G_GameInterface_AgentUpdateInfo
==============
*/

int __fastcall G_GameInterface_AgentUpdateInfo(gentity_s *entity)
{
  return ?G_GameInterface_AgentUpdateInfo@@YAHPEAUgentity_s@@@Z(entity);
}

/*
==============
BG_GameInterface_IsTakedownPending
==============
*/

bool __fastcall BG_GameInterface_IsTakedownPending(const playerState_s *const ps)
{
  return ?BG_GameInterface_IsTakedownPending@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GameInterface_AircraftCameraUpdate
==============
*/

bool __fastcall CG_GameInterface_AircraftCameraUpdate(cg_t *cgameGlob, const centity_t *cent, const VehicleDef *vehDef)
{
  return ?CG_GameInterface_AircraftCameraUpdate@@YA_NPEAVcg_t@@PEBUcentity_t@@PEBUVehicleDef@@@Z(cgameGlob, cent, vehDef);
}

/*
==============
PM_GameInterface_ContextMount_TryMountEdge
==============
*/

void __fastcall PM_GameInterface_ContextMount_TryMountEdge(pmove_t *const pm, pml_t *const pml, const MountSurfaceProperties *mountProperties, const bool foundEdge, ContextMountState *const inOutMountState)
{
  ?PM_GameInterface_ContextMount_TryMountEdge@@YAXQEAVpmove_t@@QEAUpml_t@@AEBUMountSurfaceProperties@@_NQEAUContextMountState@@@Z(pm, pml, mountProperties, foundEdge, inOutMountState);
}

/*
==============
BG_GameInterface_InitPlayerStateGameData
==============
*/

void __fastcall BG_GameInterface_InitPlayerStateGameData(playerState_s *ps)
{
  ?BG_GameInterface_InitPlayerStateGameData@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_GameInterface_UpdateMovementDir
==============
*/

bool __fastcall BG_GameInterface_UpdateMovementDir(pmove_t *pm, pml_t *pml, int clampOnly)
{
  return ?BG_GameInterface_UpdateMovementDir@@YA_NPEAVpmove_t@@PEAUpml_t@@H@Z(pm, pml, clampOnly);
}

/*
==============
CG_GameInterface_ViewSP_DrawActiveFrame
==============
*/

void __fastcall CG_GameInterface_ViewSP_DrawActiveFrame(const LocalClientNum_t localClientNum)
{
  ?CG_GameInterface_ViewSP_DrawActiveFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
BG_GameInterface_ModifySpreadForWeapon
==============
*/

void __fastcall BG_GameInterface_ModifySpreadForWeapon(const playerState_s *ps, const Weapon *r_weapon, float *minSpread, float *maxSpread)
{
  ?BG_GameInterface_ModifySpreadForWeapon@@YAXPEBUplayerState_s@@AEBUWeapon@@PEAM2@Z(ps, r_weapon, minSpread, maxSpread);
}

/*
==============
BG_GameInterface_InteractionAnims_GetSyncedAnimTime
==============
*/

bool __fastcall BG_GameInterface_InteractionAnims_GetSyncedAnimTime(const PlayerAnimEntry *anim, const characterInfo_t *ci, const lerpFrame_t *lf, const entityState_t *es, float *outAnimTime)
{
  return ?BG_GameInterface_InteractionAnims_GetSyncedAnimTime@@YA_NPEBUPlayerAnimEntry@@PEBUcharacterInfo_t@@PEBUlerpFrame_t@@PEBUentityState_t@@PEAM@Z(anim, ci, lf, es, outAnimTime);
}

/*
==============
CG_GameInterface_AllowedToDrawCrosshair
==============
*/

bool __fastcall CG_GameInterface_AllowedToDrawCrosshair(LocalClientNum_t localClientNum)
{
  return ?CG_GameInterface_AllowedToDrawCrosshair@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GameInterface_ShouldSkipTrackerUpdateForEntity
==============
*/

bool __fastcall CG_GameInterface_ShouldSkipTrackerUpdateForEntity(const LocalClientNum_t localClientNum, int entNum)
{
  return ?CG_GameInterface_ShouldSkipTrackerUpdateForEntity@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
PM_GameInterface_MeleeActionUpdate
==============
*/

void __fastcall PM_GameInterface_MeleeActionUpdate(pmove_t *pm, pml_t *pml)
{
  ?PM_GameInterface_MeleeActionUpdate@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
G_GameInterface_CalcBulletEndPos
==============
*/

bool __fastcall G_GameInterface_CalcBulletEndPos(const playerState_s *ps, const int gameTime, const vec3_t *start, float range, vec3_t *outDir, vec3_t *outEnd)
{
  return ?G_GameInterface_CalcBulletEndPos@@YA_NPEBUplayerState_s@@HAEBTvec3_t@@MAEAT2@2@Z(ps, gameTime, start, range, outDir, outEnd);
}

/*
==============
PM_GameInterface_ContextMount_Finalize
==============
*/

void __fastcall PM_GameInterface_ContextMount_Finalize(pmove_t *const pm, const pml_t *const pml)
{
  ?PM_GameInterface_ContextMount_Finalize@@YAXQEAVpmove_t@@QEBUpml_t@@@Z(pm, pml);
}

/*
==============
BG_GameInterface_HandleAimSet
==============
*/

bool __fastcall BG_GameInterface_HandleAimSet(const characterInfo_t *ci, const lerpFrame_t *lf, const DObj *obj, XAnimTree *pAnimTree, const PlayerAnimScript *scriptData, const float fGoalTime)
{
  return ?BG_GameInterface_HandleAimSet@@YA_NPEBUcharacterInfo_t@@PEBUlerpFrame_t@@PEBUDObj@@PEAUXAnimTree@@PEBUPlayerAnimScript@@M@Z(ci, lf, obj, pAnimTree, scriptData, fGoalTime);
}

/*
==============
CG_GameInterface_SetGamerProfileDefaults
==============
*/

void __fastcall CG_GameInterface_SetGamerProfileDefaults(GamerSettingState *state)
{
  ?CG_GameInterface_SetGamerProfileDefaults@@YAXPEAUGamerSettingState@@@Z(state);
}

/*
==============
BG_GameInterface_VehiclePhysics_Allocate
==============
*/

BgVehiclePhysics *__fastcall BG_GameInterface_VehiclePhysics_Allocate(BgVehiclePhysics *prevInstance, unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType, unsigned int profile)
{
  return ?BG_GameInterface_VehiclePhysics_Allocate@@YAPEAVBgVehiclePhysics@@PEAV1@PEAEIII@Z(prevInstance, buffer, maxBufferSize, vehType, profile);
}

/*
==============
G_GameInterface_SetActionSlot
==============
*/

bool __fastcall G_GameInterface_SetActionSlot(scrContext_t *scrContext, const unsigned int slot, const char *slotStr, playerState_s *ps)
{
  return ?G_GameInterface_SetActionSlot@@YA_NAEAUscrContext_t@@IPEBDPEAUplayerState_s@@@Z(scrContext, slot, slotStr, ps);
}

/*
==============
G_GameInterface_WriteCharacterInfoSP
==============
*/

void __fastcall G_GameInterface_WriteCharacterInfoSP(MemoryFile *memFile, characterInfo_t *ci)
{
  ?G_GameInterface_WriteCharacterInfoSP@@YAXPEAUMemoryFile@@PEAUcharacterInfo_t@@@Z(memFile, ci);
}

/*
==============
BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity
==============
*/

void __fastcall BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity(const BgHandler *const handler, const playerState_s *ps, vec3_t *outVelocity)
{
  ?BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity@@YAXQEBVBgHandler@@PEBUplayerState_s@@AEATvec3_t@@@Z(handler, ps, outVelocity);
}

/*
==============
CG_GameInterface_ThirdPersonCrosshairForceDraw
==============
*/

bool __fastcall CG_GameInterface_ThirdPersonCrosshairForceDraw(const playerState_s *const ps)
{
  return ?CG_GameInterface_ThirdPersonCrosshairForceDraw@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GameInterface_CreateSeacraft
==============
*/

BgVehiclePhysics *__fastcall BG_GameInterface_CreateSeacraft(unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType, unsigned int profile)
{
  return ?BG_GameInterface_CreateSeacraft@@YAPEAVBgVehiclePhysics@@PEAEIII@Z(buffer, maxBufferSize, vehType, profile);
}

/*
==============
BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches
==============
*/

void __fastcall BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches(const characterInfo_t *ci, const entityState_t *es, __int16 *outEntNum)
{
  ?BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches@@YAXPEBUcharacterInfo_t@@PEBUentityState_t@@PEAF@Z(ci, es, outEntNum);
}

/*
==============
G_GameInterface_Turret_AimTurret
==============
*/

bool __fastcall G_GameInterface_Turret_AimTurret(const playerState_s *ps, gentity_s *turretEnt)
{
  return ?G_GameInterface_Turret_AimTurret@@YA_NPEBUplayerState_s@@PEAUgentity_s@@@Z(ps, turretEnt);
}

/*
==============
CG_GameInterface_HasEntityTypeEvolved
==============
*/

int __fastcall CG_GameInterface_HasEntityTypeEvolved(const centity_t *cent)
{
  return ?CG_GameInterface_HasEntityTypeEvolved@@YAHPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_GameInterface_MainSP_RegisterSounds
==============
*/

void __fastcall CG_GameInterface_MainSP_RegisterSounds(const char *mapname)
{
  ?CG_GameInterface_MainSP_RegisterSounds@@YAXPEBD@Z(mapname);
}

/*
==============
CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS
==============
*/

int __fastcall CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS(LocalClientNum_t localClientNum, const centity_t *const cent, int spaceshipDelayType)
{
  return ?CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS@@YAHW4LocalClientNum_t@@QEBUcentity_t@@H@Z(localClientNum, cent, spaceshipDelayType);
}

/*
==============
BG_GameInterface_PlayerAngles
==============
*/

void __fastcall BG_GameInterface_PlayerAngles(characterInfo_t *ci, const vec3_t *headAngles, const vec3_t *torsoAngles, const vec3_t *legsAngles)
{
  ?BG_GameInterface_PlayerAngles@@YAXPEAUcharacterInfo_t@@Tvec3_t@@11@Z(ci, headAngles, torsoAngles, legsAngles);
}

/*
==============
BG_GameInterface_AddFiringAimSpreadScale
==============
*/

void __fastcall BG_GameInterface_AddFiringAimSpreadScale(playerState_s *ps)
{
  ?BG_GameInterface_AddFiringAimSpreadScale@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
G_GameInterface_WriteCharacterInfo
==============
*/

void __fastcall G_GameInterface_WriteCharacterInfo(MemoryFile *memFile, const characterInfo_t *ci)
{
  ?G_GameInterface_WriteCharacterInfo@@YAXPEAUMemoryFile@@PEBUcharacterInfo_t@@@Z(memFile, ci);
}

/*
==============
BG_GameInterface_HasFastReloadPerkVariant
==============
*/

bool __fastcall BG_GameInterface_HasFastReloadPerkVariant(const bitarray<64> *perks)
{
  return ?BG_GameInterface_HasFastReloadPerkVariant@@YA_NAEBV?$bitarray@$0EA@@@@Z(perks);
}

/*
==============
BG_GameInterface_VehiclePhysics_AllocateComponent
==============
*/

BgVehiclePhysicsComponent *__fastcall BG_GameInterface_VehiclePhysics_AllocateComponent(BgVehiclePhysicsComponent *prevInstance, unsigned __int8 *buffer, unsigned int maxBufferSize, BgVehiclePhysics *vehObj, unsigned int componentType)
{
  return ?BG_GameInterface_VehiclePhysics_AllocateComponent@@YAPEAVBgVehiclePhysicsComponent@@PEAV1@PEAEIPEAVBgVehiclePhysics@@I@Z(prevInstance, buffer, maxBufferSize, vehObj, componentType);
}

/*
==============
CG_GameInterface_SnapshotSP_ResetEntity
==============
*/

void __fastcall CG_GameInterface_SnapshotSP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, bool inPrevSnap)
{
  ?CG_GameInterface_SnapshotSP_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@_N@Z(localClientNum, cent, inPrevSnap);
}

/*
==============
BG_GameInterface_AddFiringAimSpreadScale
==============
*/
void BG_GameInterface_AddFiringAimSpreadScale(playerState_s *ps)
{
  ;
}

/*
==============
BG_GameInterface_AnimPlayerConditions
==============
*/
void BG_GameInterface_AnimPlayerConditions(characterInfo_t *ci)
{
  ;
}

/*
==============
BG_GameInterface_AnimUpdatePlayerStateConditions
==============
*/
void BG_GameInterface_AnimUpdatePlayerStateConditions(characterInfo_t *ci)
{
  ;
}

/*
==============
BG_GameInterface_ApplyFastReloadPerkVariantScaling
==============
*/
float BG_GameInterface_ApplyFastReloadPerkVariantScaling(const playerState_s *ps, float reloadTimeScale)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BG_GameInterface_CalculateWeaponMovement_BaseStance
==============
*/
char BG_GameInterface_CalculateWeaponMovement_BaseStance(const playerState_s *ps)
{
  return 1;
}

/*
==============
BG_GameInterface_CanBlindfire
==============
*/
bool BG_GameInterface_CanBlindfire(const playerState_s *const ps)
{
  return 0;
}

/*
==============
BG_GameInterface_CreateAircraft
==============
*/
BgVehiclePhysics *BG_GameInterface_CreateAircraft(unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType, unsigned int profile)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\stubs\\game_stubs_iw8.cpp", 111, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "no implementation for aircraft.\n") )
    __debugbreak();
  return 0i64;
}

/*
==============
BG_GameInterface_CreateSeacraft
==============
*/
BgVehiclePhysics *BG_GameInterface_CreateSeacraft(unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType, unsigned int profile)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\stubs\\game_stubs_iw8.cpp", 118, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "no implementation for boats.\n") )
    __debugbreak();
  return 0i64;
}

/*
==============
BG_GameInterface_GetAnimConditionString
==============
*/
const char *BG_GameInterface_GetAnimConditionString(const int condition, const int value)
{
  return 0i64;
}

/*
==============
BG_GameInterface_GetOffhandClass
==============
*/
bool BG_GameInterface_GetOffhandClass(const playerState_s *const ps, const OffhandSlot slot, const BgWeaponMap *weaponMap, OffhandClass *outOffhandClass)
{
  return 0;
}

/*
==============
BG_GameInterface_HandleAimSet
==============
*/
bool BG_GameInterface_HandleAimSet(const characterInfo_t *ci, const lerpFrame_t *lf, const DObj *obj, XAnimTree *pAnimTree)
{
  return 0;
}

/*
==============
BG_GameInterface_HasCustomBulletTargetLogic
==============
*/
bool BG_GameInterface_HasCustomBulletTargetLogic(const playerState_s *ps)
{
  return 0;
}

/*
==============
BG_GameInterface_HasFastReloadPerkVariant
==============
*/
bool BG_GameInterface_HasFastReloadPerkVariant(const bitarray<64> *perks)
{
  return 0;
}

/*
==============
BG_GameInterface_InitPlayerStateGameData
==============
*/
void BG_GameInterface_InitPlayerStateGameData(playerState_s *ps)
{
  ;
}

/*
==============
BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity
==============
*/
void BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity(const BgHandler *const handler, const playerState_s *ps, vec3_t *outVelocity)
{
  ;
}

/*
==============
BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript
==============
*/
char BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript(const PlayerAnimEntry *animEntry, const playerState_s *ps)
{
  return 1;
}

/*
==============
BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent
==============
*/
char BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent(int playerAnimScriptEventType, const PlayerAnimEntry *animEntry, const playerState_s *ps)
{
  return 1;
}

/*
==============
BG_GameInterface_InteractionAnims_AnimScriptAnimation
==============
*/
void BG_GameInterface_InteractionAnims_AnimScriptAnimation(const PlayerAnimEntry *animEntry, const BgHandler *const handler, const playerState_s *ps, const aistateEnum_t state)
{
  ;
}

/*
==============
BG_GameInterface_InteractionAnims_AnimScriptEvent
==============
*/
void BG_GameInterface_InteractionAnims_AnimScriptEvent(const PlayerAnimEntry *animEntry, const BgHandler *const handler, playerState_s *ps, int event)
{
  ;
}

/*
==============
BG_GameInterface_InteractionAnims_GetSyncedAnimTime
==============
*/
bool BG_GameInterface_InteractionAnims_GetSyncedAnimTime(const PlayerAnimEntry *anim, const characterInfo_t *ci, const lerpFrame_t *lf, const entityState_t *es)
{
  return 0;
}

/*
==============
BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches
==============
*/
void BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches(const characterInfo_t *ci, const entityState_t *es, __int16 *outEntNum)
{
  ;
}

/*
==============
BG_GameInterface_IsBlindFiring
==============
*/
bool BG_GameInterface_IsBlindFiring(const playerState_s *const ps)
{
  return 0;
}

/*
==============
BG_GameInterface_IsTakedownPending
==============
*/
bool BG_GameInterface_IsTakedownPending(const playerState_s *const ps)
{
  return 0;
}

/*
==============
BG_GameInterface_LadderDisallowed
==============
*/
bool BG_GameInterface_LadderDisallowed(const playerState_s *const ps)
{
  return 0;
}

/*
==============
BG_GameInterface_ModifyAimSpreadScales
==============
*/
void BG_GameInterface_ModifyAimSpreadScales(const playerState_s *const ps, float *staticSpreadScale, float *moveSpreadScale, float *spreadOverrideScale)
{
  ;
}

/*
==============
BG_GameInterface_ModifyRateOfFireForWeapon
==============
*/
void BG_GameInterface_ModifyRateOfFireForWeapon(const playerState_s *ps, const Weapon *r_weapon, float *rateofFire)
{
  ;
}

/*
==============
BG_GameInterface_ModifySpreadForWeapon
==============
*/
void BG_GameInterface_ModifySpreadForWeapon(const playerState_s *ps, const Weapon *r_weapon, float *minSpread, float *maxSpread)
{
  ;
}

/*
==============
BG_GameInterface_ParseAnimFlags
==============
*/
bool BG_GameInterface_ParseAnimFlags(const char *token, PlayerAnimEntry *const commandAnim)
{
  return 0;
}

/*
==============
BG_GameInterface_PlayerAngles
==============
*/
void BG_GameInterface_PlayerAngles(characterInfo_t *ci, const vec3_t *headAngles, const vec3_t *torsoAngles, const vec3_t *legsAngles)
{
  ;
}

/*
==============
BG_GameInterface_PlayerWeaponGetCycleSlot
==============
*/
bool BG_GameInterface_PlayerWeaponGetCycleSlot(WeaponSlot currentSlot, int cycleSlot, WeaponSlot *outNeededSlot)
{
  return 0;
}

/*
==============
BG_GameInterface_ShouldAllowJog
==============
*/
char BG_GameInterface_ShouldAllowJog(playerState_s *ps)
{
  return 1;
}

/*
==============
BG_GameInterface_TurretUpdateHeat
==============
*/
void BG_GameInterface_TurretUpdateHeat(LerpEntityStateTurret *turretLerp, float turretHeatLevel)
{
  ;
}

/*
==============
BG_GameInterface_UpdateAimAnimBlends
==============
*/
bool BG_GameInterface_UpdateAimAnimBlends(characterInfo_t *ci, const entityState_t *es)
{
  return 0;
}

/*
==============
BG_GameInterface_UpdateCustomNodeParameters
==============
*/
void BG_GameInterface_UpdateCustomNodeParameters(const characterInfo_t *ci, const entityState_t *es)
{
  ;
}

/*
==============
BG_GameInterface_UpdateMovementDir
==============
*/
bool BG_GameInterface_UpdateMovementDir(pmove_t *pm, pml_t *pml, int clampOnly)
{
  return 0;
}

/*
==============
BG_GameInterface_UpdatePlayerMoveCollide
==============
*/
bool BG_GameInterface_UpdatePlayerMoveCollide(pmove_t *pm, pml_t *pml)
{
  return 0;
}

/*
==============
BG_GameInterface_VehicleGetHealthRatio
==============
*/
float BG_GameInterface_VehicleGetHealthRatio(const LerpEntityStateVehicle *const vehicleLerp)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BG_GameInterface_VehiclePhysics_Allocate
==============
*/
BgVehiclePhysics *BG_GameInterface_VehiclePhysics_Allocate(BgVehiclePhysics *prevInstance, unsigned __int8 *buffer, unsigned int maxBufferSize, unsigned int vehType)
{
  return prevInstance;
}

/*
==============
BG_GameInterface_VehiclePhysics_AllocateComponent
==============
*/
BgVehiclePhysicsComponent *BG_GameInterface_VehiclePhysics_AllocateComponent(BgVehiclePhysicsComponent *prevInstance, unsigned __int8 *buffer, unsigned int maxBufferSize, BgVehiclePhysics *vehObj)
{
  return prevInstance;
}

/*
==============
BG_GameInterface_VehicleUpdateHealthRatio
==============
*/
void BG_GameInterface_VehicleUpdateHealthRatio(LerpEntityStateVehicle *vehicleLerp, float healthRatio)
{
  ;
}

/*
==============
CG_GameInterface_AircraftCameraUpdate
==============
*/
bool CG_GameInterface_AircraftCameraUpdate(cg_t *cgameGlob, const centity_t *cent, const VehicleDef *vehDef)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\stubs\\game_stubs_iw8.cpp", 204, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "no implementation for aircraft camera.\n") )
    __debugbreak();
  return 0;
}

/*
==============
CG_GameInterface_AllowedToDrawCrosshair
==============
*/
char CG_GameInterface_AllowedToDrawCrosshair(LocalClientNum_t localClientNum)
{
  return 1;
}

/*
==============
CG_GameInterface_CalcBulletEndPos
==============
*/
bool CG_GameInterface_CalcBulletEndPos(const SimulateBulletFirePelletData *pelletData, const vec3_t *start, float range, vec3_t *outDir)
{
  return 0;
}

/*
==============
CG_GameInterface_ClearADSAnims
==============
*/
void CG_GameInterface_ClearADSAnims(const LocalClientNum_t localClientNum, const playerState_s *const ps, DObj *obj)
{
  ;
}

/*
==============
CG_GameInterface_DrawMP_MarkVisibleVehicles
==============
*/
void CG_GameInterface_DrawMP_MarkVisibleVehicles(CgGlobalsMP *const cgameGlob)
{
  ;
}

/*
==============
CG_GameInterface_DrawMaterial_DrawHitTable
==============
*/
void CG_GameInterface_DrawMaterial_DrawHitTable(const LocalClientNum_t localClientNum, const ScreenPlacement *const scrPlace, GfxFont *const font, const vec4_t *color)
{
  ;
}

/*
==============
CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS
==============
*/
__int64 CG_GameInterface_EntityMP_ShouldDelayEntityPacketPostPS(LocalClientNum_t localClientNum, const centity_t *const cent, int spaceshipDelayType)
{
  return (unsigned int)spaceshipDelayType;
}

/*
==============
CG_GameInterface_EntitySP_Missile
==============
*/
void CG_GameInterface_EntitySP_Missile(centity_t *cent, bool isVisible)
{
  ;
}

/*
==============
CG_GameInterface_GetFootstepVolumeScale
==============
*/
float CG_GameInterface_GetFootstepVolumeScale(const LocalClientNum_t localClientNum, const centity_t *cent, int isPlayerView)
{
  __asm { vmovss  xmm0, cs:__real@bf800000 }
  return *(float *)&_XMM0;
}

/*
==============
CG_GameInterface_GetImpactSoundHitLocation
==============
*/
__int64 CG_GameInterface_GetImpactSoundHitLocation(LocalClientNum_t localClientNum, const int targetEntityNum, const unsigned int impactFlags, int sndImpactLoc)
{
  return (unsigned int)sndImpactLoc;
}

/*
==============
CG_GameInterface_GetVehicleCameraUpdateType
==============
*/
__int64 CG_GameInterface_GetVehicleCameraUpdateType(LocalClientNum_t localClientNum, const VehicleDef *vehDef)
{
  return (unsigned __int8)vehDef->type;
}

/*
==============
CG_GameInterface_HandleEntityEventCommon
==============
*/
bool CG_GameInterface_HandleEntityEventCommon(const LocalClientNum_t localClientNum, centity_t *cent, const int clientNum, const int event)
{
  return 0;
}

/*
==============
CG_GameInterface_HandlePlayerSlideFX
==============
*/
void CG_GameInterface_HandlePlayerSlideFX(const LocalClientNum_t localClientNum, const vec3_t *playerAngles, const vec3_t *position, const unsigned int surfType)
{
  ;
}

/*
==============
CG_GameInterface_HasEntityTypeEvolved
==============
*/
__int64 CG_GameInterface_HasEntityTypeEvolved(const centity_t *cent)
{
  return 0i64;
}

/*
==============
CG_GameInterface_InitCgGlobalsMPData
==============
*/
void CG_GameInterface_InitCgGlobalsMPData(CgGlobalsMP *cgGlobalsMP)
{
  ;
}

/*
==============
CG_GameInterface_Input_CycleWeapon_Direction
==============
*/
bool CG_GameInterface_Input_CycleWeapon_Direction(LocalClientNum_t localClientNum, kbutton_t *button, bool forward)
{
  return 0;
}

/*
==============
CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass
==============
*/
bool CG_GameInterface_LUIDataBindingWeaponFrameUpdateBypass(const playerState_s *const ps)
{
  return 0;
}

/*
==============
CG_GameInterface_MainMP_RegisterSounds
==============
*/
void CG_GameInterface_MainMP_RegisterSounds(LocalClientNum_t localClientNum, const char *mapname)
{
  ;
}

/*
==============
CG_GameInterface_MainSP_RegisterSounds
==============
*/
void CG_GameInterface_MainSP_RegisterSounds(const char *mapname)
{
  ;
}

/*
==============
CG_GameInterface_MinimapHidePinnedObjectiveTest
==============
*/
bool CG_GameInterface_MinimapHidePinnedObjectiveTest(const ObjectiveFlags objFlags)
{
  return 0;
}

/*
==============
CG_GameInterface_PlayADSAnim
==============
*/
bool CG_GameInterface_PlayADSAnim(const LocalClientNum_t localClientNum, const playerState_s *const ps, const bool isADSWeapon, float weaponPosFrac)
{
  return 0;
}

/*
==============
CG_GameInterface_PlayADSSettleAnim
==============
*/
bool CG_GameInterface_PlayADSSettleAnim(const LocalClientNum_t localClientNum, const playerState_s *const ps, float weaponPosFrac, DObj *obj)
{
  return 0;
}

/*
==============
CG_GameInterface_PlayAdditiveADSCoverAnims
==============
*/
void CG_GameInterface_PlayAdditiveADSCoverAnims(LocalClientNum_t localClientNum, const playerState_s *ps, PlayerHandIndex hand, const Weapon *weapon)
{
  ;
}

/*
==============
CG_GameInterface_PlayerNameplates_CheckPlayerLast
==============
*/
bool CG_GameInterface_PlayerNameplates_CheckPlayerLast(const characterInfo_t *const ci)
{
  return 0;
}

/*
==============
CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead
==============
*/
__int64 CG_GameInterface_PlayerNameplates_RenderOtherPlayerInstead(const characterInfo_t *const ci, const centity_t *const cent)
{
  return 2047i64;
}

/*
==============
CG_GameInterface_PlayerNameplates_SkipRender
==============
*/
bool CG_GameInterface_PlayerNameplates_SkipRender(LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return 0;
}

/*
==============
CG_GameInterface_PlayersMP_PreProcess
==============
*/
void CG_GameInterface_PlayersMP_PreProcess(LocalClientNum_t localClientNum, centity_t *cent)
{
  ;
}

/*
==============
CG_GameInterface_PlayersSP_PrePlayer
==============
*/
void CG_GameInterface_PlayersSP_PrePlayer(characterInfo_t *ci)
{
  ;
}

/*
==============
CG_GameInterface_RunDeathCamOverride
==============
*/
bool CG_GameInterface_RunDeathCamOverride(LocalClientNum_t localClientNum, bool isDeathCam)
{
  return 0;
}

/*
==============
CG_GameInterface_ServerMP_RegisterGraphics
==============
*/
void CG_GameInterface_ServerMP_RegisterGraphics(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_GameInterface_SetGamerProfileDefaults
==============
*/
void CG_GameInterface_SetGamerProfileDefaults(GamerSettingState *state)
{
  ;
}

/*
==============
CG_GameInterface_SetObjectiveLuaData
==============
*/
void CG_GameInterface_SetObjectiveLuaData(const ClConfigStrings *const cs, const ObjectiveView *const objective, lua_State *luaVM)
{
  ;
}

/*
==============
CG_GameInterface_SetSimulateBulletFirePelletData
==============
*/
void CG_GameInterface_SetSimulateBulletFirePelletData(LocalClientNum_t localClientNum, SimulateBulletFirePelletData *pelletData, const playerState_s *ps)
{
  ;
}

/*
==============
CG_GameInterface_ShouldSkipTrackerUpdateForEntity
==============
*/
bool CG_GameInterface_ShouldSkipTrackerUpdateForEntity(const LocalClientNum_t localClientNum, int entNum)
{
  return 0;
}

/*
==============
CG_GameInterface_SimulateBulletFirePellet_AddIgnoreEnts
==============
*/
void CG_GameInterface_SimulateBulletFirePellet_AddIgnoreEnts(const SimulateBulletFirePelletData *const pelletFireData, const playerState_s *const ps, BulletFireParams *outBP)
{
  ;
}

/*
==============
CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo
==============
*/
void CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const agentState_s *characterState, characterInfo_t *characterInfo)
{
  ;
}

/*
==============
CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo
==============
*/
void CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const clientInfo_t *clientInfo, const clientState_t *characterState)
{
  ;
}

/*
==============
CG_GameInterface_SnapshotMP_ResetEntity
==============
*/
void CG_GameInterface_SnapshotMP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, int newEntity, int killcamEndingTransition)
{
  ;
}

/*
==============
CG_GameInterface_SnapshotSP_ResetEntity
==============
*/
void CG_GameInterface_SnapshotSP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, bool inPrevSnap)
{
  ;
}

/*
==============
CG_GameInterface_ThirdPersonCrosshairForceDraw
==============
*/
bool CG_GameInterface_ThirdPersonCrosshairForceDraw(const playerState_s *const ps)
{
  return 0;
}

/*
==============
CG_GameInterface_UpdateWeaponViewmodelHand
==============
*/
void CG_GameInterface_UpdateWeaponViewmodelHand(LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  ;
}

/*
==============
CG_GameInterface_ViewMP_DrawActiveFrame
==============
*/
void CG_GameInterface_ViewMP_DrawActiveFrame(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_GameInterface_ViewMP_FinalizeNonRemoteView
==============
*/
void CG_GameInterface_ViewMP_FinalizeNonRemoteView(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_GameInterface_ViewMP_UsingWorldSpaceTurret
==============
*/
bool CG_GameInterface_ViewMP_UsingWorldSpaceTurret(LocalClientNum_t localClientNum)
{
  return 0;
}

/*
==============
CG_GameInterface_ViewSP_DrawActiveFrame
==============
*/
void CG_GameInterface_ViewSP_DrawActiveFrame(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_GameInterface_View_OffsetFirstPersonView
==============
*/
void CG_GameInterface_View_OffsetFirstPersonView(const LocalClientNum_t localClientNum, vec3_t *inOutViewAngles, vec3_t *inOutViewOrigin)
{
  ;
}

/*
==============
CL_GameInterface_Input_DoSlideToProne
==============
*/
char CL_GameInterface_Input_DoSlideToProne(const LocalClientNum_t localClientNum, const ClActiveClient *const cl)
{
  return 1;
}

/*
==============
CL_GameInterface_Input_UpdateCmdOffHandButtons
==============
*/
void CL_GameInterface_Input_UpdateCmdOffHandButtons(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ;
}

/*
==============
G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace
==============
*/
void G_GameInterface_AI_AddAdditionalIgnoreEntsForSightTrace(const __int16 existingIgnoreEntNum, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ;
}

/*
==============
G_GameInterface_ActiveMP_PlayerStateToCharacterInfo
==============
*/
void G_GameInterface_ActiveMP_PlayerStateToCharacterInfo(const playerState_s *ps, const entityState_t *es, characterInfo_t *ci)
{
  ;
}

/*
==============
G_GameInterface_ActiveMP_SpectatorClientEndFrame
==============
*/
void G_GameInterface_ActiveMP_SpectatorClientEndFrame(gentity_s *ent)
{
  ;
}

/*
==============
G_GameInterface_ActiveMP_UpdateClientInfo
==============
*/
__int64 G_GameInterface_ActiveMP_UpdateClientInfo(gentity_s *ent)
{
  return 0i64;
}

/*
==============
G_GameInterface_ActiveSP_HandleClientEvent
==============
*/
bool G_GameInterface_ActiveSP_HandleClientEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm)
{
  return 0;
}

/*
==============
G_GameInterface_ActiveSP_PlayerStateToCharacterInfo
==============
*/
void G_GameInterface_ActiveSP_PlayerStateToCharacterInfo(playerState_s *ps, characterInfo_t *ci)
{
  ;
}

/*
==============
G_GameInterface_AgentUpdateInfo
==============
*/
__int64 G_GameInterface_AgentUpdateInfo(gentity_s *entity)
{
  return 0i64;
}

/*
==============
G_GameInterface_Agent_HandleEvent
==============
*/
bool G_GameInterface_Agent_HandleEvent(gentity_s *ent, playerState_s *ps, int event, unsigned int eventParm)
{
  return 0;
}

/*
==============
G_GameInterface_CalcBulletEndPos
==============
*/
bool G_GameInterface_CalcBulletEndPos(const playerState_s *ps, const int gameTime, const vec3_t *start, float range)
{
  return 0;
}

/*
==============
G_GameInterface_CalcSpawnPointScore
==============
*/

float __fastcall G_GameInterface_CalcSpawnPointScore(double factorScore, const float weight, const int factorIndex)
{
  __asm { vmulss  xmm0, xmm0, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
G_GameInterface_ClearObjective
==============
*/
void G_GameInterface_ClearObjective(GConfigStrings *const cs, objective_t *const objective)
{
  ;
}

/*
==============
G_GameInterface_CombatSP_Damage
==============
*/
__int64 G_GameInterface_CombatSP_Damage(int take, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker)
{
  return (unsigned int)take;
}

/*
==============
G_GameInterface_LogCharacterLastSpawn
==============
*/
void G_GameInterface_LogCharacterLastSpawn(const SpawnPointInfo *point, const __int16 entNum)
{
  ;
}

/*
==============
G_GameInterface_MarkClientEntitiesForForcedUpdate
==============
*/
void G_GameInterface_MarkClientEntitiesForForcedUpdate(const gentity_s *clientEnt)
{
  ;
}

/*
==============
G_GameInterface_ObjectivesUpdate
==============
*/
void G_GameInterface_ObjectivesUpdate(const playerState_s *ps, ObjectiveView *psObj, const objective_t *const lvlObj)
{
  ;
}

/*
==============
G_GameInterface_OnClientThink
==============
*/
void G_GameInterface_OnClientThink(int clientNum)
{
  ;
}

/*
==============
G_GameInterface_PlayerCorpseMP_RunCorpse
==============
*/
void G_GameInterface_PlayerCorpseMP_RunCorpse(gentity_s *ent)
{
  ;
}

/*
==============
G_GameInterface_ReadCharacterInfo
==============
*/
void G_GameInterface_ReadCharacterInfo(MemoryFile *memFile, characterInfo_t *ci)
{
  ;
}

/*
==============
G_GameInterface_ReadCharacterInfoSP
==============
*/
void G_GameInterface_ReadCharacterInfoSP(MemoryFile *memFile, characterInfo_t *ci)
{
  ;
}

/*
==============
G_GameInterface_SPImpactEffectFlagsClient
==============
*/
void G_GameInterface_SPImpactEffectFlagsClient(gentity_s *player, const BulletFireParams *bp, const Weapon *weapon, bool isAlternate)
{
  ;
}

/*
==============
G_GameInterface_SetActionSlot
==============
*/
bool G_GameInterface_SetActionSlot(scrContext_t *scrContext, const unsigned int slot, const char *slotStr, playerState_s *ps)
{
  return 0;
}

/*
==============
G_GameInterface_Turret_AimTurret
==============
*/
bool G_GameInterface_Turret_AimTurret(const playerState_s *ps, gentity_s *turretEnt)
{
  return 0;
}

/*
==============
G_GameInterface_WriteCharacterInfo
==============
*/
void G_GameInterface_WriteCharacterInfo(MemoryFile *memFile, const characterInfo_t *ci)
{
  ;
}

/*
==============
G_GameInterface_WriteCharacterInfoSP
==============
*/
void G_GameInterface_WriteCharacterInfoSP(MemoryFile *memFile, characterInfo_t *ci)
{
  ;
}

/*
==============
GPlayerEventsMP::GameInterface_RegisterPlayerEvents
==============
*/
void GPlayerEventsMP::GameInterface_RegisterPlayerEvents(void)
{
  ;
}

/*
==============
LUI_GameInterface_DataBinding_Equipment_FrameUpdate
==============
*/
void LUI_GameInterface_DataBinding_Equipment_FrameUpdate(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
PM_GameInterface_Accelerate
==============
*/
bool PM_GameInterface_Accelerate(pmove_t *pm, const pml_t *pml, const vec3_t *wishdir, float wishspeed)
{
  return 0;
}

/*
==============
PM_GameInterface_AddWeaponDelay
==============
*/
void PM_GameInterface_AddWeaponDelay(pmove_t *pm, const PlayerHandIndex hand)
{
  ;
}

/*
==============
PM_GameInterface_CheckForMeleeAction
==============
*/
void PM_GameInterface_CheckForMeleeAction(pmove_t *pm, pml_t *pml, int delayedAction, unsigned int *holdrand)
{
  ;
}

/*
==============
PM_GameInterface_ContextMount_Finalize
==============
*/
void PM_GameInterface_ContextMount_Finalize(pmove_t *const pm, const pml_t *const pml)
{
  ;
}

/*
==============
PM_GameInterface_ContextMount_TryMountEdge
==============
*/
void PM_GameInterface_ContextMount_TryMountEdge(pmove_t *const pm, pml_t *const pml, const MountSurfaceProperties *mountProperties, const bool foundEdge)
{
  ;
}

/*
==============
PM_GameInterface_GetLongSlideSlopeFrictionScale
==============
*/
float PM_GameInterface_GetLongSlideSlopeFrictionScale(const int surfaceIndex)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
PM_GameInterface_MeleeActionUpdate
==============
*/
void PM_GameInterface_MeleeActionUpdate(pmove_t *pm, pml_t *pml)
{
  ;
}

/*
==============
PM_GameInterface_SendEmptyOffhandEvent
==============
*/
bool PM_GameInterface_SendEmptyOffhandEvent(pmove_t *pm, const OffhandSlot slot)
{
  return 0;
}

/*
==============
PM_GameInterface_Slide_FrictionScale
==============
*/
bool PM_GameInterface_Slide_FrictionScale(pmove_t *pm, const pml_t *pml, float *outScale)
{
  return 0;
}

/*
==============
PM_GameInterface_Slide_IsTimeToEndSlide
==============
*/
bool PM_GameInterface_Slide_IsTimeToEndSlide(pmove_t *pm, const int slideTime, int *outTimeRemaining, bool *outShouldEnd)
{
  return 0;
}

/*
==============
PM_GameInterface_Slide_UpdateMovement
==============
*/
bool PM_GameInterface_Slide_UpdateMovement(pmove_t *pm)
{
  return 0;
}

/*
==============
PM_GameInterface_UpdateViewClamp
==============
*/
void PM_GameInterface_UpdateViewClamp(pmove_t *pm)
{
  ;
}

/*
==============
PM_GameInterface_WeaponFireDisabled
==============
*/
bool PM_GameInterface_WeaponFireDisabled(const pmove_t *const pm)
{
  return 0;
}

/*
==============
PM_GameInterface_Weapon_ButtonJustPressed
==============
*/
bool PM_GameInterface_Weapon_ButtonJustPressed(const pmove_t *pm, OffhandSlot *outOffHandSlot)
{
  return 0;
}

