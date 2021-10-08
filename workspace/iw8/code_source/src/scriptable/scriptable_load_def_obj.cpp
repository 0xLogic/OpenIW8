/*
==============
Scriptable_LoadDef
==============
*/

ScriptableDef *__fastcall Scriptable_LoadDef(const char *name)
{
  return ?Scriptable_LoadDef@@YAPEAUScriptableDef@@PEBD@Z(name);
}

/*
==============
Scriptable_LoadDef
==============
*/
ScriptableDef *Scriptable_LoadDef(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_def_obj.cpp", 4226, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_def_obj.cpp", 4191, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, name, 1).scriptable;
}

