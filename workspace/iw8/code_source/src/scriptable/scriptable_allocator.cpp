/*
==============
ScriptablePartAllocator::UnitTests
==============
*/

void __fastcall ScriptablePartAllocator::UnitTests(ScriptablePartAllocator *this)
{
  ?UnitTests@ScriptablePartAllocator@@AEAAXXZ(this);
}

/*
==============
ScriptablePartAllocator::AllocateFreeSubBlock
==============
*/

bool __fastcall ScriptablePartAllocator::AllocateFreeSubBlock(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, unsigned int *outFirstIndex)
{
  return ?AllocateFreeSubBlock@ScriptablePartAllocator@@AEAA_NIIAEAI@Z(this, partCount, blockSizeType, outFirstIndex);
}

/*
==============
ScriptablePartAllocator::Init
==============
*/

void __fastcall ScriptablePartAllocator::Init(ScriptablePartAllocator *this, const unsigned int partCapacity)
{
  ?Init@ScriptablePartAllocator@@QEAAXI@Z(this, partCapacity);
}

/*
==============
ScriptablePartAllocator::AllocError
==============
*/

void __fastcall ScriptablePartAllocator::AllocError(ScriptablePartAllocator *this, const unsigned int partCount)
{
  ?AllocError@ScriptablePartAllocator@@AEAAXI@Z(this, partCount);
}

/*
==============
ScriptablePartAllocator::AllocateParts
==============
*/

bool __fastcall ScriptablePartAllocator::AllocateParts(ScriptablePartAllocator *this, const unsigned __int8 partCount, unsigned int *outFirstIndex)
{
  return ?AllocateParts@ScriptablePartAllocator@@QEAA_NEAEAI@Z(this, partCount, outFirstIndex);
}

/*
==============
ScriptablePartAllocator::AllocateFreeFullBlocks
==============
*/

bool __fastcall ScriptablePartAllocator::AllocateFreeFullBlocks(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, unsigned int *outFirstIndex)
{
  return ?AllocateFreeFullBlocks@ScriptablePartAllocator@@AEAA_NIIAEAI@Z(this, partCount, blockSizeType, outFirstIndex);
}

/*
==============
ScriptablePartAllocator::FreeParts
==============
*/

void __fastcall ScriptablePartAllocator::FreeParts(ScriptablePartAllocator *this, const unsigned int partIndex, const unsigned __int8 partCount)
{
  ?FreeParts@ScriptablePartAllocator@@QEAAXIE@Z(this, partIndex, partCount);
}

/*
==============
ScriptablePartAllocator::PrintUsage
==============
*/

void __fastcall ScriptablePartAllocator::PrintUsage(ScriptablePartAllocator *this)
{
  ?PrintUsage@ScriptablePartAllocator@@QEAAXXZ(this);
}

/*
==============
ScriptablePartAllocator::AllocSuccess
==============
*/

unsigned int __fastcall ScriptablePartAllocator::AllocSuccess(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, const unsigned int offset, const unsigned int bit)
{
  return ?AllocSuccess@ScriptablePartAllocator@@AEAAIIIII@Z(this, partCount, blockSizeType, offset, bit);
}

/*
==============
ScriptablePartAllocator::HasContiguousFreeBlocks
==============
*/

bool __fastcall ScriptablePartAllocator::HasContiguousFreeBlocks(ScriptablePartAllocator *this, const unsigned int start, const unsigned int blockCount)
{
  return ?HasContiguousFreeBlocks@ScriptablePartAllocator@@AEAA_NII@Z(this, start, blockCount);
}

/*
==============
ScriptablePartAllocator::Archive
==============
*/

void __fastcall ScriptablePartAllocator::Archive(ScriptablePartAllocator *this, MemoryFile *memFile, unsigned __int8 archiveVersion)
{
  ?Archive@ScriptablePartAllocator@@QEAAXPEAUMemoryFile@@E@Z(this, memFile, archiveVersion);
}

/*
==============
ScriptablePartAllocator::AllocError
==============
*/
void ScriptablePartAllocator::AllocError(ScriptablePartAllocator *this, const unsigned int partCount)
{
  Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", partCount);
}

