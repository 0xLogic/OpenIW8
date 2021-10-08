/*
==============
CG_VehicleAudio_ResetDistanceScales
==============
*/

void CG_VehicleAudio_ResetDistanceScales(void)
{
  ?CG_VehicleAudio_ResetDistanceScales@@YAXXZ();
}

/*
==============
CG_VehicleAudio_CalculateUnoccludedAudioEntOrigin
==============
*/

void __fastcall CG_VehicleAudio_CalculateUnoccludedAudioEntOrigin(LocalClientNum_t localClientNum, const BgVehiclePhysics *vehObj, const vec3_t *audioEntOrigin, vec3_t *outNotOccludedAudioEntOrigin)
{
  ?CG_VehicleAudio_CalculateUnoccludedAudioEntOrigin@@YAXW4LocalClientNum_t@@AEBVBgVehiclePhysics@@AEBTvec3_t@@AEAT3@@Z(localClientNum, vehObj, audioEntOrigin, outNotOccludedAudioEntOrigin);
}

/*
==============
CG_VehicleAudio_UpdateSounds
==============
*/

void __fastcall CG_VehicleAudio_UpdateSounds(LocalClientNum_t localClientNum, const centity_t *cent, VehicleClient *veh)
{
  ?CG_VehicleAudio_UpdateSounds@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEAUVehicleClient@@@Z(localClientNum, cent, veh);
}

/*
==============
CG_VehicleAudio_CollisionEvent
==============
*/

void __fastcall CG_VehicleAudio_CollisionEvent(LocalClientNum_t localClientNum, const centity_t *cent, unsigned int entEventParam)
{
  ?CG_VehicleAudio_CollisionEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@I@Z(localClientNum, cent, entEventParam);
}

/*
==============
CG_VehicleAudio_SuspensionEvent
==============
*/

void __fastcall CG_VehicleAudio_SuspensionEvent(LocalClientNum_t localClientNum, const centity_t *cent, int soundEvent)
{
  ?CG_VehicleAudio_SuspensionEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@H@Z(localClientNum, cent, soundEvent);
}

/*
==============
CG_VehicleAudio_ResetSounds
==============
*/

void __fastcall CG_VehicleAudio_ResetSounds(VehicleClient *veh)
{
  ?CG_VehicleAudio_ResetSounds@@YAXPEAUVehicleClient@@@Z(veh);
}

/*
==============
CG_VehicleAudio_CalculateUnoccludedAudioEntOrigin
==============
*/
void CG_VehicleAudio_CalculateUnoccludedAudioEntOrigin(LocalClientNum_t localClientNum, const BgVehiclePhysics *vehObj, const vec3_t *audioEntOrigin, vec3_t *outNotOccludedAudioEntOrigin)
{
  ExtentBounds outExtBounds; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = outNotOccludedAudioEntOrigin;
  VehicleAudio_GetVehicleAndTurretExtentBounds(localClientNum, vehObj, &outExtBounds);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+58h+outExtBounds.maxs+8]
    vaddss  xmm0, xmm1, dword ptr [rsp+58h+outExtBounds.mins+8]
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rsp+58h+outExtBounds.mins]
    vmulss  xmm6, xmm0, xmm4
    vsubss  xmm0, xmm6, dword ptr [rsp+58h+outExtBounds.mins+8]
    vsubss  xmm1, xmm1, xmm6
    vmaxss  xmm1, xmm1, xmm0
    vaddss  xmm5, xmm1, cs:__real@40a00000
    vmulss  xmm1, xmm5, dword ptr [rbx+18Ch]
    vaddss  xmm0, xmm2, dword ptr [rsp+58h+outExtBounds.maxs]
    vmulss  xmm3, xmm0, xmm4
    vmovss  xmm0, dword ptr [rsp+58h+outExtBounds.maxs+4]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm1, xmm0, dword ptr [rsp+58h+outExtBounds.mins+4]
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm0, xmm5, dword ptr [rbx+190h]
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm5, dword ptr [rbx+194h]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+8], xmm1
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_VehicleAudio_CollisionEvent
==============
*/
void CG_VehicleAudio_CollisionEvent(LocalClientNum_t localClientNum, const centity_t *cent, unsigned int entEventParam)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleDef *ClientDef; 
  int time; 
  BgVehiclePhysicsManager *v18; 
  BgVehiclePhysics *ObjectById; 
  float fmt; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1299, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1300, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  _RBX = CgVehicleSystem::GetClient(VehicleSystem, cent);
  if ( BGVehicles::PhysicsIsValid(_RBX->physicsId) )
  {
    v18 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v18, _RBX->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1325, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    ObjectById->ReactToServerEvent(ObjectById, 166u, entEventParam);
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdi
      vmovaps [rsp+48h+var_18], xmm6
      vmulss  xmm6, xmm0, cs:__real@3b808081
    }
    ClientDef = CgVehicleSystem::GetClientDef(_RBX);
    if ( ClientDef->collisionSnd.name )
    {
      time = _RBX->time;
      if ( _RBX->audioState.lastImpactTime <= time )
        goto LABEL_11;
      __asm { vcomiss xmm6, dword ptr [rbx+23Ch] }
      if ( _RBX->audioState.lastImpactTime >= (unsigned int)time )
      {
LABEL_11:
        __asm { vmovss  xmm0, cs:__real@3f800000 }
        _RBX->audioState.lastImpactTime = time + 500;
        __asm
        {
          vmovss  dword ptr [rbx+23Ch], xmm6
          vmovaps xmm3, xmm6; volumeScale
          vmovss  dword ptr [rsp+48h+fmt], xmm0
        }
        VehicleAudio_PlaySound(_RBX, ClientDef->collisionSnd, 0, *(float *)&_XMM3, fmt);
      }
    }
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

