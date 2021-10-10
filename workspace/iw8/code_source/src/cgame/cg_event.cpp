/*
==============
CgEventSystem::HandleEntityEventCommon
==============
*/

void __fastcall CgEventSystem::HandleEntityEventCommon(CgEventSystem *this, centity_t *cent, const int clientNum, const int event, const int eventFlags, const unsigned int eventParm, const Weapon *iweapon, const bool isAlternate, const bool isPlayerView, const CgEventLodData *optionalEventLodData)
{
  ?HandleEntityEventCommon@CgEventSystem@@IEBAXPEAUcentity_t@@HHHIAEBUWeapon@@_N2PEBUCgEventLodData@@@Z(this, cent, clientNum, event, eventFlags, eventParm, iweapon, isAlternate, isPlayerView, optionalEventLodData);
}

/*
==============
CG_Event_PlayHandGrabSound
==============
*/

void __fastcall CG_Event_PlayHandGrabSound(LocalClientNum_t localClientNum, const int entNum, const bool isLeft, const unsigned __int8 surfaceType)
{
  ?CG_Event_PlayHandGrabSound@@YAXW4LocalClientNum_t@@H_NE@Z(localClientNum, entNum, isLeft, surfaceType);
}

/*
==============
CgEventSystem::HandleTurretFire
==============
*/

void __fastcall CgEventSystem::HandleTurretFire(CgEventSystem *this, centity_t *cent, const unsigned int event, const unsigned int eventParm, const bool isPlayerView, bool bNoTracer)
{
  ?HandleTurretFire@CgEventSystem@@UEBAXPEAUcentity_t@@II_N_N@Z(this, cent, event, eventParm, isPlayerView, bNoTracer);
}

/*
==============
CG_KillBoltedEffects
==============
*/

void __fastcall CG_KillBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  ?CG_KillBoltedEffects@@YAXW4LocalClientNum_t@@PEBVFXRegisteredDef@@HW4scr_string_t@@@Z(localClientNum, fxDef, dobjHandle, boneName);
}

/*
==============
CG_GetBoneIndex
==============
*/

int __fastcall CG_GetBoneIndex(LocalClientNum_t localClientNum, const int dobjHandle, scr_string_t boneName, unsigned __int16 *boneIndex)
{
  return ?CG_GetBoneIndex@@YAHW4LocalClientNum_t@@HW4scr_string_t@@PEAG@Z(localClientNum, dobjHandle, boneName, boneIndex);
}

/*
==============
AdjustWeaponRattleForPlayer
==============
*/

int __fastcall AdjustWeaponRattleForPlayer(LocalClientNum_t localClientNum, const playerState_s *ps, unsigned int origWeaponRattleType)
{
  return ?AdjustWeaponRattleForPlayer@@YAHW4LocalClientNum_t@@PEBUplayerState_s@@I@Z(localClientNum, ps, origWeaponRattleType);
}

/*
==============
CG_GetFxInfoFromParam
==============
*/

int __fastcall CG_GetFxInfoFromParam(const LocalClientNum_t localClientNum, const unsigned int eventParam, const FXRegisteredDef **outFxDef, unsigned int *outBoneIndex, unsigned int *outClientNum)
{
  return ?CG_GetFxInfoFromParam@@YAHW4LocalClientNum_t@@IPEAPEBVFXRegisteredDef@@PEAI2@Z(localClientNum, eventParam, outFxDef, outBoneIndex, outClientNum);
}

/*
==============
CG_EventLod_EventDisabledDueToBudget
==============
*/

bool __fastcall CG_EventLod_EventDisabledDueToBudget(const LocalClientNum_t localClientNum, const CgEventLodEventType eventType, const CgEventLodData *lodData)
{
  return ?CG_EventLod_EventDisabledDueToBudget@@YA_NW4LocalClientNum_t@@W4CgEventLodEventType@@PEBUCgEventLodData@@@Z(localClientNum, eventType, lodData);
}

/*
==============
CgEventSystem::CheckEventSequence
==============
*/

int __fastcall CgEventSystem::CheckEventSequence(CgEventSystem *this, centity_t *cent, const bool usingSharedLowLodEventBuffer, bool *outPerformLowLodEvents)
{
  return ?CheckEventSequence@CgEventSystem@@IEBAHPEAUcentity_t@@_NAEA_N@Z(this, cent, usingSharedLowLodEventBuffer, outPerformLowLodEvents);
}

/*
==============
CgEventSystem::LowLodEventsEnabledForEntity
==============
*/

int __fastcall CgEventSystem::LowLodEventsEnabledForEntity(CgEventSystem *this, const centity_t *cent, const bool usingSharedLowLodEventBuffer)
{
  return ?LowLodEventsEnabledForEntity@CgEventSystem@@IEBAHPEBUcentity_t@@_N@Z(this, cent, usingSharedLowLodEventBuffer);
}

/*
==============
CgEventSystem::GetEventWeapon
==============
*/

const Weapon *__fastcall CgEventSystem::GetEventWeapon(CgEventSystem *this, const centity_t *cent, const int eventFlags, bool *isAlternate, bool *isPlayerView)
{
  return ?GetEventWeapon@CgEventSystem@@IEBAAEBUWeapon@@PEBUcentity_t@@HPEA_N1@Z(this, cent, eventFlags, isAlternate, isPlayerView);
}

/*
==============
CG_SND_VerifyTracerAndWhizbySpeeds
==============
*/

void __fastcall CG_SND_VerifyTracerAndWhizbySpeeds(const bitarray<64> perks, const Weapon *r_weapon, bool isAlternate)
{
  ?CG_SND_VerifyTracerAndWhizbySpeeds@@YAXV?$bitarray@$0EA@@@AEBUWeapon@@_N@Z(perks, r_weapon, isAlternate);
}

/*
==============
CgEventSystem::CheckEntityEvents
==============
*/

void __fastcall CgEventSystem::CheckEntityEvents(CgEventSystem *this, centity_t *cent, const int eventFlags)
{
  ?CheckEntityEvents@CgEventSystem@@QEBAXPEAUcentity_t@@H@Z(this, cent, eventFlags);
}

/*
==============
CG_UsePreciseSoundLocation
==============
*/

bool __fastcall CG_UsePreciseSoundLocation()
{
  return ?CG_UsePreciseSoundLocation@@YA_NXZ();
}

/*
==============
CG_Entity_AddFootstepEvent
==============
*/

void __fastcall CG_Entity_AddFootstepEvent(LocalClientNum_t localClientNum, const bool isLeft, const centity_t *centity, FootstepVFX *footstepVFX, TraceGroundSource source, ScriptableFootstepFlag footstepFlags)
{
  ?CG_Entity_AddFootstepEvent@@YAXW4LocalClientNum_t@@_NPEBUcentity_t@@PEAUFootstepVFX@@W4TraceGroundSource@@W4ScriptableFootstepFlag@@@Z(localClientNum, isLeft, centity, footstepVFX, source, footstepFlags);
}

/*
==============
CgEventSystem::CalculatePreviousEventSequence
==============
*/

int __fastcall CgEventSystem::CalculatePreviousEventSequence(CgEventSystem *this, const centity_t *cent, const bool printWarnings, const bool usingSharedLowLodEventBuffer, bool *outPerformLowLodEvents, EventSequence *outPreviousEventSequence)
{
  return ?CalculatePreviousEventSequence@CgEventSystem@@IEBAHPEBUcentity_t@@_N1AEA_NAEATEventSequence@@@Z(this, cent, printWarnings, usingSharedLowLodEventBuffer, outPerformLowLodEvents, outPreviousEventSequence);
}

/*
==============
CG_EventLod_ShouldPerformEvent
==============
*/

bool __fastcall CG_EventLod_ShouldPerformEvent(const LocalClientNum_t localClientNum, const CgEventLodEventType eventType, const CgEventLodData *lodData)
{
  return ?CG_EventLod_ShouldPerformEvent@@YA_NW4LocalClientNum_t@@W4CgEventLodEventType@@PEBUCgEventLodData@@@Z(localClientNum, eventType, lodData);
}

/*
==============
CG_EquipmentSound
==============
*/

void __fastcall CG_EquipmentSound(LocalClientNum_t localClientNum, int entNum, int isPlayerView, MovementLeadType_t leadType, EquipmentMoveType_t moveType, unsigned int clothType, unsigned int weaponRattleType, int isQuietMove)
{
  ?CG_EquipmentSound@@YAXW4LocalClientNum_t@@HHW4MovementLeadType_t@@W4EquipmentMoveType_t@@IIH@Z(localClientNum, entNum, isPlayerView, leadType, moveType, clothType, weaponRattleType, isQuietMove);
}

/*
==============
CG_PlayBoltedEffect
==============
*/

ParticleSystemHandle __fastcall CG_PlayBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  return ?CG_PlayBoltedEffect@@YA?AW4ParticleSystemHandle@@W4LocalClientNum_t@@PEBVFXRegisteredDef@@HW4scr_string_t@@@Z(localClientNum, fxDef, dobjHandle, boneName);
}

/*
==============
CgEventSystem::HandleRumbleEvents
==============
*/

void __fastcall CgEventSystem::HandleRumbleEvents(CgEventSystem *this, const int event, const unsigned int eventParam, int entityNum, const vec3_t *pos)
{
  ?HandleRumbleEvents@CgEventSystem@@IEBAXHIHAEBTvec3_t@@@Z(this, event, eventParam, entityNum, pos);
}

/*
==============
CG_PlayBoltedEffectOnSecondTag
==============
*/

void __fastcall CG_PlayBoltedEffectOnSecondTag(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  ?CG_PlayBoltedEffectOnSecondTag@@YAXW4LocalClientNum_t@@PEBVFXRegisteredDef@@HW4scr_string_t@@@Z(localClientNum, fxDef, dobjHandle, boneName);
}

/*
==============
CgEventSystem::ShouldIgnoreHitImpactEvent
==============
*/

bool __fastcall CgEventSystem::ShouldIgnoreHitImpactEvent(CgEventSystem *this, const int eventId, const int sourceEntNum, const Weapon *weapon, const bool isAlternate)
{
  return ?ShouldIgnoreHitImpactEvent@CgEventSystem@@IEBA_NHHAEBUWeapon@@_N@Z(this, eventId, sourceEntNum, weapon, isAlternate);
}

/*
==============
CG_GrabWeapon
==============
*/

void __fastcall CG_GrabWeapon(LocalClientNum_t localClientNum, int entityNum, int event, const Weapon *weapon, const bool isAlternate, bool isPlayerView)
{
  ?CG_GrabWeapon@@YAXW4LocalClientNum_t@@HHAEBUWeapon@@_N_N@Z(localClientNum, entityNum, event, weapon, isAlternate, isPlayerView);
}

/*
==============
CG_BoneHitDecode
==============
*/

bool __fastcall CG_BoneHitDecode(const LocalClientNum_t localClientNum, const centity_t *targetEnt, const BulletHitBoneInfo *hitInfo, vec3_t *outHitLocation, unsigned __int8 *outBoneIndex)
{
  return ?CG_BoneHitDecode@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@PEBUBulletHitBoneInfo@@AEATvec3_t@@PEAE@Z(localClientNum, targetEnt, hitInfo, outHitLocation, outBoneIndex);
}

/*
==============
CG_StopBoltedEffects
==============
*/

void __fastcall CG_StopBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  ?CG_StopBoltedEffects@@YAXW4LocalClientNum_t@@PEBVFXRegisteredDef@@HW4scr_string_t@@@Z(localClientNum, fxDef, dobjHandle, boneName);
}

/*
==============
CG_Event_PlayEquipmentSound
==============
*/

void __fastcall CG_Event_PlayEquipmentSound(LocalClientNum_t localClientNum, const MovementLeadType_t leadType, const centity_t *centity)
{
  ?CG_Event_PlayEquipmentSound@@YAXW4LocalClientNum_t@@W4MovementLeadType_t@@PEBUcentity_t@@@Z(localClientNum, leadType, centity);
}

/*
==============
CgEventSystem::HandleExplosionEvent
==============
*/

void __fastcall CgEventSystem::HandleExplosionEvent(CgEventSystem *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  ?HandleExplosionEvent@CgEventSystem@@MEBAXPEAUcentity_t@@HAEBTvec3_t@@AEBUWeapon@@_N@Z(this, cent, eventType, position, weapon, isAlternate);
}

/*
==============
CgEventSystem::CheckPlayerEvents
==============
*/

void __fastcall CgEventSystem::CheckPlayerEvents(CgEventSystem *this, const playerState_s *ps, const transPlayerState_t *ops)
{
  ?CheckPlayerEvents@CgEventSystem@@QEBAXPEBUplayerState_s@@PEBUtransPlayerState_t@@@Z(this, ps, ops);
}

/*
==============
CG_GetTagOrientation
==============
*/

bool __fastcall CG_GetTagOrientation(LocalClientNum_t localClientNum, int dobjHandle, scr_string_t boneName, orientation_t *orientation)
{
  return ?CG_GetTagOrientation@@YA_NW4LocalClientNum_t@@HW4scr_string_t@@PEAUorientation_t@@@Z(localClientNum, dobjHandle, boneName, orientation);
}

/*
==============
CG_Event_PlayFootstepFX
==============
*/

void __fastcall CG_Event_PlayFootstepFX(LocalClientNum_t localClientNum, const int entNum, const bool isLeft, const unsigned __int8 surfaceType, const vec3_t *groundPosition, const bool isPlayerView, const bool isThirdPerson, FootstepVFX *footstepVFX)
{
  ?CG_Event_PlayFootstepFX@@YAXW4LocalClientNum_t@@H_NEPEBTvec3_t@@11PEAUFootstepVFX@@@Z(localClientNum, entNum, isLeft, surfaceType, groundPosition, isPlayerView, isThirdPerson, footstepVFX);
}

/*
==============
CG_Event_PlayFootstepSound
==============
*/

void __fastcall CG_Event_PlayFootstepSound(LocalClientNum_t localClientNum, const int entNum, bool isLeft, const unsigned __int8 surfaceType, ScriptableFootstepFlag footstepFlags)
{
  ?CG_Event_PlayFootstepSound@@YAXW4LocalClientNum_t@@H_NEW4ScriptableFootstepFlag@@@Z(localClientNum, entNum, isLeft, surfaceType, footstepFlags);
}

/*
==============
CG_Event_UnpackEquipmentEventParam
==============
*/

void __fastcall CG_Event_UnpackEquipmentEventParam(const unsigned int eventParm, MovementLeadType_t *leadType, unsigned __int8 *clothType, unsigned __int8 *rattleSoundType, EquipmentMoveType_t *moveType)
{
  ?CG_Event_UnpackEquipmentEventParam@@YAXIPEAW4MovementLeadType_t@@PEAE1PEAW4EquipmentMoveType_t@@@Z(eventParm, leadType, clothType, rattleSoundType, moveType);
}

/*
==============
AdjustWeaponRattleForPlayer
==============
*/
__int64 AdjustWeaponRattleForPlayer(LocalClientNum_t localClientNum, const playerState_s *ps, unsigned int origWeaponRattleType)
{
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponDef *v8; 
  WeaponSFXPackage *sfxPackage; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) && (Instance = CgWeaponMap::GetInstance(localClientNum), CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, ps), CurrentWeaponForPlayer->weaponIdx) && (v8 = BG_WeaponDef(CurrentWeaponForPlayer, 0)) != NULL && (sfxPackage = v8->sfxPackage) != NULL )
    return sfxPackage->rattleSoundType;
  else
    return origWeaponRattleType;
}

/*
==============
CG_BoneHitDecode
==============
*/
char CG_BoneHitDecode(const LocalClientNum_t localClientNum, const centity_t *targetEnt, const BulletHitBoneInfo *hitInfo, vec3_t *outHitLocation, unsigned __int8 *outBoneIndex)
{
  BulletHitBoneInfo v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  const DObj *ClientDObj; 
  const DObj *v15; 
  XBoneInfo *BoneInfoForBoneIndex; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 842, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( (targetEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 843, ASSERT_TYPE_ASSERT, "(CENextValid( targetEnt ))", (const char *)&queryFormat, "CENextValid( targetEnt )") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 844, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  v9 = *hitInfo;
  if ( !*(_BYTE *)&v9 )
    return 0;
  v10 = *(_BYTE *)&v9 - 1;
  v11 = *((unsigned __int8 *)&v9 + 1);
  v12 = *((unsigned __int8 *)&v9 + 2);
  v13 = HIBYTE(*(unsigned int *)&v9);
  ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, localClientNum);
  v15 = ClientDObj;
  if ( !ClientDObj )
    return 0;
  BoneInfoForBoneIndex = DObjGetBoneInfoForBoneIndex(ClientDObj, v10);
  if ( !BoneInfoForBoneIndex )
  {
    Com_PrintError(1, "Could not find the bone specified by the hit event in the client dobj. This implies the client and server dobjs don't match.\n");
    return 0;
  }
  v18 = BoneInfoForBoneIndex->bounds.halfSize.v[1];
  v19 = (float)v11;
  v20 = (float)((float)((float)(v19 * 0.0078431377) - 1.0) * BoneInfoForBoneIndex->bounds.halfSize.v[0]) + BoneInfoForBoneIndex->bounds.midPoint.v[0];
  v21 = (float)v12;
  v22 = BoneInfoForBoneIndex->bounds.halfSize.v[2];
  in1.v[0] = v20;
  in1.v[1] = (float)((float)((float)(v21 * 0.0078431377) - 1.0) * v18) + BoneInfoForBoneIndex->bounds.midPoint.v[1];
  v23 = (float)v13;
  in1.v[2] = (float)((float)((float)(v23 * 0.0078431377) - 1.0) * v22) + BoneInfoForBoneIndex->bounds.midPoint.v[2];
  if ( !CG_DObjGetWorldBoneMatrix(&targetEnt->pose, v15, v10, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
    return 0;
  MatrixTransformVector43(&in1, &outTagMat, outHitLocation);
  *outBoneIndex = truncate_cast<unsigned char,int>(v10);
  return 1;
}

/*
==============
CG_Entity_AddFootstepEvent
==============
*/
void CG_Entity_AddFootstepEvent(LocalClientNum_t localClientNum, const bool isLeft, const centity_t *centity, FootstepVFX *footstepVFX, TraceGroundSource source, ScriptableFootstepFlag footstepFlags)
{
  unsigned __int64 v6; 
  unsigned int number; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool v12; 
  int clientNum; 
  const dvar_t *v14; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v16; 
  FootstepStatus v17; 
  unsigned __int8 lastGroundSurfaceType; 
  const vec3_t *p_position; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  double TraceOffset; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  FootstepStatus v32; 
  __int64 v33; 
  char v34[448]; 
  __int64 v35; 

  v35 = -2i64;
  v6 = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(v6 + 440) = (unsigned __int64)&v33 ^ _security_cookie;
  *(_QWORD *)(v6 + 40) = footstepVFX;
  *(_QWORD *)(v6 + 8) = centity;
  *(_BYTE *)v6 = isLeft;
  if ( (source & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5014, ASSERT_TYPE_ASSERT, "(static_cast<int>(TraceGroundSource::NO_PMOVE & source) == 0)", (const char *)&queryFormat, "static_cast<int>(TraceGroundSource::NO_PMOVE & source) == 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_AddFootstepEvent");
  if ( !centity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5017, ASSERT_TYPE_ASSERT, "(centity)", (const char *)&queryFormat, "centity") )
    __debugbreak();
  number = centity->nextState.number;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5021, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v12 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v12 = 0;
  }
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  *(_BYTE *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 1) = clientNum == number;
  v14 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled && (clientNum != number || !v12) )
  {
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 8) + 416i64), (vec3_t *)(v6 + 416));
    CG_FootstepTracker_Add(localClientNum, number, LocalClientGlobals->time, (const vec3_t *)(v6 + 416));
    memset((void *)(v6 + 416), 0, 0xCui64);
  }
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
  {
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number);
    v16 = CharacterInfo;
    if ( CharacterInfo && !CharacterInfo->canEmitFootsteps )
    {
      v17 = FLOAT_POINTER;
LABEL_48:
      CG_FootstepTracker_SetStatus(localClientNum, number, LocalClientGlobals->time, v17);
      goto LABEL_49;
    }
  }
  else
  {
    v16 = NULL;
  }
  if ( clientNum != number || !v12 )
  {
    if ( !v16 || ((source & 4) != 0) == *(_BYTE *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 1) && ((source & 4) != 0 || clientNum == number) )
    {
      v17 = VEC3_POINTER|BYTE_VALUE;
      goto LABEL_48;
    }
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 8) + 416i64), (vec3_t *)(v6 + 8));
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, (vec3_t *)(v6 + 24));
    v20 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x18) - *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 8);
    v21 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x1C) - *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0xC);
    v22 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x20) - *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
    v23 = (float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22);
    v24 = DCONST_DVARFLT_cg_footstepCullDistance;
    if ( !DCONST_DVARFLT_cg_footstepCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footstepCullDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( (float)(v24->current.value * v24->current.value) < v23 )
    {
      v32 = FLOAT_VALUE;
    }
    else
    {
      TraceOffset = CG_TraceGroundWorkers_GetTraceOffset();
      if ( (source & 4) != 0 )
      {
        YawVectors(v16->legs.yawAngle, (vec3_t *)(v6 + 416), (vec3_t *)(v6 + 384));
        v26 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 8);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = v26;
        v27 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0xC);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v27;
        v28 = *(float *)&TraceOffset + *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = v28;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = (float)(32.0 * *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A0)) + v26;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = (float)(32.0 * *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A4)) + v27;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = (float)(32.0 * *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x1A8)) + v28;
      }
      else
      {
        v29 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 8);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x190) = v29;
        v30 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0xC);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x194) = v30;
        v31 = *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x10);
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x198) = *(float *)&TraceOffset + v31;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x180) = v29;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x184) = v30;
        *(float *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x188) = v31 - (float)(*(float *)&TraceOffset * 1.0);
      }
      *(_BYTE *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = source;
      *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x104) = number;
      *(_BYTE *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x108) = *(_BYTE *)v6;
      *(double *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x10C) = *(double *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x190);
      *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x114) = *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x198);
      *(double *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x118) = *(double *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x180);
      *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x120) = *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x188);
      *(_BYTE *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x109) = footstepFlags;
      *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x128) = *(_QWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x28);
      *(_DWORD *)(((unsigned __int64)v34 & 0xFFFFFFFFFFFFFF80ui64) + 0x130) = LocalClientGlobals->time;
      if ( CG_TraceGroundWorkers_AddEvent((const CgTraceGroundWorkerEvent *)(v6 + 128)) )
        goto LABEL_46;
      v32 = STRUCT_POINTER;
    }
    CG_FootstepTracker_SetStatus(localClientNum, number, LocalClientGlobals->time, v32);
LABEL_46:
    memset((void *)(v6 + 24), 0, 0xCui64);
    memset((void *)(v6 + 8), 0, 0xCui64);
    goto LABEL_49;
  }
  lastGroundSurfaceType = LocalClientGlobals->lastGroundSurfaceType;
  CG_Event_PlayFootstepSound(localClientNum, number, *(_BYTE *)v6, lastGroundSurfaceType, SCRIPTABLE_FOOTSTEP_NONE);
  p_position = &LocalClientGlobals->playerGround.trace.position;
  if ( !LocalClientGlobals->playerGround.groundPlane )
    p_position = NULL;
  CG_Event_PlayFootstepFX(localClientNum, number, *(_BYTE *)v6, lastGroundSurfaceType, p_position, 1, 1, NULL);
LABEL_49:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_EquipmentSound
==============
*/
void CG_EquipmentSound(LocalClientNum_t localClientNum, int entNum, int isPlayerView, MovementLeadType_t leadType, EquipmentMoveType_t moveType, unsigned int clothType, unsigned int weaponRattleType, int isQuietMove)
{
  const dvar_t *v8; 
  SndAliasList *ClothFoleyMovementSound; 
  unsigned int *RandSeed; 
  SndAliasList *v15; 

  v8 = DVARBOOL_cg_equipmentSounds;
  if ( !DVARBOOL_cg_equipmentSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_equipmentSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    ClothFoleyMovementSound = BG_GetClothFoleyMovementSound(clothType, leadType, moveType, isPlayerView);
    RandSeed = GetRandSeed();
    v15 = BG_ChooseEquipmentSound(clothType, weaponRattleType, moveType, isPlayerView, RandSeed);
    if ( ClothFoleyMovementSound )
      CG_GenericEquipmentSound(localClientNum, entNum, ClothFoleyMovementSound, isPlayerView, isQuietMove);
    if ( v15 )
      CG_GenericEquipmentSound(localClientNum, entNum, v15, isPlayerView, isQuietMove);
  }
}

/*
==============
CG_EventLod_EventDisabledDueToBudget
==============
*/
bool CG_EventLod_EventDisabledDueToBudget(const LocalClientNum_t localClientNum, const CgEventLodEventType eventType, const CgEventLodData *lodData)
{
  return lodData && lodData->distanceLod && bitarray_base<bitarray<32>>::testBit(&lodData->eventTypeDisabledOverride, (unsigned __int8)eventType);
}

/*
==============
CG_EventLod_ShouldPerformEvent
==============
*/
_BOOL8 CG_EventLod_ShouldPerformEvent(const LocalClientNum_t localClientNum, const CgEventLodEventType eventType, const CgEventLodData *lodData)
{
  int v6; 
  bool v7; 
  CgEventLodFOV fovLod; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  if ( lodData && lodData->distanceLod )
  {
    v6 = (unsigned __int8)eventType;
    if ( bitarray_base<bitarray<32>>::testBit(&lodData->eventTypeDisabledOverride, (unsigned __int8)eventType) )
    {
      v7 = 0;
    }
    else
    {
      if ( (unsigned __int8)eventType >= CG_EVENT_LOD_TYPE_COUNT )
      {
        v13 = 9;
        v11 = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( s_eventLodTypeParams ) ) + 0 ) )", "eventType doesn't index s_eventLodTypeParams\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      fovLod = lodData->fovLod;
      if ( (unsigned __int8)fovLod >= CG_EVENT_LOD_FOV_COUNT )
      {
        LODWORD(v12) = 3;
        LODWORD(v10) = (unsigned __int8)fovLod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( lodData->fovLod ) < (unsigned)( ( sizeof( *array_counter( params.minimumDistance ) ) + 0 ) )", "lodData->fovLod doesn't index params.minimumDistance\n\t%i not in [0, %i)", v10, v12) )
          __debugbreak();
      }
      v7 = lodData->distanceLod <= (unsigned int)s_eventLodTypeParams[(unsigned __int8)eventType].minimumDistance[(unsigned __int8)lodData->fovLod];
    }
  }
  else
  {
    v7 = 1;
  }
  CG_Event_Debug_AddCount(localClientNum, eventType, v7);
  return v7;
}

