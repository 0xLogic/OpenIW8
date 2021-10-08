/*
==============
AIStateCallback_Generic_Suspend
==============
*/
void AIStateCallback_Generic_Suspend(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 53, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Generic_Suspend(m_pAI, state);
}

/*
==============
AIStateCallback_Generic_Finish
==============
*/
void AIStateCallback_Generic_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 54, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Generic_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_Generic_Resume
==============
*/
bool AIStateCallback_Generic_Resume(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 55, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Generic_Resume(m_pAI, state);
}

/*
==============
AIStateCallback_Generic_Pain
==============
*/
void AIStateCallback_Generic_Pain(ai_scripted_t *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v11; 

  AIWrapper::AIWrapper(&v11, pSelf);
  m_pAI = v11.m_pAI;
  if ( !v11.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 56, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Generic_Pain(m_pAI, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc);
}

/*
==============
AIStateCallback_Generic_Touch
==============
*/
void AIStateCallback_Generic_Touch(ai_scripted_t *pSelf, gentity_s *other)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 57, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Generic_Touch(m_pAI, other);
}

/*
==============
AIStateCallback_Behave_Start
==============
*/
bool AIStateCallback_Behave_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 59, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Behave_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Behave_Resume
==============
*/
bool AIStateCallback_Behave_Resume(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 60, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Behave_Resume(m_pAI, state);
}

/*
==============
AIStateCallback_Behave_Finish
==============
*/
void AIStateCallback_Behave_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 61, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Behave_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_Behave_Suspend
==============
*/
void AIStateCallback_Behave_Suspend(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 62, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Behave_Suspend(m_pAI, state);
}

/*
==============
AIStateCallback_Behave_Think
==============
*/
actor_think_result_t AIStateCallback_Behave_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 63, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Behave_Think(m_pAI);
}

/*
==============
AIStateCallback_Behave_Touch
==============
*/
void AIStateCallback_Behave_Touch(ai_scripted_t *pSelf, gentity_s *other)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 64, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Behave_Touch(m_pAI, other);
}

/*
==============
AIStateCallback_Negotiation_Start
==============
*/
bool AIStateCallback_Negotiation_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 66, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Negotiation_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Negotiation_Finish
==============
*/
void AIStateCallback_Negotiation_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 67, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Negotiation_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_Negotiation_Think
==============
*/
actor_think_result_t AIStateCallback_Negotiation_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 68, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Negotiation_Think(m_pAI);
}

/*
==============
AIStateCallback_Turret_Start
==============
*/
bool AIStateCallback_Turret_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 71, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Turret_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Turret_Finish
==============
*/
void AIStateCallback_Turret_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 72, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Turret_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_Turret_Suspend
==============
*/
void AIStateCallback_Turret_Suspend(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 73, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Turret_Suspend(m_pAI, state);
}

/*
==============
AIStateCallback_Turret_Think
==============
*/
actor_think_result_t AIStateCallback_Turret_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 74, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Turret_Think(m_pAI);
}

/*
==============
AIStateCallback_Turret_Touch
==============
*/
void AIStateCallback_Turret_Touch(ai_scripted_t *pSelf, gentity_s *other)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 75, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Turret_Touch(m_pAI, other);
}

/*
==============
AIStateCallback_Turret_Pain
==============
*/
void AIStateCallback_Turret_Pain(ai_scripted_t *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v11; 

  AIWrapper::AIWrapper(&v11, pSelf);
  m_pAI = v11.m_pAI;
  if ( !v11.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 76, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Turret_Pain(m_pAI, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc);
}

/*
==============
AIStateCallback_ScriptedAnim_Start
==============
*/
bool AIStateCallback_ScriptedAnim_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 78, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::ScriptedAnim_Start(m_pAI, state);
}

/*
==============
AIStateCallback_ScriptedAnim_Finish
==============
*/
void AIStateCallback_ScriptedAnim_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 79, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::ScriptedAnim_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_ScriptedAnim_Think
==============
*/
actor_think_result_t AIStateCallback_ScriptedAnim_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 80, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::ScriptedAnim_Think(m_pAI);
}

/*
==============
AIStateCallback_CustomAnim_Start
==============
*/
bool AIStateCallback_CustomAnim_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 82, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::CustomAnim_Start(m_pAI, state);
}

/*
==============
AIStateCallback_CustomAnim_Think
==============
*/
actor_think_result_t AIStateCallback_CustomAnim_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 83, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::CustomAnim_Think(m_pAI);
}

/*
==============
AIStateCallback_CustomAnim_Finish
==============
*/
void AIStateCallback_CustomAnim_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 84, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::CustomAnim_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_BadPlace_Flee_Start
==============
*/
bool AIStateCallback_BadPlace_Flee_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 87, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::BadPlace_Flee_Start(m_pAI, state);
}

/*
==============
AIStateCallback_BadPlace_Flee_Finish
==============
*/
void AIStateCallback_BadPlace_Flee_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 88, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::BadPlace_Flee_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_BadPlace_Flee_Think
==============
*/
actor_think_result_t AIStateCallback_BadPlace_Flee_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 89, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::BadPlace_Flee_Think(m_pAI);
}

/*
==============
AIStateCallback_Flashbanged_Start
==============
*/
bool AIStateCallback_Flashbanged_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 91, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Flashbanged_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Flashbanged_Think
==============
*/
actor_think_result_t AIStateCallback_Flashbanged_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 92, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Flashbanged_Think(m_pAI);
}

/*
==============
AIStateCallback_Pain_Start
==============
*/
bool AIStateCallback_Pain_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 95, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Pain_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Pain_Finish
==============
*/
void AIStateCallback_Pain_Finish(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v4; 

  AIWrapper::AIWrapper(&v4, pSelf);
  m_pAI = v4.m_pAI;
  if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 96, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  AIScriptedInterface::Pain_Finish(m_pAI, state);
}

/*
==============
AIStateCallback_Pain_Think
==============
*/
actor_think_result_t AIStateCallback_Pain_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 97, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Pain_Think(m_pAI);
}

/*
==============
AIStateCallback_Death_Start
==============
*/
bool AIStateCallback_Death_Start(ai_scripted_t *pSelf, ai_state_t state)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v5; 

  AIWrapper::AIWrapper(&v5, pSelf);
  m_pAI = v5.m_pAI;
  if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 99, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Death_Start(m_pAI, state);
}

/*
==============
AIStateCallback_Death_Think
==============
*/
actor_think_result_t AIStateCallback_Death_Think(ai_scripted_t *pSelf)
{
  AIScriptedInterface *m_pAI; 
  AIWrapper v3; 

  AIWrapper::AIWrapper(&v3, pSelf);
  m_pAI = v3.m_pAI;
  if ( !v3.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_function_table.cpp", 100, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return AIScriptedInterface::Death_Think(m_pAI);
}

