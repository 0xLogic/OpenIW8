/*
==============
bdAchievementArchetypeHandler::Environment::getEvent
==============
*/

const bdAchievementEvent *__fastcall bdAchievementArchetypeHandler::Environment::getEvent(bdAchievementArchetypeHandler::Environment *this)
{
  return ?getEvent@Environment@bdAchievementArchetypeHandler@@QEBAAEBVbdAchievementEvent@@XZ(this);
}

/*
==============
bdAchievementArchetypeHandler::Environment::getDefinition
==============
*/

const bdAchievementDefinition *__fastcall bdAchievementArchetypeHandler::Environment::getDefinition(bdAchievementArchetypeHandler::Environment *this)
{
  return ?getDefinition@Environment@bdAchievementArchetypeHandler@@QEBAAEBVbdAchievementDefinition@@XZ(this);
}

/*
==============
bdAchievementArchetypeHandler::processCompletion
==============
*/

void __fastcall bdAchievementArchetypeHandler::processCompletion(bdAchievementArchetypeHandler *this, bdAchievementArchetypeHandler::Environment *env)
{
  ?processCompletion@bdAchievementArchetypeHandler@@AEAAXAEAVEnvironment@1@@Z(this, env);
}

/*
==============
bdAchievementArchetypeHandler::Environment::Environment
==============
*/

void __fastcall bdAchievementArchetypeHandler::Environment::Environment(bdAchievementArchetypeHandler::Environment *this, const bdUserAccountID *user, const bdAchievementEvent *event, const bdAchievementDefinition *definition, bdAchievementState *state)
{
  ??0Environment@bdAchievementArchetypeHandler@@QEAA@AEBVbdUserAccountID@@AEBVbdAchievementEvent@@AEBVbdAchievementDefinition@@AEAVbdAchievementState@@@Z(this, user, event, definition, state);
}

/*
==============
bdAchievementArchetypeHandler::Environment::getState
==============
*/

bdAchievementState *__fastcall bdAchievementArchetypeHandler::Environment::getState(bdAchievementArchetypeHandler::Environment *this)
{
  return ?getState@Environment@bdAchievementArchetypeHandler@@QEAAAEAVbdAchievementState@@XZ(this);
}

/*
==============
bdAchievementArchetypeHandler::process
==============
*/

bdAchievementArchetypeHandler::Result __fastcall bdAchievementArchetypeHandler::process(bdAchievementArchetypeHandler *this, bdAchievementArchetypeHandler::Environment *env)
{
  return ?process@bdAchievementArchetypeHandler@@QEAA?AW4Result@1@AEAVEnvironment@1@@Z(this, env);
}

/*
==============
bdAchievementArchetypeHandler::Environment::getUser
==============
*/

const bdUserAccountID *__fastcall bdAchievementArchetypeHandler::Environment::getUser(bdAchievementArchetypeHandler::Environment *this)
{
  return ?getUser@Environment@bdAchievementArchetypeHandler@@QEBAAEBVbdUserAccountID@@XZ(this);
}

/*
==============
bdAchievementArchetypeHandler::Environment::Environment
==============
*/
void bdAchievementArchetypeHandler::Environment::Environment(bdAchievementArchetypeHandler::Environment *this, const bdUserAccountID *user, const bdAchievementEvent *event, const bdAchievementDefinition *definition, bdAchievementState *state)
{
  this->m_state = state;
  this->m_user = user;
  this->m_event = event;
  this->m_definition = definition;
}

/*
==============
bdAchievementArchetypeHandler::Environment::getDefinition
==============
*/
const bdAchievementDefinition *bdAchievementArchetypeHandler::Environment::getDefinition(bdAchievementArchetypeHandler::Environment *this)
{
  return this->m_definition;
}

/*
==============
bdAchievementArchetypeHandler::Environment::getEvent
==============
*/
const bdAchievementEvent *bdAchievementArchetypeHandler::Environment::getEvent(bdAchievementArchetypeHandler::Environment *this)
{
  return this->m_event;
}

/*
==============
bdAchievementArchetypeHandler::Environment::getState
==============
*/
bdAchievementState *bdAchievementArchetypeHandler::Environment::getState(bdAchievementArchetypeHandler::Environment *this)
{
  return this->m_state;
}

/*
==============
bdAchievementArchetypeHandler::Environment::getUser
==============
*/
const bdUserAccountID *bdAchievementArchetypeHandler::Environment::getUser(bdAchievementArchetypeHandler::Environment *this)
{
  return this->m_user;
}

/*
==============
bdAchievementArchetypeHandler::process
==============
*/
__int64 bdAchievementArchetypeHandler::process(bdAchievementArchetypeHandler *this, bdAchievementArchetypeHandler::Environment *env)
{
  unsigned int v5; 
  unsigned int v6; 
  bdAchievementState *m_state; 
  unsigned __int64 TimeStamp; 
  unsigned int SuccessLimit; 
  bdAchievementStatus::Enum v10; 

  if ( bdAchievementState::getStatus(env->m_state) != ACTIVE )
    return 0i64;
  v5 = this->onEvent(this, env);
  if ( v5 == 1 )
  {
    v6 = bdAchievementState::getCompletionCount(env->m_state) + 1;
    bdAchievementState::setCompletionCount(env->m_state, v6);
    m_state = env->m_state;
    TimeStamp = bdAchievementEvent::getTimeStamp((bdAchievementEvent *)env->m_event);
    bdAchievementState::setCompletionTimestamp(m_state, TimeStamp);
    SuccessLimit = bdAchievementDefinition::getSuccessLimit((bdAchievementDefinition *)env->m_definition);
    if ( bdAchievementDefinition::getRequiresActivation((bdAchievementDefinition *)env->m_definition) )
    {
      v10 = 4;
    }
    else
    {
      if ( !SuccessLimit || v6 < SuccessLimit )
        return v5;
      v10 = 3;
    }
    bdAchievementState::setStatus(env->m_state, v10);
  }
  return v5;
}

/*
==============
bdAchievementArchetypeHandler::processCompletion
==============
*/
void bdAchievementArchetypeHandler::processCompletion(bdAchievementArchetypeHandler *this, bdAchievementArchetypeHandler::Environment *env)
{
  unsigned int v3; 
  bdAchievementState *m_state; 
  unsigned __int64 TimeStamp; 
  unsigned int SuccessLimit; 
  bdAchievementStatus::Enum v7; 

  v3 = bdAchievementState::getCompletionCount(env->m_state) + 1;
  bdAchievementState::setCompletionCount(env->m_state, v3);
  m_state = env->m_state;
  TimeStamp = bdAchievementEvent::getTimeStamp((bdAchievementEvent *)env->m_event);
  bdAchievementState::setCompletionTimestamp(m_state, TimeStamp);
  SuccessLimit = bdAchievementDefinition::getSuccessLimit((bdAchievementDefinition *)env->m_definition);
  if ( bdAchievementDefinition::getRequiresActivation((bdAchievementDefinition *)env->m_definition) )
  {
    v7 = 4;
LABEL_6:
    bdAchievementState::setStatus(env->m_state, v7);
    return;
  }
  if ( SuccessLimit && v3 >= SuccessLimit )
  {
    v7 = 3;
    goto LABEL_6;
  }
}

