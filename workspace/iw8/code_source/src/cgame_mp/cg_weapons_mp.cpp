/*
==============
CgWeaponSystemMP::DrawFriendOrFoeTargetBoxes
==============
*/

void __fastcall CgWeaponSystemMP::DrawFriendOrFoeTargetBoxes(CgWeaponSystemMP *this)
{
  ?DrawFriendOrFoeTargetBoxes@CgWeaponSystemMP@@UEBAXXZ(this);
}

/*
==============
CgWeaponSystemMP::UpdateWeaponAttachModels
==============
*/

int __fastcall CgWeaponSystemMP::UpdateWeaponAttachModels(CgWeaponSystemMP *this)
{
  return ?UpdateWeaponAttachModels@CgWeaponSystemMP@@UEAAHXZ(this);
}

/*
==============
CgWeaponSystemMP::CheckFirePenetrateStop
==============
*/

bool __fastcall CgWeaponSystemMP::CheckFirePenetrateStop(CgWeaponSystemMP *this, const centity_t *attacker, const centity_t *hitEntity, bool penetratedGlass)
{
  return ?CheckFirePenetrateStop@CgWeaponSystemMP@@UEBA_NPEBUcentity_t@@0_N@Z(this, attacker, hitEntity, penetratedGlass);
}

/*
==============
CgWeaponSystemMP::DrawUFOViewModel
==============
*/

int __fastcall CgWeaponSystemMP::DrawUFOViewModel(CgWeaponSystemMP *this, const playerState_s *ps)
{
  return ?DrawUFOViewModel@CgWeaponSystemMP@@UEBAHPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemMP::BulletHitEvent_Internal
==============
*/

void __fastcall CgWeaponSystemMP::BulletHitEvent_Internal(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  ?BulletHitEvent_Internal@CgWeaponSystemMP@@AEBAXHHIEAEBUWeapon@@_NAEBTvec3_t@@222HHIHHW4SndHitArmorType@@W4SndHitmarkerType@@PEBUCgEventLodData@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
}

/*
==============
CgWeaponSystemMP::AddWeaponLaserForCharacter
==============
*/

void __fastcall CgWeaponSystemMP::AddWeaponLaserForCharacter(CgWeaponSystemMP *this, const Weapon *weapon, const centity_t *cent)
{
  ?AddWeaponLaserForCharacter@CgWeaponSystemMP@@UEBAXAEBUWeapon@@PEBUcentity_t@@@Z(this, weapon, cent);
}

/*
==============
DrawTargetBoxVehicleCallback
==============
*/

void __fastcall DrawTargetBoxVehicleCallback(LocalClientNum_t localClientNum, const DObj *dobj, const vec3_t *origin)
{
  ?DrawTargetBoxVehicleCallback@@YAXW4LocalClientNum_t@@PEBUDObj@@AEBTvec3_t@@@Z(localClientNum, dobj, origin);
}

/*
==============
CgWeaponSystemMP::IsWeaponWorldModelLoaded
==============
*/

bool __fastcall CgWeaponSystemMP::IsWeaponWorldModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon)
{
  return ?IsWeaponWorldModelLoaded@CgWeaponSystemMP@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
CgWeaponSystemMP::BulletHitEvent_SimulateExit
==============
*/

void __fastcall CgWeaponSystemMP::BulletHitEvent_SimulateExit(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableInstanceIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *damageDir, int surfType, int event, unsigned int impactEffects, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  ?BulletHitEvent_SimulateExit@CgWeaponSystemMP@@AEBAXHHIAEBUWeapon@@_NAEBTvec3_t@@222HHIHW4SndHitArmorType@@W4SndHitmarkerType@@PEBUCgEventLodData@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableInstanceIndex, weapon, isAlternate, initialPos, startPos, position, damageDir, surfType, event, impactEffects, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
}

/*
==============
CgWeaponSystemMP::BulletHitEvent
==============
*/

void __fastcall CgWeaponSystemMP::BulletHitEvent(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableInstanceIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const unsigned int flags, const scr_string_t partName, const bool forceClientSideHandling, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  ?BulletHitEvent@CgWeaponSystemMP@@UEBAXHHIEAEBUWeapon@@_NAEBTvec3_t@@222HHIHIW4scr_string_t@@_NHW4SndHitArmorType@@W4SndHitmarkerType@@PEBUCgEventLodData@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitContents, flags, partName, forceClientSideHandling, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
}

/*
==============
CgWeaponSystemMP::TouchWeaponAttachModels
==============
*/

void __fastcall CgWeaponSystemMP::TouchWeaponAttachModels(CgWeaponSystemMP *this)
{
  ?TouchWeaponAttachModels@CgWeaponSystemMP@@UEBAXXZ(this);
}

/*
==============
CgWeaponSystemMP::GetWeaponAttachModels
==============
*/

unsigned __int16 __fastcall CgWeaponSystemMP::GetWeaponAttachModels(CgWeaponSystemMP *this, unsigned __int16 modelIndex, DObjModel *outDObjModels)
{
  return ?GetWeaponAttachModels@CgWeaponSystemMP@@UEBAGGQEAUDObjModel@@@Z(this, modelIndex, outDObjModels);
}

/*
==============
CgWeaponSystemMP::TouchHandModel
==============
*/

void __fastcall CgWeaponSystemMP::TouchHandModel(CgWeaponSystemMP *this)
{
  ?TouchHandModel@CgWeaponSystemMP@@UEBAXXZ(this);
}

/*
==============
CG_WeaponsMP_RegisterWeapons
==============
*/

void CG_WeaponsMP_RegisterWeapons(void)
{
  ?CG_WeaponsMP_RegisterWeapons@@YAXXZ();
}

/*
==============
CgWeaponSystemMP::IsGrenadeDangerous
==============
*/

int __fastcall CgWeaponSystemMP::IsGrenadeDangerous(CgWeaponSystemMP *this, const centity_t *grenadeEntity)
{
  return ?IsGrenadeDangerous@CgWeaponSystemMP@@UEBAHPEBUcentity_t@@@Z(this, grenadeEntity);
}

/*
==============
CgWeaponSystemMP::GetWeaponUVAnimOverride
==============
*/

double __fastcall CgWeaponSystemMP::GetWeaponUVAnimOverride(CgWeaponSystemMP *this)
{
  double result; 

  *(float *)&result = ?GetWeaponUVAnimOverride@CgWeaponSystemMP@@UEBAMXZ(this);
  return result;
}

/*
==============
CgWeaponSystemMP::ShutdownViewModel
==============
*/

void __fastcall CgWeaponSystemMP::ShutdownViewModel(CgWeaponSystemMP *this)
{
  ?ShutdownViewModel@CgWeaponSystemMP@@QEAAXXZ(this);
}

/*
==============
CgWeaponSystemMP::SimulateBulletFire_Orientation
==============
*/

bool __fastcall CgWeaponSystemMP::SimulateBulletFire_Orientation(CgWeaponSystemMP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *tracerStart)
{
  return ?SimulateBulletFire_Orientation@CgWeaponSystemMP@@UEBA_NPEAUcentity_t@@AEBUWeapon@@_NVTagPair@@22W4PlayerHandIndex@@_NPEBUCgFireEventHighPrecisionData@@PEAUorientation_t@@PEAMAEATvec3_t@@@Z(this, inflictorEnt, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, calculateExactOrigin, highPrecisionFireData, outOrient, outAimSpreadAmount, tracerStart);
}

/*
==============
CG_ProcessDeathCamImpacts
==============
*/

void __fastcall CG_ProcessDeathCamImpacts(const LocalClientNum_t localClientNum)
{
  ?CG_ProcessDeathCamImpacts@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystemMP::InitViewModel
==============
*/

void __fastcall CgWeaponSystemMP::InitViewModel(CgWeaponSystemMP *this)
{
  ?InitViewModel@CgWeaponSystemMP@@QEAAXXZ(this);
}

/*
==============
CgWeaponSystemMP::SpawnBulletHitmarker
==============
*/

void __fastcall CgWeaponSystemMP::SpawnBulletHitmarker(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, const vec3_t *position, const unsigned __int8 boneIndex, unsigned int impactEffects)
{
  ?SpawnBulletHitmarker@CgWeaponSystemMP@@AEBAXHHAEBTvec3_t@@EI@Z(this, sourceEntityNum, targetEntityNum, position, boneIndex, impactEffects);
}

/*
==============
CgWeaponSystemMP::SimulateBulletFire_UseEventBasedHitEffect
==============
*/

int __fastcall CgWeaponSystemMP::SimulateBulletFire_UseEventBasedHitEffect(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, int event)
{
  return ?SimulateBulletFire_UseEventBasedHitEffect@CgWeaponSystemMP@@EEBAHHHH@Z(this, sourceEntityNum, targetEntityNum, event);
}

/*
==============
CgWeaponSystemMP::CanAutospotPlayer
==============
*/

int __fastcall CgWeaponSystemMP::CanAutospotPlayer(CgWeaponSystemMP *this, const centity_t *cent)
{
  return ?CanAutospotPlayer@CgWeaponSystemMP@@QEBAHPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgWeaponSystemMP::SetWeaponUVAnimTimeOverride
==============
*/

void __fastcall CgWeaponSystemMP::SetWeaponUVAnimTimeOverride(CgWeaponSystemMP *this, const int time)
{
  ?SetWeaponUVAnimTimeOverride@CgWeaponSystemMP@@UEAAXH@Z(this, time);
}

/*
==============
CG_IsCharacterInAir
==============
*/

bool __fastcall CG_IsCharacterInAir(const characterInfo_t *ci, const centity_t *cent)
{
  return ?CG_IsCharacterInAir@@YA_NPEBUcharacterInfo_t@@PEBUcentity_t@@@Z(ci, cent);
}

/*
==============
CgWeaponSystemMP::BulletImpactEffects
==============
*/

void __fastcall CgWeaponSystemMP::BulletImpactEffects(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *startPosition, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactFlags, int hitContents, bool forceCullBulletHitEffect, SndHitArmorType hitArmorType, CgSfxImpactInfo *outSfxInfo)
{
  ?BulletImpactEffects@CgWeaponSystemMP@@AEBAXHHIEAEBUWeapon@@_NAEBTvec3_t@@22HHIH1W4SndHitArmorType@@AEAUCgSfxImpactInfo@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, weapon, isAlternate, startPosition, position, normal, surfType, event, impactFlags, hitContents, forceCullBulletHitEffect, hitArmorType, outSfxInfo);
}

/*
==============
CgWeaponSystemMP::CalcMuzzlePoint
==============
*/

void __fastcall CgWeaponSystemMP::CalcMuzzlePoint(CgWeaponSystemMP *this, const int entityNum, const TagPair flashTagPair, const bool calculateExactPoint, vec3_t *out_Point)
{
  ?CalcMuzzlePoint@CgWeaponSystemMP@@QEBAXHVTagPair@@_NAEATvec3_t@@@Z(this, entityNum, flashTagPair, calculateExactPoint, out_Point);
}

/*
==============
CgWeaponSystemMP::IsWeaponModelLoaded
==============
*/

bool __fastcall CgWeaponSystemMP::IsWeaponModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon, const bool viewModel)
{
  return ?IsWeaponModelLoaded@CgWeaponSystemMP@@AEBA_NAEBUWeapon@@_N@Z(this, r_weapon, viewModel);
}

/*
==============
CgWeaponSystemMP::PlayCustomImpactEffects
==============
*/

void __fastcall CgWeaponSystemMP::PlayCustomImpactEffects(CgWeaponSystemMP *this, FXRegisteredDef impactVfx, SndAliasList *const impactSfx, const int victimEntNum, const int soundBindEntNum, const vec3_t *position, const unsigned __int8 boneIndex, const vec3_t *normal, const int surfType)
{
  ?PlayCustomImpactEffects@CgWeaponSystemMP@@QEBAXVFXRegisteredDef@@QEAUSndAliasList@@HHAEBTvec3_t@@E2H@Z(this, impactVfx, impactSfx, victimEntNum, soundBindEntNum, position, boneIndex, normal, surfType);
}

/*
==============
CgWeaponSystemMP::EnableWeaponUVAnimOverride
==============
*/

void __fastcall CgWeaponSystemMP::EnableWeaponUVAnimOverride(CgWeaponSystemMP *this, const int enable)
{
  ?EnableWeaponUVAnimOverride@CgWeaponSystemMP@@UEAAXH@Z(this, enable);
}

/*
==============
CgWeaponSystemMP::IsPlayerUsingVehicleWeapon
==============
*/

int __fastcall CgWeaponSystemMP::IsPlayerUsingVehicleWeapon(CgWeaponSystemMP *this, const playerState_s *playerState, const entityState_t *vehicleState)
{
  return ?IsPlayerUsingVehicleWeapon@CgWeaponSystemMP@@UEBAHPEBUplayerState_s@@PEBUentityState_t@@@Z(this, playerState, vehicleState);
}

/*
==============
CgWeaponSystemMP::IsWeaponFireWithinPingRange
==============
*/

bool __fastcall CgWeaponSystemMP::IsWeaponFireWithinPingRange(CgWeaponSystemMP *this, const vec3_t *origin)
{
  return ?IsWeaponFireWithinPingRange@CgWeaponSystemMP@@QEBA_NAEBTvec3_t@@@Z(this, origin);
}

/*
==============
CgWeaponSystemMP::ShouldWeaponPing
==============
*/

int __fastcall CgWeaponSystemMP::ShouldWeaponPing(CgWeaponSystemMP *this, const centity_t *cent, const Weapon *weapon, const bool isAlternate, const vec3_t *origin)
{
  return ?ShouldWeaponPing@CgWeaponSystemMP@@UEBAHPEBUcentity_t@@AEBUWeapon@@_NAEBTvec3_t@@@Z(this, cent, weapon, isAlternate, origin);
}

/*
==============
CgWeaponSystemMP::UpdateMuzzleFlashNonPlayer
==============
*/

void __fastcall CgWeaponSystemMP::UpdateMuzzleFlashNonPlayer(CgWeaponSystemMP *this, const entityState_t *ent, const TagPair tagPair, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  ?UpdateMuzzleFlashNonPlayer@CgWeaponSystemMP@@UEBAXPEBUentityState_t@@VTagPair@@AEBUWeapon@@_N3@Z(this, ent, tagPair, weapon, isAlternate, isPlayerView);
}

/*
==============
CgWeaponSystemMP::UpdateWeaponPossession
==============
*/

void __fastcall CgWeaponSystemMP::UpdateWeaponPossession(CgWeaponSystemMP *this, playerState_s *ps)
{
  ?UpdateWeaponPossession@CgWeaponSystemMP@@UEBAXPEAUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemMP::IsWeaponViewModelLoaded
==============
*/

bool __fastcall CgWeaponSystemMP::IsWeaponViewModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon)
{
  return ?IsWeaponViewModelLoaded@CgWeaponSystemMP@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
CgWeaponSystemMP::AddWeaponAttachModel
==============
*/

void __fastcall CgWeaponSystemMP::AddWeaponAttachModel(CgWeaponSystemMP *this, const int modelIndex, const int boneIndex, const vec3_t *offset, const vec3_t *angles)
{
  ?AddWeaponAttachModel@CgWeaponSystemMP@@UEAAXHHAEBTvec3_t@@0@Z(this, modelIndex, boneIndex, offset, angles);
}

/*
==============
CgWeaponSystemMP::DrawTargetBoxVehicle
==============
*/

void __fastcall CgWeaponSystemMP::DrawTargetBoxVehicle(CgWeaponSystemMP *this, const DObj *dobj, const vec3_t *origin)
{
  ?DrawTargetBoxVehicle@CgWeaponSystemMP@@QEBAXPEBUDObj@@AEBTvec3_t@@@Z(this, dobj, origin);
}

/*
==============
CgWeaponSystemMP::PlayerHasAutoSpot
==============
*/

int __fastcall CgWeaponSystemMP::PlayerHasAutoSpot(CgWeaponSystemMP *this)
{
  return ?PlayerHasAutoSpot@CgWeaponSystemMP@@QEBAHXZ(this);
}

/*
==============
CgWeaponSystemMP::UpdateBulletFire
==============
*/

void __fastcall CgWeaponSystemMP::UpdateBulletFire(CgWeaponSystemMP *this, int eventId, centity_t *inflictorEnt, const int knownHitClientNum, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const int fireSequenceIndex, const CgEventLodData *optionalEventLod, const CgFireEventHighPrecisionData *highPrecisionFireData)
{
  ?UpdateBulletFire@CgWeaponSystemMP@@UEAAXHPEAUcentity_t@@HAEBUWeapon@@_NVTagPair@@22W4PlayerHandIndex@@HPEBUCgEventLodData@@PEBUCgFireEventHighPrecisionData@@@Z(this, eventId, inflictorEnt, knownHitClientNum, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, fireSequenceIndex, optionalEventLod, highPrecisionFireData);
}

/*
==============
CgWeaponSystemMP::UpdateMuzzleFlash
==============
*/

void __fastcall CgWeaponSystemMP::UpdateMuzzleFlash(CgWeaponSystemMP *this, centity_t *cent, const Weapon *weapon, bool isAlternate, int bViewModel, int bDrawGun, const CgEventLodData *optionalEventLodData)
{
  ?UpdateMuzzleFlash@CgWeaponSystemMP@@UEBAXPEAUcentity_t@@AEBUWeapon@@_NHHPEBUCgEventLodData@@@Z(this, cent, weapon, isAlternate, bViewModel, bDrawGun, optionalEventLodData);
}

/*
==============
CgWeaponSystemMP::BulletTrajectoryEffects
==============
*/

void __fastcall CgWeaponSystemMP::BulletTrajectoryEffects(CgWeaponSystemMP *this, int sourceEntityNum, const Weapon *weapon, bool isAlternate, const vec3_t *startPos, const vec3_t *position, int surfType, int event)
{
  ?BulletTrajectoryEffects@CgWeaponSystemMP@@UEBAXHAEBUWeapon@@_NAEBTvec3_t@@2HH@Z(this, sourceEntityNum, weapon, isAlternate, startPos, position, surfType, event);
}

/*
==============
CgWeaponSystemMP::IsLaserFlagOn
==============
*/

bool __fastcall CgWeaponSystemMP::IsLaserFlagOn(CgWeaponSystemMP *this, const playerState_s *ps)
{
  return ?IsLaserFlagOn@CgWeaponSystemMP@@UEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemMP::AddWeaponAttachModel
==============
*/
void CgWeaponSystemMP::AddWeaponAttachModel(CgWeaponSystemMP *this, const int modelIndex, const int boneIndex, const vec3_t *offset)
{
  ;
}

/*
==============
CgWeaponSystemMP::AddWeaponLaserForCharacter
==============
*/
void CgWeaponSystemMP::AddWeaponLaserForCharacter(CgWeaponSystemMP *this, const Weapon *weapon, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const dvar_t *v10; 
  team_t Team; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1011, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1014, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v7 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &v7->predictedPlayerState;
  if ( v7 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1016, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState->clientNum != cent->nextState.number )
    goto LABEL_22;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( BG_IsThirdPersonMode(Instance, p_predictedPlayerState) || XCamData::IsActive(&LocalClientGlobals->xCam) )
    goto LABEL_22;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) )
  {
    v10 = DCONST_DVARBOOL_bg_thirdPerson;
    if ( !DCONST_DVARBOOL_bg_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_thirdPerson") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
LABEL_22:
      if ( this->IsWeaponLaserOn(this, weapon, NULL, cent) )
      {
        Team = CgEntitySystemMP::CG_EntityMP_GetTeam((const LocalClientNum_t)this->m_localClientNum, cent);
        CG_LaserAdd((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number, Team);
      }
    }
  }
}

/*
==============
CgWeaponSystemMP::BulletHitEvent
==============
*/
void CgWeaponSystemMP::BulletHitEvent(CgWeaponSystemMP *this, __int64 sourceEntityNum, __int64 targetEntityNum, unsigned int targetScriptableInstanceIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const unsigned int flags, const scr_string_t partName, const bool forceClientSideHandling, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  int v24; 
  int v25; 
  centity_t *Entity; 
  const dvar_t *v50; 
  vec3_t v52; 

  v24 = targetEntityNum;
  v25 = sourceEntityNum;
  _R15 = position;
  if ( !forceClientSideHandling && this->SimulateBulletFire_UseEventBasedHitEffect(this, sourceEntityNum, targetEntityNum, event) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v24);
    if ( Entity && (Entity->flags & 1) != 0 && BG_IsPlayerOrAgentCorpseEntity(&Entity->nextState) || !CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)this->m_localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_DETAIL_EXIT_TRACE, optionalEventLodData) )
    {
      __asm
      {
        vmovaps [rsp+148h+var_58], xmm6
        vmovaps [rsp+148h+var_68], xmm7
      }
      if ( (impactEffects & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2206, ASSERT_TYPE_ASSERT, "( ( !(impactEffects & IMPACTEFFECT_EXIT) ) )", "( impactEffects ) = %i", impactEffects) )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm5, xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [r15+4]
        vsubss  xmm6, xmm1, dword ptr [rbp+4]
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm7, xmm0, dword ptr [rbp+8]
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rsp+148h+var_80], xmm0
        vmulss  xmm1, xmm6, xmm2
        vmulss  xmm0, xmm7, xmm2
        vmovss  dword ptr [rsp+148h+var_80+4], xmm1
        vmovss  dword ptr [rsp+148h+var_80+8], xmm0
      }
      CgWeaponSystemMP::BulletHitEvent_Internal(this, v25, v24, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, &v52, surfType, event, impactEffects | 4, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
      __asm
      {
        vmovaps xmm7, [rsp+148h+var_68]
        vmovaps xmm6, [rsp+148h+var_58]
      }
    }
    else
    {
      CgWeaponSystemMP::BulletHitEvent_SimulateExit(this, v25, v24, targetScriptableInstanceIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
    }
  }
  v50 = DVARBOOL_ui_use_per_bullet_hitmarkers;
  if ( !DVARBOOL_ui_use_per_bullet_hitmarkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_use_per_bullet_hitmarkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  if ( v50->current.enabled )
    CgWeaponSystemMP::SpawnBulletHitmarker(this, v25, v24, position, boneIndex, impactEffects);
  CgWeaponSystemMP::BulletHitEvent_Internal(this, v25, v24, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
}

/*
==============
CgWeaponSystemMP::BulletHitEvent_Internal
==============
*/
void CgWeaponSystemMP::BulletHitEvent_Internal(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  bool ShouldPerformEvent; 
  unsigned int v24; 
  __int64 m_localClientNum; 
  Weapon *v26; 
  __int64 v27; 
  BOOL v28; 
  CgSfxImpactInfo outSfxInfo; 
  bool impactEffectsa; 

  ShouldPerformEvent = CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)this->m_localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_VFX, optionalEventLodData);
  CgWeaponSystemMP::BulletImpactEffects(this, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, weapon, isAlternate, startPos, position, normal, surfType, event, impactEffects, hitContents, !ShouldPerformEvent, hitArmorType, &outSfxInfo);
  v24 = impactEffects & 0x1004;
  impactEffectsa = v24 == 0;
  if ( !v24 )
    this->BulletTrajectoryEffects(this, sourceEntityNum, weapon, isAlternate, startPos, position, surfType, event);
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(v27) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v27) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v26) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
  {
    LODWORD(v27) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v27) )
      __debugbreak();
  }
  LOBYTE(v28) = isAlternate;
  CgSoundSystem::ms_soundSystemArray[m_localClientNum]->PlayWhizbyAndImpactSfx(CgSoundSystem::ms_soundSystemArray[m_localClientNum], &outSfxInfo, impactEffectsa, sourceEntityNum, initialPos, startPos, position, surfType, weapon, v28, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgWeaponSystemMP::BulletHitEvent_SimulateExit
==============
*/
void CgWeaponSystemMP::BulletHitEvent_SimulateExit(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableInstanceIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *damageDir, int surfType, int event, unsigned int impactEffects, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *optionalEventLodData)
{
  __int32 v29; 
  int v30; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned int NumHits; 
  int RaycastHitRef; 
  int EntityNum; 
  unsigned __int16 v37; 
  char v38; 
  char v39; 
  const Physics_DetailHitData *DetailHitData; 
  const Physics_DetailHitData *v41; 
  const DObj *ClientDObj; 
  int hitContents; 
  vec3_t *v45; 
  vec3_t *v46; 
  unsigned __int8 inOutIndex; 
  bool v48; 
  unsigned int targetScriptableIndex; 
  int sourceEntityNuma; 
  int modelIndex; 
  CgEventLodData *v52; 
  vec3_t *normal; 
  vec3_t *v54; 
  vec3_t *v55; 
  Weapon *v56; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v58; 
  vec3_t start; 
  vec3_t end; 
  vec3_t pos; 

  v58 = -2i64;
  __asm { vmovaps [rsp+1A0h+var_50], xmm6 }
  targetScriptableIndex = targetScriptableInstanceIndex;
  sourceEntityNuma = sourceEntityNum;
  v56 = (Weapon *)weapon;
  v48 = isAlternate;
  v55 = (vec3_t *)initialPos;
  v54 = (vec3_t *)startPos;
  _RBX = position;
  normal = (vec3_t *)damageDir;
  v52 = (CgEventLodData *)optionalEventLodData;
  Sys_ProfBeginNamedEvent(0xFFFFD700, "BulletHitEvent_SimulateExit");
  if ( (impactEffects & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2085, ASSERT_TYPE_ASSERT, "( ( !(impactEffects & IMPACTEFFECT_EXIT) ) )", "( impactEffects ) = %i", impactEffects) )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rbp+80h+end], xmm0
  }
  end.v[2] = position->v[2];
  __asm
  {
    vmovss  xmm2, cs:traceLength
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbp+80h+start], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+80h+start+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+80h+start+8], xmm1
  }
  v29 = 3 * this->m_localClientNum + 4;
  v30 = 0;
  extendedData.ignoreBodies = NULL;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+80h+extendedData.collisionBuffer], xmm6
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 33570816;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)v29);
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  WeaponPriorityMap = BG_GetWeaponPriorityMap(weapon, v48);
  Physics_AddDetailTrace(AllResult, WeaponPriorityMap);
  Physics_Raycast((Physics_WorldId)v29, &start, &end, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( NumHits )
  {
    HavokPhysics_CollisionQueryResult::SortResults(AllResult);
    while ( 1 )
    {
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(AllResult, v30);
      EntityNum = Physics_GetEntityNum(RaycastHitRef);
      v37 = EntityNum;
      if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
        __debugbreak();
      if ( v37 == targetEntityNum )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(AllResult, v30);
        __asm { vcomiss xmm0, xmm6 }
        if ( !(v38 | v39) )
        {
          DetailHitData = Physics_GetDetailHitData(AllResult, 0, v30);
          v41 = DetailHitData;
          if ( DetailHitData )
          {
            if ( DetailHitData->isValid )
            {
              if ( DetailHitData->partName )
              {
                ClientDObj = Com_GetClientDObj(targetEntityNum, this->m_localClientNum);
                if ( ClientDObj )
                {
                  inOutIndex = -2;
                  if ( DObjGetBoneIndexInternal_40(ClientDObj, v41->partName, &inOutIndex, &modelIndex) )
                    break;
                }
              }
            }
          }
        }
      }
      if ( ++v30 >= NumHits )
        goto LABEL_23;
    }
    if ( inOutIndex == 0xFF )
    {
      LODWORD(v46) = 255;
      LODWORD(v45) = 255;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2153, ASSERT_TYPE_ASSERT, "( boneIndex ) != ( 255 )", "%s != %s\n\t%i, %i", "boneIndex", "NO_BONEINDEX", v45, v46) )
        __debugbreak();
    }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(AllResult, v30, &pos);
    hitContents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(AllResult, v30);
    CgWeaponSystemMP::BulletHitEvent_Internal(this, sourceEntityNuma, targetEntityNum, targetScriptableIndex, inOutIndex, v56, v48, v55, v54, &pos, normal, surfType, event, impactEffects | 4, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, v52);
  }
