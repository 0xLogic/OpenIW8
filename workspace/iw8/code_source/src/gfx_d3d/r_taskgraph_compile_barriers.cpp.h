/*
==============
R_TG_Barrier_BuildDecompressions
==============
*/
__int64 R_TG_Barrier_BuildDecompressions(const GfxTaskGraph *taskGraph, const R_TG_Barrier *barriers, unsigned int queueIndex, GfxTaskInfoPacked *taskInfo, unsigned int *resourceCompressionMasks)
{
  unsigned int v5; 
  __int64 v6; 
  unsigned int v8; 
  const GfxTaskGraph *v9; 
  const R_TG_Barrier *v10; 
  D3D12_RESOURCE_STATES stateBefore; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  R_TG_BarrierType type; 
  int index; 
  __int64 v23; 
  unsigned __int16 v24; 
  unsigned int subresource; 
  int v26; 
  __int64 v27; 
  unsigned int v28; 
  const R_TG_Barrier *v31; 

  v31 = barriers;
  v5 = 0;
  *(_WORD *)&taskInfo->barrierDecompressBeginFirst = -1;
  v6 = 0i64;
  v8 = queueIndex;
  v9 = taskGraph;
  if ( taskInfo->barrierEndOffset )
  {
    while ( 1 )
    {
      v10 = &barriers[v6];
      stateBefore = v10->stateBefore;
      if ( (v10->stateBefore & 0x400000) == 0 || (v10->stateAfter & 0x400000) != 0 )
        v12 = 0;
      else
        v12 = 0x400000;
      v13 = (stateBefore & 0x800000) == 0 || (v10->stateAfter & 0x800000) != 0 ? 0 : 0x800000;
      v14 = v13 | v12;
      if ( (stateBefore & 0x400000) == 0 || (v10->stateAfter & 0x400000) != 0 )
        v15 = 0;
      else
        v15 = 0x400000;
      v16 = v15 | v14;
      if ( (stateBefore & 0x1000000) == 0 || (v10->stateAfter & 0x1000000) != 0 )
        v17 = 0;
      else
        v17 = 0x1000000;
      v18 = v17 | v16;
      if ( (stateBefore & 0x2000000) == 0 || (v10->stateAfter & 0x2000000) != 0 )
        v19 = 0;
      else
        v19 = 0x2000000;
      v20 = v19 | v18;
      if ( v20 )
        break;
LABEL_59:
      v6 = (unsigned int)(v6 + 1);
      barriers = v31;
      if ( (unsigned int)v6 >= taskInfo->barrierEndOffset )
        return v5;
    }
    type = v10->type;
    if ( type )
    {
      if ( type == R_TG_BarrierType_Depth )
        index = taskInfo->rtCount + taskInfo->attachmentCount - 1;
      else
        index = v10->index;
    }
    else
    {
      index = taskInfo->attachmentCount + v10->index;
    }
    v23 = 3i64 * ((unsigned int)taskInfo->handleOffset + index) + 199158;
    v24 = *((_WORD *)&v9->scriptName + v23);
    if ( (*((_BYTE *)&v9->scriptName + 2 * v23 + 5) & 0x18) != 0 )
    {
      LOBYTE(subresource) = (*((unsigned __int8 *)&v9->scriptName + 2 * v23 + 3) + (unsigned int)*((unsigned __int8 *)&v9->scriptName + 2 * v23 + 4)) % v9->resources[v24].desc.count;
    }
    else
    {
      subresource = v10->subresource;
      if ( subresource == -1 )
      {
        v26 = -1;
        goto LABEL_31;
      }
    }
    v26 = 1 << subresource;
LABEL_31:
    if ( v9->limitDecompress )
    {
      v27 = v24;
      v28 = resourceCompressionMasks[v27];
      if ( v9->resources[v24].hasSubresources )
      {
        if ( (v28 & v26) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 355, ASSERT_TYPE_ASSERT, "(resourceCompressionMasks[resourceIndex] & subresourceAccess)", (const char *)&queryFormat, "resourceCompressionMasks[resourceIndex] & subresourceAccess") )
          __debugbreak();
        resourceCompressionMasks[v27] &= ~v26;
      }
      else
      {
        if ( (v28 & v20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 361, ASSERT_TYPE_ASSERT, "(resourceCompressionMasks[resourceIndex] & barrierDecompress)", (const char *)&queryFormat, "resourceCompressionMasks[resourceIndex] & barrierDecompress") )
          __debugbreak();
        resourceCompressionMasks[v27] &= ~v20 | 0x3000000;
      }
      v8 = queueIndex;
    }
    ++v5;
    if ( v10->type != R_TG_BarrierType_Attachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 366, ASSERT_TYPE_ASSERT, "(barrier.type == R_TG_BarrierType_Attachment)", "%s\n\tRequiring decompression for color/depth targets makes no sense.", "barrier.type == R_TG_BarrierType_Attachment") )
      __debugbreak();
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 367, ASSERT_TYPE_ASSERT, "(queueIndex == 0)", "%s\n\tDecompressions must happen on graphics queue", "queueIndex == 0") )
      __debugbreak();
    if ( taskInfo->barrierDecompressBeginFirst == 0xFF )
    {
      if ( (unsigned int)v6 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v6, "unsigned", (unsigned int)v6) )
        __debugbreak();
      taskInfo->barrierDecompressBeginFirst = v6;
    }
    if ( (unsigned int)v6 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v6, "unsigned", (unsigned int)v6) )
      __debugbreak();
    v9 = taskGraph;
    taskInfo->barrierDecompressBeginLast = v6;
    goto LABEL_59;
  }
  return v5;
}

