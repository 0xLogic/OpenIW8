/*
==============
ATClient_State::PrintState
==============
*/

int __fastcall ATClient_State::PrintState(ATClient_State *this, const LocalClientNum_t localClientNum, unsigned int *outTabCount, char *const buffer, const int bufferSize, const bool useFullNames)
{
  return ?PrintState@ATClient_State@@QEAAHW4LocalClientNum_t@@PEAIQEADH_N@Z(this, localClientNum, outTabCount, buffer, bufferSize, useFullNames);
}

/*
==============
ATClient_State::Update
==============
*/

bool __fastcall ATClient_State::Update(ATClient_State *this, const LocalClientNum_t localClientNum, int msec)
{
  return ?Update@ATClient_State@@QEAA_NW4LocalClientNum_t@@H@Z(this, localClientNum, msec);
}

/*
==============
ATClient_State::Copy
==============
*/

void __fastcall ATClient_State::Copy(ATClient_State *this, const ATClient_State *other)
{
  ?Copy@ATClient_State@@QEAAXAEBV1@@Z(this, other);
}

/*
==============
ATClient_State::DebugPrint
==============
*/

void __fastcall ATClient_State::DebugPrint(ATClient_State *this, LocalClientNum_t localClientNum, const char *const message)
{
  ?DebugPrint@ATClient_State@@AEAAXW4LocalClientNum_t@@QEBD@Z(this, localClientNum, message);
}

/*
==============
ATClient_State::Reset
==============
*/

void __fastcall ATClient_State::Reset(ATClient_State *this, const LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  ?Reset@ATClient_State@@QEAAXW4LocalClientNum_t@@W4errorParm_t@@@Z(this, localClientNum, errorcode);
}

/*
==============
ATClient_State::Exit
==============
*/

