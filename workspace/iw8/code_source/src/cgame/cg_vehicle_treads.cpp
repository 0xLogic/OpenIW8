/*
==============
CgVehicleSystem::HasTreadSimulationEnabled
==============
*/

bool __fastcall CgVehicleSystem::HasTreadSimulationEnabled(CgVehicleSystem *this, const centity_t *cent)
{
  return ?HasTreadSimulationEnabled@CgVehicleSystem@@QEAA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::TreadBoneAnimReset
==============
*/

void CgVehicleSystem::TreadBoneAnimReset(void)
{
  ?TreadBoneAnimReset@CgVehicleSystem@@SAXXZ();
}

/*
==============
CgVehicleSystem::TreadBoneAnimDestroyResources
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimDestroyResources(CgVehicleSystem *this, VehicleClient *vehicleClient)
{
  ?TreadBoneAnimDestroyResources@CgVehicleSystem@@QEAAXPEAUVehicleClient@@@Z(this, vehicleClient);
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim
==============
*/

void __fastcall CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ?UpdateWheelsBoneControllers_TreadSim@CgVehicleSystem@@IEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystem::TreadBoneAnimIsRoomForNew
==============
*/

bool __fastcall CgVehicleSystem::TreadBoneAnimIsRoomForNew()
{
  return ?TreadBoneAnimIsRoomForNew@CgVehicleSystem@@SA_NXZ();
}

/*
==============
CgVehicleSystem::TreadBoneAnimDoPose
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimDoPose(CgVehicleSystem *this, unsigned __int16 tbaId, const tmat43_t<vec3_t> *entityToWorld, const DObj *obj, DObjPartBits *partBits)
{
  ?TreadBoneAnimDoPose@CgVehicleSystem@@QEAAXGAEBT?$tmat43_t@Tvec3_t@@@@PEBUDObj@@PEAUDObjPartBits@@@Z(this, tbaId, entityToWorld, obj, partBits);
}

/*
==============
CgVehicleSystem::TreadBoneAnimInitResources
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimInitResources(CgVehicleSystem *this, centity_t *cent, const VehicleDef *vehicleDef)
{
  ?TreadBoneAnimInitResources@CgVehicleSystem@@QEAAXPEAUcentity_t@@PEBUVehicleDef@@@Z(this, cent, vehicleDef);
}

/*
==============
CgVehicleSystem::TreadBoneAnimDestroy
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimDestroy(CgVehicleSystem *this, unsigned __int16 tbaId)
{
  ?TreadBoneAnimDestroy@CgVehicleSystem@@QEAAXG@Z(this, tbaId);
}

/*
==============
CgVehicleSystem::TreadBoneAnimDrawDebug
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimDrawDebug(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent)
{
  ?TreadBoneAnimDrawDebug@CgVehicleSystem@@QEAAXGPEBUcentity_t@@@Z(this, tbaId, cent);
}

/*
==============
CgVehicleSystem::TreadBoneAnimCreate
==============
*/

unsigned __int16 __fastcall CgVehicleSystem::TreadBoneAnimCreate(CgVehicleSystem *this, DObj *obj, const centity_t *entity, int firstTreadBone, unsigned int treadBoneCount)
{
  return ?TreadBoneAnimCreate@CgVehicleSystem@@QEAAGPEAUDObj@@PEBUcentity_t@@HI@Z(this, obj, entity, firstTreadBone, treadBoneCount);
}

/*
==============
CgVehicleSystem::TreadBoneAnimAdvance
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimAdvance(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent, float units, unsigned int cageId, int planeIndex)
{
  ?TreadBoneAnimAdvance@CgVehicleSystem@@QEAAXGPEBUcentity_t@@MIH@Z(this, tbaId, cent, units, cageId, planeIndex);
}

/*
==============
CgVehicleSystem::HasTreadSimulationEnabled
==============
*/
bool CgVehicleSystem::HasTreadSimulationEnabled(CgVehicleSystem *this, const centity_t *cent)
{
  const dvar_t *v2; 
  bool enabled; 
  const VehicleDef *v6; 

  v2 = DCONST_DVARBOOL_bg_vehUseTreadSimulation;
  if ( !DCONST_DVARBOOL_bg_vehUseTreadSimulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehUseTreadSimulation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  if ( dword_1512ECDEC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1512ECDEC);
    if ( dword_1512ECDEC == -1 )
    {
      lastUseTreadsSim = enabled;
      j__Init_thread_footer(&dword_1512ECDEC);
    }
  }
  if ( !lastUseTreadsSim && enabled )
    Com_PrintWarning(20, "Treads: Enabling bg_vehUseTreadSimulation won't take any effect for the current Treaded vehicles");
  lastUseTreadsSim = enabled;
  if ( !enabled )
    return 0;
  v6 = this->GetVehicleDef(this, &cent->nextState);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 401, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  return v6->vehiclePhysicsDef.treads_enabled != 0;
}

/*
==============
TBA_AdvanceBackward
==============
*/

void __fastcall TBA_AdvanceBackward(VehicleTreadAnim *tba, double units)
{
  __int128 v3; 
  float v4; 
  float curIntervalLen; 
  unsigned int curIntervalFirst; 
  __int128 v7; 
  __int128 v8; 
  unsigned int boneCount; 
  bool v10; 
  unsigned int v11; 
  __int128 v12; 

  v3 = *(_OWORD *)&units;
  if ( !tba->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 58, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  if ( *(float *)&units >= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 59, ASSERT_TYPE_ASSERT, "(units < 0.0f)", (const char *)&queryFormat, "units < 0.0f") )
    __debugbreak();
  LODWORD(v4) = LODWORD(units) ^ _xmm;
  curIntervalLen = tba->curIntervalLen;
  curIntervalFirst = tba->curIntervalFirst;
  if ( COERCE_FLOAT(v3 ^ _xmm) > curIntervalLen )
  {
    v8 = v3 ^ _xmm;
    *(float *)&v8 = v4 - curIntervalLen;
    v7 = v8;
    while ( 1 )
    {
      boneCount = curIntervalFirst;
      if ( !curIntervalFirst )
        boneCount = tba->boneCount;
      v10 = *(float *)&v7 < tba->bones[boneCount - 1].len;
      v11 = curIntervalFirst;
      if ( v10 )
        break;
      if ( !curIntervalFirst )
        v11 = tba->boneCount;
      v12 = v7;
      *(float *)&v12 = *(float *)&v7 - tba->bones[v11 - 1].len;
      v7 = v12;
      if ( !curIntervalFirst )
        curIntervalFirst = tba->boneCount;
      --curIntervalFirst;
    }
    if ( !curIntervalFirst )
      v11 = tba->boneCount;
    tba->curIntervalFirst = v11 - 1;
    if ( !curIntervalFirst )
      curIntervalFirst = tba->boneCount;
    tba->curIntervalLen = tba->bones[curIntervalFirst - 1].len - *(float *)&v7;
  }
  else
  {
    tba->curIntervalLen = curIntervalLen - v4;
  }
}

/*
==============
TBA_AdvanceForward
==============
*/

void __fastcall TBA_AdvanceForward(VehicleTreadAnim *tba, double units)
{
  __int128 v3; 
  __int64 curIntervalFirst; 
  float curIntervalLen; 
  float len; 
  unsigned int boneCount; 
  __int128 v8; 

  v3 = *(_OWORD *)&units;
  if ( !tba->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 37, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  if ( *(float *)&units < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 38, ASSERT_TYPE_ASSERT, "(units >= 0.0f)", (const char *)&queryFormat, "units >= 0.0f") )
    __debugbreak();
  curIntervalFirst = tba->curIntervalFirst;
  curIntervalLen = tba->curIntervalLen;
  len = tba->bones[curIntervalFirst].len;
  if ( *(float *)&v3 >= (float)(len - curIntervalLen) )
  {
    boneCount = tba->boneCount;
    do
    {
      tba->curIntervalLen = 0.0;
      LODWORD(curIntervalFirst) = ((int)curIntervalFirst + 1) % boneCount;
      v8 = v3;
      *(float *)&v8 = *(float *)&v3 - (float)(len - curIntervalLen);
      v3 = v8;
      curIntervalLen = 0.0;
      len = tba->bones[(int)curIntervalFirst].len;
    }
    while ( *(float *)&v8 >= len );
  }
  tba->curIntervalLen = curIntervalLen + *(float *)&v3;
  tba->curIntervalFirst = curIntervalFirst;
}

/*
==============
TBA_ComputePitch
==============
*/
float TBA_ComputePitch(unsigned int cageId, int planeIndex, const vec3_t *entityFw, const vec3_t *entityUp, const vec3_t *bonePosWs, const vec3_t *lastBonePosWs)
{
  float v9; 
  float v10; 
  float v13; 
  vec2_t outPoint; 
  vec2_t v16; 

  if ( !cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 103, ASSERT_TYPE_ASSERT, "(cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(cageId, planeIndex, bonePosWs, &outPoint);
  PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(cageId, planeIndex, lastBonePosWs, &v16);
  v9 = outPoint.v[0] - v16.v[0];
  v10 = outPoint.v[1] - v16.v[1];
  _XMM3 = LODWORD(identityMatrix33.m[2].v[2]);
  __asm { vmaxss  xmm2, xmm3, xmm4 }
  v13 = acosf_0((float)((float)(0.0 * entityFw->v[1]) + (float)(0.0 * entityFw->v[0])) + (float)(*(float *)&_XMM2 * entityFw->v[2]));
  return 270.0 - (float)((float)(v13 + atan2f_0(v10, v9)) * 57.295776);
}

/*
==============
CgVehicleSystem::TreadBoneAnimAdvance
==============
*/
void CgVehicleSystem::TreadBoneAnimAdvance(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent, float units, unsigned int cageId, int planeIndex)
{
  _DWORD *v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  float barrelPitch; 
  float v13; 
  __int64 v14; 
  __int128 v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  float *v21; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  float outFrac; 
  float v31; 
  vec3_t v32; 
  __int64 v33; 
  vec3_t out; 
  vec3_t startWs; 
  vec3_t in1; 
  vec3_t endWs; 
  vec3_t lastBonePosWs; 
  tmat43_t<vec3_t> axis; 
  vec3_t bonePosWs; 

  v33 = -2i64;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 202, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  if ( !tbaId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 208, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  v8 = (_DWORD *)((char *)&unk_1512E37EC + 3620 * tbaId);
  v9 = 0;
  v10 = 0i64;
  if ( units < 0.0 )
    v10 = 1i64;
  ((void (__fastcall *)(_DWORD *))s_advanceFunctions[v10])(v8);
  v11 = cageId;
  if ( cageId && planeIndex >= 0 )
  {
    AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
    outFrac = FLOAT_1_0;
    barrelPitch = cent->pose.turret.barrelPitch;
    v13 = barrelPitch + 0.2;
    if ( barrelPitch > (float)(barrelPitch + 0.2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 236, ASSERT_TYPE_ASSERT, "(segLenUp <= segLen)", (const char *)&queryFormat, "segLenUp <= segLen") )
      __debugbreak();
    v14 = (int)v8[900];
    v15 = (unsigned int)v8[901];
    LODWORD(v16) = v8[900];
    CG_GetPoseOrigin(&cent->pose, &v32);
    v17 = axis.m[2].v[0];
    startWs.v[0] = (float)(axis.m[2].v[0] * (float)(barrelPitch + planeIgnoreOffset)) + v32.v[0];
    v18 = axis.m[2].v[1];
    startWs.v[1] = (float)(axis.m[2].v[1] * (float)(barrelPitch + planeIgnoreOffset)) + v32.v[1];
    v19 = axis.m[2].v[2];
    startWs.v[2] = (float)(axis.m[2].v[2] * (float)(barrelPitch + planeIgnoreOffset)) + v32.v[2];
    v31 = (float)((float)(axis.m[2].v[1] * startWs.v[1]) + (float)(axis.m[2].v[0] * startWs.v[0])) + (float)(axis.m[2].v[2] * startWs.v[2]);
    v20 = v8[903];
    if ( v20 )
    {
      v21 = (float *)&v8[9 * v14];
      do
      {
        v16 = (int)((v9 + (unsigned int)v16) % v20);
        if ( ((int)v14 < 0 || (int)v14 >= (int)v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)") )
          __debugbreak();
        if ( *(float *)&v15 > v21[6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
          __debugbreak();
        in1.v[0] = (float)(*(float *)&v15 * v21[3]) + *v21;
        in1.v[1] = (float)(*(float *)&v15 * v21[4]) + v21[1];
        in1.v[2] = (float)(*(float *)&v15 * v21[5]) + v21[2];
        MatrixTransformVector43(&in1, &axis, &out);
        startWs.v[0] = (float)(barrelPitch * axis.m[2].v[0]) + out.v[0];
        startWs.v[1] = (float)(barrelPitch * axis.m[2].v[1]) + out.v[1];
        startWs.v[2] = (float)(barrelPitch * axis.m[2].v[2]) + out.v[2];
        endWs.v[0] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * axis.m[2].v[0]) + startWs.v[0];
        endWs.v[1] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * axis.m[2].v[1]) + startWs.v[1];
        endWs.v[2] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * axis.m[2].v[2]) + startWs.v[2];
        if ( (float)((float)((float)((float)(v18 * endWs.v[1]) + (float)(v17 * endWs.v[0])) + (float)(v19 * endWs.v[2])) - v31) < 0.0 && PhysicsCage_SegmentCastInPlane(v11, &startWs, &endWs, planeIndex, &outFrac) )
          *(float *)&v8[9 * v9 + 7] = (float)((float)(1.0 - outFrac) * v13) + upOffs;
        else
          *(float *)&v8[9 * v9 + 7] = (float)((float)(0.5 * upOffs) + *(float *)&v8[9 * v9 + 7]) * 0.5;
        v22 = DCONST_DVARBOOL_bg_vehTreadPerturb;
        if ( !DCONST_DVARBOOL_bg_vehTreadPerturb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehTreadPerturb") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( v22->current.enabled && outFrac >= perturbThreshold )
        {
          v23 = (float)v9;
          v24 = (float)(unsigned int)(v8[903] - 1);
          *(float *)&v8[9 * v9 + 7] = (float)(sinf_0((float)((float)(v23 / v24) * 6.2831855) * perturbFreq) * perturbAmp) + *(float *)&v8[9 * v9 + 7];
        }
        v25 = *(float *)&v8[9 * v9 + 7];
        out.v[0] = (float)(v25 * axis.m[2].v[0]) + out.v[0];
        out.v[1] = (float)(v25 * axis.m[2].v[1]) + out.v[1];
        out.v[2] = (float)(v25 * axis.m[2].v[2]) + out.v[2];
        v11 = cageId;
        if ( v9 )
          *(float *)&v8[9 * v9 - 1] = TBA_ComputePitch(cageId, 0, axis.m, &axis.m[2], &out, &lastBonePosWs);
        else
          bonePosWs = out;
        v26 = (unsigned int)v8[9 * v16 + 6];
        if ( !v8[903] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
          __debugbreak();
        if ( ((int)v14 < 0 || (int)v14 >= v8[903]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )") )
          __debugbreak();
        v27 = v21[6];
        if ( *(float *)&v26 >= (float)(v27 - *(float *)&v15) )
        {
          do
          {
            v28 = v26;
            *(float *)&v28 = *(float *)&v26 - (float)(v27 - *(float *)&v15);
            v26 = v28;
            v14 = (int)((unsigned int)(v14 + 1) % v8[903]);
            v15 = 0i64;
            v21 = (float *)&v8[9 * v14];
            v27 = v21[6];
          }
          while ( *(float *)&v28 >= v27 );
        }
        v29 = v15;
        *(float *)&v29 = *(float *)&v15 + *(float *)&v26;
        v15 = v29;
        lastBonePosWs = out;
        ++v9;
        v20 = v8[903];
      }
      while ( v9 < v20 );
    }
    *(float *)&v8[9 * (v8[903] - 1) + 8] = TBA_ComputePitch(v11, 0, axis.m, &axis.m[2], &bonePosWs, &lastBonePosWs);
    memset(&v32, 0, sizeof(v32));
  }
}

/*
==============
CgVehicleSystem::TreadBoneAnimCreate
==============
*/
__int64 CgVehicleSystem::TreadBoneAnimCreate(CgVehicleSystem *this, DObj *obj, const centity_t *entity, int firstTreadBone, unsigned int treadBoneCount)
{
  const XModel *Model; 
  const DObjAnimMat *v9; 
  int v10; 
  unsigned __int16 v11; 
  VehicleTreadAnim *v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  float *v; 
  unsigned int v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int16 v27; 
  const DObjAnimMat *BasePose; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 135, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 136, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (unsigned int)firstTreadBone > 0xFD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 137, ASSERT_TYPE_ASSERT, "(firstTreadBone >= 0 && firstTreadBone < 254)", (const char *)&queryFormat, "firstTreadBone >= 0 && firstTreadBone < UNDEFINED_BONEINDEX") )
    __debugbreak();
  if ( treadBoneCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 138, ASSERT_TYPE_ASSERT, "(treadBoneCount <= 100)", (const char *)&queryFormat, "treadBoneCount <= VEHICLE_TREAD_MAX_BONES") )
    __debugbreak();
  if ( (!treadBoneCount || firstTreadBone + treadBoneCount >= 0xFE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 139, ASSERT_TYPE_ASSERT, "(treadBoneCount > 0 && ( static_cast<uint>(firstTreadBone) + treadBoneCount ) < 254)", (const char *)&queryFormat, "treadBoneCount > 0 && ( static_cast<uint>(firstTreadBone) + treadBoneCount ) < UNDEFINED_BONEINDEX") )
    __debugbreak();
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  v9 = BasePose;
  if ( !BasePose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 142, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  v10 = 0;
  while ( CgVehicleSystem::ms_treadAnimations[v10].inUse )
  {
    if ( (unsigned int)++v10 >= 8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 154, ASSERT_TYPE_ASSERT, "(index < (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", "%s\n\tTreadBoneAnimCreate: Not enough room for another Tread Bone Animation", "index < VEHICLE_TREAD_ANIMS_MAX") )
        __debugbreak();
      break;
    }
  }
  v11 = v10 + 1;
  v27 = v10 + 1;
  v12 = &CgVehicleSystem::ms_treadAnimations[v10];
  v12->inUse = 1;
  v12->boneCount = treadBoneCount;
  v12->firstTreadBoneIndex = firstTreadBone;
  *(_QWORD *)&v12->curIntervalFirst = 0i64;
  if ( !treadBoneCount )
    return v11;
  v13 = firstTreadBone;
  v14 = -firstTreadBone;
  do
  {
    v15 = (unsigned int)(v13 + v14);
    if ( v13 >= DObjGetNumBones(obj) )
    {
      LODWORD(v26) = DObjGetNumBones(obj);
      LODWORD(v25) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 170, ASSERT_TYPE_ASSERT, "(static_cast<int>( firstTreadBone + index ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( firstTreadBone + index ) < DObjGetNumBones( obj )", v25, v26) )
        __debugbreak();
    }
    v = v9[v13].quat.v;
    v17 = firstTreadBone + (v13 + 1 - firstTreadBone) % treadBoneCount;
    if ( (int)v17 >= DObjGetNumBones(obj) )
    {
      LODWORD(v26) = DObjGetNumBones(obj);
      LODWORD(v25) = firstTreadBone + (v13 + 1 - firstTreadBone) % treadBoneCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 174, ASSERT_TYPE_ASSERT, "(static_cast<int>( nextBoneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( nextBoneIndex ) < DObjGetNumBones( obj )", v25, v26) )
        __debugbreak();
    }
    v18 = v17;
    v9 = BasePose;
    v18 *= 32i64;
    v19 = *(float *)((char *)BasePose->trans.v + v18) - v[4];
    v20 = *(float *)((char *)&BasePose->trans.v[2] + v18) - v[6];
    v21 = *(float *)((char *)&BasePose->trans.v[1] + v18) - v[5];
    v22 = fsqrt((float)((float)(v21 * v21) + (float)(v19 * v19)) + (float)(v20 * v20));
    v12->bones[v15].len = v22;
    if ( v22 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 179, ASSERT_TYPE_ASSERT, "(tbi.len > 0.001f)", (const char *)&queryFormat, "tbi.len > EQUAL_EPSILON") )
      __debugbreak();
    v23 = 1.0 / v12->bones[v15].len;
    v14 = -firstTreadBone;
    ++v13;
    v12->bones[v15].dir.v[0] = v19 * v23;
    v12->bones[v15].dir.v[2] = v20 * v23;
    v12->bones[v15].dir.v[1] = v21 * v23;
    v12->bones[v15].pos.v[0] = v[4];
    v12->bones[v15].pos.v[1] = v[5];
    v12->bones[v15].pos.v[2] = v[6];
  }
  while ( v13 - firstTreadBone < treadBoneCount );
  return v27;
}

