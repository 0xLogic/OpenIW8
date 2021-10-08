/*
==============
G_VehicleHeliMP_DroneCalcBounds
==============
*/

void __fastcall G_VehicleHeliMP_DroneCalcBounds(const Vehicle *veh, Bounds *bounds)
{
  ?G_VehicleHeliMP_DroneCalcBounds@@YAXPEBUVehicle@@AEAUBounds@@@Z(veh, bounds);
}

/*
==============
G_VehicleHeliMP_DroneApplyVelocityImpulse
==============
*/

void __fastcall G_VehicleHeliMP_DroneApplyVelocityImpulse(Vehicle *veh, HeliPathPos *pathPos, const vec3_t *velocityVector, bool accumulates, float decay)
{
  ?G_VehicleHeliMP_DroneApplyVelocityImpulse@@YAXPEAUVehicle@@PEAUHeliPathPos@@AEBTvec3_t@@_NM@Z(veh, pathPos, velocityVector, accumulates, decay);
}

/*
==============
G_VehicleHeliMP_DroneSetGoalPos
==============
*/

void __fastcall G_VehicleHeliMP_DroneSetGoalPos(Vehicle *veh, HeliPathPos *pathPos, const vec3_t *position, bool bStopAtDest)
{
  ?G_VehicleHeliMP_DroneSetGoalPos@@YAXPEAUVehicle@@PEAUHeliPathPos@@AEBTvec3_t@@_N@Z(veh, pathPos, position, bStopAtDest);
}

/*
==============
G_VehicleHeliMP_DroneUpdateMoveInternal
==============
*/

void __fastcall G_VehicleHeliMP_DroneUpdateMoveInternal(const Vehicle *veh, HeliPathPos *pathPos)
{
  ?G_VehicleHeliMP_DroneUpdateMoveInternal@@YAXPEBUVehicle@@PEAUHeliPathPos@@@Z(veh, pathPos);
}

/*
==============
G_VehicleHeliMP_CanSpawn
==============
*/

bool __fastcall G_VehicleHeliMP_CanSpawn()
{
  return ?G_VehicleHeliMP_CanSpawn@@YA_NXZ();
}

/*
==============
G_VehicleHeliMP_DroneSetGoalEnt
==============
*/

void __fastcall G_VehicleHeliMP_DroneSetGoalEnt(Vehicle *veh, HeliPathPos *pathPos, gentity_s *owner, const vec3_t *offset, float autoRecalcDestinationDistance, float autoRecalcDestinationAngle)
{
  ?G_VehicleHeliMP_DroneSetGoalEnt@@YAXPEAUVehicle@@PEAUHeliPathPos@@PEAUgentity_s@@AEBTvec3_t@@MM@Z(veh, pathPos, owner, offset, autoRecalcDestinationDistance, autoRecalcDestinationAngle);
}

/*
==============
G_VehicleHeliMP_Spawn
==============
*/

void __fastcall G_VehicleHeliMP_Spawn(gentity_s *ent, gentity_s *owner, const char *vehicleInfoName, const char *modelName)
{
  ?G_VehicleHeliMP_Spawn@@YAXPEAUgentity_s@@0PEBD1@Z(ent, owner, vehicleInfoName, modelName);
}

/*
==============
G_VehicleHeliMP_SetDamageStage
==============
*/
void G_VehicleHeliMP_SetDamageStage(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *VehicleEntity; 
  int Int; 
  Vehicle *vehicle; 

  VehicleEntity = G_VehicleScript_GetVehicleEntity(scrContext, entref);
  if ( !VehicleEntity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 40, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  vehicle = VehicleEntity->vehicle;
  if ( Int <= 0 )
  {
    vehicle->isDeathStage = 1;
  }
  else
  {
    vehicle->isMultiStage = 1;
    VehicleEntity->vehicle->isDeathStage = 0;
  }
}

/*
==============
G_VehicleHeliMP_CanSpawn
==============
*/
char G_VehicleHeliMP_CanSpawn()
{
  if ( G_Vehicle_CanAllocateVehicle() )
    return 1;
  Com_PrintError(1, "G_CanSpawnHelicopter: No free vehicle slots.\n");
  return 0;
}

/*
==============
G_VehicleHeliMP_DroneApplyVelocityImpulse
==============
*/
void G_VehicleHeliMP_DroneApplyVelocityImpulse(Vehicle *veh, HeliPathPos *pathPos, const vec3_t *velocityVector, bool accumulates, float decay)
{
  _RBX = pathPos;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1172, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1173, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( veh->useDroneLogic != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1174, ASSERT_TYPE_ASSERT, "( veh->useDroneLogic == qtrue )", (const char *)&queryFormat, "veh->useDroneLogic == qtrue") )
    __debugbreak();
  if ( accumulates )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+74h]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbx+74h], xmm1
      vmovss  xmm2, dword ptr [rbx+78h]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rbx+78h], xmm0
      vmovss  xmm1, dword ptr [rbx+7Ch]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+7Ch], xmm2
    }
  }
  else
  {
    _RBX->hover.velocityImpulse.v[0] = velocityVector->v[0];
    _RBX->hover.velocityImpulse.v[1] = velocityVector->v[1];
    _RBX->hover.velocityImpulse.v[2] = velocityVector->v[2];
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+decay]
    vmaxss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rbx+80h], xmm1
  }
}

/*
==============
G_VehicleHeliMP_DroneCalcBounds
==============
*/
void G_VehicleHeliMP_DroneCalcBounds(const Vehicle *veh, Bounds *bounds)
{
  _RBX = bounds;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RAX = veh->ent;
  __asm
  {
    vmovss  xmm2, cs:MAX_DRONE_SIZE
    vmovss  xmm0, dword ptr [rax+110h]
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vminss  xmm1, xmm3, xmm0
  }
  *(_QWORD *)_RBX->midPoint.v = 0i64;
  _RBX->midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  dword ptr [rbx+10h], xmm1
    vmovss  dword ptr [rbx+14h], xmm1
  }
}

