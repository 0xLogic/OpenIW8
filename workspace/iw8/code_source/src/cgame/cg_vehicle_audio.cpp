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
  float v6; 
  __int128 v8; 
  ExtentBounds outExtBounds; 

  VehicleAudio_GetVehicleAndTurretExtentBounds(localClientNum, vehObj, &outExtBounds);
  v6 = (float)(outExtBounds.maxs.v[2] + outExtBounds.mins.v[2]) * 0.5;
  v8 = LODWORD(outExtBounds.maxs.v[2]);
  *(float *)&v8 = outExtBounds.maxs.v[2] - v6;
  _XMM1 = v8;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  *(float *)&v8 = outExtBounds.maxs.v[1] + outExtBounds.mins.v[1];
  outNotOccludedAudioEntOrigin->v[0] = (float)((float)(outExtBounds.mins.v[0] + outExtBounds.maxs.v[0]) * 0.5) + (float)((float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[0]);
  outNotOccludedAudioEntOrigin->v[1] = (float)(*(float *)&v8 * 0.5) + (float)((float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[1]);
  outNotOccludedAudioEntOrigin->v[2] = (float)((float)(*(float *)&_XMM1 + 5.0) * vehObj->m_transform.m[2].v[2]) + v6;
}

/*
==============
CG_VehicleAudio_CollisionEvent
==============
*/
void CG_VehicleAudio_CollisionEvent(LocalClientNum_t localClientNum, const centity_t *cent, unsigned int entEventParam)
{
  __int64 v3; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  float v8; 
  float v9; 
  const VehicleDef *ClientDef; 
  int time; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 

  v3 = entEventParam;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1299, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1300, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
  if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
  {
    v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, Client->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1325, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    ObjectById->ReactToServerEvent(ObjectById, 166u, v3);
  }
  else
  {
    v8 = (float)v3;
    v9 = v8 * 0.0039215689;
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( ClientDef->collisionSnd.name )
    {
      time = Client->time;
      if ( Client->audioState.lastImpactTime <= time || v9 >= Client->audioState.lastImpactScale )
      {
        Client->audioState.lastImpactTime = time + 500;
        Client->audioState.lastImpactScale = v9;
        VehicleAudio_PlaySound(Client, ClientDef->collisionSnd, 0, v9, 1.0);
      }
    }
  }
}

/*
==============
CG_VehicleAudio_ResetDistanceScales
==============
*/
void CG_VehicleAudio_ResetDistanceScales(void)
{
  const dvar_t *v0; 
  int integer; 
  float *v2; 
  __int64 v3; 

  v0 = DVARFLT_vehAudio_idleDistanceScale;
  if ( !DVARFLT_vehAudio_idleDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_idleDistanceScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  v2 = s_VehicleAudioDistanceScales;
  v3 = 128i64;
  if ( s_VehicleAudioDistanceScales > flt_1512E43C0 )
    v3 = 0i64;
  while ( v3 )
  {
    *(_DWORD *)v2++ = integer;
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
  const dvar_t *v2; 
  LocalClientNum_t localClientNum; 
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 69, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  veh->audioState.spawnTime = veh->time;
  v2 = DVARFLT_vehAudio_spawnVolumeTime;
  if ( !DVARFLT_vehAudio_spawnVolumeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_spawnVolumeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  localClientNum = veh->localClientNum;
  veh->audioState.spawnTimeDelay = (int)(float)(v2->current.value * 1000.0);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    if ( veh->index >= 0x80u )
    {
      LODWORD(v6) = 128;
      LODWORD(v5) = veh->index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( veh->index ) < (unsigned)( ( sizeof( *array_counter( s_VehicleAudioDistanceScales ) ) + 0 ) )", "veh->index doesn't index s_VehicleAudioDistanceScales\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    v4 = DVARFLT_vehAudio_idleDistanceScale;
    if ( !DVARFLT_vehAudio_idleDistanceScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_idleDistanceScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    s_VehicleAudioDistanceScales[veh->index] = v4->current.value;
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
  __int64 v10; 

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
    VehicleAudio_PlaySound(Client, v9, 0, 1.0, 1.0);
    return;
  }
  LODWORD(v10) = soundEvent;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1357, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleAudio_SuspensionEvent: Invalid sound event %d\n", v10) )
    __debugbreak();
}

/*
==============
CG_VehicleAudio_UpdateNonRevAudio
==============
*/
bool CG_VehicleAudio_UpdateNonRevAudio(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef, const tmat33_t<vec3_t> *vehicleAudioAxis)
{
  __int128 v4; 
  SndAliasList *AliasFromId; 
  LocalClientNum_t localClientNum; 
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  const char *name; 
  int v15; 
  char v16; 
  unsigned int v17; 
  char v18; 
  const dvar_t *v19; 
  float value; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  unsigned int flags; 
  unsigned int v32; 
  double Float_Internal_DebugName; 
  float v34; 
  double v35; 
  float AudioBlendCurvePointMinMax; 
  double v37; 
  float v38; 
  double v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  double v49; 
  float v50; 
  double v51; 
  float v52; 
  double v53; 
  double v54; 
  float v55; 
  double v56; 
  double v57; 
  float v58; 
  double v59; 
  float v60; 
  float v61; 
  double v62; 
  float v63; 
  float v64; 
  double v65; 
  float v66; 
  double v67; 
  float v68; 
  double v69; 
  float v70; 
  double v71; 
  float v72; 
  double v73; 
  float v74; 
  double v75; 
  float v76; 
  double v77; 
  float v78; 
  double v79; 
  float v80; 
  double v81; 
  float v82; 
  double v83; 
  double v84; 
  float v85; 
  double v86; 
  float v87; 
  double v88; 
  float v89; 
  double v90; 
  float v91; 
  const dvar_t *v92; 
  float v93; 
  const dvar_t *v94; 
  float v95; 
  const dvar_t *v96; 
  float v97; 
  float v98; 
  double v99; 
  const dvar_t *v100; 
  float v101; 
  __int128 v102; 
  float v103; 
  __int128 v105; 
  double v106; 
  float v107; 
  double v108; 
  float v110; 
  double v111; 
  float v112; 
  double v113; 
  float v114; 
  double v115; 
  float v116; 
  double v117; 
  float v118; 
  double v119; 
  float v120; 
  double v121; 
  float v122; 
  float v124; 
  char v125; 
  char v126[3]; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  vec3_t position; 
  __int128 v132; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 701, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 702, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 703, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  LOBYTE(AliasFromId) = BGVehicles::PhysicsIsValid(veh->physicsId);
  if ( (_BYTE)AliasFromId )
  {
    localClientNum = veh->localClientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, veh->physicsId);
    LOBYTE(AliasFromId) = ObjectById->SupportsFeature(ObjectById, VPFEAT_VDX_VEHICLE);
    if ( (_BYTE)AliasFromId )
    {
      name = vehDef->mainRotorOperatingRpmSnd.name;
      v15 = 0;
      if ( name && (v16 = *name) != 0 )
      {
        v17 = 5381;
        do
        {
          ++name;
          v18 = v16 | 0x20;
          if ( (unsigned int)(v16 - 65) >= 0x1A )
            v18 = v16;
          v17 = 65599 * v17 + v18;
          v16 = *name;
        }
        while ( *name );
        if ( !v17 )
          v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      AliasFromId = SND_FindAliasFromId(v17);
      if ( AliasFromId )
      {
        ((void (__fastcall *)(BgVehiclePhysics *, _QWORD, _QWORD, float *, float *, float *, float *, float *, char *, char *, vec3_t *))ObjectById->__vftable[1].SaveToMemFile)(ObjectById, (unsigned int)localClientNum, (unsigned int)LocalClientGlobals->oldTime, &v127, &v128, &v124, &v130, &v129, &v125, v126, &position);
        if ( !ObjectById->m_playerControlled )
        {
          v19 = DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset;
          if ( !DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehAudio_remoteClientLocalRotorOffset") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v19);
          value = v19->current.value;
          v21 = v19->current.vector.v[1];
          v22 = v19->current.vector.v[2];
          v23 = value * vehicleAudioAxis->m[0].v[1];
          v24 = v21 * vehicleAudioAxis->m[1].v[1];
          position.v[0] = (float)((float)((float)(v21 * vehicleAudioAxis->m[1].v[0]) + (float)(value * vehicleAudioAxis->m[0].v[0])) + (float)(v22 * vehicleAudioAxis->m[2].v[0])) + veh->audioState.entOrigin.v[0];
          v25 = (float)((float)(v24 + v23) + (float)(v22 * vehicleAudioAxis->m[2].v[1])) + veh->audioState.entOrigin.v[1];
          v26 = value * vehicleAudioAxis->m[0].v[2];
          v27 = v21 * vehicleAudioAxis->m[1].v[2];
          position.v[1] = v25;
          position.v[2] = (float)((float)(v27 + v26) + (float)(v22 * vehicleAudioAxis->m[2].v[2])) + veh->audioState.entOrigin.v[2];
        }
        v28 = LODWORD(v129);
        LODWORD(v130) &= _xmm;
        veh->audioState.inAirPitch = v124;
        v29 = v28;
        *(float *)&v29 = *(float *)&v28 - 0.60000002;
        FD_ComputeExpo(*(float *)&v28 - 0.60000002, 0.5);
        v30 = v29;
        v129 = powf_0(COERCE_FLOAT(LODWORD(v129) & _xmm), 0.1);
        v127 = powf_0(v127, 4.0);
        if ( vehDef->physicsHeliStartup.name && v125 )
        {
          flags = veh->flags;
          if ( (flags & 0x20) == 0 )
          {
            VehicleAudio_PlaySound(veh, vehDef->physicsHeliStartup, 0, 1.0, 1.0);
            flags = veh->flags;
          }
          veh->flags = flags & 0xFFFFFFDF;
          if ( !vehDef->physicsHeliShutdown.name )
            goto LABEL_39;
          VehicleAudio_StopSound(veh, vehDef->physicsHeliShutdown);
        }
        if ( vehDef->physicsHeliShutdown.name && v126[0] )
        {
          VehicleAudio_PlaySound(veh, vehDef->physicsHeliShutdown, 0, 1.0, 1.0);
          if ( vehDef->physicsHeliStartup.name )
            VehicleAudio_StopSound(veh, vehDef->physicsHeliStartup);
          veh->flags |= 0x20u;
        }
LABEL_39:
        v32 = veh->flags;
        if ( v124 <= 0.001 )
        {
          veh->flags = v32 | 0x22;
        }
        else
        {
          veh->flags = v32 & 0xFFFFFFFD;
          veh->audioState.engineState = VEH_ENGINE_STATE_SUSTAIN;
          v132 = v4;
          if ( vehDef->mainRotorLowRpmSnd.name )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_max, "fd_helicopter_audio_main_low_rpm_volume_max");
            v34 = *(float *)&Float_Internal_DebugName;
            v35 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_volume_min, "fd_helicopter_audio_main_low_rpm_volume_min");
            AudioBlendCurvePointMinMax = GetAudioBlendCurvePointMinMax(v124, sBlendCurveMainRotorVolumeLow, *(const float *)&v35, v34);
            if ( AudioBlendCurvePointMinMax > 0.001 )
            {
              v37 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_max, "fd_helicopter_audio_main_low_rpm_pitch_max");
              v38 = *(float *)&v37;
              v39 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_low_rpm_pitch_min, "fd_helicopter_audio_main_low_rpm_pitch_min");
              *(float *)&v39 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveMainRotorPitchLow, *(const float *)&v39, v38);
              VehicleAudio_PlaySound(veh, vehDef->mainRotorLowRpmSnd, 0, AudioBlendCurvePointMinMax, *(float *)&v39);
            }
          }
          v40 = DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max;
          if ( !DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_main_effort_rpm_volume_max") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v40);
          v41 = v40->current.value;
          v42 = DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min;
          if ( !DVARFLT_fd_helicopter_audio_main_effort_rpm_volume_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_main_effort_rpm_volume_min") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v42);
          v43 = v42->current.value;
          v44 = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          v45 = v130;
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v44);
          v46 = v44->current.value;
          v47 = GetAudioBlendCurvePointMinMax(v45, sBlendCurveMainRotorVolumeEffort, v43, v41);
          v48 = (float)(v124 > v46) * (float)(v47 * v124);
          if ( vehDef->mainRotorOperatingRpmSnd.name )
          {
            v49 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_max, "fd_helicopter_audio_main_operating_rpm_volume_max");
            v50 = *(float *)&v49;
            v51 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_volume_min, "fd_helicopter_audio_main_operating_rpm_volume_min");
            v52 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveMainRotorVolumeHigh, *(const float *)&v51, v50) - v48;
            v53 = I_fclamp(v52, 0.0, 1.0);
            if ( *(float *)&v53 > 0.001 )
            {
              v54 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_max, "fd_helicopter_audio_main_operating_rpm_pitch_max");
              v55 = *(float *)&v54;
              v56 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_operating_rpm_pitch_min, "fd_helicopter_audio_main_operating_rpm_pitch_min");
              *(float *)&v56 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveMainRotorPitchHigh, *(const float *)&v56, v55);
              VehicleAudio_PlaySound(veh, vehDef->mainRotorOperatingRpmSnd, 0, v52, *(float *)&v56);
            }
          }
          if ( vehDef->mainRotorOperatingEffortSnd.name )
          {
            v57 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_max, "fd_helicopter_audio_main_effort_rpm_pitch_max");
            v58 = *(float *)&v57;
            v59 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_main_effort_rpm_pitch_min, "fd_helicopter_audio_main_effort_rpm_pitch_min");
            v60 = v124;
            v61 = *(float *)&v59;
            v62 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_pitch_throttle_decrease, "fd_helicopter_audio_pitch_throttle_decrease");
            v63 = 1.0 - (float)(*(float *)&v62 * v127);
            v64 = GetAudioBlendCurvePointMinMax(v60, sBlendCurveMainRotorPitchHigh, v61, v58) * v63;
            if ( v48 > 0.001 )
              VehicleAudio_PlaySound(veh, vehDef->mainRotorOperatingEffortSnd, 0, v48, v64);
          }
          if ( vehDef->turbineLowRpmSnd.name )
          {
            v65 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_max, "fd_helicopter_audio_turbine_low_rpm_volume_max");
            v66 = *(float *)&v65;
            v67 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_volume_min, "fd_helicopter_audio_turbine_low_rpm_volume_min");
            v68 = GetAudioBlendCurvePointMinMax(v128, sBlendCurveVolumeTurbineLow, *(const float *)&v67, v66);
            v69 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_max, "fd_helicopter_audio_turbine_low_rpm_pitch_max");
            v70 = *(float *)&v69;
            v71 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_low_rpm_pitch_min, "fd_helicopter_audio_turbine_low_rpm_pitch_min");
            v72 = GetAudioBlendCurvePointMinMax(v128, sBlendCurveMainRotorPitchLow, *(const float *)&v71, v70);
            if ( v68 > 0.001 )
              VehicleAudio_PlaySound(veh, vehDef->turbineLowRpmSnd, 0, v68, v72);
          }
          if ( vehDef->turbineOperatingRpmSnd.name )
          {
            v73 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_max, "fd_helicopter_audio_turbine_operating_rpm_volume_max");
            v74 = *(float *)&v73;
            v75 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_volume_min, "fd_helicopter_audio_turbine_operating_rpm_volume_min");
            v76 = GetAudioBlendCurvePointMinMax(v128, sBlendCurveVolumeTurbineHigh, *(const float *)&v75, v74);
            v77 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_max, "fd_helicopter_audio_turbine_operating_rpm_pitch_max");
            v78 = *(float *)&v77;
            v79 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_turbine_operating_rpm_pitch_min, "fd_helicopter_audio_turbine_operating_rpm_pitch_min");
            v80 = GetAudioBlendCurvePointMinMax(v128, sBlendCurveMainRotorPitchHigh, *(const float *)&v79, v78);
            if ( v76 > 0.001 )
            {
              v81 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_volume_throttle_increase, "fd_helicopter_audio_volume_throttle_increase");
              v82 = (float)((float)(*(float *)&v81 * v127) + 1.0) * v76;
              v83 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_pitch_throttle_decrease, "fd_helicopter_audio_pitch_throttle_decrease");
              VehicleAudio_PlaySound(veh, vehDef->turbineOperatingRpmSnd, 0, v82, (float)(1.0 - (float)(*(float *)&v83 * v127)) * v80);
            }
          }
          if ( vehDef->tailRotorLowRpmSnd.name )
          {
            v84 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_max, "fd_helicopter_audio_tail_low_rpm_volume_max");
            v85 = *(float *)&v84;
            v86 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_volume_min, "fd_helicopter_audio_tail_low_rpm_volume_min");
            v87 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorVolumeLow, *(const float *)&v86, v85);
            v88 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_max, "fd_helicopter_audio_tail_low_rpm_pitch_max");
            v89 = *(float *)&v88;
            v90 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_low_rpm_pitch_min, "fd_helicopter_audio_tail_low_rpm_pitch_min");
            v91 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorPitchLow, *(const float *)&v90, v89);
            if ( v87 > 0.001 )
              VehicleAudio_PlaySoundPosition(veh, vehDef->tailRotorLowRpmSnd, 0, v87, v91, &position);
          }
          v92 = DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max;
          if ( !DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_tail_effort_rpm_volume_max") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v92);
          v93 = v92->current.value;
          v94 = DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min;
          if ( !DVARFLT_fd_helicopter_audio_tail_effort_rpm_volume_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_tail_effort_rpm_volume_min") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v94);
          v95 = GetAudioBlendCurvePointMinMax(v129, sBlendCurveTailRotorVolumeEffort, v94->current.value, v93);
          v96 = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          v97 = v95;
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v96);
          v98 = v96->current.value;
          v99 = I_fclamp(*(float *)&v30, 0.0, 1.0);
          v100 = DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort;
          v101 = *(float *)&v99 * (float)((float)(v124 > v98) * (float)(v97 * v124));
          if ( !DVARFLT_fd_helicopter_audio_min_rpm_to_allow_effort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_audio_min_rpm_to_allow_effort") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v100);
          *((_QWORD *)&v102 + 1) = *((_QWORD *)&v30 + 1) ^ *((_QWORD *)&_xmm + 1);
          v103 = v100->current.value;
          *(double *)&v102 = I_fclamp(COERCE_FLOAT(v30 ^ _xmm), 0.0, 1.0);
          LOBYTE(v15) = v124 > v103;
          v105 = v102;
          *(float *)&v105 = *(float *)&v102 * (float)((float)v15 * (float)(v97 * v124));
          _XMM7 = v105;
          if ( vehDef->tailRotorOperatingRpmSnd.name )
          {
            v106 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_max, "fd_helicopter_audio_tail_operating_rpm_volume_max");
            v107 = *(float *)&v106;
            v108 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_volume_min, "fd_helicopter_audio_tail_operating_rpm_volume_min");
            __asm { vmaxss  xmm1, xmm7, xmm8 }
            v110 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorVolumeHigh, *(const float *)&v108, v107) - *(float *)&_XMM1;
            v111 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_max, "fd_helicopter_audio_tail_operating_rpm_pitch_max");
            v112 = *(float *)&v111;
            v113 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_operating_rpm_pitch_min, "fd_helicopter_audio_tail_operating_rpm_pitch_min");
            v114 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorPitchHigh, *(const float *)&v113, v112);
            if ( v110 > 0.001 )
              VehicleAudio_PlaySoundPosition(veh, vehDef->tailRotorOperatingRpmSnd, 0, v110, v114, &position);
          }
          if ( vehDef->tailRotorOperatingEffortSndRight.name )
          {
            v115 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max, "fd_helicopter_audio_tail_effort_rpm_pitch_max");
            v116 = *(float *)&v115;
            v117 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min, "fd_helicopter_audio_tail_effort_rpm_pitch_min");
            v118 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorPitchHigh, *(const float *)&v117, v116);
            if ( v101 > 0.001 )
              VehicleAudio_PlaySoundPosition(veh, vehDef->tailRotorOperatingEffortSndRight, 0, v101, v118, &position);
          }
          if ( vehDef->tailRotorOperatingEffortSndLeft.name )
          {
            v119 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_max, "fd_helicopter_audio_tail_effort_rpm_pitch_max");
            v120 = *(float *)&v119;
            v121 = Dvar_GetFloat_Internal_DebugName(DVARFLT_fd_helicopter_audio_tail_effort_rpm_pitch_min, "fd_helicopter_audio_tail_effort_rpm_pitch_min");
            v122 = GetAudioBlendCurvePointMinMax(v124, sBlendCurveTailRotorPitchHigh, *(const float *)&v121, v120);
            if ( *(float *)&_XMM7 > 0.001 )
              VehicleAudio_PlaySoundPosition(veh, vehDef->tailRotorOperatingEffortSndLeft, 0, *(float *)&_XMM7, v122, &position);
          }
        }
        LOBYTE(AliasFromId) = 1;
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
char CG_VehicleAudio_UpdateRevAudio(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef)
{
  const centity_t *v5; 
  LocalClientNum_t localClientNum; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  cg_t *v9; 
  cg_t *v10; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  int entityNum; 
  const entityState_t *Entity; 
  char v15; 
  SndAliasList *Alias; 
  unsigned int physicsId; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v23; 
  BgVehiclePhysics *ObjectById; 
  double v25; 
  float v26; 
  __int64 index; 
  const dvar_t *v28; 
  __int128 v32; 
  CgSoundSystem *SoundSystem; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  float v38; 
  int v39; 
  animScriptVehicleSeat_t outVehicleSeat; 
  float outWheelAveSpinSpeed; 
  animScriptVehicleType_t outVehicleType[3]; 
  bool outIsBraking; 
  float v45; 
  float outThrottle; 

  v5 = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1050, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1051, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1052, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !veh->audioState.hasRevPriority )
    return 0;
  localClientNum = veh->localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1062, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler )
    goto LABEL_34;
  v9 = CG_GetLocalClientGlobals(localClientNum);
  v10 = v9;
  if ( !v9 )
    goto LABEL_33;
  clientNum = v9->predictedPlayerState.clientNum;
  if ( v9->IsMP(v9) )
  {
    if ( (unsigned int)clientNum >= v10[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v35) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v35, v10[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v10[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v10, clientNum);
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
    v5 = cent;
LABEL_34:
    v15 = 0;
    goto LABEL_35;
  }
  v5 = cent;
  if ( BG_VehicleOccupancy_GetLinkedVehicle(Handler, Entity, CharacterInfo, outVehicleType, &outVehicleSeat) != cent->nextState.number || (unsigned int)(outVehicleSeat - 1) > 9 )
    goto LABEL_34;
  v15 = 1;
  Alias = SND_TryFindAlias(vehDef->revHighFidelityMod.name);
  if ( Alias )
    goto LABEL_36;
LABEL_35:
  Alias = SND_TryFindAlias(vehDef->revLowFidelityMod.name);
  if ( !Alias )
    return 0;
LABEL_36:
  outIsBraking = 0;
  outThrottle = 0.0;
  outWheelAveSpinSpeed = 0.0;
  BG_Vehicle_UnpackPhysicsParams((const LerpEntityStateVehicle *)&v5->prevState.u, &outThrottle, &outIsBraking, &outWheelAveSpinSpeed);
  _XMM6 = LODWORD(FLOAT_1_0);
  _XMM0 = outIsBraking;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  v37 = 0;
  physicsId = veh->physicsId;
  v39 = _XMM0;
  v45 = 0.0;
  v38 = 0.0;
  if ( !BGVehicles::PhysicsIsValid(physicsId) )
    goto LABEL_42;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v23 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v23, veh->physicsId);
  if ( ObjectById->SupportsFeature(ObjectById, VPFEAT_REV_AUDIO) )
    ObjectById->GetSoundValues(ObjectById, LocalClientGlobals->clientNum, LocalClientGlobals->oldTime, &outThrottle, (float *)&v39, &v45, &v37, &v38);
  if ( v15 || !ObjectById->m_playerControlled || !BgVehiclePhysics::IsDynamic(ObjectById) )
  {
LABEL_42:
    veh->audioState.entOriginForRev.v[0] = veh->audioState.entOrigin.v[0];
    veh->audioState.entOriginForRev.v[1] = veh->audioState.entOrigin.v[1];
    veh->audioState.entOriginForRev.v[2] = veh->audioState.entOrigin.v[2];
  }
  if ( (LODWORD(v38) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1113, ASSERT_TYPE_SANITY, "( !IS_NAN( mph ) )", (const char *)&queryFormat, "!IS_NAN( mph )") )
    __debugbreak();
  if ( (LODWORD(outThrottle) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1114, ASSERT_TYPE_SANITY, "( !IS_NAN( throttle ) )", (const char *)&queryFormat, "!IS_NAN( throttle )") )
    __debugbreak();
  if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1115, ASSERT_TYPE_SANITY, "( !IS_NAN( brake ) )", (const char *)&queryFormat, "!IS_NAN( brake )") )
    __debugbreak();
  if ( (LODWORD(v45) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1116, ASSERT_TYPE_SANITY, "( !IS_NAN( rpmNormal ) )", (const char *)&queryFormat, "!IS_NAN( rpmNormal )") )
    __debugbreak();
  v25 = I_fclamp(v45, 0.0, 1.0);
  v37 = abs32(v37);
  v26 = cl_maxLocalClients;
  v45 = *(float *)&v25;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v36 = cl_maxLocalClients;
    LODWORD(v35) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
    v26 = cl_maxLocalClients;
  }
  if ( v26 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( localClientNum != cls.m_localClientsActive.firstActiveIndex )
  {
    LODWORD(v35) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1120, ASSERT_TYPE_ASSERT, "( cls.IsFirstActiveGameLocalClient( localClientNum ) )", "We only have an array set up for the first local client. %d", v35) )
      __debugbreak();
  }
  if ( veh->index >= 0x80u )
  {
    LODWORD(v36) = 128;
    LODWORD(v35) = veh->index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( veh->index ) < (unsigned)( ( sizeof( *array_counter( s_VehicleAudioDistanceScales ) ) + 0 ) )", "veh->index doesn't index s_VehicleAudioDistanceScales\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  index = veh->index;
  if ( v15 || v38 >= 1.0 || outThrottle != 0.0 || v45 >= 0.1 )
  {
    v32 = LODWORD(s_VehicleAudioDistanceScales[index]);
    *(float *)&v32 = s_VehicleAudioDistanceScales[index] - (float)(veh->animinfo.m_deltaTime * 2.0);
    _XMM2 = v32;
    __asm { vmaxss  xmm2, xmm2, xmm6 }
  }
  else
  {
    v28 = DVARFLT_vehAudio_idleDistanceScale;
    s_VehicleAudioDistanceScales[index] = (float)(veh->animinfo.m_deltaTime * 0.25) + s_VehicleAudioDistanceScales[index];
    Dvar_GetFloat_Internal_DebugName(v28, "vehAudio_idleDistanceScale");
    _XMM1 = LODWORD(s_VehicleAudioDistanceScales[index]);
    __asm { vminss  xmm2, xmm1, xmm0 }
  }
  s_VehicleAudioDistanceScales[index] = *(float *)&_XMM2;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, _DWORD, int, float, float, int, _DWORD))SoundSystem->UpdateVehicleSound)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState.entOriginForRev, Alias, LODWORD(outThrottle), v39, COERCE_FLOAT(LODWORD(v45)), COERCE_FLOAT(LODWORD(v38)), v37, LODWORD(s_VehicleAudioDistanceScales[index]));
  return 1;
}

