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
void SND_FaderUpdate(SndFader *fader, float dt)
{
  __int128 goal_low; 
  __int128 v13; 

  if ( (LODWORD(dt) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 118, ASSERT_TYPE_ASSERT, "(!IS_NAN(dt))", (const char *)&queryFormat, "!IS_NAN(dt)") )
    __debugbreak();
  _XMM6 = LODWORD(fader->rate);
  goal_low = LODWORD(fader->goal);
  *(float *)&goal_low = fader->goal - fader->value;
  _XMM1 = goal_low & _xmm;
  __asm { vminss  xmm3, xmm1, xmm0 }
  _XMM2 = _XMM3 ^ _xmm;
  _XMM0 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm0, xmm4
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm3, xmm1
  }
  v13 = _XMM1;
  *(float *)&v13 = *(float *)&_XMM1 + fader->value;
  _XMM4 = v13;
  __asm { vblendvps xmm6, xmm4, xmm7, xmm0 }
  if ( (_XMM6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 126, ASSERT_TYPE_ASSERT, "(!IS_NAN(value))", (const char *)&queryFormat, "!IS_NAN(value)") )
    __debugbreak();
  fader->value = *(float *)&_XMM6;
}

/*
==============
SND_FaderSetGoal
==============
*/
void SND_FaderSetGoal(SndFader *fader, float g)
{
  if ( (LODWORD(g) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 89, ASSERT_TYPE_ASSERT, "(!IS_NAN(g))", (const char *)&queryFormat, "!IS_NAN(g)") )
    __debugbreak();
  _XMM2 = LODWORD(fader->value);
  _XMM0 = LODWORD(fader->rate) & (unsigned __int128)_xmm;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm6, xmm1
  }
  fader->goal = g;
  fader->value = *(float *)&_XMM0;
}

/*
==============
SND_FaderSetRate
==============
*/
void SND_FaderSetRate(SndFader *fader, float r)
{
  if ( r < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 55, ASSERT_TYPE_ASSERT, "(r >= 0.0f)", (const char *)&queryFormat, "r >= 0.0f") )
    __debugbreak();
  if ( (LODWORD(r) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 56, ASSERT_TYPE_ASSERT, "(!IS_NAN(r))", (const char *)&queryFormat, "!IS_NAN(r)") )
    __debugbreak();
  fader->rate = r;
}

/*
==============
SND_FaderSetRateTime
==============
*/
void SND_FaderSetRateTime(SndFader *fader, float time)
{
  __int128 v2; 

  if ( time < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_utils.h", 64, ASSERT_TYPE_ASSERT, "(time >= 0.0f)", (const char *)&queryFormat, "time >= 0.0f", v2) )
    __debugbreak();
  if ( time < 0.0000001192 )
    fader->rate = 0;
  else
    fader->rate = 1.0 / time;
}

