/*
==============
CG_ExampleSystemFunctions_OnAllocate
==============
*/

void __fastcall CG_ExampleSystemFunctions_OnAllocate(HunkUser *hunkUser, const int maxLocalClients)
{
  ?CG_ExampleSystemFunctions_OnAllocate@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_ExampleSystemFunctions_OnShutdownGameMemory
==============
*/

void CG_ExampleSystemFunctions_OnShutdownGameMemory(void)
{
  ?CG_ExampleSystemFunctions_OnShutdownGameMemory@@YAXXZ();
}

/*
==============
CG_ExampleSystemFunctions_OnAllocate
==============
*/
void CG_ExampleSystemFunctions_OnAllocate(HunkUser *hunkUser, const int maxLocalClients)
{
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\cgame\\cg_example_system_functions.cpp", 31, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  g_cgExampleSystemFunctions_Global = Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 4ui64, "CG_ExampleSystemFunctions_OnAllocate");
  *(_QWORD *)g_cgExampleSystemFunctions_Global = 0i64;
}

/*
==============
CG_ExampleSystemFunctions_OnShutdownGameMemory
==============
*/
void CG_ExampleSystemFunctions_OnShutdownGameMemory(void)
{
  if ( g_cgExampleSystemFunctions_Global )
  {
    DebugWipe(g_cgExampleSystemFunctions_Global, 8ui64);
    g_cgExampleSystemFunctions_Global = NULL;
  }
}

