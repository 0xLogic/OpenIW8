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

  if ( this->m_boostPressed && !this->m_boostOneTimeEventDone )
  {
    v3 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
    BoostSound = this->m_boostEvent.BoostSound;
    v6 = v3;
    RCPlaneBoost = v3->RCPlaneBoost;
    if ( BoostSound )
      AliasFromId = SND_FindAliasFromId(BoostSound);
    else
      AliasFromId = NULL;
    ((void (__fastcall *)(BgVehicleEventSystem *, BgVehiclePhysicsRCPlane *, __int64, _QWORD, _DWORD, SndAliasList *))RCPlaneBoost)(v6, this, v4, (unsigned int)this->m_boostEvent.shakeDuration, LODWORD(this->m_boostEvent.shakeRadius), AliasFromId);
    this->m_boostOneTimeEventDone = 1;
  }
}

/*
==============
BgVehiclePhysicsRCPlane::CheckTraceAhead
==============
*/
void BgVehiclePhysicsRCPlane::CheckTraceAhead(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  float m_traceAhead; 
  float v5; 
  float v6; 
  float v7; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int PhysicsBodyId; 
  float v14; 
  float v15; 
  vec3_t end; 
  vec3_t start; 
  Physics_SimpleCollisionCallback_Data cbData; 

  if ( this->m_traceAhead > 0.0 && !Physics_IsPredictiveWorld(this->m_worldId) )
  {
    m_traceAhead = this->m_traceAhead;
    v5 = m_traceAhead * this->m_transform.m[0].v[0];
    v6 = this->m_transform.m[3].v[1];
    v7 = this->m_transform.m[3].v[2];
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    start.v[0] = this->m_transform.m[3].v[0];
    v10 = m_traceAhead * this->m_transform.m[0].v[1];
    end.v[0] = v5 + start.v[0];
    v11 = v10 + v6;
    v12 = m_traceAhead * this->m_transform.m[0].v[2];
    end.v[1] = v11;
    start.v[1] = v6;
    start.v[2] = v7;
    end.v[2] = v12 + v7;
    if ( BgVehiclePhysicsRCPlane::DoTrace(this, m_worldId, m_entityNumber, &start, &end, 0.0, &cbData.position, &cbData.normal, &cbData.bodyIds[1], &cbData.surfaceFlagData[1]) )
    {
      cbData.worldId = this->m_worldId;
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
      v14 = (float)(this->m_currentSpeed * this->m_mass) * deltaTime;
      cbData.bodyIds[0] = PhysicsBodyId;
      cbData.surfaceFlagData[0] = 0;
      cbData.impulse = v14;
      BgVehiclePhysics::CollisionImpulseCallback(this, &cbData);
      AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_euler);
      v15 = this->m_euler.v[2];
      *(double *)this->m_lerpEuler.v = *(double *)this->m_euler.v;
      this->m_lerpEuler.v[2] = v15;
    }
  }
}