/*
==============
R_TG_Barrier_BuildForEnd
==============
*/
void R_TG_Barrier_BuildForEnd(const tg::Compiler *compiler, R_TG_TaskInfo *tasks, const ntl::bitset<320,0,unsigned __int64> *pingPongBits, const unsigned int *resourceCompressionMasks, unsigned int conditionDisable, GfxTaskGraph *taskGraph, GfxTaskGraph::Permutation *permutation, unsigned int taskBarrierCountBegin)
{
  GfxTaskGraph::Permutation *v8; 
  R_TG_TaskInfo *v9; 
  unsigned int ResourceInfoCount; 
  unsigned int v11; 
  unsigned __int64 v13; 
  bool v14; 
  unsigned int v16; 
  const tg::ResourceDesc *v17; 
  bool v18; 
  bool v19; 
  unsigned __int64 v20; 
  unsigned __int64 *v21; 
  BOOL v22; 
  __int64 v23; 
  R_TG_Barrier *v24; 
  D3D12_RESOURCE_STATES ResourceStateFromTypeStateAndAccess; 
  R_TG_Attachment *v26; 
  unsigned int v27; 
  __int64 initialState; 
  unsigned int inValue[2]; 
  unsigned int v30; 
  const unsigned int *v31; 
  unsigned __int64 v32; 
  const ntl::bitset<320,0,unsigned __int64> *v33; 
  tg::Compiler *v34; 
  R_TG_TaskInfo *v35; 
  GfxTaskGraph::Permutation *v36; 
  R_RT_Handle v37; 
  tg::ResourceGlobalInfo pOut; 

  v8 = permutation;
  v9 = tasks;
  v36 = permutation;
  v31 = resourceCompressionMasks;
  v33 = pingPongBits;
  v35 = tasks;
  v34 = (tg::Compiler *)compiler;
  ResourceInfoCount = tg::Compiler::GetResourceInfoCount((tg::Compiler *)compiler);
  v11 = 0;
  permutation->barrierCount = taskGraph->taskBarrierCount - taskBarrierCountBegin;
  permutation->endBarrierBegin = taskGraph->endBarrierCount;
  v30 = ResourceInfoCount;
  if ( ResourceInfoCount )
  {
    _RBP = &taskGraph->resources[0].desc.resourceFlags;
    v13 = 0i64;
    v32 = 0i64;
    do
    {
      v14 = _RBP[11] == 0;
      __asm { vmovups ymm0, ymmword ptr [rbp+9Ch] }
      v16 = _RBP[168];
      __asm { vmovups ymmword ptr [rsp+1F8h+var_180.m_surfaceID], ymm0 }
      LODWORD(initialState) = v16;
      if ( !v14 || (conditionDisable & _RBP[12]) == 0 )
      {
        v17 = (const tg::ResourceDesc *)(_RBP - 1);
        if ( *(_RBP - 1) != 16 )
        {
          if ( v37.m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v37);
            if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x40) == 0 )
            {
              v18 = (*_RBP & 0x2000) != 0 && (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 4) != 0;
              v19 = (*_RBP & 0x1000) != 0 && (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 4) != 0;
              *(_QWORD *)inValue = -1i64;
              if ( v18 )
              {
                if ( v13 >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits", initialState, *(_QWORD *)inValue) )
                  __debugbreak();
                v20 = 0x8000000000000000ui64 >> (v13 & 0x3F);
                v21 = &v33->m_data[v13 >> 6];
                v22 = (v20 & *v21) != 0;
                inValue[0] = v22;
                if ( !v19 )
                {
                  if ( v11 >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                    __debugbreak();
                  v22 = (v20 & *v21) == 0;
                }
                v17 = (const tg::ResourceDesc *)(_RBP - 1);
                inValue[1] = v22;
              }
              v23 = 0i64;
              if ( _RBP[6] )
              {
                do
                {
                  tg::Compiler::GetResourceInfo(v34, v11, v23, conditionDisable, &pOut);
                  if ( pOut.last.subresourceIndex != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 275, ASSERT_TYPE_ASSERT, "(resInfo.last.subresourceIndex == R_TG_Attachment::allSubresources)", (const char *)&queryFormat, "resInfo.last.subresourceIndex == R_TG_Attachment::allSubresources") )
                    __debugbreak();
                  if ( taskGraph->endBarrierCount >= 0x2800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 276, ASSERT_TYPE_ASSERT, "(taskGraph.endBarrierCount < taskGraph.endBarrierLimit)", (const char *)&queryFormat, "taskGraph.endBarrierCount < taskGraph.endBarrierLimit") )
                    __debugbreak();
                  v24 = &taskGraph->endBarriers[taskGraph->endBarrierCount];
                  v24->stateBefore = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(pOut.last.type, pOut.last.state, pOut.last.access, v17, (const D3D12_RESOURCE_STATES)initialState, *v31);
                  ResourceStateFromTypeStateAndAccess = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(eResourceType_Unknown, eResourceState_Initial, 0, v17, (const D3D12_RESOURCE_STATES)initialState, 0xFFFFFFFF);
                  v24->stateAfter = ResourceStateFromTypeStateAndAccess;
                  if ( v24->stateBefore != ResourceStateFromTypeStateAndAccess )
                  {
                    v26 = &taskGraph->endBarrierAttachments[taskGraph->endBarrierCount];
                    truncate_store<unsigned short,unsigned int>(&v26->resourceIndex, v11);
                    v26->subresourceIndex = -1;
                    v26->flags = R_TG_AttachmentFlag_EndFrame;
                    if ( v18 )
                    {
                      v27 = inValue[v23];
                      v26->flags = R_TG_AttachmentFlag_PingPong|R_TG_AttachmentFlag_EndFrame;
                      truncate_store<unsigned char,unsigned int>(&v26->pingPongIndex, v27);
                    }
                    if ( v19 )
                    {
                      v26->flags |= 8u;
                      truncate_store<unsigned char,unsigned int>(&v26->temporalIndex, v23);
                    }
                    v24->subresource = -1;
                    v17 = (const tg::ResourceDesc *)(_RBP - 1);
                    v24->flag = taskGraph->allowSplitBarriers ? D3D12_RESOURCE_BARRIER_FLAG_END_ONLY : D3D12_RESOURCE_BARRIER_FLAG_NONE;
                    ++taskGraph->endBarrierCount;
                  }
                  v23 = (unsigned int)(v23 + 1);
                }
                while ( (unsigned int)v23 < _RBP[6] );
                v13 = v32;
              }
            }
          }
          else if ( v37.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v37.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", initialState) )
          {
            __debugbreak();
          }
        }
      }
      ++v31;
      ++v13;
      ++v11;
      v32 = v13;
      _RBP += 202;
    }
    while ( v11 < v30 );
    v9 = v35;
    v8 = v36;
  }
  v8->endBarrierEnd = taskGraph->endBarrierCount;
  *(_QWORD *)v9->lastAliasBarrier = 0i64;
  *(_QWORD *)v9->lastQueueSync = 0i64;
}

