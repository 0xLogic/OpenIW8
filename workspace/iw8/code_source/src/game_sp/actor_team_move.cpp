/*
==============
AIScriptedInterface::TeamMoveBlocked
==============
*/

void __fastcall AIScriptedInterface::TeamMoveBlocked(AIScriptedInterface *this)
{
  ?TeamMoveBlocked@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::MoveAlongPathWithTeam
==============
*/

void __fastcall AIScriptedInterface::MoveAlongPathWithTeam(AIScriptedInterface *this, AI_MOVE_MODE moveMode, bool bUseInterval, bool bAllowGoalPileUp)
{
  ?MoveAlongPathWithTeam@AIScriptedInterface@@QEBAXW4AI_MOVE_MODE@@_N1@Z(this, moveMode, bUseInterval, bAllowGoalPileUp);
}

/*
==============
AIScriptedInterface::TeamMoveBlockedClear
==============
*/

void __fastcall AIScriptedInterface::TeamMoveBlockedClear(AIScriptedInterface *this)
{
  ?TeamMoveBlockedClear@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetTeamMoveStatus
==============
*/

ai_teammove_t __fastcall AIScriptedInterface::GetTeamMoveStatus(AIScriptedInterface *this, bool bUseInterval, bool bAllowGoalPileUp, bool wasMoving)
{
  return ?GetTeamMoveStatus@AIScriptedInterface@@QEBA?AW4ai_teammove_t@@_N00@Z(this, bUseInterval, bAllowGoalPileUp, wasMoving);
}

/*
==============
AIScriptedInterface::GetTeamMoveStatus
==============
*/
__int64 AIScriptedInterface::GetTeamMoveStatus(AIScriptedInterface *this, bool bUseInterval, bool bAllowGoalPileUp, bool wasMoving)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 74, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 75, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 76, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  return 0i64;
}

/*
==============
AIScriptedInterface::MoveAlongPathWithTeam
==============
*/
void AIScriptedInterface::MoveAlongPathWithTeam(AIScriptedInterface *this, AI_MOVE_MODE moveMode, bool bUseInterval, bool bAllowGoalPileUp)
{
  bool v5; 
  ai_scripted_t **p_m_pAI; 
  ai_animmode_t eAnimMode; 
  const dvar_t *v8; 
  ai_scripted_t *m_pAI; 
  unsigned int stateLevel; 
  ai_scripted_t *v11; 
  vec3_t vFinalGoal; 

  if ( moveMode != AI_MOVE_RUN )
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 108, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  v5 = this->IsMoving(this);
  if ( v5 )
  {
    p_m_pAI = &this->m_pAI;
    eAnimMode = this->m_pAI->eAnimMode;
    if ( eAnimMode == AI_ANIM_USE_BOTH_DELTAS_ZONLY_PHYSICS )
    {
      v5 = 0;
      goto LABEL_33;
    }
    if ( eAnimMode == AI_ANIM_USE_BOTH_DELTAS_NOGRAVITY && this->Is3D(this) )
    {
      v5 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v8 = DVARBOOL_ai_iw7;
    if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
      this->m_pAI->eAnimMode = AI_ANIM_MOVE_CODE;
    p_m_pAI = &this->m_pAI;
    this->m_pAI->moveMode = 0;
    m_pAI = this->m_pAI;
    stateLevel = m_pAI->stateLevel;
    if ( stateLevel < 6 )
    {
      p_m_pAI = &this->m_pAI;
      if ( *((_DWORD *)&m_pAI->ent + stateLevel + 473) != 9 )
      {
        m_pAI->prevMoveDir2D = 0i64;
        p_m_pAI = &this->m_pAI;
      }
    }
  }
  if ( !*p_m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 74, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !(*p_m_pAI)->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 75, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_team_move.cpp", 76, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  if ( v5 )
  {
    v11 = *p_m_pAI;
    if ( (*p_m_pAI)->goalPosChanged || v11->pNavigator->m_TimeOfLastPathUpdate == level.time )
      v11->arrivalInfo.arrivalNotifyRequested = 1;
  }
LABEL_33:
  if ( (*p_m_pAI)->arrivalInfo.arrivalNotifyRequested && AIScriptedInterface::CheckCoverApproach(this) )
    AIScriptedInterface::CoverApproachNotify(this);
  if ( !v5 && this->IsMoving(this) )
  {
    AIScriptedInterface::ClearMoveHistory(this);
    (*p_m_pAI)->dodgeMode = NONE;
    (*p_m_pAI)->iPathEndTime = 0;
    (*p_m_pAI)->bArrivalFailed = 0;
    (*p_m_pAI)->stoppedWaitStartTime = 0;
  }
}

/*
==============
AIScriptedInterface::TeamMoveBlocked
==============
*/
void AIScriptedInterface::TeamMoveBlocked(AIScriptedInterface *this)
{
  this->m_pAI->iTeamMoveWaitTime = level.time + ACTOR_TEAMMOVE_WAIT_TIME;
}

/*
==============
AIScriptedInterface::TeamMoveBlockedClear
==============
*/
void AIScriptedInterface::TeamMoveBlockedClear(AIScriptedInterface *this)
{
  this->m_pAI->iTeamMoveWaitTime = 0;
}

