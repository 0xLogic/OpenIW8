/*
==============
TimerTree::WalkSubTree<GPUTimerTree::WalkData *>
==============
*/

bool __fastcall TimerTree::WalkSubTree<GPUTimerTree::WalkData *>(bool (__fastcall *pNodeFunc)(GfxCmdBufContext *__struct_ptr, GPUTimeStampNode *, unsigned int, GPUTimerTree::WalkData *), GfxCmdBufContext *gfxContext, GPUTimeStampNode *pSubtree, GPUTimerTree::WalkData *userdata, unsigned int currentDepth)
{
  return ??$WalkSubTree@PEAUWalkData@GPUTimerTree@@@TimerTree@@SA_NP6A_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAUWalkData@GPUTimerTree@@@Z012I@Z(pNodeFunc, gfxContext, pSubtree, userdata, currentDepth);
}

/*
==============
TimerTree::WalkSubTree<GpuTimerView *>
==============
*/

bool __fastcall TimerTree::WalkSubTree<GpuTimerView *>(bool (__fastcall *pNodeFunc)(GfxCmdBufContext *__struct_ptr, GPUTimeStampNode *, unsigned int, GpuTimerView *), GfxCmdBufContext *gfxContext, GPUTimeStampNode *pSubtree, GpuTimerView *userdata, unsigned int currentDepth)
{
  return ??$WalkSubTree@PEAVGpuTimerView@@@TimerTree@@SA_NP6A_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAVGpuTimerView@@@Z012I@Z(pNodeFunc, gfxContext, pSubtree, userdata, currentDepth);
}

/*
==============
TimerTree::Lock
==============
*/

void __fastcall TimerTree::Lock(TimerTree *this)
{
  ?Lock@TimerTree@@QEAAXXZ(this);
}

/*
==============
TimerTree::Unlock
==============
*/

void __fastcall TimerTree::Unlock(TimerTree *this)
{
  ?Unlock@TimerTree@@QEAAXXZ(this);
}

/*
==============
Lock
==============
*/
void Lock(BucketAllocator *ba)
{
  if ( !ba && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bucketallocator.cpp", 61, ASSERT_TYPE_ASSERT, "(ba)", (const char *)&queryFormat, "ba") )
    __debugbreak();
  if ( ba->threadParams.threadSafe )
    Sys_EnterCriticalSection(ba->threadParams.criticalSection);
}

/*
==============
TimerTree::WalkSubTree<GPUTimerTree::WalkData *>
==============
*/
char TimerTree::WalkSubTree<GPUTimerTree::WalkData *>(bool (*pNodeFunc)(GfxCmdBufContext *__struct_ptr, GPUTimeStampNode *, unsigned int, GPUTimerTree::WalkData *), GfxCmdBufContext *gfxContext, GPUTimeStampNode *pSubtree, GPUTimerTree::WalkData *userdata, unsigned int currentDepth)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<GPUTimeStampNode *> > *p_m_listHead; 
  GPUTimeStampNode *mp_prev; 
  GfxCmdBufContext v15[3]; 

  __asm { vmovups xmm0, xmmword ptr [rdx] }
  _R14 = gfxContext;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  if ( !((unsigned __int8 (__fastcall *)(GfxCmdBufContext *, GPUTimeStampNode *, _QWORD))pNodeFunc)(v15, pSubtree, currentDepth) )
  {
    mp_next = pSubtree->m_children.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &pSubtree->m_children.m_listHead;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      __asm { vmovups xmm0, xmmword ptr [r14] }
      mp_prev = (GPUTimeStampNode *)mp_next[1].mp_prev;
      __asm { vmovups [rsp+68h+var_38], xmm0 }
      if ( TimerTree::WalkSubTree<GPUTimerTree::WalkData *>(pNodeFunc, v15, mp_prev, userdata, currentDepth + 1) )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
        return 0;
    }
  }
  return 1;
}

/*
==============
TimerTree::WalkSubTree<GpuTimerView *>
==============
*/
char TimerTree::WalkSubTree<GpuTimerView *>(bool (*pNodeFunc)(GfxCmdBufContext *__struct_ptr, GPUTimeStampNode *, unsigned int, GpuTimerView *), GfxCmdBufContext *gfxContext, GPUTimeStampNode *pSubtree, GpuTimerView *userdata, unsigned int currentDepth)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<GPUTimeStampNode *> > *p_m_listHead; 
  GPUTimeStampNode *mp_prev; 
  GfxCmdBufContext v15[3]; 

  __asm { vmovups xmm0, xmmword ptr [rdx] }
  _R14 = gfxContext;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  if ( !((unsigned __int8 (__fastcall *)(GfxCmdBufContext *, GPUTimeStampNode *, _QWORD))pNodeFunc)(v15, pSubtree, currentDepth) )
  {
    mp_next = pSubtree->m_children.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &pSubtree->m_children.m_listHead;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      __asm { vmovups xmm0, xmmword ptr [r14] }
      mp_prev = (GPUTimeStampNode *)mp_next[1].mp_prev;
      __asm { vmovups [rsp+68h+var_38], xmm0 }
      if ( TimerTree::WalkSubTree<GpuTimerView *>(pNodeFunc, v15, mp_prev, userdata, currentDepth + 1) )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
        return 0;
    }
  }
  return 1;
}

/*
==============
TimerTree::Lock
==============
*/
void TimerTree::Lock(TimerTree *this)
{
  volatile int *p_m_locked; 

  p_m_locked = &this->m_locked;
  while ( 1 )
  {
    if ( !*p_m_locked )
    {
      if ( ((unsigned __int8)p_m_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_locked) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_m_locked, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
}

/*
==============
TimerTree::Unlock
==============
*/
void TimerTree::Unlock(TimerTree *this)
{
  volatile __int32 *p_m_locked; 

  p_m_locked = &this->m_locked;
  if ( (((_BYTE)this - 60) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_locked) )
    __debugbreak();
  _InterlockedExchange(p_m_locked, 0);
}

/*
==============
Unlock
==============
*/
__int64 Unlock(BINKSND *bs, unsigned int filled)
{
  __int64 voiceIndex; 
  volatile int *p_count; 
  __int64 result; 

  voiceIndex = GetSDBinkContext(bs)->voiceIndex;
  if ( !s_binkVoices[voiceIndex].status && s_binkVoices[voiceIndex].buffer.count > s_binkVoices[voiceIndex].preloadsize )
    s_binkVoices[voiceIndex].status = 1;
  p_count = &s_binkVoices[voiceIndex].buffer.count;
  if ( ((unsigned __int8)p_count & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_binkVoices[voiceIndex].buffer.count) )
    __debugbreak();
  _InterlockedExchangeAdd(p_count, filled);
  result = 1i64;
  s_binkVoices[voiceIndex].buffer.head = (filled + s_binkVoices[voiceIndex].buffer.head) % 0x2EE00;
  return result;
}

