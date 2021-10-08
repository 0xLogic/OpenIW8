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
  __int64 v11; 
  __int64 v12; 
  int v15; 
  __int64 v16; 
  int v17; 
  unsigned int m_vehicleAnimProfile; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  BgVehiclePhysics **v33; 
  __int64 v34; 
  unsigned int v37; 
  bool IsPhysicsBodyIdValid; 
  char v39; 
  bool v40; 
  unsigned int PhysicsBodyId; 
  char v53; 
  BgVehiclePhysics *v79; 
  __int64 v80; 
  tmat44_t<vec4_t> outIwTransform; 

  _RDI = inOutCollInfo;
  if ( inOutCollInfo->vehicleCount == 2 && BGVehicles::PhysicsIsValid(inOutCollInfo->vehIds[0]) && BGVehicles::PhysicsIsValid(_RDI->vehIds[1]) )
  {
    if ( !_RDI->vehObjs[0]->SupportsFeature(_RDI->vehObjs[0], VPFEAT_GROUND_VEHICLE) || !_RDI->vehObjs[1]->SupportsFeature(_RDI->vehObjs[1], VPFEAT_GROUND_VEHICLE) )
    {
LABEL_59:
      _RDI->continueCollision = 0;
      return;
    }
    v11 = tls_index;
    v12 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    __asm
    {
      vmovaps [rsp+138h+var_58], xmm8
      vmovaps [rsp+138h+var_68], xmm9
      vmovaps [rsp+138h+var_78], xmm10
      vmovaps [rsp+138h+var_88], xmm11
      vmovaps [rsp+138h+var_98], xmm12
      vmovaps [rsp+138h+var_A8], xmm13
    }
    if ( dword_148BD293C > *(_DWORD *)(v12 + 1772) )
    {
      j__Init_thread_header(&dword_148BD293C);
      if ( dword_148BD293C == -1 )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f0000003e8000003e8000003e800000
          vmovups xmmword ptr cs:heavyMassFac, xmm0
        }
        j__Init_thread_footer(&dword_148BD293C);
      }
    }
    if ( dword_148BD2954 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v11) + 1772i64) )
    {
      j__Init_thread_header(&dword_148BD2954);
      if ( dword_148BD2954 == -1 )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@41a00000412000004120000041200000
          vmovups xmmword ptr cs:lightMassContFac, xmm0
        }
        j__Init_thread_footer(&dword_148BD2954);
      }
    }
    v15 = 0;
    v16 = (__int64)_RDI->vehObjs[1];
    v17 = 720916;
    v79 = _RDI->vehObjs[0];
    v80 = v16;
    m_vehicleAnimProfile = v79->m_vehicleAnimProfile;
    if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v17, m_vehicleAnimProfile) )
    {
      v19 = 0;
    }
    else
    {
      v20 = *(_DWORD *)(v16 + 40);
      if ( v20 <= 0x13 && _bittest(&v17, v20) )
      {
        v19 = 1;
      }
      else if ( !m_vehicleAnimProfile || m_vehicleAnimProfile == 24 || v20 && v20 != 24 )
      {
        if ( !v20 || v20 == 24 || m_vehicleAnimProfile && m_vehicleAnimProfile != 24 )
          v19 = -1;
        else
          v19 = 1;
      }
      else
      {
        v19 = 0;
      }
    }
    if ( m_vehicleAnimProfile && m_vehicleAnimProfile != 24 )
    {
      v21 = *(_DWORD *)(v16 + 40);
      if ( !v21 || v21 == 24 )
        goto LABEL_38;
      if ( v21 <= 0x13 && _bittest(&v17, v21) )
        goto LABEL_39;
      if ( m_vehicleAnimProfile <= 0x13 && _bittest(&v17, m_vehicleAnimProfile) )
LABEL_38:
        v15 = 1;
      else
        v15 = -1;
    }
