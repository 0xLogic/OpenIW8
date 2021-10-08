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

void __fastcall WorldUpReferenceFrame::AddUpContribution(WorldUpReferenceFrame *this, double height, vec3_t *vec)
{
  __asm { vmovaps xmm2, xmm1 }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rcx+1Ch]
      vaddss  xmm1, xmm0, dword ptr [r8]
      vmovss  dword ptr [r8], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+20h]
      vaddss  xmm1, xmm0, dword ptr [r8+4]
      vmovss  dword ptr [r8+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+24h]
      vaddss  xmm1, xmm0, dword ptr [r8+8]
      vmovss  dword ptr [r8+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm1, dword ptr [r8+8]
      vmovss  dword ptr [r8+8], xmm0
    }
  }
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
  vec4_t out; 
  char v61; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = (char *)quat;
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmmword ptr [r11-58h], xmm10
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovaps xmmword ptr [r11-78h], xmm12
      vmovaps xmmword ptr [r11-88h], xmm13
      vmovaps [rsp+108h+var_98], xmm14
      vmovaps [rsp+108h+var_A8], xmm15
    }
    AxisToQuat(&this->m_axis, &out);
    if ( _RBX == &v61 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm13, dword ptr [rbx+0Ch]
      vmovss  xmm14, dword ptr [rbx]
      vmovss  xmm15, dword ptr [rbx+8]
      vmovss  xmm12, dword ptr [rbx+4]
      vmovss  xmm11, dword ptr [rsp+108h+out+0Ch]
      vmovss  xmm10, dword ptr [rsp+108h+out]
      vmovss  xmm9, dword ptr [rsp+108h+out+4]
      vmovss  xmm7, dword ptr [rsp+108h+out+8]
      vmulss  xmm1, xmm14, xmm11
      vmulss  xmm0, xmm13, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm12, xmm7
      vsubss  xmm8, xmm3, xmm0
      vmulss  xmm2, xmm12, xmm11
      vmulss  xmm1, xmm15, xmm10
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm13, xmm9
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm14, xmm7
      vaddss  xmm6, xmm4, xmm1
      vmulss  xmm0, xmm15, xmm11
      vmulss  xmm2, xmm12, xmm10
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm14, xmm9
      vsubss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm13, xmm7
      vmulss  xmm1, xmm14, xmm10
      vmovaps xmm14, [rsp+108h+var_98]
      vmovaps xmm10, [rsp+108h+var_58]
      vmulss  xmm2, xmm13, xmm11
      vmovaps xmm13, [rsp+108h+var_88]
      vmovaps xmm11, [rsp+108h+var_68]
      vaddss  xmm5, xmm4, xmm0
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm12, xmm9
      vmovaps xmm12, [rsp+108h+var_78]
      vmovaps xmm9, [rsp+108h+var_48]
      vmulss  xmm1, xmm15, xmm7
      vmovaps xmm15, [rsp+108h+var_A8]
      vmovaps xmm7, [rsp+108h+var_28]
      vsubss  xmm4, xmm3, xmm0
      vsubss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rbx], xmm8
      vmovaps xmm8, [rsp+108h+var_38]
      vmovss  dword ptr [rbx+4], xmm6
      vmovaps xmm6, [rsp+108h+var_18]
      vmovss  dword ptr [rbx+0Ch], xmm2
      vmovss  dword ptr [rbx+8], xmm5
    }
  }
}

/*
==============
WorldUpReferenceFrame::ApplyReferenceFrameToVector
==============
*/
void WorldUpReferenceFrame::ApplyReferenceFrameToVector(WorldUpReferenceFrame *this, vec3_t *vec)
{
  vec3_t out; 

  _RBX = vec;
  if ( this->m_axisAdjusted )
  {
    MatrixTransformVector(vec, &this->m_axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+out]
      vmovss  xmm1, dword ptr [rsp+48h+out+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+48h+out+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
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
  char v8; 
  char v13; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  MatrixIdentity33(outAxis);
  if ( WorldUpReferenceFrame::IsTrackingMover(ps) )
  {
    handler->GetEntityAngles((BgHandler *)handler, ps->movingPlatforms.m_movingPlatformEntity, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles]
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( !v8 )
      goto LABEL_5;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles+4]
      vucomiss xmm0, xmm1
    }
    if ( !v8 )
      goto LABEL_5;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles+8]
      vucomiss xmm0, xmm1
    }
    if ( !v8 )
