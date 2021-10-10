/*
==============
Resampler_Resample_DrainSrc
==============
*/

unsigned int __fastcall Resampler_Resample_DrainSrc(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int srcCount, float *dest, unsigned int destCount)
{
  return ?Resampler_Resample_DrainSrc@@YAIAEAUSndResamplerState@@MPEIBMIPEIAMI@Z(state, pitchRatio, src, srcCount, dest, destCount);
}

/*
==============
Resampler_Resample_FillDest
==============
*/

unsigned int __fastcall Resampler_Resample_FillDest(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int *srcCount, unsigned int srcHead, const unsigned int srcSize, float *dest, unsigned int destCount)
{
  return ?Resampler_Resample_FillDest@@YAIAEAUSndResamplerState@@MPEIBMAEAIIIPEIAMI@Z(state, pitchRatio, src, srcCount, srcHead, srcSize, dest, destCount);
}

/*
==============
Resampler_Initialize
==============
*/

void __fastcall Resampler_Initialize(SndResamplerState *outState)
{
  ?Resampler_Initialize@@YAXAEAUSndResamplerState@@@Z(outState);
}

/*
==============
Resampler_Resample_DrainSrc_Stereo
==============
*/

unsigned int __fastcall Resampler_Resample_DrainSrc_Stereo(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int srcCount, float *destL, float *destR, unsigned int destCount)
{
  return ?Resampler_Resample_DrainSrc_Stereo@@YAIAEAUSndResamplerState@@MPEIBMIPEIAM2I@Z(state, pitchRatio, src, srcCount, destL, destR, destCount);
}

/*
==============
Resampler_Initialize
==============
*/
void Resampler_Initialize(SndResamplerState *outState)
{
  outState->t = 0.0;
}

/*
==============
Resampler_Resample_DrainSrc
==============
*/
__int64 Resampler_Resample_DrainSrc(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int srcCount, float *dest, unsigned int destCount)
{
  __int64 v6; 
  unsigned int v8; 
  unsigned int v9; 
  float v10; 
  unsigned int v11; 
  ResamplerPosition_LinearBuf position; 

  v6 = srcCount;
  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_DrainSrc");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 154, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 155, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 156, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 157, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)dest & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 158, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( dest ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )dest ) ) = 0x%llx", dest) )
    __debugbreak();
  position.bufSize = v6;
  position.pos = 0;
  v8 = v6 - 1;
  position.consumed = 0;
  v9 = (int)pitchRatio;
  position.interpStep = pitchRatio;
  position.interp = 0.0;
  if ( (float)(pitchRatio - (float)(int)pitchRatio) != 0.0 )
    ++v9;
  if ( v8 > v9 )
    v8 = v9;
  v10 = (float)v6;
  v11 = (int)(float)((float)(v10 / pitchRatio) + 0.5);
  position.nextPos = v8;
  if ( v11 > destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 163, ASSERT_TYPE_ASSERT, "(samplesToGenerate <= destCount)", (const char *)&queryFormat, "samplesToGenerate <= destCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos, *(_QWORD *)&position.interp) )
    __debugbreak();
  Resampler_ResampleInternal_ResamplerPosition_LinearBuf_(&position, v11, src, dest);
  Sys_ProfEndNamedEvent();
  return v11;
}

/*
==============
Resampler_Resample_DrainSrc_Stereo
==============
*/
__int64 Resampler_Resample_DrainSrc_Stereo(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int srcCount, float *destL, float *destR, unsigned int destCount)
{
  __int64 v7; 
  unsigned int v9; 
  unsigned int v10; 
  float v11; 
  unsigned int v12; 
  ResamplerPosition_LinearBuf position; 

  v7 = srcCount;
  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_DrainSrc_Stereo");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 268, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !destL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 269, ASSERT_TYPE_ASSERT, "(destL)", (const char *)&queryFormat, "destL") )
    __debugbreak();
  if ( !destR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 270, ASSERT_TYPE_ASSERT, "(destR)", (const char *)&queryFormat, "destR") )
    __debugbreak();
  if ( !(_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 271, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 272, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)destL & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 273, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( destL ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )destL ) ) = 0x%llx", destL) )
    __debugbreak();
  if ( ((unsigned __int8)destR & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 274, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( destR ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )destR ) ) = 0x%llx", destR) )
    __debugbreak();
  position.bufSize = v7;
  position.pos = 0;
  v9 = v7 - 1;
  position.consumed = 0;
  v10 = (int)pitchRatio;
  position.interpStep = pitchRatio;
  position.interp = 0.0;
  if ( (float)(pitchRatio - (float)(int)pitchRatio) != 0.0 )
    ++v10;
  if ( v9 > v10 )
    v9 = v10;
  v11 = (float)v7;
  v12 = (int)(float)((float)(v11 / pitchRatio) + 0.5);
  position.nextPos = v9;
  if ( v12 > destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 279, ASSERT_TYPE_ASSERT, "(samplesToGenerate <= destCount)", (const char *)&queryFormat, "samplesToGenerate <= destCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos, *(_QWORD *)&position.interp) )
    __debugbreak();
  Resampler_ResampleInternal_Stereo_ResamplerPosition_LinearBuf_(&position, v12, src, destL, destR);
  Sys_ProfEndNamedEvent();
  return v12;
}

/*
==============
Resampler_Resample_FillDest
==============
*/
__int64 Resampler_Resample_FillDest(SndResamplerState *state, const float pitchRatio, const float *src, unsigned int *srcCount, unsigned int srcHead, const unsigned int srcSize, float *dest, unsigned int destCount)
{
  unsigned int v11; 
  int v12; 
  float v13; 
  unsigned int consumed; 
  ResamplerPosition_CircularBuf position; 

  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_FillDest");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 177, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 178, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !*srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 179, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  v11 = destCount;
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 180, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)dest & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 181, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( dest ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )dest ) ) = 0x%llx", dest) )
    __debugbreak();
  position.interp = state->t;
  v12 = (int)pitchRatio;
  position.interpStep = pitchRatio;
  position.bufSize = srcSize;
  position.pos = srcHead;
  position.consumed = 0;
  if ( (float)(pitchRatio - (float)(int)pitchRatio) != 0.0 )
    ++v12;
  v13 = (float)*srcCount;
  position.nextPos = (srcHead + v12) % srcSize;
  if ( destCount > (int)(float)((float)(v13 / pitchRatio) + 0.5) )
    v11 = (int)(float)((float)(v13 / pitchRatio) + 0.5);
  Resampler_ResampleInternal_ResamplerPosition_CircularBuf_(&position, v11, src, dest);
  consumed = position.consumed;
  state->t = position.interp;
  if ( consumed > *srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 191, ASSERT_TYPE_ASSERT, "(position.consumed <= srcCount)", (const char *)&queryFormat, "position.consumed <= srcCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos) )
    __debugbreak();
  *srcCount -= consumed;
  Sys_ProfEndNamedEvent();
  return v11;
}

