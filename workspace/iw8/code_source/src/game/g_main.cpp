/*
==============
G_Main_AddDebugString2D
==============
*/

void __fastcall G_Main_AddDebugString2D(float x, float y, const vec4_t *color, float scale, const char *text)
{
  ?G_Main_AddDebugString2D@@YAXMMAEBTvec4_t@@MPEBD@Z(x, y, color, scale, text);
}

/*
==============
G_Main_IsScriptPlaceRecorded
==============
*/

int __fastcall G_Main_IsScriptPlaceRecorded()
{
  return ?G_Main_IsScriptPlaceRecorded@@YAHXZ();
}

/*
==============
G_Main_AddDebugStringWithDurationCentered
==============
*/

void __fastcall G_Main_AddDebugStringWithDurationCentered(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int duration)
{
  ?G_Main_AddDebugStringWithDurationCentered@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(xyz, color, scale, text, duration);
}

/*
==============
G_Main_SightTrace
==============
*/

bool __fastcall G_Main_SightTrace(const vec3_t *start, const vec3_t *end, int passEntityNum, int passEntityNum1, int contentmask)
{
  return ?G_Main_SightTrace@@YA_NAEBTvec3_t@@0HHH@Z(start, end, passEntityNum, passEntityNum1, contentmask);
}

/*
==============
G_Main_ShutdownXAnimHunkUser
==============
*/

void G_Main_ShutdownXAnimHunkUser(void)
{
  ?G_Main_ShutdownXAnimHunkUser@@YAXXZ();
}

/*
==============
G_Main_TraceCapsuleRotated
==============
*/

void __fastcall G_Main_TraceCapsuleRotated(trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int passEntityNum, int contentmask)
{
  ?G_Main_TraceCapsuleRotated@@YAXPEAUtrace_t@@AEBTvec3_t@@11PEBUBounds@@HH@Z(results, start, end, angles, bounds, passEntityNum, contentmask);
}

/*
==============
G_Main_GetEntHandlerList
==============
*/

