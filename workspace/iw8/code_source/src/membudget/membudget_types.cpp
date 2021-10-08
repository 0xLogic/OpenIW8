/*
==============
MemBudget_GetPollTypeFromName
==============
*/

MemBudget_PollType __fastcall MemBudget_GetPollTypeFromName(const char *str)
{
  return ?MemBudget_GetPollTypeFromName@@YA?AW4MemBudget_PollType@@PEBD@Z(str);
}

/*
==============
MemBudget_GetBuildTypeName
==============
*/

const char *__fastcall MemBudget_GetBuildTypeName(MemBudget_BuildType type)
{
  return ?MemBudget_GetBuildTypeName@@YAPEBDW4MemBudget_BuildType@@@Z(type);
}

/*
==============
MemBudget_GetCurrentHardwareType
==============
*/

MemBudget_HardwareType __fastcall MemBudget_GetCurrentHardwareType()
{
  return ?MemBudget_GetCurrentHardwareType@@YA?AW4MemBudget_HardwareType@@XZ();
}

/*
==============
MemBudget_GetPollTypeName
==============
*/

const char *__fastcall MemBudget_GetPollTypeName(MemBudget_PollType type)
{
  return ?MemBudget_GetPollTypeName@@YAPEBDW4MemBudget_PollType@@@Z(type);
}

/*
==============
MemBudget_GetGameModeTypeName
==============
*/

const char *__fastcall MemBudget_GetGameModeTypeName(MemBudget_GameModeType type)
{
  return ?MemBudget_GetGameModeTypeName@@YAPEBDW4MemBudget_GameModeType@@@Z(type);
}

/*
==============
MemBudget_GetCurrentBuildType
==============
*/

MemBudget_BuildType __fastcall MemBudget_GetCurrentBuildType()
{
  return ?MemBudget_GetCurrentBuildType@@YA?AW4MemBudget_BuildType@@XZ();
}

/*
==============
MemBudget_GetHardwareTypeName
==============
*/

const char *__fastcall MemBudget_GetHardwareTypeName(MemBudget_HardwareType type)
{
  return ?MemBudget_GetHardwareTypeName@@YAPEBDW4MemBudget_HardwareType@@@Z(type);
}

/*
==============
MemBudget_GetCurrentGameModeType
==============
*/

MemBudget_GameModeType __fastcall MemBudget_GetCurrentGameModeType()
{
  return ?MemBudget_GetCurrentGameModeType@@YA?AW4MemBudget_GameModeType@@XZ();
}

/*
==============
MemBudget_GetPollTypeFromZoneFlagIndex
==============
*/

MemBudget_PollType __fastcall MemBudget_GetPollTypeFromZoneFlagIndex(unsigned int flagIndex)
{
  return ?MemBudget_GetPollTypeFromZoneFlagIndex@@YA?AW4MemBudget_PollType@@I@Z(flagIndex);
}

/*
==============
MemBudget_GetBuildTypeName
==============
*/
const char *MemBudget_GetBuildTypeName(MemBudget_BuildType type)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = type;
  if ( (unsigned __int8)type >= (unsigned int)Count )
  {
    v4 = 3;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( BUILDTYPE_NAMES ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( BUILDTYPE_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return BUILDTYPE_NAMES[v1];
}

/*
==============
MemBudget_GetCurrentBuildType
==============
*/
char MemBudget_GetCurrentBuildType()
{
  return 1;
}

/*
==============
MemBudget_GetCurrentGameModeType
==============
*/
char MemBudget_GetCurrentGameModeType()
{
  __int32 v0; 
  __int32 v1; 

  if ( (DB_Zones_GetInUseFlags() & 0x100) == 0 || Com_FrontEndScene_IsActive() || Com_FrontEnd_IsInFrontEnd() )
    return 3;
  v0 = DB_Zones_GetInferredGameMode() - 1;
  if ( !v0 )
    return 0;
  v1 = v0 - 1;
  if ( v1 && v1 == 1 )
    return 2;
  else
    return 1;
}

/*
==============
MemBudget_GetCurrentHardwareType
==============
*/
char MemBudget_GetCurrentHardwareType()
{
  return (Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO) + 2;
}

/*
==============
MemBudget_GetGameModeTypeName
==============
*/
const char *MemBudget_GetGameModeTypeName(MemBudget_GameModeType type)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = type;
  if ( (unsigned __int8)type >= 4u )
  {
    v4 = 4;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( GAMEMODE_NAMES ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( GAMEMODE_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return GAMEMODE_NAMES[v1];
}

/*
==============
MemBudget_GetHardwareTypeName
==============
*/
const char *MemBudget_GetHardwareTypeName(MemBudget_HardwareType type)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = type;
  if ( (unsigned __int8)type >= 4u )
  {
    v4 = 4;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( HWTYPE_NAMES ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( HWTYPE_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return HWTYPE_NAMES[v1];
}

/*
==============
MemBudget_GetPollTypeFromName
==============
*/
char MemBudget_GetPollTypeFromName(const char *str)
{
  __int64 v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 111, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  v2 = 0i64;
  do
  {
    v3 = MEMBUDGET_POLL_NAMES[v2];
    v4 = 0x7FFFFFFFi64;
    v5 = str;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = v3 - str;
    while ( 1 )
    {
      v7 = (unsigned __int8)v5[v6];
      v8 = v4;
      v9 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v8 )
        return v2;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return v2;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 0x26 );
  return 38;
}

/*
==============
MemBudget_GetPollTypeFromZoneFlagIndex
==============
*/
char MemBudget_GetPollTypeFromZoneFlagIndex(unsigned int flagIndex)
{
  char v1; 
  int v2; 
  char result; 

  v1 = flagIndex;
  if ( flagIndex >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( flagIndex ) < (unsigned)( 32 )", "flagIndex doesn't index 32\n\t%i not in [0, %i)", flagIndex, 32) )
    __debugbreak();
  v2 = 1 << v1;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 125, ASSERT_TYPE_ASSERT, "(flag)", (const char *)&queryFormat, "flag") )
    __debugbreak();
  if ( ((v2 - 1) & v2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 126, ASSERT_TYPE_ASSERT, "(IsPowerOf2( flag ))", (const char *)&queryFormat, "IsPowerOf2( flag )") )
    __debugbreak();
  if ( (v2 & 0xB00) != 0 )
    return 19;
  if ( (v2 & 0xC0) != 0 )
    return 22;
  if ( (v2 & 0x80C000) != 0 )
    return 27;
  if ( (v2 & 0x1010000) != 0 )
    return 28;
  if ( (v2 & 0x2060000) != 0 )
    return 29;
  if ( (v2 & 0xFF000) != 0 )
    return 26;
  if ( (v2 & 0x3F00000) != 0 )
    return 20;
  result = 18;
  if ( (v2 & 0x400) != 0 )
    return 21;
  return result;
}

/*
==============
MemBudget_GetPollTypeName
==============
*/
const char *MemBudget_GetPollTypeName(MemBudget_PollType type)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = type;
  if ( (unsigned __int8)type >= 0x26u )
  {
    v4 = 38;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\membudget\\membudget_types.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( MEMBUDGET_POLL_NAMES ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( MEMBUDGET_POLL_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return MEMBUDGET_POLL_NAMES[v1];
}