LABEL_5:
      AnglesToAxis(&angles, outAxis);
  }
  else if ( WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
  {
    handler->GetEntityAngles((BgHandler *)handler, ps->worldUpRefEnt, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles]
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( !v13 )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles+4]
      vucomiss xmm0, xmm1
    }
    if ( !v13 )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+angles+8]
      vucomiss xmm0, xmm1
    }
    if ( !v13 )
    {
LABEL_10:
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
  int v15; 
  char v16; 
  char v19; 
  unsigned int v20; 
  unsigned int v28; 
  bool m_axisAdjusted; 
  char v64; 
  bool v65; 
  const BgHandler *m_bgHandler; 
  bool v103; 
  bool outHadValidTriggerData; 
  bool WorldUpTriggerData; 
  vec3_t start; 
  vec3_t end; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  _RDI = outNormal;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 846, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v15 = 0;
  _RDI->v[2] = 1.0;
  *(_QWORD *)_RDI->v = 0i64;
  outHadValidTriggerData = 0;
  WorldUpTriggerData = WorldUpReferenceFramePM::GetWorldUpTriggerData(this, pm, _RDI, &outHadValidTriggerData);
  v16 = WorldUpTriggerData;
  if ( !WorldUpTriggerData )
  {
    if ( !pm->refFrame.m_axisAdjusted )
      return 0;
    goto LABEL_6;
  }
  if ( !outHadValidTriggerData )
  {
LABEL_6:
    _RSI = pm->ps;
    if ( WorldUpTriggerData || BG_IsPlayerZeroG(pm->ps) )
    {
      v19 = 0;
      __asm
      {
        vmovaps [rsp+1C0h+var_40], xmm6
        vmovaps [rsp+1C0h+var_70], xmm9
        vmovaps [rsp+1C0h+var_80], xmm10
        vmovaps [rsp+1C0h+var_90], xmm11
        vmovaps [rsp+1C0h+var_A0], xmm12
        vmovaps [rsp+1C0h+var_B0], xmm13
      }
      if ( worldUpDrawTraces )
      {
        v19 = 1;
        worldUpDrawTraces = 0;
      }
      v20 = WORLD_UP_GROUND_SOLVER_RAY_COUNT;
      if ( !WORLD_UP_GROUND_SOLVER_RAY_COUNT )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 898, ASSERT_TYPE_ASSERT, "(WORLD_UP_GROUND_SOLVER_RAY_COUNT > 0)", (const char *)&queryFormat, "WORLD_UP_GROUND_SOLVER_RAY_COUNT > 0") )
          __debugbreak();
        v20 = WORLD_UP_GROUND_SOLVER_RAY_COUNT;
      }
      __asm
      {
        vmovss  xmm0, cs:WORLD_UP_GROUND_SOLVER_RAY_START_SCALE
        vmulss  xmm9, xmm0, dword ptr [rsi+1E8h]
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm12, xmm12, xmm12
      }
      if ( (int)(v20 - 1) > 0 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@43b40000
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ecx
          vdivss  xmm12, xmm0, xmm1
        }
      }
      v28 = 0;
      __asm
      {
        vmovss  xmm11, cs:__real@3f800000
        vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      if ( v20 )
      {
        __asm
        {
          vmovaps [rsp+1C0h+var_50], xmm7
          vmovaps [rsp+1C0h+var_60], xmm8
        }
        do
        {
          __asm
          {
            vmovss  xmm0, cs:WORLD_UP_GROUND_SOLVER_RAY_LENGTH
            vxorps  xmm6, xmm0, xmm13
            vmovaps xmm7, xmm10
            vmovaps xmm8, xmm10
          }
          if ( v28 )
          {
            __asm
            {
              vmovss  xmm0, cs:WORLD_UP_GROUND_SOLVER_RAY_CONE_ANGLE
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, rax
              vmovss  dword ptr [rsp+1C0h+angles], xmm0
              vmulss  xmm0, xmm1, xmm12
              vmovss  dword ptr [rsp+1C0h+angles+4], xmm0
              vmovss  dword ptr [rsp+1C0h+angles+8], xmm10
            }
            AnglesToAxis(&angles, &axis);
            __asm
            {
              vmulss  xmm7, xmm6, dword ptr [rbp+0C0h+axis+18h]
              vmulss  xmm8, xmm6, dword ptr [rbp+0C0h+axis+1Ch]
              vmulss  xmm6, xmm6, dword ptr [rbp+0C0h+axis+20h]
            }
          }
          m_axisAdjusted = pm->refFrame.m_axisAdjusted;
          if ( m_axisAdjusted )
          {
            __asm
            {
              vmulss  xmm1, xmm8, dword ptr [rbx+364h]
              vmulss  xmm0, xmm7, dword ptr [rbx+358h]
              vmulss  xmm3, xmm7, dword ptr [rbx+35Ch]
              vmulss  xmm4, xmm7, dword ptr [rbx+360h]
              vmulss  xmm5, xmm8, dword ptr [rbx+36Ch]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, dword ptr [rbx+370h]
              vmulss  xmm0, xmm8, dword ptr [rbx+368h]
              vaddss  xmm7, xmm2, xmm1
              vmulss  xmm1, xmm6, dword ptr [rbx+374h]
              vaddss  xmm2, xmm0, xmm3
              vaddss  xmm8, xmm2, xmm1
              vmulss  xmm2, xmm6, dword ptr [rbx+378h]
              vaddss  xmm0, xmm5, xmm4
              vaddss  xmm6, xmm2, xmm0
            }
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+30h]
            vmovss  xmm2, dword ptr [rsi+34h]
            vmovss  xmm3, dword ptr [rsi+38h]
            vmovss  dword ptr [rsp+1C0h+start], xmm1
            vmovss  dword ptr [rsp+1C0h+start+4], xmm2
          }
          if ( m_axisAdjusted )
          {
            __asm
            {
              vmulss  xmm0, xmm9, dword ptr [rbx+370h]
              vaddss  xmm1, xmm0, xmm1
              vmulss  xmm0, xmm9, dword ptr [rbx+374h]
              vaddss  xmm2, xmm0, xmm2
              vmulss  xmm0, xmm9, dword ptr [rbx+378h]
              vaddss  xmm3, xmm0, xmm3
              vmovss  dword ptr [rsp+1C0h+start], xmm1
              vmovss  dword ptr [rsp+1C0h+start+4], xmm2
            }
          }
          else
          {
            __asm { vaddss  xmm3, xmm3, xmm9 }
          }
          __asm
          {
            vaddss  xmm0, xmm1, xmm7
            vmovss  dword ptr [rsp+1C0h+end], xmm0
            vaddss  xmm0, xmm6, xmm3
            vaddss  xmm1, xmm2, xmm8
            vmovss  dword ptr [rsp+1C0h+end+8], xmm0
            vmovss  dword ptr [rsp+1C0h+start+8], xmm3
            vmovss  dword ptr [rsp+1C0h+end+4], xmm1
          }
          if ( v19 )
            pm->m_bgHandler->DebugLine((BgHandler *)pm->m_bgHandler, &start, &end, &colorRed, 1, 10000);
          BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &end, &bounds_origin, _RSI->clientNum, pm->tracemask);
          __asm
          {
            vmovss  xmm0, [rbp+0C0h+results.fraction]
            vcomiss xmm0, xmm11
          }
          if ( v64 )
          {
            v64 = 0;
            v65 = !pm->refFrame.m_axisAdjusted;
            __asm
            {
              vmovss  xmm2, dword ptr [rbp+0C0h+results.normal+8]
              vmovss  xmm6, dword ptr [rbp+0C0h+results.normal]
              vmovss  xmm7, dword ptr [rbp+0C0h+results.normal+4]
              vmovaps xmm8, xmm2
            }
            if ( pm->refFrame.m_axisAdjusted )
            {
              MatrixTranspose(&pm->refFrame.m_axis, &axis);
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+axis+8]
                vmulss  xmm0, xmm7, dword ptr [rbp+0C0h+axis+14h]
                vmovss  xmm7, dword ptr [rbp+0C0h+results.normal+4]
                vmovss  xmm6, dword ptr [rbp+0C0h+results.normal]
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm8, dword ptr [rbp+0C0h+axis+20h]
                vaddss  xmm8, xmm2, xmm1
                vmovss  xmm2, dword ptr [rbp+0C0h+results.normal+8]
              }
            }
            __asm { vcomiss xmm8, cs:WORLD_UP_GROUND_SOLVER_RAY_WALL_NORMAL }
            if ( !(v64 | v65) )
            {
              if ( v15 )
              {
                __asm
                {
                  vaddss  xmm0, xmm6, dword ptr [rdi]
                  vaddss  xmm1, xmm7, dword ptr [rdi+4]
                  vmovss  dword ptr [rdi], xmm0
                  vaddss  xmm0, xmm2, dword ptr [rdi+8]
                  vmovss  dword ptr [rdi+8], xmm0
                  vmovss  dword ptr [rdi+4], xmm1
                }
              }
              else
              {
                __asm
                {
                  vmovss  dword ptr [rdi], xmm6
                  vmovss  dword ptr [rdi+4], xmm7
                  vmovss  dword ptr [rdi+8], xmm2
                }
              }
              ++v15;
            }
          }
          ++v28;
        }
        while ( v28 < WORLD_UP_GROUND_SOLVER_RAY_COUNT );
        v16 = WorldUpTriggerData;
        __asm
        {
          vmovaps xmm8, [rsp+1C0h+var_60]
          vmovaps xmm7, [rsp+1C0h+var_50]
        }
      }
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+4]
        vmovss  xmm4, dword ptr [rdi]
        vmovss  xmm6, dword ptr [rdi+8]
        vmovaps xmm12, [rsp+1C0h+var_A0]
        vmovaps xmm10, [rsp+1C0h+var_80]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
        vdivss  xmm1, xmm11, xmm0
        vmulss  xmm2, xmm4, xmm1
        vmulss  xmm4, xmm5, xmm1
        vmulss  xmm5, xmm6, xmm1
        vmovaps xmm6, [rsp+1C0h+var_40]
        vmovss  dword ptr [rdi+8], xmm5
        vmovss  dword ptr [rdi], xmm2
        vmovss  dword ptr [rdi+4], xmm4
      }
      if ( v19 )
      {
        __asm { vmovss  xmm3, cs:__real@43960000 }
        m_bgHandler = pm->m_bgHandler;
        __asm
        {
          vmulss  xmm0, xmm2, xmm3
          vaddss  xmm1, xmm0, dword ptr [rdx]
          vmovss  dword ptr [rsp+1C0h+angles], xmm1
          vmulss  xmm2, xmm4, xmm3
          vaddss  xmm0, xmm2, dword ptr [rdx+4]
          vmovss  dword ptr [rsp+1C0h+angles+4], xmm0
          vmulss  xmm1, xmm5, xmm3
          vaddss  xmm0, xmm1, dword ptr [rdx+8]
          vmovss  dword ptr [rsp+1C0h+angles+8], xmm0
        }
        m_bgHandler->DebugLine((BgHandler *)m_bgHandler, &_RSI->origin, &angles, &colorWhite, 1, 10000);
      }
      if ( !BG_IsPlayerZeroG(_RSI) && !v15 && v16 )
      {
        v103 = pm->refFrame.m_axisAdjusted;
        __asm
        {
          vmovss  xmm4, dword ptr [rsi+30h]
          vmovss  xmm5, dword ptr [rsi+34h]
          vmovss  xmm3, dword ptr [rsi+38h]
          vmovss  dword ptr [rsp+1C0h+end], xmm4
          vmovss  dword ptr [rsp+1C0h+end+4], xmm5
        }
        if ( v103 )
        {
          __asm
          {
            vmulss  xmm0, xmm9, dword ptr [rbx+370h]
            vaddss  xmm1, xmm0, xmm4
            vmulss  xmm0, xmm9, dword ptr [rbx+374h]
            vmovss  dword ptr [rsp+1C0h+end], xmm1
            vaddss  xmm1, xmm0, xmm5
            vmulss  xmm0, xmm9, dword ptr [rbx+378h]
            vmovss  dword ptr [rsp+1C0h+end+4], xmm1
            vaddss  xmm1, xmm0, xmm3
            vmovss  dword ptr [rsp+1C0h+end+8], xmm1
          }
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm3, xmm9
            vmovss  dword ptr [rsp+1C0h+end+8], xmm0
          }
        }
        __asm
        {
          vmovss  xmm0, cs:ARBITRARY_UP_GROUND_TRACE_HEIGHT
          vxorps  xmm2, xmm0, xmm13
          vmovss  dword ptr [rsp+1C0h+start], xmm4
          vmovss  dword ptr [rsp+1C0h+start+4], xmm5
        }
        if ( v103 )
        {
          __asm
          {
            vmulss  xmm0, xmm2, dword ptr [rbx+370h]
            vaddss  xmm1, xmm0, xmm4
            vmulss  xmm0, xmm2, dword ptr [rbx+374h]
            vmovss  dword ptr [rsp+1C0h+start], xmm1
            vaddss  xmm1, xmm0, xmm5
            vmulss  xmm0, xmm2, dword ptr [rbx+378h]
            vmovss  dword ptr [rsp+1C0h+start+4], xmm1
            vaddss  xmm1, xmm0, xmm3
            vmovss  dword ptr [rsp+1C0h+start+8], xmm1
          }
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm3, xmm2
            vmovss  dword ptr [rsp+1C0h+start+8], xmm0
          }
        }
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &end, &start, &bounds_origin, _RSI->clientNum, pm->tracemask);
        __asm
        {
          vmovss  xmm0, [rbp+0C0h+results.fraction]
          vcomiss xmm0, xmm11
        }
        if ( v64 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0C0h+results.normal]
            vmovss  xmm1, dword ptr [rbp+0C0h+results.normal+4]
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm0, dword ptr [rbp+0C0h+results.normal+8]
            vmovss  dword ptr [rdi+8], xmm0
            vmovss  dword ptr [rdi+4], xmm1
          }
        }
      }
      __asm
      {
        vmovaps xmm11, [rsp+1C0h+var_90]
        vmovaps xmm9, [rsp+1C0h+var_70]
        vmovaps xmm13, [rsp+1C0h+var_B0]
      }
    }
    else
    {
      *(_QWORD *)_RDI->v = 0i64;
      _RDI->v[2] = 1.0;
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
  {
    AxisToAngles(&this->m_axis, outAngles);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [rdx], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [rdx+4], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
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
  _RBX = outEye;
  _RSI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 342, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  BG_GetPlayerEyePosition(weaponMap, _RSI, outEye, handler);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsi+38h]
    vmovss  xmm5, dword ptr [rsi+30h]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vsubss  xmm2, xmm5, dword ptr [rbx]
    vmulss  xmm0, xmm4, xmm4
    vmovss  dword ptr [rbx], xmm5
    vmovss  xmm4, dword ptr [rsi+34h]
    vmulss  xmm2, xmm2, xmm2
    vmovss  dword ptr [rbx+4], xmm4
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, dword ptr [rsi+38h]
    vmovss  dword ptr [rbx+8], xmm3
    vsqrtss xmm0, xmm2, xmm2
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
      vaddss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm1, xmm0, dword ptr [rdi+20h]
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbx+4], xmm2
      vmulss  xmm1, xmm0, dword ptr [rdi+24h]
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm0 }
  }
  __asm
  {
    vaddss  xmm1, xmm3, xmm1
    vmovss  dword ptr [rbx+8], xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFrame::GetForwardContribution
==============
*/
float WorldUpReferenceFrame::GetForwardContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vmulss  xmm3, xmm0, dword ptr [rdx+4]
      vmovss  xmm1, dword ptr [rcx+4]
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vmulss  xmm2, xmm1, dword ptr [rdx]
      vmulss  xmm1, xmm0, dword ptr [rdx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdx] }
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistance
==============
*/
float WorldUpReferenceFrame::GetHorizontalDistance(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+8]
    vmovaps [rsp+98h+var_48], xmm9
    vmovaps [rsp+98h+var_58], xmm10
    vmovss  xmm10, dword ptr [rdx]
    vmovaps [rsp+98h+var_68], xmm11
    vmovss  xmm11, dword ptr [rdx+4]
    vmovaps [rsp+98h+var_78], xmm12
    vmovss  xmm12, dword ptr [r8]
    vmovaps [rsp+98h+var_88], xmm13
    vmovss  xmm13, dword ptr [r8+4]
    vmovaps [rsp+98h+var_98], xmm14
    vmovss  xmm14, dword ptr [r8+8]
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovss  xmm6, dword ptr [rcx+1Ch]
      vmovaps [rsp+98h+var_28], xmm7
      vmovss  xmm7, dword ptr [rcx+24h]
      vmovaps [rsp+98h+var_38], xmm8
      vmovss  xmm8, dword ptr [rcx+20h]
      vmulss  xmm1, xmm8, xmm11
      vmulss  xmm0, xmm6, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm4
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm10, xmm0, xmm10
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm2, xmm13, xmm8
      vaddss  xmm9, xmm0, xmm4
      vaddss  xmm11, xmm1, xmm11
      vmulss  xmm1, xmm6, xmm12
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm14, xmm7
      vaddss  xmm4, xmm3, xmm0
      vxorps  xmm2, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm2
      vmovaps xmm6, [rsp+98h+var_18]
      vmulss  xmm1, xmm2, xmm8
      vmovaps xmm8, [rsp+98h+var_38]
      vaddss  xmm12, xmm0, xmm12
      vmulss  xmm0, xmm2, xmm7
      vmovaps xmm7, [rsp+98h+var_28]
      vaddss  xmm13, xmm1, xmm13
      vaddss  xmm1, xmm0, xmm14
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm1, xmm1, xmm1
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+98h+var_98]
    vsubss  xmm0, xmm13, xmm11
    vmovaps xmm11, [rsp+98h+var_68]
    vmovaps xmm13, [rsp+98h+var_88]
    vsubss  xmm2, xmm12, xmm10
    vmovaps xmm10, [rsp+98h+var_58]
    vmovaps xmm12, [rsp+98h+var_78]
    vsubss  xmm3, xmm1, xmm9
    vmovaps xmm9, [rsp+98h+var_48]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFrame::GetHorizontalDistanceSq
