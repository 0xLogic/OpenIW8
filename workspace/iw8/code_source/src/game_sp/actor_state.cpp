/*
==============
AIScriptedInterface::IsStateOnStack
==============
*/

int __fastcall AIScriptedInterface::IsStateOnStack(AIScriptedInterface *this, ai_state_t eState)
{
  return ?IsStateOnStack@AIScriptedInterface@@QEBAHW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::SuspendState
==============
*/

void __fastcall AIScriptedInterface::SuspendState(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?SuspendState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::SetSubState
==============
*/

void __fastcall AIScriptedInterface::SetSubState(AIScriptedInterface *this, ai_substate_t eSubState)
{
  ?SetSubState@AIScriptedInterface@@QEBAXW4ai_substate_t@@@Z(this, eSubState);
}

/*
==============
AIScriptedInterface::PushState
==============
*/

int __fastcall AIScriptedInterface::PushState(AIScriptedInterface *this, ai_state_t eState)
{
  return ?PushState@AIScriptedInterface@@QEBAHW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::PendingTransitionTo
==============
*/

int __fastcall AIScriptedInterface::PendingTransitionTo(AIScriptedInterface *this, ai_state_t eState)
{
  return ?PendingTransitionTo@AIScriptedInterface@@QEBAHW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::StartDefaultState
==============
*/

void __fastcall AIScriptedInterface::StartDefaultState(AIScriptedInterface *this)
{
  ?StartDefaultState@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::GetNextPopedState
==============
*/

ai_state_t __fastcall AIScriptedInterface::GetNextPopedState(AIScriptedInterface *this)
{
  return ?GetNextPopedState@AIScriptedInterface@@QEBA?AW4ai_state_t@@XZ(this);
}

/*
==============
AIScriptedInterface::ThinkStateTransitions
==============
*/

void __fastcall AIScriptedInterface::ThinkStateTransitions(AIScriptedInterface *this)
{
  ?ThinkStateTransitions@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::AllowedToPushState
==============
*/

int __fastcall AIScriptedInterface::AllowedToPushState(AIScriptedInterface *this, ai_state_t eState)
{
  return ?AllowedToPushState@AIScriptedInterface@@QEBAHW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::FinishState
==============
*/

void __fastcall AIScriptedInterface::FinishState(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?FinishState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::ResumePopedState
==============
*/

void __fastcall AIScriptedInterface::ResumePopedState(AIScriptedInterface *this, ai_state_t state)
{
  ?ResumePopedState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, state);
}

/*
==============
AIScriptedInterface::SetDefaultState
==============
*/

void __fastcall AIScriptedInterface::SetDefaultState(AIScriptedInterface *this)
{
  ?SetDefaultState@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ForceState
==============
*/

void __fastcall AIScriptedInterface::ForceState(AIScriptedInterface *this, ai_state_t eState)
{
  ?ForceState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::OnStateChange
==============
*/

void __fastcall AIScriptedInterface::OnStateChange(AIScriptedInterface *this)
{
  ?OnStateChange@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ResumeState
==============
*/

bool __fastcall AIScriptedInterface::ResumeState(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?ResumeState@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIScriptedInterface::PrepareToPushState
==============
*/

void __fastcall AIScriptedInterface::PrepareToPushState(AIScriptedInterface *this, ai_state_t eState)
{
  ?PrepareToPushState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::SetState
==============
*/

void __fastcall AIScriptedInterface::SetState(AIScriptedInterface *this, ai_state_t eState)
{
  ?SetState@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::PopState
==============
*/

void __fastcall AIScriptedInterface::PopState(AIScriptedInterface *this)
{
  ?PopState@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SimplifyStateTransitions
==============
*/

void __fastcall AIScriptedInterface::SimplifyStateTransitions(AIScriptedInterface *this)
{
  ?SimplifyStateTransitions@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::StartState
==============
*/

bool __fastcall AIScriptedInterface::StartState(AIScriptedInterface *this, ai_state_t eStartedState)
{
  return ?StartState@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, eStartedState);
}

/*
==============
AIScriptedInterface::PushState_VerifyInternal
==============
*/

void __fastcall AIScriptedInterface::PushState_VerifyInternal(AIScriptedInterface *this, ai_state_t eState)
{
  ?PushState_VerifyInternal@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eState);
}

/*
==============
AIScriptedInterface::AllowedToPushState
==============
*/
__int64 AIScriptedInterface::AllowedToPushState(AIScriptedInterface *this, ai_state_t eState)
{
  __int64 v2; 
  ai_scripted_t *m_pAI; 
  unsigned int v5; 
  unsigned int simulatedStateLevel; 
  ai_state_t *eSimulatedState; 
  unsigned int v8; 
  const ai_state_t *v9; 

  v2 = eState;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 453, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned int)(v2 - 5) > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 454, ASSERT_TYPE_ASSERT, "(eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST)", (const char *)&queryFormat, "eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 1;
  simulatedStateLevel = m_pAI->simulatedStateLevel;
  if ( simulatedStateLevel )
  {
    eSimulatedState = m_pAI->eSimulatedState;
    while ( 2 )
    {
      v8 = 0;
      v9 = g_eSupercedingStates[v2 - 5];
      do
      {
        if ( eSimulatedState[v5] == *v9 )
          return 0i64;
        ++v8;
        ++v9;
      }
      while ( v8 < 5 );
      if ( ++v5 <= simulatedStateLevel )
        continue;
      break;
    }
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::FinishState
==============
*/
void AIScriptedInterface::FinishState(AIScriptedInterface *this, ai_state_t eNextState)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 

  m_pAI = this->m_pAI;
  v5 = m_pAI->eState[m_pAI->stateLevel];
  if ( !AIFuncTable[m_pAI->species][v5].pfnFinish && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 152, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eCurState].pfnFinish ) )", "( eCurState ) = %i", m_pAI->eState[m_pAI->stateLevel]) )
    __debugbreak();
  AIFuncTable[this->m_pAI->species][v5].pfnFinish(this->m_pAI, eNextState);
}

/*
==============
AIScriptedInterface::ForceState
==============
*/
void AIScriptedInterface::ForceState(AIScriptedInterface *this, ai_state_t eState)
{
  ai_scripted_t *i; 
  ai_scripted_t *m_pAI; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  ai_state_t v9; 
  ai_state_t v10; 
  ai_state_t v11; 
  ai_state_t v12; 
  ai_state_t v13; 
  ai_state_t v14; 
  unsigned int stateLevel; 
  ai_state_t v16; 
  ai_state_t v17; 
  ai_state_t v18; 
  ai_state_t v19; 
  ai_state_t v20; 
  ai_state_t v21; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 649, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 652, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  for ( i = this->m_pAI; i->stateLevel; i = this->m_pAI )
  {
    if ( !AIFuncTable[i->species][i->eState[i->stateLevel]].pfnFinish && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 657, ASSERT_TYPE_ASSERT, "(AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnFinish)", (const char *)&queryFormat, "AIFuncTable[m_pAI->species][m_pAI->eState[m_pAI->stateLevel]].pfnFinish") )
      __debugbreak();
    AIFuncTable[this->m_pAI->species][this->m_pAI->eState[this->m_pAI->stateLevel]].pfnFinish(this->m_pAI, eState);
    --this->m_pAI->stateLevel;
  }
  i->simulatedStateLevel = 0;
  this->m_pAI->transitionCount = 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 521, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->transitionCount >= 0xD )
  {
    v8 = 13;
    LODWORD(v6) = this->m_pAI->transitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->transitionCount ) < (unsigned)( ( sizeof( *array_counter( m_pAI->StateTransitions ) ) + 0 ) )", "m_pAI->transitionCount doesn't index ARRAY_COUNT( m_pAI->StateTransitions )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( m_pAI->simulatedStateLevel )
  {
    v21 = m_pAI->eState[5];
    v20 = m_pAI->eState[4];
    v19 = m_pAI->eState[3];
    v18 = m_pAI->eState[2];
    v17 = m_pAI->eState[1];
    v16 = m_pAI->eState[0];
    stateLevel = m_pAI->stateLevel;
    v14 = m_pAI->eSimulatedState[5];
    v13 = m_pAI->eSimulatedState[4];
    v12 = m_pAI->eSimulatedState[3];
    v11 = m_pAI->eSimulatedState[2];
    v10 = m_pAI->eSimulatedState[1];
    v9 = m_pAI->eSimulatedState[0];
    LODWORD(v7) = m_pAI->simulatedStateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 527, ASSERT_TYPE_ASSERT, "(m_pAI->simulatedStateLevel == 0)", "%s\n\ts level %i stack %i %i %i %i %i %i, level %i stack %i %i %i %i %i %i", "m_pAI->simulatedStateLevel == 0", v7, v9, v10, v11, v12, v13, v14, stateLevel, v16, v17, v18, v19, v20, v21) )
      __debugbreak();
  }
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 532, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount].eTransition = AIS_TRANSITION_SET;
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount++].eState = eState;
  AIScriptedInterface::SimplifyStateTransitions(this);
  this->m_pAI->eSimulatedState[this->m_pAI->simulatedStateLevel] = eState;
}

/*
==============
AIScriptedInterface::GetNextPopedState
==============
*/
__int64 AIScriptedInterface::GetNextPopedState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned int stateLevel; 

  m_pAI = this->m_pAI;
  stateLevel = m_pAI->stateLevel;
  if ( stateLevel )
    return *((unsigned int *)&m_pAI->painDeath.damageMOD + stateLevel);
  else
    return 1i64;
}

/*
==============
AIScriptedInterface::IsStateOnStack
==============
*/
__int64 AIScriptedInterface::IsStateOnStack(AIScriptedInterface *this, ai_state_t eState)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 

  m_pAI = this->m_pAI;
  v3 = 0i64;
  while ( m_pAI->eSimulatedState[v3] != eState )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 > m_pAI->simulatedStateLevel )
      return 0i64;
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::OnStateChange
==============
*/
void AIScriptedInterface::OnStateChange(AIScriptedInterface *this)
{
  ;
}

/*
==============
AIScriptedInterface::PendingTransitionTo
==============
*/
__int64 AIScriptedInterface::PendingTransitionTo(AIScriptedInterface *this, ai_state_t eState)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 
  unsigned int transitionCount; 

  m_pAI = this->m_pAI;
  v3 = 0i64;
  transitionCount = m_pAI->transitionCount;
  if ( !transitionCount )
    return 0i64;
  while ( m_pAI->StateTransitions[v3].eState != eState || (unsigned int)(m_pAI->StateTransitions[v3].eTransition - 1) > 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= transitionCount )
      return 0i64;
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::PopState
==============
*/
void AIScriptedInterface::PopState(AIScriptedInterface *this)
{
  __int64 v2; 
  int v3; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 621, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->transitionCount >= 0xD )
  {
    v3 = 13;
    LODWORD(v2) = this->m_pAI->transitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 622, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->transitionCount ) < (unsigned)( ( sizeof( *array_counter( m_pAI->StateTransitions ) ) + 0 ) )", "m_pAI->transitionCount doesn't index ARRAY_COUNT( m_pAI->StateTransitions )\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  if ( !this->m_pAI->simulatedStateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 623, ASSERT_TYPE_ASSERT, "(m_pAI->simulatedStateLevel > 0)", (const char *)&queryFormat, "m_pAI->simulatedStateLevel > 0") )
    __debugbreak();
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 626, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount].eTransition = AIS_TRANSITION_POP;
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount++].eState = AIS_INVALID;
  AIScriptedInterface::SimplifyStateTransitions(this);
  --this->m_pAI->simulatedStateLevel;
}