/*
==============
CG_VehicleAudio_ResetDistanceScales
==============
*/
void CG_VehicleAudio_ResetDistanceScales(void)
{
  float *v2; 
  __int64 v3; 
  int v4; 

  _RDI = DVARFLT_vehAudio_idleDistanceScale;
  if ( !DVARFLT_vehAudio_idleDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_idleDistanceScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  v2 = s_VehicleAudioDistanceScales;
  v3 = 128i64;
  __asm { vmovss  [rsp+48h+arg_0], xmm0 }
  if ( s_VehicleAudioDistanceScales > flt_1512E43C0 )
    v3 = 0i64;
  while ( v3 )
  {
    *(_DWORD *)v2++ = v4;
    --v3;
  }
}

/*
==============
CG_VehicleAudio_ResetSounds
==============
*/
void CG_VehicleAudio_ResetSounds(VehicleClient *veh)
{
  LocalClientNum_t localClientNum; 
  const dvar_t *v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 69, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  veh->audioState.spawnTime = veh->time;
  _RDI = DVARFLT_vehAudio_spawnVolumeTime;
  if ( !DVARFLT_vehAudio_spawnVolumeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_spawnVolumeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
  }
  localClientNum = veh->localClientNum;
  __asm { vcvttss2si eax, xmm1 }
  veh->audioState.spawnTimeDelay = _EAX;
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    if ( veh->index >= 0x80u )
    {
      LODWORD(v9) = 128;
      LODWORD(v8) = veh->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( veh->index ) < (unsigned)( ( sizeof( *array_counter( s_VehicleAudioDistanceScales ) ) + 0 ) )", "veh->index doesn't index s_VehicleAudioDistanceScales\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v7 = DVARFLT_vehAudio_idleDistanceScale;
    if ( !DVARFLT_vehAudio_idleDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_idleDistanceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    s_VehicleAudioDistanceScales[veh->index] = v7->current.value;
  }
  veh->audioState.engineState = ~(unsigned __int8)(veh->flags >> 4) & 2;
  veh->audioState.audioOriginTagBoneIndex = -2;
}

/*
==============
CG_VehicleAudio_SuspensionEvent
==============
*/
void CG_VehicleAudio_SuspensionEvent(LocalClientNum_t localClientNum, const centity_t *cent, int soundEvent)
{
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  SndAliasLookup v9; 
  float fmt; 
  __int64 v12; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1336, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1337, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( soundEvent == 167 )
  {
    if ( !ClientDef->suspensionSoftSnd.name )
      return;
    v9.name = ClientDef->suspensionSoftSnd.name;
    goto LABEL_15;
  }
  if ( soundEvent == 168 )
  {
    if ( !ClientDef->suspensionHardSnd.name )
      return;
    v9.name = ClientDef->suspensionHardSnd.name;
LABEL_15:
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; volumeScale
      vmovss  dword ptr [rsp+38h+fmt], xmm3
    }
    VehicleAudio_PlaySound(Client, v9, 0, *(float *)&_XMM3, fmt);
    return;
  }
  LODWORD(v12) = soundEvent;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1357, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleAudio_SuspensionEvent: Invalid sound event %d\n", v12) )
    __debugbreak();
}

/*
==============
CG_VehicleAudio_UpdateNonRevAudio
==============
*/
bool CG_VehicleAudio_UpdateNonRevAudio(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef, const tmat33_t<vec3_t> *vehicleAudioAxis)
{
  SndAliasList *AliasFromId; 
  LocalClientNum_t localClientNum; 
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v18; 
  BgVehiclePhysics *ObjectById; 
  const char *name; 
  char v21; 
  unsigned int v22; 
  char v23; 
  BgVehiclePhysics_vtbl *v24; 
  __int64 oldTime; 
  unsigned int flags; 
  bool v63; 
  unsigned int v67; 
  char v73; 
  char v74; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  int v214; 
  char v215; 
  char v216[3]; 
  int v217; 
  int v218; 
  int v219; 
  int v220; 
  vec3_t position; 

  _RDI = veh;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 701, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 702, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 703, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  LOBYTE(AliasFromId) = BGVehicles::PhysicsIsValid(_RDI->physicsId);
  if ( (_BYTE)AliasFromId )
  {
    localClientNum = _RDI->localClientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v18 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v18, _RDI->physicsId);
    LOBYTE(AliasFromId) = ObjectById->SupportsFeature(ObjectById, VPFEAT_VDX_VEHICLE);
    if ( (_BYTE)AliasFromId )
    {
      name = vehDef->mainRotorOperatingRpmSnd.name;
      if ( name && (v21 = *name) != 0 )
      {
        v22 = 5381;
        do
        {
          ++name;
          v23 = v21 | 0x20;
          if ( (unsigned int)(v21 - 65) >= 0x1A )
            v23 = v21;
          v22 = 65599 * v22 + v23;
          v21 = *name;
        }
        while ( *name );
        if ( !v22 )
          v22 = 1;
      }
      else
      {
        v22 = 0;
      }
      AliasFromId = SND_FindAliasFromId(v22);
      if ( AliasFromId )
      {
        v24 = ObjectById->__vftable;
        oldTime = (unsigned int)LocalClientGlobals->oldTime;
        __asm
        {
          vmovaps [rsp+140h+var_40], xmm6
          vmovaps [rsp+140h+var_80], xmm10
          vmovaps [rsp+140h+var_90], xmm11
          vmovaps [rsp+140h+var_B0], xmm13
        }
        ((void (__fastcall *)(BgVehiclePhysics *, _QWORD, __int64, int *, int *, int *, int *, int *, char *, char *, vec3_t *))v24[1].SaveToMemFile)(ObjectById, (unsigned int)localClientNum, oldTime, &v217, &v218, &v214, &v220, &v219, &v215, v216, &position);
        if ( !ObjectById->m_playerControlled )
        {
          _RSI = DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset;
          if ( !DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_remoteClientLocalRotorOffset") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm4, dword ptr [rsi+28h]
            vmovss  xmm3, dword ptr [rsi+2Ch]
            vmovss  xmm5, dword ptr [rsi+30h]
            vmulss  xmm1, xmm3, dword ptr [r15+0Ch]
            vmulss  xmm0, xmm4, dword ptr [r15]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [r15+18h]
            vaddss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm0, dword ptr [rdi+1F0h]
            vmulss  xmm0, xmm4, dword ptr [r15+4]
            vmulss  xmm1, xmm3, dword ptr [r15+10h]
            vmovss  dword ptr [rsp+140h+var_C8], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [r15+1Ch]
            vaddss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm0, dword ptr [rdi+1F4h]
            vmulss  xmm0, xmm4, dword ptr [r15+8]
            vmulss  xmm1, xmm3, dword ptr [r15+14h]
            vmovss  dword ptr [rsp+140h+var_C8+4], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [r15+20h]
            vaddss  xmm0, xmm2, xmm1
            vaddss  xmm2, xmm0, dword ptr [rdi+1F8h]
            vmovss  dword ptr [rbp+40h+var_C8+8], xmm2
          }
        }
        __asm
        {
          vmovss  xmm0, [rsp+140h+var_CC]
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm1, [rsp+140h+var_D0]
          vmovss  [rsp+140h+var_CC], xmm0
          vmovss  xmm0, [rsp+140h+var_E0]
          vmovss  dword ptr [rdi+21Ch], xmm0
          vsubss  xmm0, xmm1, cs:__real@3f19999a; value
          vmovss  xmm1, cs:__real@3f000000; expo
        }
        *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, cs:__real@3dcccccd; Y
          vmovaps xmm13, xmm0
          vmovss  xmm0, [rsp+140h+var_D0]
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, cs:__real@40800000; Y
          vmovss  [rsp+140h+var_D0], xmm0
          vmovss  xmm0, [rsp+140h+var_D8]; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm10, cs:__real@3f800000
          vmovss  [rsp+140h+var_D8], xmm0
        }
        if ( vehDef->physicsHeliStartup.name && v215 )
        {
          flags = _RDI->flags;
          if ( (flags & 0x20) == 0 )
          {
            __asm
            {
              vmovaps xmm3, xmm10; volumeScale
              vmovss  dword ptr [rsp+140h+fmt], xmm10
            }
            VehicleAudio_PlaySound(_RDI, vehDef->physicsHeliStartup, 0, *(float *)&_XMM3, fmt);
            flags = _RDI->flags;
          }
          _RDI->flags = flags & 0xFFFFFFDF;
          v63 = vehDef->physicsHeliShutdown.name == NULL;
          if ( !vehDef->physicsHeliShutdown.name )
            goto LABEL_39;
          VehicleAudio_StopSound(_RDI, vehDef->physicsHeliShutdown);
        }
        v63 = vehDef->physicsHeliShutdown.name == NULL;
        if ( vehDef->physicsHeliShutdown.name )
        {
          v63 = v216[0] == 0;
          if ( v216[0] )
          {
            __asm
            {
              vmovaps xmm3, xmm10; volumeScale
              vmovss  dword ptr [rsp+140h+fmt], xmm10
            }
            VehicleAudio_PlaySound(_RDI, vehDef->physicsHeliShutdown, 0, *(float *)&_XMM3, fmta);
            if ( vehDef->physicsHeliStartup.name )
              VehicleAudio_StopSound(_RDI, vehDef->physicsHeliStartup);
            v63 = 0;
            _RDI->flags |= 0x20u;
          }
        }
LABEL_39:
        __asm
        {
          vmovss  xmm11, cs:__real@3a83126f
          vmovss  xmm0, [rsp+140h+var_E0]
          vcomiss xmm0, xmm11
        }
        v67 = _RDI->flags;
        if ( v63 )
        {
          _RDI->flags = v67 | 0x22;
        }
        else
        {
          __asm
          {
            vmovaps [rsp+140h+var_50], xmm7
            vmovaps [rsp+140h+var_60], xmm8
          }
          _RDI->flags = v67 & 0xFFFFFFFD;
          _RDI->audioState.engineState = VEH_ENGINE_STATE_SUSTAIN;
          __asm
          {
            vmovaps [rsp+140h+var_70], xmm9
            vmovaps [rsp+140h+var_A0], xmm12
          }
          if ( vehDef->mainRotorLowRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_max, "fd_helicopter_audio_main_low_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_min, "fd_helicopter_audio_main_low_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorVolumeLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm
            {
              vcomiss xmm0, xmm11
              vmovaps xmm7, xmm0
            }
            if ( !(v73 | v74) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_max, "fd_helicopter_audio_main_low_rpm_pitch_max");
              __asm { vmovaps xmm6, xmm0 }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_min, "fd_helicopter_audio_main_low_rpm_pitch_min");
              __asm
              {
                vmovaps xmm2, xmm0; minVal
                vmovss  xmm0, [rsp+140h+var_E0]; value
                vmovaps xmm3, xmm6; maxVal
              }
              *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorPitchLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
              __asm
              {
                vmovaps xmm3, xmm7; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySound(_RDI, vehDef->mainRotorLowRpmSnd, 0, *(float *)&_XMM3, fmtb);
            }
          }
          _RSI = DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max;
          if ( !DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_main_effort_rpm_volume_max") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm9, dword ptr [rsi+28h] }
          _RSI = DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min;
          if ( !DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_main_effort_rpm_volume_min") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm7, dword ptr [rsi+28h] }
          _RSI = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          __asm { vmovss  xmm8, [rsp+140h+var_CC] }
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm6, dword ptr [rsi+28h]
            vmovaps xmm3, xmm9; maxVal
            vmovaps xmm2, xmm7; minVal
            vmovaps xmm0, xmm8; value
          }
          *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorVolumeEffort, *(const float *)&_XMM2, *(const float *)&_XMM3);
          __asm
          {
            vmovss  xmm1, [rsp+140h+var_E0]
            vmulss  xmm2, xmm0, xmm1
            vcomiss xmm1, xmm6
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm12, xmm0, xmm2
          }
          if ( vehDef->mainRotorOperatingRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_max, "fd_helicopter_audio_main_operating_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_min, "fd_helicopter_audio_main_operating_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorVolumeHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm
            {
              vsubss  xmm0, xmm0, xmm12; val
              vmovaps xmm2, xmm10; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vcomiss xmm0, xmm11
              vmovaps xmm7, xmm0
            }
            if ( !(v73 | v74) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_max, "fd_helicopter_audio_main_operating_rpm_pitch_max");
              __asm { vmovaps xmm6, xmm0 }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_min, "fd_helicopter_audio_main_operating_rpm_pitch_min");
              __asm
              {
                vmovaps xmm2, xmm0; minVal
                vmovss  xmm0, [rsp+140h+var_E0]; value
                vmovaps xmm3, xmm6; maxVal
              }
              *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
              __asm
              {
                vmovaps xmm3, xmm7; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySound(_RDI, vehDef->mainRotorOperatingRpmSnd, 0, *(float *)&_XMM3, fmtc);
            }
          }
          if ( vehDef->mainRotorOperatingEffortSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_max, "fd_helicopter_audio_main_effort_rpm_pitch_max");
            __asm { vmovaps xmm9, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_min, "fd_helicopter_audio_main_effort_rpm_pitch_min");
            __asm
            {
              vmovss  xmm8, [rsp+140h+var_E0]
              vmovaps xmm7, xmm0
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_pitch_throttle_decrease, "fd_helicopter_audio_pitch_throttle_decrease");
            __asm
            {
              vmulss  xmm1, xmm0, [rsp+140h+var_D8]
              vmovaps xmm0, xmm8; value
              vmovaps xmm3, xmm9; maxVal
              vmovaps xmm2, xmm7; minVal
              vsubss  xmm6, xmm10, xmm1
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm
            {
              vcomiss xmm12, xmm11
              vmulss  xmm1, xmm0, xmm6
            }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm12; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm1
              }
              VehicleAudio_PlaySound(_RDI, vehDef->mainRotorOperatingEffortSnd, 0, *(float *)&_XMM3, fmtd);
            }
          }
          __asm { vmovaps xmm12, [rsp+140h+var_A0] }
          if ( vehDef->turbineLowRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_max, "fd_helicopter_audio_turbine_low_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_min, "fd_helicopter_audio_turbine_low_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_D4]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveVolumeTurbineLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_max, "fd_helicopter_audio_turbine_low_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_min, "fd_helicopter_audio_turbine_low_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_D4]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorPitchLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vcomiss xmm7, xmm11 }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm7; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySound(_RDI, vehDef->turbineLowRpmSnd, 0, *(float *)&_XMM3, fmte);
            }
          }
          if ( vehDef->turbineOperatingRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_max, "fd_helicopter_audio_turbine_operating_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_min, "fd_helicopter_audio_turbine_operating_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_D4]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveVolumeTurbineHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_max, "fd_helicopter_audio_turbine_operating_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_min, "fd_helicopter_audio_turbine_operating_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_D4]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveMainRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm
            {
              vcomiss xmm7, xmm11
              vmovaps xmm8, xmm0
            }
            if ( !(v73 | v74) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_volume_throttle_increase, "fd_helicopter_audio_volume_throttle_increase");
              __asm
              {
                vmulss  xmm1, xmm0, [rsp+140h+var_D8]
                vaddss  xmm2, xmm1, xmm10
                vmulss  xmm6, xmm2, xmm7
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_pitch_throttle_decrease, "fd_helicopter_audio_pitch_throttle_decrease");
              __asm
              {
                vmulss  xmm1, xmm0, [rsp+140h+var_D8]
                vsubss  xmm1, xmm10, xmm1
                vmulss  xmm0, xmm1, xmm8
                vmovaps xmm3, xmm6; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySound(_RDI, vehDef->turbineOperatingRpmSnd, 0, *(float *)&_XMM3, fmtf);
            }
          }
          if ( vehDef->tailRotorLowRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_max, "fd_helicopter_audio_tail_low_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_min, "fd_helicopter_audio_tail_low_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorVolumeLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_max, "fd_helicopter_audio_tail_low_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_min, "fd_helicopter_audio_tail_low_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorPitchLow, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vcomiss xmm7, xmm11 }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm7; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySoundPosition(_RDI, vehDef->tailRotorLowRpmSnd, 0, *(float *)&_XMM3, fmtg, &position);
            }
          }
          _RSI = DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max;
          if ( !DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_tail_effort_rpm_volume_max") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm6, dword ptr [rsi+28h] }
          _RSI = DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min;
          if ( !DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_tail_effort_rpm_volume_min") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm2, dword ptr [rsi+28h]; minVal
            vmovss  xmm0, [rsp+140h+var_D0]; value
            vmovaps xmm3, xmm6; maxVal
          }
          *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorVolumeEffort, *(const float *)&_XMM2, *(const float *)&_XMM3);
          _RSI = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          __asm { vmovaps xmm7, xmm0 }
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vmovss  xmm6, dword ptr [rsi+28h]
            vmovaps xmm2, xmm10; max
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm0, xmm13; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  xmm1, [rsp+140h+var_E0] }
          _RSI = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          __asm
          {
            vcomiss xmm1, xmm6
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, eax
            vmulss  xmm1, xmm7, xmm1
            vmulss  xmm2, xmm2, xmm1
            vmulss  xmm8, xmm0, xmm2
          }
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm
          {
            vxorps  xmm0, xmm13, cs:__xmm@80000000800000008000000080000000; val
            vmovss  xmm6, dword ptr [rsi+28h]
            vmovaps xmm2, xmm10; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, [rsp+140h+var_E0]
            vcomiss xmm1, xmm6
            vxorps  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm7, xmm1
            vcvtsi2ss xmm2, xmm2, r12d
            vmulss  xmm2, xmm2, xmm1
            vmulss  xmm7, xmm0, xmm2
          }
          if ( vehDef->tailRotorOperatingRpmSnd.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_max, "fd_helicopter_audio_tail_operating_rpm_volume_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_min, "fd_helicopter_audio_tail_operating_rpm_volume_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorVolumeHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm
            {
              vmaxss  xmm1, xmm7, xmm8
              vsubss  xmm9, xmm0, xmm1
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_max, "fd_helicopter_audio_tail_operating_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_min, "fd_helicopter_audio_tail_operating_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vcomiss xmm9, xmm11 }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm9; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySoundPosition(_RDI, vehDef->tailRotorOperatingRpmSnd, 0, *(float *)&_XMM3, fmth, &position);
            }
          }
          __asm { vmovaps xmm9, [rsp+140h+var_70] }
          if ( vehDef->tailRotorOperatingEffortSndRight.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max, "fd_helicopter_audio_tail_effort_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min, "fd_helicopter_audio_tail_effort_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vcomiss xmm8, xmm11 }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm8; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySoundPosition(_RDI, vehDef->tailRotorOperatingEffortSndRight, 0, *(float *)&_XMM3, fmti, &position);
            }
          }
          __asm { vmovaps xmm8, [rsp+140h+var_60] }
          if ( vehDef->tailRotorOperatingEffortSndLeft.name )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max, "fd_helicopter_audio_tail_effort_rpm_pitch_max");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min, "fd_helicopter_audio_tail_effort_rpm_pitch_min");
            __asm
            {
              vmovaps xmm2, xmm0; minVal
              vmovss  xmm0, [rsp+140h+var_E0]; value
              vmovaps xmm3, xmm6; maxVal
            }
            *(float *)&_XMM0 = GetAudioBlendCurvePointMinMax(*(float *)&_XMM0, sBlendCurveTailRotorPitchHigh, *(const float *)&_XMM2, *(const float *)&_XMM3);
            __asm { vcomiss xmm7, xmm11 }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovaps xmm3, xmm7; volumeScale
                vmovss  dword ptr [rsp+140h+fmt], xmm0
              }
              VehicleAudio_PlaySoundPosition(_RDI, vehDef->tailRotorOperatingEffortSndLeft, 0, *(float *)&_XMM3, fmtj, &position);
            }
          }
          __asm { vmovaps xmm7, [rsp+140h+var_50] }
        }
        __asm { vmovaps xmm10, [rsp+140h+var_80] }
        LOBYTE(AliasFromId) = 1;
        __asm
        {
          vmovaps xmm11, [rsp+140h+var_90]
          vmovaps xmm6, [rsp+140h+var_40]
          vmovaps xmm13, [rsp+140h+var_B0]
        }
      }
    }
  }
  return (char)AliasFromId;
}

