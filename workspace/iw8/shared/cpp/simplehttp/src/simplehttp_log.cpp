/*
==============
simplehttp_log_message
==============
*/

void simplehttp_log_message(SimpleHttpLogLevel level, const char *format, ...)
{
  ?simplehttp_log_message@@YAXW4SimpleHttpLogLevel@@PEBDZZ(level, format);
}

/*
==============
simplehttp_log_init
==============
*/

int __fastcall simplehttp_log_init(void (__fastcall *callback)(SimpleHttpLogLevel, const char *))
{
  return ?simplehttp_log_init@@YAHP6AXW4SimpleHttpLogLevel@@PEBD@Z@Z(callback);
}

/*
==============
simplehttp_log_init
==============
*/
__int64 simplehttp_log_init(void (*callback)(SimpleHttpLogLevel, const char *))
{
  if ( !callback )
    return 0xFFFFFFFFi64;
  s_callback_0 = callback;
  return 0i64;
}

/*
==============
simplehttp_log_message
==============
*/
void simplehttp_log_message(SimpleHttpLogLevel level, const char *format, ...)
{
  unsigned __int64 *v4; 
  char Buffer[4096]; 
  va_list va; 

  va_start(va, format);
  v4 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v4 | 2, Buffer, 0x1000ui64, format, NULL, va);
  s_callback_0(level, Buffer);
}