/*
==============
G_VehicleHeliMP_DroneCalcNavPath
==============
*/
__int64 G_VehicleHeliMP_DroneCalcNavPath(const Vehicle *veh, HeliPathPos *pathPos)
{
  nav_space_s *DefaultSpace; 
  EntHandle *p_droneTarget; 
  __int64 v71; 
  bfx::VolumeHandle v92; 
  bfx::VolumeHandle v93; 
  unsigned int v94; 
  int NumSegments; 
  int v96; 
  vec3_t *p_outPoint; 
  bfx::PolylinePath3DRCPtr v98; 
  vec3_t *v103; 
  __int64 v104; 
  __int64 pathSpec; 
  __int64 pathSpec_8; 
  bfx::VolumeHandle v139; 
  bfx::VolumeHandle rhs; 
  bfx::PolylinePath3DRCPtr result; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v148; 
  vec3_t endPos; 
  vec3_t v150; 
  vec3_t up; 
  vec3_t pos; 
  vec3_t v153; 
  vec3_t forward; 
  nav_probe_results_3D_s pOutResults; 
  vec3_t startPos; 
  vec3_t right; 
  vec3_t outAngles; 
  vec3_t outClosestPos; 
  vec3_t outPoint; 
  char v161; 
  void *retaddr; 

  _RAX = &retaddr;
  v148 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R14 = pathPos;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 156, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 157, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  DefaultSpace = Nav_GetDefaultSpace();
  if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 161, ASSERT_TYPE_ASSERT, "( space )", (const char *)&queryFormat, "space") )
    __debugbreak();
  pathSpec = -1i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+820h+pathSpec+8], xmm0
  }
  p_droneTarget = &veh->droneTarget;
  if ( EntHandle::isDefined(p_droneTarget) && EntHandle::ent(p_droneTarget)->health > 0 )
  {
    _RAX = EntHandle::ent(p_droneTarget);
    __asm
    {
      vmovss  xmm6, dword ptr [rax+130h]
      vmovss  [rsp+820h+var_7B4], xmm6
      vmovss  xmm7, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+820h+var_7E0.m_pProxy], xmm7
      vmovss  xmm8, dword ptr [rax+138h]
      vmovss  dword ptr [rsp+820h+rhs.m_pProxy], xmm8
    }
    G_Utils_GetAnglesWithWorldUp(_RAX, &outAngles);
    AngleVectors(&outAngles, &forward, &right, &up);
    __asm
    {
      vmovss  dword ptr [r14+278h], xmm6
      vmovss  dword ptr [r14+27Ch], xmm7
      vmovss  dword ptr [r14+280h], xmm8
      vmovss  xmm0, dword ptr [rbp+720h+outAngles+4]
      vmovss  dword ptr [r14+284h], xmm0
      vmovss  xmm4, dword ptr [r14+0D4h]
      vmulss  xmm10, xmm4, dword ptr [rbp+720h+right]
      vmulss  xmm9, xmm4, dword ptr [rbp+720h+right+4]
      vmulss  xmm5, xmm4, dword ptr [rbp+720h+right+8]
      vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm14, xmm0, dword ptr [rbp+720h+right]
      vmulss  xmm15, xmm0, dword ptr [rbp+720h+right+4]
      vmulss  xmm0, xmm0, dword ptr [rbp+720h+right+8]
      vmovss  [rsp+820h+var_7B8], xmm0
      vmovss  xmm3, dword ptr [r14+0D8h]
      vmulss  xmm13, xmm3, dword ptr [rbp+720h+forward]
      vmulss  xmm12, xmm3, dword ptr [rbp+720h+forward+4]
      vmulss  xmm11, xmm3, dword ptr [rbp+720h+forward+8]
      vmovss  xmm1, dword ptr [r14+0DCh]
      vmulss  xmm2, xmm1, dword ptr [rbp+720h+up]
      vmovss  [rsp+820h+var_7C0], xmm2
      vmulss  xmm3, xmm1, dword ptr [rbp+720h+up+4]
      vmovss  [rsp+820h+var_7BC], xmm3
      vmulss  xmm0, xmm1, dword ptr [rbp+720h+up+8]
      vmovss  [rsp+820h+var_7D0], xmm0
    }
    _RBX = &_R14->goalPosition;
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+8]
      vaddss  xmm0, xmm10, dword ptr [rbx]
      vaddss  xmm1, xmm9, dword ptr [rbx+4]
      vaddss  xmm2, xmm5, xmm8
      vaddss  xmm3, xmm0, xmm13
      vaddss  xmm4, xmm1, xmm12
      vaddss  xmm5, xmm2, xmm11
      vmovss  xmm9, [rsp+820h+var_7C0]
      vaddss  xmm0, xmm3, xmm9
      vmovss  dword ptr [rbp+720h+var_790], xmm0
      vmovss  xmm10, [rsp+820h+var_7BC]
      vaddss  xmm1, xmm4, xmm10
      vmovss  dword ptr [rbp+720h+var_790+4], xmm1
      vaddss  xmm0, xmm5, [rsp+820h+var_7D0]
      vmovss  dword ptr [rbp+720h+var_790+8], xmm0
      vaddss  xmm1, xmm14, dword ptr [rbx]
      vaddss  xmm2, xmm15, dword ptr [rbx+4]
      vaddss  xmm0, xmm8, [rsp+820h+var_7B8]
      vaddss  xmm3, xmm1, xmm13
      vaddss  xmm4, xmm2, xmm12
      vaddss  xmm5, xmm0, xmm11
      vaddss  xmm0, xmm3, xmm9
      vmovss  dword ptr [rbp+720h+var_760], xmm0
      vaddss  xmm1, xmm4, xmm10
      vmovss  dword ptr [rbp+720h+var_760+4], xmm1
      vmovss  xmm7, [rsp+820h+var_7D0]
      vaddss  xmm0, xmm5, xmm7
      vmovss  dword ptr [rbp+720h+var_760+8], xmm0
      vmovss  xmm1, cs:APPROXIMATE_PLAYER_HEIGHT
      vmulss  xmm8, xmm1, dword ptr [rbp+720h+up]
      vmulss  xmm11, xmm1, dword ptr [rbp+720h+up+4]
      vmulss  xmm2, xmm1, dword ptr [rbp+720h+up+8]
      vaddss  xmm0, xmm8, xmm6
      vmovss  dword ptr [rbp+720h+pos], xmm0
      vaddss  xmm1, xmm11, dword ptr [rsp+820h+var_7E0.m_pProxy]
      vmovss  dword ptr [rbp+720h+pos+4], xmm1
      vmovss  xmm6, dword ptr [rsp+820h+rhs.m_pProxy]
      vaddss  xmm12, xmm2, xmm6
      vmovss  dword ptr [rbp+720h+pos+8], xmm12
    }
    if ( !Nav3D_GetClosestPointOnMesh(DefaultSpace, (const bfx::Path3DSpec *)&pathSpec, &pos, &outClosestPos) )
    {
      v71 = 0i64;
      goto LABEL_57;
    }
    __asm
    {
      vaddss  xmm2, xmm8, dword ptr [rbp+720h+outClosestPos]
      vmovss  dword ptr [rbp+720h+pos], xmm2
      vaddss  xmm1, xmm11, dword ptr [rbp+720h+outClosestPos+4]
      vmovss  dword ptr [rbp+720h+pos+4], xmm1
      vmovss  dword ptr [rbp+720h+pos+8], xmm12
      vaddss  xmm0, xmm2, xmm9
      vmovss  dword ptr [rbp+720h+endPos], xmm0
      vaddss  xmm1, xmm1, xmm10
      vmovss  dword ptr [rbp+720h+endPos+4], xmm1
      vaddss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rbp+720h+endPos+8], xmm0
    }
    if ( Nav_Trace3D(DefaultSpace, &pos, &endPos, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+720h+pOutResults.m_EndPos]
        vmovss  dword ptr [rbp+720h+endPos], xmm0
        vmovss  xmm1, dword ptr [rbp+720h+pOutResults.m_EndPos+4]
        vmovss  dword ptr [rbp+720h+endPos+4], xmm1
        vmovss  xmm0, dword ptr [rbp+720h+pOutResults.m_EndPos+8]
        vmovss  dword ptr [rbp+720h+endPos+8], xmm0
        vmovss  dword ptr [rbp+720h+var_790+8], xmm0
        vmovss  dword ptr [rbp+720h+var_760+8], xmm0
      }
    }
    if ( Nav_Trace3D(DefaultSpace, &endPos, &v150, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+720h+pOutResults.m_EndPos]
        vmovss  xmm7, dword ptr [rbp+720h+pOutResults.m_EndPos+4]
        vmovss  xmm8, dword ptr [rbp+720h+pOutResults.m_EndPos+8]
      }
      if ( Nav_Trace3D(DefaultSpace, &endPos, &v153, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
      {
        __asm
        {
          vmovss  dword ptr [rbx], xmm6
          vmovss  dword ptr [rbx+4], xmm7
          vmovss  dword ptr [rbx+8], xmm8
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+720h+var_760]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rbp+720h+var_760+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr [rbp+720h+var_760+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+720h+var_790]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rbp+720h+var_790+4]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr [rbp+720h+var_790+8]
        vmovss  dword ptr [rbx+8], xmm0
      }
    }
  }
  else
  {
    _RBX = &_R14->goalPosition;
    Nav3D_GetClosestPointOnMesh(DefaultSpace, (const bfx::Path3DSpec *)&pathSpec, &_R14->goalPosition, &_R14->goalPosition);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rbp+720h+startPos], xmm0
    vmovss  xmm1, dword ptr [r14+0Ch]
    vmovss  dword ptr [rbp+720h+startPos+4], xmm1
    vmovss  xmm0, dword ptr [r14+10h]
    vmovss  dword ptr [rbp+720h+startPos+8], xmm0
  }
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( Nav3D_GetClosestVolume(DefaultSpace, _RBX, (const bfx::Path3DSpec *)&pathSpec, &pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&rhs);
    bfx::VolumeHandle::VolumeHandle(&v139, &pClosestVolume);
    if ( Nav3D_GetClosestReachableVolume(v92, &_R14->origin, (const bfx::Path3DSpec *)&pathSpec, &rhs) )
    {
      bfx::VolumeHandle::VolumeHandle(&v139, &rhs);
      Nav3D_GetClosestPointInsideVolume(&_R14->origin, v93, &startPos);
    }
    bfx::VolumeHandle::~VolumeHandle(&rhs);
  }
  Nav_FindPath3D(&result, &startPos, _RBX);
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 293, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()", pathSpec, pathSpec_8) )
    __debugbreak();
  if ( bfx::PolylinePath3DRCPtr::GetNumSegments(&result) )
  {
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&result);
    if ( NumSegments > 128 )
      NumSegments = 128;
    v96 = 0;
    if ( NumSegments > 0 )
    {
      p_outPoint = &outPoint;
      do
      {
        bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)&rhs, &result);
        Nav_GetPointOn3DPath(v98, v96++, p_outPoint++);
      }
      while ( v96 < NumSegments );
    }
    if ( NumSegments <= 1 )
    {
      if ( NumSegments != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( numDroneNavPathNodes == 1 )", (const char *)&queryFormat, "numDroneNavPathNodes == 1") )
        __debugbreak();
      _R14->numDroneNavPathNodes = NumSegments;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+720h+outPoint]
        vmovss  dword ptr [r14+0ECh], xmm0
        vmovss  xmm1, dword ptr [rbp+720h+outPoint+4]
        vmovss  dword ptr [r14+0F0h], xmm1
        vmovss  xmm0, dword ptr [rbp+720h+outPoint+8]
        vmovss  dword ptr [r14+0F4h], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8]
        vmovss  dword ptr [rbp+720h+up], xmm0
        vmovss  xmm1, dword ptr [r14+0Ch]
        vmovss  dword ptr [rbp+720h+up+4], xmm1
        vmovss  xmm0, dword ptr [r14+10h]
        vmovss  dword ptr [rbp+720h+up+8], xmm0
      }
      if ( NumSegments - 1 > 0 )
      {
        _RBX = &outPoint.v[2];
        v103 = &outPoint;
        v104 = (unsigned int)(NumSegments - 1);
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  dword ptr [rbp+720h+forward], xmm0
            vmovss  xmm1, dword ptr [rbx-4]
            vmovss  dword ptr [rbp+720h+forward+4], xmm1
            vmovss  xmm0, dword ptr [rbx]
            vsubss  xmm2, xmm0, cs:MIN_DRONE_DESIRED_HEIGHT_ABOVE_GROUND
            vmovss  dword ptr [rbp+720h+forward+8], xmm2
          }
          if ( Nav_Trace3D(DefaultSpace, v103, &forward, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+720h+pOutResults.m_EndPos]
              vmovss  dword ptr [rbp+720h+var_790], xmm0
              vmovss  xmm1, dword ptr [rbp+720h+pOutResults.m_EndPos+4]
              vmovss  dword ptr [rbp+720h+var_790+4], xmm1
              vmovss  xmm0, dword ptr [rbp+720h+pOutResults.m_EndPos+8]
              vaddss  xmm2, xmm0, cs:MIN_DRONE_DESIRED_HEIGHT_ABOVE_GROUND
              vmovss  dword ptr [rbp+720h+var_790+8], xmm2
            }
            if ( Nav_Trace3D(DefaultSpace, &pOutResults.m_EndPos, &v150, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
            {
              __asm
              {
                vmovss  xmm2, dword ptr [rbp+720h+pOutResults.m_EndPos+8]
                vcomiss xmm2, dword ptr [rbx]
                vmovss  xmm0, dword ptr [rbp+720h+pOutResults.m_EndPos]
                vmovss  dword ptr [rbp+720h+endPos], xmm0
                vmovss  xmm1, dword ptr [rbp+720h+pOutResults.m_EndPos+4]
                vmovss  dword ptr [rbp+720h+endPos+4], xmm1
                vmovss  dword ptr [rbp+720h+endPos+8], xmm2
              }
            }
            else
            {
              __asm
              {
                vmovsd  xmm0, qword ptr [rbp+720h+var_790]
                vmovsd  qword ptr [rbp+720h+endPos], xmm0
              }
              endPos.v[2] = v150.v[2];
            }
            if ( !Nav_Trace3D(DefaultSpace, &up, &endPos, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) && !Nav_Trace3D(DefaultSpace, v103, v103 + 1, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+720h+endPos]
                vmovss  dword ptr [rbx-8], xmm0
                vmovss  xmm1, dword ptr [rbp+720h+endPos+4]
                vmovss  dword ptr [rbx-4], xmm1
                vmovss  xmm0, dword ptr [rbp+720h+endPos+8]
                vmovss  dword ptr [rbx], xmm0
              }
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  dword ptr [rbp+720h+up], xmm0
            vmovss  xmm1, dword ptr [rbx-4]
            vmovss  dword ptr [rbp+720h+up+4], xmm1
            vmovss  xmm0, dword ptr [rbx]
            vmovss  dword ptr [rbp+720h+up+8], xmm0
          }
          ++v103;
          _RBX += 3;
          --v104;
        }
        while ( v104 );
      }
      _R14->numDroneNavPathNodes = Nav_Simplify3DPath(DefaultSpace, &_R14->origin, &outPoint, NumSegments, 32, _R14->droneNavPath);
    }
    v94 = 1;
    _R14->currentDroneNavPathNodeIndex = 0;
    _R14->droneCanFastMoveThroughPath = 1;
    _R14->droneLastNavRecalcTime = level.time;
  }
  else
  {
    v94 = 0;
    _R14->numDroneNavPathNodes = 0;
    _R14->currentDroneNavPathNodeIndex = 32;
    _R14->droneMoveState = DRONEMOVESTATE_UNKNOWN;
  }
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  v71 = v94;
LABEL_57:
  _R11 = &v161;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return v71;
}

