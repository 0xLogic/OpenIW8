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
  __int128 v22; 
  __int128 v23; 
  int v24; 
  int v25; 
  centity_t *Entity; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v31; 
  const dvar_t *v35; 
  vec3_t v37; 
  __int128 v38; 
  __int128 v39; 

  v24 = targetEntityNum;
  v25 = sourceEntityNum;
  if ( !forceClientSideHandling && this->SimulateBulletFire_UseEventBasedHitEffect(this, sourceEntityNum, targetEntityNum, event) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v24);
    if ( Entity && (Entity->flags & 1) != 0 && BG_IsPlayerOrAgentCorpseEntity(&Entity->nextState) || !CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)this->m_localClientNum, CG_EVENT_LOD_TYPE_BULLET_HIT_DETAIL_EXIT_TRACE, optionalEventLodData) )
    {
      v39 = v22;
      v38 = v23;
      if ( (impactEffects & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2206, ASSERT_TYPE_ASSERT, "( ( !(impactEffects & IMPACTEFFECT_EXIT) ) )", "( impactEffects ) = %i", impactEffects) )
        __debugbreak();
      v28 = position->v[0] - startPos->v[0];
      v30 = LODWORD(position->v[1]);
      v29 = position->v[1] - startPos->v[1];
      v31 = position->v[2] - startPos->v[2];
      *(float *)&v30 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v31 * v31));
      _XMM4 = v30;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
      }
      v37.v[0] = v28 * (float)(1.0 / *(float *)&_XMM0);
      v37.v[1] = v29 * (float)(1.0 / *(float *)&_XMM0);
      v37.v[2] = v31 * (float)(1.0 / *(float *)&_XMM0);
      CgWeaponSystemMP::BulletHitEvent_Internal(this, v25, v24, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, &v37, surfType, event, impactEffects | 4, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
    }
    else
    {
      CgWeaponSystemMP::BulletHitEvent_SimulateExit(this, v25, v24, targetScriptableInstanceIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitImpactDelayOverride, hitArmorType, hitmarkerType, optionalEventLodData);
    }
  }
  v35 = DVARBOOL_ui_use_per_bullet_hitmarkers;
  if ( !DVARBOOL_ui_use_per_bullet_hitmarkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_use_per_bullet_hitmarkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled )
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
  __int32 v19; 
  int v20; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned int NumHits; 
  int RaycastHitRef; 
  int EntityNum; 
  unsigned __int16 v26; 
  double RaycastHitFraction; 
  const Physics_DetailHitData *DetailHitData; 
  const Physics_DetailHitData *v29; 
  const DObj *ClientDObj; 
  int hitContents; 
  vec3_t *v32; 
  vec3_t *v33; 
  unsigned __int8 inOutIndex; 
  bool v35; 
  unsigned int targetScriptableIndex; 
  int sourceEntityNuma; 
  int modelIndex; 
  CgEventLodData *v39; 
  vec3_t *normal; 
  vec3_t *v41; 
  vec3_t *v42; 
  Weapon *v43; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v45; 
  vec3_t start; 
  vec3_t end; 
  vec3_t pos; 

  v45 = -2i64;
  targetScriptableIndex = targetScriptableInstanceIndex;
  sourceEntityNuma = sourceEntityNum;
  v43 = (Weapon *)weapon;
  v35 = isAlternate;
  v42 = (vec3_t *)initialPos;
  v41 = (vec3_t *)startPos;
  normal = (vec3_t *)damageDir;
  v39 = (CgEventLodData *)optionalEventLodData;
  Sys_ProfBeginNamedEvent(0xFFFFD700, "BulletHitEvent_SimulateExit");
  if ( (impactEffects & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2085, ASSERT_TYPE_ASSERT, "( ( !(impactEffects & IMPACTEFFECT_EXIT) ) )", "( impactEffects ) = %i", impactEffects) )
    __debugbreak();
  end = *position;
  start.v[0] = (float)(traceLength * damageDir->v[0]) + position->v[0];
  start.v[1] = (float)(traceLength * damageDir->v[1]) + position->v[1];
  start.v[2] = (float)(traceLength * damageDir->v[2]) + position->v[2];
  v19 = 3 * this->m_localClientNum + 4;
  v20 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 33570816;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)v19);
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  WeaponPriorityMap = BG_GetWeaponPriorityMap(weapon, v35);
  Physics_AddDetailTrace(AllResult, WeaponPriorityMap);
  Physics_Raycast((Physics_WorldId)v19, &start, &end, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( NumHits )
  {
    HavokPhysics_CollisionQueryResult::SortResults(AllResult);
    while ( 1 )
    {
      RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(AllResult, v20);
      EntityNum = Physics_GetEntityNum(RaycastHitRef);
      v26 = EntityNum;
      if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
        __debugbreak();
      if ( v26 == targetEntityNum )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(AllResult, v20);
        if ( *(float *)&RaycastHitFraction > 0.0 )
        {
          DetailHitData = Physics_GetDetailHitData(AllResult, 0, v20);
          v29 = DetailHitData;
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
                  if ( DObjGetBoneIndexInternal_40(ClientDObj, v29->partName, &inOutIndex, &modelIndex) )
                    break;
                }
              }
            }
          }
        }
      }
      if ( ++v20 >= NumHits )
        goto LABEL_23;
    }
    if ( inOutIndex == 0xFF )
    {
      LODWORD(v33) = 255;
      LODWORD(v32) = 255;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2153, ASSERT_TYPE_ASSERT, "( boneIndex ) != ( 255 )", "%s != %s\n\t%i, %i", "boneIndex", "NO_BONEINDEX", v32, v33) )
        __debugbreak();
    }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(AllResult, v20, &pos);
    hitContents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(AllResult, v20);
    CgWeaponSystemMP::BulletHitEvent_Internal(this, sourceEntityNuma, targetEntityNum, targetScriptableIndex, inOutIndex, v43, v35, v42, v41, &pos, normal, surfType, event, impactEffects | 4, hitContents, hitImpactDelayOverride, hitArmorType, hitmarkerType, v39);
  }
LABEL_23:
  Sys_ProfEndNamedEvent();
}

