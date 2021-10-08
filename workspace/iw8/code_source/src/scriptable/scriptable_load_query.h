/*
==============
ScriptableDef_HasServerInstance
==============
*/

bool __fastcall ScriptableDef_HasServerInstance(const ScriptableDef *def)
{
  return ?ScriptableDef_HasServerInstance@@YA_NPEBUScriptableDef@@@Z(def);
}

/*
==============
ScriptableDef_HasHealth
==============
*/

bool __fastcall ScriptableDef_HasHealth(const ScriptableDef *def)
{
  return ?ScriptableDef_HasHealth@@YA_NPEBUScriptableDef@@@Z(def);
}

/*
==============
ScriptableDef_IsStandaloneRequested
==============
*/

bool __fastcall ScriptableDef_IsStandaloneRequested(const ScriptableDef *def)
{
  return ?ScriptableDef_IsStandaloneRequested@@YA_NPEBUScriptableDef@@@Z(def);
}

/*
==============
ScriptableDef_HasHealth
==============
*/
bool ScriptableDef_HasHealth(const ScriptableDef *def)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 324, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x80) != 0;
}

/*
==============
ScriptableDef_IsStandaloneRequested
==============
*/
bool ScriptableDef_IsStandaloneRequested(const ScriptableDef *def)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x2000) != 0;
}

/*
==============
ScriptableDef_HasServerInstance
==============
*/
bool ScriptableDef_HasServerInstance(const ScriptableDef *def)
{
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 2) != 0;
}

