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
  BulletHitBoneInfo v11; 
  int v12; 
  const DObj *ClientDObj; 
  const DObj *v14; 
  int WorldBoneMatrix; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 842, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( (targetEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 843, ASSERT_TYPE_ASSERT, "(CENextValid( targetEnt ))", (const char *)&queryFormat, "CENextValid( targetEnt )") )
    __debugbreak();
  if ( !outBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 844, ASSERT_TYPE_ASSERT, "(outBoneIndex)", (const char *)&queryFormat, "outBoneIndex") )
    __debugbreak();
  v11 = *hitInfo;
  if ( !*(_BYTE *)&v11 )
    return 0;
  v12 = *(_BYTE *)&v11 - 1;
  ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, localClientNum);
  v14 = ClientDObj;
  if ( !ClientDObj )
    return 0;
  if ( !DObjGetBoneInfoForBoneIndex(ClientDObj, v12) )
  {
    Com_PrintError(1, "Could not find the bone specified by the hit event in the client dobj. This implies the client and server dobjs don't match.\n");
    return 0;
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rax+10h]
    vmovss  xmm5, cs:__real@3c008081
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r12
    vmulss  xmm1, xmm0, xmm5
    vsubss  xmm0, xmm1, xmm4
    vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
    vaddss  xmm2, xmm1, dword ptr [rax]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13
    vmulss  xmm1, xmm0, xmm5
    vmovaps [rsp+0D8h+var_58], xmm6
    vmovss  xmm6, dword ptr [rax+14h]
    vmovss  dword ptr [rsp+0D8h+in1], xmm2
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm3, xmm2, xmm3
    vaddss  xmm0, xmm3, dword ptr [rax+4]
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+0D8h+in1+4], xmm0
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm5
    vsubss  xmm2, xmm0, xmm4
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm1, xmm3, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+0D8h+in1+8], xmm1
  }
  WorldBoneMatrix = CG_DObjGetWorldBoneMatrix(&targetEnt->pose, v14, v12, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
  __asm { vmovaps xmm6, [rsp+0D8h+var_58] }
  if ( !WorldBoneMatrix )
    return 0;
  MatrixTransformVector43(&in1, &outTagMat, outHitLocation);
  *outBoneIndex = truncate_cast<unsigned char,int>(v12);
  return 1;
}

/*
==============
CG_Entity_AddFootstepEvent
==============
*/
void CG_Entity_AddFootstepEvent(LocalClientNum_t localClientNum, const bool isLeft, const centity_t *centity, FootstepVFX *footstepVFX, TraceGroundSource source, ScriptableFootstepFlag footstepFlags)
{
  unsigned int number; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool v13; 
  int clientNum; 
  const dvar_t *v15; 
  const characterInfo_t *CharacterInfo; 
  FootstepStatus v18; 
  unsigned __int8 lastGroundSurfaceType; 
  const vec3_t *p_position; 
  char v35; 
  FootstepStatus v56; 
  __int64 v58; 
  char v59[448]; 
  __int64 v60; 

  v60 = -2i64;
  __asm { vmovaps [rsp+2E8h+var_58], xmm6 }
  _RBP = (unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64;
  *(_QWORD *)(_RBP + 440) = (unsigned __int64)&v58 ^ _security_cookie;
  *(_QWORD *)(_RBP + 40) = footstepVFX;
  *(_QWORD *)(_RBP + 8) = centity;
  *(_BYTE *)_RBP = isLeft;
  if ( (source & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5014, ASSERT_TYPE_ASSERT, "(static_cast<int>(TraceGroundSource::NO_PMOVE & source) == 0)", (const char *)&queryFormat, "static_cast<int>(TraceGroundSource::NO_PMOVE & source) == 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_AddFootstepEvent");
  if ( !centity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5017, ASSERT_TYPE_ASSERT, "(centity)", (const char *)&queryFormat, "centity") )
    __debugbreak();
  number = centity->nextState.number;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 5021, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v13 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v13 = 0;
  }
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  *(_BYTE *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 1) = clientNum == number;
  v15 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled && (clientNum != number || !v13) )
  {
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 8) + 416i64), (vec3_t *)(_RBP + 416));
    CG_FootstepTracker_Add(localClientNum, number, LocalClientGlobals->time, (const vec3_t *)(_RBP + 416));
    memset((void *)(_RBP + 416), 0, 0xCui64);
  }
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
  {
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, number);
    _RDI = CharacterInfo;
    if ( CharacterInfo && !CharacterInfo->canEmitFootsteps )
    {
      v18 = FLOAT_POINTER;
LABEL_48:
      CG_FootstepTracker_SetStatus(localClientNum, number, LocalClientGlobals->time, v18);
      goto LABEL_49;
    }
  }
  else
  {
    _RDI = NULL;
  }
  if ( clientNum != number || !v13 )
  {
    if ( !_RDI || ((source & 4) != 0) == *(_BYTE *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 1) && ((source & 4) != 0 || clientNum == number) )
    {
      v18 = VEC3_POINTER|BYTE_VALUE;
      goto LABEL_48;
    }
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 8) + 416i64), (vec3_t *)(_RBP + 8));
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, (vec3_t *)(_RBP + 24));
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+18h]
      vsubss  xmm3, xmm0, dword ptr [rbp+8]
      vmovss  xmm1, dword ptr [rbp+1Ch]
      vsubss  xmm2, xmm1, dword ptr [rbp+0Ch]
      vmovss  xmm0, dword ptr [rbp+20h]
      vsubss  xmm4, xmm0, dword ptr [rbp+10h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm6, xmm3, xmm0
    }
    _R12 = DCONST_DVARFLT_cg_footstepCullDistance;
    if ( !DCONST_DVARFLT_cg_footstepCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footstepCullDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R12);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+28h]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm6
    }
    if ( v35 )
    {
      v56 = FLOAT_VALUE;
    }
    else
    {
      *(double *)&_XMM0 = CG_TraceGroundWorkers_GetTraceOffset();
      __asm { vmovaps xmm6, xmm0 }
      if ( (source & 4) != 0 )
      {
        __asm { vmovss  xmm0, dword ptr [rdi+800h]; yaw }
        YawVectors(*(float *)&_XMM0, (vec3_t *)(_RBP + 416), (vec3_t *)(_RBP + 384));
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+8]
          vmovss  dword ptr [rbp+190h], xmm2
          vmovss  xmm4, dword ptr [rbp+0Ch]
          vmovss  dword ptr [rbp+194h], xmm4
          vaddss  xmm5, xmm6, dword ptr [rbp+10h]
          vmovss  dword ptr [rbp+198h], xmm5
          vmovss  xmm3, cs:__real@42000000
          vmulss  xmm1, xmm3, dword ptr [rbp+1A0h]
          vaddss  xmm2, xmm1, xmm2
          vmovss  dword ptr [rbp+180h], xmm2
          vmulss  xmm1, xmm3, dword ptr [rbp+1A4h]
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbp+184h], xmm2
          vmulss  xmm1, xmm3, dword ptr [rbp+1A8h]
          vaddss  xmm2, xmm1, xmm5
          vmovss  dword ptr [rbp+188h], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbp+8]
          vmovss  dword ptr [rbp+190h], xmm3
          vmovss  xmm1, dword ptr [rbp+0Ch]
          vmovss  dword ptr [rbp+194h], xmm1
          vmovss  xmm2, dword ptr [rbp+10h]
          vaddss  xmm0, xmm6, xmm2
          vmovss  dword ptr [rbp+198h], xmm0
          vmovss  dword ptr [rbp+180h], xmm3
          vmovss  dword ptr [rbp+184h], xmm1
          vmulss  xmm0, xmm6, cs:__real@3f800000
          vsubss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rbp+188h], xmm1
        }
      }
      *(_BYTE *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x100) = source;
      *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x104) = number;
      *(_BYTE *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x108) = *(_BYTE *)_RBP;
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+190h]
        vmovsd  qword ptr [rbp+10Ch], xmm0
      }
      *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x114) = *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x198);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+180h]
        vmovsd  qword ptr [rbp+118h], xmm0
      }
      *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x120) = *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x188);
      *(_BYTE *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x109) = footstepFlags;
      *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x128) = *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x28);
      *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFF80ui64) + 0x130) = LocalClientGlobals->time;
      if ( CG_TraceGroundWorkers_AddEvent((const CgTraceGroundWorkerEvent *)(_RBP + 128)) )
        goto LABEL_46;
      v56 = STRUCT_POINTER;
    }
    CG_FootstepTracker_SetStatus(localClientNum, number, LocalClientGlobals->time, v56);
LABEL_46:
    memset((void *)(_RBP + 24), 0, 0xCui64);
    memset((void *)(_RBP + 8), 0, 0xCui64);
    goto LABEL_49;
  }
  lastGroundSurfaceType = LocalClientGlobals->lastGroundSurfaceType;
  CG_Event_PlayFootstepSound(localClientNum, number, *(_BYTE *)_RBP, lastGroundSurfaceType, SCRIPTABLE_FOOTSTEP_NONE);
  p_position = &LocalClientGlobals->playerGround.trace.position;
  if ( !LocalClientGlobals->playerGround.groundPlane )
    p_position = NULL;
  CG_Event_PlayFootstepFX(localClientNum, number, *(_BYTE *)_RBP, lastGroundSurfaceType, p_position, 1, 1, NULL);
LABEL_49:
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+2E8h+var_58] }
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
  EquipmentMoveType_t v13; 
  unsigned __int8 rattleSoundType; 
  char v16; 
  EquipmentSoundTable *equipmentSoundTable; 
  const WeaponDef *v18; 
  WeaponSFXPackage *sfxPackage; 
  const WeaponDef *v21; 
  WeaponSFXPackage *v22; 
  unsigned __int8 v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
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
    v13 = EQUIPMENT_MOVE_TYPE_INVALID;
    switch ( footstepMoveType )
    {
      case FOOTSTEP_MOVE_TYPE_STATE_BEGIN:
        v13 = EQUIPMENT_MOVE_TYPE_CREEP;
        break;
      case FOOTSTEP_MOVE_TYPE_WALK:
        v13 = EQUIPMENT_MOVE_TYPE_WALK;
        break;
      case FOOTSTEP_MOVE_TYPE_RUN:
      case FOOTSTEP_MOVE_TYPE_JUMP:
        v13 = EQUIPMENT_MOVE_TYPE_RUN;
        break;
      case FOOTSTEP_MOVE_TYPE_SPRINT:
      case FOOTSTEP_MOVE_TYPE_SUPERSPRINT:
        v13 = EQUIPMENT_MOVE_TYPE_SPRINT;
        break;
      case FOOTSTEP_MOVE_TYPE_PRONE:
        v13 = EQUIPMENT_MOVE_TYPE_PRONE;
        break;
      default:
        break;
    }
    rattleSoundType = 0;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v16 = 0;
    equipmentSoundTable = cgMedia.equipmentSoundTable;
    v18 = BG_WeaponDef(&CharacterInfo->dobjHeldWeapon, 0);
    if ( v18 )
    {
      sfxPackage = v18->sfxPackage;
      if ( sfxPackage )
      {
        rattleSoundType = sfxPackage->rattleSoundType;
        _RAX = (__int64)&equipmentSoundTable->weaponRattleTypes[rattleSoundType];
        __asm { vmovss  xmm6, dword ptr [rax+8] }
        v16 = 1;
      }
    }
    v21 = BG_WeaponDef(&CharacterInfo->dobjStowedWeapon, 0);
    if ( v21 )
    {
      v22 = v21->sfxPackage;
      if ( v22 )
      {
        v23 = v22->rattleSoundType;
        _RAX = (__int64)&equipmentSoundTable->weaponRattleTypes[v23];
        if ( v16 )
          __asm { vcomiss xmm6, dword ptr [rax+8] }
        else
          rattleSoundType = v23;
      }
    }
    CG_EquipmentSound(localClientNum, number, 0, leadType, v13, clothType, rattleSoundType, isQuietMove);
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
CG_Event_PlayFootstepFX
==============
*/
void CG_Event_PlayFootstepFX(LocalClientNum_t localClientNum, const int entNum, const bool isLeft, const unsigned __int8 surfaceType, const vec3_t *groundPosition, const bool isPlayerView, const bool isThirdPerson, FootstepVFX *footstepVFX)
{
  const dvar_t *v15; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  FootstepVFX *footstepvfx_creep_left; 
  FxCombinedDef *v21; 
  char v34; 
  char v35; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrigin; 
  FXRegisteredDef def; 
  __int64 v59; 
  vec3_t origin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  v59 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _R13 = groundPosition;
  v15 = DCONST_DVARBOOL_cg_footstepfx;
  if ( !DCONST_DVARBOOL_cg_footstepfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footstepfx") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayFootstepFX");
    _R14 = CG_GetEntity(localClientNum, entNum);
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2128, ASSERT_TYPE_ASSERT, "(sourceEnt)", (const char *)&queryFormat, "sourceEnt") )
      __debugbreak();
    if ( (_R14->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2129, ASSERT_TYPE_ASSERT, "(CENextValid(sourceEnt))", (const char *)&queryFormat, "CENextValid(sourceEnt)") )
      __debugbreak();
    if ( footstepVFX )
    {
      v21 = &footstepVFX->footstepVFX[surfaceType];
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
      if ( CG_IsCharacterInAir(CharacterInfo, _R14) )
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
      if ( !isLeft || (v21 = &footstepvfx_creep_left->smallFootstepVFX[surfaceType], !v21->particleSystemDef) )
      {
        v21 = &footstepvfx_creep_left->footstepVFX[surfaceType];
        if ( !v21->particleSystemDef )
          goto LABEL_59;
      }
    }
    if ( v21 && v21->particleSystemDef )
    {
      CG_GetPoseOrigin(&_R14->pose, &outOrigin);
      if ( !CG_GetLocalClientGlobals(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2251, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+100h+outOrigin]
        vsubss  xmm3, xmm0, dword ptr [rdi+699Ch]
        vmovss  xmm1, dword ptr [rsp+100h+outOrigin+4]
        vsubss  xmm2, xmm1, dword ptr [rdi+69A0h]
        vmovss  xmm0, dword ptr [rsp+100h+outOrigin+8]
        vsubss  xmm4, xmm0, dword ptr [rdi+69A4h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm6, xmm3, xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_footstepfx_maxDistance, "cg_footstepfx_maxDistance");
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm6, xmm1
      }
      if ( v34 | v35 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+37h+angles], xmm0
          vmovss  dword ptr [rbp+37h+angles+8], xmm0
          vmovss  xmm0, dword ptr [r14+4Ch]
          vmovss  dword ptr [rbp+37h+angles+4], xmm0
        }
        AnglesToAxis(&angles, &axis);
        if ( isLeft )
        {
          __asm
          {
            vmovss  xmm3, cs:__real@40200000
            vmulss  xmm1, xmm3, dword ptr [rbp+37h+axis+0Ch]
            vaddss  xmm2, xmm1, dword ptr [rsp+100h+outOrigin]
            vmovss  dword ptr [rbp+37h+origin], xmm2
            vmulss  xmm1, xmm3, dword ptr [rbp+37h+axis+10h]
            vaddss  xmm2, xmm1, dword ptr [rsp+100h+outOrigin+4]
            vmovss  dword ptr [rbp+37h+origin+4], xmm2
            vmulss  xmm1, xmm3, dword ptr [rbp+37h+axis+14h]
            vaddss  xmm2, xmm1, dword ptr [rsp+100h+outOrigin+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm4, cs:__real@40200000
            vmulss  xmm2, xmm4, dword ptr [rbp+37h+axis+0Ch]
            vmovss  xmm1, dword ptr [rsp+100h+outOrigin]
            vsubss  xmm2, xmm1, xmm2
            vmovss  dword ptr [rbp+37h+origin], xmm2
            vmulss  xmm3, xmm4, dword ptr [rbp+37h+axis+10h]
            vmovss  xmm1, dword ptr [rsp+100h+outOrigin+4]
            vsubss  xmm2, xmm1, xmm3
            vmovss  dword ptr [rbp+37h+origin+4], xmm2
            vmulss  xmm3, xmm4, dword ptr [rbp+37h+axis+14h]
            vmovss  xmm1, dword ptr [rsp+100h+outOrigin+8]
            vsubss  xmm2, xmm1, xmm3
          }
        }
        __asm { vmovss  dword ptr [rbp+37h+origin+8], xmm2 }
        if ( groundPosition )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r13+8]
            vmovss  dword ptr [rbp+37h+origin+8], xmm0
          }
        }
        def.m_particleSystemDef = v21->particleSystemDef;
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, &origin, &axis);
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
LABEL_59:
    Sys_ProfEndNamedEvent();
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+100h+var_48+8] }
}

/*
==============
CG_Event_PlayFootstepShakeRumble
==============
*/
void CG_Event_PlayFootstepShakeRumble(const LocalClientNum_t localClientNum, const centity_t *const sourceEnt, const SuitDef *const suitDef)
{
  cg_t *LocalClientGlobals; 
  unsigned int number; 
  unsigned int clientNum; 
  const RumbleInfo *footstep_rumble; 
  float fmt; 
  vec3_t trBase; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RBX = suitDef;
  if ( !sourceEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2297, ASSERT_TYPE_ASSERT, "(sourceEnt)", (const char *)&queryFormat, "sourceEnt", -2i64) )
    __debugbreak();
  if ( (sourceEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2298, ASSERT_TYPE_ASSERT, "(CENextValid( sourceEnt ))", (const char *)&queryFormat, "CENextValid( sourceEnt )") )
    __debugbreak();
  if ( _RBX )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2306, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = sourceEnt->nextState.number;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( !BG_IsInAir(&LocalClientGlobals->predictedPlayerState, 0) )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+354h]
        vxorps  xmm0, xmm0, xmm0
      }
      if ( clientNum == number )
      {
        __asm { vmovss  xmm6, cs:__real@7f7fffff }
      }
      else
      {
        __asm { vcomiss xmm6, xmm0 }
        if ( clientNum <= number )
        {
LABEL_18:
          footstep_rumble = _RBX->footstep_rumble;
          if ( footstep_rumble )
          {
            if ( clientNum == number )
            {
              CG_Rumble_PlayOnClient(localClientNum, _RBX->footstep_rumble);
            }
            else if ( CG_Rumble_IsBroadcastRumble(footstep_rumble) )
            {
              CG_Rumble_PlayOnEntity(localClientNum, _RBX->footstep_rumble, sourceEnt->nextState.number);
            }
          }
          goto LABEL_23;
        }
      }
      __asm { vcomiss xmm0, dword ptr [rbx+35Ch] }
      if ( clientNum < number && _RBX->footstep_shakeDurationMs > 0 )
      {
        Trajectory_GetTrBase(&sourceEnt->nextState.lerp.pos, &trBase);
        __asm
        {
          vmovss  dword ptr [rsp+78h+fmt], xmm6
          vmovss  xmm1, dword ptr [rbx+35Ch]; scale
        }
        CG_StartShakeCamera(localClientNum, *(float *)&_XMM1, _RBX->footstep_shakeDurationMs, &trBase, fmt);
        memset(&trBase, 0, sizeof(trBase));
      }
      goto LABEL_18;
    }
  }
