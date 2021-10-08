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
  char v2; 
  char v3; 

  _R8 = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [r8+0C80h]
  }
  if ( v2 | v3 )
  {
    _RCX = _R8->ent;
    *(_QWORD *)outEyePos->v = *(_QWORD *)_R8->ent->r.currentOrigin.v;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+138h]
      vmovss  dword ptr [rdx+8], xmm0
      vaddss  xmm0, xmm0, dword ptr [r8+0C80h]
      vmovss  dword ptr [rdx+8], xmm0
    }
  }
  else
  {
    AIScriptedInterface::GetApproxEyePos(this, outEyePos, 0);
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
  float v6; 
  const vec3_t *p_currentAngles; 
  float v13; 
  vec3_t angles; 

  m_pAI = this->m_pAI;
  data->minYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[0];
  data->maxYaw = m_pAI->lookAtInfo.vLookAtYawLimits.v[1];
  data->minPitch = m_pAI->lookAtInfo.vLookAtPitchLimits.v[0];
  v6 = m_pAI->lookAtInfo.vLookAtPitchLimits.v[1];
  p_currentAngles = &m_pAI->ent->r.currentAngles;
  data->maxPitch = v6;
  AnglesToAxis(p_currentAngles, &data->tagOriginAxis);
  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  xmm2, dword ptr [rax+0C48h]
    vmovss  xmm1, dword ptr [rax+0C4Ch]
    vunpcklps xmm1, xmm2, xmm1
    vmovsd  qword ptr [rsp+58h+angles], xmm1
  }
  angles.v[2] = v13;
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
  __int64 v7; 
  __int64 v9; 
  char v21; 
  unsigned __int8 v22; 
  int fmt; 
  vec3_t outEyePos; 
  int v30[5]; 
  bfx::AreaHandle v31; 
  bfx::LinkHandle v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outPos;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 81, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator", -2i64) )
    __debugbreak();
  result = ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasPath)(this->m_pAI->pNavigator);
  if ( (_BYTE)result )
  {
    bfx::AreaHandle::AreaHandle(&v31);
    bfx::LinkHandle::LinkHandle(&v32);
    LOBYTE(fmt) = 0;
    LOBYTE(v7) = 1;
    __asm { vmovss  xmm1, cs:__real@43000000 }
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v9, v7, v30, fmt);
    __asm
    {
      vmovss  xmm4, [rsp+0A8h+var_60]
      vsubss  xmm2, xmm4, dword ptr [rcx+130h]
      vmovss  xmm5, [rsp+0A8h+var_5C]
      vsubss  xmm0, xmm5, dword ptr [rcx+134h]
      vmovss  xmm6, [rsp+0A8h+var_58]
      vsubss  xmm3, xmm6, dword ptr [rcx+138h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@45c80000
    }
    if ( v21 )
    {
      v22 = 0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rdi], xmm4
        vmovss  dword ptr [rdi+4], xmm5
        vmovss  dword ptr [rdi+8], xmm6
      }
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+outEyePos+8]
        vsubss  xmm1, xmm0, dword ptr [rcx+138h]
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vsubss  xmm3, xmm2, cs:__real@40c00000
        vmovss  dword ptr [rdi+8], xmm3
      }
      v22 = 1;
    }
    bfx::LinkHandle::~LinkHandle(&v32);
    bfx::AreaHandle::~AreaHandle(&v31);
    result = v22;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
  return result;
}

/*
==============
AIScriptedInterface::InitLookAt
==============
*/
void AIScriptedInterface::InitLookAt(AIScriptedInterface *this)
{
  vec2_t v7; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+28h+arg_0], xmm0
    vmovss  dword ptr [rsp+28h+arg_0+4], xmm0
  }
  this->m_pAI->lookAtInfo.lookAtEntNum = 2047;
  this->m_pAI->lookAtInfo.stateOverride = 8;
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = v7;
  this->m_pAI->lookAtInfo.curLookAtPitch = 0.0;
  this->m_pAI->lookAtInfo.curLookAtYaw = 0.0;
  this->m_pAI->lookAtInfo.curLookAtPitchVel = 0.0;
  this->m_pAI->lookAtInfo.curLookAtYawVel = 0.0;
  this->m_pAI->lookAtInfo.targetLookAtPitch = 0.0;
  this->m_pAI->lookAtInfo.targetLookAtYaw = 0.0;
  G_Main_GetTime();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0C78h], xmm0 }
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
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Int = 550;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) )
    Int = Scr_GetInt(scrContext, 1u);
  this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
  this->m_pAI->lookAtInfo.glanceEndTime = Int + level.time;
  this->m_pAI->lookAtInfo.lookAtType[0] = 1;
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
    vmovss  dword ptr [rax+0C3Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
    vmovss  dword ptr [rax+0C40h], xmm1
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue+8]
    vmovss  dword ptr [rax+0C44h], xmm0
  }
  _RAX->lookAtInfo.lookAtIntensity = 1;
  this->m_pAI->lookAtInfo.lookAtType[0] = 1;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir
==============
*/
void AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir(AIScriptedInterface *this, scrContext_t *scrContext)
{
  vec2_t v5; 

  if ( Scr_GetNumParam(scrContext) != 6 )
    Scr_Error(COM_ERR_5765, scrContext, "Invalid parameter count, requires 6 floats (pitch_min, pitch_max, yaw_min, yaw_max, neutral_pitch, neutral_yaw)");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
  __asm { vmovss  dword ptr [rsp+28h+arg_0], xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 5u);
  __asm { vmovss  dword ptr [rsp+28h+arg_0+4], xmm0 }
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = v5;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges
==============
*/
void AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges(AIScriptedInterface *this, scrContext_t *scrContext)
{
  vec2_t v17; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5764, scrContext, "Invalid parameter count, requires 4 floats (pitch_min, pitch_max, yaw_min, yaw_max )");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmovss  dword ptr [rsp+58h+arg_0], xmm8
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rsp+58h+arg_0+4], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  this->m_pAI->lookAtInfo.vLookAtPitchLimits = v17;
  __asm
  {
    vmovss  dword ptr [rsp+58h+arg_0], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rsp+58h+arg_0+4], xmm0
  }
  this->m_pAI->lookAtInfo.vLookAtYawLimits = v17;
}

/*
==============
AIScriptedInterface::OnScrCmd_SetCivilianFocus
==============
*/
void AIScriptedInterface::OnScrCmd_SetCivilianFocus(AIScriptedInterface *this, scrContext_t *scrContext)
{
  if ( Scr_GetNumParam(scrContext) && Scr_GetType(scrContext, 0) )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0D58h], xmm0 }
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
  unsigned int v10; 
  int v11; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  v4 = 0;
  if ( Scr_GetNumParam(scrContext) > 1 )
  {
    Int = Scr_GetInt(scrContext, 1u);
    v4 = Int;
    if ( Int >= 2 )
    {
      v11 = 2;
      v10 = Int;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 1142, ASSERT_TYPE_ASSERT, "(unsigned)( intensity ) < (unsigned)( static_cast<int>(AILookAtIntensity::NUM_LOOKAT_INTENSITIES) )", "intensity doesn't index static_cast<int>(AILookAtIntensity::NUM_LOOKAT_INTENSITIES)\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+vectorValue]
    vmovss  dword ptr [rax+0C3Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+68h+vectorValue+4]
    vmovss  dword ptr [rax+0C40h], xmm1
    vmovss  xmm0, dword ptr [rsp+68h+vectorValue+8]
    vmovss  dword ptr [rax+0C44h], xmm0
  }
  _RAX->lookAtInfo.lookAtIntensity = v4;
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
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  LocalTagMatrix = G_Utils_DObjGetLocalTagMatrix(this->m_pAI->ent, scr_const.j_head);
  _RBX = LocalTagMatrix;
  if ( LocalTagMatrix )
  {
    __asm { vmovaps [rsp+78h+var_18], xmm7 }
    QuatToAxis(&LocalTagMatrix->quat, &axis);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+78h+axis+0Ch]
      vmovss  xmm2, dword ptr [rsp+78h+axis+10h]
      vxorps  xmm1, xmm0, xmm3
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+78h+axis+18h], xmm1
      vmovss  xmm1, dword ptr [rsp+78h+axis+14h]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+78h+axis+20h], xmm2
      vmovss  dword ptr [rsp+78h+axis+1Ch], xmm0
    }
    vectoangles(&axis.m[2], &angles);
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm4, cs:__real@3b360b61
      vmulss  xmm3, xmm4, dword ptr [rsp+78h+angles]
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rax+0C48h], xmm0
      vmulss  xmm4, xmm4, dword ptr [rsp+78h+angles+4]
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm7, xmm2, 1
      vmovaps xmm7, [rsp+78h+var_18]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rax+0C4Ch], xmm1
      vmovss  xmm2, dword ptr [rbx+18h]
      vaddss  xmm0, xmm2, cs:__real@40a00000
      vmovss  dword ptr [rax+0C80h], xmm0
    }
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
  AIScriptedInterface *v14; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  AIActorInterface v21; 
  AIAgentInterface v22; 
  AIScriptedInterface *v23; 
  vec3_t outEyePos; 

  v4 = lookatType;
  v5 = intensity;
  _RBX = pEnt;
  if ( (((_BYTE)lookatType - 2) & 0xF9) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 967, ASSERT_TYPE_ASSERT, "( lookatType == AILookAtType::GLANCE_SCRIPT_ENT || lookatType == AILookAtType::LOOK_SCRIPT_ENT || lookatType == AILookAtType::GLANCE_AUTO_ENEMY || lookatType == AILookAtType::GLANCE_AUTO_ENT )", (const char *)&queryFormat, "lookatType == AILookAtType::GLANCE_SCRIPT_ENT || lookatType == AILookAtType::LOOK_SCRIPT_ENT || lookatType == AILookAtType::GLANCE_AUTO_ENEMY || lookatType == AILookAtType::GLANCE_AUTO_ENT") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 968, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( _RBX->client )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+0C8h+outEyePos+4], xmm1
      vmovss  dword ptr [rsp+0C8h+outEyePos], xmm0
      vmovss  xmm0, dword ptr [rax+1E8h]
      vaddss  xmm2, xmm0, dword ptr [rbx+138h]
      vsubss  xmm1, xmm2, cs:__real@40400000
      vmovss  dword ptr [rsp+0C8h+outEyePos+8], xmm1
    }
    goto LABEL_27;
  }
  AIActorInterface::AIActorInterface(&v21);
  AIAgentInterface::AIAgentInterface(&v22);
  v14 = NULL;
  v22.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v23 = NULL;
  if ( _RBX->agent )
  {
    if ( SV_Agent_IsScripted(_RBX->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RBX);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v22, ScriptedAgentInfo);
      v23 = &v22;
      AIScriptedInterface::GetApproxEyePos(&v22, &outEyePos, 0);
      goto LABEL_27;
    }
    v14 = v23;
  }
  actor = _RBX->actor;
  if ( actor )
  {
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v21, _RBX->actor);
    v23 = &v21;
    AIScriptedInterface::GetApproxEyePos(&v21, &outEyePos, 0);
  }
  else if ( v14 )
  {
    AIScriptedInterface::GetApproxEyePos(v14, &outEyePos, 0);
  }
  else
  {
    G_Utils_EntityCentroid(_RBX, &outEyePos);
  }