/*
==============
CgWeaponSystemMP::BulletImpactEffects
==============
*/
void CgWeaponSystemMP::BulletImpactEffects(CgWeaponSystemMP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *startPosition, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactFlags, int hitContents, bool forceCullBulletHitEffect, SndHitArmorType hitArmorType, CgSfxImpactInfo *outSfxInfo)
{
  FXRegisteredDef *v17; 
  __int64 v21; 
  unsigned int v23; 
  FXRegisteredDef *v24; 
  bool WeaponDismembermentEnabled; 
  bool v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  Weapon *v29; 
  FXRegisteredDef hitFx[4]; 
  bool surfTypea; 

  v17 = hitFx;
  v21 = 2i64;
  do
  {
    FXRegisteredDef::FXRegisteredDef(v17++);
    --v21;
  }
  while ( v21 );
  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1929, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  if ( sourceEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1930, ASSERT_TYPE_ASSERT, "(sourceEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "sourceEntityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)surfType >= 0x40 )
  {
    LODWORD(v29) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1931, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v29, 64) )
      __debugbreak();
  }
  v23 = 0;
  outSfxInfo->hitSound = NULL;
  Sys_ProfBeginNamedEvent(0xFF008080, "CG_BulletImpactEffects");
  CG_GetImpactEffectForWeapon(this->m_localClientNum, sourceEntityNum, targetEntityNum, 1, hitContents, weapon, isAlternate, surfType, impactFlags, hitArmorType, hitFx, &outSfxInfo->hitSound, &outSfxInfo->isExplosion);
  outSfxInfo->impactEnt = 2046;
  v24 = hitFx;
  WeaponDismembermentEnabled = BG_GetWeaponDismembermentEnabled(weapon, isAlternate);
  if ( (impactFlags & 0x800) != 0 )
    WeaponDismembermentEnabled = 0;
  surfTypea = WeaponDismembermentEnabled;
  v26 = forceCullBulletHitEffect;
  do
  {
    if ( v24->m_particleSystemDef )
    {
      if ( surfType == 7 )
      {
        if ( !v26 )
          CgWeaponSystem::BloodSplatterOnShield(this, targetEntityNum);
        v27 = DVARBOOL_cg_blood;
        if ( !DVARBOOL_cg_blood && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_blood") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        if ( !v27->current.enabled )
          v24->m_particleSystemDef = (const ParticleSystemDef *)cgMedia.fxNoBloodFleshHit;
      }
      v28 = DVARBOOL_cg_marks_ents_player_only;
      if ( !DVARBOOL_cg_marks_ents_player_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_marks_ents_player_only") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.enabled && sourceEntityNum < 200 )
        targetEntityNum = 2047;
      v26 = forceCullBulletHitEffect;
      if ( !forceCullBulletHitEffect )
      {
        if ( !CgWeaponSystem::CullBulletHitEffect(this, event, position, normal, sourceEntityNum, targetEntityNum, impactFlags) && (normal->v[0] != 0.0 || normal->v[1] != 0.0 || normal->v[2] != 0.0) )
          CG_PlayBulletImpactEffect((const LocalClientNum_t)this->m_localClientNum, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, position, normal, surfType, impactFlags, hitFx[v23], surfTypea);
        v26 = 0;
      }
    }
    ++v23;
    ++v24;
  }
  while ( v23 < 2 );
  Sys_ProfEndNamedEvent();
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
  centity_t *v6; 
  vec3_t *p_startPos; 
  __int64 i; 
  const centity_t *v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v13; 
  CgWeaponSystemMP *WeaponSystemMP; 
  int fmt; 
  int v19; 
  BOOL v20; 
  unsigned __int8 outBoneIndex[8]; 
  vec3_t outHitLocation; 
  int v23[4]; 

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
    v6 = Entity;
    if ( Entity && (Entity->flags & 1) != 0 && impactTimeWindowMs >= LocalClientGlobals->predictedPlayerState.serverTime - corpseHitEventTime && !LocalClientGlobals->inKillCam && (int)corpseHitEventCount > 0 )
    {
      p_startPos = &LocalClientGlobals->corpseHitEvent[0].startPos;
      for ( i = 0i64; i < corpseHitEventCount; ++i )
      {
        v9 = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
        if ( !CG_BoneHitDecode(localClientNum, v9, (const BulletHitBoneInfo *)&p_startPos[1].y, &outHitLocation, outBoneIndex) )
          break;
        v11 = LODWORD(outHitLocation.v[0]);
        v10 = outHitLocation.v[0] - p_startPos->v[0];
        v12 = outHitLocation.v[1] - p_startPos->v[1];
        v13 = outHitLocation.v[2] - p_startPos->v[2];
        *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v13 * v13));
        _XMM4 = v11;
        __asm
        {
          vcmpless xmm0, xmm4, xmm9
          vblendvps xmm0, xmm4, xmm8, xmm0
        }
        *(float *)&v23[1] = (float)(1.0 / *(float *)&_XMM0) * v12;
        *(float *)v23 = v10 * (float)(1.0 / *(float *)&_XMM0);
        *(float *)&v23[2] = v13 * (float)(1.0 / *(float *)&_XMM0);
        if ( *(float *)&v11 <= 0.000001 )
          break;
        WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP(localClientNum);
        LOBYTE(v20) = 0;
        LOBYTE(v19) = LOBYTE(p_startPos[-1].z);
        LOBYTE(fmt) = outBoneIndex[0];
        WeaponSystemMP->BulletHitEvent(WeaponSystemMP, SLOWORD(p_startPos[1].v[0]), v6->nextState.number, 0xFFFFFFFF, fmt, (const Weapon *)&p_startPos[-6].z, v19, p_startPos, p_startPos, &outHitLocation, (const vec3_t *)v23, LODWORD(p_startPos[2].v[1]), LODWORD(p_startPos[-6].v[1]), LOWORD(p_startPos[2].z) | 0x1012, 0, 0, (const scr_string_t)0, v20, 0, SLODWORD(p_startPos[3].v[2]), SLODWORD(p_startPos[4].v[0]), NULL);
        p_startPos += 10;
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
  float v14; 
  float v15; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  bool v18; 
  entityState_t *v19; 
  unsigned int v20; 
  unsigned int v21; 
  SuitAnimType v22; 
  int v23; 
  bool v24; 
  entityState_t *v25; 
  unsigned int v26; 
  unsigned int v27; 
  int IsCrouchingAlias; 
  SuitAnimType v29; 
  int v30; 
  float *hipSpreadDuckedMax; 
  float hipSpreadInAirMax; 
  float hipSpreadSprintMin; 
  float hipSpreadSprintMax; 
  float hipSpreadDuckedMin; 
  float v36; 
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
  BG_GetHipSpread(weapon, isUsingAlternate, &hipSpreadStandMin, &hipSpreadStandMax, &hipSpreadDuckedMin, &v36, &hipSpreadProneMin, hipSpreadProneMax, &hipSpreadSprintMin, &hipSpreadSprintMax, &hipSpreadInAirMin, &hipSpreadInAirMax);
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
    v14 = hipSpreadInAirMin;
    v15 = hipSpreadInAirMax;
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
          v14 = hipSpreadProneMin;
          v15 = hipSpreadProneMax[0];
          goto LABEL_27;
        }
      }
      else
      {
        v22 = BG_AnimationMP_GetSuitAnimIndex(v19);
        v23 = BG_AnimationMP_GetLegsAnimation(&cent->nextState);
        if ( BG_IsProneAnim(v23, v22) )
          goto LABEL_26;
      }
      if ( !ci->usingAnimState )
      {
        v24 = PlayerASM_IsEnabled();
        v25 = &cent->nextState;
        if ( v24 )
        {
          v26 = BG_PlayerASM_GetAnimset(v25);
          v27 = BG_PlayerASM_GetAnim(&cent->nextState, MOVEMENT);
          IsCrouchingAlias = BG_PlayerASM_IsCrouchingAlias(v27, v26);
        }
        else
        {
          v29 = BG_AnimationMP_GetSuitAnimIndex(v25);
          v30 = BG_AnimationMP_GetLegsAnimation(&cent->nextState);
          IsCrouchingAlias = BG_IsCrouchingAnim(v30, v29);
        }
        if ( IsCrouchingAlias )
        {
          v14 = hipSpreadDuckedMin;
          v15 = v36;
          goto LABEL_27;
        }
      }
    }
    v14 = hipSpreadStandMin;
    v15 = hipSpreadStandMax;
    goto LABEL_27;
  }
  v14 = hipSpreadSprintMin;
  v15 = hipSpreadSprintMax;