/*
==============
G_VehicleHeliMP_DroneMoveTo
==============
*/
void G_VehicleHeliMP_DroneMoveTo(const Vehicle *veh, HeliPathPos *pathPos, const vec3_t *moveTo, bool hovering, Bounds *vehBounds)
{
  bool v20; 
  bool v21; 
  char v45; 
  bool v46; 
  char v89; 
  char v90; 
  unsigned int droneMoveState; 
  bool v98; 
  bool v99; 
  int v100; 
  char v128; 
  char v129; 
  gentity_s *ent; 
  unsigned __int16 GlassHitId; 
  float newSpeed; 
  float accelMax; 
  vec3_t v1; 
  vec3_t forward; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 
  char v250; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBX = moveTo;
  _RDI = pathPos;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 539, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v20 = _RDI == NULL;
  if ( !_RDI )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos");
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr [rdi+10h]
    vmovss  xmm9, dword ptr [rdi+20h]
    vmovss  xmm11, dword ptr [rdi+24h]
    vmovss  [rsp+1D0h+var_188], xmm0
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm6, xmm0, xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm12, xmm0, xmm3
    vmovss  dword ptr [rsp+1D0h+start], xmm1
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm8, xmm1, xmm2
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm14, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm0, xmm1, xmm14
    vsqrtss xmm15, xmm0, xmm0
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm15, xmm0
    vmovss  [rsp+1D0h+var_190], xmm9
    vmovss  [rsp+1D0h+var_18C], xmm11
    vmovss  dword ptr [rsp+1D0h+start+4], xmm2
    vmovss  dword ptr [rbp+0D0h+start+8], xmm3
    vmovss  [rsp+1D0h+var_198], xmm14
    vmovss  [rsp+1D0h+var_194], xmm15
    vmovaps xmmword ptr [rsp+1D0h+var_A8+8], xmm13
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v20 )
  {
    __asm
    {
      vmovaps xmm2, xmm0; epsilon
      vmovss  [rsp+1D0h+v1], xmm7
      vmovss  [rsp+1D0h+var_174], xmm7
      vmovss  [rsp+1D0h+var_170], xmm7
    }
    if ( VecNCompareCustomEpsilon(_RDI->hover.velocityImpulse.v, v1.v, *(float *)&_XMM2, 3) )
    {
      AngleVectors(&veh->ent->r.currentAngles, &forward, NULL, NULL);
      goto LABEL_60;
    }
    __asm
    {
      vmovss  xmm13, cs:__real@3f800000
      vmovss  [rsp+1D0h+var_194], xmm13
      vmovaps xmm15, xmm13
    }
  }
  else
  {
    __asm { vmovss  xmm13, cs:__real@3f800000 }
  }
  __asm { vmovaps xmmword ptr [rsp+1D0h+var_78+8], xmm10 }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm { vmovaps xmm1, xmm0; dt }
  G_VehicleHeli_GetNewSpeedAndAccel(_RDI, *(float *)&_XMM1, hovering, &newSpeed, &accelMax);
  v45 = 0;
  v46 = !hovering;
  if ( hovering )
  {
    *(double *)&_XMM0 = G_VehicleHeli_GetHoverSpeed(_RDI);
    __asm
    {
      vmovss  xmm5, dword ptr [rdi+0B0h]
      vmovss  [rsp+1D0h+var_184], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm14, dword ptr [rdi+0B0h]
      vmovss  [rsp+1D0h+var_184], xmm14
      vmovaps xmm5, xmm14
      vmovss  xmm14, [rsp+1D0h+var_198]
    }
  }
  __asm
  {
    vcomiss xmm5, dword ptr [rdi+4]
    vmovss  xmm1, [rsp+1D0h+newSpeed]
    vdivss  xmm0, xmm13, xmm15
    vmulss  xmm3, xmm6, xmm0
    vmulss  xmm2, xmm8, xmm0
    vmulss  xmm4, xmm12, xmm0
    vmovss  dword ptr [rsp+1D0h+forward], xmm3
    vmovss  dword ptr [rsp+1D0h+forward+4], xmm2
    vmulss  xmm3, xmm3, xmm1
    vsubss  xmm10, xmm3, xmm9
    vmulss  xmm2, xmm2, xmm1
    vsubss  xmm11, xmm2, xmm11
    vmulss  xmm0, xmm4, xmm1
    vsubss  xmm9, xmm0, [rsp+1D0h+var_188]
    vmovaps xmm6, xmm10
    vmovaps xmm8, xmm11
    vmovss  dword ptr [rsp+1D0h+forward+8], xmm4
  }
  if ( !v45 )
  {
    __asm
    {
      vmovss  xmm4, [rsp+1D0h+var_190]
      vmulss  xmm1, xmm3, xmm4
      vmovss  xmm3, [rsp+1D0h+var_18C]
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm7
    }
    if ( !(v45 | v46) )
    {
      __asm
      {
        vmulss  xmm1, xmm10, xmm4
        vmulss  xmm0, xmm11, xmm3
        vaddss  xmm2, xmm1, xmm0
        vcomiss xmm2, xmm7
      }
      if ( v45 )
      {
        __asm
        {
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm13, xmm0
          vdivss  xmm1, xmm13, xmm0
          vmulss  xmm5, xmm1, xmm3
          vmulss  xmm4, xmm4, xmm1
          vmulss  xmm0, xmm4, xmm10
          vmulss  xmm2, xmm5, xmm11
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm3, xmm4
          vmulss  xmm0, xmm3, xmm5
          vsubss  xmm6, xmm10, xmm1
          vsubss  xmm8, xmm11, xmm0
        }
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm10, xmm2, xmm2
  }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmulss  xmm11, xmm0, [rsp+1D0h+accelMax]
    vcomiss xmm10, xmm11
    vmovaps xmm4, xmm8
    vmovss  [rsp+1D0h+var_198], xmm11
    vmovss  [rsp+1D0h+var_1A0], xmm4
    vmovss  [rsp+1D0h+var_19C], xmm6
    vmovaps xmm5, xmm6
  }
  if ( !(v89 | v90) )
  {
    __asm
    {
      vcomiss xmm10, xmm7
      vmovss  [rsp+1D0h+var_1A0], xmm4
      vmovss  [rsp+1D0h+var_19C], xmm6
    }
    if ( !(v89 | v90) )
    {
      __asm
      {
        vdivss  xmm0, xmm11, xmm10
        vmulss  xmm5, xmm6, xmm0
        vmulss  xmm4, xmm8, xmm0
        vmovss  [rsp+1D0h+var_19C], xmm5
        vmovss  [rsp+1D0h+var_1A0], xmm4
        vmulss  xmm9, xmm0, xmm9
      }
    }
  }
  droneMoveState = _RDI->droneMoveState;
  v98 = hovering;
  if ( droneMoveState == 1 )
    v98 = 1;
  v99 = droneMoveState < 2;
  if ( droneMoveState == 2 )
  {
    v99 = 0;
    if ( !_RDI->droneCanFastMoveThroughPath || (v100 = _RDI->numDroneNavPathNodes - _RDI->currentDroneNavPathNodeIndex, v99 = (unsigned int)v100 < 2, v100 <= 2) )
      v98 = 1;
  }
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsqrtss xmm10, xmm14, xmm14
    vcomiss xmm10, xmm13
  }
  if ( v99 )
  {
    __asm
    {
      vmovss  xmm10, [rsp+1D0h+var_1A0]
      vmovss  xmm6, [rsp+1D0h+var_19C]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+24h]
      vmovss  xmm3, dword ptr [rdi+20h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm11, xmm1, xmm1
    }
    if ( _RDI->stopAtGoal )
    {
      if ( !v98 )
      {
        __asm
        {
          vcomiss xmm10, dword ptr [rdi+28Ch]
          vcomiss xmm11, dword ptr [rdi+290h]
        }
      }
      __asm
      {
        vaddss  xmm13, xmm3, xmm5
        vaddss  xmm14, xmm2, xmm4
        vmulss  xmm1, xmm14, xmm14
        vmulss  xmm0, xmm13, xmm13
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm15, xmm1, xmm1
        vcomiss xmm15, xmm7
      }
      if ( !v98 )
        goto LABEL_38;
      __asm
      {
        vsubss  xmm0, xmm11, dword ptr [rdi+294h]
        vmaxss  xmm6, xmm0, xmm7
      }
      *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
      __asm
      {
        vmovss  xmm1, cs:__real@3f000000
        vdivss  xmm1, xmm1, xmm10
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm2, xmm2, xmm1
        vmulss  xmm3, xmm0, xmm2
        vsubss  xmm0, xmm15, xmm11
        vandps  xmm0, xmm0, xmm8
        vmulss  xmm0, xmm0, dword ptr [rdi+298h]
        vaddss  xmm1, xmm0, cs:__real@3f800000
        vcomiss xmm3, xmm1
      }
      if ( v45 | v20 )
      {
LABEL_38:
        __asm
        {
          vmovss  xmm6, [rsp+1D0h+var_19C]
          vmovss  xmm10, [rsp+1D0h+var_1A0]
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm11, xmm3
          vdivss  xmm2, xmm0, xmm15
          vmulss  xmm1, xmm13, xmm2
          vsubss  xmm6, xmm1, dword ptr [rdi+20h]
          vmulss  xmm0, xmm14, xmm2
          vsubss  xmm10, xmm0, dword ptr [rdi+24h]
        }
      }
      __asm
      {
        vmovss  xmm13, cs:__real@3f800000
        vmovss  xmm15, [rsp+1D0h+var_194]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm10, [rsp+1D0h+var_1A0]
        vmovss  xmm6, [rsp+1D0h+var_19C]
      }
    }
    __asm { vmovss  xmm11, [rsp+1D0h+var_198] }
  }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+28h]
    vmovaps xmm3, xmm0
    vmovss  xmm0, cs:__real@3a83126f
    vandps  xmm1, xmm9, xmm8
    vcomiss xmm1, xmm0
  }
  if ( !v128 )
  {
    __asm
    {
      vandps  xmm1, xmm2, xmm8
      vcomiss xmm1, xmm0
      vmulss  xmm1, xmm12, xmm2
      vcomiss xmm1, xmm7
    }
    if ( v128 | v129 )
    {
      __asm
      {
        vandps  xmm12, xmm12, xmm8
        vcomiss xmm12, cs:__real@41400000
      }
      if ( v128 )
        __asm { vmulss  xmm9, xmm2, cs:__real@be99999a }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm12, xmm2
        vcomiss xmm0, cs:__real@3e4ccccd
      }
      if ( v128 )
      {
        __asm
        {
          vmulss  xmm0, xmm2, xmm3
          vmulss  xmm9, xmm0, cs:__real@c0a00000
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm4, cs:__real@3f000000
    vaddss  xmm0, xmm6, [rsp+1D0h+var_190]
    vaddss  xmm1, xmm10, [rsp+1D0h+var_18C]
    vmovss  dword ptr [rdi+24h], xmm1
    vmovss  dword ptr [rdi+20h], xmm0
    vaddss  xmm0, xmm9, [rsp+1D0h+var_188]
    vmovss  dword ptr [rdi+28h], xmm0
    vsubss  xmm0, xmm6, dword ptr [rdi+38h]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm6, xmm1, dword ptr [rdi+38h]
    vmovss  dword ptr [rdi+38h], xmm6
    vsubss  xmm0, xmm10, dword ptr [rdi+3Ch]
    vmovaps xmm10, xmmword ptr [rsp+1D0h+var_78+8]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm5, xmm1, dword ptr [rdi+3Ch]
    vmovss  dword ptr [rdi+3Ch], xmm5
    vsubss  xmm0, xmm9, dword ptr [rdi+40h]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm4, xmm1, dword ptr [rdi+40h]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm11
    vmovss  dword ptr [rdi+40h], xmm4
  }
  if ( !(v128 | v129) )
  {
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v128 | v129) )
    {
      __asm
      {
        vdivss  xmm2, xmm11, xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rdi+38h], xmm0
        vmulss  xmm0, xmm2, xmm4
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rdi+40h], xmm0
        vmovss  dword ptr [rdi+3Ch], xmm1
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovss  xmm3, dword ptr [rdi+28h]
    vmovss  xmm4, dword ptr [rdi+20h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmovss  xmm3, [rsp+1D0h+var_184]
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm3
  }
  if ( !(v128 | v129) )
  {
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v128 | v129) )
    {
      __asm
      {
        vdivss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rdi+20h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rdi+24h]
        vmovss  dword ptr [rdi+24h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+28h]
        vmovss  dword ptr [rdi+28h], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+74h]
    vaddss  xmm4, xmm0, dword ptr [rdi+20h]
    vmovss  dword ptr [rdi+20h], xmm4
    vmovss  xmm1, dword ptr [rdi+24h]
    vaddss  xmm2, xmm1, dword ptr [rdi+78h]
    vmovss  dword ptr [rdi+24h], xmm2
    vmovss  xmm0, dword ptr [rdi+28h]
    vaddss  xmm3, xmm0, dword ptr [rdi+7Ch]
    vmovss  dword ptr [rdi+28h], xmm3
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [rdi+4], xmm0
  }
  _RDI->dronePrevOrigin.v[0] = _RDI->origin.v[0];
  _RDI->dronePrevOrigin.v[1] = _RDI->origin.v[1];
  _RDI->dronePrevOrigin.v[2] = _RDI->origin.v[2];
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+20h]
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm2
    vmulss  xmm1, xmm0, dword ptr [rdi+24h]
    vaddss  xmm2, xmm1, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rdi+0Ch], xmm2
    vmulss  xmm0, xmm0, dword ptr [rdi+28h]
    vaddss  xmm1, xmm0, dword ptr [rdi+10h]
    vmovss  dword ptr [rdi+10h], xmm1
  }
  if ( _RDI->touchTriggers )
    G_VehicleHeli_TouchTriggers(_RDI->ent);
  if ( _RDI->breakGlass )
  {
    _RAX = vehBounds;
    __asm
    {
      vmovss  xmm3, cs:__real@3f400000
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmulss  xmm2, xmm3, dword ptr [rax+10h]
      vmovss  dword ptr [rbp+0D0h+bounds.midPoint], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+0D0h+bounds.midPoint+8], xmm0
      vmulss  xmm0, xmm3, dword ptr [rax+0Ch]
      vmovss  dword ptr [rbp+0D0h+bounds.midPoint+4], xmm1
      vmulss  xmm1, xmm3, dword ptr [rax+14h]
    }
    ent = veh->ent;
    __asm
    {
      vmovss  dword ptr [rbp+0D0h+bounds.halfSize], xmm0
      vmovss  dword ptr [rbp+0D0h+bounds.halfSize+4], xmm2
      vmovss  dword ptr [rbp+0D0h+bounds.halfSize+8], xmm1
    }
    G_Main_TraceCapsule(&results, &start, &_RDI->origin, &bounds, ent->s.number, 16);
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+results.fraction]
      vcomiss xmm0, xmm13
    }
    if ( v45 )
    {
      GlassHitId = Trace_GetGlassHitId(&results);
      if ( GlassHitId )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rdi+24h]
          vmovss  xmm4, dword ptr [rdi+20h]
          vmovss  xmm6, dword ptr [rdi+28h]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm13, xmm0
          vdivss  xmm2, xmm13, xmm0
          vmulss  xmm0, xmm4, xmm2
          vmovss  [rsp+1D0h+v1], xmm0
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm5, xmm2
          vmovss  [rsp+1D0h+var_170], xmm0
          vmovss  [rsp+1D0h+var_174], xmm1
        }
        G_Glass_DestroyPiece(GlassHitId - 1, &_RDI->origin, &v1);
      }
    }
  }
