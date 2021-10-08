/*
==============
Com_MapLoadErrors_Reset
==============
*/

void __fastcall Com_MapLoadErrors_Reset(bool reportServerErrorsOnly)
{
  ?Com_MapLoadErrors_Reset@@YAX_N@Z(reportServerErrorsOnly);
}

/*
==============
Com_MapLoadErrors_AppendFileOpenLoadErrors
==============
*/

void Com_MapLoadErrors_AppendFileOpenLoadErrors(void)
{
  ?Com_MapLoadErrors_AppendFileOpenLoadErrors@@YAXXZ();
}

/*
==============
Com_MapLoadErrors_AddMapLoadError
==============
*/

void __fastcall Com_MapLoadErrors_AddMapLoadError(const char *errorLine, int errorLineLen)
{
  ?Com_MapLoadErrors_AddMapLoadError@@YAXPEBDH@Z(errorLine, errorLineLen);
}

/*
==============
Com_MapLoadErrors_GetFinalizedCount
==============
*/

unsigned int __fastcall Com_MapLoadErrors_GetFinalizedCount()
{
  return ?Com_MapLoadErrors_GetFinalizedCount@@YAIXZ();
}

/*
==============
Com_MapLoadErrors_GetTitle
==============
*/

const char *__fastcall Com_MapLoadErrors_GetTitle()
{
  return ?Com_MapLoadErrors_GetTitle@@YAPEBDXZ();
}

/*
==============
Com_MapLoadErrors_GetText
==============
*/

const char *__fastcall Com_MapLoadErrors_GetText()
{
  return ?Com_MapLoadErrors_GetText@@YAPEBDXZ();
}

/*
==============
Com_MapLoadErrors_ClearFinalizedCount
==============
*/

void Com_MapLoadErrors_ClearFinalizedCount(void)
{
  ?Com_MapLoadErrors_ClearFinalizedCount@@YAXXZ();
}

/*
==============
Com_MapLoadErrors_Finalize
==============
*/

void __fastcall Com_MapLoadErrors_Finalize(const char *mapName)
{
  ?Com_MapLoadErrors_Finalize@@YAXPEBD@Z(mapName);
}

/*
==============
Com_MapLoadErrors_PopIgnore
==============
*/

void Com_MapLoadErrors_PopIgnore(void)
{
  ?Com_MapLoadErrors_PopIgnore@@YAXXZ();
}

/*
==============
Com_MapLoadErrors_PushIgnore
==============
*/

void Com_MapLoadErrors_PushIgnore(void)
{
  ?Com_MapLoadErrors_PushIgnore@@YAXXZ();
}

/*
==============
Com_MapLoadErrors_AddMapLoadError
==============
*/
void Com_MapLoadErrors_AddMapLoadError(const char *errorLine, int errorLineLen)
{
  signed int v4; 
  int v5; 

  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 456i64) )
  {
    Sys_EnterCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
    v4 = 0x8000 - s_comMapLoadErrors_textCursor;
    v5 = 0x8000 - s_comMapLoadErrors_textCursor - 94;
    if ( v5 < errorLineLen )
    {
      if ( v5 >= 0 )
      {
        Core_strcpy(&s_comMapLoadErrors_text[s_comMapLoadErrors_textCursor], v4, "^1< Error list truncated. Search the console log for \"map load errors:\" for the full list. >\n");
        s_comMapLoadErrors_textCursor = 0x8000;
      }
    }
    else
    {
      Core_strcpy(&s_comMapLoadErrors_text[s_comMapLoadErrors_textCursor], v4, errorLine);
      s_comMapLoadErrors_textCursor += errorLineLen;
    }
    if ( ((unsigned __int8)&s_comMapLoadErrors_errorCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_comMapLoadErrors_errorCount) )
      __debugbreak();
    _InterlockedIncrement(&s_comMapLoadErrors_errorCount);
    Sys_LeaveCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
  }
}

/*
==============
Com_MapLoadErrors_AppendFileOpenLoadErrors
==============
*/
void Com_MapLoadErrors_AppendFileOpenLoadErrors(void)
{
  if ( com_consoleLogOpenFailed )
    Com_PrintError(1, "UNABLE TO OPEN %s%s\n", "console", ".log");
  if ( com_missingAssetOpenFailed )
    Com_PrintError(1, "UNABLE TO OPEN %s\n", (const char *)&stru_143EE5C40);
}

