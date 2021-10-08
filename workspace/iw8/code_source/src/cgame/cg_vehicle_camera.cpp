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
  char v19; 
  bool v20; 
  bool v27; 
  bool v28; 
  int v39; 
  bool v41; 
  bool v42; 
  bool v43; 
  __int64 v56; 
  __int64 v57; 
  int v58[2]; 

  _R14 = yawAxis;
  _RSI = pitchAxis;
  if ( !pitchAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 406, ASSERT_TYPE_ASSERT, "(pitchAxis)", (const char *)&queryFormat, "pitchAxis") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 407, ASSERT_TYPE_ASSERT, "(yawAxis)", (const char *)&queryFormat, "yawAxis") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 410, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
  {
    *_RSI = 0.0;
    *_R14 = 0.0;
  }
  else
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem->GetCameraSpectatorAxis(VehicleSystem, _RSI, _R14) )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_38], xmm6
        vmovaps [rsp+0E8h+var_48], xmm7
        vmovaps [rsp+0E8h+var_58], xmm8
        vmovaps [rsp+0E8h+var_98], xmm12
      }
      *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 3);
      __asm { vmovss  dword ptr [rsi], xmm0 }
      *(double *)&_XMM0 = CL_Input_GetClientLookInversion(localClientNum);
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm0
      }
      *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 2);
      __asm
      {
        vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm8, cs:__real@3f800000
        vmovss  dword ptr [r14], xmm6
        vmovss  xmm7, dword ptr [rsi]
        vandps  xmm7, xmm7, xmm12
        vcomiss xmm7, xmm8
        vandps  xmm6, xmm6, xmm12
      }
      if ( !(v19 | v20) )
      {
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 434, ASSERT_TYPE_ASSERT, "(absPitchAxis <= 1.0f)", (const char *)&queryFormat, "absPitchAxis <= 1.0f");
        v19 = 0;
        v20 = !v27;
        if ( v27 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( !(v19 | v20) )
      {
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 435, ASSERT_TYPE_ASSERT, "(absYawAxis <= 1.0f)", (const char *)&queryFormat, "absYawAxis <= 1.0f");
        v19 = 0;
        v20 = !v28;
        if ( v28 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, xmm6 }
      if ( v19 | v20 )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm7
          vsubss  xmm0, xmm8, xmm0
          vmulss  xmm1, xmm0, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vsubss  xmm0, xmm8, xmm0
          vmulss  xmm1, xmm0, dword ptr [r14]
          vmovss  dword ptr [r14], xmm1
        }
      }
      if ( applyDeadzone )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [r14]
          vmovss  xmm6, cs:__real@3e8a3d71
          vmovaps [rsp+0E8h+var_68], xmm9
        }
        _RDI = v58;
        __asm
        {
          vmovss  xmm9, dword ptr [rsi]
          vmovaps [rsp+0E8h+var_78], xmm10
          vmovss  xmm10, cs:__real@3f7d70a4
        }
        v39 = 0;
        __asm
        {
          vmovaps [rsp+0E8h+var_88], xmm11
          vmovss  xmm11, cs:__real@3fb1c71c
          vmovss  [rsp+0E8h+var_A4], xmm9
          vmovss  [rsp+0E8h+var_A8], xmm7
        }
        v41 = 1;
        v42 = 1;
        do
        {
          if ( !v41 )
          {
            LODWORD(v57) = 2;
            LODWORD(v56) = v39;
            v43 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v56, v57);
            v41 = 0;
            v42 = !v43;
            if ( v43 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vandps  xmm0, xmm0, xmm12
            vcomiss xmm0, xmm6
          }
          if ( v41 )
          {
            __asm { vxorps  xmm1, xmm1, xmm1 }
          }
          else
          {
            __asm { vcomiss xmm0, xmm10 }
            if ( v42 )
            {
              __asm
              {
                vsubss  xmm0, xmm0, xmm6
                vmulss  xmm1, xmm0, xmm11
              }
            }
            else
            {
              __asm { vmovaps xmm1, xmm8 }
            }
          }
          if ( v39 )
          {
            __asm
            {
              vmulss  xmm0, xmm9, xmm1
              vmovss  dword ptr [rsi], xmm0
            }
          }
          else
          {
            __asm
            {
              vmulss  xmm0, xmm7, xmm1
              vmovss  dword ptr [r14], xmm0
            }
          }
          ++v39;
          ++_RDI;
          v41 = (unsigned int)v39 < 2;
          v42 = (unsigned int)v39 <= 2;
        }
        while ( v39 < 2 );
        __asm
        {
          vmovaps xmm11, [rsp+0E8h+var_88]
          vmovaps xmm10, [rsp+0E8h+var_78]
          vmovaps xmm9, [rsp+0E8h+var_68]
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+0E8h+var_58]
        vmovaps xmm7, [rsp+0E8h+var_48]
        vmovaps xmm6, [rsp+0E8h+var_38]
        vmovaps xmm12, [rsp+0E8h+var_98]
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
  unsigned int entity; 
  int v4; 
  __int16 remoteEyesEnt; 
  centity_t *v6; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  __int64 v10; 
  __int64 v14; 
  __int64 v15; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1037, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( _RBX->predictedPlayerState.vehicleState.entity == 2047 && _RBX->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1038, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  entity = _RBX->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    remoteEyesEnt = _RBX->predictedPlayerState.remoteEyesEnt;
    if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
    {
      LODWORD(v14) = remoteEyesEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1047, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v14, 2046) )
        __debugbreak();
    }
    v4 = _RBX->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      LODWORD(v14) = _RBX->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v14, 2046) )
        __debugbreak();
    }
    v4 = _RBX->predictedPlayerState.vehicleState.entity;
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
  v10 = _RBX->localClientNum;
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v14) = _RBX->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  _RDI = &vehicleCameras[v10];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1061, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  if ( ClientDef->turretWeapon )
    __asm { vmovss  xmm0, dword ptr [rbx+59EC4h] }
  else
    __asm { vmovss  xmm0, dword ptr [rdi+38h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_VehicleCam_GetRemoteDriveViewAngles
==============
*/
void CG_VehicleCam_GetRemoteDriveViewAngles(LocalClientNum_t localClientNum, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v16; 
  vec3_t vehicleAngles; 
  vec3_t outVehiclePosition; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1002, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1003, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1011, ASSERT_TYPE_ASSERT, "(vehicleCl)", (const char *)&queryFormat, "vehicleCl") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  v16 = ClientDef;
  if ( (!ClientDef || !ClientDef->camRemoteDrive) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1015, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->camRemoteDrive)", (const char *)&queryFormat, "vehicleDef && vehicleDef->camRemoteDrive") )
    __debugbreak();
  __asm { vmovaps xmm3, xmm6; frameTime }
  VehicleCam_GetRemoteDriveVehiclePosition(localClientNum, vehicleEntity, v16, *(const float *)&_XMM3, &outVehiclePosition, &vehicleAngles);
  __asm { vmovaps xmm3, xmm6; frameTime }
  VehicleCam_GetRemoteDriveUserAngles(localClientNum, playerState, v16, *(const float *)&_XMM3, outViewAngles);
  BG_Vehicle_ApplyCameraInfluence(&playerState->vehicleState, v16, outViewAngles, &vehicleAngles, outViewAngles);
  BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(&vehicleAngles, outViewAngles, v16, outViewAngles);
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
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
  tmat33_t<vec3_t> outTagMat; 

  _RSI = outOrigin;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 304, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, cent);
  if ( !CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
  {
    CG_GetPoseOrigin(&cent->pose, _RSI);
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( (CgVehicleSystem::GetClient(VehicleSystem, cent)->flags & 1) != 0 )
  {
    if ( !CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_player, &outTagMat, _RSI) )
    {
      CG_GetPoseOrigin(&cent->pose, _RSI);
LABEL_11:
      outAngles->v[0] = cent->pose.angles.v[0];
      outAngles->v[1] = cent->pose.angles.v[1];
      outAngles->v[2] = cent->pose.angles.v[2];
      return;
    }
    goto LABEL_13;
  }
  if ( CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_camera, &outTagMat, _RSI) )
  {
LABEL_13:
    AxisToAngles(&outTagMat, outAngles);
    return;
  }
  if ( CG_DObjGetWorldTagMatrix(&cent->pose, EntityDObj, scr_const.tag_player, &outTagMat, _RSI) )
  {
    AxisToAngles(&outTagMat, outAngles);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, _RSI);
    outAngles->v[0] = cent->pose.angles.v[0];
    outAngles->v[1] = cent->pose.angles.v[1];
    outAngles->v[2] = cent->pose.angles.v[2];
    AnglesToAxis(outAngles, &outTagMat);
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 349, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 351, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [rbx+200h]
    vmulss  xmm0, xmm2, dword ptr [rsp+98h+outTagMat+18h]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm2, dword ptr [rsp+98h+outTagMat+1Ch]
    vmovss  dword ptr [rsi], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm2, dword ptr [rsp+98h+outTagMat+20h]
    vmovss  dword ptr [rsi+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
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

float __fastcall CG_VehicleCam_ScaleFov(const cg_t *cg, double fov)
{
  LocalClientNum_t localClientNum; 
  __int64 v9; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1186, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cg->predictedPlayerState.eFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1190, ASSERT_TYPE_ASSERT, "(ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE ))", (const char *)&queryFormat, "ps->eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE )") )
    __debugbreak();
  if ( cg->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1191, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  localClientNum = cg->localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v9) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rcx+rax]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_VehicleCam_SetClientViewAngles
