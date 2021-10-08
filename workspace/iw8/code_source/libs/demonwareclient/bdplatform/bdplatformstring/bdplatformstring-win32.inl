/*
==============
bdVsnprintf
==============
*/

int __fastcall bdVsnprintf(char *buf, unsigned __int64 maxlen, const char *format, char *argPtr)
{
  return ?bdVsnprintf@@YAHPEAD_KPEBD0@Z(buf, maxlen, format, argPtr);
}

/*
==============
bdVsnprintf
==============
*/
__int64 bdVsnprintf(char *buf, unsigned __int64 maxlen, const char *format, char *argPtr)
{
  unsigned __int64 *v8; 
  int v9; 

  v8 = j___local_stdio_printf_options();
  v9 = __stdio_common_vsprintf(*v8 | 2, NULL, 0i64, format, NULL, argPtr);
  __stdio_common_vsnprintf_s(*v8, buf, maxlen, 0xFFFFFFFFFFFFFFFFui64, format, NULL, argPtr);
  if ( v9 < 0 )
    return (unsigned int)-1;
  return (unsigned int)v9;
}