/*
==============
CG_Event_PlayEquipmentSound
==============
*/
void CG_Event_PlayEquipmentSound(LocalClientNum_t localClientNum, const MovementLeadType_t leadType, const centity_t *centity)
{
  int number; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  char clothType; 
  FootstepMoveType_t footstepMoveType; 
  int isQuietMove; 
  EquipmentMoveType_t v11; 
  unsigned __int8 rattleSoundType; 
  float priority; 
  char v14; 
  EquipmentSoundTable *equipmentSoundTable; 
  const WeaponDef *v16; 
  WeaponSFXPackage *sfxPackage; 
  const WeaponDef *v18; 
  WeaponSFXPackage *v19; 
  unsigned __int8 v20; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayEquipmentSound");
  if ( !centity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2521, ASSERT_TYPE_ASSERT, "(centity)", (const char *)&queryFormat, "centity") )
    __debugbreak();
  number = centity->nextState.number;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2525, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, number);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2528, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->canEmitFootsteps )
  {
    clothType = CharacterInfo->clothType;
    footstepMoveType = CharacterInfo->footstepMoveType;
    isQuietMove = CharacterInfo->infoValid && BG_HasPerk(&CharacterInfo->perks, 0x1Fu);
    v11 = EQUIPMENT_MOVE_TYPE_INVALID;
    switch ( footstepMoveType )
    {
      case FOOTSTEP_MOVE_TYPE_STATE_BEGIN:
        v11 = EQUIPMENT_MOVE_TYPE_CREEP;
        break;
      case FOOTSTEP_MOVE_TYPE_WALK:
        v11 = EQUIPMENT_MOVE_TYPE_WALK;
        break;
      case FOOTSTEP_MOVE_TYPE_RUN:
      case FOOTSTEP_MOVE_TYPE_JUMP:
        v11 = EQUIPMENT_MOVE_TYPE_RUN;
        break;
      case FOOTSTEP_MOVE_TYPE_SPRINT:
      case FOOTSTEP_MOVE_TYPE_SUPERSPRINT:
        v11 = EQUIPMENT_MOVE_TYPE_SPRINT;
        break;
      case FOOTSTEP_MOVE_TYPE_PRONE:
        v11 = EQUIPMENT_MOVE_TYPE_PRONE;
        break;
      default:
        break;
    }
    rattleSoundType = 0;
    priority = 0.0;
    v14 = 0;
    equipmentSoundTable = cgMedia.equipmentSoundTable;
    v16 = BG_WeaponDef(&CharacterInfo->dobjHeldWeapon, 0);
    if ( v16 )
    {
      sfxPackage = v16->sfxPackage;
      if ( sfxPackage )
      {
        rattleSoundType = sfxPackage->rattleSoundType;
        priority = equipmentSoundTable->weaponRattleTypes[rattleSoundType].priority;
        v14 = 1;
      }
    }
    v18 = BG_WeaponDef(&CharacterInfo->dobjStowedWeapon, 0);
    if ( v18 )
    {
      v19 = v18->sfxPackage;
      if ( v19 )
      {
        v20 = v19->rattleSoundType;
        if ( !v14 || priority < equipmentSoundTable->weaponRattleTypes[v20].priority )
          rattleSoundType = v20;
      }
    }
    CG_EquipmentSound(localClientNum, number, 0, leadType, v11, clothType, rattleSoundType, isQuietMove);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Event_PlayFootstepFX
==============
*/
void CG_Event_PlayFootstepFX(LocalClientNum_t localClientNum, const int entNum, const bool isLeft, const unsigned __int8 surfaceType, const vec3_t *groundPosition, const bool isPlayerView, const bool isThirdPerson, FootstepVFX *footstepVFX)
{
  const dvar_t *v12; 
  centity_t *Entity; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  FootstepVFX *footstepvfx_creep_left; 
  FxCombinedDef *v18; 
  cg_t *LocalClientGlobals; 
  float v20; 
  double Float_Internal_DebugName; 
  float v22; 
  cg_t *v23; 
  vec3_t outOrigin; 
  FXRegisteredDef def; 
  __int64 v26; 
  vec3_t origin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  v26 = -2i64;
  v12 = DCONST_DVARBOOL_cg_footstepfx;
  if ( !DCONST_DVARBOOL_cg_footstepfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footstepfx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayFootstepFX");
    Entity = CG_GetEntity(localClientNum, entNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2128, ASSERT_TYPE_ASSERT, "(sourceEnt)", (const char *)&queryFormat, "sourceEnt") )
      __debugbreak();
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2129, ASSERT_TYPE_ASSERT, "(CENextValid(sourceEnt))", (const char *)&queryFormat, "CENextValid(sourceEnt)") )
      __debugbreak();
    if ( footstepVFX )
    {
      v18 = &footstepVFX->footstepVFX[surfaceType];
    }
    else
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2136, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
        __debugbreak();
      if ( !LocalClientStatics->HasCharacterInfo(LocalClientStatics, entNum) )
        goto LABEL_59;
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, entNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2144, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( CG_IsCharacterInAir(CharacterInfo, Entity) )
        goto LABEL_59;
      if ( !CharacterInfo )
        goto LABEL_59;
      SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
      if ( !SuitDef )
        goto LABEL_59;
      switch ( CharacterInfo->footstepMoveType )
      {
        case FOOTSTEP_MOVE_TYPE_STATE_BEGIN:
        case FOOTSTEP_MOVE_TYPE_PRONE:
          if ( isLeft )
            footstepvfx_creep_left = SuitDef->footstepvfx_creep_left;
          else
            footstepvfx_creep_left = SuitDef->footstepvfx_creep_right;
          break;
        case FOOTSTEP_MOVE_TYPE_WALK:
          if ( isLeft )
            footstepvfx_creep_left = SuitDef->footstepvfx_walk_left;
          else
            footstepvfx_creep_left = SuitDef->footstepvfx_walk_right;
          break;
        case FOOTSTEP_MOVE_TYPE_RUN:
          if ( isLeft )
            footstepvfx_creep_left = SuitDef->footstepvfx_run_left;
          else
            footstepvfx_creep_left = SuitDef->footstepvfx_run_right;
          break;
        case FOOTSTEP_MOVE_TYPE_SPRINT:
        case FOOTSTEP_MOVE_TYPE_SUPERSPRINT:
        case FOOTSTEP_MOVE_TYPE_STATE_END:
        case FOOTSTEP_MOVE_TYPE_LAND_HEAVY:
        case FOOTSTEP_MOVE_TYPE_LAND_DAMAGE:
        case FOOTSTEP_MOVE_TYPE_LAND_DEATH:
        case FOOTSTEP_MOVE_TYPE_JUMP:
          if ( isLeft )
            footstepvfx_creep_left = SuitDef->footstepvfx_sprint_left;
          else
            footstepvfx_creep_left = SuitDef->footstepvfx_sprint_right;
          break;
        default:
          if ( isLeft )
            footstepvfx_creep_left = SuitDef->footstepvfx_walk_left;
          else
            footstepvfx_creep_left = SuitDef->footstepvfx_walk_right;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2223, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled FootstepMoveType_t") )
            __debugbreak();
          break;
      }
      if ( !footstepvfx_creep_left )
        goto LABEL_59;
      if ( !isLeft || (v18 = &footstepvfx_creep_left->smallFootstepVFX[surfaceType], !v18->particleSystemDef) )
      {
        v18 = &footstepvfx_creep_left->footstepVFX[surfaceType];
        if ( !v18->particleSystemDef )
          goto LABEL_59;
      }
    }
    if ( v18 && v18->particleSystemDef )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2251, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v20 = (float)((float)((float)(outOrigin.v[1] - LocalClientGlobals->refdef.viewOffset.v[1]) * (float)(outOrigin.v[1] - LocalClientGlobals->refdef.viewOffset.v[1])) + (float)((float)(outOrigin.v[0] - LocalClientGlobals->refdef.viewOffset.v[0]) * (float)(outOrigin.v[0] - LocalClientGlobals->refdef.viewOffset.v[0]))) + (float)((float)(outOrigin.v[2] - LocalClientGlobals->refdef.viewOffset.v[2]) * (float)(outOrigin.v[2] - LocalClientGlobals->refdef.viewOffset.v[2]));
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_footstepfx_maxDistance, "cg_footstepfx_maxDistance");
      if ( v20 <= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) )
      {
        angles.v[0] = 0.0;
        angles.v[2] = 0.0;
        angles.v[1] = Entity->pose.angles.v[1];
        AnglesToAxis(&angles, &axis);
        if ( isLeft )
        {
          origin.v[0] = (float)(2.5 * axis.m[1].v[0]) + outOrigin.v[0];
          origin.v[1] = (float)(2.5 * axis.m[1].v[1]) + outOrigin.v[1];
          v22 = (float)(2.5 * axis.m[1].v[2]) + outOrigin.v[2];
        }
        else
        {
          origin.v[0] = outOrigin.v[0] - (float)(2.5 * axis.m[1].v[0]);
          origin.v[1] = outOrigin.v[1] - (float)(2.5 * axis.m[1].v[1]);
          v22 = outOrigin.v[2] - (float)(2.5 * axis.m[1].v[2]);
        }
        origin.v[2] = v22;
        if ( groundPosition )
          origin.v[2] = groundPosition->v[2];
        def.m_particleSystemDef = v18->particleSystemDef;
        v23 = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def, v23->time, &origin, &axis);
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
LABEL_59:
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CG_Event_PlayFootstepShakeRumble
==============
*/
void CG_Event_PlayFootstepShakeRumble(const LocalClientNum_t localClientNum, const centity_t *const sourceEnt, const SuitDef *const suitDef)
{
  cg_t *LocalClientGlobals; 
  int number; 
  int clientNum; 
  float footstep_shakeBroadcastRadiusInches; 
  RumbleInfo *footstep_rumble; 
  vec3_t trBase; 

  if ( !sourceEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2297, ASSERT_TYPE_ASSERT, "(sourceEnt)", (const char *)&queryFormat, "sourceEnt", -2i64) )
    __debugbreak();
  if ( (sourceEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2298, ASSERT_TYPE_ASSERT, "(CENextValid( sourceEnt ))", (const char *)&queryFormat, "CENextValid( sourceEnt )") )
    __debugbreak();
  if ( suitDef )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2306, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = sourceEnt->nextState.number;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !BG_IsInAir(&LocalClientGlobals->predictedPlayerState, 0) )
    {
      footstep_shakeBroadcastRadiusInches = suitDef->footstep_shakeBroadcastRadiusInches;
      if ( clientNum == number )
      {
        footstep_shakeBroadcastRadiusInches = FLOAT_3_4028235e38;
      }
      else if ( footstep_shakeBroadcastRadiusInches <= 0.0 )
      {
LABEL_18:
        footstep_rumble = suitDef->footstep_rumble;
        if ( footstep_rumble )
        {
          if ( clientNum == number )
          {
            CG_Rumble_PlayOnClient(localClientNum, suitDef->footstep_rumble);
          }
          else if ( CG_Rumble_IsBroadcastRumble(footstep_rumble) )
          {
            CG_Rumble_PlayOnEntity(localClientNum, suitDef->footstep_rumble, sourceEnt->nextState.number);
          }
        }
        return;
      }
      if ( suitDef->footstep_shakeAmplitude > 0.0 && suitDef->footstep_shakeDurationMs > 0 )
      {
        Trajectory_GetTrBase(&sourceEnt->nextState.lerp.pos, &trBase);
        CG_StartShakeCamera(localClientNum, suitDef->footstep_shakeAmplitude, suitDef->footstep_shakeDurationMs, &trBase, footstep_shakeBroadcastRadiusInches);
        memset(&trBase, 0, sizeof(trBase));
      }
      goto LABEL_18;
    }
  }
}

/*
==============
CG_Event_PlayFootstepSound
==============
*/
void CG_Event_PlayFootstepSound(LocalClientNum_t localClientNum, const int entNum, bool isLeft, const unsigned __int8 surfaceType, ScriptableFootstepFlag footstepFlags)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  FootstepStatus v9; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  const characterInfo_t *v12; 
  int moveType; 
  int footstepActionType; 
  char clothType; 
  const characterInfo_t *CharacterInfo; 
  char v17; 
  int v18; 
  const SndAliasList *ClothFootstepCeilingSound; 
  int v20; 
  bool isLadder; 
  unsigned int v22; 
  bool IsMainThread; 
  LocalClientNum_t v24; 
  int isPlayerView; 
  CgStatic *LocalClientStatics; 
  int isQuietMove; 
  centity_t *cent; 
  SndAliasList *aliasList; 
  CgSoundSystem *SoundSystem; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2349, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2352, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2355, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayFootstepSound");
  v8 = DVARBOOL_cg_footsteps;
  if ( !DVARBOOL_cg_footsteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footsteps") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    v9 = VEC3_VALUE;
LABEL_51:
    v20 = entNum;
    goto LABEL_52;
  }
  if ( LocalClientGlobals->renderingThirdPerson || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum), IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState)) )
    IsThirdPersonMode = 1;
  v12 = NULL;
  moveType = 1;
  if ( entNum != LocalClientGlobals->predictedPlayerState.clientNum || (isPlayerView = 1, IsThirdPersonMode) )
    isPlayerView = 0;
  cent = CG_GetEntity(localClientNum, entNum);
  footstepActionType = 0;
  clothType = 0;
  if ( LocalClientStatics->HasCharacterInfo(LocalClientStatics, entNum) )
  {
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, entNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2379, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( !CharacterInfo->infoValid || (isQuietMove = 1, !BG_HasPerk(&CharacterInfo->perks, 0x1Fu)) )
      isQuietMove = 0;
    footstepActionType = CharacterInfo->footstepActionType;
    clothType = CharacterInfo->clothType;
    moveType = CharacterInfo->footstepMoveType;
  }
  else
  {
    if ( footstepFlags < SCRIPTABLE_FOOTSTEP_NONE && cent->nextState.eType == ET_ACTOR )
    {
      clothType = cent->nextState.lerp.u.actor.clothType;
      v17 = 1;
      footstepActionType = ((unsigned __int8)footstepFlags >> 2) & 1;
      v18 = 6;
      if ( (footstepFlags & 2) == 0 )
        v18 = 1;
      moveType = v18;
    }
    else
    {
      v17 = 0;
    }
    isQuietMove = 0;
    if ( !v17 )
    {
      v9 = STRUCT_POINTER|INT_VALUE;
      goto LABEL_51;
    }
  }
  aliasList = BG_GetClothFootstepMovementSound(clothType, (FootstepActionType_t)footstepActionType, (FootstepMoveType_t)moveType, isLeft, isPlayerView);
  ClothFootstepCeilingSound = BG_GetClothFootstepCeilingSound(clothType, (FootstepActionType_t)footstepActionType, (FootstepMoveType_t)moveType, isLeft, isPlayerView);
  v20 = entNum;
  if ( !aliasList )
  {
    v9 = VEC3_POINTER|INT_VALUE;
LABEL_52:
    v24 = localClientNum;
LABEL_53:
    CG_FootstepTracker_SetStatus_MostRecent(v24, v20, v9);
    goto LABEL_54;
  }
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, entNum) )
    v12 = CG_GetCharacterInfo(LocalClientGlobals, entNum);
  isLadder = cent->nextState.eType == ET_PLAYER && v12 && BG_PlayerASM_IsOnLadder(v12);
  v22 = CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, cent, aliasList, ClothFootstepCeilingSound, surfaceType, moveType, isPlayerView, isQuietMove, isLadder);
  if ( !v22 )
  {
    IsMainThread = Sys_IsMainThread();
    v20 = entNum;
    v24 = localClientNum;
    if ( IsMainThread )
      v9 = VEC3_POINTER|FLOAT_POINTER;
    else
      v9 = STRUCT_POINTER|FLOAT_POINTER;
    goto LABEL_53;
  }
  CG_FootstepTracker_BeginPlayback_MostRecent(localClientNum, entNum, v22, LocalClientGlobals->time);
LABEL_54:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Event_PlayHandGrabSound
==============
*/
void CG_Event_PlayHandGrabSound(LocalClientNum_t localClientNum, const int entNum, const bool isLeft, const unsigned __int8 surfaceType)
{
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool v9; 
  bool v10; 
  centity_t *Entity; 
  int viewheight_stand; 
  const characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  FootstepStatus v17; 
  SndAliasList *ladderGrabRightPlr; 
  double FootstepVolumeScale; 
  unsigned int v20; 
  __int64 v21; 
  CgSoundSystem *SoundSystem; 
  vec3_t trBase; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayHandGrabSound");
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2452, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2455, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v9 = 0;
  }
  v10 = entNum == LocalClientGlobals->predictedPlayerState.clientNum && !v9;
  Entity = CG_GetEntity(localClientNum, entNum);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  viewheight_stand = 60;
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v21) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2469, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v21, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, entNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entNum);
      if ( CharacterInfo )
      {
        SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2474, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        viewheight_stand = SuitDef->viewheight_stand;
      }
    }
  }
  trBase.v[2] = (float)viewheight_stand + trBase.v[2];
  v15 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled && (entNum != LocalClientGlobals->predictedPlayerState.clientNum || !v9) )
    CG_FootstepTracker_Add(localClientNum, entNum, LocalClientGlobals->time, &trBase);
  v16 = DVARBOOL_cg_footsteps;
  if ( !DVARBOOL_cg_footsteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footsteps") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled )
  {
    v17 = VEC3_VALUE;
LABEL_52:
    CG_FootstepTracker_SetStatus_MostRecent(localClientNum, entNum, v17);
    goto LABEL_53;
  }
  ladderGrabRightPlr = cgMedia.ladderGrabRightPlr;
  if ( isLeft )
    ladderGrabRightPlr = cgMedia.ladderGrabLeftPlr;
  if ( !v10 )
  {
    ladderGrabRightPlr = cgMedia.ladderGrabRightNpc;
    if ( isLeft )
      ladderGrabRightPlr = cgMedia.ladderGrabLeftNpc;
  }
  FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, -1, v10);
  v20 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, ladderGrabRightPlr, surfaceType, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0);
  if ( !v20 )
  {
    v17 = VEC3_POINTER|FLOAT_POINTER;
    goto LABEL_52;
  }
  CG_FootstepTracker_BeginPlayback_MostRecent(localClientNum, entNum, v20, LocalClientGlobals->time);
LABEL_53:
  memset(&trBase, 0, sizeof(trBase));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Event_UnpackEquipmentEventParam
==============
*/
void CG_Event_UnpackEquipmentEventParam(const unsigned int eventParm, MovementLeadType_t *leadType, unsigned __int8 *clothType, unsigned __int8 *rattleSoundType, EquipmentMoveType_t *moveType)
{
  if ( !leadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2104, ASSERT_TYPE_ASSERT, "(leadType)", (const char *)&queryFormat, "leadType") )
    __debugbreak();
  if ( !clothType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2105, ASSERT_TYPE_ASSERT, "(clothType)", (const char *)&queryFormat, "clothType") )
    __debugbreak();
  if ( !rattleSoundType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2106, ASSERT_TYPE_ASSERT, "(rattleSoundType)", (const char *)&queryFormat, "rattleSoundType") )
    __debugbreak();
  if ( !moveType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2107, ASSERT_TYPE_ASSERT, "(moveType)", (const char *)&queryFormat, "moveType") )
    __debugbreak();
  *clothType = eventParm & 0xF;
  *moveType = (eventParm >> 4) & 7;
  *rattleSoundType = (eventParm >> 7) & 0xF;
  *leadType = (eventParm >> 11) & 3;
}

/*
==============
CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents
==============
*/
__int64 CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents(const LocalClientNum_t localClientNum, const centity_t *cent, const bool printWarnings, const bool usingSharedLowLodEventBuffer)
{
  const dvar_t *v8; 
  int lowLod; 
  int v10; 
  int v11; 
  const char *EventTypeName; 
  char *fmt; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4668, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4669, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) < ( ComCharacterLimits::GetClientMaxCount() )", "%s < %s\n\t%i, %i", "cent->nextState.number", "ComCharacterLimits::GetClientMaxCount()", cent->nextState.number, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  if ( !usingSharedLowLodEventBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4670, ASSERT_TYPE_ASSERT, "(usingSharedLowLodEventBuffer)", (const char *)&queryFormat, "usingSharedLowLodEventBuffer") )
    __debugbreak();
  if ( cent->previousEventSequence.lowLod == cent->nextState.eventSequence.lowLod )
    return 0i64;
  if ( printWarnings )
  {
    v8 = DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning;
    if ( !DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_enableDroppedLowLodEventWarning") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      lowLod = cent->previousEventSequence.lowLod;
      v10 = cent->nextState.eventSequence.lowLod;
      v11 = lowLod - 4;
      if ( lowLod <= v10 + 1 )
        v11 = cent->previousEventSequence.lowLod;
      if ( (unsigned int)(v10 - v11) > 1 )
      {
        EventTypeName = BG_GetEventTypeName(cent->nextState.events[3].eventType);
        LODWORD(fmt) = 1;
        Com_PrintWarning(14, "Dropping %i low lod events on entity %i, we can only handle %i (MAX_LOW_LOD_EVENTS) per frame.  The surviving event is %s\n", (unsigned int)(cent->nextState.eventSequence.lowLod - v11 - 1), (unsigned int)cent->nextState.number, fmt, EventTypeName);
      }
    }
  }
  return 1i64;
}

/*
==============
CG_Events_CalculatePreviousEventSequence_HighLodEvents
==============
*/
__int64 CG_Events_CalculatePreviousEventSequence_HighLodEvents(LocalClientNum_t localClientNum, const centity_t *cent, const bool printWarnings, const bool usingSharedLowLodEventBuffer, EventSequence *outPreviousEventSequence)
{
  __int16 highLod; 
  bool IsEntityHighLoD; 
  bool v12; 
  int v13; 
  __int16 v14; 
  const char *v15; 
  __int16 v16; 
  unsigned int v17; 
  const char *EventTypeName; 
  const char *v19; 
  const char *v20; 
  __int16 v21; 
  char *fmt; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4705, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !usingSharedLowLodEventBuffer && cent->nextState.eventSequence.highLod != cent->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4706, ASSERT_TYPE_ASSERT, "(usingSharedLowLodEventBuffer || cent->nextState.eventSequence.highLod == cent->nextState.eventSequence.combined)", (const char *)&queryFormat, "usingSharedLowLodEventBuffer || cent->nextState.eventSequence.highLod == cent->nextState.eventSequence.combined") )
    __debugbreak();
  highLod = cent->nextState.eventSequence.highLod;
  if ( cent->previousEventSequence.highLod == highLod || !highLod )
  {
    outPreviousEventSequence->combined = (int)cent->nextState.eventSequence;
    return 0i64;
  }
  else
  {
    IsEntityHighLoD = CG_IsEntityHighLoD(localClientNum, cent->nextState.number);
    v12 = CG_WasEntityHighLoD(localClientNum, cent->nextState.number);
    if ( IsEntityHighLoD && !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4728, ASSERT_TYPE_ASSERT, "(!isHighLoD || wasHighLoD)", "%s\n\tentity %d transitioning from low to high lod: previousEventSequence %d (!= cent->nextState.eventSequence %d) should have been reset in CG_SnapshotMP_SetNextSnap\n", "!isHighLoD || wasHighLoD", cent->nextState.number, cent->previousEventSequence.highLod, cent->nextState.eventSequence.highLod) )
      __debugbreak();
    outPreviousEventSequence->lowLod = cent->nextState.eventSequence.lowLod;
    v13 = BG_EventSeqWrapAround(cent->nextState.eventSequence.highLod, cent->previousEventSequence.highLod);
    v14 = v13;
    v15 = (char *)&queryFormat.fmt + 3;
    if ( (unsigned int)(v13 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v13, "signed", v13) )
      __debugbreak();
    outPreviousEventSequence->highLod = v14;
    v16 = cent->nextState.eventSequence.highLod;
    v17 = (unsigned __int16)(!usingSharedLowLodEventBuffer + 3);
    if ( v16 - v14 > (int)v17 )
    {
      if ( printWarnings )
      {
        if ( v17 <= 3 )
          EventTypeName = (char *)&queryFormat.fmt + 3;
        else
          EventTypeName = BG_GetEventTypeName(cent->nextState.events[3].eventType);
        if ( v17 <= 2 )
          v19 = (char *)&queryFormat.fmt + 3;
        else
          v19 = BG_GetEventTypeName(cent->nextState.events[2].eventType);
        if ( v17 > 1 )
          v15 = BG_GetEventTypeName(cent->nextState.events[1].eventType);
        v20 = BG_GetEventTypeName(cent->nextState.events[0].eventType);
        LODWORD(fmt) = v17;
        Com_PrintWarning(14, "Dropping %i events on entity %i, we can only handle %i (MAX_EVENTS) per frame.  The surviving events are %s, %s, %s, %s\n", cent->nextState.eventSequence.highLod - outPreviousEventSequence->highLod - v17, (unsigned int)cent->nextState.number, fmt, v20, v15, v19, EventTypeName);
        v16 = cent->nextState.eventSequence.highLod;
      }
      v21 = v16 - v17;
      outPreviousEventSequence->highLod = v21;
      v14 = v21;
      v16 = cent->nextState.eventSequence.highLod;
    }
    if ( v14 < v16 )
    {
      return 1i64;
    }
    else
    {
      outPreviousEventSequence->combined = (int)cent->nextState.eventSequence;
      return 0i64;
    }
  }
}