==============
*/
void CG_VehicleCam_SetClientViewAngles(const cg_t *cg, const vec3_t *viewAngles)
{
  ClActiveClient *Client; 
  int v11; 
  int v12; 
  int v13; 

  _RDI = viewAngles;
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 162, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbx+0BCh]
    vmovss  xmm2, dword ptr [rdi+4]
    vsubss  xmm0, xmm2, dword ptr [rbx+0C0h]
    vmovss  [rsp+58h+var_28], xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+0C4h]
    vmovss  [rsp+58h+var_20], xmm2
    vmovss  [rsp+58h+var_24], xmm0
  }
  Client = ClActiveClient::GetClient((const LocalClientNum_t)cg->localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  Client->clviewangles_aab += Client->clviewangles_set_aab;
  LODWORD(Client->clViewangles.clViewangles.v[0]) = v11 ^ ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[1]) = v12 ^ ((Client->clviewangles_aab ^ ((_DWORD)Client + 432)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 432)) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[2]) = v13 ^ ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) + 2));
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
  unsigned int entity; 
  int v18; 
  __int16 remoteEyesEnt; 
  centity_t *v20; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleDef *ClientDef; 
  __int64 v25; 
  char v65; 
  char v66; 
  vec3_t *outVehicleAngles; 
  __int64 v79; 
  vec3_t angles; 
  vec3_t userAngles; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-88h], xmm9 }
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1093, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cg->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1096, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( cg->predictedPlayerState.vehicleState.entity == 2047 && cg->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1097, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r14+65E4h]
    vmulss  xmm9, xmm0, cs:__real@3a83126f
  }
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
    v18 = cg->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      LODWORD(outVehicleAngles) = cg->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1106, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", outVehicleAngles, 2046) )
        __debugbreak();
    }
    v18 = cg->predictedPlayerState.vehicleState.entity;
  }
  v20 = CG_GetEntity(localClientNum, v18);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1115, ASSERT_TYPE_ASSERT, "(vehicleEnt)", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( (v20->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1116, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEnt ))", (const char *)&queryFormat, "CENextValid( vehicleEnt )") )
    __debugbreak();
  if ( v20 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v20->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1117, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEnt->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEnt->nextState )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  _R15 = CgVehicleSystem::GetClient(VehicleSystem, v20);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1122, ASSERT_TYPE_ASSERT, "(vehicleCl)", (const char *)&queryFormat, "vehicleCl") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(_R15);
  _RDI = ClientDef;
  if ( (!ClientDef || !ClientDef->camRemoteDrive) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1126, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->camRemoteDrive)", (const char *)&queryFormat, "vehicleDef && vehicleDef->camRemoteDrive") )
    __debugbreak();
  v25 = cg->localClientNum;
  if ( (unsigned int)v25 >= 2 )
  {
    LODWORD(v79) = 2;
    LODWORD(outVehicleAngles) = cg->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outVehicleAngles, v79) )
      __debugbreak();
  }
  _RSI = &vehicleCameras[v25];
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 1130, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  __asm { vmovaps xmm3, xmm9; frameTime }
  VehicleCam_GetRemoteDriveVehiclePosition(cg->localClientNum, v20, _RDI, *(const float *)&_XMM3, &axis.m[3], &angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+148h+angles]
    vmovss  xmm1, dword ptr [rsp+148h+angles+4]
    vmovss  dword ptr [rsi+28h], xmm0
    vmovss  xmm0, dword ptr [rsp+148h+angles+8]
    vmovss  dword ptr [rsi+30h], xmm0
    vmovss  dword ptr [rsi+2Ch], xmm1
  }
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  if ( !_RSI->initialized )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3b360b61
      vmovss  xmm5, cs:__real@3f000000
      vmovss  xmm4, cs:__real@43b40000
      vmovss  xmm0, dword ptr [rsp+148h+angles+8]
      vmovss  xmm2, dword ptr [rsp+148h+angles]
    }
    _RSI->initialized = 1;
    _RSI->fov = _RDI->camFovIncrease;
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rdi+0C10h]
      vmovss  xmm0, dword ptr [rsp+148h+angles+4]
      vmovaps [rsp+148h+var_58], xmm6
      vmovaps [rsp+148h+var_68], xmm7
      vmovaps [rsp+148h+var_78], xmm8
      vmulss  xmm8, xmm1, xmm3
      vaddss  xmm1, xmm0, dword ptr [rdi+0C0Ch]
      vaddss  xmm0, xmm2, dword ptr [rdi+0C08h]
      vmulss  xmm6, xmm1, xmm3
      vmulss  xmm3, xmm0, xmm3
      vaddss  xmm1, xmm3, xmm5
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm2, xmm6, xmm5
      vroundss xmm3, xmm7, xmm2, 1
      vsubss  xmm1, xmm6, xmm3
      vmovaps xmm6, [rsp+148h+var_58]
      vmulss  xmm0, xmm0, xmm4
      vaddss  xmm2, xmm8, xmm5
      vroundss xmm3, xmm7, xmm2, 1
      vmovaps xmm7, [rsp+148h+var_68]
      vmovss  dword ptr [rsi+1Ch], xmm0
      vmulss  xmm0, xmm1, xmm4
      vsubss  xmm1, xmm8, xmm3
      vmovaps xmm8, [rsp+148h+var_78]
      vmovss  dword ptr [rsi+20h], xmm0
      vmulss  xmm0, xmm1, xmm4
      vmovss  dword ptr [rsi+24h], xmm0
    }
  }
  __asm { vmovaps xmm3, xmm9; frameTime }
  VehicleCam_GetRemoteDriveUserAngles(localClientNum, &cg->predictedPlayerState, _RDI, *(const float *)&_XMM3, &userAngles);
  BG_Vehicle_ApplyCameraInfluence(&cg->predictedPlayerState.vehicleState, _RDI, &userAngles, &angles, &userAngles);
  BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(&angles, &userAngles, _RDI, outViewAngles);
  _RSI->userAngles.v[0] = outViewAngles->v[0];
  _RSI->userAngles.v[1] = outViewAngles->v[1];
  _RSI->userAngles.v[2] = outViewAngles->v[2];
  CG_VehicleCam_SetClientViewAngles(cg, outViewAngles);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0C1Ch]
    vmovss  xmm1, dword ptr [rdi+0C18h]
    vmovss  xmm0, dword ptr [rdi+0C14h]
    vmovss  dword ptr [rsp+148h+in1], xmm0
    vmovss  dword ptr [rsp+148h+in1+4], xmm1
    vmovss  dword ptr [rsp+148h+in1+8], xmm2
  }
  MatrixTransformVector43(&in1, &axis, outViewOrigin);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0BECh]
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm2, xmm1
  }
  if ( v65 | v66 )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+0BE4h]; tgt }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+30h]
      vmovss  xmm0, cs:__real@3d68ba2e
      vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vdivss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm3, xmm2; val
      vmovss  xmm2, cs:__real@3f800000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm0, xmm0, dword ptr [rdi+0BE4h] }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0BCCh]; rate
    vmovss  xmm1, dword ptr [rsi+38h]; cur
    vmovaps xmm3, xmm9; deltaTime
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  dword ptr [rsi+38h], xmm0
    vmovaps xmm9, [rsp+148h+var_88]
  }
}

