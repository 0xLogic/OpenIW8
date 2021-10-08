/*
==============
AIScriptedInterface::Behave_Suspend
==============
*/

void __fastcall AIScriptedInterface::Behave_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Behave_Suspend@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Behave_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Behave_Think(AIScriptedInterface *this)
{
  return ?Behave_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Exposed_CheckStopMovingAndStartCombat
==============
*/

bool __fastcall AIScriptedInterface::Exposed_CheckStopMovingAndStartCombat(AIScriptedInterface *this)
{
  return ?Exposed_CheckStopMovingAndStartCombat@AIScriptedInterface@@IEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Behave_CheckLockGoal
==============
*/

void __fastcall AIScriptedInterface::Behave_CheckLockGoal(AIScriptedInterface *this)
{
  ?Behave_CheckLockGoal@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Behave_ReacquireStepMove
==============
*/

bool __fastcall AIScriptedInterface::Behave_ReacquireStepMove(AIScriptedInterface *this, float fDist)
{
  return ?Behave_ReacquireStepMove@AIScriptedInterface@@QEBA_NM@Z(this, fDist);
}

/*
==============
AIScriptedInterface::Behave_Start
==============
*/

bool __fastcall AIScriptedInterface::Behave_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Behave_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Behave_Stop
==============
*/

void __fastcall AIScriptedInterface::Behave_Stop(AIScriptedInterface *this)
{
  ?Behave_Stop@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Behave_StartReacquireMove
==============
*/

bool __fastcall AIScriptedInterface::Behave_StartReacquireMove(AIScriptedInterface *this)
{
  return ?Behave_StartReacquireMove@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Behave_Move
==============
*/

void __fastcall AIScriptedInterface::Behave_Move(AIScriptedInterface *this)
{
  ?Behave_Move@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Behave_Touch
==============
*/

void __fastcall AIScriptedInterface::Behave_Touch(AIScriptedInterface *this, gentity_s *pOther)
{
  ?Behave_Touch@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, pOther);
}

/*
==============
AIScriptedInterface::DecideReacquireDoneBehavior
==============
*/

void __fastcall AIScriptedInterface::DecideReacquireDoneBehavior(AIScriptedInterface *this)
{
  ?DecideReacquireDoneBehavior@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Behave_Resume
==============
*/

bool __fastcall AIScriptedInterface::Behave_Resume(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Behave_Resume@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Behave_Finish
==============
*/

void __fastcall AIScriptedInterface::Behave_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Behave_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Behave_UpdateCombat
==============
*/

void __fastcall AIScriptedInterface::Behave_UpdateCombat(AIScriptedInterface *this)
{
  ?Behave_UpdateCombat@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Behave_FindReacquireDirectPath
==============
*/

void __fastcall AIScriptedInterface::Behave_FindReacquireDirectPath(AIScriptedInterface *this, int ignoreSuppression)
{
  ?Behave_FindReacquireDirectPath@AIScriptedInterface@@QEBAXH@Z(this, ignoreSuppression);
}

/*
==============
AIScriptedInterface::Behave_CheckLockGoal
==============
*/

void __fastcall AIScriptedInterface::Behave_CheckLockGoal(AIScriptedInterface *this, double _XMM1_8)
{
  ai_scripted_t *m_pAI; 

  if ( !AIScriptedInterface::IsAtGoal(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 38, ASSERT_TYPE_ASSERT, "(IsAtGoal())", (const char *)&queryFormat, "IsAtGoal()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->useEnemyGoal && ((m_pAI->eAnimMode - 1) & 0xFFFFFFFD) != 0 && level.time >= m_pAI->mayMoveTime + 1000 && !AIScriptedInterface::KeepClaimedNode(this) )
  {
    _RCX = this->m_pAI;
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, dword ptr [rcx+264h]
      vsubss  xmm6, xmm0, cs:__real@41f00000
      vcomiss xmm6, xmm1
    }
    _RCX->moveMode = 0;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

/*
==============
AIScriptedInterface::Behave_FindReacquireDirectPath
==============
*/
void AIScriptedInterface::Behave_FindReacquireDirectPath(AIScriptedInterface *this, int ignoreSuppression)
{
  const gentity_s *TargetEntity; 
  ai_scripted_t *m_pAI; 
  AINavigator *pNavigator; 
  __int64 v8; 
  float v9; 
  vec3_t outLastKnownPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 302, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 303, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !AICommonInterface::GetTargetEntity(this) || ((this->m_pAI->eState[this->m_pAI->stateLevel] - 1) & 0xFFFFFFF7) != 0 )
  {
    this->ClearPath(this);
  }
  else if ( AICommonInterface::HasPath(this) || level.time >= this->m_pAI->pathWaitTime )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, TargetEntity, &outLastKnownPos);
    m_pAI = this->m_pAI;
    if ( m_pAI->combat.bAggressiveMode )
    {
      __asm { vmovsd  xmm0, qword ptr [rsp+68h+outLastKnownPos] }
      v9 = outLastKnownPos.v[2];
      pNavigator = m_pAI->pNavigator;
      __asm { vmovsd  [rsp+68h+var_38], xmm0 }
      ((void (__fastcall *)(AINavigator *, __int64 *, vec3_t *))pNavigator->GetClosestReachablePoint)(pNavigator, &v8, &outLastKnownPos);
    }
    AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, &outLastKnownPos);
    __asm { vmovss  xmm2, cs:__real@41800000; radius }
    AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, *(float *)&_XMM2);
    if ( AICommonInterface::HasPath(this) || !AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->btGoals[1]) )
      AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_ENABLED, TargetEntity->s.number);
  }
  else
  {
    this->ClearPileUp(this);
  }
}

/*
==============
AIScriptedInterface::Behave_Finish
==============
*/
void AIScriptedInterface::Behave_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  this->m_pAI->threat.newEnemyReaction = 0;
}

/*
==============
AIScriptedInterface::Behave_Move
==============
*/
void AIScriptedInterface::Behave_Move(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 216, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 217, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  AIScriptedInterface::MoveAlongPathWithTeam(this, AI_MOVE_DEFAULT, 1, 1);
}

/*
==============
AIScriptedInterface::Behave_ReacquireStepMove
==============
*/

bool __fastcall AIScriptedInterface::Behave_ReacquireStepMove(AIScriptedInterface *this, double fDist)
{
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 
  AINavigator2D *v11; 
  const tacpoint_t *v15; 
  team_t nodeClaimTeam; 
  const bfx::AreaHandle *hArea; 
  const tacpoint_t *ClosestPointWithVisWithinRadiusWithNavLos; 
  const dvar_t *v22; 
  const tacpoint_t *v23; 
  bool result; 
  vec3_t origin; 
  vec3_t outPos; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 376, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 377, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    goto LABEL_21;
  m_pAI = this->m_pAI;
  _RCX = m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm1
    vmovss  xmm0, dword ptr [rcx+138h]
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
  }
  v11 = m_pAI->pNavigator->Get2DNavigator(m_pAI->pNavigator);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 385, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  __asm
  {
    vcmpltss xmm1, xmm6, cs:__real@42400000
    vmovss  xmm0, cs:__real@42440000
    vblendvps xmm0, xmm6, xmm0, xmm1
    vmovss  [rsp+0A8h+var_58], xmm0
  }
  v15 = Sentient_NearestTacPoint(TargetSentient);
  if ( !v15 )
    goto LABEL_21;
  nodeClaimTeam = this->m_pAI->sentient->eTeam;
  hArea = AINavigator2D::GetCurArea(v11);
  __asm
  {
    vmovss  xmm6, [rsp+0A8h+var_58]
    vmovss  xmm1, cs:__real@42400000; minRadius
    vmovaps xmm2, xmm6; maxRadius
  }
  ClosestPointWithVisWithinRadiusWithNavLos = TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos(&origin, *(float *)&_XMM1, *(float *)&_XMM2, &origin, v15, &origin, hArea, 1, nodeClaimTeam);
  v22 = DVARBOOL_ai_debugReacquire;
  v23 = ClosestPointWithVisWithinRadiusWithNavLos;
  if ( !DVARBOOL_ai_debugReacquire && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugReacquire") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    __asm { vmovaps xmm1, xmm6; radius }
    G_DebugCircle(&origin, *(float *)&_XMM1, &colorLtGreen, 0, 1, 60);
    if ( !v23 )
    {
LABEL_21:
      result = 0;
      goto LABEL_22;
    }
    __asm { vmovss  xmm2, cs:__real@40800000; size }
    G_DebugStarWithSize(&v23->m_Pos, &colorLtOrange, *(float *)&_XMM2);
  }
  if ( !v23 || !AICommonInterface::PointAtGoal(this, &v23->m_Pos, &this->m_pAI->codeGoal) )
    goto LABEL_21;
  TacGraph_GetApproxGroundPosForPoint(v23, &outPos);
  AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, &outPos);
  __asm { vmovss  xmm2, cs:__real@41800000; radius }
  AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, *(float *)&_XMM2);
  AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_ENABLED_STEP, TargetSentient->ent->s.number);
  result = 1;