LABEL_27:
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+outEyePos]
    vmovss  dword ptr [rax+0C3Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+outEyePos+4]
    vmovss  dword ptr [rax+0C40h], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+outEyePos+8]
    vmovss  dword ptr [rax+0C44h], xmm0
  }
  _RAX->lookAtInfo.lookAtIntensity = v5;
  this->m_pAI->lookAtInfo.lookAtType[0] = v4;
  this->m_pAI->lookAtInfo.lookAtEntNum = _RBX->s.number;
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
  char v5; 
  bool v6; 
  bool v7; 
  char v10; 
  char v11; 
  char v12; 
  bool v13; 
  bool v14; 
  bool v15; 

  m_pAI = this->m_pAI;
  baseArchetype = m_pAI->baseArchetype;
  v5 = m_pAI->lookAtInfo.lookAtType[0];
  v6 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.fast);
  v7 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.jog);
  if ( !v6 )
    goto LABEL_5;
  if ( !v7 )
    goto LABEL_5;
  __asm { vmovss  xmm3, cs:__real@3ecccccd; fractionValue }
  _RBX = &this->m_pAI->animData.desiredSpeed;
  *(double *)&_XMM0 = GetAnimSpeedBetweenThresholdEntries(baseArchetype, scr_const.fast, scr_const.jog, *(float *)&_XMM3);
  __asm { vcomiss xmm0, dword ptr [rbx] }
  if ( !(v10 | v11) )
    v12 = 1;
  else
LABEL_5:
    v12 = 0;
  v13 = this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this);
  v14 = AIScriptedInterface::IsOnStairs(this);
  v15 = v13 || v12 || v14;
  return this->m_pAI->animData.aimActive && v15 && ((unsigned __int8)(v5 - 9) <= 1u || !v5);
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
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v7; 
  int v8; 
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  char v40; 
  AILookAtType v41; 
  AILookAtType v42; 
  vec3_t forward; 

  v4 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v7 = DVARINT_ai_glanceGenericCooldown;
  if ( !DVARINT_ai_glanceGenericCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceGenericCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return 0;
  m_pAI = this->m_pAI;
  if ( level.time - m_pAI->iLastSetEnemyTime > 50 )
    return 0;
  if ( level.time - m_pAI->lookAtInfo.timeOfLastGlance < v8 )
    return 0;
  ent = m_pAI->ent;
  _RAX = (__int64)&TargetSentient->ent->r.currentOrigin;
  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovaps [rsp+0A8h+var_48], xmm8
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm8, xmm0, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm6, xmm0, dword ptr [rcx+138h]
    vsubss  xmm7, xmm1, dword ptr [rcx+134h]
  }
  AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm8, xmm1
    vmovaps xmm8, [rsp+0A8h+var_48]
    vmulss  xmm3, xmm7, xmm1
    vmulss  xmm0, xmm3, dword ptr [rsp+0A8h+forward+4]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmulss  xmm4, xmm6, xmm1
    vmulss  xmm1, xmm2, dword ptr [rsp+0A8h+forward]
    vmovaps xmm6, [rsp+0A8h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rsp+0A8h+forward+8]
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3f5db22d
  }
  if ( !v40 || !AICommonInterface::CanSeeEnemy(this) )
    return 0;
  LOBYTE(v41) = 4;
  AIScriptedInterface::SetGlanceEnt(this, TargetSentient->ent, v41, this->m_pAI->lookAtInfo.lookAtIntensity, integer);
  LOBYTE(v42) = 4;
  AIScriptedInterface::SetLookAtEntPos(this, TargetSentient->ent, v42, this->m_pAI->lookAtInfo.lookAtIntensity);
  return 1;
}

/*
==============
AIScriptedInterface::UpdateGlanceAtPlayer
==============
*/
bool AIScriptedInterface::UpdateGlanceAtPlayer(AIScriptedInterface *this)
{
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  gentity_s *ClosestPlayerOnTeam; 
  const gentity_s *v15; 
  ai_scripted_t *m_pAI; 
  char v32; 
  char v33; 
  int bInCombat; 
  int v64; 
  AILookAtType v65; 
  int v66; 
  bool result; 
  vec3_t v71; 
  vec3_t forward; 

  v5 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  v8 = DVARINT_ai_glanceLongDuration;
  if ( !DVARINT_ai_glanceLongDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceLongDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DVARINT_ai_glancePlayerCooldown;
  if ( !DVARINT_ai_glancePlayerCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glancePlayerCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  _RDI = DVARFLT_ai_glancePlayerDist;
  if ( !DVARFLT_ai_glancePlayerDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glancePlayerDist") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm8
    vmovaps [rsp+0D8h+var_58], xmm9
    vmovaps [rsp+0D8h+var_68], xmm10
  }
  Dvar_CheckFrontendServerThread(_RDI);
  if ( level.time - this->m_pAI->lookAtInfo.timeOfLastGlance < v11 )
    goto LABEL_23;
  __asm { vmovss  xmm1, dword ptr [rdi+28h]; maxDist }
  ClosestPlayerOnTeam = AIScriptedInterface::GetClosestPlayerOnTeam(this, *(float *)&_XMM1);
  v15 = ClosestPlayerOnTeam;
  if ( !ClosestPlayerOnTeam )
    goto LABEL_23;
  m_pAI = this->m_pAI;
  __asm
  {
    vmovaps [rsp+0D8h+var_38], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  _RDX = m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+130h]
    vsubss  xmm4, xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rdx+134h]
    vsubss  xmm5, xmm1, dword ptr [rax+134h]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm8, xmm4, xmm1
    vmulss  xmm9, xmm5, xmm1
  }
  AngleVectors(&ClosestPlayerOnTeam->r.currentAngles, &forward, NULL, NULL);
  AngleVectors(&this->m_pAI->ent->r.currentAngles, &v71, NULL, NULL);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0D8h+var_98]
    vmovss  xmm4, dword ptr [rsp+0D8h+var_98+4]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm5, xmm3, xmm1
    vmovss  xmm3, dword ptr [rsp+0D8h+forward]
    vmulss  xmm10, xmm4, xmm1
    vmovss  xmm4, dword ptr [rsp+0D8h+forward+4]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmovaps xmm7, [rsp+0D8h+var_38]
    vmulss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rsp+0D8h+forward+4], xmm0
    vmulss  xmm0, xmm2, xmm8
    vaddss  xmm1, xmm1, xmm0
    vcomiss xmm1, cs:__real@3f666666
    vmovss  dword ptr [rsp+0D8h+var_98], xmm5
    vmovss  dword ptr [rsp+0D8h+var_98+4], xmm10
    vmovss  dword ptr [rsp+0D8h+forward], xmm2
  }
  if ( v32 )
    goto LABEL_23;
  __asm
  {
    vmulss  xmm1, xmm8, xmm5
    vmulss  xmm0, xmm9, xmm10
    vaddss  xmm1, xmm1, xmm0
    vcomiss xmm1, cs:__real@be333333
  }
  if ( v32 | v33 )
  {
    bInCombat = this->m_pAI->combat.bInCombat;
    v64 = G_irand(-50, 200);
    if ( this->m_pAI->combat.bInCombat )
      v9 = integer;
    v66 = v9 + v64;
    if ( v9 + v64 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 381, ASSERT_TYPE_ASSERT, "(glanceDuration > 0)", (const char *)&queryFormat, "glanceDuration > 0") )
      __debugbreak();
    LOBYTE(v65) = 6;
    AIScriptedInterface::SetGlanceEnt(this, v15, v65, bInCombat, v66);
    result = 1;
  }
  else
  {
LABEL_23:
    result = 0;
  }
  __asm
  {
    vmovaps xmm10, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_58]
    vmovaps xmm8, [rsp+0D8h+var_48]
  }
  return result;
}

