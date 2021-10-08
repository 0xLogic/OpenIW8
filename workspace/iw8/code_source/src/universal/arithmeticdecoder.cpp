/*
==============
ArithmeticDecoder_Read2Bits
==============
*/

unsigned int __fastcall ArithmeticDecoder_Read2Bits(InputBitStream *bitStream, ArithmeticEncoderStats2Bit *stats)
{
  return ?ArithmeticDecoder_Read2Bits@@YAIPEAUInputBitStream@@PEAUArithmeticEncoderStats2Bit@@@Z(bitStream, stats);
}

/*
==============
BitStream_ReadBit
==============
*/

unsigned int __fastcall BitStream_ReadBit(InputBitStream *bitStream)
{
  return ?BitStream_ReadBit@@YAIPEAUInputBitStream@@@Z(bitStream);
}

/*
==============
ArithmeticDecoder_Read3Bits
==============
*/

unsigned int __fastcall ArithmeticDecoder_Read3Bits(InputBitStream *bitStream, ArithmeticEncoderStats3Bit *stats)
{
  return ?ArithmeticDecoder_Read3Bits@@YAIPEAUInputBitStream@@PEAUArithmeticEncoderStats3Bit@@@Z(bitStream, stats);
}

/*
==============
ArithmeticDecoder_InitInputBitStream
==============
*/

void __fastcall ArithmeticDecoder_InitInputBitStream(InputBitStream *bitStream, char *buffer, int bufferLen, void (__fastcall *callback)(char *, unsigned int, void *), void *userInfo)
{
  ?ArithmeticDecoder_InitInputBitStream@@YAXPEAUInputBitStream@@PEADHP6AX1IPEAX@Z2@Z(bitStream, buffer, bufferLen, callback, userInfo);
}

/*
==============
AE_Reset2Bit
==============
*/

void __fastcall AE_Reset2Bit(ArithmeticEncoderStats2Bit *stats)
{
  ?AE_Reset2Bit@@YAXPEAUArithmeticEncoderStats2Bit@@@Z(stats);
}

/*
==============
ArithmeticDecoder_ReadByte
==============
*/

unsigned int __fastcall ArithmeticDecoder_ReadByte(InputBitStream *bitStream, ArithmeticEncoderStats8Bit *stats)
{
  return ?ArithmeticDecoder_ReadByte@@YAIPEAUInputBitStream@@PEAUArithmeticEncoderStats8Bit@@@Z(bitStream, stats);
}

/*
==============
ArithmeticDecoder_ReadBit
==============
*/

unsigned int __fastcall ArithmeticDecoder_ReadBit(InputBitStream *bitStream, ArithmeticEncoderStats1Bit *stats)
{
  return ?ArithmeticDecoder_ReadBit@@YAIPEAUInputBitStream@@PEAUArithmeticEncoderStats1Bit@@@Z(bitStream, stats);
}

/*
==============
AE_Reset1Bit
==============
*/

void __fastcall AE_Reset1Bit(ArithmeticEncoderStats1Bit *stats)
{
  ?AE_Reset1Bit@@YAXPEAUArithmeticEncoderStats1Bit@@@Z(stats);
}

/*
==============
AE_Reset3Bit
==============
*/

void __fastcall AE_Reset3Bit(ArithmeticEncoderStats3Bit *stats)
{
  ?AE_Reset3Bit@@YAXPEAUArithmeticEncoderStats3Bit@@@Z(stats);
}

/*
==============
BitStream_ReadBits
==============
*/

unsigned int __fastcall BitStream_ReadBits(InputBitStream *bitStream, unsigned int numBits)
{
  return ?BitStream_ReadBits@@YAIPEAUInputBitStream@@I@Z(bitStream, numBits);
}

/*
==============
AE_Reset8Bit
==============
*/

void __fastcall AE_Reset8Bit(ArithmeticEncoderStats8Bit *stats)
{
  ?AE_Reset8Bit@@YAXPEAUArithmeticEncoderStats8Bit@@@Z(stats);
}

/*
==============
AE_Reset1Bit
==============
*/
void AE_Reset1Bit(ArithmeticEncoderStats1Bit *stats)
{
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 15, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  *(_QWORD *)&stats->high = 0xFFFFi64;
  stats->low = 0;
  stats->freq[0] = 1;
  stats->freq[1] = 1;
  stats->cfreq[0] = 2;
  *(_QWORD *)&stats->cfreq[1] = 1i64;
  stats->readInit = 0;
}

