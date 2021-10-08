/*
==============
CgWeaponSystemSP::ClearWeaponAttachModels
==============
*/

void __fastcall CgWeaponSystemSP::ClearWeaponAttachModels(CgWeaponSystemSP *this)
{
  ?ClearWeaponAttachModels@CgWeaponSystemSP@@QEAAXXZ(this);
}

/*
==============
CgWeaponSystemSP::InitViewModel
==============
*/

void __fastcall CgWeaponSystemSP::InitViewModel(CgWeaponSystemSP *this)
{
  ?InitViewModel@CgWeaponSystemSP@@QEAAXXZ(this);
}

/*
==============
CgWeaponSystemSP::AddWeaponLaserForCharacter
==============
*/

void __fastcall CgWeaponSystemSP::AddWeaponLaserForCharacter(CgWeaponSystemSP *this, const Weapon *weapon, const centity_t *cent)
{
  ?AddWeaponLaserForCharacter@CgWeaponSystemSP@@UEBAXAEBUWeapon@@PEBUcentity_t@@@Z(this, weapon, cent);
}

/*
==============
CgWeaponSystemSP::GetCustomAttachModel
==============
*/

XModel *__fastcall CgWeaponSystemSP::GetCustomAttachModel(CgWeaponSystemSP *this, int modelIndex)
{
  return ?GetCustomAttachModel@CgWeaponSystemSP@@AEBAPEAUXModel@@H@Z(this, modelIndex);
}

/*
==============
CgWeaponSystemSP::ShutdownViewModel
==============
*/

void __fastcall CgWeaponSystemSP::ShutdownViewModel(CgWeaponSystemSP *this)
{
  ?ShutdownViewModel@CgWeaponSystemSP@@QEAAXXZ(this);
}

/*
==============
CgWeaponSystemSP::UpdateWeaponAttachModels
==============
*/

int __fastcall CgWeaponSystemSP::UpdateWeaponAttachModels(CgWeaponSystemSP *this)
{
  return ?UpdateWeaponAttachModels@CgWeaponSystemSP@@UEAAHXZ(this);
}

/*
==============
CgWeaponSystemSP::BulletTrajectoryEffects
==============
*/

void __fastcall CgWeaponSystemSP::BulletTrajectoryEffects(CgWeaponSystemSP *this, int sourceEntityNum, const Weapon *weapon, bool isAlternate, const vec3_t *startPos, const vec3_t *position, int surfType, int event)
{
  ?BulletTrajectoryEffects@CgWeaponSystemSP@@UEBAXHAEBUWeapon@@_NAEBTvec3_t@@2HH@Z(this, sourceEntityNum, weapon, isAlternate, startPos, position, surfType, event);
}

/*
==============
CgWeaponSystemSP::BulletImpactEffects
==============
*/

void __fastcall CgWeaponSystemSP::BulletImpactEffects(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *startPosition, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactFlags, int hitContents, const unsigned int flags, const scr_string_t partName, SndHitArmorType hitArmorType, CgSfxImpactInfo *outSfxInfo)
{
  ?BulletImpactEffects@CgWeaponSystemSP@@AEBAXHHIEAEBUWeapon@@_NAEBTvec3_t@@22HHIHIW4scr_string_t@@W4SndHitArmorType@@AEAUCgSfxImpactInfo@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, weapon, isAlternate, startPosition, position, normal, surfType, event, impactFlags, hitContents, flags, partName, hitArmorType, outSfxInfo);
}

/*
==============
CgWeaponSystemSP::IsLaserFlagOn
==============
*/