LABEL_23:
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
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
  bool v10; 
  bool v11; 
  centity_t *Entity; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  FootstepStatus v19; 
  SndAliasList *ladderGrabRightPlr; 
  unsigned int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  CgSoundSystem *SoundSystem; 
  vec3_t trBase; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Event_PlayHandGrabSound");
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2452, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2455, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v10 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v10 = 0;
  }
  v11 = entNum == LocalClientGlobals->predictedPlayerState.clientNum && !v10;
  Entity = CG_GetEntity(localClientNum, entNum);
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v23) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2469, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v23, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, entNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entNum);
      if ( CharacterInfo )
      {
        if ( !BG_GetSuitDef(CharacterInfo->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2474, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vaddss  xmm1, xmm0, dword ptr [rsp+98h+trBase+8]
    vmovss  dword ptr [rsp+98h+trBase+8], xmm1
  }
  v17 = DCONST_DVARBOOL_snd_footstep_debug;
  if ( !DCONST_DVARBOOL_snd_footstep_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled && (entNum != LocalClientGlobals->predictedPlayerState.clientNum || !v10) )
    CG_FootstepTracker_Add(localClientNum, entNum, LocalClientGlobals->time, &trBase);
  v18 = DVARBOOL_cg_footsteps;
  if ( !DVARBOOL_cg_footsteps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_footsteps") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !v18->current.enabled )
  {
    v19 = VEC3_VALUE;
LABEL_51:
    CG_FootstepTracker_SetStatus_MostRecent(localClientNum, entNum, v19);
    goto LABEL_52;
  }
  ladderGrabRightPlr = cgMedia.ladderGrabRightPlr;
  if ( isLeft )
    ladderGrabRightPlr = cgMedia.ladderGrabLeftPlr;
  if ( !v11 )
  {
    ladderGrabRightPlr = cgMedia.ladderGrabRightNpc;
    if ( isLeft )
      ladderGrabRightPlr = cgMedia.ladderGrabLeftNpc;
  }
  *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, -1, v11);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  dword ptr [rsp+98h+var_68], xmm1
    vmovss  dword ptr [rsp+98h+var_70], xmm0
  }
  v22 = ((__int64 (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, ladderGrabRightPlr, surfaceType, v24, v25, 0);
  if ( !v22 )
  {
    v19 = VEC3_POINTER|FLOAT_POINTER;
    goto LABEL_51;
  }
  CG_FootstepTracker_BeginPlayback_MostRecent(localClientNum, entNum, v22, LocalClientGlobals->time);
LABEL_52:
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
  const dvar_t *v13; 
  centity_t *Entity; 
  char v18; 
  const char *v19; 
  const dvar_t *v20; 
  CgSoundSystem *SoundSystem; 
  int fmt; 
  int v25; 
  vec3_t trBase; 
  __int64 v27; 

  v27 = -2i64;
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  v13 = DVARBOOL_cg_equipmentSounds;
  if ( !DVARBOOL_cg_equipmentSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_equipmentSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    *(double *)&_XMM0 = CG_GameInterface_GetFootstepVolumeScale(localClientNum, Entity, isPlayerView);
    __asm
    {
      vmovaps xmm6, xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm7, cs:__real@3f800000
      vcomiss xmm0, xmm1
    }
    if ( v18 )
    {
      __asm { vmovaps xmm6, xmm7 }
      if ( isQuietMove )
      {
        if ( isPlayerView )
        {
          v19 = "perk_equipmentVolumeQuietPlayer";
          v20 = DCONST_DVARFLT_perk_equipmentVolumeQuietPlayer;
        }
        else
        {
          v19 = "perk_equipmentVolumeQuietNPC";
          v20 = DCONST_DVARFLT_perk_equipmentVolumeQuietNPC;
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v20, v19);
        __asm { vmovaps xmm6, xmm0 }
      }
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+var_80], xmm7
      vmovss  dword ptr [rsp+0A8h+fmt], xmm6
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entNum, &trBase, aliasList, fmt, v25, 0);
    memset(&trBase, 0, sizeof(trBase));
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
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
  int number; 
  const cg_t *v25; 
  const characterInfo_t *CharacterInfo; 
  int meleeChargeEnt; 
  bool HasPerk; 
  bool isSliding; 
  bool v30; 
  bool v37; 
  vec3_t outForward; 
  vec3_t outUp; 
  vec3_t outRight; 

  _RDI = outMeleeStart;
  _R14 = outMeleeEnd;
  v37 = isAlternate;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1671, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob", v37) )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1673, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
    __debugbreak();
  CG_CalcEyePoint(localClientNum, es->number, outMeleeStart);
  CG_GetViewDirection(localClientNum, es->number, &outForward, &outRight, &outUp);
  __asm
  {
    vmovss  xmm3, cs:__real@41200000
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+outForward]
    vsubss  xmm2, xmm1, xmm2
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+outForward+4]
    vsubss  xmm2, xmm1, xmm2
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+outForward+8]
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rdi+8], xmm2
  }
  number = es->number;
  v25 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v25, number);
  if ( CharacterInfo )
    meleeChargeEnt = CharacterInfo->meleeChargeEnt;
  else
    meleeChargeEnt = LocalClientGlobals->predictedPlayerState.meleeChargeEnt;
  HasPerk = BG_HasPerk(&LocalClientGlobals->predictedPlayerState.perks, 0x14u);
  isSliding = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
  v30 = meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE;
  *(double *)&_XMM0 = BG_GetMeleeRangeByWeapon(weapon, v37, v30, HasPerk, PM_EFF_STANCE_DEFAULT, isSliding);
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rsp+0B8h+outForward]
    vaddss  xmm3, xmm2, dword ptr [rdi]
    vmulss  xmm2, xmm0, dword ptr [rsp+0B8h+outForward+4]
    vmulss  xmm0, xmm0, dword ptr [rsp+0B8h+outForward+8]
    vmovss  dword ptr [r14], xmm3
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [r14+4], xmm3
    vaddss  xmm2, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [r14+8], xmm2
  }
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
  __int64 v7; 
  CgSoundSystem *SoundSystem; 
  centity_t *Entity; 
  const dvar_t *v15; 
  const char *v16; 
  const char *v17; 
  int fromServer; 
  int duration; 
  vec3_t trBase; 
  __int64 v28; 
  vec4_t color; 
  SndAliasList *ladderSlideStopSoundPlayer; 
  SndAliasList *ladderSlideStopSound; 
  char _Buffer[1024]; 

  v28 = -2i64;
  __asm { vmovaps [rsp+4D8h+var_48], xmm6 }
  v7 = (unsigned __int8)state;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  Entity = CG_GetEntity(localClientNum, entNum);
  *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, 3, isPlayerView);
  __asm { vmovaps xmm6, xmm0 }
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  *(_QWORD *)color.v = cgMedia.ladderSlideStartSoundPlayer;
  *(_QWORD *)&color.xyz.z = cgMedia.ladderSlideStartSound;
  ladderSlideStopSoundPlayer = cgMedia.ladderSlideStopSoundPlayer;
  ladderSlideStopSound = cgMedia.ladderSlideStopSound;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+4D8h+duration], xmm0
    vmovss  [rsp+4D8h+fromServer], xmm6
  }
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, _QWORD, const int, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, *(_QWORD *)&color.v[4 * v7 + 2 * !isPlayerView], surfaceType, fromServer, duration, 0);
  v15 = DCONST_DVARBOOL_cg_drawLadderSlideAudio;
  if ( !DCONST_DVARBOOL_cg_drawLadderSlideAudio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLadderSlideAudio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    v16 = "remoteClient";
    if ( isPlayerView )
      v16 = "localClient";
    v17 = NULL;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
      vmovups xmmword ptr [rsp+4D8h+color], xmm0
      vxorps  xmm6, xmm6, xmm6
    }
    if ( (_BYTE)v7 )
    {
      if ( (unsigned __int8)v7 == 1 )
      {
        v17 = "SlideStop";
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
          vmovss  xmm6, cs:__real@43af0000
        }
LABEL_14:
        __asm { vmovups xmmword ptr [rsp+4D8h+color], xmm0 }
        goto LABEL_15;
      }
      if ( (unsigned __int8)v7 != 2 )
      {
LABEL_15:
        j_sprintf(_Buffer, "%s %s audio is playing\n", v16, v17);
        __asm
        {
          vmovss  xmm3, cs:__real@3fc00000; scale
          vmovaps xmm1, xmm6; y
          vmovss  xmm0, cs:__real@43c80000; x
        }
        CL_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &color, *(float *)&_XMM3, _Buffer, 0, 10);
        goto LABEL_16;
      }
      v17 = "Undefined";
      __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
    }
    else
    {
      v17 = "SlideStart";
      __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
    }
    __asm { vmovss  xmm6, cs:__real@437a0000 }
    goto LABEL_14;
  }
LABEL_16:
  memset(&trBase, 0, sizeof(trBase));
  __asm { vmovaps xmm6, [rsp+4D8h+var_48] }
}

/*
==============
CG_LandingSound
==============
*/
void CG_LandingSound(LocalClientNum_t localClientNum, int entNum, int surfaceType, FootstepMoveType_t moveType, int isPlayerView, unsigned int clothType, int isQuietMove, int isFootstepSound)
{
  const dvar_t *v10; 
  const centity_t *Entity; 
  char v17; 
  const dvar_t *v18; 
  const char *v19; 
  CgSoundSystem *SoundSystem; 
  const SndAliasList *ClothFootstepMovementSound; 
  const SndAliasList *ClothFootstepCeilingSound; 

  v10 = DVARBOOL_cg_landingSounds;
  if ( !DVARBOOL_cg_landingSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_landingSounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    Entity = CG_GetEntity(localClientNum, entNum);
    *(double *)&_XMM0 = CG_GameInterface_GetFootstepVolumeScale(localClientNum, Entity, isPlayerView);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v17 && isQuietMove )
    {
      if ( isFootstepSound )
      {
        if ( isPlayerView )
        {
          v18 = DCONST_DVARFLT_perk_footstepVolumeQuietPlayer;
          v19 = "perk_footstepVolumeQuietPlayer";
        }
        else
        {
          v18 = DCONST_DVARFLT_perk_footstepVolumeQuietNPC;
          v19 = "perk_footstepVolumeQuietNPC";
        }
      }
      else if ( isPlayerView )
      {
        v18 = DCONST_DVARFLT_perk_fallVolumeQuietPlayer;
        v19 = "perk_fallVolumeQuietPlayer";
      }
      else
      {
        v18 = DCONST_DVARFLT_perk_fallVolumeQuietNPC;
        v19 = "perk_fallVolumeQuietNPC";
      }
      Dvar_GetFloat_Internal_DebugName(v18, v19);
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
  unsigned int v14; 
  CgSoundSystem *v15; 
  const SndAliasList *v16; 
  unsigned int v17; 
  FXRegisteredDef *v18; 
  __int64 v19; 
  FXRegisteredDef *v20; 
  cg_t *LocalClientGlobals; 
  FxCombinedDef v22; 
  cg_t *v23; 
  int outFxa; 
  FXRegisteredDef *outFx; 
  int v26; 
  __int64 v27; 
  FXRegisteredDef v28; 
  FXRegisteredDef def[8]; 

  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  bulletHitLargeSound = cgMedia.npcImpactSounds.bulletHitLargeSound;
  if ( isPlayerView )
    bulletHitLargeSound = cgMedia.playerImpactSounds.bulletHitLargeSound;
  v14 = 0;
  __asm
  {
    vmovss  dword ptr [rsp+88h+var_58], xmm0
    vmovss  dword ptr [rsp+88h+outFx], xmm0
  }
  v15 = SoundSystem;
  ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, const unsigned int, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2046i64, position, bulletHitLargeSound, surfType, outFxa, v26, 0);
  v16 = BG_ProjDudSound(weapon, isAlternate);
  if ( v16 )
    CgSoundSystem::PlaySoundAlias(v15, 2046, position, v16);
  if ( cgMedia.impactFx )
  {
    v17 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)14);
    if ( v17 >= cgMedia.impactFx->impactTypeCount )
    {
      LODWORD(v27) = cgMedia.impactFx->impactTypeCount;
      LODWORD(outFx) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", outFx, v27) )
        __debugbreak();
    }
    v18 = def;
    v19 = 2i64;
    do
    {
      FXRegisteredDef::FXRegisteredDef(v18++);
      --v19;
    }
    while ( v19 );
    CG_GetImpactEffectList(v17, surfType, 0, 0, 0, def);
    v20 = def;
    do
    {
      if ( v20->m_particleSystemDef )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        FX_PlayOrientedEffect(localClientNum, &def[v14], LocalClientGlobals->time, position, axis);
      }
      ++v14;
      ++v20;
    }
    while ( v14 < 2 );
    v22.particleSystemDef = BG_ProjDudEffect(weapon, isAlternate).particleSystemDef;
    if ( v22.particleSystemDef )
    {
      v28.m_particleSystemDef = v22.particleSystemDef;
      v23 = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffect(localClientNum, &v28, v23->time, position, axis);
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
  __int64 v9; 
  CgDynamicMedia *CgDynamicMedia; 
  unsigned int v12; 
  const FXRegisteredDef *Fx; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v15; 
  unsigned int v17; 
  __int64 v18; 
  float4 endPos; 
  float4 startPos; 
  tmat33_t<vec3_t> axis; 

  _R12 = end;
  _R14 = pos;
  v9 = localClientNum;
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  v12 = truncate_cast<int,unsigned int>(cent->nextState.eventParm);
  if ( CgDynamicMedia::IsValidFx(CgDynamicMedia, v12) )
  {
    Fx = CgDynamicMedia::GetFx(CgDynamicMedia, v12);
    if ( !Fx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 925, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
      __debugbreak();
    AnglesToAxis(angles, &axis);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
    v15 = FX_PlayOrientedEffect((LocalClientNum_t)v9, Fx, LocalClientGlobals->time, _R14, &axis);
    _RBX = NULL;
    v17 = v15 & 0xFFF;
    if ( g_particleSystemsGeneration[4096 * v9 + (v15 & 0xFFF)].__all32 != v15 )
      v17 = 0;
    v18 = (v9 << 12) + v17;
    if ( g_particleSystems[0][v18] >= (ParticleSystem *)0x1000 )
      _RBX = g_particleSystems[0][v18];
    if ( _RBX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovaps [rsp+108h+var_48], xmm6
      }
      endPos.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+108h+endPos.v]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
        vmovss  xmm0, dword ptr [r12]
        vmovups xmmword ptr [rsp+108h+endPos.v], xmm3
        vmovups xmmword ptr [rsp+108h+startPos.v], xmm3
      }
      endPos.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+108h+endPos.v]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r12+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r12+8], 20h ; ' '
        vmovups xmmword ptr [rsp+108h+endPos.v], xmm3
        vmovups xmmword ptr [rsp+108h+endPos.v], xmm3
      }
      ParticleSystem::SetBeamPos(_RBX, &startPos, &endPos);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+108h+startPos.v]
        vmovups xmmword ptr [rbx+30h], xmm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmm3, xmmword ptr [rbx]
        vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
        vshufps xmm4, xmm1, xmm0, 44h ; 'D'
        vshufps xmm5, xmm1, xmm0, 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovaps xmm6, [rsp+108h+var_48]
        vmovups xmmword ptr [rsp+108h+var_D8+10h], xmm1
        vmovups xmmword ptr [rsp+108h+var_D8], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+108h+var_B8], xmm0
        vmovups ymm0, [rsp+108h+var_D8]
        vmovups xmmword ptr [rsp+108h+var_B8+10h], xmm1
        vmovups ymm1, [rsp+108h+var_B8]
        vmovups ymmword ptr [rbx+40h], ymm0
        vmovups ymmword ptr [rbx+60h], ymm1
      }
    }
  }
  else
  {
    Com_PrintError(21, "ERROR: PlayFxBetweenPoints called with invalid effect id %i\n", v12);
  }
}

