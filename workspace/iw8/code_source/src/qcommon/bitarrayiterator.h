/*
==============
BitArrayIterator::Advance
==============
*/

bool __fastcall BitArrayIterator::Advance(BitArrayIterator *iter)
{
  return ?Advance@BitArrayIterator@@SA_NPEAU1@@Z(iter);
}

/*
==============
BitArrayIterator::Advance
==============
*/
bool BitArrayIterator::Advance(BitArrayIterator *iter)
{
  unsigned int bits; 
  unsigned int wordCount; 
  __int64 v4; 
  unsigned int v5; 
  bool result; 

  bits = iter->bits;
  if ( bits )
  {
LABEL_5:
    v5 = __lzcnt(bits);
    iter->index = v5 + 32 * iter->wordIndex;
    if ( v5 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v5, 32) )
      __debugbreak();
    if ( ((0x80000000 >> v5) & iter->bits) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    result = 1;
    iter->bits &= ~(0x80000000 >> v5);
  }
  else
  {
    wordCount = iter->wordCount;
    LODWORD(v4) = iter->wordIndex;
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      iter->wordIndex = v4;
      if ( (unsigned int)v4 >= wordCount )
        return 0;
      bits = iter->bitArray[v4];
      iter->bits = bits;
      if ( bits )
        goto LABEL_5;
    }
  }
  return result;
}

