/*
==============
RB_TG_GetConditions
==============
*/

unsigned int __fastcall RB_TG_GetConditions(const GfxTaskGraph *taskGraph, const GfxViewInfo *viewInfo, unsigned int type)
{
  return ?RB_TG_GetConditions@@YAIAEBUGfxTaskGraph@@PEBUGfxViewInfo@@I@Z(taskGraph, viewInfo, type);
}

/*
==============
R_TG_UnpackTaskInfo
==============
*/

void __fastcall R_TG_UnpackTaskInfo(const GfxTaskGraph *taskGraph, unsigned int taskIndex, const GfxTaskGraphViewInfo *viewInfo, GfxRenderTargetId displayBuffer, unsigned int conditionDisable, R_RT_Handle *attachments, unsigned int *attachmentCount, GfxTaskInfo *taskInfo)
{
  ?R_TG_UnpackTaskInfo@@YAXAEBUGfxTaskGraph@@IAEBUGfxTaskGraphViewInfo@@W4GfxRenderTargetId@@IPEAVR_RT_Handle@@AEAIAEAUGfxTaskInfo@@@Z(taskGraph, taskIndex, viewInfo, displayBuffer, conditionDisable, attachments, attachmentCount, taskInfo);
}

/*
==============
R_TG_GetFlags
==============
*/

unsigned int __fastcall R_TG_GetFlags(const GfxViewportFeatures *viewportFeatures)
{
  return ?R_TG_GetFlags@@YAIAEBUGfxViewportFeatures@@@Z(viewportFeatures);
}

/*
==============
R_TG_GetRotatedHandle
==============
*/

R_RT_Handle *__fastcall R_TG_GetRotatedHandle(R_RT_Handle *result, const GfxTaskGraph *taskGraph, const GfxTaskGraphViewInfo *viewInfo, unsigned int resourceIndex, R_TG_AttachmentFlags flags, unsigned int temporalIndex, unsigned int pingPongIndex)
{
  return ?R_TG_GetRotatedHandle@@YA?AVR_RT_Handle@@AEBUGfxTaskGraph@@AEBUGfxTaskGraphViewInfo@@IW4R_TG_AttachmentFlags@@II@Z(result, taskGraph, viewInfo, resourceIndex, flags, temporalIndex, pingPongIndex);
}

/*
==============
R_TG_GetHandleForAttachment
==============
*/

R_RT_Handle *__fastcall R_TG_GetHandleForAttachment(R_RT_Handle *result, const GfxTaskGraph *taskGraph, unsigned int attachIndex, const GfxTaskGraphViewInfo *viewInfo, GfxRenderTargetId displayBuffer, unsigned int conditionDisable, bool *valid)
{
  return ?R_TG_GetHandleForAttachment@@YA?AVR_RT_Handle@@AEBUGfxTaskGraph@@IAEBUGfxTaskGraphViewInfo@@W4GfxRenderTargetId@@IAEA_N@Z(result, taskGraph, attachIndex, viewInfo, displayBuffer, conditionDisable, valid);
}

/*
==============
R_TG_SetupPhase
==============
*/

void __fastcall R_TG_SetupPhase(GfxViewInfo *viewInfo, unsigned int smpFrame, unsigned int phase)
{
  ?R_TG_SetupPhase@@YAXPEAUGfxViewInfo@@II@Z(viewInfo, smpFrame, phase);
}

/*
==============
RB_TG_Render
==============
*/

void __fastcall RB_TG_Render(GfxCmdBufContext *cmdBufContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_TG_Render@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(cmdBufContext, viewInfo, data);
}

/*
==============
R_TG_BeginSmpFrame
==============
*/

void __fastcall R_TG_BeginSmpFrame(unsigned int frame)
{
  ?R_TG_BeginSmpFrame@@YAXI@Z(frame);
}

/*
==============
R_TG_GetFlagsEnabled
==============
*/

bool __fastcall R_TG_GetFlagsEnabled(const GfxViewportFeatures *viewportFeatures, unsigned int flags)
{
  return ?R_TG_GetFlagsEnabled@@YA_NAEBUGfxViewportFeatures@@I@Z(viewportFeatures, flags);
}

/*
==============
R_TG_UpdateFrameCount
==============
*/