/*
==============
CG_VehicleAudio_UpdateRevAudio
==============
*/
bool CG_VehicleAudio_UpdateRevAudio(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef)
{
  const centity_t *v7; 
  LocalClientNum_t localClientNum; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  cg_t *v11; 
  cg_t *v12; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  int entityNum; 
  const entityState_t *Entity; 
  char v17; 
  SndAliasList *Alias; 
  unsigned int physicsId; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v29; 
  BgVehiclePhysics *ObjectById; 
  float v38; 
  CgSoundSystem *SoundSystem; 
  bool result; 
  int fmt; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  animScriptVehicleSeat_t outVehicleSeat; 
  float outWheelAveSpinSpeed; 
  animScriptVehicleType_t outVehicleType[3]; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  bool outIsBraking; 
  int v77; 
  float outThrottle; 

  _RBX = veh;
  v7 = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1050, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1051, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1052, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !_RBX->audioState.hasRevPriority )
    return 0;
  localClientNum = _RBX->localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1062, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler )
    goto LABEL_34;
  v11 = CG_GetLocalClientGlobals(localClientNum);
  v12 = v11;
  if ( !v11 )
    goto LABEL_33;
  clientNum = v11->predictedPlayerState.clientNum;
  if ( v11->IsMP(v11) )
  {
    if ( (unsigned int)clientNum >= v12[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v57) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v57, v12[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v12[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v12, clientNum);
  }
  if ( !CharacterInfo )
    goto LABEL_33;
  entityNum = CharacterInfo->entityNum;
  if ( Handler->IsClient(Handler) )
  {
    Entity = (const entityState_t *)CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, entityNum);
    if ( Entity )
      Entity = (const entityState_t *)((char *)Entity + 400);
  }
  else
  {
    Entity = GHandler::GetEntityState((GHandler *)Handler, entityNum);
  }
  if ( !Entity )
  {
LABEL_33:
    v7 = cent;
LABEL_34:
    v17 = 0;
    goto LABEL_35;
  }
  v7 = cent;
  if ( BG_VehicleOccupancy_GetLinkedVehicle(Handler, Entity, CharacterInfo, outVehicleType, &outVehicleSeat) != cent->nextState.number || (unsigned int)(outVehicleSeat - 1) > 9 )
    goto LABEL_34;
  v17 = 1;
  Alias = SND_TryFindAlias(vehDef->revHighFidelityMod.name);
  if ( Alias )
    goto LABEL_36;
LABEL_35:
  Alias = SND_TryFindAlias(vehDef->revLowFidelityMod.name);
  if ( !Alias )
    return 0;
LABEL_36:
  __asm
  {
    vmovaps [rsp+0D0h+var_50], xmm6
    vmovaps [rsp+0D0h+var_60], xmm7
    vxorps  xmm7, xmm7, xmm7
  }
  outIsBraking = 0;
  __asm
  {
    vmovss  [rbp+57h+outThrottle], xmm7
    vmovss  [rbp+57h+outWheelAveSpinSpeed], xmm7
  }
  BG_Vehicle_UnpackPhysicsParams((const LerpEntityStateVehicle *)&v7->prevState.u, &outThrottle, &outIsBraking, &outWheelAveSpinSpeed);
  _EAX = outIsBraking;
  _ECX = 0;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  v63 = 0;
  physicsId = _RBX->physicsId;
  __asm
  {
    vmovss  [rbp+57h+var_78], xmm0
    vmovss  [rbp+57h+arg_10], xmm7
    vmovss  [rbp+57h+var_7C], xmm7
  }
  if ( !BGVehicles::PhysicsIsValid(physicsId) )
    goto LABEL_42;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v29 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v29, _RBX->physicsId);
  if ( ObjectById->SupportsFeature(ObjectById, VPFEAT_REV_AUDIO) )
    ObjectById->GetSoundValues(ObjectById, LocalClientGlobals->clientNum, LocalClientGlobals->oldTime, &outThrottle, (float *)&v65, (float *)&v77, &v63, (float *)&v64);
  if ( v17 || !ObjectById->m_playerControlled || !BgVehiclePhysics::IsDynamic(ObjectById) )
  {
LABEL_42:
    _RBX->audioState.entOriginForRev.v[0] = _RBX->audioState.entOrigin.v[0];
    _RBX->audioState.entOriginForRev.v[1] = _RBX->audioState.entOrigin.v[1];
    _RBX->audioState.entOriginForRev.v[2] = _RBX->audioState.entOrigin.v[2];
  }
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_7C]
    vmovss  dword ptr [rbp+57h+arg_0], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1113, ASSERT_TYPE_SANITY, "( !IS_NAN( mph ) )", (const char *)&queryFormat, "!IS_NAN( mph )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+57h+outThrottle]
    vmovss  dword ptr [rbp+57h+arg_0], xmm0
  }
  if ( (v73 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1114, ASSERT_TYPE_SANITY, "( !IS_NAN( throttle ) )", (const char *)&queryFormat, "!IS_NAN( throttle )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_78]
    vmovss  dword ptr [rbp+57h+arg_0], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1115, ASSERT_TYPE_SANITY, "( !IS_NAN( brake ) )", (const char *)&queryFormat, "!IS_NAN( brake )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+57h+arg_10]
    vmovss  dword ptr [rbp+57h+arg_0], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1116, ASSERT_TYPE_SANITY, "( !IS_NAN( rpmNormal ) )", (const char *)&queryFormat, "!IS_NAN( rpmNormal )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+57h+arg_10]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v63 = abs32(v63);
  v38 = cl_maxLocalClients;
  __asm { vmovss  [rbp+57h+arg_10], xmm0 }
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v59 = cl_maxLocalClients;
    LODWORD(v57) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v57, v59) )
      __debugbreak();
    v38 = cl_maxLocalClients;
  }
  if ( v38 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( localClientNum != cls.m_localClientsActive.firstActiveIndex )
  {
    LODWORD(v57) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1120, ASSERT_TYPE_ASSERT, "( cls.IsFirstActiveGameLocalClient( localClientNum ) )", "We only have an array set up for the first local client. %d", v57) )
      __debugbreak();
  }
  if ( _RBX->index >= 0x80u )
  {
    LODWORD(v59) = 128;
    LODWORD(v57) = _RBX->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( veh->index ) < (unsigned)( ( sizeof( *array_counter( s_VehicleAudioDistanceScales ) ) + 0 ) )", "veh->index doesn't index s_VehicleAudioDistanceScales\n\t%i not in [0, %i)", v57, v59) )
      __debugbreak();
  }
  _RDI = _RBX->index;
  _R12 = s_VehicleAudioDistanceScales;
  if ( !v17 )
  {
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_7C]
      vcomiss xmm0, xmm6
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+15Ch]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  xmm1, dword ptr [r12+rdi*4]
    vsubss  xmm2, xmm1, xmm2
    vmaxss  xmm2, xmm2, xmm6
    vmovss  dword ptr [r12+rdi*4], xmm2
  }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+rdi*4]
    vmovss  xmm1, [rbp+57h+arg_10]
    vmovss  [rsp+0D0h+var_88], xmm0
    vmovss  xmm0, [rbp+57h+var_7C]
    vmovss  dword ptr [rsp+0D0h+var_98], xmm0
    vmovss  xmm0, [rbp+57h+var_78]
    vmovss  dword ptr [rsp+0D0h+var_A0], xmm1
    vmovss  xmm1, [rbp+57h+outThrottle]
    vmovss  dword ptr [rsp+0D0h+var_A8], xmm0
    vmovss  dword ptr [rsp+0D0h+fmt], xmm1
  }
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, int, int, int, int, int, int))SoundSystem->UpdateVehicleSound)(SoundSystem, (unsigned int)_RBX->entIndex, &_RBX->audioState.entOriginForRev, Alias, fmt, v58, v60, v61, v63, v62);
  __asm { vmovaps xmm7, [rsp+0D0h+var_60] }
  result = 1;
  __asm { vmovaps xmm6, [rsp+0D0h+var_50] }
  return result;
}