/*
==============
CG_GenericEquipmentSound
==============
*/
void CG_GenericEquipmentSound(LocalClientNum_t localClientNum, int entNum, SndAliasList *aliasList, int isPlayerView, int isQuietMove)
{
  const dvar_t *v9; 
  centity_t *Entity; 
  double FootstepVolumeScale; 
  float v12; 
  const char *v13; 
  const dvar_t *v14; 
  double Float_Internal_DebugName; 
  CgSoundSystem *SoundSystem; 
  vec3_t trBase; 
  __int64 v18; 

  v18 = -2i64;
  v9 = DVARBOOL_cg_equipmentSounds;
  if ( !DVARBOOL_cg_equipmentSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_equipmentSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    FootstepVolumeScale = CG_GameInterface_GetFootstepVolumeScale(localClientNum, Entity, isPlayerView);
    v12 = *(float *)&FootstepVolumeScale;
    if ( *(float *)&FootstepVolumeScale < 0.0 )
    {
      v12 = FLOAT_1_0;
      if ( isQuietMove )
      {
        if ( isPlayerView )
        {
          v13 = "perk_equipmentVolumeQuietPlayer";
          v14 = DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer;
        }
        else
        {
          v13 = "perk_equipmentVolumeQuietNPC";
          v14 = DCONST_DVARFLT_perk_equipmentVolumeQuietNPC;
        }
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v14, v13);
        v12 = *(float *)&Float_Internal_DebugName;
      }
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, float, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entNum, &trBase, aliasList, COERCE_FLOAT(LODWORD(v12)), LODWORD(FLOAT_1_0), 0);
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
CG_GetBoneIndex
==============
*/
int CG_GetBoneIndex(LocalClientNum_t localClientNum, const int dobjHandle, scr_string_t boneName, unsigned __int16 *boneIndex)
{
  const DObj *ClientDObj; 
  int v11; 
  int outModelIndex; 

  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v11 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v11) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( ClientDObj )
    LODWORD(ClientDObj) = DObjGetBoneAndModelIndexClient(ClientDObj, boneName, boneIndex, &outModelIndex);
  return (int)ClientDObj;
}

/*
==============
CG_GetFxInfoFromParam
==============
*/
__int64 CG_GetFxInfoFromParam(const LocalClientNum_t localClientNum, const unsigned int eventParam, const FXRegisteredDef **outFxDef, unsigned int *outBoneIndex, unsigned int *outClientNum)
{
  char m_effectBits; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  CgDynamicMedia *CgDynamicMedia; 
  __int64 result; 
  char *fmt; 
  __int64 v15; 

  if ( !outFxDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 616, ASSERT_TYPE_ASSERT, "(outFxDef)", (const char *)&queryFormat, "outFxDef") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 617, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  if ( !outClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 618, ASSERT_TYPE_ASSERT, "(outClientNum)", (const char *)&queryFormat, "outClientNum") )
    __debugbreak();
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( !BgDynamicLimits::ms_data.m_effectBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
    __debugbreak();
  m_effectBits = BgDynamicLimits::ms_data.m_effectBits;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
    __debugbreak();
  v9 = (unsigned __int8)(eventParam >> m_effectBits);
  v10 = eventParam & ((1 << m_effectBits) - 1);
  v11 = ((1 << SLOBYTE(ComCharacterLimits::ms_gameData.m_clientBits)) - 1) & (eventParam >> (m_effectBits + 8));
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  if ( CgDynamicMedia::IsValidFx(CgDynamicMedia, v10) && v11 < ComCharacterLimits::GetCharacterMaxCount() )
  {
    *outFxDef = CgDynamicMedia::GetFx(CgDynamicMedia, v10);
    *outBoneIndex = v9;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v11 >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v15) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 642, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientId doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v15, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    *outClientNum = v11;
    return 1i64;
  }
  else
  {
    LODWORD(fmt) = v11;
    Com_PrintWarning(14, "Invalid PlayFx parameter. Fx %i, Bone %i, Client %i\n", v10, v9, fmt);
    result = 0i64;
    *outFxDef = NULL;
    *outBoneIndex = 0;
    *outClientNum = 0;
  }
  return result;
}

/*
==============
CG_GetMeleeStartEnd
==============
*/
void CG_GetMeleeStartEnd(LocalClientNum_t localClientNum, const entityState_t *es, const Weapon *weapon, bool isAlternate, vec3_t *outMeleeStart, vec3_t *outMeleeEnd)
{
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  float v11; 
  float v12; 
  float v13; 
  int number; 
  const cg_t *v15; 
  const characterInfo_t *CharacterInfo; 
  int meleeChargeEnt; 
  bool HasPerk; 
  bool isSliding; 
  bool v20; 
  double MeleeRangeByWeapon; 
  float v22; 
  float v23; 
  bool v24; 
  vec3_t outForward; 
  vec3_t outUp; 
  vec3_t outRight; 

  v24 = isAlternate;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1671, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob", v24) )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1673, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  CG_CalcEyePoint(localClientNum, es->number, outMeleeStart);
  CG_GetViewDirection(localClientNum, es->number, &outForward, &outRight, &outUp);
  v11 = outMeleeStart->v[1];
  outMeleeStart->v[0] = outMeleeStart->v[0] - (float)(10.0 * outForward.v[0]);
  v12 = v11 - (float)(10.0 * outForward.v[1]);
  v13 = outMeleeStart->v[2];
  outMeleeStart->v[1] = v12;
  outMeleeStart->v[2] = v13 - (float)(10.0 * outForward.v[2]);
  number = es->number;
  v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v15, number);
  if ( CharacterInfo )
    meleeChargeEnt = CharacterInfo->meleeChargeEnt;
  else
    meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
  HasPerk = BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x14u);
  isSliding = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
  v20 = meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE;
  MeleeRangeByWeapon = BG_GetMeleeRangeByWeapon(weapon, v24, v20, HasPerk, PM_EFF_STANCE_DEFAULT, isSliding);
  v22 = *(float *)&MeleeRangeByWeapon * outForward.v[1];
  v23 = *(float *)&MeleeRangeByWeapon * outForward.v[2];
  outMeleeEnd->v[0] = (float)(*(float *)&MeleeRangeByWeapon * outForward.v[0]) + outMeleeStart->v[0];
  outMeleeEnd->v[1] = v22 + outMeleeStart->v[1];
  outMeleeEnd->v[2] = v23 + outMeleeStart->v[2];
}

/*
==============
CG_GetNoAmmoSound_Internal
==============
*/
SndAliasList *CG_GetNoAmmoSound_Internal(const WeaponSFXPackage *sfxPackage, bool isPlayerView, bool isDualWield, PlayerHandIndex hand, bool willRegenAmmo)
{
  SndAliasList *Alias; 
  WeaponSFXPackageSounds *sounds; 
  const char **v11; 
  const char *v12; 
  char *v13; 
  const char *v14; 
  SndAliasList *result; 
  const dvar_t *v16; 
  char dest[128]; 

  Alias = NULL;
  if ( !sfxPackage )
    return Alias;
  sounds = sfxPackage->sounds;
  v11 = &sounds->emptyRegenFireSound.name + isPlayerView;
  if ( !willRegenAmmo )
    v11 = &sounds->emptyFireSound.name + isPlayerView;
  v12 = *v11;
  if ( !isPlayerView || !isDualWield )
    goto LABEL_11;
  if ( !v12 )
    return Alias;
  Core_strcpy(dest, 0x80ui64, v12);
  v13 = strstr_0(dest, "_plr");
  if ( !v13 )
    goto LABEL_11;
  *v13 = 0;
  v14 = "1_plr";
  if ( hand == WEAPON_HAND_LEFT )
    v14 = "2_plr";
  I_strcat(dest, 0x80ui64, v14);
  result = SND_TryFindAlias(dest);
  Alias = result;
  if ( !result )
  {
LABEL_11:
    if ( v12 )
    {
      Alias = SND_TryFindAlias(v12);
      if ( !Alias )
      {
        v16 = DCONST_DVARBOOL_snd_bankDetailStreamingFallback;
        if ( !DCONST_DVARBOOL_snd_bankDetailStreamingFallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_bankDetailStreamingFallback") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          if ( sfxPackage->transientFallbackPackage == sfxPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2069, ASSERT_TYPE_ASSERT, "(sfxPackage->transientFallbackPackage != sfxPackage)", (const char *)&queryFormat, "sfxPackage->transientFallbackPackage != sfxPackage") )
            __debugbreak();
          return (SndAliasList *)CG_GetNoAmmoSound_Internal(sfxPackage->transientFallbackPackage, isPlayerView, isDualWield, hand, willRegenAmmo);
        }
        else
        {
          SND_Missing(v12);
        }
      }
    }
    return Alias;
  }
  return result;
}

/*
==============
CG_GetTagOrientation
==============
*/
bool CG_GetTagOrientation(LocalClientNum_t localClientNum, int dobjHandle, scr_string_t boneName, orientation_t *orientation)
{
  const DObj *ClientDObj; 
  int v11; 
  int outModelIndex[6]; 
  unsigned __int16 outBoneIndex; 

  outBoneIndex = 254;
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v11 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v11) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  return ClientDObj && DObjGetBoneAndModelIndexClient(ClientDObj, boneName, &outBoneIndex, outModelIndex) && CG_Entity_GetBoneOrientation(localClientNum, dobjHandle, outBoneIndex, orientation);
}

/*
==============
CG_GrabWeapon
==============
*/
void CG_GrabWeapon(LocalClientNum_t localClientNum, int entityNum, int event, const Weapon *weapon, const bool isAlternate, bool isPlayerView)
{
  CgSoundSystem *SoundSystem; 
  __int64 v11; 
  const SndAliasList *WeaponSoundWithFallback; 
  const WeaponDef *v13; 
  cg_t *LocalClientGlobals; 

  if ( (unsigned __int16)(weapon->weaponIdx - 1) > 0x224u )
    return;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  BG_WeaponDef(weapon, 0);
  if ( event == 14 )
  {
    v11 = 8i64 * isPlayerView + 8;
LABEL_6:
    WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(weapon, isAlternate, v11);
    CgSoundSystem::PlayEntitySoundAlias(SoundSystem, entityNum, WeaponSoundWithFallback);
    goto LABEL_7;
  }
  if ( event == 15 )
  {
    v11 = 8i64 * isPlayerView + 24;
    goto LABEL_6;
  }
LABEL_7:
  if ( isPlayerView )
  {
    v13 = BG_WeaponDef(weapon, 0);
    if ( !BG_IsScavengerPickup(weapon) && BG_GetWeaponClass(weapon, 0) != WEAPCLASS_ITEM )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( v13->offhandClass )
      {
        if ( !LocalClientGlobals->equippedOffHand.weaponIdx )
          CG_SetEquippedOffHand(localClientNum, weapon);
      }
      else if ( !LocalClientGlobals->weaponSelect.weaponIdx )
      {
        CG_SelectWeapon(localClientNum, weapon, 0);
      }
    }
  }
}

/*
==============
CG_HandleTimeOutExplosionEvent
==============
*/
bool CG_HandleTimeOutExplosionEvent(const unsigned int eventParm, const LocalClientNum_t localClientNum, bool isPlayerView, const vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const bool isAlternate)
{
  CgSoundSystem *SoundSystem; 
  const SndAliasList *v11; 
  int v12; 
  const ParticleSystemDef *particleSystemDef; 
  cg_t *LocalClientGlobals; 
  FXRegisteredDef def; 

  if ( (eventParm & 0xFFFFFF00) != 256 )
    return 0;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( BG_ProjDisabledTimeoutEffect(weapon, isAlternate) )
    return 1;
  v11 = BG_ProjTimeoutSound(weapon, isAlternate);
  v12 = 0;
  particleSystemDef = BG_ProjTimeoutEffect(weapon, isAlternate).particleSystemDef;
  if ( v11 )
  {
    CgSoundSystem::PlaySoundAlias(SoundSystem, 2046, position, v11);
    v12 = 1;
  }
  if ( particleSystemDef )
  {
    def.m_particleSystemDef = particleSystemDef;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, position, axis);
    ++v12;
  }
  return v12 != 0;
}

/*
==============
CG_KillBoltedEffects
==============
*/
void CG_KillBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  const DObj *ClientDObj; 
  int v10; 
  int outModelIndex[6]; 
  unsigned __int16 outBoneIndex; 

  outBoneIndex = 254;
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v10 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v10) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( ClientDObj )
  {
    if ( DObjGetBoneAndModelIndexClient(ClientDObj, boneName, &outBoneIndex, outModelIndex) )
      FX_KillBoltedEffects(localClientNum, fxDef, dobjHandle, outBoneIndex);
  }
}

/*
==============
CG_LadderSlideSound
==============
*/
void CG_LadderSlideSound(LocalClientNum_t localClientNum, const int entNum, const int surfaceType, const LadderSlideAudioState state, bool isPlayerView)
{
  __int64 v5; 
  CgSoundSystem *SoundSystem; 
  centity_t *Entity; 
  double FootstepVolumeScale; 
  const dvar_t *v12; 
  const char *v13; 
  const char *v14; 
  float v15; 
  vec4_t v16; 
  vec3_t trBase; 
  __int64 v18; 
  vec4_t color; 
  SndAliasList *ladderSlideStopSoundPlayer; 
  SndAliasList *ladderSlideStopSound; 
  char _Buffer[1024]; 

  v18 = -2i64;
  v5 = (unsigned __int8)state;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  Entity = CG_GetEntity(localClientNum, entNum);
  FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, 3, isPlayerView);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  *(_QWORD *)color.v = cgMedia.ladderSlideStartSoundPlayer;
  *(_QWORD *)&color.xyz.z = cgMedia.ladderSlideStartSound;
  ladderSlideStopSoundPlayer = cgMedia.ladderSlideStopSoundPlayer;
  ladderSlideStopSound = cgMedia.ladderSlideStopSound;
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, _QWORD, const int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, *(_QWORD *)&color.v[4 * v5 + 2 * !isPlayerView], surfaceType, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0);
  v12 = DCONST_DVARBOOL_cg_drawLadderSlideAudio;
  if ( !DCONST_DVARBOOL_cg_drawLadderSlideAudio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLadderSlideAudio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = "remoteClient";
    if ( isPlayerView )
      v13 = "localClient";
    v14 = NULL;
    color = colorBlack;
    v15 = 0.0;
    if ( (_BYTE)v5 )
    {
      if ( (unsigned __int8)v5 == 1 )
      {
        v14 = "SlideStop";
        v16 = colorRed;
        v15 = FLOAT_350_0;
LABEL_14:
        color = v16;
        goto LABEL_15;
      }
      if ( (unsigned __int8)v5 != 2 )
      {
LABEL_15:
        j_sprintf(_Buffer, "%s %s audio is playing\n", v13, v14);
        CL_AddDebugString2D(400.0, v15, &color, 1.5, _Buffer, 0, 10);
        goto LABEL_16;
      }
      v14 = "Undefined";
      v16 = colorWhite;
    }
    else
    {
      v14 = "SlideStart";
      v16 = colorGreen;
    }
    v15 = FLOAT_250_0;
    goto LABEL_14;
  }
LABEL_16:
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
CG_LandingSound
==============
*/
void CG_LandingSound(LocalClientNum_t localClientNum, int entNum, int surfaceType, FootstepMoveType_t moveType, int isPlayerView, unsigned int clothType, int isQuietMove, int isFootstepSound)
{
  const dvar_t *v8; 
  const centity_t *Entity; 
  double FootstepVolumeScale; 
  const dvar_t *v15; 
  const char *v16; 
  CgSoundSystem *SoundSystem; 
  const SndAliasList *ClothFootstepMovementSound; 
  const SndAliasList *ClothFootstepCeilingSound; 

  v8 = DVARBOOL_cg_landingSounds;
  if ( !DVARBOOL_cg_landingSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_landingSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    FootstepVolumeScale = CG_GameInterface_GetFootstepVolumeScale(localClientNum, Entity, isPlayerView);
    if ( *(float *)&FootstepVolumeScale < 0.0 && isQuietMove )
    {
      if ( isFootstepSound )
      {
        if ( isPlayerView )
        {
          v15 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayer;
          v16 = "perk_footstepVolumeQuietPlayer";
        }
        else
        {
          v15 = DCONST_DVARFLT_perk_footstepVolumeQuietNPC;
          v16 = "perk_footstepVolumeQuietNPC";
        }
      }
      else if ( isPlayerView )
      {
        v15 = DCONST_DVARFLT_perk_fallVolumeQuietPlayer;
        v16 = "perk_fallVolumeQuietPlayer";
      }
      else
      {
        v15 = DCONST_DVARFLT_perk_fallVolumeQuietNPC;
        v16 = "perk_fallVolumeQuietNPC";
      }
      Dvar_GetFloat_Internal_DebugName(v15, v16);
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    ClothFootstepMovementSound = BG_GetClothFootstepMovementSound(clothType, FOOTSTEP_ACTION_TYPE_STEP, moveType, 0, isPlayerView);
    ClothFootstepCeilingSound = BG_GetClothFootstepCeilingSound(clothType, FOOTSTEP_ACTION_TYPE_STEP, moveType, 0, isPlayerView);
    if ( ClothFootstepMovementSound )
      CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, Entity, ClothFootstepMovementSound, ClothFootstepCeilingSound, surfaceType, moveType, isPlayerView, isQuietMove, 0);
  }
}

/*
==============
CG_MeleeEventEffectCallback
==============
*/
void CG_MeleeEventEffectCallback(const LocalClientNum_t localClientNum, unsigned int hitBody, unsigned int shapeKey, const vec3_t *start, const vec3_t *hitPos, const int hitSurfaceFlags, const vec3_t *hitNormal, const scr_string_t *partName, const unsigned int inflictorEntNum, const Weapon *weapon, bool isAlternate, int mod)
{
  const vec3_t *v15; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  const DynEntityDef *Def; 
  unsigned int runtimeInstanceCount; 
  unsigned int v20; 
  __int64 v21; 
  Weapon *v22; 
  unsigned int dynEntIdOut; 

  Sys_ProfBeginNamedEvent(0xFF008008, "CG_MeleeEventEffectCallback");
  if ( Physics_IsRigidBodyValid((Physics_WorldId)(3 * localClientNum + 3), hitBody) )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "Play Melee Sound");
    v15 = hitPos;
    CG_PlayMeleeWorldImpactSound(localClientNum, (hitSurfaceFlags >> 19) & 0x3F, inflictorEntNum, hitPos, mod);
    Sys_ProfEndNamedEvent();
    Ref = Physics_GetRef((Physics_WorldId)(3 * localClientNum + 3), hitBody);
    RefSystem = Physics_GetRefSystem(Ref);
    Sys_ProfBeginNamedEvent(0xFF008008, "Scriptable Damage Check");
    if ( RefSystem == Physics_RefSystem_DynEnts )
    {
      DynEnt_GetBasisAndDynEntId(Ref, localClientNum, (DynEntityBasis *)&mod, &dynEntIdOut);
      Def = DynEnt_GetDef(dynEntIdOut, (DynEntityBasis)mod);
      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1731, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( Def->type == DYNENT_TYPE_SCRIPTABLEINST )
      {
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
          __debugbreak();
        if ( Def->scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
        {
          LODWORD(v21) = Def->scriptableMapIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1738, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "dynEntDef->scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v21, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
            __debugbreak();
        }
        ScriptableCommon_AssertCountsInitialized();
        runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
          __debugbreak();
        v20 = Def->scriptableMapIndex + cm.mapEnts->scriptableMapEnts.lootInstanceCount + runtimeInstanceCount;
        ScriptableCommon_AssertCountsInitialized();
        if ( v20 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v22) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(v21) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1741, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        ScriptableCl_EntityBulletHitEvent(localClientNum, v20, inflictorEntNum, start, v15, 8, weapon, isAlternate, *partName);
      }
    }
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayBoltedEffect
==============
*/
ParticleSystemHandle CG_PlayBoltedEffect(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  const DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  int v12; 
  int outModelIndex[6]; 
  unsigned __int16 outBoneIndex; 

  outBoneIndex = 254;
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v12 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v12) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( !ClientDObj || !DObjGetBoneAndModelIndexClient(ClientDObj, boneName, &outBoneIndex, outModelIndex) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return FX_PlayBoltedEffect(localClientNum, fxDef, LocalClientGlobals->time, dobjHandle, outBoneIndex, 0);
}

/*
==============
CG_PlayBoltedEffectOnSecondTag
==============
*/
void CG_PlayBoltedEffectOnSecondTag(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  const DObj *ClientDObj; 
  const DObj *v9; 
  unsigned __int8 v10; 
  unsigned __int8 NextBoneIndex; 
  cg_t *LocalClientGlobals; 
  __int64 spawnFlags; 
  __int64 v15; 
  int v16; 
  int outModelIndex[4]; 
  unsigned __int16 outBoneIndex; 

  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v16 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v16) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( ClientDObj )
  {
    outBoneIndex = 254;
    if ( (unsigned int)dobjHandle >= 0x9E5 )
    {
      LODWORD(v15) = 2533;
      LODWORD(spawnFlags) = dobjHandle;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", spawnFlags, v15) )
        __debugbreak();
    }
    v9 = Com_GetClientDObj(dobjHandle, localClientNum);
    if ( v9 && DObjGetBoneAndModelIndexClient(v9, boneName, &outBoneIndex, outModelIndex) )
    {
      v10 = outBoneIndex;
      if ( outBoneIndex > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)outBoneIndex, "unsigned", outBoneIndex) )
        __debugbreak();
      NextBoneIndex = DObjGetNextBoneIndex(ClientDObj, boneName, v10);
      if ( NextBoneIndex != 0xFF )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayBoltedEffect(localClientNum, fxDef, LocalClientGlobals->time, dobjHandle, NextBoneIndex, 0);
      }
    }
  }
}

/*
==============
CG_PlayDudImpactSoundAndEffect
==============
*/
void CG_PlayDudImpactSoundAndEffect(const LocalClientNum_t localClientNum, bool isPlayerView, const vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const bool isAlternate, const unsigned int surfType)
{
  CgSoundSystem *SoundSystem; 
  SndAliasList *bulletHitLargeSound; 
  unsigned int v13; 
  CgSoundSystem *v14; 
  const SndAliasList *v15; 
  unsigned int v16; 
  FXRegisteredDef *v17; 
  __int64 v18; 
  FXRegisteredDef *v19; 
  cg_t *LocalClientGlobals; 
  FxCombinedDef v21; 
  cg_t *v22; 
  FXRegisteredDef *outFx; 
  __int64 v24; 
  FXRegisteredDef v25; 
  FXRegisteredDef def[8]; 

  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  bulletHitLargeSound = cgMedia.npcImpactSounds.bulletHitLargeSound;
  if ( isPlayerView )
    bulletHitLargeSound = cgMedia.playerImpactSounds.bulletHitLargeSound;
  v13 = 0;
  v14 = SoundSystem;
  ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, const unsigned int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2046i64, position, bulletHitLargeSound, surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
  v15 = BG_ProjDudSound(weapon, isAlternate);
  if ( v15 )
    CgSoundSystem::PlaySoundAlias(v14, 2046, position, v15);
  if ( cgMedia.impactFx )
  {
    v16 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)14);
    if ( v16 >= cgMedia.impactFx->impactTypeCount )
    {
      LODWORD(v24) = cgMedia.impactFx->impactTypeCount;
      LODWORD(outFx) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", outFx, v24) )
        __debugbreak();
    }
    v17 = def;
    v18 = 2i64;
    do
    {
      FXRegisteredDef::FXRegisteredDef(v17++);
      --v18;
    }
    while ( v18 );
    CG_GetImpactEffectList(v16, surfType, 0, 0, 0, def);
    v19 = def;
    do
    {
      if ( v19->m_particleSystemDef )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def[v13], LocalClientGlobals->time, position, axis);
      }
      ++v13;
      ++v19;
    }
    while ( v13 < 2 );
    v21.particleSystemDef = BG_ProjDudEffect(weapon, isAlternate).particleSystemDef;
    if ( v21.particleSystemDef )
    {
      v25.m_particleSystemDef = v21.particleSystemDef;
      v22 = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffect(localClientNum, &v25, v22->time, position, axis);
    }
  }
}

/*
==============
CG_PlayFxBetweenPoints
==============
*/
void CG_PlayFxBetweenPoints(LocalClientNum_t localClientNum, centity_t *cent, const vec3_t *pos, const vec3_t *angles, const vec3_t *end)
{
  __int64 v7; 
  CgDynamicMedia *CgDynamicMedia; 
  unsigned int v10; 
  const FXRegisteredDef *Fx; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v13; 
  ParticleSystem *v14; 
  unsigned int v15; 
  __int64 v16; 
  float v17; 
  __m128 v; 
  float v22; 
  __m128 v24; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m256i v33; 
  __m256i v34; 
  float4 endPos; 
  float4 startPos; 
  tmat33_t<vec3_t> axis; 

  v7 = localClientNum;
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  v10 = truncate_cast<int,unsigned int>(cent->nextState.eventParm);
  if ( CgDynamicMedia::IsValidFx(CgDynamicMedia, v10) )
  {
    Fx = CgDynamicMedia::GetFx(CgDynamicMedia, v10);
    if ( !Fx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 925, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
      __debugbreak();
    AnglesToAxis(angles, &axis);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    v13 = FX_PlayOrientedEffect((LocalClientNum_t)v7, Fx, LocalClientGlobals->time, pos, &axis);
    v14 = NULL;
    v15 = v13 & 0xFFF;
    if ( g_particleSystemsGeneration[4096 * v7 + (v13 & 0xFFF)].__all32 != v13 )
      v15 = 0;
    v16 = (v7 << 12) + v15;
    if ( g_particleSystems[0][v16] >= (ParticleSystem *)0x1000 )
      v14 = g_particleSystems[0][v16];
    if ( v14 )
    {
      v17 = pos->v[0];
      endPos.v.m128_i32[3] = 0;
      v = endPos.v;
      v.m128_f32[0] = v17;
      _XMM3 = v;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
      }
      v22 = end->v[0];
      endPos.v = _XMM3;
      startPos.v = _XMM3;
      endPos.v.m128_i32[3] = 0;
      v24 = endPos.v;
      v24.m128_f32[0] = v22;
      _XMM3 = v24;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r12+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+8], 20h ; ' '
      }
      endPos.v = _XMM3;
      ParticleSystem::SetBeamPos(v14, &startPos, &endPos);
      v27 = startPos.v;
      v14->m_systemTransform.w = (float4)startPos.v;
      v28 = v14->m_systemTransform.z.v;
      v29 = _mm_shuffle_ps(v14->m_systemTransform.x.v, v14->m_systemTransform.y.v, 68);
      v30 = _mm_shuffle_ps(v14->m_systemTransform.x.v, v14->m_systemTransform.y.v, 238);
      v31 = _mm_shuffle_ps(v28, v27, 68);
      v32 = _mm_shuffle_ps(v28, v27, 238);
      *(__m128 *)&v33.m256i_u64[2] = _mm_shuffle_ps(v29, v31, 221);
      *(__m128 *)v33.m256i_i8 = _mm_shuffle_ps(v29, v31, 136);
      *(__m128 *)v34.m256i_i8 = _mm_shuffle_ps(v30, v32, 136);
      *(__m128 *)&v34.m256i_u64[2] = _mm_shuffle_ps(v30, v32, 221);
      *(__m256i *)v14->m_systemTransformTranspose.x.v.m128_f32 = v33;
      *(__m256i *)v14->m_systemTransformTranspose.z.v.m128_f32 = v34;
    }
  }
  else
  {
    Com_PrintError(21, "ERROR: PlayFxBetweenPoints called with invalid effect id %i\n", v10);
  }
}

