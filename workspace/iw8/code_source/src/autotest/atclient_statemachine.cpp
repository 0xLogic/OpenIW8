/*
==============
ATClient_StateMachine::~ATClient_StateMachine
==============
*/

void __fastcall ATClient_StateMachine::~ATClient_StateMachine(ATClient_StateMachine *this)
{
  ??1ATClient_StateMachine@@QEAA@XZ(this);
}

/*
==============
ATClient_StateMachine::PrintState
==============
*/

int __fastcall ATClient_StateMachine::PrintState(ATClient_StateMachine *this, LocalClientNum_t localClientNum, unsigned int *outTabCount, char *const buffer, const int bufferSize, const bool useFullNames)
{
  return ?PrintState@ATClient_StateMachine@@QEAAHW4LocalClientNum_t@@PEAIQEADH_N@Z(this, localClientNum, outTabCount, buffer, bufferSize, useFullNames);
}

/*
==============
ATClient_StateMachine::Reset
==============
*/

void __fastcall ATClient_StateMachine::Reset(ATClient_StateMachine *this, LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ?Reset@ATClient_StateMachine@@QEAAXW4LocalClientNum_t@@W4errorParm_t@@@Z(this, localClientNum, errorcode);
}

/*
==============
ATClient_StateMachine::Start
==============
*/

void __fastcall ATClient_StateMachine::Start(ATClient_StateMachine *this, const LocalClientNum_t localClientNum, const unsigned int initialStateIndex)
{
  ?Start@ATClient_StateMachine@@QEAAXW4LocalClientNum_t@@I@Z(this, localClientNum, initialStateIndex);
}

/*
==============
ATClient_StateMachine::Update
==============
*/

bool __fastcall ATClient_StateMachine::Update(ATClient_StateMachine *this, LocalClientNum_t localClientNum, int msec)
{
  return ?Update@ATClient_StateMachine@@QEAA_NW4LocalClientNum_t@@H@Z(this, localClientNum, msec);
}

/*
==============
ATClient_StateMachine::RegisterState
==============
*/

void __fastcall ATClient_StateMachine::RegisterState(ATClient_StateMachine *this, const unsigned int stateIndex, const ATClient_State *state)
{
  ?RegisterState@ATClient_StateMachine@@QEAAXIAEBVATClient_State@@@Z(this, stateIndex, state);
}

/*
==============
ATClient_StateMachine::Initialize
==============
*/

void __fastcall ATClient_StateMachine::Initialize(ATClient_StateMachine *this, const unsigned int numStates)
{
  ?Initialize@ATClient_StateMachine@@QEAAXI@Z(this, numStates);
}

/*
==============
ATClient_StateMachine::ATClient_StateMachine
==============
*/

void __fastcall ATClient_StateMachine::ATClient_StateMachine(ATClient_StateMachine *this, const int smID)
{
  ??0ATClient_StateMachine@@QEAA@H@Z(this, smID);
}

/*
==============
ATClient_StateMachine::ATClient_StateMachine
==============
*/
void ATClient_StateMachine::ATClient_StateMachine(ATClient_StateMachine *this, const int smID)
{
  this->m_smID = smID;
}

/*
==============
ATClient_StateMachine::~ATClient_StateMachine
==============
*/
void ATClient_StateMachine::~ATClient_StateMachine(ATClient_StateMachine *this)
{
  ;
}

/*
==============
ATClient_StateMachine::Initialize
==============
*/
void ATClient_StateMachine::Initialize(ATClient_StateMachine *this, const unsigned int numStates)
{
  __int64 v4; 

  if ( numStates + ATClient_StateMachine::ms_currentAllocatedState >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 36, ASSERT_TYPE_SANITY, "( ms_currentAllocatedState + numStates < STATE_COUNT )", (const char *)&queryFormat, "ms_currentAllocatedState + numStates < STATE_COUNT") )
    __debugbreak();
  v4 = ATClient_StateMachine::ms_currentAllocatedState;
  this->m_numStates = numStates;
  this->m_states = &ATClient_StateMachine::ms_stateStorage[v4];
  ATClient_StateMachine::ms_currentAllocatedState += numStates;
}

