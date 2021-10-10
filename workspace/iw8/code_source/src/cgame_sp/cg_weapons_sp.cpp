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
  FXRegisteredDef *v18; 
  __int64 v22; 
  unsigned int v24; 
  int ShouldDynamicBoltBullet; 
  int v26; 
  FXRegisteredDef *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  Weapon *v32; 
  FXRegisteredDef hitFx[4]; 
  CgSfxImpactInfo *outSfxInfoa; 

  v18 = hitFx;
  v22 = 2i64;
  do
  {
    FXRegisteredDef::FXRegisteredDef(v18++);
    --v22;
  }
  while ( v22 );
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( this->m_localClientNum )
  {
    LODWORD(v32) = this->m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 976, ASSERT_TYPE_ASSERT, "( ( m_localClientNum == CL_GetOnlyLocalClientNum() ) )", "( m_localClientNum ) = %i", v32) )
      __debugbreak();
  }
  if ( sourceEntityNum < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 978, ASSERT_TYPE_ASSERT, "(sourceEntityNum >= 0)", (const char *)&queryFormat, "sourceEntityNum >= 0") )
    __debugbreak();
  if ( sourceEntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 979, ASSERT_TYPE_ASSERT, "(sourceEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "sourceEntityNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)surfType >= 0x40 )
  {
    LODWORD(v32) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( surfType ) < (unsigned)( 64 )", "surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v32, 64) )
      __debugbreak();
  }
  v24 = 0;
  outSfxInfo->hitSound = NULL;
  ShouldDynamicBoltBullet = CGMovingPlatforms::ShouldDynamicBoltBullet(this->m_localClientNum, targetEntityNum);
  outSfxInfoa = (CgSfxImpactInfo *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_GetImpactEffectForWeapon(this->m_localClientNum, sourceEntityNum, targetEntityNum, 1, hitContents, weapon, isAlternate, surfType, impactFlags, hitArmorType, hitFx, &outSfxInfo->hitSound, &outSfxInfo->isExplosion);
  if ( !ShouldDynamicBoltBullet || (v26 = targetEntityNum, targetEntityNum == 2047) )
    v26 = 2046;
  outSfxInfo->impactEnt = v26;
  v27 = hitFx;
  do
  {
    if ( !v27->m_particleSystemDef )
      goto LABEL_52;
    if ( surfType == 7 )
    {
      CgWeaponSystem::BloodSplatterOnShield(this, targetEntityNum);
      v28 = DVARBOOL_cg_blood;
      if ( !DVARBOOL_cg_blood && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_blood") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( !v28->current.enabled )
        goto LABEL_40;
      v29 = DVARBOOL_cg_bloodLimit;
      if ( !DVARBOOL_cg_bloodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_bloodLimit") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( !v29->current.enabled )
        goto LABEL_41;
      v30 = DVARINT_cg_bloodLimitMsec;
      if ( !DVARINT_cg_bloodLimitMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_bloodLimitMsec") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( *(&outSfxInfoa[1087].impactEnt + 1) - LODWORD(outSfxInfoa[17196].hitSound) >= v30->current.integer )
        LODWORD(outSfxInfoa[17196].hitSound) = *(&outSfxInfoa[1087].impactEnt + 1);
      else
LABEL_40:
        v27->m_particleSystemDef = (const ParticleSystemDef *)cgMedia.fxNoBloodFleshHit;
    }
LABEL_41:
    v31 = DVARBOOL_cg_marks_ents_player_only;
    if ( !DVARBOOL_cg_marks_ents_player_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_marks_ents_player_only") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled && sourceEntityNum < 1 )
      targetEntityNum = 2047;
    if ( !CgWeaponSystem::CullBulletHitEffect(this, event, position, normal, sourceEntityNum, targetEntityNum, impactFlags) && (normal->v[0] != 0.0 || normal->v[1] != 0.0 || normal->v[2] != 0.0) )
      CG_PlayBulletImpactEffect((const LocalClientNum_t)this->m_localClientNum, sourceEntityNum, targetEntityNum, targetScriptableIndex, boneIndex, position, normal, surfType, impactFlags, hitFx[v24], 1);
LABEL_52:
    ++v24;
    ++v27;
  }
  while ( v24 < 2 );
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
  int v5; 
  CgAddonViewModelInfo *p_m_weaponAttachModels; 
  scr_string_t *m_addedViewModelBone; 
  float *v8; 
  __int64 v9; 
  XModel *v10; 
  vec3_t *v11; 
  XModel *v12; 
  unsigned __int16 v13; 
  DObjModel *outDObjModel; 
  DObjModel *outDObjModela; 
  __int64 v17; 
  int v18; 
  vec4_t quat; 

  if ( !outDObjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 740, ASSERT_TYPE_ASSERT, "(outDObjModels)", (const char *)&queryFormat, "outDObjModels") )
    __debugbreak();
  if ( modelIndex >= 0x20u )
  {
    LODWORD(outDObjModel) = modelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 741, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModel, 32) )
      __debugbreak();
  }
  v5 = 0;
  p_m_weaponAttachModels = &this->m_weaponAttachModels;
  m_addedViewModelBone = this->m_weaponAttachModels.m_addedViewModelBone;
  v18 = 0;
  v8 = &this->m_weaponAttachModels.m_addedViewModelOffset[0].v[2];
  v9 = 0i64;
  do
  {
    if ( p_m_weaponAttachModels->m_addedViewModels[0] )
    {
      if ( v5 >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 400, ASSERT_TYPE_ASSERT, "(modelIndex < MAX_CUSTOM_ATTACH_MODELS)", (const char *)&queryFormat, "modelIndex < MAX_CUSTOM_ATTACH_MODELS") )
        __debugbreak();
      v10 = s_customAttachModels[v5];
      if ( v10->numBones != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 403, ASSERT_TYPE_ASSERT, "(model->numBones == 2)", (const char *)&queryFormat, "model->numBones == 2") )
        __debugbreak();
      if ( v10->numRootBones != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 404, ASSERT_TYPE_ASSERT, "(model->numRootBones == 1)", (const char *)&queryFormat, "model->numRootBones == 1") )
        __debugbreak();
      *v10->boneNames = s_customBoneNames[v5][0];
      *((_DWORD *)v10->boneNames + 1) = s_customBoneNames[v5][1];
      v11 = &s_customTrans[v5];
      v10->trans = (float *)v11;
      v10->quats = &s_customQuats[v18];
      v11->v[0] = *(v8 - 2);
      v11->v[1] = *(v8 - 1);
      v11->v[2] = *v8;
      AnglesToQuat(&this->m_weaponAttachModels.m_addedViewModelAngles[v9], &quat);
      *v10->quats = (int)(float)(32767.0 * quat.v[0]);
      v10->quats[1] = (int)(float)(32767.0 * quat.v[1]);
      v10->quats[2] = (int)(float)(32767.0 * quat.v[2]);
      v10->quats[3] = (int)(float)(32767.0 * quat.v[3]);
      if ( (unsigned int)v5 >= 0x10 )
      {
        LODWORD(v17) = 16;
        LODWORD(outDObjModel) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( MAX_CUSTOM_ATTACH_MODELS )", "modelIndex doesn't index MAX_CUSTOM_ATTACH_MODELS\n\t%i not in [0, %i)", outDObjModel, v17) )
          __debugbreak();
      }
      v12 = s_customAttachModels[v5];
      if ( modelIndex >= 0x20u )
      {
        LODWORD(v17) = 32;
        LODWORD(outDObjModel) = modelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 753, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModel, v17) )
          __debugbreak();
      }
      DObjInitModel(v12, *m_addedViewModelBone, 1, 0, NULL, &outDObjModels[modelIndex]);
      v13 = modelIndex + 1;
      if ( v13 >= 0x20u )
      {
        LODWORD(v17) = 32;
        LODWORD(outDObjModela) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 757, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( 32 ) )", "modelIndex doesn't index DOBJ_MAX_CHARACTER_SUBMODELS\n\t%i not in [0, %i)", outDObjModela, v17) )
          __debugbreak();
      }
      DObjInitModel(p_m_weaponAttachModels->m_addedViewModels[0], v12->boneNames[1], 1, 0, NULL, &outDObjModels[v13]);
      modelIndex = v13 + 1;
      ++v5;
      v18 += 4;
    }
    v9 = (unsigned int)(v9 + 1);
    ++m_addedViewModelBone;
    p_m_weaponAttachModels = (CgAddonViewModelInfo *)((char *)p_m_weaponAttachModels + 8);
    v8 += 3;
  }
  while ( (unsigned int)v9 < 0x10 );
  return modelIndex;
}

