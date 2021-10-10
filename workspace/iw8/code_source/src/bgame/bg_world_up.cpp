/*
==============
WorldUpReferenceFrame::SetEntity
==============
*/

void __fastcall WorldUpReferenceFrame::SetEntity(WorldUpReferenceFrame *this, playerState_s *ps, __int16 entity)
{
  ?SetEntity@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@F@Z(this, ps, entity);
}

/*
==============
WorldUpReferenceFramePM::ClearAllTransitions
==============
*/

void __fastcall WorldUpReferenceFramePM::ClearAllTransitions(WorldUpReferenceFramePM *this, pmove_t *pm)
{
  ?ClearAllTransitions@WorldUpReferenceFramePM@@QEAAXPEAVpmove_t@@@Z(this, pm);
}

/*
==============
WorldUpReferenceFrame::InitStandardAxes
==============
*/

void WorldUpReferenceFrame::InitStandardAxes(void)
{
  ?InitStandardAxes@WorldUpReferenceFrame@@KAXXZ();
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromVector
==============
*/

void __fastcall WorldUpReferenceFrame::RemoveReferenceFrameFromVector(WorldUpReferenceFrame *this, vec3_t *vec)
{
  ?RemoveReferenceFrameFromVector@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, vec);
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndViewAngles
==============
*/

void __fastcall WorldUpReferenceFrame::SetAnglesAndViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles, const vec3_t *newViewAngles)
{
  ?SetAnglesAndViewAngles@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@AEBTvec3_t@@2@Z(this, ps, handler, newWorldAngles, newViewAngles);
}

/*
==============
WorldUpReferenceFramePM::SetToWorldFallTransition
==============
*/

void __fastcall WorldUpReferenceFramePM::SetToWorldFallTransition(WorldUpReferenceFramePM *this, pmove_t *pm)
{
  ?SetToWorldFallTransition@WorldUpReferenceFramePM@@QEAAXPEAVpmove_t@@@Z(this, pm);
}

/*
==============
WorldUpReferenceFramePM::IsUnLockedTransitionActive
==============
*/

bool __fastcall WorldUpReferenceFramePM::IsUnLockedTransitionActive(WorldUpReferenceFramePM *this, const playerState_s *ps)
{
  return ?IsUnLockedTransitionActive@WorldUpReferenceFramePM@@QEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
WorldUpReferenceFramePM::GetWorldUpTriggerData
==============
*/

bool __fastcall WorldUpReferenceFramePM::GetWorldUpTriggerData(WorldUpReferenceFramePM *this, pmove_t *pm, vec3_t *outWorldUpDir, bool *outHadValidTriggerData)
{
  return ?GetWorldUpTriggerData@WorldUpReferenceFramePM@@AEAA_NPEAVpmove_t@@AEATvec3_t@@PEA_N@Z(this, pm, outWorldUpDir, outHadValidTriggerData);
}

/*
==============
WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir
==============
*/

bool __fastcall WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(WorldUpReferenceFramePM *this, const pmove_t *pm, vec3_t *outCustomGravityDir)
{
  return ?GetCustomSlideMoveGravityDir@WorldUpReferenceFramePM@@QEBA_NPEBVpmove_t@@AEATvec3_t@@@Z(this, pm, outCustomGravityDir);
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistanceSq
==============
*/

double __fastcall WorldUpReferenceFrame::GetHorizontalDistanceSq(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  double result; 

  *(float *)&result = ?GetHorizontalDistanceSq@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@0@Z(this, vecA, vecB);
  return result;
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToAngles
==============
*/

void __fastcall WorldUpReferenceFrame::ApplyReferenceFrameToAngles(WorldUpReferenceFrame *this, vec3_t *angles)
{
  ?ApplyReferenceFrameToAngles@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, angles);
}

/*
==============
WorldUpReferenceFrame::GetForwardContribution
==============
*/

double __fastcall WorldUpReferenceFrame::GetForwardContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?GetForwardContribution@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@@Z(this, vec);
  return result;
}

/*
==============
WorldUpReferenceFrame::VecToYaw
==============
*/

double __fastcall WorldUpReferenceFrame::VecToYaw(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?VecToYaw@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@@Z(this, vec);
  return result;
}

/*
==============
WorldUpReferenceFrame::Vec2Dot
==============
*/

double __fastcall WorldUpReferenceFrame::Vec2Dot(WorldUpReferenceFrame *this, const vec3_t *dirA, const vec3_t *dirB)
{
  double result; 

  *(float *)&result = ?Vec2Dot@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@0@Z(this, dirA, dirB);
  return result;
}

/*
==============
WorldUpReferenceFrame::CrossWithUp
==============
*/

void __fastcall WorldUpReferenceFrame::CrossWithUp(WorldUpReferenceFrame *this, const vec3_t *vec, vec3_t *outVec)
{
  ?CrossWithUp@WorldUpReferenceFrame@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, vec, outVec);
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/

void __fastcall WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this)
{
  ??0WorldUpReferenceFrame@@QEAA@XZ(this);
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToVector
==============
*/

void __fastcall WorldUpReferenceFrame::ApplyReferenceFrameToVector(WorldUpReferenceFrame *this, vec3_t *vec)
{
  ?ApplyReferenceFrameToVector@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, vec);
}

/*
==============
WorldUpReferenceFrame::SetFinalInternalAngles
==============
*/

void __fastcall WorldUpReferenceFrame::SetFinalInternalAngles(WorldUpReferenceFrame *this, const vec3_t *angles)
{
  ?SetFinalInternalAngles@WorldUpReferenceFrame@@IEAAXAEBTvec3_t@@@Z(this, angles);
}

/*
==============
WorldUpReferenceFrame::Unlink
==============
*/

void __fastcall WorldUpReferenceFrame::Unlink(WorldUpReferenceFrame *this, playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *handler, const int useParentAngles, const vec3_t *parentAngles)
{
  ?Unlink@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@PEBVBgWeaponMap@@PEBVBgHandler@@HPEBTvec3_t@@@Z(this, ps, weaponMap, handler, useParentAngles, parentAngles);
}

/*
==============
WorldUpReferenceFramePM::CalculateNormalForGroundUpdate
==============
*/

bool __fastcall WorldUpReferenceFramePM::CalculateNormalForGroundUpdate(WorldUpReferenceFramePM *this, pmove_t *pm, vec3_t *outNormal)
{
  return ?CalculateNormalForGroundUpdate@WorldUpReferenceFramePM@@QEAA_NPEAVpmove_t@@AEATvec3_t@@@Z(this, pm, outNormal);
}

/*
==============
WorldUpReferenceFrame::GetUpVector
==============
*/

void __fastcall WorldUpReferenceFrame::GetUpVector(WorldUpReferenceFrame *this, vec3_t *outUp)
{
  ?GetUpVector@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, outUp);
}

/*
==============
WorldUpReferenceFrame::ClearWorldUp
==============
*/

void __fastcall WorldUpReferenceFrame::ClearWorldUp(WorldUpReferenceFrame *this)
{
  ?ClearWorldUp@WorldUpReferenceFrame@@QEAAXXZ(this);
}

/*
==============
WorldUpReferenceFrame::PackEntityStateAngles
==============
*/

int __fastcall WorldUpReferenceFrame::PackEntityStateAngles(const vec3_t *worldUpAngles)
{
  return ?PackEntityStateAngles@WorldUpReferenceFrame@@SAHAEBTvec3_t@@@Z(worldUpAngles);
}

/*
==============
WorldUpReferenceFrame::SetEntityAndNormalizeViewAngles
==============
*/

void __fastcall WorldUpReferenceFrame::SetEntityAndNormalizeViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, __int16 entity)
{
  ?SetEntityAndNormalizeViewAngles@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@F@Z(this, ps, handler, entity);
}

/*
==============
WorldUpReferenceFrame::UnpackEntityStateAngles
==============
*/

void __fastcall WorldUpReferenceFrame::UnpackEntityStateAngles(int angles, vec3_t *outWorldUpAngles)
{
  ?UnpackEntityStateAngles@WorldUpReferenceFrame@@SAXHAEATvec3_t@@@Z(angles, outWorldUpAngles);
}

/*
==============
WorldUpReferenceFramePM::IsLockedTransitionActive
==============
*/