/*
==============
BgVehiclePhysicsRCPlane::CollisionImpulseCallback
==============
*/
void BgVehiclePhysicsRCPlane::CollisionImpulseCallback(BgVehiclePhysicsRCPlane *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  float v3; 

  BgVehiclePhysics::CollisionImpulseCallback(this, cbData);
  AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_euler);
  v3 = this->m_euler.v[2];
  *(double *)this->m_lerpEuler.v = *(double *)this->m_euler.v;
  this->m_lerpEuler.v[2] = v3;
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
  __int128 v6; 
  bool Bool_Internal_DebugName; 
  tmat43_t<vec3_t> *p_m_transform; 
  double Value; 
  double v18; 
  float v19; 
  float v20; 
  double v21; 
  float v22; 
  float v23; 
  double v25; 
  float v26; 
  float v28; 
  double v29; 
  float v30; 
  float v32; 
  float v33; 
  float v34; 
  double Float_Internal_DebugName; 
  const dvar_t *v48; 
  double v49; 
  float m_pitchMaxAngle; 
  const dvar_t *v51; 
  float v52; 
  double v53; 
  float v54; 
  const dvar_t *v55; 
  double v56; 
  float m_pitchTurnSpeed; 
  const dvar_t *v58; 
  float v59; 
  double v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  const dvar_t *v68; 
  double v69; 
  float m_yawTurnSpeed; 
  const dvar_t *v71; 
  float v72; 
  double v73; 
  float v74; 
  float v75; 
  float v76; 
  const dvar_t *v78; 
  double v79; 
  float m_rollMaxAngle; 
  const dvar_t *v81; 
  float v83; 
  double v84; 
  float v85; 
  const dvar_t *v87; 
  double v88; 
  float m_rollTurnSpeed; 
  const dvar_t *v90; 
  float v91; 
  double v92; 
  float v93; 
  float v94; 
  float v95; 
  float value2MaxAbs; 
  float v97; 
  float v98; 
  vec3_t angles; 
  char _Buffer[128]; 
  __int128 v101; 

  if ( Sys_IsMainThread() && scrPlace && x && y )
  {
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpDebugFull, "bg_rcpDebugFull");
    p_m_transform = &this->m_transform;
    if ( Bool_Internal_DebugName )
    {
      v101 = v6;
      AxisToAngles((const tmat33_t<vec3_t> *)p_m_transform, &angles);
      _XMM9 = 0i64;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      angles.v[0] = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      angles.v[1] = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      v97 = *x;
      angles.v[2] = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM2) * 360.0;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed, "bg_rcp_m_pitchLerpSpeed");
      else
        *(float *)&Float_Internal_DebugName = this->m_pitchLerpSpeed;
      value2MaxAbs = *(float *)&Float_Internal_DebugName;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed, "bg_rcp_m_yawLerpSpeed");
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir, "bg_rcp_m_yawLerpSpeedChangeDir");
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning, "bg_rcp_m_yawLerpSpeedReturning");
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering, "bg_rcp_m_rollLerpSpeedSteering");
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir, "bg_rcp_m_rollLerpSpeedChangeDir");
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning, "bg_rcp_m_rollLerpSpeedReturning");
      _XMM0 = LODWORD(value2MaxAbs);
      __asm
      {
        vmaxss  xmm0, xmm0, xmm6
        vmaxss  xmm1, xmm0, xmm15
        vmaxss  xmm2, xmm1, xmm14
        vmaxss  xmm3, xmm2, xmm13
        vmaxss  xmm0, xmm3, xmm12
        vmaxss  xmm1, xmm0, xmm7
        vmaxss  xmm13, xmm1, xmm4
      }
      v98 = *(float *)&_XMM13;
      j_sprintf(_Buffer, "RC Plane Debug - Full (set bg_rcpDebugFull 0 to see Summary)");
      Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorWhiteFaded, 0, 1, 8.0, 0);
      *y = charHeight + *y;
      j_sprintf(_Buffer, "============================");
      Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorWhiteFaded, 0, 1, 8.0, 0);
      *y = charHeight + *y;
      value2MaxAbs = 0.0;
      j_sprintf(_Buffer, "Pitch Input");
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, COERCE_FLOAT(LODWORD(this->m_pitchInput) ^ _xmm), 1.0, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Yaw Input");
      *(double *)&_XMM0 = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, *(float *)&_XMM0 * -1.0, 1.0, _Buffer, &value2MaxAbs);
      *(float *)&_XMM2 = angles.v[0];
      *x = v97;
      *y = value2MaxAbs + *y;
      j_sprintf(_Buffer, "Pitch: %f", (float)(*(float *)&_XMM2 * -1.0));
      v48 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      if ( v48->current.enabled )
      {
        v49 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle, "bg_rcp_m_pitchMaxAngle");
        m_pitchMaxAngle = *(float *)&v49;
      }
      else
      {
        m_pitchMaxAngle = this->m_pitchMaxAngle;
      }
      v51 = DCONST_DVARBOOL_bg_rcpUseDvars;
      v52 = -1.0 * angles.v[0];
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v51);
      if ( v51->current.enabled )
      {
        v53 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle, "bg_rcp_m_pitchMaxAngle");
        v54 = *(float *)&v53;
      }
      else
      {
        v54 = this->m_pitchMaxAngle;
      }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, COERCE_FLOAT(LODWORD(this->m_euler.v[0]) ^ _xmm), v54, v52, m_pitchMaxAngle, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Pitch Lerp Rate: %f", this->m_angularVelocitylerpSpeed.v[0]);
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, this->m_angularVelocitylerpSpeed.v[0], *(float *)&_XMM13, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Pitch Velocity: %f", (float)(-57.295776 * this->m_eulerAngularVelocity.v[0]));
      v55 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v55);
      if ( v55->current.enabled )
      {
        v56 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed, "bg_rcp_m_pitchTurnSpeed");
        m_pitchTurnSpeed = *(float *)&v56;
      }
      else
      {
        m_pitchTurnSpeed = this->m_pitchTurnSpeed;
      }
      v58 = DCONST_DVARBOOL_bg_rcpUseDvars;
      v59 = -57.295776 * this->m_eulerAngularVelocity.v[0];
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      if ( v58->current.enabled )
      {
        v60 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed, "bg_rcp_m_pitchTurnSpeed");
        v61 = *(float *)&v60;
      }
      else
      {
        v61 = this->m_pitchTurnSpeed;
      }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, COERCE_FLOAT(LODWORD(this->m_goalAngularVelocity.v[0]) ^ _xmm), v61, v59, m_pitchTurnSpeed, _Buffer, &value2MaxAbs);
      v62 = value2MaxAbs;
      v63 = 0.0027777778 * angles.v[1];
      v64 = v97;
      *x = v97;
      *y = v62 + *y;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      j_sprintf(_Buffer, "Yaw: %f", (float)((float)(v63 - *(float *)&_XMM2) * 360.0));
      __asm
      {
        vroundss xmm3, xmm9, xmm2, 1
        vroundss xmm2, xmm9, xmm1, 1
      }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, (float)((float)(0.0027777778 * this->m_euler.v[1]) - *(float *)&_XMM2) * -360.0, 180.0, (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * -360.0, 180.0, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Yaw Lerp Rate: %f", this->m_angularVelocitylerpSpeed.v[1]);
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, this->m_angularVelocitylerpSpeed.v[1], v98, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Yaw Velocity: %f", (float)(this->m_eulerAngularVelocity.v[1] * -57.295776));
      v68 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v68);
      if ( v68->current.enabled )
      {
        v69 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        m_yawTurnSpeed = *(float *)&v69;
      }
      else
      {
        m_yawTurnSpeed = this->m_yawTurnSpeed;
      }
      v71 = DCONST_DVARBOOL_bg_rcpUseDvars;
      v72 = -57.295776 * this->m_eulerAngularVelocity.v[1];
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v71);
      if ( v71->current.enabled )
      {
        v73 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        v74 = *(float *)&v73;
      }
      else
      {
        v74 = this->m_yawTurnSpeed;
      }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, COERCE_FLOAT(LODWORD(this->m_goalAngularVelocity.v[1]) ^ _xmm), v74, v72, m_yawTurnSpeed, _Buffer, &value2MaxAbs);
      v75 = value2MaxAbs;
      v76 = 0.0027777778 * angles.v[2];
      *x = v64;
      *y = v75 + *y;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      j_sprintf(_Buffer, "Roll: %f", (float)((float)(v76 - *(float *)&_XMM2) * 360.0));
      v78 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v78);
      if ( v78->current.enabled )
      {
        v79 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        m_rollMaxAngle = *(float *)&v79;
      }
      else
      {
        m_rollMaxAngle = this->m_rollMaxAngle;
      }
      v81 = DCONST_DVARBOOL_bg_rcpUseDvars;
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      v83 = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM3) * 360.0;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v81);
      if ( v81->current.enabled )
      {
        v84 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        v85 = *(float *)&v84;
      }
      else
      {
        v85 = this->m_rollMaxAngle;
      }
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, (float)((float)(0.0027777778 * this->m_euler.v[2]) - *(float *)&_XMM3) * 360.0, v85, v83, m_rollMaxAngle, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Roll Lerp Rate: %f", this->m_angularVelocitylerpSpeed.v[2]);
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, this->m_angularVelocitylerpSpeed.v[2], v98, _Buffer, &value2MaxAbs);
      *x = (float)(RCP_DEBUG_HORIZONTAL_SPACER + RCP_DEBUG_GRAPH_WIDTH) + *x;
      j_sprintf(_Buffer, "Roll Velocity: %f", (float)(57.295776 * this->m_eulerAngularVelocity.v[2]));
      v87 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v87);
      if ( v87->current.enabled )
      {
        v88 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed, "bg_rcp_m_rollTurnSpeed");
        m_rollTurnSpeed = *(float *)&v88;
      }
      else
      {
        m_rollTurnSpeed = this->m_rollTurnSpeed;
      }
      v90 = DCONST_DVARBOOL_bg_rcpUseDvars;
      v91 = 57.295776 * this->m_eulerAngularVelocity.v[2];
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v90);
      if ( v90->current.enabled )
        v92 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed, "bg_rcp_m_rollTurnSpeed");
      else
        *(float *)&v92 = this->m_rollTurnSpeed;
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, this->m_goalAngularVelocity.v[2], *(float *)&v92, v91, m_rollTurnSpeed, _Buffer, &value2MaxAbs);
      v93 = value2MaxAbs;
      *x = v64;
      v94 = v93 + *y;
      *y = v94;
      if ( this->m_pitchCounterSteering )
      {
        j_sprintf(_Buffer, "PITCH Counter Steering");
        Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorGreen, 0, 1, 8.0, 0);
        v94 = *y;
      }
      v95 = v94 + charHeight;
      *y = v94 + charHeight;
      if ( this->m_yawCounterSteering )
      {
        j_sprintf(_Buffer, "YAW Counter Steering");
        Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorGreen, 0, 1, 8.0, 0);
        v95 = *y;
      }
      v34 = v95 + charHeight;
    }
    else
    {
      AxisToAngles((const tmat33_t<vec3_t> *)p_m_transform, &angles);
      _XMM9 = 0i64;
      __asm
      {
        vroundss xmm2, xmm9, xmm1, 1
        vroundss xmm3, xmm9, xmm2, 1
      }
      angles.v[0] = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
      angles.v[1] = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      angles.v[2] = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM2) * 360.0;
      j_sprintf(_Buffer, "RC Plane Debug - Summary (set bg_rcpDebugFull 1 to see Full)");
      Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorWhiteFaded, 0, 1, 8.0, 0);
      *y = charHeight + *y;
      j_sprintf(_Buffer, "============================");
      Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorWhiteFaded, 0, 1, 8.0, 0);
      *y = charHeight + *y;
      value2MaxAbs = 0.0;
      j_sprintf(_Buffer, "Yaw Input");
      Value = BgVehiclePhysicsControls::GetValue(&this->m_controls, 2u);
      Draw2DVariableOnGraph(scrPlace, *x, *y, charHeight, *(float *)&Value * -1.0, 1.0, _Buffer, &value2MaxAbs);
      *y = value2MaxAbs + *y;
      j_sprintf(_Buffer, "Yaw Velocity: %f", (float)(-57.295776 * this->m_eulerAngularVelocity.v[1]));
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        v18 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        v19 = *(float *)&v18;
      }
      else
      {
        v19 = this->m_yawTurnSpeed;
      }
      v20 = -57.295776 * this->m_eulerAngularVelocity.v[1];
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        v21 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        v22 = *(float *)&v21;
      }
      else
      {
        v22 = this->m_yawTurnSpeed;
      }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, COERCE_FLOAT(LODWORD(this->m_goalAngularVelocity.v[1]) ^ _xmm), v22, v20, v19, _Buffer, &value2MaxAbs);
      v23 = 0.0027777778 * angles.v[2];
      *y = value2MaxAbs + *y;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      j_sprintf(_Buffer, "Roll: %f", (float)((float)(v23 - *(float *)&_XMM2) * 360.0));
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        v26 = *(float *)&v25;
      }
      else
      {
        v26 = this->m_rollMaxAngle;
      }
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      v28 = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM3) * 360.0;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
      {
        v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        v30 = *(float *)&v29;
      }
      else
      {
        v30 = this->m_rollMaxAngle;
      }
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      Draw2DVariableOnGraphDouble(scrPlace, *x, *y, charHeight, (float)((float)(0.0027777778 * this->m_euler.v[2]) - *(float *)&_XMM3) * 360.0, v30, v28, v26, _Buffer, &value2MaxAbs);
      v32 = value2MaxAbs + *y;
      *y = v32;
      if ( this->m_pitchCounterSteering )
      {
        j_sprintf(_Buffer, "PITCH Counter Steering");
        Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorGreen, 0, 1, 8.0, 0);
        v32 = *y;
      }
      v33 = v32 + charHeight;
      *y = v32 + charHeight;
      if ( this->m_yawCounterSteering )
      {
        j_sprintf(_Buffer, "YAW Counter Steering");
        Physics_DrawDebugString(scrPlace, *x, *y, _Buffer, &colorGreen, 0, 1, 8.0, 0);
        v33 = *y;
      }
      v34 = v33 + charHeight;
    }
    *y = v34;
  }
}

/*
==============
BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity
==============
*/