/*
==============
AIScriptedInterface::PrepareToPushState
==============
*/
void AIScriptedInterface::PrepareToPushState(AIScriptedInterface *this, ai_state_t eState)
{
  __int64 v2; 
  ai_scripted_t *m_pAI; 
  unsigned int v5; 
  unsigned int simulatedStateLevel; 
  unsigned int v7; 
  const ai_state_t *v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = eState;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 479, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned int)(v2 - 5) > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 480, ASSERT_TYPE_ASSERT, "(eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST)", (const char *)&queryFormat, "eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 1;
  simulatedStateLevel = m_pAI->simulatedStateLevel;
  if ( simulatedStateLevel )
  {
    while ( 2 )
    {
      v7 = 0;
      v8 = g_eSupercededStates[v2 - 5];
      do
      {
        if ( m_pAI->eSimulatedState[v5] == *v8 )
        {
          do
          {
            if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 621, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
              __debugbreak();
            if ( this->m_pAI->transitionCount >= 0xD )
            {
              LODWORD(v10) = 13;
              LODWORD(v9) = this->m_pAI->transitionCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 622, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->transitionCount ) < (unsigned)( ( sizeof( *array_counter( m_pAI->StateTransitions ) ) + 0 ) )", "m_pAI->transitionCount doesn't index ARRAY_COUNT( m_pAI->StateTransitions )\n\t%i not in [0, %i)", v9, v10) )
                __debugbreak();
            }
            if ( !this->m_pAI->simulatedStateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 623, ASSERT_TYPE_ASSERT, "(m_pAI->simulatedStateLevel > 0)", (const char *)&queryFormat, "m_pAI->simulatedStateLevel > 0") )
              __debugbreak();
            if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 626, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
              __debugbreak();
            this->m_pAI->StateTransitions[this->m_pAI->transitionCount].eTransition = AIS_TRANSITION_POP;
            this->m_pAI->StateTransitions[this->m_pAI->transitionCount++].eState = AIS_INVALID;
            AIScriptedInterface::SimplifyStateTransitions(this);
            --this->m_pAI->simulatedStateLevel;
            m_pAI = this->m_pAI;
          }
          while ( v5 <= m_pAI->simulatedStateLevel );
          return;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 5 );
      if ( ++v5 <= simulatedStateLevel )
        continue;
      break;
    }
  }
}