LABEL_39:
    if ( v19 != -1 )
    {
      _RAX = _RDI->outInertiaMassFactors;
      __asm { vmovups xmm0, xmmword ptr cs:heavyMassFac }
      _RCX = 2i64 * v19;
      __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
      _RDI->outUpdateBody[v19] = 1;
    }
    if ( v15 != -1 )
    {
      _RAX = _RDI->outInertiaMassFactors;
      __asm { vmovups xmm0, xmmword ptr cs:lightMassContFac }
      _RCX = 2i64 * v15;
      __asm { vmovups xmmword ptr [rax+rcx*8], xmm0 }
      _RDI->outUpdateBody[v15] = 1;
    }
    __asm
    {
      vmovss  xmm13, cs:__real@41200000
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3f000000
      vmovss  xmm11, cs:__real@3ecccccd
      vmovss  xmm12, cs:__real@40a00000
      vmovaps [rsp+138h+var_38], xmm6
    }
    v33 = &v79;
    __asm { vmovaps [rsp+138h+var_48], xmm7 }
    v34 = 2i64;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      _RBX = *v33;
      if ( *v33 )
      {
        v37 = _RBX->m_vehicleAnimProfile;
        if ( v37 > 0x13 || !_bittest(&v17, v37) )
        {
          IsPhysicsBodyIdValid = BgVehiclePhysics::IsPhysicsBodyIdValid(*v33);
          v39 = 0;
          v40 = !IsPhysicsBodyIdValid;
          if ( IsPhysicsBodyIdValid )
          {
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
            Physics_GetRigidBodyTransform((const Physics_WorldId)_RBX->m_worldId, PhysicsBodyId, &outIwTransform);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+64h]
            vsubss  xmm1, xmm0, dword ptr [rsp+138h+outIwTransform+34h]
            vmulss  xmm3, xmm1, dword ptr [rsp+138h+outIwTransform+4]
            vmovss  xmm2, dword ptr [rdi+60h]
            vsubss  xmm0, xmm2, dword ptr [rsp+138h+outIwTransform+30h]
            vmulss  xmm1, xmm0, dword ptr [rsp+138h+outIwTransform]
            vmovss  xmm2, dword ptr [rdi+68h]
            vsubss  xmm0, xmm2, dword ptr [rsp+138h+outIwTransform+38h]
            vaddss  xmm4, xmm3, xmm1
            vmulss  xmm1, xmm0, dword ptr [rsp+138h+outIwTransform+8]
            vaddss  xmm3, xmm4, xmm1
            vcomiss xmm3, xmm8
          }
          if ( v39 | v40 )
          {
            if ( _RBX->m_playerControlled )
            {
              *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
            }
            else
            {
              __asm
              {
                vmovss  xmm7, dword ptr [rbx+144h]
                vmovss  xmm6, dword ptr [rbx+140h]
              }
              *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
              __asm
              {
                vmulss  xmm2, xmm6, xmm6
                vmulss  xmm1, xmm7, xmm7
                vaddss  xmm2, xmm2, xmm1
                vmaxss  xmm0, xmm0, xmm13
                vsqrtss xmm3, xmm2, xmm2
                vdivss  xmm0, xmm9, xmm0
                vmulss  xmm0, xmm3, xmm0; val
                vmovaps xmm2, xmm9; max
                vmovaps xmm1, xmm8; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            }
            __asm
            {
              vmovaps xmm1, xmm0
              vmulss  xmm0, xmm0, xmm10
              vmovss  dword ptr [rbx+0AB4h], xmm0
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, dword ptr [rbx+0AB8h]
              vmulss  xmm1, xmm1, xmm11
              vaddss  xmm6, xmm2, xmm1
              vcomiss xmm6, xmm12
            }
            if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 479, ASSERT_TYPE_ASSERT, "(fricValue < 5.0f)", (const char *)&queryFormat, "fricValue < 5.0f", v79, v80) )
              __debugbreak();
            __asm
            {
              vmaxss  xmm0, xmm6, xmm8
              vmovss  dword ptr [rbx+0AB8h], xmm0
            }
          }
        }
      }
      ++v33;
      --v34;
    }
    while ( v34 );
    __asm
    {
      vmovaps xmm13, [rsp+138h+var_A8]
      vmovaps xmm12, [rsp+138h+var_98]
      vmovaps xmm11, [rsp+138h+var_88]
      vmovaps xmm10, [rsp+138h+var_78]
      vmovaps xmm9, [rsp+138h+var_68]
      vmovaps xmm8, [rsp+138h+var_58]
      vmovaps xmm7, [rsp+138h+var_48]
      vmovaps xmm6, [rsp+138h+var_38]
    }
    goto LABEL_59;
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
  BGVehicles *v13; 
  __int64 v16; 
  entityType_s *entityTypes; 
  vec4_t *inertiaMassFactors; 
  unsigned int v20; 
  bool *updateInertiaFactor; 
  bool *suspended; 
  BgVehiclePhysics **vehObjs; 
  unsigned int *vehIds; 
  unsigned int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  bool IsValid; 
  int v31; 
  int v33; 
  int v34; 
  BgVehicleCollisionSystem *v36; 
  bool v37; 
  BgVehiclePhysics **v38; 
  __int64 v39; 
  __int64 v45; 
  bool v62; 
  __int64 v67; 
  __int64 v68; 
  _BOOL8 v69; 
  __int64 v70; 
  __int64 v71; 
  BGVehicles *v72; 
  BgVehiclePhysicsManifoldProcessInfo *v73; 
  BgVehicleCollisionCallbackInfo inOutCollInfo; 

  _R14 = outManifoldInfo;
  _RSI = hitPos;
  v13 = vehicleSystem;
  v72 = vehicleSystem;
  v73 = outManifoldInfo;
  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 121, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( (!outManifoldInfo || !outManifoldInfo->inertiaMassFactors || !outManifoldInfo->updateInertiaFactor) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 122, ASSERT_TYPE_ASSERT, "(outManifoldInfo && outManifoldInfo->inertiaMassFactors && outManifoldInfo->updateInertiaFactor)", (const char *)&queryFormat, "outManifoldInfo && outManifoldInfo->inertiaMassFactors && outManifoldInfo->updateInertiaFactor") )
    __debugbreak();
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collision_system.cpp", 123, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  v16 = (__int64)v13->PhysicsGetVehiclePhysicsManager(v13);
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  entityTypes = inOutCollInfo.entityTypes;
  inOutCollInfo.bodyUserData[1] = bodyBUserData;
  inertiaMassFactors = outManifoldInfo->inertiaMassFactors;
  v71 = v16;
  *(float *)&v16 = _RSI->v[2];
  v20 = 0;
  inOutCollInfo.outInertiaMassFactors = inertiaMassFactors;
  updateInertiaFactor = outManifoldInfo->updateInertiaFactor;
  __asm
  {
    vmovsd  qword ptr [rbp+70h+inOutCollInfo.hitPos], xmm0
    vmovsd  xmm0, qword ptr [r14]
  }
  LODWORD(inOutCollInfo.hitPos.v[2]) = v16;
  *(float *)&v16 = outManifoldInfo->normal.v[2];
  inOutCollInfo.worldId = worldId;
  suspended = inOutCollInfo.suspended;
  inOutCollInfo.bodyUserData[0] = bodyAUserData;
  vehObjs = inOutCollInfo.vehObjs;
  inOutCollInfo.bodyIds = bodyIds;
  vehIds = inOutCollInfo.vehIds;
  inOutCollInfo.outUpdateBody = updateInertiaFactor;
  inOutCollInfo.vehicleSystem = v13;
  inOutCollInfo.filterCollision = 0;
  __asm { vmovsd  qword ptr [rbp+70h+inOutCollInfo.normal], xmm0 }
  LODWORD(inOutCollInfo.normal.v[2]) = v16;
  v70 = 2i64;
  do
  {
    *vehIds = v13->PhysicsExtractIdFromPhysicsUserData(v13, *(vehIds - 3), entityTypes, (bool *)&v69);
    *suspended = v69;
    if ( BGVehicles::PhysicsIsValid(*vehIds) )
    {
      v26 = *vehIds;
      if ( !BGVehicles::PhysicsIsValid(*vehIds) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
        __debugbreak();
      v27 = v26 - 1;
      if ( v27 >= 0x80 )
      {
        LODWORD(v68) = 128;
        LODWORD(v67) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v67, v68) )
          __debugbreak();
      }
      v28 = v27;
      v13 = v72;
      v29 = 3360 * v28 + v71 + 8;
    }
    else
    {
      v29 = 0i64;
    }
    *vehObjs = (BgVehiclePhysics *)v29;
    ++v20;
    ++vehObjs;
    ++entityTypes;
    ++suspended;
    ++vehIds;
  }
  while ( v20 < 2 );
  inOutCollInfo.continueCollision = 1;
  IsValid = BGVehicles::PhysicsIsValid(inOutCollInfo.vehIds[0]);
  v31 = 1;
  _R14 = (__int64)v73;
  if ( IsValid || inOutCollInfo.suspended[0] )
  {
    v34 = 1;
    v33 = 0;
  }
  else
  {
    v33 = 0;
    v34 = 0;
  }
  if ( BGVehicles::PhysicsIsValid(inOutCollInfo.vehIds[1]) || inOutCollInfo.suspended[1] )
    v33 = 1;
  inOutCollInfo.vehicleCount = v33 + v34;
  if ( v33 + v34 )
  {
    v36 = v13->PhysicsGetCollisionSystem(v13);
    v36->CollisionFiltering(v36, &inOutCollInfo);
    v37 = !inOutCollInfo.filterCollision;
    if ( !inOutCollInfo.filterCollision )
    {
      if ( !inOutCollInfo.continueCollision )
        goto LABEL_43;
      BgVehicleCollisionSystem::ActivateBodies(v36, &inOutCollInfo);
      v37 = !inOutCollInfo.filterCollision;
      if ( !inOutCollInfo.filterCollision )
      {
        if ( !inOutCollInfo.continueCollision )
          goto LABEL_43;
        v36->CollisionScriptables(v36, &inOutCollInfo);
        v37 = !inOutCollInfo.filterCollision;
        if ( !inOutCollInfo.filterCollision )
        {
          if ( !inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::UpdateVehicleCollisionInfo(v36, &inOutCollInfo), v37 = !inOutCollInfo.filterCollision) && (!inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::CollisionVehicleVsVehicle(v36, &inOutCollInfo), v37 = !inOutCollInfo.filterCollision) && (!inOutCollInfo.continueCollision || (BgVehicleCollisionSystem::UpdateVehicleMassProperties(v36, &inOutCollInfo), v37 = !inOutCollInfo.filterCollision))) )
          {
LABEL_43:
            __asm { vmovaps [rsp+170h+var_48+8], xmm6 }
            v38 = inOutCollInfo.vehObjs;
            __asm { vmovaps [rsp+170h+var_58+8], xmm7 }
            v39 = 2i64;
            __asm
            {
              vmovss  xmm7, cs:__real@3f333333
              vmovaps [rsp+170h+var_68+8], xmm8
              vmovss  xmm8, cs:__real@40555555
              vmovaps [rsp+170h+var_78+8], xmm9
              vmovss  xmm9, cs:__real@4131c71c
              vxorps  xmm6, xmm6, xmm6
            }
            do
            {
              if ( *v38 )
              {
                if ( (*v38)->SupportsFeature(*v38, VPFEAT_GROUND_VEHICLE) )
                {
                  _RBX = *v38;
                  v45 = inOutCollInfo.bodyIds[v31];
                  if ( inOutCollInfo.entityTypes[v31] == ET_SCRIPTMOVER && (_DWORD)v45 != 0xFFFFFF && Physics_IsRigidBodyKeyframed(inOutCollInfo.worldId, v45) )
                  {
                    *(_DWORD *)(_R14 + 36) = 1058642330;
                  }
                  else if ( _RBX->m_playerControlled )
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbx+2CCh]
                      vmovss  xmm1, dword ptr [rbx+2C8h]
                      vmulss  xmm2, xmm1, dword ptr [rbx+18Ch]
                      vmulss  xmm3, xmm0, dword ptr [rbx+190h]
                      vmovss  xmm0, dword ptr [rbx+2D0h]
                      vmulss  xmm1, xmm0, dword ptr [rbx+194h]
                      vaddss  xmm4, xmm3, xmm2
                      vaddss  xmm2, xmm4, xmm1
                      vcomiss xmm2, xmm6
                    }
                    if ( ((unsigned __int8 (__fastcall *)(BgVehiclePhysics *, __int64))_RBX->IsInAir)(_RBX, v45) )
                    {
                      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
                      __asm
                      {
                        vsubss  xmm1, xmm0, xmm7
                        vmaxss  xmm2, xmm1, xmm6
                        vmulss  xmm0, xmm2, xmm2
                        vmulss  xmm1, xmm0, xmm9
                        vmulss  xmm3, xmm2, xmm8
                        vmulss  xmm2, xmm1, xmm3
                        vmulss  xmm3, xmm2, xmm3
                        vmaxss  xmm0, xmm3, dword ptr [r14+24h]
                        vmovss  dword ptr [r14+24h], xmm0
                      }
                    }
                  }
                  else
                  {
                    *(_DWORD *)(_R14 + 36) = 1060320051;
                  }
                }
                v39 = v70;
              }
              --v31;
              ++v38;
              v62 = v39-- == 0;
              v70 = v39;
            }
            while ( v39 );
            __asm
            {
              vcomiss xmm6, dword ptr [r14+24h]
              vmovaps xmm9, [rsp+170h+var_78+8]
              vmovaps xmm8, [rsp+170h+var_68+8]
            }
            v37 = !inOutCollInfo.filterCollision;
            __asm
            {
              vmovaps xmm7, [rsp+170h+var_58+8]
              vmovaps xmm6, [rsp+170h+var_48+8]
            }
            *(_BYTE *)(_R14 + 32) = v62;
          }
        }
      }
    }
    return v37;
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

