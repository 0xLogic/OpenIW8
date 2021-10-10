/*
==============
SetAssertCallbackHandler
==============
*/

void __fastcall SetAssertCallbackHandler(void (__fastcall *AssertCallbackFunc)())
{
  ?SetAssertCallbackHandler@@YAXP6AXXZ@Z(AssertCallbackFunc);
}

/*
==============
IsDebuggerConnected
==============
*/

BOOL __stdcall IsDebuggerConnected()
{
  return ?IsDebuggerConnected@@YAHXZ();
}

/*
==============
RefreshQuitOnErrorCondition
==============
*/

void RefreshQuitOnErrorCondition(void)
{
  ?RefreshQuitOnErrorCondition@@YAXXZ();
}

/*
==============
QuitOnError
==============
*/

bool __fastcall QuitOnError()
{
  return ?QuitOnError@@YA_NXZ();
}

/*
==============
BuildAssertMessage
==============
*/
void BuildAssertMessage(unsigned int checksum, const char *exprText, const char *separator, const char *expr, const char *filename, int line, AssertType type, int skipLevels, char *message, int messageSize, const char *webLink)
{
  const char *v11; 
  const char *v12; 
  int v15; 
  const char *v16; 
  char *v17; 
  const char *BuildVersion; 
  char *v19; 
  int v20; 
  __int64 v23; 
  char v24[8]; 

  v11 = (const char *)&v23;
  v12 = (const char *)&v23;
  if ( filename )
    v11 = filename;
  if ( expr )
    v12 = expr;
  strcpy(v24, ">");
  v23 = *(__int64 *)"<unknown>";
  if ( !GetModuleFileNameA(NULL, g_module, 0x104u) )
    strcpy(g_module, "<unknown application>");
  v15 = Com_sprintf(message, messageSize, "[0x%08X]\n", checksum);
  v16 = "(mychanges)";
  v17 = &message[v15 + Com_sprintf(&message[v15], messageSize - (__int64)v15, "WebLink:    %s\n", webLink)];
  if ( !g_usedDebugZone )
    v16 = (char *)&queryFormat.fmt + 3;
  BuildVersion = Com_GetBuildVersion();
  v19 = &v17[Com_sprintf(v17, (unsigned __int64)&message[messageSize - (_QWORD)v17], "Compiled: %s %s\nBuild: %s%s\n", "Aug  9 2020", "12:31:44", BuildVersion, v16)];
  v20 = Com_sprintf(v19, (unsigned __int64)&message[messageSize - (_QWORD)v19], "Expression:\n    %s%s%s\n\nModule:  %s\n%s(%d)\n", exprText, separator, v12, g_module, v11, line);
  Callstack_StackTraceToString(skipLevels + 1, &v19[v20], messageSize + (int)message - (v20 + (int)v19));
}

/*
==============
IsDebuggerConnected
==============
*/

BOOL __stdcall IsDebuggerConnected()
{
  return IsDebuggerPresent();
}

/*
==============
QuitOnError
==============
*/
bool QuitOnError()
{
  bool result; 

  if ( !Dvar_IsSystemActive() )
    return shouldQuitOnError;
  if ( Dvar_GetBoolSafe("MRSKLLMNKP") || Dvar_GetIntSafe("MQSNKPOLPP") == 2 )
  {
    result = 1;
    shouldQuitOnError = 1;
  }
  else
  {
    result = 0;
    shouldQuitOnError = 0;
  }
  return result;
}

/*
==============
RefreshQuitOnErrorCondition
==============
*/
void RefreshQuitOnErrorCondition(void)
{
  if ( Dvar_IsSystemActive() )
    shouldQuitOnError = Dvar_GetBoolSafe("MRSKLLMNKP") || Dvar_GetIntSafe("MQSNKPOLPP") == 2;
}

/*
==============
SetAssertCallbackHandler
==============
*/
void SetAssertCallbackHandler(void (*AssertCallbackFunc)())
{
  AssertCallback = AssertCallbackFunc;
}

/*
==============
CoreAssert_Handler_AssertTypeAssert
==============
*/
_BOOL8 CoreAssert_Handler_AssertTypeAssert(const char *filename, int line, const char *expr)
{
  return CoreAssert_Handler(filename, line, ASSERT_TYPE_ASSERT, expr, (const char *)&queryFormat, expr);
}