/*
==============
AIScriptedInterface::PushState
==============
*/
__int64 AIScriptedInterface::PushState(AIScriptedInterface *this, ai_state_t eState)
{
  __int64 v2; 
  ai_scripted_t *m_pAI; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int simulatedStateLevel; 
  ai_state_t *eSimulatedState; 
  unsigned int v9; 
  const ai_state_t *v10; 
  ai_scripted_t *v11; 
  ai_scripted_t *v12; 
  unsigned int i; 
  ai_scripted_t *v14; 
  __int64 result; 
  char *fmt; 
  __int64 v17; 
  int v18; 
  int v19; 

  v2 = eState;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 581, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned int)(v2 - 5) > 4 )
  {
    v19 = 9;
    v18 = 5;
    LODWORD(v17) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 582, ASSERT_TYPE_ASSERT, "( AIS_PUSHABLE_FIRST ) <= ( eState ) && ( eState ) <= ( AIS_PUSHABLE_LAST )", "eState not in [AIS_PUSHABLE_FIRST, AIS_PUSHABLE_LAST]\n\t%i not in [%i, %i]", v17, v18, v19) )
      __debugbreak();
  }
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 585, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 453, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned int)(v2 - 5) > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 454, ASSERT_TYPE_ASSERT, "(eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST)", (const char *)&queryFormat, "eState >= AIS_PUSHABLE_FIRST && eState <= AIS_PUSHABLE_LAST") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 1;
  v6 = 0i64;
  simulatedStateLevel = m_pAI->simulatedStateLevel;
  if ( simulatedStateLevel )
  {
    eSimulatedState = m_pAI->eSimulatedState;
    while ( 2 )
    {
      v9 = 0;
      v10 = g_eSupercedingStates[v2 - 5];
      do
      {
        if ( eSimulatedState[v5] == *v10 )
          return 0i64;
        ++v9;
        ++v10;
      }
      while ( v9 < 5 );
      if ( ++v5 <= simulatedStateLevel )
        continue;
      break;
    }
  }
  AIScriptedInterface::PrepareToPushState(this, (ai_state_t)v2);
  v11 = this->m_pAI;
  if ( v11->simulatedStateLevel + 1 >= 5 )
  {
    LODWORD(fmt) = v11->simulatedStateLevel;
    Com_PrintWarning(18, "WARNING: PushState() to eState=%i will fail for entity #%i because eSimulatedState[] is full ( %i )!\neState stack:\n", (unsigned int)v2, (unsigned int)v11->ent->s.number, fmt);
    v12 = this->m_pAI;
    for ( i = 0; i < v12->simulatedStateLevel; ++i )
    {
      Com_PrintWarning(18, "  - %i: %i\n", i, (unsigned int)v12->eSimulatedState[i]);
      v12 = this->m_pAI;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 559, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_pAI->simulatedStateLevel is too large for m_pAI->eState[]. see log for details ( please attach if reporting bug )") )
      __debugbreak();
    v11 = this->m_pAI;
  }
  if ( v11->simulatedStateLevel )
  {
    v14 = v11;
    do
    {
      v11 = v14;
      if ( v14->eSimulatedState[v6] == (_DWORD)v2 )
      {
        LODWORD(v17) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 566, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_pAI->eSimulatedState already has state '%i' on the stack. Duplicates are not allowed and need to be prevented.", v17) )
          __debugbreak();
        v11 = this->m_pAI;
      }
      v6 = (unsigned int)(v6 + 1);
      v14 = v11;
    }
    while ( (unsigned int)v6 < v11->simulatedStateLevel );
  }
  v11->StateTransitions[v11->transitionCount].eTransition = AIS_TRANSITION_PUSH;
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount++].eState = v2;
  AIScriptedInterface::SimplifyStateTransitions(this);
  result = 1i64;
  this->m_pAI->eSimulatedState[++this->m_pAI->simulatedStateLevel] = v2;
  return result;
}

