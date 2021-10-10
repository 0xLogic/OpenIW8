/*
==============
CgVehicleAnimSystem::StartAnimateDoorInternal
==============
*/

VehicleDoorAnimInfo *__fastcall CgVehicleAnimSystem::StartAnimateDoorInternal(CgVehicleAnimSystem *this, VehicleClient *vehClient, unsigned int doorIndex)
{
  return ?StartAnimateDoorInternal@CgVehicleAnimSystem@@IEAAPEAUVehicleDoorAnimInfo@@AEAUVehicleClient@@I@Z(this, vehClient, doorIndex);
}

/*
==============
VehicleDoorAnimInfo::Reset
==============
*/

void __fastcall VehicleDoorAnimInfo::Reset(VehicleDoorAnimInfo *this)
{
  ?Reset@VehicleDoorAnimInfo@@QEAAXXZ(this);
}

/*
==============
CgVehicleAnimSystem::AnimateAngularImpulse
==============
*/

void __fastcall CgVehicleAnimSystem::AnimateAngularImpulse(CgVehicleAnimSystem *this, int playerEntNum, float impK)
{
  ?AnimateAngularImpulse@CgVehicleAnimSystem@@QEAAXHM@Z(this, playerEntNum, impK);
}

/*
==============
CgVehicleAnimSystem::AnimateDoorWithCurve
==============
*/

void __fastcall CgVehicleAnimSystem::AnimateDoorWithCurve(CgVehicleAnimSystem *this, VehicleClient *vehClient, unsigned int doorIndex, const char *curveAssetName, int playerEntNum, bool flipped)
{
  ?AnimateDoorWithCurve@CgVehicleAnimSystem@@IEAAXAEAUVehicleClient@@IPEBDH_N@Z(this, vehClient, doorIndex, curveAssetName, playerEntNum, flipped);
}

/*
==============
CgVehicleAnimSystem::UpdateDoors
==============
*/

void __fastcall CgVehicleAnimSystem::UpdateDoors(CgVehicleAnimSystem *this, VehicleClient *vehClient, DObj *obj, centity_t *cent)
{
  ?UpdateDoors@CgVehicleAnimSystem@@IEAAXAEAUVehicleClient@@AEAUDObj@@AEAUcentity_t@@@Z(this, vehClient, obj, cent);
}

/*
==============
CgVehicleAnimSystem::GetPlayerAndVehicleEntities
==============
*/

bool __fastcall CgVehicleAnimSystem::GetPlayerAndVehicleEntities(CgVehicleAnimSystem *this, int playerEntNum, centity_t **outPlayerEnt, centity_t **outVehEnt, animScriptVehicleSeat_t *outVehSeat)
{
  return ?GetPlayerAndVehicleEntities@CgVehicleAnimSystem@@IEAA_NHAEAPEAUcentity_t@@0AEAW4animScriptVehicleSeat_t@@@Z(this, playerEntNum, outPlayerEnt, outVehEnt, outVehSeat);
}

/*
==============
CgVehicleAnimSystem::AnimateDoorNotetrack
==============
*/

void __fastcall CgVehicleAnimSystem::AnimateDoorNotetrack(CgVehicleAnimSystem *this, int playerEntNum, const char *noteTrackParam, bool flipped)
{
  ?AnimateDoorNotetrack@CgVehicleAnimSystem@@QEAAXHPEBD_N@Z(this, playerEntNum, noteTrackParam, flipped);
}

/*
==============
CgVehicleAnimSystem::UpdateBoneController
==============
*/

void __fastcall CgVehicleAnimSystem::UpdateBoneController(CgVehicleAnimSystem *this, VehicleClient *vehClient, DObj *obj, centity_t *cent)
{
  ?UpdateBoneController@CgVehicleAnimSystem@@QEAAXAEAUVehicleClient@@AEAUDObj@@AEAUcentity_t@@@Z(this, vehClient, obj, cent);
}

/*
==============
CgVehicleAnimSystem::ClearBoneControllers
==============
*/

void __fastcall CgVehicleAnimSystem::ClearBoneControllers(CgVehicleAnimSystem *this, VehicleClient *vehClient, centity_t *cent)
{
  ?ClearBoneControllers@CgVehicleAnimSystem@@QEAAXAEAUVehicleClient@@AEAUcentity_t@@@Z(this, vehClient, cent);
}

/*
==============
CgVehicleAnimSystem::DoPose
==============
*/