/*
==============
AE_Reset2Bit
==============
*/
void AE_Reset2Bit(ArithmeticEncoderStats2Bit *stats)
{
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 33, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  *(_QWORD *)&stats->high = 0xFFFFi64;
  stats->low = 0;
  stats->freq[0] = 1;
  stats->cfreq[0] = 4;
  stats->freq[1] = 1;
  stats->cfreq[1] = 3;
  stats->freq[2] = 1;
  stats->cfreq[2] = 2;
  stats->freq[3] = 1;
  *(_QWORD *)&stats->cfreq[3] = 1i64;
  stats->readInit = 0;
}

/*
==============
AE_Reset3Bit
==============
*/
void AE_Reset3Bit(ArithmeticEncoderStats3Bit *stats)
{
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 51, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  *(_QWORD *)&stats->high = 0xFFFFi64;
  stats->low = 0;
  stats->freq[0] = 1;
  stats->cfreq[0] = 8;
  stats->freq[1] = 1;
  stats->cfreq[1] = 7;
  stats->freq[2] = 1;
  stats->cfreq[2] = 6;
  stats->freq[3] = 1;
  stats->cfreq[3] = 5;
  stats->freq[4] = 1;
  stats->cfreq[4] = 4;
  stats->freq[5] = 1;
  stats->cfreq[5] = 3;
  stats->freq[6] = 1;
  stats->cfreq[6] = 2;
  stats->freq[7] = 1;
  *(_QWORD *)&stats->cfreq[7] = 1i64;
  stats->readInit = 0;
}

/*
==============
AE_Reset8Bit
==============
*/
void AE_Reset8Bit(ArithmeticEncoderStats8Bit *stats)
{
  int numSymbols; 
  int v3; 
  int *cfreq; 
  int v5; 

  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 69, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  numSymbols = stats->numSymbols;
  stats->low = 0;
  v3 = 0;
  *(_QWORD *)&stats->high = 0xFFFFi64;
  if ( numSymbols > 0 )
  {
    cfreq = stats->cfreq;
    do
    {
      *(cfreq - 256) = 1;
      ++cfreq;
      v5 = stats->numSymbols - v3++;
      *(cfreq - 1) = v5;
      numSymbols = stats->numSymbols;
    }
    while ( v3 < numSymbols );
  }
  stats->cfreq[numSymbols] = 0;
  stats->readInit = 0;
}

/*
==============
ArithmeticDecoder_InitInputBitStream
==============
*/
void ArithmeticDecoder_InitInputBitStream(InputBitStream *bitStream, char *buffer, int bufferLen, void (*callback)(char *, unsigned int, void *), void *userInfo)
{
  int v9; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 329, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 330, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 331, ASSERT_TYPE_ASSERT, "(bufferLen)", (const char *)&queryFormat, "bufferLen") )
    __debugbreak();
  bitStream->userData = userInfo;
  v9 = 0;
  bitStream->ReadCallback = callback;
  if ( callback )
    v9 = bufferLen;
  bitStream->buffer = buffer;
  bitStream->bufferLen = bufferLen;
  bitStream->bufferTopByte = v9;
  bitStream->bufferTopBit = 1;
}

