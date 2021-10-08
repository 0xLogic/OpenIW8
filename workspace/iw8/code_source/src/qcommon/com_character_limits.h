/*
==============
ComCharacterLimits::GetStaticEntitiesMaxCount
==============
*/

unsigned int __fastcall ComCharacterLimits::GetStaticEntitiesMaxCount()
{
  return ?GetStaticEntitiesMaxCount@ComCharacterLimits@@SAIXZ();
}

/*
==============
ComCharacterLimits::GetCharacterBits
==============
*/

unsigned int __fastcall ComCharacterLimits::GetCharacterBits()
{
  return ?GetCharacterBits@ComCharacterLimits@@SAIXZ();
}

/*
==============
ComCharacterLimits::GetClientBits
==============
*/

unsigned int __fastcall ComCharacterLimits::GetClientBits()
{
  return ?GetClientBits@ComCharacterLimits@@SAIXZ();
}

/*
==============
ComCharacterLimits::GetClientMaxCount
==============
*/

int __fastcall ComCharacterLimits::GetClientMaxCount()
{
  return ?GetClientMaxCount@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetClientCorpseMaxCount
==============
*/

int __fastcall ComCharacterLimits::GetClientCorpseMaxCount()
{
  return ?GetClientCorpseMaxCount@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetGameModeClientLimit
==============
*/

unsigned int __fastcall ComCharacterLimits::GetGameModeClientLimit()
{
  return ?GetGameModeClientLimit@ComCharacterLimits@@SAIXZ();
}

/*
==============
ComCharacterLimits::GetAgentCorpseMaxCount
==============
*/

int __fastcall ComCharacterLimits::GetAgentCorpseMaxCount()
{
  return ?GetAgentCorpseMaxCount@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetAgentIndexFromEntityIndex
==============
*/

int __fastcall ComCharacterLimits::GetAgentIndexFromEntityIndex(const int entityIndex)
{
  return ?GetAgentIndexFromEntityIndex@ComCharacterLimits@@SAHH@Z(entityIndex);
}

/*
==============
ComCharacterLimits::GetClientCorpseEntityIndexOffset
==============
*/

int __fastcall ComCharacterLimits::GetClientCorpseEntityIndexOffset()
{
  return ?GetClientCorpseEntityIndexOffset@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetAgentCorpseEntityIndexOffset
==============
*/

int __fastcall ComCharacterLimits::GetAgentCorpseEntityIndexOffset()
{
  return ?GetAgentCorpseEntityIndexOffset@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetAgentBits
==============
*/

unsigned int __fastcall ComCharacterLimits::GetAgentBits()
{
  return ?GetAgentBits@ComCharacterLimits@@SAIXZ();
}

/*
==============
ComCharacterLimits::GetEntityIndexFromAgentIndex
==============
*/

int __fastcall ComCharacterLimits::GetEntityIndexFromAgentIndex(const int agentIndex)
{
  return ?GetEntityIndexFromAgentIndex@ComCharacterLimits@@SAHH@Z(agentIndex);
}

/*
==============
ComCharacterLimits::GetCharacterMaxCount
==============
*/

int __fastcall ComCharacterLimits::GetCharacterMaxCount()
{
  return ?GetCharacterMaxCount@ComCharacterLimits@@SAHXZ();
}

/*
==============
ComCharacterLimits::GetGameModeClientLimit
==============
*/
__int64 ComCharacterLimits::GetGameModeClientLimit()
{
  __int64 result; 

  result = ComCharacterLimits::ms_modeData.m_clientMaxCount;
  if ( !ComCharacterLimits::ms_modeData.m_clientMaxCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 78, ASSERT_TYPE_ASSERT, "(ms_modeData.m_clientMaxCount > 0)", (const char *)&queryFormat, "ms_modeData.m_clientMaxCount > 0") )
      __debugbreak();
    return ComCharacterLimits::ms_modeData.m_clientMaxCount;
  }
  return result;
}

/*
==============
ComCharacterLimits::GetCharacterMaxCount
==============
*/
__int64 ComCharacterLimits::GetCharacterMaxCount()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
ComCharacterLimits::GetClientCorpseEntityIndexOffset
==============
*/
__int64 ComCharacterLimits::GetClientCorpseEntityIndexOffset()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
ComCharacterLimits::GetClientCorpseMaxCount
==============
*/
__int64 ComCharacterLimits::GetClientCorpseMaxCount()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_clientCorpseCount;
}

/*
==============
ComCharacterLimits::GetStaticEntitiesMaxCount
==============
*/
__int64 ComCharacterLimits::GetStaticEntitiesMaxCount()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_staticEntityCount;
}

/*
==============
ComCharacterLimits::GetAgentCorpseMaxCount
==============
*/
__int64 ComCharacterLimits::GetAgentCorpseMaxCount()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_agentCorpseCount;
}