/*
==============
ScriptablePartAllocator::AllocSuccess
==============
*/
__int64 ScriptablePartAllocator::AllocSuccess(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, const unsigned int offset, const unsigned int bit)
{
  __int64 v6; 
  __int64 v10; 
  __int64 v12; 
  unsigned int m_blockCapacity; 

  v6 = blockSizeType;
  if ( offset >= this->m_blockCapacity )
  {
    m_blockCapacity = this->m_blockCapacity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 140, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( m_blockCapacity )", "offset doesn't index m_blockCapacity\n\t%i not in [0, %i)", offset, m_blockCapacity) )
      __debugbreak();
  }
  if ( bit > 7 )
  {
    LODWORD(v12) = 7;
    LODWORD(v10) = bit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 141, ASSERT_TYPE_ASSERT, "( bit ) <= ( PARTS_PER_BLOCK - 1 )", "bit not in [0, PARTS_PER_BLOCK - 1]\n\t%u not in [0, %u]", v10, v12) )
      __debugbreak();
  }
  this->m_allocatedParts += partCount;
  if ( this->m_allocatedParts > this->m_partCapacity )
  {
    LODWORD(v12) = this->m_partCapacity;
    LODWORD(v10) = this->m_allocatedParts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 145, ASSERT_TYPE_ASSERT, "( m_allocatedParts ) <= ( m_partCapacity )", "m_allocatedParts <= m_partCapacity\n\t%i, %i", v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x20 )
  {
    LODWORD(v12) = 32;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( m_blockHead ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( m_blockHead )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  this->m_blockHead[v6] = offset;
  return bit + 8 * offset;
}

/*
==============
ScriptablePartAllocator::AllocateFreeFullBlocks
==============
*/
char ScriptablePartAllocator::AllocateFreeFullBlocks(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, unsigned int *outFirstIndex)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  unsigned int v7; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  __int64 v16; 
  __int64 v17; 

  v4 = blockSizeType;
  v5 = (partCount + 7) >> 3;
  v6 = outFirstIndex;
  v7 = partCount;
  if ( blockSizeType >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( m_blockHead ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( m_blockHead )\n\t%i not in [0, %i)", blockSizeType, 32) )
    __debugbreak();
  v9 = this->m_blockHead[v4];
  v10 = v9;
  while ( 2 )
  {
    if ( v10 + v5 > this->m_blockCapacity )
    {
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 248, ASSERT_TYPE_ASSERT, "( offset != 0 )", (const char *)&queryFormat, "offset != 0") )
        __debugbreak();
      v10 = 0;
    }
    v11 = 0;
    if ( v5 )
    {
      while ( this->m_blockList[v11 + v10] == 0xFF )
      {
        if ( ++v11 >= v5 )
        {
          v12 = v10;
          v13 = v5;
          do
          {
            if ( v12 >= this->m_blockCapacity )
            {
              LODWORD(v17) = this->m_blockCapacity;
              LODWORD(v16) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( blockIndex ) < (unsigned)( m_blockCapacity )", "blockIndex doesn't index m_blockCapacity\n\t%i not in [0, %i)", v16, v17) )
                __debugbreak();
            }
            v14 = &this->m_blockList[v12];
            if ( *v14 != 0xFF )
            {
              LODWORD(v17) = 255;
              LODWORD(v16) = *v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 262, ASSERT_TYPE_ASSERT, "( m_blockList[blockIndex] ) == ( FREE_BLOCK_BITS )", "m_blockList[blockIndex] == FREE_BLOCK_BITS\n\t%i, %i", v16, v17) )
                __debugbreak();
            }
            ++v12;
            *v14 = 0;
            --v13;
          }
          while ( v13 );
          v7 = partCount;
          v6 = outFirstIndex;
          goto LABEL_22;
        }
      }
      if ( ++v10 != v9 )
        continue;
      Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", v7);
      return 0;
    }
    else
    {
LABEL_22:
      *v6 = ScriptablePartAllocator::AllocSuccess(this, v7, v4, v10, 0);
      return 1;
    }
  }
}