void __fastcall CgVehicleAnimSystem::DoPose(CgVehicleAnimSystem *this, const DObj *obj, const cpose_t *pose, DObjPartBits *partBits)
{
  ?DoPose@CgVehicleAnimSystem@@QEAAXAEBUDObj@@AEBUcpose_t@@PEAUDObjPartBits@@@Z(this, obj, pose, partBits);
}

/*
==============
CgVehicleAnimSystem::DoPoseDoors
==============
*/

void __fastcall CgVehicleAnimSystem::DoPoseDoors(CgVehicleAnimSystem *this, const VehicleClient *vehClient, const VehicleDef *vehDef, const DObj *obj, const cpose_t *pose, DObjPartBits *partBits)
{
  ?DoPoseDoors@CgVehicleAnimSystem@@IEAAXAEBUVehicleClient@@AEBUVehicleDef@@AEBUDObj@@AEBUcpose_t@@PEAUDObjPartBits@@@Z(this, vehClient, vehDef, obj, pose, partBits);
}

/*
==============
CgVehicleAnimSystem::AnimateAngularImpulse
==============
*/
void CgVehicleAnimSystem::AnimateAngularImpulse(CgVehicleAnimSystem *this, int playerEntNum, float impK)
{
  __int128 v3; 
  const centity_t *v6; 
  const cpose_t *v7; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  CgVehicleSystem_vtbl *v10; 
  BgVehiclePhysicsManager *v11; 
  BgVehiclePhysics *ObjectById; 
  const dvar_t *v13; 
  float m_mass; 
  float v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v21; 
  animScriptVehicleSeat_t outVehSeat; 
  vec3_t outPlayerEnt; 
  vec3_t outVehEnt; 
  __int128 v33; 

  if ( playerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 135, ASSERT_TYPE_ASSERT, "(playerEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  *(_QWORD *)outVehEnt.v = 0i64;
  *(_QWORD *)outPlayerEnt.v = 0i64;
  if ( CgVehicleAnimSystem::GetPlayerAndVehicleEntities(this, playerEntNum, (centity_t **)&outPlayerEnt, (centity_t **)&outVehEnt, &outVehSeat) )
  {
    v6 = *(const centity_t **)outVehEnt.v;
    if ( !*(_QWORD *)outVehEnt.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 144, ASSERT_TYPE_ASSERT, "(centVeh)", (const char *)&queryFormat, "centVeh") )
      __debugbreak();
    v7 = *(const cpose_t **)outPlayerEnt.v;
    if ( !*(_QWORD *)outPlayerEnt.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 145, ASSERT_TYPE_ASSERT, "(centPlayer)", (const char *)&queryFormat, "centPlayer") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 148, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, v6);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 151, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
      __debugbreak();
    if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
    {
      v10 = VehicleSystem->__vftable;
      v33 = v3;
      v11 = v10->PhysicsGetVehiclePhysicsManager(VehicleSystem);
      ObjectById = BgVehiclePhysicsManager::GetObjectById(v11, Client->physicsId);
      if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 156, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
        __debugbreak();
      v13 = DCONST_DVARFLT_bg_vehicleImpKNotetrack;
      m_mass = ObjectById->m_mass;
      if ( !DCONST_DVARFLT_bg_vehicleImpKNotetrack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleImpKNotetrack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      LODWORD(v15) = COERCE_UNSIGNED_INT((float)(m_mass * impK) * v13->current.value) ^ _xmm;
      outVehEnt.v[0] = v15 * 0.0;
      outVehEnt.v[1] = v15 * 0.0;
      outVehEnt.v[2] = v15 * 1.0;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v7->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v7->origin.Get_origin, v7);
      FunctionPointer_origin(&v7->origin.origin.origin, &outPlayerEnt);
      if ( v7->isPosePrecise )
      {
        _XMM0 = LODWORD(outPlayerEnt.v[0]);
        _XMM2 = LODWORD(outPlayerEnt.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v21 = *(double *)&_XMM0 * 0.000244140625;
        _XMM0 = v21;
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vcvtdq2pd xmm2, xmm2
        }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v21 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v21;
        _XMM2 = LODWORD(outPlayerEnt.v[2]);
        outPlayerEnt.v[0] = *(float *)&_XMM1;
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vcvtdq2pd xmm2, xmm2
        }
        *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v21 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v21;
        outPlayerEnt.v[1] = *(float *)&_XMM1;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        outPlayerEnt.v[2] = *(float *)&_XMM1;
      }
      BgVehiclePhysics::DeferAngularImpulse(ObjectById, &outVehEnt, &outPlayerEnt);
    }
  }
}

