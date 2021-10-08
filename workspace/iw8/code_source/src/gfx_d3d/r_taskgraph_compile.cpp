/*
==============
R_TG_Script::Init
==============
*/

void __fastcall R_TG_Script::Init(R_TG_Script *this, const char *_scriptName, unsigned int _sceneWidth, unsigned int _sceneHeight, unsigned int _displayWidth, unsigned int _displayHeight, unsigned int _viewCount)
{
  ?Init@R_TG_Script@@QEAAXPEBDIIIII@Z(this, _scriptName, _sceneWidth, _sceneHeight, _displayWidth, _displayHeight, _viewCount);
}

/*
==============
R_TG_TimerStart
==============
*/

unsigned __int64 __fastcall R_TG_TimerStart()
{
  return ?R_TG_TimerStart@@YA_KXZ();
}

/*
==============
R_TG_Compiler::NewTask
==============
*/

tg::Task *__fastcall R_TG_Compiler::NewTask(R_TG_Compiler *this, const char *pName)
{
  return ?NewTask@R_TG_Compiler@@UEAAPEAVTask@tg@@PEBD@Z(this, pName);
}

/*
==============
R_TG_Compiler::R_TG_Compiler
==============
*/

void __fastcall R_TG_Compiler::R_TG_Compiler(R_TG_Compiler *this)
{
  ??0R_TG_Compiler@@QEAA@XZ(this);
}

/*
==============
R_TG_Create
==============
*/

bool __fastcall R_TG_Create(const R_TG_Script *script, const R_TG_CompileOptions *options, GfxTaskGraph *taskGraph)
{
  return ?R_TG_Create@@YA_NAEBUR_TG_Script@@AEBUR_TG_CompileOptions@@AEAUGfxTaskGraph@@@Z(script, options, taskGraph);
}

/*
==============
R_TG_Destroy
==============
*/

void __fastcall R_TG_Destroy(GfxTaskGraph *taskGraph)
{
  ?R_TG_Destroy@@YAXAEAUGfxTaskGraph@@@Z(taskGraph);
}

/*
==============
R_TG_TimerAdd
==============
*/

unsigned __int64 __fastcall R_TG_TimerAdd(const char *pFuncName, unsigned __int64 *prev)
{
  return ?R_TG_TimerAdd@@YA_KPEBDAEA_K@Z(pFuncName, prev);
}

/*
==============
R_TG_GetBlockSize
==============
*/

unsigned int __fastcall R_TG_GetBlockSize()
{
  return ?R_TG_GetBlockSize@@YAIXZ();
}

/*
==============
R_TG_CompileInit
==============
*/

void R_TG_CompileInit(void)
{
  ?R_TG_CompileInit@@YAXXZ();
}

/*
==============
WriteBufferV
==============
*/

const char *WriteBufferV(char *buffer, const unsigned __int64 bufferLimit, unsigned __int64 *bufferUsed, const char *format, ...)
{
  return ?WriteBufferV@@YAPEBDPEAD_KPEA_KPEBDZZ(buffer, bufferLimit, bufferUsed, format);
}

/*
==============
R_TG_Compiler::R_TG_Compiler
==============
*/
void R_TG_Compiler::R_TG_Compiler(R_TG_Compiler *this)
{
  tg::Compiler::Compiler(this);
  this->__vftable = (R_TG_Compiler_vtbl *)&R_TG_Compiler::`vftable';
  `eh vector constructor iterator'(this->m_taskPool, 0x218ui64, 0x150ui64, (void (__fastcall *)(void *))tg::Task::Task, (void (__fastcall *)(void *))tg::Task::~Task);
  this->m_taskAllocs = 0;
  this->m_taskAttachmentsCount = 0;
  this->m_taskResourceDescCount = 0;
  memset_0(this->m_taskAttachments, 0, sizeof(this->m_taskAttachments));
  memset_0(this->m_taskResourceDescs, 0, sizeof(this->m_taskResourceDescs));
  this->m_dynamicSizeData.pSizes = this->m_dynamicSizes;
  this->m_dynamicSizeData.limit = 1024;
}

/*
==============
R_TG_Script::Init
==============
*/
void R_TG_Script::Init(R_TG_Script *this, const char *_scriptName, unsigned int _sceneWidth, unsigned int _sceneHeight, unsigned int _displayWidth, unsigned int _displayHeight, unsigned int _viewCount)
{
  tg::Size *p_sceneSize; 
  tg::Size v12; 
  __int64 v13; 
  vec2_t out_pDynamicResolutionTable; 

  this->sceneSize = 0i64;
  this->sceneFullSize = 0i64;
  memset_0(&this->dccAvailable, 0, 0x3201Cui64);
  this->viewCount = _viewCount;
  this->displaySize.v[0] = _displayWidth;
  this->scriptName = _scriptName;
  p_sceneSize = &this->sceneSize;
  this->displaySize.v[1] = _displayHeight;
  if ( rg.sceneResDynamic )
  {
    R_RT_BuildDynamicResolutionTable(_sceneWidth, _sceneHeight, &out_pDynamicResolutionTable);
    this->dynamicSceneSizeStepCount = 15;
    R_RT_AdjustForDynamicResolution(&out_pDynamicResolutionTable, _sceneWidth, _sceneHeight, GFX_RESOLUTION_STEP_NONE, (unsigned int *)&this->sceneSize, (unsigned int *)&this->sceneSize + 1);
    v12 = *p_sceneSize;
    v13 = 0i64;
    for ( this->sceneFullSize = v12; (unsigned int)v13 < this->dynamicSceneSizeStepCount; v13 = (unsigned int)(v13 + 1) )
      R_RT_AdjustForDynamicResolution(&out_pDynamicResolutionTable, _sceneWidth, _sceneHeight, (GfxResolutionStep)(v13 + 1), (unsigned int *)&this->dynamicSceneSizes[v13], (unsigned int *)&this->dynamicSceneSizes[v13] + 1);
  }
  else
  {
    p_sceneSize->v[0] = _sceneWidth;
    this->sceneSize.v[1] = _sceneHeight;
    this->sceneFullSize = *p_sceneSize;
  }
}

/*
==============
R_TG_Compiler::NewTask
==============
*/
tg::Task *R_TG_Compiler::NewTask(R_TG_Compiler *this, const char *pName)
{
  __int64 m_taskAllocs; 
  __int64 v5; 
  tg::Task *v6; 
  __int64 m_taskAttachmentsCount; 
  tg::Task *result; 
  __int64 m_taskResourceDescCount; 

  if ( this->m_taskAllocs >= 0x150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1473, ASSERT_TYPE_ASSERT, "(m_taskAllocs < tg::taskLimit)", (const char *)&queryFormat, "m_taskAllocs < tg::taskLimit") )
    __debugbreak();
  m_taskAllocs = this->m_taskAllocs;
  if ( (_DWORD)m_taskAllocs )
  {
    v5 = (unsigned int)(m_taskAllocs - 1);
    this->m_taskAttachmentsCount += this->m_taskPool[v5].m_attachmentCount;
    this->m_taskResourceDescCount += this->m_taskPool[v5].m_descCount;
  }
  this->m_taskAllocs = m_taskAllocs + 1;
  v6 = &this->m_taskPool[m_taskAllocs];
  tg::Task::Task(v6, pName);
  m_taskAttachmentsCount = this->m_taskAttachmentsCount;
  result = v6;
  m_taskResourceDescCount = this->m_taskResourceDescCount;
  v6->m_attachmentLimit = 2688 - m_taskAttachmentsCount;
  v6->m_attachments = &this->m_taskAttachments[m_taskAttachmentsCount];
  v6->m_descs = &this->m_taskResourceDescs[m_taskResourceDescCount];
  v6->m_descLimit = 672 - m_taskResourceDescCount;
  return result;
}

/*
==============
R_TG_AddAttachment
==============
*/
void R_TG_AddAttachment(GfxTaskGraph *taskGraph, const ntl::bitset<320,0,unsigned __int64> *pingPongBits, const tg::AttachmentInfo *attachmentInfo, R_TG_AttachmentFlags flags, GfxTaskGraph::Permutation *permutation)
{
  char *v8; 
  bool v9; 
  bool v10; 
  int v11; 
  bool v12; 
  bool v13; 
  R_TG_Attachment *v14; 
  unsigned __int8 subresourceIndex; 
  unsigned __int64 resourceIndex; 
  BOOL v17; 
  int v18; 
  int v19; 

  if ( attachmentInfo->resourceIndex >= taskGraph->resourceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1052, ASSERT_TYPE_ASSERT, "(attachmentInfo.resourceIndex < taskGraph.resourceCount)", (const char *)&queryFormat, "attachmentInfo.resourceIndex < taskGraph.resourceCount") )
    __debugbreak();
  v8 = (char *)taskGraph + 808 * attachmentInfo->resourceIndex;
  v9 = R_RT_Handle::IsValid((R_RT_Handle *)(v8 + 137552)) && (R_RT_Handle::GetSurface((R_RT_Handle *)(v8 + 137552))->m_rtFlagsInternal & 0x40) != 0;
  v10 = R_RT_Handle::IsValid((R_RT_Handle *)(v8 + 137552)) && (R_RT_Handle::GetSurface((R_RT_Handle *)(v8 + 137552))->m_rtFlagsInternal & 4) != 0;
  v11 = *((_DWORD *)v8 + 34349);
  v12 = (v11 & 0x1000) != 0 && v10;
  v13 = (v11 & 0x2000) != 0 && v10;
  if ( taskGraph->taskAttachmentCount >= 0xB500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1059, ASSERT_TYPE_ASSERT, "(taskGraph.taskAttachmentCount < taskGraph.taskAttachmentLimit)", "%s\n\ttaskAttachmentLimit can be safely increased", "taskGraph.taskAttachmentCount < taskGraph.taskAttachmentLimit") )
    __debugbreak();
  v14 = &taskGraph->taskAttachments[taskGraph->taskAttachmentCount];
  truncate_store<unsigned short,unsigned int>(&v14->resourceIndex, attachmentInfo->resourceIndex);
  subresourceIndex = attachmentInfo->state[0].subresourceIndex;
  v14->flags = flags;
  v14->subresourceIndex = subresourceIndex;
  if ( v13 )
  {
    resourceIndex = attachmentInfo->resourceIndex;
    if ( (attachmentInfo->flags & 0x10) != 0 )
    {
      if ( resourceIndex >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v17 = ((0x8000000000000000ui64 >> (resourceIndex & 0x3F)) & pingPongBits->m_data[resourceIndex >> 6]) == 0;
    }
    else
    {
      if ( resourceIndex >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v17 = ((0x8000000000000000ui64 >> (resourceIndex & 0x3F)) & pingPongBits->m_data[resourceIndex >> 6]) != 0;
    }
    truncate_store<unsigned char,unsigned int>(&v14->pingPongIndex, v17);
    v14->flags |= 0x10u;
  }
  if ( v12 )
  {
    v18 = *((_DWORD *)v8 + 34516);
    v14->temporalIndex = attachmentInfo->temporalIndex;
    v14->flags |= 8u;
    v19 = 1 << v18;
    if ( *((_DWORD *)v8 + 34516) >= taskGraph->temporalResourceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1076, ASSERT_TYPE_ASSERT, "(resource.temporalIndex < taskGraph.temporalResourceCount)", (const char *)&queryFormat, "resource.temporalIndex < taskGraph.temporalResourceCount") )
      __debugbreak();
    permutation->temporalResourceBits |= v19;
  }
  if ( v9 )
  {
    v14->temporalIndex = attachmentInfo->temporalIndex;
    v14->flags |= 0x20u;
  }
  if ( (attachmentInfo->state[0].access & 0x20000) != 0 )
    v14->flags |= 0x40u;
}

