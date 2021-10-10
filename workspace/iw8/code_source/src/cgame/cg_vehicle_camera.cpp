/*
==============
CG_VehicleCam_GetViewAngles
==============
*/

void __fastcall CG_VehicleCam_GetViewAngles(const LocalClientNum_t localClientNum, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_GetViewAngles@@YAXW4LocalClientNum_t@@PEBUcentity_t@@AEATvec3_t@@@Z(localClientNum, vehicleEntity, outViewAngles);
}

/*
==============
CG_VehicleCam_ScaleFov
==============
*/

double __fastcall CG_VehicleCam_ScaleFov(const cg_t *cg, float fov)
{
  double result; 

  *(float *)&result = ?CG_VehicleCam_ScaleFov@@YAMPEBVcg_t@@M@Z(cg, fov);
  return result;
}

/*
==============
CG_VehicleCam_GetVehiclePosition
==============
*/

void __fastcall CG_VehicleCam_GetVehiclePosition(LocalClientNum_t localClientNum, const centity_t *cent, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?CG_VehicleCam_GetVehiclePosition@@YAXW4LocalClientNum_t@@PEBUcentity_t@@AEATvec3_t@@2@Z(localClientNum, cent, outOrigin, outAngles);
}

/*
==============
CG_VehicleCam_UpdateRemoteDriveCam
==============
*/

void __fastcall CG_VehicleCam_UpdateRemoteDriveCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_UpdateRemoteDriveCam@@YAXW4LocalClientNum_t@@PEBVcg_t@@AEATvec3_t@@2@Z(localClientNum, cg, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_UpdatePlayerControlCam
==============
*/

void __fastcall CG_VehicleCam_UpdatePlayerControlCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_UpdatePlayerControlCam@@YAXW4LocalClientNum_t@@PEBVcg_t@@AEATvec3_t@@2@Z(localClientNum, cg, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_InitLocalClient
==============
*/

void __fastcall CG_VehicleCam_InitLocalClient(LocalClientNum_t localClientNum)
{
  ?CG_VehicleCam_InitLocalClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_UpdateDriveCam
==============
*/

void __fastcall CG_VehicleCam_UpdateDriveCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_UpdateDriveCam@@YAXW4LocalClientNum_t@@PEBVcg_t@@AEATvec3_t@@2@Z(localClientNum, cg, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_Archive
==============
*/

void __fastcall CG_VehicleCam_Archive(MemoryFile *memFile)
{
  ?CG_VehicleCam_Archive@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_VehicleCam_GetRemoteDriveViewAngles
==============
*/

void __fastcall CG_VehicleCam_GetRemoteDriveViewAngles(LocalClientNum_t localClientNum, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_GetRemoteDriveViewAngles@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBUcentity_t@@AEATvec3_t@@@Z(localClientNum, playerState, vehicleEntity, outViewAngles);
}

/*
==============
CG_VehicleCam_GetControllerAxis
==============
*/

void __fastcall CG_VehicleCam_GetControllerAxis(LocalClientNum_t localClientNum, float *pitchAxis, float *yawAxis, bool applyDeadzone)
{
  ?CG_VehicleCam_GetControllerAxis@@YAXW4LocalClientNum_t@@PEAM1_N@Z(localClientNum, pitchAxis, yawAxis, applyDeadzone);
}

/*
==============
CG_VehicleCam_GetCamera
==============
*/

VehicleCamera *__fastcall CG_VehicleCam_GetCamera(LocalClientNum_t localClientNum)
{
  return ?CG_VehicleCam_GetCamera@@YAPEAUVehicleCamera@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_IsRemoteControlCam
==============
*/

bool __fastcall CG_VehicleCam_IsRemoteControlCam(LocalClientNum_t localClientNum)
{
  return ?CG_VehicleCam_IsRemoteControlCam@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_GetRemoteDriveFov
==============
*/

double __fastcall CG_VehicleCam_GetRemoteDriveFov(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_VehicleCam_GetRemoteDriveFov@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_VehicleCam_InitGlobals
==============
*/

void CG_VehicleCam_InitGlobals(void)
{
  ?CG_VehicleCam_InitGlobals@@YAXXZ();
}

/*
==============
CG_VehicleCam_UpdateRemoteControlCam
==============
*/

void __fastcall CG_VehicleCam_UpdateRemoteControlCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  ?CG_VehicleCam_UpdateRemoteControlCam@@YAXW4LocalClientNum_t@@PEBVcg_t@@AEATvec3_t@@2@Z(localClientNum, cg, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_SetClientViewAngles
==============
*/

void __fastcall CG_VehicleCam_SetClientViewAngles(const cg_t *cg, const vec3_t *viewAngles)
{
  ?CG_VehicleCam_SetClientViewAngles@@YAXPEBVcg_t@@AEBTvec3_t@@@Z(cg, viewAngles);
}

/*
==============
CG_VehicleCam_IsRemoteDriveCam
==============
*/

bool __fastcall CG_VehicleCam_IsRemoteDriveCam(LocalClientNum_t localClientNum)
{
  return ?CG_VehicleCam_IsRemoteDriveCam@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_IsPlayerControlCam
==============
*/

bool __fastcall CG_VehicleCam_IsPlayerControlCam(LocalClientNum_t localClientNum)
{
  return ?CG_VehicleCam_IsPlayerControlCam@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_IsDriveCam
==============
*/

bool __fastcall CG_VehicleCam_IsDriveCam(LocalClientNum_t localClientNum)
{
  return ?CG_VehicleCam_IsDriveCam@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VehicleCam_Archive
==============
*/
void CG_VehicleCam_Archive(MemoryFile *memFile)
{
  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 103, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 184ui64, vehicleCameras);
}

/*
==============
CG_VehicleCam_GetCamera
==============
*/
VehicleCamera *CG_VehicleCam_GetCamera(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &vehicleCameras[v1];
}

/*
==============
CG_VehicleCam_GetControllerAxis
==============
*/
void CG_VehicleCam_GetControllerAxis(LocalClientNum_t localClientNum, float *pitchAxis, float *yawAxis, bool applyDeadzone)
{
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  double v10; 
  double ClientLookInversion; 
  float v12; 
  double v13; 
  float v14; 
  float v15; 
  float v16; 
  int *v17; 
  float v18; 
  int v19; 
  bool v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  int v25[2]; 

  if ( !pitchAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 406, ASSERT_TYPE_ASSERT, "(pitchAxis)", (const char *)&queryFormat, "pitchAxis") )
    __debugbreak();
  if ( !yawAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 407, ASSERT_TYPE_ASSERT, "(yawAxis)", (const char *)&queryFormat, "yawAxis") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 410, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
  {
    *pitchAxis = 0.0;
    *yawAxis = 0.0;
  }
  else
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem->GetCameraSpectatorAxis(VehicleSystem, pitchAxis, yawAxis) )
    {
      v10 = CL_GamepadAxisValue(localClientNum, 3);
      *pitchAxis = *(float *)&v10;
      ClientLookInversion = CL_Input_GetClientLookInversion(localClientNum);
      v12 = *(float *)&ClientLookInversion * *pitchAxis;
      *pitchAxis = v12;
      v13 = CL_GamepadAxisValue(localClientNum, 2);
      *yawAxis = COERCE_FLOAT(LODWORD(v13) ^ _xmm);
      LODWORD(v14) = *(_DWORD *)pitchAxis & _xmm;
      LODWORD(v15) = (LODWORD(v12) ^ _xmm) & _xmm;
      if ( v14 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 434, ASSERT_TYPE_ASSERT, "(absPitchAxis <= 1.0f)", (const char *)&queryFormat, "absPitchAxis <= 1.0f") )
        __debugbreak();
      if ( v15 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 435, ASSERT_TYPE_ASSERT, "(absYawAxis <= 1.0f)", (const char *)&queryFormat, "absYawAxis <= 1.0f") )
        __debugbreak();
      if ( v14 <= v15 )
        *pitchAxis = (float)(1.0 - (float)(v15 - v14)) * *pitchAxis;
      else
        *yawAxis = (float)(1.0 - (float)(v14 - v15)) * *yawAxis;
      if ( applyDeadzone )
      {
        v16 = *yawAxis;
        v17 = v25;
        v18 = *pitchAxis;
        v19 = 0;
        v25[1] = *(int *)pitchAxis;
        *(float *)v25 = v16;
        v20 = 1;
        do
        {
          if ( !v20 )
          {
            LODWORD(v24) = 2;
            LODWORD(v23) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          LODWORD(v21) = *v17 & _xmm;
          if ( v21 >= 0.27000001 )
          {
            if ( v21 <= 0.99000001 )
              v22 = (float)(v21 - 0.27000001) * 1.3888888;
            else
              v22 = FLOAT_1_0;
          }
          else
          {
            v22 = 0.0;
          }
          if ( v19 )
            *pitchAxis = v18 * v22;
          else
            *yawAxis = v16 * v22;
          ++v19;
          ++v17;
          v20 = (unsigned int)v19 < 2;
        }
        while ( v19 < 2 );
      }
    }
  }
}

/*
==============
CG_VehicleCam_GetRemoteDriveFov
==============
*/
float CG_VehicleCam_GetRemoteDriveFov(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int entity; 
  int v4; 
  __int16 remoteEyesEnt; 
  centity_t *v6; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  __int64 v10; 
  VehicleCamera *v11; 
  __int64 v13; 
  __int64 v14; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1037, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 && LocalClientGlobals->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1038, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
    if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
    {
      LODWORD(v13) = remoteEyesEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1047, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v13, 2046) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      LODWORD(v13) = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v13, 2046) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  }
  v6 = CG_GetEntity(localClientNum, v4);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1051, ASSERT_TYPE_ASSERT, "(vehicleEnt)", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( (v6->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1052, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEnt ))", (const char *)&queryFormat, "CENextValid( vehicleEnt )") )
    __debugbreak();
  if ( v6 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v6->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1053, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEnt->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEnt->nextState )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, v6);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1058, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  v10 = LocalClientGlobals->localClientNum;
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v14) = 2;
    LODWORD(v13) = LocalClientGlobals->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11 = &vehicleCameras[v10];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1061, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  if ( ClientDef->turretWeapon )
    return LocalClientGlobals->turretFov;
  else
    return v11->fov;
}

/*
==============
CG_VehicleCam_GetRemoteDriveViewAngles
==============
*/
void CG_VehicleCam_GetRemoteDriveViewAngles(LocalClientNum_t localClientNum, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  float v8; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v12; 
  vec3_t vehicleAngles; 
  vec3_t outVehiclePosition; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1002, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1003, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  v8 = (float)CG_GetLocalClientGlobals(localClientNum)->frametime * 0.001;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1011, ASSERT_TYPE_ASSERT, "(vehicleCl)", (const char *)&queryFormat, "vehicleCl") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  v12 = ClientDef;
  if ( (!ClientDef || !ClientDef->camRemoteDrive) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1015, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->camRemoteDrive)", (const char *)&queryFormat, "vehicleDef && vehicleDef->camRemoteDrive") )
    __debugbreak();
  VehicleCam_GetRemoteDriveVehiclePosition(localClientNum, vehicleEntity, v12, v8, &outVehiclePosition, &vehicleAngles);
  VehicleCam_GetRemoteDriveUserAngles(localClientNum, playerState, v12, v8, outViewAngles);
  BG_Vehicle_ApplyCameraInfluence(&playerState->vehicleState, v12, outViewAngles, &vehicleAngles, outViewAngles);
  BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(&vehicleAngles, outViewAngles, v12, outViewAngles);
}

/*
==============
CG_VehicleCam_GetVehiclePosition
==============
*/
void CG_VehicleCam_GetVehiclePosition(LocalClientNum_t localClientNum, const centity_t *cent, vec3_t *outOrigin, vec3_t *outAngles)
{
  CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 
  cg_t *LocalClientGlobals; 
  const SuitDef *SuitDef; 
  float viewheight_stand; 
  float v13; 
  float v14; 
  tmat33_t<vec3_t> outTagMat; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 304, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, cent);
  if ( !CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
  {
    CG_GetPoseOrigin(&cent->pose, outOrigin);
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( (CgVehicleSystem::GetClient(VehicleSystem, cent)->flags & 1) != 0 )
  {
    if ( !CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_player, &outTagMat, outOrigin) )
    {
      CG_GetPoseOrigin(&cent->pose, outOrigin);
LABEL_11:
      outAngles->v[0] = cent->pose.angles.v[0];
      outAngles->v[1] = cent->pose.angles.v[1];
      outAngles->v[2] = cent->pose.angles.v[2];
      return;
    }
    goto LABEL_13;
  }
  if ( CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_camera, &outTagMat, outOrigin) )
  {
LABEL_13:
    AxisToAngles(&outTagMat, outAngles);
    return;
  }
  if ( CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_player, &outTagMat, outOrigin) )
  {
    AxisToAngles(&outTagMat, outAngles);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, outOrigin);
    outAngles->v[0] = cent->pose.angles.v[0];
    outAngles->v[1] = cent->pose.angles.v[1];
    outAngles->v[2] = cent->pose.angles.v[2];
    AnglesToAxis(outAngles, &outTagMat);
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 349, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 351, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewheight_stand = (float)SuitDef->viewheight_stand;
  v13 = viewheight_stand * outTagMat.m[2].v[1];
  outOrigin->v[0] = (float)(viewheight_stand * outTagMat.m[2].v[0]) + outOrigin->v[0];
  v14 = viewheight_stand * outTagMat.m[2].v[2];
  outOrigin->v[1] = v13 + outOrigin->v[1];
  outOrigin->v[2] = v14 + outOrigin->v[2];
}