/*
==============
CG_VehicleAudio_UpdateSounds
==============
*/
void CG_VehicleAudio_UpdateSounds(LocalClientNum_t localClientNum, const centity_t *cent, VehicleClient *veh)
{
  const CgVehicleSystem *VehicleSystem; 
  const VehicleDef *ClientDef; 
  const DObj *EntityDObj; 
  bool v9; 
  scr_string_t audioOriginTag; 
  const XModel *v11; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  float v14; 
  __int128 v15; 
  float v16; 
  unsigned int flags; 
  int spawnTimeDelay; 
  int v21; 
  int time; 
  double v23; 
  float v24; 
  double Float_Internal_DebugName; 
  float v26; 
  float inAirPitch; 
  double v28; 
  double v29; 
  char updated; 
  float v31; 
  float engineRampDownLength; 
  float speedSndBlendSpeed; 
  double v34; 
  __int64 v35; 
  int modelIndex[2]; 
  const XModel *Model; 
  __int64 v38; 
  vec3_t outOrigin; 
  ExtentBounds angles; 
  tmat33_t<vec3_t> outTagMat; 

  v38 = -2i64;
  modelIndex[0] = localClientNum;
  if ( SND_Active() && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1161, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent", *(_QWORD *)modelIndex) )
      __debugbreak();
    if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1162, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
      __debugbreak();
    if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1163, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( veh->entIndex != cent->nextState.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1167, ASSERT_TYPE_ASSERT, "(veh->entIndex == cent->nextState.number)", (const char *)&queryFormat, "veh->entIndex == cent->nextState.number") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(veh);
    EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, cent);
    if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
    {
      Model = DObjGetModel(EntityDObj, 0);
      v9 = 1;
      audioOriginTag = ClientDef->audioOriginTag;
      if ( !audioOriginTag )
        goto LABEL_21;
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      if ( (float)((float)((float)((float)(outOrigin.v[1] - g_activeRefDef->viewOffset.v[1]) * (float)(outOrigin.v[1] - g_activeRefDef->viewOffset.v[1])) + (float)((float)(outOrigin.v[0] - g_activeRefDef->viewOffset.v[0]) * (float)(outOrigin.v[0] - g_activeRefDef->viewOffset.v[0]))) + (float)((float)(outOrigin.v[2] - g_activeRefDef->viewOffset.v[2]) * (float)(outOrigin.v[2] - g_activeRefDef->viewOffset.v[2]))) < 160000.0 && DObjGetBoneIndexInternal_61(EntityDObj, audioOriginTag, &veh->audioState.audioOriginTagBoneIndex, &modelIndex[1]) )
        v9 = CG_DObjGetWorldBoneMatrix(&cent->pose, EntityDObj, veh->audioState.audioOriginTagBoneIndex, &outTagMat, &veh->audioState.entOrigin) == 0;
      memset(&outOrigin, 0, sizeof(outOrigin));
      if ( v9 )
      {
LABEL_21:
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        v11 = Model;
        veh->audioState.entOrigin.v[0] = outOrigin.v[0] + Model->bounds.midPoint.v[0];
        veh->audioState.entOrigin.v[1] = outOrigin.v[1] + v11->bounds.midPoint.v[1];
        veh->audioState.entOrigin.v[2] = outOrigin.v[2] + v11->bounds.midPoint.v[2];
        *(_QWORD *)angles.mins.v = *(_QWORD *)cent->pose.angles.v;
        angles.mins.v[2] = cent->pose.angles.v[2];
        AnglesToAxis(&angles.mins, &outTagMat);
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      if ( BGVehicles::PhysicsIsValid(veh->physicsId) )
      {
        v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(&VehicleSystem->BGVehicles);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, veh->physicsId);
        if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1215, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
          __debugbreak();
        VehicleAudio_GetVehicleAndTurretExtentBounds((const LocalClientNum_t)modelIndex[0], ObjectById, &angles);
        v14 = (float)(angles.maxs.v[1] + angles.mins.v[1]) * 0.5;
        v15 = LODWORD(angles.maxs.v[2]);
        v16 = (float)(angles.maxs.v[2] + angles.mins.v[2]) * 0.5;
        *(float *)&v15 = v16 - angles.mins.v[2];
        _XMM3 = v15;
        __asm { vmaxss  xmm1, xmm3, xmm0 }
        veh->audioState.entOrigin.v[0] = (float)((float)(*(float *)&_XMM1 + 5.0) * ObjectById->m_transform.m[2].v[0]) + (float)((float)(angles.maxs.v[0] + angles.mins.v[0]) * 0.5);
        veh->audioState.entOrigin.v[1] = (float)((float)(*(float *)&_XMM1 + 5.0) * ObjectById->m_transform.m[2].v[1]) + v14;
        veh->audioState.entOrigin.v[2] = (float)((float)(*(float *)&_XMM1 + 5.0) * ObjectById->m_transform.m[2].v[2]) + v16;
      }
      flags = veh->flags;
      veh->audioState.throttle = (flags & 0xC) == 4;
      spawnTimeDelay = veh->audioState.spawnTimeDelay;
      v21 = spawnTimeDelay + veh->audioState.spawnTime;
      if ( spawnTimeDelay <= 0 || (time = veh->time, time >= v21) )
      {
        veh->audioState.spawnVolumeScale = 1.0;
      }
      else
      {
        v23 = I_fclamp((float)(v21 - time) / (float)spawnTimeDelay, 0.0, 1.0);
        veh->audioState.spawnVolumeScale = 1.0 - *(float *)&v23;
        flags = veh->flags;
      }
      if ( (flags & 2) != 0 && veh->audioState.throttle )
      {
        v24 = (float)veh->frameTime * 0.001;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehAudio_inAirPitchUpLerp, "vehAudio_inAirPitchUpLerp");
        v26 = *(float *)&Float_Internal_DebugName;
        inAirPitch = ClientDef->inAirPitch;
      }
      else
      {
        v24 = (float)veh->frameTime * 0.001;
        v28 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehAudio_inAirPitchDownLerp, "vehAudio_inAirPitchDownLerp");
        v26 = *(float *)&v28;
        inAirPitch = FLOAT_1_0;
      }
      v29 = LinearTrack(inAirPitch, veh->audioState.inAirPitch, v26, v24);
      veh->audioState.inAirPitch = *(float *)&v29;
      if ( ClientDef->useRevAudioSettings )
      {
        if ( (!ClientDef->revLowFidelityMod.name || !ClientDef->revHighFidelityMod.name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1241, ASSERT_TYPE_ASSERT, "(vehDef->revLowFidelityMod.name && vehDef->revHighFidelityMod.name)", (const char *)&queryFormat, "vehDef->revLowFidelityMod.name && vehDef->revHighFidelityMod.name") )
          __debugbreak();
        updated = CG_VehicleAudio_UpdateRevAudio(cent, veh, ClientDef);
      }
      else
      {
        updated = CG_VehicleAudio_UpdateNonRevAudio(cent, veh, ClientDef, &outTagMat);
      }
      if ( !updated )
      {
        switch ( veh->audioState.engineState )
        {
          case VEH_ENGINE_STATE_OFF:
            if ( (veh->flags & 0x20) == 0 )
            {
              veh->audioState.engineState = VEH_ENGINE_STATE_STARTUP;
              if ( !ClientDef->engineStartUpSnd.name )
                goto LABEL_49;
              veh->audioState.stateTime = ClientDef->engineStartUpLength + veh->time;
              VehicleAudio_PlaySound(veh, ClientDef->engineStartUpSnd, 0, 1.0, 1.0);
            }
            break;
          case VEH_ENGINE_STATE_STARTUP:
            if ( veh->audioState.stateTime <= veh->time )
              goto LABEL_49;
            break;
          case VEH_ENGINE_STATE_IDLE:
            if ( ClientDef->engineIdleSnd.name )
              VehicleAudio_PlaySound(veh, ClientDef->engineIdleSnd, 0, 1.0, 1.0);
            if ( (veh->flags & 0x20) != 0 )
            {
              veh->audioState.engineState = VEH_ENGINE_STATE_OFF;
              if ( ClientDef->engineShutdownSnd.name )
                VehicleAudio_PlaySound(veh, ClientDef->engineShutdownSnd, 0, 1.0, 1.0);
            }
            else if ( veh->audioState.throttle )
            {
              VehicleAudio_EngineRampUp_Start(veh, ClientDef, 0.0);
            }
            break;
          case VEH_ENGINE_STATE_RAMPUP:
            VehicleAudio_EngineRampUp(veh, ClientDef);
            break;
          case VEH_ENGINE_STATE_SUSTAIN:
            if ( ClientDef->engineSustainSnd.name )
              VehicleAudio_PlaySound(veh, ClientDef->engineSustainSnd, 0, 1.0, veh->audioState.inAirPitch);
            if ( !veh->audioState.throttle )
              VehicleAudio_EngineRampDown_Start(veh, ClientDef, 0.0);
            break;
          case VEH_ENGINE_STATE_RAMPDOWN:
            if ( !ClientDef->engineRampDownSnd.name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 478, ASSERT_TYPE_ASSERT, "(vehDef->engineRampDownSnd.name)", (const char *)&queryFormat, "vehDef->engineRampDownSnd.name") )
              __debugbreak();
            if ( veh->audioState.engineRampDownTime <= veh->time )
            {
LABEL_49:
              VehicleAudio_EngineIdle_Start(veh, ClientDef);
            }
            else if ( veh->audioState.throttle )
            {
              if ( ClientDef->engineRampDownLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 488, ASSERT_TYPE_ASSERT, "(vehDef->engineRampDownLength > 0)", (const char *)&queryFormat, "vehDef->engineRampDownLength > 0") )
                __debugbreak();
              v31 = (float)(veh->audioState.engineRampDownTime - veh->time);
              engineRampDownLength = (float)ClientDef->engineRampDownLength;
              VehicleAudio_StopSound(veh, ClientDef->engineRampDownSnd);
              VehicleAudio_EngineRampUp_Start(veh, ClientDef, v31 / engineRampDownLength);
            }
            break;
          default:
            LODWORD(v35) = veh->audioState.engineState;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 1278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleAudio_UpdateSounds: Invalid audio state %d\n", v35) )
              __debugbreak();
            break;
        }
        VehicleAudio_PlayEngineBlendSounds(veh, ClientDef);
      }
      if ( BGVehicles::PhysicsIsValid(veh->physicsId) )
        goto LABEL_83;
      if ( ClientDef->speedSnd.name )
      {
        speedSndBlendSpeed = ClientDef->speedSndBlendSpeed;
        if ( speedSndBlendSpeed <= 0.0 )
        {
          if ( veh->audioState.engineState )
          {
            *(float *)&v34 = FLOAT_1_0;
LABEL_81:
            VehicleAudio_PlaySound(veh, ClientDef->speedSnd, 0, *(float *)&v34, 1.0);
          }
        }
        else
        {
          v34 = I_fclamp(COERCE_FLOAT(LODWORD(veh->localSpeed.v[0]) & _xmm) / speedSndBlendSpeed, 0.0, 1.0);
          if ( *(float *)&v34 > 0.0 )
            goto LABEL_81;
        }
      }
      VehicleAudio_PlaySurfaceSounds(cent, veh, ClientDef);