/*
==============
CG_VehicleAudio_UpdateSounds
==============
*/
void CG_VehicleAudio_UpdateSounds(LocalClientNum_t localClientNum, const centity_t *cent, VehicleClient *veh)
{
  const CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 
  bool v15; 
  scr_string_t audioOriginTag; 
  char v28; 
  BgVehiclePhysicsManager *v36; 
  const BgVehiclePhysics *ObjectById; 
  unsigned int flags; 
  int spawnTimeDelay; 
  bool updated; 
  char v95; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  __int64 v108; 
  int modelIndex[2]; 
  const XModel *Model; 
  __int64 v111; 
  vec3_t outOrigin; 
  ExtentBounds angles; 
  tmat33_t<vec3_t> outTagMat; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  v111 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RBX = veh;
  _R14 = cent;
  modelIndex[0] = localClientNum;
  if ( SND_Active() && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1161, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent", *(_QWORD *)modelIndex) )
      __debugbreak();
    if ( CG_Vehicle_IsCorpse(_R14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1162, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1163, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( _RBX->entIndex != _R14->nextState.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1167, ASSERT_TYPE_ASSERT, "(veh->entIndex == cent->nextState.number)", (const char *)&queryFormat, "veh->entIndex == cent->nextState.number") )
      __debugbreak();
    _RSI = CgVehicleSystem::GetClientDef(_RBX);
    EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, _R14);
    if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
    {
      Model = DObjGetModel(EntityDObj, 0);
      v15 = 1;
      audioOriginTag = _RSI->audioOriginTag;
      if ( !audioOriginTag )
        goto LABEL_21;
      CG_GetPoseOrigin(&_R14->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+130h+outOrigin]
        vsubss  xmm3, xmm0, dword ptr [rcx+7Ch]
        vmovss  xmm1, dword ptr [rsp+130h+outOrigin+4]
        vsubss  xmm2, xmm1, dword ptr [rcx+80h]
        vmovss  xmm0, dword ptr [rsp+130h+outOrigin+8]
        vsubss  xmm4, xmm0, dword ptr [rcx+84h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@481c4000
      }
      if ( v28 && DObjGetBoneIndexInternal_61(EntityDObj, audioOriginTag, &_RBX->audioState.audioOriginTagBoneIndex, &modelIndex[1]) )
        v15 = CG_DObjGetWorldBoneMatrix(&_R14->pose, EntityDObj, _RBX->audioState.audioOriginTagBoneIndex, &outTagMat, &_RBX->audioState.entOrigin) == 0;
      memset(&outOrigin, 0, sizeof(outOrigin));
      if ( v15 )
      {
LABEL_21:
        CG_GetPoseOrigin(&_R14->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+130h+outOrigin]
          vaddss  xmm1, xmm0, dword ptr [rax+2Ch]
          vmovss  dword ptr [rbx+1F0h], xmm1
          vmovss  xmm2, dword ptr [rsp+130h+outOrigin+4]
          vaddss  xmm0, xmm2, dword ptr [rax+30h]
          vmovss  dword ptr [rbx+1F4h], xmm0
          vmovss  xmm1, dword ptr [rsp+130h+outOrigin+8]
          vaddss  xmm2, xmm1, dword ptr [rax+34h]
          vmovss  dword ptr [rbx+1F8h], xmm2
          vmovss  xmm0, dword ptr [r14+48h]
          vmovss  dword ptr [rbp+57h+angles], xmm0
          vmovss  xmm1, dword ptr [r14+4Ch]
          vmovss  dword ptr [rbp+57h+angles+4], xmm1
          vmovss  xmm0, dword ptr [r14+50h]
          vmovss  dword ptr [rbp+57h+angles+8], xmm0
        }
        AnglesToAxis(&angles.mins, &outTagMat);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      if ( BGVehicles::PhysicsIsValid(_RBX->physicsId) )
      {
        v36 = VehicleSystem->PhysicsGetVehiclePhysicsManager(&VehicleSystem->BGVehicles);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v36, _RBX->physicsId);
        if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1215, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
          __debugbreak();
        VehicleAudio_GetVehicleAndTurretExtentBounds((const LocalClientNum_t)modelIndex[0], ObjectById, &angles);
        __asm
        {
          vmovss  xmm7, [rbp+57h+var_C4]
          vaddss  xmm0, xmm7, dword ptr [rbp+57h+angles]
          vmovss  xmm1, cs:__real@3f000000
          vmulss  xmm10, xmm0, xmm1
          vmovss  xmm6, [rbp+57h+var_C0]
          vaddss  xmm0, xmm6, dword ptr [rbp+57h+angles+4]
          vmulss  xmm9, xmm0, xmm1
          vmovss  xmm4, [rbp+57h+var_BC]
          vaddss  xmm0, xmm4, dword ptr [rbp+57h+angles+8]
          vmulss  xmm8, xmm0, xmm1
          vsubss  xmm3, xmm8, dword ptr [rbp+57h+angles+8]
          vsubss  xmm0, xmm4, xmm8
          vmaxss  xmm1, xmm3, xmm0
          vaddss  xmm2, xmm1, cs:__real@40a00000
          vmulss  xmm0, xmm2, dword ptr [rdi+18Ch]
          vaddss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rbx+1F0h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rdi+190h]
          vaddss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx+1F4h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rdi+194h]
          vaddss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbx+1F8h], xmm1
        }
      }
      flags = _RBX->flags;
      _RBX->audioState.throttle = (flags & 0xC) == 4;
      spawnTimeDelay = _RBX->audioState.spawnTimeDelay;
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vxorps  xmm8, xmm8, xmm8
      }
      if ( spawnTimeDelay <= 0 || _RBX->time >= spawnTimeDelay + _RBX->audioState.spawnTime )
      {
        _RBX->audioState.spawnVolumeScale = 1.0;
      }
      else
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ecx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vdivss  xmm0, xmm1, xmm0; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm0, xmm7, xmm0
          vmovss  dword ptr [rbx+218h], xmm0
        }
        flags = _RBX->flags;
      }
      if ( (flags & 2) != 0 && _RBX->audioState.throttle )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+58h]
          vmulss  xmm6, xmm0, cs:__real@3a83126f
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehAudio_inAirPitchUpLerp, "vehAudio_inAirPitchUpLerp");
        __asm
        {
          vmovaps xmm2, xmm0
          vmovss  xmm0, dword ptr [rsi+0EB4h]
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+58h]
          vmulss  xmm6, xmm0, cs:__real@3a83126f
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehAudio_inAirPitchDownLerp, "vehAudio_inAirPitchDownLerp");
        __asm
        {
          vmovaps xmm2, xmm0; rate
          vmovaps xmm0, xmm7; tgt
        }
      }
      __asm
      {
        vmovaps xmm3, xmm6; deltaTime
        vmovss  xmm1, dword ptr [rbx+21Ch]; cur
      }
      *(double *)&_XMM0 = LinearTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovss  dword ptr [rbx+21Ch], xmm0 }
      if ( _RSI->useRevAudioSettings )
      {
        if ( (!_RSI->revLowFidelityMod.name || !_RSI->revHighFidelityMod.name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1241, ASSERT_TYPE_ASSERT, "(vehDef->revLowFidelityMod.name && vehDef->revHighFidelityMod.name)", (const char *)&queryFormat, "vehDef->revLowFidelityMod.name && vehDef->revHighFidelityMod.name") )
          __debugbreak();
        updated = CG_VehicleAudio_UpdateRevAudio(_R14, _RBX, _RSI);
      }
      else
      {
        updated = CG_VehicleAudio_UpdateNonRevAudio(_R14, _RBX, _RSI, &outTagMat);
      }
      if ( !updated )
      {
        switch ( _RBX->audioState.engineState )
        {
          case VEH_ENGINE_STATE_OFF:
            if ( (_RBX->flags & 0x20) == 0 )
            {
              _RBX->audioState.engineState = VEH_ENGINE_STATE_STARTUP;
              if ( !_RSI->engineStartUpSnd.name )
                goto LABEL_49;
              _RBX->audioState.stateTime = _RSI->engineStartUpLength + _RBX->time;
              __asm
              {
                vmovss  dword ptr [rsp+130h+fmt], xmm7
                vmovaps xmm3, xmm7; volumeScale
              }
              VehicleAudio_PlaySound(_RBX, _RSI->engineStartUpSnd, 0, *(float *)&_XMM3, fmt);
            }
            break;
          case VEH_ENGINE_STATE_STARTUP:
            if ( _RBX->audioState.stateTime <= _RBX->time )
              goto LABEL_49;
            break;
          case VEH_ENGINE_STATE_IDLE:
            if ( _RSI->engineIdleSnd.name )
            {
              __asm
              {
                vmovss  dword ptr [rsp+130h+fmt], xmm7
                vmovaps xmm3, xmm7; volumeScale
              }
              VehicleAudio_PlaySound(_RBX, _RSI->engineIdleSnd, 0, *(float *)&_XMM3, fmta);
            }
            if ( (_RBX->flags & 0x20) != 0 )
            {
              _RBX->audioState.engineState = VEH_ENGINE_STATE_OFF;
              if ( _RSI->engineShutdownSnd.name )
              {
                __asm
                {
                  vmovss  dword ptr [rsp+130h+fmt], xmm7
                  vmovaps xmm3, xmm7; volumeScale
                }
                VehicleAudio_PlaySound(_RBX, _RSI->engineShutdownSnd, 0, *(float *)&_XMM3, fmtb);
              }
            }
            else if ( _RBX->audioState.throttle )
            {
              __asm { vxorps  xmm2, xmm2, xmm2; frac }
              VehicleAudio_EngineRampUp_Start(_RBX, _RSI, *(float *)&_XMM2);
            }
            break;
          case VEH_ENGINE_STATE_RAMPUP:
            VehicleAudio_EngineRampUp(_RBX, _RSI);
            break;
          case VEH_ENGINE_STATE_SUSTAIN:
            if ( _RSI->engineSustainSnd.name )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+21Ch]
                vmovss  dword ptr [rsp+130h+fmt], xmm0
                vmovaps xmm3, xmm7; volumeScale
              }
              VehicleAudio_PlaySound(_RBX, _RSI->engineSustainSnd, 0, *(float *)&_XMM3, fmtc);
            }
            if ( !_RBX->audioState.throttle )
            {
              __asm { vxorps  xmm2, xmm2, xmm2; frac }
              VehicleAudio_EngineRampDown_Start(_RBX, _RSI, *(float *)&_XMM2);
            }
            break;
          case VEH_ENGINE_STATE_RAMPDOWN:
            if ( !_RSI->engineRampDownSnd.name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 478, ASSERT_TYPE_ASSERT, "(vehDef->engineRampDownSnd.name)", (const char *)&queryFormat, "vehDef->engineRampDownSnd.name") )
              __debugbreak();
            if ( _RBX->audioState.engineRampDownTime <= _RBX->time )
            {
LABEL_49:
              VehicleAudio_EngineIdle_Start(_RBX, _RSI);
            }
            else if ( _RBX->audioState.throttle )
            {
              if ( _RSI->engineRampDownLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 488, ASSERT_TYPE_ASSERT, "(vehDef->engineRampDownLength > 0)", (const char *)&queryFormat, "vehDef->engineRampDownLength > 0") )
                __debugbreak();
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rsi+0E58h]
                vdivss  xmm6, xmm1, xmm0
              }
              VehicleAudio_StopSound(_RBX, _RSI->engineRampDownSnd);
              __asm { vmovaps xmm2, xmm6; frac }
              VehicleAudio_EngineRampUp_Start(_RBX, _RSI, *(float *)&_XMM2);
            }
            break;
          default:
            LODWORD(v108) = _RBX->audioState.engineState;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleAudio_UpdateSounds: Invalid audio state %d\n", v108) )
              __debugbreak();
            break;
        }
        VehicleAudio_PlayEngineBlendSounds(_RBX, _RSI);
      }
      if ( BGVehicles::PhysicsIsValid(_RBX->physicsId) )
        goto LABEL_83;
      if ( _RSI->speedSnd.name )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+0E98h]
          vcomiss xmm1, xmm8
        }
        if ( _RSI->speedSnd.name )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+30h]
            vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vdivss  xmm0, xmm0, xmm1; val
            vmovaps xmm2, xmm7; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vcomiss xmm0, xmm8 }
          if ( !(v28 | v95) )
            goto LABEL_81;
        }
        else if ( _RBX->audioState.engineState )
        {
          __asm { vmovaps xmm0, xmm7 }
LABEL_81:
          __asm
          {
            vmovss  dword ptr [rsp+130h+fmt], xmm7
            vmovaps xmm3, xmm0; volumeScale
          }
          VehicleAudio_PlaySound(_RBX, _RSI->speedSnd, 0, *(float *)&_XMM3, fmtd);
        }
      }
      VehicleAudio_PlaySurfaceSounds(_R14, _RBX, _RSI);