/*
==============
CG_VehicleCam_GetViewAngles
==============
*/
void CG_VehicleCam_GetViewAngles(const LocalClientNum_t localClientNum, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  vec3_t outAngles; 
  vec3_t outOrigin; 
  vec3_t outUserAngles; 

  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 829, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  CG_VehicleCam_GetVehiclePosition(localClientNum, vehicleEntity, &outOrigin, &outAngles);
  VehicleCam_GetViewAnglesInternal(localClientNum, vehicleEntity, &outAngles, &outUserAngles, outViewAngles);
}

/*
==============
CG_VehicleCam_InitGlobals
==============
*/
void CG_VehicleCam_InitGlobals(void)
{
  memset_0(vehicleCameraModes, 0, sizeof(vehicleCameraModes));
}

/*
==============
CG_VehicleCam_InitLocalClient
==============
*/
void CG_VehicleCam_InitLocalClient(LocalClientNum_t localClientNum)
{
  memset_0(&vehicleCameras[localClientNum], 0, sizeof(VehicleCamera));
}

/*
==============
CG_VehicleCam_IsDriveCam
==============
*/
char CG_VehicleCam_IsDriveCam(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  bool initialized; 
  bool *p_initialized; 
  cg_t *v6; 
  int entity; 
  centity_t *v8; 
  const centity_t *v9; 
  CgVehicleSystem *v10; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  cg_t *v13; 
  __int16 remoteEyesEnt; 
  int v15; 
  centity_t *v16; 
  CgVehicleSystem *v17; 
  const VehicleClient *v18; 
  __int16 viewlocked_entNum; 
  const centity_t *v21; 
  const VehicleClient *v22; 
  VehicleType type; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v1);
  initialized = vehicleCameras[v1].initialized;
  p_initialized = &vehicleCameras[v1].initialized;
  *p_initialized = 0;
  v6 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v6->predictedPlayerState.otherFlags, ACTIVE, 1u) && v6->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE )
  {
    entity = v6->predictedPlayerState.vehicleState.entity;
    if ( entity != 2047 )
    {
      v8 = CG_GetEntity((const LocalClientNum_t)v1, entity);
      v9 = v8;
      if ( (v8->flags & 1) != 0 && BG_IsVehicleEntity(&v8->nextState) && ((v9->pose.eType - 12) & 0xFD) == 0 )
      {
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
          goto LABEL_28;
        if ( (int)v1 < 0 )
          goto LABEL_28;
        if ( (int)v1 >= CgVehicleSystem::ms_allocatedCount )
          goto LABEL_28;
        if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
          goto LABEL_28;
        v10 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v1);
        Client = CgVehicleSystem::GetClient(v10, v9);
        if ( !Client )
          goto LABEL_28;
        ClientDef = CgVehicleSystem::GetClientDef(Client);
        if ( ClientDef->type != VEH_AIRCRAFT || !ClientDef->vehiclePhysicsDef.physicsEnabled || ClientDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
          goto LABEL_28;
      }
    }
  }
  v13 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v13->predictedPlayerState.otherFlags, ACTIVE, 1u) )
  {
    remoteEyesEnt = v13->predictedPlayerState.remoteEyesEnt;
    if ( remoteEyesEnt == 2047 )
    {
      v15 = v13->predictedPlayerState.vehicleState.entity;
      if ( v15 == 2047 )
        goto LABEL_30;
    }
    else
    {
      v15 = remoteEyesEnt;
    }
    v16 = CG_GetEntity((const LocalClientNum_t)v1, v15);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 917, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (v16->flags & 1) != 0 && BG_IsVehicleEntity(&v16->nextState) )
    {
      v17 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v1);
      v18 = CgVehicleSystem::GetClient(v17, v16);
      if ( CgVehicleSystem::GetClientDef(v18)->camRemoteDrive )
      {
LABEL_28:
        *p_initialized = initialized;
        return 0;
      }
    }
  }