/*
==============
CG_PlayGrenadeBounceSoundAndEffect
==============
*/
void CG_PlayGrenadeBounceSoundAndEffect(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const BounceIntensityAlias intensityIndex, const bool isAlternate, const bool isStickEvent)
{
  unsigned int v12; 
  const SndAliasList *WeaponSoundWithFallback; 
  CgSoundSystem *SoundSystem; 
  __int64 *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 *v18; 
  int v19; 
  int v20; 
  __int64 *v21; 
  bool v22; 
  __int64 offset[2]; 
  __int64 v24; 

  *(_OWORD *)offset = _xmm;
  v24 = 672i64;
  v22 = isAlternate;
  v12 = 0;
  WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(weapon, isAlternate, offset[intensityIndex]);
  if ( WeaponSoundWithFallback || (WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(weapon, isAlternate, 664i64)) != NULL )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD, _DWORD, const bool))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)es->number, position, WeaponSoundWithFallback, es->surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0, isAlternate);
  }
  if ( cgMedia.impactFx )
  {
    v15 = offset;
    v16 = 2i64;
    do
    {
      FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)v15++);
      --v16;
    }
    while ( v16 );
    v17 = 0;
    v18 = &offset[1];
    do
    {
      v17 += 2;
      *(v18 - 1) = 0i64;
      *v18 = 0i64;
      v18 += 2;
    }
    while ( v17 < 2 );
    if ( isStickEvent && BG_GetWeaponClass(weapon, v22) == WEAPCLASS_THROWINGKNIFE )
    {
      v19 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)8);
      CG_GetImpactEffectList(v19, es->surfType, 0, 0, 0, (FXRegisteredDef *)offset);
    }
    if ( !offset[0] )
    {
      v20 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)9);
      CG_GetImpactEffectList(v20, es->surfType, 0, 0, 0, (FXRegisteredDef *)offset);
    }
    v21 = offset;
    do
    {
      if ( *v21 )
        CGMovingPlatforms::PlayDynamicBoltEffect(es, localClientNum, (const FXRegisteredDef *const)&offset[v12], position, axis);
      ++v12;
      ++v21;
    }
    while ( v12 < 2 );
  }
}

/*
==============
CG_PlayMeleeCharacterImpactSound
==============
*/
void CG_PlayMeleeCharacterImpactSound(const LocalClientNum_t localClientNum, const entityState_t *eventEs, const int attackerEntNum, const unsigned int eventParm, vec3_t *victimOrigin)
{
  cg_t *LocalClientGlobals; 
  int otherEntityNum; 
  int clientNum; 
  bool v12; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  bool v15; 
  int v16; 
  CgSoundSystem *SoundSystem; 
  bool outIsAltMelee; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  MeleeResult result; 
  unsigned int variant; 
  WeaponMaterialType outMaterial; 
  MeleeAnimType outAttackerAnim; 
  int outClothType; 
  float outImpactHeight; 
  LocalClientNum_t localClientNuma; 
  SndAliasList *aliasList; 
  __int64 v29; 
  vec3_t v; 
  vec3_t origin; 

  v29 = -2i64;
  localClientNuma = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1551, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  otherEntityNum = eventEs->otherEntityNum;
  BG_UnpackMeleeCharacterImpactParam(eventParm, &outClothType, &outAttackerAnim, &outMaterial, &outIsAltMelee, (int *)&variant, &result, &outImpactHeight);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v12 = clientNum == attackerEntNum || clientNum == otherEntityNum;
  aliasList = BG_GetClothMeleeCharacterImpactSound(outClothType, outAttackerAnim, outMaterial, outIsAltMelee, variant, result, v12);
  if ( aliasList )
  {
    Entity = CG_GetEntity(localClientNum, attackerEntNum);
    p_pose = &Entity->pose;
    v15 = Entity && (Entity->flags & 1) != 0;
    v16 = 2046;
    if ( v12 && v15 )
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_GetPoseOrigin(p_pose, &outOrigin);
      if ( clientNum == otherEntityNum )
      {
        v.v[0] = outOrigin.v[0] - LocalClientGlobals->predictedPlayerState.origin.v[0];
        v.v[1] = outOrigin.v[1] - LocalClientGlobals->predictedPlayerState.origin.v[1];
        v.v[2] = outOrigin.v[2] - LocalClientGlobals->predictedPlayerState.origin.v[2];
        Vec3NormalizeFast(&v);
        v16 = otherEntityNum;
      }
      else
      {
        if ( clientNum != attackerEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1604, ASSERT_TYPE_ASSERT, "(isPlayerViewAttacker)", (const char *)&queryFormat, "isPlayerViewAttacker") )
          __debugbreak();
        v.v[0] = victimOrigin->v[0] - outOrigin.v[0];
        v.v[1] = victimOrigin->v[1] - outOrigin.v[1];
        v.v[2] = victimOrigin->v[2] - outOrigin.v[2];
        Vec3NormalizeFast(&v);
        v16 = attackerEntNum;
      }
      origin.v[0] = (float)(s_meleeImpactViewOffset * v.v[0]) + outOrg.v[0];
      origin.v[1] = (float)(s_meleeImpactViewOffset * v.v[1]) + outOrg.v[1];
      origin.v[2] = (float)(s_meleeImpactViewOffset * v.v[2]) + outOrg.v[2];
      memset(&outOrigin, 0, sizeof(outOrigin));
      memset(&outOrg, 0, sizeof(outOrg));
    }
    else
    {
      *(_QWORD *)origin.v = *(_QWORD *)victimOrigin->v;
      origin.v[2] = outImpactHeight + victimOrigin->v[2];
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNuma);
    if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1621, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
      __debugbreak();
    CgSoundSystem::PlaySoundAlias(SoundSystem, v16, &origin, aliasList);
  }
}

/*
==============
CG_PlayMeleeWorldImpactSound
==============
*/
void CG_PlayMeleeWorldImpactSound(const LocalClientNum_t localClientNum, int surfType, int attackerEntNum, const vec3_t *impactOrigin, const unsigned int eventParm)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  SndAliasList *MeleeWorldImpactSound; 
  CgSoundSystem *SoundSystem; 
  bool outIsAltMelee; 
  int outVariant; 
  WeaponMaterialType outMaterial; 
  MeleeAnimType outAttackerAnim; 
  vec3_t outOrg; 
  __int64 v18; 
  int v19[4]; 

  v18 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1629, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BG_UnpackMeleeParam(eventParm, &outAttackerAnim, &outMaterial, &outIsAltMelee, &outVariant);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  MeleeWorldImpactSound = BG_GetMeleeWorldImpactSound(outAttackerAnim, outMaterial, outIsAltMelee, outVariant, attackerEntNum == clientNum);
  if ( MeleeWorldImpactSound )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1649, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
      __debugbreak();
    if ( attackerEntNum == clientNum )
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      *(float *)v19 = (float)(soundOffset * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
      *(float *)&v19[1] = (float)(soundOffset * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
      *(float *)&v19[2] = (float)(soundOffset * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)attackerEntNum, v19, MeleeWorldImpactSound, surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    else
    {
      ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2047i64, impactOrigin, MeleeWorldImpactSound, surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
    }
  }
}

/*
==============
CG_PlayMountEnterExitSound
==============
*/
void CG_PlayMountEnterExitSound(LocalClientNum_t localClientNum, const centity_t *const cent, const Weapon *weapon, bool isAlternate, int event, int eventParm, bool isPlayerView)
{
  WeaponSFXPackage *SfxPackage; 
  const char *szMountEnterExitString; 
  const WeaponDef *v13; 
  WeaponSFXPackage *v14; 
  cg_t *LocalClientGlobals; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 
  CgSoundSystem *SoundSystem; 
  __int64 v24; 
  char *outResultString; 
  vec3_t outOrg; 
  SndAliasList *aliasList[2]; 
  vec3_t outOrigin; 
  char v29[64]; 

  aliasList[1] = (SndAliasList *)-2i64;
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  if ( SfxPackage )
  {
    szMountEnterExitString = SfxPackage->szMountEnterExitString;
    if ( szMountEnterExitString )
      goto LABEL_8;
    v13 = BG_WeaponDef(weapon, isAlternate);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1797, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    v14 = v13->sfxPackage;
    if ( v14 )
    {
      szMountEnterExitString = v14->szMountEnterExitString;
      if ( szMountEnterExitString )
      {
LABEL_8:
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        if ( isPlayerView )
        {
          v16 = (float)((float)(forwardOffset * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0]) + (float)(COERCE_FLOAT(LODWORD(downOffset) ^ _xmm) * LocalClientGlobals->refdef.view.axis.m[2].v[0]);
          outOrigin.v[0] = v16;
          v17 = (float)((float)(forwardOffset * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1]) + (float)(COERCE_FLOAT(LODWORD(downOffset) ^ _xmm) * LocalClientGlobals->refdef.view.axis.m[2].v[1]);
          outOrigin.v[1] = v17;
          v18 = (float)((float)(forwardOffset * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2]) + (float)(COERCE_FLOAT(LODWORD(downOffset) ^ _xmm) * LocalClientGlobals->refdef.view.axis.m[2].v[2]);
        }
        else
        {
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          v18 = outOrigin.v[2] + upOffset;
          v17 = outOrigin.v[1];
          v16 = outOrigin.v[0];
        }
        outOrigin.v[2] = v18;
        v19 = (float)((float)((float)(v17 - outOrg.v[1]) * (float)(v17 - outOrg.v[1])) + (float)((float)(v16 - outOrg.v[0]) * (float)(v16 - outOrg.v[0]))) + (float)((float)(v18 - outOrg.v[2]) * (float)(v18 - outOrg.v[2]));
        v20 = DCONST_DVARFLT_cg_mountFoleyCullDistance;
        if ( !DCONST_DVARFLT_cg_mountFoleyCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mountFoleyCullDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( (float)(v20->current.value * v20->current.value) >= v19 )
        {
          if ( (unsigned int)eventParm >= 4 )
          {
            LODWORD(outResultString) = 4;
            LODWORD(v24) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1841, ASSERT_TYPE_ASSERT, "(unsigned)( mountType ) < (unsigned)( COUNT_MOUNT_TYPE )", "mountType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v24, outResultString) )
              __debugbreak();
          }
          if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1842, ASSERT_TYPE_ASSERT, "( mountType ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountType", "MOUNT_TYPE_NONE", 0, 0i64) )
            __debugbreak();
          number = cent->nextState.number;
          if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
          {
            CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number);
            if ( CharacterInfo )
            {
              aliasList[0] = NULL;
              BG_BuildMountEnterExitSound(cgMedia.equipmentSoundTable, event == 215, eventParm == 1, szMountEnterExitString, CharacterInfo->clothType, isPlayerView, v29, 64, aliasList);
              if ( aliasList[0] )
              {
                SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
                if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1861, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
                  __debugbreak();
                CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, &outOrigin, aliasList[0]);
              }
            }
          }
        }
        memset(&outOrg, 0, sizeof(outOrg));
      }
    }
  }
}

/*
==============
CG_PlayMountImpactSound
==============
*/
void CG_PlayMountImpactSound(LocalClientNum_t localClientNum, const centity_t *const cent, const Weapon *weapon, bool isAlternate, const vec3_t *mountPoint, int eventParm, bool isPlayerView)
{
  WeaponSFXPackage *SfxPackage; 
  WeaponSFXPackage *v10; 
  cg_t *LocalClientGlobals; 
  float v12; 
  const dvar_t *v13; 
  CgSoundSystem *SoundSystem; 
  SndAliasList **outAliasList; 
  __int64 v16; 
  SndAliasList *aliasList; 
  vec3_t outOrg; 
  __int64 v19; 
  char outResultString[64]; 

  v19 = -2i64;
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  v10 = SfxPackage;
  if ( SfxPackage && SfxPackage->szMountImpactString )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v12 = (float)((float)((float)(mountPoint->v[1] - outOrg.v[1]) * (float)(mountPoint->v[1] - outOrg.v[1])) + (float)((float)(mountPoint->v[0] - outOrg.v[0]) * (float)(mountPoint->v[0] - outOrg.v[0]))) + (float)((float)(mountPoint->v[2] - outOrg.v[2]) * (float)(mountPoint->v[2] - outOrg.v[2]));
    v13 = DCONST_DVARFLT_cg_mountFoleyCullDistance;
    if ( !DCONST_DVARFLT_cg_mountFoleyCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mountFoleyCullDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( (float)(v13->current.value * v13->current.value) >= v12 )
    {
      if ( (unsigned int)eventParm >= 4 )
      {
        LODWORD(v16) = 4;
        LODWORD(outAliasList) = eventParm;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1886, ASSERT_TYPE_ASSERT, "(unsigned)( mountType ) < (unsigned)( COUNT_MOUNT_TYPE )", "mountType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outAliasList, v16) )
          __debugbreak();
      }
      if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1887, ASSERT_TYPE_ASSERT, "( mountType ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountType", "MOUNT_TYPE_NONE", 0, 0i64) )
        __debugbreak();
      aliasList = NULL;
      BG_BuildMountImpactSound(eventParm == 1, v10->szMountImpactString, isPlayerView, outResultString, 64, &aliasList);
      if ( aliasList )
      {
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1900, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
          __debugbreak();
        CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, mountPoint, aliasList);
      }
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_PlayProjectileExplosionSoundAndEffect
==============
*/
void CG_PlayProjectileExplosionSoundAndEffect(const LocalClientNum_t localClientNum, const entityState_t *es, const vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const bool isAlternate, const int attachEffect)
{
  cg_t *LocalClientGlobals; 
  const SndAliasList *v12; 
  CgSoundSystem *SoundSystem; 
  void (__fastcall *PlayExplosionSoundAsync)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v15; 
  FXRegisteredDef def; 

  def.m_particleSystemDef = BG_ProjExplosionEffect(weapon, isAlternate).particleSystemDef;
  if ( def.m_particleSystemDef )
  {
    if ( attachEffect )
    {
      CGMovingPlatforms::PlayDynamicBoltEffect(es, localClientNum, &def, position, axis);
    }
    else
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, position, axis);
    }
  }
  v12 = BG_ProjExplosionSound(weapon, isAlternate);
  if ( v12 )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    PlayExplosionSoundAsync = SoundSystem->PlayExplosionSoundAsync;
    v15 = BG_ProjExplosionReflectionClass(weapon, isAlternate);
    ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, const SndAliasList *, _DWORD, unsigned int, const ParticleSystemDef *))PlayExplosionSoundAsync)(SoundSystem, 2046i64, position, v12, es->surfType, v15, def.m_particleSystemDef);
  }
}

/*
==============
CG_PlayProjectileImpactSoundAndEffect
==============
*/
void CG_PlayProjectileImpactSoundAndEffect(const LocalClientNum_t localClientNum, const entityState_t *es, const vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const bool isAlternate, const int attachEffect)
{
  int number; 
  FXRegisteredDef *v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  FXRegisteredDef *v16; 
  cg_t *LocalClientGlobals; 
  CgSoundSystem *SoundSystem; 
  CgSoundSystem_vtbl *v19; 
  unsigned int v20; 
  FxCombinedDef v21; 
  unsigned int v22; 
  scr_string_t tag_fx; 
  const DObj *ClientDObj; 
  Weapon *v25; 
  __int64 v26; 
  unsigned __int16 outBoneIndex[2]; 
  int outModelIndex; 
  SndAliasList *outSnd; 
  FXRegisteredDef defHandle; 
  FXRegisteredDef def[3]; 
  bool outIsSfxExplosion; 

  if ( es->eType != ET_MISSILE || (number = es->staticState.mover.moverFlags, number == 2047) )
    number = es->number;
  v12 = def;
  v13 = 2i64;
  do
  {
    FXRegisteredDef::FXRegisteredDef(v12++);
    --v13;
  }
  while ( v13 );
  v14 = 0;
  CG_GetImpactEffectForWeapon(localClientNum, number, es->lerp.u.anonymous.data[5], 0, 0, weapon, isAlternate, es->surfType, 0, SND_HIT_ARMOR_TYPE_NONE, def, (const SndAliasList **)&outSnd, &outIsSfxExplosion);
  v15 = attachEffect;
  v16 = def;
  do
  {
    if ( v16->m_particleSystemDef )
    {
      if ( v15 )
      {
        CGMovingPlatforms::PlayDynamicBoltEffect(es, localClientNum, &def[v14], position, axis);
      }
      else
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def[v14], LocalClientGlobals->time, position, axis);
      }
    }
    ++v14;
    ++v16;
  }
  while ( v14 < 2 );
  if ( outSnd )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    v19 = SoundSystem->__vftable;
    if ( outIsSfxExplosion )
    {
      v20 = BG_ProjExplosionReflectionClass(weapon, isAlternate);
      v19->PlayExplosionSoundAsync(SoundSystem, 2046, position, outSnd, es->surfType, v20);
    }
    else
    {
      ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD, _DWORD))v19->PlaySurfaceSound)(SoundSystem, 2046i64, position, outSnd, es->surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
    }
  }
  v21.particleSystemDef = BG_ProjBodyEffect(weapon, isAlternate).particleSystemDef;
  if ( v21.particleSystemDef )
  {
    v22 = es->number;
    tag_fx = scr_const.tag_fx;
    defHandle.m_particleSystemDef = v21.particleSystemDef;
    outBoneIndex[0] = 254;
    if ( v22 >= 0x9E5 )
    {
      LODWORD(v26) = 2533;
      LODWORD(v25) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    ClientDObj = Com_GetClientDObj(v22, localClientNum);
    if ( ClientDObj )
    {
      if ( DObjGetBoneAndModelIndexClient(ClientDObj, tag_fx, outBoneIndex, &outModelIndex) )
        FX_KillBoltedEffects(localClientNum, &defHandle, v22, outBoneIndex[0]);
    }
  }
}

/*
==============
CG_PlayTrophyEffects
==============
*/
void CG_PlayTrophyEffects(LocalClientNum_t localClientNum, const vec3_t *missileOrigin, const tmat33_t<vec3_t> *explosionAxis, int tankEntIndex)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  scr_string_t v9; 
  centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v17; 
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  scr_string_t *trophyTags; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int i; 
  scr_string_t v26; 
  DObjAnimMat *LocalBoneMatrix; 
  LocalClientNum_t v28; 
  unsigned int number; 
  const DObj *v30; 
  cg_t *v31; 
  __int64 spawnFlags; 
  unsigned __int16 inOutIndex[2]; 
  LocalClientNum_t localClientNuma; 
  FXRegisteredDef def; 
  FXRegisteredDef v36; 
  const vec3_t *v37; 
  const VehicleDef *v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 

  v37 = missileOrigin;
  v9 = 0;
  localClientNuma = localClientNum;
  v36.m_particleSystemDef = NULL;
  Entity = CG_GetEntity(localClientNum, tankEntIndex);
  if ( Entity )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    v17 = ClientDef;
    v38 = ClientDef;
    if ( ClientDef->trophyExplodeFx.particleSystemDef )
    {
      def.m_particleSystemDef = ClientDef->trophyExplodeFx.particleSystemDef;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, missileOrigin, explosionAxis);
    }
    if ( v17->trophyFlashFx.particleSystemDef )
    {
      ClientDObj = Com_GetClientDObj(tankEntIndex, localClientNum);
      if ( ClientDObj )
      {
        v42 = v4;
        trophyTags = v17->trophyTags;
        v21 = FLOAT_3_4028235e38;
        v41 = v5;
        v22 = *(float *)&localClientNuma;
        v40 = v6;
        v23 = *(float *)&localClientNuma;
        v39 = v7;
        v24 = *(float *)&localClientNuma;
        for ( i = 0; i < 4; ++i )
        {
          v26 = *trophyTags;
          if ( !*trophyTags )
            break;
          if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
            __debugbreak();
          LOBYTE(inOutIndex[0]) = -2;
          if ( DObjGetBoneIndexInternal_47(ClientDObj, v26, (unsigned __int8 *)inOutIndex, (int *)&def) )
          {
            LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&Entity->pose, ClientDObj, LOBYTE(inOutIndex[0]));
            if ( LocalBoneMatrix )
            {
              v22 = LocalBoneMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
              v24 = LocalBoneMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
              v23 = LocalBoneMatrix->trans.v[1] + g_activeRefDef->viewOffset.v[1];
            }
          }
          if ( (float)((float)((float)((float)(v37->v[1] - v23) * (float)(v37->v[1] - v23)) + (float)((float)(v37->v[0] - v22) * (float)(v37->v[0] - v22))) + (float)((float)(v37->v[2] - v24) * (float)(v37->v[2] - v24))) < v21 )
          {
            v9 = *trophyTags;
            v21 = (float)((float)((float)(v37->v[1] - v23) * (float)(v37->v[1] - v23)) + (float)((float)(v37->v[0] - v22) * (float)(v37->v[0] - v22))) + (float)((float)(v37->v[2] - v24) * (float)(v37->v[2] - v24));
          }
          ++trophyTags;
        }
        v28 = localClientNuma;
        if ( v21 != 3.4028235e38 )
        {
          v36.m_particleSystemDef = v38->trophyFlashFx.particleSystemDef;
          if ( !v36.m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1223, ASSERT_TYPE_ASSERT, "(trophyFlashFxDef.IsValid())", (const char *)&queryFormat, "trophyFlashFxDef.IsValid()") )
            __debugbreak();
          number = Entity->nextState.number;
          strcpy((char *)inOutIndex, "þ");
          if ( number >= 0x9E5 )
          {
            LODWORD(spawnFlags) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", spawnFlags, 2533) )
              __debugbreak();
          }
          v30 = Com_GetClientDObj(number, v28);
          if ( v30 )
          {
            if ( DObjGetBoneAndModelIndexClient(v30, v9, inOutIndex, (int *)&def) )
            {
              v31 = CG_GetLocalClientGlobals(v28);
              FX_PlayBoltedEffect(v28, &v36, v31->time, number, inOutIndex[0], 0);
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_SND_VerifyTracerAndWhizbySpeeds
==============
*/
void CG_SND_VerifyTracerAndWhizbySpeeds(const bitarray<64> perks, const Weapon *r_weapon, bool isAlternate)
{
  const dvar_t *v3; 
  double TracerSpeed; 
  float v8; 
  const WeaponSFXPackage *SfxPackage; 
  const SndWhizby *Whizby; 
  const SndWhizby *v11; 
  float bulletSpeed; 
  TracerDef *v13; 
  double v14; 
  TracerDef *v15; 

  v3 = DCONST_DVARBOOL_cg_snd_debugwhizby;
  if ( !DCONST_DVARBOOL_cg_snd_debugwhizby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_snd_debugwhizby") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    TracerSpeed = CG_GetTracerSpeed(perks, r_weapon, isAlternate);
    v8 = *(float *)&TracerSpeed;
    SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
    Whizby = SND_GetWhizby(SfxPackage);
    v11 = Whizby;
    if ( Whizby )
    {
      bulletSpeed = Whizby->bulletSpeed;
      if ( bulletSpeed <= v8 )
      {
        v14 = v8;
      }
      else
      {
        v13 = BG_TracerType(perks, r_weapon, isAlternate);
        v14 = v8;
        Com_PrintWarning(9, "Bullet speed for whizby %s is faster than the tracer %s %f > %f\n", v11->name, v13->name, v11->bulletSpeed, v8);
        bulletSpeed = v11->bulletSpeed;
      }
      if ( (float)(bulletSpeed + 2000.0) < v8 )
      {
        v15 = BG_TracerType(perks, r_weapon, isAlternate);
        Com_PrintWarning(9, "Bullet speed for whizby %s is a lot slower the tracer %s %f < %f\n", v11->name, v15->name, v11->bulletSpeed, v14);
      }
    }
  }
}

/*
==============
CG_SlideSound
==============
*/
void CG_SlideSound(LocalClientNum_t localClientNum, int entNum, SndAliasList *aliasList, int surfaceType, int isPlayerView)
{
  CgSoundSystem *SoundSystem; 
  centity_t *Entity; 
  double FootstepVolumeScale; 
  vec3_t trBase; 

  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  Entity = CG_GetEntity(localClientNum, entNum);
  FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, 3, isPlayerView);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, _DWORD, _DWORD, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, aliasList, surfaceType, LODWORD(FootstepVolumeScale), LODWORD(FLOAT_1_0), 0, -2i64);
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
CG_StopBoltedEffects
==============
*/
void CG_StopBoltedEffects(LocalClientNum_t localClientNum, const FXRegisteredDef *fxDef, int dobjHandle, scr_string_t boneName)
{
  const DObj *ClientDObj; 
  int v10; 
  int outModelIndex[6]; 
  unsigned __int16 outBoneIndex; 

  outBoneIndex = 254;
  if ( (unsigned int)dobjHandle >= 0x9E5 )
  {
    v10 = 2533;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, v10) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  if ( ClientDObj )
  {
    if ( DObjGetBoneAndModelIndexClient(ClientDObj, boneName, &outBoneIndex, outModelIndex) )
      FX_StopBoltedEffects(localClientNum, fxDef, dobjHandle, outBoneIndex);
  }
}

/*
==============
CG_StopWeaponSound
==============
*/
void CG_StopWeaponSound(const LocalClientNum_t localClientNum, bool isPlayerView, const Weapon *r_weapon, const bool isAlternate, const int entitynum, weaponstate_t weaponstate)
{
  CgSoundSystem *SoundSystem; 
  bool v10; 
  const Weapon *v11; 
  __int64 v12; 
  SndAliasLookup v13; 
  SndAliasLookup v14; 
  SndAliasLookup v15; 

  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  switch ( weaponstate )
  {
    case WEAPON_RELOADING:
      if ( isPlayerView )
      {
        v13.name = BG_GetWeaponSoundLookup(r_weapon, isAlternate, 408i64).name;
        CgSoundSystem::StopSoundAlias(SoundSystem, entitynum, v13);
        v12 = 392i64;
      }
      else
      {
        v14.name = BG_GetWeaponSoundLookup(r_weapon, isAlternate, 400i64).name;
        CgSoundSystem::StopSoundAlias(SoundSystem, entitynum, v14);
        v12 = 384i64;
      }
      v11 = r_weapon;
      v10 = isAlternate;
      break;
    case WEAPON_RELOAD_START:
      v10 = isAlternate;
      v11 = r_weapon;
      if ( isPlayerView )
        v12 = 424i64;
      else
        v12 = 416i64;
      break;
    case WEAPON_RELOAD_END:
      v10 = isAlternate;
      v11 = r_weapon;
      if ( isPlayerView )
        v12 = 440i64;
      else
        v12 = 432i64;
      break;
    case WEAPON_RELOAD_END_RECHAMBER:
      v10 = isAlternate;
      v11 = r_weapon;
      if ( isPlayerView )
        v12 = 456i64;
      else
        v12 = 448i64;
      break;
    default:
      return;
  }
  v15.name = BG_GetWeaponSoundLookup(v11, v10, v12).name;
  CgSoundSystem::StopSoundAlias(SoundSystem, entitynum, v15);
}

/*
==============
CG_UpdateMissileEventOrientation
==============
*/
void CG_UpdateMissileEventOrientation(entityState_t *es, int eventParam, tmat33_t<vec3_t> *axis)
{
  tmat33_t<vec3_t> *v5; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1282, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ByteToDir(eventParam, axis->m);
  v5 = (tmat33_t<vec3_t> *)&axis->m[1];
  PerpendicularVector(axis->m, &axis->m[2]);
  if ( &axis->row2 == &axis->row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( axis == v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v5->m[0].v[0] = (float)(axis->m[0].v[2] * axis->m[2].v[1]) - (float)(axis->m[0].v[1] * axis->m[2].v[2]);
  axis->m[1].v[1] = (float)(axis->m[2].v[2] * axis->m[0].v[0]) - (float)(axis->m[0].v[2] * axis->m[2].v[0]);
  axis->m[1].v[2] = (float)(axis->m[0].v[1] * axis->m[2].v[0]) - (float)(axis->m[2].v[1] * axis->m[0].v[0]);
}

/*
==============
CG_UsePreciseSoundLocation
==============
*/
bool CG_UsePreciseSoundLocation()
{
  return 0;
}

/*
==============
CL_LandingRumble
==============
*/
void CL_LandingRumble(const LocalClientNum_t localClientNum, const int event)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const SuitDef *SuitDef; 
  float v7; 
  const RumbleInfo *landing_rumbleLowHeight; 
  const char *v9; 
  const dvar_t *v10; 
  double Float_Internal_DebugName; 
  const dvar_t *v12; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 533, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(p_predictedPlayerState->suitIndex);
  if ( SuitDef )
  {
    v7 = 0.0;
    switch ( event )
    {
      case 181:
      case 185:
        landing_rumbleLowHeight = SuitDef->landing_rumbleLowHeight;
        v9 = "handheldCameraImpulseLandingModifierLow";
        v10 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow;
        goto LABEL_10;
      case 182:
      case 186:
        landing_rumbleLowHeight = SuitDef->landing_rumbleMediumHeight;
        v9 = "handheldCameraImpulseLandingModifierMedium";
        v10 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium;
        goto LABEL_10;
      case 183:
      case 187:
        landing_rumbleLowHeight = SuitDef->landing_rumbleHighHeight;
        v9 = "handheldCameraImpulseLandingModifierHigh";
        v10 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh;
        goto LABEL_10;
      case 184:
      case 188:
        landing_rumbleLowHeight = SuitDef->landing_rumbleExtremeHeight;
        v9 = "handheldCameraImpulseLandingModifierExtreme";
        v10 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme;
LABEL_10:
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v10, v9);
        v7 = *(float *)&Float_Internal_DebugName;
        if ( landing_rumbleLowHeight )
          CG_Rumble_PlayOnClient(localClientNum, landing_rumbleLowHeight);
        break;
      default:
        break;
    }
    v12 = DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled;
    if ( !DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      CG_Shake_Impulse(localClientNum, MOVEMENT, v7);
  }
}

/*
==============
CgEventSystem::CalculatePreviousEventSequence
==============
*/
__int64 CgEventSystem::CalculatePreviousEventSequence(CgEventSystem *this, const centity_t *cent, const bool printWarnings, const bool usingSharedLowLodEventBuffer, bool *outPerformLowLodEvents, EventSequence *outPreviousEventSequence)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4770, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->previousEventSequence.combined == cent->nextState.eventSequence.combined )
  {
    *outPerformLowLodEvents = 0;
    outPreviousEventSequence->combined = (int)cent->nextState.eventSequence;
  }
  else
  {
    if ( !CgEventSystem::LowLodEventsEnabledForEntity(this, cent, usingSharedLowLodEventBuffer) )
    {
      *outPerformLowLodEvents = 0;
      return CG_Events_CalculatePreviousEventSequence_HighLodEvents(this->m_localClientNum, cent, printWarnings, usingSharedLowLodEventBuffer, outPreviousEventSequence);
    }
    *outPerformLowLodEvents = (unsigned int)CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents((const LocalClientNum_t)this->m_localClientNum, cent, printWarnings, usingSharedLowLodEventBuffer) != 0;
    outPreviousEventSequence->highLod = cent->nextState.eventSequence.highLod;
    outPreviousEventSequence->lowLod = cent->previousEventSequence.lowLod;
  }
  return 0i64;
}

/*
==============
CgEventSystem::CheckEntityEvents
==============
*/
void CgEventSystem::CheckEntityEvents(CgEventSystem *this, centity_t *cent, const int eventFlags)
{
  entityType_s eType; 
  cg_t *LocalClientGlobals; 
  bool v8; 
  EventSequence v9; 
  EventSequence *p_previousEventSequence; 
  int v11; 
  LocalClientNum_t m_localClientNum; 
  bool v13; 
  int v14; 
  unsigned __int16 highLod; 
  unsigned int v16; 
  int v17; 
  __int64 eventType; 
  const char *EntityTypeName; 
  __int128 v23; 
  __int64 v25; 
  entityType_s v26; 
  const char *v27; 
  __int64 v32; 
  __int64 v33; 
  bool v34; 
  unsigned int eventParm; 
  const CgEventLodData *v37; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4832, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType >= ET_EVENTS )
  {
    LODWORD(v32) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4833, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType < ET_EVENTS ) )", "( cent->nextState.eType ) = %i", v32) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4836, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v8 = cent->nextState.number < (int)ComCharacterLimits::ms_gameData.m_clientCount && LocalClientGlobals->m_usingLowLodClientEntityEvents;
  v9.combined = (int)cent->nextState.eventSequence;
  p_previousEventSequence = &cent->previousEventSequence;
  if ( cent->previousEventSequence.combined == v9.combined )
  {
    p_previousEventSequence->combined = v9.combined;
    goto LABEL_29;
  }
  v11 = CgEventSystem::LowLodEventsEnabledForEntity(this, cent, v8);
  m_localClientNum = this->m_localClientNum;
  if ( !v11 )
  {
    v13 = 0;
    v34 = 0;
    v14 = CG_Events_CalculatePreviousEventSequence_HighLodEvents(m_localClientNum, cent, 1, v8, &cent->previousEventSequence);
    if ( v14 )
      goto LABEL_21;
LABEL_29:
    if ( p_previousEventSequence->combined != cent->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4844, ASSERT_TYPE_ASSERT, "( cent->previousEventSequence.combined ) == ( cent->nextState.eventSequence.combined )", "%s == %s\n\t%i, %i", "cent->previousEventSequence.combined", "cent->nextState.eventSequence.combined", p_previousEventSequence->combined, cent->nextState.eventSequence.combined) )
      __debugbreak();
    return;
  }
  v17 = CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents(m_localClientNum, cent, 1, v8);
  p_previousEventSequence->highLod = cent->nextState.eventSequence.highLod;
  v13 = v17 != 0;
  v14 = 0;
  v34 = v17 != 0;
  cent->previousEventSequence.lowLod = cent->previousEventSequence.lowLod;
  if ( !v17 )
    goto LABEL_29;
