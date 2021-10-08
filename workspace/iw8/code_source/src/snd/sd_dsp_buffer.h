/*
==============
SD_DSP::Buffer<SD_DSP::AtmosFrame,256>::GetInterleavedView
==============
*/

SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *__fastcall SD_DSP::Buffer<SD_DSP::AtmosFrame,256>::GetInterleavedView(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *result, float *const extData)
{
  return ?GetInterleavedView@?$Buffer@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@SA?AU?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@2@QEIAM@Z(result, extData);
}

/*
==============
SD_DSP::Buffer<SD_DSP::AtmosFrame,256>::GetInterleavedView
==============
*/
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *SD_DSP::Buffer<SD_DSP::AtmosFrame,256>::GetInterleavedView(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *result, float *const extData)
{
  __int64 v3; 

  v3 = (unsigned __int8)result & 0x1F;
  if ( ((unsigned __int8)result & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 61, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", result) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 424, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 425, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return result;
}

