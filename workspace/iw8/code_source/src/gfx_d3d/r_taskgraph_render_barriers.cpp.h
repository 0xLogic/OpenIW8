/*
==============
RB_TG_IssueEndBarriers
==============
*/
void RB_TG_IssueEndBarriers(CmdBufState *state, const GfxTaskGraph *taskGraph, unsigned int permutationIndex, unsigned int conditionDisable, const GfxTaskGraphViewInfo *viewInfo)
{
  CmdBufState *v7; 
  __int64 v8; 
  char *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 resourceIndex; 
  R_TG_AttachmentFlags flags; 
  bool v20; 
  __int64 v24; 
  unsigned __int16 m_surfaceID; 
  _DWORD *v27; 
  signed int v28; 
  D3D12_RESOURCE_STATES v29; 
  D3D12_RESOURCE_STATES stateAfter; 
  __int64 temporalIndex; 
  signed int temporalIndexa; 
  __int64 pingPongIndex; 
  char *v34; 
  R_RT_Handle result; 
  R_RT_Handle v38; 

  v7 = state;
  v8 = permutationIndex;
  if ( permutationIndex >= taskGraph->permutationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render_barriers.cpp.h", 169, ASSERT_TYPE_ASSERT, "(unsigned)( permutationIndex ) < (unsigned)( taskGraph.permutationCount )", "permutationIndex doesn't index taskGraph.permutationCount\n\t%i not in [0, %i)", permutationIndex, taskGraph->permutationCount) )
    __debugbreak();
  v9 = (char *)taskGraph + 48 * v8;
  v34 = v9;
  v10 = *((_DWORD *)v9 + 99205) - *((_DWORD *)v9 + 99204);
  if ( v10 >= 0x140 )
  {
    LODWORD(pingPongIndex) = 320;
    LODWORD(temporalIndex) = *((_DWORD *)v9 + 99205) - *((_DWORD *)v9 + 99204);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render_barriers.cpp.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( barrierCount ) < (unsigned)( tg::resourceLimit )", "barrierCount doesn't index tg::resourceLimit\n\t%i not in [0, %i)", temporalIndex, pingPongIndex) )
      __debugbreak();
    v9 = v34;
  }
  v11 = 0;
  v12 = 0;
  if ( v10 )
  {
    _RDI = &v38;
    do
    {
      resourceIndex = taskGraph->endBarrierAttachments[v12 + *((_DWORD *)v9 + 99204)].resourceIndex;
      flags = taskGraph->endBarrierAttachments[v12 + *((_DWORD *)v9 + 99204)].flags;
      _RBP = &taskGraph->resources[resourceIndex];
      if ( (flags & 0x18) != 0 )
      {
        _RAX = R_TG_GetRotatedHandle(&result, taskGraph, viewInfo, resourceIndex, flags, taskGraph->endBarrierAttachments[v12 + *((_DWORD *)v9 + 99204)].temporalIndex, taskGraph->endBarrierAttachments[v12 + *((_DWORD *)v9 + 99204)].pingPongIndex);
        v9 = v34;
        __asm { vmovups ymm0, ymmword ptr [rax] }
      }
      else
      {
        _RAX = 32 * (viewInfo->stepIndex + 9i64);
        __asm { vmovups ymm0, ymmword ptr [rax+rbp] }
      }
      v20 = _RBP->desc.conditionType == eCondition_RenderTime;
      __asm { vmovups ymmword ptr [rdi], ymm0 }
      if ( v20 && (conditionDisable & _RBP->desc.conditionFlag) != 0 )
      {
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+28C8h+result.m_tracking.m_name], xmm0
        }
        result.m_surfaceID = 0;
        result.m_tracking.m_allocCounter = 0;
        __asm
        {
          vmovups ymm1, ymmword ptr [rsp+28C8h+result.m_surfaceID]
          vmovups ymmword ptr [rdi], ymm1
        }
      }
      ++v12;
      ++_RDI;
    }
    while ( v12 < v10 );
    v7 = state;
    _RDI = &v38;
    do
    {
      v24 = v11 + *((_DWORD *)v9 + 99204);
      if ( state->resourceTransitionCount == 32 )
        R_HW_FlushResourceTransitions(state);
      m_surfaceID = _RDI->m_surfaceID;
      if ( _RDI->m_surfaceID )
      {
        R_RT_Handle::GetSurface(_RDI);
      }
      else if ( _RDI->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      {
        __debugbreak();
      }
      if ( m_surfaceID )
      {
        __asm { vmovups ymm0, ymmword ptr [rdi] }
        v27 = (_DWORD *)((char *)taskGraph + 20 * v24);
        v28 = v27[184448];
        v29 = v27[184444];
        LODWORD(v27) = v27[184447];
        temporalIndexa = v28;
        stateAfter = taskGraph->endBarriers[v24].stateAfter;
        __asm { vmovups ymmword ptr [rsp+28C8h+result.m_surfaceID], ymm0 }
        R_HW_AddResourceTransition(state, &result, (unsigned int)v27, v29, stateAfter, (D3D12_RESOURCE_BARRIER_FLAGS)temporalIndexa);
      }
      v9 = v34;
      ++v11;
      ++_RDI;
    }
    while ( v11 < v10 );
  }
  R_HW_FlushResourceTransitions(v7);
  R_GPULabel_Set(v7, taskGraph->taskLabels + 336, 0xFFFFFFFF, 0);
}