/*
==============
ArithmeticDecoder_Read2Bits
==============
*/
__int64 ArithmeticDecoder_Read2Bits(InputBitStream *bitStream, ArithmeticEncoderStats2Bit *stats)
{
  __int64 v4; 
  int underflowBits; 
  __int64 v6; 
  int bufferTopByte; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  bool v11; 
  int *cfreq; 
  int v13; 
  int v14; 
  int *v15; 
  int low; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 508, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 509, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  v4 = 0i64;
  if ( stats->readInit )
  {
    underflowBits = stats->underflowBits;
  }
  else
  {
    underflowBits = 0;
    v6 = 16i64;
    do
    {
      stats->underflowBits = 2 * underflowBits;
      bufferTopByte = bitStream->bufferTopByte;
      bufferLen = (unsigned int)bitStream->bufferLen;
      if ( bufferTopByte == (_DWORD)bufferLen )
      {
        ReadCallback = bitStream->ReadCallback;
        if ( ReadCallback )
          ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
        bitStream->bufferTopByte = 0;
        bufferTopByte = 0;
        bitStream->bufferTopBit = 1;
        bufferTopBit = 1;
      }
      else
      {
        bufferTopBit = bitStream->bufferTopBit;
      }
      v11 = (bitStream->buffer[bufferTopByte] & bufferTopBit) == 0;
      bitStream->bufferTopBit = 2 * bufferTopBit;
      if ( 2 * bufferTopBit == 256 )
      {
        bitStream->bufferTopBit = 1;
        bitStream->bufferTopByte = bufferTopByte + 1;
      }
      underflowBits = !v11 + stats->underflowBits;
      stats->underflowBits = underflowBits;
      --v6;
    }
    while ( v6 );
    stats->readInit = 1;
  }
  cfreq = stats->cfreq;
  v13 = 0;
  v14 = (stats->cfreq[0] * (underflowBits - stats->low + 1) - 1) / (stats->high - stats->low + 1);
  if ( stats->cfreq[1] > v14 )
  {
    v15 = &stats->cfreq[1];
    do
    {
      ++v13;
      ++v15;
    }
    while ( *v15 > v14 );
    if ( (unsigned int)v13 > 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 254, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 4)", (const char *)&queryFormat, "sym >= 0 && sym < 4") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 144, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 4)", (const char *)&queryFormat, "sym >= 0 && sym < 4") )
        __debugbreak();
    }
  }
  low = stats->low;
  v17 = stats->high - stats->low + 1;
  stats->high = v17 * stats->cfreq[v13] / *cfreq + stats->low - 1;
  stats->low = low + v17 * stats->cfreq[v13 + 1] / *cfreq;
  UpdateAEBits(bitStream, &stats->underflowBits, &stats->low, &stats->high);
  if ( (unsigned int)v13 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 120, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 4)", (const char *)&queryFormat, "sym >= 0 && sym < 4") )
    __debugbreak();
  if ( *cfreq == 0x3FFF )
  {
    stats->cfreq[4] = 0;
    v18 = (stats->freq[3] + 1) >> 1;
    stats->freq[3] = v18;
    stats->cfreq[3] = v18;
    v19 = (stats->freq[2] + 1) >> 1;
    stats->freq[2] = v19;
    v20 = v19 + v18;
    stats->cfreq[2] = v20;
    v21 = (stats->freq[1] + 1) >> 1;
    stats->freq[1] = v21;
    v22 = v21 + v20;
    stats->cfreq[1] = v22;
    v23 = (stats->freq[0] + 1) >> 1;
    stats->freq[0] = v23;
    *cfreq = v22 + v23;
  }
  ++stats->freq[v13];
  if ( v13 >= 0 )
  {
    do
    {
      ++*cfreq++;
      ++v4;
    }
    while ( v4 <= v13 );
  }
  return (unsigned int)v13;
}