/*
==============
CgWeaponSystemSP::GetWeaponUVAnimOverride
==============
*/
float CgWeaponSystemSP::GetWeaponUVAnimOverride(CgWeaponSystemSP *this)
{
  return 0.0;
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
  *v7->quats = (int)(float)(32767.0 * quat.v[0]);
  v7->quats[1] = (int)(float)(32767.0 * quat.v[1]);
  v7->quats[2] = (int)(float)(32767.0 * quat.v[2]);
  v7->quats[3] = (int)(float)(32767.0 * quat.v[3]);
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
char CgWeaponSystemSP::SimulateBulletFire_Orientation(CgWeaponSystemSP *this, centity_t *inflictorEnt, const Weapon *weapon, bool isAlternate, const TagPair tagPair, bool isPlayerView, bool isPlayerWeaponView, PlayerHandIndex hand, const bool calculateExactOrigin, const CgFireEventHighPrecisionData *highPrecisionFireData, orientation_t *outOrient, float *outAimSpreadAmount, vec3_t *outTracerStart)
{
  orientation_t *v16; 
  vec3_t *v17; 
  unsigned int weaponIdx; 
  cg_t *LocalClientGlobals; 
  cg_t *v20; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v22; 
  __int128 aimSpreadScale_low; 
  __int64 localClientNum; 
  int CmdNumber; 
  scr_string_t v27; 
  scr_string_t v28; 
  float v29; 
  usercmd_s *v30; 
  char *v31; 
  __int64 v32; 
  int v33; 
  const DObj *v34; 
  float v35; 
  playerState_s *v36; 
  CgHandler *Handler; 
  double v42; 
  int number; 
  const DObj *ClientDObj; 
  char *fmt; 
  __int64 v46; 
  __int64 v47; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  int handle[2]; 
  Weapon *r_weapon; 
  float *v52; 
  const ClActiveClient *Client; 
  playerState_s *ps; 
  __int64 v55; 
  char v56; 
  float v57; 
  float v58; 
  vec3_t angles; 
  orientation_t orient; 

  v55 = -2i64;
  r_weapon = (Weapon *)weapon;
  v16 = outOrient;
  v52 = outAimSpreadAmount;
  v17 = outTracerStart;
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weapon->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v20 = LocalClientGlobals;
  if ( !isPlayerWeaponView )
  {
    if ( BG_IsActorEntity(&inflictorEnt->nextState) )
    {
      v42 = BG_ADSSpread(r_weapon, isAlternate, 0, 0);
      *v52 = *(float *)&v42;
      number = inflictorEnt->nextState.number;
      outBoneIndex[0] = -2;
      handle[0] = 0;
      ClientDObj = Com_GetClientDObj(number, this->m_localClientNum);
      if ( ClientDObj && TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, ClientDObj, (scr_string_t *)handle, outBoneIndex) && CG_Entity_GetBoneOrientation(this->m_localClientNum, number, outBoneIndex[0], v16) )
      {
        v17->v[0] = v16->origin.v[0];
        v17->v[1] = v16->origin.v[1];
        v17->v[2] = v16->origin.v[2];
        return 1;
      }
    }
    else
    {
      Com_PrintError(14, "Unknown eType %i in SimulateBulletFire_Orientation()\n", (unsigned int)inflictorEnt->nextState.eType);
    }
    return 0;
  }
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  v22 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    LODWORD(fmt) = v20->time;
    Com_Printf(17, "C: SimulateBulletFire_Orientation: Last aim spread scale: %.5f Aim spread scale ps: %.5f Time: %d\n", v20->lastFrame.aimSpreadScale, p_predictedPlayerState->weapCommon.aimSpreadScale, fmt);
  }
  handle[0] = hand + 2048;
  aimSpreadScale_low = LODWORD(v20->lastFrame.aimSpreadScale);
  *(float *)&aimSpreadScale_low = v20->lastFrame.aimSpreadScale * 0.0039215689;
  _XMM8 = aimSpreadScale_low;
  CG_GetPlayerViewOrigin(this->m_localClientNum, p_predictedPlayerState, &v16->origin);
  localClientNum = v20->localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v47 = cl_maxLocalClients;
    LODWORD(v46) = v20->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( (_BYTE)ClActiveClient::ms_activeClientType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 84, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::SP") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.h", 85, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  CmdNumber = ClActiveClient_GetCmdNumber(ClActiveClient::ms_activeClients[localClientNum]);
  Client = NULL;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v20->localClientNum);
  v27 = ClActiveClient_GetCmdNumber(Client);
  v28 = v27;
  outTagName = v27;
  if ( CmdNumber > v27 )
  {
    LODWORD(fmt) = v27;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber > v28 - 128 && CmdNumber > 0 )
  {
    v30 = &Client->cmds[CmdNumber & 0x7F];
    memset(&outTagName, 0, sizeof(outTagName));
    if ( (const ClActiveClient *)((char *)Client + 264 * (CmdNumber & 0x7F)) == (const ClActiveClient *)-472i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    v31 = &v56;
    v32 = 2i64;
    do
    {
      *(__m256i *)v31 = *(__m256i *)&v30->buttons;
      *((__m256i *)v31 + 1) = *(__m256i *)(&v30->angles.xy + 1);
      *((__m256i *)v31 + 2) = *(__m256i *)&v30->weapon.attachmentVariationIndices[1];
      *((_OWORD *)v31 + 6) = *(_OWORD *)&v30->offHand.weaponIdx;
      v31 += 128;
      *((_OWORD *)v31 - 1) = *(_OWORD *)&v30->offHand.weaponAttachments[2];
      v30 = (usercmd_s *)((char *)v30 + 128);
      --v32;
    }
    while ( v32 );
    *(_QWORD *)v31 = v30->buttons;
    angles.v[0] = v57;
    v29 = v58;
  }
  else
  {
    memset(&outTagName, 0, sizeof(outTagName));
    angles.v[0] = v20->gunAngles.v[0];
    v29 = v20->gunAngles.v[1];
  }
  angles.v[1] = v29;
  angles.v[2] = 0.0;
  if ( TagPair::IsEmpty((TagPair *)&tagPair) )
  {
    v17->v[0] = v16->origin.v[0];
    v17->v[1] = v16->origin.v[1];
    v17->v[2] = v16->origin.v[2];
    goto LABEL_39;
  }
  outBoneIndex[0] = -2;
  outTagName = 0;
  v33 = handle[0];
  v34 = Com_GetClientDObj(handle[0], this->m_localClientNum);
  if ( !v34 || !TagPair::GetTagNameAndBoneIndex((TagPair *)&tagPair, v34, &outTagName, outBoneIndex) || !CG_Entity_GetBoneOrientation(this->m_localClientNum, v33, outBoneIndex[0], &orient) )
    return 0;
  v17->v[0] = orient.origin.v[0];
  v17->v[1] = orient.origin.v[1];
  v17->v[2] = orient.origin.v[2];
LABEL_39:
  AngleVectors(&angles, v16->axis.m, &v16->axis.m[1], &v16->axis.m[2]);
  v35 = v16->axis.m[0].v[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v35 * v35) + (float)(v16->axis.m[0].v[1] * v16->axis.m[0].v[1])) + (float)(v16->axis.m[0].v[2] * v16->axis.m[0].v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_weapons_sp.cpp", 210, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( outOrient->axis[0] ))", "%s\n\tCgWeaponSystemSP::SimulateBulletFire_Orientation - Firing dir is not normalized. Forward: %f %f %f, Gun Pitch: %f Gun Yaw: %f", "Vec3IsNormalized( outOrient->axis[0] )", v35, v16->axis.m[0].v[1], v16->axis.m[0].v[2], angles.v[0], angles.v[1]) )
    __debugbreak();
  Vec3NormalizeFast(v16->axis.m);
  Vec3NormalizeFast(&v16->axis.m[1]);
  Vec3NormalizeFast(&v16->axis.m[2]);
  v36 = ps;
  _XMM0 = LODWORD(ps->weapCommon.fWeaponPosFrac);
  __asm
  {
    vcmpeqss xmm1, xmm0, cs:__real@3f800000
    vblendvps xmm6, xmm8, xmm6, xmm1
  }
  Handler = CgHandler::getHandler(this->m_localClientNum);
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, v36, r_weapon, *(float *)&_XMM6);
  *v52 = *(float *)&_XMM0;
  return 1;
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