/*
==============
CG_PlayGrenadeBounceSoundAndEffect
==============
*/
void CG_PlayGrenadeBounceSoundAndEffect(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *position, const tmat33_t<vec3_t> *axis, const Weapon *weapon, const BounceIntensityAlias intensityIndex, const bool isAlternate, const bool isStickEvent)
{
  unsigned int v13; 
  const SndAliasList *WeaponSoundWithFallback; 
  CgSoundSystem *SoundSystem; 
  __int64 *v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 *v20; 
  int v21; 
  int v22; 
  __int64 *v23; 
  int outFx; 
  int v25; 
  bool v26; 
  __int64 offset[2]; 
  __int64 v28; 

  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000002a800000000000002b0
    vmovdqu xmmword ptr [rsp+0B8h+offset], xmm0
  }
  v28 = 672i64;
  v26 = isAlternate;
  v13 = 0;
  WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(weapon, isAlternate, offset[intensityIndex]);
  if ( WeaponSoundWithFallback || (WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(weapon, isAlternate, 664i64)) != NULL )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0B8h+var_88], xmm0
      vmovss  dword ptr [rsp+0B8h+outFx], xmm0
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, const SndAliasList *, _DWORD, int, int, _DWORD, const bool))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)es->number, position, WeaponSoundWithFallback, es->surfType, outFx, v25, 0, isAlternate);
  }
  if ( cgMedia.impactFx )
  {
    v17 = offset;
    v18 = 2i64;
    do
    {
      FXRegisteredDef::FXRegisteredDef((FXRegisteredDef *)v17++);
      --v18;
    }
    while ( v18 );
    v19 = 0;
    v20 = &offset[1];
    do
    {
      v19 += 2;
      *(v20 - 1) = 0i64;
      *v20 = 0i64;
      v20 += 2;
    }
    while ( v19 < 2 );
    if ( isStickEvent && BG_GetWeaponClass(weapon, v26) == WEAPCLASS_THROWINGKNIFE )
    {
      v21 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)8);
      CG_GetImpactEffectList(v21, es->surfType, 0, 0, 0, (FXRegisteredDef *)offset);
    }
    if ( !offset[0] )
    {
      v22 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)9);
      CG_GetImpactEffectList(v22, es->surfType, 0, 0, 0, (FXRegisteredDef *)offset);
    }
    v23 = offset;
    do
    {
      if ( *v23 )
        CGMovingPlatforms::PlayDynamicBoltEffect(es, localClientNum, (const FXRegisteredDef *const)&offset[v13], position, axis);
      ++v13;
      ++v23;
    }
    while ( v13 < 2 );
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
  __int64 v54; 
  vec3_t v; 
  vec3_t origin; 

  v54 = -2i64;
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
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+4Fh+outOrigin]
          vsubss  xmm1, xmm0, dword ptr [r13+38h]
          vmovss  dword ptr [rbp+4Fh+v], xmm1
          vmovss  xmm2, dword ptr [rbp+4Fh+outOrigin+4]
          vsubss  xmm0, xmm2, dword ptr [r13+3Ch]
          vmovss  dword ptr [rbp+4Fh+v+4], xmm0
          vmovss  xmm1, dword ptr [rbp+4Fh+outOrigin+8]
          vsubss  xmm2, xmm1, dword ptr [r13+40h]
          vmovss  dword ptr [rbp+4Fh+v+8], xmm2
        }
        Vec3NormalizeFast(&v);
        v16 = otherEntityNum;
      }
      else
      {
        if ( clientNum != attackerEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1604, ASSERT_TYPE_ASSERT, "(isPlayerViewAttacker)", (const char *)&queryFormat, "isPlayerViewAttacker") )
          __debugbreak();
        _RAX = victimOrigin;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+outOrigin]
          vmovss  dword ptr [rbp+4Fh+v], xmm1
          vmovss  xmm2, dword ptr [rax+4]
          vsubss  xmm0, xmm2, dword ptr [rbp+4Fh+outOrigin+4]
          vmovss  dword ptr [rbp+4Fh+v+4], xmm0
          vmovss  xmm1, dword ptr [rax+8]
          vsubss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
          vmovss  dword ptr [rbp+4Fh+v+8], xmm2
        }
        Vec3NormalizeFast(&v);
        v16 = attackerEntNum;
      }
      __asm
      {
        vmovss  xmm3, cs:s_meleeImpactViewOffset
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+v]
        vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrg]
        vmovss  dword ptr [rbp+4Fh+origin], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+v+4]
        vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrg+4]
        vmovss  dword ptr [rbp+4Fh+origin+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+v+8]
        vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrg+8]
        vmovss  dword ptr [rbp+4Fh+origin+8], xmm2
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
      memset(&outOrg, 0, sizeof(outOrg));
    }
    else
    {
      _RAX = victimOrigin;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  dword ptr [rbp+4Fh+origin], xmm0
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rbp+4Fh+origin+4], xmm1
        vmovss  xmm0, [rbp+4Fh+var_84]
        vaddss  xmm2, xmm0, dword ptr [rax+8]
        vmovss  dword ptr [rbp+4Fh+origin+8], xmm2
      }
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
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  bool outIsAltMelee; 
  int outVariant; 
  WeaponMaterialType outMaterial; 
  MeleeAnimType outAttackerAnim; 
  vec3_t outOrg; 
  __int64 v31; 
  int v32[4]; 

  v31 = -2i64;
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
      __asm
      {
        vmovss  xmm2, cs:soundOffset
        vmulss  xmm0, xmm2, dword ptr [rbx+6944h]
        vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+outOrg]
        vmovss  [rsp+0C8h+var_60], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+6948h]
        vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+outOrg+4]
        vmovss  [rsp+0C8h+var_5C], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+694Ch]
        vaddss  xmm1, xmm0, dword ptr [rsp+0C8h+outOrg+8]
        vmovss  [rsp+0C8h+var_58], xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+0C8h+var_98], xmm0
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
      }
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, int *, SndAliasList *, int, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)attackerEntNum, v32, MeleeWorldImpactSound, surfType, v22, v24, 0);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+0C8h+var_98], xmm0
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
      }
      ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, int, int, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2047i64, impactOrigin, MeleeWorldImpactSound, surfType, v23, v25, 0);
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
  const WeaponDef *v14; 
  WeaponSFXPackage *v15; 
  cg_t *LocalClientGlobals; 
  char v44; 
  unsigned int number; 
  const characterInfo_t *CharacterInfo; 
  CgSoundSystem *SoundSystem; 
  __int64 v49; 
  char *outResultString; 
  vec3_t outOrg; 
  SndAliasList *aliasList[2]; 
  vec3_t outOrigin; 
  char v54[64]; 

  aliasList[1] = (SndAliasList *)-2i64;
  __asm { vmovaps [rsp+128h+var_58], xmm6 }
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  if ( SfxPackage )
  {
    szMountEnterExitString = SfxPackage->szMountEnterExitString;
    if ( szMountEnterExitString )
      goto LABEL_8;
    v14 = BG_WeaponDef(weapon, isAlternate);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1797, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    v15 = v14->sfxPackage;
    if ( v15 )
    {
      szMountEnterExitString = v15->szMountEnterExitString;
      if ( szMountEnterExitString )
      {
LABEL_8:
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        if ( isPlayerView )
        {
          __asm
          {
            vmovss  xmm0, cs:downOffset
            vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
            vmovss  xmm3, cs:forwardOffset
            vmulss  xmm0, xmm3, dword ptr [rsi+6944h]
            vaddss  xmm2, xmm0, dword ptr [rsp+128h+outOrg]
            vmulss  xmm1, xmm4, dword ptr [rsi+695Ch]
            vaddss  xmm5, xmm2, xmm1
            vmovss  dword ptr [rsp+128h+outOrigin], xmm5
            vmulss  xmm0, xmm3, dword ptr [rsi+6948h]
            vaddss  xmm2, xmm0, dword ptr [rsp+128h+outOrg+4]
            vmulss  xmm1, xmm4, dword ptr [rsi+6960h]
            vaddss  xmm6, xmm2, xmm1
            vmovss  dword ptr [rsp+128h+outOrigin+4], xmm6
            vmulss  xmm0, xmm3, dword ptr [rsi+694Ch]
            vaddss  xmm2, xmm0, dword ptr [rsp+128h+outOrg+8]
            vmulss  xmm1, xmm4, dword ptr [rsi+6964h]
            vaddss  xmm3, xmm2, xmm1
          }
        }
        else
        {
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+128h+outOrigin+8]
            vaddss  xmm3, xmm0, cs:upOffset
            vmovss  xmm6, dword ptr [rsp+128h+outOrigin+4]
            vmovss  xmm5, dword ptr [rsp+128h+outOrigin]
          }
        }
        __asm
        {
          vmovss  dword ptr [rsp+128h+outOrigin+8], xmm3
          vsubss  xmm2, xmm5, dword ptr [rsp+128h+outOrg]
          vsubss  xmm0, xmm6, dword ptr [rsp+128h+outOrg+4]
          vsubss  xmm3, xmm3, dword ptr [rsp+128h+outOrg+8]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm6, xmm2, xmm1
        }
        _RDI = DCONST_DVARFLT_cg_mountFoleyCullDistance;
        if ( !DCONST_DVARFLT_cg_mountFoleyCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mountFoleyCullDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmulss  xmm1, xmm0, xmm0
          vcomiss xmm1, xmm6
        }
        if ( !v44 )
        {
          if ( (unsigned int)eventParm >= 4 )
          {
            LODWORD(outResultString) = 4;
            LODWORD(v49) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1841, ASSERT_TYPE_ASSERT, "(unsigned)( mountType ) < (unsigned)( COUNT_MOUNT_TYPE )", "mountType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v49, outResultString) )
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
              BG_BuildMountEnterExitSound(cgMedia.equipmentSoundTable, event == 215, eventParm == 1, szMountEnterExitString, CharacterInfo->clothType, isPlayerView, v54, 64, aliasList);
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
  __asm { vmovaps xmm6, [rsp+128h+var_58] }
}

/*
==============
CG_PlayMountImpactSound
==============
*/
void CG_PlayMountImpactSound(LocalClientNum_t localClientNum, const centity_t *const cent, const Weapon *weapon, bool isAlternate, const vec3_t *mountPoint, int eventParm, bool isPlayerView)
{
  WeaponSFXPackage *SfxPackage; 
  WeaponSFXPackage *v12; 
  cg_t *LocalClientGlobals; 
  char v28; 
  CgSoundSystem *SoundSystem; 
  SndAliasList **outAliasList; 
  __int64 v32; 
  SndAliasList *aliasList; 
  vec3_t outOrg; 
  __int64 v35; 
  char outResultString[64]; 

  v35 = -2i64;
  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  _RSI = mountPoint;
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  v12 = SfxPackage;
  if ( SfxPackage && SfxPackage->szMountImpactString )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm3, xmm0, dword ptr [rsp+0F8h+outOrg]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0F8h+outOrg+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+outOrg+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm6, xmm3, xmm0
    }
    _RDI = DCONST_DVARFLT_cg_mountFoleyCullDistance;
    if ( !DCONST_DVARFLT_cg_mountFoleyCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mountFoleyCullDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm6
    }
    if ( !v28 )
    {
      if ( (unsigned int)eventParm >= 4 )
      {
        LODWORD(v32) = 4;
        LODWORD(outAliasList) = eventParm;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1886, ASSERT_TYPE_ASSERT, "(unsigned)( mountType ) < (unsigned)( COUNT_MOUNT_TYPE )", "mountType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", outAliasList, v32) )
          __debugbreak();
      }
      if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1887, ASSERT_TYPE_ASSERT, "( mountType ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountType", "MOUNT_TYPE_NONE", 0, 0i64) )
        __debugbreak();
      aliasList = NULL;
      BG_BuildMountImpactSound(eventParm == 1, v12->szMountImpactString, isPlayerView, outResultString, 64, &aliasList);
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
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
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
  FxCombinedDef v22; 
  unsigned int v23; 
  scr_string_t tag_fx; 
  const DObj *ClientDObj; 
  Weapon *v26; 
  int v27; 
  __int64 v28; 
  int v29; 
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
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+0C8h+var_98], xmm0
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm0
      }
      ((void (__fastcall *)(CgSoundSystem *, __int64, const vec3_t *, SndAliasList *, _DWORD, int, int, _DWORD))v19->PlaySurfaceSound)(SoundSystem, 2046i64, position, outSnd, es->surfType, v27, v29, 0);
    }
  }
  v22.particleSystemDef = BG_ProjBodyEffect(weapon, isAlternate).particleSystemDef;
  if ( v22.particleSystemDef )
  {
    v23 = es->number;
    tag_fx = scr_const.tag_fx;
    defHandle.m_particleSystemDef = v22.particleSystemDef;
    outBoneIndex[0] = 254;
    if ( v23 >= 0x9E5 )
    {
      LODWORD(v28) = 2533;
      LODWORD(v26) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", v26, v28) )
        __debugbreak();
    }
    ClientDObj = Com_GetClientDObj(v23, localClientNum);
    if ( ClientDObj )
    {
      if ( DObjGetBoneAndModelIndexClient(ClientDObj, tag_fx, outBoneIndex, &outModelIndex) )
        FX_KillBoltedEffects(localClientNum, &defHandle, v23, outBoneIndex[0]);
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
  centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v16; 
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  scr_string_t *trophyTags; 
  unsigned int i; 
  scr_string_t v25; 
  bool v26; 
  LocalClientNum_t v50; 
  unsigned int number; 
  const DObj *v52; 
  cg_t *v53; 
  __int64 spawnFlags; 
  unsigned __int16 inOutIndex[2]; 
  LocalClientNum_t localClientNuma; 
  FXRegisteredDef def; 
  FXRegisteredDef v58; 
  const vec3_t *v59; 
  const VehicleDef *v60; 

  v59 = missileOrigin;
  localClientNuma = localClientNum;
  v58.m_particleSystemDef = NULL;
  Entity = CG_GetEntity(localClientNum, tankEntIndex);
  if ( Entity )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    v16 = ClientDef;
    v60 = ClientDef;
    if ( ClientDef->trophyExplodeFx.particleSystemDef )
    {
      def.m_particleSystemDef = ClientDef->trophyExplodeFx.particleSystemDef;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffect(localClientNum, &def, LocalClientGlobals->time, missileOrigin, explosionAxis);
    }
    if ( v16->trophyFlashFx.particleSystemDef )
    {
      ClientDObj = Com_GetClientDObj(tankEntIndex, localClientNum);
      if ( ClientDObj )
      {
        __asm { vmovaps [rsp+0F8h+var_58], xmm6 }
        trophyTags = v16->trophyTags;
        __asm
        {
          vmovss  xmm6, cs:__real@7f7fffff
          vmovaps [rsp+0F8h+var_68], xmm7
          vmovss  xmm7, [rsp+0F8h+localClientNum]
          vmovaps [rsp+0F8h+var_78], xmm8
          vmovss  xmm8, [rsp+0F8h+localClientNum]
          vmovaps [rsp+0F8h+var_88], xmm9
          vmovss  xmm9, [rsp+0F8h+localClientNum]
        }
        for ( i = 0; i < 4; v26 = i == 4 )
        {
          v25 = *trophyTags;
          v26 = *trophyTags == 0;
          if ( !*trophyTags )
            break;
          if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
            __debugbreak();
          LOBYTE(inOutIndex[0]) = -2;
          if ( DObjGetBoneIndexInternal_47(ClientDObj, v25, (unsigned __int8 *)inOutIndex, (int *)&def) )
          {
            if ( CG_DObjGetLocalBoneMatrix(&Entity->pose, ClientDObj, LOBYTE(inOutIndex[0])) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax+10h]
                vmovss  xmm1, dword ptr [rax+14h]
                vaddss  xmm7, xmm0, dword ptr [rcx+7Ch]
                vmovss  xmm0, dword ptr [rax+18h]
                vaddss  xmm9, xmm0, dword ptr [rcx+84h]
                vaddss  xmm8, xmm1, dword ptr [rcx+80h]
              }
            }
          }
          _RAX = v59;
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  xmm1, dword ptr [rax+4]
            vsubss  xmm3, xmm0, xmm7
            vmovss  xmm0, dword ptr [rax+8]
            vsubss  xmm2, xmm1, xmm8
            vsubss  xmm4, xmm0, xmm9
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm6
          }
          ++i;
          ++trophyTags;
        }
        __asm
        {
          vucomiss xmm6, cs:__real@7f7fffff
          vmovaps xmm6, [rsp+0F8h+var_58]
          vmovaps xmm9, [rsp+0F8h+var_88]
          vmovaps xmm8, [rsp+0F8h+var_78]
          vmovaps xmm7, [rsp+0F8h+var_68]
        }
        v50 = localClientNuma;
        if ( !v26 )
        {
          v58.m_particleSystemDef = v60->trophyFlashFx.particleSystemDef;
          if ( !v58.m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1223, ASSERT_TYPE_ASSERT, "(trophyFlashFxDef.IsValid())", (const char *)&queryFormat, "trophyFlashFxDef.IsValid()") )
            __debugbreak();
          number = Entity->nextState.number;
          strcpy((char *)inOutIndex, "þ");
          if ( number >= 0x9E5 )
          {
            LODWORD(spawnFlags) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", spawnFlags, 2533) )
              __debugbreak();
          }
          v52 = Com_GetClientDObj(number, v50);
          if ( v52 )
          {
            if ( DObjGetBoneAndModelIndexClient(v52, (scr_string_t)0, inOutIndex, (int *)&def) )
            {
              v53 = CG_GetLocalClientGlobals(v50);
              FX_PlayBoltedEffect(v50, &v58, v53->time, number, inOutIndex[0], 0);
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
  const dvar_t *v6; 
  const WeaponSFXPackage *SfxPackage; 
  TracerDef *v15; 
  char v21; 
  TracerDef *v22; 
  char *fmt; 
  char *fmta; 
  double v29; 
  double v30; 

  v6 = DCONST_DVARBOOL_cg_snd_debugwhizby;
  if ( !DCONST_DVARBOOL_cg_snd_debugwhizby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_snd_debugwhizby") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    *(double *)&_XMM0 = CG_GetTracerSpeed(perks, r_weapon, isAlternate);
    __asm { vmovaps xmm6, xmm0 }
    SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
    _RAX = SND_GetWhizby(SfxPackage);
    _RDI = (const char *)_RAX;
    if ( _RAX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+7Ch]
        vcomiss xmm0, xmm6
        vmovaps [rsp+68h+var_28], xmm7
      }
      v15 = BG_TracerType(perks, r_weapon, isAlternate);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+7Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm7, xmm6, xmm6
        vmovsd  [rsp+68h+var_40], xmm7
        vmovsd  [rsp+68h+fmt], xmm0
      }
      Com_PrintWarning(9, "Bullet speed for whizby %s is faster than the tracer %s %f > %f\n", _RDI, v15->name, *(double *)&fmt, v29);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+7Ch]
        vaddss  xmm0, xmm0, cs:__real@44fa0000
        vcomiss xmm0, xmm6
      }
      if ( v21 )
      {
        v22 = BG_TracerType(perks, r_weapon, isAlternate);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+7Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+68h+var_40], xmm7
          vmovsd  [rsp+68h+fmt], xmm0
        }
        Com_PrintWarning(9, "Bullet speed for whizby %s is a lot slower the tracer %s %f < %f\n", _RDI, v22->name, *(double *)&fmta, v30);
      }
      __asm { vmovaps xmm7, [rsp+68h+var_28] }
    }
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  int v17; 
  int v18; 
  vec3_t trBase; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  Entity = CG_GetEntity(localClientNum, entNum);
  *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, Entity, 3, isPlayerView);
  __asm { vmovaps xmm6, xmm0 }
  Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  [rsp+78h+var_50], xmm6
  }
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, int, _DWORD, __int64))SoundSystem->PlaySurfaceSound)(SoundSystem, (unsigned int)entNum, &trBase, aliasList, surfaceType, v17, v18, 0, -2i64);
  memset(&trBase, 0, sizeof(trBase));
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
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
  _RBX = axis;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1282, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ByteToDir(eventParam, _RBX->m);
  _RDI = &_RBX->m[2];
  _RSI = (tmat33_t<vec3_t> *)&_RBX->m[1];
  PerpendicularVector(_RBX->m, &_RBX->m[2]);
  if ( &_RBX->row2 == &_RBX->row1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm3, xmm1, dword ptr [rbx]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm0, dword ptr [rdi]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+8], xmm0
  }
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
  const RumbleInfo *landing_rumbleLowHeight; 
  const char *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 533, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(p_predictedPlayerState->suitIndex);
  if ( SuitDef )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    switch ( event )
    {
      case 181:
      case 185:
        landing_rumbleLowHeight = SuitDef->landing_rumbleLowHeight;
        v11 = "handheldCameraImpulseLandingModifierLow";
        v12 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow;
        goto LABEL_10;
      case 182:
      case 186:
        landing_rumbleLowHeight = SuitDef->landing_rumbleMediumHeight;
        v11 = "handheldCameraImpulseLandingModifierMedium";
        v12 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium;
        goto LABEL_10;
      case 183:
      case 187:
        landing_rumbleLowHeight = SuitDef->landing_rumbleHighHeight;
        v11 = "handheldCameraImpulseLandingModifierHigh";
        v12 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh;
        goto LABEL_10;
      case 184:
      case 188:
        landing_rumbleLowHeight = SuitDef->landing_rumbleExtremeHeight;
        v11 = "handheldCameraImpulseLandingModifierExtreme";
        v12 = DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme;
LABEL_10:
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v12, v11);
        __asm { vmovaps xmm6, xmm0 }
        if ( landing_rumbleLowHeight )
          CG_Rumble_PlayOnClient(localClientNum, landing_rumbleLowHeight);
        break;
      default:
        break;
    }
    v13 = DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled;
    if ( !DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseLandingEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      __asm { vmovaps xmm2, xmm6; scale }
      CG_Shake_Impulse(localClientNum, MOVEMENT, *(float *)&_XMM2);
    }
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  bool v9; 
  EventSequence v10; 
  EventSequence *p_previousEventSequence; 
  int v12; 
  LocalClientNum_t m_localClientNum; 
  bool v14; 
  int v15; 
  unsigned __int16 highLod; 
  unsigned int v17; 
  int v18; 
  const char *EntityTypeName; 
  entityType_s v27; 
  const char *v28; 
  __int64 v36; 
  __int64 v37; 
  bool v38; 
  unsigned int eventParm; 
  const CgEventLodData *v41; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4832, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType >= ET_EVENTS )
  {
    LODWORD(v36) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4833, ASSERT_TYPE_ASSERT, "( ( cent->nextState.eType < ET_EVENTS ) )", "( cent->nextState.eType ) = %i", v36) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4836, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v9 = cent->nextState.number < (int)ComCharacterLimits::ms_gameData.m_clientCount && LocalClientGlobals->m_usingLowLodClientEntityEvents;
  v10.combined = (int)cent->nextState.eventSequence;
  p_previousEventSequence = &cent->previousEventSequence;
  if ( cent->previousEventSequence.combined == v10.combined )
  {
    p_previousEventSequence->combined = v10.combined;
    goto LABEL_29;
  }
  v12 = CgEventSystem::LowLodEventsEnabledForEntity(this, cent, v9);
  m_localClientNum = this->m_localClientNum;
  if ( !v12 )
  {
    v14 = 0;
    v38 = 0;
    v15 = CG_Events_CalculatePreviousEventSequence_HighLodEvents(m_localClientNum, cent, 1, v9, &cent->previousEventSequence);
    if ( v15 )
      goto LABEL_21;
LABEL_29:
    if ( p_previousEventSequence->combined != cent->nextState.eventSequence.combined && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4844, ASSERT_TYPE_ASSERT, "( cent->previousEventSequence.combined ) == ( cent->nextState.eventSequence.combined )", "%s == %s\n\t%i, %i", "cent->previousEventSequence.combined", "cent->nextState.eventSequence.combined", p_previousEventSequence->combined, cent->nextState.eventSequence.combined) )
      __debugbreak();
    return;
  }
  v18 = CG_Events_CalculatePreviousEventSequence_AnyNewLowLodEvents(m_localClientNum, cent, 1, v9);
  p_previousEventSequence->highLod = cent->nextState.eventSequence.highLod;
  v14 = v18 != 0;
  v15 = 0;
  v38 = v18 != 0;
  cent->previousEventSequence.lowLod = cent->previousEventSequence.lowLod;
  if ( !v18 )
    goto LABEL_29;