/*
==============
CgVehicleAnimSystem::AnimateDoorNotetrack
==============
*/
void CgVehicleAnimSystem::AnimateDoorNotetrack(CgVehicleAnimSystem *this, int playerEntNum, const char *noteTrackParam, bool flipped)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  __int64 v10; 
  const VehicleDef *ClientDef; 
  unsigned int numDoors; 
  __int64 v13; 
  XAnimCurveID IDFromAssetName; 
  centity_t *outPlayerEnt; 
  animScriptVehicleSeat_t outVehSeat; 
  centity_t *outVehEnt; 

  if ( !noteTrackParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 172, ASSERT_TYPE_ASSERT, "(noteTrackParam)", (const char *)&queryFormat, "noteTrackParam") )
    __debugbreak();
  if ( playerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 173, ASSERT_TYPE_ASSERT, "(playerEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  if ( CgVehicleAnimSystem::GetPlayerAndVehicleEntities(this, playerEntNum, &outPlayerEnt, &outVehEnt, &outVehSeat) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 184, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, outVehEnt);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 187, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
      __debugbreak();
    v10 = (unsigned int)(outVehSeat - 1);
    if ( !noteTrackParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 74, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
      __debugbreak();
    if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 54, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 57, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    numDoors = 4;
    if ( ClientDef->numDoors < 4 )
      numDoors = ClientDef->numDoors;
    if ( (unsigned int)v10 < numDoors )
    {
      v13 = 5 * v10 + 30;
      LOWORD(Client->wheelSpinAngle[v13]) = -512;
      Client->wheelSpinAngle[v13 + 3] = 0.0;
      *(_QWORD *)&Client->wheelSpinAngle[v13 + 1] = 2047i64;
      BYTE2(Client->wheelSpinAngle[v13]) = 42;
      Client->wheelSpinAngle[v13 + 4] = 1.0;
      IDFromAssetName = XAnimCurve_GetIDFromAssetName(noteTrackParam);
      BYTE2(Client->wheelSpinAngle[v13]) = IDFromAssetName;
      _XMM0 = flipped;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      Client->wheelSpinAngle[v13 + 4] = *(float *)&_XMM0;
      if ( IDFromAssetName == CURVE_ASSET_END )
      {
        Com_PrintWarning(19, "XAnim Curve asset '%s' not found.", noteTrackParam);
      }
      else
      {
        LOBYTE(Client->wheelSpinAngle[v13]) = 1;
        LODWORD(Client->wheelSpinAngle[v13 + 1]) = playerEntNum;
      }
    }
  }
}

