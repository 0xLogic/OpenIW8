/*
==============
tg::Compiler::AddTask
==============
*/

void __fastcall tg::Compiler::AddTask(tg::Compiler *this, const tg::TaskDesc *taskDesc)
{
  ?AddTask@Compiler@tg@@QEAAXAEBUTaskDesc@2@@Z(this, taskDesc);
}

/*
==============
tg::Compiler::GetResourceInfo
==============
*/

void __fastcall tg::Compiler::GetResourceInfo(tg::Compiler *this, unsigned int resourceIndex, unsigned int temporalIndex, unsigned int disableConditions, tg::ResourceGlobalInfo *pOut)
{
  ?GetResourceInfo@Compiler@tg@@QEBAXIIIPEAUResourceGlobalInfo@2@@Z(this, resourceIndex, temporalIndex, disableConditions, pOut);
}

/*
==============
tg::Compiler::GetCondition
==============
*/

unsigned int __fastcall tg::Compiler::GetCondition(tg::Compiler *this, unsigned int conditionType, unsigned int conditionIndex)
{
  return ?GetCondition@Compiler@tg@@QEBAIII@Z(this, conditionType, conditionIndex);
}

/*
==============
tg::Compiler::GetAttachmentInfoCount
==============
*/

unsigned int __fastcall tg::Compiler::GetAttachmentInfoCount(tg::Compiler *this, unsigned int cmdIndex)
{
  return ?GetAttachmentInfoCount@Compiler@tg@@QEBAII@Z(this, cmdIndex);
}

/*
==============
tg::Compiler::ClearResources
==============
*/

void __fastcall tg::Compiler::ClearResources(tg::Compiler *this)
{
  ?ClearResources@Compiler@tg@@IEAAXXZ(this);
}

/*
==============
tg::Compiler::AddTaskDependencies
==============
*/

void __fastcall tg::Compiler::AddTaskDependencies(tg::Compiler *this, const tg::TaskDependency *pDependencies, unsigned int count, unsigned int totalTaskCount)
{
  ?AddTaskDependencies@Compiler@tg@@QEAAXPEBUTaskDependency@2@II@Z(this, pDependencies, count, totalTaskCount);
}

/*
==============
tg::Compiler::AddBranch
==============
*/

bool __fastcall tg::Compiler::AddBranch(tg::Compiler *this, tg::Task *pLhs, tg::Task *pRhs)
{
  return ?AddBranch@Compiler@tg@@IEBA_NPEAVTask@2@0@Z(this, pLhs, pRhs);
}

/*
==============
tg::Compiler::SelectBestTask
==============
*/

void __fastcall tg::Compiler::SelectBestTask(tg::Compiler *this, tg::TaskPtr *validTasks, const unsigned int validCount, unsigned int *scheduledTasks, unsigned int *taskIndex, unsigned int *queueIndex)
{
  ?SelectBestTask@Compiler@tg@@IEAAXPEAUTaskPtr@2@IPEAIAEAI2@Z(this, validTasks, validCount, scheduledTasks, taskIndex, queueIndex);
}

/*
==============
tg::Compiler::MergeReadAccess
==============
*/

void __fastcall tg::Compiler::MergeReadAccess(tg::Compiler *this)
{
  ?MergeReadAccess@Compiler@tg@@IEAAXXZ(this);
}

/*
==============
tg::Compiler::GetTaskInfo
==============
*/

void __fastcall tg::Compiler::GetTaskInfo(tg::Compiler *this, unsigned int cmdIndex, bool getChildInfo, tg::TaskInfo *pOut)
{
  ?GetTaskInfo@Compiler@tg@@QEBAXI_NPEAUTaskInfo@2@@Z(this, cmdIndex, getChildInfo, pOut);
}

/*
==============
tg::Compiler::BuildPotentialDependencyMasks
==============
*/

void __fastcall tg::Compiler::BuildPotentialDependencyMasks(tg::Compiler *this)
{
  ?BuildPotentialDependencyMasks@Compiler@tg@@IEAAXXZ(this);
}

/*
==============
tg::Compiler::FindLastDependencies
==============
*/

void __fastcall tg::Compiler::FindLastDependencies(tg::Compiler *this)
{
  ?FindLastDependencies@Compiler@tg@@IEAAXXZ(this);
}

/*
==============
tg::Compiler::Compile
==============
*/

bool __fastcall tg::Compiler::Compile(tg::Compiler *this, void *pContext, const char *const *ppOutputResources, unsigned int outputResourceCount, const tg::CompileOptions *pOptions)
{
  return ?Compile@Compiler@tg@@QEAA_NPEAXPEBQEBDIPEBUCompileOptions@2@@Z(this, pContext, ppOutputResources, outputResourceCount, pOptions);
}

/*
==============
tg::Compiler::BuildRenderOrder
==============
*/

bool __fastcall tg::Compiler::BuildRenderOrder(tg::Compiler *this)
{
  return ?BuildRenderOrder@Compiler@tg@@IEAA_NXZ(this);
}

/*
==============
tg::Compiler::GetDynamicSizeStepCount
==============
*/

unsigned int __fastcall tg::Compiler::GetDynamicSizeStepCount(tg::Compiler *this)
{
  return ?GetDynamicSizeStepCount@Compiler@tg@@QEBAIXZ(this);
}

/*
==============
tg::CompilerDynAlloc::NewTask
==============
*/

tg::Task *__fastcall tg::CompilerDynAlloc::NewTask(tg::CompilerDynAlloc *this, const char *pName)
{
  return ?NewTask@CompilerDynAlloc@tg@@UEAAPEAVTask@2@PEBD@Z(this, pName);
}

/*
==============
tg::RenderOrderModifiers::RenderOrderModifiers
==============
*/

void __fastcall tg::RenderOrderModifiers::RenderOrderModifiers(tg::RenderOrderModifiers *this, bool _batchCompute, bool tileCache)
{
  ??0RenderOrderModifiers@tg@@QEAA@_N0@Z(this, _batchCompute, tileCache);
}

/*
==============
tg::Compiler::ClearBranch
==============
*/

void __fastcall tg::Compiler::ClearBranch(tg::Compiler *this, tg::Task *pLhs, tg::Task *pRhs)
{
  ?ClearBranch@Compiler@tg@@IEBAXPEAVTask@2@0@Z(this, pLhs, pRhs);
}

/*
==============
tg::Compiler::AddTask
==============
*/

void __fastcall tg::Compiler::AddTask(tg::Compiler *this, tg::Task *pTask)
{
  ?AddTask@Compiler@tg@@QEAAXPEAVTask@2@@Z(this, pTask);
}

/*
==============
tg::Compiler::GetResourceInfoCount
==============
*/

unsigned int __fastcall tg::Compiler::GetResourceInfoCount(tg::Compiler *this)
{
  return ?GetResourceInfoCount@Compiler@tg@@QEBAIXZ(this);
}

/*
==============
tg::Compiler::BuildDependencyGraph
==============
*/

bool __fastcall tg::Compiler::BuildDependencyGraph(tg::Compiler *this)
{
  return ?BuildDependencyGraph@Compiler@tg@@IEAA_NXZ(this);
}

/*
==============
tg::Compiler::Compiler
==============
*/

void __fastcall tg::Compiler::Compiler(tg::Compiler *this)
{
  ??0Compiler@tg@@QEAA@XZ(this);
}

/*
==============
tg::CompilerDynAlloc::~CompilerDynAlloc
==============
*/

void __fastcall tg::CompilerDynAlloc::~CompilerDynAlloc(tg::CompilerDynAlloc *this)
{
  ??1CompilerDynAlloc@tg@@UEAA@XZ(this);
}

/*
==============
tg::Compiler::~Compiler
==============
*/

void __fastcall tg::Compiler::~Compiler(tg::Compiler *this)
{
  ??1Compiler@tg@@UEAA@XZ(this);
}

/*
==============
tg::Compiler::AddCreateResources
==============
*/

void __fastcall tg::Compiler::AddCreateResources(tg::Compiler *this, const char *const *pNames, const tg::ResourceDesc *pDescs, unsigned int descCount)
{
  ?AddCreateResources@Compiler@tg@@QEAAXPEBQEBDPEBUResourceDesc@2@I@Z(this, pNames, pDescs, descCount);
}

/*
==============
tg::Compiler::BuildDependencyGraphForEachTask
==============
*/

bool __fastcall tg::Compiler::BuildDependencyGraphForEachTask(tg::Compiler *this, tg::Task *pTask)
{
  return ?BuildDependencyGraphForEachTask@Compiler@tg@@IEAA_NPEAVTask@2@@Z(this, pTask);
}

/*
==============
tg::Compiler::Compile
==============
*/

bool __fastcall tg::Compiler::Compile(tg::Compiler *this, void *pContext, const tg::TaskGraphDesc *taskGraphDesc, const tg::CompileOptions *pOptions)
{
  return ?Compile@Compiler@tg@@QEAA_NPEAXAEBUTaskGraphDesc@2@PEBUCompileOptions@2@@Z(this, pContext, taskGraphDesc, pOptions);
}

/*
==============
tg::Compiler::AddRenderTask
==============
*/

bool __fastcall tg::Compiler::AddRenderTask(tg::Compiler *this, tg::Task *pTask, unsigned int flags)
{
  return ?AddRenderTask@Compiler@tg@@QEAA_NPEAVTask@2@I@Z(this, pTask, flags);
}

/*
==============
tg::Compiler::AddTaskGraph
==============
*/

void __fastcall tg::Compiler::AddTaskGraph(tg::Compiler *this, const tg::TaskGraphDesc *taskGraphDesc)
{
  ?AddTaskGraph@Compiler@tg@@QEAAXAEBUTaskGraphDesc@2@@Z(this, taskGraphDesc);
}

/*
==============
tg::Compiler::GetTaskInfo
==============
*/

void __fastcall tg::Compiler::GetTaskInfo(tg::Compiler *this, tg::TaskInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  ?GetTaskInfo@Compiler@tg@@QEBAXPEAUTaskInfo@2@IAEAI@Z(this, pOut, __formal, outSize);
}

/*
==============
tg::Compiler::GetAttachmentSubresourceInfo
==============
*/

void __fastcall tg::Compiler::GetAttachmentSubresourceInfo(tg::Compiler *this, unsigned int cmdIndex, unsigned int attachIndex, bool prev, unsigned int disableConditions, tg::AttachmentState *pOut, unsigned int __formal, unsigned int *outSize)
{
  ?GetAttachmentSubresourceInfo@Compiler@tg@@QEBAXII_NIPEAUAttachmentState@2@IAEAI@Z(this, cmdIndex, attachIndex, prev, disableConditions, pOut, __formal, outSize);
}

/*
==============
tg::Compiler::AddExternalResources
==============
*/