const GEntityHandlerList *__fastcall G_Main_GetEntHandlerList(const gentity_s *ent)
{
  return ?G_Main_GetEntHandlerList@@YAPEBUGEntityHandlerList@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_Util_FlushInvalidOtherEnt
==============
*/

void __fastcall G_Util_FlushInvalidOtherEnt(gentity_s *ent)
{
  ?G_Util_FlushInvalidOtherEnt@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Main_TraceCapsule
==============
*/

void __fastcall G_Main_TraceCapsule(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *const passEntityNumList, int passEntityCount, int contentmask)
{
  ?G_Main_TraceCapsule@@YAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@QEBHHH@Z(results, start, end, bounds, passEntityNumList, passEntityCount, contentmask);
}

/*
==============
G_Main_AddDebugString
==============
*/

void __fastcall G_Main_AddDebugString(const vec3_t *xyz, const vec4_t *color, float scale, const char *text)
{
  ?G_Main_AddDebugString@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBD@Z(xyz, color, scale, text);
}

/*
==============
G_Main_FreeEntities
==============
*/

void G_Main_FreeEntities(void)
{
  ?G_Main_FreeEntities@@YAXXZ();
}

/*
==============
G_Main_LocationalTraceAllowChildren
==============
*/

void __fastcall G_Main_LocationalTraceAllowChildren(trace_t *results, const vec3_t *start, const vec3_t *end, int passEntityNum, int contentmask, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?G_Main_LocationalTraceAllowChildren@@YAXPEAUtrace_t@@AEBTvec3_t@@1HHPEAEW4Physics_QueryPhaseSelection@@@Z(results, start, end, passEntityNum, contentmask, priorityMap, phaseSelection);
}

/*
==============
G_Main_HunkAllocXAnimServer
==============
*/

void *__fastcall G_Main_HunkAllocXAnimServer(unsigned __int64 size)
{
  return ?G_Main_HunkAllocXAnimServer@@YAPEAX_K@Z(size);
}

/*
==============
G_Main_RunThink
==============
*/

void __fastcall G_Main_RunThink(gentity_s *ent)
{
  ?G_Main_RunThink@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Main_ExitAfterToolComplete
==============
*/

bool __fastcall G_Main_ExitAfterToolComplete()
{
  return ?G_Main_ExitAfterToolComplete@@YA_NXZ();
}

/*
==============
G_Main_AllocateEntities
==============
*/

void __fastcall G_Main_AllocateEntities(HunkUser *hunkUser)
{
  ?G_Main_AllocateEntities@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_Main_IsPtrInAnimHunk
==============
*/

bool __fastcall G_Main_IsPtrInAnimHunk(const char *pos)
{
  return ?G_Main_IsPtrInAnimHunk@@YA_NPEBD@Z(pos);
}

/*
==============
G_Main_RadiusDamageTracePassed
==============
*/

int __fastcall G_Main_RadiusDamageTracePassed(const vec3_t *start, const vec3_t *end, int passEntityNum, int passEntityNum1, int contentmask, unsigned __int8 *priorityMap)
{
  return ?G_Main_RadiusDamageTracePassed@@YAHAEBTvec3_t@@0HHHPEAE@Z(start, end, passEntityNum, passEntityNum1, contentmask, priorityMap);
}

/*
==============
G_Main_InitSuits
==============
*/

void __fastcall G_Main_InitSuits(bool isFullInit)
{
  ?G_Main_InitSuits@@YAX_N@Z(isFullInit);
}

/*
==============
G_Main_ShutdownCommon
==============
*/

void __fastcall G_Main_ShutdownCommon(bool clearScripts, bool clearDvars)
{
  ?G_Main_ShutdownCommon@@YAX_N0@Z(clearScripts, clearDvars);
}

/*
==============
G_Main_LocationalTrace
==============
*/

void __fastcall G_Main_LocationalTrace(trace_t *results, const vec3_t *start, const vec3_t *end, int passEntityNum, int contentmask, unsigned __int8 *priorityMap)
{
  ?G_Main_LocationalTrace@@YAXPEAUtrace_t@@AEBTvec3_t@@1HHPEAE@Z(results, start, end, passEntityNum, contentmask, priorityMap);
}

/*
==============
G_Main_InitCommon
==============
*/

void __fastcall G_Main_InitCommon(const GEntityHandlerList *entityHandlerList, bool registerDvars)
{
  ?G_Main_InitCommon@@YAXPEBUGEntityHandlerList@@_N@Z(entityHandlerList, registerDvars);
}

/*
==============
G_Main_PrecacheServerShellshock
==============
*/

void __fastcall G_Main_PrecacheServerShellshock(const unsigned int shockIndex, const char *name)
{
  ?G_Main_PrecacheServerShellshock@@YAXIPEBD@Z(shockIndex, name);
}

/*
==============
G_Main_SetupGameTypeQuick
==============
*/

void __fastcall G_Main_SetupGameTypeQuick(const char *gameType)
{
  ?G_Main_SetupGameTypeQuick@@YAXPEBD@Z(gameType);
}

/*
==============
G_Main_UserMoveWorkerFinish
==============
*/

void G_Main_UserMoveWorkerFinish(void)
{
  ?G_Main_UserMoveWorkerFinish@@YAXXZ();
}

/*
==============
G_Main_ClearLowHunk
==============
*/

void G_Main_ClearLowHunk(void)
{
  ?G_Main_ClearLowHunk@@YAXXZ();
}

/*
==============
G_Main_AddDebugStringWithDuration
==============
*/

void __fastcall G_Main_AddDebugStringWithDuration(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int duration)
{
  ?G_Main_AddDebugStringWithDuration@@YAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(xyz, color, scale, text, duration);
}

/*
==============
G_Main_WorldPointToScreenPos
==============
*/

bool __fastcall G_Main_WorldPointToScreenPos(const vec3_t *viewOrigin, const tmat33_t<vec3_t> *cameraMtx, float viewFOV, const vec3_t *targetPoint, vec2_t *outScreenPos)
{
  return ?G_Main_WorldPointToScreenPos@@YA_NAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@M0AEATvec2_t@@@Z(viewOrigin, cameraMtx, viewFOV, targetPoint, outScreenPos);
}

/*
==============
G_Main_GetTime
==============
*/

int __fastcall G_Main_GetTime()
{
  return ?G_Main_GetTime@@YAHXZ();
}

/*
==============
G_Main_LocationalTraceAllowChildren
==============
*/

void __fastcall G_Main_LocationalTraceAllowChildren(trace_t *results, const vec3_t *start, const vec3_t *end, const int *const passEntityNumList, int passEntityCount, int contentmask, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?G_Main_LocationalTraceAllowChildren@@YAXPEAUtrace_t@@AEBTvec3_t@@1QEBHHHPEAEW4Physics_QueryPhaseSelection@@@Z(results, start, end, passEntityNumList, passEntityCount, contentmask, priorityMap, phaseSelection);
}

/*
==============
G_Main_TraceCapsuleComplete
==============
*/

int __fastcall G_Main_TraceCapsuleComplete(const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum1, int contentmask)
{
  return ?G_Main_TraceCapsuleComplete@@YAHAEBTvec3_t@@0PEBUBounds@@HHH@Z(start, end, bounds, passEntityNum, passEntityNum1, contentmask);
}

/*
==============
G_Main_TraceCapsule
==============
*/

void __fastcall G_Main_TraceCapsule(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  ?G_Main_TraceCapsule@@YAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@HH@Z(results, start, end, bounds, passEntityNum, contentmask);
}

/*
==============
G_Main_RunPreThinkForEntities
==============
*/

void G_Main_RunPreThinkForEntities(void)
{
  ?G_Main_RunPreThinkForEntities@@YAXXZ();
}

/*
==============
G_Main_IsEventValid
==============
*/

bool __fastcall G_Main_IsEventValid(const gentity_s *ent)
{
  return ?G_Main_IsEventValid@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Main_InitXanimHunkUser
==============
*/

void G_Main_InitXanimHunkUser(void)
{
  ?G_Main_InitXanimHunkUser@@YAXXZ();
}

/*
==============
G_Main_DecommitUnusedXAnimHunkUser
==============
*/

void G_Main_DecommitUnusedXAnimHunkUser(void)
{
  ?G_Main_DecommitUnusedXAnimHunkUser@@YAXXZ();
}

/*
==============
G_Main_UserMoveWorkersBegin
==============
*/

void G_Main_UserMoveWorkersBegin(void)
{
  ?G_Main_UserMoveWorkersBegin@@YAXXZ();
}

/*
==============
G_Main_ResetXAnimMemory
==============
*/

void G_Main_ResetXAnimMemory(void)
{
  ?G_Main_ResetXAnimMemory@@YAXXZ();
}

/*
==============
G_Main_PreCommitXanimHunkUser
==============
*/

void G_Main_PreCommitXanimHunkUser(void)
{
  ?G_Main_PreCommitXanimHunkUser@@YAXXZ();
}

/*
==============
G_Main_ProcessEntityNotifies
==============
*/

void __fastcall G_Main_ProcessEntityNotifies(const int entityIndex)
{
  ?G_Main_ProcessEntityNotifies@@YAXH@Z(entityIndex);
}

/*
==============
G_Main_AddDebugString2D
==============
*/
void G_Main_AddDebugString2D(float x, float y, const vec4_t *color, float scale, const char *text)
{
  CL_AddDebugString2D(x, y, color, scale, text, 1, 1);
}

/*
==============
G_Main_AddDebugString
==============
*/
void G_Main_AddDebugString(const vec3_t *xyz, const vec4_t *color, float scale, const char *text)
{
  CL_AddDebugString(xyz, color, scale, text, 1, 1);
}

/*
==============
G_Main_AddDebugStringWithDuration
==============
*/
void G_Main_AddDebugStringWithDuration(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int duration)
{
  CL_AddDebugString(xyz, color, scale, text, 1, duration);
}

/*
==============
G_Main_AddDebugStringWithDurationCentered
==============
*/
void G_Main_AddDebugStringWithDurationCentered(const vec3_t *xyz, const vec4_t *color, float scale, const char *text, int duration)
{
  CL_AddDebugStringCentered(xyz, color, scale, text, 1, duration);
}

/*
==============
G_Main_AllocateEntities
==============
*/
void G_Main_AllocateEntities(HunkUser *hunkUser)
{
  if ( g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 185, ASSERT_TYPE_ASSERT, "( g_entities == nullptr )", (const char *)&queryFormat, "g_entities == nullptr") )
    __debugbreak();
  g_entities = (gentity_s *)Mem_HunkUser_AllocInternal(hunkUser, 0x2D8000ui64, 8ui64, "G_Main_AllocateEntities");
  g_entityIsInUse = (unsigned __int8 *)Mem_HunkUser_AllocInternal(hunkUser, 0x800ui64, 8ui64, "G_Main_AllocateEntities");
  s_entitiesCopy = (gentity_s *)Mem_HunkUser_AllocInternal(hunkUser, 0x2D8000ui64, 8ui64, "G_Main_AllocateEntities");
  s_entitiesInUseCopy = (unsigned __int8 *)Mem_HunkUser_AllocInternal(hunkUser, 0x800ui64, 8ui64, "G_Main_AllocateEntities");
}

/*
==============
G_Main_ClearLowHunk
==============
*/
void G_Main_ClearLowHunk(void)
{
  scrContext_t *v0; 
  unsigned __int64 UsedSize; 

  v0 = ScriptContext_Server();
  if ( !s_gameXAnimMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 825, ASSERT_TYPE_ASSERT, "( s_gameXAnimMemory != nullptr )", (const char *)&queryFormat, "s_gameXAnimMemory != nullptr") )
    __debugbreak();
  UsedSize = Mem_HunkUser_GetUsedSize(s_gameXAnimMemory);
  Com_Printf(15, "G_Main_ResetXAnimMemory: %zu bytes used\n", UsedSize);
  Mem_HunkUser_Reset(s_gameXAnimMemory);
  GScr_FreeScripts();
  Scr_FreeScripts(v0, 1u);
  Scr_CheckProgramHunkUsersClear(v0);
}

/*
==============
G_Main_DeRegisterDvars
==============
*/
const dvar_t *G_Main_DeRegisterDvars()
{
  const dvar_t *result; 

  DCONST_DVARMPSPINT_g_maxDroppedWeapons = Dvar_Deregister(DCONST_DVARMPSPINT_g_maxDroppedWeapons);
  DCONST_DVARINT_g_maxDroppedEquipment = Dvar_Deregister(DCONST_DVARINT_g_maxDroppedEquipment);
  DVARFLT_g_dropWeaponHeight = Dvar_Deregister(DVARFLT_g_dropWeaponHeight);
  DVARFLT_actorDropItemMaxVelocity = Dvar_Deregister(DVARFLT_actorDropItemMaxVelocity);
  DVARFLT_actorDropItemMaxAngularVelocity = Dvar_Deregister(DVARFLT_actorDropItemMaxAngularVelocity);
  DVARINT_trigger_draw = Dvar_Deregister(DVARINT_trigger_draw);
  DVARINT_trigger_drawDistance = Dvar_Deregister(DVARINT_trigger_drawDistance);
  DVARBOOL_trigger_drawDepthTest = Dvar_Deregister(DVARBOOL_trigger_drawDepthTest);
  DVARSTR_trigger_drawTargetName = Dvar_Deregister(DVARSTR_trigger_drawTargetName);
  DVARBOOL_trigger_drawSolid = Dvar_Deregister(DVARBOOL_trigger_drawSolid);
  DVARVEC4_trigger_drawSolidColor = Dvar_Deregister(DVARVEC4_trigger_drawSolidColor);
  DCONST_DVARFLT_g_damagePartDamageRadius = Dvar_Deregister(DCONST_DVARFLT_g_damagePartDamageRadius);
  DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance = Dvar_Deregister(DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance);
  DVARBOOL_pickupPrints = Dvar_Deregister(DVARBOOL_pickupPrints);
  DVARBOOL_g_debugDamage = Dvar_Deregister(DVARBOOL_g_debugDamage);
  DVARINT_g_debugBullets = Dvar_Deregister(DVARINT_g_debugBullets);
  DVARINT_g_debugPlayerDeath_DamageType = Dvar_Deregister(DVARINT_g_debugPlayerDeath_DamageType);
  DVARINT_g_debugPlayerDeath_HitLocation = Dvar_Deregister(DVARINT_g_debugPlayerDeath_HitLocation);
  DVARINT_g_debugPlayerDeath_HitDirection = Dvar_Deregister(DVARINT_g_debugPlayerDeath_HitDirection);
  DVARBOOL_shieldDebug = Dvar_Deregister(DVARBOOL_shieldDebug);
  DVARBOOL_g_turretBulletCorrectionDebug = Dvar_Deregister(DVARBOOL_g_turretBulletCorrectionDebug);
  DVARSTR_g_vehicleDrawPath = Dvar_Deregister(DVARSTR_g_vehicleDrawPath);
  DVARBOOL_radius_damage_debug = Dvar_Deregister(DVARBOOL_radius_damage_debug);
  DVARBOOL_radius_damage_debug_detailed = Dvar_Deregister(DVARBOOL_radius_damage_debug_detailed);
  DVARINT_radius_damage_debug_ent = Dvar_Deregister(DVARINT_radius_damage_debug_ent);
  DCONST_DVARFLT_radius_damage_vehicle_player_top_offset = Dvar_Deregister(DCONST_DVARFLT_radius_damage_vehicle_player_top_offset);
  DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset = Dvar_Deregister(DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset);
  DVARBOOL_g_turretAllowDeferDamageToParentVehicle = Dvar_Deregister(DVARBOOL_g_turretAllowDeferDamageToParentVehicle);
  DVARINT_g_dumpAnims = Dvar_Deregister(DVARINT_g_dumpAnims);
  DVARINT_g_dobjdump = Dvar_Deregister(DVARINT_g_dobjdump);
  DVARINT_g_dumpAnimsCommands = Dvar_Deregister(DVARINT_g_dumpAnimsCommands);
  DVARBOOL_g_animsCommandsVerbose = Dvar_Deregister(DVARBOOL_g_animsCommandsVerbose);
  DVARBOOL_g_recordScriptPlace = Dvar_Deregister(DVARBOOL_g_recordScriptPlace);
  DVARINT_fx_dump = Dvar_Deregister(DVARINT_fx_dump);
  DVARBOOL_g_assertOnModelAttachFailure = Dvar_Deregister(DVARBOOL_g_assertOnModelAttachFailure);
  DVARINT_s_debugPlayerAnimScript = Dvar_Deregister(DVARINT_s_debugPlayerAnimScript);
  DVARSTR_gamedate = Dvar_Deregister(DVARSTR_gamedate);
  DVARBOOL_moving_platform_rotational_antilag = Dvar_Deregister(DVARBOOL_moving_platform_rotational_antilag);
  DVARFLT_player_throwbackInnerRadius = Dvar_Deregister(DVARFLT_player_throwbackInnerRadius);
  DVARFLT_player_throwbackOuterRadius = Dvar_Deregister(DVARFLT_player_throwbackOuterRadius);
  DVARFLT_player_throwbackFOV = Dvar_Deregister(DVARFLT_player_throwbackFOV);
  DVARFLT_player_vehicleUseRadius = Dvar_Deregister(DVARFLT_player_vehicleUseRadius);
  DVARFLT_player_vehicleUseFOV = Dvar_Deregister(DVARFLT_player_vehicleUseFOV);
  DVARFLT_player_MGUseRadius = Dvar_Deregister(DVARFLT_player_MGUseRadius);
  DVARFLT_player_MGUseFOV = Dvar_Deregister(DVARFLT_player_MGUseFOV);
  DCONST_DVARMODEFLT_player_itemUseRadius = Dvar_Deregister(DCONST_DVARMODEFLT_player_itemUseRadius);
  DCONST_DVARMPFLT_player_itemUseFOV = Dvar_Deregister(DCONST_DVARMPFLT_player_itemUseFOV);
  DCONST_DVARMPFLT_player_itemAutoUseRadius = Dvar_Deregister(DCONST_DVARMPFLT_player_itemAutoUseRadius);
  DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds = Dvar_Deregister(DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds);
  DVARFLT_player_useRadius = Dvar_Deregister(DVARFLT_player_useRadius);
  DVARFLT_player_useFOV = Dvar_Deregister(DVARFLT_player_useFOV);
  DCONST_DVARMPFLT_player_useVerticalDist = Dvar_Deregister(DCONST_DVARMPFLT_player_useVerticalDist);
  DCONST_DVARMPFLT_cursorHintControlLockExitTimeout = Dvar_Deregister(DCONST_DVARMPFLT_cursorHintControlLockExitTimeout);
  DVARFLT_player_buttonHintFOV = Dvar_Deregister(DVARFLT_player_buttonHintFOV);
  DVARFLT_player_buttonHintRadius = Dvar_Deregister(DVARFLT_player_buttonHintRadius);
  DVARFLT_player_buttonHintShortRadius = Dvar_Deregister(DVARFLT_player_buttonHintShortRadius);
  DCONST_DVARINT_g_playerMaxExtrapolationTime = Dvar_Deregister(DCONST_DVARINT_g_playerMaxExtrapolationTime);
  DCONST_DVARINT_g_itemMaxExtrapolationTime = Dvar_Deregister(DCONST_DVARINT_g_itemMaxExtrapolationTime);
  DVARFLT_g_minGrenadeDamageSpeed = Dvar_Deregister(DVARFLT_g_minGrenadeDamageSpeed);
  DVARINT_g_speed = Dvar_Deregister(DVARINT_g_speed);
  DVARFLT_g_knockback = Dvar_Deregister(DVARFLT_g_knockback);
  DVARFLT_g_knockbackPlayerScale = Dvar_Deregister(DVARFLT_g_knockbackPlayerScale);
  DVARBOOL_g_radiusDamageCalcDetailBounds = Dvar_Deregister(DVARBOOL_g_radiusDamageCalcDetailBounds);
  DVARBOOL_transient_auto_pause = Dvar_Deregister(DVARBOOL_transient_auto_pause);
  DVARBOOL_ufoHitsTriggers = Dvar_Deregister(DVARBOOL_ufoHitsTriggers);
  DVARINT_g_debugLocDamage = Dvar_Deregister(DVARINT_g_debugLocDamage);
  DVARINT_g_debugLocHit = Dvar_Deregister(DVARINT_g_debugLocHit);
  DVARINT_g_debugLocHitTime = Dvar_Deregister(DVARINT_g_debugLocHitTime);
  DVARFLT_g_friendlyNameDist = Dvar_Deregister(DVARFLT_g_friendlyNameDist);
  DCONST_DVARMPFLT_g_friendlyfireDist = Dvar_Deregister(DCONST_DVARMPFLT_g_friendlyfireDist);
  DVARFLT_shieldBlastDamageProtection_30 = Dvar_Deregister(DVARFLT_shieldBlastDamageProtection_30);
  DVARFLT_shieldBlastDamageProtection_60 = Dvar_Deregister(DVARFLT_shieldBlastDamageProtection_60);
  DVARFLT_shieldBlastDamageProtection_120 = Dvar_Deregister(DVARFLT_shieldBlastDamageProtection_120);
  DVARFLT_shieldBlastDamageProtection_180 = Dvar_Deregister(DVARFLT_shieldBlastDamageProtection_180);
  DVARBOOL_g_listEntity = Dvar_Deregister(DVARBOOL_g_listEntity);
  DVARFLT_g_entinfo_maxdist = Dvar_Deregister(DVARFLT_g_entinfo_maxdist);
  DVARBOOL_g_earthquakeEnable = Dvar_Deregister(DVARBOOL_g_earthquakeEnable);
  DCONST_DVARMPBOOL_useparentlink = Dvar_Deregister(DCONST_DVARMPBOOL_useparentlink);
  DVARINT_g_drawGrenadeHints = Dvar_Deregister(DVARINT_g_drawGrenadeHints);
  DVARBOOL_g_drawWeaponMap = Dvar_Deregister(DVARBOOL_g_drawWeaponMap);
  DVARBOOL_g_debugUsables = Dvar_Deregister(DVARBOOL_g_debugUsables);
  DVARINT_g_debugUse = Dvar_Deregister(DVARINT_g_debugUse);
  DVARBOOL_g_debugUseFull = Dvar_Deregister(DVARBOOL_g_debugUseFull);
  DCONST_DVARMPINT_g_defaultUsePriority = Dvar_Deregister(DCONST_DVARMPINT_g_defaultUsePriority);
  DCONST_DVARMPFLT_g_useDirectLookOuterAngle = Dvar_Deregister(DCONST_DVARMPFLT_g_useDirectLookOuterAngle);
  DCONST_DVARMPFLT_g_useDirectLookOuterDistance = Dvar_Deregister(DCONST_DVARMPFLT_g_useDirectLookOuterDistance);
  DCONST_DVARMPFLT_g_useDirectLookInnerAngle = Dvar_Deregister(DCONST_DVARMPFLT_g_useDirectLookInnerAngle);
  DCONST_DVARMPFLT_g_useDirectLookInnerDistance = Dvar_Deregister(DCONST_DVARMPFLT_g_useDirectLookInnerDistance);
  DVARBOOL_g_useEnableScoringFixForUseRange = Dvar_Deregister(DVARBOOL_g_useEnableScoringFixForUseRange);
  DVARINT_g_useWithinUseRangePriorityDelta = Dvar_Deregister(DVARINT_g_useWithinUseRangePriorityDelta);
  DVARBOOL_g_eventWarningEnable = Dvar_Deregister(DVARBOOL_g_eventWarningEnable);
  DVARINT_g_eventPrintEntity = Dvar_Deregister(DVARINT_g_eventPrintEntity);
  DCONST_DVARBOOL_g_weaponEnforceNames = Dvar_Deregister(DCONST_DVARBOOL_g_weaponEnforceNames);
  DVARSTR_mapname = Dvar_Deregister(DVARSTR_mapname);
  DVARFLT_g_fixedDeathCameraTraceHeight = Dvar_Deregister(DVARFLT_g_fixedDeathCameraTraceHeight);
  DVARFLT_g_fixedDeathCameraMinGravForFallChecks = Dvar_Deregister(DVARFLT_g_fixedDeathCameraMinGravForFallChecks);
  DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags = Dvar_Deregister(DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags);
  DVARBOOL_g_debugdrawTagInfoPool = Dvar_Deregister(DVARBOOL_g_debugdrawTagInfoPool);
  DCONST_DVARBOOL_g_antilagPoseBlend = Dvar_Deregister(DCONST_DVARBOOL_g_antilagPoseBlend);
  DCONST_DVARINT_g_debugInfil = Dvar_Deregister(DCONST_DVARINT_g_debugInfil);
  DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams = Dvar_Deregister(DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams);
  DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates = Dvar_Deregister(DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates);
  DVARBOOL_g_DisablePlayerRepulsors = Dvar_Deregister(DVARBOOL_g_DisablePlayerRepulsors);
  DVARBOOL_g_debugGrenadeNotifies = Dvar_Deregister(DVARBOOL_g_debugGrenadeNotifies);
  DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay = Dvar_Deregister(DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay);
  DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay = Dvar_Deregister(DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay);
  DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance = Dvar_Deregister(DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance);
  DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs = Dvar_Deregister(DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs);
  DCONST_DVARFLT_g_worldstreaming_minVelocity = Dvar_Deregister(DCONST_DVARFLT_g_worldstreaming_minVelocity);
  DCONST_DVARBOOL_g_worldStreaming_verbose = Dvar_Deregister(DCONST_DVARBOOL_g_worldStreaming_verbose);
  DCONST_DVARBOOL_g_dropWeaponLaunchTrace = Dvar_Deregister(DCONST_DVARBOOL_g_dropWeaponLaunchTrace);
  DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit = Dvar_Deregister(DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit);
  DVARBOOL_g_useCheapScriptedMoversForLargeMap = Dvar_Deregister(DVARBOOL_g_useCheapScriptedMoversForLargeMap);
  DCONST_DVARINT_g_debugPlayerSpectateStream = Dvar_Deregister(DCONST_DVARINT_g_debugPlayerSpectateStream);
  DVARINT_glass_damageToWeaken = Dvar_Deregister(DVARINT_glass_damageToWeaken);
  DVARINT_glass_damageToDestroy = Dvar_Deregister(DVARINT_glass_damageToDestroy);
  DVARINT_glass_meleeDamage = Dvar_Deregister(DVARINT_glass_meleeDamage);
  DVARFLT_glass_radiusDamageMultiplier = Dvar_Deregister(DVARFLT_glass_radiusDamageMultiplier);
  DCONST_DVARMPFLT_missileRemoteSpeedUp = Dvar_Deregister(DCONST_DVARMPFLT_missileRemoteSpeedUp);
  DCONST_DVARMPFLT_missileRemoteSpeedDown = Dvar_Deregister(DCONST_DVARMPFLT_missileRemoteSpeedDown);
  DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange = Dvar_Deregister(DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange);
  DVARBOOL_missileDebugAttractors = Dvar_Deregister(DVARBOOL_missileDebugAttractors);
  DVARBOOL_veh_drawTrack = Dvar_Deregister(DVARBOOL_veh_drawTrack);
  DVARINT_vehCam_mode = Dvar_Deregister(DVARINT_vehCam_mode);
  DVARFLT_veh_aiOverSteerScale = Dvar_Deregister(DVARFLT_veh_aiOverSteerScale);
  DVARFLT_veh_nonPhysicsSteerScale = Dvar_Deregister(DVARFLT_veh_nonPhysicsSteerScale);
  DVARFLT_veh_explodeForce = Dvar_Deregister(DVARFLT_veh_explodeForce);
  DVARFLT_vehHelicopterMaxSpeed = Dvar_Deregister(DVARFLT_vehHelicopterMaxSpeed);
  DVARFLT_vehHelicopterMaxSpeedVertical = Dvar_Deregister(DVARFLT_vehHelicopterMaxSpeedVertical);
  DVARFLT_vehHelicopterMaxAccel = Dvar_Deregister(DVARFLT_vehHelicopterMaxAccel);
  DVARFLT_vehHelicopterMaxAccelVertical = Dvar_Deregister(DVARFLT_vehHelicopterMaxAccelVertical);
  DVARFLT_vehHelicopterMaxYawRate = Dvar_Deregister(DVARFLT_vehHelicopterMaxYawRate);
  DVARFLT_vehHelicopterMaxYawAccel = Dvar_Deregister(DVARFLT_vehHelicopterMaxYawAccel);
  DVARFLT_vehHelicopterMaxPitch = Dvar_Deregister(DVARFLT_vehHelicopterMaxPitch);
  DVARFLT_vehHelicopterMaxRoll = Dvar_Deregister(DVARFLT_vehHelicopterMaxRoll);
  DVARFLT_vehHelicopterLookaheadTime = Dvar_Deregister(DVARFLT_vehHelicopterLookaheadTime);
  DVARFLT_vehHelicopterHoverSpeedThreshold = Dvar_Deregister(DVARFLT_vehHelicopterHoverSpeedThreshold);
  DVARFLT_vehHelicopterRightStickDeadzone = Dvar_Deregister(DVARFLT_vehHelicopterRightStickDeadzone);
  DVARFLT_vehHelicopterStrafeDeadzone = Dvar_Deregister(DVARFLT_vehHelicopterStrafeDeadzone);
  DVARBOOL_vehHelicopterScaleMovement = Dvar_Deregister(DVARBOOL_vehHelicopterScaleMovement);
  DVARFLT_vehHelicopterPitchOffset = Dvar_Deregister(DVARFLT_vehHelicopterPitchOffset);
  DVARBOOL_vehHelicopterSoftCollisions = Dvar_Deregister(DVARBOOL_vehHelicopterSoftCollisions);
  DVARFLT_vehHelicopterDecelerationFwd = Dvar_Deregister(DVARFLT_vehHelicopterDecelerationFwd);
  DVARFLT_vehHelicopterDecelerationSide = Dvar_Deregister(DVARFLT_vehHelicopterDecelerationSide);
  DVARFLT_vehHelicopterDecelerationUp = Dvar_Deregister(DVARFLT_vehHelicopterDecelerationUp);
  DVARBOOL_vehHelicopterInvertUpDown = Dvar_Deregister(DVARBOOL_vehHelicopterInvertUpDown);
  DVARFLT_vehHelicopterYawOnLeftStick = Dvar_Deregister(DVARFLT_vehHelicopterYawOnLeftStick);
  DVARFLT_vehHelicopterTiltSpeed = Dvar_Deregister(DVARFLT_vehHelicopterTiltSpeed);
  DVARFLT_vehHelicopterTiltFromAcceleration = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromAcceleration);
  DVARFLT_vehHelicopterTiltFromDeceleration = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromDeceleration);
  DVARFLT_vehHelicopterTiltFromVelocity = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromVelocity);
  DVARFLT_vehHelicopterTiltFromControllerAxes = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromControllerAxes);
  DVARFLT_vehHelicopterTiltFromFwdAndYaw = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromFwdAndYaw);
  DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt = Dvar_Deregister(DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt);
  DVARFLT_vehHelicopterJitterJerkyness = Dvar_Deregister(DVARFLT_vehHelicopterJitterJerkyness);
  DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret = Dvar_Deregister(DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret);
  DVARFLT_vehHelicopterTiltMomentum = Dvar_Deregister(DVARFLT_vehHelicopterTiltMomentum);
  DVARFLT_vehHelicopterBoundsRadius = Dvar_Deregister(DVARFLT_vehHelicopterBoundsRadius);
  DVARBOOL_vehLegacyHeliRotorsDamage = Dvar_Deregister(DVARBOOL_vehLegacyHeliRotorsDamage);
  DCONST_DVARFLT_vehLegacyHeliRotorsExpand = Dvar_Deregister(DCONST_DVARFLT_vehLegacyHeliRotorsExpand);
  DCONST_DVARBOOL_vehScriptCheckSuspended = Dvar_Deregister(DCONST_DVARBOOL_vehScriptCheckSuspended);
  DCONST_DVARFLT_vehTankNoiseSpeedFac = Dvar_Deregister(DCONST_DVARFLT_vehTankNoiseSpeedFac);
  DCONST_DVARFLT_vehTankNoiseMinRpmMovFactor = Dvar_Deregister(DCONST_DVARFLT_vehTankNoiseMinRpmMovFactor);
  DCONST_DVARFLT_vehTankInertiaFactorRoll = Dvar_Deregister(DCONST_DVARFLT_vehTankInertiaFactorRoll);
  DCONST_DVARFLT_vehTankInertiaFactorPitch = Dvar_Deregister(DCONST_DVARFLT_vehTankInertiaFactorPitch);
  DCONST_DVARFLT_vehTankInertiaFactorYaw = Dvar_Deregister(DCONST_DVARFLT_vehTankInertiaFactorYaw);
  DCONST_DVARFLT_vehTankMassFactor = Dvar_Deregister(DCONST_DVARFLT_vehTankMassFactor);
  DCONST_DVARFLT_vehTankFireForce = Dvar_Deregister(DCONST_DVARFLT_vehTankFireForce);
  DVARFLT_vehUGVWheelInfluence = Dvar_Deregister(DVARFLT_vehUGVWheelInfluence);
  DVARFLT_vehUGVPitchTrack = Dvar_Deregister(DVARFLT_vehUGVPitchTrack);
  DVARFLT_vehUGVRollTrack = Dvar_Deregister(DVARFLT_vehUGVRollTrack);
  DVARVEC3_spaceshipAiBoostSpeed = Dvar_Deregister(DVARVEC3_spaceshipAiBoostSpeed);
  DVARVEC3_spaceshipAiBoostThrust = Dvar_Deregister(DVARVEC3_spaceshipAiBoostThrust);
  DVARVEC3_spaceshipAiBoostCounterThrust = Dvar_Deregister(DVARVEC3_spaceshipAiBoostCounterThrust);
  DVARVEC3_spaceshipAiBoostFriction = Dvar_Deregister(DVARVEC3_spaceshipAiBoostFriction);
  DVARFLT_spaceshipAiBoostTurnSpeed = Dvar_Deregister(DVARFLT_spaceshipAiBoostTurnSpeed);
  DVARFLT_spaceshipAiBoostSpeedScale = Dvar_Deregister(DVARFLT_spaceshipAiBoostSpeedScale);
  DVARVEC3_spaceshipAiHoverSpeed = Dvar_Deregister(DVARVEC3_spaceshipAiHoverSpeed);
  DVARVEC3_spaceshipAiHoverThrust = Dvar_Deregister(DVARVEC3_spaceshipAiHoverThrust);
  DVARVEC3_spaceshipAiHoverCounterThrust = Dvar_Deregister(DVARVEC3_spaceshipAiHoverCounterThrust);
  DVARVEC3_spaceshipAiHoverFriction = Dvar_Deregister(DVARVEC3_spaceshipAiHoverFriction);
  DVARFLT_spaceshipAiHoverTurnSpeed = Dvar_Deregister(DVARFLT_spaceshipAiHoverTurnSpeed);
  DVARFLT_spaceshipAiFollowInnerRadius = Dvar_Deregister(DVARFLT_spaceshipAiFollowInnerRadius);
  DVARFLT_spaceshipAiFollowInnerStrength = Dvar_Deregister(DVARFLT_spaceshipAiFollowInnerStrength);
  DVARFLT_spaceshipAiFollowOuterRadius = Dvar_Deregister(DVARFLT_spaceshipAiFollowOuterRadius);
  DVARFLT_spaceshipAiFollowOuterStrength = Dvar_Deregister(DVARFLT_spaceshipAiFollowOuterStrength);
  DVARFLT_spaceshipAiFlySpeed = Dvar_Deregister(DVARFLT_spaceshipAiFlySpeed);
  DVARFLT_spaceshipAiFlyAccel = Dvar_Deregister(DVARFLT_spaceshipAiFlyAccel);
  DVARFLT_spaceshipAiFlyAngSpeed = Dvar_Deregister(DVARFLT_spaceshipAiFlyAngSpeed);
  DVARFLT_spaceshipAiFlyAngAccel = Dvar_Deregister(DVARFLT_spaceshipAiFlyAngAccel);
  DVARFLT_spaceshipAiFlyMaxBankSpeed = Dvar_Deregister(DVARFLT_spaceshipAiFlyMaxBankSpeed);
  DVARFLT_spaceshipAiFlyMaxBankAngle = Dvar_Deregister(DVARFLT_spaceshipAiFlyMaxBankAngle);
  DVARFLT_spaceshipAiFlyMaxBankAccel = Dvar_Deregister(DVARFLT_spaceshipAiFlyMaxBankAccel);
  DVARFLT_spaceshipAiHoverSpeedNew = Dvar_Deregister(DVARFLT_spaceshipAiHoverSpeedNew);
  DVARFLT_spaceshipAiHoverAccel = Dvar_Deregister(DVARFLT_spaceshipAiHoverAccel);
  DVARFLT_spaceshipAiHoverAngSpeed = Dvar_Deregister(DVARFLT_spaceshipAiHoverAngSpeed);
  DVARFLT_spaceshipAiHoverAngAccel = Dvar_Deregister(DVARFLT_spaceshipAiHoverAngAccel);
  DVARFLT_spaceshipAiHoverMaxBankSpeed = Dvar_Deregister(DVARFLT_spaceshipAiHoverMaxBankSpeed);
  DVARFLT_spaceshipAiHoverMaxBankAngle = Dvar_Deregister(DVARFLT_spaceshipAiHoverMaxBankAngle);
  DVARFLT_spaceshipAiBankingAccelerationRatio = Dvar_Deregister(DVARFLT_spaceshipAiBankingAccelerationRatio);
  DVARFLT_spaceshipAiHoverMaxBankAccel = Dvar_Deregister(DVARFLT_spaceshipAiHoverMaxBankAccel);
  DVARBOOL_spaceshipAiUseNewSteering = Dvar_Deregister(DVARBOOL_spaceshipAiUseNewSteering);
  DVARFLT_dogfightPilotInitialStrength = Dvar_Deregister(DVARFLT_dogfightPilotInitialStrength);
  DVARFLT_dogfightPilotInitialStrengthRampTime = Dvar_Deregister(DVARFLT_dogfightPilotInitialStrengthRampTime);
  DVARFLT_dogfightPilotInitialStrengthHoldTime = Dvar_Deregister(DVARFLT_dogfightPilotInitialStrengthHoldTime);
  DVARBOOL_spaceshipAiDebugTurns = Dvar_Deregister(DVARBOOL_spaceshipAiDebugTurns);
  DVARBOOL_spaceshipAiDebugCollision = Dvar_Deregister(DVARBOOL_spaceshipAiDebugCollision);
  DVARFLT_spaceshipAiMinFlySpeed = Dvar_Deregister(DVARFLT_spaceshipAiMinFlySpeed);
  DVARFLT_spaceshipAiMinFlyAngleDot = Dvar_Deregister(DVARFLT_spaceshipAiMinFlyAngleDot);
  DVARBOOL_spaceshipDebugSpread = Dvar_Deregister(DVARBOOL_spaceshipDebugSpread);
  DVARINT_spaceshipDebugMotionBlender = Dvar_Deregister(DVARINT_spaceshipDebugMotionBlender);
  DVARBOOL_spaceshipDebugAimTracking = Dvar_Deregister(DVARBOOL_spaceshipDebugAimTracking);
  DVARBOOL_dogfightDebugShowAvoidanceTraces = Dvar_Deregister(DVARBOOL_dogfightDebugShowAvoidanceTraces);
  DVARBOOL_dogfightDebugShowAvoidanceDoppler = Dvar_Deregister(DVARBOOL_dogfightDebugShowAvoidanceDoppler);
  DVARINT_ai_count = Dvar_Deregister(DVARINT_ai_count);
  DVARFLT_ai_dangerReactGoalRadius = Dvar_Deregister(DVARFLT_ai_dangerReactGoalRadius);
  DVARFLT_ai_frontShieldDamageReduction = Dvar_Deregister(DVARFLT_ai_frontShieldDamageReduction);
  DVARFLT_ai_friendlySuppressionDist = Dvar_Deregister(DVARFLT_ai_friendlySuppressionDist);
  DCONST_DVARINT_ai_threatUpdateInterval = Dvar_Deregister(DCONST_DVARINT_ai_threatUpdateInterval);
  DVARFLT_ai_foliageSeeThroughDist = Dvar_Deregister(DVARFLT_ai_foliageSeeThroughDist);
  DCONST_DVARFLT_ai_pathNegotiationOverlapCost = Dvar_Deregister(DCONST_DVARFLT_ai_pathNegotiationOverlapCost);
  DCONST_DVARFLT_ai_pathChokePointCost = Dvar_Deregister(DCONST_DVARFLT_ai_pathChokePointCost);
  DCONST_DVARINT_ai_pathRandomPercent = Dvar_Deregister(DCONST_DVARINT_ai_pathRandomPercent);
  DCONST_DVARFLT_ai_playerNearAccuracy = Dvar_Deregister(DCONST_DVARFLT_ai_playerNearAccuracy);
  DCONST_DVARFLT_ai_playerNearRange = Dvar_Deregister(DCONST_DVARFLT_ai_playerNearRange);
  DCONST_DVARFLT_ai_playerFarAccuracy = Dvar_Deregister(DCONST_DVARFLT_ai_playerFarAccuracy);
  DCONST_DVARFLT_ai_playerFarRange = Dvar_Deregister(DCONST_DVARFLT_ai_playerFarRange);
  DCONST_DVARBOOL_ai_useNavActorPhysics = Dvar_Deregister(DCONST_DVARBOOL_ai_useNavActorPhysics);
  DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed = Dvar_Deregister(DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed);
  DCONST_DVARBOOL_ai_useCombatLine = Dvar_Deregister(DCONST_DVARBOOL_ai_useCombatLine);
  DVARBOOL_ai_threatSight = Dvar_Deregister(DVARBOOL_ai_threatSight);
  DVARBOOL_ai_threatSightDisplay = Dvar_Deregister(DVARBOOL_ai_threatSightDisplay);
  DCONST_DVARFLT_ai_threatSightDisplayShadow = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightDisplayShadow);
  DVARFLT_ai_threatSightDisplaySpikePoint = Dvar_Deregister(DVARFLT_ai_threatSightDisplaySpikePoint);
  DVARFLT_ai_threatSightDisplaySpikeValue = Dvar_Deregister(DVARFLT_ai_threatSightDisplaySpikeValue);
  DVARINT_ai_threatSightDisplayNoise = Dvar_Deregister(DVARINT_ai_threatSightDisplayNoise);
  DVARINT_ai_threatSightDisplayColor = Dvar_Deregister(DVARINT_ai_threatSightDisplayColor);
  DCONST_DVARFLT_ai_threatSightFalloffDelay = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightFalloffDelay);
  DCONST_DVARFLT_ai_threatSightFalloff = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightFalloff);
  DVARFLT_ai_threatSightFacingScaleDot = Dvar_Deregister(DVARFLT_ai_threatSightFacingScaleDot);
  DVARFLT_ai_threatSightFacingScale = Dvar_Deregister(DVARFLT_ai_threatSightFacingScale);
  DCONST_DVARFLT_ai_threatSightObscuredScale = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightObscuredScale);
  DCONST_DVARFLT_ai_threatSightPeriphScale = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightPeriphScale);
  DCONST_DVARFLT_ai_threatSightMoveScale = Dvar_Deregister(DCONST_DVARFLT_ai_threatSightMoveScale);
  DVARBOOL_ai_threatSightDisplayTest = Dvar_Deregister(DVARBOOL_ai_threatSightDisplayTest);
  DVARFLT_ai_threatSightFakeThreat = Dvar_Deregister(DVARFLT_ai_threatSightFakeThreat);
  DVARFLT_ai_threatSightFakeX = Dvar_Deregister(DVARFLT_ai_threatSightFakeX);
  DVARFLT_ai_threatSightFakeY = Dvar_Deregister(DVARFLT_ai_threatSightFakeY);
  DVARFLT_ai_threatSightFakeZ = Dvar_Deregister(DVARFLT_ai_threatSightFakeZ);
  DCONST_DVARINT_ai_showNavMesh = Dvar_Deregister(DCONST_DVARINT_ai_showNavMesh);
  DCONST_DVARBOOL_ai_showNavPhysics = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavPhysics);
  DCONST_DVARBOOL_ai_useLegacyGroundTrace = Dvar_Deregister(DCONST_DVARBOOL_ai_useLegacyGroundTrace);
  DCONST_DVARINT_ai_showNavVolumes = Dvar_Deregister(DCONST_DVARINT_ai_showNavVolumes);
  DCONST_DVARINT_ai_testNavVolumes = Dvar_Deregister(DCONST_DVARINT_ai_testNavVolumes);
  DCONST_DVARFLT_ai_testNav3DReachable = Dvar_Deregister(DCONST_DVARFLT_ai_testNav3DReachable);
  DCONST_DVARBOOL_ai_showNavStats = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavStats);
  DCONST_DVARBOOL_ai_showNavTimings = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavTimings);
  DCONST_DVARBOOL_ai_showNavMemory = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavMemory);
  DCONST_DVARBOOL_ai_showNavObstacles = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavObstacles);
  DCONST_DVARBOOL_ai_showNavObstacleFlags = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavObstacleFlags);
  DCONST_DVARBOOL_ai_showAreaUsageFlags = Dvar_Deregister(DCONST_DVARBOOL_ai_showAreaUsageFlags);
  DCONST_DVARBOOL_ai_showLinkUsageFlags = Dvar_Deregister(DCONST_DVARBOOL_ai_showLinkUsageFlags);
  DCONST_DVARINT_ai_showRepulsors = Dvar_Deregister(DCONST_DVARINT_ai_showRepulsors);
  DCONST_DVARBOOL_ai_showNavSpaceAxes = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavSpaceAxes);
  DCONST_DVARBOOL_ai_showNavPos = Dvar_Deregister(DCONST_DVARBOOL_ai_showNavPos);
  DCONST_DVARINT_ai_showNavVolPortals = Dvar_Deregister(DCONST_DVARINT_ai_showNavVolPortals);
  DCONST_DVARFLT_ai_shownavdist = Dvar_Deregister(DCONST_DVARFLT_ai_shownavdist);
  DCONST_DVARBOOL_ai_showBfxPath = Dvar_Deregister(DCONST_DVARBOOL_ai_showBfxPath);
  DCONST_DVARBOOL_ai_debugLinkWeights = Dvar_Deregister(DCONST_DVARBOOL_ai_debugLinkWeights);
  DCONST_DVARFLT_ai_shotgunMissMin = Dvar_Deregister(DCONST_DVARFLT_ai_shotgunMissMin);
  DCONST_DVARFLT_ai_shotgunMissMax = Dvar_Deregister(DCONST_DVARFLT_ai_shotgunMissMax);
  DCONST_DVARFLT_ai_leanScalar = Dvar_Deregister(DCONST_DVARFLT_ai_leanScalar);
  DCONST_DVARFLT_ai_cornerSlowDownDistance = Dvar_Deregister(DCONST_DVARFLT_ai_cornerSlowDownDistance);
  DCONST_DVARFLT_ai_minVelocityForTurnSlowdown = Dvar_Deregister(DCONST_DVARFLT_ai_minVelocityForTurnSlowdown);
  DCONST_DVARFLT_ai_tightQuartersLookaheadDistance = Dvar_Deregister(DCONST_DVARFLT_ai_tightQuartersLookaheadDistance);
  DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling = Dvar_Deregister(DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling);
  DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling = Dvar_Deregister(DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling);
  DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling = Dvar_Deregister(DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling);
  DCONST_DVARFLT_ai_tightCornerSpeedMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_tightCornerSpeedMultiplier);
  DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown);
  DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier);
  DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier);
  DCONST_DVARFLT_ai_minTightQuartersCornerSlowDownStrafeMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minTightQuartersCornerSlowDownStrafeMultiplier);
  DCONST_DVARFLT_ai_maxTightQuartersCornerSlowDownStrafeMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_maxTightQuartersCornerSlowDownStrafeMultiplier);
  DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier = Dvar_Deregister(DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier);
  DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown);
  DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown);
  DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown);
  DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown);
  DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing);
  DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing = Dvar_Deregister(DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing);
  DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown);
  DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown);
  DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown);
  DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown = Dvar_Deregister(DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown);
  DCONST_DVARFLT_ai_maxSpeedDeltaUp = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaUp);
  DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious);
  DCONST_DVARFLT_ai_maxSpeedDeltaDown = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDown);
  DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious);
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners);
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd);
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners);
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd = Dvar_Deregister(DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd);
  DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI = Dvar_Deregister(DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI);
  DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI = Dvar_Deregister(DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI);
  DCONST_DVARFLT_ai_boundingOverwatchGoalProximity = Dvar_Deregister(DCONST_DVARFLT_ai_boundingOverwatchGoalProximity);
  DVARBOOL_ai_debugBoundingOverwatch = Dvar_Deregister(DVARBOOL_ai_debugBoundingOverwatch);
  DCONST_DVARBOOL_ai_enableAvoidanceBlocking = Dvar_Deregister(DCONST_DVARBOOL_ai_enableAvoidanceBlocking);
  DVARFLT_ai_movementDefaultSpeed = Dvar_Deregister(DVARFLT_ai_movementDefaultSpeed);
  DVARFLT_ai_movementHotDefaultSpeed = Dvar_Deregister(DVARFLT_ai_movementHotDefaultSpeed);
  DVARFLT_ai_maxSpeedForCautiousNavigation = Dvar_Deregister(DVARFLT_ai_maxSpeedForCautiousNavigation);
  DVARBOOL_ai_hotCombatSpeedEnabled = Dvar_Deregister(DVARBOOL_ai_hotCombatSpeedEnabled);
  DVARBOOL_ai_aimCleanMissEnabled = Dvar_Deregister(DVARBOOL_ai_aimCleanMissEnabled);
  DCONST_DVARFLT_ai_aimCleanMissDisableRate = Dvar_Deregister(DCONST_DVARFLT_ai_aimCleanMissDisableRate);
  DVARBOOL_ai_enableExecutionVictim = Dvar_Deregister(DVARBOOL_ai_enableExecutionVictim);
  DVARBOOL_ai_enableExecutionAttacker = Dvar_Deregister(DVARBOOL_ai_enableExecutionAttacker);
  DCONST_DVARINT_ai_navMeshLayerToShow = Dvar_Deregister(DCONST_DVARINT_ai_navMeshLayerToShow);
  DVARBOOL_ai_iw7 = Dvar_Deregister(DVARBOOL_ai_iw7);
  DVARBOOL_ai_debugMayMove = Dvar_Deregister(DVARBOOL_ai_debugMayMove);
  DVARBOOL_ai_debugGunBlocked = Dvar_Deregister(DVARBOOL_ai_debugGunBlocked);
  DCONST_DVARBOOL_ai_useOrca = Dvar_Deregister(DCONST_DVARBOOL_ai_useOrca);
  DVARINT_path_nodeInfoType = Dvar_Deregister(DVARINT_path_nodeInfoType);
  DVARINT_ai_showNodes = Dvar_Deregister(DVARINT_ai_showNodes);
  DVARFLT_ai_showNodesDist = Dvar_Deregister(DVARFLT_ai_showNodesDist);
  DVARINT_ai_showNearbyNodes = Dvar_Deregister(DVARINT_ai_showNearbyNodes);
  DVARBOOL_ai_showNearestNodes = Dvar_Deregister(DVARBOOL_ai_showNearestNodes);
  DVARBOOL_ai_showAmbushNodes = Dvar_Deregister(DVARBOOL_ai_showAmbushNodes);
  DVARINT_ai_showNodesFilter = Dvar_Deregister(DVARINT_ai_showNodesFilter);
  DVARINT_ai_showPaths = Dvar_Deregister(DVARINT_ai_showPaths);
  DVARBOOL_ai_showPathsOnlyActors = Dvar_Deregister(DVARBOOL_ai_showPathsOnlyActors);
  DVARBOOL_ai_showPathFindNodes = Dvar_Deregister(DVARBOOL_ai_showPathFindNodes);
  DVARINT_ai_showVisData = Dvar_Deregister(DVARINT_ai_showVisData);
  DVARFLT_ai_showVisDataDist = Dvar_Deregister(DVARFLT_ai_showVisDataDist);
  DVARINT_ai_searchDebug = Dvar_Deregister(DVARINT_ai_searchDebug);
  DVARINT_g_aiEventDump = Dvar_Deregister(DVARINT_g_aiEventDump);
  DVARBOOL_ai_showLastKnownEnemyPos = Dvar_Deregister(DVARBOOL_ai_showLastKnownEnemyPos);
  DVARINT_ai_debugThreatSelection = Dvar_Deregister(DVARINT_ai_debugThreatSelection);
  DVARBOOL_ai_debugMotionWarp = Dvar_Deregister(DVARBOOL_ai_debugMotionWarp);
  DVARBOOL_ai_debugTargetChange = Dvar_Deregister(DVARBOOL_ai_debugTargetChange);
  DVARBOOL_ai_showPotentialThreatDir = Dvar_Deregister(DVARBOOL_ai_showPotentialThreatDir);
  DVARBOOL_ai_debugCombatLine = Dvar_Deregister(DVARBOOL_ai_debugCombatLine);
  DVARBOOL_ai_debugReacquire = Dvar_Deregister(DVARBOOL_ai_debugReacquire);
  DVARBOOL_ai_debugLikelyEnemyAngles = Dvar_Deregister(DVARBOOL_ai_debugLikelyEnemyAngles);
  DVARBOOL_ai_showRepulsors3d = Dvar_Deregister(DVARBOOL_ai_showRepulsors3d);
  DVARINT_ai_showAvoidance3dOnEnt = Dvar_Deregister(DVARINT_ai_showAvoidance3dOnEnt);
  DVARINT_ai_showNativeBT = Dvar_Deregister(DVARINT_ai_showNativeBT);
  DVARBOOL_ai_ShowCanshootChecks = Dvar_Deregister(DVARBOOL_ai_ShowCanshootChecks);
  DVARBOOL_ai_debugShort = Dvar_Deregister(DVARBOOL_ai_debugShort);
  DVARINT_ai_badPathSpam = Dvar_Deregister(DVARINT_ai_badPathSpam);
  DVARINT_g_entinfo_AItext = Dvar_Deregister(DVARINT_g_entinfo_AItext);
  DVARBOOL_ai_whatamidoingwrong = Dvar_Deregister(DVARBOOL_ai_whatamidoingwrong);
  DVARBOOL_ai_whyaminotmoving = Dvar_Deregister(DVARBOOL_ai_whyaminotmoving);
  DVARBOOL_ai_whyaminotshooting = Dvar_Deregister(DVARBOOL_ai_whyaminotshooting);
  DVARBOOL_ai_whereshouldiface = Dvar_Deregister(DVARBOOL_ai_whereshouldiface);
  DVARFLT_ai_eventDistFootstep = Dvar_Deregister(DVARFLT_ai_eventDistFootstep);
  DVARFLT_ai_eventDistFootstepWalk = Dvar_Deregister(DVARFLT_ai_eventDistFootstepWalk);
  DVARFLT_ai_eventDistFootstepSprint = Dvar_Deregister(DVARFLT_ai_eventDistFootstepSprint);
  DVARFLT_ai_eventDistNewEnemy = Dvar_Deregister(DVARFLT_ai_eventDistNewEnemy);
  DVARFLT_ai_eventDistPain = Dvar_Deregister(DVARFLT_ai_eventDistPain);
  DVARFLT_ai_eventDistDeath = Dvar_Deregister(DVARFLT_ai_eventDistDeath);
  DVARFLT_ai_eventDistExplosion = Dvar_Deregister(DVARFLT_ai_eventDistExplosion);
  DVARFLT_ai_eventDistGrenadePing = Dvar_Deregister(DVARFLT_ai_eventDistGrenadePing);
  DVARFLT_ai_eventDistProjPing = Dvar_Deregister(DVARFLT_ai_eventDistProjPing);
  DVARFLT_ai_eventDistGunShot = Dvar_Deregister(DVARFLT_ai_eventDistGunShot);
  DVARFLT_ai_eventDistGunShotTeam = Dvar_Deregister(DVARFLT_ai_eventDistGunShotTeam);
  DVARFLT_ai_eventDistSilencedShot = Dvar_Deregister(DVARFLT_ai_eventDistSilencedShot);
  DVARFLT_ai_eventDistGlassDestroyed = Dvar_Deregister(DVARFLT_ai_eventDistGlassDestroyed);
  DVARFLT_ai_eventDistBullet = Dvar_Deregister(DVARFLT_ai_eventDistBullet);
  DVARFLT_ai_eventDistProjImpact = Dvar_Deregister(DVARFLT_ai_eventDistProjImpact);
  DVARFLT_ai_eventDistBadPlace = Dvar_Deregister(DVARFLT_ai_eventDistBadPlace);
  DVARFLT_ai_busyEventDistFootstep = Dvar_Deregister(DVARFLT_ai_busyEventDistFootstep);
  DVARFLT_ai_busyEventDistFootstepWalk = Dvar_Deregister(DVARFLT_ai_busyEventDistFootstepWalk);
  DVARFLT_ai_busyEventDistFootstepSprint = Dvar_Deregister(DVARFLT_ai_busyEventDistFootstepSprint);
  DVARFLT_ai_busyEventDistNewEnemy = Dvar_Deregister(DVARFLT_ai_busyEventDistNewEnemy);
  DVARFLT_ai_busyEventDistPain = Dvar_Deregister(DVARFLT_ai_busyEventDistPain);
  DVARFLT_ai_busyEventDistDeath = Dvar_Deregister(DVARFLT_ai_busyEventDistDeath);
  DVARFLT_ai_busyEventDistExplosion = Dvar_Deregister(DVARFLT_ai_busyEventDistExplosion);
  DVARFLT_ai_busyEventDistGrenadePing = Dvar_Deregister(DVARFLT_ai_busyEventDistGrenadePing);
  DVARFLT_ai_busyEventDistProjPing = Dvar_Deregister(DVARFLT_ai_busyEventDistProjPing);
  DVARFLT_ai_busyEventDistGunShot = Dvar_Deregister(DVARFLT_ai_busyEventDistGunShot);
  DVARFLT_ai_busyEventDistGunShotTeam = Dvar_Deregister(DVARFLT_ai_busyEventDistGunShotTeam);
  DVARFLT_ai_busyEventDistSilencedShot = Dvar_Deregister(DVARFLT_ai_busyEventDistSilencedShot);
  DVARFLT_ai_busyEventDistGlassDestroyed = Dvar_Deregister(DVARFLT_ai_busyEventDistGlassDestroyed);
  DVARFLT_ai_busyEventDistBullet = Dvar_Deregister(DVARFLT_ai_busyEventDistBullet);
  DVARFLT_ai_busyEventDistProjImpact = Dvar_Deregister(DVARFLT_ai_busyEventDistProjImpact);
  DVARFLT_agent_jumpSpeed = Dvar_Deregister(DVARFLT_agent_jumpSpeed);
  DVARFLT_agent_jumpWallSpeed = Dvar_Deregister(DVARFLT_agent_jumpWallSpeed);
  DVARFLT_agent_jumpGravity = Dvar_Deregister(DVARFLT_agent_jumpGravity);
  DVARFLT_agent_jumpWallGravity = Dvar_Deregister(DVARFLT_agent_jumpWallGravity);
  DVARBOOL_ai_enabled = Dvar_Deregister(DVARBOOL_ai_enabled);
  DVARBOOL_ai_animscript = Dvar_Deregister(DVARBOOL_ai_animscript);
  DVARBOOL_ai_spawn = Dvar_Deregister(DVARBOOL_ai_spawn);
  DVARINT_ai_forceEnableEntIndex = Dvar_Deregister(DVARINT_ai_forceEnableEntIndex);
  DVARFLT_ai_maxGrenadeThrowSpeed = Dvar_Deregister(DVARFLT_ai_maxGrenadeThrowSpeed);
  DVARFLT_ai_accuracyDistScale = Dvar_Deregister(DVARFLT_ai_accuracyDistScale);
  DVARBOOL_ai_debugAccuracy = Dvar_Deregister(DVARBOOL_ai_debugAccuracy);
  DVARFLT_ai_accuracy_attackerCountDecrease = Dvar_Deregister(DVARFLT_ai_accuracy_attackerCountDecrease);
  DVARINT_ai_accuracy_attackerCountMax = Dvar_Deregister(DVARINT_ai_accuracy_attackerCountMax);
  DVARINT_ai_debugCoverSelection = Dvar_Deregister(DVARINT_ai_debugCoverSelection);
  DVARINT_ai_friendlyFireBlockDuration = Dvar_Deregister(DVARINT_ai_friendlyFireBlockDuration);
  DVARINT_ai_coverSearchInterval = Dvar_Deregister(DVARINT_ai_coverSearchInterval);
  DVARFLT_ai_suppression_decrement = Dvar_Deregister(DVARFLT_ai_suppression_decrement);
  DVARFLT_ai_linkWeightPerUserMin = Dvar_Deregister(DVARFLT_ai_linkWeightPerUserMin);
  DVARFLT_ai_linkWeightPerUserMax = Dvar_Deregister(DVARFLT_ai_linkWeightPerUserMax);
  DVARINT_ai_linkWeightTime = Dvar_Deregister(DVARINT_ai_linkWeightTime);
  DVARINT_ai_showSuppression = Dvar_Deregister(DVARINT_ai_showSuppression);
  DVARINT_ai_debugAnimDeltas = Dvar_Deregister(DVARINT_ai_debugAnimDeltas);
  DVARBOOL_ai_debugGrenadeFailSafe = Dvar_Deregister(DVARBOOL_ai_debugGrenadeFailSafe);
  DVARFLT_ai_debugGrenadeHintArc = Dvar_Deregister(DVARFLT_ai_debugGrenadeHintArc);
  DVARINT_ai_debugCoverEntityNum = Dvar_Deregister(DVARINT_ai_debugCoverEntityNum);
  DVARBOOL_ai_debugEngagementDist = Dvar_Deregister(DVARBOOL_ai_debugEngagementDist);
  DVARBOOL_ai_debugTargets = Dvar_Deregister(DVARBOOL_ai_debugTargets);
  DVARBOOL_ai_debugMeleeAttackSpots = Dvar_Deregister(DVARBOOL_ai_debugMeleeAttackSpots);
  DVARINT_ai_debugVolume = Dvar_Deregister(DVARINT_ai_debugVolume);
  DVARBOOL_ai_showRegion = Dvar_Deregister(DVARBOOL_ai_showRegion);
  DVARBOOL_ai_debugPlayerLOS = Dvar_Deregister(DVARBOOL_ai_debugPlayerLOS);
  DVARFLT_ai_teamDeathListenRadius = Dvar_Deregister(DVARFLT_ai_teamDeathListenRadius);
  DVARINT_ai_glanceShortDuration = Dvar_Deregister(DVARINT_ai_glanceShortDuration);
  DVARINT_ai_glanceLongDuration = Dvar_Deregister(DVARINT_ai_glanceLongDuration);
  DVARINT_ai_glanceGenericCooldown = Dvar_Deregister(DVARINT_ai_glanceGenericCooldown);
  DVARINT_ai_glanceStairsCooldown = Dvar_Deregister(DVARINT_ai_glanceStairsCooldown);
  DVARINT_ai_glancePlayerCooldown = Dvar_Deregister(DVARINT_ai_glancePlayerCooldown);
  DVARFLT_ai_glanceStairsLookDist = Dvar_Deregister(DVARFLT_ai_glanceStairsLookDist);
  DVARFLT_ai_glancePlayerDist = Dvar_Deregister(DVARFLT_ai_glancePlayerDist);
  DVARFLT_ai_glanceNearAnyPlayerThreshold = Dvar_Deregister(DVARFLT_ai_glanceNearAnyPlayerThreshold);
  DVARSTR_debug_arrivals = Dvar_Deregister(DVARSTR_debug_arrivals);
  DCONST_DVARBOOL_ai_showArrivalCalcInfo = Dvar_Deregister(DCONST_DVARBOOL_ai_showArrivalCalcInfo);
  DVARBOOL_ai_debugArc = Dvar_Deregister(DVARBOOL_ai_debugArc);
  DVARINT_ai_showTacGraph = Dvar_Deregister(DVARINT_ai_showTacGraph);
  DVARBOOL_ai_showTacGraphIDs = Dvar_Deregister(DVARBOOL_ai_showTacGraphIDs);
  DVARBOOL_ai_showNearestTacPoints = Dvar_Deregister(DVARBOOL_ai_showNearestTacPoints);
  DVARBOOL_ai_debuglocomotion = Dvar_Deregister(DVARBOOL_ai_debuglocomotion);
  DVARBOOL_ai_debugTurns = Dvar_Deregister(DVARBOOL_ai_debugTurns);
  DVARBOOL_ai_debugtightquarters = Dvar_Deregister(DVARBOOL_ai_debugtightquarters);
  DVARBOOL_ai_debugpathblocked = Dvar_Deregister(DVARBOOL_ai_debugpathblocked);
  DCONST_DVARINT_ai_lookatState = Dvar_Deregister(DCONST_DVARINT_ai_lookatState);
  DCONST_DVARINT_ai_lookatIntensity = Dvar_Deregister(DCONST_DVARINT_ai_lookatIntensity);
  DVARBOOL_ai_debugAutoLookAt = Dvar_Deregister(DVARBOOL_ai_debugAutoLookAt);
  DVARBOOL_ai_showScheduler = Dvar_Deregister(DVARBOOL_ai_showScheduler);
  DCONST_DVARBOOL_ai_debuglookatanimated = Dvar_Deregister(DCONST_DVARBOOL_ai_debuglookatanimated);
  DCONST_DVARBOOL_ai_lookatnone = Dvar_Deregister(DCONST_DVARBOOL_ai_lookatnone);
  DCONST_DVARBOOL_ai_disablelookatanimated = Dvar_Deregister(DCONST_DVARBOOL_ai_disablelookatanimated);
  DCONST_DVARBOOL_ai_lookatusedebugangles = Dvar_Deregister(DCONST_DVARBOOL_ai_lookatusedebugangles);
  DCONST_DVARFLT_ai_lookatyaw = Dvar_Deregister(DCONST_DVARFLT_ai_lookatyaw);
  DCONST_DVARFLT_ai_lookatpitch = Dvar_Deregister(DCONST_DVARFLT_ai_lookatpitch);
  DVARINT_ai_civSpeedMin = Dvar_Deregister(DVARINT_ai_civSpeedMin);
  DVARINT_ai_civSpeedMax = Dvar_Deregister(DVARINT_ai_civSpeedMax);
  DVARFLT_ai_allySpeedScaleMultMin = Dvar_Deregister(DVARFLT_ai_allySpeedScaleMultMin);
  DVARFLT_ai_allySpeedScaleMultMax = Dvar_Deregister(DVARFLT_ai_allySpeedScaleMultMax);
  DVARFLT_ai_enemySpeedScaleMultMin = Dvar_Deregister(DVARFLT_ai_enemySpeedScaleMultMin);
  DVARFLT_ai_enemySpeedScaleMultMax = Dvar_Deregister(DVARFLT_ai_enemySpeedScaleMultMax);
  DCONST_DVARBOOL_ai_debugaim = Dvar_Deregister(DCONST_DVARBOOL_ai_debugaim);
  DCONST_DVARBOOL_ai_debuggunpose = Dvar_Deregister(DCONST_DVARBOOL_ai_debuggunpose);
  DVARBOOL_ai_debugTraversalSelection = Dvar_Deregister(DVARBOOL_ai_debugTraversalSelection);
  DVARBOOL_ai_enableRetreat = Dvar_Deregister(DVARBOOL_ai_enableRetreat);
  DVARINT_ai_retreatMaxOvernumberAmount = Dvar_Deregister(DVARINT_ai_retreatMaxOvernumberAmount);
  DVARFLT_ai_retreatProximity = Dvar_Deregister(DVARFLT_ai_retreatProximity);
  DVARFLT_ai_retreatCoverBaseVal = Dvar_Deregister(DVARFLT_ai_retreatCoverBaseVal);
  DVARFLT_ai_retreatCoverMaxVal = Dvar_Deregister(DVARFLT_ai_retreatCoverMaxVal);
  result = Dvar_Deregister(DVARFLT_ai_teamDeathRetreatDistance);
  DVARFLT_ai_teamDeathRetreatDistance = result;
  return result;
}

