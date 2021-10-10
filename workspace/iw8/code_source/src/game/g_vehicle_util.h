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
float G_Vehicle_GetDeltaTime()
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return (float)level.frameDuration * 0.001;
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

