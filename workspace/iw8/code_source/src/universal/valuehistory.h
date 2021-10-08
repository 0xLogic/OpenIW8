/*
==============
ValueHistory<StreamerInfo::ViewPosSample,120>::Resize
==============
*/

void __fastcall ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(ValueHistory<StreamerInfo::ViewPosSample,120> *this, unsigned __int64 newMaxSize)
{
  ?Resize@?$ValueHistory@UViewPosSample@StreamerInfo@@$0HI@@@QEAAX_K@Z(this, newMaxSize);
}

/*
==============
ValueHistory<StreamerInfo::ViewPosSample,120>::Resize
==============
*/
void ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(ValueHistory<StreamerInfo::ViewPosSample,120> *this, unsigned __int64 newMaxSize)
{
  unsigned __int64 mMaxSize; 
  unsigned __int64 mWriteOffset; 
  unsigned __int64 mCurSize; 
  unsigned __int64 v7; 
  size_t v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  char Src[1920]; 

  if ( this->mMaxSize > 0x78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 200, ASSERT_TYPE_SANITY, "( mMaxSize <= n )", (const char *)&queryFormat, "mMaxSize <= n") )
    __debugbreak();
  mMaxSize = this->mMaxSize;
  if ( mMaxSize != newMaxSize )
  {
    mWriteOffset = this->mWriteOffset;
    mCurSize = this->mCurSize;
    if ( mMaxSize < newMaxSize )
    {
      if ( mWriteOffset != mCurSize )
      {
        if ( mWriteOffset >= mCurSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 217, ASSERT_TYPE_SANITY, "( mWriteOffset < mCurSize )", (const char *)&queryFormat, "mWriteOffset < mCurSize") )
          __debugbreak();
        v7 = this->mWriteOffset;
        v8 = this->mCurSize - v7;
        v7 *= 16i64;
        v8 *= 16i64;
        memcpy_0(Src, (char *)this + v7, v8);
        memcpy_0(&Src[v8], this, v7);
        memcpy_0(this, Src, 16 * this->mMaxSize);
        mWriteOffset = this->mCurSize;
        this->mWriteOffset = mWriteOffset;
        mCurSize = mWriteOffset;
      }
      goto LABEL_21;
    }
    if ( mWriteOffset == mCurSize )
    {
      if ( newMaxSize >= mCurSize )
        goto LABEL_21;
      memmove_0(this, &this->mValues[mCurSize - newMaxSize], 16 * newMaxSize);
      mWriteOffset = newMaxSize;
      this->mWriteOffset = newMaxSize;
    }
    else
    {
      v9 = mMaxSize - mWriteOffset;
      v10 = this->mMaxSize - newMaxSize;
      if ( v9 <= v10 )
      {
        v12 = v10 - v9;
        v11 = 0i64;
        if ( v12 > mWriteOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 261, ASSERT_TYPE_SANITY, "( elementsToRemove <= mWriteOffset )", (const char *)&queryFormat, "elementsToRemove <= mWriteOffset") )
          __debugbreak();
      }
      else
      {
        v11 = v9 - v10;
        memcpy_0(Src, &this->mValues[mWriteOffset + v10], 16 * v11);
        v12 = 0i64;
      }
      memcpy_0(&Src[16 * v11], &this->mValues[v12], 16 * (this->mWriteOffset - v12));
      memcpy_0(this, Src, 16 * newMaxSize);
      mWriteOffset = 0i64;
      this->mWriteOffset = 0i64;
    }
    mCurSize = newMaxSize;
    this->mCurSize = newMaxSize;
LABEL_21:
    this->mMaxSize = newMaxSize;
    if ( mWriteOffset > mCurSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 272, ASSERT_TYPE_SANITY, "( mWriteOffset <= mCurSize )", (const char *)&queryFormat, "mWriteOffset <= mCurSize") )
      __debugbreak();
  }
}