LABEL_60:
  __asm { vmovaps xmm2, xmm15; distToGoal }
  G_VehicleHeli_UpdateMoveOrientation(_RDI, &forward, *(float *)&_XMM2);
  __asm { vmovaps xmm13, xmmword ptr [rsp+1D0h+var_A8+8] }
  _R11 = &v250;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
G_VehicleHeliMP_DroneSetGoalEnt
==============
*/
void G_VehicleHeliMP_DroneSetGoalEnt(Vehicle *veh, HeliPathPos *pathPos, gentity_s *owner, const vec3_t *offset, float autoRecalcDestinationDistance, float autoRecalcDestinationAngle)
{
  gclient_s *client; 

  _RBX = pathPos;
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1194, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1195, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !_RDI->useDroneLogic )
  {
    __asm
    {
      vmovss  xmm0, cs:DRONE_HOVER_OFFSET_RECALC_TIME
      vmovss  dword ptr [rbx+70h], xmm0
    }
  }
  _RDI->useDroneLogic = 1;
  client = owner->client;
  _RBX->goalPosition.v[0] = client->ps.origin.v[0];
  _RBX->goalPosition.v[1] = client->ps.origin.v[1];
  _RBX->goalPosition.v[2] = client->ps.origin.v[2];
  _RBX->droneOffset.v[0] = offset->v[0];
  _RBX->droneOffset.v[1] = offset->v[1];
  _RBX->droneOffset.v[2] = offset->v[2];
  EntHandle::setEnt(&_RDI->droneTarget, owner);
  _RBX->droneMoveState = DRONEMOVESTATE_UNKNOWN;
  if ( owner->health <= 0 )
  {
    _RBX->moveState = VEH_MOVESTATE_HOVER;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+38h+autoRecalcDestinationDistance]
      vmovss  xmm1, [rsp+38h+autoRecalcDestinationAngle]
      vmovss  dword ptr [rbx+29Ch], xmm0
      vmovss  dword ptr [rbx+2A0h], xmm1
    }
    _RBX->stopAtGoal = 1;
    _RBX->moveState = VEH_MOVESTATE_MOVE;
    _RBX->stopping = 0;
    _RBX->hover.droneHoverStatic = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0F0h]
      vmovss  dword ptr [rbx+8], xmm0
    }
    _RBX->origin.v[1] = _RDI->phys.origin.v[1];
    _RBX->origin.v[2] = _RDI->phys.origin.v[2];
    __asm { vmovss  dword ptr [rbx+0C4h], xmm0 }
    _RBX->dronePrevOrigin.v[1] = _RBX->origin.v[1];
    _RBX->dronePrevOrigin.v[2] = _RBX->origin.v[2];
    G_VehicleHeliMP_DroneCalcNavPath(_RDI, _RBX);
  }
}