/*
==============
CgVehicleAnimSystem::AnimateDoorWithCurve
==============
*/
void CgVehicleAnimSystem::AnimateDoorWithCurve(CgVehicleAnimSystem *this, VehicleClient *vehClient, unsigned int doorIndex, const char *curveAssetName, int playerEntNum, bool flipped)
{
  __int64 v6; 
  const VehicleDef *ClientDef; 
  unsigned int numDoors; 
  __int64 v12; 
  XAnimCurveID IDFromAssetName; 

  v6 = doorIndex;
  if ( !curveAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 74, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
    __debugbreak();
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 54, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(vehClient);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 57, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  numDoors = 4;
  if ( ClientDef->numDoors < 4 )
    numDoors = ClientDef->numDoors;
  if ( (unsigned int)v6 < numDoors )
  {
    v12 = 5 * v6 + 30;
    LOWORD(vehClient->wheelSpinAngle[v12]) = -512;
    vehClient->wheelSpinAngle[v12 + 3] = 0.0;
    *(_QWORD *)&vehClient->wheelSpinAngle[v12 + 1] = 2047i64;
    BYTE2(vehClient->wheelSpinAngle[v12]) = 42;
    vehClient->wheelSpinAngle[v12 + 4] = 1.0;
    IDFromAssetName = XAnimCurve_GetIDFromAssetName(curveAssetName);
    BYTE2(vehClient->wheelSpinAngle[v12]) = IDFromAssetName;
    _XMM0 = flipped;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_N1_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    vehClient->wheelSpinAngle[v12 + 4] = *(float *)&_XMM0;
    if ( IDFromAssetName == CURVE_ASSET_END )
    {
      Com_PrintWarning(19, "XAnim Curve asset '%s' not found.", curveAssetName);
    }
    else
    {
      LODWORD(vehClient->wheelSpinAngle[v12 + 1]) = playerEntNum;
      LOBYTE(vehClient->wheelSpinAngle[v12]) = 1;
    }
  }
}

/*
==============
CgVehicleAnimSystem::ClearBoneControllers
==============
*/
void CgVehicleAnimSystem::ClearBoneControllers(CgVehicleAnimSystem *this, VehicleClient *vehClient, centity_t *cent)
{
  *(_WORD *)&vehClient->doorAnimInfo[0].doorAnimEnabled = -512;
  vehClient->doorAnimInfo[0].t = 0.0;
  *(_QWORD *)&vehClient->doorAnimInfo[0].playerEntNum = 2047i64;
  vehClient->doorAnimInfo[0].doorCurveAsset = CURVE_ASSET_END;
  vehClient->doorAnimInfo[0].signFactor = 1.0;
  *(_WORD *)&vehClient->doorAnimInfo[1].doorAnimEnabled = -512;
  *(_QWORD *)&vehClient->doorAnimInfo[1].playerEntNum = 2047i64;
  vehClient->doorAnimInfo[1].doorCurveAsset = CURVE_ASSET_END;
  vehClient->doorAnimInfo[1].t = 0.0;
  vehClient->doorAnimInfo[1].signFactor = 1.0;
  *(_WORD *)&vehClient->doorAnimInfo[2].doorAnimEnabled = -512;
  *(_QWORD *)&vehClient->doorAnimInfo[2].playerEntNum = 2047i64;
  vehClient->doorAnimInfo[2].doorCurveAsset = CURVE_ASSET_END;
  vehClient->doorAnimInfo[2].t = 0.0;
  vehClient->doorAnimInfo[2].signFactor = 1.0;
  *(_WORD *)&vehClient->doorAnimInfo[3].doorAnimEnabled = -512;
  *(_QWORD *)&vehClient->doorAnimInfo[3].playerEntNum = 2047i64;
  vehClient->doorAnimInfo[3].doorCurveAsset = CURVE_ASSET_END;
  vehClient->doorAnimInfo[3].t = 0.0;
  vehClient->doorAnimInfo[3].signFactor = 1.0;
}

/*
==============
CgVehicleAnimSystem::DoPose
==============
*/
void CgVehicleAnimSystem::DoPose(CgVehicleAnimSystem *this, const DObj *obj, const cpose_t *pose, DObjPartBits *partBits)
{
  int physicsId; 
  const centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *ClientSafeConst; 
  const VehicleClient *v11; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int8 v17; 
  vec3_t angles; 

  physicsId = pose->physicsId;
  if ( physicsId )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, physicsId - 1);
    if ( Entity )
    {
      VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
      if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 215, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
        __debugbreak();
      ClientSafeConst = CgVehicleSystem::GetClientSafeConst(VehicleSystem, Entity);
      v11 = ClientSafeConst;
      if ( ClientSafeConst )
      {
        ClientDef = CgVehicleSystem::GetClientDef(ClientSafeConst);
        v13 = ClientDef;
        if ( ClientDef )
        {
          v14 = 0;
          angles.v[0] = 0.0;
          angles.v[1] = 0.0;
          angles.v[2] = 0.0;
          if ( ClientDef->numDoors )
          {
            do
            {
              v15 = v14 + 6i64;
              v16 = 5 * v15;
              if ( LOBYTE(v11->wheelSpinAngle[5 * v15]) )
              {
                v17 = BYTE1(v11->wheelSpinAngle[5 * v15]);
                if ( v17 < 0xFEu )
                {
                  LODWORD(angles.v[1]) = COERCE_UNSIGNED_INT(v11->wheelSpinAngle[v16 + 4] * v11->wheelSpinAngle[v16 + 2]) ^ _xmm;
                  DObjSetLocalTag(obj, partBits, v17, &vec3_origin, &angles);
                }
              }
              ++v14;
            }
            while ( v14 < v13->numDoors );
          }
        }
      }
    }
  }
}

