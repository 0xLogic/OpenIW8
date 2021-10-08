/*
==============
BgDynamicLimits::InitDynamicValuesSP
==============
*/

void BgDynamicLimits::InitDynamicValuesSP(void)
{
  ?InitDynamicValuesSP@BgDynamicLimits@@CAXXZ();
}

/*
==============
BgDynamicLimits::UpdateGameModeValuesSP
==============
*/

void BgDynamicLimits::UpdateGameModeValuesSP(void)
{
  ?UpdateGameModeValuesSP@BgDynamicLimits@@CAXXZ();
}

/*
==============
BgDynamicLimits::InitDynamicValuesSP
==============
*/
void BgDynamicLimits::InitDynamicValuesSP(void)
{
  BgDynamicLimits::ms_data.m_effectBits = 10;
  BgDynamicLimits::ms_data.m_effectNamesCount = 1024;
  BgDynamicLimits::ms_data.m_modelBits = GetMinBitCountForNum(0x7FFu);
  BgDynamicLimits::ms_data.m_clientTagBits = GetMinBitCountForNum(0x3Fu);
  BgDynamicLimits::ms_data.m_maxConfigStrings = 6167;
  BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings = 4078;
  BgDynamicLimits::ms_data.m_esIndexBits = 32;
  *(_QWORD *)&BgDynamicLimits::ms_data.m_scriptableInstanceBits = 32i64;
}

/*
==============
BgDynamicLimits::UpdateGameModeValuesSP
==============
*/
void BgDynamicLimits::UpdateGameModeValuesSP(void)
{
  ;
}