/*
==============
AIScriptedInterface::UpdateGlanceDownPath
==============
*/
bool AIScriptedInterface::UpdateGlanceDownPath(AIScriptedInterface *this)
{
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  ai_scripted_t *m_pAI; 
  char v22; 
  ai_scripted_t *v25; 
  __int64 v26; 
  ai_scripted_t *v28; 
  gentity_s *ent; 
  AILookAtType v42; 
  bool result; 
  AILookAtType v78; 
  ai_scripted_t *v84; 
  int lookAtIntensity; 
  vec3_t forward; 
  vec3_t worldPos; 
  int v91[4]; 

  v6 = DVARINT_ai_glanceShortDuration;
  if ( !DVARINT_ai_glanceShortDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceShortDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  v9 = DVARINT_ai_glanceLongDuration;
  if ( !DVARINT_ai_glanceLongDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceLongDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.integer;
  v11 = DVARINT_ai_glanceGenericCooldown;
  if ( !DVARINT_ai_glanceGenericCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceGenericCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.integer;
  v13 = DVARINT_ai_glanceStairsCooldown;
  if ( !DVARINT_ai_glanceStairsCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsCooldown") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.integer;
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vmovaps [rsp+0F8h+var_48], xmm7
    vmovaps [rsp+0F8h+var_58], xmm8
  }
  if ( !m_pAI->pNavigator->HasPath(m_pAI->pNavigator) || this->m_pAI->arrivalInfo.arriving )
    goto LABEL_43;
  this->GetVelocity(this, (vec3_t *)v91);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+var_98]
    vmovss  xmm1, [rsp+0F8h+var_94]
  }
  _RDI = DVARFLT_ai_glanceStairsLookDist;
  __asm
  {
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@471c4000
  }
  if ( v22 )
  {
    if ( !DVARFLT_ai_glanceStairsLookDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsLookDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  }
  else
  {
    if ( !DVARFLT_ai_glanceStairsLookDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceStairsLookDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm6, xmm0, cs:__real@40000000
    }
  }
  v25 = this->m_pAI;
  if ( level.time != v25->pNavigator->m_TimeOfLastPathUpdate && (level.time - v25->lookAtInfo.timeOfLastGlance < v12 || v25->orientation.faceMotion) )
  {
    if ( v25->orientation.faceMotion && !AIScriptedInterface::IsOnStairs(this) )
    {
      __asm { vmovaps xmm1, xmm6 }
      if ( ((unsigned int (__fastcall *)(AINavigator *, __int64, vec3_t *))this->m_pAI->pNavigator->GetStairsStateAtDist)(this->m_pAI->pNavigator, v26, &worldPos) && (v28 = this->m_pAI, level.time - v28->lookAtInfo.timeOfLastStairGlance >= v14) )
      {
        ent = v28->ent;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0F8h+worldPos]
          vmovss  xmm1, dword ptr [rsp+0F8h+worldPos+4]
          vmovss  xmm7, cs:__real@3f800000
          vmovaps [rsp+0F8h+var_68], xmm9
          vsubss  xmm9, xmm1, dword ptr [rcx+134h]
          vmulss  xmm2, xmm9, xmm9
          vmovaps [rsp+0F8h+var_78], xmm10
          vsubss  xmm10, xmm0, dword ptr [rcx+130h]
          vmulss  xmm0, xmm10, xmm10
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm7, xmm0
          vdivss  xmm8, xmm7, xmm0
        }
        AngleVectors(&ent->r.currentAngles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm3, dword ptr [rsp+0F8h+forward]
          vmovss  xmm5, dword ptr [rsp+0F8h+forward+4]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm7, xmm0
          vdivss  xmm1, xmm7, xmm0
          vmulss  xmm4, xmm3, xmm1
          vmulss  xmm2, xmm5, xmm1
          vmulss  xmm0, xmm9, xmm8
          vmovaps xmm9, [rsp+0F8h+var_68]
          vmulss  xmm1, xmm10, xmm8
          vmovaps xmm10, [rsp+0F8h+var_78]
          vmulss  xmm3, xmm0, xmm2
          vmovss  dword ptr [rsp+0F8h+forward+4], xmm2
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, cs:__real@3f34fdf4
          vmovss  dword ptr [rsp+0F8h+forward], xmm4
        }
        if ( !v22 )
        {
          LOBYTE(v42) = 5;
          this->m_pAI->lookAtInfo.timeOfLastStairGlance = level.time;
          AIScriptedInterface::SetGlancePos(this, &worldPos, v42, this->m_pAI->combat.bInCombat, v10);
          result = 1;
          goto LABEL_44;
        }
      }
      else if ( AIScriptedInterface::GetLookDownPathPos(this, &forward) )
      {
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0F8h+forward]
          vmovss  xmm1, dword ptr [rsp+0F8h+forward+4]
          vmovss  dword ptr [rax+0C3Ch], xmm0
          vmovss  xmm0, dword ptr [rsp+0F8h+forward+8]
          vmovss  dword ptr [rax+0C44h], xmm0
          vmovss  dword ptr [rax+0C40h], xmm1
        }
        _RAX->lookAtInfo.lookAtIntensity = 1;
        this->m_pAI->lookAtInfo.lookAtType[0] = 9;
        result = 1;
        goto LABEL_44;
      }
    }
LABEL_43:
    result = 0;
    goto LABEL_44;
  }
  if ( !AIScriptedInterface::GetLookDownPathPos(this, &worldPos) )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+worldPos]
    vmovss  xmm1, dword ptr [rsp+0F8h+worldPos+4]
    vsubss  xmm8, xmm0, dword ptr [rcx+130h]
    vsubss  xmm7, xmm1, dword ptr [rcx+134h]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm6, xmm1, xmm0
  }
  AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm3, xmm0, dword ptr [rsp+0F8h+forward+4]
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm1, dword ptr [rsp+0F8h+forward]
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@3f34fdf4
  }
  if ( !v22 )
    goto LABEL_43;
  v84 = this->m_pAI;
  lookAtIntensity = 1;
  if ( !v84->combat.bInCombat )
    lookAtIntensity = v84->lookAtInfo.lookAtIntensity;
  LOBYTE(v78) = 3;
  AIScriptedInterface::SetGlancePos(this, &worldPos, v78, lookAtIntensity, integer);
  result = 1;
LABEL_44:
  __asm
  {
    vmovaps xmm8, [rsp+0F8h+var_58]
    vmovaps xmm7, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_38]
  }
  return result;
}