/*
==============
CgVehicleAnimSystem::DoPoseDoors
==============
*/
void CgVehicleAnimSystem::DoPoseDoors(CgVehicleAnimSystem *this, const VehicleClient *vehClient, const VehicleDef *vehDef, const DObj *obj, const cpose_t *pose, DObjPartBits *partBits)
{
  unsigned int v6; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  vec3_t angles; 

  v6 = 0;
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  for ( angles.v[2] = 0.0; v6 < vehDef->numDoors; ++v6 )
  {
    v10 = v6 + 6i64;
    v11 = 5 * v10;
    if ( LOBYTE(vehClient->wheelSpinAngle[5 * v10]) )
    {
      v12 = BYTE1(vehClient->wheelSpinAngle[5 * v10]);
      if ( v12 < 0xFEu )
      {
        LODWORD(angles.v[1]) = COERCE_UNSIGNED_INT(vehClient->wheelSpinAngle[v11 + 4] * vehClient->wheelSpinAngle[v11 + 2]) ^ _xmm;
        DObjSetLocalTag(obj, partBits, v12, &vec3_origin, &angles);
      }
    }
  }
}

/*
==============
CgVehicleAnimSystem::GetPlayerAndVehicleEntities
==============
*/
bool CgVehicleAnimSystem::GetPlayerAndVehicleEntities(CgVehicleAnimSystem *this, int playerEntNum, centity_t **outPlayerEnt, centity_t **outVehEnt, animScriptVehicleSeat_t *outVehSeat)
{
  __int64 v5; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v12; 
  CgHandler *Handler; 
  int LinkedVehicle; 
  centity_t *v15; 
  int v17; 
  int v18; 
  animScriptVehicleType_t outVehicleType; 

  v5 = playerEntNum;
  if ( playerEntNum == 2047 )
    return 0;
  LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) )
    return 0;
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v5 >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
    {
      v18 = *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
      v17 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * v5);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, v5);
  }
  if ( !CharacterInfo )
    return 0;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5);
  *outPlayerEnt = Entity;
  v12 = Entity;
  if ( !Entity )
    return 0;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &v12->nextState, CharacterInfo, &outVehicleType, outVehSeat);
  if ( LinkedVehicle == 2047 )
    return 0;
  v15 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, LinkedVehicle);
  *outVehEnt = v15;
  return v15 != NULL;
}

/*
==============
VehicleDoorAnimInfo::Reset
==============
*/
void VehicleDoorAnimInfo::Reset(VehicleDoorAnimInfo *this)
{
  *(_WORD *)&this->doorAnimEnabled = -512;
  this->t = 0.0;
  *(_QWORD *)&this->playerEntNum = 2047i64;
  this->doorCurveAsset = CURVE_ASSET_END;
  this->signFactor = 1.0;
}

/*
==============
CgVehicleAnimSystem::StartAnimateDoorInternal
==============
*/
VehicleDoorAnimInfo *CgVehicleAnimSystem::StartAnimateDoorInternal(CgVehicleAnimSystem *this, VehicleClient *vehClient, unsigned int doorIndex)
{
  __int64 v4; 
  const VehicleDef *ClientDef; 
  unsigned int numDoors; 
  VehicleDoorAnimInfo *result; 

  v4 = doorIndex;
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 54, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(vehClient);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 57, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  numDoors = 4;
  if ( ClientDef->numDoors < 4 )
    numDoors = ClientDef->numDoors;
  if ( (unsigned int)v4 >= numDoors )
    return 0i64;
  result = &vehClient->doorAnimInfo[v4];
  *(_WORD *)&result->doorAnimEnabled = -512;
  *(_QWORD *)&result->playerEntNum = 2047i64;
  result->doorCurveAsset = CURVE_ASSET_END;
  result->t = 0.0;
  result->signFactor = 1.0;
  return result;
}