LABEL_83:
      VehicleAudio_PlayTurretSounds(cent, veh, ClientDef);
    }
  }
}

/*
==============
GetAudioBlendCurvePointMinMax
==============
*/
float GetAudioBlendCurvePointMinMax(float value, const float *blendCurve, const float minVal, const float maxVal)
{
  int v4; 
  double v6; 

  v4 = (int)(float)(value * 4.0);
  if ( v4 > 3 )
    v4 = 3;
  if ( v4 < 0 )
    v4 = 0;
  if ( blendCurve[5] <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 693, ASSERT_TYPE_ASSERT, "(blendCurve[HFD_AUDIO_MAX_BLEND_POINTS_PLUS_TWO - 1] > 0.001f)", (const char *)&queryFormat, "blendCurve[HFD_AUDIO_MAX_BLEND_POINTS_PLUS_TWO - 1] > EQUAL_EPSILON") )
    __debugbreak();
  v6 = I_fclamp((float)((float)((float)(1.0 - (float)((float)(value * 4.0) - (float)v4)) * blendCurve[v4]) + (float)((float)((float)(value * 4.0) - (float)v4) * blendCurve[v4 + 1])) / blendCurve[5], 0.0, 1.0);
  return (float)((float)(1.0 - *(float *)&v6) * minVal) + (float)(*(float *)&v6 * maxVal);
}