/*
==============
R_TG_Allocate
==============
*/
void R_TG_Allocate(GfxTaskGraph *taskGraph, R_TG_PoolAllocator *pool, R_TG_HeapAllocatorExplicitFree *heaps, unsigned int heapCount, const R_TG_AllocInfo *info, GfxTaskResource *res)
{
  GfxTaskResource *v6; 
  __int64 allocCount; 
  R_TG_ResourceAlloc *v10; 
  tg::eResourceType type; 
  int v12; 
  bool v13; 
  unsigned int allocSize; 
  unsigned int v15; 
  R_TG_HeapAllocatorExplicitFree *v16; 
  const R_TG_AllocInfo *v17; 
  unsigned int *p_m_flags; 
  unsigned int v19; 
  unsigned int resourceFlags; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int fastMemoryLimitSize; 
  R_TG_Alloc *pAllocs; 
  bool Tiled; 
  unsigned int v27; 
  bool v28; 
  unsigned int outAllocCount[4]; 

  v6 = res;
  if ( res->desc.type != eResourceType_Custom )
  {
    if ( res->allocCount >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 196, ASSERT_TYPE_ASSERT, "(res.allocCount < 2)", (const char *)&queryFormat, "res.allocCount < 2") )
      __debugbreak();
    allocCount = v6->allocCount;
    v10 = &v6->alloc[allocCount];
    v6->allocCount = allocCount + 1;
    type = v6->desc.type;
    switch ( type )
    {
      case eResourceType_Buffer:
        v12 = 16;
        break;
      case eResourceType_DepthTarget:
        v12 = 4;
        break;
      case eResourceType_Texture:
      case eResourceType_ColorTarget:
        v12 = 8;
        if ( (v6->desc.displayFlags & 0x800) != 0 )
          v12 = 2;
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 187, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_TG_GetHeapFlagsFromResource failed!\n") )
          __debugbreak();
        v12 = 0;
        break;
    }
    v13 = taskGraph->allocCount <= 0x400;
    allocSize = v6->allocSize;
    LODWORD(res) = allocSize;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 219, ASSERT_TYPE_ASSERT, "(taskGraph.allocCount <= taskGraph.allocLimit)", (const char *)&queryFormat, "taskGraph.allocCount <= taskGraph.allocLimit") )
      __debugbreak();
    v15 = 0;
    v10->pAllocs = &taskGraph->allocs[taskGraph->allocCount];
    if ( heapCount )
    {
      v16 = heaps;
      v17 = info;
      p_m_flags = &heaps->m_flags;
      do
      {
        if ( v6->isAliased == *((_BYTE *)p_m_flags + 10) )
        {
          v19 = p_m_flags[1];
          if ( (v19 & v12) != 0 && ((resourceFlags = v6->desc.resourceFlags) == 0 && *p_m_flags == -1 || (resourceFlags & *p_m_flags) != 0) )
          {
            if ( v6->isTiled )
            {
              v21 = v10->allocCount;
              v22 = 0;
              v23 = 1024 - taskGraph->allocCount - v21;
              if ( (resourceFlags & 0x10000) != 0 && (v19 & 1) != 0 )
              {
                fastMemoryLimitSize = taskGraph->fastMemoryLimitSize;
                if ( fastMemoryLimitSize > allocSize )
                  fastMemoryLimitSize = allocSize;
                v22 = allocSize - fastMemoryLimitSize;
                LODWORD(res) = fastMemoryLimitSize;
              }
              pAllocs = v10->pAllocs;
              outAllocCount[0] = 0;
              Tiled = R_TG_HeapAllocatorExplicitFree::AllocateTiled(&v16[v15], v17, (unsigned int *)&res, v23, &pAllocs[v21], outAllocCount);
              allocSize = (unsigned int)res;
              if ( Tiled )
              {
                v27 = outAllocCount[0];
                taskGraph->allocCount += outAllocCount[0];
                v10->allocCount += v27;
                v28 = v22 + allocSize == 0;
                allocSize += v22;
                LODWORD(res) = allocSize;
                if ( v28 )
                  return;
              }
            }
            else if ( R_TG_HeapAllocatorExplicitFree::Allocate(&v16[v15], v17, allocSize, v6->allocBlockAlign, v10->pAllocs) )
            {
              ++taskGraph->allocCount;
              v10->allocCount = 1;
              return;
            }
            v16 = heaps;
            v17 = info;
          }
        }
        ++v15;
        p_m_flags += 1294;
      }
      while ( v15 < heapCount );
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 266, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_TG_Allocate failed!\n") )
      __debugbreak();
  }
}

/*
==============
R_TG_CompileInit
==============
*/

void __fastcall R_TG_CompileInit(double _XMM0_8)
{
  __m256i v4; 

  v4.m256i_i16[0] = 0;
  v4.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+48h+var_28+10h], xmm0
    vmovups ymm1, ymmword ptr [rsp+48h+var_28]
  }
  v4.m256i_i64[0] = (__int64)&queryFormat.fmt + 3;
  v4.m256i_i64[1] = (__int64)"TG Labels";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+48h+var_28]
    vmovdqa xmmword ptr [rsp+48h+var_28], xmm0
    vmovups ymmword ptr cs:?g_R_TG_NullHandle@@3VR_RT_Handle@@A.m_surfaceID, ymm1; R_RT_Handle g_R_TG_NullHandle
  }
  g_R_TG_taskLabels = R_AllocGfxBufferMemory(0xA98u, (GfxBufferCreationContext *)&v4);
}

/*
==============
R_TG_Create
==============
*/
_BOOL8 R_TG_Create(const R_TG_Script *script, const R_TG_CompileOptions *options, GfxTaskGraph *taskGraph)
{
  unsigned __int64 v8; 
  bool v9; 
  unsigned __int64 v10; 
  tg::TaskGraphDesc taskGraphDesc; 
  tg::CompileOptions pOptions; 
  tg::Compiler *v14; 

  taskGraphDesc.pTaskDescs = script->tasks;
  taskGraphDesc.taskDescCount = script->taskCount;
  taskGraphDesc.queueCount = ((options->raw & 0x400) != 0) + 1;
  taskGraphDesc.dynamicSizeStepCount = script->dynamicSceneSizeStepCount;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0D8h+taskGraphDesc.ppCreateResourceNames], xmm0
  }
  taskGraphDesc.createResourceCount = 0;
  taskGraphDesc.ppExternalResourceNames = script->externalResourceNames;
  taskGraphDesc.pExternalResourceDescs = script->externalResources;
  taskGraphDesc.externalResourceCount = script->externalResourceCount;
  taskGraphDesc.ppOutputResourceNames = script->outputResourceNames;
  taskGraphDesc.outputResourceCount = script->outputResourceCount;
  taskGraphDesc.pTaskDependencies = script->taskDependencies;
  taskGraphDesc.taskDependencyCount = script->taskDependencyCount;
  if ( taskGraphDesc.externalResourceCount + taskGraphDesc.taskDescCount > 0x150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1508, ASSERT_TYPE_ASSERT, "(graphDesc.taskDescCount + graphDesc.externalResourceCount <= tg::taskLimit)", (const char *)&queryFormat, "graphDesc.taskDescCount + graphDesc.externalResourceCount <= tg::taskLimit", -2i64) )
    __debugbreak();
  *(_WORD *)&pOptions.verbose = 256;
  pOptions.batchCompute = BYTE1(options->raw) & 1;
  *(_WORD *)&pOptions.tileCache = 0;
  v14 = &s_compilerBuffer;
  tg::Compiler::Compiler(&s_compilerBuffer);
  s_compilerBuffer.__vftable = (tg::Compiler_vtbl *)&R_TG_Compiler::`vftable';
  `eh vector constructor iterator'(&unk_151EA4298, 0x218ui64, 0x150ui64, (void (__fastcall *)(void *))tg::Task::Task, (void (__fastcall *)(void *))tg::Task::~Task);
  unk_151ED0218 = 0;
  unk_151F1EE20 = 0;
  memset_0(&unk_151ED0220, 0, 0x4EC00ui64);
  memset_0(&unk_151F1EE28, 0, 0xD204ui64);
  s_compilerBuffer.m_dynamicSizeData.pSizes = (tg::Size *)&unk_151F2C02C;
  s_compilerBuffer.m_dynamicSizeData.limit = 1024;
  v8 = Sys_Microseconds();
  v9 = tg::Compiler::Compile(&s_compilerBuffer, NULL, &taskGraphDesc, &pOptions);
  if ( v9 )
  {
    if ( pOptions.verbose )
      Com_Printf(8, "TaskGraph compile SUCCEEDED:\n%s\n", s_compilerBuffer.m_logs.info.m_buffer);
    v10 = Sys_Microseconds();
    Com_Printf(8, "%s duration: %lu us\n", "tg::Compile", v10 - v8);
    R_TG_CreateInternal(&s_compilerBuffer, script, options, taskGraph);
  }
  else
  {
    Com_Printf(8, "TaskGraph compile FAILED:\n%s\n", s_compilerBuffer.m_logs.error.m_buffer);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1542, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TaskGraph compile FAILED!\n") )
      __debugbreak();
  }
  ((void (__fastcall *)(tg::Compiler *, _QWORD))s_compilerBuffer.~Compiler)(&s_compilerBuffer, 0i64);
  return v9;
}