LABEL_23:
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+1A0h+var_50] }
}

/*
==============
CgWeaponSystemMP::BulletImpactEffects
==============
*/
void CgWeaponSystemMP::BulletImpactEffects(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *startPosition, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactFlags, int hitContents, bool forceCullBulletHitEffect, SndHitArmorType hitArmorType, CgSfxImpactInfo *outSfxInfo)
{
  FXRegisteredDef *p_hitFx; 
  __int64 v23; 
  unsigned int v24; 
  FXRegisteredDef *v25; 
  bool v27; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  Weapon *v33; 
  FXRegisteredDef hitFx; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  p_hitFx = &hitFx;
  v23 = 2i64;
  do
  {
    FXRegisteredDef::FXRegisteredDef(p_hitFx++);
    --v23;
  }
  while ( v23 );
  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1929, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  if ( sourceEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1930, ASSERT_TYPE_ASSERT, "(sourceEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "sourceEntityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)surfType >= 0x40 )
  {
    LODWORD(v33) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1931, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v33, 64) )
      __debugbreak();
  }
  v24 = 0;
  outSfxInfo->hitSound = NULL;
  Sys_ProfBeginNamedEvent(0xFF008080, "CG_BulletImpactEffects");
  CG_GetImpactEffectForWeapon(this->m_localClientNum, sourceEntityNum, targetEntityNum, 1, hitContents, weapon, isAlternate, surfType, impactFlags, hitArmorType, &hitFx, &outSfxInfo->hitSound, &outSfxInfo->isExplosion);
  outSfxInfo->impactEnt = 2046;
  v25 = &hitFx;
  _RDI = normal;
  BG_GetWeaponDismembermentEnabled(weapon, isAlternate);
  v27 = forceCullBulletHitEffect;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    if ( v25->m_particleSystemDef )
    {
      if ( surfType == 7 )
      {
        if ( !v27 )
          CgWeaponSystem::BloodSplatterOnShield(this, targetEntityNum);
        v29 = DVARBOOL_cg_blood;
        if ( !DVARBOOL_cg_blood && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_blood") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( !v29->current.enabled )
          v25->m_particleSystemDef = (const ParticleSystemDef *)cgMedia.fxNoBloodFleshHit;
      }
      v30 = DVARBOOL_cg_marks_ents_player_only;
      if ( !DVARBOOL_cg_marks_ents_player_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_marks_ents_player_only") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( v30->current.enabled && sourceEntityNum < 200 )
        targetEntityNum = 2047;
      v27 = forceCullBulletHitEffect;
      if ( !forceCullBulletHitEffect )
      {
        if ( !CgWeaponSystem::CullBulletHitEffect(this, event, position, normal, sourceEntityNum, targetEntityNum, impactFlags) )
        {
          __asm
          {
            vucomiss xmm6, dword ptr [rdi]
            vucomiss xmm6, dword ptr [rdi+4]
            vucomiss xmm6, dword ptr [rdi+8]
          }
        }
        v27 = 0;
      }
    }
    ++v24;
    ++v25;
  }
  while ( v24 < 2 );
  Sys_ProfEndNamedEvent();
  _R11 = &v35;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CgWeaponSystemMP::BulletTrajectoryEffects
==============
*/
void CgWeaponSystemMP::BulletTrajectoryEffects(CgWeaponSystemMP *this, int sourceEntityNum, const Weapon *weapon, bool isAlternate, const vec3_t *startPos, const vec3_t *position, int surfType, int event)
{
  const char *EventTypeName; 
  const char *v13; 
  CgStatic *LocalClientStatics; 
  centity_t *Entity; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v17; 
  bool IsPlayerEntityNumber; 
  characterInfo_t *v19; 
  team_t team; 
  const vec3_t *hitPos; 
  meansOfDeath_t mod; 
  bool v23; 
  vec3_t outOrg; 
  unsigned int inflictorEntNum; 
  __int64 v26; 
  bitarray<64> perks; 

  v26 = -2i64;
  inflictorEntNum = sourceEntityNum;
  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1205, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  EventTypeName = BG_GetEventTypeName(event);
  v13 = j_va("BulletTrajectoryEffects (%s)", EventTypeName);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v13);
  *(_QWORD *)outOrg.v = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, sourceEntityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1213, ASSERT_TYPE_ASSERT, "(attackerEnt)", (const char *)&queryFormat, "attackerEnt") )
    __debugbreak();
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    v17 = CharacterInfo;
    if ( CharacterInfo && CharacterInfo->infoValid )
    {
      perks = CharacterInfo->perks;
      goto LABEL_14;
    }
  }
  else
  {
    v17 = NULL;
  }
  perks = 0i64;
