/*
==============
BgVehicleCollisionSystem::ActivateBodies
==============
*/

void __fastcall BgVehicleCollisionSystem::ActivateBodies(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?ActivateBodies@BgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionSystem::UpdateVehicleMassProperties
==============
*/

void __fastcall BgVehicleCollisionSystem::UpdateVehicleMassProperties(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?UpdateVehicleMassProperties@BgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsPhysicsVehicle
==============
*/

bool __fastcall BgVehicleCollisionCallbackInfo::IsPhysicsVehicle(BgVehicleCollisionCallbackInfo *this, unsigned int index)
{
  return ?IsPhysicsVehicle@BgVehicleCollisionCallbackInfo@@QEBA_NI@Z(this, index);
}

/*
==============
BgVehicleCollisionSystem::StuntManagerProcess
==============
*/

void __fastcall BgVehicleCollisionSystem::StuntManagerProcess(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?StuntManagerProcess@BgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsVehicle
==============
*/

bool __fastcall BgVehicleCollisionCallbackInfo::IsVehicle(BgVehicleCollisionCallbackInfo *this, unsigned int index)
{
  return ?IsVehicle@BgVehicleCollisionCallbackInfo@@QEBA_NI@Z(this, index);
}

/*
==============
BgVehicleCollisionSystem::PhysicsCollisionCallback
==============
*/

bool __fastcall BgVehicleCollisionSystem::PhysicsCollisionCallback(BGVehicles *vehicleSystem, Physics_WorldId worldId, const vec3_t *hitPos, int bodyAUserData, int bodyBUserData, const unsigned int *bodyIds, BgVehiclePhysicsManifoldProcessInfo *outManifoldInfo)
{
  return ?PhysicsCollisionCallback@BgVehicleCollisionSystem@@KA_NPEAVBGVehicles@@W4Physics_WorldId@@AEBTvec3_t@@HHPEBIPEAUBgVehiclePhysicsManifoldProcessInfo@@@Z(vehicleSystem, worldId, hitPos, bodyAUserData, bodyBUserData, bodyIds, outManifoldInfo);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsServer
==============
*/

bool __fastcall BgVehicleCollisionCallbackInfo::IsServer(BgVehicleCollisionCallbackInfo *this)
{
  return ?IsServer@BgVehicleCollisionCallbackInfo@@QEBA_NXZ(this);
}

/*
==============
BgVehicleCollisionSystem::CollisionCallback
==============
*/

void __fastcall BgVehicleCollisionSystem::CollisionCallback(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionCallback@BgVehicleCollisionSystem@@QEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsClient
==============
*/

bool __fastcall BgVehicleCollisionCallbackInfo::IsClient(BgVehicleCollisionCallbackInfo *this)
{
  return ?IsClient@BgVehicleCollisionCallbackInfo@@QEBA_NXZ(this);
}

/*
==============
BgVehicleCollisionSystem::CollisionVehicleVsVehicle
==============
*/

void __fastcall BgVehicleCollisionSystem::CollisionVehicleVsVehicle(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionVehicleVsVehicle@BgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionSystem::UpdateVehicleCollisionInfo
==============
*/

void __fastcall BgVehicleCollisionSystem::UpdateVehicleCollisionInfo(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?UpdateVehicleCollisionInfo@BgVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
BgVehicleCollisionSystem::PhysicsGetCollisionCallback
==============
*/

bool (__fastcall *__fastcall BgVehicleCollisionSystem::PhysicsGetCollisionCallback(BgVehicleCollisionSystem *this, Physics_WorldId __formal))(BGVehicles *, Physics_WorldId, const vec3_t *, int, int, const unsigned int *, BgVehiclePhysicsManifoldProcessInfo *)
{
  return ?PhysicsGetCollisionCallback@BgVehicleCollisionSystem@@QEAAP6A_NPEAVBGVehicles@@W4Physics_WorldId@@AEBTvec3_t@@HHPEBIPEAUBgVehiclePhysicsManifoldProcessInfo@@@Z1@Z(this, __formal);
}

/*
==============
BgVehicleCollisionSystem::ActivateBodies
==============
*/
void BgVehicleCollisionSystem::ActivateBodies(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  unsigned int *vehIds; 
  BgVehiclePhysicsManager *v4; 
  BgVehiclePhysics **vehObjs; 
  unsigned int *v6; 
  entityType_s *v7; 
  __int64 i; 
  unsigned int v9; 
  const BgVehiclePhysics *v10; 
  BgVehiclePhysics *v11; 
  unsigned int v12; 
  BgVehiclePhysics *v13; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsDeferredActionManager *p_m_deferActionMgr; 

  vehIds = inOutCollInfo->vehIds;
  v4 = inOutCollInfo->vehicleSystem->PhysicsGetVehiclePhysicsManager(inOutCollInfo->vehicleSystem);
  vehObjs = inOutCollInfo->vehObjs;
  v6 = inOutCollInfo->vehIds;
  v7 = &inOutCollInfo->entityTypes[1];
  for ( i = 1i64; i > -1; --i )
  {
    if ( BGVehicles::PhysicsIsValid(*v6) )
    {
      v9 = vehIds[i];
      v10 = *vehObjs;
      if ( BGVehicles::PhysicsIsValid(v9) && (v11 = BgVehiclePhysicsManager::GetObjectById(v4, v9), BgVehiclePhysics::IsDynamic(v11)) || *v7 == ET_MISSILE || *v7 == ET_SCRIPTMOVER && (v12 = inOutCollInfo->bodyIds[i], v12 != 0xFFFFFF) && Physics_IsRigidBodyKeyframed(inOutCollInfo->worldId, v12) && v10 && !inOutCollInfo->vehicleSystem->PhysicsVehicleHasAnim(inOutCollInfo->vehicleSystem, v10) )
      {
        v13 = *vehObjs;
        if ( *vehObjs )
        {
          if ( BgVehiclePhysics::IsKeyframed(*vehObjs) && v13->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            ObjectById = BgVehiclePhysicsManager::GetObjectById(v4, *v6);
            if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 93, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
              __debugbreak();
            if ( BgVehiclePhysics::IsKeyframed(ObjectById) && ObjectById->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              p_m_deferActionMgr = &ObjectById->m_deferActionMgr;
              if ( !p_m_deferActionMgr && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                __debugbreak();
              p_m_deferActionMgr->actionBits[0] |= 8u;
            }
          }
        }
      }
      vehIds = inOutCollInfo->vehIds;
    }
    ++vehObjs;
    ++v6;
    --v7;
  }
}

/*
==============
BgVehicleCollisionSystem::CollisionCallback
==============
*/
void BgVehicleCollisionSystem::CollisionCallback(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ((void (__fastcall *)(BgVehicleCollisionSystem *))this->CollisionFiltering)(this);
  if ( !inOutCollInfo->filterCollision && inOutCollInfo->continueCollision )
  {
    BgVehicleCollisionSystem::ActivateBodies(this, inOutCollInfo);
    if ( !inOutCollInfo->filterCollision && inOutCollInfo->continueCollision )
    {
      this->CollisionScriptables(this, inOutCollInfo);
      if ( !inOutCollInfo->filterCollision && inOutCollInfo->continueCollision )
      {
        BgVehicleCollisionSystem::UpdateVehicleCollisionInfo(this, inOutCollInfo);
        if ( !inOutCollInfo->filterCollision && inOutCollInfo->continueCollision )
        {
          BgVehicleCollisionSystem::CollisionVehicleVsVehicle(this, inOutCollInfo);
          if ( !inOutCollInfo->filterCollision && inOutCollInfo->continueCollision )
            BgVehicleCollisionSystem::UpdateVehicleMassProperties(this, inOutCollInfo);
        }
      }
    }
  }
}

/*
==============
BgVehicleCollisionSystem::CollisionVehicleVsVehicle
==============
*/
void BgVehicleCollisionSystem::CollisionVehicleVsVehicle(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  __int64 v3; 
  int v4; 
  BgVehiclePhysics *v5; 
  int v6; 
  unsigned int m_vehicleAnimProfile; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  BgVehiclePhysics **v11; 
  __int64 v12; 
  BgVehiclePhysics *v13; 
  unsigned int v14; 
  unsigned int PhysicsBodyId; 
  double NormalSpeedPlane; 
  float v18; 
  float v19; 
  __int128 v21; 
  BgVehiclePhysics *v24; 
  BgVehiclePhysics *v25; 
  tmat44_t<vec4_t> outIwTransform; 

  if ( inOutCollInfo->vehicleCount == 2 && BGVehicles::PhysicsIsValid(inOutCollInfo->vehIds[0]) && BGVehicles::PhysicsIsValid(inOutCollInfo->vehIds[1]) )
  {
    if ( !inOutCollInfo->vehObjs[0]->SupportsFeature(inOutCollInfo->vehObjs[0], VPFEAT_GROUND_VEHICLE) || !inOutCollInfo->vehObjs[1]->SupportsFeature(inOutCollInfo->vehObjs[1], VPFEAT_GROUND_VEHICLE) )
    {
LABEL_58:
      inOutCollInfo->continueCollision = 0;
      return;
    }
    v3 = tls_index;
    if ( dword_148BD293C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_148BD293C);
      if ( dword_148BD293C == -1 )
      {
        heavyMassFac = (vec4_t)_xmm;
        j__Init_thread_footer(&dword_148BD293C);
      }
    }
    if ( dword_148BD2954 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 1772i64) )
    {
      j__Init_thread_header(&dword_148BD2954);
      if ( dword_148BD2954 == -1 )
      {
        lightMassContFac = (vec4_t)_xmm;
        j__Init_thread_footer(&dword_148BD2954);
      }
    }
    v4 = 0;
    v5 = inOutCollInfo->vehObjs[1];
    v6 = 720916;
    v24 = inOutCollInfo->vehObjs[0];
    v25 = v5;
    m_vehicleAnimProfile = v24->m_vehicleAnimProfile;
    if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v6, m_vehicleAnimProfile) )
    {
      v8 = 0;
    }
    else
    {
      v9 = v5->m_vehicleAnimProfile;
      if ( v9 <= 0x13 && _bittest(&v6, v9) )
      {
        v8 = 1;
      }
      else if ( !m_vehicleAnimProfile || m_vehicleAnimProfile == 24 || v9 && v9 != 24 )
      {
        if ( !v9 || v9 == 24 || m_vehicleAnimProfile && m_vehicleAnimProfile != 24 )
          v8 = -1;
        else
          v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( m_vehicleAnimProfile && m_vehicleAnimProfile != 24 )
    {
      v10 = v5->m_vehicleAnimProfile;
      if ( !v10 || v10 == 24 )
        goto LABEL_38;
      if ( v10 <= 0x13 && _bittest(&v6, v10) )
        goto LABEL_39;
      if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v6, m_vehicleAnimProfile) )
LABEL_38:
        v4 = 1;
      else
        v4 = -1;
    }
LABEL_39:
    if ( v8 != -1 )
    {
      inOutCollInfo->outInertiaMassFactors[v8] = heavyMassFac;
      inOutCollInfo->outUpdateBody[v8] = 1;
    }
    if ( v4 != -1 )
    {
      inOutCollInfo->outInertiaMassFactors[v4] = lightMassContFac;
      inOutCollInfo->outUpdateBody[v4] = 1;
    }
    v11 = &v24;
    v12 = 2i64;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        v14 = v13->m_vehicleAnimProfile;
        if ( v14 > 0x13 || !_bittest(&v6, v14) )
        {
          if ( BgVehiclePhysics::IsPhysicsBodyIdValid(*v11) )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v13);
            Physics_GetRigidBodyTransform((const Physics_WorldId)v13->m_worldId, PhysicsBodyId, &outIwTransform);
          }
          *((_QWORD *)&_XMM0 + 1) = 0i64;
          if ( (float)((float)((float)((float)(inOutCollInfo->hitPos.v[1] - outIwTransform.m[3].v[1]) * outIwTransform.m[0].v[1]) + (float)((float)(inOutCollInfo->hitPos.v[0] - outIwTransform.m[3].v[0]) * outIwTransform.m[0].v[0])) + (float)((float)(inOutCollInfo->hitPos.v[2] - outIwTransform.m[3].v[2]) * outIwTransform.m[0].v[2])) <= 0.0 )
          {
            if ( v13->m_playerControlled )
            {
              NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(v13);
            }
            else
            {
              v18 = v13->m_history.m_lastLinearVel.v[1];
              v19 = v13->m_history.m_lastLinearVel.v[0];
              *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(v13);
              __asm { vmaxss  xmm0, xmm0, xmm13 }
              NormalSpeedPlane = I_fclamp(fsqrt((float)(v19 * v19) + (float)(v18 * v18)) * (float)(1.0 / *(float *)&_XMM0), 0.0, 1.0);
            }
            v13[3].m_centerOfMassWs.v[0] = *(float *)&NormalSpeedPlane * 0.5;
            v21 = LODWORD(FLOAT_1_0);
            *(float *)&v21 = (float)((float)(1.0 - *(float *)&NormalSpeedPlane) * v13[3].m_centerOfMassWs.v[1]) + (float)(*(float *)&NormalSpeedPlane * 0.40000001);
            _XMM6 = v21;
            if ( *(float *)&v21 >= 5.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 479, ASSERT_TYPE_ASSERT, "(fricValue < 5.0f)", (const char *)&queryFormat, "fricValue < 5.0f", v24, v25) )
              __debugbreak();
            __asm { vmaxss  xmm0, xmm6, xmm8 }
            v13[3].m_centerOfMassWs.v[1] = *(float *)&_XMM0;
          }
        }
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    goto LABEL_58;
  }
}

/*
==============
BgVehicleCollisionCallbackInfo::IsClient
==============
*/
bool BgVehicleCollisionCallbackInfo::IsClient(BgVehicleCollisionCallbackInfo *this)
{
  return Physics_IsPredictiveWorld(this->worldId);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsPhysicsVehicle
==============
*/
bool BgVehicleCollisionCallbackInfo::IsPhysicsVehicle(BgVehicleCollisionCallbackInfo *this, unsigned int index)
{
  __int64 v2; 
  int v6; 

  v2 = index;
  if ( index >= 2 )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 16, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index 2\n\t%i not in [0, %i)", index, v6) )
      __debugbreak();
  }
  return BGVehicles::PhysicsIsValid(this->vehIds[v2]);
}

/*
==============
BgVehicleCollisionCallbackInfo::IsServer
==============
*/
bool BgVehicleCollisionCallbackInfo::IsServer(BgVehicleCollisionCallbackInfo *this)
{
  return this->worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL;
}

/*
==============
BgVehicleCollisionCallbackInfo::IsVehicle
==============
*/
bool BgVehicleCollisionCallbackInfo::IsVehicle(BgVehicleCollisionCallbackInfo *this, unsigned int index)
{
  __int64 v2; 
  bool result; 
  __int64 v5; 
  __int64 v6; 

  v2 = index;
  if ( index >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 9, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index 2\n\t%i not in [0, %i)", index, 2) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 16, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index 2\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  result = BGVehicles::PhysicsIsValid(this->vehIds[v2]);
  if ( result || this->suspended[v2] )
    return 1;
  return result;
}

/*
==============
BgVehicleCollisionSystem::PhysicsCollisionCallback
==============
*/
char BgVehicleCollisionSystem::PhysicsCollisionCallback(BGVehicles *vehicleSystem, Physics_WorldId worldId, const vec3_t *hitPos, int bodyAUserData, int bodyBUserData, const unsigned int *bodyIds, BgVehiclePhysicsManifoldProcessInfo *outManifoldInfo)
{
  BGVehicles *v8; 
  __int64 v11; 
  double v12; 
  entityType_s *entityTypes; 
  vec4_t *inertiaMassFactors; 
  unsigned int v15; 
  bool *updateInertiaFactor; 
  double v17; 
  bool *suspended; 
  BgVehiclePhysics **vehObjs; 
  unsigned int *vehIds; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  bool IsValid; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  BgVehicleCollisionSystem *v31; 
  bool v32; 
  BgVehiclePhysics **v33; 
  __int64 v34; 
  BgVehiclePhysics *v35; 
  __int64 v36; 
  __int128 v37; 
  __int128 v39; 
  __int128 v41; 
  __int64 v44; 
  __int64 v45; 
  _BOOL8 v46; 
  __int64 v47; 
  __int64 v48; 
  BGVehicles *v49; 
  BgVehiclePhysicsManifoldProcessInfo *v50; 
  BgVehicleCollisionCallbackInfo inOutCollInfo; 

  v8 = vehicleSystem;
  v49 = vehicleSystem;
  v50 = outManifoldInfo;
  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 121, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( (!outManifoldInfo || !outManifoldInfo->inertiaMassFactors || !outManifoldInfo->updateInertiaFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 122, ASSERT_TYPE_ASSERT, "(outManifoldInfo && outManifoldInfo->inertiaMassFactors && outManifoldInfo->updateInertiaFactor)", (const char *)&queryFormat, "outManifoldInfo && outManifoldInfo->inertiaMassFactors && outManifoldInfo->updateInertiaFactor") )
    __debugbreak();
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 123, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  v11 = (__int64)v8->PhysicsGetVehiclePhysicsManager(v8);
  v12 = *(double *)hitPos->v;
  entityTypes = inOutCollInfo.entityTypes;
  inOutCollInfo.bodyUserData[1] = bodyBUserData;
  inertiaMassFactors = outManifoldInfo->inertiaMassFactors;
  v48 = v11;
  *(float *)&v11 = hitPos->v[2];
  v15 = 0;
  inOutCollInfo.outInertiaMassFactors = inertiaMassFactors;
  updateInertiaFactor = outManifoldInfo->updateInertiaFactor;
  *(double *)inOutCollInfo.hitPos.v = v12;
  v17 = *(double *)outManifoldInfo->normal.v;
  LODWORD(inOutCollInfo.hitPos.v[2]) = v11;
  *(float *)&v11 = outManifoldInfo->normal.v[2];
  inOutCollInfo.worldId = worldId;
  suspended = inOutCollInfo.suspended;
  inOutCollInfo.bodyUserData[0] = bodyAUserData;
  vehObjs = inOutCollInfo.vehObjs;
  inOutCollInfo.bodyIds = bodyIds;
  vehIds = inOutCollInfo.vehIds;
  inOutCollInfo.outUpdateBody = updateInertiaFactor;
  inOutCollInfo.vehicleSystem = v8;
  inOutCollInfo.filterCollision = 0;
  *(double *)inOutCollInfo.normal.v = v17;
  LODWORD(inOutCollInfo.normal.v[2]) = v11;
  v47 = 2i64;
  do
  {
    *vehIds = v8->PhysicsExtractIdFromPhysicsUserData(v8, *(vehIds - 3), entityTypes, (bool *)&v46);
    *suspended = v46;
    if ( BGVehicles::PhysicsIsValid(*vehIds) )
    {
      v21 = *vehIds;
      if ( !BGVehicles::PhysicsIsValid(*vehIds) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v22 = v21 - 1;
      if ( v22 >= 0x80 )
      {
        LODWORD(v45) = 128;
        LODWORD(v44) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
      }
      v23 = v22;
      v8 = v49;
      v24 = 3360 * v23 + v48 + 8;
    }
    else
    {
      v24 = 0i64;
    }
    *vehObjs = (BgVehiclePhysics *)v24;
    ++v15;
    ++vehObjs;
    ++entityTypes;
    ++suspended;
    ++vehIds;
  }
  while ( v15 < 2 );
  inOutCollInfo.continueCollision = 1;
  IsValid = BGVehicles::PhysicsIsValid(inOutCollInfo.vehIds[0]);
  v26 = 1;
  v27 = (__int64)v50;
  if ( IsValid || inOutCollInfo.suspended[0] )
  {
    v29 = 1;
    v28 = 0;
  }
  else
  {
    v28 = 0;
    v29 = 0;
  }
  if ( BGVehicles::PhysicsIsValid(inOutCollInfo.vehIds[1]) || inOutCollInfo.suspended[1] )
    v28 = 1;
  inOutCollInfo.vehicleCount = v28 + v29;
  if ( v28 + v29 )
  {
    v31 = v8->PhysicsGetCollisionSystem(v8);
    v31->CollisionFiltering(v31, &inOutCollInfo);
    v32 = !inOutCollInfo.filterCollision;
    if ( !inOutCollInfo.filterCollision )
    {
      if ( !inOutCollInfo.continueCollision )
        goto LABEL_43;
      BgVehicleCollisionSystem::ActivateBodies(v31, &inOutCollInfo);
      v32 = !inOutCollInfo.filterCollision;
      if ( !inOutCollInfo.filterCollision )
      {
        if ( !inOutCollInfo.continueCollision )
          goto LABEL_43;
        v31->CollisionScriptables(v31, &inOutCollInfo);
        v32 = !inOutCollInfo.filterCollision;
        if ( !inOutCollInfo.filterCollision )
        {
          if ( !inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::UpdateVehicleCollisionInfo(v31, &inOutCollInfo), v32 = !inOutCollInfo.filterCollision) && (!inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::CollisionVehicleVsVehicle(v31, &inOutCollInfo), v32 = !inOutCollInfo.filterCollision) && (!inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::UpdateVehicleMassProperties(v31, &inOutCollInfo), v32 = !inOutCollInfo.filterCollision))) )
          {
LABEL_43:
            v33 = inOutCollInfo.vehObjs;
            v34 = 2i64;
            do
            {
              if ( *v33 )
              {
                if ( (*v33)->SupportsFeature(*v33, VPFEAT_GROUND_VEHICLE) )
                {
                  v35 = *v33;
                  v36 = inOutCollInfo.bodyIds[v26];
                  if ( inOutCollInfo.entityTypes[v26] == ET_SCRIPTMOVER && (_DWORD)v36 != 0xFFFFFF && Physics_IsRigidBodyKeyframed(inOutCollInfo.worldId, v36) )
                  {
                    *(_DWORD *)(v27 + 36) = 1058642330;
                  }
                  else if ( v35->m_playerControlled )
                  {
                    v37 = LODWORD(v35->m_lastCollisionPosLs.v[2]);
                    if ( (float)((float)((float)(v35->m_lastCollisionPosLs.v[1] * v35->m_transform.m[2].v[1]) + (float)(v35->m_lastCollisionPosLs.v[0] * v35->m_transform.m[2].v[0])) + (float)(*(float *)&v37 * v35->m_transform.m[2].v[2])) >= 0.0 )
                    {
                      if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysics *, __int64))v35->IsInAir)(v35, v36) )
                      {
                        *(double *)&v37 = BgVehiclePhysics::GetNormalSpeedPlane(v35);
                        v39 = v37;
                        *(float *)&v39 = *(float *)&v37 - 0.69999999;
                        _XMM1 = v39;
                        __asm { vmaxss  xmm2, xmm1, xmm6 }
                        v41 = _XMM2;
                        *(float *)&v41 = (float)((float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) * 11.111111) * (float)(*(float *)&_XMM2 * 3.3333333)) * (float)(*(float *)&_XMM2 * 3.3333333);
                        _XMM3 = v41;
                        __asm { vmaxss  xmm0, xmm3, dword ptr [r14+24h] }
                        *(float *)(v27 + 36) = *(float *)&_XMM0;
                      }
                    }
                  }
                  else
                  {
                    *(_DWORD *)(v27 + 36) = 1060320051;
                  }
                }
                v34 = v47;
              }
              --v26;
              ++v33;
              v47 = --v34;
            }
            while ( v34 );
            v32 = !inOutCollInfo.filterCollision;
            *(_BYTE *)(v27 + 32) = *(float *)(v27 + 36) > 0.0;
          }
        }
      }
    }
    return v32;
  }
  else
  {
    *inOutCollInfo.outUpdateBody = 0;
    inOutCollInfo.outUpdateBody[1] = 0;
    return 1;
  }
}