LABEL_83:
      VehicleAudio_PlayTurretSounds(_R14, _RBX, _RSI);
    }
  }
  _R11 = &v115;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
GetAudioBlendCurvePointMinMax
==============
*/

float __fastcall GetAudioBlendCurvePointMinMax(double value, const float *blendCurve, double minVal, double maxVal)
{
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40800000
    vcvttss2si ebx, xmm1
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vsubss  xmm7, xmm1, xmm0
    vmovss  xmm1, cs:__real@3a83126f
    vcomiss xmm1, dword ptr [rdx+14h]
    vmovaps xmm8, xmm3
    vmovaps xmm9, xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 693, ASSERT_TYPE_ASSERT, "(blendCurve[HFD_AUDIO_MAX_BLEND_POINTS_PLUS_TWO - 1] > 0.001f)", (const char *)&queryFormat, "blendCurve[HFD_AUDIO_MAX_BLEND_POINTS_PLUS_TWO - 1] > EQUAL_EPSILON") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm0, xmm6, xmm7
    vmovaps xmm2, xmm6; max
    vmulss  xmm1, xmm0, dword ptr [rdi+rax*4]
    vmulss  xmm0, xmm7, dword ptr [rdi+rax*4+4]
    vaddss  xmm1, xmm1, xmm0
    vdivss  xmm0, xmm1, dword ptr [rdi+14h]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm1, xmm6, xmm0
    vmovaps xmm6, [rsp+78h+var_18]
    vmulss  xmm2, xmm1, xmm9
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm0, xmm0, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
VehicleAudio_EngineIdle_Start
==============
*/
void VehicleAudio_EngineIdle_Start(VehicleClient *veh, const VehicleDef *vehDef)
{
  float fmt; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 312, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 313, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  veh->audioState.engineState = VEH_ENGINE_STATE_IDLE;
  if ( vehDef->engineIdleSnd.name )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; volumeScale
      vmovss  dword ptr [rsp+38h+fmt], xmm3
    }
    VehicleAudio_PlaySound(veh, vehDef->engineIdleSnd, 0, *(float *)&_XMM3, fmt);
  }
}

