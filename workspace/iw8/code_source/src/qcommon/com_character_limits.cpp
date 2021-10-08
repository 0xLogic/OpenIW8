/*
==============
ComCharacterLimits::ValidateGameLimits
==============
*/

void __fastcall ComCharacterLimits::ValidateGameLimits(const unsigned int clientCount, const unsigned int agentCount, const unsigned int clientCorpseCount, const unsigned int agentCorpseCount)
{
  ?ValidateGameLimits@ComCharacterLimits@@SAXIIII@Z(clientCount, agentCount, clientCorpseCount, agentCorpseCount);
}

/*
==============
ComCharacterLimits::UpdateGameLimits
==============
*/

void __fastcall ComCharacterLimits::UpdateGameLimits(const unsigned int clientCount, const unsigned int agentCount, const unsigned int clientCorpseCount, const unsigned int agentCorpseCount)
{
  ?UpdateGameLimits@ComCharacterLimits@@SAXIIII@Z(clientCount, agentCount, clientCorpseCount, agentCorpseCount);
}

/*
==============
ComCharacterLimits::SetModeLimits
==============
*/

void __fastcall ComCharacterLimits::SetModeLimits(const unsigned int clientMaxCount)
{
  ?SetModeLimits@ComCharacterLimits@@SAXI@Z(clientMaxCount);
}

/*
==============
ComCharacterLimits::ClearGameLimits
==============
*/

void ComCharacterLimits::ClearGameLimits(void)
{
  ?ClearGameLimits@ComCharacterLimits@@SAXXZ();
}

/*
==============
ComCharacterLimits::ClearGameLimits
==============
*/
void ComCharacterLimits::ClearGameLimits(void)
{
  *(_QWORD *)&ComCharacterLimits::ms_gameData.m_clientBits = 0i64;
  *(_QWORD *)&ComCharacterLimits::ms_gameData.m_agentBits = 0i64;
  *(_QWORD *)&ComCharacterLimits::ms_gameData.m_characterBits = 0i64;
  *(_QWORD *)&ComCharacterLimits::ms_gameData.m_clientCorpseCount = 0i64;
  ComCharacterLimits::ms_gameData.m_staticEntityCount = 0;
  ComCharacterLimits::ms_isGameDataValid = 0;
}

/*
==============
ComCharacterLimits::SetModeLimits
==============
*/
void ComCharacterLimits::SetModeLimits(const unsigned int clientMaxCount)
{
  ComCharacterLimits::ms_modeData.m_clientMaxCount = clientMaxCount;
}

/*
==============
ComCharacterLimits::UpdateGameLimits
==============
*/
void ComCharacterLimits::UpdateGameLimits(const unsigned int clientCount, const unsigned int agentCount, const unsigned int clientCorpseCount, const unsigned int agentCorpseCount)
{
  unsigned int v4; 
  unsigned int MinBitCountForNum; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 

  v4 = 1;
  ComCharacterLimits::ms_gameData.m_clientCount = clientCount;
  if ( clientCount <= 1 )
  {
    ComCharacterLimits::ms_gameData.m_clientBits = 1;
  }
  else
  {
    MinBitCountForNum = GetMinBitCountForNum(clientCount - 1);
    ComCharacterLimits::ms_gameData.m_clientBits = MinBitCountForNum;
    if ( MinBitCountForNum > 8 )
    {
      v15 = 8;
      v13 = MinBitCountForNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 29, ASSERT_TYPE_ASSERT, "( ms_gameData.m_clientBits ) <= ( 8 )", "%s <= %s\n\t%i, %i", "ms_gameData.m_clientBits", "CLIENT_BITS_STATIC_MAX", v13, v15) )
        __debugbreak();
    }
  }
  v10 = agentCount + clientCount;
  ComCharacterLimits::ms_gameData.m_agentCount = agentCount;
  if ( v10 <= 1 )
  {
    ComCharacterLimits::ms_gameData.m_agentBits = 1;
  }
  else
  {
    v11 = GetMinBitCountForNum(v10 - 1);
    ComCharacterLimits::ms_gameData.m_agentBits = v11;
    if ( v11 > 8 )
    {
      LODWORD(v14) = 8;
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 33, ASSERT_TYPE_ASSERT, "( ms_gameData.m_agentBits ) <= ( 8 )", "%s <= %s\n\t%i, %i", "ms_gameData.m_agentBits", "AGENT_BITS_STATIC_MAX", v12, v14) )
        __debugbreak();
    }
  }
  if ( v10 <= 1 )
  {
    ComCharacterLimits::ms_gameData.m_characterBits = 1;
  }
  else
  {
    v4 = GetMinBitCountForNum(v10);
    ComCharacterLimits::ms_gameData.m_characterBits = v4;
  }
  ComCharacterLimits::ms_gameData.m_characterCount = v10;
  if ( v4 > 8 )
  {
    LODWORD(v14) = 8;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 38, ASSERT_TYPE_ASSERT, "( ms_gameData.m_characterBits ) <= ( 8 )", "%s <= %s\n\t%i, %i", "ms_gameData.m_characterBits", "CHARACTER_BITS_STATIC_MAX", v12, v14) )
      __debugbreak();
  }
  ComCharacterLimits::ms_gameData.m_clientCorpseCount = clientCorpseCount;
  ComCharacterLimits::ms_gameData.m_agentCorpseCount = agentCorpseCount;
  ComCharacterLimits::ms_gameData.m_staticEntityCount = agentCorpseCount + clientCorpseCount + ComCharacterLimits::ms_gameData.m_characterCount;
  if ( ComCharacterLimits::ms_gameData.m_staticEntityCount > 0x7FE )
  {
    LODWORD(v14) = 2046;
    LODWORD(v12) = agentCorpseCount + clientCorpseCount + ComCharacterLimits::ms_gameData.m_characterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 45, ASSERT_TYPE_ASSERT, "( ms_gameData.m_staticEntityCount ) <= ( ENTITYNUM_ORDINARY_END )", "%s <= %s\n\t%i, %i", "ms_gameData.m_staticEntityCount", "ENTITYNUM_ORDINARY_END", v12, v14) )
      __debugbreak();
  }
  ComCharacterLimits::ms_isGameDataValid = 1;
}