bool __fastcall CgWeaponSystemSP::IsLaserFlagOn(CgWeaponSystemSP *this, const playerState_s *ps)
{
  return ?IsLaserFlagOn@CgWeaponSystemSP@@UEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemSP::UpdateWeaponPossession
==============
*/

void __fastcall CgWeaponSystemSP::UpdateWeaponPossession(CgWeaponSystemSP *this, playerState_s *ps)
{
  ?UpdateWeaponPossession@CgWeaponSystemSP@@UEBAXPEAUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemSP::IsWeaponWorldModelLoaded
==============
*/

bool __fastcall CgWeaponSystemSP::IsWeaponWorldModelLoaded(CgWeaponSystemSP *this, const Weapon *r_weapon)
{
  return ?IsWeaponWorldModelLoaded@CgWeaponSystemSP@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
CgWeaponSystemSP::UpdateMuzzleFlashNonPlayer
==============
*/

void __fastcall CgWeaponSystemSP::UpdateMuzzleFlashNonPlayer(CgWeaponSystemSP *this, const entityState_t *ent, const TagPair tagPair, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  ?UpdateMuzzleFlashNonPlayer@CgWeaponSystemSP@@UEBAXPEBUentityState_t@@VTagPair@@AEBUWeapon@@_N3@Z(this, ent, tagPair, weapon, isAlternate, isPlayerView);
}

/*
==============
CgWeaponSystemSP::UpdateMuzzleFlash
==============
*/

void __fastcall CgWeaponSystemSP::UpdateMuzzleFlash(CgWeaponSystemSP *this, centity_t *cent, const Weapon *weapon, bool isAlternate, int bViewModel, int bDrawGun, const CgEventLodData *unusedEventLodData)
{
  ?UpdateMuzzleFlash@CgWeaponSystemSP@@UEBAXPEAUcentity_t@@AEBUWeapon@@_NHHPEBUCgEventLodData@@@Z(this, cent, weapon, isAlternate, bViewModel, bDrawGun, unusedEventLodData);
}

/*
==============
CgWeaponSystemSP::InitCustomAttachModel
==============
*/

void __fastcall CgWeaponSystemSP::InitCustomAttachModel(CgWeaponSystemSP *this, int modelIndex, const vec3_t *offset, const vec3_t *angles)
{
  ?InitCustomAttachModel@CgWeaponSystemSP@@AEBAXHAEBTvec3_t@@0@Z(this, modelIndex, offset, angles);
}

/*
==============
CgWeaponSystemSP::IsPlayerUsingVehicleWeapon
==============
*/

int __fastcall CgWeaponSystemSP::IsPlayerUsingVehicleWeapon(CgWeaponSystemSP *this, const playerState_s *playerState, const entityState_t *vehicleState)
{
  return ?IsPlayerUsingVehicleWeapon@CgWeaponSystemSP@@UEBAHPEBUplayerState_s@@PEBUentityState_t@@@Z(this, playerState, vehicleState);
}

/*
==============
CgWeaponSystemSP::SetWeaponUVAnimTimeOverride
==============
*/

void __fastcall CgWeaponSystemSP::SetWeaponUVAnimTimeOverride(CgWeaponSystemSP *this, const int time)
{
  ?SetWeaponUVAnimTimeOverride@CgWeaponSystemSP@@UEAAXH@Z(this, time);
}

/*
==============
CgWeaponSystemSP::AddWeaponAttachModel
==============
*/

void __fastcall CgWeaponSystemSP::AddWeaponAttachModel(CgWeaponSystemSP *this, const int modelIndex, const int boneIndex, const vec3_t *offset, const vec3_t *angles)
{
  ?AddWeaponAttachModel@CgWeaponSystemSP@@UEAAXHHAEBTvec3_t@@0@Z(this, modelIndex, boneIndex, offset, angles);
}

/*
==============
CgWeaponSystemSP::IsWeaponViewModelLoaded
==============
*/

bool __fastcall CgWeaponSystemSP::IsWeaponViewModelLoaded(CgWeaponSystemSP *this, const Weapon *r_weapon)
{
  return ?IsWeaponViewModelLoaded@CgWeaponSystemSP@@UEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
CgWeaponSystemSP::UpdateBulletFire
==============
*/

void __fastcall CgWeaponSystemSP::UpdateBulletFire(CgWeaponSystemSP *this, int eventId, centity_t *inflictorEnt, const int knownHitClientNum, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const int fireSequenceIndex, const CgEventLodData *optionalEventLod, const CgFireEventHighPrecisionData *highPrecisionFireData)
{
  ?UpdateBulletFire@CgWeaponSystemSP@@UEAAXHPEAUcentity_t@@HAEBUWeapon@@_NVTagPair@@22W4PlayerHandIndex@@HPEBUCgEventLodData@@PEBUCgFireEventHighPrecisionData@@@Z(this, eventId, inflictorEnt, knownHitClientNum, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, fireSequenceIndex, optionalEventLod, highPrecisionFireData);
}

/*
==============
CgWeaponSystemSP::SimulateBulletFire_UseEventBasedHitEffect
==============
*/

int __fastcall CgWeaponSystemSP::SimulateBulletFire_UseEventBasedHitEffect(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, int event)
{
  return ?SimulateBulletFire_UseEventBasedHitEffect@CgWeaponSystemSP@@EEBAHHHH@Z(this, sourceEntityNum, targetEntityNum, event);
}

/*
==============
CgWeaponSystemSP::BulletHitEvent
==============
*/

void __fastcall CgWeaponSystemSP::BulletHitEvent(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableInstanceIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const unsigned int flags, const scr_string_t partName, const bool forceClientSideHandling, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType, const CgEventLodData *unusedEventLodData)
{
  ?BulletHitEvent@CgWeaponSystemSP@@UEBAXHHIEAEBUWeapon@@_NAEBTvec3_t@@222HHIHIW4scr_string_t@@_NHW4SndHitArmorType@@W4SndHitmarkerType@@PEBUCgEventLodData@@@Z(this, sourceEntityNum, targetEntityNum, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, initialPos, startPos, position, normal, surfType, event, impactEffects, hitContents, flags, partName, forceClientSideHandling, hitImpactDelayOverride, hitArmorType, hitmarkerType, unusedEventLodData);
}

/*
==============
CgWeaponSystemSP::CheckFirePenetrateStop
==============
*/

bool __fastcall CgWeaponSystemSP::CheckFirePenetrateStop(CgWeaponSystemSP *this, const centity_t *attacker, const centity_t *hitEntity, bool penetratedGlass)
{
  return ?CheckFirePenetrateStop@CgWeaponSystemSP@@UEBA_NPEBUcentity_t@@0_N@Z(this, attacker, hitEntity, penetratedGlass);
}

/*
==============
CgWeaponSystemSP::ArchiveWeaponInfo
==============
*/

void __fastcall CgWeaponSystemSP::ArchiveWeaponInfo(CgWeaponSystemSP *this, const LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?ArchiveWeaponInfo@CgWeaponSystemSP@@QEAAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(this, localClientNum, memFile);
}

/*
==============
CgWeaponSystemSP::IsGrenadeDangerous
==============
*/

int __fastcall CgWeaponSystemSP::IsGrenadeDangerous(CgWeaponSystemSP *this, const centity_t *grenadeEntity)
{
  return ?IsGrenadeDangerous@CgWeaponSystemSP@@UEBAHPEBUcentity_t@@@Z(this, grenadeEntity);
}

/*
==============
CgWeaponSystemSP::DrawUFOViewModel
==============
*/

int __fastcall CgWeaponSystemSP::DrawUFOViewModel(CgWeaponSystemSP *this, const playerState_s *ps)
{
  return ?DrawUFOViewModel@CgWeaponSystemSP@@UEBAHPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgWeaponSystemSP::EnableWeaponUVAnimOverride
==============
*/

void __fastcall CgWeaponSystemSP::EnableWeaponUVAnimOverride(CgWeaponSystemSP *this, const int enable)
{
  ?EnableWeaponUVAnimOverride@CgWeaponSystemSP@@UEAAXH@Z(this, enable);
}

/*
==============
CgWeaponSystemSP::GetWeaponUVAnimOverride
==============
*/

double __fastcall CgWeaponSystemSP::GetWeaponUVAnimOverride(CgWeaponSystemSP *this)
{
  double result; 

  *(float *)&result = ?GetWeaponUVAnimOverride@CgWeaponSystemSP@@UEBAMXZ(this);
  return result;
}

/*
==============
CgWeaponSystemSP::ArchiveWeaponAttachModels
==============
*/

void __fastcall CgWeaponSystemSP::ArchiveWeaponAttachModels(CgWeaponSystemSP *this, MemoryFile *memFile)
{
  ?ArchiveWeaponAttachModels@CgWeaponSystemSP@@AEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
CgWeaponSystemSP::TouchWeaponAttachModels
==============
*/

void __fastcall CgWeaponSystemSP::TouchWeaponAttachModels(CgWeaponSystemSP *this)
{
  ?TouchWeaponAttachModels@CgWeaponSystemSP@@UEBAXXZ(this);
}

/*
==============
CgWeaponSystemSP::TouchHandModel
==============
*/

void __fastcall CgWeaponSystemSP::TouchHandModel(CgWeaponSystemSP *this)
{
  ?TouchHandModel@CgWeaponSystemSP@@UEBAXXZ(this);
}

/*
==============
CgWeaponSystemSP::GetWeaponAttachModels
==============
*/

unsigned __int16 __fastcall CgWeaponSystemSP::GetWeaponAttachModels(CgWeaponSystemSP *this, unsigned __int16 modelIndex, DObjModel *outDObjModels)
{
  return ?GetWeaponAttachModels@CgWeaponSystemSP@@UEBAGGQEAUDObjModel@@@Z(this, modelIndex, outDObjModels);
}

/*
==============
CgWeaponSystemSP::SimulateBulletFire_Orientation
==============
*/

bool __fastcall CgWeaponSystemSP::SimulateBulletFire_Orientation(CgWeaponSystemSP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *outTracerStart)
{
  return ?SimulateBulletFire_Orientation@CgWeaponSystemSP@@UEBA_NPEAUcentity_t@@AEBUWeapon@@_NVTagPair@@22W4PlayerHandIndex@@_NPEBUCgFireEventHighPrecisionData@@PEAUorientation_t@@PEAMAEATvec3_t@@@Z(this, inflictorEnt, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, calculateExactOrigin, highPrecisionFireData, outOrient, outAimSpreadAmount, outTracerStart);
}

/*
==============
CgWeaponSystemSP::AddWeaponAttachModel
==============
*/
void CgWeaponSystemSP::AddWeaponAttachModel(CgWeaponSystemSP *this, const int modelIndex, const int boneIndex, const vec3_t *offset, const vec3_t *angles)
{
  ClConfigStrings *ClConfigStrings; 
  const char *v10; 
  scr_string_t String; 
  const char *v12; 
  __int64 m_numAddedViewModels; 
  bool v14; 
  XModel *v15; 
  __int64 v16; 
  char *data_p[5]; 

  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  data_p[0] = (char *)ClConfigStrings->GetClientTagString(ClConfigStrings, boneIndex);
  v10 = Com_Parse((const char **)data_p);
  if ( *v10 )
  {
    String = SL_FindString(v10);
    data_p[0] = (char *)ClConfigStrings->GetModelString(ClConfigStrings, modelIndex);
    v12 = Com_Parse((const char **)data_p);
    if ( *v12 )
    {
      m_numAddedViewModels = this->m_weaponAttachModels.m_numAddedViewModels;
      v14 = (unsigned int)m_numAddedViewModels < 0x10;
      if ( (unsigned int)m_numAddedViewModels > 0x10 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 619, ASSERT_TYPE_ASSERT, "( addedViewModelCount ) <= ( MAX_CUSTOM_ATTACH_MODELS )", "addedViewModelCount not in [0, MAX_CUSTOM_ATTACH_MODELS]\n\t%u not in [0, %u]", m_numAddedViewModels, 16) )
          __debugbreak();
        v14 = (unsigned int)m_numAddedViewModels < 0x10;
      }
      if ( v14 )
      {
        this->m_weaponAttachModels.m_addedViewModelIndex[m_numAddedViewModels] = modelIndex;
        v15 = R_RegisterModel(v12);
        v16 = m_numAddedViewModels;
        this->m_weaponAttachModels.m_addedViewModels[m_numAddedViewModels] = v15;
        this->m_weaponAttachModels.m_addedViewModelBone[m_numAddedViewModels] = String;
        this->m_weaponAttachModels.m_addedViewModelOffset[v16].v[0] = offset->v[0];
        this->m_weaponAttachModels.m_addedViewModelOffset[v16].v[1] = offset->v[1];
        this->m_weaponAttachModels.m_addedViewModelOffset[v16].v[2] = offset->v[2];
        this->m_weaponAttachModels.m_addedViewModelAngles[v16] = *angles;
        ++this->m_weaponAttachModels.m_numAddedViewModels;
      }
    }
  }
}

/*
==============
CgWeaponSystemSP::AddWeaponLaserForCharacter
==============
*/
void CgWeaponSystemSP::AddWeaponLaserForCharacter(CgWeaponSystemSP *this, const Weapon *weapon, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const dvar_t *v9; 
  bool v10; 
  bool v11; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 636, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 639, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState->clientNum != cent->nextState.number )
    goto LABEL_14;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( BG_IsThirdPersonMode(Instance, p_predictedPlayerState) )
    goto LABEL_14;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) )
  {
    v9 = DCONST_DVARBOOL_bg_thirdPerson;
    if ( !DCONST_DVARBOOL_bg_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_thirdPerson") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
LABEL_14:
      v10 = this->IsWeaponLaserOn(this, weapon, NULL, cent);
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v11 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x13u);
      if ( CG_LaserForceOnEnabled() || v10 || v11 )
        CG_LaserAdd((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number, TEAM_TWO);
    }
  }
}

/*
==============
CgWeaponSystemSP::ArchiveWeaponAttachModels
==============
*/
void CgWeaponSystemSP::ArchiveWeaponAttachModels(CgWeaponSystemSP *this, MemoryFile *memFile)
{
  bool IsWriting; 
  __int64 v5; 
  ClConfigStrings *ClConfigStrings; 
  __int64 v7; 
  const char *v8; 
  XModel *v9; 
  scr_string_t *v10; 
  const char *v11; 
  scr_string_t String; 
  scr_string_t *m_addedViewModelBone; 
  __int64 v14; 
  char *data_p; 

  IsWriting = MemFile_IsWriting(memFile);
  MemFile_ArchiveData(memFile, 64, this->m_weaponAttachModels.m_addedViewModelIndex);
  MemFile_ArchiveData(memFile, 192, this->m_weaponAttachModels.m_addedViewModelOffset);
  MemFile_ArchiveData(memFile, 192, this->m_weaponAttachModels.m_addedViewModelAngles);
  MemFile_ArchiveData(memFile, 4, &this->m_weaponAttachModels.m_numAddedViewModels);
  if ( IsWriting )
  {
    m_addedViewModelBone = this->m_weaponAttachModels.m_addedViewModelBone;
    v14 = 16i64;
    do
    {
      data_p = (char *)SL_ConvertToString(*m_addedViewModelBone);
      MemFile_WriteCString(memFile, data_p);
      ++m_addedViewModelBone;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    v5 = 0i64;
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v7 = 16i64;
    if ( !this->m_weaponAttachModels.m_numAddedViewModels )
      goto LABEL_8;
    do
    {
      this->m_weaponAttachModels.m_addedViewModelIndex[v5] = level.modelMap[this->m_weaponAttachModels.m_addedViewModelIndex[v5]];
      data_p = (char *)((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetModelString)(ClConfigStrings);
      v8 = Com_Parse((const char **)&data_p);
      if ( *v8 )
        v9 = R_RegisterModel(v8);
      else
        v9 = NULL;
      this->m_weaponAttachModels.m_addedViewModels[v5] = v9;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < this->m_weaponAttachModels.m_numAddedViewModels );
    if ( (unsigned int)v5 < 0x10 )
LABEL_8:
      memset(&this->m_weaponAttachModels.m_addedViewModels[v5], 0, 8i64 * (unsigned int)(16 - v5));
    v10 = this->m_weaponAttachModels.m_addedViewModelBone;
    do
    {
      data_p = (char *)MemFile_ReadCString(memFile);
      v11 = Com_Parse((const char **)&data_p);
      if ( *v11 )
        String = SL_FindString(v11);
      else
        String = 0;
      *v10++ = String;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
CgWeaponSystemSP::ArchiveWeaponInfo
==============
*/
void CgWeaponSystemSP::ArchiveWeaponInfo(CgWeaponSystemSP *this, const LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v3; 
  cg_t *v5; 
  const playerState_s *nextPs; 
  bool IsWriting; 
  CgWeaponMap *v8; 
  int v9; 
  int *p_hasAnimTree; 
  bool v11; 
  BOOL v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v13) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", cg_t::ms_allocatedType) )
    __debugbreak();
  v5 = cg_t::ms_cgArray[v3];
  nextPs = v5->nextPs;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 507, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  IsWriting = MemFile_IsWriting(memFile);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v3];
  v9 = 0;
  p_hasAnimTree = &v5->m_weaponHand[0].hasAnimTree;
  v11 = 1;
  do
  {
    if ( !v11 )
    {
      LODWORD(v14) = 2;
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( IsWriting )
    {
      v12 = BG_GetCurrentWeaponForPlayer(v8, nextPs)->weaponIdx && *((_QWORD *)p_hasAnimTree - 3);
      *p_hasAnimTree = v12;
    }
    MemFile_ArchiveData(memFile, 4, p_hasAnimTree);
    MemFile_ArchiveData(memFile, 4, p_hasAnimTree - 2);
    ++v9;
    p_hasAnimTree += 10;
    v11 = (unsigned int)v9 < 2;
  }
  while ( v9 < 2 );
  MemFile_ArchiveData(memFile, 60, &v5->weaponSelect);
  MemFile_ArchiveData(memFile, 4, &v5->weaponSelectTime);
  MemFile_ArchiveData(memFile, 60, &v5->equippedOffHand);
  MemFile_ArchiveData(memFile, 864, v5->viewDamage);
  MemFile_ArchiveData(memFile, 4, &v5->holdBreathTime);
  MemFile_ArchiveData(memFile, 4, &v5->holdBreathDelay);
  MemFile_ArchiveFloat(memFile, &v5->holdBreathFrac);
  CgWeaponSystemSP::ArchiveWeaponAttachModels(this, memFile);
}

/*
==============
CgWeaponSystemSP::BulletHitEvent
==============
*/
void CgWeaponSystemSP::BulletHitEvent(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableInstanceIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *initialPos, const vec3_t *startPos, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactEffects, int hitContents, const unsigned int flags, const scr_string_t partName, const bool forceClientSideHandling, const int hitImpactDelayOverride, SndHitArmorType hitArmorType, SndHitmarkerType hitmarkerType)
{
  __int64 m_localClientNum; 
  Weapon *v24; 
  __int64 v25; 
  BOOL v26; 
  CgSfxImpactInfo v27; 

  CgWeaponSystemSP::BulletImpactEffects(this, sourceEntityNum, targetEntityNum, targetScriptableInstanceIndex, boneIndex, weapon, isAlternate, startPos, position, normal, surfType, event, impactEffects, hitContents, flags, partName, hitArmorType, &v27);
  if ( (impactEffects & 4) == 0 )
    this->BulletTrajectoryEffects(this, sourceEntityNum, weapon, isAlternate, startPos, position, surfType, event);
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(v25) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v25) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v25) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v24) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[m_localClientNum] )
  {
    LODWORD(v25) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v25) )
      __debugbreak();
  }
  LOBYTE(v26) = isAlternate;
  CgSoundSystem::ms_soundSystemArray[m_localClientNum]->PlayWhizbyAndImpactSfx(CgSoundSystem::ms_soundSystemArray[m_localClientNum], &v27, (impactEffects & 4) == 0, sourceEntityNum, initialPos, startPos, position, surfType, weapon, v26, hitImpactDelayOverride, hitmarkerType);
}

