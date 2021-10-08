/*
==============
Com_BitStreamRead
==============
*/

int __fastcall Com_BitStreamRead(Com_BitStream *p_bitStream, int bitCount)
{
  return ?Com_BitStreamRead@@YAHPEAUCom_BitStream@@H@Z(p_bitStream, bitCount);
}

/*
==============
Com_BitStreamRead
==============
*/
__int64 Com_BitStreamRead(Com_BitStream *p_bitStream, int bitCount)
{
  int v2; 
  int v4; 
  int bitIndex; 
  int v6; 
  int byteIndex; 
  unsigned int i; 
  int v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  char v13; 
  __int64 result; 

  v2 = bitCount;
  if ( bitCount > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.cpp", 6, ASSERT_TYPE_ASSERT, "(bitCount <= 32)", (const char *)&queryFormat, "bitCount <= 32") )
    __debugbreak();
  v4 = v2 + p_bitStream->bitIndex;
  if ( v4 > p_bitStream->bitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.cpp", 9, ASSERT_TYPE_ASSERT, "(srcBitEnd <= p_bitStream->bitCount)", (const char *)&queryFormat, "srcBitEnd <= p_bitStream->bitCount") )
    __debugbreak();
  bitIndex = p_bitStream->bitIndex;
  v6 = 0;
  byteIndex = p_bitStream->byteIndex;
  for ( i = 0; bitIndex < v4; i |= (((1 << v10) - 1) & v12) << v13 )
  {
    v9 = bitIndex & 7;
    v10 = v2;
    if ( 8 - v9 < v2 )
      v10 = 8 - v9;
    v11 = byteIndex;
    bitIndex += v10;
    v2 -= v10;
    byteIndex = bitIndex >> 3;
    v12 = p_bitStream->bitStream[v11] >> v9;
    v13 = v6;
    v6 += v10;
  }
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.cpp", 39, ASSERT_TYPE_ASSERT, "(srcBitRemain == 0)", (const char *)&queryFormat, "srcBitRemain == 0") )
    __debugbreak();
  result = i;
  p_bitStream->byteIndex = byteIndex;
  p_bitStream->bitIndex = bitIndex;
  return result;
}

