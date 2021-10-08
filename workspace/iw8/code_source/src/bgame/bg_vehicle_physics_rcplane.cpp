/*
==============
BgVehiclePhysicsRCPlane::SetMinSpeed
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetMinSpeed(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  ?SetMinSpeed@BgVehiclePhysicsRCPlane@@QEAAXM@Z(this, speedmph);
}

/*
==============
BgVehiclePhysicsRCPlane::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::UpdatePlayerInputControls(BgVehiclePhysicsRCPlane *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysicsRCPlane@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysicsRCPlane::Setup
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::Setup(BgVehiclePhysicsRCPlane *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysicsRCPlane@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BgVehiclePhysicsRCPlane::Step
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::Step(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  return ?Step@BgVehiclePhysicsRCPlane@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::CreatePhysics(BgVehiclePhysicsRCPlane *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysicsRCPlane@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysicsRCPlane::DoTrace
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::DoTrace(BgVehiclePhysicsRCPlane *this, Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  return ?DoTrace@BgVehiclePhysicsRCPlane@@IEAA_NW4Physics_WorldId@@HAEBTvec3_t@@1MAEAT3@2AEAI3@Z(this, worldId, entityNumber, start, end, noiseAmp, outHitPos, outHitNormal, outHitBody, outSurflags);
}

/*
==============
BgVehiclePhysicsRCPlane::Thrust
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::Thrust(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?Thrust@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::WasBoosting
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::WasBoosting(BgVehiclePhysicsRCPlane *this)
{
  return ?WasBoosting@BgVehiclePhysicsRCPlane@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsRCPlane::CollisionImpulseCallback
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::CollisionImpulseCallback(BgVehiclePhysicsRCPlane *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@BgVehiclePhysicsRCPlane@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
BgVehiclePhysicsRCPlane::SupportsFeature
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::SupportsFeature(BgVehiclePhysicsRCPlane *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@BgVehiclePhysicsRCPlane@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
BgVehiclePhysicsRCPlane::LinearVelocityAdjust
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::LinearVelocityAdjust(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?LinearVelocityAdjust@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  ?SetTopSpeedNoBoosting@BgVehiclePhysicsRCPlane@@QEAAXM@Z(this, speedmph);
}

/*
==============
BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?DeriveFinalAngularVelocity@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::CheckTraceAhead
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::CheckTraceAhead(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?CheckTraceAhead@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::DebugDraw
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::DebugDraw(BgVehiclePhysicsRCPlane *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehiclePhysicsRCPlane@@MEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehiclePhysicsRCPlane::StepClientKeyframe
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::StepClientKeyframe(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?StepClientKeyframe@BgVehiclePhysicsRCPlane@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedBoosting
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetTopSpeedBoosting(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  ?SetTopSpeedBoosting@BgVehiclePhysicsRCPlane@@QEAAXM@Z(this, speedmph);
}

/*
==============
BgVehiclePhysicsRCPlane::BoostControl
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::BoostControl(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?BoostControl@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::PitchAndBank
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::PitchAndBank(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  ?PitchAndBank@BgVehiclePhysicsRCPlane@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsRCPlane::IsBoosting
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::IsBoosting(BgVehiclePhysicsRCPlane *this)
{
  return ?IsBoosting@BgVehiclePhysicsRCPlane@@IEBA_NXZ(this);
}

/*
==============
BgVehiclePhysicsRCPlane::BoostControl
==============
*/
void BgVehiclePhysicsRCPlane::BoostControl(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  BgVehicleEventSystem *v3; 
  __int64 v4; 
  unsigned int BoostSound; 
  BgVehicleEventSystem *v6; 
  void (__fastcall *RCPlaneBoost)(BgVehicleEventSystem *, const BgVehiclePhysics *, float, int, float, const SndAliasList *); 
  SndAliasList *AliasFromId; 
  int v11; 

  _RBX = this;
  if ( this->m_boostPressed && !this->m_boostOneTimeEventDone )
  {
    v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    BoostSound = _RBX->m_boostEvent.BoostSound;
    v6 = v3;
    RCPlaneBoost = v3->RCPlaneBoost;
    if ( BoostSound )
      AliasFromId = SND_FindAliasFromId(BoostSound);
    else
      AliasFromId = NULL;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+368h]
      vmovss  xmm2, dword ptr [rbx+360h]
      vmovss  [rsp+38h+var_18], xmm0
    }
    ((void (__fastcall *)(BgVehicleEventSystem *, BgVehiclePhysicsRCPlane *, __int64, _QWORD, int, SndAliasList *))RCPlaneBoost)(v6, _RBX, v4, (unsigned int)_RBX->m_boostEvent.shakeDuration, v11, AliasFromId);
    _RBX->m_boostOneTimeEventDone = 1;
  }
}

/*
==============
BgVehiclePhysicsRCPlane::CheckTraceAhead
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::CheckTraceAhead(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rcx+358h]
    vmovaps xmm7, xmm1
    vmovaps xmm6, [rsp+0D8h+var_18]
    vmovaps xmm7, [rsp+0D8h+var_28]
  }
}

/*
==============
BgVehiclePhysicsRCPlane::CollisionImpulseCallback
==============
*/
void BgVehiclePhysicsRCPlane::CollisionImpulseCallback(BgVehiclePhysicsRCPlane *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  float v4; 

  _RDI = this;
  BgVehiclePhysics::CollisionImpulseCallback(this, cbData);
  AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &_RDI->m_euler);
  __asm { vmovsd  xmm0, qword ptr [rdi+384h] }
  v4 = _RDI->m_euler.v[2];
  __asm { vmovsd  qword ptr [rdi+390h], xmm0 }
  _RDI->m_lerpEuler.v[2] = v4;
}

/*
==============
BgVehiclePhysicsRCPlane::CreatePhysics
==============
*/
_BOOL8 BgVehiclePhysicsRCPlane::CreatePhysics(BgVehiclePhysicsRCPlane *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  bool Physics; 
  bool v4; 
  unsigned int PhysicsBodyId; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  Physics = BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  this->m_minTimeDynamic = 0.0;
  v4 = Physics;
  if ( Physics )
  {
    BgVehiclePhysics::SetActivatedAlways(this);
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    PhysicsVehicle_SetNoGravity(this->m_worldId, PhysicsBodyId);
    v6 = BgVehiclePhysics::GetPhysicsBodyId(this);
    PhysicsVehicle_SetSoftContacts(this->m_worldId, v6, 0);
    if ( this->m_hasMissileContents )
    {
      v7 = BgVehiclePhysics::GetPhysicsBodyId(this);
      PhysicsVehicle_RemoveContentFlag(this->m_worldId, v7, 0x800000);
      v8 = BgVehiclePhysics::GetPhysicsBodyId(this);
      PhysicsVehicle_AddContentFlag(this->m_worldId, v8, 1);
    }
  }
  return v4;
}

