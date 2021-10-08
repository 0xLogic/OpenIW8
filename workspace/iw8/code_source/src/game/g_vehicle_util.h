/*
==============
G_Vehicle_GetDeltaTime
==============
*/

double __fastcall G_Vehicle_GetDeltaTime()
{
  double result; 

  *(float *)&result = ?G_Vehicle_GetDeltaTime@@YAMXZ();
  return result;
}

/*
==============
G_Vehicle_GetNextThinkTime
==============
*/

int __fastcall G_Vehicle_GetNextThinkTime()
{
  return ?G_Vehicle_GetNextThinkTime@@YAHXZ();
}

/*
==============
G_Vehicle_GetDeltaTime
==============
*/

float __fastcall G_Vehicle_GetDeltaTime(double _XMM0_8)
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm0, xmm0, cs:__real@3a83126f
  }
  return *(float *)&_XMM0;
}

/*
==============
G_Vehicle_GetNextThinkTime
==============
*/
__int64 G_Vehicle_GetNextThinkTime()
{
  if ( level.frameDuration )
    return (unsigned int)(level.frameDuration + level.time);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return (unsigned int)(level.frameDuration + level.time);
}

