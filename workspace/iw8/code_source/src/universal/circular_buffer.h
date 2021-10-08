/*
==============
CircularBuffer<524288>::Read
==============
*/

int __fastcall CircularBuffer<524288>::Read(CircularBuffer<524288> *this, void *buffer, const int capacity, const unsigned int offset)
{
  return ?Read@?$CircularBuffer@$0IAAAA@@@QEAAHPEAXHI@Z(this, buffer, capacity, offset);
}

/*
==============
CircularBuffer<1024>::CircularBuffer<1024>
==============
*/

void __fastcall CircularBuffer<1024>::CircularBuffer<1024>(CircularBuffer<1024> *this)
{
  ??0?$CircularBuffer@$0EAA@@@QEAA@XZ(this);
}

/*
==============
CircularBuffer<131072>::Read
==============
*/

int __fastcall CircularBuffer<131072>::Read(CircularBuffer<131072> *this, void *buffer, const int capacity, const unsigned int offset)
{
  return ?Read@?$CircularBuffer@$0CAAAA@@@QEAAHPEAXHI@Z(this, buffer, capacity, offset);
}

/*
==============
CircularBuffer<131072>::Clear
==============
*/

void __fastcall CircularBuffer<131072>::Clear(CircularBuffer<131072> *this, const int length, const unsigned int offset)
{
  ?Clear@?$CircularBuffer@$0CAAAA@@@QEAAXHI@Z(this, length, offset);
}

/*
==============
CircularBuffer<131072>::Capacity
==============
*/

int __fastcall CircularBuffer<131072>::Capacity(CircularBuffer<131072> *this)
{
  return ?Capacity@?$CircularBuffer@$0CAAAA@@@QEBAHXZ(this);
}

/*
==============
CircularBuffer<1024>::Read
==============
*/

int __fastcall CircularBuffer<1024>::Read(CircularBuffer<1024> *this, void *buffer, const int capacity, const unsigned int offset)
{
  return ?Read@?$CircularBuffer@$0EAA@@@QEAAHPEAXHI@Z(this, buffer, capacity, offset);
}

/*
==============
CircularBuffer<2048>::Write
==============
*/

int __fastcall CircularBuffer<2048>::Write(CircularBuffer<2048> *this, const void *data, const int length, const unsigned int offset)
{
  return ?Write@?$CircularBuffer@$0IAA@@@QEAAHPEBXHI@Z(this, data, length, offset);
}

/*
==============
CircularBuffer<2048>::CircularBuffer<2048>
==============
*/

void __fastcall CircularBuffer<2048>::CircularBuffer<2048>(CircularBuffer<2048> *this)
{
  ??0?$CircularBuffer@$0IAA@@@QEAA@XZ(this);
}

/*
==============
CircularBuffer<131072>::Write
==============
*/

int __fastcall CircularBuffer<131072>::Write(CircularBuffer<131072> *this, const void *data, const int length, const unsigned int offset)
{
  return ?Write@?$CircularBuffer@$0CAAAA@@@QEAAHPEBXHI@Z(this, data, length, offset);
}

/*
==============
CircularBuffer<2048>::Read
==============
*/

int __fastcall CircularBuffer<2048>::Read(CircularBuffer<2048> *this, void *buffer, const int capacity, const unsigned int offset)
{
  return ?Read@?$CircularBuffer@$0IAA@@@QEAAHPEAXHI@Z(this, buffer, capacity, offset);
}

/*
==============
CircularBuffer<1024>::Write
==============
*/

int __fastcall CircularBuffer<1024>::Write(CircularBuffer<1024> *this, const void *data, const int length, const unsigned int offset)
{
  return ?Write@?$CircularBuffer@$0EAA@@@QEAAHPEBXHI@Z(this, data, length, offset);
}

/*
==============
CircularBuffer<524288>::Write
==============
*/

int __fastcall CircularBuffer<524288>::Write(CircularBuffer<524288> *this, const void *data, const int length, const unsigned int offset)
{
  return ?Write@?$CircularBuffer@$0IAAAA@@@QEAAHPEBXHI@Z(this, data, length, offset);
}

/*
==============
CircularBuffer<131072>::ReadByte
==============
*/

unsigned __int8 __fastcall CircularBuffer<131072>::ReadByte(CircularBuffer<131072> *this, const unsigned int offset)
{
  return ?ReadByte@?$CircularBuffer@$0CAAAA@@@QEAAEI@Z(this, offset);
}

