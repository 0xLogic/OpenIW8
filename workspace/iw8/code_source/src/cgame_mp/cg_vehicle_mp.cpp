/*
==============
CgVehicleSystemMP::FXTest
==============
*/

void __fastcall CgVehicleSystemMP::FXTest(CgVehicleSystemMP *this, const DObj *obj, centity_t *cent)
{
  ?FXTest@CgVehicleSystemMP@@AEAAXPEBUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystemMP::InitGlobals
==============
*/

void CgVehicleSystemMP::InitGlobals(void)
{
  ?InitGlobals@CgVehicleSystemMP@@SAXXZ();
}

/*
==============
CgVehicleSystemMP::BuildDObjFromVehicleInfo
==============
*/

void __fastcall CgVehicleSystemMP::BuildDObjFromVehicleInfo(CgVehicleSystemMP *this, int entityNum)
{
  ?BuildDObjFromVehicleInfo@CgVehicleSystemMP@@UEAAXH@Z(this, entityNum);
}

/*
==============
CgVehicleSystemMP::Init
==============
*/

void __fastcall CgVehicleSystemMP::Init(CgVehicleSystemMP *this)
{
  ?Init@CgVehicleSystemMP@@QEAAXXZ(this);
}

/*
==============
CG_VehicleMP_IsHelicopterOn
==============
*/

bool __fastcall CG_VehicleMP_IsHelicopterOn(LocalClientNum_t localClientNum, unsigned int physicsId)
{
  return ?CG_VehicleMP_IsHelicopterOn@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, physicsId);
}

/*
==============
CgVehicleSystemMP::UseGdtCamera
==============
*/