/*
==============
R_TG_Barrier_BuildForTask
==============
*/
void R_TG_Barrier_BuildForTask(const tg::Compiler *compiler, const R_TG_TaskInfo *tasks, unsigned int conditionDisable, GfxTaskGraph *taskGraph, GfxTaskGraph::Permutation *permutation, GfxTaskInfoPacked *taskInfo, unsigned int taskSharedIndex, const tg::AttachmentInfo *pAttachmentInfo, unsigned int attachmentCount, const unsigned int *resourceAccessIndices, unsigned int taskPackedIndex, unsigned int *resourceCompressionMasks)
{
  GfxTaskInfoPacked *v12; 
  __int64 taskBarrierCount; 
  unsigned int v16; 
  bool allowSplitBarriers; 
  bool v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  __int64 queueIndex; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 *v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int16 *p_taskDependencyAsyncPrevIndex; 
  unsigned __int16 v32; 
  unsigned __int16 *p_taskDependencyAsyncNextIndex; 
  unsigned __int16 v34; 
  unsigned __int8 barrierBatchCount; 
  unsigned __int16 taskDependencyAsyncPrevIndex; 
  unsigned int *v37; 
  int v38; 
  unsigned int inValue; 
  D3D12_RESOURCE_BARRIER_FLAGS flag; 
  R_TG_Barrier *barriers; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int16 taskIndex; 

  v12 = taskInfo;
  if ( taskGraph->taskBarrierCount + 64 >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 536, ASSERT_TYPE_ASSERT, "(taskGraph.taskBarrierCount + 64 < taskGraph.taskBarrierLimit)", (const char *)&queryFormat, "taskGraph.taskBarrierCount + 64 < taskGraph.taskBarrierLimit") )
    __debugbreak();
  taskBarrierCount = taskGraph->taskBarrierCount;
  v16 = 0;
  inValue = 0;
  taskIndex = -1;
  barriers = &taskGraph->taskBarriers[taskBarrierCount];
  allowSplitBarriers = taskGraph->allowSplitBarriers;
  *(_QWORD *)&taskInfo->taskDependencyAsyncPrevIndex = -1i64;
  flag = allowSplitBarriers ? D3D12_RESOURCE_BARRIER_FLAG_END_ONLY : D3D12_RESOURCE_BARRIER_FLAG_NONE;
  if ( taskGraph->allowAliasedAllocs )
  {
    v18 = !taskGraph->asyncCompute;
    v19 = 0;
    v42 = 0i64;
    v20 = tasks->aliasCounts[taskSharedIndex];
    v21 = tasks->aliasOffsets[taskSharedIndex];
    queueIndex = taskGraph->taskShared[taskSharedIndex].queueIndex;
    v23 = !v18 + 1;
    v43 = (__int64)taskGraph + 40 * taskSharedIndex;
    if ( v20 )
    {
      do
      {
        v24 = resourceAccessIndices[tasks->aliasIndices[v19 + v21]];
        v25 = taskGraph->taskShared[taskGraph->tasksPacked[v24].taskIndex].queueIndex;
        if ( *((_DWORD *)&v42 + v25) > (unsigned int)v24 )
          LODWORD(v24) = *((_DWORD *)&v42 + v25);
        ++v19;
        *((_DWORD *)&v42 + v25) = v24;
      }
      while ( v19 < v20 );
    }
    v26 = &v42;
    do
    {
      v27 = *(unsigned int *)v26;
      if ( (_DWORD)v27 && v16 == (_DWORD)queueIndex && (unsigned int)v27 >= tasks->lastAliasBarrier[queueIndex] )
      {
        taskIndex = taskGraph->tasksPacked[v27].taskIndex;
        if ( taskGraph->taskShared[taskIndex].queueIndex != (_DWORD)queueIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 518, ASSERT_TYPE_ASSERT, "(taskGraph.taskShared[lastAliasSharedIndex].queueIndex == queueIndex)", (const char *)&queryFormat, "taskGraph.taskShared[lastAliasSharedIndex].queueIndex == queueIndex") )
          __debugbreak();
        if ( !*(_DWORD *)(v43 + 1598020) )
          tasks->lastAliasBarrier[queueIndex] = taskPackedIndex;
      }
      ++v16;
      v26 = (__int64 *)((char *)v26 + 4);
    }
    while ( v16 < v23 );
    v12 = taskInfo;
  }
  R_TG_Barrier_BuildTransitions(compiler, taskGraph, taskSharedIndex, pAttachmentInfo, attachmentCount, resourceCompressionMasks, conditionDisable, eAttachmentState_Prev, eAttachmentState_Current, flag, barriers, &inValue, &v12->taskDependencyPrevIndex, &v12->taskDependencyAsyncPrevIndex);
  v28 = inValue;
  v29 = inValue;
  if ( taskGraph->allowSplitBarriers || taskGraph->asyncCompute )
  {
    v30 = taskSharedIndex;
    R_TG_Barrier_BuildTransitions(compiler, taskGraph, taskSharedIndex, pAttachmentInfo, attachmentCount, resourceCompressionMasks, conditionDisable, eAttachmentState_Current, eAttachmentState_Next, D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY, barriers, &inValue, &v12->taskDependencyNextIndex, &v12->taskDependencyAsyncNextIndex);
    v28 = inValue;
  }
  else
  {
    v30 = taskSharedIndex;
  }
  p_taskDependencyAsyncPrevIndex = &v12->taskDependencyAsyncPrevIndex;
  if ( taskGraph->asyncCompute )
  {
    if ( *p_taskDependencyAsyncPrevIndex == 0xFFFF )
    {
      v32 = tasks->asyncIndexPrev[v30];
      if ( v32 != 0xFFFF )
        *p_taskDependencyAsyncPrevIndex = v32;
    }
    p_taskDependencyAsyncNextIndex = &v12->taskDependencyAsyncNextIndex;
    if ( v12->taskDependencyAsyncNextIndex == 0xFFFF )
    {
      v34 = tasks->asyncIndexNext[v30];
      if ( v34 != 0xFFFF )
        *p_taskDependencyAsyncNextIndex = v34;
    }
  }
  else
  {
    p_taskDependencyAsyncNextIndex = &v12->taskDependencyAsyncNextIndex;
  }
  if ( v12->taskIndex == *p_taskDependencyAsyncPrevIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 568, ASSERT_TYPE_ASSERT, "(taskInfo.taskIndex != taskInfo.taskDependencyAsyncPrevIndex)", (const char *)&queryFormat, "taskInfo.taskIndex != taskInfo.taskDependencyAsyncPrevIndex") )
    __debugbreak();
  if ( v12->taskIndex == *p_taskDependencyAsyncNextIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 569, ASSERT_TYPE_ASSERT, "(taskInfo.taskIndex != taskInfo.taskDependencyAsyncNextIndex)", (const char *)&queryFormat, "taskInfo.taskIndex != taskInfo.taskDependencyAsyncNextIndex") )
    __debugbreak();
  if ( v12->taskIndex == v12->taskDependencyPrevIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 570, ASSERT_TYPE_ASSERT, "(taskInfo.taskIndex != taskInfo.taskDependencyPrevIndex)", (const char *)&queryFormat, "taskInfo.taskIndex != taskInfo.taskDependencyPrevIndex") )
    __debugbreak();
  if ( v12->taskIndex == v12->taskDependencyNextIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 571, ASSERT_TYPE_ASSERT, "(taskInfo.taskIndex != taskInfo.taskDependencyNextIndex)", (const char *)&queryFormat, "taskInfo.taskIndex != taskInfo.taskDependencyNextIndex") )
    __debugbreak();
  if ( v28 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 572, ASSERT_TYPE_ASSERT, "(barrierCount < 64)", (const char *)&queryFormat, "barrierCount < 64") )
    __debugbreak();
  v12->taskDependencyAliasing = taskIndex;
  truncate_store<unsigned short,unsigned int>(&v12->barrierOffset, taskGraph->taskBarrierCount);
  truncate_store<unsigned char,unsigned int>(&v12->barrierEndOffset, v29);
  truncate_store<unsigned char,unsigned int>(&v12->barrierCount, v28);
  if ( v12->barrierCount )
  {
    v12->barrierBatchCount = 1;
    barrierBatchCount = 1;
  }
  else
  {
    barrierBatchCount = v12->barrierBatchCount;
  }
  if ( taskIndex != 0xFFFF )
  {
    ++permutation->barrierAliasingCount;
    barrierBatchCount = 1;
    v12->barrierBatchCount = 1;
  }
  permutation->barrierBatchCount += barrierBatchCount;
  taskDependencyAsyncPrevIndex = v12->taskDependencyAsyncPrevIndex;
  if ( taskDependencyAsyncPrevIndex != 0xFFFF )
  {
    v37 = &tasks->lastQueueSync[taskGraph->taskShared[taskSharedIndex].queueIndex];
    v38 = *v37;
    if ( taskDependencyAsyncPrevIndex > (int)*v37 )
      v38 = taskDependencyAsyncPrevIndex;
    *v37 = v38;
  }
  taskGraph->taskBarrierCount += v28;
  permutation->barrierDecompressCount += R_TG_Barrier_BuildDecompressions(taskGraph, barriers, taskGraph->taskShared[taskSharedIndex].queueIndex, v12, resourceCompressionMasks);
}

