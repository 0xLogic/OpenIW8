/*
==============
Tracer_Register
==============
*/

TracerDef *__fastcall Tracer_Register(const char *name)
{
  return ?Tracer_Register@@YAPEAUTracerDef@@PEBD@Z(name);
}

/*
==============
Tracer_Register
==============
*/
TracerDef *Tracer_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer_load_obj.cpp", 287, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer_load_obj.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_TRACER, name, 1).tracerDef;
}