LABEL_30:
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) )
    return 0;
  viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
  if ( viewlocked_entNum == 2047 )
    return 0;
  v21 = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, viewlocked_entNum);
  v22 = CgVehicleSystem::GetClient(VehicleSystem, v21);
  type = CgVehicleSystem::GetClientDef(v22)->type;
  if ( (unsigned __int8)(type - 5) > 1u && type != VEH_BOAT )
    return 0;
  *p_initialized = initialized;
  return 1;
}

/*
==============
CG_VehicleCam_IsPlayerControlCam
==============
*/
bool CG_VehicleCam_IsPlayerControlCam(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int entity; 
  centity_t *v4; 
  const centity_t *v5; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  bool result; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  result = 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && LocalClientGlobals->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE )
  {
    entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    if ( entity != 2047 )
    {
      v4 = CG_GetEntity((const LocalClientNum_t)v1, entity);
      v5 = v4;
      if ( (v4->flags & 1) != 0 && BG_IsVehicleEntity(&v4->nextState) && ((v5->pose.eType - 12) & 0xFD) == 0 )
      {
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
          return 1;
        if ( (int)v1 < 0 )
          return 1;
        if ( (int)v1 >= CgVehicleSystem::ms_allocatedCount )
          return 1;
        if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
          return 1;
        VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v1);
        Client = CgVehicleSystem::GetClient(VehicleSystem, v5);
        if ( !Client )
          return 1;
        ClientDef = CgVehicleSystem::GetClientDef(Client);
        if ( ClientDef->type != VEH_AIRCRAFT || !ClientDef->vehiclePhysicsDef.physicsEnabled || ClientDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
CG_VehicleCam_IsRemoteControlCam
==============
*/
bool CG_VehicleCam_IsRemoteControlCam(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int16 remoteControlEnt; 
  centity_t *Entity; 
  bool result; 

  result = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) )
    {
      remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt;
      if ( remoteControlEnt != 2047 )
      {
        Entity = CG_GetEntity(localClientNum, remoteControlEnt);
        if ( (Entity->flags & 1) != 0 && BG_IsVehicleEntity(&Entity->nextState) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
CG_VehicleCam_IsRemoteDriveCam
==============
*/
bool CG_VehicleCam_IsRemoteDriveCam(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int16 remoteEyesEnt; 
  int entity; 
  centity_t *v5; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) )
    return 0;
  remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
  if ( remoteEyesEnt == 2047 )
  {
    entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    if ( entity == 2047 )
      return 0;
  }
  else
  {
    entity = remoteEyesEnt;
  }
  v5 = CG_GetEntity(localClientNum, entity);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 917, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (v5->flags & 1) != 0 && BG_IsVehicleEntity(&v5->nextState) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    Client = CgVehicleSystem::GetClient(VehicleSystem, v5);
    return CgVehicleSystem::GetClientDef(Client)->camRemoteDrive != 0;
  }
  return 0;
}

/*
==============
CG_VehicleCam_ScaleFov
==============
*/
float CG_VehicleCam_ScaleFov(const cg_t *cg, float fov)
{
  __int64 localClientNum; 
  __int64 v5; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1186, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cg->predictedPlayerState.eFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1190, ASSERT_TYPE_ASSERT, "(ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE ))", (const char *)&queryFormat, "ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE )") )
    __debugbreak();
  if ( cg->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1191, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  localClientNum = cg->localClientNum;
  if ( (unsigned int)localClientNum >= 2 )
  {
    LODWORD(v5) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return fov + vehicleCameras[localClientNum].fov;
}

/*
==============
CG_VehicleCam_SetClientViewAngles
==============
*/
void CG_VehicleCam_SetClientViewAngles(const cg_t *cg, const vec3_t *viewAngles)
{
  float v4; 
  ClActiveClient *Client; 
  float v6; 
  float v7; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 162, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  v4 = viewAngles->v[1] - cg->predictedPlayerState.delta_angles.v[1];
  v6 = viewAngles->v[0] - cg->predictedPlayerState.delta_angles.v[0];
  v7 = viewAngles->v[2] - cg->predictedPlayerState.delta_angles.v[2];
  Client = ClActiveClient::GetClient((const LocalClientNum_t)cg->localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  Client->clviewangles_aab += Client->clviewangles_set_aab;
  LODWORD(Client->clViewangles.clViewangles.v[0]) = LODWORD(v6) ^ ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[1]) = LODWORD(v4) ^ ((Client->clviewangles_aab ^ ((_DWORD)Client + 432)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 432)) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[2]) = LODWORD(v7) ^ ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) + 2));
}

/*
==============
CG_VehicleCam_UpdateDriveCam
==============
*/
void CG_VehicleCam_UpdateDriveCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  const centity_t *Entity; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 762, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cg->predictedPlayerState.eFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 765, ASSERT_TYPE_ASSERT, "(ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE ))", (const char *)&queryFormat, "ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE )") )
    __debugbreak();
  if ( cg->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 766, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)cg->localClientNum, cg->predictedPlayerState.viewlocked_entNum);
  VehicleCam_UpdateCamInternal(localClientNum, cg, Entity, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_UpdatePlayerControlCam
==============
*/
void CG_VehicleCam_UpdatePlayerControlCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  const centity_t *Entity; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 890, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cg->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 893, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( cg->predictedPlayerState.vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 894, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)cg->localClientNum, cg->predictedPlayerState.vehicleState.entity);
  VehicleCam_UpdateCamInternal(localClientNum, cg, Entity, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_UpdateRemoteControlCam
==============
*/
void CG_VehicleCam_UpdateRemoteControlCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  centity_t *Entity; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 808, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 809, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&cg->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 812, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::REMOTE_CONTROLLING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::REMOTE_CONTROLLING )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cg->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 813, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( cg->predictedPlayerState.remoteControlEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 814, ASSERT_TYPE_ASSERT, "(ps->remoteControlEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->remoteControlEnt != ENTITYNUM_NONE") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)cg->localClientNum, cg->predictedPlayerState.remoteControlEnt);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 817, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  VehicleCam_UpdateCamInternal(localClientNum, cg, Entity, outViewOrigin, outViewAngles);
}