/*
==============
R_TG_Barrier_BuildFromAttachmentInfo
==============
*/
void R_TG_Barrier_BuildFromAttachmentInfo(const tg::AttachmentState *before, const tg::AttachmentState *after, const tg::ResourceDesc *desc, D3D12_RESOURCE_BARRIER_FLAGS flag, const D3D12_RESOURCE_STATES initialState, const unsigned int compressMask, R_TG_BarrierType type, unsigned int index, R_TG_Barrier *barriers, unsigned int *barrierCount)
{
  D3D12_RESOURCE_STATES stateAfter; 
  R_TG_Barrier *v15; 
  unsigned __int8 subresourceIndex; 
  unsigned int v17; 

  barriers[*barrierCount].stateBefore = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(before->type, before->state, before->access, desc, initialState, compressMask);
  barriers[*barrierCount].stateAfter = R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(after->type, after->state, after->access, desc, initialState, compressMask);
  stateAfter = barriers[*barrierCount].stateAfter;
  v15 = &barriers[*barrierCount];
  if ( __PAIR64__(stateAfter, v15->stateBefore) != 0x800000008i64 || before->state == eResourceState_Initial || after->state == eResourceState_Initial || (flag & 0xFFFFFFFD) != 0 )
  {
    if ( v15->stateBefore == stateAfter )
      return;
  }
  else
  {
    flag = D3D12_RESOURCE_BARRIER_FLAG_NONE;
  }
  v15->type = type;
  truncate_store<unsigned char,unsigned int>(&barriers[*barrierCount].index, index);
  subresourceIndex = after->subresourceIndex;
  v17 = -1;
  if ( subresourceIndex > before->subresourceIndex )
    subresourceIndex = before->subresourceIndex;
  if ( subresourceIndex != 0xFF )
    v17 = subresourceIndex;
  barriers[*barrierCount].subresource = v17;
  if ( *(_QWORD *)&before->type == 0x100000000i64 )
    barriers[*barrierCount].flag = D3D12_RESOURCE_BARRIER_FLAG_NONE;
  else
    barriers[*barrierCount].flag = flag;
  ++*barrierCount;
}

