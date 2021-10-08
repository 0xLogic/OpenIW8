/*
==============
AIScriptedInterface::ShouldIgnorePain
==============
*/

bool __fastcall AIScriptedInterface::ShouldIgnorePain(AIScriptedInterface *this)
{
  return ?ShouldIgnorePain@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::IsInPain
==============
*/

bool __fastcall AIScriptedInterface::IsInPain(AIScriptedInterface *this)
{
  return ?IsInPain@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Pain_Finish
==============
*/

void __fastcall AIScriptedInterface::Pain_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Pain_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Flashbanged_Start
==============
*/

bool __fastcall AIScriptedInterface::Flashbanged_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Flashbanged_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::IsFlashBanged
==============
*/

bool __fastcall AIScriptedInterface::IsFlashBanged(AIScriptedInterface *this)
{
  return ?IsFlashBanged@AIScriptedInterface@@UEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Flashbanged_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Flashbanged_Think(AIScriptedInterface *this)
{
  return ?Flashbanged_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Pain_Start
==============
*/

bool __fastcall AIScriptedInterface::Pain_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Pain_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Pain_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Pain_Think(AIScriptedInterface *this)
{
  return ?Pain_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIScriptedInterface::Flashbanged_Start
==============
*/
char AIScriptedInterface::Flashbanged_Start(AIScriptedInterface *this, __int64 ePrevState)
{
  ((void (__fastcall *)(AIScriptedInterface *, __int64))this->ClearPath)(this, ePrevState);
  return 1;
}

/*
==============
AIScriptedInterface::Flashbanged_Think
==============
*/
__int64 AIScriptedInterface::Flashbanged_Think(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 131, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 132, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  this->SetDebugInfo(this, "flashbanged");
  if ( AIScriptedInterface::IsAnimScriptAlive(this) )
  {
    AIScriptedInterface::SetOrientMode(this, AI_ORIENT_DONT_CHANGE_RELATIVE);
    AIScriptedInterface::PostThink(this);
    return 0i64;
  }
  else
  {
    AIScriptedInterface::PopState(this);
    return 1i64;
  }
}

/*
==============
AIScriptedInterface::IsFlashBanged
==============
*/
bool AIScriptedInterface::IsFlashBanged(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 36, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI->eState[this->m_pAI->stateLevel] == AIS_FLASHBANGED;
}

/*
==============
AIScriptedInterface::IsInPain
==============
*/
bool AIScriptedInterface::IsInPain(AIScriptedInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 15, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  return this->m_pAI->eState[this->m_pAI->stateLevel] == AIS_PAIN;
}

/*
==============
AIScriptedInterface::Pain_Finish
==============
*/
void AIScriptedInterface::Pain_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ;
}

/*
==============
AIScriptedInterface::Pain_Start
==============
*/
char AIScriptedInterface::Pain_Start(AIScriptedInterface *this, __int64 ePrevState)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 50, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->painDeath.iPainTime = level.time;
  ((void (__fastcall *)(AIScriptedInterface *, __int64))this->ClearPath)(this, ePrevState);
  GScr_Notify(this->m_pAI->ent, scr_const.pain, 0);
  return 1;
}

/*
==============
AIScriptedInterface::Pain_Think
==============
*/
__int64 AIScriptedInterface::Pain_Think(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 81, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 82, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  this->SetDebugInfo(this, "pain");
  if ( level.time <= this->m_pAI->painDeath.iPainTime || AIScriptedInterface::IsAnimScriptAlive(this) )
  {
    if ( EntHandle::isDefined(&this->m_pAI->sentient->lastAttacker) )
    {
      m_pAI = this->m_pAI;
      if ( level.time - m_pAI->painDeath.iPainTime >= 500 )
      {
        Actor_BroadcastTeamEvent(m_pAI->sentient, AI_EV_PAIN);
        EntHandle::setEnt(&this->m_pAI->sentient->lastAttacker, NULL);
      }
    }
    AIScriptedInterface::PreThink(this);
    AIScriptedInterface::SetOrientMode(this, AI_ORIENT_DONT_CHANGE_RELATIVE);
    this->AnimPain(this);
    AIScriptedInterface::PostThink(this);
    return 0i64;
  }
  else
  {
    this->m_pAI->bForceNextPathFindImmediate = 1;
    AIScriptedInterface::PopState(this);
    return 1i64;
  }
}

/*
==============
AIScriptedInterface::ShouldIgnorePain
==============
*/
bool AIScriptedInterface::ShouldIgnorePain(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_pain.cpp", 21, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  return m_pAI->combat.damageShield && level.time - m_pAI->painDeath.iPainTime < 5000;
}