LABEL_14:
  IsPlayerEntityNumber = CG_IsPlayerEntityNumber((const playerState_s *)(*(_QWORD *)outOrg.v + 8i64), Entity->nextState.number);
  if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_PLAYER && IsPlayerEntityNumber )
    goto LABEL_25;
  v19 = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)(*(_QWORD *)outOrg.v + 468i64));
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "(localCI)", (const char *)&queryFormat, "localCI") )
    __debugbreak();
  if ( !v17 || !v17->infoValid || (team = v19->team) != TEAM_ZERO && team == v17->team )
  {
LABEL_25:
    hitPos = position;
  }
  else
  {
    hitPos = position;
    CG_WeaponsMP_WhizByIndicator(this->m_localClientNum, startPos, position);
  }
  mod = BG_WeaponBulletFire_GetMethodOfDeath(perks, weapon, isAlternate);
  v23 = event == 94 || event == 97 || event == 212 || event == 214;
  CgWeaponSystem::BulletClientAuthPhysicsImpact(this, inflictorEntNum, weapon, isAlternate, v23, mod, startPos, hitPos);
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1247, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  if ( BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate) > 0 )
  {
    RefdefView_GetOrg((const RefdefView *)(*(_QWORD *)outOrg.v + 26928i64), &outOrg);
    Glass_TraceLine(&fxWorld.glassSys, startPos, hitPos, &outOrg);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_IsCharacterInAir
==============
*/
bool CG_IsCharacterInAir(const characterInfo_t *ci, const centity_t *cent)
{
  entityState_t *p_nextState; 
  unsigned int Animset; 
  unsigned int Anim; 
  bool v7; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  bool result; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 160, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  result = 0;
  if ( !ci->usingAnimState )
  {
    p_nextState = &cent->nextState;
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(p_nextState);
      Anim = BG_PlayerASM_GetAnim(p_nextState, MOVEMENT);
      v7 = BG_PlayerASM_IsAirAlias(Anim, Animset) == 0;
    }
    else
    {
      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
      LegsAnimation = BG_AnimationMP_GetLegsAnimation(p_nextState);
      v7 = !BG_IsAirAnim(LegsAnimation, SuitAnimIndex);
    }
    if ( !v7 )
      return 1;
  }
  return result;
}

/*
==============
CG_ProcessDeathCamImpacts
==============
*/
void CG_ProcessDeathCamImpacts(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int corpseHitEventTime; 
  __int64 corpseHitEventCount; 
  centity_t *Entity; 
  centity_t *v11; 
  vec3_t *p_startPos; 
  __int64 v14; 
  const centity_t *v17; 
  CgWeaponSystemMP *WeaponSystemMP; 
  int fmt; 
  int v44; 
  BOOL v45; 
  unsigned __int8 outBoneIndex[8]; 
  vec3_t outHitLocation; 
  int v48[4]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  corpseHitEventTime = LocalClientGlobals->corpseHitEventTime;
  corpseHitEventCount = LocalClientGlobals->corpseHitEventCount;
  *(_QWORD *)&LocalClientGlobals->corpseHitEventTime = 0i64;
  if ( corpseHitEventTime > 0 && (int)corpseHitEventCount > 0 && LocalClientGlobals->renderingThirdPerson && LocalClientGlobals->predictedPlayerState.pm_type == 7 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    Entity = CG_GetEntity(localClientNum, ComCharacterLimits::ms_gameData.m_characterCount + LocalClientGlobals->predictedPlayerState.corpseIndex);
    v11 = Entity;
    if ( Entity && (Entity->flags & 1) != 0 && impactTimeWindowMs >= LocalClientGlobals->predictedPlayerState.serverTime - corpseHitEventTime && !LocalClientGlobals->inKillCam && (int)corpseHitEventCount > 0 )
    {
      __asm { vmovaps [rsp+158h+var_58], xmm8 }
      p_startPos = &LocalClientGlobals->corpseHitEvent[0].startPos;
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+158h+var_68], xmm9
      }
      v14 = 0i64;
      __asm
      {
        vmovss  xmm9, cs:__real@80000000
        vmovaps [rsp+158h+var_78], xmm10
        vmovsd  xmm10, cs:__real@3eb0c6f7a0b5ed8d
        vmovaps [rsp+158h+var_38], xmm6
        vmovaps [rsp+158h+var_48], xmm7
      }
      do
      {
        v17 = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
        if ( !CG_BoneHitDecode(localClientNum, v17, (const BulletHitBoneInfo *)&p_startPos[1].y, &outHitLocation, outBoneIndex) )
          break;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+158h+outHitLocation]
          vsubss  xmm5, xmm0, dword ptr [rdi]
          vmovss  xmm1, dword ptr [rsp+158h+outHitLocation+4]
          vsubss  xmm6, xmm1, dword ptr [rdi+4]
          vmovss  xmm0, dword ptr [rsp+158h+outHitLocation+8]
          vsubss  xmm7, xmm0, dword ptr [rdi+8]
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm1, xmm2, xmm6
          vmulss  xmm0, xmm5, xmm2
          vmovss  [rsp+158h+var_8C], xmm1
          vcvtss2sd xmm1, xmm4, xmm4
          vcomisd xmm1, xmm10
          vmovss  [rsp+158h+var_90], xmm0
          vmulss  xmm0, xmm7, xmm2
          vmovss  [rsp+158h+var_88], xmm0
        }
        WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP(localClientNum);
        LOBYTE(v45) = 0;
        LOBYTE(v44) = LOBYTE(p_startPos[-1].z);
        LOBYTE(fmt) = outBoneIndex[0];
        WeaponSystemMP->BulletHitEvent(WeaponSystemMP, SLOWORD(p_startPos[1].v[0]), v11->nextState.number, 0xFFFFFFFF, fmt, (const Weapon *)&p_startPos[-6].z, v44, p_startPos, p_startPos, &outHitLocation, (const vec3_t *)v48, LODWORD(p_startPos[2].v[1]), LODWORD(p_startPos[-6].v[1]), LOWORD(p_startPos[2].z) | 0x1012, 0, 0, (const scr_string_t)0, v45, 0, SLODWORD(p_startPos[3].v[2]), SLODWORD(p_startPos[4].v[0]), NULL);
        ++v14;
        p_startPos += 10;
      }
      while ( v14 < corpseHitEventCount );
      __asm
      {
        vmovaps xmm7, [rsp+158h+var_48]
        vmovaps xmm6, [rsp+158h+var_38]
        vmovaps xmm8, [rsp+158h+var_58]
        vmovaps xmm9, [rsp+158h+var_68]
        vmovaps xmm10, [rsp+158h+var_78]
      }
    }
  }
}

/*
==============
CG_WeaponsMP_CalculateCharacterHighLodMuzzlePoint
==============
*/
bool CG_WeaponsMP_CalculateCharacterHighLodMuzzlePoint(const LocalClientNum_t localClientNum, centity_t *cent, const TagPair tagPair, PlayerHandIndex hand, vec3_t *out_Point)
{
  vec3_t *v5; 
  entityType_s eType; 
  const DObj *ClientDObj; 
  const cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t name; 
  CharacterModelType modelTypesToSearch[4]; 
  TagPair v18; 

  v18 = tagPair;
  v5 = out_Point;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 686, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 687, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 699, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  if ( !LocalClientGlobals->HasCharacterInfo((cg_t *)LocalClientGlobals, clientNum) )
    return 0;
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo )
    return 0;
  outBoneIndex[0] = -2;
  name = 0;
  modelTypesToSearch[0] = CHAR_MODEL_WEAPON_HELD;
  modelTypesToSearch[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
  modelTypesToSearch[2] = CHAR_MODEL_WEAPON_EXECUTION;
  if ( !TagPair::GetTagNameAndBoneIndexForCharacter(&v18, ClientDObj, CharacterInfo, modelTypesToSearch, 3, &name, outBoneIndex) )
    return 0;
  if ( hand )
  {
    outBoneIndex[0] = DObjGetNextBoneIndex(ClientDObj, name, outBoneIndex[0]);
    if ( outBoneIndex[0] == 0xFF )
      return 0;
  }
  return CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, name, v5) != 0;
}

/*
==============
CG_WeaponsMP_GuessSpreadForWeapon
==============
*/
void CG_WeaponsMP_GuessSpreadForWeapon(const LocalClientNum_t localClientNum, const characterInfo_t *ci, const centity_t *cent, const Weapon *weapon, bool isUsingAlternate, float *minSpread, float *maxSpread)
{
  bool IsEnabled; 
  entityState_t *p_nextState; 
  unsigned int Animset; 
  unsigned int Anim; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  bool v18; 
  entityState_t *v19; 
  unsigned int v20; 
  unsigned int v21; 
  SuitAnimType v24; 
  int v25; 
  bool v26; 
  entityState_t *v27; 
  unsigned int v28; 
  unsigned int v29; 
  int IsCrouchingAlias; 
  SuitAnimType v31; 
  int v32; 
  float *hipSpreadDuckedMax; 
  float hipSpreadInAirMax; 
  float hipSpreadSprintMin; 
  float hipSpreadSprintMax; 
  float hipSpreadDuckedMin; 
  float v38; 
  float hipSpreadStandMin; 
  float hipSpreadStandMax; 
  float hipSpreadProneMin; 
  float hipSpreadProneMax[4]; 
  float hipSpreadInAirMin; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(hipSpreadDuckedMax) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 314, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", hipSpreadDuckedMax, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( CG_IsPlayerSliding(ci, cent) )
  {
    BG_GetSlideSpread(weapon, isUsingAlternate, minSpread, maxSpread);
    return;
  }
  BG_GetHipSpread(weapon, isUsingAlternate, &hipSpreadStandMin, &hipSpreadStandMax, &hipSpreadDuckedMin, &v38, &hipSpreadProneMin, hipSpreadProneMax, &hipSpreadSprintMin, &hipSpreadSprintMax, &hipSpreadInAirMin, &hipSpreadInAirMax);
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 160, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ci->usingAnimState )
  {
    IsEnabled = PlayerASM_IsEnabled();
    p_nextState = &cent->nextState;
    if ( IsEnabled )
    {
      Animset = BG_PlayerASM_GetAnimset(p_nextState);
      Anim = BG_PlayerASM_GetAnim(&cent->nextState, MOVEMENT);
      if ( !BG_PlayerASM_IsAirAlias(Anim, Animset) )
        goto LABEL_18;
    }
    else
    {
      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
      LegsAnimation = BG_AnimationMP_GetLegsAnimation(&cent->nextState);
      if ( !BG_IsAirAnim(LegsAnimation, SuitAnimIndex) )
        goto LABEL_18;
    }
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+arg_10]
      vmovss  xmm1, [rsp+0A8h+var_48]
    }
    goto LABEL_27;
  }
LABEL_18:
  if ( !BG_HasPerk(&ci->perks, 0x35u) || !CG_Weapons_IsPlayerSprinting(ci, cent) )
  {
    if ( !ci->usingAnimState )
    {
      v18 = PlayerASM_IsEnabled();
      v19 = &cent->nextState;
      if ( v18 )
      {
        v20 = BG_PlayerASM_GetAnimset(v19);
        v21 = BG_PlayerASM_GetAnim(&cent->nextState, MOVEMENT);
        if ( BG_PlayerASM_IsProneAlias(v21, v20) )
        {
LABEL_26:
          __asm
          {
            vmovss  xmm0, [rsp+0A8h+var_2C]
            vmovss  xmm1, [rsp+0A8h+var_28]
          }
          goto LABEL_27;
        }
      }
      else
      {
        v24 = BG_AnimationMP_GetSuitAnimIndex(v19);
        v25 = BG_AnimationMP_GetLegsAnimation(&cent->nextState);
        if ( BG_IsProneAnim(v25, v24) )
          goto LABEL_26;
      }
      if ( !ci->usingAnimState )
      {
        v26 = PlayerASM_IsEnabled();
        v27 = &cent->nextState;
        if ( v26 )
        {
          v28 = BG_PlayerASM_GetAnimset(v27);
          v29 = BG_PlayerASM_GetAnim(&cent->nextState, MOVEMENT);
          IsCrouchingAlias = BG_PlayerASM_IsCrouchingAlias(v29, v28);
        }
        else
        {
          v31 = BG_AnimationMP_GetSuitAnimIndex(v27);
          v32 = BG_AnimationMP_GetLegsAnimation(&cent->nextState);
          IsCrouchingAlias = BG_IsCrouchingAnim(v32, v31);
        }
        if ( IsCrouchingAlias )
        {
          __asm
          {
            vmovss  xmm0, [rsp+0A8h+hipSpreadDuckedMin]
            vmovss  xmm1, [rsp+0A8h+var_38]
          }
          goto LABEL_27;
        }
      }
    }
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+hipSpreadStandMin]
      vmovss  xmm1, [rsp+0A8h+hipSpreadStandMax]
    }
    goto LABEL_27;
  }
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_44]
    vmovss  xmm1, [rsp+0A8h+var_40]
  }
LABEL_27:
  _RAX = minSpread;
  __asm { vmovss  dword ptr [rax], xmm0 }
  _RAX = maxSpread;
  __asm { vmovss  dword ptr [rax], xmm1 }
}

/*
==============
CG_WeaponsMP_RegisterWeaponDef
==============
*/
void CG_WeaponsMP_RegisterWeaponDef(const unsigned int weapIndex, const char *name)
{
  CgHandler *Handler; 
  unsigned __int8 ActiveGameTypeQuick; 
  Weapon result; 

  if ( !weapIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 81, ASSERT_TYPE_ASSERT, "(weapIndex != 0)", (const char *)&queryFormat, "weapIndex != WP_NONE") )
    __debugbreak();
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 372, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 373, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  Handler = CgHandler::getHandler(cls.m_localClientsActive.firstActiveIndex);
  ActiveGameTypeQuick = ClStatic::GetActiveGameTypeQuick(&cls);
  if ( (unsigned __int16)*(_DWORD *)&BG_Weapons_RegisterWeaponForName(&result, name, NULL, (const GameTypeQuick_t)ActiveGameTypeQuick, Handler)->weaponIdx != weapIndex )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EB3B0, 1146i64, name);
}

/*
==============
CG_WeaponsMP_RegisterWeapons
==============
*/
void CG_WeaponsMP_RegisterWeapons(void)
{
  NetConstStrings_CallForCommonWeaponStrings(CG_WeaponsMP_RegisterWeaponDef);
  NetConstStrings_CallForLevelWeaponStrings(CG_WeaponsMP_RegisterWeaponDef);
}