/*
==============
VehicleAudio_EngineIdle_Start
==============
*/
void VehicleAudio_EngineIdle_Start(VehicleClient *veh, const VehicleDef *vehDef)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 312, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 313, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  veh->audioState.engineState = VEH_ENGINE_STATE_IDLE;
  if ( vehDef->engineIdleSnd.name )
    VehicleAudio_PlaySound(veh, vehDef->engineIdleSnd, 0, 1.0, 1.0);
}

/*
==============
VehicleAudio_EngineRampDown_Start
==============
*/
void VehicleAudio_EngineRampDown_Start(VehicleClient *veh, const VehicleDef *vehDef, float frac)
{
  int time; 
  float engineRampDownLength; 
  float v9; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 452, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 453, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( frac < 0.0 || frac > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 454, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frac ) && ( frac ) <= ( 1.0f )", "frac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", frac, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( vehDef->engineRampDownSnd.name )
  {
    time = veh->time;
    engineRampDownLength = (float)vehDef->engineRampDownLength;
    veh->audioState.engineState = VEH_ENGINE_STATE_RAMPDOWN;
    v9 = engineRampDownLength * frac;
    veh->audioState.engineRampDownTime = vehDef->engineRampDownLength + time - (int)v9;
    VehicleAudio_PlaySound(veh, vehDef->engineRampDownSnd, (int)v9, 1.0, 1.0);
  }
  else
  {
    VehicleAudio_EngineIdle_Start(veh, vehDef);
  }
}