void __fastcall BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity(BgVehiclePhysicsRCPlane *this, double deltaTime)
{
  __int128 v2; 
  double Float_Internal_DebugName; 
  float v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  double v10; 
  bool v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  double v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  double v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  __int64 v21; 
  bool v22; 
  __int128 v23; 
  __int128 v26; 
  float v28; 
  float v29; 
  float v30; 
  double v31; 
  float v32; 
  double v33; 
  float v34; 
  float v35; 
  float v38; 
  double v39; 
  float v40; 
  float v41; 
  __int128 v43; 
  float v44; 
  __int128 v45; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  int v59[2]; 
  float v60; 
  __int64 v61; 
  double v62; 
  float v63; 
  vec3_t angles; 
  vec3_t vec; 

  v2 = *(_OWORD *)&deltaTime;
  if ( *(float *)&deltaTime > 0.0 )
  {
    if ( !this->m_yawSteering && !this->m_pitchSteering && (this->m_wasYawSteering || this->m_wasPitchSteering) )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_overshootProtection, "bg_rcp_m_overshootProtection");
      v5 = this->m_euler.v[1];
      v6 = this->m_euler.v[2];
      this->m_euler.v[0] = (float)((float)(this->m_euler.v[0] - this->m_lerpEuler.v[0]) * (float)(1.0 - *(float *)&Float_Internal_DebugName)) + this->m_lerpEuler.v[0];
      this->m_euler.v[1] = (float)((float)(v5 - this->m_lerpEuler.v[1]) * (float)(1.0 - *(float *)&Float_Internal_DebugName)) + this->m_lerpEuler.v[1];
      this->m_euler.v[2] = (float)((float)(v6 - this->m_lerpEuler.v[2]) * (float)(1.0 - *(float *)&Float_Internal_DebugName)) + this->m_lerpEuler.v[2];
    }
    v7 = DCONST_DVARBOOL_bg_rcpUseDvars;
    v8 = 1.0 / *(float *)&deltaTime;
    if ( this->m_pitchCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        v9 = DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        LODWORD(v10) = v9->current.integer;
      }
      else
      {
        *(float *)&v10 = this->m_pitchLerpSpeedChangeDir;
      }
    }
    else if ( this->m_pitchSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
        v10 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeed, "bg_rcp_m_pitchLerpSpeed");
      else
        *(float *)&v10 = this->m_pitchLerpSpeed;
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
        v10 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_pitchLerpSpeedReturning, "bg_rcp_m_pitchLerpSpeedReturning");
      else
        *(float *)&v10 = this->m_pitchLerpSpeedReturning;
    }
    v11 = !this->m_yawCounterSteering;
    v12 = DCONST_DVARBOOL_bg_rcpUseDvars;
    *(float *)&v62 = *(float *)&v10;
    if ( v11 )
    {
      if ( this->m_yawSteering )
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.enabled )
          v14 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeed, "bg_rcp_m_yawLerpSpeed");
        else
          *(float *)&v14 = this->m_yawLerpSpeed;
      }
      else
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.enabled )
          v14 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedReturning, "bg_rcp_m_yawLerpSpeedReturning");
        else
          *(float *)&v14 = this->m_yawLerpSpeedReturning;
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
      {
        v13 = DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        LODWORD(v14) = v13->current.integer;
      }
      else
      {
        *(float *)&v14 = this->m_yawLerpSpeedChangeDir;
      }
    }
    v11 = !this->m_yawCounterSteering;
    v15 = DCONST_DVARBOOL_bg_rcpUseDvars;
    *((float *)&v62 + 1) = *(float *)&v14;
    if ( v11 )
    {
      if ( this->m_rollSteering )
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.enabled )
          v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedSteering, "bg_rcp_m_rollLerpSpeedSteering");
        else
          *(float *)&v17 = this->m_rollLerpSpeedSteering;
      }
      else
      {
        if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( v15->current.enabled )
          v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedReturning, "bg_rcp_m_rollLerpSpeedReturning");
        else
          *(float *)&v17 = this->m_rollLerpSpeedReturning;
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
      {
        v16 = DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir;
        if ( !DCONST_DVARFLT_bg_rcp_m_rollLerpSpeedChangeDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollLerpSpeedChangeDir") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        LODWORD(v17) = v16->current.integer;
      }
      else
      {
        *(float *)&v17 = this->m_rollLerpSpeedChangeDir;
      }
    }
    v18 = this->m_euler.v[1];
    v63 = *(float *)&v17;
    v19 = v18 - this->m_lerpEuler.v[1];
    v20 = 0;
    *(float *)v59 = this->m_euler.v[0] - this->m_lerpEuler.v[0];
    *(float *)&v61 = this->m_euler.v[2] - this->m_lerpEuler.v[2];
    v60 = v19;
    v21 = 0i64;
    v22 = 1;
    do
    {
      if ( !v22 )
      {
        LODWORD(v54) = 3;
        LODWORD(v49) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v54) )
          __debugbreak();
      }
      if ( *(float *)&v59[v21] < 0.0 )
      {
        if ( v20 >= 3 )
        {
          LODWORD(v54) = 3;
          LODWORD(v49) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v54) )
            __debugbreak();
          LODWORD(v57) = 3;
          LODWORD(v52) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v57) )
            __debugbreak();
          LODWORD(v58) = 3;
          LODWORD(v53) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v58) )
            __debugbreak();
        }
        v26 = v2;
        *(float *)&v26 = (float)(*(float *)&v2 * *(float *)&v59[v21]) * *(float *)((char *)&v62 + v21 * 4);
        _XMM1 = v26;
        __asm { vmaxss  xmm6, xmm1, xmm6 }
      }
      else
      {
        if ( v20 >= 3 )
        {
          LODWORD(v54) = 3;
          LODWORD(v49) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v54) )
            __debugbreak();
          LODWORD(v55) = 3;
          LODWORD(v50) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v50, v55) )
            __debugbreak();
          LODWORD(v56) = 3;
          LODWORD(v51) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v56) )
            __debugbreak();
        }
        v23 = v2;
        *(float *)&v23 = (float)(*(float *)&v2 * *(float *)&v59[v21]) * *(float *)((char *)&v62 + v21 * 4);
        _XMM1 = v23;
        __asm { vminss  xmm6, xmm1, xmm6 }
      }
      if ( v20 >= 3 )
      {
        LODWORD(v54) = 3;
        LODWORD(v49) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v49, v54) )
          __debugbreak();
      }
      v59[v21++] = _XMM6;
      v22 = ++v20 < 3;
    }
    while ( (int)v20 < 3 );
    v28 = v60;
    v29 = v63;
    this->m_lerpEuler.v[0] = *(float *)v59 + this->m_lerpEuler.v[0];
    v30 = *(float *)&v61;
    this->m_lerpEuler.v[1] = v28 + this->m_lerpEuler.v[1];
    v31 = v62;
    this->m_lerpEuler.v[2] = v30 + this->m_lerpEuler.v[2];
    *(double *)this->m_angularVelocitylerpSpeed.v = v31;
    this->m_angularVelocitylerpSpeed.v[2] = v29;
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
    AnglesNormalize360(&angles, &angles);
    v32 = angles.v[1];
    v33 = AngleNormalize360(this->m_lerpEuler.v[1]);
    v34 = *(float *)&v33 - v32;
    v35 = angles.v[2];
    _XMM11 = 0i64;
    __asm { vroundss xmm2, xmm11, xmm1, 1 }
    v38 = (float)((float)((float)(v34 * 0.0027777778) - *(float *)&_XMM2) * 6.2831855) * v8;
    v39 = AngleNormalize360(this->m_lerpEuler.v[2]);
    v40 = *(float *)&v39 - v35;
    v41 = angles.v[0];
    __asm { vroundss xmm3, xmm11, xmm1, 1 }
    v43 = LODWORD(this->m_lerpEuler.v[0]);
    v44 = (float)((float)((float)(v40 * 0.0027777778) - *(float *)&_XMM3) * 6.2831855) * v8;
    *(double *)&v43 = AngleNormalize360(*(const float *)&v43);
    v45 = v43;
    __asm { vroundss xmm3, xmm11, xmm1, 1 }
    *(float *)&v45 = (float)((float)((float)((float)(*(float *)&v43 - v41) * 0.0027777778) - *(float *)&_XMM3) * 6.2831855) * v8;
    _XMM6 = v45;
    vec.v[1] = *(float *)&v45;
    vec.v[0] = v44;
    vec.v[2] = 0.0;
    AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &vec, &this->m_angularVelocityWs);
    __asm { vunpcklps xmm0, xmm6, xmm12 }
    this->m_angularVelocityWs.v[2] = v38;
    *(double *)this->m_eulerAngularVelocity.v = *(double *)&_XMM0;
    this->m_eulerAngularVelocity.v[2] = v44;
  }
}