==============
*/
float WorldUpReferenceFrame::GetHorizontalDistanceSq(WorldUpReferenceFrame *this, const vec3_t *vecA, const vec3_t *vecB)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+8]
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vmovss  xmm10, dword ptr [rdx]
    vmovaps [rsp+88h+var_68], xmm11
    vmovss  xmm11, dword ptr [rdx+4]
    vmovaps [rsp+88h+var_78], xmm12
    vmovss  xmm12, dword ptr [r8]
    vmovaps [rsp+88h+var_88], xmm13
    vmovss  xmm13, dword ptr [r8+4]
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovss  xmm6, dword ptr [rcx+1Ch]
      vmovaps [rsp+88h+var_28], xmm7
      vmovss  xmm7, dword ptr [rcx+24h]
      vmovaps [rsp+88h+var_38], xmm8
      vmovss  xmm8, dword ptr [rcx+20h]
      vmulss  xmm1, xmm8, xmm11
      vmulss  xmm0, xmm6, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm4
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm10, xmm0, xmm10
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm2, xmm12, xmm6
      vaddss  xmm9, xmm0, xmm4
      vmulss  xmm0, xmm7, dword ptr [r8+8]
      vaddss  xmm11, xmm1, xmm11
      vmulss  xmm1, xmm8, xmm13
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm4, xmm3, xmm0
      vxorps  xmm2, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm2
      vmovaps xmm6, [rsp+88h+var_18]
      vmulss  xmm1, xmm2, xmm8
      vmovaps xmm8, [rsp+88h+var_38]
      vaddss  xmm12, xmm0, xmm12
      vmulss  xmm0, xmm2, xmm7
      vmovaps xmm7, [rsp+88h+var_28]
      vaddss  xmm13, xmm1, xmm13
      vaddss  xmm1, xmm0, dword ptr [r8+8]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm1, xmm1, xmm1
    }
  }
  __asm
  {
    vsubss  xmm0, xmm13, xmm11
    vmovaps xmm11, [rsp+88h+var_68]
    vmovaps xmm13, [rsp+88h+var_88]
    vsubss  xmm2, xmm12, xmm10
    vmovaps xmm10, [rsp+88h+var_58]
    vmovaps xmm12, [rsp+88h+var_78]
    vsubss  xmm3, xmm1, xmm9
    vmovaps xmm9, [rsp+88h+var_48]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFrame::GetRightContribution
==============
*/
float WorldUpReferenceFrame::GetRightContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+14h]
      vmulss  xmm3, xmm0, dword ptr [rdx+4]
      vmovss  xmm1, dword ptr [rcx+10h]
      vmovss  xmm0, dword ptr [rcx+18h]
      vmulss  xmm2, xmm1, dword ptr [rdx]
      vmulss  xmm1, xmm0, dword ptr [rdx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdx+4] }
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFrame::GetStandardAxisFromAxis
==============
*/
__int64 WorldUpReferenceFrame::GetStandardAxisFromAxis(const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *resultAxis)
{
  char v11; 
  char v12; 
  bool v16; 
  unsigned int v17; 
  __int64 result; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = axis;
  _RDI = DVARFLT_pmove_snap_world_up;
  if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 | v12 )
  {
LABEL_12:
    result = 0i64;
  }
  else
  {
    if ( !WorldUpReferenceFrame::m_standardInit )
      WorldUpReferenceFrame::InitStandardAxes();
    __asm
    {
      vmovss  xmm8, dword ptr [rbx+4]
      vmovss  xmm7, dword ptr [rbx]
      vmovss  xmm5, dword ptr [rbx+8]
    }
    v16 = 1;
    v17 = 0;
    _RAX = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2];
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rax-8]
        vmulss  xmm0, xmm8, dword ptr [rax-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rax]
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm6
      }
      if ( !v16 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  xmm1, dword ptr [rax+4]
          vmulss  xmm2, xmm1, dword ptr [rbx+0Ch]
          vmulss  xmm3, xmm0, dword ptr [rax+8]
          vmovss  xmm0, dword ptr [rbx+14h]
          vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm6
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmovss  xmm1, dword ptr [rax+10h]
          vmulss  xmm2, xmm1, dword ptr [rbx+18h]
          vmulss  xmm3, xmm0, dword ptr [rax+14h]
          vmovss  xmm0, dword ptr [rbx+20h]
          vmulss  xmm1, xmm0, dword ptr [rax+18h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !v16 )
          break;
      }
      ++v17;
      _RAX += 9;
      v16 = v17 <= 5;
      if ( v17 >= 5 )
        goto LABEL_12;
    }
    MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v17], resultAxis);
    result = 1i64;
  }
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return result;
}

