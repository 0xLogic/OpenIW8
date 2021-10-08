/*
==============
StreamSortList<45056>::PartialSort
==============
*/

bool __fastcall StreamSortList<45056>::PartialSort(StreamSortList<45056> *this, int amountAndDirection)
{
  return ?PartialSort@?$StreamSortList@$0LAAA@@@IEBA_NH@Z(this, amountAndDirection);
}

/*
==============
StreamSortList<327680>::PartialSort
==============
*/

bool __fastcall StreamSortList<327680>::PartialSort(StreamSortList<327680> *this, int amountAndDirection)
{
  return ?PartialSort@?$StreamSortList@$0FAAAA@@@IEBA_NH@Z(this, amountAndDirection);
}

/*
==============
StreamSortList<37888>::PartialSort
==============
*/

bool __fastcall StreamSortList<37888>::PartialSort(StreamSortList<37888> *this, int amountAndDirection)
{
  return ?PartialSort@?$StreamSortList@$0JEAA@@@IEBA_NH@Z(this, amountAndDirection);
}

/*
==============
StreamSortList<45056>::InList
==============
*/

bool __fastcall StreamSortList<45056>::InList(StreamSortList<45056> *this, int index)
{
  return ?InList@?$StreamSortList@$0LAAA@@@QEBA_NH@Z(this, index);
}

/*
==============
StreamSortList<37888>::InList
==============
*/

bool __fastcall StreamSortList<37888>::InList(StreamSortList<37888> *this, int index)
{
  return ?InList@?$StreamSortList@$0JEAA@@@QEBA_NH@Z(this, index);
}

/*
==============
StreamSortList<327680>::InList
==============
*/

bool __fastcall StreamSortList<327680>::InList(StreamSortList<327680> *this, int index)
{
  return ?InList@?$StreamSortList@$0FAAAA@@@QEBA_NH@Z(this, index);
}

