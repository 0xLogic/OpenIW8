/*
==============
Com_BitClearAssert
==============
*/

void __fastcall Com_BitClearAssert(unsigned int *array, int bitNum, int size)
{
  ?Com_BitClearAssert@@YAXQEAIHH@Z(array, bitNum, size);
}

/*
==============
Com_BitCheckAssert
==============
*/

bool __fastcall Com_BitCheckAssert(const unsigned int *array, int bitNum, int size)
{
  return ?Com_BitCheckAssert@@YA_NQEBIHH@Z(array, bitNum, size);
}

/*
==============
Com_BitSetAssert
==============
*/

void __fastcall Com_BitSetAssert(unsigned int *array, int bitNum, int size)
{
  ?Com_BitSetAssert@@YAXQEAIHH@Z(array, bitNum, size);
}

/*
==============
Com_BitCheckAssert
==============
*/
unsigned __int8 Com_BitCheckAssert(const unsigned int *array, int bitNum, int size)
{
  __int64 v3; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v9; 

  v3 = bitNum;
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( size )
  {
    v6 = 8 * size;
    if ( (unsigned int)v3 >= v6 )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v9, v6) )
        __debugbreak();
    }
  }
  v7 = array[v3 >> 5];
  return _bittest((const int *)&v7, v3 & 0x1F);
}

/*
==============
Com_BitClearAssert
==============
*/
void Com_BitClearAssert(unsigned int *array, int bitNum, int size)
{
  __int64 v3; 
  unsigned int v6; 
  __int64 v7; 

  v3 = bitNum;
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( size )
  {
    v6 = 8 * size;
    if ( (unsigned int)v3 >= v6 )
    {
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 30, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v7, v6) )
        __debugbreak();
    }
  }
  array[v3 >> 5] &= ~(1 << (v3 & 0x1F));
}

/*
==============
Com_BitSetAssert
==============
*/
void Com_BitSetAssert(unsigned int *array, int bitNum, int size)
{
  __int64 v3; 
  unsigned int v6; 
  __int64 v7; 

  v3 = bitNum;
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( size )
  {
    v6 = 8 * size;
    if ( (unsigned int)v3 >= v6 )
    {
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v7, v6) )
        __debugbreak();
    }
  }
  array[v3 >> 5] |= 1 << (v3 & 0x1F);
}