/*
==============
AIScriptedInterface::UpdateLookAtAim
==============
*/
void AIScriptedInterface::UpdateLookAtAim(AIScriptedInterface *this)
{
  scr_string_t AnimsetName; 
  char v38; 
  char v39; 
  vec3_t outEyePos; 
  vec3_t angles; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
  }
  _RCX = this->m_pAI;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm1, dword ptr [rcx+0D60h]
    vmovss  xmm0, dword ptr [rcx+0D5Ch]
    vmovss  dword ptr [rbp+57h+outEyePos+8], xmm8
    vunpcklps xmm0, xmm1, xmm0
    vmovsd  qword ptr [rbp+57h+angles], xmm0
  }
  angles.v[2] = outEyePos.v[2];
  AnimsetName = BG_AnimationState_GetAnimsetName(&_RCX->ent->s);
  if ( AnimsetName == scr_const.boss || AnimsetName == scr_const.boss2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+angles+4]
      vmovss  xmm2, dword ptr [rbp+57h+angles]
      vaddss  xmm1, xmm0, cs:hometownBossYawOffset
      vsubss  xmm0, xmm2, cs:hometownBossPitchOffset
      vmovss  dword ptr [rbp+57h+angles], xmm0
      vmovss  dword ptr [rbp+57h+angles+4], xmm1
    }
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+57h+forward+4]
    vmovss  xmm5, dword ptr [rbp+57h+forward+8]
    vmovss  xmm0, dword ptr [rbp+57h+axis]
    vmulss  xmm2, xmm0, dword ptr [rbp+57h+forward]
    vmulss  xmm0, xmm6, dword ptr [rbp+57h+axis+0Ch]
    vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+18h]
  }
  _RCX = this->m_pAI;
  __asm
  {
    vaddss  xmm2, xmm2, xmm0
    vmovss  xmm0, dword ptr [rbp+57h+axis+4]
    vmulss  xmm3, xmm0, dword ptr [rbp+57h+forward]
    vcomiss xmm8, dword ptr [rcx+0C80h]
    vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+20h]
    vaddss  xmm9, xmm2, xmm1
    vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis+10h]
    vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rbp+57h+axis+8]
    vmulss  xmm3, xmm2, dword ptr [rbp+57h+forward]
    vaddss  xmm10, xmm4, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+14h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm6, xmm4, xmm0
  }
  if ( v38 | v39 )
  {
    _RAX = _RCX->ent;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+130h]
      vmovss  dword ptr [rbp+57h+outEyePos], xmm1
      vmovss  xmm2, dword ptr [rax+134h]
      vmovss  dword ptr [rbp+57h+outEyePos+4], xmm2
      vmovss  xmm0, dword ptr [rax+138h]
      vaddss  xmm3, xmm0, dword ptr [rcx+0C80h]
    }
  }
  else
  {
    AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
    _RCX = this->m_pAI;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+57h+outEyePos+8]
      vmovss  xmm2, dword ptr [rbp+57h+outEyePos+4]
      vmovss  xmm1, dword ptr [rbp+57h+outEyePos]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm9, xmm1
    vaddss  xmm1, xmm10, xmm2
    vmovss  dword ptr [rcx+0C3Ch], xmm0
    vmovss  dword ptr [rcx+0C40h], xmm1
    vaddss  xmm2, xmm6, xmm3
    vmovss  dword ptr [rcx+0C44h], xmm2
  }
  _RCX->lookAtInfo.lookAtIntensity = 1;
  this->m_pAI->lookAtInfo.lookAtType[0] = 10;
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
}

/*
==============
AIScriptedInterface::UpdateLookAtAnimParams
==============
*/
void AIScriptedInterface::UpdateLookAtAnimParams(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  unsigned __int8 v4; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v12; 
  char v13; 
  __int64 v29; 
  __int64 v30; 
  vec3_t xyz; 
  vec3_t outEyePos; 

  __asm { vmovaps [rsp+88h+var_18], xmm7 }
  v2 = DVARBOOL_ai_debugAutoLookAt;
  if ( !DVARBOOL_ai_debugAutoLookAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAutoLookAt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v4 = this->m_pAI->lookAtInfo.lookAtType[0];
    if ( v4 )
    {
      if ( v4 >= 0xBu )
      {
        LODWORD(v30) = 11;
        LODWORD(v29) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 895, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->lookAtInfo.lookAtType ) < (unsigned)( AILookAtType::AI_LOOK_AT_TYPE_COUNT )", "m_pAI->lookAtInfo.lookAtType doesn't index AILookAtType::AI_LOOK_AT_TYPE_COUNT\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      m_pAI = this->m_pAI;
      _RAX = m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+88h+xyz], xmm0
        vmovss  xmm1, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+88h+xyz+4], xmm1
        vmovss  xmm0, dword ptr [rax+138h]
        vsubss  xmm2, xmm0, cs:__real@41800000
        vmovss  dword ptr [rsp+88h+xyz+8], xmm2
        vmovss  xmm2, cs:__real@3f4ccccd; scale
      }
      G_Main_AddDebugString(&xyz, &colorLtYellow, *(float *)&_XMM2, g_lookAtTypeStrings[(unsigned __int8)m_pAI->lookAtInfo.lookAtType[0]]);
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
      G_DebugLine(&outEyePos, &this->m_pAI->lookAtInfo.vLookAtPos, &colorMagenta, 0);
    }
  }
  v12 = this->m_pAI;
  if ( v12->animData.gunAdditiveIndex == 2 || (v13 = 1, v12->animData.aimActive) )
    v13 = 2;
  v12->animData.lookAtState = v13;
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_STATE);
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm4, cs:__real@3b360b61
    vxorps  xmm7, xmm7, xmm7
    vmulss  xmm3, xmm4, dword ptr [rax+0C60h]
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vroundss xmm2, xmm7, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rax+0D6Ch], xmm0
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmulss  xmm4, xmm4, dword ptr [rax+0C64h]
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rax+0D70h], xmm1
  }
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_PITCH);
  G_AIAnim_UpdateFieldByParam(this->m_pAI->ent, AGENT_ANIM_PARAM_LOOK_AT_YAW);
  __asm { vmovaps xmm7, [rsp+88h+var_18] }
}

/*
==============
AIScriptedInterface::UpdateLookAtForNewAnim
==============
*/
void AIScriptedInterface::UpdateLookAtForNewAnim(AIScriptedInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v13; 
  ai_scripted_t *v15; 
  int number; 
  Ai_Asm *v19; 
  const ASM_Instance *Instance; 
  AnimsetState *outState; 
  vec2_t v22; 
  AnimsetState *v23; 

  BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState);
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 549, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  if ( pAnimset && BG_Animset_GetAddonFromState(pAnimset, outState, entryIndex, ANIMSTATE_LOOKSET, &v23) )
  {
    _RAX = v23;
    if ( !v23 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 553, ASSERT_TYPE_ASSERT, "(pLookAtState)", (const char *)&queryFormat, "pLookAtState") )
        __debugbreak();
      _RAX = v23;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rax+54h]
      vmovss  xmm1, dword ptr [rax+58h]
      vmovss  xmm3, dword ptr [rax+50h]
      vmovss  xmm2, dword ptr [rax+4Ch]
    }
    m_pAI = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rsp+48h+var_10], xmm0
      vmovss  dword ptr [rsp+48h+var_10+4], xmm1
    }
    m_pAI->lookAtInfo.vLookAtPitchLimits = v22;
    v13 = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rsp+48h+var_10], xmm2
      vmovss  dword ptr [rsp+48h+var_10+4], xmm3
    }
    v13->lookAtInfo.vLookAtYawLimits = v22;
    _RAX = v23;
    v15 = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+5Ch]
      vmovss  xmm1, dword ptr [rax+60h]
      vmovss  dword ptr [rsp+48h+var_10], xmm0
      vmovss  dword ptr [rsp+48h+var_10+4], xmm1
    }
    v15->lookAtInfo.vLookAtNeutralOffset = v22;
    this->m_pAI->lookAtInfo.bDisableStateLookAt = 0;
    number = this->m_pAI->ent->s.number;
    v19 = Ai_Asm::Singleton();
    Instance = Ai_Asm::GetInstance(v19, NULL, number);
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
  ai_scripted_t *m_pAI; 
  char v11; 
  bool CanGlance; 
  ai_scripted_t *v15; 
  int arrivalTimeLeft; 
  ai_scripted_t *v18; 
  unsigned __int8 lookAtIntensity; 
  char v21; 
  ai_scripted_t *v25; 
  ai_scripted_t *v28; 
  unsigned __int8 v31; 
  char v32; 
  ai_scripted_t *v36; 
  char v37; 
  scr_string_t baseArchetype; 
  bool v39; 
  bool v40; 
  char v43; 
  char v44; 
  char v45; 
  bool v46; 
  bool v47; 
  scr_string_t AnimsetName; 
  vec3_t outPos; 
  vec3_t angles; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "UpdateLookAtPos");
  _RBX = DVARFLT_ai_glanceNearAnyPlayerThreshold;
  if ( !DVARFLT_ai_glanceNearAnyPlayerThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_glanceNearAnyPlayerThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  m_pAI = this->m_pAI;
  v11 = m_pAI->lookAtInfo.lookAtType[0];
  if ( v11 != 1 )
  {
    switch ( v11 )
    {
      case 2:
        if ( !G_IsEntityInUse(m_pAI->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        __asm { vmovaps xmm1, xmm6; dist }
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) )
          goto LABEL_8;
        v15 = this->m_pAI;
        if ( level.time >= v15->lookAtInfo.glanceEndTime )
          goto LABEL_8;
LABEL_13:
        AIScriptedInterface::SetLookAtEntPos(this, &g_entities[v15->lookAtInfo.lookAtEntNum], (AILookAtType)(unsigned __int8)v15->lookAtInfo.lookAtType[0], v15->lookAtInfo.lookAtIntensity);
        goto LABEL_57;
      case 3:
        arrivalTimeLeft = m_pAI->arrivalInfo.arrivalTimeLeft;
        __asm { vmovaps xmm1, xmm6; dist }
        if ( AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) && AIScriptedInterface::CanGlance(this) )
        {
          v18 = this->m_pAI;
          if ( level.time < v18->lookAtInfo.glanceEndTime && v18->pNavigator->HasPath(v18->pNavigator) && !this->m_pAI->avoidanceBlockedData.blocked && !arrivalTimeLeft && AIScriptedInterface::GetLookDownPathPos(this, &outPos) )
          {
            this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
            _RAX = this->m_pAI;
            lookAtIntensity = _RAX->lookAtInfo.lookAtIntensity;
            v21 = _RAX->lookAtInfo.lookAtType[0];
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+outPos]
              vmovss  dword ptr [rax+0C3Ch], xmm0
              vmovss  xmm1, dword ptr [rbp+57h+outPos+4]
              vmovss  dword ptr [rax+0C40h], xmm1
              vmovss  xmm0, dword ptr [rbp+57h+outPos+8]
              vmovss  dword ptr [rax+0C44h], xmm0
            }
            this->m_pAI->lookAtInfo.lookAtIntensity = lookAtIntensity;
            this->m_pAI->lookAtInfo.lookAtType[0] = v21;
            goto LABEL_57;
          }
        }
        goto LABEL_8;
      case 4:
        __asm { vmovaps xmm1, xmm6; dist }
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) )
          goto LABEL_8;
        if ( !AIScriptedInterface::CanGlance(this) )
          goto LABEL_8;
        v25 = this->m_pAI;
        if ( level.time >= v25->lookAtInfo.glanceEndTime || !G_IsEntityInUse(v25->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        goto LABEL_28;
      case 5:
        __asm { vmovaps xmm1, xmm6; dist }
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) )
        {
LABEL_8:
          this->m_pAI->lookAtInfo.lookAtType[0] = 0;
          goto LABEL_57;
        }
        CanGlance = AIScriptedInterface::CanGlance(this);
        goto LABEL_6;
      case 6:
        __asm { vmovaps xmm1, xmm6; dist }
        if ( !AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) )
          goto LABEL_8;
        if ( !AIScriptedInterface::CanGlance(this) )
          goto LABEL_8;
        v28 = this->m_pAI;
        if ( level.time >= v28->lookAtInfo.glanceEndTime || !G_IsEntityInUse(v28->lookAtInfo.lookAtEntNum) )
          goto LABEL_8;
        v15 = this->m_pAI;
        goto LABEL_13;
    }
    if ( v11 != 7 )
    {
      if ( v11 == 8 )
      {
        if ( !G_IsEntityInUse(m_pAI->lookAtInfo.lookAtEntNum) )
        {
          this->m_pAI->lookAtInfo.lookAtType[0] = 0;
          goto LABEL_57;
        }
LABEL_28:
        v15 = this->m_pAI;
        goto LABEL_13;
      }
      if ( v11 == 9 )
      {
        __asm { vmovaps xmm1, xmm6; dist }
        if ( AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) && this->m_pAI->pNavigator->HasPath(this->m_pAI->pNavigator) && !this->m_pAI->avoidanceBlockedData.blocked && AIScriptedInterface::GetLookDownPathPos(this, &outPos) )
        {
          this->m_pAI->lookAtInfo.timeOfLastGlance = level.time;
          _RAX = this->m_pAI;
          v31 = _RAX->lookAtInfo.lookAtIntensity;
          v32 = _RAX->lookAtInfo.lookAtType[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+outPos]
            vmovss  dword ptr [rax+0C3Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+outPos+4]
            vmovss  dword ptr [rax+0C40h], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+outPos+8]
            vmovss  dword ptr [rax+0C44h], xmm0
          }
          this->m_pAI->lookAtInfo.lookAtIntensity = v31;
          this->m_pAI->lookAtInfo.lookAtType[0] = v32;
          goto LABEL_57;
        }
        goto LABEL_8;
      }
    }
    if ( (!v11 || v11 == 10) && !m_pAI->lookAtInfo.bDisableAutoLookAt && !this->InScriptedState(this) && !this->m_pAI->avoidanceBlockedData.blocked )
    {
      __asm { vmovaps xmm1, xmm6; dist }
      if ( AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1) && !AIScriptedInterface::UpdateGlanceAtEnemy(this) && !AIScriptedInterface::UpdateGlanceAtPlayer(this) )
        AIScriptedInterface::UpdateGlanceDownPath(this);
    }
    goto LABEL_57;
  }
  __asm { vmovaps xmm1, xmm6; dist }
  CanGlance = AIScriptedInterface::IsNearAnyPlayers(this, *(float *)&_XMM1);
