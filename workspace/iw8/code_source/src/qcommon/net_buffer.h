/*
==============
NetBuffer<32768,0>::Writeable
==============
*/

bool __fastcall NetBuffer<32768,0>::Writeable(NetBuffer<32768,0> *this, int size)
{
  return ?Writeable@?$NetBuffer@$0IAAA@$0A@@@QEBA_NH@Z(this, size);
}

/*
==============
NetBuffer<65536,0>::Clear
==============
*/

void __fastcall NetBuffer<65536,0>::Clear(NetBuffer<65536,0> *this)
{
  ?Clear@?$NetBuffer@$0BAAAA@$0A@@@QEAAXXZ(this);
}

/*
==============
NetBuffer<65536,0>::Read
==============
*/

int __fastcall NetBuffer<65536,0>::Read(NetBuffer<65536,0> *this, bdReference<bdAddrHandle> *outAddrHandle, void **outContext, void *buffer, int size)
{
  return ?Read@?$NetBuffer@$0BAAAA@$0A@@@QEAAHAEAV?$bdReference@VbdAddrHandle@@@@PEAPEAXPEAXH@Z(this, outAddrHandle, outContext, buffer, size);
}

/*
==============
NetBuffer<32768,0>::Write
==============
*/

void __fastcall NetBuffer<32768,0>::Write(NetBuffer<32768,0> *this, const bdReference<bdAddrHandle> *addrHandle, void *context, const void *data, int length)
{
  ?Write@?$NetBuffer@$0IAAA@$0A@@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@PEAXPEBXH@Z(this, addrHandle, context, data, length);
}

/*
==============
NetBuffer<262144,1>::Readable
==============
*/

bool __fastcall NetBuffer<262144,1>::Readable(NetBuffer<262144,1> *this)
{
  return ?Readable@?$NetBuffer@$0EAAAA@$00@@QEBA_NXZ(this);
}

/*
==============
NetBuffer<65536,0>::Commit
==============
*/

bool __fastcall NetBuffer<65536,0>::Commit(NetBuffer<65536,0> *this, NetPacket *packet, int length)
{
  return ?Commit@?$NetBuffer@$0BAAAA@$0A@@@QEAA_NPEAUNetPacket@@H@Z(this, packet, length);
}

/*
==============
NetBuffer<65536,0>::Writeable
==============
*/

bool __fastcall NetBuffer<65536,0>::Writeable(NetBuffer<65536,0> *this, int size)
{
  return ?Writeable@?$NetBuffer@$0BAAAA@$0A@@@QEBA_NH@Z(this, size);
}

/*
==============
NetBuffer<262144,1>::Writeable
==============
*/

bool __fastcall NetBuffer<262144,1>::Writeable(NetBuffer<262144,1> *this, int size)
{
  return ?Writeable@?$NetBuffer@$0EAAAA@$00@@QEBA_NH@Z(this, size);
}

/*
==============
NetBuffer<32768,0>::NetBuffer<32768,0>
==============
*/

void __fastcall NetBuffer<32768,0>::NetBuffer<32768,0>(NetBuffer<32768,0> *this)
{
  ??0?$NetBuffer@$0IAAA@$0A@@@QEAA@XZ(this);
}

/*
==============
NetBuffer<262144,1>::Size
==============
*/

int __fastcall NetBuffer<262144,1>::Size(NetBuffer<262144,1> *this)
{
  return ?Size@?$NetBuffer@$0EAAAA@$00@@QEBAHXZ(this);
}

/*
==============
NetBuffer<65536,0>::NetBuffer<65536,0>
==============
*/

void __fastcall NetBuffer<65536,0>::NetBuffer<65536,0>(NetBuffer<65536,0> *this)
{
  ??0?$NetBuffer@$0BAAAA@$0A@@@QEAA@XZ(this);
}

/*
==============
NetBuffer<65536,0>::Reserve
==============
*/

