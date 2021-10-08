/*
==============
BG_ConfigStrings_ConfigStringOffset
==============
*/

ConfigString __fastcall BG_ConfigStrings_ConfigStringOffset(unsigned int base, int offset)
{
  return ?BG_ConfigStrings_ConfigStringOffset@@YA?AW4ConfigString@@IH@Z(base, offset);
}

/*
==============
BG_ConfigStrings_ConfigStringOffset
==============
*/
__int64 BG_ConfigStrings_ConfigStringOffset(unsigned int base, int offset)
{
  unsigned int v4; 
  __int64 v6; 
  unsigned int v7; 

  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( base >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    v7 = base;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 68, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset of invalid base ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( base, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v7) )
      __debugbreak();
  }
  v4 = offset + base;
  if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 126, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
    __debugbreak();
  if ( v4 >= BgDynamicLimits::ms_data.m_maxConfigStrings )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_configstrings.h", 72, ASSERT_TYPE_ASSERT, "(BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() ))", "%s\n\tConfigStringOffset gets invalid ConfigString %u", "BG_ConfigStrings_IsConfigStringInCount( newIndex, CS_FIRST, BgDynamicLimits::GetMaxConfigStrings() )", v6) )
      __debugbreak();
  }
  return v4;
}