/*
==============
BgVehiclePhysicsRCPlane::DebugDraw
==============
*/
void BgVehiclePhysicsRCPlane::DebugDraw(BgVehiclePhysicsRCPlane *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  bool Bool_Internal_DebugName; 
  const tmat33_t<vec3_t> *p_m_transform; 
  const dvar_t *v172; 
  const dvar_t *v174; 
  const dvar_t *v199; 
  const dvar_t *v201; 
  const dvar_t *v251; 
  const dvar_t *v253; 
  const dvar_t *v270; 
  const dvar_t *v274; 
  const dvar_t *v306; 
  const dvar_t *v308; 
  float setColor; 
  float setColora; 
  float setColorb; 
  float setColorc; 
  float setColord; 
  float setColore; 
  float setColorf; 
  float setColorg; 
  float setColorh; 
  float setColori; 
  float setColorj; 
  float setColork; 
  float setColorl; 
  float setColorm; 
  int forceColor; 
  int forceColora; 
  int forceColorb; 
  int forceColorc; 
  int forceColord; 
  int forceColore; 
  int forceColorf; 
  int forceColorg; 
  int forceColorh; 
  int forceColori; 
  int forceColorj; 
  int forceColork; 
  int forceColorl; 
  int forceColorm; 
  int shadow; 
  int shadowa; 
  int shadowb; 
  int shadowc; 
  int shadowd; 
  int shadowe; 
  int shadowf; 
  int shadowg; 
  float outHeightChange; 
  float outHeightChangea; 
  float outHeightChangeb; 
  float outHeightChangec; 
  float outHeightChanged; 
  float outHeightChangee; 
  float outHeightChangef; 
  float outHeightChangeg; 
  float outHeightChangeh; 
  float outHeightChangei; 
  float outHeightChangej; 
  float outHeightChangek; 
  float outHeightChangel; 
  float outHeightChangem; 
  float outHeightChangen; 
  float outHeightChangeo; 
  float value2MaxAbs; 
  vec3_t angles; 
  char _Buffer[128]; 

  _RDI = y;
  _R14 = x;
  _RBX = this;
  if ( Sys_IsMainThread() && scrPlace && _R14 && _RDI )
  {
    __asm
    {
      vmovaps [rsp+1E0h+var_50], xmm6
      vmovaps [rsp+1E0h+var_60], xmm7
      vmovaps [rsp+1E0h+var_70], xmm8
      vmovaps [rsp+1E0h+var_80], xmm9
      vmovaps [rsp+1E0h+var_90], xmm10
      vmovaps [rsp+1E0h+var_A0], xmm11
      vmovaps [rsp+1E0h+var_B0], xmm12
      vmovaps [rsp+1E0h+var_C0], xmm13
    }
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpDebugFull, "bg_rcpDebugFull");
    p_m_transform = (const tmat33_t<vec3_t> *)&_RBX->m_transform;
    if ( Bool_Internal_DebugName )
    {
      __asm
      {
        vmovaps [rsp+1E0h+var_D0], xmm14
        vmovaps [rsp+1E0h+var_E0], xmm15
      }
      AxisToAngles(p_m_transform, &angles);
      __asm
      {
        vmovss  xmm8, cs:__real@3b360b61
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles]
        vmulss  xmm4, xmm8, dword ptr [rsp+1E0h+angles+4]
        vmovss  xmm10, cs:__real@3f000000
        vmovss  xmm11, cs:__real@43b40000
        vaddss  xmm1, xmm3, xmm10
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm11
        vmovss  dword ptr [rsp+1E0h+angles], xmm0
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles+8]
        vmulss  xmm1, xmm0, xmm11
        vmovss  dword ptr [rsp+1E0h+angles+4], xmm1
        vaddss  xmm1, xmm3, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm11
        vmovss  xmm0, dword ptr [r14]
        vmovss  [rsp+1E0h+var_18C], xmm0
        vmovss  dword ptr [rsp+1E0h+angles+8], xmm1
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed, "bg_rcp_m_pitchLerpSpeed");
      else
        __asm { vmovss  xmm0, dword ptr [rbx+318h] }
      __asm { vmovss  [rsp+1E0h+value2MaxAbs], xmm0 }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed, "bg_rcp_m_yawLerpSpeed");
        __asm { vmovaps xmm15, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm15, dword ptr [rbx+330h] }
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir, "bg_rcp_m_yawLerpSpeedChangeDir");
        __asm { vmovaps xmm14, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm14, dword ptr [rbx+334h] }
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning, "bg_rcp_m_yawLerpSpeedReturning");
        __asm { vmovaps xmm13, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm13, dword ptr [rbx+338h] }
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering, "bg_rcp_m_rollLerpSpeedSteering");
        __asm { vmovaps xmm12, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm12, dword ptr [rbx+340h] }
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir, "bg_rcp_m_rollLerpSpeedChangeDir");
        __asm { vmovaps xmm7, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm7, dword ptr [rbx+344h] }
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning, "bg_rcp_m_rollLerpSpeedReturning");
        __asm { vmovaps xmm4, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm4, dword ptr [rbx+348h] }
      }
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vxorps  xmm6, xmm6, xmm6
        vmaxss  xmm0, xmm0, xmm6
        vmaxss  xmm1, xmm0, xmm15
        vmaxss  xmm2, xmm1, xmm14
        vmaxss  xmm3, xmm2, xmm13
        vmaxss  xmm0, xmm3, xmm12
        vmaxss  xmm1, xmm0, xmm7
        vmaxss  xmm13, xmm1, xmm4
        vmovss  [rsp+1E0h+var_188], xmm13
      }
      j_sprintf(_Buffer, "RC Plane Debug - Full (set bg_rcpDebugFull 0 to see Summary)");
      __asm
      {
        vmovss  xmm15, cs:__real@41000000
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm15
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorWhiteFaded, 0, 1, outHeightChangef, 0);
      __asm
      {
        vmovss  xmm7, [rbp+0E0h+charHeight]
        vaddss  xmm0, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
      j_sprintf(_Buffer, "============================");
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm15
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorWhiteFaded, 0, 1, outHeightChangeg, 0);
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
        vmovss  [rsp+1E0h+value2MaxAbs], xmm6
      }
      j_sprintf(_Buffer, "Pitch Input");
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+378h]
        vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm6, cs:__real@3f800000
        vmovss  xmm2, dword ptr [rdi]; y
        vxorps  xmm1, xmm0, xmm14
        vmovss  [rsp+1E0h+forceColor], xmm6
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorc, *(float *)&forceColorc, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
      }
      j_sprintf(_Buffer, "Yaw Input");
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
      __asm
      {
        vmovss  xmm12, cs:__real@bf800000
        vmulss  xmm1, xmm0, xmm12
        vmovss  [rsp+1E0h+forceColor], xmm6
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColord, *(float *)&forceColord, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_18C]
        vmovss  xmm2, dword ptr [rsp+1E0h+angles]
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm0, xmm2, xmm12
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
        vmovss  dword ptr [rdi], xmm1
      }
      j_sprintf(_Buffer, "Pitch: %f", *(double *)&_XMM2);
      v172 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v172);
      if ( v172->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle, "bg_rcp_m_pitchMaxAngle");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+324h] }
      }
      v174 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmulss  xmm12, xmm12, dword ptr [rsp+1E0h+angles] }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v174);
      if ( v174->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle, "bg_rcp_m_pitchMaxAngle");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rbx+324h] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+384h]
        vxorps  xmm1, xmm0, xmm14
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm6
        vmovss  [rsp+1E0h+shadow], xmm12
        vmovss  [rsp+1E0h+forceColor], xmm2
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColore, *(float *)&forceColore, *(float *)&shadowb, outHeightChangeh, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm2, dword ptr [rbx+3C0h]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Pitch Lerp Rate: %f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3C0h]
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  [rsp+1E0h+forceColor], xmm13
        vmovaps xmm3, xmm7; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorf, *(float *)&forceColorf, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  xmm12, cs:__real@c2652ee0
        vmovss  dword ptr [r14], xmm2
        vmulss  xmm0, xmm12, dword ptr [rbx+3A4h]
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Pitch Velocity: %f", *(double *)&_XMM2);
      v199 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v199);
      if ( v199->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed, "bg_rcp_m_pitchTurnSpeed");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+310h] }
      }
      v201 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmulss  xmm13, xmm12, dword ptr [rbx+3A4h] }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v201);
      if ( v201->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed, "bg_rcp_m_pitchTurnSpeed");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rbx+310h] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3B4h]
        vxorps  xmm1, xmm0, xmm14
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm6
        vmovss  [rsp+1E0h+shadow], xmm13
        vmovss  [rsp+1E0h+forceColor], xmm2
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorg, *(float *)&forceColorg, *(float *)&shadowc, outHeightChangei, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles+4]
        vmovss  xmm13, [rsp+1E0h+var_18C]
        vmovss  dword ptr [r14], xmm13
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
        vaddss  xmm1, xmm3, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm11
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Yaw: %f", *(double *)&_XMM2);
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rsp+1E0h+angles+4]
        vmulss  xmm6, xmm8, dword ptr [rbx+388h]
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm3, xmm0, cs:__real@c3b40000
        vaddss  xmm1, xmm6, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm6, xmm2
        vmulss  xmm1, xmm0, cs:__real@c3b40000
        vmovss  xmm0, cs:__real@43340000
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm0
        vmovss  [rsp+1E0h+shadow], xmm3
        vmovss  [rsp+1E0h+forceColor], xmm0
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorh, *(float *)&forceColorh, *(float *)&shadowd, outHeightChangej, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm2, dword ptr [rbx+3C4h]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Yaw Lerp Rate: %f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_188]
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  [rsp+1E0h+forceColor], xmm0
        vmovss  xmm0, dword ptr [rbx+3C4h]
        vmovaps xmm3, xmm7; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColori, *(float *)&forceColori, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm0, dword ptr [rbx+3A8h]
        vmulss  xmm1, xmm0, xmm12
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Yaw Velocity: %f", *(double *)&_XMM2);
      v251 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v251);
      if ( v251->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+328h] }
      }
      v253 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmulss  xmm12, xmm12, dword ptr [rbx+3A8h] }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v253);
      if ( v253->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rbx+328h] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3B8h]
        vxorps  xmm1, xmm0, xmm14
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm6
        vmovss  [rsp+1E0h+shadow], xmm12
        vmovss  [rsp+1E0h+forceColor], xmm2
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm7; charHeight
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorj, *(float *)&forceColorj, *(float *)&shadowe, outHeightChangek, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles+8]
        vmovss  dword ptr [r14], xmm13
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
        vaddss  xmm1, xmm3, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm11
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Roll: %f", *(double *)&_XMM2);
      v270 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmovaps xmm14, [rsp+1E0h+var_D0] }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v270);
      if ( v270->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+34Ch] }
      }
      __asm { vmulss  xmm4, xmm8, dword ptr [rsp+1E0h+angles+8] }
      v274 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm
      {
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm12, xmm1, xmm11
      }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v274);
      if ( v274->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        __asm { vmovaps xmm5, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm5, dword ptr [rbx+34Ch] }
      }
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rbx+38Ch]
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vmovss  xmm2, dword ptr [rdi]; y
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm6
        vmovss  [rsp+1E0h+shadow], xmm12
        vmovss  [rsp+1E0h+forceColor], xmm5
        vmovaps xmm3, xmm7; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColork, *(float *)&forceColork, *(float *)&shadowf, outHeightChangel, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  xmm2, dword ptr [rbx+3C8h]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Roll Lerp Rate: %f", *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_188]
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  [rsp+1E0h+forceColor], xmm0
        vmovss  xmm0, dword ptr [rbx+3C8h]
        vmovaps xmm3, xmm7; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorl, *(float *)&forceColorl, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, cs:RCP_DEBUG_HORIZONTAL_SPACER
        vaddss  xmm1, xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  xmm8, cs:__real@42652ee0
        vmovss  dword ptr [r14], xmm2
        vmulss  xmm0, xmm8, dword ptr [rbx+3ACh]
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Roll Velocity: %f", *(double *)&_XMM2);
      v306 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v306);
      if ( v306->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed, "bg_rcp_m_rollTurnSpeed");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rbx+33Ch] }
      }
      v308 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmulss  xmm8, xmm8, dword ptr [rbx+3ACh] }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v308);
      if ( v308->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed, "bg_rcp_m_rollTurnSpeed");
      else
        __asm { vmovss  xmm0, dword ptr [rbx+33Ch] }
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm6
        vmovss  [rsp+1E0h+shadow], xmm8
        vmovss  [rsp+1E0h+forceColor], xmm0
        vmovss  xmm0, dword ptr [rbx+3BCh]
        vmovaps xmm3, xmm7; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorm, *(float *)&forceColorm, *(float *)&shadowg, outHeightChangem, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vmovss  dword ptr [r14], xmm13
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      if ( _RBX->m_pitchCounterSteering )
      {
        j_sprintf(_Buffer, "PITCH Counter Steering");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm15
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorGreen, 0, 1, outHeightChangen, 0);
        __asm { vmovss  xmm1, dword ptr [rdi] }
      }
      __asm
      {
        vaddss  xmm0, xmm1, xmm7
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _RBX->m_yawCounterSteering )
      {
        j_sprintf(_Buffer, "YAW Counter Steering");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm15
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorGreen, 0, 1, outHeightChangeo, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
      __asm
      {
        vmovaps xmm15, [rsp+1E0h+var_E0]
        vaddss  xmm0, xmm0, xmm7
      }
    }
    else
    {
      AxisToAngles(p_m_transform, &angles);
      __asm
      {
        vmovss  xmm8, cs:__real@3b360b61
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles]
        vmulss  xmm4, xmm8, dword ptr [rsp+1E0h+angles+4]
        vmovss  xmm10, cs:__real@3f000000
        vmovss  xmm11, cs:__real@43b40000
        vaddss  xmm1, xmm3, xmm10
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm11
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vmovss  dword ptr [rsp+1E0h+angles], xmm0
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles+8]
        vmulss  xmm1, xmm0, xmm11
        vmovss  dword ptr [rsp+1E0h+angles+4], xmm1
        vaddss  xmm1, xmm3, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm11
        vmovss  dword ptr [rsp+1E0h+angles+8], xmm1
      }
      j_sprintf(_Buffer, "RC Plane Debug - Summary (set bg_rcpDebugFull 1 to see Full)");
      __asm
      {
        vmovss  xmm12, cs:__real@41000000
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm12
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorWhiteFaded, 0, 1, outHeightChange, 0);
      __asm
      {
        vmovss  xmm6, [rbp+0E0h+charHeight]
        vaddss  xmm0, xmm6, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
      j_sprintf(_Buffer, "============================");
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm12
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorWhiteFaded, 0, 1, outHeightChangea, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi]
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rdi], xmm0
        vmovss  [rsp+1E0h+value2MaxAbs], xmm1
      }
      j_sprintf(_Buffer, "Yaw Input");
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&_RBX->m_controls, 2u);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@bf800000
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  [rsp+1E0h+forceColor], xmm0
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm6; charHeight
      }
      Draw2DVariableOnGraph(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColor, *(float *)&forceColor, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
        vmovss  xmm13, cs:__real@c2652ee0
        vmulss  xmm0, xmm13, dword ptr [rbx+3A8h]
        vcvtss2sd xmm2, xmm0, xmm0
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Yaw Velocity: %f", *(double *)&_XMM2);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        __asm { vmovaps xmm7, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm7, dword ptr [rbx+328h] }
      }
      __asm { vmulss  xmm13, xmm13, dword ptr [rbx+3A8h] }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rbx+328h] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3B8h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm7
        vmovss  [rsp+1E0h+shadow], xmm13
        vmovss  [rsp+1E0h+forceColor], xmm2
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  dword ptr [rsp+1E0h+setColor], xmm1
        vmovss  xmm1, dword ptr [r14]; x
        vmovaps xmm3, xmm6; charHeight
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, *(float *)&forceColora, *(float *)&shadow, outHeightChangeb, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm3, xmm8, dword ptr [rsp+1E0h+angles+8]
        vmovss  dword ptr [rdi], xmm1
        vaddss  xmm1, xmm3, xmm10
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm11
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
      }
      j_sprintf(_Buffer, "Roll: %f", *(double *)&_XMM2);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        __asm { vmovaps xmm7, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm7, dword ptr [rbx+34Ch] }
      }
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rsp+1E0h+angles+8]
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm13, xmm1, xmm11
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        __asm { vmovaps xmm5, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm5, dword ptr [rbx+34Ch] }
      }
      __asm
      {
        vmulss  xmm4, xmm8, dword ptr [rbx+38Ch]
        vaddss  xmm2, xmm4, xmm10
        vroundss xmm3, xmm9, xmm2, 1
        vmovss  xmm2, dword ptr [rdi]; y
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm7
        vmovss  [rsp+1E0h+shadow], xmm13
        vmovss  [rsp+1E0h+forceColor], xmm5
        vmovaps xmm3, xmm6; charHeight
        vmovss  dword ptr [rsp+1E0h+setColor], xmm0
      }
      Draw2DVariableOnGraphDouble(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, *(float *)&forceColorb, *(float *)&shadowa, outHeightChangec, _Buffer, &value2MaxAbs);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+value2MaxAbs]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      if ( _RBX->m_pitchCounterSteering )
      {
        j_sprintf(_Buffer, "PITCH Counter Steering");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm12
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorGreen, 0, 1, outHeightChanged, 0);
        __asm { vmovss  xmm1, dword ptr [rdi] }
      }
      __asm
      {
        vaddss  xmm0, xmm1, xmm6
        vmovss  dword ptr [rdi], xmm0
      }
      if ( _RBX->m_yawCounterSteering )
      {
        j_sprintf(_Buffer, "YAW Counter Steering");
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  dword ptr [rsp+1E0h+outHeightChange], xmm12
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, _Buffer, &colorGreen, 0, 1, outHeightChangee, 0);
        __asm { vmovss  xmm0, dword ptr [rdi] }
      }
      __asm { vaddss  xmm0, xmm0, xmm6 }
    }
    __asm
    {
      vmovaps xmm12, [rsp+1E0h+var_B0]
      vmovaps xmm11, [rsp+1E0h+var_A0]
      vmovaps xmm10, [rsp+1E0h+var_90]
      vmovaps xmm9, [rsp+1E0h+var_80]
      vmovaps xmm8, [rsp+1E0h+var_70]
      vmovaps xmm7, [rsp+1E0h+var_60]
      vmovaps xmm6, [rsp+1E0h+var_50]
      vmovaps xmm13, [rsp+1E0h+var_C0]
      vmovss  dword ptr [rdi], xmm0
    }
  }
}