LABEL_6:
  if ( !CanGlance || level.time >= this->m_pAI->lookAtInfo.glanceEndTime )
    goto LABEL_8;
LABEL_57:
  v36 = this->m_pAI;
  v37 = v36->lookAtInfo.lookAtType[0];
  baseArchetype = v36->baseArchetype;
  v39 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.fast);
  v40 = HasAnimSpeedThresholdEntryForArchetype(baseArchetype, scr_const.jog);
  if ( !v39 )
    goto LABEL_61;
  if ( !v40 )
    goto LABEL_61;
  _RBX = &this->m_pAI->animData.desiredSpeed;
  __asm { vmovss  xmm3, cs:__real@3ecccccd; fractionValue }
  *(double *)&_XMM0 = GetAnimSpeedBetweenThresholdEntries(baseArchetype, scr_const.fast, scr_const.jog, *(float *)&_XMM3);
  __asm { vcomiss xmm0, dword ptr [rbx] }
  if ( !(v43 | v44) )
    v45 = 1;
  else
LABEL_61:
    v45 = 0;
  v46 = this->m_pAI->eAnimMode != AI_ANIM_MOVE_CODE || !AICommonInterface::HasPath(this);
  v47 = AIScriptedInterface::IsOnStairs(this);
  if ( v46 || v45 || v47 )
    v47 = 1;
  _RCX = this->m_pAI;
  if ( _RCX->animData.aimActive && v47 && ((unsigned __int8)(v37 - 9) <= 1u || !v37) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+0D5Ch]
      vmovss  xmm0, dword ptr [rcx+0D60h]
      vxorps  xmm8, xmm8, xmm8
      vmovss  dword ptr [rbp+57h+outPos+8], xmm8
      vunpcklps xmm0, xmm0, xmm1
      vmovsd  qword ptr [rbp+57h+angles], xmm0
    }
    angles.v[2] = outPos.v[2];
    AnimsetName = BG_AnimationState_GetAnimsetName(&_RCX->ent->s);
    if ( AnimsetName == scr_const.boss || AnimsetName == scr_const.boss2 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+angles+4]
        vaddss  xmm1, xmm0, cs:hometownBossYawOffset
        vmovss  dword ptr [rbp+57h+angles+4], xmm1
        vmovss  xmm2, dword ptr [rbp+57h+angles]
        vsubss  xmm0, xmm2, cs:hometownBossPitchOffset
        vmovss  dword ptr [rbp+57h+angles], xmm0
      }
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+axis]
      vmulss  xmm2, xmm0, dword ptr [rbp+57h+forward]
      vmovss  xmm6, dword ptr [rbp+57h+forward+4]
      vmulss  xmm0, xmm6, dword ptr [rbp+57h+axis+0Ch]
      vaddss  xmm3, xmm2, xmm0
      vmovss  xmm5, dword ptr [rbp+57h+forward+8]
      vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+18h]
      vaddss  xmm9, xmm3, xmm0
      vmovss  xmm2, dword ptr [rbp+57h+axis+4]
      vmulss  xmm3, xmm2, dword ptr [rbp+57h+forward]
      vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+10h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+1Ch]
      vaddss  xmm10, xmm4, xmm0
      vmovss  xmm1, dword ptr [rbp+57h+axis+8]
      vmulss  xmm3, xmm1, dword ptr [rbp+57h+forward]
      vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis+14h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm0, xmm5, dword ptr [rbp+57h+axis+20h]
      vaddss  xmm6, xmm4, xmm0
    }
    _RCX = this->m_pAI;
    __asm { vcomiss xmm8, dword ptr [rcx+0C80h] }
    if ( v43 | v44 )
    {
      _RAX = _RCX->ent;
      __asm
      {
        vmovss  xmm1, dword ptr [rax+130h]
        vmovss  dword ptr [rbp+57h+outPos], xmm1
        vmovss  xmm2, dword ptr [rax+134h]
        vmovss  dword ptr [rbp+57h+outPos+4], xmm2
        vmovss  xmm0, dword ptr [rax+138h]
        vaddss  xmm3, xmm0, dword ptr [rcx+0C80h]
      }
    }
    else
    {
      AIScriptedInterface::GetApproxEyePos(this, &outPos, 0);
      _RCX = this->m_pAI;
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+57h+outPos+8]
        vmovss  xmm2, dword ptr [rbp+57h+outPos+4]
        vmovss  xmm1, dword ptr [rbp+57h+outPos]
      }
    }
    __asm
    {
      vaddss  xmm0, xmm9, xmm1
      vaddss  xmm1, xmm10, xmm2
      vaddss  xmm2, xmm6, xmm3
      vmovss  dword ptr [rcx+0C3Ch], xmm0
      vmovss  dword ptr [rcx+0C40h], xmm1
      vmovss  dword ptr [rcx+0C44h], xmm2
    }
    this->m_pAI->lookAtInfo.lookAtIntensity = 1;
    this->m_pAI->lookAtInfo.lookAtType[0] = 10;
  }
  else if ( _RCX->lookAtInfo.lookAtType[0] == 10 )
  {
    _RCX->lookAtInfo.lookAtType[0] = 0;
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v99;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
}

