/*
==============
AIScheduler::AddReevalPathTask
==============
*/

void __fastcall AIScheduler::AddReevalPathTask(AITask *pTask)
{
  ?AddReevalPathTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AIScheduler::RemoveReevalPathTask
==============
*/

void __fastcall AIScheduler::RemoveReevalPathTask(AITask *pTask)
{
  ?RemoveReevalPathTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AITaskBucket::InitTaskList
==============
*/

void __fastcall AITaskBucket::InitTaskList(AITaskBucket *this)
{
  ?InitTaskList@AITaskBucket@@IEAAXXZ(this);
}

/*
==============
AIScheduler::AddThreatTask
==============
*/

void __fastcall AIScheduler::AddThreatTask(AITask *pTask)
{
  ?AddThreatTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AITaskBucket::Update
==============
*/

bool __fastcall AITaskBucket::Update(AITaskBucket *this, bool bOtherStuffWasDone)
{
  return ?Update@AITaskBucket@@QEAA_N_N@Z(this, bOtherStuffWasDone);
}

/*
==============
AITaskBucket::Count
==============
*/

int __fastcall AITaskBucket::Count(AITaskBucket *this)
{
  return ?Count@AITaskBucket@@QEBAHXZ(this);
}

/*
==============
AIScheduler::AddCoverFindTask
==============
*/

void __fastcall AIScheduler::AddCoverFindTask(AITask *pTask)
{
  ?AddCoverFindTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AIScheduler::RemoveThreatTask
==============
*/

void __fastcall AIScheduler::RemoveThreatTask(AITask *pTask)
{
  ?RemoveThreatTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AITaskBucket::Read
==============
*/

void __fastcall AITaskBucket::Read(AITaskBucket *this, MemoryFile *memFile)
{
  ?Read@AITaskBucket@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AIScheduler::Update
==============
*/

void AIScheduler::Update(void)
{
  ?Update@AIScheduler@@SAXXZ();
}

/*
==============
AITaskBucket_Spread::Write
==============
*/

void __fastcall AITaskBucket_Spread::Write(AITaskBucket_Spread *this, MemoryFile *memFile)
{
  ?Write@AITaskBucket_Spread@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AITaskBucket_Spread::Read
==============
*/

void __fastcall AITaskBucket_Spread::Read(AITaskBucket_Spread *this, MemoryFile *memFile)
{
  ?Read@AITaskBucket_Spread@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AITaskBucket::RemoveTask
==============
*/

void __fastcall AITaskBucket::RemoveTask(AITaskBucket *this, AITask *pTask)
{
  ?RemoveTask@AITaskBucket@@QEAAXPEAUAITask@@@Z(this, pTask);
}

/*
==============
AITaskBucket::Init
==============
*/

void __fastcall AITaskBucket::Init(AITaskBucket *this, const char *name, bool (__fastcall *pUpdateFn)(AITask *), AITask *(__fastcall *pGetTaskFn)(int), int maxUpdatesPerFrame, int minTimeBetweenUpdates)
{
  ?Init@AITaskBucket@@QEAAXPEBDP6A_NPEAUAITask@@@ZP6APEAU2@H@ZHH@Z(this, name, pUpdateFn, pGetTaskFn, maxUpdatesPerFrame, minTimeBetweenUpdates);
}

/*
==============
AIScheduler::AddPathFindTask
==============
*/

void __fastcall AIScheduler::AddPathFindTask(AITask *pTask)
{
  ?AddPathFindTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AIScheduler::Write
==============
*/

void __fastcall AIScheduler::Write(MemoryFile *memFile)
{
  ?Write@AIScheduler@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AITaskBucket::ShouldUpdate
==============
*/

bool __fastcall AITaskBucket::ShouldUpdate(AITaskBucket *this, bool bOtherStuffWasDone)
{
  return ?ShouldUpdate@AITaskBucket@@UEBA_N_N@Z(this, bOtherStuffWasDone);
}

/*
==============
AITaskBucket_Spread::Init
==============
*/

void __fastcall AITaskBucket_Spread::Init(AITaskBucket_Spread *this, const char *name, bool (__fastcall *pUpdateFn)(AITask *), AITask *(__fastcall *pGetFn)(int), int maxUpdatesPerFrame, int minTimeBetweenUpdates, int minDesiredTimeBetweenTaskUpdates, int maxDesiredTimeBetweenTaskUpdates)
{
  ?Init@AITaskBucket_Spread@@QEAAXPEBDP6A_NPEAUAITask@@@ZP6APEAU2@H@ZHHHH@Z(this, name, pUpdateFn, pGetFn, maxUpdatesPerFrame, minTimeBetweenUpdates, minDesiredTimeBetweenTaskUpdates, maxDesiredTimeBetweenTaskUpdates);
}

/*
==============
AIScheduler::RemovePathFindTask
==============
*/

void __fastcall AIScheduler::RemovePathFindTask(AITask *pTask)
{
  ?RemovePathFindTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AITaskBucket::AddTask
==============
*/

void __fastcall AITaskBucket::AddTask(AITaskBucket *this, AITask *pTask)
{
  ?AddTask@AITaskBucket@@QEAAXPEAUAITask@@@Z(this, pTask);
}

/*
==============
AIScheduler::Init
==============
*/

void AIScheduler::Init(void)
{
  ?Init@AIScheduler@@SAXXZ();
}

/*
==============
AITaskBucket_Spread::Update
==============
*/

bool __fastcall AITaskBucket_Spread::Update(AITaskBucket_Spread *this, bool bOtherStuffWasDone)
{
  return ?Update@AITaskBucket_Spread@@QEAA_N_N@Z(this, bOtherStuffWasDone);
}

/*
==============
AIScheduler::RemoveCoverFindTask
==============
*/

void __fastcall AIScheduler::RemoveCoverFindTask(AITask *pTask)
{
  ?RemoveCoverFindTask@AIScheduler@@SAXPEAUAITask@@@Z(pTask);
}

/*
==============
AITaskBucket_Lazy::ShouldUpdate
==============
*/

bool __fastcall AITaskBucket_Lazy::ShouldUpdate(AITaskBucket_Lazy *this, bool bOtherStuffWasDone)
{
  return ?ShouldUpdate@AITaskBucket_Lazy@@UEBA_N_N@Z(this, bOtherStuffWasDone);
}

/*
==============
AITaskBucket::Write
==============
*/

void __fastcall AITaskBucket::Write(AITaskBucket *this, MemoryFile *memFile)
{
  ?Write@AITaskBucket@@UEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AIScheduler::AddDebugString
==============
*/

void __fastcall AIScheduler::AddDebugString(AIScheduler *this, const char *s)
{
  ?AddDebugString@AIScheduler@@QEAAXPEBD@Z(this, s);
}

/*
==============
AIScheduler::Read
==============
*/

void __fastcall AIScheduler::Read(MemoryFile *memFile)
{
  ?Read@AIScheduler@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AITaskBucket::ShouldUpdate
==============
*/
bool AITaskBucket::ShouldUpdate(AITaskBucket *this, bool bOtherStuffWasDone)
{
  return this->m_TimeOfLastUpdate + this->m_MinTimeBetweenUpdates <= level.time;
}

/*
==============
AITaskBucket::Write
==============
*/
void AITaskBucket::Write(AITaskBucket *this, MemoryFile *memFile)
{
  AITask *pNext; 
  AITask *p_m_TaskList; 
  int p; 

  p = this->m_TimeOfLastUpdate;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_MaxUpdatesPerFrame;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_MinTimeBetweenUpdates;
  MemFile_WriteData(memFile, 4ui64, &p);
  pNext = this->m_TaskList.pNext;
  if ( pNext )
  {
    p_m_TaskList = &this->m_TaskList;
    do
    {
      if ( pNext == p_m_TaskList )
        break;
      LOWORD(p) = pNext->entNum;
      MemFile_WriteData(memFile, 2ui64, &p);
      pNext = pNext->pNext;
    }
    while ( pNext );
  }
  LOWORD(p) = 2047;
  MemFile_WriteData(memFile, 2ui64, &p);
}

/*
==============
AITaskBucket::Read
==============
*/
void AITaskBucket::Read(AITaskBucket *this, MemoryFile *memFile)
{
  AITask *p_m_TaskList; 
  __int64 v5; 
  AITask *v6; 
  AITask *v7; 
  __int64 v8; 
  __int64 v9; 
  int p; 
  unsigned __int16 v11; 

  if ( !this->m_fnTaskGet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 373, ASSERT_TYPE_ASSERT, "(m_fnTaskGet)", (const char *)&queryFormat, "m_fnTaskGet") )
    __debugbreak();
  *(_QWORD *)&this->m_TaskList.entNum = 2047i64;
  p_m_TaskList = &this->m_TaskList;
  this->m_TaskList.pNext = NULL;
  this->m_TaskList.pPrev = NULL;
  this->m_TaskList.status[0] = 0;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_TimeOfLastUpdate = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_MaxUpdatesPerFrame = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_MinTimeBetweenUpdates = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  v5 = (unsigned __int16)p;
  v6 = &this->m_TaskList;
  if ( (unsigned __int16)p != 2047 )
  {
    do
    {
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v9) = 2048;
        LODWORD(v8) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[(unsigned int)v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 386, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
        __debugbreak();
      v7 = this->m_fnTaskGet((unsigned int)v5);
      v6->pNext = v7;
      v7->pPrev = v6;
      v6 = v6->pNext;
      MemFile_ReadData(memFile, 2ui64, &v11);
      v5 = v11;
    }
    while ( v11 != 2047 );
    p_m_TaskList = &this->m_TaskList;
  }
  if ( v6 != p_m_TaskList )
  {
    v6->pNext = p_m_TaskList;
    this->m_TaskList.pPrev = v6;
  }
}

/*
==============
AITaskBucket_Lazy::ShouldUpdate
==============
*/
bool AITaskBucket_Lazy::ShouldUpdate(AITaskBucket_Lazy *this, bool bOtherStuffWasDone)
{
  return (this->m_TaskList.pNext || this->m_TaskList.pPrev) && (this->m_TimeOfLastUpdate + this->m_MinTimeBetweenUpdates <= level.time || !bOtherStuffWasDone);
}

/*
==============
AITaskBucket_Spread::Write
==============
*/
void AITaskBucket_Spread::Write(AITaskBucket_Spread *this, MemoryFile *memFile)
{
  int p; 

  p = this->m_MinDesiredTimeBetweenTaskUpdates;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_MaxDesiredTimeBetweenTaskUpdates;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_NumFramesInWhichToCrunch;
  MemFile_WriteData(memFile, 4ui64, &p);
  AITaskBucket::Write(this, memFile);
}

/*
==============
AITaskBucket_Spread::Read
==============
*/
void AITaskBucket_Spread::Read(AITaskBucket_Spread *this, MemoryFile *memFile)
{
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_MinDesiredTimeBetweenTaskUpdates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_MaxDesiredTimeBetweenTaskUpdates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  this->m_NumFramesInWhichToCrunch = p;
  AITaskBucket::Read(this, memFile);
}

/*
==============
AIScheduler::AddCoverFindTask
==============
*/
void AIScheduler::AddCoverFindTask(AITask *pTask)
{
  AITaskBucket::AddTask(&s_AIScheduler.m_CoverFindBucket, pTask);
}

/*
==============
AIScheduler::AddDebugString
==============
*/
void AIScheduler::AddDebugString(AIScheduler *this, const char *s)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_ai_showScheduler;
  _RDI = this;
  if ( !DVARBOOL_ai_showScheduler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showScheduler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm1, xmm0, cs:__real@42480000; y
      vmovss  xmm0, cs:__real@41f00000; x
      vmovss  xmm3, cs:__real@3f800000; scale
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, s);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm1, xmm0, cs:__real@41900000
      vmovss  dword ptr [rdi], xmm1
    }
  }
}

/*
==============
AIScheduler::AddPathFindTask
==============
*/
void AIScheduler::AddPathFindTask(AITask *pTask)
{
  AITaskBucket::AddTask(&s_AIScheduler.m_PathFindBucket, pTask);
}

/*
==============
AIScheduler::AddReevalPathTask
==============
*/
void AIScheduler::AddReevalPathTask(AITask *pTask)
{
  AITaskBucket::AddTask(&s_AIScheduler.m_ReEvalPathBucket, pTask);
}

/*
==============
AITaskBucket::AddTask
==============
*/
void AITaskBucket::AddTask(AITaskBucket *this, AITask *pTask)
{
  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 145, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  if ( pTask->pNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 146, ASSERT_TYPE_ASSERT, "( !pTask->pNext )", (const char *)&queryFormat, "!pTask->pNext") )
    __debugbreak();
  if ( pTask->pPrev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 147, ASSERT_TYPE_ASSERT, "( !pTask->pPrev )", (const char *)&queryFormat, "!pTask->pPrev") )
    __debugbreak();
  if ( pTask->status[0] == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 148, ASSERT_TYPE_ASSERT, "( pTask->status != AITaskStatus::PENDING )", (const char *)&queryFormat, "pTask->status != AITaskStatus::PENDING") )
    __debugbreak();
  if ( this->m_TaskList.pNext )
  {
    pTask->pNext = &this->m_TaskList;
    pTask->pPrev = this->m_TaskList.pPrev;
    this->m_TaskList.pPrev->pNext = pTask;
    this->m_TaskList.pPrev = pTask;
  }
  else
  {
    if ( this->m_TaskList.pPrev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 152, ASSERT_TYPE_ASSERT, "( !m_TaskList.pPrev )", (const char *)&queryFormat, "!m_TaskList.pPrev") )
      __debugbreak();
    this->m_TaskList.pNext = pTask;
    this->m_TaskList.pPrev = pTask;
    pTask->pNext = &this->m_TaskList;
    pTask->pPrev = &this->m_TaskList;
  }
  pTask->status[0] = 1;
  pTask->timestamp = level.time;
}

/*
==============
AIScheduler::AddThreatTask
==============
*/
void AIScheduler::AddThreatTask(AITask *pTask)
{
  AITaskBucket::AddTask(&s_AIScheduler.m_ThreatBucket, pTask);
}

/*
==============
AITaskBucket::Count
==============
*/
__int64 AITaskBucket::Count(AITaskBucket *this)
{
  AITask *pNext; 
  __int64 result; 
  AITask *p_m_TaskList; 

  pNext = this->m_TaskList.pNext;
  result = 0i64;
  if ( pNext )
  {
    p_m_TaskList = &this->m_TaskList;
    do
    {
      if ( pNext == p_m_TaskList )
        break;
      pNext = pNext->pNext;
      result = (unsigned int)(result + 1);
    }
    while ( pNext );
  }
  return result;
}

/*
==============
AIScheduler::Init
==============
*/

void __fastcall AIScheduler::Init(double _XMM0_8)
{
  s_AIScheduler.m_CoverFindBucket.m_fnTaskUpdate = AI_ScheduledCoverFind;
  s_AIScheduler.m_ReEvalPathBucket.m_fnTaskUpdate = Nav_ReEvalPathTask_Update;
  *(_QWORD *)&s_AIScheduler.m_CoverFindBucket.m_TaskList.entNum = 2047i64;
  s_AIScheduler.m_CoverFindBucket.m_fnTaskGet = AI_ScheduledCoverFind_Get;
  s_AIScheduler.m_ReEvalPathBucket.m_fnTaskGet = Nav_ReEvalPathTask_Get;
  s_AIScheduler.m_CoverFindBucket.m_Name = "CoverFind";
  s_AIScheduler.m_PathFindBucket.m_fnTaskUpdate = AI_ScheduledPathFind;
  s_AIScheduler.m_PathFindBucket.m_fnTaskGet = AI_ScheduledPathFind_Get;
  s_AIScheduler.m_PathFindBucket.m_Name = "PathFind";
  s_AIScheduler.m_ReEvalPathBucket.m_MinTimeBetweenUpdates = 5 * level.frameDuration;
  s_AIScheduler.m_ReEvalPathBucket.m_Name = "PathReEval";
  s_AIScheduler.m_ThreatBucket.m_fnTaskUpdate = AI_ScheduledThreatUpdate;
  s_AIScheduler.m_ThreatBucket.m_fnTaskGet = AI_ScheduledThreatUpdate_Get;
  s_AIScheduler.m_ThreatBucket.m_Name = "ThreatUpdate";
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_AIScheduler.m_CoverFindBucket.m_TaskList.status[0] = 0;
  __asm { vmovdqu xmmword ptr cs:s_AIScheduler.m_CoverFindBucket.m_TaskList.pNext, xmm0 }
  s_AIScheduler.m_CoverFindBucket.m_MaxUpdatesPerFrame = 1;
  s_AIScheduler.m_ThreatBucket.m_NumFramesInWhichToCrunch = 400 / level.frameDuration + 1;
  s_AIScheduler.m_CoverFindBucket.m_MinTimeBetweenUpdates = level.frameDuration;
  s_AIScheduler.m_CoverFindBucket.m_TimeOfLastUpdate = 0;
  __asm { vmovdqu xmmword ptr cs:s_AIScheduler.m_PathFindBucket.m_TaskList.pNext, xmm0 }
  *(_QWORD *)&s_AIScheduler.m_PathFindBucket.m_TaskList.entNum = 2047i64;
  s_AIScheduler.m_PathFindBucket.m_TaskList.status[0] = 0;
  s_AIScheduler.m_PathFindBucket.m_MaxUpdatesPerFrame = 1;
  s_AIScheduler.m_PathFindBucket.m_MinTimeBetweenUpdates = level.frameDuration;
  s_AIScheduler.m_PathFindBucket.m_TimeOfLastUpdate = 0;
  __asm { vmovdqu xmmword ptr cs:s_AIScheduler.m_ReEvalPathBucket.baseclass_0.m_TaskList.pNext, xmm0 }
  *(_QWORD *)&s_AIScheduler.m_ReEvalPathBucket.m_TaskList.entNum = 2047i64;
  s_AIScheduler.m_ReEvalPathBucket.m_TaskList.status[0] = 0;
  s_AIScheduler.m_ReEvalPathBucket.m_MaxUpdatesPerFrame = 1;
  s_AIScheduler.m_ReEvalPathBucket.m_TimeOfLastUpdate = 0;
  __asm { vmovdqu xmmword ptr cs:s_AIScheduler.m_ThreatBucket.baseclass_0.m_TaskList.pNext, xmm0 }
  *(_QWORD *)&s_AIScheduler.m_ThreatBucket.m_TaskList.entNum = 2047i64;
  s_AIScheduler.m_ThreatBucket.m_TaskList.status[0] = 0;
  s_AIScheduler.m_ThreatBucket.m_MaxUpdatesPerFrame = 4;
  s_AIScheduler.m_ThreatBucket.m_MinTimeBetweenUpdates = level.frameDuration;
  s_AIScheduler.m_ThreatBucket.m_TimeOfLastUpdate = 0;
  s_AIScheduler.m_ThreatBucket.m_MinDesiredTimeBetweenTaskUpdates = 400;
  s_AIScheduler.m_ThreatBucket.m_MaxDesiredTimeBetweenTaskUpdates = 800;
}

/*
==============
AITaskBucket::Init
==============
*/
void AITaskBucket::Init(AITaskBucket *this, const char *name, bool (*pUpdateFn)(AITask *), AITask *(*pGetTaskFn)(int), int maxUpdatesPerFrame, int minTimeBetweenUpdates)
{
  if ( !pUpdateFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 126, ASSERT_TYPE_ASSERT, "( pUpdateFn )", (const char *)&queryFormat, "pUpdateFn") )
    __debugbreak();
  this->m_MaxUpdatesPerFrame = maxUpdatesPerFrame;
  this->m_fnTaskGet = pGetTaskFn;
  this->m_Name = name;
  this->m_MinTimeBetweenUpdates = minTimeBetweenUpdates;
  this->m_TaskList.pNext = NULL;
  this->m_TaskList.pPrev = NULL;
  *(_QWORD *)&this->m_TaskList.entNum = 2047i64;
  this->m_TaskList.status[0] = 0;
  this->m_fnTaskUpdate = pUpdateFn;
  this->m_TimeOfLastUpdate = 0;
}

/*
==============
AITaskBucket_Spread::Init
==============
*/
void AITaskBucket_Spread::Init(AITaskBucket_Spread *this, const char *name, bool (*pUpdateFn)(AITask *), AITask *(*pGetFn)(int), int maxUpdatesPerFrame, int minTimeBetweenUpdates, int minDesiredTimeBetweenTaskUpdates, int maxDesiredTimeBetweenTaskUpdates)
{
  AITaskBucket::Init(this, name, pUpdateFn, pGetFn, maxUpdatesPerFrame, minTimeBetweenUpdates);
  this->m_MaxDesiredTimeBetweenTaskUpdates = maxDesiredTimeBetweenTaskUpdates;
  this->m_MinDesiredTimeBetweenTaskUpdates = minDesiredTimeBetweenTaskUpdates;
  this->m_NumFramesInWhichToCrunch = (maxDesiredTimeBetweenTaskUpdates - minDesiredTimeBetweenTaskUpdates) / level.frameDuration + 1;
}

/*
==============
AITaskBucket::InitTaskList
==============
*/
void AITaskBucket::InitTaskList(AITaskBucket *this)
{
  *(_QWORD *)&this->m_TaskList.entNum = 2047i64;
  this->m_TaskList.pNext = NULL;
  this->m_TaskList.pPrev = NULL;
  this->m_TaskList.status[0] = 0;
}

/*
==============
AIScheduler::Read
==============
*/
void AIScheduler::Read(MemoryFile *memFile)
{
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 116, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  AITaskBucket::Read(&s_AIScheduler.m_CoverFindBucket, memFile);
  AITaskBucket::Read(&s_AIScheduler.m_PathFindBucket, memFile);
  AITaskBucket::Read(&s_AIScheduler.m_ReEvalPathBucket, memFile);
  MemFile_ReadData(memFile, 4ui64, &p);
  s_AIScheduler.m_ThreatBucket.m_MinDesiredTimeBetweenTaskUpdates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  s_AIScheduler.m_ThreatBucket.m_MaxDesiredTimeBetweenTaskUpdates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  s_AIScheduler.m_ThreatBucket.m_NumFramesInWhichToCrunch = p;
  AITaskBucket::Read(&s_AIScheduler.m_ThreatBucket, memFile);
}

/*
==============
AIScheduler::RemoveCoverFindTask
==============
*/
void AIScheduler::RemoveCoverFindTask(AITask *pTask)
{
  AITaskBucket::RemoveTask(&s_AIScheduler.m_CoverFindBucket, pTask);
}

/*
==============
AIScheduler::RemovePathFindTask
==============
*/
void AIScheduler::RemovePathFindTask(AITask *pTask)
{
  AITaskBucket::RemoveTask(&s_AIScheduler.m_PathFindBucket, pTask);
}

/*
==============
AIScheduler::RemoveReevalPathTask
==============
*/
void AIScheduler::RemoveReevalPathTask(AITask *pTask)
{
  AITaskBucket::RemoveTask(&s_AIScheduler.m_ReEvalPathBucket, pTask);
}

/*
==============
AITaskBucket::RemoveTask
==============
*/
void AITaskBucket::RemoveTask(AITaskBucket *this, AITask *pTask)
{
  AITask **p_pPrev; 
  AITaskBucket *pNext; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 174, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  p_pPrev = &pTask->pPrev;
  if ( (!pTask->pNext || !*p_pPrev) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 175, ASSERT_TYPE_ASSERT, "( pTask->pNext && pTask->pPrev )", (const char *)&queryFormat, "pTask->pNext && pTask->pPrev") )
    __debugbreak();
  if ( pTask->status[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 176, ASSERT_TYPE_ASSERT, "( pTask->status == AITaskStatus::PENDING )", (const char *)&queryFormat, "pTask->status == AITaskStatus::PENDING") )
    __debugbreak();
  pNext = (AITaskBucket *)pTask->pNext;
  if ( pNext == (AITaskBucket *)&this->m_TaskList && pTask->pPrev == &this->m_TaskList )
  {
    this->m_TaskList.pPrev = NULL;
    this->m_TaskList.pNext = NULL;
  }
  else
  {
    if ( pNext->m_TaskList.pNext != pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 185, ASSERT_TYPE_ASSERT, "( pTask->pNext->pPrev == pTask )", (const char *)&queryFormat, "pTask->pNext->pPrev == pTask") )
      __debugbreak();
    pTask->pNext->pPrev = *p_pPrev;
    if ( (*p_pPrev)->pNext != pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 188, ASSERT_TYPE_ASSERT, "( pTask->pPrev->pNext == pTask )", (const char *)&queryFormat, "pTask->pPrev->pNext == pTask") )
      __debugbreak();
    (*p_pPrev)->pNext = pTask->pNext;
  }
  *p_pPrev = NULL;
  pTask->pNext = NULL;
  pTask->status[0] = 0;
}

/*
==============
AIScheduler::RemoveThreatTask
==============
*/
void AIScheduler::RemoveThreatTask(AITask *pTask)
{
  AITaskBucket::RemoveTask(&s_AIScheduler.m_ThreatBucket, pTask);
}

/*
==============
AIScheduler::Update
==============
*/

void __fastcall AIScheduler::Update(double _XMM0_8)
{
  const dvar_t *v1; 
  bool v9; 
  bool v10; 
  bool v11; 

  v1 = DVARBOOL_ai_showScheduler;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:s_AIScheduler.m_Y, xmm0
  }
  if ( !DVARBOOL_ai_showScheduler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showScheduler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@42480000; y
      vmovss  xmm0, cs:__real@41f00000; x
      vmovss  xmm3, cs:__real@3f800000; scale
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, "AIScheduler Stats");
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@41900000
      vmovss  cs:s_AIScheduler.m_Y, xmm1
    }
  }
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AISchedulerUpdate");
  v9 = AITaskBucket::Update(&s_AIScheduler.m_CoverFindBucket, 0);
  v10 = AITaskBucket::Update(&s_AIScheduler.m_PathFindBucket, v9) || v9;
  v11 = AITaskBucket::Update(&s_AIScheduler.m_ReEvalPathBucket, v10);
  AITaskBucket_Spread::Update(&s_AIScheduler.m_ThreatBucket, v11 || v10);
  Sys_ProfEndNamedEvent();
}

