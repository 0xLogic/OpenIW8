/*
==============
swprintf
==============
*/

int swprintf(wchar_t *const _Buffer, const wchar_t *const _Format, ...)
{
  return ?swprintf@@YAHQEA_WQEB_WZZ(_Buffer, _Format);
}

/*
==============
swprintf_s<32>
==============
*/

int swprintf_s<32>(wchar_t (*_Buffer)[32], const wchar_t *_Format, ...)
{
  return ??$swprintf_s@$0CA@@@YAHAEAY0CA@_WPEB_WZZ(_Buffer, _Format);
}

/*
==============
swprintf
==============
*/
int swprintf(wchar_t *const _Buffer, const unsigned __int64 _BufferCount, const wchar_t *const _Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vswprintf(*v6, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
swprintf_s
==============
*/
int swprintf_s(wchar_t *const _Buffer, const unsigned __int64 _BufferCount, const wchar_t *const _Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vswprintf_s(*v6, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
swprintf_s<32>
==============
*/
int swprintf_s<32>(wchar_t (*_Buffer)[32], const wchar_t *_Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vswprintf_s(*v4, (wchar_t *)_Buffer, 0x20ui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
_snwprintf
==============
*/
int snwprintf(wchar_t *_Buffer, unsigned __int64 _BufferCount, const wchar_t *_Format, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vswprintf(*v6 | 1, _Buffer, _BufferCount, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
swprintf
==============
*/
int swprintf(wchar_t *const _Buffer, const wchar_t *const _Format, ...)
{
  unsigned __int64 *v4; 
  int result; 
  va_list va; 

  va_start(va, _Format);
  v4 = j___local_stdio_printf_options();
  result = __stdio_common_vswprintf(*v4, _Buffer, 0x7FFFFFFFui64, _Format, NULL, va);
  if ( result < 0 )
    return -1;
  return result;
}