/*
==============
AIScriptedInterface::PushState_VerifyInternal
==============
*/
void AIScriptedInterface::PushState_VerifyInternal(AIScriptedInterface *this, ai_state_t eState)
{
  ai_scripted_t *m_pAI; 
  __int64 v4; 
  ai_scripted_t *v6; 
  unsigned int i; 
  ai_scripted_t *v8; 
  unsigned int fmt; 
  __int64 v10; 

  m_pAI = this->m_pAI;
  v4 = 0i64;
  if ( m_pAI->simulatedStateLevel + 1 >= 5 )
  {
    fmt = m_pAI->simulatedStateLevel;
    Com_PrintWarning(18, "WARNING: PushState() to eState=%i will fail for entity #%i because eSimulatedState[] is full ( %i )!\neState stack:\n", (unsigned int)eState, (unsigned int)m_pAI->ent->s.number, fmt);
    v6 = this->m_pAI;
    for ( i = 0; i < v6->simulatedStateLevel; ++i )
    {
      Com_PrintWarning(18, "  - %i: %i\n", i, (unsigned int)v6->eSimulatedState[i]);
      v6 = this->m_pAI;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 559, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_pAI->simulatedStateLevel is too large for m_pAI->eState[]. see log for details ( please attach if reporting bug )") )
      __debugbreak();
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->simulatedStateLevel )
  {
    do
    {
      v8 = m_pAI;
      if ( m_pAI->eSimulatedState[v4] == eState )
      {
        LODWORD(v10) = eState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 566, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_pAI->eSimulatedState already has state '%i' on the stack. Duplicates are not allowed and need to be prevented.", v10) )
          __debugbreak();
        v8 = this->m_pAI;
      }
      v4 = (unsigned int)(v4 + 1);
      m_pAI = v8;
    }
    while ( (unsigned int)v4 < v8->simulatedStateLevel );
  }
}

/*
==============
AIScriptedInterface::ResumePopedState
==============
*/
void AIScriptedInterface::ResumePopedState(AIScriptedInterface *this, ai_state_t state)
{
  ai_scripted_t *m_pAI; 
  unsigned int stateLevel; 
  ai_scripted_t *v6; 
  __int64 v7; 
  ai_scripted_t *v8; 
  unsigned int v9; 
  char v10; 
  __int64 v11; 

  m_pAI = this->m_pAI;
  while ( 1 )
  {
    stateLevel = m_pAI->stateLevel;
    if ( !stateLevel )
      break;
    m_pAI->stateLevel = stateLevel - 1;
    v6 = this->m_pAI;
    v7 = v6->eState[v6->stateLevel];
    if ( !AIFuncTable[v6->species][v7].pfnResume )
    {
      LODWORD(v11) = v6->eState[v6->stateLevel];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 207, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eCurState].pfnResume ) )", "( eCurState ) = %i", v11) )
        __debugbreak();
    }
    if ( AIFuncTable[this->m_pAI->species][v7].pfnResume(this->m_pAI, state) )
    {
      v10 = 1;
    }
    else
    {
      v8 = this->m_pAI;
      v9 = v8->stateLevel;
      if ( v9 )
        AIScriptedInterface::FinishState(this, *((ai_state_t *)&v8->painDeath.damageMOD + v9));
      else
        AIScriptedInterface::FinishState(this, AIS_BEHAVE);
      v10 = 0;
    }
    m_pAI = this->m_pAI;
    state = m_pAI->eState[m_pAI->stateLevel];
    if ( v10 )
      return;
  }
  AIScriptedInterface::StartDefaultState(this);
}