/*
==============
ScriptablePartAllocator::AllocateFreeSubBlock
==============
*/
char ScriptablePartAllocator::AllocateFreeSubBlock(ScriptablePartAllocator *this, const unsigned int partCount, const unsigned int blockSizeType, unsigned int *outFirstIndex)
{
  __int64 v4; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int i; 
  int v12; 
  unsigned int v13; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v4 = blockSizeType;
  if ( blockSizeType >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( SHIFT_COUNT ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( SHIFT_COUNT )\n\t%i not in [0, %i)", blockSizeType, 3) )
      __debugbreak();
    LODWORD(v21) = 3;
    LODWORD(v18) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( SHIFT_MASK ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( SHIFT_MASK )\n\t%i not in [0, %i)", v18, v21) )
      __debugbreak();
    LODWORD(v22) = 3;
    LODWORD(v19) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( HIGH_SHIFT_BIT ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( HIGH_SHIFT_BIT )\n\t%i not in [0, %i)", v19, v22) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x20 )
  {
    LODWORD(v20) = 32;
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( m_blockHead ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( m_blockHead )\n\t%i not in [0, %i)", v17, v20) )
      __debugbreak();
  }
  v8 = this->m_blockHead[v4];
  v9 = SHIFT_COUNT[v4];
  while ( 1 )
  {
    v10 = 1;
    for ( i = this->m_blockList[v8]; v10 <= v9; i &= v12 )
    {
      v12 = i << v10;
      v10 *= 2;
    }
    v13 = SHIFT_MASK[v4] & i;
    if ( v13 )
      break;
    v8 = (v8 + 1) % this->m_blockCapacity;
    if ( v8 == this->m_blockHead[v4] )
    {
      Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", partCount);
      return 0;
    }
  }
  v15 = __lzcnt(v13) - 24;
  if ( v15 > 7 )
  {
    LODWORD(v20) = 7;
    LODWORD(v17) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 201, ASSERT_TYPE_ASSERT, "( bit ) <= ( PARTS_PER_BLOCK - 1 )", "bit not in [0, PARTS_PER_BLOCK - 1]\n\t%u not in [0, %u]", v17, v20) )
      __debugbreak();
  }
  v16 = ScriptablePartAllocator::HIGH_SHIFT_BIT[v4] >> v15;
  if ( (unsigned __int8)(v16 & this->m_blockList[v8]) != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 204, ASSERT_TYPE_ASSERT, "( ( m_blockList[offset] & shiftedBit ) == shiftedBit )", (const char *)&queryFormat, "( m_blockList[offset] & shiftedBit ) == shiftedBit") )
    __debugbreak();
  this->m_blockList[v8] &= ~(_BYTE)v16;
  *outFirstIndex = ScriptablePartAllocator::AllocSuccess(this, partCount, v4, v8, v15);
  return 1;
}

/*
==============
ScriptablePartAllocator::AllocateParts
==============
*/
bool ScriptablePartAllocator::AllocateParts(ScriptablePartAllocator *this, const unsigned __int8 partCount, unsigned int *outFirstIndex)
{
  unsigned int v6; 

  if ( !partCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 278, ASSERT_TYPE_ASSERT, "( partCount > 0 )", (const char *)&queryFormat, "partCount > 0") )
    __debugbreak();
  v6 = 32 - __lzcnt(partCount - 1);
  if ( v6 < 0x20 )
  {
    if ( (unsigned __int8)v6 > 2u )
      return ScriptablePartAllocator::AllocateFreeFullBlocks(this, partCount, v6, outFirstIndex);
    else
      return ScriptablePartAllocator::AllocateFreeSubBlock(this, partCount, v6, outFirstIndex);
  }
  else
  {
    Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", partCount);
    return 0;
  }
}

/*
==============
ScriptablePartAllocator::Archive
==============
*/
void ScriptablePartAllocator::Archive(ScriptablePartAllocator *this, MemoryFile *memFile, unsigned __int8 archiveVersion)
{
  int ActiveGameMode; 

  if ( MemFile_IsReading(memFile) )
  {
    if ( archiveVersion == 1 )
    {
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
      {
        ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 85, ASSERT_TYPE_ASSERT, "( Com_GameMode_GetActiveGameMode() ) == ( GameModeType::SP )", "Com_GameMode_GetActiveGameMode() == GameModeType::SP\n\t%i, %i", ActiveGameMode, 1) )
          __debugbreak();
      }
      MemFile_ReadData(memFile, 0x80ui64, this);
      MemFile_ReadData(memFile, 0x80ui64, this->m_backTrackAmount);
      MemFile_ReadData(memFile, 0x400ui64, this->m_blockList);
      memset_0(&this->m_blockList[1024], -1, 0x400ui64);
      MemFile_ReadData(memFile, 4ui64, &this->m_partCapacity);
      MemFile_ReadData(memFile, 4ui64, &this->m_blockCapacity);
      MemFile_ReadData(memFile, 4ui64, &this->m_allocatedParts);
    }
    else
    {
      MemFile_ReadData(memFile, 0x90Cui64, this);
    }
  }
  else
  {
    MemFile_WriteData(memFile, 0x90Cui64, this);
  }
}

