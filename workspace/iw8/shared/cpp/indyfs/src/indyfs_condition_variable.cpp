/*
==============
indyfs_condition_variable_signal_one
==============
*/

void __stdcall indyfs_condition_variable_signal_one(PCONDITION_VARIABLE ConditionVariable)
{
  ?indyfs_condition_variable_signal_one@@YAXPEAUIndyFsConditionVariable@@@Z(ConditionVariable);
}

/*
==============
indyfs_condition_variable_term
==============
*/

void __fastcall indyfs_condition_variable_term(IndyFsConditionVariable *cv)
{
  ?indyfs_condition_variable_term@@YAXPEAUIndyFsConditionVariable@@@Z(cv);
}

/*
==============
indyfs_condition_variable_wait
==============
*/

void __fastcall indyfs_condition_variable_wait(IndyFsConditionVariable *cv, IndyFsMutex *mutex)
{
  ?indyfs_condition_variable_wait@@YAXPEAUIndyFsConditionVariable@@PEAUIndyFsMutex@@@Z(cv, mutex);
}

/*
==============
indyfs_condition_variable_init
==============
*/

void __stdcall indyfs_condition_variable_init(PCONDITION_VARIABLE ConditionVariable)
{
  ?indyfs_condition_variable_init@@YAXPEAUIndyFsConditionVariable@@@Z(ConditionVariable);
}

/*
==============
indyfs_condition_variable_signal_all
==============
*/

void __stdcall indyfs_condition_variable_signal_all(PCONDITION_VARIABLE ConditionVariable)
{
  ?indyfs_condition_variable_signal_all@@YAXPEAUIndyFsConditionVariable@@@Z(ConditionVariable);
}

/*
==============
indyfs_condition_variable_wait_timeout
==============
*/

int __fastcall indyfs_condition_variable_wait_timeout(IndyFsConditionVariable *cv, IndyFsMutex *mutex, unsigned int milliseconds, bool *timedOut)
{
  return ?indyfs_condition_variable_wait_timeout@@YAHPEAUIndyFsConditionVariable@@PEAUIndyFsMutex@@IPEA_N@Z(cv, mutex, milliseconds, timedOut);
}

/*
==============
indyfs_condition_variable_init
==============
*/

void __stdcall indyfs_condition_variable_init(PCONDITION_VARIABLE ConditionVariable)
{
  InitializeConditionVariable(ConditionVariable);
}

/*
==============
indyfs_condition_variable_signal_all
==============
*/

void __stdcall indyfs_condition_variable_signal_all(PCONDITION_VARIABLE ConditionVariable)
{
  WakeAllConditionVariable(ConditionVariable);
}

/*
==============
indyfs_condition_variable_signal_one
==============
*/

void __stdcall indyfs_condition_variable_signal_one(PCONDITION_VARIABLE ConditionVariable)
{
  WakeConditionVariable(ConditionVariable);
}

/*
==============
indyfs_condition_variable_term
==============
*/
void indyfs_condition_variable_term(IndyFsConditionVariable *cv)
{
  ;
}

/*
==============
indyfs_condition_variable_wait
==============
*/
void indyfs_condition_variable_wait(IndyFsConditionVariable *cv, IndyFsMutex *mutex)
{
  SleepConditionVariableCS((PCONDITION_VARIABLE)cv, (PCRITICAL_SECTION)mutex, 0xFFFFFFFF);
}

/*
==============
indyfs_condition_variable_wait_timeout
==============
*/
__int64 indyfs_condition_variable_wait_timeout(IndyFsConditionVariable *cv, IndyFsMutex *mutex, unsigned int milliseconds, bool *timedOut)
{
  DWORD LastError; 

  if ( SleepConditionVariableCS((PCONDITION_VARIABLE)cv, (PCRITICAL_SECTION)mutex, milliseconds) )
  {
    if ( timedOut )
    {
      *timedOut = 0;
      return 0i64;
    }
    return 0i64;
  }
  LastError = GetLastError();
  if ( LastError == 1460 )
  {
    if ( timedOut )
      *timedOut = 1;
    return 0i64;
  }
  indyfs_log_message(Error, "Failed to wait for condition variable - Err: %ul", LastError);
  return 0xFFFFFFFFi64;
}