/*
==============
ATClient_StateMachine::PrintState
==============
*/
__int64 ATClient_StateMachine::PrintState(ATClient_StateMachine *this, LocalClientNum_t localClientNum, unsigned int *outTabCount, char *const buffer, const int bufferSize, const bool useFullNames)
{
  char *v6; 
  __int64 v7; 
  unsigned int v11; 
  int i; 
  unsigned int m_smID; 
  const char *SMName; 
  const char *v15; 

  v6 = NULL;
  v7 = localClientNum;
  if ( !outTabCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 105, ASSERT_TYPE_ASSERT, "( ( outTabCount != nullptr ) )", "( outTabCount ) = %p", NULL) )
    __debugbreak();
  v11 = 0;
  for ( i = 0; v11 < outTabCount[v7]; ++v11 )
  {
    if ( !buffer )
      Com_Printf(14, "\t");
  }
  m_smID = this->m_smID;
  if ( buffer )
  {
    if ( useFullNames )
    {
      SMName = ATClient_GetSMName(m_smID);
      i = Com_sprintf_truncate(buffer, bufferSize, "%s:", SMName);
    }
    else
    {
      i = Com_sprintf_truncate(buffer, bufferSize, "%d:", m_smID);
    }
  }
  else
  {
    v15 = ATClient_GetSMName(m_smID);
    Com_Printf(14, "ATClient_StateMachine: %s\n", v15);
  }
  ++outTabCount[v7];
  if ( buffer )
    v6 = &buffer[i];
  return (unsigned int)(i + ATClient_State::PrintState(&this->m_states[this->m_currentState[v7]], localClientNum, outTabCount, v6, bufferSize - i, useFullNames));
}

/*
==============
ATClient_StateMachine::RegisterState
==============
*/
void ATClient_StateMachine::RegisterState(ATClient_StateMachine *this, const unsigned int stateIndex, const ATClient_State *state)
{
  __int64 v4; 
  unsigned int m_numStates; 

  v4 = stateIndex;
  if ( stateIndex >= this->m_numStates )
  {
    m_numStates = this->m_numStates;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( m_numStates )", "stateIndex doesn't index m_numStates\n\t%i not in [0, %i)", stateIndex, m_numStates) )
      __debugbreak();
  }
  ATClient_State::Copy(&this->m_states[v4], state);
}

/*
==============
ATClient_StateMachine::Reset
==============
*/
void ATClient_StateMachine::Reset(ATClient_StateMachine *this, LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  __int64 v3; 

  v3 = localClientNum;
  ATClient_State::Exit(&this->m_states[this->m_currentState[localClientNum]], localClientNum);
  ATClient_State::Reset(&this->m_states[this->m_currentState[v3]], (const LocalClientNum_t)v3, errorcode);
  this->m_currentState[v3] = 0;
}

/*
==============
ATClient_StateMachine::Start
==============
*/
void ATClient_StateMachine::Start(ATClient_StateMachine *this, const LocalClientNum_t localClientNum, const unsigned int initialStateIndex)
{
  __int64 v4; 
  __int64 v5; 

  v4 = initialStateIndex;
  v5 = localClientNum;
  if ( initialStateIndex >= this->m_numStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( initialStateIndex ) < (unsigned)( m_numStates )", "initialStateIndex doesn't index m_numStates\n\t%i not in [0, %i)", initialStateIndex, this->m_numStates) )
    __debugbreak();
  this->m_currentState[v5] = v4;
  ATClient_State::Enter(&this->m_states[v4], (const LocalClientNum_t)v5);
}

/*
==============
ATClient_StateMachine::Update
==============
*/
char ATClient_StateMachine::Update(ATClient_StateMachine *this, LocalClientNum_t localClientNum, int msec)
{
  __int64 v3; 
  ATClient_State *v6; 
  bool v7; 
  bool v8; 
  __int64 v9; 
  unsigned int outNewState; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( m_currentState ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( m_currentState )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = &this->m_states[this->m_currentState[v3]];
  v7 = ATClient_State::Update(v6, (const LocalClientNum_t)v3, msec);
  outNewState = -2;
  v8 = v7;
  if ( !ATClient_State::Transition(v6, (const LocalClientNum_t)v3, &outNewState) )
    return v8;
  if ( outNewState == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 74, ASSERT_TYPE_SANITY, "( newStateIndex != ATCLIENT_STATE_MACHINE_NO_TRANSITION )", (const char *)&queryFormat, "newStateIndex != ATCLIENT_STATE_MACHINE_NO_TRANSITION") )
    __debugbreak();
  if ( outNewState == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_statemachine.cpp", 75, ASSERT_TYPE_SANITY, "( newStateIndex != ATCLIENT_STATEMACHINE_STATE_INVALID )", (const char *)&queryFormat, "newStateIndex != ATCLIENT_STATEMACHINE_STATE_INVALID") )
    __debugbreak();
  ATClient_State::Exit(v6, (const LocalClientNum_t)v3);
  v9 = outNewState;
  this->m_currentState[v3] = outNewState;
  ATClient_State::Enter(&this->m_states[v9], (const LocalClientNum_t)v3);
  return 1;
}

