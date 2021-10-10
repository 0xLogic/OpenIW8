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
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1172, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1173, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( veh->useDroneLogic != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1174, ASSERT_TYPE_ASSERT, "( veh->useDroneLogic == qtrue )", (const char *)&queryFormat, "veh->useDroneLogic == qtrue") )
    __debugbreak();
  if ( accumulates )
  {
    pathPos->hover.velocityImpulse.v[0] = pathPos->hover.velocityImpulse.v[0] + velocityVector->v[0];
    pathPos->hover.velocityImpulse.v[1] = pathPos->hover.velocityImpulse.v[1] + velocityVector->v[1];
    pathPos->hover.velocityImpulse.v[2] = pathPos->hover.velocityImpulse.v[2] + velocityVector->v[2];
  }
  else
  {
    pathPos->hover.velocityImpulse.v[0] = velocityVector->v[0];
    pathPos->hover.velocityImpulse.v[1] = velocityVector->v[1];
    pathPos->hover.velocityImpulse.v[2] = velocityVector->v[2];
  }
  _XMM0 = LODWORD(decay);
  __asm { vmaxss  xmm1, xmm0, cs:__real@3a83126f }
  pathPos->hover.velocityImpulseDecay = *(float *)&_XMM1;
}

/*
==============
G_VehicleHeliMP_DroneCalcBounds
==============
*/
void G_VehicleHeliMP_DroneCalcBounds(const Vehicle *veh, Bounds *bounds)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _XMM0 = LODWORD(veh->ent->r.box.halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vminss  xmm1, xmm3, xmm0
  }
  *(_QWORD *)bounds->midPoint.v = 0i64;
  bounds->midPoint.v[2] = 0.0;
  bounds->halfSize.v[0] = *(float *)&_XMM1;
  bounds->halfSize.v[1] = *(float *)&_XMM1;
  bounds->halfSize.v[2] = *(float *)&_XMM1;
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
  gentity_s *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t *p_goalPosition; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v32; 
  float v33; 
  float v34; 
  bfx::VolumeHandle v35; 
  bfx::VolumeHandle v36; 
  unsigned int v37; 
  int NumSegments; 
  int v39; 
  vec3_t *p_outPoint; 
  bfx::PolylinePath3DRCPtr v41; 
  float *v42; 
  vec3_t *v43; 
  __int64 v44; 
  __int64 pathSpec; 
  __int64 pathSpec_8; 
  bfx::VolumeHandle v47; 
  bfx::VolumeHandle rhs; 
  float v49; 
  bfx::PolylinePath3DRCPtr result; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v56; 
  vec3_t endPos; 
  vec3_t v58; 
  vec3_t up; 
  vec3_t pos; 
  vec3_t v61; 
  vec3_t forward; 
  nav_probe_results_3D_s pOutResults; 
  vec3_t startPos; 
  vec3_t right; 
  vec3_t outAngles; 
  vec3_t outClosestPos; 
  vec3_t outPoint; 

  v56 = -2i64;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 156, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 157, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  DefaultSpace = Nav_GetDefaultSpace();
  if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 161, ASSERT_TYPE_ASSERT, "( space )", (const char *)&queryFormat, "space") )
    __debugbreak();
  pathSpec = -1i64;
  *(float *)&pathSpec_8 = 0.0;
  p_droneTarget = &veh->droneTarget;
  if ( EntHandle::isDefined(p_droneTarget) && EntHandle::ent(p_droneTarget)->health > 0 )
  {
    v6 = EntHandle::ent(p_droneTarget);
    v54 = v6->r.currentOrigin.v[0];
    v7 = v54;
    *(float *)&v47.m_pProxy = v6->r.currentOrigin.v[1];
    v8 = *(float *)&v47.m_pProxy;
    *(float *)&rhs.m_pProxy = v6->r.currentOrigin.v[2];
    v9 = *(float *)&rhs.m_pProxy;
    G_Utils_GetAnglesWithWorldUp(v6, &outAngles);
    AngleVectors(&outAngles, &forward, &right, &up);
    pathPos->droneLastTargetPosition.v[0] = v54;
    pathPos->droneLastTargetPosition.v[1] = v8;
    pathPos->droneLastTargetPosition.v[2] = v9;
    pathPos->droneLastTargetYaw = outAngles.v[1];
    v10 = pathPos->droneOffset.v[0];
    v11 = COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[0];
    v12 = COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[1];
    v53 = COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[2];
    v13 = pathPos->droneOffset.v[1];
    v14 = v13 * forward.v[0];
    v15 = v13 * forward.v[1];
    v16 = v13 * forward.v[2];
    v17 = pathPos->droneOffset.v[2];
    v51 = v17 * up.v[0];
    v52 = v17 * up.v[1];
    v49 = v17 * up.v[2];
    p_goalPosition = &pathPos->goalPosition;
    v19 = pathPos->goalPosition.v[2];
    v20 = (float)(v10 * right.v[2]) + v19;
    v21 = (float)((float)(v10 * right.v[0]) + pathPos->goalPosition.v[0]) + (float)(v13 * forward.v[0]);
    v22 = (float)((float)(v10 * right.v[1]) + pathPos->goalPosition.v[1]) + v15;
    v23 = v17 * up.v[0];
    v58.v[0] = v21 + (float)(v17 * up.v[0]);
    v24 = v17 * up.v[1];
    v58.v[1] = v22 + (float)(v17 * up.v[1]);
    v58.v[2] = (float)(v20 + v16) + (float)(v17 * up.v[2]);
    v25 = v12 + pathPos->goalPosition.v[1];
    v61.v[0] = (float)((float)(v11 + pathPos->goalPosition.v[0]) + v14) + (float)(v17 * up.v[0]);
    v61.v[1] = (float)(v25 + v15) + (float)(v17 * up.v[1]);
    v26 = v17 * up.v[2];
    v61.v[2] = (float)((float)(v19 + v53) + v16) + (float)(v17 * up.v[2]);
    v27 = APPROXIMATE_PLAYER_HEIGHT * up.v[0];
    v28 = APPROXIMATE_PLAYER_HEIGHT * up.v[1];
    pos.v[0] = (float)(APPROXIMATE_PLAYER_HEIGHT * up.v[0]) + v7;
    pos.v[1] = (float)(APPROXIMATE_PLAYER_HEIGHT * up.v[1]) + *(float *)&v47.m_pProxy;
    v29 = *(float *)&rhs.m_pProxy;
    v30 = (float)(APPROXIMATE_PLAYER_HEIGHT * up.v[2]) + *(float *)&rhs.m_pProxy;
    pos.v[2] = v30;
    if ( !Nav3D_GetClosestPointOnMesh(DefaultSpace, (const bfx::Path3DSpec *)&pathSpec, &pos, &outClosestPos) )
      return 0i64;
    pos.v[0] = v27 + outClosestPos.v[0];
    pos.v[1] = v28 + outClosestPos.v[1];
    pos.v[2] = v30;
    endPos.v[0] = (float)(v27 + outClosestPos.v[0]) + v23;
    endPos.v[1] = (float)(v28 + outClosestPos.v[1]) + v24;
    endPos.v[2] = v29 + v26;
    if ( Nav_Trace3D(DefaultSpace, &pos, &endPos, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
    {
      endPos = pOutResults.m_EndPos;
      v58.v[2] = pOutResults.m_EndPos.v[2];
      v61.v[2] = pOutResults.m_EndPos.v[2];
    }
    if ( Nav_Trace3D(DefaultSpace, &endPos, &v58, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
    {
      v32 = pOutResults.m_EndPos.v[0];
      v33 = pOutResults.m_EndPos.v[1];
      v34 = pOutResults.m_EndPos.v[2];
      if ( Nav_Trace3D(DefaultSpace, &endPos, &v61, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
      {
        p_goalPosition->v[0] = v32;
        pathPos->goalPosition.v[1] = v33;
        pathPos->goalPosition.v[2] = v34;
      }
      else
      {
        p_goalPosition->v[0] = v61.v[0];
        pathPos->goalPosition.v[1] = v61.v[1];
        pathPos->goalPosition.v[2] = v61.v[2];
      }
    }
    else
    {
      p_goalPosition->v[0] = v58.v[0];
      pathPos->goalPosition.v[1] = v58.v[1];
      pathPos->goalPosition.v[2] = v58.v[2];
    }
  }
  else
  {
    p_goalPosition = &pathPos->goalPosition;
    Nav3D_GetClosestPointOnMesh(DefaultSpace, (const bfx::Path3DSpec *)&pathSpec, &pathPos->goalPosition, &pathPos->goalPosition);
  }
  startPos = pathPos->origin;
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( Nav3D_GetClosestVolume(DefaultSpace, p_goalPosition, (const bfx::Path3DSpec *)&pathSpec, &pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&rhs);
    bfx::VolumeHandle::VolumeHandle(&v47, &pClosestVolume);
    if ( Nav3D_GetClosestReachableVolume(v35, &pathPos->origin, (const bfx::Path3DSpec *)&pathSpec, &rhs) )
    {
      bfx::VolumeHandle::VolumeHandle(&v47, &rhs);
      Nav3D_GetClosestPointInsideVolume(&pathPos->origin, v36, &startPos);
    }
    bfx::VolumeHandle::~VolumeHandle(&rhs);
  }
  Nav_FindPath3D(&result, &startPos, p_goalPosition);
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 293, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()", pathSpec, pathSpec_8) )
    __debugbreak();
  if ( bfx::PolylinePath3DRCPtr::GetNumSegments(&result) )
  {
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&result);
    if ( NumSegments > 128 )
      NumSegments = 128;
    v39 = 0;
    if ( NumSegments > 0 )
    {
      p_outPoint = &outPoint;
      do
      {
        bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)&rhs, &result);
        Nav_GetPointOn3DPath(v41, v39++, p_outPoint++);
      }
      while ( v39 < NumSegments );
    }
    if ( NumSegments <= 1 )
    {
      if ( NumSegments != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 376, ASSERT_TYPE_ASSERT, "( numDroneNavPathNodes == 1 )", (const char *)&queryFormat, "numDroneNavPathNodes == 1") )
        __debugbreak();
      pathPos->numDroneNavPathNodes = NumSegments;
      pathPos->droneNavPath[0] = outPoint;
    }
    else
    {
      up = pathPos->origin;
      if ( NumSegments - 1 > 0 )
      {
        v42 = &outPoint.v[2];
        v43 = &outPoint;
        v44 = (unsigned int)(NumSegments - 1);
        while ( 1 )
        {
          *(_QWORD *)forward.v = *((_QWORD *)v42 - 1);
          forward.v[2] = *v42 - MIN_DRONE_DESIRED_HEIGHT_ABOVE_GROUND;
          if ( !Nav_Trace3D(DefaultSpace, v43, &forward, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
            goto LABEL_50;
          v58.v[0] = pOutResults.m_EndPos.v[0];
          v58.v[1] = pOutResults.m_EndPos.v[1];
          v58.v[2] = pOutResults.m_EndPos.v[2] + MIN_DRONE_DESIRED_HEIGHT_ABOVE_GROUND;
          if ( !Nav_Trace3D(DefaultSpace, &pOutResults.m_EndPos, &v58, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
            break;
          if ( pOutResults.m_EndPos.v[2] >= *v42 )
          {
            endPos = pOutResults.m_EndPos;
            goto LABEL_47;
          }
LABEL_51:
          ++v43;
          v42 += 3;
          if ( !--v44 )
            goto LABEL_52;
        }
        endPos = v58;
LABEL_47:
        if ( !Nav_Trace3D(DefaultSpace, &up, &endPos, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) && !Nav_Trace3D(DefaultSpace, v43, v43 + 1, (const bfx::Path3DSpec *)&pathSpec, &pOutResults) )
          *(vec3_t *)(v42 - 2) = endPos;
LABEL_50:
        up = *(vec3_t *)(v42 - 2);
        goto LABEL_51;
      }
LABEL_52:
      pathPos->numDroneNavPathNodes = Nav_Simplify3DPath(DefaultSpace, &pathPos->origin, &outPoint, NumSegments, 32, pathPos->droneNavPath);
    }
    v37 = 1;
    pathPos->currentDroneNavPathNodeIndex = 0;
    pathPos->droneCanFastMoveThroughPath = 1;
    pathPos->droneLastNavRecalcTime = level.time;
    goto LABEL_58;
  }
  v37 = 0;
  pathPos->numDroneNavPathNodes = 0;
  pathPos->currentDroneNavPathNodeIndex = 32;
  pathPos->droneMoveState = DRONEMOVESTATE_UNKNOWN;
LABEL_58:
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v37;
}

/*
==============
G_VehicleHeliMP_DroneMoveTo
==============
*/
void G_VehicleHeliMP_DroneMoveTo(const Vehicle *veh, HeliPathPos *pathPos, const vec3_t *moveTo, bool hovering, Bounds *vehBounds)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  double DeltaTime; 
  double HoverSpeed; 
  float manualSpeed; 
  bool v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  double v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  DroneMoveState droneMoveState; 
  bool v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  float v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  float v51; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  double v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  double v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  gentity_s *ent; 
  unsigned __int16 GlassHitId; 
  float v76; 
  __int128 v77; 
  float v78; 
  __int128 v79; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float newSpeed; 
  float accelMax; 
  vec3_t v1; 
  vec3_t forward; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 539, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 540, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  v9 = pathPos->origin.v[1];
  v10 = pathPos->origin.v[2];
  v11 = pathPos->vel.v[0];
  v12 = pathPos->vel.v[1];
  v89 = pathPos->vel.v[2];
  v13 = moveTo->v[0] - pathPos->origin.v[0];
  v14 = moveTo->v[2] - v10;
  start.v[0] = pathPos->origin.v[0];
  v15 = moveTo->v[1] - v9;
  v16 = (float)(v15 * v15) + (float)(v13 * v13);
  v17 = fsqrt((float)(v14 * v14) + v16);
  v87 = v11;
  v88 = v12;
  start.v[1] = v9;
  start.v[2] = v10;
  v86 = v17;
  if ( v17 > 0.001 )
  {
    v18 = FLOAT_1_0;
  }
  else
  {
    v1.v[0] = 0.0;
    v1.v[1] = 0.0;
    v1.v[2] = 0.0;
    if ( VecNCompareCustomEpsilon(pathPos->hover.velocityImpulse.v, v1.v, 0.001, 3) )
    {
      AngleVectors(&veh->ent->r.currentAngles, &forward, NULL, NULL);
      goto LABEL_60;
    }
    v18 = FLOAT_1_0;
    v86 = FLOAT_1_0;
    v17 = FLOAT_1_0;
  }
  DeltaTime = G_Vehicle_GetDeltaTime();
  G_VehicleHeli_GetNewSpeedAndAccel(pathPos, *(float *)&DeltaTime, hovering, &newSpeed, &accelMax);
  if ( hovering )
  {
    HoverSpeed = G_VehicleHeli_GetHoverSpeed(pathPos);
    manualSpeed = pathPos->manualSpeed;
    v90 = *(float *)&HoverSpeed;
  }
  else
  {
    v90 = pathPos->manualSpeed;
    manualSpeed = v90;
  }
  v22 = manualSpeed < pathPos->speed;
  forward.v[0] = v13 * (float)(v18 / v17);
  forward.v[1] = v15 * (float)(v18 / v17);
  v23 = (float)(forward.v[0] * newSpeed) - v11;
  v25 = (float)(forward.v[1] * newSpeed) - v12;
  v24 = v25;
  v26 = (float)((float)(v14 * (float)(v18 / v17)) * newSpeed) - v89;
  v27 = v23;
  v28 = v25;
  forward.v[2] = v14 * (float)(v18 / v17);
  if ( !v22 && (float)((float)((float)(forward.v[0] * newSpeed) * v87) + (float)((float)(forward.v[1] * newSpeed) * v88)) > 0.0 && (float)((float)(v23 * v87) + (float)(v25 * v88)) < 0.0 )
  {
    v29 = LODWORD(v87);
    *(float *)&v29 = fsqrt((float)(v87 * v87) + (float)(v88 * v88));
    _XMM2 = v29;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm13, xmm0
    }
    v33 = (float)(v18 / *(float *)&_XMM0) * v88;
    v34 = v87 * (float)(v18 / *(float *)&_XMM0);
    v35 = (float)(v33 * v24) + (float)(v34 * v23);
    v27 = v23 - (float)(v35 * v34);
    v28 = v24 - (float)(v35 * v33);
  }
  v36 = fsqrt((float)((float)(v27 * v27) + (float)(v28 * v28)) + (float)(v26 * v26));
  v37 = G_Vehicle_GetDeltaTime();
  v38 = *(float *)&v37 * accelMax;
  v39 = v28;
  v85 = *(float *)&v37 * accelMax;
  v83 = v28;
  v84 = v27;
  v40 = v27;
  if ( v36 > (float)(*(float *)&v37 * accelMax) )
  {
    v83 = v28;
    v84 = v27;
    if ( v36 > 0.0 )
    {
      v41 = (float)(*(float *)&v37 * accelMax) / v36;
      v40 = v27 * v41;
      v39 = v28 * v41;
      v84 = v27 * v41;
      v83 = v28 * v41;
      v26 = v41 * v26;
    }
  }
  droneMoveState = pathPos->droneMoveState;
  v43 = hovering;
  if ( droneMoveState == DRONEMOVESTATE_TO_POS )
    v43 = 1;
  if ( droneMoveState == DRONEMOVESTATE_TO_NODE && (!pathPos->droneCanFastMoveThroughPath || pathPos->numDroneNavPathNodes - pathPos->currentDroneNavPathNodeIndex <= 2) )
    v43 = 1;
  v44 = fsqrt(v16);
  if ( v44 < v18 )
  {
    v57 = v83;
    v56 = v84;
  }
  else
  {
    v45 = pathPos->vel.v[1];
    v46 = LODWORD(pathPos->vel.v[0]);
    v48 = v46;
    *(float *)&v48 = fsqrt((float)(*(float *)&v46 * *(float *)&v46) + (float)(v45 * v45));
    v47 = *(float *)&v48;
    if ( pathPos->stopAtGoal && (v43 || v44 <= pathPos->dronePathMaxDistToSlow && *(float *)&v48 >= pathPos->dronePathMinSpeedToSlow) )
    {
      v49 = *(float *)&v46 + v40;
      v50 = v45 + v39;
      v51 = fsqrt((float)(v50 * v50) + (float)(v49 * v49));
      if ( v51 <= 0.0 )
        goto LABEL_38;
      *(float *)&v48 = *(float *)&v48 - pathPos->dronePathMaxSlowTargetSpeed;
      _XMM0 = v48;
      __asm { vmaxss  xmm6, xmm0, xmm7 }
      *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
      v54 = *(float *)&_XMM0 * (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) * (float)(0.5 / v44));
      if ( v54 <= (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v51 - v47) & _xmm) * pathPos->dronePathSlowThreshold) + 1.0) )
      {
LABEL_38:
        v56 = v84;
        v57 = v83;
      }
      else
      {
        v55 = (float)(v47 - v54) / v51;
        v56 = (float)(v49 * v55) - pathPos->vel.v[0];
        v57 = (float)(v50 * v55) - pathPos->vel.v[1];
      }
      v18 = FLOAT_1_0;
      v17 = v86;
    }
    else
    {
      v57 = v83;
      v56 = v84;
    }
    v38 = v85;
  }
  v58 = G_Vehicle_GetDeltaTime();
  v59 = pathPos->vel.v[2];
  if ( COERCE_FLOAT(LODWORD(v26) & _xmm) >= 0.001 && COERCE_FLOAT(LODWORD(v59) & _xmm) >= 0.001 )
  {
    if ( (float)(v14 * v59) <= 0.0 )
    {
      if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 12.0 )
        v26 = v59 * -0.30000001;
    }
    else if ( (float)(v14 / v59) < 0.2 )
    {
      v26 = (float)(v59 * *(float *)&v58) * -5.0;
    }
  }
  pathPos->vel.v[1] = v57 + v88;
  pathPos->vel.v[0] = v56 + v87;
  pathPos->vel.v[2] = v26 + v89;
  v60 = (float)((float)(v56 - pathPos->accel.v[0]) * 0.5) + pathPos->accel.v[0];
  pathPos->accel.v[0] = v60;
  v61 = (float)((float)(v57 - pathPos->accel.v[1]) * 0.5) + pathPos->accel.v[1];
  pathPos->accel.v[1] = v61;
  v62 = (float)((float)(v26 - pathPos->accel.v[2]) * 0.5) + pathPos->accel.v[2];
  v63 = fsqrt((float)((float)(v61 * v61) + (float)(v60 * v60)) + (float)(v62 * v62));
  pathPos->accel.v[2] = v62;
  if ( v63 > v38 && v63 > 0.0 )
  {
    pathPos->accel.v[0] = v60 * (float)(v38 / v63);
    pathPos->accel.v[2] = (float)(v38 / v63) * v62;
    pathPos->accel.v[1] = (float)(v38 / v63) * v61;
  }
  v64 = pathPos->vel.v[0];
  v65 = fsqrt((float)((float)(v64 * v64) + (float)(pathPos->vel.v[1] * pathPos->vel.v[1])) + (float)(pathPos->vel.v[2] * pathPos->vel.v[2]));
  if ( v65 > v90 && v65 > 0.0 )
  {
    pathPos->vel.v[0] = (float)(v90 / v65) * v64;
    pathPos->vel.v[1] = (float)(v90 / v65) * pathPos->vel.v[1];
    pathPos->vel.v[2] = (float)(v90 / v65) * pathPos->vel.v[2];
  }
  v66 = pathPos->hover.velocityImpulse.v[0] + pathPos->vel.v[0];
  pathPos->vel.v[0] = v66;
  v67 = pathPos->vel.v[1] + pathPos->hover.velocityImpulse.v[1];
  pathPos->vel.v[1] = v67;
  v68 = pathPos->vel.v[2] + pathPos->hover.velocityImpulse.v[2];
  pathPos->vel.v[2] = v68;
  pathPos->speed = fsqrt((float)((float)(v67 * v67) + (float)(v66 * v66)) + (float)(v68 * v68));
  pathPos->dronePrevOrigin.v[0] = pathPos->origin.v[0];
  pathPos->dronePrevOrigin.v[1] = pathPos->origin.v[1];
  pathPos->dronePrevOrigin.v[2] = pathPos->origin.v[2];
  v69 = G_Vehicle_GetDeltaTime();
  pathPos->origin.v[0] = (float)(*(float *)&v69 * pathPos->vel.v[0]) + pathPos->origin.v[0];
  pathPos->origin.v[1] = (float)(*(float *)&v69 * pathPos->vel.v[1]) + pathPos->origin.v[1];
  pathPos->origin.v[2] = (float)(*(float *)&v69 * pathPos->vel.v[2]) + pathPos->origin.v[2];
  if ( pathPos->touchTriggers )
    G_VehicleHeli_TouchTriggers(pathPos->ent);
  if ( pathPos->breakGlass )
  {
    v70 = vehBounds->midPoint.v[1];
    v71 = 0.75 * vehBounds->halfSize.v[1];
    bounds.midPoint.v[0] = vehBounds->midPoint.v[0];
    bounds.midPoint.v[2] = vehBounds->midPoint.v[2];
    v72 = 0.75 * vehBounds->halfSize.v[0];
    bounds.midPoint.v[1] = v70;
    v73 = 0.75 * vehBounds->halfSize.v[2];
    ent = veh->ent;
    bounds.halfSize.v[0] = v72;
    bounds.halfSize.v[1] = v71;
    bounds.halfSize.v[2] = v73;
    G_Main_TraceCapsule(&results, &start, &pathPos->origin, &bounds, ent->s.number, 16);
    if ( results.fraction < v18 )
    {
      GlassHitId = Trace_GetGlassHitId(&results);
      if ( GlassHitId )
      {
        v76 = pathPos->vel.v[1];
        v77 = LODWORD(pathPos->vel.v[0]);
        v78 = pathPos->vel.v[2];
        v79 = v77;
        *(float *)&v79 = fsqrt((float)((float)(*(float *)&v77 * *(float *)&v77) + (float)(v76 * v76)) + (float)(v78 * v78));
        _XMM3 = v79;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm13, xmm0
        }
        v1.v[0] = *(float *)&v77 * (float)(v18 / *(float *)&_XMM0);
        v1.v[2] = v78 * (float)(v18 / *(float *)&_XMM0);
        v1.v[1] = v76 * (float)(v18 / *(float *)&_XMM0);
        G_Glass_DestroyPiece(GlassHitId - 1, &pathPos->origin, &v1);
      }
    }
  }