/*
==============
G_VehicleHeliMP_DroneSetGoalPos
==============
*/
void G_VehicleHeliMP_DroneSetGoalPos(Vehicle *veh, HeliPathPos *pathPos, const vec3_t *position, bool bStopAtDest)
{
  _RBX = pathPos;
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1127, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1128, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !_RDI->useDroneLogic )
  {
    __asm
    {
      vmovss  xmm0, cs:DRONE_HOVER_OFFSET_RECALC_TIME
      vmovss  dword ptr [rbx+70h], xmm0
    }
  }
  _RDI->useDroneLogic = 1;
  _RBX->goalPosition.v[0] = position->v[0];
  _RBX->goalPosition.v[1] = position->v[1];
  _RBX->goalPosition.v[2] = position->v[2];
  *(_QWORD *)_RBX->droneOffset.v = 0i64;
  _RBX->droneOffset.v[2] = 0.0;
  EntHandle::setEnt(&_RDI->droneTarget, NULL);
  _RBX->droneMoveState = DRONEMOVESTATE_UNKNOWN;
  _RBX->moveState = VEH_MOVESTATE_MOVE;
  _RBX->stopping = 0;
  _RBX->hover.droneHoverStatic = 0;
  *(_QWORD *)&_RBX->droneRecalcDestinationDistance = 0i64;
  _RBX->stopAtGoal = bStopAtDest;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0F0h]
    vmovss  dword ptr [rbx+8], xmm0
  }
  _RBX->origin.v[1] = _RDI->phys.origin.v[1];
  _RBX->origin.v[2] = _RDI->phys.origin.v[2];
  __asm { vmovss  dword ptr [rbx+0C4h], xmm0 }
  _RBX->dronePrevOrigin.v[1] = _RBX->origin.v[1];
  _RBX->dronePrevOrigin.v[2] = _RBX->origin.v[2];
  G_VehicleHeliMP_DroneCalcNavPath(_RDI, _RBX);
}

/*
==============
G_VehicleHeliMP_DroneTurnCorner
==============
*/
void G_VehicleHeliMP_DroneTurnCorner(HeliPathPos *pathPos, const vec3_t *newTarget)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+24h]
    vmovss  xmm3, dword ptr [rcx+28h]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx+20h]
    vmulss  xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm7, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm9, xmm0, dword ptr [rcx+10h]
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm8, xmm1, dword ptr [rcx+0Ch]
    vsqrtss xmm10, xmm2, xmm2
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm2, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, cs:__real@3f19999a
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm2, cs:__real@3ecccccc
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovaps xmm6, xmmword ptr [rax-18h]
    vmovss  dword ptr [rcx+20h], xmm0
    vmulss  xmm2, xmm2, dword ptr [rcx+24h]
    vmovss  dword ptr [rcx+24h], xmm2
    vmulss  xmm1, xmm3, dword ptr [rcx+28h]
    vmovss  dword ptr [rcx+28h], xmm1
    vmulss  xmm4, xmm10, xmm3
    vmulss  xmm0, xmm7, xmm5
    vmovaps xmm7, xmmword ptr [rax-28h]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rcx+20h]
    vmulss  xmm0, xmm8, xmm5
    vmovaps xmm8, xmmword ptr [rax-38h]
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rcx+20h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rcx+24h]
    vmulss  xmm0, xmm9, xmm5
    vmulss  xmm1, xmm0, cs:__real@3ecccccd
    vmovaps xmm9, xmmword ptr [rax-48h]
    vmovss  dword ptr [rcx+24h], xmm2
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rcx+28h]
    vmovaps xmm10, [rsp+58h+var_58]
    vmovss  dword ptr [rcx+28h], xmm3
  }
}

