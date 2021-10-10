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
  char *v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  R_RT_Handle v12; 
  bool v14; 
  const R_RT_Surface *Surface; 
  int v16; 
  __int64 v17; 
  int v18; 
  GfxCmdBufState *v19; 
  R_RT_Handle *v20; 
  __int64 v21; 
  __int64 v22; 
  D3D12_RESOURCE_STATES v23; 
  D3D12_RESOURCE_STATES v24; 
  int *v25; 
  CmdBufState *v26; 
  R_RT_Handle *v27; 
  R_RT_Handle v28; 
  int v29; 
  unsigned __int16 m_surfaceID; 
  bool v32; 
  R_RT_DepthHandle v33; 
  unsigned __int16 v34; 
  bool v36; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *v38; 
  bool v39; 
  const R_RT_Surface *v40; 
  CmdBufState *v41; 
  R_RT_Handle *v42; 
  __int64 v43; 
  D3D12_RESOURCE_STATES v44; 
  D3D12_RESOURCE_STATES v45; 
  int v46; 
  R_RT_Handle v47; 
  R_RT_Handle v48; 
  R_RT_Handle v49; 
  unsigned int v50; 
  CmdBufState *state; 
  const GfxTaskGraph *v52; 
  R_RT_Handle v53; 
  R_RT_Group v54; 
  R_RT_Group rtGroup; 
  int v56[64]; 
  __m256i v57[32]; 

  v50 = viewIndex;
  v4 = viewIndex;
  v5 = 0i64;
  v6 = taskGraph;
  v46 = 0;
  v52 = taskGraph;
  state = cmdBufState;
  v7 = NULL;
  if ( !taskGraph->resourceCount )
    return;
  do
  {
    v8 = (char *)v6 + 808 * v5;
    if ( (*((_DWORD *)v8 + 34359) & 0x200) == 0 )
      goto LABEL_41;
    if ( v8[137542] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 656, ASSERT_TYPE_ASSERT, "(!res.isAliased)", (const char *)&queryFormat, "!res.isAliased") )
      __debugbreak();
    if ( (*((_DWORD *)v8 + 34349) & 0x20000) != 0 )
    {
      if ( v4 )
        goto LABEL_41;
      v9 = *((_DWORD *)v8 + 34355);
      v10 = 0;
    }
    else
    {
      if ( *((_DWORD *)v8 + 34355) < v6->viewCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 674, ASSERT_TYPE_ASSERT, "(res.desc.count >= taskGraph.viewCount)", (const char *)&queryFormat, "res.desc.count >= taskGraph.viewCount") )
        __debugbreak();
      v9 = *((_DWORD *)v8 + 34355) / v6->viewCount;
      v10 = v4 * v9;
    }
    if ( v9 )
    {
      v11 = v10 - (_DWORD)v7;
      do
      {
        if ( (unsigned int)v7 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 681, ASSERT_TYPE_ASSERT, "(resourceCount < 32)", (const char *)&queryFormat, "resourceCount < MAX_RESOURCE_TRANSITIONS") )
          __debugbreak();
        v12 = *(R_RT_Handle *)(v8 + 137552);
        if ( *((_DWORD *)v8 + 34355) > 1u )
        {
          v49 = *(R_RT_Handle *)(v8 + 137552);
          v48 = v12;
          if ( (_WORD)_XMM0 )
          {
            R_RT_Handle::GetSurface(&v48);
            if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
            {
              v12 = v48;
            }
            else
            {
              v12 = v48;
              __debugbreak();
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              v12 = v49;
              if ( v14 )
                __debugbreak();
            }
          }
          v49 = v12;
          Surface = R_RT_Handle::GetSurface(&v49);
          if ( (Surface->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
            __debugbreak();
          if ( v11 + (int)v7 >= Surface->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
            __debugbreak();
          v12 = Surface->m_array.m_handles[v11 + (int)v7];
        }
        v16 = *((_DWORD *)v8 + 34348);
        v17 = (unsigned int)v7;
        v57[(unsigned int)v7] = (__m256i)v12;
        if ( v16 == 32 )
        {
          v56[(unsigned int)v7] = 4;
        }
        else
        {
          v18 = 8;
          if ( v16 == 64 )
            v18 = 16;
          v56[(unsigned int)v7] = v18;
        }
        v7 = (CmdBufState *)(unsigned int)((_DWORD)v7 + 1);
        v56[v17 + 32] = *((_DWORD *)v8 + 34517);
      }
      while ( (int)v7 + v11 - v10 < v9 );
      v6 = v52;
      v4 = v50;
    }
LABEL_41:
    v5 = (unsigned int)(v46 + 1);
    v46 = v5;
  }
  while ( (unsigned int)v5 < v6->resourceCount );
  if ( !(_DWORD)v7 )
    return;
  R_LockGfxImmediateContext();
  v19 = (GfxCmdBufState *)state;
  R_ProfBeginNamedEvent(state, "RB_TG_ClearOnce");
  R_GPU_BeginTimer(GPU_TIMER_CLEAR_SCREEN);
  v20 = (R_RT_Handle *)v57;
  v21 = (unsigned int)v7;
  v22 = 0i64;
  do
  {
    v23 = v56[v22 + 32];
    v24 = v56[v22];
    if ( v23 != v24 )
    {
      v49 = *v20;
      R_HW_AddResourceTransition(v19, &v49, v23, v24, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    ++v22;
    ++v20;
    --v21;
  }
  while ( v21 );
  R_HW_FlushResourceTransitions(v19);
  state = v7;
  v25 = v56;
  v26 = v7;
  v27 = (R_RT_Handle *)v57;
  while ( 2 )
  {
    v28 = *v27;
    v29 = *v25;
    v49 = *v27;
    if ( v29 == 4 )
    {
      m_surfaceID = _XMM0;
      v48 = v28;
      v47 = v28;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v47);
        if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v28 = v47;
          LODWORD(_RBX) = v47.m_tracking.m_allocCounter;
          m_surfaceID = v47.m_surfaceID;
          v48 = v47;
          __debugbreak();
        }
        else
        {
          v28 = v47;
          LODWORD(_RBX) = v47.m_tracking.m_allocCounter;
          m_surfaceID = v47.m_surfaceID;
          v48 = v47;
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v28 = v48;
          if ( v32 )
            __debugbreak();
        }
      }
      v47 = v28;
      if ( m_surfaceID )
      {
        R_RT_Handle::GetSurface(&v47);
        v48 = v47;
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      v54.m_colorRtCount = 1;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v49.m_surfaceID = 0;
      v49.m_tracking.m_allocCounter = 0;
      *(_OWORD *)&v49.m_tracking.m_name = _XMM0;
      v53 = v48;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v53);
      }
      else
      {
        if ( v47.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      v54.m_colorRts[0] = (R_RT_ColorHandle)v48;
      v33 = (R_RT_DepthHandle)v49;
      goto LABEL_91;
    }
    if ( v29 == 16 )
    {
      v34 = _XMM0;
      v48 = v28;
      v47 = v28;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v47);
        if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v28 = v47;
          LODWORD(_RBX) = v47.m_tracking.m_allocCounter;
          v34 = v47.m_surfaceID;
          v48 = v47;
        }
        else
        {
          v28 = v47;
          LODWORD(_RBX) = v47.m_tracking.m_allocCounter;
          v34 = v47.m_surfaceID;
          v48 = v47;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rbx, xmm0, 2 }
        if ( (_DWORD)_RBX )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v28 = v48;
          if ( v36 )
            __debugbreak();
        }
      }
      v49 = v28;
      if ( v34 )
      {
        R_RT_Handle::GetSurface(&v49);
        v33 = (R_RT_DepthHandle)v49;
      }
      else
      {
        if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        v33 = (R_RT_DepthHandle)v48;
      }
      v54.m_colorRtCount = 0;