bool __fastcall WorldUpReferenceFramePM::IsLockedTransitionActive(WorldUpReferenceFramePM *this, const playerState_s *ps)
{
  return ?IsLockedTransitionActive@WorldUpReferenceFramePM@@QEBA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
WorldUpReferenceFrame::CalculateEntMoverAxis
==============
*/

void __fastcall WorldUpReferenceFrame::CalculateEntMoverAxis(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, tmat33_t<vec3_t> *outAxis)
{
  ?CalculateEntMoverAxis@WorldUpReferenceFrame@@IEBAXPEBUplayerState_s@@PEBVBgHandler@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(this, ps, handler, outAxis);
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToQuat
==============
*/

void __fastcall WorldUpReferenceFrame::ApplyReferenceFrameToQuat(WorldUpReferenceFrame *this, vec4_t *quat)
{
  ?ApplyReferenceFrameToQuat@WorldUpReferenceFrame@@QEBAXAEATvec4_t@@@Z(this, quat);
}

/*
==============
WorldUpReferenceFrame::GetVerticalDelta
==============
*/

double __fastcall WorldUpReferenceFrame::GetVerticalDelta(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  double result; 

  *(float *)&result = ?GetVerticalDelta@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@0@Z(this, vecA, vecB);
  return result;
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpEnt
==============
*/

int __fastcall WorldUpReferenceFrame::HasValidWorldUpEnt(const playerState_s *ps)
{
  return ?HasValidWorldUpEnt@WorldUpReferenceFrame@@SAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpReferenceFrame::InitFromNormal
==============
*/

void __fastcall WorldUpReferenceFrame::InitFromNormal(WorldUpReferenceFrame *this, const vec3_t *normal)
{
  ?InitFromNormal@WorldUpReferenceFrame@@QEAAXAEBTvec3_t@@@Z(this, normal);
}

/*
==============
WorldUpReferenceFrame::GetAngles
==============
*/

void __fastcall WorldUpReferenceFrame::GetAngles(WorldUpReferenceFrame *this, vec3_t *outAngles)
{
  ?GetAngles@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, outAngles);
}

/*
==============
WorldUpReferenceFrame::GetUpContribution
==============
*/

double __fastcall WorldUpReferenceFrame::GetUpContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?GetUpContribution@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@@Z(this, vec);
  return result;
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAngles
==============
*/

void __fastcall WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(WorldUpReferenceFrame *this, vec3_t *angles)
{
  ?RemoveReferenceFrameFromAngles@WorldUpReferenceFrame@@QEBAXAEATvec3_t@@@Z(this, angles);
}

/*
==============
WorldUpReferenceFramePM::BuildAxisFromUp
==============
*/

void __fastcall WorldUpReferenceFramePM::BuildAxisFromUp(WorldUpReferenceFramePM *this, const vec3_t *up, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  ?BuildAxisFromUp@WorldUpReferenceFramePM@@AEAAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT3@@Z(this, up, refAxis, outAxis);
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpAngles
==============
*/

int __fastcall WorldUpReferenceFrame::HasValidWorldUpAngles(const playerState_s *ps)
{
  return ?HasValidWorldUpAngles@WorldUpReferenceFrame@@KAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpReferenceFrame::GetEyePosition
==============
*/

double __fastcall WorldUpReferenceFrame::GetEyePosition(WorldUpReferenceFrame *this, const playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *handler, vec3_t *outEye)
{
  double result; 

  *(float *)&result = ?GetEyePosition@WorldUpReferenceFrame@@QEAAMPEBUplayerState_s@@PEBVBgWeaponMap@@PEBVBgHandler@@AEATvec3_t@@@Z(this, ps, weaponMap, handler, outEye);
  return result;
}

/*
==============
WorldUpReferenceFrame::GetRightContribution
==============
*/

double __fastcall WorldUpReferenceFrame::GetRightContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  double result; 

  *(float *)&result = ?GetRightContribution@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@@Z(this, vec);
  return result;
}

/*
==============
WorldUpReferenceFrame::Init
==============
*/

void __fastcall WorldUpReferenceFrame::Init(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler)
{
  ?Init@WorldUpReferenceFrame@@QEAAXPEBUplayerState_s@@PEBVBgHandler@@@Z(this, ps, handler);
}

/*
==============
WorldUpReferenceFrame::CalculateInitialAxis
==============
*/

void __fastcall WorldUpReferenceFrame::CalculateInitialAxis(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, tmat33_t<vec3_t> *outAxis)
{
  ?CalculateInitialAxis@WorldUpReferenceFrame@@IEBAXPEBUplayerState_s@@PEBVBgHandler@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(this, ps, handler, outAxis);
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromVector
==============
*/

void __fastcall WorldUpReferenceFrame::RemoveReferenceFrameFromVector(WorldUpReferenceFrame *this, const vec3_t *vec, vec3_t *outVec)
{
  ?RemoveReferenceFrameFromVector@WorldUpReferenceFrame@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, vec, outVec);
}

/*
==============
WorldUpReferenceFrame::AddUpContribution
==============
*/

void __fastcall WorldUpReferenceFrame::AddUpContribution(WorldUpReferenceFrame *this, float height, vec3_t *vec)
{
  ?AddUpContribution@WorldUpReferenceFrame@@QEBAXMAEATvec3_t@@@Z(this, height, vec);
}

/*
==============
WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate
==============
*/

void __fastcall WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(WorldUpReferenceFramePM *this, pmove_t *pm, const pml_t *pml, const trace_t *trace)
{
  ?UpdateArbitraryUpForGroundUpdate@WorldUpReferenceFramePM@@QEAAXPEAVpmove_t@@PEBUpml_t@@PEBUtrace_t@@@Z(this, pm, pml, trace);
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAxis
==============
*/

void __fastcall WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(WorldUpReferenceFrame *this, const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outAxis)
{
  ?RemoveReferenceFrameFromAxis@WorldUpReferenceFrame@@QEBAXAEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(this, axis, outAxis);
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAxis
==============
*/

void __fastcall WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(WorldUpReferenceFrame *this, tmat33_t<vec3_t> *axis)
{
  ?RemoveReferenceFrameFromAxis@WorldUpReferenceFrame@@QEBAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(this, axis);
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/

void __fastcall WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, int initFlags)
{
  ??0WorldUpReferenceFrame@@QEAA@PEBUplayerState_s@@PEBVBgHandler@@H@Z(this, ps, handler, initFlags);
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToAxis
==============
*/

void __fastcall WorldUpReferenceFrame::ApplyReferenceFrameToAxis(WorldUpReferenceFrame *this, tmat33_t<vec3_t> *axis)
{
  ?ApplyReferenceFrameToAxis@WorldUpReferenceFrame@@QEBAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(this, axis);
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistance
==============
*/

double __fastcall WorldUpReferenceFrame::GetHorizontalDistance(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  double result; 

  *(float *)&result = ?GetHorizontalDistance@WorldUpReferenceFrame@@QEBAMAEBTvec3_t@@0@Z(this, vecA, vecB);
  return result;
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/

void __fastcall WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler)
{
  ??0WorldUpReferenceFrame@@QEAA@PEBUplayerState_s@@PEBVBgHandler@@@Z(this, ps, handler);
}

/*
==============
WorldUpReferenceFrame::IsTrackingMover
==============
*/

bool __fastcall WorldUpReferenceFrame::IsTrackingMover(const playerState_s *ps)
{
  return ?IsTrackingMover@WorldUpReferenceFrame@@KA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpInPs
==============
*/

int __fastcall WorldUpReferenceFrame::HasValidWorldUpInPs(const playerState_s *ps)
{
  return ?HasValidWorldUpInPs@WorldUpReferenceFrame@@SAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
WorldUpReferenceFrame::SetAngles
==============
*/

void __fastcall WorldUpReferenceFrame::SetAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *angles)
{
  ?SetAngles@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@AEBTvec3_t@@@Z(this, ps, handler, angles);
}

/*
==============
WorldUpReferenceFrame::GetStandardAxisFromAxis
==============
*/

int __fastcall WorldUpReferenceFrame::GetStandardAxisFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *resultAxis)
{
  return ?GetStandardAxisFromAxis@WorldUpReferenceFrame@@SAHAEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(axis, resultAxis);
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles
==============
*/

void __fastcall WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles)
{
  ?SetAnglesAndNormalizeViewAngles@WorldUpReferenceFrame@@QEAAXPEAUplayerState_s@@PEBVBgHandler@@AEBTvec3_t@@@Z(this, ps, handler, newWorldAngles);
}

/*
==============
WorldUpReferenceFrame::SetUpContribution
==============
*/

void __fastcall WorldUpReferenceFrame::SetUpContribution(WorldUpReferenceFrame *this, float height, vec3_t *vec)
{
  ?SetUpContribution@WorldUpReferenceFrame@@QEBAXMAEATvec3_t@@@Z(this, height, vec);
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/
void WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler)
{
  WorldUpReferenceFrame::Init(this, ps, handler);
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/
void WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, int initFlags)
{
  char v5; 

  v5 = initFlags;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) && (v5 & 1) != 0 && (ps->linkFlags.m_flags[0] & 4) != 0 )
  {
    this->m_axisAdjusted = 0;
    MatrixIdentity33(&this->m_axis);
  }
  else
  {
    WorldUpReferenceFrame::Init(this, ps, handler);
  }
}

/*
==============
WorldUpReferenceFrame::WorldUpReferenceFrame
==============
*/
void WorldUpReferenceFrame::WorldUpReferenceFrame(WorldUpReferenceFrame *this)
{
  this->m_axisAdjusted = 0;
  MatrixIdentity33(&this->m_axis);
}

/*
==============
WorldUpReferenceFrame::AddUpContribution
==============
*/
void WorldUpReferenceFrame::AddUpContribution(WorldUpReferenceFrame *this, float height, vec3_t *vec)
{
  float v3; 

  if ( this->m_axisAdjusted )
  {
    vec->v[0] = (float)(height * this->m_axis.m[2].v[0]) + vec->v[0];
    vec->v[1] = (float)(height * this->m_axis.m[2].v[1]) + vec->v[1];
    v3 = (float)(height * this->m_axis.m[2].v[2]) + vec->v[2];
  }
  else
  {
    v3 = height + vec->v[2];
  }
  vec->v[2] = v3;
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToAngles
==============
*/
void WorldUpReferenceFrame::ApplyReferenceFrameToAngles(WorldUpReferenceFrame *this, vec3_t *angles)
{
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( this->m_axisAdjusted )
  {
    AnglesToAxis(angles, &axis);
    if ( this->m_axisAdjusted )
    {
      MatrixMultiply(&axis, &this->m_axis, &out);
      AxisCopy(&out, &axis);
    }
    AxisToAngles(&axis, angles);
  }
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToAxis
==============
*/
void WorldUpReferenceFrame::ApplyReferenceFrameToAxis(WorldUpReferenceFrame *this, tmat33_t<vec3_t> *axis)
{
  tmat33_t<vec3_t> out; 

  if ( this->m_axisAdjusted )
  {
    MatrixMultiply(axis, &this->m_axis, &out);
    AxisCopy(&out, axis);
  }
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToQuat
==============
*/
void WorldUpReferenceFrame::ApplyReferenceFrameToQuat(WorldUpReferenceFrame *this, vec4_t *quat)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec4_t out; 
  char v10; 

  if ( this->m_axisAdjusted )
  {
    AxisToQuat(&this->m_axis, &out);
    if ( quat == (vec4_t *)&v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v3 = quat->v[3];
    v4 = quat->v[2];
    v5 = quat->v[1];
    v6 = (float)((float)((float)(v5 * out.v[3]) - (float)(v4 * out.v[0])) + (float)(v3 * out.v[1])) + (float)(quat->v[0] * out.v[2]);
    v7 = (float)((float)((float)(v5 * out.v[0]) + (float)(v4 * out.v[3])) - (float)(quat->v[0] * out.v[1])) + (float)(v3 * out.v[2]);
    v8 = (float)((float)((float)(v3 * out.v[3]) - (float)(quat->v[0] * out.v[0])) - (float)(v5 * out.v[1])) - (float)(v4 * out.v[2]);
    quat->v[0] = (float)((float)((float)(quat->v[0] * out.v[3]) + (float)(v3 * out.v[0])) + (float)(v4 * out.v[1])) - (float)(v5 * out.v[2]);
    quat->v[1] = v6;
    quat->v[3] = v8;
    quat->v[2] = v7;
  }
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToVector
==============
*/
void WorldUpReferenceFrame::ApplyReferenceFrameToVector(WorldUpReferenceFrame *this, vec3_t *vec)
{
  float v3; 
  vec3_t out; 

  if ( this->m_axisAdjusted )
  {
    MatrixTransformVector(vec, &this->m_axis, &out);
    v3 = out.v[1];
    vec->v[0] = out.v[0];
    vec->v[2] = out.v[2];
    vec->v[1] = v3;
  }
}

/*
==============
WorldUpReferenceFramePM::BuildAxisFromUp
==============
*/
void WorldUpReferenceFramePM::BuildAxisFromUp(WorldUpReferenceFramePM *this, const vec3_t *up, const tmat33_t<vec3_t> *refAxis, tmat33_t<vec3_t> *outAxis)
{
  GenerateAxisFromUpVector(up, refAxis, outAxis);
}

/*
==============
WorldUpReferenceFrame::CalculateEntMoverAxis
==============
*/
void WorldUpReferenceFrame::CalculateEntMoverAxis(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, tmat33_t<vec3_t> *outAxis)
{
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  MatrixIdentity33(outAxis);
  if ( WorldUpReferenceFrame::IsTrackingMover(ps) )
  {
    handler->GetEntityAngles((BgHandler *)handler, ps->movingPlatforms.m_movingPlatformEntity, &angles);
    if ( angles.v[0] != 0.0 || angles.v[1] != 0.0 || angles.v[2] != 0.0 )
      AnglesToAxis(&angles, outAxis);
  }
  else if ( WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
  {
    handler->GetEntityAngles((BgHandler *)handler, ps->worldUpRefEnt, &angles);
    if ( angles.v[0] != 0.0 || angles.v[1] != 0.0 || angles.v[2] != 0.0 )
    {
      AnglesToAxis(&angles, &axis);
      AxisCopy(outAxis, &out);
      MatrixMultiply(&axis, &out, outAxis);
    }
  }
}

/*
==============
WorldUpReferenceFrame::CalculateInitialAxis
==============
*/
void WorldUpReferenceFrame::CalculateInitialAxis(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler, tmat33_t<vec3_t> *outAxis)
{
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 423, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::CalculateEntMoverAxis(this, ps, handler, outAxis);
  if ( WorldUpReferenceFrame::HasValidWorldUpAngles(ps) )
  {
    AnglesToAxis(&ps->worldUpAngles, &axis);
    AxisCopy(outAxis, &out);
    MatrixMultiply(&axis, &out, outAxis);
  }
}

/*
==============
WorldUpReferenceFramePM::CalculateNormalForGroundUpdate
==============
*/
char WorldUpReferenceFramePM::CalculateNormalForGroundUpdate(WorldUpReferenceFramePM *this, pmove_t *pm, vec3_t *outNormal)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  int v11; 
  char v12; 
  playerState_s *ps; 
  char v15; 
  unsigned int v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  bool m_axisAdjusted; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  __int128 v41; 
  float v45; 
  float v46; 
  float v47; 
  const BgHandler *m_bgHandler; 
  bool v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  bool outHadValidTriggerData; 
  bool WorldUpTriggerData; 
  vec3_t start; 
  vec3_t end; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 846, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v11 = 0;
  outNormal->v[2] = 1.0;
  *(_QWORD *)outNormal->v = 0i64;
  outHadValidTriggerData = 0;
  WorldUpTriggerData = WorldUpReferenceFramePM::GetWorldUpTriggerData(this, pm, outNormal, &outHadValidTriggerData);
  v12 = WorldUpTriggerData;
  if ( !WorldUpTriggerData )
  {
    if ( !pm->refFrame.m_axisAdjusted )
      return 0;
    goto LABEL_6;
  }
  if ( !outHadValidTriggerData )
  {
LABEL_6:
    ps = pm->ps;
    if ( WorldUpTriggerData || BG_IsPlayerZeroG(pm->ps) )
    {
      v15 = 0;
      v70 = v3;
      v67 = v6;
      v66 = v7;
      if ( worldUpDrawTraces )
      {
        v15 = 1;
        worldUpDrawTraces = 0;
      }
      v16 = WORLD_UP_GROUND_SOLVER_RAY_COUNT;
      if ( !WORLD_UP_GROUND_SOLVER_RAY_COUNT )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 898, ASSERT_TYPE_ASSERT, "(WORLD_UP_GROUND_SOLVER_RAY_COUNT > 0)", (const char *)&queryFormat, "WORLD_UP_GROUND_SOLVER_RAY_COUNT > 0") )
          __debugbreak();
        v16 = WORLD_UP_GROUND_SOLVER_RAY_COUNT;
      }
      v17 = WORLD_UP_GROUND_SOLVER_RAY_START_SCALE * ps->viewHeightCurrent;
      v18 = 0.0;
      if ( (int)(v16 - 1) > 0 )
        v18 = 360.0 / (float)(int)(v16 - 1);
      v19 = 0;
      if ( v16 )
      {
        v69 = v4;
        v68 = v5;
        do
        {
          LODWORD(v20) = LODWORD(WORLD_UP_GROUND_SOLVER_RAY_LENGTH) ^ _xmm;
          v21 = 0.0;
          v22 = 0.0;
          if ( v19 )
          {
            v23 = (float)v19;
            angles.v[0] = WORLD_UP_GROUND_SOLVER_RAY_CONE_ANGLE;
            angles.v[1] = v23 * v18;
            angles.v[2] = 0.0;
            AnglesToAxis(&angles, &axis);
            v21 = v20 * axis.m[2].v[0];
            v22 = v20 * axis.m[2].v[1];
            v20 = v20 * axis.m[2].v[2];
          }
          m_axisAdjusted = pm->refFrame.m_axisAdjusted;
          if ( m_axisAdjusted )
          {
            v25 = v21 * pm->refFrame.m_axis.m[0].v[1];
            v26 = v21 * pm->refFrame.m_axis.m[0].v[2];
            v27 = v22 * pm->refFrame.m_axis.m[1].v[2];
            v21 = (float)((float)(v22 * pm->refFrame.m_axis.m[1].v[0]) + (float)(v21 * pm->refFrame.m_axis.m[0].v[0])) + (float)(v20 * pm->refFrame.m_axis.m[2].v[0]);
            v22 = (float)((float)(v22 * pm->refFrame.m_axis.m[1].v[1]) + v25) + (float)(v20 * pm->refFrame.m_axis.m[2].v[1]);
            v20 = (float)(v20 * pm->refFrame.m_axis.m[2].v[2]) + (float)(v27 + v26);
          }
          v28 = ps->origin.v[0];
          v29 = ps->origin.v[1];
          v30 = ps->origin.v[2];
          start.v[0] = v28;
          start.v[1] = v29;
          if ( m_axisAdjusted )
          {
            v28 = (float)(v17 * pm->refFrame.m_axis.m[2].v[0]) + v28;
            v29 = (float)(v17 * pm->refFrame.m_axis.m[2].v[1]) + v29;
            v31 = (float)(v17 * pm->refFrame.m_axis.m[2].v[2]) + v30;
            start.v[0] = v28;
            start.v[1] = v29;
          }
          else
          {
            v31 = v30 + v17;
          }
          end.v[0] = v28 + v21;
          end.v[2] = v20 + v31;
          start.v[2] = v31;
          end.v[1] = v29 + v22;
          if ( v15 )
            pm->m_bgHandler->DebugLine((BgHandler *)pm->m_bgHandler, &start, &end, &colorRed, 1, 10000);
          BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &end, &bounds_origin, ps->clientNum, pm->tracemask);
          if ( results.fraction < 1.0 )
          {
            v32 = results.normal.v[2];
            v33 = results.normal.v[0];
            v34 = results.normal.v[1];
            v35 = results.normal.v[2];
            if ( pm->refFrame.m_axisAdjusted )
            {
              MatrixTranspose(&pm->refFrame.m_axis, &axis);
              v36 = v33 * axis.m[0].v[2];
              v37 = v34 * axis.m[1].v[2];
              v34 = results.normal.v[1];
              v33 = results.normal.v[0];
              v35 = (float)(v36 + v37) + (float)(v35 * axis.m[2].v[2]);
              v32 = results.normal.v[2];
            }
            if ( v35 > WORLD_UP_GROUND_SOLVER_RAY_WALL_NORMAL )
            {
              if ( v11 )
              {
                v38 = v34 + outNormal->v[1];
                outNormal->v[0] = v33 + outNormal->v[0];
                outNormal->v[2] = v32 + outNormal->v[2];
                outNormal->v[1] = v38;
              }
              else
              {
                outNormal->v[0] = v33;
                outNormal->v[1] = v34;
                outNormal->v[2] = v32;
              }
              ++v11;
            }
          }
          ++v19;
        }
        while ( v19 < WORLD_UP_GROUND_SOLVER_RAY_COUNT );
        v12 = WorldUpTriggerData;
      }
      v39 = LODWORD(outNormal->v[1]);
      v40 = outNormal->v[2];
      v41 = v39;
      *(float *)&v41 = fsqrt((float)((float)(*(float *)&v39 * *(float *)&v39) + (float)(outNormal->v[0] * outNormal->v[0])) + (float)(v40 * v40));
      _XMM3 = v41;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
      }
      v45 = outNormal->v[0] * (float)(1.0 / *(float *)&_XMM0);
      v46 = *(float *)&v39 * (float)(1.0 / *(float *)&_XMM0);
      v47 = v40 * (float)(1.0 / *(float *)&_XMM0);
      outNormal->v[2] = v47;
      outNormal->v[0] = v45;
      outNormal->v[1] = v46;
      if ( v15 )
      {
        m_bgHandler = pm->m_bgHandler;
        angles.v[0] = (float)(v45 * 300.0) + ps->origin.v[0];
        angles.v[1] = (float)(v46 * 300.0) + ps->origin.v[1];
        angles.v[2] = (float)(v47 * 300.0) + ps->origin.v[2];
        m_bgHandler->DebugLine((BgHandler *)m_bgHandler, &ps->origin, &angles, &colorWhite, 1, 10000);
      }
      if ( !BG_IsPlayerZeroG(ps) && !v11 && v12 )
      {
        v49 = pm->refFrame.m_axisAdjusted;
        v50 = ps->origin.v[0];
        v51 = ps->origin.v[1];
        v52 = ps->origin.v[2];
        end.v[0] = v50;
        end.v[1] = v51;
        if ( v49 )
        {
          v53 = v17 * pm->refFrame.m_axis.m[2].v[1];
          end.v[0] = (float)(v17 * pm->refFrame.m_axis.m[2].v[0]) + v50;
          v54 = v17 * pm->refFrame.m_axis.m[2].v[2];
          end.v[1] = v53 + v51;
          end.v[2] = v54 + v52;
        }
        else
        {
          end.v[2] = v52 + v17;
        }
        LODWORD(v55) = LODWORD(ARBITRARY_UP_GROUND_TRACE_HEIGHT) ^ _xmm;
        start.v[0] = v50;
        start.v[1] = v51;
        if ( v49 )
        {
          v56 = v55 * pm->refFrame.m_axis.m[2].v[1];
          start.v[0] = (float)(v55 * pm->refFrame.m_axis.m[2].v[0]) + v50;
          v57 = v55 * pm->refFrame.m_axis.m[2].v[2];
          start.v[1] = v56 + v51;
          start.v[2] = v57 + v52;
        }
        else
        {
          start.v[2] = v52 + v55;
        }
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &end, &start, &bounds_origin, ps->clientNum, pm->tracemask);
        if ( results.fraction < 1.0 )
        {
          v58 = results.normal.v[1];
          outNormal->v[0] = results.normal.v[0];
          outNormal->v[2] = results.normal.v[2];
          outNormal->v[1] = v58;
        }
      }
    }
    else
    {
      *(_QWORD *)outNormal->v = 0i64;
      outNormal->v[2] = 1.0;
    }
  }
  return 1;
}

/*
==============
WorldUpReferenceFramePM::ClearAllTransitions
==============
*/
void WorldUpReferenceFramePM::ClearAllTransitions(WorldUpReferenceFramePM *this, pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 1169, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x36u);
  pm->ps->worldUpTransitionTarget = 0;
  pm->ps->worldUpAngularVelocity = 0;
}

/*
==============
WorldUpReferenceFrame::ClearWorldUp
==============
*/
void WorldUpReferenceFrame::ClearWorldUp(WorldUpReferenceFrame *this)
{
  this->m_axisAdjusted = 0;
  MatrixIdentity33(&this->m_axis);
}

/*
==============
WorldUpReferenceFrame::CrossWithUp
==============
*/
void WorldUpReferenceFrame::CrossWithUp(WorldUpReferenceFrame *this, const vec3_t *vec, vec3_t *outVec)
{
  vec3_t *v6; 

  if ( vec == outVec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 590, ASSERT_TYPE_ASSERT, "(&vec != &outVec)", (const char *)&queryFormat, "&vec != &outVec") )
    __debugbreak();
  v6 = &WorldUpReferenceFrame::m_defaultUp;
  if ( this->m_axisAdjusted )
    v6 = &this->m_axis.m[2];
  Vec3Cross(v6, vec, outVec);
}

/*
==============
WorldUpReferenceFrame::GetAngles
==============
*/
void WorldUpReferenceFrame::GetAngles(WorldUpReferenceFrame *this, vec3_t *outAngles)
{
  if ( this->m_axisAdjusted )
    AxisToAngles(&this->m_axis, outAngles);
  else
    *outAngles = vec3_origin;
}

/*
==============
WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir
==============
*/
bool WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(WorldUpReferenceFramePM *this, const pmove_t *pm, vec3_t *outCustomGravityDir)
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) && WorldUpMp_GetCustomSlideMoveGravityDir(pm, outCustomGravityDir);
}

