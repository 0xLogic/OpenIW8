/*
==============
CoreAssert_SetCallbackHandler
==============
*/

bool (__fastcall *__fastcall CoreAssert_SetCallbackHandler(bool (__fastcall *assertCallbackFn)(const char *, int, AssertType, const char *, const char *, const char *)))(const char *, int, AssertType, const char *, const char *, const char *)
{
  return ?CoreAssert_SetCallbackHandler@@YAP6A_NPEBDHW4AssertType@@000@ZP6A_N0H1000@Z@Z(assertCallbackFn);
}

/*
==============
CoreAssert_Handler
==============
*/

bool CoreAssert_Handler(const char *filename, int line, AssertType type, const char *expr, const char *fmt, ...)
{
  return ?CoreAssert_Handler@@YA_NPEBDHW4AssertType@@00ZZ(filename, line, type, expr, fmt);
}

/*
==============
CoreAssert_Handler
==============
*/
bool CoreAssert_Handler(const char *filename, int line, AssertType type, const char *expr, const char *fmt, ...)
{
  unsigned __int64 *v9; 
  FILE *v11; 
  char Buffer[2048]; 
  va_list va; 

  va_start(va, fmt);
  v9 = j___local_stdio_printf_options();
  __stdio_common_vsnprintf_s(*v9, Buffer, 0x800ui64, 0xFFFFFFFFFFFFFFFFui64, fmt, NULL, va);
  Buffer[2047] = 0;
  if ( gCoreAssertCallback )
    return gCoreAssertCallback(filename, line, type, expr, Buffer, fmt);
  j_printf("ASSERT\n%s(%i): (%s), %s\n", filename, (unsigned int)line, expr, Buffer);
  v11 = __acrt_iob_func(1u);
  fflush(v11);
  return 1;
}

/*
==============
CoreAssert_SetCallbackHandler
==============
*/
bool (*CoreAssert_SetCallbackHandler(bool (*assertCallbackFn)(const char *, int, AssertType, const char *, const char *, const char *)))(const char *, int, AssertType, const char *, const char *, const char *)
{
  bool (__fastcall *result)(const char *, int, AssertType, const char *, const char *, const char *); 

  result = gCoreAssertCallback;
  gCoreAssertCallback = assertCallbackFn;
  return result;
}

