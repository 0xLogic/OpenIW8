/*
==============
Com_CircularBuffer_UnitTests
==============
*/

void Com_CircularBuffer_UnitTests(void)
{
  ?Com_CircularBuffer_UnitTests@@YAXXZ();
}

/*
==============
Com_CircularBuffer_UnitTests
==============
*/
void Com_CircularBuffer_UnitTests(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  const unsigned __int8 *v3; 
  __int64 v4; 
  unsigned __int16 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  signed __int64 v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  char v15; 
  const char *v16; 
  unsigned __int8 *v17; 
  unsigned int v18; 
  signed __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned __int8 *data[2]; 
  CircularEntryBuffer<2,20,int,0> v26; 

  v26.TYPE_NOT_SPECIFIED = -1;
  data[1] = "testastring";
  v26.m_bufferNextIndex = 0;
  v0 = 0;
  data[0] = "testalongerstring";
  v1 = 0i64;
  v2 = 0x7FFFFFFFi64;
  do
  {
    v3 = data[v1];
    v4 = -1i64;
    while ( v3[++v4] != 0 )
      ;
    CircularEntryBuffer<2,20,int,0>::SetDataAndType(&v26, v0, v3, v4 + 1, v0);
    if ( v26.m_bufferNextIndex - *(_DWORD *)&v26.m_buffer[8 * v1 - 16] <= 0x14 && (v6 = *(_WORD *)&v26.m_buffer[8 * v1 - 12]) != 0 )
    {
      v7 = *(_DWORD *)&v26.m_buffer[8 * v1 - 16] % 0x14u;
      v8 = v7 + v6;
      if ( v8 > 0x14 )
      {
        LODWORD(v24) = 20;
        LODWORD(v23) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v23, v24) )
          __debugbreak();
      }
      v9 = &v26.m_buffer[v7];
    }
    else
    {
      v9 = NULL;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 20, ASSERT_TYPE_ASSERT, "(bufferA.GetStr( id, &cmd ))", (const char *)&queryFormat, "bufferA.GetStr( id, &cmd )") )
        __debugbreak();
    }
    v10 = data[v1];
    v11 = 0x7FFFFFFFi64;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v12 = v9 - v10;
    do
    {
      v13 = v10[v12];
      v14 = v11;
      v15 = *v10++;
      --v11;
      if ( !v14 )
        break;
      if ( v13 != v15 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 22, ASSERT_TYPE_ASSERT, "(!I_strcmp( cmd, firstTestStr[id] ))", (const char *)&queryFormat, "!I_strcmp( cmd, firstTestStr[id] )") )
          __debugbreak();
        break;
      }
    }
    while ( v13 );
    if ( v26.m_buffer[8 * v1 - 10] != v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 23, ASSERT_TYPE_ASSERT, "(bufferA.GetType( id ) == id)", (const char *)&queryFormat, "bufferA.GetType( id ) == id") )
      __debugbreak();
    ++v0;
    ++v1;
  }
  while ( v0 < 2 );
  v16 = "testastring";
  if ( !v26.m_entries[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 69, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
    __debugbreak();
  if ( v26.m_bufferNextIndex - v26.m_entries[0].offset < 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 27, ASSERT_TYPE_ASSERT, "(bufferA.IsNearBufferLimit( 0, 0.8f ))", (const char *)&queryFormat, "bufferA.IsNearBufferLimit( 0, 0.8f )") )
    __debugbreak();
  if ( v26.m_bufferNextIndex - v26.m_entries[0].offset <= 0x14 && v26.m_entries[0].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 28, ASSERT_TYPE_ASSERT, "(!bufferA.IsDataAvailable( 0 ))", (const char *)&queryFormat, "!bufferA.IsDataAvailable( 0 )") )
    __debugbreak();
  if ( v26.m_bufferNextIndex - v26.m_entries[0].offset <= 0x14 && v26.m_entries[0].size )
  {
    if ( v26.m_entries[0].offset % 0x14 + v26.m_entries[0].size > 0x14 )
    {
      LODWORD(v24) = 20;
      LODWORD(v23) = v26.m_entries[0].offset % 0x14 + v26.m_entries[0].size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v23, v24) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 29, ASSERT_TYPE_ASSERT, "(!bufferA.GetStr( 0, &cmd ))", (const char *)&queryFormat, "!bufferA.GetStr( 0, &cmd )") )
      __debugbreak();
  }
  v17 = NULL;
  v26.m_entries[0] = v26.m_entries[1];
  if ( v26.m_bufferNextIndex - v26.m_entries[1].offset <= 0x14 && v26.m_entries[1].size )
  {
    v18 = v26.m_entries[1].offset % 0x14;
    if ( v26.m_entries[1].offset % 0x14 + v26.m_entries[1].size > 0x14 )
    {
      LODWORD(v24) = 20;
      LODWORD(v23) = v26.m_entries[1].offset % 0x14 + v26.m_entries[1].size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v23, v24) )
        __debugbreak();
    }
    v17 = &v26.m_buffer[v18];
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 35, ASSERT_TYPE_ASSERT, "(bufferA.GetStr( 0, &cmd ))", (const char *)&queryFormat, "bufferA.GetStr( 0, &cmd )") )
  {
    __debugbreak();
  }
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !"testastring" && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v19 = v17 - "testastring";
  do
  {
    v20 = v16[v19];
    v21 = v2;
    v22 = *v16++;
    --v2;
    if ( !v21 )
      break;
    if ( v20 != v22 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.cpp", 36, ASSERT_TYPE_ASSERT, "(!I_strcmp( cmd, firstTestStr[1] ))", (const char *)&queryFormat, "!I_strcmp( cmd, firstTestStr[1] )") )
        __debugbreak();
      return;
    }
  }
  while ( v20 );
}