bool __fastcall CgVehicleSystemMP::UseGdtCamera(CgVehicleSystemMP *this, const centity_t *cent)
{
  return ?UseGdtCamera@CgVehicleSystemMP@@UEBA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemMP::IncTurretBarrelRoll
==============
*/

void __fastcall CgVehicleSystemMP::IncTurretBarrelRoll(CgVehicleSystemMP *this, int entityNum, float rotation)
{
  ?IncTurretBarrelRoll@CgVehicleSystemMP@@QEAAXHM@Z(this, entityNum, rotation);
}

/*
==============
CgVehicleSystemMP::IsYawLocked
==============
*/

bool __fastcall CgVehicleSystemMP::IsYawLocked(CgVehicleSystemMP *this)
{
  return ?IsYawLocked@CgVehicleSystemMP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemMP::IsCameraPlayerView
==============
*/

bool __fastcall CgVehicleSystemMP::IsCameraPlayerView(CgVehicleSystemMP *this)
{
  return ?IsCameraPlayerView@CgVehicleSystemMP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemMP::ShouldUpdateVehicleSound
==============
*/

bool __fastcall CgVehicleSystemMP::ShouldUpdateVehicleSound(CgVehicleSystemMP *this, const centity_t *cent)
{
  return ?ShouldUpdateVehicleSound@CgVehicleSystemMP@@UEAA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemMP::IsCameraFreeLookEnabled
==============
*/

bool __fastcall CgVehicleSystemMP::IsCameraFreeLookEnabled(CgVehicleSystemMP *this)
{
  return ?IsCameraFreeLookEnabled@CgVehicleSystemMP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemMP::CgVehicleSystemMP
==============
*/

void __fastcall CgVehicleSystemMP::CgVehicleSystemMP(CgVehicleSystemMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgVehicleSystemMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgVehicleSystemMP::UpdateBoneControllers
==============
*/

void __fastcall CgVehicleSystemMP::UpdateBoneControllers(CgVehicleSystemMP *this, DObj *obj, centity_t *cent)
{
  ?UpdateBoneControllers@CgVehicleSystemMP@@AEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystemMP::ClearViewRoll
==============
*/

void __fastcall CgVehicleSystemMP::ClearViewRoll(CgVehicleSystemMP *this)
{
  ?ClearViewRoll@CgVehicleSystemMP@@UEAAXXZ(this);
}

/*
==============
CgVehicleSystemMP::GetTurretBarrelRoll
==============
*/

double __fastcall CgVehicleSystemMP::GetTurretBarrelRoll(CgVehicleSystemMP *this, const centity_t *cent)
{
  double result; 

  *(float *)&result = ?GetTurretBarrelRoll@CgVehicleSystemMP@@EEAAMPEBUcentity_t@@@Z(this, cent);
  return result;
}

/*
==============
CG_VehicleMP_IsVehicleAboveCullingThreshold
==============
*/

bool __fastcall CG_VehicleMP_IsVehicleAboveCullingThreshold(const CgGlobalsMP *cgameGlob, const centity_t *cent, unsigned int threshold)
{
  return ?CG_VehicleMP_IsVehicleAboveCullingThreshold@@YA_NPEBVCgGlobalsMP@@PEBUcentity_t@@I@Z(cgameGlob, cent, threshold);
}

/*
==============
CgVehicleSystemMP::IsMP
==============
*/

bool __fastcall CgVehicleSystemMP::IsMP(CgVehicleSystemMP *this)
{
  return ?IsMP@CgVehicleSystemMP@@UEBA_NXZ(this);
}

/*
==============
CgVehicleSystemMP::GetFxInfo
==============
*/

vehicleEffects *__fastcall CgVehicleSystemMP::GetFxInfo(CgVehicleSystemMP *this, int entityNum)
{
  return ?GetFxInfo@CgVehicleSystemMP@@AEAAPEAUvehicleEffects@@H@Z(this, entityNum);
}

/*
==============
CgVehicleSystemMP::GetCameraSpectatorAxis
==============
*/

bool __fastcall CgVehicleSystemMP::GetCameraSpectatorAxis(CgVehicleSystemMP *this, float *outPitchAxis, float *outYawAxis)
{
  return ?GetCameraSpectatorAxis@CgVehicleSystemMP@@UEBA_NPEAM0@Z(this, outPitchAxis, outYawAxis);
}

/*
==============
CG_VehicleMP_UpdateCullingPriorities
==============
*/

void __fastcall CG_VehicleMP_UpdateCullingPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  ?CG_VehicleMP_UpdateCullingPriorities@@YAXW4LocalClientNum_t@@PEBUCgSnapshotMP@@@Z(localClientNum, nextSnap);
}

/*
==============
CgVehicleSystemMP::ProcessEntity
==============
*/

void __fastcall CgVehicleSystemMP::ProcessEntity(CgVehicleSystemMP *this, centity_t *cent)
{
  ?ProcessEntity@CgVehicleSystemMP@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemMP::CgVehicleSystemMP
==============
*/
void CgVehicleSystemMP::CgVehicleSystemMP(CgVehicleSystemMP *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgVehicleSystemMP_vtbl *)&CgVehicleSystem::`vftable';
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
  this->__vftable = (CgVehicleSystemMP_vtbl *)&CgVehicleSystemMP::`vftable';
}

/*
==============
CgVehicleSystemMP::BuildDObjFromVehicleInfo
==============
*/
void CgVehicleSystemMP::BuildDObjFromVehicleInfo(CgVehicleSystemMP *this, int entityNum)
{
  VehicleClient *Client; 
  BGVehicleInfo *p_animinfo; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  const DObj *v10; 
  const XModel *XModelFromIndex; 
  unsigned __int16 v12; 
  scr_string_t *m_attachTags; 
  char *v14; 
  scr_string_t v15; 
  const XModel *v16; 
  DObjModel *outDObjModel; 
  __int64 entnum; 
  centity_t *Entity; 
  DObjModel dobjModels[2]; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 664, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 665, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, Entity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 668, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  p_animinfo = &Client->animinfo;
  if ( Client->animinfo.m_dobjDirty )
  {
    m_localClientNum = this->m_localClientNum;
    if ( (unsigned int)entityNum > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", entityNum) )
      __debugbreak();
    if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(entnum) = 2;
      LODWORD(outDObjModel) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outDObjModel, entnum) )
        __debugbreak();
    }
    v7 = entityNum + 2533 * m_localClientNum;
    if ( v7 >= 0x13CA )
    {
      LODWORD(entnum) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", entnum) )
        __debugbreak();
    }
    v8 = 0;
    v9 = clientObjMap[v7];
    if ( v9 )
    {
      if ( v9 >= (unsigned int)s_objCount )
      {
        LODWORD(entnum) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", entnum) )
          __debugbreak();
      }
      v10 = (const DObj *)s_objBuf[v9];
      if ( v10 )
      {
        if ( v10->tree )
        {
          XAnimClearTree(v10);
          v10->tree = NULL;
        }
        CG_AnimTreeMP_SafeDObjFree(this->m_localClientNum, entityNum);
      }
    }
    memset_0(dobjModels, 0, sizeof(dobjModels));
    XModelFromIndex = CG_EntityMP_GetXModelFromIndex((const LocalClientNum_t)this->m_localClientNum, Entity->nextState.un.actorFlags);
    if ( !XModelFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 704, ASSERT_TYPE_ASSERT, "(defaultVehicleModel)", (const char *)&queryFormat, "defaultVehicleModel") )
      __debugbreak();
    DObjInitModel(XModelFromIndex, (scr_string_t)0, 0, 0, NULL, dobjModels);
    v12 = 1;
    m_attachTags = p_animinfo->m_attachTags;
    v14 = p_animinfo->m_attachModels[0];
    do
    {
      if ( !*v14 )
        break;
      v15 = *m_attachTags;
      v16 = R_RegisterModel(p_animinfo->m_attachModels[(unsigned __int64)v8]);
      DObjInitModel(v16, v15, 1, 0, NULL, &dobjModels[v12++]);
      ++v8;
      ++m_attachTags;
      v14 += 64;
    }
    while ( v8 < 2 );
    Com_ClientDObjCreate(dobjModels, v12, NULL, entityNum, this->m_localClientNum, 0, entityNum);
    CG_AnimTreeMP_SetDObjInfo(this->m_localClientNum, entityNum, Entity->nextState.eType, dobjModels[0].model);
    CG_Entity_CreatePhysics(this->m_localClientNum, entityNum, 1);
    CG_Entity_CreateCloth((const LocalClientNum_t)this->m_localClientNum, entityNum);
    CG_Entity_UpdateScriptableDObjBinding(this->m_localClientNum, entityNum, 1);
    p_animinfo->m_dobjDirty = 0;
  }
}

/*
==============
CG_VehicleMP_IsHelicopterOn
==============
*/
bool CG_VehicleMP_IsHelicopterOn(LocalClientNum_t localClientNum, unsigned int physicsId)
{
  HelicopterDynamics *ObjectById; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v6; 
  double RPMForRotorIndex; 

  if ( BGVehicles::PhysicsIsValid(physicsId) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v6 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = (HelicopterDynamics *)BgVehiclePhysicsManager::GetObjectById(v6, physicsId);
    if ( ObjectById )
    {
      RPMForRotorIndex = HelicopterDynamics::GetRPMForRotorIndex(ObjectById, 0);
      LOBYTE(ObjectById) = COERCE_FLOAT(LODWORD(RPMForRotorIndex) & _xmm) > 100.0;
    }
  }
  else
  {
    LOBYTE(ObjectById) = 1;
  }
  return (char)ObjectById;
}

/*
==============
CG_VehicleMP_IsSoundHighPriority
==============
*/
bool CG_VehicleMP_IsSoundHighPriority(const LocalClientNum_t localClientNum, const CgVehicleSystem *const vehSystem, const centity_t *const cent, const CgVehiclePriorityInfo *priorityInfo)
{
  const dvar_t *v8; 
  float value; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  entityType_s eType; 
  unsigned int physicsId; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v15; 
  HelicopterDynamics *ObjectById; 
  double RPMForRotorIndex; 
  bool v18; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 799, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v8 = DCONST_DVARFLT_heli_audioPriorityCullDistance;
  if ( !DCONST_DVARFLT_heli_audioPriorityCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_audioPriorityCullDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  Client = CgVehicleSystem::GetClient((CgVehicleSystem *)vehSystem, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 805, ASSERT_TYPE_ASSERT, "(centVehicle)", (const char *)&queryFormat, "centVehicle") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 807, ASSERT_TYPE_ASSERT, "(centVehicleDef)", (const char *)&queryFormat, "centVehicleDef") )
    __debugbreak();
  eType = cent->nextState.eType;
  v18 = 0;
  if ( ClientDef->type == VEH_AIRCRAFT && ClientDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_LBRAVO && BGVehicles::PhysicsIsValid(Client->physicsId) )
  {
    physicsId = Client->physicsId;
    if ( !BGVehicles::PhysicsIsValid(physicsId) || (VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum), v15 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), (ObjectById = (HelicopterDynamics *)BgVehiclePhysicsManager::GetObjectById(v15, physicsId)) != NULL) && (RPMForRotorIndex = HelicopterDynamics::GetRPMForRotorIndex(ObjectById, 0), COERCE_FLOAT(LODWORD(RPMForRotorIndex) & _xmm) > 100.0) )
      v18 = 1;
  }
  return (eType == ET_HELICOPTER || v18) && (float)(value * value) > priorityInfo->distanceSq;
}