/*
==============
G_VehicleHeliMP_DroneUpdateHover
==============
*/
void G_VehicleHeliMP_DroneUpdateHover(const Vehicle *veh, HeliPathPos *pathPos)
{
  const gentity_s *v21; 
  nav_space_s *DefaultSpace; 
  gentity_s *ent; 
  unsigned int v51; 
  gentity_s *v74; 
  const vec3_t *p_origin; 
  char v78; 
  bool v79; 
  bool startsolid; 
  const dvar_t *v110; 
  vec3_t endPos; 
  vec3_t v116; 
  vec3_t moveTo; 
  vec3_t right; 
  vec3_t end; 
  vec4_t v120; 
  vec3_t outAngles; 
  vec3_t startPos; 
  Bounds bounds; 
  nav_probe_results_3D_s pOutResults; 
  vec4_t v125; 
  vec4_t color; 
  trace_t results; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = pathPos;
  __asm { vmovaps xmmword ptr [r11-78h], xmm9 }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 688, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 689, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 690, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v79 = _RBX->hover.droneHoverStatic == 0;
  _RAX = veh->ent;
  __asm
  {
    vmovss  xmm2, cs:MAX_DRONE_SIZE
    vmovaps [rsp+210h+var_48+8], xmm6
    vxorps  xmm9, xmm9, xmm9
    vmovss  xmm0, dword ptr [rax+110h]
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vminss  xmm1, xmm3, xmm0
    vmovaps [rsp+210h+var_58+8], xmm7
    vmovaps [rsp+210h+var_68+8], xmm8
    vmovss  dword ptr [rbp+110h+bounds.halfSize], xmm1
    vmovss  dword ptr [rbp+110h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+110h+bounds.halfSize+8], xmm1
    vmovss  dword ptr [rbp+110h+bounds.midPoint], xmm9
    vmovss  dword ptr [rbp+110h+bounds.midPoint+4], xmm9
    vmovss  dword ptr [rbp+110h+bounds.midPoint+8], xmm9
    vmovaps [rsp+210h+var_88+8], xmm10
  }
  if ( v79 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+0A0h]
      vmovss  xmm1, dword ptr [rbx+0A4h]
      vmovss  xmm0, dword ptr [rbx+0A8h]
      vmovss  dword ptr [rbp+110h+startPos], xmm2
      vmovss  dword ptr [rbp+110h+startPos+4], xmm1
      vmovss  dword ptr [rbp+110h+startPos+8], xmm0
      vmovss  dword ptr [rsp+210h+endPos], xmm2
      vmovss  dword ptr [rsp+210h+endPos+4], xmm1
      vmovss  dword ptr [rsp+210h+endPos+8], xmm0
      vmovss  dword ptr [rsp+210h+var_1C0], xmm2
      vmovss  dword ptr [rsp+210h+var_1C0+4], xmm1
      vmovss  dword ptr [rsp+210h+var_1C0+8], xmm0
    }
    if ( EntHandle::isDefined(&veh->droneTarget) && EntHandle::ent(&veh->droneTarget)->health > 0 )
    {
      v21 = EntHandle::ent(&veh->droneTarget);
      G_Utils_GetAnglesWithWorldUp(v21, &outAngles);
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbp+110h+outAngles], xmm9
        vmovss  dword ptr [rbp+110h+outAngles+4], xmm9
        vmovss  dword ptr [rbp+110h+outAngles+8], xmm9
      }
    }
    AngleVectors(&outAngles, (vec3_t *)&v125, &right, (vec3_t *)&color);
    __asm
    {
      vmovss  xmm1, cs:MAX_DRONE_HOVER_DRIFT_OFFSET
      vmulss  xmm4, xmm1, dword ptr [rsp+210h+right+4]
      vmulss  xmm3, xmm1, dword ptr [rsp+210h+right+8]
      vmulss  xmm5, xmm1, dword ptr [rsp+210h+right]
      vaddss  xmm0, xmm4, dword ptr [rsp+210h+endPos+4]
      vaddss  xmm1, xmm5, dword ptr [rsp+210h+endPos]
      vaddss  xmm2, xmm3, dword ptr [rsp+210h+endPos+8]
      vmovss  dword ptr [rsp+210h+endPos+4], xmm0
      vmovss  xmm0, dword ptr [rsp+210h+var_1C0]
      vmovss  dword ptr [rsp+210h+endPos], xmm1
      vsubss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rsp+210h+endPos+8], xmm2
      vmovss  xmm2, dword ptr [rsp+210h+var_1C0+4]
      vsubss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rsp+210h+var_1C0], xmm1
      vmovss  xmm1, dword ptr [rsp+210h+var_1C0+8]
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+210h+var_1C0+8], xmm2
      vmovss  dword ptr [rsp+210h+right], xmm5
      vmovss  dword ptr [rsp+210h+right+4], xmm4
      vmovss  dword ptr [rsp+210h+right+8], xmm3
      vmovss  dword ptr [rsp+210h+var_1C0+4], xmm0
      vmovss  dword ptr [rbp+110h+var_180+8], xmm9
    }
    *(_QWORD *)v120.v = -1i64;
    DefaultSpace = Nav_GetDefaultSpace();
    if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 739, ASSERT_TYPE_ASSERT, "( space )", (const char *)&queryFormat, "space") )
      __debugbreak();
    if ( Nav_Trace3D(DefaultSpace, &startPos, &endPos, (const bfx::Path3DSpec *)&v120, &pOutResults) )
    {
      __asm
      {
        vmovss  xmm10, [rbp+110h+pOutResults.m_DistTraveled]
        vmovss  xmm6, dword ptr [rbp+110h+pOutResults.m_EndPos]
        vmovss  xmm7, dword ptr [rbp+110h+pOutResults.m_EndPos+4]
        vmovss  xmm8, dword ptr [rbp+110h+pOutResults.m_EndPos+8]
      }
      if ( Nav_Trace3D(DefaultSpace, &startPos, &v116, (const bfx::Path3DSpec *)&v120, &pOutResults) )
      {
        __asm
        {
          vmovss  xmm0, [rbp+110h+pOutResults.m_DistTraveled]
          vcomiss xmm0, xmm10
          vmovss  xmm6, dword ptr [rbp+110h+pOutResults.m_EndPos]
          vmovss  xmm7, dword ptr [rbp+110h+pOutResults.m_EndPos+4]
          vmovss  xmm8, dword ptr [rbp+110h+pOutResults.m_EndPos+8]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+210h+var_1C0]
          vmovss  xmm7, dword ptr [rsp+210h+var_1C0+4]
          vmovss  xmm8, dword ptr [rsp+210h+var_1C0+8]
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+210h+endPos]
        vmovss  xmm7, dword ptr [rsp+210h+endPos+4]
        vmovss  xmm8, dword ptr [rsp+210h+endPos+8]
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+50h], xmm6
      vmovss  dword ptr [rbx+54h], xmm7
      vmovss  dword ptr [rbx+58h], xmm8
    }
  }
  else
  {
    _RBX->hover.hoverGoalPos.v[0] = _RBX->origin.v[0];
    _RBX->hover.hoverGoalPos.v[1] = _RBX->origin.v[1];
    _RBX->hover.hoverGoalPos.v[2] = _RBX->origin.v[2];
    _RBX->hover.droneHoverStatic = 1;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vaddss  xmm2, xmm1, dword ptr [rbx+70h]
    vmovss  xmm0, cs:DRONE_HOVER_OFFSET_RECALC_TIME
    vcomiss xmm2, xmm0
    vmovss  dword ptr [rbx+70h], xmm2
  }
  ent = _RBX->ent;
  __asm
  {
    vsubss  xmm0, xmm2, xmm0
    vmovss  dword ptr [rbx+70h], xmm0
  }
  if ( ent->vehicle->useDroneLogic )
  {
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    v51 = 0;
    _R12 = &DRONE_RAND_OFFSET_RANGE;
    do
    {
      _RSI = (int)v51;
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+rsi*4+64h]
        vmovss  xmm6, dword ptr [r12+rsi*4]
        vmovss  xmm0, dword ptr [r12+rsi*4]
        vxorps  xmm0, xmm0, xmm8; min
        vmovaps xmm1, xmm6; max
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vandps  xmm0, xmm0, xmm10
        vxorps  xmm2, xmm0, xmm8
        vcmpless xmm1, xmm9, xmm7
        vblendvps xmm0, xmm2, xmm0, xmm1
        vxorps  xmm6, xmm0, xmm8
      }
      ++v51;
      __asm { vmovss  dword ptr [rbx+rsi*4+64h], xmm6 }
    }
    while ( v51 < 3 );
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@40400000; max
      vmovss  xmm0, cs:__real@c0400000; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, cs:__real@40400000; max
      vmovss  dword ptr [rbx+64h], xmm0
      vmovss  xmm0, cs:__real@c0400000; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000; max
      vmovss  dword ptr [rbx+68h], xmm0
      vmovss  xmm0, cs:__real@bf800000; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+50h]
    vaddss  xmm1, xmm0, dword ptr [rbx+64h]
    vmovss  xmm2, dword ptr [rbx+68h]
    vaddss  xmm0, xmm2, dword ptr [rbx+54h]
  }
  v74 = veh->ent;
  p_origin = &_RBX->origin;
  __asm
  {
    vmovss  dword ptr [rbp+110h+end], xmm1
    vmovss  xmm1, dword ptr [rbx+6Ch]
    vaddss  xmm2, xmm1, dword ptr [rbx+58h]
    vmovss  dword ptr [rbp+110h+end+8], xmm2
    vmovss  dword ptr [rbp+110h+end+4], xmm0
  }
  G_Main_TraceCapsule(&results, &_RBX->origin, &end, &bounds, v74->s.number, 2609);
  __asm
  {
    vmovss  xmm5, [rbp+110h+results.fraction]
    vcomiss xmm5, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rbp+110h+end]
    vsubss  xmm1, xmm0, dword ptr [rdi]
  }
  startsolid = results.startsolid;
  __asm
  {
    vmovaps xmm10, [rsp+210h+var_88+8]
    vmovaps xmm8, [rsp+210h+var_68+8]
    vmovaps xmm7, [rsp+210h+var_58+8]
    vmovaps xmm6, [rsp+210h+var_48+8]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbp+110h+end+4]
    vmovss  dword ptr [rsp+210h+moveTo], xmm0
    vsubss  xmm0, xmm1, dword ptr [rdi+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbp+110h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+210h+moveTo+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+210h+moveTo+8], xmm3
  }
  if ( v78 || (v78 = 0, v79 = !results.startsolid, results.startsolid) )
  {
    __asm
    {
      vmovss  xmm0, cs:DRONE_HOVER_OFFSET_RECALC_TIME
      vaddss  xmm1, xmm0, dword ptr [rbx+70h]
      vmovss  dword ptr [rbx+70h], xmm1
    }
  }
  __asm
  {
    vcomiss xmm5, xmm9
    vmovaps xmm9, [rsp+210h+var_78+8]
  }
  if ( v78 | v79 || startsolid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+50h]
      vmovss  xmm1, dword ptr [rbx+54h]
      vmovss  dword ptr [rsp+210h+moveTo], xmm0
      vmovss  xmm0, dword ptr [rbx+58h]
      vmovss  dword ptr [rsp+210h+moveTo+8], xmm0
      vmovss  dword ptr [rsp+210h+moveTo+4], xmm1
    }
  }
  G_VehicleHeliMP_DroneMoveTo(veh, _RBX, &moveTo, 1, &bounds);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@ba83126f
    vmulss  xmm2, xmm1, dword ptr [rbx+80h]
    vaddss  xmm3, xmm2, cs:__real@3f800000
    vmulss  xmm0, xmm3, dword ptr [rbx+74h]
    vmovss  dword ptr [rbx+74h], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbx+78h]
    vmovss  dword ptr [rbx+78h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+7Ch]
    vmovss  dword ptr [rbx+7Ch], xmm0
  }
  v110 = DVARBOOL_vehDroneDebugDrawPath;
  if ( !DVARBOOL_vehDroneDebugDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehDroneDebugDrawPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v110);
  if ( v110->current.enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f0000003f0000003f000000
      vmovups xmm1, cs:__xmm@3f8000003f800000000000003f800000
      vmovups xmmword ptr [rbp+110h+color], xmm0
      vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
      vmovups xmmword ptr [rbp+110h+var_180], xmm1
      vmovss  xmm1, dword ptr [rbp+110h+bounds.halfSize]; radius
      vmovups xmmword ptr [rbp+110h+var_118], xmm0
    }
    G_DebugSphere(p_origin, *(float *)&_XMM1, &color, 0, 0);
    G_DebugLine(p_origin, &moveTo, &v120, 1);
    G_DebugLine(p_origin, &endPos, &v125, 1);
    G_DebugLine(p_origin, &v116, &v125, 1);
  }
}

