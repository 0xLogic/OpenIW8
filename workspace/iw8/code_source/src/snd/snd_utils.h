/*
==============
SND_FaderUpdate
==============
*/

void __fastcall SND_FaderUpdate(SndFader *fader, float dt)
{
  ?SND_FaderUpdate@@YAXPEAUSndFader@@M@Z(fader, dt);
}

/*
==============
SND_FaderSetRateTime
==============
*/

void __fastcall SND_FaderSetRateTime(SndFader *fader, float time)
{
  ?SND_FaderSetRateTime@@YAXPEAUSndFader@@M@Z(fader, time);
}

/*
==============
SND_FaderSetGoal
==============
*/

void __fastcall SND_FaderSetGoal(SndFader *fader, float g)
{
  ?SND_FaderSetGoal@@YAXPEAUSndFader@@M@Z(fader, g);
}

/*
==============
SND_FaderSetRate
==============
*/

void __fastcall SND_FaderSetRate(SndFader *fader, float r)
{
  ?SND_FaderSetRate@@YAXPEAUSndFader@@M@Z(fader, r);
}

/*
==============
SND_FaderUpdate
==============
*/

void __fastcall SND_FaderUpdate(SndFader *fader, double dt)
{
  int v27; 
  int v28; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  [rsp+68h+arg_8], xmm1
  }
  _RBX = fader;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
  }
  if ( (v27 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 118, ASSERT_TYPE_ASSERT, "(!IS_NAN(dt))", (const char *)&queryFormat, "!IS_NAN(dt)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rbx+4]
    vsubss  xmm4, xmm7, dword ptr [rbx]
    vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm8, xmm6
    vminss  xmm3, xmm1, xmm0
    vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm0
    vcmpless xmm1, xmm0, xmm4
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm3, xmm1
    vaddss  xmm4, xmm1, dword ptr [rbx]
    vblendvps xmm6, xmm4, xmm7, xmm0
    vmovss  [rsp+68h+arg_8], xmm6
    vmovss  [rsp+68h+arg_8], xmm6
  }
  if ( (v28 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 126, ASSERT_TYPE_ASSERT, "(!IS_NAN(value))", (const char *)&queryFormat, "!IS_NAN(value)") )
    __debugbreak();
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovss  dword ptr [rbx], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
}

/*
==============
SND_FaderSetGoal
==============
*/

void __fastcall SND_FaderSetGoal(SndFader *fader, double g)
{
  int v12; 

  __asm { vmovss  [rsp+48h+arg_8], xmm1 }
  _RBX = fader;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (v12 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+8]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm6, xmm1
    vmovss  dword ptr [rbx+4], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx], xmm0
  }
}

/*
==============
SND_FaderSetRate
==============
*/

void __fastcall SND_FaderSetRate(SndFader *fader, double r)
{
  int v9; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RBX = fader;
  __asm { vmovss  [rsp+48h+arg_8], xmm6 }
  if ( (v9 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 56, ASSERT_TYPE_ASSERT, "(!IS_NAN(r))", (const char *)&queryFormat, "!IS_NAN(r)") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
SND_FaderSetRateTime
==============
*/

void __fastcall SND_FaderSetRateTime(SndFader *fader, double time)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = fader;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovaps xmm6, xmm1
    vcomiss xmm6, cs:__real@33fffae5
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+8], xmm1
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

