/*
==============
StreamableBits::CheckPriming
==============
*/

bool __fastcall StreamableBits::CheckPriming(StreamableBits *this, int index)
{
  return ?CheckPriming@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::SetValid
==============
*/

void __fastcall StreamableBits::SetValid(StreamableBits *this, int index)
{
  ?SetValid@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBits::GetInUseAndNotForcedBits
==============
*/

unsigned int __fastcall StreamableBits::GetInUseAndNotForcedBits(StreamableBits *this, int index)
{
  return ?GetInUseAndNotForcedBits@StreamableBits@@QEBAIH@Z(this, index);
}

/*
==============
StreamableBits::ClearLoading
==============
*/

void __fastcall StreamableBits::ClearLoading(StreamableBits *this, int index)
{
  ?ClearLoading@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
ImagePartBitsArray_Get
==============
*/

bool __fastcall ImagePartBitsArray_Get(const volatile int (*bitArray)[10240], int index)
{
  return ?ImagePartBitsArray_Get@@YA_NAEAY0CIAA@$$CDJH@Z(bitArray, index);
}

/*
==============
StreamableBits::BitSwap
==============
*/

void __fastcall StreamableBits::BitSwap(StreamableBits *this, int lhs, int rhs)
{
  ?BitSwap@StreamableBits@@QEAAXHH@Z(this, lhs, rhs);
}

/*
==============
StreamableBits::CheckLoading
==============
*/

bool __fastcall StreamableBits::CheckLoading(StreamableBits *this, int index)
{
  return ?CheckLoading@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::ClearInUse
==============
*/

void __fastcall StreamableBits::ClearInUse(StreamableBits *this, int index)
{
  ?ClearInUse@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBits::SetLoadingConditional
==============
*/

bool __fastcall StreamableBits::SetLoadingConditional(StreamableBits *this, int index)
{
  return ?SetLoadingConditional@StreamableBits@@QEAA_NH@Z(this, index);
}

/*
==============
StreamableBits::CheckAlloc
==============
*/

bool __fastcall StreamableBits::CheckAlloc(StreamableBits *this, int index)
{
  return ?CheckAlloc@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
RequestBits::CheckDanger
==============
*/

bool __fastcall RequestBits::CheckDanger(RequestBits *this, int index)
{
  return ?CheckDanger@RequestBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::CheckInUse
==============
*/

bool __fastcall StreamableBits::CheckInUse(StreamableBits *this, int index)
{
  return ?CheckInUse@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBitArray_InterlockedClearArray
==============
*/

void __fastcall StreamableBitArray_InterlockedClearArray(unsigned int *bitArray, int index)
{
  ?StreamableBitArray_InterlockedClearArray@@YAXPEAIH@Z(bitArray, index);
}

/*
==============
StreamableBits::CheckForced
==============
*/

bool __fastcall StreamableBits::CheckForced(StreamableBits *this, int index)
{
  return ?CheckForced@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::ClearValid
==============
*/

void __fastcall StreamableBits::ClearValid(StreamableBits *this, int index)
{
  ?ClearValid@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBits::ClearStaticForced
==============
*/

void __fastcall StreamableBits::ClearStaticForced(StreamableBits *this, int index)
{
  ?ClearStaticForced@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBits::SetInUse
==============
*/

void __fastcall StreamableBits::SetInUse(StreamableBits *this, int index)
{
  ?SetInUse@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBits::CheckInUseAndLoaded
==============
*/

bool __fastcall StreamableBits::CheckInUseAndLoaded(StreamableBits *this, int index)
{
  return ?CheckInUseAndLoaded@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::SetStaticForced
==============
*/

void __fastcall StreamableBits::SetStaticForced(StreamableBits *this, int index)
{
  ?SetStaticForced@StreamableBits@@QEAAXH@Z(this, index);
}

/*
==============
StreamableBitArray_InterlockedSetArray
==============
*/

void __fastcall StreamableBitArray_InterlockedSetArray(unsigned int *bitArray, int index)
{
  ?StreamableBitArray_InterlockedSetArray@@YAXPEAIH@Z(bitArray, index);
}

/*
==============
StreamableBits::CheckLoaded
==============
*/

bool __fastcall StreamableBits::CheckLoaded(StreamableBits *this, int index)
{
  return ?CheckLoaded@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::CheckInUseOrLoading
==============
*/

bool __fastcall StreamableBits::CheckInUseOrLoading(StreamableBits *this, int index)
{
  return ?CheckInUseOrLoading@StreamableBits@@QEBA_NH@Z(this, index);
}

/*
==============
RequestBits::BitSwap
==============
*/

void __fastcall RequestBits::BitSwap(RequestBits *this, int lhs, int rhs)
{
  ?BitSwap@RequestBits@@QEAAXHH@Z(this, lhs, rhs);
}

/*
==============
RequestBits::CheckFreeable
==============
*/

bool __fastcall RequestBits::CheckFreeable(RequestBits *this, int index)
{
  return ?CheckFreeable@RequestBits@@QEBA_NH@Z(this, index);
}

/*
==============
StreamableBits::SetValid
==============
*/
void StreamableBits::SetValid(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mValid; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 428, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mValid = this->mValid;
  if ( !mValid && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mValid[v3 >> 5] |= 1 << (v3 & 0x1F);
}

/*
==============
StreamableBits::CheckAlloc
==============
*/
unsigned __int8 StreamableBits::CheckAlloc(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mAlloc; 
  unsigned int v5; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mAlloc = this->mAlloc;
  if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = mAlloc[v3 >> 5];
  return _bittest((const int *)&v5, v3 & 0x1F);
}

/*
==============
RequestBits::CheckDanger
==============
*/
unsigned __int8 RequestBits::CheckDanger(RequestBits *this, int index)
{
  unsigned int *mDanger; 
  __int64 v3; 
  unsigned int v4; 

  mDanger = this->mDanger;
  v3 = index;
  if ( !mDanger && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v4 = mDanger[v3 >> 5];
  return _bittest((const int *)&v4, v3 & 0x1F);
}

/*
==============
StreamableBits::CheckForced
==============
*/
unsigned __int8 StreamableBits::CheckForced(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mStaticForced; 
  unsigned int v5; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mStaticForced = this->mStaticForced;
  if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = mStaticForced[v3 >> 5];
  return _bittest((const int *)&v5, v3 & 0x1F);
}

/*
==============
RequestBits::CheckFreeable
==============
*/
unsigned __int8 RequestBits::CheckFreeable(RequestBits *this, int index)
{
  unsigned int *mFreeable; 
  __int64 v3; 
  unsigned int v4; 

  mFreeable = this->mFreeable;
  v3 = index;
  if ( !mFreeable && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v4 = mFreeable[v3 >> 5];
  return _bittest((const int *)&v4, v3 & 0x1F);
}

/*
==============
StreamableBits::CheckInUse
==============
*/
unsigned __int8 StreamableBits::CheckInUse(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mUse; 
  unsigned int v5; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mUse = this->mUse;
  if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = mUse[v3 >> 5];
  return _bittest((const int *)&v5, v3 & 0x1F);
}

/*
==============
StreamableBits::CheckLoaded
==============
*/
unsigned __int8 StreamableBits::CheckLoaded(StreamableBits *this, int index)
{
  unsigned int *mLoaded; 
  __int64 v3; 
  unsigned int v4; 

  mLoaded = this->mLoaded;
  v3 = index;
  if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v4 = mLoaded[v3 >> 5];
  return _bittest((const int *)&v4, v3 & 0x1F);
}

/*
==============
StreamableBits::CheckLoading
==============
*/
unsigned __int8 StreamableBits::CheckLoading(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mLoading; 
  unsigned int v5; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mLoading = this->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = mLoading[v3 >> 5];
  return _bittest((const int *)&v5, v3 & 0x1F);
}

/*
==============
StreamableBits::CheckPriming
==============
*/
unsigned __int8 StreamableBits::CheckPriming(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mPriming; 
  unsigned int v5; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 554, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mPriming = this->mPriming;
  if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = mPriming[v3 >> 5];
  return _bittest((const int *)&v5, v3 & 0x1F);
}

/*
==============
StreamableBits::SetInUse
==============
*/
void StreamableBits::SetInUse(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mUse; 
  __int64 v5; 

  v3 = index;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 363, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->mBitCount )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 364, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v5, this->mBitCount) )
      __debugbreak();
  }
  mUse = this->mUse;
  if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mUse[v3 >> 5] |= 1 << (v3 & 0x1F);
}

/*
==============
StreamableBitArray_InterlockedClearArray
==============
*/
void StreamableBitArray_InterlockedClearArray(unsigned int *bitArray, int index)
{
  char v2; 
  __int64 v3; 
  volatile signed __int32 *v4; 

  v2 = index;
  v3 = (__int64)index >> 5;
  v4 = (volatile signed __int32 *)&bitArray[v3];
  if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &bitArray[v3]) )
    __debugbreak();
  _InterlockedAnd(v4, ~(1 << (v2 & 0x1F)));
}

/*
==============
StreamableBitArray_InterlockedSetArray
==============
*/
void StreamableBitArray_InterlockedSetArray(unsigned int *bitArray, int index)
{
  char v2; 
  __int64 v3; 
  volatile signed __int32 *v4; 

  v2 = index;
  v3 = (__int64)index >> 5;
  v4 = (volatile signed __int32 *)&bitArray[v3];
  if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &bitArray[v3]) )
    __debugbreak();
  _InterlockedOr(v4, 1 << (v2 & 0x1F));
}

/*
==============
RequestBits::BitSwap
==============
*/
void RequestBits::BitSwap(RequestBits *this, int lhs, int rhs)
{
  unsigned int *mDanger; 
  __int64 v5; 
  __int64 v7; 
  unsigned int bitCount; 
  RequestBits::BitSwap::__l2::<lambda_0eed579dfbbd7790b051d5771be1db95> v9; 
  int v10; 
  int v11; 

  v11 = rhs;
  v10 = lhs;
  if ( lhs >= this->bitCount )
  {
    bitCount = this->bitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 718, ASSERT_TYPE_ASSERT, "(unsigned)( lhs ) < (unsigned)( bitCount )", "lhs doesn't index bitCount\n\t%i not in [0, %i)", lhs, bitCount) )
      __debugbreak();
    rhs = v11;
  }
  if ( rhs >= this->bitCount )
  {
    LODWORD(v7) = this->bitCount;
    LODWORD(v5) = rhs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 719, ASSERT_TYPE_ASSERT, "(unsigned)( rhs ) < (unsigned)( bitCount )", "rhs doesn't index bitCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  mDanger = this->mDanger;
  v9.lhs = &v10;
  v9.rhs = &v11;
  _lambda_0eed579dfbbd7790b051d5771be1db95_::operator()(&v9, mDanger);
  _lambda_0eed579dfbbd7790b051d5771be1db95_::operator()(&v9, this->mFreeable);
}

/*
==============
StreamableBits::BitSwap
==============
*/
void StreamableBits::BitSwap(StreamableBits *this, int lhs, int rhs)
{
  unsigned int *mAlloc; 
  __int64 v5; 
  __int64 v6; 
  unsigned int mBitCount; 
  StreamableBits::BitSwap::__l2::<lambda_0cfe52a449506a58f3f65a204b9daded> v8; 
  unsigned int v9; 
  unsigned int v10; 

  v10 = rhs;
  v9 = lhs;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 603, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( v9 >= this->mBitCount )
  {
    mBitCount = this->mBitCount;
    LODWORD(v5) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 604, ASSERT_TYPE_ASSERT, "(unsigned)( lhs ) < (unsigned)( mBitCount )", "lhs doesn't index mBitCount\n\t%i not in [0, %i)", v5, mBitCount) )
      __debugbreak();
  }
  if ( v10 >= this->mBitCount )
  {
    LODWORD(v6) = this->mBitCount;
    LODWORD(v5) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 605, ASSERT_TYPE_ASSERT, "(unsigned)( rhs ) < (unsigned)( mBitCount )", "rhs doesn't index mBitCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  mAlloc = this->mAlloc;
  v8.lhs = (int *)&v9;
  v8.rhs = (int *)&v10;
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, mAlloc);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mLoading);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mPriming);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mUse);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mLoaded);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mStaticForced);
  _lambda_0cfe52a449506a58f3f65a204b9daded_::operator()(&v8, this->mValid);
}

/*
==============
StreamableBits::ClearInUse
==============
*/
void StreamableBits::ClearInUse(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mUse; 
  __int64 v5; 

  v3 = index;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 355, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->mBitCount )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 356, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v5, this->mBitCount) )
      __debugbreak();
  }
  mUse = this->mUse;
  if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mUse[v3 >> 5] &= ~(1 << (v3 & 0x1F));
}