/*
==============
BgVehiclePhysicsRCPlane::DoTrace
==============
*/
_BOOL8 BgVehiclePhysicsRCPlane::DoTrace(BgVehiclePhysicsRCPlane *this, Physics_WorldId worldId, int entityNumber, const vec3_t *start, const vec3_t *end, float noiseAmp, vec3_t *outHitPos, vec3_t *outHitNormal, unsigned int *outHitBody, unsigned int *outSurflags)
{
  int v14; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  hkMemoryAllocator *v17; 
  hkMemoryAllocator *v18; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v21; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_rcplane.cpp", 280, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tBgVehiclePhysicsRCPlane::DoTrace: Invalid world Index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v21, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v21, 0, entityNumber, 1, 1, 0, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  v14 = 41951633;
  if ( !this->m_hasMissileContents )
    v14 = 41943825;
  extendedData.contents = v14;
  extendedData.ignoreBodies = &v21;
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
  v17 = hkMemHeapAllocator();
  v21.m_ignoreBodies.m_size = 0;
  if ( v21.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v17, v21.m_ignoreBodies.m_data, 4, v21.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v21.m_ignoreBodies.m_data = NULL;
  v21.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v18 = hkMemHeapAllocator();
  v21.m_ignoreEntities.m_size = 0;
  if ( v21.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v18, v21.m_ignoreEntities.m_data, 8, v21.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
Draw2DAxis
==============
*/
void Draw2DAxis(const ScreenPlacement *scrPlace, float x, float y, float width, float height)
{
  CG_Draw2DLine(scrPlace, x, (float)(height * 0.5) + y, x + width, (float)(height * 0.5) + y, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  CG_Draw2DLine(scrPlace, x, y, x, y + height, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  CG_Draw2DLine(scrPlace, (float)(width * 0.5) + x, y, (float)(width * 0.5) + x, y + height, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
  CG_Draw2DLine(scrPlace, x + width, y, x + width, y + height, 1.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
}

/*
==============
Draw2DVariableOnGraph
==============
*/
void Draw2DVariableOnGraph(const ScreenPlacement *scrPlace, float x, float y, float charHeight, float value, float valueMaxAbs, const char *label, float *outHeightChange)
{
  float v9; 

  Physics_DrawDebugString(scrPlace, x, y, label, &colorWhiteFaded, 0, 1, 8.0, 0);
  Draw2DAxis(scrPlace, x, y + charHeight, RCP_DEBUG_GRAPH_WIDTH, RCP_DEBUG_GRAPH_HEIGHT);
  v9 = (float)((float)(value / valueMaxAbs) * (float)(RCP_DEBUG_GRAPH_WIDTH * 0.5)) + (float)((float)(RCP_DEBUG_GRAPH_WIDTH * 0.5) + x);
  CG_Draw2DLine(scrPlace, v9, y + charHeight, v9, (float)(y + charHeight) + RCP_DEBUG_GRAPH_HEIGHT, 2.0, 1, 1, &colorRed, cgMedia.whiteMaterial);
  *outHeightChange = (float)((float)(charHeight + RCP_DEBUG_GRAPH_HEIGHT) + (float)(y + charHeight)) - y;
}

/*
==============
Draw2DVariableOnGraphDouble
==============
*/
void Draw2DVariableOnGraphDouble(const ScreenPlacement *scrPlace, float x, float y, float charHeight, float value, float valueMaxAbs, float value2, float value2MaxAbs, const char *label, float *outHeightChange)
{
  float v11; 
  float v12; 

  Physics_DrawDebugString(scrPlace, x, y, label, &colorWhiteFaded, 0, 1, 8.0, 0);
  v11 = y + charHeight;
  Draw2DAxis(scrPlace, x, y + charHeight, RCP_DEBUG_GRAPH_WIDTH, RCP_DEBUG_GRAPH_HEIGHT);
  v12 = (float)((float)(value / valueMaxAbs) * (float)(RCP_DEBUG_GRAPH_WIDTH * 0.5)) + (float)((float)(RCP_DEBUG_GRAPH_WIDTH * 0.5) + x);
  CG_Draw2DLine(scrPlace, v12, v11, v12, v11 + RCP_DEBUG_GRAPH_HEIGHT, 2.0, 1, 1, &colorRed, cgMedia.whiteMaterial);
  CG_Draw2DLine(scrPlace, (float)((float)(value2 / value2MaxAbs) * (float)(RCP_DEBUG_GRAPH_WIDTH * 0.5)) + (float)((float)(RCP_DEBUG_GRAPH_WIDTH * 0.5) + x), v11, (float)((float)(value2 / value2MaxAbs) * (float)(RCP_DEBUG_GRAPH_WIDTH * 0.5)) + (float)((float)(RCP_DEBUG_GRAPH_WIDTH * 0.5) + x), v11 + RCP_DEBUG_GRAPH_HEIGHT, 2.0, 1, 1, &colorGreen, cgMedia.whiteMaterial);
  *outHeightChange = (float)((float)(charHeight + RCP_DEBUG_GRAPH_HEIGHT) + (float)(y + charHeight)) - y;
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
  float m_currentSpeed; 

  m_playerControlled = this->m_playerControlled;
  if ( m_playerControlled && !this->m_prevPlayerControlled )
  {
    this->m_wasControlled = 1;
    AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_lerpEuler);
    v4 = this->m_lerpEuler.v[2];
    *(double *)this->m_euler.v = *(double *)this->m_lerpEuler.v;
    this->m_euler.v[2] = v4;
    m_playerControlled = this->m_playerControlled;
  }
  m_currentSpeed = this->m_currentSpeed;
  this->m_prevPlayerControlled = m_playerControlled;
  this->m_linearVelocityWs.v[0] = m_currentSpeed * this->m_transform.m[0].v[0];
  this->m_linearVelocityWs.v[1] = m_currentSpeed * this->m_transform.m[0].v[1];
  this->m_linearVelocityWs.v[2] = m_currentSpeed * this->m_transform.m[0].v[2];
}

/*
==============
BgVehiclePhysicsRCPlane::PitchAndBank
==============
*/
void BgVehiclePhysicsRCPlane::PitchAndBank(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  BOOL v5; 
  bool v6; 
  __int128 v7; 
  __int128 v13; 
  __int128 v14; 
  __int128 v18; 
  __int128 v19; 
  float m_pitchInput; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  bool v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  float value; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  float m_rollMaxAngle; 
  double v33; 
  double v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  float m_pitchTurnSpeed; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  float m_pitchMaxAngle; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  float v47; 
  double v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  bool enabled; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  float v54; 
  double v55; 
  const dvar_t *v56; 
  double Float_Internal_DebugName; 
  float v58; 
  float v59; 
  const dvar_t *v60; 
  double v61; 
  float v62; 
  const dvar_t *v63; 
  float m_yawTurnSpeed; 
  const dvar_t *v65; 
  const dvar_t *v66; 
  float v67; 
  const dvar_t *v68; 
  double v69; 
  float v70; 
  vec3_t angles; 

  _XMM12 = 0i64;
  *(float *)&v69 = 0.0;
  v70 = 0.0;
  v5 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 2, 4);
  v6 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 2, 4);
  v7 = LODWORD(this->m_controls.playerValues[2]);
  _XMM10 = LODWORD(this->m_controls.externalValues[2]);
  switch ( v5 + 3 * v6 )
  {
    case 1:
      *(float *)&_XMM10 = this->m_controls.playerValues[2];
      break;
    case 3:
      break;
    case 4:
      switch ( this->m_controls.valuePolicy[2] )
      {
        case VP_MAXABS:
          _XMM0 = _XMM10 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm10, xmm10, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_MINABS:
          _XMM1 = v7 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm10, xmm10, xmm3, xmm1
          }
          goto LABEL_16;
        case VP_AVERAGE:
          *(float *)&_XMM10 = (float)(*(float *)&_XMM10 + *(float *)&v7) * 0.5;
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_PLAYER:
          *(float *)&_XMM10 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM10) + (float)(this->m_controls.policyWeight * *(float *)&v7);
          goto LABEL_16;
        case VP_AVERAGE_WEIGHT_EXTERNAL:
          *(float *)&_XMM10 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v7) + (float)(this->m_controls.policyWeight * *(float *)&_XMM10);
          goto LABEL_16;
      }
    default:
      LODWORD(_XMM10) = 0;
      break;
  }
LABEL_16:
  if ( this->m_gamepadInput )
  {
    if ( COERCE_FLOAT(_XMM10 & _xmm) > 0.0 )
      *(float *)&_XMM10 = (float)((float)(*(float *)&_XMM10 / COERCE_FLOAT(_XMM10 & _xmm)) * (float)(COERCE_FLOAT(_XMM10 & _xmm) - 0.15748031)) * 1.1869159;
  }
  else if ( this->m_vehicleAnimProfile == VEH_ANIMPROFILE_FOXTROT )
  {
    v13 = LODWORD(FLOAT_10_0);
    *(float *)&v13 = powf_0(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(this->m_pitchInput * 0.0078740157) & _xmm));
    v14 = v13;
    *(float *)&v14 = *(float *)&v13 - 1.0;
    _XMM1 = v14 ^ (unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm12, xmm6
      vblendvps xmm1, xmm1, xmm2, xmm0
    }
    this->m_pitchInput = *(float *)&_XMM1 * 127.0;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM1 * 127.0, -127.0, 127.0);
    this->m_pitchInput = *(float *)&_XMM0;
    v18 = LODWORD(FLOAT_10_0);
    *(float *)&v18 = powf_0(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM10 * 0.0078740157) & _xmm));
    v19 = v18;
    *(float *)&v19 = *(float *)&v18 - 1.0;
    _XMM2 = v19 ^ (unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm12, xmm10
      vblendvps xmm0, xmm2, xmm3, xmm0
    }
    *(float *)&v19 = *(float *)&_XMM0 * 127.0;
    I_fclamp(*(float *)&_XMM0 * 127.0, -127.0, 127.0);
    LODWORD(_XMM10) = v19;
  }
  m_pitchInput = this->m_pitchInput;
  this->m_wasPitchSteering = this->m_pitchSteering;
  this->m_pitchSteering = COERCE_FLOAT(LODWORD(m_pitchInput) & _xmm) > 0.0099999998;
  this->m_wasYawSteering = this->m_yawSteering;
  this->m_yawSteering = COERCE_FLOAT(_XMM10 & _xmm) > 0.0099999998;
  v24 = DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch;
  if ( !DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogicPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useChangeDirLogicPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.enabled )
    this->m_pitchCounterSteering = this->m_pitchSteering && (float)(this->m_eulerAngularVelocity.v[0] * this->m_pitchInput) < -0.0099999998;
  else
    this->m_yawCounterSteering = 0;
  v25 = DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic;
  if ( !DCONST_DVARBOOL_bg_rcp_m_useChangeDirLogic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useChangeDirLogic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  v26 = v25->current.enabled && this->m_yawSteering && (float)((float)((float)((float)(0.0 * this->m_transform.m[1].v[1]) + (float)(0.0 * this->m_transform.m[1].v[0])) + (float)(1.0 * this->m_transform.m[1].v[2])) * *(float *)&_XMM10) > 0.0099999998;
  this->m_yawCounterSteering = v26;
  if ( COERCE_FLOAT(_XMM10 & _xmm) <= 0.0099999998 )
  {
    if ( this->m_stabilizeRoll )
    {
      this->m_rollSteering = 0;
      this->m_euler.v[2] = 0.0;
      v70 = 0.0;
    }
  }
  else
  {
    this->m_rollSteering = 1;
    v27 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      v28 = DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_rollTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollTurnSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      value = v28->current.value;
    }
    else
    {
      value = this->m_rollTurnSpeed;
    }
    LODWORD(v70) = COERCE_UNSIGNED_INT(value * *(float *)&_XMM10) ^ _xmm;
    this->m_euler.v[2] = (float)(v70 * deltaTime) + this->m_euler.v[2];
  }
  v30 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled )
  {
    v31 = DCONST_DVARFLT_bg_rcp_m_rollMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_rollMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    m_rollMaxAngle = v31->current.value;
  }
  else
  {
    m_rollMaxAngle = this->m_rollMaxAngle;
  }
  v33 = I_fclamp(COERCE_FLOAT(_XMM10 & _xmm), 0.0, 1.0);
  v34 = I_fclamp(this->m_euler.v[2], COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v33 * m_rollMaxAngle) ^ _xmm), *(float *)&v33 * m_rollMaxAngle);
  this->m_euler.v[2] = *(float *)&v34;
  if ( COERCE_FLOAT(LODWORD(this->m_pitchInput) & _xmm) <= 0.0099999998 )
  {
    if ( this->m_stabilizePitch )
    {
      *(float *)&v69 = 0.0;
      this->m_euler.v[0] = 0.0;
    }
  }
  else
  {
    v35 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( this->m_pitchCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      if ( v35->current.enabled )
      {
        v36 = DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        m_pitchTurnSpeed = v36->current.value;
      }
      else
      {
        m_pitchTurnSpeed = this->m_pitchTurnSpeed;
      }
      v38 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      if ( v38->current.enabled )
      {
        v39 = DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchChangeDirFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchChangeDirFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v39);
        v40 = v39->current.value * m_pitchTurnSpeed;
      }
      else
      {
        v40 = this->m_pitchChangeDirFactor * m_pitchTurnSpeed;
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      if ( v35->current.enabled )
      {
        v41 = DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_pitchTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        v40 = v41->current.value;
      }
      else
      {
        v40 = this->m_pitchTurnSpeed;
      }
    }
    *(float *)&v69 = v40 * this->m_pitchInput;
    this->m_euler.v[0] = (float)(*(float *)&v69 * deltaTime) + this->m_euler.v[0];
  }
  v42 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.enabled )
  {
    v43 = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    m_pitchMaxAngle = v43->current.value;
  }
  else
  {
    m_pitchMaxAngle = this->m_pitchMaxAngle;
  }
  v45 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  if ( v45->current.enabled )
  {
    v46 = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v47 = v46->current.value;
  }
  else
  {
    v47 = this->m_pitchMaxAngle;
  }
  v48 = I_fclamp(this->m_euler.v[0], COERCE_FLOAT(LODWORD(v47) ^ _xmm), m_pitchMaxAngle);
  this->m_euler.v[0] = *(float *)&v48;
  v49 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  if ( v49->current.enabled )
  {
    v50 = DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed;
    if ( !DCONST_DVARBOOL_bg_rcp_m_useRollForYawSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_useRollForYawSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    enabled = v50->current.enabled;
  }
  else
  {
    enabled = this->m_useRollForYawSpeed;
  }
  v52 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !enabled )
  {
    if ( this->m_yawCounterSteering )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( v52->current.enabled )
      {
        v63 = DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v63);
        m_yawTurnSpeed = v63->current.value;
      }
      else
      {
        m_yawTurnSpeed = this->m_yawTurnSpeed;
      }
      v65 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v65);
      if ( v65->current.enabled )
      {
        v66 = DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawChangeDirFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawChangeDirFactor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v66);
        v67 = v66->current.value * m_yawTurnSpeed;
      }
      else
      {
        v67 = this->m_yawChangeDirFactor * m_yawTurnSpeed;
      }
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( v52->current.enabled )
      {
        v68 = DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed;
        if ( !DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_yawTurnSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v68);
        v67 = v68->current.value;
      }
      else
      {
        v67 = this->m_yawTurnSpeed;
      }
    }
    v62 = v67 * *(float *)&_XMM10;
    goto LABEL_175;
  }
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( v52->current.enabled )
  {
    v53 = DCONST_DVARFLT_bg_rcp_m_rollMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_rollMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_rollMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v54 = v53->current.value;
  }
  else
  {
    v54 = this->m_rollMaxAngle;
  }
  if ( v54 != 0.0 )
  {
    if ( this->m_yawSteering || !this->m_wasYawSteering || (v55 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_overshootProtection, "bg_rcp_m_overshootProtection"), *(float *)&v55 <= 0.0) )
    {
      AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &angles);
      v56 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      if ( v56->current.enabled )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_rollMaxAngle, "bg_rcp_m_rollMaxAngle");
        v58 = *(float *)&Float_Internal_DebugName;
      }
      else
      {
        v58 = this->m_rollMaxAngle;
      }
      v59 = (float)(-1.0 * angles.v[2]) / v58;
      I_fclamp(v59, -1.0, 1.0);
      v60 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      if ( v60->current.enabled )
      {
        v61 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_yawTurnSpeed, "bg_rcp_m_yawTurnSpeed");
        v62 = *(float *)&v61 * v59;
      }
      else
      {
        v62 = this->m_yawTurnSpeed * v59;
      }