/*
==============
CgVehicleSystem::TreadBoneAnimDestroy
==============
*/
void CgVehicleSystem::TreadBoneAnimDestroy(CgVehicleSystem *this, unsigned __int16 tbaId)
{
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 190, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  if ( !tbaId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 193, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  CgVehicleSystem::ms_treadAnimations[tbaId - 1].inUse = 0;
}

/*
==============
CgVehicleSystem::TreadBoneAnimDestroyResources
==============
*/
void CgVehicleSystem::TreadBoneAnimDestroyResources(CgVehicleSystem *this, VehicleClient *vehicleClient)
{
  unsigned int cageId; 
  unsigned __int16 *tbaAnimIds; 
  __int64 v5; 
  unsigned __int16 v6; 

  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 798, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 799, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  cageId = vehicleClient->treadAnimInfo.cageId;
  if ( cageId )
  {
    PhysicsCage_Destroy(cageId);
    vehicleClient->treadAnimInfo.cageId = 0;
  }
  tbaAnimIds = vehicleClient->treadAnimInfo.tbaAnimIds;
  v5 = 2i64;
  do
  {
    v6 = *tbaAnimIds;
    if ( *tbaAnimIds )
    {
      if ( v6 > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 190, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
        __debugbreak();
      CgVehicleSystem::ms_treadAnimations[v6 - 1].inUse = 0;
      *tbaAnimIds = 0;
    }
    ++tbaAnimIds;
    --v5;
  }
  while ( v5 );
}

/*
==============
CgVehicleSystem::TreadBoneAnimDoPose
==============
*/
void CgVehicleSystem::TreadBoneAnimDoPose(CgVehicleSystem *this, unsigned __int16 tbaId, const tmat43_t<vec3_t> *entityToWorld, const DObj *obj, DObjPartBits *partBits)
{
  __int64 v5; 
  __int64 v6; 
  VehicleTreadAnim *v7; 
  __int64 curIntervalFirst; 
  __int64 v9; 
  unsigned int boneCount; 
  int v11; 
  int firstTreadBoneIndex; 
  __int128 curIntervalLen_low; 
  __int64 v14; 
  float *p_len; 
  float v16; 
  float v17; 
  float upDisp; 
  float v19; 
  float v20; 
  float v21; 
  float pitch; 
  __int128 v23; 
  float v24; 
  __int128 v25; 
  __int128 v26; 
  signed int v27; 
  vec3_t angles; 
  vec3_t trans; 

  LOWORD(v5) = tbaId;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 297, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  v5 = (unsigned __int16)v5;
  if ( !(_WORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 300, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  v6 = v5;
  v7 = &CgVehicleSystem::ms_treadAnimations[v5 - 1];
  if ( !CgVehicleSystem::ms_treadAnimations[v5 - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 302, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  curIntervalFirst = CgVehicleSystem::ms_treadAnimations[v6 - 1].curIntervalFirst;
  v9 = 0i64;
  boneCount = CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount;
  v11 = CgVehicleSystem::ms_treadAnimations[v6 - 1].curIntervalFirst;
  firstTreadBoneIndex = CgVehicleSystem::ms_treadAnimations[v6 - 1].firstTreadBoneIndex;
  curIntervalLen_low = LODWORD(CgVehicleSystem::ms_treadAnimations[v6 - 1].curIntervalLen);
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  if ( boneCount )
  {
    v14 = 9 * curIntervalFirst;
    p_len = &CgVehicleSystem::ms_treadAnimations[v6 - 1].bones[0].len;
    do
    {
      v27 = ((int)v9 + v11) % boneCount;
      if ( DObjSetRotTransIndex(obj, partBits, firstTreadBoneIndex) )
      {
        if ( ((int)curIntervalFirst < 0 || (int)curIntervalFirst >= (signed int)CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)") )
          __debugbreak();
        if ( *(float *)&curIntervalLen_low > v7->bones[(unsigned __int64)v14 / 9].len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
          __debugbreak();
        v16 = v7->bones[(unsigned __int64)v14 / 9].dir.v[2];
        v17 = v7->bones[(unsigned __int64)v14 / 9].pos.v[2];
        upDisp = v7->bones[v9].upDisp;
        v19 = (float)((float)(*(float *)&curIntervalLen_low * v7->bones[(unsigned __int64)v14 / 9].dir.v[1]) + v7->bones[(unsigned __int64)v14 / 9].pos.v[1]) + (float)(upDisp * entityToWorld->m[2].v[1]);
        trans.v[0] = (float)((float)((float)(*(float *)&curIntervalLen_low * v7->bones[(unsigned __int64)v14 / 9].dir.v[0]) + v7->bones[(unsigned __int64)v14 / 9].pos.v[0]) + (float)(upDisp * entityToWorld->m[2].v[0])) - v7->bones[v9].pos.v[0];
        v20 = v19 - v7->bones[v9].pos.v[1];
        v21 = (float)((float)(*(float *)&curIntervalLen_low * v16) + v17) + (float)(upDisp * entityToWorld->m[2].v[2]);
        pitch = v7->bones[v9].pitch;
        trans.v[1] = v20;
        trans.v[2] = v21 - v7->bones[v9].pos.v[2];
        angles.v[0] = pitch;
        DObjSetLocalTagInternal(obj, &trans, &angles, firstTreadBoneIndex);
      }
      v23 = LODWORD(p_len[9 * v27]);
      if ( !CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
        __debugbreak();
      if ( ((int)curIntervalFirst < 0 || (int)curIntervalFirst >= (signed int)CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )") )
        __debugbreak();
      v24 = p_len[v14];
      if ( *(float *)&v23 >= (float)(v24 - *(float *)&curIntervalLen_low) )
      {
        do
        {
          curIntervalFirst = (int)((unsigned int)(curIntervalFirst + 1) % CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount);
          v25 = v23;
          *(float *)&v25 = *(float *)&v23 - (float)(v24 - *(float *)&curIntervalLen_low);
          v23 = v25;
          curIntervalLen_low = 0i64;
          v14 = 9 * curIntervalFirst;
          v24 = p_len[9 * curIntervalFirst];
        }
        while ( *(float *)&v25 >= v24 );
      }
      boneCount = CgVehicleSystem::ms_treadAnimations[v6 - 1].boneCount;
      v9 = (unsigned int)(v9 + 1);
      v11 = v27;
      ++firstTreadBoneIndex;
      v26 = curIntervalLen_low;
      *(float *)&v26 = *(float *)&curIntervalLen_low + *(float *)&v23;
      curIntervalLen_low = v26;
    }
    while ( (unsigned int)v9 < boneCount );
  }
}

/*
==============
CgVehicleSystem::TreadBoneAnimDrawDebug
==============
*/
void CgVehicleSystem::TreadBoneAnimDrawDebug(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent)
{
  __int64 v3; 
  VehicleTreadAnim *v5; 
  unsigned int i; 
  __int64 curIntervalFirst; 
  unsigned int v8; 
  unsigned int boneCount; 
  __int64 v10; 
  __int128 curIntervalLen_low; 
  float *v; 
  float upDisp; 
  __int128 len_low; 
  float len; 
  __int128 v16; 
  __int128 v17; 
  vec3_t out; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 

  LOWORD(v3) = tbaId;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 336, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  v3 = (unsigned __int16)v3;
  if ( !(_WORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 339, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  v5 = &CgVehicleSystem::ms_treadAnimations[v3 - 1];
  if ( !CgVehicleSystem::ms_treadAnimations[v3 - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 341, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  if ( drawOriginalPos )
  {
    for ( i = 0; i < v5->boneCount; ++i )
    {
      MatrixTransformVector43(&v5->bones[i].pos, &axis, &out);
      CG_DebugSphere(&out, 0.25, &colorCyan, 0, 0);
    }
  }
  curIntervalFirst = v5->curIntervalFirst;
  v8 = 0;
  boneCount = v5->boneCount;
  LODWORD(v10) = v5->curIntervalFirst;
  curIntervalLen_low = LODWORD(v5->curIntervalLen);
  if ( boneCount )
  {
    v = v5->bones[curIntervalFirst].pos.v;
    do
    {
      v10 = (int)((v8 + (unsigned int)v10) % boneCount);
      if ( ((int)curIntervalFirst < 0 || (int)curIntervalFirst >= (int)boneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)") )
        __debugbreak();
      if ( *(float *)&curIntervalLen_low > v[6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
        __debugbreak();
      in1.v[0] = (float)(*(float *)&curIntervalLen_low * v[3]) + *v;
      in1.v[1] = (float)(*(float *)&curIntervalLen_low * v[4]) + v[1];
      in1.v[2] = (float)(*(float *)&curIntervalLen_low * v[5]) + v[2];
      MatrixTransformVector43(&in1, &axis, &out);
      upDisp = v5->bones[v8].upDisp;
      out.v[0] = (float)(upDisp * axis.m[2].v[0]) + out.v[0];
      out.v[1] = (float)(upDisp * axis.m[2].v[1]) + out.v[1];
      out.v[2] = (float)(upDisp * axis.m[2].v[2]) + out.v[2];
      CG_DebugSphere(&out, 0.5, &colorYellow, 0, 0);
      len_low = LODWORD(v5->bones[v10].len);
      if ( !v5->boneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
        __debugbreak();
      if ( ((int)curIntervalFirst < 0 || (int)curIntervalFirst >= (signed int)v5->boneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )") )
        __debugbreak();
      len = v[6];
      if ( *(float *)&len_low >= (float)(len - *(float *)&curIntervalLen_low) )
      {
        do
        {
          curIntervalFirst = (int)((unsigned int)(curIntervalFirst + 1) % v5->boneCount);
          v16 = len_low;
          *(float *)&v16 = *(float *)&len_low - (float)(len - *(float *)&curIntervalLen_low);
          len_low = v16;
          curIntervalLen_low = 0i64;
          len = v5->bones[curIntervalFirst].len;
          v = v5->bones[curIntervalFirst].pos.v;
        }
        while ( *(float *)&v16 >= len );
      }
      boneCount = v5->boneCount;
      ++v8;
      v17 = curIntervalLen_low;
      *(float *)&v17 = *(float *)&curIntervalLen_low + *(float *)&len_low;
      curIntervalLen_low = v17;
    }
    while ( v8 < boneCount );
  }
}

/*
==============
CgVehicleSystem::TreadBoneAnimInitResources
==============
*/
void CgVehicleSystem::TreadBoneAnimInitResources(CgVehicleSystem *this, centity_t *cent, const VehicleDef *vehicleDef)
{
  const dvar_t *v6; 
  bool enabled; 
  const VehicleDef *v8; 
  int v9; 
  bool *p_inUse; 
  unsigned int v11; 
  VehicleClient *v12; 
  unsigned int number; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v15; 
  unsigned int v16; 
  DObj *v17; 
  unsigned __int16 *tbaAnimIds; 
  unsigned int i; 
  scr_string_t FirstTreadBoneTag; 
  unsigned int TreadBoneCount; 
  unsigned __int16 v22; 
  VehicleClient *v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 
  VehicleClient *Client; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 737, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 738, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 739, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_bg_vehUseTreadSimulation;
  if ( !DCONST_DVARBOOL_bg_vehUseTreadSimulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehUseTreadSimulation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  enabled = v6->current.enabled;
  if ( dword_1512ECDEC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1512ECDEC);
    if ( dword_1512ECDEC == -1 )
    {
      lastUseTreadsSim = enabled;
      j__Init_thread_footer(&dword_1512ECDEC);
    }
  }
  if ( !lastUseTreadsSim && enabled )
    Com_PrintWarning(20, "Treads: Enabling bg_vehUseTreadSimulation won't take any effect for the current Treaded vehicles");
  lastUseTreadsSim = enabled;
  if ( enabled )
  {
    v8 = this->GetVehicleDef(this, &cent->nextState);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 401, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
      __debugbreak();
    if ( v8->vehiclePhysicsDef.treads_enabled )
    {
      v9 = 0;
      p_inUse = &CgVehicleSystem::ms_treadAnimations[0].inUse;
      v11 = 0;
      while ( *p_inUse )
      {
        ++v11;
        p_inUse += 3620;
        if ( v11 >= 8 )
          return;
      }
      Client = CgVehicleSystem::GetClient(this, cent);
      v12 = Client;
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 747, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
        __debugbreak();
      number = cent->nextState.number;
      m_localClientNum = this->m_localClientNum;
      if ( number > 0x9E4 )
      {
        LODWORD(v26) = cent->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v26) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v26) = 2;
        LODWORD(v25) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v15 = 2533 * m_localClientNum + number;
      if ( v15 >= 0x13CA )
      {
        LODWORD(v26) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v26) )
          __debugbreak();
      }
      v16 = clientObjMap[v15];
      if ( v16 )
      {
        if ( v16 >= (unsigned int)s_objCount )
        {
          LODWORD(v26) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v26) )
            __debugbreak();
        }
        v17 = (DObj *)s_objBuf[v16];
      }
      else
      {
        v17 = NULL;
      }
      if ( CgVehicleSystem::IsDobjValidForVehicle(v17) )
      {
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 756, ASSERT_TYPE_ASSERT, "(obj)", "%s\n\tCan't get the DObj for the vehicle entity", "obj") )
          __debugbreak();
        tbaAnimIds = v12->treadAnimInfo.tbaAnimIds;
        for ( i = 0; i < 2; ++i )
        {
          if ( !*tbaAnimIds )
          {
            FirstTreadBoneTag = BGVehicles::GetFirstTreadBoneTag(vehicleDef, i);
            inOutIndex = -2;
            if ( FirstTreadBoneTag )
            {
              if ( DObjGetBoneIndexInternal_64(v17, FirstTreadBoneTag, &inOutIndex, &modelIndex) )
              {
                if ( inOutIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 771, ASSERT_TYPE_ASSERT, "(firstTreadBone < 254)", (const char *)&queryFormat, "firstTreadBone < UNDEFINED_BONEINDEX") )
                  __debugbreak();
                TreadBoneCount = BGVehicles::GetTreadBoneCount(vehicleDef, i);
                if ( TreadBoneCount )
                {
                  v22 = CgVehicleSystem::TreadBoneAnimCreate(this, v17, cent, inOutIndex, TreadBoneCount);
                  *tbaAnimIds = v22;
                  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 778, ASSERT_TYPE_ASSERT, "(r_taInfo.tbaAnimIds[treadNdx] != TreadBoneAnimId_Invalid)", "%s\n\tCould not create tread animation object", "r_taInfo.tbaAnimIds[treadNdx] != TreadBoneAnimId_Invalid") )
                    __debugbreak();
                  ++v9;
                }
              }
            }
          }
          ++tbaAnimIds;
        }
        v23 = Client;
        if ( !Client->treadAnimInfo.cageId )
        {
          if ( v9 )
          {
            v24 = PhysicsCage_Create((Physics_WorldId)(3 * this->m_localClientNum + 2), PhysicsCage_Midphase);
            v23->treadAnimInfo.cageId = v24;
            if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 791, ASSERT_TYPE_ASSERT, "(r_taInfo.cageId != PhysicsCageId_Invalid)", "%s\n\tCould not create physics cage for vehicle", "r_taInfo.cageId != PhysicsCageId_Invalid") )
              __debugbreak();
          }
        }
      }
    }
  }
}

/*
==============
CgVehicleSystem::TreadBoneAnimIsRoomForNew
==============
*/
bool CgVehicleSystem::TreadBoneAnimIsRoomForNew()
{
  unsigned int v0; 
  bool *p_inUse; 

  v0 = 0;
  p_inUse = &CgVehicleSystem::ms_treadAnimations[0].inUse;
  do
  {
    if ( !*p_inUse )
      break;
    ++v0;
    p_inUse += 3620;
  }
  while ( v0 < 8 );
  return v0 < 8;
}

/*
==============
CgVehicleSystem::TreadBoneAnimReset
==============
*/
void CgVehicleSystem::TreadBoneAnimReset(void)
{
  PhysicsCage_ResetAll();
  memset_0(CgVehicleSystem::ms_treadAnimations, 0, sizeof(CgVehicleSystem::ms_treadAnimations));
}

/*
==============
TreadSim_CageUpdate
==============
*/
void TreadSim_CageUpdate(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld)
{
  const dvar_t *v9; 
  vec3_t outOrigin; 
  __int64 v11; 
  vec3_t minAabb; 
  vec3_t maxAabb; 
  Bounds rotatedBounds; 
  Bounds bounds; 

  v11 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_CageUpdate");
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 443, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 444, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 445, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 446, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleClient->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 447, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  DObjPhysicsGetBounds(obj, &bounds);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  Bounds_Transform(&bounds, &outOrigin, (const tmat33_t<vec3_t> *)entityToWorld, &rotatedBounds);
  minAabb.v[0] = rotatedBounds.midPoint.v[0] - rotatedBounds.halfSize.v[0];
  minAabb.v[1] = rotatedBounds.midPoint.v[1] - rotatedBounds.halfSize.v[1];
  minAabb.v[2] = rotatedBounds.midPoint.v[2] - rotatedBounds.halfSize.v[2];
  maxAabb.v[0] = rotatedBounds.midPoint.v[0] + rotatedBounds.halfSize.v[0];
  maxAabb.v[1] = rotatedBounds.midPoint.v[1] + rotatedBounds.halfSize.v[1];
  maxAabb.v[2] = rotatedBounds.midPoint.v[2] + rotatedBounds.halfSize.v[2];
  PhysicsCage_Update(vehicleClient->treadAnimInfo.cageId, NULL, &minAabb, &maxAabb);
  v9 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
  if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    CG_DebugBox(&vec3_origin, &rotatedBounds, 0.0, &colorMagenta, 0, 0);
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
}

/*
==============
TreadSim_ClipPlanes
==============
*/
void TreadSim_ClipPlanes(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld)
{
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  unsigned __int128 v11; 
  unsigned __int128 v12; 
  unsigned __int128 v13; 
  CEntFx *v14; 
  float *v15; 
  int triggerTime_low; 
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  vec3_t out; 
  vec4_t planesWs; 

  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_ClipPlanes");
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 475, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 476, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 477, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 478, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleClient->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 479, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  if ( !BasePose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 484, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  v11 = LODWORD(entityToWorld->m[1].v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
  v12 = LODWORD(entityToWorld->m[1].v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  v13 = LODWORD(entityToWorld->m[1].v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
  v14 = &cent->pose.moverFx + 6;
  v15 = &planesWs.v[2];
  v22 = 2i64;
  do
  {
    if ( LOBYTE(v14->triggerTime) >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 496, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.wheelBoneIndex[pl] < 254)", (const char *)&queryFormat, "cent->pose.vehicle.wheelBoneIndex[pl] < UNDEFINED_BONEINDEX") )
      __debugbreak();
    triggerTime_low = LOBYTE(v14->triggerTime);
    if ( triggerTime_low >= DObjGetNumBones(obj) )
    {
      LODWORD(v21) = DObjGetNumBones(obj);
      LODWORD(v20) = triggerTime_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 500, ASSERT_TYPE_ASSERT, "(static_cast<int>( boneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( boneIndex ) < DObjGetNumBones( obj )", v20, v21) )
        __debugbreak();
    }
    MatrixTransformVector43(&BasePose[(unsigned __int8)triggerTime_low].trans, entityToWorld, &out);
    out.v[0] = (float)(*(float *)&v11 * outwardPlaneDisp) + out.v[0];
    v17 = out.v[0];
    out.v[1] = (float)(*(float *)&v12 * outwardPlaneDisp) + out.v[1];
    v18 = out.v[1];
    out.v[2] = (float)(*(float *)&v13 * outwardPlaneDisp) + out.v[2];
    v19 = out.v[2];
    *(v15 - 2) = *(float *)&v11;
    *(v15 - 1) = *(float *)&v12;
    *v15 = *(float *)&v13;
    v15[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v18 * *(float *)&v12) + (float)(v17 * *(float *)&v11)) + (float)(*(float *)&v13 * v19)) ^ _xmm);
    v11 ^= (unsigned int)_xmm;
    v12 ^= (unsigned int)_xmm;
    v13 ^= (unsigned int)_xmm;
    v14 = (CEntFx *)((char *)v14 + 1);
    v15 += 4;
    --v22;
  }
  while ( v22 );
  PhysicsCage_ClipPlanes(vehicleClient->treadAnimInfo.cageId, &planesWs, 2u);
  Sys_ProfEndNamedEvent();
}

/*
==============
TreadSim_SegmentCasts
==============
*/
void TreadSim_SegmentCasts(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld)
{
  DObj *v6; 
  const VehicleDef *v7; 
  centity_t *v9; 
  int WheelCount; 
  __int64 v11; 
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  float barrelPitch; 
  int v16; 
  __int64 v17; 
  float v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  __int64 v24; 
  double v25; 
  float v26; 
  float v27; 
  const dvar_t *v30; 
  float v31; 
  CEntFx *v32; 
  float v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  unsigned __int8 v37; 
  scr_string_t WheelBoneTag; 
  unsigned __int8 *v39; 
  __int64 skipChildren; 
  __int64 contentMask; 
  int v42; 
  int modelIndex; 
  float outFrac[2]; 
  __int64 v45; 
  CEntFx *v46; 
  DObj *v47; 
  const VehicleDef *v48; 
  const DObjAnimMat *v49; 
  __int64 v50; 
  vec3_t out; 
  vec3_t endWs; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v55; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 

  v50 = -2i64;
  v6 = obj;
  v47 = obj;
  v7 = vehicleDef;
  v48 = vehicleDef;
  *(_QWORD *)start.v = vehicleClient;
  LODWORD(outFrac[1]) = localClientNum;
  v9 = cent;
  *(_QWORD *)end.v = cent;
  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_SegmentCasts");
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 521, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 522, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 523, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 524, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleClient->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 525, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(v7);
  v11 = WheelCount;
  if ( WheelCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 528, ASSERT_TYPE_ASSERT, "(wheelCount > 1)", (const char *)&queryFormat, "wheelCount > 1") )
    __debugbreak();
  Model = DObjGetModel(v6, 0);
  BasePose = XModelGetBasePose(Model);
  v49 = BasePose;
  if ( !BasePose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 531, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  barrelPitch = cent->pose.turret.barrelPitch;
  if ( barrelPitch <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 534, ASSERT_TYPE_ASSERT, "(suspTravel > 0.0f)", (const char *)&queryFormat, "suspTravel > 0.0f") )
    __debugbreak();
  *(float *)&_XMM14 = FLOAT_1_0;
  v16 = -1;
  modelIndex = -1;
  v42 = 0;
  *(_QWORD *)v55.v = v11;
  if ( (int)v11 > 0 )
  {
    v17 = 0i64;
    v45 = 0i64;
    v18 = barrelPitch * 0.5;
    v46 = &cent->pose.moverFx + 3;
    do
    {
      v19 = v9->pose.vehicle.wheelBoneIndex[v17];
      if ( v19 >= DObjGetNumBones(v6) )
      {
        LODWORD(contentMask) = DObjGetNumBones(v6);
        LODWORD(skipChildren) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 550, ASSERT_TYPE_ASSERT, "(static_cast<int>( boneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( boneIndex ) < DObjGetNumBones( obj )", skipChildren, contentMask) )
          __debugbreak();
      }
      v20 = otherRaysOffs * v48->vehiclePhysicsDef.physics_wheelRadius;
      MatrixTransformVector43(&v49[(unsigned __int8)v19].trans, entityToWorld, &out);
      v21 = (float)(v18 * entityToWorld->m[2].v[1]) + out.v[1];
      v22 = (float)(v18 * entityToWorld->m[2].v[2]) + out.v[2];
      out.v[0] = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * entityToWorld->m[0].v[0]) + (float)((float)(v18 * entityToWorld->m[2].v[0]) + out.v[0]);
      out.v[1] = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * entityToWorld->m[0].v[1]) + v21;
      out.v[2] = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * entityToWorld->m[0].v[2]) + v22;
      v23 = 0;
      v24 = *(_QWORD *)start.v;
      do
      {
        v25 = I_fclamp((float)(v23 & 1) + suspFrac, 0.0, 1.0);
        v26 = *(float *)&v25 * barrelPitch;
        LODWORD(v27) = COERCE_UNSIGNED_INT(*(float *)&v25 * barrelPitch) ^ _xmm;
        endWs.v[0] = (float)(v27 * entityToWorld->m[2].v[0]) + out.v[0];
        endWs.v[1] = (float)(v27 * entityToWorld->m[2].v[1]) + out.v[1];
        endWs.v[2] = (float)(v27 * entityToWorld->m[2].v[2]) + out.v[2];
        PhysicsCage_SegmentCastInPlane(*(_DWORD *)(v24 + 112), &out, &endWs, v42 % 2, outFrac);
        _XMM0 = LODWORD(outFrac[0]);
        __asm { vminss  xmm8, xmm0, xmm8 }
        v30 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
        if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        if ( v30->current.enabled )
        {
          CG_DebugSphere(&out, 1.0, &colorBlue, 0, 0);
          CG_DebugLine(&out, &endWs, &colorGreen, 0, 0);
          if ( outFrac[0] < 1.0 )
          {
            LODWORD(v31) = COERCE_UNSIGNED_INT(outFrac[0] * v26) ^ _xmm;
            endWs.v[0] = (float)(v31 * entityToWorld->m[2].v[0]) + out.v[0];
            endWs.v[1] = (float)(v31 * entityToWorld->m[2].v[1]) + out.v[1];
            endWs.v[2] = (float)(v31 * entityToWorld->m[2].v[2]) + out.v[2];
            CG_DebugSphere(&endWs, 1.0, &colorRed, 0, 0);
          }
        }
        out.v[0] = (float)(v20 * entityToWorld->m[0].v[0]) + out.v[0];
        out.v[1] = (float)(v20 * entityToWorld->m[0].v[1]) + out.v[1];
        out.v[2] = (float)(v20 * entityToWorld->m[0].v[2]) + out.v[2];
        ++v23;
      }
      while ( v23 < 3 );
      v32 = v46;
      v33 = (float)((float)LOWORD(v46->triggerTime) * 0.0000076295109) + (float)(*(float *)&_XMM8 * 0.5);
      v34 = modelIndex;
      v9 = *(centity_t **)end.v;
      v35 = v45;
      if ( (v33 < 0.0 || v33 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", v33) )
        __debugbreak();
      LOWORD(v32->triggerTime) = (int)(float)((float)(v33 * 65535.0) + 0.5);
      v36 = v42;
      if ( *(float *)&_XMM14 <= *(float *)&_XMM8 )
        v36 = v34;
      v16 = v36;
      modelIndex = v36;
      ++v42;
      v17 = v35 + 1;
      v45 = v17;
      v46 = (CEntFx *)((char *)v32 + 2);
      __asm { vminss  xmm14, xmm8, xmm14 }
      v18 = barrelPitch * 0.5;
      v6 = v47;
    }
    while ( v17 < *(__int64 *)v55.v );
    v7 = v48;
    BasePose = v49;
  }
  v37 = 0;
  if ( v16 >= 0 )
  {
    WheelBoneTag = BGVehicles::GetWheelBoneTag(v7, v16);
    v39 = &v9->pose.vehicle.wheelBoneIndex[v16];
    *v39 = -2;
    if ( WheelBoneTag )
    {
      if ( DObjGetBoneIndexInternal_64(v6, WheelBoneTag, &v9->pose.vehicle.wheelBoneIndex[v16], &modelIndex) )
      {
        AnglesToAxis(&v9->pose.angles, (tmat33_t<vec3_t> *)&axis);
        CG_GetPoseOrigin(&v9->pose, &axis.m[3]);
        MatrixTransformVector43(&BasePose[*v39].trans, &axis, &v55);
        start.v[0] = (float)((float)(barrelPitch * 0.5) * 0.0) + v55.v[0];
        start.v[1] = (float)((float)(barrelPitch * 0.5) * 0.0) + v55.v[1];
        start.v[2] = (float)((float)(barrelPitch * 0.5) * 1.0) + v55.v[2];
        end.v[0] = (float)((float)(-4.0 - barrelPitch) * 0.0) + start.v[0];
        end.v[1] = (float)((float)(-4.0 - barrelPitch) * 0.0) + start.v[1];
        end.v[2] = (float)((float)(-4.0 - barrelPitch) * 1.0) + start.v[2];
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * LODWORD(outFrac[1]) + 2), &results, &start, &end, &bounds_origin, v9->nextState.number, 0, 8389393, 0, NULL, All);
        if ( results.fraction < 1.0 )
          v37 = (results.surfaceFlags >> 19) & 0x3F;
      }
    }
  }
  v9->pose.vehicle.wheelSurfaceType = v37;
  Sys_ProfEndNamedEvent();
}