/*
==============
StreamableBits::ClearStaticForced
==============
*/
void StreamableBits::ClearStaticForced(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mStaticForced; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 575, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mStaticForced = this->mStaticForced;
  if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mStaticForced[v3 >> 5] &= ~(1 << (v3 & 0x1F));
}

/*
==============
StreamableBits::ClearValid
==============
*/
void StreamableBits::ClearValid(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mValid; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mValid = this->mValid;
  if ( !mValid && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mValid[v3 >> 5] &= ~(1 << (v3 & 0x1F));
}

/*
==============
ImagePartBitsArray_Get
==============
*/
unsigned __int8 ImagePartBitsArray_Get(const volatile int (*bitArray)[10240], int index)
{
  __int64 v2; 
  int *v4; 
  int v5; 

  v2 = index;
  if ( (unsigned int)(index >> 5) >= 0x2800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 46, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", index >> 5, 10240) )
    __debugbreak();
  v4 = (int *)&(*bitArray)[v2 >> 5];
  if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", v4) )
    __debugbreak();
  v5 = *v4;
  return _bittest(&v5, v2 & 0x1F);
}

/*
==============
StreamableBits::SetStaticForced
==============
*/
void StreamableBits::SetStaticForced(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mStaticForced; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mStaticForced = this->mStaticForced;
  if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mStaticForced[v3 >> 5] |= 1 << (v3 & 0x1F);
}

/*
==============
StreamableBits::CheckInUseOrLoading
==============
*/
bool StreamableBits::CheckInUseOrLoading(StreamableBits *this, int index)
{
  bool result; 

  if ( StreamableBits::CheckInUse(this, index) )
    return 1;
  result = StreamableBits::CheckLoading(this, index);
  if ( result )
    return 1;
  return result;
}

/*
==============
StreamableBits::ClearLoading
==============
*/
void StreamableBits::ClearLoading(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mLoading; 
  __int64 v5; 

  v3 = index;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 259, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->mBitCount )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v5, this->mBitCount) )
      __debugbreak();
  }
  mLoading = this->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mLoading[v3 >> 5] &= ~(1 << (v3 & 0x1F));
}