NetPacket *__fastcall NetBuffer<65536,0>::Reserve(NetBuffer<65536,0> *this, int size)
{
  return ?Reserve@?$NetBuffer@$0BAAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
NetBuffer<32768,0>::Size
==============
*/

int __fastcall NetBuffer<32768,0>::Size(NetBuffer<32768,0> *this)
{
  return ?Size@?$NetBuffer@$0IAAA@$0A@@@QEBAHXZ(this);
}

/*
==============
NetBuffer<32768,0>::Read
==============
*/

int __fastcall NetBuffer<32768,0>::Read(NetBuffer<32768,0> *this, bdReference<bdAddrHandle> *outAddrHandle, void **outContext, void *buffer, int size)
{
  return ?Read@?$NetBuffer@$0IAAA@$0A@@@QEAAHAEAV?$bdReference@VbdAddrHandle@@@@PEAPEAXPEAXH@Z(this, outAddrHandle, outContext, buffer, size);
}

/*
==============
NetBuffer<65536,0>::Readable
==============
*/

bool __fastcall NetBuffer<65536,0>::Readable(NetBuffer<65536,0> *this)
{
  return ?Readable@?$NetBuffer@$0BAAAA@$0A@@@QEBA_NXZ(this);
}

/*
==============
NetBuffer<262144,1>::ReleaseBatch
==============
*/

void __fastcall NetBuffer<262144,1>::ReleaseBatch(NetBuffer<262144,1> *this, NetPacketBatch *batch)
{
  ?ReleaseBatch@?$NetBuffer@$0EAAAA@$00@@QEAAXAEAUNetPacketBatch@@@Z(this, batch);
}

/*
==============
NetBuffer<262144,1>::Reserve
==============
*/

NetPacket *__fastcall NetBuffer<262144,1>::Reserve(NetBuffer<262144,1> *this, int size)
{
  return ?Reserve@?$NetBuffer@$0EAAAA@$00@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
NetBuffer<32768,0>::Reserve
==============
*/

NetPacket *__fastcall NetBuffer<32768,0>::Reserve(NetBuffer<32768,0> *this, int size)
{
  return ?Reserve@?$NetBuffer@$0IAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
NetBuffer<32768,0>::Commit
==============
*/

bool __fastcall NetBuffer<32768,0>::Commit(NetBuffer<32768,0> *this, NetPacket *packet, int length)
{
  return ?Commit@?$NetBuffer@$0IAAA@$0A@@@QEAA_NPEAUNetPacket@@H@Z(this, packet, length);
}

/*
==============
NetBuffer<262144,1>::NetBuffer<262144,1>
==============
*/

void __fastcall NetBuffer<262144,1>::NetBuffer<262144,1>(NetBuffer<262144,1> *this)
{
  ??0?$NetBuffer@$0EAAAA@$00@@QEAA@XZ(this);
}

/*
==============
NetBuffer<65536,0>::Size
==============
*/

int __fastcall NetBuffer<65536,0>::Size(NetBuffer<65536,0> *this)
{
  return ?Size@?$NetBuffer@$0BAAAA@$0A@@@QEBAHXZ(this);
}

/*
==============
NetBuffer<32768,0>::Clear
==============
*/

void __fastcall NetBuffer<32768,0>::Clear(NetBuffer<32768,0> *this)
{
  ?Clear@?$NetBuffer@$0IAAA@$0A@@@QEAAXXZ(this);
}

/*
==============
NetBuffer<262144,1>::ReadBatch
==============
*/

void __fastcall NetBuffer<262144,1>::ReadBatch(NetBuffer<262144,1> *this, NetPacketBatch *batch)
{
  ?ReadBatch@?$NetBuffer@$0EAAAA@$00@@QEAAXAEAUNetPacketBatch@@@Z(this, batch);
}

/*
==============
NetBuffer<32768,0>::Readable
==============
*/

bool __fastcall NetBuffer<32768,0>::Readable(NetBuffer<32768,0> *this)
{
  return ?Readable@?$NetBuffer@$0IAAA@$0A@@@QEBA_NXZ(this);
}

/*
==============
NetBuffer<262144,1>::Commit
==============
*/

bool __fastcall NetBuffer<262144,1>::Commit(NetBuffer<262144,1> *this, NetPacket *packet, int length)
{
  return ?Commit@?$NetBuffer@$0EAAAA@$00@@QEAA_NPEAUNetPacket@@H@Z(this, packet, length);
}

/*
==============
NetBuffer<32768,0>::Clear
==============
*/
void NetBuffer<32768,0>::Clear(NetBuffer<32768,0> *this)
{
  volatile unsigned int m_writeOffset; 
  unsigned int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  volatile char *v7; 
  __int64 v8; 
  volatile char *m_readable; 
  __int64 v10; 

  m_writeOffset = this->m_stream.m_writeOffset;
  v3 = (this->m_stream.m_writeOffset - this->m_stream.m_readOffset) >> 7;
  v4 = (unsigned __int8)(this->m_stream.m_readOffset >> 7);
  if ( v3 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
    __debugbreak();
  v5 = 256 - v4;
  if ( (int)v3 < 256 - (int)v4 )
    v5 = v3;
  v6 = v3 - v5;
  if ( v5 > 0 )
  {
    v7 = &this->m_stream.m_readable[v4];
    v8 = (unsigned int)v5;
    do
    {
      *v7++ = 0;
      --v8;
    }
    while ( v8 );
  }
  if ( v6 > 0 )
  {
    m_readable = this->m_stream.m_readable;
    v10 = (unsigned int)v6;
    do
    {
      *m_readable++ = 0;
      --v10;
    }
    while ( v10 );
  }
  this->m_stream.m_readOffset = m_writeOffset;
}

/*
==============
NetBuffer<32768,0>::Commit
==============
*/
bool NetBuffer<32768,0>::Commit(NetBuffer<32768,0> *this, NetPacket *packet, int length)
{
  volatile char *v6; 

  packet->length = length;
  packet->size = length;
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  this->m_stream.m_writeOffset += (length + 151) & 0xFFFFFF80;
  v6 = &this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, packet)];
  if ( (signed int)(this->m_stream.m_writeOffset - this->m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v6 = 1;
  return (char *)packet - (char *)this - 264 == (this->m_stream.m_readOffset & 0x7FFF);
}

/*
==============
NetBuffer<32768,0>::Read
==============
*/
__int64 NetBuffer<32768,0>::Read(NetBuffer<32768,0> *this, bdReference<bdAddrHandle> *outAddrHandle, void **outContext, void *buffer, int size)
{
  NetPacket *v6; 
  int v10; 
  int v11; 
  int sizes; 
  NetPacket *packets; 

  v6 = (NetPacket *)&this->m_stream.m_buffer.m_data[this->m_stream.m_readOffset & 0x7FFF];
  if ( !this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v6)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  v10 = v6->size;
  v11 = v10;
  packets = v6;
  if ( size < v10 )
    v11 = size;
  sizes = v11;
  if ( size < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 90, ASSERT_TYPE_ASSERT, "(size >= packet->size)", (const char *)&queryFormat, "size >= packet->size") )
    __debugbreak();
  memcpy_0(buffer, &v6[1], v11);
  bdReference<bdAddrHandle>::operator=(outAddrHandle, &v6->addr);
  *outContext = v6->context;
  PacketStream<NetPacket,1288,32768,0>::Release(&this->m_stream, (const NetPacket *const *)&packets, 1, &sizes);
  _InterlockedExchangeAdd((volatile signed __int32 *)&outAddrHandle->m_ptr->m_refCount, 0xFFFFFFFF);
  return (unsigned int)sizes;
}

/*
==============
NetBuffer<32768,0>::Readable
==============
*/
bool NetBuffer<32768,0>::Readable(NetBuffer<32768,0> *this)
{
  return this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, (const NetPacket *)&this->m_stream.m_buffer.m_data[this->m_stream.m_readOffset & 0x7FFF])] != 0;
}

/*
==============
NetBuffer<32768,0>::Reserve
==============
*/
NetPacket *NetBuffer<32768,0>::Reserve(NetBuffer<32768,0> *this, int size)
{
  unsigned int m_writeOffset; 
  NetPacket *v5; 
  NetPacket *result; 
  int WordIndex; 

  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  m_writeOffset = this->m_stream.m_writeOffset;
  if ( !PacketStream<NetPacket,1288,32768,0>::WriteableAt(&this->m_stream, this->m_stream.m_writeOffset, size) )
    PacketStream<NetPacket,1288,32768,0>::WaitAt(&this->m_stream, m_writeOffset, size);
  if ( size > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  v5 = (NetPacket *)&this->m_stream.m_buffer.m_data[m_writeOffset & 0x7FFF];
  if ( this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v5)] )
  {
    WordIndex = PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 104, ASSERT_TYPE_ASSERT, "(!IsReadable( packet ))", "%s\n\tExpected not-readable at %u", "!IsReadable( packet )", WordIndex) )
      __debugbreak();
  }
  if ( v5 )
    v5->addr.m_ptr = NULL;
  v5->context = NULL;
  v5->length = 0;
  result = v5;
  v5->size = size;
  return result;
}

