/*
==============
CgHandler::GetPlayerTeam
==============
*/

int __fastcall CgHandler::GetPlayerTeam(CgHandler *this, int entIndex, team_t *outTeam)
{
  return ?GetPlayerTeam@CgHandler@@QEBAHHPEAW4team_t@@@Z(this, entIndex, outTeam);
}

/*
==============
CgHandler::GetPlayerTeam
==============
*/
_BOOL8 CgHandler::GetPlayerTeam(CgHandler *this, int entIndex, team_t *outTeam)
{
  __int64 v3; 
  __int64 m_localClientNum; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  __int64 v10; 
  __int64 v11; 

  v3 = entIndex;
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.h", 69, ASSERT_TYPE_ASSERT, "(outTeam)", (const char *)&queryFormat, "outTeam") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v11 = CgStatic::ms_allocatedCount;
    LODWORD(v10) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[m_localClientNum] )
  {
    LODWORD(v11) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v11) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[m_localClientNum]->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v11) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
  }
  if ( CharacterInfo )
    *outTeam = CharacterInfo->team;
  return CharacterInfo != NULL;
}