/*
==============
R_TG_Barrier_BuildTransitions
==============
*/
void R_TG_Barrier_BuildTransitions(const tg::Compiler *compiler, const GfxTaskGraph *taskGraph, unsigned int taskSharedIndex, const tg::AttachmentInfo *pAttachmentInfo, unsigned int attachmentCount, const unsigned int *resourceCompressionMasks, unsigned int conditionDisable, tg::eAttachmentState before, tg::eAttachmentState after, const D3D12_RESOURCE_BARRIER_FLAGS flag, R_TG_Barrier *taskBarriers, unsigned int *taskBarrierCount, unsigned __int16 *taskDependencyIndex, unsigned __int16 *taskDependencyAsyncIndex)
{
  unsigned int v14; 
  const GfxTaskGraph *v16; 
  D3D12_RESOURCE_BARRIER_FLAGS v17; 
  int v18; 
  unsigned int v19; 
  tg::eAttachmentState v20; 
  D3D12_RESOURCE_BARRIER_FLAGS v21; 
  tg::eResourceType type; 
  char *v23; 
  unsigned __int16 asyncTaskIndexNext; 
  D3D12_RESOURCE_STATES initialState; 
  unsigned int resourceIndex; 
  unsigned int v27; 
  char *v28; 
  char *v29; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  unsigned int index; 
  unsigned int v33; 
  unsigned int v34; 

  v14 = 0;
  v34 = 0;
  v16 = taskGraph;
  if ( attachmentCount )
  {
    v17 = flag;
    v18 = -1;
    v19 = conditionDisable;
    v20 = after;
    v33 = -1;
    do
    {
      v21 = v17;
      type = pAttachmentInfo->state[0].type;
      v23 = (char *)v16 + 808 * pAttachmentInfo->resourceIndex;
      if ( type == eResourceType_Texture || type == eResourceType_Buffer )
        v33 = v18 + 1;
      if ( !*((_DWORD *)v23 + 34360) && (v19 & *((_DWORD *)v23 + 34361)) != 0 )
        goto LABEL_39;
      if ( v20 == eAttachmentState_Next )
        asyncTaskIndexNext = pAttachmentInfo->asyncTaskIndexNext;
      else
        asyncTaskIndexNext = pAttachmentInfo->asyncTaskIndexPrev;
      if ( asyncTaskIndexNext != 0xFFFF )
      {
        if ( *taskDependencyAsyncIndex != 0xFFFF && *taskDependencyAsyncIndex > asyncTaskIndexNext )
          asyncTaskIndexNext = *taskDependencyAsyncIndex;
        *taskDependencyAsyncIndex = asyncTaskIndexNext;
      }
      if ( !v16->allowSplitBarriers )
      {
        if ( v17 == D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY )
          goto LABEL_39;
        v21 = D3D12_RESOURCE_BARRIER_FLAG_NONE;
      }
      if ( type != eResourceType_Custom )
      {
        if ( R_RT_Handle::IsValid((R_RT_Handle *)(v23 + 137552)) )
        {
          initialState = *((_DWORD *)v23 + 34517);
          resourceIndex = pAttachmentInfo->resourceIndex;
          v27 = *taskBarrierCount;
          v28 = (char *)pAttachmentInfo + 20 * v20;
          v29 = (char *)pAttachmentInfo + 20 * before;
          if ( type == eResourceType_ColorTarget )
          {
            index = v34++;
            R_TG_Barrier_BuildFromAttachmentInfo_0(compiler, taskSharedIndex, v14, conditionDisable, (const tg::AttachmentState *)(v29 + 16), (const tg::AttachmentState *)(v28 + 16), resourceIndex, (const tg::ResourceDesc *)(v23 + 137392), resourceCompressionMasks, v21, initialState, R_TG_BarrierType_Color, index, taskBarriers, taskBarrierCount);
          }
          else if ( type == eResourceType_DepthTarget )
          {
            R_TG_Barrier_BuildFromAttachmentInfo_0(compiler, taskSharedIndex, v14, conditionDisable, (const tg::AttachmentState *)(v29 + 16), (const tg::AttachmentState *)(v28 + 16), resourceIndex, (const tg::ResourceDesc *)(v23 + 137392), resourceCompressionMasks, v21, initialState, R_TG_BarrierType_Depth, 0, taskBarriers, taskBarrierCount);
          }
          else
          {
            R_TG_Barrier_BuildFromAttachmentInfo_0(compiler, taskSharedIndex, v14, conditionDisable, (const tg::AttachmentState *)(v29 + 16), (const tg::AttachmentState *)(v28 + 16), resourceIndex, (const tg::ResourceDesc *)(v23 + 137392), resourceCompressionMasks, v21, initialState, R_TG_BarrierType_Attachment, v33, taskBarriers, taskBarrierCount);
          }
          v17 = flag;
          if ( *taskBarrierCount != v27 )
          {
            v30 = flag == D3D12_RESOURCE_BARRIER_FLAG_BEGIN_ONLY ? *((_WORD *)v28 + 14) : *((_WORD *)v29 + 14);
            if ( v30 != 0xFFFF )
            {
              v19 = conditionDisable;
              v16 = taskGraph;
              v20 = after;
              v31 = *taskDependencyIndex;
              if ( *taskDependencyIndex == 0xFFFF )
              {
                *taskDependencyIndex = v30;
                v17 = flag;
              }
              else
              {
                if ( v30 > v31 )
                  v31 = v30;
                *taskDependencyIndex = v31;
                v17 = flag;
              }
              goto LABEL_39;
            }
          }
          v20 = after;
          v19 = conditionDisable;
        }
        else
        {
          v17 = flag;
        }
        v16 = taskGraph;
      }
LABEL_39:
      v18 = v33;
      ++v14;
      ++pAttachmentInfo;
    }
    while ( v14 < attachmentCount );
  }
}