/*
==============
CG_WeaponsMP_WeaponFlash
==============
*/
void CG_WeaponsMP_WeaponFlash(const LocalClientNum_t localClientNum, const bitarray<64> *r_perks, int dobjHandle, const Weapon *weapon, bool isAlternate, int bViewFlash, const TagPair flashTagPair, bool inADS, bool isFirst)
{
  bool v13; 
  const dvar_t *v14; 
  FxCombinedDef v15; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  const DObj *v18; 
  int entnum; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  FXRegisteredDef def; 
  CharacterModelType modelTypesToSearch[4]; 

  if ( !bViewFlash )
  {
    v15.particleSystemDef = BG_WorldFlashEffect(*r_perks, weapon, isAlternate, isFirst).particleSystemDef;
LABEL_11:
    def.m_particleSystemDef = v15.particleSystemDef;
    if ( !v15.particleSystemDef )
      return;
    goto LABEL_12;
  }
  v13 = isFirst;
  if ( !inADS )
  {
LABEL_9:
    v15.particleSystemDef = BG_ViewFlashEffect(*r_perks, weapon, isAlternate, v13).particleSystemDef;
    goto LABEL_11;
  }
  v14 = DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV;
  if ( !DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enableMuzzleFlashInDualFOV") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled || !CG_View_IsUsingDualFOV(localClientNum) )
  {
    def.m_particleSystemDef = BG_ViewFlashADSEffect(*r_perks, weapon, isAlternate, v13).particleSystemDef;
    if ( def.m_particleSystemDef )
    {
LABEL_12:
      outBoneIndex[0] = -2;
      outTagName = 0;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 402, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
      v18 = ClientDObj;
      if ( ClientDObj && (entnum = ClientDObj->entnum, LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, entnum - 1)) )
        CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entnum - 1);
      else
        CharacterInfo = NULL;
      if ( CharacterInfo )
      {
        modelTypesToSearch[0] = CHAR_MODEL_WEAPON_HELD;
        modelTypesToSearch[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
        modelTypesToSearch[2] = CHAR_MODEL_WEAPON_EXECUTION;
        TagPair::GetTagNameAndBoneIndexForCharacter((TagPair *)&flashTagPair, v18, CharacterInfo, modelTypesToSearch, 3, &outTagName, outBoneIndex);
      }
      else
      {
        TagPair::GetTagNameAndBoneIndex((TagPair *)&flashTagPair, v18, &outTagName, outBoneIndex);
      }
      if ( outBoneIndex[0] != 0xFE )
        FX_PlayBoltedEffect(localClientNum, &def, LocalClientGlobals->time, dobjHandle, outBoneIndex[0], 0);
      return;
    }
    goto LABEL_9;
  }
}

/*
==============
CG_WeaponsMP_WhizByIndicator
==============
*/
void CG_WeaponsMP_WhizByIndicator(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  const dvar_t *v17; 
  cg_t *LocalClientGlobals; 
  char v40; 
  cg_t *v78; 
  cg_t *v81; 
  DamageFeedbackType *p_type; 
  __int64 v83; 
  char v88; 
  cg_t *v104; 
  vec3_t outOrg; 
  __int64 v106; 
  vec3_t vec; 
  vec3_t angles; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  v106 = -2i64;
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
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RSI = end;
  _RBP = start;
  v17 = DCONST_DVARBOOL_hudWhizbyEnable;
  if ( !DCONST_DVARBOOL_hudWhizbyEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm12, dword ptr [rbp+0]
      vmovss  xmm7, dword ptr [rsi]
      vsubss  xmm15, xmm12, xmm7
      vmovss  xmm13, dword ptr [rbp+4]
      vmovss  xmm8, dword ptr [rsi+4]
      vsubss  xmm1, xmm13, xmm8
      vmovss  dword ptr [rsp+158h+var_110], xmm1
      vmovss  xmm14, dword ptr [rbp+8]
      vmovss  xmm10, dword ptr [rsi+8]
      vsubss  xmm4, xmm14, xmm10
      vmovss  [rsp+158h+var_118], xmm4
      vmovss  xmm5, dword ptr [rsp+158h+outOrg]
      vsubss  xmm2, xmm12, xmm5
      vmovss  xmm6, dword ptr [rsp+158h+outOrg+4]
      vsubss  xmm0, xmm13, xmm6
      vmovss  xmm9, dword ptr [rsp+158h+outOrg+8]
      vsubss  xmm3, xmm14, xmm9
      vmulss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm15, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm3
      vaddss  xmm4, xmm2, xmm1
      vxorps  xmm11, xmm11, xmm11
      vcomiss xmm4, xmm11
    }
    if ( !v40 )
    {
      __asm
      {
        vsubss  xmm8, xmm6, xmm8
        vsubss  xmm7, xmm5, xmm7
        vsubss  xmm4, xmm9, xmm10
        vmovss  xmm10, dword ptr [rsp+158h+var_110]
        vmulss  xmm1, xmm10, xmm8
        vmulss  xmm0, xmm15, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, [rsp+158h+var_118]
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm11
        vsubss  xmm3, xmm5, xmm12
        vmovss  dword ptr [rsp+158h+vec], xmm3
        vsubss  xmm5, xmm6, xmm13
        vmovss  dword ptr [rsp+158h+vec+4], xmm5
        vsubss  xmm2, xmm9, xmm14
        vmovss  dword ptr [rsp+158h+vec+8], xmm2
        vmulss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm2, xmm8
        vsubss  xmm6, xmm1, xmm0
        vmulss  xmm2, xmm7, xmm2
        vmulss  xmm1, xmm3, xmm4
        vsubss  xmm4, xmm2, xmm1
        vmulss  xmm3, xmm3, xmm8
        vmulss  xmm0, xmm7, xmm5
        vsubss  xmm5, xmm3, xmm0
        vmulss  xmm2, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm4, xmm2, xmm2
        vmulss  xmm1, xmm10, xmm10
        vmulss  xmm0, xmm15, xmm15
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm8, [rsp+158h+var_118]
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vdivss  xmm6, xmm4, xmm0
      }
      _RDI = DCONST_DVARFLT_hudWhizbyDistance;
      if ( !DCONST_DVARFLT_hudWhizbyDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v40 )
      {
        v104 = CG_GetLocalClientGlobals(localClientNum);
        _RSI = CG_PlayerState_FindLruDamageSlot(v104);
        v78 = CG_GetLocalClientGlobals(localClientNum);
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v78->refdef.view.axis);
        __asm { vmovaps xmm6, xmm0 }
        vectoangles(&vec, &angles);
        __asm { vsubss  xmm6, xmm6, dword ptr [rsp+158h+angles+4] }
        v81 = CG_GetLocalClientGlobals(localClientNum);
        p_type = &v81->viewDamage[0].type;
        v83 = 12i64;
        __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
        do
        {
          if ( v81->time - *((_DWORD *)p_type - 16) > 0 && v81->time - *((_DWORD *)p_type - 16) < *((_DWORD *)p_type - 15) && *p_type == DODGE )
          {
            _RBX = DCONST_DVARFLT_hudWhizbyClearAngle;
            if ( !DCONST_DVARFLT_hudWhizbyClearAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyClearAngle") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RBX);
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+28h]
              vsubss  xmm0, xmm6, dword ptr [rdi-2Ch]
              vandps  xmm0, xmm0, xmm7
              vcomiss xmm1, xmm0
            }
            if ( !(v40 | v88) )
              *((_DWORD *)p_type - 15) = 0;
          }
          p_type += 18;
          --v83;
        }
        while ( v83 );
        _RSI->time = v104->snap->serverTime;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyDurationSec, "hudWhizbyDurationSec");
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vcvttss2si eax, xmm1
        }
        _RSI->duration = _EAX;
        __asm { vmovss  dword ptr [rsi+14h], xmm6 }
        _RSI->type = DODGE;
        _RSI->inVehicle = 0;
        __asm
        {
          vmovss  dword ptr [rsi+8], xmm15
          vmovss  dword ptr [rsi+0Ch], xmm10
          vmovss  dword ptr [rsi+10h], xmm8
        }
        AxisCopy(&v104->refdef.view.axis, &_RSI->playerDir);
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v104->refdef.view.axis);
        __asm { vmovss  dword ptr [rsi+18h], xmm0 }
      }
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  _R11 = &v109;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CgWeaponSystemMP::CalcMuzzlePoint
==============
*/
void CgWeaponSystemMP::CalcMuzzlePoint(CgWeaponSystemMP *this, const int entityNum, const TagPair flashTagPair, const bool calculateExactPoint, vec3_t *out_Point)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobalsForEnt; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v12; 
  bool v30; 
  bool IsCharacterEntity; 
  LocalClientNum_t m_localClientNum; 
  bool v43; 
  const DObj *ClientDObj; 
  const DObj *v45; 
  int eType; 
  scr_string_t PrimaryTagName; 
  const char *v48; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  char *fmt; 
  __int64 v59; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  TagPair tagPair; 

  tagPair = flashTagPair;
  _RDI = out_Point;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2233, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobalsForEnt = CG_GetLocalClientGlobalsForEnt(entityNum);
  v12 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)LocalClientGlobalsForEnt;
  if ( LocalClientGlobalsForEnt )
  {
    CG_GetPlayerViewOrigin(this->m_localClientNum, &LocalClientGlobalsForEnt->predictedPlayerState, _RDI);
    AngleVectors(&Entity->pose.angles, &forward, &right, &up);
    __asm
    {
      vmovss  xmm3, cs:__real@42340000
      vmulss  xmm1, xmm3, dword ptr [rbp+forward]
      vaddss  xmm2, xmm1, dword ptr [rdi]
      vmulss  xmm1, xmm3, dword ptr [rbp+forward+4]
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+forward+8]
      vmovss  dword ptr [rdi+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
    }
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v12 + 96, ACTIVE, 4u) )
    {
      __asm
      {
        vmovss  xmm4, cs:__real@40200000
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm3, xmm4, dword ptr [rbp+up+4]
        vmulss  xmm2, xmm4, dword ptr [rbp+up]
        vsubss  xmm2, xmm1, xmm2
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rdi], xmm2
        vsubss  xmm2, xmm1, xmm3
        vmovss  xmm1, dword ptr [rdi+8]
        vmulss  xmm3, xmm4, dword ptr [rbp+up+8]
        vmovss  dword ptr [rdi+4], xmm2
        vsubss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
    else
    {
      v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v12 + 96, ACTIVE, 3u);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]
        vmovss  xmm4, dword ptr [rdi+4]
        vmovss  xmm5, dword ptr [rdi+8]
      }
      if ( v30 )
        __asm { vmovss  xmm3, cs:__real@40a00000 }
      else
        __asm { vmovss  xmm3, cs:__real@41000000 }
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rbp+up]
        vsubss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+up+4]
        vmovss  dword ptr [rdi], xmm2
        vsubss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+up+8]
        vmovss  dword ptr [rdi+4], xmm2
        vsubss  xmm2, xmm5, xmm1
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
    return;
  }
  if ( (Entity->flags & 1) != 0 && calculateExactPoint )
  {
    IsCharacterEntity = BG_IsCharacterEntity(&Entity->nextState);
    m_localClientNum = this->m_localClientNum;
    if ( IsCharacterEntity )
    {
      v43 = !CG_WeaponsMP_CalculateCharacterHighLodMuzzlePoint(m_localClientNum, Entity, tagPair, WEAPON_HAND_DEFAULT, _RDI);
    }
    else
    {
      if ( !CG_Entity_CanUseDObj(m_localClientNum, entityNum) || (ClientDObj = Com_GetClientDObj(Entity->nextState.number, this->m_localClientNum), (v45 = ClientDObj) == NULL) || !DObjVerifyNumBones(ClientDObj) || (outBoneIndex[0] = -2, outTagName = 0, !TagPair::GetTagNameAndBoneIndex(&tagPair, v45, &outTagName, outBoneIndex)) )
      {
LABEL_21:
        eType = Entity->nextState.eType;
        PrimaryTagName = TagPair::GetPrimaryTagName(&tagPair);
        v48 = SL_ConvertToString(PrimaryTagName);
        LODWORD(fmt) = eType;
        Com_PrintWarning(17, "WARNING: No %s or DObj in CalcMuzzlePoint on entity %d (eType %i).\n", v48, (unsigned int)entityNum, fmt);
        goto LABEL_22;
      }
      v43 = CG_DObjGetWorldTagPos(&Entity->pose, v45, outTagName, _RDI) == 0;
    }
    if ( !v43 )
      return;
    goto LABEL_21;
  }
LABEL_22:
  CG_GetPoseOrigin(&Entity->pose, _RDI);
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v59) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2292, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v59, ComCharacterLimits::ms_gameData.m_characterCount) )
        __debugbreak();
    }
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2294, ASSERT_TYPE_ASSERT, "(cgameStatic)", (const char *)&queryFormat, "cgameStatic") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, Entity->nextState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2296, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2298, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
    {
      BG_Suit_GetProneViewHeight(SuitDef);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm0, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
        __asm { vcvtsi2ss xmm0, xmm0, dword ptr [rbx+204h] }
      else
        __asm { vcvtsi2ss xmm0, xmm0, dword ptr [rbx+200h] }
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm1
      }
    }
  }
}

/*
==============
CgWeaponSystemMP::CanAutospotPlayer
==============
*/
__int64 CgWeaponSystemMP::CanAutospotPlayer(CgWeaponSystemMP *this, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  CgStatic *v7; 
  const cg_t *v8; 
  const characterInfo_t *CharacterInfo; 
  entityState_t *p_nextState; 
  int number; 
  team_t team; 
  team_t v13; 
  __int64 v15; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 738, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( cent->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v15) = cent->nextState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 739, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v15, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  clientNum = cent->nextState.clientNum;
  v7 = LocalClientStatics;
  v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v8, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 744, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->infoValid || BG_HasPerk(&CharacterInfo->perks, 0x27u) || !CG_DrawMP_CanSeePlayer(this->m_localClientNum, cent, 41965603) )
    return 0i64;
  p_nextState = &cent->nextState;
  number = cent->nextState.number;
  if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
    goto LABEL_38;
  if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
    goto LABEL_38;
  if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
LABEL_38:
    if ( number == LocalClientGlobals->predictedPlayerState.clientNum )
      goto LABEL_53;
  }
  team = CgStatic::GetCharacterInfo(v7, cent->nextState.clientNum)->team;
  v13 = CgStatic::GetCharacterInfo(v7, LocalClientGlobals->predictedPlayerState.clientNum)->team;
  if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( v13 && v13 == team )
  {
LABEL_53:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 762, ASSERT_TYPE_ASSERT, "(!CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, cent->nextState.number ) && !Com_Teams_OnSameTeam( &cgameGlob->predictedPlayerState, cgameStatic->GetCharacterInfo( cgameGlob->predictedPlayerState.clientNum )->team, &cent->nextState, cgameStatic->GetCharacterInfo( cent->nextState.clientNum )->team ))", (const char *)&queryFormat, "!CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, cent->nextState.number ) && !Com_Teams_OnSameTeam( &cgameGlob->predictedPlayerState, cgameStatic->GetCharacterInfo( cgameGlob->predictedPlayerState.clientNum )->team, &cent->nextState, cgameStatic->GetCharacterInfo( cent->nextState.clientNum )->team )") )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
CgWeaponSystemMP::CheckFirePenetrateStop
==============
*/
bool CgWeaponSystemMP::CheckFirePenetrateStop(CgWeaponSystemMP *this, const centity_t *attacker, const centity_t *hitEntity, bool penetratedGlass)
{
  entityState_t *p_nextState; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2049, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !hitEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2050, ASSERT_TYPE_ASSERT, "( hitEntity )", (const char *)&queryFormat, "hitEntity") )
    __debugbreak();
  if ( penetratedGlass || (attacker->flags & 1) == 0 )
    return 0;
  p_nextState = &attacker->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return p_nextState->eType == ET_AGENT && (hitEntity->flags & 1) != 0 && hitEntity->nextState.eType == ET_PLAYER && !Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetrationHitsClients, "bullet_penetrationHitsClients");
}

