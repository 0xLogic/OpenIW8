/*
==============
GScript::~GScript
==============
*/

void __fastcall GScript::~GScript(GScript *this)
{
  ??1GScript@@UEAA@XZ(this);
}

/*
==============
GScript::GetMemorySize<GScriptMP>
==============
*/

unsigned int __fastcall GScript::GetMemorySize<GScriptMP>()
{
  return ??$GetMemorySize@VGScriptMP@@@GScript@@SAIXZ();
}

/*
==============
GScript::FreeMemory<GScriptMP>
==============
*/

__int64 GScript::FreeMemory<GScriptMP>()
{
  return ??$FreeMemory@VGScriptMP@@@GScript@@SAXXZ();
}

/*
==============
GScript::AllocateMemory<GScriptSP>
==============
*/

void __fastcall GScript::AllocateMemory<GScriptSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGScriptSP@@@GScript@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GScript::GetMemorySize<GScriptSP>
==============
*/

unsigned int __fastcall GScript::GetMemorySize<GScriptSP>()
{
  return ??$GetMemorySize@VGScriptSP@@@GScript@@SAIXZ();
}

/*
==============
GScript::FreeMemory<GScriptSP>
==============
*/

__int64 GScript::FreeMemory<GScriptSP>()
{
  return ??$FreeMemory@VGScriptSP@@@GScript@@SAXXZ();
}

/*
==============
GScript::AllocateMemory<GScriptMP>
==============
*/

void __fastcall GScript::AllocateMemory<GScriptMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGScriptMP@@@GScript@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GScript::AllocateMemory<GScriptMP>
==============
*/
void GScript::AllocateMemory<GScriptMP>(HunkUser *hunkUser)
{
  GScript *v2; 

  if ( (_BYTE)GScript::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 201, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 202, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v2 = (GScript *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GScript::AllocateMemory");
  v2->__vftable = (GScript_vtbl *)&GScriptMP::`vftable';
  GScript::ms_gScriptSystem = v2;
  LOBYTE(GScript::ms_allocatedType) = 2;
}

/*
==============
GScript::FreeMemory<GScriptMP>
==============
*/
char GScript::FreeMemory<GScriptMP>()
{
  char v0; 
  GScript *v1; 
  GScript *v2; 

  v0 = GScript::ms_allocatedType;
  if ( (_BYTE)GScript::ms_allocatedType )
  {
    if ( (_BYTE)GScript::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 217, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GScript::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GScript::ms_gScriptSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GScript::ms_gScriptSystem;
  if ( !GScript::ms_gScriptSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 221, ASSERT_TYPE_ASSERT, "(ms_gScriptSystem != 0)", "%s\n\tGScript::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptSystem != NULL") )
      __debugbreak();
    v1 = GScript::ms_gScriptSystem;
  }
  ((void (__fastcall *)(GScript *, _QWORD))v1->~GScript)(v1, 0i64);
  DebugWipe(GScript::ms_gScriptSystem, 8ui64);
  v2 = NULL;
  GScript::ms_gScriptSystem = NULL;
LABEL_13:
  LOBYTE(GScript::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 233, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GScript::GetMemorySize<GScriptMP>
==============
*/
__int64 GScript::GetMemorySize<GScriptMP>()
{
  return 8i64;
}

/*
==============
GScript::~GScript
==============
*/
void GScript::~GScript(GScript *this)
{
  this->__vftable = (GScript_vtbl *)&GScript::`vftable';
}

/*
==============
GScript::AllocateMemory<GScriptSP>
==============
*/
void GScript::AllocateMemory<GScriptSP>(HunkUser *hunkUser)
{
  GScript *v2; 

  if ( (_BYTE)GScript::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 201, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 202, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v2 = (GScript *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GScript::AllocateMemory");
  v2->__vftable = (GScript_vtbl *)&GScriptSP::`vftable';
  GScript::ms_gScriptSystem = v2;
  LOBYTE(GScript::ms_allocatedType) = 1;
}

/*
==============
GScript::FreeMemory<GScriptSP>
==============
*/
char GScript::FreeMemory<GScriptSP>()
{
  char v0; 
  GScript *v1; 
  GScript *v2; 

  v0 = GScript::ms_allocatedType;
  if ( (_BYTE)GScript::ms_allocatedType )
  {
    if ( (_BYTE)GScript::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 217, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GScript::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GScript::ms_gScriptSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GScript::ms_gScriptSystem;
  if ( !GScript::ms_gScriptSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 221, ASSERT_TYPE_ASSERT, "(ms_gScriptSystem != 0)", "%s\n\tGScript::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptSystem != NULL") )
      __debugbreak();
    v1 = GScript::ms_gScriptSystem;
  }
  ((void (__fastcall *)(GScript *, _QWORD))v1->~GScript)(v1, 0i64);
  DebugWipe(GScript::ms_gScriptSystem, 8ui64);
  v2 = NULL;
  GScript::ms_gScriptSystem = NULL;
LABEL_13:
  LOBYTE(GScript::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 233, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GScript::GetMemorySize<GScriptSP>
==============
*/
__int64 GScript::GetMemorySize<GScriptSP>()
{
  return 8i64;
}