/*
==============
VehicleAudio_EngineRampUp
==============
*/
void VehicleAudio_EngineRampUp(VehicleClient *veh, const VehicleDef *vehDef)
{
  float v4; 
  int v5; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 381, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 382, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !vehDef->engineRampUpSnd.name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 383, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpSnd.name)", (const char *)&queryFormat, "vehDef->engineRampUpSnd.name") )
    __debugbreak();
  if ( veh->audioState.engineRampUpTime > veh->time )
  {
    if ( veh->audioState.throttle )
    {
      if ( (veh->flags & 2) != 0 && vehDef->engineSustainSnd.name )
      {
        if ( !veh->audioState.engineRampUpDelay )
        {
          if ( vehDef->engineRampUpLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 405, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpLength > 0)", (const char *)&queryFormat, "vehDef->engineRampUpLength > 0") )
            __debugbreak();
          v5 = veh->audioState.engineRampUpTime - veh->time;
          veh->audioState.engineRampUpDelay = 1;
          veh->audioState.engineRampUpDelayFrac = 1.0 - (float)((float)v5 / (float)vehDef->engineRampUpLength);
          VehicleAudio_StopSound(veh, vehDef->engineRampUpSnd);
        }
        VehicleAudio_PlaySound(veh, vehDef->engineSustainSnd, 0, 1.0, veh->audioState.inAirPitch);
        veh->audioState.engineRampUpTime += veh->frameTime;
      }
      else if ( veh->audioState.engineRampUpDelay )
      {
        VehicleAudio_EngineRampUp_Start(veh, vehDef, veh->audioState.engineRampUpDelayFrac);
      }
    }
    else
    {
      if ( vehDef->engineRampUpLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 393, ASSERT_TYPE_ASSERT, "(vehDef->engineRampUpLength > 0)", (const char *)&queryFormat, "vehDef->engineRampUpLength > 0") )
        __debugbreak();
      v4 = (float)(veh->audioState.engineRampUpTime - veh->time) / (float)vehDef->engineRampUpLength;
      VehicleAudio_StopSound(veh, vehDef->engineRampUpSnd);
      VehicleAudio_EngineRampDown_Start(veh, vehDef, v4);
    }
  }
  else
  {
    VehicleAudio_EngineSustain_Start(veh, vehDef);
  }
}

