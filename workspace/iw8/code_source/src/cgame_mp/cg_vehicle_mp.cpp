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
  BgVehiclePhysicsManager *v7; 
  char v9; 
  char v10; 

  if ( BGVehicles::PhysicsIsValid(physicsId) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v7 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = (HelicopterDynamics *)BgVehiclePhysicsManager::GetObjectById(v7, physicsId);
    if ( ObjectById )
    {
      *(double *)&_XMM0 = HelicopterDynamics::GetRPMForRotorIndex(ObjectById, 0);
      __asm
      {
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@42c80000
      }
      LOBYTE(ObjectById) = !(v9 | v10);
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
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  entityType_s eType; 
  unsigned int physicsId; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v17; 
  HelicopterDynamics *ObjectById; 
  char v20; 
  char v21; 
  char v22; 
  bool v23; 
  bool result; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBP = priorityInfo;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 799, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_heli_audioPriorityCullDistance;
  if ( !DCONST_DVARFLT_heli_audioPriorityCullDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_audioPriorityCullDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  Client = CgVehicleSystem::GetClient((CgVehicleSystem *)vehSystem, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 805, ASSERT_TYPE_ASSERT, "(centVehicle)", (const char *)&queryFormat, "centVehicle") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 807, ASSERT_TYPE_ASSERT, "(centVehicleDef)", (const char *)&queryFormat, "centVehicleDef") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( ClientDef->type != VEH_AIRCRAFT )
    goto LABEL_20;
  if ( ClientDef->vehiclePhysicsDef.physics_animProfile != VEH_ANIMPROFILE_LBRAVO )
    goto LABEL_20;
  if ( !BGVehicles::PhysicsIsValid(Client->physicsId) )
    goto LABEL_20;
  physicsId = Client->physicsId;
  if ( !BGVehicles::PhysicsIsValid(physicsId) )
    goto LABEL_19;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v17 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = (HelicopterDynamics *)BgVehiclePhysicsManager::GetObjectById(v17, physicsId);
  if ( !ObjectById )
    goto LABEL_20;
  *(double *)&_XMM0 = HelicopterDynamics::GetRPMForRotorIndex(ObjectById, 0);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@42c80000
  }
  if ( !(v20 | v21) )
LABEL_19:
    v22 = 1;
  else
LABEL_20:
    v22 = 0;
  v23 = (unsigned __int16)eType <= ET_HELICOPTER;
  if ( eType != ET_HELICOPTER )
  {
    v23 = v22 == 0;
    if ( !v22 )
      goto LABEL_25;
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vcomiss xmm0, dword ptr [rbp+4]
  }
  if ( !v23 )
    result = 1;
  else
LABEL_25:
    result = 0;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
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
  __int64 v7; 
  CgGlobalsMP *LocalClientGlobals; 
  int v9; 
  unsigned __int16 *m_vehicleOrderSortedIndex; 
  const dvar_t *v11; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v15; 
  int v16; 
  __int64 v17; 
  CgVehiclePriorityInfo *v19; 
  entityState_t *entities; 
  int v24; 
  __int64 number; 
  CgEntitySystem *v26; 
  __int64 v27; 
  int time; 
  CgVehiclePriorityInfo v40; 
  int v41; 
  int v42; 
  __int64 i; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  CgVehicleMPSortFunctor v51; 
  int v52; 
  int v53; 
  int v54; 
  int integer; 
  int v56[3]; 
  vec3_t outPos; 
  CgGlobalsMP *v58; 
  CgVehicleSystem *vehSystem; 
  const CgSnapshotMP *v60; 
  unsigned __int16 *v61; 
  __int64 v62; 
  CgTrajectory v63; 
  CgVehiclePriorityInfo priorityInfo[128]; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v62 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v60 = nextSnap;
  v7 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v58 = LocalClientGlobals;
  v9 = 0;
  v52 = 0;
  vehSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v7);
  if ( !vehSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 825, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  m_vehicleOrderSortedIndex = LocalClientGlobals->m_vehicleOrderSortedIndex;
  v61 = LocalClientGlobals->m_vehicleOrderSortedIndex;
  memset_0(LocalClientGlobals->m_vehicleOrderSortedIndex, 0, sizeof(LocalClientGlobals->m_vehicleOrderSortedIndex));
  v11 = DCONST_DVARBOOL_cg_vehicleCullingPriorities;
  if ( !DCONST_DVARBOOL_cg_vehicleCullingPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vehicleCullingPriorities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (CgGlobalsMP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v56[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v56[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v56[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    v15 = DCONST_DVARINT_heli_audioPriorityCount;
    if ( !DCONST_DVARINT_heli_audioPriorityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_audioPriorityCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    v16 = 0;
    v54 = 0;
    if ( nextSnap->numEntities > 0 )
    {
      v17 = v7;
      _R15 = priorityInfo;
      v19 = priorityInfo;
      entities = nextSnap->entities;
      __asm
      {
        vmovss  xmm6, [rsp+550h+var_4E0]
        vmovss  xmm7, [rsp+550h+var_4E4]
        vmovss  xmm8, [rsp+550h+var_4E8]
      }
      v24 = 0;
      do
      {
        number = entities->number;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v49) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v49) )
            __debugbreak();
        }
        if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v49) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v48) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v17] )
        {
          LODWORD(v49) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v49) )
            __debugbreak();
        }
        v26 = CgEntitySystem::ms_entitySystemArray[v17];
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(v49) = 2048;
          LODWORD(v48) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        v27 = (__int64)&v26->m_entities[number];
        if ( (*(_BYTE *)(v27 + 648) & 1) == 0 )
          goto LABEL_39;
        if ( v27 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((*(_WORD *)(v27 + 408) - 12) & 0xFFFD) != 0 )
        {
LABEL_39:
          v41 = v52;
        }
        else
        {
          time = v58->time;
          _R15->entityNum = truncate_cast<unsigned short,unsigned int>(entities->number);
          CgTrajectory::CgTrajectory(&v63, (const LocalClientNum_t)v7, (const centity_t *)v27, (const LerpEntityState *)(v27 + 412));
          BgTrajectory::SetFlags(&v63, 1);
          BgTrajectory::SetFlags(&v63, 2);
          BgTrajectory::EvaluatePosTrajectory(&v63, time, &outPos);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+550h+outPos]
            vsubss  xmm3, xmm0, xmm8
            vmovss  xmm1, dword ptr [rsp+550h+outPos+4]
            vsubss  xmm2, xmm1, xmm7
            vmovss  xmm0, dword ptr [rbp+450h+outPos+8]
            vsubss  xmm4, xmm0, xmm6
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vmovss  dword ptr [r15+4], xmm2
          }
          memset(&outPos, 0, sizeof(outPos));
          if ( CG_VehicleMP_IsSoundHighPriority((const LocalClientNum_t)v7, vehSystem, (const centity_t *const)v27, &priorityInfo[v52]) )
          {
            v40 = *v19;
            *v19 = *_R15;
            *_R15 = v40;
            ++v24;
            ++v19;
          }
          v41 = ++v52;
          ++_R15;
        }
        ++v54;
        ++entities;
        v17 = v7;
      }
      while ( v54 < v60->numEntities );
      v53 = v24;
      m_vehicleOrderSortedIndex = v61;
      if ( v41 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 860, ASSERT_TYPE_ASSERT, "(vehiclePriorityCount <= (1 << 7))", (const char *)&queryFormat, "vehiclePriorityCount <= MAX_VEHICLES") )
        __debugbreak();
      v16 = v53;
      v9 = v52;
    }
    std::_Sort_unchecked<CgVehiclePriorityInfo *,CgVehicleMPSortFunctor>(priorityInfo, &priorityInfo[v16], v16, v51);
    v42 = integer;
    if ( v16 < integer )
      v42 = v16;
    std::_Sort_unchecked<CgVehiclePriorityInfo *,CgVehicleMPSortFunctor>(&priorityInfo[v42], &priorityInfo[v9], (8i64 * v9 - 8i64 * v42) >> 3, v51);
    if ( v9 > 0 )
    {
      for ( i = 0i64; i < v9; *m_vehicleOrderSortedIndex++ = priorityInfo[i++].entityNum )
      {
        if ( !priorityInfo[i].entityNum )
        {
          LODWORD(v50) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 871, ASSERT_TYPE_ASSERT, "( vehiclePriorities[index].entityNum ) != ( 0 )", "%s != %s\n\t%u, %u", "vehiclePriorities[index].entityNum", "0", v50, 0i64) )
            __debugbreak();
        }
      }
    }
    memset(v56, 0, sizeof(v56));
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  int v5; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  _RAX = ClActiveClient::ms_activeClients[m_localClientNum];
  if ( LOBYTE(_RAX[3].cmds[94].buttons) == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+87E4h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  [rsp+48h+arg_0], xmm1
    }
    LODWORD(_RAX->clViewangles.clViewangles.v[2]) = v5 ^ ((((_DWORD)_RAX + 436) ^ _RAX->clviewangles_aab) * ((((_DWORD)_RAX + 436) ^ _RAX->clviewangles_aab) + 2));
  }
}

