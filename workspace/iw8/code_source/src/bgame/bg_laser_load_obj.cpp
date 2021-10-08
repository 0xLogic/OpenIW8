/*
==============
Laser_Register
==============
*/

LaserDef *__fastcall Laser_Register(const char *name)
{
  return ?Laser_Register@@YAPEAULaserDef@@PEBD@Z(name);
}

/*
==============
Laser_Register
==============
*/
LaserDef *Laser_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_laser_load_obj.cpp", 180, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_laser_load_obj.cpp", 167, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_LASER, name, 1).laserDef;
}