/*
==============
VehicleAudio_EngineRampDown_Start
==============
*/

void __fastcall VehicleAudio_EngineRampDown_Start(VehicleClient *veh, const VehicleDef *vehDef, double frac)
{
  bool v10; 
  bool v11; 
  int time; 
  float fmt; 
  double v25; 
  double v26; 
  double v27; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm2
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 452, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v10 = vehDef == NULL;
  if ( !vehDef )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 453, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, xmm7
  }
  if ( !v10 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+68h+var_30], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_38], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 454, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frac ) && ( frac ) <= ( 1.0f )", "frac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v25, v26, v27) )
      __debugbreak();
  }
  if ( vehDef->engineRampDownSnd.name )
  {
    time = veh->time;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0E58h]
    }
    veh->audioState.engineState = VEH_ENGINE_STATE_RAMPDOWN;
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si r8d, xmm1; timeShift
    }
    veh->audioState.engineRampDownTime = vehDef->engineRampDownLength + time - _ER8;
    __asm
    {
      vmovaps xmm3, xmm7; volumeScale
      vmovss  dword ptr [rsp+68h+fmt], xmm7
    }
    VehicleAudio_PlaySound(veh, vehDef->engineRampDownSnd, _ER8, *(float *)&_XMM3, fmt);
  }
  else
  {
    VehicleAudio_EngineIdle_Start(veh, vehDef);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
VehicleAudio_EngineRampUp
==============
*/
void VehicleAudio_EngineRampUp(VehicleClient *veh, const VehicleDef *vehDef)
{
  float fmt; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 381, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 382, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !vehDef->engineRampUpSnd.name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 383, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpSnd.name)", (const char *)&queryFormat, "vehDef->engineRampUpSnd.name") )
    __debugbreak();
  if ( _RBX->audioState.engineRampUpTime > _RBX->time )
  {
    __asm { vmovaps [rsp+48h+var_18], xmm6 }
    if ( _RBX->audioState.throttle )
    {
      if ( (_RBX->flags & 2) != 0 && vehDef->engineSustainSnd.name )
      {
        __asm { vmovss  xmm6, cs:__real@3f800000 }
        if ( !_RBX->audioState.engineRampUpDelay )
        {
          if ( vehDef->engineRampUpLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 405, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpLength > 0)", (const char *)&queryFormat, "vehDef->engineRampUpLength > 0") )
            __debugbreak();
          __asm { vxorps  xmm1, xmm1, xmm1 }
          _RBX->audioState.engineRampUpDelay = 1;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, eax
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0E48h]
            vdivss  xmm2, xmm1, xmm0
            vsubss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rbx+22Ch], xmm1
          }
          VehicleAudio_StopSound(_RBX, vehDef->engineRampUpSnd);
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+21Ch]
          vmovaps xmm3, xmm6; volumeScale
          vmovss  dword ptr [rsp+48h+fmt], xmm0
        }
        VehicleAudio_PlaySound(_RBX, vehDef->engineSustainSnd, 0, *(float *)&_XMM3, fmt);
        _RBX->audioState.engineRampUpTime += _RBX->frameTime;
      }
      else if ( _RBX->audioState.engineRampUpDelay )
      {
        __asm { vmovss  xmm2, dword ptr [rbx+22Ch]; frac }
        VehicleAudio_EngineRampUp_Start(_RBX, vehDef, *(float *)&_XMM2);
      }
    }
    else
    {
      if ( vehDef->engineRampUpLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 393, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpLength > 0)", (const char *)&queryFormat, "vehDef->engineRampUpLength > 0") )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0E48h]
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm6, xmm1, xmm0
      }
      VehicleAudio_StopSound(_RBX, vehDef->engineRampUpSnd);
      __asm { vmovaps xmm2, xmm6; frac }
      VehicleAudio_EngineRampDown_Start(_RBX, vehDef, *(double *)&_XMM2);
    }
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    VehicleAudio_EngineSustain_Start(_RBX, vehDef);
  }
}

/*
==============
VehicleAudio_EngineRampUp_Start
==============
*/

void __fastcall VehicleAudio_EngineRampUp_Start(VehicleClient *veh, const VehicleDef *vehDef, double frac)
{
  bool v10; 
  bool v11; 
  int v20; 
  float fmt; 
  float fmta; 
  double v28; 
  double v29; 
  double v30; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = veh;
  __asm { vmovaps xmm6, xmm2 }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 345, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v10 = vehDef == NULL;
  if ( !vehDef )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 346, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, xmm7
  }
  if ( !v10 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+68h+var_30], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_38], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 347, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frac ) && ( frac ) <= ( 1.0f )", "frac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v28, v29, v30) )
      __debugbreak();
  }
  if ( vehDef->engineRampUpSnd.name )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0E48h]
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si r8d, xmm1; timeShift
    }
    v20 = _RBX->time - _ER8;
    _RBX->audioState.engineState = VEH_ENGINE_STATE_RAMPUP;
    v10 = (_RBX->flags & 2) == 0;
    _RBX->audioState.engineRampUpTime = vehDef->engineRampUpLength + v20;
    if ( v10 || !vehDef->engineSustainSnd.name )
    {
      __asm
      {
        vmovaps xmm3, xmm7; volumeScale
        vmovss  dword ptr [rsp+68h+fmt], xmm7
      }
      VehicleAudio_PlaySound(_RBX, vehDef->engineRampUpSnd, _ER8, *(float *)&_XMM3, fmta);
      _RBX->audioState.engineRampUpDelay = 0;
      _RBX->audioState.engineRampUpDelayFrac = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+21Ch]
        vmovaps xmm3, xmm7; volumeScale
        vmovss  dword ptr [rsp+68h+fmt], xmm0
      }
      VehicleAudio_PlaySound(_RBX, vehDef->engineSustainSnd, 0, *(float *)&_XMM3, fmt);
      __asm { vmovss  dword ptr [rbx+22Ch], xmm6 }
      _RBX->audioState.engineRampUpDelay = 1;
    }
  }
  else
  {
    VehicleAudio_EngineSustain_Start(_RBX, vehDef);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
VehicleAudio_EngineSustain_Start
==============
*/
void VehicleAudio_EngineSustain_Start(VehicleClient *veh, const VehicleDef *vehDef)
{
  float fmt; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 425, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 426, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  _RBX->audioState.engineState = VEH_ENGINE_STATE_SUSTAIN;
  if ( vehDef->engineSustainSnd.name )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+21Ch]
      vmovss  xmm3, cs:__real@3f800000; volumeScale
      vmovss  dword ptr [rsp+38h+fmt], xmm0
    }
    VehicleAudio_PlaySound(_RBX, vehDef->engineSustainSnd, 0, *(float *)&_XMM3, fmt);
  }
}

/*
==============
VehicleAudio_GetVehicleAndTurretExtentBounds
==============
*/
void VehicleAudio_GetVehicleAndTurretExtentBounds(const LocalClientNum_t localClientNum, const BgVehiclePhysics *vehObj, ExtentBounds *outExtBounds)
{
  centity_t *Entity; 
  CgEntitySystem *EntitySystem; 
  const DObj *DObj_General; 
  const DObj *v12; 
  const centity_t *TurretEnt; 
  const cpose_t *p_pose; 
  int number; 
  const DObj *v31; 
  const DObj *v32; 
  vec3_t outOrigin; 
  __int64 v41; 
  Bounds bounds; 
  Bounds v43; 
  void *retaddr; 

  _RAX = &retaddr;
  v41 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = outExtBounds;
  Entity = CG_GetEntity(localClientNum, vehObj->m_entityNumber);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 925, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 927, ASSERT_TYPE_ASSERT, "(cgEntSystem)", (const char *)&queryFormat, "cgEntSystem") )
    __debugbreak();
  if ( EntitySystem->IsMP(EntitySystem) )
    DObj_General = CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, Entity, NULL);
  else
    DObj_General = Com_GetClientDObj(Entity->nextState.number, EntitySystem->m_localClientNum);
  v12 = DObj_General;
  if ( CgVehicleSystem::IsDobjValidForVehicle(DObj_General) )
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 938, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    DObjGetVisibleBounds(v12, &bounds);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin]
      vaddss  xmm7, xmm0, dword ptr [rsp+0D8h+bounds.midPoint]
      vmovss  dword ptr [rsp+0D8h+bounds.midPoint], xmm7
      vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+4]
      vaddss  xmm6, xmm0, dword ptr [rsp+0D8h+bounds.midPoint+4]
      vmovss  dword ptr [rsp+0D8h+bounds.midPoint+4], xmm6
      vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+8]
      vaddss  xmm5, xmm0, dword ptr [rsp+0D8h+bounds.midPoint+8]
      vmovss  dword ptr [rsp+0D8h+bounds.midPoint+8], xmm5
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    __asm
    {
      vsubss  xmm0, xmm7, dword ptr [rsp+0D8h+bounds.halfSize]
      vmovss  dword ptr [rbx], xmm0
      vsubss  xmm1, xmm6, dword ptr [rsp+0D8h+bounds.halfSize+4]
      vmovss  dword ptr [rbx+4], xmm1
      vsubss  xmm0, xmm5, dword ptr [rsp+0D8h+bounds.halfSize+8]
      vmovss  dword ptr [rbx+8], xmm0
      vaddss  xmm1, xmm7, dword ptr [rsp+0D8h+bounds.halfSize]
      vmovss  dword ptr [rbx+0Ch], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsp+0D8h+bounds.halfSize+4]
      vmovss  dword ptr [rbx+10h], xmm0
      vaddss  xmm1, xmm5, dword ptr [rsp+0D8h+bounds.halfSize+8]
      vmovss  dword ptr [rbx+14h], xmm1
    }
    if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_GROUND_VEHICLE) && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vaddss  xmm1, xmm0, cs:__real@41f00000
        vmovss  dword ptr [rbx+14h], xmm1
      }
    }
    if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HAS_TURRET) )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      TurretEnt = CG_Turret_GetTurretEnt(localClientNum);
      p_pose = &TurretEnt->pose;
      if ( TurretEnt )
      {
        number = TurretEnt->nextState.number;
        v31 = EntitySystem->IsMP(EntitySystem) ? CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, number, NULL) : Com_GetClientDObj(number, EntitySystem->m_localClientNum);
        v32 = v31;
        if ( CgVehicleSystem::IsDobjValidForVehicle(v31) )
        {
          if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 973, ASSERT_TYPE_ASSERT, "(turretDObj)", (const char *)&queryFormat, "turretDObj") )
            __debugbreak();
          DObjGetVisibleBounds(v32, &v43);
          CG_GetPoseOrigin(p_pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+8]
            vaddss  xmm1, xmm0, dword ptr [rsp+0D8h+var_78.midPoint+8]
            vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+var_78.halfSize+8]
            vsubss  xmm6, xmm2, dword ptr [rbx+14h]
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
      __asm
      {
        vmaxss  xmm0, xmm6, cs:__real@42700000
        vaddss  xmm1, xmm0, dword ptr [rbx+14h]
        vmovss  dword ptr [rbx+14h], xmm1
      }
    }
  }
  else
  {
    _RBX->mins.v[0] = -1.0;
    _RBX->mins.v[1] = -1.0;
    _RBX->mins.v[2] = -1.0;
    _RBX->maxs.v[0] = 1.0;
    _RBX->maxs.v[1] = 1.0;
    _RBX->maxs.v[2] = 1.0;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
}

