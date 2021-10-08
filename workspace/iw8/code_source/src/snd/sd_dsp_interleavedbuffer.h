/*
==============
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::CopyFrom
==============
*/

void __fastcall SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::CopyFrom(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256> *src)
{
  ?CopyFrom@?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@QEAAXAEBU?$ConstInterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@2@@Z(this, src);
}

/*
==============
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData
==============
*/

SD_DSP::AtmosFrame *__fastcall SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *this)
{
  return ?GetData@?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@QEAAPEAUAtmosFrame@2@XZ(this);
}

/*
==============
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData
==============
*/
SD_DSP::AtmosFrame *SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *this)
{
  if ( this->data )
    return this->data;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr", -2i64) )
    __debugbreak();
  return this->data;
}

/*
==============
SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::CopyFrom
==============
*/
void SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::CopyFrom(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *this, const SD_DSP::ConstInterleavedBufferRefType<SD_DSP::AtmosFrame,256> *src)
{
  SD_DSP::AtmosFrame *data; 
  const SD_DSP::AtmosFrame *v5; 
  __m256 *v6; 
  const __m256 *v7; 
  __int64 v10; 

  if ( !this->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr", -2i64) )
    __debugbreak();
  data = this->data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 438, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)data & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  v5 = src->data;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 445, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
    __debugbreak();
  if ( ((unsigned __int8)v5 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 446, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 204, ASSERT_TYPE_ASSERT, "(vOut != nullptr)", (const char *)&queryFormat, "vOut != nullptr") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 205, ASSERT_TYPE_ASSERT, "(vIn != nullptr)", (const char *)&queryFormat, "vIn != nullptr") )
    __debugbreak();
  v6 = SD_DSP::RegisterTraits<__m256>::Upcast(data->val.lo.m256_f32);
  v7 = SD_DSP::RegisterTraits<__m256>::Upcast(v5->val.lo.m256_f32);
  _RCX = v6 + 1;
  _RAX = (char *)v7 - (char *)v6;
  v10 = 256i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rcx-20h]
      vmovups ymmword ptr [rcx-20h], ymm0
      vmovups ymm1, ymmword ptr [rax+rcx]
      vmovups ymmword ptr [rcx], ymm1
    }
    _RCX += 2;
    --v10;
  }
  while ( v10 );
}

