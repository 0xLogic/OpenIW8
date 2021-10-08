/*
==============
SvGameGlobalsMP::GetSvGameGlobalsMP
==============
*/

SvGameGlobalsMP *__fastcall SvGameGlobalsMP::GetSvGameGlobalsMP()
{
  return ?GetSvGameGlobalsMP@SvGameGlobalsMP@@SAPEAV1@XZ();
}

/*
==============
SvGameGlobalsMP::SvGameGlobalsMP
==============
*/

void __fastcall SvGameGlobalsMP::SvGameGlobalsMP(SvGameGlobalsMP *this)
{
  ??0SvGameGlobalsMP@@QEAA@XZ(this);
}

/*
==============
SvGameGlobalsMP::GetSvGameGlobalsMP
==============
*/
SvGameGlobalsMP *SvGameGlobalsMP::GetSvGameGlobalsMP()
{
  char v0; 
  SvGameGlobalsMP *result; 
  int v2; 

  v0 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v2 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v2) )
      __debugbreak();
    v0 = SvGameGlobals::ms_allocatedType;
  }
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  result = (SvGameGlobalsMP *)SvGameGlobals::ms_svGameGlobals;
  if ( !SvGameGlobals::ms_svGameGlobals )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
      __debugbreak();
    return (SvGameGlobalsMP *)SvGameGlobals::ms_svGameGlobals;
  }
  return result;
}

/*
==============
SvGameGlobalsMP::SvGameGlobalsMP
==============
*/
void SvGameGlobalsMP::SvGameGlobalsMP(SvGameGlobalsMP *this)
{
  this->m_configstringsCount = 766;
  this->configstrings = this->m_configstringsMP;
  if ( this == (SvGameGlobalsMP *)-30372i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 91, ASSERT_TYPE_ASSERT, "(configstrings != nullptr)", "%s\n\tCreating SvGameGlobals with no ConfigString memory", "configstrings != nullptr") )
    __debugbreak();
}