/*
==============
R_TG_CreateInternal
==============
*/
void R_TG_CreateInternal(const tg::Compiler *compiler, const R_TG_Script *script, const R_TG_CompileOptions *options, GfxTaskGraph *taskGraph)
{
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int *p_heapCount; 
  unsigned int v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  unsigned int *p_maxUsage; 
  unsigned int *p_m_maxUsage; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned int *v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int16 *v36; 
  unsigned __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 heapMemoryUsage; 
  unsigned int *v41; 
  __int64 v42; 
  R_RT_AllocationLockSentry v43; 
  unsigned int size; 
  R_TG_AllocateHeaps::__l2::<lambda_9fedb4a619475da46aabb2ce33c524ec> _Pred; 
  unsigned __int64 v46; 
  R_TG_Script *scripta; 
  tg::Compiler *compilera; 
  __int64 v49; 
  R_TG_CreateContext createContext; 
  unsigned int _First[8]; 
  R_TG_DebugHeapInfo v52; 

  v49 = -2i64;
  scripta = (R_TG_Script *)script;
  compilera = (tg::Compiler *)compiler;
  memset_0(&createContext, 0, sizeof(createContext));
  memset_0(taskGraph, 0, sizeof(GfxTaskGraph));
  taskGraph->scriptName = script->scriptName;
  taskGraph->viewCount = script->viewCount;
  taskGraph->renderIndex = -1;
  taskGraph->allowDcc = (options->raw & 0x800) != 0;
  taskGraph->allowFastClear = (options->raw & 0x1000) != 0;
  taskGraph->limitDecompress = (options->raw & 0x2000) != 0;
  taskGraph->asyncCompute = (options->raw & 0x400) != 0;
  taskGraph->extendResourceLifetimes = (options->raw & 8) != 0;
  v8 = *(_BYTE *)&options->0 < 0 && taskGraph->viewCount == 1;
  taskGraph->mergedBarriers = v8;
  taskGraph->allowCommittedAllocs = 0;
  taskGraph->allowAliasedAllocs = (options->raw & 0x10) != 0;
  taskGraph->allowTiledAllocs = (options->raw & 0x20) != 0;
  taskGraph->allowSplitBarriers = (options->raw & 0x40) != 0;
  v9 = tg::Compiler::GetDynamicSizeStepCount((tg::Compiler *)compiler) + 1;
  v10 = 16;
  if ( v9 < 0x10 )
    v10 = v9;
  taskGraph->dynamicResolutionCount = v10;
  taskGraph->fastMemoryLimitSize = (unsigned __int16)(16 * ((options->raw >> 15) & 0x1F));
  p_heapCount = &taskGraph->heapCount;
  if ( taskGraph->heapCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_heap.cpp.h", 819, ASSERT_TYPE_ASSERT, "(taskGraph.heapCount == 0)", (const char *)&queryFormat, "taskGraph.heapCount == 0") )
    __debugbreak();
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
    R_TG_SetupHeapFull("ESRAM", 0x200u, 0x200u, 0x100u, 1, 1, R_RT_HeapFlag_AllowAll|R_RT_HeapFlag_ESRAM, createContext.heaps, &taskGraph->heapCount);
  v12 = *p_heapCount;
  v13 = 5176i64 * *p_heapCount;
  createContext.heaps[v13 / 0x1438].m_pName = "Transient";
  *(R_RT_HeapFlags *)((char *)&createContext.heaps[0].m_rtFlags + v13) = R_RT_HeapFlag_AllowAll;
  truncate_store<unsigned short,unsigned int>((unsigned __int16 *)((char *)&createContext.heaps[0].m_index + v13), v12);
  v14 = *p_heapCount;
  v15 = 5176 * v14;
  *(_QWORD *)((char *)&createContext.heaps[0].m_limit + v15) = 0xFFFFi64;
  v16 = 0;
  *(unsigned int *)((char *)&createContext.heaps[0].m_flags + v15) = -1;
  *(unsigned int *)((char *)&createContext.heaps[0].m_maxAllocs + v15) = 0;
  *(_WORD *)(&createContext.heaps[0].m_allowAliasedAlloc + v15) = 1;
  createContext.heaps[v15 / 0x1438].m_blockCount = 0;
  *(_QWORD *)&createContext.heaps[v15 / 0x1438].m_freeBlockIndex = -1i64;
  *(_QWORD *)&createContext.heaps[v15 / 0x1438].m_heapTop = 0i64;
  memset_0(createContext.heaps[v14].m_blocks, 0, sizeof(createContext.heaps[v14].m_blocks));
  *p_heapCount = v14 + 1;
  v17 = 5176i64 * (unsigned int)(v14 + 1);
  createContext.heaps[v17 / 0x1438].m_pName = "Persistent";
  *(R_RT_HeapFlags *)((char *)&createContext.heaps[0].m_rtFlags + v17) = R_RT_HeapFlag_AllowAll;
  truncate_store<unsigned short,unsigned int>((unsigned __int16 *)((char *)&createContext.heaps[0].m_index + v17), v14 + 1);
  v18 = *p_heapCount;
  v19 = 5176 * v18;
  *(_QWORD *)((char *)&createContext.heaps[0].m_limit + v19) = 0xFFFFi64;
  *(unsigned int *)((char *)&createContext.heaps[0].m_flags + v19) = -1;
  *(unsigned int *)((char *)&createContext.heaps[0].m_maxAllocs + v19) = 0;
  *(_WORD *)(&createContext.heaps[0].m_allowAliasedAlloc + v19) = 0;
  createContext.heaps[v19 / 0x1438].m_blockCount = 0;
  *(_QWORD *)&createContext.heaps[v19 / 0x1438].m_freeBlockIndex = -1i64;
  *(_QWORD *)&createContext.heaps[v19 / 0x1438].m_heapTop = 0i64;
  memset_0(createContext.heaps[v18].m_blocks, 0, sizeof(createContext.heaps[v18].m_blocks));
  *p_heapCount = v18 + 1;
  v20 = Sys_Microseconds();
  R_TG_ReserveResourceMemory(compiler, &createContext, taskGraph);
  v21 = Sys_Microseconds();
  v46 = v21;
  Com_Printf(8, "%s duration: %lu us\n", "R_TG_ReserveResourceMemory", v21 - v20);
  if ( (options->raw & 0x4000) != 0 )
  {
    v22 = *p_heapCount;
    if ( *p_heapCount )
    {
      p_maxUsage = &v52.maxUsage;
      p_m_maxUsage = &createContext.heaps[0].m_maxUsage;
      v25 = v22;
      do
      {
        *((_QWORD *)p_maxUsage - 1) = *(_QWORD *)(p_m_maxUsage - 3);
        *p_maxUsage = *p_m_maxUsage;
        p_maxUsage[1] = p_m_maxUsage[2];
        p_m_maxUsage += 1294;
        p_maxUsage += 4;
        --v25;
      }
      while ( v25 );
    }
    R_TG_DumpCompileInfo(compiler, taskGraph, &v52, v22);
    v46 = Sys_Microseconds();
    Com_Printf(8, "%s duration: %lu us\n", "R_TG_DumpCompileInfo", v46 - v21);
  }
  if ( (options->raw & 0x200) != 0 )
  {
    if ( *p_heapCount )
    {
      heapMemoryUsage = taskGraph->heapMemoryUsage;
      v41 = &createContext.heaps[0].m_maxUsage;
      v42 = *p_heapCount;
      do
      {
        heapMemoryUsage += *v41 << 16;
        v41 += 1294;
        --v42;
      }
      while ( v42 );
      taskGraph->heapMemoryUsage = heapMemoryUsage;
    }
  }
  else
  {
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v43);
    _Pred.heaps = (const R_TG_HeapAllocatorExplicitFree **)createContext.heaps;
    v26 = 0i64;
    taskGraph->heapMemoryUsage = 0i64;
    v27 = 0;
    v28 = *p_heapCount;
    if ( (_DWORD)v28 )
    {
      v29 = &createContext.heaps[0].m_maxUsage;
      v30 = 0i64;
      do
      {
        _First[v30] = v27;
        v31 = *v29 << 16;
        _First[v30 + 4] = v31;
        v26 += v31;
        ++v27;
        v29 += 1294;
        ++v30;
      }
      while ( v27 < (unsigned int)v28 );
    }
    v32 = v26;
    std::_Sort_unchecked_unsigned_int____lambda_9fedb4a619475da46aabb2ce33c524ec___(_First, &_First[v28], v28, (R_TG_AllocateHeaps::__l2::<lambda_9fedb4a619475da46aabb2ce33c524ec>)&_Pred);
    if ( *p_heapCount )
    {
      do
      {
        v33 = _First[v16];
        v34 = _First[v33 + 4];
        v35 = v34;
        v26 -= v34;
        LOWORD(v36) = R_RT_CreateHeapInternal((unsigned int)&size, (R_RT_HeapFlags)v34, (const char *)LODWORD(_Pred.heaps[647 * v33 + 3]), (const char *)_Pred.heaps[647 * v33]);
        taskGraph->heaps[v33].m_heapID = *v36;
        taskGraph->heapMemoryUsage += v35;
        if ( v26 + taskGraph->heapMemoryUsage != v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 748, ASSERT_TYPE_ASSERT, "(reserveNeeded + taskGraph.heapMemoryUsage == totalHeapSizes)", (const char *)&queryFormat, "reserveNeeded + taskGraph.heapMemoryUsage == totalHeapSizes") )
          __debugbreak();
        ++v16;
      }
      while ( v16 < *p_heapCount );
    }
    v37 = Sys_Microseconds();
    Com_Printf(8, "%s duration: %lu us\n", "R_TG_AllocateHeaps", v37 - v46);
    R_TG_CreateResources(taskGraph);
    v38 = Sys_Microseconds();
    Com_Printf(8, "%s duration: %lu us\n", "R_TG_CreateResources", v38 - v37);
    R_TG_CreateTasks(compilera, scripta, &createContext, taskGraph);
    v39 = Sys_Microseconds();
    Com_Printf(8, "%s duration: %lu us\n", "R_TG_CreateTasks", v39 - v38);
    R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v43);
  }
}

/*
==============
R_TG_CreateResources
==============
*/
void R_TG_CreateResources(GfxTaskGraph *taskGraph)
{
  GfxTaskGraph *v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int count; 
  int v8; 
  char v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  R_RT_TiledPlacement *v14; 
  const R_RT_Placement *v15; 
  R_RT_Placement *p_result; 
  unsigned int v17; 
  __int64 smallAllocHeapIndex; 
  __int64 heapCount; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int16 *v23; 
  __int64 v24; 
  unsigned __int16 *v25; 
  unsigned int v27; 
  unsigned int *v28; 
  const char *v29; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v33; 
  R_RT_Image *p_m_image; 
  int v35; 
  R_RT_Flags rtFlags; 
  unsigned __int8 v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  D3D12_RESOURCE_STATES initialState; 
  __int64 v43; 
  unsigned int mipLimit; 
  __int64 v45; 
  bool v49; 
  R_RT_Flags v52; 
  int v55; 
  GfxDataFormat v56; 
  unsigned int v57; 
  unsigned int ElementSizeForDataFormat; 
  int v59; 
  const vec4_t *v63; 
  D3D12_RESOURCE_STATES v64; 
  unsigned int v65; 
  unsigned int v66; 
  __int64 v67; 
  R_RT_Flags v68; 
  __int64 v69; 
  unsigned __int8 v70; 
  bool v73; 
  unsigned int i; 
  const char *v75; 
  __int64 v83; 
  __int64 depth; 
  __int64 arraySliceCount; 
  char v88; 
  const R_RT_TiledPlacement *tiledPlacement; 
  R_RT_Placement *placement; 
  int v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned int allocWidth; 
  unsigned int allocWidtha; 
  unsigned int height; 
  unsigned int heighta; 
  unsigned int width; 
  unsigned int widtha; 
  unsigned int v100; 
  int v101; 
  unsigned int *v102; 
  unsigned int v103; 
  char *name; 
  __int64 v105; 
  unsigned int v106; 
  __int64 v107; 
  R_RT_Handle v108; 
  GfxTaskGraph *v109; 
  __int128 v110; 
  __int64 v111; 
  __int128 v112; 
  R_RT_Handle v113; 
  char v114; 
  R_RT_Placement result; 
  R_RT_Handle v116; 
  vec4_t clearColor; 
  R_RT_TiledPlacement v118; 
  R_RT_Handle handles[128]; 

  v3 = taskGraph;
  v109 = taskGraph;
  PMem_BeginAlloc("tg_buffer_counters", PMEM_STACK_GAME);
  v4 = 0;
  v93 = 0;
  if ( v3->resourceCount )
  {
    __asm { vmovaps [rsp+12A0h+var_30], xmm6 }
    while ( 1 )
    {
      v5 = v4;
      _RDI = (__int64)v3->resources[v5].name;
      if ( v3->resources[v5].handle[0].m_surfaceID || v3->resources[v5].desc.pResource == &g_R_TG_NullHandle )
        goto LABEL_113;
      count = v3->resources[v5].desc.count;
      v92 = count;
      if ( v3->resources[v5].allocCount == 1 && count > 1 )
      {
        v8 = v3->resources[v5].allocSize / count;
        v9 = 1;
      }
      else
      {
        v9 = 0;
        v8 = 0;
      }
      v10 = v8;
      v101 = v8;
      v88 = v9;
      v11 = v3->resources[v5].desc.pDynamicSizes ? v3->dynamicResolutionCount : 1;
      *(_DWORD *)(_RDI + 280) = v11;
      if ( *(_DWORD *)(_RDI + 128) != 16 )
        break;
LABEL_114:
      v93 = ++v4;
      if ( v4 >= v3->resourceCount )
      {
        __asm { vmovaps xmm6, [rsp+12A0h+var_30] }
        goto LABEL_116;
      }
    }
    v12 = 0i64;
    v91 = 0;
    if ( !count )
      goto LABEL_104;
    v13 = count;
LABEL_15:
    v14 = NULL;
    tiledPlacement = NULL;
    v15 = NULL;
    placement = NULL;
    if ( *(_BYTE *)(_RDI + 279) )
    {
      p_result = (R_RT_Placement *)&v114;
      v17 = v10 * v12 + **(unsigned __int16 **)(_RDI + 216) + (v3->smallAlloc.offset << 16);
      smallAllocHeapIndex = v3->smallAllocHeapIndex;
    }
    else
    {
      if ( *(_BYTE *)(_RDI + 277) )
      {
        if ( *(_DWORD *)(_RDI + 264) != v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 910, ASSERT_TYPE_ASSERT, "(res.allocCount == res.desc.count)", (const char *)&queryFormat, "res.allocCount == res.desc.count") )
          __debugbreak();
        heapCount = v3->heapCount;
        v20 = 3 * v12 + 27;
        if ( *(_DWORD *)(_RDI + 8 * v20 + 8) > 0x14u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 770, ASSERT_TYPE_ASSERT, "(alloc.allocCount <= g_R_RT_tiledPlacementRangesMax)", (const char *)&queryFormat, "alloc.allocCount <= g_R_RT_tiledPlacementRangesMax") )
          __debugbreak();
        if ( (_DWORD)heapCount )
          memcpy_0(&v118, v3->heaps, 2 * heapCount);
        truncate_store<unsigned short,unsigned int>(&v118.tiledRangeCount, *(_DWORD *)(_RDI + 8 * v20 + 8));
        v21 = *(unsigned int *)(_RDI + 8 * v20 + 8);
        if ( (_DWORD)v21 )
        {
          v22 = *(_QWORD *)(_RDI + 8 * v20);
          v23 = (unsigned __int16 *)(v22 + 4);
          do
          {
            *(unsigned __int16 *)((char *)v23 + (_QWORD)&v118.heaps[2] - v22) = *(v23 - 2);
            *(unsigned __int16 *)((char *)v23 + (_QWORD)&v118.heaps[3] - v22) = *(v23 - 1);
            *(unsigned __int16 *)((char *)v23 + (_QWORD)v118.tiledRanges - v22) = *v23;
            v23 += 3;
            --v21;
          }
          while ( v21 );
        }
        v14 = &v118;
        tiledPlacement = &v118;
        goto LABEL_34;
      }
      v24 = (unsigned int)v12;
      if ( v9 )
        v24 = 0i64;
      v25 = *(unsigned __int16 **)(_RDI + 8 * (3 * v24 + 27));
      smallAllocHeapIndex = v25[2];
      v17 = (*v25 + v10 * (_DWORD)v12) << 16;
      p_result = &result;
    }
    _RAX = R_RT_GetHeapPlacement(p_result, v3->heaps[smallAllocHeapIndex], v17);
    v15 = (const R_RT_Placement *)&v110;
    placement = (R_RT_Placement *)&v110;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rbp+1180h+var_1170], xmm0
    }