/*
==============
CgWeaponSystemMP::DrawFriendOrFoeTargetBoxes
==============
*/
void CgWeaponSystemMP::DrawFriendOrFoeTargetBoxes(CgWeaponSystemMP *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARMPBOOL_thermalVisionLuiUse;
  if ( !DCONST_DVARMPBOOL_thermalVisionLuiUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalVisionLuiUse") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 912, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "If thermalVisionLuiUse dvar is set to false in MP, then the define OLD_THERMAL_VISION should be re-enabled (it costs some bandwidth to run)\n") )
    __debugbreak();
}

/*
==============
CgWeaponSystemMP::DrawTargetBoxVehicle
==============
*/
void CgWeaponSystemMP::DrawTargetBoxVehicle(CgWeaponSystemMP *this, const DObj *dobj, const vec3_t *origin)
{
  Material *icon; 
  float v10; 
  float v11; 
  int v12; 
  float v13[5]; 
  int v14; 
  int v15; 

  icon = cgMedia.FOFTargetBox_HostileVehicle;
  if ( GetIconDimsForVehicle(this->m_localClientNum, dobj, origin, v13, (float *)&v12, (float *)&v15, (float *)&v14) )
  {
    __asm
    {
      vmovss  xmm1, [rsp+58h+arg_0]
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm3, [rsp+58h+arg_18]; w
      vmovss  xmm2, [rsp+58h+var_18]; y
      vmovss  [rsp+58h+var_28], xmm0
      vmovss  [rsp+58h+var_38], xmm1
      vmovss  xmm1, [rsp+58h+var_14]; x
    }
    CgWeaponSystem::DrawTargetBox(this, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v10, icon, v11);
  }
}

/*
==============
DrawTargetBoxVehicleCallback
==============
*/
void DrawTargetBoxVehicleCallback(LocalClientNum_t localClientNum, const DObj *dobj, const vec3_t *origin)
{
  CgWeaponSystemMP *WeaponSystemMP; 
  Material *FOFTargetBox_HostileVehicle; 
  CgWeaponSystem *v7; 
  float y; 
  float h; 
  float w; 
  float v16; 
  float x[4]; 
  float alpha; 

  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP(localClientNum);
  FOFTargetBox_HostileVehicle = cgMedia.FOFTargetBox_HostileVehicle;
  v7 = WeaponSystemMP;
  if ( GetIconDimsForVehicle(WeaponSystemMP->m_localClientNum, dobj, origin, x, &v16, &w, &alpha) )
  {
    __asm
    {
      vmovss  xmm1, [rsp+58h+alpha]
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm3, [rsp+58h+var_18]; w
      vmovss  xmm2, [rsp+58h+var_14]; y
      vmovss  [rsp+58h+h], xmm0
      vmovss  dword ptr [rsp+58h+y], xmm1
      vmovss  xmm1, [rsp+58h+x]; x
    }
    CgWeaponSystem::DrawTargetBox(v7, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, y, FOFTargetBox_HostileVehicle, h);
  }
}

/*
==============
CgWeaponSystemMP::DrawUFOViewModel
==============
*/
__int64 CgWeaponSystemMP::DrawUFOViewModel(CgWeaponSystemMP *this, const playerState_s *ps)
{
  return 1i64;
}

/*
==============
CgWeaponSystemMP::EnableWeaponUVAnimOverride
==============
*/
void CgWeaponSystemMP::EnableWeaponUVAnimOverride(CgWeaponSystemMP *this, const int enable)
{
  this->m_viewModelUVAnimTimeOverrideEnabled = enable;
}

/*
==============
GetIconDimsForVehicle
==============
*/
bool GetIconDimsForVehicle(LocalClientNum_t localClientNum, const DObj *dobj, const vec3_t *origin, float *x, float *y, float *w, float *h)
{
  __int64 v19; 
  bool v20; 
  const ScreenPlacement *v21; 
  const dvar_t *v57; 
  bool result; 
  vec2_t v77; 
  vec2_t outScreenPos; 
  vec3_t worldPos; 
  vec3_t v80; 

  __asm { vmovaps [rsp+118h+var_48], xmm6 }
  _R14 = y;
  _RSI = x;
  _R15 = w;
  _R13 = origin;
  _RBP = h;
  _R12 = dobj;
  v19 = localClientNum;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 525, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 526, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 527, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !w && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 528, ASSERT_TYPE_ASSERT, "(w)", (const char *)&queryFormat, "w") )
    __debugbreak();
  if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(h)", (const char *)&queryFormat, "h") )
    __debugbreak();
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v21 = &scrPlaceViewDisplay[v19];
      goto LABEL_23;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v20 )
      __debugbreak();
  }
  v21 = &scrPlaceFull;
LABEL_23:
  __asm
  {
    vmovss  xmm1, dword ptr [r12+0C8h]
    vminss  xmm6, xmm1, cs:__real@42700000
    vmovss  xmm0, cs:__real@42480000
    vmovss  xmm2, cs:__real@c2c80000
    vmovss  xmm4, dword ptr [r13+0]
    vcmpltss xmm3, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm5, xmm1, xmm2, xmm3
    vmovss  xmm2, dword ptr [r13+8]
    vmovss  xmm3, dword ptr [r13+4]
    vsubss  xmm1, xmm3, xmm6
    vsubss  xmm0, xmm4, xmm6
    vmovss  dword ptr [rsp+118h+worldPos], xmm0
    vsubss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+118h+worldPos+4], xmm1
    vaddss  xmm1, xmm4, xmm6
    vaddss  xmm0, xmm0, xmm5
    vmovss  dword ptr [rsp+118h+var_B0], xmm1
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rsp+118h+worldPos+8], xmm0
    vaddss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm3, xmm6
    vmovss  dword ptr [rsp+118h+var_B0+8], xmm2
    vmovss  dword ptr [rsp+118h+var_B0+4], xmm0
  }
  if ( CG_WorldPosToScreenPosReal((LocalClientNum_t)v19, v21, &worldPos, &outScreenPos) && CG_WorldPosToScreenPosReal((LocalClientNum_t)v19, v21, &v80, &v77) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+118h+outScreenPos]
      vaddss  xmm1, xmm0, dword ptr [rsp+118h+var_D0]
      vmovss  xmm6, cs:__real@3f000000
      vmovss  xmm0, dword ptr [rsp+118h+outScreenPos+4]
    }
    _RDI = DVARFLT_FoFIconMinSize;
    __asm
    {
      vmovaps [rsp+118h+var_58], xmm7
      vmovaps [rsp+118h+var_68], xmm8
      vmovaps [rsp+118h+var_78], xmm9
      vmovaps [rsp+118h+var_88], xmm10
      vmovaps [rsp+118h+var_98], xmm11
      vmulss  xmm10, xmm1, xmm6
      vaddss  xmm1, xmm0, dword ptr [rsp+118h+var_D0+4]
      vmulss  xmm11, xmm1, xmm6
    }
    if ( !DVARFLT_FoFIconMinSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconMinSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DVARFLT_FoFIconMaxSize;
    __asm { vmulss  xmm7, xmm0, dword ptr [rbx] }
    if ( !DVARFLT_FoFIconMaxSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconMaxSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm8, xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rsp+118h+var_D0+4]
      vmovss  xmm1, dword ptr [rsp+118h+var_D0]
      vsubss  xmm2, xmm0, dword ptr [rsp+118h+outScreenPos+4]
      vsubss  xmm4, xmm1, dword ptr [rsp+118h+outScreenPos]
    }
    v57 = DVARFLT_FoFIconScale;
    __asm
    {
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm3, xmm1
      vsqrtss xmm9, xmm0, xmm0
    }
    if ( !DVARFLT_FoFIconScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    __asm
    {
      vmulss  xmm0, xmm9, dword ptr [rbx+28h]; val
      vmovaps xmm2, xmm8; max
      vmovaps xmm1, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm2, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
      vmovaps xmm9, [rsp+118h+var_78]
    }
    result = 1;
    __asm
    {
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovss  dword ptr [r15], xmm0
      vmovss  dword ptr [rbp+0], xmm2
      vmulss  xmm0, xmm0, xmm6
      vsubss  xmm1, xmm10, xmm0
      vmovaps xmm10, [rsp+118h+var_88]
      vmulss  xmm2, xmm2, xmm6
      vsubss  xmm0, xmm11, xmm2
      vmovaps xmm11, [rsp+118h+var_98]
      vmovss  dword ptr [rsi], xmm1
      vmovss  dword ptr [r14], xmm0
    }
  }
  else
  {
    result = 0;
    *_RSI = 0.0;
    *y = 0.0;
    *w = 0.0;
    *h = 0.0;
  }
  __asm { vmovaps xmm6, [rsp+118h+var_48] }
  return result;
}

/*
==============
CgWeaponSystemMP::GetWeaponAttachModels
==============
*/
__int64 CgWeaponSystemMP::GetWeaponAttachModels(CgWeaponSystemMP *this, unsigned __int16 modelIndex, DObjModel *outDObjModels)
{
  return modelIndex;
}

/*
==============
CgWeaponSystemMP::GetWeaponUVAnimOverride
==============
*/
float CgWeaponSystemMP::GetWeaponUVAnimOverride(CgWeaponSystemMP *this)
{
  CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( this->m_viewModelUVAnimTimeOverrideEnabled )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3a83126f
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgWeaponSystemMP::InitViewModel
==============
*/
void CgWeaponSystemMP::InitViewModel(CgWeaponSystemMP *this)
{
  ;
}

/*
==============
CgWeaponSystemMP::IsGrenadeDangerous
==============
*/
_BOOL8 CgWeaponSystemMP::IsGrenadeDangerous(CgWeaponSystemMP *this, const centity_t *grenadeEntity)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  unsigned int otherEntityNum; 
  const dvar_t *v7; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v10; 
  unsigned __int64 team; 
  bool v12; 
  bool v13; 
  unsigned int v17; 
  unsigned __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  __int128 v22; 
  __int64 v23; 
  unsigned int v24; 

  if ( !grenadeEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 949, ASSERT_TYPE_ASSERT, "(grenadeEntity)", (const char *)&queryFormat, "grenadeEntity") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  otherEntityNum = grenadeEntity->nextState.otherEntityNum;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( otherEntityNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    return 1i64;
  v7 = DVARBOOL_cg_drawFriendlyHUDGrenades;
  if ( !DVARBOOL_cg_drawFriendlyHUDGrenades && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFriendlyHUDGrenades") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    return 1i64;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( clientNum == otherEntityNum )
    return 1i64;
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 966, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  if ( CharacterInfo->team == TEAM_ZERO )
    return 1i64;
  v10 = CgStatic::GetCharacterInfo(LocalClientStatics, otherEntityNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 973, ASSERT_TYPE_ASSERT, "(attackerInfo)", (const char *)&queryFormat, "attackerInfo") )
    __debugbreak();
  team = (unsigned int)v10->team;
  v22 = 0ui64;
  v23 = 0i64;
  v24 = 0;
  v12 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v13 = v12 && (_DWORD)team == 5;
  if ( (!v12 || (_DWORD)team != 4) && !v13 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v17 = _RAX->array[6] & 0xFFEFFFFF;
    v24 = v17;
    __asm
    {
      vmovups [rsp+98h+var_48], xmm0
      vmovsd  [rsp+98h+var_38], xmm1
    }
    if ( (_DWORD)team )
    {
      if ( (unsigned int)team >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", team, 224) )
        __debugbreak();
      *((_DWORD *)&v22 + (team >> 5)) &= ~(0x80000000 >> (team & 0x1F));
      v17 = v24;
    }
    if ( v12 )
      LODWORD(v22) = v22 & 0xF7FFFFFF;
    v24 = v17 & 0xFF9FFFFF;
  }
  v18 = (unsigned int)CharacterInfo->team;
  if ( (unsigned int)v18 >= 0xE0 )
  {
    LODWORD(v21) = 224;
    LODWORD(v20) = CharacterInfo->team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v20, v21) )
      __debugbreak();
  }
  return ((0x80000000 >> (v18 & 0x1F)) & *((_DWORD *)&v22 + (v18 >> 5))) != 0;
}

/*
==============
CgWeaponSystemMP::IsLaserFlagOn
==============
*/
bool CgWeaponSystemMP::IsLaserFlagOn(CgWeaponSystemMP *this, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 942, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 9u);
}

/*
==============
CgWeaponSystemMP::IsPlayerUsingVehicleWeapon
==============
*/
_BOOL8 CgWeaponSystemMP::IsPlayerUsingVehicleWeapon(CgWeaponSystemMP *this, const playerState_s *playerState, const entityState_t *vehicleState)
{
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 931, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 932, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  return vehicleState->eType == ET_HELICOPTER && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&playerState->eFlags, ACTIVE, 0xBu) && playerState->viewlocked_entNum == vehicleState->number;
}

/*
==============
CgWeaponSystemMP::IsWeaponFireWithinPingRange
==============
*/
bool CgWeaponSystemMP::IsWeaponFireWithinPingRange(CgWeaponSystemMP *this, const vec3_t *origin)
{
  bool result; 
  char v10; 
  char v11; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  __int64 v26; 
  void *retaddr; 

  _RAX = &retaddr;
  v26 = -2i64;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( !CG_GameInterface_PlayingBR() )
    goto LABEL_2;
  _RDI = DVARFLT_compassShowFireBrMaxDistSq;
  if ( !DVARFLT_compassShowFireBrMaxDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFireBrMaxDistSq") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 | v11 )
  {
LABEL_2:
    result = 1;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+outOrg]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+78h+outOrg+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+78h+outOrg+8]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm6, xmm2
    }
    memset(&outOrg, 0, sizeof(outOrg));
    result = !v10;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
CgWeaponSystemMP::IsWeaponModelLoaded
==============
*/
char CgWeaponSystemMP::IsWeaponModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon, const bool viewModel)
{
  int v3; 
  unsigned int WeaponStreamedModels; 
  const XModel **i; 
  const XModel *outList[32]; 

  v3 = 0;
  WeaponStreamedModels = BG_GetWeaponStreamedModels(r_weapon, (const XModel *(*)[32])outList, viewModel);
  if ( !WeaponStreamedModels )
    return 1;
  for ( i = outList; ; ++i )
  {
    if ( !*i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2328, ASSERT_TYPE_ASSERT, "(weaponModels[i])", (const char *)&queryFormat, "weaponModels[i]") )
      __debugbreak();
    if ( !CL_TransientsMP_IsXModelLoaded(*i) )
      break;
    if ( ++v3 >= WeaponStreamedModels )
      return 1;
  }
  return 0;
}

/*
==============
CgWeaponSystemMP::IsWeaponViewModelLoaded
==============
*/
bool CgWeaponSystemMP::IsWeaponViewModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon)
{
  return CgWeaponSystemMP::IsWeaponModelLoaded(this, r_weapon, 1);
}

/*
==============
CgWeaponSystemMP::IsWeaponWorldModelLoaded
==============
*/
bool CgWeaponSystemMP::IsWeaponWorldModelLoaded(CgWeaponSystemMP *this, const Weapon *r_weapon)
{
  return CgWeaponSystemMP::IsWeaponModelLoaded(this, r_weapon, 0);
}

/*
==============
CgWeaponSystemMP::PlayCustomImpactEffects
==============
*/
void CgWeaponSystemMP::PlayCustomImpactEffects(CgWeaponSystemMP *this, FXRegisteredDef impactVfx, SndAliasList *const impactSfx, const int victimEntNum, const int soundBindEntNum, const vec3_t *position, const unsigned __int8 boneIndex, const vec3_t *normal, const int surfType)
{
  const vec3_t *v10; 
  unsigned __int64 SndEntHandle; 
  const char *Name; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  int time; 
  const DObj *ClientDObj; 
  unsigned __int8 markBoneIndex; 
  float fmt; 
  __int64 fadeTime; 
  vec3_t *org; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> left; 
  FXRegisteredDef def; 

  def.m_particleSystemDef = impactVfx.m_particleSystemDef;
  v10 = position;
  _RBX = normal;
  if ( (unsigned int)victimEntNum >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1994, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", victimEntNum, 2048) )
      __debugbreak();
    LODWORD(org) = 2048;
    LODWORD(fadeTime) = victimEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1995, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", fadeTime, org) )
      __debugbreak();
  }
  if ( impactSfx )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, soundBindEntNum);
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; volumeScale
      vmovss  dword ptr [rsp+0D8h+fmt], xmm3
    }
    SND_PlaySurfaceSoundAsync(impactSfx, surfType, SndEntHandle, *(float *)&_XMM3, fmt, 0, v10);
  }
  if ( def.m_particleSystemDef )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm1, xmm0
    }
    if ( def.m_particleSystemDef )
      goto LABEL_12;
    __asm { vucomiss xmm0, dword ptr [rbx+4] }
    if ( LOBYTE(def.m_particleSystemDef) )
      goto LABEL_12;
    __asm { vucomiss xmm0, dword ptr [rbx+8] }
    if ( LOBYTE(def.m_particleSystemDef) )
    {
LABEL_12:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+0D8h+forward], xmm1
        vmovss  xmm1, dword ptr [rbx+8]
        vmovss  dword ptr [rsp+0D8h+forward+8], xmm1
        vmovss  dword ptr [rsp+0D8h+forward+4], xmm0
      }
      AxisRandomAroundForward(&left.m[2], left.m, &left.m[1]);
      if ( !CgWeaponSystem::CullBulletHitEffect(this, 0, v10, _RBX, 2047, victimEntNum, 0) )
      {
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3fc00000
            vmovss  dword ptr [rsp+0D8h+halfSize], xmm0
            vmovss  dword ptr [rsp+0D8h+halfSize+4], xmm0
            vmovss  dword ptr [rsp+0D8h+halfSize+8], xmm0
          }
          R_DecalVolumesMarks_DebugAdd(v10, &halfSize, &left, &colorYellow);
          Name = FXRegisteredDef::GetName(&def);
          Com_Printf(21, "D+ CG mark: vfx: %s\n", Name);
        }
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, victimEntNum);
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        m_localClientNum = this->m_localClientNum;
        time = LocalClientGlobals->time;
        if ( (Entity->flags & 1) != 0 )
        {
          ClientDObj = Com_GetClientDObj(victimEntNum, m_localClientNum);
          markBoneIndex = boneIndex;
          if ( ClientDObj && DObjIsValidBoneIndex(ClientDObj, boneIndex) )
            FX_PlayBoltedOffsetEffectWithMarkEntity(this->m_localClientNum, &def, time, victimEntNum, markBoneIndex, v10, &left, 0, victimEntNum, 0, markBoneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
          else
            FX_PlayOrientedEffectWithMarkEntity(this->m_localClientNum, &def, time, v10, &left, 0, victimEntNum, 0, markBoneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
        }
        else
        {
          FX_PlayOrientedEffectWithMarkEntity(m_localClientNum, &def, time, v10, &left, 0, victimEntNum, 0, boneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
        }
      }
    }
  }
}

