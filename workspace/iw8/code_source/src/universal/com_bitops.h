/*
==============
Com_BitSetValueAssert
==============
*/

void __fastcall Com_BitSetValueAssert(unsigned int *array, int bitNum, bool value, int size)
{
  ?Com_BitSetValueAssert@@YAXQEAIH_NH@Z(array, bitNum, value, size);
}

/*
==============
BitShift
==============
*/

unsigned int __fastcall BitShift(const unsigned int count)
{
  return ?BitShift@@YAII@Z(count);
}

/*
==============
Com_BitSetValueAssert
==============
*/
void Com_BitSetValueAssert(unsigned int *array, int bitNum, bool value, int size)
{
  __int64 v4; 
  int v8; 
  unsigned int *v9; 
  unsigned int v10; 
  __int64 v11; 

  v4 = bitNum;
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 21, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 * size )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v11, 8 * size) )
      __debugbreak();
  }
  v8 = 1 << (v4 & 0x1F);
  v9 = &array[v4 >> 5];
  v10 = *v9;
  if ( value )
    *v9 = v8 | v10;
  else
    *v9 = v10 & ~v8;
}

/*
==============
BitShift
==============
*/
__int64 BitShift(const unsigned int count)
{
  char v1; 
  int v4; 

  v1 = count;
  if ( count >= 0x20 )
  {
    v4 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", count, v4) )
      __debugbreak();
  }
  return 0x80000000 >> v1;
}