/*
==============
G_VehicleHeliMP_DroneUpdateMoveInternal
==============
*/

void __fastcall G_VehicleHeliMP_DroneUpdateMoveInternal(const Vehicle *veh, HeliPathPos *pathPos, __int64 a3, double _XMM3_8)
{
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  int v20; 
  bool v21; 
  bool v22; 
  int v23; 
  __int64 v42; 
  __int64 v43; 
  vec3_t outAngles; 

  _RBX = pathPos;
  Value = (char *)Sys_GetValue(0);
  v10 = (int *)(Value + 4056);
  if ( (unsigned int)(*((_DWORD *)Value + 1014) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1014) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v10 >= 3 )
  {
    LODWORD(v43) = 3;
    LODWORD(v42) = *v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v10;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = *v10;
  v14 = __rdtsc();
  v10[v13 + 2] = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 49, NULL, 0);
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1068, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1069, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !veh->useDroneLogic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1070, ASSERT_TYPE_ASSERT, "( veh->useDroneLogic )", (const char *)&queryFormat, "veh->useDroneLogic") )
    __debugbreak();
  if ( EntHandle::isDefined(&veh->droneTarget) && EntHandle::ent(&veh->droneTarget)->health > 0 )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    _RAX = EntHandle::ent(&veh->droneTarget);
    __asm
    {
      vmovss  xmm6, dword ptr [rax+130h]
      vmovss  xmm7, dword ptr [rax+134h]
      vmovss  xmm8, dword ptr [rax+138h]
    }
    G_Utils_GetAnglesWithWorldUp(_RAX, &outAngles);
    v20 = _RBX->numDroneNavPathNodes - 1;
    v21 = _RBX->currentDroneNavPathNodeIndex == v20;
    v22 = _RBX->currentDroneNavPathNodeIndex <= (unsigned int)v20;
    if ( _RBX->currentDroneNavPathNodeIndex >= v20 || (v23 = _RBX->droneLastNavRecalcTime + 1000, v21 = level.time == v23, v22 = level.time <= (unsigned int)v23, level.time > v23) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+2A0h]
        vxorps  xmm3, xmm3, xmm3
        vucomiss xmm2, xmm3
      }
      if ( !v21 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0B8h+outAngles+4]
          vsubss  xmm1, xmm0, dword ptr [rbx+284h]
          vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, xmm2
        }
        if ( !v22 )
          goto LABEL_47;
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rbx+29Ch]
        vucomiss xmm4, xmm3
      }
      if ( !v21 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, dword ptr [rbx+27Ch]
          vsubss  xmm2, xmm6, dword ptr [rbx+278h]
          vsubss  xmm3, xmm8, dword ptr [rbx+280h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vcomiss xmm3, xmm0
        }
        if ( !v22 )
        {
LABEL_47:
          __asm
          {
            vmovss  dword ptr [rbx+0A0h], xmm6
            vmovss  dword ptr [rbx+0A4h], xmm7
            vmovss  dword ptr [rbx+0A8h], xmm8
          }
          if ( (unsigned int)G_VehicleHeliMP_DroneCalcNavPath(veh, _RBX) )
          {
            if ( _RBX->numDroneNavPathNodes > 0 )
            {
              _RBX->droneMoveState = DRONEMOVESTATE_TO_NODE;
              _RBX->moveState = VEH_MOVESTATE_MOVE;
            }
          }
        }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
      vmovaps xmm8, [rsp+0B8h+var_58]
    }
  }
  if ( _RBX->moveState == VEH_MOVESTATE_MOVE )
  {
    G_VehicleHeliMP_DroneUpdateMoveToGoal(veh, _RBX);
  }
  else if ( _RBX->moveState == VEH_MOVESTATE_HOVER )
  {
    G_VehicleHeliMP_DroneUpdateHover(veh, _RBX);
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_VehicleHeliMP_DroneUpdateMoveToGoal
==============
*/
void G_VehicleHeliMP_DroneUpdateMoveToGoal(const Vehicle *veh, HeliPathPos *pathPos)
{
  bool IsHovering; 
  BOOL v33; 
  bool v36; 
  int numDroneNavPathNodes; 
  bool v54; 
  bool v55; 
  bool v56; 
  int currentDroneNavPathNodeIndex; 
  unsigned int v89; 
  DroneMoveState droneMoveState; 
  __int32 v92; 
  const dvar_t *v99; 
  __int64 v102; 
  vec3_t start; 
  vec3_t moveTo; 
  vec4_t v116; 
  Bounds vehBounds; 
  vec4_t color; 
  vec4_t v121; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _RBX = pathPos;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 879, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 880, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0A0h]
    vsubss  xmm3, xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx+0A4h]
    vsubss  xmm2, xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rbx+0A8h]
    vsubss  xmm4, xmm0, dword ptr [rbx+10h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RAX = veh->ent;
  __asm
  {
    vmovss  xmm2, cs:MAX_DRONE_SIZE
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+150h+vehBounds.midPoint], xmm6
    vmovss  xmm0, dword ptr [rax+110h]
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vminss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm1, cs:__real@3f4ccccd
    vmovss  dword ptr [rsp+150h+var_F0+0Ch], xmm0
    vmovss  [rsp+150h+var_E0], xmm0
    vmovss  [rsp+150h+var_DC], xmm0
    vmovss  dword ptr [rsp+150h+vehBounds.midPoint+4], xmm6
    vmovss  dword ptr [rbp+50h+vehBounds.midPoint+8], xmm6
    vmovss  dword ptr [rbp+50h+vehBounds.halfSize], xmm1
    vmovss  dword ptr [rbp+50h+vehBounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+50h+vehBounds.halfSize+8], xmm1
    vmovss  dword ptr [rsp+150h+var_F0], xmm6
    vmovss  dword ptr [rsp+150h+var_F0+4], xmm6
    vmovss  dword ptr [rsp+150h+var_F0+8], xmm6
  }
  IsHovering = G_VehicleHeli_IsHovering(_RBX);
  v33 = IsHovering;
  if ( !IsHovering )
  {
    __asm { vmovaps xmm1, xmm7; distToGoal }
    G_VehicleHeli_UpdateMove_CheckNearGoal(_RBX, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm7; distToGoal }
    G_VehicleHeli_UpdateMove_CheckGoalReached(_RBX, *(float *)&_XMM1);
    v36 = G_VehicleHeli_IsHovering(_RBX);
    v33 = v36;
    if ( v36 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmovss  xmm2, dword ptr [rbx+24h]
        vmovss  xmm3, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vmovss  xmm3, cs:__real@3f800000
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm7, xmm2, xmm2
        vcomiss xmm7, xmm6
      }
      *(double *)&_XMM0 = G_VehicleHeli_GetHoverSpeed(_RBX);
      __asm
      {
        vdivss  xmm1, xmm0, xmm7
        vminss  xmm3, xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm3, dword ptr [rbx+20h]
        vmovss  dword ptr [rbx+20h], xmm0
        vmulss  xmm1, xmm3, dword ptr [rbx+24h]
        vmovss  dword ptr [rbx+24h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+28h]
        vmovss  dword ptr [rbx+28h], xmm0
        vmulss  xmm0, xmm3, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
  }
  if ( !v33 )
  {
    if ( _RBX->droneMoveState == DRONEMOVESTATE_TO_NODE )
    {
      numDroneNavPathNodes = _RBX->numDroneNavPathNodes;
      __asm
      {
        vmovaps [rsp+150h+var_68+8], xmm9
        vmovaps [rsp+150h+var_78+8], xmm10
        vmovaps [rsp+150h+var_88+8], xmm11
        vmovaps [rsp+150h+var_98+8], xmm12
      }
      if ( _RBX->currentDroneNavPathNodeIndex >= numDroneNavPathNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 932, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes)", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes") )
        __debugbreak();
      v54 = _RBX->currentDroneNavPathNodeIndex < 0x20u;
      v55 = _RBX->currentDroneNavPathNodeIndex <= 0x20u;
      if ( _RBX->currentDroneNavPathNodeIndex >= 0x20u )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 933, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )");
        v54 = 0;
        v55 = !v56;
        if ( v56 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+8]
        vmovss  xmm2, dword ptr [rbx+0Ch]
        vmovss  xmm3, dword ptr [rbx+10h]
        vmovss  xmm0, dword ptr [rbx+0C4h]
      }
      currentDroneNavPathNodeIndex = _RBX->currentDroneNavPathNodeIndex;
      __asm
      {
        vsubss  xmm10, xmm0, xmm1
        vmovss  xmm0, dword ptr [rbx+0CCh]
        vsubss  xmm12, xmm0, xmm3
        vsubss  xmm7, xmm1, dword ptr [rbx+rcx*4+0ECh]
        vmovss  xmm1, dword ptr [rbx+0C8h]
        vsubss  xmm9, xmm2, dword ptr [rbx+rcx*4+0F0h]
        vsubss  xmm4, xmm3, dword ptr [rbx+rcx*4+0F4h]
        vsubss  xmm11, xmm1, xmm2
        vmulss  xmm2, xmm9, xmm9
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm3, xmm11, xmm11
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm0, xmm10, xmm10
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm12, xmm12
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm6
      }
      if ( !v55 )
      {
        __asm
        {
          vmulss  xmm1, xmm11, xmm9
          vmulss  xmm0, xmm10, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm12, xmm4
          vaddss  xmm2, xmm2, xmm1
          vdivss  xmm0, xmm2, xmm3
          vcomiss xmm0, xmm6
        }
        if ( !v54 )
          __asm { vcomiss xmm0, cs:__real@3f800000 }
      }
      __asm { vcomiss xmm5, cs:__real@41800000 }
      if ( v54 )
      {
        __asm
        {
          vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm4, cs:__real@40800000
        }
        if ( v54 )
        {
          _RBX->currentDroneNavPathNodeIndex = currentDroneNavPathNodeIndex + 1;
          if ( currentDroneNavPathNodeIndex + 1 < _RBX->numDroneNavPathNodes )
          {
            if ( (unsigned int)(currentDroneNavPathNodeIndex + 1) >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 962, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
              __debugbreak();
            G_VehicleHeliMP_DroneTurnCorner(_RBX, &_RBX->droneNavPath[_RBX->currentDroneNavPathNodeIndex]);
          }
          else
          {
            _RBX->droneMoveState = DRONEMOVESTATE_UNKNOWN;
          }
        }
      }
      __asm
      {
        vmovaps xmm11, [rsp+150h+var_88+8]
        vmovaps xmm10, [rsp+150h+var_78+8]
        vmovaps xmm9, [rsp+150h+var_68+8]
        vmovaps xmm12, [rsp+150h+var_98+8]
      }
    }
    if ( _RBX->droneMoveState == DRONEMOVESTATE_UNKNOWN )
    {
      v89 = _RBX->currentDroneNavPathNodeIndex;
      if ( (signed int)v89 < _RBX->numDroneNavPathNodes )
      {
        _RBX->droneMoveState = DRONEMOVESTATE_TO_NODE;
        if ( v89 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 980, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
          __debugbreak();
        G_VehicleHeliMP_DroneTurnCorner(_RBX, &_RBX->droneNavPath[_RBX->currentDroneNavPathNodeIndex]);
      }
    }
  }
  droneMoveState = _RBX->droneMoveState;
  __asm { vmovaps xmm7, [rsp+150h+var_58+8] }
  if ( droneMoveState == DRONEMOVESTATE_UNKNOWN || v33 )
  {
    G_VehicleHeliMP_DroneUpdateHover(veh, _RBX);
    goto LABEL_62;
  }
  v92 = droneMoveState - 1;
  if ( v92 )
  {
    if ( v92 != 1 )
      goto LABEL_62;
    if ( _RBX->currentDroneNavPathNodeIndex >= _RBX->numDroneNavPathNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1015, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes)", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes") )
      __debugbreak();
    if ( _RBX->currentDroneNavPathNodeIndex >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1016, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
      __debugbreak();
    _RCX = 3i64 * _RBX->currentDroneNavPathNodeIndex;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rcx*4+0ECh]
      vmovss  dword ptr [rsp+150h+moveTo], xmm0
      vmovss  xmm1, dword ptr [rbx+rcx*4+0F0h]
      vmovss  dword ptr [rsp+150h+moveTo+4], xmm1
      vmovss  xmm0, dword ptr [rbx+rcx*4+0F4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0E0h]
      vmovss  xmm1, dword ptr [rbx+0E4h]
      vmovss  dword ptr [rsp+150h+moveTo], xmm0
      vmovss  xmm0, dword ptr [rbx+0E8h]
      vmovss  dword ptr [rsp+150h+moveTo+4], xmm1
    }
  }
  __asm { vmovss  dword ptr [rsp+150h+moveTo+8], xmm0 }
  G_VehicleHeliMP_DroneMoveTo(veh, _RBX, &moveTo, 0, &vehBounds);
  v99 = DVARBOOL_vehDroneDebugDrawPath;
  if ( !DVARBOOL_vehDroneDebugDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehDroneDebugDrawPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v99);
  if ( v99->current.enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f0000003f0000003f000000
      vmovups xmm1, cs:__xmm@3f8000003f800000000000003f800000
    }
    v102 = _RBX->currentDroneNavPathNodeIndex;
    __asm
    {
      vmovups xmmword ptr [rbp+50h+var_B0], xmm0
      vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
      vmovups xmmword ptr [rsp+150h+var_F0], xmm1
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+150h+start], xmm1
      vmovss  xmm1, dword ptr [rbx+10h]
      vmovups xmmword ptr [rbp+50h+color], xmm0
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rsp+150h+start+4], xmm0
      vmovss  dword ptr [rsp+150h+start+8], xmm1
    }
    if ( (int)v102 < _RBX->numDroneNavPathNodes )
    {
      __asm { vmovss  xmm6, dword ptr [rbp+50h+vehBounds.halfSize] }
      _RDI = (__int64)&_RBX->droneNavPath[v102].z;
      do
      {
        G_DebugLine(&start, &_RBX->droneNavPath[(int)v102], &color, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-8]
          vmovss  dword ptr [rsp+150h+start], xmm0
          vmovss  xmm1, dword ptr [rdi-4]
          vmovss  dword ptr [rsp+150h+start+4], xmm1
          vmovss  xmm0, dword ptr [rdi]
          vmovaps xmm1, xmm6; radius
          vmovss  dword ptr [rsp+150h+start+8], xmm0
        }
        G_DebugSphere(&start, *(float *)&_XMM1, &v121, 0, 0);
        LODWORD(v102) = v102 + 1;
        _RDI += 12i64;
      }
      while ( (int)v102 < _RBX->numDroneNavPathNodes );
    }
    G_DebugLine(&_RBX->origin, &moveTo, &v116, 0);
    G_DebugLine(&_RBX->origin, &_RBX->goalPosition, &color, 0);
  }
