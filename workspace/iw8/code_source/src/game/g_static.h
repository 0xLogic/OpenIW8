/*
==============
GStatic::FreeMemory<GStaticMP>
==============
*/

__int64 GStatic::FreeMemory<GStaticMP>()
{
  return ??$FreeMemory@VGStaticMP@@@GStatic@@SAXXZ();
}

/*
==============
GStatic::FreeMemory<GStaticSP>
==============
*/

__int64 GStatic::FreeMemory<GStaticSP>()
{
  return ??$FreeMemory@VGStaticSP@@@GStatic@@SAXXZ();
}

/*
==============
GStatic::~GStatic
==============
*/

void __fastcall GStatic::~GStatic(GStatic *this)
{
  ??1GStatic@@UEAA@XZ(this);
}

/*
==============
GStatic::ClearActiveStatics
==============
*/

void GStatic::ClearActiveStatics(void)
{
  ?ClearActiveStatics@GStatic@@SAXXZ();
}

/*
==============
GStatic::SetActiveStatics
==============
*/

void GStatic::SetActiveStatics(void)
{
  ?SetActiveStatics@GStatic@@SAXXZ();
}

/*
==============
GStatic::GetGameStatics
==============
*/

GStatic *__fastcall GStatic::GetGameStatics()
{
  return ?GetGameStatics@GStatic@@SAPEAV1@XZ();
}

/*
==============
GStatic::~GStatic
==============
*/
void GStatic::~GStatic(GStatic *this)
{
  this->__vftable = (GStatic_vtbl *)&GStatic::`vftable';
  BgStatic::~BgStatic(this);
}

/*
==============
GStatic::GetGameStatics
==============
*/
GStatic *GStatic::GetGameStatics()
{
  GStatic *result; 

  result = *(GStatic **)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    return *(GStatic **)&GStatic::ms_gameStatics;
  }
  return result;
}

/*
==============
GStatic::ClearActiveStatics
==============
*/
void GStatic::ClearActiveStatics(void)
{
  __int64 v0; 

  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v0 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v0 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
}

/*
==============
GStatic::SetActiveStatics
==============
*/
void GStatic::SetActiveStatics(void)
{
  __int64 v0; 

  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v0 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", *(const void **)(v0 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
}

/*
==============
GStatic::FreeMemory<GStaticMP>
==============
*/
void GStatic::FreeMemory<GStaticMP>()
{
  char v0; 
  void (__fastcall ***v1)(_QWORD, _QWORD); 
  __int64 v2; 

  v0 = GStatic::ms_allocatedType;
  if ( (_BYTE)GStatic::ms_allocatedType )
  {
    if ( (_BYTE)GStatic::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 78, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GStatic::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = *(_QWORD *)&GStatic::ms_gameStatics;
    goto LABEL_13;
  }
LABEL_7:
  v1 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", GStatic::ms_gameStatics + 82, GStatic::ms_gameStatics, "(ms_gameStatics != 0)", "%s\n\tGStatic::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gameStatics != NULL") )
      __debugbreak();
    v1 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  }
  v2 = 0i64;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  (**v1)(v1, 0i64);
  DebugWipe(*(void **)&GStatic::ms_gameStatics, 0x4C80ui64);
  *(_QWORD *)&GStatic::ms_gameStatics = 0i64;
LABEL_13:
  LOBYTE(GStatic::ms_allocatedType) = 0;
  if ( v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 97, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
      __debugbreak();
  }
}

/*
==============
GStatic::FreeMemory<GStaticSP>
==============
*/
void GStatic::FreeMemory<GStaticSP>()
{
  char v0; 
  void (__fastcall ***v1)(_QWORD, _QWORD); 
  __int64 v2; 

  v0 = GStatic::ms_allocatedType;
  if ( (_BYTE)GStatic::ms_allocatedType )
  {
    if ( (_BYTE)GStatic::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 78, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GStatic::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = *(_QWORD *)&GStatic::ms_gameStatics;
    goto LABEL_13;
  }
LABEL_7:
  v1 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", GStatic::ms_gameStatics + 82, GStatic::ms_gameStatics, "(ms_gameStatics != 0)", "%s\n\tGStatic::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gameStatics != NULL") )
      __debugbreak();
    v1 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  }
  v2 = 0i64;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  (**v1)(v1, 0i64);
  DebugWipe(*(void **)&GStatic::ms_gameStatics, 0x8708ui64);
  *(_QWORD *)&GStatic::ms_gameStatics = 0i64;
LABEL_13:
  LOBYTE(GStatic::ms_allocatedType) = 0;
  if ( v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 97, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
      __debugbreak();
  }
}