LABEL_60:
  G_VehicleHeli_UpdateMoveOrientation(pathPos, &forward, v17);
}

/*
==============
G_VehicleHeliMP_DroneSetGoalEnt
==============
*/
void G_VehicleHeliMP_DroneSetGoalEnt(Vehicle *veh, HeliPathPos *pathPos, gentity_s *owner, const vec3_t *offset, float autoRecalcDestinationDistance, float autoRecalcDestinationAngle)
{
  gclient_s *client; 
  float v11; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1194, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1195, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !veh->useDroneLogic )
    pathPos->hover.droneHoverOffsetTimer = DRONE_HOVER_OFFSET_RECALC_TIME;
  veh->useDroneLogic = 1;
  client = owner->client;
  pathPos->goalPosition.v[0] = client->ps.origin.v[0];
  pathPos->goalPosition.v[1] = client->ps.origin.v[1];
  pathPos->goalPosition.v[2] = client->ps.origin.v[2];
  pathPos->droneOffset.v[0] = offset->v[0];
  pathPos->droneOffset.v[1] = offset->v[1];
  pathPos->droneOffset.v[2] = offset->v[2];
  EntHandle::setEnt(&veh->droneTarget, owner);
  pathPos->droneMoveState = DRONEMOVESTATE_UNKNOWN;
  if ( owner->health <= 0 )
  {
    pathPos->moveState = VEH_MOVESTATE_HOVER;
  }
  else
  {
    pathPos->droneRecalcDestinationDistance = autoRecalcDestinationDistance;
    pathPos->droneRecalcDestinationAngle = autoRecalcDestinationAngle;
    pathPos->stopAtGoal = 1;
    pathPos->moveState = VEH_MOVESTATE_MOVE;
    pathPos->stopping = 0;
    pathPos->hover.droneHoverStatic = 0;
    v11 = veh->phys.origin.v[0];
    pathPos->origin.v[0] = v11;
    pathPos->origin.v[1] = veh->phys.origin.v[1];
    pathPos->origin.v[2] = veh->phys.origin.v[2];
    pathPos->dronePrevOrigin.v[0] = v11;
    pathPos->dronePrevOrigin.v[1] = pathPos->origin.v[1];
    pathPos->dronePrevOrigin.v[2] = pathPos->origin.v[2];
    G_VehicleHeliMP_DroneCalcNavPath(veh, pathPos);
  }
}