/*
==============
AITaskBucket::Update
==============
*/
bool AITaskBucket::Update(AITaskBucket *this, _BOOL8 bOtherStuffWasDone)
{
  int v3; 
  AITask *i; 
  AITask *pNext; 
  int v6; 
  AITask *j; 
  const char *m_Name; 
  const dvar_t *v9; 
  int fmt; 
  int fmta; 
  int v19; 
  int v20; 
  int v21; 
  char dest[512]; 

  v3 = 0;
  if ( this->ShouldUpdate(this, bOtherStuffWasDone) )
  {
    for ( i = this->m_TaskList.pNext; i; i = this->m_TaskList.pNext )
    {
      if ( v3 >= this->m_MaxUpdatesPerFrame )
        break;
      i->status[0] = 2;
      if ( this->m_fnTaskUpdate(i) )
        ++v3;
      i->status[0] = 1;
      AITaskBucket::RemoveTask(this, i);
      i->status[0] = 3;
    }
    this->m_TimeOfLastUpdate = level.time;
  }
  pNext = this->m_TaskList.pNext;
  v6 = 0;
  for ( j = pNext; j; ++v6 )
  {
    if ( j == &this->m_TaskList )
      break;
    j = j->pNext;
  }
  m_Name = this->m_Name;
  if ( v6 )
  {
    v21 = level.time - pNext->timestamp;
    v20 = v3;
    fmta = v6;
    Com_sprintf(dest, 0x200ui64, "%s pending: %d   processed: %d   oldest: %d", m_Name, fmta, v20, v21);
  }
  else
  {
    v19 = v3;
    fmt = 0;
    Com_sprintf(dest, 0x200ui64, "%s pending: %d   processed: %d", m_Name, fmt, v19);
  }
  v9 = DVARBOOL_ai_showScheduler;
  if ( !DVARBOOL_ai_showScheduler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showScheduler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@42480000; y
      vmovss  xmm0, cs:__real@41f00000; x
      vmovss  xmm3, cs:__real@3f800000; scale
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@41900000
      vmovss  cs:s_AIScheduler.m_Y, xmm1
    }
  }
  return v3 > 0;
}

