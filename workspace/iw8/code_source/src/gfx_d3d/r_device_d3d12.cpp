/*
==============
R_FinishGpuFence
==============
*/

void R_FinishGpuFence(void)
{
  ?R_FinishGpuFence@@YAXXZ();
}

/*
==============
R_HW_Clear
==============
*/

HRESULT __fastcall R_HW_Clear(GfxDevice *device, GfxDescriptorState *descState, const R_RT_Group *rtGroup, unsigned int flags, const vec4_t *mrtColor, unsigned int mrtColorCount, float depth, unsigned int stencil)
{
  return ?R_HW_Clear@@YAJPEAUGfxDevice@@PEAUGfxDescriptorState@@AEBUR_RT_Group@@IPEBTvec4_t@@IMI@Z(device, descState, rtGroup, flags, mrtColor, mrtColorCount, depth, stencil);
}

/*
==============
R_AcquireGpuFenceLock
==============
*/

void R_AcquireGpuFenceLock(void)
{
  ?R_AcquireGpuFenceLock@@YAXXZ();
}

/*
==============
R_ReleaseGpuFenceLock
==============
*/

void R_ReleaseGpuFenceLock(void)
{
  ?R_ReleaseGpuFenceLock@@YAXXZ();
}

/*
==============
R_HW_ClearDepthViewport
==============
*/

HRESULT __fastcall R_HW_ClearDepthViewport(GfxDevice *device, GfxDescriptorState *descState, R_RT_DepthHandle *depthRt, float depth, GfxViewport *viewport)
{
  return ?R_HW_ClearDepthViewport@@YAJPEAUGfxDevice@@PEAUGfxDescriptorState@@VR_RT_DepthHandle@@MUGfxViewport@@@Z(device, descState, depthRt, depth, viewport);
}

/*
==============
R_GetDeviceRemovedErrorString
==============
*/

void __fastcall R_GetDeviceRemovedErrorString(char *outErrText, unsigned __int64 errTextBuffCount, unsigned int inErrCode)
{
  ?R_GetDeviceRemovedErrorString@@YAXPEAD_KI@Z(outErrText, errTextBuffCount, inErrCode);
}

/*
==============
R_HW_CopyTexture
==============
*/

void __fastcall R_HW_CopyTexture(GfxDevice *device, ID3D12Resource *dst, ID3D12Resource *src)
{
  ?R_HW_CopyTexture@@YAXPEAUGfxDevice@@PEAUID3D12Resource@@1@Z(device, dst, src);
}

/*
==============
R_AcquireGpuFenceLock
==============
*/
void R_AcquireGpuFenceLock(void)
{
  Sys_EnterCriticalSection(CRITSECT_GPU_FENCE);
}