/*
==============
R_TG_Barrier_GetResourceAliasBits
==============
*/
void R_TG_Barrier_GetResourceAliasBits(GfxTaskGraph *taskGraph, const unsigned int *newResourceIndices, __int64 newResourceCount, const unsigned int *freeResourceIndices, unsigned int freeResourceCount, unsigned int taskIndex, R_TG_TaskInfo *tasks)
{
  const unsigned int *v8; 
  __int64 v9; 
  const unsigned int *v10; 
  GfxTaskGraph *v11; 
  unsigned __int16 aliasCount; 
  unsigned int v13; 
  __int64 name; 
  const unsigned int *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned __int16 v29; 
  __int64 v30; 
  unsigned __int16 v31; 
  int v32; 
  __int64 v33; 
  unsigned __int16 *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  const unsigned int *v38; 
  __int64 v39; 
  __int64 v40; 
  unsigned __int16 *v41; 
  const unsigned int *v43; 
  int v44; 
  unsigned int tasksa; 

  v43 = newResourceIndices;
  v8 = freeResourceIndices;
  v9 = taskIndex;
  v10 = newResourceIndices;
  v11 = taskGraph;
  aliasCount = tasks->aliasCount;
  v41 = &tasks->aliasOffsets[taskIndex];
  *v41 = aliasCount;
  if ( (_DWORD)newResourceCount )
  {
    v13 = freeResourceCount;
    newResourceCount = (unsigned int)newResourceCount;
    v39 = (unsigned int)newResourceCount;
    do
    {
      name = (__int64)v11->resources[*v10].name;
      v40 = name;
      if ( v13 )
      {
        v15 = v8;
        v16 = v13;
        v38 = v8;
        v35 = v13;
        do
        {
          v17 = *v15;
          tasksa = v17;
          v18 = v17;
          v19 = (__int64)v11->resources[v18].name;
          v36 = v19;
          if ( *(_BYTE *)(name + 279) || v11->resources[v18].isSmall )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 629, ASSERT_TYPE_ASSERT, "(!res0.isSmall && !res1.isSmall)", (const char *)&queryFormat, "!res0.isSmall && !res1.isSmall") )
              __debugbreak();
            v16 = v35;
            v19 = v36;
          }
          v20 = 0i64;
          v44 = 0;
          if ( *(_DWORD *)(name + 264) )
          {
            do
            {
              v21 = 0i64;
              if ( *(_DWORD *)(v19 + 264) )
              {
                v22 = name + 8 * (3 * v20 + 27);
                v37 = v22;
                do
                {
                  v23 = *(_DWORD *)(v22 + 8);
                  v24 = v19 + 8 * (3 * v21 + 27);
                  v25 = 0i64;
                  if ( v23 )
                  {
                    v26 = *(_QWORD *)v22;
                    v27 = *(_DWORD *)(v24 + 8);
                    while ( 1 )
                    {
                      v28 = 0i64;
                      v29 = *(_WORD *)(v26 + 6 * v25);
                      if ( v27 )
                        break;
LABEL_21:
                      v25 = (unsigned int)(v25 + 1);
                      if ( (unsigned int)v25 >= v23 )
                        goto LABEL_22;
                    }
                    v30 = *(_QWORD *)v24;
                    while ( 1 )
                    {
                      if ( *(_WORD *)(v26 + 6 * v25 + 4) == *(_WORD *)(v30 + 6 * v28 + 4) )
                      {
                        v31 = *(_WORD *)(v30 + 6 * v28);
                        if ( (unsigned __int16)(v29 + *(_WORD *)(v26 + 6 * v25 + 2)) > v31 && (unsigned __int16)(v31 + *(_WORD *)(v30 + 6 * v28 + 2)) > v29 )
                          break;
                      }
                      v28 = (unsigned int)(v28 + 1);
                      if ( (unsigned int)v28 >= v27 )
                        goto LABEL_21;
                    }
                    if ( tasks->aliasCount >= 0x1000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 640, ASSERT_TYPE_ASSERT, "(tasks.aliasCount < tasks.aliasIndicesLimit)", (const char *)&queryFormat, "tasks.aliasCount < tasks.aliasIndicesLimit") )
                      __debugbreak();
                    v33 = tasks->aliasCount;
                    v34 = &tasks->aliasIndices[v33];
                    tasks->aliasCount = v33 + 1;
                    if ( tasksa > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)tasksa, "unsigned", tasksa) )
                      __debugbreak();
                    *v34 = tasksa;
LABEL_22:
                    v22 = v37;
                  }
                  v19 = v36;
                  v21 = (unsigned int)(v21 + 1);
                }
                while ( (unsigned int)v21 < *(_DWORD *)(v36 + 264) );
                LODWORD(v20) = v44;
                name = v40;
              }
              v20 = (unsigned int)(v20 + 1);
              v44 = v20;
            }
            while ( (unsigned int)v20 < *(_DWORD *)(name + 264) );
            v16 = v35;
          }
          v11 = taskGraph;
          v15 = v38 + 1;
          --v16;
          ++v38;
          v35 = v16;
        }
        while ( v16 );
        v10 = v43;
        newResourceCount = v39;
        v13 = freeResourceCount;
        v8 = freeResourceIndices;
      }
      ++v10;
      --newResourceCount;
      v43 = v10;
      v39 = newResourceCount;
    }
    while ( newResourceCount );
    v9 = taskIndex;
    aliasCount = *v41;
  }
  v32 = tasks->aliasCount - aliasCount;
  if ( (v32 < 0 || (unsigned int)v32 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v32, "signed", tasks->aliasCount - (unsigned __int64)aliasCount) )
    __debugbreak();
  tasks->aliasCounts[v9] = v32;
}