LABEL_34:
    v11 = *(_DWORD *)(_RDI + 280);
    v100 = 0;
    v27 = 0;
    if ( !v11 )
      goto LABEL_102;
    v107 = v12;
    while ( 1 )
    {
      if ( v27 )
        v28 = (unsigned int *)(*(_QWORD *)(_RDI + 200) + 8i64 * (v27 - 1));
      else
        v28 = (unsigned int *)(_RDI + 136);
      v102 = v28;
      if ( v92 <= 1 )
      {
        if ( v27 )
        {
          LODWORD(depth) = v27;
          v29 = WriteBufferV(v3->names, 0x20000ui64, &v3->namesUsed, "%s_step_%u", (const char *)_RDI, depth);
        }
        else
        {
          v29 = (const char *)_RDI;
        }
      }
      else
      {
        LODWORD(arraySliceCount) = v27;
        LODWORD(depth) = v91;
        v29 = WriteBufferV(v3->names, 0x20000ui64, &v3->namesUsed, "%s_%u_%u", (const char *)_RDI, depth, arraySliceCount);
      }
      name = (char *)v29;
      if ( *(_BYTE *)(_RDI + 277) && v27 == 1 )
      {
        _RAX = 32 * v12;
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+rax+1180h+handles.m_surfaceID]
          vmovups ymmword ptr [rbp+1180h+var_1140.m_surfaceID], ymm0
        }
        Surface = R_RT_Handle::GetSurface(&v113);
        v33 = Surface;
        if ( (Surface->m_rtFlagsInternal & 8) != 0 )
          *(_QWORD *)&v112 = 0i64;
        else
          *(_QWORD *)&v112 = R_Texture_GetResident(Surface->m_image.m_base.textureId)->basemap;
        p_m_image = &v33->m_image;
        if ( !p_m_image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 520, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
          __debugbreak();
        if ( (p_m_image->m_base.flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 522, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
          __debugbreak();
        v15 = (const R_RT_Placement *)&v110;
        *((_QWORD *)&v112 + 1) = p_m_image->m_base.pixels.streamedDataHandle.data;
        __asm { vmovups xmm0, [rbp+1180h+var_1150] }
        v14 = NULL;
        placement = (R_RT_Placement *)&v110;
        __asm { vmovdqa [rbp+1180h+var_1170], xmm0 }
        tiledPlacement = NULL;
      }
      v35 = *(_DWORD *)(_RDI + 128);
      if ( v35 == 32 || v35 == 128 )
      {
        v63 = &colorBlackBlank;
        v64 = *(_DWORD *)(_RDI + 804);
        v65 = *(_DWORD *)(_RDI + 152);
        if ( *(_QWORD *)(_RDI + 184) )
          v63 = *(const vec4_t **)(_RDI + 184);
        v66 = *(_DWORD *)(_RDI + 148);
        v67 = v27;
        v68 = *(_DWORD *)(_RDI + 172);
        v69 = v12 + 8 * v67;
        v70 = *(_BYTE *)(_RDI + 164);
        v111 = 32 * v69;
        widtha = *(_DWORD *)(_RDI + 144);
        heighta = *(_DWORD *)(_RDI + 212);
        allocWidtha = *(_DWORD *)(_RDI + 208);
        v106 = v102[1];
        v103 = *v102;
        if ( (v68 & 0x3E0080) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 787, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskDepthOnly | R_RT_Flag_MaskBufferOnly ) )") )
          __debugbreak();
        _RAX = R_RT_CreateInternal(&v116, v103, v106, allocWidtha, heighta, widtha, v66, v65, g_R_RT_renderTargetFmts[v70], v68, R_RT_FlagInternal_MaskLifetime, v63, v64, name, 0, placement, tiledPlacement, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp(944)");
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rbp+1180h+var_1140.m_surfaceID], ymm0
          vmovups ymmword ptr [rbp+1180h+var_11A0.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v108);
          if ( (R_RT_Handle::GetSurface(&v108)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_11A0.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_11A0.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v73 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_1140.m_surfaceID] }
            if ( v73 )
              __debugbreak();
          }
        }
        _RAX = v111;
        v15 = placement;
        goto LABEL_98;
      }
      if ( v35 == 64 )
        break;
      _RSI = 32 * (v12 + 8i64 * v27);
      if ( v35 == 512 )
      {
        v52 = *(_DWORD *)(_RDI + 172);
        if ( (v52 & 0xA0000) == 0 )
        {
          v55 = *(_DWORD *)(_RDI + 164);
          if ( v55 )
          {
            v56 = g_R_RT_bufferFmts[(unsigned __int8)v55];
            ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(v56);
            v59 = *(_DWORD *)(_RDI + 144) * v28[1] * *v28;
          }
          else
          {
            v56 = GFX_DATA_FORMAT_R32_UINT;
            v57 = *(_DWORD *)(_RDI + 144) * v28[1] * *v28;
            ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
            v59 = v57 / ElementSizeForDataFormat;
            if ( Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 976, ASSERT_TYPE_ASSERT, "(Buffers_GetElementSizeForDataFormat( dataFormat ) == 4)", (const char *)&queryFormat, "Buffers_GetElementSizeForDataFormat( dataFormat ) == 4") )
              __debugbreak();
          }
          _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v116, ElementSizeForDataFormat, v59, v56, (R_RT_Flags)*(_DWORD *)(_RDI + 172), R_RT_FlagInternal_MaskLifetime, (D3D12_RESOURCE_STATES)*(_DWORD *)(_RDI + 804), v29, 0, placement, tiledPlacement, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp(985)");
          v15 = placement;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+rsi+1180h+handles.m_surfaceID], ymm0
          }
          goto LABEL_99;
        }
        _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v116, *(_DWORD *)(_RDI + 144), v28[1] * *v28, GFX_DATA_FORMAT_R32_UINT, v52, R_RT_FlagInternal_MaskLifetime, (D3D12_RESOURCE_STATES)*(_DWORD *)(_RDI + 804), v29, 0, v15, v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp(960)");
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+rsi+1180h+handles.m_surfaceID], ymm0
        }
      }
      else
      {
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+1180h+var_11A0.m_tracking.m_name], xmm0
        }
        v108.m_surfaceID = 0;
        v108.m_tracking.m_allocCounter = 0;
        __asm
        {
          vmovups ymm1, ymmword ptr [rbp+1180h+var_11A0.m_surfaceID]
          vmovups ymmword ptr [rbp+rsi+1180h+handles.m_surfaceID], ymm1
        }
      }
LABEL_100:
      v11 = *(_DWORD *)(_RDI + 280);
      v27 = v100 + 1;
      v3 = v109;
      v100 = v27;
      if ( v27 >= v11 )
      {
        LODWORD(v12) = v91;
LABEL_102:
        v13 = *(_DWORD *)(_RDI + 156);
        v10 = v101;
        v9 = v88;
        v12 = (unsigned int)(v12 + 1);
        v91 = v12;
        if ( (unsigned int)v12 >= v13 )
        {
          count = v92;
LABEL_104:
          for ( i = 0; i < v11; ++i )
          {
            if ( count <= 1 )
            {
              _RCX = (unsigned __int64)i << 8;
              _RAX = 32 * (i + 9i64);
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+rcx+1180h+handles.m_surfaceID]
                vmovups ymmword ptr [rax+rdi], ymm0
              }
            }
            else
            {
              LODWORD(depth) = i;
              v75 = WriteBufferV(v3->names, 0x20000ui64, &v3->namesUsed, "%s_array_%u", (const char *)_RDI, depth);
              _RAX = R_RT_CreateArrayInternal((R_RT_ArrayHandle *)&v116, &handles[8 * (unsigned __int64)i], *(_DWORD *)(_RDI + 156), R_RT_Lifetime_Permanent, v75, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp(1000)");
              count = v92;
              _RCX = 32 * (i + 9i64);
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rcx+rdi], ymm0
              }
            }
            v11 = *(_DWORD *)(_RDI + 280);
          }
          if ( v11 < 0x10 )
          {
            _RDX = _RDI + 32 * (v11 + 9i64);
            v83 = 16 - v11;
            do
            {
              _RDX += 32i64;
              __asm
              {
                vmovups ymm0, ymmword ptr [rdi+120h]
                vmovups ymmword ptr [rdx-20h], ymm0
              }
              --v83;
            }
            while ( v83 );
          }
          v4 = v93;
LABEL_113:
          *(_QWORD *)(_RDI + 200) = 0i64;
          goto LABEL_114;
        }
        goto LABEL_15;
      }
    }
    if ( *(_QWORD *)(_RDI + 184) )
      __asm { vmovss  xmm6, dword ptr [rax] }
    else
      __asm { vxorps  xmm6, xmm6, xmm6 }
    rtFlags = *(_DWORD *)(_RDI + 172);
    v38 = *(_BYTE *)(_RDI + 164);
    v39 = *(_DWORD *)(_RDI + 148);
    v40 = *(_DWORD *)(_RDI + 212);
    v41 = v27;
    initialState = *(_DWORD *)(_RDI + 804);
    v43 = v12 + 8 * v41;
    mipLimit = *(_DWORD *)(_RDI + 152);
    v105 = 32 * v43;
    allocWidth = *(_DWORD *)(_RDI + 208);
    height = v102[1];
    width = *v102;
    if ( (rtFlags & 0x3E0001) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 794, ASSERT_TYPE_ASSERT, "(!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) ))", (const char *)&queryFormat, "!( rtFlags & ( R_RT_Flag_MaskColorOnly | R_RT_Flag_MaskBufferOnly ) )") )
      __debugbreak();
    v45 = v38;
    v15 = placement;
    __asm { vmovss  dword ptr [rbp+1180h+var_10E0], xmm6 }
    _RAX = R_RT_CreateInternal(&v116, width, height, allocWidth, v40, 1u, v39, mipLimit, g_R_RT_depthStencilFmts[v45], rtFlags, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Depth, &clearColor, initialState, name, 0, placement, tiledPlacement, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp(950)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+1180h+var_1140.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+1180h+var_11A0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v108);
      if ( (R_RT_Handle::GetSurface(&v108)->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_11A0.m_surfaceID] }
        __debugbreak();
        _RAX = v105;
        goto LABEL_98;
      }
      __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_11A0.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+1180h+var_1140.m_surfaceID] }
        if ( v49 )
        {
          __debugbreak();
          _RAX = v105;
LABEL_98:
          __asm { vmovups ymmword ptr [rbp+rax+1180h+handles.m_surfaceID], ymm0 }
LABEL_99:
          v14 = (R_RT_TiledPlacement *)tiledPlacement;
          v12 = v107;
          goto LABEL_100;
        }
      }
    }
    _RAX = v105;
    goto LABEL_98;
  }
LABEL_116:
  PMem_EndAlloc("tg_buffer_counters", PMEM_STACK_GAME);
}