/*
==============
CG_VehicleMP_IsVehicleAboveCullingThreshold
==============
*/
char CG_VehicleMP_IsVehicleAboveCullingThreshold(const CgGlobalsMP *cgameGlob, const centity_t *cent, unsigned int threshold)
{
  const dvar_t *v6; 
  __int16 number; 
  unsigned __int16 *m_vehicleOrderSortedIndex; 
  unsigned __int16 v9; 
  unsigned int i; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 880, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 881, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 882, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( threshold > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 883, ASSERT_TYPE_ASSERT, "( threshold ) <= ( (1 << 7) )", "%s <= %s\n\t%u, %u", "threshold", "MAX_VEHICLES", threshold, 128) )
    __debugbreak();
  v6 = DCONST_DVARBOOL_cg_vehicleCullingPriorities;
  if ( !DCONST_DVARBOOL_cg_vehicleCullingPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vehicleCullingPriorities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 1;
  number = cent->nextState.number;
  m_vehicleOrderSortedIndex = cgameGlob->m_vehicleOrderSortedIndex;
  v9 = cgameGlob->m_vehicleOrderSortedIndex[0];
  if ( number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
    __debugbreak();
  for ( i = 0; i < threshold; ++m_vehicleOrderSortedIndex )
  {
    if ( !v9 )
      break;
    v9 = *m_vehicleOrderSortedIndex;
    if ( *m_vehicleOrderSortedIndex == number )
      return 1;
    ++i;
  }
  return 0;
}

/*
==============
CG_VehicleMP_UpdateCullingPriorities
==============
*/
void CG_VehicleMP_UpdateCullingPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  unsigned __int16 *m_vehicleOrderSortedIndex; 
  const dvar_t *v7; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v11; 
  int v12; 
  __int64 v13; 
  CgVehiclePriorityInfo *v14; 
  CgVehiclePriorityInfo *v15; 
  entityState_t *entities; 
  float v17; 
  float v18; 
  float v19; 
  int v20; 
  __int64 number; 
  CgEntitySystem *v22; 
  __int64 v23; 
  int time; 
  CgVehiclePriorityInfo v25; 
  int v26; 
  int v27; 
  __int64 i; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  CgVehicleMPSortFunctor v32; 
  int v33; 
  int v34; 
  int v35; 
  int integer; 
  int v37[3]; 
  vec3_t outPos; 
  CgGlobalsMP *v39; 
  CgVehicleSystem *vehSystem; 
  const CgSnapshotMP *v41; 
  unsigned __int16 *v42; 
  __int64 v43; 
  CgTrajectory v44; 
  CgVehiclePriorityInfo priorityInfo[128]; 

  v43 = -2i64;
  v41 = nextSnap;
  v3 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v39 = LocalClientGlobals;
  v5 = 0;
  v33 = 0;
  vehSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v3);
  if ( !vehSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 825, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  m_vehicleOrderSortedIndex = LocalClientGlobals->m_vehicleOrderSortedIndex;
  v42 = LocalClientGlobals->m_vehicleOrderSortedIndex;
  memset_0(LocalClientGlobals->m_vehicleOrderSortedIndex, 0, sizeof(LocalClientGlobals->m_vehicleOrderSortedIndex));
  v7 = DCONST_DVARBOOL_cg_vehicleCullingPriorities;
  if ( !DCONST_DVARBOOL_cg_vehicleCullingPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vehicleCullingPriorities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v37[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v37[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v37[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    v11 = DCONST_DVARINT_heli_audioPriorityCount;
    if ( !DCONST_DVARINT_heli_audioPriorityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_audioPriorityCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v12 = 0;
    v35 = 0;
    if ( nextSnap->numEntities > 0 )
    {
      v13 = v3;
      v14 = priorityInfo;
      v15 = priorityInfo;
      entities = nextSnap->entities;
      v17 = *(float *)&v37[2];
      v18 = *(float *)&v37[1];
      v19 = *(float *)v37;
      v20 = 0;
      do
      {
        number = entities->number;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v30) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v30) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v30) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v29) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v13] )
        {
          LODWORD(v30) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v30) )
            __debugbreak();
        }
        v22 = CgEntitySystem::ms_entitySystemArray[v13];
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v29) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        v23 = (__int64)&v22->m_entities[number];
        if ( (*(_BYTE *)(v23 + 648) & 1) == 0 )
          goto LABEL_39;
        if ( v23 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((*(_WORD *)(v23 + 408) - 12) & 0xFFFD) != 0 )
        {
LABEL_39:
          v26 = v33;
        }
        else
        {
          time = v39->time;
          v14->entityNum = truncate_cast<unsigned short,unsigned int>(entities->number);
          CgTrajectory::CgTrajectory(&v44, (const LocalClientNum_t)v3, (const centity_t *)v23, (const LerpEntityState *)(v23 + 412));
          BgTrajectory::SetFlags(&v44, 1);
          BgTrajectory::SetFlags(&v44, 2);
          BgTrajectory::EvaluatePosTrajectory(&v44, time, &outPos);
          v14->distanceSq = (float)((float)((float)(outPos.v[1] - v18) * (float)(outPos.v[1] - v18)) + (float)((float)(outPos.v[0] - v19) * (float)(outPos.v[0] - v19))) + (float)((float)(outPos.v[2] - v17) * (float)(outPos.v[2] - v17));
          memset(&outPos, 0, sizeof(outPos));
          if ( CG_VehicleMP_IsSoundHighPriority((const LocalClientNum_t)v3, vehSystem, (const centity_t *const)v23, &priorityInfo[v33]) )
          {
            v25 = *v15;
            *v15 = *v14;
            *v14 = v25;
            ++v20;
            ++v15;
          }
          v26 = ++v33;
          ++v14;
        }
        ++v35;
        ++entities;
        v13 = v3;
      }
      while ( v35 < v41->numEntities );
      v34 = v20;
      m_vehicleOrderSortedIndex = v42;
      if ( v26 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(vehiclePriorityCount <= (1 << 7))", (const char *)&queryFormat, "vehiclePriorityCount <= MAX_VEHICLES") )
        __debugbreak();
      v12 = v34;
      v5 = v33;
    }
    std::_Sort_unchecked<CgVehiclePriorityInfo *,CgVehicleMPSortFunctor>(priorityInfo, &priorityInfo[v12], v12, v32);
    v27 = integer;
    if ( v12 < integer )
      v27 = v12;
    std::_Sort_unchecked<CgVehiclePriorityInfo *,CgVehicleMPSortFunctor>(&priorityInfo[v27], &priorityInfo[v5], (8i64 * v5 - 8i64 * v27) >> 3, v32);
    if ( v5 > 0 )
    {
      for ( i = 0i64; i < v5; *m_vehicleOrderSortedIndex++ = priorityInfo[i++].entityNum )
      {
        if ( !priorityInfo[i].entityNum )
        {
          LODWORD(v31) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 871, ASSERT_TYPE_ASSERT, "( vehiclePriorities[index].entityNum ) != ( 0 )", "%s != %s\n\t%u, %u", "vehiclePriorities[index].entityNum", "0", v31, 0i64) )
            __debugbreak();
        }
      }
    }
    memset(v37, 0, sizeof(v37));
  }
}