/*
==============
CgVehicleSystemMP::FXTest
==============
*/
void CgVehicleSystemMP::FXTest(CgVehicleSystemMP *this, const DObj *obj, centity_t *cent)
{
  const VehicleClient *Client; 
  const VehicleDef *v16; 
  int skipEntity; 
  vehicleEffects *FxInfo; 
  int time; 
  char v41; 
  char v42; 
  const ParticleSystemDef *particleSystemDef; 
  const ParticleSystemDef *m_particleSystemDef; 
  vec3_t start; 
  vec3_t *p_start; 
  FXRegisteredDef def; 
  __int64 v103; 
  vec3_t end; 
  tmat33_t<vec3_t> src; 
  vec3_t origin; 
  Bounds bounds; 
  trace_t results; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  v103 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  def.m_particleSystemDef = NULL;
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 465, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( cent->nextState.eType == ET_HELICOPTER )
  {
    _RAX = CgVehicleSystem::GetClientDef(Client);
    v16 = _RAX;
    if ( _RAX->vehHelicopterUseGroundFX )
    {
      __asm
      {
        vmovss  xmm9, dword ptr [rax+68Ch]
        vxorps  xmm11, xmm11, xmm11
        vmovss  xmm12, cs:__real@3f800000
        vucomiss xmm9, xmm11
      }
      if ( _RAX->vehHelicopterUseGroundFX )
        goto LABEL_9;
      __asm { vucomiss xmm11, dword ptr [rax+690h] }
      if ( _RAX->vehHelicopterUseGroundFX )
      {
LABEL_9:
        __asm
        {
          vmovss  xmm10, dword ptr [rax+690h]
          vmovss  xmm14, dword ptr [rax+684h]
          vmovss  xmm13, dword ptr [rax+688h]
          vmovss  xmm6, dword ptr [rax+680h]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm9, cs:__real@43af0000
          vmovss  xmm10, cs:__real@44960000
          vmovss  xmm14, cs:__real@3e19999a
          vmovss  xmm13, cs:__real@3d4ccccd
          vmovaps xmm6, xmm12
        }
      }
      skipEntity = cent->nextState.number;
      FxInfo = CgVehicleSystemMP::GetFxInfo(this, skipEntity);
      time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
      if ( FxInfo->nextDustFx <= time )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f000000000000000000000000000000
          vmovups xmmword ptr [rbp+110h+bounds.midPoint], xmm0
          vmovss  xmm1, cs:__real@3f000000
          vmovss  dword ptr [rbp+110h+bounds.halfSize+4], xmm1
          vmovss  dword ptr [rbp+110h+bounds.halfSize+8], xmm1
        }
        _RDI = &cent->prevState.pos;
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          p_start = &start;
          *(_QWORD *)&start.y = __PAIR64__(s_trbase_aab_Z, s_trbase_aab_Y) ^ *(_QWORD *)_RDI->trBase.v ^ *(_QWORD *)&_RDI->trBase.y;
          LODWORD(start.v[0]) = LODWORD(_RDI->trBase.v[0]) ^ ~s_trbase_aab_X;
          memset(&p_start, 0, sizeof(p_start));
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+210h+start]
            vmovss  dword ptr [rsp+210h+var_1A0], xmm0
          }
          if ( ((unsigned int)p_start & 0x7F800000) == 2139095040 )
            goto LABEL_36;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+210h+start+4]
            vmovss  dword ptr [rsp+210h+var_1A0], xmm0
          }
          if ( ((unsigned int)p_start & 0x7F800000) == 2139095040 )
            goto LABEL_36;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+210h+start+8]
            vmovss  dword ptr [rsp+210h+var_1A0], xmm0
          }
          if ( ((unsigned int)p_start & 0x7F800000) == 2139095040 )
          {
LABEL_36:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmovss  dword ptr [rsp+210h+start], xmm0
            vmovss  xmm1, dword ptr [rdi+10h]
            vmovss  dword ptr [rsp+210h+start+4], xmm1
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+210h+start+8], xmm0
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+210h+start+8]
          vsubss  xmm2, xmm0, xmm10
          vmovss  xmm1, dword ptr [rsp+210h+start]
          vmovss  dword ptr [rbp+110h+end], xmm1
          vmovss  xmm0, dword ptr [rsp+210h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm0
          vmovss  dword ptr [rbp+110h+end+8], xmm2
        }
        CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * this->m_localClientNum + 2), &results, &start, &end, &bounds, skipEntity, 0, 2097, 0, NULL, All);
        CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
        __asm
        {
          vmulss  xmm0, xmm6, cs:__real@447a0000
          vcvttss2si edi, xmm0
          vmovss  xmm3, [rbp+110h+results.fraction]
          vcomiss xmm3, xmm12
        }
        if ( v41 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+110h+end]
            vsubss  xmm1, xmm0, dword ptr [rsp+210h+start]
            vmulss  xmm2, xmm1, xmm3
            vaddss  xmm4, xmm2, dword ptr [rsp+210h+start]
            vmovss  dword ptr [rbp+110h+origin], xmm4
            vmovss  xmm7, dword ptr [rsp+210h+start+4]
            vmovss  xmm0, dword ptr [rbp+110h+end+4]
            vsubss  xmm1, xmm0, xmm7
            vmulss  xmm2, xmm1, xmm3
            vaddss  xmm6, xmm2, xmm7
            vmovss  dword ptr [rbp+110h+origin+4], xmm6
            vmovss  xmm5, dword ptr [rsp+210h+start+8]
            vmovss  xmm0, dword ptr [rbp+110h+end+8]
            vsubss  xmm1, xmm0, xmm5
            vmulss  xmm2, xmm1, xmm3
            vaddss  xmm3, xmm2, xmm5
            vmovss  dword ptr [rbp+110h+origin+8], xmm3
            vsubss  xmm4, xmm4, dword ptr [rsp+210h+start]
            vsubss  xmm0, xmm6, xmm7
            vsubss  xmm5, xmm3, xmm5
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
            vcomiss xmm6, xmm10
          }
          if ( v41 )
          {
            __asm { vcomiss xmm10, xmm9 }
            if ( v41 | v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 516, ASSERT_TYPE_ASSERT, "(maxGroundDist > minGroundDist)", (const char *)&queryFormat, "maxGroundDist > minGroundDist") )
              __debugbreak();
            __asm
            {
              vsubss  xmm1, xmm6, xmm9
              vsubss  xmm0, xmm10, xmm9
              vdivss  xmm2, xmm1, xmm0
              vsubss  xmm1, xmm14, xmm13
              vmulss  xmm2, xmm2, xmm1
              vaddss  xmm0, xmm2, xmm13
              vmulss  xmm3, xmm0, cs:__real@447a0000
              vcvttss2si edi, xmm3
              vmovss  dword ptr [rbp+110h+src], xmm11
              vmovss  dword ptr [rbp+110h+src+4], xmm11
              vmovss  dword ptr [rbp+110h+src+8], xmm12
            }
            PerpendicularVector(src.m, &src.m[2]);
            __asm
            {
              vmovss  xmm7, dword ptr [rbp+110h+dst+4]
              vmovss  xmm5, dword ptr [rbp+110h+src+8]
              vmulss  xmm1, xmm5, xmm7
              vmovss  xmm2, dword ptr [rbp+110h+dst+8]
              vmovss  xmm6, dword ptr [rbp+110h+src+4]
              vmulss  xmm0, xmm6, xmm2
              vsubss  xmm1, xmm1, xmm0
              vmovss  [rbp+110h+var_16C], xmm1
              vmulss  xmm2, xmm2, dword ptr [rbp+110h+src]
              vmulss  xmm0, xmm5, dword ptr [rbp+110h+dst]
              vsubss  xmm1, xmm2, xmm0
              vmovss  [rbp+110h+var_168], xmm1
              vmulss  xmm2, xmm6, dword ptr [rbp+110h+dst]
              vmulss  xmm0, xmm7, dword ptr [rbp+110h+src]
              vsubss  xmm1, xmm2, xmm0
              vmovss  [rbp+110h+var_164], xmm1
            }
            if ( (results.surfaceFlags & 0x1F80000) == 11010048 )
            {
              particleSystemDef = v16->vehHelicopterGroundWaterFx.particleSystemDef;
              m_particleSystemDef = cgMedia.heliWaterEffect.m_particleSystemDef;
            }
            else
            {
              particleSystemDef = v16->vehHelicopterGroundFx.particleSystemDef;
              m_particleSystemDef = cgMedia.heliDustEffect.m_particleSystemDef;
            }
            if ( particleSystemDef )
              m_particleSystemDef = particleSystemDef;
            def.m_particleSystemDef = m_particleSystemDef;
            FX_PlayOrientedEffect(this->m_localClientNum, &def, time, &origin, &src);
          }
        }
        FxInfo->nextDustFx = _EDI + time;
        memset(&start, 0, sizeof(start));
      }
    }
  }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
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
  unsigned int time; 
  bool v9; 
  const dvar_t *v16; 
  char v23; 

  if ( (unsigned int)(CgVehicleSystem::GetTurretFireType(this, cent) - 1) <= 1 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovaps [rsp+58h+var_18], xmm7 }
    _RBX = CgVehicleSystemMP::GetFxInfo(this, cent->nextState.number);
    __asm { vxorps  xmm7, xmm7, xmm7 }
    time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
    v9 = time <= _RBX->lastBarrelUpdateTime;
    __asm
    {
      vcvtsi2ss xmm7, xmm7, ecx
      vmulss  xmm0, xmm7, cs:__real@3a83126f
      vmulss  xmm1, xmm0, dword ptr [rbx+18h]
      vaddss  xmm2, xmm1, dword ptr [rbx+1Ch]
      vmovss  xmm0, cs:__real@43b40000
      vcomiss xmm2, xmm0
      vmovss  dword ptr [rbx+1Ch], xmm2
    }
    _RBX->lastBarrelUpdateTime = time;
    if ( !v9 )
    {
      __asm
      {
        vsubss  xmm0, xmm2, xmm0
        vmovss  dword ptr [rbx+1Ch], xmm0
      }
    }
    v16 = DVARFLT_heli_barrelSlowdown;
    if ( !DVARFLT_heli_barrelSlowdown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelSlowdown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rdi+28h]
      vmulss  xmm2, xmm0, cs:__real@3a83126f
      vmovss  xmm1, dword ptr [rbx+18h]
      vmovaps xmm7, [rsp+58h+var_18]
      vsubss  xmm3, xmm1, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
      vmovss  dword ptr [rbx+18h], xmm3
    }
    if ( v23 )
      _RBX->barrelVelocity = 0.0;
    __asm { vmovss  xmm0, dword ptr [rbx+1Ch] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CgVehicleSystemMP::IncTurretBarrelRoll
==============
*/

void __fastcall CgVehicleSystemMP::IncTurretBarrelRoll(CgVehicleSystemMP *this, int entityNum, double rotation)
{
  vehicleEffects *FxInfo; 
  const dvar_t *v6; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  FxInfo = CgVehicleSystemMP::GetFxInfo(this, entityNum);
  v6 = DVARFLT_heli_barrelMaxVelocity;
  _RDI = FxInfo;
  if ( !DVARFLT_heli_barrelMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "heli_barrelMaxVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rdi+18h]
    vminss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi+18h], xmm1
  }
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
  DObj *v13; 
  cg_t *LocalClientGlobals; 
  LerpEntityState *p_lerp; 
  VehicleClient *Client; 
  __int64 v25; 
  __int64 clientNum; 
  cg_t *v27; 
  const characterInfo_t *CharacterInfo; 
  bool v30; 
  bool useAlternateColor; 
  unsigned int number; 
  DObjModel *outDObjModel; 
  __int64 v37; 
  float v38; 
  unsigned int scriptableIndex; 
  float characterEVOffset; 
  unsigned int v41; 
  team_t team; 
  vec3_t v43; 
  vec3_t outOrigin; 
  shaderOverride_t v45; 
  GfxSceneHudOutlineInfo v46; 
  __int64 v47; 
  GfxSceneHudOutlineInfo result; 
  DObjModel dobjModel; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
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
    v13 = DObj;
    if ( DObj )
    {
      Sys_ProfBeginNamedEvent(0xFFFF0000, "ProcessEntity Vehicle");
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
        CgVehicleSystemMP::UpdateBoneControllers(this, v13, cent);
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
      XAnimBonePhysicsSetDObjMatrix(v13, &outOrigin, &cent->pose.angles);
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        this->UpdateEntity(this, cent);
        Client = CgVehicleSystem::GetClient(this, cent);
        if ( CG_Vehicle_ShouldApplyMaterialTime(Client) )
        {
          CG_Vehicle_UpdateMaterialTime(Client);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r15+65ECh]
            vmulss  xmm1, xmm0, cs:__real@3a83126f
            vsubss  xmm6, xmm1, dword ptr [r14+68h]
          }
        }
        p_lerp = &cent->nextState.lerp;
      }
      if ( !CG_Vehicle_IsCorpse(cent) )
      {
        CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
        CgVehicleSystemMP::FXTest(this, v13, cent);
        CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
      }
      CG_GetPoseOrigin(&cent->pose, &v43);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1B0h+var_150+8]
        vaddss  xmm1, xmm0, cs:__real@42000000
        vmovss  dword ptr [rsp+1B0h+var_150+8], xmm1
      }
      v41 = CG_EntityMP_GetRenderFlagForRefEntity(this->m_localClientNum, LocalClientGlobals, cent, &p_lerp->eFlags) | 0x1000;
      _RAX = CG_Entity_GetHudOutlineInfo(&result, LocalClientGlobals, cent);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rbp+0B0h+var_130], ymm0
        vmovups [rbp+0B0h+var_100], ymm0
      }
      characterEVOffset = _RAX->characterEVOffset;
      team = this->GetTeam(this, &cent->nextState);
      v25 = this->m_localClientNum;
      if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
        __debugbreak();
      if ( (unsigned int)v25 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&v37 = CgStatic::ms_allocatedCount;
        LODWORD(outDObjModel) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outDObjModel, v37) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v25] )
      {
        LODWORD(v37) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v37) )
          __debugbreak();
      }
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      v27 = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v25]->m_localClientNum);
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v27->IsMP(v27) )
      {
        if ( (unsigned int)clientNum >= v27[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v37) = v27[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(outDObjModel) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outDObjModel, v37) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v27[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v27, clientNum);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      if ( BGVehicles::IsOnSameTeam(this, &cent->nextState, CharacterInfo->team) || !CG_Utils_ShouldHighlightVehicle((const LocalClientNum_t)this->m_localClientNum) || !CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)this->m_localClientNum) || CG_Utils_StencilScriptControlled((const LocalClientNum_t)this->m_localClientNum) )
      {
        __asm { vmovups ymm0, [rbp+0B0h+var_130] }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rbp+0B0h+var_100+4], xmm0
        }
        v30 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)this->m_localClientNum, cent);
        useAlternateColor = v46.useAlternateColor;
        if ( v30 )
          useAlternateColor = 1;
        v46.useAlternateColor = useAlternateColor;
        __asm { vmovups ymm0, [rbp+0B0h+var_100] }
      }
      number = p_nextState->number;
      __asm { vmovups [rbp+0B0h+var_100], ymm0 }
      v46.characterEVOffset = characterEVOffset;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_10.scrollRateX
        vmovups [rbp+0B0h+var_130], ymm0
      }
      v45.atlasTime = NULL_SHADER_OVERRIDE_10.atlasTime;
      __asm { vmovss  [rsp+1B0h+var_170], xmm6 }
      CG_Entity_AddDObjToScene((const LocalClientNum_t)this->m_localClientNum, v13, &cent->pose, number, v41, &v45, &v46, &v43, v38, 0);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 9u) || CG_LaserForceOnEnabled() )
        CG_LaserAdd((const LocalClientNum_t)this->m_localClientNum, p_nextState->number, team);
      memset(&outOrigin, 0, sizeof(outOrigin));
      Sys_ProfEndNamedEvent();
    }
  }
  memset(&v43, 0, sizeof(v43));
  __asm { vmovaps xmm6, [rsp+1B0h+var_40] }
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
  unsigned __int8 boneUsage; 
  const char *v45; 
  const char *v81; 
  int v82; 
  unsigned __int16 v123; 
  unsigned __int8 *rotorBoneIndex; 
  int v149; 
  __int64 v162; 
  scr_string_t *v163; 
  scr_string_t *v164; 
  __int64 v165; 
  __int64 v166; 
  int modelIndex; 
  unsigned __int8 inOutIndex[4]; 
  int v169; 
  tmat33_t<vec3_t> axis; 

  if ( !CgVehicleSystem::UpdateBoneControllersInternal(this, obj, cent) )
    return;
  boneUsage = cent->pose.vehicle.boneUsage;
  if ( boneUsage == 1 )
  {
    _RBX = CgVehicleSystem::GetClient(this, cent);
    _R14 = CgVehicleSystem::GetClientDef(_RBX);
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( _R14->type == VEH_AIRCRAFT )
    {
      CgVehicleSystem::UpdateHelicopterRotorBoneControllers(this, obj, cent);
      return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovaps [rsp+138h+var_48], xmm6
      vmovaps [rsp+138h+var_58], xmm7
      vmovaps [rsp+138h+var_68], xmm8
      vmovaps [rsp+138h+var_78], xmm9
      vmovaps [rsp+138h+var_98], xmm11
      vmovss  [rsp+138h+modelIndex], xmm0
      vmovaps [rsp+138h+var_A8], xmm12
      vmovaps [rsp+138h+var_B8], xmm13
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
      goto LABEL_57;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vmovss  [rsp+138h+modelIndex], xmm0
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
      goto LABEL_57;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+38h]
      vmovss  [rsp+138h+modelIndex], xmm0
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
    {
LABEL_57:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vmovss  [rsp+138h+modelIndex], xmm0
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
      goto LABEL_58;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+40h]
      vmovss  [rsp+138h+modelIndex], xmm0
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
      goto LABEL_58;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+44h]
      vmovss  [rsp+138h+modelIndex], xmm0
    }
    if ( (modelIndex & 0x7F800000) == 2139095040 )
    {
LABEL_58:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 185, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm6, dword ptr [rbx+30h]
      vmovss  xmm7, dword ptr [rbx+34h]
      vmovss  xmm12, dword ptr [rbx+38h]
      vmovss  xmm13, dword ptr [rbx+40h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+58h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm0, xmm1, dword ptr [r14+69Ch]; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm11, xmm0 }
    _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( _RAX->predictedPlayerState.vehicleState.entity == cent->nextState.number && !_RAX->inKillCam && _RAX->predictedPlayerState.vehicleState.targetEntity == 2047 )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rax+0B5348h]
        vmovss  xmm6, dword ptr [rax+0B534Ch]
        vmovss  xmm8, dword ptr [rax+0B5350h]
        vmovaps [rsp+138h+var_88], xmm10
      }
      AnglesToAxis(&cent->nextState.lerp.apos.trBase, &axis);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+138h+axis+4]
        vmulss  xmm0, xmm7, dword ptr [rsp+138h+axis]
        vmulss  xmm3, xmm6, dword ptr [rsp+138h+axis+10h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, dword ptr [rsp+138h+axis+8]
        vmulss  xmm0, xmm7, dword ptr [rsp+138h+axis+0Ch]
        vaddss  xmm10, xmm2, xmm1
        vmulss  xmm1, xmm8, dword ptr [rsp+138h+axis+14h]
        vmovss  [rsp+138h+modelIndex], xmm10
      }
      v45 = "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )";
      __asm
      {
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm6, xmm2, xmm1
      }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
        goto LABEL_59;
      __asm { vmovss  [rsp+138h+modelIndex], xmm6 }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
      {
LABEL_59:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 212, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, dword ptr [r14+698h]
        vmulss  xmm1, xmm10, xmm10
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm4, xmm9, xmm0
        vminss  xmm0, xmm2, xmm3
        vmulss  xmm1, xmm0, xmm11
        vdivss  xmm3, xmm1, xmm2
        vmulss  xmm2, xmm4, xmm10
        vmovaps xmm10, [rsp+138h+var_88]
        vmulss  xmm7, xmm2, xmm3
        vmovss  [rsp+138h+modelIndex], xmm7
        vmulss  xmm0, xmm4, xmm6
        vmulss  xmm6, xmm0, xmm3
      }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
        goto LABEL_60;
      __asm { vmovss  [rsp+138h+modelIndex], xmm6 }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
      {
LABEL_60:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 218, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] )") )
          __debugbreak();
      }
      _EAX = cent->pose.vehicle.wheelFraction[1];
      __asm { vmovd   xmm0, eax }
      _EAX = cent->pose.vehicle.wheelFraction[2];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@37800080
        vmulss  xmm0, xmm1, cs:__real@40000000
        vsubss  xmm1, xmm0, xmm9
        vmovd   xmm0, eax
        vsubss  xmm5, xmm9, xmm11
        vmulss  xmm2, xmm1, xmm5
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@37800080
        vaddss  xmm7, xmm7, xmm2
        vmulss  xmm2, xmm1, cs:__real@40000000
        vmovss  [rsp+138h+modelIndex], xmm7
        vsubss  xmm3, xmm2, xmm9
        vmulss  xmm0, xmm3, xmm5
        vaddss  xmm6, xmm6, xmm0
      }
      if ( (modelIndex & 0x7F800000) != 2139095040 )
      {
        __asm { vmovss  [rsp+138h+modelIndex], xmm6 }
        if ( (modelIndex & 0x7F800000) != 2139095040 )
          goto LABEL_42;
      }
      v81 = "( !IS_NAN( ( localaccel )[0] ) && !IS_NAN( ( localaccel )[1] ) )";
      v82 = 222;
    }
    else
    {
      __asm
      {
        vmovss  xmm2, dword ptr [r14+694h]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm4, xmm9, xmm0
        vminss  xmm0, xmm2, xmm3
        vmulss  xmm1, xmm0, xmm11
        vdivss  xmm3, xmm1, xmm2
        vmulss  xmm2, xmm6, xmm4
        vmulss  xmm8, xmm2, xmm3
        vmovss  [rsp+138h+modelIndex], xmm8
      }
      v45 = "!IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] )";
      __asm
      {
        vmulss  xmm0, xmm4, xmm7
        vmulss  xmm6, xmm0, xmm3
      }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
        goto LABEL_61;
      __asm { vmovss  [rsp+138h+modelIndex], xmm6 }
      if ( (modelIndex & 0x7F800000) == 2139095040 )
      {
LABEL_61:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 237, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] )") )
          __debugbreak();
      }
      _EAX = cent->pose.vehicle.wheelFraction[1];
      __asm { vmovd   xmm0, eax }
      _EAX = cent->pose.vehicle.wheelFraction[2];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@37800080
        vmulss  xmm0, xmm1, cs:__real@40000000
        vsubss  xmm1, xmm0, xmm9
        vmovd   xmm0, eax
        vsubss  xmm5, xmm9, xmm11
        vmulss  xmm2, xmm1, xmm5
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@37800080
        vaddss  xmm7, xmm8, xmm2
        vmulss  xmm2, xmm1, cs:__real@40000000
        vmovss  [rsp+138h+modelIndex], xmm7
        vsubss  xmm3, xmm2, xmm9
        vmulss  xmm0, xmm3, xmm5
        vaddss  xmm6, xmm6, xmm0
      }
      if ( (modelIndex & 0x7F800000) != 2139095040 )
      {
        __asm { vmovss  [rsp+138h+modelIndex], xmm6 }
        if ( (modelIndex & 0x7F800000) != 2139095040 )
          goto LABEL_42;
      }
      v81 = "( !IS_NAN( ( rotorVel )[0] ) && !IS_NAN( ( rotorVel )[1] ) )";
      v82 = 241;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", v82, ASSERT_TYPE_SANITY, v81, (const char *)&queryFormat, v45) )
      __debugbreak();