/*
==============
G_Main_DecommitUnusedXAnimHunkUser
==============
*/
void G_Main_DecommitUnusedXAnimHunkUser(void)
{
  if ( !s_gameXAnimMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 818, ASSERT_TYPE_ASSERT, "( s_gameXAnimMemory != nullptr )", (const char *)&queryFormat, "s_gameXAnimMemory != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(s_gameXAnimMemory);
}

/*
==============
G_Main_ExitAfterToolComplete
==============
*/
bool G_Main_ExitAfterToolComplete()
{
  return 0;
}

/*
==============
G_Main_FreeEntities
==============
*/
void G_Main_FreeEntities(void)
{
  g_entities = NULL;
  g_entityIsInUse = NULL;
  s_entitiesCopy = NULL;
  s_entitiesInUseCopy = NULL;
}

/*
==============
G_Main_GetEntHandlerList
==============
*/
const GEntityHandlerList *G_Main_GetEntHandlerList(const gentity_s *ent)
{
  unsigned __int8 handler; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 587, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !s_activeEntityHandlers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 588, ASSERT_TYPE_ASSERT, "( s_activeEntityHandlers )", (const char *)&queryFormat, "s_activeEntityHandlers") )
    __debugbreak();
  handler = ent->handler;
  if ( handler >= 0x1Fu )
  {
    LODWORD(v4) = handler;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( ent->handler ) < (unsigned)( ENT_HANDLER_COUNT )", "ent->handler doesn't index ENT_HANDLER_COUNT\n\t%i not in [0, %i)", v4, 31) )
      __debugbreak();
  }
  return &s_activeEntityHandlers[ent->handler];
}

/*
==============
G_Main_GetTime
==============
*/
__int64 G_Main_GetTime()
{
  return (unsigned int)level.time;
}

/*
==============
G_Main_HunkAllocXAnimServer
==============
*/
void *G_Main_HunkAllocXAnimServer(unsigned __int64 size)
{
  return Mem_HunkUser_AllocInternal(s_gameXAnimMemory, size, 0x20ui64, "G_Main_HunkAllocXAnimServer");
}

/*
==============
G_Main_InitClients
==============
*/
void G_Main_InitClients()
{
  GClientSystem *v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 

  if ( (int)SvClient::ms_clientCount > 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 223, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() <= ((1 >= 200) ? 1 : 200) )", (const char *)&queryFormat, "SvClient::GetClientCount() <= MAX_CLIENTS_STATIC") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem") )
    __debugbreak();
  v0 = GClientSystem::ms_gClientSystem;
  if ( GClientSystem::ms_gClientSystem->m_clientsDataCount != SvClient::ms_clientCount )
  {
    v5 = SvClient::ms_clientCount;
    LODWORD(v4) = GClientSystem::ms_gClientSystem->m_clientsDataCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 226, ASSERT_TYPE_ASSERT, "( clientSys->GetClientCount() ) == ( static_cast<uint>( SvClient::GetClientCount() ) )", "clientSys->GetClientCount() == static_cast<uint>( SvClient::GetClientCount() )\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  if ( !v0->m_clientsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 442, ASSERT_TYPE_ASSERT, "( m_clientsData )", (const char *)&queryFormat, "m_clientsData") )
    __debugbreak();
  if ( !v0->m_clientsDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 443, ASSERT_TYPE_ASSERT, "( m_clientsDataCount )", (const char *)&queryFormat, "m_clientsDataCount") )
    __debugbreak();
  memset_0(v0->m_clientsData, 0, 64592i64 * v0->m_clientsDataCount);
  level.maxclients = v0->m_clientsDataCount;
  level.clients = v0->m_clientsData;
  if ( !level.gentities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 235, ASSERT_TYPE_ASSERT, "( level.gentities )", (const char *)&queryFormat, "level.gentities") )
    __debugbreak();
  v1 = 0;
  if ( level.maxclients > 0 )
  {
    v2 = 0i64;
    do
    {
      ++v2;
      v3 = v1++;
      level.gentities[v2 - 1].client = &level.clients[v3];
    }
    while ( v1 < level.maxclients );
  }
  GClientTaskQueue::ClearHighWatermark();
}