void __fastcall tg::Compiler::AddExternalResources(tg::Compiler *this, const char *const *pNames, const tg::ResourceDesc *pDescs, unsigned int descCount)
{
  ?AddExternalResources@Compiler@tg@@QEAAXPEBQEBDPEBUResourceDesc@2@I@Z(this, pNames, pDescs, descCount);
}

/*
==============
tg::DebugLog::Print
==============
*/

void tg::DebugLog::Print(tg::DebugLog *this, const char *format, ...)
{
  ?Print@DebugLog@tg@@QEAAXPEBDZZ(this, format);
}

/*
==============
tg::Compiler::GetResourceInfo
==============
*/

void __fastcall tg::Compiler::GetResourceInfo(tg::Compiler *this, tg::ResourceGlobalInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  ?GetResourceInfo@Compiler@tg@@QEBAXPEAUResourceGlobalInfo@2@IAEAI@Z(this, pOut, __formal, outSize);
}

/*
==============
tg::Compiler::GetConditionCount
==============
*/

unsigned int __fastcall tg::Compiler::GetConditionCount(tg::Compiler *this, unsigned int conditionType)
{
  return ?GetConditionCount@Compiler@tg@@QEBAII@Z(this, conditionType);
}

/*
==============
tg::Compiler::GetAttachmentInfo
==============
*/

void __fastcall tg::Compiler::GetAttachmentInfo(tg::Compiler *this, unsigned int cmdIndex, unsigned int disableConditions, tg::AttachmentInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  ?GetAttachmentInfo@Compiler@tg@@QEBAXIIPEAUAttachmentInfo@2@IAEAI@Z(this, cmdIndex, disableConditions, pOut, __formal, outSize);
}

/*
==============
tg::Compiler::Compiler
==============
*/
void tg::Compiler::Compiler(tg::Compiler *this)
{
  this->__vftable = (tg::Compiler_vtbl *)tg::Compiler::`vftable';
  tg::ResourceTracker::ResourceTracker(&this->m_resourceTracker);
  this->m_logs.info.m_bufferLimit = 4096i64;
  this->m_logs.info.m_pBuffer = this->m_logs.info.m_buffer;
  this->m_logs.info.m_enabled = 1;
  this->m_logs.info.m_bufferUsed = 0i64;
  this->m_logs.error.m_pBuffer = this->m_logs.error.m_buffer;
  this->m_logs.error.m_bufferLimit = 4096i64;
  this->m_logs.error.m_bufferUsed = 0i64;
  this->m_logs.error.m_enabled = 1;
  this->m_taskCount = 0;
  memset_0(this->m_cmds, 0, sizeof(this->m_cmds));
  this->m_dynamicSizeData.pSizes = NULL;
  *(_QWORD *)&this->m_dynamicSizeData.limit = 0i64;
  *(_QWORD *)&this->m_dynamicSizeData.stepCount = 0i64;
  this->m_cmdCount = 0;
  this->m_queueCount = 1;
  this->m_resourceCmdCount = 0;
  *(_QWORD *)this->m_buildDependencyBitVector.bits = 0i64;
  *(_QWORD *)&this->m_buildDependencyBitVector.bits[2] = 0i64;
  *(_QWORD *)&this->m_buildDependencyBitVector.bits[4] = 0i64;
  *(_QWORD *)&this->m_buildDependencyBitVector.bits[6] = 0i64;
  *(_QWORD *)&this->m_buildDependencyBitVector.bits[8] = 0i64;
  this->m_buildDependencyBitVector.bits[10] = 0;
  *(_QWORD *)&this->m_renderOrder = 0i64;
}

/*
==============
tg::RenderOrderModifiers::RenderOrderModifiers
==============
*/
void tg::RenderOrderModifiers::RenderOrderModifiers(tg::RenderOrderModifiers *this, bool _batchCompute, bool tileCache)
{
  int v3; 

  v3 = 1;
  if ( !tileCache )
    v3 = 8;
  this->renderPassCompatible = tileCache ? 0xFFFFFFEC : 0;
  this->pipelineBarrier = v3;
  this->renderTextureCompatible = 0;
  *(_QWORD *)&this->releasesResources = -1i64;
  this->batchCompute = _batchCompute ? 0xFFFFFFF1 : 0;
}

/*
==============
tg::Compiler::~Compiler
==============
*/
void tg::Compiler::~Compiler(tg::Compiler *this)
{
  this->__vftable = (tg::Compiler_vtbl *)tg::Compiler::`vftable';
}