/*
==============
ComCharacterLimits::ValidateGameLimits
==============
*/
void ComCharacterLimits::ValidateGameLimits(const unsigned int clientCount, const unsigned int agentCount, const unsigned int clientCorpseCount, const unsigned int agentCorpseCount)
{
  unsigned int m_characterCount; 
  __int64 v9; 
  unsigned int m_clientCount; 
  __int64 v11; 
  unsigned int v12; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 56, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( ComCharacterLimits::ms_gameData.m_clientCount != clientCount )
  {
    v12 = clientCount;
    m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 57, ASSERT_TYPE_ASSERT, "( ms_gameData.m_clientCount ) == ( clientCount )", "%s == %s\n\t%i, %i", "ms_gameData.m_clientCount", "clientCount", m_clientCount, v12) )
      __debugbreak();
  }
  if ( ComCharacterLimits::ms_gameData.m_agentCount != agentCount )
  {
    LODWORD(v11) = agentCount;
    LODWORD(v9) = ComCharacterLimits::ms_gameData.m_agentCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 58, ASSERT_TYPE_ASSERT, "( ms_gameData.m_agentCount ) == ( agentCount )", "%s == %s\n\t%i, %i", "ms_gameData.m_agentCount", "agentCount", v9, v11) )
      __debugbreak();
  }
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  if ( ComCharacterLimits::ms_gameData.m_characterCount != clientCount + agentCount )
  {
    LODWORD(v11) = clientCount + agentCount;
    LODWORD(v9) = ComCharacterLimits::ms_gameData.m_characterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 59, ASSERT_TYPE_ASSERT, "( ms_gameData.m_characterCount ) == ( clientCount + agentCount )", "%s == %s\n\t%i, %i", "ms_gameData.m_characterCount", "clientCount + agentCount", v9, v11) )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  }
  if ( ComCharacterLimits::ms_gameData.m_staticEntityCount != agentCorpseCount + clientCorpseCount + m_characterCount )
  {
    LODWORD(v11) = agentCorpseCount + clientCorpseCount + m_characterCount;
    LODWORD(v9) = ComCharacterLimits::ms_gameData.m_staticEntityCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.cpp", 60, ASSERT_TYPE_ASSERT, "( ms_gameData.m_staticEntityCount ) == ( ms_gameData.m_characterCount + clientCorpseCount + agentCorpseCount )", "%s == %s\n\t%i, %i", "ms_gameData.m_staticEntityCount", "ms_gameData.m_characterCount + clientCorpseCount + agentCorpseCount", v9, v11) )
      __debugbreak();
  }
}

