/*
==============
GSave::FreeMemory<GSaveSP>
==============
*/

__int64 GSave::FreeMemory<GSaveSP>()
{
  return ??$FreeMemory@VGSaveSP@@@GSave@@SAXXZ();
}

/*
==============
GSave::AllocateMemory<GSaveMP>
==============
*/

void __fastcall GSave::AllocateMemory<GSaveMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGSaveMP@@@GSave@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GSave::AllocateMemory<GSaveSP>
==============
*/

void __fastcall GSave::AllocateMemory<GSaveSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGSaveSP@@@GSave@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GSave::GetMemorySize<GSaveSP>
==============
*/

unsigned int __fastcall GSave::GetMemorySize<GSaveSP>()
{
  return ??$GetMemorySize@VGSaveSP@@@GSave@@SAIXZ();
}

/*
==============
GSave::~GSave
==============
*/

void __fastcall GSave::~GSave(GSave *this)
{
  ??1GSave@@UEAA@XZ(this);
}

/*
==============
GSave::GetWeaponNameSize
==============
*/

unsigned int __fastcall GSave::GetWeaponNameSize()
{
  return ?GetWeaponNameSize@GSave@@SAIXZ();
}

/*
==============
GSave::GetMemorySize<GSaveMP>
==============
*/

unsigned int __fastcall GSave::GetMemorySize<GSaveMP>()
{
  return ??$GetMemorySize@VGSaveMP@@@GSave@@SAIXZ();
}

/*
==============
GSave::FreeMemory<GSaveMP>
==============
*/

__int64 GSave::FreeMemory<GSaveMP>()
{
  return ??$FreeMemory@VGSaveMP@@@GSave@@SAXXZ();
}

/*
==============
GSave::AllocateMemory<GSaveMP>
==============
*/
void GSave::AllocateMemory<GSaveMP>(HunkUser *hunkUser)
{
  GSave *v2; 

  if ( BYTE2(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 101, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v2 = (GSave *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GSave::AllocateMemory");
  v2->__vftable = (GSave_vtbl *)&GSaveMP::`vftable';
  GSave::ms_gSave = v2;
  GSave::ms_weaponNameSize = 512;
  BYTE2(GameScriptData::ms_allocatedType) = 2;
}

/*
==============
GSave::FreeMemory<GSaveMP>
==============
*/
char GSave::FreeMemory<GSaveMP>()
{
  char v0; 
  GSave *v1; 
  GSave *v2; 

  v0 = BYTE2(GameScriptData::ms_allocatedType);
  if ( BYTE2(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE2(GameScriptData::ms_allocatedType) == 2 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 120, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE2(GameScriptData::ms_allocatedType);
  }
  if ( v0 != 2 )
  {
    v2 = GSave::ms_gSave;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GSave::ms_gSave;
  if ( !GSave::ms_gSave )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", (_DWORD)GSave::ms_gSave + 124, ASSERT_TYPE_ASSERT, "(ms_gSave != 0)", "%s\n\tGSave::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSave != NULL") )
      __debugbreak();
    v1 = GSave::ms_gSave;
  }
  ((void (__fastcall *)(GSave *, _QWORD))v1->~GSave)(v1, 0i64);
  DebugWipe(GSave::ms_gSave, 8ui64);
  v2 = NULL;
  GSave::ms_gSave = NULL;
LABEL_13:
  GSave::ms_weaponNameSize = 0;
  BYTE2(GameScriptData::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 140, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GSave::GetMemorySize<GSaveMP>
==============
*/
__int64 GSave::GetMemorySize<GSaveMP>()
{
  return 8i64;
}

/*
==============
GSave::~GSave
==============
*/
void GSave::~GSave(GSave *this)
{
  this->__vftable = (GSave_vtbl *)&GSave::`vftable';
}

/*
==============
GSave::GetWeaponNameSize
==============
*/
__int64 GSave::GetWeaponNameSize()
{
  __int64 result; 

  result = GSave::ms_weaponNameSize;
  if ( !GSave::ms_weaponNameSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
      __debugbreak();
    return GSave::ms_weaponNameSize;
  }
  return result;
}

/*
==============
GSave::AllocateMemory<GSaveSP>
==============
*/
void GSave::AllocateMemory<GSaveSP>(HunkUser *hunkUser)
{
  GSave *v2; 

  if ( BYTE2(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 101, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v2 = (GSave *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GSave::AllocateMemory");
  v2->__vftable = (GSave_vtbl *)&GSaveSP::`vftable';
  GSave::ms_gSave = v2;
  GSave::ms_weaponNameSize = 256;
  BYTE2(GameScriptData::ms_allocatedType) = 1;
}

/*
==============
GSave::FreeMemory<GSaveSP>
==============
*/
char GSave::FreeMemory<GSaveSP>()
{
  char v0; 
  GSave *v1; 
  GSave *v2; 

  v0 = BYTE2(GameScriptData::ms_allocatedType);
  if ( BYTE2(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE2(GameScriptData::ms_allocatedType) == 1 )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 120, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = BYTE2(GameScriptData::ms_allocatedType);
  }
  if ( v0 != 1 )
  {
    v2 = GSave::ms_gSave;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GSave::ms_gSave;
  if ( !GSave::ms_gSave )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", (_DWORD)GSave::ms_gSave + 124, ASSERT_TYPE_ASSERT, "(ms_gSave != 0)", "%s\n\tGSave::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSave != NULL") )
      __debugbreak();
    v1 = GSave::ms_gSave;
  }
  ((void (__fastcall *)(GSave *, _QWORD))v1->~GSave)(v1, 0i64);
  DebugWipe(GSave::ms_gSave, 8ui64);
  v2 = NULL;
  GSave::ms_gSave = NULL;
LABEL_13:
  GSave::ms_weaponNameSize = 0;
  BYTE2(GameScriptData::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 140, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GSave::GetMemorySize<GSaveSP>
==============
*/
__int64 GSave::GetMemorySize<GSaveSP>()
{
  return 8i64;
}

