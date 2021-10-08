/*
==============
ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>
==============
*/

void __fastcall ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>(ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0> *this)
{
  ??0?$fixed_list@UCgSimBulletFirePellet_MainThreadEvent@@$0BAA@$0A@@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>
==============
*/
void ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0>(ntl::fixed_list<CgSimBulletFirePellet_MainThreadEvent,256,0> *this)
{
  ntl::internal::pool_allocator_freelist<176> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<176> *v3; 

  p_m_freelist = &this->m_freelist;
  v3 = &this->m_freelist;
  do
  {
    v3 -= 22;
    v3->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v3;
  }
  while ( v3 > (ntl::internal::pool_allocator_freelist<176> *)this );
  this->m_freelist.m_head.mp_next = &v3->m_head;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_listHead.m_sentinel.mp_prev = &this->m_listHead.m_sentinel;
  this->m_listHead.m_sentinel.mp_next = &this->m_listHead.m_sentinel;
}