/*
==============
TreadSim_TreadAnimUpdate
==============
*/
void TreadSim_TreadAnimUpdate(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld, float chassisFwSpeed)
{
  __int64 v10; 
  float frametime_base; 
  float v12; 
  unsigned int cageId; 
  CgVehicleSystem *v14; 
  const dvar_t *v15; 
  float value; 
  const dvar_t *v17; 
  unsigned int v19; 
  unsigned __int16 *tbaAnimIds; 
  unsigned __int16 v21; 
  const dvar_t *v25; 
  __int64 planeIndex; 
  __int64 v27; 

  v10 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_TreadAnimUpdate");
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 638, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 639, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 640, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 641, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleClient->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 642, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  frametime_base = cls.frametime_base;
  v12 = vehicleClient->rotateSpeed.v[1] * 0.68713611;
  cageId = vehicleClient->treadAnimInfo.cageId;
  if ( !cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 651, ASSERT_TYPE_ASSERT, "(cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v10) )
    __debugbreak();
  if ( (unsigned int)v10 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v27) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(planeIndex) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", planeIndex, v27) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v10] )
  {
    LODWORD(v27) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v27) )
      __debugbreak();
  }
  v14 = CgVehicleSystem::ms_vehicleSystemArray[v10];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 654, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v15 = DCONST_DVARFLT_bg_bradleyTreadFwFactor;
  if ( !DCONST_DVARFLT_bg_bradleyTreadFwFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTreadFwFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  v17 = DCONST_DVARFLT_bg_bradleyTreadYawFactor;
  if ( !DCONST_DVARFLT_bg_bradleyTreadYawFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTreadYawFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  _XMM6 = v17->current.unsignedInt;
  v19 = 0;
  tbaAnimIds = vehicleClient->treadAnimInfo.tbaAnimIds;
  do
  {
    v21 = *tbaAnimIds;
    if ( *tbaAnimIds )
    {
      _XMM0 = v19;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm3, xmm2
      }
      CgVehicleSystem::TreadBoneAnimAdvance(v14, v21, cent, (float)((float)(*(float *)&_XMM1 * v12) + (float)(value * chassisFwSpeed)) * frametime_base, cageId, v19);
      v25 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
      if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.enabled )
        CgVehicleSystem::TreadBoneAnimDrawDebug(v14, v21, cent);
    }
    ++v19;
    ++tbaAnimIds;
  }
  while ( v19 < 2 );
  Sys_ProfEndNamedEvent();
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim
==============
*/
void CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  const VehicleDef *v6; 
  const VehicleDef *v7; 
  VehicleClient *Client; 
  int WheelCount; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  scr_string_t WheelBoneTag; 
  double v15; 
  const dvar_t *v16; 
  int modelIndex; 
  __int64 v18; 
  tmat43_t<vec3_t> axis; 

  v18 = -2i64;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 681, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 682, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Full TreadSim");
  v6 = this->GetVehicleDef(this, &cent->nextState);
  v7 = v6;
  if ( (!v6 || !v6->vehiclePhysicsDef.treads_enabled) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 687, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->vehiclePhysicsDef.treads_enabled)", (const char *)&queryFormat, "vehicleDef && vehicleDef->vehiclePhysicsDef.treads_enabled") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 690, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( Client->treadAnimInfo.cageId )
  {
    AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 415, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
      __debugbreak();
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 416, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 417, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    WheelCount = BGVehicles::GetWheelCount(v7);
    v10 = WheelCount;
    if ( WheelCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 421, ASSERT_TYPE_ASSERT, "(wheelCount > 1)", (const char *)&queryFormat, "wheelCount > 1") )
      __debugbreak();
    if ( cent->pose.vehicle.wheelBoneIndex[0] == 0xFE )
    {
      v11 = 0;
      v12 = v10;
      if ( (int)v10 > 0 )
      {
        v13 = 0i64;
        do
        {
          WheelBoneTag = BGVehicles::GetWheelBoneTag(v7, v11);
          cent->pose.vehicle.wheelBoneIndex[v13] = -2;
          if ( WheelBoneTag )
            DObjGetBoneIndexInternal_64(obj, WheelBoneTag, &cent->pose.vehicle.wheelBoneIndex[v11], &modelIndex);
          ++v11;
          ++v13;
        }
        while ( v13 < v12 );
      }
    }
    *(CEntFx *)((char *)&cent->pose.moverFx + 92) = (CEntFx)Client->treadAnimInfo;
    CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
    TreadSim_CageUpdate(this->m_localClientNum, Client, v7, obj, cent, &axis);
    TreadSim_ClipPlanes(this->m_localClientNum, Client, v7, obj, cent, &axis);
    TreadSim_SegmentCasts(this->m_localClientNum, Client, v7, obj, cent, &axis);
    v15 = CgVehicleSystem::ComputeForwardSpeed(this, Client, cent);
    TreadSim_TreadAnimUpdate(this->m_localClientNum, Client, v7, obj, cent, &axis, *(float *)&v15);
    CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
    v16 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
    if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
      PhysicsCage_DrawDebug(Client->treadAnimInfo.cageId, 2u);
  }
  Sys_ProfEndNamedEvent();
}