/*
==============
AIScriptedInterface::ResumeState
==============
*/
char AIScriptedInterface::ResumeState(AIScriptedInterface *this, ai_state_t ePrevState)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 
  ai_scripted_t *v6; 
  unsigned int stateLevel; 

  m_pAI = this->m_pAI;
  v5 = m_pAI->eState[m_pAI->stateLevel];
  if ( !AIFuncTable[m_pAI->species][v5].pfnResume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 207, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eCurState].pfnResume ) )", "( eCurState ) = %i", m_pAI->eState[m_pAI->stateLevel]) )
    __debugbreak();
  if ( AIFuncTable[this->m_pAI->species][v5].pfnResume(this->m_pAI, ePrevState) )
    return 1;
  v6 = this->m_pAI;
  stateLevel = v6->stateLevel;
  if ( stateLevel )
    AIScriptedInterface::FinishState(this, *((ai_state_t *)&v6->painDeath.damageMOD + stateLevel));
  else
    AIScriptedInterface::FinishState(this, AIS_BEHAVE);
  return 0;
}

/*
==============
AIScriptedInterface::SetDefaultState
==============
*/
void AIScriptedInterface::SetDefaultState(AIScriptedInterface *this)
{
  if ( this->m_pAI->stateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 100, ASSERT_TYPE_ASSERT, "(m_pAI->stateLevel == 0)", (const char *)&queryFormat, "m_pAI->stateLevel == 0") )
    __debugbreak();
  if ( this->m_pAI->simulatedStateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 101, ASSERT_TYPE_ASSERT, "(m_pAI->simulatedStateLevel == 0)", (const char *)&queryFormat, "m_pAI->simulatedStateLevel == 0") )
    __debugbreak();
  if ( this->m_pAI->transitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 102, ASSERT_TYPE_ASSERT, "(m_pAI->transitionCount == 0)", (const char *)&queryFormat, "m_pAI->transitionCount == 0") )
    __debugbreak();
  this->m_pAI->isTransitioningStates = 0;
  this->m_pAI->eState[0] = AIS_BEHAVE;
  this->m_pAI->eSimulatedState[0] = AIS_BEHAVE;
  this->m_pAI->species = AI_SPECIES_HUMAN;
  this->m_pAI->CodeOrient.eMode = AI_ORIENT_DONT_CHANGE;
  this->m_pAI->ScriptOrient.eMode = AI_ORIENT_INVALID;
}