/*
==============
BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  bool v16; 
  const dvar_t *v31; 
  const dvar_t *v34; 
  const dvar_t *v36; 
  unsigned int v42; 
  bool v46; 
  bool v47; 
  int v57; 
  float v106; 
  __int64 v110; 
  __int64 v111; 
  __int64 v112; 
  int v117; 
  vec3_t angles; 
  vec3_t vec; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vxorps  xmm13, xmm13, xmm13
    vcomiss xmm1, xmm13
    vmovaps xmm9, xmm1
  }
  _RSI = this;
  if ( (unsigned __int64)&v110 != _security_cookie )
  {
    v16 = !this->m_yawSteering;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [r11-0B8h], xmm14
    }
    if ( v16 && !this->m_pitchSteering && (this->m_wasYawSteering || this->m_wasPitchSteering) )
    {
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_overshootProtection, "bg_rcp_m_overshootProtection");
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+390h]
        vmovss  xmm5, dword ptr [rsi+388h]
        vmovss  xmm7, dword ptr [rsi+38Ch]
        vsubss  xmm8, xmm10, xmm0
        vmovss  xmm0, dword ptr [rsi+384h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rsi+384h], xmm3
        vsubss  xmm0, xmm5, dword ptr [rsi+394h]
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm2, xmm1, dword ptr [rsi+394h]
        vmovss  dword ptr [rsi+388h], xmm2
        vsubss  xmm0, xmm7, dword ptr [rsi+398h]
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm2, xmm1, dword ptr [rsi+398h]
        vmovss  dword ptr [rsi+38Ch], xmm2
      }
    }
    v31 = DCONST_DVARBOOL_bg_rcpUseDvars;
    __asm { vdivss  xmm14, xmm10, xmm9 }
    if ( _RSI->m_pitchCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
      {
        _R15 = DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm { vmovss  xmm0, dword ptr [r15+28h] }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rsi+31Ch] }
      }
    }
    else if ( _RSI->m_pitchSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed, "bg_rcp_m_pitchLerpSpeed");
      else
        __asm { vmovss  xmm0, dword ptr [rsi+318h] }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedReturning, "bg_rcp_m_pitchLerpSpeedReturning");
      else
        __asm { vmovss  xmm0, dword ptr [rsi+320h] }
    }
    v16 = !_RSI->m_yawCounterSteering;
    v34 = DCONST_DVARBOOL_bg_rcpUseDvars;
    __asm { vmovss  dword ptr [rsp+140h+var_F0], xmm0 }
    if ( v16 )
    {
      if ( _RSI->m_yawSteering )
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        if ( v34->current.enabled )
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed, "bg_rcp_m_yawLerpSpeed");
        else
          __asm { vmovss  xmm0, dword ptr [rsi+330h] }
      }
      else
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        if ( v34->current.enabled )
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning, "bg_rcp_m_yawLerpSpeedReturning");
        else
          __asm { vmovss  xmm0, dword ptr [rsi+338h] }
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.enabled )
      {
        _R15 = DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm { vmovss  xmm0, dword ptr [r15+28h] }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rsi+334h] }
      }
    }
    v16 = !_RSI->m_yawCounterSteering;
    v36 = DCONST_DVARBOOL_bg_rcpUseDvars;
    __asm { vmovss  dword ptr [rsp+140h+var_F0+4], xmm0 }
    if ( v16 )
    {
      if ( _RSI->m_rollSteering )
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        if ( v36->current.enabled )
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering, "bg_rcp_m_rollLerpSpeedSteering");
        else
          __asm { vmovss  xmm0, dword ptr [rsi+340h] }
      }
      else
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        if ( v36->current.enabled )
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning, "bg_rcp_m_rollLerpSpeedReturning");
        else
          __asm { vmovss  xmm0, dword ptr [rsi+348h] }
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
      {
        _R14 = DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R14);
        __asm { vmovss  xmm0, dword ptr [r14+28h] }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rsi+344h] }
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+388h]
      vmovss  [rsp+140h+var_E8], xmm0
      vmovss  xmm0, dword ptr [rsi+384h]
      vsubss  xmm1, xmm0, dword ptr [rsi+390h]
      vsubss  xmm0, xmm2, dword ptr [rsi+394h]
    }
    v42 = 0;
    __asm
    {
      vmovss  [rsp+140h+var_100], xmm1
      vmovss  xmm1, dword ptr [rsi+38Ch]
      vsubss  xmm2, xmm1, dword ptr [rsi+398h]
      vmovss  dword ptr [rsp+140h+var_F8], xmm2
      vmovss  [rsp+140h+anonymous_1], xmm0
    }
    _RDI = 0i64;
    v46 = 1;
    do
    {
      if ( !v46 )
      {
        LODWORD(v112) = 3;
        LODWORD(v111) = v42;
        v47 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112);
        v46 = 0;
        if ( v47 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm6, [rsp+rdi+140h+var_100]
        vcomiss xmm6, xmm13
      }
      if ( v46 )
      {
        if ( v42 >= 3 )
        {
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm9, [rsp+rdi+140h+var_100]
          vmulss  xmm1, xmm0, dword ptr [rsp+rdi+140h+var_F0]
          vmaxss  xmm6, xmm1, xmm6
        }
      }
      else
      {
        if ( v42 >= 3 )
        {
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
          LODWORD(v112) = 3;
          LODWORD(v111) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm9, [rsp+rdi+140h+var_100]
          vmulss  xmm1, xmm0, dword ptr [rsp+rdi+140h+var_F0]
          vminss  xmm6, xmm1, xmm6
        }
      }
      if ( v42 >= 3 )
      {
        LODWORD(v112) = 3;
        LODWORD(v111) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v111, v112) )
          __debugbreak();
      }
      __asm { vmovss  [rsp+rdi+140h+var_100], xmm6 }
      _RDI += 4i64;
      v46 = ++v42 < 3;
    }
    while ( (int)v42 < 3 );
    __asm
    {
      vmovss  xmm0, [rsp+140h+var_100]
      vaddss  xmm1, xmm0, dword ptr [rsi+390h]
      vmovss  xmm2, [rsp+140h+anonymous_1]
    }
    v57 = v117;
    __asm
    {
      vmovss  dword ptr [rsi+390h], xmm1
      vaddss  xmm0, xmm2, dword ptr [rsi+394h]
      vmovss  xmm1, dword ptr [rsp+140h+var_F8]
      vmovss  dword ptr [rsi+394h], xmm0
      vaddss  xmm2, xmm1, dword ptr [rsi+398h]
      vmovsd  xmm0, [rsp+140h+var_F0]
      vmovss  dword ptr [rsi+398h], xmm2
      vmovsd  qword ptr [rsi+3C0h], xmm0
    }
    LODWORD(_RSI->m_angularVelocitylerpSpeed.v[2]) = v57;
    AxisToAngles((const tmat33_t<vec3_t> *)&_RSI->m_transform, &angles);
    AnglesNormalize360(&angles, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+394h]; angle
      vmovss  xmm6, dword ptr [rsp+140h+angles+4]
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  xmm10, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm8, cs:__real@40c90fdb
      vsubss  xmm1, xmm0, xmm6
      vmovss  xmm6, dword ptr [rsp+140h+angles+8]
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm3, xmm1, xmm10
      vaddss  xmm1, xmm3, xmm9
      vmovss  xmm1, xmm0, xmm1
      vxorps  xmm11, xmm11, xmm11
      vroundss xmm2, xmm11, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm8
      vmulss  xmm12, xmm0, xmm14
      vmovss  xmm0, dword ptr [rsi+398h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovss  xmm6, dword ptr [rsp+140h+angles]
      vmulss  xmm4, xmm1, xmm10
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm9
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm11, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rsi+390h]; angle
      vmulss  xmm7, xmm1, xmm14
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm4, xmm1, xmm10
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm9
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm11, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm6, xmm1, xmm14
      vmovss  dword ptr [rsp+140h+vec+4], xmm6
      vmovss  dword ptr [rsp+140h+vec], xmm7
      vmovss  dword ptr [rsp+140h+vec+8], xmm13
    }
    AxisTransformVec3((const tmat33_t<vec3_t> *)&_RSI->m_transform, &vec, &_RSI->m_angularVelocityWs);
    __asm
    {
      vmovaps xmm14, [rsp+140h+var_B8+8]
      vmovaps xmm11, [rsp+140h+var_88+8]
      vmovaps xmm10, [rsp+140h+var_78+8]
      vmovaps xmm8, [rsp+140h+var_58+8]
      vunpcklps xmm0, xmm6, xmm12
      vmovaps xmm6, [rsp+140h+var_38+8]
      vmovss  dword ptr [rsi+1B8h], xmm12
      vmovaps xmm12, [rsp+140h+var_98+8]
      vmovss  dword ptr [rsp+140h+vec+8], xmm7
    }
    v106 = vec.v[2];
    __asm
    {
      vmovaps xmm7, [rsp+140h+var_48+8]
      vmovsd  qword ptr [rsi+3A4h], xmm0
    }
    _RSI->m_eulerAngularVelocity.v[2] = v106;
  }
  __asm
  {
    vmovaps xmm9, [rsp+140h+var_68+8]
    vmovaps xmm13, [rsp+140h+var_A8+8]
  }
}

/*
==============
BgVehiclePhysicsRCPlane::DoTrace
==============
*/
_BOOL8 BgVehiclePhysicsRCPlane::DoTrace(BgVehiclePhysicsRCPlane *this, Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  int v16; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v23; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_rcplane.cpp", 280, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tBgVehiclePhysicsRCPlane::DoTrace: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v23, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v23, 0, entityNumber, 1, 1, 0, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0B8h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  v16 = 41951633;
  if ( !this->m_hasMissileContents )
    v16 = 41943825;
  extendedData.contents = v16;
  extendedData.ignoreBodies = &v23;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_rcplane.cpp", 300, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  if ( HasHit )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outHitPos);
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, outHitNormal);
    *outHitBody = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
    *outSurflags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
  }
  v19 = hkMemHeapAllocator();
  v23.m_ignoreBodies.m_size = 0;
  if ( v23.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, v23.m_ignoreBodies.m_data, 4, v23.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v23.m_ignoreBodies.m_data = NULL;
  v23.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v20 = hkMemHeapAllocator();
  v23.m_ignoreEntities.m_size = 0;
  if ( v23.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, v23.m_ignoreEntities.m_data, 8, v23.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
Draw2DAxis
==============
*/

void __fastcall Draw2DAxis(const ScreenPlacement *scrPlace, double x, double y, double width, float height)
{
  Material *material; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  char v49; 
  void *retaddr; 

  _R11 = &retaddr;
  material = cgMedia.whiteMaterial;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovss  xmm6, [rsp+0B8h+height]
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vmovaps xmmword ptr [r11-28h], xmm8
    vmovaps xmmword ptr [r11-38h], xmm9
    vmovaps xmmword ptr [r11-48h], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vmovaps xmmword ptr [r11-58h], xmm11
    vmovaps xmmword ptr [r11-68h], xmm12
    vmovaps xmm12, xmm2
    vaddss  xmm11, xmm1, xmm3
    vaddss  xmm2, xmm0, xmm2; p1y
    vmovaps xmm9, xmm3
    vmovss  [rsp+0B8h+var_90], xmm10
    vmovaps xmm3, xmm11; p2x
    vmovss  [rsp+0B8h+var_98], xmm2
    vmovaps xmm8, xmm1
  }
  CG_Draw2DLine(scrPlace, *(float *)&x, *(float *)&_XMM2, *(float *)&_XMM3, v41, v45, 1, 1, &colorWhite, material);
  __asm
  {
    vaddss  xmm6, xmm12, xmm6
    vmovss  [rsp+0B8h+var_90], xmm10
    vmovaps xmm3, xmm8; p2x
    vmovaps xmm2, xmm12; p1y
    vmovaps xmm1, xmm8; p1x
    vmovss  [rsp+0B8h+var_98], xmm6
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v42, v46, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@3f000000
    vaddss  xmm1, xmm0, xmm8; p1x
    vmovss  [rsp+0B8h+var_90], xmm10
    vmovaps xmm3, xmm1; p2x
    vmovaps xmm2, xmm12; p1y
    vmovss  [rsp+0B8h+var_98], xmm6
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v43, v47, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  __asm
  {
    vmovss  [rsp+0B8h+var_90], xmm10
    vmovaps xmm3, xmm11; p2x
    vmovaps xmm2, xmm12; p1y
    vmovaps xmm1, xmm11; p1x
    vmovss  [rsp+0B8h+var_98], xmm6
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v44, v48, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
Draw2DVariableOnGraph
==============
*/

void __fastcall Draw2DVariableOnGraph(const ScreenPlacement *scrPlace, double x, double y, double charHeight, float value, float valueMaxAbs, const char *label, float *outHeightChange)
{
  float setColor; 
  float setColora; 
  int forceColor; 
  int vertAlign; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, cs:__real@41000000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  [rsp+98h+vertAlign], xmm0
    vmovaps xmm8, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm6, xmm1
  }
  Physics_DrawDebugString(scrPlace, *(float *)&x, *(float *)&y, label, &colorWhiteFaded, 0, 1, *(float *)&vertAlign, 0);
  __asm
  {
    vmovss  xmm0, cs:RCP_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:RCP_DEBUG_GRAPH_WIDTH; width
    vaddss  xmm7, xmm9, xmm8
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+98h+setColor], xmm0
  }
  Draw2DAxis(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, setColor);
  __asm
  {
    vmovss  xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vmovss  xmm1, [rsp+98h+value]
    vdivss  xmm2, xmm1, [rsp+98h+valueMaxAbs]
    vmulss  xmm3, xmm2, xmm4
    vaddss  xmm0, xmm4, xmm6
    vaddss  xmm4, xmm7, cs:RCP_DEBUG_GRAPH_HEIGHT
    vaddss  xmm1, xmm3, xmm0; p1x
    vmovss  xmm0, cs:__real@40000000
    vmovss  [rsp+98h+forceColor], xmm0
    vmovaps xmm3, xmm1; p2x
    vmovaps xmm2, xmm7; p1y
    vmovss  dword ptr [rsp+98h+setColor], xmm4
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, *(float *)&forceColor, 1, 1, &colorRed, cgMedia.whiteMaterial);
  __asm { vaddss  xmm1, xmm8, cs:RCP_DEBUG_GRAPH_HEIGHT }
  _RAX = outHeightChange;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm8, [rsp+98h+var_38]
    vaddss  xmm2, xmm1, xmm7
    vmovaps xmm7, [rsp+98h+var_28]
    vsubss  xmm3, xmm2, xmm9
    vmovaps xmm9, [rsp+98h+var_48]
    vmovss  dword ptr [rax], xmm3
  }
}

/*
==============
Draw2DVariableOnGraphDouble
==============
*/

void __fastcall Draw2DVariableOnGraphDouble(const ScreenPlacement *scrPlace, double x, double y, double charHeight, float value, float valueMaxAbs, float value2, float value2MaxAbs, const char *label, float *outHeightChange)
{
  float setColor; 
  float setColora; 
  float setColorb; 
  int forceColor; 
  int forceColora; 
  int vertAlign; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, cs:__real@41000000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovss  [rsp+0A8h+vertAlign], xmm0
    vmovaps xmm10, xmm3
    vmovaps xmm11, xmm2
    vmovaps xmm8, xmm1
  }
  Physics_DrawDebugString(scrPlace, *(float *)&x, *(float *)&y, label, &colorWhiteFaded, 0, 1, *(float *)&vertAlign, 0);
  __asm
  {
    vmovss  xmm0, cs:RCP_DEBUG_GRAPH_HEIGHT
    vmovss  xmm3, cs:RCP_DEBUG_GRAPH_WIDTH; width
    vaddss  xmm9, xmm11, xmm10
    vmovaps xmm2, xmm9; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+0A8h+setColor], xmm0
  }
  Draw2DAxis(scrPlace, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, setColor);
  __asm
  {
    vmovss  xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vmovss  xmm1, [rsp+0A8h+value]
    vdivss  xmm2, xmm1, [rsp+0A8h+valueMaxAbs]
    vmovss  xmm6, cs:__real@40000000
    vmulss  xmm3, xmm2, xmm4
    vaddss  xmm0, xmm4, xmm8
    vaddss  xmm4, xmm9, cs:RCP_DEBUG_GRAPH_HEIGHT
    vaddss  xmm1, xmm3, xmm0; p1x
    vmovss  [rsp+0A8h+forceColor], xmm6
    vmovaps xmm3, xmm1; p2x
    vmovaps xmm2, xmm9; p1y
    vmovss  dword ptr [rsp+0A8h+setColor], xmm4
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColora, *(float *)&forceColor, 1, 1, &colorRed, cgMedia.whiteMaterial);
  __asm
  {
    vmovss  xmm0, cs:RCP_DEBUG_GRAPH_WIDTH
    vmulss  xmm4, xmm0, cs:__real@3f000000
    vmovss  xmm1, [rsp+0A8h+value2]
    vdivss  xmm2, xmm1, [rsp+0A8h+value2MaxAbs]
    vmulss  xmm3, xmm2, xmm4
    vaddss  xmm0, xmm4, xmm8
    vaddss  xmm4, xmm9, cs:RCP_DEBUG_GRAPH_HEIGHT
    vaddss  xmm1, xmm3, xmm0; p1x
    vmovss  [rsp+0A8h+forceColor], xmm6
    vmovaps xmm3, xmm1; p2x
    vmovaps xmm2, xmm9; p1y
    vmovss  dword ptr [rsp+0A8h+setColor], xmm4
  }
  CG_Draw2DLine(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, setColorb, *(float *)&forceColora, 1, 1, &colorGreen, cgMedia.whiteMaterial);
  __asm { vaddss  xmm1, xmm10, cs:RCP_DEBUG_GRAPH_HEIGHT }
  _RAX = outHeightChange;
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vaddss  xmm2, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-30h]
    vsubss  xmm3, xmm2, xmm11
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovss  dword ptr [rax], xmm3
  }
}