/*
==============
NetBuffer<32768,0>::Size
==============
*/
__int64 NetBuffer<32768,0>::Size(NetBuffer<32768,0> *this)
{
  return this->m_stream.m_writeOffset - this->m_stream.m_readOffset;
}

/*
==============
NetBuffer<32768,0>::Write
==============
*/
void NetBuffer<32768,0>::Write(NetBuffer<32768,0> *this, const bdReference<bdAddrHandle> *addrHandle, void *context, const void *data, int length)
{
  unsigned int m_writeOffset; 
  NetPacket *v10; 
  volatile char *v11; 
  int WordIndex; 

  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  m_writeOffset = this->m_stream.m_writeOffset;
  if ( !PacketStream<NetPacket,1288,32768,0>::WriteableAt(&this->m_stream, this->m_stream.m_writeOffset, length) )
    PacketStream<NetPacket,1288,32768,0>::WaitAt(&this->m_stream, m_writeOffset, length);
  if ( length > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  v10 = (NetPacket *)&this->m_stream.m_buffer.m_data[m_writeOffset & 0x7FFF];
  if ( this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v10)] )
  {
    WordIndex = PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v10);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 104, ASSERT_TYPE_ASSERT, "(!IsReadable( packet ))", "%s\n\tExpected not-readable at %u", "!IsReadable( packet )", WordIndex) )
      __debugbreak();
  }
  if ( v10 )
    v10->addr.m_ptr = NULL;
  v10->context = NULL;
  v10->length = 0;
  v10->size = length;
  bdReference<bdAddrHandle>::operator=(&v10->addr, addrHandle);
  v10->context = context;
  memcpy_0(&v10[1], data, length);
  v10->length = length;
  v10->size = length;
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  this->m_stream.m_writeOffset += (length + 151) & 0xFFFFFF80;
  v11 = &this->m_stream.m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(&this->m_stream, v10)];
  if ( (signed int)(this->m_stream.m_writeOffset - this->m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v11 = 1;
}

/*
==============
NetBuffer<32768,0>::Writeable
==============
*/
bool NetBuffer<32768,0>::Writeable(NetBuffer<32768,0> *this, int size)
{
  return PacketStream<NetPacket,1288,32768,0>::WriteableAt(&this->m_stream, this->m_stream.m_writeOffset, size);
}

/*
==============
NetBuffer<32768,0>::NetBuffer<32768,0>
==============
*/
void NetBuffer<32768,0>::NetBuffer<32768,0>(NetBuffer<32768,0> *this)
{
  this->m_stream.m_writeOffset = 0;
  this->m_stream.m_readOffset = 0;
  memset_0((void *)this->m_stream.m_readable, 0, 0x861Fui64);
}

/*
==============
NetBuffer<65536,0>::Clear
==============
*/
void NetBuffer<65536,0>::Clear(NetBuffer<65536,0> *this)
{
  volatile unsigned int m_writeOffset; 
  __int64 v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  volatile char *v7; 
  __int64 v8; 
  volatile char *m_readable; 
  __int64 v10; 

  m_writeOffset = this->m_stream.m_writeOffset;
  v3 = (this->m_stream.m_readOffset >> 7) & 0x1FF;
  v4 = (this->m_stream.m_writeOffset - this->m_stream.m_readOffset) >> 7;
  if ( v4 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
    __debugbreak();
  v5 = 512 - v3;
  if ( (int)v4 < 512 - (int)v3 )
    v5 = v4;
  v6 = v4 - v5;
  if ( v5 > 0 )
  {
    v7 = &this->m_stream.m_readable[v3];
    v8 = (unsigned int)v5;
    do
    {
      *v7++ = 0;
      --v8;
    }
    while ( v8 );
  }
  if ( v6 > 0 )
  {
    m_readable = this->m_stream.m_readable;
    v10 = (unsigned int)v6;
    do
    {
      *m_readable++ = 0;
      --v10;
    }
    while ( v10 );
  }
  this->m_stream.m_readOffset = m_writeOffset;
}

/*
==============
NetBuffer<65536,0>::Size
==============
*/
__int64 NetBuffer<65536,0>::Size(NetBuffer<65536,0> *this)
{
  return this->m_stream.m_writeOffset - this->m_stream.m_readOffset;
}

/*
==============
NetBuffer<262144,1>::Size
==============
*/
__int64 NetBuffer<262144,1>::Size(NetBuffer<262144,1> *this)
{
  return this->m_stream.m_writeOffset - this->m_stream.m_readOffset;
}

/*
==============
NetBuffer<65536,0>::NetBuffer<65536,0>
==============
*/
void NetBuffer<65536,0>::NetBuffer<65536,0>(NetBuffer<65536,0> *this)
{
  this->m_stream.m_writeOffset = 0;
  this->m_stream.m_readOffset = 0;
  memset_0((void *)this->m_stream.m_readable, 0, 0x1071Fui64);
}

/*
==============
NetBuffer<262144,1>::NetBuffer<262144,1>
==============
*/
void NetBuffer<262144,1>::NetBuffer<262144,1>(NetBuffer<262144,1> *this)
{
  this->m_stream.m_writeOffset = 0;
  this->m_stream.m_readOffset = 0;
  memset_0((void *)this->m_stream.m_readable, 0, 0x40D1Fui64);
}

/*
==============
NetBuffer<65536,0>::Commit
==============
*/
bool NetBuffer<65536,0>::Commit(NetBuffer<65536,0> *this, NetPacket *packet, int length)
{
  volatile char *v6; 

  packet->length = length;
  packet->size = length;
  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  this->m_stream.m_writeOffset += (length + 151) & 0xFFFFFF80;
  v6 = &this->m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&this->m_stream, packet)];
  if ( (signed int)(this->m_stream.m_writeOffset - this->m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v6 = 1;
  return (char *)packet - (char *)this - 520 == (unsigned __int16)this->m_stream.m_readOffset;
}

/*
==============
NetBuffer<262144,1>::Commit
==============
*/
bool NetBuffer<262144,1>::Commit(NetBuffer<262144,1> *this, NetPacket *packet, int length)
{
  volatile char *v5; 

  packet->length = length;
  v5 = &this->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&this->m_stream, packet)];
  if ( (signed int)(this->m_stream.m_writeOffset - this->m_stream.m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v5 = 1;
  return (char *)packet - (char *)this - 2056 == (this->m_stream.m_readOffset & 0x3FFFF);
}

/*
==============
NetBuffer<65536,0>::Read
==============
*/
__int64 NetBuffer<65536,0>::Read(NetBuffer<65536,0> *this, bdReference<bdAddrHandle> *outAddrHandle, void **outContext, void *buffer, int size)
{
  NetPacket *v6; 
  int v10; 
  int v11; 
  int sizes; 
  NetPacket *packets; 

  v6 = (NetPacket *)&this->m_stream.m_buffer.m_data[(unsigned __int16)this->m_stream.m_readOffset];
  if ( !this->m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&this->m_stream, v6)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  v10 = v6->size;
  v11 = v10;
  packets = v6;
  if ( size < v10 )
    v11 = size;
  sizes = v11;
  if ( size < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 90, ASSERT_TYPE_ASSERT, "(size >= packet->size)", (const char *)&queryFormat, "size >= packet->size") )
    __debugbreak();
  memcpy_0(buffer, &v6[1], v11);
  bdReference<bdAddrHandle>::operator=(outAddrHandle, &v6->addr);
  *outContext = v6->context;
  PacketStream<NetPacket,1288,65536,0>::Release(&this->m_stream, (const NetPacket *const *)&packets, 1, &sizes);
  _InterlockedExchangeAdd((volatile signed __int32 *)&outAddrHandle->m_ptr->m_refCount, 0xFFFFFFFF);
  return (unsigned int)sizes;
}

/*
==============
NetBuffer<262144,1>::ReadBatch
==============
*/
void NetBuffer<262144,1>::ReadBatch(NetBuffer<262144,1> *this, NetPacketBatch *batch)
{
  unsigned int v2; 
  int *sizes; 
  NetPacket **packets; 
  int v6; 
  __int64 v7; 
  PacketBuffer<262144,1312,8> *p_m_buffer; 
  const NetPacket *v9; 
  int size; 

  v2 = 0;
  sizes = batch->sizes;
  packets = batch->packets;
  v6 = 0;
  v7 = 0i64;
  p_m_buffer = &this->m_stream.m_buffer;
  while ( this->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&this->m_stream, (const NetPacket *)&p_m_buffer->m_data[(v2 + this->m_stream.m_readOffset) & 0x3FFFF])] && v2 < 0x40000 )
  {
    if ( (v2 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 145, ASSERT_TYPE_ASSERT, "(IsAligned( offset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( offset, WORD_SIZE )") )
      __debugbreak();
    v9 = (const NetPacket *)&this->m_stream.m_buffer.m_data[(v2 + this->m_stream.m_readOffset) & 0x3FFFF];
    if ( !this->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&this->m_stream, v9)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
      __debugbreak();
    size = v9->size;
    ++v6;
    *packets = (NetPacket *)v9;
    ++v7;
    *sizes = size;
    ++packets;
    ++sizes;
    if ( v7 == 128 )
      break;
    if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
      __debugbreak();
    p_m_buffer = &this->m_stream.m_buffer;
    v2 += (size + 151) & 0xFFFFFF80;
  }
  batch->packetCount = v6;
}