/*
==============
AIScriptedInterface::SetState
==============
*/
void AIScriptedInterface::SetState(AIScriptedInterface *this, ai_state_t eState)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  ai_state_t v8; 
  ai_state_t v9; 
  ai_state_t v10; 
  ai_state_t v11; 
  ai_state_t v12; 
  ai_state_t v13; 
  unsigned int stateLevel; 
  ai_state_t v15; 
  ai_state_t v16; 
  ai_state_t v17; 
  ai_state_t v18; 
  ai_state_t v19; 
  ai_state_t v20; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 521, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->transitionCount >= 0xD )
  {
    v7 = 13;
    LODWORD(v5) = this->m_pAI->transitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->transitionCount ) < (unsigned)( ( sizeof( *array_counter( m_pAI->StateTransitions ) ) + 0 ) )", "m_pAI->transitionCount doesn't index ARRAY_COUNT( m_pAI->StateTransitions )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  if ( m_pAI->simulatedStateLevel )
  {
    v20 = m_pAI->eState[5];
    v19 = m_pAI->eState[4];
    v18 = m_pAI->eState[3];
    v17 = m_pAI->eState[2];
    v16 = m_pAI->eState[1];
    v15 = m_pAI->eState[0];
    stateLevel = m_pAI->stateLevel;
    v13 = m_pAI->eSimulatedState[5];
    v12 = m_pAI->eSimulatedState[4];
    v11 = m_pAI->eSimulatedState[3];
    v10 = m_pAI->eSimulatedState[2];
    v9 = m_pAI->eSimulatedState[1];
    v8 = m_pAI->eSimulatedState[0];
    LODWORD(v6) = m_pAI->simulatedStateLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 527, ASSERT_TYPE_ASSERT, "(m_pAI->simulatedStateLevel == 0)", "%s\n\ts level %i stack %i %i %i %i %i %i, level %i stack %i %i %i %i %i %i", "m_pAI->simulatedStateLevel == 0", v6, v8, v9, v10, v11, v12, v13, stateLevel, v15, v16, v17, v18, v19, v20) )
      __debugbreak();
  }
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 532, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount].eTransition = AIS_TRANSITION_SET;
  this->m_pAI->StateTransitions[this->m_pAI->transitionCount++].eState = eState;
  AIScriptedInterface::SimplifyStateTransitions(this);
  this->m_pAI->eSimulatedState[this->m_pAI->simulatedStateLevel] = eState;
}

/*
==============
AIScriptedInterface::SetSubState
==============
*/
void AIScriptedInterface::SetSubState(AIScriptedInterface *this, ai_substate_t eSubState)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 336, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->eSubState[this->m_pAI->stateLevel] = eSubState;
}

