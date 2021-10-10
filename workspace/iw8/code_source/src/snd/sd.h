/*
==============
SD_GetConstSequentialBus
==============
*/

SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *__fastcall SD_GetConstSequentialBus(SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *result, const unsigned int b)
{
  return ?SD_GetConstSequentialBus@@YA?AU?$ConstSequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@I@Z(result, b);
}

/*
==============
SD_GetInterleavedBus
==============
*/

SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *__fastcall SD_GetInterleavedBus(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *result, const unsigned int b)
{
  return ?SD_GetInterleavedBus@@YA?AU?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@I@Z(result, b);
}

/*
==============
SD_GetConstInterleavedBus
==============
*/

SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256> __fastcall SD_GetConstInterleavedBus(const unsigned int b)
{
  return ?SD_GetConstInterleavedBus@@YA?AU?$ConstInterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@I@Z(b);
}

/*
==============
SD_GetConstSequentialBus
==============
*/
SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *SD_GetConstSequentialBus(SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *result, const unsigned int b)
{
  __int64 v2; 
  __int64 v4; 
  float *v5; 
  unsigned int v6; 
  float **v7; 
  float *v8; 
  _BYTE v10[128]; 

  v2 = b;
  if ( b >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 586, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT", -2i64) )
    __debugbreak();
  if ( SndBusIsInterleaved_0[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 587, ASSERT_TYPE_ASSERT, "(!SndBusIsInterleaved[b])", (const char *)&queryFormat, "!SndBusIsInterleaved[b]") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
    __debugbreak();
  v4 = (unsigned int)((_DWORD)v2 << 12);
  v5 = &g_sd.voiceBusBuffers[v4 - 69632];
  if ( (((unsigned __int8)0x40000000u + 4 * (_BYTE)v4 - 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 84, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", &g_sd.voiceBusBuffers[v4 - 69632]) )
    __debugbreak();
  v6 = 0;
  v7 = (float **)v10;
  do
  {
    v8 = &v5[256 * v6];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 459, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( ((unsigned __int8)v5 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 460, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v7 = v8;
    ++v6;
    ++v7;
  }
  while ( v6 < 0x10 );
  *(__m256i *)result->data._Elems = *(__m256i *)v10;
  *(__m256i *)&result->data._Elems[4] = *(__m256i *)&v10[32];
  *(__m256i *)&result->data._Elems[8] = *(__m256i *)&v10[64];
  *(__m256i *)&result->data._Elems[12] = *(__m256i *)&v10[96];
  return result;
}

/*
==============
SD_GetInterleavedBus
==============
*/
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *SD_GetInterleavedBus(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *result, const unsigned int b)
{
  __int64 v2; 
  float *v3; 

  v2 = (unsigned int)result;
  if ( (unsigned int)result >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 607, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT", -2i64) )
    __debugbreak();
  if ( !SndBusIsInterleaved_0[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 608, ASSERT_TYPE_ASSERT, "(SndBusIsInterleaved[b])", (const char *)&queryFormat, "SndBusIsInterleaved[b]") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
    __debugbreak();
  v3 = &g_sd.voiceBusBuffers[((_DWORD)v2 << 12) - 69632];
  if ( ((unsigned __int8)v3 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 61, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v3) )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 424, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)v3 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 425, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)v3;
}

/*
==============
SD_GetConstInterleavedBus
==============
*/
SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256> SD_GetConstInterleavedBus(const unsigned int b)
{
  __int64 v1; 
  float *v2; 

  v1 = b;
  if ( b >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 600, ASSERT_TYPE_ASSERT, "(b < SND_BUS_COUNT)", (const char *)&queryFormat, "b < SND_BUS_COUNT", -2i64) )
    __debugbreak();
  if ( !SndBusIsInterleaved_1[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 601, ASSERT_TYPE_ASSERT, "(SndBusIsInterleaved[b])", (const char *)&queryFormat, "SndBusIsInterleaved[b]") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd.h", 579, ASSERT_TYPE_ASSERT, "(i<SND_BUS_COUNT)", (const char *)&queryFormat, "i<SND_BUS_COUNT") )
    __debugbreak();
  v2 = &g_sd.voiceBusBuffers[((_DWORD)v1 << 12) - 69632];
  if ( ((unsigned __int8)v2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 67, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v2) )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 431, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)v2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 432, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return (SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256>)v2;
}