/*
==============
CgWeaponSystemSP::BulletImpactEffects
==============
*/
void CgWeaponSystemSP::BulletImpactEffects(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, unsigned int targetScriptableIndex, unsigned __int8 boneIndex, const Weapon *weapon, bool isAlternate, const vec3_t *startPosition, const vec3_t *position, const vec3_t *normal, int surfType, int event, unsigned int impactFlags, int hitContents, const unsigned int flags, const scr_string_t partName, SndHitArmorType hitArmorType, CgSfxImpactInfo *outSfxInfo)
{
  FXRegisteredDef *p_hitFx; 
  __int64 v24; 
  unsigned int v26; 
  int ShouldDynamicBoltBullet; 
  int v28; 
  FXRegisteredDef *v30; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  Weapon *v38; 
  FXRegisteredDef hitFx; 
  char v40; 
  void *retaddr; 
  CgSfxImpactInfo *outSfxInfoa; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  p_hitFx = &hitFx;
  v24 = 2i64;
  do
  {
    FXRegisteredDef::FXRegisteredDef(p_hitFx++);
    --v24;
  }
  while ( v24 );
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( this->m_localClientNum )
  {
    LODWORD(v38) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 976, ASSERT_TYPE_ASSERT, "( ( m_localClientNum == CL_GetOnlyLocalClientNum() ) )", "( m_localClientNum ) = %i", v38) )
      __debugbreak();
  }
  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 978, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  if ( sourceEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 979, ASSERT_TYPE_ASSERT, "(sourceEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "sourceEntityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)surfType >= 0x40 )
  {
    LODWORD(v38) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v38, 64) )
      __debugbreak();
  }
  v26 = 0;
  outSfxInfo->hitSound = NULL;
  ShouldDynamicBoltBullet = CGMovingPlatforms::ShouldDynamicBoltBullet(this->m_localClientNum, targetEntityNum);
  outSfxInfoa = (CgSfxImpactInfo *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_GetImpactEffectForWeapon(this->m_localClientNum, sourceEntityNum, targetEntityNum, 1, hitContents, weapon, isAlternate, surfType, impactFlags, hitArmorType, &hitFx, &outSfxInfo->hitSound, &outSfxInfo->isExplosion);
  if ( !ShouldDynamicBoltBullet || (v28 = targetEntityNum, targetEntityNum == 2047) )
    v28 = 2046;
  _RDI = normal;
  outSfxInfo->impactEnt = v28;
  v30 = &hitFx;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    if ( !v30->m_particleSystemDef )
      goto LABEL_49;
    if ( surfType == 7 )
    {
      CgWeaponSystem::BloodSplatterOnShield(this, targetEntityNum);
      v32 = DVARBOOL_cg_blood;
      if ( !DVARBOOL_cg_blood && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_blood") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( !v32->current.enabled )
        goto LABEL_40;
      v33 = DVARBOOL_cg_bloodLimit;
      if ( !DVARBOOL_cg_bloodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_bloodLimit") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( !v33->current.enabled )
        goto LABEL_41;
      v34 = DVARINT_cg_bloodLimitMsec;
      if ( !DVARINT_cg_bloodLimitMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_bloodLimitMsec") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( *(&outSfxInfoa[1087].impactEnt + 1) - LODWORD(outSfxInfoa[17196].hitSound) >= v34->current.integer )
        LODWORD(outSfxInfoa[17196].hitSound) = *(&outSfxInfoa[1087].impactEnt + 1);
      else
LABEL_40:
        v30->m_particleSystemDef = (const ParticleSystemDef *)cgMedia.fxNoBloodFleshHit;
    }
LABEL_41:
    v35 = DVARBOOL_cg_marks_ents_player_only;
    if ( !DVARBOOL_cg_marks_ents_player_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_marks_ents_player_only") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.enabled && sourceEntityNum < 1 )
      targetEntityNum = 2047;
    if ( !CgWeaponSystem::CullBulletHitEffect(this, event, position, normal, sourceEntityNum, targetEntityNum, impactFlags) )
    {
      __asm
      {
        vucomiss xmm6, dword ptr [rdi]
        vucomiss xmm6, dword ptr [rdi+4]
        vucomiss xmm6, dword ptr [rdi+8]
      }
    }
LABEL_49:
    ++v26;
    ++v30;
  }
  while ( v26 < 2 );
  _R11 = &v40;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CgWeaponSystemSP::BulletTrajectoryEffects
==============
*/
void CgWeaponSystemSP::BulletTrajectoryEffects(CgWeaponSystemSP *this, int sourceEntityNum, const Weapon *weapon, bool isAlternate, const vec3_t *startPos, const vec3_t *position, int surfType, int event)
{
  cg_t *LocalClientGlobals; 
  meansOfDeath_t mod; 
  bool v14; 
  unsigned int refdefViewOrg_aab; 
  vec3_t playerOrigin; 

  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 901, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  if ( !CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, sourceEntityNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 908, ASSERT_TYPE_ASSERT, "(attackerEnt)", (const char *)&queryFormat, "attackerEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  *(_QWORD *)playerOrigin.v = 0i64;
  mod = BG_WeaponBulletFire_GetMethodOfDeath(0i64, weapon, isAlternate);
  v14 = event == 94 || event == 97;
  CgWeaponSystem::BulletClientAuthPhysicsImpact(this, sourceEntityNum, weapon, isAlternate, v14, mod, startPos, position);
  if ( DB_AssetCount(ASSET_TYPE_FXWORLD) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 921, ASSERT_TYPE_ASSERT, "(DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1)", (const char *)&queryFormat, "DB_AssetCount( ASSET_TYPE_FXWORLD ) == 1") )
    __debugbreak();
  if ( BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate) > 0 )
  {
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(playerOrigin.v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(playerOrigin.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(playerOrigin.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    Glass_TraceLine(&fxWorld.glassSys, startPos, position, &playerOrigin);
    memset(&playerOrigin, 0, sizeof(playerOrigin));
  }
}

/*
==============
CG_WeaponsSP_WeaponFlash
==============
*/
void CG_WeaponsSP_WeaponFlash(const LocalClientNum_t localClientNum, int dobjHandle, const Weapon *weapon, bool isAlternate, int bViewFlash, const TagPair tagPair, bool inADS, int inDualFov, bool isFirstFlash)
{
  FxCombinedDef v13; 
  const DObj *ClientDObj; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  FXRegisteredDef fxDef; 
  bitarray<64> perks; 

  perks = 0i64;
  if ( !bViewFlash )
  {
    v13.particleSystemDef = BG_WorldFlashEffect(perks, weapon, isAlternate, isFirstFlash).particleSystemDef;
LABEL_7:
    fxDef.m_particleSystemDef = v13.particleSystemDef;
    if ( !v13.particleSystemDef )
      return;
    goto LABEL_8;
  }
  if ( !inADS )
    goto LABEL_5;
  if ( inDualFov )
    return;
  fxDef.m_particleSystemDef = BG_ViewFlashADSEffect(perks, weapon, isAlternate, isFirstFlash).particleSystemDef;
  if ( !fxDef.m_particleSystemDef )
  {
LABEL_5:
    v13.particleSystemDef = BG_ViewFlashEffect(perks, weapon, isAlternate, isFirstFlash).particleSystemDef;
    goto LABEL_7;
  }
LABEL_8:
  outBoneIndex[0] = -2;
  outTagName = 0;
  ClientDObj = Com_GetClientDObj(dobjHandle, localClientNum);
  TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, ClientDObj, &outTagName, outBoneIndex);
  CG_PlayBoltedEffect(localClientNum, &fxDef, dobjHandle, outTagName);
}

/*
==============
CgWeaponSystemSP::CheckFirePenetrateStop
==============
*/
char CgWeaponSystemSP::CheckFirePenetrateStop(CgWeaponSystemSP *this, const centity_t *attacker, const centity_t *hitEntity, bool penetratedGlass)
{
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 92, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !hitEntity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 93, ASSERT_TYPE_ASSERT, "( hitEntity )", (const char *)&queryFormat, "hitEntity") )
      __debugbreak();
    return 0;
  }
  if ( penetratedGlass || (hitEntity->flags & 1) == 0 || hitEntity->nextState.eType != ET_PLAYER || Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetrationHitsClients, "bullet_penetrationHitsClients") )
  {
    if ( (hitEntity->flags & 1) == 0 )
      return 0;
    BG_IsActorEntity(&hitEntity->nextState);
    if ( (hitEntity->flags & 1) == 0 || !BG_IsActorEntity(&hitEntity->nextState) || penetratedGlass )
      return 0;
    if ( ((attacker->flags & 1) == 0 || !BG_IsActorEntity(&attacker->nextState) || Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetrationActorHitsActors, "bullet_penetrationActorHitsActors")) && Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetration_damage, "bullet_penetration_damage") )
      return 0;
  }
  return 1;
}

