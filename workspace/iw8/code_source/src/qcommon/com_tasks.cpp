/*
==============
TaskManager_CancelTasks
==============
*/

int __fastcall TaskManager_CancelTasks(OverlappedTaskSet *taskSet, const int type)
{
  return ?TaskManager_CancelTasks@@YAHPEAUOverlappedTaskSet@@H@Z(taskSet, type);
}

/*
==============
TaskManager_CountTasksInProgress
==============
*/

int __fastcall TaskManager_CountTasksInProgress(OverlappedTaskSet *taskSet, const int type)
{
  return ?TaskManager_CountTasksInProgress@@YAHPEAUOverlappedTaskSet@@H@Z(taskSet, type);
}

/*
==============
TaskManager_CancelTask
==============
*/

bool __fastcall TaskManager_CancelTask(overlappedTask *task)
{
  return ?TaskManager_CancelTask@@YA_NPEAUoverlappedTask@@@Z(task);
}

/*
==============
TaskManager_CancelTasksAndFireCallbacks
==============
*/

int __fastcall TaskManager_CancelTasksAndFireCallbacks(OverlappedTaskSet *taskSet, const int type)
{
  return ?TaskManager_CancelTasksAndFireCallbacks@@YAHPEAUOverlappedTaskSet@@H@Z(taskSet, type);
}

/*
==============
TaskManager_GetTaskData
==============
*/

void *__fastcall TaskManager_GetTaskData(overlappedTask *overlappedTask)
{
  return ?TaskManager_GetTaskData@@YAPEAXPEAUoverlappedTask@@@Z(overlappedTask);
}

/*
==============
TaskManager_CancelTasksForController
==============
*/

int __fastcall TaskManager_CancelTasksForController(OverlappedTaskSet *taskSet, const int type, const int controllerIndex)
{
  return ?TaskManager_CancelTasksForController@@YAHPEAUOverlappedTaskSet@@HH@Z(taskSet, type, controllerIndex);
}

/*
==============
TaskManager_TaskIsInProgress
==============
*/

bool __fastcall TaskManager_TaskIsInProgress(OverlappedTaskSet *taskSet, const int type)
{
  return ?TaskManager_TaskIsInProgress@@YA_NPEAUOverlappedTaskSet@@H@Z(taskSet, type);
}

/*
==============
TaskManager_ConstructTaskSet
==============
*/

void __fastcall TaskManager_ConstructTaskSet(OverlappedTaskSet *taskSet, const char *name)
{
  ?TaskManager_ConstructTaskSet@@YAXPEAUOverlappedTaskSet@@PEBD@Z(taskSet, name);
}

/*
==============
TaskManager_ClearTask
==============
*/

void __fastcall TaskManager_ClearTask(overlappedTask *task)
{
  ?TaskManager_ClearTask@@YAXPEAUoverlappedTask@@@Z(task);
}

/*
==============
TaskManager_AnyTaskInProgress
==============
*/

bool __fastcall TaskManager_AnyTaskInProgress(OverlappedTaskSet *taskSet)
{
  return ?TaskManager_AnyTaskInProgress@@YA_NPEAUOverlappedTaskSet@@@Z(taskSet);
}

/*
==============
TaskManager_TaskIsInProgressForController
==============
*/

bool __fastcall TaskManager_TaskIsInProgressForController(OverlappedTaskSet *taskSet, const int type, const int localControllerIndex)
{
  return ?TaskManager_TaskIsInProgressForController@@YA_NPEAUOverlappedTaskSet@@HH@Z(taskSet, type, localControllerIndex);
}

/*
==============
TaskManager_ClearOverlappedTasksForController
==============
*/

void __fastcall TaskManager_ClearOverlappedTasksForController(overlappedTask *overlappedTasks, const int controllerIndex)
{
  ?TaskManager_ClearOverlappedTasksForController@@YAXPEAUoverlappedTask@@H@Z(overlappedTasks, controllerIndex);
}

/*
==============
TaskManager_SetTaskData
==============
*/

void __fastcall TaskManager_SetTaskData(overlappedTask *overlappedTask, void *data)
{
  ?TaskManager_SetTaskData@@YAXPEAUoverlappedTask@@PEAX@Z(overlappedTask, data);
}

/*
==============
TaskManager_GetOpenTaskSlot
==============
*/

