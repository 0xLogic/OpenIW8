/*
==============
bdRegisterCustomAssertHandler
==============
*/

void __fastcall bdRegisterCustomAssertHandler(void (__fastcall *const customFunction)(const bool, const char *const, const char *const, const char *const, const unsigned int, const char *const, char *))
{
  ?bdRegisterCustomAssertHandler@@YAXQ6AX_NQEBD11I1PEAD@Z@Z(customFunction);
}

/*
==============
bdHandleAssert
==============
*/

void bdHandleAssert(const bool expr, const char *const exprString, const char *const file, const char *const function, const unsigned int line, const char *const format, ...)
{
  ?bdHandleAssert@@YAX_NQEBD11I1ZZ(expr, exprString, file, function, line, format);
}

/*
==============
bdHandleAssert
==============
*/
void bdHandleAssert(const bool expr, const char *const exprString, const char *const file, const char *const function, const unsigned int line, const char *const format, ...)
{
  unsigned __int64 *v9; 
  int v10; 
  char Buffer[256]; 
  va_list va; 

  va_start(va, format);
  if ( g_CustomAssertHandler )
  {
    g_CustomAssertHandler(expr, exprString, file, function, line, format, va);
  }
  else if ( !expr )
  {
    memset_0(Buffer, 0, sizeof(Buffer));
    v9 = j___local_stdio_printf_options();
    v10 = __stdio_common_vsprintf(*v9 | 2, NULL, 0i64, format, NULL, va);
    __stdio_common_vsnprintf_s(*v9, Buffer, 0x100ui64, 0xFFFFFFFFFFFFFFFFui64, format, NULL, va);
    if ( v10 < 0 )
      v10 = -1;
    if ( (unsigned int)v10 >= 0x100 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdPlatformError", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformerror\\bdplatformerror.cpp", "bdHandleAssert", 0x36u, "Assert Message truncated", 0i64);
    if ( exprString )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, NULL, file, function, line, "BD_ASSERT(%s) failed. \"%s\"", exprString, Buffer);
    else
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, NULL, file, function, line, "BD_ASSERT failed. \"%s\"", Buffer);
    DebugBreak();
  }
}

/*
==============
bdRegisterCustomAssertHandler
==============
*/
void bdRegisterCustomAssertHandler(void (*const customFunction)(const bool, const char *const, const char *const, const char *const, const unsigned int, const char *const, char *))
{
  g_CustomAssertHandler = customFunction;
}