/*
==============
ScriptablePartAllocator::FreeParts
==============
*/
void ScriptablePartAllocator::FreeParts(ScriptablePartAllocator *this, const unsigned int partIndex, const unsigned __int8 partCount)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  char v9; 
  unsigned int v10; 
  unsigned int i; 
  unsigned __int8 *v12; 
  const unsigned __int8 *v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  v6 = partCount;
  v7 = 32 - __lzcnt(partCount - 1);
  if ( (unsigned int)v7 > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 306, ASSERT_TYPE_ASSERT, "( blockSizeType ) <= ( 31 )", "blockSizeType not in [0, 31]\n\t%u not in [0, %u]", v7, 31) )
    __debugbreak();
  v8 = partIndex >> 3;
  v9 = partIndex & 7;
  if ( (unsigned int)v8 >= this->m_blockCapacity )
  {
    LODWORD(v16) = this->m_blockCapacity;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( m_blockCapacity )", "offset doesn't index m_blockCapacity\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( (unsigned int)v7 < 3 )
  {
    v13 = &ScriptablePartAllocator::HIGH_SHIFT_BIT[(unsigned int)v7];
    if ( ((unsigned __int8)(*v13 >> v9) & this->m_blockList[v8]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 330, ASSERT_TYPE_ASSERT, "( ( m_blockList[offset] & ( HIGH_SHIFT_BIT[blockSizeType] >> bit ) ) == 0 )", (const char *)&queryFormat, "( m_blockList[offset] & ( HIGH_SHIFT_BIT[blockSizeType] >> bit ) ) == 0") )
      __debugbreak();
    this->m_blockList[v8] |= *v13 >> v9;
  }
  else
  {
    v10 = (unsigned __int8)(partCount + 7) >> 3;
    if ( v10 + (unsigned int)v8 > this->m_blockCapacity )
    {
      LODWORD(v16) = this->m_blockCapacity;
      LODWORD(v15) = v10 + v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 318, ASSERT_TYPE_ASSERT, "( offset + neededBlocks ) <= ( m_blockCapacity )", "offset + neededBlocks <= m_blockCapacity\n\t%i, %i", v15, v16) )
        __debugbreak();
    }
    for ( i = 0; i < v10; *v12 = -1 )
    {
      v12 = &this->m_blockList[i + (unsigned int)v8];
      if ( *v12 )
      {
        LODWORD(v15) = *v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 323, ASSERT_TYPE_ASSERT, "( m_blockList[blockOffset] ) == ( 0 )", "m_blockList[blockOffset] == 0\n\t%i, %i", v15, 0i64) )
          __debugbreak();
      }
      ++i;
    }
  }
  if ( this->m_allocatedParts < v6 )
  {
    LODWORD(v16) = v6;
    LODWORD(v15) = this->m_allocatedParts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 335, ASSERT_TYPE_ASSERT, "( m_allocatedParts ) >= ( partCount )", "m_allocatedParts >= partCount\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  this->m_allocatedParts -= v6;
  if ( (unsigned int)v7 >= 0x20 )
  {
    LODWORD(v16) = 32;
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 340, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( m_blockHead ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( m_blockHead )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v14 = this->m_blockHead[v7] - v8;
  if ( v14 > 0 )
  {
    if ( (unsigned int)v7 >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( blockSizeType ) < (unsigned)( ( sizeof( *array_counter( m_backTrackAmount ) ) + 0 ) )", "blockSizeType doesn't index ARRAY_COUNT( m_backTrackAmount )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    this->m_backTrackAmount[v7] += 2;
    if ( v14 < this->m_backTrackAmount[v7] )
    {
      this->m_blockHead[v7] = v8;
      this->m_backTrackAmount[v7] = 0;
    }
  }
}

/*
==============
ScriptablePartAllocator::HasContiguousFreeBlocks
==============
*/
char ScriptablePartAllocator::HasContiguousFreeBlocks(ScriptablePartAllocator *this, const unsigned int start, const unsigned int blockCount)
{
  int v3; 

  v3 = 0;
  if ( !blockCount )
    return 1;
  while ( this->m_blockList[v3 + start] == 0xFF )
  {
    if ( ++v3 >= blockCount )
      return 1;
  }
  return 0;
}

/*
==============
ScriptablePartAllocator::Init
==============
*/
void ScriptablePartAllocator::Init(ScriptablePartAllocator *this, const unsigned int partCapacity)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int m_partCapacity; 
  __int64 v7; 
  int v8; 

  memset_0(this, 0, 0x100ui64);
  if ( this->m_partCapacity > 0x4000 )
  {
    v8 = 0x4000;
    m_partCapacity = this->m_partCapacity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 22, ASSERT_TYPE_ASSERT, "( m_partCapacity ) <= ( MAX_BLOCK_COUNT * PARTS_PER_BLOCK )", "m_partCapacity <= MAX_BLOCK_COUNT * PARTS_PER_BLOCK\n\t%i, %i", m_partCapacity, v8) )
      __debugbreak();
  }
  this->m_partCapacity = partCapacity;
  if ( (partCapacity & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 25, ASSERT_TYPE_ASSERT, "( (partCapacity % PARTS_PER_BLOCK) == 0 )", (const char *)&queryFormat, "(partCapacity % PARTS_PER_BLOCK) == 0") )
    __debugbreak();
  v4 = partCapacity >> 3;
  this->m_blockCapacity = v4;
  if ( v4 > 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 27, ASSERT_TYPE_ASSERT, "( m_blockCapacity ) <= ( ( sizeof( *array_counter( m_blockList ) ) + 0 ) )", "m_blockCapacity <= ARRAY_COUNT( m_blockList )\n\t%i, %i", v5, v7) )
      __debugbreak();
  }
  memset_0(this->m_blockList, 255, this->m_blockCapacity);
  memset_0(&this->m_blockList[this->m_blockCapacity], 0, 2048i64 - this->m_blockCapacity);
  this->m_allocatedParts = 0;
  ScriptablePartAllocator::UnitTests(this);
}

