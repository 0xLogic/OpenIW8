/*
==============
CircularEntryBuffer<512,131072,int,0>::IsDataAvailable
==============
*/

bool __fastcall CircularEntryBuffer<512,131072,int,0>::IsDataAvailable(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex)
{
  return ?IsDataAvailable@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEBA_NI@Z(this, entryIndex);
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::Copy
==============
*/

void __fastcall CircularEntryBuffer<512,131072,int,0>::Copy(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int toentryIndex, const unsigned int fromentryIndex)
{
  ?Copy@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEAAXII@Z(this, toentryIndex, fromentryIndex);
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::GetStr
==============
*/

bool __fastcall CircularEntryBuffer<512,131072,int,0>::GetStr(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const char **outStrBuf)
{
  return ?GetStr@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEBA_NIPEAPEBD@Z(this, entryIndex, outStrBuf);
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::SetDataAndType
==============
*/

void __fastcall CircularEntryBuffer<512,131072,int,0>::SetDataAndType(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  ?SetDataAndType@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEAAXIPEBEIE@Z(this, entryIndex, data, dataSize, type);
}

/*
==============
CircularEntryBuffer<500,131072,unsigned __int64,1>::GetIndexForSequence
==============
*/

unsigned int __fastcall CircularEntryBuffer<500,131072,unsigned __int64,1>::GetIndexForSequence(CircularEntryBuffer<500,131072,unsigned __int64,1> *this, unsigned __int64 sequence)
{
  return ?GetIndexForSequence@?$CircularEntryBuffer@$0BPE@$0CAAAA@_K$00@@QEBAI_K@Z(this, sequence);
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit
==============
*/

bool __fastcall CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const float memoryRatio)
{
  return ?IsNearBufferLimit@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEBA_NIM@Z(this, entryIndex, memoryRatio);
}

/*
==============
CircularEntryBuffer<128,131072,int,0>::SetDataAndType
==============
*/

void __fastcall CircularEntryBuffer<128,131072,int,0>::SetDataAndType(CircularEntryBuffer<128,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  ?SetDataAndType@?$CircularEntryBuffer@$0IA@$0CAAAA@H$0A@@@QEAAXIPEBEIE@Z(this, entryIndex, data, dataSize, type);
}

/*
==============
CircularEntryBuffer<128,131072,int,0>::GetData
==============
*/

bool __fastcall CircularEntryBuffer<128,131072,int,0>::GetData(CircularEntryBuffer<128,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 **outBuf)
{
  return ?GetData@?$CircularEntryBuffer@$0IA@$0CAAAA@H$0A@@@QEBA_NIPEAPEBE@Z(this, entryIndex, outBuf);
}

/*
==============
CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable
==============
*/

bool __fastcall CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable(CircularEntryBuffer<500,1024,unsigned __int64,1> *this, const unsigned int entryIndex)
{
  return ?IsDataAvailable@?$CircularEntryBuffer@$0BPE@$0EAA@_K$00@@QEBA_NI@Z(this, entryIndex);
}

/*
==============
CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable
==============
*/

bool __fastcall CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable(CircularEntryBuffer<500,131072,unsigned __int64,1> *this, const unsigned int entryIndex)
{
  return ?IsDataAvailable@?$CircularEntryBuffer@$0BPE@$0CAAAA@_K$00@@QEBA_NI@Z(this, entryIndex);
}

/*
==============
CircularEntryBuffer<2,20,int,0>::SetDataAndType
==============
*/

void __fastcall CircularEntryBuffer<2,20,int,0>::SetDataAndType(CircularEntryBuffer<2,20,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  ?SetDataAndType@?$CircularEntryBuffer@$01$0BE@H$0A@@@QEAAXIPEBEIE@Z(this, entryIndex, data, dataSize, type);
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::GetData
==============
*/

bool __fastcall CircularEntryBuffer<512,131072,int,0>::GetData(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 **outBuf)
{
  return ?GetData@?$CircularEntryBuffer@$0CAA@$0CAAAA@H$0A@@@QEBA_NIPEAPEBE@Z(this, entryIndex, outBuf);
}

/*
==============
CircularEntryBuffer<2,20,int,0>::SetDataAndType
==============
*/
void CircularEntryBuffer<2,20,int,0>::SetDataAndType(CircularEntryBuffer<2,20,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  size_t v5; 
  __int64 v7; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 *m_buffer; 
  __int64 v12; 

  v5 = dataSize;
  v7 = entryIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 122, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 123, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 124, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( m_buffer ))", (const char *)&queryFormat, "dataSize <= sizeof( m_buffer )") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 125, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  v9 = this->m_bufferNextIndex % 0x14;
  if ( 20 - v9 >= (unsigned int)v5 )
  {
    m_buffer = &this->m_buffer[v9];
  }
  else
  {
    v10 = this->m_bufferNextIndex + 20 - v9;
    this->m_bufferNextIndex = v10;
    if ( v10 != 20 * (v10 / 0x14ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 137, ASSERT_TYPE_ASSERT, "(( m_bufferNextIndex % sizeof( m_buffer ) ) == 0)", (const char *)&queryFormat, "( m_bufferNextIndex % sizeof( m_buffer ) ) == 0") )
      __debugbreak();
    m_buffer = this->m_buffer;
  }
  memcpy_0(m_buffer, data, v5);
  if ( (unsigned int)v5 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v5, "unsigned", v5) )
    __debugbreak();
  this->m_entries[v7].size = v5;
  this->m_entries[v7].offset = this->m_bufferNextIndex;
  this->m_entries[v7].type = type;
  this->m_bufferNextIndex += v5;
}

/*
==============
CircularEntryBuffer<500,131072,unsigned __int64,1>::GetIndexForSequence
==============
*/
unsigned int CircularEntryBuffer<500,131072,unsigned __int64,1>::GetIndexForSequence(CircularEntryBuffer<500,131072,unsigned __int64,1> *this, unsigned __int64 sequence)
{
  return truncate_cast<unsigned int,unsigned __int64>(sequence % 0x1F4);
}

/*
==============
CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable
==============
*/
bool CircularEntryBuffer<500,131072,unsigned __int64,1>::IsDataAvailable(CircularEntryBuffer<500,131072,unsigned __int64,1> *this, const unsigned int entryIndex)
{
  __int64 v2; 
  int v6; 

  v2 = entryIndex;
  if ( entryIndex >= 0x1F4 )
  {
    v6 = 500;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", entryIndex, v6) )
      __debugbreak();
  }
  return this->m_bufferNextIndex - this->m_entries[v2].offset <= 0x20000 && this->m_entries[v2].size;
}

/*
==============
CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable
==============
*/
bool CircularEntryBuffer<500,1024,unsigned __int64,1>::IsDataAvailable(CircularEntryBuffer<500,1024,unsigned __int64,1> *this, const unsigned int entryIndex)
{
  __int64 v2; 
  int v6; 

  v2 = entryIndex;
  if ( entryIndex >= 0x1F4 )
  {
    v6 = 500;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", entryIndex, v6) )
      __debugbreak();
  }
  return this->m_bufferNextIndex - this->m_entries[v2].offset <= 0x400 && this->m_entries[v2].size;
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::GetStr
==============
*/
bool CircularEntryBuffer<512,131072,int,0>::GetStr(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const char **outStrBuf)
{
  __int64 v3; 
  char *v6; 
  int v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  bool result; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = entryIndex;
  if ( !outStrBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 190, ASSERT_TYPE_ASSERT, "(outBuf)", (const char *)&queryFormat, "outBuf") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x200 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 191, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v11, 512) )
      __debugbreak();
    LODWORD(v13) = 512;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v6 = (char *)this + 8 * v3;
  v7 = *((_DWORD *)v6 + 1);
  if ( this->m_bufferNextIndex - v7 <= 0x20000 && (v8 = *((_WORD *)v6 + 4)) != 0 )
  {
    v9 = v7 & 0x1FFFF;
    if ( v8 + (unsigned int)v9 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v8 + (_DWORD)v9, 0x20000) )
      __debugbreak();
    result = 1;
    *outStrBuf = (const char *)&this->m_buffer[v9];
  }
  else
  {
    *outStrBuf = NULL;
    return 0;
  }
  return result;
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::Copy
==============
*/
void CircularEntryBuffer<512,131072,int,0>::Copy(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int toentryIndex, const unsigned int fromentryIndex)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  v3 = fromentryIndex;
  v5 = toentryIndex;
  if ( toentryIndex >= 0x200 )
  {
    v9 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 176, ASSERT_TYPE_ASSERT, "(unsigned)( toentryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "toentryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", toentryIndex, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x200 )
  {
    LODWORD(v8) = 512;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( fromentryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "fromentryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( (_DWORD)v5 == (_DWORD)v3 )
  {
    v11 = v3;
    v10 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 178, ASSERT_TYPE_ASSERT, "( toentryIndex ) != ( fromentryIndex )", "%s != %s\n\t%i, %i", "toentryIndex", "fromentryIndex", v10, v11) )
      __debugbreak();
  }
  this->m_entries[v5] = this->m_entries[v3];
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::GetData
==============
*/
bool CircularEntryBuffer<512,131072,int,0>::GetData(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 **outBuf)
{
  __int64 v3; 
  bool result; 
  int size; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 

  v3 = entryIndex;
  if ( !outBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 190, ASSERT_TYPE_ASSERT, "(outBuf)", (const char *)&queryFormat, "outBuf") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x200 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 191, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v10, 512) )
      __debugbreak();
  }
  result = CircularEntryBuffer<512,131072,int,0>::IsDataAvailable(this, v3);
  if ( result )
  {
    size = this->m_entries[v3].size;
    v8 = this->m_entries[v3].offset & 0x1FFFF;
    v9 = v8 + size;
    if ( v9 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v9, 0x20000) )
      __debugbreak();
    result = 1;
    *outBuf = &this->m_buffer[v8];
  }
  else
  {
    *outBuf = NULL;
  }
  return result;
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::IsDataAvailable
==============
*/
bool CircularEntryBuffer<512,131072,int,0>::IsDataAvailable(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex)
{
  __int64 v2; 
  int v6; 

  v2 = entryIndex;
  if ( entryIndex >= 0x200 )
  {
    v6 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", entryIndex, v6) )
      __debugbreak();
  }
  return this->m_bufferNextIndex - this->m_entries[v2].offset <= 0x20000 && this->m_entries[v2].size;
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::SetDataAndType
==============
*/
void CircularEntryBuffer<512,131072,int,0>::SetDataAndType(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  size_t v5; 
  __int64 v7; 
  unsigned int m_bufferNextIndex; 
  __int64 v10; 
  int v11; 
  unsigned __int8 *m_buffer; 
  __int64 v13; 

  v5 = dataSize;
  v7 = entryIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 122, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 123, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 124, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( m_buffer ))", (const char *)&queryFormat, "dataSize <= sizeof( m_buffer )") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x200 )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 125, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v13, 512) )
      __debugbreak();
  }
  m_bufferNextIndex = this->m_bufferNextIndex;
  v10 = m_bufferNextIndex & 0x1FFFF;
  v11 = 0x20000 - v10;
  if ( 0x20000 - (int)v10 >= (unsigned int)v5 )
  {
    m_buffer = &this->m_buffer[v10];
  }
  else
  {
    this->m_bufferNextIndex = m_bufferNextIndex + v11;
    if ( ((m_bufferNextIndex + v11) & 0x1FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 137, ASSERT_TYPE_ASSERT, "(( m_bufferNextIndex % sizeof( m_buffer ) ) == 0)", (const char *)&queryFormat, "( m_bufferNextIndex % sizeof( m_buffer ) ) == 0") )
      __debugbreak();
    m_buffer = this->m_buffer;
  }
  memcpy_0(m_buffer, data, v5);
  this->m_entries[v7].size = truncate_cast<unsigned short,unsigned int>(v5);
  this->m_entries[v7].offset = this->m_bufferNextIndex;
  this->m_entries[v7].type = type;
  this->m_bufferNextIndex += v5;
}