/*
==============
MyAssertHandler
==============
*/
char MyAssertHandler(const char *filename, int line, AssertType type, const char *exprText, const char *message, const char *originalFmt)
{
  const char *v7; 
  char v11; 
  int v12; 
  const char *v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  const char *v16; 
  scrContext_t *i; 
  __int64 v19; 
  unsigned int v20; 
  const char *v21; 
  const char *v22; 
  char *j; 
  const char *v24; 
  char *ret_web_link; 
  char webLink[128]; 

  v7 = originalFmt;
  webLink[0] = 0;
  Sys_EnterCriticalSection(CRITSECT_ASSERT);
  v11 = *exprText;
  v12 = 0;
  v13 = exprText;
  if ( *exprText )
  {
    v14 = *exprText;
    do
    {
      ++v13;
      v12 = v14 ^ (16777619 * v12);
      v14 = *v13;
    }
    while ( *v13 );
  }
  v15 = *originalFmt;
  if ( *originalFmt )
  {
    do
    {
      ++v7;
      v12 = v15 ^ (16777619 * v12);
      v15 = *v7;
    }
    while ( *v7 );
  }
  checksum = v12;
  if ( !v11 || (v16 = "\n\t", !*message) )
    v16 = (char *)&queryFormat.fmt + 3;
  HIDWORD(ret_web_link) = HIDWORD(v16);
  Com_sprintf_truncate(outputDebugString, 0x400ui64, "Assert Expression [0x%08X]:%s\n    %s%s%s\n%s(%d)\nCompiled:%s %s\n\n");
  Sys_XB3OutputDebugString(outputDebugString);
  if ( IsDebuggerPresent() )
  {
    Sys_LeaveCriticalSection(CRITSECT_ASSERT);
    return 1;
  }
  else
  {
    if ( g_isHandlingAssert )
    {
      BB_Alert(filename, line, "assert", checksum, message, -1, webLink, 0x80u, NULL);
      BuildAssertMessage(checksum, exprText, v16, message, filename, line, type, 3, s_recursiveAssertMessage, 4096, webLink);
      if ( g_isHandlingAssert == 1 )
      {
        g_isHandlingAssert = 2;
        Com_Printf(16, "\n\nASSERTBEGIN - ( Recursive assert )---------------------------------------------\n");
        Com_Printf(16, (const char *)&queryFormat, s_recursiveAssertMessage);
        Com_Printf(16, "\nASSERTEND - ( Recursive assert ) ----------------------------------------------\n\n");
      }
      NET_RemoteDbgHostAssertHandler(s_assertMessage);
      if ( IsDebuggerPresent() )
        __debugbreak();
      else
        Sys_Error((const ObfuscateErrorText)&queryFormat, s_sysErrorAssertMessage);
    }
    g_isHandlingAssert = 1;
    for ( i = ScriptContext_GetFirst(); i; i = ScriptContext_GetNext(i) )
      Scr_VM_PrintCallstack(i);
    v19 = 10i64;
    do
    {
      NET_RemoteDbgHostFrame();
      --v19;
    }
    while ( v19 );
    v20 = checksum;
    v21 = "<unknown>";
    v22 = "<unknown>";
    if ( filename )
      v22 = filename;
    if ( message )
      v21 = message;
    for ( j = strstr_0(v22, "\\"); j; j = strstr_0(j + 1, "\\") )
      v22 = j + 1;
    LODWORD(ret_web_link) = line;
    Com_sprintf_truncate(s_sysErrorAssertMessage, 0x1000ui64, &byte_144160AD0, v20, v21, v22, ret_web_link);
    BB_Alert(filename, line, "assert", checksum, message, -1, webLink, 0x80u, NULL);
    BuildAssertMessage(checksum, exprText, v16, message, filename, line, type, 3, s_assertMessage, 4096, webLink);
    Com_Printf(1, "ASSERTBEGIN -------------------------------------------------------------------\n");
    Com_Printf(1, "%s\n", s_assertMessage);
    Com_Printf(1, "ASSERTEND ---------------------------------------------------------------------\n");
    Com_LogFileFlush();
    if ( Sys_IsMainThread() )
    {
      v24 = j_va((const char *)&stru_143FB69FC, message);
      SV_Demo_AutoSave(COUNT, v24, 0, 1);
    }
    if ( AssertCallback )
      AssertCallback();
    NET_RemoteDbgHostAssertHandler(s_assertMessage);
    if ( !IsDebuggerPresent() )
      Sys_Error((const ObfuscateErrorText)&queryFormat, s_sysErrorAssertMessage);
    g_isHandlingAssert = 0;
    Sys_LeaveCriticalSection(CRITSECT_ASSERT);
    return 0;
  }
}