/*
==============
CgWeaponSystemSP::ClearWeaponAttachModels
==============
*/
void CgWeaponSystemSP::ClearWeaponAttachModels(CgWeaponSystemSP *this)
{
  memset_0(&this->m_weaponAttachModels, 0, 0x308ui64);
}

/*
==============
CgWeaponSystemSP::DrawUFOViewModel
==============
*/
_BOOL8 CgWeaponSystemSP::DrawUFOViewModel(CgWeaponSystemSP *this, const playerState_s *ps)
{
  return (unsigned int)(ps->pm_type - 2) > 1 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u);
}

/*
==============
CgWeaponSystemSP::EnableWeaponUVAnimOverride
==============
*/
void CgWeaponSystemSP::EnableWeaponUVAnimOverride(CgWeaponSystemSP *this, const int enable)
{
  ;
}

/*
==============
CgWeaponSystemSP::GetCustomAttachModel
==============
*/
XModel *CgWeaponSystemSP::GetCustomAttachModel(CgWeaponSystemSP *this, int modelIndex)
{
  __int64 v2; 
  int v5; 

  v2 = modelIndex;
  if ( (unsigned int)modelIndex >= 0x10 )
  {
    v5 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_CUSTOM_ATTACH_MODELS )", "modelIndex doesn't index MAX_CUSTOM_ATTACH_MODELS\n\t%i not in [0, %i)", modelIndex, v5) )
      __debugbreak();
  }
  return s_customAttachModels[v2];
}