/*
==============
ScriptablePartAllocator::PrintUsage
==============
*/
void ScriptablePartAllocator::PrintUsage(ScriptablePartAllocator *this)
{
  unsigned int v2; 
  ScriptablePartAllocator *v3; 
  unsigned int i; 
  unsigned int j; 
  unsigned __int8 v6; 
  unsigned int fmt; 
  unsigned int m_blockCapacity; 
  int v9; 

  fmt = this->m_allocatedParts;
  Com_Printf(131101, "ScriptablePartAllocator: Part Capacity %d, Block Capacity %d, Allocated parts %d\n", this->m_partCapacity, this->m_blockCapacity, fmt);
  Com_Printf(131101, "SPA: Block Heads\n");
  v2 = 0;
  v3 = this;
  for ( i = 0; i < 0x20; ++i )
  {
    Com_Printf(131101, "[%d: %x] \n", i, v3->m_blockHead[0]);
    v3 = (ScriptablePartAllocator *)((char *)v3 + 4);
  }
  Com_Printf(131101, "\nSPA: Available blocks:\n");
  if ( this->m_blockCapacity > 0x800 )
  {
    v9 = 2048;
    m_blockCapacity = this->m_blockCapacity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 63, ASSERT_TYPE_ASSERT, "( m_blockCapacity ) <= ( ( sizeof( *array_counter( m_blockList ) ) + 0 ) )", "m_blockCapacity <= ARRAY_COUNT( m_blockList )\n\t%i, %i", m_blockCapacity, v9) )
      __debugbreak();
  }
  for ( j = 0; j < this->m_blockCapacity; ++j )
  {
    v6 = this->m_blockList[j];
    if ( v6 )
    {
      Com_Printf(131101, "[%d: %x] ", j, v6);
      ++v2;
    }
  }
  Com_Printf(131101, "\nSPA: %d blocks available\n", v2);
}