/*
==============
G_VehicleHeliMP_DroneSetGoalPos
==============
*/
void G_VehicleHeliMP_DroneSetGoalPos(Vehicle *veh, HeliPathPos *pathPos, const vec3_t *position, bool bStopAtDest)
{
  float v8; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1127, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1128, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !veh->useDroneLogic )
    pathPos->hover.droneHoverOffsetTimer = DRONE_HOVER_OFFSET_RECALC_TIME;
  veh->useDroneLogic = 1;
  pathPos->goalPosition.v[0] = position->v[0];
  pathPos->goalPosition.v[1] = position->v[1];
  pathPos->goalPosition.v[2] = position->v[2];
  *(_QWORD *)pathPos->droneOffset.v = 0i64;
  pathPos->droneOffset.v[2] = 0.0;
  EntHandle::setEnt(&veh->droneTarget, NULL);
  pathPos->droneMoveState = DRONEMOVESTATE_UNKNOWN;
  pathPos->moveState = VEH_MOVESTATE_MOVE;
  pathPos->stopping = 0;
  pathPos->hover.droneHoverStatic = 0;
  *(_QWORD *)&pathPos->droneRecalcDestinationDistance = 0i64;
  pathPos->stopAtGoal = bStopAtDest;
  v8 = veh->phys.origin.v[0];
  pathPos->origin.v[0] = v8;
  pathPos->origin.v[1] = veh->phys.origin.v[1];
  pathPos->origin.v[2] = veh->phys.origin.v[2];
  pathPos->dronePrevOrigin.v[0] = v8;
  pathPos->dronePrevOrigin.v[1] = pathPos->origin.v[1];
  pathPos->dronePrevOrigin.v[2] = pathPos->origin.v[2];
  G_VehicleHeliMP_DroneCalcNavPath(veh, pathPos);
}