LABEL_175:
      *((float *)&v69 + 1) = v62;
      this->m_euler.v[1] = (float)(v62 * deltaTime) + this->m_euler.v[1];
      goto LABEL_176;
    }
  }
  *((float *)&v69 + 1) = 0.0;
LABEL_176:
  *(double *)this->m_goalAngularVelocity.v = v69;
  this->m_goalAngularVelocity.v[2] = v70;
}

/*
==============
BgVehiclePhysicsRCPlane::SetMinSpeed
==============
*/
void BgVehiclePhysicsRCPlane::SetMinSpeed(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  _XMM0 = LODWORD(this->m_topSpeedBoostReleased);
  this->m_minSpeed = speedmph;
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  this->m_topSpeedBoostReleased = *(float *)&_XMM1;
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedBoosting
==============
*/
void BgVehiclePhysicsRCPlane::SetTopSpeedBoosting(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  this->m_boostSpeed = speedmph;
}

/*
==============
BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting
==============
*/
void BgVehiclePhysicsRCPlane::SetTopSpeedNoBoosting(BgVehiclePhysicsRCPlane *this, float speedmph)
{
  this->m_topSpeed = speedmph;
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
  char v22; 
  unsigned int v23; 
  char v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  float value; 

  result = BgVehiclePhysics::Setup(this, vehSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
  if ( result )
  {
    this->m_acceleration = vehDef->accel;
    this->m_deceleration = vehDef->vehiclePhysicsDef.physics_decel;
    this->m_timeAfterColl = vehDef->vehiclePhysicsDef.physics_timeAfterColl;
    this->m_minSpeed = vehDef->vehiclePhysicsDef.physics_minSpeed;
    this->m_stabilizeRoll = vehDef->vehiclePhysicsDef.physics_stabilizeRoll;
    this->m_stabilizePitch = vehDef->vehiclePhysicsDef.physics_stabilizePitch;
    _XMM0 = vehDef->vehiclePhysicsDef.physics_pitchInversion;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_N1_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    this->m_pitchInversion = *(float *)&_XMM0;
    this->m_controlMode = vehDef->vehiclePhysicsDef.physics_controlMode;
    physics_boostButton = vehDef->vehiclePhysicsDef.physics_boostButton;
    if ( physics_boostButton < 0 )
      physics_boostButton = 0;
    this->m_boostButton = physics_boostButton;
    _XMM0 = LODWORD(vehDef->vehiclePhysicsDef.physics_boostSpeed);
    __asm { vmaxss  xmm0, xmm0, xmm2 }
    this->m_boostSpeed = *(float *)&_XMM0;
    this->m_holdToBoost = vehDef->vehiclePhysicsDef.physics_holdToBoost;
    this->m_hasMissileContents = vehDef->vehiclePhysicsDef.physics_contentsAsMissile;
    _XMM0 = LODWORD(vehDef->vehiclePhysicsDef.physics_rcpBoostAccel);
    __asm { vmaxss  xmm0, xmm0, xmm2 }
    this->m_boostAccel = *(float *)&_XMM0;
    _XMM1 = LODWORD(vehDef->vehiclePhysicsDef.physics_rcpBoostDecel);
    *(_WORD *)&this->m_prevPlayerControlled = 0;
    *(_QWORD *)&this->m_currentSpeed = 0i64;
    *(_WORD *)&this->m_doBoost = 0;
    this->m_lastDoBoost = 0;
    this->m_boostOneTimeEventDone = 0;
    __asm { vmaxss  xmm0, xmm1, xmm2 }
    this->m_boostDecel = *(float *)&_XMM0;
    this->m_useChangeDirLogic = vehDef->vehiclePhysicsDef.physics_rcpUseChangeDirLogic;
    this->m_useChangeDirLogicPitch = vehDef->vehiclePhysicsDef.physics_rcpUseChangeDirLogicPitch;
    this->m_useRollForYawSpeed = vehDef->vehiclePhysicsDef.physics_rcpUseRollForYawSpeed;
    this->m_overshootProtection = vehDef->vehiclePhysicsDef.physics_rcpOvershootProtection;
    this->m_pitchTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpPitchTurnSpeed;
    this->m_pitchChangeDirFactor = vehDef->vehiclePhysicsDef.physics_rcpPitchChangeDirFactor;
    this->m_pitchLerpSpeed = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeed;
    this->m_pitchLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeedChangeDir;
    this->m_pitchLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpPitchLerpSpeedReturning;
    this->m_pitchMaxAngle = vehDef->vehiclePhysicsDef.physics_rcpPitchMaxAngle;
    this->m_yawTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpYawTurnSpeed;
    this->m_yawChangeDirFactor = vehDef->vehiclePhysicsDef.physics_rcpYawChangeDirFactor;
    this->m_yawLerpSpeed = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeed;
    this->m_yawLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeedChangeDir;
    this->m_yawLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpYawLerpSpeedReturning;
    this->m_rollTurnSpeed = vehDef->vehiclePhysicsDef.physics_rcpRollTurnSpeed;
    m_worldId = this->m_worldId;
    this->m_rollLerpSpeedSteering = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedSteering;
    this->m_rollLerpSpeedChangeDir = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedChangeDir;
    this->m_rollLerpSpeedReturning = vehDef->vehiclePhysicsDef.physics_rcpRollLerpSpeedReturning;
    this->m_rollMaxAngle = vehDef->vehiclePhysicsDef.physics_rcpRollMaxAngle;
    this->m_accelGoingDown = vehDef->vehiclePhysicsDef.physics_rcpAccelGoingDown;
    this->m_decelGoingUp = vehDef->vehiclePhysicsDef.physics_rcpDecelGoingUp;
    this->m_traceAhead = vehDef->vehiclePhysicsDef.physics_rcpTraceAhead;
    this->m_rollSteering = 0;
    this->m_boostEvent.shakeScale = vehDef->vehiclePhysicsDef.physics_rcpBoostShakeCam.v[0];
    this->m_boostEvent.shakeDuration = (int)vehDef->vehiclePhysicsDef.physics_rcpBoostShakeCam.v[1];
    this->m_boostEvent.shakeRadius = vehDef->vehiclePhysicsDef.physics_rcpBoostShakeCam.v[2];
    this->m_boostEvent.BoostSound = 0;
    if ( Physics_IsPredictiveWorld(m_worldId) )
    {
      name = vehDef->vehiclePhysicsDef.physics_rcpBoostSound.name;
      if ( name )
      {
        v22 = *name;
        if ( *name )
        {
          v23 = 5381;
          do
          {
            ++name;
            v24 = v22 | 0x20;
            if ( (unsigned int)(v22 - 65) >= 0x1A )
              v24 = v22;
            v23 = 65599 * v23 + v24;
            v22 = *name;
          }
          while ( *name );
          if ( !v23 )
            v23 = 1;
        }
        else
        {
          v23 = 0;
        }
        this->m_boostEvent.BoostSound = v23;
      }
    }
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    {
      if ( vehDef->name && I_strstr(vehDef->name, "rcplane_physics") )
        this->m_netcodeType = VEH_NETCODE_CLIENT_PRED_SB;
    }
    else
    {
      this->m_netcodeType = VEH_NETCODE_SERVER_AUTH;
    }
    this->m_topSpeedForward = 0i64;
    *(_QWORD *)this->m_topAngularSpeedLs.v = 0i64;
    this->m_topAngularSpeedLs.v[2] = 0.0;
    this->m_topSpeed = vehDef->topSpeed;
    v25 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
    {
      v26 = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      value = v26->current.value;
    }
    else
    {
      value = this->m_topSpeed;
    }
    result = 1;
    this->m_topSpeedBoostReleased = value;
  }
  return result;
}

/*
==============
BgVehiclePhysicsRCPlane::Step
==============
*/
char BgVehiclePhysicsRCPlane::Step(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  float m_traceAhead; 
  float v4; 
  float v5; 
  float v6; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  float v9; 
  float v10; 
  unsigned int PhysicsBodyId; 
  float v12; 
  float v13; 
  bool m_playerControlled; 
  float v15; 
  float m_currentSpeed; 
  vec3_t end; 
  vec3_t start; 
  Physics_SimpleCollisionCallback_Data cbData; 

  BgVehiclePhysics::Step(this, deltaTime);
  if ( this->m_playerControlled || this->m_wasControlled )
  {
    if ( this->m_traceAhead > 0.0 && !Physics_IsPredictiveWorld(this->m_worldId) )
    {
      m_traceAhead = this->m_traceAhead;
      v4 = m_traceAhead * this->m_transform.m[0].v[0];
      v5 = this->m_transform.m[3].v[1];
      v6 = this->m_transform.m[3].v[2];
      m_entityNumber = this->m_entityNumber;
      m_worldId = this->m_worldId;
      start.v[0] = this->m_transform.m[3].v[0];
      v9 = m_traceAhead * this->m_transform.m[0].v[1];
      end.v[0] = v4 + start.v[0];
      v10 = m_traceAhead * this->m_transform.m[0].v[2];
      end.v[1] = v9 + v5;
      start.v[1] = v5;
      start.v[2] = v6;
      end.v[2] = v10 + v6;
      if ( BgVehiclePhysicsRCPlane::DoTrace(this, m_worldId, m_entityNumber, &start, &end, 0.0, &cbData.position, &cbData.normal, &cbData.bodyIds[1], &cbData.surfaceFlagData[1]) )
      {
        cbData.worldId = this->m_worldId;
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
        v12 = (float)(this->m_currentSpeed * this->m_mass) * deltaTime;
        cbData.bodyIds[0] = PhysicsBodyId;
        cbData.surfaceFlagData[0] = 0;
        cbData.impulse = v12;
        BgVehiclePhysics::CollisionImpulseCallback(this, &cbData);
        AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_euler);
        v13 = this->m_euler.v[2];
        *(double *)this->m_lerpEuler.v = *(double *)this->m_euler.v;
        this->m_lerpEuler.v[2] = v13;
      }
    }
    BgVehiclePhysicsRCPlane::BoostControl(this, deltaTime);
    m_playerControlled = this->m_playerControlled;
    if ( m_playerControlled && !this->m_prevPlayerControlled )
    {
      this->m_wasControlled = 1;
      AxisToAngles((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_lerpEuler);
      v15 = this->m_lerpEuler.v[2];
      *(double *)this->m_euler.v = *(double *)this->m_lerpEuler.v;
      this->m_euler.v[2] = v15;
      m_playerControlled = this->m_playerControlled;
    }
    m_currentSpeed = this->m_currentSpeed;
    this->m_prevPlayerControlled = m_playerControlled;
    this->m_linearVelocityWs.v[0] = m_currentSpeed * this->m_transform.m[0].v[0];
    this->m_linearVelocityWs.v[1] = m_currentSpeed * this->m_transform.m[0].v[1];
    this->m_linearVelocityWs.v[2] = m_currentSpeed * this->m_transform.m[0].v[2];
    BgVehiclePhysicsRCPlane::Thrust(this, deltaTime);
    BgVehiclePhysicsRCPlane::PitchAndBank(this, deltaTime);
    BgVehiclePhysicsRCPlane::DeriveFinalAngularVelocity(this, deltaTime);
    this->m_lastDoBoost = this->m_doBoost;
  }
  return 1;
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
void BgVehiclePhysicsRCPlane::Thrust(BgVehiclePhysicsRCPlane *this, float deltaTime)
{
  const dvar_t *v2; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v14; 
  double v16; 
  double v17; 
  BOOL v18; 
  bool v19; 
  __int128 v20; 
  BOOL v26; 
  bool v27; 
  __int128 v28; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  __int128 unsignedInt; 
  const dvar_t *v39; 
  double Float_Internal_DebugName; 
  __int128 v43; 
  const dvar_t *v44; 
  __int128 v46; 
  const dvar_t *v48; 
  __int128 v50; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  float m_pitchMaxAngle; 
  const dvar_t *v59; 
  const dvar_t *v60; 
  float v61; 
  float v62; 
  const dvar_t *v63; 
  __int128 m_accelGoingDown_low; 
  __int128 v65; 

  v2 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v5 = DCONST_DVARFLT_bg_rcp_m_timeAfterColl;
    if ( !DCONST_DVARFLT_bg_rcp_m_timeAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_timeAfterColl") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
  }
  else
  {
    value = this->m_timeAfterColl;
  }
  if ( value > this->m_timeSinceLastCollision )
  {
    this->m_currentSpeed = fsqrt((float)((float)(this->m_linearVelocityWs.v[0] * this->m_linearVelocityWs.v[0]) + (float)(this->m_linearVelocityWs.v[1] * this->m_linearVelocityWs.v[1])) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2]));
    return;
  }
  _XMM11 = 0i64;
  if ( this->m_playerControlled || this->m_wasControlled )
  {
    v9 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      v10 = DCONST_DVARFLT_bg_rcp_m_minSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_minSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_minSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      _XMM9 = v10->current.unsignedInt;
    }
    else
    {
      _XMM9 = LODWORD(this->m_minSpeed);
    }
  }
  else
  {
    _XMM9 = 0i64;
  }
  if ( !this->m_doBoost )
  {
    v18 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 1, 4);
    v19 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 1, 4);
    v20 = LODWORD(this->m_controls.playerValues[1]);
    _XMM6 = LODWORD(this->m_controls.externalValues[1]);
    switch ( v18 + 3 * v19 )
    {
      case 1:
        *(float *)&_XMM6 = this->m_controls.playerValues[1];
        break;
      case 3:
        break;
      case 4:
        switch ( this->m_controls.valuePolicy[1] )
        {
          case VP_MAXABS:
            _XMM0 = _XMM6 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_64;
          case VP_MINABS:
            _XMM1 = v20 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_64;
          case VP_AVERAGE:
            *(float *)&_XMM6 = (float)(*(float *)&_XMM6 + *(float *)&v20) * 0.5;
            goto LABEL_64;
          case VP_AVERAGE_WEIGHT_PLAYER:
            *(float *)&_XMM6 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM6) + (float)(this->m_controls.policyWeight * *(float *)&v20);
            goto LABEL_64;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            *(float *)&_XMM6 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v20) + (float)(this->m_controls.policyWeight * *(float *)&_XMM6);
            goto LABEL_64;
        }
      default:
        LODWORD(_XMM6) = 0;
        break;
    }
