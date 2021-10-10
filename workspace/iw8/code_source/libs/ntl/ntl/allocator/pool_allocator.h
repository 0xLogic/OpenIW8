/*
==============
ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve
==============
*/

void __fastcall ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve(ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> *this, const unsigned __int64 num_elements)
{
  ?reserve@?$pool_allocator@V?$list_node@PEAULUIElement@@@internal@ntl@@Vsolitary_buffer_allocator@3@@ntl@@QEAAX_K@Z(this, num_elements);
}

/*
==============
ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve
==============
*/
void ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve(ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> *this, const unsigned __int64 num_elements)
{
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  unsigned __int64 m_size; 
  ntl::internal::list_node<LUIElement *> *m_buffer; 
  ntl::internal::pool_allocator_freelist<24> *v7; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v8; 
  ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> > v9; 

  if ( this->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> >,24>::m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
    __debugbreak();
  if ( 24 * num_elements > this->ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  p_m_freelist = &this->m_freelist;
  v9.m_size = num_elements;
  v9.m_buffer = (ntl::internal::list_node<LUIElement *> *)this->ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer;
  this->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> >,24>::m_data = v9;
  m_size = this->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> >,24>::m_data.m_size;
  m_buffer = this->ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> >,24>::m_data.m_buffer;
  if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
    __debugbreak();
  v7 = p_m_freelist;
  v8 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&m_buffer[m_size];
  do
  {
    v8 -= 3;
    v8->mp_next = &v7->m_head;
    v7 = (ntl::internal::pool_allocator_freelist<24> *)v8;
  }
  while ( v8 > (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)m_buffer );
  p_m_freelist->m_head.mp_next = v8;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
}