/*
==============
R_TG_CreateTasks
==============
*/
void R_TG_CreateTasks(const tg::Compiler *compiler, const R_TG_Script *script, R_TG_CreateContext *createContext, GfxTaskGraph *taskGraph)
{
  unsigned int m_cmdCount; 
  _QWORD *p_scriptName; 
  const unsigned int **p_pSystemData; 
  __int64 v9; 
  unsigned int *p_gpuTimer; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int *conditionCount; 
  unsigned int v17; 
  GfxTaskGraph *v18; 
  __int64 v19; 
  R_TG_TaskInfo *v20; 
  unsigned int v21; 
  unsigned int v22; 
  tg::Compiler *v23; 
  unsigned int Condition; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v28; 
  unsigned int v29; 
  R_TG_TaskInfo *p_tasks; 
  unsigned int taskCount; 
  GfxTaskGraph::Permutation *v32; 
  unsigned int taskBarrierCount; 
  unsigned int v34; 
  unsigned int v35; 
  R_TG_CreateContext *v36; 
  __int64 v37; 
  unsigned int *v38; 
  __int64 taskPackedIndex; 
  __int64 v40; 
  tg::Compiler *v41; 
  __int64 taskAttachmentCount; 
  __int64 v43; 
  unsigned int v44; 
  GfxTaskGraph::Permutation *v45; 
  __int64 v46; 
  __int64 resourceIndex; 
  tg::eResourceType type; 
  const tg::AttachmentInfo *v49; 
  tg::AttachmentState *state; 
  const char *v51; 
  int v52; 
  const char *v53; 
  char v54; 
  GfxTaskGraph::Permutation *v55; 
  unsigned int v56; 
  __int64 *v57; 
  __int64 v58; 
  tg::AttachmentInfo *v59; 
  bool v60; 
  bool v61; 
  char v62; 
  tg::AttachmentInfo *v63; 
  unsigned int v64; 
  char v66; 
  bool v70; 
  unsigned int v71; 
  unsigned int v72; 
  bool v73; 
  unsigned __int64 v74; 
  unsigned int v75; 
  unsigned int *outSize; 
  unsigned int disableConditions; 
  unsigned int attachmentCount; 
  unsigned int taskSharedIndex; 
  GfxTaskGraph::Permutation *permutation; 
  unsigned int v81; 
  unsigned int v82; 
  tg::Compiler *compilera; 
  R_TG_TaskInfo *tasks; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  R_TG_CreateContext *v88; 
  unsigned int taskBarrierCountBegin; 
  GfxTaskGraph *taskGrapha; 
  __int64 v91; 
  R_RT_Handle v92; 
  R_RT_Handle v93; 
  ntl::bitset<320,0,unsigned __int64> pingPongBits; 
  __int64 v95[3]; 
  unsigned int resourceCompressionMasks[336]; 
  tg::AttachmentInfo pOut[32]; 
  unsigned int resourceAccessIndices[336]; 

  m_cmdCount = compiler->m_cmdCount;
  taskGrapha = taskGraph;
  p_scriptName = &script->scriptName;
  v88 = createContext;
  tasks = (R_TG_TaskInfo *)script;
  compilera = (tg::Compiler *)compiler;
  v82 = m_cmdCount;
  if ( m_cmdCount )
  {
    p_pSystemData = &createContext->tasks.infos[0].pSystemData;
    v9 = m_cmdCount;
    p_gpuTimer = &taskGraph->taskShared[0].gpuTimer;
    do
    {
      LODWORD(outSize) = *((_DWORD *)p_pSystemData - 43);
      *((_QWORD *)p_gpuTimer - 2) = WriteBufferV(taskGraph->names, 0x20000ui64, &taskGraph->namesUsed, "%s_%u", g_R_TG_defs[*((unsigned int *)p_pSystemData - 44)].pName, outSize);
      *(p_gpuTimer - 2) = *((_DWORD *)p_pSystemData - 44);
      v11 = *((unsigned int *)p_pSystemData - 42);
      *(p_gpuTimer - 1) = v11;
      ++taskGraph->taskQueueCount[v11];
      v12 = *((_DWORD *)p_pSystemData - 2);
      if ( v12 )
      {
        if ( taskGraph->taskDataCount + v12 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1112, ASSERT_TYPE_ASSERT, "(taskGraph.taskDataCount + info.userDataCount < taskGraph.taskDataLimit)", (const char *)&queryFormat, "taskGraph.taskDataCount + info.userDataCount < taskGraph.taskDataLimit") )
          __debugbreak();
        v13 = 0i64;
        *((_QWORD *)p_gpuTimer + 1) = &taskGraph->taskData[taskGraph->taskDataCount];
        for ( p_gpuTimer[4] = *((_DWORD *)p_pSystemData - 2); (unsigned int)v13 < *((_DWORD *)p_pSystemData - 2); ++taskGraph->taskDataCount )
        {
          v14 = (*(p_pSystemData - 2))[v13];
          v13 = (unsigned int)(v13 + 1);
          taskGraph->taskData[taskGraph->taskDataCount] = v14;
        }
      }
      if ( *((_DWORD *)p_pSystemData + 2) )
      {
        v15 = **p_pSystemData;
        *p_gpuTimer = v15;
      }
      else
      {
        v15 = *p_gpuTimer;
      }
      if ( !v15 )
        *p_gpuTimer = 129;
      if ( *((_DWORD *)p_pSystemData + 2) > 1u )
        taskGraph->info.taskFlags |= (*p_pSystemData)[1];
      if ( *((_DWORD *)p_pSystemData - 40) == 1 )
        p_gpuTimer[5] = *((_DWORD *)p_pSystemData - 39);
      p_gpuTimer += 10;
      p_pSystemData += 25;
      --v9;
    }
    while ( v9 );
    p_scriptName = tasks;
    compiler = compilera;
  }
  permutation = (GfxTaskGraph::Permutation *)taskGraph->conditionCount;
  conditionCount = taskGraph->conditionCount;
  v17 = 0;
  v18 = taskGrapha;
  v19 = 0i64;
  v20 = (R_TG_TaskInfo *)((char *)g_R_TG_conditionLimit - (char *)taskGrapha - 396768);
  tasks = v20;
  while ( 1 )
  {
    v21 = tg::Compiler::GetConditionCount((tg::Compiler *)compiler, v17);
    *conditionCount = v21;
    if ( v21 > *(unsigned int *)((char *)conditionCount + (_QWORD)v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1136, ASSERT_TYPE_ASSERT, "(taskGraph.conditionCount[t] <= g_R_TG_conditionLimit[t])", (const char *)&queryFormat, "taskGraph.conditionCount[t] <= g_R_TG_conditionLimit[t]") )
      __debugbreak();
    v22 = 0;
    if ( *conditionCount )
    {
      v23 = compilera;
      do
      {
        Condition = tg::Compiler::GetCondition(v23, v17, v22);
        v25 = v19 + v22++;
        v18->conditions[0][v25] = (bool (__fastcall *)(const GfxViewInfo *))p_scriptName[v19 + 331 + Condition];
      }
      while ( v22 < *conditionCount );
      v20 = tasks;
    }
    ++v17;
    ++conditionCount;
    v19 += 8i64;
    if ( v17 >= 2 )
      break;
    compiler = compilera;
  }
  v26 = 0i64;
  disableConditions = 0;
  _R13 = taskGrapha;
  v28 = 1 << permutation->taskBegin;
  taskGrapha->permutationCount = v28;
  if ( v28 )
  {
    v29 = v82;
    p_tasks = &v88->tasks;
    tasks = &v88->tasks;
    do
    {
      taskCount = _R13->taskCount;
      v32 = &_R13->permutations[v26];
      memset(&pingPongBits, 0, sizeof(pingPongBits));
      v32->taskBegin = taskCount;
      taskBarrierCount = _R13->taskBarrierCount;
      permutation = v32;
      taskBarrierCountBegin = taskBarrierCount;
      memset_0(resourceAccessIndices, 0, sizeof(resourceAccessIndices));
      memset_0(resourceCompressionMasks, -1, sizeof(resourceCompressionMasks));
      v34 = 0;
      v35 = -1;
      v81 = -1;
      taskSharedIndex = 0;
      if ( v29 )
      {
        v36 = v88;
        do
        {
          v37 = v34;
          v91 = v34;
          v38 = (unsigned int *)((char *)v36 + 200 * v34);
          if ( v38[13108] || ((unsigned int)v26 & v38[13109]) == 0 )
          {
            taskPackedIndex = _R13->taskCount;
            v87 = taskPackedIndex;
            _R13->taskCount = taskPackedIndex + 1;
            if ( (unsigned int)taskPackedIndex >= 0x2A00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1163, ASSERT_TYPE_ASSERT, "(taskDst < taskGraph.taskPackedLimit)", (const char *)&queryFormat, "taskDst < taskGraph.taskPackedLimit") )
              __debugbreak();
            v40 = (__int64)&_R13->tasksPacked[taskPackedIndex];
            if ( v34 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v34, "unsigned", v34) )
              __debugbreak();
            v41 = compilera;
            *(_WORD *)v40 = v34;
            _R13->tasksPacked[taskPackedIndex].vrsMaskIndex = -1;
            ++v32->taskQueueCount[v38[13106]];
            tg::Compiler::GetAttachmentInfo(v41, v34, disableConditions, pOut, 0x20u, &attachmentCount);
            taskAttachmentCount = _R13->taskAttachmentCount;
            v43 = 0i64;
            v95[0] = 0i64;
            v95[1] = 0i64;
            v85 = 0;
            v86 = -1;
            if ( (unsigned int)taskAttachmentCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)taskAttachmentCount, "unsigned", taskAttachmentCount) )
              __debugbreak();
            v44 = 0;
            _R13->tasksPacked[taskPackedIndex].handleOffset = taskAttachmentCount;
            if ( attachmentCount )
            {
              v45 = permutation;
              while ( 1 )
              {
                v46 = v44;
                resourceIndex = pOut[v46].resourceIndex;
                type = pOut[v46].state[0].type;
                v49 = &pOut[v46];
                state = pOut[v46].state;
                if ( _R13->resources[resourceIndex].desc.conditionType || (disableConditions & _R13->resources[resourceIndex].desc.conditionFlag) == 0 )
                {
                  if ( type != eResourceType_Custom )
                  {
                    if ( type == eResourceType_ColorTarget )
                    {
                      if ( pOut[v44].temporalIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1206, ASSERT_TYPE_ASSERT, "(attachmentInfo[a].temporalIndex == 0)", (const char *)&queryFormat, "attachmentInfo[a].temporalIndex == 0") )
                        __debugbreak();
                      *((_DWORD *)v95 + v43) = v44;
                      v43 = (unsigned int)(v43 + 1);
                    }
                    else if ( type == eResourceType_DepthTarget )
                    {
                      v86 = v44;
                    }
                    else
                    {
                      if ( (state->access & 0x200) != 0 )
                      {
                        if ( (type != eResourceType_Texture || *(_BYTE *)(v40 + 9) != 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1216, ASSERT_TYPE_ASSERT, "(resourceType == tg::eResourceType_Texture && taskInfo.vrsMaskIndex == 0xff)", (const char *)&queryFormat, "resourceType == tg::eResourceType_Texture && taskInfo.vrsMaskIndex == UCHAR_MAX") )
                          __debugbreak();
                        *(_BYTE *)(v40 + 9) = *(_BYTE *)(v40 + 7);
                      }
                      if ( state->state == eResourceState_Reference && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1220, ASSERT_TYPE_ASSERT, "(currentState.state != tg::eResourceState_Reference)", (const char *)&queryFormat, "currentState.state != tg::eResourceState_Reference") )
                        __debugbreak();
                      R_TG_AddAttachment(_R13, &pingPongBits, v49, R_TG_AttachmentFlag_None, v45);
                      ++_R13->taskAttachmentCount;
                      ++*(_BYTE *)(v40 + 7);
                    }
                  }
                  goto LABEL_77;
                }
                if ( type == eResourceType_ColorTarget )
                  break;
                if ( type == eResourceType_DepthTarget )
                {
                  v51 = "resourceType != tg::eResourceType_DepthTarget";
                  v52 = 1193;
                  v53 = "(resourceType != tg::eResourceType_DepthTarget)";
LABEL_53:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", v52, ASSERT_TYPE_ASSERT, v53, (const char *)&queryFormat, v51) )
                    __debugbreak();
                }
                if ( _R13->taskAttachmentCount >= 0xB500 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 1194, ASSERT_TYPE_ASSERT, "(taskGraph.taskAttachmentCount < taskGraph.taskAttachmentLimit)", "%s\n\ttaskAttachmentLimit can be safely increased", "taskGraph.taskAttachmentCount < taskGraph.taskAttachmentLimit") )
                  __debugbreak();
                _R13->taskAttachments[_R13->taskAttachmentCount++].resourceIndex = -1;
                ++*(_BYTE *)(v40 + 7);
LABEL_77:
                if ( ++v44 >= attachmentCount )
                {
                  v37 = v91;
                  LODWORD(taskPackedIndex) = v87;
                  v85 = v43;
                  goto LABEL_79;
                }
              }
              v51 = "resourceType != tg::eResourceType_ColorTarget";
              v52 = 1192;
              v53 = "(resourceType != tg::eResourceType_ColorTarget)";
              goto LABEL_53;
            }
