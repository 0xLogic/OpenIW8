/*
==============
StringHashValidator<65536,256,0>::CheckStringHash
==============
*/

void __fastcall StringHashValidator<65536,256,0>::CheckStringHash(StringHashValidator<65536,256,0> *this, const unsigned int hash, const char *const str)
{
  ?CheckStringHash@?$StringHashValidator@$0BAAAA@$0BAA@$0A@@@QEAAXIQEBD@Z(this, hash, str);
}

/*
==============
StringHashValidator<65536,256,0>::CheckStringHash
==============
*/
void StringHashValidator<65536,256,0>::CheckStringHash(StringHashValidator<65536,256,0> *this, const unsigned int hash, const char *const str)
{
  __int64 m_size; 
  ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *p_m_lookup; 
  ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *v8; 
  __int64 v9; 
  __int64 v10; 
  ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *v11; 
  __int64 v12; 
  unsigned int m_bufferInsertOffset; 
  __int64 v14; 
  ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *v15; 
  __int64 v16; 
  __int64 v17; 
  ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  char *v21; 
  bool v22; 
  __int64 v23; 
  __int64 v24; 
  const char *v25; 
  __int64 v26; 

  m_size = this->m_lookup.m_size;
  p_m_lookup = &this->m_lookup;
  v8 = &this->m_lookup;
  v9 = 8 * m_size;
  if ( m_size > 0 )
  {
    do
    {
      v10 = m_size >> 1;
      if ( *(_DWORD *)&v8->m_data.m_buffer[8 * (m_size >> 1)] >= hash )
      {
        m_size >>= 1;
      }
      else
      {
        v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)((char *)v8 + 8 * v10 + 8);
        m_size += -1 - v10;
      }
    }
    while ( m_size > 0 );
    m_size = p_m_lookup->m_size;
  }
  v11 = (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)((char *)p_m_lookup + 8 * m_size);
  if ( v8 != v11 && hash < *(_DWORD *)v8->m_data.m_buffer )
    v8 = (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)((char *)p_m_lookup + v9);
  if ( v8 == v11 )
  {
    if ( this->m_lookup.m_size == 256 )
      Sys_Error((const ObfuscateErrorText)&stru_143DC7C00, 256i64, 0x10000i64);
    v12 = -1i64;
    do
      ++v12;
    while ( str[v12] );
    m_bufferInsertOffset = this->m_stringStore.m_bufferInsertOffset;
    if ( (int)(0xFFFF - m_bufferInsertOffset) <= (int)v12 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DC7DF8, 0x10000i64);
      m_bufferInsertOffset = this->m_stringStore.m_bufferInsertOffset;
    }
    Core_strcpy(&this->m_stringStore.m_buffer[m_bufferInsertOffset], (int)v12 + 1, str);
    this->m_stringStore.m_bufferInsertOffset += v12 + 1;
    if ( m_bufferInsertOffset >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\stringhashvalidator.h", 26, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( MAX_BUF_BYTES )", "offset doesn't index MAX_BUF_BYTES\n\t%i not in [0, %i)", m_bufferInsertOffset, 0x10000) )
      __debugbreak();
    v14 = p_m_lookup->m_size;
    v15 = p_m_lookup;
    v16 = v14;
    while ( v16 > 0 )
    {
      v17 = v16 >> 1;
      if ( *(_DWORD *)&v15->m_data.m_buffer[8 * (v16 >> 1)] >= hash )
      {
        v16 >>= 1;
      }
      else
      {
        v15 = (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)((char *)v15 + 8 * v17 + 8);
        v16 += -1 - v17;
      }
    }
    v18 = (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)((char *)p_m_lookup + 8 * v14);
    if ( v15 == v18 )
      goto LABEL_29;
    v19 = (unsigned __int64)p_m_lookup + 8 * v14;
    if ( hash >= *(_DWORD *)v15->m_data.m_buffer )
      v19 = (unsigned __int64)v15;
    if ( (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)v19 == v18 )
    {
LABEL_29:
      v26 = hash;
      v19 = (unsigned __int64)p_m_lookup;
      if ( v14 > 0 )
      {
        do
        {
          v20 = v14 >> 1;
          if ( *(_DWORD *)(v19 + 8 * (v14 >> 1)) >= hash )
          {
            v14 >>= 1;
          }
          else
          {
            v19 += 8 * v20 + 8;
            v14 += -1 - v20;
          }
        }
        while ( v14 > 0 );
        v14 = this->m_lookup.m_size;
      }
      if ( (ntl::fixed_vector_map<unsigned int,unsigned int,256,ntl::less<unsigned int,unsigned int> > *)v19 == v18 || hash < *(_DWORD *)v19 )
      {
        if ( 256 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( (v19 < (unsigned __int64)p_m_lookup || v19 > (unsigned __int64)p_m_lookup + 8 * p_m_lookup->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( (((_BYTE)v19 - (_BYTE)p_m_lookup) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( (unsigned __int64)&v26 >= v19 && &v26 < (__int64 *)&p_m_lookup->m_data.m_buffer[8 * p_m_lookup->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        v21 = &p_m_lookup->m_data.m_buffer[8 * p_m_lookup->m_size];
        if ( (char *)v19 != v21 )
        {
          if ( (char *)v19 == v21 + 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( v21 == v21 + 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v22 = (unsigned __int64)v21 <= v19;
          if ( (unsigned __int64)v21 < v19 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v22 = (unsigned __int64)v21 <= v19;
          }
          if ( !v22 )
          {
            do
            {
              v23 = *((_QWORD *)v21 - 1);
              v21 -= 8;
              *((_QWORD *)v21 + 1) = v23;
            }
            while ( (unsigned __int64)v21 > v19 );
          }
        }
        v24 = v26;
        ++p_m_lookup->m_size;
        *(_QWORD *)v19 = v24;
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector_map\\fixed_vector_map.h", 84, ASSERT_TYPE_ASSERT, "( retVal.second )", (const char *)&queryFormat, "retVal.second") )
      {
        __debugbreak();
        *(_DWORD *)(v19 + 4) = m_bufferInsertOffset;
        return;
      }
    }
    *(_DWORD *)(v19 + 4) = m_bufferInsertOffset;
  }
  else
  {
    if ( *(_DWORD *)&v8->m_data.m_buffer[4] >= 0x10000u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\stringhashvalidator.h", 31, ASSERT_TYPE_ASSERT, "(unsigned)( it->second ) < (unsigned)( MAX_BUF_BYTES )", "it->second doesn't index MAX_BUF_BYTES\n\t%i not in [0, %i)", *(_DWORD *)&v8->m_data.m_buffer[4], 0x10000) )
      __debugbreak();
    v25 = &this->m_stringStore.m_buffer[*(unsigned int *)&v8->m_data.m_buffer[4]];
    if ( I_stricmp(str, v25) )
      Sys_Error((const ObfuscateErrorText)&stru_143DC7DA0, str, v25, 256i64, 0x10000i64);
  }
}

