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

void __fastcall CgVehicleAnimSystem::AnimateAngularImpulse(CgVehicleAnimSystem *this, int playerEntNum, double impK)
{
  const centity_t *v8; 
  const cpose_t *v9; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  CgVehicleSystem_vtbl *v12; 
  BgVehiclePhysicsManager *v13; 
  const dvar_t *v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  animScriptVehicleSeat_t outVehSeat; 
  vec3_t outPlayerEnt; 
  vec3_t outVehEnt; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  if ( playerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 135, ASSERT_TYPE_ASSERT, "(playerEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  *(_QWORD *)outVehEnt.v = 0i64;
  *(_QWORD *)outPlayerEnt.v = 0i64;
  if ( CgVehicleAnimSystem::GetPlayerAndVehicleEntities(this, playerEntNum, (centity_t **)&outPlayerEnt, (centity_t **)&outVehEnt, &outVehSeat) )
  {
    v8 = *(const centity_t **)outVehEnt.v;
    if ( !*(_QWORD *)outVehEnt.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 144, ASSERT_TYPE_ASSERT, "(centVeh)", (const char *)&queryFormat, "centVeh") )
      __debugbreak();
    v9 = *(const cpose_t **)outPlayerEnt.v;
    if ( !*(_QWORD *)outPlayerEnt.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 145, ASSERT_TYPE_ASSERT, "(centPlayer)", (const char *)&queryFormat, "centPlayer") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 148, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, v8);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 151, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
      __debugbreak();
    if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
    {
      v12 = VehicleSystem->__vftable;
      __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
      v13 = v12->PhysicsGetVehiclePhysicsManager(VehicleSystem);
      _RSI = BgVehiclePhysicsManager::GetObjectById(v13, Client->physicsId);
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 156, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
        __debugbreak();
      v15 = DCONST_DVARFLT_bg_vehicleImpKNotetrack;
      __asm { vmovss  xmm6, dword ptr [rsi+260h] }
      if ( !DCONST_DVARFLT_bg_vehicleImpKNotetrack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleImpKNotetrack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      __asm
      {
        vmulss  xmm0, xmm6, xmm7
        vmovaps xmm6, [rsp+0A8h+var_28]
        vmulss  xmm1, xmm0, dword ptr [rdi+28h]
        vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rsp+0A8h+outVehEnt], xmm0
        vmovss  dword ptr [rsp+0A8h+outVehEnt+4], xmm2
        vmovss  [rsp+0A8h+var_48], xmm1
      }
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v9->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v9->origin.Get_origin, v9);
      FunctionPointer_origin(&v9->origin.origin.origin, &outPlayerEnt);
      if ( v9->isPosePrecise )
      {
        __asm
        {
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmovd   xmm0, dword ptr [rsp+0A8h+outPlayerEnt]
          vmovd   xmm2, dword ptr [rsp+0A8h+outPlayerEnt+4]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vmovd   xmm2, [rsp+0A8h+var_58]
          vmovss  dword ptr [rsp+0A8h+outPlayerEnt], xmm1
          vcvtsd2ss xmm1, xmm0, xmm0
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vmovss  dword ptr [rsp+0A8h+outPlayerEnt+4], xmm1
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+0A8h+var_58], xmm1
        }
      }
      BgVehiclePhysics::DeferAngularImpulse(_RSI, &outVehEnt, &outPlayerEnt);
    }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
}

