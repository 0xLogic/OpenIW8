/*
==============
PhysicsVehicle_ComputePointVelocity
==============
*/

void __fastcall PhysicsVehicle_ComputePointVelocity(const vec3_t *comWs, const vec3_t *angVelWs, const vec3_t *linVelWs, const vec3_t *atWs, vec3_t *outPointVel)
{
  ?PhysicsVehicle_ComputePointVelocity@@YAXAEBTvec3_t@@000AEAT1@@Z(comWs, angVelWs, linVelWs, atWs, outPointVel);
}

/*
==============
PhysicsVehicle_CreateWorld
==============
*/

void __fastcall PhysicsVehicle_CreateWorld(Physics_WorldId worldId, BGVehicles *vehicleSystem)
{
  ?PhysicsVehicle_CreateWorld@@YAXW4Physics_WorldId@@PEAVBGVehicles@@@Z(worldId, vehicleSystem);
}

/*
==============
ProxyWithPhysicsEngine::BuoyancyCast
==============
*/

int __fastcall ProxyWithPhysicsEngine::BuoyancyCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outSurflags)
{
  return ?BuoyancyCast@ProxyWithPhysicsEngine@@SAHW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT3@3AEAI@Z(worldId, entityNumber, start, end, noiseAmp, outFrac, outHitPos, outHitNormal, outSurflags);
}

/*
==============
PhysicsVehicle_AddContentFlag
==============
*/

void __fastcall PhysicsVehicle_AddContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  ?PhysicsVehicle_AddContentFlag@@YAXW4Physics_WorldId@@IH@Z(worldId, bodyId, contents);
}

/*
==============
ProxyWithPhysicsEngine::CreateRigidBody<CG_PhysicsObject>
==============
*/

unsigned int __fastcall ProxyWithPhysicsEngine::CreateRigidBody<CG_PhysicsObject>(const CG_PhysicsObject *vehiclePhysicsObject, Physics_WorldId worldId, float *mass)
{
  return ??$CreateRigidBody@VCG_PhysicsObject@@@ProxyWithPhysicsEngine@@SAIPEBVCG_PhysicsObject@@W4Physics_WorldId@@PEAM@Z(vehiclePhysicsObject, worldId, mass);
}

/*
==============
PhysicsVehicle_WheelCast
==============
*/

bool __fastcall PhysicsVehicle_WheelCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outRawFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  return ?PhysicsVehicle_WheelCast@@YA_NW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT2@3AEAI4@Z(worldId, entityNumber, start, end, noiseAmp, outRawFrac, outHitPos, outHitNormal, outHitBody, outSurflags);
}

/*
==============
PhysicsVehicle_GetBroadphaseCollisionResult
==============
*/

