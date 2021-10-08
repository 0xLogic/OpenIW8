/*
==============
MpscStream<1024>::Size
==============
*/

int __fastcall MpscStream<1024>::Size(MpscStream<1024> *this, const unsigned int writeOffset)
{
  return ?Size@?$MpscStream@$0EAA@@@AEBAHI@Z(this, writeOffset);
}

/*
==============
MpscStream<524288>::Write
==============
*/

int __fastcall MpscStream<524288>::Write(MpscStream<524288> *this, const void *const data, const int length)
{
  return ?Write@?$MpscStream@$0IAAAA@@@QEAAHQEBXH@Z(this, data, length);
}

/*
==============
MpscStream<1024>::Reserve
==============
*/

bool __fastcall MpscStream<1024>::Reserve(MpscStream<1024> *this, const int length, unsigned int *outOffset)
{
  return ?Reserve@?$MpscStream@$0EAA@@@AEAA_NHPEAI@Z(this, length, outOffset);
}

/*
==============
MpscStream<1024>::SeekR
==============
*/

void __fastcall MpscStream<1024>::SeekR(MpscStream<1024> *this, const int length)
{
  ?SeekR@?$MpscStream@$0EAA@@@QEAAXH@Z(this, length);
}

/*
==============
MpscStream<1024>::Size
==============
*/

int __fastcall MpscStream<1024>::Size(MpscStream<1024> *this)
{
  return ?Size@?$MpscStream@$0EAA@@@QEBAHXZ(this);
}

/*
==============
MpscStream<524288>::Space
==============
*/

bool __fastcall MpscStream<524288>::Space(MpscStream<524288> *this, const int length, const unsigned int writeOffset)
{
  return ?Space@?$MpscStream@$0IAAAA@@@AEBA_NHI@Z(this, length, writeOffset);
}

/*
==============
MpscStream<524288>::SeekR
==============
*/

void __fastcall MpscStream<524288>::SeekR(MpscStream<524288> *this, const int length)
{
  ?SeekR@?$MpscStream@$0IAAAA@@@QEAAXH@Z(this, length);
}

/*
==============
MpscStream<524288>::Size
==============
*/

int __fastcall MpscStream<524288>::Size(MpscStream<524288> *this, const unsigned int writeOffset)
{
  return ?Size@?$MpscStream@$0IAAAA@@@AEBAHI@Z(this, writeOffset);
}

/*
==============
MpscStream<1024>::Read
==============
*/

int __fastcall MpscStream<1024>::Read(MpscStream<1024> *this, void *const buffer, const int capacity)
{
  return ?Read@?$MpscStream@$0EAA@@@QEAAHQEAXH@Z(this, buffer, capacity);
}

/*
==============
MpscStream<524288>::Read
==============
*/

int __fastcall MpscStream<524288>::Read(MpscStream<524288> *this, void *const buffer, const int capacity)
{
  return ?Read@?$MpscStream@$0IAAAA@@@QEAAHQEAXH@Z(this, buffer, capacity);
}

/*
==============
MpscStream<524288>::Init
==============
*/

void __fastcall MpscStream<524288>::Init(MpscStream<524288> *this)
{
  ?Init@?$MpscStream@$0IAAAA@@@QEAAXXZ(this);
}

/*
==============
MpscStream<524288>::Size
==============
*/

int __fastcall MpscStream<524288>::Size(MpscStream<524288> *this)
{
  return ?Size@?$MpscStream@$0IAAAA@@@QEBAHXZ(this);
}

/*
==============
MpscStream<1024>::Space
==============
*/

bool __fastcall MpscStream<1024>::Space(MpscStream<1024> *this, const int length, const unsigned int writeOffset)
{
  return ?Space@?$MpscStream@$0EAA@@@AEBA_NHI@Z(this, length, writeOffset);
}

/*
==============
MpscStream<1024>::MpscStream<1024>
==============
*/

void __fastcall MpscStream<1024>::MpscStream<1024>(MpscStream<1024> *this)
{
  ??0?$MpscStream@$0EAA@@@QEAA@XZ(this);
}

/*
==============
MpscStream<524288>::SeekW
==============
*/

void __fastcall MpscStream<524288>::SeekW(MpscStream<524288> *this, const int length, const unsigned int reserveOffset)
{
  ?SeekW@?$MpscStream@$0IAAAA@@@AEAAXHI@Z(this, length, reserveOffset);
}

/*
==============
MpscStream<524288>::Reserve
==============
*/

bool __fastcall MpscStream<524288>::Reserve(MpscStream<524288> *this, const int length, unsigned int *outOffset)
{
  return ?Reserve@?$MpscStream@$0IAAAA@@@AEAA_NHPEAI@Z(this, length, outOffset);
}

