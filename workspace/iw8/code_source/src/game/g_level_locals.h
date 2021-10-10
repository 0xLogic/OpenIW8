/*
==============
G_Level_GetFrameDurationInSeconds
==============
*/

double __fastcall G_Level_GetFrameDurationInSeconds()
{
  double result; 

  *(float *)&result = ?G_Level_GetFrameDurationInSeconds@@YAMXZ();
  return result;
}

/*
==============
G_Level_GetFrameDuration
==============
*/

int __fastcall G_Level_GetFrameDuration()
{
  return ?G_Level_GetFrameDuration@@YAHXZ();
}

/*
==============
G_Level_GetFrameDuration
==============
*/
__int64 G_Level_GetFrameDuration()
{
  __int64 result; 

  result = (unsigned int)level.frameDuration;
  if ( !level.frameDuration )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    return (unsigned int)level.frameDuration;
  }
  return result;
}

/*
==============
G_Level_GetFrameDurationInSeconds
==============
*/
float G_Level_GetFrameDurationInSeconds()
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return (float)level.frameDuration * 0.001;
}