LABEL_22:
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
  return result;
}

/*
==============
AIScriptedInterface::Behave_Resume
==============
*/
bool AIScriptedInterface::Behave_Resume(AIScriptedInterface *this, ai_state_t ePrevState)
{
  sentient_s *TargetSentient; 
  sentient_s *v4; 
  bool result; 

  AIScriptedInterface::KillAnimScript(this);
  if ( this->m_pAI->eSubState[this->m_pAI->stateLevel] == STATE_EXPOSED_REACQUIRE_MOVE )
  {
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    v4 = TargetSentient;
    if ( TargetSentient )
    {
      result = AICommonInterface::PointAtGoal(this, &TargetSentient->ent->r.currentOrigin, &this->m_pAI->codeGoal);
      if ( !result )
        return result;
      AIScriptedInterface::FindPathToSentient(this, v4, 0);
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::Behave_Start
==============
*/
char AIScriptedInterface::Behave_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 147, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  AIScriptedInterface::KillAnimScript(this);
  return 1;
}

/*
==============
AIScriptedInterface::Behave_StartReacquireMove
==============
*/
char AIScriptedInterface::Behave_StartReacquireMove(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 351, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 352, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity || this->m_pAI->eState[this->m_pAI->stateLevel] != AIS_BEHAVE )
    return 0;
  this->ClearKeepClaimedNode(this);
  AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_ENABLED, TargetEntity->s.number);
  return 1;
}