/*
==============
R_TG_Barrier_GetResourceStateFromTypeStateAndAccess
==============
*/
__int64 R_TG_Barrier_GetResourceStateFromTypeStateAndAccess(tg::eResourceType type, tg::eResourceState state, unsigned int access, const tg::ResourceDesc *desc, const D3D12_RESOURCE_STATES initialState, const unsigned int compressMask)
{
  tg::eResourceType v6; 
  __int16 v7; 
  unsigned int displayFlags; 
  char v10; 
  char v11; 
  unsigned int multisample; 
  char v13; 
  unsigned __int32 v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  v6 = desc->type;
  v7 = access;
  if ( desc->type == eResourceType_DepthTarget )
  {
    displayFlags = desc->displayFlags;
    if ( (displayFlags & 0x100) == 0 )
    {
      v10 = 1;
      v11 = displayFlags & 1;
LABEL_4:
      multisample = desc->multisample;
      v13 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    LOBYTE(displayFlags) = desc->displayFlags;
  }
  v10 = 0;
  v11 = displayFlags & 1;
  if ( v6 == eResourceType_DepthTarget )
    goto LABEL_4;
  multisample = desc->multisample;
  if ( multisample <= 1 || (desc->displayFlags & 0x8000) == 0 )
    goto LABEL_4;
  v13 = 1;
LABEL_5:
  v14 = 0;
  if ( type == eResourceType_Unknown )
  {
    if ( state == eResourceState_Initial )
    {
      v14 = initialState;
      goto LABEL_47;
    }
    goto LABEL_48;
  }
  if ( type == eResourceType_ColorTarget )
  {
    v14 = 4;
    v7 = -1;
    goto LABEL_50;
  }
  if ( type != eResourceType_Texture && type != eResourceType_DepthTarget && type != eResourceType_Buffer )
    goto LABEL_48;
  if ( state != eResourceState_ReadOnly )
  {
    if ( state == eResourceState_Write )
    {
      if ( (access & 0x40) != 0 )
      {
        v14 = 16;
        v7 = -1;
        goto LABEL_50;
      }
      if ( (access & 0x80u) != 0 )
      {
        v14 = 1024;
        goto LABEL_50;
      }
      if ( (access & 2) != 0 )
      {
        v14 = 8;
        goto LABEL_50;
      }
      if ( (access & 0x100) != 0 )
      {
        v20 = 64;
        if ( multisample <= 1 )
          v20 = 8;
        v14 = v20;
LABEL_47:
        if ( v14 )
          goto LABEL_50;
      }
    }
LABEL_48:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 137, ASSERT_TYPE_ASSERT, "(resourceState != D3D12_RESOURCE_STATE_COMMON)", (const char *)&queryFormat, "resourceState != GFX_STATE_INITIAL") )
      __debugbreak();
    goto LABEL_50;
  }
  v15 = (16 * (access & 0x80)) | 0x200;
  if ( (access & 1) == 0 )
    v15 = 16 * (access & 0x80);
  v16 = v15 | 1;
  if ( (access & 6) == 0 )
    v16 = v15;
  v17 = v16 | 2;
  if ( (access & 8) == 0 )
    v17 = v16;
  v18 = v17 | 0x80;
  if ( (v7 & 0x20) == 0 )
    v18 = v17;
  v19 = v18 | 0x40;
  if ( (v7 & 0x110) == 0 )
    v19 = v18;
  v14 = v19 | 0x20;
  if ( v6 != eResourceType_DepthTarget )
    v14 = v19;
  if ( (v7 & 0x200) != 0 )
  {
    v14 = 192;
    goto LABEL_50;
  }
  if ( !v14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 119, ASSERT_TYPE_ASSERT, "(resourceState != D3D12_RESOURCE_STATE_COMMON)", (const char *)&queryFormat, "resourceState != GFX_STATE_INITIAL") )
      __debugbreak();
    goto LABEL_48;
  }
LABEL_50:
  if ( v10 )
  {
    if ( (v7 & 0x800) != 0 )
      v14 |= compressMask & 0x400000;
    if ( (v7 & 0x1000) != 0 )
      v14 |= compressMask & 0x800000;
  }
  if ( v13 && (v7 & 0x400) != 0 )
    v14 |= compressMask & 0x400000;
  if ( v11 && (v7 & 0x2000) != 0 )
    v14 |= compressMask & 0x1000000;
  if ( v13 && (v7 & 0x4000) != 0 )
    v14 |= compressMask & 0x2000000;
  return v14;
}