void __fastcall ATClient_State::Exit(ATClient_State *this, const LocalClientNum_t localClientNum)
{
  ?Exit@ATClient_State@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ATClient_State::Enter
==============
*/

void __fastcall ATClient_State::Enter(ATClient_State *this, const LocalClientNum_t localClientNum)
{
  ?Enter@ATClient_State@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ATClient_State::ATClient_State
==============
*/

void __fastcall ATClient_State::ATClient_State(ATClient_State *this, void (__fastcall *reset)(const LocalClientNum_t, const errorParm_t), void (__fastcall *enter)(const LocalClientNum_t), void (__fastcall *exit)(const LocalClientNum_t), void (__fastcall *update)(const LocalClientNum_t, const int), bool (__fastcall *transition)(const LocalClientNum_t, unsigned int *), void (__fastcall *debugPrint)(const LocalClientNum_t), ATClient_StateMachine *children, const unsigned int numChildren, const int stateID)
{
  ??0ATClient_State@@QEAA@P6AXW4LocalClientNum_t@@W4errorParm_t@@@ZP6AX0@Z3P6AX0H@ZP6A_N0AEAI@Z3PEAVATClient_StateMachine@@IH@Z(this, reset, enter, exit, update, transition, debugPrint, children, numChildren, stateID);
}

/*
==============
ATClient_State::Transition
==============
*/

bool __fastcall ATClient_State::Transition(ATClient_State *this, const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?Transition@ATClient_State@@QEAA_NW4LocalClientNum_t@@AEAI@Z(this, localClientNum, outNewState);
}

/*
==============
ATClient_State::~ATClient_State
==============
*/

void __fastcall ATClient_State::~ATClient_State(ATClient_State *this)
{
  ??1ATClient_State@@QEAA@XZ(this);
}

/*
==============
ATClient_State::ATClient_State
==============
*/

void __fastcall ATClient_State::ATClient_State(ATClient_State *this)
{
  ??0ATClient_State@@QEAA@XZ(this);
}

/*
==============
ATClient_State::ATClient_State
==============
*/

void __fastcall ATClient_State::ATClient_State(ATClient_State *this, void (__fastcall *reset)(const LocalClientNum_t, const errorParm_t), void (__fastcall *enter)(const LocalClientNum_t), void (__fastcall *exit)(const LocalClientNum_t), void (__fastcall *update)(const LocalClientNum_t, const int), bool (__fastcall *transition)(const LocalClientNum_t, unsigned int *), ATClient_StateMachine *children, const unsigned int numChildren, const int stateID)
{
  ??0ATClient_State@@QEAA@P6AXW4LocalClientNum_t@@W4errorParm_t@@@ZP6AX0@Z3P6AX0H@ZP6A_N0AEAI@ZPEAVATClient_StateMachine@@IH@Z(this, reset, enter, exit, update, transition, children, numChildren, stateID);
}

/*
==============
ATClient_State::ATClient_State
==============
*/
void ATClient_State::ATClient_State(ATClient_State *this, void (*reset)(const LocalClientNum_t, const errorParm_t), void (*enter)(const LocalClientNum_t), void (*exit)(const LocalClientNum_t), void (*update)(const LocalClientNum_t, const int), bool (*transition)(const LocalClientNum_t, unsigned int *), void (*debugPrint)(const LocalClientNum_t), ATClient_StateMachine *children, const unsigned int numChildren, const int stateID)
{
  this->m_children = children;
  this->m_numChildren = numChildren;
  this->m_update = update;
  this->m_transition = transition;
  this->m_debugPrint = debugPrint;
  this->m_stateID = stateID;
  this->m_reset = reset;
  this->m_enter = enter;
  this->m_exit = exit;
}

/*
==============
ATClient_State::ATClient_State
==============
*/
void ATClient_State::ATClient_State(ATClient_State *this, void (*reset)(const LocalClientNum_t, const errorParm_t), void (*enter)(const LocalClientNum_t), void (*exit)(const LocalClientNum_t), void (*update)(const LocalClientNum_t, const int), bool (*transition)(const LocalClientNum_t, unsigned int *), ATClient_StateMachine *children, const unsigned int numChildren, const int stateID)
{
  this->m_children = children;
  this->m_numChildren = numChildren;
  this->m_update = update;
  this->m_transition = transition;
  this->m_stateID = stateID;
  this->m_reset = reset;
  this->m_enter = enter;
  this->m_exit = exit;
  this->m_debugPrint = NULL;
}

/*
==============
ATClient_State::ATClient_State
==============
*/
void ATClient_State::ATClient_State(ATClient_State *this)
{
  this->m_stateID = -1;
  this->m_children = NULL;
  this->m_numChildren = 0;
  this->m_reset = NULL;
  this->m_enter = NULL;
  this->m_exit = NULL;
  this->m_update = NULL;
  this->m_transition = NULL;
}

/*
==============
ATClient_State::~ATClient_State
==============
*/
void ATClient_State::~ATClient_State(ATClient_State *this)
{
  ;
}

/*
==============
ATClient_State::Copy
==============
*/
void ATClient_State::Copy(ATClient_State *this, const ATClient_State *other)
{
  if ( this == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 73, ASSERT_TYPE_ASSERT, "( this ) != ( &other )", "%s != %s\n\t%p, %p", "this", "&other", this, other) )
    __debugbreak();
  this->m_reset = other->m_reset;
  this->m_enter = other->m_enter;
  this->m_exit = other->m_exit;
  this->m_update = other->m_update;
  this->m_transition = other->m_transition;
  this->m_children = other->m_children;
  this->m_numChildren = other->m_numChildren;
  this->m_stateID = other->m_stateID;
}

/*
==============
ATClient_State::DebugPrint
==============
*/
void ATClient_State::DebugPrint(ATClient_State *this, LocalClientNum_t localClientNum, const char *const message)
{
  const dvar_t *v6; 
  unsigned int flags; 
  const char *StateName; 
  void (__fastcall *m_debugPrint)(const LocalClientNum_t); 

  if ( this->m_stateID == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 153, ASSERT_TYPE_ASSERT, "(m_stateID != (-1))", (const char *)&queryFormat, "m_stateID != ATCLIENT_INVALID_STATE_ID") )
    __debugbreak();
  v6 = DVARBOOL_ATClient_DebugPrint;
  if ( !DVARBOOL_ATClient_DebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_DebugPrint") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  if ( v6->current.enabled )
  {
    StateName = ATClient_GetStateName(this->m_stateID);
    Com_Printf(14, "ATClient_State: %s - %s\n", StateName, message);
    m_debugPrint = this->m_debugPrint;
    if ( m_debugPrint )
      m_debugPrint((const LocalClientNum_t)localClientNum);
  }
}

/*
==============
ATClient_State::Enter
==============
*/
void ATClient_State::Enter(ATClient_State *this, const LocalClientNum_t localClientNum)
{
  if ( !this->m_enter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 100, ASSERT_TYPE_ASSERT, "(m_enter != nullptr)", (const char *)&queryFormat, "m_enter != nullptr") )
    __debugbreak();
  ATClient_State::DebugPrint(this, localClientNum, "Enter");
  this->m_enter(localClientNum);
}