/*
==============
WorldUpReferenceFrame::GetEyePosition
==============
*/
float WorldUpReferenceFrame::GetEyePosition(WorldUpReferenceFrame *this, const playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *handler, vec3_t *outEye)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float result; 
  float v17; 
  float v18; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 342, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  BG_GetPlayerEyePosition(weaponMap, ps, outEye, handler);
  v9 = ps->origin.v[1] - outEye->v[1];
  v10 = ps->origin.v[0];
  v11 = ps->origin.v[2] - outEye->v[2];
  v12 = v10 - outEye->v[0];
  v13 = v11 * v11;
  outEye->v[0] = v10;
  v14 = ps->origin.v[1];
  outEye->v[1] = v14;
  v15 = ps->origin.v[2];
  outEye->v[2] = v15;
  v17 = fsqrt((float)((float)(v12 * v12) + (float)(v9 * v9)) + v13);
  result = v17;
  if ( this->m_axisAdjusted )
  {
    outEye->v[0] = (float)(v17 * this->m_axis.m[2].v[0]) + v10;
    outEye->v[1] = (float)(v17 * this->m_axis.m[2].v[1]) + v14;
    v18 = v17 * this->m_axis.m[2].v[2];
  }
  else
  {
    v18 = v17;
  }
  outEye->v[2] = v15 + v18;
  return result;
}