LABEL_27:
  *minSpread = v14;
  *maxSpread = v15;
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
  const dvar_t *v6; 
  cg_t *LocalClientGlobals; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  viewDamage_t *LruDamageSlot; 
  cg_t *v24; 
  double v25; 
  float v26; 
  cg_t *v27; 
  float *p_type; 
  __int64 v29; 
  const dvar_t *v30; 
  double Float_Internal_DebugName; 
  double v32; 
  float v33; 
  float v34; 
  cg_t *v35; 
  vec3_t outOrg; 
  __int64 v37; 
  vec3_t vec; 
  vec3_t angles; 

  v37 = -2i64;
  v6 = DCONST_DVARBOOL_hudWhizbyEnable;
  if ( !DCONST_DVARBOOL_hudWhizbyEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v8 = start->v[0];
    v9 = start->v[0] - end->v[0];
    v10 = start->v[1];
    v11 = end->v[1];
    v34 = v10 - v11;
    v12 = start->v[2];
    v13 = end->v[2];
    v33 = v12 - v13;
    if ( (float)((float)((float)((float)(v10 - v11) * (float)(v10 - outOrg.v[1])) + (float)(v9 * (float)(start->v[0] - outOrg.v[0]))) + (float)((float)(v12 - v13) * (float)(v12 - outOrg.v[2]))) >= 0.0 )
    {
      v14 = outOrg.v[1] - v11;
      v15 = outOrg.v[0] - end->v[0];
      v16 = outOrg.v[2] - v13;
      v17 = v34;
      if ( (float)((float)((float)(v34 * v14) + (float)(v9 * v15)) + (float)(v16 * v33)) >= 0.0 )
      {
        vec.v[0] = outOrg.v[0] - v8;
        vec.v[1] = outOrg.v[1] - v10;
        vec.v[2] = outOrg.v[2] - v12;
        v18 = (float)((float)(outOrg.v[1] - v10) * v16) - (float)((float)(outOrg.v[2] - v12) * v14);
        v19 = (float)(v15 * (float)(outOrg.v[2] - v12)) - (float)((float)(outOrg.v[0] - v8) * v16);
        v20 = (float)((float)(outOrg.v[0] - v8) * v14) - (float)(v15 * (float)(outOrg.v[1] - v10));
        v21 = fsqrt((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) / fsqrt((float)((float)(v34 * v34) + (float)(v9 * v9)) + (float)(v33 * v33));
        v22 = DCONST_DVARFLT_hudWhizbyDistance;
        if ( !DCONST_DVARFLT_hudWhizbyDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( v21 < v22->current.value )
        {
          v35 = CG_GetLocalClientGlobals(localClientNum);
          LruDamageSlot = CG_PlayerState_FindLruDamageSlot(v35);
          v24 = CG_GetLocalClientGlobals(localClientNum);
          v25 = vectoyaw((const vec2_t *)&v24->refdef.view.axis);
          vectoangles(&vec, &angles);
          v26 = *(float *)&v25 - angles.v[1];
          v27 = CG_GetLocalClientGlobals(localClientNum);
          p_type = (float *)&v27->viewDamage[0].type;
          v29 = 12i64;
          do
          {
            if ( v27->time - *((_DWORD *)p_type - 16) > 0 && v27->time - *((_DWORD *)p_type - 16) < *((_DWORD *)p_type - 15) && *(_DWORD *)p_type == 1 )
            {
              v30 = DCONST_DVARFLT_hudWhizbyClearAngle;
              if ( !DCONST_DVARFLT_hudWhizbyClearAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudWhizbyClearAngle") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v30);
              if ( v30->current.value > COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - *(p_type - 11)) & _xmm) )
                *(p_type - 15) = 0.0;
            }
            p_type += 18;
            --v29;
          }
          while ( v29 );
          LruDamageSlot->time = v35->snap->serverTime;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyDurationSec, "hudWhizbyDurationSec");
          LruDamageSlot->duration = (int)(float)(*(float *)&Float_Internal_DebugName * 1000.0);
          LruDamageSlot->yaw = v26;
          LruDamageSlot->type = DODGE;
          LruDamageSlot->inVehicle = 0;
          LruDamageSlot->dir.v[0] = v9;
          LruDamageSlot->dir.v[1] = v17;
          LruDamageSlot->dir.v[2] = v33;
          AxisCopy(&v35->refdef.view.axis, &LruDamageSlot->playerDir);
          v32 = vectoyaw((const vec2_t *)&v35->refdef.view.axis);
          LruDamageSlot->playerYaw = *(float *)&v32;
        }
      }
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CgWeaponSystemMP::CalcMuzzlePoint
==============
*/
void CgWeaponSystemMP::CalcMuzzlePoint(CgWeaponSystemMP *this, const int entityNum, const TagPair flashTagPair, const bool calculateExactPoint, vec3_t *out_Point)
{
  vec3_t *v5; 
  centity_t *Entity; 
  cg_t *LocalClientGlobalsForEnt; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  bool v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  bool IsCharacterEntity; 
  LocalClientNum_t m_localClientNum; 
  bool v28; 
  const DObj *ClientDObj; 
  const DObj *v30; 
  int eType; 
  scr_string_t PrimaryTagName; 
  const char *v33; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  float viewheight_crouch; 
  char *fmt; 
  __int64 v39; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  TagPair tagPair; 

  tagPair = flashTagPair;
  v5 = out_Point;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2233, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobalsForEnt = CG_GetLocalClientGlobalsForEnt(entityNum);
  v11 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)LocalClientGlobalsForEnt;
  if ( LocalClientGlobalsForEnt )
  {
    CG_GetPlayerViewOrigin(this->m_localClientNum, &LocalClientGlobalsForEnt->predictedPlayerState, v5);
    AngleVectors(&Entity->pose.angles, &forward, &right, &up);
    v12 = 45.0 * forward.v[1];
    v5->v[0] = (float)(45.0 * forward.v[0]) + v5->v[0];
    v13 = 45.0 * forward.v[2];
    v5->v[1] = v12 + v5->v[1];
    v5->v[2] = v13 + v5->v[2];
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v11 + 96, ACTIVE, 4u) )
    {
      v14 = 2.5 * up.v[1];
      v15 = v5->v[1];
      v5->v[0] = v5->v[0] - (float)(2.5 * up.v[0]);
      v16 = v15 - v14;
      v17 = v5->v[2];
      v18 = 2.5 * up.v[2];
      v5->v[1] = v16;
      v5->v[2] = v17 - v18;
    }
    else
    {
      v19 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v11 + 96, ACTIVE, 3u);
      v20 = v5->v[1];
      v21 = v5->v[2];
      if ( v19 )
        v22 = FLOAT_5_0;
      else
        v22 = FLOAT_8_0;
      v23 = v22 * up.v[1];
      v5->v[0] = v5->v[0] - (float)(v22 * up.v[0]);
      v24 = v20 - v23;
      v25 = v22 * up.v[2];
      v5->v[1] = v24;
      v5->v[2] = v21 - v25;
    }
    return;
  }
  if ( (Entity->flags & 1) != 0 && calculateExactPoint )
  {
    IsCharacterEntity = BG_IsCharacterEntity(&Entity->nextState);
    m_localClientNum = this->m_localClientNum;
    if ( IsCharacterEntity )
    {
      v28 = !CG_WeaponsMP_CalculateCharacterHighLodMuzzlePoint(m_localClientNum, Entity, tagPair, WEAPON_HAND_DEFAULT, v5);
    }
    else
    {
      if ( !CG_Entity_CanUseDObj(m_localClientNum, entityNum) || (ClientDObj = Com_GetClientDObj(Entity->nextState.number, this->m_localClientNum), (v30 = ClientDObj) == NULL) || !DObjVerifyNumBones(ClientDObj) || (outBoneIndex[0] = -2, outTagName = 0, !TagPair::GetTagNameAndBoneIndex(&tagPair, v30, &outTagName, outBoneIndex)) )
      {
LABEL_21:
        eType = Entity->nextState.eType;
        PrimaryTagName = TagPair::GetPrimaryTagName(&tagPair);
        v33 = SL_ConvertToString(PrimaryTagName);
        LODWORD(fmt) = eType;
        Com_PrintWarning(17, "WARNING: No %s or DObj in CalcMuzzlePoint on entity %d (eType %i).\n", v33, (unsigned int)entityNum, fmt);
        goto LABEL_22;
      }
      v28 = CG_DObjGetWorldTagPos(&Entity->pose, v30, outTagName, v5) == 0;
    }
    if ( !v28 )
      return;
    goto LABEL_21;
  }
