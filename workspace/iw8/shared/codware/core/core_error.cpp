/*
==============
Core_ErrorHandler
==============
*/

void __noreturn Core_ErrorHandler(const char *file, int line, const char *fmt, ...)
{
  ?Core_ErrorHandler@@YAXPEBDH0ZZ(file, line, fmt);
}

/*
==============
CoreError_SetCallbackHandler
==============
*/

void (__fastcall *__fastcall CoreError_SetCallbackHandler(void (__fastcall *assertCallbackFn)(const char *, int, const char *)))(const char *, int, const char *)
{
  return ?CoreError_SetCallbackHandler@@YAP6AXPEBDH0@ZP6AX0H0@Z@Z(assertCallbackFn);
}

/*
==============
CoreError_SetCallbackHandler
==============
*/
void (*CoreError_SetCallbackHandler(void (*assertCallbackFn)(const char *, int, const char *)))(const char *, int, const char *)
{
  void (__fastcall *result)(const char *, int, const char *); 

  result = gCoreErrorCallback;
  gCoreErrorCallback = assertCallbackFn;
  return result;
}

/*
==============
Core_ErrorHandler
==============
*/
void __noreturn Core_ErrorHandler(const char *file, int line, const char *fmt, ...)
{
  unsigned __int64 *v6; 
  int v7; 
  size_t v8; 
  unsigned __int64 v9; 
  signed __int64 v10; 
  void *v11; 
  void *v12; 
  FILE *v13; 
  char Buffer[8]; 
  va_list va; 

  va_start(va, fmt);
  v6 = j___local_stdio_printf_options();
  v7 = __stdio_common_vsprintf(*v6 | 2, NULL, 0i64, fmt, NULL, va);
  if ( v7 < 0 )
    v7 = -1;
  v8 = v7 + 1i64;
  v9 = v7 + 16i64;
  if ( v9 <= v8 )
    v9 = 0xFFFFFFFFFFFFFF0i64;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0ui64;
  v11 = alloca(v10);
  v12 = alloca(v10);
  __stdio_common_vsprintf_s(*v6, Buffer, v8, fmt, NULL, va);
  *(_QWORD *)Buffer = 0i64;
  if ( gCoreErrorCallback )
  {
    gCoreErrorCallback(file, line, Buffer);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_error.cpp", 40, ASSERT_TYPE_SANITY, byte_14468E63E, "Error callback must terminate") )
      __debugbreak();
  }
  j_printf("ERROR\n%s(%i): %s\n", file, (unsigned int)line, Buffer);
  v13 = __acrt_iob_func(1u);
  fflush(v13);
  exit(1);
}

