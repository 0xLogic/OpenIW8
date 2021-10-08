/*
==============
GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataSP>
==============
*/

unsigned int __fastcall GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataSP>()
{
  return ??$GetGameScriptDataMemorySizeCommon@VGameScriptDataSP@@@GameScriptData@@KAIXZ();
}

/*
==============
GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataMP>
==============
*/

void __fastcall GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataMP>(HunkUser *hunkUser)
{
  ??$AllocateGameScriptDataMemoryCommon@VGameScriptDataMP@@@GameScriptData@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GameScriptData::GetGameScriptDataCommon
==============
*/

GameScriptData *__fastcall GameScriptData::GetGameScriptDataCommon()
{
  return ?GetGameScriptDataCommon@GameScriptData@@SAPEAV1@XZ();
}

/*
==============
GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataMP>
==============
*/

unsigned int __fastcall GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataMP>()
{
  return ??$GetGameScriptDataMemorySizeCommon@VGameScriptDataMP@@@GameScriptData@@KAIXZ();
}

/*
==============
GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/

void __fastcall GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataSP>(HunkUser *hunkUser)
{
  ??$AllocateGameScriptDataMemoryCommon@VGameScriptDataSP@@@GameScriptData@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GameScriptData::ClearGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/

__int64 GameScriptData::ClearGameScriptDataMemoryCommon<GameScriptDataSP>()
{
  return ??$ClearGameScriptDataMemoryCommon@VGameScriptDataSP@@@GameScriptData@@KAXXZ();
}

/*
==============
GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/

__int64 GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataSP>()
{
  return ??$FreeGameScriptDataMemoryCommon@VGameScriptDataSP@@@GameScriptData@@KAXXZ();
}

/*
==============
GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataMP>
==============
*/

__int64 GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataMP>()
{
  return ??$FreeGameScriptDataMemoryCommon@VGameScriptDataMP@@@GameScriptData@@KAXXZ();
}

/*
==============
GameScriptData::GetGameScriptDataCommon
==============
*/
GameScriptData *GameScriptData::GetGameScriptDataCommon()
{
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  return GameScriptData::ms_gScriptData;
}

/*
==============
GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataMP>
==============
*/
void GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataMP>(HunkUser *hunkUser)
{
  GameScriptData *v2; 

  if ( (_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 103, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 104, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v2 = (GameScriptData *)Mem_HunkUser_AllocInternal(hunkUser, 0x3A0B8ui64, 8ui64, "GameScriptData::AllocateGameScriptDataMemoryCommon");
  memset_0(&v2[1].ai_asm_getgenerichandler, 0, 0x3A03Cui64);
  *(_QWORD *)&v2->levelscript = 0i64;
  *(_QWORD *)&v2->initstructs = 0i64;
  *(_QWORD *)&v2->bt_getfunction = 0i64;
  *(_QWORD *)&v2->scriptable_postinit = 0i64;
  *(_QWORD *)&v2->riotshield_damaged = 0i64;
  *(_QWORD *)&v2->scriptable_notify_callback = 0i64;
  *(_QWORD *)&v2->ai_asm_getfunction = 0i64;
  *(_QWORD *)&v2->ai_asm_getgenerichandler = 0i64;
  *(_QWORD *)&v2->lui_callback = 0i64;
  *(_QWORD *)&v2[1].delete_ = 0i64;
  *(_QWORD *)&v2[1].createstruct = 0i64;
  *(_QWORD *)&v2[1].scriptable_init = 0i64;
  *(_QWORD *)&v2[1].scriptable_used = 0i64;
  *(_QWORD *)&v2[1].scriptable_touched = 0i64;
  *(_QWORD *)&v2[1].projectile_speed = 0i64;
  *(_QWORD *)&v2[1].ai_asm_getparams = 0i64;
  *(_QWORD *)&v2[1].entity_used = 0i64;
  *(_QWORD *)&v2[2].levelscript = 0i64;
  *(_QWORD *)&v2[2].initstructs = 0i64;
  *(_QWORD *)&v2[2].bt_getfunction = 0i64;
  *(_QWORD *)&v2[2].scriptable_postinit = 0i64;
  *(_QWORD *)&v2[2].riotshield_damaged = 0i64;
  *(_QWORD *)&v2[2].scriptable_notify_callback = 0i64;
  GameScriptData::ms_gScriptData = v2;
  LOBYTE(GameScriptData::ms_allocatedType) = 2;
}

/*
==============
GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataMP>
==============
*/
char GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataMP>()
{
  char v0; 
  GameScriptData *v1; 

  v0 = GameScriptData::ms_allocatedType;
  if ( (_BYTE)GameScriptData::ms_allocatedType )
  {
    if ( (_BYTE)GameScriptData::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GameScriptData::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v1 = GameScriptData::ms_gScriptData;
    goto LABEL_12;
  }
LABEL_7:
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 122, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tFreeGameScriptDataMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptData != NULL") )
    __debugbreak();
  DebugWipe(GameScriptData::ms_gScriptData, 0x3A0B8ui64);
  v1 = NULL;
  GameScriptData::ms_gScriptData = NULL;
LABEL_12:
  LOBYTE(GameScriptData::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 134, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataMP>
==============
*/
__int64 GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataMP>()
{
  return 237752i64;
}

/*
==============
GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/
void GameScriptData::AllocateGameScriptDataMemoryCommon<GameScriptDataSP>(HunkUser *hunkUser)
{
  GameScriptData *v2; 

  if ( (_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 103, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 104, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v2 = (GameScriptData *)Mem_HunkUser_AllocInternal(hunkUser, 0x3980ui64, 8ui64, "GameScriptData::AllocateGameScriptDataMemoryCommon");
  memset_0(&v2[1], 0, 0x393Cui64);
  *(_QWORD *)&v2->levelscript = 0i64;
  *(_QWORD *)&v2->initstructs = 0i64;
  *(_QWORD *)&v2->bt_getfunction = 0i64;
  *(_QWORD *)&v2->scriptable_postinit = 0i64;
  *(_QWORD *)&v2->riotshield_damaged = 0i64;
  *(_QWORD *)&v2->scriptable_notify_callback = 0i64;
  *(_QWORD *)&v2->ai_asm_getfunction = 0i64;
  *(_QWORD *)&v2->ai_asm_getgenerichandler = 0i64;
  v2->lui_callback = 0;
  GameScriptData::ms_gScriptData = v2;
  LOBYTE(GameScriptData::ms_allocatedType) = 1;
}

/*
==============
GameScriptData::ClearGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/
GameScriptData *GameScriptData::ClearGameScriptDataMemoryCommon<GameScriptDataSP>()
{
  GameScriptData *result; 

  result = (GameScriptData *)(unsigned __int8)GameScriptData::ms_allocatedType;
  if ( !(_BYTE)GameScriptData::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 141, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    result = (GameScriptData *)(unsigned __int8)GameScriptData::ms_allocatedType;
LABEL_6:
    if ( (_BYTE)result != 1 )
      return result;
  }
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 145, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tClearGameScriptDataMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gScriptData != NULL") )
    __debugbreak();
  memset_0(GameScriptData::ms_gScriptData, 0, 0x3980ui64);
  result = GameScriptData::ms_gScriptData;
  *(_QWORD *)&GameScriptData::ms_gScriptData->levelscript = 0i64;
  *(_QWORD *)&result->initstructs = 0i64;
  *(_QWORD *)&result->bt_getfunction = 0i64;
  *(_QWORD *)&result->scriptable_postinit = 0i64;
  *(_QWORD *)&result->riotshield_damaged = 0i64;
  *(_QWORD *)&result->scriptable_notify_callback = 0i64;
  *(_QWORD *)&result->ai_asm_getfunction = 0i64;
  *(_QWORD *)&result->ai_asm_getgenerichandler = 0i64;
  result->lui_callback = 0;
  GameScriptData::ms_gScriptData = result;
  return result;
}

/*
==============
GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataSP>
==============
*/
char GameScriptData::FreeGameScriptDataMemoryCommon<GameScriptDataSP>()
{
  char v0; 
  GameScriptData *v1; 

  v0 = GameScriptData::ms_allocatedType;
  if ( (_BYTE)GameScriptData::ms_allocatedType )
  {
    if ( (_BYTE)GameScriptData::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GameScriptData::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v1 = GameScriptData::ms_gScriptData;
    goto LABEL_12;
  }
LABEL_7:
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 122, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tFreeGameScriptDataMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptData != NULL") )
    __debugbreak();
  DebugWipe(GameScriptData::ms_gScriptData, 0x3980ui64);
  v1 = NULL;
  GameScriptData::ms_gScriptData = NULL;
LABEL_12:
  LOBYTE(GameScriptData::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 134, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataSP>
==============
*/
__int64 GameScriptData::GetGameScriptDataMemorySizeCommon<GameScriptDataSP>()
{
  return 14720i64;
}