overlappedTask *__fastcall TaskManager_GetOpenTaskSlot(OverlappedTaskSet *taskSet, const int controllerIndex, const int type)
{
  return ?TaskManager_GetOpenTaskSlot@@YAPEAUoverlappedTask@@PEAUOverlappedTaskSet@@HH@Z(taskSet, controllerIndex, type);
}

/*
==============
TaskManager_AnyTaskInProgress
==============
*/
char TaskManager_AnyTaskInProgress(OverlappedTaskSet *taskSet)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 v2; 
  bool *i; 

  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v2 = 0i64;
  for ( i = &TaskSetListFromSet->active; !*i; i += 40 )
  {
    if ( ++v2 >= 32 )
      return 0;
  }
  return 1;
}

/*
==============
TaskManager_CancelTask
==============
*/
char TaskManager_CancelTask(overlappedTask *task)
{
  bdRemoteTask *m_ptr; 
  TaskSubsystem subsystem; 

  if ( task->subsystem == TASKSUBSYSTEM_NATIVE )
  {
    m_ptr = task->u.remoteTask.m_ptr;
    if ( m_ptr )
    {
      if ( !m_ptr->m_refCount.m_value._My_val && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 134, ASSERT_TYPE_ASSERT, "(task->u.remoteTask->getRefCount() != 0)", (const char *)&queryFormat, "task->u.remoteTask->getRefCount() != 0") )
        __debugbreak();
      bdRemoteTask::cancelTask(task->u.remoteTask.m_ptr);
    }
    TaskManager_ClearTask(task);
    return 1;
  }
  else
  {
    subsystem = task->subsystem;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 143, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown task subsystem type %i", subsystem) )
      __debugbreak();
    return 1;
  }
}

/*
==============
TaskManager_CancelTasks
==============
*/
__int64 TaskManager_CancelTasks(OverlappedTaskSet *taskSet, const int type)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 v5; 
  int *i; 

  if ( !taskSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 196, ASSERT_TYPE_ASSERT, "(taskSet)", (const char *)&queryFormat, "taskSet") )
    __debugbreak();
  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v5 = 0i64;
  for ( i = &TaskSetListFromSet->type; !*((_BYTE *)i + 4) || *i != type || TaskManager_CancelTask(&TaskSetListFromSet[v5]); i += 10 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x20 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
TaskManager_CancelTasksAndFireCallbacks
==============
*/
__int64 TaskManager_CancelTasksAndFireCallbacks(OverlappedTaskSet *taskSet, const int type)
{
  overlappedTask *TaskSetListFromSet; 
  unsigned int v5; 

  if ( !taskSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 204, ASSERT_TYPE_ASSERT, "(taskSet)", (const char *)&queryFormat, "taskSet") )
    __debugbreak();
  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v5 = 0;
  while ( 1 )
  {
    if ( TaskSetListFromSet->active && TaskSetListFromSet->type == type )
    {
      LiveStorage_Task_FailureCallback(TaskSetListFromSet, type);
      if ( !TaskManager_CancelTask(TaskSetListFromSet) )
        break;
    }
    ++v5;
    ++TaskSetListFromSet;
    if ( v5 >= 0x20 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
TaskManager_CancelTasksForController
==============
*/
__int64 TaskManager_CancelTasksForController(OverlappedTaskSet *taskSet, const int type, const int controllerIndex)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 v7; 
  int *i; 

  if ( !taskSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 231, ASSERT_TYPE_ASSERT, "(taskSet)", (const char *)&queryFormat, "taskSet") )
    __debugbreak();
  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v7 = 0i64;
  for ( i = &TaskSetListFromSet->type; !*((_BYTE *)i + 4) || *i != type || *((unsigned __int8 *)i + 5) != controllerIndex || TaskManager_CancelTask(&TaskSetListFromSet[v7]); i += 10 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x20 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
TaskManager_ClearOverlappedTasksForController
==============
*/
void TaskManager_ClearOverlappedTasksForController(overlappedTask *overlappedTasks, const int controllerIndex)
{
  unsigned __int8 *p_taskSetIndex; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int8 v6; 
  __int64 v7; 

  p_taskSetIndex = &overlappedTasks->taskSetIndex;
  v4 = 32i64;
  do
  {
    if ( *(p_taskSetIndex - 1) == controllerIndex )
    {
      v5 = (unsigned __int64)(p_taskSetIndex - 30);
      if ( p_taskSetIndex == (unsigned __int8 *)30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 313, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
        __debugbreak();
      v6 = *p_taskSetIndex;
      if ( !*p_taskSetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 300, ASSERT_TYPE_ASSERT, "(taskSetIndex)", (const char *)&queryFormat, "taskSetIndex") )
        __debugbreak();
      v7 = *((_QWORD *)&taskManagerGlob.constructedTaskSetCount + v6);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 302, ASSERT_TYPE_ASSERT, "(taskSet)", (const char *)&queryFormat, "taskSet") )
        __debugbreak();
      if ( (v5 < v7 + 8 || v5 >= v7 + 1288) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 305, ASSERT_TYPE_ASSERT, "(task >= taskSetBegin && task < taskSetEnd)", (const char *)&queryFormat, "task >= taskSetBegin && task < taskSetEnd") )
        __debugbreak();
      dwClearTask((overlappedTask *const)(p_taskSetIndex - 30));
      *(p_taskSetIndex - 2) = 0;
      *(_QWORD *)(p_taskSetIndex + 2) = 0i64;
      *(_QWORD *)(p_taskSetIndex - 22) = 0i64;
      *(_QWORD *)(p_taskSetIndex - 14) = 0i64;
    }
    p_taskSetIndex += 40;
    --v4;
  }
  while ( v4 );
}