/*
==============
Com_MapLoadErrors_ClearFinalizedCount
==============
*/
void Com_MapLoadErrors_ClearFinalizedCount(void)
{
  Sys_EnterCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
  s_comMapLoadErrors_finalizedErrorCount = 0;
  Sys_LeaveCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
}

/*
==============
Com_MapLoadErrors_Finalize
==============
*/
void Com_MapLoadErrors_Finalize(const char *mapName)
{
  const dvar_t *VarByName; 
  const char *v3; 
  char *fmt; 

  Sys_EnterCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
  s_comMapLoadErrors_title[0] = 0;
  if ( s_comMapLoadErrors_errorCount )
  {
    VarByName = Dvar_FindVarByName("MSPTSRNRSO");
    if ( !VarByName || VarByName->type != 9 || !atoi(VarByName->current.string) )
    {
      if ( !com_unattendedMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_map_load_errors.cpp", 120, ASSERT_TYPE_ASSERT, "(com_unattendedMode)", (const char *)&queryFormat, "com_unattendedMode") )
        __debugbreak();
      if ( !com_unattendedMode->current.enabled )
      {
        if ( !com_suppressLoadErrors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_map_load_errors.cpp", 127, ASSERT_TYPE_ASSERT, "(com_suppressLoadErrors)", (const char *)&queryFormat, "com_suppressLoadErrors") )
          __debugbreak();
        if ( !com_suppressLoadErrors->current.enabled )
        {
          v3 = ERRMSG_PLURAL;
          if ( s_comMapLoadErrors_errorCount == 1 )
            v3 = ERRMSG_SINGLE;
          LODWORD(fmt) = s_comMapLoadErrors_errorCount;
          Com_sprintf(s_comMapLoadErrors_title, 0x100ui64, v3, mapName, fmt);
          s_comMapLoadErrors_finalizedErrorCount = s_comMapLoadErrors_errorCount;
        }
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
  Com_Printf(1, "Map load errors: %s\n", s_comMapLoadErrors_title);
  Com_PrintMessage(1, s_comMapLoadErrors_text, 0);
  Com_Printf(1, "\n");
}

/*
==============
Com_MapLoadErrors_GetFinalizedCount
==============
*/
__int64 Com_MapLoadErrors_GetFinalizedCount()
{
  return s_comMapLoadErrors_finalizedErrorCount;
}

/*
==============
Com_MapLoadErrors_GetText
==============
*/
char *Com_MapLoadErrors_GetText()
{
  return s_comMapLoadErrors_text;
}

/*
==============
Com_MapLoadErrors_GetTitle
==============
*/
char *Com_MapLoadErrors_GetTitle()
{
  return s_comMapLoadErrors_title;
}

/*
==============
Com_MapLoadErrors_PopIgnore
==============
*/
void Com_MapLoadErrors_PopIgnore(void)
{
  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 456i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_map_load_errors.cpp", 74, ASSERT_TYPE_ASSERT, "(s_comMapLoadErrors_ignorePushed)", (const char *)&queryFormat, "s_comMapLoadErrors_ignorePushed") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 456i64) = 0;
}

/*
==============
Com_MapLoadErrors_PushIgnore
==============
*/
void Com_MapLoadErrors_PushIgnore(void)
{
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 456i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_map_load_errors.cpp", 67, ASSERT_TYPE_ASSERT, "(!s_comMapLoadErrors_ignorePushed)", (const char *)&queryFormat, "!s_comMapLoadErrors_ignorePushed") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 456i64) = 1;
}

/*
==============
Com_MapLoadErrors_Reset
==============
*/
void Com_MapLoadErrors_Reset(bool reportServerErrorsOnly)
{
  Sys_EnterCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
  s_comMapLoadErrors_errorCount = 0;
  s_comMapLoadErrors_textCursor = 0;
  Sys_LeaveCriticalSection(CRITSECT_MAP_LOAD_ERRORS);
}