LABEL_22:
  CG_GetPoseOrigin(&Entity->pose, v5);
  if ( (Entity->flags & 1) != 0 && BG_IsCharacterEntity(&Entity->nextState) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( Entity->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v39) = Entity->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 2292, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v39, ComCharacterLimits::ms_gameData.m_characterCount) )
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
      v5->v[2] = (float)BG_Suit_GetProneViewHeight(SuitDef) + v5->v[2];
    }
    else
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
        viewheight_crouch = (float)SuitDef->viewheight_crouch;
      else
        viewheight_crouch = (float)SuitDef->viewheight_stand;
      v5->v[2] = viewheight_crouch + v5->v[2];
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
  float v5; 
  float v6[5]; 
  float v7; 
  float v8; 

  icon = cgMedia.FOFTargetBox_HostileVehicle;
  if ( GetIconDimsForVehicle(this->m_localClientNum, dobj, origin, v6, &v5, &v8, &v7) )
    CgWeaponSystem::DrawTargetBox(this, v6[0], v5, v8, v7, icon, 1.0);
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
  float w; 
  float y; 
  float x[4]; 
  float alpha; 

  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP(localClientNum);
  FOFTargetBox_HostileVehicle = cgMedia.FOFTargetBox_HostileVehicle;
  v7 = WeaponSystemMP;
  if ( GetIconDimsForVehicle(WeaponSystemMP->m_localClientNum, dobj, origin, x, &y, &w, &alpha) )
    CgWeaponSystem::DrawTargetBox(v7, x[0], y, w, alpha, FOFTargetBox_HostileVehicle, 1.0);
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
  __int64 v10; 
  bool v11; 
  ScreenPlacement *v12; 
  float v16; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  float value; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  double v30; 
  float v31; 
  bool result; 
  vec2_t v33; 
  vec2_t outScreenPos; 
  vec3_t worldPos; 
  vec3_t v36; 

  v10 = localClientNum;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 525, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 526, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
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
      v12 = &scrPlaceViewDisplay[v10];
      goto LABEL_23;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v11 )
      __debugbreak();
  }
  v12 = &scrPlaceFull;
