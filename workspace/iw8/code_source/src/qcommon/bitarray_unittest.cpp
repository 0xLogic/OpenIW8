/*
==============
BitArrayUnitTest
==============
*/

void BitArrayUnitTest(void)
{
  ?BitArrayUnitTest@@YAXXZ();
}

/*
==============
BitArrayUnitTest
==============
*/
void BitArrayUnitTest(void)
{
  __int64 v0; 

  BitArrayUnitTest<bitarray<256>,bitarray<256>>();
  BitArrayUnitTest<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>,bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>>();
  BitArrayUnitTest<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>,bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>();
  BitArrayUnitTest<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>,BitArrayStructAligner<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>,4,4>>();
  if ( ((((unsigned __int64)&v0 & 0xC0) + 60) & 0x3F) != 60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray_unittest.cpp", 459, ASSERT_TYPE_ASSERT, "((reinterpret_cast<uintptr_t>( &misaligned.bitarray ) & ( MEM_CACHE_LINE_SIZE - 1 ) ) == MEM_CACHE_LINE_SIZE - sizeof( uint ))", (const char *)&queryFormat, "(reinterpret_cast<uintptr_t>( &misaligned.bitarray ) & ( MEM_CACHE_LINE_SIZE - 1 ) ) == MEM_CACHE_LINE_SIZE - sizeof( uint )") )
    __debugbreak();
  BitArrayUnitTest<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>,BitArrayStructAligner<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>,60,64>>();
  BitArrayUnitTest<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>,BitArrayStructAligner<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>,16,16>>();
}

