/*
==============
DLog_Histogram_AddValue
==============
*/

void __fastcall DLog_Histogram_AddValue(const unsigned int value, unsigned int *histogram, const DlogHistogramDesc_t *desc)
{
  ?DLog_Histogram_AddValue@@YAXIPEAIPEBUDlogHistogramDesc_t@@@Z(value, histogram, desc);
}

/*
==============
DLog_Histogram_ValidateDescriptor
==============
*/

void __fastcall DLog_Histogram_ValidateDescriptor(const DlogHistogramDesc_t *desc)
{
  ?DLog_Histogram_ValidateDescriptor@@YAXPEBUDlogHistogramDesc_t@@@Z(desc);
}

/*
==============
DLog_Histogram_AddValue
==============
*/
void DLog_Histogram_AddValue(const unsigned int value, unsigned int *histogram, const DlogHistogramDesc_t *desc)
{
  unsigned int *v4; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  const DlogHistogramBinTypeDesc_t *binTypes; 
  const DlogHistogramBinTypeDesc_t *v11; 
  unsigned int binTypeCount; 
  unsigned int v13; 
  int v14; 
  const DlogHistogramBinTypeDesc_t *v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int binLength; 
  unsigned int binCount; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v4 = histogram;
  v5 = value;
  if ( !histogram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 30, ASSERT_TYPE_ASSERT, "(histogram != 0)", (const char *)&queryFormat, "histogram != NULL") )
    __debugbreak();
  if ( !desc )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 31, ASSERT_TYPE_ASSERT, "(desc != 0)", (const char *)&queryFormat, "desc != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 10, ASSERT_TYPE_ASSERT, "(desc != 0)", (const char *)&queryFormat, "desc != NULL") )
      __debugbreak();
  }
  if ( !desc->binTypeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 11, ASSERT_TYPE_ASSERT, "(desc->binTypeCount > 0)", (const char *)&queryFormat, "desc->binTypeCount > 0") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( desc->binTypeCount )
  {
    do
    {
      v9 = v8;
      if ( !desc->binTypes[v9].binCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 16, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binCount > 0)", (const char *)&queryFormat, "desc->binTypes[i].binCount > 0") )
        __debugbreak();
      binTypes = desc->binTypes;
      v7 += binTypes[v9].binCount;
      if ( !binTypes[v9].binLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 18, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binLength > 0)", (const char *)&queryFormat, "desc->binTypes[i].binLength > 0") )
        __debugbreak();
      v11 = desc->binTypes;
      if ( v11[v9].binLength == 0x7FFFFFFF && (v8 != desc->binTypeCount - 1 || v11[v8].binCount != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 19, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binLength != 2147483647 || ( i == desc->binTypeCount - 1 && desc->binTypes[i].binCount == 1 ))", (const char *)&queryFormat, "desc->binTypes[i].binLength != INT_MAX || ( i == desc->binTypeCount - 1 && desc->binTypes[i].binCount == 1 )") )
        __debugbreak();
      ++v8;
    }
    while ( v8 < desc->binTypeCount );
    v5 = value;
    v6 = 0;
    v4 = histogram;
  }
  if ( desc->totalBinCount != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 22, ASSERT_TYPE_ASSERT, "(desc->totalBinCount == totalBinCount)", (const char *)&queryFormat, "desc->totalBinCount == totalBinCount") )
    __debugbreak();
  binTypeCount = desc->binTypeCount;
  v13 = 0;
  v14 = 0;
  if ( binTypeCount )
  {
    v15 = desc->binTypes;
    while ( 1 )
    {
      v16 = v6;
      v17 = v13;
      binLength = v15[v14].binLength;
      binCount = v15[v14].binCount;
      if ( binLength >= 0x7FFFFFFF )
        v6 = 0x7FFFFFFF;
      else
        v6 += binCount * binLength;
      v13 += binCount;
      if ( v5 < v6 )
        break;
      if ( ++v14 >= binTypeCount )
        return;
    }
    v20 = v17 + (v5 - v16) / binLength;
    if ( v17 > (unsigned int)v20 || (unsigned int)v20 > v13 - 1 )
    {
      LODWORD(v21) = v17 + (v5 - v16) / binLength;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 60, ASSERT_TYPE_ASSERT, "( previousBoundaryIndex ) <= ( index ) && ( index ) <= ( boundaryIndex - 1 )", "index not in [previousBoundaryIndex, boundaryIndex - 1]\n\t%i not in [%i, %i]", v21, v17, v13 - 1) )
        __debugbreak();
    }
    if ( (unsigned int)v20 >= desc->totalBinCount )
    {
      LODWORD(v22) = desc->totalBinCount;
      LODWORD(v21) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( desc->totalBinCount )", "index doesn't index desc->totalBinCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( (unsigned int)v20 < desc->totalBinCount )
      ++v4[v20];
  }
}

/*
==============
DLog_Histogram_ValidateDescriptor
==============
*/
void DLog_Histogram_ValidateDescriptor(const DlogHistogramDesc_t *desc)
{
  int v2; 
  unsigned int i; 
  unsigned __int64 v4; 
  const DlogHistogramBinTypeDesc_t *binTypes; 
  const DlogHistogramBinTypeDesc_t *v6; 

  if ( !desc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 10, ASSERT_TYPE_ASSERT, "(desc != 0)", (const char *)&queryFormat, "desc != NULL") )
    __debugbreak();
  if ( !desc->binTypeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 11, ASSERT_TYPE_ASSERT, "(desc->binTypeCount > 0)", (const char *)&queryFormat, "desc->binTypeCount > 0") )
    __debugbreak();
  v2 = 0;
  for ( i = 0; i < desc->binTypeCount; ++i )
  {
    v4 = i;
    if ( !desc->binTypes[v4].binCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 16, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binCount > 0)", (const char *)&queryFormat, "desc->binTypes[i].binCount > 0") )
      __debugbreak();
    binTypes = desc->binTypes;
    v2 += binTypes[i].binCount;
    if ( !binTypes[v4].binLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 18, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binLength > 0)", (const char *)&queryFormat, "desc->binTypes[i].binLength > 0") )
      __debugbreak();
    v6 = desc->binTypes;
    if ( v6[v4].binLength == 0x7FFFFFFF && (i != desc->binTypeCount - 1 || v6[i].binCount != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 19, ASSERT_TYPE_ASSERT, "(desc->binTypes[i].binLength != 2147483647 || ( i == desc->binTypeCount - 1 && desc->binTypes[i].binCount == 1 ))", (const char *)&queryFormat, "desc->binTypes[i].binLength != INT_MAX || ( i == desc->binTypeCount - 1 && desc->binTypes[i].binCount == 1 )") )
      __debugbreak();
  }
  if ( desc->totalBinCount != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_histogram.cpp", 22, ASSERT_TYPE_ASSERT, "(desc->totalBinCount == totalBinCount)", (const char *)&queryFormat, "desc->totalBinCount == totalBinCount") )
    __debugbreak();
}

