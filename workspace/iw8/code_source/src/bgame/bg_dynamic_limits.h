/*
==============
BgDynamicLimits::GetClientAttachTagBits
==============
*/

unsigned int __fastcall BgDynamicLimits::GetClientAttachTagBits()
{
  return ?GetClientAttachTagBits@BgDynamicLimits@@SAIXZ();
}

/*
==============
BgDynamicLimits::GetEntityStateIndexBits
==============
*/

unsigned int __fastcall BgDynamicLimits::GetEntityStateIndexBits()
{
  return ?GetEntityStateIndexBits@BgDynamicLimits@@SAIXZ();
}

/*
==============
BgDynamicLimits::GetEffectBits
==============
*/

unsigned int __fastcall BgDynamicLimits::GetEffectBits()
{
  return ?GetEffectBits@BgDynamicLimits@@SAIXZ();
}

/*
==============
BgDynamicLimits::GetModelBits
==============
*/

unsigned int __fastcall BgDynamicLimits::GetModelBits()
{
  return ?GetModelBits@BgDynamicLimits@@SAIXZ();
}

/*
==============
BgDynamicLimits::GetClientAttachTagBits
==============
*/
__int64 BgDynamicLimits::GetClientAttachTagBits()
{
  __int64 result; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 74, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  result = BgDynamicLimits::ms_data.m_clientTagBits;
  if ( !BgDynamicLimits::ms_data.m_clientTagBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 75, ASSERT_TYPE_ASSERT, "(ms_data.m_clientTagBits > 0)", (const char *)&queryFormat, "ms_data.m_clientTagBits > 0") )
      __debugbreak();
    return BgDynamicLimits::ms_data.m_clientTagBits;
  }
  return result;
}

/*
==============
BgDynamicLimits::GetEffectBits
==============
*/
__int64 BgDynamicLimits::GetEffectBits()
{
  __int64 result; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 66, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  result = BgDynamicLimits::ms_data.m_effectBits;
  if ( !BgDynamicLimits::ms_data.m_effectBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 67, ASSERT_TYPE_ASSERT, "(ms_data.m_effectBits > 0)", (const char *)&queryFormat, "ms_data.m_effectBits > 0") )
      __debugbreak();
    return BgDynamicLimits::ms_data.m_effectBits;
  }
  return result;
}

/*
==============
BgDynamicLimits::GetModelBits
==============
*/
__int64 BgDynamicLimits::GetModelBits()
{
  __int64 result; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 82, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  result = BgDynamicLimits::ms_data.m_modelBits;
  if ( !BgDynamicLimits::ms_data.m_modelBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 83, ASSERT_TYPE_ASSERT, "(ms_data.m_modelBits > 0)", (const char *)&queryFormat, "ms_data.m_modelBits > 0") )
      __debugbreak();
    return BgDynamicLimits::ms_data.m_modelBits;
  }
  return result;
}

/*
==============
BgDynamicLimits::GetEntityStateIndexBits
==============
*/
__int64 BgDynamicLimits::GetEntityStateIndexBits()
{
  __int64 result; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 90, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  result = BgDynamicLimits::ms_data.m_esIndexBits;
  if ( !BgDynamicLimits::ms_data.m_esIndexBits )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 91, ASSERT_TYPE_ASSERT, "(ms_data.m_esIndexBits > 0)", (const char *)&queryFormat, "ms_data.m_esIndexBits > 0") )
      __debugbreak();
    return BgDynamicLimits::ms_data.m_esIndexBits;
  }
  return result;
}