/*
==============
ScriptablePartAllocator::UnitTests
==============
*/
void ScriptablePartAllocator::UnitTests(ScriptablePartAllocator *this)
{
  unsigned int v2; 
  bool v3; 
  unsigned int v4; 
  unsigned int v5; 
  bool v6; 
  bool v7; 
  unsigned int v8; 
  bool v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int outFirstIndex; 

  v2 = 32 - __lzcnt(0);
  if ( v2 < 0x20 )
  {
    if ( (unsigned __int8)v2 > 2u )
      v3 = ScriptablePartAllocator::AllocateFreeFullBlocks(this, 1u, v2, &outFirstIndex);
    else
      v3 = ScriptablePartAllocator::AllocateFreeSubBlock(this, 1u, v2, &outFirstIndex);
    if ( v3 )
      goto LABEL_9;
  }
  else
  {
    Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", 1i64);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 362, ASSERT_TYPE_ASSERT, "(AllocateParts( 1, partIndex ))", (const char *)&queryFormat, "AllocateParts( 1, partIndex )") )
    __debugbreak();
LABEL_9:
  v4 = outFirstIndex;
  if ( outFirstIndex )
  {
    v11 = outFirstIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 363, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 0 )", "%s == %s\n\t%i, %i", "partIndex", "0", v11, 0i64) )
      __debugbreak();
  }
  v5 = 32 - __lzcnt(3u);
  if ( v5 < 0x20 )
  {
    if ( (unsigned __int8)v5 > 2u )
      v6 = ScriptablePartAllocator::AllocateFreeFullBlocks(this, 4u, v5, &outFirstIndex);
    else
      v6 = ScriptablePartAllocator::AllocateFreeSubBlock(this, 4u, v5, &outFirstIndex);
    v4 = outFirstIndex;
    if ( v6 )
      goto LABEL_20;
  }
  else
  {
    Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", 4i64);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 365, ASSERT_TYPE_ASSERT, "(AllocateParts( 4, partIndex ))", (const char *)&queryFormat, "AllocateParts( 4, partIndex )") )
    __debugbreak();
LABEL_20:
  if ( v4 != 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 366, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 4 )", "%s == %s\n\t%i, %i", "partIndex", "4", v10, v12) )
      __debugbreak();
  }
  if ( v2 < 0x20 )
  {
    if ( (unsigned __int8)v2 > 2u )
      v7 = ScriptablePartAllocator::AllocateFreeFullBlocks(this, 1u, v2, &outFirstIndex);
    else
      v7 = ScriptablePartAllocator::AllocateFreeSubBlock(this, 1u, v2, &outFirstIndex);
    v4 = outFirstIndex;
    if ( v7 )
      goto LABEL_31;
  }
  else
  {
    Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", 1i64);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 368, ASSERT_TYPE_ASSERT, "(AllocateParts( 1, partIndex ))", (const char *)&queryFormat, "AllocateParts( 1, partIndex )") )
    __debugbreak();
LABEL_31:
  if ( v4 != 1 )
  {
    LODWORD(v12) = 1;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 369, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 1 )", "%s == %s\n\t%i, %i", "partIndex", "1", v10, v12) )
      __debugbreak();
  }
  v8 = 32 - __lzcnt(1u);
  if ( v8 < 0x20 )
  {
    if ( (unsigned __int8)v8 > 2u )
      v9 = ScriptablePartAllocator::AllocateFreeFullBlocks(this, 2u, v8, &outFirstIndex);
    else
      v9 = ScriptablePartAllocator::AllocateFreeSubBlock(this, 2u, v8, &outFirstIndex);
    v4 = outFirstIndex;
    if ( v9 )
      goto LABEL_42;
  }
  else
  {
    Com_PrintError(131101, "ScriptablePartAllocator::AllocError (%i)\n", 2i64);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 371, ASSERT_TYPE_ASSERT, "(AllocateParts( 2, partIndex ))", (const char *)&queryFormat, "AllocateParts( 2, partIndex )") )
    __debugbreak();
LABEL_42:
  if ( v4 != 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 372, ASSERT_TYPE_ASSERT, "( partIndex ) == ( 2 )", "%s == %s\n\t%i, %i", "partIndex", "2", v10, v12) )
      __debugbreak();
  }
  if ( this->m_allocatedParts != 8 )
  {
    LODWORD(v12) = 8;
    LODWORD(v10) = this->m_allocatedParts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 374, ASSERT_TYPE_ASSERT, "( m_allocatedParts ) == ( 8 )", "%s == %s\n\t%i, %i", "m_allocatedParts", "8", v10, v12) )
      __debugbreak();
  }
  ScriptablePartAllocator::FreeParts(this, 2u, 2u);
  ScriptablePartAllocator::FreeParts(this, 1u, 1u);
  ScriptablePartAllocator::FreeParts(this, 4u, 4u);
  ScriptablePartAllocator::FreeParts(this, 0, 1u);
  if ( this->m_allocatedParts )
  {
    LODWORD(v10) = this->m_allocatedParts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_allocator.cpp", 382, ASSERT_TYPE_ASSERT, "( m_allocatedParts ) == ( 0 )", "%s == %s\n\t%i, %i", "m_allocatedParts", "0", v10, 0i64) )
      __debugbreak();
  }
}

