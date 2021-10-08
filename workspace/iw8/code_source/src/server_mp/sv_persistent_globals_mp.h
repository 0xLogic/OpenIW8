/*
==============
SvPersistentGlobalsMP::IsFrontEndServer
==============
*/

bool __fastcall SvPersistentGlobalsMP::IsFrontEndServer()
{
  return ?IsFrontEndServer@SvPersistentGlobalsMP@@SA_NXZ();
}

/*
==============
SvPersistentGlobalsMP::GetPersistentGlobalsMP
==============
*/

SvPersistentGlobalsMP *__fastcall SvPersistentGlobalsMP::GetPersistentGlobalsMP()
{
  return ?GetPersistentGlobalsMP@SvPersistentGlobalsMP@@SAPEAV1@XZ();
}

/*
==============
SvPersistentGlobalsMP::GetPersistentGlobalsMP
==============
*/
SvPersistentGlobals *SvPersistentGlobalsMP::GetPersistentGlobalsMP()
{
  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  return SvPersistentGlobals::ms_svPersistent;
}

/*
==============
SvPersistentGlobalsMP::IsFrontEndServer
==============
*/
bool SvPersistentGlobalsMP::IsFrontEndServer()
{
  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  return BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) != 0;
}