/*
==============
TaskManager_ClearTask
==============
*/
void TaskManager_ClearTask(overlappedTask *task)
{
  unsigned __int8 taskSetIndex; 
  __int64 v3; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 313, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  taskSetIndex = task->taskSetIndex;
  if ( !taskSetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 300, ASSERT_TYPE_ASSERT, "(taskSetIndex)", (const char *)&queryFormat, "taskSetIndex") )
    __debugbreak();
  v3 = *((_QWORD *)&taskManagerGlob.constructedTaskSetCount + taskSetIndex);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 302, ASSERT_TYPE_ASSERT, "(taskSet)", (const char *)&queryFormat, "taskSet") )
    __debugbreak();
  if ( ((unsigned __int64)task < v3 + 8 || (unsigned __int64)task >= v3 + 1288) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 305, ASSERT_TYPE_ASSERT, "(task >= taskSetBegin && task < taskSetEnd)", (const char *)&queryFormat, "task >= taskSetBegin && task < taskSetEnd") )
    __debugbreak();
  dwClearTask(task);
  task->active = 0;
  task->data = NULL;
  task->u.remoteTask.m_ptr = NULL;
  *(_QWORD *)&task->u.rest_results = 0i64;
}

/*
==============
TaskManager_ConstructTaskSet
==============
*/
void TaskManager_ConstructTaskSet(OverlappedTaskSet *taskSet, const char *name)
{
  int v4; 
  OverlappedTaskSet **constructedTaskSets; 
  unsigned __int8 *p_taskSetIndex; 
  __int64 v7; 
  __int64 v8; 
  int registeredIndex_low; 
  overlappedTask *TaskSetListFromSet; 
  __int64 v11; 

  if ( taskSet->registeredIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 90, ASSERT_TYPE_ASSERT, "( ( taskSet->registeredIndex == 0 ) )", "( taskSet->registeredIndex ) = %i", taskSet->registeredIndex) )
    __debugbreak();
  v4 = 0;
  constructedTaskSets = taskManagerGlob.constructedTaskSets;
  while ( *constructedTaskSets )
  {
    ++constructedTaskSets;
    ++v4;
    if ( constructedTaskSets == (OverlappedTaskSet **)taskManagerGlob.constructedTaskSetNames )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TaskManager_ConstructTaskSet: MAX_TASK_SETS exceeded.") )
        __debugbreak();
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1440090C0, 391i64);
      return;
    }
  }
  p_taskSetIndex = &taskSet->tasks[0].taskSetIndex;
  taskSet->registeredIndex = v4 + 1;
  taskManagerGlob.constructedTaskSets[v4] = taskSet;
  taskManagerGlob.constructedTaskSetNames[v4] = name;
  v7 = 32i64;
  v8 = 32i64;
  do
  {
    if ( !taskSet->registeredIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 107, ASSERT_TYPE_ASSERT, "(taskSet->registeredIndex)", (const char *)&queryFormat, "taskSet->registeredIndex") )
      __debugbreak();
    registeredIndex_low = LOBYTE(taskSet->registeredIndex);
    *p_taskSetIndex = registeredIndex_low;
    if ( registeredIndex_low != taskSet->registeredIndex )
    {
      LODWORD(v11) = taskSet->registeredIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 109, ASSERT_TYPE_ASSERT, "( ( taskSet->tasks[slot].taskSetIndex == taskSet->registeredIndex ) )", "( taskSet->registeredIndex ) = %i", v11) )
        __debugbreak();
    }
    p_taskSetIndex += 40;
    --v8;
  }
  while ( v8 );
  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  do
  {
    TaskManager_ClearTask(TaskSetListFromSet++);
    --v7;
  }
  while ( v7 );
  ++taskManagerGlob.constructedTaskSetCount;
}

