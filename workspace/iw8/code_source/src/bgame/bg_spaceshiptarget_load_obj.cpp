/*
==============
SpaceshipTarget_Register
==============
*/

SpaceshipTargetDef *__fastcall SpaceshipTarget_Register(const char *name)
{
  return ?SpaceshipTarget_Register@@YAPEAUSpaceshipTargetDef@@PEBD@Z(name);
}

/*
==============
SpaceshipTarget_Register
==============
*/
SpaceshipTargetDef *SpaceshipTarget_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_spaceshiptarget_load_obj.cpp", 219, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_spaceshiptarget_load_obj.cpp", 206, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SPACESHIPTARGET, name, 1).spaceshipTargetDef;
}