/*
==============
StreamSortList<327680>::PartialSort
==============
*/
char StreamSortList<327680>::PartialSort(StreamSortList<327680> *this, int amountAndDirection)
{
  FastCriticalSection *p_mCS; 
  int mSortedRight; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v7; 
  SortKeyPartialPredicate v8; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v9; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v10; 
  int mSortedLeft; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v12; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v13; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v14; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v15; 
  __int64 v16; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v17; 
  __int64 mCount; 
  __int64 v19; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v20; 
  gsl::span<StreamSortKeyPacked,-1> result; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v22; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v23; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v24; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v25; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v26; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v27; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v28; 
  FastCriticalSectionScopeWrite v29; 

  if ( this->mCount == this->mSortedLeft )
    return 0;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<327680>::PartialSort");
  p_mCS = &this->mCS;
  Sys_UnlockRead(&this->mCS);
  v29.cs = &this->mCS;
  if ( this == (StreamSortList<327680> *)-2662416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs", -2i64) )
    __debugbreak();
  Sys_LockWrite(&this->mCS);
  if ( this->mCount != this->mSortedLeft )
  {
    gsl::make_span<StreamSortKeyPacked>(&result, this->mSorted, this->mCount);
    if ( amountAndDirection <= 0 )
    {
      mSortedLeft = this->mSortedLeft;
      if ( amountAndDirection + this->mSortedRight > mSortedLeft )
        mSortedLeft = amountAndDirection + this->mSortedRight;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v27 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v12 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v13 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v27;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v13, v12, v27, (SortKeyPartialPredicate)v27);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v14 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v15 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v15, v14, (SortKeyPartialPredicate)v27);
      this->mSortedRight = mSortedLeft;
      mSortedRight = this->mSortedLeft;
    }
    else
    {
      mSortedRight = this->mSortedRight;
      if ( amountAndDirection + this->mSortedLeft < mSortedRight )
        mSortedRight = amountAndDirection + this->mSortedLeft;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v26 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v28 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v7 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v26;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v7, v28, v26, (SortKeyPartialPredicate)v26);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v9 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v10 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, this->mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v10, v9, (SortKeyPartialPredicate)v26);
      this->mSortedLeft = mSortedRight;
      mSortedLeft = this->mSortedRight;
    }
    if ( mSortedRight == mSortedLeft )
      *(_QWORD *)&this->mSortedLeft = (unsigned int)this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v16 = this->mSortedLeft;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v16;
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = 0i64;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v17 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v23, &v22, v8);
    if ( (v17->span_ != &result || v17->index_ != v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 265, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate )") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    mCount = this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v19 = this->mSortedRight;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = mCount;
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v19;
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v20 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v22, &v23, v8);
    if ( (v20->span_ != &result || v20->index_ != mCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 266, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate )") )
      __debugbreak();
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v29);
  Sys_LockRead(p_mCS);
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
StreamSortList<37888>::PartialSort
==============
*/
char StreamSortList<37888>::PartialSort(StreamSortList<37888> *this, int amountAndDirection)
{
  FastCriticalSection *p_mCS; 
  int mSortedRight; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v7; 
  SortKeyPartialPredicate v8; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v9; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v10; 
  int mSortedLeft; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v12; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v13; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v14; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v15; 
  __int64 v16; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v17; 
  __int64 mCount; 
  __int64 v19; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v20; 
  gsl::span<StreamSortKeyPacked,-1> result; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v22; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v23; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v24; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v25; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v26; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v27; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v28; 
  FastCriticalSectionScopeWrite v29; 

  if ( this->mCount == this->mSortedLeft )
    return 0;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<37888>::PartialSort");
  p_mCS = &this->mCS;
  Sys_UnlockRead(&this->mCS);
  v29.cs = &this->mCS;
  if ( this == (StreamSortList<37888> *)-307856i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs", -2i64) )
    __debugbreak();
  Sys_LockWrite(&this->mCS);
  if ( this->mCount != this->mSortedLeft )
  {
    gsl::make_span<StreamSortKeyPacked>(&result, this->mSorted, this->mCount);
    if ( amountAndDirection <= 0 )
    {
      mSortedLeft = this->mSortedLeft;
      if ( amountAndDirection + this->mSortedRight > mSortedLeft )
        mSortedLeft = amountAndDirection + this->mSortedRight;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v27 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v12 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v13 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v27;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v13, v12, v27, (SortKeyPartialPredicate)v27);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v14 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v15 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v15, v14, (SortKeyPartialPredicate)v27);
      this->mSortedRight = mSortedLeft;
      mSortedRight = this->mSortedLeft;
    }
    else
    {
      mSortedRight = this->mSortedRight;
      if ( amountAndDirection + this->mSortedLeft < mSortedRight )
        mSortedRight = amountAndDirection + this->mSortedLeft;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v26 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v28 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v7 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v26;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v7, v28, v26, (SortKeyPartialPredicate)v26);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v9 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v10 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, this->mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v10, v9, (SortKeyPartialPredicate)v26);
      this->mSortedLeft = mSortedRight;
      mSortedLeft = this->mSortedRight;
    }
    if ( mSortedRight == mSortedLeft )
      *(_QWORD *)&this->mSortedLeft = (unsigned int)this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v16 = this->mSortedLeft;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v16;
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = 0i64;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v17 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v23, &v22, v8);
    if ( (v17->span_ != &result || v17->index_ != v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 265, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate )") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    mCount = this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v19 = this->mSortedRight;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = mCount;
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v19;
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v20 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v22, &v23, v8);
    if ( (v20->span_ != &result || v20->index_ != mCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 266, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate )") )
      __debugbreak();
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v29);
  Sys_LockRead(p_mCS);
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
StreamSortList<45056>::PartialSort
==============
*/
char StreamSortList<45056>::PartialSort(StreamSortList<45056> *this, int amountAndDirection)
{
  FastCriticalSection *p_mCS; 
  int mSortedRight; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v7; 
  SortKeyPartialPredicate v8; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v9; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v10; 
  int mSortedLeft; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v12; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v13; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v14; 
  const gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v15; 
  __int64 v16; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v17; 
  __int64 mCount; 
  __int64 v19; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v20; 
  gsl::span<StreamSortKeyPacked,-1> result; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v22; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v23; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v24; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> v25; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v26; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v27; 
  gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0> *v28; 
  FastCriticalSectionScopeWrite v29; 

  if ( this->mCount == this->mSortedLeft )
    return 0;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<45056>::PartialSort");
  p_mCS = &this->mCS;
  Sys_UnlockRead(&this->mCS);
  v29.cs = &this->mCS;
  if ( this == (StreamSortList<45056> *)-366096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs", -2i64) )
    __debugbreak();
  Sys_LockWrite(&this->mCS);
  if ( this->mCount != this->mSortedLeft )
  {
    gsl::make_span<StreamSortKeyPacked>(&result, this->mSorted, this->mCount);
    if ( amountAndDirection <= 0 )
    {
      mSortedLeft = this->mSortedLeft;
      if ( amountAndDirection + this->mSortedRight > mSortedLeft )
        mSortedLeft = amountAndDirection + this->mSortedRight;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v27 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v12 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v13 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v27;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v13, v12, v27, (SortKeyPartialPredicate)v27);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v14 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v15 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v15, v14, (SortKeyPartialPredicate)v27);
      this->mSortedRight = mSortedLeft;
      mSortedRight = this->mSortedLeft;
    }
    else
    {
      mSortedRight = this->mSortedRight;
      if ( amountAndDirection + this->mSortedLeft < mSortedRight )
        mSortedRight = amountAndDirection + this->mSortedLeft;
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v26 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v23, this->mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v28 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v7 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, this->mSortedLeft);
      v8 = (SortKeyPartialPredicate)v26;
      std::nth_element<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v7, v28, v26, (SortKeyPartialPredicate)v26);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v9 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v25, mSortedRight);
      v22.span_ = &result;
      v22.index_ = 0i64;
      if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
        __debugbreak();
      v10 = gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>::operator+(&v22, &v24, this->mSortedLeft);
      std::sort<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(v10, v9, (SortKeyPartialPredicate)v26);
      this->mSortedLeft = mSortedRight;
      mSortedLeft = this->mSortedRight;
    }
    if ( mSortedRight == mSortedLeft )
      *(_QWORD *)&this->mSortedLeft = (unsigned int)this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v16 = this->mSortedLeft;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v16;
    if ( (v16 < 0 || v16 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = 0i64;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v17 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v23, &v22, v8);
    if ( (v17->span_ != &result || v17->index_ != v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 265, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin(), sp.begin() + mSortedLeft, predicate )") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    mCount = this->mCount;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v19 = this->mSortedRight;
    if ( result.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 221, ASSERT_TYPE_SANITY, "( span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length() )", (const char *)&queryFormat, "span_ && (index_ + n) >= 0 && (index_ + n) <= span_->length()") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v23.span_ = &result;
    v23.index_ = mCount;
    if ( (mCount < 0 || mCount > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v22.span_ = &result;
    v22.index_ = v19;
    if ( (v19 < 0 || v19 > result.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v20 = std::is_sorted_until<gsl::details::span_iterator<gsl::span<StreamSortKeyPacked,-1>,0>,SortKeyPartialPredicate>(&v25, &v22, &v23, v8);
    if ( (v20->span_ != &result || v20->index_ != mCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 266, ASSERT_TYPE_ASSERT, "(std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate ))", (const char *)&queryFormat, "std::is_sorted( sp.begin() + mSortedRight, sp.begin() + mCount, predicate )") )
      __debugbreak();
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v29);
  Sys_LockRead(p_mCS);
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
StreamSortList<327680>::InList
==============
*/
__int64 StreamSortList<327680>::InList(StreamSortList<327680> *this, int index)
{
  FastCriticalSectionScopeRead v5; 

  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v5, &this->mCS);
  LOBYTE(index) = Com_BitCheckAssert(this->mActive, index, 40960);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v5);
  return (unsigned __int8)index;
}

/*
==============
StreamSortList<37888>::InList
==============
*/
__int64 StreamSortList<37888>::InList(StreamSortList<37888> *this, int index)
{
  FastCriticalSectionScopeRead v5; 

  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v5, &this->mCS);
  LOBYTE(index) = Com_BitCheckAssert(this->mActive, index, 4736);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v5);
  return (unsigned __int8)index;
}

/*
==============
StreamSortList<45056>::InList
==============
*/
__int64 StreamSortList<45056>::InList(StreamSortList<45056> *this, int index)
{
  FastCriticalSectionScopeRead v5; 

  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v5, &this->mCS);
  LOBYTE(index) = Com_BitCheckAssert(this->mActive, index, 5632);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v5);
  return (unsigned __int8)index;
}