/*
==============
CG_VehicleCam_UpdateRemoteDriveCam
==============
*/
void CG_VehicleCam_UpdateRemoteDriveCam(LocalClientNum_t localClientNum, const cg_t *cg, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  float v8; 
  float v9; 
  unsigned int entity; 
  int v11; 
  __int16 remoteEyesEnt; 
  centity_t *v13; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v17; 
  __int64 v18; 
  VehicleCamera *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v28; 
  float vehCam_offsetZ; 
  float vehCam_offsetY; 
  float camFovSpeed; 
  double v33; 
  float camFovIncrease; 
  double v35; 
  vec3_t *outVehicleAngles; 
  __int64 v37; 
  vec3_t angles; 
  vec3_t userAngles; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 

  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1093, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cg->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1096, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( cg->predictedPlayerState.vehicleState.entity == 2047 && cg->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1097, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  v9 = (float)cg->frametime * 0.001;
  v8 = v9;
  outViewOrigin->v[0] = cg->predictedPlayerState.origin.v[0];
  outViewOrigin->v[1] = cg->predictedPlayerState.origin.v[1];
  outViewOrigin->v[2] = cg->predictedPlayerState.origin.v[2];
  outViewAngles->v[0] = cg->predictedPlayerState.viewangles.v[0];
  outViewAngles->v[1] = cg->predictedPlayerState.viewangles.v[1];
  outViewAngles->v[2] = cg->predictedPlayerState.viewangles.v[2];
  entity = cg->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    remoteEyesEnt = cg->predictedPlayerState.remoteEyesEnt;
    if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
    {
      LODWORD(outVehicleAngles) = remoteEyesEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1111, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", outVehicleAngles, 2046) )
        __debugbreak();
    }
    v11 = cg->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      LODWORD(outVehicleAngles) = cg->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1106, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", outVehicleAngles, 2046) )
        __debugbreak();
    }
    v11 = cg->predictedPlayerState.vehicleState.entity;
  }
  v13 = CG_GetEntity(localClientNum, v11);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1115, ASSERT_TYPE_ASSERT, "(vehicleEnt)", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( (v13->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1116, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEnt ))", (const char *)&queryFormat, "CENextValid( vehicleEnt )") )
    __debugbreak();
  if ( v13 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v13->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1117, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEnt->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEnt->nextState )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, v13);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1122, ASSERT_TYPE_ASSERT, "(vehicleCl)", (const char *)&queryFormat, "vehicleCl") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  v17 = ClientDef;
  if ( (!ClientDef || !ClientDef->camRemoteDrive) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1126, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->camRemoteDrive)", (const char *)&queryFormat, "vehicleDef && vehicleDef->camRemoteDrive") )
    __debugbreak();
  v18 = cg->localClientNum;
  if ( (unsigned int)v18 >= 2 )
  {
    LODWORD(v37) = 2;
    LODWORD(outVehicleAngles) = cg->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outVehicleAngles, v37) )
      __debugbreak();
  }
  v19 = &vehicleCameras[v18];
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1130, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  VehicleCam_GetRemoteDriveVehiclePosition(cg->localClientNum, v13, v17, v9, &axis.m[3], &angles);
  v20 = angles.v[1];
  v19->vehicleAngles.v[0] = angles.v[0];
  v19->vehicleAngles.v[2] = angles.v[2];
  v19->vehicleAngles.v[1] = v20;
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  if ( !v19->initialized )
  {
    v21 = angles.v[2];
    v22 = angles.v[0];
    v19->initialized = 1;
    v19->fov = v17->camFovIncrease;
    v23 = (float)(v21 + v17->vehCam_anglesRoll) * 0.0027777778;
    v24 = (float)(v22 + v17->vehCam_anglesPitch) * 0.0027777778;
    _XMM7 = 0i64;
    __asm
    {
      vroundss xmm2, xmm7, xmm1, 1
      vroundss xmm3, xmm7, xmm2, 1
    }
    v28 = (float)((float)(angles.v[1] + v17->vehCam_anglesYaw) * 0.0027777778) - *(float *)&_XMM3;
    __asm { vroundss xmm3, xmm7, xmm2, 1 }
    v19->userAngles.v[0] = (float)(v24 - *(float *)&_XMM2) * 360.0;
    v19->userAngles.v[1] = v28 * 360.0;
    v19->userAngles.v[2] = (float)(v23 - *(float *)&_XMM3) * 360.0;
  }
  VehicleCam_GetRemoteDriveUserAngles(localClientNum, &cg->predictedPlayerState, v17, v8, &userAngles);
  BG_Vehicle_ApplyCameraInfluence(&cg->predictedPlayerState.vehicleState, v17, &userAngles, &angles, &userAngles);
  BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(&angles, &userAngles, v17, outViewAngles);
  v19->userAngles.v[0] = outViewAngles->v[0];
  v19->userAngles.v[1] = outViewAngles->v[1];
  v19->userAngles.v[2] = outViewAngles->v[2];
  CG_VehicleCam_SetClientViewAngles(cg, outViewAngles);
  vehCam_offsetZ = v17->vehCam_offsetZ;
  vehCam_offsetY = v17->vehCam_offsetY;
  in1.v[0] = v17->vehCam_offsetX;
  in1.v[1] = vehCam_offsetY;
  in1.v[2] = vehCam_offsetZ;
  MatrixTransformVector43(&in1, &axis, outViewOrigin);
  camFovSpeed = v17->camFovSpeed;
  if ( camFovSpeed <= 0.0 )
  {
    camFovIncrease = v17->camFovIncrease;
  }
  else
  {
    v33 = I_fclamp(COERCE_FLOAT(LODWORD(Client->localSpeed.v[0]) & _xmm) * (float)(0.05681818 / camFovSpeed), 0.0, 1.0);
    camFovIncrease = *(float *)&v33 * v17->camFovIncrease;
  }
  v35 = DiffTrack(camFovIncrease, v19->fov, v17->camLerp, v8);
  v19->fov = *(float *)&v35;
}

