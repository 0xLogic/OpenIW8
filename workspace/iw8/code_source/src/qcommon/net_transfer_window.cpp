/*
==============
NetTransferWindow::GetStart
==============
*/

int __fastcall NetTransferWindow::GetStart(NetTransferWindow *this)
{
  return ?GetStart@NetTransferWindow@@QEBAHXZ(this);
}

/*
==============
NetTransferWindow::GetSize
==============
*/

int __fastcall NetTransferWindow::GetSize(NetTransferWindow *this)
{
  return ?GetSize@NetTransferWindow@@QEBAHXZ(this);
}

/*
==============
NetTransferWindow::Touch
==============
*/

void __fastcall NetTransferWindow::Touch(NetTransferWindow *this, int sequence)
{
  ?Touch@NetTransferWindow@@QEAAXH@Z(this, sequence);
}

/*
==============
NetTransferWindow::Init
==============
*/

void __fastcall NetTransferWindow::Init(NetTransferWindow *this, unsigned __int8 *buffer, int capacity)
{
  ?Init@NetTransferWindow@@QEAAXPEAEH@Z(this, buffer, capacity);
}

/*
==============
NetTransferWindow::Update
==============
*/

void __fastcall NetTransferWindow::Update(NetTransferWindow *this, int sequence)
{
  ?Update@NetTransferWindow@@IEAAXH@Z(this, sequence);
}

/*
==============
NetTransferWindow::IsWithin
==============
*/

bool __fastcall NetTransferWindow::IsWithin(NetTransferWindow *this, int sequence)
{
  return ?IsWithin@NetTransferWindow@@QEBA_NH@Z(this, sequence);
}

/*
==============
NetTransferWindow::IsDuplicate
==============
*/

bool __fastcall NetTransferWindow::IsDuplicate(NetTransferWindow *this, int sequence)
{
  return ?IsDuplicate@NetTransferWindow@@QEBA_NH@Z(this, sequence);
}

/*
==============
NetTransferWindow::IsBelow
==============
*/

bool __fastcall NetTransferWindow::IsBelow(NetTransferWindow *this, int sequence)
{
  return ?IsBelow@NetTransferWindow@@QEBA_NH@Z(this, sequence);
}

/*
==============
NetTransferWindow::ResetCounts
==============
*/

void __fastcall NetTransferWindow::ResetCounts(NetTransferWindow *this)
{
  ?ResetCounts@NetTransferWindow@@QEAAXXZ(this);
}

/*
==============
NetTransferWindow::Write
==============
*/

void __fastcall NetTransferWindow::Write(NetTransferWindow *this, int sequence, NetFragment::Type type, const unsigned __int8 *data, int size, unsigned int offset)
{
  ?Write@NetTransferWindow@@QEAAXHW4Type@NetFragment@@PEBEHI@Z(this, sequence, type, data, size, offset);
}

/*
==============
NetTransferWindow::Read
==============
*/

int __fastcall NetTransferWindow::Read(NetTransferWindow *this, unsigned __int8 *buffer, int size)
{
  return ?Read@NetTransferWindow@@QEAAHPEAEH@Z(this, buffer, size);
}

/*
==============
NetTransferWindow::GetEnd
==============
*/

int __fastcall NetTransferWindow::GetEnd(NetTransferWindow *this)
{
  return ?GetEnd@NetTransferWindow@@QEBAHXZ(this);
}

/*
==============
NetTransferWindow::GetOutOfOrderCount
==============
*/

int __fastcall NetTransferWindow::GetOutOfOrderCount(NetTransferWindow *this)
{
  return ?GetOutOfOrderCount@NetTransferWindow@@QEBAHXZ(this);
}

/*
==============
NetTransferWindow::Flush
==============
*/

void __fastcall NetTransferWindow::Flush(NetTransferWindow *this, int sequence)
{
  ?Flush@NetTransferWindow@@QEAAXH@Z(this, sequence);
}

/*
==============
NetTransferWindow::FindFirstFree
==============
*/

