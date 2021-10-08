/*
==============
BgDynamicLimits::InitDynamicValuesMP
==============
*/

void BgDynamicLimits::InitDynamicValuesMP(void)
{
  ?InitDynamicValuesMP@BgDynamicLimits@@CAXXZ();
}

/*
==============
BgDynamicLimits::UpdateGameModeValuesMP
==============
*/

void BgDynamicLimits::UpdateGameModeValuesMP(void)
{
  ?UpdateGameModeValuesMP@BgDynamicLimits@@CAXXZ();
}

/*
==============
BgDynamicLimits::InitDynamicValuesMP
==============
*/
void BgDynamicLimits::InitDynamicValuesMP(void)
{
  bool Bool_Internal_DebugName; 

  BgDynamicLimits::ms_data.m_effectBits = 1;
  BgDynamicLimits::ms_data.m_effectNamesCount = 1;
  BgDynamicLimits::ms_data.m_modelBits = 11;
  BgDynamicLimits::ms_data.m_clientTagBits = 1;
  BgDynamicLimits::ms_data.m_maxConfigStrings = 766;
  BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings = 528;
  BgDynamicLimits::ms_data.m_esIndexBits = 1;
  BgDynamicLimits::ms_data.m_scriptableInstanceBits = 1;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_high_precision_player_fire_event_enabled, "killswitch_high_precision_player_fire_event_enabled") || (Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_high_precision_player_fire_event_high_bit_replication_enabled, "killswitch_high_precision_player_fire_event_high_bit_replication_enabled"), BgDynamicLimits::ms_data.m_clientFireEventParamBits = 0, Bool_Internal_DebugName) )
    BgDynamicLimits::ms_data.m_clientFireEventParamBits = 32;
}

/*
==============
BgDynamicLimits::UpdateGameModeValuesMP
==============
*/
void BgDynamicLimits::UpdateGameModeValuesMP(void)
{
  bool Bool_Internal_DebugName; 
  unsigned int v1; 
  unsigned int BrushModelCount; 
  signed int MinBitCountForNum; 
  unsigned int serverInstanceCount; 
  signed int v5; 
  unsigned int BitsNeededForType; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 

  BgDynamicLimits::ms_data.m_modelBits = 11;
  BgDynamicLimits::ms_data.m_effectBits = 1;
  BgDynamicLimits::ms_data.m_effectNamesCount = 1;
  BgDynamicLimits::ms_data.m_clientTagBits = 1;
  BgDynamicLimits::ms_data.m_esIndexBits = 1;
  BgDynamicLimits::ms_data.m_scriptableInstanceBits = 1;
  BgDynamicLimits::ms_data.m_maxConfigStrings = 766;
  BgDynamicLimits::ms_data.m_caseSensitiveConfigStrings = 528;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_high_precision_player_fire_event_enabled, "killswitch_high_precision_player_fire_event_enabled") || (Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_high_precision_player_fire_event_high_bit_replication_enabled, "killswitch_high_precision_player_fire_event_high_bit_replication_enabled"), BgDynamicLimits::ms_data.m_clientFireEventParamBits = 0, Bool_Internal_DebugName) )
    BgDynamicLimits::ms_data.m_clientFireEventParamBits = 32;
  v1 = CM_TriggerModelTotalCount();
  BrushModelCount = CM_GetBrushModelCount();
  if ( BrushModelCount > v1 )
    v1 = BrushModelCount;
  MinBitCountForNum = GetMinBitCountForNum(v1);
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  if ( MinBitCountForNum < 1 )
    MinBitCountForNum = 1;
  BgDynamicLimits::ms_data.m_esIndexBits = MinBitCountForNum;
  if ( (int)g_scriptableWorldCounts.serverInstanceCount < 1 )
    serverInstanceCount = 1;
  v5 = GetMinBitCountForNum(serverInstanceCount - 1);
  if ( v5 < 1 )
    v5 = 1;
  BgDynamicLimits::ms_data.m_scriptableInstanceBits = v5;
  if ( NetConstStrings_AreStringsLoaded() )
  {
    BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_XMODEL);
    BgDynamicLimits::ms_data.m_modelBits = BitsNeededForType;
    if ( BitsNeededForType > 0xB )
    {
      v11 = 11;
      v9 = BitsNeededForType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_dynamic_limits_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( ms_data.m_modelBits ) <= ( 11 )", "%s <= %s\n\t%i, %i", "ms_data.m_modelBits", "MODEL_BITS_STATIC_MAX", v9, v11) )
        __debugbreak();
    }
    BgDynamicLimits::ms_data.m_clientTagBits = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_CLIENT_TAGS);
    BgDynamicLimits::ms_data.m_effectBits = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_VFX);
    v7 = NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_VFX) + 1;
    BgDynamicLimits::ms_data.m_effectNamesCount = v7;
    if ( v7 > 512 )
    {
      LODWORD(v10) = 512;
      LODWORD(v8) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_dynamic_limits_mp.cpp", 71, ASSERT_TYPE_ASSERT, "( ms_data.m_effectNamesCount ) <= ( BgStaticLimitsMP::STATIC_EFFECT_DEF_CACHE_SIZE )", "%s <= %s\n\t%i, %i", "ms_data.m_effectNamesCount", "BgStaticLimitsMP::STATIC_EFFECT_DEF_CACHE_SIZE", v8, v10) )
        __debugbreak();
    }
    if ( BgDynamicLimits::ms_data.m_effectBits > 9 )
    {
      LODWORD(v10) = 9;
      LODWORD(v8) = BgDynamicLimits::ms_data.m_effectBits;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_mp\\bg_dynamic_limits_mp.cpp", 74, ASSERT_TYPE_ASSERT, "( ms_data.m_effectBits ) <= ( BgStaticLimitsMP::STATIC_EFFECT_MAX_BITS )", "%s <= %s\n\t%i, %i", "ms_data.m_effectBits", "BgStaticLimitsMP::STATIC_EFFECT_MAX_BITS", v8, v10) )
        __debugbreak();
    }
  }
}