LABEL_21:
  CgSimBulletFirePellet_EnableWorkers(1);
  v41 = this->GetEntityEventLodDataIfSupported(this, cent, (unsigned int)eventFlags);
  eventParm = cent->nextState.eventParm;
  if ( !v15 && p_previousEventSequence->highLod != cent->nextState.eventSequence.highLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4857, ASSERT_TYPE_ASSERT, "(performHighLodEvents || cent->previousEventSequence.highLod == cent->nextState.eventSequence.highLod)", (const char *)&queryFormat, "performHighLodEvents || cent->previousEventSequence.highLod == cent->nextState.eventSequence.highLod") )
    __debugbreak();
  highLod = p_previousEventSequence->highLod;
  if ( p_previousEventSequence->highLod != cent->nextState.eventSequence.highLod )
  {
    do
    {
      if ( v9 )
        v17 = highLod % 3u;
      else
        v17 = highLod & 3;
      if ( v17 >= 4 )
      {
        LODWORD(v37) = 4;
        LODWORD(v36) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4861, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( ( sizeof( *array_counter( cent->nextState.events ) ) + 0 ) )", "eventIndex doesn't index cent->nextState.events\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      _RDI = cent->nextState.events[v17].eventType;
      cent->nextState.eventParm = cent->nextState.events[v17].eventParm;
      if ( (unsigned int)(_RDI + 32797) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)(_RDI + 29), "signed", (int)_RDI + 29) )
        __debugbreak();
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)(_RDI + 29));
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, EntityTypeName);
      __rdtsc();
      *(double *)&_XMM0 = ((double (__fastcall *)(CgEventSystem *, centity_t *, _QWORD, _QWORD, const CgEventLodData *))this->HandleEntityEvent)(this, cent, (unsigned int)_RDI, (unsigned int)eventFlags, v41);
      __rdtsc();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RBX = 0x140000000ui64;
      ++g_perfEventNum[_RDI];
      __asm
      {
        vcvtsi2sd xmm0, xmm0, rax
        vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vaddsd  xmm0, xmm1, rva ?g_perfEventTime@@3PANA[rbx+rdi*8]; double near * g_perfEventTime
        vmovsd  rva ?g_perfEventTime@@3PANA[rbx+rdi*8], xmm0; double near * g_perfEventTime
        vmaxsd  xmm0, xmm1, rva ?g_perfEventMax@@3PANA[rbx+rdi*8]; double near * g_perfEventMax
        vmovsd  rva ?g_perfEventMax@@3PANA[rbx+rdi*8], xmm0; double near * g_perfEventMax
      }
      Sys_ProfEndNamedEvent();
      ++highLod;
    }
    while ( highLod != cent->nextState.eventSequence.highLod );
    v14 = v38;
    p_previousEventSequence = &cent->previousEventSequence;
  }
  if ( v14 )
  {
    _RDI = cent->nextState.events[3].eventType;
    cent->nextState.eventParm = cent->nextState.events[3].eventParm;
    v27 = truncate_cast<enum entityType_s,int>(_RDI + 29);
    v28 = BG_GetEntityTypeName(v27);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v28);
    __rdtsc();
    *(double *)&_XMM0 = ((double (__fastcall *)(CgEventSystem *, centity_t *, _QWORD, _QWORD, const CgEventLodData *))this->HandleEntityEvent)(this, cent, (unsigned int)_RDI, (unsigned int)eventFlags, v41);
    __rdtsc();
    _RCX = 0x140000000ui64;
    ++g_perfEventNum[_RDI];
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
      vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vaddsd  xmm0, xmm1, rva ?g_perfEventTime@@3PANA[rcx+rdi*8]; double near * g_perfEventTime
      vmovsd  rva ?g_perfEventTime@@3PANA[rcx+rdi*8], xmm0; double near * g_perfEventTime
      vmovsd  xmm0, rva ?g_perfEventMax@@3PANA[rcx+rdi*8]; double near * g_perfEventMax
      vmaxsd  xmm1, xmm0, xmm1
      vmovsd  rva ?g_perfEventMax@@3PANA[rcx+rdi*8], xmm1; double near * g_perfEventMax
    }
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
  entity_event_t v15; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const char *EventTypeName; 
  characterInfo_t *CharacterInfo; 
  playerState_s *p_predictedPlayerState; 
  int v25; 
  FootstepMoveType_t v30; 
  int v31; 
  int v32; 
  bool v36; 
  int v40; 
  FootstepMoveType_t v41; 
  int v42; 
  FootstepMoveType_t v43; 
  int v45; 
  ShakeImpulseSourceType v46; 
  CgWeaponMap *v48; 
  char v49; 
  centity_t *v50; 
  bool v51; 
  const vec3_t *p_position; 
  int v53; 
  __int32 v54; 
  __int32 v55; 
  __int32 v56; 
  EquipmentStanceType_t v57; 
  const SndAliasList *StanceTransitionSound; 
  ShakeImpulseSourceType v66; 
  CgWeaponMap *v67; 
  CgWeaponMap *v72; 
  const Weapon *Weapon; 
  int v74; 
  LocalClientNum_t m_localClientNum; 
  CgSoundSystem *v76; 
  __int64 v77; 
  const SndAliasList *WeaponSoundWithFallback; 
  const WeaponDef *v79; 
  cg_t *LocalClientGlobals; 
  int v81; 
  LocalClientNum_t v82; 
  CgSoundSystem *v83; 
  centity_t *Entity; 
  __int64 v85; 
  const SndAliasList *WeaponSound; 
  CgWeaponMap *v87; 
  const WeaponSFXPackage *SfxPackage; 
  SndAliasList *NoAmmoSound_Internal; 
  const playerState_s *v90; 
  CgWeaponSystem *v91; 
  CgWeaponSystem *v92; 
  OffhandSlot v93; 
  CgWeaponMap *v94; 
  CgWeaponMap *v99; 
  const SndAliasList *v100; 
  __int64 v101; 
  bool v102; 
  Weapon *v103; 
  CgWeaponSystem *WeaponSystem; 
  CgWeaponMap *v105; 
  const Weapon *v106; 
  centity_t *v107; 
  unsigned int v108; 
  const Weapon *v110; 
  bool isDualWield; 
  LocalClientNum_t v113; 
  bitarray_base<bitarray<32> > *v114; 
  bool v115; 
  bitarray_base<bitarray<32> > v116; 
  LocalClientNum_t v117; 
  CgWeaponMap *v118; 
  const Weapon *v119; 
  int v120; 
  MovementAnimState *v121; 
  MovementAnimState *v122; 
  int v123; 
  CgWeaponMap *v124; 
  const Weapon *v125; 
  CgWeaponMap *v126; 
  const Weapon *v127; 
  CgWeaponMap *v128; 
  bool v130; 
  WeaponHand *m_weaponHand; 
  CgPredictedEntitySystem *System; 
  characterInfo_t *v133; 
  CgMissile *v134; 
  CgWeaponMap *v138; 
  const Weapon *v139; 
  int v140; 
  MovementAnimState *animMoveState; 
  MovementAnimState *v142; 
  CgWeaponMap *v143; 
  int WeaponHand; 
  CgWeaponMap *v145; 
  const Weapon *v146; 
  CgWeaponSystem *v147; 
  int FireFxIndexForWeapon; 
  int v149; 
  SndAliasList *slideStartSound; 
  unsigned int v151; 
  ShakeImpulseSourceType v155; 
  unsigned int v157; 
  unsigned int v158; 
  SndAliasList *slideEaseOutSound; 
  int v160; 
  unsigned int v161; 
  int v162; 
  unsigned int v163; 
  int v164; 
  unsigned int eventParm2; 
  int v166; 
  centity_t *v167; 
  CgWeaponMap *v168; 
  const Weapon *v169; 
  int v170; 
  unsigned __int8 v171; 
  const SndAliasList *v172; 
  unsigned __int8 v174; 
  unsigned __int8 v175; 
  bool v176; 
  Weapon *v177; 
  LocalClientNum_t v178; 
  const SndAliasList *v179; 
  CgSoundSystem *v180; 
  void (__fastcall *PlayExplosionSoundAsync)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v182; 
  unsigned __int8 v183; 
  unsigned __int8 v184; 
  bool v185; 
  Weapon *v186; 
  LocalClientNum_t v187; 
  const SndAliasList *v188; 
  CgSoundSystem *v189; 
  void (__fastcall *v190)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v191; 
  unsigned __int8 v192; 
  cg_t *v193; 
  Weapon *v194; 
  __int64 v195; 
  CgSoundSystem *v196; 
  void (__fastcall *v197)(CgSoundSystem *, const int, const vec3_t *, const SndAliasList *, int, const unsigned int); 
  unsigned int v198; 
  unsigned int v199; 
  FXRegisteredDef *p_ceilingAlist; 
  __int64 v201; 
  Bounds *v202; 
  int v203; 
  cg_t *v204; 
  unsigned __int8 v205; 
  int v206; 
  unsigned __int8 v207; 
  int v208; 
  int v209; 
  CgSoundSystem *v210; 
  int v211; 
  int v212; 
  unsigned __int8 v213; 
  int v214; 
  unsigned int *RandSeed; 
  const SndAliasList *v216; 
  int v217; 
  CgWeaponMap *Instance; 
  const SndAliasList *ClothFoleyMovementSound; 
  int v220; 
  unsigned int v221; 
  unsigned int v222; 
  bool v223; 
  int v224; 
  unsigned int v225; 
  unsigned int v226; 
  unsigned int v228; 
  unsigned int v229; 
  int v230; 
  bool v231; 
  int v232; 
  unsigned int v233; 
  unsigned int v234; 
  bool v236; 
  int v237; 
  unsigned int v238; 
  unsigned int number; 
  __int16 otherEntityNum; 
  unsigned int (__fastcall *PlaySoundAliasByName)(CgSoundSystem *, const int, const vec3_t *, int); 
  unsigned int v249; 
  unsigned __int8 v250; 
  unsigned __int16 v251; 
  unsigned __int8 v253; 
  int v254; 
  int v256; 
  LocalClientNum_t v258; 
  CgDynamicMedia *CgDynamicMedia; 
  unsigned int v260; 
  const FXRegisteredDef *Fx; 
  cg_t *v262; 
  int v263; 
  LocalClientNum_t v264; 
  cg_t *v265; 
  unsigned int v266; 
  LocalClientNum_t v267; 
  unsigned int v268; 
  LocalClientNum_t v269; 
  int v270; 
  LocalClientNum_t v271; 
  cg_t *v272; 
  unsigned int v273; 
  LocalClientNum_t v274; 
  __int32 v276; 
  CgWeaponMap *v283; 
  const Weapon *OffhandGestureWeapon; 
  const SndAliasList *v285; 
  unsigned int v286; 
  SndAliasList *v287; 
  int v288; 
  int v289; 
  int v290; 
  LocalClientNum_t v291; 
  const dvar_t *v292; 
  const dvar_t *v293; 
  SndAliasList *MantleSound; 
  LocalClientNum_t v298; 
  cg_t *v299; 
  CgSoundSystem *v302; 
  int Int_Internal_DebugName; 
  CgWeaponSystem *v306; 
  int v307; 
  const char *v308; 
  const dvar_t *v309; 
  bool v314; 
  Weapon *v315; 
  const RumbleInfo *MountRumble; 
  const char *v317; 
  char *fmt; 
  BOOL fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  __int64 weaponstate; 
  weaponstate_t weaponstated; 
  weaponstate_t weaponstatea; 
  _BOOL8 weaponstateb; 
  weaponstate_t weaponstatee; 
  weaponstate_t weaponstatef; 
  weaponstate_t weaponstatec; 
  vec3_t *impulseVecOverride; 
  float impulseVecOverridec; 
  int impulseVecOverrided; 
  vec3_t *impulseVecOverridea; 
  int impulseVecOverridee; 
  int impulseVecOverridef; 
  vec3_t *impulseVecOverrideb; 
  FootstepVFX *footstepVFX; 
  int footstepVFXb; 
  unsigned int footstepVFXa; 
  float isLadder; 
  bool Bool_Internal_DebugName; 
  bool v347; 
  char v348; 
  char v349; 
  bool inAltWeaponMode; 
  unsigned int weaponRattleType; 
  int characterIndex; 
  Weapon *r_weapon; 
  unsigned int clothType; 
  int isQuietMove; 
  centity_t *centa; 
  bool isLeft; 
  char v358; 
  unsigned int viewDip[2]; 
  CgSoundSystem *SoundSystem; 
  vec3_t outOrigin; 
  unsigned int surfType[2]; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *ci; 
  __int64 v365; 
  BgWeaponParms outWP; 
  Bounds ceilingAlist; 
  vec3_t position; 
  vec3_t suitDef; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v371; 

  v365 = -2i64;
  __asm { vmovaps [rsp+250h+var_50], xmm6 }
  v15 = event;
  weaponRattleType = event;
  characterIndex = clientNum;
  centa = cent;
  r_weapon = (Weapon *)iweapon;
  *(_QWORD *)surfType = optionalEventLodData;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  _R14 = &cent->nextState;
  v19 = DVARINT_cg_debugevents;
  if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer == 227 )
    goto LABEL_9;
  v20 = DVARINT_cg_debugevents;
  if ( !DVARINT_cg_debugevents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugevents") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.integer == v15 )
  {
LABEL_9:
    LODWORD(fmt) = eventParm;
    Com_Printf(21, "ent:%3i  event:%3i  params:%u  ", (unsigned int)_R14->number, (unsigned int)v15, fmt);
    EventTypeName = BG_GetEventTypeName(v15);
    Com_Printf(21, "CG_EntityEvent:%s\n", EventTypeName);
  }
  if ( CG_IsEntityHighLoD((const LocalClientNum_t)this->m_localClientNum, _R14->number) )
  {
    _R13 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
    *(_QWORD *)viewDip = &_R13->predictedPlayerState;
    if ( _R13 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2657, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v347 = BG_WeaponIsDualWield(r_weapon);
    *(_QWORD *)ceilingAlist.midPoint.v = BG_WeaponDef(r_weapon, isAlternate);
    clothType = BG_GetHandFromWeaponEvent(v15);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, characterIndex);
    ci = CharacterInfo;
    p_predictedPlayerState = NULL;
    if ( !CharacterInfo || !CharacterInfo->infoValid || (isQuietMove = 1, !BG_HasPerk(&CharacterInfo->perks, 0x1Fu)) )
      isQuietMove = 0;
    *(_QWORD *)suitDef.v = ci ? BG_GetSuitDef(ci->suitIndex) : 0i64;
    if ( !CG_GameInterface_HandleEntityEventCommon((const LocalClientNum_t)this->m_localClientNum, centa, characterIndex, v15, eventParm, r_weapon, isAlternate, isPlayerView) )
    {
      if ( BG_IsLandingEvent(v15) )
      {
        v25 = truncate_cast<int,unsigned int>(eventParm);
        BG_UnpackSoftLandingEventParm(v25, viewDip, &clothType, &weaponRattleType, surfType);
        if ( isPlayerView )
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_cameraLandDipScale, "cg_cameraLandDipScale");
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rax
            vmulss  xmm0, xmm1, xmm0
            vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
            vmovss  dword ptr [r13+6600h], xmm2
          }
          _R13->landTime = _R13->time;
          CG_SND_PlayerBreathsSetLand(this->m_localClientNum, BREATH_LAND_LOW);
          weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &_R13->predictedPlayerState, weaponRattleType);
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, _R13->predictedPlayerState.serverTime);
        }
        v30 = BG_LandingTypeFromEntityEvent(v15);
        v31 = isQuietMove;
        CG_LandingSound(this->m_localClientNum, _R14->number, surfType[0], v30, isPlayerView, clothType, isQuietMove, 1);
        if ( isPlayerView )
          CL_LandingRumble((const LocalClientNum_t)this->m_localClientNum, v15);
        CG_EquipmentSound(this->m_localClientNum, _R14->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_LAND, clothType, weaponRattleType, v31);
        goto $LN7_301;
      }
      if ( BG_IsPainLandingEvent(v15) )
      {
        v32 = truncate_cast<int,unsigned int>(eventParm);
        BG_UnpackHardLandingEventParm(v32, viewDip, (int *)&r_weapon, (unsigned int *)&characterIndex, &weaponRattleType, surfType, &clothType);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm2, xmm0, cs:__real@3c23d70a
        }
        if ( isPlayerView )
        {
          v36 = surfType[0] == 0;
          if ( surfType[0] )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
              vmovss  dword ptr [r13+6600h], xmm1
            }
            _R13->landTime = _R13->time;
          }
          __asm { vcomiss xmm2, cs:__real@3f000000 }
          CG_SND_PlayerBreathsSetLand(this->m_localClientNum, (BreathSoundLandingType)(!v36 + 1));
          weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &_R13->predictedPlayerState, weaponRattleType);
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, _R13->predictedPlayerState.serverTime);
        }
        v40 = v15;
        switch ( v15 )
        {
          case EV_LANDING_PAIN_LOW_HEIGHT:
            v40 = 181;
            break;
          case EV_LANDING_PAIN_MEDIUM_HEIGHT:
            v40 = 182;
            break;
          case EV_LANDING_PAIN_HIGH_HEIGHT:
            v40 = 183;
            break;
          case EV_LANDING_PAIN_EXTREME_HEIGHT:
            v40 = 184;
            break;
        }
        v41 = BG_LandingTypeFromEntityEvent(v40);
        v42 = isQuietMove;
        CG_LandingSound(this->m_localClientNum, _R14->number, clothType, v41, isPlayerView, characterIndex, isQuietMove, 1);
        if ( isPlayerView )
          CL_LandingRumble((const LocalClientNum_t)this->m_localClientNum, v15);
        if ( !(_DWORD)r_weapon )
        {
          v43 = BG_LandingTypeFromEntityEvent(v15);
          CG_LandingSound(this->m_localClientNum, _R14->number, clothType, v43, isPlayerView, characterIndex, v42, 0);
        }
        CG_EquipmentSound(this->m_localClientNum, _R14->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_LAND, characterIndex, weaponRattleType, v42);
        goto $LN7_301;
      }
      switch ( v15 )
      {
        case EV_FOLIAGE_SOUND:
          CG_Foliage_PlayCharacterSound(_R13, centa, isPlayerView, 36);
          break;
        case EV_STOP_WEAPON_SOUND:
          CG_StopWeaponSound((const LocalClientNum_t)this->m_localClientNum, isPlayerView, r_weapon, isAlternate, _R14->number, (weaponstate_t)eventParm);
          break;
        case EV_SOUND_ALIAS:
          if ( !eventParm )
            break;
          v236 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
          v237 = 512;
          v238 = 512;
          if ( v236 )
            v238 = 0x7FFF;
          if ( eventParm >= v238 )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
              v237 = 0x7FFF;
            LODWORD(impulseVecOverride) = v237;
            LODWORD(weaponstate) = eventParm;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4068, ASSERT_TYPE_ASSERT, "(unsigned)( eventParm ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "eventParm doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          if ( (*(_DWORD *)&centa->nextState.clientLinkInfo & 0x7FF) != 0 )
            CG_GetPoseOrigin(&centa->pose, &suitDef);
          else
            Trajectory_GetTrBase(&centa->nextState.lerp.pos, &suitDef);
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->lerp.eFlags, ACTIVE, 1u) || BG_IsVehicleEntity(_R14) )
          {
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
          }
          else
          {
            _RAX = R_GetBrushModel(_R14->index.brushModel);
            __asm
            {
              vmovss  xmm0, dword ptr [rax+38h]
              vmovss  xmm1, dword ptr [rax+3Ch]
              vmovss  xmm2, dword ptr [rax+40h]
              vaddss  xmm0, xmm0, dword ptr [rbp+150h+suitDef]
              vmovss  dword ptr [rbp+150h+ceilingAlist], xmm0
              vaddss  xmm1, xmm1, dword ptr [rbp+150h+suitDef+4]
              vmovss  dword ptr [rbp+150h+ceilingAlist+4], xmm1
              vaddss  xmm0, xmm2, [rbp+150h+var_B8]
              vmovss  dword ptr [rbp+150h+ceilingAlist+8], xmm0
            }
          }
          number = _R14->number;
          if ( _R14->eType < ET_EVENTS )
            goto LABEL_550;
          otherEntityNum = _R14->otherEntityNum;
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
          v249 = truncate_cast<int,unsigned int>(eventParm);
          PlaySoundAliasByName(SoundSystem, number, &ceilingAlist.midPoint, v249);
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
            v211 = 2046;
            if ( _R14->eType < ET_EVENTS )
              v211 = _R14->number;
            Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
            v212 = truncate_cast<int,unsigned int>(eventParm);
            CgSoundSystem::PlaySoundAliasAtViewHeight(SoundSystem, v211, &ceilingAlist.midPoint, v212);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_EQUIP_MOVE_SOUND:
          if ( eventParm )
          {
            v213 = (eventParm >> 7) & 0xF;
            if ( isPlayerView )
            {
              v214 = AdjustWeaponRattleForPlayer(this->m_localClientNum, *(const playerState_s **)viewDip, (eventParm >> 7) & 0xF);
              v213 = truncate_cast<unsigned char,int>(v214);
            }
            RandSeed = GetRandSeed();
            v216 = BG_ChooseEquipmentSound(eventParm & 0xF, v213, (EquipmentMoveType_t)((eventParm >> 4) & 7), isPlayerView, RandSeed);
            v217 = 2046;
            if ( _R14->eType < ET_EVENTS )
              v217 = _R14->number;
            Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
            *(double *)&_XMM0 = CgSoundSystem::GetEquipmentVolumeScale(SoundSystem, centa, isPlayerView);
            __asm { vmovss  dword ptr [rsp+250h+fmt], xmm0 }
            CgSoundSystem::PlaySoundAliasListAtViewHeight(SoundSystem, v217, &ceilingAlist.midPoint, v216, fmtb);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_CLOTH_MOVE_SOUND:
          if ( eventParm )
          {
            if ( !_R13->renderingThirdPerson )
            {
              Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
              if ( !BG_IsThirdPersonMode(Instance, &_R13->predictedPlayerState) )
              {
                ClothFoleyMovementSound = BG_GetClothFoleyMovementSound(eventParm & 0xF, (MovementLeadType_t)((eventParm >> 11) & 3), (EquipmentMoveType_t)((eventParm >> 4) & 7), isPlayerView);
                v220 = 2046;
                if ( _R14->eType < ET_EVENTS )
                  v220 = _R14->number;
                Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
                *(double *)&_XMM0 = CgSoundSystem::GetFootstepVolumeScale(SoundSystem, centa, (eventParm >> 4) & 7, isPlayerView);
                __asm { vmovss  dword ptr [rsp+250h+fmt], xmm0 }
                CgSoundSystem::PlaySoundAliasListAtViewHeight(SoundSystem, v220, &ceilingAlist.midPoint, ClothFoleyMovementSound, fmtc);
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
              v221 = eventParm & 0x7FFF;
              v222 = truncate_cast<int,unsigned int>(eventParm >> 15);
              if ( v221 >= 0x7FFF )
              {
                LODWORD(impulseVecOverride) = 0x7FFF;
                LODWORD(weaponstate) = eventParm & 0x7FFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4001, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( (1 << 15) - 1 ) )", "soundIndex doesn't index SND_MAX_PRECACHED_ALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
            }
            else
            {
              v221 = eventParm & 0x1FF;
              v222 = truncate_cast<int,unsigned int>(eventParm >> 9);
            }
            v223 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
            v224 = 512;
            v225 = 512;
            if ( v223 )
              v225 = 0x7FFF;
            if ( v221 >= v225 )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
                v224 = 0x7FFF;
              LODWORD(impulseVecOverride) = v224;
              LODWORD(weaponstate) = v221;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4010, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "soundIndex doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            if ( v222 >= 0x40 )
            {
              LODWORD(impulseVecOverride) = 64;
              LODWORD(weaponstate) = v222;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4011, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v226 = 2046;
            if ( _R14->eType < ET_EVENTS )
              v226 = _R14->number;
            Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vmovss  dword ptr [rsp+250h+impulseVecOverride], xmm0
              vmovss  [rsp+250h+weaponstate], xmm0
            }
            ((void (__fastcall *)(CgSoundSystem *, _QWORD, Bounds *, _QWORD, unsigned int, weaponstate_t, int, _DWORD))SoundSystem->PlaySurfaceSoundByIndex)(SoundSystem, v226, &ceilingAlist, v221, v222, weaponstatef, impulseVecOverridee, 0);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_CONTEXT_SOUND_ALIAS:
          if ( eventParm )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
            {
              v228 = eventParm & 0x7FFF;
              v229 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 15));
              v230 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 23));
              if ( v228 >= 0x7FFF )
              {
                LODWORD(impulseVecOverride) = 0x7FFF;
                LODWORD(weaponstate) = eventParm & 0x7FFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4034, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( ( (1 << 15) - 1 ) )", "soundIndex doesn't index SND_MAX_PRECACHED_ALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
            }
            else
            {
              v228 = eventParm & 0x1FF;
              v229 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 9));
              v230 = truncate_cast<int,unsigned int>((unsigned __int8)(eventParm >> 17));
            }
            if ( v229 == v230 )
              v230 = -1;
            v231 = Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80);
            v232 = 512;
            v233 = 512;
            if ( v231 )
              v233 = 0x7FFF;
            if ( v228 >= v233 )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|0x80) )
                v232 = 0x7FFF;
              LODWORD(impulseVecOverride) = v232;
              LODWORD(weaponstate) = v228;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4049, ASSERT_TYPE_ASSERT, "(unsigned)( soundIndex ) < (unsigned)( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? ( (1 << 15) - 1 ) : 512 )", "soundIndex doesn't index Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_MULTIPLAYER ) ? SND_MAX_PRECACHED_ALIASES : MAX_SOUNDALIASES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            if ( v229 >= 0x100 )
            {
              LODWORD(impulseVecOverride) = 256;
              LODWORD(weaponstate) = v229;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4050, ASSERT_TYPE_ASSERT, "(unsigned)( contextIndex ) < (unsigned)( 256 )", "contextIndex doesn't index MAX_SOUND_CONTEXT_INDICES\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                __debugbreak();
            }
            v234 = 2046;
            if ( _R14->eType < ET_EVENTS )
              v234 = _R14->number;
            Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vmovss  dword ptr [rsp+250h+footstepVFX], xmm0
              vmovss  dword ptr [rsp+250h+impulseVecOverride], xmm0
            }
            ((void (__fastcall *)(CgSoundSystem *, _QWORD, Bounds *, _QWORD, unsigned int, int, int, int))SoundSystem->PlayContextSoundByIndex)(SoundSystem, v234, &ceilingAlist, v228, v229, v230, impulseVecOverridef, footstepVFXb);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_STANCE_FORCE_STAND:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) )
          {
            ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum)->ignoreStanceInput = 1;
            CL_SetStance(this->m_localClientNum, CL_STANCE_STAND, eventParm);
          }
          break;
        case EV_STANCE_INVALID:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R13->predictedPlayerState.pm_flags, ACTIVE, 5u) )
          {
            v67 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            _RDI = BG_GetCurrentWeaponForPlayer(v67, &_R13->predictedPlayerState);
            switch ( eventParm )
            {
              case 1u:
                if ( _R13->invalidCmdHintType != INVALID_CMD_STAND_BLOCKED )
                {
                  _R13->invalidCmdHintType = INVALID_CMD_STAND_BLOCKED;
                  _R13->invalidCmdHintTime = _R13->time;
                }
                break;
              case 2u:
                if ( _R13->invalidCmdHintType != INVALID_CMD_CROUCH_BLOCKED )
                {
                  _R13->invalidCmdHintType = INVALID_CMD_CROUCH_BLOCKED;
                  _R13->invalidCmdHintTime = _R13->time;
                }
                break;
              case 3u:
                if ( _R13->invalidCmdHintType != INVALID_CMD_PRONE_BLOCKED )
                {
                  _R13->invalidCmdHintType = INVALID_CMD_PRONE_BLOCKED;
                  _R13->invalidCmdHintTime = _R13->time;
                }
                break;
              case 6u:
                if ( _R13->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
                {
                  _R13->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
                  _R13->invalidCmdHintTime = _R13->time;
                }
                break;
              default:
                if ( (eventParm & 0xFFFFFFFA) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1249, ASSERT_TYPE_ASSERT, "((type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD))", (const char *)&queryFormat, "(type == STANCE_EVENT_PARAM_NO_HINT) || (type == STANCE_EVENT_PARAM_GROUND_POUND) || (type == STANCE_EVENT_PARAM_KEEP_HELD)") )
                  __debugbreak();
                break;
            }
            __asm
            {
              vmovups ymm0, ymmword ptr [rdi]
              vmovups ymmword ptr [r13+180BCh], ymm0
              vmovups xmm1, xmmword ptr [rdi+20h]
              vmovups xmmword ptr [r13+180DCh], xmm1
              vmovsd  xmm0, qword ptr [rdi+30h]
              vmovsd  qword ptr [r13+180ECh], xmm0
            }
            *(_DWORD *)&_R13->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
          }
          break;
        case EV_ITEM_PICKUP:
        case EV_AMMO_PICKUP:
          v72 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          Weapon = BgWeaponMap::GetWeapon(v72, (BgWeaponHandle)eventParm);
          v74 = _R14->number;
          m_localClientNum = this->m_localClientNum;
          if ( (unsigned __int16)(Weapon->weaponIdx - 1) > 0x224u )
            break;
          v76 = CgSoundSystem::GetSoundSystem(m_localClientNum);
          BG_WeaponDef(Weapon, 0);
          if ( v15 == EV_ITEM_PICKUP )
          {
            v77 = 8i64 * isPlayerView + 8;
          }
          else
          {
            if ( v15 != EV_AMMO_PICKUP )
              goto LABEL_137;
            v77 = 8i64 * isPlayerView + 24;
          }
          WeaponSoundWithFallback = BG_GetWeaponSoundWithFallback(Weapon, isAlternate, v77);
          CgSoundSystem::PlayEntitySoundAlias(v76, v74, WeaponSoundWithFallback);