/*
==============
G_VehicleHeliMP_DroneTurnCorner
==============
*/
void G_VehicleHeliMP_DroneTurnCorner(HeliPathPos *pathPos, const vec3_t *newTarget)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 

  v2 = pathPos->vel.v[0];
  v3 = newTarget->v[0] - pathPos->origin.v[0];
  v4 = newTarget->v[2] - pathPos->origin.v[2];
  v6 = LODWORD(newTarget->v[1]);
  v5 = newTarget->v[1] - pathPos->origin.v[1];
  v7 = fsqrt((float)((float)(v2 * v2) + (float)(pathPos->vel.v[1] * pathPos->vel.v[1])) + (float)(pathPos->vel.v[2] * pathPos->vel.v[2]));
  *(float *)&v6 = fsqrt((float)((float)(v5 * v5) + (float)(v3 * v3)) + (float)(v4 * v4));
  _XMM4 = v6;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  pathPos->vel.v[0] = v2 * 0.39999998;
  pathPos->vel.v[1] = 0.39999998 * pathPos->vel.v[1];
  pathPos->vel.v[2] = 0.60000002 * pathPos->vel.v[2];
  pathPos->vel.v[0] = (float)((float)(v3 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v7 * 0.60000002)) + pathPos->vel.v[0];
  pathPos->vel.v[1] = (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * (float)(v7 * 0.60000002)) + pathPos->vel.v[1];
  pathPos->vel.v[2] = (float)((float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * 0.40000001) * v7) + pathPos->vel.v[2];
}