/*
==============
VehicleCam_GetCameraViewOrigin
==============
*/
void VehicleCam_GetCameraViewOrigin(LocalClientNum_t localClientNum, const playerState_s *ps, int useClientTrace, const vec3_t *vehicleOrigin, const tmat33_t<vec3_t> *vehicleAxis, const tmat33_t<vec3_t> *viewAxis, const vec3_t *camOffset, float camFovOffset, float camRadius, VehCamZOffsetMode zOffsetMode, int isThirdPerson, vec3_t *outViewOrigin)
{
  const dvar_t *v58; 
  float startSolidOffset; 
  vec3_t start; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBX = outViewOrigin;
  _RSI = vehicleOrigin;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 495, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _R8 = camOffset;
  __asm
  {
    vmovss  xmm0, [rsp+88h+camFovOffset]
    vaddss  xmm1, xmm0, dword ptr [r8]
    vmulss  xmm0, xmm1, dword ptr [rdx]
    vaddss  xmm2, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm0, xmm1, dword ptr [rdx+4]
    vaddss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm3
    vmulss  xmm0, xmm1, dword ptr [rdx+8]
    vaddss  xmm4, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm4
    vmovss  xmm1, dword ptr [r8+4]
    vmulss  xmm0, xmm1, dword ptr [rdx+0Ch]
    vaddss  xmm5, xmm0, xmm2
    vmovss  dword ptr [rbx], xmm5
    vmulss  xmm0, xmm1, dword ptr [rdx+10h]
    vaddss  xmm6, xmm0, xmm3
    vmovss  dword ptr [rbx+4], xmm6
    vmulss  xmm0, xmm1, dword ptr [rdx+14h]
    vaddss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rbx+8], xmm2
  }
  switch ( zOffsetMode )
  {
    case VEHCAM_ZMODE_WORLD:
      __asm { vaddss  xmm4, xmm2, dword ptr [r8+8] }
      goto LABEL_13;
    case VEHCAM_ZMODE_VEHICLE:
      __asm
      {
        vmovss  xmm1, dword ptr [r8+8]
        vmulss  xmm0, xmm1, dword ptr [rdx+18h]
        vaddss  xmm5, xmm0, xmm5
        vmovss  dword ptr [rbx], xmm5
        vmulss  xmm0, xmm1, dword ptr [rdx+1Ch]
        vaddss  xmm6, xmm0, xmm6
        vmovss  dword ptr [rbx+4], xmm6
        vmulss  xmm0, xmm1, dword ptr [rdx+20h]
        vaddss  xmm4, xmm0, xmm2
      }
      goto LABEL_13;
    case VEHCAM_ZMODE_VIEW:
      __asm
      {
        vmovss  xmm1, dword ptr [r8+8]
        vmulss  xmm0, xmm1, dword ptr [rdi+18h]
        vaddss  xmm5, xmm0, xmm5
        vmovss  dword ptr [rbx], xmm5
        vmulss  xmm0, xmm1, dword ptr [rdi+1Ch]
        vaddss  xmm6, xmm0, xmm6
        vmovss  dword ptr [rbx+4], xmm6
        vmulss  xmm0, xmm1, dword ptr [rdi+20h]
        vaddss  xmm4, xmm0, xmm2
      }
LABEL_13:
      __asm { vmovss  dword ptr [rbx+8], xmm4 }
      goto LABEL_14;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 512, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleCam_UpdateDriveCam: Unknown z offset mode") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
  }