/*
==============
ArithmeticDecoder_Read3Bits
==============
*/
__int64 ArithmeticDecoder_Read3Bits(InputBitStream *bitStream, ArithmeticEncoderStats3Bit *stats)
{
  __int64 v4; 
  int underflowBits; 
  __int64 v6; 
  int bufferTopByte; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  bool v11; 
  int *cfreq; 
  int v13; 
  int v14; 
  int *v15; 
  int low; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 529, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 530, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  v4 = 0i64;
  if ( stats->readInit )
  {
    underflowBits = stats->underflowBits;
  }
  else
  {
    underflowBits = 0;
    v6 = 16i64;
    do
    {
      stats->underflowBits = 2 * underflowBits;
      bufferTopByte = bitStream->bufferTopByte;
      bufferLen = (unsigned int)bitStream->bufferLen;
      if ( bufferTopByte == (_DWORD)bufferLen )
      {
        ReadCallback = bitStream->ReadCallback;
        if ( ReadCallback )
          ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
        bitStream->bufferTopByte = 0;
        bufferTopByte = 0;
        bitStream->bufferTopBit = 1;
        bufferTopBit = 1;
      }
      else
      {
        bufferTopBit = bitStream->bufferTopBit;
      }
      v11 = (bitStream->buffer[bufferTopByte] & bufferTopBit) == 0;
      bitStream->bufferTopBit = 2 * bufferTopBit;
      if ( 2 * bufferTopBit == 256 )
      {
        bitStream->bufferTopBit = 1;
        bitStream->bufferTopByte = bufferTopByte + 1;
      }
      underflowBits = !v11 + stats->underflowBits;
      stats->underflowBits = underflowBits;
      --v6;
    }
    while ( v6 );
    stats->readInit = 1;
  }
  cfreq = stats->cfreq;
  v13 = 0;
  v14 = (stats->cfreq[0] * (underflowBits - stats->low + 1) - 1) / (stats->high - stats->low + 1);
  v15 = &stats->cfreq[1];
  if ( stats->cfreq[1] > v14 )
  {
    do
    {
      ++v13;
      ++v15;
    }
    while ( *v15 > v14 );
    if ( (unsigned int)v13 > 7 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 272, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 8)", (const char *)&queryFormat, "sym >= 0 && sym < 8") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 182, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 8)", (const char *)&queryFormat, "sym >= 0 && sym < 8") )
        __debugbreak();
    }
  }
  low = stats->low;
  v17 = stats->high - stats->low + 1;
  stats->high = v17 * stats->cfreq[v13] / *cfreq + stats->low - 1;
  stats->low = low + v17 * stats->cfreq[v13 + 1] / *cfreq;
  UpdateAEBits(bitStream, &stats->underflowBits, &stats->low, &stats->high);
  if ( (unsigned int)v13 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 158, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < 8)", (const char *)&queryFormat, "sym >= 0 && sym < 8") )
    __debugbreak();
  if ( *cfreq == 0x3FFF )
  {
    stats->cfreq[8] = 0;
    v18 = (stats->freq[7] + 1) >> 1;
    stats->freq[7] = v18;
    stats->cfreq[7] = v18;
    v19 = (stats->freq[6] + 1) >> 1;
    stats->freq[6] = v19;
    v20 = v19 + v18;
    stats->cfreq[6] = v20;
    v21 = (stats->freq[5] + 1) >> 1;
    stats->freq[5] = v21;
    v22 = v21 + v20;
    stats->cfreq[5] = v22;
    v23 = (stats->freq[4] + 1) >> 1;
    stats->freq[4] = v23;
    v24 = v23 + v22;
    stats->cfreq[4] = v24;
    v25 = (stats->freq[3] + 1) >> 1;
    stats->freq[3] = v25;
    v26 = v25 + v24;
    stats->cfreq[3] = v26;
    v27 = (stats->freq[2] + 1) >> 1;
    stats->freq[2] = v27;
    v28 = v27 + v26;
    stats->cfreq[2] = v28;
    v29 = (stats->freq[1] + 1) >> 1;
    stats->freq[1] = v29;
    v30 = v29 + v28;
    stats->cfreq[1] = v30;
    v31 = (stats->freq[0] + 1) >> 1;
    stats->freq[0] = v31;
    *cfreq = v30 + v31;
  }
  ++stats->freq[v13];
  if ( v13 >= 0 )
  {
    do
    {
      ++*cfreq++;
      ++v4;
    }
    while ( v4 <= v13 );
  }
  return (unsigned int)v13;
}

