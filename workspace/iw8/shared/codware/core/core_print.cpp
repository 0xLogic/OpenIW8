/*
==============
Core_PrintError_Unchecked
==============
*/

void Core_PrintError_Unchecked(const char *fmt, ...)
{
  ?Core_PrintError_Unchecked@@YAXPEBDZZ(fmt);
}

/*
==============
Core_PrintInfo_Unchecked
==============
*/

void Core_PrintInfo_Unchecked(const char *fmt, ...)
{
  ?Core_PrintInfo_Unchecked@@YAXPEBDZZ(fmt);
}

/*
==============
Core_PrintHelper
==============
*/

void __fastcall Core_PrintHelper(CorePrintType printType, const char *fmt, char *vargs)
{
  ?Core_PrintHelper@@YAXW4CorePrintType@@PEBDPEAD@Z(printType, fmt, vargs);
}

/*
==============
Core_PrintVA
==============
*/

void __fastcall Core_PrintVA(CorePrintType printType, const char *fmt, char *vargs)
{
  ?Core_PrintVA@@YAXW4CorePrintType@@PEBDPEAD@Z(printType, fmt, vargs);
}

/*
==============
Core_PrintWarning_Unchecked
==============
*/

void Core_PrintWarning_Unchecked(const char *fmt, ...)
{
  ?Core_PrintWarning_Unchecked@@YAXPEBDZZ(fmt);
}

/*
==============
CorePrint_SetCallbackHandler
==============
*/

void (__fastcall *__fastcall CorePrint_SetCallbackHandler(void (__fastcall *callback)(CorePrintType, const char *, char *)))(CorePrintType, const char *, char *)
{
  return ?CorePrint_SetCallbackHandler@@YAP6AXW4CorePrintType@@PEBDPEAD@ZP6AX012@Z@Z(callback);
}

/*
==============
CorePrint_SetCallbackHandler
==============
*/
void (*CorePrint_SetCallbackHandler(void (*callback)(CorePrintType, const char *, char *)))(CorePrintType, const char *, char *)
{
  void (__fastcall *result)(CorePrintType, const char *, char *); 

  result = gCorePrintCallback;
  gCorePrintCallback = callback;
  return result;
}

/*
==============
Core_PrintInfo_Unchecked
==============
*/
void Core_PrintInfo_Unchecked(const char *fmt, ...)
{
  FILE *v2; 
  unsigned __int64 *v3; 
  va_list va; 

  va_start(va, fmt);
  if ( gCorePrintCallback )
  {
    gCorePrintCallback(CORE_PRINT_TYPE_INFO, fmt, va);
  }
  else
  {
    v2 = __acrt_iob_func(1u);
    v3 = j___local_stdio_printf_options();
    __stdio_common_vfprintf(*v3, v2, fmt, NULL, va);
  }
}

/*
==============
Core_PrintWarning_Unchecked
==============
*/
void Core_PrintWarning_Unchecked(const char *fmt, ...)
{
  FILE *v2; 
  unsigned __int64 *v3; 
  va_list va; 

  va_start(va, fmt);
  if ( gCorePrintCallback )
  {
    gCorePrintCallback(CORE_PRINT_TYPE_WARNING, fmt, va);
  }
  else
  {
    v2 = __acrt_iob_func(1u);
    v3 = j___local_stdio_printf_options();
    __stdio_common_vfprintf(*v3, v2, fmt, NULL, va);
  }
}

/*
==============
Core_PrintError_Unchecked
==============
*/
void Core_PrintError_Unchecked(const char *fmt, ...)
{
  FILE *v2; 
  unsigned __int64 *v3; 
  va_list va; 

  va_start(va, fmt);
  if ( gCorePrintCallback )
  {
    gCorePrintCallback(CORE_PRINT_TYPE_ERROR, fmt, va);
  }
  else
  {
    v2 = __acrt_iob_func(1u);
    v3 = j___local_stdio_printf_options();
    __stdio_common_vfprintf(*v3, v2, fmt, NULL, va);
  }
}

/*
==============
Core_PrintVA
==============
*/

void __fastcall Core_PrintVA(CorePrintType printType, const char *fmt, char *vargs)
{
  Core_PrintHelper(printType, fmt, vargs);
}

/*
==============
Core_PrintHelper
==============
*/
void Core_PrintHelper(CorePrintType printType, const char *fmt, char *vargs)
{
  FILE *v5; 
  unsigned __int64 *v6; 

  if ( gCorePrintCallback )
  {
    gCorePrintCallback(printType, fmt, vargs);
  }
  else
  {
    v5 = __acrt_iob_func(1u);
    v6 = j___local_stdio_printf_options();
    __stdio_common_vfprintf(*v6, v5, fmt, NULL, vargs);
  }
}

