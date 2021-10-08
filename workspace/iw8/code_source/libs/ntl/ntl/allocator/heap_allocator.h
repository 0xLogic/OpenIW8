/*
==============
ntl::heap_allocator<ntl::solitary_buffer_allocator>::~heap_allocator<ntl::solitary_buffer_allocator>
==============
*/

void __fastcall ntl::heap_allocator<ntl::solitary_buffer_allocator>::~heap_allocator<ntl::solitary_buffer_allocator>(ntl::heap_allocator<ntl::solitary_buffer_allocator> *this)
{
  ??1?$heap_allocator@Vsolitary_buffer_allocator@ntl@@@ntl@@QEAA@XZ(this);
}

/*
==============
ntl::heap_allocator<ntl::solitary_buffer_allocator>::~heap_allocator<ntl::solitary_buffer_allocator>
==============
*/
void ntl::heap_allocator<ntl::solitary_buffer_allocator>::~heap_allocator<ntl::solitary_buffer_allocator>(ntl::heap_allocator<ntl::solitary_buffer_allocator> *this)
{
  char *m_buffer; 
  char *v3; 

  ntl::nxheap::shutdown(&this->m_heap);
  ntl::nxheap_region::shutdown(&this->m_region);
  m_buffer = this->m_data.m_buffer;
  if ( m_buffer )
  {
    v3 = this->m_allocator.m_data.m_buffer;
    if ( m_buffer != v3 && v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )", -2i64) )
      __debugbreak();
    this->m_data.m_buffer = NULL;
    this->m_data.m_size = 0i64;
  }
  ntl::nxheap_region::~nxheap_region(&this->m_region);
  ntl::nxheap::~nxheap(&this->m_heap);
}