/*
==============
R_TG_Barrier_Merge
==============
*/
void R_TG_Barrier_Merge(GfxTaskGraph *taskGraph, GfxTaskGraph::Permutation *permutation)
{
  int v2; 
  GfxTaskGraph::Permutation *v3; 
  int v5; 
  bool v6; 
  unsigned __int8 v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  char *v11; 
  __int64 v12; 
  __int16 v13; 
  bool v14; 
  R_TG_Barrier *v15; 
  unsigned int renderTimeConditionFlag; 
  bool v17; 
  unsigned int v18; 
  int v19; 
  R_TG_BarrierType type; 
  R_TG_Barrier *v21; 
  int index; 
  R_TG_Attachment *v23; 
  unsigned __int16 resourceIndex; 
  unsigned int subresource; 
  int v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int v30; 
  R_TG_Attachment *v31; 
  unsigned __int16 v32; 
  char *v33; 
  unsigned int v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int8 v39; 
  bool v40; 
  bool v41; 
  unsigned int taskBegin; 
  int v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v48[320]; 

  v2 = 0;
  v3 = permutation;
  v5 = 0;
  v6 = 0;
  v43 = 0;
  v7 = 0;
  taskBegin = permutation->taskBegin;
  v40 = 0;
  v39 = 0;
  v45 = 0;
  v8 = 0;
  v44 = 0;
  memset_0(v48, 0, 4i64 * taskGraph->resourceCount);
  v9 = taskBegin;
  v10 = taskBegin;
  v46 = taskBegin;
  if ( taskBegin < v3->taskEnd )
  {
    while ( 1 )
    {
      v11 = (char *)taskGraph + 28 * v10;
      v12 = *((unsigned __int16 *)v11 + 805718);
      if ( taskGraph->taskShared[v12].queueIndex )
        goto LABEL_40;
      v13 = *((_WORD *)v11 + 805730);
      v14 = v13 != -1;
      v15 = &taskGraph->taskBarriers[*((unsigned __int16 *)v11 + 805731)];
      v41 = v13 != -1;
      renderTimeConditionFlag = taskGraph->taskShared[v12].renderTimeConditionFlag;
      v11[1611446] = 0;
      if ( renderTimeConditionFlag == v45 && v13 == -1 && *((_WORD *)v11 + 805726) == 0xFFFF )
      {
        v17 = v40;
      }
      else
      {
        taskBegin = v10;
        v44 = ++v8;
        v43 += v40;
        taskGraph->tasksPacked[v9].barrierBatchCount = v7;
        v45 = taskGraph->taskShared[*((unsigned __int16 *)v11 + 805718)].renderTimeConditionFlag;
        memset_0(v48, 0, 4i64 * taskGraph->resourceCount);
        v7 = 0;
        v39 = 0;
        v17 = *((_WORD *)v11 + 805730) != 0xFFFF;
      }
      v18 = 0;
      if ( v11[1611448] )
      {
        v19 = v43;
        while ( 1 )
        {
          type = v15[v18].type;
          v21 = &v15[v18];
          if ( type )
          {
            if ( type == R_TG_BarrierType_Depth )
              index = (unsigned __int8)v11[1611444] + (unsigned __int8)v11[1611443] - 1;
            else
              index = v21->index;
          }
          else
          {
            index = (unsigned __int8)v11[1611443] + v21->index;
          }
          v23 = &taskGraph->taskAttachments[(unsigned int)*((unsigned __int16 *)v11 + 805719) + index];
          resourceIndex = v23->resourceIndex;
          if ( (v23->flags & 0x18) != 0 )
          {
            subresource = (v23->temporalIndex + (unsigned int)v23->pingPongIndex) % taskGraph->resources[resourceIndex].desc.count;
          }
          else
          {
            subresource = v21->subresource;
            if ( subresource == -1 )
            {
              v26 = -1;
              goto LABEL_18;
            }
          }
          v26 = 1 << subresource;
LABEL_18:
          v27 = v48[resourceIndex];
          if ( (v27 & v26) != 0 )
          {
            ++v8;
            v19 += v17;
            v28 = taskBegin;
            taskBegin = v10;
            taskGraph->tasksPacked[v28].barrierBatchCount = v7;
            v45 = taskGraph->taskShared[*((unsigned __int16 *)v11 + 805718)].renderTimeConditionFlag;
            memset_0(v48, 0, 4i64 * taskGraph->resourceCount);
            v7 = 0;
            v18 = 0;
            v17 = *((_WORD *)v11 + 805730) != 0xFFFF;
          }
          else
          {
            v48[resourceIndex] = v26 | v27;
            ++v18;
          }
          if ( v18 >= (unsigned __int8)v11[1611448] )
          {
            v43 = v19;
            v14 = v41;
            v44 = v8;
            v39 = v7;
            break;
          }
        }
      }
      v29 = 0;
      v40 = v14 || v17;
      v30 = (unsigned __int8)v11[1611443] + (unsigned __int8)v11[1611444];
      if ( !v30 )
        goto LABEL_39;
      do
      {
        v31 = &taskGraph->taskAttachments[v29 + *((unsigned __int16 *)v11 + 805719)];
        v32 = v31->resourceIndex;
        if ( v31->resourceIndex == 0xFFFF )
          goto LABEL_37;
        if ( v32 >= 0x140u )
        {
          LODWORD(v38) = 320;
          LODWORD(v37) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 692, ASSERT_TYPE_ASSERT, "(unsigned)( attach.resourceIndex ) < (unsigned)( ( sizeof( *array_counter( taskGraph.resources ) ) + 0 ) )", "attach.resourceIndex doesn't index ARRAY_COUNT( taskGraph.resources )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        v33 = (char *)taskGraph + 808 * v31->resourceIndex;
        if ( (unsigned __int8)(v31->subresourceIndex - 32) <= 0xDEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 694, ASSERT_TYPE_ASSERT, "(attach.subresourceIndex == R_TG_Attachment::allSubresources || attach.subresourceIndex < 32)", (const char *)&queryFormat, "attach.subresourceIndex == R_TG_Attachment::allSubresources || attach.subresourceIndex < 32") )
          __debugbreak();
        if ( (v31->flags & 0x18) != 0 )
        {
          v34 = (v31->temporalIndex + (unsigned int)v31->pingPongIndex) % *((_DWORD *)v33 + 34355);
        }
        else
        {
          LOBYTE(v34) = v31->subresourceIndex;
          if ( (_BYTE)v34 == 0xFF )
          {
            v35 = -1;
            goto LABEL_36;
          }
        }
        v35 = 1 << v34;
LABEL_36:
        v48[v31->resourceIndex] |= v35;
LABEL_37:
        ++v29;
      }
      while ( v29 < v30 );
      v10 = v46;
      v2 = 0;
LABEL_39:
      v8 = v44;
      v7 = v39;
LABEL_40:
      v36 = v7++ == 0xFF;
      v39 = v7;
      if ( v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_barriers.cpp.h", 758, ASSERT_TYPE_ASSERT, "(batch.batchCount != 0)", (const char *)&queryFormat, "batch.batchCount != 0") )
        __debugbreak();
      v3 = permutation;
      v9 = taskBegin;
      v46 = ++v10;
      if ( v10 >= permutation->taskEnd )
      {
        v5 = v43;
        v6 = v40;
        break;
      }
    }
  }
  LOBYTE(v2) = v6;
  taskGraph->tasksPacked[v9].barrierBatchCount = v7;
  v3->barrierBatchCount = v8 + 1;
  v3->barrierAliasingCount = v2 + v5;
}

