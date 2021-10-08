/*
==============
StreamableBits::Alloc
==============
*/

void __fastcall StreamableBits::Alloc(StreamableBits *this, unsigned int bitCount)
{
  ?Alloc@StreamableBits@@QEAAXI@Z(this, bitCount);
}

/*
==============
RequestBits::Alloc
==============
*/

void __fastcall RequestBits::Alloc(RequestBits *this, unsigned int assetCount)
{
  ?Alloc@RequestBits@@QEAAXI@Z(this, assetCount);
}

/*
==============
RequestBits::InvalidateSorting
==============
*/

void __fastcall RequestBits::InvalidateSorting(RequestBits *this)
{
  ?InvalidateSorting@RequestBits@@QEAAXXZ(this);
}

/*
==============
RequestBits::ClearBitsAndCount
==============
*/

void __fastcall RequestBits::ClearBitsAndCount(RequestBits *this, int bufferIndex)
{
  ?ClearBitsAndCount@RequestBits@@QEAAXH@Z(this, bufferIndex);
}

/*
==============
RequestBits::Alloc
==============
*/
void RequestBits::Alloc(RequestBits *this, unsigned int assetCount)
{
  unsigned int **count; 
  __int64 v4; 
  unsigned __int64 v5; 
  void *v6; 
  unsigned __int64 v7; 
  void *v8; 
  unsigned __int64 v9; 
  void *v10; 
  unsigned __int64 v11; 
  void *v12; 
  unsigned __int64 v13; 
  void *v14; 
  unsigned __int64 v15; 
  void *v16; 
  unsigned __int64 v17; 
  void *v18; 

  this->bitCount = assetCount;
  this->arrayCount = truncate_cast<unsigned int,unsigned __int64>(((((unsigned __int64)assetCount + 31) >> 5) + 15) & 0xFFFFFFF0);
  count = this->count;
  v4 = 2i64;
  do
  {
    v5 = 4i64 * this->arrayCount;
    v6 = PMem_Alloc(v5, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
    memset_0(v6, 0, v5);
    *(count - 3) = (unsigned int *)v6;
    v7 = 4i64 * this->bitCount;
    v8 = PMem_Alloc(v7, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
    memset_0(v8, 0, v7);
    *count++ = (unsigned int *)v8;
    --v4;
  }
  while ( v4 );
  v9 = 4i64 * this->arrayCount;
  v10 = PMem_Alloc(v9, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v10, 0, v9);
  v11 = 4i64 * this->arrayCount;
  this->bitsStable = (unsigned int *)v10;
  v12 = PMem_Alloc(v11, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v12, 0, v11);
  v13 = 4i64 * this->arrayCount;
  this->mDanger = (unsigned int *)v12;
  v14 = PMem_Alloc(v13, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v14, 0, v13);
  v15 = 4i64 * this->bitCount;
  this->mFreeable = (unsigned int *)v14;
  v16 = PMem_Alloc(v15, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v16, 0, v15);
  v17 = 4i64 * this->bitCount;
  this->countStable = (unsigned int *)v16;
  v18 = PMem_Alloc(v17, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v18, 0, v17);
  this->frame = (unsigned int *)v18;
}

/*
==============
StreamableBits::Alloc
==============
*/
void StreamableBits::Alloc(StreamableBits *this, unsigned int bitCount)
{
  unsigned int v3; 
  unsigned __int64 v4; 
  void *v5; 
  unsigned __int64 v6; 
  void *v7; 
  unsigned __int64 v8; 
  void *v9; 
  unsigned __int64 v10; 
  void *v11; 
  unsigned __int64 v12; 
  void *v13; 
  unsigned __int64 v14; 
  void *v15; 
  unsigned __int64 v16; 
  void *v17; 

  this->mBitCount = bitCount;
  v3 = truncate_cast<unsigned int,unsigned __int64>(((((unsigned __int64)bitCount + 31) >> 5) + 15) & 0xFFFFFFF0);
  this->mWordCount = v3;
  v4 = 4i64 * v3;
  v5 = PMem_Alloc(v4, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v5, 0, v4);
  v6 = 4i64 * this->mWordCount;
  this->mAlloc = (unsigned int *)v5;
  v7 = PMem_Alloc(v6, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v7, 0, v6);
  v8 = 4i64 * this->mWordCount;
  this->mLoading = (unsigned int *)v7;
  v9 = PMem_Alloc(v8, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v9, 0, v8);
  v10 = 4i64 * this->mWordCount;
  this->mPriming = (unsigned int *)v9;
  v11 = PMem_Alloc(v10, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v11, 0, v10);
  v12 = 4i64 * this->mWordCount;
  this->mUse = (unsigned int *)v11;
  v13 = PMem_Alloc(v12, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v13, 0, v12);
  this->mLoaded = (unsigned int *)v13;
  v14 = 4i64 * this->mWordCount;
  v15 = PMem_Alloc(v14, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v15, 0, v14);
  v16 = 4i64 * this->mWordCount;
  this->mStaticForced = (unsigned int *)v15;
  v17 = PMem_Alloc(v16, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamableBits");
  memset_0(v17, 0, v16);
  this->mValid = (unsigned int *)v17;
}

/*
==============
RequestBits::ClearBitsAndCount
==============
*/
void RequestBits::ClearBitsAndCount(RequestBits *this, int bufferIndex)
{
  __int64 v3; 

  v3 = bufferIndex;
  memset_0(this->bits[bufferIndex], 0, 4i64 * this->arrayCount);
  memset_0(this->count[v3], 0, 4i64 * this->bitCount);
}

/*
==============
RequestBits::InvalidateSorting
==============
*/
void RequestBits::InvalidateSorting(RequestBits *this)
{
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.cpp", 128, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  memset_0(this->bitsStable, 0, 4i64 * this->arrayCount);
  memset_0(this->countStable, 0, 4i64 * this->bitCount);
  memset_0(this->frame, 0, 4i64 * this->bitCount);
}

