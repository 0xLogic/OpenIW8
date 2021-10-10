/*
==============
AIScriptedInterface::UpdateLookAtForNewAnim
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtForNewAnim(AIScriptedInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex)
{
  ?UpdateLookAtForNewAnim@AIScriptedInterface@@QEBAXPEBUAnimset@@HH@Z(this, pAnimset, stateIndex, entryIndex);
}

/*
==============
AIScriptedInterface::OnScrCmd_GlanceAtEntity
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_GlanceAtEntity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_GlanceAtEntity@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::SetGlanceEnt
==============
*/

void __fastcall AIScriptedInterface::SetGlanceEnt(AIScriptedInterface *this, const gentity_s *pEnt, AILookAtType lookatType, int intensity, int duration)
{
  ?SetGlanceEnt@AIScriptedInterface@@QEBAXPEBUgentity_s@@W4AILookAtType@@HH@Z(this, pEnt, lookatType, intensity, duration);
}

/*
==============
AIScriptedInterface::UpdateLookAtAim
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtAim(AIScriptedInterface *this)
{
  ?UpdateLookAtAim@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_GlanceAtPos
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_GlanceAtPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_GlanceAtPos@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::GetLookDownPathPos
==============
*/

bool __fastcall AIScriptedInterface::GetLookDownPathPos(AIScriptedInterface *this, vec3_t *outPos)
{
  return ?GetLookDownPathPos@AIScriptedInterface@@QEBA_NAEATvec3_t@@@Z(this, outPos);
}

/*
==============
AIScriptedInterface::SetLookAtPos
==============
*/

void __fastcall AIScriptedInterface::SetLookAtPos(AIScriptedInterface *this, const vec3_t *worldPos, AILookAtType lookAtType, int intensity)
{
  ?SetLookAtPos@AIScriptedInterface@@QEBAXAEBTvec3_t@@W4AILookAtType@@H@Z(this, worldPos, lookAtType, intensity);
}

/*
==============
AIScriptedInterface::ClearLookAtOverrideState
==============
*/