/*
==============
VehicleAudio_EngineRampUp_Start
==============
*/
void VehicleAudio_EngineRampUp_Start(VehicleClient *veh, const VehicleDef *vehDef, float frac)
{
  int v7; 
  int v8; 
  bool v9; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 345, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 346, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( frac < 0.0 || frac > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 347, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( frac ) && ( frac ) <= ( 1.0f )", "frac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", frac, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( vehDef->engineRampUpSnd.name )
  {
    v7 = (int)(float)((float)vehDef->engineRampUpLength * frac);
    v8 = veh->time - v7;
    veh->audioState.engineState = VEH_ENGINE_STATE_RAMPUP;
    v9 = (veh->flags & 2) == 0;
    veh->audioState.engineRampUpTime = vehDef->engineRampUpLength + v8;
    if ( v9 || !vehDef->engineSustainSnd.name )
    {
      VehicleAudio_PlaySound(veh, vehDef->engineRampUpSnd, v7, 1.0, 1.0);
      veh->audioState.engineRampUpDelay = 0;
      veh->audioState.engineRampUpDelayFrac = 0.0;
    }
    else
    {
      VehicleAudio_PlaySound(veh, vehDef->engineSustainSnd, 0, 1.0, veh->audioState.inAirPitch);
      veh->audioState.engineRampUpDelayFrac = frac;
      veh->audioState.engineRampUpDelay = 1;
    }
  }
  else
  {
    VehicleAudio_EngineSustain_Start(veh, vehDef);
  }
}

/*
==============
VehicleAudio_EngineSustain_Start
==============
*/
void VehicleAudio_EngineSustain_Start(VehicleClient *veh, const VehicleDef *vehDef)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 425, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 426, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  veh->audioState.engineState = VEH_ENGINE_STATE_SUSTAIN;
  if ( vehDef->engineSustainSnd.name )
    VehicleAudio_PlaySound(veh, vehDef->engineSustainSnd, 0, 1.0, veh->audioState.inAirPitch);
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
  const DObj *v9; 
  float v10; 
  float v11; 
  float v12; 
  const centity_t *TurretEnt; 
  const cpose_t *p_pose; 
  int number; 
  const DObj *v17; 
  const DObj *v18; 
  __int128 v19; 
  vec3_t outOrigin; 
  __int64 v22; 
  Bounds bounds; 
  Bounds v24; 

  v22 = -2i64;
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
  v9 = DObj_General;
  if ( CgVehicleSystem::IsDobjValidForVehicle(DObj_General) )
  {
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 938, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    DObjGetVisibleBounds(v9, &bounds);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    bounds.midPoint.v[0] = outOrigin.v[0] + bounds.midPoint.v[0];
    v10 = bounds.midPoint.v[0];
    bounds.midPoint.v[1] = outOrigin.v[1] + bounds.midPoint.v[1];
    v11 = bounds.midPoint.v[1];
    bounds.midPoint.v[2] = outOrigin.v[2] + bounds.midPoint.v[2];
    v12 = bounds.midPoint.v[2];
    memset(&outOrigin, 0, sizeof(outOrigin));
    outExtBounds->mins.v[0] = bounds.midPoint.v[0] - bounds.halfSize.v[0];
    outExtBounds->mins.v[1] = v11 - bounds.halfSize.v[1];
    outExtBounds->mins.v[2] = v12 - bounds.halfSize.v[2];
    outExtBounds->maxs.v[0] = v10 + bounds.halfSize.v[0];
    outExtBounds->maxs.v[1] = v11 + bounds.halfSize.v[1];
    outExtBounds->maxs.v[2] = v12 + bounds.halfSize.v[2];
    if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_GROUND_VEHICLE) && vehObj->m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
      outExtBounds->maxs.v[2] = outExtBounds->maxs.v[2] + 30.0;
    if ( vehObj->SupportsFeature((BgVehiclePhysics *)vehObj, VPFEAT_HAS_TURRET) )
    {
      _XMM6 = 0i64;
      TurretEnt = CG_Turret_GetTurretEnt(localClientNum);
      p_pose = &TurretEnt->pose;
      if ( TurretEnt )
      {
        number = TurretEnt->nextState.number;
        v17 = EntitySystem->IsMP(EntitySystem) ? CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, number, NULL) : Com_GetClientDObj(number, EntitySystem->m_localClientNum);
        v18 = v17;
        if ( CgVehicleSystem::IsDobjValidForVehicle(v17) )
        {
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 973, ASSERT_TYPE_ASSERT, "(turretDObj)", (const char *)&queryFormat, "turretDObj") )
            __debugbreak();
          DObjGetVisibleBounds(v18, &v24);
          CG_GetPoseOrigin(p_pose, &outOrigin);
          v19 = LODWORD(outOrigin.v[2]);
          *(float *)&v19 = (float)((float)(outOrigin.v[2] + v24.midPoint.v[2]) + v24.halfSize.v[2]) - outExtBounds->maxs.v[2];
          _XMM6 = v19;
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
      __asm { vmaxss  xmm0, xmm6, cs:__real@42700000 }
      outExtBounds->maxs.v[2] = *(float *)&_XMM0 + outExtBounds->maxs.v[2];
    }
  }
  else
  {
    outExtBounds->mins.v[0] = -1.0;
    outExtBounds->mins.v[1] = -1.0;
    outExtBounds->mins.v[2] = -1.0;
    outExtBounds->maxs.v[0] = 1.0;
    outExtBounds->maxs.v[1] = 1.0;
    outExtBounds->maxs.v[2] = 1.0;
  }
}