/*
==============
CgWeaponSystemMP::PlayerHasAutoSpot
==============
*/
_BOOL8 CgWeaponSystemMP::PlayerHasAutoSpot(CgWeaponSystemMP *this)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x27u) && !LocalClientGlobals->inKillCam && !LocalClientGlobals->renderingThirdPerson;
}

/*
==============
CgWeaponSystemMP::SetWeaponUVAnimTimeOverride
==============
*/
void CgWeaponSystemMP::SetWeaponUVAnimTimeOverride(CgWeaponSystemMP *this, const int time)
{
  this->m_viewModelUVAnimTimeOverride = time;
}

/*
==============
CgWeaponSystemMP::ShouldWeaponPing
==============
*/
_BOOL8 CgWeaponSystemMP::ShouldWeaponPing(CgWeaponSystemMP *this, const centity_t *cent, const Weapon *weapon, const bool isAlternate, const vec3_t *origin)
{
  const dvar_t *v11; 
  _BOOL8 result; 
  char v16; 
  char v17; 
  cg_t *LocalClientGlobals; 
  CgGlobalsMP *v30; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v33; 
  team_t team; 
  vec3_t outOrg; 
  __int64 v37; 

  v37 = -2i64;
  __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
  v11 = DVARBOOL_compassShowFire;
  if ( !DVARBOOL_compassShowFire && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFire") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x200000) == 0 )
  {
    if ( CG_GameInterface_PlayingBR() )
    {
      _RDI = DVARFLT_compassShowFireBrMaxDistSq;
      if ( !DVARFLT_compassShowFireBrMaxDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFireBrMaxDistSq") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+28h]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( !(v16 | v17) )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0B8h+outOrg]
          vsubss  xmm3, xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [rsp+0B8h+outOrg+4]
          vsubss  xmm2, xmm1, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [rsp+0B8h+outOrg+8]
          vsubss  xmm4, xmm0, dword ptr [r14+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
        }
        memset(&outOrg, 0, sizeof(outOrg));
        __asm { vcomiss xmm2, xmm6 }
      }
    }
    v30 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
      goto LABEL_29;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v30->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
      __debugbreak();
    if ( !CharacterInfo->infoValid )
      goto LABEL_29;
    if ( (cent->flags & 1) != 0 && BG_IsCharacterEntity(&cent->nextState) )
    {
      v33 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1181, ASSERT_TYPE_ASSERT, "(shooterInfo)", (const char *)&queryFormat, "shooterInfo") )
        __debugbreak();
      if ( !v33->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1182, ASSERT_TYPE_ASSERT, "(shooterInfo->infoValid)", (const char *)&queryFormat, "shooterInfo->infoValid") )
        __debugbreak();
      team = v33->team;
      if ( team && team == CharacterInfo->team )
      {
        result = 1i64;
        goto LABEL_30;
      }
LABEL_29:
      result = CgWeaponSystem::ShouldWeaponPing(this, cent, weapon, isAlternate, origin) != 0;
      goto LABEL_30;
    }
  }
  result = 0i64;
LABEL_30:
  __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
  return result;
}

/*
==============
CgWeaponSystemMP::ShutdownViewModel
==============
*/
void CgWeaponSystemMP::ShutdownViewModel(CgWeaponSystemMP *this)
{
  ;
}

/*
==============
CgWeaponSystemMP::SimulateBulletFire_Orientation
==============
*/
bool CgWeaponSystemMP::SimulateBulletFire_Orientation(CgWeaponSystemMP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *tracerStart)
{
  centity_t *v22; 
  CgWeaponSystemMP *v23; 
  const dvar_t *v28; 
  entityState_t *p_nextState; 
  characterInfo_t *CharacterInfo; 
  const dvar_t *v36; 
  CgWeaponMap *Instance; 
  bool v56; 
  int v71; 
  const DObj *ClientDObj; 
  char v86; 
  const entityState_t *v103; 
  centity_t *v104; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsAdsAlias; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  scr_string_t execution; 
  int v128; 
  const DObj *v129; 
  unsigned __int8 NextBoneIndex; 
  bool v131; 
  bool result; 
  centity_t **p_cent; 
  bool IsPlayingVehicleOccupancyAnims; 
  tmat33_t<vec3_t> *p_axis; 
  Weapon *v146; 
  const DObj *v162; 
  bool BoneOrientation; 
  bool v164; 
  int v165; 
  CgWeaponMap *v166; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v170; 
  centity_t *Entity; 
  const DObj *v172; 
  char v173; 
  CgHandler *v177; 
  CgHandler *v178; 
  CgHandler *Handler; 
  CgWeaponMap *v187; 
  bool IsUsingHybridScope; 
  int number; 
  const DObj *v190; 
  entityType_s eType; 
  CgWeaponMap *v192; 
  bool v193; 
  int v194; 
  char *fmt; 
  float fmta; 
  float *v207; 
  double v208; 
  double v209; 
  double v210; 
  double v211; 
  unsigned __int8 outBoneIndex[4]; 
  int handle; 
  bool v214; 
  BOOL v215; 
  float minSpread; 
  float maxSpread; 
  CgStatic *LocalClientStatics; 
  CgWeaponSystemMP *v219; 
  Weapon *r_weapon; 
  tmat33_t<vec3_t> *src; 
  scr_string_t v222[2]; 
  float *v223; 
  vec3_t v224; 
  vec3_t trBase; 
  entityState_t *v226; 
  __int64 v227; 
  vec3_t angles; 
  orientation_t orient; 
  centity_t *cent; 
  int v231; 
  char v232; 
  void *retaddr; 

  _RAX = &retaddr;
  v227 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v214 = isAlternate;
  r_weapon = (Weapon *)weapon;
  v22 = inflictorEnt;
  cent = inflictorEnt;
  v23 = this;
  v219 = this;
  src = &highPrecisionFireData->fireAxis;
  _RBX = outOrient;
  v223 = outAimSpreadAmount;
  _RSI = tracerStart;
  if ( !inflictorEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1274, ASSERT_TYPE_ASSERT, "(inflictorEnt)", (const char *)&queryFormat, "inflictorEnt") )
    __debugbreak();
  _R13 = NULL;
  *(_QWORD *)v222 = BG_WeaponDef(weapon, isAlternate);
  _R14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v23->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v23->m_localClientNum);
  v28 = DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring;
  if ( !DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled && _R14->clientNum == v22->nextState.number )
    CrashReport_TriggerNow();
  p_nextState = &v22->nextState;
  if ( (v22->flags & 1) == 0 )
    goto LABEL_25;
  v226 = &v22->nextState;
  if ( !BG_IsCharacterEntity(&v22->nextState) )
  {
    p_nextState = &v22->nextState;
LABEL_25:
    _R15 = NULL;
    LocalClientStatics = NULL;
    v226 = p_nextState;
    goto LABEL_14;
  }
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v22->nextState.clientNum);
  _R15 = CharacterInfo;
  LocalClientStatics = (CgStatic *)CharacterInfo;
  if ( CharacterInfo && !CharacterInfo->infoValid )
    goto LABEL_146;
LABEL_14:
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( isPlayerWeaponView )
  {
    _R13 = &_R14->predictedPlayerState;
    handle = hand + 2048;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0B519Ch]
      vmulss  xmm8, xmm0, cs:__real@3b808081
      vucomiss xmm9, dword ptr [r13+730h]
    }
    v215 = hand == -2048;
    BG_GetSpreadForWeapon(&_R14->predictedPlayerState, r_weapon, &minSpread, &maxSpread);
    CG_GetPlayerViewOrigin(v23->m_localClientNum, &_R14->predictedPlayerState, &_RBX->origin);
    v36 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    cent = (centity_t *)DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
        __debugbreak();
      v36 = (const dvar_t *)cent;
    }
    Dvar_CheckFrontendServerThread(v36);
    if ( LOBYTE(cent->pose.origin.Set_origin) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r13+744h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovss  xmm2, dword ptr [r14+0B519Ch]
        vcvtss2sd xmm2, xmm2, xmm2
      }
      LODWORD(fmt) = _R14->time;
      __asm
      {
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(17, "C: SimulateBulletFire_Orientation: Last frame spread scale: %.5f Aim spread scale ps: %.5f Time: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    }
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v23->m_localClientNum);
    if ( BG_IsThirdPersonMode(Instance, &_R14->predictedPlayerState) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14+7D314h]
        vmovss  xmm0, dword ptr [r14+7D310h]
        vmovss  dword ptr [rbp+0B0h+angles], xmm0
        vmovss  dword ptr [rbp+0B0h+angles+4], xmm1
        vmovss  dword ptr [rbp+0B0h+angles+8], xmm6
      }
      AngleVectors(&angles, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2]);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm4, dword ptr [rbx+4]
        vmovss  dword ptr [rsi+4], xmm4
        vmovss  xmm5, dword ptr [rbx+8]
        vmovss  dword ptr [rsi+8], xmm5
        vmovss  xmm3, cs:__real@42340000
        vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
        vaddss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rsi], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+10h]
        vaddss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rsi+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+14h]
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsi+8], xmm1
      }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->predictedPlayerState.eFlags, ACTIVE, 4u) )
      {
        __asm { vmovss  xmm2, cs:__real@c0200000 }
      }
      else
      {
        v56 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->predictedPlayerState.eFlags, ACTIVE, 3u);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2; max
          vmovss  xmm1, cs:__real@c2b40000; min
          vmovss  xmm0, dword ptr [r14+7D310h]; val
        }
        if ( v56 )
        {
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  xmm2, cs:__real@c0a00000 }
        }
        else
        {
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  xmm2, cs:__real@c1000000 }
        }
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3c360b61
          vmulss  xmm3, xmm1, cs:__real@41f00000
          vsubss  xmm2, xmm2, xmm3
        }
      }
      __asm
      {
        vmulss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+28h]
        vaddss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rsi+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+2Ch]
        vaddss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
      goto LABEL_130;
    }
    if ( _R14->renderingThirdPerson )
    {
      _RSI->v[0] = _RBX->origin.v[0];
      _RSI->v[1] = _RBX->origin.v[1];
      _RSI->v[2] = _RBX->origin.v[2];
      _R15 = (const characterInfo_t *)LocalClientStatics;
      if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1410, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      AngleVectors(&_R15->playerAngles, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2]);
      __asm
      {
        vmovss  xmm3, cs:__real@42340000
        vmulss  xmm0, xmm3, dword ptr [rbx+0Ch]
        vaddss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+10h]
        vaddss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rsi+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+14h]
        vaddss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
LABEL_131:
      if ( _R13 && v22->nextState.eType != ET_TURRET )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r13+730h]
          vcmpeqss xmm1, xmm0, xmm9
          vblendvps xmm6, xmm8, xmm6, xmm1
        }
        Handler = CgHandler::getHandler(v23->m_localClientNum);
        __asm { vmovaps xmm3, xmm6; aimSpreadScale }
        *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, _R13, r_weapon, *(float *)&_XMM3);
        _RAX = v223;
        __asm { vmovss  dword ptr [rax], xmm0 }
        result = 1;
        goto LABEL_147;
      }
      goto LABEL_88;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+49DF0h]
      vmovss  dword ptr [rbp+0B0h+angles], xmm0
      vmovss  xmm1, dword ptr [r14+49DF4h]
      vmovss  dword ptr [rbp+0B0h+angles+4], xmm1
      vmovss  dword ptr [rbp+0B0h+angles+8], xmm6
    }
    if ( TagPair::IsEmpty((TagPair *)&tagPair) )
    {
      _RSI->v[0] = _RBX->origin.v[0];
      _RSI->v[1] = _RBX->origin.v[1];
      _RSI->v[2] = _RBX->origin.v[2];
LABEL_38:
      AngleVectors(&angles, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2]);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  xmm4, dword ptr [rbx+0Ch]
        vmovss  xmm3, dword ptr [rbx+14h]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm2, xmm9
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3b03126f
      }
      if ( !v86 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+49DF4h]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovss  xmm1, dword ptr [r14+49DF0h]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovaps xmm2, xmm3
          vcvtss2sd xmm2, xmm3, xmm3
          vmovss  xmm3, dword ptr [rbx+10h]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+1B0h+var_160], xmm0
          vmovsd  [rsp+1B0h+var_168], xmm1
          vmovsd  [rsp+1B0h+var_170], xmm2
          vmovsd  [rsp+1B0h+var_178], xmm3
          vmovsd  [rsp+1B0h+var_180], xmm4
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( outOrient->axis[0] ))", "%s\n\tCgWeaponSystemMP::SimulateBulletFire_Orientation - Firing dir is not normalized. Forward: %f %f %f, Gun Pitch: %f Gun Yaw: %f", "Vec3IsNormalized( outOrient->axis[0] )", *(double *)&v207, v208, v209, v210, v211) )
          __debugbreak();
      }
      Vec3NormalizeFast(_RBX->axis.m);
      Vec3NormalizeFast(&_RBX->axis.m[1]);
      Vec3NormalizeFast(&_RBX->axis.m[2]);
      goto LABEL_130;
    }
    v71 = handle;
    ClientDObj = Com_GetClientDObj(handle, v23->m_localClientNum);
    outBoneIndex[0] = -2;
    handle = 0;
    if ( ClientDObj && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, ClientDObj, (scr_string_t *)&handle, outBoneIndex) && CG_Entity_GetBoneOrientation(v23->m_localClientNum, v71, outBoneIndex[0], &orient) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0B0h+orient.origin]
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, dword ptr [rbp+0B0h+orient.origin+4]
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm0, dword ptr [rbp+0B0h+orient.origin+8]
        vmovss  dword ptr [rsi+8], xmm0
      }
      goto LABEL_38;
    }