int __fastcall NetTransferWindow::FindFirstFree(NetTransferWindow *this, int searchStart, int searchEnd)
{
  return ?FindFirstFree@NetTransferWindow@@IEAAHHH@Z(this, searchStart, searchEnd);
}

/*
==============
NetTransferWindow::GetDropCount
==============
*/

int __fastcall NetTransferWindow::GetDropCount(NetTransferWindow *this)
{
  return ?GetDropCount@NetTransferWindow@@QEBAHXZ(this);
}

/*
==============
NetTransferWindow::FindFirstFree
==============
*/
__int64 NetTransferWindow::FindFirstFree(NetTransferWindow *this, int searchStart, int searchEnd)
{
  int v3; 

  v3 = searchStart;
  if ( searchEnd - searchStart > (unsigned int)(this->m_windowEnd - this->m_windowStart) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 78, ASSERT_TYPE_ASSERT, "(static_cast< uint >( searchEnd - searchStart ) <= static_cast< uint >( m_windowEnd - m_windowStart ))", (const char *)&queryFormat, "static_cast< uint >( searchEnd - searchStart ) <= static_cast< uint >( m_windowEnd - m_windowStart )") )
    __debugbreak();
  if ( v3 - this->m_windowStart > (unsigned int)(this->m_windowEnd - this->m_windowStart) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 79, ASSERT_TYPE_ASSERT, "(static_cast< uint >( searchStart - m_windowStart ) <= static_cast< uint >( m_windowEnd - m_windowStart ))", (const char *)&queryFormat, "static_cast< uint >( searchStart - m_windowStart ) <= static_cast< uint >( m_windowEnd - m_windowStart )") )
    __debugbreak();
  for ( ; v3 != searchEnd; ++v3 )
  {
    if ( !this->m_fragments[v3 % this->m_windowSize].occupied )
      break;
  }
  return (unsigned int)v3;
}

/*
==============
NetTransferWindow::Flush
==============
*/
void NetTransferWindow::Flush(NetTransferWindow *this, int sequence)
{
  int m_windowStart; 
  int m_windowEnd; 
  int m_windowSize; 
  int v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int FirstFree; 

  m_windowStart = this->m_windowStart;
  m_windowEnd = sequence;
  m_windowSize = this->m_windowSize;
  if ( this->m_windowEnd - m_windowStart < sequence - m_windowStart )
    m_windowEnd = this->m_windowEnd;
  v6 = this->m_windowStart;
  v7 = 0;
  if ( m_windowStart != m_windowEnd )
  {
    do
    {
      v8 = 3i64 * (v6 % m_windowSize) + 9;
      if ( *((_BYTE *)&this->m_capacity + 4 * v8 + 3) )
      {
        v9 = *((_DWORD *)&this->m_buffer + v8 + 1);
        if ( v9 - m_windowStart >= (unsigned int)m_windowSize || v6 == v9 || (v10 = v9 % m_windowSize, v11 = 1, !this->m_fragments[v10].occupied) )
          v11 = 0;
        this->m_oooCount += v11;
      }
      else
      {
        ++this->m_dropCount;
      }
      ++v6;
    }
    while ( v6 != m_windowEnd );
    for ( ; m_windowStart != m_windowEnd; this->m_fragments[v12 % m_windowSize].occupied = 0 )
      v12 = m_windowStart++;
  }
  v13 = this->m_windowEnd;
  this->m_windowStart = sequence;
  if ( sequence - v13 > 0 )
    v7 = sequence - v13;
  this->m_dropCount += v7;
  this->m_windowEnd = v13 + v7;
  if ( v13 + v7 - sequence > this->m_windowSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 199, ASSERT_TYPE_ASSERT, "(m_windowEnd - m_windowStart <= m_windowSize)", (const char *)&queryFormat, "m_windowEnd - m_windowStart <= m_windowSize") )
    __debugbreak();
  FirstFree = NetTransferWindow::FindFirstFree(this, this->m_windowStart, this->m_windowEnd);
  this->m_windowNext = FirstFree;
  if ( (unsigned int)(FirstFree - this->m_windowStart) >= this->m_windowSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 201, ASSERT_TYPE_ASSERT, "(IsWithin( m_windowNext ))", (const char *)&queryFormat, "IsWithin( m_windowNext )") )
    __debugbreak();
}