/*
==============
TaskManager_CountTasksInProgress
==============
*/
__int64 TaskManager_CountTasksInProgress(OverlappedTaskSet *taskSet, const int type)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 result; 

  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  result = 0i64;
  if ( TaskSetListFromSet->active && TaskSetListFromSet->type == type )
    result = 1i64;
  if ( TaskSetListFromSet[1].active && TaskSetListFromSet[1].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[2].active && TaskSetListFromSet[2].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[3].active && TaskSetListFromSet[3].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[4].active && TaskSetListFromSet[4].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[5].active && TaskSetListFromSet[5].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[6].active && TaskSetListFromSet[6].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[7].active && TaskSetListFromSet[7].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[8].active && TaskSetListFromSet[8].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[9].active && TaskSetListFromSet[9].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[10].active && TaskSetListFromSet[10].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[11].active && TaskSetListFromSet[11].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[12].active && TaskSetListFromSet[12].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[13].active && TaskSetListFromSet[13].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[14].active && TaskSetListFromSet[14].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[15].active && TaskSetListFromSet[15].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[16].active && TaskSetListFromSet[16].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[17].active && TaskSetListFromSet[17].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[18].active && TaskSetListFromSet[18].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[19].active && TaskSetListFromSet[19].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[20].active && TaskSetListFromSet[20].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[21].active && TaskSetListFromSet[21].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[22].active && TaskSetListFromSet[22].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[23].active && TaskSetListFromSet[23].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[24].active && TaskSetListFromSet[24].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[25].active && TaskSetListFromSet[25].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[26].active && TaskSetListFromSet[26].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[27].active && TaskSetListFromSet[27].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[28].active && TaskSetListFromSet[28].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[29].active && TaskSetListFromSet[29].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[30].active && TaskSetListFromSet[30].type == type )
    result = (unsigned int)(result + 1);
  if ( TaskSetListFromSet[31].active && TaskSetListFromSet[31].type == type )
    return (unsigned int)(result + 1);
  return result;
}

/*
==============
TaskManager_GetOpenTaskSlot
==============
*/
overlappedTask *TaskManager_GetOpenTaskSlot(OverlappedTaskSet *taskSet, const int controllerIndex, const int type)
{
  overlappedTask *result; 

  result = TaskManager_GetOpenTaskSlot_Try(taskSet, controllerIndex, type, TASKSUBSYSTEM_NATIVE);
  if ( !result )
  {
    result = TaskManager_GetOpenTaskSlot_Try(taskSet, controllerIndex, type, TASKSUBSYSTEM_NATIVE);
    if ( !result )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 278, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tRan out of task slots!", "result") )
        __debugbreak();
      return 0i64;
    }
  }
  return result;
}