/*
==============
G_Main_InitCommon
==============
*/
void G_Main_InitCommon(const GEntityHandlerList *entityHandlerList, bool registerDvars)
{
  unsigned int v4; 
  bool *v5; 

  if ( !entityHandlerList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 284, ASSERT_TYPE_ASSERT, "( entityHandlerList )", (const char *)&queryFormat, "entityHandlerList") )
    __debugbreak();
  s_activeEntityHandlers = entityHandlerList;
  if ( registerDvars )
    G_Main_RegisterDvars();
  SV_Demo_ResetDemo();
  Swap_Init();
  EntHandle::Init();
  SentientHandle::Init();
  UsableHandle::Init();
  memset_0(&level, 0, sizeof(level));
  v4 = 0;
  level.gameOmnvars = &g_gameOmnvars;
  v5 = &level.transientVisibility[1];
  do
  {
    v4 += 32;
    *(_DWORD *)(v5 - 1) = 16843009;
    *(_DWORD *)(v5 + 3) = 16843009;
    *(_DWORD *)(v5 + 7) = 16843009;
    *(_DWORD *)(v5 + 11) = 16843009;
    *(_DWORD *)(v5 + 15) = 16843009;
    *(_DWORD *)(v5 + 19) = 16843009;
    *(_DWORD *)(v5 + 23) = 16843009;
    *(_DWORD *)(v5 + 27) = 16843009;
    v5 += 32;
  }
  while ( v4 < 0x20 );
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 211, ASSERT_TYPE_ASSERT, "( g_entities )", (const char *)&queryFormat, "g_entities") )
    __debugbreak();
  if ( !g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 212, ASSERT_TYPE_ASSERT, "( g_entityIsInUse )", (const char *)&queryFormat, "g_entityIsInUse") )
    __debugbreak();
  level.gentities = g_entities;
  memset_0(g_entities, 0, 0x2D8000ui64);
  memset_0(g_entityIsInUse, 0, 0x800ui64);
  G_Main_InitClients();
  Cmd_InitNotifications(level.maxclients);
  InitializeSpeedThresholds();
  GWeaponMap::Clear();
  s_usermoveWorkersStarted = 0;
}

/*
==============
G_Main_InitSuits
==============
*/
void G_Main_InitSuits(bool isFullInit)
{
  void (__fastcall *v1)(const unsigned int, const char *); 

  v1 = (void (__fastcall *)(const unsigned int, const char *))BG_LoadSuit;
  if ( !isFullInit )
    v1 = G_Main_VerifySuitDef;
  NetConstStrings_CallForAllSuitStrings(v1);
}

/*
==============
G_Main_InitXanimHunkUser
==============
*/
void G_Main_InitXanimHunkUser(void)
{
  if ( s_gameXAnimMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 804, ASSERT_TYPE_ASSERT, "( s_gameXAnimMemory == nullptr )", (const char *)&queryFormat, "s_gameXAnimMemory == nullptr") )
    __debugbreak();
  s_gameXAnimMemory = Mem_HunkUser_Create(0xE0000ui64, "Game XAnim Memory", TRACK_MISC, MEM_ALLOC_FLAG_NONE);
}

/*
==============
G_Main_IsEventValid
==============
*/
bool G_Main_IsEventValid(const gentity_s *ent)
{
  entityType_s eType; 

  if ( ent->s.eType < ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 556, ASSERT_TYPE_ASSERT, "( ent->s.eType >= ET_EVENTS )", (const char *)&queryFormat, "ent->s.eType >= ET_EVENTS") )
    __debugbreak();
  eType = ent->s.eType;
  return (unsigned __int16)(eType - 122) > 5u && (unsigned __int16)(eType - 240) > 3u || ent->s.otherEntityNum != 2047;
}

/*
==============
G_Main_IsPtrInAnimHunk
==============
*/
bool G_Main_IsPtrInAnimHunk(const char *pos)
{
  return s_gameXAnimMemory && Mem_HunkUser_IsPtrInHunk(s_gameXAnimMemory, pos);
}

/*
==============
G_Main_IsScriptPlaceRecorded
==============
*/
__int64 G_Main_IsScriptPlaceRecorded()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_g_recordScriptPlace;
  if ( !DVARBOOL_g_recordScriptPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_recordScriptPlace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
G_Main_LocationalTrace
==============
*/
void G_Main_LocationalTrace(trace_t *results, const vec3_t *start, const vec3_t *end, int passEntityNum, int contentmask, unsigned __int8 *priorityMap)
{
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, results, start, end, &bounds_origin, passEntityNum, 1, contentmask, 1, priorityMap, All);
}

/*
==============
G_Main_LocationalTraceAllowChildren
==============
*/
void G_Main_LocationalTraceAllowChildren(trace_t *results, const vec3_t *start, const vec3_t *end, int passEntityNum, int contentmask, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, results, start, end, &bounds_origin, passEntityNum, 0, contentmask, 1, priorityMap, phaseSelection);
}

/*
==============
G_Main_LocationalTraceAllowChildren
==============
*/
void G_Main_LocationalTraceAllowChildren(trace_t *results, const vec3_t *start, const vec3_t *end, const int *const passEntityNumList, int passEntityCount, int contentmask, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_FIRST, results, start, end, &bounds_origin, passEntityNumList, passEntityCount, 0, contentmask, 1, priorityMap, phaseSelection);
}

/*
==============
G_Main_PhysicsSetGravity
==============
*/
void G_Main_PhysicsSetGravity(Physics_WorldId worldId)
{
  unsigned int IndexByName; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  OmnvarData *Data; 
  HavokPhysicsWorld *MutableWorld; 
  __int64 v27; 
  Physics_WorldId v28; 
  int v29[4]; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  IndexByName = BG_Omnvar_GetIndexByName("physics_gravity_x");
  v7 = BG_Omnvar_GetIndexByName("physics_gravity_y");
  v8 = BG_Omnvar_GetIndexByName("physics_gravity_z");
  v9 = v8;
  if ( (IndexByName == -1 || v7 == -1 || v8 == -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 390, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_PhysicsSetGravity can't find omnvars - check omnvar.csv") )
    __debugbreak();
  _RBP = G_Omnvar_GetData(IndexByName, -1, NULL);
  _RDI = G_Omnvar_GetData(v7, -1, NULL);
  Data = G_Omnvar_GetData(v9, -1, NULL);
  _RSI = Data;
  if ( (!_RBP || !_RDI || !Data) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_PhysicsSetGravity has invalid omnvars - check omnvar.csv") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+4]
    vmovss  xmm7, dword ptr [rdi+4]
    vmovss  xmm8, dword ptr [rsi+4]
  }
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 27, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v28 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 28, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3d000000
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm7, xmm2
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  [rsp+98h+var_54], xmm1
    vmulss  xmm0, xmm8, xmm2
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  [rsp+98h+var_4C], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v27) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 81, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
      __debugbreak();
  }
  MutableWorld = HavokPhysics_GetMutableWorld(worldId);
  MutableWorld->world->setGravity(&MutableWorld->world->hknpWorldWriter, (const hkVector4f *)v29);
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_Main_PreCommitXanimHunkUser
==============
*/
void G_Main_PreCommitXanimHunkUser(void)
{
  if ( !s_gameXAnimMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 811, ASSERT_TYPE_ASSERT, "( s_gameXAnimMemory != nullptr )", (const char *)&queryFormat, "s_gameXAnimMemory != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(s_gameXAnimMemory);
}

/*
==============
G_Main_PrecacheServerShellshock
==============
*/
void G_Main_PrecacheServerShellshock(const unsigned int shockIndex, const char *name)
{
  shellshock_parms_t *ShellshockParms; 

  if ( !shockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 879, ASSERT_TYPE_ASSERT, "( shockIndex != 0 )", (const char *)&queryFormat, "shockIndex != 0") )
    __debugbreak();
  if ( !BG_LoadShellShockDvars(name) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E291F0, 1134i64, name);
  ShellshockParms = BG_GetShellshockParms(shockIndex);
  BG_SetShellShockParmsFromDvars(ShellshockParms);
}

/*
==============
G_Main_ProcessEntityNotifies
==============
*/
void G_Main_ProcessEntityNotifies(const int entityIndex)
{
  __int64 v1; 
  __int64 v2; 
  entityType_s eType; 
  const char *EntityTypeName; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  v1 = entityIndex;
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 1001, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, v9) )
      __debugbreak();
    LODWORD(v10) = 2048;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = v1;
  if ( g_entities[v1].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 1002, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entityIndex ) )", (const char *)&queryFormat, "G_IsEntityInUse( entityIndex )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  eType = g_entities[v2].s.eType;
  if ( eType == ET_MISSILE )
  {
    G_Missile_NotifyEntities(&g_entities[v2]);
  }
  else
  {
    EntityTypeName = BG_GetEntityTypeName(eType);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 1012, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid entity being processed for notifies: type is %s\n", EntityTypeName) )
      __debugbreak();
  }
}

/*
==============
G_Main_RadiusDamageTracePassed
==============
*/
int G_Main_RadiusDamageTracePassed(const vec3_t *start, const vec3_t *end, int passEntityNum, int passEntityNum1, int contentmask, unsigned __int8 *priorityMap)
{
  bool skipEntity1Children; 
  bool skipEntity0Children; 
  bool skipEntity0Siblings; 

  skipEntity1Children = 1;
  skipEntity0Children = !G_Main_RadiusDamageTracePassed_IsCharacterEntity(passEntityNum);
  skipEntity0Siblings = skipEntity0Children;
  if ( G_Main_RadiusDamageTracePassed_IsCharacterEntity(passEntityNum1) )
  {
    skipEntity1Children = 0;
    skipEntity0Siblings = 0;
  }
  return PhysicsQuery_LegacyTracePassedWithSkipParams(PHYSICS_WORLD_ID_FIRST, start, end, &bounds_origin, passEntityNum, skipEntity0Children, skipEntity0Siblings, passEntityNum1, skipEntity1Children, skipEntity0Siblings, contentmask, 1, priorityMap, 1);
}