HavokPhysics_BroadphaseCollisionQueryResult *__fastcall PhysicsVehicle_GetBroadphaseCollisionResult(Physics_WorldId worldId)
{
  return ?PhysicsVehicle_GetBroadphaseCollisionResult@@YAPEAVHavokPhysics_BroadphaseCollisionQueryResult@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::isValid
==============
*/

hkBool *__fastcall HavokPhysicsVehiclePathConstraintData::isValid(HavokPhysicsVehiclePathConstraintData *this, hkBool *result)
{
  return ?isValid@HavokPhysicsVehiclePathConstraintData@@UEBA?AVhkBool@@XZ(this, result);
}

/*
==============
PhysicsVehicle_CollisionCallbackNotifyScript
==============
*/

void __fastcall PhysicsVehicle_CollisionCallbackNotifyScript(int entityNumber, const Physics_SimpleCollisionCallback_Data *data, const int collisionZone)
{
  ?PhysicsVehicle_CollisionCallbackNotifyScript@@YAXHAEBUPhysics_SimpleCollisionCallback_Data@@H@Z(entityNumber, data, collisionZone);
}

/*
==============
PhysicsVehicle_SetActivationControl
==============
*/

void __fastcall PhysicsVehicle_SetActivationControl(Physics_WorldId worldId, unsigned int bodyId, const bool *active)
{
  ?PhysicsVehicle_SetActivationControl@@YAXW4Physics_WorldId@@IPEB_N@Z(worldId, bodyId, active);
}

/*
==============
HavokPhysicsVehicleShapeTagCodec::decode
==============
*/

void __fastcall HavokPhysicsVehicleShapeTagCodec::decode(HavokPhysicsVehicleShapeTagCodec *this, unsigned __int16 shapeTag, hknpCollisionQueryType::Enum queryType, const hknpBody *body, const hknpShape *rootShape, const hknpShape *parentShape, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hknpShape *shape, hknpQueryFilterData *decodedDataOut)
{
  ?decode@HavokPhysicsVehicleShapeTagCodec@@UEBAXGW4Enum@hknpCollisionQueryType@@PEBVhknpBody@@PEBVhknpShape@@2U?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@2PEAUhknpQueryFilterData@@@Z(this, shapeTag, queryType, body, rootShape, parentShape, shapeKey, shape, decodedDataOut);
}

/*
==============
PhysicsVehicle_HasContentFlag
==============
*/

bool __fastcall PhysicsVehicle_HasContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  return ?PhysicsVehicle_HasContentFlag@@YA_NW4Physics_WorldId@@IH@Z(worldId, bodyId, contents);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getRuntimeInfo
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::getRuntimeInfo(HavokPhysicsVehiclePathConstraintData *this, hkBool wantRuntime, hkpConstraintData::RuntimeInfo *infoOut)
{
  ?getRuntimeInfo@HavokPhysicsVehiclePathConstraintData@@UEBAXVhkBool@@AEAURuntimeInfo@hkpConstraintData@@@Z(this, wantRuntime, infoOut);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getConstraintInfo
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::getConstraintInfo(HavokPhysicsVehiclePathConstraintData *this, hkpConstraintData::ConstraintInfo *infoOut)
{
  ?getConstraintInfo@HavokPhysicsVehiclePathConstraintData@@UEBAXAEAUConstraintInfo@hkpConstraintData@@@Z(this, infoOut);
}

/*
==============
PhysicsVehicle_Load
==============
*/

void __fastcall PhysicsVehicle_Load(SaveGame *save)
{
  ?PhysicsVehicle_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
PhysicsVehicle_GetBodyUserData
==============
*/

int __fastcall PhysicsVehicle_GetBodyUserData(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?PhysicsVehicle_GetBodyUserData@@YAHW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicle_RemoveContentFlag
==============
*/

void __fastcall PhysicsVehicle_RemoveContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  ?PhysicsVehicle_RemoveContentFlag@@YAXW4Physics_WorldId@@IH@Z(worldId, bodyId, contents);
}

/*
==============
PhysicsVehicle_Write
==============
*/

void __fastcall PhysicsVehicle_Write(MemoryFile *memFile)
{
  ?PhysicsVehicle_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
PhysicsVehicle_IsDebugDrawing
==============
*/

bool __fastcall PhysicsVehicle_IsDebugDrawing()
{
  return ?PhysicsVehicle_IsDebugDrawing@@YA_NXZ();
}

/*
==============
ProxyWithPhysicsEngine::CreateRigidBody<G_PhysicsObject>
==============
*/

unsigned int __fastcall ProxyWithPhysicsEngine::CreateRigidBody<G_PhysicsObject>(const G_PhysicsObject *vehiclePhysicsObject, Physics_WorldId worldId, float *mass)
{
  return ??$CreateRigidBody@VG_PhysicsObject@@@ProxyWithPhysicsEngine@@SAIPEBVG_PhysicsObject@@W4Physics_WorldId@@PEAM@Z(vehiclePhysicsObject, worldId, mass);
}

/*
==============
PhysicsVehicleMassModifier::GetAverageHitPos
==============
*/

void __fastcall PhysicsVehicleMassModifier::GetAverageHitPos(PhysicsVehicleMassModifier *this, hknpManifold *manifold, vec3_t *outPos)
{
  ?GetAverageHitPos@PhysicsVehicleMassModifier@@QEAAXPEIAUhknpManifold@@AEATvec3_t@@@Z(this, manifold, outPos);
}

/*
==============
ProxyWithPhysicsEngine::WheelCast
==============
*/

bool __fastcall ProxyWithPhysicsEngine::WheelCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outRawFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  return ?WheelCast@ProxyWithPhysicsEngine@@SA_NW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT3@3AEAI4@Z(worldId, entityNumber, start, end, noiseAmp, outRawFrac, outHitPos, outHitNormal, outHitBody, outSurflags);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::updatePathPoint
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::updatePathPoint(HavokPhysicsVehiclePathConstraintData *this)
{
  ?updatePathPoint@HavokPhysicsVehiclePathConstraintData@@QEAAXXZ(this);
}

/*
==============
PhysicsVehicle_DebugDraw
==============
*/

void __fastcall PhysicsVehicle_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysicsVehicle_DebugDraw@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
PhysicsVehicle_BuoyancyCast
==============
*/

int __fastcall PhysicsVehicle_BuoyancyCast(Physics_WorldId worldId, int vehicleEntNum, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outSurfFlags)
{
  return ?PhysicsVehicle_BuoyancyCast@@YAHW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT2@3AEAI@Z(worldId, vehicleEntNum, start, end, noiseAmp, outFrac, outHitPos, outHitNormal, outSurfFlags);
}

/*
==============
PhysicsVehicle_GetClosestPoints
==============
*/

void __fastcall PhysicsVehicle_GetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?PhysicsVehicle_GetClosestPoints@@YAXW4Physics_WorldId@@IPEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, bodyId, shape, point, rotation, maxDistance, extendedData, result);
}

/*
==============
PhysicsVehicle_Overlap_Shapes
==============
*/

bool __fastcall PhysicsVehicle_Overlap_Shapes(Physics_WorldId worldId, unsigned int vehBodyId, const vec3_t *vehPos, const vec4_t *vehOrient, unsigned int otherBodyId)
{
  return ?PhysicsVehicle_Overlap_Shapes@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@I@Z(worldId, vehBodyId, vehPos, vehOrient, otherBodyId);
}

/*
==============
ProxyWithPhysicsEngine::CG_CreateRigidBody
==============
*/

unsigned int __fastcall ProxyWithPhysicsEngine::CG_CreateRigidBody(LocalClientNum_t localClientNum, Physics_WorldId worldId, int entNum, float *mass)
{
  return ?CG_CreateRigidBody@ProxyWithPhysicsEngine@@SAIW4LocalClientNum_t@@W4Physics_WorldId@@HPEAM@Z(localClientNum, worldId, entNum, mass);
}

/*
==============
PhysicsVehicle_SetSoftContacts
==============
*/

void __fastcall PhysicsVehicle_SetSoftContacts(Physics_WorldId worldId, unsigned int bodyId, bool status)
{
  ?PhysicsVehicle_SetSoftContacts@@YAXW4Physics_WorldId@@I_N@Z(worldId, bodyId, status);
}

/*
==============
PhysicsVehicle_CreateRigidBody
==============
*/

unsigned int __fastcall PhysicsVehicle_CreateRigidBody(Physics_WorldId worldId, int entityNumber, float *outMass)
{
  return ?PhysicsVehicle_CreateRigidBody@@YAIW4Physics_WorldId@@HPEAM@Z(worldId, entityNumber, outMass);
}

/*
==============
PhysicsVehicle_GetBodyId
==============
*/

unsigned int __fastcall PhysicsVehicle_GetBodyId(Physics_WorldId worldId, int entityNumber)
{
  return ?PhysicsVehicle_GetBodyId@@YAIW4Physics_WorldId@@H@Z(worldId, entityNumber);
}

/*
==============
PhysicsVehicleHavokAction::applyAction
==============
*/

hknpAction::Result __fastcall PhysicsVehicleHavokAction::applyAction(PhysicsVehicleHavokAction *this, hknpWorld *world, float deltaTime)
{
  return ?applyAction@PhysicsVehicleHavokAction@@UEAA?AW4Result@hknpAction@@PEAVhknpWorld@@M@Z(this, world, deltaTime);
}

/*
==============
PhysicsVehicle_DestroyAxleRigidBody
==============
*/

void __fastcall PhysicsVehicle_DestroyAxleRigidBody(Physics_WorldId worldId, unsigned int axleBodyId)
{
  ?PhysicsVehicle_DestroyAxleRigidBody@@YAXW4Physics_WorldId@@I@Z(worldId, axleBodyId);
}

/*
==============
PhysicsVehicleHavokAction::getBodies
==============
*/

void __fastcall PhysicsVehicleHavokAction::getBodies(PhysicsVehicleHavokAction *this, const hknpBodyId **__formal, int *numBodiesOut)
{
  ?getBodies@PhysicsVehicleHavokAction@@UEBAXAEAPEBUhknpBodyId@@AEAH@Z(this, __formal, numBodiesOut);
}

/*
==============
PhysicsVehicle_SetNoGravity
==============
*/

void __fastcall PhysicsVehicle_SetNoGravity(Physics_WorldId worldId, unsigned int bodyId)
{
  ?PhysicsVehicle_SetNoGravity@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicleMassModifier::getEnabledFunctions
==============
*/

int __fastcall PhysicsVehicleMassModifier::getEnabledFunctions(PhysicsVehicleMassModifier *this)
{
  return ?getEnabledFunctions@PhysicsVehicleMassModifier@@UEAAHXZ(this);
}

/*
==============
PhysicsVehicle_DestroyWorld
==============
*/

void __fastcall PhysicsVehicle_DestroyWorld(Physics_WorldId worldId, BGVehicles *vehicleSystem)
{
  ?PhysicsVehicle_DestroyWorld@@YAXW4Physics_WorldId@@PEAVBGVehicles@@@Z(worldId, vehicleSystem);
}

/*
==============
PhysicsVehicle_CreateAxleRigidBody
==============
*/

unsigned int __fastcall PhysicsVehicle_CreateAxleRigidBody(Physics_WorldId worldId, unsigned int chassisBodyId, const vec3_t *relA, const vec3_t *relB, float radius, int sides, float outPadding)
{
  return ?PhysicsVehicle_CreateAxleRigidBody@@YAIW4Physics_WorldId@@IAEBTvec3_t@@1MHM@Z(worldId, chassisBodyId, relA, relB, radius, sides, outPadding);
}

/*
==============
PhysicsVehicleMassModifier::manifoldProcessCallback
==============
*/

void __fastcall PhysicsVehicleMassModifier::manifoldProcessCallback(PhysicsVehicleMassModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, hknpManifold *manifold)
{
  ?manifoldProcessCallback@PhysicsVehicleMassModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z(this, tl, sharedData, cdBodyA, cdBodyB, manifold);
}

/*
==============
PhysicsVehicle_IsPhysicsBodyIdValid
==============
*/

bool __fastcall PhysicsVehicle_IsPhysicsBodyIdValid(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?PhysicsVehicle_IsPhysicsBodyIdValid@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicle_ResetNoGravity
==============
*/

void __fastcall PhysicsVehicle_ResetNoGravity(Physics_WorldId worldId, unsigned int bodyId)
{
  ?PhysicsVehicle_ResetNoGravity@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicle_ComputeProjectedPointVelocity
==============
*/

double __fastcall PhysicsVehicle_ComputeProjectedPointVelocity(const vec3_t *comWs, const vec3_t *angVelWs, const vec3_t *linVelWs, const vec3_t *atWs, const vec3_t *projVec)
{
  double result; 

  *(float *)&result = ?PhysicsVehicle_ComputeProjectedPointVelocity@@YAMAEBTvec3_t@@0000@Z(comWs, angVelWs, linVelWs, atWs, projVec);
  return result;
}

/*
==============
PhysicsVehicle_DestroyRigidBody
==============
*/

void __fastcall PhysicsVehicle_DestroyRigidBody(Physics_WorldId worldId, unsigned int bodyId)
{
  ?PhysicsVehicle_DestroyRigidBody@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicle_IsActivationControlAlwaysActive
==============
*/

bool __fastcall PhysicsVehicle_IsActivationControlAlwaysActive(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?PhysicsVehicle_IsActivationControlAlwaysActive@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsVehicleHavokAction::getBodies
==============
*/
void PhysicsVehicleHavokAction::getBodies(PhysicsVehicleHavokAction *this, const hknpBodyId **__formal, int *numBodiesOut)
{
  *numBodiesOut = 0;
}

/*
==============
PhysicsVehicleHavokAction::applyAction
==============
*/

__int64 __fastcall PhysicsVehicleHavokAction::applyAction(PhysicsVehicleHavokAction *this, hknpWorld *world, double deltaTime)
{
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 65, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
    __debugbreak();
  if ( this->m_worldId == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 66, ASSERT_TYPE_ASSERT, "(m_worldId != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "m_worldId != PHYSICS_WORLD_ID_INVALID") )
    __debugbreak();
  __asm { vmovaps xmm2, xmm6 }
  ((void (__fastcall *)(BGVehicles *, _QWORD))this->m_vehicleSystem->PhysicsOnWorldAction)(this->m_vehicleSystem, (unsigned int)this->m_worldId);
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
PhysicsVehicleMassModifier::getEnabledFunctions
==============
*/
__int64 PhysicsVehicleMassModifier::getEnabledFunctions(PhysicsVehicleMassModifier *this)
{
  return 4i64;
}

/*
==============
PhysicsVehicleMassModifier::manifoldProcessCallback
==============
*/
void PhysicsVehicleMassModifier::manifoldProcessCallback(PhysicsVehicleMassModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, hknpManifold *manifold)
{
  const hknpBody *m_body; 
  int v13; 
  int v15; 
  const hknpBody *v17; 
  unsigned int m_serialAndIndex; 
  const hknpBody *v20; 
  hknpManifoldCollisionCache *m_collisionCache; 
  int *v28; 
  __int64 *v29; 
  __int64 v30; 
  int *v32; 
  bool v37; 
  bool v38; 
  bool v39; 
  bool v41; 
  _DWORD *v45; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  _DWORD v55[2]; 
  __int64 v56[2]; 
  __int64 v57; 
  __m256i *v59; 
  int *v60; 
  char v61; 
  vec3_t outPos; 
  __m256i v64; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = manifold;
  if ( this->m_gameManifoldCallback && !manifold->m_manifoldType.m_storage )
  {
    m_body = cdBodyA->m_body;
    __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
    v13 = truncate_cast<int,unsigned __int64>(LODWORD(m_body->m_userData));
    __asm { vmovaps ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000 }
    v15 = truncate_cast<int,unsigned __int64>(LODWORD(cdBodyB->m_body->m_userData));
    LOWORD(v54) = 0;
    __asm
    {
      vmovups [rbp+47h+var_80], ymm0
      vmovups xmm0, xmmword ptr [rsi+10h]
    }
    v61 = 0;
    v59 = &v64;
    __asm
    {
      vmovlps [rbp+47h+var_C0], xmm0
      vextractps [rbp+47h+var_B8], xmm0, 2
    }
    v60 = &v54;
    v17 = cdBodyA->m_body;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rbp+47h+var_9C], xmm6
    }
    m_serialAndIndex = v17->m_id.m_serialAndIndex;
    v20 = cdBodyB->m_body;
    v55[0] = m_serialAndIndex;
    v55[1] = v20->m_id.m_serialAndIndex;
    PhysicsVehicleMassModifier::GetAverageHitPos(this, manifold, &outPos);
    if ( this->m_gameManifoldCallback(this->m_vehicleSystem, this->m_worldId, &outPos, v13, v15, v55, (BgVehiclePhysicsManifoldProcessInfo *)&v57) )
    {
      __asm { vmovaps [rsp+120h+var_58+8], xmm7 }
      if ( v61 )
      {
        __asm { vmovss  xmm0, [rbp+47h+var_9C] }
        m_collisionCache = manifold->m_collisionCache;
        __asm { vmovss  [rsp+120h+var_E0], xmm0 }
        m_collisionCache->m_friction.m_value = HIWORD(v48);
        __asm
        {
          vmovss  xmm0, [rbp+47h+var_9C]
          vmovss  [rsp+120h+var_E0], xmm0
        }
        m_collisionCache->m_staticFrictionExtra.m_value = HIWORD(v49);
      }
      _RDX = manifold->m_scratch;
      _RCX = &manifold->m_scratch[16];
      if ( (manifold->m_dataFields.m_storage & 2) == 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
          vmovups xmmword ptr [rdx], xmm0
          vmovups xmmword ptr [rcx], xmm0
        }
        manifold->m_dataFields.m_storage = manifold->m_dataFields.m_storage & 0xF9 | 2;
      }
      __asm { vmovss  xmm7, cs:__real@bf800000 }
      v56[1] = (__int64)&manifold->m_scratch[16];
      v28 = &v54;
      v56[0] = (__int64)manifold->m_scratch;
      v29 = v56;
      v30 = 2i64;
      _RBX = &v64.m256i_i8[4];
      v32 = &v64.m256i_i32[1];
      do
      {
        if ( *(_BYTE *)v28 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-4]
            vmovss  [rsp+120h+var_E0], xmm0
          }
          if ( (v50 & 0x7F800000) == 2139095040 )
            goto LABEL_40;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vmovss  [rsp+120h+var_E0], xmm0
          }
          if ( (v51 & 0x7F800000) == 2139095040 )
            goto LABEL_40;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  [rsp+120h+var_E0], xmm0
          }
          if ( (v52 & 0x7F800000) == 2139095040 )
            goto LABEL_40;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vmovss  [rsp+120h+var_E0], xmm0
          }
          v37 = (v53 & 0x7F800000u) < 0x7F800000;
          v38 = (v53 & 0x7F800000) == 2139095040;
          if ( (v53 & 0x7F800000) == 2139095040 )
          {
LABEL_40:
            v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 187, ASSERT_TYPE_SANITY, "( !IS_NAN( ( massFactors[bodyNdx] )[0] ) && !IS_NAN( ( massFactors[bodyNdx] )[1] ) && !IS_NAN( ( massFactors[bodyNdx] )[2] ) && !IS_NAN( ( massFactors[bodyNdx] )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( massFactors[bodyNdx] )[0] ) && !IS_NAN( ( massFactors[bodyNdx] )[1] ) && !IS_NAN( ( massFactors[bodyNdx] )[2] ) && !IS_NAN( ( massFactors[bodyNdx] )[3] )");
            v37 = 0;
            v38 = !v39;
            if ( v39 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-4]
            vucomiss xmm0, xmm7
          }
          if ( !v38 )
          {
            __asm { vcomiss xmm0, xmm6 }
            if ( !v37 )
              __asm { vcomiss xmm0, cs:?SafeMassFactor@?BA@??manifoldProcessCallback@PhysicsVehicleMassModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z@4MA; float `PhysicsVehicleMassModifier::manifoldProcessCallback(hknpSimulationThreadContext const &,hknpModifierSharedData const &,hknpCdBodyBase const &,hknpCdBodyBase const &,hknpManifold restrict *)'::`16'::SafeMassFactor }
            v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 188, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][0] == -1.0f || massFactors[bodyNdx][0] >= 0.0f && massFactors[bodyNdx][0] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][0] == -1.0f || massFactors[bodyNdx][0] >= 0.0f && massFactors[bodyNdx][0] < SafeMassFactor");
            v37 = 0;
            if ( v41 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vcomiss xmm0, xmm6
          }
          if ( !v37 )
            __asm { vcomiss xmm0, cs:?SafeMassFactor@?BA@??manifoldProcessCallback@PhysicsVehicleMassModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z@4MA; float `PhysicsVehicleMassModifier::manifoldProcessCallback(hknpSimulationThreadContext const &,hknpModifierSharedData const &,hknpCdBodyBase const &,hknpCdBodyBase const &,hknpManifold restrict *)'::`16'::SafeMassFactor }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 189, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][1] >= 0.0f && massFactors[bodyNdx][1] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][1] >= 0.0f && massFactors[bodyNdx][1] < SafeMassFactor") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vcomiss xmm0, xmm6
            vcomiss xmm0, cs:?SafeMassFactor@?BA@??manifoldProcessCallback@PhysicsVehicleMassModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z@4MA; float `PhysicsVehicleMassModifier::manifoldProcessCallback(hknpSimulationThreadContext const &,hknpModifierSharedData const &,hknpCdBodyBase const &,hknpCdBodyBase const &,hknpManifold restrict *)'::`16'::SafeMassFactor
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 190, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][2] >= 0.0f && massFactors[bodyNdx][2] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][2] >= 0.0f && massFactors[bodyNdx][2] < SafeMassFactor") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vcomiss xmm0, xmm6
            vcomiss xmm0, cs:?SafeMassFactor@?BA@??manifoldProcessCallback@PhysicsVehicleMassModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBodyBase@@2PEIAUhknpManifold@@@Z@4MA; float `PhysicsVehicleMassModifier::manifoldProcessCallback(hknpSimulationThreadContext const &,hknpModifierSharedData const &,hknpCdBodyBase const &,hknpCdBodyBase const &,hknpManifold restrict *)'::`16'::SafeMassFactor
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 191, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][3] >= 0.0f && massFactors[bodyNdx][3] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][3] >= 0.0f && massFactors[bodyNdx][3] < SafeMassFactor") )
            __debugbreak();
          v45 = (_DWORD *)*v29;
          *v45 = *(v32 - 1);
          v45[1] = *v32;
          v45[2] = v32[1];
          v45[3] = v32[2];
        }
        v28 = (int *)((char *)v28 + 1);
        _RBX += 16;
        ++v29;
        v32 += 4;
        --v30;
      }
      while ( v30 );
      __asm { vmovaps xmm7, [rsp+120h+var_58+8] }
    }
    else
    {
      manifold->m_collisionCache->m_collisionFlags.m_storage |= 0x200u;
    }
    __asm { vmovaps xmm6, [rsp+120h+var_48+8] }
  }
}