LABEL_21:
  CgSimBulletFirePellet_EnableWorkers(1);
  v37 = this->GetEntityEventLodDataIfSupported(this, cent, (unsigned int)eventFlags);
  eventParm = cent->nextState.eventParm;
  if ( !v14 && p_previousEventSequence->highLod != cent->nextState.eventSequence.highLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4857, ASSERT_TYPE_ASSERT, "(performHighLodEvents || cent->previousEventSequence.highLod == cent->nextState.eventSequence.highLod)", (const char *)&queryFormat, "performHighLodEvents || cent->previousEventSequence.highLod == cent->nextState.eventSequence.highLod") )
    __debugbreak();
  highLod = p_previousEventSequence->highLod;
  if ( p_previousEventSequence->highLod != cent->nextState.eventSequence.highLod )
  {
    do
    {
      if ( v8 )
        v16 = highLod % 3u;
      else
        v16 = highLod & 3;
      if ( v16 >= 4 )
      {
        LODWORD(v33) = 4;
        LODWORD(v32) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4861, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( ( sizeof( *array_counter( cent->nextState.events ) ) + 0 ) )", "eventIndex doesn't index cent->nextState.events\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      eventType = cent->nextState.events[v16].eventType;
      cent->nextState.eventParm = cent->nextState.events[v16].eventParm;
      if ( (unsigned int)(eventType + 32797) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)(eventType + 29), "signed", (int)eventType + 29) )
        __debugbreak();
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)(eventType + 29));
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
      __rdtsc();
      this->HandleEntityEvent(this, cent, eventType, eventFlags, v37);
      __rdtsc();
      _XMM0 = 0i64;
      ++g_perfEventNum[eventType];
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v23 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM1 = v23;
      g_perfEventTime[eventType] = *(double *)&_XMM0 * msecPerRawTimerTick + g_perfEventTime[eventType];
      __asm { vmaxsd  xmm0, xmm1, rva ?g_perfEventMax@@3PANA[rbx+rdi*8]; double near * g_perfEventMax }
      g_perfEventMax[eventType] = *(double *)&_XMM0;
      Sys_ProfEndNamedEvent();
      ++highLod;
    }
    while ( highLod != cent->nextState.eventSequence.highLod );
    v13 = v34;
    p_previousEventSequence = &cent->previousEventSequence;
  }
  if ( v13 )
  {
    v25 = cent->nextState.events[3].eventType;
    cent->nextState.eventParm = cent->nextState.events[3].eventParm;
    v26 = truncate_cast<enum entityType_s,int>(v25 + 29);
    v27 = BG_GetEntityTypeName(v26);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v27);
    __rdtsc();
    this->HandleEntityEvent(this, cent, v25, eventFlags, v37);
    __rdtsc();
    ++g_perfEventNum[v25];
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    g_perfEventTime[v25] = *(double *)&_XMM0 * msecPerRawTimerTick + g_perfEventTime[v25];
    _XMM0 = *(unsigned __int64 *)&g_perfEventMax[v25];
    __asm { vmaxsd  xmm1, xmm0, xmm1 }
    g_perfEventMax[v25] = *(double *)&_XMM1;
    Sys_ProfEndNamedEvent();
  }
  CgSimBulletFirePellet_EnableWorkers(0);
  cent->nextState.eventParm = eventParm;
  p_previousEventSequence->combined = (int)cent->nextState.eventSequence;
}

/*
==============
CgEventSystem::CheckEventSequence
==============
*/
__int64 CgEventSystem::CheckEventSequence(CgEventSystem *this, centity_t *cent, const bool usingSharedLowLodEventBuffer, bool *outPerformLowLodEvents)
{
  EventSequence *p_previousEventSequence; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4795, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_previousEventSequence = &cent->previousEventSequence;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4770, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( p_previousEventSequence->combined == cent->nextState.eventSequence.combined )
  {
    *outPerformLowLodEvents = 0;
    p_previousEventSequence->combined = (int)cent->nextState.eventSequence;
  }
  else
  {
    if ( !CgEventSystem::LowLodEventsEnabledForEntity(this, cent, usingSharedLowLodEventBuffer) )
    {
      *outPerformLowLodEvents = 0;
      return CG_Events_CalculatePreviousEventSequence_HighLodEvents(this->m_localClientNum, cent, 1, usingSharedLowLodEventBuffer, &cent->previousEventSequence);
    }
    *outPerformLowLodEvents = (unsigned int)CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents((const LocalClientNum_t)this->m_localClientNum, cent, 1, usingSharedLowLodEventBuffer) != 0;
    p_previousEventSequence->highLod = cent->nextState.eventSequence.highLod;
    cent->previousEventSequence.lowLod = cent->previousEventSequence.lowLod;
  }
  return 0i64;
}

/*
==============
CgEventSystem::CheckPlayerEvents
==============
*/
void CgEventSystem::CheckPlayerEvents(CgEventSystem *this, const playerState_s *ps, const transPlayerState_t *ops)
{
  centity_t *predictedPlayerEntity; 
  int v7; 
  int eventSequence; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int eventType; 
  entityType_s eType; 
  const char *EntityTypeName; 
  int i; 
  __int64 v17; 
  int v18; 
  const char *v19; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4932, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ops && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4933, ASSERT_TYPE_ASSERT, "(ops)", (const char *)&queryFormat, "ops") )
    __debugbreak();
  predictedPlayerEntity = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerEntity;
  if ( (predictedPlayerEntity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4937, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( ps->clientNum != predictedPlayerEntity->nextState.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4938, ASSERT_TYPE_ASSERT, "( ps->clientNum ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "ps->clientNum", "cent->nextState.number", ps->clientNum, predictedPlayerEntity->nextState.number) )
    __debugbreak();
  v7 = BG_EventSeqWrapAround(ps->pe.eventSequence, ops->eventSequence);
  eventSequence = ps->pe.eventSequence;
  v9 = eventSequence - 4;
  if ( eventSequence - 4 < eventSequence )
  {
    v10 = v9 - v7;
    v11 = v7 - v9;
    do
    {
      v12 = v9 & 3;
      eventType = ps->pe.events[v12].eventType;
      if ( v10 >= 0 || v11 < 4 && eventType != ops->events[v12] )
      {
        eType = predictedPlayerEntity->nextState.eType;
        predictedPlayerEntity->nextState.eventParm = ps->pe.events[v12].eventParm;
        EntityTypeName = BG_GetEntityTypeName(eType);
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
        this->HandleEntityEvent(this, predictedPlayerEntity, eventType, 1, NULL);
        Sys_ProfEndNamedEvent();
      }
      ++v9;
      ++v10;
      --v11;
    }
    while ( v9 < ps->pe.eventSequence );
  }
  for ( i = BG_EventSeqWrapAround(ps->unpredictableEventSequence, ops->unpredictableEventSequence); i < ps->unpredictableEventSequence; ++i )
  {
    v17 = i & 3;
    v18 = ps->unpredictableEvents[v17].eventType;
    predictedPlayerEntity->nextState.eventParm = ps->unpredictableEvents[v17].eventParm;
    v19 = BG_GetEntityTypeName((const entityType_s)predictedPlayerEntity->nextState.eType);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v19);
    this->HandleEntityEvent(this, predictedPlayerEntity, v18, 1, NULL);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CgEventSystem::GetEventWeapon
==============
*/
const Weapon *CgEventSystem::GetEventWeapon(CgEventSystem *this, const centity_t *cent, const int eventFlags, bool *isAlternate, bool *isPlayerView)
{
  char v6; 
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  CgWeaponMap *v11; 
  bool v12; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v14; 
  const Weapon *result; 

  v6 = eventFlags;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1977, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !isAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1978, ASSERT_TYPE_ASSERT, "(isAlternate)", (const char *)&queryFormat, "isAlternate") )
    __debugbreak();
  if ( !isPlayerView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1979, ASSERT_TYPE_ASSERT, "(isPlayerView)", (const char *)&queryFormat, "isPlayerView") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[m_localClientNum];
  v12 = v6 & 1;
  *isPlayerView = v12;
  if ( v12 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v11, &LocalClientGlobals->predictedPlayerState);
    *isAlternate = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)this->m_localClientNum) )
      *isPlayerView = 0;
  }
  else
  {
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    CurrentWeaponForPlayer = BgWeaponMap::GetWeapon(v11, cent->nextState.weaponHandle);
    *isAlternate = cent->nextState.inAltWeaponMode;
  }
  v14 = CG_IsCinematicCameraActive(this->m_localClientNum) == 0;
  result = CurrentWeaponForPlayer;
  if ( !v14 )
    *isPlayerView = 0;
  return result;
}