/*
==============
VehicleCam_GetCameraViewOrigin
==============
*/
void VehicleCam_GetCameraViewOrigin(LocalClientNum_t localClientNum, const playerState_s *ps, int useClientTrace, const vec3_t *vehicleOrigin, const tmat33_t<vec3_t> *vehicleAxis, const tmat33_t<vec3_t> *viewAxis, const vec3_t *camOffset, float camFovOffset, float camRadius, VehCamZOffsetMode zOffsetMode, int isThirdPerson, vec3_t *outViewOrigin)
{
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  vec3_t start; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 495, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = camFovOffset + camOffset->v[0];
  v16 = (float)(v15 * vehicleAxis->m[0].v[0]) + vehicleOrigin->v[0];
  outViewOrigin->v[0] = v16;
  v17 = (float)(v15 * vehicleAxis->m[0].v[1]) + vehicleOrigin->v[1];
  outViewOrigin->v[1] = v17;
  v18 = (float)(v15 * vehicleAxis->m[0].v[2]) + vehicleOrigin->v[2];
  outViewOrigin->v[2] = v18;
  v19 = camOffset->v[1];
  v20 = (float)(v19 * vehicleAxis->m[1].v[0]) + v16;
  outViewOrigin->v[0] = v20;
  v21 = (float)(v19 * vehicleAxis->m[1].v[1]) + v17;
  outViewOrigin->v[1] = v21;
  v22 = (float)(v19 * vehicleAxis->m[1].v[2]) + v18;
  outViewOrigin->v[2] = v22;
  switch ( zOffsetMode )
  {
    case VEHCAM_ZMODE_WORLD:
      v23 = v22 + camOffset->v[2];
      goto LABEL_13;
    case VEHCAM_ZMODE_VEHICLE:
      v25 = camOffset->v[2];
      v20 = (float)(v25 * vehicleAxis->m[2].v[0]) + v20;
      outViewOrigin->v[0] = v20;
      v21 = (float)(v25 * vehicleAxis->m[2].v[1]) + v21;
      outViewOrigin->v[1] = v21;
      v23 = (float)(v25 * vehicleAxis->m[2].v[2]) + v22;
      goto LABEL_13;
    case VEHCAM_ZMODE_VIEW:
      v24 = camOffset->v[2];
      v20 = (float)(v24 * viewAxis->m[2].v[0]) + v20;
      outViewOrigin->v[0] = v20;
      v21 = (float)(v24 * viewAxis->m[2].v[1]) + v21;
      outViewOrigin->v[1] = v21;
      v23 = (float)(v24 * viewAxis->m[2].v[2]) + v22;
LABEL_13:
      outViewOrigin->v[2] = v23;
      goto LABEL_14;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 512, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleCam_UpdateDriveCam: Unknown z offset mode") )
    __debugbreak();
  v20 = outViewOrigin->v[0];
  v21 = outViewOrigin->v[1];
  v23 = outViewOrigin->v[2];
LABEL_14:
  outViewOrigin->v[0] = (float)(COERCE_FLOAT(LODWORD(camRadius) ^ _xmm) * viewAxis->m[0].v[0]) + v20;
  outViewOrigin->v[1] = (float)(COERCE_FLOAT(LODWORD(camRadius) ^ _xmm) * viewAxis->m[0].v[1]) + v21;
  outViewOrigin->v[2] = (float)(COERCE_FLOAT(LODWORD(camRadius) ^ _xmm) * viewAxis->m[0].v[2]) + v23;
  if ( isThirdPerson )
  {
    v26 = DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z;
    v27 = vehicleOrigin->v[1];
    start.v[0] = vehicleOrigin->v[0];
    start.v[2] = vehicleOrigin->v[2];
    start.v[1] = v27;
    if ( !DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_sphere_bounds_offset_z") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    start.v[2] = start.v[2] + v26->current.value;
    CG_View_ThirdPersonViewTrace(localClientNum, ps, &start, outViewOrigin, 41968145, 0.0, outViewOrigin);
  }
}

/*
==============
VehicleCam_GetMouseMoveViewAngles
==============
*/
void VehicleCam_GetMouseMoveViewAngles(LocalClientNum_t localClientNum, const VehicleDef *vehDef, const VehicleCamera *vehicleCam, vec3_t *outViewAngles)
{
  cg_t *LocalClientGlobals; 
  ClActiveClient *Client; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 457, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 460, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  outViewAngles->v[0] = vehicleCam->userAngles.v[0];
  *(_QWORD *)&outViewAngles->y = LODWORD(vehicleCam->userAngles.v[1]);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
  {
    if ( vehDef->vehCam_pitchTurnRate != 0.0 )
    {
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm2, 1 }
      outViewAngles->v[0] = (float)((float)((float)(Client->mouseViewDelta.v[0] + outViewAngles->v[0]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    }
    if ( vehDef->vehCam_yawTurnRate != 0.0 )
    {
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm2, 1 }
      outViewAngles->v[1] = (float)((float)((float)(Client->mouseViewDelta.v[1] + outViewAngles->v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    }
  }
}

/*
==============
VehicleCam_GetRemoteDriveUserAngles
==============
*/
void VehicleCam_GetRemoteDriveUserAngles(LocalClientNum_t localClientNum, const playerState_s *playerState, const VehicleDef *vehicleDef, const float frameTime, vec3_t *userAngles)
{
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  VehicleCamera *v9; 
  vec3_t *v10; 
  float v13; 
  __int64 v15; 
  float pitchAxis; 
  float yawAxis; 

  v6 = localClientNum;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 938, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 939, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v15) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  v9 = &vehicleCameras[v6];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 944, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  if ( v9->initialized && !CG_View_IsKillCamView((const LocalClientNum_t)v6) && LocalClientGlobals->clientNum == playerState->clientNum )
  {
    if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v6) )
    {
      CG_VehicleCam_GetControllerAxis(LocalClientGlobals->localClientNum, &pitchAxis, &yawAxis, 1);
      v10 = userAngles;
      _XMM8 = 0i64;
      __asm { vroundss xmm2, xmm8, xmm1, 1 }
      v13 = yawAxis;
      userAngles->v[0] = (float)((float)((float)((float)((float)(pitchAxis * vehicleDef->vehCam_pitchTurnRate) * frameTime) + v9->userAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      __asm { vroundss xmm2, xmm8, xmm1, 1 }
      v10->v[1] = (float)((float)((float)((float)((float)(v13 * vehicleDef->vehCam_yawTurnRate) * frameTime) + v9->userAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      v10->v[2] = 0.0;
    }
    else
    {
      VehicleCam_GetMouseMoveViewAngles((LocalClientNum_t)v6, vehicleDef, &vehicleCameras[v6], userAngles);
    }
  }
  else
  {
    *userAngles = playerState->viewangles;
  }
}

/*
==============
VehicleCam_GetRemoteDriveVehiclePosition
==============
*/
void VehicleCam_GetRemoteDriveVehiclePosition(LocalClientNum_t localClientNum, const centity_t *vehicleEntity, const VehicleDef *vehicleDef, const float frameTime, vec3_t *outVehiclePosition, vec3_t *outVehicleAngles)
{
  __int64 v8; 
  VehicleCamera *v9; 
  float camVehicleAnglePitchRate; 
  double v11; 
  float camVehicleAngleYawRate; 
  double v13; 
  float camVehicleAngleRollRate; 
  double v15; 
  __int64 v16; 

  v8 = localClientNum;
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 977, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 978, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, 2) )
      __debugbreak();
  }
  v9 = &vehicleCameras[v8];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 981, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  CG_VehicleCam_GetVehiclePosition((LocalClientNum_t)v8, vehicleEntity, outVehiclePosition, outVehicleAngles);
  camVehicleAnglePitchRate = vehicleDef->camVehicleAnglePitchRate;
  if ( camVehicleAnglePitchRate > 0.0 )
  {
    v11 = DiffTrackAngle(outVehicleAngles->v[0], v9->vehicleAngles.v[0], camVehicleAnglePitchRate, frameTime);
    outVehicleAngles->v[0] = *(float *)&v11;
  }
  camVehicleAngleYawRate = vehicleDef->camVehicleAngleYawRate;
  if ( camVehicleAngleYawRate > 0.0 )
  {
    v13 = DiffTrackAngle(outVehicleAngles->v[1], v9->vehicleAngles.v[1], camVehicleAngleYawRate, frameTime);
    outVehicleAngles->v[1] = *(float *)&v13;
  }
  camVehicleAngleRollRate = vehicleDef->camVehicleAngleRollRate;
  if ( camVehicleAngleRollRate > 0.0 )
  {
    v15 = DiffTrackAngle(outVehicleAngles->v[2], v9->vehicleAngles.v[2], camVehicleAngleRollRate, frameTime);
    outVehicleAngles->v[2] = *(float *)&v15;
  }
}

/*
==============
VehicleCam_GetViewAnglesInternal
==============
*/
void VehicleCam_GetViewAnglesInternal(const LocalClientNum_t localClientNum, const centity_t *const vehicleEntity, const vec3_t *vehicleAngles, vec3_t *outUserAngles, vec3_t *outViewAngles)
{
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  float v9; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleDef *ClientDef; 
  VehicleCamera *v12; 
  __int64 mode; 
  VehicleCameraParams *v14; 
  float v19; 
  double v20; 
  double v21; 
  float v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float v27; 
  double v28; 
  float v31; 
  float v33; 
  float v35; 
  float v36; 
  float v38; 
  float v42; 
  float v44; 
  float camLerp; 
  float v46; 
  float v47; 
  float v48; 
  double v49; 
  double v50; 
  double v51; 
  __int64 v52; 
  __int64 v53; 
  float yawAxis; 
  float pitchAxis; 
  const VehicleClient *Client; 
  const vec3_t *v57; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  v57 = vehicleAngles;
  v7 = localClientNum;
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 579, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  v9 = (float)LocalClientGlobals->frametime * 0.001;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v7);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 587, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 589, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v52) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v52, 2) )
      __debugbreak();
  }
  v12 = &vehicleCameras[v7];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 591, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  mode = v12->mode;
  if ( (unsigned int)mode >= 2 )
  {
    LODWORD(v53) = 2;
    LODWORD(v52) = v12->mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( VEHCAM_MODE_COUNT )", "mode doesn't index VEHCAM_MODE_COUNT\n\t%i not in [0, %i)", v52, v53) )
      __debugbreak();
  }
  pitchAxis = 0.0;
  yawAxis = 0.0;
  v14 = &vehicleCameraModes[mode];
  if ( VehicleSystem->IsCameraPlayerView(VehicleSystem) )
  {
    if ( ClientDef->camLookEnabled )
    {
      if ( !v12->initialized )
      {
        _XMM4 = 0i64;
        __asm { vroundss xmm2, xmm4, xmm1, 1 }
        outUserAngles->v[0] = (float)((float)(0.0027777778 * LocalClientGlobals->refdefViewAngles.v[0]) - *(float *)&_XMM2) * 360.0;
        __asm { vroundss xmm2, xmm4, xmm1, 1 }
        outUserAngles->v[1] = (float)((float)(0.0027777778 * LocalClientGlobals->refdefViewAngles.v[1]) - *(float *)&_XMM2) * 360.0;
        __asm { vroundss xmm2, xmm4, xmm1, 1 }
        outUserAngles->v[2] = (float)((float)(0.0027777778 * LocalClientGlobals->refdefViewAngles.v[2]) - *(float *)&_XMM2) * 360.0;
      }
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 531, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
        __debugbreak();
      if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v7) )
      {
        CG_VehicleCam_GetControllerAxis((LocalClientNum_t)v7, &pitchAxis, &yawAxis, 1);
        v19 = yawAxis;
        outUserAngles->v[0] = (float)((float)(pitchAxis * v14->pitchTurnRate) * v9) + v12->userAngles.v[0];
        outUserAngles->v[1] = (float)((float)(v19 * v14->yawTurnRate) * v9) + v12->userAngles.v[1];
        outUserAngles->v[2] = 0.0;
      }
      else
      {
        VehicleCam_GetMouseMoveViewAngles((LocalClientNum_t)v7, ClientDef, &vehicleCameras[v7], outUserAngles);
      }
      if ( !VehicleSystem->IsCameraFreeLookEnabled(VehicleSystem) )
      {
        v20 = BG_Vehicle_ClampCameraAngle(outUserAngles->v[0], v14->pitchClamp);
        outUserAngles->v[0] = *(float *)&v20;
        v21 = BG_Vehicle_ClampCameraAngle(outUserAngles->v[1], v14->yawClamp);
        v22 = yawAxis;
        v23 = pitchAxis;
        outUserAngles->v[1] = *(float *)&v21;
        if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v7) )
        {
          if ( v23 != 0.0 || v22 != 0.0 )
            goto LABEL_42;
        }
        else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(LocalClientGlobals->refdefViewAngles.v[0] - outUserAngles->v[0]) & _xmm) >= 0.001 || COERCE_FLOAT(COERCE_UNSIGNED_INT(LocalClientGlobals->refdefViewAngles.v[1] - outUserAngles->v[1]) & _xmm) >= 0.001 )
        {
          goto LABEL_42;
        }
        if ( ClientDef->camReturnSpeed == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 621, ASSERT_TYPE_ASSERT, "(vehicleDef->camReturnSpeed != 0.0f)", (const char *)&queryFormat, "vehicleDef->camReturnSpeed != 0.0f") )
          __debugbreak();
        v24 = I_fclamp(COERCE_FLOAT(LODWORD(Client->localSpeed.v[0]) & _xmm) / ClientDef->camReturnSpeed, 0.0, 1.0);
        v25 = *(float *)&v24 * ClientDef->camReturnLerp;
        v26 = DiffTrackAngle(0.0, outUserAngles->v[0], v25, v9);
        v27 = outUserAngles->v[1];
        outUserAngles->v[0] = *(float *)&v26;
        v28 = DiffTrackAngle(0.0, v27, v25, v9);
        outUserAngles->v[1] = *(float *)&v28;
      }
    }
    else
    {
      *(_QWORD *)outUserAngles->v = 0i64;
      outUserAngles->v[2] = 0.0;
    }
  }
  else
  {
    outUserAngles->v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0] - v14->angles.v[0];
    outUserAngles->v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1] - v14->angles.v[1];
    outUserAngles->v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2] - v14->angles.v[2];
  }
