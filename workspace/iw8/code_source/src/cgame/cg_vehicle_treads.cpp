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
  bool v7; 
  unsigned int curIntervalFirst; 
  unsigned int boneCount; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = tba;
  __asm { vmovaps xmm6, xmm1 }
  if ( !tba->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 58, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 59, ASSERT_TYPE_ASSERT, "(units < 0.0f)", (const char *)&queryFormat, "units < 0.0f");
  if ( v7 )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [rbx+0E14h]
    vcomiss xmm0, xmm1
  }
  curIntervalFirst = _RBX->curIntervalFirst;
  if ( v7 )
  {
    __asm { vsubss  xmm1, xmm0, xmm1 }
    while ( 1 )
    {
      boneCount = curIntervalFirst;
      if ( !curIntervalFirst )
        boneCount = _RBX->boneCount;
      _RAX = 9i64 * (boneCount - 1);
      __asm
      {
        vcomiss xmm1, dword ptr [rbx+rax*4+18h]
        vsubss  xmm1, xmm1, dword ptr [rbx+rax*4+18h]
      }
      if ( !curIntervalFirst )
        curIntervalFirst = _RBX->boneCount;
      --curIntervalFirst;
    }
  }
  __asm
  {
    vsubss  xmm0, xmm1, xmm0
    vmovss  dword ptr [rbx+0E14h], xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
TBA_AdvanceForward
==============
*/

void __fastcall TBA_AdvanceForward(VehicleTreadAnim *tba, double units)
{
  __int64 v7; 
  unsigned int v12; 
  char v13; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = (int *)tba;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  if ( !tba->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 37, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  v7 = _RBX[900];
  __asm { vmovss  xmm1, dword ptr [rbx+0E14h] }
  _RCX = 9 * v7;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+rcx*4+18h]
    vsubss  xmm0, xmm2, xmm1
    vcomiss xmm6, xmm0
  }
  v12 = _RBX[903];
  do
  {
    _RBX[901] = 0;
    LODWORD(v7) = ((int)v7 + 1) % v12;
    __asm
    {
      vsubss  xmm0, xmm2, xmm1
      vsubss  xmm6, xmm6, xmm0
      vmovaps xmm1, xmm7
    }
    _RCX = 9i64 * (int)v7;
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+rcx*4+18h]
      vcomiss xmm6, xmm2
    }
  }
  while ( !v13 );
  __asm
  {
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+0E14h], xmm0
  }
  _RBX[900] = v7;
}

/*
==============
TBA_ComputePitch
==============
*/
float TBA_ComputePitch(unsigned int cageId, int planeIndex, const vec3_t *entityFw, const vec3_t *entityUp, const vec3_t *bonePosWs, const vec3_t *lastBonePosWs)
{
  vec2_t outPoint; 
  vec2_t v38; 
  char v42; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
  }
  if ( !cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 103, ASSERT_TYPE_ASSERT, "(cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(cageId, planeIndex, bonePosWs, &outPoint);
  PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(cageId, planeIndex, lastBonePosWs, &v38);
  __asm
  {
    vmovss  xmm2, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm4, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsp+98h+outPoint]
    vsubss  xmm8, xmm0, dword ptr [rsp+98h+var_60]
    vmovss  xmm1, dword ptr [rsp+98h+outPoint+4]
    vsubss  xmm7, xmm1, dword ptr [rsp+98h+var_60+4]
    vaddss  xmm5, xmm3, xmm2
    vmovss  xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vxorps  xmm4, xmm4, xmm4
    vmaxss  xmm2, xmm3, xmm4
    vmulss  xmm4, xmm2, dword ptr [rdi+8]
    vaddss  xmm0, xmm5, xmm4; X
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm7; Y
    vmovaps xmm1, xmm8; X
  }
  atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm2, cs:__real@43870000
    vaddss  xmm1, xmm6, xmm0
    vmulss  xmm3, xmm1, cs:__real@42652ee0
    vsubss  xmm0, xmm2, xmm3
  }
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgVehicleSystem::TreadBoneAnimAdvance
==============
*/