LABEL_146:
    result = 0;
    goto LABEL_147;
  }
  v103 = &v22->nextState;
  if ( !BG_IsCharacterEntity(v103) )
  {
    if ( cent->nextState.eType != ET_TURRET )
    {
      if ( BG_IsVehicleEntity(v103) )
      {
        v187 = CgWeaponMap::GetInstance((const LocalClientNum_t)v23->m_localClientNum);
        IsUsingHybridScope = BG_IsUsingHybridScope(v187, NULL, r_weapon);
        *(double *)&_XMM0 = BG_ADSSpread(r_weapon, 0, IsUsingHybridScope, 0);
        __asm
        {
          vmovss  [rsp+1B0h+minSpread], xmm0
          vmovss  [rsp+1B0h+maxSpread], xmm0
        }
        _ER13 = 1;
        __asm { vxorps  xmm8, xmm8, xmm8 }
        number = v103->number;
        v190 = Com_GetClientDObj(number, v23->m_localClientNum);
        outBoneIndex[0] = -2;
        LODWORD(src) = 0;
        if ( v190 && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v190, (scr_string_t *)&src, outBoneIndex) && CG_Entity_GetBoneOrientation(v23->m_localClientNum, number, outBoneIndex[0], _RBX) )
        {
          _RSI->v[0] = _RBX->origin.v[0];
          _RSI->v[1] = _RBX->origin.v[1];
          _RSI->v[2] = _RBX->origin.v[2];
          _R15 = (const characterInfo_t *)LocalClientStatics;
          goto LABEL_89;
        }
      }
      else
      {
        eType = cent->nextState.eType;
        if ( eType >= ET_EVENTS )
        {
          if ( eType != (ET_PRIMARY_LIGHT|0x40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1639, ASSERT_TYPE_ASSERT, "((inflictorEnt->nextState.eType - ET_EVENTS) == EV_FIRE_RICOCHET)", (const char *)&queryFormat, "(inflictorEnt->nextState.eType - ET_EVENTS) == EV_FIRE_RICOCHET") )
            __debugbreak();
          v192 = CgWeaponMap::GetInstance((const LocalClientNum_t)v23->m_localClientNum);
          v146 = r_weapon;
          v193 = BG_IsUsingHybridScope(v192, NULL, r_weapon);
          *(double *)&_XMM0 = BG_ADSSpread(r_weapon, 0, v193, 0);
          __asm
          {
            vmovss  [rsp+1B0h+minSpread], xmm0
            vmovss  [rsp+1B0h+maxSpread], xmm0
          }
          _ER13 = 1;
          __asm { vxorps  xmm8, xmm8, xmm8 }
          v194 = truncate_cast<int,unsigned int>(cent->nextState.eventParm);
          ByteToDir(v194, _RBX->axis.m);
          AxisRandomAroundForward(_RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2]);
          CG_GetPoseOrigin(&cent->pose, &_RBX->origin);
          _RSI->v[0] = _RBX->origin.v[0];
          _RSI->v[1] = _RBX->origin.v[1];
          _RSI->v[2] = _RBX->origin.v[2];
          _R15 = (const characterInfo_t *)LocalClientStatics;
          goto LABEL_90;
        }
        Com_PrintError(14, "Unknown eType %i in CG_DrawBulletImpacts()\n", (unsigned int)eType);
      }
      goto LABEL_146;
    }
    _RAX = *(_QWORD *)v222;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0C6Ch]
      vmovss  [rsp+1B0h+minSpread], xmm0
      vmovss  xmm1, dword ptr [rax+0C6Ch]
      vmovss  [rsp+1B0h+maxSpread], xmm1
      vmovaps xmm8, xmm9
    }
    v215 = 0;
    LOBYTE(handle) = 0;
    __asm
    {
      vmovss  dword ptr [rbp+0B0h+orient.origin], xmm6
      vmovss  dword ptr [rbp+0B0h+orient.origin+4], xmm6
      vmovss  dword ptr [rbp+0B0h+orient.origin+8], xmm6
    }
    AxisCopy(&identityMatrix33, &orient.axis);
    LODWORD(src) = v103->number;
    v162 = Com_GetClientDObj((int)src, v23->m_localClientNum);
    outBoneIndex[0] = -2;
    v222[0] = 0;
    if ( v162 && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v162, v222, outBoneIndex) )
    {
      BoneOrientation = CG_Entity_GetBoneOrientation(v23->m_localClientNum, (int)src, outBoneIndex[0], &orient);
      handle = (unsigned __int8)handle;
      v164 = !BoneOrientation;
      v165 = (unsigned __int8)handle;
      if ( !v164 )
        v165 = 1;
      handle = v165;
    }
    if ( isPlayerView )
    {
      v166 = CgWeaponMap::GetInstance((const LocalClientNum_t)v23->m_localClientNum);
      _R13 = &_R14->predictedPlayerState;
      CG_GetPlayerViewOrigin(v23->m_localClientNum, &_R14->predictedPlayerState, &_RBX->origin);
      if ( BG_IsThirdPersonMode(v166, &_R14->predictedPlayerState) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r14+7D314h]
          vmovss  xmm0, dword ptr [r14+7D310h]
          vmovss  dword ptr [rbp+0B0h+angles], xmm0
          vmovss  dword ptr [rbp+0B0h+angles+4], xmm1
          vmovss  dword ptr [rbp+0B0h+angles+8], xmm6
        }
        AngleVectors(&angles, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2]);
      }
      else
      {
        if ( _R14 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !v166 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        ViewmodelWeapon = BG_GetViewmodelWeapon(v166, &_R14->predictedPlayerState);
        v170 = BG_WeaponDef(ViewmodelWeapon, 0);
        if ( v170->weapClass == WEAPCLASS_TURRET && v170->useTurretViewmodelAnims )
        {
          if ( _R14->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1560, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
            __debugbreak();
          Entity = CG_GetEntity((const LocalClientNum_t)_R14->localClientNum, _R14->predictedPlayerState.viewlocked_entNum);
          v172 = Com_GetClientDObj(Entity->nextState.number, _R14->localClientNum);
          if ( !v172 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF1430, 1147i64, (unsigned int)Entity->nextState.number);
          if ( !CG_DObjGetWorldTagMatrix(&Entity->pose, v172, scr_const.tag_player, &_RBX->axis, &_RBX->origin) )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EBDF8, 1148i64);
          v23 = v219;
        }
        else
        {
          v177 = CgHandler::getHandler(v23->m_localClientNum);
          BG_GetPlayerViewDirection(&_R14->predictedPlayerState, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2], v177, 0);
        }
      }
    }
    else
    {
      if ( (_R14->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 || _R14->predictedPlayerState.linkEnt != v103->number )
      {
        v173 = handle;
        if ( !(_BYTE)handle )
          goto LABEL_146;
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0B0h+orient.origin]
          vmovups ymmword ptr [rbx], ymm0
          vmovups xmm1, xmmword ptr [rbp+0B0h+orient.axis+14h]
          vmovups xmmword ptr [rbx+20h], xmm1
        }
LABEL_121:
        v22 = cent;
        if ( v173 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0B0h+orient.origin]
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm1, dword ptr [rbp+0B0h+orient.origin+4]
            vmovss  dword ptr [rsi+4], xmm1
            vmovss  xmm0, dword ptr [rbp+0B0h+orient.origin+8]
            vmovss  dword ptr [rsi+8], xmm0
          }
        }
        else
        {
          _RSI->v[0] = _RBX->origin.v[0];
          _RSI->v[1] = _RBX->origin.v[1];
          _RSI->v[2] = _RBX->origin.v[2];
        }
LABEL_130:
        _R15 = (const characterInfo_t *)LocalClientStatics;
        goto LABEL_131;
      }
      v178 = CgHandler::getHandler(v23->m_localClientNum);
      BG_GetPlayerViewDirection(&_R14->predictedPlayerState, _RBX->axis.m, &_RBX->axis.m[1], &_RBX->axis.m[2], v178, 0);
      CG_GetPlayerViewOrigin(v23->m_localClientNum, &_R14->predictedPlayerState, &_RBX->origin);
    }
    v173 = handle;
    goto LABEL_121;
  }
  v104 = cent;
  CG_WeaponsMP_GuessSpreadForWeapon((const LocalClientNum_t)v23->m_localClientNum, _R15, cent, r_weapon, v214, &minSpread, &maxSpread);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( _R15->usingAnimState )
    goto LABEL_61;
  if ( !v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v103->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) )
  {
    v215 = 1;
    _R15 = (const characterInfo_t *)LocalClientStatics;
    goto LABEL_62;
  }
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(v103);
    Anim = BG_PlayerASM_GetAnim(v103, MOVEMENT);
    IsAdsAlias = BG_PlayerASM_IsAdsAlias(Anim, Animset);
  }
  else
  {
    SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(v103);
    LegsAnimation = BG_AnimationMP_GetLegsAnimation(v103);
    IsAdsAlias = BG_IsAdsAnim(LegsAnimation, SuitAnimIndex);
  }
  v23 = v219;
  if ( !IsAdsAlias )
  {
LABEL_61:
    v215 = 0;
  }
  else
  {
    v215 = 1;
    _R15 = (const characterInfo_t *)LocalClientStatics;
  }
LABEL_62:
  Trajectory_GetTrBase(&v104->nextState.lerp.pos, &trBase);
  Trajectory_GetTrBase(&v104->prevState.pos, &v224);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0B0h+trBase]
    vsubss  xmm3, xmm0, dword ptr [rbp+0B0h+var_108]
    vmovss  xmm1, dword ptr [rbp+0B0h+trBase+4]
    vsubss  xmm4, xmm1, dword ptr [rbp+0B0h+var_108+4]
    vmovss  xmm0, dword ptr [rbp+0B0h+trBase+8]
    vsubss  xmm5, xmm0, dword ptr [rbp+0B0h+var_108+8]
  }
  if ( _R14->nextSnap->serverTime != _R14->snap->serverTime )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
      vmovss  xmm0, cs:__real@447a0000
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm3, xmm2, xmm3
      vmulss  xmm4, xmm2, xmm4
      vmulss  xmm5, xmm2, xmm5
    }
  }
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vminss  xmm3, xmm0, cs:__real@437f0000
    vmulss  xmm8, xmm3, cs:__real@3b808081
  }
  execution = _R15->execution;
  v222[0] = execution;
  if ( execution == 255 && !calculateExactOrigin )
  {
    CgWeaponSystemMP::CalcMuzzlePoint(v23, v103->number, tagPair, 0, &_RBX->origin);
    goto LABEL_76;
  }
  v128 = v103->number;
  v129 = Com_GetClientDObj(v128, v23->m_localClientNum);
  if ( !v129 || (outBoneIndex[0] = -2, handle = 0, cent = (centity_t *)0xD0000000Ci64, v231 = 11, !TagPair::GetTagNameAndBoneIndexForCharacter((TagPair *)&tagPair, v129, _R15, (const CharacterModelType *)&cent, 3, (scr_string_t *)&handle, outBoneIndex)) )
  {
LABEL_71:
    v131 = 0;
LABEL_72:
    memset(&v224, 0, sizeof(v224));
    memset(&trBase, 0, sizeof(trBase));
    result = v131;
    goto LABEL_147;
  }
  if ( hand )
  {
    NextBoneIndex = DObjGetNextBoneIndex(v129, (scr_string_t)handle, outBoneIndex[0]);
    outBoneIndex[0] = NextBoneIndex;
    if ( NextBoneIndex == 0xFF )
      goto LABEL_71;
  }
  else
  {
    NextBoneIndex = outBoneIndex[0];
  }
  if ( !CG_Entity_GetBoneOrientation(v23->m_localClientNum, v128, NextBoneIndex, _RBX) )
    goto LABEL_71;
  execution = v222[0];
LABEL_76:
  _RSI->v[0] = _RBX->origin.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
  if ( execution != 255 )
  {
    *(double *)&_XMM0 = BG_ADSSpread(r_weapon, 0, 0, 0);
    _RAX = v223;
    __asm { vmovss  dword ptr [rax], xmm0 }
    v131 = 1;
    goto LABEL_72;
  }
  if ( (*(_BYTE *)&v104->nextState.animInfo.selectAnim & 1) != 0 )
  {
    if ( v104->nextState.lerp.u.anonymous.data[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1490, ASSERT_TYPE_ASSERT, "(!isUsingArbitraryUp)", "%s\n\tScripted agent entity fired a weapon while in arbitrary-up volume.  This is not yet supported.", "!isUsingArbitraryUp") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r15+9C0h]
      vmovss  dword ptr [rbp+0B0h+cent], xmm0
      vmovss  xmm1, dword ptr [r15+9C4h]
      vmovss  dword ptr [rbp+0B0h+cent+4], xmm1
      vmovss  xmm0, dword ptr [r15+9C8h]
      vmovss  [rbp+0B0h+var_90], xmm0
      vaddss  xmm0, xmm1, dword ptr [r15+0AD0h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rbp+0B0h+cent+4], xmm0
      vmovss  xmm0, dword ptr [rbp+0B0h+cent]
      vaddss  xmm0, xmm0, dword ptr [r15+0AD4h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rbp+0B0h+cent], xmm0 }
    p_cent = &cent;
  }
  else
  {
    IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(_R15);
    p_cent = (centity_t **)&_R15->vehicleAnimation;
    if ( !IsPlayingVehicleOccupancyAnims )
      p_cent = (centity_t **)&_R15->playerAnglesWorld;
  }
  p_axis = &_RBX->axis;
  AngleVectors((const vec3_t *)p_cent, p_axis->m, &p_axis->m[1], &p_axis->m[2]);
  if ( src )
    MatrixCopy33(src, p_axis);
  memset(&v224, 0, sizeof(v224));
  memset(&trBase, 0, sizeof(trBase));
LABEL_88:
  _ER13 = v215;
LABEL_89:
  v146 = r_weapon;
LABEL_90:
  if ( BG_IsCharacterEntity(v226) )
  {
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1682, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    _EAX = 0;
    __asm
    {
      vmovd   xmm1, eax
      vmovd   xmm0, r13d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm9, xmm6, xmm2
      vcmpeqss xmm0, xmm7, xmm9
      vblendvps xmm6, xmm8, xmm6, xmm0
    }
    *(double *)&_XMM0 = BG_ADSSpread(v146, v214, _R15->hybridScopeState != 0, _R15->usingNVG != 0);
    __asm
    {
      vmovss  dword ptr [rsp+1B0h+fmt], xmm6
      vmovaps xmm3, xmm0; adsSpread
      vmovss  xmm2, [rsp+1B0h+maxSpread]; maxSpread
      vmovss  xmm1, [rsp+1B0h+minSpread]; minSpread
      vmovaps xmm0, xmm7; weaponPosFrac
    }
    *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
    _RAX = v223;
    __asm { vmovss  dword ptr [rax], xmm0 }
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+1B0h+maxSpread]
      vsubss  xmm1, xmm0, [rsp+1B0h+minSpread]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm3, xmm2, [rsp+1B0h+minSpread]
    }
    _RAX = v223;
    __asm { vmovss  dword ptr [rax], xmm3 }
    result = 1;
  }
LABEL_147:
  _R11 = &v232;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return result;
}

/*
==============
CgWeaponSystemMP::SimulateBulletFire_UseEventBasedHitEffect
==============
*/
_BOOL8 CgWeaponSystemMP::SimulateBulletFire_UseEventBasedHitEffect(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, int event)
{
  int v7; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  _BOOL8 result; 
  int v12; 

  if ( (unsigned int)targetEntityNum >= 0x800 )
  {
    v12 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( targetEntityNum ) < (unsigned)( ( 2048 ) )", "targetEntityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", targetEntityNum, v12) )
      __debugbreak();
  }
  result = 0;
  if ( (unsigned int)(event - 94) > 4 || (v7 = 27, !_bittest(&v7, event - 94)) )
  {
    if ( event != 212 && event != 214 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, targetEntityNum);
      if ( (Entity->flags & 1) != 0 )
      {
        p_nextState = &Entity->nextState;
        if ( BG_IsCharacterEntity(&Entity->nextState) || BG_IsPlayerOrAgentCorpseEntity(p_nextState) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
CgWeaponSystemMP::SpawnBulletHitmarker
==============
*/
void CgWeaponSystemMP::SpawnBulletHitmarker(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, const vec3_t *position, const unsigned __int8 boneIndex, unsigned int impactEffects)
{
  LocalClientNum_t *p_m_localClientNum; 
  const DObj *ClientDObj; 
  centity_t *Entity; 
  centity_t *v11; 
  unsigned int eType; 
  int v13; 
  bool v14; 
  bool IsVehicleEntity; 
  entityType_s v16; 
  const char *BoneName; 
  cg_t *LocalClientGlobals; 
  bool IsCharacterEntity; 

  p_m_localClientNum = &this->m_localClientNum;
  ClientDObj = Com_GetClientDObj(targetEntityNum, this->m_localClientNum);
  if ( ClientDObj )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)*p_m_localClientNum, targetEntityNum);
    v11 = CG_GetEntity((const LocalClientNum_t)*p_m_localClientNum, sourceEntityNum);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)*p_m_localClientNum);
    IsCharacterEntity = BG_IsCharacterEntity(&Entity->nextState);
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es", LocalClientGlobals) )
      __debugbreak();
    eType = (unsigned __int16)Entity->nextState.eType;
    v14 = 0;
    if ( (unsigned __int16)eType <= 0x15u )
    {
      v13 = 2359300;
      if ( _bittest(&v13, eType) )
        v14 = 1;
    }
    IsVehicleEntity = BG_IsVehicleEntity(&Entity->nextState);
    v16 = Entity->nextState.eType;
    if ( (v11->flags & 1) != 0 )
    {
      if ( v11 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((v11->nextState.eType - 1) & 0xFFEF) == 0 && CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, sourceEntityNum) && (IsCharacterEntity || v14 || IsVehicleEntity || v16 == ET_TURRET) )
      {
        BoneName = DObjGetBoneName(ClientDObj, boneIndex);
        LUI_AddBulletHitMarker(p_m_localClientNum, targetEntityNum, BoneName, position, (impactEffects & 0x80) != 0, (impactEffects & 0x200) != 0);
      }
    }
  }
}

