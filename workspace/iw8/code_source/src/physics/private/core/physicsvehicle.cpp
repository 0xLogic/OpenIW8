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
__int64 PhysicsVehicleHavokAction::applyAction(PhysicsVehicleHavokAction *this, hknpWorld *world, float deltaTime)
{
  if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 65, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
    __debugbreak();
  if ( this->m_worldId == PHYSICS_WORLD_ID_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 66, ASSERT_TYPE_ASSERT, "(m_worldId != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "m_worldId != PHYSICS_WORLD_ID_INVALID") )
    __debugbreak();
  ((void (__fastcall *)(BGVehicles *, _QWORD))this->m_vehicleSystem->PhysicsOnWorldAction)(this->m_vehicleSystem, (unsigned int)this->m_worldId);
  return 0i64;
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
  int v8; 
  int v9; 
  const hknpBody *m_body; 
  unsigned int m_serialAndIndex; 
  const hknpBody *v13; 
  hknpManifoldCollisionCache *m_collisionCache; 
  __m128 v15; 
  int *v16; 
  __int64 *v17; 
  __int64 v18; 
  float *v19; 
  int *v20; 
  float v21; 
  float v22; 
  float v23; 
  _DWORD *v24; 
  int v25; 
  _DWORD v26[2]; 
  __int64 v27[2]; 
  __int64 v28; 
  __m256i *v30; 
  int *v31; 
  char v32; 
  float v33; 
  vec3_t outPos; 
  __m256i v35; 

  if ( this->m_gameManifoldCallback && !manifold->m_manifoldType.m_storage )
  {
    v8 = truncate_cast<int,unsigned __int64>(LODWORD(cdBodyA->m_body->m_userData));
    v9 = truncate_cast<int,unsigned __int64>(LODWORD(cdBodyB->m_body->m_userData));
    LOWORD(v25) = 0;
    v35 = _ymm;
    _XMM0.m_quad = (__m128)manifold->m_normal;
    v32 = 0;
    v30 = &v35;
    __asm
    {
      vmovlps [rbp+47h+var_C0], xmm0
      vextractps [rbp+47h+var_B8], xmm0, 2
    }
    v31 = &v25;
    m_body = cdBodyA->m_body;
    v33 = 0.0;
    m_serialAndIndex = m_body->m_id.m_serialAndIndex;
    v13 = cdBodyB->m_body;
    v26[0] = m_serialAndIndex;
    v26[1] = v13->m_id.m_serialAndIndex;
    PhysicsVehicleMassModifier::GetAverageHitPos(this, manifold, &outPos);
    if ( this->m_gameManifoldCallback(this->m_vehicleSystem, this->m_worldId, &outPos, v8, v9, v26, (BgVehiclePhysicsManifoldProcessInfo *)&v28) )
    {
      if ( v32 )
      {
        m_collisionCache = manifold->m_collisionCache;
        m_collisionCache->m_friction.m_value = HIWORD(v33);
        m_collisionCache->m_staticFrictionExtra.m_value = HIWORD(v33);
      }
      if ( (manifold->m_dataFields.m_storage & 2) == 0 )
      {
        v15 = g_vectorfConstants[6];
        *(__m128 *)manifold->m_scratch = g_vectorfConstants[6];
        *(__m128 *)&manifold->m_scratch[16] = v15;
        manifold->m_dataFields.m_storage = manifold->m_dataFields.m_storage & 0xF9 | 2;
      }
      v27[1] = (__int64)&manifold->m_scratch[16];
      v16 = &v25;
      v27[0] = (__int64)manifold->m_scratch;
      v17 = v27;
      v18 = 2i64;
      v19 = (float *)&v35.m256i_i32[1];
      v20 = &v35.m256i_i32[1];
      do
      {
        if ( *(_BYTE *)v16 )
        {
          if ( ((*(_DWORD *)(v19 - 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)v19 & 0x7F800000) == 2139095040 || ((_DWORD)v19[1] & 0x7F800000) == 2139095040 || ((_DWORD)v19[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 187, ASSERT_TYPE_SANITY, "( !IS_NAN( ( massFactors[bodyNdx] )[0] ) && !IS_NAN( ( massFactors[bodyNdx] )[1] ) && !IS_NAN( ( massFactors[bodyNdx] )[2] ) && !IS_NAN( ( massFactors[bodyNdx] )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( massFactors[bodyNdx] )[0] ) && !IS_NAN( ( massFactors[bodyNdx] )[1] ) && !IS_NAN( ( massFactors[bodyNdx] )[2] ) && !IS_NAN( ( massFactors[bodyNdx] )[3] )") )
            __debugbreak();
          v21 = *(v19 - 1);
          if ( v21 != -1.0 && (v21 < 0.0 || v21 >= `PhysicsVehicleMassModifier::manifoldProcessCallback'::`16'::SafeMassFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 188, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][0] == -1.0f || massFactors[bodyNdx][0] >= 0.0f && massFactors[bodyNdx][0] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][0] == -1.0f || massFactors[bodyNdx][0] >= 0.0f && massFactors[bodyNdx][0] < SafeMassFactor") )
            __debugbreak();
          if ( (*v19 < 0.0 || *v19 >= `PhysicsVehicleMassModifier::manifoldProcessCallback'::`16'::SafeMassFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 189, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][1] >= 0.0f && massFactors[bodyNdx][1] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][1] >= 0.0f && massFactors[bodyNdx][1] < SafeMassFactor") )
            __debugbreak();
          v22 = v19[1];
          if ( (v22 < 0.0 || v22 >= `PhysicsVehicleMassModifier::manifoldProcessCallback'::`16'::SafeMassFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 190, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][2] >= 0.0f && massFactors[bodyNdx][2] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][2] >= 0.0f && massFactors[bodyNdx][2] < SafeMassFactor") )
            __debugbreak();
          v23 = v19[2];
          if ( (v23 < 0.0 || v23 >= `PhysicsVehicleMassModifier::manifoldProcessCallback'::`16'::SafeMassFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 191, ASSERT_TYPE_ASSERT, "(massFactors[bodyNdx][3] >= 0.0f && massFactors[bodyNdx][3] < SafeMassFactor)", (const char *)&queryFormat, "massFactors[bodyNdx][3] >= 0.0f && massFactors[bodyNdx][3] < SafeMassFactor") )
            __debugbreak();
          v24 = (_DWORD *)*v17;
          *v24 = *(v20 - 1);
          v24[1] = *v20;
          v24[2] = v20[1];
          v24[3] = v20[2];
        }
        v16 = (int *)((char *)v16 + 1);
        v19 += 4;
        ++v17;
        v20 += 4;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      manifold->m_collisionCache->m_collisionFlags.m_storage |= 0x200u;
    }
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
  __int64 v3; 
  unsigned int v6; 
  unsigned int m_serialAndIndex; 
  hknpWorld *World; 
  const PhysicsAsset *InstanceAsset; 
  double RigidBodyDefaultMass; 
  hknpWorldWriter_vtbl *v12; 
  hknpWorld *v13; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v14; 
  hknpBodyId result; 

  v3 = worldId;
  if ( !vehiclePhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 329, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
    __debugbreak();
  if ( !mass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 330, ASSERT_TYPE_ASSERT, "(mass)", (const char *)&queryFormat, "mass") )
    __debugbreak();
  v6 = vehiclePhysicsObject->physicsInstances[v3];
  if ( v6 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 333, ASSERT_TYPE_ASSERT, "(vehiclePhysicsInstance != 0xFFFFFFFF)", "%s\n\tVehicle Physics can't find any physics to set up - is there a physics asset for the accompanying model?", "vehiclePhysicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    *mass = 0.0;
    return 0xFFFFFFi64;
  }
  else
  {
    if ( !Physics_GetNumRigidBodys((const Physics_WorldId)v3, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 341, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0)", "%s\n\tVehicle Physics can't find a rigid body for the chassis - the physics asset is probably broken", "Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0") )
      __debugbreak();
    HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, v6, 0);
    m_serialAndIndex = result.m_serialAndIndex;
    if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 343, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
    World = HavokPhysics_GetWorld((Physics_WorldId)v3);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 346, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v3, v6);
    RigidBodyDefaultMass = Physics_GetRigidBodyDefaultMass((Physics_WorldId)v3, InstanceAsset);
    v12 = World->hknpWorldWriter::__vftable;
    *mass = *(float *)&RigidBodyDefaultMass;
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v12->enableBodyFlags)(&World->hknpWorldWriter, m_serialAndIndex, 128i64, 0i64);
    Physics_ActivateBody((Physics_WorldId)v3, m_serialAndIndex);
    v13 = HavokPhysics_GetWorld((Physics_WorldId)v3);
    if ( (*(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v13->getBody)(&v13->hknpWorldReader, m_serialAndIndex) + 108) & 0x200) == 0 )
    {
      v14 = &HavokPhysics_GetWorld((Physics_WorldId)v3)->m_bodyManager.m_bodies.m_objects.m_data[m_serialAndIndex & 0xFFFFFF];
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
  __int64 v3; 
  unsigned int v6; 
  unsigned int m_serialAndIndex; 
  hknpWorld *World; 
  const PhysicsAsset *InstanceAsset; 
  double RigidBodyDefaultMass; 
  hknpWorldWriter_vtbl *v12; 
  hknpWorld *v13; 
  hknpThreadSafeObjectPoolElement<hknpBody> *v14; 
  hknpBodyId result; 

  v3 = worldId;
  if ( !vehiclePhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 329, ASSERT_TYPE_ASSERT, "(vehiclePhysicsObject)", (const char *)&queryFormat, "vehiclePhysicsObject") )
    __debugbreak();
  if ( !mass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 330, ASSERT_TYPE_ASSERT, "(mass)", (const char *)&queryFormat, "mass") )
    __debugbreak();
  v6 = vehiclePhysicsObject->physicsInstances[v3];
  if ( v6 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 333, ASSERT_TYPE_ASSERT, "(vehiclePhysicsInstance != 0xFFFFFFFF)", "%s\n\tVehicle Physics can't find any physics to set up - is there a physics asset for the accompanying model?", "vehiclePhysicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    *mass = 0.0;
    return 0xFFFFFFi64;
  }
  else
  {
    if ( !Physics_GetNumRigidBodys((const Physics_WorldId)v3, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 341, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0)", "%s\n\tVehicle Physics can't find a rigid body for the chassis - the physics asset is probably broken", "Physics_GetNumRigidBodys( worldId, vehiclePhysicsInstance ) > 0") )
      __debugbreak();
    HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, v6, 0);
    m_serialAndIndex = result.m_serialAndIndex;
    if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 343, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
    World = HavokPhysics_GetWorld((Physics_WorldId)v3);
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 346, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    InstanceAsset = Physics_GetInstanceAsset((Physics_WorldId)v3, v6);
    RigidBodyDefaultMass = Physics_GetRigidBodyDefaultMass((Physics_WorldId)v3, InstanceAsset);
    v12 = World->hknpWorldWriter::__vftable;
    *mass = *(float *)&RigidBodyDefaultMass;
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))v12->enableBodyFlags)(&World->hknpWorldWriter, m_serialAndIndex, 128i64, 0i64);
    Physics_ActivateBody((Physics_WorldId)v3, m_serialAndIndex);
    v13 = HavokPhysics_GetWorld((Physics_WorldId)v3);
    if ( (*(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v13->getBody)(&v13->hknpWorldReader, m_serialAndIndex) + 108) & 0x200) == 0 )
    {
      v14 = &HavokPhysics_GetWorld((Physics_WorldId)v3)->m_bodyManager.m_bodies.m_objects.m_data[m_serialAndIndex & 0xFFFFFF];
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
  double RaycastHitFraction; 
  __int128 v17; 
  int v19; 
  __int128 v21; 
  __int64 v23; 
  __int128 v25; 
  hkMemoryAllocator *v30; 
  hkMemoryAllocator *v31; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v34; 
  __int64 v35; 

  v35 = -2i64;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 489, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::BuoyancyCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v34, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v34, 0, entityNumber, 1, 1, 0, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 0;
  extendedData.contents = 32;
  extendedData.ignoreBodies = &v34;
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
    RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
    *outFrac = *(float *)&RaycastHitFraction;
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outHitPos);
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, outHitNormal);
    if ( noiseAmp > 0.001 )
    {
      v17 = LODWORD(cm.broadphaseMax.v[1]);
      *(float *)&v17 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
      _XMM2 = v17;
      __asm { vmaxss  xmm0, xmm2, xmm3 }
      v19 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 523, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
        __debugbreak();
      v21 = LODWORD(outHitPos->v[0]);
      *(float *)&v21 = outHitPos->v[0] - cm.broadphaseMin.v[0];
      _XMM1 = v21;
      __asm { vmaxss  xmm1, xmm1, xmm6 }
      LODWORD(v23) = (int)*(float *)&_XMM1;
      HIDWORD(v23) = (int)*(float *)&_XMM1 >> 31;
      v25 = LODWORD(outHitPos->v[1]);
      *(float *)&v25 = outHitPos->v[1] - cm.broadphaseMin.v[1];
      _XMM1 = v25;
      __asm { vmaxss  xmm1, xmm1, xmm6 }
      _XMM0 = LODWORD(FLOAT_0_64999998);
      *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, `ProxyWithPhysicsEngine::BuoyancyCast'::`22'::noiseFreq, 1.0, 8, 0.64999998, v19, v23 % v19, (int)*(float *)&_XMM1 % v19);
      __asm
      {
        vmaxss  xmm1, xmm0, cs:__real@bf800000
        vminss  xmm2, xmm1, cs:__real@3f800000
      }
      outHitPos->v[0] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * outHitNormal->v[0]) + outHitPos->v[0];
      outHitPos->v[1] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * outHitNormal->v[1]) + outHitPos->v[1];
      outHitPos->v[2] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * outHitNormal->v[2]) + outHitPos->v[2];
    }
  }
  v30 = hkMemHeapAllocator();
  v34.m_ignoreBodies.m_size = 0;
  if ( v34.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v30, v34.m_ignoreBodies.m_data, 4, v34.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v34.m_ignoreBodies.m_data = NULL;
  v34.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v31 = hkMemHeapAllocator();
  v34.m_ignoreEntities.m_size = 0;
  if ( v34.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v31, v34.m_ignoreEntities.m_data, 8, v34.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return NumHits;
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
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v18; 
  __int64 activate; 
  __int64 v28; 
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
      LODWORD(v28) = CgEntitySystem::ms_allocatedCount;
      LODWORD(activate) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", activate, v28) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v28) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v28) )
        __debugbreak();
    }
    v11 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(activate) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", activate, v28) )
        __debugbreak();
    }
    p_pose = &v11->m_entities[v6].pose;
    if ( !p_pose )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 395, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
    }
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, &position);
    if ( p_pose->isPosePrecise )
    {
      _XMM0 = LODWORD(position.v[0]);
      _XMM2 = LODWORD(position.v[1]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v18;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
      }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v18 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v18;
      _XMM2 = LODWORD(position.v[2]);
      position.v[0] = *(float *)&_XMM1;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
      }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v18 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v18;
      position.v[1] = *(float *)&_XMM1;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      position.v[2] = *(float *)&_XMM1;
    }
    angles = p_pose->angles;
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
  __int64 v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  float *v8; 
  unsigned __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  __int64 v16; 
  float *v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  float v23; 

  m_numPoints = manifold->m_numPoints;
  v4 = 0i64;
  *(_QWORD *)outPos->v = 0i64;
  outPos->v[2] = 0.0;
  v5 = 0i64;
  v6 = 0.0;
  v7 = 0i64;
  if ( m_numPoints >= 4 )
  {
    v8 = &manifold->m_positions[0].m_quad.m128_f32[2];
    v9 = ((unsigned __int64)(m_numPoints - 4) >> 2) + 1;
    v10 = 0.0;
    v4 = 4 * v9;
    do
    {
      v11 = (float)((float)(*(v8 - 2) + v8[2]) + v8[6]) + v8[10];
      v12 = 32.0 * *(v8 - 1);
      v13 = 32.0 * v8[7];
      v8 += 16;
      v6 = (float)(v11 * 32.0) + v10;
      v14 = v7;
      *(float *)&v14 = *(float *)&v7 + (float)((float)((float)((float)(32.0 * *(v8 - 13)) + v12) + v13) + (float)(32.0 * *(v8 - 5)));
      v7 = v14;
      v15 = v5;
      *(float *)&v15 = *(float *)&v5 + (float)((float)((float)((float)(32.0 * *(v8 - 12)) + (float)(32.0 * *(v8 - 16))) + (float)(32.0 * *(v8 - 8))) + (float)(32.0 * *(v8 - 4)));
      v5 = v15;
      v10 = v6;
      --v9;
    }
    while ( v9 );
    outPos->v[0] = v6;
    outPos->v[1] = *(float *)&v7;
    outPos->v[2] = *(float *)&v15;
  }
  if ( v4 < m_numPoints )
  {
    v16 = m_numPoints - v4;
    v17 = &manifold->m_positions[v4].m_quad.m128_f32[2];
    do
    {
      v6 = (float)(32.0 * *(v17 - 2)) + outPos->v[0];
      v18 = 32.0 * *(v17 - 1);
      v19 = 32.0 * *v17;
      v17 += 4;
      v20 = v7;
      *(float *)&v20 = *(float *)&v7 + v18;
      v7 = v20;
      outPos->v[0] = v6;
      v21 = v5;
      *(float *)&v21 = *(float *)&v5 + v19;
      v5 = v21;
      --v16;
    }
    while ( v16 );
    outPos->v[1] = *(float *)&v7;
    outPos->v[2] = *(float *)&v21;
  }
  if ( (int)m_numPoints > 1 )
  {
    v22 = 1.0 / (float)(int)m_numPoints;
    v23 = v22 * outPos->v[1];
    outPos->v[0] = v6 * v22;
    outPos->v[2] = v22 * outPos->v[2];
    outPos->v[1] = v23;
  }
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
  const hknpBody *v18; 
  const hknpShape *m_shape; 
  hkMonitorStream *Value; 
  hkMonitorStream *v21; 
  __int64 v22; 
  __int16 v23; 
  int contents; 
  float *v25; 
  hknpQueryFilterData targetShapeFilterDataIn; 
  hknpCollisionQueryContext queryContext; 
  hknpClosestPointsQuery queryIn; 
  hkQuaternionf *qi; 
  float v30; 
  __int64 v31; 
  int v32; 
  __int128 v33; 
  Physics_QueryPhaseSelection phaseSelection; 
  __int64 v35; 
  hknpShapeQueryInfo queryShapeInfo; 
  hknpShapeQueryInfo targetShapeInfo; 
  char v38[64]; 
  hknpInplaceTriangleShape v39; 

  v35 = -2i64;
  qi = (hkQuaternionf *)rotation;
  v23 = -1;
  contents = 0;
  v25 = NULL;
  _XMM1 = 0i64;
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v39, 0.0);
  queryContext.m_dispatcher = NULL;
  queryContext.m_queryTriangle = (hknpTriangleShape *)&v39;
  queryContext.m_targetTriangle = (hknpTriangleShape *)&v39;
  queryContext.m_initialCastFractionHint = 0.0;
  queryContext.m_externallyAllocatedTriangles = 1;
  queryShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  queryShapeInfo.m_shapeKeyPath.m_size = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&queryShapeInfo.m_body = _XMM0;
  queryShapeInfo.m_parentShape = NULL;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  *(_OWORD *)&queryShapeInfo.m_shapeToWorld = _XMM1;
  queryShapeInfo.m_scalingInternals.m_isScaled = 0;
  queryShapeInfo.m_scalingInternals.m_scale = (hkVector4f)_xmm;
  queryShapeInfo.m_scalingInternals.m_mode = 0;
  queryShapeInfo.m_scalingInternals.m_offset = 0i64;
  queryShapeInfo.m_scalingInternals.m_convexRadius = 0.0;
  targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  targetShapeInfo.m_shapeKeyPath.m_size = 0;
  *(_OWORD *)&targetShapeInfo.m_body = _XMM0;
  targetShapeInfo.m_parentShape = NULL;
  *(_OWORD *)&targetShapeInfo.m_shapeToWorld = _XMM1;
  targetShapeInfo.m_scalingInternals.m_isScaled = 0;
  targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)_xmm;
  targetShapeInfo.m_scalingInternals.m_mode = 0;
  targetShapeInfo.m_scalingInternals.m_offset = 0i64;
  targetShapeInfo.m_scalingInternals.m_convexRadius = 0.0;
  targetShapeFilterDataIn.m_materialId.m_value = -1;
  targetShapeFilterDataIn.m_collisionFilterInfo = 0;
  targetShapeFilterDataIn.m_userData = 0i64;
  v30 = 0.0;
  v31 = 0i64;
  v32 = 1;
  v33 = _XMM0;
  phaseSelection = All;
  queryIn.m_filterData.m_materialId.m_value = -1;
  queryIn.m_filterData.m_collisionFilterInfo = 0;
  queryIn.m_filterData.m_userData = 0i64;
  queryIn.m_filter = NULL;
  queryIn.m_shapeTagCodec = NULL;
  *(_DWORD *)queryIn.m_levelOfDetail = 2;
  queryIn.m_broadPhaseFilterMask = -5;
  queryIn.m_shape = NULL;
  queryIn.m_maxDistance = 0.0;
  queryIn.m_body = NULL;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1003, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to fire get closest points with body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1004, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to fire getclosest points with body with invalid body id %i", "bodyId.isValid()", v22) )
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
  v18 = (const hknpBody *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))ConstWorld->world->getBody)(&ConstWorld->world->hknpWorldReader, bodyId.m_serialAndIndex);
  m_shape = v18->m_shape;
  v30 = extendedData->collisionBuffer * 0.03125;
  *(_QWORD *)&v33 = extendedData->nonBrushShape;
  phaseSelection = extendedData->phaseSelection;
  v23 = -1;
  contents = extendedData->contents;
  v25 = &v30;
  if ( ConstWorld->traceCollisionFilter->isCollisionEnabled(ConstWorld->traceCollisionFilter, GET_CLOSEST_POINTS, (const hknpQueryFilterData *)&v23, v18) )
  {
    queryContext.m_dispatcher = ConstWorld->world->m_collisionQueryDispatcher;
    *(__m256i *)v38 = *(__m256i *)g_vectorfConstants[32].m128_f32;
    *(__m256i *)&v38[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
    hkRotationImpl<float>::set((hkRotationImpl<float> *)v38, qi);
    *(hkVector4f *)&v38[48] = (hkVector4f)point->m_quad;
    queryShapeInfo.m_rootShape = shape;
    queryShapeInfo.m_shapeToWorld = (const hkTransformf *)v38;
    targetShapeInfo.m_body = v18;
    targetShapeInfo.m_rootShape = v18->m_shape;
    targetShapeInfo.m_shapeToWorld = &v18->m_transform;
    targetShapeFilterDataIn.m_materialId.m_value = v18->m_materialId.m_value;
    targetShapeFilterDataIn.m_collisionFilterInfo = v18->m_collisionFilterInfo;
    targetShapeFilterDataIn.m_userData = v18->m_userData;
    queryIn.m_shape = shape;
    queryIn.m_maxDistance = maxDistance;
    queryIn.m_shapeTagCodec = &s_vehicleShapeTagCodec;
    queryIn.m_filter = ConstWorld->traceCollisionFilter;
    queryIn.m_filterData.m_collisionFilterInfo = extendedData->contents;
    queryIn.m_filterData.m_userData = (unsigned __int64)&v30;
    *(_DWORD *)queryIn.m_levelOfDetail = 0;
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtGetClosestPoints_Body_HK");
    hknpShapeQueryInterface::getClosestPoints(&queryContext, &queryIn, &queryShapeInfo, m_shape, &targetShapeFilterDataIn, &targetShapeInfo, Collector);
    v21 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    if ( v21 )
      hkMonitorStream::timerEnd(v21, "Et");
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

  if ( data->worldId == PHYSICS_WORLD_ID_FIRST )
  {
    Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, data->bodyIds[0]);
    v7 = Physics_GetRef(data->worldId, data->bodyIds[1]);
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
    Scr_AddFloat(v13, data->impulse);
    Scr_AddVector(v13, data->normal.v);
    Scr_AddVector(v13, data->position.v);
    Scr_AddInt(v13, data->surfaceFlagData[1]);
    Scr_AddInt(v13, data->surfaceFlagData[0]);
    Scr_AddInt(v13, data->bodyIds[1]);
    Scr_AddInt(v13, data->bodyIds[0]);
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
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  char v13; 

  v5 = atWs->v[0] - comWs->v[0];
  v6 = atWs->v[2] - comWs->v[2];
  v9 = atWs->v[1] - comWs->v[1];
  if ( angVelWs == (const vec3_t *)&v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  v10 = angVelWs->v[1];
  v11 = angVelWs->v[2];
  v12 = angVelWs->v[0];
  outPointVel->v[0] = (float)((float)(v6 * v10) - (float)(v9 * v11)) + linVelWs->v[0];
  outPointVel->v[1] = (float)((float)(v5 * v11) - (float)(v6 * v12)) + linVelWs->v[1];
  outPointVel->v[2] = (float)((float)(v9 * v12) - (float)(v5 * v10)) + linVelWs->v[2];
}

/*
==============
PhysicsVehicle_ComputeProjectedPointVelocity
==============
*/
float PhysicsVehicle_ComputeProjectedPointVelocity(const vec3_t *comWs, const vec3_t *angVelWs, const vec3_t *linVelWs, const vec3_t *atWs, const vec3_t *projVec)
{
  float v5; 
  float v6; 
  float v7; 
  char v11; 

  v5 = atWs->v[0] - comWs->v[0];
  v6 = atWs->v[2] - comWs->v[2];
  v7 = atWs->v[1] - comWs->v[1];
  if ( angVelWs == (const vec3_t *)&v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  return (float)((float)((float)((float)((float)(v5 * angVelWs->v[2]) - (float)(v6 * angVelWs->v[0])) + linVelWs->v[1]) * projVec->v[1]) + (float)((float)((float)((float)(v6 * angVelWs->v[1]) - (float)(v7 * angVelWs->v[2])) + linVelWs->v[0]) * projVec->v[0])) + (float)((float)((float)((float)(v7 * angVelWs->v[0]) - (float)(v5 * angVelWs->v[1])) + linVelWs->v[2]) * projVec->v[2]);
}

/*
==============
PhysicsVehicle_CreateAxleRigidBody
==============
*/
__int64 PhysicsVehicle_CreateAxleRigidBody(Physics_WorldId worldId, unsigned int chassisBodyId, const vec3_t *relA, const vec3_t *relB, float radius, int sides, float outPadding)
{
  int v11; 
  unsigned int v12; 
  hknpWorld *world; 
  __int64 v14; 
  hkVector4f v15; 
  hknpWorld *v16; 
  __int64 v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  int v32; 
  hkMemoryRouter *Value; 
  hknpCylinderShape *v34; 
  hknpShape *v35; 
  hknpShape *v36; 
  unsigned int v37; 
  __int64 v39; 
  __int64 v40; 
  hknpCylinderShape *v41; 
  hknpCylinderShape *v42; 
  __int64 v43; 
  hkVector4f posB; 
  hkVector4f posA; 
  hkQuaternionf v46; 
  hknpBodyCinfo v47; 

  v43 = -2i64;
  *(float *)&v41 = radius;
  v11 = sides;
  v12 = chassisBodyId & 0xFFFFFF;
  if ( (chassisBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 691, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( chassisBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( chassisBodyId )") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 363, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( v12 == 0xFFFFFF )
  {
    LODWORD(v39) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 364, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v39) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v39) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v39) )
      __debugbreak();
  }
  v14 = (__int64)&world->m_bodyManager.m_bodies.m_objects.m_data[chassisBodyId & 0xFFFFFF];
  v15.m_quad = *(__m128 *)(v14 + 48);
  hkQuaternionf::set(&v46, (const hkRotationImpl<float> *)v14);
  v16 = HavokPhysics_GetWorld(worldId);
  v17 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v16->getBody)(&v16->hknpWorldReader, chassisBodyId);
  hknpBodyCinfo::hknpBodyCinfo(&v47);
  v47.m_position = (hkVector4f)v15.m_quad;
  v47.m_orientation = (hkQuaternionf)v46.m_vec.m_quad;
  v47.m_motionType.m_storage = 1;
  v47.m_motionId.m_value = 0x7FFFFFFF;
  v47.m_qualityId.m_value = 0;
  v47.m_collisionFilterInfo = *(_DWORD *)(v17 + 108);
  v47.m_userData = *(_QWORD *)(v17 + 160);
  v47.m_collisionLookAheadDistance = 0.0;
  v47.m_mass = FLOAT_1_0;
  hkStringPtr::operator=(&v47.m_name, "axle");
  v18 = relB->v[0];
  v15.m_quad.m128_f32[0] = relB->v[0] - relA->v[0];
  v19 = LODWORD(relB->v[1]);
  v21 = v19;
  v20 = *(float *)&v19 - relA->v[1];
  v22 = relB->v[2];
  v23 = v22 - relA->v[2];
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v15.m_quad.m128_f32[0] * v15.m_quad.m128_f32[0])) + (float)(v23 * v23));
  _XMM3 = v21;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  *(float *)&v42 = *(float *)&_XMM1;
  *(float *)&_XMM3 = v15.m_quad.m128_f32[0] * (float)(1.0 / *(float *)&_XMM1);
  v27 = v20 * (float)(1.0 / *(float *)&_XMM1);
  v28 = v23 * (float)(1.0 / *(float *)&_XMM1);
  v29 = (float)(v27 * COERCE_FLOAT(LODWORD(outPadding) ^ _xmm)) + relA->v[1];
  v30 = (float)(v28 * COERCE_FLOAT(LODWORD(outPadding) ^ _xmm)) + relA->v[2];
  posA.m_quad.m128_f32[0] = (float)((float)(*(float *)&_XMM3 * COERCE_FLOAT(LODWORD(outPadding) ^ _xmm)) + relA->v[0]) * 0.03125;
  posA.m_quad.m128_f32[1] = v29 * 0.03125;
  posA.m_quad.m128_f32[2] = v30 * 0.03125;
  posA.m_quad.m128_f32[3] = 0.0;
  posB.m_quad.m128_f32[0] = (float)((float)(*(float *)&_XMM3 * outPadding) + v18) * 0.03125;
  posB.m_quad.m128_f32[1] = (float)((float)(v27 * outPadding) + *(float *)&v19) * 0.03125;
  posB.m_quad.m128_f32[2] = (float)((float)(v28 * outPadding) + v22) * 0.03125;
  posB.m_quad.m128_f32[3] = 0.0;
  if ( sides > 32 )
    v11 = 32;
  if ( v11 < 4 )
    v11 = 4;
  v31 = 0.03125 * *(float *)&v41;
  v32 = (((4 * v11 + 23) & 0xFFFFFFF0) + ((16 * v11 + 47) & 0xFFFFFFF0) + ((16 * ((2 * v11 + 3) & 0xFFFFFFFC) + 15) & 0xFFFFFFF0) + ((6 * v11 + 15) & 0xFFFFFFF0) + 143) & 0xFFFFFFF0;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v34 = (hknpCylinderShape *)hkMemoryAllocator::blockAlloc2(Value->m_heap, 1, v32);
  v42 = v34;
  v41 = v34;
  if ( v34 )
  {
    hknpCylinderShape::hknpCylinderShape(v34, &posA, &posB, v31, v11, 0.0099999998);
    v36 = v35;
  }
  else
  {
    v36 = NULL;
  }
  v36->m_memSizeAndFlags = v32;
  hkReferencedObject::addReference(v36);
  if ( v47.m_shape.m_ptr )
    hkReferencedObject::removeReference(&v47.m_shape.m_ptr->hkReferencedObject);
  v47.m_shape.m_ptr = v36;
  hkReferencedObject::removeReference(v36);
  Sys_EnterCriticalSection(CRITSECT_PHYS_BODY_CREATE);
  v16->allocateBody(&v16->hknpWorldWriter, (hknpBodyId *)&v40, &v47);
  Sys_LeaveCriticalSection(CRITSECT_PHYS_BODY_CREATE);
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, _QWORD, _QWORD))v16->addBody)(&v16->hknpWorldWriter, (unsigned int)v40, 0i64, 0i64);
  v37 = v40;
  if ( v47.m_localFrame.m_ptr )
    hkReferencedObject::removeReference(v47.m_localFrame.m_ptr);
  if ( v47.m_dragProperties.m_ptr )
    hkReferencedObject::removeReference(v47.m_dragProperties.m_ptr);
  if ( v47.m_massDistribution.m_ptr )
    hkReferencedObject::removeReference(v47.m_massDistribution.m_ptr);
  hkStringPtr::~hkStringPtr(&v47.m_name);
  if ( v47.m_shape.m_ptr )
    hkReferencedObject::removeReference(&v47.m_shape.m_ptr->hkReferencedObject);
  return v37;
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
void PhysicsVehicle_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int i; 
  CgVehicleSystem *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( GVehicles::ms_gVehiclesSystem )
    BGVehicles::PhysicsDrawDebug(GVehicles::ms_gVehiclesSystem, scrPlace, x, y, tabWidth, charHeight);
  for ( i = 0; i < 2; ++i )
  {
    if ( (int)i < CgVehicleSystem::ms_allocatedCount && CgVehicleSystem::ms_vehicleSystemArray[i] )
    {
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(v11) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v11) )
          __debugbreak();
      }
      if ( i >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v11) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v10) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[i] )
      {
        LODWORD(v11) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v11) )
          __debugbreak();
      }
      v9 = CgVehicleSystem::ms_vehicleSystemArray[i];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1298, ASSERT_TYPE_ASSERT, "(cgSystem)", (const char *)&queryFormat, "cgSystem") )
        __debugbreak();
      BGVehicles::PhysicsDrawDebug(v9, scrPlace, x, y, tabWidth, charHeight);
    }
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
  float v12; 
  float v13; 
  Physics_GetClosestPointsExtendedData *v20; 
  hkVector4f pointa; 
  hkQuaternionf v22; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1073, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1074, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1075, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v20) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1076, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against body with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1077, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1078, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1079, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1080, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1081, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1082, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid result", "result") )
    __debugbreak();
  v12 = 0.03125 * point->v[1];
  v13 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  pointa.m_quad.m128_f32[0] = 0.03125 * point->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  pointa.m_quad.m128_f32[1] = v12;
  pointa.m_quad.m128_f32[2] = v13;
  pointa.m_quad.m128_f32[3] = 0.0;
  v22.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
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
  HavokPhysicsVehicle_GetClosestPoints(worldId, (hknpBodyId)bodyId, shape, &pointa, &v22, 0.03125 * maxDistance, extendedData, result);
  Profile_EndInternal(NULL);
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
  Physics_GetClosestPointsExtendedData extendedData; 
  PhysicsQuery_GetClosestPointsHit hit; 

  if ( !Physics_IsRigidBodyValid(worldId, otherBodyId) )
    return 0;
  if ( !Physics_IsRigidBodyValid(worldId, vehBodyId) )
    return 0;
  Shape = Physics_GetShape(worldId, vehBodyId);
  if ( !Shape )
    return 0;
  extendedData.contents = -1;
  extendedData.collisionBuffer = 0.0;
  extendedData.simplify = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  PhysicsVehicle_GetClosestPoints(worldId, otherBodyId, Shape, vehPos, vehOrient, maxDistance, &extendedData, ClosestResult);
  PhysicsQuery_ExtractHitData(&vec3_origin, 0.0, ClosestResult, 0, &hit);
  return hit.isValid;
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
  unsigned int v14; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  unsigned int RaycastHitSurfFlags; 
  double RaycastHitFraction; 
  vec3_t *v19; 
  vec3_t *v20; 
  unsigned int RaycastHitBodyId; 
  __int128 v23; 
  int v25; 
  __int128 v27; 
  __int64 v29; 
  __int128 v31; 
  hkMemoryAllocator *v36; 
  hkMemoryAllocator *v37; 
  Physics_RaycastExtendedData extendedData; 
  float *v40; 
  vec3_t *v41; 
  vec3_t *normal; 
  unsigned int *v43; 
  HavokPhysics_IgnoreBodies v44; 
  __int64 v45; 

  v45 = -2i64;
  v40 = outRawFrac;
  v41 = outHitPos;
  normal = outHitNormal;
  v43 = outHitBody;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 414, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tProxyWithPhysicsEngine::WheelCast: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v44, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v44, 0, entityNumber, 1, 1, 0, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  v14 = 0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 41943857;
  extendedData.ignoreBodies = &v44;
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
    *outSurflags |= RaycastHitSurfFlags * (1 - v14);
    if ( (RaycastHitSurfFlags & 0x1F80000) != 11010048 )
    {
      RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
      *v40 = *(float *)&RaycastHitFraction;
      v19 = v41;
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, v41);
      v20 = normal;
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, normal);
      RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
      *v43 = RaycastHitBodyId;
      if ( noiseAmp > 0.001 )
      {
        v23 = LODWORD(cm.broadphaseMax.v[1]);
        *(float *)&v23 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
        _XMM2 = v23;
        __asm { vmaxss  xmm0, xmm2, xmm3 }
        v25 = (int)*(float *)&_XMM0;
        if ( (int)*(float *)&_XMM0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 462, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
          __debugbreak();
        v27 = LODWORD(v19->v[0]);
        *(float *)&v27 = v19->v[0] - cm.broadphaseMin.v[0];
        _XMM1 = v27;
        __asm { vmaxss  xmm1, xmm1, xmm6 }
        LODWORD(v29) = (int)*(float *)&_XMM1;
        HIDWORD(v29) = (int)*(float *)&_XMM1 >> 31;
        v31 = LODWORD(v19->v[1]);
        *(float *)&v31 = v19->v[1] - cm.broadphaseMin.v[1];
        _XMM1 = v31;
        __asm { vmaxss  xmm1, xmm1, xmm6 }
        _XMM0 = LODWORD(FLOAT_0_64999998);
        *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, `ProxyWithPhysicsEngine::WheelCast'::`27'::noiseFreq, 1.0, 8, 0.64999998, v25, v29 % v25, (int)*(float *)&_XMM1 % v25);
        __asm
        {
          vmaxss  xmm1, xmm0, cs:__real@bf800000
          vminss  xmm2, xmm1, cs:__real@3f800000
        }
        v19->v[0] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * v20->v[0]) + v19->v[0];
        v19->v[1] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * v20->v[1]) + v19->v[1];
        v19->v[2] = (float)((float)(*(float *)&_XMM2 * noiseAmp) * v20->v[2]) + v19->v[2];
      }
      break;
    }
    HasHit = 0;
    extendedData.contents &= ~0x20u;
    ++v14;
  }
  while ( v14 < 2 );
  v36 = hkMemHeapAllocator();
  v44.m_ignoreBodies.m_size = 0;
  if ( v44.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v36, v44.m_ignoreBodies.m_data, 4, v44.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v44.m_ignoreBodies.m_data = NULL;
  v44.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v37 = hkMemHeapAllocator();
  v44.m_ignoreEntities.m_size = 0;
  if ( v44.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v37, v44.m_ignoreEntities.m_data, 8, v44.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
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

