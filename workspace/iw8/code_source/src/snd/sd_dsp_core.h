/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast
==============
*/

const __m256 *__fastcall SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(const SD_DSP::AtmosFrame::TransientType *const in)
{
  return ?Registercast@?$FrameTraits@UAtmosFrame@SD_DSP@@@SD_DSP@@SAPEBT__m256@@QEIBUTransientType@AtmosFrame@2@@Z(in);
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast
==============
*/

const float *__fastcall SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(const SD_DSP::AtmosFrame *const in)
{
  return ?Downcast@?$FrameTraits@UAtmosFrame@SD_DSP@@@SD_DSP@@SAPEBMQEIBUAtmosFrame@2@@Z(in);
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast
==============
*/

float *__fastcall SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(SD_DSP::AtmosFrame *const in)
{
  return ?Downcast@?$FrameTraits@UAtmosFrame@SD_DSP@@@SD_DSP@@SAPEAMQEIAUAtmosFrame@2@@Z(in);
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast
==============
*/

__m128 *__fastcall SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast(__m128 *const in)
{
  return ?Registercast@?$FrameTraits@UMonoFrame@SD_DSP@@@SD_DSP@@SAPEAT__m128@@QEIAT3@@Z(in);
}

/*
==============
SD_DSP::RegisterTraits<__m256>::Upcast
==============
*/

__m256 *__fastcall SD_DSP::RegisterTraits<__m256>::Upcast(float *const in)
{
  return ?Upcast@?$RegisterTraits@T__m256@@@SD_DSP@@SAPEAT__m256@@QEIAM@Z(in);
}

/*
==============
SD_DSP::QuadFrame::QuadFrame
==============
*/

void __fastcall SD_DSP::QuadFrame::QuadFrame(SD_DSP::QuadFrame *this)
{
  ??0QuadFrame@SD_DSP@@QEAA@XZ(this);
}

/*
==============
SD_DSP::StereoFrame::StereoFrame
==============
*/

void __fastcall SD_DSP::StereoFrame::StereoFrame(SD_DSP::StereoFrame *this)
{
  ??0StereoFrame@SD_DSP@@QEAA@XZ(this);
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast
==============
*/

__m256 *__fastcall SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(SD_DSP::AtmosFrame::TransientType *const in)
{
  return ?Registercast@?$FrameTraits@UAtmosFrame@SD_DSP@@@SD_DSP@@SAPEAT__m256@@QEIAUTransientType@AtmosFrame@2@@Z(in);
}

/*
==============
SD_DSP::MonoFrame::MonoFrame
==============
*/

void __fastcall SD_DSP::MonoFrame::MonoFrame(SD_DSP::MonoFrame *this)
{
  ??0MonoFrame@SD_DSP@@QEAA@XZ(this);
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast
==============
*/

const __m128 *__fastcall SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast(const __m128 *const in)
{
  return ?Registercast@?$FrameTraits@UMonoFrame@SD_DSP@@@SD_DSP@@SAPEBT__m128@@QEIBT3@@Z(in);
}

/*
==============
SD_DSP::AtmosFrame::AtmosFrame
==============
*/

void __fastcall SD_DSP::AtmosFrame::AtmosFrame(SD_DSP::AtmosFrame *this)
{
  ??0AtmosFrame@SD_DSP@@QEAA@XZ(this);
}

/*
==============
SD_DSP::RegisterTraits<__m256>::Upcast
==============
*/

const __m256 *__fastcall SD_DSP::RegisterTraits<__m256>::Upcast(const float *const in)
{
  return ?Upcast@?$RegisterTraits@T__m256@@@SD_DSP@@SAPEBT__m256@@QEIBM@Z(in);
}

/*
==============
SD_DSP::AtmosFrame::AtmosFrame
==============
*/
void SD_DSP::AtmosFrame::AtmosFrame(SD_DSP::AtmosFrame *this)
{
  ;
}

/*
==============
SD_DSP::QuadFrame::QuadFrame
==============
*/
void SD_DSP::QuadFrame::QuadFrame(SD_DSP::QuadFrame *this)
{
  ;
}

/*
==============
SD_DSP::RegisterTraits<__m256>::Upcast
==============
*/
__m256 *SD_DSP::RegisterTraits<__m256>::Upcast(float *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 54, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 55, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return (__m256 *)in;
}

/*
==============
SD_DSP::RegisterTraits<__m256>::Upcast
==============
*/
const __m256 *SD_DSP::RegisterTraits<__m256>::Upcast(const float *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 61, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 62, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return (const __m256 *)in;
}

/*
==============
SD_DSP::MonoFrame::MonoFrame
==============
*/
void SD_DSP::MonoFrame::MonoFrame(SD_DSP::MonoFrame *this)
{
  ;
}

/*
==============
SD_DSP::StereoFrame::StereoFrame
==============
*/
void SD_DSP::StereoFrame::StereoFrame(SD_DSP::StereoFrame *this)
{
  ;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast
==============
*/
SD_DSP::AtmosFrame *SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(SD_DSP::AtmosFrame *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 438, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 439, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast
==============
*/
const SD_DSP::AtmosFrame *SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(const SD_DSP::AtmosFrame *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 445, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 446, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast
==============
*/
SD_DSP::AtmosFrame::TransientType *SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(SD_DSP::AtmosFrame::TransientType *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 467, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 468, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast
==============
*/
const SD_DSP::AtmosFrame::TransientType *SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(const SD_DSP::AtmosFrame::TransientType *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 475, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 476, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast
==============
*/
__m128 *SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast(__m128 *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 467, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 468, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

/*
==============
SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast
==============
*/
const __m128 *SD_DSP::FrameTraits<SD_DSP::MonoFrame>::Registercast(const __m128 *const in)
{
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 475, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 476, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
    __debugbreak();
  return in;
}