/*
==============
ArithmeticDecoder_ReadBit
==============
*/
__int64 ArithmeticDecoder_ReadBit(InputBitStream *bitStream, ArithmeticEncoderStats1Bit *stats)
{
  int underflowBits; 
  __int64 v5; 
  int bufferTopByte; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  bool v10; 
  int low; 
  int v12; 
  __int64 v13; 
  int v14; 
  unsigned int v15; 
  __int64 result; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 487, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 488, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  if ( stats->readInit )
  {
    underflowBits = stats->underflowBits;
  }
  else
  {
    underflowBits = 0;
    v5 = 16i64;
    do
    {
      stats->underflowBits = 2 * underflowBits;
      bufferTopByte = bitStream->bufferTopByte;
      bufferLen = (unsigned int)bitStream->bufferLen;
      if ( bufferTopByte == (_DWORD)bufferLen )
      {
        ReadCallback = bitStream->ReadCallback;
        if ( ReadCallback )
          ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
        bitStream->bufferTopByte = 0;
        bufferTopByte = 0;
        bitStream->bufferTopBit = 1;
        bufferTopBit = 1;
      }
      else
      {
        bufferTopBit = bitStream->bufferTopBit;
      }
      v10 = (bitStream->buffer[bufferTopByte] & bufferTopBit) == 0;
      bitStream->bufferTopBit = 2 * bufferTopBit;
      if ( 2 * bufferTopBit == 256 )
      {
        bitStream->bufferTopBit = 1;
        bitStream->bufferTopByte = bufferTopByte + 1;
      }
      underflowBits = !v10 + stats->underflowBits;
      stats->underflowBits = underflowBits;
      --v5;
    }
    while ( v5 );
    stats->readInit = 1;
  }
  low = stats->low;
  v12 = stats->high - stats->low + 1;
  v13 = stats->cfreq[1] > (stats->cfreq[0] * (underflowBits - stats->low + 1) - 1) / v12;
  stats->high = v12 * stats->cfreq[v13] / stats->cfreq[0] + stats->low - 1;
  stats->low = low + v12 * stats->cfreq[v13 + 1] / stats->cfreq[0];
  UpdateAEBits(bitStream, &stats->underflowBits, &stats->low, &stats->high);
  if ( stats->cfreq[0] >= 0x3FFF )
  {
    v14 = (stats->freq[0] + 1) >> 1;
    v15 = (stats->freq[1] + 1) >> 1;
    stats->freq[0] = v14;
    stats->cfreq[0] = v15 + v14;
    stats->freq[1] = v15;
    *(_QWORD *)&stats->cfreq[1] = v15;
  }
  ++stats->freq[v13];
  result = (unsigned int)v13;
  ++stats->cfreq[0];
  stats->cfreq[1] += v13;
  return result;
}