LABEL_42:
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  if ( v12->initialized )
  {
    v36 = 0.0027777778 * v57->v[1];
    angles.v[0] = (float)((float)((float)(0.0027777778 * v57->v[0]) - *(float *)&_XMM2) * 360.0) * ClientDef->camPitchInfluence;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v38 = 0.0027777778 * v57->v[2];
    angles.v[1] = (float)((float)(v36 - *(float *)&_XMM3) * 360.0) * ClientDef->camYawInfluence;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v35 = (float)((float)(v38 - *(float *)&_XMM3) * 360.0) * ClientDef->camRollInfluence;
  }
  else
  {
    v31 = 0.0027777778 * v57->v[1];
    angles.v[0] = (float)((float)(0.0027777778 * v57->v[0]) - *(float *)&_XMM2) * 360.0;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v33 = 0.0027777778 * v57->v[2];
    angles.v[1] = (float)(v31 - *(float *)&_XMM2) * 360.0;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v35 = (float)(v33 - *(float *)&_XMM2) * 360.0;
  }
  angles.v[2] = v35;
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vroundss xmm3, xmm8, xmm2, 1
    vroundss xmm2, xmm8, xmm3, 1
  }
  v42 = (float)((float)(outUserAngles->v[1] + v14->angles.v[1]) * 0.0027777778) - *(float *)&_XMM2;
  __asm { vroundss xmm2, xmm8, xmm3, 1 }
  v44 = (float)((float)(outUserAngles->v[2] + v14->angles.v[2]) * 0.0027777778) - *(float *)&_XMM2;
  camLerp = ClientDef->camLerp;
  v46 = (float)((float)((float)((float)(v14->angles.v[0] + outUserAngles->v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) + angles.v[0];
  v47 = (float)(v42 * 360.0) + angles.v[1];
  v48 = (float)(v44 * 360.0) + angles.v[2];
  if ( camLerp > 0.0 && v12->initialized )
  {
    v49 = DiffTrackAngle(v46, v12->angles.v[0], camLerp, v9);
    outViewAngles->v[0] = *(float *)&v49;
    v50 = DiffTrackAngle(v47, v12->angles.v[1], ClientDef->camLerp, v9);
    outViewAngles->v[1] = *(float *)&v50;
    v51 = DiffTrackAngle(v48, v12->angles.v[2], ClientDef->camLerp, v9);
    outViewAngles->v[2] = *(float *)&v51;
  }
  else
  {
    outViewAngles->v[0] = v46;
    outViewAngles->v[1] = v47;
    outViewAngles->v[2] = v48;
  }
}

/*
==============
VehicleCam_UpdateCamInternal
==============
*/
void VehicleCam_UpdateCamInternal(LocalClientNum_t localClientNum, const cg_t *cg, const centity_t *cent, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  __int64 v7; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v9; 
  VehicleCamera *v10; 
  const ClActiveClient *v11; 
  int isThirdPerson; 
  int CmdNumber; 
  CgVehicleSystem *v14; 
  VehicleClient *v15; 
  int v16; 
  __int64 mode; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t *p_angles; 
  float camLerp; 
  float v24; 
  vec3_t *p_offset; 
  double v26; 
  double v27; 
  double v28; 
  float radius; 
  float v30; 
  double v31; 
  double v32; 
  float *p_fovOffset; 
  double v34; 
  float v35; 
  float v36; 
  vec3_t *v37; 
  tmat33_t<vec3_t> *viewAxis; 
  vec3_t *camOffset; 
  VehicleDef *vehDef; 
  float targetFov; 
  float targetFovOffset; 
  const VehicleClient *Client; 
  vec3_t *v44; 
  vec3_t *viewAngles; 
  usercmd_s ucmd; 
  usercmd_s v47; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> v50; 
  tmat33_t<vec3_t> axis; 

  viewAngles = outViewAngles;
  v44 = outViewOrigin;
  v7 = localClientNum;
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 685, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 686, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v7);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 696, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  vehDef = (VehicleDef *)CgVehicleSystem::GetClientDef(Client);
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 698, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(viewAxis) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", viewAxis, 2) )
      __debugbreak();
  }
  v9 = v7;
  v10 = &vehicleCameras[v7];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 700, ASSERT_TYPE_ASSERT, "(cam)", (const char *)&queryFormat, "cam") )
    __debugbreak();
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 257, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 258, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 259, ASSERT_TYPE_ASSERT, "(cam)", (const char *)&queryFormat, "cam") )
    __debugbreak();
  v11 = ClActiveClient::GetClient((const LocalClientNum_t)cg->localClientNum);
  isThirdPerson = 0;
  CmdNumber = ClActiveClient_GetCmdNumber(v11);
  if ( CmdNumber > 1 )
  {
    v14 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v7);
    v15 = CgVehicleSystem::GetClient(v14, cent);
    CL_GetUserCmd(cg->localClientNum, CmdNumber - 1, &ucmd);
    CL_GetUserCmd(cg->localClientNum, CmdNumber, &v47);
    VehicleCam_UpdateModeParams((LocalClientNum_t)v7, cent);
    if ( v10->mode )
    {
      if ( v10->mode == VEHCAM_MODE_3RD_PERSON && (v15->flags & 1) == 0 )
      {
        v16 = 0;
        goto LABEL_35;
      }
    }
    else if ( (v15->flags & 1) != 0 )
    {
      v16 = 1;
LABEL_35:
      v10->mode = v16;
      *(_QWORD *)vehicleCameras[v9].userAngles.v = 0i64;
      vehicleCameras[v9].userAngles.v[2] = 0.0;
      vehicleCameras[v9].initialized = 0;
    }
  }
  mode = v10->mode;
  if ( (unsigned int)mode >= 2 )
  {
    LODWORD(camOffset) = 2;
    LODWORD(viewAxis) = v10->mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( VEHCAM_MODE_COUNT )", "mode doesn't index VEHCAM_MODE_COUNT\n\t%i not in [0, %i)", viewAxis, camOffset) )
      __debugbreak();
  }
  v18 = mode;
  CG_VehicleCam_GetVehiclePosition((LocalClientNum_t)v7, cent, &outOrigin, &outAngles);
  AnglesToAxis(&outAngles, &axis);
  LODWORD(v19) = LODWORD(Client->localSpeed.v[0]) & _xmm;
  v21 = (float)(v19 * vehicleCameraModes[v18].speedInfluence) + vehicleCameraModes[v18].radius;
  v20 = v21;
  p_angles = &vehicleCameras[v9].angles;
  VehicleCam_GetViewAnglesInternal((const LocalClientNum_t)v7, cent, &outAngles, &vehicleCameras[v9].userAngles, &vehicleCameras[v9].angles);
  BG_Vehicle_GetCameraTargetFovAndOffset(vehDef, v19, &targetFov, &targetFovOffset);
  camLerp = vehDef->camLerp;
  if ( camLerp > 0.0 && vehicleCameras[v9].initialized )
  {
    v24 = (float)cg->frametime * 0.001;
    p_offset = &vehicleCameras[v9].offset;
    v26 = DiffTrack(vehicleCameraModes[v18].offset.v[0], vehicleCameras[v9].offset.v[0], camLerp, v24);
    vehicleCameras[v9].offset.v[0] = *(float *)&v26;
    v27 = DiffTrack(vehicleCameraModes[v18].offset.v[1], vehicleCameras[v9].offset.v[1], vehDef->camLerp, v24);
    vehicleCameras[v9].offset.v[1] = *(float *)&v27;
    v28 = DiffTrack(vehicleCameraModes[v18].offset.v[2], vehicleCameras[v9].offset.v[2], vehDef->camLerp, v24);
    vehicleCameras[v9].offset.v[2] = *(float *)&v28;
    radius = vehicleCameras[v9].radius;
    v30 = vehDef->camLerp;
    Client = (const VehicleClient *)&vehicleCameras[v9].radius;
    v31 = DiffTrack(v20, radius, v30, v24);
    Client->wheelSpinAngle[0] = *(float *)&v31;
    v32 = DiffTrack(targetFov, vehicleCameras[v9].fov, vehDef->camLerp, v24);
    vehicleCameras[v9].fov = *(float *)&v32;
    p_fovOffset = &vehicleCameras[v9].fovOffset;
    v34 = DiffTrack(targetFovOffset, *p_fovOffset, vehDef->camLerp, v24);
    *p_fovOffset = *(float *)&v34;
  }
  else
  {
    p_offset = &vehicleCameras[v9].offset;
    v35 = targetFov;
    p_offset->v[0] = vehicleCameraModes[v18].offset.v[0];
    p_offset->v[1] = vehicleCameraModes[v18].offset.v[1];
    p_offset->v[2] = vehicleCameraModes[v18].offset.v[2];
    vehicleCameras[v9].fov = v35;
    v36 = targetFovOffset;
    vehicleCameras[v9].radius = v21;
    Client = (const VehicleClient *)&vehicleCameras[v9].radius;
    vehicleCameras[v9].initialized = 1;
    p_fovOffset = &vehicleCameras[v9].fovOffset;
    *p_fovOffset = v36;
  }
  AnglesToAxis(p_angles, &v50);
  LOBYTE(isThirdPerson) = v10->mode == VEHCAM_MODE_3RD_PERSON;
  VehicleCam_GetCameraViewOrigin((LocalClientNum_t)v7, &cg->predictedPlayerState, 1, &outOrigin, &axis, &v50, p_offset, *p_fovOffset, Client->wheelSpinAngle[0], vehicleCameraModes[v18].zOffsetMode, isThirdPerson, v44);
  v37 = viewAngles;
  *viewAngles = *p_angles;
  CG_VehicleCam_SetClientViewAngles(cg, v37);
}