/*
==============
BgVehiclePhysicsRCPlane::IsBoosting
==============
*/
_BOOL8 BgVehiclePhysicsRCPlane::IsBoosting(BgVehiclePhysicsRCPlane *this)
{
  return this->m_doBoost;
}

/*
==============
BgVehiclePhysicsRCPlane::LinearVelocityAdjust
==============
*/
void BgVehiclePhysicsRCPlane::LinearVelocityAdjust(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  bool m_playerControlled; 
  float v4; 

  m_playerControlled = this->m_playerControlled;
  _RDI = this;
  if ( m_playerControlled && !this->m_prevPlayerControlled )
  {
    this->m_wasControlled = 1;
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_lerpEuler);
    v4 = _RDI->m_lerpEuler.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+390h]
      vmovsd  qword ptr [rdi+384h], xmm0
    }
    _RDI->m_euler.v[2] = v4;
    m_playerControlled = _RDI->m_playerControlled;
  }
  __asm { vmovss  xmm2, dword ptr [rdi+374h] }
  _RDI->m_prevPlayerControlled = m_playerControlled;
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rdi+174h]
    vmovss  dword ptr [rdi+1A4h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+178h]
    vmovss  dword ptr [rdi+1A8h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+17Ch]
    vmovss  dword ptr [rdi+1ACh], xmm0
  }
}

