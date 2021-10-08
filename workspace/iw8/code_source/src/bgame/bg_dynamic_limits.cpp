/*
==============
BgDynamicLimits::InitGameModeValues
==============
*/

void __fastcall BgDynamicLimits::InitGameModeValues(GameModeType inGameMode)
{
  ?InitGameModeValues@BgDynamicLimits@@SAXW4GameModeType@@@Z(inGameMode);
}

/*
==============
BgDynamicLimits::UpdateDynamicValues
==============
*/

void BgDynamicLimits::UpdateDynamicValues(void)
{
  ?UpdateDynamicValues@BgDynamicLimits@@SAXXZ();
}

/*
==============
BgDynamicLimits::Clear
==============
*/

void BgDynamicLimits::Clear(void)
{
  ?Clear@BgDynamicLimits@@SAXXZ();
}

/*
==============
BgDynamicLimits::IsValidGameMode
==============
*/

bool __fastcall BgDynamicLimits::IsValidGameMode()
{
  return ?IsValidGameMode@BgDynamicLimits@@CA_NXZ();
}

/*
==============
BgDynamicLimits::Clear
==============
*/
void BgDynamicLimits::Clear(void)
{
  *(_QWORD *)&BgDynamicLimits::ms_data.m_effectBits = 0i64;
  *(_QWORD *)&BgDynamicLimits::ms_data.m_esIndexBits = 0i64;
  *(_QWORD *)&BgDynamicLimits::ms_data.m_effectNamesCount = 0i64;
  *(_QWORD *)&BgDynamicLimits::ms_data.m_maxConfigStrings = 0i64;
  BgDynamicLimits::ms_data.m_clientFireEventParamBits = 0;
  LOBYTE(BgDynamicLimits::ms_currentGameMode) = 0;
}

/*
==============
BgDynamicLimits::InitGameModeValues
==============
*/
void BgDynamicLimits::InitGameModeValues(GameModeType inGameMode)
{
  char v1; 

  v1 = inGameMode;
  if ( (unsigned __int8)inGameMode == HALF )
  {
    BgDynamicLimits::InitDynamicValuesSP();
  }
  else
  {
    if ( (unsigned __int8)inGameMode == HALF_HALF || (unsigned __int8)inGameMode == LONG )
    {
      BgDynamicLimits::InitDynamicValuesMP();
      LOBYTE(BgDynamicLimits::ms_currentGameMode) = v1;
      return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.cpp", 51, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "InitGameModeValues called without a valid game mode") )
    {
      __debugbreak();
      LOBYTE(BgDynamicLimits::ms_currentGameMode) = v1;
      return;
    }
  }
  LOBYTE(BgDynamicLimits::ms_currentGameMode) = v1;
}

/*
==============
BgDynamicLimits::IsValidGameMode
==============
*/
bool BgDynamicLimits::IsValidGameMode()
{
  return (unsigned __int8)BgDynamicLimits::ms_currentGameMode == HALF || (unsigned __int8)BgDynamicLimits::ms_currentGameMode == HALF_HALF || (unsigned __int8)BgDynamicLimits::ms_currentGameMode == LONG;
}

/*
==============
BgDynamicLimits::UpdateDynamicValues
==============
*/
void BgDynamicLimits::UpdateDynamicValues(void)
{
  if ( (unsigned __int8)BgDynamicLimits::ms_currentGameMode != HALF && (unsigned __int8)BgDynamicLimits::ms_currentGameMode != HALF_HALF && (unsigned __int8)BgDynamicLimits::ms_currentGameMode != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.cpp", 60, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( (unsigned __int8)BgDynamicLimits::ms_currentGameMode == HALF )
  {
    BgDynamicLimits::UpdateGameModeValuesSP();
  }
  else
  {
    if ( (unsigned __int8)BgDynamicLimits::ms_currentGameMode == HALF_HALF || (unsigned __int8)BgDynamicLimits::ms_currentGameMode == LONG )
    {
      BgDynamicLimits::UpdateGameModeValuesMP();
      BG_EntityState_UnitTests();
      return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.cpp", 78, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "UpdateGameModeValues called without a valid game mode") )
    {
      __debugbreak();
      BG_EntityState_UnitTests();
      return;
    }
  }
  BG_EntityState_UnitTests();
}