/*
==============
CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit
==============
*/
bool CircularEntryBuffer<512,131072,int,0>::IsNearBufferLimit(CircularEntryBuffer<512,131072,int,0> *this, const unsigned int entryIndex, const float memoryRatio)
{
  __int64 v4; 
  int v7; 

  v4 = entryIndex;
  if ( entryIndex >= 0x200 )
  {
    v7 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", entryIndex, v7) )
      __debugbreak();
  }
  if ( !this->m_entries[v4].size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 69, ASSERT_TYPE_ASSERT, "(m_entries[entryIndex].size > 0)", "%s\n\tRequesting buffer information about an invalid command", "m_entries[entryIndex].size > 0") )
    __debugbreak();
  if ( (memoryRatio < 0.0099999998 || memoryRatio > 0.99000001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 70, ASSERT_TYPE_ASSERT, "( 0.01f ) <= ( memoryRatio ) && ( memoryRatio ) <= ( 0.99f )", "memoryRatio not in [0.01f, 0.99f]\n\t%g not in [%g, %g]", memoryRatio, *(double *)&_xmm, *((double *)&_xmm + 1)) )
    __debugbreak();
  return this->m_bufferNextIndex - this->m_entries[v4].offset >= (int)(float)(memoryRatio * 131072.0);
}