/*
==============
ATClient_State::Exit
==============
*/
void ATClient_State::Exit(ATClient_State *this, const LocalClientNum_t localClientNum)
{
  unsigned int i; 

  if ( !this->m_exit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 110, ASSERT_TYPE_ASSERT, "(m_exit != nullptr)", (const char *)&queryFormat, "m_exit != nullptr") )
    __debugbreak();
  ATClient_State::DebugPrint(this, localClientNum, "Exit");
  this->m_exit(localClientNum);
  for ( i = 0; i < this->m_numChildren; ++i )
    ATClient_StateMachine::Reset(&this->m_children[i], localClientNum, ERR_COUNT);
}

/*
==============
ATClient_State::PrintState
==============
*/
__int64 ATClient_State::PrintState(ATClient_State *this, const LocalClientNum_t localClientNum, unsigned int *outTabCount, char *const buffer, const int bufferSize, const bool useFullNames)
{
  __int64 v7; 
  unsigned int v10; 
  unsigned int i; 
  unsigned int m_stateID; 
  const char *StateName; 
  const char *v14; 
  unsigned int j; 
  char *v16; 

  v7 = localClientNum;
  if ( !outTabCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 170, ASSERT_TYPE_ASSERT, "( ( outTabCount != nullptr ) )", "( outTabCount ) = %p", NULL) )
    __debugbreak();
  v10 = 0;
  for ( i = 0; i < outTabCount[v7]; ++i )
  {
    if ( !buffer )
      Com_Printf(14, "\t");
  }
  m_stateID = this->m_stateID;
  if ( buffer )
  {
    if ( useFullNames )
    {
      StateName = ATClient_GetStateName(m_stateID);
      v10 = Com_sprintf_truncate(buffer, bufferSize, "%s;", StateName);
    }
    else
    {
      v10 = Com_sprintf_truncate(buffer, bufferSize, "%d;", m_stateID);
    }
  }
  else
  {
    v14 = ATClient_GetStateName(m_stateID);
    Com_Printf(14, "ATClient_State: %s\n", v14);
  }
  ++outTabCount[v7];
  for ( j = 0; j < this->m_numChildren; ++j )
  {
    if ( buffer )
      v16 = &buffer[v10];
    else
      v16 = NULL;
    v10 += ATClient_StateMachine::PrintState(&this->m_children[j], localClientNum, outTabCount, v16, bufferSize - v10, useFullNames);
  }
  return v10;
}

/*
==============
ATClient_State::Reset
==============
*/
void ATClient_State::Reset(ATClient_State *this, const LocalClientNum_t localClientNum, const errorParm_t errorcode)
{
  if ( !this->m_reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 90, ASSERT_TYPE_ASSERT, "(m_reset != nullptr)", (const char *)&queryFormat, "m_reset != nullptr") )
    __debugbreak();
  ATClient_State::DebugPrint(this, localClientNum, "Reset");
  this->m_reset(localClientNum, errorcode);
}

/*
==============
ATClient_State::Transition
==============
*/
__int64 ATClient_State::Transition(ATClient_State *this, const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  if ( !this->m_transition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 141, ASSERT_TYPE_ASSERT, "(m_transition != nullptr)", (const char *)&queryFormat, "m_transition != nullptr") )
    __debugbreak();
  return ((__int64 (__fastcall *)(_QWORD, unsigned int *))this->m_transition)((unsigned int)localClientNum, outNewState);
}

/*
==============
ATClient_State::Update
==============
*/
__int64 ATClient_State::Update(ATClient_State *this, const LocalClientNum_t localClientNum, int msec)
{
  unsigned __int8 v6; 
  unsigned int i; 

  if ( !this->m_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_state.cpp", 125, ASSERT_TYPE_ASSERT, "(m_update != nullptr)", (const char *)&queryFormat, "m_update != nullptr") )
    __debugbreak();
  this->m_update(localClientNum, msec);
  v6 = 0;
  for ( i = 0; i < this->m_numChildren; ++i )
    v6 |= ATClient_StateMachine::Update(&this->m_children[i], localClientNum, msec);
  return v6;
}