/*
==============
RB_TG_IssueTaskBeginBarriers
==============
*/
void RB_TG_IssueTaskBeginBarriers(CmdBufState *state, const GfxTaskGraph *taskGraph, const GfxTaskInfo *task, unsigned int renderIndex, bool finished)
{
  unsigned __int16 taskDependencyPrevIndex; 
  unsigned int barrierBatchCount; 
  __int64 v11; 
  const GfxTaskInfo *v12; 
  unsigned __int16 v13; 
  int integer; 
  unsigned __int64 *v15; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( (task->flags & 8) != 0 )
  {
    R_GPULabel_Set(state, &taskGraph->taskLabels[task->queueIndex + 336], task->taskPackedIndex | 0x80000000, 0);
    R_ProfBeginNamedEvent(state, "AsyncWaitFrameStart");
    R_GPULabel_Wait(state, taskGraph->taskLabels + 338, renderIndex, GFX_LABEL_COMPARE_FUNC_EQUAL);
    R_ProfEndNamedEvent(state);
  }
  taskDependencyPrevIndex = -1;
  if ( task->taskDependencyAsyncPrevIndex != 0xFFFF )
  {
    R_GPULabel_Set(state, &taskGraph->taskLabels[task->queueIndex + 336], task->taskPackedIndex | 0x40000000, 0);
    R_ProfBeginNamedEvent(state, "AsyncWaitDependency");
    R_GPULabel_Wait(state, &taskGraph->taskLabels[task->taskDependencyAsyncPrevIndex], renderIndex, GFX_LABEL_COMPARE_FUNC_EQUAL);
    R_ProfEndNamedEvent(state);
  }
  R_GPULabel_Set(state, &taskGraph->taskLabels[task->queueIndex + 336], task->taskPackedIndex | 0x20000000, 0);
  barrierBatchCount = task->barrierBatchCount;
  if ( barrierBatchCount == 1 )
  {
    if ( task->barrierAliasing )
      R_HW_AddResourceAlias(state);
    if ( taskGraph->allowSplitBarriers )
      taskDependencyPrevIndex = task->taskDependencyPrevIndex;
    RB_TG_IssueTaskTransitionBarriers(state, task, 0, task->barrierEndOffset, taskGraph->taskLabels, taskDependencyPrevIndex);
  }
  else
  {
    v11 = 0i64;
    if ( barrierBatchCount )
    {
      do
      {
        v12 = &task[v11];
        if ( !v12->queueIndex )
        {
          if ( v12->barrierAliasing )
            R_HW_AddResourceAlias(state);
          if ( taskGraph->allowSplitBarriers )
            v13 = v12->taskDependencyPrevIndex;
          else
            v13 = -1;
          RB_TG_IssueTaskTransitionBarriers(state, &task[v11], 0, v12->barrierEndOffset, taskGraph->taskLabels, v13);
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < task->barrierBatchCount );
    }
  }
  R_HW_FlushResourceTransitions(state);
  if ( finished )
    R_GPULabel_Set(state, &taskGraph->taskLabels[task->queueIndex + 336], task->taskPackedIndex, 0);
  integer = r_tgRenderHangTask->current.integer;
  if ( integer > -1 && (integer == 336 && rand() % taskGraph->taskSharedCount == task->taskSharedIndex || integer == task->taskSharedIndex) )
  {
    v15 = taskGraph->taskLabels + 338;
    taskGraph->gpuStatusTesting = 1;
    R_GPULabel_Wait(state, v15, 0, GFX_LABEL_COMPARE_FUNC_EQUAL);
    Dvar_SetInt_Internal(r_tgRenderHangTask, -1);
  }
}

/*
==============
RB_TG_IssueTaskEndBarriers
==============
*/
void RB_TG_IssueTaskEndBarriers(CmdBufState *state, const GfxTaskGraph *taskGraph, const GfxTaskInfo *task, unsigned int renderIndex)
{
  RB_TG_IssueTaskTransitionBarriers(state, task, task->barrierEndOffset, task->barrierCount, taskGraph->taskLabels, task->taskSharedIndex);
  R_HW_FlushResourceTransitions(state);
  if ( task->taskDependencyAsyncNextIndex != 0xFFFF )
    R_GPULabel_Signal(state, &taskGraph->taskLabels[task->taskSharedIndex], renderIndex);
  if ( (task->flags & 0x10) != 0 )
    R_GPULabel_Set(state, taskGraph->taskLabels + 337, 0xFFFFFFFF, 0);
}

/*
==============
RB_TG_IssueTaskTransitionBarriers
==============
*/
void RB_TG_IssueTaskTransitionBarriers(CmdBufState *state, const GfxTaskInfo *task, unsigned int begin, unsigned int end)
{
  __int64 v7; 
  __int64 i; 
  const R_TG_Barrier *v9; 
  R_TG_BarrierType type; 
  int v16; 
  D3D12_RESOURCE_STATES stateBefore; 
  unsigned int subresource; 
  D3D12_RESOURCE_STATES fmt; 
  D3D12_RESOURCE_BARRIER_FLAGS flag; 
  R_RT_Handle v23; 

  if ( begin < end )
  {
    _RDI = task;
    v7 = end - begin;
    for ( i = begin; ; ++i )
    {
      v9 = &_RDI->barriers[i];
      type = v9->type;
      if ( type == R_TG_BarrierType_None )
      {
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+98h+var_48.m_tracking.m_name], xmm0
        }
        v23.m_surfaceID = 0;
        v23.m_tracking.m_allocCounter = 0;
        __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID] }
      }
      else if ( type )
      {
        if ( type == R_TG_BarrierType_Depth )
        {
          __asm { vmovups ymm0, ymmword ptr [rdi+0B8h] }
        }
        else
        {
          _RAX = _RDI->attachments;
          _RCX = 32i64 * v9->index;
          __asm { vmovups ymm0, ymmword ptr [rcx+rax] }
        }
      }
      else
      {
        _RAX = 32i64 * v9->index;
        __asm { vmovups ymm0, ymmword ptr [rax+rdi+38h] }
      }
      __asm { vmovd   eax, xmm0 }
      v16 = (unsigned __int16)_EAX;
      __asm
      {
        vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
        vmovups [rsp+98h+var_68], ymm0
      }
      if ( (_WORD)_EAX )
        break;
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v16 + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        goto LABEL_15;
      }
LABEL_16:
      if ( v16 )
      {
        stateBefore = v9->stateBefore;
        subresource = v9->subresource;
        flag = v9->flag;
        fmt = v9->stateAfter;
        __asm { vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0 }
        R_HW_AddResourceTransition(state, &v23, subresource, stateBefore, fmt, flag);
      }
      if ( !--v7 )
        return;
    }
    R_RT_Handle::GetSurface(&v23);
LABEL_15:
    __asm { vmovups ymm0, [rsp+98h+var_68] }
    goto LABEL_16;
  }
}

