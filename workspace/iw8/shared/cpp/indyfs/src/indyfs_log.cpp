/*
==============
indyfs_log_message
==============
*/

void indyfs_log_message(IndyFsLogLevel level, const char *format, ...)
{
  ?indyfs_log_message@@YAXW4IndyFsLogLevel@@PEBDZZ(level, format);
}

/*
==============
indyfs_log_init
==============
*/

int __fastcall indyfs_log_init(void (__fastcall *callback)(IndyFsLogLevel, const char *))
{
  return ?indyfs_log_init@@YAHP6AXW4IndyFsLogLevel@@PEBD@Z@Z(callback);
}

/*
==============
indyfs_log_init
==============
*/
__int64 indyfs_log_init(void (*callback)(IndyFsLogLevel, const char *))
{
  s_callback = callback;
  return 0i64;
}

/*
==============
indyfs_log_message
==============
*/
void indyfs_log_message(IndyFsLogLevel level, const char *format, ...)
{
  unsigned __int64 *v4; 
  char Buffer[4096]; 
  va_list va; 

  va_start(va, format);
  v4 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v4 | 2, Buffer, 0x1000ui64, format, NULL, va);
  s_callback(level, Buffer);
}