LABEL_23:
  _XMM1 = LODWORD(dobj->radius);
  __asm { vminss  xmm6, xmm1, cs:__real@42700000 }
  _XMM0 = LODWORD(FLOAT_50_0);
  v16 = origin->v[0];
  __asm { vcmpltss xmm3, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm5, xmm1, xmm2, xmm3 }
  v20 = origin->v[2];
  *(float *)&_XMM3 = origin->v[1];
  worldPos.v[0] = origin->v[0] - *(float *)&_XMM6;
  worldPos.v[1] = *(float *)&_XMM3 - *(float *)&_XMM6;
  v36.v[0] = v16 + *(float *)&_XMM6;
  worldPos.v[2] = (float)(v20 - *(float *)&_XMM6) + *(float *)&_XMM5;
  v36.v[2] = (float)(v20 + *(float *)&_XMM6) + *(float *)&_XMM5;
  v36.v[1] = *(float *)&_XMM3 + *(float *)&_XMM6;
  if ( CG_WorldPosToScreenPosReal((LocalClientNum_t)v10, v12, &worldPos, &outScreenPos) && CG_WorldPosToScreenPosReal((LocalClientNum_t)v10, v12, &v36, &v33) )
  {
    v21 = DVARFLT_FoFIconMinSize;
    v22 = (float)(outScreenPos.v[0] + v33.v[0]) * 0.5;
    v23 = (float)(outScreenPos.v[1] + v33.v[1]) * 0.5;
    if ( !DVARFLT_FoFIconMinSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconMinSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    value = v21->current.value;
    v25 = DVARFLT_FoFIconMaxSize;
    v26 = value * v12->scaleVirtualToReal.v[0];
    if ( !DVARFLT_FoFIconMaxSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconMaxSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v27 = v25->current.value * v12->scaleVirtualToReal.v[0];
    v28 = DVARFLT_FoFIconScale;
    v29 = fsqrt((float)((float)(v33.v[1] - outScreenPos.v[1]) * (float)(v33.v[1] - outScreenPos.v[1])) + (float)((float)(v33.v[0] - outScreenPos.v[0]) * (float)(v33.v[0] - outScreenPos.v[0])));
    if ( !DVARFLT_FoFIconScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "FoFIconScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v30 = I_fclamp(v29 * v28->current.value, v26, v27);
    v31 = *(float *)&v30 * cls.vidConfig.aspectRatioDisplayPixel;
    result = 1;
    *w = *(float *)&v30;
    *h = v31;
    *x = v22 - (float)(*(float *)&v30 * 0.5);
    *y = v23 - (float)(v31 * 0.5);
  }
  else
  {
    result = 0;
    *x = 0.0;
    *y = 0.0;
    *w = 0.0;
    *h = 0.0;
  }
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
  cg_t *LocalClientGlobals; 
  float result; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  result = 0.0;
  if ( this->m_viewModelUVAnimTimeOverrideEnabled )
    return (float)(LocalClientGlobals->time - this->m_viewModelUVAnimTimeOverride) * 0.001;
  return result;
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
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v15; 
  double v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  __int128 v22; 
  double v23; 
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
  v23 = 0.0;
  v24 = 0;
  v12 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v13 = v12 && (_DWORD)team == 5;
  if ( (!v12 || (_DWORD)team != 4) && !v13 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    v15 = *(_OWORD *)AllCombatTeamFlags->array;
    v16 = *(double *)&AllCombatTeamFlags->array[4];
    v17 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    v24 = v17;
    v22 = v15;
    v23 = v16;
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
  const dvar_t *v5; 
  float value; 
  cg_t *LocalClientGlobals; 
  float v8; 
  float v9; 
  vec3_t outOrg; 
  __int64 v11; 

  v11 = -2i64;
  if ( !CG_GameInterface_PlayingBR() )
    return 1;
  v5 = DVARFLT_compassShowFireBrMaxDistSq;
  if ( !DVARFLT_compassShowFireBrMaxDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFireBrMaxDistSq") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  if ( value <= 0.0 )
    return 1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v8 = outOrg.v[2] - origin->v[2];
  v9 = (float)((float)(outOrg.v[1] - origin->v[1]) * (float)(outOrg.v[1] - origin->v[1])) + (float)((float)(outOrg.v[0] - origin->v[0]) * (float)(outOrg.v[0] - origin->v[0]));
  memset(&outOrg, 0, sizeof(outOrg));
  return value >= (float)(v9 + (float)(v8 * v8));
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
  const vec3_t *v9; 
  const vec3_t *v11; 
  unsigned __int64 SndEntHandle; 
  float v15; 
  const char *Name; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  int time; 
  const DObj *ClientDObj; 
  unsigned __int8 markBoneIndex; 
  __int64 fadeTime; 
  int orga; 
  vec3_t *org; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> left; 
  FXRegisteredDef def; 

  def.m_particleSystemDef = impactVfx.m_particleSystemDef;
  v9 = position;
  v11 = normal;
  if ( (unsigned int)victimEntNum >= 0x800 )
  {
    orga = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1994, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", victimEntNum, orga) )
      __debugbreak();
    LODWORD(org) = 2048;
    LODWORD(fadeTime) = victimEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1995, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", fadeTime, org) )
      __debugbreak();
  }
  if ( impactSfx )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)this->m_localClientNum, soundBindEntNum);
    SND_PlaySurfaceSoundAsync(impactSfx, surfType, SndEntHandle, 1.0, 1.0, 0, v9);
  }
  if ( def.m_particleSystemDef && (v11->v[0] != 0.0 || v11->v[1] != 0.0 || v11->v[2] != 0.0) )
  {
    v15 = v11->v[1];
    left.m[2].v[0] = v11->v[0];
    left.m[2].v[2] = v11->v[2];
    left.m[2].v[1] = v15;
    AxisRandomAroundForward(&left.m[2], left.m, &left.m[1]);
    if ( !CgWeaponSystem::CullBulletHitEffect(this, 0, v9, v11, 2047, victimEntNum, 0) )
    {
      if ( R_DecalVolumesMarks_DebugEnabled() )
      {
        halfSize.v[0] = FLOAT_1_5;
        halfSize.v[1] = FLOAT_1_5;
        halfSize.v[2] = FLOAT_1_5;
        R_DecalVolumesMarks_DebugAdd(v9, &halfSize, &left, &colorYellow);
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
          FX_PlayBoltedOffsetEffectWithMarkEntity(this->m_localClientNum, &def, time, victimEntNum, markBoneIndex, v9, &left, 0, victimEntNum, 0, markBoneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
        else
          FX_PlayOrientedEffectWithMarkEntity(this->m_localClientNum, &def, time, v9, &left, 0, victimEntNum, 0, markBoneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
      }
      else
      {
        FX_PlayOrientedEffectWithMarkEntity(m_localClientNum, &def, time, v9, &left, 0, victimEntNum, 0, boneIndex, MARK_MATERIAL_OVERRIDE_NONE_1);
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
__int64 CgWeaponSystemMP::ShouldWeaponPing(CgWeaponSystemMP *this, const centity_t *cent, const Weapon *weapon, const bool isAlternate, const vec3_t *origin)
{
  const dvar_t *v9; 
  __int64 result; 
  const dvar_t *v11; 
  float value; 
  cg_t *v13; 
  float v14; 
  float v15; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v19; 
  team_t team; 
  vec3_t outOrg; 
  __int64 v22; 

  v22 = -2i64;
  v9 = DVARBOOL_compassShowFire;
  if ( !DVARBOOL_compassShowFire && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFire") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || (*(_DWORD *)&cent->nextState.clientLinkInfo & 0x200000) != 0 )
    return 0i64;
  if ( !CG_GameInterface_PlayingBR() )
    goto LABEL_13;
  v11 = DVARFLT_compassShowFireBrMaxDistSq;
  if ( !DVARFLT_compassShowFireBrMaxDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowFireBrMaxDistSq") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  if ( value <= 0.0 || (v13 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum), RefdefView_GetOrg(&v13->refdef.view, &outOrg), v14 = (float)((float)(outOrg.v[1] - origin->v[1]) * (float)(outOrg.v[1] - origin->v[1])) + (float)((float)(outOrg.v[0] - origin->v[0]) * (float)(outOrg.v[0] - origin->v[0])), v15 = (float)(outOrg.v[2] - origin->v[2]) * (float)(outOrg.v[2] - origin->v[2]), result = 0i64, memset(&outOrg, 0, sizeof(outOrg)), (float)(v14 + v15) <= value) )
  {
LABEL_13:
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
      return CgWeaponSystem::ShouldWeaponPing(this, cent, weapon, isAlternate, origin) != 0;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)this->m_localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1170, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
      __debugbreak();
    if ( !CharacterInfo->infoValid )
      return CgWeaponSystem::ShouldWeaponPing(this, cent, weapon, isAlternate, origin) != 0;
    if ( (cent->flags & 1) != 0 && BG_IsCharacterEntity(&cent->nextState) )
    {
      v19 = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1181, ASSERT_TYPE_ASSERT, "(shooterInfo)", (const char *)&queryFormat, "shooterInfo") )
        __debugbreak();
      if ( !v19->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1182, ASSERT_TYPE_ASSERT, "(shooterInfo->infoValid)", (const char *)&queryFormat, "shooterInfo->infoValid") )
        __debugbreak();
      team = v19->team;
      if ( team && team == CharacterInfo->team )
        return 1i64;
      return CgWeaponSystem::ShouldWeaponPing(this, cent, weapon, isAlternate, origin) != 0;
    }
    return 0i64;
  }
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
char CgWeaponSystemMP::SimulateBulletFire_Orientation(CgWeaponSystemMP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *tracerStart)
{
  centity_t *v15; 
  CgWeaponSystemMP *v16; 
  orientation_t *v17; 
  vec3_t *v18; 
  playerState_s *p_predictedPlayerState; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v21; 
  entityState_t *p_nextState; 
  characterInfo_t *CharacterInfo; 
  CgStatic *v24; 
  __int128 aimSpreadScale_low; 
  const dvar_t *v28; 
  CgWeaponMap *Instance; 
  float thirdPersonGunYaw; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  bool v35; 
  float thirdPersonGunPitch; 
  double v37; 
  float v38; 
  int v39; 
  const DObj *ClientDObj; 
  float v41; 
  float v42; 
  const entityState_t *v43; 
  centity_t *v44; 
  unsigned int Animset; 
  unsigned int Anim; 
  int IsAdsAlias; 
  SuitAnimType SuitAnimIndex; 
  int LegsAnimation; 
  __int128 v50; 
  __int128 v51; 
  float v52; 
  float v53; 
  int v54; 
  float v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v60; 
  scr_string_t v61; 
  int v62; 
  const DObj *v63; 
  unsigned __int8 NextBoneIndex; 
  char v65; 
  double v67; 
  double v68; 
  double v69; 
  centity_t **p_cent; 
  bool IsPlayingVehicleOccupancyAnims; 
  tmat33_t<vec3_t> *p_axis; 
  unsigned int v73; 
  Weapon *v74; 
  const DObj *v80; 
  bool BoneOrientation; 
  bool v82; 
  int v83; 
  CgWeaponMap *v84; 
  float v85; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v87; 
  centity_t *Entity; 
  const DObj *v89; 
  char v90; 
  CgHandler *v91; 
  CgHandler *v92; 
  CgHandler *Handler; 
  CgWeaponMap *v97; 
  bool IsUsingHybridScope; 
  double v99; 
  int number; 
  const DObj *v101; 
  entityType_s eType; 
  CgWeaponMap *v103; 
  bool v104; 
  double v105; 
  int v106; 
  char *fmt; 
  unsigned __int8 outBoneIndex[4]; 
  int handle; 
  bool v110; 
  BOOL v111; 
  float minSpread; 
  float maxSpread; 
  CgStatic *LocalClientStatics; 
  CgWeaponSystemMP *v115; 
  Weapon *r_weapon; 
  tmat33_t<vec3_t> *src; 
  scr_string_t v118[2]; 
  float *v119; 
  vec3_t v120; 
  vec3_t trBase; 
  entityState_t *v122; 
  __int64 v123; 
  vec3_t angles; 
  orientation_t orient; 
  centity_t *cent; 
  LocalClientNum_t m_localClientNum; 

  v123 = -2i64;
  v110 = isAlternate;
  r_weapon = (Weapon *)weapon;
  v15 = inflictorEnt;
  cent = inflictorEnt;
  v16 = this;
  v115 = this;
  src = &highPrecisionFireData->fireAxis;
  v17 = outOrient;
  v119 = outAimSpreadAmount;
  v18 = tracerStart;
  if ( !inflictorEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1274, ASSERT_TYPE_ASSERT, "(inflictorEnt)", (const char *)&queryFormat, "inflictorEnt") )
    __debugbreak();
  p_predictedPlayerState = NULL;
  *(_QWORD *)v118 = BG_WeaponDef(weapon, isAlternate);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v16->m_localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v16->m_localClientNum);
  v21 = DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring;
  if ( !DVARBOOL_bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugUnintendedFireIssueCrashLocalPlayerWhenFiring") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled && LocalClientGlobals->clientNum == v15->nextState.number )
    CrashReport_TriggerNow();
  p_nextState = &v15->nextState;
  if ( (v15->flags & 1) == 0 )
    goto LABEL_25;
  v122 = &v15->nextState;
  if ( !BG_IsCharacterEntity(&v15->nextState) )
  {
    p_nextState = &v15->nextState;
LABEL_25:
    v24 = NULL;
    LocalClientStatics = NULL;
    v122 = p_nextState;
    goto LABEL_14;
  }
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v15->nextState.clientNum);
  v24 = (CgStatic *)CharacterInfo;
  LocalClientStatics = (CgStatic *)CharacterInfo;
  if ( CharacterInfo && !CharacterInfo->infoValid )
    return 0;
LABEL_14:
  _XMM9 = LODWORD(FLOAT_1_0);
  if ( isPlayerWeaponView )
  {
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    handle = hand + 2048;
    aimSpreadScale_low = LODWORD(LocalClientGlobals->lastFrame.aimSpreadScale);
    *(float *)&aimSpreadScale_low = LocalClientGlobals->lastFrame.aimSpreadScale * 0.0039215689;
    _XMM8 = aimSpreadScale_low;
    v111 = 1.0 == LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
    BG_GetSpreadForWeapon(&LocalClientGlobals->predictedPlayerState, r_weapon, &minSpread, &maxSpread);
    CG_GetPlayerViewOrigin(v16->m_localClientNum, &LocalClientGlobals->predictedPlayerState, &v17->origin);
    v28 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    cent = (centity_t *)DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
        __debugbreak();
      v28 = (const dvar_t *)cent;
    }
    Dvar_CheckFrontendServerThread(v28);
    if ( LOBYTE(cent->pose.origin.Set_origin) )
    {
      LODWORD(fmt) = LocalClientGlobals->time;
      Com_Printf(17, "C: SimulateBulletFire_Orientation: Last frame spread scale: %.5f Aim spread scale ps: %.5f Time: %d\n", LocalClientGlobals->lastFrame.aimSpreadScale, LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale, fmt);
    }
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v16->m_localClientNum);
    if ( BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
    {
      thirdPersonGunYaw = LocalClientGlobals->thirdPersonGunYaw;
      angles.v[0] = LocalClientGlobals->thirdPersonGunPitch;
      angles.v[1] = thirdPersonGunYaw;
      angles.v[2] = 0.0;
      AngleVectors(&angles, v17->axis.m, &v17->axis.m[1], &v17->axis.m[2]);
      v31 = v17->origin.v[0];
      v18->v[0] = v17->origin.v[0];
      v32 = v17->origin.v[1];
      v18->v[1] = v32;
      v33 = v17->origin.v[2];
      v18->v[2] = v33;
      v18->v[0] = (float)(45.0 * v17->axis.m[0].v[0]) + v31;
      v18->v[1] = (float)(45.0 * v17->axis.m[0].v[1]) + v32;
      v18->v[2] = (float)(45.0 * v17->axis.m[0].v[2]) + v33;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 4u) )
      {
        v34 = FLOAT_N2_5;
      }
      else
      {
        v35 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 3u);
        thirdPersonGunPitch = LocalClientGlobals->thirdPersonGunPitch;
        if ( v35 )
        {
          v37 = I_fclamp(thirdPersonGunPitch, -90.0, 0.0);
          v38 = FLOAT_N5_0;
        }
        else
        {
          v37 = I_fclamp(thirdPersonGunPitch, -90.0, 0.0);
          v38 = FLOAT_N8_0;
        }
        v34 = v38 - (float)((float)(*(float *)&v37 * 0.011111111) * 30.0);
      }
      v18->v[0] = (float)(v34 * v17->axis.m[2].v[0]) + v18->v[0];
      v18->v[1] = (float)(v34 * v17->axis.m[2].v[1]) + v18->v[1];
      v18->v[2] = (float)(v34 * v17->axis.m[2].v[2]) + v18->v[2];
      goto LABEL_130;
    }
    if ( LocalClientGlobals->renderingThirdPerson )
    {
      v18->v[0] = v17->origin.v[0];
      v18->v[1] = v17->origin.v[1];
      v18->v[2] = v17->origin.v[2];
      v24 = LocalClientStatics;
      if ( !LocalClientStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1410, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      AngleVectors((const vec3_t *)&v24[156], v17->axis.m, &v17->axis.m[1], &v17->axis.m[2]);
      v18->v[0] = (float)(45.0 * v17->axis.m[0].v[0]) + v18->v[0];
      v18->v[1] = (float)(45.0 * v17->axis.m[0].v[1]) + v18->v[1];
      v18->v[2] = (float)(45.0 * v17->axis.m[0].v[2]) + v18->v[2];
LABEL_131:
      if ( p_predictedPlayerState && v15->nextState.eType != ET_TURRET )
      {
        _XMM0 = LODWORD(p_predictedPlayerState->weapCommon.fWeaponPosFrac);
        __asm
        {
          vcmpeqss xmm1, xmm0, xmm9
          vblendvps xmm6, xmm8, xmm6, xmm1
        }
        Handler = CgHandler::getHandler(v16->m_localClientNum);
        *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, p_predictedPlayerState, r_weapon, *(float *)&_XMM6);
        *v119 = *(float *)&_XMM0;
        return 1;
      }
      goto LABEL_88;
    }
    *(_QWORD *)angles.v = *(_QWORD *)LocalClientGlobals->gunAngles.v;
    angles.v[2] = 0.0;
    if ( TagPair::IsEmpty((TagPair *)&tagPair) )
    {
      v18->v[0] = v17->origin.v[0];
      v18->v[1] = v17->origin.v[1];
      v18->v[2] = v17->origin.v[2];
LABEL_38:
      AngleVectors(&angles, v17->axis.m, &v17->axis.m[1], &v17->axis.m[2]);
      v41 = v17->axis.m[0].v[0];
      v42 = v17->axis.m[0].v[2];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v41 * v41) + (float)(v17->axis.m[0].v[1] * v17->axis.m[0].v[1])) + (float)(v42 * v42)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( outOrient->axis[0] ))", "%s\n\tCgWeaponSystemMP::SimulateBulletFire_Orientation - Firing dir is not normalized. Forward: %f %f %f, Gun Pitch: %f Gun Yaw: %f", "Vec3IsNormalized( outOrient->axis[0] )", v41, v17->axis.m[0].v[1], v42, LocalClientGlobals->gunAngles.v[0], LocalClientGlobals->gunAngles.v[1]) )
        __debugbreak();
      Vec3NormalizeFast(v17->axis.m);
      Vec3NormalizeFast(&v17->axis.m[1]);
      Vec3NormalizeFast(&v17->axis.m[2]);
      goto LABEL_130;
    }
    v39 = handle;
    ClientDObj = Com_GetClientDObj(handle, v16->m_localClientNum);
    outBoneIndex[0] = -2;
    handle = 0;
    if ( ClientDObj && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, ClientDObj, (scr_string_t *)&handle, outBoneIndex) && CG_Entity_GetBoneOrientation(v16->m_localClientNum, v39, outBoneIndex[0], &orient) )
    {
      v18->v[0] = orient.origin.v[0];
      v18->v[1] = orient.origin.v[1];
      v18->v[2] = orient.origin.v[2];
      goto LABEL_38;
    }
    return 0;
  }
  v43 = &v15->nextState;
  if ( !BG_IsCharacterEntity(v43) )
  {
    if ( cent->nextState.eType != ET_TURRET )
    {
      if ( BG_IsVehicleEntity(v43) )
      {
        v97 = CgWeaponMap::GetInstance((const LocalClientNum_t)v16->m_localClientNum);
        IsUsingHybridScope = BG_IsUsingHybridScope(v97, NULL, r_weapon);
        v99 = BG_ADSSpread(r_weapon, 0, IsUsingHybridScope, 0);
        minSpread = *(float *)&v99;
        maxSpread = *(float *)&v99;
        v73 = 1;
        _XMM8 = 0i64;
        number = v43->number;
        v101 = Com_GetClientDObj(number, v16->m_localClientNum);
        outBoneIndex[0] = -2;
        LODWORD(src) = 0;
        if ( v101 && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v101, (scr_string_t *)&src, outBoneIndex) && CG_Entity_GetBoneOrientation(v16->m_localClientNum, number, outBoneIndex[0], v17) )
        {
          v18->v[0] = v17->origin.v[0];
          v18->v[1] = v17->origin.v[1];
          v18->v[2] = v17->origin.v[2];
          v24 = LocalClientStatics;
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
          v103 = CgWeaponMap::GetInstance((const LocalClientNum_t)v16->m_localClientNum);
          v74 = r_weapon;
          v104 = BG_IsUsingHybridScope(v103, NULL, r_weapon);
          v105 = BG_ADSSpread(r_weapon, 0, v104, 0);
          minSpread = *(float *)&v105;
          maxSpread = *(float *)&v105;
          v73 = 1;
          _XMM8 = 0i64;
          v106 = truncate_cast<int,unsigned int>(cent->nextState.eventParm);
          ByteToDir(v106, v17->axis.m);
          AxisRandomAroundForward(v17->axis.m, &v17->axis.m[1], &v17->axis.m[2]);
          CG_GetPoseOrigin(&cent->pose, &v17->origin);
          v18->v[0] = v17->origin.v[0];
          v18->v[1] = v17->origin.v[1];
          v18->v[2] = v17->origin.v[2];
          v24 = LocalClientStatics;
          goto LABEL_90;
        }
        Com_PrintError(14, "Unknown eType %i in CG_DrawBulletImpacts()\n", (unsigned int)eType);
      }
      return 0;
    }
    minSpread = *(float *)(*(_QWORD *)v118 + 3180i64);
    maxSpread = *(float *)(*(_QWORD *)v118 + 3180i64);
    _XMM8 = LODWORD(FLOAT_1_0);
    v111 = 0;
    LOBYTE(handle) = 0;
    orient.origin.v[0] = 0.0;
    orient.origin.v[1] = 0.0;
    orient.origin.v[2] = 0.0;
    AxisCopy(&identityMatrix33, &orient.axis);
    LODWORD(src) = v43->number;
    v80 = Com_GetClientDObj((int)src, v16->m_localClientNum);
    outBoneIndex[0] = -2;
    v118[0] = 0;
    if ( v80 && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v80, v118, outBoneIndex) )
    {
      BoneOrientation = CG_Entity_GetBoneOrientation(v16->m_localClientNum, (int)src, outBoneIndex[0], &orient);
      handle = (unsigned __int8)handle;
      v82 = !BoneOrientation;
      v83 = (unsigned __int8)handle;
      if ( !v82 )
        v83 = 1;
      handle = v83;
    }
    if ( isPlayerView )
    {
      v84 = CgWeaponMap::GetInstance((const LocalClientNum_t)v16->m_localClientNum);
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      CG_GetPlayerViewOrigin(v16->m_localClientNum, &LocalClientGlobals->predictedPlayerState, &v17->origin);
      if ( BG_IsThirdPersonMode(v84, &LocalClientGlobals->predictedPlayerState) )
      {
        v85 = LocalClientGlobals->thirdPersonGunYaw;
        angles.v[0] = LocalClientGlobals->thirdPersonGunPitch;
        angles.v[1] = v85;
        angles.v[2] = 0.0;
        AngleVectors(&angles, v17->axis.m, &v17->axis.m[1], &v17->axis.m[2]);
      }
      else
      {
        if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        ViewmodelWeapon = BG_GetViewmodelWeapon(v84, &LocalClientGlobals->predictedPlayerState);
        v87 = BG_WeaponDef(ViewmodelWeapon, 0);
        if ( v87->weapClass == WEAPCLASS_TURRET && v87->useTurretViewmodelAnims )
        {
          if ( LocalClientGlobals->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1560, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
            __debugbreak();
          Entity = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
          v89 = Com_GetClientDObj(Entity->nextState.number, LocalClientGlobals->localClientNum);
          if ( !v89 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF1430, 1147i64, (unsigned int)Entity->nextState.number);
          if ( !CG_DObjGetWorldTagMatrix(&Entity->pose, v89, scr_const.tag_player, &v17->axis, &v17->origin) )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EBDF8, 1148i64);
          v16 = v115;
        }
        else
        {
          v91 = CgHandler::getHandler(v16->m_localClientNum);
          BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, v17->axis.m, &v17->axis.m[1], &v17->axis.m[2], v91, 0);
        }
      }
    }
    else
    {
      if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 || LocalClientGlobals->predictedPlayerState.linkEnt != v43->number )
      {
        v90 = handle;
        if ( !(_BYTE)handle )
          return 0;
        *v17 = orient;
LABEL_121:
        v15 = cent;
        if ( v90 )
        {
          v18->v[0] = orient.origin.v[0];
          v18->v[1] = orient.origin.v[1];
          v18->v[2] = orient.origin.v[2];
        }
        else
        {
          v18->v[0] = v17->origin.v[0];
          v18->v[1] = v17->origin.v[1];
          v18->v[2] = v17->origin.v[2];
        }
LABEL_130:
        v24 = LocalClientStatics;
        goto LABEL_131;
      }
      v92 = CgHandler::getHandler(v16->m_localClientNum);
      BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, v17->axis.m, &v17->axis.m[1], &v17->axis.m[2], v92, 0);
      CG_GetPlayerViewOrigin(v16->m_localClientNum, &LocalClientGlobals->predictedPlayerState, &v17->origin);
    }
    v90 = handle;
    goto LABEL_121;
  }
  v44 = cent;
  CG_WeaponsMP_GuessSpreadForWeapon((const LocalClientNum_t)v16->m_localClientNum, (const characterInfo_t *)v24, cent, r_weapon, v110, &minSpread, &maxSpread);
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 191, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( v24[160].m_localClientNum )
    goto LABEL_61;
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v43->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) )
  {
    v111 = 1;
    v24 = LocalClientStatics;
    goto LABEL_62;
  }
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(v43);
    Anim = BG_PlayerASM_GetAnim(v43, MOVEMENT);
    IsAdsAlias = BG_PlayerASM_IsAdsAlias(Anim, Animset);
  }
  else
  {
    SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(v43);
    LegsAnimation = BG_AnimationMP_GetLegsAnimation(v43);
    IsAdsAlias = BG_IsAdsAnim(LegsAnimation, SuitAnimIndex);
  }
  v16 = v115;
  if ( !IsAdsAlias )
  {
LABEL_61:
    v111 = 0;
  }
  else
  {
    v111 = 1;
    v24 = LocalClientStatics;
  }