/*
==============
BgVehicleCollisionSystem::PhysicsGetCollisionCallback
==============
*/
bool (*BgVehicleCollisionSystem::PhysicsGetCollisionCallback(BgVehicleCollisionSystem *this, Physics_WorldId __formal))(BGVehicles *, Physics_WorldId, const vec3_t *, int, int, const unsigned int *, BgVehiclePhysicsManifoldProcessInfo *)
{
  return BgVehicleCollisionSystem::PhysicsCollisionCallback;
}

/*
==============
BgVehicleCollisionSystem::StuntManagerProcess
==============
*/
void BgVehicleCollisionSystem::StuntManagerProcess(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ;
}

/*
==============
BgVehicleCollisionSystem::UpdateVehicleCollisionInfo
==============
*/
void BgVehicleCollisionSystem::UpdateVehicleCollisionInfo(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  int v3; 
  BgVehiclePhysicsManager *v4; 
  unsigned int *vehIds; 
  bool v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  BgVehiclePhysics *v11; 
  unsigned int v12; 
  unsigned int PhysicsBodyId; 
  BgVehiclePhysics *ObjectForPmove; 
  __int64 v15; 
  __int64 v16; 

  v3 = 0;
  v4 = inOutCollInfo->vehicleSystem->PhysicsGetVehiclePhysicsManager(inOutCollInfo->vehicleSystem);
  vehIds = inOutCollInfo->vehIds;
  v6 = 1;
  v7 = 1i64;
  do
  {
    if ( !v6 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 16, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index 2\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( BGVehicles::PhysicsIsValid(*vehIds) )
    {
      v8 = *vehIds;
      if ( !BGVehicles::PhysicsIsValid(*vehIds) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v9 = v8 - 1;
      if ( v9 >= 0x80 )
      {
        LODWORD(v16) = 128;
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v10 = v9;
      v11 = (BgVehiclePhysics *)&v4->m_vehiclePhysicsObjects[v10];
      if ( (BgVehiclePhysicsManager *)((char *)v4 + v10 * 3360) != (BgVehiclePhysicsManager *)-8i64 )
      {
        if ( *(_DWORD *)&v4->m_vehiclePhysicsObjects[v10].buffer[8] )
        {
          v11->UpdateCollider((BgVehiclePhysics *)&v4->m_vehiclePhysicsObjects[v10], inOutCollInfo->bodyIds[v7], &inOutCollInfo->hitPos);
          if ( BGVehicles::PhysicsIsValid(v11->m_vehicleId) )
          {
            v12 = v11->m_vehicleId - 1;
            if ( v12 >= 0x80 )
            {
              LODWORD(v16) = 128;
              LODWORD(v15) = v11->m_vehicleId - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 300, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( *(_DWORD *)&v4->m_vehiclePhysicsObjectsPmove[v12].buffer[8] )
            {
              if ( *(_DWORD *)&v4->m_vehiclePhysicsObjectsPmove[v12].buffer[48] == v11->m_entityNumber )
              {
                PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)&v4->m_vehiclePhysicsObjectsPmove[v12]);
                if ( PhysicsBodyId == BgVehiclePhysics::GetPhysicsBodyId(v11) )
                {
                  ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v4, v11);
                  if ( ObjectForPmove )
                    ObjectForPmove->UpdateCollider(ObjectForPmove, inOutCollInfo->bodyIds[v7], &inOutCollInfo->hitPos);
                }
              }
            }
          }
        }
      }
    }
    ++v3;
    ++vehIds;
    --v7;
    v6 = (unsigned int)v3 < 2;
  }
  while ( v3 < 2 );
}

/*
==============
BgVehicleCollisionSystem::UpdateVehicleMassProperties
==============
*/
void BgVehicleCollisionSystem::UpdateVehicleMassProperties(BgVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  int v3; 
  unsigned int *vehIds; 
  __int64 v5; 
  __int64 v6; 
  entityType_s *v7; 
  __int64 v8; 
  bool v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  BgVehiclePhysicsManager *v18; 

  v3 = 0;
  v18 = inOutCollInfo->vehicleSystem->PhysicsGetVehiclePhysicsManager(inOutCollInfo->vehicleSystem);
  vehIds = inOutCollInfo->vehIds;
  v5 = 0i64;
  v17 = 0i64;
  v6 = 0i64;
  v7 = &inOutCollInfo->entityTypes[1];
  v8 = 1i64;
  v9 = 1;
  do
  {
    if ( !v9 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 16, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2 )", "index doesn't index 2\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( BGVehicles::PhysicsIsValid(*vehIds) )
    {
      v10 = *vehIds;
      if ( !BGVehicles::PhysicsIsValid(*vehIds) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v11 = v10 - 1;
      if ( v11 >= 0x80 )
      {
        LODWORD(v16) = 128;
        LODWORD(v15) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v12 = v11;
      v13 = (__int64)&v18->m_vehiclePhysicsObjects[v12];
      if ( (BgVehiclePhysicsManager *)((char *)v18 + v12 * 3360) == (BgVehiclePhysicsManager *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 309, ASSERT_TYPE_ASSERT, "( vehObj )", "BgVehicleCollisionSystem::UpdateVehicleMassProperties(): Vehicle Id is valid but there's no vehicle object") )
        __debugbreak();
      if ( *(_BYTE *)(v13 + 612) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 310, ASSERT_TYPE_ASSERT, "( !vehObj->IsPmoveObject() )", "BgVehicleCollisionSystem::UpdateVehicleMassProperties(): Vehicle shouldn't be a pmove object") )
        __debugbreak();
      if ( *(_DWORD *)(v13 + 8) )
      {
        inOutCollInfo->outUpdateBody[v5] = (*(__int64 (__fastcall **)(__int64, BgVehicleCollisionCallbackInfo *, _QWORD, vec4_t *))(*(_QWORD *)v13 + 224i64))(v13, inOutCollInfo, (unsigned int)v3, &inOutCollInfo->outInertiaMassFactors[v17]);
        if ( inOutCollInfo->outUpdateBody[v5] && *v7 == ET_SCRIPTMOVER )
        {
          v14 = inOutCollInfo->bodyIds[v8];
          if ( v14 != 0xFFFFFF && Physics_IsRigidBodyKeyframed(inOutCollInfo->worldId, v14) )
            inOutCollInfo->outInertiaMassFactors[v6].v[2] = 8.0;
        }
      }
    }
    ++v17;
    ++v3;
    ++v5;
    ++vehIds;
    --v7;
    --v8;
    ++v6;
    v9 = (unsigned int)v3 < 2;
  }
  while ( v3 < 2 );
}