/*
==============
CgVehicleSystemMP::ClearViewRoll
==============
*/
void CgVehicleSystemMP::ClearViewRoll(CgVehicleSystemMP *this)
{
  __int64 m_localClientNum; 
  ClActiveClient *v2; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[m_localClientNum];
  if ( LOBYTE(v2[3].cmds[94].buttons) == 1 )
    LODWORD(v2->clViewangles.clViewangles.v[2]) = *(_DWORD *)&v2[1].cgameUserCmdWeapon.attachmentVariationIndices[25] ^ _xmm ^ ((((_DWORD)v2 + 436) ^ v2->clviewangles_aab) * ((((_DWORD)v2 + 436) ^ v2->clviewangles_aab) + 2));
}

/*
==============
CgVehicleSystemMP::FXTest
==============
*/
void CgVehicleSystemMP::FXTest(CgVehicleSystemMP *this, const DObj *obj, centity_t *cent)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v7; 
  float vehHelicopterGroundFxMinGroundDist; 
  float vehHelicopterGroundFxMaxGroundDist; 
  float vehHelicopterGroundFxSlowestRepeatRate; 
  float vehHelicopterGroundFxFastestRepeatRate; 
  float vehHelicopterGroundFxDefaultRepeatRate; 
  int skipEntity; 
  vehicleEffects *FxInfo; 
  int time; 
  trajectory_t_secure *p_pos; 
  int v17; 
  float v18; 
  const ParticleSystemDef *particleSystemDef; 
  const ParticleSystemDef *m_particleSystemDef; 
  vec3_t start; 
  vec3_t *p_start; 
  FXRegisteredDef def; 
  __int64 v24; 
  vec3_t end; 
  tmat33_t<vec3_t> src; 
  vec3_t origin; 
  Bounds bounds; 
  trace_t results; 

  v24 = -2i64;
  def.m_particleSystemDef = NULL;
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 465, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( cent->nextState.eType == ET_HELICOPTER )
  {
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    v7 = ClientDef;
    if ( ClientDef->vehHelicopterUseGroundFX )
    {
      vehHelicopterGroundFxMinGroundDist = ClientDef->vehHelicopterGroundFxMinGroundDist;
      if ( vehHelicopterGroundFxMinGroundDist == 0.0 && ClientDef->vehHelicopterGroundFxMaxGroundDist == 0.0 )
      {
        vehHelicopterGroundFxMinGroundDist = FLOAT_350_0;
        vehHelicopterGroundFxMaxGroundDist = FLOAT_1200_0;
        vehHelicopterGroundFxSlowestRepeatRate = FLOAT_0_15000001;
        vehHelicopterGroundFxFastestRepeatRate = FLOAT_0_050000001;
        vehHelicopterGroundFxDefaultRepeatRate = FLOAT_1_0;
      }
      else
      {
        vehHelicopterGroundFxMaxGroundDist = ClientDef->vehHelicopterGroundFxMaxGroundDist;
        vehHelicopterGroundFxSlowestRepeatRate = ClientDef->vehHelicopterGroundFxSlowestRepeatRate;
        vehHelicopterGroundFxFastestRepeatRate = ClientDef->vehHelicopterGroundFxFastestRepeatRate;
        vehHelicopterGroundFxDefaultRepeatRate = ClientDef->vehHelicopterGroundFxDefaultRepeatRate;
      }
      skipEntity = cent->nextState.number;
      FxInfo = CgVehicleSystemMP::GetFxInfo(this, skipEntity);
      time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
      if ( FxInfo->nextDustFx <= time )
      {
        *(_OWORD *)bounds.midPoint.v = _xmm;
        bounds.halfSize.v[1] = FLOAT_0_5;
        bounds.halfSize.v[2] = FLOAT_0_5;
        p_pos = &cent->prevState.pos;
        if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
        {
          p_start = &start;
          *(_QWORD *)&start.y = __PAIR64__(s_trbase_aab_Z, s_trbase_aab_Y) ^ *(_QWORD *)p_pos->trBase.v ^ *(_QWORD *)&p_pos->trBase.y;
          LODWORD(start.v[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
          memset(&p_start, 0, sizeof(p_start));
          *(float *)&p_start = start.v[0];
          if ( (LODWORD(start.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&p_start = start.v[1], (LODWORD(start.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&p_start = start.v[2], (LODWORD(start.v[2]) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          start = p_pos->trBase;
        }
        end.v[0] = start.v[0];
        end.v[1] = start.v[1];
        end.v[2] = start.v[2] - vehHelicopterGroundFxMaxGroundDist;
        CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * this->m_localClientNum + 2), &results, &start, &end, &bounds, skipEntity, 0, 2097, 0, NULL, All);
        CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
        v17 = (int)(float)(vehHelicopterGroundFxDefaultRepeatRate * 1000.0);
        if ( results.fraction < 1.0 )
        {
          origin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
          origin.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
          origin.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
          v18 = fsqrt((float)((float)((float)(origin.v[1] - start.v[1]) * (float)(origin.v[1] - start.v[1])) + (float)((float)(origin.v[0] - start.v[0]) * (float)(origin.v[0] - start.v[0]))) + (float)((float)(origin.v[2] - start.v[2]) * (float)(origin.v[2] - start.v[2])));
          if ( v18 < vehHelicopterGroundFxMaxGroundDist )
          {
            if ( vehHelicopterGroundFxMaxGroundDist <= vehHelicopterGroundFxMinGroundDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 516, ASSERT_TYPE_ASSERT, "(maxGroundDist > minGroundDist)", (const char *)&queryFormat, "maxGroundDist > minGroundDist") )
              __debugbreak();
            v17 = (int)(float)((float)((float)((float)((float)(v18 - vehHelicopterGroundFxMinGroundDist) / (float)(vehHelicopterGroundFxMaxGroundDist - vehHelicopterGroundFxMinGroundDist)) * (float)(vehHelicopterGroundFxSlowestRepeatRate - vehHelicopterGroundFxFastestRepeatRate)) + vehHelicopterGroundFxFastestRepeatRate) * 1000.0);
            src.m[0].v[0] = 0.0;
            src.m[0].v[1] = 0.0;
            src.m[0].v[2] = FLOAT_1_0;
            PerpendicularVector(src.m, &src.m[2]);
            src.m[1].v[0] = (float)(src.m[0].v[2] * src.m[2].v[1]) - (float)(src.m[0].v[1] * src.m[2].v[2]);
            src.m[1].v[1] = (float)(src.m[2].v[2] * src.m[0].v[0]) - (float)(src.m[0].v[2] * src.m[2].v[0]);
            src.m[1].v[2] = (float)(src.m[0].v[1] * src.m[2].v[0]) - (float)(src.m[2].v[1] * src.m[0].v[0]);
            if ( (results.surfaceFlags & 0x1F80000) == 11010048 )
            {
              particleSystemDef = v7->vehHelicopterGroundWaterFx.particleSystemDef;
              m_particleSystemDef = cgMedia.heliWaterEffect.m_particleSystemDef;
            }
            else
            {
              particleSystemDef = v7->vehHelicopterGroundFx.particleSystemDef;
              m_particleSystemDef = cgMedia.heliDustEffect.m_particleSystemDef;
            }
            if ( particleSystemDef )
              m_particleSystemDef = particleSystemDef;
            def.m_particleSystemDef = m_particleSystemDef;
            FX_PlayOrientedEffect(this->m_localClientNum, &def, time, &origin, &src);
          }
        }
        FxInfo->nextDustFx = v17 + time;
        memset(&start, 0, sizeof(start));
      }
    }
  }
}

/*
==============
CgVehicleSystemMP::GetCameraSpectatorAxis
==============
*/
bool CgVehicleSystemMP::GetCameraSpectatorAxis(CgVehicleSystemMP *this, float *outPitchAxis, float *outYawAxis)
{
  bool result; 

  if ( CG_ShouldUpdateViewAngles(this->m_localClientNum) )
    return 0;
  result = 1;
  *outPitchAxis = 0.0;
  *outYawAxis = 0.0;
  return result;
}

/*
==============
CgVehicleSystemMP::GetFxInfo
==============
*/
vehicleEffects *CgVehicleSystemMP::GetFxInfo(CgVehicleSystemMP *this, int entityNum)
{
  int v4; 
  int v5; 
  int *p_entityNum; 
  __int64 i; 
  vehicleEffects *v8; 
  int v9; 
  __int64 v10; 
  char *v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int lastAccessed; 
  int v16; 
  __int64 v17; 

  CG_EntityWorkers_EnterCriticalSection_VehicleGetFx();
  v4 = 0;
  v5 = 0;
  p_entityNum = &this->m_vehEffects[0].entityNum;
  for ( i = 0i64; i < 128; ++i )
  {
    if ( !*((_BYTE *)p_entityNum - 8) )
      break;
    if ( *p_entityNum == entityNum )
    {
      v11 = (char *)this + 40 * v5;
      *((_DWORD *)v11 + 288071) = Sys_Milliseconds();
      CG_EntityWorkers_LeaveCriticalSection_VehicleGetFx();
      return (vehicleEffects *)(v11 + 1152280);
    }
    ++v5;
    p_entityNum += 10;
  }
  v8 = &this->m_vehEffects[1];
  v9 = 0;
  v10 = 0i64;
  while ( v8[-1].active )
  {
    if ( !v8->active )
    {
      ++v9;
      break;
    }
    if ( !v8[1].active )
    {
      v9 += 2;
      break;
    }
    if ( !v8[2].active )
    {
      v9 += 3;
      break;
    }
    v10 += 4i64;
    v8 += 4;
    v9 += 4;
    if ( v10 >= 128 )
      break;
  }
  if ( v9 >= 128 )
  {
    v12 = 1;
    v13 = 0i64;
    v14 = 1i64;
    do
    {
      v9 = v12;
      lastAccessed = this->m_vehEffects[v13].lastAccessed;
      v16 = this->m_vehEffects[v14].lastAccessed;
      v17 = v14;
      if ( v16 >= lastAccessed )
        v17 = v13;
      if ( v16 >= lastAccessed )
        v9 = v4;
      ++v12;
      ++v14;
      v13 = v17;
      v4 = v9;
    }
    while ( v12 < 128 );
  }
  v11 = (char *)this + 40 * v9;
  *((_QWORD *)v11 + 144035) = 0i64;
  *((_QWORD *)v11 + 144036) = 0i64;
  *((_QWORD *)v11 + 144037) = 0i64;
  *((_QWORD *)v11 + 144038) = 0i64;
  *((_QWORD *)v11 + 144039) = 0i64;
  this->m_vehEffects[v9].active = 1;
  *((_DWORD *)v11 + 288071) = Sys_Milliseconds();
  *((_DWORD *)v11 + 288072) = entityNum;
  CG_EntityWorkers_LeaveCriticalSection_VehicleGetFx();
  return (vehicleEffects *)(v11 + 1152280);
}

/*
==============
CgVehicleSystemMP::GetTurretBarrelRoll
==============
*/
float CgVehicleSystemMP::GetTurretBarrelRoll(CgVehicleSystemMP *this, const centity_t *cent)
{
  vehicleEffects *FxInfo; 
  int time; 
  float v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  float barrelVelocity; 

  if ( (unsigned int)(CgVehicleSystem::GetTurretFireType(this, cent) - 1) <= 1 )
    return 0.0;
  FxInfo = CgVehicleSystemMP::GetFxInfo(this, cent->nextState.number);
  time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
  v6 = (float)(time - FxInfo->lastBarrelUpdateTime);
  v7 = (float)((float)(v6 * 0.001) * FxInfo->barrelVelocity) + FxInfo->barrelPos;
  FxInfo->barrelPos = v7;
  FxInfo->lastBarrelUpdateTime = time;
  if ( v7 > 360.0 )
    FxInfo->barrelPos = v7 - 360.0;
  v8 = DVARFLT_heli_barrelSlowdown;
  if ( !DVARFLT_heli_barrelSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelSlowdown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = (float)(v6 * v8->current.value) * 0.001;
  barrelVelocity = FxInfo->barrelVelocity;
  FxInfo->barrelVelocity = barrelVelocity - v9;
  if ( (float)(barrelVelocity - v9) < 0.0 )
    FxInfo->barrelVelocity = 0.0;
  return FxInfo->barrelPos;
}

/*
==============
CgVehicleSystemMP::IncTurretBarrelRoll
==============
*/

void __fastcall CgVehicleSystemMP::IncTurretBarrelRoll(CgVehicleSystemMP *this, int entityNum, double rotation)
{
  vehicleEffects *FxInfo; 
  const dvar_t *v4; 
  vehicleEffects *v5; 
  __int128 v7; 

  FxInfo = CgVehicleSystemMP::GetFxInfo(this, entityNum);
  v4 = DVARFLT_heli_barrelMaxVelocity;
  v5 = FxInfo;
  if ( !DVARFLT_heli_barrelMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelMaxVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v7 = *(_OWORD *)&rotation;
  *(float *)&v7 = *(float *)&rotation + v5->barrelVelocity;
  _XMM0 = v7;
  __asm { vminss  xmm1, xmm0, dword ptr [rbx+28h] }
  v5->barrelVelocity = *(float *)&_XMM1;
}

/*
==============
CgVehicleSystemMP::Init
==============
*/
void CgVehicleSystemMP::Init(CgVehicleSystemMP *this)
{
  memset_0(this->m_vehicleClients, 0, 0x241ui64);
  memset_0(&this->m_vehicleClients[0].audioState.hasRevPriority, 0, 0x123BEui64);
  memset_0(this->m_vehEffects, 0, sizeof(this->m_vehEffects));
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
  CG_VehicleCam_InitLocalClient(this->m_localClientNum);
}

/*
==============
CgVehicleSystemMP::InitGlobals
==============
*/
void CgVehicleSystemMP::InitGlobals(void)
{
  CgVehicleSystem::InitVehicleDefCache();
  CG_VehicleCam_InitGlobals();
}

/*
==============
CgVehicleSystemMP::IsCameraFreeLookEnabled
==============
*/
bool CgVehicleSystemMP::IsCameraFreeLookEnabled(CgVehicleSystemMP *this)
{
  return 0;
}

/*
==============
CgVehicleSystemMP::IsCameraPlayerView
==============
*/
bool CgVehicleSystemMP::IsCameraPlayerView(CgVehicleSystemMP *this)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  return !LocalClientGlobals->inKillCam && LocalClientGlobals->clientNum == LocalClientGlobals->predictedPlayerState.clientNum;
}

/*
==============
CgVehicleSystemMP::IsMP
==============
*/
char CgVehicleSystemMP::IsMP(CgVehicleSystemMP *this)
{
  return 1;
}

/*
==============
CgVehicleSystemMP::IsYawLocked
==============
*/
char CgVehicleSystemMP::IsYawLocked(CgVehicleSystemMP *this)
{
  return 1;
}

/*
==============
CgVehicleSystemMP::ProcessEntity
==============
*/
void CgVehicleSystemMP::ProcessEntity(CgVehicleSystemMP *this, centity_t *cent)
{
  entityState_t *p_nextState; 
  signed int XCompositeModelIndex; 
  LocalClientNum_t m_localClientNum; 
  const XCompositeModelDef *XCompositeModelFromIndex; 
  DObj *DObj; 
  const XModel *XModelFromIndex; 
  DObj *v10; 
  cg_t *LocalClientGlobals; 
  LerpEntityState *p_lerp; 
  float v13; 
  VehicleClient *Client; 
  __m256i *HudOutlineInfo; 
  __int64 v16; 
  __int64 clientNum; 
  cg_t *v18; 
  const characterInfo_t *CharacterInfo; 
  bool v20; 
  bool useAlternateColor; 
  __m256i v22; 
  unsigned int number; 
  DObjModel *outDObjModel; 
  __int64 v25; 
  unsigned int scriptableIndex; 
  float v27; 
  unsigned int v28; 
  team_t team; 
  vec3_t v30; 
  vec3_t outOrigin; 
  shaderOverride_t v32; 
  GfxSceneHudOutlineInfo v33; 
  __int64 v34; 
  GfxSceneHudOutlineInfo result; 
  DObjModel dobjModel; 

  v34 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 282, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) != 0 && !CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 284, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    XCompositeModelIndex = CG_XCompositeModel_GetXCompositeModelIndex((const LocalClientNum_t)this->m_localClientNum, cent);
    m_localClientNum = this->m_localClientNum;
    if ( XCompositeModelIndex <= 0 )
    {
      XModelFromIndex = CG_EntityMP_GetXModelFromIndex(m_localClientNum, cent->nextState.un.actorFlags);
      DObjInitModel(XModelFromIndex, (scr_string_t)0, 1, 0, NULL, &dobjModel);
      DObj = CG_EntityMP_GetDObj(this->m_localClientNum, p_nextState->number, cent->nextState.eType, &dobjModel, 1u, NULL);
    }
    else
    {
      XCompositeModelFromIndex = CG_XCompositeModel_GetXCompositeModelFromIndex(m_localClientNum, XCompositeModelIndex);
      if ( !XCompositeModelFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.h", 132, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
        __debugbreak();
      DObj = CG_XCompositeModel_GetDObj(XCompositeModelFromIndex, (const LocalClientNum_t)this->m_localClientNum, cent, NULL);
    }
    v10 = DObj;
    if ( DObj )
    {
      Sys_ProfBeginNamedEvent(0xFFFF0000, "ProcessEntity Vehicle");
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
        CgVehicleSystemMP::UpdateBoneControllers(this, v10, cent);
        CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
      }
      p_lerp = &cent->nextState.lerp;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 8u) && !CG_Entity_IsNoDraw((const LocalClientNum_t)this->m_localClientNum, &cent->nextState, &LocalClientGlobals->predictedPlayerState) )
        AimTargetMP_ProcessEntity((const LocalClientNum_t)this->m_localClientNum, cent);
      if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)this->m_localClientNum, cent, &scriptableIndex) )
      {
        ScriptableCl_UpdatePosition((const LocalClientNum_t)this->m_localClientNum, scriptableIndex, cent);
        ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)this->m_localClientNum, scriptableIndex, p_nextState->number);
      }
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      XAnimBonePhysicsSetDObjMatrix(v10, &outOrigin, &cent->pose.angles);
      v13 = 0.0;
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        this->UpdateEntity(this, cent);
        Client = CgVehicleSystem::GetClient(this, cent);
        if ( CG_Vehicle_ShouldApplyMaterialTime(Client) )
        {
          CG_Vehicle_UpdateMaterialTime(Client);
          v13 = (float)((float)LocalClientGlobals->time * 0.001) - Client->materialTime;
        }
        p_lerp = &cent->nextState.lerp;
      }
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
        CgVehicleSystemMP::FXTest(this, v10, cent);
        CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
      }
      CG_GetPoseOrigin(&cent->pose, &v30);
      v30.v[2] = v30.v[2] + 32.0;
      v28 = CG_EntityMP_GetRenderFlagForRefEntity(this->m_localClientNum, LocalClientGlobals, cent, &p_lerp->eFlags) | 0x1000;
      HudOutlineInfo = (__m256i *)CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
      *(__m256i *)&v32.scrollRateX = *HudOutlineInfo;
      *(__m256i *)&v33.color = *(__m256i *)&v32.scrollRateX;
      v27 = *(float *)HudOutlineInfo[1].m256i_i32;
      team = this->GetTeam(this, &cent->nextState);
      v16 = this->m_localClientNum;
      if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
        __debugbreak();
      if ( (unsigned int)v16 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&v25 = CgStatic::ms_allocatedCount;
        LODWORD(outDObjModel) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outDObjModel, v25) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v16] )
      {
        LODWORD(v25) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v25) )
          __debugbreak();
      }
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      v18 = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v16]->m_localClientNum);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v18->IsMP(v18) )
      {
        if ( (unsigned int)clientNum >= v18[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v25) = v18[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outDObjModel) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outDObjModel, v25) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v18[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v18, clientNum);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      if ( BGVehicles::IsOnSameTeam(this, &cent->nextState, CharacterInfo->team) || !CG_Utils_ShouldHighlightVehicle((const LocalClientNum_t)this->m_localClientNum) || !CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)this->m_localClientNum) || CG_Utils_StencilScriptControlled((const LocalClientNum_t)this->m_localClientNum) )
      {
        v22 = *(__m256i *)&v32.scrollRateX;
      }
      else
      {
        v33.scopeStencil = FLOAT_1_0;
        v20 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)this->m_localClientNum, cent);
        useAlternateColor = v33.useAlternateColor;
        if ( v20 )
          useAlternateColor = 1;
        v33.useAlternateColor = useAlternateColor;
        v22 = *(__m256i *)&v33.color;
      }
      number = p_nextState->number;
      *(__m256i *)&v33.color = v22;
      v33.characterEVOffset = v27;
      memset(&v32, 0, sizeof(v32));
      CG_Entity_AddDObjToScene((const LocalClientNum_t)this->m_localClientNum, v10, &cent->pose, number, v28, &v32, &v33, &v30, v13, 0);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u) || CG_LaserForceOnEnabled() )
        CG_LaserAdd((const LocalClientNum_t)this->m_localClientNum, p_nextState->number, team);
      memset(&outOrigin, 0, sizeof(outOrigin));
      Sys_ProfEndNamedEvent();
    }
  }
  memset(&v30, 0, sizeof(v30));
}