/*
==============
NetTransferWindow::GetDropCount
==============
*/
__int64 NetTransferWindow::GetDropCount(NetTransferWindow *this)
{
  return (unsigned int)this->m_dropCount;
}

/*
==============
NetTransferWindow::GetEnd
==============
*/
__int64 NetTransferWindow::GetEnd(NetTransferWindow *this)
{
  return (unsigned int)this->m_windowEnd;
}

/*
==============
NetTransferWindow::GetOutOfOrderCount
==============
*/
__int64 NetTransferWindow::GetOutOfOrderCount(NetTransferWindow *this)
{
  return (unsigned int)this->m_oooCount;
}

/*
==============
NetTransferWindow::GetSize
==============
*/
__int64 NetTransferWindow::GetSize(NetTransferWindow *this)
{
  return (unsigned int)this->m_windowSize;
}

/*
==============
NetTransferWindow::GetStart
==============
*/
__int64 NetTransferWindow::GetStart(NetTransferWindow *this)
{
  return (unsigned int)this->m_windowStart;
}

/*
==============
NetTransferWindow::Init
==============
*/
void NetTransferWindow::Init(NetTransferWindow *this, unsigned __int8 *buffer, int capacity)
{
  unsigned __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = capacity;
  if ( ((capacity - 1) & capacity) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 8, ASSERT_TYPE_ASSERT, "(IsPowerOf2( capacity ))", "%s\n\tTransfer window capacity %d must be power of two", "IsPowerOf2( capacity )", capacity) )
    __debugbreak();
  if ( (int)v3 > 0x40000 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 9, ASSERT_TYPE_ASSERT, "(capacity <= MAX_CAPACITY)", "%s\n\tTransfer window capacity %d may not exceed %d", "capacity <= MAX_CAPACITY", v7, 0x40000) )
      __debugbreak();
  }
  DebugWipe(buffer, v3);
  memset_0(this->m_fragments, 0, sizeof(this->m_fragments));
  this->m_buffer = buffer;
  *(_QWORD *)&this->m_dropCount = 0i64;
  *(_QWORD *)&this->m_windowNext = 0i64;
  this->m_windowEnd = 0;
  this->m_capacity = v3;
  this->m_windowSize = (int)v3 / 1237;
  if ( (unsigned int)((int)v3 / 1237 - 2) > 0xD1 )
  {
    LODWORD(v8) = 211;
    LODWORD(v7) = 2;
    LODWORD(v6) = (int)v3 / 1237;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 23, ASSERT_TYPE_ASSERT, "( 2 ) <= ( m_windowSize ) && ( m_windowSize ) <= ( MAX_WINDOW_SIZE )", "m_windowSize not in [2, MAX_WINDOW_SIZE]\n\t%i not in [%i, %i]", v6, v7, v8) )
      __debugbreak();
  }
}

/*
==============
NetTransferWindow::IsBelow
==============
*/
_BOOL8 NetTransferWindow::IsBelow(NetTransferWindow *this, int sequence)
{
  return sequence - this->m_windowStart < 0;
}

/*
==============
NetTransferWindow::IsDuplicate
==============
*/
_BOOL8 NetTransferWindow::IsDuplicate(NetTransferWindow *this, int sequence)
{
  if ( (unsigned int)(sequence - this->m_windowStart) >= this->m_windowSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 219, ASSERT_TYPE_ASSERT, "(IsWithin( sequence ))", (const char *)&queryFormat, "IsWithin( sequence )") )
    __debugbreak();
  return this->m_fragments[sequence % this->m_windowSize].occupied;
}

/*
==============
NetTransferWindow::IsWithin
==============
*/
bool NetTransferWindow::IsWithin(NetTransferWindow *this, int sequence)
{
  return (unsigned int)(sequence - this->m_windowStart) < this->m_windowSize;
}