/*
==============
R_FinishGpuFence
==============
*/
void R_FinishGpuFence(void)
{
  char *Value; 
  int *v1; 
  _QWORD *v2; 
  char *v3; 
  int *v4; 
  unsigned __int64 v5; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 

  Value = (char *)Sys_GetValue(0);
  v1 = (int *)(Value + 7096);
  if ( (unsigned int)(*((_DWORD *)Value + 1774) + 1) >= 3 )
  {
    v12 = 3;
    v10 = *((_DWORD *)Value + 1774) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)++*v1 >= 3 )
  {
    LODWORD(v11) = 3;
    LODWORD(v9) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v2 = Value + 2088;
  v3 = Value + 40;
  if ( *v2 < (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v2 += 8i64;
  if ( *v2 >= (unsigned __int64)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v2 = v1;
  if ( *v2 <= (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v4 = &v1[*v1 + 2];
  v5 = __rdtsc();
  *v4 = v5;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 125, NULL, 0);
  while ( g_dx.flushGpuFenceIssued )
  {
    if ( g_dx.flushGpuFenceCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 35, ASSERT_TYPE_ASSERT, "(g_dx.flushGpuFenceCount == 1)", (const char *)&queryFormat, "g_dx.flushGpuFenceCount == 1") )
      __debugbreak();
    if ( !g_dx.flushGpuFence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 13, ASSERT_TYPE_ASSERT, "(g_dx.flushGpuFence)", (const char *)&queryFormat, "g_dx.flushGpuFence") )
      __debugbreak();
    if ( g_dx.flushGpuFenceCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 14, ASSERT_TYPE_ASSERT, "(g_dx.flushGpuFenceCount == 1)", (const char *)&queryFormat, "g_dx.flushGpuFenceCount == 1") )
      __debugbreak();
    v7 = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
    g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = v7;
    if ( v7 >= g_dx.flushGpuFence )
      --g_dx.flushGpuFenceCount;
    if ( v7 >= g_dx.flushGpuFence )
    {
      g_dx.flushGpuFenceIssued = 0;
      if ( !g_dx.flushGpuFenceCount )
        goto LABEL_39;
      v8 = 41;
      goto LABEL_37;
    }
  }
  if ( !g_dx.flushGpuFenceCount )
    goto LABEL_39;
  v8 = 31;
LABEL_37:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", v8, ASSERT_TYPE_ASSERT, "(!g_dx.flushGpuFenceCount)", (const char *)&queryFormat, "!g_dx.flushGpuFenceCount") )
    __debugbreak();
LABEL_39:
  Profile_EndInternal(NULL);
}

/*
==============
R_GetDeviceRemovedErrorString
==============
*/
void R_GetDeviceRemovedErrorString(char *outErrText, unsigned __int64 errTextBuffCount, unsigned int inErrCode)
{
  ID3D12Device *d3d12device; 
  int v7; 
  const char *v8; 
  int v9; 
  unsigned __int64 v10; 

  d3d12device = g_dx.d3d12device;
  if ( g_dx.d3d12device )
    v7 = g_dx.d3d12device->m_pFunction[12].AddRef(g_dx.d3d12device);
  else
    v7 = 0;
  if ( inErrCode != -2005270523 && !v7 )
  {
    if ( errTextBuffCount )
      *outErrText = 0;
    return;
  }
  if ( d3d12device )
  {
    if ( v7 > -2005270521 )
    {
      if ( v7 == -2005270496 )
      {
        v8 = "Driver Internal Error";
        goto LABEL_24;
      }
      if ( !v7 )
      {
        v8 = "Ok";
        goto LABEL_24;
      }
    }
    else
    {
      switch ( v7 )
      {
        case -2005270521:
          v8 = "Device Reset";
          goto LABEL_24;
        case -2005270527:
          v8 = "Invalid Call";
          goto LABEL_24;
        case -2005270523:
          v8 = "Device Removed";
          goto LABEL_24;
        case -2005270522:
          v8 = "Device Hung";
          goto LABEL_24;
      }
    }
    v8 = "Unknown";
    goto LABEL_24;
  }
  v8 = "Device Null";
LABEL_24:
  v9 = Com_sprintf_truncate(outErrText, (int)errTextBuffCount, "Device Removed Reason: (%X) ", (unsigned int)v7);
  if ( v9 >= 0 )
  {
    v10 = -1i64 - v9 + errTextBuffCount;
    if ( v10 )
      Com_sprintf_truncate(&outErrText[v9], (int)v10, "'%s'", v8);
  }
}

/*
==============
R_HW_Clear
==============
*/
__int64 R_HW_Clear(GfxDevice *device, GfxDescriptorState *descState, const R_RT_Group *rtGroup, unsigned int flags, const vec4_t *mrtColor, unsigned int mrtColorCount)
{
  unsigned int v7; 
  GfxDevice *v9; 
  unsigned int m_colorRtCount; 
  unsigned int m_allocCounter; 
  unsigned int v12; 
  unsigned int v13; 
  R_RT_ColorHandle *m_colorRts; 
  int v15; 
  GfxDevice *v16; 
  unsigned int v17; 
  unsigned int levelCount; 
  const vec4_t *v19; 
  unsigned int i; 
  R_RT_Handle v21; 
  bool v23; 
  const R_RT_Surface *Surface; 
  unsigned int m_targetView; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int j; 
  R_RT_Handle v30; 
  bool v32; 
  const R_RT_Surface *v33; 
  unsigned int v34; 
  unsigned int v36; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  R_RT_Handle v42; 
  R_RT_Handle v43; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  R_RT_Handle m_depthRt; 

  v7 = flags;
  v9 = device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( (v7 & 0xF) != 0 )
    m_colorRtCount = rtGroup->m_colorRtCount;
  else
    m_colorRtCount = 0;
  v36 = m_colorRtCount;
  if ( (v7 & 0x30) != 0 )
  {
    m_depthRt = (R_RT_Handle)rtGroup->m_depthRt;
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&m_depthRt.m_tracking.m_name = _XMM0;
    m_depthRt.m_surfaceID = 0;
    m_depthRt.m_tracking.m_allocCounter = 0;
  }
  v43 = m_depthRt;
  m_allocCounter = m_depthRt.m_tracking.m_allocCounter;
  if ( !m_colorRtCount )
  {
    if ( v43.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&v43);
    }
    else
    {
      if ( m_depthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v43.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 165, ASSERT_TYPE_ASSERT, "(colorRtCount || depthRt)", (const char *)&queryFormat, "colorRtCount || depthRt") )
        __debugbreak();
    }
  }
  if ( mrtColorCount != 1 && mrtColorCount != m_colorRtCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 166, ASSERT_TYPE_ASSERT, "(mrtColorCount == 1 || mrtColorCount == colorRtCount)", (const char *)&queryFormat, "mrtColorCount == 1 || mrtColorCount == colorRtCount") )
    __debugbreak();
  v12 = 0;
  v39 = 0;
  if ( m_colorRtCount )
  {
    v13 = m_colorRtCount;
    m_colorRts = rtGroup->m_colorRts;
    v15 = 1;
    v40 = 1;
    v16 = v9;
    do
    {
      if ( (v15 & v7) != 0 )
      {
        v17 = 1;
        levelCount = R_RT_Handle::GetSurface(m_colorRts)->m_image.m_base.levelCount;
        if ( levelCount > 1 )
          v17 = levelCount;
        if ( mrtColorCount == 1 )
          v19 = mrtColor;
        else
          v19 = &mrtColor[v12];
        for ( i = 0; i < v17; ++i )
        {
          v45 = m_colorRts->R_RT_Handle;
          v21 = *R_RT_GetViewInternal(&v44, &v45, 0, i);
          v45 = v21;
          v42 = v21;
          if ( (_WORD)_XMM0 )
          {
            R_RT_Handle::GetSurface(&v42);
            if ( (R_RT_Handle::GetSurface(&v42)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
            {
              v21 = v42;
              __debugbreak();
            }
            else
            {
              v21 = v42;
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              v21 = v45;
              if ( v23 )
                __debugbreak();
            }
          }
          v45 = v21;
          Surface = R_RT_Handle::GetSurface(&v45);
          if ( (Surface->m_rtFlagsInternal & 0x2010) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 339, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_None") )
            __debugbreak();
          m_targetView = Surface->m_targetView;
          if ( !m_targetView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 341, ASSERT_TYPE_ASSERT, "(colorTargetView)", (const char *)&queryFormat, "colorTargetView") )
            __debugbreak();
          ((void (__fastcall *)(GfxDevice *, unsigned __int64, const vec4_t *, _QWORD, _QWORD))v16->m_pFunction[17].AddRef)(v16, g_descriptorPools.rtViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.rtViewPool.handle.parent->descriptorSize * (m_targetView + g_descriptorPools.rtViewPool.handle.startSlot), v19, 0i64, 0i64);
        }
        v15 = v40;
        v7 = flags;
        v13 = v36;
        v12 = v39;
      }
      ++v12;
      v15 = __ROL4__(v15, 1);
      ++m_colorRts;
      v39 = v12;
      v40 = v15;
    }
    while ( v12 < v13 );
    v9 = device;
    m_allocCounter = v43.m_tracking.m_allocCounter;
  }
  if ( v43.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v43);
    if ( (v7 & 0x20) != 0 && (R_RT_Handle::GetSurface(&v43)->m_rtFlags & 0x80) != 0 )
      v26 = 2;
    else
      v26 = 0;
    v38 = v26 | (v7 >> 4) & 1;
    v27 = 1;
    v28 = R_RT_Handle::GetSurface(&v43)->m_image.m_base.levelCount;
    if ( v28 > 1 )
      v27 = v28;
    for ( j = 0; j < v27; ++j )
    {
      v45 = m_depthRt;
      v30 = *R_RT_GetViewInternal(&v44, &v45, 0, j);
      v45 = v30;
      v42 = v30;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v42);
        if ( (R_RT_Handle::GetSurface(&v42)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
        {
          v30 = v42;
        }
        else
        {
          v30 = v42;
          __debugbreak();
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v30 = v45;
          if ( v32 )
            __debugbreak();
        }
      }
      v45 = v30;
      v33 = R_RT_Handle::GetSurface(&v45);
      if ( (v33->m_rtFlagsInternal & 0x2010) != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 429, ASSERT_TYPE_ASSERT, "(( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth)", (const char *)&queryFormat, "( surface->m_rtFlagsInternal & ( R_RT_FlagInternal_Depth | R_RT_FlagInternal_Abandoned ) ) == R_RT_FlagInternal_Depth") )
        __debugbreak();
      v34 = v33->m_targetView;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 431, ASSERT_TYPE_ASSERT, "(depthTargetView)", (const char *)&queryFormat, "depthTargetView") )
        __debugbreak();
      v9->m_pFunction[17].QueryInterface(v9, (const _GUID *)(g_descriptorPools.dsViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.dsViewPool.handle.parent->descriptorSize * (v34 + g_descriptorPools.dsViewPool.handle.startSlot)), (void **)v38);
    }
  }
  else if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  return 0i64;
}