/*
==============
WorldUpReferenceFrame::GetForwardContribution
==============
*/
float WorldUpReferenceFrame::GetForwardContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
    return (float)((float)(this->m_axis.m[0].v[1] * vec->v[1]) + (float)(this->m_axis.m[0].v[0] * vec->v[0])) + (float)(this->m_axis.m[0].v[2] * vec->v[2]);
  else
    return vec->v[0];
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistance
==============
*/
float WorldUpReferenceFrame::GetHorizontalDistance(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  v3 = vecA->v[2];
  v4 = vecA->v[0];
  v5 = vecA->v[1];
  v6 = vecB->v[0];
  v7 = vecB->v[1];
  v8 = vecB->v[2];
  if ( this->m_axisAdjusted )
  {
    v11 = this->m_axis.m[2].v[0];
    v12 = this->m_axis.m[2].v[2];
    v13 = this->m_axis.m[2].v[1];
    LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(v13 * v5) + (float)(v11 * v4)) + (float)(v12 * v3)) ^ _xmm;
    v4 = (float)(v11 * v14) + v4;
    v9 = (float)(v12 * v14) + v3;
    v5 = (float)(v13 * v14) + v5;
    LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(v7 * v13) + (float)(v11 * v6)) + (float)(v8 * v12)) ^ _xmm;
    v6 = (float)(v11 * v15) + v6;
    v7 = (float)(v15 * v13) + v7;
    v10 = (float)(v15 * v12) + v8;
  }
  else
  {
    v9 = 0.0;
    v10 = 0.0;
  }
  return fsqrt((float)((float)((float)(v7 - v5) * (float)(v7 - v5)) + (float)((float)(v6 - v4) * (float)(v6 - v4))) + (float)((float)(v10 - v9) * (float)(v10 - v9)));
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistanceSq
==============
*/
float WorldUpReferenceFrame::GetHorizontalDistanceSq(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 

  v3 = vecA->v[2];
  v4 = vecA->v[0];
  v5 = vecA->v[1];
  v6 = vecB->v[0];
  v7 = vecB->v[1];
  if ( this->m_axisAdjusted )
  {
    v10 = this->m_axis.m[2].v[0];
    v11 = this->m_axis.m[2].v[2];
    v12 = this->m_axis.m[2].v[1];
    LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)(v12 * v5) + (float)(v10 * v4)) + (float)(v11 * v3)) ^ _xmm;
    v4 = (float)(v10 * v13) + v4;
    v8 = (float)(v11 * v13) + v3;
    v5 = (float)(v12 * v13) + v5;
    LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(v6 * v10) + (float)(v12 * v7)) + (float)(v11 * vecB->v[2])) ^ _xmm;
    v6 = (float)(v10 * v14) + v6;
    v7 = (float)(v14 * v12) + v7;
    v9 = (float)(v14 * v11) + vecB->v[2];
  }
  else
  {
    v8 = 0.0;
    v9 = 0.0;
  }
  return (float)((float)((float)(v7 - v5) * (float)(v7 - v5)) + (float)((float)(v6 - v4) * (float)(v6 - v4))) + (float)((float)(v9 - v8) * (float)(v9 - v8));
}