/*
==============
CircularBuffer<2048>::Read
==============
*/
__int64 CircularBuffer<2048>::Read(CircularBuffer<2048> *this, void *buffer, const int capacity, const unsigned int offset)
{
  __int16 v4; 
  int v8; 
  int v9; 

  v4 = offset;
  if ( capacity > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = v4 & 0x7FF;
  v9 = 2048 - v8;
  if ( capacity < 2048 - v8 )
    v9 = capacity;
  memcpy_0(buffer, &this->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, this, capacity - v9);
  return (unsigned int)capacity;
}

/*
==============
CircularBuffer<2048>::Write
==============
*/
__int64 CircularBuffer<2048>::Write(CircularBuffer<2048> *this, const void *data, const int length, const unsigned int offset)
{
  __int16 v4; 
  int v8; 
  int v9; 

  v4 = offset;
  if ( length > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v8 = v4 & 0x7FF;
  v9 = 2048 - v8;
  if ( length < 2048 - v8 )
    v9 = length;
  memcpy_0(&this->m_data[v8], data, v9);
  memcpy_0(this, (char *)data + v9, length - v9);
  return (unsigned int)length;
}

/*
==============
CircularBuffer<131072>::Capacity
==============
*/
__int64 CircularBuffer<131072>::Capacity(CircularBuffer<131072> *this)
{
  return 0x20000i64;
}

/*
==============
CircularBuffer<131072>::Clear
==============
*/
void CircularBuffer<131072>::Clear(CircularBuffer<131072> *this, const int length, const unsigned int offset)
{
  unsigned int v6; 
  int v7; 

  if ( length > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 42, ASSERT_TYPE_ASSERT, "(length <= CAPACITY)", (const char *)&queryFormat, "length <= CAPACITY") )
    __debugbreak();
  v6 = offset & 0x1FFFF;
  v7 = 0x20000 - v6;
  if ( length < (int)(0x20000 - v6) )
    v7 = length;
  memset_0(&this->m_data[v6], 0, v7);
  memset_0(this, 0, length - v7);
}

/*
==============
CircularBuffer<131072>::Read
==============
*/
__int64 CircularBuffer<131072>::Read(CircularBuffer<131072> *this, void *buffer, const int capacity, const unsigned int offset)
{
  unsigned int v8; 
  int v9; 

  if ( capacity > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = offset & 0x1FFFF;
  v9 = 0x20000 - v8;
  if ( capacity < (int)(0x20000 - v8) )
    v9 = capacity;
  memcpy_0(buffer, &this->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, this, capacity - v9);
  return (unsigned int)capacity;
}

/*
==============
CircularBuffer<131072>::ReadByte
==============
*/
__int64 CircularBuffer<131072>::ReadByte(CircularBuffer<131072> *this, const unsigned int offset)
{
  return this->m_data[offset & 0x1FFFF];
}

/*
==============
CircularBuffer<131072>::Write
==============
*/
__int64 CircularBuffer<131072>::Write(CircularBuffer<131072> *this, const void *data, const int length, const unsigned int offset)
{
  unsigned int v8; 
  int v9; 

  if ( length > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v8 = offset & 0x1FFFF;
  v9 = 0x20000 - v8;
  if ( length < (int)(0x20000 - v8) )
    v9 = length;
  memcpy_0(&this->m_data[v8], data, v9);
  memcpy_0(this, (char *)data + v9, length - v9);
  return (unsigned int)length;
}

/*
==============
CircularBuffer<2048>::CircularBuffer<2048>
==============
*/
void CircularBuffer<2048>::CircularBuffer<2048>(CircularBuffer<2048> *this)
{
  memset_0(this, 0, sizeof(CircularBuffer<2048>));
}

/*
==============
CircularBuffer<1024>::CircularBuffer<1024>
==============
*/
void CircularBuffer<1024>::CircularBuffer<1024>(CircularBuffer<1024> *this)
{
  memset_0(this, 0, sizeof(CircularBuffer<1024>));
}

/*
==============
CircularBuffer<1024>::Read
==============
*/
__int64 CircularBuffer<1024>::Read(CircularBuffer<1024> *this, void *buffer, const int capacity, const unsigned int offset)
{
  __int16 v4; 
  int v8; 
  int v9; 

  v4 = offset;
  if ( capacity > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = v4 & 0x3FF;
  v9 = 1024 - v8;
  if ( capacity < 1024 - v8 )
    v9 = capacity;
  memcpy_0(buffer, &this->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, this, capacity - v9);
  return (unsigned int)capacity;
}

/*
==============
CircularBuffer<1024>::Write
==============
*/
__int64 CircularBuffer<1024>::Write(CircularBuffer<1024> *this, const void *data, const int length, const unsigned int offset)
{
  __int16 v4; 
  int v8; 
  int v9; 

  v4 = offset;
  if ( length > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v8 = v4 & 0x3FF;
  v9 = 1024 - v8;
  if ( length < 1024 - v8 )
    v9 = length;
  memcpy_0(&this->m_data[v8], data, v9);
  memcpy_0(this, (char *)data + v9, length - v9);
  return (unsigned int)length;
}

/*
==============
CircularBuffer<524288>::Read
==============
*/
__int64 CircularBuffer<524288>::Read(CircularBuffer<524288> *this, void *buffer, const int capacity, const unsigned int offset)
{
  unsigned int v8; 
  int v9; 

  if ( capacity > 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
    __debugbreak();
  v8 = offset & 0x7FFFF;
  v9 = 0x80000 - v8;
  if ( capacity < (int)(0x80000 - v8) )
    v9 = capacity;
  memcpy_0(buffer, &this->m_data[v8], v9);
  memcpy_0((char *)buffer + v9, this, capacity - v9);
  return (unsigned int)capacity;
}

/*
==============
CircularBuffer<524288>::Write
==============
*/
__int64 CircularBuffer<524288>::Write(CircularBuffer<524288> *this, const void *data, const int length, const unsigned int offset)
{
  unsigned int v8; 
  int v9; 

  if ( length > 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v8 = offset & 0x7FFFF;
  v9 = 0x80000 - v8;
  if ( length < (int)(0x80000 - v8) )
    v9 = length;
  memcpy_0(&this->m_data[v8], data, v9);
  memcpy_0(this, (char *)data + v9, length - v9);
  return (unsigned int)length;
}