/*
==============
VehicleAudio_PlayBlendedSound
==============
*/
void VehicleAudio_PlayBlendedSound(const VehicleClient *veh, SndAliasLookup aliasLookup0, SndAliasLookup aliasLookup1, SndAliasLookup fallbackAliasLookup0, SndAliasLookup fallbackAliasLookup1, float lerp, float volumeScale, float pitch)
{
  float v12; 
  SndAliasList *Alias; 
  SndAliasList *v14; 
  CgSoundSystem *SoundSystem; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 194, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v12 = volumeScale;
  if ( volumeScale != 0.0 )
  {
    Alias = SND_TryFindAlias(aliasLookup0.name);
    if ( Alias || fallbackAliasLookup0.name && (Alias = SND_FindAlias(fallbackAliasLookup0.name)) != NULL )
    {
      if ( (Alias->head->flags & 1) == 0 || (v12 = volumeScale * veh->audioState.spawnVolumeScale, v12 != 0.0) )
      {
        v14 = SND_TryFindAlias(aliasLookup1.name);
        if ( v14 || fallbackAliasLookup1.name && (v14 = SND_FindAlias(fallbackAliasLookup1.name)) != NULL )
        {
          if ( (LODWORD(lerp) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 231, ASSERT_TYPE_SANITY, "( !IS_NAN( lerp ) )", (const char *)&queryFormat, "!IS_NAN( lerp )") )
            __debugbreak();
          if ( (LODWORD(v12) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 232, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
            __debugbreak();
          if ( (LODWORD(pitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 233, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
            __debugbreak();
          SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, SndAliasList *, _DWORD, float, _DWORD))SoundSystem->PlayBlendedSoundAliasAsync)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState, Alias, v14, LODWORD(lerp), COERCE_FLOAT(LODWORD(v12)), LODWORD(pitch));
        }
      }
    }
  }
}

/*
==============
VehicleAudio_PlayEngineBlendSounds
==============
*/
void VehicleAudio_PlayEngineBlendSounds(const VehicleClient *veh, const VehicleDef *vehDef)
{
  float engineSndSpeed; 
  double v5; 
  __int128 lerp; 
  float rotRate; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 502, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 503, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( veh->audioState.engineState > (unsigned int)VEH_ENGINE_STATE_STARTUP )
  {
    engineSndSpeed = vehDef->engineSndSpeed;
    if ( engineSndSpeed < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 509, ASSERT_TYPE_ASSERT, "(engineSpeed >= 0.001f)", "%s\n\tengineSpeed (%f) < EQUAL_EPSILON (%f) will result eventually in NaN's due to a divide by zero on the following line of code.", "engineSpeed >= EQUAL_EPSILON", engineSndSpeed, DOUBLE_0_001000000047497451) )
      __debugbreak();
    v5 = I_fclamp(COERCE_FLOAT(LODWORD(veh->localSpeed.v[0]) & _xmm) / engineSndSpeed, 0.0, 1.0);
    LODWORD(lerp) = LODWORD(v5);
    if ( vehDef->type == VEH_TREADED )
    {
      rotRate = vehDef->rotRate;
      if ( rotRate > 0.0 )
      {
        *((_QWORD *)&_XMM0 + 1) = (LODWORD(veh->rotateSpeed.v[1]) & (unsigned __int128)_xmm) >> 64;
        *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(LODWORD(veh->rotateSpeed.v[1]) & _xmm) / rotRate, 0.0, 1.0);
        __asm { vmaxss  xmm8, xmm0, xmm8 }
      }
    }
    if ( vehDef->idleLowSnd.name && vehDef->idleHighSnd.name || vehDef->fallbackIdleLowSnd.name && vehDef->fallbackIdleHighSnd.name )
      VehicleAudio_PlayBlendedSound(veh, vehDef->idleLowSnd, vehDef->idleHighSnd, vehDef->fallbackIdleLowSnd, vehDef->fallbackIdleHighSnd, 1.0 - *(float *)&lerp, 1.0, 1.0);
    if ( vehDef->engineLowSnd.name && vehDef->engineHighSnd.name || vehDef->fallbackEngineLowSnd.name && vehDef->fallbackEngineHighSnd.name )
      VehicleAudio_PlayBlendedSound(veh, vehDef->engineLowSnd, vehDef->engineHighSnd, vehDef->fallbackEngineLowSnd, vehDef->fallbackEngineHighSnd, *(float *)&lerp, 1.0, 1.0);
  }
}