/*
==============
HavokPhysicsVehicleShapeTagCodec::decode
==============
*/
void HavokPhysicsVehicleShapeTagCodec::decode(HavokPhysicsVehicleShapeTagCodec *this, unsigned __int16 shapeTag, hknpCollisionQueryType::Enum queryType, const hknpBody *body)
{
  ;
}

/*
==============
ProxyWithPhysicsEngine::CreateRigidBody<CG_PhysicsObject>
==============
*/
__int64 ProxyWithPhysicsEngine::CreateRigidBody<CG_PhysicsObject>(const CG_PhysicsObject *vehiclePhysicsObject, Physics_WorldId worldId, float *mass)
{
  __int64 v4; 
  unsigned int v7; 
  unsigned int m_serialAndIndex; 
  hknpWorld *World; 
  const PhysicsAsset *InstanceAsset; 
  hknpWorldWriter_vtbl *v12; 
  hknpWorld *v13; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v14; 
  hknpBodyId result; 

  v4 = worldId;
  _R14 = mass;
  if ( !vehiclePhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 329, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 330, ASSERT_TYPE_ASSERT, "(mass)", (const char *)&queryFormat, "mass") )
    __debugbreak();
  v7 = vehiclePhysicsObject->physicsInstances[v4];
  if ( v7 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 333, ASSERT_TYPE_ASSERT, "(vehiclePhysicsInstance != 0xFFFFFFFF)", "%s\n\tVehicle Physics can't find any physics to set up - is there a physics asset for the accompanying model?", "vehiclePhysicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    *_R14 = 0.0;
    return 0xFFFFFFi64;
  }
  else
  {
    if ( !Physics_GetNumRigidBodys((const Physics_WorldId)v4, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 341, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0)", "%s\n\tVehicle Physics can't find a rigid body for the chassis - the physics asset is probably broken", "Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0") )
      __debugbreak();
    HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v4, v7, 0);
    m_serialAndIndex = result.m_serialAndIndex;
    if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 343, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
    World = HavokPhysics_GetWorld((Physics_WorldId)v4);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 346, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v4, v7);
    *(double *)&_XMM0 = Physics_GetRigidBodyDefaultMass((Physics_WorldId)v4, InstanceAsset);
    v12 = World->hknpWorldWriter::__vftable;
    __asm { vmovss  dword ptr [r14], xmm0 }
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v12->enableBodyFlags)(&World->hknpWorldWriter, m_serialAndIndex, 128i64, 0i64);
    Physics_ActivateBody((Physics_WorldId)v4, m_serialAndIndex);
    v13 = HavokPhysics_GetWorld((Physics_WorldId)v4);
    if ( (*(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v13->getBody)(&v13->hknpWorldReader, m_serialAndIndex) + 108) & 0x200) == 0 )
    {
      v14 = &HavokPhysics_GetWorld((Physics_WorldId)v4)->m_bodyManager.m_bodies.m_objects.m_data[m_serialAndIndex & 0xFFFFFF];
      v14->m_pod.m_collisionFilterInfo |= 0x200u;
    }
    return m_serialAndIndex;
  }
}

/*
==============
ProxyWithPhysicsEngine::CreateRigidBody<G_PhysicsObject>
==============
*/
__int64 ProxyWithPhysicsEngine::CreateRigidBody<G_PhysicsObject>(const G_PhysicsObject *vehiclePhysicsObject, Physics_WorldId worldId, float *mass)
{
  __int64 v4; 
  unsigned int v7; 
  unsigned int m_serialAndIndex; 
  hknpWorld *World; 
  const PhysicsAsset *InstanceAsset; 
  hknpWorldWriter_vtbl *v12; 
  hknpWorld *v13; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v14; 
  hknpBodyId result; 

  v4 = worldId;
  _R14 = mass;
  if ( !vehiclePhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 329, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 330, ASSERT_TYPE_ASSERT, "(mass)", (const char *)&queryFormat, "mass") )
    __debugbreak();
  v7 = vehiclePhysicsObject->physicsInstances[v4];
  if ( v7 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 333, ASSERT_TYPE_ASSERT, "(vehiclePhysicsInstance != 0xFFFFFFFF)", "%s\n\tVehicle Physics can't find any physics to set up - is there a physics asset for the accompanying model?", "vehiclePhysicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    *_R14 = 0.0;
    return 0xFFFFFFi64;
  }
  else
  {
    if ( !Physics_GetNumRigidBodys((const Physics_WorldId)v4, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 341, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0)", "%s\n\tVehicle Physics can't find a rigid body for the chassis - the physics asset is probably broken", "Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0") )
      __debugbreak();
    HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v4, v7, 0);
    m_serialAndIndex = result.m_serialAndIndex;
    if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 343, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
    World = HavokPhysics_GetWorld((Physics_WorldId)v4);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 346, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v4, v7);
    *(double *)&_XMM0 = Physics_GetRigidBodyDefaultMass((Physics_WorldId)v4, InstanceAsset);
    v12 = World->hknpWorldWriter::__vftable;
    __asm { vmovss  dword ptr [r14], xmm0 }
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v12->enableBodyFlags)(&World->hknpWorldWriter, m_serialAndIndex, 128i64, 0i64);
    Physics_ActivateBody((Physics_WorldId)v4, m_serialAndIndex);
    v13 = HavokPhysics_GetWorld((Physics_WorldId)v4);
    if ( (*(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v13->getBody)(&v13->hknpWorldReader, m_serialAndIndex) + 108) & 0x200) == 0 )
    {
      v14 = &HavokPhysics_GetWorld((Physics_WorldId)v4)->m_bodyManager.m_bodies.m_objects.m_data[m_serialAndIndex & 0xFFFFFF];
      v14->m_pod.m_collisionFilterInfo |= 0x200u;
    }
    return m_serialAndIndex;
  }
}