/*
==============
AIScriptedInterface::Behave_Stop
==============
*/

void __fastcall AIScriptedInterface::Behave_Stop(AIScriptedInterface *this, double _XMM1_8)
{
  const pathnode_t *NodeToUseForAnimscript; 
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 114, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 115, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  AIScriptedInterface::CheckCollisions(this);
  this->ClearPileUp(this);
  this->m_pAI->bUseGoalWeight = 0;
  if ( !this->m_pAI->fixedNode )
  {
    NodeToUseForAnimscript = AIScriptedInterface::GetNodeToUseForAnimscript(this);
    if ( NodeToUseForAnimscript )
    {
      if ( AIScriptedInterface::UsingCoverNodes(this) && AIScriptedInterface::ShouldKeepClaimedNode(this) && AICommonInterface::HasSecondaryTargets(this) && !AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy(this, NodeToUseForAnimscript) )
        AIScriptedInterface::NodeClaimRevoked(this, 3000);
    }
  }
  if ( AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 124, ASSERT_TYPE_ASSERT, "( !HasPath() )", (const char *)&queryFormat, "!HasPath()") )
    __debugbreak();
  if ( !AIScriptedInterface::PathPending(this) )
    this->ClearPath(this);
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( AIScriptedInterface::IsAtGoal(this) && TargetSentient )
  {
    if ( !AIScriptedInterface::IsAtGoal(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 38, ASSERT_TYPE_ASSERT, "(IsAtGoal())", (const char *)&queryFormat, "IsAtGoal()") )
      __debugbreak();
    m_pAI = this->m_pAI;
    if ( !m_pAI->useEnemyGoal && ((m_pAI->eAnimMode - 1) & 0xFFFFFFFD) != 0 && level.time >= m_pAI->mayMoveTime + 1000 && !AIScriptedInterface::KeepClaimedNode(this) )
    {
      _RCX = this->m_pAI;
      __asm
      {
        vmovaps [rsp+48h+var_18], xmm6
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, dword ptr [rcx+264h]
        vsubss  xmm6, xmm0, cs:__real@41f00000
        vcomiss xmm6, xmm1
      }
      _RCX->moveMode = 0;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
  }
}