/*
==============
WorldUpReferenceFrame::GetUpContribution
==============
*/
float WorldUpReferenceFrame::GetUpContribution(WorldUpReferenceFrame *this, const vec3_t *vec)
{
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+20h]
      vmulss  xmm3, xmm0, dword ptr [rdx+4]
      vmovss  xmm1, dword ptr [rcx+1Ch]
      vmovss  xmm0, dword ptr [rcx+24h]
      vmulss  xmm2, xmm1, dword ptr [rdx]
      vmulss  xmm1, xmm0, dword ptr [rdx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdx+8] }
  }
  return *(float *)&_XMM0;
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
    *(_QWORD *)outUp->v = *(_QWORD *)this->m_axis.row2.v;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+24h]
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    *(_QWORD *)outUp->v = 0i64;
    __asm { vmovss  dword ptr [rdx+8], xmm0 }
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
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rcx+20h]
      vmulss  xmm1, xmm3, dword ptr [rdx+4]
      vmovss  xmm5, dword ptr [rcx+1Ch]
      vmulss  xmm0, xmm5, dword ptr [rdx]
      vmulss  xmm3, xmm3, dword ptr [r8+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [r8]
      vmovaps [rsp+18h+var_18], xmm6
      vmovss  xmm6, dword ptr [rcx+24h]
      vmulss  xmm1, xmm6, dword ptr [rdx+8]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [r8+8]
      vmovaps xmm6, [rsp+18h+var_18]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm4, xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+8]
      vsubss  xmm0, xmm0, dword ptr [r8+8]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
WorldUpReferenceFramePM::GetWorldUpTriggerData
==============
*/
char WorldUpReferenceFramePM::GetWorldUpTriggerData(WorldUpReferenceFramePM *this, pmove_t *pm, vec3_t *outWorldUpDir, bool *outHadValidTriggerData)
{
  Physics_WorldId v8; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  playerState_s *ps; 
  int v11; 
  unsigned int NumHits; 
  int ClosestPointHitRef; 
  int EntityNum; 
  unsigned __int16 v16; 
  __int64 v25; 
  __int64 v26; 
  Physics_QueryPointExtendedData extendedData; 
  vec3_t angles; 
  char v29[16]; 

  _RBP = outWorldUpDir;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 796, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outHadValidTriggerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 797, ASSERT_TYPE_ASSERT, "(outHadValidTriggerData)", (const char *)&queryFormat, "outHadValidTriggerData") )
    __debugbreak();
  *outHadValidTriggerData = 0;
  v8 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  AllResult = PhysicsQuery_GetAllResult(v8);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 803, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  ps = pm->ps;
  v11 = 0;
  extendedData.simplify = 0;
  __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm { vmovss  [rsp+0D8h+extendedData.collisionBuffer], xmm2 }
  extendedData.phaseSelection = All;
  extendedData.contents = 1078198280;
  Physics_QueryPoint(v8, &ps->origin, *(float *)&_XMM2, &extendedData, AllResult);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( !NumHits )
    return 0;
  while ( 1 )
  {
    ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(AllResult, v11);
    EntityNum = Physics_GetEntityNum(ClosestPointHitRef);
    v16 = EntityNum;
    if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
      __debugbreak();
    if ( v16 >= 0x800u )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( triggerEntNum ) < (unsigned)( ( 2048 ) )", "triggerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( pm->IsWorldUpVolume(pm, v16) )
      break;
    if ( ++v11 >= NumHits )
      return 0;
  }
  if ( pm->GetWorldUpParentOrientation(pm, v16, (vec3_t *)v29, &angles) )
  {
    AngleVectors(&angles, _RBP, NULL, NULL);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbp+0], xmm0
      vxorps  xmm0, xmm1, xmm2
      vmovss  xmm1, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+4], xmm0
      vxorps  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbp+8], xmm0
    }
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
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  return !VecNCompareCustomEpsilon(ps->worldUpAngles.v, vec3_origin.v, *(float *)&_XMM2, 3);
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
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  _RDI = normal;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 473, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( normal ))", (const char *)&queryFormat, "Vec3IsNormalized( normal )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
  }
  GenerateAxisFromUpVector(_RDI, &identityMatrix33, &this->m_axis);
  this->m_axisAdjusted = 1;
}