LABEL_14:
  __asm
  {
    vmovss  xmm0, [rsp+88h+camRadius]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm3, dword ptr [rdi]
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm0, xmm3, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( isThirdPerson )
  {
    __asm { vmovss  xmm0, dword ptr [rsi] }
    v58 = DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+88h+start], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+88h+start+8], xmm0
      vmovss  dword ptr [rsp+88h+start+4], xmm1
    }
    if ( !DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_sphere_bounds_offset_z") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+start+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+28h]
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+88h+startSolidOffset], xmm0
      vmovss  dword ptr [rsp+88h+start+8], xmm1
    }
    CG_View_ThirdPersonViewTrace(localClientNum, ps, &start, outViewOrigin, 41968145, startSolidOffset, outViewOrigin);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
VehicleCam_GetMouseMoveViewAngles
==============
*/
void VehicleCam_GetMouseMoveViewAngles(LocalClientNum_t localClientNum, const VehicleDef *vehDef, const VehicleCamera *vehicleCam, vec3_t *outViewAngles)
{
  cg_t *LocalClientGlobals; 

  _RSI = vehDef;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 457, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ClActiveClient::GetClient(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 460, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  outViewAngles->v[0] = vehicleCam->userAngles.v[0];
  *(_QWORD *)&outViewAngles->y = LODWORD(vehicleCam->userAngles.v[1]);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
  {
    __asm
    {
      vmovaps [rsp+58h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [rsi+0C28h]
      vucomiss xmm6, dword ptr [rsi+0C30h]
      vmovaps xmm6, [rsp+58h+var_28]
    }
  }
}

/*
==============
VehicleCam_GetRemoteDriveUserAngles
==============
*/

void __fastcall VehicleCam_GetRemoteDriveUserAngles(LocalClientNum_t localClientNum, const playerState_s *playerState, const VehicleDef *vehicleDef, double frameTime, vec3_t *userAngles)
{
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  VehicleCamera *v13; 
  __int64 v36; 
  void *retaddr; 
  float pitchAxis; 
  float yawAxis; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm9 }
  v9 = localClientNum;
  __asm { vmovaps xmm9, xmm3 }
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 938, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 939, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(v36) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v36, 2) )
      __debugbreak();
  }
  v13 = &vehicleCameras[v9];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 944, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  if ( v13->initialized && !CG_View_IsKillCamView((const LocalClientNum_t)v9) && LocalClientGlobals->clientNum == playerState->clientNum )
  {
    if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v9) )
    {
      __asm { vmovaps [rsp+88h+var_38], xmm8 }
      CG_VehicleCam_GetControllerAxis(LocalClientGlobals->localClientNum, &pitchAxis, &yawAxis, 1);
      _RAX = userAngles;
      __asm
      {
        vmovss  xmm0, [rsp+88h+pitchAxis]
        vmulss  xmm1, xmm0, dword ptr [rbp+0C28h]
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm3, xmm2, dword ptr [rsi+1Ch]
        vmulss  xmm4, xmm3, cs:__real@3b360b61
        vaddss  xmm1, xmm4, cs:__real@3f000000
        vxorps  xmm8, xmm8, xmm8
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  xmm0, [rsp+88h+yawAxis]
        vmovss  dword ptr [rax], xmm1
        vmulss  xmm1, xmm0, dword ptr [rbp+0C30h]
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm3, xmm2, dword ptr [rsi+20h]
        vmulss  xmm4, xmm3, cs:__real@3b360b61
        vaddss  xmm1, xmm4, cs:__real@3f000000
        vroundss xmm2, xmm8, xmm1, 1
        vmovaps xmm8, [rsp+88h+var_38]
        vsubss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rax+4], xmm1
      }
      _RAX->v[2] = 0.0;
    }
    else
    {
      VehicleCam_GetMouseMoveViewAngles((LocalClientNum_t)v9, vehicleDef, &vehicleCameras[v9], userAngles);
    }
  }
  else
  {
    *userAngles = playerState->viewangles;
  }
  __asm { vmovaps xmm9, [rsp+88h+var_48] }
}

/*
==============
VehicleCam_GetRemoteDriveVehiclePosition
==============
*/

void __fastcall VehicleCam_GetRemoteDriveVehiclePosition(LocalClientNum_t localClientNum, const centity_t *vehicleEntity, const VehicleDef *vehicleDef, double frameTime, vec3_t *outVehiclePosition, vec3_t *outVehicleAngles)
{
  __int64 v10; 
  char v14; 
  char v15; 
  __int64 v31; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RDI = vehicleDef;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  v10 = localClientNum;
  __asm { vmovaps xmm7, xmm3 }
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 977, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 978, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v31) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, 2) )
      __debugbreak();
  }
  _RSI = &vehicleCameras[v10];
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 981, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  _RBX = outVehicleAngles;
  CG_VehicleCam_GetVehiclePosition((LocalClientNum_t)v10, vehicleEntity, outVehiclePosition, outVehicleAngles);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0BF8h]; rate
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
  }
  if ( !(v14 | v15) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+28h]; cur
      vmovss  xmm0, dword ptr [rbx]; tgt
      vmovaps xmm3, xmm7; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx], xmm0 }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0BFCh]; rate
    vcomiss xmm2, xmm6
  }
  if ( !(v14 | v15) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+2Ch]; cur
      vmovss  xmm0, dword ptr [rbx+4]; tgt
      vmovaps xmm3, xmm7; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0C00h]; rate
    vcomiss xmm2, xmm6
  }
  if ( !(v14 | v15) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+30h]; cur
      vmovss  xmm0, dword ptr [rbx+8]; tgt
      vmovaps xmm3, xmm7; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