/*
==============
WorldUpReferenceFrame::GetRightContribution
==============
*/
float WorldUpReferenceFrame::GetRightContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
    return (float)((float)(this->m_axis.m[1].v[1] * vec->v[1]) + (float)(this->m_axis.m[1].v[0] * vec->v[0])) + (float)(this->m_axis.m[1].v[2] * vec->v[2]);
  else
    return vec->v[1];
}

/*
==============
WorldUpReferenceFrame::GetStandardAxisFromAxis
==============
*/
__int64 WorldUpReferenceFrame::GetStandardAxisFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *resultAxis)
{
  const dvar_t *v4; 
  float value; 
  int v6; 
  float *i; 

  v4 = DVARFLT_pmove_snap_world_up;
  if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( value <= 0.0 )
    return 0i64;
  if ( !WorldUpReferenceFrame::m_standardInit )
    WorldUpReferenceFrame::InitStandardAxes();
  v6 = 0;
  for ( i = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2]; (float)((float)((float)(axis->m[0].v[0] * *(i - 2)) + (float)(axis->m[0].v[1] * *(i - 1))) + (float)(axis->m[0].v[2] * *i)) <= value || (float)((float)((float)(axis->m[1].v[1] * i[2]) + (float)(i[1] * axis->m[1].v[0])) + (float)(axis->m[1].v[2] * i[3])) <= value || (float)((float)((float)(axis->m[2].v[1] * i[5]) + (float)(i[4] * axis->m[2].v[0])) + (float)(axis->m[2].v[2] * i[6])) <= value; i += 9 )
  {
    if ( (unsigned int)++v6 >= 5 )
      return 0i64;
  }
  MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v6], resultAxis);
  return 1i64;
}

/*
==============
WorldUpReferenceFrame::GetUpContribution
==============
*/
float WorldUpReferenceFrame::GetUpContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
    return (float)((float)(this->m_axis.m[2].v[1] * vec->v[1]) + (float)(this->m_axis.m[2].v[0] * vec->v[0])) + (float)(this->m_axis.m[2].v[2] * vec->v[2]);
  else
    return vec->v[2];
}

/*
==============
WorldUpReferenceFrame::GetUpVector
==============
*/
void WorldUpReferenceFrame::GetUpVector(WorldUpReferenceFrame *this, vec3_t *outUp)
{
  if ( this->m_axisAdjusted )
  {
    *outUp = this->m_axis.row2;
  }
  else
  {
    *(_QWORD *)outUp->v = 0i64;
    outUp->v[2] = FLOAT_1_0;
  }
}

/*
==============
WorldUpReferenceFrame::GetVerticalDelta
==============
*/
float WorldUpReferenceFrame::GetVerticalDelta(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  if ( this->m_axisAdjusted )
    return (float)((float)((float)(this->m_axis.m[2].v[1] * vecA->v[1]) + (float)(this->m_axis.m[2].v[0] * vecA->v[0])) + (float)(this->m_axis.m[2].v[2] * vecA->v[2])) - (float)((float)((float)(this->m_axis.m[2].v[1] * vecB->v[1]) + (float)(this->m_axis.m[2].v[0] * vecB->v[0])) + (float)(this->m_axis.m[2].v[2] * vecB->v[2]));
  else
    return vecA->v[2] - vecB->v[2];
}

/*
==============
WorldUpReferenceFramePM::GetWorldUpTriggerData
==============
*/
char WorldUpReferenceFramePM::GetWorldUpTriggerData(WorldUpReferenceFramePM *this, pmove_t *pm, vec3_t *outWorldUpDir, bool *outHadValidTriggerData)
{
  Physics_WorldId v7; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  playerState_s *ps; 
  int v10; 
  unsigned int NumHits; 
  int ClosestPointHitRef; 
  int EntityNum; 
  unsigned __int16 v14; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  Physics_QueryPointExtendedData extendedData; 
  vec3_t angles; 
  char v23[16]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 796, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outHadValidTriggerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 797, ASSERT_TYPE_ASSERT, "(outHadValidTriggerData)", (const char *)&queryFormat, "outHadValidTriggerData") )
    __debugbreak();
  *outHadValidTriggerData = 0;
  v7 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  AllResult = PhysicsQuery_GetAllResult(v7);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 803, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  ps = pm->ps;
  v10 = 0;
  extendedData.simplify = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = 1078198280;
  Physics_QueryPoint(v7, &ps->origin, 0.0, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( !NumHits )
    return 0;
  while ( 1 )
  {
    ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(AllResult, v10);
    EntityNum = Physics_GetEntityNum(ClosestPointHitRef);
    v14 = EntityNum;
    if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
      __debugbreak();
    if ( v14 >= 0x800u )
    {
      LODWORD(v20) = 2048;
      LODWORD(v19) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( triggerEntNum ) < (unsigned)( ( 2048 ) )", "triggerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( pm->IsWorldUpVolume(pm, v14) )
      break;
    if ( ++v10 >= NumHits )
      return 0;
  }
  if ( pm->GetWorldUpParentOrientation(pm, v14, (vec3_t *)v23, &angles) )
  {
    AngleVectors(&angles, outWorldUpDir, NULL, NULL);
    v16 = outWorldUpDir->v[1];
    outWorldUpDir->v[0] = COERCE_FLOAT(LODWORD(outWorldUpDir->v[0]) ^ _xmm);
    LODWORD(v17) = LODWORD(v16) ^ _xmm;
    v18 = outWorldUpDir->v[2];
    outWorldUpDir->v[1] = v17;
    outWorldUpDir->v[2] = COERCE_FLOAT(LODWORD(v18) ^ _xmm);
    *outHadValidTriggerData = 1;
  }
  return 1;
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpAngles
==============
*/
_BOOL8 WorldUpReferenceFrame::HasValidWorldUpAngles(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 161, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !VecNCompareCustomEpsilon(ps->worldUpAngles.v, vec3_origin.v, 0.001, 3);
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpEnt
==============
*/
_BOOL8 WorldUpReferenceFrame::HasValidWorldUpEnt(const playerState_s *ps)
{
  __int16 worldUpRefEnt; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  worldUpRefEnt = ps->worldUpRefEnt;
  return worldUpRefEnt && worldUpRefEnt != 2047;
}

/*
==============
WorldUpReferenceFrame::HasValidWorldUpInPs
==============
*/
int WorldUpReferenceFrame::HasValidWorldUpInPs(const playerState_s *ps)
{
  int result; 

  if ( WorldUpReferenceFrame::IsTrackingMover(ps) )
    return 1;
  if ( WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
    return 1;
  result = WorldUpReferenceFrame::HasValidWorldUpAngles(ps);
  if ( result )
    return 1;
  return result;
}

/*
==============
WorldUpReferenceFrame::Init
==============
*/
void WorldUpReferenceFrame::Init(WorldUpReferenceFrame *this, const playerState_s *ps, const BgHandler *handler)
{
  int HasValidWorldUpEnt; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 446, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler->IsServer((BgHandler *)handler) && !handler->IsClient((BgHandler *)handler) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 447, ASSERT_TYPE_ASSERT, "(handler->IsServer() || handler->IsClient())", (const char *)&queryFormat, "handler->IsServer() || handler->IsClient()") )
    __debugbreak();
  if ( WorldUpReferenceFrame::HasValidWorldUpAngles(ps) || WorldUpReferenceFrame::IsTrackingMover(ps) || (HasValidWorldUpEnt = WorldUpReferenceFrame::HasValidWorldUpEnt(ps)) != 0 )
    LOBYTE(HasValidWorldUpEnt) = 1;
  if ( (_BYTE)HasValidWorldUpEnt )
  {
    this->m_axisAdjusted = 1;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 423, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WorldUpReferenceFrame::CalculateEntMoverAxis(this, ps, handler, &this->m_axis);
    if ( WorldUpReferenceFrame::HasValidWorldUpAngles(ps) )
    {
      AnglesToAxis(&ps->worldUpAngles, &axis);
      AxisCopy(&this->m_axis, &out);
      MatrixMultiply(&axis, &out, &this->m_axis);
    }
  }
  else
  {
    this->m_axisAdjusted = 0;
    MatrixIdentity33(&this->m_axis);
  }
}

/*
==============
WorldUpReferenceFrame::InitFromNormal
==============
*/
void WorldUpReferenceFrame::InitFromNormal(WorldUpReferenceFrame *this, const vec3_t *normal)
{
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normal->v[0] * normal->v[0]) + (float)(normal->v[1] * normal->v[1])) + (float)(normal->v[2] * normal->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 473, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normal ))", (const char *)&queryFormat, "Vec3IsNormalized( normal )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(normal->v[2] - 1.0) & _xmm) >= 0.001 )
  {
    GenerateAxisFromUpVector(normal, &identityMatrix33, &this->m_axis);
    this->m_axisAdjusted = 1;
  }
  else
  {
    this->m_axisAdjusted = 0;
    MatrixIdentity33(&this->m_axis);
  }
}