/*
==============
ProxyWithPhysicsEngine::BuoyancyCast
==============
*/
__int64 ProxyWithPhysicsEngine::BuoyancyCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outSurflags)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned int NumHits; 
  char v23; 
  char v24; 
  int v35; 
  hkMemoryAllocator *v52; 
  hkMemoryAllocator *v53; 
  __int64 result; 
  float fmt; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v59; 
  __int64 v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v60 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R13 = outFrac;
  _RBP = outHitPos;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 489, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::BuoyancyCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v59, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v59, 0, entityNumber, 1, 1, 0, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+118h+extendedData.collisionBuffer], xmm6
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 0;
  extendedData.contents = 32;
  extendedData.ignoreBodies = &v59;
  *outSurflags = 0;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 505, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(ClosestResult);
  if ( NumHits )
  {
    *outSurflags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    __asm { vmovss  dword ptr [r13+0], xmm0 }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outHitPos);
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, outHitNormal);
    __asm
    {
      vmovss  xmm7, [rsp+118h+noiseAmp]
      vcomiss xmm7, cs:__real@3a83126f
    }
    if ( !(v23 | v24) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
        vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
        vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
        vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
        vmaxss  xmm0, xmm2, xmm3
        vcvttss2si ebx, xmm0
      }
      if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 523, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
        vmaxss  xmm1, xmm1, xmm6
        vcvttss2si eax, xmm1
      }
      v35 = _EAX % _EBX;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4]
        vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
        vmaxss  xmm1, xmm1, xmm6
        vcvttss2si eax, xmm1
        vmovss  xmm0, cs:__real@3f266666
        vmovss  dword ptr [rsp+118h+fmt], xmm0
        vmovss  xmm2, cs:__real@3f800000; amplitude
        vmovss  xmm1, cs:?noiseFreq@?BG@??BuoyancyCast@ProxyWithPhysicsEngine@@SAHW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT4@3AEAI@Z@4MA; frequency
      }
      *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, *(float *)&_XMM1, *(float *)&_XMM2, 8, fmt, _EBX, v35, _EAX % _EBX);
      __asm
      {
        vmaxss  xmm1, xmm0, cs:__real@bf800000
        vminss  xmm2, xmm1, cs:__real@3f800000
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm0, xmm3, dword ptr [r14]
        vaddss  xmm1, xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
        vmulss  xmm0, xmm3, dword ptr [r14+4]
        vaddss  xmm1, xmm0, dword ptr [rbp+4]
        vmovss  dword ptr [rbp+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [r14+8]
        vaddss  xmm1, xmm0, dword ptr [rbp+8]
        vmovss  dword ptr [rbp+8], xmm1
      }
    }
  }
  v52 = hkMemHeapAllocator();
  v59.m_ignoreBodies.m_size = 0;
  if ( v59.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v52, v59.m_ignoreBodies.m_data, 4, v59.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v59.m_ignoreBodies.m_data = NULL;
  v59.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v53 = hkMemHeapAllocator();
  v59.m_ignoreEntities.m_size = 0;
  if ( v59.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v53, v59.m_ignoreEntities.m_data, 8, v59.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = NumHits;
  __asm
  {
    vmovaps xmm6, [rsp+118h+var_58]
    vmovaps xmm7, [rsp+118h+var_68]
  }
  return result;
}

/*
==============
ProxyWithPhysicsEngine::CG_CreateRigidBody
==============
*/
unsigned int ProxyWithPhysicsEngine::CG_CreateRigidBody(LocalClientNum_t localClientNum, Physics_WorldId worldId, int entNum, float *mass)
{
  __int64 v4; 
  __int64 v6; 
  const CG_PhysicsObject *v8; 
  unsigned int result; 
  unsigned int v10; 
  CgEntitySystem *v11; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 activate; 
  __int64 v31; 
  vec3_t position; 
  vec3_t angles; 
  vec4_t quat; 

  v4 = localClientNum;
  v6 = entNum;
  v8 = CG_PhysicsObject_Get(entNum, localClientNum);
  result = ProxyWithPhysicsEngine::CreateRigidBody<CG_PhysicsObject>(v8, worldId, mass);
  v10 = result;
  if ( (result & 0xFFFFFF) != 0xFFFFFF )
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
      __debugbreak();
    if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v31) = CgEntitySystem::ms_allocatedCount;
      LODWORD(activate) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", activate, v31) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v31) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v31) )
        __debugbreak();
    }
    v11 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v31) = 2048;
      LODWORD(activate) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", activate, v31) )
        __debugbreak();
    }
    _RBX = &v11->m_entities[v6].pose;
    if ( !_RBX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 395, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
    }
    if ( !_RBX->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RBX->origin.Get_origin, _RBX);
    FunctionPointer_origin(&_RBX->origin.origin.origin, &position);
    if ( _RBX->isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rsp+0B8h+position]
        vmovd   xmm2, dword ptr [rsp+0B8h+position+4]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovd   xmm2, dword ptr [rsp+0B8h+position+8]
        vmovss  dword ptr [rsp+0B8h+position], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+0B8h+position+4], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+0B8h+position+8], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vmovss  dword ptr [rsp+0B8h+angles], xmm0
      vmovss  xmm1, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rsp+0B8h+angles+4], xmm1
      vmovss  xmm0, dword ptr [rbx+50h]
      vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
    }
    AnglesToQuat(&angles, &quat);
    Physics_WarpRigidBodyTo(worldId, v10, &position, &quat, 1, 1);
    return v10;
  }
  return result;
}

/*
==============
PhysicsVehicleMassModifier::GetAverageHitPos
==============
*/
void PhysicsVehicleMassModifier::GetAverageHitPos(PhysicsVehicleMassModifier *this, hknpManifold *manifold, vec3_t *outPos)
{
  __int64 m_numPoints; 
  __int64 v9; 
  unsigned __int64 v15; 
  __int64 v37; 
  unsigned __int64 *v38; 

  m_numPoints = manifold->m_numPoints;
  v9 = 0i64;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
  }
  *(_QWORD *)outPos->v = 0i64;
  outPos->v[2] = 0.0;
  __asm
  {
    vmovss  xmm5, cs:__real@42000000
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( m_numPoints >= 4 )
  {
    __asm { vmovaps [rsp+48h+var_48], xmm9 }
    _RAX = &manifold->m_positions[0].m_quad.m128_u64[1];
    v15 = ((unsigned __int64)(m_numPoints - 4) >> 2) + 1;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    v9 = 4 * v15;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax-8]
        vaddss  xmm1, xmm0, dword ptr [rax+8]
        vaddss  xmm2, xmm1, dword ptr [rax+18h]
        vaddss  xmm3, xmm2, dword ptr [rax+28h]
        vmulss  xmm2, xmm5, dword ptr [rax-4]
        vmulss  xmm1, xmm5, dword ptr [rax+1Ch]
      }
      _RAX += 8;
      __asm
      {
        vmulss  xmm0, xmm3, xmm5
        vmulss  xmm3, xmm5, dword ptr [rax-34h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rax-40h]
        vaddss  xmm3, xmm4, xmm1
        vaddss  xmm6, xmm0, xmm9
        vmulss  xmm0, xmm5, dword ptr [rax-14h]
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm3, xmm5, dword ptr [rax-30h]
        vmulss  xmm0, xmm5, dword ptr [rax-10h]
        vaddss  xmm7, xmm7, xmm1
        vmulss  xmm1, xmm5, dword ptr [rax-20h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm3, xmm4, xmm1
        vaddss  xmm1, xmm3, xmm0
        vaddss  xmm8, xmm8, xmm1
        vmovaps xmm9, xmm6
      }
      --v15;
    }
    while ( v15 );
    __asm
    {
      vmovaps xmm9, [rsp+48h+var_48]
      vmovss  dword ptr [r8], xmm6
      vmovss  dword ptr [r8+4], xmm7
      vmovss  dword ptr [r8+8], xmm8
    }
  }
  if ( v9 < m_numPoints )
  {
    v37 = m_numPoints - v9;
    v38 = &manifold->m_positions[v9].m_quad.m128_u64[1];
    do
    {
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rcx-8]
        vaddss  xmm6, xmm1, dword ptr [r8]
        vmulss  xmm1, xmm5, dword ptr [rcx-4]
        vmulss  xmm0, xmm5, dword ptr [rcx]
      }
      v38 += 2;
      __asm
      {
        vaddss  xmm7, xmm7, xmm1
        vmovss  dword ptr [r8], xmm6
        vaddss  xmm8, xmm8, xmm0
      }
      --v37;
    }
    while ( v37 );
    __asm
    {
      vmovss  dword ptr [r8+4], xmm7
      vmovss  dword ptr [r8+8], xmm8
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+48h+var_38]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  if ( (int)m_numPoints > 1 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r11d
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm0, xmm2, dword ptr [r8+4]
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [r8], xmm1
      vmulss  xmm1, xmm2, dword ptr [r8+8]
      vmovss  dword ptr [r8+8], xmm1
      vmovss  dword ptr [r8+4], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
HavokPhysicsVehicle_GetClosestPoints
==============
*/
void HavokPhysicsVehicle_GetClosestPoints(Physics_WorldId worldId, hknpBodyId bodyId, hknpShape *shape, const hkVector4f *point, const hkQuaternionf *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  hknpCollisionQueryCollector *Collector; 
  const HavokPhysicsWorld *ConstWorld; 
  const hknpBody *v26; 
  const hknpShape *m_shape; 
  hkMonitorStream *Value; 
  hkMonitorStream *v35; 
  __int64 v37; 
  __int16 v38; 
  int contents; 
  int *v40; 
  hknpQueryFilterData targetShapeFilterDataIn; 
  hknpCollisionQueryContext queryContext; 
  hknpClosestPointsQuery queryIn; 
  hkQuaternionf *qi; 
  int v45; 
  __int64 v46; 
  int v47; 
  __int128 v48; 
  Physics_QueryPhaseSelection phaseSelection; 
  __int64 v50; 
  hknpShapeQueryInfo queryShapeInfo; 
  hknpShapeQueryInfo targetShapeInfo; 
  char v53[64]; 
  hknpInplaceTriangleShape v54; 
  void *retaddr; 

  _RAX = &retaddr;
  v50 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _R13 = point;
  qi = (hkQuaternionf *)rotation;
  _RDI = extendedData;
  v38 = -1;
  contents = 0;
  v40 = NULL;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm1, xmm1, xmm1; radius
  }
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v54, *(float *)&_XMM1);
  queryContext.m_dispatcher = NULL;
  queryContext.m_queryTriangle = (hknpTriangleShape *)&v54;
  queryContext.m_targetTriangle = (hknpTriangleShape *)&v54;
  __asm { vmovss  [rsp+350h+queryContext.m_initialCastFractionHint], xmm6 }
  queryContext.m_externallyAllocatedTriangles = 1;
  queryShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  queryShapeInfo.m_shapeKeyPath.m_size = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+250h+queryShapeInfo.m_body], xmm0
  }
  queryShapeInfo.m_parentShape = NULL;
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vmovdqu xmmword ptr [rbp+250h+queryShapeInfo.m_shapeToWorld], xmm1
  }
  queryShapeInfo.m_scalingInternals.m_isScaled = 0;
  __asm
  {
    vmovups xmm3, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rbp+250h+queryShapeInfo.m_scalingInternals.m_scale.m_quad], xmm3
  }
  queryShapeInfo.m_scalingInternals.m_mode = 0;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovups xmmword ptr [rbp+250h+queryShapeInfo.m_scalingInternals.m_offset.m_quad], xmm2
    vmovss  [rbp+250h+queryShapeInfo.m_scalingInternals.m_convexRadius], xmm6
  }
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  targetShapeInfo.m_shapeKeyPath.m_size = 0;
  __asm { vmovdqu xmmword ptr [rbp+250h+var_1F0.m_body], xmm0 }
  targetShapeInfo.m_parentShape = NULL;
  __asm { vmovdqu xmmword ptr [rbp+250h+var_1F0.m_shapeToWorld], xmm1 }
  targetShapeInfo.m_scalingInternals.m_isScaled = 0;
  __asm { vmovups xmmword ptr [rbp+250h+var_1F0.m_scalingInternals.m_scale.m_quad], xmm3 }
  targetShapeInfo.m_scalingInternals.m_mode = 0;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+var_1F0.m_scalingInternals.m_offset.m_quad], xmm2
    vmovss  [rbp+250h+var_1F0.m_scalingInternals.m_convexRadius], xmm6
  }
  targetShapeFilterDataIn.m_materialId.m_value = -1;
  targetShapeFilterDataIn.m_collisionFilterInfo = 0;
  targetShapeFilterDataIn.m_userData = 0i64;
  __asm { vmovss  [rbp+250h+var_288], xmm6 }
  v46 = 0i64;
  v47 = 1;
  __asm { vmovdqu [rbp+250h+var_270], xmm0 }
  phaseSelection = All;
  queryIn.m_filterData.m_materialId.m_value = -1;
  queryIn.m_filterData.m_collisionFilterInfo = 0;
  queryIn.m_filterData.m_userData = 0i64;
  queryIn.m_filter = NULL;
  queryIn.m_shapeTagCodec = NULL;
  *(_DWORD *)queryIn.m_levelOfDetail = 2;
  queryIn.m_broadPhaseFilterMask = -5;
  queryIn.m_shape = NULL;
  __asm { vmovss  [rbp+250h+queryIn.m_maxDistance], xmm6 }
  queryIn.m_body = NULL;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1003, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v37) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1004, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to fire getclosest points with body with invalid body id %i", "bodyId.isValid()", v37) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1005, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid shape", "shape") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1006, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1007, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tHavok Physics: Trying to fire get closest points with body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1008, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tHavok Physics: Trying to fire get closest points with body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1009, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid result", "result") )
    __debugbreak();
  if ( !result->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1010, ASSERT_TYPE_ASSERT, "(result->m_collector)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid collector", "result->m_collector") )
    __debugbreak();
  Collector = HavokPhysicsHitCollector::GetCollector(result->m_collector);
  if ( !Collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1013, ASSERT_TYPE_ASSERT, "(collector)", "%s\n\tHavok Physics: Trying to fire get closest points with invalid havok collector", "collector") )
    __debugbreak();
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  v26 = (const hknpBody *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))ConstWorld->world->getBody)(&ConstWorld->world->hknpWorldReader, bodyId.m_serialAndIndex);
  m_shape = v26->m_shape;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmulss  xmm1, xmm0, cs:__real@3d000000
    vmovss  [rbp+250h+var_288], xmm1
  }
  *(_QWORD *)&v48 = extendedData->nonBrushShape;
  phaseSelection = extendedData->phaseSelection;
  v38 = -1;
  contents = extendedData->contents;
  v40 = &v45;
  if ( ConstWorld->traceCollisionFilter->isCollisionEnabled(ConstWorld->traceCollisionFilter, GET_CLOSEST_POINTS, (const hknpQueryFilterData *)&v38, v26) )
  {
    queryContext.m_dispatcher = ConstWorld->world->m_collisionQueryDispatcher;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
      vmovups ymmword ptr [rbp+250h+var_190], ymm0
      vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
      vmovups ymmword ptr [rbp+250h+var_190+20h], ymm0
    }
    hkRotationImpl<float>::set((hkRotationImpl<float> *)v53, qi);
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rbp+250h+var_190+30h], xmm0
    }
    queryShapeInfo.m_rootShape = shape;
    queryShapeInfo.m_shapeToWorld = (const hkTransformf *)v53;
    targetShapeInfo.m_body = v26;
    targetShapeInfo.m_rootShape = v26->m_shape;
    targetShapeInfo.m_shapeToWorld = &v26->m_transform;
    targetShapeFilterDataIn.m_materialId.m_value = v26->m_materialId.m_value;
    targetShapeFilterDataIn.m_collisionFilterInfo = v26->m_collisionFilterInfo;
    targetShapeFilterDataIn.m_userData = v26->m_userData;
    queryIn.m_shape = shape;
    __asm
    {
      vmovss  xmm0, [rbp+250h+maxDistance]
      vmovss  [rbp+250h+queryIn.m_maxDistance], xmm0
    }
    queryIn.m_shapeTagCodec = &s_vehicleShapeTagCodec;
    queryIn.m_filter = ConstWorld->traceCollisionFilter;
    queryIn.m_filterData.m_collisionFilterInfo = extendedData->contents;
    queryIn.m_filterData.m_userData = (unsigned __int64)&v45;
    *(_DWORD *)queryIn.m_levelOfDetail = 0;
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtGetClosestPoints_Body_HK");
    hknpShapeQueryInterface::getClosestPoints(&queryContext, &queryIn, &queryShapeInfo, m_shape, &targetShapeFilterDataIn, &targetShapeInfo, Collector);
    v35 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( v35 )
      hkMonitorStream::timerEnd(v35, "Et");
    if ( !queryContext.m_externallyAllocatedTriangles )
    {
      hkReferencedObject::removeReference(queryContext.m_queryTriangle);
      hkReferencedObject::removeReference(queryContext.m_targetTriangle);
    }
  }
  else if ( !queryContext.m_externallyAllocatedTriangles )
  {
    hkReferencedObject::removeReference(queryContext.m_queryTriangle);
    hkReferencedObject::removeReference(queryContext.m_targetTriangle);
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+350h+var_48+8] }
}