/*
==============
WorldUpReferenceFrame::InitStandardAxes
==============
*/
void WorldUpReferenceFrame::InitStandardAxes()
{
  unsigned int v11; 
  int i; 
  int j; 
  char v65; 
  __int64 v73; 
  __int64 v74; 
  vec3_t v75; 
  __m256i angles; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( !WorldUpReferenceFrame::m_standardInit )
  {
    __asm
    {
      vmovups ymm0, cs:__ymm@0000000042b4000042b4000000000000c2b40000c33400000000000000000000
      vmovups xmm1, cs:__xmm@000000000000000042b40000c2b40000
    }
    _RSI = WorldUpReferenceFrame::m_standardAxis;
    v11 = 0;
    _R15 = &angles.m256i_i64[1];
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm6
      vmovaps xmmword ptr [r11-38h], xmm7
      vmovaps xmmword ptr [r11-48h], xmm8
      vmovaps xmmword ptr [r11-58h], xmm9
      vmovss  xmm9, cs:__real@3f000000
      vmovups ymmword ptr [rsp+58h], ymm0
      vmovss  xmm0, cs:__real@c2b40000
      vmovaps xmmword ptr [r11-68h], xmm10
      vmovaps xmmword ptr [r11-78h], xmm11
      vmovss  xmm11, cs:__real@3b360b61
      vxorps  xmm10, xmm10, xmm10
      vmovss  [rsp+128h+var_A0], xmm0
      vmovups [rsp+128h+var_B0], xmm1
      vmovaps xmmword ptr [r11-88h], xmm12
      vmovss  xmm12, cs:__real@43b40000
      vmovss  dword ptr [r11-9Ch], xmm10
      vmovss  dword ptr [r11-98h], xmm10
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      AnglesToAxis((const vec3_t *)&angles + (int)v11, &WorldUpReferenceFrame::m_standardAxis[v11]);
      for ( i = 0; i < 3; ++i )
      {
        for ( j = 0; j < 3; ++j )
        {
          if ( (unsigned int)i >= 3 )
          {
            LODWORD(v74) = 3;
            LODWORD(v73) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          if ( (unsigned int)j >= 3 )
          {
            LODWORD(v74) = 3;
            LODWORD(v73) = j;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          __asm
          {
            vaddss  xmm2, xmm9, dword ptr [rsi]
            vroundss xmm0, xmm8, xmm2, 1
            vcvttss2si eax, xmm0
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, eax
          }
          if ( (unsigned int)i >= 3 )
          {
            LODWORD(v74) = 3;
            LODWORD(v73) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          if ( (unsigned int)j >= 3 )
          {
            LODWORD(v74) = 3;
            LODWORD(v73) = j;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, v74) )
              __debugbreak();
          }
          __asm { vmovss  dword ptr [rsi], xmm6 }
          _RSI = (tmat33_t<vec3_t> *)((char *)_RSI + 4);
        }
      }
      AxisToAngles(&WorldUpReferenceFrame::m_standardAxis[v11], &v75);
      __asm
      {
        vmulss  xmm4, xmm11, dword ptr [rsp+128h+var_E0]
        vmulss  xmm5, xmm11, dword ptr [rsp+128h+var_E0+4]
        vmulss  xmm7, xmm11, dword ptr [rsp+128h+var_E0+8]
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm12
        vaddss  xmm4, xmm0, xmm9
        vroundss xmm0, xmm8, xmm4, 1
        vcvttss2si eax, xmm0
        vaddss  xmm1, xmm5, xmm9
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm5, xmm2
        vmulss  xmm1, xmm0, xmm12
        vaddss  xmm3, xmm1, xmm9
        vroundss xmm1, xmm8, xmm3, 1
        vmovd   xmm6, eax
        vcvttss2si eax, xmm1
        vaddss  xmm1, xmm7, xmm9
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm7, xmm2
        vmulss  xmm1, xmm0, xmm12
        vmovss  xmm0, dword ptr [r15-8]
        vaddss  xmm3, xmm1, xmm9
        vroundss xmm1, xmm8, xmm3, 1
        vmovd   xmm5, eax
        vcvttss2si eax, xmm1
        vmovss  xmm1, dword ptr [r15-4]
        vcvtdq2ps xmm6, xmm6
        vsubss  xmm3, xmm0, xmm6
        vmovss  xmm0, dword ptr [r15]
        vcvtdq2ps xmm5, xmm5
        vsubss  xmm2, xmm1, xmm5
        vmovd   xmm4, eax
        vcvtdq2ps xmm4, xmm4
        vmovss  dword ptr [rsp+128h+var_E0+8], xmm4
        vsubss  xmm4, xmm0, xmm4
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm4, xmm3, xmm0
        vucomiss xmm4, xmm10
        vmovss  dword ptr [rsp+128h+var_E0], xmm6
        vmovss  dword ptr [rsp+128h+var_E0+4], xmm5
      }
      if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 135, ASSERT_TYPE_ASSERT, "(Vec3DistanceSq( compare, standardAngles[iStandard] ) == 0.0f)", (const char *)&queryFormat, "Vec3DistanceSq( compare, standardAngles[iStandard] ) == 0.0f") )
        __debugbreak();
      ++v11;
      _R15 = (__int64 *)((char *)_R15 + 12);
    }
    while ( v11 < 5 );
    __asm
    {
      vmovaps xmm12, [rsp+128h+var_88]
      vmovaps xmm11, [rsp+128h+var_78]
      vmovaps xmm10, [rsp+128h+var_68]
      vmovaps xmm9, [rsp+128h+var_58]
      vmovaps xmm8, [rsp+128h+var_48]
      vmovaps xmm7, [rsp+128h+var_38]
      vmovaps xmm6, [rsp+128h+var_28]
    }
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
  unsigned int v9; 
  int *v10; 
  __int64 result; 
  int v26[4]; 
  char v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm6, cs:__real@3b360b61
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm9, cs:__real@43ff8000
  }
  v9 = 0;
  v10 = v26;
  _RSI = worldUpAngles;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    _RAX = (int)v9;
    __asm { vmovss  xmm0, dword ptr [rsi+rax*4]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmaxss  xmm1, xmm1, xmm7
      vminss  xmm0, xmm1, xmm8
      vmulss  xmm2, xmm0, xmm9
      vcvttss2si eax, xmm2
    }
    *v10 = _EAX;
    ++v9;
    ++v10;
  }
  while ( v9 < 3 );
  result = (unsigned int)(v26[0] + ((v26[1] + (v26[2] << 9)) << 9));
  _R11 = &v27;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
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
  vec3_t v6; 
  tmat33_t<vec3_t> out; 

  _RBX = vec;
  if ( this->m_axisAdjusted )
  {
    MatrixTranspose(&this->m_axis, &out);
    MatrixTransformVector(_RBX, &out, &v6);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+var_48]
      vmovss  xmm1, dword ptr [rsp+68h+var_48+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+68h+var_48+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
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
  char v18; 
  char v19; 
  bool v23; 
  unsigned int v24; 
  float v1[4]; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBX = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 231, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !WorldUpReferenceFrame::HasValidWorldUpAngles(ps) && !WorldUpReferenceFrame::IsTrackingMover(ps) && !WorldUpReferenceFrame::HasValidWorldUpEnt(ps) )
  {
    __asm
    {
      vmovaps xmm2, xmm6; epsilon
      vmovss  [rsp+158h+v1], xmm7
      vmovss  [rsp+158h+var_114], xmm7
      vmovss  [rsp+158h+var_110], xmm7
    }
    if ( VecNCompareCustomEpsilon(angles->v, v1, *(float *)&_XMM2, 3) )
      goto LABEL_9;
  }
  WorldUpReferenceFrame::CalculateEntMoverAxis(_RBX, ps, handler, &outAxis);
  MatrixTranspose(&outAxis, &out);
  AnglesToAxis(angles, &axis);
  MatrixMultiply(&axis, &out, &v54);
  AxisToAngles(&v54, &ps->worldUpAngles);
  __asm { vmovaps xmm2, xmm6; epsilon }
  if ( !VecNCompareCustomEpsilon(angles->v, vec3_origin.v, *(float *)&_XMM2, 3) )
  {
    _RBX->m_axisAdjusted = 1;
    AnglesToAxis(angles, &_RBX->m_axis);
    _RDI = DVARFLT_pmove_snap_world_up;
    if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vcomiss xmm6, xmm7
    }
    if ( !(v18 | v19) )
    {
      __asm { vmovaps [rsp+158h+var_58], xmm8 }
      if ( !WorldUpReferenceFrame::m_standardInit )
        WorldUpReferenceFrame::InitStandardAxes();
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+8]
        vmovss  xmm7, dword ptr [rbx+4]
        vmovss  xmm5, dword ptr [rbx+0Ch]
      }
      v23 = 1;
      v24 = 0;
      _RAX = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rax-8]
          vmulss  xmm0, xmm8, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !v23 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  xmm1, dword ptr [rax+4]
            vmulss  xmm2, xmm1, dword ptr [rbx+10h]
            vmulss  xmm3, xmm0, dword ptr [rax+8]
            vmovss  xmm0, dword ptr [rbx+18h]
            vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm6
          }
          if ( !v23 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+20h]
              vmovss  xmm1, dword ptr [rax+10h]
              vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
              vmulss  xmm3, xmm0, dword ptr [rax+14h]
              vmovss  xmm0, dword ptr [rbx+24h]
              vmulss  xmm1, xmm0, dword ptr [rax+18h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, xmm6
            }
            if ( !v23 )
              break;
          }
        }
        ++v24;
        _RAX += 9;
        v23 = v24 <= 5;
        if ( v24 >= 5 )
          goto LABEL_23;
      }
      MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v24], &_RBX->m_axis);