/*
==============
TaskManager_GetOpenTaskSlot_Try
==============
*/
overlappedTask *TaskManager_GetOpenTaskSlot_Try(OverlappedTaskSet *taskSet, const int controllerIndex, const int type, TaskSubsystem subsystem)
{
  overlappedTask *TaskSetListFromSet; 
  int v8; 
  __int64 v9; 
  bool *i; 
  overlappedTask *result; 
  overlappedTask *v12; 
  int v13; 

  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v8 = 0;
  v9 = 0i64;
  for ( i = &TaskSetListFromSet->active; *i; i += 40 )
  {
    ++v8;
    if ( ++v9 >= 32 )
      return 0i64;
  }
  TaskSetListFromSet[v8].u.remoteTask.m_ptr = NULL;
  v12 = &TaskSetListFromSet[v8];
  *(_QWORD *)&v12->u.rest_results = 0i64;
  v12->type = type;
  if ( (unsigned int)controllerIndex > 7 )
  {
    v13 = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 253, ASSERT_TYPE_ASSERT, "( ( controllerIndex >= 0 && controllerIndex < 8 ) )", "( controllerIndex ) = %i", v13) )
      __debugbreak();
  }
  result = v12;
  v12->subsystem = subsystem;
  v12->controllerIndex = controllerIndex;
  v12->active = 1;
  return result;
}

/*
==============
TaskManager_GetTaskData
==============
*/
void *TaskManager_GetTaskData(overlappedTask *overlappedTask)
{
  if ( !overlappedTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 414, ASSERT_TYPE_ASSERT, "(overlappedTask)", (const char *)&queryFormat, "overlappedTask") )
    __debugbreak();
  if ( !overlappedTask->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 415, ASSERT_TYPE_ASSERT, "(overlappedTask->active)", (const char *)&queryFormat, "overlappedTask->active") )
    __debugbreak();
  return overlappedTask->data;
}

/*
==============
TaskManager_GetTaskSetListFromSet
==============
*/
overlappedTask *TaskManager_GetTaskSetListFromSet(OverlappedTaskSet *taskSet)
{
  if ( !taskSet->registeredIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 33, ASSERT_TYPE_ASSERT, "(taskSet->registeredIndex != 0)", (const char *)&queryFormat, "taskSet->registeredIndex != 0") )
    __debugbreak();
  if ( taskManagerGlob.constructedTaskSets[taskSet->registeredIndex - 1] != taskSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 34, ASSERT_TYPE_ASSERT, "(taskManagerGlob.constructedTaskSets[taskSet->registeredIndex - 1] == taskSet)", (const char *)&queryFormat, "taskManagerGlob.constructedTaskSets[taskSet->registeredIndex - 1] == taskSet") )
    __debugbreak();
  if ( !taskManagerGlob.constructedTaskSetNames[taskSet->registeredIndex - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 35, ASSERT_TYPE_ASSERT, "(taskManagerGlob.constructedTaskSetNames[taskSet->registeredIndex - 1])", (const char *)&queryFormat, "taskManagerGlob.constructedTaskSetNames[taskSet->registeredIndex - 1]") )
    __debugbreak();
  return taskSet->tasks;
}

/*
==============
TaskManager_SetTaskData
==============
*/
void TaskManager_SetTaskData(overlappedTask *overlappedTask, void *data)
{
  if ( !overlappedTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 406, ASSERT_TYPE_ASSERT, "(overlappedTask)", (const char *)&queryFormat, "overlappedTask") )
    __debugbreak();
  if ( !overlappedTask->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_tasks.cpp", 407, ASSERT_TYPE_ASSERT, "(overlappedTask->active)", (const char *)&queryFormat, "overlappedTask->active") )
    __debugbreak();
  overlappedTask->data = data;
}

/*
==============
TaskManager_TaskIsInProgress
==============
*/
char TaskManager_TaskIsInProgress(OverlappedTaskSet *taskSet, const int type)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 v4; 
  int *i; 

  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v4 = 0i64;
  for ( i = &TaskSetListFromSet->type; !*((_BYTE *)i + 4) || *i != type; i += 10 )
  {
    if ( ++v4 >= 32 )
      return 0;
  }
  return 1;
}

/*
==============
TaskManager_TaskIsInProgressForController
==============
*/
char TaskManager_TaskIsInProgressForController(OverlappedTaskSet *taskSet, const int type, const int localControllerIndex)
{
  overlappedTask *TaskSetListFromSet; 
  __int64 v6; 
  int *i; 

  TaskSetListFromSet = TaskManager_GetTaskSetListFromSet(taskSet);
  v6 = 0i64;
  for ( i = &TaskSetListFromSet->type; !*((_BYTE *)i + 4) || *i != type || *((unsigned __int8 *)i + 5) != localControllerIndex; i += 10 )
  {
    if ( ++v6 >= 32 )
      return 0;
  }
  return 1;
}

