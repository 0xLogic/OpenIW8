/*
==============
dwHandleTaskError
==============
*/

taskCompleteResults __fastcall dwHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  return ?dwHandleTaskError@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@W4bdLobbyErrorCode@@@Z(task, errorCode);
}

/*
==============
dwGetTaskStatus
==============
*/

taskCompleteResults __fastcall dwGetTaskStatus(overlappedTask *const task)
{
  return ?dwGetTaskStatus@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwClearTask
==============
*/

void __fastcall dwClearTask(overlappedTask *const task)
{
  ?dwClearTask@@YAXQEAUoverlappedTask@@@Z(task);
}

/*
==============
dwClearTask
==============
*/
void dwClearTask(overlappedTask *const task)
{
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v3; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtasks.cpp", 13, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  m_ptr = task->u.remoteTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = task->u.remoteTask.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
    task->u.remoteTask.m_ptr = NULL;
  }
}

/*
==============
dwGetTaskStatus
==============
*/
taskCompleteResults dwGetTaskStatus(overlappedTask *const task)
{
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v3; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtasks.cpp", 24, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  m_ptr = task->u.remoteTask.m_ptr;
  if ( !m_ptr )
    return 2;
  v3 = m_ptr->getStatus(m_ptr);
  return dwTaskStatusConvert(v3, BD_NO_ERROR);
}

/*
==============
dwHandleTaskError
==============
*/
__int64 dwHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  __int64 type; 
  char buffer[64]; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtasks.cpp", 36, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  Com_Printf(25, "%s()\n", "dwHandleTaskError");
  dwLobbyErrorCodeToString(errorCode, buffer, 0x40u);
  type = (unsigned int)task->type;
  if ( errorCode == BD_NOT_CONNECTED )
    Com_Printf(25, "\t Task start requested while not connected! DW task type %d errorCode %i - '%s'\n", type, 2i64, buffer);
  else
    Com_PrintError(25, "\t DW task type %d errorCode %i - '%s'\n", type, (unsigned int)errorCode, buffer);
  TaskManager_ClearTask(task);
  if ( errorCode == BD_TOO_MANY_TASKS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtasks.cpp", 57, ASSERT_TYPE_ASSERT, "(errorCode != BD_TOO_MANY_TASKS)", (const char *)&queryFormat, "errorCode != BD_TOO_MANY_TASKS") )
    __debugbreak();
  return 2i64;
}