/*
==============
G_VehicleHeliMP_DroneUpdateHover
==============
*/
void G_VehicleHeliMP_DroneUpdateHover(const Vehicle *veh, HeliPathPos *pathPos)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  bool v9; 
  gentity_s *ent; 
  float v16; 
  float v17; 
  const gentity_s *v18; 
  float v19; 
  nav_space_s *DefaultSpace; 
  float m_DistTraveled; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  bool v27; 
  gentity_s *v28; 
  unsigned int i; 
  __int64 v30; 
  unsigned __int128 v31; 
  double v35; 
  double v36; 
  double v37; 
  float v38; 
  gentity_s *v39; 
  vec3_t *p_origin; 
  float fraction; 
  bool startsolid; 
  float v43; 
  float v44; 
  float v45; 
  const dvar_t *v46; 
  vec3_t endPos; 
  vec3_t v48; 
  vec3_t moveTo; 
  vec3_t right; 
  vec3_t end; 
  vec4_t v52; 
  vec3_t outAngles; 
  vec3_t startPos; 
  Bounds bounds; 
  nav_probe_results_3D_s pOutResults; 
  vec4_t v57; 
  vec4_t color; 
  trace_t results; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 

  v61 = v5;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 688, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 689, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !Nav_AnyVolumesLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 690, ASSERT_TYPE_ASSERT, "( Nav_AnyVolumesLoaded() )", (const char *)&queryFormat, "Nav_AnyVolumesLoaded()") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v9 = pathPos->hover.droneHoverStatic == 0;
  ent = veh->ent;
  v64 = v2;
  _XMM9 = 0i64;
  _XMM0 = LODWORD(ent->r.box.halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vminss  xmm1, xmm3, xmm0
  }
  v63 = v3;
  v62 = v4;
  bounds.halfSize.v[0] = *(float *)&_XMM1;
  bounds.halfSize.v[1] = *(float *)&_XMM1;
  bounds.halfSize.v[2] = *(float *)&_XMM1;
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  bounds.midPoint.v[2] = 0.0;
  v60 = v6;
  if ( v9 )
  {
    v16 = pathPos->goalPosition.v[1];
    v17 = pathPos->goalPosition.v[2];
    startPos.v[0] = pathPos->goalPosition.v[0];
    startPos.v[1] = v16;
    startPos.v[2] = v17;
    endPos.v[0] = startPos.v[0];
    endPos.v[1] = v16;
    endPos.v[2] = v17;
    v48.v[0] = startPos.v[0];
    v48.v[1] = v16;
    v48.v[2] = v17;
    if ( EntHandle::isDefined(&veh->droneTarget) && EntHandle::ent(&veh->droneTarget)->health > 0 )
    {
      v18 = EntHandle::ent(&veh->droneTarget);
      G_Utils_GetAnglesWithWorldUp(v18, &outAngles);
    }
    else
    {
      outAngles.v[0] = 0.0;
      outAngles.v[1] = 0.0;
      outAngles.v[2] = 0.0;
    }
    AngleVectors(&outAngles, (vec3_t *)&v57, &right, (vec3_t *)&color);
    endPos.v[1] = (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[1]) + endPos.v[1];
    endPos.v[0] = (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[0]) + endPos.v[0];
    endPos.v[2] = (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[2]) + endPos.v[2];
    v19 = v48.v[1] - (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[1]);
    v48.v[0] = v48.v[0] - (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[0]);
    v48.v[2] = v48.v[2] - (float)(MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[2]);
    right.v[0] = MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[0];
    right.v[1] = MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[1];
    right.v[2] = MAX_DRONE_HOVER_DRIFT_OFFSET * right.v[2];
    v48.v[1] = v19;
    v52.v[2] = 0.0;
    *(_QWORD *)v52.v = -1i64;
    DefaultSpace = Nav_GetDefaultSpace();
    if ( !DefaultSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 739, ASSERT_TYPE_ASSERT, "( space )", (const char *)&queryFormat, "space") )
      __debugbreak();
    if ( Nav_Trace3D(DefaultSpace, &startPos, &endPos, (const bfx::Path3DSpec *)&v52, &pOutResults) )
    {
      m_DistTraveled = pOutResults.m_DistTraveled;
      v22 = pOutResults.m_EndPos.v[0];
      v23 = pOutResults.m_EndPos.v[1];
      v24 = pOutResults.m_EndPos.v[2];
      if ( Nav_Trace3D(DefaultSpace, &startPos, &v48, (const bfx::Path3DSpec *)&v52, &pOutResults) )
      {
        if ( pOutResults.m_DistTraveled > m_DistTraveled )
        {
          v22 = pOutResults.m_EndPos.v[0];
          v23 = pOutResults.m_EndPos.v[1];
          v24 = pOutResults.m_EndPos.v[2];
        }
      }
      else
      {
        v22 = v48.v[0];
        v23 = v48.v[1];
        v24 = v48.v[2];
      }
    }
    else
    {
      v22 = endPos.v[0];
      v23 = endPos.v[1];
      v24 = endPos.v[2];
    }
    pathPos->hover.hoverGoalPos.v[0] = v22;
    pathPos->hover.hoverGoalPos.v[1] = v23;
    pathPos->hover.hoverGoalPos.v[2] = v24;
  }
  else
  {
    pathPos->hover.hoverGoalPos.v[0] = pathPos->origin.v[0];
    pathPos->hover.hoverGoalPos.v[1] = pathPos->origin.v[1];
    pathPos->hover.hoverGoalPos.v[2] = pathPos->origin.v[2];
    pathPos->hover.droneHoverStatic = 1;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v25 = (float)((float)level.frameDuration * 0.001) + pathPos->hover.droneHoverOffsetTimer;
  v26 = DRONE_HOVER_OFFSET_RECALC_TIME;
  v27 = v25 < DRONE_HOVER_OFFSET_RECALC_TIME;
  pathPos->hover.droneHoverOffsetTimer = v25;
  if ( !v27 )
  {
    v28 = pathPos->ent;
    pathPos->hover.droneHoverOffsetTimer = v25 - v26;
    if ( v28->vehicle->useDroneLogic )
    {
      for ( i = 0; i < 3; ++i )
      {
        v30 = (int)i;
        v31 = LODWORD(DRONE_RAND_OFFSET_RANGE.v[i]) ^ (unsigned __int128)(unsigned int)_xmm;
        *(double *)&v31 = G_flrand(*(float *)&v31, DRONE_RAND_OFFSET_RANGE.v[i]);
        _XMM2 = v31 & (unsigned int)_xmm ^ (unsigned int)_xmm;
        __asm
        {
          vcmpless xmm1, xmm9, xmm7
          vblendvps xmm0, xmm2, xmm0, xmm1
        }
        pathPos->hover.droneHoverOffset.v[v30] = COERCE_FLOAT(_XMM0 ^ _xmm);
      }
    }
    else
    {
      v35 = G_flrand(-3.0, 3.0);
      pathPos->hover.droneHoverOffset.v[0] = *(float *)&v35;
      v36 = G_flrand(-3.0, 3.0);
      pathPos->hover.droneHoverOffset.v[1] = *(float *)&v36;
      v37 = G_flrand(-1.0, 1.0);
      pathPos->hover.droneHoverOffset.v[2] = *(float *)&v37;
    }
  }
  v38 = pathPos->hover.droneHoverOffset.v[1] + pathPos->hover.hoverGoalPos.v[1];
  v39 = veh->ent;
  p_origin = &pathPos->origin;
  end.v[0] = pathPos->hover.hoverGoalPos.v[0] + pathPos->hover.droneHoverOffset.v[0];
  end.v[2] = pathPos->hover.droneHoverOffset.v[2] + pathPos->hover.hoverGoalPos.v[2];
  end.v[1] = v38;
  G_Main_TraceCapsule(&results, &pathPos->origin, &end, &bounds, v39->s.number, 2609);
  fraction = results.fraction;
  startsolid = results.startsolid;
  moveTo.v[0] = (float)((float)(end.v[0] - p_origin->v[0]) * results.fraction) + p_origin->v[0];
  v43 = (float)(end.v[2] - pathPos->origin.v[2]) * results.fraction;
  moveTo.v[1] = (float)((float)(end.v[1] - pathPos->origin.v[1]) * results.fraction) + pathPos->origin.v[1];
  moveTo.v[2] = v43 + pathPos->origin.v[2];
  if ( results.fraction < 1.0 || results.startsolid )
    pathPos->hover.droneHoverOffsetTimer = DRONE_HOVER_OFFSET_RECALC_TIME + pathPos->hover.droneHoverOffsetTimer;
  if ( fraction <= 0.0 || startsolid )
  {
    v44 = pathPos->hover.hoverGoalPos.v[1];
    moveTo.v[0] = pathPos->hover.hoverGoalPos.v[0];
    moveTo.v[2] = pathPos->hover.hoverGoalPos.v[2];
    moveTo.v[1] = v44;
  }
  G_VehicleHeliMP_DroneMoveTo(veh, pathPos, &moveTo, 1, &bounds);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v45 = (float)((float)((float)level.frameDuration * -0.001) * pathPos->hover.velocityImpulseDecay) + 1.0;
  pathPos->hover.velocityImpulse.v[0] = v45 * pathPos->hover.velocityImpulse.v[0];
  pathPos->hover.velocityImpulse.v[1] = v45 * pathPos->hover.velocityImpulse.v[1];
  pathPos->hover.velocityImpulse.v[2] = v45 * pathPos->hover.velocityImpulse.v[2];
  v46 = DVARBOOL_vehDroneDebugDrawPath;
  if ( !DVARBOOL_vehDroneDebugDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehDroneDebugDrawPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.enabled )
  {
    color = (vec4_t)_xmm;
    v52 = (vec4_t)_xmm;
    v57 = (vec4_t)_xmm;
    G_DebugSphere(p_origin, bounds.halfSize.v[0], &color, 0, 0);
    G_DebugLine(p_origin, &moveTo, &v52, 1);
    G_DebugLine(p_origin, &endPos, &v57, 1);
    G_DebugLine(p_origin, &v48, &v57, 1);
  }
}