/*
==============
CgEventSystem::HandleEntityEventCommon
==============
*/
void CgEventSystem::HandleEntityEventCommon(CgEventSystem *this, centity_t *cent, const int clientNum, const int event, const int eventFlags, const unsigned int eventParm, const Weapon *iweapon, const bool isAlternate, const bool isPlayerView, const CgEventLodData *optionalEventLodData)
{
  entity_event_t v10; 
  entityState_t *p_nextState; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const char *EventTypeName; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  playerState_s *p_predictedPlayerState; 
  int v20; 
  double Float_Internal_DebugName; 
  float v22; 
  FootstepMoveType_t v23; 
  int v24; 
  int v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29; 
  FootstepMoveType_t v30; 
  int v31; 
  FootstepMoveType_t v32; 
  float v33; 
  double v34; 
  double v35; 
  int v36; 
  ShakeImpulseSourceType v37; 
  CgWeaponMap *v38; 
  char v39; 
  centity_t *v40; 
  bool isLadder; 
  const vec3_t *p_position; 
  int v43; 
  __int32 v44; 
  __int32 v45; 
  __int32 v46; 
  EquipmentStanceType_t v47; 
  const SndAliasList *StanceTransitionSound; 
  double v49; 
  float v50; 
  double v51; 
  float v52; 
  double ValueFromFraction; 
  ShakeImpulseSourceType v54; 
  CgWeaponMap *v55; 
  const Weapon *CurrentWeaponForPlayer; 
  CgWeaponMap *v57; 
  const Weapon *Weapon; 
  int v59; 
  LocalClientNum_t m_localClientNum; 
  CgSoundSystem *v61; 
  __int64 v62; 
  const SndAliasList *WeaponSoundWithFallback; 
  const WeaponDef *v64; 
  cg_t *v65; 
  int v66; 
  LocalClientNum_t v67; 
  CgSoundSystem *v68; 
  centity_t *Entity; 
  __int64 v70; 
  const SndAliasList *WeaponSound; 
  CgWeaponMap *v72; 
  const WeaponSFXPackage *SfxPackage; 
  SndAliasList *NoAmmoSound_Internal; 
  const playerState_s *v75; 
  CgWeaponSystem *v76; 
  CgWeaponSystem *v77; 
  OffhandSlot v78; 
  CgWeaponMap *v79; 
  CgWeaponMap *v80; 
  const SndAliasList *v81; 
  __int64 v82; 
  bool v83; 
  Weapon *v84; 
  CgWeaponSystem *WeaponSystem; 
  CgWeaponMap *v86; 
  const Weapon *v87; 
  centity_t *v88; 
  unsigned int v89; 
  const Weapon *v90; 
  bool isDualWield; 
  LocalClientNum_t v92; 
  bitarray_base<bitarray<32> > *v93; 
  bool v94; 
  bitarray_base<bitarray<32> > v95; 
  LocalClientNum_t v96; 
  CgWeaponMap *v97; 
  const Weapon *v98; 
  int v99; 
  MovementAnimState *v100; 
  MovementAnimState *v101; 
  int v102; 
  CgWeaponMap *v103; 
  const Weapon *v104; 
  CgWeaponMap *v105; 
  const Weapon *v106; 
  CgWeaponMap *v107; 
  const Weapon *v108; 
  bool v109; 
  WeaponHand *m_weaponHand; 
  CgPredictedEntitySystem *System; 
  characterInfo_t *v112; 
  CgMissile *v113; 
  CgWeaponMap *v114; 
  const Weapon *v115; 
  int v116; 
  MovementAnimState *animMoveState; 
  MovementAnimState *v118; 
  CgWeaponMap *v119; 
  int WeaponHand; 
  CgWeaponMap *v121; 
  const Weapon *v122; 
  CgWeaponSystem *v123; 
  int FireFxIndexForWeapon; 
  int v125; 
  SndAliasList *slideStartSound; 
  unsigned int v127; 
  ShakeImpulseSourceType v128; 
  unsigned int v129; 
  unsigned int v130; 
  SndAliasList *slideEaseOutSound; 
  int v132; 
  unsigned int v133; 
  int v134; 
  unsigned int v135; 
  int v136; 
  unsigned int eventParm2; 
  int v138; 
  centity_t *v139; 
  CgWeaponMap *v140; 
  const Weapon *v141; 
  int v142; 
  unsigned __int8 v143; 
  const SndAliasList *v144; 
  unsigned __int8 v145; 
  unsigned __int8 v146; 
  bool v147; 
  Weapon *v148; 
  LocalClientNum_t v149; 
  const SndAliasList *v150; 
  CgSoundSystem *v151; 
  void (__fastcall *PlayExplosionSoundAsync)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v153; 
  unsigned __int8 v154; 
  unsigned __int8 v155; 
  bool v156; 
  Weapon *v157; 
  LocalClientNum_t v158; 
  const SndAliasList *v159; 
  CgSoundSystem *v160; 
  void (__fastcall *v161)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v162; 
  unsigned __int8 v163; 
  cg_t *v164; 
  Weapon *v165; 
  __int64 v166; 
  CgSoundSystem *v167; 
  void (__fastcall *v168)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v169; 
  unsigned int v170; 
  FXRegisteredDef *p_ceilingAlist; 
  __int64 v172; 
  Bounds *v173; 
  int v174; 
  cg_t *v175; 
  unsigned __int8 v176; 
  int v177; 
  unsigned __int8 v178; 
  int v179; 
  int v180; 
  CgSoundSystem *v181; 
  int v182; 
  int v183; 
  unsigned __int8 v184; 
  int v185; 
  unsigned int *RandSeed; 
  const SndAliasList *v187; 
  int v188; 
  double EquipmentVolumeScale; 
  CgWeaponMap *Instance; 
  const SndAliasList *ClothFoleyMovementSound; 
  int v192; 
  double FootstepVolumeScale; 
  unsigned int v194; 
  unsigned int v195; 
  bool v196; 
  int v197; 
  unsigned int v198; 
  unsigned int v199; 
  unsigned int v200; 
  unsigned int v201; 
  int v202; 
  bool v203; 
  int v204; 
  unsigned int v205; 
  unsigned int v206; 
  bool v207; 
  int v208; 
  unsigned int v209; 
  GfxBrushModel *BrushModel; 
  float v211; 
  float v212; 
  unsigned int number; 
  __int16 otherEntityNum; 
  unsigned int (__fastcall *PlaySoundAliasByName)(CgSoundSystem *, const int, const vec3_t *, int); 
  unsigned int v216; 
  unsigned __int8 v217; 
  unsigned __int16 v218; 
  unsigned __int8 v219; 
  int v220; 
  int v221; 
  LocalClientNum_t v222; 
  CgDynamicMedia *CgDynamicMedia; 
  unsigned int v224; 
  const FXRegisteredDef *Fx; 
  cg_t *v226; 
  int v227; 
  LocalClientNum_t v228; 
  cg_t *v229; 
  unsigned int v230; 
  LocalClientNum_t v231; 
  unsigned int v232; 
  LocalClientNum_t v233; 
  int v234; 
  LocalClientNum_t v235; 
  cg_t *v236; 
  unsigned int v237; 
  LocalClientNum_t v238; 
  CgWeaponMap *v239; 
  const Weapon *OffhandGestureWeapon; 
  const SndAliasList *v241; 
  unsigned int v242; 
  SndAliasList *v243; 
  int v244; 
  int v245; 
  int v246; 
  LocalClientNum_t v247; 
  const dvar_t *v248; 
  const dvar_t *v249; 
  SndAliasList *MantleSound; 
  LocalClientNum_t v251; 
  cg_t *v252; 
  CgSoundSystem *v253; 
  double v254; 
  float v255; 
  int Int_Internal_DebugName; 
  double v257; 
  CgWeaponSystem *v258; 
  int v259; 
  const char *v260; 
  const dvar_t *v261; 
  double v262; 
  bool v263; 
  Weapon *v264; 
  const RumbleInfo *MountRumble; 
  const char *v266; 
  char *fmt; 
  BOOL fmta; 
  __int64 weaponstate; 
  weaponstate_t weaponstatea; 
  _BOOL8 weaponstateb; 
  weaponstate_t weaponstatec; 
  vec3_t *impulseVecOverride; 
  vec3_t *impulseVecOverridea; 
  FootstepVFX *footstepVFX; 
  bool Bool_Internal_DebugName; 
  bool v277; 
  char v278; 
  char v279; 
  bool inAltWeaponMode; 
  unsigned int weaponRattleType; 
  int characterIndex; 
  Weapon *r_weapon; 
  unsigned int clothType; 
  int isQuietMove; 
  centity_t *centa; 
  bool isLeft; 
  char v288; 
  unsigned int viewDip[2]; 
  CgSoundSystem *SoundSystem; 
  vec3_t outOrigin; 
  unsigned int surfType[2]; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *ci; 
  __int64 v295; 
  BgWeaponParms outWP; 
  Bounds ceilingAlist; 
  vec3_t position; 
  vec3_t suitDef; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v301; 

  v295 = -2i64;
  v10 = event;
  weaponRattleType = event;
  characterIndex = clientNum;
  centa = cent;
  r_weapon = (Weapon *)iweapon;
  *(_QWORD *)surfType = optionalEventLodData;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  p_nextState = &cent->nextState;
  v14 = DVARINT_cg_debugevents;
  if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer == 227 )
    goto LABEL_9;
  v15 = DVARINT_cg_debugevents;
  if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer == v10 )
  {
LABEL_9:
    LODWORD(fmt) = eventParm;
    Com_Printf(21, "ent:%3i  event:%3i  params:%u  ", (unsigned int)p_nextState->number, (unsigned int)v10, fmt);
    EventTypeName = BG_GetEventTypeName(v10);
    Com_Printf(21, "CG_EntityEvent:%s\n", EventTypeName);
  }
  if ( CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, p_nextState->number) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
    *(_QWORD *)viewDip = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2657, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v277 = BG_WeaponIsDualWield(r_weapon);
    *(_QWORD *)ceilingAlist.midPoint.v = BG_WeaponDef(r_weapon, isAlternate);
    clothType = BG_GetHandFromWeaponEvent(v10);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, characterIndex);
    ci = CharacterInfo;
    p_predictedPlayerState = NULL;
    if ( !CharacterInfo || !CharacterInfo->infoValid || (isQuietMove = 1, !BG_HasPerk(&CharacterInfo->perks, 0x1Fu)) )
      isQuietMove = 0;
    *(_QWORD *)suitDef.v = ci ? BG_GetSuitDef(ci->suitIndex) : 0i64;
    if ( !CG_GameInterface_HandleEntityEventCommon((const LocalClientNum_t)this->m_localClientNum, centa, characterIndex, v10, eventParm, r_weapon, isAlternate, isPlayerView) )
    {
      if ( BG_IsLandingEvent(v10) )
      {
        v20 = truncate_cast<int,unsigned int>(eventParm);
        BG_UnpackSoftLandingEventParm(v20, viewDip, &clothType, &weaponRattleType, surfType);
        if ( isPlayerView )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_cameraLandDipScale, "cg_cameraLandDipScale");
          v22 = (float)viewDip[0];
          LocalClientGlobals->landChange = COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 * *(float *)&Float_Internal_DebugName) ^ _xmm);
          LocalClientGlobals->landTime = LocalClientGlobals->time;
          CG_SND_PlayerBreathsSetLand(this->m_localClientNum, BREATH_LAND_LOW);
          weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, weaponRattleType);
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, LocalClientGlobals->predictedPlayerState.serverTime);
        }
        v23 = BG_LandingTypeFromEntityEvent(v10);
        v24 = isQuietMove;
        CG_LandingSound(this->m_localClientNum, p_nextState->number, surfType[0], v23, isPlayerView, clothType, isQuietMove, 1);
        if ( isPlayerView )
          CL_LandingRumble((const LocalClientNum_t)this->m_localClientNum, v10);
        CG_EquipmentSound(this->m_localClientNum, p_nextState->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_LAND, clothType, weaponRattleType, v24);
        goto $LN7_301;
      }
      if ( BG_IsPainLandingEvent(v10) )
      {
        v25 = truncate_cast<int,unsigned int>(eventParm);
        BG_UnpackHardLandingEventParm(v25, viewDip, (int *)&r_weapon, (unsigned int *)&characterIndex, &weaponRattleType, surfType, &clothType);
        v26 = (float)viewDip[0];
        v27 = v26 * 0.0099999998;
        if ( isPlayerView )
        {
          if ( surfType[0] )
          {
            v28 = (float)surfType[0];
            LocalClientGlobals->landChange = COERCE_FLOAT(LODWORD(v28) ^ _xmm);
            LocalClientGlobals->landTime = LocalClientGlobals->time;
          }
          CG_SND_PlayerBreathsSetLand(this->m_localClientNum, (BreathSoundLandingType)((v27 > 0.5) + 1));
          weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, weaponRattleType);
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, LocalClientGlobals->predictedPlayerState.serverTime);
        }
        v29 = v10;
        switch ( v10 )
        {
          case EV_LANDING_PAIN_LOW_HEIGHT:
            v29 = 181;
            break;
          case EV_LANDING_PAIN_MEDIUM_HEIGHT:
            v29 = 182;
            break;
          case EV_LANDING_PAIN_HIGH_HEIGHT:
            v29 = 183;
            break;
          case EV_LANDING_PAIN_EXTREME_HEIGHT:
            v29 = 184;
            break;
        }
        v30 = BG_LandingTypeFromEntityEvent(v29);
        v31 = isQuietMove;
        CG_LandingSound(this->m_localClientNum, p_nextState->number, clothType, v30, isPlayerView, characterIndex, isQuietMove, 1);
        if ( isPlayerView )
          CL_LandingRumble((const LocalClientNum_t)this->m_localClientNum, v10);
        if ( !(_DWORD)r_weapon )
        {
          v32 = BG_LandingTypeFromEntityEvent(v10);
          CG_LandingSound(this->m_localClientNum, p_nextState->number, clothType, v32, isPlayerView, characterIndex, v31, 0);
        }
        CG_EquipmentSound(this->m_localClientNum, p_nextState->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_LAND, characterIndex, weaponRattleType, v31);
        goto $LN7_301;
      }
      switch ( v10 )
      {
        case EV_FOLIAGE_SOUND:
          CG_Foliage_PlayCharacterSound(LocalClientGlobals, centa, isPlayerView, 36);
          break;
        case EV_STOP_WEAPON_SOUND:
          CG_StopWeaponSound((const LocalClientNum_t)this->m_localClientNum, isPlayerView, r_weapon, isAlternate, p_nextState->number, (weaponstate_t)eventParm);
          break;
        case EV_SOUND_ALIAS:
          if ( !eventParm )
            break;
          v207 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
          v208 = 512;
          v209 = 512;
          if ( v207 )
            v209 = 0x7FFF;
          if ( eventParm >= v209 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
              v208 = 0x7FFF;
            LODWORD(impulseVecOverride) = v208;
            LODWORD(weaponstate) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4068, ASSERT_TYPE_ASSERT, "(unsigned)( eventParm ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "eventParm doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          if ( (*(_DWORD *)&centa->nextState.clientLinkInfo & 0x7FF) != 0 )
            CG_GetPoseOrigin(&centa->pose, &suitDef);
          else
            Trajectory_GetTrBase(&centa->nextState.lerp.pos, &suitDef);
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 1u) || BG_IsVehicleEntity(p_nextState) )
          {
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
          }
          else
          {
            BrushModel = R_GetBrushModel(p_nextState->index.brushModel);
            v211 = BrushModel->bounds.midPoint.v[1];
            v212 = BrushModel->bounds.midPoint.v[2];
            ceilingAlist.midPoint.v[0] = BrushModel->bounds.midPoint.v[0] + suitDef.v[0];
            ceilingAlist.midPoint.v[1] = v211 + suitDef.v[1];
            ceilingAlist.midPoint.v[2] = v212 + suitDef.v[2];
          }
          number = p_nextState->number;
          if ( p_nextState->eType < ET_EVENTS )
            goto LABEL_550;
          otherEntityNum = p_nextState->otherEntityNum;
          if ( otherEntityNum == 2047 )
          {
            number = 2046;
          }
          else
          {
            number = otherEntityNum;
LABEL_550:
            if ( number >= 0x800 )
            {
              LODWORD(impulseVecOverride) = 2048;
              LODWORD(weaponstate) = number;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4096, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
          }
          PlaySoundAliasByName = SoundSystem->PlaySoundAliasByName;
          v216 = truncate_cast<int,unsigned int>(eventParm);
          PlaySoundAliasByName(SoundSystem, number, &ceilingAlist.midPoint, v216);
          memset(&ceilingAlist, 0, 0xCui64);
          memset(&suitDef, 0, sizeof(suitDef));
          break;
        case EV_SOUND_ALIAS_AT_VIEWHEIGHT:
          if ( eventParm )
          {
            if ( eventParm >= 0x200 )
            {
              LODWORD(impulseVecOverride) = 512;
              LODWORD(weaponstate) = eventParm;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3926, ASSERT_TYPE_ASSERT, "(unsigned)( eventParm ) < (unsigned)( 512 )", "eventParm doesn't index MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v182 = 2046;
            if ( p_nextState->eType < ET_EVENTS )
              v182 = p_nextState->number;
            Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
            v183 = truncate_cast<int,unsigned int>(eventParm);
            CgSoundSystem::PlaySoundAliasAtViewHeight(SoundSystem, v182, &ceilingAlist.midPoint, v183);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_EQUIP_MOVE_SOUND:
          if ( eventParm )
          {
            v184 = (eventParm >> 7) & 0xF;
            if ( isPlayerView )
            {
              v185 = AdjustWeaponRattleForPlayer(this->m_localClientNum, *(const playerState_s **)viewDip, (eventParm >> 7) & 0xF);
              v184 = truncate_cast<unsigned char,int>(v185);
            }
            RandSeed = GetRandSeed();
            v187 = BG_ChooseEquipmentSound(eventParm & 0xF, v184, (EquipmentMoveType_t)((eventParm >> 4) & 7), isPlayerView, RandSeed);
            v188 = 2046;
            if ( p_nextState->eType < ET_EVENTS )
              v188 = p_nextState->number;
            Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
            EquipmentVolumeScale = CgSoundSystem::GetEquipmentVolumeScale(SoundSystem, centa, isPlayerView);
            CgSoundSystem::PlaySoundAliasListAtViewHeight(SoundSystem, v188, &ceilingAlist.midPoint, v187, *(float *)&EquipmentVolumeScale);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_CLOTH_MOVE_SOUND:
          if ( eventParm )
          {
            if ( !LocalClientGlobals->renderingThirdPerson )
            {
              Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
              if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
              {
                ClothFoleyMovementSound = BG_GetClothFoleyMovementSound(eventParm & 0xF, (MovementLeadType_t)((eventParm >> 11) & 3), (EquipmentMoveType_t)((eventParm >> 4) & 7), isPlayerView);
                v192 = 2046;
                if ( p_nextState->eType < ET_EVENTS )
                  v192 = p_nextState->number;
                Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
                FootstepVolumeScale = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, centa, (eventParm >> 4) & 7, isPlayerView);
                CgSoundSystem::PlaySoundAliasListAtViewHeight(SoundSystem, v192, &ceilingAlist.midPoint, ClothFoleyMovementSound, *(float *)&FootstepVolumeScale);
                memset(&ceilingAlist, 0, 0xCui64);
              }
            }
          }
          break;
        case EV_SURFACE_SOUND_ALIAS:
          if ( eventParm )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
            {
              v194 = eventParm & 0x7FFF;
              v195 = truncate_cast<int,unsigned int>(eventParm >> 15);
              if ( v194 >= 0x7FFF )
              {
                LODWORD(impulseVecOverride) = 0x7FFF;
                LODWORD(weaponstate) = eventParm & 0x7FFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4001, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( (1 << 15) - 1 ) )", "soundIndex doesn't index SND_MAX_PRECACHED_ALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
            }
            else
            {
              v194 = eventParm & 0x1FF;
              v195 = truncate_cast<int,unsigned int>(eventParm >> 9);
            }
            v196 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
            v197 = 512;
            v198 = 512;
            if ( v196 )
              v198 = 0x7FFF;
            if ( v194 >= v198 )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
                v197 = 0x7FFF;
              LODWORD(impulseVecOverride) = v197;
              LODWORD(weaponstate) = v194;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4010, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "soundIndex doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            if ( v195 >= 0x40 )
            {
              LODWORD(impulseVecOverride) = 64;
              LODWORD(weaponstate) = v195;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4011, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v199 = 2046;
            if ( p_nextState->eType < ET_EVENTS )
              v199 = p_nextState->number;
            Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
            ((void (__fastcall *)(CgSoundSystem *, _QWORD, Bounds *, _QWORD, unsigned int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundByIndex)(SoundSystem, v199, &ceilingAlist, v194, v195, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_CONTEXT_SOUND_ALIAS:
          if ( eventParm )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
            {
              v200 = eventParm & 0x7FFF;
              v201 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 15));
              v202 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 23));
              if ( v200 >= 0x7FFF )
              {
                LODWORD(impulseVecOverride) = 0x7FFF;
                LODWORD(weaponstate) = eventParm & 0x7FFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4034, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( (1 << 15) - 1 ) )", "soundIndex doesn't index SND_MAX_PRECACHED_ALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
            }
            else
            {
              v200 = eventParm & 0x1FF;
              v201 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 9));
              v202 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 17));
            }
            if ( v201 == v202 )
              v202 = -1;
            v203 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
            v204 = 512;
            v205 = 512;
            if ( v203 )
              v205 = 0x7FFF;
            if ( v200 >= v205 )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
                v204 = 0x7FFF;
              LODWORD(impulseVecOverride) = v204;
              LODWORD(weaponstate) = v200;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4049, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "soundIndex doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            if ( v201 >= 0x100 )
            {
              LODWORD(impulseVecOverride) = 256;
              LODWORD(weaponstate) = v201;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4050, ASSERT_TYPE_ASSERT, "(unsigned)( contextIndex ) < (unsigned)( 256 )", "contextIndex doesn't index MAX_SOUND_CONTEXT_INDICES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v206 = 2046;
            if ( p_nextState->eType < ET_EVENTS )
              v206 = p_nextState->number;
            Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
            ((void (__fastcall *)(CgSoundSystem *, _QWORD, Bounds *, _QWORD, unsigned int, int, _DWORD, _DWORD))SoundSystem->PlayContextSoundByIndex)(SoundSystem, v206, &ceilingAlist, v200, v201, v202, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0));
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_STANCE_FORCE_STAND:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) )
          {
            ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum)->ignoreStanceInput = 1;
            CL_SetStance(this->m_localClientNum, CL_STANCE_STAND, eventParm);
          }
          break;
        case EV_STANCE_INVALID:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 5u) )
          {
            v55 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v55, &LocalClientGlobals->predictedPlayerState);
            switch ( eventParm )
            {
              case 1u:
                if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_STAND_BLOCKED )
                {
                  LocalClientGlobals->invalidCmdHintType = INVALID_CMD_STAND_BLOCKED;
                  LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                }
                break;
              case 2u:
                if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_CROUCH_BLOCKED )
                {
                  LocalClientGlobals->invalidCmdHintType = INVALID_CMD_CROUCH_BLOCKED;
                  LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                }
                break;
              case 3u:
                if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_PRONE_BLOCKED )
                {
                  LocalClientGlobals->invalidCmdHintType = INVALID_CMD_PRONE_BLOCKED;
                  LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                }
                break;
              case 6u:
                if ( LocalClientGlobals->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
                {
                  LocalClientGlobals->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
                  LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
                }
                break;
              default:
                if ( (eventParm & 0xFFFFFFFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1249, ASSERT_TYPE_ASSERT, "((type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD))", (const char *)&queryFormat, "(type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD)") )
                  __debugbreak();
                break;
            }
            *(__m256i *)&LocalClientGlobals->invalidCmdHintWeapon.weaponIdx = *(__m256i *)&CurrentWeaponForPlayer->weaponIdx;
            *(_OWORD *)&LocalClientGlobals->invalidCmdHintWeapon.attachmentVariationIndices[5] = *(_OWORD *)&CurrentWeaponForPlayer->attachmentVariationIndices[5];
            *(double *)&LocalClientGlobals->invalidCmdHintWeapon.attachmentVariationIndices[21] = *(double *)&CurrentWeaponForPlayer->attachmentVariationIndices[21];
            *(_DWORD *)&LocalClientGlobals->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&CurrentWeaponForPlayer->weaponCamo;
          }
          break;
        case EV_ITEM_PICKUP:
        case EV_AMMO_PICKUP:
          v57 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          Weapon = BgWeaponMap::GetWeapon(v57, (BgWeaponHandle)eventParm);
          v59 = p_nextState->number;
          m_localClientNum = this->m_localClientNum;
          if ( (unsigned __int16)(Weapon->weaponIdx - 1) > 0x224u )
            break;
          v61 = CgSoundSystem::GetSoundSystem(m_localClientNum);
          BG_WeaponDef(Weapon, 0);
          if ( v10 == EV_ITEM_PICKUP )
          {
            v62 = 8i64 * isPlayerView + 8;
          }
          else
          {
            if ( v10 != EV_AMMO_PICKUP )
              goto LABEL_137;
            v62 = 8i64 * isPlayerView + 24;
          }
          WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(Weapon, isAlternate, v62);
          CgSoundSystem::PlayEntitySoundAlias(v61, v59, WeaponSoundWithFallback);
LABEL_137:
          if ( isPlayerView )
          {
            v64 = BG_WeaponDef(Weapon, 0);
            if ( !BG_IsScavengerPickup(Weapon) && BG_GetWeaponClass(Weapon, 0) != WEAPCLASS_ITEM )
            {
              v65 = CG_GetLocalClientGlobals(m_localClientNum);
              if ( v64->offhandClass )
              {
                if ( !v65->equippedOffHand.weaponIdx )
                  CG_SetEquippedOffHand(m_localClientNum, Weapon);
              }
              else if ( !v65->weaponSelect.weaponIdx )
              {
                CG_SelectWeapon(m_localClientNum, Weapon, 0);
              }
            }
          }
          break;
        case EV_NOAMMO:
        case EV_NOAMMO_LEFT:
          v72 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          if ( !BG_ShouldTakeWeaponWhenEmpty(v72, *(const playerState_s **)viewDip, r_weapon, isAlternate) && !*(_BYTE *)(*(_QWORD *)ceilingAlist.midPoint.v + 3962i64) && *(_QWORD *)(*(_QWORD *)ceilingAlist.midPoint.v + 520i64) )
          {
            SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
            NoAmmoSound_Internal = CG_GetNoAmmoSound_Internal(SfxPackage, isPlayerView, v277, (PlayerHandIndex)clothType, 0);
            CgSoundSystem::PlayEntitySoundAlias(SoundSystem, p_nextState->number, NoAmmoSound_Internal);
          }
          if ( isPlayerView )
          {
            v75 = *(const playerState_s **)viewDip;
            goto LABEL_165;
          }
          break;
        case EV_EMPTY_OFFHAND_PRIMARY:
        case EV_EMPTY_OFFHAND_SECONDARY:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView )
            CG_SwitchOffHandCmd(this->m_localClientNum);
          break;
        case EV_OFFHAND_END_NOTIFY:
          CG_Weapons_ToggleEquip_OnOffhandEnd(this->m_localClientNum);
          if ( isPlayerView )
          {
            v116 = 0;
            animMoveState = LocalClientGlobals->animMoveState;
            v118 = LocalClientGlobals->animMoveState;
            do
              MovementAnimState::Reset(v118++, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)v116++);
            while ( v116 < 2 );
            v119 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            WeaponHand = BG_PlayerLastWeaponHand(v119, &LocalClientGlobals->predictedPlayerState);
            if ( WeaponHand >= 0 )
            {
              do
              {
                MovementAnimState::Update(animMoveState, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)p_predictedPlayerState, &LocalClientGlobals->predictedPlayerState);
                LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
                ++animMoveState;
              }
              while ( (int)p_predictedPlayerState <= WeaponHand );
            }
          }
          break;
        case EV_RESET_ADS:
        case EV_RELOAD_START_NOTIFY:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) )
          {
            if ( v10 != EV_RELOAD_START_NOTIFY )
              goto LABEL_217;
            if ( isPlayerView )
              p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
            v80 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            if ( !BG_ADSReloadEnabled(v80, p_predictedPlayerState, r_weapon, isAlternate) )
            {
LABEL_217:
              if ( isPlayerView )
                CL_SetADS(this->m_localClientNum, 0);
            }
          }
          break;
        case EV_OFFHAND_OVERCOOK_NOTIFY:
        case EV_RELOAD_ADDAMMO:
        case EV_GESTURE_STOPPED_NOTIFY:
        case EV_SKYDIVE_BEGIN_FREEFALL:
        case EV_SKYDIVE_DEPLOY_PARACHUTE:
        case EV_SKYDIVE_TOUCH:
        case EV_SKYDIVE_END:
        case EV_FIRE_MELEE_SCRIPTED:
        case EV_EXECUTION_CANCEL:
        case EV_PHYS_JITTER:
        case EV_GRENADE_SUICIDE:
        case EV_DOOR_MOVE_COMPLETE:
          break;
        case EV_RELOAD:
        case EV_RELOAD_FROM_EMPTY:
        case EV_RELOAD_START:
        case EV_RELOAD_END:
          v66 = p_nextState->number;
          v67 = this->m_localClientNum;
          v68 = CgSoundSystem::GetSoundSystem(v67);
          Entity = CG_GetEntity(v67, v66);
          Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &ceilingAlist.midPoint);
          switch ( weaponRattleType )
          {
            case 0x17u:
              v70 = 8i64 * isPlayerView + 384;
              break;
            case 0x18u:
              v70 = 8i64 * isPlayerView + 400;
              break;
            case 0x19u:
              v70 = 8i64 * isPlayerView + 416;
              break;
            case 0x1Au:
              v70 = 8i64 * isPlayerView + 432;
              break;
            case 0x1Bu:
              v70 = 8i64 * isPlayerView + 448;
              break;
            default:
              Com_PrintWarning(16, "Unknown reload sound event.\n");
              goto LABEL_157;
          }
          WeaponSound = BG_GetWeaponSound(r_weapon, isAlternate, v70);
          CgSoundSystem::PlaySoundAlias(v68, v66, &ceilingAlist.midPoint, WeaponSound);
LABEL_157:
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_RAISE_WEAPON:
          v82 = 8i64 * isPlayerView + 528;
          v83 = isAlternate;
          v84 = r_weapon;
          goto LABEL_225;
        case EV_FIRST_RAISE_WEAPON:
          if ( isPlayerView )
          {
            v81 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 552i64);
            if ( v81 )
              goto LABEL_226;
            v82 = 536i64;
          }
          else
          {
            v81 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 544i64);
            if ( v81 )
              goto LABEL_226;
            v82 = 528i64;
          }
          v83 = isAlternate;
          v84 = r_weapon;
LABEL_225:
          v81 = BG_GetWeaponSoundWithFallback(v84, v83, v82);
LABEL_226:
          CgSoundSystem::PlayEntitySoundAlias(SoundSystem, p_nextState->number, v81);
          break;
        case EV_PUTAWAY_WEAPON:
          v82 = 8i64 * isPlayerView + 560;
          v83 = isAlternate;
          v84 = r_weapon;
          goto LABEL_225;
        case EV_WEAPON_ALT:
          v82 = 8i64 * isPlayerView + 512;
          v83 = isAlternate;
          v84 = r_weapon;
          goto LABEL_225;
        case EV_PULLBACK_WEAPON:
          WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3262, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
            __debugbreak();
          CgWeaponSystem::PlayPullbackSound(WeaponSystem, p_nextState->number, isPlayerView, r_weapon, isAlternate);
          break;
        case EV_FIRE_WEAPON_END:
        case EV_FIRE_VEH_TURRET_END:
          CG_SndKillAutoSimEnt(centa, 0);
          break;
        case EV_PRE_FIRE_WEAPON:
          v81 = BG_PreFireSound(r_weapon, isAlternate, isPlayerView);
          if ( v81 )
            goto LABEL_226;
          break;
        case EV_FIRE_RICOCHET:
          *(_QWORD *)ceilingAlist.midPoint.v = CG_GetEntWeapon(this->m_localClientNum, centa);
          inAltWeaponMode = centa->nextState.inAltWeaponMode;
          v88 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, centa->nextState.otherEntityNum);
          if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3285, ASSERT_TYPE_ASSERT, "(attackerEnt)", (const char *)&queryFormat, "attackerEnt") )
            __debugbreak();
          v89 = centa->nextState.eventParm;
          if ( v89 != 2047 )
            p_predictedPlayerState = (playerState_s *)CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v89);
          Trajectory_GetTrBase(&centa->nextState.lerp.pos, &suitDef);
          v90 = *(const Weapon **)ceilingAlist.midPoint.v;
          isDualWield = BG_WeaponIsDualWield(*(const Weapon **)ceilingAlist.midPoint.v);
          CG_FireWeaponRicochet(this->m_localClientNum, v88, (centity_t *)p_predictedPlayerState, &suitDef, (const vec3_t *)&centa->nextState.lerp.u, centa->nextState.lerp.u.anonymous.data[3], centa->nextState.lerp.u.actor.impactVector.v[1], v90, inAltWeaponMode, (PlayerHandIndex)clothType, isPlayerView, isDualWield);
          memset(&suitDef, 0, sizeof(suitDef));
          break;
        case EV_RECHAMBER_WEAPON:
          v82 = 8i64 * isPlayerView + 368;
          v83 = isAlternate;
          v84 = r_weapon;
          goto LABEL_225;
        case EV_EJECT_BRASS:
        case EV_EJECT_BRASS_LEFT:
          v92 = this->m_localClientNum;
          v93 = *(bitarray_base<bitarray<32> > **)surfType;
          if ( *(_QWORD *)surfType && **(_BYTE **)surfType )
          {
            if ( bitarray_base<bitarray<32>>::testBit((bitarray_base<bitarray<32> > *)(*(_QWORD *)surfType + 12i64), 0) )
            {
              v94 = 0;
            }
            else
            {
              v95 = v93[1];
              if ( *(unsigned __int8 *)&v95 >= 3u )
              {
                LODWORD(impulseVecOverride) = 3;
                LODWORD(weaponstate) = (unsigned __int8)v95;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( lodData->fovLod ) < (unsigned)( ( sizeof( *array_counter( params.minimumDistance ) ) + 0 ) )", "lodData->fovLod doesn't index params.minimumDistance\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
              v94 = *(_BYTE *)v93 <= s_eventLodTypeParams[0].minimumDistance[*(_BYTE *)&v93[1]];
            }
          }
          else
          {
            v94 = 1;
          }
          CG_Event_Debug_AddCount(v92, CG_EVENT_LOD_TYPE_EJECT_BRASS, v94);
          if ( v94 )
            CG_EjectWeaponBrass(this->m_localClientNum, p_nextState, v10, isAlternate);
          break;
        case EV_FIRE_WEAPON_LASTBURST:
        case EV_FIRE_WEAPON_LASTBURST_LEFT:
          CG_SndAutoSimEntLastBurst(centa, (const PlayerHandIndex)clothType);
          break;
        case EV_FIRE_MELEE_DAMAGE:
          v96 = this->m_localClientNum;
          if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1756, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( r_weapon->weaponIdx )
          {
            CG_GetMeleeStartEnd(v96, p_nextState, r_weapon, isAlternate, &suitDef, &ceilingAlist.midPoint);
            Physics_AddDeferredBulletForce((const Physics_WorldId)(3 * v96 + 3), &suitDef, &ceilingAlist.midPoint, p_nextState->number, 1, r_weapon, isAlternate, eventParm, CG_MeleeEventEffectCallback);
            CG_Glass_MeleeEvent(v96, p_nextState->number);
            ScriptableCl_MeleeEvent(v96, p_nextState->number, r_weapon, isAlternate);
          }
          break;
        case EV_FIRE_MELEE_SWIPE:
        case EV_FIRE_MELEE_CHARGE:
          if ( isPlayerView )
            CG_SND_PlayerBreathsSetMelee(this->m_localClientNum);
          break;
        case EV_PREP_OFFHAND:
          v97 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          *(_QWORD *)ceilingAlist.midPoint.v = v97;
          if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3374, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
            __debugbreak();
          v98 = BgWeaponMap::GetWeapon(v97, (BgWeaponHandle)eventParm);
          if ( !v98->weaponIdx )
          {
            LODWORD(footstepVFX) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3376, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "weapon.weaponIdx", "WP_NONE", footstepVFX, 0i64) )
              __debugbreak();
          }
          CG_PrepOffHand(this->m_localClientNum, p_nextState, v98, isPlayerView);
          if ( isPlayerView )
          {
            v99 = 0;
            v100 = LocalClientGlobals->animMoveState;
            v101 = LocalClientGlobals->animMoveState;
            do
              MovementAnimState::Reset(v101++, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)v99++);
            while ( v99 < 2 );
            v102 = BG_PlayerLastWeaponHand(*(const BgWeaponMap **)ceilingAlist.midPoint.v, &LocalClientGlobals->predictedPlayerState);
            if ( v102 >= 0 )
            {
              do
              {
                MovementAnimState::Update(v100, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)p_predictedPlayerState, &LocalClientGlobals->predictedPlayerState);
                LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
                ++v100;
              }
              while ( (int)p_predictedPlayerState <= v102 );
            }
          }
          break;
        case EV_PUTAWAY_OFFHAND:
          v105 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v106 = BgWeaponMap::GetWeapon(v105, (BgWeaponHandle)eventParm);
          CG_PutAwayOffhand(this->m_localClientNum, p_nextState, v106, isPlayerView);
          break;
        case EV_USE_OFFHAND:
          v107 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v108 = BgWeaponMap::GetWeapon(v107, (BgWeaponHandle)eventParm);
          if ( isPlayerView )
          {
            v109 = !LocalClientGlobals->inKillCam && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && BgMissile::ShouldBePredicted(v107, &LocalClientGlobals->predictedPlayerState, v108, 0);
            m_weaponHand = LocalClientGlobals->m_weaponHand;
            if ( LocalClientGlobals == (cg_t *)-807496i64 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3432, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
                __debugbreak();
              m_weaponHand = NULL;
            }
            if ( v109 && m_weaponHand->viewModelDObj )
            {
              System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
              if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3436, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
                __debugbreak();
              if ( CgPredictedEntitySystem::CanSpawnNewEntities(System) )
              {
                v112 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->clientNum);
                if ( !v112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3441, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
                  __debugbreak();
                if ( v112->infoValid )
                {
                  v113 = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
                  memset_0(&outWP, 0, sizeof(outWP));
                  outWP.weapon = *v108;
                  outWP.isAlternate = 0;
                  outWP.weapDef = BG_WeaponDef(v108, 0);
                  if ( BG_GetWeaponType(&outWP.weapon, outWP.isAlternate) == WEAPTYPE_GRENADE )
                    CgMissile::GetMuzzleOrientation(v113, p_nextState->number, &outWP);
                  BgMissile::UseOffhand(v113, p_nextState->number, LocalClientGlobals->predictedPlayerState.serverTime, &outWP);
                }
                else
                {
                  Com_Printf(14, "Could not fire predicted missile because the local player character info is invalid. Possible cause is host migration. Client number: %d\n", (unsigned int)LocalClientGlobals->clientNum);
                }
              }
            }
          }
          CG_UseOffHand(this->m_localClientNum, centa, v108, isAlternate, isPlayerView);
          break;
        case EV_SWITCH_OFFHAND:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView )
          {
            v114 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            v115 = BgWeaponMap::GetWeapon(v114, (BgWeaponHandle)eventParm);
            CG_SetEquippedOffHand(this->m_localClientNum, v115);
          }
          break;
        case EV_SWITCH_AND_PREP_OFFHAND:
          v103 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3401, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
            __debugbreak();
          v104 = BgWeaponMap::GetWeapon(v103, (BgWeaponHandle)eventParm);
          if ( !v104->weaponIdx )
          {
            LODWORD(footstepVFX) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3403, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "weapon.weaponIdx", "WP_NONE", footstepVFX, 0i64) )
              __debugbreak();
          }
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView )
            CG_SetEquippedOffHand(this->m_localClientNum, v104);
          CG_PrepOffHand(this->m_localClientNum, p_nextState, v104, isPlayerView);
          break;
        case EV_PULLBACK_OFFHAND_QUICK:
          v86 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v87 = BgWeaponMap::GetWeapon(v86, (BgWeaponHandle)eventParm);
          CG_QuickPullbackOffhand(this->m_localClientNum, p_nextState, v87, isPlayerView);
          break;
        case EV_MELEE_CHARACTER_IMPACT:
          v136 = p_nextState->lerp.u.anonymous.data[0];
          CG_MeleeBloodEvent(this->m_localClientNum, v136);
          CG_PlayMeleeCharacterImpactSound((const LocalClientNum_t)this->m_localClientNum, p_nextState, v136, eventParm, &outOrigin);
          break;
        case EV_MELEE_WORLD_IMPACT:
          eventParm2 = p_nextState->eventParm2;
          if ( eventParm2 >= 0x40 )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = p_nextState->eventParm2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3630, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v138 = p_nextState->lerp.u.anonymous.data[0];
          v139 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, p_nextState->clientNum);
          if ( v139 && (v139->flags & 1) != 0 )
            CG_PlayMeleeWorldImpactSound((const LocalClientNum_t)this->m_localClientNum, eventParm2, v138, &outOrigin, eventParm);
          break;
        case EV_FIRE_VEH_TURRET:
        case EV_FIRE_TURRET:
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) || CG_View_IsKillCamView((const LocalClientNum_t)this->m_localClientNum) )
            goto LABEL_246;
          if ( !*(_QWORD *)viewDip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)viewDip + 28i64), GameModeFlagValues::ms_mpValue, 0x21u) )
            goto LABEL_246;
          if ( !*(_QWORD *)viewDip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)viewDip + 28i64), ACTIVE, 0x18u) )
            goto LABEL_245;
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
          if ( *(_WORD *)(*(_QWORD *)viewDip + 158i64) != p_nextState->number )
          {
LABEL_245:
            if ( !BG_IsTurretActive(*(const playerState_s **)viewDip) || *(_WORD *)(*(_QWORD *)viewDip + 636i64) != p_nextState->number )
            {
LABEL_246:
              LOBYTE(weaponstate) = 0;
              LOBYTE(fmta) = isPlayerView;
              this->HandleTurretFire(this, centa, v10, eventParm, fmta, weaponstate);
            }
          }
          break;
        case EV_FIRE_SENTRY:
          LOBYTE(weaponstate) = eventParm != 0;
          LOBYTE(fmta) = isPlayerView;
          this->HandleTurretFire(this, centa, weaponRattleType, 0i64, fmta, weaponstate);
          break;
        case EV_DROP_CLIENT_SHIELD:
          FX_ClearViewmodelMarks(this->m_localClientNum);
          break;
        case EV_EXPLOSIVE_IMPACT_ON_SHIELD:
          if ( isPlayerView )
            CG_ExplosiveImpactOnShieldEvent(this->m_localClientNum);
          break;
        case EV_EXPLOSIVE_SPLASH_ON_SHIELD:
          if ( isPlayerView )
          {
            v142 = truncate_cast<int,unsigned int>(eventParm);
            CG_ExplosiveSplashOnShieldEvent(this->m_localClientNum, v142);
          }
          break;
        case EV_GRENADE_BOUNCE:
          goto $LN72_9;
        case EV_GRENADE_STICK:
        case EV_GRENADE_REST:
        case EV_GRENADE_ENTERS_WATER:
          centa->flags |= 0x200u;