void __fastcall AIScriptedInterface::ClearLookAtOverrideState(AIScriptedInterface *this)
{
  ?ClearLookAtOverrideState@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableStateLookAt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_EnableStateLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_EnableStateLookAt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::setAnimLookAtRanges
==============
*/

void __fastcall AIScriptedInterface::setAnimLookAtRanges(AIScriptedInterface *this, float minPitch, float maxPitch, float minYaw, float maxYaw)
{
  ?setAnimLookAtRanges@AIScriptedInterface@@QEBAXMMMM@Z(this, minPitch, maxPitch, minYaw, maxYaw);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAnimLookAtRanges@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetAnimLookAtNeutralDir@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::UpdateGlanceAtPlayer
==============
*/

bool __fastcall AIScriptedInterface::UpdateGlanceAtPlayer(AIScriptedInterface *this)
{
  return ?UpdateGlanceAtPlayer@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateLookAtAnimParams
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtAnimParams(AIScriptedInterface *this)
{
  ?UpdateLookAtAnimParams@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::UpdateLookAtPos
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtPos(AIScriptedInterface *this)
{
  ?UpdateLookAtPos@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::CalcLookAtEyePos
==============
*/

void __fastcall AIScriptedInterface::CalcLookAtEyePos(AIScriptedInterface *this, vec3_t *outEyePos)
{
  ?CalcLookAtEyePos@AIScriptedInterface@@QEBAXAEATvec3_t@@@Z(this, outEyePos);
}

/*
==============
AIScriptedInterface::GetLookAtEntityNum
==============
*/

int __fastcall AIScriptedInterface::GetLookAtEntityNum(AIScriptedInterface *this)
{
  return ?GetLookAtEntityNum@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::SetLookAtEntity
==============
*/

void __fastcall AIScriptedInterface::SetLookAtEntity(AIScriptedInterface *this, int entNum, int intensity)
{
  ?SetLookAtEntity@AIScriptedInterface@@QEBAXHH@Z(this, entNum, intensity);
}

/*
==============
AIScriptedInterface::GetLookAtUpdateData
==============
*/

void __fastcall AIScriptedInterface::GetLookAtUpdateData(AIScriptedInterface *this, ActorLookAtUpdateData *data)
{
  ?GetLookAtUpdateData@AIScriptedInterface@@QEBAXAEAUActorLookAtUpdateData@@@Z(this, data);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAtStateOverride
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetLookAtStateOverride(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetLookAtStateOverride@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::GetLookAtPos
==============
*/

vec3_t *__fastcall AIScriptedInterface::GetLookAtPos(AIScriptedInterface *this)
{
  return ?GetLookAtPos@AIScriptedInterface@@QEBAAEATvec3_t@@XZ(this);
}

/*
==============
AIScriptedInterface::CanGlance
==============
*/

bool __fastcall AIScriptedInterface::CanGlance(AIScriptedInterface *this)
{
  return ?CanGlance@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateGlanceAtEnemy
==============
*/

bool __fastcall AIScriptedInterface::UpdateGlanceAtEnemy(AIScriptedInterface *this)
{
  return ?UpdateGlanceAtEnemy@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetCivilianFocus
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetCivilianFocus(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetCivilianFocus@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableScriptedLookAt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_EnableScriptedLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_EnableScriptedLookAt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::UpdateLookAtTracking
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtTracking(AIScriptedInterface *this)
{
  ?UpdateLookAtTracking@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetupLookAtForNotetrack
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetupLookAtForNotetrack(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetupLookAtForNotetrack@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::SetLookAtEntPos
==============
*/

void __fastcall AIScriptedInterface::SetLookAtEntPos(AIScriptedInterface *this, const gentity_s *pEnt, AILookAtType lookatType, int intensity)
{
  ?SetLookAtEntPos@AIScriptedInterface@@QEBAXPEBUgentity_s@@W4AILookAtType@@H@Z(this, pEnt, lookatType, intensity);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetLookAt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::SetLookAtOverrideState
==============
*/

void __fastcall AIScriptedInterface::SetLookAtOverrideState(AIScriptedInterface *this, unsigned __int8 state)
{
  ?SetLookAtOverrideState@AIScriptedInterface@@QEBAXE@Z(this, state);
}

/*
==============
AIScriptedInterface::SetGlancePos
==============
*/

void __fastcall AIScriptedInterface::SetGlancePos(AIScriptedInterface *this, const vec3_t *worldPos, AILookAtType lookatType, int intensity, int duration)
{
  ?SetGlancePos@AIScriptedInterface@@QEBAXAEBTvec3_t@@W4AILookAtType@@HH@Z(this, worldPos, lookatType, intensity, duration);
}

/*
==============
AIScriptedInterface::ShouldDoLookAtAim
==============
*/

bool __fastcall AIScriptedInterface::ShouldDoLookAtAim(AIScriptedInterface *this)
{
  return ?ShouldDoLookAtAim@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateLookAtTrackingState
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtTrackingState(AIScriptedInterface *this, const ActorLookAtUpdateData *data, float dtime)
{
  ?UpdateLookAtTrackingState@AIScriptedInterface@@QEBAXAEBUActorLookAtUpdateData@@M@Z(this, data, dtime);
}

/*
==============
AIScriptedInterface::StopLookAtPos
==============
*/

void __fastcall AIScriptedInterface::StopLookAtPos(AIScriptedInterface *this)
{
  ?StopLookAtPos@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAtEntity
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetLookAtEntity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetLookAtEntity@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::InitLookAt
==============
*/

void __fastcall AIScriptedInterface::InitLookAt(AIScriptedInterface *this)
{
  ?InitLookAt@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ClearLookAtEntity
==============
*/

void __fastcall AIScriptedInterface::ClearLookAtEntity(AIScriptedInterface *this)
{
  ?ClearLookAtEntity@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::setAnimLookAtNeutralDir
==============
*/

void __fastcall AIScriptedInterface::setAnimLookAtNeutralDir(AIScriptedInterface *this, float neutralPitch, float neutralYaw)
{
  ?setAnimLookAtNeutralDir@AIScriptedInterface@@QEBAXMM@Z(this, neutralPitch, neutralYaw);
}

/*
==============
AIScriptedInterface::OnScrCmd_StopLookAt
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_StopLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_StopLookAt@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::UpdateGlanceDownPath
==============
*/

bool __fastcall AIScriptedInterface::UpdateGlanceDownPath(AIScriptedInterface *this)
{
  return ?UpdateGlanceDownPath@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_ClearLookAtStateOverride
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ClearLookAtStateOverride(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_ClearLookAtStateOverride@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::CalcLookAtEyePos
==============
*/
void AIScriptedInterface::CalcLookAtEyePos(AIScriptedInterface *this, vec3_t *outEyePos)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float v4; 

  m_pAI = this->m_pAI;
  if ( m_pAI->lookAtInfo.verticalHeadOffset < 0.0 )
  {
    AIScriptedInterface::GetApproxEyePos(this, outEyePos, 0);
  }
  else
  {
    ent = m_pAI->ent;
    *(_QWORD *)outEyePos->v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
    v4 = ent->r.currentOrigin.v[2];
    outEyePos->v[2] = v4;
    outEyePos->v[2] = v4 + m_pAI->lookAtInfo.verticalHeadOffset;
  }
}

/*
==============
AIScriptedInterface::CanGlance
==============
*/
bool AIScriptedInterface::CanGlance(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1004, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  return !m_pAI->blackboard.m_bFire && !m_pAI->blackboard.m_bMeleeRequested && !m_pAI->blackboard.m_bMeleeChargeRequested && !this->IsInExecution(this) && !AIScriptedInterface::HasGrenadeDefined(this) && (!AIScriptedInterface::GetCoverNode(this) || this->m_pAI->blackboard.m_CoverState == scr_const.hide);
}

/*
==============
AIScriptedInterface::ClearLookAtEntity
==============
*/
void AIScriptedInterface::ClearLookAtEntity(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1151, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->lookAtInfo.lookAtEntNum = 2047;
  this->m_pAI->lookAtInfo.lookAtType[0] = 0;
}

/*
==============
AIScriptedInterface::ClearLookAtOverrideState
==============
*/
void AIScriptedInterface::ClearLookAtOverrideState(AIScriptedInterface *this)
{
  if ( this->m_pAI )
  {
    this->m_pAI->lookAtInfo.stateOverride = 8;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1217, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->lookAtInfo.stateOverride = 8;
  }
}

/*
==============
AIScriptedInterface::GetLookAtEntityNum
==============
*/
__int64 AIScriptedInterface::GetLookAtEntityNum(AIScriptedInterface *this)
{
  return (unsigned int)this->m_pAI->lookAtInfo.lookAtEntNum;
}

/*
==============
AIScriptedInterface::GetLookAtPos
==============
*/
ActorLookAtInfo *AIScriptedInterface::GetLookAtPos(AIScriptedInterface *this)
{
  return &this->m_pAI->lookAtInfo;
}

/*
==============
AIScriptedInterface::GetLookAtUpdateData
==============
*/
void AIScriptedInterface::GetLookAtUpdateData(AIScriptedInterface *this, ActorLookAtUpdateData *data)
{
  ai_scripted_t *m_pAI; 
  float v5; 
  const vec3_t *p_currentAngles; 
  vec3_t angles; 

  m_pAI = this->m_pAI;
  data->minYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[0];
  data->maxYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[1];
  data->minPitch = m_pAI->lookAtInfo.vLookAtPitchLimits.v[0];
  v5 = m_pAI->lookAtInfo.vLookAtPitchLimits.v[1];
  p_currentAngles = &m_pAI->ent->r.currentAngles;
  data->maxPitch = v5;
  AnglesToAxis(p_currentAngles, &data->tagOriginAxis);
  _XMM2 = LODWORD(this->m_pAI->lookAtInfo.vLookAtNeutralOffset.v[0]);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)angles.v = *(double *)&_XMM1;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &data->neutralAxis);
}

/*
==============
AIScriptedInterface::GetLookDownPathPos
==============
*/
__int64 AIScriptedInterface::GetLookDownPathPos(AIScriptedInterface *this, vec3_t *outPos)
{
  __int64 result; 
  __int64 v5; 
  __int64 v6; 
  ai_scripted_t *m_pAI; 
  float v8; 
  float v9; 
  unsigned __int8 v10; 
  int fmt; 
  vec3_t outEyePos; 
  float v13; 
  float v14; 
  float v15; 
  bfx::AreaHandle v16; 
  bfx::LinkHandle v17; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 81, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator", -2i64) )
    __debugbreak();
  result = ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasPath)(this->m_pAI->pNavigator);
  if ( (_BYTE)result )
  {
    bfx::AreaHandle::AreaHandle(&v16);
    bfx::LinkHandle::LinkHandle(&v17);
    LOBYTE(fmt) = 0;
    LOBYTE(v5) = 1;
    ((void (__fastcall *)(AINavigator *, __int64, __int64, float *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v6, v5, &v13, fmt);
    m_pAI = this->m_pAI;
    v8 = v14;
    v9 = v15;
    if ( (float)((float)((float)((float)(v14 - m_pAI->ent->r.currentOrigin.v[1]) * (float)(v14 - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(v13 - m_pAI->ent->r.currentOrigin.v[0]) * (float)(v13 - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(v15 - m_pAI->ent->r.currentOrigin.v[2]) * (float)(v15 - m_pAI->ent->r.currentOrigin.v[2]))) >= 6400.0 )
    {
      outPos->v[0] = v13;
      outPos->v[1] = v8;
      outPos->v[2] = v9;
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 1);
      outPos->v[2] = (float)((float)(outEyePos.v[2] - this->m_pAI->ent->r.currentOrigin.v[2]) + outPos->v[2]) - 6.0;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    bfx::LinkHandle::~LinkHandle(&v17);
    bfx::AreaHandle::~AreaHandle(&v16);
    return v10;
  }
  return result;
}

/*
==============
AIScriptedInterface::InitLookAt
==============
*/
void AIScriptedInterface::InitLookAt(AIScriptedInterface *this)
{
  float v2; 

  v2 = 0.0;
  this->m_pAI->lookAtInfo.lookAtEntNum = 2047;
  this->m_pAI->lookAtInfo.stateOverride = 8;
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = (vec2_t)LOBYTE(v2);
  this->m_pAI->lookAtInfo.curLookAtPitch = 0.0;
  this->m_pAI->lookAtInfo.curLookAtYaw = 0.0;
  this->m_pAI->lookAtInfo.curLookAtPitchVel = 0.0;
  this->m_pAI->lookAtInfo.curLookAtYawVel = 0.0;
  this->m_pAI->lookAtInfo.targetLookAtPitch = 0.0;
  this->m_pAI->lookAtInfo.targetLookAtYaw = 0.0;
  this->m_pAI->lookAtInfo.lastTime = (float)G_Main_GetTime();
  this->m_pAI->lookAtInfo.backZoneTime = 0.0;
  this->m_pAI->lookAtInfo.verticalHeadOffset = -1.0;
  this->m_pAI->lookAtInfo.lookAtVignetteName = 0;
  this->m_pAI->lookAtInfo.lookAtIntensity = 0;
  this->m_pAI->lookAtInfo.bDisableStateLookAt = 0;
  this->m_pAI->lookAtInfo.bDisableScriptedLookAt = 0;
}

/*
==============
AIScriptedInterface::OnScrCmd_ClearLookAtStateOverride
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ClearLookAtStateOverride(AIScriptedInterface *this, scrContext_t *scrContext)
{
  AIScriptedInterface::ClearLookAtOverrideState(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableScriptedLookAt
==============
*/
void AIScriptedInterface::OnScrCmd_EnableScriptedLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  int Int; 

  Int = 1;
  if ( Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) != VAR_INTEGER )
  {
    if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    {
      Scr_Error(COM_ERR_6048, scrContext, "EnableScriptedLookAt requires the optional argument to be an integer");
      return;
    }
    Int = Scr_GetInt(scrContext, 0);
  }
  this->m_pAI->lookAtInfo.bDisableScriptedLookAt = Int == 0;
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableStateLookAt
==============
*/
void AIScriptedInterface::OnScrCmd_EnableStateLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  unsigned __int8 Int; 
  int v5; 
  unsigned int NumParam; 

  Int = 0;
  v5 = 1;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    if ( NumParam != 2 )
      goto LABEL_9;
    if ( Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    {
      Scr_Error(COM_ERR_6047, scrContext, "EnableStateLookAt requires the second optional argument to be an integer");
      return;
    }
    Int = Scr_GetInt(scrContext, 1u);
  }
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
  {
    Scr_Error(COM_ERR_6046, scrContext, "EnableStateLookAt requires the first optional argument to be an integer");
    return;
  }
  v5 = Scr_GetInt(scrContext, 0);
LABEL_9:
  this->m_pAI->lookAtInfo.lookAtIntensity = Int;
  this->m_pAI->lookAtInfo.bDisableStateLookAt = v5 == 0;
}

/*
==============
AIScriptedInterface::OnScrCmd_GlanceAtEntity
==============
*/
void AIScriptedInterface::OnScrCmd_GlanceAtEntity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const gentity_s *Entity; 
  int duration; 
  int Int; 
  AILookAtType v7; 

  Entity = GScr_GetEntity(0);
  duration = 550;
  Int = 1;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    duration = Scr_GetInt(scrContext, 1u);
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) )
    Int = Scr_GetInt(scrContext, 2u);
  LOBYTE(v7) = 2;
  AIScriptedInterface::SetGlanceEnt(this, Entity, v7, Int, duration);
}

/*
==============
AIScriptedInterface::OnScrCmd_GlanceAtPos
==============
*/
void AIScriptedInterface::OnScrCmd_GlanceAtPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  int Int; 
  ai_scripted_t *m_pAI; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Int = 550;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    Int = Scr_GetInt(scrContext, 1u);
  this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
  this->m_pAI->lookAtInfo.glanceEndTime = Int + level.time;
  this->m_pAI->lookAtInfo.lookAtType[0] = 1;
  m_pAI = this->m_pAI;
  m_pAI->lookAtInfo.vLookAtPos = vectorValue;
  m_pAI->lookAtInfo.lookAtIntensity = 1;
  this->m_pAI->lookAtInfo.lookAtType[0] = 1;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir
==============
*/
void AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir(AIScriptedInterface *this, scrContext_t *scrContext)
{
  double Float; 
  double v5; 
  vec2_t v6; 

  if ( Scr_GetNumParam(scrContext) != 6 )
    Scr_Error(COM_ERR_5765, scrContext, "Invalid parameter count, requires 6 floats (pitch_min, pitch_max, yaw_min, yaw_max, neutral_pitch, neutral_yaw)");
  Float = Scr_GetFloat(scrContext, 4u);
  v6.v[0] = *(float *)&Float;
  v5 = Scr_GetFloat(scrContext, 5u);
  v6.v[1] = *(float *)&v5;
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = v6;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges
==============
*/
void AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges(AIScriptedInterface *this, scrContext_t *scrContext)
{
  double Float; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  vec2_t v11; 

  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5764, scrContext, "Invalid parameter count, requires 4 floats (pitch_min, pitch_max, yaw_min, yaw_max )");
  Float = Scr_GetFloat(scrContext, 0);
  v5 = *(float *)&Float;
  v6 = Scr_GetFloat(scrContext, 1u);
  v7 = *(float *)&v6;
  v8 = Scr_GetFloat(scrContext, 2u);
  v9 = *(float *)&v8;
  v10 = Scr_GetFloat(scrContext, 3u);
  v11.v[0] = v5;
  v11.v[1] = v7;
  this->m_pAI->lookAtInfo.vLookAtPitchLimits = v11;
  v11.v[0] = v9;
  v11.v[1] = *(float *)&v10;
  this->m_pAI->lookAtInfo.vLookAtYawLimits = v11;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetCivilianFocus
==============
*/
void AIScriptedInterface::OnScrCmd_SetCivilianFocus(AIScriptedInterface *this, scrContext_t *scrContext)
{
  double Float; 

  if ( Scr_GetNumParam(scrContext) && Scr_GetType(scrContext, 0) )
  {
    Float = Scr_GetFloat(scrContext, 0);
    this->m_pAI->animData.civilianFocus = *(float *)&Float;
  }
  else
  {
    Scr_Error(COM_ERR_1776, scrContext, "SetCivilianFocus requires a focus parameter between -1 and 1");
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAt
==============
*/
void AIScriptedInterface::OnScrCmd_SetLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  unsigned __int8 v4; 
  unsigned int Int; 
  ai_scripted_t *m_pAI; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  v4 = 0;
  if ( Scr_GetNumParam(scrContext) > 1 )
  {
    Int = Scr_GetInt(scrContext, 1u);
    v4 = Int;
    if ( Int >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1142, ASSERT_TYPE_ASSERT, "(unsigned)( intensity ) < (unsigned)( static_cast<int>(AILookAtIntensity::NUM_LOOKAT_INTENSITIES) )", "intensity doesn't index static_cast<int>(AILookAtIntensity::NUM_LOOKAT_INTENSITIES)\n\t%i not in [0, %i)", Int, 2) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  m_pAI->lookAtInfo.vLookAtPos = vectorValue;
  m_pAI->lookAtInfo.lookAtIntensity = v4;
  this->m_pAI->lookAtInfo.lookAtType[0] = 7;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAtEntity
==============
*/
void AIScriptedInterface::OnScrCmd_SetLookAtEntity(AIScriptedInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 
  gentity_s *Entity; 
  unsigned __int8 Int; 
  int number; 

  if ( Scr_GetNumParam(scrContext) )
  {
    v4 = this->GetEntity(this);
    Entity = GScr_GetEntity(0);
    Int = 0;
    if ( Scr_GetNumParam(scrContext) > 1 )
      Int = Scr_GetInt(scrContext, 1u);
    if ( v4->s.number == Entity->s.number || Entity->s.number == 2046 )
    {
      AIScriptedInterface::ClearLookAtEntity(this);
    }
    else
    {
      this->m_pAI->lookAtInfo.lookAtType[0] = 0;
      number = Entity->s.number;
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1159, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      this->m_pAI->lookAtInfo.lookAtEntNum = number;
      this->m_pAI->lookAtInfo.lookAtType[0] = 8;
      this->m_pAI->lookAtInfo.lookAtIntensity = Int;
    }
  }
  else
  {
    AIScriptedInterface::ClearLookAtEntity(this);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetLookAtStateOverride
==============
*/
void AIScriptedInterface::OnScrCmd_SetLookAtStateOverride(AIScriptedInterface *this, scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  unsigned __int8 StateId; 

  if ( Scr_GetNumParam(scrContext) && Scr_GetType(scrContext, 0) )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    StateId = BG_LookAt_GetStateId(ConstString);
    if ( StateId == 8 )
      Scr_Error(COM_ERR_1775, scrContext, "Invalid state passed to SetLookAtStateOverride");
    if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1208, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->lookAtInfo.stateOverride = StateId;
  }
  else
  {
    AIScriptedInterface::ClearLookAtOverrideState(this);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_SetupLookAtForNotetrack
==============
*/
void AIScriptedInterface::OnScrCmd_SetupLookAtForNotetrack(AIScriptedInterface *this, scrContext_t *scrContext)
{
  DObjAnimMat *LocalTagMatrix; 
  DObjAnimMat *v4; 
  ai_scripted_t *m_pAI; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  LocalTagMatrix = G_Utils_DObjGetLocalTagMatrix(this->m_pAI->ent, scr_const.j_head);
  v4 = LocalTagMatrix;
  if ( LocalTagMatrix )
  {
    QuatToAxis(&LocalTagMatrix->quat, &axis);
    LODWORD(axis.m[2].v[0]) = LODWORD(axis.m[1].v[0]) ^ _xmm;
    LODWORD(axis.m[2].v[2]) = LODWORD(axis.m[1].v[2]) ^ _xmm;
    LODWORD(axis.m[2].v[1]) = LODWORD(axis.m[1].v[1]) ^ _xmm;
    vectoangles(&axis.m[2], &angles);
    m_pAI = this->m_pAI;
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    m_pAI->lookAtInfo.vLookAtNeutralOffset.v[0] = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
    __asm { vroundss xmm3, xmm7, xmm2, 1 }
    m_pAI->lookAtInfo.vLookAtNeutralOffset.v[1] = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
    m_pAI->lookAtInfo.verticalHeadOffset = v4->trans.v[2] + 5.0;
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_StopLookAt
==============
*/
void AIScriptedInterface::OnScrCmd_StopLookAt(AIScriptedInterface *this, scrContext_t *scrContext)
{
  this->m_pAI->lookAtInfo.lookAtType[0] = 0;
  AIScriptedInterface::ClearLookAtEntity(this);
}

/*
==============
AIScriptedInterface::SetGlanceEnt
==============
*/
void AIScriptedInterface::SetGlanceEnt(AIScriptedInterface *this, const gentity_s *pEnt, AILookAtType lookatType, int intensity, int duration)
{
  unsigned __int8 v5; 
  char v6; 

  v5 = intensity;
  v6 = lookatType;
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 48, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( (unsigned __int8)(v6 - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 49, ASSERT_TYPE_ASSERT, "( lookatType >= AILookAtType::FIRST_GLANCE_TYPE && lookatType <= AILookAtType::LAST_GLANCE_TYPE )", (const char *)&queryFormat, "lookatType >= AILookAtType::FIRST_GLANCE_TYPE && lookatType <= AILookAtType::LAST_GLANCE_TYPE") )
    __debugbreak();
  this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
  this->m_pAI->lookAtInfo.glanceEndTime = duration + level.time;
  this->m_pAI->lookAtInfo.lookAtType[0] = v6;
  this->m_pAI->lookAtInfo.lookAtEntNum = pEnt->s.number;
  this->m_pAI->lookAtInfo.lookAtIntensity = v5;
}

/*
==============
AIScriptedInterface::SetGlancePos
==============
*/
void AIScriptedInterface::SetGlancePos(AIScriptedInterface *this, const vec3_t *worldPos, AILookAtType lookatType, int intensity, int duration)
{
  char v5; 
  unsigned __int8 v6; 
  ai_scripted_t *m_pAI; 

  v5 = lookatType;
  v6 = intensity;
  if ( (unsigned __int8)(lookatType - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 62, ASSERT_TYPE_ASSERT, "( lookatType >= AILookAtType::FIRST_GLANCE_TYPE && lookatType <= AILookAtType::LAST_GLANCE_TYPE )", (const char *)&queryFormat, "lookatType >= AILookAtType::FIRST_GLANCE_TYPE && lookatType <= AILookAtType::LAST_GLANCE_TYPE") )
    __debugbreak();
  this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
  this->m_pAI->lookAtInfo.glanceEndTime = duration + level.time;
  this->m_pAI->lookAtInfo.lookAtType[0] = v5;
  m_pAI = this->m_pAI;
  m_pAI->lookAtInfo.vLookAtPos.v[0] = worldPos->v[0];
  m_pAI->lookAtInfo.vLookAtPos.v[1] = worldPos->v[1];
  m_pAI->lookAtInfo.vLookAtPos.v[2] = worldPos->v[2];
  m_pAI->lookAtInfo.lookAtIntensity = v6;
  this->m_pAI->lookAtInfo.lookAtType[0] = v5;
}

/*
==============
AIScriptedInterface::SetLookAtEntPos
==============
*/
void AIScriptedInterface::SetLookAtEntPos(AIScriptedInterface *this, const gentity_s *pEnt, AILookAtType lookatType, int intensity)
{
  char v4; 
  unsigned __int8 v5; 
  gclient_s *client; 
  __int64 v9; 
  AIScriptedInterface *v10; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  AIActorInterface v14; 
  AIAgentInterface v15; 
  AIScriptedInterface *v16; 
  vec3_t outEyePos; 

  v4 = lookatType;
  v5 = intensity;
  if ( (((_BYTE)lookatType - 2) & 0xF9) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 967, ASSERT_TYPE_ASSERT, "( lookatType == AILookAtType::GLANCE_SCRIPT_ENT || lookatType == AILookAtType::LOOK_SCRIPT_ENT || lookatType == AILookAtType::GLANCE_AUTO_ENEMY || lookatType == AILookAtType::GLANCE_AUTO_ENT )", (const char *)&queryFormat, "lookatType == AILookAtType::GLANCE_SCRIPT_ENT || lookatType == AILookAtType::LOOK_SCRIPT_ENT || lookatType == AILookAtType::GLANCE_AUTO_ENEMY || lookatType == AILookAtType::GLANCE_AUTO_ENT") )
    __debugbreak();
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 968, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  client = pEnt->client;
  if ( client )
  {
    v9 = *(_QWORD *)pEnt->r.currentOrigin.v;
    outEyePos.v[1] = *((float *)&v9 + 1);
    outEyePos.v[0] = *(float *)&v9;
    outEyePos.v[2] = (float)(client->ps.viewHeightCurrent + pEnt->r.currentOrigin.v[2]) - 3.0;
    goto LABEL_27;
  }
  AIActorInterface::AIActorInterface(&v14);
  AIAgentInterface::AIAgentInterface(&v15);
  v10 = NULL;
  v15.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v16 = NULL;
  if ( pEnt->agent )
  {
    if ( SV_Agent_IsScripted(pEnt->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(pEnt);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v15, ScriptedAgentInfo);
      v16 = &v15;
      AIScriptedInterface::GetApproxEyePos(&v15, &outEyePos, 0);
      goto LABEL_27;
    }
    v10 = v16;
  }
  actor = pEnt->actor;
  if ( actor )
  {
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v14, pEnt->actor);
    v16 = &v14;
    AIScriptedInterface::GetApproxEyePos(&v14, &outEyePos, 0);
  }
  else if ( v10 )
  {
    AIScriptedInterface::GetApproxEyePos(v10, &outEyePos, 0);
  }
  else
  {
    G_Utils_EntityCentroid(pEnt, &outEyePos);
  }
LABEL_27:
  m_pAI = this->m_pAI;
  m_pAI->lookAtInfo.vLookAtPos = outEyePos;
  m_pAI->lookAtInfo.lookAtIntensity = v5;
  this->m_pAI->lookAtInfo.lookAtType[0] = v4;
  this->m_pAI->lookAtInfo.lookAtEntNum = pEnt->s.number;
}

/*
==============
AIScriptedInterface::SetLookAtEntity
==============
*/
void AIScriptedInterface::SetLookAtEntity(AIScriptedInterface *this, int entNum, int intensity)
{
  unsigned __int8 v3; 

  v3 = intensity;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1159, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->lookAtInfo.lookAtEntNum = entNum;
  this->m_pAI->lookAtInfo.lookAtType[0] = 8;
  this->m_pAI->lookAtInfo.lookAtIntensity = v3;
}

/*
==============
AIScriptedInterface::SetLookAtOverrideState
==============
*/
void AIScriptedInterface::SetLookAtOverrideState(AIScriptedInterface *this, unsigned __int8 state)
{
  if ( this->m_pAI )
  {
    this->m_pAI->lookAtInfo.stateOverride = state;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1208, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->lookAtInfo.stateOverride = state;
  }
}

/*
==============
AIScriptedInterface::SetLookAtPos
==============
*/
void AIScriptedInterface::SetLookAtPos(AIScriptedInterface *this, const vec3_t *worldPos, AILookAtType lookAtType, int intensity)
{
  ai_scripted_t *m_pAI; 

  m_pAI = this->m_pAI;
  m_pAI->lookAtInfo.vLookAtPos = *worldPos;
  m_pAI->lookAtInfo.lookAtIntensity = intensity;
  this->m_pAI->lookAtInfo.lookAtType[0] = lookAtType;
}

/*
==============
AIScriptedInterface::ShouldDoLookAtAim
==============
*/
bool AIScriptedInterface::ShouldDoLookAtAim(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scr_string_t baseArchetype; 
  char v4; 
  bool v5; 
  bool v6; 
  float *p_desiredSpeed; 
  double AnimSpeedBetweenThresholdEntries; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 

  m_pAI = this->m_pAI;
  baseArchetype = m_pAI->baseArchetype;
  v4 = m_pAI->lookAtInfo.lookAtType[0];
  v5 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.fast);
  v6 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.jog);
  v9 = 0;
  if ( v5 && v6 )
  {
    p_desiredSpeed = &this->m_pAI->animData.desiredSpeed;
    AnimSpeedBetweenThresholdEntries = GetAnimSpeedBetweenThresholdEntries(baseArchetype, scr_const.fast, scr_const.jog, 0.40000001);
    if ( *(float *)&AnimSpeedBetweenThresholdEntries > *p_desiredSpeed )
      v9 = 1;
  }
  v10 = this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this);
  v11 = AIScriptedInterface::IsOnStairs(this);
  v12 = v10 || v9 || v11;
  return this->m_pAI->animData.aimActive && v12 && ((unsigned __int8)(v4 - 9) <= 1u || !v4);
}

/*
==============
AIScriptedInterface::StopLookAtPos
==============
*/
void AIScriptedInterface::StopLookAtPos(AIScriptedInterface *this)
{
  this->m_pAI->lookAtInfo.lookAtType[0] = 0;
}

/*
==============
AIScriptedInterface::UpdateGlanceAtEnemy
==============
*/
char AIScriptedInterface::UpdateGlanceAtEnemy(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float *v; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v13; 
  AILookAtType v17; 
  AILookAtType v18; 
  vec3_t forward; 

  v1 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DVARINT_ai_glanceGenericCooldown;
  if ( !DVARINT_ai_glanceGenericCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceGenericCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return 0;
  m_pAI = this->m_pAI;
  if ( level.time - m_pAI->iLastSetEnemyTime > 50 )
    return 0;
  if ( level.time - m_pAI->lookAtInfo.timeOfLastGlance < v5 )
    return 0;
  ent = m_pAI->ent;
  v = TargetSentient->ent->r.currentOrigin.v;
  v11 = *(unsigned int *)v;
  v10 = *v - ent->r.currentOrigin.v[0];
  v12 = TargetSentient->ent->r.currentOrigin.v[2] - ent->r.currentOrigin.v[2];
  v13 = TargetSentient->ent->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
  AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
  *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v13 * v13)) + (float)(v12 * v12));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  if ( (float)((float)((float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0]) + (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1])) + (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[2])) >= 0.866 || !AICommonInterface::CanSeeEnemy(this) )
    return 0;
  LOBYTE(v17) = 4;
  AIScriptedInterface::SetGlanceEnt(this, TargetSentient->ent, v17, this->m_pAI->lookAtInfo.lookAtIntensity, integer);
  LOBYTE(v18) = 4;
  AIScriptedInterface::SetLookAtEntPos(this, TargetSentient->ent, v18, this->m_pAI->lookAtInfo.lookAtIntensity);
  return 1;
}

/*
==============
AIScriptedInterface::UpdateGlanceAtPlayer
==============
*/
char AIScriptedInterface::UpdateGlanceAtPlayer(AIScriptedInterface *this)
{
  __int128 v1; 
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  gentity_s *ClosestPlayerOnTeam; 
  const gentity_s *v11; 
  ai_scripted_t *m_pAI; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v31; 
  int bInCombat; 
  int v33; 
  AILookAtType v34; 
  int v35; 
  vec3_t v37; 
  vec3_t forward; 
  __int128 v39; 

  v2 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v5 = DVARINT_ai_glanceLongDuration;
  if ( !DVARINT_ai_glanceLongDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceLongDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.integer;
  v7 = DVARINT_ai_glancePlayerCooldown;
  if ( !DVARINT_ai_glancePlayerCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glancePlayerCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  v9 = DVARFLT_ai_glancePlayerDist;
  if ( !DVARFLT_ai_glancePlayerDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glancePlayerDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( level.time - this->m_pAI->lookAtInfo.timeOfLastGlance < v8 )
    return 0;
  ClosestPlayerOnTeam = AIScriptedInterface::GetClosestPlayerOnTeam(this, v9->current.value);
  v11 = ClosestPlayerOnTeam;
  if ( !ClosestPlayerOnTeam )
    return 0;
  m_pAI = this->m_pAI;
  v39 = v1;
  v13 = m_pAI->ent->r.currentOrigin.v[0] - ClosestPlayerOnTeam->r.currentOrigin.v[0];
  v15 = LODWORD(m_pAI->ent->r.currentOrigin.v[1]);
  v14 = m_pAI->ent->r.currentOrigin.v[1] - ClosestPlayerOnTeam->r.currentOrigin.v[1];
  *(float *)&v15 = fsqrt((float)(v14 * v14) + (float)(v13 * v13));
  _XMM3 = v15;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v19 = v13 * (float)(1.0 / *(float *)&_XMM0);
  v20 = v14 * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors(&ClosestPlayerOnTeam->r.currentAngles, &forward, NULL, NULL);
  AngleVectors(&this->m_pAI->ent->r.currentAngles, &v37, NULL, NULL);
  v21 = LODWORD(v37.v[0]);
  *(float *)&v21 = fsqrt((float)(*(float *)&v21 * *(float *)&v21) + (float)(v37.v[1] * v37.v[1]));
  _XMM2 = v21;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm7, xmm0
  }
  v25 = v37.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v26 = v37.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v27 = LODWORD(forward.v[0]);
  *(float *)&v27 = fsqrt((float)(*(float *)&v27 * *(float *)&v27) + (float)(forward.v[1] * forward.v[1]));
  _XMM2 = v27;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm7, xmm0
  }
  v31 = (float)(forward.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v20;
  forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v37.v[0] = v25;
  v37.v[1] = v26;
  forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
  if ( (float)(v31 + (float)(forward.v[0] * v19)) < 0.89999998 || (float)((float)(v19 * v25) + (float)(v20 * v26)) > -0.175 )
    return 0;
  bInCombat = this->m_pAI->combat.bInCombat;
  v33 = G_irand(-50, 200);
  if ( this->m_pAI->combat.bInCombat )
    v6 = integer;
  v35 = v6 + v33;
  if ( v6 + v33 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 381, ASSERT_TYPE_ASSERT, "(glanceDuration > 0)", (const char *)&queryFormat, "glanceDuration > 0") )
    __debugbreak();
  LOBYTE(v34) = 6;
  AIScriptedInterface::SetGlanceEnt(this, v11, v34, bInCombat, v35);
  return 1;
}

/*
==============
AIScriptedInterface::UpdateGlanceDownPath
==============
*/
char AIScriptedInterface::UpdateGlanceDownPath(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  ai_scripted_t *m_pAI; 
  __int64 v12; 
  ai_scripted_t *v13; 
  gentity_s *ent; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v21; 
  AILookAtType v22; 
  __int128 v23; 
  ai_scripted_t *v28; 
  float v29; 
  ai_scripted_t *v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  AILookAtType v37; 
  ai_scripted_t *v38; 
  int lookAtIntensity; 
  vec3_t forward; 
  vec3_t worldPos; 
  float v42; 
  float v43; 

  v1 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DVARINT_ai_glanceLongDuration;
  if ( !DVARINT_ai_glanceLongDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceLongDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DVARINT_ai_glanceGenericCooldown;
  if ( !DVARINT_ai_glanceGenericCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceGenericCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v8 = DVARINT_ai_glanceStairsCooldown;
  if ( !DVARINT_ai_glanceStairsCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator->HasPath(this->m_pAI->pNavigator) || this->m_pAI->arrivalInfo.arriving )
    return 0;
  this->GetVelocity(this, (vec3_t *)&v42);
  v10 = DVARFLT_ai_glanceStairsLookDist;
  if ( (float)((float)(v42 * v42) + (float)(v43 * v43)) < 40000.0 )
  {
    if ( !DVARFLT_ai_glanceStairsLookDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsLookDist") )
      __debugbreak();
  }
  else if ( !DVARFLT_ai_glanceStairsLookDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsLookDist") )
  {
    __debugbreak();
  }
  Dvar_CheckFrontendServerThread(v10);
  m_pAI = this->m_pAI;
  if ( level.time != m_pAI->pNavigator->m_TimeOfLastPathUpdate && (level.time - m_pAI->lookAtInfo.timeOfLastGlance < v7 || m_pAI->orientation.faceMotion) )
  {
    if ( m_pAI->orientation.faceMotion && !AIScriptedInterface::IsOnStairs(this) )
    {
      if ( ((unsigned int (__fastcall *)(AINavigator *, __int64, vec3_t *))this->m_pAI->pNavigator->GetStairsStateAtDist)(this->m_pAI->pNavigator, v12, &worldPos) && (v13 = this->m_pAI, level.time - v13->lookAtInfo.timeOfLastStairGlance >= v9) )
      {
        ent = v13->ent;
        v16 = LODWORD(worldPos.v[1]);
        v15 = worldPos.v[1] - ent->r.currentOrigin.v[1];
        v17 = worldPos.v[0] - ent->r.currentOrigin.v[0];
        *(float *)&v16 = fsqrt((float)(v15 * v15) + (float)(v17 * v17));
        _XMM3 = v16;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        v21 = 1.0 / *(float *)&_XMM0;
        AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
        v23 = LODWORD(forward.v[0]);
        *(float *)&v23 = fsqrt((float)(*(float *)&v23 * *(float *)&v23) + (float)(forward.v[1] * forward.v[1]));
        _XMM2 = v23;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm7, xmm0
        }
        *(float *)&_XMM3 = (float)(v15 * v21) * (float)(forward.v[1] * (float)(1.0 / *(float *)&_XMM0));
        forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
        forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
        if ( (float)(*(float *)&_XMM3 + (float)((float)(v17 * v21) * forward.v[0])) >= 0.70700002 )
        {
          LOBYTE(v22) = 5;
          this->m_pAI->lookAtInfo.timeOfLastStairGlance = level.time;
          AIScriptedInterface::SetGlancePos(this, &worldPos, v22, this->m_pAI->combat.bInCombat, v5);
          return 1;
        }
      }
      else if ( AIScriptedInterface::GetLookDownPathPos(this, &forward) )
      {
        v28 = this->m_pAI;
        v29 = forward.v[1];
        v28->lookAtInfo.vLookAtPos.v[0] = forward.v[0];
        v28->lookAtInfo.vLookAtPos.v[2] = forward.v[2];
        v28->lookAtInfo.vLookAtPos.v[1] = v29;
        v28->lookAtInfo.lookAtIntensity = 1;
        this->m_pAI->lookAtInfo.lookAtType[0] = 9;
        return 1;
      }
    }
    return 0;
  }
  if ( !AIScriptedInterface::GetLookDownPathPos(this, &worldPos) )
    return 0;
  v30 = this->m_pAI;
  v31 = worldPos.v[0] - v30->ent->r.currentOrigin.v[0];
  v33 = LODWORD(worldPos.v[1]);
  v32 = worldPos.v[1] - v30->ent->r.currentOrigin.v[1];
  *(float *)&v33 = fsqrt((float)(v32 * v32) + (float)(v31 * v31));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  AngleVectors(&v30->ent->r.currentAngles, &forward, NULL, NULL);
  if ( (float)((float)((float)(v32 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)((float)(v31 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0])) >= 0.70700002 )
    return 0;
  v38 = this->m_pAI;
  lookAtIntensity = 1;
  if ( !v38->combat.bInCombat )
    lookAtIntensity = v38->lookAtInfo.lookAtIntensity;
  LOBYTE(v37) = 3;
  AIScriptedInterface::SetGlancePos(this, &worldPos, v37, lookAtIntensity, integer);
  return 1;
}

/*
==============
AIScriptedInterface::UpdateLookAtAim
==============
*/
void AIScriptedInterface::UpdateLookAtAim(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scr_string_t AnimsetName; 
  ai_scripted_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  gentity_s *ent; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t outEyePos; 
  vec3_t angles; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  m_pAI = this->m_pAI;
  _XMM1 = LODWORD(m_pAI->animData.aimPitch);
  outEyePos.v[2] = 0.0;
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  *(double *)angles.v = *(double *)&_XMM0;
  angles.v[2] = 0.0;
  AnimsetName = BG_AnimationState_GetAnimsetName(&m_pAI->ent->s);
  if ( AnimsetName == scr_const.boss || AnimsetName == scr_const.boss2 )
  {
    angles.v[0] = angles.v[0] - hometownBossPitchOffset;
    angles.v[1] = angles.v[1] + hometownBossYawOffset;
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
  v6 = this->m_pAI;
  v7 = (float)((float)(axis.m[0].v[0] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[0])) + (float)(forward.v[2] * axis.m[2].v[0]);
  v8 = (float)((float)(axis.m[0].v[1] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[1])) + (float)(forward.v[2] * axis.m[2].v[1]);
  v9 = (float)((float)(axis.m[0].v[2] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[2])) + (float)(forward.v[2] * axis.m[2].v[2]);
  if ( v6->lookAtInfo.verticalHeadOffset < 0.0 )
  {
    AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
    v6 = this->m_pAI;
    v13 = outEyePos.v[2];
    v12 = outEyePos.v[1];
    v11 = outEyePos.v[0];
  }
  else
  {
    ent = v6->ent;
    v11 = v6->ent->r.currentOrigin.v[0];
    outEyePos.v[0] = v11;
    v12 = ent->r.currentOrigin.v[1];
    outEyePos.v[1] = v12;
    v13 = ent->r.currentOrigin.v[2] + v6->lookAtInfo.verticalHeadOffset;
  }
  v6->lookAtInfo.vLookAtPos.v[0] = v7 + v11;
  v6->lookAtInfo.vLookAtPos.v[1] = v8 + v12;
  v6->lookAtInfo.vLookAtPos.v[2] = v9 + v13;
  v6->lookAtInfo.lookAtIntensity = 1;
  this->m_pAI->lookAtInfo.lookAtType[0] = 10;
}

/*
==============
AIScriptedInterface::UpdateLookAtAnimParams
==============
*/
void AIScriptedInterface::UpdateLookAtAnimParams(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  unsigned __int8 v3; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  ai_scripted_t *v6; 
  char v7; 
  __int64 v11; 
  __int64 v12; 
  vec3_t xyz; 
  vec3_t outEyePos; 

  v1 = DVARBOOL_ai_debugAutoLookAt;
  if ( !DVARBOOL_ai_debugAutoLookAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAutoLookAt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = this->m_pAI->lookAtInfo.lookAtType[0];
    if ( v3 )
    {
      if ( v3 >= 0xBu )
      {
        LODWORD(v12) = 11;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 895, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->lookAtInfo.lookAtType ) < (unsigned)( AILookAtType::AI_LOOK_AT_TYPE_COUNT )", "m_pAI->lookAtInfo.lookAtType doesn't index AILookAtType::AI_LOOK_AT_TYPE_COUNT\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      m_pAI = this->m_pAI;
      ent = m_pAI->ent;
      *(_QWORD *)xyz.v = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
      xyz.v[2] = ent->r.currentOrigin.v[2] - 16.0;
      G_Main_AddDebugString(&xyz, &colorLtYellow, 0.80000001, g_lookAtTypeStrings[(unsigned __int8)m_pAI->lookAtInfo.lookAtType[0]]);
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
      G_DebugLine(&outEyePos, &this->m_pAI->lookAtInfo.vLookAtPos, &colorMagenta, 0);
    }
  }
  v6 = this->m_pAI;
  if ( v6->animData.gunAdditiveIndex == 2 || (v7 = 1, v6->animData.aimActive) )
    v7 = 2;
  v6->animData.lookAtState = v7;
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_STATE);
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  this->m_pAI->animData.lookAtPitch = (float)((float)(0.0027777778 * this->m_pAI->lookAtInfo.curLookAtPitch) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  this->m_pAI->animData.lookAtYaw = (float)((float)(0.0027777778 * this->m_pAI->lookAtInfo.curLookAtYaw) - *(float *)&_XMM3) * 360.0;
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_PITCH);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_YAW);
}

/*
==============
AIScriptedInterface::UpdateLookAtForNewAnim
==============
*/
void AIScriptedInterface::UpdateLookAtForNewAnim(AIScriptedInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex)
{
  AnimsetState *v7; 
  float lookAtMaxPitch; 
  float lookAtMaxYaw; 
  float lookAtMinYaw; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v12; 
  ai_scripted_t *v13; 
  float lookAtNeutralYaw; 
  int number; 
  Ai_Asm *v16; 
  const ASM_Instance *Instance; 
  AnimsetState *outState; 
  vec2_t v19; 
  AnimsetState *v20; 

  BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState);
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 549, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( pAnimset && BG_Animset_GetAddonFromState(pAnimset, outState, entryIndex, ANIMSTATE_LOOKSET, &v20) )
  {
    v7 = v20;
    if ( !v20 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 553, ASSERT_TYPE_ASSERT, "(pLookAtState)", (const char *)&queryFormat, "pLookAtState") )
        __debugbreak();
      v7 = v20;
    }
    lookAtMaxPitch = v7->lookAtMaxPitch;
    lookAtMaxYaw = v7->lookAtMaxYaw;
    lookAtMinYaw = v7->lookAtMinYaw;
    m_pAI = this->m_pAI;
    v19.v[0] = v7->lookAtMinPitch;
    v19.v[1] = lookAtMaxPitch;
    m_pAI->lookAtInfo.vLookAtPitchLimits = v19;
    v12 = this->m_pAI;
    v19.v[0] = lookAtMinYaw;
    v19.v[1] = lookAtMaxYaw;
    v12->lookAtInfo.vLookAtYawLimits = v19;
    v13 = this->m_pAI;
    lookAtNeutralYaw = v20->lookAtNeutralYaw;
    v19.v[0] = v20->lookAtNeutralPitch;
    v19.v[1] = lookAtNeutralYaw;
    v13->lookAtInfo.vLookAtNeutralOffset = v19;
    this->m_pAI->lookAtInfo.bDisableStateLookAt = 0;
    number = this->m_pAI->ent->s.number;
    v16 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v16, NULL, number);
    if ( Instance )
      this->m_pAI->lookAtInfo.bLookAtWaitingForAimStart = Common_Asm::Utils::CurrentStateHasFlag(Instance, (const scr_string_t)scr_const.notetrackaim);
  }
}

/*
==============
AIScriptedInterface::UpdateLookAtPos
==============
*/
void AIScriptedInterface::UpdateLookAtPos(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  float value; 
  ai_scripted_t *m_pAI; 
  char v5; 
  bool CanGlance; 
  ai_scripted_t *v7; 
  int arrivalTimeLeft; 
  ai_scripted_t *v9; 
  ai_scripted_t *v10; 
  unsigned __int8 lookAtIntensity; 
  char v12; 
  ai_scripted_t *v13; 
  ai_scripted_t *v14; 
  ai_scripted_t *v15; 
  char v16; 
  scr_string_t baseArchetype; 
  bool v18; 
  bool v19; 
  float *p_desiredSpeed; 
  double AnimSpeedBetweenThresholdEntries; 
  bool v22; 
  bool v23; 
  bool v24; 
  ai_scripted_t *v25; 
  scr_string_t AnimsetName; 
  float v29; 
  float v30; 
  float v31; 
  ai_scripted_t *v32; 
  gentity_s *ent; 
  float v34; 
  float v35; 
  float v36; 
  vec3_t outPos; 
  vec3_t angles; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 

  Sys_ProfBeginNamedEvent(0xFF808080, "UpdateLookAtPos");
  v2 = DVARFLT_ai_glanceNearAnyPlayerThreshold;
  if ( !DVARFLT_ai_glanceNearAnyPlayerThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceNearAnyPlayerThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  m_pAI = this->m_pAI;
  v5 = m_pAI->lookAtInfo.lookAtType[0];
  if ( v5 != 1 )
  {
    switch ( v5 )
    {
      case 2:
        if ( !G_IsEntityInUse(m_pAI->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, value) )
          goto LABEL_8;
        v7 = this->m_pAI;
        if ( level.time >= v7->lookAtInfo.glanceEndTime )
          goto LABEL_8;
LABEL_13:
        AIScriptedInterface::SetLookAtEntPos(this, &g_entities[v7->lookAtInfo.lookAtEntNum], (AILookAtType)(unsigned __int8)v7->lookAtInfo.lookAtType[0], v7->lookAtInfo.lookAtIntensity);
        goto LABEL_57;
      case 3:
        arrivalTimeLeft = m_pAI->arrivalInfo.arrivalTimeLeft;
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, value) )
          goto LABEL_8;
        if ( !AIScriptedInterface::CanGlance(this) )
          goto LABEL_8;
        v9 = this->m_pAI;
        if ( level.time >= v9->lookAtInfo.glanceEndTime || !v9->pNavigator->HasPath(v9->pNavigator) || this->m_pAI->avoidanceBlockedData.blocked || arrivalTimeLeft || !AIScriptedInterface::GetLookDownPathPos(this, &outPos) )
          goto LABEL_8;
LABEL_22:
        this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
        v10 = this->m_pAI;
        lookAtIntensity = v10->lookAtInfo.lookAtIntensity;
        v12 = v10->lookAtInfo.lookAtType[0];
        v10->lookAtInfo.vLookAtPos = outPos;
        this->m_pAI->lookAtInfo.lookAtIntensity = lookAtIntensity;
        this->m_pAI->lookAtInfo.lookAtType[0] = v12;
        goto LABEL_57;
      case 4:
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, v2->current.value) )
          goto LABEL_8;
        if ( !AIScriptedInterface::CanGlance(this) )
          goto LABEL_8;
        v13 = this->m_pAI;
        if ( level.time >= v13->lookAtInfo.glanceEndTime || !G_IsEntityInUse(v13->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        goto LABEL_28;
      case 5:
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, v2->current.value) )
        {
LABEL_8:
          this->m_pAI->lookAtInfo.lookAtType[0] = 0;
          goto LABEL_57;
        }
        CanGlance = AIScriptedInterface::CanGlance(this);
        goto LABEL_6;
      case 6:
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, v2->current.value) )
          goto LABEL_8;
        if ( !AIScriptedInterface::CanGlance(this) )
          goto LABEL_8;
        v14 = this->m_pAI;
        if ( level.time >= v14->lookAtInfo.glanceEndTime || !G_IsEntityInUse(v14->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        v7 = this->m_pAI;
        goto LABEL_13;
    }
    if ( v5 != 7 )
    {
      if ( v5 == 8 )
      {
        if ( !G_IsEntityInUse(m_pAI->lookAtInfo.lookAtEntNum) )
        {
          this->m_pAI->lookAtInfo.lookAtType[0] = 0;
          goto LABEL_57;
        }
LABEL_28:
        v7 = this->m_pAI;
        goto LABEL_13;
      }
      if ( v5 == 9 )
      {
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, v2->current.value) || !this->m_pAI->pNavigator->HasPath(this->m_pAI->pNavigator) || this->m_pAI->avoidanceBlockedData.blocked || !AIScriptedInterface::GetLookDownPathPos(this, &outPos) )
          goto LABEL_8;
        goto LABEL_22;
      }
    }
    if ( (!v5 || v5 == 10) && !m_pAI->lookAtInfo.bDisableAutoLookAt && !this->InScriptedState(this) && !this->m_pAI->avoidanceBlockedData.blocked && AIScriptedInterface::IsNearAnyPlayers(this, value) && !AIScriptedInterface::UpdateGlanceAtEnemy(this) && !AIScriptedInterface::UpdateGlanceAtPlayer(this) )
      AIScriptedInterface::UpdateGlanceDownPath(this);
    goto LABEL_57;
  }
  CanGlance = AIScriptedInterface::IsNearAnyPlayers(this, v2->current.value);
LABEL_6:
  if ( !CanGlance || level.time >= this->m_pAI->lookAtInfo.glanceEndTime )
    goto LABEL_8;
LABEL_57:
  v15 = this->m_pAI;
  v16 = v15->lookAtInfo.lookAtType[0];
  baseArchetype = v15->baseArchetype;
  v18 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.fast);
  v19 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.jog);
  v22 = 0;
  if ( v18 && v19 )
  {
    p_desiredSpeed = &this->m_pAI->animData.desiredSpeed;
    AnimSpeedBetweenThresholdEntries = GetAnimSpeedBetweenThresholdEntries(baseArchetype, scr_const.fast, scr_const.jog, 0.40000001);
    if ( *(float *)&AnimSpeedBetweenThresholdEntries > *p_desiredSpeed )
      v22 = 1;
  }
  v23 = this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this);
  v24 = AIScriptedInterface::IsOnStairs(this);
  if ( v23 || v22 || v24 )
    v24 = 1;
  v25 = this->m_pAI;
  if ( v25->animData.aimActive && v24 && ((unsigned __int8)(v16 - 9) <= 1u || !v16) )
  {
    _XMM0 = LODWORD(v25->animData.aimPitch);
    outPos.v[2] = 0.0;
    __asm { vunpcklps xmm0, xmm0, xmm1 }
    *(double *)angles.v = *(double *)&_XMM0;
    angles.v[2] = 0.0;
    AnimsetName = BG_AnimationState_GetAnimsetName(&v25->ent->s);
    if ( AnimsetName == scr_const.boss || AnimsetName == scr_const.boss2 )
    {
      angles.v[1] = angles.v[1] + hometownBossYawOffset;
      angles.v[0] = angles.v[0] - hometownBossPitchOffset;
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    v29 = (float)((float)(axis.m[0].v[0] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[0])) + (float)(forward.v[2] * axis.m[2].v[0]);
    v30 = (float)((float)(axis.m[0].v[1] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[1])) + (float)(forward.v[2] * axis.m[2].v[1]);
    v31 = (float)((float)(axis.m[0].v[2] * forward.v[0]) + (float)(forward.v[1] * axis.m[1].v[2])) + (float)(forward.v[2] * axis.m[2].v[2]);
    v32 = this->m_pAI;
    if ( v32->lookAtInfo.verticalHeadOffset < 0.0 )
    {
      AIScriptedInterface::GetApproxEyePos(this, &outPos, 0);
      v32 = this->m_pAI;
      v36 = outPos.v[2];
      v35 = outPos.v[1];
      v34 = outPos.v[0];
    }
    else
    {
      ent = v32->ent;
      v34 = v32->ent->r.currentOrigin.v[0];
      outPos.v[0] = v34;
      v35 = ent->r.currentOrigin.v[1];
      outPos.v[1] = v35;
      v36 = ent->r.currentOrigin.v[2] + v32->lookAtInfo.verticalHeadOffset;
    }
    v32->lookAtInfo.vLookAtPos.v[0] = v29 + v34;
    v32->lookAtInfo.vLookAtPos.v[1] = v30 + v35;
    v32->lookAtInfo.vLookAtPos.v[2] = v31 + v36;
    this->m_pAI->lookAtInfo.lookAtIntensity = 1;
    this->m_pAI->lookAtInfo.lookAtType[0] = 10;
  }
  else if ( v25->lookAtInfo.lookAtType[0] == 10 )
  {
    v25->lookAtInfo.lookAtType[0] = 0;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::UpdateLookAtTracking
==============
*/
void AIScriptedInterface::UpdateLookAtTracking(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v4; 
  ai_scripted_t *v8; 
  float v9; 
  ai_scripted_t *v10; 
  __int64 lookAtIntensity; 
  gentity_s *ent; 
  int number; 
  Ai_Asm *v15; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v17; 
  bool v18; 
  bool v19; 
  ai_scripted_t *v20; 
  bool v21; 
  char v22; 
  ai_scripted_t *v23; 
  char v24; 
  bool v25; 
  bool v26; 
  const dvar_t *v27; 
  bool v28; 
  ai_scripted_t *v29; 
  float targetLookAtPitch; 
  float targetLookAtYaw; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  double v37; 
  float v38; 
  float v39; 
  double v40; 
  ai_scripted_t *v41; 
  float v42; 
  float v43; 
  double v44; 
  double v45; 
  const dvar_t *v46; 
  ai_scripted_t *v47; 
  gentity_s *v48; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  ai_scripted_t *v56; 
  float v59; 
  float v60; 
  float v61; 
  ai_scripted_t *v65; 
  gentity_s *v66; 
  vec3_t outEyePos; 
  vec3_t in1; 
  vec4_t color; 
  vec3_t v70; 
  vec3_t out; 
  vec3_t v72; 
  vec3_t angles; 
  ActorLookAtUpdateData axis; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t v77; 
  vec3_t v78; 
  vec3_t v79; 
  vec3_t v80; 
  vec4_t v81; 
  char dest[32]; 

  v1 = DCONST_DVARBOOL_ai_disablelookatanimated;
  if ( !DCONST_DVARBOOL_ai_disablelookatanimated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_disablelookatanimated") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  m_pAI = this->m_pAI;
  if ( v1->current.enabled )
  {
    m_pAI->lookAtInfo.curLookAtPitch = 0.0;
    this->m_pAI->lookAtInfo.curLookAtYaw = 0.0;
    this->m_pAI->lookAtInfo.curLookAtYawVel = 0.0;
    this->m_pAI->lookAtInfo.curLookAtPitchVel = 0.0;
    return;
  }
  axis.minYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[0];
  axis.maxYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[1];
  axis.minPitch = m_pAI->lookAtInfo.vLookAtPitchLimits.v[0];
  axis.maxPitch = m_pAI->lookAtInfo.vLookAtPitchLimits.v[1];
  AnglesToAxis(&m_pAI->ent->r.currentAngles, &axis.tagOriginAxis);
  v4 = this->m_pAI;
  _XMM10 = 0i64;
  in1.v[2] = 0.0;
  _XMM1 = LODWORD(v4->lookAtInfo.vLookAtNeutralOffset.v[0]);
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  *(double *)angles.v = *(double *)&_XMM0;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis.neutralAxis);
  *(float *)&_XMM1 = (float)G_Main_GetTime();
  v8 = this->m_pAI;
  v9 = (float)(*(float *)&_XMM1 - v8->lookAtInfo.lastTime) * 0.001;
  v8->lookAtInfo.lastTime = *(float *)&_XMM1;
  AIScriptedInterface::UpdateLookAtTrackingState(this, &axis, v9);
  if ( this->m_pAI->lookAtInfo.lookAtIntensity >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 661, ASSERT_TYPE_ASSERT, "(m_pAI->lookAtInfo.lookAtIntensity < 2)", (const char *)&queryFormat, "m_pAI->lookAtInfo.lookAtIntensity < LOOKAT_NUM_INTENSITIES") )
    __debugbreak();
  v10 = this->m_pAI;
  __asm { vunpcklps xmm0, xmm10, xmm10 }
  in1.v[2] = 0.0;
  lookAtIntensity = v10->lookAtInfo.lookAtIntensity;
  v70.v[2] = 0.0;
  ent = v10->ent;
  *(double *)v70.v = *(double *)&_XMM0;
  number = ent->s.number;
  v15 = Ai_Asm::Singleton();
  InstanceIfExists = Ai_Asm::GetInstanceIfExists(v15, NULL, number);
  v17 = InstanceIfExists;
  v18 = !InstanceIfExists || Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.nolookat);
  v19 = this->InScriptedState(this);
  v20 = this->m_pAI;
  v21 = v19;
  if ( !v19 && v20->lookAtInfo.bDisableStateLookAt )
  {
    v22 = 1;
    v23 = this->m_pAI;
LABEL_16:
    v24 = 0;
    v20 = v23;
    goto LABEL_17;
  }
  v22 = 0;
  v23 = this->m_pAI;
  if ( !v21 || !v20->lookAtInfo.bDisableScriptedLookAt )
    goto LABEL_16;
  v24 = 1;
LABEL_17:
  v25 = v20->lookAtInfo.bLookAtWaitingForAimStart && !Common_Asm::Utils::EventFired(v17, (const scr_string_t)scr_const.start_aim);
  v26 = this->m_pAI->lookAtInfo.lookAtType[0] && !v18 && !v22 && !v24 && !v25;
  v27 = DCONST_DVARBOOL_ai_lookatnone;
  if ( !DCONST_DVARBOOL_ai_lookatnone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatnone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = 0;
  if ( !v27->current.enabled )
    v28 = v26;
  if ( v28 )
  {
    v29 = this->m_pAI;
    targetLookAtPitch = v29->lookAtInfo.targetLookAtPitch;
    targetLookAtYaw = v29->lookAtInfo.targetLookAtYaw;
  }
  else
  {
    targetLookAtYaw = v70.v[1];
    targetLookAtPitch = v70.v[0];
  }
  v32 = DCONST_DVARBOOL_ai_lookatusedebugangles;
  if ( !DCONST_DVARBOOL_ai_lookatusedebugangles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatusedebugangles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
  {
    v33 = DCONST_DVARFLT_ai_lookatpitch;
    if ( !DCONST_DVARFLT_ai_lookatpitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatpitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    targetLookAtPitch = v33->current.value;
    v34 = DCONST_DVARFLT_ai_lookatyaw;
    if ( !DCONST_DVARFLT_ai_lookatyaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatyaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    targetLookAtYaw = v34->current.value;
  }
  v35 = s_VelMax;
  LODWORD(v36) = LODWORD(s_VelMax) ^ _xmm;
  this->m_pAI->lookAtInfo.curLookAtYawVel = (float)((float)((float)((float)(targetLookAtYaw - this->m_pAI->lookAtInfo.curLookAtYaw) * TABLE_HEAD_SPRING_PARAMS[lookAtIntensity].m_SpringCoef) + (float)(this->m_pAI->lookAtInfo.curLookAtYawVel * TABLE_HEAD_SPRING_PARAMS[lookAtIntensity].m_DampCoef)) * v9) + this->m_pAI->lookAtInfo.curLookAtYawVel;
  v37 = I_fclamp(this->m_pAI->lookAtInfo.curLookAtYawVel, v36, v35);
  this->m_pAI->lookAtInfo.curLookAtYawVel = *(float *)&v37;
  this->m_pAI->lookAtInfo.curLookAtYaw = (float)(v9 * this->m_pAI->lookAtInfo.curLookAtYawVel) + this->m_pAI->lookAtInfo.curLookAtYaw;
  v38 = s_VelMax;
  LODWORD(v39) = LODWORD(s_VelMax) ^ _xmm;
  this->m_pAI->lookAtInfo.curLookAtPitchVel = (float)((float)((float)((float)(targetLookAtPitch - this->m_pAI->lookAtInfo.curLookAtPitch) * TABLE_HEAD_SPRING_PARAMS[lookAtIntensity].m_SpringCoef) + (float)(this->m_pAI->lookAtInfo.curLookAtPitchVel * TABLE_HEAD_SPRING_PARAMS[lookAtIntensity].m_DampCoef)) * v9) + this->m_pAI->lookAtInfo.curLookAtPitchVel;
  v40 = I_fclamp(this->m_pAI->lookAtInfo.curLookAtPitchVel, v39, v38);
  this->m_pAI->lookAtInfo.curLookAtPitchVel = *(float *)&v40;
  this->m_pAI->lookAtInfo.curLookAtPitch = (float)(v9 * this->m_pAI->lookAtInfo.curLookAtPitchVel) + this->m_pAI->lookAtInfo.curLookAtPitch;
  v41 = this->m_pAI;
  v42 = v41->lookAtInfo.vLookAtYawLimits.v[1];
  v43 = v41->lookAtInfo.vLookAtYawLimits.v[0];
  v44 = I_fclamp(v41->lookAtInfo.curLookAtPitch, v41->lookAtInfo.vLookAtPitchLimits.v[0], v41->lookAtInfo.vLookAtPitchLimits.v[1]);
  this->m_pAI->lookAtInfo.curLookAtPitch = *(float *)&v44;
  v45 = I_fclamp(this->m_pAI->lookAtInfo.curLookAtYaw, v43, v42);
  this->m_pAI->lookAtInfo.curLookAtYaw = *(float *)&v45;
  v46 = DCONST_DVARBOOL_ai_debuglookatanimated;
  if ( !DCONST_DVARBOOL_ai_debuglookatanimated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglookatanimated") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.enabled )
  {
    v47 = this->m_pAI;
    if ( v47->lookAtInfo.verticalHeadOffset < 0.0 )
    {
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
      v47 = this->m_pAI;
    }
    else
    {
      v48 = v47->ent;
      *(_QWORD *)outEyePos.v = *(_QWORD *)v47->ent->r.currentOrigin.v;
      outEyePos.v[2] = v48->r.currentOrigin.v[2] + v47->lookAtInfo.verticalHeadOffset;
    }
    if ( v28 )
    {
      color = (vec4_t)_xmm;
      G_DebugLine(&outEyePos, &v47->lookAtInfo.vLookAtPos, &color, 0);
      v47 = this->m_pAI;
    }
    _XMM1 = LODWORD(v47->lookAtInfo.curLookAtPitch);
    __asm { vunpcklps xmm0, xmm1, xmm0 }
    in1.v[2] = 0.0;
    v79.v[2] = 0.0;
    *(double *)v79.v = *(double *)&_XMM0;
    AngleVectors(&v79, &forward, NULL, NULL);
    v51 = (float)((float)(forward.v[0] * axis.neutralAxis.m[0].v[0]) + (float)(forward.v[1] * axis.neutralAxis.m[1].v[0])) + (float)(forward.v[2] * axis.neutralAxis.m[2].v[0]);
    v52 = (float)((float)(forward.v[0] * axis.neutralAxis.m[0].v[1]) + (float)(forward.v[1] * axis.neutralAxis.m[1].v[1])) + (float)(forward.v[2] * axis.neutralAxis.m[2].v[1]);
    v53 = (float)((float)(forward.v[0] * axis.neutralAxis.m[0].v[2]) + (float)(forward.v[1] * axis.neutralAxis.m[1].v[2])) + (float)(forward.v[2] * axis.neutralAxis.m[2].v[2]);
    end.v[0] = (float)((float)((float)((float)(v52 * axis.tagOriginAxis.m[1].v[0]) + (float)(v51 * axis.tagOriginAxis.m[0].v[0])) + (float)(v53 * axis.tagOriginAxis.m[2].v[0])) * 50.0) + outEyePos.v[0];
    v54 = (float)((float)(v52 * axis.tagOriginAxis.m[1].v[1]) + (float)(v51 * axis.tagOriginAxis.m[0].v[1])) + (float)(v53 * axis.tagOriginAxis.m[2].v[1]);
    *(float *)&_XMM0 = v51 * axis.tagOriginAxis.m[0].v[2];
    _XMM9 = LODWORD(FLOAT_1_0);
    end.v[1] = (float)(v54 * 50.0) + outEyePos.v[1];
    end.v[2] = (float)((float)((float)((float)(v52 * axis.tagOriginAxis.m[1].v[2]) + *(float *)&_XMM0) + (float)(v53 * axis.tagOriginAxis.m[2].v[2])) * 50.0) + outEyePos.v[2];
    v81 = (vec4_t)_xmm;
    if ( v28 )
    {
      v81.v[0] = 0.0;
      v81.v[2] = FLOAT_1_0;
    }
    G_DebugLine(&outEyePos, &end, &v81, 0);
    v56 = this->m_pAI;
    in1.v[2] = 0.0;
    _XMM1 = LODWORD(v56->lookAtInfo.targetLookAtPitch);
    __asm { vunpcklps xmm0, xmm1, xmm0 }
    *(double *)v80.v = *(double *)&_XMM0;
    v80.v[2] = 0.0;
    AngleVectors(&v80, &v77, NULL, NULL);
    v59 = (float)((float)(v77.v[0] * axis.neutralAxis.m[0].v[0]) + (float)(v77.v[1] * axis.neutralAxis.m[1].v[0])) + (float)(v77.v[2] * axis.neutralAxis.m[2].v[0]);
    v60 = (float)((float)(v77.v[0] * axis.neutralAxis.m[0].v[1]) + (float)(v77.v[1] * axis.neutralAxis.m[1].v[1])) + (float)(v77.v[2] * axis.neutralAxis.m[2].v[1]);
    v61 = (float)((float)(v77.v[0] * axis.neutralAxis.m[0].v[2]) + (float)(v77.v[1] * axis.neutralAxis.m[1].v[2])) + (float)(v77.v[2] * axis.neutralAxis.m[2].v[2]);
    v78.v[0] = (float)((float)((float)((float)(v59 * axis.tagOriginAxis.m[0].v[0]) + (float)(v60 * axis.tagOriginAxis.m[1].v[0])) + (float)(v61 * axis.tagOriginAxis.m[2].v[0])) * 50.0) + outEyePos.v[0];
    v78.v[1] = (float)((float)((float)((float)(v59 * axis.tagOriginAxis.m[0].v[1]) + (float)(v60 * axis.tagOriginAxis.m[1].v[1])) + (float)(v61 * axis.tagOriginAxis.m[2].v[1])) * 50.0) + outEyePos.v[1];
    v78.v[2] = (float)((float)((float)((float)(v59 * axis.tagOriginAxis.m[0].v[2]) + (float)(v60 * axis.tagOriginAxis.m[1].v[2])) + (float)(v61 * axis.tagOriginAxis.m[2].v[2])) * 50.0) + outEyePos.v[2];
    color = (vec4_t)_xmm;
    G_DebugLine(&outEyePos, &v78, &color, 1);
    __asm { vunpcklps xmm0, xmm9, xmm10 }
    color.v[2] = 0.0;
    in1.v[2] = 0.0;
    *(double *)in1.v = *(double *)&_XMM0;
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &out);
    out.v[0] = (float)(50.0 * out.v[0]) + outEyePos.v[0];
    out.v[1] = (float)(50.0 * out.v[1]) + outEyePos.v[1];
    color.v[2] = 0.0;
    __asm { vunpcklps xmm0, xmm10, xmm9 }
    in1.v[2] = 0.0;
    out.v[2] = (float)(50.0 * out.v[2]) + outEyePos.v[2];
    *(double *)in1.v = *(double *)&_XMM0;
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &v72);
    v72.v[0] = (float)(50.0 * v72.v[0]) + outEyePos.v[0];
    v72.v[1] = (float)(50.0 * v72.v[1]) + outEyePos.v[1];
    color.v[2] = FLOAT_1_0;
    __asm { vunpcklps xmm0, xmm10, xmm10 }
    in1.v[2] = FLOAT_1_0;
    v72.v[2] = (float)(50.0 * v72.v[2]) + outEyePos.v[2];
    *(double *)in1.v = *(double *)&_XMM0;
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &v70);
    v70.v[0] = (float)(50.0 * v70.v[0]) + outEyePos.v[0];
    v70.v[1] = (float)(50.0 * v70.v[1]) + outEyePos.v[1];
    v70.v[2] = (float)(50.0 * v70.v[2]) + outEyePos.v[2];
    color = (vec4_t)_xmm;
    G_DebugLine(&outEyePos, &out, &color, 1);
    color = (vec4_t)_xmm;
    G_DebugLine(&outEyePos, &v72, &color, 1);
    color = (vec4_t)_xmm;
    G_DebugLine(&outEyePos, &v70, &color, 1);
    G_DebugAxis(&axis.tagOriginAxis, &this->m_pAI->ent->r.currentOrigin, 30.0, 0, 1);
    v65 = this->m_pAI;
    v66 = v65->ent;
    *(_QWORD *)angles.v = *(_QWORD *)v65->ent->r.currentOrigin.v;
    angles.v[2] = v66->r.currentOrigin.v[2] + 50.0;
    Com_sprintf<32>((char (*)[32])dest, "lookat: [%d] %s", v28, g_lookAtTypeStrings[(unsigned __int8)v65->lookAtInfo.lookAtType[0]]);
    G_DebugString(&angles, &colorYellow, 0.5, dest, 1);
  }
}

/*
==============
AIScriptedInterface::UpdateLookAtTrackingState
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtTrackingState(AIScriptedInterface *this, const ActorLookAtUpdateData *data, double dtime)
{
  ai_scripted_t *m_pAI; 
  __int128 v6; 
  gentity_s *ent; 
  float v8; 
  float v9; 
  float v10; 
  float v14; 
  float minYaw; 
  float v16; 
  double v18; 
  ai_scripted_t *v23; 
  float v26; 
  float maxYaw; 
  double v28; 
  float minPitch; 
  float maxPitch; 
  double v31; 
  vec3_t outEyePos; 
  vec3_t mulVec; 
  vec3_t angles; 
  vec3_t solution; 
  vec3_t vec; 

  m_pAI = this->m_pAI;
  v6 = *(_OWORD *)&dtime;
  if ( m_pAI->lookAtInfo.verticalHeadOffset < 0.0 )
  {
    AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
    m_pAI = this->m_pAI;
    v10 = outEyePos.v[2];
    v9 = outEyePos.v[1];
    v8 = outEyePos.v[0];
  }
  else
  {
    ent = m_pAI->ent;
    v8 = m_pAI->ent->r.currentOrigin.v[0];
    outEyePos.v[0] = v8;
    v9 = ent->r.currentOrigin.v[1];
    outEyePos.v[1] = v9;
    v10 = ent->r.currentOrigin.v[2] + m_pAI->lookAtInfo.verticalHeadOffset;
    outEyePos.v[2] = v10;
  }
  mulVec.v[0] = m_pAI->lookAtInfo.vLookAtPos.v[0] - v8;
  mulVec.v[1] = m_pAI->lookAtInfo.vLookAtPos.v[1] - v9;
  mulVec.v[2] = m_pAI->lookAtInfo.vLookAtPos.v[2] - v10;
  MatrixVecMultiply(&data->tagOriginAxis, &mulVec, &solution);
  MatrixVecMultiply(&data->neutralAxis, &solution, &vec);
  vectoangles(&vec, &angles);
  _XMM10 = 0i64;
  __asm
  {
    vroundss xmm2, xmm10, xmm1, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  v14 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
  minYaw = data->minYaw;
  v16 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
  if ( v14 > minYaw && v14 < data->maxYaw )
  {
    this->m_pAI->lookAtInfo.targetLookAtYaw = v14;
    goto LABEL_13;
  }
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  v18 = I_fclamp((float)((float)((float)((float)(v14 - this->m_pAI->lookAtInfo.targetLookAtYaw) * 0.0027777778) - *(float *)&_XMM3) * 360.0) + this->m_pAI->lookAtInfo.targetLookAtYaw, minYaw, data->maxYaw);
  this->m_pAI->lookAtInfo.targetLookAtYaw = *(float *)&v18;
  _XMM7 = LODWORD(FLOAT_180_0);
  __asm
  {
    vroundss xmm3, xmm10, xmm2, 1
    vroundss xmm2, xmm10, xmm1, 1
  }
  AngleNormalize360(v14);
  _XMM1 = v6 ^ _xmm;
  v23 = this->m_pAI;
  __asm
  {
    vcmpless xmm0, xmm7, xmm2
    vblendvps xmm0, xmm1, xmm13, xmm0
  }
  v26 = *(float *)&_XMM0 + v23->lookAtInfo.backZoneTime;
  if ( v26 <= -0.5 )
  {
    maxYaw = data->minYaw;
LABEL_11:
    v23->lookAtInfo.targetLookAtYaw = maxYaw;
    goto LABEL_12;
  }
  if ( v26 >= 0.5 )
  {
    maxYaw = data->maxYaw;
    goto LABEL_11;
  }
LABEL_12:
  v28 = I_fclamp(v26, -0.5, 0.5);
  this->m_pAI->lookAtInfo.backZoneTime = *(float *)&v28;
LABEL_13:
  minPitch = data->minPitch;
  maxPitch = data->maxPitch;
  if ( minPitch >= maxPitch )
  {
    this->m_pAI->lookAtInfo.targetLookAtPitch = minPitch;
  }
  else
  {
    v31 = I_fclamp(v16, minPitch, maxPitch);
    this->m_pAI->lookAtInfo.targetLookAtPitch = *(float *)&v31;
  }
}

/*
==============
AIScriptedInterface::setAnimLookAtNeutralDir
==============
*/
void AIScriptedInterface::setAnimLookAtNeutralDir(AIScriptedInterface *this, float neutralPitch, float neutralYaw)
{
  vec2_t v3; 

  v3.v[0] = neutralPitch;
  v3.v[1] = neutralYaw;
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = v3;
}

/*
==============
AIScriptedInterface::setAnimLookAtRanges
==============
*/
void AIScriptedInterface::setAnimLookAtRanges(AIScriptedInterface *this, float minPitch, float maxPitch, float minYaw, float maxYaw)
{
  vec2_t v5; 

  v5.v[0] = minPitch;
  v5.v[1] = maxPitch;
  this->m_pAI->lookAtInfo.vLookAtPitchLimits = v5;
  v5.v[0] = minYaw;
  v5.v[1] = maxYaw;
  this->m_pAI->lookAtInfo.vLookAtYawLimits = v5;
}