/*
==============
NetTransferWindow::Read
==============
*/
__int64 NetTransferWindow::Read(NetTransferWindow *this, unsigned __int8 *buffer, int size)
{
  int m_windowStart; 
  unsigned int v4; 
  int m_windowEnd; 
  int v6; 
  unsigned int offset; 
  char v8; 
  unsigned int v12; 
  NetFragment *v13; 
  int v14; 
  unsigned int m_capacity; 
  unsigned __int8 *m_buffer; 
  __int64 v17; 
  signed int v18; 
  __int64 v20; 
  __int64 v21; 

  m_windowStart = this->m_windowStart;
  v4 = 0;
  m_windowEnd = this->m_windowEnd;
  v6 = 0;
  offset = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( m_windowStart == m_windowEnd )
          return v4;
        v12 = m_windowEnd - this->m_windowStart;
        if ( m_windowStart - this->m_windowStart >= v12 )
        {
          LODWORD(v21) = v12;
          LODWORD(v20) = m_windowStart - this->m_windowStart;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( sequence - m_windowStart ) < (unsigned)( m_windowEnd - m_windowStart )", "sequence - m_windowStart doesn't index m_windowEnd - m_windowStart\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v13 = &this->m_fragments[m_windowStart % this->m_windowSize];
        if ( !v13->occupied )
          goto LABEL_24;
        if ( v13->type == TYPE_UNFRAGMENTED )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 133, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unfragmented packets should not appear in recv buffer") )
            __debugbreak();
LABEL_24:
          v8 = 0;
          goto LABEL_25;
        }
        if ( v13->type != TYPE_START )
          break;
        offset = v13->offset;
        v8 = 1;
        v6 = v13->size;
        ++m_windowStart;
        m_windowEnd = this->m_windowEnd;
      }
      if ( v13->type != TYPE_END )
        break;
      if ( v8 )
      {
        v14 = v13->size + v6;
        NetTransferWindow::Flush(this, m_windowStart + 1);
        v4 = -1;
        if ( size >= v14 )
        {
          m_capacity = this->m_capacity;
          m_buffer = this->m_buffer;
          if ( v14 > (int)m_capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 95, ASSERT_TYPE_ASSERT, "(capacity <= circCapacity)", (const char *)&queryFormat, "capacity <= circCapacity") )
            __debugbreak();
          v17 = offset % m_capacity;
          v18 = m_capacity - offset % m_capacity;
          if ( v14 < v18 )
            v18 = v14;
          memcpy_0(buffer, &m_buffer[v17], v18);
          memcpy_0(&buffer[v18], m_buffer, v14 - v18);
          return (unsigned int)v14;
        }
        return v4;
      }
LABEL_25:
      m_windowEnd = this->m_windowEnd;
      ++m_windowStart;
    }
    if ( v13->type != TYPE_FRAGMENT )
      return 0i64;
    m_windowEnd = this->m_windowEnd;
    v6 += v13->size;
    ++m_windowStart;
  }
}

/*
==============
NetTransferWindow::ResetCounts
==============
*/
void NetTransferWindow::ResetCounts(NetTransferWindow *this)
{
  *(_QWORD *)&this->m_dropCount = 0i64;
}

/*
==============
NetTransferWindow::Touch
==============
*/
void NetTransferWindow::Touch(NetTransferWindow *this, int sequence)
{
  NetFragment *v4; 
  int m_windowEnd; 
  int m_windowNext; 
  int v7; 

  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 51, ASSERT_TYPE_ASSERT, "(sequence >= 0)", "%s\n\tSequence wrapped", "sequence >= 0") )
    __debugbreak();
  if ( (unsigned int)(sequence - this->m_windowStart) >= this->m_windowSize )
  {
    v7 = sequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 52, ASSERT_TYPE_ASSERT, "(IsWithin( sequence ))", "%s\n\tIndex not within transfer window %d", "IsWithin( sequence )", v7) )
      __debugbreak();
  }
  v4 = &this->m_fragments[sequence % this->m_windowSize];
  if ( v4->occupied && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 55, ASSERT_TYPE_ASSERT, "(!fragment.occupied)", (const char *)&queryFormat, "!fragment.occupied") )
    __debugbreak();
  v4->occupied = 1;
  v4->next = this->m_windowNext;
  v4->type = TYPE_UNFRAGMENTED;
  m_windowEnd = this->m_windowEnd;
  m_windowNext = this->m_windowNext;
  if ( sequence - m_windowEnd >= 0 )
    m_windowEnd = sequence + 1;
  this->m_windowEnd = m_windowEnd;
  this->m_windowNext = NetTransferWindow::FindFirstFree(this, m_windowNext, m_windowEnd);
}