/*
==============
ArithmeticDecoder_ReadByte
==============
*/
__int64 ArithmeticDecoder_ReadByte(InputBitStream *bitStream, ArithmeticEncoderStats8Bit *stats)
{
  __int64 v4; 
  int underflowBits; 
  __int64 v6; 
  int bufferTopByte; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  bool v11; 
  int *cfreq; 
  int numSymbols; 
  int v14; 
  __int64 v15; 
  int v16; 
  int *v17; 
  int v18; 
  int v19; 
  int low; 
  int v21; 
  int v22; 
  int v23; 
  int *v24; 
  int v25; 
  int v26; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 550, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( !stats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 551, ASSERT_TYPE_ASSERT, "(stats)", (const char *)&queryFormat, "stats") )
    __debugbreak();
  v4 = 0i64;
  if ( stats->readInit )
  {
    underflowBits = stats->underflowBits;
  }
  else
  {
    underflowBits = 0;
    v6 = 16i64;
    do
    {
      stats->underflowBits = 2 * underflowBits;
      bufferTopByte = bitStream->bufferTopByte;
      bufferLen = (unsigned int)bitStream->bufferLen;
      if ( bufferTopByte == (_DWORD)bufferLen )
      {
        ReadCallback = bitStream->ReadCallback;
        if ( ReadCallback )
          ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
        bitStream->bufferTopByte = 0;
        bufferTopByte = 0;
        bitStream->bufferTopBit = 1;
        bufferTopBit = 1;
      }
      else
      {
        bufferTopBit = bitStream->bufferTopBit;
      }
      v11 = (bitStream->buffer[bufferTopByte] & bufferTopBit) == 0;
      bitStream->bufferTopBit = 2 * bufferTopBit;
      if ( 2 * bufferTopBit == 256 )
      {
        bitStream->bufferTopBit = 1;
        bitStream->bufferTopByte = bufferTopByte + 1;
      }
      underflowBits = !v11 + stats->underflowBits;
      stats->underflowBits = underflowBits;
      --v6;
    }
    while ( v6 );
    stats->readInit = 1;
  }
  cfreq = stats->cfreq;
  numSymbols = stats->numSymbols;
  v14 = 0;
  v15 = stats->cfreq[0] * (underflowBits - stats->low + 1) - 1;
  v16 = (stats->cfreq[0] * (underflowBits - stats->low + 1) - 1) / (stats->high - stats->low + 1);
  if ( numSymbols < 8 )
  {
    v17 = &stats->cfreq[1];
    if ( stats->cfreq[1] > v16 )
    {
      do
      {
        ++v14;
        ++v17;
      }
      while ( *v17 > v16 );
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v18 = stats->numSymbols;
  while ( 1 )
  {
    v19 = (HIDWORD(v15) + v14) >> 1;
    if ( v16 >= stats->cfreq[v19] )
      break;
    v14 = v19 + 1;
LABEL_28:
    if ( v14 > v18 )
      goto LABEL_31;
  }
  if ( v16 > stats->cfreq[v19] )
  {
    v18 = v19 - 1;
    goto LABEL_28;
  }
  v14 = (v18 + v14) >> 1;
LABEL_31:
  --v14;
LABEL_32:
  if ( v14 < 0 )
  {
LABEL_34:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 319, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < stats->numSymbols)", (const char *)&queryFormat, "sym >= 0 && sym < stats->numSymbols") )
      __debugbreak();
  }
  else
  {
LABEL_33:
    if ( v14 >= numSymbols )
      goto LABEL_34;
  }
  if ( (v14 < 0 || v14 >= stats->numSymbols) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 220, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < stats->numSymbols)", (const char *)&queryFormat, "sym >= 0 && sym < stats->numSymbols") )
    __debugbreak();
  low = stats->low;
  v21 = stats->high - stats->low + 1;
  stats->high = v21 * stats->cfreq[v14] / *cfreq + stats->low - 1;
  stats->low = low + v21 * stats->cfreq[v14 + 1] / *cfreq;
  UpdateAEBits(bitStream, &stats->underflowBits, &stats->low, &stats->high);
  if ( (v14 < 0 || v14 >= stats->numSymbols) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 196, ASSERT_TYPE_ASSERT, "(sym >= 0 && sym < stats->numSymbols)", (const char *)&queryFormat, "sym >= 0 && sym < stats->numSymbols") )
    __debugbreak();
  if ( *cfreq == 0x3FFF )
  {
    v22 = 0;
    stats->cfreq[stats->numSymbols] = 0;
    v23 = stats->numSymbols - 1;
    if ( v23 >= 0 )
    {
      v24 = &stats->freq[v23];
      do
      {
        v25 = *v24--;
        v26 = (v25 + 1) >> 1;
        v22 += v26;
        v24[1] = v26;
        --v23;
        v24[257] = v22;
      }
      while ( v23 >= 0 );
    }
  }
  ++stats->freq[v14];
  if ( v14 >= 0 )
  {
    do
    {
      ++*cfreq++;
      ++v4;
    }
    while ( v4 <= v14 );
  }
  return (unsigned int)v14;
}

/*
==============
BitStream_ReadBit
==============
*/
unsigned int BitStream_ReadBit(InputBitStream *bitStream)
{
  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 369, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  return GetBit(bitStream);
}

/*
==============
BitStream_ReadBits
==============
*/
__int64 BitStream_ReadBits(InputBitStream *bitStream, unsigned int numBits)
{
  const char *v4; 
  int v5; 
  const char *v6; 
  unsigned int v7; 
  int v8; 
  unsigned int bufferTopByte; 
  char *buffer; 
  __int64 bufferLen; 
  unsigned int v12; 
  char *v13; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  int v16; 
  int v17; 

  if ( !bitStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 376, ASSERT_TYPE_ASSERT, "(bitStream)", (const char *)&queryFormat, "bitStream") )
    __debugbreak();
  if ( numBits )
  {
    if ( numBits <= 0x20 )
      goto LABEL_10;
    v4 = "numBits <= 32";
    v5 = 378;
    v6 = "(numBits <= 32)";
  }
  else
  {
    v4 = "numBits";
    v5 = 377;
    v6 = "(numBits)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_10:
  v7 = 0;
  v8 = 1;
  if ( numBits )
  {
    bufferTopByte = bitStream->bufferTopByte;
    buffer = bitStream->buffer;
    do
    {
      bufferLen = (unsigned int)bitStream->bufferLen;
      v12 = bufferTopByte;
      v13 = buffer;
      if ( bufferTopByte == (_DWORD)bufferLen )
      {
        ReadCallback = bitStream->ReadCallback;
        if ( ReadCallback )
        {
          ((void (__fastcall *)(char *, __int64, void *, _QWORD))ReadCallback)(buffer, bufferLen, bitStream->userData, bufferTopByte);
          v13 = bitStream->buffer;
        }
        bitStream->bufferTopByte = 0;
        v12 = 0;
        bitStream->bufferTopBit = 1;
        bufferTopBit = 1;
      }
      else
      {
        bufferTopBit = bitStream->bufferTopBit;
      }
      buffer = v13;
      bufferTopByte = v12;
      v16 = bufferTopBit & v13[v12];
      bitStream->bufferTopBit = 2 * bufferTopBit;
      if ( 2 * bufferTopBit == 256 )
      {
        bufferTopByte = v12 + 1;
        bitStream->bufferTopBit = 1;
        bitStream->bufferTopByte = v12 + 1;
      }
      v17 = v7 | v8;
      if ( !v16 )
        v17 = v7;
      v8 *= 2;
      v7 = v17;
      --numBits;
    }
    while ( numBits );
  }
  return v7;
}