/*
==============
CgVehicleSystemMP::ShouldUpdateVehicleSound
==============
*/
bool CgVehicleSystemMP::ShouldUpdateVehicleSound(CgVehicleSystemMP *this, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v4; 
  const CgGlobalsMP *v5; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v4 = DCONST_DVARINT_cg_vehicleSoundCount;
  v5 = LocalClientGlobals;
  if ( !DCONST_DVARINT_cg_vehicleSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vehicleSoundCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return CG_VehicleMP_IsVehicleAboveCullingThreshold(v5, cent, v4->current.unsignedInt);
}

/*
==============
CgVehicleSystemMP::UpdateBoneControllers
==============
*/
void CgVehicleSystemMP::UpdateBoneControllers(CgVehicleSystemMP *this, DObj *obj, centity_t *cent)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  unsigned __int8 boneUsage; 
  VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  double v22; 
  float v23; 
  cg_t *LocalClientGlobals; 
  float v25; 
  __int128 v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  __int128 v30; 
  const char *v31; 
  float v32; 
  float v33; 
  __int128 v35; 
  float v39; 
  int v41; 
  float v42; 
  int v43; 
  float v44; 
  int v45; 
  float v46; 
  int v47; 
  const char *v48; 
  int v49; 
  __int128 v51; 
  float v55; 
  float v57; 
  int v58; 
  float v59; 
  float v60; 
  float v61; 
  int v62; 
  double v63; 
  float v64; 
  double v65; 
  double v66; 
  __m128i frameTime; 
  unsigned __int8 *rotorBoneIndex; 
  int v71; 
  __int64 v74; 
  scr_string_t *v75; 
  scr_string_t *v76; 
  __int64 v77; 
  __int64 v78; 
  int modelIndex; 
  unsigned __int8 inOutIndex[4]; 
  int v81; 
  tmat33_t<vec3_t> axis; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  __int128 v90; 

  if ( !CgVehicleSystem::UpdateBoneControllersInternal(this, obj, cent) )
    return;
  boneUsage = cent->pose.vehicle.boneUsage;
  if ( boneUsage == 1 )
  {
    Client = CgVehicleSystem::GetClient(this, cent);
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( ClientDef->type == VEH_AIRCRAFT )
    {
      CgVehicleSystem::UpdateHelicopterRotorBoneControllers(this, obj, cent);
      return;
    }
    v17 = SLODWORD(Client->localSpeed.v[0]);
    v90 = v3;
    v89 = v4;
    v88 = v5;
    v87 = v6;
    v85 = v8;
    modelIndex = v17;
    v84 = v9;
    v83 = v10;
    if ( (v17 & 0x7F800000) == 2139095040 || (modelIndex = SLODWORD(Client->localSpeed.v[1]), (modelIndex & 0x7F800000) == 2139095040) || (modelIndex = SLODWORD(Client->localSpeed.v[2]), (modelIndex & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] )") )
        __debugbreak();
    }
    modelIndex = SLODWORD(Client->rotateSpeed.v[0]);
    if ( (modelIndex & 0x7F800000) == 2139095040 || (modelIndex = SLODWORD(Client->rotateSpeed.v[1]), (modelIndex & 0x7F800000) == 2139095040) || (modelIndex = SLODWORD(Client->rotateSpeed.v[2]), (modelIndex & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 185, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] )") )
        __debugbreak();
    }
    v18 = LODWORD(Client->localSpeed.v[0]);
    v19 = Client->localSpeed.v[1];
    v20 = Client->localSpeed.v[2];
    v21 = Client->rotateSpeed.v[1];
    v22 = I_fclamp((float)((float)Client->frameTime * 0.001) * ClientDef->vehRotorAccelTiltBlend, 0.0, 1.0);
    v23 = *(float *)&v22;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == cent->nextState.number && !LocalClientGlobals->inKillCam && LocalClientGlobals->predictedPlayerState.vehicleState.targetEntity == 2047 )
    {
      v25 = LocalClientGlobals->clientVehicle.acceleration.v[0];
      v26 = LODWORD(LocalClientGlobals->clientVehicle.acceleration.v[1]);
      v27 = LocalClientGlobals->clientVehicle.acceleration.v[2];
      v86 = v7;
      AnglesToAxis(&cent->nextState.lerp.apos.trBase, &axis);
      v28 = v26;
      v29 = *(float *)&v26 * axis.m[1].v[1];
      *(float *)&v28 = (float)((float)(*(float *)&v26 * axis.m[0].v[1]) + (float)(v25 * axis.m[0].v[0])) + (float)(v27 * axis.m[0].v[2]);
      v30 = v28;
      modelIndex = v28;
      v31 = "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )";
      v33 = (float)((float)(*(float *)&v26 * axis.m[1].v[1]) + (float)(v25 * axis.m[1].v[0])) + (float)(v27 * axis.m[1].v[2]);
      v32 = v33;
      if ( (modelIndex & 0x7F800000) == 2139095040 || (*(float *)&modelIndex = (float)(v29 + (float)(v25 * axis.m[1].v[0])) + (float)(v27 * axis.m[1].v[2]), (LODWORD(v33) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 212, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )") )
          __debugbreak();
      }
      _XMM2 = LODWORD(ClientDef->vehRotorMaxAccel);
      v35 = v30;
      *(float *)&v35 = fsqrt((float)(*(float *)&v30 * *(float *)&v30) + (float)(v32 * v32));
      _XMM3 = v35;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      v39 = 1.0 / *(float *)&_XMM0;
      __asm { vminss  xmm0, xmm2, xmm3 }
      *(float *)&_XMM3 = (float)(*(float *)&_XMM0 * v23) / *(float *)&_XMM2;
      *(float *)&v41 = (float)(v39 * *(float *)&v30) * *(float *)&_XMM3;
      modelIndex = v41;
      *(float *)&v43 = (float)(v39 * v32) * *(float *)&_XMM3;
      v42 = *(float *)&v43;
      if ( (v41 & 0x7F800000) == 2139095040 || (modelIndex = v43, (v43 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 218, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )") )
          __debugbreak();
      }
      v44 = _mm_cvtepi32_ps((__m128i)cent->pose.vehicle.wheelFraction[2]).m128_f32[0] * 0.000015259022;
      *(float *)&v45 = *(float *)&v41 + (float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)cent->pose.vehicle.wheelFraction[1]).m128_f32[0] * 0.000015259022) * 2.0) - 1.0) * (float)(1.0 - v23));
      modelIndex = v45;
      *(float *)&v47 = *(float *)&v43 + (float)((float)((float)(v44 * 2.0) - 1.0) * (float)(1.0 - v23));
      v46 = v42 + (float)((float)((float)(v44 * 2.0) - 1.0) * (float)(1.0 - v23));
      if ( (v45 & 0x7F800000) != 2139095040 )
      {
        modelIndex = v47;
        if ( (v47 & 0x7F800000) != 2139095040 )
          goto LABEL_42;
      }
      v48 = "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )";
      v49 = 222;
    }
    else
    {
      _XMM2 = LODWORD(ClientDef->vehRotorMaxVelocity);
      v51 = v18;
      *(float *)&v51 = fsqrt((float)(*(float *)&v18 * *(float *)&v18) + (float)(v19 * v19));
      _XMM3 = v51;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      v55 = 1.0 / *(float *)&_XMM0;
      __asm { vminss  xmm0, xmm2, xmm3 }
      v57 = (float)(*(float *)&_XMM0 * v23) / *(float *)&_XMM2;
      *(float *)&v58 = (float)(*(float *)&v18 * v55) * v57;
      modelIndex = v58;
      v31 = "!IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] )";
      v60 = (float)(v55 * v19) * v57;
      v59 = v60;
      if ( (v58 & 0x7F800000) == 2139095040 || (*(float *)&modelIndex = (float)(v55 * v19) * v57, (LODWORD(v60) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 237, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] )") )
          __debugbreak();
      }
      v61 = _mm_cvtepi32_ps((__m128i)cent->pose.vehicle.wheelFraction[2]).m128_f32[0] * 0.000015259022;
      *(float *)&v45 = *(float *)&v58 + (float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)cent->pose.vehicle.wheelFraction[1]).m128_f32[0] * 0.000015259022) * 2.0) - 1.0) * (float)(1.0 - v23));
      modelIndex = v45;
      *(float *)&v62 = v60 + (float)((float)((float)(v61 * 2.0) - 1.0) * (float)(1.0 - v23));
      v46 = v59 + (float)((float)((float)(v61 * 2.0) - 1.0) * (float)(1.0 - v23));
      if ( (v45 & 0x7F800000) != 2139095040 )
      {
        modelIndex = v62;
        if ( (v62 & 0x7F800000) != 2139095040 )
          goto LABEL_42;
      }
      v48 = "( !IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] ) )";
      v49 = 241;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", v49, ASSERT_TYPE_SANITY, v48, (const char *)&queryFormat, v31) )
      __debugbreak();
