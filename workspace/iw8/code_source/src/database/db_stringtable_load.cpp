/*
==============
Mark_ScriptStringCustom
==============
*/

void __fastcall Mark_ScriptStringCustom(scr_string_t *var)
{
  ?Mark_ScriptStringCustom@@YAXPEAW4scr_string_t@@@Z(var);
}

/*
==============
Load_ScriptStringCustom
==============
*/

void __fastcall Load_ScriptStringCustom(scr_string_t *var)
{
  ?Load_ScriptStringCustom@@YAXPEAW4scr_string_t@@@Z(var);
}

/*
==============
Load_ScriptStringCustom
==============
*/
void Load_ScriptStringCustom(scr_string_t *var)
{
  __int64 v2; 
  const char *v3; 
  __int64 v4; 

  if ( !var && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stringtable_load.cpp", 10, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v2 = *(int *)var;
  if ( (unsigned int)v2 >= varXAssetList->stringList.count )
  {
    SLODWORD(v4) = *var;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stringtable_load.cpp", 13, ASSERT_TYPE_ASSERT, "(unsigned)( deref ) < (unsigned)( varXAssetList->stringList.count )", "deref doesn't index varXAssetList->stringList.count\n\t%i not in [0, %i)", v4, varXAssetList->stringList.count) )
      __debugbreak();
  }
  v3 = varXAssetList->stringList.strings[v2];
  if ( (const char *)(unsigned int)v3 != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_stringtable_load.h", 22, ASSERT_TYPE_SANITY, "( ( stringValue & SCRIPTSTRING_MASK ) == stringValue )", (const char *)&queryFormat, "( stringValue & SCRIPTSTRING_MASK ) == stringValue") )
    __debugbreak();
  *var = (int)v3;
}

/*
==============
Mark_ScriptStringCustom
==============
*/
void Mark_ScriptStringCustom(scr_string_t *var)
{
  scr_string_t v1; 

  v1 = *var;
  if ( v1 )
    j_SL_AddUser(v1, 4u);
}

