/*
==============
CgVehicleSystemSP::IsYawLocked
==============
*/

bool __fastcall CgVehicleSystemSP::IsYawLocked(CgVehicleSystemSP *this)
{
  return ?IsYawLocked@CgVehicleSystemSP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemSP::GetCameraSpectatorAxis
==============
*/

bool __fastcall CgVehicleSystemSP::GetCameraSpectatorAxis(CgVehicleSystemSP *this, float *outPitchAxis, float *outYawAxis)
{
  return ?GetCameraSpectatorAxis@CgVehicleSystemSP@@UEBA_NPEAM0@Z(this, outPitchAxis, outYawAxis);
}

/*
==============
CgVehicleSystemSP::UpdateVehicleDef
==============
*/

void __fastcall CgVehicleSystemSP::UpdateVehicleDef(CgVehicleSystemSP *this, centity_t *cent)
{
  ?UpdateVehicleDef@CgVehicleSystemSP@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemSP::Init
==============
*/

void __fastcall CgVehicleSystemSP::Init(CgVehicleSystemSP *this)
{
  ?Init@CgVehicleSystemSP@@QEAAXXZ(this);
}

/*
==============
CgVehicleSystemSP::ClearViewRoll
==============
*/

void __fastcall CgVehicleSystemSP::ClearViewRoll(CgVehicleSystemSP *this)
{
  ?ClearViewRoll@CgVehicleSystemSP@@EEAAXXZ(this);
}

/*
==============
CgVehicleSystemSP::IsCameraFreeLookEnabled
==============
*/

bool __fastcall CgVehicleSystemSP::IsCameraFreeLookEnabled(CgVehicleSystemSP *this)
{
  return ?IsCameraFreeLookEnabled@CgVehicleSystemSP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemSP::UseGdtCamera
==============
*/

bool __fastcall CgVehicleSystemSP::UseGdtCamera(CgVehicleSystemSP *this, const centity_t *cent)
{
  return ?UseGdtCamera@CgVehicleSystemSP@@UEBA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemSP::SetIgnoreDObjTransfer
==============
*/

void __fastcall CgVehicleSystemSP::SetIgnoreDObjTransfer(CgVehicleSystemSP *this, DObj *obj, bool hasPlayerState)
{
  ?SetIgnoreDObjTransfer@CgVehicleSystemSP@@UEAAXPEAUDObj@@_N@Z(this, obj, hasPlayerState);
}

/*
==============
CgVehicleSystemSP::GetTurretBarrelRoll
==============
*/

double __fastcall CgVehicleSystemSP::GetTurretBarrelRoll(CgVehicleSystemSP *this, const centity_t *cent)
{
  double result; 

  *(float *)&result = ?GetTurretBarrelRoll@CgVehicleSystemSP@@EEAAMPEBUcentity_t@@@Z(this, cent);
  return result;
}

/*
==============
CgVehicleSystemSP::ProcessEntity
==============
*/

void __fastcall CgVehicleSystemSP::ProcessEntity(CgVehicleSystemSP *this, centity_t *cent, int isVisible, int hasMoved)
{
  ?ProcessEntity@CgVehicleSystemSP@@QEAAXPEAUcentity_t@@HH@Z(this, cent, isVisible, hasMoved);
}

/*
==============
CgVehicleSystemSP::BuildDObjFromVehicleInfo
==============
*/

void __fastcall CgVehicleSystemSP::BuildDObjFromVehicleInfo(CgVehicleSystemSP *this, int entityNum)
{
  ?BuildDObjFromVehicleInfo@CgVehicleSystemSP@@UEAAXH@Z(this, entityNum);
}

/*
==============
CgVehicleSystemSP::IsMP
==============
*/

bool __fastcall CgVehicleSystemSP::IsMP(CgVehicleSystemSP *this)
{
  return ?IsMP@CgVehicleSystemSP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemSP::CgVehicleSystemSP
==============
*/

void __fastcall CgVehicleSystemSP::CgVehicleSystemSP(CgVehicleSystemSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgVehicleSystemSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgVehicleSystemSP::DamageScriptables
==============
*/

void __fastcall CgVehicleSystemSP::DamageScriptables(CgVehicleSystemSP *this, const centity_t *cent, const VehicleClient *veh)
{
  ?DamageScriptables@CgVehicleSystemSP@@AEAAXPEBUcentity_t@@PEBUVehicleClient@@@Z(this, cent, veh);
}

/*
==============
CgVehicleSystemSP::UpdateEntity
==============
*/

void __fastcall CgVehicleSystemSP::UpdateEntity(CgVehicleSystemSP *this, centity_t *cent)
{
  ?UpdateEntity@CgVehicleSystemSP@@EEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemSP::IsCameraPlayerView
==============
*/

bool __fastcall CgVehicleSystemSP::IsCameraPlayerView(CgVehicleSystemSP *this)
{
  return ?IsCameraPlayerView@CgVehicleSystemSP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemSP::ShouldUpdateVehicleSound
==============
*/

bool __fastcall CgVehicleSystemSP::ShouldUpdateVehicleSound(CgVehicleSystemSP *this, const centity_t *cent)
{
  return ?ShouldUpdateVehicleSound@CgVehicleSystemSP@@MEAA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemSP::UpdateBoneControllers
==============
*/

void __fastcall CgVehicleSystemSP::UpdateBoneControllers(CgVehicleSystemSP *this, DObj *obj, centity_t *cent, int hasMoved)
{
  ?UpdateBoneControllers@CgVehicleSystemSP@@AEAAXPEAUDObj@@PEAUcentity_t@@H@Z(this, obj, cent, hasMoved);
}

/*
==============
CgVehicleSystemSP::CgVehicleSystemSP
==============
*/
void CgVehicleSystemSP::CgVehicleSystemSP(CgVehicleSystemSP *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgVehicleSystemSP_vtbl *)&CgVehicleSystem::`vftable';
  this->m_scriptableDamageInfo.m_cursor = 0;
  BgVehicleEventSystem::BgVehicleEventSystem(&this->m_vehicleEventSystem);
  this->m_vehicleEventSystem.CgVehicleSystem::__vftable = (CgVehicleEventSystem_vtbl *)&CgVehicleEventSystem::`vftable';
  this->m_vehicleCollisionSystem.CgVehicleSystem::__vftable = (CgVehicleCollisionSystem_vtbl *)&CgVehicleCollisionSystem::`vftable';
  *(_QWORD *)&this->m_lastPhysicsStepTime = 0i64;
  memset_0(this->m_vehiclePhysicsManager.m_vehiclePhysicsObjects, 0, 0x102000ui64);
  this->m_vehiclePhysicsManager.m_lagTime = 0.0;
  CgVehicleEventSystem::Init(&this->m_vehicleEventSystem, localClientNum);
  this->m_vehicleAnimSystem.CgVehicleSystem::m_localClientNum = localClientNum;
  CgVehicleCollisionSystem::SetLocalClientNum(&this->m_vehicleCollisionSystem, localClientNum);
  this->__vftable = (CgVehicleSystemSP_vtbl *)&CgVehicleSystemSP::`vftable';
}

/*
==============
CgVehicleSystemSP::BuildDObjFromVehicleInfo
==============
*/
void CgVehicleSystemSP::BuildDObjFromVehicleInfo(CgVehicleSystemSP *this, int entityNum)
{
  __int64 m_localClientNum; 
  __int64 v4; 
  CgEntitySystem *v5; 
  __int64 v6; 
  VehicleClient *Client; 
  __int64 v8; 
  __int64 v9; 

  m_localClientNum = this->m_localClientNum;
  v4 = entityNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v8) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
  {
    LODWORD(v9) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
      __debugbreak();
  }
  v5 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = (__int64)&v5->m_entities[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 358, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (*(_BYTE *)(v6 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 359, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, (const centity_t *)v6);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 362, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( Client->animinfo.m_dobjDirty )
    Client->animinfo.m_dobjDirty = 0;
}

/*
==============
CgVehicleSystemSP::ClearViewRoll
==============
*/
void CgVehicleSystemSP::ClearViewRoll(CgVehicleSystemSP *this)
{
  ;
}

/*
==============
CgVehicleSystemSP::DamageScriptables
==============
*/
void CgVehicleSystemSP::DamageScriptables(CgVehicleSystemSP *this, const centity_t *cent, const VehicleClient *veh)
{
  const VehicleDef *ClientDef; 
  const DObj *EntityDObj; 
  const XModel *FirstModel; 
  Bounds bounds; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 80, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 81, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(veh);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 84, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( ClientDef->hitClientScriptables )
  {
    EntityDObj = CgVehicleSystemSP::GetEntityDObj(this, cent);
    if ( !EntityDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 90, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    FirstModel = DObjGetFirstModel(EntityDObj);
    if ( !FirstModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 93, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    XModelGetBounds(FirstModel, &bounds);
    ScriptableCl_VehicleDamageClientScriptables((const LocalClientNum_t)this->m_localClientNum, cent, &bounds);
  }
}

/*
==============
CgVehicleSystemSP::GetCameraSpectatorAxis
==============
*/
bool CgVehicleSystemSP::GetCameraSpectatorAxis(CgVehicleSystemSP *this, float *outPitchAxis, float *outYawAxis)
{
  return 0;
}

/*
==============
CgVehicleSystemSP::GetTurretBarrelRoll
==============
*/
float CgVehicleSystemSP::GetTurretBarrelRoll(CgVehicleSystemSP *this, const centity_t *cent)
{
  return 0.0;
}

/*
==============
CgVehicleSystemSP::Init
==============
*/
void CgVehicleSystemSP::Init(CgVehicleSystemSP *this)
{
  CgVehicleSystem::InitVehicleDefCache();
  if ( CgVehicleSystem::ms_allocatedCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 50, ASSERT_TYPE_ASSERT, "(ms_allocatedCount == 1)", (const char *)&queryFormat, "ms_allocatedCount == 1") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( this->m_localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 51, ASSERT_TYPE_ASSERT, "(m_localClientNum == CL_GetOnlyLocalClientNum())", (const char *)&queryFormat, "m_localClientNum == CL_GetOnlyLocalClientNum()") )
    __debugbreak();
  memset_0(this->m_vehicleClients, 0, 0x241ui64);
  memset_0(&this->m_vehicleClients[0].audioState.hasRevPriority, 0, 0x123BEui64);
  this->m_vehicleClients[0].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[1].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[2].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[3].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[4].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[5].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[6].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[7].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[8].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[9].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[10].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[11].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[12].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[13].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[14].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[15].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[16].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[17].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[18].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[19].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[20].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[21].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[22].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[23].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[24].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[25].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[26].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[27].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[28].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[29].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[30].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[31].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[32].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[33].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[34].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[35].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[36].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[37].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[38].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[39].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[40].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[41].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[42].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[43].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[44].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[45].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[46].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[47].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[48].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[49].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[50].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[51].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[52].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[53].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[54].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[55].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[56].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[57].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[58].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[59].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[60].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[61].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[62].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[63].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[64].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[65].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[66].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[67].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[68].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[69].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[70].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[71].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[72].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[73].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[74].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[75].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[76].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[77].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[78].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[79].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[80].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[81].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[82].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[83].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[84].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[85].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[86].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[87].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[88].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[89].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[90].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[91].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[92].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[93].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[94].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[95].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[96].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[97].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[98].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[99].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[100].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[101].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[102].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[103].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[104].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[105].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[106].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[107].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[108].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[109].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[110].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[111].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[112].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[113].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[114].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[115].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[116].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[117].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[118].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[119].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[120].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[121].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[122].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[123].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[124].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[125].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[126].audioState.audioOriginTagBoneIndex = -2;
  this->m_vehicleClients[127].audioState.audioOriginTagBoneIndex = -2;
  CG_VehicleCam_InitGlobals();
  CG_VehicleCam_InitLocalClient(this->m_localClientNum);
}

/*
==============
CgVehicleSystemSP::IsCameraFreeLookEnabled
==============
*/
__int64 CgVehicleSystemSP::IsCameraFreeLookEnabled(CgVehicleSystemSP *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_vehCam_freeLook;
  if ( !DVARBOOL_vehCam_freeLook && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_freeLook") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
CgVehicleSystemSP::IsCameraPlayerView
==============
*/
char CgVehicleSystemSP::IsCameraPlayerView(CgVehicleSystemSP *this)
{
  return 1;
}

/*
==============
CgVehicleSystemSP::IsMP
==============
*/
bool CgVehicleSystemSP::IsMP(CgVehicleSystemSP *this)
{
  return 0;
}

/*
==============
CgVehicleSystemSP::IsYawLocked
==============
*/
bool CgVehicleSystemSP::IsYawLocked(CgVehicleSystemSP *this)
{
  cg_t *LocalClientGlobals; 
  VehicleType vehicleType; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_predictedPlayerState; 
  bool result; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  vehicleType = LocalClientGlobals->predictedPlayerState.vehicleType;
  p_predictedPlayerState = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)&LocalClientGlobals->predictedPlayerState;
  if ( ((vehicleType - 4) & 0xFD) == 0 )
    return 1;
  result = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_predictedPlayerState + 94, GameModeFlagValues::ms_spValue, 0x1Cu);
  if ( result )
    return 1;
  return result;
}

/*
==============
CgVehicleSystemSP::ProcessEntity
==============
*/
void CgVehicleSystemSP::ProcessEntity(CgVehicleSystemSP *this, centity_t *cent, int isVisible, int hasMoved)
{
  entityState_t *p_nextState; 
  DObj *EntityDObj; 
  cg_t *LocalClientGlobals; 
  float v11; 
  VehicleClient *Client; 
  team_t v13; 
  unsigned int v14; 
  __m256i *HudOutlineInfo; 
  __m256i v16; 
  float v17; 
  bool v18; 
  bool useAlternateColor; 
  unsigned int v20; 
  unsigned int RenderFlagForRefEntity; 
  unsigned int number; 
  vec3_t v23; 
  GfxSceneHudOutlineInfo v24; 
  shaderOverride_t v25; 
  vec3_t outOrigin; 
  __int64 v27; 
  GfxSceneHudOutlineInfo result; 
  unsigned int scriptableIndex; 

  v27 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 174, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) != 0 && !CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 175, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    EntityDObj = CgVehicleSystemSP::GetEntityDObj(this, cent);
    if ( EntityDObj )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      CG_EntityWorkers_EnterCriticalSection_Unverified();
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "vehicle controllers");
        CgVehicleSystemSP::UpdateBoneControllers(this, EntityDObj, cent, hasMoved);
        Sys_ProfEndNamedEvent();
      }
      CG_EntityWorkers_LeaveCriticalSection_Unverified();
      if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)this->m_localClientNum, cent, &scriptableIndex) )
      {
        ScriptableCl_UpdatePosition((const LocalClientNum_t)this->m_localClientNum, scriptableIndex, cent);
        ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)this->m_localClientNum, scriptableIndex, p_nextState->number);
      }
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      XAnimBonePhysicsSetDObjMatrix(EntityDObj, &outOrigin, &cent->pose.angles);
      v11 = 0.0;
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        this->UpdateEntity(this, cent);
        Client = CgVehicleSystem::GetClient(this, cent);
        if ( CG_Vehicle_ShouldApplyMaterialTime(Client) )
        {
          CG_Vehicle_UpdateMaterialTime(Client);
          v11 = (float)((float)LocalClientGlobals->time * 0.001) - Client->materialTime;
        }
      }
      CG_GetPoseOrigin(&cent->pose, &v23);
      v23.v[2] = v23.v[2] + 32.0;
      if ( CG_Vehicle_IsCorpse(cent) )
      {
        if ( isVisible )
        {
          RenderFlagForRefEntity = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags);
          number = p_nextState->number;
          memset(&v24, 0, sizeof(v24));
          memset(&v25, 0, sizeof(v25));
          CG_Entity_AddDObjToScene((const LocalClientNum_t)this->m_localClientNum, EntityDObj, &cent->pose, number, RenderFlagForRefEntity | 0x1000, &v25, &v24, &v23, v11, 0);
        }
      }
      else
      {
        v13 = this->GetTeam(this, &cent->nextState);
        if ( isVisible )
        {
          v14 = CG_EntitySP_GetRenderFlagForRefEntity(LocalClientGlobals, cent, &cent->nextState.lerp.eFlags) | 0x1000;
          HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
          v16 = *HudOutlineInfo;
          *(__m256i *)&v25.scrollRateX = v16;
          *(__m256i *)&v24.color = v16;
          v17 = *(float *)HudOutlineInfo[1].m256i_i32;
          if ( v13 != TEAM_TWO )
          {
            if ( CG_Utils_ShouldHighlightVehicle((const LocalClientNum_t)this->m_localClientNum) && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)this->m_localClientNum) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)this->m_localClientNum) )
            {
              v24.scopeStencil = FLOAT_1_0;
              v18 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)this->m_localClientNum, cent);
              useAlternateColor = v24.useAlternateColor;
              if ( v18 )
                useAlternateColor = 1;
              v24.useAlternateColor = useAlternateColor;
              v16 = *(__m256i *)&v24.color;
            }
            else
            {
              v16 = *(__m256i *)&v25.scrollRateX;
            }
          }
          v20 = p_nextState->number;
          *(__m256i *)&v24.color = v16;
          v24.characterEVOffset = v17;
          memset(&v25, 0, sizeof(v25));
          CG_Entity_AddDObjToScene((const LocalClientNum_t)this->m_localClientNum, EntityDObj, &cent->pose, v20, v14, &v25, &v24, &v23, v11, 0);
        }
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u) || CG_LaserForceOnEnabled() )
          CG_LaserAdd((const LocalClientNum_t)this->m_localClientNum, p_nextState->number, v13);
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  memset(&v23, 0, sizeof(v23));
}

