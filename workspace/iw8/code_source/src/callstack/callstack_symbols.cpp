/*
==============
Callstack_StackTraceToString
==============
*/

unsigned __int64 __fastcall Callstack_StackTraceToString(unsigned int ignoreCount, char *outBuf, const unsigned __int64 outBufSize)
{
  return ?Callstack_StackTraceToString@@YA_KIPEAD_K@Z(ignoreCount, outBuf, outBufSize);
}

/*
==============
Callstack_ResolveToString
==============
*/

unsigned __int64 __fastcall Callstack_ResolveToString(const unsigned __int64 *addresses, unsigned int addressCount, char *outBuf, const unsigned __int64 outBufSize)
{
  return ?Callstack_ResolveToString@@YA_KPEB_KIPEAD_K@Z(addresses, addressCount, outBuf, outBufSize);
}

/*
==============
Callstack_ResolveToString
==============
*/
unsigned __int64 Callstack_ResolveToString(const unsigned __int64 *addresses, unsigned int addressCount, char *outBuf, const unsigned __int64 outBufSize)
{
  __int64 v4; 
  const unsigned __int64 *v7; 
  Callstack_Entry *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int count; 
  char *v12; 
  unsigned int i; 
  Callstack_Entry *v14; 
  char *v15; 
  const char *moduleName; 
  int v17; 
  const char *bestFunctionFilename; 
  char *v19; 
  unsigned __int64 address; 
  char *v21; 
  int v22; 
  char *v23; 
  int v24; 
  unsigned __int64 v25; 
  Callstack callstack; 

  v4 = addressCount;
  v7 = addresses;
  if ( !addresses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols.cpp", 80, ASSERT_TYPE_ASSERT, "(addresses)", (const char *)&queryFormat, "addresses") )
    __debugbreak();
  if ( !outBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols.cpp", 81, ASSERT_TYPE_ASSERT, "(outBuf)", (const char *)&queryFormat, "outBuf") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  memset_0(s_resolveToStringCallstack, 0, sizeof(s_resolveToStringCallstack));
  if ( (_DWORD)v4 )
  {
    v8 = s_resolveToStringCallstack;
    v9 = v4;
    do
    {
      v10 = *v7++;
      v8->address = v10;
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  callstack.entries = s_resolveToStringCallstack;
  callstack.count = v4;
  Callstack_ResolveSymbols(&callstack);
  if ( !outBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols.cpp", 22, ASSERT_TYPE_ASSERT, "(outBuf)", (const char *)&queryFormat, "outBuf") )
    __debugbreak();
  count = callstack.count;
  *outBuf = 0;
  v12 = outBuf;
  for ( i = 0; i < count; ++i )
  {
    v14 = &callstack.entries[i];
    if ( v14->moduleName[0] )
    {
      v15 = strrchr_0(v14->moduleName, 92);
      if ( v15 )
        moduleName = v15 + 1;
      else
        moduleName = v14->moduleName;
      v17 = Com_sprintf_truncate(v12, outBufSize + outBuf - v12, "%s:    ", moduleName);
      bestFunctionFilename = v14->bestFunctionFilename;
      if ( v17 < 0 )
        v17 = 0;
      v19 = &v12[v17];
      address = v14->address;
      v21 = &outBuf[outBufSize - (_QWORD)v19];
      if ( v14->bestFunction[0] )
      {
        v22 = Com_sprintf_truncate(v19, (unsigned __int64)v21, "%s        ...%s, addr 0x%016zx", v14->bestFunction, v14->bestFunctionFilename, address);
      }
      else if ( *bestFunctionFilename )
      {
        v22 = Com_sprintf_truncate(v19, (unsigned __int64)v21, " ...%s, addr 0x%016zx", bestFunctionFilename, address);
      }
      else
      {
        v22 = Com_sprintf_truncate(v19, (unsigned __int64)v21, " ...addr 0x%016zx", address);
      }
      if ( v22 < 0 )
        v22 = 0;
      v23 = &v19[v22];
      v24 = Com_sprintf_truncate(v23, outBufSize + outBuf - v23, "\n");
      count = callstack.count;
      if ( v24 < 0 )
        v24 = 0;
      v12 = &v23[v24];
    }
  }
  v25 = v12 - outBuf;
  if ( v25 > outBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_symbols.cpp", 70, ASSERT_TYPE_ASSERT, "(strLength <= outBufSize)", (const char *)&queryFormat, "strLength <= outBufSize") )
    __debugbreak();
  Sys_LeaveCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  return v25;
}

/*
==============
Callstack_StackTraceToString
==============
*/
unsigned __int64 Callstack_StackTraceToString(unsigned int ignoreCount, char *outBuf, const unsigned __int64 outBufSize)
{
  unsigned int v6; 
  unsigned __int64 v7; 

  Sys_EnterCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  v6 = Callstack_StackTrace(addresses, 0x20u, ignoreCount + 1);
  v7 = Callstack_ResolveToString(addresses, v6, outBuf, outBufSize);
  Sys_LeaveCriticalSection(CRITSECT_CALLSTACK_SYMBOLS);
  return v7;
}