/*
==============
G_VehicleHeliMP_DroneUpdateMoveInternal
==============
*/
void G_VehicleHeliMP_DroneUpdateMoveInternal(const Vehicle *veh, HeliPathPos *pathPos)
{
  char *Value; 
  int *v5; 
  _QWORD *v6; 
  char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  ThreadContext CurrentThreadContext; 
  gentity_s *v11; 
  float v12; 
  float v13; 
  float v14; 
  float droneRecalcDestinationAngle; 
  float droneRecalcDestinationDistance; 
  __int64 v17; 
  __int64 v18; 
  vec3_t outAngles; 

  Value = (char *)Sys_GetValue(0);
  v5 = (int *)(Value + 4056);
  if ( (unsigned int)(*((_DWORD *)Value + 1014) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1014) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v5 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = *v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v6 = Value + 2088;
  v7 = Value + 40;
  if ( *v6 < (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v6 += 8i64;
  if ( *v6 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v6 = v5;
  if ( *v6 <= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v8 = *v5;
  v9 = __rdtsc();
  v5[v8 + 2] = v9;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 49, NULL, 0);
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1068, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1069, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  if ( !veh->useDroneLogic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1070, ASSERT_TYPE_ASSERT, "( veh->useDroneLogic )", (const char *)&queryFormat, "veh->useDroneLogic") )
    __debugbreak();
  if ( EntHandle::isDefined(&veh->droneTarget) )
  {
    if ( EntHandle::ent(&veh->droneTarget)->health > 0 )
    {
      v11 = EntHandle::ent(&veh->droneTarget);
      v12 = v11->r.currentOrigin.v[0];
      v13 = v11->r.currentOrigin.v[1];
      v14 = v11->r.currentOrigin.v[2];
      G_Utils_GetAnglesWithWorldUp(v11, &outAngles);
      if ( pathPos->currentDroneNavPathNodeIndex >= pathPos->numDroneNavPathNodes - 1 || level.time > pathPos->droneLastNavRecalcTime + 1000 )
      {
        if ( (droneRecalcDestinationAngle = pathPos->droneRecalcDestinationAngle, droneRecalcDestinationAngle != 0.0) && COERCE_FLOAT(COERCE_UNSIGNED_INT(outAngles.v[1] - pathPos->droneLastTargetYaw) & _xmm) > droneRecalcDestinationAngle || (droneRecalcDestinationDistance = pathPos->droneRecalcDestinationDistance, droneRecalcDestinationDistance != 0.0) && (float)((float)((float)((float)(v13 - pathPos->droneLastTargetPosition.v[1]) * (float)(v13 - pathPos->droneLastTargetPosition.v[1])) + (float)((float)(v12 - pathPos->droneLastTargetPosition.v[0]) * (float)(v12 - pathPos->droneLastTargetPosition.v[0]))) + (float)((float)(v14 - pathPos->droneLastTargetPosition.v[2]) * (float)(v14 - pathPos->droneLastTargetPosition.v[2]))) > (float)(droneRecalcDestinationDistance * droneRecalcDestinationDistance) )
        {
          pathPos->goalPosition.v[0] = v12;
          pathPos->goalPosition.v[1] = v13;
          pathPos->goalPosition.v[2] = v14;
          if ( (unsigned int)G_VehicleHeliMP_DroneCalcNavPath(veh, pathPos) )
          {
            if ( pathPos->numDroneNavPathNodes > 0 )
            {
              pathPos->droneMoveState = DRONEMOVESTATE_TO_NODE;
              pathPos->moveState = VEH_MOVESTATE_MOVE;
            }
          }
        }
      }
    }
  }
  if ( pathPos->moveState == VEH_MOVESTATE_MOVE )
  {
    G_VehicleHeliMP_DroneUpdateMoveToGoal(veh, pathPos);
  }
  else if ( pathPos->moveState == VEH_MOVESTATE_HOVER )
  {
    G_VehicleHeliMP_DroneUpdateHover(veh, pathPos);
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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  gentity_s *ent; 
  bool IsHovering; 
  BOOL v19; 
  bool v20; 
  __int128 v21; 
  float v23; 
  __int128 v25; 
  int numDroneNavPathNodes; 
  float v27; 
  float v28; 
  float v29; 
  __int64 currentDroneNavPathNodeIndex; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  DroneMoveState droneMoveState; 
  __int32 v41; 
  __int64 v42; 
  float v43; 
  float v44; 
  const dvar_t *v45; 
  __int64 v46; 
  float v47; 
  float v48; 
  float *v49; 
  vec3_t start; 
  vec3_t moveTo; 
  vec4_t v52; 
  float v53; 
  float v54; 
  Bounds vehBounds; 
  vec4_t color; 
  vec4_t v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  v62 = v2;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 879, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !pathPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 880, ASSERT_TYPE_ASSERT, "( pathPos )", (const char *)&queryFormat, "pathPos") )
    __debugbreak();
  v9 = pathPos->goalPosition.v[0] - pathPos->origin.v[0];
  v10 = pathPos->goalPosition.v[1] - pathPos->origin.v[1];
  v11 = pathPos->goalPosition.v[2] - pathPos->origin.v[2];
  v12 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11));
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = veh->ent;
  vehBounds.midPoint.v[0] = 0.0;
  _XMM0 = LODWORD(ent->r.box.halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rax+10Ch]
    vmaxss  xmm3, xmm1, dword ptr [rax+114h]
    vminss  xmm1, xmm3, xmm0
  }
  v52.v[3] = *(float *)&_XMM1 * 0.80000001;
  v53 = *(float *)&_XMM1 * 0.80000001;
  v54 = *(float *)&_XMM1 * 0.80000001;
  vehBounds.midPoint.v[1] = 0.0;
  vehBounds.midPoint.v[2] = 0.0;
  vehBounds.halfSize.v[0] = *(float *)&_XMM1;
  vehBounds.halfSize.v[1] = *(float *)&_XMM1;
  vehBounds.halfSize.v[2] = *(float *)&_XMM1;
  v52.v[0] = 0.0;
  v52.v[1] = 0.0;
  v52.v[2] = 0.0;
  IsHovering = G_VehicleHeli_IsHovering(pathPos);
  v19 = IsHovering;
  if ( !IsHovering )
  {
    G_VehicleHeli_UpdateMove_CheckNearGoal(pathPos, v12);
    G_VehicleHeli_UpdateMove_CheckGoalReached(pathPos, v12);
    v20 = G_VehicleHeli_IsHovering(pathPos);
    v19 = v20;
    if ( v20 )
    {
      *((_QWORD *)&v21 + 1) = 0i64;
      *(float *)&_XMM3 = FLOAT_1_0;
      v23 = fsqrt((float)((float)(pathPos->vel.v[0] * pathPos->vel.v[0]) + (float)(pathPos->vel.v[1] * pathPos->vel.v[1])) + (float)(pathPos->vel.v[2] * pathPos->vel.v[2]));
      if ( v23 > 0.0 )
      {
        *(double *)&v21 = G_VehicleHeli_GetHoverSpeed(pathPos);
        v25 = v21;
        *(float *)&v25 = *(float *)&v21 / v23;
        _XMM1 = v25;
        __asm { vminss  xmm3, xmm1, cs:__real@3f800000 }
      }
      pathPos->vel.v[0] = *(float *)&_XMM3 * pathPos->vel.v[0];
      pathPos->vel.v[1] = *(float *)&_XMM3 * pathPos->vel.v[1];
      pathPos->vel.v[2] = *(float *)&_XMM3 * pathPos->vel.v[2];
      pathPos->speed = *(float *)&_XMM3 * pathPos->speed;
    }
  }
  if ( !v19 )
  {
    if ( pathPos->droneMoveState == DRONEMOVESTATE_TO_NODE )
    {
      numDroneNavPathNodes = pathPos->numDroneNavPathNodes;
      v61 = v3;
      v60 = v4;
      v59 = v5;
      v58 = v6;
      if ( pathPos->currentDroneNavPathNodeIndex >= numDroneNavPathNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 932, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes)", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes") )
        __debugbreak();
      if ( pathPos->currentDroneNavPathNodeIndex >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 933, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
        __debugbreak();
      v27 = pathPos->origin.v[0];
      v28 = pathPos->origin.v[1];
      v29 = pathPos->origin.v[2];
      currentDroneNavPathNodeIndex = pathPos->currentDroneNavPathNodeIndex;
      v31 = pathPos->dronePrevOrigin.v[0] - v27;
      v32 = pathPos->dronePrevOrigin.v[2] - v29;
      v33 = v27 - pathPos->droneNavPath[currentDroneNavPathNodeIndex].v[0];
      v34 = v28 - pathPos->droneNavPath[currentDroneNavPathNodeIndex].v[1];
      v35 = v29 - pathPos->droneNavPath[currentDroneNavPathNodeIndex].v[2];
      v36 = pathPos->dronePrevOrigin.v[1] - v28;
      v37 = (float)((float)(v36 * v36) + (float)(v31 * v31)) + (float)(v32 * v32);
      if ( v37 > 0.0 && (v38 = (float)((float)((float)(v36 * v34) + (float)(v31 * v33)) + (float)(v32 * v35)) / v37, v38 >= 0.0) && v38 < 1.0 || (float)((float)(v34 * v34) + (float)(v33 * v33)) < 16.0 && COERCE_FLOAT(LODWORD(v35) & _xmm) < 4.0 )
      {
        pathPos->currentDroneNavPathNodeIndex = currentDroneNavPathNodeIndex + 1;
        if ( (int)currentDroneNavPathNodeIndex + 1 < pathPos->numDroneNavPathNodes )
        {
          if ( (unsigned int)(currentDroneNavPathNodeIndex + 1) >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 962, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
            __debugbreak();
          G_VehicleHeliMP_DroneTurnCorner(pathPos, &pathPos->droneNavPath[pathPos->currentDroneNavPathNodeIndex]);
        }
        else
        {
          pathPos->droneMoveState = DRONEMOVESTATE_UNKNOWN;
        }
      }
    }
    if ( pathPos->droneMoveState == DRONEMOVESTATE_UNKNOWN )
    {
      v39 = pathPos->currentDroneNavPathNodeIndex;
      if ( v39 < pathPos->numDroneNavPathNodes )
      {
        pathPos->droneMoveState = DRONEMOVESTATE_TO_NODE;
        if ( (unsigned int)v39 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 980, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
          __debugbreak();
        G_VehicleHeliMP_DroneTurnCorner(pathPos, &pathPos->droneNavPath[pathPos->currentDroneNavPathNodeIndex]);
      }
    }
  }
  droneMoveState = pathPos->droneMoveState;
  if ( droneMoveState == DRONEMOVESTATE_UNKNOWN || v19 )
  {
    G_VehicleHeliMP_DroneUpdateHover(veh, pathPos);
  }
  else
  {
    v41 = droneMoveState - 1;
    if ( v41 )
    {
      if ( v41 != 1 )
        return;
      if ( pathPos->currentDroneNavPathNodeIndex >= pathPos->numDroneNavPathNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1015, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes)", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < pathPos->numDroneNavPathNodes") )
        __debugbreak();
      if ( pathPos->currentDroneNavPathNodeIndex >= 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 1016, ASSERT_TYPE_ASSERT, "(pathPos->currentDroneNavPathNodeIndex < ( sizeof( *array_counter( HeliPathPos::droneNavPath ) ) + 0 ))", (const char *)&queryFormat, "pathPos->currentDroneNavPathNodeIndex < ARRAY_COUNT( HeliPathPos::droneNavPath )") )
        __debugbreak();
      v42 = pathPos->currentDroneNavPathNodeIndex;
      *(_QWORD *)moveTo.v = *(_QWORD *)pathPos->droneNavPath[v42].v;
      v43 = pathPos->droneNavPath[v42].v[2];
    }
    else
    {
      v44 = pathPos->droneMovePos.v[1];
      moveTo.v[0] = pathPos->droneMovePos.v[0];
      v43 = pathPos->droneMovePos.v[2];
      moveTo.v[1] = v44;
    }
    moveTo.v[2] = v43;
    G_VehicleHeliMP_DroneMoveTo(veh, pathPos, &moveTo, 0, &vehBounds);
    v45 = DVARBOOL_vehDroneDebugDrawPath;
    if ( !DVARBOOL_vehDroneDebugDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehDroneDebugDrawPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    if ( v45->current.enabled )
    {
      v46 = pathPos->currentDroneNavPathNodeIndex;
      v57 = (vec4_t)_xmm;
      v52 = (vec4_t)_xmm;
      start.v[0] = pathPos->origin.v[0];
      v47 = pathPos->origin.v[2];
      color = (vec4_t)_xmm;
      start.v[1] = pathPos->origin.v[1];
      start.v[2] = v47;
      if ( (int)v46 < pathPos->numDroneNavPathNodes )
      {
        v48 = vehBounds.halfSize.v[0];
        v49 = &pathPos->droneNavPath[v46].v[2];
        do
        {
          G_DebugLine(&start, &pathPos->droneNavPath[(int)v46], &color, 0);
          start = *(vec3_t *)(v49 - 2);
          G_DebugSphere(&start, v48, &v57, 0, 0);
          LODWORD(v46) = v46 + 1;
          v49 += 3;
        }
        while ( (int)v46 < pathPos->numDroneNavPathNodes );
      }
      G_DebugLine(&pathPos->origin, &moveTo, &v52, 0);
      G_DebugLine(&pathPos->origin, &pathPos->goalPosition, &color, 0);
    }
  }
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
  const dvar_t *v11; 
  float value; 
  float *wheelZPos; 
  int v14; 
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
  if ( G_Vehicle_GetServerDef(vehicle->defIndex)->type != VEH_HELICOPTER )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E4C280, 189i64, vehicleInfoName);
  if ( ent->s.eType != ET_HELICOPTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_vehicle_helicopter_mp.cpp", 105, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_HELICOPTER)", (const char *)&queryFormat, "ent->s.eType == ET_HELICOPTER") )
    __debugbreak();
  v11 = DVARFLT_vehHelicopterBoundsRadius;
  if ( !DVARFLT_vehHelicopterBoundsRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterBoundsRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  wheelZPos = vehicle->phys.wheelZPos;
  *(_QWORD *)vehicle->phys.bounds.midPoint.v = 0i64;
  vehicle->phys.bounds.midPoint.v[2] = 0.0;
  vehicle->phys.bounds.halfSize.v[0] = value;
  vehicle->phys.bounds.halfSize.v[1] = value;
  vehicle->phys.bounds.halfSize.v[2] = value;
  do
  {
    v14 = *((_DWORD *)wheelZPos + 340);
    if ( v14 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(ent, v14, &outPos);
      *wheelZPos = outPos.v[2];
    }
    ++wheelZPos;
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