LABEL_23:
      __asm { vmovaps xmm8, [rsp+158h+var_58] }
    }
  }
  else
  {
LABEL_9:
    _RBX->m_axisAdjusted = 0;
    MatrixIdentity33(&_RBX->m_axis);
  }
  __asm
  {
    vmovaps xmm6, [rsp+158h+var_38]
    vmovaps xmm7, [rsp+158h+var_48]
  }
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles
==============
*/
void WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles)
{
  vec3_t inOutViewAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 287, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmovss  xmm1, dword ptr [rbx+1DCh]
    vmovss  dword ptr [rsp+0C8h+inOutViewAngles], xmm0
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vmovss  dword ptr [rsp+0C8h+inOutViewAngles+8], xmm0
    vmovss  dword ptr [rsp+0C8h+inOutViewAngles+4], xmm1
  }
  BG_CalcLinkedViewValues(_RBX, &inOutViewAngles);
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
  WorldUpReferenceFrame::SetAnglesAndViewAngles(this, _RBX, handler, newWorldAngles, &inOutViewAngles);
}

/*
==============
WorldUpReferenceFrame::SetAnglesAndViewAngles
==============
*/
void WorldUpReferenceFrame::SetAnglesAndViewAngles(WorldUpReferenceFrame *this, playerState_s *ps, const BgHandler *handler, const vec3_t *newWorldAngles, const vec3_t *newViewAngles)
{
  bool v17; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v113; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 263, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::SetAngles(this, _RDI, handler, newWorldAngles);
  v17 = !this->m_axisAdjusted;
  _RAX = newViewAngles;
  __asm
  {
    vmovss  xmm11, dword ptr [rax]
    vmovss  xmm12, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rsp+158h+angles], xmm11
    vmovss  dword ptr [rsp+158h+angles+4], xmm12
    vmovss  dword ptr [rsp+158h+angles+8], xmm0
  }
  if ( !v17 )
  {
    AnglesToAxis(&angles, &axis);
    MatrixTranspose(&this->m_axis, &out);
    MatrixMultiply(&axis, &out, &v113);
    AxisToAngles(&v113, &angles);
    __asm
    {
      vmovss  xmm12, dword ptr [rsp+158h+angles+4]
      vmovss  xmm11, dword ptr [rsp+158h+angles]
    }
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rdi+1D8h]
    vsubss  xmm1, xmm0, dword ptr [rdi+0B4h]
    vmovss  xmm7, cs:__real@43b40000
    vmovss  xmm9, cs:__real@3b360b61
    vmulss  xmm3, xmm1, xmm9
    vaddss  xmm1, xmm3, xmm8
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm6, xmm0, xmm7
    vmovss  xmm0, dword ptr [rdi+1DCh]
    vsubss  xmm1, xmm0, dword ptr [rdi+0B8h]
    vmulss  xmm4, xmm1, xmm9
    vmovss  xmm1, dword ptr [rdi+1E0h]
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm2, xmm1, dword ptr [rdi+0BCh]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm4, xmm0, xmm7
    vmulss  xmm5, xmm2, xmm9
    vsubss  xmm0, xmm12, xmm4
    vmovss  dword ptr [rdi+0B8h], xmm0
    vaddss  xmm2, xmm5, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm5, xmm3
    vmulss  xmm0, xmm1, cs:__real@c3b40000
    vmovss  xmm5, cs:__real@37800000
    vmovss  dword ptr [rdi+0BCh], xmm0
    vsubss  xmm2, xmm11, xmm6
    vmovss  xmm6, cs:__real@43360b61
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm3, xmm0, xmm8
    vroundss xmm0, xmm10, xmm3, 1
    vcvttss2si eax, xmm0
  }
  _ECX = (unsigned __int16)_EAX;
  __asm
  {
    vmovd   xmm1, ecx
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm4, xmm1, xmm5
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdi+0B4h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rdi+0B8h]
    vaddss  xmm3, xmm1, xmm8
    vroundss xmm1, xmm10, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _ECX = (unsigned __int16)_EAX;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm4, xmm0, xmm5
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm7
    vmovss  dword ptr [rdi+0B8h], xmm0
    vmulss  xmm0, xmm6, dword ptr [rdi+0BCh]
    vaddss  xmm3, xmm0, xmm8
    vroundss xmm0, xmm10, xmm3, 1
    vcvttss2si eax, xmm0
  }
  _ECX = (unsigned __int16)_EAX;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm4, xmm0, xmm5
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm7
    vmovss  dword ptr [rdi+0BCh], xmm0
    vmulss  xmm3, xmm11, xmm9
    vaddss  xmm1, xmm3, xmm8
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rdi+1DCh], xmm12
  }
  _RDI->viewangles.v[2] = 0.0;
  __asm
  {
    vmulss  xmm4, xmm9, dword ptr [rdi+1DCh]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm2, xmm4, xmm8
    vmovss  dword ptr [rdi+1D8h], xmm1
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm9, dword ptr [rdi+1E0h]
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vmovss  dword ptr [rdi+1DCh], xmm0
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdi+1E0h], xmm1
  }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
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
  vec3_t inOutViewAngles; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 309, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmovss  xmm1, dword ptr [rbx+1DCh]
    vmovss  dword ptr [rsp+0D8h+inOutViewAngles], xmm0
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vmovss  dword ptr [rsp+0D8h+inOutViewAngles+8], xmm0
    vmovss  dword ptr [rsp+0D8h+inOutViewAngles+4], xmm1
  }
  BG_CalcLinkedViewValues(_RBX, &inOutViewAngles);
  AnglesToAxis(&inOutViewAngles, &axis);
  if ( this->m_axisAdjusted )
  {
    MatrixMultiply(&axis, &this->m_axis, &out);
    AxisCopy(&out, &axis);
  }
  AxisToAngles(&axis, &inOutViewAngles);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 333, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX->worldUpRefEnt = entity;
  WorldUpReferenceFrame::Init(this, _RBX, handler);
  if ( this->m_axisAdjusted )
  {
    AxisToAngles(&this->m_axis, &angles);
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovsd  qword ptr [rsp+0D8h+angles], xmm0
    }
    angles.v[2] = vec3_origin.v[2];
  }
  WorldUpReferenceFrame::SetAnglesAndViewAngles(this, _RBX, handler, &angles, &inOutViewAngles);
}

