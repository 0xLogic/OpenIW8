/*
==============
Camo_Register
==============
*/

Camo *__fastcall Camo_Register(const char *name)
{
  return ?Camo_Register@@YAPEAUCamo@@PEBD@Z(name);
}

/*
==============
Camo_Register
==============
*/
Camo *Camo_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo_load_obj.cpp", 342, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo_load_obj.cpp", 329, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_CAMO, name, 1).camo;
}

