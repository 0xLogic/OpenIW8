/*
==============
BulletPenetration_Register
==============
*/

BulletPenetration *__fastcall BulletPenetration_Register(const char *name)
{
  return ?BulletPenetration_Register@@YAPEAUBulletPenetration@@PEBD@Z(name);
}

/*
==============
BulletPenetration_Register
==============
*/
BulletPenetration *BulletPenetration_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_bulletpenetration_load_obj.cpp", 353, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_bulletpenetration_load_obj.cpp", 340, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_BULLETPENETRATION, name, 1).bulletPenetration;
}