LABEL_91:
      v54.m_depthRt = v33;
      rtGroup = v54;
      R_ClearRtGroup(v19, &rtGroup, 0x3Fu, 0, PIPE_FLUSH_NONE);
    }
    else
    {
      m_rtFlagsInternal = R_RT_Handle::GetSurface(&v49)->m_rtFlagsInternal;
      v38 = R_RT_Handle::GetSurface(&v49);
      if ( (m_rtFlagsInternal & 8) != 0 )
      {
        v39 = (v38->m_rtFlags & 0x20000) != 0;
        v40 = R_RT_Handle::GetSurface(&v49);
        if ( (v40->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        R_ClearBuffer_Uint(v19, (const GfxWrappedRWBuffer *)&v40->1080, 0, v39, PIPE_FLUSH_NONE);
      }
      else
      {
        R_ClearImage_Uint(v19, &v38->m_image.m_base, 0, PIPE_FLUSH_NONE);
      }
    }
    ++v27;
    ++v25;
    v26 = (CmdBufState *)((char *)v26 - 1);
    if ( v26 )
      continue;
    break;
  }
  v41 = state;
  v42 = (R_RT_Handle *)v57;
  v43 = 0i64;
  do
  {
    v44 = v56[v43 + 32];
    v45 = v56[v43];
    if ( v44 != v45 )
    {
      v53 = *v42;
      R_HW_AddResourceTransition(v19, &v53, v45, v44, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    ++v43;
    ++v42;
    v41 = (CmdBufState *)((char *)v41 - 1);
  }
  while ( v41 );
  R_HW_FlushResourceTransitions(v19);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(v19);
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
  GfxCmdBufContext *v6; 
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
  int v23; 
  const GfxViewInfo *v24; 
  GfxCmdBufContext *v25; 
  const GfxBackEndData *v26; 
  unsigned __int64 v27; 
  RB_TG_RenderTasksInfo dataa; 
  GfxCmdBufContext v29; 
  R_RT_Handle attachments; 
  GfxTaskInfo v31[336]; 

  smpFrame = data->smpFrame;
  v6 = cmdBufContext;
  v25 = cmdBufContext;
  v26 = data;
  v24 = viewInfo;
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
  v23 = v12;
  g_R_TG_taskGraph.renderHistory[v12 & 3].permutationIndex = v10;
  v13 = Sys_Microseconds();
  source = v6->source;
  v27 = v13;
  R_InitCmdBufSourceState(source, &v7->input);
  memset_0(v31, 0, 320i64 * *((unsigned int *)v11 + 99196));
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
      R_TG_UnpackTaskInfo(taskGraph, v16 + *((_DWORD *)v11 + 99194), &v7->taskGraphViewInfo, R_RENDERTARGET_DISPLAY_BUFFER, v17, &attachments, &attachmentCount, &v31[v16]);
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *((_DWORD *)v11 + 99196) )
        break;
      v15 = attachmentCount;
    }
    v7 = v24;
    v6 = v25;
    v12 = v23;
  }
  state = v6->state;
  if ( !v7->taskGraphViewInfo.temporalFrameIndex )
    RB_TG_ClearOnce(v6->state, taskGraph, v7->clientIndex);
  R_LockGfxImmediateContext();
  R_GPULabel_Set(state, taskGraph->taskLabels + 338, v12, 1);
  R_UnlockGfxImmediateContext();
  v19 = v26;
  dataa.taskInfos = (const R_TG_TaskInfos *)&attachments;
  *(&dataa.renderIndex + 1) = 0;
  dataa.cmdBufContext = v6;
  dataa.taskGraph = taskGraph;
  dataa.viewInfo = v7;
  dataa.data = v26;
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
  v29 = *v6;
  R_SetRenderTargetsInternal_None(&v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(876)");
  RB_TG_IssueEndBarriers(v6->state, taskGraph, v10, conditionDisable, &v7->taskGraphViewInfo);
  v19->endFence = R_FlushImmediateContext();
  R_UnlockGfxImmediateContext();
  if ( (v12 & 0xF) == 0 )
    g_R_TG_taskGraph.renderCpuTimeUs = Sys_Microseconds() - v27;
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
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  GfxCmdBufContext v18; 

  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 5096);
  if ( (unsigned int)(*((_DWORD *)Value + 1274) + 1) >= 3 )
  {
    v17 = 3;
    v15 = *((_DWORD *)Value + 1274) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(v16) = 3;
    LODWORD(v14) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v14, v16) )
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
    LODWORD(v16) = 2;
    LODWORD(v14) = viewInfo->viewportFeatures.m_taskGraphIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 981, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->viewportFeatures.m_taskGraphIndex ) < (unsigned)( 2 )", "viewInfo->viewportFeatures.m_taskGraphIndex doesn't index 2\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( g_R_TG_taskGraph.taskCount )
  {
    v18 = *cmdBufContext;
    RB_TG_Render(&v18, &g_R_TG_taskGraph, viewInfo, data);
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
  char v20[128]; 

  type = task->type;
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
        _XMM0 = *cmdBufContext;
        __asm { vpextrq rbx, xmm0, 1 }
        if ( !R_IsLockedIfGfxImmediateContext(*(const GfxDevice **)(_RBX + 1360)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
          __debugbreak();
        memset_0(v20, 0, sizeof(v20));
        (*(void (__fastcall **)(_QWORD, char *, void *, void *))(**(_QWORD **)(_RBX + 1360) + 640i64))(*(_QWORD *)(_RBX + 1360), v20, &`R_HW_DisableMultiSample'::`2'::s_samplePriorities1xMS, &`R_HW_DisableMultiSample'::`2'::s_eqaa1xMS);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(_RBX + 1360) + 512i64))(*(_QWORD *)(_RBX + 1360), 0i64);
      }
      v16 = cmdBufContext->state;
      R_ResetRenderTargets(v16);
      if ( (*((_BYTE *)&cmdBufContext->source->input + 7920) & 1) != 0 )
      {
        R_ShutdownCmdBufState(v16);
        R_UnlockIfGfxImmediateContext(v16->device);
      }
      else
      {
        _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
        __asm { vpextrq rcx, xmm0, 1; out }
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
  signed int gpuTimer; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *v17; 
  signed int v20; 
  __m256i m_depthRt; 
  const char *v23; 
  int v24; 
  const char *v25; 
  bool v27; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned __int8 discardFlags; 
  signed int v31; 
  const GfxBackEndData *data; 
  int integer; 
  int v34; 
  int taskSharedIndex; 
  ComputeCmdBufState *v36; 
  GfxCmdBufContext result[2]; 
  __m256i v38; 
  GfxViewport viewport[2]; 

  type = task->type;
  if ( type == R_TG_TaskType_Other )
  {
    state = cmdBufContext->state;
    R_LockIfGfxImmediateContext(state->device);
    RB_TG_IssueTaskBeginBarriers(state, taskGraph, task, renderIndex, 1);
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
    R_ProfBeginNamedEvent(*computeState, task->pName);
    Sys_ProfBeginNamedEvent(0xFF4169E1, task->pName);
    R_ClearDescriptorCBVs((*computeState)->descState);
    gpuTimer = task->gpuTimer;
    if ( gpuTimer != 129 )
      R_GPU_BeginTimer((GPUTimerId)gpuTimer);
    RB_TG_IssueTaskBeginBarriers(*computeState, taskGraph, task, renderIndex, 1);
    goto LABEL_48;
  }
  source = cmdBufContext->source;
  R_BeginViewInternal(cmdBufContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  v17 = cmdBufContext->state;
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(v17->device);
    R_InitCmdBufState(v17);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( v17 != _RDX )
      GfxCmdBufState::Copy(v17, _RDX);
  }
  memset_0(v17->perPrimConstantState, 255, sizeof(v17->perPrimConstantState));
  memset_0(v17->perObjectConstantState, 255, sizeof(v17->perObjectConstantState));
  memset_0(v17->stableConstantState, 255, sizeof(v17->stableConstantState));
  v17->data = source->input.data;
  R_ProfBeginNamedEvent(v17, task->pName);
  Sys_ProfBeginNamedEvent(0xFF4169E1, task->pName);
  *computeState = v17;
  R_ClearDescriptorCBVs(v17->descState);
  memset_0(v17->constants, 0, sizeof(v17->constants));
  v20 = task->gpuTimer;
  if ( v20 != 129 )
    R_GPU_BeginTimer((GPUTimerId)v20);
  _XMM0 = *cmdBufContext;
  viewport[0] = *(GfxViewport *)cmdBufContext;
  RB_TG_IssueTaskBeginBarriers_0((GfxCmdBufContext *)viewport, taskGraph, task, &viewInfo->taskGraphViewInfo, renderIndex);
  if ( task->validFunc )
  {
    if ( g_R_TG_defs[task->typeIndex].pSetupFunc )
    {
LABEL_39:
      discardFlags = task->discardFlags;
      if ( discardFlags )
        R_DiscardRtGroup(cmdBufContext->state, &task->rtGroup, discardFlags);
      if ( task->clearFlags )
      {
        if ( task->gpuTimer != 129 )
          R_GPU_EndTimer();
        R_GPU_BeginTimer(GPU_TIMER_CLEAR_SCREEN);
        R_ClearRtGroup(cmdBufContext->state, &task->rtGroup, task->clearFlags, 0, PIPE_FLUSH_FULL);
        R_GPU_EndTimer();
        v31 = task->gpuTimer;
        if ( v31 != 129 )
          R_GPU_BeginTimer((GPUTimerId)v31);
      }
      if ( (task->flags & 0x40) != 0 )
      {
        *((_BYTE *)source + 11668) |= 0x20u;
        data = viewInfo->input.data;
        result[0] = *cmdBufContext;
        R_HW_EnableMultiSample(result, data->frameCount);
      }
      goto LABEL_48;
    }
    if ( task->rtGroup.m_colorRtCount )
    {
      m_depthRt = (__m256i)task->rtGroup.m_colorRts[0];
      *(__m256i *)&viewport[0].x = m_depthRt;
      *(__m256i *)&result[0].source = m_depthRt;
      if ( LOWORD(_XMM0.source) )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)result);
        if ( (R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_rtFlagsInternal & 0x18) == 0 )
          goto LABEL_32;
        v23 = "!colorRt.IsValid() || colorRt.IsColor()";
        v24 = 396;
        v25 = "(!colorRt.IsValid() || colorRt.IsColor())";
LABEL_30:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v24, ASSERT_TYPE_ASSERT, v25, (const char *)&queryFormat, v23) )
        {
          m_depthRt = *(__m256i *)&result[0].source;
          __debugbreak();
          goto LABEL_33;
        }
LABEL_32:
        m_depthRt = *(__m256i *)&result[0].source;
LABEL_33:
        v38 = m_depthRt;
        *(__m256i *)&result[0].source = m_depthRt;
        if ( R_RT_Handle::IsValid((R_RT_Handle *)result) )
        {
          if ( (task->flags & 2) != 0 )
          {
            viewport[0] = viewInfo->displayViewport;
          }
          else
          {
            *(_QWORD *)&viewport[0].x = 0i64;
            viewport[0].width = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.width;
            viewport[0].height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
          }
          *(__m256i *)&result[0].source = v38;
          height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
          Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
          R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
          result[0] = *cmdBufContext;
          R_SetRenderTargetsInternal(result, &task->rtGroup, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(369)");
          R_SetViewportStruct(source, viewport);
          R_SetViewportAndScissorSeparate(cmdBufContext->state, viewport, viewport);
        }
        else
        {
          result[0] = *cmdBufContext;
          R_SetRenderTargetsInternal_None(result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp(374)");
        }
        goto LABEL_39;
      }
    }
    else
    {
      m_depthRt = (__m256i)task->rtGroup.m_depthRt;
      *(__m256i *)&viewport[0].x = m_depthRt;
      *(__m256i *)&result[0].source = m_depthRt;
      if ( LOWORD(_XMM0.source) )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)result);
        if ( (R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_rtFlagsInternal & 0x10) != 0 )
          goto LABEL_32;
        v23 = "!depthRt.IsValid() || depthRt.IsDepth()";
        v24 = 403;
        v25 = "(!depthRt.IsValid() || depthRt.IsDepth())";
        goto LABEL_30;
      }
    }
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      m_depthRt = *(__m256i *)&viewport[0].x;
      if ( v27 )
        __debugbreak();
    }
    goto LABEL_33;
  }
LABEL_48:
  integer = r_tgRenderBarrierSafeModeBeginIndex->current.integer;
  v34 = r_tgRenderBarrierSafeModeEndIndex->current.integer;
  if ( v34 > integer )
  {
    taskSharedIndex = task->taskSharedIndex;
    v36 = *computeState;
    if ( taskSharedIndex >= integer && taskSharedIndex < v34 )
    {
      if ( task->queueIndex )
      {
        R_HW_AddResourceAlias(*computeState);
        R_HW_FlushResourceTransitions(v36);
      }
      else
      {
        R_LockGfxImmediateContext();
        R_HW_AddResourceAlias(v36);
        R_HW_FlushResourceTransitions(v36);
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
  const GfxCmdBufContext *cmdBufContext; 
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
  ComputeCmdBufState *v16; 
  void (__fastcall *pGfxFunc)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *); 
  GfxCmdBufContext *v18; 
  unsigned int renderIndex; 
  unsigned int queueMask; 
  GfxCmdBufContext v21; 
  ComputeCmdBufState *v22; 
  R_TG_AsyncComputeState state; 

  if ( !executeTasksInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 761, ASSERT_TYPE_ASSERT, "(executeTasksInfo != nullptr)", (const char *)&queryFormat, "executeTasksInfo != nullptr") )
    __debugbreak();
  v2 = 1;
  cmdBufContext = executeTasksInfo->cmdBufContext;
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
  if ( !cmdBufContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 774, ASSERT_TYPE_ASSERT, "(cmdBufContext != nullptr)", (const char *)&queryFormat, "cmdBufContext != nullptr") )
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
      v21 = *cmdBufContext;
      RB_TG_RenderPrologue(&v21, taskGraph, (const GfxTaskInfo *)(p_validTask - 250), viewInfo, renderIndex, &state, &v22);
      v16 = v22;
      if ( p_validTask[1] )
      {
        pGfxFunc = (void (__fastcall *)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *))g_R_TG_defs[*(unsigned int *)(p_validTask - 242)].pGfxFunc;
        if ( pGfxFunc )
        {
          v21 = *cmdBufContext;
          v18 = &v21;
LABEL_37:
          pGfxFunc(v18, p_validTask - 250, viewInfo, data);
          goto LABEL_38;
        }
        pGfxFunc = (void (__fastcall *)(GfxCmdBufContext *, bool *, const GfxViewInfo *, const GfxBackEndData *))g_R_TG_defs[*(unsigned int *)(p_validTask - 242)].pComputeFunc;
        if ( pGfxFunc )
        {
          v18 = (GfxCmdBufContext *)v22;
          goto LABEL_37;
        }
      }
LABEL_38:
      v21 = *cmdBufContext;
      RB_TG_RenderEpilogue(&v21, v16, taskGraph, (const GfxTaskInfo *)(p_validTask - 250), viewInfo, renderIndex, &state);
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
  GfxTaskResource *v13; 
  R_TG_AttachmentFlags flags; 
  __m256i v15; 
  bool v16; 
  unsigned int v17; 
  int v18; 
  R_RT_Handle v20; 
  R_RT_ColorHandle resulta; 

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
    v13 = &taskGraph->resources[v12];
    if ( taskGraph->resources[v12].desc.conditionType == eCondition_RenderTime && (taskGraph->resources[v12].desc.conditionFlag & conditionDisable) != 0 )
    {
      result->m_surfaceID = 0;
      result->m_tracking.m_allocCounter = 0;
      result->m_tracking.m_name = NULL;
      result->m_tracking.m_location = NULL;
    }
    else
    {
      flags = v11[5];
      if ( (flags & 0x20) != 0 )
      {
        v15 = *(__m256i *)R_RT_GetGlobalColor(&resulta, displayBuffer);
      }
      else if ( (flags & 0x18) != 0 )
      {
        v15 = *(__m256i *)R_TG_GetRotatedHandle(&resulta, taskGraph, viewInfo, v10, flags, (unsigned __int8)v11[3], (unsigned __int8)v11[4]);
      }
      else if ( (flags & 0x40) != 0 )
      {
        v15 = (__m256i)v13->handle[viewInfo->stepIndexHistory[((unsigned __int8)viewInfo->temporalFrameIndex - 1) & 3]];
      }
      else
      {
        v15 = (__m256i)v13->handle[viewInfo->stepIndex];
      }
      v16 = v11[2] == -1;
      v20 = (R_RT_Handle)v15;
      resulta = (R_RT_ColorHandle)v15;
      if ( v16 )
      {
        *(__m256i *)result = v15;
      }
      else
      {
        if ( v13->desc.levels != 1 && v13->desc.arraySize != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 513, ASSERT_TYPE_ASSERT, "(resource.desc.levels == 1 || resource.desc.arraySize == 1)", (const char *)&queryFormat, "resource.desc.levels == 1 || resource.desc.arraySize == 1") )
          __debugbreak();
        if ( v13->desc.levels <= 1 )
          v17 = 0;
        else
          v17 = (unsigned __int8)v11[2];
        if ( v13->desc.arraySize <= 1 )
          v18 = 0;
        else
          v18 = (unsigned __int8)v11[2];
        if ( v17 < R_RT_Handle::GetSurface(&v20)->m_image.m_base.levelCount )
        {
          R_RT_GetViewInternal(result, &resulta, v18, v17);
        }
        else
        {
          *valid = 0;
          result->m_surfaceID = 0;
          result->m_tracking.m_allocCounter = 0;
          result->m_tracking.m_name = NULL;
          result->m_tracking.m_location = NULL;
        }
      }
    }
  }
  return result;
}

/*
==============
R_TG_GetRotatedHandle
==============
*/
R_RT_Handle *R_TG_GetRotatedHandle(R_RT_Handle *result, const GfxTaskGraph *taskGraph, const GfxTaskGraphViewInfo *viewInfo, unsigned int resourceIndex, R_TG_AttachmentFlags flags, unsigned int temporalIndex, unsigned int pingPongIndex)
{
  GfxTaskResource *v11; 
  unsigned int v12; 
  char temporalFrameIndex; 
  R_RT_Handle v14; 
  const R_RT_Surface *Surface; 
  unsigned int v17; 
  unsigned int v18; 
  const R_RT_Surface *v19; 
  R_RT_Handle v21; 
  const R_RT_Surface *v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 

  result->m_surfaceID = 0;
  result->m_tracking.m_allocCounter = 0;
  result->m_tracking.m_name = NULL;
  result->m_tracking.m_location = NULL;
  v11 = &taskGraph->resources[resourceIndex];
  if ( (flags & 8) != 0 )
  {
    if ( (~flags & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 228, ASSERT_TYPE_ASSERT, "(flags & R_TG_AttachmentFlag_Temporal)", (const char *)&queryFormat, "flags & R_TG_AttachmentFlag_Temporal") )
      __debugbreak();
    v12 = viewInfo->resourceFrameIndices[v11->temporalIndex] + pingPongIndex;
    if ( v12 >= temporalIndex )
    {
      if ( temporalIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 235, ASSERT_TYPE_ASSERT, "(temporalIndex < viewInfo.stepHistoryLimit)", (const char *)&queryFormat, "temporalIndex < viewInfo.stepHistoryLimit") )
        __debugbreak();
      temporalFrameIndex = viewInfo->temporalFrameIndex - 1;
      if ( (flags & 0x40) == 0 )
        temporalFrameIndex = viewInfo->temporalFrameIndex;
      v14 = v11->handle[viewInfo->stepIndexHistory[(temporalFrameIndex - (_BYTE)temporalIndex) & 3]];
      v25 = v14;
      v24 = v14;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v24);
        if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
        {
          v14 = v24;
        }
        else
        {
          v14 = v24;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v14 = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      v25 = v14;
      Surface = R_RT_Handle::GetSurface(&v25);
      if ( (Surface->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 608, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      v17 = Surface->m_array.m_handleCount / taskGraph->viewCount;
      v18 = (v12 + temporalIndex) % v17 + v17 * viewInfo->viewIndex;
      v19 = R_RT_Handle::GetSurface(&v25);
      if ( (v19->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      if ( v18 >= v19->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
        __debugbreak();
      *result = v19->m_array.m_handles[v18];
    }
    return result;
  }
  else
  {
    if ( (flags & 0x10) != 0 )
    {
      v21 = v11->handle[viewInfo->stepIndex];
      v25 = v21;
      v24 = v21;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v24);
        if ( (R_RT_Handle::GetSurface(&v24)->m_rtFlagsInternal & 4) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 379, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsArray())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsArray()") )
        {
          v21 = v24;
        }
        else
        {
          v21 = v24;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v21 = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      v25 = v21;
      v23 = R_RT_Handle::GetSurface(&v25);
      if ( (v23->m_rtFlagsInternal & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 600, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Array)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Array") )
        __debugbreak();
      if ( pingPongIndex >= v23->m_array.m_handleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 601, ASSERT_TYPE_ASSERT, "(index < surface->m_array.m_handleCount)", (const char *)&queryFormat, "index < surface->m_array.m_handleCount") )
        __debugbreak();
      *result = v23->m_array.m_handles[pingPongIndex];
    }
    return result;
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
  GfxTaskGraphViewInfo *v15; 
  unsigned int i; 
  __int64 typeIndex; 
  unsigned int attachmentCount[4]; 
  GfxTaskInfo taskInfo; 
  R_RT_Handle attachments; 

  m_taskGraphPermutation = viewInfo->viewportFeatures.m_taskGraphPermutation;
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
  v11 = RB_TG_GetConditions(taskGraph, viewInfo, 1u);
  if ( (_DWORD)v6 == 5 )
  {
    clientIndex = viewInfo->clientIndex;
    step = 0;
    v14 = !rg.sceneResDynamic;
    v15 = &g_R_TG_taskGraphViewInfo[clientIndex];
    g_R_TG_taskGraphViewInfo[clientIndex].viewIndex = clientIndex;
    if ( v14 )
    {
      g_R_TG_taskGraphViewInfo[clientIndex].stepIndex = 0;
    }
    else
    {
      if ( viewInfo->input.resolution.step )
        step = (unsigned __int8)viewInfo->input.resolution.step;
      g_R_TG_taskGraphViewInfo[clientIndex].stepIndex = step;
      if ( step >= taskGraph->dynamicResolutionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 196, ASSERT_TYPE_ASSERT, "(viewInfoUpdate.stepIndex < taskGraph.dynamicResolutionCount)", (const char *)&queryFormat, "viewInfoUpdate.stepIndex < taskGraph.dynamicResolutionCount") )
        __debugbreak();
      step = v15->stepIndex;
    }
    v15->stepIndexHistory[v15->temporalFrameIndex & 3] = step;
    if ( r_tgRenderClearTemporal->current.enabled || viewInfo->teleported )
    {
      v15->temporalFrameIndex = 0;
      v15->permutationMask = -1;
      memset_0(v15, 0, 0x80ui64);
    }
    *(_OWORD *)viewInfo->taskGraphViewInfo.resourceFrameIndices = *(_OWORD *)v15->resourceFrameIndices;
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[4] = *(_OWORD *)&v15->resourceFrameIndices[4];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[8] = *(_OWORD *)&v15->resourceFrameIndices[8];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[12] = *(_OWORD *)&v15->resourceFrameIndices[12];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[16] = *(_OWORD *)&v15->resourceFrameIndices[16];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[20] = *(_OWORD *)&v15->resourceFrameIndices[20];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[24] = *(_OWORD *)&v15->resourceFrameIndices[24];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.resourceFrameIndices[28] = *(_OWORD *)&v15->resourceFrameIndices[28];
    *(_OWORD *)&viewInfo->taskGraphViewInfo.temporalFrameIndex = *(_OWORD *)&v15->temporalFrameIndex;
    *(_OWORD *)&viewInfo->taskGraphViewInfo.compressedHandle.m_surfaceID = *(_OWORD *)&v15->compressedHandle.m_surfaceID;
    *(_OWORD *)&viewInfo->taskGraphViewInfo.compressedHandle.m_tracking.m_name = *(_OWORD *)&v15->compressedHandle.m_tracking.m_name;
    *(_OWORD *)&viewInfo->taskGraphViewInfo.compressedSubresourceCount = *(_OWORD *)&v15->compressedSubresourceCount;
    *(_QWORD *)&viewInfo->taskGraphViewInfo.stepIndexHistory[2] = *(_QWORD *)&v15->stepIndexHistory[2];
  }
  else if ( (_DWORD)v6 == 6 )
  {
    R_TG_UpdateFrameCount(taskGraph, viewInfo, Conditions);
  }
  for ( i = v10->taskBegin; i < v10->taskEnd; ++i )
  {
    typeIndex = taskGraph->taskShared[taskGraph->tasksPacked[i].taskIndex].typeIndex;
    if ( g_R_TG_defs[typeIndex].pSetupFunc && (_DWORD)v6 == g_R_TG_defs[typeIndex].setupPhase )
    {
      attachmentCount[0] = 0;
      memset_0(&taskInfo, 0, sizeof(taskInfo));
      R_TG_UnpackTaskInfo(taskGraph, i, &viewInfo->taskGraphViewInfo, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND, v11, &attachments, attachmentCount, &taskInfo);
      g_R_TG_defs[taskInfo.typeIndex].pSetupFunc(&taskInfo, viewInfo);
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
  GfxTaskInfo *v12; 
  GfxTaskInfoPacked *v14; 
  __int64 v15; 
  double v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  R_RT_Handle *HandleForAttachment; 
  __int64 v21; 
  R_TG_TaskInfoFlags flags; 
  R_TG_TaskType type; 
  unsigned __int8 rtCount; 
  __m256i v25; 
  bool v27; 
  unsigned int v28; 
  R_RT_ColorHandle *m_colorRts; 
  R_RT_Handle v30; 
  bool v32; 
  unsigned __int8 vrsMaskIndex; 
  R_RT_Handle v34; 
  bool v36; 
  R_RT_Handle v37; 
  R_RT_Handle result; 
  R_RT_Handle v39; 
  unsigned __int8 conditionDisablea; 

  v10 = taskIndex;
  if ( taskIndex >= taskGraph->taskCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_render.cpp", 534, ASSERT_TYPE_ASSERT, "(taskIndex < taskGraph.taskCount)", (const char *)&queryFormat, "taskIndex < taskGraph.taskCount") )
    __debugbreak();
  v12 = taskInfo;
  v14 = &taskGraph->tasksPacked[v10];
  v15 = v14->taskIndex;
  taskInfo->taskPackedIndex = v10;
  taskInfo->taskSharedIndex = v14->taskIndex;
  taskInfo->barrierCount = taskGraph->tasksPacked[v10].barrierCount;
  taskInfo->barrierBatchCount = taskGraph->tasksPacked[v10].barrierBatchCount;
  taskInfo->barrierEndOffset = taskGraph->tasksPacked[v10].barrierEndOffset;
  if ( (conditionDisable & taskGraph->taskShared[v15].renderTimeConditionFlag) != 0 )
  {
    taskInfo->validTask = 0;
  }
  else
  {
    *(__m256i *)&taskInfo->pName = *(__m256i *)&taskGraph->taskShared[v15].pName;
    v16 = *(double *)&taskGraph->taskShared[v15].taskDataCount;
    taskInfo->pGraphInfo = &taskGraph->info;
    v17 = 0;
    v18 = 0;
    *(double *)&taskInfo->taskDataCount = v16;
    taskInfo->validTask = 1;
    taskInfo->validFunc = 1;
    v19 = v14->attachmentCount;
    taskInfo->attachmentCount = v19;
    taskInfo->attachments = &attachments[*attachmentCount];
    if ( v19 )
    {
      do
      {
        HandleForAttachment = R_TG_GetHandleForAttachment(&result, taskGraph, v18 + v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
        v21 = v18++;
        taskInfo->attachments[v21] = *HandleForAttachment;
      }
      while ( v18 < taskInfo->attachmentCount );
      v17 = 0;
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
        v25 = *(__m256i *)R_TG_GetHandleForAttachment(&v39, taskGraph, rtCount + v14->attachmentCount + (unsigned int)v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
        result = (R_RT_Handle)v25;
        v37 = (R_RT_Handle)v25;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v37);
          if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
          {
            v25 = (__m256i)v37;
          }
          else
          {
            v25 = (__m256i)v37;
            __debugbreak();
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v25 = (__m256i)result;
            if ( v27 )
              __debugbreak();
          }
        }
        taskInfo->rtGroup.m_depthRt = (R_RT_DepthHandle)v25;
      }
      v28 = rtCount;
      if ( rtCount )
      {
        m_colorRts = taskInfo->rtGroup.m_colorRts;
        do
        {
          v30 = *R_TG_GetHandleForAttachment(&v39, taskGraph, v17 + v14->attachmentCount + v14->handleOffset, viewInfo, displayBuffer, conditionDisable, &taskInfo->validFunc);
          result = v30;
          v37 = v30;
          if ( (_WORD)_XMM0 )
          {
            R_RT_Handle::GetSurface(&v37);
            if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
            {
              v30 = v37;
              __debugbreak();
            }
            else
            {
              v30 = v37;
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              v30 = result;
              if ( v32 )
                __debugbreak();
            }
          }
          *m_colorRts++ = (R_RT_ColorHandle)v30;
          ++v17;
        }
        while ( v17 < v28 );
        v12 = taskInfo;
        rtCount = conditionDisablea;
      }
      v12->rtGroup.m_colorRtCount = rtCount;
    }
    vrsMaskIndex = v14->vrsMaskIndex;
    if ( vrsMaskIndex != 0xFF )
    {
      v34 = v12->attachments[vrsMaskIndex];
      result = v34;
      v37 = v34;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v37);
        if ( (R_RT_Handle::GetSurface(&v37)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v34 = v37;
          __debugbreak();
        }
        else
        {
          v34 = v37;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v34 = result;
          if ( v36 )
            __debugbreak();
        }
      }
      v12->rtGroup.m_vrsRt = (R_RT_ColorHandle)v34;
    }
    v12->barrierDecompressBeginFirst = v14->barrierDecompressBeginFirst;
    v12->barrierDecompressBeginLast = v14->barrierDecompressBeginLast;
    v12->taskDependencyAsyncPrevIndex = v14->taskDependencyAsyncPrevIndex;
    v12->taskDependencyAsyncNextIndex = v14->taskDependencyAsyncNextIndex;
    v12->taskDependencyPrevIndex = v14->taskDependencyPrevIndex;
    v12->taskDependencyNextIndex = v14->taskDependencyNextIndex;
    v12->barrierAliasing = v14->taskDependencyAliasing != 0xFFFF;
    v12->barriers = &taskGraph->taskBarriers[v14->barrierOffset];
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