/*
==============
AIScriptedInterface::UpdateLookAtTracking
==============
*/
void AIScriptedInterface::UpdateLookAtTracking(AIScriptedInterface *this)
{
  const dvar_t *v7; 
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  gentity_s *v28; 
  int number; 
  Ai_Asm *v30; 
  const ASM_Instance *InstanceIfExists; 
  const ASM_Instance *v32; 
  bool v33; 
  bool v34; 
  ai_scripted_t *v35; 
  bool v36; 
  char v37; 
  ai_scripted_t *v38; 
  char v39; 
  bool v40; 
  bool v41; 
  const dvar_t *v42; 
  bool v43; 
  const dvar_t *v47; 
  const dvar_t *v94; 
  bool v95; 
  ai_scripted_t *v217; 
  vec3_t outEyePos; 
  vec3_t in1; 
  vec4_t color; 
  vec3_t v232; 
  vec3_t out; 
  vec3_t v234; 
  vec3_t angles; 
  ActorLookAtUpdateData axis; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t v239; 
  vec3_t v240; 
  vec3_t v241; 
  vec3_t v242; 
  vec4_t v243; 
  char dest[32]; 

  v7 = DCONST_DVARBOOL_ai_disablelookatanimated;
  if ( !DCONST_DVARBOOL_ai_disablelookatanimated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_disablelookatanimated") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  _RCX = this->m_pAI;
  if ( v7->current.enabled )
  {
    _RCX->lookAtInfo.curLookAtPitch = 0.0;
    this->m_pAI->lookAtInfo.curLookAtYaw = 0.0;
    this->m_pAI->lookAtInfo.curLookAtYawVel = 0.0;
    this->m_pAI->lookAtInfo.curLookAtPitchVel = 0.0;
    return;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0C58h]
    vmovss  [rbp+150h+var_128], xmm0
    vmovss  xmm1, dword ptr [rcx+0C5Ch]
    vmovss  [rbp+150h+var_12C], xmm1
    vmovss  xmm0, dword ptr [rcx+0C50h]
    vmovss  [rbp+150h+var_130], xmm0
    vmovss  xmm1, dword ptr [rcx+0C54h]
    vmovaps [rsp+250h+var_30], xmm6
    vmovss  [rbp+150h+var_134], xmm1
  }
  ent = _RCX->ent;
  __asm
  {
    vmovaps [rsp+250h+var_40], xmm7
    vmovaps [rsp+250h+var_50], xmm8
    vmovaps [rsp+250h+var_70], xmm10
  }
  AnglesToAxis(&ent->r.currentAngles, &axis.tagOriginAxis);
  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovss  dword ptr [rsp+250h+in1+8], xmm10
    vmovss  xmm1, dword ptr [rax+0C48h]
    vmovss  xmm0, dword ptr [rax+0C4Ch]
    vunpcklps xmm0, xmm1, xmm0
    vmovsd  qword ptr [rbp+150h+angles], xmm0
  }
  angles.v[2] = in1.v[2];
  AnglesToAxis(&angles, &axis.neutralAxis);
  G_Main_GetTime();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
  }
  _RAX = this->m_pAI;
  __asm
  {
    vsubss  xmm0, xmm1, dword ptr [rax+0C78h]
    vmulss  xmm7, xmm0, cs:__real@3a83126f
    vmovaps xmm2, xmm7; dtime
    vmovss  dword ptr [rax+0C78h], xmm1
  }
  AIScriptedInterface::UpdateLookAtTrackingState(this, &axis, *(float *)&_XMM2);
  if ( this->m_pAI->lookAtInfo.lookAtIntensity >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_lookat.cpp", 661, ASSERT_TYPE_ASSERT, "(m_pAI->lookAtInfo.lookAtIntensity < 2)", (const char *)&queryFormat, "m_pAI->lookAtInfo.lookAtIntensity < LOOKAT_NUM_INTENSITIES") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm
  {
    vunpcklps xmm0, xmm10, xmm10
    vmovss  dword ptr [rsp+250h+in1+8], xmm10
  }
  v232.v[2] = in1.v[2];
  v28 = m_pAI->ent;
  __asm { vmovsd  qword ptr [rsp+250h+var_1E0], xmm0 }
  number = v28->s.number;
  v30 = Ai_Asm::Singleton();
  InstanceIfExists = Ai_Asm::GetInstanceIfExists(v30, NULL, number);
  v32 = InstanceIfExists;
  v33 = !InstanceIfExists || Common_Asm::Utils::CurrentStateHasFlag(InstanceIfExists, (const scr_string_t)scr_const.nolookat);
  v34 = this->InScriptedState(this);
  v35 = this->m_pAI;
  v36 = v34;
  if ( !v34 && v35->lookAtInfo.bDisableStateLookAt )
  {
    v37 = 1;
    v38 = this->m_pAI;
LABEL_16:
    v39 = 0;
    v35 = v38;
    goto LABEL_17;
  }
  v37 = 0;
  v38 = this->m_pAI;
  if ( !v36 || !v35->lookAtInfo.bDisableScriptedLookAt )
    goto LABEL_16;
  v39 = 1;
LABEL_17:
  v40 = v35->lookAtInfo.bLookAtWaitingForAimStart && !Common_Asm::Utils::EventFired(v32, (const scr_string_t)scr_const.start_aim);
  v41 = this->m_pAI->lookAtInfo.lookAtType[0] && !v33 && !v37 && !v39 && !v40;
  v42 = DCONST_DVARBOOL_ai_lookatnone;
  if ( !DCONST_DVARBOOL_ai_lookatnone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatnone") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = 0;
  if ( !v42->current.enabled )
    v43 = v41;
  if ( v43 )
  {
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm8, dword ptr [rax+0C70h]
      vmovss  xmm6, dword ptr [rax+0C74h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+250h+var_1E0+4]
      vmovss  xmm8, dword ptr [rsp+250h+var_1E0]
    }
  }
  v47 = DCONST_DVARBOOL_ai_lookatusedebugangles;
  if ( !DCONST_DVARBOOL_ai_lookatusedebugangles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatusedebugangles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  if ( v47->current.enabled )
  {
    _RSI = DCONST_DVARFLT_ai_lookatpitch;
    if ( !DCONST_DVARFLT_ai_lookatpitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatpitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_ai_lookatyaw;
    if ( !DCONST_DVARFLT_ai_lookatyaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_lookatyaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm3, dword ptr [rax+0C6Ch]
    vsubss  xmm0, xmm6, dword ptr [rax+0C64h]
    vmulss  xmm2, xmm0, dword ptr ds:rva TABLE_HEAD_SPRING_PARAMS.m_SpringCoef[r14+r12*8]
    vmulss  xmm1, xmm3, ds:rva TABLE_HEAD_SPRING_PARAMS.m_DampCoef[r14+r12*8]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm2, cs:s_VelMax; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vaddss  xmm3, xmm0, xmm3
    vmovss  dword ptr [rax+0C6Ch], xmm3
  }
  _RAX = this->m_pAI;
  __asm { vmovss  xmm0, dword ptr [rax+0C6Ch]; val }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0C6Ch], xmm0 }
  _RAX = this->m_pAI;
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rax+0C6Ch]
    vaddss  xmm1, xmm0, dword ptr [rax+0C64h]
    vmovss  dword ptr [rax+0C64h], xmm1
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm3, dword ptr [rax+0C68h]
    vsubss  xmm0, xmm8, dword ptr [rax+0C60h]
    vmulss  xmm2, xmm0, dword ptr ds:rva TABLE_HEAD_SPRING_PARAMS.m_SpringCoef[r14+r12*8]
    vmulss  xmm1, xmm3, ds:rva TABLE_HEAD_SPRING_PARAMS.m_DampCoef[r14+r12*8]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm2, cs:s_VelMax; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vaddss  xmm3, xmm0, xmm3
    vmovss  dword ptr [rax+0C68h], xmm3
  }
  _RAX = this->m_pAI;
  __asm { vmovss  xmm0, dword ptr [rax+0C68h]; val }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0C68h], xmm0 }
  _RAX = this->m_pAI;
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rax+0C68h]
    vaddss  xmm1, xmm0, dword ptr [rax+0C60h]
    vmovss  dword ptr [rax+0C60h], xmm1
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+0C54h]; max
    vmovss  xmm1, dword ptr [rax+0C50h]; min
    vmovss  xmm0, dword ptr [rax+0C60h]; val
    vmovss  xmm6, dword ptr [rax+0C5Ch]
    vmovss  xmm7, dword ptr [rax+0C58h]
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm
  {
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
    vmovss  dword ptr [rax+0C60h], xmm0
  }
  _RAX = this->m_pAI;
  __asm { vmovss  xmm0, dword ptr [rax+0C64h]; val }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0C64h], xmm0 }
  v94 = DCONST_DVARBOOL_ai_debuglookatanimated;
  if ( !DCONST_DVARBOOL_ai_debuglookatanimated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debuglookatanimated") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v94);
  v95 = !v94->current.enabled;
  if ( v94->current.enabled )
  {
    _RCX = this->m_pAI;
    __asm
    {
      vmovaps [rsp+250h+var_60], xmm9
      vmovaps [rsp+250h+var_80], xmm11
      vcomiss xmm10, dword ptr [rcx+0C80h]
    }
    if ( v95 )
    {
      _RAX = _RCX->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+130h]
        vmovss  dword ptr [rsp+250h+outEyePos], xmm0
        vmovss  xmm1, dword ptr [rax+134h]
        vmovss  dword ptr [rsp+250h+outEyePos+4], xmm1
        vmovss  xmm0, dword ptr [rax+138h]
        vaddss  xmm2, xmm0, dword ptr [rcx+0C80h]
        vmovss  dword ptr [rsp+250h+outEyePos+8], xmm2
      }
    }
    else
    {
      AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
      _RCX = this->m_pAI;
    }
    if ( v43 )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
        vmovups xmmword ptr [rsp+250h+color], xmm0
      }
      G_DebugLine(&outEyePos, &_RCX->lookAtInfo.vLookAtPos, &color, 0);
      _RCX = this->m_pAI;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+0C60h]
      vmovss  xmm0, dword ptr [rcx+0C64h]
      vunpcklps xmm0, xmm1, xmm0
      vmovss  dword ptr [rsp+250h+in1+8], xmm10
    }
    v241.v[2] = in1.v[2];
    __asm { vmovsd  qword ptr [rbp+150h+var_E0], xmm0 }
    AngleVectors(&v241, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+150h+forward+8]
      vmovss  xmm6, dword ptr [rbp+150h+forward]
      vmovss  xmm7, dword ptr [rbp+150h+forward+4]
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+in2+1Ch]
      vmovss  xmm11, cs:__real@42480000
      vmulss  xmm2, xmm6, dword ptr [rbp+150h+in2]
      vmulss  xmm1, xmm7, dword ptr [rbp+150h+in2+0Ch]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+150h+in2+18h]
      vmulss  xmm2, xmm7, dword ptr [rbp+150h+in2+14h]
      vaddss  xmm9, xmm3, xmm1
      vmulss  xmm3, xmm6, dword ptr [rbp+150h+in2+4]
      vmulss  xmm1, xmm7, dword ptr [rbp+150h+in2+10h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm9, dword ptr [rbp+150h+axis]
      vmulss  xmm3, xmm6, dword ptr [rbp+150h+in2+8]
      vaddss  xmm8, xmm4, xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+in2+20h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm2, xmm8, dword ptr [rbp+150h+axis+0Ch]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm8, dword ptr [rbp+150h+axis+10h]
      vaddss  xmm5, xmm4, xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+axis+18h]
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm4, xmm11
      vaddss  xmm0, xmm1, dword ptr [rsp+250h+outEyePos]
      vmulss  xmm1, xmm9, dword ptr [rbp+150h+axis+4]
      vaddss  xmm3, xmm2, xmm1
      vmovss  dword ptr [rbp+150h+end], xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+axis+1Ch]
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm9, dword ptr [rbp+150h+axis+8]
      vmovss  xmm9, cs:__real@3f800000
      vmulss  xmm1, xmm2, xmm11
      vaddss  xmm3, xmm1, dword ptr [rsp+250h+outEyePos+4]
      vmulss  xmm2, xmm8, dword ptr [rbp+150h+axis+14h]
      vmulss  xmm1, xmm5, dword ptr [rbp+150h+axis+20h]
      vmovss  dword ptr [rbp+150h+end+4], xmm3
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm2, xmm3, xmm1
      vmovups xmm1, cs:__xmm@3f80000000000000000000003f800000
      vmulss  xmm0, xmm2, xmm11
      vaddss  xmm3, xmm0, dword ptr [rsp+250h+outEyePos+8]
      vmovss  dword ptr [rbp+150h+end+8], xmm3
      vmovups xmmword ptr [rbp+150h+var_C0], xmm1
    }
    if ( v43 )
    {
      __asm
      {
        vmovss  dword ptr [rbp+150h+var_C0], xmm10
        vmovss  dword ptr [rbp+150h+var_C0+8], xmm9
      }
    }
    G_DebugLine(&outEyePos, &end, &v243, 0);
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rsp+250h+in1+8], xmm10
      vmovss  xmm1, dword ptr [rax+0C70h]
      vmovss  xmm0, dword ptr [rax+0C74h]
      vunpcklps xmm0, xmm1, xmm0
      vmovsd  qword ptr [rbp+150h+var_D0], xmm0
    }
    v242.v[2] = in1.v[2];
    AngleVectors(&v242, &v239, NULL, NULL);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+150h+var_100+4]
      vmovss  xmm6, dword ptr [rbp+150h+var_100]
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+in2+0Ch]
      vmovss  xmm4, dword ptr [rbp+150h+var_100+8]
      vmulss  xmm1, xmm6, dword ptr [rbp+150h+in2]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+in2+10h]
      vmulss  xmm1, xmm4, dword ptr [rbp+150h+in2+18h]
      vaddss  xmm8, xmm2, xmm1
      vmulss  xmm2, xmm6, dword ptr [rbp+150h+in2+4]
      vmulss  xmm1, xmm4, dword ptr [rbp+150h+in2+1Ch]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+150h+in2+14h]
      vmulss  xmm2, xmm6, dword ptr [rbp+150h+in2+8]
      vaddss  xmm7, xmm3, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbp+150h+in2+20h]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm2, xmm8, dword ptr [rbp+150h+axis]
      vmulss  xmm0, xmm7, dword ptr [rbp+150h+axis+0Ch]
      vaddss  xmm5, xmm3, xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+150h+axis+18h]
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm8, dword ptr [rbp+150h+axis+4]
      vmulss  xmm0, xmm2, xmm11
      vaddss  xmm3, xmm0, dword ptr [rsp+250h+outEyePos]
      vmulss  xmm0, xmm7, dword ptr [rbp+150h+axis+10h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+150h+axis+1Ch]
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm8, dword ptr [rbp+150h+axis+8]
      vmulss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+150h+var_F0], xmm3
      vaddss  xmm3, xmm0, dword ptr [rsp+250h+outEyePos+4]
      vmulss  xmm0, xmm7, dword ptr [rbp+150h+axis+14h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+150h+axis+20h]
      vaddss  xmm2, xmm2, xmm1
      vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
      vmulss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+150h+var_F0+4], xmm3
      vaddss  xmm3, xmm0, dword ptr [rsp+250h+outEyePos+8]
      vmovss  dword ptr [rbp+150h+var_F0+8], xmm3
      vmovups xmmword ptr [rsp+250h+color], xmm1
    }
    G_DebugLine(&outEyePos, &v240, &color, 1);
    __asm
    {
      vunpcklps xmm0, xmm9, xmm10
      vmovss  dword ptr [rsp+250h+color+8], xmm10
    }
    in1.v[2] = color.v[2];
    __asm { vmovsd  qword ptr [rsp+250h+in1], xmm0 }
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &out);
    __asm
    {
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+out]
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos]
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+out+4]
      vmovss  dword ptr [rbp+150h+out], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos+4]
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+out+8]
      vmovss  dword ptr [rbp+150h+out+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos+8]
      vmovss  dword ptr [rsp+250h+color+8], xmm10
      vunpcklps xmm0, xmm10, xmm9
    }
    in1.v[2] = color.v[2];
    __asm
    {
      vmovss  dword ptr [rbp+150h+out+8], xmm2
      vmovsd  qword ptr [rsp+250h+in1], xmm0
    }
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &v234);
    __asm
    {
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+var_1C0]
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos]
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+var_1C0+4]
      vmovss  dword ptr [rbp+150h+var_1C0], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos+4]
      vmulss  xmm1, xmm11, dword ptr [rbp+150h+var_1C0+8]
      vmovss  dword ptr [rbp+150h+var_1C0+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+250h+outEyePos+8]
      vmovss  dword ptr [rsp+250h+color+8], xmm9
      vunpcklps xmm0, xmm10, xmm10
    }
    in1.v[2] = color.v[2];
    __asm
    {
      vmovss  dword ptr [rbp+150h+var_1C0+8], xmm2
      vmovsd  qword ptr [rsp+250h+in1], xmm0
    }
    MatrixTransformVector(&in1, &axis.neutralAxis, (vec3_t *)&color);
    MatrixTransformVector((const vec3_t *)&color, &axis.tagOriginAxis, &v232);
    __asm
    {
      vmulss  xmm2, xmm11, dword ptr [rsp+250h+var_1E0]
      vmulss  xmm3, xmm11, dword ptr [rsp+250h+var_1E0+4]
      vaddss  xmm1, xmm2, dword ptr [rsp+250h+outEyePos]
      vaddss  xmm0, xmm3, dword ptr [rsp+250h+outEyePos+4]
      vmulss  xmm4, xmm11, dword ptr [rsp+250h+var_1E0+8]
      vmovss  dword ptr [rsp+250h+var_1E0], xmm1
      vaddss  xmm1, xmm4, dword ptr [rsp+250h+outEyePos+8]
      vmovss  dword ptr [rsp+250h+var_1E0+4], xmm0
      vmovups xmm0, cs:__xmm@3f8000003e8000003e8000003f800000
      vmovss  dword ptr [rsp+250h+var_1E0+8], xmm1
      vmovups xmmword ptr [rsp+250h+color], xmm0
    }
    G_DebugLine(&outEyePos, &out, &color, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003e8000003f8000003e800000
      vmovups xmmword ptr [rsp+250h+color], xmm0
    }
    G_DebugLine(&outEyePos, &v234, &color, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f8000003e8000003e800000
      vmovups xmmword ptr [rsp+250h+color], xmm0
    }
    G_DebugLine(&outEyePos, &v232, &color, 1);
    __asm { vmovss  xmm2, cs:__real@41f00000; length }
    G_DebugAxis(&axis.tagOriginAxis, &this->m_pAI->ent->r.currentOrigin, *(float *)&_XMM2, 0, 1);
    v217 = this->m_pAI;
    _RAX = v217->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rbp+150h+angles], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rbp+150h+angles+4], xmm1
      vaddss  xmm2, xmm11, dword ptr [rax+138h]
      vmovss  dword ptr [rbp+150h+angles+8], xmm2
    }
    Com_sprintf<32>((char (*)[32])dest, "lookat: [%d] %s", v43, g_lookAtTypeStrings[(unsigned __int8)v217->lookAtInfo.lookAtType[0]]);
    __asm { vmovss  xmm2, cs:__real@3f000000; scale }
    G_DebugString(&angles, &colorYellow, *(float *)&_XMM2, dest, 1);
    __asm
    {
      vmovaps xmm11, [rsp+250h+var_80]
      vmovaps xmm9, [rsp+250h+var_60]
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+250h+var_50]
    vmovaps xmm7, [rsp+250h+var_40]
    vmovaps xmm6, [rsp+250h+var_30]
    vmovaps xmm10, [rsp+250h+var_70]
  }
}