/*
==============
BgVehiclePhysicsRCPlane::PitchAndBank
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::PitchAndBank(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  BOOL v15; 
  bool v16; 
  bool v36; 
  bool v37; 
  const dvar_t *v69; 
  const dvar_t *v71; 
  char v80; 
  const dvar_t *v81; 
  const dvar_t *v93; 
  const dvar_t *v97; 
  const dvar_t *v106; 
  const dvar_t *v109; 
  const dvar_t *v115; 
  const dvar_t *v116; 
  bool enabled; 
  const dvar_t *v118; 
  bool v119; 
  const dvar_t *v122; 
  const dvar_t *v129; 
  const dvar_t *v136; 
  float v156; 
  vec3_t angles; 
  char v159; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
    vxorps  xmm12, xmm12, xmm12
  }
  _RDI = this;
  __asm
  {
    vmovss  dword ptr [rsp+128h+var_E0], xmm12
    vmovss  dword ptr [rsp+128h+var_E0+4], xmm12
    vmovss  [rsp+128h+var_D8], xmm12
    vmovaps xmm15, xmm1
  }
  v15 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 2, 4);
  v16 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 2, 4);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+0D0h]
    vmovss  xmm10, dword ptr [rdi+0F0h]
    vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm14, cs:__real@3f800000
  }
  switch ( v15 + 3 * v16 )
  {
    case 1:
      __asm { vmovaps xmm10, xmm3 }
      break;
    case 3:
      break;
    case 4:
      switch ( _RDI->m_controls.valuePolicy[2] )
      {
        case VP_MAXABS:
          __asm
          {
            vandps  xmm0, xmm10, xmm11
            vandps  xmm1, xmm3, xmm11
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm10, xmm10, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_MINABS:
          __asm
          {
            vandps  xmm0, xmm10, xmm11
            vandps  xmm1, xmm3, xmm11
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm10, xmm10, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE:
          __asm
          {
            vaddss  xmm0, xmm10, xmm3
            vmulss  xmm10, xmm0, cs:__real@3f000000
          }
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_PLAYER:
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm14, xmm1
            vmulss  xmm2, xmm0, xmm10
            vmulss  xmm1, xmm1, xmm3
            vaddss  xmm10, xmm2, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_EXTERNAL:
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm14, xmm1
            vmulss  xmm2, xmm0, xmm3
            vmulss  xmm1, xmm1, xmm10
            vaddss  xmm10, xmm2, xmm1
          }
          goto LABEL_16;
      }
    default:
      __asm { vxorps  xmm10, xmm10, xmm10 }
      break;
  }
LABEL_16:
  v36 = 0;
  v37 = !_RDI->m_gamepadInput;
  __asm { vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000 }
  if ( _RDI->m_gamepadInput )
  {
    __asm
    {
      vandps  xmm0, xmm10, xmm11
      vcomiss xmm0, xmm12
    }
    if ( _RDI->m_gamepadInput )
    {
      __asm
      {
        vdivss  xmm1, xmm10, xmm0
        vsubss  xmm0, xmm0, cs:__real@3e214285
        vmulss  xmm1, xmm1, xmm0
        vmulss  xmm10, xmm1, cs:__real@3f97ecdc
      }
    }
  }
  else
  {
    v36 = _RDI->m_vehicleAnimProfile < (unsigned int)VEH_ANIMPROFILE_FOXTROT;
    v37 = _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_FOXTROT;
    if ( _RDI->m_vehicleAnimProfile == VEH_ANIMPROFILE_FOXTROT )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+378h]
        vmulss  xmm1, xmm6, cs:__real@3c010204
        vmovss  xmm0, cs:__real@41200000; X
        vandps  xmm1, xmm1, xmm11; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm8, cs:__real@42fe0000
        vsubss  xmm2, xmm0, xmm14
        vxorps  xmm1, xmm2, xmm13
        vcmpless xmm0, xmm12, xmm6
        vblendvps xmm1, xmm1, xmm2, xmm0
        vmulss  xmm0, xmm1, xmm8; val
        vmovss  xmm1, cs:__real@c2fe0000; min
        vmovaps xmm2, xmm8; max
        vmovss  dword ptr [rdi+378h], xmm0
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm10, cs:__real@3c010204
        vmovss  dword ptr [rdi+378h], xmm0
        vmovss  xmm0, cs:__real@41200000; X
        vandps  xmm1, xmm1, xmm11; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, cs:__real@c2fe0000; min
        vsubss  xmm3, xmm0, xmm14
        vxorps  xmm2, xmm3, xmm13
        vcmpless xmm0, xmm12, xmm10
        vblendvps xmm0, xmm2, xmm3, xmm0
        vmulss  xmm0, xmm0, xmm8; val
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm10, xmm0 }
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3c23d70a
    vmovss  xmm1, dword ptr [rdi+378h]
  }
  _RDI->m_wasPitchSteering = _RDI->m_pitchSteering;
  __asm
  {
    vandps  xmm1, xmm1, xmm11
    vcomiss xmm1, xmm7
    vandps  xmm8, xmm10, xmm11
  }
  _RDI->m_pitchSteering = !v36 && !v37;
  __asm { vcomiss xmm8, xmm7 }
  _RDI->m_wasYawSteering = _RDI->m_yawSteering;
  _RDI->m_yawSteering = !v36 && !v37;
  v69 = DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch;
  if ( !DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useChangeDirLogicPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  if ( v69->current.enabled )
  {
    if ( _RDI->m_pitchSteering )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+3A4h]
        vmulss  xmm1, xmm0, dword ptr [rdi+378h]
        vcomiss xmm1, cs:__real@bc23d70a
      }
    }
    _RDI->m_pitchCounterSteering = 0;
  }
  else
  {
    _RDI->m_yawCounterSteering = 0;
  }
  v71 = DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic;
  if ( !DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useChangeDirLogic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  if ( !v71->current.enabled )
    goto LABEL_36;
  if ( !_RDI->m_yawSteering )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm3, xmm0, dword ptr [rdi+184h]
    vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm2, xmm1, dword ptr [rdi+180h]
    vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vmulss  xmm1, xmm0, dword ptr [rdi+188h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm2, xmm10
    vcomiss xmm3, xmm7
  }
  if ( _RDI->m_yawSteering )
    v80 = 1;
  else
LABEL_36:
    v80 = 0;
  _RDI->m_yawCounterSteering = v80;
  __asm { vcomiss xmm8, xmm7 }
  if ( _RDI->m_stabilizeRoll )
  {
    _RDI->m_rollSteering = 0;
    _RDI->m_euler.v[2] = 0.0;
    __asm { vmovss  [rsp+128h+var_D8], xmm12 }
  }
  v81 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v81);
  if ( v81->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_rollMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_rollMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm6, dword ptr [rdi+34Ch] }
  }
  __asm
  {
    vmovaps xmm2, xmm14; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm8; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, xmm6; max
    vmovss  xmm0, dword ptr [rdi+38Ch]; val
    vxorps  xmm1, xmm2, xmm13; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+38Ch], xmm0
    vmovss  xmm1, dword ptr [rdi+378h]
    vandps  xmm1, xmm1, xmm11
    vcomiss xmm1, xmm7
  }
  if ( v36 || v37 )
  {
    if ( _RDI->m_stabilizePitch )
    {
      __asm { vmovss  dword ptr [rsp+128h+var_E0], xmm12 }
      _RDI->m_euler.v[0] = 0.0;
    }
  }
  else
  {
    v93 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( _RDI->m_pitchCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      if ( v93->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rdi+310h] }
      }
      v97 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v97);
      if ( v97->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchChangeDirFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmulss  xmm0, xmm0, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+314h]
          vmulss  xmm0, xmm0, xmm6
        }
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      if ( v93->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rdi+310h] }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rdi+378h]
      vmovss  dword ptr [rsp+128h+var_E0], xmm0
      vmulss  xmm0, xmm0, xmm15
      vaddss  xmm1, xmm0, dword ptr [rdi+384h]
      vmovss  dword ptr [rdi+384h], xmm1
    }
  }
  v106 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v106);
  if ( v106->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm6, dword ptr [rdi+324h] }
  }
  v109 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v109);
  if ( v109->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+324h] }
  }
  __asm
  {
    vxorps  xmm1, xmm0, xmm13; min
    vmovss  xmm0, dword ptr [rdi+384h]; val
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+384h], xmm0 }
  v115 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v115);
  if ( v115->current.enabled )
  {
    v116 = DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed;
    if ( !DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useRollForYawSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v116);
    enabled = v116->current.enabled;
  }
  else
  {
    enabled = _RDI->m_useRollForYawSpeed;
  }
  v118 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !enabled )
  {
    if ( _RDI->m_yawCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v118);
      if ( v118->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rdi+328h] }
      }
      v136 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v136);
      if ( v136->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawChangeDirFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmulss  xmm0, xmm0, xmm6
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+32Ch]
          vmulss  xmm0, xmm0, xmm6
        }
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v118);
      if ( v118->current.enabled )
      {
        _RBX = DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      }
      else
      {
        __asm { vmovss  xmm0, dword ptr [rdi+328h] }
      }
    }
    __asm { vmulss  xmm0, xmm0, xmm10 }
    goto LABEL_163;
  }
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v118);
  v119 = !v118->current.enabled;
  if ( v118->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_rollMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_rollMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+34Ch] }
  }
  __asm { vucomiss xmm0, xmm12 }
  if ( !v119 )
  {
    if ( _RDI->m_yawSteering )
      goto LABEL_121;
    if ( !_RDI->m_wasYawSteering )
      goto LABEL_121;
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_overshootProtection, "bg_rcp_m_overshootProtection");
    __asm { vcomiss xmm0, xmm12 }
    if ( v36 || v37 )
    {
LABEL_121:
      AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &angles);
      v122 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v122);
      if ( v122->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rdi+34Ch] }
      }
      __asm
      {
        vmovss  xmm1, cs:__real@bf800000; min
        vmulss  xmm3, xmm1, dword ptr [rsp+128h+angles+8]
        vdivss  xmm0, xmm3, xmm2; val
        vmovaps xmm2, xmm14; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v129 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v129);
      if ( v129->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        __asm { vmulss  xmm0, xmm0, xmm6 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+328h]
          vmulss  xmm0, xmm0, xmm6
        }
      }
LABEL_163:
      __asm
      {
        vmovss  dword ptr [rsp+128h+var_E0+4], xmm0
        vmulss  xmm0, xmm0, xmm15
        vaddss  xmm1, xmm0, dword ptr [rdi+388h]
        vmovss  dword ptr [rdi+388h], xmm1
      }
      goto LABEL_164;
    }
  }
  __asm { vmovss  dword ptr [rsp+128h+var_E0+4], xmm12 }
LABEL_164:
  __asm
  {
    vmovsd  xmm0, [rsp+128h+var_E0]
    vmovsd  qword ptr [rdi+3B4h], xmm0
  }
  _RDI->m_goalAngularVelocity.v[2] = v156;
  _R11 = &v159;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+128h+var_B8]
  }
}

/*
==============
BgVehiclePhysicsRCPlane::SetMinSpeed
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetMinSpeed(BgVehiclePhysicsRCPlane *this, double speedmph)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2ECh]
    vmovss  dword ptr [rcx+2E4h], xmm1
    vmaxss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rcx+2ECh], xmm1
  }
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedBoosting
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetTopSpeedBoosting(BgVehiclePhysicsRCPlane *this, double speedmph)
{
  __asm { vmovss  dword ptr [rcx+300h], xmm1 }
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting(BgVehiclePhysicsRCPlane *this, double speedmph)
{
  __asm { vmovss  dword ptr [rcx+2E8h], xmm1 }
}

/*
==============
BgVehiclePhysicsRCPlane::Setup
==============
*/
bool BgVehiclePhysicsRCPlane::Setup(BgVehiclePhysicsRCPlane *this, BGVehicles *vehSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  bool result; 
  int physics_boostButton; 
  Physics_WorldId m_worldId; 
  const char *name; 
  char v29; 
  int v30; 
  char v31; 
  const dvar_t *v32; 

  _RBX = this;
  _RDI = vehDef;
  result = BgVehiclePhysics::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    __asm { vmovss  xmm2, cs:__real@3f800000 }
    _RBX->m_acceleration = vehDef->accel;
    _RBX->m_deceleration = vehDef->vehiclePhysicsDef.physics_decel;
    _RBX->m_timeAfterColl = vehDef->vehiclePhysicsDef.physics_timeAfterColl;
    _RBX->m_minSpeed = vehDef->vehiclePhysicsDef.physics_minSpeed;
    _RBX->m_stabilizeRoll = vehDef->vehiclePhysicsDef.physics_stabilizeRoll;
    _RBX->m_stabilizePitch = vehDef->vehiclePhysicsDef.physics_stabilizePitch;
    _EAX = vehDef->vehiclePhysicsDef.physics_pitchInversion;
    __asm { vmovd   xmm0, eax }
    _ESI = 0;
    __asm
    {
      vmovd   xmm1, esi
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@bf800000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [rbx+2F4h], xmm0
    }
    _RBX->m_controlMode = vehDef->vehiclePhysicsDef.physics_controlMode;
    physics_boostButton = vehDef->vehiclePhysicsDef.physics_boostButton;
    __asm { vxorps  xmm2, xmm2, xmm2 }
    if ( physics_boostButton < 0 )
      physics_boostButton = 0;
    _RBX->m_boostButton = physics_boostButton;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+21Ch]
      vmaxss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx+300h], xmm0
    }
    _RBX->m_holdToBoost = vehDef->vehiclePhysicsDef.physics_holdToBoost;
    _RBX->m_hasMissileContents = vehDef->vehiclePhysicsDef.physics_contentsAsMissile;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+220h]
      vmaxss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx+36Ch], xmm0
      vmovss  xmm1, dword ptr [rdi+224h]
    }
    *(_WORD *)&_RBX->m_prevPlayerControlled = 0;
    *(_QWORD *)&_RBX->m_currentSpeed = 0i64;
    *(_WORD *)&_RBX->m_doBoost = 0;
    _RBX->m_lastDoBoost = 0;
    _RBX->m_boostOneTimeEventDone = 0;
    __asm
    {
      vmaxss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+370h], xmm0
    }
    _RBX->m_useChangeDirLogic = vehDef->vehiclePhysicsDef.physics_rcpUseChangeDirLogic;
    _RBX->m_useChangeDirLogicPitch = vehDef->vehiclePhysicsDef.physics_rcpUseChangeDirLogicPitch;
    _RBX->m_useRollForYawSpeed = vehDef->vehiclePhysicsDef.physics_rcpUseRollForYawSpeed;
    _RBX->m_overshootProtection = vehDef->vehiclePhysicsDef.physics_rcpOvershootProtection;
    _RBX->m_pitchTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpPitchTurnSpeed;
    _RBX->m_pitchChangeDirFactor = vehDef->vehiclePhysicsDef.physics_rcpPitchChangeDirFactor;
    _RBX->m_pitchLerpSpeed = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeed;
    _RBX->m_pitchLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeedChangeDir;
    _RBX->m_pitchLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeedReturning;
    _RBX->m_pitchMaxAngle = vehDef->vehiclePhysicsDef.physics_rcpPitchMaxAngle;
    _RBX->m_yawTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpYawTurnSpeed;
    _RBX->m_yawChangeDirFactor = vehDef->vehiclePhysicsDef.physics_rcpYawChangeDirFactor;
    _RBX->m_yawLerpSpeed = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeed;
    _RBX->m_yawLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeedChangeDir;
    _RBX->m_yawLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeedReturning;
    _RBX->m_rollTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpRollTurnSpeed;
    m_worldId = _RBX->m_worldId;
    _RBX->m_rollLerpSpeedSteering = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedSteering;
    _RBX->m_rollLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedChangeDir;
    _RBX->m_rollLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedReturning;
    _RBX->m_rollMaxAngle = vehDef->vehiclePhysicsDef.physics_rcpRollMaxAngle;
    _RBX->m_accelGoingDown = vehDef->vehiclePhysicsDef.physics_rcpAccelGoingDown;
    _RBX->m_decelGoingUp = vehDef->vehiclePhysicsDef.physics_rcpDecelGoingUp;
    _RBX->m_traceAhead = vehDef->vehiclePhysicsDef.physics_rcpTraceAhead;
    _RBX->m_rollSteering = 0;
    _RBX->m_boostEvent.shakeScale = vehDef->vehiclePhysicsDef.physics_rcpBoostShakeCam.v[0];
    __asm { vcvttss2si eax, dword ptr [rdi+23Ch] }
    _RBX->m_boostEvent.shakeDuration = _EAX;
    _RBX->m_boostEvent.shakeRadius = vehDef->vehiclePhysicsDef.physics_rcpBoostShakeCam.v[2];
    _RBX->m_boostEvent.BoostSound = 0;
    if ( Physics_IsPredictiveWorld(m_worldId) )
    {
      name = vehDef->vehiclePhysicsDef.physics_rcpBoostSound.name;
      if ( name )
      {
        v29 = *name;
        if ( *name )
        {
          v30 = 5381;
          do
          {
            ++name;
            v31 = v29 | 0x20;
            if ( (unsigned int)(v29 - 65) >= 0x1A )
              v31 = v29;
            v30 = 65599 * v30 + v31;
            v29 = *name;
          }
          while ( *name );
          if ( !v30 )
            v30 = 1;
        }
        else
        {
          v30 = 0;
        }
        _RBX->m_boostEvent.BoostSound = v30;
      }
    }
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    {
      if ( vehDef->name && I_strstr(vehDef->name, "rcplane_physics") )
        _RBX->m_netcodeType = VEH_NETCODE_CLIENT_PRED_SB;
    }
    else
    {
      _RBX->m_netcodeType = VEH_NETCODE_SERVER_AUTH;
    }
    _RBX->m_topSpeedForward = 0i64;
    *(_QWORD *)_RBX->m_topAngularSpeedLs.v = 0i64;
    _RBX->m_topAngularSpeedLs.v[2] = 0.0;
    _RBX->m_topSpeed = vehDef->topSpeed;
    v32 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      _RDI = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rbx+2E8h] }
    }
    result = 1;
    __asm { vmovss  dword ptr [rbx+2ECh], xmm0 }
  }
  return result;
}