/*
==============
VehicleAudio_PlaySound
==============
*/
void VehicleAudio_PlaySound(const VehicleClient *veh, SndAliasLookup aliasLookup, int timeShift, float volumeScale, float pitch)
{
  float v8; 
  SndAliasList *Alias; 
  SndAliasList *v10; 
  CgSoundSystem *SoundSystem; 

  v8 = volumeScale;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 126, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( volumeScale != 0.0 )
  {
    Alias = SND_FindAlias(aliasLookup.name);
    v10 = Alias;
    if ( Alias )
    {
      if ( (Alias->head->flags & 1) == 0 || (v8 = volumeScale * veh->audioState.spawnVolumeScale, v8 != 0.0) )
      {
        if ( (LODWORD(v8) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 149, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
          __debugbreak();
        if ( (LODWORD(pitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 150, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
          __debugbreak();
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, float, _DWORD, int))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState, v10, COERCE_FLOAT(LODWORD(v8)), LODWORD(pitch), timeShift);
      }
    }
  }
}

/*
==============
VehicleAudio_PlaySoundPosition
==============
*/
void VehicleAudio_PlaySoundPosition(const VehicleClient *veh, SndAliasLookup aliasLookup, int timeShift, float volumeScale, float pitch, const vec3_t *position)
{
  float v9; 
  SndAliasList *Alias; 
  SndAliasList *v11; 
  CgSoundSystem *SoundSystem; 

  v9 = volumeScale;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 160, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( volumeScale != 0.0 )
  {
    Alias = SND_FindAlias(aliasLookup.name);
    v11 = Alias;
    if ( Alias )
    {
      if ( (Alias->head->flags & 1) == 0 || (v9 = volumeScale * veh->audioState.spawnVolumeScale, v9 != 0.0) )
      {
        if ( (LODWORD(v9) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 183, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
          __debugbreak();
        if ( (LODWORD(pitch) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( pitch ) )", (const char *)&queryFormat, "!IS_NAN( pitch )") )
          __debugbreak();
        SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
        ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, float, _DWORD, int))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)veh->entIndex, position, v11, COERCE_FLOAT(LODWORD(v9)), LODWORD(pitch), timeShift);
      }
    }
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
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  float v11; 
  int v12; 
  SndAliasList *Alias; 
  SndAliasList *v14; 
  CgSoundSystem *SoundSystem; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 571, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 572, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 573, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  surfaceType = veh->audioState.surfaceType;
  if ( !cent->pose.vehicle.boneUsage )
    surfaceType = cent->pose.vehicle.wheelSurfaceType;
  veh->audioState.surfaceType = surfaceType;
  if ( surfaceType && vehDef->surfaceSndName )
  {
    if ( vehDef->surfaceSndBlendSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 587, ASSERT_TYPE_ASSERT, "(vehDef->surfaceSndBlendSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->surfaceSndBlendSpeed > 0.0f") )
      __debugbreak();
    if ( vehDef->slideBlendSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 588, ASSERT_TYPE_ASSERT, "(vehDef->slideBlendSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->slideBlendSpeed > 0.0f") )
      __debugbreak();
    v7 = I_fclamp(COERCE_FLOAT(LODWORD(veh->localSpeed.v[0]) & _xmm) / vehDef->surfaceSndBlendSpeed, 0.0, 1.0);
    v8 = *(float *)&v7;
    v9 = I_fclamp(COERCE_FLOAT(LODWORD(veh->localSpeed.v[1]) & _xmm) / vehDef->slideBlendSpeed, 0.0, 1.0);
    v11 = v8 + (float)(*(float *)&v9 * vehDef->slideVolume);
    v10 = v11;
    if ( v11 > 0.0 )
    {
      v12 = veh->audioState.surfaceType;
      Alias = SND_FindAlias(vehDef->surfaceSndName);
      v14 = Alias;
      if ( Alias )
      {
        if ( (Alias->head->flags & 1) == 0 || (v10 = v11 * veh->audioState.spawnVolumeScale, v10 != 0.0) )
        {
          if ( (LODWORD(v10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 115, ASSERT_TYPE_SANITY, "( !IS_NAN( volumeScale ) )", (const char *)&queryFormat, "!IS_NAN( volumeScale )") )
            __debugbreak();
          SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)veh->localClientNum);
          ((void (__fastcall *)(CgSoundSystem *, _QWORD, VehicleAudioState *, SndAliasList *, int, float, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)veh->entIndex, &veh->audioState, v14, v12, COERCE_FLOAT(LODWORD(v10)), LODWORD(FLOAT_1_0), 0);
        }
      }
    }
  }
}

/*
==============
VehicleAudio_PlayTurretSounds
==============
*/
void VehicleAudio_PlayTurretSounds(const centity_t *cent, VehicleClient *veh, const VehicleDef *vehDef)
{
  const char *name; 
  const char *v7; 
  __int64 localClientNum; 
  float v9; 
  bool turretMoving; 
  const centity_t *TurretEnt; 
  const centity_t *v12; 
  centity_t *LinkToParent; 
  CgWeaponMap *v14; 
  BgWeaponHandle *p_nextState; 
  const Weapon *Weapon; 
  const char *v17; 
  SndAliasLookup v18; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  char *v25; 
  __int64 v26; 
  float v27; 
  double v28; 
  bool v29; 
  char *fmt; 
  int v34; 
  __int64 v35; 
  char v36[336]; 

  v35 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 609, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 610, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 611, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  name = vehDef->turretSpinSnd.name;
  v7 = vehDef->turretStopSnd.name;
  localClientNum = veh->localClientNum;
  v9 = FLOAT_1_0;
  turretMoving = veh->audioState.turretMoving;
  TurretEnt = CG_Turret_GetTurretEnt((const LocalClientNum_t)veh->localClientNum);
  v12 = TurretEnt;
  if ( TurretEnt && (LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)localClientNum, TurretEnt)) != NULL && LinkToParent->nextState.number == cent->nextState.number )
  {
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v14 = CgWeaponMap::ms_instance[localClientNum];
    p_nextState = (BgWeaponHandle *)&v12->nextState;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v14, p_nextState[33]);
    if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_audio.cpp", 632, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( turretWeap ))", (const char *)&queryFormat, "!BG_IsNullWeapon( turretWeap )") )
      __debugbreak();
    v17 = BG_TurretSpinSound(Weapon, 0).name;
    v18.name = BG_TurretStopSpinSound(Weapon, 0).name;
    if ( v17 )
      name = v17;
    if ( v18.name )
      v7 = v18.name;
    Client = ClActiveClient::GetClient((const LocalClientNum_t)localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v21 = ClActiveClient::GetClient((const LocalClientNum_t)localClientNum);
    v22 = ClActiveClient_GetCmdNumber(v21);
    v23 = v22;
    v34 = v22;
    if ( CmdNumber > v22 )
    {
      LODWORD(fmt) = v22;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber <= v23 - 128 || CmdNumber <= 0 )
    {
      memset(&v34, 0, sizeof(v34));
      return;
    }
    v24 = (__int64)&v21->cmds[CmdNumber & 0x7F];
    memset(&v34, 0, sizeof(v34));
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    v25 = v36;
    v26 = 2i64;
    do
    {
      *(__m256i *)v25 = *(__m256i *)v24;
      *((__m256i *)v25 + 1) = *(__m256i *)(v24 + 32);
      *((__m256i *)v25 + 2) = *(__m256i *)(v24 + 64);
      *((_OWORD *)v25 + 6) = *(_OWORD *)(v24 + 96);
      v25 += 128;
      *((_OWORD *)v25 - 1) = *(_OWORD *)(v24 + 112);
      v24 += 128i64;
      --v26;
    }
    while ( v26 );
    *(_QWORD *)v25 = *(_QWORD *)v24;
    v27 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v36[158] * 0.0078740157) & _xmm), 0.0, 1.0)));
    v28 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v36[159] * 0.0078740157) & _xmm), 0.0, 1.0);
    v9 = fsqrt((float)(v27 * v27) + (float)(*(float *)&v28 * *(float *)&v28));
    v29 = v9 > 0.1;
  }
  else
  {
    _XMM3 = 0i64;
    __asm
    {
      vroundss xmm8, xmm3, xmm2, 1
      vroundss xmm3, xmm3, xmm2, 1
    }
    v29 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(cent->prevState.u.actor.impactVector.v[2] - cent->nextState.lerp.u.actor.impactVector.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) > 0.5 || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(cent->prevState.u.actor.pupilDiameter - cent->nextState.lerp.u.actor.pupilDiameter) * 0.0027777778) - *(float *)&_XMM8) * 360.0) & _xmm) > 0.5;
  }
  veh->audioState.turretMoving = v29;
  if ( name && v29 )
    VehicleAudio_PlaySound(veh, (SndAliasLookup)name, 0, v9, 1.0);
  if ( v7 && turretMoving && !veh->audioState.turretMoving )
    VehicleAudio_PlaySound(veh, (SndAliasLookup)v7, 0, 1.0, 1.0);
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