/*
==============
CgVehicleAnimSystem::UpdateBoneController
==============
*/
void CgVehicleAnimSystem::UpdateBoneController(CgVehicleAnimSystem *this, VehicleClient *vehClient, DObj *obj, centity_t *cent)
{
  __int128 v4; 
  cg_t *LocalClientGlobals; 
  const VehicleDef *ClientDef; 
  unsigned int i; 
  __int64 v11; 
  unsigned __int8 *v12; 
  XAnimCurveID v13; 
  XAnimCurve *AssetFromID; 
  __int128 v15; 
  __int128 v16; 
  int modelIndex; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 248, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(vehClient);
  for ( i = 0; i < ClientDef->numDoors; ++i )
  {
    v11 = 5i64 * i + 30;
    if ( LOBYTE(vehClient->wheelSpinAngle[v11]) )
    {
      if ( ClientDef->doorBones[i] )
      {
        v12 = (unsigned __int8 *)&vehClient->wheelSpinAngle[v11] + 1;
        if ( *v12 >= 0xFEu )
        {
          *v12 = -2;
          DObjGetBoneIndexInternal_4(obj, ClientDef->doorBones[i], v12, &modelIndex);
        }
      }
      if ( BYTE1(vehClient->wheelSpinAngle[v11]) >= 0xFEu || (v13 = BYTE2(vehClient->wheelSpinAngle[v11]), v13 == CURVE_ASSET_END) )
      {
        LOBYTE(vehClient->wheelSpinAngle[v11]) = 0;
      }
      else
      {
        AssetFromID = XAnimCurve_GetAssetFromID(v13);
        *(double *)&v4 = XAnimCurve_GetValue(AssetFromID, vehClient->wheelSpinAngle[v11 + 3]);
        v16 = v4;
        *(float *)&v16 = *(float *)&v4 * -180.0;
        v15 = v16;
        vehClient->wheelSpinAngle[v11 + 2] = *(float *)&v4 * -180.0;
        *(float *)&v16 = (float)((float)LocalClientGlobals->frametime * 0.001) + vehClient->wheelSpinAngle[v11 + 3];
        vehClient->wheelSpinAngle[v11 + 3] = *(float *)&v16;
        if ( *(float *)&v16 >= AssetFromID->duration )
        {
          vehClient->wheelSpinAngle[v11 + 2] = 0.0;
          LOBYTE(vehClient->wheelSpinAngle[v11]) = 0;
          v15 = 0i64;
        }
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v15 + 1);
        *(double *)&v4 = I_fclamp(*(float *)&v15, COERCE_FLOAT(LODWORD(ClientDef->maxDoorAngle) ^ _xmm), ClientDef->maxDoorAngle);
        vehClient->wheelSpinAngle[v11 + 2] = *(float *)&v4;
      }
    }
  }
}

/*
==============
CgVehicleAnimSystem::UpdateDoors
==============
*/
void CgVehicleAnimSystem::UpdateDoors(CgVehicleAnimSystem *this, VehicleClient *vehClient, DObj *obj, centity_t *cent)
{
  __int128 v4; 
  cg_t *LocalClientGlobals; 
  const VehicleDef *ClientDef; 
  unsigned int i; 
  __int64 v11; 
  unsigned __int8 *v12; 
  XAnimCurveID v13; 
  XAnimCurve *AssetFromID; 
  __int128 v15; 
  __int128 v16; 
  int modelIndex; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 248, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(vehClient);
  for ( i = 0; i < ClientDef->numDoors; ++i )
  {
    v11 = 5i64 * i + 30;
    if ( LOBYTE(vehClient->wheelSpinAngle[v11]) )
    {
      if ( ClientDef->doorBones[i] )
      {
        v12 = (unsigned __int8 *)&vehClient->wheelSpinAngle[v11] + 1;
        if ( *v12 >= 0xFEu )
        {
          *v12 = -2;
          DObjGetBoneIndexInternal_4(obj, ClientDef->doorBones[i], v12, &modelIndex);
        }
      }
      if ( BYTE1(vehClient->wheelSpinAngle[v11]) >= 0xFEu || (v13 = BYTE2(vehClient->wheelSpinAngle[v11]), v13 == CURVE_ASSET_END) )
      {
        LOBYTE(vehClient->wheelSpinAngle[v11]) = 0;
      }
      else
      {
        AssetFromID = XAnimCurve_GetAssetFromID(v13);
        *(double *)&v4 = XAnimCurve_GetValue(AssetFromID, vehClient->wheelSpinAngle[v11 + 3]);
        v16 = v4;
        *(float *)&v16 = *(float *)&v4 * -180.0;
        v15 = v16;
        vehClient->wheelSpinAngle[v11 + 2] = *(float *)&v4 * -180.0;
        *(float *)&v16 = (float)((float)LocalClientGlobals->frametime * 0.001) + vehClient->wheelSpinAngle[v11 + 3];
        vehClient->wheelSpinAngle[v11 + 3] = *(float *)&v16;
        if ( *(float *)&v16 >= AssetFromID->duration )
        {
          vehClient->wheelSpinAngle[v11 + 2] = 0.0;
          LOBYTE(vehClient->wheelSpinAngle[v11]) = 0;
          v15 = 0i64;
        }
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v15 + 1);
        *(double *)&v4 = I_fclamp(*(float *)&v15, COERCE_FLOAT(LODWORD(ClientDef->maxDoorAngle) ^ _xmm), ClientDef->maxDoorAngle);
        vehClient->wheelSpinAngle[v11 + 2] = *(float *)&v4;
      }
    }
  }
}

