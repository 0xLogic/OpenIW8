/*
==============
CG_GetCharacterInfo
==============
*/

const characterInfo_t *__fastcall CG_GetCharacterInfo(const cg_t *cgGlobals, const int characterIndex)
{
  return ?CG_GetCharacterInfo@@YAPEBUcharacterInfo_t@@PEBVcg_t@@H@Z(cgGlobals, characterIndex);
}

/*
==============
cg_t::TryGetCharacterInfo
==============
*/

characterInfo_t *__fastcall cg_t::TryGetCharacterInfo(cg_t *this, const int entNum)
{
  return ?TryGetCharacterInfo@cg_t@@QEAAPEAUcharacterInfo_t@@H@Z(this, entNum);
}

/*
==============
CG_GetCharacterInfo
==============
*/

characterInfo_t *__fastcall CG_GetCharacterInfo(cg_t *cgGlobals, const int characterIndex)
{
  return ?CG_GetCharacterInfo@@YAPEAUcharacterInfo_t@@PEAVcg_t@@H@Z(cgGlobals, characterIndex);
}

/*
==============
cg_t::TryGetCharacterInfo
==============
*/

const characterInfo_t *__fastcall cg_t::TryGetCharacterInfo(cg_t *this, const int entNum)
{
  return ?TryGetCharacterInfo@cg_t@@QEBAPEBUcharacterInfo_t@@H@Z(this, entNum);
}

/*
==============
CG_GetCharacterInfo
==============
*/
const characterInfo_t *CG_GetCharacterInfo(const cg_t *cgGlobals, const int characterIndex)
{
  __int64 v3; 
  int v5; 
  unsigned int timeModified; 

  v3 = characterIndex;
  if ( !cgGlobals->IsMP((cg_t *)cgGlobals) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)cgGlobals, v3);
  if ( (unsigned int)v3 >= cgGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    timeModified = cgGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v5, timeModified) )
      __debugbreak();
  }
  return (const characterInfo_t *)(*(_QWORD *)&cgGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
}

/*
==============
CG_GetCharacterInfo
==============
*/
characterInfo_t *CG_GetCharacterInfo(cg_t *cgGlobals, const int characterIndex)
{
  __int64 v3; 
  int v5; 
  unsigned int timeModified; 

  v3 = characterIndex;
  if ( !cgGlobals->IsMP(cgGlobals) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)cgGlobals, v3);
  if ( (unsigned int)v3 >= cgGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    timeModified = cgGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v5, timeModified) )
      __debugbreak();
  }
  return (characterInfo_t *)(*(_QWORD *)&cgGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
}

/*
==============
cg_t::TryGetCharacterInfo
==============
*/
characterInfo_t *cg_t::TryGetCharacterInfo(cg_t *this, const int entNum)
{
  __int64 v3; 
  int v5; 
  unsigned int timeModified; 

  v3 = entNum;
  if ( !this->HasCharacterInfo(this, entNum) )
    return 0i64;
  if ( !this->IsMP(this) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)this, v3);
  if ( (unsigned int)v3 >= this[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    timeModified = this[1].predictedPlayerState.rxvOmnvars[64].timeModified;
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v5, timeModified) )
      __debugbreak();
  }
  return (characterInfo_t *)(*(_QWORD *)&this[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
}

/*
==============
cg_t::TryGetCharacterInfo
==============
*/
const characterInfo_t *cg_t::TryGetCharacterInfo(cg_t *this, const int entNum)
{
  __int64 v3; 
  int v5; 
  unsigned int timeModified; 

  v3 = entNum;
  if ( !this->HasCharacterInfo(this, entNum) )
    return 0i64;
  if ( !this->IsMP(this) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)this, v3);
  if ( (unsigned int)v3 >= this[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    timeModified = this[1].predictedPlayerState.rxvOmnvars[64].timeModified;
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v5, timeModified) )
      __debugbreak();
  }
  return (const characterInfo_t *)(*(_QWORD *)&this[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
}