/*
==============
PhysicsVehicle_AddContentFlag
==============
*/
void PhysicsVehicle_AddContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  hknpThreadSafeObjectPoolElement<hknpBody> *v4; 

  v4 = &HavokPhysics_GetWorld(worldId)->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF];
  v4->m_pod.m_collisionFilterInfo |= contents;
}

/*
==============
PhysicsVehicle_BuoyancyCast
==============
*/

int __fastcall PhysicsVehicle_BuoyancyCast(Physics_WorldId worldId, int vehicleEntNum, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outSurfFlags)
{
  return ProxyWithPhysicsEngine::BuoyancyCast(worldId, vehicleEntNum, start, end, noiseAmp, outFrac, outHitPos, outHitNormal, outSurfFlags);
}

/*
==============
PhysicsVehicle_CollisionCallbackNotifyScript
==============
*/
void PhysicsVehicle_CollisionCallbackNotifyScript(int entityNumber, const Physics_SimpleCollisionCallback_Data *data, const int collisionZone)
{
  int Ref; 
  int v7; 
  __int64 EntityNum; 
  __int64 v9; 
  const gentity_s *v10; 
  const gentity_s *v11; 
  const gentity_s *v12; 
  scrContext_t *v13; 

  _R14 = data;
  if ( data->worldId == PHYSICS_WORLD_ID_FIRST )
  {
    Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, data->bodyIds[0]);
    v7 = Physics_GetRef(_R14->worldId, _R14->bodyIds[1]);
    EntityNum = Physics_GetEntityNum(Ref);
    v9 = Physics_GetEntityNum(v7);
    if ( (_DWORD)EntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 941, ASSERT_TYPE_ASSERT, "( entNum1 != ENTITYNUM_NONE )", (const char *)&queryFormat, "entNum1 != ENTITYNUM_NONE") )
      __debugbreak();
    v10 = &g_entities[v9];
    v11 = &g_entities[EntityNum];
    if ( v10->s.number == entityNumber )
    {
      v12 = v11;
      v11 = &g_entities[v9];
      v10 = v12;
    }
    else if ( v11->s.number != entityNumber )
    {
      return;
    }
    v13 = ScriptContext_Server();
    Scr_AddInt(v13, collisionZone);
    GScr_AddEntity(v10);
    __asm { vmovss  xmm1, dword ptr [r14+2Ch]; value }
    Scr_AddFloat(v13, *(float *)&_XMM1);
    Scr_AddVector(v13, _R14->normal.v);
    Scr_AddVector(v13, _R14->position.v);
    Scr_AddInt(v13, _R14->surfaceFlagData[1]);
    Scr_AddInt(v13, _R14->surfaceFlagData[0]);
    Scr_AddInt(v13, _R14->bodyIds[1]);
    Scr_AddInt(v13, _R14->bodyIds[0]);
    GScr_Notify(v11, scr_const.collision, 9u);
  }
}

/*
==============
PhysicsVehicle_ComputePointVelocity
==============
*/
void PhysicsVehicle_ComputePointVelocity(const vec3_t *comWs, const vec3_t *angVelWs, const vec3_t *linVelWs, const vec3_t *atWs, vec3_t *outPointVel)
{
  char v35; 
  char v39; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm6, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r9+8]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm8, xmm0, dword ptr [rcx+8]
  }
  _RSI = outPointVel;
  _RBX = angVelWs;
  __asm { vsubss  xmm7, xmm1, dword ptr [rcx+4] }
  if ( angVelWs == (const vec3_t *)&v35 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx]
    vmulss  xmm0, xmm7, xmm3
    vmulss  xmm1, xmm8, xmm5
    vsubss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm0, xmm8, xmm4
    vmulss  xmm3, xmm6, xmm3
    vsubss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsi], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm3, xmm7, xmm4
    vmulss  xmm0, xmm6, xmm5
    vsubss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsi+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm2
  }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
PhysicsVehicle_ComputeProjectedPointVelocity
==============
*/
float PhysicsVehicle_ComputeProjectedPointVelocity(const vec3_t *comWs, const vec3_t *angVelWs, const vec3_t *linVelWs, const vec3_t *atWs)
{
  char v40; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm8, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [r9+8]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm10, xmm0, dword ptr [rcx+8]
    vsubss  xmm9, xmm1, dword ptr [rcx+4]
  }
  if ( angVelWs == (const vec3_t *)&v40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rbx+8]
    vmulss  xmm0, xmm10, dword ptr [rbx]
    vsubss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm4, xmm2, dword ptr [rax+4]
    vmulss  xmm1, xmm10, dword ptr [rbx+4]
    vmulss  xmm0, xmm9, dword ptr [rbx+8]
    vsubss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm3, xmm2, dword ptr [rax]
    vmulss  xmm0, xmm8, dword ptr [rbx+4]
    vmulss  xmm1, xmm9, dword ptr [rbx]
    vsubss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vaddss  xmm5, xmm4, xmm3
    vmulss  xmm3, xmm2, dword ptr [rax+8]
    vaddss  xmm0, xmm5, xmm3
  }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