/*
==============
tg::CompilerDynAlloc::~CompilerDynAlloc
==============
*/
void tg::CompilerDynAlloc::~CompilerDynAlloc(tg::CompilerDynAlloc *this)
{
  __int64 v1; 
  tg::TaskWithAttachments *v3; 

  v1 = 0i64;
  this->__vftable = (tg::CompilerDynAlloc_vtbl *)tg::CompilerDynAlloc::`vftable';
  if ( this->m_taskAllocCount )
  {
    do
    {
      v3 = this->m_taskAllocs[v1];
      if ( v3 )
      {
        tg::Task::~Task(&this->m_taskAllocs[v1]->task);
        operator delete(v3, 0x1618ui64);
      }
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < this->m_taskAllocCount );
    this->__vftable = (tg::CompilerDynAlloc_vtbl *)tg::Compiler::`vftable';
  }
  else
  {
    this->__vftable = (tg::CompilerDynAlloc_vtbl *)tg::Compiler::`vftable';
  }
}

/*
==============
tg::Compiler::AddBranch
==============
*/
char tg::Compiler::AddBranch(tg::Compiler *this, tg::Task *pLhs, tg::Task *pRhs)
{
  if ( tg::Task::FindNext(pLhs, pRhs) != -1 )
    return 0;
  tg::Task::AddNext(pLhs, pRhs);
  tg::Task::AddPrevious(pRhs, pLhs);
  return 1;
}

/*
==============
tg::Compiler::AddCreateResources
==============
*/
void tg::Compiler::AddCreateResources(tg::Compiler *this, const char *const *pNames, const tg::ResourceDesc *pDescs, unsigned int descCount)
{
  const tg::ResourceDesc *v5; 
  __int64 v7; 
  const tg::ResourceDesc *pDesc; 
  tg::Task *v9; 

  if ( descCount )
  {
    v5 = pDescs;
    v7 = descCount;
    pDesc = pDescs;
    v9 = this->NewTask(this, "start_resources");
    v9->m_flags = 4;
    do
    {
      tg::Task::CreateOutputResource(v9, &this->m_logs, *pNames, v5->type, eResourceState_Write, 0, 0, pDesc++);
      ++v5;
      ++pNames;
      --v7;
    }
    while ( v7 );
    tg::Task::ProcessAttachments(v9);
    this->m_tasks[this->m_taskCount++] = v9;
  }
}

/*
==============
tg::Compiler::AddExternalResources
==============
*/
void tg::Compiler::AddExternalResources(tg::Compiler *this, const char *const *pNames, const tg::ResourceDesc *pDescs, unsigned int descCount)
{
  const tg::ResourceDesc *v4; 
  const tg::ResourceDesc *v7; 
  __int64 v8; 
  tg::Task *v9; 

  if ( descCount )
  {
    v4 = pDescs;
    v7 = pDescs;
    v8 = descCount;
    do
    {
      v9 = this->NewTask(this, *pNames);
      v9->m_flags = 4;
      tg::Task::AddAttachment(v9, &this->m_logs, *pNames, NULL, v4->type, eResourceState_Initial, 0, 0xFFu, 0xFFu, 0xFFu, 0, 0, NULL);
      tg::Task::SetAttachmentResource(v9, 0, v7);
      tg::Task::ProcessAttachments(v9);
      ++v4;
      ++v7;
      ++pNames;
      this->m_tasks[this->m_taskCount++] = v9;
      --v8;
    }
    while ( v8 );
  }
}

/*
==============
tg::Compiler::AddRenderTask
==============
*/
bool tg::Compiler::AddRenderTask(tg::Compiler *this, tg::Task *pTask, unsigned int flags)
{
  __int64 m_taskCount; 
  bool result; 

  m_taskCount = this->m_taskCount;
  if ( (unsigned int)m_taskCount >= 0x150 )
    return 0;
  this->m_taskCount = m_taskCount + 1;
  pTask->m_flags |= flags;
  result = 1;
  this->m_tasks[m_taskCount] = pTask;
  return result;
}

/*
==============
tg::Compiler::AddTask
==============
*/
void tg::Compiler::AddTask(tg::Compiler *this, const tg::TaskDesc *taskDesc)
{
  tg::Task *v4; 
  __int64 v5; 
  unsigned int i; 
  const tg::ColourSurfaceDesc *v7; 
  const tg::DepthSurfaceDesc *pDepthSurface; 
  unsigned int j; 
  const tg::AttachmentDesc *v10; 
  unsigned int k; 
  const tg::CreateResourceDesc *v12; 

  v4 = this->NewTask(this, taskDesc->pName);
  v4->m_flags = taskDesc->flags;
  tg::Task::SetOrderHint(v4, taskDesc->orderHint);
  v4->m_typeIndex = taskDesc->typeIndex;
  tg::Task::SetUserData(v4, taskDesc->pUserData, taskDesc->userDataCount);
  tg::Task::SetSystemData(v4, taskDesc->pSystemData, taskDesc->systemDataCount);
  tg::Task::SetCondition(v4, taskDesc->conditionType, taskDesc->conditionIndex);
  v5 = 0i64;
  for ( i = 0; i < taskDesc->colourSurfaceCount; ++i )
  {
    v7 = &taskDesc->pColourSurfaces[i];
    tg::Task::AddColourSurface(v4, &this->m_logs, v7->pName, v7->arrayIndex, v7->levelIndex, v7->segmentIndex, v7->temporalIndex, v7->flags, v7->pData, v7->pOutputName);
  }
  pDepthSurface = taskDesc->pDepthSurface;
  if ( pDepthSurface )
    tg::Task::AddDepthSurface(v4, &this->m_logs, pDepthSurface->pName, pDepthSurface->readOnly, pDepthSurface->flags, pDepthSurface->pData, pDepthSurface->pOutputName);
  for ( j = 0; j < taskDesc->attachmentCount; ++j )
  {
    v10 = &taskDesc->pAttachments[j];
    tg::Task::AddAttachment(v4, &this->m_logs, v10->pNameInput, v10->pNameOutput, v10->type, v10->state, v10->access, v10->arrayIndex, v10->levelIndex, v10->segmentIndex, v10->temporalIndex, v10->flags, v10->pData);
  }
  for ( k = 0; k < taskDesc->createResourceCount; ++k )
  {
    v12 = &taskDesc->pCreateResources[k];
    tg::Task::CreateResource(v4, v12->pName, v12);
  }
  if ( taskDesc->dependencyCount )
  {
    do
    {
      v4->m_dependencies[v5] = taskDesc->pDependencies[v5];
      v5 = (unsigned int)(v5 + 1);
      ++v4->m_dependencyCount;
    }
    while ( (unsigned int)v5 < taskDesc->dependencyCount );
  }
  tg::Task::ProcessAttachments(v4);
  this->m_tasks[this->m_taskCount++] = v4;
}

/*
==============
tg::Compiler::AddTask
==============
*/
void tg::Compiler::AddTask(tg::Compiler *this, tg::Task *pTask)
{
  this->m_tasks[this->m_taskCount++] = pTask;
}

/*
==============
tg::Compiler::AddTaskDependencies
==============
*/
void tg::Compiler::AddTaskDependencies(tg::Compiler *this, const tg::TaskDependency *pDependencies, __int64 count, unsigned int totalTaskCount)
{
  unsigned int v5; 
  int dstTask; 
  tg::Task *v7; 

  v5 = this->m_taskCount - totalTaskCount;
  if ( (_DWORD)count )
  {
    count = (unsigned int)count;
    do
    {
      dstTask = pDependencies->dstTask;
      ++pDependencies;
      v7 = (tg::Task *)*((_QWORD *)&this->m_tasks[v5] + dstTask);
      v7->m_dependencies[v7->m_dependencyCount++] = pDependencies[-1].srcTask + v5;
      v7->m_flags &= ~0x10u;
      --count;
    }
    while ( count );
  }
}

/*
==============
tg::Compiler::AddTaskGraph
==============
*/
void tg::Compiler::AddTaskGraph(tg::Compiler *this, const tg::TaskGraphDesc *taskGraphDesc, __int64 a3)
{
  const tg::TaskGraphDesc *v3; 
  unsigned int v4; 
  const tg::ResourceDesc *pCreateResourceDescs; 
  __int64 createResourceCount; 
  const char **ppCreateResourceNames; 
  tg::Task *v9; 
  const tg::ResourceDesc *pDesc; 
  __int64 m_taskCount; 
  unsigned int externalResourceCount; 
  tg::eResourceType *p_type; 
  const char **ppExternalResourceNames; 
  const tg::ResourceDesc *pExternalResourceDescs; 
  __int64 v16; 
  tg::Task *v17; 
  unsigned int taskDescCount; 
  unsigned int taskDependencyCount; 
  int v20; 
  const tg::TaskDependency *pTaskDependencies; 
  __int64 v22; 
  int dstTask; 
  tg::Task *v24; 

  v3 = taskGraphDesc;
  v4 = 0;
  pCreateResourceDescs = taskGraphDesc->pCreateResourceDescs;
  createResourceCount = taskGraphDesc->createResourceCount;
  ppCreateResourceNames = (const char **)taskGraphDesc->ppCreateResourceNames;
  if ( (_DWORD)createResourceCount )
  {
    v9 = this->NewTask(this, "start_resources");
    pDesc = pCreateResourceDescs;
    v9->m_flags = 4;
    do
    {
      tg::Task::CreateOutputResource(v9, &this->m_logs, *ppCreateResourceNames, pCreateResourceDescs->type, eResourceState_Write, 0, 0, pDesc++);
      ++pCreateResourceDescs;
      ++ppCreateResourceNames;
      --createResourceCount;
    }
    while ( createResourceCount );
    tg::Task::ProcessAttachments(v9);
    v3 = taskGraphDesc;
    this->m_tasks[this->m_taskCount++] = v9;
    m_taskCount = this->m_taskCount;
  }
  else
  {
    m_taskCount = this->m_taskCount;
  }
  externalResourceCount = v3->externalResourceCount;
  p_type = &v3->pExternalResourceDescs->type;
  ppExternalResourceNames = (const char **)v3->ppExternalResourceNames;
  if ( externalResourceCount )
  {
    pExternalResourceDescs = v3->pExternalResourceDescs;
    v16 = externalResourceCount;
    do
    {
      v17 = (tg::Task *)((__int64 (__fastcall *)(tg::Compiler *, const char *, __int64, __int64))this->NewTask)(this, *ppExternalResourceNames, a3, m_taskCount);
      v17->m_flags = 4;
      tg::Task::AddAttachment(v17, &this->m_logs, *ppExternalResourceNames, NULL, *p_type, eResourceState_Initial, 0, 0xFFu, 0xFFu, 0xFFu, 0, 0, NULL);
      tg::Task::SetAttachmentResource(v17, 0, pExternalResourceDescs);
      tg::Task::ProcessAttachments(v17);
      p_type += 20;
      ++pExternalResourceDescs;
      ++ppExternalResourceNames;
      this->m_tasks[this->m_taskCount] = v17;
      m_taskCount = this->m_taskCount + 1;
      this->m_taskCount = m_taskCount;
      --v16;
    }
    while ( v16 );
    v3 = taskGraphDesc;
  }
  taskDescCount = v3->taskDescCount;
  if ( taskDescCount )
  {
    do
    {
      tg::Compiler::AddTask(this, &v3->pTaskDescs[v4]);
      taskDescCount = v3->taskDescCount;
      ++v4;
    }
    while ( v4 < taskDescCount );
    LODWORD(m_taskCount) = this->m_taskCount;
  }
  taskDependencyCount = v3->taskDependencyCount;
  v20 = m_taskCount - taskDescCount;
  pTaskDependencies = v3->pTaskDependencies;
  if ( taskDependencyCount )
  {
    v22 = taskDependencyCount;
    do
    {
      dstTask = pTaskDependencies->dstTask;
      ++pTaskDependencies;
      v24 = this->m_tasks[v20 + dstTask];
      v24->m_dependencies[v24->m_dependencyCount++] = pTaskDependencies[-1].srcTask + v20;
      v24->m_flags &= ~0x10u;
      --v22;
    }
    while ( v22 );
  }
  this->m_queueCount = v3->queueCount;
  this->m_dynamicSizeData.stepCount = v3->dynamicSizeStepCount;
}

/*
==============
tg::Compiler::BuildDependencyGraph
==============
*/
char tg::Compiler::BuildDependencyGraph(tg::Compiler *this)
{
  unsigned int m_taskCount; 
  __int64 i; 
  tg::Task *v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  __int64 v8; 
  tg::Task *v9; 
  __int64 v10; 
  tg::Task *v11; 
  unsigned int m_attachmentCount; 
  unsigned int v13; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v15; 
  tg::ResourceDesc *pDesc; 
  unsigned int ref; 
  const char *m_pName; 
  const char *pNameInput; 

  m_taskCount = this->m_taskCount;
  for ( i = 0i64; (unsigned int)i < m_taskCount; i = (unsigned int)(i + 1) )
  {
    v4 = this->m_tasks[i];
    if ( !v4->m_renderOrder && (v4->m_flags & 2) != 0 )
      tg::Compiler::BuildDependencyGraphForEachTask(this, v4);
    m_taskCount = this->m_taskCount;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0i64;
  if ( !m_taskCount )
  {
LABEL_22:
    tg::DebugLog::Print(&this->m_logs.info, " - %u tasks with %u dependencies and %u resources\n", v5, v6, v7);
    return 1;
  }
  while ( 1 )
  {
    v9 = this->m_tasks[v8];
    if ( v9->m_renderOrder )
    {
      ++v5;
      v10 = 0i64;
      v6 += v9->m_previousCount;
      v7 += v9->m_descCount;
      this->m_graphHash += v9->m_nameHash + v9->m_orderHint + v9->m_readHash;
      if ( v9->m_previousCount )
      {
        do
        {
          v11 = this->m_tasks[v9->m_previous[v10]];
          if ( !tg::Task::ResolveInputResources(v9, v11) )
          {
            tg::DebugLog::Print(&this->m_logs.error, "ERROR: Task '%s' is dependent on task '%s', but couldn't find any matching attachments!\n", v9->m_pName, v11->m_pName);
            return 0;
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < v9->m_previousCount );
      }
      if ( !tg::Task::AllInputResourcesSatisfied(v9) )
      {
        m_attachmentCount = v9->m_attachmentCount;
        v13 = 0;
        if ( m_attachmentCount )
          break;
      }
    }
LABEL_21:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= this->m_taskCount )
      goto LABEL_22;
  }
  m_attachments = v9->m_attachments;
  while ( 1 )
  {
    v15 = v13;
    pDesc = m_attachments[v15].pDesc;
    ref = m_attachments[v15].ref;
    if ( pDesc )
      break;
    if ( !ref )
      goto LABEL_16;
LABEL_20:
    if ( ++v13 >= m_attachmentCount )
      goto LABEL_21;
  }
  if ( !ref )
    goto LABEL_20;
LABEL_16:
  m_pName = v9->m_pName;
  pNameInput = m_attachments[v13].pNameInput;
  if ( pDesc )
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: Task '%s' input '%s' is satisfied from internal resource, but also has external references!\n", m_pName, pNameInput);
  else
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: Task '%s' input '%s' attachment index '%u' not satisfied!\n", m_pName, pNameInput, v13);
  return 0;
}

/*
==============
tg::Compiler::BuildDependencyGraphForEachTask
==============
*/
char tg::Compiler::BuildDependencyGraphForEachTask(tg::Compiler *this, tg::Task *pTask)
{
  unsigned int v3; 
  __int64 v4; 
  unsigned int m_attachmentCount; 
  char v7; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v9; 
  char v10; 
  bool v11; 
  char result; 
  char v13; 
  unsigned int *v14; 
  unsigned __int64 v15; 
  int v16; 
  tg::Task *v17; 

  v3 = ++this->m_renderOrder;
  v4 = 0i64;
  m_attachmentCount = pTask->m_attachmentCount;
  pTask->m_renderOrder = v3;
  v7 = 1;
  if ( m_attachmentCount )
  {
    m_attachments = pTask->m_attachments;
    v9 = m_attachmentCount;
    do
    {
      v10 = 0;
      v11 = m_attachments->pDesc == NULL;
      ++m_attachments;
      if ( !v11 )
        v10 = v7;
      v7 = v10;
      --v9;
    }
    while ( v9 );
    if ( v10 != 1 )
      goto LABEL_9;
  }
  if ( pTask->m_dependencyCount )
  {
LABEL_9:
    v13 = 1;
    v14 = &this->m_buildDependencyBitVector.bits[(unsigned __int64)pTask->m_taskIndex >> 5];
    *v14 |= 1 << (pTask->m_taskIndex & 0x1F);
    if ( this->m_taskCount )
    {
      do
      {
        v15 = (unsigned __int64)(unsigned int)v4 >> 5;
        v16 = 1 << (v4 & 0x1F);
        if ( (v16 & pTask->m_dependencyBitVector.bits[v15]) != 0 && (v16 & this->m_buildDependencyBitVector.bits[v15]) == 0 )
        {
          v17 = this->m_tasks[v4];
          if ( tg::Task::FindNext(v17, pTask) == -1 )
          {
            tg::Task::AddNext(v17, pTask);
            tg::Task::AddPrevious(pTask, v17);
            v13 &= tg::Compiler::BuildDependencyGraphForEachTask(this, this->m_tasks[v4]);
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < this->m_taskCount );
    }
    result = v13;
    this->m_buildDependencyBitVector.bits[(unsigned __int64)pTask->m_taskIndex >> 5] &= ~(1 << (pTask->m_taskIndex & 0x1F));
  }
  else
  {
    pTask->m_flags |= 0x10u;
    return 1;
  }
  return result;
}

/*
==============
tg::Compiler::BuildPotentialDependencyMasks
==============
*/
void tg::Compiler::BuildPotentialDependencyMasks(tg::Compiler *this)
{
  unsigned int i; 
  __int64 v3; 
  unsigned int v4; 
  tg::Task *v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  tg::Task **m_tasks; 
  unsigned int m_attachmentCount; 
  char v10; 
  tg::Task *v11; 
  __int64 v12; 
  __int64 p_nameHashInput; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int *p_flags; 
  int v17; 
  int v18; 
  bool v19; 
  char v20; 
  char v21; 

  for ( i = 0; i < this->m_taskCount; ++i )
  {
    v3 = i;
    v4 = 0;
    v5 = this->m_tasks[i];
    *(_QWORD *)v5->m_dependencyBitVector.bits = 0i64;
    *(_QWORD *)&v5->m_dependencyBitVector.bits[2] = 0i64;
    *(_QWORD *)&v5->m_dependencyBitVector.bits[4] = 0i64;
    *(_QWORD *)&v5->m_dependencyBitVector.bits[6] = 0i64;
    *(_QWORD *)&v5->m_dependencyBitVector.bits[8] = 0i64;
    v5->m_dependencyBitVector.bits[10] = 0;
    if ( v5->m_dependencyCount )
    {
      do
      {
        v6 = v4++;
        v7 = v5->m_dependencies[v6];
        v5->m_dependencyBitVector.bits[v7 >> 5] |= 1 << (v7 & 0x1F);
      }
      while ( v4 < v5->m_dependencyCount );
    }
    if ( !i )
      continue;
    m_tasks = this->m_tasks;
    do
    {
      m_attachmentCount = v5->m_attachmentCount;
      v10 = 0;
      v11 = *m_tasks;
      if ( !m_attachmentCount )
        goto LABEL_29;
      v12 = m_attachmentCount;
      p_nameHashInput = (__int64)&v5->m_attachments->nameHashInput;
      do
      {
        if ( (*(_BYTE *)(p_nameHashInput + 36) & 8) == 0 )
        {
          v14 = v11->m_attachmentCount;
          if ( v14 )
          {
            v15 = v14;
            p_flags = &v11->m_attachments->flags;
            while ( 1 )
            {
              v17 = *(p_flags - 5);
              if ( v17 == *(_DWORD *)p_nameHashInput )
              {
                if ( (*(_BYTE *)p_flags & 8) != 0 || *(p_flags - 9) != v17 )
                  goto LABEL_24;
                if ( (*(_DWORD *)(p_nameHashInput + 24) & 0x20000) == 0 )
                {
                  v18 = *(p_flags - 4);
                  if ( v18 == 16 )
                  {
                    v19 = *(_DWORD *)(p_nameHashInput + 20) == 16;
                  }
                  else
                  {
                    if ( v18 != 8 )
                      break;
                    v19 = *(_DWORD *)(p_nameHashInput + 20) == 8;
                  }
                  if ( !v19 )
                    break;
                }
              }
LABEL_25:
              p_flags += 30;
              if ( !--v15 )
                goto LABEL_26;
            }
            if ( *(_BYTE *)(p_nameHashInput + 31) != *((_BYTE *)p_flags - 5) )
              goto LABEL_25;
            v20 = *(_BYTE *)(p_nameHashInput + 30);
            if ( v20 != -1 )
            {
              v21 = *((_BYTE *)p_flags - 6);
              if ( v21 != -1 && v20 != v21 )
                goto LABEL_25;
            }
LABEL_24:
            v10 = 1;
            goto LABEL_25;
          }
        }
LABEL_26:
        p_nameHashInput += 120i64;
        --v12;
      }
      while ( v12 );
      if ( v10 )
        v5->m_dependencyBitVector.bits[(unsigned __int64)v11->m_taskIndex >> 5] |= 1 << (v11->m_taskIndex & 0x1F);
LABEL_29:
      ++m_tasks;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
tg::Compiler::BuildRenderOrder
==============
*/
bool tg::Compiler::BuildRenderOrder(tg::Compiler *this)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  tg::Task *v5; 
  __int64 v6; 
  tg::Task *pTask; 
  unsigned __int16 m_cmdCount; 
  __int64 v13; 
  tg::Task *v14; 
  unsigned int v15; 
  tg::Task **p_pTask; 
  __int64 v17; 
  __int64 v18; 
  bool v19; 
  unsigned int v20; 
  __int64 v22; 
  __int64 v23; 
  unsigned int taskIndex; 
  unsigned int queueIndex; 
  unsigned int scheduledTasks[2]; 
  tg::TaskPtr validTasks[64]; 

  v1 = 0i64;
  *(_QWORD *)scheduledTasks = 0i64;
  v2 = 0;
  v3 = 0i64;
  if ( this->m_taskCount )
  {
    do
    {
      v5 = this->m_tasks[v3];
      if ( v5->m_renderOrder )
      {
        tg::ResourceTracker::AddLogicalResources(&this->m_resourceTracker, this->m_tasks[v3]);
        if ( (v5->m_flags & 4) == 0 )
          ++v2;
      }
      if ( (v5->m_flags & 0x10) != 0 )
      {
        v6 = v1;
        validTasks[v6].pName = v5->m_pName;
        v1 = (unsigned int)(v1 + 1);
        validTasks[v6].pTask = v5;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < this->m_taskCount );
    while ( (_DWORD)v1 )
    {
      tg::Compiler::SelectBestTask(this, validTasks, v1, scheduledTasks, &taskIndex, &queueIndex);
      _RBP = taskIndex;
      pTask = validTasks[_RBP].pTask;
      tg::Task::UpdateAttachmentsAndDescs(pTask, this->m_tasks, queueIndex, &this->m_logs, &this->m_dynamicSizeData);
      tg::ResourceTracker::RemoveLogicalResources(&this->m_resourceTracker, pTask);
      tg::ResourceTracker::UpdateConditions(&this->m_resourceTracker, pTask);
      if ( (pTask->m_flags & 4) != 0 )
      {
        pTask->m_cmdIndex = -1;
        this->m_resourceCmds[this->m_resourceCmdCount++] = pTask;
      }
      else
      {
        m_cmdCount = this->m_cmdCount;
        if ( !tg::ResourceTracker::UpdatePhysicalResources(&this->m_resourceTracker, pTask, m_cmdCount) )
          return 0;
        pTask->m_cmdIndex = m_cmdCount;
        this->m_cmds[this->m_cmdCount++] = pTask;
      }
      v1 = (unsigned int)(v1 - 1);
      _RCX = v1;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+rcx*8+678h+validTasks.pName]
        vmovups xmmword ptr [rsp+rbp+678h+validTasks.pName], xmm0
        vmovsd  xmm1, qword ptr [rsp+rcx*8+678h+validTasks.key]
        vmovsd  qword ptr [rsp+rbp+678h+validTasks.key], xmm1
      }
      validTasks[_RCX].pName = NULL;
      v13 = 0i64;
      validTasks[_RCX].pTask = NULL;
      for ( *(_QWORD *)&validTasks[_RCX].key = 0i64; (unsigned int)v13 < pTask->m_nextCount; v13 = (unsigned int)(v13 + 1) )
      {
        v14 = this->m_tasks[pTask->m_next[v13]];
        if ( tg::Task::AllInputDependenciesResolved(v14) )
        {
          v15 = 0;
          if ( (_DWORD)v1 )
          {
            p_pTask = &validTasks[0].pTask;
            do
            {
              if ( v14 == *p_pTask )
                break;
              ++v15;
              p_pTask += 3;
            }
            while ( v15 < (unsigned int)v1 );
          }
          if ( v15 == (_DWORD)v1 )
          {
            v17 = v1;
            validTasks[v17].pName = v14->m_pName;
            v1 = (unsigned int)(v1 + 1);
            validTasks[v17].pTask = v14;
          }
        }
      }
    }
  }
  v18 = this->m_cmdCount;
  v19 = (_DWORD)v18 == v2;
  if ( (_DWORD)v18 == v2 )
  {
    tg::DebugLog::Print(&this->m_logs.info, " - %u render tasks\n", v18);
    v22 = this->m_resourceTracker.m_conditionCount[0];
    if ( (_DWORD)v22 )
    {
      tg::DebugLog::Print(&this->m_logs.info, " - %u compile time conditions and %u conditional tasks\n", v22, this->m_resourceTracker.m_conditionalTaskCount[0]);
      tg::DebugLog::Print(&this->m_logs.info, " - %u permutations\n", (unsigned int)(1 << this->m_resourceTracker.m_conditionCount[0]));
    }
    v23 = this->m_resourceTracker.m_conditionCount[1];
    if ( (_DWORD)v23 )
      tg::DebugLog::Print(&this->m_logs.info, " - %u render time conditions and %u skippable tasks\n", v23, this->m_resourceTracker.m_conditionalTaskCount[1]);
  }
  else
  {
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: Failed to build complete render order. Resolved %u tasks but %u have unresolved dependencies.\n", v18, v2);
    v20 = this->m_cmdCount;
    if ( v20 )
      tg::DebugLog::Print(&this->m_logs.error, "Last successfully added task '%s'\n", this->m_tasks[v20 + 336]->m_pName);
  }
  return v19;
}

/*
==============
tg::Compiler::ClearBranch
==============
*/
void tg::Compiler::ClearBranch(tg::Compiler *this, tg::Task *pLhs, tg::Task *pRhs)
{
  if ( tg::Task::FindNext(pLhs, pRhs) != -1 )
  {
    tg::Task::ClearNext(pLhs, pRhs);
    tg::Task::ClearPrevious(pRhs, pLhs);
  }
}

/*
==============
tg::Compiler::ClearResources
==============
*/
void tg::Compiler::ClearResources(tg::Compiler *this)
{
  __int64 i; 

  for ( i = 0i64; (unsigned int)i < this->m_taskCount; i = (unsigned int)(i + 1) )
    tg::Task::ClearResources(this->m_tasks[i]);
}

/*
==============
tg::Compiler::Compile
==============
*/
bool tg::Compiler::Compile(tg::Compiler *this, void *pContext, const tg::TaskGraphDesc *taskGraphDesc, const tg::CompileOptions *pOptions)
{
  tg::Compiler::AddTaskGraph(this, taskGraphDesc);
  return tg::Compiler::Compile(this, pContext, taskGraphDesc->ppOutputResourceNames, taskGraphDesc->outputResourceCount, pOptions);
}

/*
==============
tg::Compiler::Compile
==============
*/
bool tg::Compiler::Compile(tg::Compiler *this, void *pContext, const char *const *ppOutputResources, unsigned int outputResourceCount, const tg::CompileOptions *pOptions)
{
  __int64 v5; 
  __int64 m_taskCount; 
  bool v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  char *v14; 
  const char *const *v15; 
  const unsigned __int8 *v16; 
  __int64 v17; 
  bool v18; 
  unsigned int v19; 
  unsigned int v20; 
  tg::Task **v21; 
  char v22; 
  unsigned int *v23; 
  __int64 v24; 
  unsigned int v25; 
  bool v26; 
  bool batchCompute; 
  tg::Task *v28; 
  unsigned int m_attachmentCount; 
  unsigned int v30; 
  tg::ResourceAttachment **p_pPrev; 
  __int64 v32; 
  tg::ResourceAttachment *v33; 
  unsigned int cmdIndex; 
  tg::ResourceAttachment *i; 
  unsigned int v36; 
  unsigned int outHashCount; 
  int v38[2]; 
  int v39; 
  __int64 v40; 
  unsigned int v41; 
  bool useScriptOrder; 
  const char *const *v43; 
  void *v44; 
  char v45[256]; 
  unsigned int pOutHashes[64]; 

  v5 = outputResourceCount;
  v43 = ppOutputResources;
  m_taskCount = this->m_taskCount;
  v44 = pContext;
  if ( !(_DWORD)m_taskCount )
  {
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: No tasks to compile!\n", m_taskCount, ppOutputResources);
    return 0;
  }
  if ( (unsigned int)m_taskCount > 0x150 )
  {
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: Too many tasks to compile. %u exceeds maximum of %u!!\n", m_taskCount, 336i64);
    return 0;
  }
  v10 = pOptions && pOptions->verbose;
  v11 = 0i64;
  this->m_logs.info.m_enabled = v10;
  v12 = 0;
  v13 = 0;
  v36 = 0;
  if ( (_DWORD)v5 )
  {
    v14 = v45;
    v15 = ppOutputResources;
    v11 = v5;
    do
    {
      v16 = (const unsigned __int8 *)*v15;
      v17 = -1i64;
      do
        ++v17;
      while ( v16[v17] );
      *(_DWORD *)v14 = tg::HashRaw(v16, v17, 0);
      ++v15;
      v14 += 4;
      --v11;
    }
    while ( v11 );
    v12 = 0;
  }
  do
  {
    v18 = this->m_taskCount == 0;
    v19 = 0;
    outHashCount = 0;
    v20 = 0;
    if ( !v18 )
    {
      do
      {
        v21 = &this->m_tasks[v20];
        (*v21)->m_taskIndex = v20;
        if ( ((*v21)->m_flags & 2) == 0 )
        {
          v22 = 0;
          if ( (_DWORD)v5 )
          {
            v23 = (unsigned int *)v45;
            v24 = (unsigned int)v5;
            do
            {
              v22 |= tg::Task::HasOutputResource(*v21, *v23++, pOutHashes, &outHashCount);
              --v24;
            }
            while ( v24 );
            if ( v22 )
            {
              (*v21)->m_flags |= 2u;
              ++v13;
            }
          }
        }
        ++v20;
      }
      while ( v20 < this->m_taskCount );
      v19 = outHashCount;
      if ( outHashCount )
        memcpy_0(v45, pOutHashes, 4i64 * outHashCount);
      v12 = v36;
      v11 = 0i64;
    }
    v12 += v5;
    LODWORD(v5) = v19;
    v36 = v12;
  }
  while ( v19 );
  if ( !v13 )
  {
    tg::DebugLog::Print(&this->m_logs.error, "ERROR: No Tasks output to '%s'!\n", *v43);
    return 0;
  }
  tg::DebugLog::Print(&this->m_logs.info, " - %u tasks write to %u output resources\n", v13, v12);
  tg::Compiler::BuildPotentialDependencyMasks(this);
  v18 = this->m_taskCount == 0;
  v25 = 0;
  this->m_renderOrder = 0;
  if ( !v18 )
  {
    do
      tg::Task::ClearResources(this->m_tasks[v25++]);
    while ( v25 < this->m_taskCount );
  }
  v26 = tg::Compiler::BuildDependencyGraph(this);
  if ( v26 )
  {
    if ( pOptions )
    {
      batchCompute = pOptions->batchCompute;
      if ( pOptions->tileCache )
      {
        v38[0] = -20;
        v39 = 1;
        goto LABEL_37;
      }
    }
    else
    {
      batchCompute = 0;
    }
    v38[0] = 0;
    v39 = 8;
LABEL_37:
    v38[1] = 0;
    v40 = -1i64;
    v41 = batchCompute ? 0xFFFFFFF1 : 0;
    if ( pOptions )
      useScriptOrder = pOptions->useScriptOrder;
    else
      useScriptOrder = 0;
    this->m_pOrderModifiers = (tg::RenderOrderModifiers *)v38;
    v26 = tg::Compiler::BuildRenderOrder(this);
    if ( v26 )
    {
      if ( pOptions && pOptions->mergeReadAccess )
        tg::Compiler::MergeReadAccess(this);
      if ( this->m_cmdCount )
      {
        do
        {
          v28 = this->m_cmds[v11];
          m_attachmentCount = v28->m_attachmentCount;
          v28->m_lastDependency = -1;
          if ( m_attachmentCount )
          {
            v30 = -1;
            p_pPrev = &v28->m_attachments->pPrev;
            v32 = m_attachmentCount;
            do
            {
              v33 = *p_pPrev;
              cmdIndex = -1;
              if ( *p_pPrev )
              {
                for ( i = v33->pPrev; i; i = i->pPrev )
                {
                  if ( v33->state != eResourceState_ReadOnly )
                    break;
                  v33 = i;
                }
                cmdIndex = v33->cmdIndex;
              }
              if ( v30 == -1 )
              {
                v30 = cmdIndex;
                v28->m_lastDependency = cmdIndex;
              }
              else if ( cmdIndex != -1 )
              {
                if ( v30 <= cmdIndex )
                  v30 = cmdIndex;
                v28->m_lastDependency = v30;
              }
              p_pPrev += 15;
              --v32;
            }
            while ( v32 );
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < this->m_cmdCount );
      }
      this->BuildResources(this, v44);
    }
    return v26;
  }
  tg::DebugLog::Print(&this->m_logs.error, "ERROR: Failed to build dependency graph.\n");
  return v26;
}

/*
==============
tg::Compiler::FindLastDependencies
==============
*/
void tg::Compiler::FindLastDependencies(tg::Compiler *this)
{
  __int64 i; 
  tg::Task *v3; 
  unsigned int m_attachmentCount; 
  unsigned int v5; 
  tg::ResourceAttachment **p_pPrev; 
  __int64 v7; 
  tg::ResourceAttachment *v8; 
  unsigned int cmdIndex; 
  tg::ResourceAttachment *j; 

  for ( i = 0i64; (unsigned int)i < this->m_cmdCount; i = (unsigned int)(i + 1) )
  {
    v3 = this->m_cmds[i];
    m_attachmentCount = v3->m_attachmentCount;
    v3->m_lastDependency = -1;
    if ( m_attachmentCount )
    {
      v5 = -1;
      p_pPrev = &v3->m_attachments->pPrev;
      v7 = m_attachmentCount;
      do
      {
        v8 = *p_pPrev;
        cmdIndex = -1;
        if ( *p_pPrev )
        {
          for ( j = v8->pPrev; j; j = j->pPrev )
          {
            if ( v8->state != eResourceState_ReadOnly )
              break;
            v8 = j;
          }
          cmdIndex = v8->cmdIndex;
        }
        if ( v5 == -1 )
        {
          v5 = cmdIndex;
          v3->m_lastDependency = cmdIndex;
        }
        else if ( cmdIndex != -1 )
        {
          if ( v5 <= cmdIndex )
            v5 = cmdIndex;
          v3->m_lastDependency = v5;
        }
        p_pPrev += 15;
        --v7;
      }
      while ( v7 );
    }
  }
}

/*
==============
tg::Compiler::GetAttachmentInfo
==============
*/
void tg::Compiler::GetAttachmentInfo(tg::Compiler *this, unsigned int cmdIndex, unsigned int disableConditions, tg::AttachmentInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  unsigned int v9; 
  tg::Task *v10; 
  __int64 v11; 

  if ( cmdIndex < this->m_cmdCount )
  {
    v9 = 0;
    v10 = this->m_cmds[cmdIndex];
    *outSize = 0;
    if ( v10->m_attachmentCount )
    {
      do
      {
        v11 = (__int64)&v10->m_attachments[v9];
        if ( *(_DWORD *)(v11 + 44) != 32 )
        {
          tg::WriteAttachmentInfo((const tg::ResourceAttachment *)v11, disableConditions, this->m_queueCount > 1, v10->m_queueIndex, &pOut[*outSize]);
          ++*outSize;
        }
        ++v9;
      }
      while ( v9 < v10->m_attachmentCount );
    }
  }
}

/*
==============
tg::Compiler::GetAttachmentInfoCount
==============
*/
__int64 tg::Compiler::GetAttachmentInfoCount(tg::Compiler *this, unsigned int cmdIndex)
{
  if ( cmdIndex >= this->m_cmdCount )
    return 0i64;
  else
    return this->m_cmds[cmdIndex]->m_attachmentCount;
}

/*
==============
tg::Compiler::GetAttachmentSubresourceInfo
==============
*/
void tg::Compiler::GetAttachmentSubresourceInfo(tg::Compiler *this, unsigned int cmdIndex, unsigned int attachIndex, bool prev, unsigned int disableConditions, tg::AttachmentState *pOut, unsigned int __formal, unsigned int *outSize)
{
  unsigned int v8; 
  tg::ResourceAttachment *v9; 
  unsigned int arraySize; 
  unsigned int levels; 
  unsigned int v12; 
  unsigned int v13; 
  tg::AttachmentState *v14; 
  tg::ResourceAttachment *pPrev; 
  int subresourceIndex; 
  char v17; 

  if ( cmdIndex < this->m_cmdCount )
  {
    v8 = 0;
    v9 = &this->m_cmds[cmdIndex]->m_attachments[attachIndex];
    arraySize = v9->pDesc->arraySize;
    levels = v9->pDesc->levels;
    *outSize = 0;
    if ( arraySize )
    {
      do
      {
        v12 = 0;
        if ( levels )
        {
          v13 = *outSize;
          do
          {
            v14 = &pOut[v13];
            if ( prev )
              pPrev = v9->pPrev;
            else
              pPrev = v9->pNext;
            if ( !pPrev )
              goto LABEL_18;
            do
            {
              subresourceIndex = pPrev->subresourceIndex;
              if ( (subresourceIndex == v13 || (_BYTE)subresourceIndex == 0xFF) && (disableConditions & pPrev->conditionFlag) == 0 )
                break;
              pPrev = prev ? pPrev->pPrev : pPrev->pNext;
            }
            while ( pPrev );
            if ( pPrev )
            {
              v14->type = pPrev->type;
              v14->state = pPrev->state;
              v14->access = pPrev->access;
              v14->taskIndex = pPrev->cmdIndex;
              v14->arrayIndex = v8;
              v14->levelIndex = v12;
              v17 = *(_BYTE *)outSize;
            }
            else
            {
LABEL_18:
              v14->type = eResourceType_Unknown;
              v17 = -1;
              *(_QWORD *)&v14->state = 1i64;
              *(_DWORD *)&v14->taskIndex = -1;
            }
            v14->subresourceIndex = v17;
            ++v12;
            v13 = ++*outSize;
          }
          while ( v12 < levels );
        }
        ++v8;
      }
      while ( v8 < arraySize );
    }
  }
}

/*
==============
tg::Compiler::GetCondition
==============
*/
__int64 tg::Compiler::GetCondition(tg::Compiler *this, unsigned int conditionType, unsigned int conditionIndex)
{
  return this->m_resourceTracker.m_conditions[conditionType][conditionIndex];
}

/*
==============
tg::Compiler::GetConditionCount
==============
*/
__int64 tg::Compiler::GetConditionCount(tg::Compiler *this, unsigned int conditionType)
{
  return this->m_resourceTracker.m_conditionCount[conditionType];
}

/*
==============
tg::Compiler::GetDynamicSizeStepCount
==============
*/
__int64 tg::Compiler::GetDynamicSizeStepCount(tg::Compiler *this)
{
  return this->m_dynamicSizeData.stepCount;
}

/*
==============
tg::Compiler::GetResourceInfo
==============
*/
void tg::Compiler::GetResourceInfo(tg::Compiler *this, unsigned int resourceIndex, unsigned int temporalIndex, unsigned int disableConditions, tg::ResourceGlobalInfo *pOut)
{
  tg::PhysicalResourceInfo *v8; 
  tg::ResourceAttachment *pLastInfo; 
  tg::ResourceAttachment *i; 
  unsigned __int8 subresourceIndex; 
  unsigned __int8 v16; 

  _RBX = pOut;
  v8 = &this->m_resourceTracker.m_physicalResourceInfos[resourceIndex];
  j_snprintf(pOut->name, 0x80ui64, (const char *const)&queryFormat, v8->pNames[0]);
  _RAX = v8->pDesc;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+80h], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+0A0h], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbx+0C0h], xmm0
  }
  pLastInfo = v8->pLastInfo;
  for ( i = v8->pFirstInfo; pLastInfo; pLastInfo = pLastInfo->pPrev )
  {
    if ( (disableConditions & pLastInfo->conditionFlag) == 0 && (pLastInfo->temporalIndex == temporalIndex || temporalIndex == 1 && (pLastInfo->flags & 0x20) != 0) )
      break;
  }
  if ( pLastInfo )
  {
    pOut->last.type = pLastInfo->type;
    pOut->last.state = pLastInfo->state;
    pOut->last.access = pLastInfo->access;
    pOut->last.taskIndex = pLastInfo->cmdIndex;
    pOut->last.arrayIndex = pLastInfo->arrayIndex;
    pOut->last.levelIndex = pLastInfo->levelIndex;
    subresourceIndex = pLastInfo->subresourceIndex;
  }
  else
  {
    pOut->last.type = eResourceType_Unknown;
    subresourceIndex = -1;
    *(_QWORD *)&pOut->last.state = 1i64;
    *(_DWORD *)&pOut->last.taskIndex = -1;
  }
  pOut->last.subresourceIndex = subresourceIndex;
  if ( i )
  {
    pOut->first.type = i->type;
    pOut->first.state = i->state;
    pOut->first.access = i->access;
    pOut->first.taskIndex = i->cmdIndex;
    pOut->first.arrayIndex = i->arrayIndex;
    pOut->first.levelIndex = i->levelIndex;
    v16 = i->subresourceIndex;
  }
  else
  {
    pOut->first.type = eResourceType_Unknown;
    v16 = -1;
    *(_QWORD *)&pOut->first.state = 1i64;
    *(_DWORD *)&pOut->first.taskIndex = -1;
  }
  pOut->first.subresourceIndex = v16;
  pOut->temporalIndex = temporalIndex;
  *(_DWORD *)pOut->seenCmdIndexFirst = *(_DWORD *)v8->seenCmdIndexFirst;
  pOut->seenCmdIndexLast = v8->seenCmdIndexLast;
  pOut->seenRopReadWrite = v8->seenRopReadWrite;
  pOut->seenShaderWrite = v8->seenShaderWrite;
  pOut->external = v8->pDesc->pResource != NULL;
}

/*
==============
tg::Compiler::GetResourceInfo
==============
*/
void tg::Compiler::GetResourceInfo(tg::Compiler *this, tg::ResourceGlobalInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  unsigned int i; 
  tg::PhysicalResourceInfo *v8; 
  tg::ResourceAttachment *pLastInfo; 
  tg::ResourceAttachment *pFirstInfo; 
  char subresourceIndex; 
  char v16; 

  *outSize = this->m_resourceTracker.m_physicalResourceInfoCount;
  for ( i = 0; i < this->m_resourceTracker.m_physicalResourceInfoCount; _RBX->external = v8->pDesc->pResource != NULL )
  {
    _RBX = &pOut[i];
    v8 = &this->m_resourceTracker.m_physicalResourceInfos[i];
    j_snprintf(_RBX->name, 0x80ui64, (const char *const)&queryFormat, v8->pNames[0]);
    _RAX = this->m_resourceTracker.m_physicalResourceInfos[i].pDesc;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+80h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+0A0h], ymm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rbx+0C0h], xmm0
    }
    pLastInfo = this->m_resourceTracker.m_physicalResourceInfos[i].pLastInfo;
    pFirstInfo = this->m_resourceTracker.m_physicalResourceInfos[i].pFirstInfo;
    if ( !pLastInfo )
      goto LABEL_7;
    do
    {
      if ( !pLastInfo->temporalIndex )
        break;
      pLastInfo = pLastInfo->pPrev;
    }
    while ( pLastInfo );
    if ( pLastInfo )
    {
      _RBX->last.type = pLastInfo->type;
      _RBX->last.state = pLastInfo->state;
      _RBX->last.access = pLastInfo->access;
      _RBX->last.taskIndex = pLastInfo->cmdIndex;
      _RBX->last.arrayIndex = pLastInfo->arrayIndex;
      _RBX->last.levelIndex = pLastInfo->levelIndex;
      subresourceIndex = pLastInfo->subresourceIndex;
    }
    else
    {
LABEL_7:
      _RBX->last.type = eResourceType_Unknown;
      subresourceIndex = -1;
      *(_QWORD *)&_RBX->last.state = 1i64;
      *(_DWORD *)&_RBX->last.taskIndex = -1;
    }
    _RBX->last.subresourceIndex = subresourceIndex;
    if ( pFirstInfo )
    {
      _RBX->first.type = pFirstInfo->type;
      _RBX->first.state = pFirstInfo->state;
      _RBX->first.access = pFirstInfo->access;
      _RBX->first.taskIndex = pFirstInfo->cmdIndex;
      _RBX->first.arrayIndex = pFirstInfo->arrayIndex;
      _RBX->first.levelIndex = pFirstInfo->levelIndex;
      v16 = pFirstInfo->subresourceIndex;
    }
    else
    {
      _RBX->first.type = eResourceType_Unknown;
      v16 = -1;
      *(_QWORD *)&_RBX->first.state = 1i64;
      *(_DWORD *)&_RBX->first.taskIndex = -1;
    }
    _RBX->first.subresourceIndex = v16;
    _RBX->temporalIndex = 0;
    _RBX->seenCmdIndexFirst[0] = this->m_resourceTracker.m_physicalResourceInfos[i].seenCmdIndexFirst[0];
    _RBX->seenCmdIndexFirst[1] = this->m_resourceTracker.m_physicalResourceInfos[i].seenCmdIndexFirst[1];
    _RBX->seenCmdIndexLast = this->m_resourceTracker.m_physicalResourceInfos[i].seenCmdIndexLast;
    _RBX->seenRopReadWrite = this->m_resourceTracker.m_physicalResourceInfos[i].seenRopReadWrite;
    _RBX->seenShaderWrite = this->m_resourceTracker.m_physicalResourceInfos[i++].seenShaderWrite;
  }
}

/*
==============
tg::Compiler::GetResourceInfoCount
==============
*/
__int64 tg::Compiler::GetResourceInfoCount(tg::Compiler *this)
{
  return this->m_resourceTracker.m_physicalResourceInfoCount;
}

/*
==============
tg::Compiler::GetTaskInfo
==============
*/
void tg::Compiler::GetTaskInfo(tg::Compiler *this, unsigned int cmdIndex, bool getChildInfo, tg::TaskInfo *pOut)
{
  unsigned int v6; 
  tg::Task *v7; 
  unsigned int i; 
  unsigned __int16 m_cmdIndex; 
  unsigned __int16 asyncTaskIndexNext; 
  unsigned __int16 v11; 
  unsigned __int16 asyncTaskIndexPrev; 
  unsigned __int16 v13; 
  tg::AttachmentInfo out; 

  if ( cmdIndex < this->m_cmdCount )
  {
    v6 = 0;
    v7 = this->m_cmds[cmdIndex];
    pOut->pName = v7->m_pName;
    pOut->typeIndex = v7->m_typeIndex;
    pOut->scriptIndex = v7->m_taskIndex;
    pOut->queueIndex = v7->m_queueIndex;
    pOut->conditionType = v7->m_conditionType;
    pOut->conditionFlag = v7->m_conditionFlag;
    pOut->childCount = 0;
    if ( getChildInfo )
    {
      for ( i = 0; i < v7->m_nextCount; ++i )
      {
        m_cmdIndex = this->m_tasks[v7->m_next[i]]->m_cmdIndex;
        if ( m_cmdIndex != 0xFFFF )
          pOut->child[pOut->childCount++] = (unsigned __int8)m_cmdIndex;
      }
    }
    pOut->pUserData = v7->m_pUserData;
    pOut->userDataCount = v7->m_userDataCount;
    pOut->pSystemData = v7->m_pSystemData;
    pOut->systemDataCount = v7->m_systemDataCount;
    *(_DWORD *)&pOut->asyncTaskIndexPrev = -1;
    if ( this->m_queueCount == 2 && v7->m_attachmentCount )
    {
      do
      {
        tg::WriteAttachmentInfo(&v7->m_attachments[v6], 0, 1, v7->m_queueIndex, &out);
        asyncTaskIndexNext = out.asyncTaskIndexNext;
        if ( out.asyncTaskIndexNext != 0xFFFF )
        {
          v11 = pOut->asyncTaskIndexNext;
          if ( v11 != 0xFFFF && v11 < out.asyncTaskIndexNext )
            asyncTaskIndexNext = pOut->asyncTaskIndexNext;
          pOut->asyncTaskIndexNext = asyncTaskIndexNext;
        }
        asyncTaskIndexPrev = out.asyncTaskIndexPrev;
        if ( out.asyncTaskIndexPrev != 0xFFFF )
        {
          v13 = pOut->asyncTaskIndexPrev;
          if ( v13 != 0xFFFF && v13 > out.asyncTaskIndexPrev )
            asyncTaskIndexPrev = pOut->asyncTaskIndexPrev;
          pOut->asyncTaskIndexPrev = asyncTaskIndexPrev;
        }
        ++v6;
      }
      while ( v6 < v7->m_attachmentCount );
    }
  }
}

/*
==============
tg::Compiler::GetTaskInfo
==============
*/
void tg::Compiler::GetTaskInfo(tg::Compiler *this, tg::TaskInfo *pOut, unsigned int __formal, unsigned int *outSize)
{
  unsigned int m_cmdCount; 
  unsigned int i; 
  tg::TaskInfo *v8; 
  tg::Task *v9; 
  unsigned int j; 
  unsigned __int16 asyncTaskIndexNext; 
  unsigned __int16 v12; 
  unsigned __int16 asyncTaskIndexPrev; 
  unsigned __int16 v14; 
  tg::AttachmentInfo out; 

  *outSize = this->m_cmdCount;
  m_cmdCount = this->m_cmdCount;
  for ( i = 0; i < m_cmdCount; ++i )
  {
    v8 = &pOut[i];
    if ( i < m_cmdCount )
    {
      v9 = this->m_cmds[i];
      v8->pName = v9->m_pName;
      v8->typeIndex = v9->m_typeIndex;
      v8->scriptIndex = v9->m_taskIndex;
      v8->queueIndex = v9->m_queueIndex;
      v8->conditionType = v9->m_conditionType;
      v8->conditionFlag = v9->m_conditionFlag;
      v8->childCount = 0;
      v8->pUserData = v9->m_pUserData;
      v8->userDataCount = v9->m_userDataCount;
      v8->pSystemData = v9->m_pSystemData;
      v8->systemDataCount = v9->m_systemDataCount;
      *(_DWORD *)&v8->asyncTaskIndexPrev = -1;
      if ( this->m_queueCount == 2 )
      {
        for ( j = 0; j < v9->m_attachmentCount; ++j )
        {
          tg::WriteAttachmentInfo(&v9->m_attachments[j], 0, 1, v9->m_queueIndex, &out);
          asyncTaskIndexNext = out.asyncTaskIndexNext;
          if ( out.asyncTaskIndexNext != 0xFFFF )
          {
            v12 = v8->asyncTaskIndexNext;
            if ( v12 != 0xFFFF && v12 < out.asyncTaskIndexNext )
              asyncTaskIndexNext = v8->asyncTaskIndexNext;
            v8->asyncTaskIndexNext = asyncTaskIndexNext;
          }
          asyncTaskIndexPrev = out.asyncTaskIndexPrev;
          if ( out.asyncTaskIndexPrev != 0xFFFF )
          {
            v14 = v8->asyncTaskIndexPrev;
            if ( v14 != 0xFFFF && v14 > out.asyncTaskIndexPrev )
              asyncTaskIndexPrev = v8->asyncTaskIndexPrev;
            v8->asyncTaskIndexPrev = asyncTaskIndexPrev;
          }
        }
      }
    }
    m_cmdCount = this->m_cmdCount;
  }
}

/*
==============
tg::Compiler::MergeReadAccess
==============
*/
void tg::Compiler::MergeReadAccess(tg::Compiler *this)
{
  unsigned int i; 
  tg::ResourceAttachment *pLastInfo; 
  unsigned int access; 
  unsigned int *p_access; 
  tg::ResourceAttachment *v6; 
  int v7; 
  unsigned __int8 subresourceIndex; 
  unsigned __int64 v9; 
  int v10; 
  int v11; 
  tg::ResourceAttachment *v12; 
  int v13; 
  unsigned __int8 v14; 
  int v15; 
  unsigned __int8 v16; 
  int v17; 
  tg::ResourceAttachment *v18; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 

  for ( i = 0; i < this->m_resourceTracker.m_physicalResourceInfoCount; ++i )
  {
    pLastInfo = this->m_resourceTracker.m_physicalResourceInfos[i].pLastInfo;
    do
    {
      if ( pLastInfo->state == eResourceState_ReadOnly )
      {
        access = pLastInfo->access;
        p_access = &pLastInfo->access;
        v6 = pLastInfo;
        v20 = 0i64;
        pLastInfo = pLastInfo->pPrev;
        v7 = access & 0x1FF;
        v21 = 0i64;
        if ( pLastInfo )
        {
          while ( pLastInfo->state == eResourceState_ReadOnly )
          {
            v7 |= pLastInfo->access;
            pLastInfo = pLastInfo->pPrev;
            if ( !pLastInfo )
              break;
            while ( 1 )
            {
              subresourceIndex = pLastInfo->subresourceIndex;
              if ( subresourceIndex == 0xFF )
                break;
              v9 = (unsigned __int64)subresourceIndex >> 5;
              v10 = 1 << (subresourceIndex & 0x1F);
              v11 = *((_DWORD *)&v20 + v9);
              if ( (v11 & v10) == 0 )
              {
                v12 = pLastInfo;
                v13 = 0;
                while ( v12->state == eResourceState_ReadOnly )
                {
                  if ( v12->subresourceIndex == 0xFF )
                    break;
                  v13 |= v12->access;
                  v12 = v12->pPrev;
                  if ( !v12 )
                    break;
                  while ( 1 )
                  {
                    v14 = v12->subresourceIndex;
                    if ( v14 == subresourceIndex || v14 == 0xFF )
                      break;
                    v12 = v12->pPrev;
                    if ( !v12 )
                      goto LABEL_16;
                  }
                }
LABEL_16:
                v7 |= v13;
                *((_DWORD *)&v20 + v9) = v11 | v10;
              }
              pLastInfo = pLastInfo->pPrev;
              if ( !pLastInfo )
                goto LABEL_18;
            }
          }
        }
LABEL_18:
        v15 = v7 & 0x1FF;
        if ( v15 != (*p_access & 0x1FF) )
        {
          v20 = 0i64;
          v21 = 0i64;
          while ( v6->state == eResourceState_ReadOnly )
          {
            v6->access |= v15;
            v6 = v6->pPrev;
            if ( !v6 )
              break;
            while ( 1 )
            {
              v16 = v6->subresourceIndex;
              if ( v16 == 0xFF )
                break;
              v17 = *((_DWORD *)&v20 + ((unsigned __int64)v16 >> 5));
              if ( !_bittest(&v17, v16 & 0x1F) )
              {
                v18 = v6;
                while ( v18->state == eResourceState_ReadOnly )
                {
                  if ( v18->subresourceIndex == 0xFF )
                    break;
                  v18->access |= v15;
                  v18 = v18->pPrev;
                  if ( !v18 )
                    break;
                  while ( 1 )
                  {
                    v19 = v18->subresourceIndex;
                    if ( v19 == v16 || v19 == 0xFF )
                      break;
                    v18 = v18->pPrev;
                    if ( !v18 )
                      goto LABEL_31;
                  }
                }
LABEL_31:
                *((_DWORD *)&v20 + ((unsigned __int64)v6->subresourceIndex >> 5)) |= 1 << (v6->subresourceIndex & 0x1F);
              }
              v6 = v6->pPrev;
              if ( !v6 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        pLastInfo = pLastInfo->pPrev;
      }
LABEL_35:
      ;
    }
    while ( pLastInfo );
  }
}

/*
==============
tg::CompilerDynAlloc::NewTask
==============
*/
tg::TaskWithAttachments *tg::CompilerDynAlloc::NewTask(tg::CompilerDynAlloc *this, const char *pName)
{
  tg::Task *v4; 
  tg::TaskWithAttachments *v5; 

  v4 = (tg::Task *)operator new(0x1618ui64);
  v5 = (tg::TaskWithAttachments *)v4;
  if ( v4 )
  {
    tg::Task::Task(v4, pName);
    v5->task.m_attachments = v5->attachments;
    v5->task.m_attachmentLimit = 32;
    v5->task.m_descs = v5->descs;
    v5->task.m_descLimit = 16;
  }
  else
  {
    v5 = NULL;
  }
  this->m_taskAllocs[this->m_taskAllocCount++] = v5;
  return v5;
}

/*
==============
tg::DebugLog::Print
==============
*/
void tg::DebugLog::Print(tg::DebugLog *this, const char *format, ...)
{
  size_t v4; 
  char *v5; 
  unsigned __int64 *v6; 
  __int64 v7; 
  va_list va; 

  va_start(va, format);
  if ( this->m_enabled )
  {
    v4 = this->m_bufferLimit - this->m_bufferUsed;
    v5 = &this->m_pBuffer[this->m_bufferUsed];
    v6 = j___local_stdio_printf_options();
    __stdio_common_vsprintf_s(*v6, v5, v4, format, NULL, va);
    v7 = -1i64;
    do
      ++v7;
    while ( v5[v7] );
    this->m_bufferUsed += v7;
  }
}

/*
==============
tg::Compiler::SelectBestTask
==============
*/
void tg::Compiler::SelectBestTask(tg::Compiler *this, tg::TaskPtr *validTasks, const unsigned int validCount, unsigned int *scheduledTasks, unsigned int *taskIndex, unsigned int *queueIndex)
{
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  tg::Task **p_pTask; 
  tg::Task *v15; 
  int v16; 
  int v17; 
  tg::RenderOrderModifiers *m_pOrderModifiers; 
  int v19; 
  bool HasPendingReleaseResources; 
  tg::RenderOrderModifiers *v21; 
  tg::Task *pTask; 
  bool renderTextureCompatible; 
  int v24; 
  unsigned int pipelineBarrierCount; 
  unsigned int v26; 
  unsigned int v27; 
  tg::TaskPtr *v28; 
  bool renderPassCompatible; 

  v28 = validTasks;
  v6 = scheduledTasks[1];
  v7 = *scheduledTasks;
  v8 = -1;
  v10 = 0x7FFFFFFF;
  v11 = -1;
  if ( v6 <= v7 )
  {
    v12 = -1;
    if ( v6 < v7 )
      v12 = 1;
    v24 = v12;
  }
  else
  {
    v24 = 0;
  }
  v13 = 0;
  if ( validCount )
  {
    p_pTask = &validTasks->pTask;
    while ( 1 )
    {
      v15 = *p_pTask;
      v16 = v10;
      v26 = v11;
      v17 = v10;
      v27 = v8;
      if ( (v15->m_flags & 4) != 0 )
        break;
      renderPassCompatible = 0;
      renderTextureCompatible = 0;
      pipelineBarrierCount = 0;
      tg::ResourceTracker::EvaluateTask(&this->m_resourceTracker, v15, 0, &renderPassCompatible, &renderTextureCompatible, &pipelineBarrierCount);
      m_pOrderModifiers = this->m_pOrderModifiers;
      v19 = v15->m_orderHint + v15->m_typeOrderHint - 5;
      if ( v24 )
        v19 = v15->m_orderHint + v15->m_typeOrderHint;
      if ( renderPassCompatible )
        v19 += m_pOrderModifiers->renderPassCompatible;
      if ( renderTextureCompatible )
        v19 += m_pOrderModifiers->renderTextureCompatible;
      if ( !this->m_resourceTracker.m_renderPass.active && (v15->m_flags & 0x100) != 0 )
        v19 += m_pOrderModifiers->batchCompute;
      if ( (v15->m_flags & 0x20) != 0 )
        v19 += m_pOrderModifiers->identicalInputsOutputs;
      HasPendingReleaseResources = tg::ResourceTracker::HasPendingReleaseResources(&this->m_resourceTracker, v15);
      v21 = this->m_pOrderModifiers;
      if ( HasPendingReleaseResources )
        v19 += v21->releasesResources;
      v10 = v19 - 1;
      if ( !v15->m_pClearDepth )
        v10 = v19;
      if ( v21->scriptOrder )
        v10 += 100 * v15->m_taskIndex;
      if ( pipelineBarrierCount )
        v10 += v21->pipelineBarrier;
      v8 = v13;
      v11 = 0;
      if ( v10 >= v16 )
        v11 = v26;
      if ( v10 >= v17 )
        v8 = v27;
      ++v13;
      p_pTask += 3;
      if ( v10 >= v16 )
        v10 = v16;
      if ( v13 >= validCount )
      {
        validTasks = v28;
        goto LABEL_36;
      }
    }
    *taskIndex = v13;
    *queueIndex = 0;
  }
  else
  {
LABEL_36:
    if ( this->m_queueCount == 2 )
    {
      pTask = validTasks[v8].pTask;
      if ( (((pTask->m_flags & 0x300) != 0) & _bittest((const signed __int32 *)&pTask->m_flags, 0xAu)) != 0 )
        v11 = 1;
    }
    *taskIndex = v8;
    *queueIndex = v11;
  }
}

/*
==============
tg::WriteAttachmentInfo
==============
*/
void tg::WriteAttachmentInfo(const tg::ResourceAttachment *res, unsigned int disableConditions, bool findAsyncDependency, unsigned int queueIndex, tg::AttachmentInfo *out)
{
  tg::ResourceAttachment *pPrev; 
  tg::ResourceAttachment *i; 
  unsigned __int8 subresourceIndex; 
  unsigned __int8 v11; 
  unsigned __int8 temporalIndex; 
  bool v13; 
  bool v14; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  bool v18; 
  bool v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  char v25; 
  char v26; 
  tg::eResourceState state; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  unsigned __int8 v30; 
  char v31; 
  char v32; 
  tg::eResourceState v33; 

  out->resourceIndex = res->resourceIndex;
  out->flags = res->flags;
  out->temporalIndex = res->temporalIndex;
  *(_DWORD *)&out->asyncTaskIndexPrev = -1;
  out->state[0].type = res->type;
  out->state[0].state = res->state;
  out->state[0].access = res->access;
  out->state[0].taskIndex = res->cmdIndex;
  out->state[0].arrayIndex = res->arrayIndex;
  out->state[0].levelIndex = res->levelIndex;
  out->state[0].subresourceIndex = res->subresourceIndex;
  pPrev = res->pPrev;
  for ( i = res->pNext; pPrev; pPrev = pPrev->pPrev )
  {
    if ( (disableConditions & pPrev->conditionFlag) == 0 )
    {
      subresourceIndex = res->subresourceIndex;
      if ( subresourceIndex == 0xFF || (v11 = pPrev->subresourceIndex, v11 == 0xFF) || subresourceIndex == v11 )
      {
        temporalIndex = res->temporalIndex;
        if ( temporalIndex == 0xFF || temporalIndex == pPrev->temporalIndex )
        {
          v13 = (res->flags & 0x10) != 0 && (pPrev->flags & 0x20) == 0;
          v14 = (res->flags & 0x10) == 0 && (pPrev->flags & 0x20) != 0;
          if ( !v13 && !v14 && res->cmdIndex != pPrev->cmdIndex )
            break;
        }
      }
      if ( (res->flags & 0x10) != 0 && pPrev->temporalIndex == 1 || res->temporalIndex == 1 && (pPrev->flags & 0x10) != 0 )
        break;
    }
  }
  for ( ; i; i = i->pNext )
  {
    if ( (disableConditions & i->conditionFlag) == 0 )
    {
      v15 = res->subresourceIndex;
      if ( v15 == 0xFF || (v16 = i->subresourceIndex, v16 == 0xFF) || v15 == v16 )
      {
        v17 = res->temporalIndex;
        if ( v17 == 0xFF || v17 == i->temporalIndex )
        {
          v18 = (res->flags & 0x20) != 0 && (i->flags & 0x10) == 0;
          v19 = (res->flags & 0x20) == 0 && (i->flags & 0x10) != 0;
          if ( !v18 && !v19 && res->cmdIndex != i->cmdIndex )
            break;
        }
      }
      if ( (res->flags & 0x10) != 0 && i->temporalIndex == 1 || res->temporalIndex == 1 && (i->flags & 0x10) != 0 )
        break;
    }
  }
  if ( pPrev )
  {
    out->state[1].type = pPrev->type;
    out->state[1].state = pPrev->state;
    out->state[1].access = pPrev->access;
    out->state[1].taskIndex = pPrev->cmdIndex;
    out->state[1].arrayIndex = pPrev->arrayIndex;
    out->state[1].levelIndex = pPrev->levelIndex;
    v20 = pPrev->subresourceIndex;
  }
  else
  {
    out->state[1].type = eResourceType_Unknown;
    v20 = -1;
    *(_QWORD *)&out->state[1].state = 1i64;
    *(_DWORD *)&out->state[1].taskIndex = -1;
  }
  out->state[1].subresourceIndex = v20;
  if ( i )
  {
    out->state[2].type = i->type;
    out->state[2].state = i->state;
    out->state[2].access = i->access;
    out->state[2].taskIndex = i->cmdIndex;
    out->state[2].arrayIndex = i->arrayIndex;
    out->state[2].levelIndex = i->levelIndex;
    v21 = i->subresourceIndex;
  }
  else
  {
    out->state[2].type = eResourceType_Unknown;
    v21 = -1;
    *(_QWORD *)&out->state[2].state = 1i64;
    *(_DWORD *)&out->state[2].taskIndex = -1;
  }
  out->state[2].subresourceIndex = v21;
  if ( findAsyncDependency )
  {
    for ( ; pPrev; pPrev = pPrev->pPrev )
    {
      if ( (disableConditions & pPrev->conditionFlag) == 0 )
      {
        if ( ((v22 = res->subresourceIndex, v22 == 0xFF) || (v23 = pPrev->subresourceIndex, v23 == 0xFF) || v22 == v23) && ((v24 = res->temporalIndex, v24 == 0xFF) || v24 == pPrev->temporalIndex) && ((res->flags & 0x10) == 0 || (pPrev->flags & 0x20) != 0 ? (v25 = 0) : (v25 = 1), (res->flags & 0x10) != 0 || (pPrev->flags & 0x20) == 0 ? (v26 = 0) : (v26 = 1), !v25 && !v26 && res->cmdIndex != pPrev->cmdIndex) || (res->flags & 0x10) != 0 && pPrev->temporalIndex == 1 || res->temporalIndex == 1 && (pPrev->flags & 0x10) != 0 )
        {
          if ( (state = res->state, state != eResourceState_Write) && (res->access & 0x10000) == 0 || pPrev->state == eResourceState_Write || (pPrev->access & 0x10000) != 0 || res->queueIndex != pPrev->queueIndex )
          {
            if ( state == eResourceState_Write || (res->access & 0x10000) != 0 || pPrev->state == eResourceState_Write || (pPrev->access & 0x10000) != 0 || res->queueIndex == pPrev->queueIndex )
              break;
          }
        }
      }
    }
    for ( ; i; i = i->pNext )
    {
      if ( (disableConditions & i->conditionFlag) == 0 )
      {
        if ( ((v28 = res->subresourceIndex, v28 == 0xFF) || (v29 = i->subresourceIndex, v29 == 0xFF) || v28 == v29) && ((v30 = res->temporalIndex, v30 == 0xFF) || v30 == i->temporalIndex) && ((res->flags & 0x20) == 0 || (i->flags & 0x10) != 0 ? (v31 = 0) : (v31 = 1), (res->flags & 0x20) != 0 || (i->flags & 0x10) == 0 ? (v32 = 0) : (v32 = 1), !v31 && !v32 && res->cmdIndex != i->cmdIndex) || (res->flags & 0x10) != 0 && i->temporalIndex == 1 || res->temporalIndex == 1 && (i->flags & 0x10) != 0 )
        {
          if ( (v33 = res->state, v33 != eResourceState_Write) && (res->access & 0x10000) == 0 || i->state == eResourceState_Write || (i->access & 0x10000) != 0 || res->queueIndex != i->queueIndex )
          {
            if ( v33 == eResourceState_Write || (res->access & 0x10000) != 0 || i->state == eResourceState_Write || (i->access & 0x10000) != 0 || res->queueIndex == i->queueIndex )
              break;
          }
        }
      }
    }
    if ( pPrev && pPrev->queueIndex != queueIndex )
      out->asyncTaskIndexPrev = pPrev->cmdIndex;
    if ( i )
    {
      if ( i->queueIndex != queueIndex )
        out->asyncTaskIndexNext = i->cmdIndex;
    }
  }
}

