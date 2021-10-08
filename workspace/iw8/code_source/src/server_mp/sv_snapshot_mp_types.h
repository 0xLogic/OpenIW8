/*
==============
SvSnapshotEntries::SetCount
==============
*/

void __fastcall SvSnapshotEntries::SetCount(SvSnapshotEntries *this, SvSnapshotBufferType type, unsigned int count)
{
  ?SetCount@SvSnapshotEntries@@QEAAXW4SvSnapshotBufferType@@I@Z(this, type, count);
}

/*
==============
SvSnapshotFrameBuffers::EnsureContiguousArray
==============
*/

__int64 __fastcall SvSnapshotFrameBuffers::EnsureContiguousArray(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int arraySize)
{
  return ?EnsureContiguousArray@SvSnapshotFrameBuffers@@QEAA_JW4SvSnapshotBufferType@@I@Z(this, type, arraySize);
}

/*
==============
SvSnapshotEntries::SetFirst
==============
*/

void __fastcall SvSnapshotEntries::SetFirst(SvSnapshotEntries *this, SvSnapshotBufferType type, __int64 first)
{
  ?SetFirst@SvSnapshotEntries@@QEAAXW4SvSnapshotBufferType@@_J@Z(this, type, first);
}

/*
==============
SvSnapshotFrameBuffers::AllocateNextBufferEntryArray
==============
*/

unsigned __int8 *__fastcall SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int arraySize)
{
  return ?AllocateNextBufferEntryArray@SvSnapshotFrameBuffers@@QEAAPEAEW4SvSnapshotBufferType@@I@Z(this, type, arraySize);
}

/*
==============
SvSnapshotFrameBuffers::GetBufferNextIndex
==============
*/

__int64 __fastcall SvSnapshotFrameBuffers::GetBufferNextIndex(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type)
{
  return ?GetBufferNextIndex@SvSnapshotFrameBuffers@@QEBA_JW4SvSnapshotBufferType@@@Z(this, type);
}

/*
==============
SvSnapshotFrameBuffers::AllocateNextBufferEntryArray
==============
*/
unsigned __int8 *SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int arraySize)
{
  __int64 v3; 
  __int64 v5; 
  unsigned __int8 *BufferEntryAtIndex; 
  unsigned __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = arraySize;
  v5 = (unsigned int)type;
  if ( !arraySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 310, ASSERT_TYPE_ASSERT, "( arraySize > 0 )", (const char *)&queryFormat, "arraySize > 0") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xA )
  {
    v10 = 10;
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 313, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_nextBufferIndex ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_nextBufferIndex )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(this, (const SvSnapshotBufferType)v5, this->m_nextBufferIndex[v5]);
  this->m_nextBufferIndex[v5] += v3;
  v7 = (unsigned __int64)BufferEntryAtIndex;
  if ( this->m_nextBufferIndex[v5] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 318, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  if ( (unsigned __int64)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(this, (const SvSnapshotBufferType)v5, this->m_nextBufferIndex[v5] - 1) < v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 319, ASSERT_TYPE_ASSERT, "(GetBufferEntryAtIndex( type, m_nextBufferIndex[typeIndex] - 1 ) >= nextEntry)", "%s\n\tArray allocated is not contiguous, call EnsureContiguousArray first", "GetBufferEntryAtIndex( type, m_nextBufferIndex[typeIndex] - 1 ) >= nextEntry") )
    __debugbreak();
  return (unsigned __int8 *)v7;
}

/*
==============
SvSnapshotFrameBuffers::EnsureContiguousArray
==============
*/
__int64 SvSnapshotFrameBuffers::EnsureContiguousArray(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int arraySize)
{
  __int64 v3; 
  signed int v6; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = (unsigned int)type;
  if ( !arraySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 327, ASSERT_TYPE_ASSERT, "( arraySize > 0 )", (const char *)&queryFormat, "arraySize > 0") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xA )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 330, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_nextBufferIndex ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_nextBufferIndex )\n\t%i not in [0, %i)", v9, 10) )
      __debugbreak();
    LODWORD(v11) = 10;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 331, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_numBufferEntries ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_numBufferEntries )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v6 = this->m_numBufferEntries[v3] - this->m_nextBufferIndex[v3] % this->m_numBufferEntries[v3];
  if ( v6 >= (int)arraySize )
    return this->m_nextBufferIndex[v3];
  v7 = this->m_nextBufferIndex[v3] + v6;
  this->m_nextBufferIndex[v3] = v7;
  if ( v7 % this->m_numBufferEntries[v3] )
  {
    LODWORD(v9) = v7 % this->m_numBufferEntries[v3];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 340, ASSERT_TYPE_ASSERT, "( m_nextBufferIndex[typeIndex] % m_numBufferEntries[typeIndex] ) == ( 0 )", "m_nextBufferIndex[typeIndex] % m_numBufferEntries[typeIndex] == 0\n\t%i, %i", v9, 0i64) )
      __debugbreak();
  }
  if ( this->m_nextBufferIndex[v3] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 341, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  return this->m_nextBufferIndex[v3];
}

/*
==============
SvSnapshotFrameBuffers::GetBufferNextIndex
==============
*/
__int64 SvSnapshotFrameBuffers::GetBufferNextIndex(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type)
{
  __int64 v2; 
  int v6; 

  v2 = type;
  if ( (unsigned int)type < 0xA )
    return this->m_nextBufferIndex[type];
  v6 = 10;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_nextBufferIndex ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_nextBufferIndex )\n\t%i not in [0, %i)", type, v6) )
    __debugbreak();
  return this->m_nextBufferIndex[v2];
}

/*
==============
SvSnapshotEntries::SetCount
==============
*/
void SvSnapshotEntries::SetCount(SvSnapshotEntries *this, SvSnapshotBufferType type, unsigned int count)
{
  __int64 v3; 
  int v7; 

  v3 = type;
  if ( (unsigned int)type < 0xA )
  {
    this->m_count[type] = count;
  }
  else
  {
    v7 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_count ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_count )\n\t%i not in [0, %i)", type, v7) )
      __debugbreak();
    this->m_count[v3] = count;
  }
}

/*
==============
SvSnapshotEntries::SetFirst
==============
*/
void SvSnapshotEntries::SetFirst(SvSnapshotEntries *this, SvSnapshotBufferType type, __int64 first)
{
  __int64 v3; 
  int v7; 

  v3 = type;
  if ( (unsigned int)type < 0xA )
  {
    this->m_first[type] = first;
  }
  else
  {
    v7 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 181, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_first ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_first )\n\t%i not in [0, %i)", type, v7) )
      __debugbreak();
    this->m_first[v3] = first;
  }
}