/*
==============
NetBuffer<65536,0>::Readable
==============
*/
bool NetBuffer<65536,0>::Readable(NetBuffer<65536,0> *this)
{
  return this->m_stream.m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(&this->m_stream, (const NetPacket *)&this->m_stream.m_buffer.m_data[(unsigned __int16)this->m_stream.m_readOffset])] != 0;
}

/*
==============
NetBuffer<262144,1>::Readable
==============
*/
bool NetBuffer<262144,1>::Readable(NetBuffer<262144,1> *this)
{
  return this->m_stream.m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(&this->m_stream, (const NetPacket *)&this->m_stream.m_buffer.m_data[this->m_stream.m_readOffset & 0x3FFFF])] != 0;
}

/*
==============
NetBuffer<262144,1>::ReleaseBatch
==============
*/
void NetBuffer<262144,1>::ReleaseBatch(NetBuffer<262144,1> *this, NetPacketBatch *batch)
{
  __int64 packetCount; 
  __int64 v5; 
  NetPacket **packets; 

  if ( batch->packetCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_buffer.h", 134, ASSERT_TYPE_ASSERT, "(batch.packetCount > 0)", (const char *)&queryFormat, "batch.packetCount > 0") )
    __debugbreak();
  packetCount = batch->packetCount;
  v5 = packetCount;
  if ( (int)packetCount > 0 )
  {
    packets = batch->packets;
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&(*packets++)->addr.m_ptr->m_refCount, 0xFFFFFFFF);
      --v5;
    }
    while ( v5 );
    LODWORD(packetCount) = batch->packetCount;
  }
  PacketStream<NetPacket,1288,262144,1>::Release(&this->m_stream, (const NetPacket *const *)batch->packets, packetCount, batch->sizes);
}