LABEL_64:
    v26 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 0, 4);
    v27 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 0, 4);
    v28 = LODWORD(this->m_controls.playerValues[0]);
    _XMM3 = LODWORD(this->m_controls.externalValues[0]);
    switch ( v26 + 3 * v27 )
    {
      case 1:
        *(float *)&_XMM3 = this->m_controls.playerValues[0];
        break;
      case 3:
        break;
      case 4:
        switch ( this->m_controls.valuePolicy[0] )
        {
          case VP_MAXABS:
            _XMM0 = _XMM3 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_79;
          case VP_MINABS:
            _XMM1 = v28 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_79;
          case VP_AVERAGE:
            *(float *)&_XMM3 = (float)(*(float *)&_XMM3 + *(float *)&v28) * 0.5;
            goto LABEL_79;
          case VP_AVERAGE_WEIGHT_PLAYER:
            *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM3) + (float)(this->m_controls.policyWeight * *(float *)&v28);
            goto LABEL_79;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v28) + (float)(this->m_controls.policyWeight * *(float *)&_XMM3);
            goto LABEL_79;
        }
      default:
        LODWORD(_XMM3) = 0;
        break;
    }
LABEL_79:
    v34 = DCONST_DVARBOOL_bg_rcpUseDvars;
    v36 = *(float *)&_XMM3 - *(float *)&_XMM6;
    v35 = *(float *)&_XMM3 - *(float *)&_XMM6;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled )
    {
      v37 = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      unsignedInt = v37->current.unsignedInt;
    }
    else
    {
      unsignedInt = LODWORD(this->m_topSpeed);
    }
    if ( *(float *)&unsignedInt < this->m_topSpeedBoostReleased )
    {
      v39 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      if ( v39->current.enabled )
      {
        *(double *)&unsignedInt = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostDecel, "bg_rcp_m_boostDecel");
        _XMM6 = unsignedInt;
      }
      else
      {
        _XMM6 = LODWORD(this->m_boostDecel);
      }
      if ( v36 > 0.001 )
      {
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_acceleration, "bg_rcp_m_acceleration");
        else
          *(float *)&Float_Internal_DebugName = this->m_acceleration;
        v43 = _XMM6;
        *(float *)&v43 = *(float *)&_XMM6 - *(float *)&Float_Internal_DebugName;
        _XMM6 = v43;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_deceleration, "bg_rcp_m_deceleration");
        __asm { vmaxss  xmm6, xmm6, xmm0 }
      }
      v44 = DCONST_DVARBOOL_bg_rcpUseDvars;
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      if ( v44->current.enabled )
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_topSpeed, "bg_rcp_m_topSpeed");
      unsignedInt = LODWORD(this->m_topSpeedBoostReleased);
      v46 = unsignedInt;
      *(float *)&v46 = *(float *)&unsignedInt - (float)(*(float *)&_XMM6 * deltaTime);
      _XMM1 = v46;
      __asm { vmaxss  xmm2, xmm1, xmm2 }
      this->m_topSpeedBoostReleased = *(float *)&_XMM2;
    }
    v48 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( v35 < 0.0 )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      if ( v48->current.enabled )
        *(double *)&unsignedInt = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_deceleration, "bg_rcp_m_deceleration");
      else
        unsignedInt = LODWORD(this->m_deceleration);
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      if ( v48->current.enabled )
        *(double *)&unsignedInt = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_acceleration, "bg_rcp_m_acceleration");
      else
        unsignedInt = LODWORD(this->m_acceleration);
    }
    __asm { vmaxss  xmm6, xmm9, dword ptr [rdi+2ECh] }
    v50 = unsignedInt;
    *(float *)&v50 = (float)((float)(*(float *)&unsignedInt * v35) * deltaTime) + this->m_currentSpeed;
    _XMM7 = v50;
    if ( *(float *)&_XMM9 > *(float *)&_XMM6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM9, *(float *)&_XMM6) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm7, xmm9
      vminss  xmm6, xmm0, xmm6
    }
    this->m_currentSpeed = *(float *)&_XMM6;
    v54 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v54->current.enabled )
    {
      v55 = DCONST_DVARFLT_bg_rcp_m_topSpeed;
      if ( !DCONST_DVARFLT_bg_rcp_m_topSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_topSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v55);
    }
    __asm { vmaxss  xmm7, xmm6, xmm0 }
    LODWORD(v17) = _XMM7;
    goto LABEL_133;
  }
  v11 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v12 = DCONST_DVARFLT_bg_rcp_m_boostSpeed;
    if ( !DCONST_DVARFLT_bg_rcp_m_boostSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_boostSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    _XMM7 = v12->current.unsignedInt;
  }
  else
  {
    _XMM7 = LODWORD(this->m_boostSpeed);
  }
  v14 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( this->m_holdToBoost )
  {
    __asm { vmaxss  xmm6, xmm7, xmm9 }
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      v16 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostAccel, "bg_rcp_m_boostAccel");
    else
      *(float *)&v16 = this->m_boostAccel;
    v17 = I_fclamp((float)(*(float *)&v16 * deltaTime) + this->m_currentSpeed, *(float *)&_XMM9, *(float *)&_XMM6);
    this->m_currentSpeed = *(float *)&v17;
  }
  else
  {
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_boostSpeed, "bg_rcp_m_boostSpeed");
    else
      *(float *)&v17 = this->m_boostSpeed;
    this->m_currentSpeed = *(float *)&v17;
  }
