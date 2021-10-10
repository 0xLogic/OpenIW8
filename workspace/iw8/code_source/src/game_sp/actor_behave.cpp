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
void AIScriptedInterface::Behave_CheckLockGoal(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  float v4; 
  bool v5; 
  float *p_number; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( !AIScriptedInterface::IsAtGoal(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 38, ASSERT_TYPE_ASSERT, "(IsAtGoal())", (const char *)&queryFormat, "IsAtGoal()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->useEnemyGoal && ((m_pAI->eAnimMode - 1) & 0xFFFFFFFD) != 0 && level.time >= m_pAI->mayMoveTime + 1000 && !AIScriptedInterface::KeepClaimedNode(this) )
  {
    v3 = this->m_pAI;
    v4 = v3->codeGoal.radius - 30.0;
    if ( v4 <= 0.0 )
      goto LABEL_13;
    v5 = AICommonInterface::Use3DPathing(this);
    v3 = this->m_pAI;
    p_number = (float *)&v3->ent->s.number;
    v7 = v3->codeGoal.pos.v[0];
    v8 = v3->codeGoal.pos.v[1];
    if ( v5 )
    {
      v9 = v3->codeGoal.pos.v[2] - p_number[78];
      v10 = (float)((float)(v7 - p_number[76]) * (float)(v7 - p_number[76])) + (float)((float)(v8 - p_number[77]) * (float)(v8 - p_number[77]));
    }
    else
    {
      v9 = v7 - p_number[76];
      v10 = (float)(v8 - p_number[77]) * (float)(v8 - p_number[77]);
    }
    if ( (float)(v10 + (float)(v9 * v9)) >= (float)(v4 * v4) )
LABEL_13:
      v3->moveMode = 0;
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
  __int64 v6; 
  float v7; 
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
      v7 = outLastKnownPos.v[2];
      pNavigator = m_pAI->pNavigator;
      v6 = *(__int64 *)outLastKnownPos.v;
      ((void (__fastcall *)(AINavigator *, __int64 *, vec3_t *))pNavigator->GetClosestReachablePoint)(pNavigator, &v6, &outLastKnownPos);
    }
    AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, &outLastKnownPos);
    AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, 16.0);
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

char __fastcall AIScriptedInterface::Behave_ReacquireStepMove(AIScriptedInterface *this, double fDist)
{
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 
  AINavigator2D *v6; 
  const tacpoint_t *v9; 
  team_t nodeClaimTeam; 
  const bfx::AreaHandle *hArea; 
  const tacpoint_t *ClosestPointWithVisWithinRadiusWithNavLos; 
  const dvar_t *v13; 
  const tacpoint_t *v14; 
  vec3_t origin; 
  vec3_t outPos; 

  _XMM6 = *(_OWORD *)&fDist;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 376, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 377, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return 0;
  m_pAI = this->m_pAI;
  origin = m_pAI->ent->r.currentOrigin;
  v6 = m_pAI->pNavigator->Get2DNavigator(m_pAI->pNavigator);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 385, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  __asm
  {
    vcmpltss xmm1, xmm6, cs:__real@42400000
    vblendvps xmm0, xmm6, xmm0, xmm1
  }
  v9 = Sentient_NearestTacPoint(TargetSentient);
  if ( !v9 )
    return 0;
  nodeClaimTeam = this->m_pAI->sentient->eTeam;
  hArea = AINavigator2D::GetCurArea(v6);
  ClosestPointWithVisWithinRadiusWithNavLos = TacGraph_FindClosestPointWithVisWithinRadiusWithNavLos(&origin, 48.0, *(float *)&_XMM0, &origin, v9, &origin, hArea, 1, nodeClaimTeam);
  v13 = DVARBOOL_ai_debugReacquire;
  v14 = ClosestPointWithVisWithinRadiusWithNavLos;
  if ( !DVARBOOL_ai_debugReacquire && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugReacquire") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    G_DebugCircle(&origin, *(float *)&_XMM0, &colorLtGreen, 0, 1, 60);
    if ( !v14 )
      return 0;
    G_DebugStarWithSize(&v14->m_Pos, &colorLtOrange, 4.0);
  }
  if ( v14 && AICommonInterface::PointAtGoal(this, &v14->m_Pos, &this->m_pAI->codeGoal) )
  {
    TacGraph_GetApproxGroundPosForPoint(v14, &outPos);
    AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, &outPos);
    AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, 16.0);
    AIScriptedInterface::SetReacquire(this, AI_REACQUIRE_ENABLED_STEP, TargetSentient->ent->s.number);
    return 1;
  }
  return 0;
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
void AIScriptedInterface::Behave_Stop(AIScriptedInterface *this)
{
  const pathnode_t *NodeToUseForAnimscript; 
  sentient_s *TargetSentient; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  float v6; 
  bool v7; 
  gentity_s *ent; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

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
      v5 = this->m_pAI;
      v6 = v5->codeGoal.radius - 30.0;
      if ( v6 <= 0.0 )
        goto LABEL_33;
      v7 = AICommonInterface::Use3DPathing(this);
      v5 = this->m_pAI;
      ent = v5->ent;
      v9 = v5->codeGoal.pos.v[0];
      v10 = v5->codeGoal.pos.v[1] - v5->ent->r.currentOrigin.v[1];
      if ( v7 )
      {
        v11 = v5->codeGoal.pos.v[2] - ent->r.currentOrigin.v[2];
        v12 = (float)(v10 * v10) + (float)((float)(v9 - ent->r.currentOrigin.v[0]) * (float)(v9 - ent->r.currentOrigin.v[0]));
      }
      else
      {
        v11 = v9 - ent->r.currentOrigin.v[0];
        v12 = v10 * v10;
      }
      if ( (float)(v12 + (float)(v11 * v11)) >= (float)(v6 * v6) )
LABEL_33:
        v5->moveMode = 0;
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
    if ( v5->codeGoal.bMultiGoalPath && AICommonInterface::PointNearPoint(this, &v5->ent->r.currentOrigin, &v5->codeGoal.pos, 6.0) )
      this->m_pAI->scriptGoalPath.numPoints = 0;
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
  const tacpoint_t *v4; 
  __int128 v6; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  __int128 v20; 
  __int128 v21; 
  float v25; 
  ai_scripted_t *v26; 
  __int128 v27; 
  __int128 v28; 
  float v32; 
  float v33; 
  float v34; 
  float *p_number; 
  const tacpoint_t *ClosestPointWithVisNearConeWithinRadius; 
  vec3_t *p_outPos; 
  float v38; 
  int dir; 
  vec3_t origin; 
  vec3_t forward; 
  vec3_t outPos; 
  float v43; 
  float v44; 
  float v45; 
  vec3_t v46; 
  float v47; 
  bfx::AreaHandle v48; 
  bfx::LinkHandle v49; 

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
          AIScriptedInterface::Behave_ReacquireStepMove(this, 128.0);
          return;
        }
        sentient = TargetEntity->sentient;
        if ( sentient )
        {
          v4 = Sentient_NearestTacPoint(sentient);
          if ( v4 )
          {
            _XMM7 = LODWORD(FLOAT_60_0);
            if ( AICommonInterface::HasPath(this) && ((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator) )
            {
              this->m_pAI->pNavigator->GetSnappedPathStartPos(this->m_pAI->pNavigator, (vec3_t *)&v43);
              this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &outPos);
              v6 = LODWORD(v44);
              *(float *)&v6 = (float)((float)((float)(v44 - outPos.v[1]) * (float)(v44 - outPos.v[1])) + (float)((float)(v43 - outPos.v[0]) * (float)(v43 - outPos.v[0]))) + (float)((float)(v45 - outPos.v[2]) * (float)(v45 - outPos.v[2]));
              _XMM4 = v6;
              __asm
              {
                vcmpltss xmm1, xmm4, cs:__real@44a20000
                vblendvps xmm6, xmm7, xmm0, xmm1
              }
              bfx::AreaHandle::AreaHandle(&v48);
              bfx::LinkHandle::LinkHandle(&v49);
              LOBYTE(v10) = 1;
              ((void (__fastcall *)(AINavigator *, __int64, __int64, vec3_t *, _BYTE))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v11, v10, &v46, 0);
              origin = v46;
              LOBYTE(dir) = 0;
              LOBYTE(v12) = 1;
              ((void (__fastcall *)(AINavigator *, __int64, __int64, vec3_t *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v13, v12, &v46, dir);
              if ( (float)(v47 - *(float *)&_XMM6) <= 24.0 )
              {
                m_pAI = this->m_pAI;
                ent = m_pAI->ent;
                v14 = origin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
                forward.v[0] = v14;
                v20 = LODWORD(origin.v[1]);
                *(float *)&v20 = origin.v[1] - ent->r.currentOrigin.v[1];
                v15 = v20;
                forward.v[1] = *(float *)&v20;
                v17 = origin.v[2] - ent->r.currentOrigin.v[2];
              }
              else
              {
                v14 = v46.v[0] - origin.v[0];
                v16 = LODWORD(v46.v[1]);
                *(float *)&v16 = v46.v[1] - origin.v[1];
                v15 = v16;
                v17 = v46.v[2] - origin.v[2];
              }
              v21 = v15;
              *(float *)&v21 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14)) + (float)(v17 * v17));
              _XMM3 = v21;
              __asm
              {
                vcmpless xmm0, xmm3, cs:__real@80000000
                vblendvps xmm1, xmm3, xmm2, xmm0
              }
              forward.v[0] = v14 * (float)(1.0 / *(float *)&_XMM1);
              forward.v[1] = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM1);
              forward.v[2] = v17 * (float)(1.0 / *(float *)&_XMM1);
              bfx::LinkHandle::~LinkHandle(&v49);
              bfx::AreaHandle::~AreaHandle(&v48);
              v25 = origin.v[2];
            }
            else
            {
              v26 = this->m_pAI;
              v27 = LODWORD(v26->Physics.vVelocity.v[0]);
              v28 = v27;
              *(float *)&v28 = (float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(v26->Physics.vVelocity.v[1] * v26->Physics.vVelocity.v[1])) + (float)(v26->Physics.vVelocity.v[2] * v26->Physics.vVelocity.v[2]);
              if ( *(float *)&v28 <= 1.0 )
              {
                AngleVectors(&v26->ent->r.currentAngles, &forward, NULL, NULL);
                v26 = this->m_pAI;
                v34 = forward.v[2];
                v33 = forward.v[1];
                v32 = forward.v[0];
              }
              else
              {
                *(float *)&v28 = fsqrt(*(float *)&v28);
                _XMM1 = v28;
                __asm
                {
                  vcmpless xmm0, xmm1, cs:__real@80000000
                  vblendvps xmm0, xmm1, xmm5, xmm0
                }
                v32 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v27;
                forward.v[0] = v32;
                v33 = (float)(1.0 / *(float *)&_XMM0) * v26->Physics.vVelocity.v[1];
                forward.v[1] = v33;
                v34 = (float)(1.0 / *(float *)&_XMM0) * v26->Physics.vVelocity.v[2];
                forward.v[2] = v34;
              }
              p_number = (float *)&v26->ent->s.number;
              origin.v[0] = (float)(v32 * 36.0) + p_number[76];
              origin.v[1] = (float)(v33 * 36.0) + p_number[77];
              v25 = (float)(v34 * 36.0) + p_number[78];
            }
            origin.v[2] = v25 + 60.0;
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ReacquireDoneTac");
            ClosestPointWithVisNearConeWithinRadius = TacGraph_FindClosestPointWithVisNearConeWithinRadius(&origin, 256.0, &origin, v4, &forward, 0.2588, 0.30000001, 1, this->m_pAI->sentient->eTeam);
            Sys_ProfEndNamedEvent();
            if ( ClosestPointWithVisNearConeWithinRadius )
            {
              TacGraph_GetApproxGroundPosForPoint(ClosestPointWithVisNearConeWithinRadius, &outPos);
              p_outPos = &outPos;
LABEL_26:
              AIScriptedInterface::SetBTGoalPos(this, AI_BT_GOAL_PRIORITY_URGENT, p_outPos);
              AIScriptedInterface::SetBTGoalRadius(this, AI_BT_GOAL_PRIORITY_URGENT, 30.0);
              this->ClearKeepClaimedNode(this);
              return;
            }
            if ( TargetEntity->sentient )
            {
              if ( AICommonInterface::HasPath(this) )
              {
                AICommonInterface::GetPathFinalGoal(this, &outPos);
                p_outPos = &TargetEntity->r.currentOrigin;
                v38 = (float)((float)((float)(TargetEntity->r.currentOrigin.v[1] - outPos.v[1]) * (float)(TargetEntity->r.currentOrigin.v[1] - outPos.v[1])) + (float)((float)(TargetEntity->r.currentOrigin.v[0] - outPos.v[0]) * (float)(TargetEntity->r.currentOrigin.v[0] - outPos.v[0]))) + (float)((float)(TargetEntity->r.currentOrigin.v[2] - outPos.v[2]) * (float)(TargetEntity->r.currentOrigin.v[2] - outPos.v[2]));
                if ( v38 > 4096.0 && v38 < 147456.0 )
                  goto LABEL_26;
              }
            }
          }
        }
      }
    }
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
  gentity_s *v3; 
  ai_scripted_t *m_pAI; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  vec3_t vFinalGoal; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 238, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 239, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  if ( !AIScriptedInterface::IsDoingReacquire(this) || this->IsInPain(this) || this->InScriptedState(this) )
    return 0;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v3 = TargetEntity;
  if ( TargetEntity && TargetEntity->s.number != this->m_pAI->combat.reacquireTarget )
    return 1;
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  if ( !AICommonInterface::PointAtGoal(this, &vFinalGoal, &this->m_pAI->codeGoal) )
    return 1;
  if ( !AICommonInterface::CanSeeEnemy(this) || !AIScriptedInterface::CanShootEnemy(this, 250, 0, 1) )
    return 0;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_behave.cpp", 265, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( v3->sentient )
  {
    m_pAI = this->m_pAI;
    v5 = v3->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v6 = v3->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v7 = v3->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    v8 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
    if ( Sentient_IsIndoor(v3->sentient) )
    {
      if ( v8 < 36864.0 )
        return 1;
    }
    else if ( v8 < 1048576.0 )
    {
      return 1;
    }
  }
  if ( !this->m_pAI->sentient->pClaimedNode || AIScriptedInterface::KeepClaimedNode(this) )
    return 0;
  pathnode_t::GetPos(this->m_pAI->sentient->pClaimedNode, &pos);
  return AICommonInterface::PointAt(this, &this->m_pAI->ent->r.currentOrigin, &pos);
}