/*
==============
WorldUpReferenceFrame::InitStandardAxes
==============
*/
void WorldUpReferenceFrame::InitStandardAxes(void)
{
  tmat33_t<vec3_t> *v0; 
  unsigned int v1; 
  __int64 *v2; 
  int i; 
  int j; 
  unsigned int v11; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int64 v17; 
  vec3_t v18; 
  __m256i angles; 
  __int128 v20; 
  float v21; 
  float v22; 
  float v23; 

  if ( !WorldUpReferenceFrame::m_standardInit )
  {
    v0 = WorldUpReferenceFrame::m_standardAxis;
    v1 = 0;
    v2 = &angles.m256i_i64[1];
    angles = _ymm;
    v21 = FLOAT_N90_0;
    v20 = _xmm;
    v22 = 0.0;
    v23 = 0.0;
    _XMM8 = 0i64;
    do
    {
      AnglesToAxis((const vec3_t *)&angles + (int)v1, &WorldUpReferenceFrame::m_standardAxis[v1]);
      for ( i = 0; i < 3; ++i )
      {
        for ( j = 0; j < 3; ++j )
        {
          if ( (unsigned int)i >= 3 )
          {
            LODWORD(v17) = 3;
            LODWORD(v16) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( (unsigned int)j >= 3 )
          {
            LODWORD(v17) = 3;
            LODWORD(v16) = j;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          __asm { vroundss xmm0, xmm8, xmm2, 1 }
          if ( (unsigned int)i >= 3 )
          {
            LODWORD(v17) = 3;
            LODWORD(v16) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( (unsigned int)j >= 3 )
          {
            LODWORD(v17) = 3;
            LODWORD(v16) = j;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          v0->m[0].v[0] = (float)(int)*(float *)&_XMM0;
          v0 = (tmat33_t<vec3_t> *)((char *)v0 + 4);
        }
      }
      AxisToAngles(&WorldUpReferenceFrame::m_standardAxis[v1], &v18);
      __asm
      {
        vroundss xmm3, xmm8, xmm2, 1
        vroundss xmm0, xmm8, xmm4, 1
        vroundss xmm2, xmm8, xmm1, 1
        vroundss xmm1, xmm8, xmm3, 1
      }
      v11 = (int)*(float *)&_XMM1;
      __asm
      {
        vroundss xmm2, xmm8, xmm1, 1
        vroundss xmm1, xmm8, xmm3, 1
      }
      v14 = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM0).m128_f32[0];
      *(float *)&_XMM3 = *((float *)v2 - 2) - v14;
      LODWORD(_XMM0) = *(_DWORD *)v2;
      v15 = _mm_cvtepi32_ps((__m128i)v11).m128_f32[0];
      *(float *)&_XMM2 = *((float *)v2 - 1) - v15;
      v18.v[2] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM1).m128_f32[0];
      v18.v[0] = v14;
      v18.v[1] = v15;
      if ( (float)((float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3)) + (float)((float)(*(float *)&_XMM0 - v18.v[2]) * (float)(*(float *)&_XMM0 - v18.v[2]))) != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 135, ASSERT_TYPE_ASSERT, "(Vec3DistanceSq( compare, standardAngles[iStandard] ) == 0.0f)", (const char *)&queryFormat, "Vec3DistanceSq( compare, standardAngles[iStandard] ) == 0.0f") )
        __debugbreak();
      ++v1;
      v2 = (__int64 *)((char *)v2 + 12);
    }
    while ( v1 < 5 );
    WorldUpReferenceFrame::m_standardInit = 1;
  }
}

/*
==============
WorldUpReferenceFramePM::IsLockedTransitionActive
==============
*/
bool WorldUpReferenceFramePM::IsLockedTransitionActive(WorldUpReferenceFramePM *this, const playerState_s *ps)
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) && WorldUpMp_IsLockedTransitionActive(ps);
}

/*
==============
WorldUpReferenceFrame::IsTrackingMover
==============
*/
bool WorldUpReferenceFrame::IsTrackingMover(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 153, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xFu) && BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms);
}

/*
==============
WorldUpReferenceFramePM::IsUnLockedTransitionActive
==============
*/
bool WorldUpReferenceFramePM::IsUnLockedTransitionActive(WorldUpReferenceFramePM *this, const playerState_s *ps)
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) && WorldUpMp_IsUnlockedTransitionActive(ps);
}