/*
==============
CgWeaponSystemMP::TouchHandModel
==============
*/
void CgWeaponSystemMP::TouchHandModel(CgWeaponSystemMP *this)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  ClConfigStrings *ClConfigStrings; 
  __int64 v5; 
  int clientNum; 
  const char *ClientModelFromServerIndex; 
  const characterInfo_t *CharacterInfo; 
  const clientInfo_t *v9; 
  int v10; 
  const XModel *v11; 
  bool outIsCustomModel; 
  bool outIsModelLoaded; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.viewmodelIndex > 0 )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v5 = (__int64)ClConfigStrings->GetModelString(ClConfigStrings, LocalClientGlobals->predictedPlayerState.viewmodelIndex);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    ClientModelFromServerIndex = (const char *)v5;
    if ( clientNum < cls.maxClients )
    {
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1091, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      v9 = LocalClientStatics->GetClientInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1094, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      ClientModelFromServerIndex = CG_CustomizationMP_GetClientModelFromServerIndex((const LocalClientNum_t)this->m_localClientNum, v9, CharacterInfo, CUSTOMIZATION_TYPE_VIEWHANDS, LocalClientGlobals->predictedPlayerState.viewmodelIndex, &outIsModelLoaded, &outIsCustomModel);
    }
    v10 = -CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
    v11 = R_RegisterModel(ClientModelFromServerIndex);
    Stream_TouchXModel(v11, (StreamImageMip)(v10 + 4));
  }
}

/*
==============
CgWeaponSystemMP::TouchWeaponAttachModels
==============
*/
void CgWeaponSystemMP::TouchWeaponAttachModels(CgWeaponSystemMP *this)
{
  ;
}

/*
==============
CgWeaponSystemMP::UpdateBulletFire
==============
*/
void CgWeaponSystemMP::UpdateBulletFire(CgWeaponSystemMP *this, int eventId, centity_t *inflictorEnt, const int knownHitClientNum, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const int fireSequenceIndex, const CgEventLodData *optionalEventLod, const CgFireEventHighPrecisionData *highPrecisionFireData)
{
  const dvar_t *v17; 
  __int64 m_localClientNum; 
  __int64 v19; 
  TagPair v20; 
  __int64 v21; 
  __int64 v22; 

  if ( CG_Weapons_IsBulletWeapon(weapon, isAlternate) && !BG_IsBallWeapon(weapon) )
    CgWeaponSystem::SimulateBulletFire(this, eventId, inflictorEnt, knownHitClientNum, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, fireSequenceIndex, optionalEventLod, highPrecisionFireData);
  v17 = DVARINT_bg_debugRewindPositions;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer )
  {
    m_localClientNum = this->m_localClientNum;
    if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v22) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
      LODWORD(v21) = 2;
      v20.m_primaryTagName = this->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v20, v21, v22) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgDrawSystem::ms_allocatedCount )
    {
      v20.m_primaryTagName = CgDrawSystem::ms_allocatedCount;
      LODWORD(v19) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( !CgDrawSystem::ms_drawSystemArray[m_localClientNum] )
    {
      v20.m_primaryTagName = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v20) )
        __debugbreak();
    }
    CgDrawSystemMP::SaveDebugCharacterPoses((CgDrawSystemMP *)CgDrawSystem::ms_drawSystemArray[m_localClientNum]);
  }
  CG_LatencyTestMP_FireWeapon(this->m_localClientNum, inflictorEnt->nextState.clientNum);
}

/*
==============
CgWeaponSystemMP::UpdateMuzzleFlash
==============
*/
void CgWeaponSystemMP::UpdateMuzzleFlash(CgWeaponSystemMP *this, centity_t *cent, const Weapon *weapon, bool isAlternate, int bViewModel, int bDrawGun, const CgEventLodData *optionalEventLodData)
{
  const Weapon *v7; 
  CgWeaponSystemMP *v9; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  BOOL v14; 
  BOOL v15; 
  const characterInfo_t *CharacterInfo; 
  int v17; 
  bool ShouldPerformEvent; 
  bool v19; 
  int i; 
  int v21; 
  int v22; 
  bool isFirst; 
  int WeaponLastChamberFired; 
  bool inADS; 
  const TagPair *WeaponFlashTagname; 
  bool v27; 
  const TagPair *v28; 
  TagPair *v29; 
  int number; 
  LocalClientNum_t m_localClientNum; 
  const cg_t *v32; 
  DObj *ClientDObj; 
  const DObj *v34; 
  int entnum; 
  const characterInfo_t *v36; 
  int flags; 
  unsigned __int8 outBoneIndex[3]; 
  scr_string_t outTagName; 
  playerState_s *ps; 
  Weapon *r_weapon; 
  TagPair v43; 
  FXRegisteredDef fxDef; 
  CgWeaponSystemMP *v45; 
  CgEventLodData *lodData; 
  __int64 v47; 
  TagPair result; 
  TagPair v49; 
  TagPair v50; 
  bitarray<64> r_perks; 
  CharacterModelType modelTypesToSearch[6]; 

  v47 = -2i64;
  v7 = weapon;
  r_weapon = (Weapon *)weapon;
  v9 = this;
  v45 = this;
  lodData = (CgEventLodData *)optionalEventLodData;
  Sys_ProfBeginNamedEvent(0xFF808080, "CgWeaponSystemMP::UpdateMuzzleFlash");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v9->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1741, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  v14 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v9->m_localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v14 = 0;
  }
  v15 = CG_IsPlayerEntityNumber(p_predictedPlayerState, cent->nextState.number) && !v14;
  if ( (cent->flags & 1) != 0 && BG_IsCharacterEntity(&cent->nextState) && (CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum)) != NULL && CharacterInfo->infoValid )
    r_perks = CharacterInfo->perks;
  else
    r_perks = 0i64;
  if ( (cent->flags & 0x14) != 0 )
  {
    v17 = bViewModel;
    if ( !v15 || bViewModel )
    {
      ShouldPerformEvent = CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)v9->m_localClientNum, CG_EVENT_LOD_TYPE_PLAYER_MUZZLE_FLASH_VFX, lodData);
      v19 = ShouldPerformEvent;
      if ( bViewModel && !ShouldPerformEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1759, ASSERT_TYPE_ASSERT, "(!bViewModel || shouldPerformMuzzleFlashLOD)", (const char *)&queryFormat, "!bViewModel || shouldPerformMuzzleFlashLOD") )
        __debugbreak();
      if ( !bDrawGun )
        goto LABEL_59;
      if ( v19 )
      {
        for ( i = 0; i < 2; ++i )
        {
          v21 = 16;
          if ( !i )
            v21 = 4;
          if ( (v21 & cent->flags) != 0 )
          {
            v22 = 32;
            if ( !i )
              v22 = 8;
            isFirst = (v22 & cent->flags) != 0;
            if ( v17 )
            {
              WeaponLastChamberFired = PM_GetWeaponLastChamberFired(ps, v7, isAlternate, (PlayerHandIndex)i);
              inADS = BG_InADS(ps);
              WeaponFlashTagname = BG_GetWeaponFlashTagname(&result, v7, isAlternate, WeaponLastChamberFired);
              CG_WeaponsMP_WeaponFlash((const LocalClientNum_t)v9->m_localClientNum, &r_perks, i + 2048, v7, isAlternate, 1, *WeaponFlashTagname, inADS, isFirst);
            }
            else if ( i )
            {
              v29 = BG_GetWeaponFlashTagname(&v50, v7, isAlternate, 0);
              number = cent->nextState.number;
              m_localClientNum = v9->m_localClientNum;
              v43 = *v29;
              fxDef.m_particleSystemDef = NULL;
              fxDef.m_particleSystemDef = BG_WorldFlashEffect(r_perks, r_weapon, isAlternate, isFirst).particleSystemDef;
              if ( fxDef.m_particleSystemDef )
              {
                outBoneIndex[0] = -2;
                outTagName = 0;
                v32 = CG_GetLocalClientGlobals(m_localClientNum);
                if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 435, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                  __debugbreak();
                ClientDObj = Com_GetClientDObj(number, m_localClientNum);
                v34 = ClientDObj;
                if ( ClientDObj )
                {
                  entnum = ClientDObj->entnum;
                  if ( v32->HasCharacterInfo((cg_t *)v32, entnum - 1) )
                    v36 = CG_GetCharacterInfo(v32, entnum - 1);
                  else
                    v36 = NULL;
                }
                else
                {
                  v36 = NULL;
                }
                if ( v36 )
                {
                  modelTypesToSearch[0] = CHAR_MODEL_WEAPON_HELD;
                  modelTypesToSearch[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
                  modelTypesToSearch[2] = CHAR_MODEL_WEAPON_EXECUTION;
                  TagPair::GetTagNameAndBoneIndexForCharacter(&v43, v34, v36, modelTypesToSearch, 3, &outTagName, outBoneIndex);
                }
                else
                {
                  TagPair::GetTagNameAndBoneIndex(&v43, v34, &outTagName, outBoneIndex);
                }
                CG_PlayBoltedEffectOnSecondTag(m_localClientNum, &fxDef, number, outTagName);
              }
              v7 = r_weapon;
              v9 = v45;
            }
            else
            {
              v27 = BG_InADS(ps);
              v28 = BG_GetWeaponFlashTagname(&v49, v7, isAlternate, 0);
              CG_WeaponsMP_WeaponFlash((const LocalClientNum_t)v9->m_localClientNum, &r_perks, cent->nextState.number, v7, isAlternate, 0, *v28, v27, isFirst);
            }
          }
          v17 = bViewModel;
        }
      }
      if ( CG_EventLod_EventDisabledDueToBudget((const LocalClientNum_t)v9->m_localClientNum, CG_EVENT_LOD_TYPE_PLAYER_MUZZLE_FLASH_VFX, lodData) )
      {
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(!bViewModel)", (const char *)&queryFormat, "!bViewModel") )
          __debugbreak();
        flags = cent->flags;
        if ( (flags & 0x40) != 0 )
          cent->flags = flags & 0xFFFFFF83;
        else
          cent->flags = flags | 0x40;
      }
      else
      {
LABEL_59:
        cent->flags &= 0xFFFFFF83;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CgWeaponSystemMP::UpdateMuzzleFlashNonPlayer
==============
*/
void CgWeaponSystemMP::UpdateMuzzleFlashNonPlayer(CgWeaponSystemMP *this, const entityState_t *ent, const TagPair tagPair, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  cg_t *LocalClientGlobals; 
  int eType; 
  centity_t *Entity; 
  int v13; 
  FxCombinedDef v14; 
  LocalClientNum_t v15; 
  cg_t *v16; 
  bool v17; 
  __int64 m_localClientNum; 
  CgVehicleSystemMP *v19; 
  bool v22; 
  __int64 bViewFlash; 
  TagPair flashTagPair; 
  __int64 inADS; 
  __int64 isFirst; 
  bitarray<64> perks; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> dir; 

  perks = 0i64;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1813, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  eType = ent->eType;
  if ( eType == 11 )
  {
    v22 = isPlayerView && BG_InADS(&LocalClientGlobals->predictedPlayerState);
    CG_WeaponsMP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, &perks, ent->number, weapon, isAlternate, isPlayerView, tagPair, v22, 0);
  }
  else if ( eType == 12 )
  {
    v17 = isPlayerView && BG_InADS(&LocalClientGlobals->predictedPlayerState);
    CG_WeaponsMP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, &perks, ent->number, weapon, isAlternate, 0, tagPair, v17, 0);
    CG_EjectWeaponBrass(this->m_localClientNum, ent, 47, isAlternate);
    if ( !CgWeaponSystem::ClientViewLockedOnTurret(this, ent->number) )
    {
      m_localClientNum = this->m_localClientNum;
      if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
      {
        LODWORD(isFirst) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
        LODWORD(inADS) = 2;
        flashTagPair.m_primaryTagName = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", flashTagPair, inADS, isFirst) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
      {
        flashTagPair.m_primaryTagName = CgVehicleSystem::ms_allocatedCount;
        LODWORD(bViewFlash) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", bViewFlash, flashTagPair) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum] )
      {
        flashTagPair.m_primaryTagName = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", flashTagPair) )
          __debugbreak();
      }
      v19 = (CgVehicleSystemMP *)CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum];
      _RBX = DVARFLT_heli_barrelRotation;
      if ( !DVARFLT_heli_barrelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelRotation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm2, dword ptr [rbx+28h]; rotation }
      CgVehicleSystemMP::IncTurretBarrelRoll(v19, ent->number, *(float *)&_XMM2);
    }
  }
  else if ( (__int16)eType >= 29 && eType == 74 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ent->number);
    v13 = truncate_cast<int,unsigned int>(ent->eventParm);
    ByteToDir(v13, dir.m);
    AxisRandomAroundForward(dir.m, &dir.m[1], &dir.m[2]);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v14.particleSystemDef = BG_WorldFlashEffect(perks, weapon, isAlternate, 0).particleSystemDef;
    if ( v14.particleSystemDef )
    {
      v15 = this->m_localClientNum;
      perks = (bitarray<64>)v14.particleSystemDef;
      v16 = CG_GetLocalClientGlobals(v15);
      FX_PlayOrientedEffect(this->m_localClientNum, (const FXRegisteredDef *)&perks, v16->time, &outOrigin, &dir);
    }
  }
}

/*
==============
CgWeaponSystemMP::UpdateWeaponAttachModels
==============
*/
__int64 CgWeaponSystemMP::UpdateWeaponAttachModels(CgWeaponSystemMP *this)
{
  return 0i64;
}

/*
==============
CgWeaponSystemMP::UpdateWeaponPossession
==============
*/
void CgWeaponSystemMP::UpdateWeaponPossession(CgWeaponSystemMP *this, playerState_s *ps)
{
  __int64 m_localClientNum; 
  CgWeaponMap *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  bool v8; 
  int v12; 
  int time; 
  CgHandler *Handler; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[m_localClientNum];
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, ps);
  v7 = BG_UsingAlternate(ps);
  if ( BG_ShouldTakeWeaponWhenEmpty(v5, ps, CurrentWeaponForPlayer, v7) && BG_WeaponBothClipEmpty(v5, ps) )
  {
    v8 = BG_UsingAlternate(ps);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v8);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v12 = 0;
    while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v12].ammoType, &r_ammo2) )
    {
      if ( (unsigned int)++v12 >= 0xF )
        goto LABEL_21;
    }
    if ( (playerState_s *)((char *)ps + 68 * v12) == (playerState_s *)-1912i64 || !ps->weapCommon.ammoNotInClip[v12].ammoCount )
    {
LABEL_21:
      if ( !BG_WeapHasDetonator(CurrentWeaponForPlayer, 0) )
      {
        time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
        Handler = CgHandler::getHandler(this->m_localClientNum);
        BG_TakePlayerWeapon(v5, ps, Handler, CurrentWeaponForPlayer, time);
        CgWeaponSystem::OutOfAmmoChange(this, 1);
      }
    }
  }
}