void __fastcall R_TG_UpdateFrameCount(GfxViewInfo *viewInfo)
{
  ?R_TG_UpdateFrameCount@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_TG_RenderTasksCmd
==============
*/

void __fastcall RB_TG_RenderTasksCmd(const void *const data)
{
  ?RB_TG_RenderTasksCmd@@YAXQEBX@Z(data);
}

/*
==============
RB_TG_ClearOnce
==============
*/
void RB_TG_ClearOnce(GfxCmdBufState *cmdBufState, const GfxTaskGraph *taskGraph, unsigned int viewIndex)
{
  unsigned int v4; 
  __int64 v5; 
  const GfxTaskGraph *v6; 
  CmdBufState *v7; 
  unsigned int v9; 
  int v10; 
  int v11; 
  bool v15; 
  int v18; 
  __int64 v20; 
  int v21; 
  GfxCmdBufState *v22; 
  __int64 v24; 
  __int64 v25; 
  D3D12_RESOURCE_STATES v26; 
  D3D12_RESOURCE_STATES v27; 
  int *v29; 
  CmdBufState *v30; 
  int v33; 
  bool v36; 
  bool v44; 
  const char *v53; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  bool v56; 
  const R_RT_Surface *v57; 
  CmdBufState *v58; 
  __int64 v60; 
  D3D12_RESOURCE_STATES v61; 
  D3D12_RESOURCE_STATES v62; 
  int v64; 
  R_RT_Handle v65; 
  R_RT_Handle v66; 
  R_RT_Handle v67; 
  unsigned int v68; 
  CmdBufState *state; 
  const GfxTaskGraph *v70; 
  R_RT_Handle v71; 
  char v72; 
  const char *v75; 
  R_RT_Group rtGroup; 
  int v77[64]; 
  _BYTE v78[1024]; 

  v68 = viewIndex;
  v4 = viewIndex;
  v5 = 0i64;
  v6 = taskGraph;
  v64 = 0;
  v70 = taskGraph;
  state = cmdBufState;
  v7 = NULL;
  if ( !taskGraph->resourceCount )
    return;
  do
  {
    _RSI = (char *)v6 + 808 * v5;
    if ( (*((_DWORD *)_RSI + 34359) & 0x200) == 0 )
      goto LABEL_41;
    if ( _RSI[137542] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 656, ASSERT_TYPE_ASSERT, "(!res.isAliased)", (const char *)&queryFormat, "!res.isAliased") )
      __debugbreak();
    if ( (*((_DWORD *)_RSI + 34349) & 0x20000) != 0 )
    {
      if ( v4 )
        goto LABEL_41;
      v9 = *((_DWORD *)_RSI + 34355);
      v10 = 0;
    }
    else
    {
      if ( *((_DWORD *)_RSI + 34355) < v6->viewCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 674, ASSERT_TYPE_ASSERT, "(res.desc.count >= taskGraph.viewCount)", (const char *)&queryFormat, "res.desc.count >= taskGraph.viewCount") )
        __debugbreak();
      v9 = *((_DWORD *)_RSI + 34355) / v6->viewCount;
      v10 = v4 * v9;
    }
    if ( v9 )
    {
      v11 = v10 - (_DWORD)v7;
      do
      {
        if ( (unsigned int)v7 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 681, ASSERT_TYPE_ASSERT, "(resourceCount < 32)", (const char *)&queryFormat, "resourceCount < MAX_RESOURCE_TRANSITIONS") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rsi+21950h] }
        if ( *((_DWORD *)_RSI + 34355) > 1u )
        {
          __asm
          {
            vmovd   eax, xmm0
            vmovups ymmword ptr [rbp+6C0h+var_740.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0
          }
          if ( (_WORD)_EAX )
          {
            R_RT_Handle::GetSurface(&v66);
            if ( (R_RT_Handle::GetSurface(&v66)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
            {
              __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8] }
            }
            else
            {
              __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8] }
              __debugbreak();
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              __asm { vmovups ymm0, ymmword ptr [rbp+6C0h+var_740.m_surfaceID] }
              if ( v15 )
                __debugbreak();
            }
          }
          __asm { vmovups ymmword ptr [rbp+6C0h+var_740.m_surfaceID], ymm0 }
          _RDI = R_RT_Handle::GetSurface(&v67);
          if ( (_RDI->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
            __debugbreak();
          if ( v11 + (int)v7 >= _RDI->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
            __debugbreak();
          _RCX = 32i64 * (unsigned int)(v11 + (_DWORD)v7);
          __asm { vmovups ymm0, ymmword ptr [rcx+rdi+438h] }
        }
        v18 = *((_DWORD *)_RSI + 34348);
        _RAX = 32i64 * (unsigned int)v7;
        v20 = (unsigned int)v7;
        __asm { vmovups [rbp+rax+6C0h+var_440], ymm0 }
        if ( v18 == 32 )
        {
          v77[(unsigned int)v7] = 4;
        }
        else
        {
          v21 = 8;
          if ( v18 == 64 )
            v21 = 16;
          v77[(unsigned int)v7] = v21;
        }
        v7 = (CmdBufState *)(unsigned int)((_DWORD)v7 + 1);
        v77[v20 + 32] = *((_DWORD *)_RSI + 34517);
      }
      while ( (int)v7 + v11 - v10 < v9 );
      v6 = v70;
      v4 = v68;
    }
LABEL_41:
    v5 = (unsigned int)(v64 + 1);
    v64 = v5;
  }
  while ( (unsigned int)v5 < v6->resourceCount );
  if ( !(_DWORD)v7 )
    return;
  R_LockGfxImmediateContext();
  v22 = (GfxCmdBufState *)state;
  R_ProfBeginNamedEvent(state, "RB_TG_ClearOnce");
  R_GPU_BeginTimer(GPU_TIMER_CLEAR_SCREEN);
  _RDI = v78;
  v24 = (unsigned int)v7;
  v25 = 0i64;
  do
  {
    v26 = v77[v25 + 32];
    v27 = v77[v25];
    if ( v26 != v27 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+6C0h+var_740.m_surfaceID], ymm0
      }
      R_HW_AddResourceTransition(v22, &v67, v26, v27, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    ++v25;
    _RDI += 32;
    --v24;
  }
  while ( v24 );
  R_HW_FlushResourceTransitions(v22);
  state = v7;
  v29 = v77;
  v30 = v7;
  _RSI = v78;
  while ( 2 )
  {
    __asm { vmovups ymm0, ymmword ptr [rsi] }
    v33 = *v29;
    __asm { vmovups ymmword ptr [rbp+6C0h+var_740.m_surfaceID], ymm0 }
    if ( v33 == 4 )
    {
      __asm
      {
        vmovd   edi, xmm0
        vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0
        vmovups ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v65);
        if ( (R_RT_Handle::GetSurface(&v65)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter] }
          LODWORD(_RBX) = v65.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v65.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0 }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter] }
          LODWORD(_RBX) = v65.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v65.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0 }
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8] }
          if ( v36 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter], ymm0 }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v65);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter]
          vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0
        }
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      v72 = 1;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v67.m_surfaceID = 0;
      v67.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovdqu xmmword ptr [rbp+6C0h+var_740.m_tracking.m_name], xmm0
        vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+6C0h+var_700.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v71);
      }
      else
      {
        if ( v65.m_tracking.m_allocCounter != (unsigned __int16)_EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8]
        vmovups [rbp+6C0h+var_6D8], ymm0
        vmovups ymm0, ymmword ptr [rbp+6C0h+var_740.m_surfaceID]
      }
      goto LABEL_91;
    }
    if ( v33 == 16 )
    {
      __asm
      {
        vmovd   edi, xmm0
        vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0
        vmovups ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter], ymm0
      }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v65);
        if ( (R_RT_Handle::GetSurface(&v65)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter] }
          LODWORD(_RBX) = v65.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v65.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0 }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_788.m_tracking.m_allocCounter] }
          LODWORD(_RBX) = v65.m_tracking.m_allocCounter;
          LOWORD(_EDI) = v65.m_surfaceID;
          __asm { vmovups ymmword ptr [rsp+7C0h+var_768+8], ymm0 }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8] }
          if ( v44 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbp+6C0h+var_740.m_surfaceID], ymm0 }
      if ( (_WORD)_EDI )
      {
        R_RT_Handle::GetSurface(&v67);
        __asm { vmovups ymm0, ymmword ptr [rbp+6C0h+var_740.m_surfaceID] }
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rsp+7C0h+var_768+8] }
      }
      v72 = 0;
LABEL_91:
      __asm { vmovups [rbp+6C0h+var_658], ymm0 }
      _RCX = &rtGroup;
      _RAX = &v72;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymm0, ymmword ptr [rax+80h]
        vmovups ymmword ptr [rcx+80h], ymm0
        vmovups ymm0, ymmword ptr [rax+0A0h]
      }
      v53 = v75;
      __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
      rtGroup.m_vrsRt.m_tracking.m_location = v53;
      R_ClearRtGroup(v22, &rtGroup, 0x3Fu, 0, PIPE_FLUSH_NONE);
    }
    else
    {
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v67)->m_rtFlagsInternal;
      Surface = R_RT_Handle::GetSurface(&v67);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        v56 = (Surface->m_rtFlags & 0x20000) != 0;
        v57 = R_RT_Handle::GetSurface(&v67);
        if ( (v57->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        R_ClearBuffer_Uint(v22, (const GfxWrappedRWBuffer *)&v57->1080, 0, v56, PIPE_FLUSH_NONE);
      }
      else
      {
        R_ClearImage_Uint(v22, &Surface->m_image.m_base, 0, PIPE_FLUSH_NONE);
      }
    }
    _RSI += 32;
    ++v29;
    v30 = (CmdBufState *)((char *)v30 - 1);
    if ( v30 )
      continue;
    break;
  }
  v58 = state;
  _RDI = v78;
  v60 = 0i64;
  do
  {
    v61 = v77[v60 + 32];
    v62 = v77[v60];
    if ( v61 != v62 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+6C0h+var_700.m_surfaceID], ymm0
      }
      R_HW_AddResourceTransition(v22, &v71, v62, v61, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    ++v60;
    _RDI += 32;
    v58 = (CmdBufState *)((char *)v58 - 1);
  }
  while ( v58 );
  R_HW_FlushResourceTransitions(v22);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(v22);
  R_UnlockGfxImmediateContext();
}

/*
==============
RB_TG_GetConditions
==============
*/
__int64 RB_TG_GetConditions(const GfxTaskGraph *taskGraph, const GfxViewInfo *viewInfo, unsigned int type)
{
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v8; 

  v3 = 0;
  v4 = type;
  v5 = 0;
  if ( taskGraph->conditionCount[type] )
  {
    v8 = type;
    do
    {
      if ( !taskGraph->conditions[v8][v5](viewInfo) )
        v3 |= 1 << v5;
      ++v5;
    }
    while ( v5 < taskGraph->conditionCount[v4] );
  }
  return v3;
}