LABEL_62:
  Trajectory_GetTrBase(&v44->nextState.lerp.pos, &trBase);
  Trajectory_GetTrBase(&v44->prevState.pos, &v120);
  v51 = LODWORD(trBase.v[0]);
  *(float *)&v51 = trBase.v[0] - v120.v[0];
  v50 = v51;
  v52 = trBase.v[1] - v120.v[1];
  v53 = trBase.v[2] - v120.v[2];
  v54 = LocalClientGlobals->nextSnap->serverTime - LocalClientGlobals->snap->serverTime;
  if ( v54 )
  {
    v56 = LODWORD(FLOAT_1000_0);
    v55 = 1000.0 / (float)v54;
    *(float *)&v56 = v55 * *(float *)&v50;
    v50 = v56;
    v52 = v55 * v52;
    v53 = v55 * v53;
  }
  v57 = v50;
  *(float *)&v57 = fsqrt((float)((float)(*(float *)&v50 * *(float *)&v50) + (float)(v52 * v52)) + (float)(v53 * v53));
  _XMM0 = v57;
  __asm { vminss  xmm3, xmm0, cs:__real@437f0000 }
  v60 = _XMM3;
  *(float *)&v60 = *(float *)&_XMM3 * 0.0039215689;
  _XMM8 = v60;
  v61 = (scr_string_t)v24[915].__vftable;
  v118[0] = v61;
  if ( v61 == 255 && !calculateExactOrigin )
  {
    CgWeaponSystemMP::CalcMuzzlePoint(v16, v43->number, tagPair, 0, &v17->origin);
    goto LABEL_76;
  }
  v62 = v43->number;
  v63 = Com_GetClientDObj(v62, v16->m_localClientNum);
  if ( !v63 || (outBoneIndex[0] = -2, handle = 0, cent = (centity_t *)0xD0000000Ci64, m_localClientNum = LOCAL_CLIENT_COUNT|LOCAL_CLIENT_LAST|0x8, !TagPair::GetTagNameAndBoneIndexForCharacter((TagPair *)&tagPair, v63, (const characterInfo_t *)v24, (const CharacterModelType *)&cent, 3, (scr_string_t *)&handle, outBoneIndex)) )
  {
LABEL_71:
    v65 = 0;
LABEL_72:
    memset(&v120, 0, sizeof(v120));
    memset(&trBase, 0, sizeof(trBase));
    return v65;
  }
  if ( hand )
  {
    NextBoneIndex = DObjGetNextBoneIndex(v63, (scr_string_t)handle, outBoneIndex[0]);
    outBoneIndex[0] = NextBoneIndex;
    if ( NextBoneIndex == 0xFF )
      goto LABEL_71;
  }
  else
  {
    NextBoneIndex = outBoneIndex[0];
  }
  if ( !CG_Entity_GetBoneOrientation(v16->m_localClientNum, v62, NextBoneIndex, v17) )
    goto LABEL_71;
  v61 = v118[0];
