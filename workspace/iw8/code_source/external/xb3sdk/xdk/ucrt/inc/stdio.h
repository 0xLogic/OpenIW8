/*
==============
sprintf_s<2>
==============
*/

int sprintf_s<2>(char (*_Buffer)[2], const char *_Format, ...)
{
  return ??$sprintf_s@$01@@YAHAEAY01DPEBDZZ(_Buffer, _Format);
}

/*
==============
sprintf_s<1024>
==============
*/

int sprintf_s<1024>(char (*_Buffer)[1024], const char *_Format, ...)
{
  return ??$sprintf_s@$0EAA@@@YAHAEAY0EAA@DPEBDZZ(_Buffer, _Format);
}

/*
==============
sprintf_s<4>
==============
*/

int sprintf_s<4>(char (*_Buffer)[4], const char *_Format, ...)
{
  return ??$sprintf_s@$03@@YAHAEAY03DPEBDZZ(_Buffer, _Format);
}

/*
==============
sprintf
==============
*/
int sprintf(char *const _Buffer, const char *const _Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v4 | 1, _Buffer, 0xFFFFFFFFFFFFFFFFui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
sscanf_s
==============
*/
int sscanf_s(const char *const _Buffer, const char *const _Format, ...)
{
  unsigned __int64 *v4; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_scanf_options();
  return __stdio_common_vsscanf(*v4 | 1, _Buffer, 0xFFFFFFFFFFFFFFFFui64, _Format, NULL, va);
}

/*
==============
fprintf
==============
*/
int fprintf(_iobuf *const _Stream, const char *const _Format, ...)
{
  unsigned __int64 *v4; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  return __stdio_common_vfprintf(*v4, _Stream, _Format, NULL, va);
}

/*
==============
snprintf
==============
*/
int snprintf(char *const _Buffer, const unsigned __int64 _BufferCount, const char *const _Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v6 | 2, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
sscanf
==============
*/
int sscanf(const char *const _Buffer, const char *const _Format, ...)
{
  unsigned __int64 *v4; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_scanf_options();
  return __stdio_common_vsscanf(*v4, _Buffer, 0xFFFFFFFFFFFFFFFFui64, _Format, NULL, va);
}

/*
==============
sprintf_s
==============
*/
int sprintf_s(char *const _Buffer, const unsigned __int64 _BufferCount, const char *const _Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf_s(*v6, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
sprintf_s<2>
==============
*/
int sprintf_s<2>(char (*_Buffer)[2], const char *_Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf_s(*v4, (char *)_Buffer, 2ui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
sprintf_s<4>
==============
*/
int sprintf_s<4>(char (*_Buffer)[4], const char *_Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf_s(*v4, (char *)_Buffer, 4ui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
sprintf_s<1024>
==============
*/
int sprintf_s<1024>(char (*_Buffer)[1024], const char *_Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf_s(*v4, (char *)_Buffer, 0x400ui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
_snprintf_s
==============
*/
int snprintf_s(char *const _Buffer, const unsigned __int64 _BufferCount, const unsigned __int64 _MaxCount, const char *const _Format, ...)
{
  unsigned __int64 *v8; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v8 = j___local_stdio_printf_options();
  result = __stdio_common_vsnprintf_s(*v8, _Buffer, _BufferCount, _MaxCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
_snprintf
==============
*/
int snprintf(char *const _Buffer, const unsigned __int64 _BufferCount, const char *const _Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v6 | 1, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
vsnprintf
==============
*/
int vsnprintf(char *const _Buffer, const unsigned __int64 _BufferCount, const char *const _Format, char *_ArgList)
{
  unsigned __int64 *v8; 
  int result; 

  v8 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v8 | 2, _Buffer, _BufferCount, _Format, NULL, _ArgList);
  if ( result < 0 )
    return -1;
  return result;
}