LABEL_137:
          if ( isPlayerView )
          {
            v79 = BG_WeaponDef(Weapon, 0);
            if ( !BG_IsScavengerPickup(Weapon) && BG_GetWeaponClass(Weapon, 0) != WEAPCLASS_ITEM )
            {
              LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
              if ( v79->offhandClass )
              {
                if ( !LocalClientGlobals->equippedOffHand.weaponIdx )
                  CG_SetEquippedOffHand(m_localClientNum, Weapon);
              }
              else if ( !LocalClientGlobals->weaponSelect.weaponIdx )
              {
                CG_SelectWeapon(m_localClientNum, Weapon, 0);
              }
            }
          }
          break;
        case EV_NOAMMO:
        case EV_NOAMMO_LEFT:
          v87 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          if ( !BG_ShouldTakeWeaponWhenEmpty(v87, *(const playerState_s **)viewDip, r_weapon, isAlternate) && !*(_BYTE *)(*(_QWORD *)ceilingAlist.midPoint.v + 3962i64) && *(_QWORD *)(*(_QWORD *)ceilingAlist.midPoint.v + 520i64) )
          {
            SfxPackage = BG_GetSfxPackage(r_weapon, isAlternate);
            NoAmmoSound_Internal = CG_GetNoAmmoSound_Internal(SfxPackage, isPlayerView, v347, (PlayerHandIndex)clothType, 0);
            CgSoundSystem::PlayEntitySoundAlias(SoundSystem, _R14->number, NoAmmoSound_Internal);
          }
          if ( isPlayerView )
          {
            v90 = *(const playerState_s **)viewDip;
            goto LABEL_165;
          }
          break;
        case EV_EMPTY_OFFHAND_PRIMARY:
        case EV_EMPTY_OFFHAND_SECONDARY:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView )
            CG_SwitchOffHandCmd(this->m_localClientNum);
          break;
        case EV_OFFHAND_END_NOTIFY:
          CG_Weapons_ToggleEquip_OnOffhandEnd(this->m_localClientNum);
          if ( isPlayerView )
          {
            v140 = 0;
            animMoveState = _R13->animMoveState;
            v142 = _R13->animMoveState;
            do
              MovementAnimState::Reset(v142++, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)v140++);
            while ( v140 < 2 );
            v143 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            WeaponHand = BG_PlayerLastWeaponHand(v143, &_R13->predictedPlayerState);
            if ( WeaponHand >= 0 )
            {
              do
              {
                MovementAnimState::Update(animMoveState, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)p_predictedPlayerState, &_R13->predictedPlayerState);
                LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
                ++animMoveState;
              }
              while ( (int)p_predictedPlayerState <= WeaponHand );
            }
          }
          break;
        case EV_RESET_ADS:
        case EV_RELOAD_START_NOTIFY:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) )
          {
            if ( v15 != EV_RELOAD_START_NOTIFY )
              goto LABEL_217;
            if ( isPlayerView )
              p_predictedPlayerState = &_R13->predictedPlayerState;
            v99 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            if ( !BG_ADSReloadEnabled(v99, p_predictedPlayerState, r_weapon, isAlternate) )
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
          v81 = _R14->number;
          v82 = this->m_localClientNum;
          v83 = CgSoundSystem::GetSoundSystem(v82);
          Entity = CG_GetEntity(v82, v81);
          Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &ceilingAlist.midPoint);
          switch ( weaponRattleType )
          {
            case 0x17u:
              v85 = 8i64 * isPlayerView + 384;
              break;
            case 0x18u:
              v85 = 8i64 * isPlayerView + 400;
              break;
            case 0x19u:
              v85 = 8i64 * isPlayerView + 416;
              break;
            case 0x1Au:
              v85 = 8i64 * isPlayerView + 432;
              break;
            case 0x1Bu:
              v85 = 8i64 * isPlayerView + 448;
              break;
            default:
              Com_PrintWarning(16, "Unknown reload sound event.\n");
              goto LABEL_157;
          }
          WeaponSound = BG_GetWeaponSound(r_weapon, isAlternate, v85);
          CgSoundSystem::PlaySoundAlias(v83, v81, &ceilingAlist.midPoint, WeaponSound);
LABEL_157:
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_RAISE_WEAPON:
          v101 = 8i64 * isPlayerView + 528;
          v102 = isAlternate;
          v103 = r_weapon;
          goto LABEL_225;
        case EV_FIRST_RAISE_WEAPON:
          if ( isPlayerView )
          {
            v100 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 552i64);
            if ( v100 )
              goto LABEL_226;
            v101 = 536i64;
          }
          else
          {
            v100 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 544i64);
            if ( v100 )
              goto LABEL_226;
            v101 = 528i64;
          }
          v102 = isAlternate;
          v103 = r_weapon;
LABEL_225:
          v100 = BG_GetWeaponSoundWithFallback(v103, v102, v101);