/*
==============
CgWeaponSystemSP::GetWeaponAttachModels
==============
*/
__int64 CgWeaponSystemSP::GetWeaponAttachModels(CgWeaponSystemSP *this, unsigned __int16 modelIndex, DObjModel *outDObjModels)
{
  int v7; 
  CgAddonViewModelInfo *p_m_weaponAttachModels; 
  scr_string_t *m_addedViewModelBone; 
  float *v10; 
  __int64 v11; 
  XModel *v12; 
  vec3_t *v13; 
  XModel *v22; 
  unsigned __int16 v23; 
  __int64 result; 
  DObjModel *outDObjModel; 
  DObjModel *outDObjModela; 
  __int64 v28; 
  int v29; 
  vec4_t quat; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  if ( !outDObjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 740, ASSERT_TYPE_ASSERT, "(outDObjModels)", (const char *)&queryFormat, "outDObjModels") )
    __debugbreak();
  if ( modelIndex >= 0x20u )
  {
    LODWORD(outDObjModel) = modelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 741, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModel, 32) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, cs:__real@46fffe00 }
  v7 = 0;
  p_m_weaponAttachModels = &this->m_weaponAttachModels;
  m_addedViewModelBone = this->m_weaponAttachModels.m_addedViewModelBone;
  v29 = 0;
  v10 = &this->m_weaponAttachModels.m_addedViewModelOffset[0].v[2];
  v11 = 0i64;
  do
  {
    if ( p_m_weaponAttachModels->m_addedViewModels[0] )
    {
      if ( v7 >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 400, ASSERT_TYPE_ASSERT, "(modelIndex < MAX_CUSTOM_ATTACH_MODELS)", (const char *)&queryFormat, "modelIndex < MAX_CUSTOM_ATTACH_MODELS") )
        __debugbreak();
      v12 = s_customAttachModels[v7];
      if ( v12->numBones != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 403, ASSERT_TYPE_ASSERT, "(model->numBones == 2)", (const char *)&queryFormat, "model->numBones == 2") )
        __debugbreak();
      if ( v12->numRootBones != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 404, ASSERT_TYPE_ASSERT, "(model->numRootBones == 1)", (const char *)&queryFormat, "model->numRootBones == 1") )
        __debugbreak();
      *v12->boneNames = s_customBoneNames[v7][0];
      *((_DWORD *)v12->boneNames + 1) = s_customBoneNames[v7][1];
      v13 = &s_customTrans[v7];
      v12->trans = (float *)v13;
      v12->quats = &s_customQuats[v29];
      v13->v[0] = *(v10 - 2);
      v13->v[1] = *(v10 - 1);
      v13->v[2] = *v10;
      AnglesToQuat(&this->m_weaponAttachModels.m_addedViewModelAngles[v11], &quat);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0B8h+quat]
        vcvttss2si ecx, xmm1
      }
      *v12->quats = _ECX;
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0B8h+quat+4]
        vcvttss2si ecx, xmm1
      }
      v12->quats[1] = _ECX;
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0B8h+quat+8]
        vcvttss2si ecx, xmm1
      }
      v12->quats[2] = _ECX;
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0B8h+quat+0Ch]
        vcvttss2si ecx, xmm1
      }
      v12->quats[3] = _ECX;
      if ( (unsigned int)v7 >= 0x10 )
      {
        LODWORD(v28) = 16;
        LODWORD(outDObjModel) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_CUSTOM_ATTACH_MODELS )", "modelIndex doesn't index MAX_CUSTOM_ATTACH_MODELS\n\t%i not in [0, %i)", outDObjModel, v28) )
          __debugbreak();
      }
      v22 = s_customAttachModels[v7];
      if ( modelIndex >= 0x20u )
      {
        LODWORD(v28) = 32;
        LODWORD(outDObjModel) = modelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 753, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModel, v28) )
          __debugbreak();
      }
      DObjInitModel(v22, *m_addedViewModelBone, 1, 0, NULL, &outDObjModels[modelIndex]);
      v23 = modelIndex + 1;
      if ( v23 >= 0x20u )
      {
        LODWORD(v28) = 32;
        LODWORD(outDObjModela) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModela, v28) )
          __debugbreak();
      }
      DObjInitModel(p_m_weaponAttachModels->m_addedViewModels[0], v22->boneNames[1], 1, 0, NULL, &outDObjModels[v23]);
      modelIndex = v23 + 1;
      ++v7;
      v29 += 4;
    }
    v11 = (unsigned int)(v11 + 1);
    ++m_addedViewModelBone;
    p_m_weaponAttachModels = (CgAddonViewModelInfo *)((char *)p_m_weaponAttachModels + 8);
    v10 += 3;
  }
  while ( (unsigned int)v11 < 0x10 );
  result = modelIndex;
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
CgWeaponSystemSP::GetWeaponUVAnimOverride
==============
*/
float CgWeaponSystemSP::GetWeaponUVAnimOverride(CgWeaponSystemSP *this)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
CgWeaponSystemSP::InitCustomAttachModel
==============
*/
void CgWeaponSystemSP::InitCustomAttachModel(CgWeaponSystemSP *this, int modelIndex, const vec3_t *offset, const vec3_t *angles)
{
  __int64 v4; 
  XModel *v7; 
  vec3_t *v8; 
  vec4_t quat; 

  v4 = modelIndex;
  if ( modelIndex >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 400, ASSERT_TYPE_ASSERT, "(modelIndex < MAX_CUSTOM_ATTACH_MODELS)", (const char *)&queryFormat, "modelIndex < MAX_CUSTOM_ATTACH_MODELS") )
    __debugbreak();
  v7 = s_customAttachModels[v4];
  if ( v7->numBones != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 403, ASSERT_TYPE_ASSERT, "(model->numBones == 2)", (const char *)&queryFormat, "model->numBones == 2") )
    __debugbreak();
  if ( v7->numRootBones != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 404, ASSERT_TYPE_ASSERT, "(model->numRootBones == 1)", (const char *)&queryFormat, "model->numRootBones == 1") )
    __debugbreak();
  *v7->boneNames = s_customBoneNames[v4][0];
  *((_DWORD *)v7->boneNames + 1) = s_customBoneNames[v4][1];
  v8 = &s_customTrans[v4];
  v7->trans = (float *)v8;
  v7->quats = &s_customQuats[4 * (_DWORD)v4];
  v8->v[0] = offset->v[0];
  v8->v[1] = offset->v[1];
  v8->v[2] = offset->v[2];
  AnglesToQuat(angles, &quat);
  __asm
  {
    vmovss  xmm2, cs:__real@46fffe00
    vmulss  xmm1, xmm2, dword ptr [rsp+78h+quat]
    vcvttss2si ecx, xmm1
  }
  *v7->quats = _ECX;
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rsp+78h+quat+4]
    vcvttss2si ecx, xmm1
  }
  v7->quats[1] = _ECX;
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rsp+78h+quat+8]
    vcvttss2si ecx, xmm1
  }
  v7->quats[2] = _ECX;
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rsp+78h+quat+0Ch]
    vcvttss2si ecx, xmm1
  }
  v7->quats[3] = _ECX;
}

/*
==============
CgWeaponSystemSP::InitViewModel
==============
*/
void CgWeaponSystemSP::InitViewModel(CgWeaponSystemSP *this)
{
  XModel *v1; 
  scr_string_t v2; 
  scr_string_t (*v3)[2]; 
  __int64 v4; 
  __int64 v5; 
  XModel *v6; 
  scr_string_t *boneNames; 

  s_customAttachModels[0] = R_RegisterModel("tag_glue00");
  s_customAttachModels[1] = R_RegisterModel("tag_glue01");
  s_customAttachModels[2] = R_RegisterModel("tag_glue02");
  s_customAttachModels[3] = R_RegisterModel("tag_glue03");
  s_customAttachModels[4] = R_RegisterModel("tag_glue04");
  s_customAttachModels[5] = R_RegisterModel("tag_glue05");
  s_customAttachModels[6] = R_RegisterModel("tag_glue06");
  s_customAttachModels[7] = R_RegisterModel("tag_glue07");
  s_customAttachModels[8] = R_RegisterModel("tag_glue08");
  s_customAttachModels[9] = R_RegisterModel("tag_glue09");
  s_customAttachModels[10] = R_RegisterModel("tag_glue10");
  s_customAttachModels[11] = R_RegisterModel("tag_glue11");
  s_customAttachModels[12] = R_RegisterModel("tag_glue12");
  s_customAttachModels[13] = R_RegisterModel("tag_glue13");
  s_customAttachModels[14] = R_RegisterModel("tag_glue14");
  v1 = R_RegisterModel("tag_glue15");
  v2 = scr_const._;
  v3 = s_backupBoneNames;
  s_customAttachModels[15] = v1;
  v4 = 0i64;
  v5 = 16i64;
  do
  {
    v6 = s_customAttachModels[v4];
    ++v3;
    s_customBoneNames[v4++][0] = v2;
    boneNames = v6->boneNames;
    (*v3)[-2] = *boneNames;
    (*v3)[-1] = boneNames[1];
    --v5;
  }
  while ( v5 );
  s_customBoneNames[0][1] = scr_const.custom_attach_00;
  s_customBoneNames[1][1] = scr_const.custom_attach_01;
  s_customBoneNames[2][1] = scr_const.custom_attach_02;
  s_customBoneNames[3][1] = scr_const.custom_attach_03;
  s_customBoneNames[4][1] = scr_const.custom_attach_04;
  s_customBoneNames[5][1] = scr_const.custom_attach_05;
  s_customBoneNames[6][1] = scr_const.custom_attach_06;
  s_customBoneNames[7][1] = scr_const.custom_attach_07;
  s_customBoneNames[8][1] = scr_const.custom_attach_08;
  s_customBoneNames[9][1] = scr_const.custom_attach_09;
  s_customBoneNames[10][1] = scr_const.custom_attach_10;
  s_customBoneNames[11][1] = scr_const.custom_attach_11;
  s_customBoneNames[12][1] = scr_const.custom_attach_12;
  s_customBoneNames[13][1] = scr_const.custom_attach_13;
  s_customBoneNames[14][1] = scr_const.custom_attach_14;
  s_customBoneNames[15][1] = scr_const.custom_attach_15;
}