LABEL_133:
  this->m_topSpeedBoostReleased = *(float *)&v17;
  v56 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.enabled )
  {
    v57 = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    m_pitchMaxAngle = v57->current.value;
  }
  else
  {
    m_pitchMaxAngle = this->m_pitchMaxAngle;
  }
  if ( m_pitchMaxAngle > 0.0099999998 )
  {
    v59 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    if ( v59->current.enabled )
    {
      v60 = DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle;
      if ( !DCONST_DVARFLT_bg_rcp_m_pitchMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchMaxAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      v61 = v60->current.value;
    }
    else
    {
      v61 = this->m_pitchMaxAngle;
    }
    v62 = this->m_lerpEuler.v[0];
    v63 = DCONST_DVARBOOL_bg_rcpUseDvars;
    *((_QWORD *)&m_accelGoingDown_low + 1) = 0i64;
    if ( v62 >= 0.0 )
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.enabled )
        *(double *)&m_accelGoingDown_low = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_accelGoingDown, "bg_rcp_m_accelGoingDown");
      else
        m_accelGoingDown_low = LODWORD(this->m_accelGoingDown);
    }
    else
    {
      if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.enabled )
        *(double *)&m_accelGoingDown_low = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_m_decelGoingUp, "bg_rcp_m_decelGoingUp");
      else
        m_accelGoingDown_low = LODWORD(this->m_decelGoingUp);
    }
    v65 = m_accelGoingDown_low;
    *(float *)&v65 = (float)(*(float *)&m_accelGoingDown_low * (float)(COERCE_FLOAT(LODWORD(v62) & _xmm) / v61)) * deltaTime;
    _XMM2 = v65 ^ _xmm;
    __asm
    {
      vcmpless xmm0, xmm11, dword ptr [rdi+390h]
      vblendvps xmm0, xmm2, xmm3, xmm0
      vmaxss  xmm2, xmm7, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 + this->m_currentSpeed, *(float *)&_XMM9, *(float *)&_XMM2);
    this->m_currentSpeed = *(float *)&_XMM0;
  }
}

