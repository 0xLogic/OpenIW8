/*
==============
Execution_Register
==============
*/

ExecutionDef *__fastcall Execution_Register(const char *name)
{
  return ?Execution_Register@@YAPEAUExecutionDef@@PEBD@Z(name);
}

/*
==============
Execution_Register
==============
*/
ExecutionDef *Execution_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution_load_obj.cpp", 383, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_execution_load_obj.cpp", 370, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_EXECUTION, name, 1).executionDef;
}