LABEL_79:
            *(_BYTE *)(v40 + 6) = 0;
            if ( _R13->taskShared[v37].queueIndex == 1 )
            {
              v54 = *(_BYTE *)(v40 + 6);
              if ( v81 == -1 )
                v54 = 8;
              v81 = taskPackedIndex;
              *(_BYTE *)(v40 + 6) = v54;
            }
            v55 = permutation;
            R_TG_Barrier_BuildForTask(compilera, tasks, disableConditions, _R13, permutation, (GfxTaskInfoPacked *)v40, taskSharedIndex, pOut, attachmentCount, resourceAccessIndices, taskPackedIndex, resourceCompressionMasks);
            v56 = 0;
            if ( (_DWORD)v43 )
            {
              v57 = v95;
              do
              {
                v58 = pOut[*(unsigned int *)v57].resourceIndex;
                v59 = &pOut[*(unsigned int *)v57];
                v60 = (pOut[*(unsigned int *)v57].flags & 4) != 0 && (_R13->resources[v58].desc.displayFlags & 0x8009) != 0;
                v61 = (pOut[*(unsigned int *)v57].flags & 2) != 0 || v60;
                R_TG_AddAttachment(_R13, &pingPongBits, v59, R_TG_AttachmentFlag_ColorTarget, permutation);
                if ( (_R13->taskAttachments[_R13->taskAttachmentCount].flags & 0x20) != 0 )
                {
                  v62 = *(_BYTE *)(v40 + 6) | 2;
                  *(_BYTE *)(v40 + 6) = v62;
                  if ( v59->state[1].state == eResourceState_Initial )
                    *(_BYTE *)(v40 + 6) = v62 | 1;
                }
                ++_R13->taskAttachmentCount;
                ++*(_BYTE *)(v40 + 8);
                if ( v61 )
                {
                  resourceCompressionMasks[v59->resourceIndex] = -1;
                  *(_BYTE *)(v40 + 4) |= 1 << v56;
                }
                if ( v59->state[1].state == eResourceState_Initial && !v61 )
                  *(_BYTE *)(v40 + 5) |= 1 << v56;
                if ( _R13->resources[v58].desc.multisample > 1 )
                  *(_BYTE *)(v40 + 6) |= 0x40u;
                ++v56;
                v57 = (__int64 *)((char *)v57 + 4);
              }
              while ( v56 < v85 );
              v55 = permutation;
            }
            if ( v86 != -1 )
            {
              v63 = &pOut[v86];
              v64 = v63->flags >> 1;
              _RSI = v63->resourceIndex;
              R_TG_AddAttachment(_R13, &pingPongBits, v63, R_TG_AttachmentFlag_DepthTarget, v55);
              ++_R13->taskAttachmentCount;
              ++*(_BYTE *)(v40 + 8);
              *(_BYTE *)(v40 + 6) |= 4u;
              v66 = v64 & 1;
              if ( v66 )
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rsi+r13+21950h]
                  vmovd   eax, xmm0
                  vmovups ymmword ptr [rbp+1480h+var_14A0.m_surfaceID], ymm0
                  vmovups ymmword ptr [rbp+1480h+var_14C0.m_surfaceID], ymm0
                }
                if ( (_WORD)_EAX )
                {
                  R_RT_Handle::GetSurface(&v92);
                  if ( (R_RT_Handle::GetSurface(&v92)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
                  {
                    __asm { vmovups ymm0, ymmword ptr [rbp+1480h+var_14C0.m_surfaceID] }
                  }
                  else
                  {
                    __asm { vmovups ymm0, ymmword ptr [rbp+1480h+var_14C0.m_surfaceID] }
                    __debugbreak();
                  }
                }
                else
                {
                  __asm { vpextrd rax, xmm0, 2 }
                  if ( (_DWORD)_RAX )
                  {
                    v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
                    __asm { vmovups ymm0, ymmword ptr [rbp+1480h+var_14A0.m_surfaceID] }
                    if ( v70 )
                      __debugbreak();
                  }
                }
                *(_BYTE *)(v40 + 4) |= 0x10u;
                __asm { vmovups ymmword ptr [rbp+1480h+var_14A0.m_surfaceID], ymm0 }
                *(_BYTE *)(v40 + 4) |= 32 * ((R_RT_Handle::GetSurface(&v93)->m_rtFlags & 0x80) != 0);
                resourceCompressionMasks[v63->resourceIndex] = -1;
              }
              if ( v63->state[1].state == eResourceState_Initial && !v66 )
                *(_BYTE *)(v40 + 5) |= 0x10u;
              if ( _R13->resources[_RSI].desc.multisample > 1 )
                *(_BYTE *)(v40 + 6) |= 0x40u;
            }
            v71 = 0;
            if ( attachmentCount )
            {
              v72 = v87;
              do
              {
                v73 = (pOut[v71].flags & 0x10) == 0;
                v74 = pOut[v71].resourceIndex;
                resourceAccessIndices[v74] = v72;
                if ( !v73 )
                {
                  if ( v74 >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 228, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                    __debugbreak();
                  pingPongBits.m_data[v74 >> 6] ^= 0x8000000000000000ui64 >> (v74 & 0x3F);
                }
                ++v71;
              }
              while ( v71 < attachmentCount );
              _R13 = taskGrapha;
            }
            v36 = v88;
            LODWORD(v26) = disableConditions;
            v34 = taskSharedIndex;
            v32 = permutation;
          }
          taskSharedIndex = ++v34;
        }
        while ( v34 < v82 );
        taskCount = v32->taskBegin;
        v35 = v81;
        p_tasks = tasks;
        v29 = v82;
      }
      v75 = _R13->taskCount;
      v32->taskEnd = v75;
      v32->taskCount = v75 - taskCount;
      if ( v35 != -1 )
        _R13->tasksPacked[v35].flags |= 0x10u;
      if ( _R13->mergedBarriers )
        R_TG_Barrier_Merge(_R13, v32);
      R_TG_Barrier_BuildForEnd(compilera, p_tasks, &pingPongBits, resourceCompressionMasks, v26, _R13, v32, taskBarrierCountBegin);
      v26 = (unsigned int)(v26 + 1);
      disableConditions = v26;
    }
    while ( (unsigned int)v26 < _R13->permutationCount );
  }
}