/*
==============
G_Main_RadiusDamageTracePassed_IsCharacterEntity
==============
*/
bool G_Main_RadiusDamageTracePassed_IsCharacterEntity(const int entNum)
{
  __int64 v1; 
  gentity_s *v2; 
  entityType_s eType; 

  v1 = entNum;
  if ( entNum >= 2048 || entNum == 2047 || !G_IsEntityInUse(entNum) )
    return 0;
  v2 = &g_entities[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = v2->s.eType;
  return ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM;
}

/*
==============
G_Main_RegisterDvars
==============
*/
const dvar_t *G_Main_RegisterDvars()
{
  char ActiveGameMode; 
  int v12; 
  const dvar_t *v19; 
  const dvar_t *v24; 
  const dvar_t *v33; 
  const dvar_t *v51; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v101; 
  unsigned int v105; 
  unsigned int v109; 
  unsigned int v129; 
  unsigned int v140; 
  unsigned int v167; 
  const dvar_t *v184; 
  const dvar_t *v188; 
  unsigned int v195; 
  unsigned int v196; 
  unsigned int v197; 
  unsigned int v201; 
  unsigned int v205; 
  unsigned int v209; 
  char v225; 
  int v226; 
  char v227; 
  int v228; 
  char v229; 
  unsigned int v235; 
  unsigned int v246; 
  char v266; 
  const dvar_t *v270; 
  const dvar_t *v274; 
  const dvar_t *v282; 
  const dvar_t *v286; 
  const dvar_t *v290; 
  const dvar_t *v297; 
  const dvar_t *v317; 
  const dvar_t *v335; 
  const dvar_t *v345; 
  const dvar_t *v356; 
  const dvar_t *v366; 
  const dvar_t *v377; 
  const dvar_t *v387; 
  const dvar_t *v406; 
  const dvar_t *v413; 
  const dvar_t *v417; 
  const dvar_t *v421; 
  const dvar_t *v426; 
  const dvar_t *v440; 
  const dvar_t *v444; 
  const dvar_t *v465; 
  const dvar_t *v469; 
  const dvar_t *v473; 
  const dvar_t *v477; 
  const dvar_t *v481; 
  const dvar_t *v485; 
  const dvar_t *v489; 
  const dvar_t *v497; 
  const dvar_t *v501; 
  const dvar_t *v505; 
  const dvar_t *v509; 
  const dvar_t *v513; 
  const dvar_t *v523; 
  const dvar_t *v527; 
  const dvar_t *v531; 
  const dvar_t *v536; 
  const dvar_t *v543; 
  const dvar_t *v547; 
  const dvar_t *v554; 
  const dvar_t *v566; 
  const dvar_t *v574; 
  const dvar_t *v578; 
  const dvar_t *v585; 
  const dvar_t *v593; 
  const dvar_t *v604; 
  const dvar_t *v614; 
  const dvar_t *v622; 
  const dvar_t *v626; 
  const dvar_t *v630; 
  const dvar_t *v634; 
  const dvar_t *v660; 
  const dvar_t *v668; 
  const dvar_t *v680; 
  const dvar_t *v688; 
  const dvar_t *v692; 
  const dvar_t *v701; 
  const dvar_t *v706; 
  const dvar_t *v713; 
  const dvar_t *v717; 
  const dvar_t *v721; 
  const dvar_t *v726; 
  const dvar_t *v733; 
  const dvar_t *v737; 
  const dvar_t *v742; 
  const dvar_t *v746; 
  const dvar_t *v753; 
  const dvar_t *v757; 
  const dvar_t *v761; 
  const dvar_t *v765; 
  const dvar_t *v769; 
  const dvar_t *v776; 
  const dvar_t *v780; 
  const dvar_t *v784; 
  const dvar_t *v796; 
  const dvar_t *v810; 
  const dvar_t *v824; 
  const dvar_t *v828; 
  const dvar_t *v846; 
  const dvar_t *v850; 
  const dvar_t *v854; 
  const dvar_t *v859; 
  const dvar_t *v863; 
  const dvar_t *v868; 
  const dvar_t *v872; 
  const dvar_t *v876; 
  const dvar_t *v880; 
  const dvar_t *v884; 
  const dvar_t *v888; 
  const dvar_t *v892; 
  const dvar_t *v907; 
  const dvar_t *v911; 
  const dvar_t *v915; 
  const dvar_t *v919; 
  const dvar_t *v923; 
  const dvar_t *v927; 
  const dvar_t *v931; 
  const dvar_t *v935; 
  const dvar_t *v939; 
  const dvar_t *v943; 
  const dvar_t *v947; 
  const dvar_t *v951; 
  const dvar_t *v955; 
  const dvar_t *v960; 
  const dvar_t *v971; 
  const dvar_t *v979; 
  const dvar_t *v986; 
  const dvar_t *v993; 
  const dvar_t *v1003; 
  const dvar_t *v1007; 
  const dvar_t *v1032; 
  const dvar_t *v1041; 
  const dvar_t *v1048; 
  const dvar_t *v1055; 
  const dvar_t *v1059; 
  const dvar_t *v1063; 
  const dvar_t *result; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float flagsg; 
  float flagsh; 
  float flagsi; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float descriptiond; 
  float descriptione; 
  float descriptionf; 
  float descriptiong; 
  float descriptionh; 
  float v1098; 
  char v1102; 
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
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v12 = 32;
  if ( ActiveGameMode != 1 )
    v12 = 16;
  DCONST_DVARMPSPINT_g_maxDroppedWeapons = Dvar_RegisterInt("g_maxDroppedWeapons", v12, 2, 32, 0x40004u, "Maximum number of dropped weapons");
  __asm
  {
    vmovss  xmm13, cs:__real@42c80000
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm1, cs:__real@40c00000; value
  }
  DCONST_DVARINT_g_maxDroppedEquipment = Dvar_RegisterInt("g_maxDroppedEquipment", 8, 2, 8, 0x40004u, "Maximum number of dropped equipment weapons");
  _EBP = 0;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm12; min
  }
  v19 = Dvar_RegisterFloat("MQMLTKRQOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Default height to drop weapons from.");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  DVARFLT_g_dropWeaponHeight = v19;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
    vxorps  xmm11, xmm11, xmm11
  }
  v24 = Dvar_RegisterFloat("NSTQKPQKNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Velocity cap for drop items.");
  __asm
  {
    vmovss  xmm10, cs:__real@447a0000
    vmovss  xmm1, cs:__real@41a00000; value
  }
  DVARFLT_actorDropItemMaxVelocity = v24;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_actorDropItemMaxAngularVelocity = Dvar_RegisterFloat("PRPOQOOKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Angular velocity cap for drop items.");
  DVARINT_trigger_draw = Dvar_RegisterEnum("MSTKKMMRK", s_drawTriggerNames, 0, 4u, "Draw trigger geometry");
  DVARINT_trigger_drawDistance = Dvar_RegisterInt("NTNPNKLTQL", 1000, 0, 0x7FFFFFFF, 4u, "Trigger draw distance");
  DVARBOOL_trigger_drawDepthTest = Dvar_RegisterBool("MPSLQRSROT", 0, 4u, "Display trigger geo with depth information");
  DVARSTR_trigger_drawTargetName = Dvar_RegisterString("MOROPNNSOK", (const char *)&queryFormat.fmt + 3, 4u, "Filter trigger geo by this targetname");
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  DVARBOOL_trigger_drawSolid = Dvar_RegisterBool("OOLMSOKPL", 0, 4u, "Draw trigger interiors as well as outlines");
  __asm
  {
    vmovss  dword ptr [rsp+118h+var_E8], xmm12
    vmovss  dword ptr [rsp+118h+description], xmm11
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm12; x
    vmovss  [rsp+118h+flags], xmm7
  }
  v33 = Dvar_RegisterVec4("LSSLQQSPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, v1098, 4u, "Color to use (rgba) when drawing trigger interiors");
  __asm
  {
    vmovss  xmm3, cs:__real@461c3c00; max
    vmovss  xmm1, cs:__real@41f00000; value
  }
  DVARVEC4_trigger_drawSolidColor = v33;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_g_damagePartDamageRadius = Dvar_RegisterFloat("g_damagePartDamageRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Radius across which to apply radius damage to damage parts.");
  __asm
  {
    vmovss  xmm14, cs:__real@43fa0000
    vmovss  xmm3, cs:__real@469c4000; max
    vmovd   xmm1, ebp
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@466a6000
    vmovss  xmm1, cs:__real@459c4000
    vblendvps xmm1, xmm1, xmm0, xmm2; value
    vmovaps xmm2, xmm14; min
  }
  DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance = Dvar_RegisterFloat("g_turretCorrectionFocusDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Trace Distance from the eye to find the focul point for bullet correction.");
  DVARBOOL_pickupPrints = Dvar_RegisterBool("NTRNRRNKMN", 0, 4u, "Print a message to the game window when picking up ammo, etc.");
  DVARBOOL_g_debugDamage = Dvar_RegisterBool("MPMMRTLLSN", 0, 4u, "Show debug information for damage");
  DVARINT_g_debugBullets = Dvar_RegisterEnum("NQRQONQTSL", s_debugBulletNames, 0, 4u, "Show debug information for bullets");
  DVARINT_g_debugPlayerDeath_DamageType = Dvar_RegisterEnum("TTMPQRSTT", animDamageTypeNames, 12, 4u, (const char *)&queryFormat.fmt + 3);
  DVARINT_g_debugPlayerDeath_HitLocation = Dvar_RegisterEnum("LQTLRNTNSS", animDamageLocationNames, 4, 4u, (const char *)&queryFormat.fmt + 3);
  DVARINT_g_debugPlayerDeath_HitDirection = Dvar_RegisterEnum("MNOSMKQTRM", animDamageDirectionNames, 4, 4u, (const char *)&queryFormat.fmt + 3);
  DVARBOOL_shieldDebug = Dvar_RegisterBool("LQRSNPMSTT", 0, 4u, "Show debug info for riot shields");
  DVARBOOL_g_turretBulletCorrectionDebug = Dvar_RegisterBool("NTSNQQOLTM", 0, 4u, "Show debug axis for corrected turret bullet trajectories.");
  DVARSTR_g_vehicleDrawPath = Dvar_RegisterString("LRRMNKSORQ", (const char *)&queryFormat.fmt + 3, 4u, "Turn on debug information for vehicle paths");
  DVARBOOL_radius_damage_debug = Dvar_RegisterBool("TNRSONQPT", 0, 4u, "Turn on debug lines for radius damage traces");
  DVARBOOL_radius_damage_debug_detailed = Dvar_RegisterBool("ONOPOPNQS", 0, 4u, "Uses more expensive traces which shows the entities breaking line of sight while debugging.");
  __asm
  {
    vmovss  xmm15, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@40a00000; value
  }
  DVARINT_radius_damage_debug_ent = Dvar_RegisterInt("RQLMNKPQR", -1, -1, 2048, 4u, "Only visualize traces executed against this entity.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v51 = Dvar_RegisterFloat("radius_damage_vehicle_player_top_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Indicates how many inches below the bounding box's top position the player's top position should be placed for the radius damage calculation.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DCONST_DVARFLT_radius_damage_vehicle_player_top_offset = v51;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset = Dvar_RegisterFloat("radius_damage_vehicle_player_bottom_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Indicates how many inches above the bounding box's bottom position the player's bottom position should be placed for the radius damage calculation.");
  DVARBOOL_g_turretAllowDeferDamageToParentVehicle = Dvar_RegisterBool("MNMQPTMPQK", 1, 0x44u, "Disable this to disallow to defer the damage the turret is taken to the parent vehicle when WeaponDef::deferDamageToParentVehicle=true");
  DVARINT_g_dumpAnims = Dvar_RegisterInt("OKQQQKPLQT", -1, -1, 2047, 4u, "Animation debugging info for the given character number");
  DVARINT_g_dobjdump = Dvar_RegisterInt("LLKNKTSTSQ", -1, -1, 2047, 4u, "DObj debugging info for the given character number");
  DVARINT_g_dumpAnimsCommands = Dvar_RegisterInt("RNMMLLTRR", -1, -1, 2047, 4u, "Write animation commands debug info for this entity");
  DVARBOOL_g_animsCommandsVerbose = Dvar_RegisterBool("OLOPROLPKN", 1, 4u, "Dump all animation commands. If false, calls marked as verbose will not be printed");
  DVARBOOL_g_recordScriptPlace = Dvar_RegisterBool("LRRLLTTKTQ", 0, 0, "Records the file and line of the current script command");
  DVARINT_fx_dump = Dvar_RegisterInt("MSMMKMOLPM", 0, 0, 0x7FFFFFFF, 0, "Sends debug info on PlayFX and PlayFXToTag calls within <int> units of player to the console");
  DVARBOOL_g_assertOnModelAttachFailure = Dvar_RegisterBool("MPKOLRSTMQ", 0, 4u, "If set to 1, system will assert whenever the attach script command fails.");
  DVARINT_s_debugPlayerAnimScript = Dvar_RegisterInt("LOLPRNLNQN", -1, -1, 200, 0, "Show debug information for playeranim.script");
  DVARSTR_gamedate = Dvar_RegisterString("LRMRPSNT", "Aug  9 2020", 0x2080u, "The date compiled");
  DVARBOOL_moving_platform_rotational_antilag = Dvar_RegisterBool("LQRLLNSQLM", 0, 0x40u, "Applies rotational antilag to script movers for moving platform system.");
  __asm { vmovss  xmm8, cs:__real@42900000 }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@42b40000
    vblendvps xmm1, xmm8, xmm1, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm15; max
  }
  DVARFLT_player_throwbackInnerRadius = Dvar_RegisterFloat("OLTPMSSTSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The radius to a live grenade player must be within initially to do a throwback");
  __asm
  {
    vmovss  xmm2, cs:__real@43200000
    vmovd   xmm1, ebp
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm0, cs:__real@43400000
    vblendvps xmm1, xmm0, xmm2, xmm3; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@43b40000
  }
  DVARFLT_player_throwbackOuterRadius = Dvar_RegisterFloat("OTKRSNKQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The radius player is allow to throwback a grenade once the player has been in the inner radius");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
    vmovss  xmm9, cs:__real@43000000
  }
  DVARFLT_player_throwbackFOV = Dvar_RegisterFloat("LLSNMTPSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The FOV within which a grenade can be thrown back");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_player_vehicleUseRadius = Dvar_RegisterFloat("LPLOKMTKQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The radius within which a player can use a vehicle");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_player_vehicleUseFOV = Dvar_RegisterFloat("MSOQTNSQKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The FOV within which a player can use a vehicle");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_player_MGUseRadius = Dvar_RegisterFloat("NPLKNLQNMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The radius within which a player can mount a machine gun");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_player_MGUseFOV = Dvar_RegisterFloat("MPNNOSOOQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The FOV within which a player can mount a machine gun");
  v90 = 262340;
  v91 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v91 = 262276;
  _ER15 = 1;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    __asm { vmovss  xmm1, cs:__real@42960000 }
  }
  else
  {
    __asm { vmovd   xmm1, r15d }
    _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@42960000
      vblendvps xmm0, xmm9, xmm0, xmm2
      vmovaps xmm1, xmm0; value
      vmovss  [rsp+118h+arg_0], xmm0
    }
  }
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMODEFLT_player_itemUseRadius = Dvar_RegisterFloat("MLLSRQSRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v91, "The radius within which a player can pick up a weapon");
  v101 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v101 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARMPFLT_player_itemUseFOV = Dvar_RegisterFloat("LRTMLPLLOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v101, "The FOV within which a player can pick up a weapon");
  v105 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v105 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@42800000; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_player_itemAutoUseRadius = Dvar_RegisterFloat("OLRTNTROOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v105, "The radius to use when a usable scriptable's auto-use radius is set to -1.0");
  v109 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v109 = 262276;
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3dcccccd
    vblendvps xmm0, xmm0, xmm11, xmm2
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+118h+arg_0], xmm0
  }
  DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds = Dvar_RegisterFloat("MPKPKNQKKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v109, "The delay in seconds before an auto-use scriptable is used");
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm9, xmm8, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm15; max
  }
  DVARFLT_player_useRadius = Dvar_RegisterFloat("MTOQQKKRPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The radius within which a player can use things");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_player_useFOV = Dvar_RegisterFloat("PRTLMPOPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The default FOV within which things can be interacted with");
  v129 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v129 = 262276;
  __asm { vmovss  xmm2, cs:__real@453b8000 }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@45fa0000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  xmm3, cs:__real@47435000; max
    vmovaps xmm1, xmm0; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+118h+arg_0], xmm0
  }
  DCONST_DVARMPFLT_player_useVerticalDist = Dvar_RegisterFloat("LKPKTMLPNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v129, "Vertical Distance to which nearby entites will be considered for player use.");
  v140 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v140 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
    vmovss  xmm8, cs:__real@42f00000
  }
  DCONST_DVARMPFLT_cursorHintControlLockExitTimeout = Dvar_RegisterFloat("LKNNQPSPNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v140, "Time before a player can move after they have been locked in a cursor hint. This stops pops into vignettes.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_player_buttonHintFOV = Dvar_RegisterFloat("LKKRLTRNKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The FOV within which icon hints are displayed on things that use the HINT_BUTTON cursorHint type");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_player_buttonHintRadius = Dvar_RegisterFloat("OLLMLMSSMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The radius within which icon hints are displayed on things that use the HINT_BUTTON cursorHint type");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_player_buttonHintShortRadius = Dvar_RegisterFloat("MNMRSTLRKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Where the short range threshold lies between use radius and hint display radius. Used to display a different state on hints");
  DCONST_DVARINT_g_playerMaxExtrapolationTime = Dvar_RegisterInt("g_playerMaxExtrapolationTime", 50, 0, 0x7FFFFFFF, 0x40004u, "Maximum extrapolation that the client applies to remote players");
  DCONST_DVARINT_g_itemMaxExtrapolationTime = Dvar_RegisterInt("g_itemMaxExtrapolationTime", 50, 0, 0x7FFFFFFF, 0x40004u, "Maximum extrapolation that the client applies to dropped items");
  __asm
  {
    vmovss  xmm1, cs:__real@43c80000; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_g_minGrenadeDamageSpeed = Dvar_RegisterFloat("LKOMQMPROP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Minimum speed at which getting hit be a grenade will do damage (not the grenade explosion damage)");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  DVARINT_g_speed = Dvar_RegisterInt("NSRPQNLSNK", 190, 0x80000000, 0x7FFFFFFF, 0xC0u, "Maximum player speed");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_g_knockback = Dvar_RegisterFloat("NSMSTQROLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Maximum player knockback");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_g_knockbackPlayerScale = Dvar_RegisterFloat("NMLNMLQKQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Maximum knockback player scale (SP only)");
  DVARBOOL_g_radiusDamageCalcDetailBounds = Dvar_RegisterBool("QRTKTLRNP", 0, 0, "Calculates model bounds for detail world when determining radius falloff damage for buildables.");
  DVARBOOL_transient_auto_pause = Dvar_RegisterBool("LSMMSKSKLQ", 1, 0, "Enable/disable transient auto pause feature.");
  DVARBOOL_ufoHitsTriggers = Dvar_RegisterBool("NRTOOSORMS", 0, 0xC4u, "ufo/noclip will hit triggers when enabled");
  DVARINT_g_debugLocDamage = Dvar_RegisterInt("MLPTNLROON", -1, -1, 2048, 4u, "Display locational damage debug information for an entity");
  DVARINT_g_debugLocHit = Dvar_RegisterInt("TLLOTRSQP", -1, -1, 2048, 4u, "Display locational damage info for an entity when the entity is hit");
  DVARINT_g_debugLocHitTime = Dvar_RegisterInt("NPPMLRSOS", 500, 0, 0x7FFFFFFF, 4u, "Time duration of g_debugLocHit lines");
  __asm
  {
    vmovss  xmm6, cs:__real@466a6000
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm6; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_g_friendlyNameDist = Dvar_RegisterFloat("MSQKLQNNSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum distance at which a friendly name shows when the crosshairs is over them");
  v167 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v167 = 262276;
  __asm { vmovss  xmm2, cs:__real@432f0000 }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm0, cs:__real@43800000
    vblendvps xmm0, xmm0, xmm2, xmm3
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+118h+arg_0], xmm0
  }
  DCONST_DVARMPFLT_g_friendlyfireDist = Dvar_RegisterFloat("MLMROTLMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v167, "Maximum range for disabling fire at a friendly");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_shieldBlastDamageProtection_30 = Dvar_RegisterFloat("MLORKNLROQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 30-degree arc of the shield.");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v184 = Dvar_RegisterFloat("NTOPQTNTTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 60-degree arc of the shield.");
  __asm { vmovss  xmm1, cs:__real@3f0ccccd; value }
  DVARFLT_shieldBlastDamageProtection_60 = v184;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v188 = Dvar_RegisterFloat("NMNRKSSKPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 120-degree arc of the shield.");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DVARFLT_shieldBlastDamageProtection_120 = v188;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_shieldBlastDamageProtection_180 = Dvar_RegisterFloat("NTNORNKSOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 180-degree arc of the shield.");
  __asm { vmovss  xmm1, cs:__real@45000000; value }
  DVARBOOL_g_listEntity = Dvar_RegisterBool("MNSSLMPKOK", 0, 0, "list all of the current entities");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_g_entinfo_maxdist = Dvar_RegisterFloat("LPQNKMTNRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum distance of an entity from the camera at which to show entity information");
  DVARBOOL_g_earthquakeEnable = Dvar_RegisterBool("QKQNSSMNR", 1, 0x84u, "Enable camera shake");
  v195 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v195 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_useparentlink = Dvar_RegisterBool("PNKQRPPPO", 1, v195, "Enable parent linking vs. interpolation.");
  DVARINT_g_drawGrenadeHints = Dvar_RegisterInt("NSSQTMSQMN", 0, 0, 0x7FFFFFFF, 4u, "Draw debug information for grenades");
  DVARBOOL_g_drawWeaponMap = Dvar_RegisterBool("LTRRQNMQSR", 0, 4u, "Draw the contents of the weapon map");
  DVARBOOL_g_debugUsables = Dvar_RegisterBool("OMQQPOOTSR", 0, 4u, "Enables debug display of all usable objects for the given player.");
  DVARINT_g_debugUse = Dvar_RegisterInt("LLRSOSTPNL", -1, -1, 2048, 4u, "Enables debug display of usable objects for the given player.");
  DVARBOOL_g_debugUseFull = Dvar_RegisterBool("LOLKNSQMOS", 0, 4u, "Enables a full debug display of all usable properties in 3D - in conjunction with g_debugUse.");
  v196 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v196 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_g_defaultUsePriority = Dvar_RegisterInt("NMMMOKRLKN", 0, 0x80000000, 0x7FFFFFFF, v196, "The default priority of usable objects.  Lower numbers are given higher priority.  Change with SetUsePriority().");
  v197 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v197 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@41a00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_g_useDirectLookOuterAngle = Dvar_RegisterFloat("OLKOROPLKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v197, "Angle (degrees) from the view vector to consider usable objects as being directly looked at. Objects within direct outer look gets a priority bump of -200 (lower integer value means higher priority). The object must also be within g_useDirectLookOuterDistance to get the priority bump.");
  v201 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v201 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARMPFLT_g_useDirectLookOuterDistance = Dvar_RegisterFloat("MKTTPTPRPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v201, "Distance (inches) to consider usable objects as being directly looked at. The object must also be within g_useDirectLookOuterAngle to get the priority bump.");
  v205 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v205 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@40800000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_g_useDirectLookInnerAngle = Dvar_RegisterFloat("MQKNTOOPSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v205, "Angle (degrees) from the view vector to consider usable objects as being directly looked at. Objects within direct inner look has their priority overridden to -250 (lower integer value means higher priority). The object must also be within g_useDirectLookInnerDistance to get the priority override.");
  v209 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v209 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARMPFLT_g_useDirectLookInnerDistance = Dvar_RegisterFloat("LNOMQMLOML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v209, "Distance (inches) to consider usable objects as being directly looked at. The object must also be within g_useDirectLookInnerAngle to get the priority override.");
  DVARBOOL_g_useEnableScoringFixForUseRange = Dvar_RegisterBool("NMONQQOLLO", 1, 0, "When set to true, only usables within the use range get the priority boost for being in the under direct inner/outer look.");
  DVARINT_g_useWithinUseRangePriorityDelta = Dvar_RegisterInt("MOLNQQQROL", -20, 0x80000000, 0, 0, "Add this priority to usables within the usable range. The offset value here must cover the range of PLAYER_USE_DATA_DEFINED_MIN_PRIORITY and PLAYER_USE_DATA_DEFINED_MAX_PRIORITY");
  DVARBOOL_g_eventWarningEnable = Dvar_RegisterBool("MORTNLTOPS", 0, 4u, "Enable to print warnings when an entity's event queue overflows");
  DVARINT_g_eventPrintEntity = Dvar_RegisterInt("SPPSKQPPP", -1, -1, 2048, 4u, "Print events triggered on the specified entity");
  DCONST_DVARBOOL_g_weaponEnforceNames = Dvar_RegisterBool("g_weaponEnforceNames", 0, 0x40004u, "Force valid weapon names from script. Causes invalid weapon names to throw a script error");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@43960000; value
  }
  DVARSTR_mapname = Dvar_RegisterString("mapname", (const char *)&queryFormat.fmt + 3, 0x2000u, "Mapname information for use by script. Not read directly by code.");
  __asm { vmovaps xmm3, xmm15; max }
  DVARFLT_g_fixedDeathCameraTraceHeight = Dvar_RegisterFloat("RKQPNMNKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "How far from the ground the player is before the fixed death camera kicks in. Use 0 to always force fixed death camera, -1 for disabling fall checks.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_g_fixedDeathCameraMinGravForFallChecks = Dvar_RegisterFloat("TTQPLPKMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Indicates the minimum gravity (inches/sec2) required for the code to check for falling. Earth gravity is rougly 386 inches/sec2.");
  DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags = Dvar_RegisterBool("g_allowEveryoneToSeeScavengerBags", 1, 0x40004u, "Allows all players to see scavenger bags, even without the scavenger perk.");
  DVARBOOL_g_debugdrawTagInfoPool = Dvar_RegisterBool("OKPMKPQNMO", 0, 4u, "Debug Draw tagInfo pool data");
  DCONST_DVARBOOL_g_antilagPoseBlend = Dvar_RegisterBool("g_antilagPoseBlend", 0, 0x40004u, "True if the antilag system should blend two pose graphs when evaluating an antilag pose. False to select the nearest neighbor.");
  DCONST_DVARINT_g_debugInfil = Dvar_RegisterInt("g_debugInfil", -1, -1, 0x7FFFFFFF, 0x40004u, "Turns on server debug information for infils. Number is equal to entity specific info if supported.");
  DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams = Dvar_RegisterBool("LOQONPQOMK", 0, 4u, "If set to 1, system will always replicate player input state used by the animation system for remote players.");
  DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates = Dvar_RegisterBool("g_DisablePlayerNearestDataUpdates", 0, 0x40004u, "Players will not update their nearest node or tac point (a large performance concern with many clients)");
  DVARBOOL_g_DisablePlayerRepulsors = Dvar_RegisterBool("NNTNRSPSSP", 0, 0x80u, "Players will not place repulsors around themselves on spawn (a large performance concern with many clients)");
  DVARBOOL_g_debugGrenadeNotifies = Dvar_RegisterBool("MROSMKPMKN", 0, 0, "Draw bounding boxes for the grenade notification triggers");
  DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay = Dvar_RegisterBool("g_drawPlayerUseEntitiesOverlay", 0, 0x40004u, "Displays an overlay of the last player use query for entities.");
  __asm { vmovss  xmm1, cs:__real@44000000; value }
  DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay = Dvar_RegisterBool("g_drawPlayerUseScriptablesOverlay", 0, 0x40004u, "Displays an overlay of the last player use query for scriptables.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance = Dvar_RegisterFloat("g_worldstreaming_newRequestMinDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum distance required, in COD units, to start a new streaming request if one was already streaming nearby.");
  __asm { vmovss  xmm1, cs:__real@43870000; value }
  DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs = Dvar_RegisterInt("g_worldstreaming_newRequestMinTimeMs", 500, 0, 0x7FFFFFFF, 0x40004u, "The minimum time required, in ms, to start a new streaming request if one was already completed nearby.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_g_worldstreaming_minVelocity = Dvar_RegisterFloat("g_worldstreaming_minVelocity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum velocity required before we send a value to the client. This is intended to be slightly higher than the maximum sprint speed on foot (but less than super-sprint)");
  DCONST_DVARBOOL_g_worldStreaming_verbose = Dvar_RegisterBool("g_worldStreaming_verbose", 0, 0x40004u, "Enable to turn on verbose debug logging for G_WorldStreaming");
  DCONST_DVARBOOL_g_dropWeaponLaunchTrace = Dvar_RegisterBool("g_dropWeaponLaunchTrace", 0, 0x40004u, "When set use a trace from the player to the tag to get the launch origin, otherwise just use the tag.");
  DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit = Dvar_RegisterBool("g_dropWeaponLaunchCanDisablePhysicsOnInit", 1, 0x40004u, "When set allow to skip physics init on item launch.");
  DVARBOOL_g_useCheapScriptedMoversForLargeMap = Dvar_RegisterBool("MRQQSTOLML", 1, 0, "When set to true, will use a version of scripted movers that can cause player collision jitters specifically against scripted movers.");
  DCONST_DVARINT_g_debugPlayerSpectateStream = Dvar_RegisterInt("g_debugPlayerSpectateStream", -1, -1, 200, 0x40004u, "Allows simulating the spectate transition behavior even when we're not spectating. -1 to disable");
  v225 = Com_GameMode_GetActiveGameMode();
  v226 = 75;
  if ( v225 != 1 )
    v226 = 25;
  DVARINT_glass_damageToWeaken = Dvar_RegisterInt("LOMSNQRPQN", v226, 1, 0xFFFF, 0x44u, "The amount of damage a piece of glass must take to look damaged");
  v227 = Com_GameMode_GetActiveGameMode();
  v228 = 275;
  if ( v227 != 1 )
    v228 = 100;
  DVARINT_glass_damageToDestroy = Dvar_RegisterInt("NPNOOMMTPK", v228, 1, 0xFFFF, 0x44u, "The amount of damage a piece of glass must take to be completely destroyed");
  v229 = Com_GameMode_GetActiveGameMode();
  DVARINT_glass_meleeDamage = Dvar_RegisterInt("OLSLPRNNQN", 1000 * ((unsigned int)(v229 == 1) + 1), 1, 0xFFFF, 0x44u, "The amount of damage melee attacks do to glass");
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm2, cs:__real@00800000; min
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, cs:__real@40800000; value
    vmovaps xmm3, xmm15; max
  }
  DVARFLT_glass_radiusDamageMultiplier = Dvar_RegisterFloat("NLRPPQPSKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The amount to scale damage to glass from grenades and other explosions");
  v235 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v235 = 262276;
  __asm
  {
    vmovss  xmm9, cs:__real@44fa0000
    vmovss  xmm13, cs:__real@447a0000
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm9, xmm13, xmm2
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+118h+arg_0], xmm0
  }
  DCONST_DVARMPFLT_missileRemoteSpeedUp = Dvar_RegisterFloat("QOKKNNMTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v235, "Remote-controlled missile speedup-factor.");
  v246 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v246 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@43fa0000; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_missileRemoteSpeedDown = Dvar_RegisterFloat("LQSSSLTKMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v246, "Remote-controlled missile slowdown-factor.");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v90 = 262276;
  __asm { vmovss  xmm2, cs:__real@45bb8000 }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm0, cs:__real@459c4000
    vblendvps xmm6, xmm0, xmm2, xmm3
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm9, xmm2
    vmovaps xmm1, xmm0; x
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm6; y
    vmovss  [rsp+118h+arg_0], xmm6
    vmovss  [rsp+118h+flags], xmm15
    vmovss  [rsp+118h+arg_0], xmm0
  }
  DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange = Dvar_RegisterVec2("QLRRRTOMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, v90, "Remote-controlled missile speeds.");
  DVARBOOL_missileDebugAttractors = Dvar_RegisterBool("NQPPKORQRP", 0, 0, "Draw the attractors and repulsors.  Attractors are green, and repulsors are yellow.");
  DVARBOOL_veh_drawTrack = Dvar_RegisterBool("LNQTTSRRKQ", 0, 4u, "Debug draw the vehicle tracks");
  v266 = Com_GameMode_GetActiveGameMode();
  DVARINT_vehCam_mode = Dvar_RegisterEnum("NQTPRLSST", vehicleCameraModeNames, v266 != 1, 0x44u, "Camera modes: 1st person, 3rd person, or bot");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v270 = Dvar_RegisterFloat("LRSSMKMNRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Scaler used to cause ai vehicles to over steer");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DVARFLT_veh_aiOverSteerScale = v270;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v274 = Dvar_RegisterFloat("PNQSKMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Scale the wheel steering of non-physics vehicles by this scaler");
  __asm { vmovss  xmm1, cs:__real@44480000; value }
  DVARFLT_veh_nonPhysicsSteerScale = v274;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_veh_explodeForce = Dvar_RegisterFloat("SSPOPPPKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The force applied to physics vehicles due to explosions");
  __asm
  {
    vmovss  xmm11, cs:__real@3c23d70a
    vmovss  xmm1, cs:__real@43160000; value
    vmovaps xmm2, xmm11; min
    vmovaps xmm3, xmm15; max
  }
  v282 = Dvar_RegisterFloat("NRRMPSKOKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum horizontal speed of the player helicopter (in MPH)");
  __asm { vmovss  xmm1, cs:__real@42820000; value }
  DVARFLT_vehHelicopterMaxSpeed = v282;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
  }
  v286 = Dvar_RegisterFloat("NKTLMMTTSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum vertical speed of the player helicopter (in MPH)");
  __asm { vmovss  xmm1, cs:__real@42340000; value }
  DVARFLT_vehHelicopterMaxSpeedVertical = v286;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
  }
  v290 = Dvar_RegisterFloat("NKQSQTOLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum horizontal acceleration of the player helicopter (in MPH per second)");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DVARFLT_vehHelicopterMaxAccel = v290;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
  }
  DVARFLT_vehHelicopterMaxAccelVertical = Dvar_RegisterFloat("LPLRLNQSTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum vertical acceleration of the player helicopter (in MPH per second)");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm8; value
  }
  v297 = Dvar_RegisterFloat("QRRRRTKOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum yaw speed of the player helicopter");
  __asm { vmovss  xmm1, cs:__real@42b40000; value }
  DVARFLT_vehHelicopterMaxYawRate = v297;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
  }
  DVARFLT_vehHelicopterMaxYawAccel = Dvar_RegisterFloat("LMQLPSNMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum yaw acceleration of the player helicopter");
  __asm
  {
    vmovss  xmm6, cs:__real@420c0000
    vmovss  xmm9, cs:__real@41200000
    vmovd   xmm1, ebp
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm9, xmm6, xmm2; value
    vmovaps xmm2, xmm11; min
    vmovaps xmm3, xmm15; max
  }
  DVARFLT_vehHelicopterMaxPitch = Dvar_RegisterFloat("LRKNQPQQOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum pitch of the player helicopter");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehHelicopterMaxRoll = Dvar_RegisterFloat("MMRSQQSNOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum roll of the player helicopter");
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm1, xmm6; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
  }
  v317 = Dvar_RegisterFloat("LOPNQQSOMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "How far ahead (in seconds) the player helicopter looks ahead, to avoid hard collisions.  (Like driving down the highway, you should keep 2 seconds distance between you and the vehicle in front of you)");
  __asm { vmovss  xmm1, cs:__real@43c80000; value }
  DVARFLT_vehHelicopterLookaheadTime = v317;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm11; min
    vmovss  xmm15, cs:__real@3e99999a
  }
  DVARFLT_vehHelicopterHoverSpeedThreshold = Dvar_RegisterFloat("NNORRLOTPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The speed below which the player helicopter begins to jitter the tilt, for hovering");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_vehHelicopterRightStickDeadzone = Dvar_RegisterFloat("NQMMSMTSOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Dead-zone for the axes of the right thumbstick.  This helps to better control the two axes separately.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_vehHelicopterStrafeDeadzone = Dvar_RegisterFloat("NOKTRLOMOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Dead-zone so that you can fly straight forward easily without accidentally strafing (and thus rolling).");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm2, cs:__real@c3340000; min
  }
  DVARBOOL_vehHelicopterScaleMovement = Dvar_RegisterBool("NNOMNKNNPO", 1, 0x84u, "Scales down the smaller of the left stick axes.");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  DVARFLT_vehHelicopterPitchOffset = Dvar_RegisterFloat("OLLROQROSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The resting pitch of the helicopter");
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARBOOL_vehHelicopterSoftCollisions = Dvar_RegisterBool("PKKTRROPK", 0, 0xC4u, "Player helicopters have soft collisions (slow down before they collide).");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v335 = Dvar_RegisterFloat("MMRNMNQRPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Set the deceleration of the player helicopter (as a fraction of acceleration) in the direction the chopper is facing.  So 1.0 makes it equal to the acceleration.");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_vehHelicopterDecelerationFwd = v335;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehHelicopterDecelerationSide = Dvar_RegisterFloat("OKROTTPNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Set the side-to-side deceleration of the player helicopter (as a fraction of acceleration).  So 1.0 makes it equal to the acceleration.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm1, cs:__real@3fc00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehHelicopterDecelerationUp = Dvar_RegisterFloat("OLPKNNSQRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Set the vertical deceleration of the player helicopter (as a fraction of acceleration).  So 1.0 makes it equal to the acceleration.");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARBOOL_vehHelicopterInvertUpDown = Dvar_RegisterBool("MTRLPTRKO", 0, 0xC4u, "Invert the altitude control on the player helicopter.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v345 = Dvar_RegisterFloat("PMPPLRPTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The yaw speed created by the left stick when pushing the stick diagonally (e.g., moving forward and strafing slightly).");
  __asm { vmovss  xmm1, cs:__real@3f99999a; value }
  DVARFLT_vehHelicopterYawOnLeftStick = v345;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm11; min
  }
  DVARFLT_vehHelicopterTiltSpeed = Dvar_RegisterFloat("MORNLTMPTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The rate at which the player helicopter's tilt responds");
  __asm
  {
    vmovaps xmm2, xmm11; min
    vmovss  xmm11, cs:__real@40000000
    vmovaps xmm1, xmm11; value
    vmovaps xmm3, xmm6; max
  }
  DVARFLT_vehHelicopterTiltFromAcceleration = Dvar_RegisterFloat("MMTSTOKMOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of tilt caused by acceleration");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v356 = Dvar_RegisterFloat("LTLLTKRPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of tilt caused by deceleration");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_vehHelicopterTiltFromDeceleration = v356;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehHelicopterTiltFromVelocity = Dvar_RegisterFloat("LNKSKRPMQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of tilt caused by the current velocity");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_vehHelicopterTiltFromControllerAxes = Dvar_RegisterFloat("NMTOMTMKPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of tilt caused by the desired velocity (i.e., the amount of controller stick deflection)");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v366 = Dvar_RegisterFloat("LTRPPKRTNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of roll caused by yawing while moving forward.");
  __asm { vmovss  xmm1, cs:__real@3f800000; value }
  DVARFLT_vehHelicopterTiltFromFwdAndYaw = v366;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt = Dvar_RegisterFloat("TPSKTPTSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The forward speed (as a fraction of top speed) at which the tilt due to yaw reaches is maximum value.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm6, cs:__real@38d1b717
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_vehHelicopterJitterJerkyness = Dvar_RegisterFloat("LTMPQTLOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Specifies how jerky the tilt jitter should be");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@3ecccccd; value
  }
  DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret = Dvar_RegisterBool("NOSSKQQMLR", 1, 0xC4u, "If set, the turret will not fire through the crosshairs, but straight ahead of the vehicle, when the player is not freelooking.");
  __asm { vmovaps xmm2, xmm6; min }
  v377 = Dvar_RegisterFloat("LLSQLMTSRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The amount of rotational momentum the helicopter has with regards to tilting.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@42480000; value
  }
  DVARFLT_vehHelicopterTiltMomentum = v377;
  __asm { vmovaps xmm2, xmm6; min }
  DVARFLT_vehHelicopterBoundsRadius = Dvar_RegisterFloat("NQPPMPOKKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The radius of the collision volume to be used when colliding with world geometry.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@43160000; value
  }
  DVARBOOL_vehLegacyHeliRotorsDamage = Dvar_RegisterBool("NPOTSKLQMN", 1, 0, "True to enable legacy helicopter rotors to full damage players");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_vehLegacyHeliRotorsExpand = Dvar_RegisterFloat("vehLegacyHeliRotorsExpand", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Units to expand in XY plane the legacy helicopter aabb");
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@41700000; value
  }
  DCONST_DVARBOOL_vehScriptCheckSuspended = Dvar_RegisterBool("vehScriptCheckSuspended", 1, 0x40004u, "If true, it'll check if the vehicle is suspended when calling to any script fuction on it. False will silently return");
  __asm { vmovaps xmm3, xmm13; max }
  v387 = Dvar_RegisterFloat("vehTankNoiseSpeedFac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Movement used to compute suspension noise in the tank will be 0 to 1, being 0 when it's not moving and 1 when reaches this var value.");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DCONST_DVARFLT_vehTankNoiseSpeedFac = v387;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm13, cs:__real@3f800000
  }
  DCONST_DVARFLT_vehTankNoiseMinRpmMovFactor = Dvar_RegisterFloat("vehTankNoiseMinRpmMovFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum suspension noise scale applied to tank vehicles");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
    vxorps  xmm7, xmm7, xmm7
  }
  DCONST_DVARFLT_vehTankInertiaFactorRoll = Dvar_RegisterFloat("vehTankInertiaFactorRoll", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Inertia factor for tank when a collision is detected. Roll axis.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_vehTankInertiaFactorPitch = Dvar_RegisterFloat("vehTankInertiaFactorPitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Inertia factor for tank when a collision is detected. Pitch axis.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
    vmovss  xmm14, cs:__real@42c80000
  }
  DCONST_DVARFLT_vehTankInertiaFactorYaw = Dvar_RegisterFloat("vehTankInertiaFactorYaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Inertia factor for tank when a collision is detected. Yaw axis.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v406 = Dvar_RegisterFloat("vehTankMassFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Mass factor for a tank when a collision is detected.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@46fa0000; value
  }
  DCONST_DVARFLT_vehTankMassFactor = v406;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_vehTankFireForce = Dvar_RegisterFloat("vehTankFireForce", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The force applied to physics vehicles due main turret firing in N.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v413 = Dvar_RegisterFloat("MMKPMKQRQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "UGV wheel influence on the orientation of the body");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DVARFLT_vehUGVWheelInfluence = v413;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v417 = Dvar_RegisterFloat("SNNPNOMPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "UGV body pitch orientation speed");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DVARFLT_vehUGVPitchTrack = v417;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v421 = Dvar_RegisterFloat("NKNPTRQPMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "UGV body roll orientation speed");
  __asm
  {
    vmovss  xmm0, cs:__real@461c4000
    vmovss  xmm1, cs:__real@437a0000; x
  }
  DVARFLT_vehUGVRollTrack = v421;
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm0
    vmovaps xmm3, xmm8; z
    vmovaps xmm2, xmm8; y
    vmovss  [rsp+118h+flags], xmm7
  }
  v426 = Dvar_RegisterVec3("NRQPMSORQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptiona, 0xC4u, "Speed in all directions while boosting.");
  __asm
  {
    vmovss  xmm8, cs:__real@461c4000
    vmovss  xmm14, cs:__real@42a00000
    vmovss  xmm3, cs:__real@428c0000; z
    vmovss  xmm1, cs:__real@43e10000; x
  }
  DVARVEC3_spaceshipAiBoostSpeed = v426;
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm2, xmm14; y
    vmovss  [rsp+118h+flags], xmm7
    vmovss  xmm0, cs:__real@41a00000
  }
  DVARVEC3_spaceshipAiBoostThrust = Dvar_RegisterVec3("MLNMNOQTLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, descriptionb, 0xC4u, "Boost acceleration.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  [rsp+118h+flags], xmm7
    vmovss  xmm6, cs:__real@42640000
  }
  DVARVEC3_spaceshipAiBoostCounterThrust = Dvar_RegisterVec3("MRSOTNORNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, descriptionc, 0xC4u, "Acceleration when pressing direction opposite from velocity.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+118h+flags], xmm7
  }
  v440 = Dvar_RegisterVec3("LQPLPPRSMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, descriptiond, 0xC4u, "Friction while boosting.");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DVARVEC3_spaceshipAiBoostFriction = v440;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v444 = Dvar_RegisterFloat("LROTPTPPMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max boost turn speed (degrees).");
  __asm { vmovss  xmm1, cs:__real@3fc00000; value }
  DVARFLT_spaceshipAiBoostTurnSpeed = v444;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm0, cs:__real@42c80000
  }
  DVARFLT_spaceshipAiBoostSpeedScale = Dvar_RegisterFloat("OKOMRMLPOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Speed multiplier while boosting in Fly mode.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  [rsp+118h+flags], xmm7
    vmovss  xmm0, cs:__real@43340000
  }
  DVARVEC3_spaceshipAiHoverSpeed = Dvar_RegisterVec3("LKPLTTQPRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, descriptione, 0xC4u, "Speed in hover mode.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  [rsp+118h+flags], xmm7
  }
  DVARVEC3_spaceshipAiHoverThrust = Dvar_RegisterVec3("NKOQSTKTMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsg, descriptionf, 0xC4u, "Acceleration in hover mode.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+118h+flags], xmm7
  }
  DVARVEC3_spaceshipAiHoverCounterThrust = Dvar_RegisterVec3("NTKRRLTPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsh, descriptiong, 0xC4u, "Acceleration when pressing direction opposite from velocity.");
  __asm
  {
    vmovss  dword ptr [rsp+118h+description], xmm8
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+118h+flags], xmm7
  }
  DVARVEC3_spaceshipAiHoverFriction = Dvar_RegisterVec3("NONQMTOLQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsi, descriptionh, 0xC4u, "Friction in hover mode.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v465 = Dvar_RegisterFloat("MRNOLNQPKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max hover turn speed (degrees).");
  __asm { vmovss  xmm1, cs:__real@44000000; value }
  DVARFLT_spaceshipAiHoverTurnSpeed = v465;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v469 = Dvar_RegisterFloat("MOKSNTSTTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max dist from desired offset to apply inner acceleration");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DVARFLT_spaceshipAiFollowInnerRadius = v469;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v473 = Dvar_RegisterFloat("LKPPLQPKSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Acceleration applied within inner distance to follower");
  __asm { vmovss  xmm1, cs:__real@45000000; value }
  DVARFLT_spaceshipAiFollowInnerStrength = v473;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v477 = Dvar_RegisterFloat("MOTPKQKKQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Dist at which we use full outer acceleration");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_spaceshipAiFollowOuterRadius = v477;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v481 = Dvar_RegisterFloat("NNNRRMTSQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Acceleration to blend linearly to when outside inner distance");
  __asm { vmovss  xmm1, cs:__real@45e70000; value }
  DVARFLT_spaceshipAiFollowOuterStrength = v481;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v485 = Dvar_RegisterFloat("NSLTSLRNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max fly linear speed (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@45cb2000; value }
  DVARFLT_spaceshipAiFlySpeed = v485;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v489 = Dvar_RegisterFloat("NKRKNQRLKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max fly linear acceleration (inches/sec^2)");
  __asm { vmovss  xmm1, cs:__real@402ccccd; value }
  DVARFLT_spaceshipAiFlyAccel = v489;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm7, cs:__real@4048f5c3
  }
  DVARFLT_spaceshipAiFlyAngSpeed = Dvar_RegisterFloat("LNTOLKOPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max fly rotation speed (radians/sec)");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v497 = Dvar_RegisterFloat("LPSQPKTSRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max fly rotation acceleration (radians/sec^2)");
  __asm { vmovss  xmm1, cs:__real@44fa0000; value }
  DVARFLT_spaceshipAiFlyAngAccel = v497;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v501 = Dvar_RegisterFloat("LLQKLLKPNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Speed at which flying spaceship will bank at max angle (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DVARFLT_spaceshipAiFlyMaxBankSpeed = v501;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v505 = Dvar_RegisterFloat("LSNLLPQNON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max angle flying spaceship will bank (radians)");
  __asm { vmovss  xmm1, cs:__real@44fa0000; value }
  DVARFLT_spaceshipAiFlyMaxBankAngle = v505;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v509 = Dvar_RegisterFloat("MNNQSMKOOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Acceleration at which flying spaceship will bank at max angle (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@44dc0000; value }
  DVARFLT_spaceshipAiFlyMaxBankAccel = v509;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v513 = Dvar_RegisterFloat("MOTTKKLTLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max hover linear speed (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@445c0000; value }
  DVARFLT_spaceshipAiHoverSpeedNew = v513;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_spaceshipAiHoverAccel = Dvar_RegisterFloat("NRNLOMPNKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max hover linear acceleration (units/sec^2)");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_spaceshipAiHoverAngSpeed = Dvar_RegisterFloat("OOKRQLOQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max hover rotation speed (radians/sec)");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v523 = Dvar_RegisterFloat("NTMTNSTKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max hover rotation acceleration (radians/sec^2)");
  __asm { vmovss  xmm1, cs:__real@44960000; value }
  DVARFLT_spaceshipAiHoverAngAccel = v523;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v527 = Dvar_RegisterFloat("QPQLMOSLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Speed at which spaceship will bank at max angle (inches/sec)");
  __asm { vmovss  xmm1, cs:__real@3f48f5c3; value }
  DVARFLT_spaceshipAiHoverMaxBankSpeed = v527;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v531 = Dvar_RegisterFloat("NLPMNRKMQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max angle hovering spaceship will bank (radians)");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARFLT_spaceshipAiHoverMaxBankAngle = v531;
  __asm
  {
    vmovaps xmm7, xmm13
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v536 = Dvar_RegisterFloat("LQOKKRNMPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Ratio of banking vector that comes from acceleration instead of velocity");
  __asm { vmovss  xmm1, cs:__real@445c0000; value }
  DVARFLT_spaceshipAiBankingAccelerationRatio = v536;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_spaceshipAiHoverMaxBankAccel = Dvar_RegisterFloat("MMMOQPNKSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Acceleration at which hovering spaceship will bank at max angle (inches/sec)");
  DVARBOOL_spaceshipAiUseNewSteering = Dvar_RegisterBool("NOMLSKNOST", 1, 0xC4u, "Whether to use the new spaceship system logic");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v543 = Dvar_RegisterFloat("LMOTRRMRSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Initial player strength when entering dogfight mode");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  DVARFLT_dogfightPilotInitialStrength = v543;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v547 = Dvar_RegisterFloat("NTRPQQTTKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "How many seconds before player has full control of their craft when entering dogfight mode");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  DVARFLT_dogfightPilotInitialStrengthRampTime = v547;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_dogfightPilotInitialStrengthHoldTime = Dvar_RegisterFloat("MMNMKPMOTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "How many seconds before the strength starts to ramp back up to full.");
  DVARBOOL_spaceshipAiDebugTurns = Dvar_RegisterBool("LPLKRMPPQS", 0, 4u, "Enable to debug spaceship turns");
  __asm { vmovss  xmm1, cs:__real@44dc0000; value }
  DVARBOOL_spaceshipAiDebugCollision = Dvar_RegisterBool("PKKTTSMOS", 0, 4u, "Enable to debug spaceship collision");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v554 = Dvar_RegisterFloat("OKPQOMKKOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Speed below which the jackal will automatically transition into hover");
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovss  xmm1, cs:__real@bf3504e6; value
  }
  DVARFLT_spaceshipAiMinFlySpeed = v554;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_spaceshipAiMinFlyAngleDot = Dvar_RegisterFloat("ONMTRSNOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Dot between forward and desired forward below which the jackal will automatically transition into hover");
  DVARBOOL_spaceshipDebugSpread = Dvar_RegisterBool("NQLMKLSRLT", 0, 0, "Draws a circle for the spread oflockon for a weapon");
  DVARINT_spaceshipDebugMotionBlender = Dvar_RegisterInt("LQLKPOMSTS", -1, -1, 2047, 0, "Display motion blender debug data.");
  DVARBOOL_spaceshipDebugAimTracking = Dvar_RegisterBool("OLTOSRLRMS", 0, 0, "Turns on debug info for aim tracking.");
  DVARBOOL_dogfightDebugShowAvoidanceTraces = Dvar_RegisterBool("TLRLMOTSL", 0, 0, "Turns on visible traces for the autopilot avoidance..");
  DVARBOOL_dogfightDebugShowAvoidanceDoppler = Dvar_RegisterBool("PKTLMONOR", 1, 0, "Shows doppler returns for the autopilot avoidance");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@44000000; value
  }
  DVARINT_ai_count = Dvar_RegisterInt("LKLKQRQLQP", 38, 0, 38, 0xC4u, "Maximum number of AI");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm10, cs:__real@3f666666
  }
  DVARFLT_ai_dangerReactGoalRadius = Dvar_RegisterFloat("MLLPKKKPPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Goal radius to use when reacting to danger");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v566 = Dvar_RegisterFloat("SKPRMRNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Non bullet damage reduction for AI with front shield getting hit within shield angle. (bullets do 0 damage if blocked by shield)");
  __asm
  {
    vmovss  xmm7, cs:__real@45000000
    vmovss  xmm1, cs:__real@43000000; value
  }
  DVARFLT_ai_frontShieldDamageReduction = v566;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_friendlySuppressionDist = Dvar_RegisterFloat("MPRRKQTLTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Max distance at which AI suppress teammates");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@43000000; value
  }
  DCONST_DVARINT_ai_threatUpdateInterval = Dvar_RegisterInt("ai_threatUpdateInterval", 500, 0, 0x7FFFFFFF, 0x40004u, "AI target threat update interval in milliseconds");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v574 = Dvar_RegisterFloat("MRMLLTQQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Maximum distance AI ignore foliage for sight trace to targets");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm1, cs:__real@43960000; value
  }
  DVARFLT_ai_foliageSeeThroughDist = v574;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v578 = Dvar_RegisterFloat("ai_pathNegotiationOverlapCost", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance AI would travel around to avoid going to a negotiation being used. Multiplied by number of users of the negotiation");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@44800000; value
  }
  DCONST_DVARFLT_ai_pathNegotiationOverlapCost = v578;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_ai_pathChokePointCost = Dvar_RegisterFloat("ai_pathChokePointCost", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance AI would travel around to randomly avoid going through a choke point.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARINT_ai_pathRandomPercent = Dvar_RegisterInt("ai_pathRandomPercent", 50, 0, 200, 0x40004u, "Amount of random cost percent to add to each path node so AI always take slightly different routes");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v585 = Dvar_RegisterFloat("ai_playerNearAccuracy", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Accuracy for an AI near to a player");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@44480000; value
  }
  DCONST_DVARFLT_ai_playerNearAccuracy = v585;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_ai_playerNearRange = Dvar_RegisterFloat("ai_playerNearRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum range for AI to use 'near' accuracy");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@3dcccccd
    vmovaps xmm1, xmm8; value
  }
  v593 = Dvar_RegisterFloat("ai_playerFarAccuracy", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Accuracy for AI far away from the player");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@44fa0000; value
  }
  DCONST_DVARFLT_ai_playerFarAccuracy = v593;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_ai_playerFarRange = Dvar_RegisterFloat("ai_playerFarRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum range for AI to use 'far' accuracy");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@40400000; value
  }
  DCONST_DVARBOOL_ai_useNavActorPhysics = Dvar_RegisterBool("ai_useNavActorPhysics", 1, 0x40004u, "Whether to use the new navmesh based actor physics");
  __asm { vmovaps xmm2, xmm8; min }
  DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed = Dvar_RegisterFloat("ai_walk_pathSmoothTurnSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max degrees per frame that an AI's path direction will change.");
  DCONST_DVARBOOL_ai_useCombatLine = Dvar_RegisterBool("ai_useCombatLine", 1, 0x40004u, "Whether to use the combat line in threat calculations");
  DVARBOOL_ai_threatSight = Dvar_RegisterBool("OKQTSOMTKT", 0, 0x40u, "AI Threat sight system enabled/disabled");
  __asm { vmovss  xmm9, cs:__real@7f7fffff }
  DVARBOOL_ai_threatSightDisplay = Dvar_RegisterBool("NPQNNOSNNL", 0, 0x40u, "AI Threat meter visual");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v604 = Dvar_RegisterFloat("ai_threatSightDisplayShadow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of threat meter black shadow");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  DCONST_DVARFLT_ai_threatSightDisplayShadow = v604;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_threatSightDisplaySpikePoint = Dvar_RegisterFloat("RSKOMONOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "AI Threat meter spikes sharply beneath this value then lerps from there to 1 over the remainder");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_ai_threatSightDisplaySpikeValue = Dvar_RegisterFloat("NLLTMQRSKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "AI Threat meter spikes sharply to this value");
  DVARINT_ai_threatSightDisplayNoise = Dvar_RegisterInt("NPOTLRLSMP", 0, 0, 100, 0x40u, "AI Threat meter has this much noise to it");
  DVARINT_ai_threatSightDisplayColor = Dvar_RegisterInt("NNROTNMLKQ", 5, 0, 11, 0x40u, "AI threat meter alert color index (matches HUD outline color indexes)");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v614 = Dvar_RegisterFloat("ai_threatSightFalloffDelay", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Amount of time threat is not visible before falling off (seconds)");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARFLT_ai_threatSightFalloffDelay = v614;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_ai_threatSightFalloff = Dvar_RegisterFloat("ai_threatSightFalloff", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Falloff rate when not seeing threat");
  __asm
  {
    vmovaps xmm11, xmm13
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v622 = Dvar_RegisterFloat("NTMTQTQOLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Cos() of field of view degrees defining outer edge of player fov for facing tests");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_ai_threatSightFacingScaleDot = v622;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v626 = Dvar_RegisterFloat("LOTQPOLOOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Rate scale at out outer edge of player's ai_threatSightFacingScaleDot (< 0 to disable)");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_ai_threatSightFacingScale = v626;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v630 = Dvar_RegisterFloat("ai_threatSightObscuredScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Amount being partially hidden behind cover or leaning out affects sighting rate (< 0 to disable)");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_ai_threatSightObscuredScale = v630;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v634 = Dvar_RegisterFloat("ai_threatSightPeriphScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Amount being on the AI's periphery affects sighting rate (< 0 to disable)");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_ai_threatSightPeriphScale = v634;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_ai_threatSightMoveScale = Dvar_RegisterFloat("ai_threatSightMoveScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Amount being on the move affects sighting rate. < 0 means to disable");
  DVARBOOL_ai_threatSightDisplayTest = Dvar_RegisterBool("LTOSPPOTSP", 0, 4u, "Dev only test of threat meter display from origin (0, 0, 0)");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm6, cs:__real@ff7fffff
  }
  DVARFLT_ai_threatSightFakeThreat = Dvar_RegisterFloat("LONMKRQKOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Set to something > 0.0 to simulate threat coming from a point (for tutorial purposes)");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_ai_threatSightFakeX = Dvar_RegisterFloat("LTQTQNSRQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "X coordinate for ai_threatsightFakeThreat");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_ai_threatSightFakeY = Dvar_RegisterFloat("OKOMMPSLTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Y coordinate for ai_threatsightFakeThreat");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_ai_threatSightFakeZ = Dvar_RegisterFloat("LSLTTLKNNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Z coordinate for ai_threatsightFakeThreat");
  DCONST_DVARINT_ai_showNavMesh = Dvar_RegisterEnum("ai_showNavMesh", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav mesh.");
  DCONST_DVARBOOL_ai_showNavPhysics = Dvar_RegisterBool("ai_showNavPhysics", 0, 0x40004u, "Display nav physics trace attempts.");
  DCONST_DVARBOOL_ai_useLegacyGroundTrace = Dvar_RegisterBool("ai_useLegacyGroundTrace", 0, 0x40004u, "Use the old actor ground trace.");
  DCONST_DVARINT_ai_showNavVolumes = Dvar_RegisterEnum("ai_showNavVolumes", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav volumes.");
  DCONST_DVARINT_ai_testNavVolumes = Dvar_RegisterInt("ai_testNavVolumes", 0, 0, 1, 0x40004u, "Tests if the player is in a nav volume.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_ai_testNav3DReachable = Dvar_RegisterFloat("ai_testNav3DReachable", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Test reachability within the 3D nav volumes, this distance straight ahead from the player's eyes");
  DCONST_DVARBOOL_ai_showNavStats = Dvar_RegisterBool("ai_showNavStats", 0, 0x40004u, "Display NavPower stats.");
  DCONST_DVARBOOL_ai_showNavTimings = Dvar_RegisterBool("ai_showNavTimings", 0, 0x40004u, "Display NavPower timing data.");
  DCONST_DVARBOOL_ai_showNavMemory = Dvar_RegisterBool("ai_showNavMemory", 0, 0x40004u, "Display NavPower memory usage data.");
  DCONST_DVARBOOL_ai_showNavObstacles = Dvar_RegisterBool("ai_showNavObstacles", 0, 0x40004u, "Draw obstacles on navmesh.");
  DCONST_DVARBOOL_ai_showNavObstacleFlags = Dvar_RegisterBool("ai_showNavObstacleFlags", 0, 0x40004u, "Draw the obstacle flags.  ai_showNavObstacles must also be on.");
  DCONST_DVARBOOL_ai_showAreaUsageFlags = Dvar_RegisterBool("ai_showAreaUsageFlags", 0, 0x40004u, "Draw area usage flags on navmesh.");
  DCONST_DVARBOOL_ai_showLinkUsageFlags = Dvar_RegisterBool("ai_showLinkUsageFlags", 0, 0x40004u, "Draw link usage flags.");
  DCONST_DVARINT_ai_showRepulsors = Dvar_RegisterInt("ai_showRepulsors", 0, 0, 2, 0x40004u, "Display debug info for nav repulsors/avoidance. 1 for draw all, 2 for avoidance.");
  DCONST_DVARBOOL_ai_showNavSpaceAxes = Dvar_RegisterBool("ai_showNavSpaceAxes", 0, 0x40004u, "Draw axes for nav spaces.");
  DCONST_DVARBOOL_ai_showNavPos = Dvar_RegisterBool("ai_showNavPos", 0, 0x40004u, "Display debug info for various positions on nav graph.");
  __asm { vmovss  xmm3, cs:__real@471c4000; max }
  DCONST_DVARINT_ai_showNavVolPortals = Dvar_RegisterEnum("ai_showNavVolPortals", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav volume portals.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_ai_shownavdist = Dvar_RegisterFloat("ai_shownavdist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max dist to draw nav debug lines.");
  DCONST_DVARBOOL_ai_showBfxPath = Dvar_RegisterBool("ai_showBfxPath", 0, 0x40004u, "Display bfx path.");
  DCONST_DVARBOOL_ai_debugLinkWeights = Dvar_RegisterBool("ai_debugLinkWeights", 0, 0x40004u, "Display modified link weights.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v660 = Dvar_RegisterFloat("ai_shotgunMissMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The min amount shotgun AI can miss (0 is direct hit, 1.0 is full miss)");
  __asm
  {
    vmovss  xmm3, cs:__real@3fc00000; max
    vmovss  xmm1, cs:__real@3f333333; value
  }
  DCONST_DVARFLT_ai_shotgunMissMin = v660;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_ai_shotgunMissMax = Dvar_RegisterFloat("ai_shotgunMissMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The max amount shotgun AI can miss (0 is direct hit, 1.0 is full miss, >1.0 is higher chance of full miss)");
  __asm
  {
    vmovaps xmm15, xmm13
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v668 = Dvar_RegisterFloat("ai_leanScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scalar applied to additive lean anim.");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  DCONST_DVARFLT_ai_leanScalar = v668;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm12, cs:__real@41200000
  }
  DCONST_DVARFLT_ai_cornerSlowDownDistance = Dvar_RegisterFloat("ai_cornerSlowDownDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance from a corner where AI will potentially start slowing down");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm12; value
    vmovss  xmm11, cs:__real@43480000
  }
  DCONST_DVARFLT_ai_minVelocityForTurnSlowdown = Dvar_RegisterFloat("ai_minVelocityForTurnSlowdown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min velocity AI has to be going before we try to slow him down for turns");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm11; value
  }
  v680 = Dvar_RegisterFloat("ai_tightQuartersLookaheadDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How far ahead AI looks to start reacting to tight quarters");
  __asm
  {
    vmovss  xmm6, cs:__real@43340000
    vmovss  xmm1, cs:__real@420c0000; value
  }
  DCONST_DVARFLT_ai_tightQuartersLookaheadDistance = v680;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling = Dvar_RegisterFloat("ai_minTurnAngleForSpeedScaling", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min turn angle before speed scaling will kick in");
  __asm
  {
    vmovss  xmm1, cs:__real@41a00000; value
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm15; min
  }
  v688 = Dvar_RegisterFloat("ai_minTurnAngleForTightQuartersSpeedScaling", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min turn angle before speed scaling will kick in for tight quarters");
  __asm { vmovss  xmm1, cs:__real@43070000; value }
  DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling = v688;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm15; min
  }
  v692 = Dvar_RegisterFloat("ai_maxTurnAngleForSpeedScaling", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max turn angle that will be used in speed scaling calculations");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling = v692;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm8; min
    vmovss  xmm9, cs:__real@437a0000
    vmovss  xmm8, cs:__real@432a0000
  }
  DCONST_DVARFLT_ai_tightCornerSpeedMultiplier = Dvar_RegisterFloat("ai_tightCornerSpeedMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use when the AI is making a corner in a tight space");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
    vmovaps xmm1, xmm8; value
  }
  v701 = Dvar_RegisterFloat("ai_maxSpeedDuringTightQuartersSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max speed AI will travel when taking a corner in tight spaces");
  __asm { vmovss  xmm1, cs:__real@3f733333; value }
  DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown = v701;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovss  xmm15, cs:__real@3dcccccd
    vmovaps xmm2, xmm15; min
  }
  v706 = Dvar_RegisterFloat("ai_nearEdgeCornerSpeedMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use when the AI is making a corner near the edge of the nav mesh");
  __asm { vmovss  xmm1, cs:__real@430c0000; value }
  DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier = v706;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minSpeedForCombatCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Anything above this speed will use combat corner speed scaling");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm10; value
  }
  v713 = Dvar_RegisterFloat("ai_minCombatCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Combat speed multiplier to use at point where AI starts slowing down for a corner");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier = v713;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
  }
  v717 = Dvar_RegisterFloat("ai_maxCombatCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Combat speed multiplier to use at point where AI stops slowing down for a corner");
  __asm { vmovss  xmm1, cs:__real@42b40000; value }
  DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier = v717;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v721 = Dvar_RegisterFloat("ai_minSpeedForCQBCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Anything above this speed will use CQB corner speed scaling");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier = v721;
  __asm
  {
    vmovaps xmm6, xmm15
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm6; min
  }
  v726 = Dvar_RegisterFloat("ai_minCombatCQBCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CQB speed multiplier to use at point where AI starts slowing down for a corner");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier = v726;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_maxCombatCQBCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CQB speed multiplier to use at point where AI stops slowing down for a corner");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm10; value
  }
  v733 = Dvar_RegisterFloat("ai_minStrafeCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use at point where AI starts slowing down for a corner when strafing");
  __asm { vmovss  xmm1, cs:__real@3f333333; value }
  DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier = v733;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm6; min
  }
  v737 = Dvar_RegisterFloat("ai_maxStrafeCornerSlowDownMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use at point where AI stops slowing down for a corner when strafing");
  __asm
  {
    vmovaps xmm7, xmm13
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm10; value
  }
  DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier = v737;
  v742 = Dvar_RegisterFloat("ai_minTightQuartersCornerSlowDownStrafeMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use at point where AI starts slowing down for a corner when strafing");
  __asm
  {
    vmovss  xmm1, cs:__real@3f19999a; value
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_ai_minTightQuartersCornerSlowDownStrafeMultiplier = v742;
  v746 = Dvar_RegisterFloat("ai_maxTightQuartersCornerSlowDownStrafeMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed multiplier to use at point where AI stops slowing down for a corner when strafing");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_ai_maxTightQuartersCornerSlowDownStrafeMultiplier = v746;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier = Dvar_RegisterFloat("ai_minCornerSpeedScalingMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The lowest possible speed multiplier that can be applied to desired speed when taking a corner");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
    vmovaps xmm1, xmm8; value
  }
  v753 = Dvar_RegisterFloat("ai_maxSpeedDuringCombatCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max speed AI will travel at when taking a combat corner");
  __asm { vmovss  xmm1, cs:__real@42dc0000; value }
  DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown = v753;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v757 = Dvar_RegisterFloat("ai_maxSpeedDuringCQBCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max speed AI will travel at when taking a CQB corner");
  __asm { vmovss  xmm1, cs:__real@42960000; value }
  DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown = v757;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v761 = Dvar_RegisterFloat("ai_maxSpeedDuringCautiousCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max speed AI will travel at when taking a cautious corner");
  __asm { vmovss  xmm1, cs:__real@42dc0000; value }
  DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown = v761;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v765 = Dvar_RegisterFloat("ai_maxSpeedDuringStrafeCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max speed AI will travel at when taking a strafe corner");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown = v765;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v769 = Dvar_RegisterFloat("ai_maxSpeedForForcedCornerStrafing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "AI moving under this speed will be forced into corner strafing if not close to a cover node goal");
  __asm
  {
    vmovss  xmm2, cs:__real@40a00000; min
    vmovss  xmm1, cs:__real@42c00000; value
  }
  DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing = v769;
  __asm { vmovaps xmm3, xmm9; max }
  DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing = Dvar_RegisterFloat("ai_minDistanceFromGoalForForcedCornerStrafing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "AI won't force corner strafing if their goal is a cover node and less than this distance away");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
    vmovaps xmm1, xmm14; value
  }
  v776 = Dvar_RegisterFloat("ai_minSpeedDuringCombatCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min speed AI will travel at when taking a combat corner");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown = v776;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v780 = Dvar_RegisterFloat("ai_minSpeedDuringCQBCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min speed AI will travel at when taking a CQB corner");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown = v780;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  v784 = Dvar_RegisterFloat("ai_minSpeedDuringCautiousCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min speed AI will travel at when taking a cautious corner");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown = v784;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
    vmovss  xmm6, cs:__real@42c80000
  }
  DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown = Dvar_RegisterFloat("ai_minSpeedDuringStrafeCornerSlowDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min speed AI will travel at when taking a strafe corner");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovss  xmm13, cs:__real@41a00000
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaUp = Dvar_RegisterFloat("ai_maxSpeedDeltaUp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max accel speed when scaling AI speed");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm12; value
  }
  v796 = Dvar_RegisterFloat("ai_maxSpeedDeltaUpCautious", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max accel speed when scaling AI speed when in cautious navigation");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious = v796;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovss  xmm10, cs:__real@41700000
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaDown = Dvar_RegisterFloat("ai_maxSpeedDeltaDown", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed");
  __asm
  {
    vmovaps xmm1, xmm10; value
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious = Dvar_RegisterFloat("ai_maxSpeedDeltaDownCautious", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed when in cautious navigation");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm10; value
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCorners", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed around a corner");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm13; value
  }
  v810 = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForPathEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed at a path end");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm10; value
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd = v810;
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCautiousCorners", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed when in cautious navigation");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCautiousPathEnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max decel speed when scaling AI speed at a path end in cautious navigation");
  DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI = Dvar_RegisterInt("ai_maxBoundingOverwatchMovingAI", 3, 1, 24, 0x40004u, "The max number of AI in an area that can move if they have bounding overwatch active");
  __asm
  {
    vmovss  xmm13, cs:__real@43c80000
    vmovss  xmm3, cs:__real@44fa0000; max
  }
  DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI = Dvar_RegisterInt("ai_maxSquadBoundingOverwatchMovingAI", 2, 1, 24, 0x40004u, "The max number of AI in a squad that can move if they have bounding overwatch active");
  __asm
  {
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_ai_boundingOverwatchGoalProximity = Dvar_RegisterFloat("ai_boundingOverwatchGoalProximity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance from goal node to pull back on bounding overwatch logic");
  DVARBOOL_ai_debugBoundingOverwatch = Dvar_RegisterBool("LNTRTRTLS", 0, 4u, "Display debug info for bounding overwatch");
  DCONST_DVARBOOL_ai_enableAvoidanceBlocking = Dvar_RegisterBool("ai_enableAvoidanceBlocking", 1, 0x40004u, "Allow AI to be blocked from avoidance results");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v824 = Dvar_RegisterFloat("OLLLOORPLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Default combat movement speed");
  __asm { vmovss  xmm1, cs:__real@435c0000; value }
  DVARFLT_ai_movementDefaultSpeed = v824;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v828 = Dvar_RegisterFloat("TOSNQMPOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Default combat movement speed when hot");
  __asm { vmovss  xmm1, cs:__real@42b40000; value }
  DVARFLT_ai_movementHotDefaultSpeed = v828;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm12; min
  }
  DVARFLT_ai_maxSpeedForCautiousNavigation = Dvar_RegisterFloat("NMNLSMPRNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "AI will be forced to this speed when cautiousNavigation is enabled");
  DVARBOOL_ai_hotCombatSpeedEnabled = Dvar_RegisterBool("LQPTMLQPPN", 0, 0x40u, "Default speed for AI in hot combat will use the hot combat speed when this is true");
  __asm { vmovss  xmm1, cs:__real@3d4ccccd; value }
  DVARBOOL_ai_aimCleanMissEnabled = Dvar_RegisterBool("LRMNRMPTRL", 1, 0x40u, "Allow server side bullet traces to be bypassed when a bullet misses");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_ai_aimCleanMissDisableRate = Dvar_RegisterFloat("ai_aimCleanMissDisableRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Chance that a clean miss will still do the full server side bullet processing");
  DVARBOOL_ai_enableExecutionVictim = Dvar_RegisterBool("NORNSLNQRN", 1, 0xC0u, "Allow AI to be executed by the player.");
  DVARBOOL_ai_enableExecutionAttacker = Dvar_RegisterBool("NPNKSMTKOQ", 1, 0xC0u, "Allow AI to perform executions on the player.");
  DCONST_DVARINT_ai_navMeshLayerToShow = Dvar_RegisterEnum("ai_navMeshLayerToShow", NAVMESH_LAYER_STRINGS, 0, 0x40004u, "Which layer of the nav mesh to show.");
  DVARBOOL_ai_iw7 = Dvar_RegisterBool("LPNQTQRRP", 1, 0xC0u, "Set for shiny new iw7 AI.  Requires map restart.");
  DVARBOOL_ai_debugMayMove = Dvar_RegisterBool("LSTMMPSTRL", 0, 4u, "Display debug information for AI 'may move' calculations");
  DVARBOOL_ai_debugGunBlocked = Dvar_RegisterBool("LTMONNKSSN", 0, 4u, "Show gun blocked by wall traces");
  DCONST_DVARBOOL_ai_useOrca = Dvar_RegisterBool("ai_useOrca", 1, 0x40004u, "Set for new ORCA avoidance.");
  DVARINT_path_nodeInfoType = Dvar_RegisterEnum("MMRORMNPR", PATH_NODE_INFO_STRINGS, 0, 4u, "Path node information type");
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@43fa0000; value
  }
  DVARINT_ai_showNodes = Dvar_RegisterEnum("MQQMPTRKOQ", AI_SHOW_NODES_STRINGS, 0, 4u, "Show AI navigation node debug information");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_showNodesDist = Dvar_RegisterFloat("MOTONLTSQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum distance from the camera at which AI nodes are shown");
  DVARINT_ai_showNearbyNodes = Dvar_RegisterInt("MSRMTMTMRR", 0, 0, 0x7FFFFFFF, 4u, "Show nearby nodes");
  DVARBOOL_ai_showNearestNodes = Dvar_RegisterBool("MRPNTSRQLQ", 0, 4u, "Show nearest node of AI");
  DVARBOOL_ai_showAmbushNodes = Dvar_RegisterBool("LRPRSMTRKM", 0, 4u, "Show ambush nodes AI is considering");
  DVARINT_ai_showNodesFilter = Dvar_RegisterEnum("MRORRQQOQQ", AI_SHOW_NODES_FILTER_STRINGS, 0, 4u, "Filter node display.");
  DVARINT_ai_showPaths = Dvar_RegisterEnum("NLTNQSRTQR", AI_SHOW_PATHS_STRINGS, 0, 4u, "Show AI navigation paths.  Note: Each subsequent option for this dvar includes all options below it.");
  DVARBOOL_ai_showPathsOnlyActors = Dvar_RegisterBool("NSRQLOQPNL", 0, 4u, "If enabled, will only draw AI paths for actors (not vehicles)");
  DVARBOOL_ai_showPathFindNodes = Dvar_RegisterBool("NSQRTPQSSQ", 0, 4u, "Show nodes consider in latest path find");
  DVARINT_ai_showVisData = Dvar_RegisterEnum("NQNNQOTLPR", AI_VIS_DATA_STRINGS, 0, 4u, "Display debug information for visibility data");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_ai_showVisDataDist = Dvar_RegisterFloat("LNMNQMNONP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum distance for visibility data debugging information to be shown");
  DVARINT_ai_searchDebug = Dvar_RegisterInt("LMTQTNPNOP", 0, 0, 10, 4u, "Shows debug for AI search feature.  Value is time (in seconds) to pass to search");
  DVARINT_g_aiEventDump = Dvar_RegisterInt("NMTNLSQMT", -1, -1, 2047, 4u, "Print AI events happening for this entity");
  DVARBOOL_ai_showLastKnownEnemyPos = Dvar_RegisterBool("NQLQLTPMMQ", 0, 4u, "Shows the last known position of enemies");
  DVARINT_ai_debugThreatSelection = Dvar_RegisterEnum("ROQRMTPN", AI_THREAT_SELECTION_DEBUG_STRINGS, 0, 4u, "Enable debugging information for threat selection");
  DVARBOOL_ai_debugMotionWarp = Dvar_RegisterBool("NPQSKPNTOL", 0, 4u, "Enable debugging arrows and information for motion warp.");
  DVARBOOL_ai_debugTargetChange = Dvar_RegisterBool("NPQPMKSOQS", 0, 4u, "Enable debugging information for target changes");
  DVARBOOL_ai_showPotentialThreatDir = Dvar_RegisterBool("LKPMNMKLM", 0, 4u, "Display AI potential threat direction");
  DVARBOOL_ai_debugCombatLine = Dvar_RegisterBool("MONTLKKSRL", 0, 4u, "Show the combat line if it is currently being used for threat selection");
  DVARBOOL_ai_debugReacquire = Dvar_RegisterBool("NLNPMPOONQ", 0, 4u, "Disable reacquire searches");
  DVARBOOL_ai_debugLikelyEnemyAngles = Dvar_RegisterBool("MSTRLMPLRN", 0, 4u, "Debug find likely enemy angles");
  DVARBOOL_ai_showRepulsors3d = Dvar_RegisterBool("OKLPQRMKRN", 0, 4u, "Display debug info for nav repulsors/avoidance in 3d space.");
  DVARINT_ai_showAvoidance3dOnEnt = Dvar_RegisterInt("MSPLRMLRKO", -1, -1, 2047, 4u, "Display debug info for nav repulsors/avoidance in 3d space on this entity.");
  DVARINT_ai_showNativeBT = Dvar_RegisterInt("SSRRPSRLS", -1, -1, 2048, 4u, "Display native behaviour tree for given entnum. If 0, shows bt for ai_debugEntIndex");
  DVARBOOL_ai_ShowCanshootChecks = Dvar_RegisterBool("LKKOSRNTPP", 0, 4u, "Display debugging information for 'can shoot' checks");
  DVARBOOL_ai_debugShort = Dvar_RegisterBool("SKRLONPMP", 0, 4u, "Show short traces.");
  DVARINT_ai_badPathSpam = Dvar_RegisterInt("NMQKKOOQLT", 1, 0, 2, 4u, "Write debugging information for a bad AI paths.  1 for normal output, 2 to include suppression.");
  DVARINT_g_entinfo_AItext = Dvar_RegisterEnum("NLQSQQMPOM", g_entinfoAITextNames, 1, 4u, "Type of text information for AI entinfo");
  DVARBOOL_ai_whatamidoingwrong = Dvar_RegisterBool("MQQKSQOPR", 0, 4u, "Displays suspicious AI settings.");
  DVARBOOL_ai_whyaminotmoving = Dvar_RegisterBool("TNMMMRNRQ", 0, 4u, "Displays some common reasons for why a guy is not moving.");
  DVARBOOL_ai_whyaminotshooting = Dvar_RegisterBool("LKQLPRMTNP", 0, 4u, "Displays some common reasons for why a guy is not shooting.");
  __asm { vmovss  xmm9, cs:__real@43800000 }
  DVARBOOL_ai_whereshouldiface = Dvar_RegisterBool("LLKNKKLMPS", 0, 4u, "Display info for what direction a guy should face");
  __asm
  {
    vmovaps xmm1, xmm9; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v846 = Dvar_RegisterFloat("ai_eventDistFootstep", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_eventDistFootstep = v846;
  v850 = Dvar_RegisterFloat("ai_eventDistFootstepWalk", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_ai_eventDistFootstepWalk = v850;
  v854 = Dvar_RegisterFloat("ai_eventDistFootstepSprint", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm6, cs:__real@44000000
    vmovaps xmm1, xmm6; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_eventDistFootstepSprint = v854;
  v859 = Dvar_RegisterFloat("ai_eventDistNewEnemy", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_ai_eventDistNewEnemy = v859;
  v863 = Dvar_RegisterFloat("ai_eventDistPain", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm7, cs:__real@44800000
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_eventDistPain = v863;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v868 = Dvar_RegisterFloat("ai_eventDistDeath", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_eventDistDeath = v868;
  v872 = Dvar_RegisterFloat("ai_eventDistExplosion", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_ai_eventDistExplosion = v872;
  v876 = Dvar_RegisterFloat("ai_eventDistGrenadePing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_eventDistGrenadePing = v876;
  v880 = Dvar_RegisterFloat("ai_eventDistProjPing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_eventDistProjPing = v880;
  v884 = Dvar_RegisterFloat("ai_eventDistGunShot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_eventDistGunShot = v884;
  v888 = Dvar_RegisterFloat("ai_eventDistGunShotTeam", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_eventDistGunShotTeam = v888;
  v892 = Dvar_RegisterFloat("ai_eventDistSilencedShot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43c00000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_eventDistSilencedShot = v892;
  DVARFLT_ai_eventDistGlassDestroyed = Dvar_RegisterFloat("ai_eventDistGlassDestroyed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm { vmovd   xmm1, ebp }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@43000000
    vblendvps xmm1, xmm0, xmm9, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm8; max
  }
  DVARFLT_ai_eventDistBullet = Dvar_RegisterFloat("ai_eventDistBullet", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v907 = Dvar_RegisterFloat("ai_eventDistProjImpact", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_eventDistProjImpact = v907;
  v911 = Dvar_RegisterFloat("ai_eventDistBadPlace", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_eventDistBadPlace = v911;
  v915 = Dvar_RegisterFloat("ai_busyEventDistFootstep", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_busyEventDistFootstep = v915;
  v919 = Dvar_RegisterFloat("ai_busyEventDistFootstepWalk", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistFootstepWalk = v919;
  v923 = Dvar_RegisterFloat("ai_busyEventDistFootstepSprint", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistFootstepSprint = v923;
  v927 = Dvar_RegisterFloat("ai_busyEventDistNewEnemy", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistNewEnemy = v927;
  v931 = Dvar_RegisterFloat("ai_busyEventDistPain", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistPain = v931;
  v935 = Dvar_RegisterFloat("ai_busyEventDistDeath", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_busyEventDistDeath = v935;
  v939 = Dvar_RegisterFloat("ai_busyEventDistExplosion", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistExplosion = v939;
  v943 = Dvar_RegisterFloat("ai_busyEventDistGrenadePing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_busyEventDistGrenadePing = v943;
  v947 = Dvar_RegisterFloat("ai_busyEventDistProjPing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_ai_busyEventDistProjPing = v947;
  v951 = Dvar_RegisterFloat("ai_busyEventDistGunShot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistGunShot = v951;
  v955 = Dvar_RegisterFloat("ai_busyEventDistGunShotTeam", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm13, cs:__real@43000000
    vmovaps xmm1, xmm13; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_busyEventDistGunShotTeam = v955;
  v960 = Dvar_RegisterFloat("ai_busyEventDistSilencedShot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovss  xmm1, cs:__real@43c00000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_busyEventDistSilencedShot = v960;
  DVARFLT_ai_busyEventDistGlassDestroyed = Dvar_RegisterFloat("ai_busyEventDistGlassDestroyed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm { vmovd   xmm1, ebp }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm13, xmm9, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm8; max
  }
  v971 = Dvar_RegisterFloat("ai_busyEventDistBullet", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_ai_busyEventDistBullet = v971;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  DVARFLT_ai_busyEventDistProjImpact = Dvar_RegisterFloat("ai_busyEventDistProjImpact", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance used for AI event");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v979 = Dvar_RegisterFloat("MOPKPNPQMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Agent jump speed");
  __asm { vmovss  xmm1, cs:__real@3f8f5c29; value }
  DVARFLT_agent_jumpSpeed = v979;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_agent_jumpWallSpeed = Dvar_RegisterFloat("NQNNRQPRQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Agent jump speed when jumping on to a wall");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@44c1c000; value
  }
  v986 = Dvar_RegisterFloat("NOPSKSKPKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Agent jump gravity");
  __asm { vmovss  xmm1, cs:__real@44898000; value }
  DVARFLT_agent_jumpGravity = v986;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_agent_jumpWallGravity = Dvar_RegisterFloat("LTMRSONLKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Agent jump gravity when jumping on to a wall");
  DVARBOOL_ai_enabled = Dvar_RegisterBool("MQPPSRLRRT", 1, 0x84u, "Enable AI");
  DVARBOOL_ai_animscript = Dvar_RegisterBool("LMLLOOSLMM", 1, 0x84u, "Enable AI animscript");
  DVARBOOL_ai_spawn = Dvar_RegisterBool("MPOKQTKRMP", 1, 0x86u, "Enable AI spawning");
  __asm { vmovss  xmm1, cs:__real@44548000; value }
  DVARINT_ai_forceEnableEntIndex = Dvar_RegisterInt("PPMRKTLPL", -1, -1, 2047, 4u, "Entity index of an entity to force as enabled even if ai_enabled dvar is set to false");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v993 = Dvar_RegisterFloat("LMKNOLTSQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Maximum AI grenade throw speed");
  __asm { vmovss  xmm2, cs:__real@00800000; min }
  DVARFLT_ai_maxGrenadeThrowSpeed = v993;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_ai_accuracyDistScale = Dvar_RegisterFloat("MPMOMLLQSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance scale for AI accuracy calculations. Higher = less accurate");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DVARBOOL_ai_debugAccuracy = Dvar_RegisterBool("MNMSQTRSSM", 0, 4u, "Enable debugging information for accuracy");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm15; min
  }
  DVARFLT_ai_accuracy_attackerCountDecrease = Dvar_RegisterFloat("OKQKNQRTTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Accuracy multiplied by this number for each additional attacker upto ai_accuracy_attackerCountMax");
  DVARINT_ai_accuracy_attackerCountMax = Dvar_RegisterInt("MKLRMMOTSO", 4, 0, 0x7FFFFFFF, 0xC4u, "Accuracy multiplied by ai_accuracy_attackerCountDecrease for each additional attacker upto this");
  DVARINT_ai_debugCoverSelection = Dvar_RegisterEnum("LTNRKLTTTK", AI_COVER_SELECTION_DEBUG_STRINGS, 0, 4u, "Enable debugging information for cover selection");
  DVARINT_ai_friendlyFireBlockDuration = Dvar_RegisterInt("MRPKQKMNLO", 2000, 0, 0x7FFFFFFF, 0xC4u, "Friendly fire movement block duration");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@3c23d70a; value
  }
  DVARINT_ai_coverSearchInterval = Dvar_RegisterInt("LRPKMPSSLS", 2000, 0, 0x7FFFFFFF, 0x84u, "AI cover search interval when they don't have cover, in milliseconds");
  __asm { vmovaps xmm3, xmm6; max }
  v1003 = Dvar_RegisterFloat("MKKNMTKQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "How much the suppression meter ticks down per frame.");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DVARFLT_ai_suppression_decrement = v1003;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1007 = Dvar_RegisterFloat("LMQTKKPOPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Min increase in cost an agent uses a traversal");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARFLT_ai_linkWeightPerUserMin = v1007;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_linkWeightPerUserMax = Dvar_RegisterFloat("OSMOKSPOO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Max increase in cost an agent uses a traversal");
  DVARINT_ai_linkWeightTime = Dvar_RegisterInt("MMRQONLQNP", 5000, 0, 50000, 0x40u, "Time that a traversal's cost stays increased after use (ms)");
  DVARINT_ai_showSuppression = Dvar_RegisterInt("NMTQOLMMKO", -1, -1, 2047, 4u, "Draw the suppression planes for this entity");
  DVARINT_ai_debugAnimDeltas = Dvar_RegisterInt("MNTNOKMPPT", 0, 0, 2047, 4u, "Display animation delta debug information");
  __asm
  {
    vmovss  xmm8, cs:__real@43340000
    vmovss  xmm1, cs:__real@43160000; value
  }
  DVARBOOL_ai_debugGrenadeFailSafe = Dvar_RegisterBool("NTKNSRNKQQ", 0, 4u, "Display grenade fail safe debug information");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_debugGrenadeHintArc = Dvar_RegisterFloat("LNONPPPPMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Grenade hint arc in degrees");
  DVARINT_ai_debugCoverEntityNum = Dvar_RegisterInt("LTNNTRTKSN", -1, -1, 2047, 4u, "Display debug info for cover");
  DVARBOOL_ai_debugEngagementDist = Dvar_RegisterBool("NRTNNNLRKO", 0, 4u, "Show the engagement distances for currently selected AI");
  DVARBOOL_ai_debugTargets = Dvar_RegisterBool("NTKOLPRSQT", 0, 4u, "Show primary and secondary targets");
  DVARBOOL_ai_debugMeleeAttackSpots = Dvar_RegisterBool("OLQSTMQOTM", 0, 4u, "Enable debugging information for melee attack spots");
  DVARINT_ai_debugVolume = Dvar_RegisterInt("LONRRNMRKN", -1, -1, 2047, 0, "Show volume entity");
  DVARBOOL_ai_showRegion = Dvar_RegisterBool("OKOQQQRTPN", 0, 4u, "Draw all the cover in a volume for debugging");
  __asm { vmovss  xmm1, cs:__real@43400000; value }
  DVARBOOL_ai_debugPlayerLOS = Dvar_RegisterBool("MNLLMRRMLM", 0, 4u, "Debug information for AI staying out of player LOS");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_ai_teamDeathListenRadius = Dvar_RegisterFloat("NKQPONNNSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "How close to an ally and AI needs to be to hear a team death. Limited by BroadcastPointEvent event distances.");
  DVARINT_ai_glanceShortDuration = Dvar_RegisterInt("MQLTTQRLKS", 550, 400, 1500, 4u, "Short duration for glances.");
  DVARINT_ai_glanceLongDuration = Dvar_RegisterInt("LKKKTTLKLM", 1100, 1000, 3000, 4u, "Long duration for glances.");
  DVARINT_ai_glanceGenericCooldown = Dvar_RegisterInt("NLPRSQNKSK", 5000, 1000, 0x7FFFFFFF, 4u, "Cooldown in between automatic glances.");
  DVARINT_ai_glanceStairsCooldown = Dvar_RegisterInt("LKQNMMNQQR", 10000, 5000, 0x7FFFFFFF, 4u, "Cooldown in between glancing at stairs.");
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm9, cs:__real@3f800000
  }
  DVARINT_ai_glancePlayerCooldown = Dvar_RegisterInt("OQLSONNNO", 20000, 5000, 0x7FFFFFFF, 4u, "Cooldown in between glancing at a nearby player.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_ai_glanceStairsLookDist = Dvar_RegisterFloat("MNNLKLSQOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Look ahead distance when trying to glance at stairs. Value is doubled when running.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_ai_glancePlayerDist = Dvar_RegisterFloat("QTPLLQMLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The distance a player must be within for an AI to glance at them.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_ai_glanceNearAnyPlayerThreshold = Dvar_RegisterFloat("MOKSKQLLMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "AI will not perform lookats when no players are within this distance.");
  DVARSTR_debug_arrivals = Dvar_RegisterString("MNLMOMNKKN", (const char *)&queryFormat.fmt + 3, 4u, "Display AI arrival debug info");
  DCONST_DVARBOOL_ai_showArrivalCalcInfo = Dvar_RegisterBool("ai_showArrivalCalcInfo", 0, 0x40004u, "Display info on how arrival info is being calculated");
  DVARBOOL_ai_debugArc = Dvar_RegisterBool("MNRRTLMTRP", 0, 4u, "Display archetype debug info");
  DVARINT_ai_showTacGraph = Dvar_RegisterEnum("LPLRKQOLTL", AI_DEBUG_TACGRAPH_STRINGS, 0, 4u, "Enable tacgraph display");
  DVARBOOL_ai_showTacGraphIDs = Dvar_RegisterBool("LSMKQOQMML", 0, 4u, "Toggle display of tacgraph IDs");
  DVARBOOL_ai_showNearestTacPoints = Dvar_RegisterBool("MORNORSOPS", 0, 4u, "Draw the nearest tac point for every sentient");
  DVARBOOL_ai_debuglocomotion = Dvar_RegisterBool("MLKONPPSMM", 0, 4u, "Display locomotion blendspace info");
  DVARBOOL_ai_debugTurns = Dvar_RegisterBool("PMRSNTMTN", 0, 4u, "Display turn debug info");
  DVARBOOL_ai_debugtightquarters = Dvar_RegisterBool("LMOMMTLTLO", 0, 4u, "Display current tightquarters information");
  DVARBOOL_ai_debugpathblocked = Dvar_RegisterBool("MPNNNSNQOQ", 0, 4u, "Display path blocked information");
  DCONST_DVARINT_ai_lookatState = Dvar_RegisterInt("ai_lookatState", -1, -1, 5, 0x40004u, "Set the current lookat state");
  DCONST_DVARINT_ai_lookatIntensity = Dvar_RegisterInt("ai_lookatIntensity", -1, -1, 2, 0x40004u, "Set the current lookat intensity");
  DVARBOOL_ai_debugAutoLookAt = Dvar_RegisterBool("MPMMPSLSRO", 0, 4u, "Display the auto-lookat target");
  DVARBOOL_ai_showScheduler = Dvar_RegisterBool("OMKNRSPOLS", 0, 4u, "Show AI scheduler stats");
  DCONST_DVARBOOL_ai_debuglookatanimated = Dvar_RegisterBool("ai_debuglookatanimated", 0, 0x40004u, "Display debug info for animated lookat");
  DCONST_DVARBOOL_ai_lookatnone = Dvar_RegisterBool("ai_lookatnone", 0, 0x40004u, "Set the lookat type to none to turn look at off with a blend out");
  DCONST_DVARBOOL_ai_disablelookatanimated = Dvar_RegisterBool("ai_disablelookatanimated", 0, 0x40004u, "Completely disabled animated lookat, no blendout");
  __asm { vmovss  xmm2, cs:__real@c3340000; min }
  DCONST_DVARBOOL_ai_lookatusedebugangles = Dvar_RegisterBool("ai_lookatusedebugangles", 0, 0x40004u, "Override computed lookat target with ai_lookatyaw and ai_lookatpitch");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1032 = Dvar_RegisterFloat("ai_lookatyaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Force the lookat target yaw to this value");
  __asm { vmovss  xmm2, cs:__real@c3340000; min }
  DCONST_DVARFLT_ai_lookatyaw = v1032;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_ai_lookatpitch = Dvar_RegisterFloat("ai_lookatpitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Force the lookat target pitch to this value");
  DVARINT_ai_civSpeedMin = Dvar_RegisterInt("LSKTNKPTRT", 200, 0, 255, 0x80u, "Min speed for civilians");
  __asm
  {
    vmovss  xmm6, cs:__real@3fc00000
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm1, cs:__real@3f70a3d7; value
  }
  DVARINT_ai_civSpeedMax = Dvar_RegisterInt("MNMNLKRRQP", 250, 0, 255, 0x80u, "Max speed for civilians");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v1041 = Dvar_RegisterFloat("NNSQQNONNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Min speed scale multiplier for allies.");
  __asm { vmovss  xmm1, cs:__real@3f8e147b; value }
  DVARFLT_ai_allySpeedScaleMultMin = v1041;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_ai_allySpeedScaleMultMax = Dvar_RegisterFloat("LRRRMKSLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Max speed scale multiplier for allies.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
    vmovss  xmm1, cs:__real@3f9d70a4; value
  }
  v1048 = Dvar_RegisterFloat("NSPNRRQRLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Min speed for enemies (not including casual killer).");
  __asm { vmovss  xmm1, cs:__real@3fb47ae1; value }
  DVARFLT_ai_enemySpeedScaleMultMin = v1048;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_ai_enemySpeedScaleMultMax = Dvar_RegisterFloat("NOPOKQNMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Max speed for enemies (not including casual killer).");
  DCONST_DVARBOOL_ai_debugaim = Dvar_RegisterBool("ai_debugaim", 0, 0x40004u, "Draw aim angles computed by setAimAngles from the aim start position towards the aim direction");
  DCONST_DVARBOOL_ai_debuggunpose = Dvar_RegisterBool("ai_debuggunpose", 0, 0x40004u, "Display current gunpose state along with the trigger that caused it");
  DVARBOOL_ai_debugTraversalSelection = Dvar_RegisterBool("LTPSQRQKMR", 0, 0x40u, "Print feature request and alias choice for traversals");
  DVARBOOL_ai_enableRetreat = Dvar_RegisterBool("MNQQOQLTOM", 0, 0xC0u, "Allow AI to retreat when overnumbered");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@447a0000; value
  }
  DVARINT_ai_retreatMaxOvernumberAmount = Dvar_RegisterInt("MTLSORKRRO", 0, -4, 4, 0xC0u, "The max amount that an AI can be overnumbered by (players - AI) before retreating");
  __asm { vmovaps xmm2, xmm9; min }
  v1055 = Dvar_RegisterFloat("LNRRMPOPLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Max distance that AI will search for players and allies to determine if overnumbered");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARFLT_ai_retreatProximity = v1055;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm9; min
  }
  v1059 = Dvar_RegisterFloat("MRNPTKNKKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Base value used when scoring nodes for nearby allies during retreat");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  DVARFLT_ai_retreatCoverBaseVal = v1059;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm9; min
  }
  v1063 = Dvar_RegisterFloat("PSNNQPSML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Max value used when scoring nodes for nearby allies during retreat");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@44fa0000; value
    vmovaps xmm2, xmm9; min
  }
  DVARFLT_ai_retreatCoverMaxVal = v1063;
  result = Dvar_RegisterFloat("QTMLPMLSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Max value used when scoring nodes for nearby allies during retreat");
  DVARFLT_ai_teamDeathRetreatDistance = result;
  __asm { vmovaps xmm14, [rsp+118h+var_B8] }
  _R11 = &v1102;
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
    vmovaps xmm15, [rsp+118h+var_C8]
  }
  return result;
}

/*
==============
G_Main_ResetXAnimMemory
==============
*/
void G_Main_ResetXAnimMemory(void)
{
  unsigned __int64 UsedSize; 

  if ( !s_gameXAnimMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 825, ASSERT_TYPE_ASSERT, "( s_gameXAnimMemory != nullptr )", (const char *)&queryFormat, "s_gameXAnimMemory != nullptr") )
    __debugbreak();
  UsedSize = Mem_HunkUser_GetUsedSize(s_gameXAnimMemory);
  Com_Printf(15, "G_Main_ResetXAnimMemory: %zu bytes used\n", UsedSize);
  Mem_HunkUser_Reset(s_gameXAnimMemory);
}

/*
==============
G_Main_RunPreThinkForEntities
==============
*/

void __fastcall G_Main_RunPreThinkForEntities(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  __int64 v26; 
  unsigned int i; 
  char *Value; 
  int *v35; 
  _QWORD *v36; 
  char *v37; 
  __int64 v38; 
  unsigned __int64 v39; 
  ThreadContext CurrentThreadContext; 
  __int64 v45; 
  __int64 v46; 
  char v50; 

  __asm
  {
    vmovaps [rsp+98h+var_58], xmm8
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  Sys_ProfBeginNamedEvent(0xFFF08080, "prethink entities");
  Profile_Begin(593);
  G_Vehicle_UpdateAvoidanceForAllVehicles();
  Profile_EndInternal(NULL);
  Profile_Begin(594);
  G_Vehicle_RunPreThinkForAllVehicles();
  Profile_EndInternal(NULL);
  G_TacGraph_Update();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3d75c28f
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si ebp, xmm1
  }
  if ( !_EBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 431, ASSERT_TYPE_ASSERT, "(physicsNumSteps > 0)", "%s\n\tTime frame too small for the desired physics step, please review", "physicsNumSteps > 0") )
    __debugbreak();
  if ( _EBP > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 432, ASSERT_TYPE_ASSERT, "(physicsNumSteps <= PHYSICS_MAX_STEPS_PER_FRAME)", "%s\n\tTime frame too large for desired physics step, please review", "physicsNumSteps <= PHYSICS_MAX_STEPS_PER_FRAME") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm6, cs:__real@3a83126f
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm7, xmm0, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm8, xmm0, xmm7
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm6, xmm1, xmm7
  }
  Profile_Begin(595);
  if ( _EBP )
  {
    v26 = _EBP;
    do
    {
      __asm { vmovaps xmm0, xmm6; stepSize }
      G_Vehicle_CollideAllVehicles(*(float *)&_XMM0);
      --v26;
    }
    while ( v26 );
  }
  Profile_EndInternal(NULL);
  Profile_Begin(596);
  PhysPerfTrack_ServerWorldsStart();
  PhysPerfTrack_ServerWorldsPreStart();
  Physics_CheckWorldReplayDeterminism(PHYSICS_WORLD_ID_FIRST);
  G_Main_PhysicsSetGravity(PHYSICS_WORLD_ID_FIRST);
  Profile_Begin(597);
  __asm { vmovaps xmm1, xmm8; timeStep }
  Physics_PreStepWorld(PHYSICS_WORLD_ID_FIRST, *(float *)&_XMM1);
  Profile_EndInternal(NULL);
  Physics_CheckWorldReplayDeterminism(PHYSICS_WORLD_ID_FIRST);
  Profile_Begin(598);
  G_PhysicsObject_PreStepWorld(PHYSICS_WORLD_ID_FIRST, _EBP);
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  if ( !_EBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 472, ASSERT_TYPE_ASSERT, "( physicsNumSteps > 0 )", (const char *)&queryFormat, "physicsNumSteps > 0") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm7; velocityScale }
  G_PhysicsCharacterProxy_Update(*(float *)&_XMM0);
  __asm { vmovaps xmm1, xmm7; velocityScale }
  Physics_ProcessDeferredKeyframe(PHYSICS_WORLD_ID_FIRST, *(const float *)&_XMM1);
  PhysPerfTrack_ServerWorldsPreStop();
  PhysPerfTrack_ServerWorldsMainStepStart();
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  for ( i = 0; i < _EBP; ++i )
  {
    Value = (char *)Sys_GetValue(0);
    v35 = (int *)(Value + 26056);
    if ( (unsigned int)(*((_DWORD *)Value + 6514) + 1) >= 3 )
    {
      LODWORD(v46) = 3;
      LODWORD(v45) = *((_DWORD *)Value + 6514) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    if ( (unsigned int)++*v35 >= 3 )
    {
      LODWORD(v46) = 3;
      LODWORD(v45) = *v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v36 = Value + 2088;
    v37 = Value + 40;
    if ( *v36 < (unsigned __int64)v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v36 += 8i64;
    if ( *v36 >= (unsigned __int64)v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v36 = v35;
    if ( *v36 <= (unsigned __int64)v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v38 = *v35;
    v39 = __rdtsc();
    v35[v38 + 2] = v39;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 599, NULL, 0);
    __asm { vxorps  xmm3, xmm3, xmm3; stepTimeOverride }
    Physics_StepWorld(PHYSICS_WORLD_ID_FIRST, i, _EBP, *(float *)&_XMM3);
    Profile_EndInternal(NULL);
    Physics_CheckWorldReplayDeterminism(PHYSICS_WORLD_ID_FIRST);
  }
  PhysPerfTrack_ServerWorldsMainStepStop();
  Profile_Begin(600);
  PhysPerfTrack_ServerWorldsPostStart();
  G_PhysicsObject_PostStepWorld(PHYSICS_WORLD_ID_FIRST);
  PhysPerfTrack_ServerWorldsPostStop();
  Profile_EndInternal(NULL);
  Profile_Begin(601);
  PhysPerfTrack_ServerWorldsDetailUpdateStart();
  __asm { vmovaps xmm1, xmm8; timeStep }
  Physics_PreStepWorld(PHYSICS_WORLD_ID_SERVER_DETAIL, *(float *)&_XMM1);
  Physics_UpdateWorld(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
  PhysPerfTrack_ServerWorldsDetailUpdateStop();
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm0, xmm8; timeStep }
  Physics_CheckForGarbageCollectionServer(*(float *)&_XMM0);
  PhysPerfTrack_ServerWorldsStop();
  Profile_EndInternal(NULL);
  _R11 = &v50;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Main_RunThink
==============
*/
void G_Main_RunThink(gentity_s *ent)
{
  int nextthink; 
  unsigned __int8 handler; 
  const GEntityHandlerList *v4; 
  __int64 v5; 
  int v6; 

  nextthink = ent->nextthink;
  if ( nextthink > 0 && nextthink <= level.time )
  {
    ent->nextthink = 0;
    if ( !s_activeEntityHandlers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 588, ASSERT_TYPE_ASSERT, "( s_activeEntityHandlers )", (const char *)&queryFormat, "s_activeEntityHandlers") )
      __debugbreak();
    handler = ent->handler;
    if ( handler >= 0x1Fu )
    {
      v6 = 31;
      LODWORD(v5) = handler;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( ent->handler ) < (unsigned)( ENT_HANDLER_COUNT )", "ent->handler doesn't index ENT_HANDLER_COUNT\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    v4 = &s_activeEntityHandlers[ent->handler];
    if ( !v4->think )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E28ED0, 1133i64);
    Profile_Begin(339);
    v4->think(ent);
    Profile_EndInternal(NULL);
  }
}

/*
==============
G_Main_SetupGameTypeQuick
==============
*/
void G_Main_SetupGameTypeQuick(const char *gameType)
{
  level.gameTypeQuick[0] = BG_GetGameTypeQuickForName(gameType);
}

/*
==============
G_Main_ShutdownCommon
==============
*/
void G_Main_ShutdownCommon(bool clearScripts, bool clearDvars)
{
  ShutdownSpeedThresholds();
  if ( clearScripts )
  {
    XAnimIKShutdown();
    BG_Camera_Clear();
    BG_Execution_ClearAssets();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimationMP_ShutdownAnimations();
      BG_AnimationMP_ShutdownSuitAnimIndexes();
    }
    BG_Gesture_ClearGestures();
    XAnimCurve_ClearCurves();
    BG_BlendSpace2D_ClearDefs();
    BG_CarryObject_ClearDefs();
    BG_HudOutline_ClearDefs();
    BG_Camo_ClearNCS();
    BG_Accessory_ClearAssets();
    BG_ClearSuits();
    Rumble_Shutdown();
    BG_LookAt_Shutdown();
  }
  if ( clearDvars )
    G_Main_DeRegisterDvars();
  G_MinimizedUsePrompts_Shutdown();
  s_activeEntityHandlers = NULL;
}

/*
==============
G_Main_ShutdownXAnimHunkUser
==============
*/
void G_Main_ShutdownXAnimHunkUser(void)
{
  if ( s_gameXAnimMemory )
  {
    Mem_HunkUser_Destroy(s_gameXAnimMemory);
    s_gameXAnimMemory = NULL;
  }
}

/*
==============
G_Main_SightTrace
==============
*/
bool G_Main_SightTrace(const vec3_t *start, const vec3_t *end, int passEntityNum, int passEntityNum1, int contentmask)
{
  return PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, start, end, &bounds_origin, passEntityNum, passEntityNum1, contentmask) == 0;
}

/*
==============
G_Main_TraceCapsule
==============
*/
void G_Main_TraceCapsule(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, results, start, end, bounds, passEntityNum, 1, contentmask, 0, NULL, All);
}

/*
==============
G_Main_TraceCapsule
==============
*/
void G_Main_TraceCapsule(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *const passEntityNumList, int passEntityCount, int contentmask)
{
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, results, start, end, bounds, passEntityNumList, passEntityCount, 1, contentmask, 0, NULL, All);
}

/*
==============
G_Main_TraceCapsuleComplete
==============
*/
int G_Main_TraceCapsuleComplete(const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum1, int contentmask)
{
  return PhysicsQuery_LegacyTracePassed(PHYSICS_WORLD_ID_FIRST, start, end, bounds, passEntityNum, passEntityNum1, contentmask, 0, NULL, 0);
}

/*
==============
G_Main_TraceCapsuleRotated
==============
*/
void G_Main_TraceCapsuleRotated(trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int passEntityNum, int contentmask)
{
  PhysicsQuery_LegacyTraceRotated(PHYSICS_WORLD_ID_FIRST, results, start, end, angles, bounds, passEntityNum, 1, contentmask, 0, NULL, All);
}

/*
==============
G_Main_UserMoveWorkerFinish
==============
*/
void G_Main_UserMoveWorkerFinish(void)
{
  GWeaponMap *Instance; 
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  gentity_s *v5; 
  gentity_s *v6; 
  unsigned int v7; 
  signed __int64 v8; 
  unsigned __int8 v9; 
  char *fmt; 

  if ( s_usermoveWorkersStarted )
  {
    Instance = GWeaponMap::GetInstance();
    GWeaponMap::EndWorkerProcessing(Instance);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 928, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v1 = 0;
    v2 = 0i64;
    v3 = 0i64;
    do
    {
      v4 = s_entitiesInUseCopy[v2];
      if ( v4 && g_entityIsInUse[v2] )
      {
        v5 = &g_entities[v3];
        v6 = &s_entitiesCopy[v3];
        if ( memcmp_0(&s_entitiesCopy[v3], &g_entities[v3], 0x5B0ui64) )
        {
          v7 = 0;
          v8 = (char *)v5 - (char *)v6;
          do
          {
            if ( LOBYTE(v6->s.number) != *((_BYTE *)&v6->s.number + v8) )
              Com_PrintError(34, "Error: [UserMoveWorkers] gentity_t (%i) has changed at offset %i\n", (unsigned int)v5->s.number, v7);
            ++v7;
            v6 = (gentity_s *)((char *)v6 + 1);
          }
          while ( v7 < 0x5B0 );
        }
      }
      else
      {
        v9 = g_entityIsInUse[v2];
        if ( v4 != v9 )
        {
          LODWORD(fmt) = v9;
          Com_PrintError(34, "Error: [UserMoveWorkers] Entity %i 'in use' changed from %i to %i\n", v1, v4, fmt);
        }
      }
      ++v1;
      ++v2;
      ++v3;
    }
    while ( v1 < 0x800 );
  }
  s_usermoveWorkersStarted = 0;
}

/*
==============
G_Main_UserMoveWorkersBegin
==============
*/
void G_Main_UserMoveWorkersBegin(void)
{
  GWeaponMap *Instance; 

  if ( !s_usermoveWorkersStarted )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 916, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    memcpy_0(s_entitiesInUseCopy, g_entityIsInUse, 0x800ui64);
    memcpy_0(s_entitiesCopy, g_entities, 0x2D8000ui64);
    Sys_ProfBeginNamedEvent(0xFF008008, "UsermoveWorkers Broadphase update");
    if ( Physics_GetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST) )
    {
      Com_Printf(15, "G_Main_UserMoveWorkersBeginPhysics: Updating broadphase before usermove workers\n");
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    }
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
    Instance = GWeaponMap::GetInstance();
    GWeaponMap::BeginWorkerProcessing(Instance);
  }
  s_usermoveWorkersStarted = 1;
}

/*
==============
G_Main_VerifySuitDef
==============
*/
void G_Main_VerifySuitDef(const unsigned int suitIndex, const char *suitName)
{
  __int64 v3; 
  const char *name; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  v3 = 0x7FFFFFFFi64;
  name = BG_GetSuitDef(suitIndex)->name;
  if ( !suitName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v5 = (const char *)(suitName - name);
  do
  {
    v6 = (unsigned __int8)name[(_QWORD)v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)name++;
    --v3;
    if ( !v7 )
      break;
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
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 251, ASSERT_TYPE_ASSERT, "( !I_stricmp( suitName, def->name ) )", (const char *)&queryFormat, "!I_stricmp( suitName, def->name )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v6 );
}

/*
==============
G_Main_WorldPointToScreenPos
==============
*/

bool __fastcall G_Main_WorldPointToScreenPos(const vec3_t *viewOrigin, const tmat33_t<vec3_t> *cameraMtx, double viewFOV, const vec3_t *targetPoint, vec2_t *outScreenPos)
{
  char v39; 
  bool v40; 
  bool v43; 
  bool result; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = outScreenPos;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RSI = targetPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm8, xmm2
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm4, xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm5, xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm6, xmm0, dword ptr [rbp+8]
    vmulss  xmm0, xmm4, dword ptr [rdi]
    vmulss  xmm1, xmm5, dword ptr [rdi+4]
    vmulss  xmm3, xmm4, dword ptr [rdi+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+8]
    vmulss  xmm0, xmm5, dword ptr [rdi+10h]
    vaddss  xmm9, xmm2, xmm1
    vcomiss xmm9, xmm7
    vmulss  xmm1, xmm6, dword ptr [rdi+14h]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm5, dword ptr [rdi+1Ch]
    vmulss  xmm3, xmm4, dword ptr [rdi+18h]
    vaddss  xmm10, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rdi+20h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm10, xmm10, xmm9
    vdivss  xmm9, xmm0, xmm9
    vmulss  xmm0, xmm8, cs:__real@3c0efa35; X
  }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vcomiss xmm0, xmm7
    vmulss  xmm8, xmm0, cs:__real@3f400000
    vmovaps xmm6, xmm0
  }
  if ( v39 | v40 )
  {
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 718, ASSERT_TYPE_SANITY, "( tanHalfFovX > 0 )", (const char *)&queryFormat, "tanHalfFovX > 0");
    v39 = 0;
    v40 = !v43;
    if ( v43 )
      __debugbreak();
  }
  __asm { vcomiss xmm8, xmm7 }
  if ( v39 | v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 719, ASSERT_TYPE_SANITY, "( tanHalfFovY > 0 )", (const char *)&queryFormat, "tanHalfFovY > 0") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm10, cs:__real@c3a00000
    vmulss  xmm2, xmm9, cs:__real@c3700000
    vdivss  xmm1, xmm0, xmm6
    vdivss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  dword ptr [rbx], xmm1
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return result;
}

/*
==============
G_Util_FlushInvalidOtherEnt
==============
*/
void G_Util_FlushInvalidOtherEnt(gentity_s *ent)
{
  __int16 otherEntityNum; 
  bool v3; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 862, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  otherEntityNum = ent->s.otherEntityNum;
  if ( otherEntityNum != 2047 && !G_IsEntityInUse(otherEntityNum) )
  {
    v3 = ent->s.eType == ET_SCRIPTMOVER;
    ent->s.otherEntityNum = 2047;
    if ( v3 && G_IsAffector(&ent->s.lerp.eFlags) )
      G_ClearAffector(ent, &ent->s.lerp.eFlags);
  }
}