PhysicsVehicle_CreateAxleRigidBody
==============
*/
__int64 PhysicsVehicle_CreateAxleRigidBody(Physics_WorldId worldId, unsigned int chassisBodyId, const vec3_t *relA, const vec3_t *relB, float radius, int sides, float outPadding)
{
  int v19; 
  unsigned int v20; 
  hknpWorld *world; 
  hknpWorld *v24; 
  __int64 v25; 
  int v69; 
  hkMemoryRouter *Value; 
  hknpCylinderShape *v71; 
  hknpShape *v74; 
  hknpShape *v75; 
  unsigned int v76; 
  __int64 result; 
  float convexRadius; 
  __int64 v87; 
  __int64 v88; 
  hknpCylinderShape *v89; 
  hknpCylinderShape *v90; 
  __int64 v91; 
  hkVector4f posB; 
  hkVector4f posA; 
  hkQuaternionf v94; 
  hknpBodyCinfo v95; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  v91 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps xmmword ptr [rax-88h], xmm14
    vmovaps xmmword ptr [rax-98h], xmm15
  }
  _R15 = relB;
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+radius]
    vmovss  dword ptr [rsp+1E0h+var_198], xmm0
  }
  v19 = sides;
  v20 = chassisBodyId & 0xFFFFFF;
  if ( (chassisBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 691, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( chassisBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( chassisBodyId )") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 363, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( v20 == 0xFFFFFF )
  {
    LODWORD(v87) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 364, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v87) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v87) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v87) )
      __debugbreak();
  }
  _RDX = &world->m_bodyManager.m_bodies.m_objects.m_data[chassisBodyId & 0xFFFFFF].m_pod.m_transform.m_rotation;
  __asm { vmovups xmm6, xmmword ptr [rdx+30h] }
  hkQuaternionf::set(&v94, _RDX);
  v24 = HavokPhysics_GetWorld(worldId);
  v25 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v24->getBody)(&v24->hknpWorldReader, chassisBodyId);
  hknpBodyCinfo::hknpBodyCinfo(&v95);
  __asm
  {
    vmovups xmmword ptr [rbp+0E0h+var_150.m_position.m_quad], xmm6
    vmovups xmm0, xmmword ptr [rbp+0E0h+var_160.m_vec.m_quad]
    vmovups xmmword ptr [rbp+0E0h+var_150.m_orientation.m_vec.m_quad], xmm0
  }
  v95.m_motionType.m_storage = 1;
  v95.m_motionId.m_value = 0x7FFFFFFF;
  v95.m_qualityId.m_value = 0;
  v95.m_collisionFilterInfo = *(_DWORD *)(v25 + 108);
  v95.m_userData = *(_QWORD *)(v25 + 160);
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vmovss  [rbp+0E0h+var_150.m_collisionLookAheadDistance], xmm15
    vmovss  xmm7, cs:__real@3f800000
    vmovss  [rbp+0E0h+var_150.m_mass], xmm7
  }
  hkStringPtr::operator=(&v95.m_name, "axle");
  __asm
  {
    vmovss  xmm14, dword ptr [r15]
    vsubss  xmm6, xmm14, dword ptr [r12]
    vmovss  xmm13, dword ptr [r15+4]
    vsubss  xmm4, xmm13, dword ptr [r12+4]
    vmovss  xmm12, dword ptr [r15+8]
    vsubss  xmm5, xmm12, dword ptr [r12+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
    vmovss  dword ptr [rsp+1E0h+var_190], xmm1
    vdivss  xmm0, xmm7, xmm1
    vmulss  xmm3, xmm6, xmm0
    vmulss  xmm4, xmm4, xmm0
    vmulss  xmm8, xmm5, xmm0
    vmovss  xmm5, [rbp+0E0h+outPadding]
    vxorps  xmm2, xmm5, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, xmm2
    vaddss  xmm6, xmm0, dword ptr [r12]
    vmulss  xmm1, xmm4, xmm2
    vaddss  xmm7, xmm1, dword ptr [r12+4]
    vmulss  xmm0, xmm8, xmm2
    vaddss  xmm2, xmm0, dword ptr [r12+8]
    vmulss  xmm1, xmm3, xmm5
    vaddss  xmm3, xmm1, xmm14
    vmulss  xmm0, xmm4, xmm5
    vaddss  xmm4, xmm0, xmm13
    vmulss  xmm1, xmm8, xmm5
    vaddss  xmm5, xmm1, xmm12
    vmovss  xmm8, cs:__real@3d000000
    vmulss  xmm0, xmm6, xmm8
    vmovss  dword ptr [rsp+1E0h+posA.m_quad], xmm0
    vmulss  xmm1, xmm7, xmm8
    vmovss  dword ptr [rsp+1E0h+posA.m_quad+4], xmm1
    vmulss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rsp+1E0h+posA.m_quad+8], xmm0
    vmovss  dword ptr [rsp+1E0h+posA.m_quad+0Ch], xmm15
    vmulss  xmm1, xmm3, xmm8
    vmovss  dword ptr [rsp+1E0h+posB.m_quad], xmm1
    vmulss  xmm0, xmm4, xmm8
    vmovss  dword ptr [rsp+1E0h+posB.m_quad+4], xmm0
    vmulss  xmm1, xmm5, xmm8
    vmovss  dword ptr [rsp+1E0h+posB.m_quad+8], xmm1
    vmovss  dword ptr [rsp+1E0h+posB.m_quad+0Ch], xmm15
  }
  if ( sides > 32 )
    v19 = 32;
  if ( v19 < 4 )
    v19 = 4;
  __asm { vmulss  xmm6, xmm8, dword ptr [rsp+1E0h+var_198] }
  v69 = (((4 * v19 + 23) & 0xFFFFFFF0) + ((16 * v19 + 47) & 0xFFFFFFF0) + ((16 * ((2 * v19 + 3) & 0xFFFFFFFC) + 15) & 0xFFFFFFF0) + ((6 * v19 + 15) & 0xFFFFFFF0) + 143) & 0xFFFFFFF0;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v71 = (hknpCylinderShape *)hkMemoryAllocator::blockAlloc2(Value->m_heap, 1, v69);
  v90 = v71;
  v89 = v71;
  if ( v71 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3c23d70a
      vmovss  [rsp+1E0h+convexRadius], xmm0
      vmovaps xmm3, xmm6; radius
    }
    hknpCylinderShape::hknpCylinderShape(v71, &posA, &posB, *(float *)&_XMM3, v19, convexRadius);
    v75 = v74;
  }
  else
  {
    v75 = NULL;
  }
  v75->m_memSizeAndFlags = v69;
  hkReferencedObject::addReference(v75);
  if ( v95.m_shape.m_ptr )
    hkReferencedObject::removeReference(&v95.m_shape.m_ptr->hkReferencedObject);
  v95.m_shape.m_ptr = v75;
  hkReferencedObject::removeReference(v75);
  Sys_EnterCriticalSection(CRITSECT_PHYS_BODY_CREATE);
  v24->allocateBody(&v24->hknpWorldWriter, (hknpBodyId *)&v88, &v95);
  Sys_LeaveCriticalSection(CRITSECT_PHYS_BODY_CREATE);
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, _QWORD, _QWORD))v24->addBody)(&v24->hknpWorldWriter, (unsigned int)v88, 0i64, 0i64);
  v76 = v88;
  if ( v95.m_localFrame.m_ptr )
    hkReferencedObject::removeReference(v95.m_localFrame.m_ptr);
  if ( v95.m_dragProperties.m_ptr )
    hkReferencedObject::removeReference(v95.m_dragProperties.m_ptr);
  if ( v95.m_massDistribution.m_ptr )
    hkReferencedObject::removeReference(v95.m_massDistribution.m_ptr);
  hkStringPtr::~hkStringPtr(&v95.m_name);
  if ( v95.m_shape.m_ptr )
    hkReferencedObject::removeReference(&v95.m_shape.m_ptr->hkReferencedObject);
  result = v76;
  _R11 = &v96;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-40h]
    vmovaps xmm13, xmmword ptr [r11-50h]
    vmovaps xmm14, xmmword ptr [r11-60h]
    vmovaps xmm15, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
PhysicsVehicle_CreateRigidBody
==============
*/
unsigned int PhysicsVehicle_CreateRigidBody(Physics_WorldId worldId, int entityNumber, float *outMass)
{
  __int64 v3; 
  LocalClientNum_t LocalClientForWorld; 
  const G_PhysicsObject *v8; 
  unsigned int Rigid; 
  gentity_s *v10; 
  __int64 activate; 
  vec4_t quat; 

  v3 = entityNumber;
  if ( !outMass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 647, ASSERT_TYPE_ASSERT, "(outMass)", (const char *)&queryFormat, "outMass") )
    __debugbreak();
  if ( worldId )
  {
    if ( worldId == PHYSICS_WORLD_ID_CLIENT_FIRST || worldId == PHYSICS_WORLD_ID_CLIENT1_FIRST )
    {
      LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
      return ProxyWithPhysicsEngine::CG_CreateRigidBody(LocalClientForWorld, worldId, v3, outMass);
    }
    else
    {
      return 0xFFFFFF;
    }
  }
  else
  {
    v8 = G_PhysicsObject_Get(v3);
    Rigid = ProxyWithPhysicsEngine::CreateRigidBody<G_PhysicsObject>(v8, PHYSICS_WORLD_ID_FIRST, outMass);
    if ( (Rigid & 0xFFFFFF) != 0xFFFFFF )
    {
      if ( (unsigned int)v3 >= 0x800 )
      {
        LODWORD(activate) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", activate, 2048) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v10 = &g_entities[v3];
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 375, ASSERT_TYPE_ASSERT, "(gent)", (const char *)&queryFormat, "gent") )
        __debugbreak();
      AnglesToQuat(&v10->r.currentAngles, &quat);
      Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_FIRST, Rigid, &v10->r.currentOrigin, &quat, 1, 1);
    }
    return Rigid;
  }
}

/*
==============
PhysicsVehicle_CreateWorld
==============
*/
void PhysicsVehicle_CreateWorld(Physics_WorldId worldId, BGVehicles *vehicleSystem)
{
  __int64 v2; 
  BgVehicleCollisionSystem *v4; 
  bool (__fastcall *CollisionCallback)(BGVehicles *, Physics_WorldId, const vec3_t *, int, int, const unsigned int *, BgVehiclePhysicsManifoldProcessInfo *); 
  PhysisVehicleWorldData *v6; 
  hknpWorld *World; 
  hknpActionManager *ActionManager; 
  hknpAction action; 

  v2 = worldId;
  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 593, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( vehicleSystem->PhysicsIsSupportedWorld(vehicleSystem, (Physics_WorldId)v2) )
  {
    v4 = vehicleSystem->PhysicsGetCollisionSystem(vehicleSystem);
    CollisionCallback = BgVehicleCollisionSystem::PhysicsGetCollisionCallback(v4, (Physics_WorldId)v2);
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 257, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::OnCreateWorld: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
    v6 = &ProxyWithPhysicsEngine::s_worldData[v2];
    World = HavokPhysics_GetWorld((Physics_WorldId)v2);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 262, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    ActionManager = hknpWorld::getActionManager(World);
    if ( !ActionManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 76, ASSERT_TYPE_ASSERT, "(actionMgr)", (const char *)&queryFormat, "actionMgr") )
      __debugbreak();
    if ( (v6->m_action.m_worldId != PHYSICS_WORLD_ID_INVALID || v6->m_action.m_vehicleSystem) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 78, ASSERT_TYPE_ASSERT, "(m_worldId == PHYSICS_WORLD_ID_INVALID && m_vehicleSystem == nullptr)", "%s\n\tPhysicsVehicleHavokAction: hasn't been unregistered properly", "m_worldId == PHYSICS_WORLD_ID_INVALID && m_vehicleSystem == nullptr") )
      __debugbreak();
    hknpActionManager::addAction(ActionManager, &action);
    v6->m_action.m_worldId = v2;
    v6->m_action.m_vehicleSystem = vehicleSystem;
    v6->m_massModifier.m_worldId = v2;
    v6->m_massModifier.m_vehicleSystem = vehicleSystem;
    v6->m_massModifier.m_gameManifoldCallback = CollisionCallback;
    HavokPhysics_AddModifier((Physics_WorldId)v2, &v6->m_massModifier);
    if ( !(_DWORD)v2 )
      GVehicles::PhysicsInit((GVehicles *)vehicleSystem);
  }
  s_PhysicsQuery_BroadphaseTraceResults_0[v2] = Physics_AllocateBroadphaseCollisionQueryResult((Physics_WorldId)v2);
}

/*
==============
PhysicsVehicle_DebugDraw
==============
*/