/*
==============
BgVehiclePhysicsRCPlane::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysicsRCPlane::UpdatePlayerInputControls(BgVehiclePhysicsRCPlane *this, const usercmd_s *cmd, const playerState_s *ps)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  float value; 
  int v8; 
  bool m_gamepadInput; 
  char v10; 
  char v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  unsigned int unsignedInt; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  bool v20; 
  bool v21; 
  char v22; 
  float v23; 
  char v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  float m_pitchInversion; 
  bool v28; 
  char v29; 
  int v30; 
  int v31; 
  char v32; 
  float v33; 
  int v34; 
  char v35; 
  int v36; 
  double v37; 
  float v38; 
  int v39; 
  char v40; 
  int v41; 
  float v42; 
  double v43; 
  double v44; 
  unsigned int m_boostButton; 
  unsigned __int64 v46; 

  BgVehiclePhysics::UpdatePlayerInputControls(this, cmd, ps);
  this->m_gamepadInput = (cmd->buttons & 0x8000000000000i64) != 0;
  v5 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = DCONST_DVARFLT_bg_rcp_m_pitchInversion;
    if ( !DCONST_DVARFLT_bg_rcp_m_pitchInversion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchInversion") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
  }
  else
  {
    value = this->m_pitchInversion;
  }
  v8 = cmd->remoteControlAngles[0];
  m_gamepadInput = this->m_gamepadInput;
  v10 = 0;
  v11 = cmd->remoteControlAngles[0];
  if ( v8 >= -(m_gamepadInput ? 0x14 : 0) && (char)v8 <= (char)(this->m_gamepadInput ? 0x14 : 0) )
    v11 = 0;
  v12 = (float)((float)v11 * 0.0078740157) * value;
  this->m_pitchInput = v12;
  v13 = 0.0;
  if ( m_gamepadInput && COERCE_FLOAT(LODWORD(v12) & _xmm) > 0.0 )
    this->m_pitchInput = (float)((float)(v12 / COERCE_FLOAT(LODWORD(v12) & _xmm)) * (float)(COERCE_FLOAT(LODWORD(v12) & _xmm) - 0.15748031)) * 1.1869159;
  v14 = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v15 = DCONST_DVARINT_bg_rcp_m_controlMode;
    if ( !DCONST_DVARINT_bg_rcp_m_controlMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_controlMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    unsignedInt = v15->current.unsignedInt;
  }
  else
  {
    unsignedInt = this->m_controlMode;
  }
  v17 = unsignedInt - 1;
  if ( !v17 )
  {
    v39 = cmd->remoteControlMove[1];
    v40 = cmd->remoteControlMove[1];
    if ( v39 >= -(this->m_gamepadInput ? 0x14 : 0) && (char)v39 <= (char)(this->m_gamepadInput ? 0x14 : 0) )
      v40 = 0;
    v23 = (float)v40 * -0.0078740157;
    goto LABEL_62;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v25 = DCONST_DVARBOOL_bg_rcpUseDvars;
    if ( !DCONST_DVARBOOL_bg_rcpUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
    {
      v26 = DCONST_DVARFLT_bg_rcp_m_pitchInversion;
      if ( !DCONST_DVARFLT_bg_rcp_m_pitchInversion && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_m_pitchInversion") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      m_pitchInversion = v26->current.value;
    }
    else
    {
      m_pitchInversion = this->m_pitchInversion;
    }
    v28 = this->m_gamepadInput;
    v29 = v28 ? 0x14 : 0;
    v30 = cmd->remoteControlMove[0];
    v31 = -(unsigned __int8)v29;
    v32 = cmd->remoteControlMove[0];
    if ( v30 >= v31 && (char)v30 <= v29 )
      v32 = 0;
    LODWORD(v33) = COERCE_UNSIGNED_INT((float)((float)v32 * 0.0078740157) * m_pitchInversion) ^ _xmm;
    this->m_pitchInput = v33;
    if ( v28 && COERCE_FLOAT(LODWORD(v33) & _xmm) > 0.0 )
      this->m_pitchInput = (float)((float)((float)(COERCE_FLOAT(LODWORD(v33) & _xmm) - 0.15748031) / COERCE_FLOAT(LODWORD(v33) & _xmm)) * v33) * 1.1869159;
    v34 = cmd->remoteControlMove[1];
    v35 = cmd->remoteControlMove[1];
    if ( v34 >= v31 && (char)v34 <= v29 )
      v35 = 0;
    this->m_controls.playerValues[2] = (float)v35 * -0.0078740157;
    v36 = cmd->remoteControlAngles[0];
    if ( v36 < -(this->m_gamepadInput ? 0x14 : 0) || (char)v36 > (char)(this->m_gamepadInput ? 0x14 : 0) )
      v10 = cmd->remoteControlAngles[0];
    v37 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10 * 0.0078740157) ^ _xmm), 0.0, 1.0);
    this->m_controls.playerValues[0] = *(float *)&v37;
    v38 = (float)v10 * 0.0078740157;
    goto LABEL_66;
  }
  v19 = cmd->remoteControlAngles[1];
  v20 = v18 == 1;
  v21 = this->m_gamepadInput;
  if ( !v20 )
  {
    v22 = cmd->remoteControlAngles[1];
    if ( v19 >= -(v21 ? 0x14 : 0) && (char)v19 <= (char)(v21 ? 0x14 : 0) )
      v22 = 0;
    v23 = (float)v22 * 0.0078740157;
LABEL_62:
    this->m_controls.playerValues[2] = v23;
    v41 = cmd->remoteControlMove[0];
    if ( v41 < -(this->m_gamepadInput ? 0x14 : 0) || (char)v41 > (char)(this->m_gamepadInput ? 0x14 : 0) )
      v10 = cmd->remoteControlMove[0];
    v42 = (float)v10 * 0.0078740157;
    v43 = I_fclamp(v42, 0.0, 1.0);
    this->m_controls.playerValues[0] = *(float *)&v43;
    LODWORD(v38) = LODWORD(v42) ^ _xmm;
LABEL_66:
    v44 = I_fclamp(v38, 0.0, 1.0);
    v13 = *(float *)&v44;
    goto LABEL_67;
  }
  v24 = cmd->remoteControlAngles[1];
  if ( v19 >= -(v21 ? 0x14 : 0) && (char)v19 <= (char)(v21 ? 0x14 : 0) )
    v24 = 0;
  this->m_controls.playerValues[2] = (float)v24 * 0.0078740157;
  this->m_controls.playerValues[0] = 0.0;
LABEL_67:
  this->m_controls.playerValues[1] = v13;
  m_boostButton = this->m_boostButton;
  if ( m_boostButton )
  {
    v46 = cmd->buttons & (1i64 << ((unsigned __int8)m_boostButton - 1));
    v20 = !this->m_holdToBoost;
    this->m_doBoost = v46 != 0;
    if ( v20 )
    {
      if ( v46 )
        this->m_boostPressed = 1;
    }
    else
    {
      this->m_boostPressed = v46 != 0;
    }
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