/*
==============
CgWeaponSystemSP::IsGrenadeDangerous
==============
*/
__int64 CgWeaponSystemSP::IsGrenadeDangerous(CgWeaponSystemSP *this, const centity_t *grenadeEntity)
{
  return 1i64;
}

/*
==============
CgWeaponSystemSP::IsLaserFlagOn
==============
*/
bool CgWeaponSystemSP::IsLaserFlagOn(CgWeaponSystemSP *this, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 564, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 0x13u);
}

/*
==============
CgWeaponSystemSP::IsPlayerUsingVehicleWeapon
==============
*/
_BOOL8 CgWeaponSystemSP::IsPlayerUsingVehicleWeapon(CgWeaponSystemSP *this, const playerState_s *playerState, const entityState_t *vehicleState)
{
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 553, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 554, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  return vehicleState->eType == ET_VEHICLE && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&vehicleState->lerp.eFlags, ACTIVE, 0xBu) && playerState->viewlocked_entNum == vehicleState->number;
}

/*
==============
CgWeaponSystemSP::IsWeaponViewModelLoaded
==============
*/
bool CgWeaponSystemSP::IsWeaponViewModelLoaded(CgWeaponSystemSP *this, const Weapon *r_weapon)
{
  return BG_WeaponsSP_AreWeaponModelsLoaded(r_weapon, 1);
}

/*
==============
CgWeaponSystemSP::IsWeaponWorldModelLoaded
==============
*/
bool CgWeaponSystemSP::IsWeaponWorldModelLoaded(CgWeaponSystemSP *this, const Weapon *r_weapon)
{
  return BG_WeaponsSP_AreWeaponModelsLoaded(r_weapon, 0);
}

/*
==============
CgWeaponSystemSP::SetWeaponUVAnimTimeOverride
==============
*/
void CgWeaponSystemSP::SetWeaponUVAnimTimeOverride(CgWeaponSystemSP *this, const int time)
{
  ;
}

/*
==============
CgWeaponSystemSP::ShutdownViewModel
==============
*/
void CgWeaponSystemSP::ShutdownViewModel(CgWeaponSystemSP *this)
{
  XModel **v1; 
  scr_string_t (*v2)[2]; 
  XModel *v3; 

  v1 = s_customAttachModels;
  v2 = s_backupBoneNames;
  do
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v3->boneNames = *(_DWORD *)v2;
      *((_DWORD *)v3->boneNames + 1) = (*v2)[1];
    }
    ++v1;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&unk_151515230 );
  memset_0(&this->m_weaponAttachModels, 0, 0x308ui64);
}

/*
==============
CgWeaponSystemSP::SimulateBulletFire_Orientation
==============
*/
bool CgWeaponSystemSP::SimulateBulletFire_Orientation(CgWeaponSystemSP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *outTracerStart)
{
  unsigned int weaponIdx; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v26; 
  __int64 localClientNum; 
  int CmdNumber; 
  scr_string_t v37; 
  scr_string_t v38; 
  __int64 v43; 
  int v51; 
  const DObj *v52; 
  char v66; 
  CgHandler *Handler; 
  bool result; 
  int number; 
  const DObj *ClientDObj; 
  char *fmt; 
  __int64 v90; 
  __int64 v91; 
  double v92; 
  double v93; 
  double v94; 
  double v95; 
  double v96; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  int handle[2]; 
  Weapon *r_weapon; 
  float *v101; 
  const ClActiveClient *Client; 
  playerState_s *ps; 
  __int64 v104; 
  char v105; 
  vec3_t angles; 
  orientation_t orient; 
  void *retaddr; 

  _RAX = &retaddr;
  v104 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  r_weapon = (Weapon *)weapon;
  _RSI = outOrient;
  v101 = outAimSpreadAmount;
  _R14 = outTracerStart;
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weapon->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RBX = LocalClientGlobals;
  if ( !isPlayerWeaponView )
  {
    if ( BG_IsActorEntity(&inflictorEnt->nextState) )
    {
      *(double *)&_XMM0 = BG_ADSSpread(r_weapon, isAlternate, 0, 0);
      _RAX = v101;
      __asm { vmovss  dword ptr [rax], xmm0 }
      number = inflictorEnt->nextState.number;
      outBoneIndex[0] = -2;
      handle[0] = 0;
      ClientDObj = Com_GetClientDObj(number, this->m_localClientNum);
      if ( ClientDObj && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, ClientDObj, (scr_string_t *)handle, outBoneIndex) && CG_Entity_GetBoneOrientation(this->m_localClientNum, number, outBoneIndex[0], _RSI) )
      {
        _R14->v[0] = _RSI->origin.v[0];
        _R14->v[1] = _RSI->origin.v[1];
        _R14->v[2] = _RSI->origin.v[2];
        result = 1;
        goto LABEL_46;
      }
    }
    else
    {
      Com_PrintError(14, "Unknown eType %i in SimulateBulletFire_Orientation()\n", (unsigned int)inflictorEnt->nextState.eType);
    }
    goto LABEL_45;
  }
  _R15 = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  v26 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+744h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rbx+0B519Ch]
      vcvtss2sd xmm2, xmm2, xmm2
    }
    LODWORD(fmt) = _RBX->time;
    __asm
    {
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(17, "C: SimulateBulletFire_Orientation: Last aim spread scale: %.5f Aim spread scale ps: %.5f Time: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt);
  }
  handle[0] = hand + 2048;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B519Ch]
    vmulss  xmm8, xmm0, cs:__real@3b808081
  }
  CG_GetPlayerViewOrigin(this->m_localClientNum, _R15, &_RSI->origin);
  localClientNum = _RBX->localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v91 = cl_maxLocalClients;
    LODWORD(v90) = _RBX->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v90, v91) )
      __debugbreak();
  }
  if ( (_BYTE)ClActiveClient::ms_activeClientType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 84, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::SP") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 85, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  CmdNumber = ClActiveClient_GetCmdNumber(ClActiveClient::ms_activeClients[localClientNum]);
  Client = NULL;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)_RBX->localClientNum);
  v37 = ClActiveClient_GetCmdNumber(Client);
  v38 = v37;
  outTagName = v37;
  if ( CmdNumber > v37 )
  {
    LODWORD(fmt) = v37;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber > v38 - 128 && CmdNumber > 0 )
  {
    _RBX = &Client->cmds[CmdNumber & 0x7F];
    memset(&outTagName, 0, sizeof(outTagName));
    if ( (const ClActiveClient *)((char *)Client + 264 * (CmdNumber & 0x7F)) == (const ClActiveClient *)-472i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RCX = &v105;
    v43 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RBX = (usercmd_s *)((char *)_RBX + 128);
      --v43;
    }
    while ( v43 );
    *(_QWORD *)_RCX = _RBX->buttons;
    __asm
    {
      vmovss  xmm0, [rbp+160h+var_F4]
      vmovss  dword ptr [rbp+160h+angles], xmm0
      vmovss  xmm1, [rbp+160h+var_F0]
    }
  }
  else
  {
    memset(&outTagName, 0, sizeof(outTagName));
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+49DF0h]
      vmovss  dword ptr [rbp+160h+angles], xmm0
      vmovss  xmm1, dword ptr [rbx+49DF4h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+160h+angles+4], xmm1
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+160h+angles+8], xmm6
  }
  if ( !TagPair::IsEmpty((TagPair *)&tagPair) )
  {
    outBoneIndex[0] = -2;
    outTagName = 0;
    v51 = handle[0];
    v52 = Com_GetClientDObj(handle[0], this->m_localClientNum);
    if ( v52 && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v52, &outTagName, outBoneIndex) && CG_Entity_GetBoneOrientation(this->m_localClientNum, v51, outBoneIndex[0], &orient) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+160h+orient.origin]
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm1, dword ptr [rbp+160h+orient.origin+4]
        vmovss  dword ptr [r14+4], xmm1
        vmovss  xmm0, dword ptr [rbp+160h+orient.origin+8]
        vmovss  dword ptr [r14+8], xmm0
      }
      goto LABEL_39;
    }