/*
==============
VehicleAudio_PlayBlendedSound
==============
*/
void VehicleAudio_PlayBlendedSound(const VehicleClient *veh, SndAliasLookup aliasLookup0, SndAliasLookup aliasLookup1, SndAliasLookup fallbackAliasLookup0, SndAliasLookup fallbackAliasLookup1, float lerp, float volumeScale, float pitch)
{
  bool v15; 
  bool v16; 
  SndAliasList *Alias; 
  SndAlias *head; 
  SndAliasList *v21; 
  CgSoundSystem *SoundSystem; 
  int v28; 
  int v29; 
  int v30; 
  int volumeScalea; 
  int volumeScaleb; 
  int volumeScalec; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  v15 = veh == NULL;
  if ( !veh )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 194, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh");
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+78h+volumeScale]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v15 )
  {
    Alias = SND_TryFindAlias(aliasLookup0.name);
    if ( Alias || fallbackAliasLookup0.name && (Alias = SND_FindAlias(fallbackAliasLookup0.name)) != NULL )
    {
      head = Alias->head;
      if ( (head->flags & 1) == 0 )
        goto LABEL_26;
      __asm
      {
        vmulss  xmm6, xmm6, dword ptr [rbp+218h]
        vucomiss xmm6, xmm7
      }
      if ( (head->flags & 1) != 0 )
      {
LABEL_26:
        v21 = SND_TryFindAlias(aliasLookup1.name);
        if ( v21 || fallbackAliasLookup1.name && (v21 = SND_FindAlias(fallbackAliasLookup1.name)) != NULL )
        {
          __asm
          {
            vmovaps [rsp+78h+var_38], xmm8
            vmovss  xmm8, [rsp+78h+lerp]
            vmovss  [rsp+78h+volumeScale], xmm8
          }
          if ( (volumeScalea & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 231, ASSERT_TYPE_SANITY, "( !IS_NAN( lerp ) )", (const char *)&queryFormat, "!IS_NAN( lerp )") )
            __debugbreak();
          __asm { vmovss  [rsp+78h+volumeScale], xmm6 }
          if ( (volumeScaleb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 232, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
            __debugbreak();
          __asm
          {
            vmovss  xmm7, [rsp+78h+pitch]
            vmovss  [rsp+78h+volumeScale], xmm7
          }
          if ( (volumeScalec & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 233, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
            __debugbreak();
          SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
          __asm
          {
            vmovss  [rsp+78h+var_40], xmm7
            vmovss  [rsp+78h+var_48], xmm6
            vmovss  dword ptr [rsp+78h+var_50], xmm8
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, SndAliasList *, int, int, int))SoundSystem->PlayBlendedSoundAliasAsync)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState, Alias, v21, v28, v29, v30);
          __asm { vmovaps xmm8, [rsp+78h+var_38] }
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
VehicleAudio_PlayEngineBlendSounds
==============
*/
void VehicleAudio_PlayEngineBlendSounds(const VehicleClient *veh, const VehicleDef *vehDef)
{
  float lerp; 
  float lerpa; 
  double v30; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  float v35; 

  _RBX = vehDef;
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 502, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 503, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( _RDI->audioState.engineState > (unsigned int)VEH_ENGINE_STATE_STARTUP )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+0D68h]
      vcomiss xmm6, cs:__real@3a83126f
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
    }
    if ( _RDI->audioState.engineState == VEH_ENGINE_STATE_OFF )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@3f50624de0000000
        vmovsd  [rsp+78h+var_40], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+78h+var_48], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 509, ASSERT_TYPE_ASSERT, "(engineSpeed >= 0.001f)", "%s\n\tengineSpeed (%f) < EQUAL_EPSILON (%f) will result eventually in NaN's due to a divide by zero on the following line of code.", "engineSpeed >= EQUAL_EPSILON", v30, v33) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+30h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vdivss  xmm0, xmm0, xmm6; val
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm7, xmm7, xmm7
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm8, xmm0 }
    if ( _RBX->type == VEH_TREADED )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+64h]
        vcomiss xmm1, xmm7
      }
      if ( _RBX->type > VEH_TREADED )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+40h]
          vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vdivss  xmm0, xmm2, xmm1; val
          vmovaps xmm2, xmm6; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmaxss  xmm8, xmm0, xmm8 }
      }
    }
    __asm { vmovaps xmm7, [rsp+78h+var_28] }
    if ( _RBX->idleLowSnd.name && _RBX->idleHighSnd.name || _RBX->fallbackIdleLowSnd.name && _RBX->fallbackIdleHighSnd.name )
    {
      __asm
      {
        vmovss  dword ptr [rsp+78h+var_40], xmm6
        vsubss  xmm0, xmm6, xmm8
        vmovss  dword ptr [rsp+78h+var_48], xmm6
        vmovss  [rsp+78h+lerp], xmm0
      }
      VehicleAudio_PlayBlendedSound(_RDI, _RBX->idleLowSnd, _RBX->idleHighSnd, _RBX->fallbackIdleLowSnd, _RBX->fallbackIdleHighSnd, lerp, v31, v34);
    }
    if ( _RBX->engineLowSnd.name && _RBX->engineHighSnd.name || _RBX->fallbackEngineLowSnd.name && _RBX->fallbackEngineHighSnd.name )
    {
      __asm
      {
        vmovss  dword ptr [rsp+78h+var_40], xmm6
        vmovss  dword ptr [rsp+78h+var_48], xmm6
        vmovss  [rsp+78h+lerp], xmm8
      }
      VehicleAudio_PlayBlendedSound(_RDI, _RBX->engineLowSnd, _RBX->engineHighSnd, _RBX->fallbackEngineLowSnd, _RBX->fallbackEngineHighSnd, lerpa, v32, v35);
    }
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_18]
      vmovaps xmm8, [rsp+78h+var_38]
    }
  }
}

/*
==============
VehicleAudio_PlaySound
==============
*/