LABEL_62:
  __asm { vmovaps xmm6, xmmword ptr [rsp+150h+var_48+8] }
}

/*
==============
G_VehicleHeliMP_Spawn
==============
*/
void G_VehicleHeliMP_Spawn(gentity_s *ent, gentity_s *owner, const char *vehicleInfoName, const char *modelName)
{
  __int64 v8; 
  bool IsNameCompositeModel; 
  Vehicle *vehicle; 
  int v15; 
  vec3_t outPos; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 76, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 77, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( !vehicleInfoName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 78, ASSERT_TYPE_ASSERT, "(vehicleInfoName)", (const char *)&queryFormat, "vehicleInfoName") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 79, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  v8 = 12i64;
  IsNameCompositeModel = G_Utils_IsNameCompositeModel(modelName);
  G_XCompositeModel_Clear(ET_HELICOPTER, ent);
  if ( IsNameCompositeModel )
    G_Utils_SetCompositeModel(ent, ET_HELICOPTER, modelName);
  else
    G_Utils_SetModel(ent, modelName);
  G_Vehicle_Create(ent, vehicleInfoName, owner, 0);
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 97, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _R14 = &vehicle->phys;
  if ( G_Vehicle_GetServerDef(vehicle->defIndex)->type != VEH_HELICOPTER )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4C280, 189i64, vehicleInfoName);
  if ( ent->s.eType != ET_HELICOPTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 105, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_HELICOPTER)", (const char *)&queryFormat, "ent->s.eType == ET_HELICOPTER") )
    __debugbreak();
  _RBX = DVARFLT_vehHelicopterBoundsRadius;
  if ( !DVARFLT_vehHelicopterBoundsRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterBoundsRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = vehicle->phys.wheelZPos;
  *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
  vehicle->phys.bounds.midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [r14+3Ch], xmm0
    vmovss  dword ptr [r14+40h], xmm0
    vmovss  dword ptr [r14+44h], xmm0
  }
  do
  {
    v15 = *((_DWORD *)_RBX + 340);
    if ( v15 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(ent, v15, &outPos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+outPos+8]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    ++_RBX;
    --v8;
  }
  while ( v8 );
  G_Vehicle_SetPosition(ent, &vehicle->phys.origin, &vec3_origin, &vehicle->phys.angles, 1);
  vehicle->phys.prevOrigin.v[0] = vehicle->phys.origin.v[0];
  vehicle->phys.prevOrigin.v[1] = vehicle->phys.origin.v[1];
  vehicle->phys.prevOrigin.v[2] = vehicle->phys.origin.v[2];
  vehicle->phys.prevAngles.v[0] = vehicle->phys.angles.v[0];
  vehicle->phys.prevAngles.v[1] = vehicle->phys.angles.v[1];
  vehicle->phys.prevAngles.v[2] = vehicle->phys.angles.v[2];
  ent->health = 99999;
}

