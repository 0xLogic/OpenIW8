/*
==============
Accessory_Register
==============
*/

AccessoryDef *__fastcall Accessory_Register(const char *name)
{
  return ?Accessory_Register@@YAPEAUAccessoryDef@@PEBD@Z(name);
}

/*
==============
Accessory_Register
==============
*/
AccessoryDef *Accessory_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory_load_obj.cpp", 178, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_accessory_load_obj.cpp", 165, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_ACCESSORY, name, 1).accessory;
}