/*
==============
AIScriptedInterface::SimplifyStateTransitions
==============
*/
void AIScriptedInterface::SimplifyStateTransitions(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned int transitionCount; 
  __int64 v4; 
  __int64 v5; 
  ai_scripted_t *v6; 
  ai_state_transition_t v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 403, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->transitionCount >= 2 )
  {
    while ( 1 )
    {
      transitionCount = m_pAI->transitionCount;
      v4 = m_pAI->eSubState[2 * transitionCount + 5];
      v5 = *(&m_pAI->iStateTime + 2 * transitionCount);
      if ( (unsigned int)v4 >= 4 )
      {
        LODWORD(v10) = 4;
        LODWORD(v9) = m_pAI->eSubState[2 * transitionCount + 5];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 413, ASSERT_TYPE_ASSERT, "(unsigned)( eCmd1 ) < (unsigned)( ( sizeof( *array_counter( g_eSimplificationRules ) ) + 0 ) )", "eCmd1 doesn't index ARRAY_COUNT( g_eSimplificationRules )\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( (unsigned int)v5 >= 4 )
      {
        LODWORD(v10) = 4;
        LODWORD(v9) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 414, ASSERT_TYPE_ASSERT, "(unsigned)( eCmd2 ) < (unsigned)( ( sizeof( *array_counter( g_eSimplificationRules[0] ) ) + 0 ) )", "eCmd2 doesn't index ARRAY_COUNT( g_eSimplificationRules[0] )\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      v6 = this->m_pAI;
      if ( !v6->Physics.bIsAlive )
        break;
      v7 = g_eSimplificationRules[v4][v5];
      if ( v7 != AIS_TRANSITION_CANONICAL )
      {
        v8 = v6->transitionCount - 2;
        if ( v7 )
        {
          v6->StateTransitions[v8].eTransition = v7;
          this->m_pAI->StateTransitions[this->m_pAI->transitionCount - 2].eState = this->m_pAI->StateTransitions[this->m_pAI->transitionCount - 1].eState;
          --this->m_pAI->transitionCount;
        }
        else
        {
          v6->transitionCount = v8;
        }
        m_pAI = this->m_pAI;
        if ( m_pAI->transitionCount >= 2 )
          continue;
      }
      return;
    }
    Com_PrintWarning(18, "WARNING: ignoring AI state transition on entnum %d (actor is dead)\n", (unsigned int)v6->ent->s.number);
    this->m_pAI->transitionCount = 1;
  }
}

/*
==============
AIScriptedInterface::StartDefaultState
==============
*/
void AIScriptedInterface::StartDefaultState(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int v3; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->stateLevel )
  {
    m_pAI->iStateTime = level.time;
    m_pAI = this->m_pAI;
  }
  if ( !AIFuncTable[m_pAI->species][1].pfnStart )
  {
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 133, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eStartedState].pfnStart ) )", "( eStartedState ) = %i", v3) )
      __debugbreak();
  }
  this->m_pAI->eState[this->m_pAI->stateLevel] = AIS_BEHAVE;
  if ( !AIFuncTable[this->m_pAI->species][1].pfnStart(this->m_pAI, this->m_pAI->eState[this->m_pAI->stateLevel]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 227, ASSERT_TYPE_ASSERT, "(StartState( AIS_DEFAULT ))", (const char *)&queryFormat, "StartState( AIS_DEFAULT )") )
    __debugbreak();
}

/*
==============
AIScriptedInterface::StartState
==============
*/
__int64 AIScriptedInterface::StartState(AIScriptedInterface *this, ai_state_t eStartedState)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 

  m_pAI = this->m_pAI;
  if ( !m_pAI->stateLevel )
  {
    m_pAI->iStateTime = level.time;
    m_pAI = this->m_pAI;
  }
  v5 = eStartedState;
  if ( !AIFuncTable[m_pAI->species][v5].pfnStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 133, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eStartedState].pfnStart ) )", "( eStartedState ) = %i", eStartedState) )
    __debugbreak();
  this->m_pAI->eState[this->m_pAI->stateLevel] = eStartedState;
  return ((__int64 (__fastcall *)(ai_scripted_t *, _QWORD))AIFuncTable[this->m_pAI->species][v5].pfnStart)(this->m_pAI, (unsigned int)this->m_pAI->eState[this->m_pAI->stateLevel]);
}

/*
==============
AIScriptedInterface::SuspendState
==============
*/
void AIScriptedInterface::SuspendState(AIScriptedInterface *this, ai_state_t eNextState)
{
  ai_scripted_t *m_pAI; 
  __int64 v5; 

  m_pAI = this->m_pAI;
  v5 = m_pAI->eState[m_pAI->stateLevel];
  if ( !AIFuncTable[m_pAI->species][v5].pfnSuspend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 170, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eCurState].pfnSuspend ) )", "( eCurState ) = %i", m_pAI->eState[m_pAI->stateLevel]) )
    __debugbreak();
  AIFuncTable[this->m_pAI->species][v5].pfnSuspend(this->m_pAI, eNextState);
}