LABEL_42:
    v63 = I_fclamp(*(float *)&v45, -1.0, 1.0);
    v64 = *(float *)&v63;
    v65 = I_fclamp(v46, -1.0, 1.0);
    cent->pose.vehicle.wheelFraction[1] = CompressSignedUnit(v64);
    cent->pose.vehicle.wheelFraction[2] = CompressSignedUnit(*(float *)&v65);
    v66 = I_fclamp(v21 / ClientDef->vehRotorMaxVehicleSpin, -1.0, 1.0);
    cent->pose.vehicle.wheelFraction[3] = CompressSignedUnit(*(float *)&v66);
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm3, 1 }
    cent->pose.vehicle.wheelFraction[4] = (int)*(float *)&_XMM0;
    _mm_cvtepi32_ps((__m128i)(unsigned int)cent->pose.vehicle.terrainMode.angleDesires);
    I_fclamp(v20 / ClientDef->vehRotorSpinVerticalSpeedThreshold, -1.0, 1.0);
    frameTime = (__m128i)(unsigned int)Client->frameTime;
    rotorBoneIndex = cent->pose.vehicle.rotorBoneIndex;
    v71 = 0;
    _mm_cvtepi32_ps(frameTime);
    _XMM4 = 0i64;
    __asm { vroundss xmm4, xmm4, xmm1, 1 }
    cent->pose.vehicle.wheelFraction[5] = (int)*(float *)&_XMM4;
    v74 = 0i64;
    do
    {
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( (unsigned int)v71 >= 0x18 )
      {
        LODWORD(v78) = 24;
        LODWORD(v77) = v71;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( rotorIdx ) < (unsigned)( MAX_ROTOR_BONES )", "rotorIdx doesn't index MAX_ROTOR_BONES\n\t%i not in [0, %i)", v77, v78) )
          __debugbreak();
      }
      v75 = *(scr_string_t **)((char *)&off_147FABF10 + v74);
      inOutIndex[0] = -2;
      if ( !DObjGetBoneIndexInternal_78(obj, *v75, inOutIndex, &modelIndex) )
      {
        v76 = *(scr_string_t **)((char *)&off_147FAC000 + v74);
        inOutIndex[0] = -2;
        DObjGetBoneIndexInternal_78(obj, *v76, inOutIndex, &v81);
      }
      ++v71;
      *rotorBoneIndex = inOutIndex[0];
      v74 += 8i64;
      ++rotorBoneIndex;
    }
    while ( v71 < 24 );
    return;
  }
  if ( !boneUsage )
    CgVehicleSystem::UpdateWheelsBoneControllers(this, obj, cent);
}

/*
==============
CgVehicleSystemMP::UseGdtCamera
==============
*/
char CgVehicleSystemMP::UseGdtCamera(CgVehicleSystemMP *this, const centity_t *cent)
{
  return 1;
}

