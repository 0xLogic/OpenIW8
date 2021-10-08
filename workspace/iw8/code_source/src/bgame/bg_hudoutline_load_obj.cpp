/*
==============
HudOutline_Register
==============
*/

HudOutlineDef *__fastcall HudOutline_Register(const char *name)
{
  return ?HudOutline_Register@@YAPEAUHudOutlineDef@@PEBD@Z(name);
}

/*
==============
HudOutline_Register
==============
*/
HudOutlineDef *HudOutline_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutline_load_obj.cpp", 289, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_hudoutline_load_obj.cpp", 276, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_HUDOUTLINE, name, 1).hudOutlineDef;
}

