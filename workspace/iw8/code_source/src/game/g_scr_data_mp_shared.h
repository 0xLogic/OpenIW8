/*
==============
GameScriptDataMPShared::GetGameScriptDataMP
==============
*/

GameScriptDataMPShared *__fastcall GameScriptDataMPShared::GetGameScriptDataMP()
{
  return ?GetGameScriptDataMP@GameScriptDataMPShared@@SAPEAV1@XZ();
}

/*
==============
GameScriptDataMPShared::GetGameScriptDataMP
==============
*/
GameScriptData *GameScriptDataMPShared::GetGameScriptDataMP()
{
  int v1; 
  int v2; 

  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF_HALF )
  {
    v2 = 2;
    v1 = (unsigned __int8)GameScriptData::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data_mp_shared.h", 112, ASSERT_TYPE_ASSERT, "( ms_allocatedType ) == ( ALLOCATION_TYPE )", "ms_allocatedType == ALLOCATION_TYPE\n\t%i, %i", v1, v2) )
      __debugbreak();
  }
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  return GameScriptData::ms_gScriptData;
}