/*
==============
ComCharacterLimits::GetAgentIndexFromEntityIndex
==============
*/
__int64 ComCharacterLimits::GetAgentIndexFromEntityIndex(const int entityIndex)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned int m_clientCount; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entityIndex < (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCount = ComCharacterLimits::ms_gameData.m_clientCount;
    v6 = entityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v6, m_clientCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v2 = entityIndex - ComCharacterLimits::ms_gameData.m_clientCount;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v2 >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v5) = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return v2;
}

/*
==============
ComCharacterLimits::GetClientBits
==============
*/
__int64 ComCharacterLimits::GetClientBits()
{
  __int64 result; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  result = ComCharacterLimits::ms_gameData.m_clientBits;
  if ( !ComCharacterLimits::ms_gameData.m_clientBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
      __debugbreak();
    return ComCharacterLimits::ms_gameData.m_clientBits;
  }
  return result;
}

/*
==============
ComCharacterLimits::GetCharacterBits
==============
*/
__int64 ComCharacterLimits::GetCharacterBits()
{
  __int64 result; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 101, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  result = ComCharacterLimits::ms_gameData.m_characterBits;
  if ( !ComCharacterLimits::ms_gameData.m_characterBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 102, ASSERT_TYPE_ASSERT, "(ms_gameData.m_characterBits > 0)", (const char *)&queryFormat, "ms_gameData.m_characterBits > 0") )
      __debugbreak();
    return ComCharacterLimits::ms_gameData.m_characterBits;
  }
  return result;
}

/*
==============
ComCharacterLimits::GetClientMaxCount
==============
*/
__int64 ComCharacterLimits::GetClientMaxCount()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_clientCount;
}

/*
==============
ComCharacterLimits::GetEntityIndexFromAgentIndex
==============
*/
__int64 ComCharacterLimits::GetEntityIndexFromAgentIndex(const int agentIndex)
{
  __int64 v3; 
  unsigned int m_agentCount; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( agentIndex >= ComCharacterLimits::ms_gameData.m_agentCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_agentCount = ComCharacterLimits::ms_gameData.m_agentCount;
    LODWORD(v3) = agentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v3, m_agentCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return agentIndex + ComCharacterLimits::ms_gameData.m_clientCount;
}

/*
==============
ComCharacterLimits::GetAgentBits
==============
*/
__int64 ComCharacterLimits::GetAgentBits()
{
  __int64 result; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 93, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  result = ComCharacterLimits::ms_gameData.m_agentBits;
  if ( !ComCharacterLimits::ms_gameData.m_agentBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 94, ASSERT_TYPE_ASSERT, "(ms_gameData.m_agentBits > 0)", (const char *)&queryFormat, "ms_gameData.m_agentBits > 0") )
      __debugbreak();
    return ComCharacterLimits::ms_gameData.m_agentBits;
  }
  return result;
}

/*
==============
ComCharacterLimits::GetAgentCorpseEntityIndexOffset
==============
*/
__int64 ComCharacterLimits::GetAgentCorpseEntityIndexOffset()
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return ComCharacterLimits::ms_gameData.m_characterCount + ComCharacterLimits::ms_gameData.m_clientCorpseCount;
}