/*
==============
WorldUpReferenceFrame::PackEntityStateAngles
==============
*/
__int64 WorldUpReferenceFrame::PackEntityStateAngles(const vec3_t *worldUpAngles)
{
  unsigned int v1; 
  int *v2; 
  __int128 v4; 
  __int128 v6; 
  int v10[4]; 

  v1 = 0;
  v2 = v10;
  do
  {
    v4 = LODWORD(worldUpAngles->v[v1]);
    *(double *)&v4 = AngleNormalize360(*(const float *)&v4);
    v6 = v4;
    *(float *)&v6 = *(float *)&v4 * 0.0027777778;
    _XMM1 = v6;
    __asm
    {
      vmaxss  xmm1, xmm1, xmm7
      vminss  xmm0, xmm1, xmm8
    }
    *v2 = (int)(float)(*(float *)&_XMM0 * 511.0);
    ++v1;
    ++v2;
  }
  while ( v1 < 3 );
  return (unsigned int)(v10[0] + ((v10[1] + (v10[2] << 9)) << 9));
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAngles
==============
*/
void WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(WorldUpReferenceFrame *this, vec3_t *angles)
{
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v6; 

  if ( this->m_axisAdjusted )
  {
    AnglesToAxis(angles, &axis);
    MatrixTranspose(&this->m_axis, &out);
    MatrixMultiply(&axis, &out, &v6);
    AxisToAngles(&v6, angles);
  }
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAxis
==============
*/
void WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(WorldUpReferenceFrame *this, tmat33_t<vec3_t> *axis)
{
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 

  if ( this->m_axisAdjusted )
  {
    MatrixTranspose(&this->m_axis, &out);
    AxisCopy(axis, &in1);
    MatrixMultiply(&in1, &out, axis);
  }
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromAxis
==============
*/
void WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(WorldUpReferenceFrame *this, const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outAxis)
{
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 

  if ( axis == outAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 720, ASSERT_TYPE_ASSERT, "(&axis != &outAxis)", (const char *)&queryFormat, "&axis != &outAxis") )
    __debugbreak();
  AxisCopy(axis, outAxis);
  if ( this->m_axisAdjusted )
  {
    MatrixTranspose(&this->m_axis, &out);
    AxisCopy(outAxis, &in1);
    MatrixMultiply(&in1, &out, outAxis);
  }
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromVector
==============
*/
void WorldUpReferenceFrame::RemoveReferenceFrameFromVector(WorldUpReferenceFrame *this, vec3_t *vec)
{
  float v3; 
  vec3_t v4; 
  tmat33_t<vec3_t> out; 

  if ( this->m_axisAdjusted )
  {
    MatrixTranspose(&this->m_axis, &out);
    MatrixTransformVector(vec, &out, &v4);
    v3 = v4.v[1];
    vec->v[0] = v4.v[0];
    vec->v[2] = v4.v[2];
    vec->v[1] = v3;
  }
}

/*
==============
WorldUpReferenceFrame::RemoveReferenceFrameFromVector
==============
*/
void WorldUpReferenceFrame::RemoveReferenceFrameFromVector(WorldUpReferenceFrame *this, const vec3_t *vec, vec3_t *outVec)
{
  if ( vec == outVec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 712, ASSERT_TYPE_ASSERT, "(&vec != &outVec)", (const char *)&queryFormat, "&vec != &outVec") )
    __debugbreak();
  outVec->v[0] = vec->v[0];
  outVec->v[1] = vec->v[1];
  outVec->v[2] = vec->v[2];
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(this, outVec);
}

/*
==============
WorldUpReferenceFrame::SetAngles
==============
*/
void WorldUpReferenceFrame::SetAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *angles)
{
  const dvar_t *v8; 
  float value; 
  int v10; 
  float *i; 
  float v1[4]; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 231, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !WorldUpReferenceFrame::HasValidWorldUpAngles(ps) && !WorldUpReferenceFrame::IsTrackingMover(ps) && !WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
  {
    v1[0] = 0.0;
    v1[1] = 0.0;
    v1[2] = 0.0;
    if ( VecNCompareCustomEpsilon(angles->v, v1, 0.001, 3) )
      goto LABEL_9;
  }
  WorldUpReferenceFrame::CalculateEntMoverAxis(this, ps, handler, &outAxis);
  MatrixTranspose(&outAxis, &out);
  AnglesToAxis(angles, &axis);
  MatrixMultiply(&axis, &out, &v16);
  AxisToAngles(&v16, &ps->worldUpAngles);
  if ( !VecNCompareCustomEpsilon(angles->v, vec3_origin.v, 0.001, 3) )
  {
    this->m_axisAdjusted = 1;
    AnglesToAxis(angles, &this->m_axis);
    v8 = DVARFLT_pmove_snap_world_up;
    if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    value = v8->current.value;
    if ( value > 0.0 )
    {
      if ( !WorldUpReferenceFrame::m_standardInit )
        WorldUpReferenceFrame::InitStandardAxes();
      v10 = 0;
      for ( i = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2]; (float)((float)((float)(this->m_axis.m[0].v[0] * *(i - 2)) + (float)(this->m_axis.m[0].v[1] * *(i - 1))) + (float)(this->m_axis.m[0].v[2] * *i)) <= value || (float)((float)((float)(this->m_axis.m[1].v[1] * i[2]) + (float)(i[1] * this->m_axis.m[1].v[0])) + (float)(this->m_axis.m[1].v[2] * i[3])) <= value || (float)((float)((float)(this->m_axis.m[2].v[1] * i[5]) + (float)(i[4] * this->m_axis.m[2].v[0])) + (float)(this->m_axis.m[2].v[2] * i[6])) <= value; i += 9 )
      {
        if ( (unsigned int)++v10 >= 5 )
          return;
      }
      MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v10], &this->m_axis);
    }
  }
  else
  {
LABEL_9:
    this->m_axisAdjusted = 0;
    MatrixIdentity33(&this->m_axis);
  }
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles
==============
*/
void WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles)
{
  float v8; 
  vec3_t inOutViewAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 287, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = ps->viewangles.v[1];
  inOutViewAngles.v[0] = ps->viewangles.v[0];
  inOutViewAngles.v[2] = ps->viewangles.v[2];
  inOutViewAngles.v[1] = v8;
  BG_CalcLinkedViewValues(ps, &inOutViewAngles);
  if ( this->m_axisAdjusted )
  {
    AnglesToAxis(&inOutViewAngles, &axis);
    if ( this->m_axisAdjusted )
    {
      MatrixMultiply(&axis, &this->m_axis, &out);
      AxisCopy(&out, &axis);
    }
    AxisToAngles(&axis, &inOutViewAngles);
  }
  WorldUpReferenceFrame::SetAnglesAndViewAngles(this, ps, handler, newWorldAngles, &inOutViewAngles);
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndViewAngles
==============
*/
void WorldUpReferenceFrame::SetAnglesAndViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles, const vec3_t *newViewAngles)
{
  bool v9; 
  float v10; 
  float v11; 
  float v12; 
  float v16; 
  float v25; 
  float v27; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v32; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 263, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::SetAngles(this, ps, handler, newWorldAngles);
  v9 = !this->m_axisAdjusted;
  v10 = newViewAngles->v[0];
  v11 = newViewAngles->v[1];
  v12 = newViewAngles->v[2];
  angles.v[0] = newViewAngles->v[0];
  angles.v[1] = v11;
  angles.v[2] = v12;
  if ( !v9 )
  {
    AnglesToAxis(&angles, &axis);
    MatrixTranspose(&this->m_axis, &out);
    MatrixMultiply(&axis, &out, &v32);
    AxisToAngles(&v32, &angles);
    v11 = angles.v[1];
    v10 = angles.v[0];
  }
  _XMM10 = 0i64;
  __asm
  {
    vroundss xmm2, xmm10, xmm1, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  v16 = (float)(ps->viewangles.v[2] - ps->delta_angles.v[2]) * 0.0027777778;
  ps->delta_angles.v[1] = v11 - (float)((float)((float)((float)(ps->viewangles.v[1] - ps->delta_angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0);
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  ps->delta_angles.v[2] = (float)(v16 - *(float *)&_XMM3) * -360.0;
  __asm
  {
    vroundss xmm0, xmm10, xmm3, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  ps->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  __asm
  {
    vroundss xmm1, xmm10, xmm3, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  __asm
  {
    vroundss xmm0, xmm10, xmm3, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  ps->delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  ps->viewangles.v[1] = v11;
  ps->viewangles.v[2] = 0.0;
  v25 = 0.0027777778 * ps->viewangles.v[1];
  ps->viewangles.v[0] = (float)((float)(v10 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  *(float *)&_XMM1 = v25 - *(float *)&_XMM3;
  v27 = 0.0027777778 * ps->viewangles.v[2];
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  ps->viewangles.v[1] = *(float *)&_XMM1 * 360.0;
  ps->viewangles.v[2] = (float)(v27 - *(float *)&_XMM3) * 360.0;
}

/*
==============
WorldUpReferenceFrame::SetEntity
==============
*/
void WorldUpReferenceFrame::SetEntity(WorldUpReferenceFrame *this, playerState_s *ps, __int16 entity)
{
  if ( ps )
  {
    ps->worldUpRefEnt = entity;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 333, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x29E] = entity;
  }
}

/*
==============
WorldUpReferenceFrame::SetEntityAndNormalizeViewAngles
==============
*/
void WorldUpReferenceFrame::SetEntityAndNormalizeViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, __int16 entity)
{
  float v8; 
  vec3_t inOutViewAngles; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 309, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = ps->viewangles.v[1];
  inOutViewAngles.v[0] = ps->viewangles.v[0];
  inOutViewAngles.v[2] = ps->viewangles.v[2];
  inOutViewAngles.v[1] = v8;
  BG_CalcLinkedViewValues(ps, &inOutViewAngles);
  AnglesToAxis(&inOutViewAngles, &axis);
  if ( this->m_axisAdjusted )
  {
    MatrixMultiply(&axis, &this->m_axis, &out);
    AxisCopy(&out, &axis);
  }
  AxisToAngles(&axis, &inOutViewAngles);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 333, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->worldUpRefEnt = entity;
  WorldUpReferenceFrame::Init(this, ps, handler);
  if ( this->m_axisAdjusted )
    AxisToAngles(&this->m_axis, &angles);
  else
    angles = vec3_origin;
  WorldUpReferenceFrame::SetAnglesAndViewAngles(this, ps, handler, &angles, &inOutViewAngles);
}

/*
==============
WorldUpReferenceFrame::SetFinalInternalAngles
==============
*/
void WorldUpReferenceFrame::SetFinalInternalAngles(WorldUpReferenceFrame *this, const vec3_t *angles)
{
  const dvar_t *v4; 
  float value; 
  int v6; 
  float *i; 

  if ( VecNCompareCustomEpsilon(angles->v, vec3_origin.v, 0.001, 3) )
  {
    this->m_axisAdjusted = 0;
    MatrixIdentity33(&this->m_axis);
  }
  else
  {
    this->m_axisAdjusted = 1;
    AnglesToAxis(angles, &this->m_axis);
    v4 = DVARFLT_pmove_snap_world_up;
    if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    if ( value > 0.0 )
    {
      if ( !WorldUpReferenceFrame::m_standardInit )
        WorldUpReferenceFrame::InitStandardAxes();
      v6 = 0;
      for ( i = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2]; (float)((float)((float)(this->m_axis.m[0].v[0] * *(i - 2)) + (float)(this->m_axis.m[0].v[1] * *(i - 1))) + (float)(this->m_axis.m[0].v[2] * *i)) <= value || (float)((float)((float)(this->m_axis.m[1].v[1] * i[2]) + (float)(i[1] * this->m_axis.m[1].v[0])) + (float)(this->m_axis.m[1].v[2] * i[3])) <= value || (float)((float)((float)(this->m_axis.m[2].v[1] * i[5]) + (float)(i[4] * this->m_axis.m[2].v[0])) + (float)(this->m_axis.m[2].v[2] * i[6])) <= value; i += 9 )
      {
        if ( (unsigned int)++v6 >= 5 )
          return;
      }
      MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v6], &this->m_axis);
    }
  }
}

/*
==============
WorldUpReferenceFramePM::SetToWorldFallTransition
==============
*/
void WorldUpReferenceFramePM::SetToWorldFallTransition(WorldUpReferenceFramePM *this, pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 1179, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  pm->ps->worldUpTransitionTarget = 2046;
  ps = pm->ps;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x36u);
  pm->ps->worldUpAngularVelocity = 0;
}

/*
==============
WorldUpReferenceFrame::SetUpContribution
==============
*/
void WorldUpReferenceFrame::SetUpContribution(WorldUpReferenceFrame *this, float height, vec3_t *vec)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  if ( this->m_axisAdjusted )
  {
    v3 = this->m_axis.m[2].v[0];
    v4 = vec->v[1];
    v5 = vec->v[2];
    v6 = height - (float)((float)((float)(v4 * this->m_axis.m[2].v[1]) + (float)(v3 * vec->v[0])) + (float)(v5 * this->m_axis.m[2].v[2]));
    vec->v[0] = (float)(v6 * v3) + vec->v[0];
    vec->v[1] = (float)(v6 * this->m_axis.m[2].v[1]) + v4;
    vec->v[2] = (float)(v6 * this->m_axis.m[2].v[2]) + v5;
  }
  else
  {
    vec->v[2] = height;
  }
}

/*
==============
WorldUpReferenceFrame::Unlink
==============
*/
void WorldUpReferenceFrame::Unlink(WorldUpReferenceFrame *this, playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *handler, const int useParentAngles, const vec3_t *parentAngles)
{
  float v10; 
  float v11; 
  float v12; 
  bool m_axisAdjusted; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  const vec3_t *p_angles; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t outOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 355, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 356, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 342, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  BG_GetPlayerEyePosition(weaponMap, ps, &outOrigin, handler);
  v10 = ps->origin.v[1];
  v11 = ps->origin.v[0];
  v12 = ps->origin.v[2];
  m_axisAdjusted = this->m_axisAdjusted;
  v15 = fsqrt((float)((float)((float)(v10 - outOrigin.v[1]) * (float)(v10 - outOrigin.v[1])) + (float)((float)(v11 - outOrigin.v[0]) * (float)(v11 - outOrigin.v[0]))) + (float)((float)(v12 - outOrigin.v[2]) * (float)(v12 - outOrigin.v[2])));
  v14 = v15;
  outOrigin.v[0] = v11;
  outOrigin.v[1] = v10;
  if ( m_axisAdjusted )
  {
    v16 = v15 * this->m_axis.m[2].v[1];
    outOrigin.v[0] = (float)(v15 * this->m_axis.m[2].v[0]) + v11;
    v17 = v15 * this->m_axis.m[2].v[2];
    outOrigin.v[1] = v16 + v10;
    outOrigin.v[2] = v17 + v12;
  }
  else
  {
    outOrigin.v[2] = v12 + v15;
  }
  if ( useParentAngles && parentAngles )
  {
    p_angles = parentAngles;
  }
  else
  {
    v19 = ps->linkAngles.v[1];
    angles.v[0] = ps->linkAngles.v[0];
    angles.v[2] = ps->linkAngles.v[2];
    angles.v[1] = v19;
    if ( m_axisAdjusted )
    {
      AnglesToAxis(&angles, &axis);
      if ( this->m_axisAdjusted )
      {
        MatrixMultiply(&axis, &this->m_axis, &out);
        AxisCopy(&out, &axis);
      }
      AxisToAngles(&axis, &angles);
    }
    p_angles = &angles;
  }
  WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(this, ps, handler, p_angles);
  v20 = outOrigin.v[1];
  LODWORD(v21) = LODWORD(v14) ^ _xmm;
  ps->origin.v[0] = outOrigin.v[0];
  v22 = outOrigin.v[2];
  ps->origin.v[2] = outOrigin.v[2];
  ps->origin.v[1] = v20;
  if ( this->m_axisAdjusted )
  {
    ps->origin.v[0] = (float)(v21 * this->m_axis.m[2].v[0]) + ps->origin.v[0];
    ps->origin.v[1] = (float)(v21 * this->m_axis.m[2].v[1]) + ps->origin.v[1];
    v23 = (float)(v21 * this->m_axis.m[2].v[2]) + ps->origin.v[2];
  }
  else
  {
    v23 = v21 + v22;
  }
  ps->origin.v[2] = v23;
}

/*
==============
WorldUpReferenceFrame::UnpackEntityStateAngles
==============
*/
void WorldUpReferenceFrame::UnpackEntityStateAngles(int angles, vec3_t *outWorldUpAngles)
{
  unsigned int v2; 
  __int64 v3; 
  float v4; 

  outWorldUpAngles->v[0] = (float)(angles & 0x1FF);
  v2 = 0;
  outWorldUpAngles->v[1] = (float)((angles >> 9) & 0x1FF);
  outWorldUpAngles->v[2] = (float)((angles >> 18) & 0x1FF);
  do
  {
    v3 = (int)v2;
    v4 = 0.70450097 * outWorldUpAngles->v[v2++];
    outWorldUpAngles->v[v3] = v4;
  }
  while ( v2 < 3 );
}

/*
==============
WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate
==============
*/
void WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(WorldUpReferenceFramePM *this, pmove_t *pm, const pml_t *pml, const trace_t *trace)
{
  playerState_s *ps; 
  double v9; 
  unsigned int i; 
  float v11; 
  bool m_axisAdjusted; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float fraction; 
  float v23; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v26; 
  vec3_t outOrigin; 
  vec3_t angles; 
  vec3_t outNormal; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 1031, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 1032, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 1033, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) )
  {
    WorldUpMp_UpdateArbitraryUpForGroundUpdate(pm, pml, trace);
    return;
  }
  ps = pm->ps;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END|0x80) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, DEAD|PRONE|0x20) )
  {
    if ( BG_IsPlayerZeroG(ps) )
    {
      if ( !BG_IsPlayerZeroGWalking(ps) )
        return;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( !WorldUpReferenceFrame::HasValidWorldUpEnt(ps) && WorldUpReferenceFramePM::CalculateNormalForGroundUpdate(this, pm, &outNormal) )
    {
      GenerateAxisFromUpVector(&outNormal, &pm->refFrame.m_axis, &outAxis);
      v9 = I_fclamp(WORLD_UP_GROUND_SOLVER_BLEND_STRENGTH * pml->frametime, 0.0, 1.0);
      BgSpaceship::AxisLerp(&pm->refFrame.m_axis, &outAxis, *(const float *)&v9, &axis);
      if ( pm->refFrame.m_axisAdjusted )
        AxisToAngles(&pm->refFrame.m_axis, &angles);
      else
        angles = vec3_origin;
      AxisToAngles(&axis, &v26);
      for ( i = 0; i < 3; ++i )
      {
        if ( v26.v[i] != 0.0 && (COERCE_FLOAT(LODWORD(v26.v[i]) & _xmm) < *(float *)&dword_14503F444 || COERCE_FLOAT(COERCE_UNSIGNED_INT(360.0 - v26.v[i]) & _xmm) < *(float *)&dword_14503F444) )
          v26.v[i] = 0.0;
      }
      WorldUpReferenceFrame::SetAngles(&pm->refFrame, ps, pm->m_bgHandler, &v26);
      v11 = ps->origin.v[0];
      m_axisAdjusted = pm->refFrame.m_axisAdjusted;
      start.v[0] = v11;
      v13 = ps->origin.v[1];
      start.v[1] = v13;
      v14 = ps->origin.v[2];
      if ( m_axisAdjusted )
      {
        v15 = WORLD_UP_GROUND_SOLVER_TRACE_UP * pm->refFrame.m_axis.m[2].v[1];
        start.v[0] = (float)(WORLD_UP_GROUND_SOLVER_TRACE_UP * pm->refFrame.m_axis.m[2].v[0]) + v11;
        v16 = WORLD_UP_GROUND_SOLVER_TRACE_UP * pm->refFrame.m_axis.m[2].v[2];
        start.v[1] = v15 + v13;
        start.v[2] = v16 + v14;
      }
      else
      {
        start.v[2] = v14 + WORLD_UP_GROUND_SOLVER_TRACE_UP;
      }
      v17 = ps->origin.v[0];
      end.v[0] = v17;
      v18 = ps->origin.v[1];
      end.v[1] = v18;
      v19 = ps->origin.v[2];
      if ( m_axisAdjusted )
      {
        v20 = WORLD_UP_GROUND_SOLVER_TRACE_DOWN * pm->refFrame.m_axis.m[2].v[1];
        end.v[0] = (float)(WORLD_UP_GROUND_SOLVER_TRACE_DOWN * pm->refFrame.m_axis.m[2].v[0]) + v17;
        v21 = WORLD_UP_GROUND_SOLVER_TRACE_DOWN * pm->refFrame.m_axis.m[2].v[2];
        end.v[1] = v20 + v18;
        end.v[2] = v21 + v19;
      }
      else
      {
        end.v[2] = v19 + WORLD_UP_GROUND_SOLVER_TRACE_DOWN;
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &end, pm->bounds, ps->clientNum, pm->tracemask);
      if ( results.fraction < 1.0 && !results.startsolid )
      {
        if ( BG_IsPlayerZeroG(ps) )
        {
          fraction = results.fraction;
          ps->origin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
          ps->origin.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
          ps->origin.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
          ps->rollVelocity = 0.0;
          return;
        }
        goto LABEL_42;
      }
      if ( PM_ResolvePlayerPenetration(pm, &ps->origin, NULL, pm->bounds, NULL, pm->tracemask, 0, &outOrigin, NULL) )
      {
        v23 = outOrigin.v[1];
        ps->origin.v[0] = outOrigin.v[0];
        ps->origin.v[2] = outOrigin.v[2];
        ps->origin.v[1] = v23;
LABEL_42:
        ps->rollVelocity = 0.0;
        return;
      }
      WorldUpReferenceFrame::SetAngles(&pm->refFrame, ps, pm->m_bgHandler, &angles);
    }
  }
}