/*
==============
CircularEntryBuffer<128,131072,int,0>::SetDataAndType
==============
*/
void CircularEntryBuffer<128,131072,int,0>::SetDataAndType(CircularEntryBuffer<128,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 *data, const unsigned int dataSize, const unsigned __int8 type)
{
  size_t v5; 
  __int64 v7; 
  unsigned int m_bufferNextIndex; 
  __int64 v10; 
  int v11; 
  unsigned __int8 *m_buffer; 
  __int64 v13; 

  v5 = dataSize;
  v7 = entryIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 122, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 123, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 124, ASSERT_TYPE_ASSERT, "(dataSize <= sizeof( m_buffer ))", (const char *)&queryFormat, "dataSize <= sizeof( m_buffer )") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x80 )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 125, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v13, 128) )
      __debugbreak();
  }
  m_bufferNextIndex = this->m_bufferNextIndex;
  v10 = m_bufferNextIndex & 0x1FFFF;
  v11 = 0x20000 - v10;
  if ( 0x20000 - (int)v10 >= (unsigned int)v5 )
  {
    m_buffer = &this->m_buffer[v10];
  }
  else
  {
    this->m_bufferNextIndex = m_bufferNextIndex + v11;
    if ( ((m_bufferNextIndex + v11) & 0x1FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 137, ASSERT_TYPE_ASSERT, "(( m_bufferNextIndex % sizeof( m_buffer ) ) == 0)", (const char *)&queryFormat, "( m_bufferNextIndex % sizeof( m_buffer ) ) == 0") )
      __debugbreak();
    m_buffer = this->m_buffer;
  }
  memcpy_0(m_buffer, data, v5);
  this->m_entries[v7].size = truncate_cast<unsigned short,unsigned int>(v5);
  this->m_entries[v7].offset = this->m_bufferNextIndex;
  this->m_entries[v7].type = type;
  this->m_bufferNextIndex += v5;
}

/*
==============
CircularEntryBuffer<128,131072,int,0>::GetData
==============
*/
char CircularEntryBuffer<128,131072,int,0>::GetData(CircularEntryBuffer<128,131072,int,0> *this, const unsigned int entryIndex, const unsigned __int8 **outBuf)
{
  __int64 v3; 
  char *v6; 
  int v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  char result; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = entryIndex;
  if ( !outBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 190, ASSERT_TYPE_ASSERT, "(outBuf)", (const char *)&queryFormat, "outBuf") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x80 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 191, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v11, 128) )
      __debugbreak();
    LODWORD(v13) = 128;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v6 = (char *)this + 8 * v3;
  v7 = *((_DWORD *)v6 + 1);
  if ( this->m_bufferNextIndex - v7 <= 0x20000 && (v8 = *((_WORD *)v6 + 4)) != 0 )
  {
    v9 = v7 & 0x1FFFF;
    if ( (unsigned int)v9 + v8 > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v9 + v8, 0x20000) )
      __debugbreak();
    *outBuf = &this->m_buffer[v9];
    return 1;
  }
  else
  {
    result = 0;
    *outBuf = NULL;
  }
  return result;
}