/*
==============
NetTransferWindow::Update
==============
*/
void NetTransferWindow::Update(NetTransferWindow *this, int sequence)
{
  int m_windowEnd; 
  bool v3; 
  int v4; 
  int m_windowNext; 

  m_windowEnd = this->m_windowEnd;
  v3 = sequence - m_windowEnd < 0;
  v4 = sequence + 1;
  if ( !v3 )
    m_windowEnd = v4;
  m_windowNext = this->m_windowNext;
  this->m_windowEnd = m_windowEnd;
  this->m_windowNext = NetTransferWindow::FindFirstFree(this, m_windowNext, m_windowEnd);
}

/*
==============
NetTransferWindow::Write
==============
*/
void NetTransferWindow::Write(NetTransferWindow *this, int sequence, NetFragment::Type type, const unsigned __int8 *data, int size, unsigned int offset)
{
  NetFragment *v10; 
  unsigned int m_capacity; 
  unsigned __int8 *m_buffer; 
  unsigned int v13; 
  int v14; 
  int m_windowEnd; 
  int m_windowNext; 
  __int64 v17; 

  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 29, ASSERT_TYPE_ASSERT, "(sequence >= 0)", "%s\n\tSequence wrapped", "sequence >= 0") )
    __debugbreak();
  if ( (unsigned int)size > 0x4D9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 30, ASSERT_TYPE_ASSERT, "(size <= ( ( 1270 - 16 - 2 ) - ( 3 * 4 + 2 + 1 ) ) + sizeof( int ))", "%s\n\tFragment size too large %d", "size <= NETWORK_FRAGMENT_SIZE + sizeof( int )", size) )
    __debugbreak();
  if ( (unsigned int)(sequence - this->m_windowStart) >= this->m_windowSize )
  {
    LODWORD(v17) = sequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 31, ASSERT_TYPE_ASSERT, "(IsWithin( sequence ))", "%s\n\tSequence not within transfer window %d", "IsWithin( sequence )", v17) )
      __debugbreak();
  }
  v10 = &this->m_fragments[sequence % this->m_windowSize];
  if ( v10->occupied && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_transfer_window.cpp", 35, ASSERT_TYPE_ASSERT, "(!fragment.occupied)", (const char *)&queryFormat, "!fragment.occupied") )
    __debugbreak();
  v10->occupied = 1;
  v10->next = this->m_windowNext;
  if ( (size < 0 || (unsigned int)size > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)size, "signed", size) )
    __debugbreak();
  v10->offset = offset;
  v10->size = size;
  v10->type = type;
  m_capacity = this->m_capacity;
  m_buffer = this->m_buffer;
  if ( size > (int)m_capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\circular_buffer.h", 78, ASSERT_TYPE_ASSERT, "(length <= circCapacity)", (const char *)&queryFormat, "length <= circCapacity") )
    __debugbreak();
  v13 = offset % m_capacity;
  v14 = m_capacity - offset % m_capacity;
  if ( size < v14 )
    v14 = size;
  memcpy_0(&m_buffer[v13], data, v14);
  memcpy_0(m_buffer, &data[v14], size - v14);
  m_windowEnd = this->m_windowEnd;
  m_windowNext = this->m_windowNext;
  if ( sequence - m_windowEnd >= 0 )
    m_windowEnd = sequence + 1;
  this->m_windowEnd = m_windowEnd;
  this->m_windowNext = NetTransferWindow::FindFirstFree(this, m_windowNext, m_windowEnd);
}