/*
==============
WorldUpReferenceFrame::Vec2Dot
==============
*/
float WorldUpReferenceFrame::Vec2Dot(WorldUpReferenceFrame *this, const vec3_t *dirA, const vec3_t *dirB)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  v3 = dirA->v[2];
  v4 = dirA->v[0];
  v5 = dirA->v[1];
  v6 = dirB->v[0];
  v7 = dirB->v[1];
  v8 = dirB->v[2];
  if ( this->m_axisAdjusted )
  {
    v11 = this->m_axis.m[2].v[0];
    v12 = this->m_axis.m[2].v[2];
    v13 = this->m_axis.m[2].v[1];
    LODWORD(v14) = COERCE_UNSIGNED_INT((float)((float)(v13 * v5) + (float)(v11 * v4)) + (float)(v12 * v3)) ^ _xmm;
    v4 = (float)(v11 * v14) + v4;
    v9 = (float)(v12 * v14) + v3;
    v5 = (float)(v13 * v14) + v5;
    LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(v11 * v6) + (float)(v7 * v13)) + (float)(v8 * v12)) ^ _xmm;
    v6 = (float)(v15 * v11) + v6;
    v10 = (float)(v12 * v15) + v8;
    v7 = (float)(v15 * v13) + v7;
  }
  else
  {
    v9 = 0.0;
    v10 = 0.0;
  }
  return (float)((float)(v4 * v6) + (float)(v7 * v5)) + (float)(v9 * v10);
}

/*
==============
WorldUpReferenceFrame::VecToYaw
==============
*/
float WorldUpReferenceFrame::VecToYaw(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  vec3_t *v3; 
  double v4; 
  vec3_t v6; 
  tmat33_t<vec3_t> out; 

  if ( this->m_axisAdjusted )
  {
    MatrixTranspose(&this->m_axis, &out);
    MatrixTransformVector(vec, &out, &v6);
    v3 = &v6;
  }
  else
  {
    v3 = (vec3_t *)vec;
  }
  v4 = vectoyaw((const vec2_t *)v3);
  return *(float *)&v4;
}