/*
==============
AIScriptedInterface::ThinkStateTransitions
==============
*/
void AIScriptedInterface::ThinkStateTransitions(AIScriptedInterface *this)
{
  __int64 v2; 
  unsigned int v3; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  ai_scripted_t *v6; 
  ai_state_t eState; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !this->m_pAI->transitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 267, ASSERT_TYPE_ASSERT, "(m_pAI->transitionCount > 0)", (const char *)&queryFormat, "m_pAI->transitionCount > 0") )
    __debugbreak();
  if ( this->m_pAI->isTransitioningStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 273, ASSERT_TYPE_ASSERT, "(!m_pAI->isTransitioningStates)", (const char *)&queryFormat, "!m_pAI->isTransitioningStates") )
    __debugbreak();
  v2 = 0i64;
  v3 = 0;
  this->m_pAI->isTransitioningStates = 1;
  m_pAI = this->m_pAI;
  if ( m_pAI->transitionCount )
  {
    do
    {
      if ( m_pAI->stateLevel >= 6 )
      {
        LODWORD(v10) = 6;
        LODWORD(v9) = m_pAI->stateLevel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( m_pAI->stateLevel ) < (unsigned)( ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ) )", "m_pAI->stateLevel doesn't index ARRAY_COUNT( m_pAI->eState )\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( (unsigned int)(this->m_pAI->eState[this->m_pAI->stateLevel] - 1) > 8 )
      {
        LODWORD(v9) = this->m_pAI->eState[this->m_pAI->stateLevel];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 280, ASSERT_TYPE_ASSERT, "( ( m_pAI->eState[m_pAI->stateLevel] > AIS_INVALID && m_pAI->eState[m_pAI->stateLevel] < AIS_COUNT ) )", "( m_pAI->eState[m_pAI->stateLevel] ) = %i", v9) )
          __debugbreak();
      }
      v5 = this->m_pAI;
      switch ( v5->StateTransitions[v3].eTransition )
      {
        case AIS_TRANSITION_SET:
          AIScriptedInterface::FinishState(this, v5->StateTransitions[v3].eState);
          if ( !AIScriptedInterface::StartState(this, this->m_pAI->StateTransitions[v3].eState) )
            AIScriptedInterface::StartDefaultState(this);
          break;
        case AIS_TRANSITION_PUSH:
          if ( v5->stateLevel + 1 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 292, ASSERT_TYPE_ASSERT, "(m_pAI->stateLevel + 1 < ( sizeof( *array_counter( m_pAI->eState ) ) + 0 ))", (const char *)&queryFormat, "m_pAI->stateLevel + 1 < ARRAY_COUNT( m_pAI->eState )") )
            __debugbreak();
          v6 = this->m_pAI;
          eState = v6->StateTransitions[v3].eState;
          v8 = v6->eState[v6->stateLevel];
          if ( !AIFuncTable[v6->species][v8].pfnSuspend )
          {
            LODWORD(v9) = v6->eState[v6->stateLevel];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 170, ASSERT_TYPE_ASSERT, "( ( AIFuncTable[m_pAI->species][eCurState].pfnSuspend ) )", "( eCurState ) = %i", v9) )
              __debugbreak();
          }
          AIFuncTable[this->m_pAI->species][v8].pfnSuspend(this->m_pAI, eState);
          ++this->m_pAI->stateLevel;
          if ( !AIScriptedInterface::StartState(this, this->m_pAI->StateTransitions[v3].eState) )
            AIScriptedInterface::ResumePopedState(this, this->m_pAI->StateTransitions[v3].eState);
          break;
        case AIS_TRANSITION_POP:
          if ( !v5->stateLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 301, ASSERT_TYPE_ASSERT, "(m_pAI->stateLevel > 0)", (const char *)&queryFormat, "m_pAI->stateLevel > 0") )
            __debugbreak();
          AIScriptedInterface::FinishState(this, this->m_pAI->eState[this->m_pAI->stateLevel - 1]);
          AIScriptedInterface::ResumePopedState(this, this->m_pAI->eState[this->m_pAI->stateLevel]);
          break;
        default:
          LODWORD(v9) = v5->StateTransitions[v3].eTransition;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_state.cpp", 307, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid state transition %i", v9) )
            __debugbreak();
          break;
      }
      m_pAI = this->m_pAI;
      ++v3;
    }
    while ( v3 < m_pAI->transitionCount );
    v2 = 0i64;
  }
  m_pAI->transitionCount = 0;
  this->m_pAI->isTransitioningStates = 0;
  this->m_pAI->simulatedStateLevel = this->m_pAI->stateLevel;
  do
  {
    this->m_pAI->eSimulatedState[v2] = this->m_pAI->eState[v2];
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 <= this->m_pAI->stateLevel );
}

