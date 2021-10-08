/*
==============
SpscStream<2048>::Reset
==============
*/

void __fastcall SpscStream<2048>::Reset(SpscStream<2048> *this)
{
  ?Reset@?$SpscStream@$0IAA@@@QEAAXXZ(this);
}

/*
==============
SpscStream<2048>::Size
==============
*/

int __fastcall SpscStream<2048>::Size(SpscStream<2048> *this)
{
  return ?Size@?$SpscStream@$0IAA@@@QEBAHXZ(this);
}

/*
==============
SpscStream<2048>::SeekR
==============
*/

void __fastcall SpscStream<2048>::SeekR(SpscStream<2048> *this, const int length)
{
  ?SeekR@?$SpscStream@$0IAA@@@QEAAXH@Z(this, length);
}

/*
==============
SpscStream<2048>::SpscStream<2048>
==============
*/

void __fastcall SpscStream<2048>::SpscStream<2048>(SpscStream<2048> *this)
{
  ??0?$SpscStream@$0IAA@@@QEAA@XZ(this);
}

/*
==============
SpscStream<2048>::Write
==============
*/

int __fastcall SpscStream<2048>::Write(SpscStream<2048> *this, const void *const data, const int length)
{
  return ?Write@?$SpscStream@$0IAA@@@QEAAHQEBXH@Z(this, data, length);
}

/*
==============
SpscStream<2048>::Read
==============
*/

int __fastcall SpscStream<2048>::Read(SpscStream<2048> *this, void *const buffer, const int capacity)
{
  return ?Read@?$SpscStream@$0IAA@@@QEAAHQEAXH@Z(this, buffer, capacity);
}

/*
==============
SpscStream<2048>::Space
==============
*/

bool __fastcall SpscStream<2048>::Space(SpscStream<2048> *this, const int length)
{
  return ?Space@?$SpscStream@$0IAA@@@QEBA_NH@Z(this, length);
}

/*
==============
SpscStream<2048>::SeekW
==============
*/

void __fastcall SpscStream<2048>::SeekW(SpscStream<2048> *this, const int length)
{
  ?SeekW@?$SpscStream@$0IAA@@@QEAAXH@Z(this, length);
}

/*
==============
SpscStream<2048>::Read
==============
*/
__int64 SpscStream<2048>::Read(SpscStream<2048> *this, void *const buffer, const int capacity)
{
  CircularBuffer<2048> *p_m_buffer; 
  int v4; 
  volatile unsigned int m_readOffset; 
  unsigned int v8; 
  int v9; 
  __int64 result; 

  p_m_buffer = &this->m_buffer;
  v4 = capacity;
  m_readOffset = this->m_readOffset;
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < capacity )
    v4 = this->m_writeOffset - this->m_readOffset;
  if ( v4 > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = m_readOffset & 0x7FF;
  v9 = 2048 - v8;
  if ( v4 < (int)(2048 - v8) )
    v9 = v4;
  memcpy_0(buffer, &p_m_buffer->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, p_m_buffer, v4 - v9);
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\spsc_stream.h", 82, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  result = (unsigned int)v4;
  this->m_readOffset += v4;
  return result;
}

/*
==============
SpscStream<2048>::Reset
==============
*/
void SpscStream<2048>::Reset(SpscStream<2048> *this)
{
  this->m_readOffset = 0;
  this->m_writeOffset = 0;
}

/*
==============
SpscStream<2048>::SeekR
==============
*/
void SpscStream<2048>::SeekR(SpscStream<2048> *this, const int length)
{
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\spsc_stream.h", 82, ASSERT_TYPE_ASSERT, "(Size() >= length)", (const char *)&queryFormat, "Size() >= length") )
    __debugbreak();
  this->m_readOffset += length;
}

/*
==============
SpscStream<2048>::SeekW
==============
*/
void SpscStream<2048>::SeekW(SpscStream<2048> *this, const int length)
{
  if ( (signed int)(2048 - this->m_writeOffset + this->m_readOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\spsc_stream.h", 74, ASSERT_TYPE_ASSERT, "(Space( length ))", (const char *)&queryFormat, "Space( length )") )
    __debugbreak();
  this->m_writeOffset += length;
}

/*
==============
SpscStream<2048>::Size
==============
*/
__int64 SpscStream<2048>::Size(SpscStream<2048> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
SpscStream<2048>::Space
==============
*/
bool SpscStream<2048>::Space(SpscStream<2048> *this, const int length)
{
  return (signed int)(2048 - this->m_writeOffset + this->m_readOffset) >= length;
}

/*
==============
SpscStream<2048>::Write
==============
*/
__int64 SpscStream<2048>::Write(SpscStream<2048> *this, const void *const data, const int length)
{
  CircularBuffer<2048> *p_m_buffer; 
  volatile unsigned int m_writeOffset; 
  unsigned int v8; 
  int v9; 

  if ( (signed int)(2048 - this->m_writeOffset + this->m_readOffset) < length )
    return 0xFFFFFFFFi64;
  p_m_buffer = &this->m_buffer;
  m_writeOffset = this->m_writeOffset;
  if ( length > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v8 = m_writeOffset & 0x7FF;
  v9 = 2048 - v8;
  if ( length < (int)(2048 - v8) )
    v9 = length;
  memcpy_0(&p_m_buffer->m_data[v8], data, v9);
  memcpy_0(p_m_buffer, (char *)data + v9, length - v9);
  if ( (signed int)(2048 - this->m_writeOffset + this->m_readOffset) < length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\spsc_stream.h", 74, ASSERT_TYPE_ASSERT, "(Space( length ))", (const char *)&queryFormat, "Space( length )") )
    __debugbreak();
  this->m_writeOffset += length;
  return (unsigned int)length;
}

/*
==============
SpscStream<2048>::SpscStream<2048>
==============
*/
void SpscStream<2048>::SpscStream<2048>(SpscStream<2048> *this)
{
  this->m_readOffset = 0;
  this->m_writeOffset = 0;
  memset_0(&this->m_buffer, 0, sizeof(this->m_buffer));
}