/*
==============
R_TG_Destroy
==============
*/
void R_TG_Destroy(GfxTaskGraph *taskGraph)
{
  GfxTaskGraph *v2; 
  unsigned int i; 
  __int64 v4; 
  __int64 name; 
  unsigned int v6; 
  unsigned int handleUniqueCount; 
  _QWORD *v12; 
  __int64 v13; 
  unsigned int j; 
  R_RT_AllocationLockSentry v15; 
  GfxTaskGraph *v16; 
  __int64 v17; 
  R_RT_Handle v18; 

  v17 = -2i64;
  v2 = taskGraph;
  v16 = taskGraph;
  if ( taskGraph->resourceCount )
  {
    R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v15);
    for ( i = 0; i < v2->resourceCount; ++i )
    {
      v4 = i;
      name = (__int64)v2->resources[v4].name;
      if ( v2->resources[v4].allocCount )
      {
        v6 = 0;
        handleUniqueCount = v2->resources[v4].handleUniqueCount;
        if ( handleUniqueCount )
        {
          do
          {
            _RBX = name + 32 * (v6 + 9i64);
            __asm
            {
              vmovups ymm0, ymmword ptr [rbx]
              vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
              vmovd   eax, xmm0
            }
            if ( (_WORD)_EAX )
            {
              R_RT_Handle::GetSurface(&v18);
              if ( (R_RT_Handle::GetSurface(&v18)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
                __debugbreak();
              __asm
              {
                vmovups ymm0, ymmword ptr [rsp+0A8h+var_58.m_surfaceID]
                vmovups ymmword ptr [rsp+0A8h+var_58.m_surfaceID], ymm0
              }
              R_RT_DestroyInternal(&v18);
            }
            else if ( v18.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            {
              __debugbreak();
            }
            *(_WORD *)_RBX = 0;
            *(_DWORD *)(_RBX + 8) = 0;
            *(_QWORD *)(_RBX + 16) = 0i64;
            *(_QWORD *)(_RBX + 24) = 0i64;
            ++v6;
            handleUniqueCount = *(_DWORD *)(name + 280);
          }
          while ( v6 < handleUniqueCount );
          v2 = v16;
        }
        if ( handleUniqueCount < 0x10 )
        {
          v12 = (_QWORD *)(32i64 * handleUniqueCount + name + 312);
          v13 = 16 - handleUniqueCount;
          do
          {
            *((_WORD *)v12 - 12) = 0;
            *((_DWORD *)v12 - 4) = 0;
            *(v12 - 1) = 0i64;
            *v12 = 0i64;
            v12 += 4;
            --v13;
          }
          while ( v13 );
        }
      }
    }
    v2->resourceCount = 0;
    if ( v2->heapCount )
    {
      PMem_Free((StreamerMemLoan *)&v18, "tg_buffer_counters", PMEM_STACK_GAME);
      StreamerMemLoan::~StreamerMemLoan((StreamerMemLoan *)&v18);
      for ( j = 0; j < v2->heapCount; ++j )
      {
        R_RT_DestroyHeap(v2->heaps[j]);
        v2->heaps[j].m_heapID = 0;
      }
    }
    v2->heapCount = 0;
    R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v15);
  }
}

/*
==============
R_TG_GetBlockSize
==============
*/
__int64 R_TG_GetBlockSize()
{
  return 0x10000i64;
}

/*
==============
R_TG_ReserveResourceMemory
==============
*/
void R_TG_ReserveResourceMemory(const tg::Compiler *compiler, R_TG_CreateContext *createContext, GfxTaskGraph *taskGraph)
{
  R_TG_TaskInfo *p_tasks; 
  GfxTaskGraph *v4; 
  void *v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  int v13; 
  unsigned int v14; 
  int v15; 
  bool v16; 
  int v18; 
  int v19; 
  int v20; 
  bool v21; 
  int rtFlags; 
  bool allowAliasedAllocs; 
  _BYTE *v24; 
  __int64 v25; 
  unsigned int taskSharedCount; 
  int v27; 
  unsigned int queueIndex; 
  int v29; 
  int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int ElementSizeForDataFormat; 
  unsigned int *v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int v38; 
  unsigned __int8 v39; 
  GfxPixelFormat v40; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v46; 
  unsigned int v47; 
  char v48; 
  int temporalResourceCount; 
  int v50; 
  int ResourceStateFromTypeStateAndAccess; 
  unsigned int v52; 
  unsigned int v54; 
  bool v55; 
  __int64 allocCount; 
  R_TG_Alloc *v57; 
  unsigned int v58; 
  unsigned int v59; 
  __int16 v60; 
  __int64 v61; 
  unsigned int v62; 
  __int64 v63; 
  _DWORD *v64; 
  __int64 v65; 
  int v83; 
  __int64 v84; 
  unsigned int v85; 
  unsigned int v86; 
  R_TG_AllocInfo v87; 
  __int64 v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  __int64 v92; 
  __int64 v93; 
  unsigned int *v94; 
  __int64 v95; 
  __int64 v96; 
  GfxTaskResource *v97; 
  unsigned int *v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 name; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int *v104; 
  _QWORD *v105; 
  unsigned int m_activeCount; 
  unsigned int v107; 
  __int64 v108; 
  __int64 v115; 
  unsigned int i; 
  __int64 v117; 
  R_TG_TaskInfo *v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  unsigned int heapCount; 
  int v123; 
  unsigned int v124; 
  char v125; 
  R_TG_HeapAllocatorExplicitFree *heaps; 
  __int64 v127; 
  unsigned int j; 
  __int64 v129; 
  __int64 v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned int outAlign; 
  int v134; 
  unsigned int v135; 
  unsigned int outSize[2]; 
  R_TG_AllocInfo info; 
  unsigned int *v138; 
  __int64 v139; 
  R_TG_AllocInfo v140; 
  GfxTaskGraph *v141; 
  R_TG_PoolAllocator *pool; 
  unsigned int newResourceIndices[16]; 
  unsigned int freeResourceIndices[320]; 
  tg::ResourceGlobalInfo pOut[320]; 

  p_tasks = &createContext->tasks;
  v141 = taskGraph;
  v4 = taskGraph;
  pool = &createContext->pool;
  _RSI = createContext;
  tg::Compiler::GetTaskInfo((tg::Compiler *)compiler, createContext->tasks.infos, 0x150u, &taskGraph->taskSharedCount);
  tg::Compiler::GetResourceInfo((tg::Compiler *)compiler, pOut, 0x140u, &v4->resourceCount);
  v7 = g_R_TG_taskLabels;
  info.queueFlags = -1;
  info.taskIndex = -1;
  v131 = 0;
  v4->taskLabels = (unsigned __int64 *)g_R_TG_taskLabels;
  memset_0(v7, -1, 0xA80ui64);
  v4->taskLabels[336] = 0xFFFFFFFFi64;
  v4->taskLabels[337] = 0xFFFFFFFFi64;
  v4->taskLabels[338] = 0xFFFFFFFFi64;
  v8 = 0;
  v135 = 0;
  if ( !v4->resourceCount )
    goto LABEL_134;
  do
  {
    v9 = v8;
    v10 = 264i64 * v8;
    _RDI = (char *)&pOut[0].desc + v10;
    v11 = *(unsigned int *)((char *)&pOut[0].desc.resourceFlags + v10);
    v138 = (unsigned int *)v10;
    v13 = v11 >> 12;
    v14 = v11 >> 13;
    LOBYTE(v13) = (v11 & 0x1000) != 0;
    LOBYTE(v14) = (v11 & 0x2000) != 0;
    v134 = v13;
    LODWORD(v139) = v14;
    if ( (v11 & 0x1000) != 0 && (v11 & 0x20000) == 0 )
      *((_DWORD *)_RDI + 7) *= v4->viewCount;
    v15 = *((_DWORD *)_RDI + 11);
    v16 = !*(&pOut[0].seenShaderWrite + v10);
    outSize[0] = 0;
    outAlign = 0;
    _RBX = (char *)v4 + 808 * v9;
    if ( !v16 && (v15 & 0x80000) == 0 )
      v15 |= 0x1000u;
    if ( *(_DWORD *)_RDI == 32 )
    {
      if ( v4->allowDcc && (v11 & 0x800) != 0 )
      {
        if ( (v15 & 0x1000) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 431, ASSERT_TYPE_ASSERT, "(( rtFlags & R_RT_Flag_RWView ) == 0)", (const char *)&queryFormat, "( rtFlags & R_RT_Flag_RWView ) == 0") )
            __debugbreak();
          v10 = (__int64)v138;
        }
        v18 = *((_DWORD *)_RDI + 1);
        v15 |= 8u;
      }
      else
      {
        LOWORD(v18) = v11;
        if ( v4->allowFastClear && (v11 & 0x200) != 0 )
          v15 |= 1u;
      }
      LOWORD(v11) = v18;
      if ( (v18 & 0x400) != 0 )
        v15 |= 0x8000u;
    }
    v19 = v15 | 0x800;
    if ( !*(&pOut[0].seenRopReadWrite + v10) )
      v19 = v15;
    if ( *((_DWORD *)_RDI + 10) == 4 )
    {
      if ( *(_DWORD *)_RDI != 32 || (v20 = 16385, (v19 & 0x8000) == 0) )
        v20 = 0x4000;
      v19 |= v20;
    }
    v21 = *((_DWORD *)_RDI + 5) > 1u || *((_DWORD *)_RDI + 6) > 1u;
    _RBX[137540] = v21;
    rtFlags = v19 | 0x200;
    if ( (v11 & 0x8000) == 0 )
      rtFlags = v19;
    if ( *(&pOut[0].external + v10) || (v11 & 0x1000) != 0 )
    {
      _RBX[137541] = 0;
      allowAliasedAllocs = 0;
    }
    else
    {
      _RBX[137541] = v4->allowTiledAllocs;
      allowAliasedAllocs = v4->allowAliasedAllocs;
    }
    v24 = _RBX + 137542;
    _RBX[137542] = allowAliasedAllocs;
    if ( v4->extendResourceLifetimes )
    {
      LOWORD(v25) = *(unsigned __int16 *)((char *)&pOut[0].seenCmdIndexFirst[2] + v10);
      taskSharedCount = v4->taskSharedCount;
      if ( *(unsigned __int16 *)((char *)pOut[0].seenCmdIndexFirst + v10) != (_WORD)v25 )
      {
        if ( v4->asyncCompute )
        {
          v27 = 1;
          queueIndex = p_tasks->infos[(unsigned __int16)v25].queueIndex;
          do
          {
            v29 = v27 - 1;
            v25 = (unsigned __int16)(v25 + 1);
            *(unsigned __int16 *)((char *)&pOut[0].seenCmdIndexFirst[2] + v10) = v25;
            if ( p_tasks->infos[v25].queueIndex != queueIndex )
              v29 = v27;
            v27 = v29;
          }
          while ( v29 && (unsigned int)v25 < taskSharedCount );
        }
        else
        {
          *(unsigned __int16 *)((char *)&pOut[0].seenCmdIndexFirst[2] + v10) = v25 + 1;
        }
      }
    }
    if ( *((R_RT_Handle **)_RDI + 8) == &g_R_TG_NullHandle )
    {
      outSize[0] = 0;
    }
    else
    {
      v30 = *(_DWORD *)_RDI;
      if ( *(_DWORD *)_RDI == 512 )
      {
        v31 = *((_DWORD *)_RDI + 9);
        if ( v31 )
        {
          ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(g_R_RT_bufferFmts[(unsigned __int8)v31]);
          v32 = *((_DWORD *)_RDI + 4) * *((_DWORD *)_RDI + 2) * *((_DWORD *)_RDI + 3);
        }
        else
        {
          v32 = *((_DWORD *)_RDI + 2) * *((_DWORD *)_RDI + 3);
          ElementSizeForDataFormat = *((_DWORD *)_RDI + 4);
        }
        R_RT_GetBufferSizeAlign(ElementSizeForDataFormat, v32, (R_RT_Flags)rtFlags, (bool *)_RBX + 137542, outSize, &outAlign);
      }
      else if ( v30 != 16 )
      {
        v34 = (unsigned int *)*((_QWORD *)_RDI + 9);
        v35 = v4->dynamicResolutionCount - 1;
        v36 = *((_DWORD *)_RDI + 3);
        *((_DWORD *)_RBX + 34368) = *((_DWORD *)_RDI + 2);
        *((_DWORD *)_RBX + 34369) = v36;
        if ( v34 && v35 )
        {
          v37 = v35;
          do
          {
            v38 = *v34;
            v34 += 2;
            if ( *((_DWORD *)_RBX + 34368) > v38 )
              v38 = *((_DWORD *)_RBX + 34368);
            *((_DWORD *)_RBX + 34368) = v38;
            v36 = *(v34 - 1);
            if ( *((_DWORD *)_RBX + 34369) > v36 )
              v36 = *((_DWORD *)_RBX + 34369);
            *((_DWORD *)_RBX + 34369) = v36;
            --v37;
          }
          while ( v37 );
        }
        v39 = _RDI[36];
        if ( v30 == 64 )
        {
          v40 = g_R_RT_depthStencilFmts[v39];
          switch ( v39 )
          {
            case 0u:
            case 3u:
            case 4u:
            case 5u:
            case 7u:
              break;
            case 1u:
            case 2u:
            case 6u:
              rtFlags |= 0x80u;
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 738, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled rendertarget format.") )
                __debugbreak();
              v36 = *((_DWORD *)_RBX + 34369);
              break;
          }
        }
        else
        {
          v40 = g_R_RT_renderTargetFmts[v39];
        }
        R_RT_GetImageSizeAlign(*((_DWORD *)_RBX + 34368), v36, *((_DWORD *)_RDI + 4), *((_DWORD *)_RDI + 5), *((_DWORD *)_RDI + 6), v40, *((_DWORD *)_RDI + 10), (R_RT_Flags)rtFlags, (bool *)_RBX + 137542, outSize, &outAlign);
      }
    }
    if ( !*((_DWORD *)_RDI + 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 506, ASSERT_TYPE_ASSERT, "(desc.count >= 1)", (const char *)&queryFormat, "desc.count >= 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymm1, ymmword ptr [rdi+20h]
    }
    v43 = *((_DWORD *)_RDI + 7);
    v44 = (outAlign + 0xFFFF) >> 16;
    __asm
    {
      vmovups ymmword ptr [rbx+218B0h], ymm0
      vmovups xmm0, xmmword ptr [rdi+40h]
    }
    *((_DWORD *)_RBX + 34384) = v44;
    v46 = outSize[0] + 0xFFFF;
    __asm { vmovups ymmword ptr [rbx+218D0h], ymm1 }
    v47 = HIWORD(v46);
    __asm { vmovups xmmword ptr [rbx+218F0h], xmm0 }
    *((_DWORD *)_RBX + 34359) |= rtFlags;
    v48 = v134;
    *((_DWORD *)_RBX + 34383) = v47;
    if ( v43 > 1 && v48 )
    {
      *((_DWORD *)_RBX + 34383) = v43 * v47;
      if ( v4->temporalResourceCount >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 515, ASSERT_TYPE_ASSERT, "(taskGraph.temporalResourceCount < GfxTaskGraphViewInfo::temporalResourceLimit)", (const char *)&queryFormat, "taskGraph.temporalResourceCount < GfxTaskGraphViewInfo::temporalResourceLimit") )
        __debugbreak();
      temporalResourceCount = v4->temporalResourceCount;
      v4->temporalResourceCount = temporalResourceCount + 1;
    }
    else
    {
      temporalResourceCount = -1;
    }
    *((_DWORD *)_RBX + 34516) = temporalResourceCount;
    v50 = *(_DWORD *)_RDI;
    if ( *(_DWORD *)_RDI != 16 )
    {
      if ( (v50 == 32 || v50 == 128) && (*((_DWORD *)_RDI + 10) > 1u || *((_DWORD *)_RDI + 6) > 1u) )
        ResourceStateFromTypeStateAndAccess = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(eResourceType_Texture, eResourceState_ReadOnly, 0x7D20u, (const tg::ResourceDesc *)_RDI, D3D12_RESOURCE_STATE_GENERIC_READ, 0xFFFFFFFF);
      else
        ResourceStateFromTypeStateAndAccess = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(*(tg::eResourceType *)((char *)&pOut[0].first.type + (_QWORD)v138), *(tg::eResourceState *)((char *)&pOut[0].first.state + (_QWORD)v138), *(unsigned int *)((char *)&pOut[0].first.access + (_QWORD)v138), (const tg::ResourceDesc *)(_RBX + 137392), D3D12_RESOURCE_STATE_GENERIC_READ, 0xFFFFFFFF);
      *((_DWORD *)_RBX + 34517) = ResourceStateFromTypeStateAndAccess;
    }
    v52 = outSize[0];
    *((_WORD *)_RBX + 68776) = 0;
    _R15 = _RBX + 137264;
    *((_DWORD *)_RBX + 34390) = 0;
    *((_QWORD *)_RBX + 17196) = 0i64;
    *((_QWORD *)_RBX + 17197) = 0i64;
    *((_WORD *)_RBX + 68792) = 0;
    *((_DWORD *)_RBX + 34398) = 0;
    *((_QWORD *)_RBX + 17200) = 0i64;
    *((_QWORD *)_RBX + 17201) = 0i64;
    *((_WORD *)_RBX + 68808) = 0;
    *((_DWORD *)_RBX + 34406) = 0;
    *((_QWORD *)_RBX + 17204) = 0i64;
    *((_QWORD *)_RBX + 17205) = 0i64;
    *((_WORD *)_RBX + 68824) = 0;
    *((_DWORD *)_RBX + 34414) = 0;
    *((_QWORD *)_RBX + 17208) = 0i64;
    *((_QWORD *)_RBX + 17209) = 0i64;
    *((_WORD *)_RBX + 68840) = 0;
    *((_DWORD *)_RBX + 34422) = 0;
    *((_QWORD *)_RBX + 17212) = 0i64;
    *((_QWORD *)_RBX + 17213) = 0i64;
    *((_WORD *)_RBX + 68856) = 0;
    *((_DWORD *)_RBX + 34430) = 0;
    *((_QWORD *)_RBX + 17216) = 0i64;
    *((_QWORD *)_RBX + 17217) = 0i64;
    *((_WORD *)_RBX + 68872) = 0;
    *((_DWORD *)_RBX + 34438) = 0;
    *((_QWORD *)_RBX + 17220) = 0i64;
    *((_QWORD *)_RBX + 17221) = 0i64;
    *((_WORD *)_RBX + 68888) = 0;
    *((_DWORD *)_RBX + 34446) = 0;
    *((_QWORD *)_RBX + 17224) = 0i64;
    *((_QWORD *)_RBX + 17225) = 0i64;
    *((_WORD *)_RBX + 68904) = 0;
    *((_DWORD *)_RBX + 34454) = 0;
    *((_QWORD *)_RBX + 17228) = 0i64;
    *((_QWORD *)_RBX + 17229) = 0i64;
    *((_WORD *)_RBX + 68920) = 0;
    *((_DWORD *)_RBX + 34462) = 0;
    *((_QWORD *)_RBX + 17232) = 0i64;
    *((_QWORD *)_RBX + 17233) = 0i64;
    *((_WORD *)_RBX + 68936) = 0;
    *((_DWORD *)_RBX + 34470) = 0;
    *((_QWORD *)_RBX + 17236) = 0i64;
    *((_QWORD *)_RBX + 17237) = 0i64;
    *((_WORD *)_RBX + 68952) = 0;
    *((_DWORD *)_RBX + 34478) = 0;
    *((_QWORD *)_RBX + 17240) = 0i64;
    *((_QWORD *)_RBX + 17241) = 0i64;
    *((_WORD *)_RBX + 68968) = 0;
    *((_DWORD *)_RBX + 34486) = 0;
    *((_QWORD *)_RBX + 17244) = 0i64;
    *((_QWORD *)_RBX + 17245) = 0i64;
    *((_WORD *)_RBX + 68984) = 0;
    *((_DWORD *)_RBX + 34494) = 0;
    *((_QWORD *)_RBX + 17248) = 0i64;
    *((_QWORD *)_RBX + 17249) = 0i64;
    *((_WORD *)_RBX + 69000) = 0;
    *((_DWORD *)_RBX + 34502) = 0;
    *((_QWORD *)_RBX + 17252) = 0i64;
    *((_QWORD *)_RBX + 17253) = 0i64;
    *((_WORD *)_RBX + 69016) = 0;
    *((_DWORD *)_RBX + 34510) = 0;
    *((_QWORD *)_RBX + 17256) = 0i64;
    *((_QWORD *)_RBX + 17257) = 0i64;
    if ( v52 - 1 <= 0x3FF )
    {
      *((_DWORD *)_RBX + 34374) = 0;
      v54 = *((_DWORD *)_RDI + 7) * ((v52 + 255) & 0xFFFFFF00);
      *((_DWORD *)_RBX + 34375) = -1;
      v55 = v4->allocCount <= 0x400;
      outSize[0] = v54;
      if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 532, ASSERT_TYPE_ASSERT, "(taskGraph.allocCount <= taskGraph.allocLimit)", (const char *)&queryFormat, "taskGraph.allocCount <= taskGraph.allocLimit") )
        __debugbreak();
      allocCount = v4->allocCount;
      v57 = &v4->allocs[allocCount];
      v58 = allocCount + 1;
      v59 = v131;
      v4->allocCount = v58;
      *((_QWORD *)_RBX + 17185) = v57;
      if ( v131 > 0xFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v131, "unsigned", v131) )
          __debugbreak();
        v59 = v131;
      }
      v57->offset = v59;
      v60 = outSize[0];
      v61 = *((_QWORD *)_RBX + 17185);
      if ( outSize[0] > 0xFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(outSize[0]), "unsigned", outSize[0]) )
          __debugbreak();
        v59 = v131;
      }
      *(_WORD *)(v61 + 2) = v60;
      v62 = outSize[0] + v59;
      *((_DWORD *)_RBX + 34383) = outSize[0];
      *((_DWORD *)_RBX + 34372) = 1;
      *((_DWORD *)_RBX + 34382) = 1;
      _RBX[137543] = 1;
      *v24 = 0;
      _RBX[137541] = 0;
      v131 = v62;
      goto LABEL_125;
    }
    if ( *v24 )
    {
      if ( *((_QWORD *)_RBX + 17185) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 571, ASSERT_TYPE_ASSERT, "(resource.alloc[0].pAllocs == 0)", (const char *)&queryFormat, "resource.alloc[0].pAllocs == NULL") )
        __debugbreak();
      if ( *((_DWORD *)_RBX + 34372) )
      {
        v83 = 572;
LABEL_123:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", v83, ASSERT_TYPE_ASSERT, "(resource.alloc[0].allocCount == 0)", (const char *)&queryFormat, "resource.alloc[0].allocCount == 0") )
          __debugbreak();
      }
    }
    else
    {
      if ( !(_BYTE)v139 || (v16 = v48 == 0, v63 = 2i64, !v16) )
        v63 = 1i64;
      v64 = _RBX + 137500;
      v65 = v63;
      do
      {
        *(v64 - 1) = 0;
        *v64 = -1;
        v64 += 6;
        --v65;
      }
      while ( v65 );
      _RAX = (R_RT_Handle *)*((_QWORD *)_RDI + 8);
      if ( !_RAX || _RAX == &g_R_TG_CreateHandle )
      {
        do
        {
          R_TG_Allocate(v4, &_RSI->pool, _RSI->heaps, v4->heapCount, &info, (GfxTaskResource *)(_RBX + 137264));
          --v63;
        }
        while ( v63 );
        goto LABEL_125;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+120h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+140h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+160h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+180h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+1A0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+1C0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+1E0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+200h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [r15+220h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21A70h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21A90h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21AB0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21AD0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21AF0h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21B10h], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx+21B30h], ymm0
      }
      if ( *((_QWORD *)_RBX + 17185) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 565, ASSERT_TYPE_ASSERT, "(resource.alloc[0].pAllocs == 0)", (const char *)&queryFormat, "resource.alloc[0].pAllocs == NULL") )
        __debugbreak();
      if ( *((_DWORD *)_RBX + 34372) )
      {
        v83 = 566;
        goto LABEL_123;
      }
    }