void __fastcall CgVehicleSystem::TreadBoneAnimAdvance(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent, double units, unsigned int cageId, int planeIndex)
{
  unsigned int v21; 
  unsigned int v24; 
  char v28; 
  __int64 v29; 
  __int64 v31; 
  unsigned int v47; 
  bool v51; 
  bool v52; 
  const dvar_t *v83; 
  bool v104; 
  bool v105; 
  float outFrac[2]; 
  vec3_t v122; 
  __int64 v123; 
  vec3_t out; 
  vec3_t startWs; 
  vec3_t in1; 
  vec3_t endWs; 
  vec3_t lastBonePosWs; 
  tmat43_t<vec3_t> axis; 
  vec3_t bonePosWs; 
  char v131; 
  void *retaddr; 

  _RAX = &retaddr;
  v123 = -2i64;
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
    vmovaps xmm6, xmm3
  }
  _RSI = cent;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 202, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  if ( !tbaId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 208, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  _RDI = (char *)&unk_1512E37EC + 3620 * tbaId;
  v21 = 0;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vmovaps xmm1, xmm6
  }
  ((void (__fastcall *)(char *))s_advanceFunctions[0])(_RDI);
  v24 = cageId;
  if ( cageId && planeIndex >= 0 )
  {
    AnglesToAxis(&_RSI->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&_RSI->pose, &axis.m[3]);
    __asm
    {
      vmovss  xmm12, cs:__real@3f800000
      vmovss  [rsp+1D0h+outFrac], xmm12
      vmovss  xmm11, dword ptr [rsi+0B0h]
      vaddss  xmm10, xmm11, cs:__real@3e4ccccd
      vcomiss xmm11, xmm10
    }
    if ( !(v104 | v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 236, ASSERT_TYPE_ASSERT, "(segLenUp <= segLen)", (const char *)&queryFormat, "segLenUp <= segLen") )
      __debugbreak();
    v29 = *((int *)_RDI + 900);
    __asm { vmovss  xmm7, dword ptr [rdi+0E14h] }
    LODWORD(v31) = *((_DWORD *)_RDI + 900);
    CG_GetPoseOrigin(&_RSI->pose, &v122);
    __asm
    {
      vaddss  xmm2, xmm11, cs:planeIgnoreOffset
      vmovss  xmm13, dword ptr [rbp+0D0h+axis+18h]
      vmulss  xmm1, xmm13, xmm2
      vaddss  xmm4, xmm1, dword ptr [rsp+1D0h+var_188]
      vmovss  dword ptr [rsp+1D0h+startWs], xmm4
      vmovss  xmm14, dword ptr [rbp+0D0h+axis+1Ch]
      vmulss  xmm0, xmm14, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsp+1D0h+var_188+4]
      vmovss  dword ptr [rsp+1D0h+startWs+4], xmm1
      vmovss  xmm15, dword ptr [rbp+0D0h+axis+20h]
      vmulss  xmm0, xmm15, xmm2
      vaddss  xmm3, xmm0, dword ptr [rsp+1D0h+var_188+8]
      vmovss  dword ptr [rsp+1D0h+startWs+8], xmm3
      vmulss  xmm1, xmm14, xmm1
      vmulss  xmm0, xmm13, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, xmm3
      vaddss  xmm0, xmm2, xmm1
      vmovss  [rsp+1D0h+var_18C], xmm0
    }
    v47 = *((_DWORD *)_RDI + 903);
    if ( v47 )
    {
      _RSI = &_RDI[36 * v29];
      __asm { vmovss  xmm9, cs:__real@3f000000 }
      do
      {
        _R14 = 9i64 * v21;
        v31 = (int)((v21 + (unsigned int)v31) % v47);
        if ( (int)v29 < 0 || (v51 = (unsigned int)v29 <= v47, (int)v29 >= (int)v47) )
        {
          v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)");
          v51 = !v52;
          if ( v52 )
            __debugbreak();
        }
        __asm { vcomiss xmm7, dword ptr [rsi+18h] }
        if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
          __debugbreak();
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rsi+0Ch]
          vaddss  xmm1, xmm0, dword ptr [rsi]
          vmovss  dword ptr [rbp+0D0h+in1], xmm1
          vmulss  xmm0, xmm7, dword ptr [rsi+10h]
          vaddss  xmm1, xmm0, dword ptr [rsi+4]
          vmovss  dword ptr [rbp+0D0h+in1+4], xmm1
          vmulss  xmm0, xmm7, dword ptr [rsi+14h]
          vaddss  xmm1, xmm0, dword ptr [rsi+8]
          vmovss  dword ptr [rbp+0D0h+in1+8], xmm1
        }
        MatrixTransformVector43(&in1, &axis, &out);
        __asm
        {
          vmulss  xmm0, xmm11, dword ptr [rbp+0D0h+axis+18h]
          vaddss  xmm5, xmm0, dword ptr [rsp+1D0h+out]
          vmovss  dword ptr [rsp+1D0h+startWs], xmm5
          vmulss  xmm0, xmm11, dword ptr [rbp+0D0h+axis+1Ch]
          vaddss  xmm2, xmm0, dword ptr [rsp+1D0h+out+4]
          vmovss  dword ptr [rsp+1D0h+startWs+4], xmm2
          vmulss  xmm0, xmm11, dword ptr [rbp+0D0h+axis+20h]
          vaddss  xmm3, xmm0, dword ptr [rsp+1D0h+out+8]
          vmovss  dword ptr [rsp+1D0h+startWs+8], xmm3
          vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm0, dword ptr [rbp+0D0h+axis+18h]
          vaddss  xmm5, xmm1, xmm5
          vmovss  dword ptr [rbp+0D0h+endWs], xmm5
          vmulss  xmm0, xmm0, dword ptr [rbp+0D0h+axis+1Ch]
          vaddss  xmm2, xmm0, xmm2
          vmovss  dword ptr [rbp+0D0h+endWs+4], xmm2
          vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm0, dword ptr [rbp+0D0h+axis+20h]
          vaddss  xmm4, xmm1, xmm3
          vmovss  dword ptr [rbp+0D0h+endWs+8], xmm4
          vmulss  xmm2, xmm14, xmm2
          vmulss  xmm0, xmm13, xmm5
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm15, xmm4
          vaddss  xmm2, xmm3, xmm1
          vsubss  xmm0, xmm2, [rsp+1D0h+var_18C]
          vcomiss xmm0, xmm8
        }
        if ( v104 && PhysicsCage_SegmentCastInPlane(v24, &startWs, &endWs, planeIndex, outFrac) )
        {
          __asm
          {
            vsubss  xmm0, xmm12, [rsp+1D0h+outFrac]
            vmulss  xmm1, xmm0, xmm10
            vaddss  xmm2, xmm1, cs:upOffs
            vmovss  dword ptr [rdi+r14*4+1Ch], xmm2
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm1, xmm9, cs:upOffs
            vaddss  xmm2, xmm1, dword ptr [rdi+r14*4+1Ch]
            vmulss  xmm3, xmm2, xmm9
            vmovss  dword ptr [rdi+r14*4+1Ch], xmm3
          }
        }
        v83 = DCONST_DVARBOOL_bg_vehTreadPerturb;
        if ( !DCONST_DVARBOOL_bg_vehTreadPerturb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehTreadPerturb") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v83);
        if ( v83->current.enabled )
        {
          __asm
          {
            vmovss  xmm0, [rsp+1D0h+outFrac]
            vcomiss xmm0, cs:perturbThreshold
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, rax
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vdivss  xmm1, xmm1, xmm0
            vmulss  xmm2, xmm1, cs:__real@40c90fdb
            vmulss  xmm0, xmm2, cs:perturbFreq; X
          }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm1, xmm0, cs:perturbAmp
            vaddss  xmm2, xmm1, dword ptr [rdi+r14*4+1Ch]
            vmovss  dword ptr [rdi+r14*4+1Ch], xmm2
          }
        }
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+r14*4+1Ch]
          vmulss  xmm2, xmm4, dword ptr [rbp+0D0h+axis+18h]
          vaddss  xmm2, xmm2, dword ptr [rsp+1D0h+out]
          vmovss  dword ptr [rsp+1D0h+out], xmm2
          vmulss  xmm3, xmm4, dword ptr [rbp+0D0h+axis+1Ch]
          vaddss  xmm2, xmm3, dword ptr [rsp+1D0h+out+4]
          vmovss  dword ptr [rsp+1D0h+out+4], xmm2
          vmulss  xmm3, xmm4, dword ptr [rbp+0D0h+axis+20h]
          vaddss  xmm2, xmm3, dword ptr [rsp+1D0h+out+8]
          vmovss  dword ptr [rsp+1D0h+out+8], xmm2
        }
        v24 = cageId;
        if ( v21 )
        {
          *(float *)&_XMM0 = TBA_ComputePitch(cageId, 0, axis.m, &axis.m[2], &out, &lastBonePosWs);
          _RAX = 9i64 * (v21 - 1);
          __asm { vmovss  dword ptr [rdi+rax*4+20h], xmm0 }
        }
        else
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+1D0h+out]
            vmovsd  qword ptr [rbp+0D0h+bonePosWs], xmm0
          }
          bonePosWs.v[2] = out.v[2];
        }
        _RCX = 9 * v31;
        __asm { vmovss  xmm6, dword ptr [rdi+rcx*4+18h] }
        if ( !*((_DWORD *)_RDI + 903) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
          __debugbreak();
        if ( (int)v29 < 0 || (v104 = (unsigned int)v29 < *((_DWORD *)_RDI + 903), (int)v29 >= *((_DWORD *)_RDI + 903)) )
        {
          v105 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )");
          v104 = 0;
          if ( v105 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+18h]
          vsubss  xmm0, xmm1, xmm7
          vcomiss xmm6, xmm0
        }
        while ( !v104 )
        {
          __asm
          {
            vsubss  xmm0, xmm1, xmm7
            vsubss  xmm6, xmm6, xmm0
          }
          v29 = (int)((unsigned int)(v29 + 1) % *((_DWORD *)_RDI + 903));
          __asm { vmovaps xmm7, xmm8 }
          _RSI = &_RDI[36 * v29];
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+18h]
            vcomiss xmm6, xmm1
          }
        }
        __asm
        {
          vaddss  xmm7, xmm7, xmm6
          vmovsd  xmm0, qword ptr [rsp+1D0h+out]
          vmovsd  qword ptr [rbp+0D0h+var_130], xmm0
        }
        lastBonePosWs.v[2] = out.v[2];
        ++v21;
        v47 = *((_DWORD *)_RDI + 903);
      }
      while ( v21 < v47 );
    }
    *(float *)&_XMM0 = TBA_ComputePitch(v24, 0, axis.m, &axis.m[2], &bonePosWs, &lastBonePosWs);
    _RCX = 9i64 * (unsigned int)(*((_DWORD *)_RDI + 903) - 1);
    __asm { vmovss  dword ptr [rdi+rcx*4+20h], xmm0 }
    memset(&v122, 0, sizeof(v122));
  }
  _R11 = &v131;
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
}

