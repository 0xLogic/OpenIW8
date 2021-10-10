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
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  OmnvarData *Data; 
  OmnvarData *v7; 
  OmnvarData *v8; 
  OmnvarData *v9; 
  float value; 
  float v11; 
  float v12; 
  HavokPhysicsWorld *MutableWorld; 
  __int64 v14; 
  Physics_WorldId v15; 
  int v16[4]; 

  IndexByName = BG_Omnvar_GetIndexByName("physics_gravity_x");
  v3 = BG_Omnvar_GetIndexByName("physics_gravity_y");
  v4 = BG_Omnvar_GetIndexByName("physics_gravity_z");
  v5 = v4;
  if ( (IndexByName == -1 || v3 == -1 || v4 == -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 390, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_PhysicsSetGravity can't find omnvars - check omnvar.csv") )
    __debugbreak();
  Data = G_Omnvar_GetData(IndexByName, -1, NULL);
  v7 = G_Omnvar_GetData(v3, -1, NULL);
  v8 = G_Omnvar_GetData(v5, -1, NULL);
  v9 = v8;
  if ( (!Data || !v7 || !v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_PhysicsSetGravity has invalid omnvars - check omnvar.csv") )
    __debugbreak();
  value = Data->current.value;
  v11 = v7->current.value;
  v12 = v9->current.value;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 27, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v15 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 28, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
      __debugbreak();
  }
  *(float *)v16 = value * 0.03125;
  *(float *)&v16[1] = v11 * 0.03125;
  *(float *)&v16[2] = v12 * 0.03125;
  *(float *)&v16[3] = 0.0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 81, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  MutableWorld = HavokPhysics_GetMutableWorld(worldId);
  MutableWorld->world->setGravity(&MutableWorld->world->hknpWorldWriter, (const hkVector4f *)v16);
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
  int v1; 
  unsigned int v15; 
  unsigned int flags; 
  float v17; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v31; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  char v48; 
  int v49; 
  char v50; 
  int v51; 
  char v52; 
  char v53; 
  unsigned int v54; 
  unsigned int v60; 
  char v68; 
  const dvar_t *result; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 32;
  if ( ActiveGameMode != 1 )
    v1 = 16;
  DCONST_DVARMPSPINT_g_maxDroppedWeapons = Dvar_RegisterInt("g_maxDroppedWeapons", v1, 2, 32, 0x40004u, "Maximum number of dropped weapons");
  DCONST_DVARINT_g_maxDroppedEquipment = Dvar_RegisterInt("g_maxDroppedEquipment", 8, 2, 8, 0x40004u, "Maximum number of dropped equipment weapons");
  DVARFLT_g_dropWeaponHeight = Dvar_RegisterFloat("MQMLTKRQOL", 6.0, 1.0, 100.0, 0, "Default height to drop weapons from.");
  DVARFLT_actorDropItemMaxVelocity = Dvar_RegisterFloat("NSTQKPQKNN", 100.0, 0.0, 10000.0, 0, "Velocity cap for drop items.");
  DVARFLT_actorDropItemMaxAngularVelocity = Dvar_RegisterFloat("PRPOQOOKN", 20.0, 0.0, 1000.0, 0, "Angular velocity cap for drop items.");
  DVARINT_trigger_draw = Dvar_RegisterEnum("MSTKKMMRK", s_drawTriggerNames, 0, 4u, "Draw trigger geometry");
  DVARINT_trigger_drawDistance = Dvar_RegisterInt("NTNPNKLTQL", 1000, 0, 0x7FFFFFFF, 4u, "Trigger draw distance");
  DVARBOOL_trigger_drawDepthTest = Dvar_RegisterBool("MPSLQRSROT", 0, 4u, "Display trigger geo with depth information");
  DVARSTR_trigger_drawTargetName = Dvar_RegisterString("MOROPNNSOK", (const char *)&queryFormat.fmt + 3, 4u, "Filter trigger geo by this targetname");
  DVARBOOL_trigger_drawSolid = Dvar_RegisterBool("OOLMSOKPL", 0, 4u, "Draw trigger interiors as well as outlines");
  DVARVEC4_trigger_drawSolidColor = Dvar_RegisterVec4("LSSLQQSPK", 1.0, 0.0, 0.0, 0.5, 0.0, 1.0, 4u, "Color to use (rgba) when drawing trigger interiors");
  DCONST_DVARFLT_g_damagePartDamageRadius = Dvar_RegisterFloat("g_damagePartDamageRadius", 30.0, 0.0, 9999.0, 0x40004u, "Radius across which to apply radius damage to damage parts.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_5000_0);
  __asm { vblendvps xmm1, xmm1, xmm0, xmm2; value }
  DCONST_DVARMPSPFLT_g_turretCorrectionFocusDistance = Dvar_RegisterFloat("g_turretCorrectionFocusDistance", *(float *)&_XMM1, 500.0, 20000.0, 0x40004u, "Trace Distance from the eye to find the focul point for bullet correction.");
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
  DVARINT_radius_damage_debug_ent = Dvar_RegisterInt("RQLMNKPQR", -1, -1, 2048, 4u, "Only visualize traces executed against this entity.");
  DCONST_DVARFLT_radius_damage_vehicle_player_top_offset = Dvar_RegisterFloat("radius_damage_vehicle_player_top_offset", 5.0, 0.0, 3.4028235e38, 0x40004u, "Indicates how many inches below the bounding box's top position the player's top position should be placed for the radius damage calculation.");
  DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset = Dvar_RegisterFloat("radius_damage_vehicle_player_bottom_offset", 25.0, 0.0, 3.4028235e38, 0x40004u, "Indicates how many inches above the bounding box's bottom position the player's bottom position should be placed for the radius damage calculation.");
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
  _XMM8 = LODWORD(FLOAT_72_0);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm8, xmm1, xmm2; value
  }
  DVARFLT_player_throwbackInnerRadius = Dvar_RegisterFloat("OLTPMSSTSM", *(float *)&_XMM1, 0.0, 3.4028235e38, 0x84u, "The radius to a live grenade player must be within initially to do a throwback");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_192_0);
  __asm { vblendvps xmm1, xmm0, xmm2, xmm3; value }
  DVARFLT_player_throwbackOuterRadius = Dvar_RegisterFloat("OTKRSNKQT", *(float *)&_XMM1, 0.0, 3.4028235e38, 0x84u, "The radius player is allow to throwback a grenade once the player has been in the inner radius");
  _XMM9 = LODWORD(FLOAT_128_0);
  DVARFLT_player_throwbackFOV = Dvar_RegisterFloat("LLSNMTPSTL", 360.0, 0.0, 360.0, 0x84u, "The FOV within which a grenade can be thrown back");
  DVARFLT_player_vehicleUseRadius = Dvar_RegisterFloat("LPLOKMTKQQ", 128.0, 0.0, 3.4028235e38, 0xC4u, "The radius within which a player can use a vehicle");
  DVARFLT_player_vehicleUseFOV = Dvar_RegisterFloat("MSOQTNSQKP", 360.0, 0.0, 360.0, 0xC4u, "The FOV within which a player can use a vehicle");
  DVARFLT_player_MGUseRadius = Dvar_RegisterFloat("NPLKNLQNMK", 128.0, 0.0, 3.4028235e38, 0x84u, "The radius within which a player can mount a machine gun");
  DVARFLT_player_MGUseFOV = Dvar_RegisterFloat("MPNNOSOOQN", 360.0, 0.0, 360.0, 0x84u, "The FOV within which a player can mount a machine gun");
  v15 = 262340;
  flags = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    flags = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v17 = FLOAT_75_0;
  }
  else
  {
    _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm0, xmm2
    }
    v17 = *(float *)&_XMM0;
  }
  DCONST_DVARMODEFLT_player_itemUseRadius = Dvar_RegisterFloat("MLLSRQSRT", v17, 0.0, 3.4028235e38, flags, "The radius within which a player can pick up a weapon");
  v21 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v21 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_player_itemUseFOV = Dvar_RegisterFloat("LRTMLPLLOK", 360.0, 0.0, 360.0, v21, "The FOV within which a player can pick up a weapon");
  v22 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v22 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_player_itemAutoUseRadius = Dvar_RegisterFloat("OLRTNTROOK", 64.0, 0.0, 3.4028235e38, v22, "The radius to use when a usable scriptable's auto-use radius is set to -1.0");
  v23 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v23 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_0_1);
  __asm { vblendvps xmm0, xmm0, xmm11, xmm2 }
  DCONST_DVARMPFLT_player_itemAutoUseDelaySeconds = Dvar_RegisterFloat("MPKPKNQKKQ", *(float *)&_XMM0, 0.0, 3.4028235e38, v23, "The delay in seconds before an auto-use scriptable is used");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm9, xmm8, xmm2; value
  }
  DVARFLT_player_useRadius = Dvar_RegisterFloat("MTOQQKKRPS", *(float *)&_XMM1, 0.0, 3.4028235e38, 0xC4u, "The radius within which a player can use things");
  DVARFLT_player_useFOV = Dvar_RegisterFloat("PRTLMPOPR", 360.0, 0.0, 360.0, 0x84u, "The default FOV within which things can be interacted with");
  v31 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v31 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_8000_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  DCONST_DVARMPFLT_player_useVerticalDist = Dvar_RegisterFloat("LKPKTMLPNO", *(float *)&_XMM0, 0.0, 50000.0, v31, "Vertical Distance to which nearby entites will be considered for player use.");
  v36 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v36 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cursorHintControlLockExitTimeout = Dvar_RegisterFloat("LKNNQPSPNL", 1.0, 0.0, 3.4028235e38, v36, "Time before a player can move after they have been locked in a cursor hint. This stops pops into vignettes.");
  DVARFLT_player_buttonHintFOV = Dvar_RegisterFloat("LKKRLTRNKR", 120.0, 0.0, 360.0, 0x84u, "The FOV within which icon hints are displayed on things that use the HINT_BUTTON cursorHint type");
  DVARFLT_player_buttonHintRadius = Dvar_RegisterFloat("OLLMLMSSMK", 500.0, 0.0, 3.4028235e38, 0x84u, "The radius within which icon hints are displayed on things that use the HINT_BUTTON cursorHint type");
  DVARFLT_player_buttonHintShortRadius = Dvar_RegisterFloat("MNMRSTLRKM", 0.5, 0.0, 1.0, 0xC0u, "Where the short range threshold lies between use radius and hint display radius. Used to display a different state on hints");
  DCONST_DVARINT_g_playerMaxExtrapolationTime = Dvar_RegisterInt("g_playerMaxExtrapolationTime", 50, 0, 0x7FFFFFFF, 0x40004u, "Maximum extrapolation that the client applies to remote players");
  DCONST_DVARINT_g_itemMaxExtrapolationTime = Dvar_RegisterInt("g_itemMaxExtrapolationTime", 50, 0, 0x7FFFFFFF, 0x40004u, "Maximum extrapolation that the client applies to dropped items");
  DVARFLT_g_minGrenadeDamageSpeed = Dvar_RegisterFloat("LKOMQMPROP", 400.0, 0.0, 3.4028235e38, 0x84u, "Minimum speed at which getting hit be a grenade will do damage (not the grenade explosion damage)");
  DVARINT_g_speed = Dvar_RegisterInt("NSRPQNLSNK", 190, 0x80000000, 0x7FFFFFFF, 0xC0u, "Maximum player speed");
  DVARFLT_g_knockback = Dvar_RegisterFloat("NSMSTQROLM", 1000.0, -3.4028235e38, 3.4028235e38, 0x80u, "Maximum player knockback");
  DVARFLT_g_knockbackPlayerScale = Dvar_RegisterFloat("NMLNMLQKQN", 0.5, 0.0, 3.4028235e38, 0xC0u, "Maximum knockback player scale (SP only)");
  DVARBOOL_g_radiusDamageCalcDetailBounds = Dvar_RegisterBool("QRTKTLRNP", 0, 0, "Calculates model bounds for detail world when determining radius falloff damage for buildables.");
  DVARBOOL_transient_auto_pause = Dvar_RegisterBool("LSMMSKSKLQ", 1, 0, "Enable/disable transient auto pause feature.");
  DVARBOOL_ufoHitsTriggers = Dvar_RegisterBool("NRTOOSORMS", 0, 0xC4u, "ufo/noclip will hit triggers when enabled");
  DVARINT_g_debugLocDamage = Dvar_RegisterInt("MLPTNLROON", -1, -1, 2048, 4u, "Display locational damage debug information for an entity");
  DVARINT_g_debugLocHit = Dvar_RegisterInt("TLLOTRSQP", -1, -1, 2048, 4u, "Display locational damage info for an entity when the entity is hit");
  DVARINT_g_debugLocHitTime = Dvar_RegisterInt("NPPMLRSOS", 500, 0, 0x7FFFFFFF, 4u, "Time duration of g_debugLocHit lines");
  DVARFLT_g_friendlyNameDist = Dvar_RegisterFloat("MSQKLQNNSN", 15000.0, 0.0, 15000.0, 0xC4u, "Maximum distance at which a friendly name shows when the crosshairs is over them");
  v37 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v37 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_256_0);
  __asm { vblendvps xmm0, xmm0, xmm2, xmm3 }
  DCONST_DVARMPFLT_g_friendlyfireDist = Dvar_RegisterFloat("MLMROTLMO", *(float *)&_XMM0, 0.0, 15000.0, v37, "Maximum range for disabling fire at a friendly");
  DVARFLT_shieldBlastDamageProtection_30 = Dvar_RegisterFloat("MLORKNLROQ", 1.0, 0.0, 1.0, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 30-degree arc of the shield.");
  DVARFLT_shieldBlastDamageProtection_60 = Dvar_RegisterFloat("NTOPQTNTTP", 1.0, 0.0, 1.0, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 60-degree arc of the shield.");
  DVARFLT_shieldBlastDamageProtection_120 = Dvar_RegisterFloat("NMNRKSSKPK", 0.55000001, 0.0, 1.0, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 120-degree arc of the shield.");
  DVARFLT_shieldBlastDamageProtection_180 = Dvar_RegisterFloat("NTNORNKSOS", 0.15000001, 0.0, 1.0, 0x84u, "How much protection a shield has against an explosion.  0.0 is none, 1.0 is full.  For explosions within a 180-degree arc of the shield.");
  DVARBOOL_g_listEntity = Dvar_RegisterBool("MNSSLMPKOK", 0, 0, "list all of the current entities");
  DVARFLT_g_entinfo_maxdist = Dvar_RegisterFloat("LPQNKMTNRN", 2048.0, 0.0, 3.4028235e38, 4u, "Maximum distance of an entity from the camera at which to show entity information");
  DVARBOOL_g_earthquakeEnable = Dvar_RegisterBool("QKQNSSMNR", 1, 0x84u, "Enable camera shake");
  v42 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v42 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_useparentlink = Dvar_RegisterBool("PNKQRPPPO", 1, v42, "Enable parent linking vs. interpolation.");
  DVARINT_g_drawGrenadeHints = Dvar_RegisterInt("NSSQTMSQMN", 0, 0, 0x7FFFFFFF, 4u, "Draw debug information for grenades");
  DVARBOOL_g_drawWeaponMap = Dvar_RegisterBool("LTRRQNMQSR", 0, 4u, "Draw the contents of the weapon map");
  DVARBOOL_g_debugUsables = Dvar_RegisterBool("OMQQPOOTSR", 0, 4u, "Enables debug display of all usable objects for the given player.");
  DVARINT_g_debugUse = Dvar_RegisterInt("LLRSOSTPNL", -1, -1, 2048, 4u, "Enables debug display of usable objects for the given player.");
  DVARBOOL_g_debugUseFull = Dvar_RegisterBool("LOLKNSQMOS", 0, 4u, "Enables a full debug display of all usable properties in 3D - in conjunction with g_debugUse.");
  v43 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v43 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_g_defaultUsePriority = Dvar_RegisterInt("NMMMOKRLKN", 0, 0x80000000, 0x7FFFFFFF, v43, "The default priority of usable objects.  Lower numbers are given higher priority.  Change with SetUsePriority().");
  v44 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v44 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_g_useDirectLookOuterAngle = Dvar_RegisterFloat("OLKOROPLKS", 20.0, 0.0, 90.0, v44, "Angle (degrees) from the view vector to consider usable objects as being directly looked at. Objects within direct outer look gets a priority bump of -200 (lower integer value means higher priority). The object must also be within g_useDirectLookOuterDistance to get the priority bump.");
  v45 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v45 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_g_useDirectLookOuterDistance = Dvar_RegisterFloat("MKTTPTPRPK", 128.0, 0.0, 3.4028235e38, v45, "Distance (inches) to consider usable objects as being directly looked at. The object must also be within g_useDirectLookOuterAngle to get the priority bump.");
  v46 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v46 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_g_useDirectLookInnerAngle = Dvar_RegisterFloat("MQKNTOOPSR", 4.0, 0.0, 90.0, v46, "Angle (degrees) from the view vector to consider usable objects as being directly looked at. Objects within direct inner look has their priority overridden to -250 (lower integer value means higher priority). The object must also be within g_useDirectLookInnerDistance to get the priority override.");
  v47 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v47 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_g_useDirectLookInnerDistance = Dvar_RegisterFloat("LNOMQMLOML", 100.0, 0.0, 3.4028235e38, v47, "Distance (inches) to consider usable objects as being directly looked at. The object must also be within g_useDirectLookInnerAngle to get the priority override.");
  DVARBOOL_g_useEnableScoringFixForUseRange = Dvar_RegisterBool("NMONQQOLLO", 1, 0, "When set to true, only usables within the use range get the priority boost for being in the under direct inner/outer look.");
  DVARINT_g_useWithinUseRangePriorityDelta = Dvar_RegisterInt("MOLNQQQROL", -20, 0x80000000, 0, 0, "Add this priority to usables within the usable range. The offset value here must cover the range of PLAYER_USE_DATA_DEFINED_MIN_PRIORITY and PLAYER_USE_DATA_DEFINED_MAX_PRIORITY");
  DVARBOOL_g_eventWarningEnable = Dvar_RegisterBool("MORTNLTOPS", 0, 4u, "Enable to print warnings when an entity's event queue overflows");
  DVARINT_g_eventPrintEntity = Dvar_RegisterInt("SPPSKQPPP", -1, -1, 2048, 4u, "Print events triggered on the specified entity");
  DCONST_DVARBOOL_g_weaponEnforceNames = Dvar_RegisterBool("g_weaponEnforceNames", 0, 0x40004u, "Force valid weapon names from script. Causes invalid weapon names to throw a script error");
  DVARSTR_mapname = Dvar_RegisterString("mapname", (const char *)&queryFormat.fmt + 3, 0x2000u, "Mapname information for use by script. Not read directly by code.");
  DVARFLT_g_fixedDeathCameraTraceHeight = Dvar_RegisterFloat("RKQPNMNKO", 300.0, -1.0, 3.4028235e38, 4u, "How far from the ground the player is before the fixed death camera kicks in. Use 0 to always force fixed death camera, -1 for disabling fall checks.");
  DVARFLT_g_fixedDeathCameraMinGravForFallChecks = Dvar_RegisterFloat("TTQPLPKMR", 100.0, 0.0, 3.4028235e38, 4u, "Indicates the minimum gravity (inches/sec2) required for the code to check for falling. Earth gravity is rougly 386 inches/sec2.");
  DCONST_DVARBOOL_g_allowEveryoneToSeeScavengerBags = Dvar_RegisterBool("g_allowEveryoneToSeeScavengerBags", 1, 0x40004u, "Allows all players to see scavenger bags, even without the scavenger perk.");
  DVARBOOL_g_debugdrawTagInfoPool = Dvar_RegisterBool("OKPMKPQNMO", 0, 4u, "Debug Draw tagInfo pool data");
  DCONST_DVARBOOL_g_antilagPoseBlend = Dvar_RegisterBool("g_antilagPoseBlend", 0, 0x40004u, "True if the antilag system should blend two pose graphs when evaluating an antilag pose. False to select the nearest neighbor.");
  DCONST_DVARINT_g_debugInfil = Dvar_RegisterInt("g_debugInfil", -1, -1, 0x7FFFFFFF, 0x40004u, "Turns on server debug information for infils. Number is equal to entity specific info if supported.");
  DVARBOOL_g_alwaysReplicatePlayerAnimScriptInputParams = Dvar_RegisterBool("LOQONPQOMK", 0, 4u, "If set to 1, system will always replicate player input state used by the animation system for remote players.");
  DCONST_DVARBOOL_g_DisablePlayerNearestDataUpdates = Dvar_RegisterBool("g_DisablePlayerNearestDataUpdates", 0, 0x40004u, "Players will not update their nearest node or tac point (a large performance concern with many clients)");
  DVARBOOL_g_DisablePlayerRepulsors = Dvar_RegisterBool("NNTNRSPSSP", 0, 0x80u, "Players will not place repulsors around themselves on spawn (a large performance concern with many clients)");
  DVARBOOL_g_debugGrenadeNotifies = Dvar_RegisterBool("MROSMKPMKN", 0, 0, "Draw bounding boxes for the grenade notification triggers");
  DCONST_DVARBOOL_g_drawPlayerUseEntitiesOverlay = Dvar_RegisterBool("g_drawPlayerUseEntitiesOverlay", 0, 0x40004u, "Displays an overlay of the last player use query for entities.");
  DCONST_DVARBOOL_g_drawPlayerUseScriptablesOverlay = Dvar_RegisterBool("g_drawPlayerUseScriptablesOverlay", 0, 0x40004u, "Displays an overlay of the last player use query for scriptables.");
  DCONST_DVARFLT_g_worldstreaming_newRequestMinDistance = Dvar_RegisterFloat("g_worldstreaming_newRequestMinDistance", 512.0, 0.0, 3.4028235e38, 0x40004u, "The minimum distance required, in COD units, to start a new streaming request if one was already streaming nearby.");
  DCONST_DVARINT_g_worldstreaming_newRequestMinTimeMs = Dvar_RegisterInt("g_worldstreaming_newRequestMinTimeMs", 500, 0, 0x7FFFFFFF, 0x40004u, "The minimum time required, in ms, to start a new streaming request if one was already completed nearby.");
  DCONST_DVARFLT_g_worldstreaming_minVelocity = Dvar_RegisterFloat("g_worldstreaming_minVelocity", 270.0, 0.0, 3.4028235e38, 0x40004u, "The minimum velocity required before we send a value to the client. This is intended to be slightly higher than the maximum sprint speed on foot (but less than super-sprint)");
  DCONST_DVARBOOL_g_worldStreaming_verbose = Dvar_RegisterBool("g_worldStreaming_verbose", 0, 0x40004u, "Enable to turn on verbose debug logging for G_WorldStreaming");
  DCONST_DVARBOOL_g_dropWeaponLaunchTrace = Dvar_RegisterBool("g_dropWeaponLaunchTrace", 0, 0x40004u, "When set use a trace from the player to the tag to get the launch origin, otherwise just use the tag.");
  DCONST_DVARBOOL_g_dropWeaponLaunchCanDisablePhysicsOnInit = Dvar_RegisterBool("g_dropWeaponLaunchCanDisablePhysicsOnInit", 1, 0x40004u, "When set allow to skip physics init on item launch.");
  DVARBOOL_g_useCheapScriptedMoversForLargeMap = Dvar_RegisterBool("MRQQSTOLML", 1, 0, "When set to true, will use a version of scripted movers that can cause player collision jitters specifically against scripted movers.");
  DCONST_DVARINT_g_debugPlayerSpectateStream = Dvar_RegisterInt("g_debugPlayerSpectateStream", -1, -1, 200, 0x40004u, "Allows simulating the spectate transition behavior even when we're not spectating. -1 to disable");
  v48 = Com_GameMode_GetActiveGameMode();
  v49 = 75;
  if ( v48 != 1 )
    v49 = 25;
  DVARINT_glass_damageToWeaken = Dvar_RegisterInt("LOMSNQRPQN", v49, 1, 0xFFFF, 0x44u, "The amount of damage a piece of glass must take to look damaged");
  v50 = Com_GameMode_GetActiveGameMode();
  v51 = 275;
  if ( v50 != 1 )
    v51 = 100;
  DVARINT_glass_damageToDestroy = Dvar_RegisterInt("NPNOOMMTPK", v51, 1, 0xFFFF, 0x44u, "The amount of damage a piece of glass must take to be completely destroyed");
  v52 = Com_GameMode_GetActiveGameMode();
  DVARINT_glass_meleeDamage = Dvar_RegisterInt("OLSLPRNNQN", 1000 * ((unsigned int)(v52 == 1) + 1), 1, 0xFFFF, 0x44u, "The amount of damage melee attacks do to glass");
  v53 = Com_GameMode_GetActiveGameMode();
  DVARFLT_glass_radiusDamageMultiplier = Dvar_RegisterFloat("NLRPPQPSKO", (float)((v53 == 1) + 1) * 4.0, 1.1754944e-38, 3.4028235e38, 0x44u, "The amount to scale damage to glass from grenades and other explosions");
  v54 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v54 = 262276;
  _XMM9 = LODWORD(FLOAT_2000_0);
  _XMM13 = LODWORD(FLOAT_1000_0);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm9, xmm13, xmm2
  }
  DCONST_DVARMPFLT_missileRemoteSpeedUp = Dvar_RegisterFloat("QOKKNNMTL", *(float *)&_XMM0, 0.0, 3.4028235e38, v54, "Remote-controlled missile speedup-factor.");
  v60 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v60 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_missileRemoteSpeedDown = Dvar_RegisterFloat("LQSSSLTKMS", 500.0, 0.0, 3.4028235e38, v60, "Remote-controlled missile slowdown-factor.");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v15 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_5000_0);
  __asm { vblendvps xmm6, xmm0, xmm2, xmm3 }
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm9, xmm2
  }
  DCONST_DVARMPVEC2_missileRemoteSpeedTargetRange = Dvar_RegisterVec2("QLRRRTOMS", *(float *)&_XMM0, *(float *)&_XMM6, 0.0, 3.4028235e38, v15, "Remote-controlled missile speeds.");
  DVARBOOL_missileDebugAttractors = Dvar_RegisterBool("NQPPKORQRP", 0, 0, "Draw the attractors and repulsors.  Attractors are green, and repulsors are yellow.");
  DVARBOOL_veh_drawTrack = Dvar_RegisterBool("LNQTTSRRKQ", 0, 4u, "Debug draw the vehicle tracks");
  v68 = Com_GameMode_GetActiveGameMode();
  DVARINT_vehCam_mode = Dvar_RegisterEnum("NQTPRLSST", vehicleCameraModeNames, v68 != 1, 0x44u, "Camera modes: 1st person, 3rd person, or bot");
  DVARFLT_veh_aiOverSteerScale = Dvar_RegisterFloat("LRSSMKMNRK", 1.0, 0.0, 3.4028235e38, 0x84u, "Scaler used to cause ai vehicles to over steer");
  DVARFLT_veh_nonPhysicsSteerScale = Dvar_RegisterFloat("PNQSKMK", 30.0, 0.0, 3.4028235e38, 0x84u, "Scale the wheel steering of non-physics vehicles by this scaler");
  DVARFLT_veh_explodeForce = Dvar_RegisterFloat("SSPOPPPKN", 800.0, 0.0, 3.4028235e38, 0x44u, "The force applied to physics vehicles due to explosions");
  DVARFLT_vehHelicopterMaxSpeed = Dvar_RegisterFloat("NRRMPSKOKM", 150.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum horizontal speed of the player helicopter (in MPH)");
  DVARFLT_vehHelicopterMaxSpeedVertical = Dvar_RegisterFloat("NKTLMMTTSO", 65.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum vertical speed of the player helicopter (in MPH)");
  DVARFLT_vehHelicopterMaxAccel = Dvar_RegisterFloat("NKQSQTOLR", 45.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum horizontal acceleration of the player helicopter (in MPH per second)");
  DVARFLT_vehHelicopterMaxAccelVertical = Dvar_RegisterFloat("LPLRLNQSTT", 30.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum vertical acceleration of the player helicopter (in MPH per second)");
  DVARFLT_vehHelicopterMaxYawRate = Dvar_RegisterFloat("QRRRRTKOS", 120.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum yaw speed of the player helicopter");
  DVARFLT_vehHelicopterMaxYawAccel = Dvar_RegisterFloat("LMQLPSNMM", 90.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum yaw acceleration of the player helicopter");
  _XMM9 = LODWORD(FLOAT_10_0);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm9, xmm6, xmm2; value
  }
  DVARFLT_vehHelicopterMaxPitch = Dvar_RegisterFloat("LRKNQPQQOR", *(float *)&_XMM1, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum pitch of the player helicopter");
  DVARFLT_vehHelicopterMaxRoll = Dvar_RegisterFloat("MMRSQQSNOO", 35.0, 0.0099999998, 3.4028235e38, 0xC4u, "Maximum roll of the player helicopter");
  DVARFLT_vehHelicopterLookaheadTime = Dvar_RegisterFloat("LOPNQQSOMM", 1.0, 0.0099999998, 3.4028235e38, 0xC4u, "How far ahead (in seconds) the player helicopter looks ahead, to avoid hard collisions.  (Like driving down the highway, you should keep 2 seconds distance between you and the vehicle in front of you)");
  DVARFLT_vehHelicopterHoverSpeedThreshold = Dvar_RegisterFloat("NNORRLOTPL", 400.0, 0.0099999998, 3.4028235e38, 0x84u, "The speed below which the player helicopter begins to jitter the tilt, for hovering");
  DVARFLT_vehHelicopterRightStickDeadzone = Dvar_RegisterFloat("NQMMSMTSOL", 0.30000001, 0.0099999998, 1.0, 0xC4u, "Dead-zone for the axes of the right thumbstick.  This helps to better control the two axes separately.");
  DVARFLT_vehHelicopterStrafeDeadzone = Dvar_RegisterFloat("NOKTRLOMOO", 0.30000001, 0.0099999998, 1.0, 0x84u, "Dead-zone so that you can fly straight forward easily without accidentally strafing (and thus rolling).");
  DVARBOOL_vehHelicopterScaleMovement = Dvar_RegisterBool("NNOMNKNNPO", 1, 0x84u, "Scales down the smaller of the left stick axes.");
  DVARFLT_vehHelicopterPitchOffset = Dvar_RegisterFloat("OLLROQROSQ", 0.0, -180.0, 180.0, 0xC4u, "The resting pitch of the helicopter");
  DVARBOOL_vehHelicopterSoftCollisions = Dvar_RegisterBool("PKKTRROPK", 0, 0xC4u, "Player helicopters have soft collisions (slow down before they collide).");
  DVARFLT_vehHelicopterDecelerationFwd = Dvar_RegisterFloat("MMRNMNQRPN", 0.5, 0.0, 3.4028235e38, 0xC4u, "Set the deceleration of the player helicopter (as a fraction of acceleration) in the direction the chopper is facing.  So 1.0 makes it equal to the acceleration.");
  DVARFLT_vehHelicopterDecelerationSide = Dvar_RegisterFloat("OKROTTPNP", 1.0, 0.0, 3.4028235e38, 0xC4u, "Set the side-to-side deceleration of the player helicopter (as a fraction of acceleration).  So 1.0 makes it equal to the acceleration.");
  DVARFLT_vehHelicopterDecelerationUp = Dvar_RegisterFloat("OLPKNNSQRN", 1.5, 0.0, 3.4028235e38, 0xC4u, "Set the vertical deceleration of the player helicopter (as a fraction of acceleration).  So 1.0 makes it equal to the acceleration.");
  DVARBOOL_vehHelicopterInvertUpDown = Dvar_RegisterBool("MTRLPTRKO", 0, 0xC4u, "Invert the altitude control on the player helicopter.");
  DVARFLT_vehHelicopterYawOnLeftStick = Dvar_RegisterFloat("PMPPLRPTO", 5.0, 0.0, 3.4028235e38, 0xC4u, "The yaw speed created by the left stick when pushing the stick diagonally (e.g., moving forward and strafing slightly).");
  DVARFLT_vehHelicopterTiltSpeed = Dvar_RegisterFloat("MORNLTMPTT", 1.2, 0.0099999998, 3.4028235e38, 0xC4u, "The rate at which the player helicopter's tilt responds");
  DVARFLT_vehHelicopterTiltFromAcceleration = Dvar_RegisterFloat("MMTSTOKMOS", 2.0, 0.0099999998, 3.4028235e38, 0xC4u, "The amount of tilt caused by acceleration");
  DVARFLT_vehHelicopterTiltFromDeceleration = Dvar_RegisterFloat("LTLLTKRPT", 2.0, 0.0, 3.4028235e38, 0xC4u, "The amount of tilt caused by deceleration");
  DVARFLT_vehHelicopterTiltFromVelocity = Dvar_RegisterFloat("LNKSKRPMQL", 1.0, 0.0, 3.4028235e38, 0xC4u, "The amount of tilt caused by the current velocity");
  DVARFLT_vehHelicopterTiltFromControllerAxes = Dvar_RegisterFloat("NMTOMTMKPN", 0.0, 0.0, 3.4028235e38, 0xC4u, "The amount of tilt caused by the desired velocity (i.e., the amount of controller stick deflection)");
  DVARFLT_vehHelicopterTiltFromFwdAndYaw = Dvar_RegisterFloat("LTRPPKRTNT", 0.0, 0.0, 3.4028235e38, 0xC4u, "The amount of roll caused by yawing while moving forward.");
  DVARFLT_vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt = Dvar_RegisterFloat("TPSKTPTSN", 1.0, 0.0, 3.4028235e38, 0xC4u, "The forward speed (as a fraction of top speed) at which the tilt due to yaw reaches is maximum value.");
  DVARFLT_vehHelicopterJitterJerkyness = Dvar_RegisterFloat("LTMPQTLOL", 0.30000001, 0.000099999997, 3.4028235e38, 0xC4u, "Specifies how jerky the tilt jitter should be");
  DVARBOOL_vehHelicopterHeadSwayDontSwayTheTurret = Dvar_RegisterBool("NOSSKQQMLR", 1, 0xC4u, "If set, the turret will not fire through the crosshairs, but straight ahead of the vehicle, when the player is not freelooking.");
  DVARFLT_vehHelicopterTiltMomentum = Dvar_RegisterFloat("LLSQLMTSRM", 0.40000001, 0.000099999997, 3.4028235e38, 0xC4u, "The amount of rotational momentum the helicopter has with regards to tilting.");
  DVARFLT_vehHelicopterBoundsRadius = Dvar_RegisterFloat("NQPPMPOKKS", 50.0, 0.000099999997, 3.4028235e38, 0xC4u, "The radius of the collision volume to be used when colliding with world geometry.");
  DVARBOOL_vehLegacyHeliRotorsDamage = Dvar_RegisterBool("NPOTSKLQMN", 1, 0, "True to enable legacy helicopter rotors to full damage players");
  DCONST_DVARFLT_vehLegacyHeliRotorsExpand = Dvar_RegisterFloat("vehLegacyHeliRotorsExpand", 150.0, 0.0, 3.4028235e38, 0x40004u, "Units to expand in XY plane the legacy helicopter aabb");
  DCONST_DVARBOOL_vehScriptCheckSuspended = Dvar_RegisterBool("vehScriptCheckSuspended", 1, 0x40004u, "If true, it'll check if the vehicle is suspended when calling to any script fuction on it. False will silently return");
  DCONST_DVARFLT_vehTankNoiseSpeedFac = Dvar_RegisterFloat("vehTankNoiseSpeedFac", 15.0, 0.1, 1000.0, 0x40004u, "Movement used to compute suspension noise in the tank will be 0 to 1, being 0 when it's not moving and 1 when reaches this var value.");
  DCONST_DVARFLT_vehTankNoiseMinRpmMovFactor = Dvar_RegisterFloat("vehTankNoiseMinRpmMovFactor", 0.15000001, 0.0, 10.0, 0x40004u, "Minimum suspension noise scale applied to tank vehicles");
  DCONST_DVARFLT_vehTankInertiaFactorRoll = Dvar_RegisterFloat("vehTankInertiaFactorRoll", 1.0, 0.0, 1.0, 0x40004u, "Inertia factor for tank when a collision is detected. Roll axis.");
  DCONST_DVARFLT_vehTankInertiaFactorPitch = Dvar_RegisterFloat("vehTankInertiaFactorPitch", 0.30000001, 0.0, 1.0, 0x40004u, "Inertia factor for tank when a collision is detected. Pitch axis.");
  DCONST_DVARFLT_vehTankInertiaFactorYaw = Dvar_RegisterFloat("vehTankInertiaFactorYaw", 1.0, 0.0, 1.0, 0x40004u, "Inertia factor for tank when a collision is detected. Yaw axis.");
  DCONST_DVARFLT_vehTankMassFactor = Dvar_RegisterFloat("vehTankMassFactor", 1.0, 0.0, 100.0, 0x40004u, "Mass factor for a tank when a collision is detected.");
  DCONST_DVARFLT_vehTankFireForce = Dvar_RegisterFloat("vehTankFireForce", 32000.0, 0.0, 3.4028235e38, 0x40004u, "The force applied to physics vehicles due main turret firing in N.");
  DVARFLT_vehUGVWheelInfluence = Dvar_RegisterFloat("MMKPMKQRQK", 0.30000001, 0.0, 1.0, 0xC4u, "UGV wheel influence on the orientation of the body");
  DVARFLT_vehUGVPitchTrack = Dvar_RegisterFloat("SNNPNOMPT", 6.0, 0.0, 100.0, 0xC4u, "UGV body pitch orientation speed");
  DVARFLT_vehUGVRollTrack = Dvar_RegisterFloat("NKNPTRQPMO", 6.0, 0.0, 100.0, 0xC4u, "UGV body roll orientation speed");
  DVARVEC3_spaceshipAiBoostSpeed = Dvar_RegisterVec3("NRQPMSORQP", 250.0, 120.0, 120.0, 0.0, 10000.0, 0xC4u, "Speed in all directions while boosting.");
  DVARVEC3_spaceshipAiBoostThrust = Dvar_RegisterVec3("MLNMNOQTLK", 450.0, 80.0, 70.0, 0.0, 10000.0, 0xC4u, "Boost acceleration.");
  DVARVEC3_spaceshipAiBoostCounterThrust = Dvar_RegisterVec3("MRSOTNORNS", 20.0, 20.0, 20.0, 0.0, 10000.0, 0xC4u, "Acceleration when pressing direction opposite from velocity.");
  DVARVEC3_spaceshipAiBoostFriction = Dvar_RegisterVec3("LQPLPPRSMS", 57.0, 57.0, 57.0, 0.0, 10000.0, 0xC4u, "Friction while boosting.");
  DVARFLT_spaceshipAiBoostTurnSpeed = Dvar_RegisterFloat("LROTPTPPMO", 60.0, 0.0, 10000.0, 0xC4u, "Max boost turn speed (degrees).");
  DVARFLT_spaceshipAiBoostSpeedScale = Dvar_RegisterFloat("OKOMRMLPOL", 1.5, 0.0, 10.0, 0xC4u, "Speed multiplier while boosting in Fly mode.");
  DVARVEC3_spaceshipAiHoverSpeed = Dvar_RegisterVec3("LKPLTTQPRS", 100.0, 100.0, 100.0, 0.0, 10000.0, 0xC4u, "Speed in hover mode.");
  DVARVEC3_spaceshipAiHoverThrust = Dvar_RegisterVec3("NKOQSTKTMP", 180.0, 180.0, 180.0, 0.0, 10000.0, 0xC4u, "Acceleration in hover mode.");
  DVARVEC3_spaceshipAiHoverCounterThrust = Dvar_RegisterVec3("NTKRRLTPR", 0.0, 0.0, 0.0, 0.0, 10000.0, 0xC4u, "Acceleration when pressing direction opposite from velocity.");
  DVARVEC3_spaceshipAiHoverFriction = Dvar_RegisterVec3("NONQMTOLQR", 57.0, 57.0, 57.0, 0.0, 10000.0, 0xC4u, "Friction in hover mode.");
  DVARFLT_spaceshipAiHoverTurnSpeed = Dvar_RegisterFloat("MRNOLNQPKR", 80.0, 0.0, 10000.0, 0xC4u, "Max hover turn speed (degrees).");
  DVARFLT_spaceshipAiFollowInnerRadius = Dvar_RegisterFloat("MOKSNTSTTQ", 512.0, 0.0, 10000.0, 0xC4u, "Max dist from desired offset to apply inner acceleration");
  DVARFLT_spaceshipAiFollowInnerStrength = Dvar_RegisterFloat("LKPPLQPKSL", 0.2, 0.0, 1.0, 0xC4u, "Acceleration applied within inner distance to follower");
  DVARFLT_spaceshipAiFollowOuterRadius = Dvar_RegisterFloat("MOTPKQKKQN", 2048.0, 0.0, 10000.0, 0xC4u, "Dist at which we use full outer acceleration");
  DVARFLT_spaceshipAiFollowOuterStrength = Dvar_RegisterFloat("NNNRRMTSQQ", 0.5, 0.0, 1.0, 0xC4u, "Acceleration to blend linearly to when outside inner distance");
  DVARFLT_spaceshipAiFlySpeed = Dvar_RegisterFloat("NSLTSLRNL", 7392.0, 0.0, 10000.0, 0xC4u, "Max fly linear speed (inches/sec)");
  DVARFLT_spaceshipAiFlyAccel = Dvar_RegisterFloat("NKRKNQRLKO", 6500.0, 0.0, 10000.0, 0xC4u, "Max fly linear acceleration (inches/sec^2)");
  DVARFLT_spaceshipAiFlyAngSpeed = Dvar_RegisterFloat("LNTOLKOPL", 2.7, 0.0, 10000.0, 0xC4u, "Max fly rotation speed (radians/sec)");
  DVARFLT_spaceshipAiFlyAngAccel = Dvar_RegisterFloat("LPSQPKTSRM", 3.1400001, 0.0, 10000.0, 0xC4u, "Max fly rotation acceleration (radians/sec^2)");
  DVARFLT_spaceshipAiFlyMaxBankSpeed = Dvar_RegisterFloat("LLQKLLKPNN", 2000.0, 0.0, 10000.0, 0xC4u, "Speed at which flying spaceship will bank at max angle (inches/sec)");
  DVARFLT_spaceshipAiFlyMaxBankAngle = Dvar_RegisterFloat("LSNLLPQNON", 3.0, 0.0, 10000.0, 0xC4u, "Max angle flying spaceship will bank (radians)");
  DVARFLT_spaceshipAiFlyMaxBankAccel = Dvar_RegisterFloat("MNNQSMKOOQ", 2000.0, 0.0, 10000.0, 0xC4u, "Acceleration at which flying spaceship will bank at max angle (inches/sec)");
  DVARFLT_spaceshipAiHoverSpeedNew = Dvar_RegisterFloat("MOTTKKLTLO", 1760.0, 0.0, 10000.0, 0xC4u, "Max hover linear speed (inches/sec)");
  DVARFLT_spaceshipAiHoverAccel = Dvar_RegisterFloat("NRNLOMPNKP", 880.0, 0.0, 10000.0, 0xC4u, "Max hover linear acceleration (units/sec^2)");
  DVARFLT_spaceshipAiHoverAngSpeed = Dvar_RegisterFloat("OOKRQLOQM", 3.1400001, 0.0, 10000.0, 0xC4u, "Max hover rotation speed (radians/sec)");
  DVARFLT_spaceshipAiHoverAngAccel = Dvar_RegisterFloat("NTMTNSTKL", 3.1400001, 0.0, 10000.0, 0xC4u, "Max hover rotation acceleration (radians/sec^2)");
  DVARFLT_spaceshipAiHoverMaxBankSpeed = Dvar_RegisterFloat("QPQLMOSLQ", 1200.0, 0.0, 10000.0, 0xC4u, "Speed at which spaceship will bank at max angle (inches/sec)");
  DVARFLT_spaceshipAiHoverMaxBankAngle = Dvar_RegisterFloat("NLPMNRKMQQ", 0.78500003, 0.0, 10000.0, 0xC4u, "Max angle hovering spaceship will bank (radians)");
  DVARFLT_spaceshipAiBankingAccelerationRatio = Dvar_RegisterFloat("LQOKKRNMPO", 0.80000001, 0.0, 1.0, 0xC4u, "Ratio of banking vector that comes from acceleration instead of velocity");
  DVARFLT_spaceshipAiHoverMaxBankAccel = Dvar_RegisterFloat("MMMOQPNKSN", 880.0, 0.0, 10000.0, 0xC4u, "Acceleration at which hovering spaceship will bank at max angle (inches/sec)");
  DVARBOOL_spaceshipAiUseNewSteering = Dvar_RegisterBool("NOMLSKNOST", 1, 0xC4u, "Whether to use the new spaceship system logic");
  DVARFLT_dogfightPilotInitialStrength = Dvar_RegisterFloat("LMOTRRMRSO", 1.0, 0.0, 1.0, 0xC4u, "Initial player strength when entering dogfight mode");
  DVARFLT_dogfightPilotInitialStrengthRampTime = Dvar_RegisterFloat("NTRPQQTTKR", 0.0, 0.0, 100.0, 0xC4u, "How many seconds before player has full control of their craft when entering dogfight mode");
  DVARFLT_dogfightPilotInitialStrengthHoldTime = Dvar_RegisterFloat("MMNMKPMOTO", 0.0, 0.0, 100.0, 0xC4u, "How many seconds before the strength starts to ramp back up to full.");
  DVARBOOL_spaceshipAiDebugTurns = Dvar_RegisterBool("LPLKRMPPQS", 0, 4u, "Enable to debug spaceship turns");
  DVARBOOL_spaceshipAiDebugCollision = Dvar_RegisterBool("PKKTTSMOS", 0, 4u, "Enable to debug spaceship collision");
  DVARFLT_spaceshipAiMinFlySpeed = Dvar_RegisterFloat("OKPQOMKKOT", 1760.0, 0.0, 10000.0, 0xC0u, "Speed below which the jackal will automatically transition into hover");
  DVARFLT_spaceshipAiMinFlyAngleDot = Dvar_RegisterFloat("ONMTRSNOS", -0.70710599, -1.0, 1.0, 0xC0u, "Dot between forward and desired forward below which the jackal will automatically transition into hover");
  DVARBOOL_spaceshipDebugSpread = Dvar_RegisterBool("NQLMKLSRLT", 0, 0, "Draws a circle for the spread oflockon for a weapon");
  DVARINT_spaceshipDebugMotionBlender = Dvar_RegisterInt("LQLKPOMSTS", -1, -1, 2047, 0, "Display motion blender debug data.");
  DVARBOOL_spaceshipDebugAimTracking = Dvar_RegisterBool("OLTOSRLRMS", 0, 0, "Turns on debug info for aim tracking.");
  DVARBOOL_dogfightDebugShowAvoidanceTraces = Dvar_RegisterBool("TLRLMOTSL", 0, 0, "Turns on visible traces for the autopilot avoidance..");
  DVARBOOL_dogfightDebugShowAvoidanceDoppler = Dvar_RegisterBool("PKTLMONOR", 1, 0, "Shows doppler returns for the autopilot avoidance");
  DVARINT_ai_count = Dvar_RegisterInt("LKLKQRQLQP", 38, 0, 38, 0xC4u, "Maximum number of AI");
  DVARFLT_ai_dangerReactGoalRadius = Dvar_RegisterFloat("MLLPKKKPPN", 512.0, 0.0, 3.4028235e38, 0x84u, "Goal radius to use when reacting to danger");
  DVARFLT_ai_frontShieldDamageReduction = Dvar_RegisterFloat("SKPRMRNO", 0.89999998, 0.0, 1.0, 0x84u, "Non bullet damage reduction for AI with front shield getting hit within shield angle. (bullets do 0 damage if blocked by shield)");
  DVARFLT_ai_friendlySuppressionDist = Dvar_RegisterFloat("MPRRKQTLTO", 128.0, 0.0, 2048.0, 0xC4u, "Max distance at which AI suppress teammates");
  DCONST_DVARINT_ai_threatUpdateInterval = Dvar_RegisterInt("ai_threatUpdateInterval", 500, 0, 0x7FFFFFFF, 0x40004u, "AI target threat update interval in milliseconds");
  DVARFLT_ai_foliageSeeThroughDist = Dvar_RegisterFloat("MRMLLTQQN", 128.0, 0.0, 3.4028235e38, 0x40u, "Maximum distance AI ignore foliage for sight trace to targets");
  DCONST_DVARFLT_ai_pathNegotiationOverlapCost = Dvar_RegisterFloat("ai_pathNegotiationOverlapCost", 300.0, 0.0, 1000.0, 0x40004u, "The distance AI would travel around to avoid going to a negotiation being used. Multiplied by number of users of the negotiation");
  DCONST_DVARFLT_ai_pathChokePointCost = Dvar_RegisterFloat("ai_pathChokePointCost", 1024.0, 0.0, 3.4028235e38, 0x40004u, "The distance AI would travel around to randomly avoid going through a choke point.");
  DCONST_DVARINT_ai_pathRandomPercent = Dvar_RegisterInt("ai_pathRandomPercent", 50, 0, 200, 0x40004u, "Amount of random cost percent to add to each path node so AI always take slightly different routes");
  DCONST_DVARFLT_ai_playerNearAccuracy = Dvar_RegisterFloat("ai_playerNearAccuracy", 0.5, 0.0, 1.0, 0x40004u, "Accuracy for an AI near to a player");
  DCONST_DVARFLT_ai_playerNearRange = Dvar_RegisterFloat("ai_playerNearRange", 800.0, 0.0, 3.4028235e38, 0x40004u, "Maximum range for AI to use 'near' accuracy");
  DCONST_DVARFLT_ai_playerFarAccuracy = Dvar_RegisterFloat("ai_playerFarAccuracy", 0.1, 0.0, 1.0, 0x40004u, "Accuracy for AI far away from the player");
  DCONST_DVARFLT_ai_playerFarRange = Dvar_RegisterFloat("ai_playerFarRange", 2000.0, 0.0, 3.4028235e38, 0x40004u, "Minimum range for AI to use 'far' accuracy");
  DCONST_DVARBOOL_ai_useNavActorPhysics = Dvar_RegisterBool("ai_useNavActorPhysics", 1, 0x40004u, "Whether to use the new navmesh based actor physics");
  DCONST_DVARFLT_ai_walk_pathSmoothTurnSpeed = Dvar_RegisterFloat("ai_walk_pathSmoothTurnSpeed", 3.0, 0.1, 360.0, 0x40004u, "Max degrees per frame that an AI's path direction will change.");
  DCONST_DVARBOOL_ai_useCombatLine = Dvar_RegisterBool("ai_useCombatLine", 1, 0x40004u, "Whether to use the combat line in threat calculations");
  DVARBOOL_ai_threatSight = Dvar_RegisterBool("OKQTSOMTKT", 0, 0x40u, "AI Threat sight system enabled/disabled");
  DVARBOOL_ai_threatSightDisplay = Dvar_RegisterBool("NPQNNOSNNL", 0, 0x40u, "AI Threat meter visual");
  DCONST_DVARFLT_ai_threatSightDisplayShadow = Dvar_RegisterFloat("ai_threatSightDisplayShadow", 1.0, 0.0, 3.4028235e38, 0x40004u, "Offset of threat meter black shadow");
  DVARFLT_ai_threatSightDisplaySpikePoint = Dvar_RegisterFloat("RSKOMONOR", 0.0099999998, 0.0, 1.0, 0x40u, "AI Threat meter spikes sharply beneath this value then lerps from there to 1 over the remainder");
  DVARFLT_ai_threatSightDisplaySpikeValue = Dvar_RegisterFloat("NLLTMQRSKS", 0.1, 0.0, 1.0, 0x40u, "AI Threat meter spikes sharply to this value");
  DVARINT_ai_threatSightDisplayNoise = Dvar_RegisterInt("NPOTLRLSMP", 0, 0, 100, 0x40u, "AI Threat meter has this much noise to it");
  DVARINT_ai_threatSightDisplayColor = Dvar_RegisterInt("NNROTNMLKQ", 5, 0, 11, 0x40u, "AI threat meter alert color index (matches HUD outline color indexes)");
  DCONST_DVARFLT_ai_threatSightFalloffDelay = Dvar_RegisterFloat("ai_threatSightFalloffDelay", 2.0, 0.0, 3.4028235e38, 0x40004u, "Amount of time threat is not visible before falling off (seconds)");
  DCONST_DVARFLT_ai_threatSightFalloff = Dvar_RegisterFloat("ai_threatSightFalloff", 0.25, 0.0, 3.4028235e38, 0x40004u, "Falloff rate when not seeing threat");
  DVARFLT_ai_threatSightFacingScaleDot = Dvar_RegisterFloat("NTMTQTQOLK", 0.0, -1.0, 1.0, 0x40u, "Cos() of field of view degrees defining outer edge of player fov for facing tests");
  DVARFLT_ai_threatSightFacingScale = Dvar_RegisterFloat("LOTQPOLOOP", 0.5, -1.0, 3.4028235e38, 0x40u, "Rate scale at out outer edge of player's ai_threatSightFacingScaleDot (< 0 to disable)");
  DCONST_DVARFLT_ai_threatSightObscuredScale = Dvar_RegisterFloat("ai_threatSightObscuredScale", 0.5, -1.0, 3.4028235e38, 0x40004u, "Amount being partially hidden behind cover or leaning out affects sighting rate (< 0 to disable)");
  DCONST_DVARFLT_ai_threatSightPeriphScale = Dvar_RegisterFloat("ai_threatSightPeriphScale", 0.5, -1.0, 3.4028235e38, 0x40004u, "Amount being on the AI's periphery affects sighting rate (< 0 to disable)");
  DCONST_DVARFLT_ai_threatSightMoveScale = Dvar_RegisterFloat("ai_threatSightMoveScale", 0.5, -1.0, 3.4028235e38, 0x40004u, "Amount being on the move affects sighting rate. < 0 means to disable");
  DVARBOOL_ai_threatSightDisplayTest = Dvar_RegisterBool("LTOSPPOTSP", 0, 4u, "Dev only test of threat meter display from origin (0, 0, 0)");
  DVARFLT_ai_threatSightFakeThreat = Dvar_RegisterFloat("LONMKRQKOM", 0.0, 0.0, 1.0, 0x40u, "Set to something > 0.0 to simulate threat coming from a point (for tutorial purposes)");
  DVARFLT_ai_threatSightFakeX = Dvar_RegisterFloat("LTQTQNSRQK", 0.0, -3.4028235e38, 3.4028235e38, 0x40u, "X coordinate for ai_threatsightFakeThreat");
  DVARFLT_ai_threatSightFakeY = Dvar_RegisterFloat("OKOMMPSLTN", 0.0, -3.4028235e38, 3.4028235e38, 0x40u, "Y coordinate for ai_threatsightFakeThreat");
  DVARFLT_ai_threatSightFakeZ = Dvar_RegisterFloat("LSLTTLKNNK", 0.0, -3.4028235e38, 3.4028235e38, 0x40u, "Z coordinate for ai_threatsightFakeThreat");
  DCONST_DVARINT_ai_showNavMesh = Dvar_RegisterEnum("ai_showNavMesh", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav mesh.");
  DCONST_DVARBOOL_ai_showNavPhysics = Dvar_RegisterBool("ai_showNavPhysics", 0, 0x40004u, "Display nav physics trace attempts.");
  DCONST_DVARBOOL_ai_useLegacyGroundTrace = Dvar_RegisterBool("ai_useLegacyGroundTrace", 0, 0x40004u, "Use the old actor ground trace.");
  DCONST_DVARINT_ai_showNavVolumes = Dvar_RegisterEnum("ai_showNavVolumes", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav volumes.");
  DCONST_DVARINT_ai_testNavVolumes = Dvar_RegisterInt("ai_testNavVolumes", 0, 0, 1, 0x40004u, "Tests if the player is in a nav volume.");
  DCONST_DVARFLT_ai_testNav3DReachable = Dvar_RegisterFloat("ai_testNav3DReachable", 0.0, 0.0, 2048.0, 0x40004u, "Test reachability within the 3D nav volumes, this distance straight ahead from the player's eyes");
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
  DCONST_DVARINT_ai_showNavVolPortals = Dvar_RegisterEnum("ai_showNavVolPortals", AI_SHOW_NAV_STRINGS, 0, 0x40004u, "Display nav volume portals.");
  DCONST_DVARFLT_ai_shownavdist = Dvar_RegisterFloat("ai_shownavdist", 2048.0, 0.0, 40000.0, 0x40004u, "Max dist to draw nav debug lines.");
  DCONST_DVARBOOL_ai_showBfxPath = Dvar_RegisterBool("ai_showBfxPath", 0, 0x40004u, "Display bfx path.");
  DCONST_DVARBOOL_ai_debugLinkWeights = Dvar_RegisterBool("ai_debugLinkWeights", 0, 0x40004u, "Display modified link weights.");
  DCONST_DVARFLT_ai_shotgunMissMin = Dvar_RegisterFloat("ai_shotgunMissMin", 0.30000001, 0.0, 1.0, 0x40004u, "The min amount shotgun AI can miss (0 is direct hit, 1.0 is full miss)");
  DCONST_DVARFLT_ai_shotgunMissMax = Dvar_RegisterFloat("ai_shotgunMissMax", 0.69999999, 0.0, 1.5, 0x40004u, "The max amount shotgun AI can miss (0 is direct hit, 1.0 is full miss, >1.0 is higher chance of full miss)");
  DCONST_DVARFLT_ai_leanScalar = Dvar_RegisterFloat("ai_leanScalar", 1.0, 0.0, 1.0, 0x40004u, "Scalar applied to additive lean anim.");
  DCONST_DVARFLT_ai_cornerSlowDownDistance = Dvar_RegisterFloat("ai_cornerSlowDownDistance", 100.0, 0.0, 3.4028235e38, 0x40004u, "Distance from a corner where AI will potentially start slowing down");
  DCONST_DVARFLT_ai_minVelocityForTurnSlowdown = Dvar_RegisterFloat("ai_minVelocityForTurnSlowdown", 10.0, 1.0, 3.4028235e38, 0x40004u, "Min velocity AI has to be going before we try to slow him down for turns");
  DCONST_DVARFLT_ai_tightQuartersLookaheadDistance = Dvar_RegisterFloat("ai_tightQuartersLookaheadDistance", 200.0, 1.0, 3.4028235e38, 0x40004u, "How far ahead AI looks to start reacting to tight quarters");
  DCONST_DVARFLT_ai_minTurnAngleForSpeedScaling = Dvar_RegisterFloat("ai_minTurnAngleForSpeedScaling", 35.0, 1.0, 180.0, 0x40004u, "Min turn angle before speed scaling will kick in");
  DCONST_DVARFLT_ai_minTurnAngleForTightQuartersSpeedScaling = Dvar_RegisterFloat("ai_minTurnAngleForTightQuartersSpeedScaling", 20.0, 1.0, 180.0, 0x40004u, "Min turn angle before speed scaling will kick in for tight quarters");
  DCONST_DVARFLT_ai_maxTurnAngleForSpeedScaling = Dvar_RegisterFloat("ai_maxTurnAngleForSpeedScaling", 135.0, 1.0, 180.0, 0x40004u, "Max turn angle that will be used in speed scaling calculations");
  DCONST_DVARFLT_ai_tightCornerSpeedMultiplier = Dvar_RegisterFloat("ai_tightCornerSpeedMultiplier", 0.85000002, 0.1, 1.0, 0x40004u, "Speed multiplier to use when the AI is making a corner in a tight space");
  DCONST_DVARFLT_ai_maxSpeedDuringTightQuartersSlowDown = Dvar_RegisterFloat("ai_maxSpeedDuringTightQuartersSlowDown", 170.0, 10.0, 250.0, 0x40004u, "Max speed AI will travel when taking a corner in tight spaces");
  DCONST_DVARFLT_ai_nearEdgeCornerSpeedMultiplier = Dvar_RegisterFloat("ai_nearEdgeCornerSpeedMultiplier", 0.94999999, 0.1, 1.0, 0x40004u, "Speed multiplier to use when the AI is making a corner near the edge of the nav mesh");
  DCONST_DVARFLT_ai_minSpeedForCombatCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minSpeedForCombatCornerSlowDownMultiplier", 140.0, 10.0, 250.0, 0x40004u, "Anything above this speed will use combat corner speed scaling");
  DCONST_DVARFLT_ai_minCombatCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minCombatCornerSlowDownMultiplier", 0.89999998, 0.1, 1.0, 0x40004u, "Combat speed multiplier to use at point where AI starts slowing down for a corner");
  DCONST_DVARFLT_ai_maxCombatCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_maxCombatCornerSlowDownMultiplier", 0.85000002, 0.1, 1.0, 0x40004u, "Combat speed multiplier to use at point where AI stops slowing down for a corner");
  DCONST_DVARFLT_ai_minSpeedForCQBCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minSpeedForCQBCornerSlowDownMultiplier", 90.0, 10.0, 250.0, 0x40004u, "Anything above this speed will use CQB corner speed scaling");
  DCONST_DVARFLT_ai_minCombatCQBCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minCombatCQBCornerSlowDownMultiplier", 0.80000001, 0.1, 1.0, 0x40004u, "CQB speed multiplier to use at point where AI starts slowing down for a corner");
  DCONST_DVARFLT_ai_maxCombatCQBCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_maxCombatCQBCornerSlowDownMultiplier", 0.5, 0.1, 1.0, 0x40004u, "CQB speed multiplier to use at point where AI stops slowing down for a corner");
  DCONST_DVARFLT_ai_minStrafeCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_minStrafeCornerSlowDownMultiplier", 0.89999998, 0.1, 1.0, 0x40004u, "Speed multiplier to use at point where AI starts slowing down for a corner when strafing");
  DCONST_DVARFLT_ai_maxStrafeCornerSlowDownMultiplier = Dvar_RegisterFloat("ai_maxStrafeCornerSlowDownMultiplier", 0.69999999, 0.1, 1.0, 0x40004u, "Speed multiplier to use at point where AI stops slowing down for a corner when strafing");
  DCONST_DVARFLT_ai_minTightQuartersCornerSlowDownStrafeMultiplier = Dvar_RegisterFloat("ai_minTightQuartersCornerSlowDownStrafeMultiplier", 0.89999998, 0.1, 1.0, 0x40004u, "Speed multiplier to use at point where AI starts slowing down for a corner when strafing");
  DCONST_DVARFLT_ai_maxTightQuartersCornerSlowDownStrafeMultiplier = Dvar_RegisterFloat("ai_maxTightQuartersCornerSlowDownStrafeMultiplier", 0.60000002, 0.1, 1.0, 0x40004u, "Speed multiplier to use at point where AI stops slowing down for a corner when strafing");
  DCONST_DVARFLT_ai_minCornerSpeedScalingMultiplier = Dvar_RegisterFloat("ai_minCornerSpeedScalingMultiplier", 0.5, 0.1, 1.0, 0x40004u, "The lowest possible speed multiplier that can be applied to desired speed when taking a corner");
  DCONST_DVARFLT_ai_maxSpeedDuringCombatCornerSlowDown = Dvar_RegisterFloat("ai_maxSpeedDuringCombatCornerSlowDown", 170.0, 10.0, 250.0, 0x40004u, "Max speed AI will travel at when taking a combat corner");
  DCONST_DVARFLT_ai_maxSpeedDuringCQBCornerSlowDown = Dvar_RegisterFloat("ai_maxSpeedDuringCQBCornerSlowDown", 110.0, 10.0, 250.0, 0x40004u, "Max speed AI will travel at when taking a CQB corner");
  DCONST_DVARFLT_ai_maxSpeedDuringCautiousCornerSlowDown = Dvar_RegisterFloat("ai_maxSpeedDuringCautiousCornerSlowDown", 75.0, 10.0, 250.0, 0x40004u, "Max speed AI will travel at when taking a cautious corner");
  DCONST_DVARFLT_ai_maxSpeedDuringStrafeCornerSlowDown = Dvar_RegisterFloat("ai_maxSpeedDuringStrafeCornerSlowDown", 110.0, 10.0, 250.0, 0x40004u, "Max speed AI will travel at when taking a strafe corner");
  DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing = Dvar_RegisterFloat("ai_maxSpeedForForcedCornerStrafing", 60.0, 10.0, 250.0, 0x40004u, "AI moving under this speed will be forced into corner strafing if not close to a cover node goal");
  DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing = Dvar_RegisterFloat("ai_minDistanceFromGoalForForcedCornerStrafing", 96.0, 5.0, 250.0, 0x40004u, "AI won't force corner strafing if their goal is a cover node and less than this distance away");
  DCONST_DVARFLT_ai_minSpeedDuringCombatCornerSlowDown = Dvar_RegisterFloat("ai_minSpeedDuringCombatCornerSlowDown", 80.0, 10.0, 250.0, 0x40004u, "Min speed AI will travel at when taking a combat corner");
  DCONST_DVARFLT_ai_minSpeedDuringCQBCornerSlowDown = Dvar_RegisterFloat("ai_minSpeedDuringCQBCornerSlowDown", 40.0, 10.0, 250.0, 0x40004u, "Min speed AI will travel at when taking a CQB corner");
  DCONST_DVARFLT_ai_minSpeedDuringCautiousCornerSlowDown = Dvar_RegisterFloat("ai_minSpeedDuringCautiousCornerSlowDown", 30.0, 10.0, 250.0, 0x40004u, "Min speed AI will travel at when taking a cautious corner");
  DCONST_DVARFLT_ai_minSpeedDuringStrafeCornerSlowDown = Dvar_RegisterFloat("ai_minSpeedDuringStrafeCornerSlowDown", 40.0, 10.0, 250.0, 0x40004u, "Min speed AI will travel at when taking a strafe corner");
  DCONST_DVARFLT_ai_maxSpeedDeltaUp = Dvar_RegisterFloat("ai_maxSpeedDeltaUp", 20.0, 1.0, 100.0, 0x40004u, "Max accel speed when scaling AI speed");
  DCONST_DVARFLT_ai_maxSpeedDeltaUpCautious = Dvar_RegisterFloat("ai_maxSpeedDeltaUpCautious", 10.0, 1.0, 100.0, 0x40004u, "Max accel speed when scaling AI speed when in cautious navigation");
  DCONST_DVARFLT_ai_maxSpeedDeltaDown = Dvar_RegisterFloat("ai_maxSpeedDeltaDown", 30.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed");
  DCONST_DVARFLT_ai_maxSpeedDeltaDownCautious = Dvar_RegisterFloat("ai_maxSpeedDeltaDownCautious", 15.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed when in cautious navigation");
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCorners = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCorners", 15.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed around a corner");
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForPathEnd = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForPathEnd", 20.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed at a path end");
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousCorners = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCautiousCorners", 15.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed when in cautious navigation");
  DCONST_DVARFLT_ai_maxSpeedDeltaDownForCautiousPathEnd = Dvar_RegisterFloat("ai_maxSpeedDeltaDownForCautiousPathEnd", 20.0, 1.0, 100.0, 0x40004u, "Max decel speed when scaling AI speed at a path end in cautious navigation");
  DCONST_DVARINT_ai_maxBoundingOverwatchMovingAI = Dvar_RegisterInt("ai_maxBoundingOverwatchMovingAI", 3, 1, 24, 0x40004u, "The max number of AI in an area that can move if they have bounding overwatch active");
  DCONST_DVARINT_ai_maxSquadBoundingOverwatchMovingAI = Dvar_RegisterInt("ai_maxSquadBoundingOverwatchMovingAI", 2, 1, 24, 0x40004u, "The max number of AI in a squad that can move if they have bounding overwatch active");
  DCONST_DVARFLT_ai_boundingOverwatchGoalProximity = Dvar_RegisterFloat("ai_boundingOverwatchGoalProximity", 400.0, 1.0, 2000.0, 0x40004u, "Max distance from goal node to pull back on bounding overwatch logic");
  DVARBOOL_ai_debugBoundingOverwatch = Dvar_RegisterBool("LNTRTRTLS", 0, 4u, "Display debug info for bounding overwatch");
  DCONST_DVARBOOL_ai_enableAvoidanceBlocking = Dvar_RegisterBool("ai_enableAvoidanceBlocking", 1, 0x40004u, "Allow AI to be blocked from avoidance results");
  DVARFLT_ai_movementDefaultSpeed = Dvar_RegisterFloat("OLLLOORPLR", 170.0, 0.0, 250.0, 0x40u, "Default combat movement speed");
  DVARFLT_ai_movementHotDefaultSpeed = Dvar_RegisterFloat("TOSNQMPOM", 220.0, 0.0, 250.0, 0x40u, "Default combat movement speed when hot");
  DVARFLT_ai_maxSpeedForCautiousNavigation = Dvar_RegisterFloat("NMNLSMPRNL", 90.0, 10.0, 250.0, 0xC0u, "AI will be forced to this speed when cautiousNavigation is enabled");
  DVARBOOL_ai_hotCombatSpeedEnabled = Dvar_RegisterBool("LQPTMLQPPN", 0, 0x40u, "Default speed for AI in hot combat will use the hot combat speed when this is true");
  DVARBOOL_ai_aimCleanMissEnabled = Dvar_RegisterBool("LRMNRMPTRL", 1, 0x40u, "Allow server side bullet traces to be bypassed when a bullet misses");
  DCONST_DVARFLT_ai_aimCleanMissDisableRate = Dvar_RegisterFloat("ai_aimCleanMissDisableRate", 0.050000001, 0.0, 1.0, 0x40004u, "Chance that a clean miss will still do the full server side bullet processing");
  DVARBOOL_ai_enableExecutionVictim = Dvar_RegisterBool("NORNSLNQRN", 1, 0xC0u, "Allow AI to be executed by the player.");
  DVARBOOL_ai_enableExecutionAttacker = Dvar_RegisterBool("NPNKSMTKOQ", 1, 0xC0u, "Allow AI to perform executions on the player.");
  DCONST_DVARINT_ai_navMeshLayerToShow = Dvar_RegisterEnum("ai_navMeshLayerToShow", NAVMESH_LAYER_STRINGS, 0, 0x40004u, "Which layer of the nav mesh to show.");
  DVARBOOL_ai_iw7 = Dvar_RegisterBool("LPNQTQRRP", 1, 0xC0u, "Set for shiny new iw7 AI.  Requires map restart.");
  DVARBOOL_ai_debugMayMove = Dvar_RegisterBool("LSTMMPSTRL", 0, 4u, "Display debug information for AI 'may move' calculations");
  DVARBOOL_ai_debugGunBlocked = Dvar_RegisterBool("LTMONNKSSN", 0, 4u, "Show gun blocked by wall traces");
  DCONST_DVARBOOL_ai_useOrca = Dvar_RegisterBool("ai_useOrca", 1, 0x40004u, "Set for new ORCA avoidance.");
  DVARINT_path_nodeInfoType = Dvar_RegisterEnum("MMRORMNPR", PATH_NODE_INFO_STRINGS, 0, 4u, "Path node information type");
  DVARINT_ai_showNodes = Dvar_RegisterEnum("MQQMPTRKOQ", AI_SHOW_NODES_STRINGS, 0, 4u, "Show AI navigation node debug information");
  DVARFLT_ai_showNodesDist = Dvar_RegisterFloat("MOTONLTSQO", 500.0, 0.0, 3.4028235e38, 4u, "Maximum distance from the camera at which AI nodes are shown");
  DVARINT_ai_showNearbyNodes = Dvar_RegisterInt("MSRMTMTMRR", 0, 0, 0x7FFFFFFF, 4u, "Show nearby nodes");
  DVARBOOL_ai_showNearestNodes = Dvar_RegisterBool("MRPNTSRQLQ", 0, 4u, "Show nearest node of AI");
  DVARBOOL_ai_showAmbushNodes = Dvar_RegisterBool("LRPRSMTRKM", 0, 4u, "Show ambush nodes AI is considering");
  DVARINT_ai_showNodesFilter = Dvar_RegisterEnum("MRORRQQOQQ", AI_SHOW_NODES_FILTER_STRINGS, 0, 4u, "Filter node display.");
  DVARINT_ai_showPaths = Dvar_RegisterEnum("NLTNQSRTQR", AI_SHOW_PATHS_STRINGS, 0, 4u, "Show AI navigation paths.  Note: Each subsequent option for this dvar includes all options below it.");
  DVARBOOL_ai_showPathsOnlyActors = Dvar_RegisterBool("NSRQLOQPNL", 0, 4u, "If enabled, will only draw AI paths for actors (not vehicles)");
  DVARBOOL_ai_showPathFindNodes = Dvar_RegisterBool("NSQRTPQSSQ", 0, 4u, "Show nodes consider in latest path find");
  DVARINT_ai_showVisData = Dvar_RegisterEnum("NQNNQOTLPR", AI_VIS_DATA_STRINGS, 0, 4u, "Display debug information for visibility data");
  DVARFLT_ai_showVisDataDist = Dvar_RegisterFloat("LNMNQMNONP", 400.0, 0.0, 3.4028235e38, 4u, "Maximum distance for visibility data debugging information to be shown");
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
  DVARBOOL_ai_whereshouldiface = Dvar_RegisterBool("LLKNKKLMPS", 0, 4u, "Display info for what direction a guy should face");
  DVARFLT_ai_eventDistFootstep = Dvar_RegisterFloat("ai_eventDistFootstep", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistFootstepWalk = Dvar_RegisterFloat("ai_eventDistFootstepWalk", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistFootstepSprint = Dvar_RegisterFloat("ai_eventDistFootstepSprint", 400.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistNewEnemy = Dvar_RegisterFloat("ai_eventDistNewEnemy", 512.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistPain = Dvar_RegisterFloat("ai_eventDistPain", 512.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistDeath = Dvar_RegisterFloat("ai_eventDistDeath", 1024.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistExplosion = Dvar_RegisterFloat("ai_eventDistExplosion", 1024.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistGrenadePing = Dvar_RegisterFloat("ai_eventDistGrenadePing", 512.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistProjPing = Dvar_RegisterFloat("ai_eventDistProjPing", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistGunShot = Dvar_RegisterFloat("ai_eventDistGunShot", 1024.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistGunShotTeam = Dvar_RegisterFloat("ai_eventDistGunShotTeam", 1024.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistSilencedShot = Dvar_RegisterFloat("ai_eventDistSilencedShot", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistGlassDestroyed = Dvar_RegisterFloat("ai_eventDistGlassDestroyed", 384.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_128_0);
  __asm { vblendvps xmm1, xmm0, xmm9, xmm2; value }
  DVARFLT_ai_eventDistBullet = Dvar_RegisterFloat("ai_eventDistBullet", *(float *)&_XMM1, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistProjImpact = Dvar_RegisterFloat("ai_eventDistProjImpact", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_eventDistBadPlace = Dvar_RegisterFloat("ai_eventDistBadPlace", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistFootstep = Dvar_RegisterFloat("ai_busyEventDistFootstep", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistFootstepWalk = Dvar_RegisterFloat("ai_busyEventDistFootstepWalk", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistFootstepSprint = Dvar_RegisterFloat("ai_busyEventDistFootstepSprint", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistNewEnemy = Dvar_RegisterFloat("ai_busyEventDistNewEnemy", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistPain = Dvar_RegisterFloat("ai_busyEventDistPain", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistDeath = Dvar_RegisterFloat("ai_busyEventDistDeath", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistExplosion = Dvar_RegisterFloat("ai_busyEventDistExplosion", 1024.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistGrenadePing = Dvar_RegisterFloat("ai_busyEventDistGrenadePing", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistProjPing = Dvar_RegisterFloat("ai_busyEventDistProjPing", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistGunShot = Dvar_RegisterFloat("ai_busyEventDistGunShot", 400.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  _XMM13 = LODWORD(FLOAT_128_0);
  DVARFLT_ai_busyEventDistGunShotTeam = Dvar_RegisterFloat("ai_busyEventDistGunShotTeam", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistSilencedShot = Dvar_RegisterFloat("ai_busyEventDistSilencedShot", 128.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistGlassDestroyed = Dvar_RegisterFloat("ai_busyEventDistGlassDestroyed", 384.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm13, xmm9, xmm2; value
  }
  DVARFLT_ai_busyEventDistBullet = Dvar_RegisterFloat("ai_busyEventDistBullet", *(float *)&_XMM1, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_ai_busyEventDistProjImpact = Dvar_RegisterFloat("ai_busyEventDistProjImpact", 256.0, 0.0, 3.4028235e38, 0xC4u, "Distance used for AI event");
  DVARFLT_agent_jumpSpeed = Dvar_RegisterFloat("MOPKPNPQMQ", 1.0, 0.0, 3.4028235e38, 0x40u, "Agent jump speed");
  DVARFLT_agent_jumpWallSpeed = Dvar_RegisterFloat("NQNNRQPRQS", 1.12, 0.0, 3.4028235e38, 0x40u, "Agent jump speed when jumping on to a wall");
  DVARFLT_agent_jumpGravity = Dvar_RegisterFloat("NOPSKSKPKN", 1550.0, 0.0, 3.4028235e38, 0x40u, "Agent jump gravity");
  DVARFLT_agent_jumpWallGravity = Dvar_RegisterFloat("LTMRSONLKT", 1100.0, 0.0, 3.4028235e38, 0x40u, "Agent jump gravity when jumping on to a wall");
  DVARBOOL_ai_enabled = Dvar_RegisterBool("MQPPSRLRRT", 1, 0x84u, "Enable AI");
  DVARBOOL_ai_animscript = Dvar_RegisterBool("LMLLOOSLMM", 1, 0x84u, "Enable AI animscript");
  DVARBOOL_ai_spawn = Dvar_RegisterBool("MPOKQTKRMP", 1, 0x86u, "Enable AI spawning");
  DVARINT_ai_forceEnableEntIndex = Dvar_RegisterInt("PPMRKTLPL", -1, -1, 2047, 4u, "Entity index of an entity to force as enabled even if ai_enabled dvar is set to false");
  DVARFLT_ai_maxGrenadeThrowSpeed = Dvar_RegisterFloat("LMKNOLTSQT", 850.0, 0.0, 3.4028235e38, 0xC4u, "Maximum AI grenade throw speed");
  DVARFLT_ai_accuracyDistScale = Dvar_RegisterFloat("MPMOMLLQSP", 1.0, 1.1754944e-38, 3.4028235e38, 0xC4u, "Distance scale for AI accuracy calculations. Higher = less accurate");
  DVARBOOL_ai_debugAccuracy = Dvar_RegisterBool("MNMSQTRSSM", 0, 4u, "Enable debugging information for accuracy");
  DVARFLT_ai_accuracy_attackerCountDecrease = Dvar_RegisterFloat("OKQKNQRTTS", 0.75, 0.1, 1.0, 0xC4u, "Accuracy multiplied by this number for each additional attacker upto ai_accuracy_attackerCountMax");
  DVARINT_ai_accuracy_attackerCountMax = Dvar_RegisterInt("MKLRMMOTSO", 4, 0, 0x7FFFFFFF, 0xC4u, "Accuracy multiplied by ai_accuracy_attackerCountDecrease for each additional attacker upto this");
  DVARINT_ai_debugCoverSelection = Dvar_RegisterEnum("LTNRKLTTTK", AI_COVER_SELECTION_DEBUG_STRINGS, 0, 4u, "Enable debugging information for cover selection");
  DVARINT_ai_friendlyFireBlockDuration = Dvar_RegisterInt("MRPKQKMNLO", 2000, 0, 0x7FFFFFFF, 0xC4u, "Friendly fire movement block duration");
  DVARINT_ai_coverSearchInterval = Dvar_RegisterInt("LRPKMPSSLS", 2000, 0, 0x7FFFFFFF, 0x84u, "AI cover search interval when they don't have cover, in milliseconds");
  DVARFLT_ai_suppression_decrement = Dvar_RegisterFloat("MKKNMTKQN", 0.0099999998, 0.001, 1.0, 0xC0u, "How much the suppression meter ticks down per frame.");
  DVARFLT_ai_linkWeightPerUserMin = Dvar_RegisterFloat("LMQTKKPOPO", 0.40000001, 0.0, 15.0, 0x40u, "Min increase in cost an agent uses a traversal");
  DVARFLT_ai_linkWeightPerUserMax = Dvar_RegisterFloat("OSMOKSPOO", 0.80000001, 0.0, 15.0, 0x40u, "Max increase in cost an agent uses a traversal");
  DVARINT_ai_linkWeightTime = Dvar_RegisterInt("MMRQONLQNP", 5000, 0, 50000, 0x40u, "Time that a traversal's cost stays increased after use (ms)");
  DVARINT_ai_showSuppression = Dvar_RegisterInt("NMTQOLMMKO", -1, -1, 2047, 4u, "Draw the suppression planes for this entity");
  DVARINT_ai_debugAnimDeltas = Dvar_RegisterInt("MNTNOKMPPT", 0, 0, 2047, 4u, "Display animation delta debug information");
  DVARBOOL_ai_debugGrenadeFailSafe = Dvar_RegisterBool("NTKNSRNKQQ", 0, 4u, "Display grenade fail safe debug information");
  DVARFLT_ai_debugGrenadeHintArc = Dvar_RegisterFloat("LNONPPPPMM", 150.0, 0.0, 180.0, 4u, "Grenade hint arc in degrees");
  DVARINT_ai_debugCoverEntityNum = Dvar_RegisterInt("LTNNTRTKSN", -1, -1, 2047, 4u, "Display debug info for cover");
  DVARBOOL_ai_debugEngagementDist = Dvar_RegisterBool("NRTNNNLRKO", 0, 4u, "Show the engagement distances for currently selected AI");
  DVARBOOL_ai_debugTargets = Dvar_RegisterBool("NTKOLPRSQT", 0, 4u, "Show primary and secondary targets");
  DVARBOOL_ai_debugMeleeAttackSpots = Dvar_RegisterBool("OLQSTMQOTM", 0, 4u, "Enable debugging information for melee attack spots");
  DVARINT_ai_debugVolume = Dvar_RegisterInt("LONRRNMRKN", -1, -1, 2047, 0, "Show volume entity");
  DVARBOOL_ai_showRegion = Dvar_RegisterBool("OKOQQQRTPN", 0, 4u, "Draw all the cover in a volume for debugging");
  DVARBOOL_ai_debugPlayerLOS = Dvar_RegisterBool("MNLLMRRMLM", 0, 4u, "Debug information for AI staying out of player LOS");
  DVARFLT_ai_teamDeathListenRadius = Dvar_RegisterFloat("NKQPONNNSQ", 192.0, 0.0, 256.0, 4u, "How close to an ally and AI needs to be to hear a team death. Limited by BroadcastPointEvent event distances.");
  DVARINT_ai_glanceShortDuration = Dvar_RegisterInt("MQLTTQRLKS", 550, 400, 1500, 4u, "Short duration for glances.");
  DVARINT_ai_glanceLongDuration = Dvar_RegisterInt("LKKKTTLKLM", 1100, 1000, 3000, 4u, "Long duration for glances.");
  DVARINT_ai_glanceGenericCooldown = Dvar_RegisterInt("NLPRSQNKSK", 5000, 1000, 0x7FFFFFFF, 4u, "Cooldown in between automatic glances.");
  DVARINT_ai_glanceStairsCooldown = Dvar_RegisterInt("LKQNMMNQQR", 10000, 5000, 0x7FFFFFFF, 4u, "Cooldown in between glancing at stairs.");
  DVARINT_ai_glancePlayerCooldown = Dvar_RegisterInt("OQLSONNNO", 20000, 5000, 0x7FFFFFFF, 4u, "Cooldown in between glancing at a nearby player.");
  DVARFLT_ai_glanceStairsLookDist = Dvar_RegisterFloat("MNNLKLSQOR", 128.0, 1.0, 3.4028235e38, 4u, "Look ahead distance when trying to glance at stairs. Value is doubled when running.");
  DVARFLT_ai_glancePlayerDist = Dvar_RegisterFloat("QTPLLQMLR", 128.0, 1.0, 3.4028235e38, 4u, "The distance a player must be within for an AI to glance at them.");
  DVARFLT_ai_glanceNearAnyPlayerThreshold = Dvar_RegisterFloat("MOKSKQLLMM", 1024.0, 1.0, 3.4028235e38, 0x40u, "AI will not perform lookats when no players are within this distance.");
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
  DCONST_DVARBOOL_ai_lookatusedebugangles = Dvar_RegisterBool("ai_lookatusedebugangles", 0, 0x40004u, "Override computed lookat target with ai_lookatyaw and ai_lookatpitch");
  DCONST_DVARFLT_ai_lookatyaw = Dvar_RegisterFloat("ai_lookatyaw", 0.0, -180.0, 180.0, 0x40004u, "Force the lookat target yaw to this value");
  DCONST_DVARFLT_ai_lookatpitch = Dvar_RegisterFloat("ai_lookatpitch", 0.0, -180.0, 180.0, 0x40004u, "Force the lookat target pitch to this value");
  DVARINT_ai_civSpeedMin = Dvar_RegisterInt("LSKTNKPTRT", 200, 0, 255, 0x80u, "Min speed for civilians");
  DVARINT_ai_civSpeedMax = Dvar_RegisterInt("MNMNLKRRQP", 250, 0, 255, 0x80u, "Max speed for civilians");
  DVARFLT_ai_allySpeedScaleMultMin = Dvar_RegisterFloat("NNSQQNONNT", 0.94, 0.5, 1.5, 0x80u, "Min speed scale multiplier for allies.");
  DVARFLT_ai_allySpeedScaleMultMax = Dvar_RegisterFloat("LRRRMKSLN", 1.11, 0.5, 1.5, 0x80u, "Max speed scale multiplier for allies.");
  DVARFLT_ai_enemySpeedScaleMultMin = Dvar_RegisterFloat("NSPNRRQRLN", 1.23, 0.5, 1.5, 0x80u, "Min speed for enemies (not including casual killer).");
  DVARFLT_ai_enemySpeedScaleMultMax = Dvar_RegisterFloat("NOPOKQNMR", 1.41, 0.5, 1.5, 0x80u, "Max speed for enemies (not including casual killer).");
  DCONST_DVARBOOL_ai_debugaim = Dvar_RegisterBool("ai_debugaim", 0, 0x40004u, "Draw aim angles computed by setAimAngles from the aim start position towards the aim direction");
  DCONST_DVARBOOL_ai_debuggunpose = Dvar_RegisterBool("ai_debuggunpose", 0, 0x40004u, "Display current gunpose state along with the trigger that caused it");
  DVARBOOL_ai_debugTraversalSelection = Dvar_RegisterBool("LTPSQRQKMR", 0, 0x40u, "Print feature request and alias choice for traversals");
  DVARBOOL_ai_enableRetreat = Dvar_RegisterBool("MNQQOQLTOM", 0, 0xC0u, "Allow AI to retreat when overnumbered");
  DVARINT_ai_retreatMaxOvernumberAmount = Dvar_RegisterInt("MTLSORKRRO", 0, -4, 4, 0xC0u, "The max amount that an AI can be overnumbered by (players - AI) before retreating");
  DVARFLT_ai_retreatProximity = Dvar_RegisterFloat("LNRRMPOPLS", 1000.0, 1.0, 10000.0, 0xC0u, "Max distance that AI will search for players and allies to determine if overnumbered");
  DVARFLT_ai_retreatCoverBaseVal = Dvar_RegisterFloat("MRNPTKNKKS", 50.0, 1.0, 200.0, 0xC0u, "Base value used when scoring nodes for nearby allies during retreat");
  DVARFLT_ai_retreatCoverMaxVal = Dvar_RegisterFloat("PSNNQPSML", 100.0, 1.0, 200.0, 0xC0u, "Max value used when scoring nodes for nearby allies during retreat");
  result = Dvar_RegisterFloat("QTMLPMLSL", 2000.0, 1.0, 10000.0, 0xC0u, "Max value used when scoring nodes for nearby allies during retreat");
  DVARFLT_ai_teamDeathRetreatDistance = result;
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
void G_Main_RunPreThinkForEntities(void)
{
  unsigned int v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  __int64 v7; 
  unsigned int i; 
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  __int64 v16; 
  __int64 v17; 

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
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  v2 = (int)*(float *)&_XMM1;
  if ( !(int)*(float *)&_XMM1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 431, ASSERT_TYPE_ASSERT, "(physicsNumSteps > 0)", "%s\n\tTime frame too small for the desired physics step, please review", "physicsNumSteps > 0") )
    __debugbreak();
  if ( v2 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 432, ASSERT_TYPE_ASSERT, "(physicsNumSteps <= PHYSICS_MAX_STEPS_PER_FRAME)", "%s\n\tTime frame too large for desired physics step, please review", "physicsNumSteps <= PHYSICS_MAX_STEPS_PER_FRAME") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v3 = (float)v2;
  v4 = 1.0 / v3;
  v5 = (float)((float)level.frameDuration * 0.001) * (float)(1.0 / v3);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v6 = (float)((float)level.frameDuration * 0.001) * v4;
  Profile_Begin(595);
  if ( v2 )
  {
    v7 = v2;
    do
    {
      G_Vehicle_CollideAllVehicles(v6);
      --v7;
    }
    while ( v7 );
  }
  Profile_EndInternal(NULL);
  Profile_Begin(596);
  PhysPerfTrack_ServerWorldsStart();
  PhysPerfTrack_ServerWorldsPreStart();
  Physics_CheckWorldReplayDeterminism(PHYSICS_WORLD_ID_FIRST);
  G_Main_PhysicsSetGravity(PHYSICS_WORLD_ID_FIRST);
  Profile_Begin(597);
  Physics_PreStepWorld(PHYSICS_WORLD_ID_FIRST, v5);
  Profile_EndInternal(NULL);
  Physics_CheckWorldReplayDeterminism(PHYSICS_WORLD_ID_FIRST);
  Profile_Begin(598);
  G_PhysicsObject_PreStepWorld(PHYSICS_WORLD_ID_FIRST, v2);
  Profile_EndInternal(NULL);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 472, ASSERT_TYPE_ASSERT, "( physicsNumSteps > 0 )", (const char *)&queryFormat, "physicsNumSteps > 0") )
    __debugbreak();
  G_PhysicsCharacterProxy_Update(v4);
  Physics_ProcessDeferredKeyframe(PHYSICS_WORLD_ID_FIRST, v4);
  PhysPerfTrack_ServerWorldsPreStop();
  PhysPerfTrack_ServerWorldsMainStepStart();
  for ( i = 0; i < v2; ++i )
  {
    Value = (char *)Sys_GetValue(0);
    v10 = (int *)(Value + 26056);
    if ( (unsigned int)(*((_DWORD *)Value + 6514) + 1) >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = *((_DWORD *)Value + 6514) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( (unsigned int)++*v10 >= 3 )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = *v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v11 = Value + 2088;
    v12 = Value + 40;
    if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v11 += 8i64;
    if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v11 = v10;
    if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v13 = *v10;
    v14 = __rdtsc();
    v10[v13 + 2] = v14;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 599, NULL, 0);
    Physics_StepWorld(PHYSICS_WORLD_ID_FIRST, i, v2, 0.0);
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
  Physics_PreStepWorld(PHYSICS_WORLD_ID_SERVER_DETAIL, v5);
  Physics_UpdateWorld(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
  PhysPerfTrack_ServerWorldsDetailUpdateStop();
  Profile_EndInternal(NULL);
  Physics_CheckForGarbageCollectionServer(v5);
  PhysPerfTrack_ServerWorldsStop();
  Profile_EndInternal(NULL);
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
char G_Main_WorldPointToScreenPos(const vec3_t *viewOrigin, const tmat33_t<vec3_t> *cameraMtx, float viewFOV, const vec3_t *targetPoint, vec2_t *outScreenPos)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 

  if ( viewFOV <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 707, ASSERT_TYPE_ASSERT, "(viewFOV > 0)", (const char *)&queryFormat, "viewFOV > 0") )
    __debugbreak();
  v9 = targetPoint->v[0] - viewOrigin->v[0];
  v10 = targetPoint->v[1] - viewOrigin->v[1];
  v11 = targetPoint->v[2] - viewOrigin->v[2];
  v12 = (float)((float)(v10 * cameraMtx->m[0].v[1]) + (float)(v9 * cameraMtx->m[0].v[0])) + (float)(v11 * cameraMtx->m[0].v[2]);
  v13 = (float)(v9 * cameraMtx->m[1].v[0]) + (float)(v10 * cameraMtx->m[1].v[1]);
  v14 = (float)((float)(v9 * cameraMtx->m[2].v[0]) + (float)(v10 * cameraMtx->m[2].v[1])) + (float)(v11 * cameraMtx->m[2].v[2]);
  if ( v12 <= 0.0 )
    return 0;
  v16 = (float)(v13 + (float)(v11 * cameraMtx->m[1].v[2])) / v12;
  v17 = v14 / v12;
  v18 = tanf_0(viewFOV * 0.0087266462);
  if ( v18 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 718, ASSERT_TYPE_SANITY, "( tanHalfFovX > 0 )", (const char *)&queryFormat, "tanHalfFovX > 0") )
    __debugbreak();
  if ( (float)(v18 * 0.75) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_main.cpp", 719, ASSERT_TYPE_SANITY, "( tanHalfFovY > 0 )", (const char *)&queryFormat, "tanHalfFovY > 0") )
    __debugbreak();
  outScreenPos->v[1] = (float)(v17 * -240.0) / (float)(v18 * 0.75);
  outScreenPos->v[0] = (float)(v16 * -320.0) / v18;
  return 1;
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