/*
==============
NetBuffer<65536,0>::Reserve
==============
*/
NetPacket *NetBuffer<65536,0>::Reserve(NetBuffer<65536,0> *this, int size)
{
  NetPacket *result; 

  result = PacketStream<NetPacket,1288,65536,0>::Reserve(&this->m_stream, size);
  if ( result )
    result->addr.m_ptr = NULL;
  result->context = NULL;
  result->length = 0;
  result->size = size;
  return result;
}

/*
==============
NetBuffer<262144,1>::Reserve
==============
*/
NetPacket *NetBuffer<262144,1>::Reserve(NetBuffer<262144,1> *this, int size)
{
  NetPacket *result; 

  result = PacketStream<NetPacket,1288,262144,1>::Reserve(&this->m_stream, size);
  if ( result )
    result->addr.m_ptr = NULL;
  result->context = NULL;
  result->length = 0;
  result->size = size;
  return result;
}

/*
==============
NetBuffer<65536,0>::Writeable
==============
*/
bool NetBuffer<65536,0>::Writeable(NetBuffer<65536,0> *this, int size)
{
  return PacketStream<NetPacket,1288,65536,0>::WriteableAt(&this->m_stream, this->m_stream.m_writeOffset, size);
}

/*
==============
NetBuffer<262144,1>::Writeable
==============
*/
bool NetBuffer<262144,1>::Writeable(NetBuffer<262144,1> *this, int size)
{
  return PacketStream<NetPacket,1288,262144,1>::WriteableAt(&this->m_stream, this->m_stream.m_writeOffset, size);
}