LABEL_76:
  v18->v[0] = v17->origin.v[0];
  v18->v[1] = v17->origin.v[1];
  v18->v[2] = v17->origin.v[2];
  if ( v61 != 255 )
  {
    v67 = BG_ADSSpread(r_weapon, 0, 0, 0);
    *v119 = *(float *)&v67;
    v65 = 1;
    goto LABEL_72;
  }
  if ( (*(_BYTE *)&v44->nextState.animInfo.selectAnim & 1) != 0 )
  {
    if ( v44->nextState.lerp.u.anonymous.data[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1490, ASSERT_TYPE_ASSERT, "(!isUsingArbitraryUp)", "%s\n\tScripted agent entity fired a weapon while in arbitrary-up volume.  This is not yet supported.", "!isUsingArbitraryUp") )
      __debugbreak();
    cent = (centity_t *)v24[156].__vftable;
    m_localClientNum = v24[156].m_localClientNum;
    v68 = AngleNormalize360(*((float *)&cent + 1) + *(float *)&v24[173].__vftable);
    *((float *)&cent + 1) = *(float *)&v68;
    v69 = AngleNormalize360(*(float *)&cent + *((float *)&v24[173].__vftable + 1));
    *(float *)&cent = *(float *)&v69;
    p_cent = &cent;
  }
  else
  {
    IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims((const characterInfo_t *)v24);
    p_cent = (centity_t **)((char *)&v24[158].__vftable + 4);
    if ( !IsPlayingVehicleOccupancyAnims )
      p_cent = (centity_t **)(&v24[156].m_localClientNum + 1);
  }
  p_axis = &v17->axis;
  AngleVectors((const vec3_t *)p_cent, p_axis->m, &p_axis->m[1], &p_axis->m[2]);
  if ( src )
    MatrixCopy33(src, p_axis);
  memset(&v120, 0, sizeof(v120));
  memset(&trBase, 0, sizeof(trBase));