$LN72_9:
          v145 = p_nextState->surfType;
          if ( v145 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v145;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3770, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          if ( eventParm >> 8 >= 3 )
          {
            LODWORD(impulseVecOverride) = 3;
            LODWORD(weaponstate) = eventParm >> 8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3773, ASSERT_TYPE_ASSERT, "(unsigned)( intensityIndex ) < (unsigned)( BOUNCE_INTENSITY_COUNT )", "intensityIndex doesn't index BOUNCE_INTENSITY_COUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          CG_PlayGrenadeBounceSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &position, &axis, r_weapon, (const BounceIntensityAlias)(eventParm >> 8), isAlternate, v10 == EV_GRENADE_STICK);
          break;
        case EV_GRENADE_ROLL:
          v143 = p_nextState->surfType;
          if ( v143 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v143;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3752, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v144 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 696i64);
          if ( v144 )
            ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, const SndAliasList *, _DWORD, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2046i64, &outOrigin, v144, p_nextState->surfType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
          break;
        case EV_GRENADE_EXPLODE_FX:
          v146 = p_nextState->surfType;
          if ( v146 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v146;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3783, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          v147 = isAlternate;
          v148 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            break;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &position, &axis, r_weapon, isAlternate, 1);
LABEL_405:
          v149 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(v148, v147);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
            CGMovingPlatforms::PlayDynamicBoltEffect(p_nextState, v149, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
          v150 = BG_ProjExplosionSound(v148, v147);
          if ( v150 )
          {
            v151 = CgSoundSystem::GetSoundSystem(v149);
            PlayExplosionSoundAsync = v151->PlayExplosionSoundAsync;
            v153 = BG_ProjExplosionReflectionClass(v148, v147);
            PlayExplosionSoundAsync(v151, 2046, &position, v150, p_nextState->surfType, v153);
          }
          break;
        case EV_GRENADE_EXPLODE_DAMAGE:
          v154 = p_nextState->surfType;
          if ( v154 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v154;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3798, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          LOBYTE(weaponstate) = isAlternate;
          this->HandleExplosionEvent(this, centa, v10, &position, r_weapon, weaponstate);
          break;
        case EV_GRENADE_EXPLODE:
          v155 = p_nextState->surfType;
          if ( v155 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v155;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3809, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          v156 = isAlternate;
          v157 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_421;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &position, &axis, r_weapon, isAlternate, 1);
          v158 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
            CGMovingPlatforms::PlayDynamicBoltEffect(p_nextState, v158, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
          goto LABEL_419;
        case EV_GRENADE_PICKUP:
        case EV_TRAIL_DESTROY:
          centa->flags |= 0x200u;
          break;
        case EV_GRENADE_LETGO:
          centa->flags &= ~0x200u;
          break;
        case EV_ROCKET_EXPLODE:
          v163 = p_nextState->surfType;
          if ( v163 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v163;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3826, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          v156 = isAlternate;
          v157 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_421;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &position, &axis, r_weapon, isAlternate, 1);
          v158 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
          {
            v164 = CG_GetLocalClientGlobals(v158);
            FX_PlayOrientedEffect(v158, (const FXRegisteredDef *)&ceilingAlist, v164->time, &position, &axis);
          }
LABEL_419:
          v159 = BG_ProjExplosionSound(v157, v156);
          if ( v159 )
          {
            v160 = CgSoundSystem::GetSoundSystem(v158);
            v161 = v160->PlayExplosionSoundAsync;
            v162 = BG_ProjExplosionReflectionClass(v157, v156);
            v161(v160, 2046, &position, v159, p_nextState->surfType, v162);
            v10 = weaponRattleType;
          }
LABEL_421:
          LOBYTE(weaponstatea) = v156;
          this->HandleExplosionEvent(this, centa, v10, &position, v157, weaponstatea);
          break;
        case EV_FLASHBANG_EXPLODE:
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          v147 = isAlternate;
          v148 = r_weapon;
          if ( !CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_405;
          break;
        case EV_CUSTOM_EXPLODE:
          CG_UpdateMissileEventOrientation(p_nextState, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(p_nextState, this->m_localClientNum, &outOrigin, &position);
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
          {
            v165 = r_weapon;
          }
          else
          {
            v165 = r_weapon;
            CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &position, &axis, r_weapon, isAlternate, 0);
            v166 = this->m_localClientNum;
            if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1377, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
              __debugbreak();
            *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
            if ( *(_QWORD *)ceilingAlist.midPoint.v )
              CGMovingPlatforms::PlayDynamicBoltEffect(p_nextState, (LocalClientNum_t)v166, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
            *(_QWORD *)suitDef.v = BG_ProjExplosionSound(r_weapon, isAlternate);
            if ( *(_QWORD *)suitDef.v )
            {
              if ( !(_BYTE)CgEventSystem::ms_allocatedType )
              {
                LODWORD(impulseVecOverridea) = v166;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", impulseVecOverridea) )
                  __debugbreak();
              }
              if ( (unsigned int)v166 >= CgEventSystem::ms_allocatedCount )
              {
                LODWORD(impulseVecOverridea) = CgEventSystem::ms_allocatedCount;
                LODWORD(weaponstateb) = v166;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", weaponstateb, impulseVecOverridea) )
                  __debugbreak();
              }
              if ( !CgEventSystem::ms_eventSystemArray[v166] )
              {
                LODWORD(impulseVecOverridea) = v166;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", impulseVecOverridea) )
                  __debugbreak();
              }
              if ( !CgEventSystem::ms_eventSystemArray[v166]->IsTimedEventExpired(CgEventSystem::ms_eventSystemArray[v166], p_nextState) )
              {
                v167 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v166);
                v168 = v167->PlayExplosionSoundAsync;
                v169 = BG_ProjExplosionReflectionClass(r_weapon, isAlternate);
                v168(v167, 2046, &position, *(const SndAliasList **)suitDef.v, p_nextState->surfType, v169);
                LOBYTE(weaponstatec) = isAlternate;
                this->HandleExplosionEvent(this, centa, weaponRattleType, &position, r_weapon, weaponstatec);
                break;
              }
            }
          }
          LOBYTE(weaponstateb) = isAlternate;
          this->HandleExplosionEvent(this, centa, v10, &position, v165, weaponstateb);
          break;
        case EV_CHANGE_TO_DUD:
          v170 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)14);
          if ( v170 >= cgMedia.impactFx->impactTypeCount )
          {
            LODWORD(impulseVecOverride) = cgMedia.impactFx->impactTypeCount;
            LODWORD(weaponstate) = v170;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3872, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          p_ceilingAlist = (FXRegisteredDef *)&ceilingAlist;
          v172 = 2i64;
          do
          {
            FXRegisteredDef::FXRegisteredDef(p_ceilingAlist++);
            --v172;
          }
          while ( v172 );
          CG_GetImpactEffectList(v170, 0, 0, 0, 0, (FXRegisteredDef *)&ceilingAlist);
          v173 = &ceilingAlist;
          do
          {
            if ( *(_QWORD *)v173->midPoint.v )
            {
              v174 = truncate_cast<int,unsigned int>(eventParm);
              CG_UpdateMissileEventOrientation(p_nextState, v174, &axis);
              v175 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
              FX_PlayOrientedEffect(this->m_localClientNum, (const FXRegisteredDef *)&ceilingAlist + (int)p_predictedPlayerState, v175->time, &outOrigin, &axis);
            }
            LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
            v173 = (Bounds *)((char *)v173 + 8);
          }
          while ( (unsigned int)p_predictedPlayerState < 2 );
          break;
        case EV_DUD_EXPLODE:
          v176 = p_nextState->surfType;
          if ( v176 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v176;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3891, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v177 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(p_nextState, v177, &axis);
          CG_PlayProjectileExplosionSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, p_nextState, &outOrigin, &axis, r_weapon, isAlternate, 0);
          CG_PlayDudImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, isPlayerView, &outOrigin, &axis, r_weapon, isAlternate, p_nextState->surfType);
          break;
        case EV_DUD_IMPACT:
          v178 = p_nextState->surfType;
          if ( v178 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v178;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3901, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v179 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(p_nextState, v179, &axis);
          CG_PlayDudImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, isPlayerView, &outOrigin, &axis, r_weapon, isAlternate, p_nextState->surfType);
          break;
        case EV_TROPHY_EXPLODE:
          v180 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(p_nextState, v180, &axis);
          LOBYTE(weaponstate) = isAlternate;
          this->HandleExplosionEvent(this, centa, v10, &outOrigin, r_weapon, weaponstate);
          CG_PlayTrophyEffects(this->m_localClientNum, &outOrigin, &axis, p_nextState->otherEntityNum);
          v181 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
          CgSoundSystem::PlaySoundAlias(v181, 2046, &outOrigin, cgMedia.trophyExplodeSound);
          break;
        case EV_PLAY_FX:
          v222 = this->m_localClientNum;
          CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
          v224 = truncate_cast<int,unsigned int>(centa->nextState.eventParm);
          if ( CgDynamicMedia::IsValidFx(CgDynamicMedia, v224) )
          {
            Fx = CgDynamicMedia::GetFx(CgDynamicMedia, v224);
            if ( !Fx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 899, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
              __debugbreak();
            AnglesToAxis(&p_nextState->lerp.apos.trBase, &v301);
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
            v226 = CG_GetLocalClientGlobals(v222);
            FX_PlayOrientedEffect(v222, Fx, v226->time, &ceilingAlist.midPoint, &v301);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          else
          {
            Com_PrintError(21, "ERROR: CG_PlayFx called with invalid effect id %i\n", v224);
          }
          break;
        case EV_PLAY_FX_BETWEEN_POINT:
          Trajectory_GetTrBase(&p_nextState->lerp.pos, &ceilingAlist.midPoint);
          CG_PlayFxBetweenPoints(this->m_localClientNum, centa, &ceilingAlist.midPoint, &p_nextState->lerp.apos.trBase, (const vec3_t *)&p_nextState->lerp.u);
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_PLAY_FX_ON_TAG:
          v227 = p_nextState->number;
          v228 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v228, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
          {
            v229 = CG_GetLocalClientGlobals(v228);
            FX_PlayBoltedEffect(v228, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v229->time, v227, (int)r_weapon, 0);
          }
          break;
        case EV_STOP_FX_ON_TAG:
          v230 = p_nextState->number;
          v231 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v231, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
            FX_StopBoltedEffects(v231, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v230, (unsigned int)r_weapon);
          break;
        case EV_KILL_FX_ON_TAG:
          v232 = p_nextState->number;
          v233 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v233, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
            FX_KillBoltedEffects(v233, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v232, (unsigned int)r_weapon);
          break;
        case EV_PLAY_FX_ON_TAG_FOR_CLIENTS:
          v234 = p_nextState->number;
          v235 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v235, eventParm, (const FXRegisteredDef **)&ceilingAlist, viewDip, (unsigned int *)&r_weapon) )
          {
            v236 = CG_GetLocalClientGlobals(v235);
            if ( v236->predictedPlayerState.clientNum == (_DWORD)r_weapon )
              FX_PlayBoltedEffect(v235, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v236->time, v234, viewDip[0], 0);
          }
          break;
        case EV_STOP_FX_ON_TAG_FOR_CLIENTS:
          v237 = p_nextState->number;
          v238 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v238, eventParm, (const FXRegisteredDef **)&ceilingAlist, viewDip, (unsigned int *)&r_weapon) && CG_GetLocalClientGlobals(v238)->predictedPlayerState.clientNum == (_DWORD)r_weapon )
            FX_StopBoltedEffects(v238, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v237, viewDip[0]);
          break;
        case EV_PHYS_EXPLOSION_SPHERE:
          Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &outOrigin, p_nextState->lerp.u.turret.gunAngles.v[1], 0.0, 0.0, p_nextState->lerp.u.turret.gunAngles.v[2], &vec3_origin, LocalClientGlobals->time, 1.0);
          break;
        case EV_PHYS_EXPLOSION_JOLT:
          Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), &outOrigin, p_nextState->lerp.u.turret.gunAngles.v[1], 0.0, 0.0, 0.0, &p_nextState->lerp.u.event.explosionJolt.impulse, LocalClientGlobals->time, 1.0);
          break;
        case EV_EARTHQUAKE:
          if ( p_nextState->eType < ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4187, ASSERT_TYPE_ASSERT, "(es->eType >= ET_EVENTS)", (const char *)&queryFormat, "es->eType >= ET_EVENTS") )
            __debugbreak();
          CG_StartShakeCamera(this->m_localClientNum, p_nextState->lerp.u.turret.gunAngles.v[0], p_nextState->lerp.u.anonymous.data[2], &outOrigin, p_nextState->lerp.u.turret.gunAngles.v[1]);
          break;
        case EV_DETONATE:
          v140 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v141 = BgWeaponMap::GetWeapon(v140, (BgWeaponHandle)eventParm);
          v82 = 8i64 * isPlayerView + 464;
          v83 = isAlternate;
          v84 = (Weapon *)v141;
          goto LABEL_225;
        case EV_NIGHTVISION_WEAR:
          if ( isPlayerView )
            CgSoundSystem::PlayClientSoundAlias(SoundSystem, cgMedia.nightVisionOn);
          break;
        case EV_NIGHTVISION_REMOVE:
          if ( isPlayerView )
            CgSoundSystem::PlayClientSoundAlias(SoundSystem, cgMedia.nightVisionOff);
          break;
        case EV_NIGHTVISION_WEAR_INSTANT:
          if ( isPlayerView )
          {
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_NVG_Instant_EnableSound, "NVG_Instant_EnableSound") )
              CgSoundSystem::PlayClientSoundAlias(SoundSystem, cgMedia.nightVisionOn);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_NVG_ON_Instant_BloomEnable, "NVG_ON_Instant_BloomEnable") )
            {
              CG_NightVisionGetBloomTimings(LocalClientGlobals->time, 1, 1, (int *)viewDip, (int *)&clothType, (int *)&r_weapon, (int *)surfType);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, viewDip[0], (const int)r_weapon, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, clothType, surfType[0], 0, VISIONSETLERP_SMOOTH);
            }
          }
          break;
        case EV_NIGHTVISION_REMOVE_INSTANT:
          if ( isPlayerView )
          {
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_NVG_Instant_EnableSound, "NVG_Instant_EnableSound") )
              CgSoundSystem::PlayClientSoundAlias(SoundSystem, cgMedia.nightVisionOff);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_NVG_OFF_Instant_BloomEnable, "NVG_OFF_Instant_BloomEnable") )
            {
              CG_NightVisionGetBloomTimings(LocalClientGlobals->time, 0, 1, &isQuietMove, (int *)&clothType, (int *)&weaponRattleType, &characterIndex);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, isQuietMove, weaponRattleType, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, clothType, characterIndex, 0, VISIONSETLERP_SMOOTH);
              CG_NightVisionGetExposureAdjustTimings(LocalClientGlobals->time, &isQuietMove, (int *)&clothType, (int *)&weaponRattleType, &characterIndex);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_EXPOSURE, isQuietMove, weaponRattleType, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_NVG_EXPOSURE, clothType, characterIndex, 0, VISIONSETLERP_SMOOTH);
            }
          }
          break;
        case EV_MISSILE_REMOTE_BOOST:
          truncate_cast<int,unsigned int>(eventParm);
          v251 = this->m_localClientNum;
          v252 = CG_GetLocalClientGlobals(v251);
          if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v252->predictedPlayerState.otherFlags, ACTIVE, 1u) && v252->predictedPlayerState.remoteEyesEnt == p_nextState->number )
          {
            RefdefView_GetOrg(&v252->refdef.view, &ceilingAlist.midPoint);
            CG_StartShakeCamera(v251, 0.30000001, 1000, &ceilingAlist.midPoint, 0.0);
            v253 = CgSoundSystem::GetSoundSystem(v251);
            CgSoundSystem::PlayEntitySoundAlias(v253, p_nextState->number, cgMedia.trophyExplodeSound);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_DOOR_EXPLODE:
        case EV_DOOR_OPEN:
        case EV_DOOR_CLOSE:
        case EV_DOOR_PEEK:
          CG_Door_HandleAudioEvent((const LocalClientNum_t)this->m_localClientNum, v10, eventParm);
          break;
        case EV_DOOR_BASH:
          v254 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashShakeRadius, "bg_doorBashShakeRadius");
          v255 = *(float *)&v254;
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorBashShakeDuration, "bg_doorBashShakeDuration");
          v257 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashShakeScale, "bg_doorBashShakeScale");
          CG_StartShakeCamera(this->m_localClientNum, *(float *)&v257, Int_Internal_DebugName, &outOrigin, v255);
          CG_Door_HandleAudioEvent((const LocalClientNum_t)this->m_localClientNum, weaponRattleType, eventParm);
          break;
        case EV_NO_PRIMARY_GRENADE_HINT:
        case EV_NO_SPECIAL_HINT:
          if ( v10 == EV_NO_SPECIAL_HINT )
          {
            v77 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
            CgWeaponSystem::StopPullbackSound(v77, p_nextState->number);
          }
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView )
          {
            v78 = OFFHAND_SLOT_NONE;
            if ( v10 == EV_NO_PRIMARY_GRENADE_HINT )
            {
              LODWORD(p_predictedPlayerState) = 2;
              if ( eventParm )
                LODWORD(p_predictedPlayerState) = 11;
              v78 = OFFHAND_SLOT_PRIMARY;
            }
            else if ( v10 == EV_NO_SPECIAL_HINT )
            {
              LODWORD(p_predictedPlayerState) = 10;
              v78 = OFFHAND_SLOT_SPECIAL;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3098, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
            {
              __debugbreak();
            }
            if ( LocalClientGlobals->invalidCmdHintType != (_DWORD)p_predictedPlayerState )
            {
              LocalClientGlobals->invalidCmdHintType = (int)p_predictedPlayerState;
              LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
            }
            v79 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            LocalClientGlobals->invalidCmdHintWeapon = *BG_GetFirstEquippedOffhandBySlot(v79, &LocalClientGlobals->predictedPlayerState, v78);
          }
          break;
        case EV_PRONE_PREVENTS_OFFHAND_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && LocalClientGlobals->invalidCmdHintType != INVALID_CMD_CANT_USE_IN_PRONE )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_CANT_USE_IN_PRONE;
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
          break;
        case EV_TARGET_TOO_CLOSE_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && LocalClientGlobals->invalidCmdHintType != INVALID_CMD_TARGET_TOO_CLOSE )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_TARGET_TOO_CLOSE;
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
          break;
        case EV_TARGET_NOT_ENOUGH_CLEARANCE_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && LocalClientGlobals->invalidCmdHintType != INVALID_CMD_NOT_ENOUGH_CLEARANCE )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_NOT_ENOUGH_CLEARANCE;
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
          break;
        case EV_LOCKON_REQUIRED_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && LocalClientGlobals->invalidCmdHintType != INVALID_CMD_LOCKON_REQUIRED )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_LOCKON_REQUIRED;
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
          break;
        case EV_TURRET_BLOCKED_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView && LocalClientGlobals->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
          {
            LocalClientGlobals->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
            LocalClientGlobals->invalidCmdHintTime = LocalClientGlobals->time;
          }
          break;
        case EV_VEHICLE_COLLISION:
        case EV_VEHICLE_SUSPENSION_SOFT:
        case EV_VEHICLE_SUSPENSION_HARD:
        case EV_VEHICLE_HORN:
          CG_Vehicle_EntityEvent(this->m_localClientNum, centa, v10, eventParm);
          break;
        case EV_FOOTSTEP_SUPERSPRINT:
        case EV_FOOTSTEP_SPRINT:
        case EV_FOOTSTEP_RUN:
        case EV_FOOTSTEP_WALK:
        case EV_FOOTSTEP_CREEP:
        case EV_FOOTSTEP_PRONE:
        case EV_JUMP:
          if ( !isPlayerView || (v278 = 1, !CG_IsJogging(this->m_localClientNum)) )
            v278 = 0;
          weaponRattleType = -1;
          LODWORD(r_weapon) = -1;
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footsteps, "cg_footsteps");
          v288 = 1;
          v33 = FLOAT_1_0;
          PM_MoveTypesFromFootstepType(v10, (FootstepMoveType_t *)&weaponRattleType, (EquipmentMoveType_t *)&r_weapon);
          switch ( v10 )
          {
            case EV_FOOTSTEP_SUPERSPRINT:
            case EV_FOOTSTEP_SPRINT:
              Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footstepsSprint, "cg_footstepsSprint");
              v34 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint, "handheldCameraImpulseFootstepModifierSprint");
              v33 = *(float *)&v34;
              break;
            case EV_FOOTSTEP_RUN:
              if ( v278 )
              {
                v35 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog, "handheldCameraImpulseFootstepModifierJog");
                v33 = *(float *)&v35;
              }
              break;
            case EV_FOOTSTEP_WALK:
              break;
            case EV_FOOTSTEP_CREEP:
              goto $LN164_0;
            case EV_FOOTSTEP_PRONE:
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE) || (Bool_Internal_DebugName = 1, !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footsteps, "cg_footsteps")) )
                Bool_Internal_DebugName = 0;
              goto $LN494;
            case EV_JUMP:
$LN494:
              v288 = 0;
$LN164_0:
              v33 = 0.0;
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2835, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected movement type event encountered.", "false") )
                __debugbreak();
              break;
          }
          v36 = truncate_cast<int,unsigned int>(eventParm);
          BG_UnpackFootstepEventParm(v36, surfType, &clothType, viewDip, (FootstepActionType_t *)&characterIndex, &isLeft);
          if ( isPlayerView )
          {
            clothType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, clothType);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled, "handheldCameraImpulseFootstepEnabled") )
            {
              LOBYTE(v37) = 4;
              CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v37, v33);
            }
          }
          if ( !LocalClientGlobals->renderingThirdPerson )
          {
            v38 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            if ( !BG_IsThirdPersonMode(v38, &LocalClientGlobals->predictedPlayerState) )
            {
              v279 = 0;
LABEL_67:
              v39 = 0;
              goto LABEL_68;
            }
          }
          v279 = 1;
          if ( v10 == EV_JUMP )
            goto LABEL_67;
          v39 = 1;
LABEL_68:
          if ( Bool_Internal_DebugName && !v39 )
          {
            LocalClientStatics = (CgStatic *)BG_GetClothFootstepMovementSound(surfType[0], (FootstepActionType_t)characterIndex, (FootstepMoveType_t)weaponRattleType, isLeft, isPlayerView);
            *(_QWORD *)ceilingAlist.midPoint.v = BG_GetClothFootstepCeilingSound(surfType[0], (FootstepActionType_t)characterIndex, (FootstepMoveType_t)weaponRattleType, isLeft, isPlayerView);
            if ( LocalClientStatics )
            {
              v40 = centa;
              isLadder = centa->nextState.eType == ET_PLAYER && ci && BG_PlayerASM_IsOnLadder(ci);
              CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, v40, (const SndAliasList *)LocalClientStatics, *(const SndAliasList **)ceilingAlist.midPoint.v, viewDip[0], weaponRattleType, isPlayerView, isQuietMove, isLadder);
            }
            if ( isPlayerView && !v279 )
            {
              p_position = &LocalClientGlobals->playerGround.trace.position;
              if ( !LocalClientGlobals->playerGround.groundPlane )
                p_position = NULL;
              CG_Event_PlayFootstepFX(this->m_localClientNum, p_nextState->number, isLeft, viewDip[0], p_position, 1, 0, NULL);
            }
          }
          if ( v288 )
            CG_Event_PlayFootstepShakeRumble((const LocalClientNum_t)this->m_localClientNum, centa, *(const SuitDef *const *)suitDef.v);
          if ( v10 == EV_JUMP && isPlayerView )
            CG_SND_PlayerBreathsSetJump(this->m_localClientNum);
          break;
        case EV_STANCE_TO_PRONE:
        case EV_STANCE_PRONE_TO_CROUCH:
        case EV_STANCE_STAND_TO_CROUCH:
        case EV_STANCE_TO_STAND:
          v43 = truncate_cast<int,unsigned int>(eventParm);
          BG_UnpackStanceEventParm(v43, viewDip, &weaponRattleType, surfType);
          if ( isPlayerView )
            weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, weaponRattleType);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footsteps, "cg_footsteps") )
          {
            v44 = v10 - 176;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( v46 )
                {
                  if ( v46 == 1 )
                  {
                    v47 = EQUIPMENT_STANCE_TO_STAND;
                  }
                  else
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2933, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected stance transition event encountered.", "false") )
                      __debugbreak();
                    v47 = EQUIPMENT_STANCE_TO_STAND;
                  }
                }
                else
                {
                  v47 = EQUIPMENT_STANCE_STAND_TO_CROUCH;
                }
              }
              else
              {
                v47 = EQUIPMENT_STANCE_PRONE_TO_CROUCH;
              }
            }
            else
            {
              v47 = EQUIPMENT_STANCE_TO_PRONE;
            }
            StanceTransitionSound = BG_GetStanceTransitionSound(viewDip[0], v47, isPlayerView);
            if ( StanceTransitionSound )
              CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, centa, StanceTransitionSound, NULL, surfType[0], -1, isPlayerView, isQuietMove, 0);
          }
          CG_EquipmentSound(this->m_localClientNum, p_nextState->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_STANCE, viewDip[0], weaponRattleType, isQuietMove);
          break;
        case EV_MOVEMENT_IMPACT:
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, LocalClientGlobals->predictedPlayerState.serverTime);
          if ( isPlayerView && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled, "handheldCameraImpulseImpactEnabled") )
          {
            v49 = MSG_UnpackUnsignedFloat(eventParm, 300.0, 8u);
            v50 = *(float *)&v49;
            v51 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed, "handheldCameraImpulseImpactMax2DSpeed");
            v52 = v50 / *(float *)&v51;
            I_fclamp(v50 / *(float *)&v51, 0.0, 1.0);
            ValueFromFraction = GraphGetValueFromFraction(4, knots_0, v52);
            LOBYTE(v54) = 3;
            CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v54, *(float *)&ValueFromFraction);
          }
          break;
        case EV_MANTLE:
          BG_UnpackMantleEventParm(eventParm, viewDip, &clothType, surfType, (unsigned int *)&r_weapon, (gestureAnimType_t *)&weaponRattleType);
          if ( isPlayerView )
            clothType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, clothType);
          v242 = (unsigned int)r_weapon;
          if ( isPlayerView )
            v242 = surfType[0];
          if ( v242 )
          {
            v243 = (SndAliasList *)((__int64 (__fastcall *)(CgSoundSystem *))SoundSystem->GetSoundAliasListByName)(SoundSystem);
            v244 = isPlayerView;
            v245 = isQuietMove;
            CG_GenericEquipmentSound(this->m_localClientNum, p_nextState->number, v243, isPlayerView, isQuietMove);
          }
          else
          {
            v244 = isPlayerView;
            v245 = isQuietMove;
          }
          CG_EquipmentSound(this->m_localClientNum, p_nextState->number, v244, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_MANTLE, viewDip[0], clothType, v245);
          isQuietMove = weaponRattleType;
          characterIndex = viewDip[0];
          v246 = p_nextState->number;
          v247 = this->m_localClientNum;
          v248 = DVARBOOL_cg_equipmentSounds;
          if ( !DVARBOOL_cg_equipmentSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_equipmentSounds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v248);
          if ( v248->current.enabled )
          {
            v249 = DCONST_DVARBOOL_cg_mantleSounds;
            if ( !DCONST_DVARBOOL_cg_mantleSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mantleSounds") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v249);
            if ( v249->current.enabled )
            {
              MantleSound = BG_GetMantleSound(characterIndex, (gestureAnimType_t)isQuietMove, v244);
              if ( MantleSound )
                CG_GenericEquipmentSound(v247, v246, MantleSound, v244, v245);
            }
          }
          if ( isPlayerView )
            CG_SND_PlayerBreathsSetMantle(this->m_localClientNum);
          break;
        case EV_DEBUG_SERVER_AIMING:
          *(_OWORD *)ceilingAlist.midPoint.v = _xmm;
          ceilingAlist.halfSize.v[1] = FLOAT_1_0;
          ceilingAlist.halfSize.v[2] = FLOAT_1_0;
          CG_DebugBox(&outOrigin, &ceilingAlist, 0.0, &colorRed, 0, 1);
          break;
        case EV_SLIDE_START:
          if ( p_nextState->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v129 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_SLIDE_START on invalid entity %i or surfType type %i \n", (unsigned int)p_nextState->number, v129);
          }
          else
          {
            LocalClientGlobals->slideSurfaceType[p_nextState->number] = truncate_cast<char,unsigned int>(eventParm);
            v125 = truncate_cast<int,unsigned int>(eventParm);
            slideStartSound = cgMedia.slideStartSound;
            if ( isPlayerView )
              slideStartSound = cgMedia.slideStartSoundPlayer;
            CG_SlideSound(this->m_localClientNum, p_nextState->number, slideStartSound, v125, isPlayerView);
            v127 = LocalClientGlobals->slideSurfaceType[p_nextState->number];
            ceilingAlist.midPoint = outOrigin;
            suitDef = ci->playerAngles;
            CG_GameInterface_HandlePlayerSlideFX((const LocalClientNum_t)this->m_localClientNum, &suitDef, &ceilingAlist.midPoint, v127);
            CG_Rumble_PlayOnEntityByName(this->m_localClientNum, "slide_start", p_nextState->number);
            if ( isPlayerView && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled, "handheldCameraImpulseSlideEnabled") )
            {
              LOBYTE(v128) = 1;
              CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v128, 1.0);
            }
          }
          break;
        case EV_SLIDE_EASE_OUT:
          v130 = truncate_cast<int,unsigned int>(eventParm);
          if ( eventParm >= 0x40 )
          {
            Com_PrintError(14, "EV_SLIDE_EASE_OUT on invalid surfType type %i \n", v130);
          }
          else
          {
            slideEaseOutSound = cgMedia.slideEaseOutSound;
            if ( isPlayerView )
              slideEaseOutSound = cgMedia.slideEaseOutSoundPlayer;
            CG_SlideSound(this->m_localClientNum, p_nextState->number, slideEaseOutSound, v130, isPlayerView);
          }
          break;
        case EV_LEAP_LAND:
          goto $LN458_0;
        case EV_VEHICLE_DAMAGE_SCRIPTABLE:
          if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_FIRE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3169, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_SCRIPTABLE_DAMAGE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_SCRIPTABLE_DAMAGE )") )
            __debugbreak();
          ScriptableCl_VehicleDamageEvent((const LocalClientNum_t)this->m_localClientNum, centa, eventParm);
          break;
        case EV_MISSILE_HIT_TRAJECTORY:
          if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_HOLD_PRIMED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3918, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::EVENT_MISSILE_TRAJECTORY )") )
            __debugbreak();
          CG_MissileTrajectoryEvent(this->m_localClientNum, centa);
          break;
        case EV_VARIABLE_ZOOM_CHANGE:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v10) && isPlayerView )
          {
            if ( BG_IsUsingOffhandGestureWeaponADSActive(&LocalClientGlobals->predictedPlayerState) )
            {
              v239 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
              OffhandGestureWeapon = BG_GetOffhandGestureWeapon(v239, &LocalClientGlobals->predictedPlayerState);
              v241 = BG_GetWeaponSoundWithFallback(OffhandGestureWeapon, 0, 616i64);
            }
            else
            {
              v241 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 616i64);
            }
            CgSoundSystem::PlaySoundAlias(SoundSystem, p_nextState->number, &outOrigin, v241);
          }
          break;
        case EV_OFFHAND_END_EFFECTS:
          v121 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v122 = BgWeaponMap::GetWeapon(v121, (BgWeaponHandle)eventParm);
          v123 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
          FireFxIndexForWeapon = CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon(v123, v122);
          CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(v123, FireFxIndexForWeapon);
          break;
        case EV_FORCE_WEAPON_CHANGE:
          if ( isPlayerView )
          {
            v75 = *(const playerState_s **)viewDip;
LABEL_165:
            if ( !BG_PWF_UseAlternateAsOffhand(v75) )
            {
              v76 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
              CgWeaponSystem::OutOfAmmoChange(v76, 0);
            }
          }
          break;
        case EV_BREAK_GLASS:
          CG_Glass_PlayerBreakEvent(this->m_localClientNum, p_nextState->number);
$LN458_0:
          CG_Rumble_PlayOnEntityByName(this->m_localClientNum, "leap_end", p_nextState->number);
          break;
        case EV_WEAPON_CHARGED_WEAPON_FIRED:
          if ( isPlayerView )
          {
            v258 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
            CgWeaponSystem::ChargedWeaponSetChargeAmountOverride(v258, centa, WEAPON_HAND_DEFAULT, eventParm);
          }
          break;
        case EV_MOUNT_ENTER:
        case EV_MOUNT_EXIT:
          CG_PlayMountEnterExitSound(this->m_localClientNum, centa, r_weapon, isAlternate, v10, eventParm, isPlayerView);
          break;
        case EV_MOUNT:
          if ( isPlayerView )
          {
            if ( eventParm >= 4 )
            {
              LODWORD(impulseVecOverride) = 4;
              LODWORD(weaponstate) = eventParm;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4539, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(mountType) ) < (unsigned)( COUNT_MOUNT_TYPE )", "static_cast<int>(mountType) doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v259 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_mount_enter_settle_time_ms, "mount_enter_settle_time_ms");
            if ( eventParm == 1 )
            {
              v260 = "mount_effect_top_shake_amp";
              v261 = DCONST_DVARFLT_mount_effect_top_shake_amp;
            }
            else
            {
              v260 = "mount_effect_side_shake_amp";
              v261 = DCONST_DVARFLT_mount_effect_side_shake_amp;
            }
            v262 = Dvar_GetFloat_Internal_DebugName(v261, v260);
            if ( v259 > 0 && *(float *)&v262 > 0.0 )
            {
              RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &ceilingAlist.midPoint);
              CG_StartShakeCamera(this->m_localClientNum, *(float *)&v262, v259, &ceilingAlist.midPoint, 50.0);
              memset(&ceilingAlist, 0, 0xCui64);
            }
            v263 = isAlternate;
            v264 = r_weapon;
            MountRumble = BG_GetMountRumble(r_weapon, isAlternate);
            if ( MountRumble )
              CG_Rumble_PlayOnClient(this->m_localClientNum, MountRumble);
          }
          else
          {
            v263 = isAlternate;
            v264 = r_weapon;
          }
          if ( ci->mount.type )
            CG_PlayMountImpactSound(this->m_localClientNum, centa, v264, v263, &ci->mountAnimation.pivotPoint, eventParm, isPlayerView);
          break;
        case EV_SOUND_ENTITY_TRIGGER_START:
          v217 = truncate_cast<unsigned char,unsigned int>(p_nextState->eventParm2);
          v218 = truncate_cast<unsigned short,unsigned int>(eventParm);
          if ( (*(_DWORD *)&centa->nextState.clientLinkInfo & 0x7FF) != 0 )
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
          else
            Trajectory_GetTrBase(&centa->nextState.lerp.pos, &ceilingAlist.midPoint);
          suitDef = ceilingAlist.midPoint;
          CG_SoundEntity_TriggerStart(this->m_localClientNum, v217, v218, &suitDef);
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_SOUND_ENTITY_TRIGGER_STOP:
          v219 = truncate_cast<unsigned char,unsigned int>(p_nextState->eventParm2);
          CG_SoundEntity_TriggerStop(this->m_localClientNum, v219);
          break;
        case EV_SOUND_ENTITY_SCALE_VOLUME:
          v220 = truncate_cast<unsigned char,unsigned int>(p_nextState->eventParm2);
          BG_SoundEntity_UnpackScaleVolumeEventParam(eventParm, (float *)viewDip, (int *)&r_weapon);
          CG_SoundEntity_ScaleVolume(this->m_localClientNum, v220, *(float *)viewDip, (int)r_weapon);
          break;
        case EV_SOUND_ENTITY_SCALE_PITCH:
          v221 = truncate_cast<unsigned char,unsigned int>(p_nextState->eventParm2);
          BG_SoundEntity_UnpackScalePitchEventParam(eventParm, (float *)viewDip, (int *)&r_weapon);
          CG_SoundEntity_ScalePitch(this->m_localClientNum, v221, *(float *)viewDip, (int)r_weapon);
          break;
        case EV_SPRAY:
          CG_SprayEvent(this->m_localClientNum, centa, eventParm);
          break;
        case EV_LADDER_START_SLIDE:
          if ( p_nextState->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v133 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_LADDER_START_SLIDE on invalid entity %i or surfType type %i \n", (unsigned int)p_nextState->number, v133);
          }
          else
          {
            LocalClientGlobals->slideSurfaceType[p_nextState->number] = truncate_cast<char,unsigned int>(eventParm);
            v132 = truncate_cast<int,unsigned int>(eventParm);
            CG_LadderSlideSound(this->m_localClientNum, p_nextState->number, v132, ENUM_LADDERSLIDE_STATE_START, isPlayerView);
          }
          break;
        case EV_LADDER_STOP_SLIDE:
          if ( p_nextState->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v135 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_LADDER_STOP_SLIDE on invalid surfType type %i \n", v135);
          }
          else
          {
            v134 = truncate_cast<int,unsigned int>(eventParm);
            CG_LadderSlideSound(this->m_localClientNum, p_nextState->number, v134, ENUM_LADDERSLIDE_STATE_STOP, isPlayerView);
          }
          break;
        default:
          v266 = BG_GetEventTypeName(v10);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144294780, 780i64, v266);
          break;
      }
    }
  }
$LN7_301:
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CgEventSystem::HandleExplosionEvent
==============
*/
void CgEventSystem::HandleExplosionEvent(CgEventSystem *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  __int128 v10; 
  cg_t *LocalClientGlobals; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  BG_GetExplosionDamageRangeInfo(weapon, isAlternate, &outDamageRangeInfo);
  v10 = 0i64;
  *(float *)&v10 = (float)BG_ExplosionForceRadius(weapon, isAlternate);
  _XMM0 = v10;
  __asm { vmaxss  xmm6, xmm0, xmm1 }
  ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number, cent->nextState.number, weapon, isAlternate, position, outDamageRangeInfo.outerRadius, (int)outDamageRangeInfo.innerDamage, (int)outDamageRangeInfo.outerDamage, 1);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = BG_ExplosionForceScalar(weapon, isAlternate);
  Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), position, *(const float *)&_XMM6, outDamageRangeInfo.innerDamage, outDamageRangeInfo.outerDamage, 0.0, &vec3_origin, LocalClientGlobals->time, *(float *)&_XMM0);
}

/*
==============
CgEventSystem::HandleRumbleEvents
==============
*/
void CgEventSystem::HandleRumbleEvents(CgEventSystem *this, const int event, const unsigned int eventParam, int entityNum, const vec3_t *pos)
{
  char *v9; 
  LocalClientNum_t m_localClientNum; 
  char *outName; 

  if ( event == 153 )
  {
    v9 = (char *)&queryFormat.fmt + 3;
    outName = (char *)&queryFormat.fmt + 3;
  }
  else
  {
    if ( !NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_RUMBLE, eventParam, (const char **)&outName) )
    {
      Com_PrintWarning(14, "CG_HandleRumbleEvents: Empty rumble name at index %i for event type %i on entity %i.\n", eventParam, (unsigned int)event, entityNum);
      return;
    }
    v9 = outName;
    if ( !outName )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1159, ASSERT_TYPE_ASSERT, "(rumbleName)", (const char *)&queryFormat, "rumbleName") )
        __debugbreak();
      v9 = outName;
    }
  }
  m_localClientNum = this->m_localClientNum;
  switch ( event )
  {
    case 148:
      CG_Rumble_PlayOnEntityByName(m_localClientNum, v9, entityNum);
      break;
    case 149:
      CG_Rumble_PlayOnPositionByName(m_localClientNum, v9, pos);
      break;
    case 150:
      CG_Rumble_PlayLoopOnEntityByName(m_localClientNum, v9, entityNum);
      break;
    case 151:
      CG_Rumble_PlayLoopOnPositionByName(m_localClientNum, v9, pos);
      break;
    case 152:
      CG_Rumble_StopByName(m_localClientNum, entityNum, v9);
      break;
    case 153:
      CG_Rumble_StopAll(m_localClientNum);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1137, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HandleRumbleEventsInternal called with non-rumble event type") )
        __debugbreak();
      break;
  }
}

/*
==============
CgEventSystem::HandleTurretFire
==============
*/
void CgEventSystem::HandleTurretFire(CgEventSystem *this, centity_t *cent, const unsigned int event, const unsigned int eventParm, const bool isPlayerView, bool bNoTracer)
{
  CgVehicleSystem *VehicleSystem; 
  const Weapon *weapon; 
  bool v11; 
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v15; 
  float value; 
  const dvar_t *v17; 
  int integer; 
  const dvar_t *v19; 
  float cameraShakeRadius; 
  const dvar_t *v21; 
  bool v22; 
  cg_t *v23; 
  const WeaponDef *v24; 
  VehicleTurretFireType TurretFireType; 
  __int32 v26; 
  VehicleClient *Client; 
  PlayerHandIndex hand; 
  const TagPair *v29; 
  const TagPair *v30; 
  bool v31; 
  const TagPair *v32; 
  scr_string_t TagForFiringMuzzle; 
  const TagPair *v34; 
  vec3_t outOrigin; 
  TagPair v36; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1014, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( event - 89 > 2 && event != 87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1015, ASSERT_TYPE_ASSERT, "(event == EV_FIRE_SENTRY || event == EV_FIRE_TURRET || event == EV_SV_FIRE_TURRET || event == EV_FIRE_VEH_TURRET)", (const char *)&queryFormat, "event == EV_FIRE_SENTRY || event == EV_FIRE_TURRET || event == EV_SV_FIRE_TURRET || event == EV_FIRE_VEH_TURRET") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
  weapon = CG_GetEntWeapon(this->m_localClientNum, cent);
  v11 = isPlayerView;
  if ( isPlayerView )
    goto LABEL_18;
  m_localClientNum = this->m_localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1002, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1006, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 && BG_IsTurretActive(p_predictedPlayerState) && p_predictedPlayerState->viewlocked_entNum == cent->nextState.number )
  {
LABEL_18:
    v15 = DCONST_DVARFLT_turretCameraShakeScale;
    if ( !DCONST_DVARFLT_turretCameraShakeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    v17 = DCONST_DVARINT_turretCameraShakeDuration;
    if ( !DCONST_DVARINT_turretCameraShakeDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    v19 = DCONST_DVARFLT_turretCameraShakeRadius;
    if ( !DCONST_DVARFLT_turretCameraShakeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    cameraShakeRadius = v19->current.value;
    v21 = DCONST_DVARBOOL_turretCameraShakeOverride;
    if ( !DCONST_DVARBOOL_turretCameraShakeOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( !v21->current.enabled )
    {
      v22 = 0;
      v23 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( v23 )
        v22 = BG_UsingAlternate(&v23->predictedPlayerState);
      v24 = BG_WeaponDef(weapon, v22);
      if ( v24 )
      {
        value = v24->cameraShakeScale;
        integer = v24->cameraShakeDuration;
        cameraShakeRadius = v24->cameraShakeRadius;
      }
    }
    if ( value > 0.0 && integer > 0 )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      CG_StartShakeCamera(this->m_localClientNum, value, integer, &outOrigin, cameraShakeRadius);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) != 0 )
  {
    TagForFiringMuzzle = BG_turretGetTagForFiringMuzzle(&cent->nextState, weapon);
    goto LABEL_51;
  }
  TurretFireType = CgVehicleSystem::GetTurretFireType(VehicleSystem, cent);
  if ( TurretFireType == VEH_TURRET_SINGLE_FIRE )
  {
    TagForFiringMuzzle = scr_const.tag_flash;
LABEL_51:
    TagPair::TagPair(&v36, TagForFiringMuzzle, (scr_string_t)0);
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v34, weapon, 0, WEAPON_HAND_DEFAULT, v11, 0, bNoTracer);
    return;
  }
  v26 = TurretFireType - 1;
  if ( v26 )
  {
    if ( v26 == 1 )
    {
      Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
      hand = Client->fireBarrel;
      if ( hand )
      {
        TagPair::TagPair(&v36, scr_const.tag_flash_2, (scr_string_t)0);
        CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v30, weapon, 0, hand, v11, 1, bNoTracer);
        Client->fireBarrel = 0;
      }
      else
      {
        TagPair::TagPair(&v36, scr_const.tag_flash, (scr_string_t)0);
        CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v29, weapon, 0, WEAPON_HAND_DEFAULT, v11, 1, bNoTracer);
        Client->fireBarrel = 1;
      }
    }
  }
  else
  {
    TagPair::TagPair(&v36, scr_const.tag_flash, (scr_string_t)0);
    v31 = bNoTracer;
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v32, weapon, 0, WEAPON_HAND_DEFAULT, v11, 0, bNoTracer);
    TagPair::TagPair(&v36, scr_const.tag_flash_2, (scr_string_t)0);
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v34, weapon, 0, WEAPON_HAND_DEFAULT, v11, 0, v31);
  }
}

/*
==============
CgEventSystem::LowLodEventsEnabledForEntity
==============
*/
__int64 CgEventSystem::LowLodEventsEnabledForEntity(CgEventSystem *this, const centity_t *cent, const bool usingSharedLowLodEventBuffer)
{
  const dvar_t *v6; 
  __int64 result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4802, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4803, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !usingSharedLowLodEventBuffer )
    return 0i64;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4810, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) < ( ComCharacterLimits::GetClientMaxCount() )", "%s < %s\n\t%i, %i", "cent->nextState.number", "ComCharacterLimits::GetClientMaxCount()", cent->nextState.number, ComCharacterLimits::ms_gameData.m_clientCount) )
      __debugbreak();
  }
  v6 = DCONST_DVARINT_cg_event_forceNetfieldLod;
  if ( !DCONST_DVARINT_cg_event_forceNetfieldLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_forceNetfieldLod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  result = v6->current.unsignedInt;
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result != 2 )
      return !CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number);
    return 0i64;
  }
  return result;
}

/*
==============
CgEventSystem::ShouldIgnoreHitImpactEvent
==============
*/
bool CgEventSystem::ShouldIgnoreHitImpactEvent(CgEventSystem *this, const int eventId, const int sourceEntNum, const Weapon *weapon, const bool isAlternate)
{
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  const BallisticInfo *BallisticInfo; 

  v5 = DCONST_DVARBOOL_bg_ballisticsDoClientImpactFx;
  if ( !DCONST_DVARBOOL_bg_ballisticsDoClientImpactFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ballisticsDoClientImpactFx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.clientNum != sourceEntNum )
    return 0;
  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  if ( !BallisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4648, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  return BallisticInfo->enableBallisticTrajectory && !CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->inKillCam && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
}