/*
==============
RB_TG_Render
==============
*/
void RB_TG_Render(GfxCmdBufContext *cmdBufContext, const GfxTaskGraph *taskGraph, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int smpFrame; 
  const GfxViewInfo *v7; 
  unsigned int m_taskGraphPermutation; 
  unsigned int permutationMask; 
  __int64 v10; 
  char *v11; 
  signed __int32 v12; 
  unsigned __int64 v13; 
  GfxCmdBufSourceState *source; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  CmdBufState *state; 
  const GfxBackEndData *v19; 
  bool enabled; 
  unsigned int attachmentCount; 
  unsigned int conditionDisable; 
  int v24; 
  const GfxViewInfo *v25; 
  GfxCmdBufContext *v26; 
  const GfxBackEndData *v27; 
  unsigned __int64 v28; 
  RB_TG_RenderTasksInfo dataa; 
  GfxCmdBufContext v30; 
  R_RT_Handle attachments; 
  GfxTaskInfo v32[336]; 

  smpFrame = data->smpFrame;
  _R12 = cmdBufContext;
  v26 = cmdBufContext;
  v27 = data;
  v25 = viewInfo;
  v7 = viewInfo;
  g_R_TG_smpData.waitSmpFrame = smpFrame;
  g_R_TG_smpData.waitPhase = 3;
  Sys_ProfBeginNamedEvent(0xFFFFA500, "wait phase ready");
  Sys_ProcessWorkerCmdsWithTimeout(RB_TG_WaitPhaseIndex, NULL);
  Sys_ProfEndNamedEvent();
  m_taskGraphPermutation = v7->viewportFeatures.m_taskGraphPermutation;
  if ( m_taskGraphPermutation == -1 )
  {
    permutationMask = v7->taskGraphViewInfo.permutationMask;
    v10 = permutationMask & RB_TG_GetConditions(taskGraph, v7, 0);
  }
  else
  {
    v10 = taskGraph->permutationCount - 1;
    if ( (unsigned int)v10 > m_taskGraphPermutation )
      v10 = m_taskGraphPermutation;
  }
  v11 = (char *)taskGraph + 48 * v10;
  conditionDisable = RB_TG_GetConditions(taskGraph, v7, 1u);
  if ( ((unsigned __int8)taskGraph & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &taskGraph->renderIndex) )
    __debugbreak();
  v12 = _InterlockedIncrement(&taskGraph->renderIndex);
  v24 = v12;
  g_R_TG_taskGraph.renderHistory[v12 & 3].permutationIndex = v10;
  v13 = Sys_Microseconds();
  source = _R12->source;
  v28 = v13;
  R_InitCmdBufSourceState(source, &v7->input);
  memset_0(v32, 0, 320i64 * *((unsigned int *)v11 + 99196));
  v15 = 0;
  v16 = 0i64;
  attachmentCount = 0;
  if ( *((_DWORD *)v11 + 99196) )
  {
    v17 = conditionDisable;
    while ( 1 )
    {
      if ( v15 >= 0xA62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 619, ASSERT_TYPE_ASSERT, "(attachmentCount < renderData.attachmentLimit - g_R_TG_attachLimit)", (const char *)&queryFormat, "attachmentCount < renderData.attachmentLimit - g_R_TG_attachLimit") )
        __debugbreak();
      R_TG_UnpackTaskInfo(taskGraph, v16 + *((_DWORD *)v11 + 99194), &v7->taskGraphViewInfo, R_RENDERTARGET_DISPLAY_BUFFER, v17, &attachments, &attachmentCount, &v32[v16]);
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *((_DWORD *)v11 + 99196) )
        break;
      v15 = attachmentCount;
    }
    v7 = v25;
    _R12 = v26;
    v12 = v24;
  }
  state = _R12->state;
  if ( !v7->taskGraphViewInfo.temporalFrameIndex )
    RB_TG_ClearOnce(_R12->state, taskGraph, v7->clientIndex);
  R_LockGfxImmediateContext();
  R_GPULabel_Set(state, taskGraph->taskLabels + 338, v12, 1);
  R_UnlockGfxImmediateContext();
  v19 = v27;
  dataa.taskInfos = (const R_TG_TaskInfos *)&attachments;
  *(&dataa.renderIndex + 1) = 0;
  dataa.cmdBufContext = _R12;
  dataa.taskGraph = taskGraph;
  dataa.viewInfo = v7;
  dataa.data = v27;
  dataa.taskCount = *((_DWORD *)v11 + 99196);
  dataa.renderIndex = v12;
  enabled = r_tgRenderAsyncWorkerCmd->current.enabled;
  if ( enabled )
  {
    dataa.queueMask = 2;
    Sys_AddWorkerCmd(WRKCMD_TG_RENDER_TASKS, &dataa);
    dataa.queueMask = 1;
  }
  else
  {
    dataa.queueMask = 3;
  }
  RB_TG_RenderTasks_Internal(&dataa);
  if ( enabled )
    Sys_WaitWorkerCmdsOfType(WRKCMD_TG_RENDER_TASKS);
  R_LockGfxImmediateContext();
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+2F518h+var_2F468], xmm0
  }
  R_SetRenderTargetsInternal_None(&v30, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(876)");
  RB_TG_IssueEndBarriers(_R12->state, taskGraph, v10, conditionDisable, &v7->taskGraphViewInfo);
  v19->endFence = R_FlushImmediateContext();
  R_UnlockGfxImmediateContext();
  if ( (v12 & 0xF) == 0 )
    g_R_TG_taskGraph.renderCpuTimeUs = Sys_Microseconds() - v28;
  g_R_TG_taskGraphViewInfo[v7->clientIndex].permutationMask = RB_TG_GetConditions(taskGraph, v7, 0);
}

