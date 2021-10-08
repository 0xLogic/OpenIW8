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

__int64 __fastcall Resampler_Resample_DrainSrc(SndResamplerState *state, double pitchRatio, const float *src, unsigned int srcCount, float *dest, unsigned int destCount)
{
  unsigned int v13; 
  __int64 result; 
  ResamplerPosition_LinearBuf position; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_DrainSrc");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 154, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 155, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 156, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 157, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)dest & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 158, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( dest ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )dest ) ) = 0x%llx", dest) )
    __debugbreak();
  position.bufSize = srcCount;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  position.pos = 0;
  v13 = srcCount - 1;
  position.consumed = 0;
  __asm
  {
    vcvttss2si eax, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm1, xmm6, xmm0
    vucomiss xmm1, xmm2
    vmovss  [rsp+68h+position.interpStep], xmm6
    vmovss  [rsp+68h+position.interp], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdi
  }
  if ( srcCount - 1 > _EAX )
    v13 = _EAX;
  __asm
  {
    vdivss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vcvttss2si edi, xmm2
  }
  position.nextPos = v13;
  if ( _EDI > destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 163, ASSERT_TYPE_ASSERT, "(samplesToGenerate <= destCount)", (const char *)&queryFormat, "samplesToGenerate <= destCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos, *(_QWORD *)&position.interp) )
    __debugbreak();
  Resampler_ResampleInternal_ResamplerPosition_LinearBuf_(&position, _EDI, src, dest);
  Sys_ProfEndNamedEvent();
  result = _EDI;
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
Resampler_Resample_DrainSrc_Stereo
==============
*/

__int64 __fastcall Resampler_Resample_DrainSrc_Stereo(SndResamplerState *state, double pitchRatio, const float *src, unsigned int srcCount, float *destL, float *destR, unsigned int destCount)
{
  unsigned int v14; 
  ResamplerPosition_LinearBuf position; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_DrainSrc_Stereo");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 268, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !destL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 269, ASSERT_TYPE_ASSERT, "(destL)", (const char *)&queryFormat, "destL") )
    __debugbreak();
  if ( !destR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 270, ASSERT_TYPE_ASSERT, "(destR)", (const char *)&queryFormat, "destR") )
    __debugbreak();
  if ( !srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 271, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 272, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)destL & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 273, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( destL ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )destL ) ) = 0x%llx", destL) )
    __debugbreak();
  if ( ((unsigned __int8)destR & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 274, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( destR ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )destR ) ) = 0x%llx", destR) )
    __debugbreak();
  position.bufSize = srcCount;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  position.pos = 0;
  v14 = srcCount - 1;
  position.consumed = 0;
  __asm
  {
    vcvttss2si eax, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm1, xmm6, xmm0
    vucomiss xmm1, xmm2
    vmovss  [rsp+68h+position.interpStep], xmm6
    vmovss  [rsp+68h+position.interp], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rsi
  }
  if ( srcCount - 1 > _EAX )
    v14 = _EAX;
  __asm
  {
    vdivss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vcvttss2si esi, xmm2
  }
  position.nextPos = v14;
  if ( _ESI > destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 279, ASSERT_TYPE_ASSERT, "(samplesToGenerate <= destCount)", (const char *)&queryFormat, "samplesToGenerate <= destCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos, *(_QWORD *)&position.interp) )
    __debugbreak();
  Resampler_ResampleInternal_Stereo_ResamplerPosition_LinearBuf_(&position, _ESI, src, destL, destR);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return _ESI;
}

/*
==============
Resampler_Resample_FillDest
==============
*/

__int64 __fastcall Resampler_Resample_FillDest(SndResamplerState *state, double pitchRatio, const float *src, unsigned int *srcCount, unsigned int srcHead, const unsigned int srcSize, float *dest, unsigned int destCount)
{
  unsigned int v13; 
  bool v14; 
  bool v15; 
  unsigned int v22; 
  unsigned int consumed; 
  ResamplerPosition_CircularBuf position; 

  _R14 = state;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFu, "Resampler_Resample_FillDest");
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 177, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 178, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !*srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 179, ASSERT_TYPE_ASSERT, "(srcCount > 0)", (const char *)&queryFormat, "srcCount > 0") )
    __debugbreak();
  v13 = destCount;
  if ( !destCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 180, ASSERT_TYPE_ASSERT, "(destCount > 0)", (const char *)&queryFormat, "destCount > 0") )
    __debugbreak();
  v14 = ((unsigned __int8)dest & 0xF) == 0;
  if ( ((unsigned __int8)dest & 0xF) != 0 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 181, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( dest ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )dest ) ) = 0x%llx", dest);
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+78h+position.interp], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvttss2si eax, xmm6
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm2, xmm6, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm2, xmm1
    vmovss  [rsp+78h+position.interpStep], xmm6
  }
  position.bufSize = srcSize;
  position.pos = srcHead;
  position.consumed = 0;
  if ( !v14 )
    ++_EAX;
  v22 = (srcHead + _EAX) % srcSize;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vcvttss2si eax, xmm2
  }
  position.nextPos = v22;
  if ( destCount > _EAX )
    v13 = _EAX;
  Resampler_ResampleInternal_ResamplerPosition_CircularBuf_(&position, v13, src, dest);
  __asm { vmovss  xmm0, [rsp+78h+position.interp] }
  consumed = position.consumed;
  __asm { vmovss  dword ptr [r14], xmm0 }
  if ( consumed > *srcCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_resampler.cpp", 191, ASSERT_TYPE_ASSERT, "(position.consumed <= srcCount)", (const char *)&queryFormat, "position.consumed <= srcCount", *(_QWORD *)&position.interpStep, *(_QWORD *)&position.pos) )
    __debugbreak();
  *srcCount -= consumed;
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  return v13;
}