LABEL_226:
          CgSoundSystem::PlayEntitySoundAlias(SoundSystem, _R14->number, v100);
          break;
        case EV_PUTAWAY_WEAPON:
          v101 = 8i64 * isPlayerView + 560;
          v102 = isAlternate;
          v103 = r_weapon;
          goto LABEL_225;
        case EV_WEAPON_ALT:
          v101 = 8i64 * isPlayerView + 512;
          v102 = isAlternate;
          v103 = r_weapon;
          goto LABEL_225;
        case EV_PULLBACK_WEAPON:
          WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3262, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
            __debugbreak();
          CgWeaponSystem::PlayPullbackSound(WeaponSystem, _R14->number, isPlayerView, r_weapon, isAlternate);
          break;
        case EV_FIRE_WEAPON_END:
        case EV_FIRE_VEH_TURRET_END:
          CG_SndKillAutoSimEnt(centa, 0);
          break;
        case EV_PRE_FIRE_WEAPON:
          v100 = BG_PreFireSound(r_weapon, isAlternate, isPlayerView);
          if ( v100 )
            goto LABEL_226;
          break;
        case EV_FIRE_RICOCHET:
          *(_QWORD *)ceilingAlist.midPoint.v = CG_GetEntWeapon(this->m_localClientNum, centa);
          inAltWeaponMode = centa->nextState.inAltWeaponMode;
          v107 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, centa->nextState.otherEntityNum);
          if ( !v107 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3285, ASSERT_TYPE_ASSERT, "(attackerEnt)", (const char *)&queryFormat, "attackerEnt") )
            __debugbreak();
          v108 = centa->nextState.eventParm;
          if ( v108 != 2047 )
            p_predictedPlayerState = (playerState_s *)CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v108);
          _RDI = &centa->nextState.lerp.u;
          Trajectory_GetTrBase(&centa->nextState.lerp.pos, &suitDef);
          v110 = *(const Weapon **)ceilingAlist.midPoint.v;
          isDualWield = BG_WeaponIsDualWield(*(const Weapon **)ceilingAlist.midPoint.v);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+10h]
            vmovss  dword ptr [rsp+250h+impulseVecOverride], xmm0
          }
          CG_FireWeaponRicochet(this->m_localClientNum, v107, (centity_t *)p_predictedPlayerState, &suitDef, (const vec3_t *)&centa->nextState.lerp.u, centa->nextState.lerp.u.anonymous.data[3], impulseVecOverridec, v110, inAltWeaponMode, (PlayerHandIndex)clothType, isPlayerView, isDualWield);
          memset(&suitDef, 0, sizeof(suitDef));
          break;
        case EV_RECHAMBER_WEAPON:
          v101 = 8i64 * isPlayerView + 368;
          v102 = isAlternate;
          v103 = r_weapon;
          goto LABEL_225;
        case EV_EJECT_BRASS:
        case EV_EJECT_BRASS_LEFT:
          v113 = this->m_localClientNum;
          v114 = *(bitarray_base<bitarray<32> > **)surfType;
          if ( *(_QWORD *)surfType && **(_BYTE **)surfType )
          {
            if ( bitarray_base<bitarray<32>>::testBit((bitarray_base<bitarray<32> > *)(*(_QWORD *)surfType + 12i64), 0) )
            {
              v115 = 0;
            }
            else
            {
              v116 = v114[1];
              if ( *(unsigned __int8 *)&v116 >= 3u )
              {
                LODWORD(impulseVecOverride) = 3;
                LODWORD(weaponstate) = (unsigned __int8)v116;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( lodData->fovLod ) < (unsigned)( ( sizeof( *array_counter( params.minimumDistance ) ) + 0 ) )", "lodData->fovLod doesn't index params.minimumDistance\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
                  __debugbreak();
              }
              v115 = *(_BYTE *)v114 <= s_eventLodTypeParams[0].minimumDistance[*(_BYTE *)&v114[1]];
            }
          }
          else
          {
            v115 = 1;
          }
          CG_Event_Debug_AddCount(v113, CG_EVENT_LOD_TYPE_EJECT_BRASS, v115);
          if ( v115 )
            CG_EjectWeaponBrass(this->m_localClientNum, _R14, v15, isAlternate);
          break;
        case EV_FIRE_WEAPON_LASTBURST:
        case EV_FIRE_WEAPON_LASTBURST_LEFT:
          CG_SndAutoSimEntLastBurst(centa, (const PlayerHandIndex)clothType);
          break;
        case EV_FIRE_MELEE_DAMAGE:
          v117 = this->m_localClientNum;
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1756, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( r_weapon->weaponIdx )
          {
            CG_GetMeleeStartEnd(v117, _R14, r_weapon, isAlternate, &suitDef, &ceilingAlist.midPoint);
            Physics_AddDeferredBulletForce((const Physics_WorldId)(3 * v117 + 3), &suitDef, &ceilingAlist.midPoint, _R14->number, 1, r_weapon, isAlternate, eventParm, CG_MeleeEventEffectCallback);
            CG_Glass_MeleeEvent(v117, _R14->number);
            ScriptableCl_MeleeEvent(v117, _R14->number, r_weapon, isAlternate);
          }
          break;
        case EV_FIRE_MELEE_SWIPE:
        case EV_FIRE_MELEE_CHARGE:
          if ( isPlayerView )
            CG_SND_PlayerBreathsSetMelee(this->m_localClientNum);
          break;
        case EV_PREP_OFFHAND:
          v118 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          *(_QWORD *)ceilingAlist.midPoint.v = v118;
          if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3374, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
            __debugbreak();
          v119 = BgWeaponMap::GetWeapon(v118, (BgWeaponHandle)eventParm);
          if ( !v119->weaponIdx )
          {
            LODWORD(footstepVFX) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3376, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "weapon.weaponIdx", "WP_NONE", footstepVFX, 0i64) )
              __debugbreak();
          }
          CG_PrepOffHand(this->m_localClientNum, _R14, v119, isPlayerView);
          if ( isPlayerView )
          {
            v120 = 0;
            v121 = _R13->animMoveState;
            v122 = _R13->animMoveState;
            do
              MovementAnimState::Reset(v122++, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)v120++);
            while ( v120 < 2 );
            v123 = BG_PlayerLastWeaponHand(*(const BgWeaponMap **)ceilingAlist.midPoint.v, &_R13->predictedPlayerState);
            if ( v123 >= 0 )
            {
              do
              {
                MovementAnimState::Update(v121, (const LocalClientNum_t)this->m_localClientNum, (const PlayerHandIndex)p_predictedPlayerState, &_R13->predictedPlayerState);
                LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
                ++v121;
              }
              while ( (int)p_predictedPlayerState <= v123 );
            }
          }
          break;
        case EV_PUTAWAY_OFFHAND:
          v126 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v127 = BgWeaponMap::GetWeapon(v126, (BgWeaponHandle)eventParm);
          CG_PutAwayOffhand(this->m_localClientNum, _R14, v127, isPlayerView);
          break;
        case EV_USE_OFFHAND:
          v128 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          _RBX = BgWeaponMap::GetWeapon(v128, (BgWeaponHandle)eventParm);
          if ( isPlayerView )
          {
            v130 = !_R13->inKillCam && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R13->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && BgMissile::ShouldBePredicted(v128, &_R13->predictedPlayerState, _RBX, 0);
            m_weaponHand = _R13->m_weaponHand;
            if ( _R13 == (cg_t *)-807496i64 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3432, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
                __debugbreak();
              m_weaponHand = NULL;
            }
            if ( v130 && m_weaponHand->viewModelDObj )
            {
              System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)this->m_localClientNum);
              if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3436, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
                __debugbreak();
              if ( CgPredictedEntitySystem::CanSpawnNewEntities(System) )
              {
                v133 = CgStatic::GetCharacterInfo(LocalClientStatics, _R13->clientNum);
                if ( !v133 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3441, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
                  __debugbreak();
                if ( v133->infoValid )
                {
                  v134 = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
                  memset_0(&outWP, 0, sizeof(outWP));
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rbx]
                    vmovups ymmword ptr [rbp+150h+outWP.weapon.weaponIdx], ymm0
                    vmovups xmm1, xmmword ptr [rbx+20h]
                    vmovups xmmword ptr [rbp+150h+outWP.weapon.attachmentVariationIndices+5], xmm1
                    vmovsd  xmm0, qword ptr [rbx+30h]
                    vmovsd  qword ptr [rbp+150h+outWP.weapon.attachmentVariationIndices+15h], xmm0
                  }
                  *(_DWORD *)&outWP.weapon.weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
                  outWP.isAlternate = 0;
                  outWP.weapDef = BG_WeaponDef(_RBX, 0);
                  if ( BG_GetWeaponType(&outWP.weapon, outWP.isAlternate) == WEAPTYPE_GRENADE )
                    CgMissile::GetMuzzleOrientation(v134, _R14->number, &outWP);
                  BgMissile::UseOffhand(v134, _R14->number, _R13->predictedPlayerState.serverTime, &outWP);
                }
                else
                {
                  Com_Printf(14, "Could not fire predicted missile because the local player character info is invalid. Possible cause is host migration. Client number: %d\n", (unsigned int)_R13->clientNum);
                }
              }
            }
          }
          CG_UseOffHand(this->m_localClientNum, centa, _RBX, isAlternate, isPlayerView);
          break;
        case EV_SWITCH_OFFHAND:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView )
          {
            v138 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            v139 = BgWeaponMap::GetWeapon(v138, (BgWeaponHandle)eventParm);
            CG_SetEquippedOffHand(this->m_localClientNum, v139);
          }
          break;
        case EV_SWITCH_AND_PREP_OFFHAND:
          v124 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3401, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
            __debugbreak();
          v125 = BgWeaponMap::GetWeapon(v124, (BgWeaponHandle)eventParm);
          if ( !v125->weaponIdx )
          {
            LODWORD(footstepVFX) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3403, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "weapon.weaponIdx", "WP_NONE", footstepVFX, 0i64) )
              __debugbreak();
          }
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView )
            CG_SetEquippedOffHand(this->m_localClientNum, v125);
          CG_PrepOffHand(this->m_localClientNum, _R14, v125, isPlayerView);
          break;
        case EV_PULLBACK_OFFHAND_QUICK:
          v105 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v106 = BgWeaponMap::GetWeapon(v105, (BgWeaponHandle)eventParm);
          CG_QuickPullbackOffhand(this->m_localClientNum, _R14, v106, isPlayerView);
          break;
        case EV_MELEE_CHARACTER_IMPACT:
          v164 = _R14->lerp.u.anonymous.data[0];
          CG_MeleeBloodEvent(this->m_localClientNum, v164);
          CG_PlayMeleeCharacterImpactSound((const LocalClientNum_t)this->m_localClientNum, _R14, v164, eventParm, &outOrigin);
          break;
        case EV_MELEE_WORLD_IMPACT:
          eventParm2 = _R14->eventParm2;
          if ( eventParm2 >= 0x40 )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = _R14->eventParm2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3630, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v166 = _R14->lerp.u.anonymous.data[0];
          v167 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, _R14->clientNum);
          if ( v167 && (v167->flags & 1) != 0 )
            CG_PlayMeleeWorldImpactSound((const LocalClientNum_t)this->m_localClientNum, eventParm2, v166, &outOrigin, eventParm);
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
          if ( *(_WORD *)(*(_QWORD *)viewDip + 158i64) != _R14->number )
          {
LABEL_245:
            if ( !BG_IsTurretActive(*(const playerState_s **)viewDip) || *(_WORD *)(*(_QWORD *)viewDip + 636i64) != _R14->number )
            {
LABEL_246:
              LOBYTE(weaponstate) = 0;
              LOBYTE(fmta) = isPlayerView;
              this->HandleTurretFire(this, centa, v15, eventParm, fmta, weaponstate);
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
            v170 = truncate_cast<int,unsigned int>(eventParm);
            CG_ExplosiveSplashOnShieldEvent(this->m_localClientNum, v170);
          }
          break;
        case EV_GRENADE_BOUNCE:
          goto $LN72_9;
        case EV_GRENADE_STICK:
        case EV_GRENADE_REST:
        case EV_GRENADE_ENTERS_WATER:
          centa->flags |= 0x200u;
$LN72_9:
          v174 = _R14->surfType;
          if ( v174 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v174;
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
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          CG_PlayGrenadeBounceSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &position, &axis, r_weapon, (const BounceIntensityAlias)(eventParm >> 8), isAlternate, v15 == EV_GRENADE_STICK);
          break;
        case EV_GRENADE_ROLL:
          v171 = _R14->surfType;
          if ( v171 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v171;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3752, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v172 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 696i64);
          if ( v172 )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vmovss  dword ptr [rsp+250h+impulseVecOverride], xmm0
              vmovss  [rsp+250h+weaponstate], xmm0
            }
            ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, const SndAliasList *, _DWORD, weaponstate_t, int, _DWORD))SoundSystem->PlaySurfaceSound)(SoundSystem, 2046i64, &outOrigin, v172, _R14->surfType, weaponstated, impulseVecOverrided, 0);
          }
          break;
        case EV_GRENADE_EXPLODE_FX:
          v175 = _R14->surfType;
          if ( v175 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v175;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3783, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          v176 = isAlternate;
          v177 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            break;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &position, &axis, r_weapon, isAlternate, 1);
LABEL_405:
          v178 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(v177, v176);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
            CGMovingPlatforms::PlayDynamicBoltEffect(_R14, v178, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
          v179 = BG_ProjExplosionSound(v177, v176);
          if ( v179 )
          {
            v180 = CgSoundSystem::GetSoundSystem(v178);
            PlayExplosionSoundAsync = v180->PlayExplosionSoundAsync;
            v182 = BG_ProjExplosionReflectionClass(v177, v176);
            PlayExplosionSoundAsync(v180, 2046, &position, v179, _R14->surfType, v182);
          }
          break;
        case EV_GRENADE_EXPLODE_DAMAGE:
          v183 = _R14->surfType;
          if ( v183 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v183;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3798, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          LOBYTE(weaponstate) = isAlternate;
          this->HandleExplosionEvent(this, centa, v15, &position, r_weapon, weaponstate);
          break;
        case EV_GRENADE_EXPLODE:
          v184 = _R14->surfType;
          if ( v184 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v184;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3809, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          v185 = isAlternate;
          v186 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_421;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &position, &axis, r_weapon, isAlternate, 1);
          v187 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
            CGMovingPlatforms::PlayDynamicBoltEffect(_R14, v187, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
          goto LABEL_419;
        case EV_GRENADE_PICKUP:
        case EV_TRAIL_DESTROY:
          centa->flags |= 0x200u;
          break;
        case EV_GRENADE_LETGO:
          centa->flags &= ~0x200u;
          break;
        case EV_ROCKET_EXPLODE:
          v192 = _R14->surfType;
          if ( v192 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v192;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3826, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          v185 = isAlternate;
          v186 = r_weapon;
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_421;
          CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &position, &axis, r_weapon, isAlternate, 1);
          v187 = this->m_localClientNum;
          *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
          if ( *(_QWORD *)ceilingAlist.midPoint.v )
          {
            v193 = CG_GetLocalClientGlobals(v187);
            FX_PlayOrientedEffect(v187, (const FXRegisteredDef *)&ceilingAlist, v193->time, &position, &axis);
          }
LABEL_419:
          v188 = BG_ProjExplosionSound(v186, v185);
          if ( v188 )
          {
            v189 = CgSoundSystem::GetSoundSystem(v187);
            v190 = v189->PlayExplosionSoundAsync;
            v191 = BG_ProjExplosionReflectionClass(v186, v185);
            v190(v189, 2046, &position, v188, _R14->surfType, v191);
            v15 = weaponRattleType;
          }
LABEL_421:
          LOBYTE(weaponstatea) = v185;
          this->HandleExplosionEvent(this, centa, v15, &position, v186, weaponstatea);
          break;
        case EV_FLASHBANG_EXPLODE:
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          v176 = isAlternate;
          v177 = r_weapon;
          if ( !CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
            goto LABEL_405;
          break;
        case EV_CUSTOM_EXPLODE:
          CG_UpdateMissileEventOrientation(_R14, (unsigned __int8)eventParm, &axis);
          CGMovingPlatforms::ProcessDynamicBoltPosition(_R14, this->m_localClientNum, &outOrigin, &position);
          if ( CG_HandleTimeOutExplosionEvent(eventParm, (const LocalClientNum_t)this->m_localClientNum, isPlayerView, &position, &axis, r_weapon, isAlternate) )
          {
            v194 = r_weapon;
          }
          else
          {
            v194 = r_weapon;
            CG_PlayProjectileImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &position, &axis, r_weapon, isAlternate, 0);
            v195 = this->m_localClientNum;
            if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1377, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
              __debugbreak();
            *(FxCombinedDef *)ceilingAlist.midPoint.v = BG_ProjExplosionEffect(r_weapon, isAlternate);
            if ( *(_QWORD *)ceilingAlist.midPoint.v )
              CGMovingPlatforms::PlayDynamicBoltEffect(_R14, (LocalClientNum_t)v195, (const FXRegisteredDef *const)&ceilingAlist, &position, &axis);
            *(_QWORD *)suitDef.v = BG_ProjExplosionSound(r_weapon, isAlternate);
            if ( *(_QWORD *)suitDef.v )
            {
              if ( !(_BYTE)CgEventSystem::ms_allocatedType )
              {
                LODWORD(impulseVecOverridea) = v195;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", impulseVecOverridea) )
                  __debugbreak();
              }
              if ( (unsigned int)v195 >= CgEventSystem::ms_allocatedCount )
              {
                LODWORD(impulseVecOverridea) = CgEventSystem::ms_allocatedCount;
                LODWORD(weaponstateb) = v195;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", weaponstateb, impulseVecOverridea) )
                  __debugbreak();
              }
              if ( !CgEventSystem::ms_eventSystemArray[v195] )
              {
                LODWORD(impulseVecOverridea) = v195;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", impulseVecOverridea) )
                  __debugbreak();
              }
              if ( !CgEventSystem::ms_eventSystemArray[v195]->IsTimedEventExpired(CgEventSystem::ms_eventSystemArray[v195], _R14) )
              {
                v196 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v195);
                v197 = v196->PlayExplosionSoundAsync;
                v198 = BG_ProjExplosionReflectionClass(r_weapon, isAlternate);
                v197(v196, 2046, &position, *(const SndAliasList **)suitDef.v, _R14->surfType, v198);
                LOBYTE(weaponstatee) = isAlternate;
                this->HandleExplosionEvent(this, centa, weaponRattleType, &position, r_weapon, weaponstatee);
                break;
              }
            }
          }
          LOBYTE(weaponstateb) = isAlternate;
          this->HandleExplosionEvent(this, centa, v15, &position, v194, weaponstateb);
          break;
        case EV_CHANGE_TO_DUD:
          v199 = CG_Main_RegisteredImpactTypeToImpactType((RegisteredImpactType)14);
          if ( v199 >= cgMedia.impactFx->impactTypeCount )
          {
            LODWORD(impulseVecOverride) = cgMedia.impactFx->impactTypeCount;
            LODWORD(weaponstate) = v199;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3872, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          p_ceilingAlist = (FXRegisteredDef *)&ceilingAlist;
          v201 = 2i64;
          do
          {
            FXRegisteredDef::FXRegisteredDef(p_ceilingAlist++);
            --v201;
          }
          while ( v201 );
          CG_GetImpactEffectList(v199, 0, 0, 0, 0, (FXRegisteredDef *)&ceilingAlist);
          v202 = &ceilingAlist;
          do
          {
            if ( *(_QWORD *)v202->midPoint.v )
            {
              v203 = truncate_cast<int,unsigned int>(eventParm);
              CG_UpdateMissileEventOrientation(_R14, v203, &axis);
              v204 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
              FX_PlayOrientedEffect(this->m_localClientNum, (const FXRegisteredDef *)&ceilingAlist + (int)p_predictedPlayerState, v204->time, &outOrigin, &axis);
            }
            LODWORD(p_predictedPlayerState) = (_DWORD)p_predictedPlayerState + 1;
            v202 = (Bounds *)((char *)v202 + 8);
          }
          while ( (unsigned int)p_predictedPlayerState < 2 );
          break;
        case EV_DUD_EXPLODE:
          v205 = _R14->surfType;
          if ( v205 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v205;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3891, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v206 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(_R14, v206, &axis);
          CG_PlayProjectileExplosionSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, _R14, &outOrigin, &axis, r_weapon, isAlternate, 0);
          CG_PlayDudImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, isPlayerView, &outOrigin, &axis, r_weapon, isAlternate, _R14->surfType);
          break;
        case EV_DUD_IMPACT:
          v207 = _R14->surfType;
          if ( v207 >= 0x40u )
          {
            LODWORD(impulseVecOverride) = 64;
            LODWORD(weaponstate) = v207;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3901, ASSERT_TYPE_ASSERT, "(unsigned)( es->surfType ) < (unsigned)( 64 )", "es->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", weaponstate, impulseVecOverride) )
              __debugbreak();
          }
          v208 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(_R14, v208, &axis);
          CG_PlayDudImpactSoundAndEffect((const LocalClientNum_t)this->m_localClientNum, isPlayerView, &outOrigin, &axis, r_weapon, isAlternate, _R14->surfType);
          break;
        case EV_TROPHY_EXPLODE:
          v209 = truncate_cast<int,unsigned int>(eventParm);
          CG_UpdateMissileEventOrientation(_R14, v209, &axis);
          LOBYTE(weaponstate) = isAlternate;
          this->HandleExplosionEvent(this, centa, v15, &outOrigin, r_weapon, weaponstate);
          CG_PlayTrophyEffects(this->m_localClientNum, &outOrigin, &axis, _R14->otherEntityNum);
          v210 = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)this->m_localClientNum);
          CgSoundSystem::PlaySoundAlias(v210, 2046, &outOrigin, cgMedia.trophyExplodeSound);
          break;
        case EV_PLAY_FX:
          v258 = this->m_localClientNum;
          CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
          v260 = truncate_cast<int,unsigned int>(centa->nextState.eventParm);
          if ( CgDynamicMedia::IsValidFx(CgDynamicMedia, v260) )
          {
            Fx = CgDynamicMedia::GetFx(CgDynamicMedia, v260);
            if ( !Fx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 899, ASSERT_TYPE_ASSERT, "(fxDef)", (const char *)&queryFormat, "fxDef") )
              __debugbreak();
            AnglesToAxis(&_R14->lerp.apos.trBase, &v371);
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
            v262 = CG_GetLocalClientGlobals(v258);
            FX_PlayOrientedEffect(v258, Fx, v262->time, &ceilingAlist.midPoint, &v371);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          else
          {
            Com_PrintError(21, "ERROR: CG_PlayFx called with invalid effect id %i\n", v260);
          }
          break;
        case EV_PLAY_FX_BETWEEN_POINT:
          Trajectory_GetTrBase(&_R14->lerp.pos, &ceilingAlist.midPoint);
          CG_PlayFxBetweenPoints(this->m_localClientNum, centa, &ceilingAlist.midPoint, &_R14->lerp.apos.trBase, (const vec3_t *)&_R14->lerp.u);
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_PLAY_FX_ON_TAG:
          v263 = _R14->number;
          v264 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v264, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
          {
            v265 = CG_GetLocalClientGlobals(v264);
            FX_PlayBoltedEffect(v264, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v265->time, v263, (int)r_weapon, 0);
          }
          break;
        case EV_STOP_FX_ON_TAG:
          v266 = _R14->number;
          v267 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v267, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
            FX_StopBoltedEffects(v267, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v266, (unsigned int)r_weapon);
          break;
        case EV_KILL_FX_ON_TAG:
          v268 = _R14->number;
          v269 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v269, eventParm, (const FXRegisteredDef **)&ceilingAlist, (unsigned int *)&r_weapon, viewDip) )
            FX_KillBoltedEffects(v269, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v268, (unsigned int)r_weapon);
          break;
        case EV_PLAY_FX_ON_TAG_FOR_CLIENTS:
          v270 = _R14->number;
          v271 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v271, eventParm, (const FXRegisteredDef **)&ceilingAlist, viewDip, (unsigned int *)&r_weapon) )
          {
            v272 = CG_GetLocalClientGlobals(v271);
            if ( v272->predictedPlayerState.clientNum == (_DWORD)r_weapon )
              FX_PlayBoltedEffect(v271, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v272->time, v270, viewDip[0], 0);
          }
          break;
        case EV_STOP_FX_ON_TAG_FOR_CLIENTS:
          v273 = _R14->number;
          v274 = this->m_localClientNum;
          if ( CG_GetFxInfoFromParam(v274, eventParm, (const FXRegisteredDef **)&ceilingAlist, viewDip, (unsigned int *)&r_weapon) && CG_GetLocalClientGlobals(v274)->predictedPlayerState.clientNum == (_DWORD)r_weapon )
            FX_StopBoltedEffects(v274, *(const FXRegisteredDef **)ceilingAlist.midPoint.v, v273, viewDip[0]);
          break;
        case EV_PHYS_EXPLOSION_SPHERE:
          __asm { vmovss  xmm1, dword ptr [r14+60h] }
          v276 = 3 * this->m_localClientNum + 3;
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+250h+isLadder], xmm0
          }
          footstepVFXa = _R13->time;
          impulseVecOverrideb = &vec3_origin;
          __asm
          {
            vmovss  [rsp+250h+weaponstate], xmm1
            vxorps  xmm3, xmm3, xmm3; innerDamage
          }
          goto LABEL_582;
        case EV_PHYS_EXPLOSION_JOLT:
          v276 = 3 * this->m_localClientNum + 3;
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsp+250h+isLadder], xmm0
          }
          footstepVFXa = _R13->time;
          impulseVecOverrideb = &_R14->lerp.u.event.explosionJolt.impulse;
          __asm
          {
            vxorps  xmm3, xmm3, xmm3
            vmovss  [rsp+250h+weaponstate], xmm3
          }
