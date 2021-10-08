/*
==============
CarryObject_Register
==============
*/

CarryObjectDef *__fastcall CarryObject_Register(const char *name)
{
  return ?CarryObject_Register@@YAPEAUCarryObjectDef@@PEBD@Z(name);
}

/*
==============
CarryObject_Register
==============
*/
CarryObjectDef *CarryObject_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject_load_obj.cpp", 220, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_carryobject_load_obj.cpp", 207, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_CARRYOBJECT, name, 1).carryObjectDef;
}

