/*
==============
Callstack_StackTrace
==============
*/

unsigned int __fastcall Callstack_StackTrace(unsigned __int64 *dest, unsigned int maxEntries, unsigned int ignoreFrames)
{
  return ?Callstack_StackTrace@@YAIPEA_KII@Z(dest, maxEntries, ignoreFrames);
}

/*
==============
Callstack_StackTrace
==============
*/
__int64 Callstack_StackTrace(unsigned __int64 *dest, unsigned int maxEntries, unsigned int ignoreFrames)
{
  unsigned int v6; 

  memset_0(dest, 0, 8i64 * maxEntries);
  v6 = RtlCaptureStackBackTrace(ignoreFrames + 1, maxEntries, (PVOID *)dest, NULL);
  if ( v6 > maxEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\callstack\\callstack_stacktrace_xb3.cpp", 16, ASSERT_TYPE_ASSERT, "(stackSize <= maxEntries)", (const char *)&queryFormat, "stackSize <= maxEntries") )
    __debugbreak();
  return v6;
}