LABEL_582:
          __asm
          {
            vmovss  dword ptr [rsp+250h+fmt], xmm3
            vmovss  xmm2, dword ptr [r14+5Ch]; radius
          }
          Physics_ApplyRadiusForce((const Physics_WorldId)v276, &outOrigin, *(const float *)&_XMM2, *(const float *)&_XMM3, fmtd, *(const float *)&weaponstatec, impulseVecOverrideb, footstepVFXa, isLadder);
          break;
        case EV_EARTHQUAKE:
          if ( _R14->eType < ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 4187, ASSERT_TYPE_ASSERT, "(es->eType >= ET_EVENTS)", (const char *)&queryFormat, "es->eType >= ET_EVENTS") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [r14+5Ch]
            vmovss  dword ptr [rsp+250h+fmt], xmm0
            vmovss  xmm1, dword ptr [r14+58h]; scale
          }
          CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, _R14->lerp.u.anonymous.data[2], &outOrigin, fmte);
          break;
        case EV_DETONATE:
          v168 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v169 = BgWeaponMap::GetWeapon(v168, (BgWeaponHandle)eventParm);
          v101 = 8i64 * isPlayerView + 464;
          v102 = isAlternate;
          v103 = (Weapon *)v169;
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
              CG_NightVisionGetBloomTimings(_R13->time, 1, 1, (int *)viewDip, (int *)&clothType, (int *)&r_weapon, (int *)surfType);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, viewDip[0], (const int)r_weapon, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, clothType, surfType[0], 0, VISIONSETLERP_SMOOTH);
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
              CG_NightVisionGetBloomTimings(_R13->time, 0, 1, &isQuietMove, (int *)&clothType, (int *)&weaponRattleType, &characterIndex);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, isQuietMove, weaponRattleType, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_FADE, clothType, characterIndex, 0, VISIONSETLERP_SMOOTH);
              CG_NightVisionGetExposureAdjustTimings(_R13->time, &isQuietMove, (int *)&clothType, (int *)&weaponRattleType, &characterIndex);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_EXPOSURE, isQuietMove, weaponRattleType, 1, VISIONSETLERP_SMOOTH);
              CG_VisionSetRegisterBlendStart(&_R13->cvsData, VISIONSET_BLENDTYPE_NVG_EXPOSURE, clothType, characterIndex, 0, VISIONSETLERP_SMOOTH);
            }
          }
          break;
        case EV_MISSILE_REMOTE_BOOST:
          truncate_cast<int,unsigned int>(eventParm);
          v298 = this->m_localClientNum;
          v299 = CG_GetLocalClientGlobals(v298);
          if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v299->predictedPlayerState.otherFlags, ACTIVE, 1u) && v299->predictedPlayerState.remoteEyesEnt == _R14->number )
          {
            RefdefView_GetOrg(&v299->refdef.view, &ceilingAlist.midPoint);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vmovss  dword ptr [rsp+250h+fmt], xmm0
              vmovss  xmm1, cs:__real@3e99999a; scale
            }
            CG_StartShakeCamera(v298, *(float *)&_XMM1, 1000, &ceilingAlist.midPoint, fmtf);
            v302 = CgSoundSystem::GetSoundSystem(v298);
            CgSoundSystem::PlayEntitySoundAlias(v302, _R14->number, cgMedia.trophyExplodeSound);
            memset(&ceilingAlist, 0, 0xCui64);
          }
          break;
        case EV_DOOR_EXPLODE:
        case EV_DOOR_OPEN:
        case EV_DOOR_CLOSE:
        case EV_DOOR_PEEK:
          CG_Door_HandleAudioEvent((const LocalClientNum_t)this->m_localClientNum, v15, eventParm);
          break;
        case EV_DOOR_BASH:
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashShakeRadius, "bg_doorBashShakeRadius");
          __asm { vmovaps xmm6, xmm0 }
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_doorBashShakeDuration, "bg_doorBashShakeDuration");
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_doorBashShakeScale, "bg_doorBashShakeScale");
          __asm
          {
            vmovss  dword ptr [rsp+250h+fmt], xmm6
            vmovaps xmm1, xmm0; scale
          }
          CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, Int_Internal_DebugName, &outOrigin, fmtg);
          CG_Door_HandleAudioEvent((const LocalClientNum_t)this->m_localClientNum, weaponRattleType, eventParm);
          break;
        case EV_NO_PRIMARY_GRENADE_HINT:
        case EV_NO_SPECIAL_HINT:
          if ( v15 == EV_NO_SPECIAL_HINT )
          {
            v92 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
            CgWeaponSystem::StopPullbackSound(v92, _R14->number);
          }
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView )
          {
            v93 = OFFHAND_SLOT_NONE;
            if ( v15 == EV_NO_PRIMARY_GRENADE_HINT )
            {
              LODWORD(p_predictedPlayerState) = 2;
              if ( eventParm )
                LODWORD(p_predictedPlayerState) = 11;
              v93 = OFFHAND_SLOT_PRIMARY;
            }
            else if ( v15 == EV_NO_SPECIAL_HINT )
            {
              LODWORD(p_predictedPlayerState) = 10;
              v93 = OFFHAND_SLOT_SPECIAL;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 3098, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
            {
              __debugbreak();
            }
            if ( _R13->invalidCmdHintType != (_DWORD)p_predictedPlayerState )
            {
              _R13->invalidCmdHintType = (int)p_predictedPlayerState;
              _R13->invalidCmdHintTime = _R13->time;
            }
            v94 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            _RAX = BG_GetFirstEquippedOffhandBySlot(v94, &_R13->predictedPlayerState, v93);
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [r13+180BCh], ymm0
              vmovups xmm1, xmmword ptr [rax+20h]
              vmovups xmmword ptr [r13+180DCh], xmm1
              vmovsd  xmm0, qword ptr [rax+30h]
              vmovsd  qword ptr [r13+180ECh], xmm0
            }
            *(_DWORD *)&_R13->invalidCmdHintWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
          }
          break;
        case EV_PRONE_PREVENTS_OFFHAND_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && _R13->invalidCmdHintType != INVALID_CMD_CANT_USE_IN_PRONE )
          {
            _R13->invalidCmdHintType = INVALID_CMD_CANT_USE_IN_PRONE;
            _R13->invalidCmdHintTime = _R13->time;
          }
          break;
        case EV_TARGET_TOO_CLOSE_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && _R13->invalidCmdHintType != INVALID_CMD_TARGET_TOO_CLOSE )
          {
            _R13->invalidCmdHintType = INVALID_CMD_TARGET_TOO_CLOSE;
            _R13->invalidCmdHintTime = _R13->time;
          }
          break;
        case EV_TARGET_NOT_ENOUGH_CLEARANCE_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && _R13->invalidCmdHintType != INVALID_CMD_NOT_ENOUGH_CLEARANCE )
          {
            _R13->invalidCmdHintType = INVALID_CMD_NOT_ENOUGH_CLEARANCE;
            _R13->invalidCmdHintTime = _R13->time;
          }
          break;
        case EV_LOCKON_REQUIRED_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && _R13->invalidCmdHintType != INVALID_CMD_LOCKON_REQUIRED )
          {
            _R13->invalidCmdHintType = INVALID_CMD_LOCKON_REQUIRED;
            _R13->invalidCmdHintTime = _R13->time;
          }
          break;
        case EV_TURRET_BLOCKED_HINT:
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView && _R13->invalidCmdHintType != INVALID_CMD_TURRET_BLOCKED )
          {
            _R13->invalidCmdHintType = INVALID_CMD_TURRET_BLOCKED;
            _R13->invalidCmdHintTime = _R13->time;
          }
          break;
        case EV_VEHICLE_COLLISION:
        case EV_VEHICLE_SUSPENSION_SOFT:
        case EV_VEHICLE_SUSPENSION_HARD:
        case EV_VEHICLE_HORN:
          CG_Vehicle_EntityEvent(this->m_localClientNum, centa, v15, eventParm);
          break;
        case EV_FOOTSTEP_SUPERSPRINT:
        case EV_FOOTSTEP_SPRINT:
        case EV_FOOTSTEP_RUN:
        case EV_FOOTSTEP_WALK:
        case EV_FOOTSTEP_CREEP:
        case EV_FOOTSTEP_PRONE:
        case EV_JUMP:
          if ( !isPlayerView || (v348 = 1, !CG_IsJogging(this->m_localClientNum)) )
            v348 = 0;
          weaponRattleType = -1;
          LODWORD(r_weapon) = -1;
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footsteps, "cg_footsteps");
          v358 = 1;
          __asm { vmovss  xmm6, cs:__real@3f800000 }
          PM_MoveTypesFromFootstepType(v15, (FootstepMoveType_t *)&weaponRattleType, (EquipmentMoveType_t *)&r_weapon);
          switch ( v15 )
          {
            case EV_FOOTSTEP_SUPERSPRINT:
            case EV_FOOTSTEP_SPRINT:
              Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footstepsSprint, "cg_footstepsSprint");
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint, "handheldCameraImpulseFootstepModifierSprint");
              __asm { vmovaps xmm6, xmm0 }
              break;
            case EV_FOOTSTEP_RUN:
              if ( v348 )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog, "handheldCameraImpulseFootstepModifierJog");
                __asm { vmovaps xmm6, xmm0 }
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
              v358 = 0;
$LN164_0:
              __asm { vxorps  xmm6, xmm6, xmm6; jumptable 0000000141C96B6F case 174 }
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2835, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected movement type event encountered.", "false") )
                __debugbreak();
              break;
          }
          v45 = truncate_cast<int,unsigned int>(eventParm);
          BG_UnpackFootstepEventParm(v45, surfType, &clothType, viewDip, (FootstepActionType_t *)&characterIndex, &isLeft);
          if ( isPlayerView )
          {
            clothType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &_R13->predictedPlayerState, clothType);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled, "handheldCameraImpulseFootstepEnabled") )
            {
              __asm { vmovaps xmm2, xmm6; scale }
              LOBYTE(v46) = 4;
              CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v46, *(float *)&_XMM2);
            }
          }
          if ( !_R13->renderingThirdPerson )
          {
            v48 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
            if ( !BG_IsThirdPersonMode(v48, &_R13->predictedPlayerState) )
            {
              v349 = 0;
LABEL_67:
              v49 = 0;
              goto LABEL_68;
            }
          }
          v349 = 1;
          if ( v15 == EV_JUMP )
            goto LABEL_67;
          v49 = 1;