/*
==============
VehicleCam_UpdateModeParams
==============
*/
void VehicleCam_UpdateModeParams(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  float vehCam_anglesYaw; 
  float vehCam_anglesRoll; 
  float vehCam_offsetY; 
  float vehCam_offsetZ; 
  VehCamZOffsetMode vehCam_zOffsetMode; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  float vehCam_anglesYaw3P; 
  float vehCam_anglesRoll3P; 
  float vehCam_offsetY3P; 
  float vehCam_offsetZ3P; 
  VehCamZOffsetMode vehCam_zOffsetMode3P; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  const dvar_t *v48; 
  float v49; 
  const dvar_t *v50; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 178, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 185, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 186, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( VehicleSystem->UseGdtCamera(VehicleSystem, cent) )
  {
    vehCam_anglesYaw = ClientDef->vehCam_anglesYaw;
    vehCam_anglesRoll = ClientDef->vehCam_anglesRoll;
    vehicleCameraModes[0].angles.v[0] = ClientDef->vehCam_anglesPitch;
    vehicleCameraModes[0].angles.v[1] = vehCam_anglesYaw;
    vehicleCameraModes[0].angles.v[2] = vehCam_anglesRoll;
    vehCam_offsetY = ClientDef->vehCam_offsetY;
    vehCam_offsetZ = ClientDef->vehCam_offsetZ;
    vehicleCameraModes[0].offset.v[0] = ClientDef->vehCam_offsetX;
    vehicleCameraModes[0].offset.v[1] = vehCam_offsetY;
    vehicleCameraModes[0].offset.v[2] = vehCam_offsetZ;
    vehicleCameraModes[0].radius = ClientDef->vehCam_radius;
    vehicleCameraModes[0].speedInfluence = ClientDef->vehCam_speedInfluence;
    vehicleCameraModes[0].pitchTurnRate = ClientDef->vehCam_pitchTurnRate;
    vehicleCameraModes[0].pitchClamp = ClientDef->vehCam_pitchClamp;
    vehicleCameraModes[0].yawTurnRate = ClientDef->vehCam_yawTurnRate;
    vehicleCameraModes[0].yawClamp = ClientDef->vehCam_yawClamp;
    vehCam_zOffsetMode = ClientDef->vehCam_zOffsetMode;
  }
  else
  {
    v12 = DVARVEC3_vehCam_angles;
    if ( !DVARVEC3_vehCam_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    *(_QWORD *)vehicleCameraModes[0].angles.v = v12->current.integer64;
    v13 = v12->current.vector.v[2];
    v14 = DVARVEC3_vehCam_offset;
    vehicleCameraModes[0].angles.v[2] = v13;
    if ( !DVARVEC3_vehCam_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    *(_QWORD *)vehicleCameraModes[0].offset.v = v14->current.integer64;
    v15 = v14->current.vector.v[2];
    v16 = DVARFLT_vehCam_radius;
    vehicleCameraModes[0].offset.v[2] = v15;
    if ( !DVARFLT_vehCam_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    value = v16->current.value;
    v18 = DVARFLT_vehCam_speedInfluence;
    vehicleCameraModes[0].radius = value;
    if ( !DVARFLT_vehCam_speedInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_speedInfluence") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.value;
    v20 = DVARFLT_vehCam_pitchTurnRate;
    vehicleCameraModes[0].speedInfluence = v19;
    if ( !DVARFLT_vehCam_pitchTurnRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchTurnRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.value;
    v22 = DVARFLT_vehCam_pitchClamp;
    vehicleCameraModes[0].pitchTurnRate = v21;
    if ( !DVARFLT_vehCam_pitchClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DVARFLT_vehCam_yawTurnRate;
    vehicleCameraModes[0].pitchClamp = v23;
    if ( !DVARFLT_vehCam_yawTurnRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawTurnRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    v26 = DVARFLT_vehCam_yawClamp;
    vehicleCameraModes[0].yawTurnRate = v25;
    if ( !DVARFLT_vehCam_yawClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v26->current.value;
    v28 = DVARINT_vehCam_zOffsetMode;
    vehicleCameraModes[0].yawClamp = v27;
    if ( !DVARINT_vehCam_zOffsetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_zOffsetMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    vehCam_zOffsetMode = v28->current.integer;
  }
  vehicleCameraModes[0].zOffsetMode = vehCam_zOffsetMode;
  if ( VehicleSystem->UseGdtCamera(VehicleSystem, cent) )
  {
    vehCam_anglesYaw3P = ClientDef->vehCam_anglesYaw3P;
    vehCam_anglesRoll3P = ClientDef->vehCam_anglesRoll3P;
    vehicleCameraModes[1].angles.v[0] = ClientDef->vehCam_anglesPitch3P;
    vehicleCameraModes[1].angles.v[1] = vehCam_anglesYaw3P;
    vehicleCameraModes[1].angles.v[2] = vehCam_anglesRoll3P;
    vehCam_offsetY3P = ClientDef->vehCam_offsetY3P;
    vehCam_offsetZ3P = ClientDef->vehCam_offsetZ3P;
    vehicleCameraModes[1].offset.v[0] = ClientDef->vehCam_offsetX3P;
    vehicleCameraModes[1].offset.v[1] = vehCam_offsetY3P;
    vehicleCameraModes[1].offset.v[2] = vehCam_offsetZ3P;
    vehicleCameraModes[1].radius = ClientDef->vehCam_radius3P;
    vehicleCameraModes[1].speedInfluence = ClientDef->vehCam_speedInfluence3P;
    vehicleCameraModes[1].pitchTurnRate = ClientDef->vehCam_pitchTurnRate3P;
    vehicleCameraModes[1].pitchClamp = ClientDef->vehCam_pitchClamp3P;
    vehicleCameraModes[1].yawTurnRate = ClientDef->vehCam_yawTurnRate3P;
    vehicleCameraModes[1].yawClamp = ClientDef->vehCam_yawClamp3P;
    vehCam_zOffsetMode3P = ClientDef->vehCam_zOffsetMode3P;
  }
  else
  {
    v34 = DVARVEC3_vehCam_angles3P;
    if ( !DVARVEC3_vehCam_angles3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_angles3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    *(_QWORD *)vehicleCameraModes[1].angles.v = v34->current.integer64;
    v35 = v34->current.vector.v[2];
    v36 = DVARVEC3_vehCam_offset3P;
    vehicleCameraModes[1].angles.v[2] = v35;
    if ( !DVARVEC3_vehCam_offset3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_offset3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    *(_QWORD *)vehicleCameraModes[1].offset.v = v36->current.integer64;
    v37 = v36->current.vector.v[2];
    v38 = DVARFLT_vehCam_radius3P;
    vehicleCameraModes[1].offset.v[2] = v37;
    if ( !DVARFLT_vehCam_radius3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_radius3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = v38->current.value;
    v40 = DVARFLT_vehCam_speedInfluence3P;
    vehicleCameraModes[1].radius = v39;
    if ( !DVARFLT_vehCam_speedInfluence3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_speedInfluence3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = v40->current.value;
    v42 = DVARFLT_vehCam_pitchTurnRate3P;
    vehicleCameraModes[1].speedInfluence = v41;
    if ( !DVARFLT_vehCam_pitchTurnRate3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchTurnRate3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v43 = v42->current.value;
    v44 = DVARFLT_vehCam_pitchClamp3P;
    vehicleCameraModes[1].pitchTurnRate = v43;
    if ( !DVARFLT_vehCam_pitchClamp3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchClamp3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = v44->current.value;
    v46 = DVARFLT_vehCam_yawTurnRate3P;
    vehicleCameraModes[1].pitchClamp = v45;
    if ( !DVARFLT_vehCam_yawTurnRate3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawTurnRate3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v47 = v46->current.value;
    v48 = DVARFLT_vehCam_yawClamp3P;
    vehicleCameraModes[1].yawTurnRate = v47;
    if ( !DVARFLT_vehCam_yawClamp3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawClamp3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    v49 = v48->current.value;
    v50 = DVARINT_vehCam_zOffsetMode3P;
    vehicleCameraModes[1].yawClamp = v49;
    if ( !DVARINT_vehCam_zOffsetMode3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_zOffsetMode3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    vehCam_zOffsetMode3P = v50->current.integer;
  }
  vehicleCameraModes[1].zOffsetMode = vehCam_zOffsetMode3P;
}