/*
==============
R_HW_ClearDepthViewport
==============
*/
__int64 R_HW_ClearDepthViewport(GfxDevice *device, GfxDescriptorState *descState, R_RT_DepthHandle *depthRt, float depth, GfxViewport *viewport)
{
  unsigned int DepthTargetView; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int width; 
  unsigned int v13; 
  unsigned int v14; 

  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v13 = viewport->width + viewport->x;
  v14 = viewport->y + viewport->height;
  if ( v13 > R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width )
  {
    width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
    v10 = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 226, ASSERT_TYPE_ASSERT, "( (uint)rect.right ) <= ( depthRt.GetWidth() )", "%s <= %s\n\t%i, %i", "(uint)rect.right", "depthRt.GetWidth()", v10, width) )
      __debugbreak();
  }
  if ( v14 > R_RT_Handle::GetSurface(depthRt)->m_image.m_base.height )
  {
    LODWORD(v11) = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.height;
    LODWORD(v9) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 227, ASSERT_TYPE_ASSERT, "( (uint)rect.bottom ) <= ( depthRt.GetHeight() )", "%s <= %s\n\t%i, %i", "(uint)rect.bottom", "depthRt.GetHeight()", v9, v11) )
      __debugbreak();
  }
  DepthTargetView = R_RT_DepthHandle::DX_GetDepthTargetView(depthRt);
  device->m_pFunction[17].QueryInterface(device, (const _GUID *)(g_descriptorPools.dsViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.dsViewPool.handle.parent->descriptorSize * (DepthTargetView + g_descriptorPools.dsViewPool.handle.startSlot)), (void **)1);
  return 0i64;
}

/*
==============
R_HW_CopyTexture
==============
*/
void R_HW_CopyTexture(GfxDevice *device, ID3D12Resource *dst, ID3D12Resource *src)
{
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 566, ASSERT_TYPE_ASSERT, "(dst != nullptr)", (const char *)&queryFormat, "dst != nullptr") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 567, ASSERT_TYPE_ASSERT, "(src != nullptr)", (const char *)&queryFormat, "src != nullptr") )
    __debugbreak();
  if ( src == dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.cpp", 568, ASSERT_TYPE_ASSERT, "(src != dst)", (const char *)&queryFormat, "src != dst") )
    __debugbreak();
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "R_HW_CopyTexture");
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource *, ID3D12Resource *, _QWORD))device->m_pFunction[28].QueryInterface)(device, dst, src, 0i64);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_ReleaseGpuFenceLock
==============
*/
void R_ReleaseGpuFenceLock(void)
{
  Sys_LeaveCriticalSection(CRITSECT_GPU_FENCE);
}