/*
==============
WorldUpReferenceFrame::SetFinalInternalAngles
==============
*/
void WorldUpReferenceFrame::SetFinalInternalAngles(WorldUpReferenceFrame *this, const vec3_t *angles)
{
  char v12; 
  char v13; 
  bool v17; 
  unsigned int v18; 

  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  _RBX = this;
  if ( VecNCompareCustomEpsilon(angles->v, vec3_origin.v, *(float *)&_XMM2, 3) )
  {
    _RBX->m_axisAdjusted = 0;
    MatrixIdentity33(&_RBX->m_axis);
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_18], xmm6 }
    _RBX->m_axisAdjusted = 1;
    AnglesToAxis(angles, &_RBX->m_axis);
    _RDI = DVARFLT_pmove_snap_world_up;
    if ( !DVARFLT_pmove_snap_world_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_snap_world_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( !(v12 | v13) )
    {
      __asm
      {
        vmovaps [rsp+78h+var_28], xmm7
        vmovaps [rsp+78h+var_38], xmm8
      }
      if ( !WorldUpReferenceFrame::m_standardInit )
        WorldUpReferenceFrame::InitStandardAxes();
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+8]
        vmovss  xmm7, dword ptr [rbx+4]
        vmovss  xmm5, dword ptr [rbx+0Ch]
      }
      v17 = 1;
      v18 = 0;
      _RAX = &WorldUpReferenceFrame::m_standardAxis[0].m[0].v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rax-8]
          vmulss  xmm0, xmm8, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm6
        }
        if ( !v17 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  xmm1, dword ptr [rax+4]
            vmulss  xmm2, xmm1, dword ptr [rbx+10h]
            vmulss  xmm3, xmm0, dword ptr [rax+8]
            vmovss  xmm0, dword ptr [rbx+18h]
            vmulss  xmm1, xmm0, dword ptr [rax+0Ch]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm6
          }
          if ( !v17 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+20h]
              vmovss  xmm1, dword ptr [rax+10h]
              vmulss  xmm2, xmm1, dword ptr [rbx+1Ch]
              vmulss  xmm3, xmm0, dword ptr [rax+14h]
              vmovss  xmm0, dword ptr [rbx+24h]
              vmulss  xmm1, xmm0, dword ptr [rax+18h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, xmm6
            }
            if ( !v17 )
              break;
          }
        }
        ++v18;
        _RAX += 9;
        v17 = v18 <= 5;
        if ( v18 >= 5 )
          goto LABEL_16;
      }
      MatrixCopy33(&WorldUpReferenceFrame::m_standardAxis[v18], &_RBX->m_axis);
LABEL_16:
      __asm
      {
        vmovaps xmm7, [rsp+78h+var_28]
        vmovaps xmm8, [rsp+78h+var_38]
      }
    }
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
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

void __fastcall WorldUpReferenceFrame::SetUpContribution(WorldUpReferenceFrame *this, double height, vec3_t *vec)
{
  __asm
  {
    vmovaps [rsp+28h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rcx+1Ch]
      vmovss  xmm5, dword ptr [r8+4]
      vmulss  xmm1, xmm5, dword ptr [rcx+20h]
      vmulss  xmm0, xmm3, dword ptr [r8]
      vaddss  xmm2, xmm1, xmm0
      vmovaps [rsp+28h+var_18], xmm6
      vmovss  xmm6, dword ptr [r8+8]
      vmulss  xmm1, xmm6, dword ptr [rcx+24h]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm7, xmm0
      vmovaps xmm7, [rsp+28h+var_28]
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm1, xmm0, dword ptr [r8]
      vmovss  dword ptr [r8], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+20h]
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [r8+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rcx+24h]
      vaddss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+28h+var_18]
      vmovss  dword ptr [r8+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [r8+8], xmm1
      vmovaps xmm7, [rsp+28h+var_28]
    }
  }
}

/*
==============
WorldUpReferenceFrame::Unlink
==============
*/
void WorldUpReferenceFrame::Unlink(WorldUpReferenceFrame *this, playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *handler, const int useParentAngles, const vec3_t *parentAngles)
{
  bool m_axisAdjusted; 
  const vec3_t *p_angles; 
  vec3_t outOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 355, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 356, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_up.cpp", 342, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  BG_GetPlayerEyePosition(weaponMap, _RBX, &outOrigin, handler);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+34h]
    vsubss  xmm0, xmm7, dword ptr [rsp+110h+outOrigin+4]
    vmovss  xmm5, dword ptr [rbx+30h]
    vsubss  xmm2, xmm5, dword ptr [rsp+110h+outOrigin]
    vmovss  xmm4, dword ptr [rbx+38h]
    vsubss  xmm3, xmm4, dword ptr [rsp+110h+outOrigin+8]
  }
  m_axisAdjusted = this->m_axisAdjusted;
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vmovss  dword ptr [rsp+110h+outOrigin], xmm5
    vmovss  dword ptr [rsp+110h+outOrigin+4], xmm7
  }
  if ( m_axisAdjusted )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rdi+1Ch]
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm0, xmm6, dword ptr [rdi+20h]
      vmovss  dword ptr [rsp+110h+outOrigin], xmm1
      vaddss  xmm1, xmm0, xmm7
      vmulss  xmm0, xmm6, dword ptr [rdi+24h]
      vmovss  dword ptr [rsp+110h+outOrigin+4], xmm1
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rsp+110h+outOrigin+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rsp+110h+outOrigin+8], xmm0
    }
  }
  if ( useParentAngles && parentAngles )
  {
    p_angles = parentAngles;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+280h]
      vmovss  xmm1, dword ptr [rbx+284h]
      vmovss  dword ptr [rsp+110h+angles], xmm0
      vmovss  xmm0, dword ptr [rbx+288h]
      vmovss  dword ptr [rsp+110h+angles+8], xmm0
      vmovss  dword ptr [rsp+110h+angles+4], xmm1
    }
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
  WorldUpReferenceFrame::SetAnglesAndNormalizeViewAngles(this, _RBX, handler, p_angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+110h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+110h+outOrigin+4]
    vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+30h], xmm0
    vmovss  xmm0, dword ptr [rsp+110h+outOrigin+8]
    vmovss  dword ptr [rbx+38h], xmm0
    vmovss  dword ptr [rbx+34h], xmm1
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rdi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rbx+30h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+20h]
      vaddss  xmm1, xmm0, dword ptr [rbx+34h]
      vmovss  dword ptr [rbx+34h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+24h]
      vaddss  xmm1, xmm0, dword ptr [rbx+38h]
      vmovss  dword ptr [rbx+38h], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm2, xmm0
      vmovss  dword ptr [rbx+38h], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+110h+var_58+8]
    vmovaps xmm7, [rsp+110h+var_68+8]
  }
}