/*
==============
CgVehicleSystem::TreadBoneAnimCreate
==============
*/
__int64 CgVehicleSystem::TreadBoneAnimCreate(CgVehicleSystem *this, DObj *obj, const centity_t *entity, int firstTreadBone, unsigned int treadBoneCount)
{
  const XModel *Model; 
  int v15; 
  unsigned __int16 v16; 
  int v18; 
  int v19; 
  _DWORD *v; 
  unsigned int v24; 
  bool v26; 
  __int64 result; 
  __int64 v49; 
  __int64 v50; 
  unsigned __int16 v51; 
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
  _RBP = BasePose;
  if ( !BasePose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 142, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList") )
    __debugbreak();
  v15 = 0;
  while ( CgVehicleSystem::ms_treadAnimations[v15].inUse )
  {
    if ( (unsigned int)++v15 >= 8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 154, ASSERT_TYPE_ASSERT, "(index < (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", "%s\n\tTreadBoneAnimCreate: Not enough room for another Tread Bone Animation", "index < VEHICLE_TREAD_ANIMS_MAX") )
        __debugbreak();
      break;
    }
  }
  v16 = v15 + 1;
  v51 = v15 + 1;
  _RBX = &CgVehicleSystem::ms_treadAnimations[v15];
  _RBX->inUse = 1;
  _RBX->boneCount = treadBoneCount;
  _RBX->firstTreadBoneIndex = firstTreadBone;
  *(_QWORD *)&_RBX->curIntervalFirst = 0i64;
  if ( !treadBoneCount )
    return v16;
  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps [rsp+0E8h+var_58], xmm7
  }
  v18 = firstTreadBone;
  __asm
  {
    vmovaps [rsp+0E8h+var_68], xmm8
    vmovaps [rsp+0E8h+var_78], xmm9
  }
  v19 = -firstTreadBone;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovss  xmm10, cs:__real@3a83126f
  }
  do
  {
    _R14 = (unsigned int)(v18 + v19);
    if ( v18 >= DObjGetNumBones(obj) )
    {
      LODWORD(v50) = DObjGetNumBones(obj);
      LODWORD(v49) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 170, ASSERT_TYPE_ASSERT, "(static_cast<int>( firstTreadBone + index ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( firstTreadBone + index ) < DObjGetNumBones( obj )", v49, v50) )
        __debugbreak();
    }
    v = (_DWORD *)_RBP[v18].quat.v;
    v24 = firstTreadBone + (v18 + 1 - firstTreadBone) % treadBoneCount;
    if ( (int)v24 >= DObjGetNumBones(obj) )
    {
      LODWORD(v50) = DObjGetNumBones(obj);
      LODWORD(v49) = firstTreadBone + (v18 + 1 - firstTreadBone) % treadBoneCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 174, ASSERT_TYPE_ASSERT, "(static_cast<int>( nextBoneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( nextBoneIndex ) < DObjGetNumBones( obj )", v49, v50) )
        __debugbreak();
    }
    _RAX = v24;
    _RBP = BasePose;
    v26 = __CFSHL__(_RAX, 5);
    _RAX *= 32i64;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbp+10h]
      vsubss  xmm6, xmm0, dword ptr [rdi+10h]
      vmovss  xmm1, dword ptr [rax+rbp+14h]
      vmovss  xmm0, dword ptr [rax+rbp+18h]
      vsubss  xmm8, xmm0, dword ptr [rdi+18h]
      vsubss  xmm7, xmm1, dword ptr [rdi+14h]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vcomiss xmm0, xmm10
      vmovss  dword ptr [rbx+r14*4+18h], xmm0
    }
    if ( (v26 || _RAX == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 179, ASSERT_TYPE_ASSERT, "(tbi.len > 0.001f)", (const char *)&queryFormat, "tbi.len > EQUAL_EPSILON") )
      __debugbreak();
    __asm { vdivss  xmm2, xmm9, dword ptr [rbx+r14*4+18h] }
    v19 = -firstTreadBone;
    ++v18;
    __asm
    {
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rbx+r14*4+0Ch], xmm0
      vmulss  xmm0, xmm8, xmm2
      vmovss  dword ptr [rbx+r14*4+14h], xmm0
      vmulss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbx+r14*4+10h], xmm1
    }
    _RBX->bones[_R14].pos.v[0] = (float)v[4];
    _RBX->bones[_R14].pos.v[1] = (float)v[5];
    _RBX->bones[_R14].pos.v[2] = (float)v[6];
  }
  while ( v18 - firstTreadBone < treadBoneCount );
  result = v51;
  __asm
  {
    vmovaps xmm10, [rsp+0E8h+var_88]
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  return result;
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
  __int64 v10; 
  __int64 curIntervalFirst; 
  __int64 v15; 
  unsigned int boneCount; 
  int v17; 
  int firstTreadBoneIndex; 
  bool v24; 
  bool v25; 
  bool v49; 
  bool v50; 
  signed int v59; 
  vec3_t angles; 
  vec3_t trans; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  LOWORD(v10) = tbaId;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 297, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  v10 = (unsigned __int16)v10;
  if ( !(_WORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 300, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  _RSI = v10;
  _RBP = CgVehicleSystem::ms_treadAnimations;
  _R13 = &CgVehicleSystem::ms_treadAnimations[v10 - 1];
  if ( !CgVehicleSystem::ms_treadAnimations[v10 - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 302, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  curIntervalFirst = CgVehicleSystem::ms_treadAnimations[_RSI - 1].curIntervalFirst;
  v15 = 0i64;
  boneCount = CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount;
  v17 = CgVehicleSystem::ms_treadAnimations[_RSI - 1].curIntervalFirst;
  firstTreadBoneIndex = CgVehicleSystem::ms_treadAnimations[_RSI - 1].firstTreadBoneIndex;
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+rbp-10h]
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr [rsp+0F8h+angles], xmm9
    vmovss  dword ptr [rsp+0F8h+angles+4], xmm9
    vmovss  dword ptr [rsp+0F8h+angles+8], xmm9
  }
  if ( boneCount )
  {
    __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
    _RDI = 36 * curIntervalFirst;
    __asm { vmovaps [rsp+0F8h+var_58], xmm7 }
    _RBP = &CgVehicleSystem::ms_treadAnimations[_RSI - 1].bones[0].len;
    do
    {
      _R15 = 9 * v15;
      v59 = ((int)v15 + v17) % boneCount;
      if ( DObjSetRotTransIndex(obj, partBits, firstTreadBoneIndex) )
      {
        if ( (int)curIntervalFirst < 0 || (v24 = (unsigned int)curIntervalFirst <= CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount, (int)curIntervalFirst >= (signed int)CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount) )
        {
          v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)");
          v24 = !v25;
          if ( v25 )
            __debugbreak();
        }
        __asm { vcomiss xmm8, dword ptr [rdi+r13+18h] }
        if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
          __debugbreak();
        __asm
        {
          vmulss  xmm0, xmm8, dword ptr [rdi+r13+0Ch]
          vaddss  xmm2, xmm0, dword ptr [rdi+r13]
          vmovss  xmm3, dword ptr [rdi+r13+10h]
          vmovss  xmm4, dword ptr [rdi+r13+4]
          vmovss  xmm5, dword ptr [rdi+r13+14h]
          vmovss  xmm6, dword ptr [rdi+r13+8]
          vmovss  xmm7, dword ptr [r13+r15*4+1Ch]
          vmulss  xmm1, xmm7, dword ptr [rax+18h]
          vaddss  xmm0, xmm2, xmm1
          vsubss  xmm2, xmm0, dword ptr [r13+r15*4+0]
          vmulss  xmm0, xmm7, dword ptr [rax+1Ch]
          vmulss  xmm1, xmm8, xmm3
          vaddss  xmm3, xmm1, xmm4
          vaddss  xmm1, xmm3, xmm0
          vmulss  xmm0, xmm8, xmm5
          vmovss  dword ptr [rsp+0F8h+trans], xmm2
          vsubss  xmm2, xmm1, dword ptr [r13+r15*4+4]
          vmulss  xmm1, xmm7, dword ptr [rax+20h]
          vaddss  xmm3, xmm0, xmm6
          vaddss  xmm0, xmm3, xmm1
          vmovss  xmm1, dword ptr [r13+r15*4+20h]
          vmovss  dword ptr [rsp+0F8h+trans+4], xmm2
          vsubss  xmm2, xmm0, dword ptr [r13+r15*4+8]
          vmovss  dword ptr [rsp+0F8h+trans+8], xmm2
          vmovss  dword ptr [rsp+0F8h+angles], xmm1
        }
        DObjSetLocalTagInternal(obj, &trans, &angles, firstTreadBoneIndex);
      }
      _RCX = 9i64 * v59;
      __asm { vmovss  xmm6, dword ptr [rbp+rcx*4+0] }
      if ( !CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
        __debugbreak();
      if ( (int)curIntervalFirst < 0 || (v49 = (unsigned int)curIntervalFirst < CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount, (int)curIntervalFirst >= (signed int)CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount) )
      {
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )");
        v49 = 0;
        if ( v50 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+rbp]
        vsubss  xmm0, xmm1, xmm8
        vcomiss xmm6, xmm0
      }
      while ( !v49 )
      {
        __asm { vsubss  xmm0, xmm1, xmm8 }
        curIntervalFirst = (int)((unsigned int)(curIntervalFirst + 1) % CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount);
        __asm
        {
          vsubss  xmm6, xmm6, xmm0
          vmovaps xmm8, xmm9
        }
        _RDI = 36 * curIntervalFirst;
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+rbp]
          vcomiss xmm6, xmm1
        }
      }
      boneCount = CgVehicleSystem::ms_treadAnimations[_RSI - 1].boneCount;
      v15 = (unsigned int)(v15 + 1);
      v17 = v59;
      ++firstTreadBoneIndex;
      __asm { vaddss  xmm8, xmm8, xmm6 }
    }
    while ( (unsigned int)v15 < boneCount );
    __asm
    {
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CgVehicleSystem::TreadBoneAnimDrawDebug
==============
*/
void CgVehicleSystem::TreadBoneAnimDrawDebug(CgVehicleSystem *this, unsigned __int16 tbaId, const centity_t *cent)
{
  __int64 v6; 
  unsigned int v9; 
  __int64 curIntervalFirst; 
  unsigned int v13; 
  unsigned int boneCount; 
  __int64 v15; 
  bool v19; 
  bool v20; 
  bool v38; 
  bool v39; 
  vec3_t out; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0F8h+var_58], xmm7 }
  LOWORD(v6) = tbaId;
  if ( (unsigned __int16)(tbaId - 1) > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 336, ASSERT_TYPE_ASSERT, "(tbaId != TreadBoneAnimId_Invalid && tbaId <= (MAX_CAGE_COUNT * (MAX_MIDCAGE_CLIPPLANES)))", (const char *)&queryFormat, "tbaId != TreadBoneAnimId_Invalid && tbaId <= VEHICLE_TREAD_ANIMS_MAX") )
    __debugbreak();
  v6 = (unsigned __int16)v6;
  if ( !(_WORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 339, ASSERT_TYPE_ASSERT, "(treadBoneAnimIndex >= 0)", (const char *)&queryFormat, "treadBoneAnimIndex >= 0") )
    __debugbreak();
  _RDI = &CgVehicleSystem::ms_treadAnimations[v6 - 1];
  if ( !CgVehicleSystem::ms_treadAnimations[v6 - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 341, ASSERT_TYPE_ASSERT, "(tba.inUse)", (const char *)&queryFormat, "tba.inUse") )
    __debugbreak();
  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  if ( drawOriginalPos )
  {
    v9 = 0;
    if ( _RDI->boneCount )
    {
      __asm { vmovss  xmm6, cs:__real@3e800000 }
      do
      {
        MatrixTransformVector43(&_RDI->bones[v9].pos, &axis, &out);
        __asm { vmovaps xmm1, xmm6; radius }
        CG_DebugSphere(&out, *(float *)&_XMM1, &colorCyan, 0, 0);
        ++v9;
      }
      while ( v9 < _RDI->boneCount );
    }
  }
  curIntervalFirst = _RDI->curIntervalFirst;
  v13 = 0;
  boneCount = _RDI->boneCount;
  LODWORD(v15) = _RDI->curIntervalFirst;
  __asm { vmovss  xmm7, dword ptr [rdi+0E14h] }
  if ( boneCount )
  {
    _RSI = &_RDI->bones[curIntervalFirst];
    __asm
    {
      vmovaps [rsp+0F8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f000000
    }
    do
    {
      v15 = (int)((v13 + (unsigned int)v15) % boneCount);
      if ( (int)curIntervalFirst < 0 || (v19 = (unsigned int)curIntervalFirst <= boneCount, (int)curIntervalFirst >= (int)boneCount) )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 90, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>(tba.boneCount))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>(tba.boneCount)");
        v19 = !v20;
        if ( v20 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, dword ptr [rsi+18h] }
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 94, ASSERT_TYPE_ASSERT, "(relativeLen <= tbi.len)", "%s\n\tCurrent relative length for this bones interval should be < the interval length", "relativeLen <= tbi.len") )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rsi+0Ch]
        vaddss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rsp+0F8h+in1], xmm1
        vmulss  xmm0, xmm7, dword ptr [rsi+10h]
        vaddss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+0F8h+in1+4], xmm1
        vmulss  xmm0, xmm7, dword ptr [rsi+14h]
        vaddss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+0F8h+in1+8], xmm1
      }
      MatrixTransformVector43(&in1, &axis, &out);
      __asm { vmovaps xmm1, xmm8; radius }
      _RCX = 9i64 * v13;
      __asm
      {
        vmovss  xmm4, dword ptr [rdi+rcx*4+1Ch]
        vmulss  xmm3, xmm4, dword ptr [rsp+0F8h+axis+1Ch]
        vmulss  xmm2, xmm4, dword ptr [rsp+0F8h+axis+18h]
        vaddss  xmm2, xmm2, dword ptr [rsp+0F8h+out]
        vmovss  dword ptr [rsp+0F8h+out], xmm2
        vaddss  xmm2, xmm3, dword ptr [rsp+0F8h+out+4]
        vmulss  xmm3, xmm4, dword ptr [rsp+0F8h+axis+20h]
        vmovss  dword ptr [rsp+0F8h+out+4], xmm2
        vaddss  xmm2, xmm3, dword ptr [rsp+0F8h+out+8]
        vmovss  dword ptr [rsp+0F8h+out+8], xmm2
      }
      CG_DebugSphere(&out, *(float *)&_XMM1, &colorYellow, 0, 0);
      _RCX = 9 * v15;
      __asm { vmovss  xmm6, dword ptr [rdi+rcx*4+18h] }
      if ( !_RDI->boneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 21, ASSERT_TYPE_ASSERT, "(tba.boneCount > 0)", (const char *)&queryFormat, "tba.boneCount > 0") )
        __debugbreak();
      if ( (int)curIntervalFirst < 0 || (v38 = (unsigned int)curIntervalFirst < _RDI->boneCount, (int)curIntervalFirst >= (signed int)_RDI->boneCount) )
      {
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 22, ASSERT_TYPE_ASSERT, "(interval >= 0 && interval < static_cast<int>( tba.boneCount ))", (const char *)&queryFormat, "interval >= 0 && interval < static_cast<int>( tba.boneCount )");
        v38 = 0;
        if ( v39 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+18h]
        vsubss  xmm0, xmm1, xmm7
        vcomiss xmm6, xmm0
      }
      for ( ; !v38; _RSI = &_RDI->bones[curIntervalFirst] )
      {
        __asm { vsubss  xmm0, xmm1, xmm7 }
        curIntervalFirst = (int)((unsigned int)(curIntervalFirst + 1) % _RDI->boneCount);
        __asm
        {
          vsubss  xmm6, xmm6, xmm0
          vxorps  xmm7, xmm7, xmm7
        }
        _RCX = 9 * curIntervalFirst;
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+rcx*4+18h]
          vcomiss xmm6, xmm1
        }
      }
      boneCount = _RDI->boneCount;
      ++v13;
      __asm { vaddss  xmm7, xmm7, xmm6 }
    }
    while ( v13 < boneCount );
    __asm { vmovaps xmm8, [rsp+0F8h+var_68] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0F8h+var_48]
    vmovaps xmm7, [rsp+0F8h+var_58]
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
  const dvar_t *v21; 
  vec3_t outOrigin; 
  __int64 v25; 
  vec3_t minAabb; 
  vec3_t maxAabb; 
  Bounds rotatedBounds; 
  Bounds bounds; 
  void *retaddr; 

  _RAX = &retaddr;
  v25 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
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
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+0E8h+rotatedBounds.midPoint]
    vsubss  xmm0, xmm6, dword ptr [rsp+0E8h+rotatedBounds.halfSize]
    vmovss  dword ptr [rsp+0E8h+minAabb], xmm0
    vmovss  xmm5, dword ptr [rsp+0E8h+rotatedBounds.midPoint+4]
    vsubss  xmm0, xmm5, dword ptr [rsp+0E8h+rotatedBounds.halfSize+4]
    vmovss  dword ptr [rsp+0E8h+minAabb+4], xmm0
    vmovss  xmm3, dword ptr [rsp+0E8h+rotatedBounds.midPoint+8]
    vsubss  xmm0, xmm3, dword ptr [rsp+0E8h+rotatedBounds.halfSize+8]
    vmovss  dword ptr [rsp+0E8h+minAabb+8], xmm0
    vaddss  xmm1, xmm6, dword ptr [rsp+0E8h+rotatedBounds.halfSize]
    vmovss  dword ptr [rsp+0E8h+maxAabb], xmm1
    vaddss  xmm0, xmm5, dword ptr [rsp+0E8h+rotatedBounds.halfSize+4]
    vmovss  dword ptr [rsp+0E8h+maxAabb+4], xmm0
    vaddss  xmm1, xmm3, dword ptr [rsp+0E8h+rotatedBounds.halfSize+8]
    vmovss  dword ptr [rsp+0E8h+maxAabb+8], xmm1
  }
  PhysicsCage_Update(vehicleClient->treadAnimInfo.cageId, NULL, &minAabb, &maxAabb);
  v21 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
  if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    __asm { vxorps  xmm2, xmm2, xmm2; yaw }
    CG_DebugBox(&vec3_origin, &rotatedBounds, *(float *)&_XMM2, &colorMagenta, 0, 0);
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
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
  CEntFx *v24; 
  int triggerTime_low; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  vec3_t out; 
  vec4_t planesWs; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _R12 = entityToWorld;
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
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0Ch]
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm7, xmm0, xmm6
    vmovss  xmm0, dword ptr [r12+10h]
    vxorps  xmm8, xmm0, xmm6
    vmovss  xmm1, dword ptr [r12+14h]
    vxorps  xmm9, xmm1, xmm6
  }
  v24 = &cent->pose.moverFx + 6;
  _R14 = &planesWs.v[2];
  v47 = 2i64;
  do
  {
    if ( LOBYTE(v24->triggerTime) >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 496, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.wheelBoneIndex[pl] < 254)", (const char *)&queryFormat, "cent->pose.vehicle.wheelBoneIndex[pl] < UNDEFINED_BONEINDEX") )
      __debugbreak();
    triggerTime_low = LOBYTE(v24->triggerTime);
    if ( triggerTime_low >= DObjGetNumBones(obj) )
    {
      LODWORD(v46) = DObjGetNumBones(obj);
      LODWORD(v45) = triggerTime_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 500, ASSERT_TYPE_ASSERT, "(static_cast<int>( boneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( boneIndex ) < DObjGetNumBones( obj )", v45, v46) )
        __debugbreak();
    }
    MatrixTransformVector43(&BasePose[(unsigned __int8)triggerTime_low].trans, entityToWorld, &out);
    __asm
    {
      vmovss  xmm2, cs:outwardPlaneDisp
      vmulss  xmm0, xmm7, xmm2
      vaddss  xmm5, xmm0, dword ptr [rsp+118h+out]
      vmovss  dword ptr [rsp+118h+out], xmm5
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm3, xmm1, dword ptr [rsp+118h+out+4]
      vmovss  dword ptr [rsp+118h+out+4], xmm3
      vmulss  xmm0, xmm9, xmm2
      vaddss  xmm4, xmm0, dword ptr [rsp+118h+out+8]
      vmovss  dword ptr [rsp+118h+out+8], xmm4
      vmovss  dword ptr [r14-8], xmm7
      vmovss  dword ptr [r14-4], xmm8
      vmovss  dword ptr [r14], xmm9
      vmulss  xmm1, xmm3, xmm8
      vmulss  xmm0, xmm5, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm4
      vaddss  xmm2, xmm2, xmm1
      vxorps  xmm0, xmm2, xmm6
      vmovss  dword ptr [r14+4], xmm0
      vxorps  xmm7, xmm7, xmm6
      vxorps  xmm8, xmm8, xmm6
      vxorps  xmm9, xmm9, xmm6
    }
    v24 = (CEntFx *)((char *)v24 + 1);
    _R14 += 4;
    --v47;
  }
  while ( v47 );
  PhysicsCage_ClipPlanes(vehicleClient->treadAnimInfo.cageId, &planesWs, 2u);
  Sys_ProfEndNamedEvent();
  _R11 = &v51;
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
TreadSim_SegmentCasts
==============
*/
void TreadSim_SegmentCasts(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld)
{
  DObj *v17; 
  const VehicleDef *v18; 
  int WheelCount; 
  __int64 v22; 
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  bool v25; 
  bool v26; 
  int v31; 
  __int64 v33; 
  int v37; 
  int v54; 
  __int64 v55; 
  const dvar_t *v70; 
  char v72; 
  bool v87; 
  CEntFx *v88; 
  int v94; 
  __int64 v95; 
  bool v97; 
  int v101; 
  unsigned __int8 v102; 
  scr_string_t WheelBoneTag; 
  unsigned __int8 *v104; 
  double skipEntity; 
  __int64 skipChildren; 
  __int64 contentMask; 
  int v135; 
  int modelIndex; 
  float outFrac[2]; 
  __int64 v138; 
  CEntFx *v139; 
  DObj *v140; 
  const VehicleDef *v141; 
  const DObjAnimMat *v142; 
  __int64 v143; 
  vec3_t out; 
  vec3_t endWs; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v148; 
  tmat43_t<vec3_t> axis; 
  trace_t results; 
  char v151; 
  void *retaddr; 

  _RAX = &retaddr;
  v143 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v17 = obj;
  v140 = obj;
  v18 = vehicleDef;
  v141 = vehicleDef;
  *(_QWORD *)start.v = vehicleClient;
  LODWORD(outFrac[1]) = localClientNum;
  _R13 = cent;
  *(_QWORD *)end.v = cent;
  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_SegmentCasts");
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 521, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 522, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 523, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 524, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !vehicleClient->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 525, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(v18);
  v22 = WheelCount;
  if ( WheelCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 528, ASSERT_TYPE_ASSERT, "(wheelCount > 1)", (const char *)&queryFormat, "wheelCount > 1") )
    __debugbreak();
  Model = DObjGetModel(v17, 0);
  BasePose = XModelGetBasePose(Model);
  v142 = BasePose;
  v25 = BasePose == NULL;
  if ( !BasePose )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 531, ASSERT_TYPE_ASSERT, "(boneMtxList)", (const char *)&queryFormat, "boneMtxList");
    v25 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, dword ptr [r13+0B0h]
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm12, xmm11
  }
  if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 534, ASSERT_TYPE_ASSERT, "(suspTravel > 0.0f)", (const char *)&queryFormat, "suspTravel > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm14, xmm9
  }
  v31 = -1;
  modelIndex = -1;
  v135 = 0;
  *(_QWORD *)v148.v = v22;
  __asm { vmovss  xmm13, cs:__real@3f000000 }
  if ( (int)v22 > 0 )
  {
    v33 = 0i64;
    v138 = 0i64;
    __asm { vmulss  xmm7, xmm12, xmm13 }
    v139 = &cent->pose.moverFx + 3;
    __asm
    {
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm15, cs:__real@37000080
    }
    do
    {
      v37 = _R13->pose.vehicle.wheelBoneIndex[v33];
      if ( v37 >= DObjGetNumBones(v17) )
      {
        LODWORD(contentMask) = DObjGetNumBones(v17);
        LODWORD(skipChildren) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 550, ASSERT_TYPE_ASSERT, "(static_cast<int>( boneIndex ) < DObjGetNumBones( obj ))", "%s\n\tTreadSim_ClipPlanes: Bone index (%d) out of range of number of bones for the vehicle model (%d).", "static_cast<int>( boneIndex ) < DObjGetNumBones( obj )", skipChildren, contentMask) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:otherRaysOffs
        vmulss  xmm6, xmm0, dword ptr [rax+148h]
      }
      MatrixTransformVector43(&v142[(unsigned __int8)v37].trans, entityToWorld, &out);
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rbx+18h]
        vaddss  xmm2, xmm0, dword ptr [rbp+170h+out]
        vmulss  xmm1, xmm7, dword ptr [rbx+1Ch]
        vaddss  xmm3, xmm1, dword ptr [rbp+170h+out+4]
        vmulss  xmm0, xmm7, dword ptr [rbx+20h]
        vaddss  xmm5, xmm0, dword ptr [rbp+170h+out+8]
        vxorps  xmm4, xmm6, xmm10
        vmulss  xmm0, xmm4, dword ptr [rbx]
        vaddss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rbp+170h+out], xmm1
        vmulss  xmm0, xmm4, dword ptr [rbx+4]
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+170h+out+4], xmm1
        vmulss  xmm0, xmm4, dword ptr [rbx+8]
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rbp+170h+out+8], xmm1
        vmovaps xmm8, xmm9
      }
      v54 = 0;
      v55 = *(_QWORD *)start.v;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm0, xmm0, cs:suspFrac; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm11; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm7, xmm0, xmm12
          vxorps  xmm2, xmm7, xmm10
          vmulss  xmm0, xmm2, dword ptr [rbx+18h]
          vaddss  xmm1, xmm0, dword ptr [rbp+170h+out]
          vmovss  dword ptr [rbp+170h+endWs], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+170h+out+4]
          vmovss  dword ptr [rbp+170h+endWs+4], xmm1
          vmulss  xmm2, xmm2, dword ptr [rbx+20h]
          vaddss  xmm0, xmm2, dword ptr [rbp+170h+out+8]
          vmovss  dword ptr [rbp+170h+endWs+8], xmm0
        }
        PhysicsCage_SegmentCastInPlane(*(_DWORD *)(v55 + 112), &out, &endWs, v135 % 2, outFrac);
        __asm
        {
          vmovss  xmm0, [rsp+270h+outFrac]
          vminss  xmm8, xmm0, xmm8
        }
        v70 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
        if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v70);
        if ( v70->current.enabled )
        {
          __asm { vmovaps xmm1, xmm9; radius }
          CG_DebugSphere(&out, *(float *)&_XMM1, &colorBlue, 0, 0);
          CG_DebugLine(&out, &endWs, &colorGreen, 0, 0);
          __asm
          {
            vmovss  xmm0, [rsp+270h+outFrac]
            vcomiss xmm0, xmm9
          }
          if ( v72 )
          {
            __asm
            {
              vmulss  xmm0, xmm0, xmm7
              vxorps  xmm2, xmm0, xmm10
              vmulss  xmm1, xmm2, dword ptr [rbx+18h]
              vaddss  xmm0, xmm1, dword ptr [rbp+170h+out]
              vmovss  dword ptr [rbp+170h+endWs], xmm0
              vmulss  xmm1, xmm2, dword ptr [rbx+1Ch]
              vaddss  xmm0, xmm1, dword ptr [rbp+170h+out+4]
              vmovss  dword ptr [rbp+170h+endWs+4], xmm0
              vmulss  xmm2, xmm2, dword ptr [rbx+20h]
              vaddss  xmm1, xmm2, dword ptr [rbp+170h+out+8]
              vmovss  dword ptr [rbp+170h+endWs+8], xmm1
              vmovaps xmm1, xmm9; radius
            }
            CG_DebugSphere(&endWs, *(float *)&_XMM1, &colorRed, 0, 0);
          }
        }
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbx]
          vaddss  xmm1, xmm1, dword ptr [rbp+170h+out]
          vmovss  dword ptr [rbp+170h+out], xmm1
          vmulss  xmm2, xmm6, dword ptr [rbx+4]
          vaddss  xmm1, xmm2, dword ptr [rbp+170h+out+4]
          vmovss  dword ptr [rbp+170h+out+4], xmm1
          vmulss  xmm2, xmm6, dword ptr [rbx+8]
          vaddss  xmm1, xmm2, dword ptr [rbp+170h+out+8]
          vmovss  dword ptr [rbp+170h+out+8], xmm1
        }
        v87 = (unsigned int)++v54 <= 3;
      }
      while ( v54 < 3 );
      v88 = v139;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, xmm15
        vmulss  xmm1, xmm8, xmm13
        vaddss  xmm6, xmm2, xmm1
        vcomiss xmm6, xmm11
      }
      v94 = modelIndex;
      _R13 = *(centity_t **)end.v;
      v95 = v138;
      __asm { vcomiss xmm6, xmm9 }
      if ( (unsigned int)v54 > 3 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  qword ptr [rsp+270h+skipEntity], xmm0
        }
        v97 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", skipEntity);
        v87 = !v97;
        if ( v97 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@477fff00
        vaddss  xmm1, xmm0, xmm13
        vcvttss2si eax, xmm1
      }
      LOWORD(v88->triggerTime) = _EAX;
      v101 = v135;
      __asm { vcomiss xmm14, xmm8 }
      if ( v87 )
        v101 = v94;
      v31 = v101;
      modelIndex = v101;
      ++v135;
      v33 = v95 + 1;
      v138 = v33;
      v139 = (CEntFx *)((char *)v88 + 2);
      __asm
      {
        vminss  xmm14, xmm8, xmm14
        vmulss  xmm7, xmm12, xmm13
      }
      v17 = v140;
    }
    while ( v33 < *(__int64 *)v148.v );
    v18 = v141;
    BasePose = v142;
  }
  v102 = 0;
  if ( v31 >= 0 )
  {
    WheelBoneTag = BGVehicles::GetWheelBoneTag(v18, v31);
    v104 = &_R13->pose.vehicle.wheelBoneIndex[v31];
    *v104 = -2;
    if ( WheelBoneTag )
    {
      if ( DObjGetBoneIndexInternal_64(v17, WheelBoneTag, &_R13->pose.vehicle.wheelBoneIndex[v31], &modelIndex) )
      {
        AnglesToAxis(&_R13->pose.angles, (tmat33_t<vec3_t> *)&axis);
        CG_GetPoseOrigin(&_R13->pose, &axis.m[3]);
        MatrixTransformVector43(&BasePose[*v104].trans, &axis, &v148);
        __asm
        {
          vmulss  xmm1, xmm12, xmm13
          vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm2, xmm0, dword ptr [rbp+170h+var_190]
          vmovss  dword ptr [rbp+170h+start], xmm2
          vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm5, xmm0, dword ptr [rbp+170h+var_190+4]
          vmovss  dword ptr [rbp+170h+start+4], xmm5
          vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm4, xmm0, dword ptr [rbp+170h+var_190+8]
          vmovss  dword ptr [rbp+170h+start+8], xmm4
          vmovss  xmm1, cs:__real@c0800000
          vsubss  xmm3, xmm1, xmm12
          vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm2, xmm0, xmm2
          vmovss  dword ptr [rbp+170h+end], xmm2
          vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm0, xmm1, xmm5
          vmovss  dword ptr [rbp+170h+end+4], xmm0
          vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm1, xmm2, xmm4
          vmovss  dword ptr [rbp+170h+end+8], xmm1
        }
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * LODWORD(outFrac[1]) + 2), &results, &start, &end, &bounds_origin, _R13->nextState.number, 0, 8389393, 0, NULL, All);
        __asm
        {
          vmovss  xmm0, [rbp+170h+results.fraction]
          vcomiss xmm0, xmm9
        }
        if ( v72 )
          v102 = (results.surfaceFlags >> 19) & 0x3F;
      }
    }
  }
  _R13->pose.vehicle.wheelSurfaceType = v102;
  Sys_ProfEndNamedEvent();
  _R11 = &v151;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