/*
==============
MpscStream<1024>::Write
==============
*/

int __fastcall MpscStream<1024>::Write(MpscStream<1024> *this, const void *const data, const int length)
{
  return ?Write@?$MpscStream@$0EAA@@@QEAAHQEBXH@Z(this, data, length);
}

/*
==============
MpscStream<1024>::Flush
==============
*/

void __fastcall MpscStream<1024>::Flush(MpscStream<1024> *this)
{
  ?Flush@?$MpscStream@$0EAA@@@QEAAXXZ(this);
}

/*
==============
MpscStream<1024>::SeekW
==============
*/

void __fastcall MpscStream<1024>::SeekW(MpscStream<1024> *this, const int length, const unsigned int reserveOffset)
{
  ?SeekW@?$MpscStream@$0EAA@@@AEAAXHI@Z(this, length, reserveOffset);
}

/*
==============
MpscStream<1024>::MpscStream<1024>
==============
*/
void MpscStream<1024>::MpscStream<1024>(MpscStream<1024> *this)
{
  this->m_readOffset = 0;
  this->m_writeOffset = 0;
  this->m_reserveOffset = 0;
  memset_0(&this->m_buffer, 0, sizeof(this->m_buffer));
}

/*
==============
MpscStream<1024>::Flush
==============
*/
void MpscStream<1024>::Flush(MpscStream<1024> *this)
{
  signed __int32 m_readOffset; 
  unsigned int v2; 
  __int64 v4; 

  m_readOffset = this->m_readOffset;
  v2 = this->m_writeOffset - this->m_readOffset;
  v4 = (unsigned __int8)this & 3;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", this) )
        __debugbreak();
    }
    if ( m_readOffset == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + m_readOffset, m_readOffset) )
      break;
    m_readOffset = this->m_readOffset;
    v2 = this->m_writeOffset - this->m_readOffset;
  }
}

/*
==============
MpscStream<1024>::Read
==============
*/
__int64 MpscStream<1024>::Read(MpscStream<1024> *this, void *const buffer, const int capacity)
{
  signed int v3; 
  CircularBuffer<1024> *p_m_buffer; 
  volatile unsigned int m_readOffset; 
  unsigned int v8; 
  signed int v9; 

  v3 = capacity;
  p_m_buffer = &this->m_buffer;
  m_readOffset = this->m_readOffset;
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < capacity )
    v3 = this->m_writeOffset - this->m_readOffset;
  if ( v3 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = m_readOffset & 0x3FF;
  v9 = 1024 - v8;
  if ( v3 < (int)(1024 - v8) )
    v9 = v3;
  memcpy_0(buffer, &p_m_buffer->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, p_m_buffer, v3 - v9);
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 159, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  _InterlockedExchangeAdd((volatile signed __int32 *)this, v3);
  return (unsigned int)v3;
}

/*
==============
MpscStream<1024>::Reserve
==============
*/
char MpscStream<1024>::Reserve(MpscStream<1024> *this, const int length, unsigned int *outOffset)
{
  volatile unsigned int *p_m_reserveOffset; 
  volatile unsigned int m_reserveOffset; 

  p_m_reserveOffset = &this->m_reserveOffset;
  m_reserveOffset = this->m_reserveOffset;
  if ( (int)(this->m_readOffset + 1024 - m_reserveOffset) < length )
    return 0;
  while ( 1 )
  {
    if ( ((unsigned __int8)p_m_reserveOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_reserveOffset) )
      __debugbreak();
    if ( m_reserveOffset == _InterlockedCompareExchange((volatile signed __int32 *)p_m_reserveOffset, m_reserveOffset + length, m_reserveOffset) )
      break;
    m_reserveOffset = *p_m_reserveOffset;
    if ( (signed int)(this->m_readOffset + 1024 - *p_m_reserveOffset) < length )
      return 0;
  }
  *outOffset = m_reserveOffset;
  return 1;
}

/*
==============
MpscStream<1024>::SeekR
==============
*/
void MpscStream<1024>::SeekR(MpscStream<1024> *this, const int length)
{
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 159, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  _InterlockedExchangeAdd((volatile signed __int32 *)this, length);
}

/*
==============
MpscStream<1024>::SeekW
==============
*/
void MpscStream<1024>::SeekW(MpscStream<1024> *this, const int length, const unsigned int reserveOffset)
{
  volatile unsigned int *p_m_writeOffset; 

  if ( (int)(this->m_readOffset + 1024 - reserveOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 140, ASSERT_TYPE_ASSERT, "(Space( length, reserveOffset ))", (const char *)&queryFormat, "Space( length, reserveOffset )") )
    __debugbreak();
  p_m_writeOffset = &this->m_writeOffset;
  do
  {
    if ( ((unsigned __int8)p_m_writeOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writeOffset) )
      __debugbreak();
  }
  while ( reserveOffset != _InterlockedCompareExchange((volatile signed __int32 *)p_m_writeOffset, length + reserveOffset, reserveOffset) );
}

