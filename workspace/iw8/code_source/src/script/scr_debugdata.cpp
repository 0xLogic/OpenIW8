/*
==============
ScriptDebugData_AddProfileString_Runtime
==============
*/

int __fastcall ScriptDebugData_AddProfileString_Runtime(const char *profileString)
{
  return ?ScriptDebugData_AddProfileString_Runtime@@YAHPEBD@Z(profileString);
}

/*
==============
ScriptDebugData_GetProfileString
==============
*/

const char *__fastcall ScriptDebugData_GetProfileString(int bankIndex, int index)
{
  return ?ScriptDebugData_GetProfileString@@YAPEBDHH@Z(bankIndex, index);
}

/*
==============
ScriptDebugData_AddDebugData
==============
*/

void __fastcall ScriptDebugData_AddDebugData(const ScriptDebugData *const debugData)
{
  ?ScriptDebugData_AddDebugData@@YAXQEBUScriptDebugData@@@Z(debugData);
}

/*
==============
ScriptDebugData_ClearProfileStrings_Runtime
==============
*/

void ScriptDebugData_ClearProfileStrings_Runtime(void)
{
  ?ScriptDebugData_ClearProfileStrings_Runtime@@YAXXZ();
}

/*
==============
ScriptDebugData_ReleaseDebugData
==============
*/

void __fastcall ScriptDebugData_ReleaseDebugData(const ScriptDebugData *const debugData)
{
  ?ScriptDebugData_ReleaseDebugData@@YAXQEBUScriptDebugData@@@Z(debugData);
}

/*
==============
ScriptDebugData_GetBankIndex
==============
*/

bool __fastcall ScriptDebugData_GetBankIndex(unsigned __int16 crcName, unsigned __int16 *bankIndex)
{
  return ?ScriptDebugData_GetBankIndex@@YA_NGPEAG@Z(crcName, bankIndex);
}

/*
==============
ScriptDebugData_AddDebugData
==============
*/
void ScriptDebugData_AddDebugData(const ScriptDebugData *const debugData)
{
  unsigned __int16 v2; 
  bool v3; 
  const ScriptDebugData **v4; 

  v2 = 0;
  while ( s_ScriptDebugData[v2] )
  {
    if ( ++v2 >= 0x20u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 38, ASSERT_TYPE_ASSERT, "(idx < s_ScriptDebugDataMax)", (const char *)&queryFormat, "idx < s_ScriptDebugDataMax") )
        __debugbreak();
      break;
    }
  }
  v3 = s_ScriptDebugData[v2] == NULL;
  v4 = &s_ScriptDebugData[v2];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 39, ASSERT_TYPE_ASSERT, "(!s_ScriptDebugData[idx])", (const char *)&queryFormat, "!s_ScriptDebugData[idx]") )
    __debugbreak();
  ++s_ScriptDebugDataCount;
  *v4 = debugData;
}

/*
==============
ScriptDebugData_AddProfileString_Runtime
==============
*/
__int64 ScriptDebugData_AddProfileString_Runtime(const char *profileString)
{
  __int64 v2; 
  __int64 v3; 

  if ( !profileString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 72, ASSERT_TYPE_ASSERT, "(profileString)", (const char *)&queryFormat, "profileString") )
    __debugbreak();
  if ( !*profileString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 73, ASSERT_TYPE_ASSERT, "(profileString[0] != 0)", (const char *)&queryFormat, "profileString[0] != 0") )
    __debugbreak();
  v2 = -1i64;
  do
    ++v2;
  while ( profileString[v2] );
  if ( (unsigned int)v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 74, ASSERT_TYPE_ASSERT, "(I_strlen( profileString ) < SCRIPTDEBUGDATA_MAX_PROFILESTRING_LENGTH)", (const char *)&queryFormat, "I_strlen( profileString ) < SCRIPTDEBUGDATA_MAX_PROFILESTRING_LENGTH") )
    __debugbreak();
  v3 = s_scriptDebugData_ProfileStringCount;
  if ( s_scriptDebugData_ProfileStringCount >= 1024 )
    return 0xFFFFFFFFi64;
  ++s_scriptDebugData_ProfileStringCount;
  Core_strcpy(s_scriptDebugData_ProfileStrings[v3], 0x20ui64, profileString);
  return (unsigned int)v3;
}

/*
==============
ScriptDebugData_ClearProfileStrings_Runtime
==============
*/
void ScriptDebugData_ClearProfileStrings_Runtime(void)
{
  s_scriptDebugData_ProfileStringCount = 0;
}

/*
==============
ScriptDebugData_GetBankIndex
==============
*/
char ScriptDebugData_GetBankIndex(unsigned __int16 crcName, unsigned __int16 *bankIndex)
{
  unsigned __int16 v4; 
  const ScriptDebugData *v5; 

  if ( !bankIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_debugdata.cpp", 107, ASSERT_TYPE_ASSERT, "(bankIndex)", (const char *)&queryFormat, "bankIndex") )
    __debugbreak();
  v4 = 0;
  while ( 1 )
  {
    v5 = s_ScriptDebugData[v4];
    if ( v5 )
    {
      if ( crcName == LOWORD(v5->nameCRC) )
        break;
    }
    if ( ++v4 >= 0x20u )
      return 0;
  }
  *bankIndex = v4;
  return 1;
}

/*
==============
ScriptDebugData_GetProfileString
==============
*/
char *ScriptDebugData_GetProfileString(int bankIndex, int index)
{
  if ( index < 0 )
    return "Invalid Tag";
  if ( index >= s_scriptDebugData_ProfileStringCount )
    return "Tag out of range";
  return s_scriptDebugData_ProfileStrings[index];
}

/*
==============
ScriptDebugData_ReleaseDebugData
==============
*/
void ScriptDebugData_ReleaseDebugData(const ScriptDebugData *const debugData)
{
  unsigned int v1; 
  const ScriptDebugData **v2; 
  __int64 v3; 
  int v4; 

  v1 = s_ScriptDebugDataCount;
  v2 = s_ScriptDebugData;
  v3 = 32i64;
  do
  {
    if ( *v2 == debugData )
    {
      *v2 = NULL;
      --v1;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = s_scriptDebugData_ProfileStringCount;
  s_ScriptDebugDataCount = v1;
  if ( !v1 )
    v4 = 0;
  s_scriptDebugData_ProfileStringCount = v4;
}