/*
==============
CgVehicleAnimSystem::AnimateDoorNotetrack
==============
*/
void CgVehicleAnimSystem::AnimateDoorNotetrack(CgVehicleAnimSystem *this, int playerEntNum, const char *noteTrackParam, bool flipped)
{
  CgVehicleSystem *VehicleSystem; 
  __int64 v10; 
  const VehicleDef *ClientDef; 
  unsigned int numDoors; 
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
    _RBX = CgVehicleSystem::GetClient(VehicleSystem, outVehEnt);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 187, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
      __debugbreak();
    v10 = (unsigned int)(outVehSeat - 1);
    if ( !noteTrackParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 74, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
      __debugbreak();
    if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 54, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(_RBX);
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 57, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    numDoors = 4;
    if ( ClientDef->numDoors < 4 )
      numDoors = ClientDef->numDoors;
    if ( (unsigned int)v10 < numDoors )
    {
      _RDI = 5 * v10 + 30;
      _ER14 = 0;
      LOWORD(_RBX->wheelSpinAngle[_RDI]) = -512;
      _RBX->wheelSpinAngle[_RDI + 3] = 0.0;
      *(_QWORD *)&_RBX->wheelSpinAngle[_RDI + 1] = 2047i64;
      BYTE2(_RBX->wheelSpinAngle[_RDI]) = 42;
      _RBX->wheelSpinAngle[_RDI + 4] = 1.0;
      IDFromAssetName = XAnimCurve_GetIDFromAssetName(noteTrackParam);
      _ECX = flipped;
      BYTE2(_RBX->wheelSpinAngle[_RDI]) = IDFromAssetName;
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vmovd   xmm0, ecx
        vmovd   xmm1, r14d
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  dword ptr [rbx+rdi*4+10h], xmm0
      }
      if ( IDFromAssetName == CURVE_ASSET_END )
      {
        Com_PrintWarning(19, "XAnim Curve asset '%s' not found.", noteTrackParam);
      }
      else
      {
        LOBYTE(_RBX->wheelSpinAngle[_RDI]) = 1;
        LODWORD(_RBX->wheelSpinAngle[_RDI + 1]) = playerEntNum;
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
  XAnimCurveID IDFromAssetName; 

  v6 = doorIndex;
  _RBX = vehClient;
  if ( !curveAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 74, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
    __debugbreak();
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 54, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(_RBX);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 57, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  numDoors = 4;
  if ( ClientDef->numDoors < 4 )
    numDoors = ClientDef->numDoors;
  if ( (unsigned int)v6 < numDoors )
  {
    _RDI = 5 * v6 + 30;
    _EBP = 0;
    LOWORD(_RBX->wheelSpinAngle[_RDI]) = -512;
    _RBX->wheelSpinAngle[_RDI + 3] = 0.0;
    *(_QWORD *)&_RBX->wheelSpinAngle[_RDI + 1] = 2047i64;
    BYTE2(_RBX->wheelSpinAngle[_RDI]) = 42;
    _RBX->wheelSpinAngle[_RDI + 4] = 1.0;
    IDFromAssetName = XAnimCurve_GetIDFromAssetName(curveAssetName);
    _ECX = flipped;
    BYTE2(_RBX->wheelSpinAngle[_RDI]) = IDFromAssetName;
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovd   xmm0, ecx
      vmovd   xmm1, ebp
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@bf800000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [rbx+rdi*4+10h], xmm0
    }
    if ( IDFromAssetName == CURVE_ASSET_END )
    {
      Com_PrintWarning(19, "XAnim Curve asset '%s' not found.", curveAssetName);
    }
    else
    {
      LODWORD(_RBX->wheelSpinAngle[_RDI + 1]) = playerEntNum;
      LOBYTE(_RBX->wheelSpinAngle[_RDI]) = 1;
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
  const VehicleDef *ClientDef; 
  const VehicleDef *v15; 
  unsigned int v17; 
  __int64 v19; 
  unsigned __int8 v21; 
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
      _RDI = ClientSafeConst;
      if ( ClientSafeConst )
      {
        ClientDef = CgVehicleSystem::GetClientDef(ClientSafeConst);
        v15 = ClientDef;
        if ( ClientDef )
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
          v17 = 0;
          __asm
          {
            vmovss  dword ptr [rsp+88h+angles], xmm0
            vmovss  dword ptr [rsp+88h+angles+4], xmm0
            vmovss  dword ptr [rsp+88h+angles+8], xmm0
          }
          if ( ClientDef->numDoors )
          {
            __asm
            {
              vmovaps [rsp+88h+var_38], xmm6
              vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
            }
            do
            {
              v19 = v17 + 6i64;
              _RCX = 5 * v19;
              if ( LOBYTE(_RDI->wheelSpinAngle[5 * v19]) )
              {
                v21 = BYTE1(_RDI->wheelSpinAngle[5 * v19]);
                if ( v21 < 0xFEu )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+rcx*4+10h]
                    vmulss  xmm1, xmm0, dword ptr [rdi+rcx*4+8]
                    vxorps  xmm2, xmm1, xmm6
                    vmovss  dword ptr [rsp+88h+angles+4], xmm2
                  }
                  DObjSetLocalTag(obj, partBits, v21, &vec3_origin, &angles);
                }
              }
              ++v17;
            }
            while ( v17 < v15->numDoors );
            __asm { vmovaps xmm6, [rsp+88h+var_38] }
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
  unsigned int v8; 
  __int64 v14; 
  unsigned __int8 v16; 
  vec3_t angles; 

  v8 = 0;
  _RDI = vehClient;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+78h+var_48], xmm0
    vmovss  dword ptr [rsp+78h+var_48+4], xmm0
    vmovss  dword ptr [rsp+78h+var_48+8], xmm0
  }
  if ( vehDef->numDoors )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      v14 = v8 + 6i64;
      _RCX = 5 * v14;
      if ( LOBYTE(_RDI->wheelSpinAngle[5 * v14]) )
      {
        v16 = BYTE1(_RDI->wheelSpinAngle[5 * v14]);
        if ( v16 < 0xFEu )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+rcx*4+10h]
            vmulss  xmm1, xmm0, dword ptr [rdi+rcx*4+8]
            vxorps  xmm2, xmm1, xmm6
            vmovss  dword ptr [rsp+78h+var_48+4], xmm2
          }
          DObjSetLocalTag(obj, partBits, v16, &vec3_origin, &angles);
        }
      }
      ++v8;
    }
    while ( v8 < vehDef->numDoors );
    __asm { vmovaps xmm6, [rsp+78h+var_28] }
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
  unsigned int v12; 
  unsigned __int8 *v17; 
  XAnimCurveID v18; 
  const XAnimCurve *AssetFromID; 
  char v27; 
  int modelIndex; 

  _RSI = vehClient;
  CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 248, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  _R14 = CgVehicleSystem::GetClientDef(_RSI);
  v12 = 0;
  if ( _R14->numDoors )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+88h+var_48], xmm7
      vmovss  xmm7, cs:__real@c3340000
      vmovaps [rsp+88h+var_58], xmm8
      vmovss  xmm8, cs:__real@3a83126f
    }
    do
    {
      _RDI = 5i64 * v12 + 30;
      if ( LOBYTE(_RSI->wheelSpinAngle[_RDI]) )
      {
        if ( _R14->doorBones[v12] )
        {
          v17 = (unsigned __int8 *)&_RSI->wheelSpinAngle[_RDI] + 1;
          if ( *v17 >= 0xFEu )
          {
            *v17 = -2;
            DObjGetBoneIndexInternal_4(obj, _R14->doorBones[v12], v17, &modelIndex);
          }
        }
        if ( BYTE1(_RSI->wheelSpinAngle[_RDI]) >= 0xFEu || (v18 = BYTE2(_RSI->wheelSpinAngle[_RDI]), v18 == CURVE_ASSET_END) )
        {
          LOBYTE(_RSI->wheelSpinAngle[_RDI]) = 0;
        }
        else
        {
          AssetFromID = XAnimCurve_GetAssetFromID(v18);
          __asm { vmovss  xmm1, dword ptr [rsi+rdi*4+0Ch]; time }
          _RBX = AssetFromID;
          *(double *)&_XMM0 = XAnimCurve_GetValue(AssetFromID, *(const float *)&_XMM1);
          __asm
          {
            vmulss  xmm3, xmm0, xmm7
            vmovss  dword ptr [rsi+rdi*4+8], xmm3
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r12+65E4h]
            vmulss  xmm1, xmm0, xmm8
            vaddss  xmm2, xmm1, dword ptr [rsi+rdi*4+0Ch]
            vmovss  dword ptr [rsi+rdi*4+0Ch], xmm2
            vcomiss xmm2, dword ptr [rbx+18h]
          }
          if ( !v27 )
          {
            _RSI->wheelSpinAngle[_RDI + 2] = 0.0;
            LOBYTE(_RSI->wheelSpinAngle[_RDI]) = 0;
            __asm { vxorps  xmm3, xmm3, xmm3 }
          }
          __asm
          {
            vmovss  xmm2, dword ptr [r14+30h]; max
            vxorps  xmm1, xmm2, xmm6; min
            vmovaps xmm0, xmm3; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rsi+rdi*4+8], xmm0 }
        }
      }
      ++v12;
    }
    while ( v12 < _R14->numDoors );
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_58]
      vmovaps xmm7, [rsp+88h+var_48]
      vmovaps xmm6, [rsp+88h+var_38]
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
  unsigned int v12; 
  unsigned __int8 *v17; 
  XAnimCurveID v18; 
  const XAnimCurve *AssetFromID; 
  char v27; 
  int modelIndex; 

  _RSI = vehClient;
  CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_anim_system.cpp", 248, ASSERT_TYPE_ASSERT, "(vehSystem)", (const char *)&queryFormat, "vehSystem") )
    __debugbreak();
  _R14 = CgVehicleSystem::GetClientDef(_RSI);
  v12 = 0;
  if ( _R14->numDoors )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+88h+var_48], xmm7
      vmovss  xmm7, cs:__real@c3340000
      vmovaps [rsp+88h+var_58], xmm8
      vmovss  xmm8, cs:__real@3a83126f
    }
    do
    {
      _RDI = 5i64 * v12 + 30;
      if ( LOBYTE(_RSI->wheelSpinAngle[_RDI]) )
      {
        if ( _R14->doorBones[v12] )
        {
          v17 = (unsigned __int8 *)&_RSI->wheelSpinAngle[_RDI] + 1;
          if ( *v17 >= 0xFEu )
          {
            *v17 = -2;
            DObjGetBoneIndexInternal_4(obj, _R14->doorBones[v12], v17, &modelIndex);
          }
        }
        if ( BYTE1(_RSI->wheelSpinAngle[_RDI]) >= 0xFEu || (v18 = BYTE2(_RSI->wheelSpinAngle[_RDI]), v18 == CURVE_ASSET_END) )
        {
          LOBYTE(_RSI->wheelSpinAngle[_RDI]) = 0;
        }
        else
        {
          AssetFromID = XAnimCurve_GetAssetFromID(v18);
          __asm { vmovss  xmm1, dword ptr [rsi+rdi*4+0Ch]; time }
          _RBX = AssetFromID;
          *(double *)&_XMM0 = XAnimCurve_GetValue(AssetFromID, *(const float *)&_XMM1);
          __asm
          {
            vmulss  xmm3, xmm0, xmm7
            vmovss  dword ptr [rsi+rdi*4+8], xmm3
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r12+65E4h]
            vmulss  xmm1, xmm0, xmm8
            vaddss  xmm2, xmm1, dword ptr [rsi+rdi*4+0Ch]
            vmovss  dword ptr [rsi+rdi*4+0Ch], xmm2
            vcomiss xmm2, dword ptr [rbx+18h]
          }
          if ( !v27 )
          {
            _RSI->wheelSpinAngle[_RDI + 2] = 0.0;
            LOBYTE(_RSI->wheelSpinAngle[_RDI]) = 0;
            __asm { vxorps  xmm3, xmm3, xmm3 }
          }
          __asm
          {
            vmovss  xmm2, dword ptr [r14+30h]; max
            vxorps  xmm1, xmm2, xmm6; min
            vmovaps xmm0, xmm3; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rsi+rdi*4+8], xmm0 }
        }
      }
      ++v12;
    }
    while ( v12 < _R14->numDoors );
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_58]
      vmovaps xmm7, [rsp+88h+var_48]
      vmovaps xmm6, [rsp+88h+var_38]
    }
  }
}