/*
==============
MpscStream<1024>::Size
==============
*/
__int64 MpscStream<1024>::Size(MpscStream<1024> *this, const unsigned int writeOffset)
{
  return writeOffset - this->m_readOffset;
}

/*
==============
MpscStream<1024>::Size
==============
*/
__int64 MpscStream<1024>::Size(MpscStream<1024> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
MpscStream<1024>::Space
==============
*/
bool MpscStream<1024>::Space(MpscStream<1024> *this, const int length, const unsigned int writeOffset)
{
  return (int)(this->m_readOffset + 1024 - writeOffset) >= length;
}

/*
==============
MpscStream<1024>::Write
==============
*/
__int64 MpscStream<1024>::Write(MpscStream<1024> *this, const void *const data, const int length)
{
  volatile unsigned int *p_m_reserveOffset; 
  volatile unsigned int *p_m_writeOffset; 
  signed __int32 m_reserveOffset; 
  int v9; 
  __int64 v10; 
  int v11; 

  p_m_reserveOffset = &this->m_reserveOffset;
  p_m_writeOffset = &this->m_writeOffset;
  m_reserveOffset = this->m_reserveOffset;
  if ( (signed __int32)(this->m_readOffset + 1024 - m_reserveOffset) < length )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    if ( ((unsigned __int8)p_m_reserveOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_reserveOffset) )
      __debugbreak();
    if ( m_reserveOffset == _InterlockedCompareExchange((volatile signed __int32 *)p_m_reserveOffset, m_reserveOffset + length, m_reserveOffset) )
      break;
    m_reserveOffset = *p_m_reserveOffset;
    if ( (signed int)(this->m_readOffset + 1024 - *p_m_reserveOffset) < length )
      return 0xFFFFFFFFi64;
  }
  if ( length > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v9 = 1024 - (m_reserveOffset & 0x3FF);
  if ( length < v9 )
    v9 = length;
  v10 = v9;
  v11 = length - v9;
  memcpy_0(&this->m_buffer.m_data[m_reserveOffset & 0x3FF], data, v9);
  memcpy_0(&this->m_buffer, (char *)data + v10, v11);
  if ( (signed __int32)(this->m_readOffset + 1024 - m_reserveOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 140, ASSERT_TYPE_ASSERT, "(Space( length, reserveOffset ))", (const char *)&queryFormat, "Space( length, reserveOffset )") )
    __debugbreak();
  do
  {
    if ( ((unsigned __int8)p_m_writeOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writeOffset) )
      __debugbreak();
  }
  while ( m_reserveOffset != _InterlockedCompareExchange((volatile signed __int32 *)p_m_writeOffset, m_reserveOffset + length, m_reserveOffset) );
  return (unsigned int)length;
}

/*
==============
MpscStream<524288>::Init
==============
*/
void MpscStream<524288>::Init(MpscStream<524288> *this)
{
  this->m_readOffset = 0;
  this->m_writeOffset = 0;
  this->m_reserveOffset = 0;
  DebugWipe(&this->m_buffer, 0x80000ui64);
}

/*
==============
MpscStream<524288>::Read
==============
*/
__int64 MpscStream<524288>::Read(MpscStream<524288> *this, void *const buffer, const int capacity)
{
  signed int v3; 
  CircularBuffer<524288> *p_m_buffer; 
  volatile unsigned int m_readOffset; 
  unsigned int v8; 
  signed int v9; 

  v3 = capacity;
  p_m_buffer = &this->m_buffer;
  m_readOffset = this->m_readOffset;
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < capacity )
    v3 = this->m_writeOffset - this->m_readOffset;
  if ( v3 > 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = m_readOffset & 0x7FFFF;
  v9 = 0x80000 - v8;
  if ( v3 < (int)(0x80000 - v8) )
    v9 = v3;
  memcpy_0(buffer, &p_m_buffer->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, p_m_buffer, v3 - v9);
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 159, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  _InterlockedExchangeAdd((volatile signed __int32 *)this, v3);
  return (unsigned int)v3;
}

/*
==============
MpscStream<524288>::Reserve
==============
*/
char MpscStream<524288>::Reserve(MpscStream<524288> *this, const int length, unsigned int *outOffset)
{
  volatile unsigned int *p_m_reserveOffset; 
  volatile unsigned int m_reserveOffset; 

  p_m_reserveOffset = &this->m_reserveOffset;
  m_reserveOffset = this->m_reserveOffset;
  if ( (int)(this->m_readOffset + 0x80000 - m_reserveOffset) < length )
    return 0;
  while ( 1 )
  {
    if ( ((unsigned __int8)p_m_reserveOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_reserveOffset) )
      __debugbreak();
    if ( m_reserveOffset == _InterlockedCompareExchange((volatile signed __int32 *)p_m_reserveOffset, m_reserveOffset + length, m_reserveOffset) )
      break;
    m_reserveOffset = *p_m_reserveOffset;
    if ( (signed int)(this->m_readOffset + 0x80000 - *p_m_reserveOffset) < length )
      return 0;
  }
  *outOffset = m_reserveOffset;
  return 1;
}

/*
==============
MpscStream<524288>::SeekR
==============
*/
void MpscStream<524288>::SeekR(MpscStream<524288> *this, const int length)
{
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 159, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  _InterlockedExchangeAdd((volatile signed __int32 *)this, length);
}

/*
==============
MpscStream<524288>::SeekW
==============
*/
void MpscStream<524288>::SeekW(MpscStream<524288> *this, const int length, const unsigned int reserveOffset)
{
  volatile unsigned int *p_m_writeOffset; 

  if ( (int)(this->m_readOffset + 0x80000 - reserveOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 140, ASSERT_TYPE_ASSERT, "(Space( length, reserveOffset ))", (const char *)&queryFormat, "Space( length, reserveOffset )") )
    __debugbreak();
  p_m_writeOffset = &this->m_writeOffset;
  do
  {
    if ( ((unsigned __int8)p_m_writeOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writeOffset) )
      __debugbreak();
  }
  while ( reserveOffset != _InterlockedCompareExchange((volatile signed __int32 *)p_m_writeOffset, length + reserveOffset, reserveOffset) );
}

/*
==============
MpscStream<524288>::Size
==============
*/
__int64 MpscStream<524288>::Size(MpscStream<524288> *this, const unsigned int writeOffset)
{
  return writeOffset - this->m_readOffset;
}

/*
==============
MpscStream<524288>::Size
==============
*/
__int64 MpscStream<524288>::Size(MpscStream<524288> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
MpscStream<524288>::Space
==============
*/
bool MpscStream<524288>::Space(MpscStream<524288> *this, const int length, const unsigned int writeOffset)
{
  return (int)(this->m_readOffset + 0x80000 - writeOffset) >= length;
}

/*
==============
MpscStream<524288>::Write
==============
*/
__int64 MpscStream<524288>::Write(MpscStream<524288> *this, const void *const data, const int length)
{
  volatile unsigned int *p_m_reserveOffset; 
  volatile unsigned int *p_m_writeOffset; 
  signed __int32 m_reserveOffset; 
  int v9; 
  __int64 v10; 
  int v11; 

  p_m_reserveOffset = &this->m_reserveOffset;
  p_m_writeOffset = &this->m_writeOffset;
  m_reserveOffset = this->m_reserveOffset;
  if ( (signed __int32)(this->m_readOffset + 0x80000 - m_reserveOffset) < length )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    if ( ((unsigned __int8)p_m_reserveOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_reserveOffset) )
      __debugbreak();
    if ( m_reserveOffset == _InterlockedCompareExchange((volatile signed __int32 *)p_m_reserveOffset, m_reserveOffset + length, m_reserveOffset) )
      break;
    m_reserveOffset = *p_m_reserveOffset;
    if ( (signed int)(this->m_readOffset + 0x80000 - *p_m_reserveOffset) < length )
      return 0xFFFFFFFFi64;
  }
  if ( length > 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v9 = 0x80000 - (m_reserveOffset & 0x7FFFF);
  if ( length < v9 )
    v9 = length;
  v10 = v9;
  v11 = length - v9;
  memcpy_0(&this->m_buffer.m_data[m_reserveOffset & 0x7FFFF], data, v9);
  memcpy_0(&this->m_buffer, (char *)data + v10, v11);
  if ( (signed __int32)(this->m_readOffset + 0x80000 - m_reserveOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_stream.h", 140, ASSERT_TYPE_ASSERT, "(Space( length, reserveOffset ))", (const char *)&queryFormat, "Space( length, reserveOffset )") )
    __debugbreak();
  do
  {
    if ( ((unsigned __int8)p_m_writeOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writeOffset) )
      __debugbreak();
  }
  while ( m_reserveOffset != _InterlockedCompareExchange((volatile signed __int32 *)p_m_writeOffset, m_reserveOffset + length, m_reserveOffset) );
  return (unsigned int)length;
}