VehicleCam_GetViewAnglesInternal
==============
*/
void VehicleCam_GetViewAnglesInternal(const LocalClientNum_t localClientNum, const centity_t *const vehicleEntity, const vec3_t *vehicleAngles, vec3_t *outUserAngles, vec3_t *outViewAngles)
{
  __int64 v19; 
  CgVehicleSystem *VehicleSystem; 
  __int64 mode; 
  char v135; 
  char v136; 
  __int64 v152; 
  __int64 v153; 
  float yawAxis; 
  float pitchAxis; 
  const VehicleClient *Client; 
  const vec3_t *v157; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v166; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  _R12 = outViewAngles;
  _RBX = outUserAngles;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  v157 = vehicleAngles;
  v19 = localClientNum;
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 579, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
  }
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v19);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm10, xmm0, xmm8
  }
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v19);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 587, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  _R14 = CgVehicleSystem::GetClientDef(Client);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 589, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( (unsigned int)v19 >= 2 )
  {
    LODWORD(v152) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v152, 2) )
      __debugbreak();
  }
  _RDI = &vehicleCameras[v19];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 591, ASSERT_TYPE_ASSERT, "(vehicleCam)", (const char *)&queryFormat, "vehicleCam") )
    __debugbreak();
  mode = _RDI->mode;
  if ( (unsigned int)mode >= 2 )
  {
    LODWORD(v153) = 2;
    LODWORD(v152) = _RDI->mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( VEHCAM_MODE_COUNT )", "mode doesn't index VEHCAM_MODE_COUNT\n\t%i not in [0, %i)", v152, v153) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+168h+var_B8], xmm13
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+168h+pitchAxis], xmm7
    vmovss  [rsp+168h+yawAxis], xmm7
    vmovaps [rsp+168h+var_C8], xmm14
  }
  _RBP = &vehicleCameraModes[mode];
  __asm
  {
    vmovss  xmm9, cs:__real@3b360b61
    vmovss  xmm11, cs:__real@3f000000
    vmovss  xmm12, cs:__real@43b40000
  }
  if ( VehicleSystem->IsCameraPlayerView(VehicleSystem) )
  {
    if ( _R14->camLookEnabled )
    {
      if ( !_RDI->initialized )
      {
        __asm
        {
          vmulss  xmm3, xmm9, dword ptr [r15+178C0h]
          vaddss  xmm1, xmm3, xmm11
          vxorps  xmm4, xmm4, xmm4
          vroundss xmm2, xmm4, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm12
          vmovss  dword ptr [rbx], xmm1
          vmulss  xmm3, xmm9, dword ptr [r15+178C4h]
          vaddss  xmm1, xmm3, xmm11
          vroundss xmm2, xmm4, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm12
          vmovss  dword ptr [rbx+4], xmm1
          vmulss  xmm3, xmm9, dword ptr [r15+178C8h]
          vaddss  xmm1, xmm3, xmm11
          vroundss xmm2, xmm4, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm12
          vmovss  dword ptr [rbx+8], xmm1
        }
      }
      if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 531, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
        __debugbreak();
      if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v19) )
      {
        CG_VehicleCam_GetControllerAxis((LocalClientNum_t)v19, &pitchAxis, &yawAxis, 1);
        __asm
        {
          vmovss  xmm0, [rsp+168h+pitchAxis]
          vmulss  xmm1, xmm0, dword ptr [rbp+20h]
          vmovss  xmm0, [rsp+168h+yawAxis]
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm3, xmm2, dword ptr [rdi+1Ch]
          vmovss  dword ptr [rbx], xmm3
          vmulss  xmm1, xmm0, dword ptr [rbp+28h]
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm3, xmm2, dword ptr [rdi+20h]
          vmovss  dword ptr [rbx+4], xmm3
        }
        _RBX->v[2] = 0.0;
      }
      else
      {
        VehicleCam_GetMouseMoveViewAngles((LocalClientNum_t)v19, _R14, &vehicleCameras[v19], _RBX);
      }
      if ( !VehicleSystem->IsCameraFreeLookEnabled(VehicleSystem) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+24h]; clamp
          vmovss  xmm0, dword ptr [rbx]; angle
        }
        *(double *)&_XMM0 = BG_Vehicle_ClampCameraAngle(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rbp+2Ch]; clamp
          vmovss  xmm0, dword ptr [rbx+4]; angle
        }
        *(double *)&_XMM0 = BG_Vehicle_ClampCameraAngle(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm14, [rsp+168h+yawAxis]
          vmovss  xmm13, [rsp+168h+pitchAxis]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
        if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v19) )
        {
          __asm { vucomiss xmm13, xmm7 }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r15+178C0h]
            vsubss  xmm1, xmm0, dword ptr [rbx]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm8
          }
        }
      }
    }
    else
    {
      *(_QWORD *)_RBX->v = 0i64;
      _RBX->v[2] = 0.0;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+1E0h]
      vsubss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm2, dword ptr [r15+1E4h]
      vsubss  xmm0, xmm2, dword ptr [rbp+4]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [r15+1E8h]
      vsubss  xmm2, xmm1, dword ptr [rbp+8]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+168h+var_C8]
    vmovaps xmm13, [rsp+168h+var_B8]
    vmulss  xmm3, xmm9, dword ptr [rax]
    vaddss  xmm1, xmm3, xmm11
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm2, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, xmm12
  }
  if ( _RDI->initialized )
  {
    __asm
    {
      vmulss  xmm2, xmm1, dword ptr [r14+0BD8h]
      vmulss  xmm4, xmm9, dword ptr [rax+4]
      vmovss  dword ptr [rsp+168h+angles], xmm2
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm4, xmm9, dword ptr [rax+8]
      vmulss  xmm0, xmm1, xmm12
      vmulss  xmm2, xmm0, dword ptr [r14+0BDCh]
      vmovss  dword ptr [rsp+168h+angles+4], xmm2
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm12
      vmulss  xmm2, xmm1, dword ptr [r14+0BE0h]
      vmovss  dword ptr [rsp+168h+angles+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm3, xmm9, dword ptr [rax+4]
      vmovss  dword ptr [rsp+168h+angles], xmm1
      vaddss  xmm1, xmm3, xmm11
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm3, xmm9, dword ptr [rax+8]
      vmulss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rsp+168h+angles+4], xmm1
      vaddss  xmm1, xmm3, xmm11
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rsp+168h+angles+8], xmm1
    }
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmulss  xmm4, xmm1, xmm9
    vmovss  xmm1, dword ptr [rbx+4]
    vaddss  xmm2, xmm4, xmm11
    vroundss xmm3, xmm8, xmm2, 1
    vaddss  xmm2, xmm1, dword ptr [rbp+4]
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm4, xmm2, xmm9
    vaddss  xmm3, xmm4, xmm11
    vroundss xmm2, xmm8, xmm3, 1
    vmulss  xmm6, xmm0, xmm12
    vsubss  xmm0, xmm4, xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+8]
    vmulss  xmm4, xmm2, xmm9
    vmovaps xmm9, [rsp+168h+var_78]
    vaddss  xmm3, xmm4, xmm11
    vmovaps xmm11, [rsp+168h+var_98]
    vroundss xmm2, xmm8, xmm3, 1
    vmulss  xmm5, xmm0, xmm12
    vsubss  xmm0, xmm4, xmm2
    vmovss  xmm2, dword ptr [r14+0BCCh]; rate
    vaddss  xmm4, xmm6, dword ptr [rsp+168h+angles]
    vaddss  xmm6, xmm5, dword ptr [rsp+168h+angles+4]
    vmulss  xmm3, xmm0, xmm12
    vaddss  xmm8, xmm3, dword ptr [rsp+168h+angles+8]
    vmovaps xmm12, [rsp+168h+var_A8]
    vcomiss xmm2, xmm7
    vmovaps xmm7, [rsp+168h+var_58]
  }
  if ( v135 | v136 || !_RDI->initialized )
  {
    __asm
    {
      vmovss  dword ptr [r12], xmm4
      vmovss  dword ptr [r12+4], xmm6
      vmovss  dword ptr [r12+8], xmm8
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+4]; cur
      vmovaps xmm3, xmm10; deltaTime
      vmovaps xmm0, xmm4; tgt
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  dword ptr [r12], xmm0
      vmovss  xmm2, dword ptr [r14+0BCCh]; rate
      vmovss  xmm1, dword ptr [rdi+8]; cur
      vmovaps xmm0, xmm6; tgt
      vmovaps xmm3, xmm10; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  dword ptr [r12+4], xmm0
      vmovss  xmm2, dword ptr [r14+0BCCh]; rate
      vmovss  xmm1, dword ptr [rdi+0Ch]; cur
      vmovaps xmm0, xmm8; tgt
      vmovaps xmm3, xmm10; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [r12+8], xmm0 }
  }
  _R11 = &v166;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-70h]
  }
}

