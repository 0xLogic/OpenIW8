/*
==============
G_ExampleSystemFunctions_OnShutdownGameMemory
==============
*/

void G_ExampleSystemFunctions_OnShutdownGameMemory(void)
{
  ?G_ExampleSystemFunctions_OnShutdownGameMemory@@YAXXZ();
}

/*
==============
G_ExampleSystemFunctions_OnAllocate
==============
*/

void __fastcall G_ExampleSystemFunctions_OnAllocate(HunkUser *hunkUser)
{
  ?G_ExampleSystemFunctions_OnAllocate@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_ExampleSystemFunctions_OnSave
==============
*/

void __fastcall G_ExampleSystemFunctions_OnSave(bool savegame, MemoryFile *memFile)
{
  ?G_ExampleSystemFunctions_OnSave@@YAX_NPEAUMemoryFile@@@Z(savegame, memFile);
}

/*
==============
G_ExampleSystemFunctions_OnLoad
==============
*/

void __fastcall G_ExampleSystemFunctions_OnLoad(MemoryFile *memFile)
{
  ?G_ExampleSystemFunctions_OnLoad@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_ExampleSystemFunctions_GetAllocationSize
==============
*/

unsigned int __fastcall G_ExampleSystemFunctions_GetAllocationSize()
{
  return ?G_ExampleSystemFunctions_GetAllocationSize@@YAIXZ();
}

/*
==============
G_ExampleSystemFunctions_GetAllocationSize
==============
*/
__int64 G_ExampleSystemFunctions_GetAllocationSize()
{
  return 8i64;
}

/*
==============
G_ExampleSystemFunctions_OnAllocate
==============
*/
void G_ExampleSystemFunctions_OnAllocate(HunkUser *hunkUser)
{
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\game\\g_example_system_functions.cpp", 31, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  g_exampleSystemFunctions_Global = Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 4ui64, "G_ExampleSystemFunctions_OnAllocate");
  *(_QWORD *)g_exampleSystemFunctions_Global = 0i64;
}

/*
==============
G_ExampleSystemFunctions_OnLoad
==============
*/
void G_ExampleSystemFunctions_OnLoad(MemoryFile *memFile)
{
  ;
}

/*
==============
G_ExampleSystemFunctions_OnSave
==============
*/
void G_ExampleSystemFunctions_OnSave(bool savegame, MemoryFile *memFile)
{
  ;
}

/*
==============
G_ExampleSystemFunctions_OnShutdownGameMemory
==============
*/
void G_ExampleSystemFunctions_OnShutdownGameMemory(void)
{
  if ( g_exampleSystemFunctions_Global )
  {
    DebugWipe(g_exampleSystemFunctions_Global, 8ui64);
    g_exampleSystemFunctions_Global = NULL;
  }
}

