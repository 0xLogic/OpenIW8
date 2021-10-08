/*
==============
RumbleInfo_Register
==============
*/

RumbleInfo *__fastcall RumbleInfo_Register(const char *name)
{
  return ?RumbleInfo_Register@@YAPEAURumbleInfo@@PEBD@Z(name);
}

/*
==============
RumbleGraph_Register
==============
*/

RumbleGraph *__fastcall RumbleGraph_Register(const char *name)
{
  return ?RumbleGraph_Register@@YAPEAURumbleGraph@@PEBD@Z(name);
}

/*
==============
RumbleGraph_Register
==============
*/
RumbleGraph *RumbleGraph_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble_load_obj.cpp", 346, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble_load_obj.cpp", 333, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_RUMBLE_GRAPH, name, 0).rumbleGraph;
}

/*
==============
RumbleInfo_Register
==============
*/
RumbleInfo *RumbleInfo_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble_load_obj.cpp", 320, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\rumble\\rumble_load_obj.cpp", 307, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_RUMBLE, name, 0).rumble;
}

