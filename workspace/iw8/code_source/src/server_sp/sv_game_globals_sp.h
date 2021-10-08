/*
==============
SvGameGlobalsSP::SvGameGlobalsSP
==============
*/

void __fastcall SvGameGlobalsSP::SvGameGlobalsSP(SvGameGlobalsSP *this)
{
  ??0SvGameGlobalsSP@@QEAA@XZ(this);
}

/*
==============
SvGameGlobalsSP::GetSvGameGlobalsSP
==============
*/

SvGameGlobalsSP *__fastcall SvGameGlobalsSP::GetSvGameGlobalsSP()
{
  return ?GetSvGameGlobalsSP@SvGameGlobalsSP@@SAPEAV1@XZ();
}

/*
==============
SvGameGlobalsSP::GetSvGameGlobalsSP
==============
*/
SvGameGlobalsSP *SvGameGlobalsSP::GetSvGameGlobalsSP()
{
  char v0; 
  SvGameGlobalsSP *result; 
  int v2; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    v2 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v2) )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
  }
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  result = (SvGameGlobalsSP *)SvGameGlobals::ms_svGameGlobals;
  if ( !SvGameGlobals::ms_svGameGlobals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    return (SvGameGlobalsSP *)SvGameGlobals::ms_svGameGlobals;
  }
  return result;
}

/*
==============
SvGameGlobalsSP::SvGameGlobalsSP
==============
*/
void SvGameGlobalsSP::SvGameGlobalsSP(SvGameGlobalsSP *this)
{
  this->m_configstringsCount = 6167;
  this->configstrings = this->m_configstringsSP;
  if ( this == (SvGameGlobalsSP *)-364i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 91, ASSERT_TYPE_ASSERT, "(configstrings != nullptr)", "%s\n\tCreating SvGameGlobals with no ConfigString memory", "configstrings != nullptr") )
    __debugbreak();
}