LABEL_125:
    Com_sprintf(_RBX + 137264, 0x80ui64, (const char *)&queryFormat, (char *)pOut + (_QWORD)v138);
    p_tasks = &_RSI->tasks;
    v8 = v135 + 1;
    v135 = v8;
  }
  while ( v8 < v4->resourceCount );
  if ( v131 )
  {
    v84 = v4->heapCount - 1;
    v4->smallAllocHeapIndex = v84;
    if ( _RSI->heaps[v84].m_allowAliasedAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 583, ASSERT_TYPE_ASSERT, "(createContext.heaps[taskGraph.smallAllocHeapIndex].m_allowAliasedAlloc == false)", (const char *)&queryFormat, "createContext.heaps[taskGraph.smallAllocHeapIndex].m_allowAliasedAlloc == false") )
      __debugbreak();
    if ( _RSI->heaps[v4->smallAllocHeapIndex].m_rtFlags != R_RT_HeapFlag_AllowAll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 584, ASSERT_TYPE_ASSERT, "(createContext.heaps[taskGraph.smallAllocHeapIndex].m_rtFlags == R_RT_HeapFlag_AllowAll)", (const char *)&queryFormat, "createContext.heaps[taskGraph.smallAllocHeapIndex].m_rtFlags == R_RT_HeapFlag_AllowAll") )
      __debugbreak();
    R_TG_HeapAllocatorExplicitFree::Allocate(&_RSI->heaps[v4->smallAllocHeapIndex], &info, (v131 + 0xFFFF) >> 16, 1u, &v4->smallAlloc);
  }
LABEL_134:
  v16 = v4->taskSharedCount == 0;
  v85 = 0;
  v132 = 0;
  v86 = 0;
  v134 = 0;
  if ( !v16 )
  {
    v87 = info;
    do
    {
      v88 = v86;
      v89 = 0;
      v16 = !v4->asyncCompute;
      v90 = v85;
      *(_QWORD *)outSize = 200i64 * v86;
      v135 = v85;
      v140 = v87;
      if ( !v16 )
      {
        _RSI->tasks.asyncIndexPrev[v86] = -1;
        _RSI->tasks.asyncIndexNext[v86] = -1;
        v140.queueFlags = 1 << _RSI->tasks.infos[v86].queueIndex;
        v140.taskIndex = v86;
      }
      v91 = 0;
      if ( v4->resourceCount )
      {
        do
        {
          if ( v4->resources[v91].isAliased )
          {
            if ( pOut[v91].seenCmdIndexFirst[0] == v86 )
            {
              if ( v89 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 615, ASSERT_TYPE_ASSERT, "(allocCount < newResourceLimit)", (const char *)&queryFormat, "allocCount < newResourceLimit") )
                __debugbreak();
              v92 = v89++;
              newResourceIndices[v92] = v91;
            }
            if ( pOut[v91].seenCmdIndexFirst[1] == v86 )
            {
              if ( v89 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 620, ASSERT_TYPE_ASSERT, "(allocCount < newResourceLimit)", (const char *)&queryFormat, "allocCount < newResourceLimit") )
                __debugbreak();
              v93 = v89++;
              newResourceIndices[v93] = v91;
            }
            if ( pOut[v91].seenCmdIndexLast == v86 )
            {
              freeResourceIndices[v132] = v91;
              v85 = ++v132;
            }
            else
            {
              v85 = v132;
            }
          }
          ++v91;
        }
        while ( v91 < v4->resourceCount );
        v87 = info;
        _RSI = (R_TG_CreateContext *)pool;
        outAlign = v89;
        if ( v89 )
        {
          v94 = newResourceIndices;
          v95 = v89;
          do
          {
            v96 = *v94;
            v97 = &v4->resources[v96];
            v97->alloc[v4->resources[v96].allocCount].allocTaskIndex = v86;
            R_TG_Allocate(v4, &_RSI->pool, _RSI->heaps, v4->heapCount, &v140, v97);
            ++v94;
            --v95;
          }
          while ( v95 );
          v87 = info;
          v85 = v132;
        }
        v90 = v135;
        if ( v135 < v85 )
        {
          v98 = &freeResourceIndices[v135];
          v138 = v98;
          v99 = v85 - v135;
          v139 = v99;
          do
          {
            v100 = *v98;
            name = (__int64)v4->resources[v100].name;
            if ( v4->resources[v100].allocSize )
            {
              v102 = 0;
              if ( *(_DWORD *)(name + 264) )
              {
                do
                {
                  if ( _RSI != (R_TG_CreateContext *)-36880i64 )
                  {
                    v103 = 0;
                    v104 = (unsigned int *)(name + 24i64 * v102 + 224);
                    if ( *v104 )
                    {
                      do
                      {
                        v105 = (_QWORD *)(name + 8 * (3i64 * v102 + 27));
                        R_TG_HeapAllocatorExplicitFree::Free(&_RSI->heaps[*(unsigned __int16 *)(*v105 + 6i64 * v103 + 4)], &v140, (const R_TG_Alloc *)(*v105 + 6i64 * v103));
                        ++v103;
                      }
                      while ( v103 < *v104 );
                    }
                  }
                  m_activeCount = _RSI->pool.m_activeCount;
                  v107 = 0;
                  if ( m_activeCount )
                  {
                    while ( 1 )
                    {
                      v108 = v107;
                      if ( _RSI->pool.m_active[v107].index == *(_DWORD *)(name + 24i64 * v102 + 228) )
                        break;
                      if ( ++v107 >= m_activeCount )
                        goto LABEL_170;
                    }
                    _RAX = 9i64 * v107;
                    __asm { vmovups ymm0, ymmword ptr [rsi+rax*4] }
                    _RDX = &_RSI->pool.m_active[v108];
                    _RCX = _RSI->pool.m_freeCount;
                    __asm { vmovups ymmword ptr [rsi+rcx*4+4804h], ymm0 }
                    _RSI->pool.m_free[_RCX].multisample = _RDX->multisample;
                    _RCX = _RSI->pool.m_activeCount - 1;
                    __asm
                    {
                      vmovups ymm0, ymmword ptr [rsi+rcx*4]
                      vmovups ymmword ptr [rdx], ymm0
                    }
                    _RDX->multisample = _RSI->pool.m_active[_RCX].multisample;
                    v115 = _RSI->pool.m_activeCount - 1;
                    *(_QWORD *)&_RSI->pool.m_active[v115].index = 0i64;
                    *(_QWORD *)&_RSI->pool.m_active[v115].width = 0i64;
                    *(_QWORD *)&_RSI->pool.m_active[v115].depth = 0i64;
                    *(_QWORD *)&_RSI->pool.m_active[v115].levels = 0i64;
                    _RSI->pool.m_active[v115].multisample = 0;
                    --_RSI->pool.m_activeCount;
                    ++_RSI->pool.m_freeCount;
                  }
LABEL_170:
                  ++v102;
                }
                while ( v102 < *(_DWORD *)(name + 264) );
                v86 = v134;
                v98 = v138;
                v99 = v139;
              }
              v4 = v141;
            }
            for ( i = 0; i < *(_DWORD *)(name + 264); *(_DWORD *)(name + 24 * v117 + 236) = v86 )
              v117 = i++;
            ++v98;
            --v99;
            v138 = v98;
            v139 = v99;
          }
          while ( v99 );
          v87 = info;
          v89 = outAlign;
          v90 = v135;
        }
        v88 = v86;
      }
      v118 = &_RSI->tasks;
      if ( v4->allowAliasedAllocs )
        R_TG_Barrier_GetResourceAliasBits(v4, newResourceIndices, v89, freeResourceIndices, v90, v86, &_RSI->tasks);
      v119 = *(_QWORD *)outSize;
      if ( *(unsigned __int16 *)((char *)&_RSI->tasks.infos[0].asyncTaskIndexPrev + *(_QWORD *)outSize) != 0xFFFF )
      {
        v120 = *(unsigned __int16 *)((char *)&v118->infos[0].asyncTaskIndexPrev + *(_QWORD *)outSize);
        if ( v118->infos[v120].conditionFlag )
        {
          while ( 1 )
          {
            v121 = (unsigned __int16)v120;
            if ( v118->infos[v121].queueIndex != *(unsigned int *)((char *)&v118->infos[0].queueIndex + *(_QWORD *)outSize) && !v118->infos[v121].conditionFlag )
              break;
            if ( !(_WORD)v120 )
              goto LABEL_188;
            LOWORD(v120) = v120 - 1;
          }
          if ( (_WORD)v120 )
          {
            v118->asyncIndexPrev[v88] = v120;
            v118->asyncIndexNext[(unsigned __int16)v120] = v86;
          }
        }
LABEL_188:
        heapCount = v4->heapCount;
        v123 = *(unsigned int *)((char *)&_RSI->tasks.infos[0].queueIndex + v119) ^ 1;
        v124 = *(unsigned __int16 *)((char *)&_RSI->tasks.infos[0].asyncTaskIndexPrev + v119);
        v125 = 1 << v123;
        if ( heapCount )
        {
          heaps = _RSI->heaps;
          v127 = heapCount;
          do
          {
            for ( j = heaps->m_freeBlockIndex; j != -1; j = heaps->m_blocks[v129].nextBlockIndex )
            {
              v129 = j;
              v130 = j;
              if ( heaps->m_blocks[v130].taskIndex <= v124 && heaps->m_blocks[v130].queueFlags == v125 )
              {
                heaps->m_blocks[v130].taskIndex = -1;
                heaps->m_blocks[v130].queueFlags = -1;
              }
            }
            ++heaps;
            --v127;
          }
          while ( v127 );
        }
      }
      v85 = v132;
      v134 = ++v86;
    }
    while ( v86 < v4->taskSharedCount );
  }
}

/*
==============
R_TG_TimerAdd
==============
*/
unsigned __int64 R_TG_TimerAdd(const char *pFuncName, unsigned __int64 *prev)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  v4 = Sys_Microseconds();
  v5 = v4 - *prev;
  *prev = v4;
  Com_Printf(8, "%s duration: %lu us\n", pFuncName, v5);
  return v5;
}

/*
==============
R_TG_TimerStart
==============
*/

unsigned __int64 __fastcall R_TG_TimerStart()
{
  return Sys_Microseconds();
}

/*
==============
WriteBufferV
==============
*/
char *WriteBufferV(char *buffer, const unsigned __int64 bufferLimit, unsigned __int64 *bufferUsed, const char *format, ...)
{
  char *v6; 
  __int64 v7; 
  va_list ap; 

  va_start(ap, format);
  v6 = &buffer[*bufferUsed];
  Com_vsprintf(v6, bufferLimit - *bufferUsed, format, ap);
  v7 = -1i64;
  do
    ++v7;
  while ( v6[v7] );
  *bufferUsed += v7 + 1;
  if ( *bufferUsed >= bufferLimit - 512 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile.cpp", 163, ASSERT_TYPE_ASSERT, "(*bufferUsed < ( bufferLimit - 512 ))", (const char *)&queryFormat, "*bufferUsed < ( bufferLimit - 512 )", 0i64) )
    __debugbreak();
  return v6;
}