LABEL_45:
    result = 0;
    goto LABEL_46;
  }
  _R14->v[0] = _RSI->origin.v[0];
  _R14->v[1] = _RSI->origin.v[1];
  _R14->v[2] = _RSI->origin.v[2];
LABEL_39:
  AngleVectors(&angles, _RSI->axis.m, &_RSI->axis.m[1], &_RSI->axis.m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vmovss  xmm4, dword ptr [rsi+0Ch]
    vmovss  xmm3, dword ptr [rsi+14h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v66 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+160h+angles+4]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbp+160h+angles]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm2, dword ptr [rsi+14h]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovss  xmm3, dword ptr [rsi+10h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  qword ptr [rsp+50h], xmm0
      vmovsd  [rsp+260h+var_218], xmm1
      vmovsd  [rsp+260h+var_220], xmm2
      vmovsd  [rsp+260h+var_228], xmm3
      vmovsd  [rsp+260h+var_230], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 210, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( outOrient->axis[0] ))", "%s\n\tCgWeaponSystemSP::SimulateBulletFire_Orientation - Firing dir is not normalized. Forward: %f %f %f, Gun Pitch: %f Gun Yaw: %f", "Vec3IsNormalized( outOrient->axis[0] )", v92, v93, v94, v95, v96) )
      __debugbreak();
  }
  Vec3NormalizeFast(_RSI->axis.m);
  Vec3NormalizeFast(&_RSI->axis.m[1]);
  Vec3NormalizeFast(&_RSI->axis.m[2]);
  _RDI = ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+730h]
    vcmpeqss xmm1, xmm0, cs:__real@3f800000
    vblendvps xmm6, xmm8, xmm6, xmm1
  }
  Handler = CgHandler::getHandler(this->m_localClientNum);
  __asm { vmovaps xmm3, xmm6; aimSpreadScale }
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, _RDI, r_weapon, *(float *)&_XMM3);
  _RAX = v101;
  __asm { vmovss  dword ptr [rax], xmm0 }
  result = 1;
LABEL_46:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+260h+var_58+8]
    vmovaps xmm8, [rsp+260h+var_68+8]
  }
  return result;
}

/*
==============
CgWeaponSystemSP::SimulateBulletFire_UseEventBasedHitEffect
==============
*/
_BOOL8 CgWeaponSystemSP::SimulateBulletFire_UseEventBasedHitEffect(CgWeaponSystemSP *this, int sourceEntityNum, int targetEntityNum, int event)
{
  centity_t *Entity; 
  entityState_t *p_nextState; 

  if ( event != 96 && event > 93 && event < 99 )
    return 0i64;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, sourceEntityNum);
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((p_nextState->eType - 1) & 0xFFEF) != 0 || (unsigned int)(targetEntityNum - 2046) > 1;
}

/*
==============
CgWeaponSystemSP::TouchHandModel
==============
*/
void CgWeaponSystemSP::TouchHandModel(CgWeaponSystemSP *this)
{
  cg_t *LocalClientGlobals; 
  ClConfigStrings *ClConfigStrings; 
  const char *v3; 
  const char *v4; 
  const XModel *v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.viewmodelIndex > 0 )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v3 = ClConfigStrings->GetModelString(ClConfigStrings, LocalClientGlobals->predictedPlayerState.viewmodelIndex);
    v4 = v3;
    if ( (!v3 || !*v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 720, ASSERT_TYPE_ASSERT, "(specifiedModelName && specifiedModelName[0])", (const char *)&queryFormat, "specifiedModelName && specifiedModelName[0]") )
      __debugbreak();
    v5 = R_RegisterModel(v4);
    Stream_TouchXModel(v5);
  }
}

/*
==============
CgWeaponSystemSP::TouchWeaponAttachModels
==============
*/
void CgWeaponSystemSP::TouchWeaponAttachModels(CgWeaponSystemSP *this)
{
  XModel **m_currentAddOnModels; 
  __int64 v2; 

  m_currentAddOnModels = this->m_currentAddOnModels;
  v2 = 16i64;
  do
  {
    if ( *m_currentAddOnModels )
      Stream_TouchXModel(*m_currentAddOnModels, MIP3);
    ++m_currentAddOnModels;
    --v2;
  }
  while ( v2 );
}

/*
==============
CgWeaponSystemSP::UpdateBulletFire
==============
*/
void CgWeaponSystemSP::UpdateBulletFire(CgWeaponSystemSP *this, int eventId, centity_t *inflictorEnt, const int knownHitClientNum, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const int fireSequenceIndex, const CgEventLodData *optionalEventLod, const CgFireEventHighPrecisionData *highPrecisionFireData)
{
  bool v15; 
  bool IsBeamWeapon; 

  v15 = (unsigned int)(eventId - 205) <= 1;
  IsBeamWeapon = BG_IsBeamWeapon(weapon, isAlternate);
  if ( isPlayerWeaponView || inflictorEnt->nextState.eType == ET_ACTOR && (IsBeamWeapon || v15) )
  {
    if ( CG_Weapons_IsBulletWeapon(weapon, isAlternate) )
    {
      if ( !BG_IsBallWeapon(weapon) )
        CgWeaponSystem::SimulateBulletFire(this, eventId, inflictorEnt, knownHitClientNum, weapon, isAlternate, tagPair, isPlayerView, isPlayerWeaponView, hand, fireSequenceIndex, optionalEventLod, highPrecisionFireData);
    }
  }
}

/*
==============
CgWeaponSystemSP::UpdateMuzzleFlash
==============
*/
void CgWeaponSystemSP::UpdateMuzzleFlash(CgWeaponSystemSP *this, centity_t *cent, const Weapon *weapon, bool isAlternate, int bViewModel, int bDrawGun)
{
  __int64 v10; 
  bool IsUsingDualFOV; 
  int v12; 
  bool v13; 
  int flags; 
  int i; 
  int v16; 
  int v17; 
  bool isFirstFlash; 
  int WeaponLastChamberFired; 
  const playerState_s *v20; 
  int v21; 
  bool inADS; 
  const TagPair *WeaponFlashTagname; 
  bool v24; 
  const TagPair *v25; 
  TagPair *v26; 
  int number; 
  LocalClientNum_t m_localClientNum; 
  const DObj *ClientDObj; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  cg_t *LocalClientGlobals; 
  int inDualFov; 
  FXRegisteredDef fxDef; 
  TagPair v35; 
  TagPair result; 
  TagPair v37; 
  TagPair v38; 
  __int64 v39; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v10 = (__int64)LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 800, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  IsUsingDualFOV = CG_View_IsUsingDualFOV((const LocalClientNum_t)this->m_localClientNum);
  v12 = 0;
  v13 = !IsUsingDualFOV;
  flags = cent->flags;
  if ( !v13 )
    v12 = 1;
  inDualFov = v12;
  if ( (flags & 0x14) != 0 )
  {
    if ( bDrawGun )
    {
      for ( i = 0; i < 2; ++i )
      {
        v16 = 16;
        if ( !i )
          v16 = 4;
        if ( (v16 & cent->flags) != 0 )
        {
          v17 = 32;
          if ( !i )
            v17 = 8;
          isFirstFlash = (v17 & cent->flags) != 0;
          if ( bViewModel )
          {
            WeaponLastChamberFired = PM_GetWeaponLastChamberFired((const playerState_s *)(v10 + 8), weapon, isAlternate, (PlayerHandIndex)i);
            v20 = (const playerState_s *)(v10 + 8);
            v21 = WeaponLastChamberFired;
            inADS = BG_InADS(v20);
            WeaponFlashTagname = BG_GetWeaponFlashTagname(&result, weapon, isAlternate, v21);
            CG_WeaponsSP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, i + 2048, weapon, isAlternate, 1, *WeaponFlashTagname, inADS, inDualFov, isFirstFlash);
          }
          else if ( i )
          {
            v26 = BG_GetWeaponFlashTagname(&v38, weapon, isAlternate, 0);
            number = cent->nextState.number;
            m_localClientNum = this->m_localClientNum;
            v35 = *v26;
            fxDef.m_particleSystemDef = NULL;
            v39 = 0i64;
            fxDef.m_particleSystemDef = BG_WorldFlashEffect(0i64, weapon, isAlternate, isFirstFlash).particleSystemDef;
            if ( fxDef.m_particleSystemDef )
            {
              outBoneIndex[0] = -2;
              outTagName = 0;
              ClientDObj = Com_GetClientDObj(number, m_localClientNum);
              TagPair::GetTagNameAndBoneIndex(&v35, ClientDObj, &outTagName, outBoneIndex);
              CG_PlayBoltedEffectOnSecondTag(m_localClientNum, &fxDef, number, outTagName);
            }
          }
          else
          {
            v24 = BG_InADS((const playerState_s *)(v10 + 8));
            v25 = BG_GetWeaponFlashTagname(&v37, weapon, isAlternate, 0);
            CG_WeaponsSP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, cent->nextState.number, weapon, isAlternate, 0, *v25, v24, 0, isFirstFlash);
          }
          v10 = (__int64)LocalClientGlobals;
        }
      }
      flags = cent->flags;
    }
    cent->flags = flags & 0xFFFFFF83;
  }
}