void __fastcall PhysicsVehicle_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  unsigned int i; 
  CgVehicleSystem *v13; 
  float fmt; 
  float fmta; 
  __int64 v18; 
  float v19; 
  float v20; 
  __int64 v21; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
    vmovss  xmm7, [rsp+88h+charHeight]
    vmovaps xmm6, xmm3
  }
  if ( GVehicles::ms_gVehiclesSystem )
  {
    __asm
    {
      vmovss  [rsp+88h+var_60], xmm7
      vmovss  dword ptr [rsp+88h+fmt], xmm3
    }
    BGVehicles::PhysicsDrawDebug(GVehicles::ms_gVehiclesSystem, scrPlace, x, y, fmt, v19);
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( (int)i < CgVehicleSystem::ms_allocatedCount && CgVehicleSystem::ms_vehicleSystemArray[i] )
    {
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(v21) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v21) )
          __debugbreak();
      }
      if ( i >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v21) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v18) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v21) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[i] )
      {
        LODWORD(v21) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v21) )
          __debugbreak();
      }
      v13 = CgVehicleSystem::ms_vehicleSystemArray[i];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1298, ASSERT_TYPE_ASSERT, "(cgSystem)", (const char *)&queryFormat, "cgSystem") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+88h+var_60], xmm7
        vmovss  dword ptr [rsp+88h+fmt], xmm6
      }
      BGVehicles::PhysicsDrawDebug(v13, scrPlace, x, y, fmta, v20);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
PhysicsVehicle_DestroyAxleRigidBody
==============
*/
void PhysicsVehicle_DestroyAxleRigidBody(Physics_WorldId worldId, unsigned int axleBodyId)
{
  hknpWorld *World; 
  hknpWorld *v4; 
  unsigned int v5; 

  if ( (axleBodyId & 0xFFFFFF) != 0xFFFFFF )
  {
    World = HavokPhysics_GetWorld(worldId);
    v5 = axleBodyId;
    v4 = World;
    Sys_EnterCriticalSection(CRITSECT_PHYS_BODY_CREATE);
    ((void (__fastcall *)(hknpWorldWriter *, unsigned int *, __int64))v4->destroyBodies)(&v4->hknpWorldWriter, &v5, 1i64);
    Sys_LeaveCriticalSection(CRITSECT_PHYS_BODY_CREATE);
  }
}

/*
==============
PhysicsVehicle_DestroyRigidBody
==============
*/
void PhysicsVehicle_DestroyRigidBody(Physics_WorldId worldId, unsigned int bodyId)
{
  ;
}

/*
==============
PhysicsVehicle_DestroyWorld
==============
*/
void PhysicsVehicle_DestroyWorld(Physics_WorldId worldId, BGVehicles *vehicleSystem)
{
  __int64 v3; 
  PhysisVehicleWorldData *v4; 
  hknpWorld *World; 
  hknpActionManager *ActionManager; 
  HavokPhysics_BroadphaseCollisionQueryResult **v7; 
  hknpAction action; 

  v3 = worldId;
  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 614, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( vehicleSystem->PhysicsIsSupportedWorld(vehicleSystem, (Physics_WorldId)v3) )
  {
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 275, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::OnDestroyWorld: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
    v4 = &ProxyWithPhysicsEngine::s_worldData[v3];
    HavokPhysics_RemoveModifier((Physics_WorldId)v3, &v4->m_massModifier);
    v4->m_massModifier.m_gameManifoldCallback = NULL;
    v4->m_massModifier.m_vehicleSystem = NULL;
    v4->m_massModifier.m_worldId = PHYSICS_WORLD_ID_INVALID;
    World = HavokPhysics_GetWorld((Physics_WorldId)v3);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 283, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    ActionManager = hknpWorld::getActionManager(World);
    if ( !ActionManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 88, ASSERT_TYPE_ASSERT, "(actionMgr)", (const char *)&queryFormat, "actionMgr") )
      __debugbreak();
    if ( (v4->m_action.m_worldId == PHYSICS_WORLD_ID_INVALID || !v4->m_action.m_vehicleSystem) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 89, ASSERT_TYPE_ASSERT, "(m_worldId != PHYSICS_WORLD_ID_INVALID && m_vehicleSystem != nullptr)", "%s\n\tPhysicsVehicleHavokAction: hasn't been registered properly", "m_worldId != PHYSICS_WORLD_ID_INVALID && m_vehicleSystem != nullptr") )
      __debugbreak();
    hknpActionManager::removeAction(ActionManager, &action);
    v4->m_action.m_worldId = PHYSICS_WORLD_ID_INVALID;
    v4->m_action.m_vehicleSystem = NULL;
    if ( !(_DWORD)v3 )
      GVehicles::PhysicsShutdown((GVehicles *)vehicleSystem);
  }
  v7 = &s_PhysicsQuery_BroadphaseTraceResults_0[v3];
  if ( *v7 )
  {
    Physics_FreeBroadphaseCollisionQueryResult(*v7);
    *v7 = NULL;
  }
}

/*
==============
PhysicsVehicle_GetBodyId
==============
*/
__int64 PhysicsVehicle_GetBodyId(Physics_WorldId worldId, int entityNumber)
{
  __int64 v2; 
  LocalClientNum_t LocalClientForWorld; 
  CG_PhysicsObject *v5; 
  unsigned int v6; 
  Physics_WorldId v7; 
  G_PhysicsObject *v8; 
  hknpBodyId result; 

  v2 = worldId;
  if ( worldId == PHYSICS_WORLD_ID_FIRST )
  {
    v8 = G_PhysicsObject_Get(entityNumber);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 293, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
      __debugbreak();
    v6 = v8->physicsInstances[0];
    if ( v6 != -1 )
    {
      v7 = PHYSICS_WORLD_ID_FIRST;
      goto LABEL_15;
    }
    return 0xFFFFFFi64;
  }
  if ( worldId != PHYSICS_WORLD_ID_CLIENT_FIRST && worldId != PHYSICS_WORLD_ID_CLIENT1_FIRST )
    return 0xFFFFFFi64;
  LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
  v5 = CG_PhysicsObject_Get(entityNumber, LocalClientForWorld);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 293, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
    __debugbreak();
  v6 = v5->physicsInstances[v2];
  if ( v6 == -1 )
    return 0xFFFFFFi64;
  v7 = (int)v2;
LABEL_15:
  HavokPhysics_GetRigidBodyID(&result, v7, v6, 0);
  return result.m_serialAndIndex;
}

/*
==============
PhysicsVehicle_GetBodyUserData
==============
*/
int PhysicsVehicle_GetBodyUserData(Physics_WorldId worldId, unsigned int bodyId)
{
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v5; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 875, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::WheelCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  v5 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))ConstWorld->world->getBody)(&ConstWorld->world->hknpWorldReader, bodyId);
  return truncate_cast<int,unsigned __int64>(*(unsigned int *)(v5 + 160));
}

/*
==============
PhysicsVehicle_GetBroadphaseCollisionResult
==============
*/
HavokPhysics_BroadphaseCollisionQueryResult *PhysicsVehicle_GetBroadphaseCollisionResult(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 638, ASSERT_TYPE_ASSERT, "(worldId < PHYSICS_WORLD_ID_COUNT)", (const char *)&queryFormat, "worldId < PHYSICS_WORLD_ID_COUNT") )
    __debugbreak();
  return s_PhysicsQuery_BroadphaseTraceResults_0[v1];
}

/*
==============
PhysicsVehicle_GetClosestPoints
==============
*/
void PhysicsVehicle_GetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  float v43; 
  Physics_GetClosestPointsExtendedData *v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  hkVector4f pointa; 
  hkQuaternionf v53; 
  char v55; 

  __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
  _RBP = point;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1073, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1074, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v44) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1075, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v44) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1076, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against body with null shape", "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
  {
LABEL_47:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1077, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
      __debugbreak();
  }
  _RBX = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_48;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_48;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
    goto LABEL_48;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v51 & 0x7F800000) == 2139095040 )
  {
LABEL_48:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1078, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1079, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1080, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1081, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1082, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid result", "result") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3d000000
    vmulss  xmm0, xmm6, dword ptr [rbp+0]
    vmulss  xmm2, xmm6, dword ptr [rbp+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+8]
    vmovss  xmm5, dword ptr [rbx]
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
    vmulss  xmm6, xmm6, [rsp+0B8h+maxDistance]
    vmovss  dword ptr [rsp+0B8h+point.m_quad], xmm0
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
    vmovss  dword ptr [rsp+0B8h+point.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovups xmmword ptr [rsp+0B8h+var_58.m_vec.m_quad], xmm0
    vmulps  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+0B8h+point.m_quad+8], xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmovss  dword ptr [rsp+0B8h+point.m_quad+0Ch], xmm2
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+0B8h+var_58.m_vec.m_quad], xmm1
  }
  switch ( worldId )
  {
    case PHYSICS_WORLD_ID_FIRST:
      Profile_Begin(752);
      break;
    case PHYSICS_WORLD_ID_SERVER_DETAIL:
      Profile_Begin(753);
      break;
    case PHYSICS_WORLD_ID_CLIENT_FIRST:
    case PHYSICS_WORLD_ID_CLIENT1_FIRST:
      Profile_Begin(754);
      break;
    case PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE:
    case PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE:
      Profile_Begin(755);
      break;
    case PHYSICS_WORLD_ID_CLIENT0_DETAIL:
    case PHYSICS_WORLD_ID_CLIENT1_DETAIL:
      Profile_Begin(756);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  __asm { vmovss  [rsp+0B8h+var_90], xmm6 }
  HavokPhysicsVehicle_GetClosestPoints(worldId, (hknpBodyId)bodyId, shape, &pointa, &v53, v43, extendedData, result);
  Profile_EndInternal(NULL);
  _R11 = &v55;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsVehicle_HasContentFlag
==============
*/
bool PhysicsVehicle_HasContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  hknpWorld *World; 

  World = HavokPhysics_GetWorld(worldId);
  return (contents & *(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getBody)(&World->hknpWorldReader, bodyId) + 108)) != 0;
}

/*
==============
PhysicsVehicle_IsActivationControlAlwaysActive
==============
*/
bool PhysicsVehicle_IsActivationControlAlwaysActive(Physics_WorldId worldId, unsigned int bodyId)
{
  hknpWorld *World; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 856, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysicsVehicle_GetActivationControl: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 860, ASSERT_TYPE_ASSERT, "(hkBodyId.isValid())", (const char *)&queryFormat, "hkBodyId.isValid()") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 863, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  return ((unsigned int (__fastcall *)(hknpWorldReader *, _QWORD))World->getBodyActivationControl)(&World->hknpWorldReader, bodyId) == 1;
}

/*
==============
PhysicsVehicle_IsDebugDrawing
==============
*/
bool PhysicsVehicle_IsDebugDrawing()
{
  return GVehicles::ms_gVehiclesSystem && GVehicles::ms_gVehiclesSystem->PhysicsIsDebugDrawing(GVehicles::ms_gVehiclesSystem);
}

/*
==============
PhysicsVehicle_IsPhysicsBodyIdValid
==============
*/
bool PhysicsVehicle_IsPhysicsBodyIdValid(Physics_WorldId worldId, unsigned int bodyId)
{
  hknpThreadSafeObjectPoolElement<hknpBody> *v2; 
  bool result; 

  result = 0;
  if ( bodyId != 0xFFFFFF && (bodyId & 0xFFFFFF) != 0xFFFFFF )
  {
    v2 = &HavokPhysics_GetConstWorld(worldId)->world->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF];
    if ( (v2->m_pod.m_id.m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF && v2->m_pod.m_motionId.m_value != 0x7FFFFFFF )
      return 1;
  }
  return result;
}