void __fastcall VehicleAudio_PlaySound(const VehicleClient *veh, SndAliasLookup aliasLookup, int timeShift, double volumeScale, float pitch)
{
  bool v11; 
  bool v12; 
  SndAliasList *Alias; 
  SndAliasList *v15; 
  SndAlias *head; 
  CgSoundSystem *SoundSystem; 
  int fmt; 
  int v22; 
  int v25; 
  int v26; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm3
  }
  v11 = veh == NULL;
  if ( !veh )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 126, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v11 )
  {
    Alias = SND_FindAlias(aliasLookup.name);
    v15 = Alias;
    if ( Alias )
    {
      head = Alias->head;
      if ( (head->flags & 1) == 0 )
        goto LABEL_8;
      __asm
      {
        vmulss  xmm6, xmm6, dword ptr [rdi+218h]
        vucomiss xmm6, xmm7
      }
      if ( (head->flags & 1) != 0 )
      {
LABEL_8:
        __asm { vmovss  [rsp+68h+arg_18], xmm6 }
        if ( (v25 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 149, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm7, [rsp+68h+pitch]
          vmovss  [rsp+68h+arg_18], xmm7
        }
        if ( (v26 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 150, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
          __debugbreak();
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
        __asm
        {
          vmovss  dword ptr [rsp+68h+var_40], xmm7
          vmovss  dword ptr [rsp+68h+fmt], xmm6
        }
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, int, int, int))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState, v15, fmt, v22, timeShift);
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
VehicleAudio_PlaySoundPosition
==============
*/

void __fastcall VehicleAudio_PlaySoundPosition(const VehicleClient *veh, SndAliasLookup aliasLookup, int timeShift, double volumeScale, float pitch, const vec3_t *position)
{
  bool v12; 
  bool v13; 
  SndAliasList *Alias; 
  SndAliasList *v16; 
  SndAlias *head; 
  CgSoundSystem *SoundSystem; 
  int fmt; 
  int v23; 
  int v26; 
  int v27; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm3
  }
  v12 = veh == NULL;
  if ( !veh )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 160, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v12 )
  {
    Alias = SND_FindAlias(aliasLookup.name);
    v16 = Alias;
    if ( Alias )
    {
      head = Alias->head;
      if ( (head->flags & 1) == 0 )
        goto LABEL_8;
      __asm
      {
        vmulss  xmm6, xmm6, dword ptr [rdi+218h]
        vucomiss xmm6, xmm7
      }
      if ( (head->flags & 1) != 0 )
      {
LABEL_8:
        __asm { vmovss  [rsp+68h+arg_18], xmm6 }
        if ( (v26 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 183, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm7, [rsp+68h+pitch]
          vmovss  [rsp+68h+arg_18], xmm7
        }
        if ( (v27 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
          __debugbreak();
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
        __asm
        {
          vmovss  dword ptr [rsp+68h+var_40], xmm7
          vmovss  dword ptr [rsp+68h+fmt], xmm6
        }
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, int, int, int))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)veh->entIndex, position, v16, fmt, v23, timeShift);
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
VehicleAudio_PlaySurfaceSounds
==============
*/
void VehicleAudio_PlaySurfaceSounds(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef)
{
  unsigned __int8 surfaceType; 
  char v28; 
  char v29; 
  int v30; 
  SndAliasList *Alias; 
  SndAliasList *v32; 
  SndAlias *head; 
  CgSoundSystem *SoundSystem; 
  int v38; 
  int v39; 
  int v44; 

  _RDI = vehDef;
  _RBX = veh;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 571, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 572, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 573, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  surfaceType = _RBX->audioState.surfaceType;
  if ( !cent->pose.vehicle.boneUsage )
    surfaceType = cent->pose.vehicle.wheelSurfaceType;
  _RBX->audioState.surfaceType = surfaceType;
  if ( surfaceType && _RDI->surfaceSndName )
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
      vmovaps [rsp+88h+var_38], xmm8
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm8, dword ptr [rdi+0EA8h]
      vmovaps [rsp+88h+var_48], xmm9
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 587, ASSERT_TYPE_ASSERT, "(vehDef->surfaceSndBlendSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->surfaceSndBlendSpeed > 0.0f") )
      __debugbreak();
    __asm { vcomiss xmm8, dword ptr [rdi+0EB0h] }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 588, ASSERT_TYPE_ASSERT, "(vehDef->slideBlendSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->slideBlendSpeed > 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm9, cs:__real@3f800000
      vdivss  xmm0, xmm0, dword ptr [rdi+0EA8h]; val
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+34h]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps xmm7, xmm0
      vdivss  xmm0, xmm1, dword ptr [rdi+0EB0h]; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rdi+0EACh]
      vaddss  xmm6, xmm7, xmm1
      vcomiss xmm6, xmm8
      vmovaps xmm7, [rsp+88h+var_28]
    }
    if ( !(v28 | v29) )
    {
      v30 = _RBX->audioState.surfaceType;
      Alias = SND_FindAlias(_RDI->surfaceSndName);
      v32 = Alias;
      if ( Alias )
      {
        head = Alias->head;
        if ( (head->flags & 1) == 0 )
          goto LABEL_22;
        __asm
        {
          vmulss  xmm6, xmm6, dword ptr [rbx+218h]
          vucomiss xmm6, xmm8
        }
        if ( (head->flags & 1) != 0 )
        {
LABEL_22:
          __asm { vmovss  [rsp+88h+arg_0], xmm6 }
          if ( (v44 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 115, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
            __debugbreak();
          SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)_RBX->localClientNum);
          __asm
          {
            vmovss  [rsp+88h+var_58], xmm9
            vmovss  dword ptr [rsp+88h+var_60], xmm6
          }
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, int, int, int, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)_RBX->entIndex, &_RBX->audioState, v32, v30, v38, v39, 0);
        }
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_38]
      vmovaps xmm6, [rsp+88h+var_18]
      vmovaps xmm9, [rsp+88h+var_48]
    }
  }
}

/*
==============
VehicleAudio_PlayTurretSounds
==============
*/

void __fastcall VehicleAudio_PlayTurretSounds(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef, double _XMM3_8)
{
  const char *name; 
  const char *v13; 
  __int64 localClientNum; 
  bool turretMoving; 
  const centity_t *TurretEnt; 
  const centity_t *v19; 
  bool v20; 
  centity_t *LinkToParent; 
  unsigned __int16 number; 
  CgWeaponMap *v23; 
  BgWeaponHandle *p_nextState; 
  const Weapon *Weapon; 
  const char *v26; 
  SndAliasLookup v27; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v30; 
  int v31; 
  int v32; 
  __int64 v35; 
  char v57; 
  char v58; 
  bool v59; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  int v90; 
  __int64 v91; 
  char v92; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  v91 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RDI = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 609, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 610, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 611, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  name = vehDef->turretSpinSnd.name;
  v13 = vehDef->turretStopSnd.name;
  localClientNum = veh->localClientNum;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm6, xmm9
  }
  turretMoving = veh->audioState.turretMoving;
  TurretEnt = CG_Turret_GetTurretEnt((const LocalClientNum_t)veh->localClientNum);
  v19 = TurretEnt;
  v20 = TurretEnt == NULL;
  if ( TurretEnt && (LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)localClientNum, TurretEnt), v20 = LinkToParent == NULL, LinkToParent) && (number = _RDI->nextState.number, v20 = (unsigned int)LinkToParent->nextState.number <= number, LinkToParent->nextState.number == number) )
  {
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v23 = CgWeaponMap::ms_instance[localClientNum];
    p_nextState = (BgWeaponHandle *)&v19->nextState;
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v23, p_nextState[33]);
    if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 632, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( turretWeap ))", (const char *)&queryFormat, "!BG_IsNullWeapon( turretWeap )") )
      __debugbreak();
    v26 = BG_TurretSpinSound(Weapon, 0).name;
    v27.name = BG_TurretStopSpinSound(Weapon, 0).name;
    if ( v26 )
      name = v26;
    if ( v27.name )
      v13 = v27.name;
    Client = ClActiveClient::GetClient((const LocalClientNum_t)localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v30 = ClActiveClient::GetClient((const LocalClientNum_t)localClientNum);
    v31 = ClActiveClient_GetCmdNumber(v30);
    v32 = v31;
    v90 = v31;
    if ( CmdNumber > v31 )
    {
      LODWORD(fmt) = v31;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber <= v32 - 128 || CmdNumber <= 0 )
    {
      memset(&v90, 0, sizeof(v90));
      goto LABEL_51;
    }
    _R14 = &v30->cmds[CmdNumber & 0x7F];
    memset(&v90, 0, sizeof(v90));
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RCX = &v92;
    v35 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [r14+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [r14+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [r14+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [r14+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _R14 = (usercmd_s *)((char *)_R14 + 128);
      --v35;
    }
    while ( v35 );
    *(_QWORD *)_RCX = _R14->buttons;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3c010204
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vmulss  xmm0, xmm2, cs:__real@3c010204
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm6, xmm1, xmm1
      vcomiss xmm6, cs:__real@3dcccccd
    }
    v59 = !(v57 | v58);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+180h]
      vsubss  xmm1, xmm0, dword ptr [rdi+1FCh]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vxorps  xmm3, xmm3, xmm3
      vmovss  xmm0, dword ptr [rdi+184h]
      vsubss  xmm1, xmm0, dword ptr [rdi+200h]
      vmulss  xmm7, xmm1, cs:__real@3b360b61
      vmovss  xmm5, cs:__real@3f000000
      vaddss  xmm2, xmm7, xmm5
      vroundss xmm8, xmm3, xmm2, 1
      vaddss  xmm2, xmm4, xmm5
      vroundss xmm3, xmm3, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmovss  xmm2, cs:__real@43b40000
      vmulss  xmm1, xmm0, xmm2
      vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm1, xmm3
      vcomiss xmm1, xmm5
    }
    if ( !v20 )
      goto LABEL_43;
    __asm
    {
      vsubss  xmm0, xmm7, xmm8
      vmulss  xmm1, xmm0, xmm2
      vandps  xmm1, xmm1, xmm3
      vcomiss xmm1, xmm5
    }
    if ( v20 )
      v59 = 0;
    else
LABEL_43:
      v59 = 1;
  }
  veh->audioState.turretMoving = v59;
  if ( name && v59 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+1C8h+fmt], xmm9
      vmovaps xmm3, xmm6; volumeScale
    }
    VehicleAudio_PlaySound(veh, (SndAliasLookup)name, 0, *(double *)&_XMM3, fmta);
  }
  if ( v13 && turretMoving && !veh->audioState.turretMoving )
  {
    __asm
    {
      vmovss  dword ptr [rsp+1C8h+fmt], xmm9
      vmovaps xmm3, xmm9; volumeScale
    }
    VehicleAudio_PlaySound(veh, (SndAliasLookup)v13, 0, *(double *)&_XMM3, fmtb);
  }
LABEL_51:
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
VehicleAudio_StopSound
==============
*/
void VehicleAudio_StopSound(const VehicleClient *veh, SndAliasLookup aliasLookup)
{
  unsigned __int64 SndEntHandle; 
  SndAliasLookup sndAliasLookup; 

  sndAliasLookup.name = aliasLookup.name;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 246, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !sndAliasLookup.name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 247, ASSERT_TYPE_ASSERT, "(aliasLookup.name)", (const char *)&queryFormat, "aliasLookup.name") )
    __debugbreak();
  if ( !CG_EntityWorkers_TryAddStopSoundAliasRequest(veh->entIndex, &sndAliasLookup) )
  {
    SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)veh->localClientNum, veh->entIndex);
    SND_StopSoundAliasOnEnt(SndEntHandle, sndAliasLookup.name);
  }
}