TreadSim_TreadAnimUpdate
==============
*/
void TreadSim_TreadAnimUpdate(LocalClientNum_t localClientNum, VehicleClient *vehicleClient, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent, const tmat43_t<vec3_t> *entityToWorld, float chassisFwSpeed)
{
  __int64 v17; 
  unsigned int cageId; 
  CgVehicleSystem *v22; 
  unsigned __int16 *tbaAnimIds; 
  unsigned __int16 v32; 
  const dvar_t *v42; 
  __int64 planeIndex; 
  __int64 v51; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0D8h+var_88], xmm11
  }
  _RSI = vehicleClient;
  v17 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "TreadSim_TreadAnimUpdate");
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 638, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 639, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 640, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 641, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_RSI->treadAnimInfo.cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 642, ASSERT_TYPE_ASSERT, "(vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "vehicleClient->treadAnimInfo.cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls
    vmovss  xmm0, dword ptr [rsi+40h]
    vmulss  xmm11, xmm0, cs:__real@3f2fe827
  }
  cageId = _RSI->treadAnimInfo.cageId;
  if ( !cageId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 651, ASSERT_TYPE_ASSERT, "(cageId != PhysicsCageId_Invalid)", (const char *)&queryFormat, "cageId != PhysicsCageId_Invalid") )
    __debugbreak();
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
    __debugbreak();
  if ( (unsigned int)v17 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v51) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(planeIndex) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", planeIndex, v51) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v17] )
  {
    LODWORD(v51) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v51) )
      __debugbreak();
  }
  v22 = CgVehicleSystem::ms_vehicleSystemArray[v17];
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 654, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_bg_bradleyTreadFwFactor;
  if ( !DCONST_DVARFLT_bg_bradleyTreadFwFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTreadFwFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_bg_bradleyTreadYawFactor;
  if ( !DCONST_DVARFLT_bg_bradleyTreadYawFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyTreadYawFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _ECX = 0;
  _EBX = 0;
  tbaAnimIds = _RSI->treadAnimInfo.tbaAnimIds;
  __asm
  {
    vmovss  xmm8, [rsp+0D8h+chassisFwSpeed]
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  do
  {
    v32 = *tbaAnimIds;
    if ( *tbaAnimIds )
    {
      __asm
      {
        vxorps  xmm3, xmm6, xmm9
        vmovd   xmm1, ecx
        vmovd   xmm0, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm3, xmm2
        vmulss  xmm3, xmm1, xmm11
        vmulss  xmm0, xmm7, xmm8
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm2, xmm10; units
      }
      CgVehicleSystem::TreadBoneAnimAdvance(v22, v32, cent, *(float *)&_XMM3, cageId, _EBX);
      v42 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
      if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      if ( v42->current.enabled )
        CgVehicleSystem::TreadBoneAnimDrawDebug(v22, v32, cent);
      _ECX = 0;
    }
    ++_EBX;
    ++tbaAnimIds;
  }
  while ( _EBX < 2 );
  Sys_ProfEndNamedEvent();
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim
==============
*/
void CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  const VehicleDef *v7; 
  const VehicleDef *v8; 
  VehicleClient *Client; 
  int WheelCount; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  scr_string_t WheelBoneTag; 
  const dvar_t *v16; 
  float v17; 
  int modelIndex; 
  __int64 v19; 
  tmat43_t<vec3_t> axis; 

  v19 = -2i64;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 681, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 682, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Full TreadSim");
  v7 = this->GetVehicleDef(this, &cent->nextState);
  v8 = v7;
  if ( (!v7 || !v7->vehiclePhysicsDef.treads_enabled) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 687, ASSERT_TYPE_ASSERT, "(vehicleDef && vehicleDef->vehiclePhysicsDef.treads_enabled)", (const char *)&queryFormat, "vehicleDef && vehicleDef->vehiclePhysicsDef.treads_enabled") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 690, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( Client->treadAnimInfo.cageId )
  {
    AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 415, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
      __debugbreak();
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 416, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 417, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    WheelCount = BGVehicles::GetWheelCount(v8);
    v11 = WheelCount;
    if ( WheelCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_treads.cpp", 421, ASSERT_TYPE_ASSERT, "(wheelCount > 1)", (const char *)&queryFormat, "wheelCount > 1") )
      __debugbreak();
    if ( cent->pose.vehicle.wheelBoneIndex[0] == 0xFE )
    {
      v12 = 0;
      v13 = v11;
      if ( (int)v11 > 0 )
      {
        v14 = 0i64;
        do
        {
          WheelBoneTag = BGVehicles::GetWheelBoneTag(v8, v12);
          cent->pose.vehicle.wheelBoneIndex[v14] = -2;
          if ( WheelBoneTag )
            DObjGetBoneIndexInternal_64(obj, WheelBoneTag, &cent->pose.vehicle.wheelBoneIndex[v12], &modelIndex);
          ++v12;
          ++v14;
        }
        while ( v14 < v13 );
      }
    }
    *(CEntFx *)((char *)&cent->pose.moverFx + 92) = (CEntFx)Client->treadAnimInfo;
    CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
    TreadSim_CageUpdate(this->m_localClientNum, Client, v8, obj, cent, &axis);
    TreadSim_ClipPlanes(this->m_localClientNum, Client, v8, obj, cent, &axis);
    TreadSim_SegmentCasts(this->m_localClientNum, Client, v8, obj, cent, &axis);
    *(double *)&_XMM0 = CgVehicleSystem::ComputeForwardSpeed(this, Client, cent);
    __asm { vmovss  [rsp+0C8h+var_98], xmm0 }
    TreadSim_TreadAnimUpdate(this->m_localClientNum, Client, v8, obj, cent, &axis, v17);
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

