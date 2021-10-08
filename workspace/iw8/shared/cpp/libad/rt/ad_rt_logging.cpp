/*
==============
AD_LoggingCheckInitStatus
==============
*/

bool __fastcall AD_LoggingCheckInitStatus()
{
  return ?AD_LoggingCheckInitStatus@@YA_NXZ();
}

/*
==============
AD_LoggingInit
==============
*/

void __fastcall AD_LoggingInit(const AD_RT_Options *options)
{
  ?AD_LoggingInit@@YAXPEBUAD_RT_Options@@@Z(options);
}

/*
==============
AD_LogFuncf
==============
*/

void AD_LogFuncf(const char *file, const char *line, const AD_LogCategory category, const char *string, ...)
{
  ?AD_LogFuncf@@YAXPEBD0W4AD_LogCategory@@0ZZ(file, line, category, string);
}

/*
==============
AD_LogFunc
==============
*/

void __fastcall AD_LogFunc(const char *file, const char *line, const AD_LogCategory category, const char *string)
{
  ?AD_LogFunc@@YAXPEBD0W4AD_LogCategory@@0@Z(file, line, category, string);
}

/*
==============
AD_SetLogLevel
==============
*/

void __fastcall AD_SetLogLevel(AD_LogCategory minCategory)
{
  ?AD_SetLogLevel@@YAXW4AD_LogCategory@@@Z(minCategory);
}

/*
==============
AD_LoggingDestroy
==============
*/

void AD_LoggingDestroy(void)
{
  ?AD_LoggingDestroy@@YAXXZ();
}

/*
==============
AD_LogFunc
==============
*/
void AD_LogFunc(const char *file, const char *line, const AD_LogCategory category, const char *string)
{
  if ( s_externalLogging && (category == 6 || category >= (unsigned int)s_logLevel) )
    s_externalLogging(file, line, category, string);
}

/*
==============
AD_LogFuncf
==============
*/
void AD_LogFuncf(const char *file, const char *line, const AD_LogCategory category, const char *string, ...)
{
  unsigned __int64 *v8; 
  char Buffer[1024]; 
  va_list va; 

  va_start(va, string);
  if ( s_externalLogging && (category == 6 || category >= (unsigned int)s_logLevel) )
  {
    v8 = j___local_stdio_printf_options();
    __stdio_common_vsnprintf_s(*v8, Buffer, 0x400ui64, 0x400ui64, string, NULL, va);
    s_externalLogging(file, line, category, Buffer);
  }
}

/*
==============
AD_LoggingCheckInitStatus
==============
*/
bool AD_LoggingCheckInitStatus()
{
  return s_externalLogging != NULL;
}

/*
==============
AD_LoggingDestroy
==============
*/
void AD_LoggingDestroy(void)
{
  s_externalLogging = NULL;
}

/*
==============
AD_LoggingInit
==============
*/
void AD_LoggingInit(const AD_RT_Options *options)
{
  s_externalLogging = options->externalLogging;
  s_logLevel = Canceled;
}

/*
==============
AD_SetLogLevel
==============
*/
void AD_SetLogLevel(AD_LogCategory minCategory)
{
  s_logLevel = minCategory;
}

