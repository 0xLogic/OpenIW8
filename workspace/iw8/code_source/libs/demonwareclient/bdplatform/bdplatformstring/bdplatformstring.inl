/*
==============
bdStrlen
==============
*/

unsigned __int64 __fastcall bdStrlen(const wchar_t *const s)
{
  return ?bdStrlen@@YA_KQEB_W@Z(s);
}

/*
==============
bdStrlcat
==============
*/

unsigned __int64 __fastcall bdStrlcat(char *const dst, const char *const src, const unsigned __int64 size)
{
  return ?bdStrlcat@@YA_KQEADQEBD_K@Z(dst, src, size);
}

/*
==============
bdStrlcpy
==============
*/

unsigned __int64 __fastcall bdStrlcpy(char *const dst, const char *const src, const unsigned __int64 size)
{
  return ?bdStrlcpy@@YA_KQEADQEBD_K@Z(dst, src, size);
}

/*
==============
bdFprintf
==============
*/

int bdFprintf(void *stream, const char *format, ...)
{
  return ?bdFprintf@@YAHPEAXPEBDZZ(stream, format);
}

/*
==============
bdSnprintf
==============
*/

int bdSnprintf(char *buf, const unsigned __int64 maxlen, const char *format, ...)
{
  return ?bdSnprintf@@YAHPEAD_KPEBDZZ(buf, maxlen, format);
}

/*
==============
bdStrlen
==============
*/

unsigned __int64 __fastcall bdStrlen(const char *const s)
{
  return ?bdStrlen@@YA_KQEBD@Z(s);
}

/*
==============
bdFprintf
==============
*/
int bdFprintf(void *stream, const char *format, ...)
{
  unsigned __int64 *v4; 
  va_list va; 

  va_start(va, format);
  v4 = j___local_stdio_printf_options();
  return __stdio_common_vfprintf(*v4, (FILE *)stream, format, NULL, va);
}

/*
==============
bdStrlcpy
==============
*/
unsigned __int64 bdStrlcpy(char *const dst, const char *const src, const unsigned __int64 size)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  bool v8; 
  size_t v9; 

  bdHandleAssert(src != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( src[v6] );
  if ( size && dst )
  {
    v7 = size - 1;
    v8 = v6 < size - 1;
    v9 = v6;
    if ( !v8 )
      v9 = v7;
    memcpy_0(dst, src, v9);
    dst[v9] = 0;
  }
  return v6;
}

/*
==============
bdSnprintf
==============
*/
__int64 bdSnprintf(char *buf, const unsigned __int64 maxlen, const char *format, ...)
{
  unsigned __int64 *v6; 
  int v7; 
  va_list va; 

  va_start(va, format);
  v6 = j___local_stdio_printf_options();
  v7 = __stdio_common_vsprintf(*v6 | 2, NULL, 0i64, format, NULL, va);
  __stdio_common_vsnprintf_s(*v6, buf, maxlen, 0xFFFFFFFFFFFFFFFFui64, format, NULL, va);
  if ( v7 < 0 )
    return (unsigned int)-1;
  return (unsigned int)v7;
}

/*
==============
bdStrlen
==============
*/
unsigned __int64 bdStrlen(const wchar_t *const s)
{
  unsigned __int64 result; 

  bdHandleAssert(s != NULL, "(s != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdhttp\\bdhttpplatform\\bdhttpxboxone.cpp", "bdStrlen", 0x422u, "Null ptr in bdStrlen");
  result = -1i64;
  do
    ++result;
  while ( s[result] );
  return result;
}

/*
==============
bdStrlen
==============
*/
unsigned __int64 bdStrlen(const char *const s)
{
  unsigned __int64 result; 

  bdHandleAssert(s != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  result = -1i64;
  do
    ++result;
  while ( s[result] );
  return result;
}

/*
==============
bdStrlcat
==============
*/
unsigned __int64 bdStrlcat(char *const dst, const char *const src, const unsigned __int64 size)
{
  __int64 v6; 
  unsigned __int64 v7; 

  bdHandleAssert(dst != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  v7 = -1i64;
  do
    ++v7;
  while ( dst[v7] );
  if ( v7 < size - 1 )
    return v7 + bdStrlcpy(&dst[v7], src, size - v7);
  bdHandleAssert(src != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  while ( src[++v6] != 0 )
    ;
  return v7 + v6;
}