/*
==============
AITaskBucket_Spread::Update
==============
*/
bool AITaskBucket_Spread::Update(AITaskBucket_Spread *this, _BOOL8 bOtherStuffWasDone)
{
  int v4; 
  char v6; 
  int time; 
  AITask *pNext; 
  int v9; 
  AITask *v10; 
  int m_MaxUpdatesPerFrame; 
  int v15; 
  AITask *v20; 
  int v21; 
  AITask *i; 
  const dvar_t *v23; 
  int fmt; 
  int fmta; 
  int v33; 
  int v34; 
  int v35; 
  char dest[512]; 

  v4 = 0;
  v6 = this->ShouldUpdate(this, bOtherStuffWasDone);
  time = level.time;
  if ( v6 )
  {
    pNext = this->m_TaskList.pNext;
    v9 = 0;
    v10 = pNext;
    if ( pNext )
    {
      if ( pNext != &this->m_TaskList )
      {
        do
        {
          if ( this->m_MaxDesiredTimeBetweenTaskUpdates + v10->timestamp > this->m_MaxDesiredTimeBetweenTaskUpdates + level.time )
            break;
          v10 = v10->pNext;
          ++v9;
        }
        while ( v10 != &this->m_TaskList );
        if ( v9 > 0 && (v9 >= this->m_NumFramesInWhichToCrunch || this->m_MinDesiredTimeBetweenTaskUpdates + pNext->timestamp <= level.time) )
        {
          m_MaxUpdatesPerFrame = this->m_MaxUpdatesPerFrame;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
          }
          v15 = 1;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, r8d
            vdivss  xmm1, xmm1, xmm0
            vaddss  xmm2, xmm1, cs:__real@3f000000
            vcvttss2si eax, xmm2
          }
          if ( _EAX > 1 )
            v15 = _EAX;
          if ( v15 < m_MaxUpdatesPerFrame )
            m_MaxUpdatesPerFrame = v15;
          do
          {
            if ( v4 >= m_MaxUpdatesPerFrame )
              break;
            pNext->status[0] = 2;
            if ( this->m_fnTaskUpdate(pNext) )
              ++v4;
            pNext->status[0] = 1;
            AITaskBucket::RemoveTask(this, pNext);
            pNext->status[0] = 3;
            pNext = this->m_TaskList.pNext;
          }
          while ( pNext );
          this->m_TimeOfLastUpdate = level.time;
          time = level.time;
        }
      }
    }
  }
  v20 = this->m_TaskList.pNext;
  v21 = 0;
  for ( i = v20; i; ++v21 )
  {
    if ( i == &this->m_TaskList )
      break;
    i = i->pNext;
  }
  if ( v21 )
  {
    v35 = time - v20->timestamp;
    v34 = v4;
    fmta = v21;
    Com_sprintf(dest, 0x200ui64, "%s pending: %d   processed: %d   oldest: %d", this->m_Name, fmta, v34, v35);
  }
  else
  {
    v33 = v4;
    fmt = 0;
    Com_sprintf(dest, 0x200ui64, "%s pending: %d   processed: %d", this->m_Name, fmt, v33);
  }
  v23 = DVARBOOL_ai_showScheduler;
  if ( !DVARBOOL_ai_showScheduler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showScheduler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@42480000; y
      vmovss  xmm0, cs:__real@41f00000; x
      vmovss  xmm3, cs:__real@3f800000; scale
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
    __asm
    {
      vmovss  xmm0, cs:s_AIScheduler.m_Y
      vaddss  xmm1, xmm0, cs:__real@41900000
      vmovss  cs:s_AIScheduler.m_Y, xmm1
    }
  }
  return v4 > 0;
}

/*
==============
AIScheduler::Write
==============
*/
void AIScheduler::Write(MemoryFile *memFile)
{
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scheduler.cpp", 107, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  AITaskBucket::Write(&s_AIScheduler.m_CoverFindBucket, memFile);
  AITaskBucket::Write(&s_AIScheduler.m_PathFindBucket, memFile);
  AITaskBucket::Write(&s_AIScheduler.m_ReEvalPathBucket, memFile);
  p = s_AIScheduler.m_ThreatBucket.m_MinDesiredTimeBetweenTaskUpdates;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_AIScheduler.m_ThreatBucket.m_MaxDesiredTimeBetweenTaskUpdates;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_AIScheduler.m_ThreatBucket.m_NumFramesInWhichToCrunch;
  MemFile_WriteData(memFile, 4ui64, &p);
  AITaskBucket::Write(&s_AIScheduler.m_ThreatBucket, memFile);
}