/*
==============
GetBit
==============
*/
__int64 GetBit(InputBitStream *bitStream)
{
  int bufferTopByte; 
  unsigned int v2; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  int v7; 

  bufferTopByte = bitStream->bufferTopByte;
  v2 = 0;
  bufferLen = (unsigned int)bitStream->bufferLen;
  if ( bufferTopByte == (_DWORD)bufferLen )
  {
    ReadCallback = bitStream->ReadCallback;
    if ( ReadCallback )
      ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
    bitStream->bufferTopByte = 0;
    bufferTopByte = 0;
    bitStream->bufferTopBit = 1;
    bufferTopBit = 1;
  }
  else
  {
    bufferTopBit = bitStream->bufferTopBit;
  }
  v7 = bitStream->buffer[bufferTopByte];
  bitStream->bufferTopBit = 2 * bufferTopBit;
  if ( 2 * bufferTopBit == 256 )
  {
    bitStream->bufferTopBit = 1;
    bitStream->bufferTopByte = bufferTopByte + 1;
  }
  LOBYTE(v2) = (v7 & bufferTopBit) != 0;
  return v2;
}

/*
==============
UpdateAEBits
==============
*/
void UpdateAEBits(InputBitStream *bitStream, int *value, int *low, int *high)
{
  int bufferTopByte; 
  __int64 bufferLen; 
  void (__fastcall *ReadCallback)(char *, unsigned int, void *); 
  int bufferTopBit; 
  bool v12; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !low && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 399, ASSERT_TYPE_ASSERT, "(low)", (const char *)&queryFormat, "low") )
    __debugbreak();
  if ( !high && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\arithmeticdecoder.cpp", 400, ASSERT_TYPE_ASSERT, "(high)", (const char *)&queryFormat, "high") )
    __debugbreak();
  while ( 1 )
  {
    if ( *high < 0x8000 )
      goto LABEL_16;
    if ( *low >= 0x8000 )
    {
      *value -= 0x8000;
      *low -= 0x8000;
      *high -= 0x8000;
      goto LABEL_16;
    }
    if ( *low < 0x4000 || *high >= 49152 )
      break;
    *value -= 0x4000;
    *low -= 0x4000;
    *high -= 0x4000;
LABEL_16:
    *low *= 2;
    *high = 2 * *high + 1;
    bufferTopByte = bitStream->bufferTopByte;
    bufferLen = (unsigned int)bitStream->bufferLen;
    if ( bufferTopByte == (_DWORD)bufferLen )
    {
      ReadCallback = bitStream->ReadCallback;
      if ( ReadCallback )
        ReadCallback(bitStream->buffer, bufferLen, bitStream->userData);
      bitStream->bufferTopByte = 0;
      bufferTopByte = 0;
      bitStream->bufferTopBit = 1;
      bufferTopBit = 1;
    }
    else
    {
      bufferTopBit = bitStream->bufferTopBit;
    }
    v12 = (bitStream->buffer[bufferTopByte] & bufferTopBit) == 0;
    bitStream->bufferTopBit = 2 * bufferTopBit;
    if ( 2 * bufferTopBit == 256 )
    {
      bitStream->bufferTopBit = 1;
      bitStream->bufferTopByte = bufferTopByte + 1;
    }
    *value = !v12 + 2 * *value;
  }
}

