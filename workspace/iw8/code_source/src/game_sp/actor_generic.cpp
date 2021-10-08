/*
==============
AIScriptedInterface::Generic_Pain
==============
*/

void __fastcall AIScriptedInterface::Generic_Pain(AIScriptedInterface *this, gentity_s *attacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  ?Generic_Pain@AIScriptedInterface@@QEBAXPEAUgentity_s@@HAEBTvec3_t@@H1W4hitLocation_t@@@Z(this, attacker, iDamage, vPoint, iMod, vDir, hitLoc);
}

/*
==============
AIScriptedInterface::Generic_Finish
==============
*/

void __fastcall AIScriptedInterface::Generic_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Generic_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Generic_Suspend
==============
*/

void __fastcall AIScriptedInterface::Generic_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Generic_Suspend@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Generic_Resume
==============
*/

bool __fastcall AIScriptedInterface::Generic_Resume(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Generic_Resume@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::Generic_Touch
==============
*/

void __fastcall AIScriptedInterface::Generic_Touch(AIScriptedInterface *this, gentity_s *pOther)
{
  ?Generic_Touch@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, pOther);
}

/*
==============
AIScriptedInterface::Generic_Finish
==============
*/
void AIScriptedInterface::Generic_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ;
}

/*
==============
AIScriptedInterface::Generic_Pain
==============
*/
void AIScriptedInterface::Generic_Pain(AIScriptedInterface *this, gentity_s *attacker, int iDamage, const vec3_t *vPoint)
{
  ;
}

/*
==============
AIScriptedInterface::Generic_Resume
==============
*/
__int64 AIScriptedInterface::Generic_Resume(AIScriptedInterface *this, ai_state_t ePrevState)
{
  unsigned int stateLevel; 
  ai_scripted_t *m_pAI; 
  __int64 v7; 

  stateLevel = this->m_pAI->stateLevel;
  if ( stateLevel >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) - 1 )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState ) - 1\n\t%i not in [0, %i)", stateLevel, 5) )
    __debugbreak();
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v7) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 44, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "( m_pAI->eState[m_pAI->stateLevel] ) = %i", v7) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( !AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnStart )
  {
    LODWORD(v7) = m_pAI->eState[m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 45, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnStart ) )", "( m_pAI->eState[m_pAI->stateLevel] ) = %i", v7) )
      __debugbreak();
  }
  return ((__int64 (__fastcall *)(ai_scripted_t *, _QWORD))AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnStart)(this->m_pAI, (unsigned int)ePrevState);
}

/*
==============
AIScriptedInterface::Generic_Suspend
==============
*/
void AIScriptedInterface::Generic_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  unsigned int stateLevel; 
  ai_scripted_t *m_pAI; 
  __int64 v6; 

  stateLevel = this->m_pAI->stateLevel;
  if ( stateLevel >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 26, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", stateLevel, 6) )
    __debugbreak();
  if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
  {
    LODWORD(v6) = this->m_pAI->eState[this->m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 27, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "( m_pAI->eState[m_pAI->stateLevel] ) = %i", v6) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( !AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnFinish )
  {
    LODWORD(v6) = m_pAI->eState[m_pAI->stateLevel];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_generic.cpp", 28, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnFinish ) )", "( m_pAI->eState[m_pAI->stateLevel] ) = %i", v6) )
      __debugbreak();
  }
  AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnFinish(this->m_pAI, eNextState);
}

/*
==============
AIScriptedInterface::Generic_Touch
==============
*/
void AIScriptedInterface::Generic_Touch(AIScriptedInterface *this, gentity_s *pOther)
{
  __int64 iHitEntnum; 

  iHitEntnum = this->m_pAI->Physics.iHitEntnum;
  if ( pOther->s.number == (_DWORD)iHitEntnum )
  {
    if ( level.gentities[iHitEntnum].client )
      this->ClearPath(this);
  }
}