/*
==============
AIScriptedInterface::UpdateLookAtTrackingState
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAtTrackingState(AIScriptedInterface *this, const ActorLookAtUpdateData *data, double dtime)
{
  bool v13; 
  char v33; 
  char v74; 
  float minYaw; 
  __int64 v97; 
  vec3_t outEyePos; 
  vec3_t mulVec; 
  vec3_t angles; 
  vec3_t solution; 
  vec3_t vec; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-78h], xmm12 }
  v13 = (unsigned __int64)&v97 == _security_cookie;
  _RCX = this->m_pAI;
  _RDI = data;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx+0C80h]
    vmovaps xmmword ptr [r11-68h], xmm11
    vmovaps xmmword ptr [r11-88h], xmm13
    vmovaps xmm13, xmm2
  }
  if ( v13 )
  {
    _RAX = _RCX->ent;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+108h+outEyePos], xmm1
      vmovss  xmm3, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+108h+outEyePos+4], xmm3
      vmovss  xmm0, dword ptr [rax+138h]
      vaddss  xmm4, xmm0, dword ptr [rcx+0C80h]
      vmovss  dword ptr [rsp+108h+outEyePos+8], xmm4
    }
  }
  else
  {
    AIScriptedInterface::GetApproxEyePos(this, &outEyePos, 0);
    _RCX = this->m_pAI;
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+108h+outEyePos+8]
      vmovss  xmm3, dword ptr [rsp+108h+outEyePos+4]
      vmovss  xmm1, dword ptr [rsp+108h+outEyePos]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0C3Ch]
    vsubss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rsp+108h+mulVec], xmm1
    vmovss  xmm2, dword ptr [rcx+0C40h]
    vsubss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+108h+mulVec+4], xmm0
    vmovss  xmm1, dword ptr [rcx+0C44h]
    vsubss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rsp+108h+mulVec+8], xmm2
  }
  MatrixVecMultiply(&_RDI->tagOriginAxis, &mulVec, &solution);
  MatrixVecMultiply(&_RDI->neutralAxis, &solution, &vec);
  vectoangles(&vec, &angles);
  __asm
  {
    vmovss  xmm7, cs:__real@3b360b61
    vmulss  xmm3, xmm7, dword ptr [rsp+108h+angles]
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm4, xmm7, dword ptr [rsp+108h+angles+4]
    vmovss  xmm11, cs:__real@43b40000
    vaddss  xmm1, xmm3, xmm8
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm9, xmm1, xmm11
    vmovss  xmm1, dword ptr [rdi+78h]; min
    vcomiss xmm9, xmm1
    vmulss  xmm12, xmm0, xmm11
  }
  if ( !(v33 | v13) )
  {
    __asm { vcomiss xmm9, dword ptr [rdi+74h] }
    if ( v33 )
    {
      _RAX = this->m_pAI;
      __asm { vmovss  dword ptr [rax+0C74h], xmm9 }
      goto LABEL_13;
    }
  }
  _RAX = this->m_pAI;
  __asm
  {
    vmovaps [rsp+108h+var_18], xmm6
    vmovss  xmm5, dword ptr [rax+0C74h]
    vsubss  xmm0, xmm9, xmm5
    vmulss  xmm4, xmm0, xmm7
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm0, xmm11
    vaddss  xmm0, xmm2, xmm5; val
    vmovss  xmm2, dword ptr [rdi+74h]; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rax+0C74h], xmm0
    vmulss  xmm6, xmm7, dword ptr [rdi+78h]
    vmulss  xmm4, xmm7, dword ptr [rdi+74h]
    vmovss  xmm7, cs:__real@43340000
    vaddss  xmm1, xmm6, xmm8
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm6, xmm2
    vsubss  xmm5, xmm4, xmm3
    vaddss  xmm1, xmm5, xmm0
    vmulss  xmm1, xmm1, xmm7
    vmovaps xmm0, xmm9; angle
    vaddss  xmm6, xmm1, xmm11
  }
  AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vxorps  xmm1, xmm13, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm2, xmm6, xmm0
    vmovaps xmm6, [rsp+108h+var_18]
    vcmpless xmm0, xmm7, xmm2
    vblendvps xmm0, xmm1, xmm13, xmm0
    vaddss  xmm0, xmm0, dword ptr [rcx+0C7Ch]; val
    vmovss  xmm1, cs:__real@bf000000; min
    vcomiss xmm0, xmm1
  }
  if ( v74 | v13 )
  {
    minYaw = _RDI->minYaw;
LABEL_11:
    this->m_pAI->lookAtInfo.targetLookAtYaw = minYaw;
    goto LABEL_12;
  }
  __asm { vcomiss xmm0, xmm8 }
  if ( !v74 )
  {
    minYaw = _RDI->maxYaw;
    goto LABEL_11;
  }
LABEL_12:
  __asm { vmovaps xmm2, xmm8; max }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+0C7Ch], xmm0 }
LABEL_13:
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+70h]; min
    vmovss  xmm2, dword ptr [rdi+6Ch]; max
    vcomiss xmm1, xmm2
    vmovaps xmm13, [rsp+108h+var_88]
    vmovaps xmm11, [rsp+108h+var_68]
    vmovaps xmm10, [rsp+108h+var_58]
    vmovaps xmm9, [rsp+108h+var_48]
    vmovaps xmm8, [rsp+108h+var_38]
    vmovaps xmm7, [rsp+108h+var_28]
  }
  if ( v33 )
  {
    __asm { vmovaps xmm0, xmm12; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0C70h], xmm0 }
  }
  else
  {
    _RAX = this->m_pAI;
    __asm { vmovss  dword ptr [rax+0C70h], xmm1 }
  }
  __asm { vmovaps xmm12, [rsp+108h+var_78] }
}

/*
==============
AIScriptedInterface::setAnimLookAtNeutralDir
==============
*/

void __fastcall AIScriptedInterface::setAnimLookAtNeutralDir(AIScriptedInterface *this, double neutralPitch, double neutralYaw)
{
  vec2_t v3; 

  __asm
  {
    vmovss  dword ptr [rsp+arg_0], xmm1
    vmovss  dword ptr [rsp+arg_0+4], xmm2
  }
  this->m_pAI->lookAtInfo.vLookAtNeutralOffset = v3;
}

/*
==============
AIScriptedInterface::setAnimLookAtRanges
==============
*/

void __fastcall AIScriptedInterface::setAnimLookAtRanges(AIScriptedInterface *this, double minPitch, double maxPitch, double minYaw, float maxYaw)
{
  vec2_t v6; 

  __asm
  {
    vmovss  xmm0, [rsp+maxYaw]
    vmovss  dword ptr [rsp+arg_0], xmm1
    vmovss  dword ptr [rsp+arg_0+4], xmm2
  }
  this->m_pAI->lookAtInfo.vLookAtPitchLimits = v6;
  __asm
  {
    vmovss  dword ptr [rsp+arg_0], xmm3
    vmovss  dword ptr [rsp+arg_0+4], xmm0
  }
  this->m_pAI->lookAtInfo.vLookAtYawLimits = v6;
}