/*
==============
CgVehicleSystemSP::SetIgnoreDObjTransfer
==============
*/
void CgVehicleSystemSP::SetIgnoreDObjTransfer(CgVehicleSystemSP *this, DObj *obj, bool hasPlayerState)
{
  unsigned __int8 flags; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 

  BGVehicles::SetIgnoreDObjTransfer(this, obj, hasPlayerState);
  flags = obj->flags;
  v6 = flags | 1;
  v7 = flags & 0xFE;
  if ( !hasPlayerState )
    v6 = v7;
  obj->flags = v6;
}

/*
==============
CgVehicleSystemSP::ShouldUpdateVehicleSound
==============
*/
char CgVehicleSystemSP::ShouldUpdateVehicleSound(CgVehicleSystemSP *this, const centity_t *cent)
{
  return 1;
}

/*
==============
CgVehicleSystemSP::UpdateBoneControllers
==============
*/
void CgVehicleSystemSP::UpdateBoneControllers(CgVehicleSystemSP *this, DObj *obj, centity_t *cent, int hasMoved)
{
  __int64 m_localClientNum; 
  CgVehicleSystem **v9; 
  CgVehicleSystem *v10; 
  const VehicleDef *v11; 
  int v12; 
  CEntFx *v13; 
  scr_string_t WheelBoneTag; 
  __int64 v15; 
  __int64 v16; 
  int modelIndex[10]; 

  Profile_Begin(47);
  if ( CgVehicleSystem::UpdateBoneControllersInternal(this, obj, cent) )
  {
    m_localClientNum = this->m_localClientNum;
    if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", m_localClientNum) )
      __debugbreak();
    if ( (unsigned int)m_localClientNum >= CgVehicleSystem::ms_allocatedCount )
    {
      LODWORD(v16) = CgVehicleSystem::ms_allocatedCount;
      LODWORD(v15) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v9 = &CgVehicleSystem::ms_vehicleSystemArray[m_localClientNum];
    if ( !*v9 )
    {
      LODWORD(v16) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v16) )
        __debugbreak();
    }
    v10 = *v9;
    if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 122, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v11 = v10->GetVehicleDef(v10, &cent->nextState);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 125, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
      __debugbreak();
    if ( !cent->pose.vehicle.boneUsage )
    {
      if ( hasMoved )
      {
        CgVehicleSystem::UpdateWheelsBoneControllers(this, obj, cent);
        cent->flags |= 0x2000u;
      }
      else
      {
        v12 = 0;
        if ( BGVehicles::GetWheelCount(v11) > 0 )
        {
          v13 = &cent->pose.moverFx + 6;
          do
          {
            if ( LOBYTE(v13->triggerTime) >= 0xFEu )
            {
              WheelBoneTag = BGVehicles::GetWheelBoneTag(v11, v12);
              if ( WheelBoneTag )
                DObjGetBoneIndexInternal_82(obj, WheelBoneTag, &cent->pose.vehicle.wheelBoneIndex[v12], modelIndex);
            }
            ++v12;
            v13 = (CEntFx *)((char *)v13 + 1);
          }
          while ( v12 < BGVehicles::GetWheelCount(v11) );
        }
        cent->pose.turret.visualYawLimitLeft = -1.6947395e38;
      }
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
CgVehicleSystemSP::UpdateEntity
==============
*/
void CgVehicleSystemSP::UpdateEntity(CgVehicleSystemSP *this, centity_t *cent)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const DObj *EntityDObj; 
  const XModel *FirstModel; 
  Bounds bounds; 

  CgVehicleSystem::UpdateEntity(this, cent);
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 80, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 81, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_SCRIPTABLE_CLIENT )") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 84, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( ClientDef->hitClientScriptables )
  {
    EntityDObj = CgVehicleSystemSP::GetEntityDObj(this, cent);
    if ( !EntityDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 90, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    FirstModel = DObjGetFirstModel(EntityDObj);
    if ( !FirstModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 93, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    XModelGetBounds(FirstModel, &bounds);
    ScriptableCl_VehicleDamageClientScriptables((const LocalClientNum_t)this->m_localClientNum, cent, &bounds);
  }
}

/*
==============
CgVehicleSystemSP::UpdateVehicleDef
==============
*/
void CgVehicleSystemSP::UpdateVehicleDef(CgVehicleSystemSP *this, centity_t *cent)
{
  int ClientDefIndex; 
  VehicleClient *Client; 

  if ( cent->nextState.eType == ET_VEHICLE )
  {
    ClientDefIndex = CgVehicleSystem::GetClientDefIndex(cent);
    Client = CgVehicleSystem::GetClient(this, cent);
    if ( Client )
    {
      if ( ClientDefIndex != Client->defIndex )
        Client->defIndex = ClientDefIndex;
    }
  }
}

/*
==============
CgVehicleSystemSP::UseGdtCamera
==============
*/
bool CgVehicleSystemSP::UseGdtCamera(CgVehicleSystemSP *this, const centity_t *cent)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 319, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 322, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.cpp", 325, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  return ClientDef->vehCam_UseGDT != 0;
}

