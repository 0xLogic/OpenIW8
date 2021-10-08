/*
==============
DebugLogQueue::DebugLogQueue
==============
*/

void __fastcall DebugLogQueue::DebugLogQueue(DebugLogQueue *this)
{
  ??0DebugLogQueue@@QEAA@XZ(this);
}

/*
==============
DebugLogQueue::DebugLogQueue
==============
*/
void DebugLogQueue::DebugLogQueue(DebugLogQueue *this)
{
  ntl::internal::pool_allocator_freelist<536> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<536> *v3; 

  p_m_freelist = &this->m_entries.m_freelist;
  v3 = &this->m_entries.m_freelist;
  do
  {
    v3 -= 67;
    v3->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v3;
  }
  while ( v3 > (ntl::internal::pool_allocator_freelist<536> *)this );
  this->m_entries.m_freelist.m_head.mp_next = &v3->m_head;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_entries.m_listHead.m_sentinel.mp_prev = &this->m_entries.m_listHead.m_sentinel;
  this->m_entries.m_listHead.m_sentinel.mp_next = &this->m_entries.m_listHead.m_sentinel;
  this->m_def = NULL;
  this->m_isVisible = 0;
  this->m_infoLineText[0] = 0;
}