/*
==============
PhysicsVehicle_Load
==============
*/
void PhysicsVehicle_Load(SaveGame *save)
{
  if ( GVehicles::ms_gVehiclesSystem )
    GVehicles::ms_gVehiclesSystem->PhysicsLoad(GVehicles::ms_gVehiclesSystem, save);
}

/*
==============
PhysicsVehicle_Overlap_Shapes
==============
*/
bool PhysicsVehicle_Overlap_Shapes(Physics_WorldId worldId, unsigned int vehBodyId, const vec3_t *vehPos, const vec4_t *vehOrient, unsigned int otherBodyId)
{
  hknpShape *Shape; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool result; 
  float v18; 
  Physics_GetClosestPointsExtendedData extendedData; 
  PhysicsQuery_GetClosestPointsHit hit; 

  if ( !Physics_IsRigidBodyValid(worldId, otherBodyId) )
    return 0;
  if ( !Physics_IsRigidBodyValid(worldId, vehBodyId) )
    return 0;
  Shape = Physics_GetShape(worldId, vehBodyId);
  if ( !Shape )
    return 0;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  extendedData.contents = -1;
  __asm { vmovss  [rsp+0F8h+var_B8.collisionBuffer], xmm6 }
  extendedData.simplify = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  __asm
  {
    vmovss  xmm0, cs:maxDistance
    vmovss  [rsp+0F8h+var_D0], xmm0
  }
  PhysicsVehicle_GetClosestPoints(worldId, otherBodyId, Shape, vehPos, vehOrient, v18, &extendedData, ClosestResult);
  __asm { vxorps  xmm1, xmm1, xmm1; radius }
  PhysicsQuery_ExtractHitData(&vec3_origin, *(const float *)&_XMM1, ClosestResult, 0, &hit);
  result = hit.isValid;
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
  return result;
}

/*
==============
PhysicsVehicle_RemoveContentFlag
==============
*/
void PhysicsVehicle_RemoveContentFlag(Physics_WorldId worldId, unsigned int bodyId, int contents)
{
  hknpThreadSafeObjectPoolElement<hknpBody> *v4; 

  v4 = &HavokPhysics_GetWorld(worldId)->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF];
  v4->m_pod.m_collisionFilterInfo &= ~contents;
}

/*
==============
PhysicsVehicle_ResetNoGravity
==============
*/
void PhysicsVehicle_ResetNoGravity(Physics_WorldId worldId, unsigned int bodyId)
{
  hknpWorld *World; 

  World = HavokPhysics_GetWorld(worldId);
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64))World->setBodyMotionProperties)(&World->hknpWorldWriter, bodyId, 1i64);
}

/*
==============
PhysicsVehicle_SetActivationControl
==============
*/
void PhysicsVehicle_SetActivationControl(Physics_WorldId worldId, unsigned int bodyId, const bool *active)
{
  hknpWorld *World; 
  unsigned int v7; 
  __int64 v8; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 831, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::WheelCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 835, ASSERT_TYPE_ASSERT, "(hkBodyId.isValid())", (const char *)&queryFormat, "hkBodyId.isValid()") )
    __debugbreak();
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 838, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( active )
    v7 = 2 - *active;
  else
    v7 = 0;
  v8 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getBody)(&World->hknpWorldReader, bodyId);
  if ( !*(_DWORD *)(v8 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 844, ASSERT_TYPE_ASSERT, "( rb.m_motionId.value() >= hknpMotionId::NUM_PRESETS )", "PhysicsVehicle_SetActivationControl: Can't change activation policy on a body using a Havok Preset motion") )
    __debugbreak();
  if ( ((unsigned int (__fastcall *)(hknpWorldReader *, _QWORD))World->getBodyActivationControl)(&World->hknpWorldReader, bodyId) != v7 )
  {
    if ( *(_DWORD *)(v8 + 64) )
      ((void (__fastcall *)(hknpWorldWriter *, _QWORD, _QWORD))World->setBodyActivationControl)(&World->hknpWorldWriter, bodyId, v7);
  }
}

/*
==============
PhysicsVehicle_SetNoGravity
==============
*/
void PhysicsVehicle_SetNoGravity(Physics_WorldId worldId, unsigned int bodyId)
{
  hknpWorld *World; 

  World = HavokPhysics_GetWorld(worldId);
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64))World->setBodyMotionProperties)(&World->hknpWorldWriter, bodyId, 2i64);
}

/*
==============
PhysicsVehicle_SetSoftContacts
==============
*/
void PhysicsVehicle_SetSoftContacts(Physics_WorldId worldId, unsigned int bodyId, bool status)
{
  hknpWorldWriter *v5; 
  hknpWorldWriter_vtbl *v6; 

  v5 = &HavokPhysics_GetWorld(worldId)->hknpWorldWriter;
  v6 = v5->__vftable;
  if ( status )
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v6->enableBodyFlags)(v5, bodyId, 0x1000000i64, 0i64);
  else
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v6->disableBodyFlags)(v5, bodyId, 0x1000000i64, 0i64);
}

/*
==============
PhysicsVehicle_WheelCast
==============
*/

bool __fastcall PhysicsVehicle_WheelCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outRawFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  return ProxyWithPhysicsEngine::WheelCast(worldId, entityNumber, start, end, noiseAmp, outRawFrac, outHitPos, outHitNormal, outHitBody, outSurflags);
}

/*
==============
PhysicsVehicle_Write
==============
*/
void PhysicsVehicle_Write(MemoryFile *memFile)
{
  if ( GVehicles::ms_gVehiclesSystem )
    GVehicles::ms_gVehiclesSystem->PhysicsWrite(GVehicles::ms_gVehiclesSystem, memFile);
}

/*
==============
ProxyWithPhysicsEngine::WheelCast
==============
*/
_BOOL8 ProxyWithPhysicsEngine::WheelCast(Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, float *outRawFrac, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  unsigned int v19; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  unsigned int RaycastHitSurfFlags; 
  unsigned int RaycastHitBodyId; 
  char v27; 
  char v28; 
  int v39; 
  hkMemoryAllocator *v56; 
  hkMemoryAllocator *v57; 
  _BOOL8 result; 
  float fmt; 
  Physics_RaycastExtendedData extendedData; 
  float *v63; 
  vec3_t *v64; 
  vec3_t *normal; 
  unsigned int *v66; 
  HavokPhysics_IgnoreBodies v67; 
  __int64 v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v63 = outRawFrac;
  v64 = outHitPos;
  normal = outHitNormal;
  v66 = outHitBody;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 414, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::WheelCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v67, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v67, 0, entityNumber, 1, 1, 0, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+130h+extendedData.collisionBuffer], xmm6
  }
  v19 = 0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 41943857;
  extendedData.ignoreBodies = &v67;
  *outSurflags = 0;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 429, ASSERT_TYPE_ASSERT, "(wheelCastResult)", (const char *)&queryFormat, "wheelCastResult") )
    __debugbreak();
  do
  {
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
    if ( !HasHit )
      break;
    RaycastHitSurfFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
    *outSurflags |= RaycastHitSurfFlags * (1 - v19);
    if ( (RaycastHitSurfFlags & 0x1F80000) != 11010048 )
    {
      *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
      _RAX = v63;
      __asm { vmovss  dword ptr [rax], xmm0 }
      _RDI = v64;
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, v64);
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, normal);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      *v66 = RaycastHitBodyId;
      __asm
      {
        vmovss  xmm7, [rbp+3Fh+noiseAmp]
        vcomiss xmm7, cs:__real@3a83126f
      }
      if ( !(v27 | v28) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
          vsubss  xmm3, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
          vsubss  xmm2, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
          vmaxss  xmm0, xmm2, xmm3
          vcvttss2si ebx, xmm0
        }
        if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 462, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmaxss  xmm1, xmm1, xmm6
          vcvttss2si eax, xmm1
        }
        v39 = _EAX % _EBX;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vsubss  xmm1, xmm0, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
          vmaxss  xmm1, xmm1, xmm6
          vcvttss2si eax, xmm1
          vmovss  xmm0, cs:__real@3f266666
          vmovss  dword ptr [rsp+130h+fmt], xmm0
          vmovss  xmm2, cs:__real@3f800000; amplitude
          vmovss  xmm1, cs:?noiseFreq@?BL@??WheelCast@ProxyWithPhysicsEngine@@SA_NW4Physics_WorldId@@HAEBTvec3_t@@1MAEAMAEAT4@3AEAI4@Z@4MA; frequency
        }
        *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, *(float *)&_XMM1, *(float *)&_XMM2, 8, fmt, _EBX, v39, _EAX % _EBX);
        __asm
        {
          vmaxss  xmm1, xmm0, cs:__real@bf800000
          vminss  xmm2, xmm1, cs:__real@3f800000
          vmulss  xmm3, xmm2, xmm7
          vmulss  xmm0, xmm3, dword ptr [r14]
          vaddss  xmm1, xmm0, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+4]
          vaddss  xmm1, xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rdi+4], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+8]
          vaddss  xmm1, xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rdi+8], xmm1
        }
      }
      break;
    }
    HasHit = 0;
    extendedData.contents &= ~0x20u;
    ++v19;
  }
  while ( v19 < 2 );
  v56 = hkMemHeapAllocator();
  v67.m_ignoreBodies.m_size = 0;
  if ( v67.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v56, v67.m_ignoreBodies.m_data, 4, v67.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v67.m_ignoreBodies.m_data = NULL;
  v67.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v57 = hkMemHeapAllocator();
  v67.m_ignoreEntities.m_size = 0;
  if ( v67.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v57, v67.m_ignoreEntities.m_data, 8, v67.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  result = HasHit;
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+130h+var_58+8]
    vmovaps xmm7, [rsp+130h+var_68+8]
  }
  return result;
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getConstraintInfo
==============
*/
void HavokPhysicsVehiclePathConstraintData::getConstraintInfo(HavokPhysicsVehiclePathConstraintData *this, hkpConstraintData::ConstraintInfo *infoOut)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1242, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsVehiclePathConstraintData Not implemented") )
    __debugbreak();
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getRuntimeInfo
==============
*/
void HavokPhysicsVehiclePathConstraintData::getRuntimeInfo(HavokPhysicsVehiclePathConstraintData *this, hkBool wantRuntime, hkpConstraintData::RuntimeInfo *infoOut)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1249, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsVehiclePathConstraintData Not implemented") )
    __debugbreak();
}

/*
==============
HavokPhysicsVehiclePathConstraintData::isValid
==============
*/
hkBool *HavokPhysicsVehiclePathConstraintData::isValid(HavokPhysicsVehiclePathConstraintData *this, hkBool *result)
{
  hkBool *v3; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1234, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsVehiclePathConstraintData Not implemented") )
    __debugbreak();
  v3 = result;
  result->m_bool = 0;
  return v3;
}

/*
==============
HavokPhysicsVehiclePathConstraintData::updatePathPoint
==============
*/
void HavokPhysicsVehiclePathConstraintData::updatePathPoint(HavokPhysicsVehiclePathConstraintData *this)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1227, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsVehiclePathConstraintData Not implemented") )
    __debugbreak();
}