/*
==============
WorldUpReferenceFrame::UnpackEntityStateAngles
==============
*/
void WorldUpReferenceFrame::UnpackEntityStateAngles(int angles, vec3_t *outWorldUpAngles)
{
  unsigned int v9; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f345a2d
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdx], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  v9 = 0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdx+4], xmm0
  }
  _RSI = outWorldUpAngles;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [rdx+8], xmm0
  }
  do
  {
    _RDI = (int)v9;
    __asm { vmulss  xmm6, xmm7, dword ptr [rsi+rdi*4] }
    ++v9;
    __asm { vmovss  dword ptr [rsi+rdi*4], xmm6 }
  }
  while ( v9 < 3 );
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate
==============
*/
void WorldUpReferenceFramePM::UpdateArbitraryUpForGroundUpdate(WorldUpReferenceFramePM *this, pmove_t *pm, const pml_t *pml, const trace_t *trace)
{
  unsigned int v22; 
  bool v23; 
  bool m_axisAdjusted; 
  char v53; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v73; 
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
  _R14 = pm->ps;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END|0x80) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_R14->otherFlags, DEAD|PRONE|0x20) )
  {
    if ( BG_IsPlayerZeroG(_R14) )
    {
      if ( !BG_IsPlayerZeroGWalking(_R14) )
        return;
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( !WorldUpReferenceFrame::HasValidWorldUpEnt(_R14) && WorldUpReferenceFramePM::CalculateNormalForGroundUpdate(this, pm, &outNormal) )
    {
      __asm
      {
        vmovaps [rsp+1D0h+var_40], xmm6
        vmovaps [rsp+1D0h+var_50], xmm7
        vmovaps [rsp+1D0h+var_60], xmm8
      }
      GenerateAxisFromUpVector(&outNormal, &pm->refFrame.m_axis, &outAxis);
      __asm
      {
        vmovss  xmm0, cs:WORLD_UP_GROUND_SOLVER_BLEND_STRENGTH
        vmulss  xmm0, xmm0, dword ptr [rdi+24h]; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
        vxorps  xmm8, xmm8, xmm8
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm2, xmm0; fraction }
      BgSpaceship::AxisLerp(&pm->refFrame.m_axis, &outAxis, *(const float *)&_XMM2, &axis);
      if ( pm->refFrame.m_axisAdjusted )
      {
        AxisToAngles(&pm->refFrame.m_axis, &angles);
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
          vmovsd  qword ptr [rbp+0D0h+angles], xmm0
        }
        angles.v[2] = vec3_origin.v[2];
      }
      AxisToAngles(&axis, &v73);
      __asm
      {
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm7, cs:__real@43b40000
      }
      v22 = 0;
      v23 = 0;
      do
      {
        _RDI = (int)v22;
        __asm { vucomiss xmm8, dword ptr [rsp+rdi*4+1D0h+var_160] }
        if ( !v23 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+rdi*4+1D0h+var_160]
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, cs:dword_14503F444
          }
          v73.v[v22] = 0.0;
        }
        v23 = ++v22 == 3;
      }
      while ( v22 < 3 );
      WorldUpReferenceFrame::SetAngles(&pm->refFrame, _R14, pm->m_bgHandler, &v73);
      __asm { vmovss  xmm1, dword ptr [r14+30h] }
      m_axisAdjusted = pm->refFrame.m_axisAdjusted;
      __asm
      {
        vmovaps xmm8, [rsp+1D0h+var_60]
        vmovaps xmm7, [rsp+1D0h+var_50]
        vmovss  dword ptr [rsp+1D0h+start], xmm1
        vmovss  xmm4, dword ptr [r14+34h]
        vmovss  dword ptr [rsp+1D0h+start+4], xmm4
        vmovss  xmm3, dword ptr [r14+38h]
      }
      if ( m_axisAdjusted )
      {
        __asm
        {
          vmovss  xmm2, cs:WORLD_UP_GROUND_SOLVER_TRACE_UP
          vmulss  xmm0, xmm2, dword ptr [rsi+370h]
          vaddss  xmm1, xmm0, xmm1
          vmulss  xmm0, xmm2, dword ptr [rsi+374h]
          vmovss  dword ptr [rsp+1D0h+start], xmm1
          vaddss  xmm1, xmm0, xmm4
          vmulss  xmm0, xmm2, dword ptr [rsi+378h]
          vmovss  dword ptr [rsp+1D0h+start+4], xmm1
          vaddss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+1D0h+start+8], xmm1
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm3, cs:WORLD_UP_GROUND_SOLVER_TRACE_UP
          vmovss  dword ptr [rsp+1D0h+start+8], xmm0
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r14+30h]
        vmovss  dword ptr [rsp+1D0h+end], xmm1
        vmovss  xmm4, dword ptr [r14+34h]
        vmovss  dword ptr [rsp+1D0h+end+4], xmm4
        vmovss  xmm3, dword ptr [r14+38h]
      }
      if ( m_axisAdjusted )
      {
        __asm
        {
          vmovss  xmm2, cs:WORLD_UP_GROUND_SOLVER_TRACE_DOWN
          vmulss  xmm0, xmm2, dword ptr [rsi+370h]
          vaddss  xmm1, xmm0, xmm1
          vmulss  xmm0, xmm2, dword ptr [rsi+374h]
          vmovss  dword ptr [rsp+1D0h+end], xmm1
          vaddss  xmm1, xmm0, xmm4
          vmulss  xmm0, xmm2, dword ptr [rsi+378h]
          vmovss  dword ptr [rsp+1D0h+end+4], xmm1
          vaddss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+1D0h+end+8], xmm1
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm3, cs:WORLD_UP_GROUND_SOLVER_TRACE_DOWN
          vmovss  dword ptr [rsp+1D0h+end+8], xmm0
        }
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &end, pm->bounds, _R14->clientNum, pm->tracemask);
      __asm
      {
        vmovss  xmm0, [rbp+0D0h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
      if ( !v53 || results.startsolid )
      {
        if ( !PM_ResolvePlayerPenetration(pm, &_R14->origin, NULL, pm->bounds, NULL, pm->tracemask, 0, &outOrigin, NULL) )
        {
          WorldUpReferenceFrame::SetAngles(&pm->refFrame, _R14, pm->m_bgHandler, &angles);
          goto LABEL_42;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+outOrigin]
          vmovss  xmm1, dword ptr [rbp+0D0h+outOrigin+4]
          vmovss  dword ptr [r14+30h], xmm0
          vmovss  xmm0, dword ptr [rbp+0D0h+outOrigin+8]
          vmovss  dword ptr [r14+38h], xmm0
          vmovss  dword ptr [r14+34h], xmm1
        }
      }
      else if ( BG_IsPlayerZeroG(_R14) )
      {
        __asm
        {
          vmovss  xmm6, [rbp+0D0h+results.fraction]
          vmovss  xmm0, dword ptr [rsp+1D0h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+start]
          vmovss  dword ptr [r14+30h], xmm3
          vmovss  xmm0, dword ptr [rsp+1D0h+end+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start+4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+start+4]
          vmovss  dword ptr [r14+34h], xmm3
          vmovss  xmm0, dword ptr [rsp+1D0h+end+8]
          vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start+8]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+1D0h+start+8]
          vmovss  dword ptr [r14+38h], xmm3
        }
        _R14->rollVelocity = 0.0;
LABEL_42:
        __asm { vmovaps xmm6, [rsp+1D0h+var_40] }
        return;
      }
      _R14->rollVelocity = 0.0;
      goto LABEL_42;
    }
  }
}

/*
==============
WorldUpReferenceFrame::Vec2Dot
==============
*/

float __fastcall WorldUpReferenceFrame::Vec2Dot(WorldUpReferenceFrame *this, const vec3_t *dirA, const vec3_t *dirB, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+8]
    vmovaps [rsp+98h+var_48], xmm9
    vmovaps [rsp+98h+var_58], xmm10
    vmovss  xmm10, dword ptr [rdx]
    vmovaps [rsp+98h+var_68], xmm11
    vmovss  xmm11, dword ptr [rdx+4]
    vmovaps [rsp+98h+var_78], xmm12
    vmovss  xmm12, dword ptr [r8]
    vmovaps [rsp+98h+var_88], xmm13
    vmovss  xmm13, dword ptr [r8+4]
    vmovaps [rsp+98h+var_98], xmm14
    vmovss  xmm14, dword ptr [r8+8]
  }
  if ( this->m_axisAdjusted )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovss  xmm6, dword ptr [rcx+1Ch]
      vmovaps [rsp+98h+var_28], xmm7
      vmovss  xmm7, dword ptr [rcx+24h]
      vmovaps [rsp+98h+var_38], xmm8
      vmovss  xmm8, dword ptr [rcx+20h]
      vmulss  xmm1, xmm8, xmm11
      vmulss  xmm0, xmm6, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm4
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm8, xmm2
      vaddss  xmm10, xmm0, xmm10
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm2, xmm6, xmm12
      vaddss  xmm9, xmm0, xmm4
      vmulss  xmm0, xmm14, xmm7
      vaddss  xmm11, xmm1, xmm11
      vmulss  xmm1, xmm13, xmm8
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm4, xmm3, xmm0
      vxorps  xmm2, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm2, xmm6
      vmovaps xmm6, [rsp+98h+var_18]
      vmulss  xmm1, xmm2, xmm8
      vmovaps xmm8, [rsp+98h+var_38]
      vaddss  xmm12, xmm0, xmm12
      vmulss  xmm0, xmm7, xmm2
      vmovaps xmm7, [rsp+98h+var_28]
      vaddss  xmm3, xmm0, xmm14
      vaddss  xmm13, xmm1, xmm13
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm3, xmm3, xmm3
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+98h+var_98]
    vmulss  xmm1, xmm10, xmm12
    vmovaps xmm10, [rsp+98h+var_58]
    vmovaps xmm12, [rsp+98h+var_78]
    vmulss  xmm0, xmm13, xmm11
    vmovaps xmm11, [rsp+98h+var_68]
    vmovaps xmm13, [rsp+98h+var_88]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm3
    vmovaps xmm9, [rsp+98h+var_48]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
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