/*
==============
StreamableBits::SetLoadingConditional
==============
*/
char StreamableBits::SetLoadingConditional(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mLoading; 
  int v5; 
  __int64 v6; 
  unsigned int *v8; 
  __int64 v9; 

  v3 = index;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v3 >= this->mBitCount )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v9, this->mBitCount) )
      __debugbreak();
  }
  mLoading = this->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = 1 << (v3 & 0x1F);
  v6 = v3 >> 5;
  if ( (v5 & mLoading[v6]) != 0 )
    return 0;
  v8 = this->mLoading;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v8[v6] |= v5;
  return 1;
}

/*
==============
StreamableBits::GetInUseAndNotForcedBits
==============
*/
__int64 StreamableBits::GetInUseAndNotForcedBits(StreamableBits *this, int index)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v7; 
  unsigned int mWordCount; 

  v2 = index;
  if ( index >= this->mWordCount )
  {
    mWordCount = this->mWordCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 252, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", index, mWordCount) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= this->mWordCount )
  {
    LODWORD(v7) = this->mWordCount;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 596, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mWordCount )", "index doesn't index mWordCount\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return this->mUse[v2] & ~this->mStaticForced[v2];
}

/*
==============
StreamableBits::CheckInUseAndLoaded
==============
*/
bool StreamableBits::CheckInUseAndLoaded(StreamableBits *this, int index)
{
  __int64 v3; 
  unsigned int *mUse; 
  int v5; 
  __int64 v6; 
  unsigned int *mLoaded; 

  v3 = index;
  if ( index >= this->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", index, this->mBitCount) )
    __debugbreak();
  mUse = this->mUse;
  if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v5 = 1 << (v3 & 0x1F);
  v6 = v3 >> 5;
  if ( (v5 & mUse[v6]) == 0 )
    return 0;
  mLoaded = this->mLoaded;
  if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  return (v5 & mLoaded[v6]) != 0;
}