/*
==============
AIScriptedInterface::Behave_Suspend
==============
*/
void AIScriptedInterface::Behave_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  this->m_pAI->threat.newEnemyReaction = 0;
}

/*
==============
AIScriptedInterface::Behave_Think
==============
*/
__int64 AIScriptedInterface::Behave_Think(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *pTurret; 
  unsigned int v4; 
  ai_scripted_t *v5; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 740, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI", -2i64) )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 741, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  this->SetDebugInfo(this, "exposed");
  SV_Profile_BeginEvent(SVPROF_AI_THINK);
  m_pAI = this->m_pAI;
  pTurret = m_pAI->turret.pTurret;
  if ( pTurret )
  {
    if ( !pTurret->active )
    {
      AIScriptedInterface::SetState(this, AIS_TURRET);
      v4 = 1;
      goto LABEL_33;
    }
    m_pAI->turret.pTurret = NULL;
  }
  AIScriptedInterface::PreThink(this);
  if ( AIScriptedInterface::IsInCoverArrival(this) )
  {
    v5 = this->m_pAI;
    if ( v5->codeGoal.bMultiGoalPath )
    {
      __asm { vmovss  xmm3, cs:__real@40c00000; buffer }
      if ( AICommonInterface::PointNearPoint(this, &v5->ent->r.currentOrigin, &v5->codeGoal.pos, *(float *)&_XMM3) )
        this->m_pAI->scriptGoalPath.numPoints = 0;
    }
    if ( AIScriptedInterface::AtClaimNode(this) )
    {
      this->ClearPath(this);
      this->m_pAI->moveMode = 0;
    }
  }
  else
  {
    AIScriptedInterface::FindPathToGoal(this);
    if ( !AIScriptedInterface::PathPending(this) && (!AICommonInterface::HasPath(this) || AIScriptedInterface::Exposed_CheckStopMovingAndStartCombat(this)) )
      AIScriptedInterface::DecideReacquireDoneBehavior(this);
    if ( AICommonInterface::HasPath(this) )
    {
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 216, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 217, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      AIScriptedInterface::MoveAlongPathWithTeam(this, AI_MOVE_DEFAULT, 1, 1);
    }
    else
    {
      AIScriptedInterface::Behave_Stop(this);
    }
  }
  if ( this->m_pAI->ProneInfo.orientPitch )
    AIScriptedInterface::OrientPitchToGround(this, 1);
  AIScriptedInterface::PostThink(this);
  v4 = 0;
LABEL_33:
  SV_Profile_EndEvent(SVPROF_AI_THINK);
  return v4;
}

/*
==============
AIScriptedInterface::Behave_Touch
==============
*/
void AIScriptedInterface::Behave_Touch(AIScriptedInterface *this, gentity_s *pOther, __int64 a3)
{
  sentient_s *sentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 825, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 826, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 827, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  sentient = pOther->sentient;
  if ( sentient )
  {
    LOBYTE(a3) = 23;
    this->GetPerfectInfo(this, sentient, a3);
  }
}

/*
==============
AIScriptedInterface::Behave_UpdateCombat
==============
*/
void AIScriptedInterface::Behave_UpdateCombat(AIScriptedInterface *this)
{
  const pathnode_t *NodeToUseForAnimscript; 

  AIScriptedInterface::CheckCollisions(this);
  this->ClearPileUp(this);
  this->m_pAI->bUseGoalWeight = 0;
  if ( !this->m_pAI->fixedNode )
  {
    NodeToUseForAnimscript = AIScriptedInterface::GetNodeToUseForAnimscript(this);
    if ( NodeToUseForAnimscript )
    {
      if ( AIScriptedInterface::UsingCoverNodes(this) && AIScriptedInterface::ShouldKeepClaimedNode(this) && AICommonInterface::HasSecondaryTargets(this) && !AIScriptedInterface::Cover_IsNodeSafeFromAnyEnemy(this, NodeToUseForAnimscript) )
        AIScriptedInterface::NodeClaimRevoked(this, 3000);
    }
  }
}

