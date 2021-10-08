/*
==============
Com_AssertHandler
==============
*/

bool __fastcall Com_AssertHandler(const char *filename, int line, AssertType type, const char *expression, const char *message, const char *originalFmt)
{
  return j_MyAssertHandler(filename, line, type, expression, message, originalFmt);
}

/*
==============
Com_ErrorHandler
==============
*/
void Com_ErrorHandler(const char *file, int line, const char *message)
{
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14416E138, 516i64, file, line, message);
}

/*
==============
Com_PrintHandler
==============
*/
void Com_PrintHandler(CorePrintType printType, const char *fmt, char *vargs)
{
  char dest[4096]; 

  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, fmt, vargs);
  if ( printType == CORE_PRINT_TYPE_ERROR )
  {
    Com_PrintError(0, "ERROR: %s", dest);
  }
  else if ( printType == CORE_PRINT_TYPE_WARNING )
  {
    Com_PrintWarning(0, "WARNING: %s", dest);
  }
  else if ( printType )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\core_lib_hooks.cpp", 36, ASSERT_TYPE_SANITY, "( false )", (const char *)&queryFormat, "false") )
      __debugbreak();
  }
  else
  {
    Com_Printf(0, (const char *)&queryFormat, dest);
  }
}

/*
==============
Com_InitCoreLibHooks
==============
*/
bool (*Com_InitCoreLibHooks())(const char *, int, AssertType, const char *, const char *, const char *)
{
  bool (__fastcall *result)(const char *, int, AssertType, const char *, const char *, const char *); 

  if ( !s_hooked )
  {
    s_hooked = 1;
    CorePrint_SetCallbackHandler(Com_PrintHandler);
    CoreError_SetCallbackHandler(Com_ErrorHandler);
    return CoreAssert_SetCallbackHandler(Com_AssertHandler);
  }
  return result;
}