/*
==============
VehicleCam_UpdateCamInternal
==============
*/
void VehicleCam_UpdateCamInternal(LocalClientNum_t localClientNum, const cg_t *cg, const centity_t *cent, vec3_t *outViewOrigin, vec3_t *outViewAngles)
{
  __int64 v10; 
  CgVehicleSystem *VehicleSystem; 
  VehicleCamera *v13; 
  const ClActiveClient *v14; 
  int isThirdPerson; 
  int CmdNumber; 
  CgVehicleSystem *v17; 
  VehicleClient *v18; 
  int v19; 
  __int64 mode; 
  vec3_t *p_angles; 
  char v33; 
  char v34; 
  vec3_t *v81; 
  tmat33_t<vec3_t> *viewAxis; 
  vec3_t *camOffset; 
  float v86; 
  float v87; 
  VehicleDef *vehDef; 
  float targetFov; 
  float targetFovOffset; 
  const VehicleClient *Client; 
  vec3_t *v92; 
  vec3_t *viewAngles; 
  usercmd_s ucmd; 
  usercmd_s v95; 
  vec3_t outAngles; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> v98; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  viewAngles = outViewAngles;
  v92 = outViewOrigin;
  v10 = localClientNum;
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 685, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 686, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v10);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 696, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  vehDef = (VehicleDef *)CgVehicleSystem::GetClientDef(Client);
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 698, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(viewAxis) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", viewAxis, 2) )
      __debugbreak();
  }
  _RBX = v10;
  v13 = &vehicleCameras[v10];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 700, ASSERT_TYPE_ASSERT, "(cam)", (const char *)&queryFormat, "cam") )
    __debugbreak();
  if ( !cg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 257, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 258, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 259, ASSERT_TYPE_ASSERT, "(cam)", (const char *)&queryFormat, "cam") )
    __debugbreak();
  v14 = ClActiveClient::GetClient((const LocalClientNum_t)cg->localClientNum);
  isThirdPerson = 0;
  CmdNumber = ClActiveClient_GetCmdNumber(v14);
  if ( CmdNumber > 1 )
  {
    v17 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v10);
    v18 = CgVehicleSystem::GetClient(v17, cent);
    CL_GetUserCmd(cg->localClientNum, CmdNumber - 1, &ucmd);
    CL_GetUserCmd(cg->localClientNum, CmdNumber, &v95);
    VehicleCam_UpdateModeParams((LocalClientNum_t)v10, cent);
    if ( v13->mode )
    {
      if ( v13->mode == VEHCAM_MODE_3RD_PERSON && (v18->flags & 1) == 0 )
      {
        v19 = 0;
        goto LABEL_35;
      }
    }
    else if ( (v18->flags & 1) != 0 )
    {
      v19 = 1;
LABEL_35:
      v13->mode = v19;
      *(_QWORD *)vehicleCameras[_RBX].userAngles.v = 0i64;
      vehicleCameras[_RBX].userAngles.v[2] = 0.0;
      vehicleCameras[_RBX].initialized = 0;
    }
  }
  mode = v13->mode;
  if ( (unsigned int)mode >= 2 )
  {
    LODWORD(camOffset) = 2;
    LODWORD(viewAxis) = v13->mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( mode ) < (unsigned)( VEHCAM_MODE_COUNT )", "mode doesn't index VEHCAM_MODE_COUNT\n\t%i not in [0, %i)", viewAxis, camOffset) )
      __debugbreak();
  }
  _R12 = mode;
  CG_VehicleCam_GetVehiclePosition((LocalClientNum_t)v10, cent, &outOrigin, &outAngles);
  AnglesToAxis(&outAngles, &axis);
  _RAX = Client;
  __asm
  {
    vmovss  xmm6, dword ptr [rax+30h]
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm6, dword ptr [r12+r13+112E445Ch]
    vaddss  xmm7, xmm0, dword ptr [r12+r13+112E4458h]
  }
  p_angles = &vehicleCameras[_RBX].angles;
  VehicleCam_GetViewAnglesInternal((const LocalClientNum_t)v10, cent, &outAngles, &vehicleCameras[_RBX].userAngles, &vehicleCameras[_RBX].angles);
  _RBP = vehDef;
  __asm { vmovaps xmm1, xmm6; absSpeed }
  BG_Vehicle_GetCameraTargetFovAndOffset(vehDef, *(float *)&_XMM1, &targetFov, &targetFovOffset);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0BCCh]; rate
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  _RCX = 0x140000000ui64;
  if ( v33 | v34 || !vehicleCameras[_RBX].initialized )
  {
    _RBP = &vehicleCameras[_RBX].offset;
    __asm { vmovss  xmm0, [rsp+398h+targetFov] }
    _RBP->v[0] = vehicleCameraModes[_R12].offset.v[0];
    _RBP->v[1] = vehicleCameraModes[_R12].offset.v[1];
    _RBP->v[2] = vehicleCameraModes[_R12].offset.v[2];
    _RAX = &vehicleCameras[_RBX].radius;
    __asm
    {
      vmovss  dword ptr [rbx+rcx+112E44E8h], xmm0
      vmovss  xmm0, [rsp+398h+targetFovOffset]
      vmovss  dword ptr [rax], xmm7
    }
    Client = (const VehicleClient *)&vehicleCameras[_RBX].radius;
    vehicleCameras[_RBX].initialized = 1;
    _RBX = &vehicleCameras[_RBX].fovOffset;
    __asm { vmovss  dword ptr [rax], xmm0 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
      vmulss  xmm6, xmm0, cs:__real@3a83126f
      vmovss  xmm0, dword ptr [r12+rcx+112E444Ch]; tgt
    }
    _RBP = &vehicleCameras[_RBX].offset;
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+0]; cur
      vmovaps xmm3, xmm6; deltaTime
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RAX = vehDef;
    __asm
    {
      vmovss  dword ptr [rbp+0], xmm0
      vmovaps xmm3, xmm6; deltaTime
      vmovss  xmm2, dword ptr [rax+0BCCh]; rate
    }
    _RAX = 0x140000000ui64;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+rax+112E44C4h]; cur
      vmovss  xmm0, dword ptr [r12+rax+112E4450h]; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RAX = vehDef;
    _RCX = 0x140000000ui64;
    __asm
    {
      vmovss  dword ptr [rbx+rcx+112E44C4h], xmm0
      vmovss  xmm1, dword ptr [rbx+rcx+112E44C8h]; cur
      vmovss  xmm0, dword ptr [r12+rcx+112E4454h]; tgt
      vmovss  xmm2, dword ptr [rax+0BCCh]; rate
      vmovaps xmm3, xmm6; deltaTime
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RAX = 0x140000000ui64;
    __asm { vmovss  dword ptr [rbx+rax+112E44C8h], xmm0 }
    _RCX = &vehicleCameras[_RBX].radius;
    _RAX = vehDef;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx]; cur
      vmovaps xmm3, xmm6; deltaTime
      vmovaps xmm0, xmm7; tgt
      vmovss  xmm2, dword ptr [rax+0BCCh]; rate
    }
    Client = (const VehicleClient *)&vehicleCameras[_RBX].radius;
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RAX = Client;
    __asm
    {
      vmovaps xmm3, xmm6; deltaTime
      vmovss  dword ptr [rax], xmm0
    }
    _RAX = vehDef;
    __asm
    {
      vmovss  xmm0, [rsp+398h+targetFov]; tgt
      vmovss  xmm2, dword ptr [rax+0BCCh]; rate
    }
    _RAX = 0x140000000ui64;
    __asm { vmovss  xmm1, dword ptr [rbx+rax+112E44E8h]; cur }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    _RAX = 0x140000000ui64;
    __asm
    {
      vmovss  dword ptr [rbx+rax+112E44E8h], xmm0
      vmovss  xmm0, [rsp+398h+targetFovOffset]; tgt
    }
    _RBX = &vehicleCameras[_RBX].fovOffset;
    _RAX = vehDef;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]; cur
      vmovaps xmm3, xmm6; deltaTime
      vmovss  xmm2, dword ptr [rax+0BCCh]; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx], xmm0 }
  }
  AnglesToAxis(p_angles, &v98);
  __asm { vmovss  xmm1, dword ptr [rbx] }
  LOBYTE(isThirdPerson) = v13->mode == VEHCAM_MODE_3RD_PERSON;
  _RAX = Client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+398h+var_358], xmm0
    vmovss  [rsp+398h+var_360], xmm1
  }
  VehicleCam_GetCameraViewOrigin((LocalClientNum_t)v10, &cg->predictedPlayerState, 1, &outOrigin, &axis, &v98, _RBP, v86, v87, vehicleCameraModes[_R12].zOffsetMode, isThirdPerson, v92);
  v81 = viewAngles;
  *viewAngles = *p_angles;
  CG_VehicleCam_SetClientViewAngles(cg, v81);
  __asm
  {
    vmovaps xmm6, [rsp+398h+var_58]
    vmovaps xmm7, [rsp+398h+var_68]
  }
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
  VehCamZOffsetMode vehCam_zOffsetMode; 
  const dvar_t *v40; 
  VehCamZOffsetMode vehCam_zOffsetMode3P; 
  const dvar_t *v74; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 178, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  _RDI = CgVehicleSystem::GetClientDef(Client);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 185, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_camera.cpp", 186, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( VehicleSystem->UseGdtCamera(VehicleSystem, cent) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0C0Ch]
      vmovss  xmm0, dword ptr [rdi+0C08h]
      vmovss  xmm2, dword ptr [rdi+0C10h]
      vmovss  dword ptr cs:vehicleCameraModes.angles, xmm0
      vmovss  dword ptr cs:vehicleCameraModes.angles+4, xmm1
      vmovss  dword ptr cs:vehicleCameraModes.angles+8, xmm2
      vmovss  xmm1, dword ptr [rdi+0C18h]
      vmovss  xmm0, dword ptr [rdi+0C14h]
      vmovss  xmm3, dword ptr [rdi+0C1Ch]
      vmovss  dword ptr cs:vehicleCameraModes.offset, xmm0
      vmovss  dword ptr cs:vehicleCameraModes.offset+4, xmm1
      vmovss  dword ptr cs:vehicleCameraModes.offset+8, xmm3
      vmovss  xmm0, dword ptr [rdi+0C20h]
      vmovss  cs:vehicleCameraModes.radius, xmm0
      vmovss  xmm1, dword ptr [rdi+0C24h]
      vmovss  cs:vehicleCameraModes.speedInfluence, xmm1
      vmovss  xmm0, dword ptr [rdi+0C28h]
      vmovss  cs:vehicleCameraModes.pitchTurnRate, xmm0
      vmovss  xmm1, dword ptr [rdi+0C2Ch]
      vmovss  cs:vehicleCameraModes.pitchClamp, xmm1
      vmovss  xmm0, dword ptr [rdi+0C30h]
      vmovss  cs:vehicleCameraModes.yawTurnRate, xmm0
      vmovss  xmm1, dword ptr [rdi+0C34h]
      vmovss  cs:vehicleCameraModes.yawClamp, xmm1
    }
    vehCam_zOffsetMode = _RDI->vehCam_zOffsetMode;
  }
  else
  {
    _RBX = DVARVEC3_vehCam_angles;
    if ( !DVARVEC3_vehCam_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr cs:vehicleCameraModes.angles, xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr cs:vehicleCameraModes.angles+4, xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DVARVEC3_vehCam_offset;
    __asm { vmovss  dword ptr cs:vehicleCameraModes.angles+8, xmm0 }
    if ( !DVARVEC3_vehCam_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr cs:vehicleCameraModes.offset, xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr cs:vehicleCameraModes.offset+4, xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DVARFLT_vehCam_radius;
    __asm { vmovss  dword ptr cs:vehicleCameraModes.offset+8, xmm0 }
    if ( !DVARFLT_vehCam_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_speedInfluence;
    __asm { vmovss  cs:vehicleCameraModes.radius, xmm0 }
    if ( !DVARFLT_vehCam_speedInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_speedInfluence") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_pitchTurnRate;
    __asm { vmovss  cs:vehicleCameraModes.speedInfluence, xmm0 }
    if ( !DVARFLT_vehCam_pitchTurnRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchTurnRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_pitchClamp;
    __asm { vmovss  cs:vehicleCameraModes.pitchTurnRate, xmm0 }
    if ( !DVARFLT_vehCam_pitchClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_yawTurnRate;
    __asm { vmovss  cs:vehicleCameraModes.pitchClamp, xmm0 }
    if ( !DVARFLT_vehCam_yawTurnRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawTurnRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_yawClamp;
    __asm { vmovss  cs:vehicleCameraModes.yawTurnRate, xmm0 }
    if ( !DVARFLT_vehCam_yawClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v40 = DVARINT_vehCam_zOffsetMode;
    __asm { vmovss  cs:vehicleCameraModes.yawClamp, xmm0 }
    if ( !DVARINT_vehCam_zOffsetMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_zOffsetMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    vehCam_zOffsetMode = v40->current.integer;
  }
  vehicleCameraModes[0].zOffsetMode = vehCam_zOffsetMode;
  if ( VehicleSystem->UseGdtCamera(VehicleSystem, cent) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0C40h]
      vmovss  xmm0, dword ptr [rdi+0C3Ch]
      vmovss  xmm2, dword ptr [rdi+0C44h]
      vmovss  dword ptr cs:vehicleCameraModes.angles+34h, xmm0
      vmovss  dword ptr cs:vehicleCameraModes.angles+38h, xmm1
      vmovss  dword ptr cs:vehicleCameraModes.angles+3Ch, xmm2
      vmovss  xmm1, dword ptr [rdi+0C4Ch]
      vmovss  xmm0, dword ptr [rdi+0C48h]
      vmovss  xmm3, dword ptr [rdi+0C50h]
      vmovss  dword ptr cs:vehicleCameraModes.offset+34h, xmm0
      vmovss  dword ptr cs:vehicleCameraModes.offset+38h, xmm1
      vmovss  dword ptr cs:vehicleCameraModes.offset+3Ch, xmm3
      vmovss  xmm0, dword ptr [rdi+0C54h]
      vmovss  cs:vehicleCameraModes.radius+34h, xmm0
      vmovss  xmm1, dword ptr [rdi+0C58h]
      vmovss  cs:vehicleCameraModes.speedInfluence+34h, xmm1
      vmovss  xmm0, dword ptr [rdi+0C5Ch]
      vmovss  cs:vehicleCameraModes.pitchTurnRate+34h, xmm0
      vmovss  xmm1, dword ptr [rdi+0C60h]
      vmovss  cs:vehicleCameraModes.pitchClamp+34h, xmm1
      vmovss  xmm0, dword ptr [rdi+0C64h]
      vmovss  cs:vehicleCameraModes.yawTurnRate+34h, xmm0
      vmovss  xmm1, dword ptr [rdi+0C68h]
      vmovss  cs:vehicleCameraModes.yawClamp+34h, xmm1
    }
    vehCam_zOffsetMode3P = _RDI->vehCam_zOffsetMode3P;
  }
  else
  {
    _RBX = DVARVEC3_vehCam_angles3P;
    if ( !DVARVEC3_vehCam_angles3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_angles3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr cs:vehicleCameraModes.angles+34h, xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr cs:vehicleCameraModes.angles+38h, xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DVARVEC3_vehCam_offset3P;
    __asm { vmovss  dword ptr cs:vehicleCameraModes.angles+3Ch, xmm0 }
    if ( !DVARVEC3_vehCam_offset3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_offset3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr cs:vehicleCameraModes.offset+34h, xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr cs:vehicleCameraModes.offset+38h, xmm1
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    _RBX = DVARFLT_vehCam_radius3P;
    __asm { vmovss  dword ptr cs:vehicleCameraModes.offset+3Ch, xmm0 }
    if ( !DVARFLT_vehCam_radius3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_radius3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_speedInfluence3P;
    __asm { vmovss  cs:vehicleCameraModes.radius+34h, xmm0 }
    if ( !DVARFLT_vehCam_speedInfluence3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_speedInfluence3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_pitchTurnRate3P;
    __asm { vmovss  cs:vehicleCameraModes.speedInfluence+34h, xmm0 }
    if ( !DVARFLT_vehCam_pitchTurnRate3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchTurnRate3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_pitchClamp3P;
    __asm { vmovss  cs:vehicleCameraModes.pitchTurnRate+34h, xmm0 }
    if ( !DVARFLT_vehCam_pitchClamp3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_pitchClamp3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_yawTurnRate3P;
    __asm { vmovss  cs:vehicleCameraModes.pitchClamp+34h, xmm0 }
    if ( !DVARFLT_vehCam_yawTurnRate3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawTurnRate3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DVARFLT_vehCam_yawClamp3P;
    __asm { vmovss  cs:vehicleCameraModes.yawTurnRate+34h, xmm0 }
    if ( !DVARFLT_vehCam_yawClamp3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_yawClamp3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v74 = DVARINT_vehCam_zOffsetMode3P;
    __asm { vmovss  cs:vehicleCameraModes.yawClamp+34h, xmm0 }
    if ( !DVARINT_vehCam_zOffsetMode3P && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_zOffsetMode3P") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    vehCam_zOffsetMode3P = v74->current.integer;
  }
  vehicleCameraModes[1].zOffsetMode = vehCam_zOffsetMode3P;
}