/*
==============
BgVehiclePhysicsRCPlane::Step
==============
*/

bool __fastcall BgVehiclePhysicsRCPlane::Step(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  bool m_playerControlled; 
  float v10; 
  bool result; 

  __asm
  {
    vmovaps [rsp+0D8h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RDI = this;
  BgVehiclePhysics::Step(this, *(float *)&deltaTime);
  if ( _RDI->m_playerControlled || _RDI->m_wasControlled )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm7, dword ptr [rdi+358h]
      vmovaps xmm1, xmm6; deltaTime
    }
    BgVehiclePhysicsRCPlane::BoostControl(_RDI, *(float *)&_XMM1);
    m_playerControlled = _RDI->m_playerControlled;
    __asm { vmovaps xmm7, [rsp+0D8h+var_28] }
    if ( m_playerControlled && !_RDI->m_prevPlayerControlled )
    {
      _RDI->m_wasControlled = 1;
      AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &_RDI->m_lerpEuler);
      v10 = _RDI->m_lerpEuler.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rdi+390h]
        vmovsd  qword ptr [rdi+384h], xmm0
      }
      _RDI->m_euler.v[2] = v10;
      m_playerControlled = _RDI->m_playerControlled;
    }
    __asm { vmovss  xmm3, dword ptr [rdi+374h] }
    _RDI->m_prevPlayerControlled = m_playerControlled;
    __asm
    {
      vmulss  xmm0, xmm3, dword ptr [rdi+174h]
      vmovss  dword ptr [rdi+1A4h], xmm0
      vmulss  xmm2, xmm3, dword ptr [rdi+178h]
      vmovss  dword ptr [rdi+1A8h], xmm2
      vmulss  xmm0, xmm3, dword ptr [rdi+17Ch]
      vmovaps xmm1, xmm6; deltaTime
      vmovss  dword ptr [rdi+1ACh], xmm0
    }
    BgVehiclePhysicsRCPlane::Thrust(_RDI, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm6; deltaTime }
    BgVehiclePhysicsRCPlane::PitchAndBank(_RDI, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm6; deltaTime }
    BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity(_RDI, *(float *)&_XMM1);
    _RDI->m_lastDoBoost = _RDI->m_doBoost;
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
  return result;
}