/*
==============
CgWeaponSystemSP::UpdateMuzzleFlashNonPlayer
==============
*/
void CgWeaponSystemSP::UpdateMuzzleFlashNonPlayer(CgWeaponSystemSP *this, const entityState_t *ent, const TagPair tagPair, const Weapon *weapon, bool isAlternate)
{
  cg_t *LocalClientGlobals; 
  int number; 
  LocalClientNum_t m_localClientNum; 
  const DObj *ClientDObj; 
  ClActiveClient *Client; 
  int v14; 
  bool inADS; 
  bool v16; 
  TagPair tagPaira; 
  unsigned __int8 outBoneIndex[8]; 
  TagPair v19; 
  FXRegisteredDef fxDef; 
  scr_string_t outTagName[2]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 844, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( ent->eType == ET_TURRET )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( this->m_localClientNum )
    {
      tagPaira.m_primaryTagName = this->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 850, ASSERT_TYPE_ASSERT, "( ( m_localClientNum == CL_GetOnlyLocalClientNum() ) )", "( m_localClientNum ) = %i", tagPaira) )
        __debugbreak();
    }
    if ( BG_IsTurretActiveFlags(&ent->lerp.eFlags) )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
      if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
      {
        v14 = CgWeaponSystem::ClientViewLockedOnTurret(this, ent->number);
        inADS = BG_InADS(&LocalClientGlobals->predictedPlayerState);
        CG_WeaponsSP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, ent->number, weapon, isAlternate, v14, tagPair, inADS, 0, 0);
      }
    }
    else
    {
      v16 = BG_InADS(&LocalClientGlobals->predictedPlayerState);
      CG_WeaponsSP_WeaponFlash((const LocalClientNum_t)this->m_localClientNum, ent->number, weapon, isAlternate, 0, tagPair, v16, 0, 0);
    }
  }
  else if ( (ent->eType == ET_HELICOPTER || ent->eType == ET_VEHICLE || ent->eType == ET_ACTOR) && !CGMovingPlatformsSP::BoltActorWeaponFlash(ent, this->m_localClientNum, weapon, tagPair, isAlternate) )
  {
    BG_InADS(&LocalClientGlobals->predictedPlayerState);
    number = ent->number;
    m_localClientNum = this->m_localClientNum;
    v19 = tagPair;
    *(_QWORD *)outTagName = 0i64;
    fxDef.m_particleSystemDef = BG_WorldFlashEffect(0i64, weapon, isAlternate, 0).particleSystemDef;
    if ( fxDef.m_particleSystemDef )
    {
      outBoneIndex[0] = -2;
      outTagName[0] = 0;
      ClientDObj = Com_GetClientDObj(number, m_localClientNum);
      TagPair::GetTagNameAndBoneIndex(&v19, ClientDObj, outTagName, outBoneIndex);
      CG_PlayBoltedEffect(m_localClientNum, &fxDef, number, outTagName[0]);
    }
  }
}

/*
==============
CgWeaponSystemSP::UpdateWeaponAttachModels
==============
*/
__int64 CgWeaponSystemSP::UpdateWeaponAttachModels(CgWeaponSystemSP *this)
{
  XModel *v1; 
  __int64 result; 
  XModel *v3; 
  XModel *v4; 
  XModel *v5; 
  XModel *v6; 
  XModel *v7; 
  XModel *v8; 
  XModel *v9; 
  XModel *v10; 
  XModel *v11; 
  XModel *v12; 
  XModel *v13; 
  XModel *v14; 
  XModel *v15; 
  XModel *v16; 
  XModel *v17; 

  v1 = this->m_weaponAttachModels.m_addedViewModels[0];
  result = 0i64;
  if ( this->m_currentAddOnModels[0] != v1 )
  {
    this->m_currentAddOnModels[0] = v1;
    result = 1i64;
  }
  v3 = this->m_weaponAttachModels.m_addedViewModels[1];
  if ( this->m_currentAddOnModels[1] != v3 )
  {
    this->m_currentAddOnModels[1] = v3;
    result = 1i64;
  }
  v4 = this->m_weaponAttachModels.m_addedViewModels[2];
  if ( this->m_currentAddOnModels[2] != v4 )
  {
    this->m_currentAddOnModels[2] = v4;
    result = 1i64;
  }
  v5 = this->m_weaponAttachModels.m_addedViewModels[3];
  if ( this->m_currentAddOnModels[3] != v5 )
  {
    this->m_currentAddOnModels[3] = v5;
    result = 1i64;
  }
  v6 = this->m_weaponAttachModels.m_addedViewModels[4];
  if ( this->m_currentAddOnModels[4] != v6 )
  {
    this->m_currentAddOnModels[4] = v6;
    result = 1i64;
  }
  v7 = this->m_weaponAttachModels.m_addedViewModels[5];
  if ( this->m_currentAddOnModels[5] != v7 )
  {
    this->m_currentAddOnModels[5] = v7;
    result = 1i64;
  }
  v8 = this->m_weaponAttachModels.m_addedViewModels[6];
  if ( this->m_currentAddOnModels[6] != v8 )
  {
    this->m_currentAddOnModels[6] = v8;
    result = 1i64;
  }
  v9 = this->m_weaponAttachModels.m_addedViewModels[7];
  if ( this->m_currentAddOnModels[7] != v9 )
  {
    this->m_currentAddOnModels[7] = v9;
    result = 1i64;
  }
  v10 = this->m_weaponAttachModels.m_addedViewModels[8];
  if ( this->m_currentAddOnModels[8] != v10 )
  {
    this->m_currentAddOnModels[8] = v10;
    result = 1i64;
  }
  v11 = this->m_weaponAttachModels.m_addedViewModels[9];
  if ( this->m_currentAddOnModels[9] != v11 )
  {
    this->m_currentAddOnModels[9] = v11;
    result = 1i64;
  }
  v12 = this->m_weaponAttachModels.m_addedViewModels[10];
  if ( this->m_currentAddOnModels[10] != v12 )
  {
    this->m_currentAddOnModels[10] = v12;
    result = 1i64;
  }
  v13 = this->m_weaponAttachModels.m_addedViewModels[11];
  if ( this->m_currentAddOnModels[11] != v13 )
  {
    this->m_currentAddOnModels[11] = v13;
    result = 1i64;
  }
  v14 = this->m_weaponAttachModels.m_addedViewModels[12];
  if ( this->m_currentAddOnModels[12] != v14 )
  {
    this->m_currentAddOnModels[12] = v14;
    result = 1i64;
  }
  v15 = this->m_weaponAttachModels.m_addedViewModels[13];
  if ( this->m_currentAddOnModels[13] != v15 )
  {
    this->m_currentAddOnModels[13] = v15;
    result = 1i64;
  }
  v16 = this->m_weaponAttachModels.m_addedViewModels[14];
  if ( this->m_currentAddOnModels[14] != v16 )
  {
    this->m_currentAddOnModels[14] = v16;
    result = 1i64;
  }
  v17 = this->m_weaponAttachModels.m_addedViewModels[15];
  if ( this->m_currentAddOnModels[15] != v17 )
  {
    this->m_currentAddOnModels[15] = v17;
    return 1i64;
  }
  return result;
}

/*
==============
CgWeaponSystemSP::UpdateWeaponPossession
==============
*/
void CgWeaponSystemSP::UpdateWeaponPossession(CgWeaponSystemSP *this, playerState_s *ps)
{
  ;
}

