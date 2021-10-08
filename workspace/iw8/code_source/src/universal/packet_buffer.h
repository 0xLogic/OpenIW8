/*
==============
PacketBuffer<262144,1312,8>::Data
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<262144,1312,8>::Data(PacketBuffer<262144,1312,8> *this)
{
  return ?Data@?$PacketBuffer@$0EAAAA@$0FCA@$07@@QEBAPEBEXZ(this);
}

/*
==============
PacketBuffer<32768,1312,8>::BufferAt
==============
*/

unsigned __int8 *__fastcall PacketBuffer<32768,1312,8>::BufferAt(PacketBuffer<32768,1312,8> *this, const int length, const unsigned int offset)
{
  return ?BufferAt@?$PacketBuffer@$0IAAA@$0FCA@$07@@QEAAPEAEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<32768,1312,8>::Data
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<32768,1312,8>::Data(PacketBuffer<32768,1312,8> *this)
{
  return ?Data@?$PacketBuffer@$0IAAA@$0FCA@$07@@QEBAPEBEXZ(this);
}

/*
==============
PacketBuffer<32768,1312,8>::PacketBuffer<32768,1312,8>
==============
*/

void __fastcall PacketBuffer<32768,1312,8>::PacketBuffer<32768,1312,8>(PacketBuffer<32768,1312,8> *this)
{
  ??0?$PacketBuffer@$0IAAA@$0FCA@$07@@QEAA@XZ(this);
}

/*
==============
PacketBuffer<65536,1312,8>::BufferAt
==============
*/

unsigned __int8 *__fastcall PacketBuffer<65536,1312,8>::BufferAt(PacketBuffer<65536,1312,8> *this, const int length, const unsigned int offset)
{
  return ?BufferAt@?$PacketBuffer@$0BAAAA@$0FCA@$07@@QEAAPEAEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<262144,1312,8>::PacketBuffer<262144,1312,8>
==============
*/

void __fastcall PacketBuffer<262144,1312,8>::PacketBuffer<262144,1312,8>(PacketBuffer<262144,1312,8> *this)
{
  ??0?$PacketBuffer@$0EAAAA@$0FCA@$07@@QEAA@XZ(this);
}

/*
==============
PacketBuffer<65536,1312,8>::PacketBuffer<65536,1312,8>
==============
*/

void __fastcall PacketBuffer<65536,1312,8>::PacketBuffer<65536,1312,8>(PacketBuffer<65536,1312,8> *this)
{
  ??0?$PacketBuffer@$0BAAAA@$0FCA@$07@@QEAA@XZ(this);
}

/*
==============
PacketBuffer<65536,1312,8>::DataAt
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<65536,1312,8>::DataAt(PacketBuffer<65536,1312,8> *this, const int length, const unsigned int offset)
{
  return ?DataAt@?$PacketBuffer@$0BAAAA@$0FCA@$07@@QEBAPEBEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<32768,1312,8>::DataAt
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<32768,1312,8>::DataAt(PacketBuffer<32768,1312,8> *this, const int length, const unsigned int offset)
{
  return ?DataAt@?$PacketBuffer@$0IAAA@$0FCA@$07@@QEBAPEBEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<262144,1312,8>::DataAt
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<262144,1312,8>::DataAt(PacketBuffer<262144,1312,8> *this, const int length, const unsigned int offset)
{
  return ?DataAt@?$PacketBuffer@$0EAAAA@$0FCA@$07@@QEBAPEBEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<65536,1312,8>::Data
==============
*/

const unsigned __int8 *__fastcall PacketBuffer<65536,1312,8>::Data(PacketBuffer<65536,1312,8> *this)
{
  return ?Data@?$PacketBuffer@$0BAAAA@$0FCA@$07@@QEBAPEBEXZ(this);
}

/*
==============
PacketBuffer<262144,1312,8>::BufferAt
==============
*/

unsigned __int8 *__fastcall PacketBuffer<262144,1312,8>::BufferAt(PacketBuffer<262144,1312,8> *this, const int length, const unsigned int offset)
{
  return ?BufferAt@?$PacketBuffer@$0EAAAA@$0FCA@$07@@QEAAPEAEHI@Z(this, length, offset);
}

/*
==============
PacketBuffer<32768,1312,8>::BufferAt
==============
*/
unsigned __int8 *PacketBuffer<32768,1312,8>::BufferAt(PacketBuffer<32768,1312,8> *this, const int length, const unsigned int offset)
{
  __int16 v3; 

  v3 = offset;
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (unsigned __int8 *)this + (v3 & 0x7FFF);
}

/*
==============
PacketBuffer<32768,1312,8>::Data
==============
*/
PacketBuffer<32768,1312,8> *PacketBuffer<32768,1312,8>::Data(PacketBuffer<32768,1312,8> *this)
{
  return this;
}

/*
==============
PacketBuffer<32768,1312,8>::DataAt
==============
*/
const unsigned __int8 *PacketBuffer<32768,1312,8>::DataAt(PacketBuffer<32768,1312,8> *this, const int length, const unsigned int offset)
{
  __int16 v3; 

  v3 = offset;
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (const unsigned __int8 *)this + (v3 & 0x7FFF);
}

/*
==============
PacketBuffer<32768,1312,8>::PacketBuffer<32768,1312,8>
==============
*/
void PacketBuffer<32768,1312,8>::PacketBuffer<32768,1312,8>(PacketBuffer<32768,1312,8> *this)
{
  memset_0(this, 0, 0x851Fui64);
}

/*
==============
PacketBuffer<65536,1312,8>::PacketBuffer<65536,1312,8>
==============
*/
void PacketBuffer<65536,1312,8>::PacketBuffer<65536,1312,8>(PacketBuffer<65536,1312,8> *this)
{
  memset_0(this, 0, 0x1051Fui64);
}

/*
==============
PacketBuffer<262144,1312,8>::PacketBuffer<262144,1312,8>
==============
*/
void PacketBuffer<262144,1312,8>::PacketBuffer<262144,1312,8>(PacketBuffer<262144,1312,8> *this)
{
  memset_0(this, 0, 0x4051Fui64);
}

/*
==============
PacketBuffer<65536,1312,8>::BufferAt
==============
*/
unsigned __int8 *PacketBuffer<65536,1312,8>::BufferAt(PacketBuffer<65536,1312,8> *this, const int length, const unsigned int offset)
{
  unsigned __int16 v3; 

  v3 = offset;
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (unsigned __int8 *)this + v3;
}

/*
==============
PacketBuffer<262144,1312,8>::BufferAt
==============
*/
unsigned __int8 *PacketBuffer<262144,1312,8>::BufferAt(PacketBuffer<262144,1312,8> *this, const int length, const unsigned int offset)
{
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (unsigned __int8 *)this + (offset & 0x3FFFF);
}

/*
==============
PacketBuffer<65536,1312,8>::Data
==============
*/
PacketBuffer<65536,1312,8> *PacketBuffer<65536,1312,8>::Data(PacketBuffer<65536,1312,8> *this)
{
  return this;
}

/*
==============
PacketBuffer<262144,1312,8>::Data
==============
*/
PacketBuffer<262144,1312,8> *PacketBuffer<262144,1312,8>::Data(PacketBuffer<262144,1312,8> *this)
{
  return this;
}

/*
==============
PacketBuffer<65536,1312,8>::DataAt
==============
*/
const unsigned __int8 *PacketBuffer<65536,1312,8>::DataAt(PacketBuffer<65536,1312,8> *this, const int length, const unsigned int offset)
{
  unsigned __int16 v3; 

  v3 = offset;
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (const unsigned __int8 *)this + v3;
}

/*
==============
PacketBuffer<262144,1312,8>::DataAt
==============
*/
const unsigned __int8 *PacketBuffer<262144,1312,8>::DataAt(PacketBuffer<262144,1312,8> *this, const int length, const unsigned int offset)
{
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  return (const unsigned __int8 *)this + (offset & 0x3FFFF);
}