/*
==============
AIScriptedInterface::DecideReacquireDoneBehavior
==============
*/
void AIScriptedInterface::DecideReacquireDoneBehavior(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  sentient_s *sentient; 
  const tacpoint_t *v8; 
  bool HasPath; 
  bool v11; 
  char v13; 
  __int64 v28; 
  __int64 v30; 
  __int64 v35; 
  __int64 v36; 
  const tacpoint_t *ClosestPointWithVisNearConeWithinRadius; 
  char v91; 
  int dir; 
  float v108; 
  float v109; 
  vec3_t origin; 
  vec3_t forward; 
  vec3_t outPos; 
  int v113[4]; 
  int v114; 
  bfx::AreaHandle v118; 
  bfx::LinkHandle v119; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  if ( AIScriptedInterface::IsDoingReacquire(this) && level.time >= this->m_pAI->iTeamMoveWaitTime && !AIScriptedInterface::IsDoingAmbush(this) )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    if ( TargetEntity )
    {
      if ( AIScriptedInterface::GetReacquire(this) == AI_REACQUIRE_REACQUIRED )
      {
        if ( AIScriptedInterface::IsAtGoal(this) )
          AIScriptedInterface::ClearBTGoal(this, AI_BT_GOAL_PRIORITY_URGENT);
      }
      else
      {
        AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_REACQUIRED, TargetEntity->s.number);
        if ( Sentient_IsEnemyIndoor(this->m_pAI->sentient) )
        {
          this->ClearPath(this);
          __asm { vmovss  xmm1, cs:__real@43000000; fDist }
          AIScriptedInterface::Behave_ReacquireStepMove(this, *(float *)&_XMM1);
          goto LABEL_29;
        }
        sentient = TargetEntity->sentient;
        if ( sentient )
        {
          v8 = Sentient_NearestTacPoint(sentient);
          if ( v8 )
          {
            HasPath = AICommonInterface::HasPath(this);
            __asm { vmovss  xmm7, cs:__real@42700000 }
            v11 = !HasPath;
            if ( !HasPath )
              goto LABEL_16;
            __asm { vmovaps xmm1, xmm7 }
            v13 = ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator);
            v11 = v13 == 0;
            if ( v13 )
            {
              this->m_pAI->pNavigator->GetSnappedPathStartPos(this->m_pAI->pNavigator, (vec3_t *)v113);
              this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &outPos);
              __asm
              {
                vmovss  xmm0, [rbp+10h+var_80]
                vsubss  xmm3, xmm0, dword ptr [rbp+10h+outPos]
                vmovss  xmm1, [rbp+10h+var_7C]
                vsubss  xmm2, xmm1, dword ptr [rbp+10h+outPos+4]
                vmovss  xmm0, [rbp+10h+var_78]
                vsubss  xmm4, xmm0, dword ptr [rbp+10h+outPos+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm4, xmm3, xmm0
                vcmpltss xmm1, xmm4, cs:__real@44a20000
                vmovss  xmm0, cs:__real@43160000
                vblendvps xmm6, xmm7, xmm0, xmm1
              }
              bfx::AreaHandle::AreaHandle(&v118);
              bfx::LinkHandle::LinkHandle(&v119);
              LOBYTE(v28) = 1;
              __asm { vmovaps xmm1, xmm6 }
              ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, _BYTE))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v30, v28, &v114, 0);
              __asm
              {
                vmovss  xmm0, [rbp+10h+var_70]
                vmovss  dword ptr [rsp+110h+origin], xmm0
                vmovss  xmm1, [rbp+10h+var_6C]
                vmovss  dword ptr [rsp+110h+origin+4], xmm1
                vmovss  xmm0, [rbp+10h+var_68]
                vmovss  dword ptr [rsp+110h+origin+8], xmm0
                vaddss  xmm1, xmm6, cs:__real@42100000
              }
              LOBYTE(dir) = 0;
              LOBYTE(v35) = 1;
              ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v36, v35, &v114, dir);
              __asm
              {
                vmovss  xmm0, [rbp+10h+var_60]
                vsubss  xmm1, xmm0, xmm6
                vcomiss xmm1, cs:__real@41c00000
              }
              if ( v91 | v11 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+110h+origin]
                  vsubss  xmm4, xmm0, dword ptr [rcx+130h]
                  vmovss  dword ptr [rsp+110h+forward], xmm4
                  vmovss  xmm0, dword ptr [rsp+110h+origin+4]
                  vsubss  xmm5, xmm0, dword ptr [rcx+134h]
                  vmovss  dword ptr [rsp+110h+forward+4], xmm5
                  vmovss  xmm0, dword ptr [rsp+110h+origin+8]
                  vsubss  xmm6, xmm0, dword ptr [rcx+138h]
                }
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, [rbp+10h+var_70]
                  vsubss  xmm4, xmm0, dword ptr [rsp+110h+origin]
                  vmovss  xmm1, [rbp+10h+var_6C]
                  vsubss  xmm5, xmm1, dword ptr [rsp+110h+origin+4]
                  vmovss  xmm0, [rbp+10h+var_68]
                  vsubss  xmm6, xmm0, dword ptr [rsp+110h+origin+8]
                }
              }
              __asm
              {
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm3, xmm2, xmm2
                vcmpless xmm0, xmm3, cs:__real@80000000
                vmovss  xmm2, cs:__real@3f800000
                vblendvps xmm1, xmm3, xmm2, xmm0
                vdivss  xmm2, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm2
                vmovss  dword ptr [rsp+110h+forward], xmm0
                vmulss  xmm1, xmm5, xmm2
                vmovss  dword ptr [rsp+110h+forward+4], xmm1
                vmulss  xmm0, xmm6, xmm2
                vmovss  dword ptr [rsp+110h+forward+8], xmm0
              }
              bfx::LinkHandle::~LinkHandle(&v119);
              bfx::AreaHandle::~AreaHandle(&v118);
              __asm { vmovss  xmm0, dword ptr [rsp+110h+origin+8] }
            }
            else
            {
LABEL_16:
              _RAX = this->m_pAI;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+83Ch]
                vmovss  xmm4, dword ptr [rax+838h]
                vmovss  xmm3, dword ptr [rax+840h]
                vmulss  xmm1, xmm4, xmm4
                vmulss  xmm0, xmm0, xmm0
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm0, xmm2, xmm1
                vmovss  xmm5, cs:__real@3f800000
                vcomiss xmm0, xmm5
              }
              if ( v11 )
              {
                AngleVectors(&_RAX->ent->r.currentAngles, &forward, NULL, NULL);
                __asm
                {
                  vmovss  xmm5, dword ptr [rsp+110h+forward+8]
                  vmovss  xmm4, dword ptr [rsp+110h+forward+4]
                  vmovss  xmm1, dword ptr [rsp+110h+forward]
                }
              }
              else
              {
                __asm
                {
                  vsqrtss xmm1, xmm0, xmm0
                  vcmpless xmm0, xmm1, cs:__real@80000000
                  vblendvps xmm0, xmm1, xmm5, xmm0
                  vdivss  xmm2, xmm5, xmm0
                  vmulss  xmm1, xmm2, xmm4
                  vmovss  dword ptr [rsp+110h+forward], xmm1
                  vmulss  xmm4, xmm2, dword ptr [rax+83Ch]
                  vmovss  dword ptr [rsp+110h+forward+4], xmm4
                  vmulss  xmm5, xmm2, dword ptr [rax+840h]
                  vmovss  dword ptr [rsp+110h+forward+8], xmm5
                }
              }
              __asm
              {
                vmovss  xmm3, cs:__real@42100000
                vmulss  xmm0, xmm1, xmm3
                vaddss  xmm1, xmm0, dword ptr [rax+130h]
                vmovss  dword ptr [rsp+110h+origin], xmm1
                vmulss  xmm2, xmm4, xmm3
                vaddss  xmm0, xmm2, dword ptr [rax+134h]
                vmovss  dword ptr [rsp+110h+origin+4], xmm0
                vmulss  xmm1, xmm5, xmm3
                vaddss  xmm0, xmm1, dword ptr [rax+138h]
              }
            }
            __asm
            {
              vaddss  xmm0, xmm0, xmm7
              vmovss  dword ptr [rsp+110h+origin+8], xmm0
            }
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ReacquireDoneTac");
            __asm
            {
              vmovss  xmm0, cs:__real@3e99999a
              vmovss  dword ptr [rsp+110h+var_E0], xmm0
              vmovss  xmm1, cs:__real@3e84816f
              vmovss  [rsp+110h+var_E8], xmm1
              vmovss  xmm1, cs:__real@43800000; radius
            }
            ClosestPointWithVisNearConeWithinRadius = TacGraph_FindClosestPointWithVisNearConeWithinRadius(&origin, *(float *)&_XMM1, &origin, v8, &forward, v108, v109, 1, this->m_pAI->sentient->eTeam);
            Sys_ProfEndNamedEvent();
            if ( ClosestPointWithVisNearConeWithinRadius )
            {
              TacGraph_GetApproxGroundPosForPoint(ClosestPointWithVisNearConeWithinRadius, &outPos);
              _R8 = &outPos;
LABEL_26:
              AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, _R8);
              __asm { vmovss  xmm2, cs:__real@41f00000; radius }
              AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, *(float *)&_XMM2);
              this->ClearKeepClaimedNode(this);
              goto LABEL_29;
            }
            if ( TargetEntity->sentient )
            {
              if ( AICommonInterface::HasPath(this) )
              {
                AICommonInterface::GetPathFinalGoal(this, &outPos);
                _R8 = &TargetEntity->r.currentOrigin;
                __asm
                {
                  vmovss  xmm0, dword ptr [r8]
                  vsubss  xmm3, xmm0, dword ptr [rbp+10h+outPos]
                  vmovss  xmm1, dword ptr [r8+4]
                  vsubss  xmm2, xmm1, dword ptr [rbp+10h+outPos+4]
                  vmovss  xmm0, dword ptr [r8+8]
                  vsubss  xmm4, xmm0, dword ptr [rbp+10h+outPos+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm5, xmm3, xmm0
                  vcomiss xmm5, cs:__real@45800000
                }
                if ( !(v91 | v11) )
                {
                  __asm { vcomiss xmm5, cs:__real@48100000 }
                  if ( v91 )
                    goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
AIScriptedInterface::Exposed_CheckStopMovingAndStartCombat
==============
*/
bool AIScriptedInterface::Exposed_CheckStopMovingAndStartCombat(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  bool result; 
  vec3_t vFinalGoal; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 238, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 239, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( !AIScriptedInterface::IsDoingReacquire(this) || this->IsInPain(this) || this->InScriptedState(this) )
    goto LABEL_26;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  _RDI = TargetEntity;
  if ( !TargetEntity || TargetEntity->s.number == this->m_pAI->combat.reacquireTarget )
  {
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    if ( AICommonInterface::PointAtGoal(this, &vFinalGoal, &this->m_pAI->codeGoal) )
    {
      if ( AICommonInterface::CanSeeEnemy(this) && AIScriptedInterface::CanShootEnemy(this, 250, 0, 1) )
      {
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 265, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
          __debugbreak();
        if ( _RDI->sentient )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+130h]
            vmovss  xmm1, dword ptr [rdi+134h]
            vsubss  xmm3, xmm0, dword ptr [rcx+130h]
            vsubss  xmm2, xmm1, dword ptr [rcx+134h]
            vmovss  xmm0, dword ptr [rdi+138h]
            vsubss  xmm4, xmm0, dword ptr [rcx+138h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm6, xmm3, xmm0
          }
          if ( Sentient_IsIndoor(_RDI->sentient) )
            __asm { vcomiss xmm6, cs:__real@47100000 }
          else
            __asm { vcomiss xmm6, cs:__real@49800000 }
        }
        if ( this->m_pAI->sentient->pClaimedNode && !AIScriptedInterface::KeepClaimedNode(this) )
        {
          pathnode_t::GetPos(this->m_pAI->sentient->pClaimedNode, &pos);
          result = AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, &pos);
          goto LABEL_27;
        }
      }
LABEL_26:
      result = 0;
      goto LABEL_27;
    }
  }
  result = 1;
LABEL_27:
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

