/*
==============
PacketStream<NetPacket,1288,65536,0>::Flush
==============
*/

void __fastcall PacketStream<NetPacket,1288,65536,0>::Flush(PacketStream<NetPacket,1288,65536,0> *this)
{
  ?Flush@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAAXXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::IsReadable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::IsReadable(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  return ?IsReadable@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@AEBA_NPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Writeable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::Writeable(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  return ?Writeable@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEBA_NH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Readable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::Readable(PacketStream<NetPacket,1288,65536,0> *this)
{
  return ?Readable@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEBA_NXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::WaitAt
==============
*/

void __fastcall PacketStream<NetPacket,1288,262144,1>::WaitAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int writeOffset, int size)
{
  ?WaitAt@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@AEAAXIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::WaitAt
==============
*/

void __fastcall PacketStream<NetPacket,1288,32768,0>::WaitAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int writeOffset, int size)
{
  ?WaitAt@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@AEAAXIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Size
==============
*/

int __fastcall PacketStream<NetPacket,1288,262144,1>::Size(PacketStream<NetPacket,1288,262144,1> *this)
{
  return ?Size@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEBAHXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Reserve
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,32768,0>::Reserve(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  return ?Reserve@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::GetWordIndex
==============
*/

int __fastcall PacketStream<NetPacket,1288,32768,0>::GetWordIndex(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  return ?GetWordIndex@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@AEBAHPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Commit
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::Commit(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet, int length)
{
  return ?Commit@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAA_NPEBUNetPacket@@H@Z(this, packet, length);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Readable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::Readable(PacketStream<NetPacket,1288,32768,0> *this)
{
  return ?Readable@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEBA_NXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Writeable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::Writeable(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  return ?Writeable@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEBA_NH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::GetWordIndex
==============
*/

int __fastcall PacketStream<NetPacket,1288,262144,1>::GetWordIndex(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  return ?GetWordIndex@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@AEBAHPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::GetReadable
==============
*/

volatile char *__fastcall PacketStream<NetPacket,1288,262144,1>::GetReadable(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  return ?GetReadable@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@AEAAAECDPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::IsReadable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::IsReadable(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  return ?IsReadable@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@AEBA_NPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::WriteableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::WriteableAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int writeOffset, int size)
{
  return ?WriteableAt@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@AEBA_NIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Size
==============
*/

int __fastcall PacketStream<NetPacket,1288,32768,0>::Size(PacketStream<NetPacket,1288,32768,0> *this)
{
  return ?Size@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEBAHXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::PacketSize
==============
*/

int __fastcall PacketStream<NetPacket,1288,32768,0>::PacketSize(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  return ?PacketSize@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEBAHH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Peek
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,32768,0>::Peek(PacketStream<NetPacket,1288,32768,0> *this, int offset)
{
  return ?Peek@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, offset);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::GetWordIndex
==============
*/

int __fastcall PacketStream<NetPacket,1288,65536,0>::GetWordIndex(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  return ?GetWordIndex@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@AEBAHPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::ReadableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::ReadableAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int readOffset)
{
  return ?ReadableAt@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEBA_NI@Z(this, readOffset);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::PacketStream<NetPacket,1288,262144,1>
==============
*/

void __fastcall PacketStream<NetPacket,1288,262144,1>::PacketStream<NetPacket,1288,262144,1>(PacketStream<NetPacket,1288,262144,1> *this)
{
  ??0?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEAA@XZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::GetReadable
==============
*/

volatile char *__fastcall PacketStream<NetPacket,1288,32768,0>::GetReadable(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  return ?GetReadable@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@AEAAAECDPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Commit
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::Commit(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet, int length)
{
  return ?Commit@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAA_NPEBUNetPacket@@H@Z(this, packet, length);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Peek
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,262144,1>::Peek(PacketStream<NetPacket,1288,262144,1> *this, int offset)
{
  return ?Peek@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEAAPEAUNetPacket@@H@Z(this, offset);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Release
==============
*/

void __fastcall PacketStream<NetPacket,1288,262144,1>::Release(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  ?Release@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEAAXPEBQEBUNetPacket@@HPEBH@Z(this, packets, packetCount, sizes);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::GetReadable
==============
*/

volatile char *__fastcall PacketStream<NetPacket,1288,65536,0>::GetReadable(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  return ?GetReadable@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@AEAAAECDPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Commit
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::Commit(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet, int length)
{
  return ?Commit@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEAA_NPEBUNetPacket@@H@Z(this, packet, length);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Writeable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::Writeable(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  return ?Writeable@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEBA_NH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Release
==============
*/

void __fastcall PacketStream<NetPacket,1288,65536,0>::Release(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  ?Release@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAAXPEBQEBUNetPacket@@HPEBH@Z(this, packets, packetCount, sizes);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::PacketStream<NetPacket,1288,65536,0>
==============
*/

void __fastcall PacketStream<NetPacket,1288,65536,0>::PacketStream<NetPacket,1288,65536,0>(PacketStream<NetPacket,1288,65536,0> *this)
{
  ??0?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAA@XZ(this);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Readable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::Readable(PacketStream<NetPacket,1288,262144,1> *this)
{
  return ?Readable@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEBA_NXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Reserve
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,65536,0>::Reserve(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  return ?Reserve@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::WriteableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,262144,1>::WriteableAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int writeOffset, int size)
{
  return ?WriteableAt@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@AEBA_NIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::PacketStream<NetPacket,1288,32768,0>
==============
*/

void __fastcall PacketStream<NetPacket,1288,32768,0>::PacketStream<NetPacket,1288,32768,0>(PacketStream<NetPacket,1288,32768,0> *this)
{
  ??0?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAA@XZ(this);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::WriteableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::WriteableAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int writeOffset, int size)
{
  return ?WriteableAt@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@AEBA_NIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Release
==============
*/

void __fastcall PacketStream<NetPacket,1288,32768,0>::Release(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  ?Release@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAAXPEBQEBUNetPacket@@HPEBH@Z(this, packets, packetCount, sizes);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Size
==============
*/

int __fastcall PacketStream<NetPacket,1288,65536,0>::Size(PacketStream<NetPacket,1288,65536,0> *this)
{
  return ?Size@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEBAHXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::ReadableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,32768,0>::ReadableAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int readOffset)
{
  return ?ReadableAt@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEBA_NI@Z(this, readOffset);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Reserve
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,262144,1>::Reserve(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  return ?Reserve@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEAAPEAUNetPacket@@H@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::WaitAt
==============
*/

void __fastcall PacketStream<NetPacket,1288,65536,0>::WaitAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int writeOffset, int size)
{
  ?WaitAt@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@AEAAXIH@Z(this, writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::PacketSize
==============
*/

int __fastcall PacketStream<NetPacket,1288,262144,1>::PacketSize(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  return ?PacketSize@?$PacketStream@UNetPacket@@$0FAI@$0EAAAA@$00@@QEBAHH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::IsReadable
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::IsReadable(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  return ?IsReadable@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@AEBA_NPEBUNetPacket@@@Z(this, packet);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Peek
==============
*/

NetPacket *__fastcall PacketStream<NetPacket,1288,65536,0>::Peek(PacketStream<NetPacket,1288,65536,0> *this, int offset)
{
  return ?Peek@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEAAPEAUNetPacket@@H@Z(this, offset);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Flush
==============
*/

void __fastcall PacketStream<NetPacket,1288,32768,0>::Flush(PacketStream<NetPacket,1288,32768,0> *this)
{
  ?Flush@?$PacketStream@UNetPacket@@$0FAI@$0IAAA@$0A@@@QEAAXXZ(this);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::PacketSize
==============
*/

int __fastcall PacketStream<NetPacket,1288,65536,0>::PacketSize(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  return ?PacketSize@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEBAHH@Z(this, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::ReadableAt
==============
*/

bool __fastcall PacketStream<NetPacket,1288,65536,0>::ReadableAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int readOffset)
{
  return ?ReadableAt@?$PacketStream@UNetPacket@@$0FAI@$0BAAAA@$0A@@@QEBA_NI@Z(this, readOffset);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Commit
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::Commit(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet, int length)
{
  volatile char *v6; 

  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  this->m_writeOffset += (length + 151) & 0xFFFFFF80;
  v6 = &this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, packet)];
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v6 = 1;
  return (char *)packet - (char *)this - 264 == (this->m_readOffset & 0x7FFF);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Flush
==============
*/
void PacketStream<NetPacket,1288,32768,0>::Flush(PacketStream<NetPacket,1288,32768,0> *this)
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

  m_writeOffset = this->m_writeOffset;
  v3 = (this->m_writeOffset - this->m_readOffset) >> 7;
  v4 = (unsigned __int8)(this->m_readOffset >> 7);
  if ( v3 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
    __debugbreak();
  v5 = 256 - v4;
  if ( (int)v3 < 256 - (int)v4 )
    v5 = v3;
  v6 = v3 - v5;
  if ( v5 > 0 )
  {
    v7 = &this->m_readable[v4];
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
    m_readable = this->m_readable;
    v10 = (unsigned int)v6;
    do
    {
      *m_readable++ = 0;
      --v10;
    }
    while ( v10 );
  }
  this->m_readOffset = m_writeOffset;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::GetReadable
==============
*/
volatile char *PacketStream<NetPacket,1288,32768,0>::GetReadable(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  return &this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, packet)];
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::GetWordIndex
==============
*/
__int64 PacketStream<NetPacket,1288,32768,0>::GetWordIndex(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  unsigned __int64 v2; 

  v2 = (char *)packet - (char *)this - 264;
  if ( (v2 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 256, ASSERT_TYPE_ASSERT, "(IsAligned( packetOffset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( packetOffset, WORD_SIZE )") )
    __debugbreak();
  if ( v2 >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 257, ASSERT_TYPE_ASSERT, "(packetOffset < CAPACITY)", (const char *)&queryFormat, "packetOffset < CAPACITY") )
    __debugbreak();
  return (unsigned int)(v2 >> 7);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::IsReadable
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::IsReadable(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *packet)
{
  return this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, packet)] != 0;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::PacketSize
==============
*/
__int64 PacketStream<NetPacket,1288,32768,0>::PacketSize(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  return (size + 151) & 0xFFFFFF80;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Peek
==============
*/
NetPacket *PacketStream<NetPacket,1288,32768,0>::Peek(PacketStream<NetPacket,1288,32768,0> *this, int offset)
{
  __int16 v2; 
  const NetPacket *v4; 

  v2 = offset;
  if ( (offset & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 145, ASSERT_TYPE_ASSERT, "(IsAligned( offset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( offset, WORD_SIZE )") )
    __debugbreak();
  v4 = (const NetPacket *)&this->m_buffer.m_data[((unsigned __int16)this->m_readOffset + v2) & 0x7FFF];
  if ( !this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, v4)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  return (NetPacket *)v4;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Readable
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::Readable(PacketStream<NetPacket,1288,32768,0> *this)
{
  return this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[this->m_readOffset & 0x7FFF])] != 0;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::ReadableAt
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::ReadableAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int readOffset)
{
  return this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[((_WORD)readOffset + (unsigned __int16)this->m_readOffset) & 0x7FFF])] && readOffset < 0x8000;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Release
==============
*/
void PacketStream<NetPacket,1288,32768,0>::Release(PacketStream<NetPacket,1288,32768,0> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  unsigned int v4; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  volatile char *v11; 
  int v12; 
  volatile unsigned int *p_m_readOffset; 
  __int32 v14; 

  v4 = 0;
  v7 = packetCount;
  if ( packetCount )
  {
    if ( (const NetPacket *const)((char *)*packets - (char *)this - 264) != (const NetPacket *const)(this->m_readOffset & 0x7FFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 160, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY") )
      __debugbreak();
    if ( (char *)packets[v7 - 1] - (this->m_readOffset & 0x7FFF) - (char *)this - 264 >= this->m_writeOffset - this->m_readOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 161, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset") )
      __debugbreak();
  }
  v9 = v7;
  if ( (int)v7 > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = &this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, packets[v10])];
      if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 169, ASSERT_TYPE_ASSERT, "(readable)", (const char *)&queryFormat, "readable") )
        __debugbreak();
      v12 = sizes[v10];
      if ( v12 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 172, ASSERT_TYPE_ASSERT, "(size <= PACKET_SIZE)", (const char *)&queryFormat, "size <= PACKET_SIZE") )
        __debugbreak();
      if ( v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
        __debugbreak();
      v4 += (v12 + 151) & 0xFFFFFF80;
      if ( v4 > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 175, ASSERT_TYPE_ASSERT, "(readOffset <= CAPACITY)", (const char *)&queryFormat, "readOffset <= CAPACITY") )
        __debugbreak();
      ++v10;
      *v11 = 0;
    }
    while ( v10 < v9 );
  }
  p_m_readOffset = &this->m_readOffset;
  v14 = v4 + this->m_readOffset;
  if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_m_readOffset) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)p_m_readOffset, v14);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Reserve
==============
*/
NetPacket *PacketStream<NetPacket,1288,32768,0>::Reserve(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  unsigned int m_writeOffset; 
  PacketBuffer<32768,1312,8> *p_m_buffer; 
  int WordIndex; 

  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  m_writeOffset = this->m_writeOffset;
  if ( !PacketStream<NetPacket,1288,32768,0>::WriteableAt(this, this->m_writeOffset, size) )
    PacketStream<NetPacket,1288,32768,0>::WaitAt(this, m_writeOffset, size);
  p_m_buffer = &this->m_buffer;
  if ( size > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  if ( this->m_readable[PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, (const NetPacket *)&p_m_buffer->m_data[m_writeOffset & 0x7FFF])] )
  {
    WordIndex = PacketStream<NetPacket,1288,32768,0>::GetWordIndex(this, (const NetPacket *)&p_m_buffer->m_data[m_writeOffset & 0x7FFF]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 104, ASSERT_TYPE_ASSERT, "(!IsReadable( packet ))", "%s\n\tExpected not-readable at %u", "!IsReadable( packet )", WordIndex) )
      __debugbreak();
  }
  return (NetPacket *)((char *)p_m_buffer + (m_writeOffset & 0x7FFF));
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Size
==============
*/
__int64 PacketStream<NetPacket,1288,32768,0>::Size(PacketStream<NetPacket,1288,32768,0> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::WaitAt
==============
*/
void PacketStream<NetPacket,1288,32768,0>::WaitAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int writeOffset, int size)
{
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v16; 
  unsigned __int64 v18; 
  unsigned __int64 v23; 
  bool v24; 
  __int64 v25; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  Value = (char *)Sys_GetValue(0);
  v10 = (int *)(Value + 17936);
  if ( (unsigned int)(*((_DWORD *)Value + 4484) + 1) >= 3 )
  {
    v37 = 3;
    v35 = *((_DWORD *)Value + 4484) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v35, v37) )
      __debugbreak();
  }
  if ( (unsigned int)++*v10 >= 3 )
  {
    LODWORD(v36) = 3;
    LODWORD(v34) = *v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v34, v36) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v10;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = *v10;
  v14 = __rdtsc();
  v10[v13 + 2] = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 396, NULL, 0);
  v16 = __rdtsc();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+98h+var_40], xmm7
  }
  v18 = __rdtsc();
  Com_Printf(0x20000, "[NET] Started wait\n");
  while ( !PacketStream<NetPacket,1288,32768,0>::WriteableAt(this, writeOffset, size) )
    _mm_pause();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v18) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   r8, xmm2
  }
  Com_Printf(0x20000, "[NET] Stopped wait after %.3fms\n", *(double *)&_XMM2);
  v23 = __rdtsc();
  v24 = v23 < v16;
  v25 = v23 - v16;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( v25 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm2, xmm7
  }
  if ( !v24 && v25 != 0 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", "PacketStream_Wait", *(double *)&_XMM3);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::Writeable
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::Writeable(PacketStream<NetPacket,1288,32768,0> *this, int size)
{
  return PacketStream<NetPacket,1288,32768,0>::WriteableAt(this, this->m_writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::WriteableAt
==============
*/
bool PacketStream<NetPacket,1288,32768,0>::WriteableAt(PacketStream<NetPacket,1288,32768,0> *this, unsigned int writeOffset, int size)
{
  int v3; 
  signed int v6; 
  bool v7; 
  bool v8; 

  v3 = size + 24;
  if ( size + 24 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 227, ASSERT_TYPE_ASSERT, "(packetSize <= PACKET_SIZE)", "%s\n\tPacket size too large at %d bytes - largest supported is %zu bytes", "packetSize <= PACKET_SIZE", size, 0x508ui64) )
    __debugbreak();
  v6 = 0x8000 - writeOffset + this->m_readOffset;
  v8 = __OFSUB__(v6, v3);
  v7 = v6 - v3 < 0;
  if ( v6 >= v3 )
  {
    if ( v6 < (int)((v3 + 127) & 0xFFFFFF80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 230, ASSERT_TYPE_ASSERT, "(space < packetSize || space >= AlignUp( packetSize, WORD_SIZE ))", "%s\n\tAvailable space not aligned to word boundary", "space < packetSize || space >= AlignUp( packetSize, WORD_SIZE )") )
      __debugbreak();
    v8 = __OFSUB__(v6, v3);
    v7 = v6 - v3 < 0;
  }
  return v7 == v8;
}

/*
==============
PacketStream<NetPacket,1288,32768,0>::PacketStream<NetPacket,1288,32768,0>
==============
*/
void PacketStream<NetPacket,1288,32768,0>::PacketStream<NetPacket,1288,32768,0>(PacketStream<NetPacket,1288,32768,0> *this)
{
  this->m_writeOffset = 0;
  this->m_readOffset = 0;
  memset_0((void *)this->m_readable, 0, 0x861Fui64);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Flush
==============
*/
void PacketStream<NetPacket,1288,65536,0>::Flush(PacketStream<NetPacket,1288,65536,0> *this)
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

  m_writeOffset = this->m_writeOffset;
  v3 = (this->m_readOffset >> 7) & 0x1FF;
  v4 = (this->m_writeOffset - this->m_readOffset) >> 7;
  if ( v4 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
    __debugbreak();
  v5 = 512 - v3;
  if ( (int)v4 < 512 - (int)v3 )
    v5 = v4;
  v6 = v4 - v5;
  if ( v5 > 0 )
  {
    v7 = &this->m_readable[v3];
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
    m_readable = this->m_readable;
    v10 = (unsigned int)v6;
    do
    {
      *m_readable++ = 0;
      --v10;
    }
    while ( v10 );
  }
  this->m_readOffset = m_writeOffset;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Size
==============
*/
__int64 PacketStream<NetPacket,1288,65536,0>::Size(PacketStream<NetPacket,1288,65536,0> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Size
==============
*/
__int64 PacketStream<NetPacket,1288,262144,1>::Size(PacketStream<NetPacket,1288,262144,1> *this)
{
  return this->m_writeOffset - this->m_readOffset;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::PacketStream<NetPacket,1288,65536,0>
==============
*/
void PacketStream<NetPacket,1288,65536,0>::PacketStream<NetPacket,1288,65536,0>(PacketStream<NetPacket,1288,65536,0> *this)
{
  this->m_writeOffset = 0;
  this->m_readOffset = 0;
  memset_0((void *)this->m_readable, 0, 0x1071Fui64);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::PacketStream<NetPacket,1288,262144,1>
==============
*/
void PacketStream<NetPacket,1288,262144,1>::PacketStream<NetPacket,1288,262144,1>(PacketStream<NetPacket,1288,262144,1> *this)
{
  this->m_writeOffset = 0;
  this->m_readOffset = 0;
  memset_0((void *)this->m_readable, 0, 0x40D1Fui64);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Commit
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::Commit(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet, int length)
{
  volatile char *v6; 

  if ( length <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  this->m_writeOffset += (length + 151) & 0xFFFFFF80;
  v6 = &this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, packet)];
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v6 = 1;
  return (char *)packet - (char *)this - 520 == (unsigned __int16)this->m_readOffset;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Commit
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::Commit(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet, int length)
{
  volatile char *v5; 

  v5 = &this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, packet)];
  if ( (signed int)(this->m_writeOffset - this->m_readOffset) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 120, ASSERT_TYPE_ASSERT, "(Size() > 0)", (const char *)&queryFormat, "Size() > 0") )
    __debugbreak();
  if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 121, ASSERT_TYPE_ASSERT, "(!readable)", (const char *)&queryFormat, "!readable") )
    __debugbreak();
  *v5 = 1;
  return (char *)packet - (char *)this - 2056 == (this->m_readOffset & 0x3FFFF);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::GetReadable
==============
*/
volatile char *PacketStream<NetPacket,1288,65536,0>::GetReadable(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  return &this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, packet)];
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::GetReadable
==============
*/
volatile char *PacketStream<NetPacket,1288,262144,1>::GetReadable(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  return &this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, packet)];
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::GetWordIndex
==============
*/
__int64 PacketStream<NetPacket,1288,65536,0>::GetWordIndex(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  unsigned __int64 v2; 

  v2 = (char *)packet - (char *)this - 520;
  if ( (v2 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 256, ASSERT_TYPE_ASSERT, "(IsAligned( packetOffset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( packetOffset, WORD_SIZE )") )
    __debugbreak();
  if ( v2 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 257, ASSERT_TYPE_ASSERT, "(packetOffset < CAPACITY)", (const char *)&queryFormat, "packetOffset < CAPACITY") )
    __debugbreak();
  return (unsigned int)(v2 >> 7);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::GetWordIndex
==============
*/
__int64 PacketStream<NetPacket,1288,262144,1>::GetWordIndex(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  unsigned __int64 v2; 

  v2 = (char *)packet - (char *)this - 2056;
  if ( (v2 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 256, ASSERT_TYPE_ASSERT, "(IsAligned( packetOffset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( packetOffset, WORD_SIZE )") )
    __debugbreak();
  if ( v2 >= 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 257, ASSERT_TYPE_ASSERT, "(packetOffset < CAPACITY)", (const char *)&queryFormat, "packetOffset < CAPACITY") )
    __debugbreak();
  return (unsigned int)(v2 >> 7);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::IsReadable
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::IsReadable(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *packet)
{
  return this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, packet)] != 0;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::IsReadable
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::IsReadable(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *packet)
{
  return this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, packet)] != 0;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::PacketSize
==============
*/
__int64 PacketStream<NetPacket,1288,65536,0>::PacketSize(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  return (size + 151) & 0xFFFFFF80;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::PacketSize
==============
*/
__int64 PacketStream<NetPacket,1288,262144,1>::PacketSize(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  return (size + 151) & 0xFFFFFF80;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Peek
==============
*/
NetPacket *PacketStream<NetPacket,1288,65536,0>::Peek(PacketStream<NetPacket,1288,65536,0> *this, int offset)
{
  __int16 v2; 
  const NetPacket *v4; 

  v2 = offset;
  if ( (offset & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 145, ASSERT_TYPE_ASSERT, "(IsAligned( offset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( offset, WORD_SIZE )") )
    __debugbreak();
  v4 = (const NetPacket *)&this->m_buffer.m_data[(unsigned __int16)(v2 + LOWORD(this->m_readOffset))];
  if ( !this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, v4)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  return (NetPacket *)v4;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Peek
==============
*/
NetPacket *PacketStream<NetPacket,1288,262144,1>::Peek(PacketStream<NetPacket,1288,262144,1> *this, int offset)
{
  const NetPacket *v4; 

  if ( (offset & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 145, ASSERT_TYPE_ASSERT, "(IsAligned( offset, WORD_SIZE ))", (const char *)&queryFormat, "IsAligned( offset, WORD_SIZE )") )
    __debugbreak();
  v4 = (const NetPacket *)&this->m_buffer.m_data[(this->m_readOffset + offset) & 0x3FFFF];
  if ( !this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, v4)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 149, ASSERT_TYPE_ASSERT, "(IsReadable( packet ))", (const char *)&queryFormat, "IsReadable( packet )") )
    __debugbreak();
  return (NetPacket *)v4;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Readable
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::Readable(PacketStream<NetPacket,1288,65536,0> *this)
{
  return this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[(unsigned __int16)this->m_readOffset])] != 0;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Readable
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::Readable(PacketStream<NetPacket,1288,262144,1> *this)
{
  return this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[this->m_readOffset & 0x3FFFF])] != 0;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::ReadableAt
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::ReadableAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int readOffset)
{
  return this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[(unsigned __int16)(readOffset + LOWORD(this->m_readOffset))])] && readOffset < 0x10000;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::ReadableAt
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::ReadableAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int readOffset)
{
  return this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, (const NetPacket *)&this->m_buffer.m_data[(readOffset + this->m_readOffset) & 0x3FFFF])] && readOffset < 0x40000;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Release
==============
*/
void PacketStream<NetPacket,1288,65536,0>::Release(PacketStream<NetPacket,1288,65536,0> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  unsigned int v4; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  volatile char *v11; 
  int v12; 
  volatile unsigned int *p_m_readOffset; 
  __int32 v14; 

  v4 = 0;
  v8 = packetCount;
  if ( packetCount )
  {
    if ( (const NetPacket *const)((char *)*packets - (char *)this - 520) != (const NetPacket *const)(unsigned __int16)this->m_readOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 160, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY") )
      __debugbreak();
    if ( (char *)packets[v8 - 1] - (unsigned __int16)this->m_readOffset - (char *)this - 520 >= this->m_writeOffset - this->m_readOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 161, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset") )
      __debugbreak();
  }
  v9 = v8;
  if ( (int)v8 > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = &this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, packets[v10])];
      if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 169, ASSERT_TYPE_ASSERT, "(readable)", (const char *)&queryFormat, "readable") )
        __debugbreak();
      v12 = sizes[v10];
      if ( v12 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 172, ASSERT_TYPE_ASSERT, "(size <= PACKET_SIZE)", (const char *)&queryFormat, "size <= PACKET_SIZE") )
        __debugbreak();
      if ( v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
        __debugbreak();
      v4 += (v12 + 151) & 0xFFFFFF80;
      if ( v4 > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 175, ASSERT_TYPE_ASSERT, "(readOffset <= CAPACITY)", (const char *)&queryFormat, "readOffset <= CAPACITY") )
        __debugbreak();
      ++v10;
      *v11 = 0;
    }
    while ( v10 < v9 );
  }
  p_m_readOffset = &this->m_readOffset;
  v14 = v4 + this->m_readOffset;
  if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_m_readOffset) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)p_m_readOffset, v14);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Release
==============
*/
void PacketStream<NetPacket,1288,262144,1>::Release(PacketStream<NetPacket,1288,262144,1> *this, const NetPacket *const *packets, int packetCount, const int *sizes)
{
  unsigned int v4; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  volatile char *v11; 
  int v12; 
  volatile unsigned int *p_m_readOffset; 
  __int32 v14; 

  v4 = 0;
  v7 = packetCount;
  if ( packetCount )
  {
    if ( (const NetPacket *const)((char *)*packets - (char *)this - 2056) != (const NetPacket *const)(this->m_readOffset & 0x3FFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 160, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[0] ) - m_buffer.Data() == m_readOffset % CAPACITY") )
      __debugbreak();
    if ( (char *)packets[v7 - 1] - (this->m_readOffset & 0x3FFFF) - (char *)this - 2056 >= this->m_writeOffset - this->m_readOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 161, ASSERT_TYPE_ASSERT, "(packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset)", (const char *)&queryFormat, "packetCount == 0 || reinterpret_cast< const byte* >( packets[packetCount - 1] ) - m_buffer.Data() - ( m_readOffset % CAPACITY ) < m_writeOffset - m_readOffset") )
      __debugbreak();
  }
  v9 = v7;
  if ( (int)v7 > 0 )
  {
    v10 = 0i64;
    do
    {
      v11 = &this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, packets[v10])];
      if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 169, ASSERT_TYPE_ASSERT, "(readable)", (const char *)&queryFormat, "readable") )
        __debugbreak();
      v12 = sizes[v10];
      if ( v12 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 172, ASSERT_TYPE_ASSERT, "(size <= PACKET_SIZE)", (const char *)&queryFormat, "size <= PACKET_SIZE") )
        __debugbreak();
      if ( v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
        __debugbreak();
      v4 += (v12 + 151) & 0xFFFFFF80;
      if ( v4 > 0x40000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 175, ASSERT_TYPE_ASSERT, "(readOffset <= CAPACITY)", (const char *)&queryFormat, "readOffset <= CAPACITY") )
        __debugbreak();
      ++v10;
      *v11 = 0;
    }
    while ( v10 < v9 );
  }
  p_m_readOffset = &this->m_readOffset;
  v14 = v4 + this->m_readOffset;
  if ( (((_BYTE)this + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_m_readOffset) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)p_m_readOffset, v14);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Reserve
==============
*/
NetPacket *PacketStream<NetPacket,1288,65536,0>::Reserve(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  unsigned int m_writeOffset; 
  unsigned __int64 v7; 
  unsigned __int64 v9; 
  unsigned __int64 v14; 
  bool v15; 
  __int64 v16; 
  PacketBuffer<65536,1312,8> *p_m_buffer; 
  NetPacket *result; 
  int WordIndex; 

  __asm { vmovaps [rsp+98h+var_28], xmm7 }
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  m_writeOffset = this->m_writeOffset;
  if ( !PacketStream<NetPacket,1288,65536,0>::WriteableAt(this, this->m_writeOffset, size) )
  {
    Profile_Begin(396);
    v7 = __rdtsc();
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+98h+var_40], xmm7
    }
    v9 = __rdtsc();
    Com_Printf(0x20000, "[NET] Started wait\n");
    while ( !PacketStream<NetPacket,1288,65536,0>::WriteableAt(this, m_writeOffset, size) )
      _mm_pause();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - v9) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmovq   r8, xmm2
    }
    Com_Printf(0x20000, "[NET] Stopped wait after %.3fms\n", *(double *)&_XMM2);
    v14 = __rdtsc();
    v15 = v14 < v7;
    v16 = v14 - v7;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( v16 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vmulss  xmm2, xmm1, cs:__real@3a83126f
      vcomiss xmm2, xmm7
    }
    if ( !v15 && v16 != 0 )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm2, xmm2
        vmovq   r9, xmm3
      }
      Com_Printf(12, "[PROFILE] %s took %.3fms\n", "PacketStream_Wait", *(double *)&_XMM3);
    }
    Profile_EndInternal(NULL);
  }
  p_m_buffer = &this->m_buffer;
  if ( size > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  if ( this->m_readable[PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, (const NetPacket *)&p_m_buffer->m_data[(unsigned __int16)m_writeOffset])] )
  {
    WordIndex = PacketStream<NetPacket,1288,65536,0>::GetWordIndex(this, (const NetPacket *)&p_m_buffer->m_data[(unsigned __int16)m_writeOffset]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 104, ASSERT_TYPE_ASSERT, "(!IsReadable( packet ))", "%s\n\tExpected not-readable at %u", "!IsReadable( packet )", WordIndex) )
      __debugbreak();
  }
  result = (NetPacket *)&p_m_buffer->m_data[(unsigned __int16)m_writeOffset];
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  return result;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Reserve
==============
*/
NetPacket *PacketStream<NetPacket,1288,262144,1>::Reserve(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v9; 
  unsigned __int64 v14; 
  bool v15; 
  __int64 v16; 
  NetPacket *v24; 
  NetPacket *result; 
  int WordIndex; 

  __asm { vmovaps [rsp+98h+var_28], xmm7 }
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 246, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)this, (size + 151) & 0xFFFFFF80);
  if ( !PacketStream<NetPacket,1288,262144,1>::WriteableAt(this, v6, size) )
  {
    Profile_Begin(396);
    v7 = __rdtsc();
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+98h+var_40], xmm7
    }
    v9 = __rdtsc();
    Com_Printf(0x20000, "[NET] Started wait\n");
    while ( !PacketStream<NetPacket,1288,262144,1>::WriteableAt(this, v6, size) )
      _mm_pause();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(__rdtsc() - v9) < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmovq   r8, xmm2
    }
    Com_Printf(0x20000, "[NET] Stopped wait after %.3fms\n", *(double *)&_XMM2);
    v14 = __rdtsc();
    v15 = v14 < v7;
    v16 = v14 - v7;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( v16 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcvtsd2ss xmm1, xmm0, xmm0
      vmulss  xmm2, xmm1, cs:__real@3a83126f
      vcomiss xmm2, xmm7
    }
    if ( !v15 && v16 != 0 )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm2, xmm2
        vmovq   r9, xmm3
      }
      Com_Printf(12, "[PROFILE] %s took %.3fms\n", "PacketStream_Wait", *(double *)&_XMM3);
    }
    Profile_EndInternal(NULL);
  }
  if ( size > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_buffer.h", 75, ASSERT_TYPE_ASSERT, "(length <= PACKET_SIZE)", (const char *)&queryFormat, "length <= PACKET_SIZE") )
    __debugbreak();
  v24 = (NetPacket *)&this->m_buffer.m_data[v6 & 0x3FFFF];
  if ( this->m_readable[PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, v24)] )
  {
    WordIndex = PacketStream<NetPacket,1288,262144,1>::GetWordIndex(this, v24);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 104, ASSERT_TYPE_ASSERT, "(!IsReadable( packet ))", "%s\n\tExpected not-readable at %u", "!IsReadable( packet )", WordIndex) )
      __debugbreak();
  }
  result = v24;
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  return result;
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::WaitAt
==============
*/
void PacketStream<NetPacket,1288,65536,0>::WaitAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int writeOffset, int size)
{
  unsigned __int64 v9; 
  unsigned __int64 v11; 
  unsigned __int64 v16; 
  bool v17; 
  __int64 v18; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  Profile_Begin(396);
  v9 = __rdtsc();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+78h+var_40], xmm7
  }
  v11 = __rdtsc();
  Com_Printf(0x20000, "[NET] Started wait\n");
  while ( !PacketStream<NetPacket,1288,65536,0>::WriteableAt(this, writeOffset, size) )
    _mm_pause();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v11) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   r8, xmm2
  }
  Com_Printf(0x20000, "[NET] Stopped wait after %.3fms\n", *(double *)&_XMM2);
  v16 = __rdtsc();
  v17 = v16 < v9;
  v18 = v16 - v9;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( v18 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm2, xmm7
  }
  if ( !v17 && v18 != 0 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", "PacketStream_Wait", *(double *)&_XMM3);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::WaitAt
==============
*/
void PacketStream<NetPacket,1288,262144,1>::WaitAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int writeOffset, int size)
{
  unsigned __int64 v9; 
  unsigned __int64 v11; 
  unsigned __int64 v16; 
  bool v17; 
  __int64 v18; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  Profile_Begin(396);
  v9 = __rdtsc();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+78h+var_40], xmm7
  }
  v11 = __rdtsc();
  Com_Printf(0x20000, "[NET] Started wait\n");
  while ( !PacketStream<NetPacket,1288,262144,1>::WriteableAt(this, writeOffset, size) )
    _mm_pause();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v11) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   r8, xmm2
  }
  Com_Printf(0x20000, "[NET] Stopped wait after %.3fms\n", *(double *)&_XMM2);
  v16 = __rdtsc();
  v17 = v16 < v9;
  v18 = v16 - v9;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( v18 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm0, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
    vcvtsd2ss xmm1, xmm0, xmm0
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm2, xmm7
  }
  if ( !v17 && v18 != 0 )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm2, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(12, "[PROFILE] %s took %.3fms\n", "PacketStream_Wait", *(double *)&_XMM3);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::Writeable
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::Writeable(PacketStream<NetPacket,1288,65536,0> *this, int size)
{
  return PacketStream<NetPacket,1288,65536,0>::WriteableAt(this, this->m_writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::Writeable
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::Writeable(PacketStream<NetPacket,1288,262144,1> *this, int size)
{
  return PacketStream<NetPacket,1288,262144,1>::WriteableAt(this, this->m_writeOffset, size);
}

/*
==============
PacketStream<NetPacket,1288,65536,0>::WriteableAt
==============
*/
bool PacketStream<NetPacket,1288,65536,0>::WriteableAt(PacketStream<NetPacket,1288,65536,0> *this, unsigned int writeOffset, int size)
{
  int v3; 
  signed int v6; 
  bool v7; 
  bool v8; 

  v3 = size + 24;
  if ( size + 24 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 227, ASSERT_TYPE_ASSERT, "(packetSize <= PACKET_SIZE)", "%s\n\tPacket size too large at %d bytes - largest supported is %zu bytes", "packetSize <= PACKET_SIZE", size, 0x508ui64) )
    __debugbreak();
  v6 = 0x10000 - writeOffset + this->m_readOffset;
  v8 = __OFSUB__(v6, v3);
  v7 = v6 - v3 < 0;
  if ( v6 >= v3 )
  {
    if ( v6 < (int)((v3 + 127) & 0xFFFFFF80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 230, ASSERT_TYPE_ASSERT, "(space < packetSize || space >= AlignUp( packetSize, WORD_SIZE ))", "%s\n\tAvailable space not aligned to word boundary", "space < packetSize || space >= AlignUp( packetSize, WORD_SIZE )") )
      __debugbreak();
    v8 = __OFSUB__(v6, v3);
    v7 = v6 - v3 < 0;
  }
  return v7 == v8;
}

/*
==============
PacketStream<NetPacket,1288,262144,1>::WriteableAt
==============
*/
bool PacketStream<NetPacket,1288,262144,1>::WriteableAt(PacketStream<NetPacket,1288,262144,1> *this, unsigned int writeOffset, int size)
{
  int v3; 
  signed int v6; 
  bool v7; 
  bool v8; 

  v3 = size + 24;
  if ( size + 24 > 1312 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 227, ASSERT_TYPE_ASSERT, "(packetSize <= PACKET_SIZE)", "%s\n\tPacket size too large at %d bytes - largest supported is %zu bytes", "packetSize <= PACKET_SIZE", size, 0x508ui64) )
    __debugbreak();
  v6 = 0x40000 - writeOffset + this->m_readOffset;
  v8 = __OFSUB__(v6, v3);
  v7 = v6 - v3 < 0;
  if ( v6 >= v3 )
  {
    if ( v6 < (int)((v3 + 127) & 0xFFFFFF80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 230, ASSERT_TYPE_ASSERT, "(space < packetSize || space >= AlignUp( packetSize, WORD_SIZE ))", "%s\n\tAvailable space not aligned to word boundary", "space < packetSize || space >= AlignUp( packetSize, WORD_SIZE )") )
      __debugbreak();
    v8 = __OFSUB__(v6, v3);
    v7 = v6 - v3 < 0;
  }
  return v7 == v8;
}