/*
==============
BgVehiclePhysicsRCPlane::StepClientKeyframe
==============
*/
void BgVehiclePhysicsRCPlane::StepClientKeyframe(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  BgVehiclePhysicsRCPlane::BoostControl(this, deltaTime);
  this->m_lastDoBoost = this->m_doBoost;
}

/*
==============
BgVehiclePhysicsRCPlane::SupportsFeature
==============
*/
bool BgVehiclePhysicsRCPlane::SupportsFeature(BgVehiclePhysicsRCPlane *this, BgVehiclePhysicsFeature feat)
{
  return feat == VPFEAT_AIR_VEHICLE;
}

/*
==============
BgVehiclePhysicsRCPlane::Thrust
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::Thrust(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  const dvar_t *v8; 
  char v11; 
  bool v12; 
  const dvar_t *v26; 
  const dvar_t *v29; 
  const dvar_t *v32; 
  BOOL v37; 
  bool v38; 
  BOOL v64; 
  bool v65; 
  const dvar_t *v83; 
  char v85; 
  const dvar_t *v88; 
  char v89; 
  bool v90; 
  const dvar_t *v93; 
  const dvar_t *v99; 
  char v100; 
  bool v101; 
  const dvar_t *v110; 
  const dvar_t *v114; 
  char v115; 
  bool v116; 
  const dvar_t *v119; 
  char v120; 
  const dvar_t *v125; 
  double v142; 
  double v143; 

  v8 = DCONST_DVARBOOL_bg_rcpUseDvars;
  __asm { vmovaps [rsp+0C8h+var_88], xmm12 }
  _RDI = this;
  __asm { vmovaps xmm12, xmm1 }
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v11 = 0;
  v12 = !v8->current.enabled;
  if ( v8->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_timeAfterColl;
    if ( !DCONST_DVARFLT_bg_rcp_m_timeAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_timeAfterColl") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+2E0h] }
  }
  __asm { vcomiss xmm0, dword ptr [rdi+2B0h] }
  if ( !(v11 | v12) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1A4h]
      vmovss  xmm2, dword ptr [rdi+1A8h]
      vmovss  xmm3, dword ptr [rdi+1ACh]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [rdi+374h], xmm0
    }
    goto LABEL_169;
  }
  __asm
  {
    vmovaps [rsp+0C8h+var_58], xmm9
    vmovaps [rsp+0C8h+var_68], xmm10
    vmovaps [rsp+0C8h+var_78], xmm11
    vxorps  xmm11, xmm11, xmm11
  }
  if ( _RDI->m_playerControlled || _RDI->m_wasControlled )
  {
    v26 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled )
    {
      _RBX = DCONST_DVARFLT_bg_rcp_m_minSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_minSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_minSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm9, dword ptr [rdi+2E4h] }
    }
  }
  else
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  __asm
  {
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps [rsp+0C8h+var_48], xmm7
  }
  if ( !_RDI->m_doBoost )
  {
    v37 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 1, 4);
    v38 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 1, 4);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0CCh]
      vmovss  xmm6, dword ptr [rdi+0ECh]
      vmovss  xmm7, cs:__real@3f800000
    }
    switch ( v37 + 3 * v38 )
    {
      case 1:
        __asm { vmovaps xmm6, xmm3 }
        break;
      case 3:
        break;
      case 4:
        switch ( _RDI->m_controls.valuePolicy[1] )
        {
          case VP_MAXABS:
            __asm
            {
              vandps  xmm0, xmm6, xmm10
              vandps  xmm1, xmm3, xmm10
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_63;
          case VP_MINABS:
            __asm
            {
              vandps  xmm0, xmm6, xmm10
              vandps  xmm1, xmm3, xmm10
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_63;
          case VP_AVERAGE:
            __asm
            {
              vaddss  xmm0, xmm6, xmm3
              vmulss  xmm6, xmm0, cs:__real@3f000000
            }
            goto LABEL_63;
          case VP_AVERAGE_WEIGHT_PLAYER:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm7, xmm1
              vmulss  xmm2, xmm0, xmm6
              vmulss  xmm1, xmm1, xmm3
              vaddss  xmm6, xmm2, xmm1
            }
            goto LABEL_63;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm7, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm1, xmm6
              vaddss  xmm6, xmm2, xmm1
            }
            goto LABEL_63;
        }
      default:
        __asm { vxorps  xmm6, xmm6, xmm6 }
        break;
    }
LABEL_63:
    v64 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 0, 4);
    v65 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 0, 4);
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0C8h]
      vmovss  xmm3, dword ptr [rdi+0E8h]
    }
    switch ( v64 + 3 * v65 )
    {
      case 1:
        __asm { vmovaps xmm3, xmm4 }
        break;
      case 3:
        break;
      case 4:
        switch ( _RDI->m_controls.valuePolicy[0] )
        {
          case VP_MAXABS:
            __asm
            {
              vandps  xmm0, xmm3, xmm10
              vandps  xmm1, xmm4, xmm10
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_78;
          case VP_MINABS:
            __asm
            {
              vandps  xmm0, xmm3, xmm10
              vandps  xmm1, xmm4, xmm10
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_78;
          case VP_AVERAGE:
            __asm
            {
              vaddss  xmm0, xmm3, xmm4
              vmulss  xmm3, xmm0, cs:__real@3f000000
            }
            goto LABEL_78;
          case VP_AVERAGE_WEIGHT_PLAYER:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm7, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm1, xmm4
              vaddss  xmm3, xmm2, xmm1
            }
            goto LABEL_78;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm7, xmm1
              vmulss  xmm2, xmm0, xmm4
              vmulss  xmm1, xmm1, xmm3
              vaddss  xmm3, xmm2, xmm1
            }
            goto LABEL_78;
        }
      default:
        __asm { vxorps  xmm3, xmm3, xmm3 }
        break;
    }
LABEL_78:
    v83 = DCONST_DVARBOOL_bg_rcpUseDvars;
    __asm { vsubss  xmm7, xmm3, xmm6 }
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    v85 = 0;
    if ( v83->current.enabled )
    {
      _RBX = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rdi+2E8h] }
    }
    __asm { vcomiss xmm0, dword ptr [rdi+2ECh] }
    if ( v85 )
    {
      v88 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v88);
      v89 = 0;
      v90 = !v88->current.enabled;
      if ( v88->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostDecel, "bg_rcp_m_boostDecel");
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm6, dword ptr [rdi+370h] }
      }
      __asm { vcomiss xmm7, cs:__real@3a83126f }
      if ( !(v89 | v90) )
      {
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_acceleration, "bg_rcp_m_acceleration");
        else
          __asm { vmovss  xmm0, dword ptr [rdi+2D8h] }
        __asm { vsubss  xmm6, xmm6, xmm0 }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_deceleration, "bg_rcp_m_deceleration");
        else
          __asm { vmovss  xmm0, dword ptr [rdi+2DCh] }
        __asm { vmaxss  xmm6, xmm6, xmm0 }
      }
      v93 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      v85 = 0;
      if ( v93->current.enabled )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_topSpeed, "bg_rcp_m_topSpeed");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rdi+2E8h] }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+2ECh]
        vmulss  xmm1, xmm6, xmm12
        vsubss  xmm1, xmm0, xmm1
        vmaxss  xmm2, xmm1, xmm2
        vmovss  dword ptr [rdi+2ECh], xmm2
      }
    }
    __asm { vcomiss xmm7, xmm11 }
    v99 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( v85 )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v99);
      v100 = 0;
      v101 = !v99->current.enabled;
      if ( v99->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_deceleration, "bg_rcp_m_deceleration");
      else
        __asm { vmovss  xmm0, dword ptr [rdi+2DCh] }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v99);
      v100 = 0;
      v101 = !v99->current.enabled;
      if ( v99->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_acceleration, "bg_rcp_m_acceleration");
      else
        __asm { vmovss  xmm0, dword ptr [rdi+2D8h] }
    }
    __asm
    {
      vmaxss  xmm6, xmm9, dword ptr [rdi+2ECh]
      vcomiss xmm9, xmm6
      vmulss  xmm0, xmm0, xmm7
      vmulss  xmm1, xmm0, xmm12
      vaddss  xmm7, xmm1, dword ptr [rdi+374h]
    }
    if ( !(v100 | v101) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0C8h+var_98], xmm0
        vcvtss2sd xmm1, xmm9, xmm9
        vmovsd  [rsp+0C8h+var_A0], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v142, v143) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, xmm9
      vminss  xmm6, xmm0, xmm6
      vmovss  dword ptr [rdi+374h], xmm6
    }
    v110 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v110);
    if ( v110->current.enabled )
    {
      _RBX = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rdi+2E8h] }
    }
    __asm
    {
      vmaxss  xmm7, xmm6, xmm0
      vmovaps xmm0, xmm7
    }
    goto LABEL_135;
  }
  v29 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_boostSpeed;
    if ( !DCONST_DVARFLT_bg_rcp_m_boostSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_boostSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm7, dword ptr [rdi+300h] }
  }
  v32 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( _RDI->m_holdToBoost )
  {
    __asm { vmaxss  xmm6, xmm7, xmm9 }
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostAccel, "bg_rcp_m_boostAccel");
    else
      __asm { vmovss  xmm0, dword ptr [rdi+36Ch] }
    __asm
    {
      vmulss  xmm0, xmm0, xmm12
      vaddss  xmm0, xmm0, dword ptr [rdi+374h]; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rdi+374h], xmm0 }
  }
  else
  {
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostSpeed, "bg_rcp_m_boostSpeed");
      __asm { vmovss  dword ptr [rdi+374h], xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+300h]
        vmovss  dword ptr [rdi+374h], xmm0
      }
    }
  }
LABEL_135:
  __asm { vmovss  dword ptr [rdi+2ECh], xmm0 }
  v114 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v114);
  v115 = 0;
  v116 = !v114->current.enabled;
  if ( v114->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+324h] }
  }
  __asm { vcomiss xmm0, cs:__real@3c23d70a }
  if ( !(v115 | v116) )
  {
    v119 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v119);
    v120 = 0;
    if ( v119->current.enabled )
    {
      _RBX = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
      if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm2, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rdi+324h] }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+390h]
      vcomiss xmm1, xmm11
    }
    v125 = DCONST_DVARBOOL_bg_rcpUseDvars;
    __asm
    {
      vandps  xmm0, xmm1, xmm10
      vdivss  xmm6, xmm0, xmm2
    }
    if ( v120 )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v125);
      if ( v125->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_decelGoingUp, "bg_rcp_m_decelGoingUp");
      else
        __asm { vmovss  xmm0, dword ptr [rdi+354h] }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v125);
      if ( v125->current.enabled )
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_accelGoingDown, "bg_rcp_m_accelGoingDown");
      else
        __asm { vmovss  xmm0, dword ptr [rdi+350h] }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm6
      vmulss  xmm3, xmm0, xmm12
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm11, dword ptr [rdi+390h]
      vblendvps xmm0, xmm2, xmm3, xmm0
      vaddss  xmm0, xmm0, dword ptr [rdi+374h]; val
      vmaxss  xmm2, xmm7, xmm9; max
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rdi+374h], xmm0 }
  }
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm9, [rsp+0C8h+var_58]
    vmovaps xmm10, [rsp+0C8h+var_68]
    vmovaps xmm11, [rsp+0C8h+var_78]
  }
LABEL_169:
  __asm { vmovaps xmm12, [rsp+0C8h+var_88] }
}

/*
==============
BgVehiclePhysicsRCPlane::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsRCPlane::UpdatePlayerInputControls(BgVehiclePhysicsRCPlane *this, const usercmd_s *cmd, const playerState_s *ps)
{
  const dvar_t *v9; 
  bool m_gamepadInput; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  unsigned int unsignedInt; 
  unsigned int v28; 
  unsigned int v29; 
  const dvar_t *v36; 
  bool v40; 
  unsigned int m_boostButton; 
  unsigned __int64 v70; 
  bool v71; 
  char v79; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  _RBX = this;
  __asm { vmovaps [rsp+98h+var_58], xmm8 }
  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  _RBX->m_gamepadInput = (cmd->buttons & 0x8000000000000i64) != 0;
  v9 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    _RDI = DCONST_DVARFLT_bg_rcp_m_pitchInversion;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchInversion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchInversion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm1, dword ptr [rdi+28h] }
  }
  else
  {
    __asm { vmovss  xmm1, dword ptr [rbx+2F4h] }
  }
  m_gamepadInput = _RBX->m_gamepadInput;
  __asm
  {
    vmovss  xmm6, cs:__real@3c010204
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm2, xmm0, xmm1
    vmovss  dword ptr [rbx+378h], xmm2
    vxorps  xmm8, xmm8, xmm8
  }
  if ( m_gamepadInput )
  {
    __asm
    {
      vandps  xmm0, xmm2, xmm7
      vcomiss xmm0, xmm8
      vdivss  xmm1, xmm2, xmm0
      vsubss  xmm0, xmm0, cs:__real@3e214285
      vmulss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, cs:__real@3f97ecdc
      vmovss  dword ptr [rbx+378h], xmm2
    }
  }
  v25 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled )
  {
    v26 = DCONST_DVARINT_bg_rcp_m_controlMode;
    if ( !DCONST_DVARINT_bg_rcp_m_controlMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_controlMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    unsignedInt = v26->current.unsignedInt;
  }
  else
  {
    unsignedInt = _RBX->m_controlMode;
  }
  v28 = unsignedInt - 1;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( !v29 )
    {
      v36 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
      {
        _RBP = DCONST_DVARFLT_bg_rcp_m_pitchInversion;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchInversion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchInversion") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBP);
        __asm { vmovss  xmm2, dword ptr [rbp+28h] }
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [rbx+2F4h] }
      }
      v40 = _RBX->m_gamepadInput;
      __asm
      {
        vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm2
        vxorps  xmm3, xmm2, xmm4
        vmovss  dword ptr [rbx+378h], xmm3
      }
      if ( v40 )
      {
        __asm
        {
          vandps  xmm1, xmm3, xmm7
          vcomiss xmm1, xmm8
          vsubss  xmm0, xmm1, cs:__real@3e214285
          vdivss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm1, xmm3
          vmulss  xmm3, xmm2, cs:__real@3f97ecdc
          vmovss  dword ptr [rbx+378h], xmm3
        }
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@bc010204
        vmovss  dword ptr [rbx+0D0h], xmm1
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm7, xmm0, xmm6
        vxorps  xmm0, xmm7, xmm4; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rbx+0C8h], xmm0
        vmovaps xmm0, xmm7
      }
      goto LABEL_40;
    }
    if ( v29 == 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbx+0D0h], xmm1
      }
      _RBX->m_controls.playerValues[0] = 0.0;
      goto LABEL_41;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@bc010204
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+0D0h], xmm1
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, xmm6
    vmovaps xmm0, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+0C8h], xmm0
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000; val
  }
LABEL_40:
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm8, xmm0 }
LABEL_41:
  __asm { vmovss  dword ptr [rbx+0CCh], xmm8 }
  m_boostButton = _RBX->m_boostButton;
  if ( m_boostButton )
  {
    v70 = cmd->buttons & (1i64 << ((unsigned __int8)m_boostButton - 1));
    v71 = !_RBX->m_holdToBoost;
    _RBX->m_doBoost = v70 != 0;
    if ( v71 )
    {
      if ( v70 )
        _RBX->m_boostPressed = 1;
    }
    else
    {
      _RBX->m_boostPressed = v70 != 0;
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  _R11 = &v79;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+98h+var_48]
  }
}

/*
==============
BgVehiclePhysicsRCPlane::WasBoosting
==============
*/
_BOOL8 BgVehiclePhysicsRCPlane::WasBoosting(BgVehiclePhysicsRCPlane *this)
{
  return this->m_lastDoBoost;
}

