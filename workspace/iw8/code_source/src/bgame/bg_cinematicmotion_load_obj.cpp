/*
==============
CinematicMotion_Register
==============
*/

CinematicMotionDef *__fastcall CinematicMotion_Register(const char *name)
{
  return ?CinematicMotion_Register@@YAPEAUCinematicMotionDef@@PEBD@Z(name);
}

/*
==============
CinematicMotion_Register
==============
*/
CinematicMotionDef *CinematicMotion_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_cinematicmotion_load_obj.cpp", 325, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_cinematicmotion_load_obj.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_CINEMATICMOTION, name, 1).cinematicMotion;
}