/*
==============
RB_TG_Render
==============
*/
void RB_TG_Render(GfxCmdBufContext *cmdBufContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  char *Value; 
  unsigned int *v7; 
  unsigned int v8; 
  _QWORD *v9; 
  char *v10; 
  int *v11; 
  unsigned __int64 v12; 
  ThreadContext CurrentThreadContext; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  GfxCmdBufContext v19; 

  _R15 = cmdBufContext;
  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 5096);
  if ( (unsigned int)(*((_DWORD *)Value + 1274) + 1) >= 3 )
  {
    v18 = 3;
    v16 = *((_DWORD *)Value + 1274) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(v17) = 3;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v9 = Value + 2088;
  v10 = Value + 40;
  if ( *v9 < (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v9 += 8i64;
  if ( *v9 >= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v9 = v7;
  if ( *v9 <= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v11 = (int *)&v7[*v7 + 2];
  v12 = __rdtsc();
  *v11 = v12;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 75, NULL, 0);
  if ( viewInfo->viewportFeatures.m_taskGraphIndex >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(v15) = viewInfo->viewportFeatures.m_taskGraphIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 981, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->viewportFeatures.m_taskGraphIndex ) < (unsigned)( 2 )", "viewInfo->viewportFeatures.m_taskGraphIndex doesn't index 2\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( g_R_TG_taskGraph.taskCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+88h+var_38], xmm0
    }
    RB_TG_Render(&v19, &g_R_TG_taskGraph, viewInfo, data);
  }
  Profile_EndInternal(NULL);
}

/*
==============
RB_TG_RenderEpilogue
==============
*/
void RB_TG_RenderEpilogue(GfxCmdBufContext *cmdBufContext, ComputeCmdBufState *computeState, const GfxTaskGraph *taskGraph, const GfxTaskInfo *task, const GfxViewInfo *viewInfo, unsigned int renderIndex, R_TG_AsyncComputeState *asyncState)
{
  R_TG_TaskType type; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v13; 
  GfxCmdBufState *v16; 
  GfxCmdBufContext result; 
  char v21[128]; 

  type = task->type;
  _R14 = cmdBufContext;
  if ( type == R_TG_TaskType_Other )
  {
    state = cmdBufContext->state;
    R_LockIfGfxImmediateContext(state->device);
    RB_TG_IssueTaskEndBarriers(state, taskGraph, task, renderIndex);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    if ( type )
      v13 = (GfxCmdBufState *)computeState;
    else
      v13 = cmdBufContext->state;
    RB_TG_IssueTaskEndBarriers(v13, taskGraph, task, renderIndex);
    if ( task->gpuTimer != 129 )
      R_GPU_EndTimer();
    R_ProfEndNamedEvent(v13);
    Sys_ProfEndNamedEvent();
    if ( task->type )
    {
      if ( task->queueIndex )
      {
        if ( asyncState->taskCount == asyncState->taskLimit )
        {
          if ( computeState != (ComputeCmdBufState *)asyncState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 95, ASSERT_TYPE_ASSERT, "(computeState == &asyncState->computeState)", (const char *)&queryFormat, "computeState == &asyncState->computeState") )
            __debugbreak();
          R_ShutdownComputeCmdBufState(computeState);
          asyncState->taskCount = 0;
        }
      }
      else
      {
        R_ShutdownGfxComputeCmdBufState(computeState);
        R_UnlockGfxImmediateContext();
      }
    }
    else
    {
      if ( (task->flags & 0x40) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vpextrq rbx, xmm0, 1
        }
        if ( !R_IsLockedIfGfxImmediateContext(*(const GfxDevice **)(_RBX + 1360)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
          __debugbreak();
        memset_0(v21, 0, sizeof(v21));
        (*(void (__fastcall **)(_QWORD, char *, void *, void *))(**(_QWORD **)(_RBX + 1360) + 640i64))(*(_QWORD *)(_RBX + 1360), v21, &`R_HW_DisableMultiSample'::`2'::s_samplePriorities1xMS, &`R_HW_DisableMultiSample'::`2'::s_eqaa1xMS);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(_RBX + 1360) + 512i64))(*(_QWORD *)(_RBX + 1360), 0i64);
      }
      v16 = _R14->state;
      R_ResetRenderTargets(v16);
      if ( (*((_BYTE *)&_R14->source->input + 7920) & 1) != 0 )
      {
        R_ShutdownCmdBufState(v16);
        R_UnlockIfGfxImmediateContext(v16->device);
      }
      else
      {
        _RAX = RB_GetBackendCmdBufContext(&result);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vpextrq rcx, xmm0, 1; out
        }
        if ( v16 != _RCX )
        {
          GfxCmdBufState::Copy(_RCX, v16);
          R_FlushImmediateContext();
        }
        R_UnlockGfxImmediateContext();
      }
    }
  }
  if ( r_tgRenderFinishGpu->current.enabled )
  {
    R_LockGfxImmediateContext();
    R_AcquireGpuFenceLock();
    R_FinishGpuFence();
    R_InsertGpuFence();
    R_FinishGpuFence();
    R_ReleaseGpuFenceLock();
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
RB_TG_RenderPrologue
==============
*/
void RB_TG_RenderPrologue(GfxCmdBufContext *cmdBufContext, const GfxTaskGraph *taskGraph, const GfxTaskInfo *task, const GfxViewInfo *viewInfo, unsigned int renderIndex, R_TG_AsyncComputeState *asyncState, ComputeCmdBufState **computeState)
{
  R_TG_TaskType type; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v13; 
  unsigned int taskCount; 
  GPUTimerId gpuTimer; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *v17; 
  GPUTimerId v21; 
  const char *v25; 
  int v26; 
  const char *v27; 
  bool v30; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned __int8 discardFlags; 
  GPUTimerId v40; 
  const GfxBackEndData *data; 
  int integer; 
  int v44; 
  int taskSharedIndex; 
  ComputeCmdBufState *v46; 
  GfxCmdBufContext result[2]; 
  __m256i v48; 
  GfxViewport viewport[2]; 

  type = task->type;
  _RSI = task;
  _R13 = viewInfo;
  _R14 = cmdBufContext;
  if ( type == R_TG_TaskType_Other )
  {
    state = cmdBufContext->state;
    R_LockIfGfxImmediateContext(state->device);
    RB_TG_IssueTaskBeginBarriers(state, taskGraph, _RSI, renderIndex, 1);
    R_UnlockIfGfxImmediateContext(state->device);
    *computeState = state;
    goto LABEL_48;
  }
  if ( type )
  {
    if ( task->queueIndex )
    {
      *computeState = &asyncState->computeState;
      taskCount = asyncState->taskCount;
      if ( !taskCount )
      {
        R_InitComputeCmdBufState(&asyncState->computeState, (GfxBackEndData *)viewInfo->input.data, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
        taskCount = asyncState->taskCount;
      }
      asyncState->taskCount = taskCount + 1;
    }
    else
    {
      v13 = cmdBufContext->state;
      *computeState = v13;
      R_LockGfxImmediateContext();
      R_InitGfxComputeCmdBufState(*computeState, v13);
    }
    R_ProfBeginNamedEvent(*computeState, _RSI->pName);
    Sys_ProfBeginNamedEvent(0xFF4169E1, _RSI->pName);
    R_ClearDescriptorCBVs((*computeState)->descState);
    gpuTimer = _RSI->gpuTimer;
    if ( gpuTimer != GPU_TIMER_COUNT )
      R_GPU_BeginTimer(gpuTimer);
    RB_TG_IssueTaskBeginBarriers(*computeState, taskGraph, _RSI, renderIndex, 1);
    goto LABEL_48;
  }
  source = cmdBufContext->source;
  R_BeginViewInternal(cmdBufContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  v17 = _R14->state;
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(v17->device);
    R_InitCmdBufState(v17);
  }
  else
  {
    R_LockGfxImmediateContext();
    _RAX = RB_GetBackendCmdBufContext(result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rdx, xmm0, 1; in
    }
    if ( v17 != _RDX )
      GfxCmdBufState::Copy(v17, _RDX);
  }
  memset_0(v17->perPrimConstantState, 255, sizeof(v17->perPrimConstantState));
  memset_0(v17->perObjectConstantState, 255, sizeof(v17->perObjectConstantState));
  memset_0(v17->stableConstantState, 255, sizeof(v17->stableConstantState));
  v17->data = source->input.data;
  R_ProfBeginNamedEvent(v17, _RSI->pName);
  Sys_ProfBeginNamedEvent(0xFF4169E1, _RSI->pName);
  *computeState = v17;
  R_ClearDescriptorCBVs(v17->descState);
  memset_0(v17->constants, 0, sizeof(v17->constants));
  v21 = _RSI->gpuTimer;
  if ( v21 != GPU_TIMER_COUNT )
    R_GPU_BeginTimer(v21);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+3Fh+viewport.x], xmm0
  }
  RB_TG_IssueTaskBeginBarriers_0((GfxCmdBufContext *)viewport, taskGraph, _RSI, &_R13->taskGraphViewInfo, renderIndex);
  if ( _RSI->validFunc )
  {
    if ( g_R_TG_defs[_RSI->typeIndex].pSetupFunc )
    {
LABEL_39:
      discardFlags = _RSI->discardFlags;
      if ( discardFlags )
        R_DiscardRtGroup(_R14->state, &_RSI->rtGroup, discardFlags);
      if ( _RSI->clearFlags )
      {
        if ( _RSI->gpuTimer != 129 )
          R_GPU_EndTimer();
        R_GPU_BeginTimer(GPU_TIMER_CLEAR_SCREEN);
        R_ClearRtGroup(_R14->state, &_RSI->rtGroup, _RSI->clearFlags, 0, PIPE_FLUSH_FULL);
        R_GPU_EndTimer();
        v40 = _RSI->gpuTimer;
        if ( v40 != GPU_TIMER_COUNT )
          R_GPU_BeginTimer(v40);
      }
      if ( (_RSI->flags & 0x40) != 0 )
      {
        *((_BYTE *)source + 11668) |= 0x20u;
        data = _R13->input.data;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups xmmword ptr [rbp+3Fh+result.source], xmm0
        }
        R_HW_EnableMultiSample(result, data->frameCount);
      }
      goto LABEL_48;
    }
    if ( _RSI->rtGroup.m_colorRtCount )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+38h]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+3Fh+viewport.x], ymm0
        vmovups ymmword ptr [rbp+3Fh+result.source], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)result);
        if ( (R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_32;
        v25 = "!colorRt.IsValid() || colorRt.IsColor()";
        v26 = 396;
        v27 = "(!colorRt.IsValid() || colorRt.IsColor())";
LABEL_30:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v26, ASSERT_TYPE_ASSERT, v27, (const char *)&queryFormat, v25) )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+3Fh+result.source] }
          __debugbreak();
          goto LABEL_33;
        }
LABEL_32:
        __asm { vmovups ymm0, ymmword ptr [rbp+3Fh+result.source] }
LABEL_33:
        __asm { vmovups [rbp+3Fh+var_90], ymm0 }
        _RBX = &v48;
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups ymmword ptr [rbp+3Fh+result.source], ymm0
        }
        if ( R_RT_Handle::IsValid((R_RT_Handle *)result) )
        {
          if ( (_RSI->flags & 2) != 0 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r13+4B0h]
              vmovups xmmword ptr [rbp+3Fh+viewport.x], xmm0
            }
          }
          else
          {
            *(_QWORD *)&viewport[0].x = 0i64;
            viewport[0].width = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.width;
            viewport[0].height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
          }
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rbp+3Fh+result.source], ymm0
          }
          height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
          Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
          R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+3Fh+result.source], xmm0
          }
          R_SetRenderTargetsInternal(result, &_RSI->rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(369)");
          R_SetViewportStruct(source, viewport);
          R_SetViewportAndScissorSeparate(_R14->state, viewport, viewport);
        }
        else
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+3Fh+result.source], xmm0
          }
          R_SetRenderTargetsInternal_None(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(374)");
        }
        goto LABEL_39;
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+0B8h]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+3Fh+viewport.x], ymm0
        vmovups ymmword ptr [rbp+3Fh+result.source], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)result);
        if ( (R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_rtFlagsInternal & 0x10) != 0 )
          goto LABEL_32;
        v25 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v26 = 403;
        v27 = "(!depthRt.IsValid() || depthRt.IsDepth())";
        goto LABEL_30;
      }
    }
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+3Fh+viewport.x] }
      if ( v30 )
        __debugbreak();
    }
    goto LABEL_33;
  }
LABEL_48:
  integer = r_tgRenderBarrierSafeModeBeginIndex->current.integer;
  v44 = r_tgRenderBarrierSafeModeEndIndex->current.integer;
  if ( v44 > integer )
  {
    taskSharedIndex = _RSI->taskSharedIndex;
    v46 = *computeState;
    if ( taskSharedIndex >= integer && taskSharedIndex < v44 )
    {
      if ( _RSI->queueIndex )
      {
        R_HW_AddResourceAlias(*computeState);
        R_HW_FlushResourceTransitions(v46);
      }
      else
      {
        R_LockGfxImmediateContext();
        R_HW_AddResourceAlias(v46);
        R_HW_FlushResourceTransitions(v46);
        R_UnlockGfxImmediateContext();
      }
    }
  }
}

/*
==============
RB_TG_RenderTasksCmd
==============
*/
void RB_TG_RenderTasksCmd(const void *const data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 1002, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  RB_TG_RenderTasks_Internal((const RB_TG_RenderTasksInfo *)data);
}

/*
==============
RB_TG_RenderTasks_Internal
==============
*/
void RB_TG_RenderTasks_Internal(const RB_TG_RenderTasksInfo *executeTasksInfo)
{
  unsigned int v2; 
  const R_TG_TaskInfos *taskInfos; 
  const GfxTaskGraph *taskGraph; 
  const GfxBackEndData *data; 
  const GfxViewInfo *viewInfo; 
  __int64 taskCount; 
  unsigned int v9; 
  bool *p_validTask; 
  __int64 i; 
  unsigned int waitPhase; 
  int integer; 
  int v14; 
  unsigned int smpFrame; 
  ComputeCmdBufState *v17; 
  void (__fastcall *pGfxFunc)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *); 
  GfxCmdBufContext *v20; 
  unsigned int renderIndex; 
  unsigned int queueMask; 
  GfxCmdBufContext v24; 
  ComputeCmdBufState *v25; 
  R_TG_AsyncComputeState state; 

  if ( !executeTasksInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 761, ASSERT_TYPE_ASSERT, "(executeTasksInfo != nullptr)", (const char *)&queryFormat, "executeTasksInfo != nullptr") )
    __debugbreak();
  v2 = 1;
  _R12 = executeTasksInfo->cmdBufContext;
  taskInfos = executeTasksInfo->taskInfos;
  taskGraph = executeTasksInfo->taskGraph;
  data = executeTasksInfo->data;
  viewInfo = executeTasksInfo->viewInfo;
  taskCount = executeTasksInfo->taskCount;
  queueMask = executeTasksInfo->queueMask;
  renderIndex = executeTasksInfo->renderIndex;
  if ( r_tgRenderAsyncBatchSubmit->current.enabled )
    v2 = -1;
  state.taskLimit = v2;
  state.taskCount = 0;
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 774, ASSERT_TYPE_ASSERT, "(cmdBufContext != nullptr)", (const char *)&queryFormat, "cmdBufContext != nullptr") )
    __debugbreak();
  if ( !taskInfos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 775, ASSERT_TYPE_ASSERT, "(taskInfos != nullptr)", (const char *)&queryFormat, "taskInfos != nullptr") )
    __debugbreak();
  if ( !taskGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 776, ASSERT_TYPE_ASSERT, "(taskGraph != nullptr)", (const char *)&queryFormat, "taskGraph != nullptr") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 777, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 778, ASSERT_TYPE_ASSERT, "(viewInfo != nullptr)", (const char *)&queryFormat, "viewInfo != nullptr") )
    __debugbreak();
  if ( (_DWORD)taskCount )
  {
    v9 = queueMask;
    p_validTask = &taskInfos->infos[0].validTask;
    for ( i = taskCount; i; --i )
    {
      if ( !_bittest((const int *)&v9, *(_DWORD *)(p_validTask - 238)) || !*p_validTask )
        goto LABEL_39;
      waitPhase = g_R_TG_defs[*(unsigned int *)(p_validTask - 242)].waitPhase;
      integer = r_tgRenderForceWaitPhase->current.integer;
      if ( integer != -1 )
      {
        if ( waitPhase == -1 )
          waitPhase = 0;
        v14 = waitPhase;
        waitPhase = r_tgRenderForceWaitPhase->current.unsignedInt;
        if ( v14 > integer )
          waitPhase = v14;
      }
      if ( waitPhase != -1 )
      {
        smpFrame = data->smpFrame;
        g_R_TG_smpData.waitPhase = waitPhase;
        g_R_TG_smpData.waitSmpFrame = smpFrame;
        Sys_ProfBeginNamedEvent(0xFFFFA500, "wait phase ready");
        Sys_ProcessWorkerCmdsWithTimeout(RB_TG_WaitPhaseIndex, NULL);
        Sys_ProfEndNamedEvent();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rsp+0AA8h+var_A58], xmm0
      }
      RB_TG_RenderPrologue(&v24, taskGraph, (const GfxTaskInfo *)(p_validTask - 250), viewInfo, renderIndex, &state, &v25);
      v17 = v25;
      if ( p_validTask[1] )
      {
        pGfxFunc = (void (__fastcall *)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *))g_R_TG_defs[*(unsigned int *)(p_validTask - 242)].pGfxFunc;
        if ( pGfxFunc )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rsp+0AA8h+var_A58], xmm0
          }
          v20 = &v24;
LABEL_37:
          pGfxFunc(v20, p_validTask - 250, viewInfo, data);
          goto LABEL_38;
        }
        pGfxFunc = (void (__fastcall *)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *))g_R_TG_defs[*(unsigned int *)(p_validTask - 242)].pComputeFunc;
        if ( pGfxFunc )
        {
          v20 = (GfxCmdBufContext *)v25;
          goto LABEL_37;
        }
      }
LABEL_38:
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rsp+0AA8h+var_A58], xmm0
      }
      RB_TG_RenderEpilogue(&v24, v17, taskGraph, (const GfxTaskInfo *)(p_validTask - 250), viewInfo, renderIndex, &state);
      v9 = queueMask;
LABEL_39:
      p_validTask += 320;
    }
  }
  if ( state.taskCount )
    R_ShutdownComputeCmdBufState(&state.computeState);
}

/*
==============
RB_TG_WaitPhaseIndex
==============
*/
bool RB_TG_WaitPhaseIndex(void *__formal)
{
  return g_R_TG_smpData.phaseComplete[g_R_TG_smpData.waitSmpFrame][g_R_TG_smpData.waitPhase] != 0;
}

/*
==============
R_TG_BeginSmpFrame
==============
*/
void R_TG_BeginSmpFrame(unsigned int frame)
{
  volatile int *v1; 
  __int64 v2; 

  v1 = g_R_TG_smpData.phaseComplete[frame];
  v2 = 7i64;
  do
  {
    *v1++ = 0;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_TG_GetFlags
==============
*/
__int64 R_TG_GetFlags(const GfxViewportFeatures *viewportFeatures)
{
  if ( (*((_DWORD *)viewportFeatures + 11) & 0x100) == 0 || viewportFeatures->m_taskGraphIndex == -1 )
    return 0i64;
  else
    return g_R_TG_taskGraph.info.taskFlags;
}

/*
==============
R_TG_GetFlagsEnabled
==============
*/
bool R_TG_GetFlagsEnabled(const GfxViewportFeatures *viewportFeatures, unsigned int flags)
{
  return (*((_DWORD *)viewportFeatures + 11) & 0x100) != 0 && viewportFeatures->m_taskGraphIndex != -1 && (g_R_TG_taskGraph.info.taskFlags & flags) != 0;
}

/*
==============
R_TG_GetHandleForAttachment
==============
*/
R_RT_Handle *R_TG_GetHandleForAttachment(R_RT_Handle *result, const GfxTaskGraph *taskGraph, unsigned int attachIndex, const GfxTaskGraphViewInfo *viewInfo, GfxRenderTargetId displayBuffer, unsigned int conditionDisable, bool *valid)
{
  __int64 v9; 
  unsigned __int16 v10; 
  char *v11; 
  __int64 v12; 
  R_TG_AttachmentFlags flags; 
  bool v20; 
  unsigned int v21; 
  int v22; 
  R_RT_Handle v25; 
  R_RT_ColorHandle resulta; 

  _RBX = result;
  v9 = 3i64 * attachIndex + 199158;
  v10 = *((_WORD *)&taskGraph->scriptName + v9);
  v11 = (char *)taskGraph + 2 * v9;
  if ( v10 == 0xFFFF )
  {
    result->m_surfaceID = 0;
    result->m_tracking.m_allocCounter = 0;
    result->m_tracking.m_name = NULL;
    result->m_tracking.m_location = NULL;
  }
  else
  {
    v12 = v10;
    _RSI = &taskGraph->resources[v12];
    if ( taskGraph->resources[v12].desc.conditionType == eCondition_RenderTime && (taskGraph->resources[v12].desc.conditionFlag & conditionDisable) != 0 )
    {
      _RBX->m_surfaceID = 0;
      _RBX->m_tracking.m_allocCounter = 0;
      _RBX->m_tracking.m_name = NULL;
      _RBX->m_tracking.m_location = NULL;
    }
    else
    {
      flags = v11[5];
      if ( (flags & 0x20) != 0 )
      {
        _RAX = R_RT_GetGlobalColor(&resulta, displayBuffer);
        __asm { vmovups ymm0, ymmword ptr [rax] }
      }
      else if ( (flags & 0x18) != 0 )
      {
        _RAX = R_TG_GetRotatedHandle(&resulta, taskGraph, viewInfo, v10, flags, (unsigned __int8)v11[3], (unsigned __int8)v11[4]);
        __asm { vmovups ymm0, ymmword ptr [rax] }
      }
      else if ( (flags & 0x40) != 0 )
      {
        _RCX = 32 * (viewInfo->stepIndexHistory[((unsigned __int8)viewInfo->temporalFrameIndex - 1) & 3] + 9i64);
        __asm { vmovups ymm0, ymmword ptr [rcx+rsi] }
      }
      else
      {
        _RAX = 32 * (viewInfo->stepIndex + 9i64);
        __asm { vmovups ymm0, ymmword ptr [rax+rsi] }
      }
      v20 = v11[2] == -1;
      __asm
      {
        vmovups ymmword ptr [rsp+88h+var_48.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+88h+result.baseclass_0.m_surfaceID], ymm0
      }
      if ( v20 )
      {
        __asm { vmovups ymmword ptr [rbx], ymm0 }
      }
      else
      {
        if ( _RSI->desc.levels != 1 && _RSI->desc.arraySize != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 513, ASSERT_TYPE_ASSERT, "(resource.desc.levels == 1 || resource.desc.arraySize == 1)", (const char *)&queryFormat, "resource.desc.levels == 1 || resource.desc.arraySize == 1") )
          __debugbreak();
        if ( _RSI->desc.levels <= 1 )
          v21 = 0;
        else
          v21 = (unsigned __int8)v11[2];
        if ( _RSI->desc.arraySize <= 1 )
          v22 = 0;
        else
          v22 = (unsigned __int8)v11[2];
        if ( v21 < R_RT_Handle::GetSurface(&v25)->m_image.m_base.levelCount )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rsp+88h+result.baseclass_0.m_surfaceID]
            vmovups ymmword ptr [rsp+88h+result.baseclass_0.m_surfaceID], ymm0
          }
          R_RT_GetViewInternal(_RBX, &resulta, v22, v21);
        }
        else
        {
          *valid = 0;
          _RBX->m_surfaceID = 0;
          _RBX->m_tracking.m_allocCounter = 0;
          _RBX->m_tracking.m_name = NULL;
          _RBX->m_tracking.m_location = NULL;
        }
      }
    }
  }
  return _RBX;
}

/*
==============
R_TG_GetRotatedHandle
==============
*/
R_RT_Handle *R_TG_GetRotatedHandle(R_RT_Handle *result, const GfxTaskGraph *taskGraph, const GfxTaskGraphViewInfo *viewInfo, unsigned int resourceIndex, R_TG_AttachmentFlags flags, unsigned int temporalIndex, unsigned int pingPongIndex)
{
  unsigned int v12; 
  char temporalFrameIndex; 
  const R_RT_Surface *Surface; 
  unsigned int v18; 
  unsigned int v19; 
  R_RT_Handle v30; 
  R_RT_Handle v31; 

  result->m_surfaceID = 0;
  result->m_tracking.m_allocCounter = 0;
  result->m_tracking.m_name = NULL;
  _RBX = result;
  result->m_tracking.m_location = NULL;
  _RBP = &taskGraph->resources[resourceIndex];
  if ( (flags & 8) != 0 )
  {
    if ( (~flags & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 228, ASSERT_TYPE_ASSERT, "(flags & R_TG_AttachmentFlag_Temporal)", (const char *)&queryFormat, "flags & R_TG_AttachmentFlag_Temporal") )
      __debugbreak();
    v12 = viewInfo->resourceFrameIndices[_RBP->temporalIndex] + pingPongIndex;
    if ( v12 >= temporalIndex )
    {
      if ( temporalIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 235, ASSERT_TYPE_ASSERT, "(temporalIndex < viewInfo.stepHistoryLimit)", (const char *)&queryFormat, "temporalIndex < viewInfo.stepHistoryLimit") )
        __debugbreak();
      temporalFrameIndex = viewInfo->temporalFrameIndex - 1;
      if ( (flags & 0x40) == 0 )
        temporalFrameIndex = viewInfo->temporalFrameIndex;
      _RAX = 32 * (viewInfo->stepIndexHistory[(temporalFrameIndex - (_BYTE)temporalIndex) & 3] + 9i64);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rbp]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v30);
        if ( (R_RT_Handle::GetSurface(&v30)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0 }
      Surface = R_RT_Handle::GetSurface(&v31);
      if ( (Surface->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 608, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      v18 = Surface->m_array.m_handleCount / taskGraph->viewCount;
      v19 = (v12 + temporalIndex) % v18 + v18 * viewInfo->viewIndex;
      _R14 = R_RT_Handle::GetSurface(&v31);
      if ( (_R14->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      if ( v19 >= _R14->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
        __debugbreak();
      _RAX = 32i64 * v19;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+r14+438h]
        vmovups ymmword ptr [rbx], ymm0
      }
    }
    return _RBX;
  }
  else
  {
    if ( (flags & 0x10) != 0 )
    {
      _RAX = 32 * (viewInfo->stepIndex + 9i64);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rbp]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+98h+var_68.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v30);
        if ( (R_RT_Handle::GetSurface(&v30)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_68.m_surfaceID] }
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+98h+var_48.m_surfaceID] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rsp+98h+var_48.m_surfaceID], ymm0 }
      _RSI = R_RT_Handle::GetSurface(&v31);
      if ( (_RSI->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      if ( pingPongIndex >= _RSI->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
        __debugbreak();
      _RAX = 32i64 * pingPongIndex;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rsi+438h]
        vmovups ymmword ptr [rbx], ymm0
      }
    }
    return _RBX;
  }
}

/*
==============
R_TG_SetupPhase
==============
*/
void R_TG_SetupPhase(const GfxTaskGraph *taskGraph, GfxViewInfo *viewInfo, unsigned int smpFrame, unsigned int phase)
{
  unsigned int m_taskGraphPermutation; 
  __int64 v6; 
  __int64 v8; 
  unsigned int Conditions; 
  GfxTaskGraph::Permutation *v10; 
  unsigned int v11; 
  __int64 clientIndex; 
  unsigned int step; 
  bool v14; 
  unsigned int i; 
  __int64 typeIndex; 
  unsigned int attachmentCount[4]; 
  GfxTaskInfo taskInfo; 
  R_RT_Handle attachments; 

  m_taskGraphPermutation = viewInfo->viewportFeatures.m_taskGraphPermutation;
  _RSI = viewInfo;
  v6 = phase;
  v8 = smpFrame;
  if ( m_taskGraphPermutation == -1 )
  {
    Conditions = RB_TG_GetConditions(taskGraph, viewInfo, 0);
  }
  else
  {
    Conditions = taskGraph->permutationCount - 1;
    if ( Conditions > m_taskGraphPermutation )
      Conditions = viewInfo->viewportFeatures.m_taskGraphPermutation;
  }
  v10 = &taskGraph->permutations[Conditions];
  v11 = RB_TG_GetConditions(taskGraph, _RSI, 1u);
  if ( (_DWORD)v6 == 5 )
  {
    clientIndex = _RSI->clientIndex;
    step = 0;
    v14 = !rg.sceneResDynamic;
    _RBX = &g_R_TG_taskGraphViewInfo[clientIndex];
    g_R_TG_taskGraphViewInfo[clientIndex].viewIndex = clientIndex;
    if ( v14 )
    {
      g_R_TG_taskGraphViewInfo[clientIndex].stepIndex = 0;
    }
    else
    {
      if ( _RSI->input.resolution.step )
        step = (unsigned __int8)_RSI->input.resolution.step;
      g_R_TG_taskGraphViewInfo[clientIndex].stepIndex = step;
      if ( step >= taskGraph->dynamicResolutionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 196, ASSERT_TYPE_ASSERT, "(viewInfoUpdate.stepIndex < taskGraph.dynamicResolutionCount)", (const char *)&queryFormat, "viewInfoUpdate.stepIndex < taskGraph.dynamicResolutionCount") )
        __debugbreak();
      step = _RBX->stepIndex;
    }
    _RBX->stepIndexHistory[_RBX->temporalFrameIndex & 3] = step;
    if ( r_tgRenderClearTemporal->current.enabled || _RSI->teleported )
    {
      _RBX->temporalFrameIndex = 0;
      _RBX->permutationMask = -1;
      memset_0(_RBX, 0, 0x80ui64);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rsi+3CB8h], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rsi+3CC8h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rsi+3CD8h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rsi+3CE8h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rsi+3CF8h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rsi+3D08h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rsi+3D18h], xmm0
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rsi+3D28h], xmm1
      vmovups xmm0, xmmword ptr [rbx+80h]
      vmovups xmmword ptr [rsi+3D38h], xmm0
      vmovups xmm1, xmmword ptr [rbx+90h]
      vmovups xmmword ptr [rsi+3D48h], xmm1
      vmovups xmm0, xmmword ptr [rbx+0A0h]
      vmovups xmmword ptr [rsi+3D58h], xmm0
      vmovups xmm1, xmmword ptr [rbx+0B0h]
      vmovups xmmword ptr [rsi+3D68h], xmm1
    }
    *(_QWORD *)&_RSI->taskGraphViewInfo.stepIndexHistory[2] = *(_QWORD *)&_RBX->stepIndexHistory[2];
  }
  else if ( (_DWORD)v6 == 6 )
  {
    R_TG_UpdateFrameCount(taskGraph, _RSI, Conditions);
  }
  for ( i = v10->taskBegin; i < v10->taskEnd; ++i )
  {
    typeIndex = taskGraph->taskShared[taskGraph->tasksPacked[i].taskIndex].typeIndex;
    if ( g_R_TG_defs[typeIndex].pSetupFunc && (_DWORD)v6 == g_R_TG_defs[typeIndex].setupPhase )
    {
      attachmentCount[0] = 0;
      memset_0(&taskInfo, 0, sizeof(taskInfo));
      R_TG_UnpackTaskInfo(taskGraph, i, &_RSI->taskGraphViewInfo, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND, v11, &attachments, attachmentCount, &taskInfo);
      g_R_TG_defs[taskInfo.typeIndex].pSetupFunc(&taskInfo, _RSI);
    }
  }
  g_R_TG_smpData.phaseComplete[v8][v6] = 1;
}

/*
==============
R_TG_SetupPhase
==============
*/
void R_TG_SetupPhase(GfxViewInfo *viewInfo, unsigned int smpFrame, unsigned int phase)
{
  unsigned int m_taskGraphIndex; 
  unsigned int v7; 
  int v8; 

  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 )
  {
    m_taskGraphIndex = viewInfo->viewportFeatures.m_taskGraphIndex;
    if ( m_taskGraphIndex != -1 )
    {
      if ( m_taskGraphIndex >= 2 )
      {
        v8 = 2;
        v7 = viewInfo->viewportFeatures.m_taskGraphIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 969, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->viewportFeatures.m_taskGraphIndex ) < (unsigned)( 2 )", "viewInfo->viewportFeatures.m_taskGraphIndex doesn't index 2\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( g_R_TG_taskGraph.taskCount )
        R_TG_SetupPhase(&g_R_TG_taskGraph, viewInfo, smpFrame, phase);
    }
  }
}

/*
==============
R_TG_UnpackTaskInfo
==============
*/
void R_TG_UnpackTaskInfo(const GfxTaskGraph *taskGraph, unsigned int taskIndex, const GfxTaskGraphViewInfo *viewInfo, GfxRenderTargetId displayBuffer, unsigned int conditionDisable, R_RT_Handle *attachments, unsigned int *attachmentCount, GfxTaskInfo *taskInfo)
{
  __int64 v10; 
  GfxTaskInfoPacked *v14; 
  __int64 v15; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  R_TG_TaskInfoFlags flags; 
  R_TG_TaskType type; 
  unsigned __int8 rtCount; 
  bool v32; 
  unsigned int v33; 
  bool v38; 
  unsigned __int8 vrsMaskIndex; 
  bool v44; 
  R_RT_Handle v45; 
  R_RT_Handle result; 
  R_RT_Handle v47; 
  unsigned __int8 conditionDisablea; 

  _R14 = taskGraph;
  v10 = taskIndex;
  if ( taskIndex >= taskGraph->taskCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 534, ASSERT_TYPE_ASSERT, "(taskIndex < taskGraph.taskCount)", (const char *)&queryFormat, "taskIndex < taskGraph.taskCount") )
    __debugbreak();
  _RBX = taskInfo;
  v14 = &_R14->tasksPacked[v10];
  v15 = v14->taskIndex;
  taskInfo->taskPackedIndex = v10;
  _RCX = 5 * v15;
  taskInfo->taskSharedIndex = v14->taskIndex;
  taskInfo->barrierCount = _R14->tasksPacked[v10].barrierCount;
  taskInfo->barrierBatchCount = _R14->tasksPacked[v10].barrierBatchCount;
  taskInfo->barrierEndOffset = _R14->tasksPacked[v10].barrierEndOffset;
  if ( (conditionDisable & _R14->taskShared[v15].renderTimeConditionFlag) != 0 )
  {
    taskInfo->validTask = 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14+rcx*8+186220h]
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm1, qword ptr [r14+rcx*8+186240h]
    }
    taskInfo->pGraphInfo = &_R14->info;
    v19 = 0;
    v20 = 0;
    __asm { vmovsd  qword ptr [rbx+20h], xmm1 }
    taskInfo->validTask = 1;
    taskInfo->validFunc = 1;
    v21 = v14->attachmentCount;
    taskInfo->attachmentCount = v21;
    taskInfo->attachments = &attachments[*attachmentCount];
    if ( v21 )
    {
      do
      {
        _RAX = R_TG_GetHandleForAttachment(&result, _R14, v20 + v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
        _RCX = v20++;
        _RCX *= 32i64;
        __asm { vmovups ymm0, ymmword ptr [rax] }
        _RAX = taskInfo->attachments;
        __asm { vmovups ymmword ptr [rcx+rax], ymm0 }
      }
      while ( v20 < taskInfo->attachmentCount );
      v19 = 0;
    }
    taskInfo->clearFlags = v14->clearFlags;
    taskInfo->discardFlags = v14->discardFlags;
    flags = v14->flags;
    taskInfo->flags = flags;
    if ( (flags & 0x20) != 0 )
      type = R_TG_TaskType_Graphics;
    else
      type = g_R_TG_defs[taskInfo->typeIndex].type;
    taskInfo->type = type;
    taskInfo->rtGroup.m_colorRtCount = 0;
    taskInfo->rtGroup.m_depthRt.m_surfaceID = 0;
    taskInfo->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
    taskInfo->rtGroup.m_depthRt.m_tracking.m_name = NULL;
    taskInfo->rtGroup.m_depthRt.m_tracking.m_location = NULL;
    taskInfo->rtGroup.m_vrsRt.m_surfaceID = 0;
    taskInfo->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
    taskInfo->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
    taskInfo->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
    rtCount = v14->rtCount;
    conditionDisablea = rtCount;
    if ( rtCount )
    {
      if ( (v14->flags & 4) != 0 )
      {
        conditionDisablea = --rtCount;
        _RAX = R_TG_GetHandleForAttachment(&v47, _R14, rtCount + v14->attachmentCount + (unsigned int)v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   eax, xmm0
          vmovups ymmword ptr [rsp+0D8h+result.m_surfaceID], ymm0
          vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v45);
          if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
          }
          else
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
            __debugbreak();
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+result.m_surfaceID] }
            if ( v32 )
              __debugbreak();
          }
        }
        __asm { vmovups ymmword ptr [rbx+0B8h], ymm0 }
      }
      v33 = rtCount;
      if ( rtCount )
      {
        _RSI = taskInfo->rtGroup.m_colorRts;
        do
        {
          _RAX = R_TG_GetHandleForAttachment(&v47, _R14, v19 + v14->attachmentCount + v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovd   eax, xmm0
            vmovups ymmword ptr [rsp+0D8h+result.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
          }
          if ( (_WORD)_RAX )
          {
            R_RT_Handle::GetSurface(&v45);
            if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
            {
              __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
              __debugbreak();
            }
            else
            {
              __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+result.m_surfaceID] }
              if ( v38 )
                __debugbreak();
            }
          }
          __asm { vmovups ymmword ptr [rsi], ymm0 }
          ++_RSI;
          ++v19;
        }
        while ( v19 < v33 );
        _RBX = taskInfo;
        rtCount = conditionDisablea;
      }
      _RBX->rtGroup.m_colorRtCount = rtCount;
    }
    vrsMaskIndex = v14->vrsMaskIndex;
    if ( vrsMaskIndex != 0xFF )
    {
      _RCX = vrsMaskIndex;
      _RAX = _RBX->attachments;
      _RCX *= 32i64;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+rax]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rsp+0D8h+result.m_surfaceID], ymm0
        vmovups ymmword ptr [rsp+0D8h+var_98.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v45);
        if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+var_98.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+result.m_surfaceID] }
          if ( v44 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbx+0D8h], ymm0 }
    }
    _RBX->barrierDecompressBeginFirst = v14->barrierDecompressBeginFirst;
    _RBX->barrierDecompressBeginLast = v14->barrierDecompressBeginLast;
    _RBX->taskDependencyAsyncPrevIndex = v14->taskDependencyAsyncPrevIndex;
    _RBX->taskDependencyAsyncNextIndex = v14->taskDependencyAsyncNextIndex;
    _RBX->taskDependencyPrevIndex = v14->taskDependencyPrevIndex;
    _RBX->taskDependencyNextIndex = v14->taskDependencyNextIndex;
    _RBX->barrierAliasing = v14->taskDependencyAliasing != 0xFFFF;
    _RBX->barriers = &_R14->taskBarriers[v14->barrierOffset];
    *attachmentCount += v14->rtCount + v14->attachmentCount;
  }
}

/*
==============
R_TG_UpdateFrameCount
==============
*/
void R_TG_UpdateFrameCount(const GfxTaskGraph *taskGraph, GfxViewInfo *viewInfo, unsigned int permutationIndex)
{
  __int64 v4; 
  GfxTaskGraphViewInfo *v5; 
  unsigned int i; 
  unsigned int *v7; 
  unsigned int temporalResourceBits; 
  unsigned int permutationCount; 

  v4 = permutationIndex;
  v5 = &g_R_TG_taskGraphViewInfo[viewInfo->clientIndex];
  if ( permutationIndex >= taskGraph->permutationCount )
  {
    permutationCount = taskGraph->permutationCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( permutationIndex ) < (unsigned)( taskGraph.permutationCount )", "permutationIndex doesn't index taskGraph.permutationCount\n\t%i not in [0, %i)", permutationIndex, permutationCount) )
      __debugbreak();
  }
  for ( i = 0; i < taskGraph->temporalResourceCount; ++i )
  {
    v7 = &v5->resourceFrameIndices[i];
    temporalResourceBits = taskGraph->permutations[v4].temporalResourceBits;
    if ( _bittest((const int *)&temporalResourceBits, i) )
      ++*v7;
    else
      *v7 = 0;
  }
  ++v5->temporalFrameIndex;
  ++v5->frameCount;
}

/*
==============
R_TG_UpdateFrameCount
==============
*/
void R_TG_UpdateFrameCount(GfxViewInfo *viewInfo)
{
  unsigned int m_taskGraphIndex; 
  unsigned int m_taskGraphPermutation; 
  unsigned int Conditions; 
  unsigned int v5; 
  int v6; 

  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 )
  {
    m_taskGraphIndex = viewInfo->viewportFeatures.m_taskGraphIndex;
    if ( m_taskGraphIndex != -1 )
    {
      if ( m_taskGraphIndex >= 2 )
      {
        v6 = 2;
        v5 = viewInfo->viewportFeatures.m_taskGraphIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 954, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->viewportFeatures.m_taskGraphIndex ) < (unsigned)( 2 )", "viewInfo->viewportFeatures.m_taskGraphIndex doesn't index 2\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( g_R_TG_taskGraph.taskCount )
      {
        m_taskGraphPermutation = viewInfo->viewportFeatures.m_taskGraphPermutation;
        if ( m_taskGraphPermutation == -1 )
        {
          Conditions = RB_TG_GetConditions(&g_R_TG_taskGraph, viewInfo, 0);
        }
        else
        {
          Conditions = g_R_TG_taskGraph.permutationCount - 1;
          if ( g_R_TG_taskGraph.permutationCount - 1 > m_taskGraphPermutation )
            Conditions = viewInfo->viewportFeatures.m_taskGraphPermutation;
        }
        R_TG_UpdateFrameCount(&g_R_TG_taskGraph, viewInfo, Conditions);
      }
    }
  }
}