LABEL_68:
          if ( Bool_Internal_DebugName && !v49 )
          {
            LocalClientStatics = (CgStatic *)BG_GetClothFootstepMovementSound(surfType[0], (FootstepActionType_t)characterIndex, (FootstepMoveType_t)weaponRattleType, isLeft, isPlayerView);
            *(_QWORD *)ceilingAlist.midPoint.v = BG_GetClothFootstepCeilingSound(surfType[0], (FootstepActionType_t)characterIndex, (FootstepMoveType_t)weaponRattleType, isLeft, isPlayerView);
            if ( LocalClientStatics )
            {
              v50 = centa;
              v51 = centa->nextState.eType == ET_PLAYER && ci && BG_PlayerASM_IsOnLadder(ci);
              CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, v50, (const SndAliasList *)LocalClientStatics, *(const SndAliasList **)ceilingAlist.midPoint.v, viewDip[0], weaponRattleType, isPlayerView, isQuietMove, v51);
            }
            if ( isPlayerView && !v349 )
            {
              p_position = &_R13->playerGround.trace.position;
              if ( !_R13->playerGround.groundPlane )
                p_position = NULL;
              CG_Event_PlayFootstepFX(this->m_localClientNum, _R14->number, isLeft, viewDip[0], p_position, 1, 0, NULL);
            }
          }
          if ( v358 )
            CG_Event_PlayFootstepShakeRumble((const LocalClientNum_t)this->m_localClientNum, centa, *(const SuitDef *const *)suitDef.v);
          if ( v15 == EV_JUMP && isPlayerView )
            CG_SND_PlayerBreathsSetJump(this->m_localClientNum);
          break;
        case EV_STANCE_TO_PRONE:
        case EV_STANCE_PRONE_TO_CROUCH:
        case EV_STANCE_STAND_TO_CROUCH:
        case EV_STANCE_TO_STAND:
          v53 = truncate_cast<int,unsigned int>(eventParm);
          BG_UnpackStanceEventParm(v53, viewDip, &weaponRattleType, surfType);
          if ( isPlayerView )
            weaponRattleType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &_R13->predictedPlayerState, weaponRattleType);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_footsteps, "cg_footsteps") )
          {
            v54 = v15 - 176;
            if ( v54 )
            {
              v55 = v54 - 1;
              if ( v55 )
              {
                v56 = v55 - 1;
                if ( v56 )
                {
                  if ( v56 == 1 )
                  {
                    v57 = EQUIPMENT_STANCE_TO_STAND;
                  }
                  else
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 2933, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected stance transition event encountered.", "false") )
                      __debugbreak();
                    v57 = EQUIPMENT_STANCE_TO_STAND;
                  }
                }
                else
                {
                  v57 = EQUIPMENT_STANCE_STAND_TO_CROUCH;
                }
              }
              else
              {
                v57 = EQUIPMENT_STANCE_PRONE_TO_CROUCH;
              }
            }
            else
            {
              v57 = EQUIPMENT_STANCE_TO_PRONE;
            }
            StanceTransitionSound = BG_GetStanceTransitionSound(viewDip[0], v57, isPlayerView);
            if ( StanceTransitionSound )
              CgSoundSystem::PlayEntitySoundAliasFootstep(SoundSystem, centa, StanceTransitionSound, NULL, surfType[0], -1, isPlayerView, isQuietMove, 0);
          }
          CG_EquipmentSound(this->m_localClientNum, _R14->number, isPlayerView, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_STANCE, viewDip[0], weaponRattleType, isQuietMove);
          break;
        case EV_MOVEMENT_IMPACT:
          CG_ViewMotion_Impact((const LocalClientNum_t)this->m_localClientNum, _R13->predictedPlayerState.serverTime);
          if ( isPlayerView && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled, "handheldCameraImpulseImpactEnabled") )
          {
            __asm { vmovss  xmm1, cs:__real@43960000; maxAbsValueSize }
            *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(eventParm, *(float *)&_XMM1, 8u);
            __asm { vmovaps xmm6, xmm0 }
            Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed, "handheldCameraImpulseImpactMax2DSpeed");
            __asm
            {
              vdivss  xmm0, xmm6, xmm0; val
              vmovss  xmm2, cs:__real@3f800000; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovaps xmm2, xmm0; fraction }
            *(double *)&_XMM0 = GraphGetValueFromFraction(4, knots_0, *(const float *)&_XMM2);
            __asm { vmovaps xmm2, xmm0; scale }
            LOBYTE(v66) = 3;
            CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v66, *(float *)&_XMM2);
          }
          break;
        case EV_MANTLE:
          BG_UnpackMantleEventParm(eventParm, viewDip, &clothType, surfType, (unsigned int *)&r_weapon, (gestureAnimType_t *)&weaponRattleType);
          if ( isPlayerView )
            clothType = AdjustWeaponRattleForPlayer(this->m_localClientNum, &_R13->predictedPlayerState, clothType);
          v286 = (unsigned int)r_weapon;
          if ( isPlayerView )
            v286 = surfType[0];
          if ( v286 )
          {
            v287 = (SndAliasList *)((__int64 (__fastcall *)(CgSoundSystem *))SoundSystem->GetSoundAliasListByName)(SoundSystem);
            v288 = isPlayerView;
            v289 = isQuietMove;
            CG_GenericEquipmentSound(this->m_localClientNum, _R14->number, v287, isPlayerView, isQuietMove);
          }
          else
          {
            v288 = isPlayerView;
            v289 = isQuietMove;
          }
          CG_EquipmentSound(this->m_localClientNum, _R14->number, v288, MOVEMENT_LEAD_TYPE_POST, EQUIPMENT_MOVE_TYPE_MANTLE, viewDip[0], clothType, v289);
          isQuietMove = weaponRattleType;
          characterIndex = viewDip[0];
          v290 = _R14->number;
          v291 = this->m_localClientNum;
          v292 = DVARBOOL_cg_equipmentSounds;
          if ( !DVARBOOL_cg_equipmentSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_equipmentSounds") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v292);
          if ( v292->current.enabled )
          {
            v293 = DCONST_DVARBOOL_cg_mantleSounds;
            if ( !DCONST_DVARBOOL_cg_mantleSounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mantleSounds") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v293);
            if ( v293->current.enabled )
            {
              MantleSound = BG_GetMantleSound(characterIndex, (gestureAnimType_t)isQuietMove, v288);
              if ( MantleSound )
                CG_GenericEquipmentSound(v291, v290, MantleSound, v288, v289);
            }
          }
          if ( isPlayerView )
            CG_SND_PlayerBreathsSetMantle(this->m_localClientNum);
          break;
        case EV_DEBUG_SERVER_AIMING:
          __asm
          {
            vmovups xmm0, cs:__xmm@3f800000000000000000000000000000; jumptable 0000000141C96AEE case 191
            vmovups xmmword ptr [rbp+150h+ceilingAlist], xmm0
            vmovss  xmm1, cs:__real@3f800000
            vmovss  [rbp+150h+var_E0], xmm1
            vmovss  [rbp+150h+var_DC], xmm1
            vxorps  xmm2, xmm2, xmm2; yaw
          }
          CG_DebugBox(&outOrigin, &ceilingAlist, *(float *)&_XMM2, &colorRed, 0, 1);
          break;
        case EV_SLIDE_START:
          if ( _R14->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v157 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_SLIDE_START on invalid entity %i or surfType type %i \n", (unsigned int)_R14->number, v157);
          }
          else
          {
            _R13->slideSurfaceType[_R14->number] = truncate_cast<char,unsigned int>(eventParm);
            v149 = truncate_cast<int,unsigned int>(eventParm);
            slideStartSound = cgMedia.slideStartSound;
            if ( isPlayerView )
              slideStartSound = cgMedia.slideStartSoundPlayer;
            CG_SlideSound(this->m_localClientNum, _R14->number, slideStartSound, v149, isPlayerView);
            v151 = _R13->slideSurfaceType[_R14->number];
            __asm
            {
              vmovsd  xmm0, qword ptr [rbp+150h+outOrigin]
              vmovsd  [rbp+150h+ceilingAlist], xmm0
            }
            ceilingAlist.midPoint.v[2] = outOrigin.v[2];
            _RAX = ci;
            __asm
            {
              vmovsd  xmm0, qword ptr [rax+9C0h]
              vmovsd  [rbp+150h+suitDef], xmm0
            }
            suitDef.v[2] = ci->playerAngles.v[2];
            CG_GameInterface_HandlePlayerSlideFX((const LocalClientNum_t)this->m_localClientNum, &suitDef, &ceilingAlist.midPoint, v151);
            CG_Rumble_PlayOnEntityByName(this->m_localClientNum, "slide_start", _R14->number);
            if ( isPlayerView && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled, "handheldCameraImpulseSlideEnabled") )
            {
              __asm { vmovss  xmm2, cs:__real@3f800000; scale }
              LOBYTE(v155) = 1;
              CG_Shake_Impulse((const LocalClientNum_t)this->m_localClientNum, v155, *(float *)&_XMM2);
            }
          }
          break;
        case EV_SLIDE_EASE_OUT:
          v158 = truncate_cast<int,unsigned int>(eventParm);
          if ( eventParm >= 0x40 )
          {
            Com_PrintError(14, "EV_SLIDE_EASE_OUT on invalid surfType type %i \n", v158);
          }
          else
          {
            slideEaseOutSound = cgMedia.slideEaseOutSound;
            if ( isPlayerView )
              slideEaseOutSound = cgMedia.slideEaseOutSoundPlayer;
            CG_SlideSound(this->m_localClientNum, _R14->number, slideEaseOutSound, v158, isPlayerView);
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
          if ( CgEventSystem::CheckClientNumLocal(this, characterIndex, v15) && isPlayerView )
          {
            if ( BG_IsUsingOffhandGestureWeaponADSActive(&_R13->predictedPlayerState) )
            {
              v283 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
              OffhandGestureWeapon = BG_GetOffhandGestureWeapon(v283, &_R13->predictedPlayerState);
              v285 = BG_GetWeaponSoundWithFallback(OffhandGestureWeapon, 0, 616i64);
            }
            else
            {
              v285 = BG_GetWeaponSoundWithFallback(r_weapon, isAlternate, 616i64);
            }
            CgSoundSystem::PlaySoundAlias(SoundSystem, _R14->number, &outOrigin, v285);
          }
          break;
        case EV_OFFHAND_END_EFFECTS:
          v145 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          v146 = BgWeaponMap::GetWeapon(v145, (BgWeaponHandle)eventParm);
          v147 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
          FireFxIndexForWeapon = CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon(v147, v146);
          CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(v147, FireFxIndexForWeapon);
          break;
        case EV_FORCE_WEAPON_CHANGE:
          if ( isPlayerView )
          {
            v90 = *(const playerState_s **)viewDip;
LABEL_165:
            if ( !BG_PWF_UseAlternateAsOffhand(v90) )
            {
              v91 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
              CgWeaponSystem::OutOfAmmoChange(v91, 0);
            }
          }
          break;
        case EV_BREAK_GLASS:
          CG_Glass_PlayerBreakEvent(this->m_localClientNum, _R14->number);
$LN458_0:
          CG_Rumble_PlayOnEntityByName(this->m_localClientNum, "leap_end", _R14->number);
          break;
        case EV_WEAPON_CHARGED_WEAPON_FIRED:
          if ( isPlayerView )
          {
            v306 = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)this->m_localClientNum);
            CgWeaponSystem::ChargedWeaponSetChargeAmountOverride(v306, centa, WEAPON_HAND_DEFAULT, eventParm);
          }
          break;
        case EV_MOUNT_ENTER:
        case EV_MOUNT_EXIT:
          CG_PlayMountEnterExitSound(this->m_localClientNum, centa, r_weapon, isAlternate, v15, eventParm, isPlayerView);
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
            v307 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_mount_enter_settle_time_ms, "mount_enter_settle_time_ms");
            if ( eventParm == 1 )
            {
              v308 = "mount_effect_top_shake_amp";
              v309 = DCONST_DVARFLT_mount_effect_top_shake_amp;
            }
            else
            {
              v308 = "mount_effect_side_shake_amp";
              v309 = DCONST_DVARFLT_mount_effect_side_shake_amp;
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v309, v308);
            __asm { vmovaps xmm6, xmm0 }
            if ( v307 > 0 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcomiss xmm6, xmm0
              }
              RefdefView_GetOrg(&_R13->refdef.view, &ceilingAlist.midPoint);
              __asm
              {
                vmovss  xmm0, cs:__real@42480000
                vmovss  dword ptr [rsp+250h+fmt], xmm0
                vmovaps xmm1, xmm6; scale
              }
              CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, v307, &ceilingAlist.midPoint, fmth);
              memset(&ceilingAlist, 0, 0xCui64);
            }
            v314 = isAlternate;
            v315 = r_weapon;
            MountRumble = BG_GetMountRumble(r_weapon, isAlternate);
            if ( MountRumble )
              CG_Rumble_PlayOnClient(this->m_localClientNum, MountRumble);
          }
          else
          {
            v314 = isAlternate;
            v315 = r_weapon;
          }
          if ( ci->mount.type )
            CG_PlayMountImpactSound(this->m_localClientNum, centa, v315, v314, &ci->mountAnimation.pivotPoint, eventParm, isPlayerView);
          break;
        case EV_SOUND_ENTITY_TRIGGER_START:
          v250 = truncate_cast<unsigned char,unsigned int>(_R14->eventParm2);
          v251 = truncate_cast<unsigned short,unsigned int>(eventParm);
          if ( (*(_DWORD *)&centa->nextState.clientLinkInfo & 0x7FF) != 0 )
            CG_GetPoseOrigin(&centa->pose, &ceilingAlist.midPoint);
          else
            Trajectory_GetTrBase(&centa->nextState.lerp.pos, &ceilingAlist.midPoint);
          __asm
          {
            vmovsd  xmm0, [rbp+150h+ceilingAlist]
            vmovsd  [rbp+150h+suitDef], xmm0
          }
          suitDef.v[2] = ceilingAlist.midPoint.v[2];
          CG_SoundEntity_TriggerStart(this->m_localClientNum, v250, v251, &suitDef);
          memset(&ceilingAlist, 0, 0xCui64);
          break;
        case EV_SOUND_ENTITY_TRIGGER_STOP:
          v253 = truncate_cast<unsigned char,unsigned int>(_R14->eventParm2);
          CG_SoundEntity_TriggerStop(this->m_localClientNum, v253);
          break;
        case EV_SOUND_ENTITY_SCALE_VOLUME:
          v254 = truncate_cast<unsigned char,unsigned int>(_R14->eventParm2);
          BG_SoundEntity_UnpackScaleVolumeEventParam(eventParm, (float *)viewDip, (int *)&r_weapon);
          __asm { vmovss  xmm2, [rbp+150h+viewDip]; volume }
          CG_SoundEntity_ScaleVolume(this->m_localClientNum, v254, *(float *)&_XMM2, (int)r_weapon);
          break;
        case EV_SOUND_ENTITY_SCALE_PITCH:
          v256 = truncate_cast<unsigned char,unsigned int>(_R14->eventParm2);
          BG_SoundEntity_UnpackScalePitchEventParam(eventParm, (float *)viewDip, (int *)&r_weapon);
          __asm { vmovss  xmm2, [rbp+150h+viewDip]; pitch }
          CG_SoundEntity_ScalePitch(this->m_localClientNum, v256, *(float *)&_XMM2, (int)r_weapon);
          break;
        case EV_SPRAY:
          CG_SprayEvent(this->m_localClientNum, centa, eventParm);
          break;
        case EV_LADDER_START_SLIDE:
          if ( _R14->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v161 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_LADDER_START_SLIDE on invalid entity %i or surfType type %i \n", (unsigned int)_R14->number, v161);
          }
          else
          {
            _R13->slideSurfaceType[_R14->number] = truncate_cast<char,unsigned int>(eventParm);
            v160 = truncate_cast<int,unsigned int>(eventParm);
            CG_LadderSlideSound(this->m_localClientNum, _R14->number, v160, ENUM_LADDERSLIDE_STATE_START, isPlayerView);
          }
          break;
        case EV_LADDER_STOP_SLIDE:
          if ( _R14->number >= ComCharacterLimits::GetCharacterMaxCount() || eventParm >= 0x40 )
          {
            v163 = truncate_cast<int,unsigned int>(eventParm);
            Com_PrintError(14, "EV_LADDER_STOP_SLIDE on invalid surfType type %i \n", v163);
          }
          else
          {
            v162 = truncate_cast<int,unsigned int>(eventParm);
            CG_LadderSlideSound(this->m_localClientNum, _R14->number, v162, ENUM_LADDERSLIDE_STATE_STOP, isPlayerView);
          }
          break;
        default:
          v317 = BG_GetEventTypeName(v15);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144294780, 780i64, v317);
          break;
      }
    }
  }
$LN7_301:
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm { vmovaps xmm6, [rsp+250h+var_50] }
}

/*
==============
CgEventSystem::HandleExplosionEvent
==============
*/
void CgEventSystem::HandleExplosionEvent(CgEventSystem *this, centity_t *cent, int eventType, const vec3_t *position, const Weapon *weapon, const bool isAlternate)
{
  int explosionInnerDamage; 
  cg_t *LocalClientGlobals; 
  float outerDamage; 
  float positiona; 
  float impulseVecOverride; 
  int explosionOuterDamage; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
  BG_GetExplosionDamageRangeInfo(weapon, isAlternate, &outDamageRangeInfo);
  BG_ExplosionForceRadius(weapon, isAlternate);
  __asm
  {
    vcvttss2si r8d, [rsp+0B8h+outDamageRangeInfo.innerDamage]
    vmovss  xmm1, [rsp+0B8h+outDamageRangeInfo.outerRadius]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vcvttss2si eax, [rsp+0B8h+outDamageRangeInfo.outerDamage]
    vmovss  dword ptr [rsp+0B8h+impulseVecOverride], xmm1
    vmaxss  xmm6, xmm0, xmm1
  }
  ScriptableCl_ExplosionDamageEvent((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number, cent->nextState.number, weapon, isAlternate, position, impulseVecOverride, explosionInnerDamage, _EAX, 1);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(double *)&_XMM0 = BG_ExplosionForceScalar(weapon, isAlternate);
  __asm
  {
    vmovss  xmm1, [rsp+0B8h+outDamageRangeInfo.outerDamage]
    vmovss  xmm3, [rsp+0B8h+outDamageRangeInfo.innerDamage]; innerDamage
    vmovss  [rsp+0B8h+explosionOuterDamage], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0B8h+position], xmm0
    vmovaps xmm2, xmm6; radius
    vmovss  [rsp+0B8h+outerDamage], xmm1
  }
  Physics_ApplyRadiusForce((const Physics_WorldId)(3 * this->m_localClientNum + 3), position, *(const float *)&_XMM2, *(const float *)&_XMM3, outerDamage, positiona, &vec3_origin, LocalClientGlobals->time, *(float *)&explosionOuterDamage);
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
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
  bool v15; 
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v21; 
  int integer; 
  const dvar_t *v25; 
  bool v26; 
  bool v27; 
  cg_t *v28; 
  VehicleTurretFireType TurretFireType; 
  __int32 v33; 
  VehicleClient *Client; 
  PlayerHandIndex hand; 
  const TagPair *v36; 
  const TagPair *v37; 
  bool v38; 
  const TagPair *v39; 
  scr_string_t TagForFiringMuzzle; 
  const TagPair *v41; 
  float fmt; 
  vec3_t outOrigin; 
  char v47; 
  void *retaddr; 
  TagPair v49; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1014, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( event - 89 > 2 && event != 87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.cpp", 1015, ASSERT_TYPE_ASSERT, "(event == EV_FIRE_SENTRY || event == EV_FIRE_TURRET || event == EV_SV_FIRE_TURRET || event == EV_FIRE_VEH_TURRET)", (const char *)&queryFormat, "event == EV_FIRE_SENTRY || event == EV_FIRE_TURRET || event == EV_SV_FIRE_TURRET || event == EV_FIRE_VEH_TURRET") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
  weapon = CG_GetEntWeapon(this->m_localClientNum, cent);
  v15 = isPlayerView;
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
    _RDI = DCONST_DVARFLT_turretCameraShakeScale;
    if ( !DCONST_DVARFLT_turretCameraShakeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v21 = DCONST_DVARINT_turretCameraShakeDuration;
    if ( !DCONST_DVARINT_turretCameraShakeDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    integer = v21->current.integer;
    _RDI = DCONST_DVARFLT_turretCameraShakeRadius;
    if ( !DCONST_DVARFLT_turretCameraShakeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
    v25 = DCONST_DVARBOOL_turretCameraShakeOverride;
    if ( !DCONST_DVARBOOL_turretCameraShakeOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretCameraShakeOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = !v25->current.enabled;
    if ( !v25->current.enabled )
    {
      v27 = 0;
      v28 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( v28 )
        v27 = BG_UsingAlternate(&v28->predictedPlayerState);
      _RAX = BG_WeaponDef(weapon, v27);
      v26 = _RAX == NULL;
      if ( _RAX )
      {
        __asm { vmovss  xmm6, dword ptr [rax+6D8h] }
        integer = _RAX->cameraShakeDuration;
        __asm { vmovss  xmm7, dword ptr [rax+6E0h] }
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( !v26 && integer > 0 )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
        vmovaps xmm1, xmm6; scale
      }
      CG_StartShakeCamera(this->m_localClientNum, *(float *)&_XMM1, integer, &outOrigin, fmt);
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
    TagPair::TagPair(&v49, TagForFiringMuzzle, (scr_string_t)0);
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v41, weapon, 0, WEAPON_HAND_DEFAULT, v15, 0, bNoTracer);
    goto LABEL_52;
  }
  v33 = TurretFireType - 1;
  if ( v33 )
  {
    if ( v33 == 1 )
    {
      Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
      hand = Client->fireBarrel;
      if ( hand )
      {
        TagPair::TagPair(&v49, scr_const.tag_flash_2, (scr_string_t)0);
        CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v37, weapon, 0, hand, v15, 1, bNoTracer);
        Client->fireBarrel = 0;
      }
      else
      {
        TagPair::TagPair(&v49, scr_const.tag_flash, (scr_string_t)0);
        CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v36, weapon, 0, WEAPON_HAND_DEFAULT, v15, 1, bNoTracer);
        Client->fireBarrel = 1;
      }
    }
  }
  else
  {
    TagPair::TagPair(&v49, scr_const.tag_flash, (scr_string_t)0);
    v38 = bNoTracer;
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v39, weapon, 0, WEAPON_HAND_DEFAULT, v15, 0, bNoTracer);
    TagPair::TagPair(&v49, scr_const.tag_flash_2, (scr_string_t)0);
    CG_FireWeapon(this->m_localClientNum, cent, event, -1, *v41, weapon, 0, WEAPON_HAND_DEFAULT, v15, 0, v38);
  }
LABEL_52:
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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