LABEL_88:
  v73 = v111;
LABEL_89:
  v74 = r_weapon;
LABEL_90:
  if ( BG_IsCharacterEntity(v122) )
  {
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_weapons_mp.cpp", 1682, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    _XMM0 = v73;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm9, xmm6, xmm2
      vcmpeqss xmm0, xmm7, xmm9
      vblendvps xmm6, xmm8, xmm6, xmm0
    }
    *(double *)&_XMM0 = BG_ADSSpread(v74, v110, v24[318].m_localClientNum != LOCAL_CLIENT_0, *((_DWORD *)&v24[318].m_localClientNum + 1) != 0);
    *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(*(float *)&_XMM7, minSpread, maxSpread, *(float *)&_XMM0, *(float *)&_XMM6);
    *v119 = *(float *)&_XMM0;
    return 1;
  }
  else
  {
    *v119 = (float)((float)(maxSpread - minSpread) * *(float *)&_XMM8) + minSpread;
    return 1;
  }
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
  const dvar_t *v20; 
  bool v21; 
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
    v21 = isPlayerView && BG_InADS(&LocalClientGlobals->predictedPlayerState);
    CG_WeaponsMP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, &perks, ent->number, weapon, isAlternate, isPlayerView, tagPair, v21, 0);
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
      v20 = DVARFLT_heli_barrelRotation;
      if ( !DVARFLT_heli_barrelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelRotation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      CgVehicleSystemMP::IncTurretBarrelRoll(v19, ent->number, v20->current.value);
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
  int v9; 
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
    r_ammo2 = *BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v8);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v9 = 0;
    while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v9].ammoType, &r_ammo2) )
    {
      if ( (unsigned int)++v9 >= 0xF )
        goto LABEL_21;
    }
    if ( (playerState_s *)((char *)ps + 68 * v9) == (playerState_s *)-1912i64 || !ps->weapCommon.ammoNotInClip[v9].ammoCount )
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