LABEL_42:
    __asm
    {
      vmovss  xmm8, cs:__real@bf800000
      vmovaps xmm1, xmm8; min
      vmovaps xmm2, xmm9; max
      vmovaps xmm0, xmm7; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm0, xmm6; val
      vmovaps xmm2, xmm9; max
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm7; unit
    }
    v123 = CompressSignedUnit(*(float *)&_XMM0);
    __asm { vmovaps xmm0, xmm6; unit }
    cent->pose.vehicle.wheelFraction[1] = v123;
    cent->pose.vehicle.wheelFraction[2] = CompressSignedUnit(*(float *)&_XMM0);
    __asm
    {
      vdivss  xmm0, xmm13, dword ptr [r14+6A0h]; val
      vmovaps xmm2, xmm9; max
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    cent->pose.vehicle.wheelFraction[3] = CompressSignedUnit(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+6A4h]
      vmulss  xmm2, xmm0, cs:__real@43360b61
      vaddss  xmm3, xmm2, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm3, 1
      vcvttss2si eax, xmm0
    }
    cent->pose.vehicle.wheelFraction[4] = _EAX;
    _EAX = cent->pose.vehicle.terrainMode.angleDesires;
    __asm
    {
      vdivss  xmm0, xmm12, dword ptr [r14+6ACh]; val
      vmovd   xmm6, eax
      vmovaps xmm2, xmm9; max
      vmovaps xmm1, xmm8; min
      vcvtdq2ps xmm6, xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [r14+6B0h]
      vaddss  xmm2, xmm1, dword ptr [r14+6A8h]
      vmovd   xmm0, dword ptr [rbx+58h]
      vmovaps xmm13, [rsp+138h+var_B8]
    }
    rotorBoneIndex = cent->pose.vehicle.rotorBoneIndex;
    __asm
    {
      vmovaps xmm12, [rsp+138h+var_A8]
      vmovaps xmm11, [rsp+138h+var_98]
      vmovaps xmm8, [rsp+138h+var_68]
      vmovaps xmm7, [rsp+138h+var_58]
    }
    v149 = 0;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm2, xmm0
      vmulss  xmm3, xmm1, cs:__real@3e3a69dc
      vmulss  xmm2, xmm6, xmm9
      vmovaps xmm9, [rsp+138h+var_78]
      vmovaps xmm6, [rsp+138h+var_48]
      vaddss  xmm0, xmm3, xmm2
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm4, xmm4, xmm4
      vroundss xmm4, xmm4, xmm1, 1
      vcvttss2si eax, xmm4
    }
    cent->pose.vehicle.wheelFraction[5] = _EAX;
    v162 = 0i64;
    do
    {
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 115, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( (unsigned int)v149 >= 0x18 )
      {
        LODWORD(v166) = 24;
        LODWORD(v165) = v149;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( rotorIdx ) < (unsigned)( MAX_ROTOR_BONES )", "rotorIdx doesn't index MAX_ROTOR_BONES\n\t%i not in [0, %i)", v165, v166) )
          __debugbreak();
      }
      v163 = *(scr_string_t **)((char *)&off_147FABF10 + v162);
      inOutIndex[0] = -2;
      if ( !DObjGetBoneIndexInternal_78(obj, *v163, inOutIndex, &modelIndex) )
      {
        v164 = *(scr_string_t **)((char *)&off_147FAC000 + v162);
        inOutIndex[0] = -2;
        DObjGetBoneIndexInternal_78(obj, *v164, inOutIndex, &v169);
      }
      ++v149;
      *rotorBoneIndex = inOutIndex[0];
      v162 += 8i64;
      ++rotorBoneIndex;
    }
    while ( v149 < 24 );
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

